import rclpy # Python Client Library for ROS 2
from rclpy.node import Node # Handles the creation of nodes
from sensor_msgs.msg import Image # Image is the message type
from cv_bridge import CvBridge # Package to convert between ROS and OpenCV Images
import cv2 # OpenCV library
 import numpy as np
class Detector(Node):
  """
  Create an ImagePublisher class, which is a subclass of the Node class.
  """
 def __init__(self):
    super().__init__('image_subscriber')
    self.subscription = self.create_subscription(
      Image,
      'video_frames',
      self.listener_callback,
      10)
    self.br = CvBridge()
    self.thresholds = {"brown": (np.array([]), np.array([])),
                       "beige": (np.array([]), np.array([])),
                       "golden": (np.array([]), np.array([]))}
    self.detections = []
  def listener_callback(self, frame):
    """
    Callback function.
    """
    # Display the message on the console
    self.get_logger().info('Receiving video frame')

    # Convert ROS Image message to OpenCV image
    current_frame = self.br.imgmsg_to_cv2(frame)
    frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)


    for col, thres in self.thresholds:
      mask = cv2.inRange(frame, thres[0], thres[1])
      contours, _ = cv2.findContours(mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
      for cnt in contours:
        # Calculate area and remove small elements
        area = cv2.contourArea(cnt)
        if area > 100:
          x, y, w, h = cv2.boundingRect(cnt)


 

def main(args=None):

  rclpy.init(args=args)

  detector = Detector()
  
  rclpy.spin(detector)

  detector.destroy_node()


  rclpy.shutdown()
  
if __name__ == '__main__':
  main()