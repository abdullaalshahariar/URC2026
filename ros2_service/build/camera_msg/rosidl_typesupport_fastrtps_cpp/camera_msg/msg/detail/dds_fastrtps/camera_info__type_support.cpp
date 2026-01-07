// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from camera_msg:msg/CameraInfo.idl
// generated code does not contain a copyright notice
#include "camera_msg/msg/detail/camera_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "camera_msg/msg/detail/camera_info__functions.h"
#include "camera_msg/msg/detail/camera_info__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace camera_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_msg
cdr_serialize(
  const camera_msg::msg::CameraInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: command
  cdr << ros_message.command;

  // Member: id
  cdr << ros_message.id;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  camera_msg::msg::CameraInfo & ros_message)
{
  // Member: command
  cdr >> ros_message.command;

  // Member: id
  cdr >> ros_message.id;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_msg
get_serialized_size(
  const camera_msg::msg::CameraInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: command
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.command.size() + 1);

  // Member: id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.id.size() + 1);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_msg
max_serialized_size_CameraInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: command
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
  // Member: id
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = camera_msg::msg::CameraInfo;
    is_plain =
      (
      offsetof(DataType, id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_msg
cdr_serialize_key(
  const camera_msg::msg::CameraInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: command
  cdr << ros_message.command;

  // Member: id
  cdr << ros_message.id;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_msg
get_serialized_size_key(
  const camera_msg::msg::CameraInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: command
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.command.size() + 1);

  // Member: id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.id.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_msg
max_serialized_size_key_CameraInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: command
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

  // Member: id
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = camera_msg::msg::CameraInfo;
    is_plain =
      (
      offsetof(DataType, id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _CameraInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const camera_msg::msg::CameraInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CameraInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<camera_msg::msg::CameraInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CameraInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const camera_msg::msg::CameraInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CameraInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CameraInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CameraInfo__callbacks = {
  "camera_msg::msg",
  "CameraInfo",
  _CameraInfo__cdr_serialize,
  _CameraInfo__cdr_deserialize,
  _CameraInfo__get_serialized_size,
  _CameraInfo__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CameraInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CameraInfo__callbacks,
  get_message_typesupport_handle_function,
  &camera_msg__msg__CameraInfo__get_type_hash,
  &camera_msg__msg__CameraInfo__get_type_description,
  &camera_msg__msg__CameraInfo__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace camera_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_camera_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<camera_msg::msg::CameraInfo>()
{
  return &camera_msg::msg::typesupport_fastrtps_cpp::_CameraInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, camera_msg, msg, CameraInfo)() {
  return &camera_msg::msg::typesupport_fastrtps_cpp::_CameraInfo__handle;
}

#ifdef __cplusplus
}
#endif
