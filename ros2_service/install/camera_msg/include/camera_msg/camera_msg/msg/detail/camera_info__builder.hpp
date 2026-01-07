// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from camera_msg:msg/CameraInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "camera_msg/msg/camera_info.hpp"


#ifndef CAMERA_MSG__MSG__DETAIL__CAMERA_INFO__BUILDER_HPP_
#define CAMERA_MSG__MSG__DETAIL__CAMERA_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "camera_msg/msg/detail/camera_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace camera_msg
{

namespace msg
{

namespace builder
{

class Init_CameraInfo_id
{
public:
  explicit Init_CameraInfo_id(::camera_msg::msg::CameraInfo & msg)
  : msg_(msg)
  {}
  ::camera_msg::msg::CameraInfo id(::camera_msg::msg::CameraInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_msg::msg::CameraInfo msg_;
};

class Init_CameraInfo_command
{
public:
  Init_CameraInfo_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraInfo_id command(::camera_msg::msg::CameraInfo::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_CameraInfo_id(msg_);
  }

private:
  ::camera_msg::msg::CameraInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_msg::msg::CameraInfo>()
{
  return camera_msg::msg::builder::Init_CameraInfo_command();
}

}  // namespace camera_msg

#endif  // CAMERA_MSG__MSG__DETAIL__CAMERA_INFO__BUILDER_HPP_
