// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from camera_msg:srv/CameraStatus.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "camera_msg/srv/detail/camera_status__functions.h"
#include "camera_msg/srv/detail/camera_status__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace camera_msg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraStatus_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraStatus_Request_type_support_ids_t;

static const _CameraStatus_Request_type_support_ids_t _CameraStatus_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraStatus_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraStatus_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraStatus_Request_type_support_symbol_names_t _CameraStatus_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, camera_msg, srv, CameraStatus_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, camera_msg, srv, CameraStatus_Request)),
  }
};

typedef struct _CameraStatus_Request_type_support_data_t
{
  void * data[2];
} _CameraStatus_Request_type_support_data_t;

static _CameraStatus_Request_type_support_data_t _CameraStatus_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraStatus_Request_message_typesupport_map = {
  2,
  "camera_msg",
  &_CameraStatus_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CameraStatus_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CameraStatus_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraStatus_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraStatus_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &camera_msg__srv__CameraStatus_Request__get_type_hash,
  &camera_msg__srv__CameraStatus_Request__get_type_description,
  &camera_msg__srv__CameraStatus_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace camera_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<camera_msg::srv::CameraStatus_Request>()
{
  return &::camera_msg::srv::rosidl_typesupport_cpp::CameraStatus_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, camera_msg, srv, CameraStatus_Request)() {
  return get_message_type_support_handle<camera_msg::srv::CameraStatus_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "camera_msg/srv/detail/camera_status__functions.h"
// already included above
// #include "camera_msg/srv/detail/camera_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace camera_msg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraStatus_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraStatus_Response_type_support_ids_t;

static const _CameraStatus_Response_type_support_ids_t _CameraStatus_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraStatus_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraStatus_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraStatus_Response_type_support_symbol_names_t _CameraStatus_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, camera_msg, srv, CameraStatus_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, camera_msg, srv, CameraStatus_Response)),
  }
};

typedef struct _CameraStatus_Response_type_support_data_t
{
  void * data[2];
} _CameraStatus_Response_type_support_data_t;

static _CameraStatus_Response_type_support_data_t _CameraStatus_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraStatus_Response_message_typesupport_map = {
  2,
  "camera_msg",
  &_CameraStatus_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CameraStatus_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CameraStatus_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraStatus_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraStatus_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &camera_msg__srv__CameraStatus_Response__get_type_hash,
  &camera_msg__srv__CameraStatus_Response__get_type_description,
  &camera_msg__srv__CameraStatus_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace camera_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<camera_msg::srv::CameraStatus_Response>()
{
  return &::camera_msg::srv::rosidl_typesupport_cpp::CameraStatus_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, camera_msg, srv, CameraStatus_Response)() {
  return get_message_type_support_handle<camera_msg::srv::CameraStatus_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "camera_msg/srv/detail/camera_status__functions.h"
// already included above
// #include "camera_msg/srv/detail/camera_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace camera_msg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraStatus_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraStatus_Event_type_support_ids_t;

static const _CameraStatus_Event_type_support_ids_t _CameraStatus_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraStatus_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraStatus_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraStatus_Event_type_support_symbol_names_t _CameraStatus_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, camera_msg, srv, CameraStatus_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, camera_msg, srv, CameraStatus_Event)),
  }
};

typedef struct _CameraStatus_Event_type_support_data_t
{
  void * data[2];
} _CameraStatus_Event_type_support_data_t;

static _CameraStatus_Event_type_support_data_t _CameraStatus_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraStatus_Event_message_typesupport_map = {
  2,
  "camera_msg",
  &_CameraStatus_Event_message_typesupport_ids.typesupport_identifier[0],
  &_CameraStatus_Event_message_typesupport_symbol_names.symbol_name[0],
  &_CameraStatus_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraStatus_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraStatus_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &camera_msg__srv__CameraStatus_Event__get_type_hash,
  &camera_msg__srv__CameraStatus_Event__get_type_description,
  &camera_msg__srv__CameraStatus_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace camera_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<camera_msg::srv::CameraStatus_Event>()
{
  return &::camera_msg::srv::rosidl_typesupport_cpp::CameraStatus_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, camera_msg, srv, CameraStatus_Event)() {
  return get_message_type_support_handle<camera_msg::srv::CameraStatus_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "camera_msg/srv/detail/camera_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace camera_msg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraStatus_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraStatus_type_support_ids_t;

static const _CameraStatus_type_support_ids_t _CameraStatus_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraStatus_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraStatus_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraStatus_type_support_symbol_names_t _CameraStatus_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, camera_msg, srv, CameraStatus)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, camera_msg, srv, CameraStatus)),
  }
};

typedef struct _CameraStatus_type_support_data_t
{
  void * data[2];
} _CameraStatus_type_support_data_t;

static _CameraStatus_type_support_data_t _CameraStatus_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraStatus_service_typesupport_map = {
  2,
  "camera_msg",
  &_CameraStatus_service_typesupport_ids.typesupport_identifier[0],
  &_CameraStatus_service_typesupport_symbol_names.symbol_name[0],
  &_CameraStatus_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CameraStatus_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraStatus_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<camera_msg::srv::CameraStatus_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<camera_msg::srv::CameraStatus_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<camera_msg::srv::CameraStatus_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<camera_msg::srv::CameraStatus>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<camera_msg::srv::CameraStatus>,
  &camera_msg__srv__CameraStatus__get_type_hash,
  &camera_msg__srv__CameraStatus__get_type_description,
  &camera_msg__srv__CameraStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace camera_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<camera_msg::srv::CameraStatus>()
{
  return &::camera_msg::srv::rosidl_typesupport_cpp::CameraStatus_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, camera_msg, srv, CameraStatus)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<camera_msg::srv::CameraStatus>();
}

#ifdef __cplusplus
}
#endif
