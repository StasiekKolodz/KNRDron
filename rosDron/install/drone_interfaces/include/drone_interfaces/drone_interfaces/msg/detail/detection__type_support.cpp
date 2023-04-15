// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from drone_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "drone_interfaces/msg/detail/detection__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace drone_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Detection_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) drone_interfaces::msg::Detection(_init);
}

void Detection_fini_function(void * message_memory)
{
  auto typed_message = static_cast<drone_interfaces::msg::Detection *>(message_memory);
  typed_message->~Detection();
}

size_t size_function__Detection__bounding_box(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Detection__bounding_box(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Detection__bounding_box(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Detection__bounding_box(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Detection__bounding_box(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Detection__bounding_box(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Detection__bounding_box(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__Detection__gps_position(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__Detection__gps_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__Detection__gps_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__Detection__gps_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Detection__gps_position(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Detection__gps_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Detection__gps_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Detection_message_member_array[3] = {
  {
    "bounding_box",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces::msg::Detection, bounding_box),  // bytes offset in struct
    nullptr,  // default value
    size_function__Detection__bounding_box,  // size() function pointer
    get_const_function__Detection__bounding_box,  // get_const(index) function pointer
    get_function__Detection__bounding_box,  // get(index) function pointer
    fetch_function__Detection__bounding_box,  // fetch(index, &value) function pointer
    assign_function__Detection__bounding_box,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "color_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces::msg::Detection, color_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gps_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces::msg::Detection, gps_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__Detection__gps_position,  // size() function pointer
    get_const_function__Detection__gps_position,  // get_const(index) function pointer
    get_function__Detection__gps_position,  // get(index) function pointer
    fetch_function__Detection__gps_position,  // fetch(index, &value) function pointer
    assign_function__Detection__gps_position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Detection_message_members = {
  "drone_interfaces::msg",  // message namespace
  "Detection",  // message name
  3,  // number of fields
  sizeof(drone_interfaces::msg::Detection),
  Detection_message_member_array,  // message members
  Detection_init_function,  // function to initialize message memory (memory has to be allocated)
  Detection_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Detection_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Detection_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace drone_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<drone_interfaces::msg::Detection>()
{
  return &::drone_interfaces::msg::rosidl_typesupport_introspection_cpp::Detection_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, drone_interfaces, msg, Detection)() {
  return &::drone_interfaces::msg::rosidl_typesupport_introspection_cpp::Detection_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
