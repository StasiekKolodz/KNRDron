// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drone_interfaces:msg/DetectionsList.idl
// generated code does not contain a copyright notice

#ifndef DRONE_INTERFACES__MSG__DETAIL__DETECTIONS_LIST__TRAITS_HPP_
#define DRONE_INTERFACES__MSG__DETAIL__DETECTIONS_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drone_interfaces/msg/detail/detections_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'detections_list'
#include "drone_interfaces/msg/detail/detection__traits.hpp"

namespace drone_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DetectionsList & msg,
  std::ostream & out)
{
  out << "{";
  // member: detections_list
  {
    if (msg.detections_list.size() == 0) {
      out << "detections_list: []";
    } else {
      out << "detections_list: [";
      size_t pending_items = msg.detections_list.size();
      for (auto item : msg.detections_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectionsList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: detections_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detections_list.size() == 0) {
      out << "detections_list: []\n";
    } else {
      out << "detections_list:\n";
      for (auto item : msg.detections_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectionsList & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace drone_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use drone_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_interfaces::msg::DetectionsList & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const drone_interfaces::msg::DetectionsList & msg)
{
  return drone_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drone_interfaces::msg::DetectionsList>()
{
  return "drone_interfaces::msg::DetectionsList";
}

template<>
inline const char * name<drone_interfaces::msg::DetectionsList>()
{
  return "drone_interfaces/msg/DetectionsList";
}

template<>
struct has_fixed_size<drone_interfaces::msg::DetectionsList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drone_interfaces::msg::DetectionsList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drone_interfaces::msg::DetectionsList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRONE_INTERFACES__MSG__DETAIL__DETECTIONS_LIST__TRAITS_HPP_
