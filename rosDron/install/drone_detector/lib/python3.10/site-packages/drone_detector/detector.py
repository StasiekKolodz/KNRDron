import rclpy # Python Client Library for ROS 2
from rclpy.node import Node # Handles the creation of nodes
from sensor_msgs.msg import Image # Image is the message type
from cv_bridge import CvBridge # Package to convert between ROS and OpenCV Images
import cv2 # OpenCV library
 
class Detector(Node):
  """
  Create an ImagePublisher class, which is a subclass of the Node class.
  """
  def __init__(self):
    super().__init__('image_subscriber')

 

def main(args=None):

  rclpy.init(args=args)

  detector = Detector()
  
  rclpy.spin(image_publisher)

  image_publisher.destroy_node()


  rclpy.shutdown()
  
if __name__ == '__main__':
  main()