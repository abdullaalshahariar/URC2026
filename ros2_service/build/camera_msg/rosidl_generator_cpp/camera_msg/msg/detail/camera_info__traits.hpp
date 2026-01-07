// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from camera_msg:msg/CameraInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "camera_msg/msg/camera_info.hpp"


#ifndef CAMERA_MSG__MSG__DETAIL__CAMERA_INFO__TRAITS_HPP_
#define CAMERA_MSG__MSG__DETAIL__CAMERA_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "camera_msg/msg/detail/camera_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace camera_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const CameraInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace camera_msg

namespace rosidl_generator_traits
{

[[deprecated("use camera_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const camera_msg::msg::CameraInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const camera_msg::msg::CameraInfo & msg)
{
  return camera_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<camera_msg::msg::CameraInfo>()
{
  return "camera_msg::msg::CameraInfo";
}

template<>
inline const char * name<camera_msg::msg::CameraInfo>()
{
  return "camera_msg/msg/CameraInfo";
}

template<>
struct has_fixed_size<camera_msg::msg::CameraInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<camera_msg::msg::CameraInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<camera_msg::msg::CameraInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAMERA_MSG__MSG__DETAIL__CAMERA_INFO__TRAITS_HPP_
