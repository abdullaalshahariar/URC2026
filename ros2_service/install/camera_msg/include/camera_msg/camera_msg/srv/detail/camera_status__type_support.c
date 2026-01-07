// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from camera_msg:srv/CameraStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "camera_msg/srv/detail/camera_status__rosidl_typesupport_introspection_c.h"
#include "camera_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "camera_msg/srv/detail/camera_status__functions.h"
#include "camera_msg/srv/detail/camera_status__struct.h"


// Include directives for member types
// Member `command`
// Member `camera_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void camera_msg__srv__CameraStatus_Request__rosidl_typesupport_introspection_c__CameraStatus_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  camera_msg__srv__CameraStatus_Request__init(message_memory);
}

void camera_msg__srv__CameraStatus_Request__rosidl_typesupport_introspection_c__CameraStatus_Request_fini_function(void * message_memory)
{
  camera_msg__srv__CameraStatus_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember camera_msg__srv__CameraStatus_Request__rosidl_typesupport_introspection_c__CameraStatus_Request_message_member_array[2] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_msg__srv__CameraStatus_Request, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_msg__srv__CameraStatus_Request, camera_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers camera_msg__srv__CameraStatus_Request__rosidl_typesupport_introspection_c__CameraStatus_Request_message_members = {
  "camera_msg__srv",  // message namespace
  "CameraStatus_Request",  // message name
  2,  // number of fields
  sizeof(camera_msg__srv__CameraStatus_Request),
  false,  // has_any_key_member_
  camera_msg__srv__CameraStatus_Request__rosidl_typesupport_introspection_c__CameraStatus_Request_message_member_array,  // message members
  camera_msg__srv__CameraStatus_Request__rosidl_typesupport_introspection_c__CameraStatus_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  camera_msg__srv__CameraStatus_Request__rosidl_typesupport_introspection_c__CameraStatus_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t camera_msg__srv__CameraStatus_Request__rosidl_typesupport_introspection_c__CameraStatus_Request_message_type_support_handle = {
  0,
  &camera_msg__srv__CameraStatus_Request__rosidl_typesupport_introspection_c__CameraStatus_Request_message_members,
  get_message_typesupport_handle_function,
  &camera_msg__srv__CameraStatus_Request__get_type_hash,
  &camera_msg__srv__CameraStatus_Request__get_type_description,
  &camera_msg__srv__CameraStatus_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_camera_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_msg, srv, CameraStatus_Request)() {
  if (!camera_msg__srv__CameraStatus_Request__rosidl_typesupport_introspection_c__CameraStatus_Request_message_type_support_handle.typesupport_identifier) {
    camera_msg__srv__CameraStatus_Request__rosidl_typesupport_introspection_c__CameraStatus_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &camera_msg__srv__CameraStatus_Request__rosidl_typesupport_introspection_c__CameraStatus_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "camera_msg/srv/detail/camera_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "camera_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "camera_msg/srv/detail/camera_status__functions.h"
// already included above
// #include "camera_msg/srv/detail/camera_status__struct.h"


// Include directives for member types
// Member `status_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void camera_msg__srv__CameraStatus_Response__rosidl_typesupport_introspection_c__CameraStatus_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  camera_msg__srv__CameraStatus_Response__init(message_memory);
}

void camera_msg__srv__CameraStatus_Response__rosidl_typesupport_introspection_c__CameraStatus_Response_fini_function(void * message_memory)
{
  camera_msg__srv__CameraStatus_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember camera_msg__srv__CameraStatus_Response__rosidl_typesupport_introspection_c__CameraStatus_Response_message_member_array[2] = {
  {
    "is_active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_msg__srv__CameraStatus_Response, is_active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_msg__srv__CameraStatus_Response, status_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers camera_msg__srv__CameraStatus_Response__rosidl_typesupport_introspection_c__CameraStatus_Response_message_members = {
  "camera_msg__srv",  // message namespace
  "CameraStatus_Response",  // message name
  2,  // number of fields
  sizeof(camera_msg__srv__CameraStatus_Response),
  false,  // has_any_key_member_
  camera_msg__srv__CameraStatus_Response__rosidl_typesupport_introspection_c__CameraStatus_Response_message_member_array,  // message members
  camera_msg__srv__CameraStatus_Response__rosidl_typesupport_introspection_c__CameraStatus_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  camera_msg__srv__CameraStatus_Response__rosidl_typesupport_introspection_c__CameraStatus_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t camera_msg__srv__CameraStatus_Response__rosidl_typesupport_introspection_c__CameraStatus_Response_message_type_support_handle = {
  0,
  &camera_msg__srv__CameraStatus_Response__rosidl_typesupport_introspection_c__CameraStatus_Response_message_members,
  get_message_typesupport_handle_function,
  &camera_msg__srv__CameraStatus_Response__get_type_hash,
  &camera_msg__srv__CameraStatus_Response__get_type_description,
  &camera_msg__srv__CameraStatus_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_camera_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_msg, srv, CameraStatus_Response)() {
  if (!camera_msg__srv__CameraStatus_Response__rosidl_typesupport_introspection_c__CameraStatus_Response_message_type_support_handle.typesupport_identifier) {
    camera_msg__srv__CameraStatus_Response__rosidl_typesupport_introspection_c__CameraStatus_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &camera_msg__srv__CameraStatus_Response__rosidl_typesupport_introspection_c__CameraStatus_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "camera_msg/srv/detail/camera_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "camera_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "camera_msg/srv/detail/camera_status__functions.h"
// already included above
// #include "camera_msg/srv/detail/camera_status__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "camera_msg/srv/camera_status.h"
// Member `request`
// Member `response`
// already included above
// #include "camera_msg/srv/detail/camera_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__CameraStatus_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  camera_msg__srv__CameraStatus_Event__init(message_memory);
}

void camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__CameraStatus_Event_fini_function(void * message_memory)
{
  camera_msg__srv__CameraStatus_Event__fini(message_memory);
}

size_t camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__size_function__CameraStatus_Event__request(
  const void * untyped_member)
{
  const camera_msg__srv__CameraStatus_Request__Sequence * member =
    (const camera_msg__srv__CameraStatus_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__get_const_function__CameraStatus_Event__request(
  const void * untyped_member, size_t index)
{
  const camera_msg__srv__CameraStatus_Request__Sequence * member =
    (const camera_msg__srv__CameraStatus_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__get_function__CameraStatus_Event__request(
  void * untyped_member, size_t index)
{
  camera_msg__srv__CameraStatus_Request__Sequence * member =
    (camera_msg__srv__CameraStatus_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__fetch_function__CameraStatus_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const camera_msg__srv__CameraStatus_Request * item =
    ((const camera_msg__srv__CameraStatus_Request *)
    camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__get_const_function__CameraStatus_Event__request(untyped_member, index));
  camera_msg__srv__CameraStatus_Request * value =
    (camera_msg__srv__CameraStatus_Request *)(untyped_value);
  *value = *item;
}

void camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__assign_function__CameraStatus_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  camera_msg__srv__CameraStatus_Request * item =
    ((camera_msg__srv__CameraStatus_Request *)
    camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__get_function__CameraStatus_Event__request(untyped_member, index));
  const camera_msg__srv__CameraStatus_Request * value =
    (const camera_msg__srv__CameraStatus_Request *)(untyped_value);
  *item = *value;
}

bool camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__resize_function__CameraStatus_Event__request(
  void * untyped_member, size_t size)
{
  camera_msg__srv__CameraStatus_Request__Sequence * member =
    (camera_msg__srv__CameraStatus_Request__Sequence *)(untyped_member);
  camera_msg__srv__CameraStatus_Request__Sequence__fini(member);
  return camera_msg__srv__CameraStatus_Request__Sequence__init(member, size);
}

size_t camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__size_function__CameraStatus_Event__response(
  const void * untyped_member)
{
  const camera_msg__srv__CameraStatus_Response__Sequence * member =
    (const camera_msg__srv__CameraStatus_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__get_const_function__CameraStatus_Event__response(
  const void * untyped_member, size_t index)
{
  const camera_msg__srv__CameraStatus_Response__Sequence * member =
    (const camera_msg__srv__CameraStatus_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__get_function__CameraStatus_Event__response(
  void * untyped_member, size_t index)
{
  camera_msg__srv__CameraStatus_Response__Sequence * member =
    (camera_msg__srv__CameraStatus_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__fetch_function__CameraStatus_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const camera_msg__srv__CameraStatus_Response * item =
    ((const camera_msg__srv__CameraStatus_Response *)
    camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__get_const_function__CameraStatus_Event__response(untyped_member, index));
  camera_msg__srv__CameraStatus_Response * value =
    (camera_msg__srv__CameraStatus_Response *)(untyped_value);
  *value = *item;
}

void camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__assign_function__CameraStatus_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  camera_msg__srv__CameraStatus_Response * item =
    ((camera_msg__srv__CameraStatus_Response *)
    camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__get_function__CameraStatus_Event__response(untyped_member, index));
  const camera_msg__srv__CameraStatus_Response * value =
    (const camera_msg__srv__CameraStatus_Response *)(untyped_value);
  *item = *value;
}

bool camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__resize_function__CameraStatus_Event__response(
  void * untyped_member, size_t size)
{
  camera_msg__srv__CameraStatus_Response__Sequence * member =
    (camera_msg__srv__CameraStatus_Response__Sequence *)(untyped_member);
  camera_msg__srv__CameraStatus_Response__Sequence__fini(member);
  return camera_msg__srv__CameraStatus_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__CameraStatus_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_msg__srv__CameraStatus_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(camera_msg__srv__CameraStatus_Event, request),  // bytes offset in struct
    NULL,  // default value
    camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__size_function__CameraStatus_Event__request,  // size() function pointer
    camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__get_const_function__CameraStatus_Event__request,  // get_const(index) function pointer
    camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__get_function__CameraStatus_Event__request,  // get(index) function pointer
    camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__fetch_function__CameraStatus_Event__request,  // fetch(index, &value) function pointer
    camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__assign_function__CameraStatus_Event__request,  // assign(index, value) function pointer
    camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__resize_function__CameraStatus_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(camera_msg__srv__CameraStatus_Event, response),  // bytes offset in struct
    NULL,  // default value
    camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__size_function__CameraStatus_Event__response,  // size() function pointer
    camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__get_const_function__CameraStatus_Event__response,  // get_const(index) function pointer
    camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__get_function__CameraStatus_Event__response,  // get(index) function pointer
    camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__fetch_function__CameraStatus_Event__response,  // fetch(index, &value) function pointer
    camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__assign_function__CameraStatus_Event__response,  // assign(index, value) function pointer
    camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__resize_function__CameraStatus_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__CameraStatus_Event_message_members = {
  "camera_msg__srv",  // message namespace
  "CameraStatus_Event",  // message name
  3,  // number of fields
  sizeof(camera_msg__srv__CameraStatus_Event),
  false,  // has_any_key_member_
  camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__CameraStatus_Event_message_member_array,  // message members
  camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__CameraStatus_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__CameraStatus_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__CameraStatus_Event_message_type_support_handle = {
  0,
  &camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__CameraStatus_Event_message_members,
  get_message_typesupport_handle_function,
  &camera_msg__srv__CameraStatus_Event__get_type_hash,
  &camera_msg__srv__CameraStatus_Event__get_type_description,
  &camera_msg__srv__CameraStatus_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_camera_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_msg, srv, CameraStatus_Event)() {
  camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__CameraStatus_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__CameraStatus_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_msg, srv, CameraStatus_Request)();
  camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__CameraStatus_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_msg, srv, CameraStatus_Response)();
  if (!camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__CameraStatus_Event_message_type_support_handle.typesupport_identifier) {
    camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__CameraStatus_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__CameraStatus_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "camera_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "camera_msg/srv/detail/camera_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers camera_msg__srv__detail__camera_status__rosidl_typesupport_introspection_c__CameraStatus_service_members = {
  "camera_msg__srv",  // service namespace
  "CameraStatus",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // camera_msg__srv__detail__camera_status__rosidl_typesupport_introspection_c__CameraStatus_Request_message_type_support_handle,
  NULL,  // response message
  // camera_msg__srv__detail__camera_status__rosidl_typesupport_introspection_c__CameraStatus_Response_message_type_support_handle
  NULL  // event_message
  // camera_msg__srv__detail__camera_status__rosidl_typesupport_introspection_c__CameraStatus_Response_message_type_support_handle
};


static rosidl_service_type_support_t camera_msg__srv__detail__camera_status__rosidl_typesupport_introspection_c__CameraStatus_service_type_support_handle = {
  0,
  &camera_msg__srv__detail__camera_status__rosidl_typesupport_introspection_c__CameraStatus_service_members,
  get_service_typesupport_handle_function,
  &camera_msg__srv__CameraStatus_Request__rosidl_typesupport_introspection_c__CameraStatus_Request_message_type_support_handle,
  &camera_msg__srv__CameraStatus_Response__rosidl_typesupport_introspection_c__CameraStatus_Response_message_type_support_handle,
  &camera_msg__srv__CameraStatus_Event__rosidl_typesupport_introspection_c__CameraStatus_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    camera_msg,
    srv,
    CameraStatus
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    camera_msg,
    srv,
    CameraStatus
  ),
  &camera_msg__srv__CameraStatus__get_type_hash,
  &camera_msg__srv__CameraStatus__get_type_description,
  &camera_msg__srv__CameraStatus__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_msg, srv, CameraStatus_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_msg, srv, CameraStatus_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_msg, srv, CameraStatus_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_camera_msg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_msg, srv, CameraStatus)(void) {
  if (!camera_msg__srv__detail__camera_status__rosidl_typesupport_introspection_c__CameraStatus_service_type_support_handle.typesupport_identifier) {
    camera_msg__srv__detail__camera_status__rosidl_typesupport_introspection_c__CameraStatus_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)camera_msg__srv__detail__camera_status__rosidl_typesupport_introspection_c__CameraStatus_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_msg, srv, CameraStatus_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_msg, srv, CameraStatus_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_msg, srv, CameraStatus_Event)()->data;
  }

  return &camera_msg__srv__detail__camera_status__rosidl_typesupport_introspection_c__CameraStatus_service_type_support_handle;
}
