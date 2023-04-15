// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from drone_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "drone_interfaces/msg/detail/detection__rosidl_typesupport_introspection_c.h"
#include "drone_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "drone_interfaces/msg/detail/detection__functions.h"
#include "drone_interfaces/msg/detail/detection__struct.h"


// Include directives for member types
// Member `color_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drone_interfaces__msg__Detection__init(message_memory);
}

void drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_fini_function(void * message_memory)
{
  drone_interfaces__msg__Detection__fini(message_memory);
}

size_t drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__bounding_box(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__bounding_box(
  const void * untyped_member, size_t index)
{
  const int32_t * member =
    (const int32_t *)(untyped_member);
  return &member[index];
}

void * drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__bounding_box(
  void * untyped_member, size_t index)
{
  int32_t * member =
    (int32_t *)(untyped_member);
  return &member[index];
}

void drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__bounding_box(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__bounding_box(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__bounding_box(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__bounding_box(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

size_t drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__gps_position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__gps_position(
  const void * untyped_member, size_t index)
{
  const int32_t * member =
    (const int32_t *)(untyped_member);
  return &member[index];
}

void * drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__gps_position(
  void * untyped_member, size_t index)
{
  int32_t * member =
    (int32_t *)(untyped_member);
  return &member[index];
}

void drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__gps_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__gps_position(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__gps_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__gps_position(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[3] = {
  {
    "bounding_box",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__msg__Detection, bounding_box),  // bytes offset in struct
    NULL,  // default value
    drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__bounding_box,  // size() function pointer
    drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__bounding_box,  // get_const(index) function pointer
    drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__bounding_box,  // get(index) function pointer
    drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__bounding_box,  // fetch(index, &value) function pointer
    drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__bounding_box,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "color_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__msg__Detection, color_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gps_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__msg__Detection, gps_position),  // bytes offset in struct
    NULL,  // default value
    drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__gps_position,  // size() function pointer
    drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__gps_position,  // get_const(index) function pointer
    drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__gps_position,  // get(index) function pointer
    drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__gps_position,  // fetch(index, &value) function pointer
    drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__gps_position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_members = {
  "drone_interfaces__msg",  // message namespace
  "Detection",  // message name
  3,  // number of fields
  sizeof(drone_interfaces__msg__Detection),
  drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array,  // message members
  drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_init_function,  // function to initialize message memory (memory has to be allocated)
  drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle = {
  0,
  &drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, msg, Detection)() {
  if (!drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle.typesupport_identifier) {
    drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drone_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
