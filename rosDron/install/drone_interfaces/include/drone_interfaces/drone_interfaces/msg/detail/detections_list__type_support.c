// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from drone_interfaces:msg/DetectionsList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "drone_interfaces/msg/detail/detections_list__rosidl_typesupport_introspection_c.h"
#include "drone_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "drone_interfaces/msg/detail/detections_list__functions.h"
#include "drone_interfaces/msg/detail/detections_list__struct.h"


// Include directives for member types
// Member `detections_list`
#include "drone_interfaces/msg/detection.h"
// Member `detections_list`
#include "drone_interfaces/msg/detail/detection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__DetectionsList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drone_interfaces__msg__DetectionsList__init(message_memory);
}

void drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__DetectionsList_fini_function(void * message_memory)
{
  drone_interfaces__msg__DetectionsList__fini(message_memory);
}

size_t drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__size_function__DetectionsList__detections_list(
  const void * untyped_member)
{
  const drone_interfaces__msg__Detection__Sequence * member =
    (const drone_interfaces__msg__Detection__Sequence *)(untyped_member);
  return member->size;
}

const void * drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__get_const_function__DetectionsList__detections_list(
  const void * untyped_member, size_t index)
{
  const drone_interfaces__msg__Detection__Sequence * member =
    (const drone_interfaces__msg__Detection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__get_function__DetectionsList__detections_list(
  void * untyped_member, size_t index)
{
  drone_interfaces__msg__Detection__Sequence * member =
    (drone_interfaces__msg__Detection__Sequence *)(untyped_member);
  return &member->data[index];
}

void drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__fetch_function__DetectionsList__detections_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const drone_interfaces__msg__Detection * item =
    ((const drone_interfaces__msg__Detection *)
    drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__get_const_function__DetectionsList__detections_list(untyped_member, index));
  drone_interfaces__msg__Detection * value =
    (drone_interfaces__msg__Detection *)(untyped_value);
  *value = *item;
}

void drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__assign_function__DetectionsList__detections_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  drone_interfaces__msg__Detection * item =
    ((drone_interfaces__msg__Detection *)
    drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__get_function__DetectionsList__detections_list(untyped_member, index));
  const drone_interfaces__msg__Detection * value =
    (const drone_interfaces__msg__Detection *)(untyped_value);
  *item = *value;
}

bool drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__resize_function__DetectionsList__detections_list(
  void * untyped_member, size_t size)
{
  drone_interfaces__msg__Detection__Sequence * member =
    (drone_interfaces__msg__Detection__Sequence *)(untyped_member);
  drone_interfaces__msg__Detection__Sequence__fini(member);
  return drone_interfaces__msg__Detection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__DetectionsList_message_member_array[1] = {
  {
    "detections_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__msg__DetectionsList, detections_list),  // bytes offset in struct
    NULL,  // default value
    drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__size_function__DetectionsList__detections_list,  // size() function pointer
    drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__get_const_function__DetectionsList__detections_list,  // get_const(index) function pointer
    drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__get_function__DetectionsList__detections_list,  // get(index) function pointer
    drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__fetch_function__DetectionsList__detections_list,  // fetch(index, &value) function pointer
    drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__assign_function__DetectionsList__detections_list,  // assign(index, value) function pointer
    drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__resize_function__DetectionsList__detections_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__DetectionsList_message_members = {
  "drone_interfaces__msg",  // message namespace
  "DetectionsList",  // message name
  1,  // number of fields
  sizeof(drone_interfaces__msg__DetectionsList),
  drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__DetectionsList_message_member_array,  // message members
  drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__DetectionsList_init_function,  // function to initialize message memory (memory has to be allocated)
  drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__DetectionsList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__DetectionsList_message_type_support_handle = {
  0,
  &drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__DetectionsList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, msg, DetectionsList)() {
  drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__DetectionsList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, msg, Detection)();
  if (!drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__DetectionsList_message_type_support_handle.typesupport_identifier) {
    drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__DetectionsList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drone_interfaces__msg__DetectionsList__rosidl_typesupport_introspection_c__DetectionsList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
