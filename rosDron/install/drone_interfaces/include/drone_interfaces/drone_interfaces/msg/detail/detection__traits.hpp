// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drone_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef DRONE_INTERFACES__MSG__DETAIL__DETECTION__TRAITS_HPP_
#define DRONE_INTERFACES__MSG__DETAIL__DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drone_interfaces/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace drone_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Detection & msg,
  std::ostream & out)
{
  out << "{";
  // member: bounding_box
  {
    if (msg.bounding_box.size() == 0) {
      out << "bounding_box: []";
    } else {
      out << "bounding_box: [";
      size_t pending_items = msg.bounding_box.size();
      for (auto item : msg.bounding_box) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: color_name
  {
    out << "color_name: ";
    rosidl_generator_traits::value_to_yaml(msg.color_name, out);
    out << ", ";
  }

  // member: gps_position
  {
    if (msg.gps_position.size() == 0) {
      out << "gps_position: []";
    } else {
      out << "gps_position: [";
      size_t pending_items = msg.gps_position.size();
      for (auto item : msg.gps_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bounding_box
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bounding_box.size() == 0) {
      out << "bounding_box: []\n";
    } else {
      out << "bounding_box:\n";
      for (auto item : msg.bounding_box) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: color_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color_name: ";
    rosidl_generator_traits::value_to_yaml(msg.color_name, out);
    out << "\n";
  }

  // member: gps_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gps_position.size() == 0) {
      out << "gps_position: []\n";
    } else {
      out << "gps_position:\n";
      for (auto item : msg.gps_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Detection & msg, bool use_flow_style = false)
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
  const drone_interfaces::msg::Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const drone_interfaces::msg::Detection & msg)
{
  return drone_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drone_interfaces::msg::Detection>()
{
  return "drone_interfaces::msg::Detection";
}

template<>
inline const char * name<drone_interfaces::msg::Detection>()
{
  return "drone_interfaces/msg/Detection";
}

template<>
struct has_fixed_size<drone_interfaces::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drone_interfaces::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drone_interfaces::msg::Detection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRONE_INTERFACES__MSG__DETAIL__DETECTION__TRAITS_HPP_
