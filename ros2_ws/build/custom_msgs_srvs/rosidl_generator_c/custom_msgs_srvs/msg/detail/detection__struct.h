// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs_srvs:msg/Detection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs_srvs/msg/detection.h"


#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__DETECTION__STRUCT_H_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Detection in the package custom_msgs_srvs.
typedef struct custom_msgs_srvs__msg__Detection
{
  int64_t x;
  int64_t y;
  double dis;
} custom_msgs_srvs__msg__Detection;

// Struct for a sequence of custom_msgs_srvs__msg__Detection.
typedef struct custom_msgs_srvs__msg__Detection__Sequence
{
  custom_msgs_srvs__msg__Detection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs_srvs__msg__Detection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__DETECTION__STRUCT_H_
