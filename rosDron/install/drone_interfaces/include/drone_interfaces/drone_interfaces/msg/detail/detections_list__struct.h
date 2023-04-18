// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_interfaces:msg/DetectionsList.idl
// generated code does not contain a copyright notice

#ifndef DRONE_INTERFACES__MSG__DETAIL__DETECTIONS_LIST__STRUCT_H_
#define DRONE_INTERFACES__MSG__DETAIL__DETECTIONS_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'detections_list'
#include "drone_interfaces/msg/detail/detection__struct.h"

/// Struct defined in msg/DetectionsList in the package drone_interfaces.
typedef struct drone_interfaces__msg__DetectionsList
{
  drone_interfaces__msg__Detection__Sequence detections_list;
} drone_interfaces__msg__DetectionsList;

// Struct for a sequence of drone_interfaces__msg__DetectionsList.
typedef struct drone_interfaces__msg__DetectionsList__Sequence
{
  drone_interfaces__msg__DetectionsList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_interfaces__msg__DetectionsList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_INTERFACES__MSG__DETAIL__DETECTIONS_LIST__STRUCT_H_
