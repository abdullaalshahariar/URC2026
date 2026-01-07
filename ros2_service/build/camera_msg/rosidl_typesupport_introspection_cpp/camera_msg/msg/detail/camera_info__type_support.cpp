// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from camera_msg:msg/CameraInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "camera_msg/msg/detail/camera_info__functions.h"
#include "camera_msg/msg/detail/camera_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace camera_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CameraInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) camera_msg::msg::CameraInfo(_init);
}

void CameraInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<camera_msg::msg::CameraInfo *>(message_memory);
  typed_message->~CameraInfo();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CameraInfo_message_member_array[2] = {
  {
    "command",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_msg::msg::CameraInfo, command),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_msg::msg::CameraInfo, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CameraInfo_message_members = {
  "camera_msg::msg",  // message namespace
  "CameraInfo",  // message name
  2,  // number of fields
  sizeof(camera_msg::msg::CameraInfo),
  false,  // has_any_key_member_
  CameraInfo_message_member_array,  // message members
  CameraInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  CameraInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CameraInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CameraInfo_message_members,
  get_message_typesupport_handle_function,
  &camera_msg__msg__CameraInfo__get_type_hash,
  &camera_msg__msg__CameraInfo__get_type_description,
  &camera_msg__msg__CameraInfo__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace camera_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<camera_msg::msg::CameraInfo>()
{
  return &::camera_msg::msg::rosidl_typesupport_introspection_cpp::CameraInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, camera_msg, msg, CameraInfo)() {
  return &::camera_msg::msg::rosidl_typesupport_introspection_cpp::CameraInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
