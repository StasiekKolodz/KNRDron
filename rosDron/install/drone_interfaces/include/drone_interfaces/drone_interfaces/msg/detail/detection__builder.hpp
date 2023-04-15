// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef DRONE_INTERFACES__MSG__DETAIL__DETECTION__BUILDER_HPP_
#define DRONE_INTERFACES__MSG__DETAIL__DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_interfaces/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_interfaces
{

namespace msg
{

namespace builder
{

class Init_Detection_gps_position
{
public:
  explicit Init_Detection_gps_position(::drone_interfaces::msg::Detection & msg)
  : msg_(msg)
  {}
  ::drone_interfaces::msg::Detection gps_position(::drone_interfaces::msg::Detection::_gps_position_type arg)
  {
    msg_.gps_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::msg::Detection msg_;
};

class Init_Detection_color_name
{
public:
  explicit Init_Detection_color_name(::drone_interfaces::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_gps_position color_name(::drone_interfaces::msg::Detection::_color_name_type arg)
  {
    msg_.color_name = std::move(arg);
    return Init_Detection_gps_position(msg_);
  }

private:
  ::drone_interfaces::msg::Detection msg_;
};

class Init_Detection_bounding_box
{
public:
  Init_Detection_bounding_box()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detection_color_name bounding_box(::drone_interfaces::msg::Detection::_bounding_box_type arg)
  {
    msg_.bounding_box = std::move(arg);
    return Init_Detection_color_name(msg_);
  }

private:
  ::drone_interfaces::msg::Detection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::msg::Detection>()
{
  return drone_interfaces::msg::builder::Init_Detection_bounding_box();
}

}  // namespace drone_interfaces

#endif  // DRONE_INTERFACES__MSG__DETAIL__DETECTION__BUILDER_HPP_
