// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_interfaces:msg/DetectionsList.idl
// generated code does not contain a copyright notice

#ifndef DRONE_INTERFACES__MSG__DETAIL__DETECTIONS_LIST__BUILDER_HPP_
#define DRONE_INTERFACES__MSG__DETAIL__DETECTIONS_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_interfaces/msg/detail/detections_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_interfaces
{

namespace msg
{

namespace builder
{

class Init_DetectionsList_detections_list
{
public:
  Init_DetectionsList_detections_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::drone_interfaces::msg::DetectionsList detections_list(::drone_interfaces::msg::DetectionsList::_detections_list_type arg)
  {
    msg_.detections_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::msg::DetectionsList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::msg::DetectionsList>()
{
  return drone_interfaces::msg::builder::Init_DetectionsList_detections_list();
}

}  // namespace drone_interfaces

#endif  // DRONE_INTERFACES__MSG__DETAIL__DETECTIONS_LIST__BUILDER_HPP_
