// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from camera_msg:srv/CameraStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "camera_msg/srv/camera_status.hpp"


#ifndef CAMERA_MSG__SRV__DETAIL__CAMERA_STATUS__BUILDER_HPP_
#define CAMERA_MSG__SRV__DETAIL__CAMERA_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "camera_msg/srv/detail/camera_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace camera_msg
{

namespace srv
{

namespace builder
{

class Init_CameraStatus_Request_camera_id
{
public:
  explicit Init_CameraStatus_Request_camera_id(::camera_msg::srv::CameraStatus_Request & msg)
  : msg_(msg)
  {}
  ::camera_msg::srv::CameraStatus_Request camera_id(::camera_msg::srv::CameraStatus_Request::_camera_id_type arg)
  {
    msg_.camera_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_msg::srv::CameraStatus_Request msg_;
};

class Init_CameraStatus_Request_command
{
public:
  Init_CameraStatus_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraStatus_Request_camera_id command(::camera_msg::srv::CameraStatus_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_CameraStatus_Request_camera_id(msg_);
  }

private:
  ::camera_msg::srv::CameraStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_msg::srv::CameraStatus_Request>()
{
  return camera_msg::srv::builder::Init_CameraStatus_Request_command();
}

}  // namespace camera_msg


namespace camera_msg
{

namespace srv
{

namespace builder
{

class Init_CameraStatus_Response_status_message
{
public:
  explicit Init_CameraStatus_Response_status_message(::camera_msg::srv::CameraStatus_Response & msg)
  : msg_(msg)
  {}
  ::camera_msg::srv::CameraStatus_Response status_message(::camera_msg::srv::CameraStatus_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_msg::srv::CameraStatus_Response msg_;
};

class Init_CameraStatus_Response_is_active
{
public:
  Init_CameraStatus_Response_is_active()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraStatus_Response_status_message is_active(::camera_msg::srv::CameraStatus_Response::_is_active_type arg)
  {
    msg_.is_active = std::move(arg);
    return Init_CameraStatus_Response_status_message(msg_);
  }

private:
  ::camera_msg::srv::CameraStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_msg::srv::CameraStatus_Response>()
{
  return camera_msg::srv::builder::Init_CameraStatus_Response_is_active();
}

}  // namespace camera_msg


namespace camera_msg
{

namespace srv
{

namespace builder
{

class Init_CameraStatus_Event_response
{
public:
  explicit Init_CameraStatus_Event_response(::camera_msg::srv::CameraStatus_Event & msg)
  : msg_(msg)
  {}
  ::camera_msg::srv::CameraStatus_Event response(::camera_msg::srv::CameraStatus_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_msg::srv::CameraStatus_Event msg_;
};

class Init_CameraStatus_Event_request
{
public:
  explicit Init_CameraStatus_Event_request(::camera_msg::srv::CameraStatus_Event & msg)
  : msg_(msg)
  {}
  Init_CameraStatus_Event_response request(::camera_msg::srv::CameraStatus_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CameraStatus_Event_response(msg_);
  }

private:
  ::camera_msg::srv::CameraStatus_Event msg_;
};

class Init_CameraStatus_Event_info
{
public:
  Init_CameraStatus_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraStatus_Event_request info(::camera_msg::srv::CameraStatus_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CameraStatus_Event_request(msg_);
  }

private:
  ::camera_msg::srv::CameraStatus_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_msg::srv::CameraStatus_Event>()
{
  return camera_msg::srv::builder::Init_CameraStatus_Event_info();
}

}  // namespace camera_msg

#endif  // CAMERA_MSG__SRV__DETAIL__CAMERA_STATUS__BUILDER_HPP_
