// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from camera_msg:srv/CameraStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "camera_msg/srv/camera_status.hpp"


#ifndef CAMERA_MSG__SRV__DETAIL__CAMERA_STATUS__TRAITS_HPP_
#define CAMERA_MSG__SRV__DETAIL__CAMERA_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "camera_msg/srv/detail/camera_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace camera_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const CameraStatus_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: camera_id
  {
    out << "camera_id: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraStatus_Request & msg,
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

  // member: camera_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_id: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraStatus_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace camera_msg

namespace rosidl_generator_traits
{

[[deprecated("use camera_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const camera_msg::srv::CameraStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const camera_msg::srv::CameraStatus_Request & msg)
{
  return camera_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<camera_msg::srv::CameraStatus_Request>()
{
  return "camera_msg::srv::CameraStatus_Request";
}

template<>
inline const char * name<camera_msg::srv::CameraStatus_Request>()
{
  return "camera_msg/srv/CameraStatus_Request";
}

template<>
struct has_fixed_size<camera_msg::srv::CameraStatus_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<camera_msg::srv::CameraStatus_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<camera_msg::srv::CameraStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace camera_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const CameraStatus_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_active
  {
    out << "is_active: ";
    rosidl_generator_traits::value_to_yaml(msg.is_active, out);
    out << ", ";
  }

  // member: status_message
  {
    out << "status_message: ";
    rosidl_generator_traits::value_to_yaml(msg.status_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_active: ";
    rosidl_generator_traits::value_to_yaml(msg.is_active, out);
    out << "\n";
  }

  // member: status_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_message: ";
    rosidl_generator_traits::value_to_yaml(msg.status_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraStatus_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace camera_msg

namespace rosidl_generator_traits
{

[[deprecated("use camera_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const camera_msg::srv::CameraStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const camera_msg::srv::CameraStatus_Response & msg)
{
  return camera_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<camera_msg::srv::CameraStatus_Response>()
{
  return "camera_msg::srv::CameraStatus_Response";
}

template<>
inline const char * name<camera_msg::srv::CameraStatus_Response>()
{
  return "camera_msg/srv/CameraStatus_Response";
}

template<>
struct has_fixed_size<camera_msg::srv::CameraStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<camera_msg::srv::CameraStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<camera_msg::srv::CameraStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace camera_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const CameraStatus_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraStatus_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraStatus_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace camera_msg

namespace rosidl_generator_traits
{

[[deprecated("use camera_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const camera_msg::srv::CameraStatus_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const camera_msg::srv::CameraStatus_Event & msg)
{
  return camera_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<camera_msg::srv::CameraStatus_Event>()
{
  return "camera_msg::srv::CameraStatus_Event";
}

template<>
inline const char * name<camera_msg::srv::CameraStatus_Event>()
{
  return "camera_msg/srv/CameraStatus_Event";
}

template<>
struct has_fixed_size<camera_msg::srv::CameraStatus_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<camera_msg::srv::CameraStatus_Event>
  : std::integral_constant<bool, has_bounded_size<camera_msg::srv::CameraStatus_Request>::value && has_bounded_size<camera_msg::srv::CameraStatus_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<camera_msg::srv::CameraStatus_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<camera_msg::srv::CameraStatus>()
{
  return "camera_msg::srv::CameraStatus";
}

template<>
inline const char * name<camera_msg::srv::CameraStatus>()
{
  return "camera_msg/srv/CameraStatus";
}

template<>
struct has_fixed_size<camera_msg::srv::CameraStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<camera_msg::srv::CameraStatus_Request>::value &&
    has_fixed_size<camera_msg::srv::CameraStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<camera_msg::srv::CameraStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<camera_msg::srv::CameraStatus_Request>::value &&
    has_bounded_size<camera_msg::srv::CameraStatus_Response>::value
  >
{
};

template<>
struct is_service<camera_msg::srv::CameraStatus>
  : std::true_type
{
};

template<>
struct is_service_request<camera_msg::srv::CameraStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<camera_msg::srv::CameraStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAMERA_MSG__SRV__DETAIL__CAMERA_STATUS__TRAITS_HPP_
