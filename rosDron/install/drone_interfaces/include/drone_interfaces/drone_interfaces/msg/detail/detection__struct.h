// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef DRONE_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_H_
#define DRONE_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'color_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Detection in the package drone_interfaces.
typedef struct drone_interfaces__msg__Detection
{
  int32_t bounding_box[3];
  rosidl_runtime_c__String color_name;
  int32_t gps_position[2];
} drone_interfaces__msg__Detection;

// Struct for a sequence of drone_interfaces__msg__Detection.
typedef struct drone_interfaces__msg__Detection__Sequence
{
  drone_interfaces__msg__Detection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_interfaces__msg__Detection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_H_
