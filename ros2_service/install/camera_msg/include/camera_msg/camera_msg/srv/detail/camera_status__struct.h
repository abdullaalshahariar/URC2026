// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_msg:srv/CameraStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "camera_msg/srv/camera_status.h"


#ifndef CAMERA_MSG__SRV__DETAIL__CAMERA_STATUS__STRUCT_H_
#define CAMERA_MSG__SRV__DETAIL__CAMERA_STATUS__STRUCT_H_

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
// Member 'camera_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CameraStatus in the package camera_msg.
typedef struct camera_msg__srv__CameraStatus_Request
{
  rosidl_runtime_c__String command;
  rosidl_runtime_c__String camera_id;
} camera_msg__srv__CameraStatus_Request;

// Struct for a sequence of camera_msg__srv__CameraStatus_Request.
typedef struct camera_msg__srv__CameraStatus_Request__Sequence
{
  camera_msg__srv__CameraStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_msg__srv__CameraStatus_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CameraStatus in the package camera_msg.
typedef struct camera_msg__srv__CameraStatus_Response
{
  bool is_active;
  rosidl_runtime_c__String status_message;
} camera_msg__srv__CameraStatus_Response;

// Struct for a sequence of camera_msg__srv__CameraStatus_Response.
typedef struct camera_msg__srv__CameraStatus_Response__Sequence
{
  camera_msg__srv__CameraStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_msg__srv__CameraStatus_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  camera_msg__srv__CameraStatus_Event__request__MAX_SIZE = 1
};
// response
enum
{
  camera_msg__srv__CameraStatus_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CameraStatus in the package camera_msg.
typedef struct camera_msg__srv__CameraStatus_Event
{
  service_msgs__msg__ServiceEventInfo info;
  camera_msg__srv__CameraStatus_Request__Sequence request;
  camera_msg__srv__CameraStatus_Response__Sequence response;
} camera_msg__srv__CameraStatus_Event;

// Struct for a sequence of camera_msg__srv__CameraStatus_Event.
typedef struct camera_msg__srv__CameraStatus_Event__Sequence
{
  camera_msg__srv__CameraStatus_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_msg__srv__CameraStatus_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_MSG__SRV__DETAIL__CAMERA_STATUS__STRUCT_H_
