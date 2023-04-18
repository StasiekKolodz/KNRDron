// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from drone_interfaces:msg/DetectionsList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "drone_interfaces/msg/detail/detections_list__struct.hpp"
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

void DetectionsList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) drone_interfaces::msg::DetectionsList(_init);
}

void DetectionsList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<drone_interfaces::msg::DetectionsList *>(message_memory);
  typed_message->~DetectionsList();
}

size_t size_function__DetectionsList__detections_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<drone_interfaces::msg::Detection> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectionsList__detections_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<drone_interfaces::msg::Detection> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectionsList__detections_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<drone_interfaces::msg::Detection> *>(untyped_member);
  return &member[index];
}

void fetch_function__DetectionsList__detections_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const drone_interfaces::msg::Detection *>(
    get_const_function__DetectionsList__detections_list(untyped_member, index));
  auto & value = *reinterpret_cast<drone_interfaces::msg::Detection *>(untyped_value);
  value = item;
}

void assign_function__DetectionsList__detections_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<drone_interfaces::msg::Detection *>(
    get_function__DetectionsList__detections_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const drone_interfaces::msg::Detection *>(untyped_value);
  item = value;
}

void resize_function__DetectionsList__detections_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<drone_interfaces::msg::Detection> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DetectionsList_message_member_array[1] = {
  {
    "detections_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<drone_interfaces::msg::Detection>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces::msg::DetectionsList, detections_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectionsList__detections_list,  // size() function pointer
    get_const_function__DetectionsList__detections_list,  // get_const(index) function pointer
    get_function__DetectionsList__detections_list,  // get(index) function pointer
    fetch_function__DetectionsList__detections_list,  // fetch(index, &value) function pointer
    assign_function__DetectionsList__detections_list,  // assign(index, value) function pointer
    resize_function__DetectionsList__detections_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DetectionsList_message_members = {
  "drone_interfaces::msg",  // message namespace
  "DetectionsList",  // message name
  1,  // number of fields
  sizeof(drone_interfaces::msg::DetectionsList),
  DetectionsList_message_member_array,  // message members
  DetectionsList_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectionsList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DetectionsList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectionsList_message_members,
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
get_message_type_support_handle<drone_interfaces::msg::DetectionsList>()
{
  return &::drone_interfaces::msg::rosidl_typesupport_introspection_cpp::DetectionsList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, drone_interfaces, msg, DetectionsList)() {
  return &::drone_interfaces::msg::rosidl_typesupport_introspection_cpp::DetectionsList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
