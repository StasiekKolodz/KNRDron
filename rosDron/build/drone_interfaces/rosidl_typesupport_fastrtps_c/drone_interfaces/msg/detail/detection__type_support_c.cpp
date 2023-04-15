// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from drone_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice
#include "drone_interfaces/msg/detail/detection__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "drone_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "drone_interfaces/msg/detail/detection__struct.h"
#include "drone_interfaces/msg/detail/detection__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // color_name
#include "rosidl_runtime_c/string_functions.h"  // color_name

// forward declare type support functions


using _Detection__ros_msg_type = drone_interfaces__msg__Detection;

static bool _Detection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Detection__ros_msg_type * ros_message = static_cast<const _Detection__ros_msg_type *>(untyped_ros_message);
  // Field name: bounding_box
  {
    size_t size = 3;
    auto array_ptr = ros_message->bounding_box;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: color_name
  {
    const rosidl_runtime_c__String * str = &ros_message->color_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: gps_position
  {
    size_t size = 2;
    auto array_ptr = ros_message->gps_position;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Detection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Detection__ros_msg_type * ros_message = static_cast<_Detection__ros_msg_type *>(untyped_ros_message);
  // Field name: bounding_box
  {
    size_t size = 3;
    auto array_ptr = ros_message->bounding_box;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: color_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->color_name.data) {
      rosidl_runtime_c__String__init(&ros_message->color_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->color_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'color_name'\n");
      return false;
    }
  }

  // Field name: gps_position
  {
    size_t size = 2;
    auto array_ptr = ros_message->gps_position;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drone_interfaces
size_t get_serialized_size_drone_interfaces__msg__Detection(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Detection__ros_msg_type * ros_message = static_cast<const _Detection__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bounding_box
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->bounding_box;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name color_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->color_name.size + 1);
  // field.name gps_position
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->gps_position;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Detection__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_drone_interfaces__msg__Detection(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drone_interfaces
size_t max_serialized_size_drone_interfaces__msg__Detection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: bounding_box
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: color_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: gps_position
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Detection__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_drone_interfaces__msg__Detection(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Detection = {
  "drone_interfaces::msg",
  "Detection",
  _Detection__cdr_serialize,
  _Detection__cdr_deserialize,
  _Detection__get_serialized_size,
  _Detection__max_serialized_size
};

static rosidl_message_type_support_t _Detection__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Detection,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, drone_interfaces, msg, Detection)() {
  return &_Detection__type_support;
}

#if defined(__cplusplus)
}
#endif
