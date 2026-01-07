// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_msg:msg/CameraInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "camera_msg/msg/camera_info.h"


#ifndef CAMERA_MSG__MSG__DETAIL__CAMERA_INFO__STRUCT_H_
#define CAMERA_MSG__MSG__DETAIL__CAMERA_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'command'
// Member 'id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CameraInfo in the package camera_msg.
typedef struct camera_msg__msg__CameraInfo
{
  rosidl_runtime_c__String command;
  rosidl_runtime_c__String id;
} camera_msg__msg__CameraInfo;

// Struct for a sequence of camera_msg__msg__CameraInfo.
typedef struct camera_msg__msg__CameraInfo__Sequence
{
  camera_msg__msg__CameraInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_msg__msg__CameraInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_MSG__MSG__DETAIL__CAMERA_INFO__STRUCT_H_
