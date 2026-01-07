// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from camera_msg:msg/CameraInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "camera_msg/msg/camera_info.hpp"


#ifndef CAMERA_MSG__MSG__DETAIL__CAMERA_INFO__STRUCT_HPP_
#define CAMERA_MSG__MSG__DETAIL__CAMERA_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__camera_msg__msg__CameraInfo __attribute__((deprecated))
#else
# define DEPRECATED__camera_msg__msg__CameraInfo __declspec(deprecated)
#endif

namespace camera_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraInfo_
{
  using Type = CameraInfo_<ContainerAllocator>;

  explicit CameraInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->id = "";
    }
  }

  explicit CameraInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc),
    id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->id = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_msg::msg::CameraInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_msg::msg::CameraInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_msg::msg::CameraInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_msg::msg::CameraInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_msg::msg::CameraInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_msg::msg::CameraInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_msg::msg::CameraInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_msg::msg::CameraInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_msg::msg::CameraInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_msg::msg::CameraInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_msg__msg__CameraInfo
    std::shared_ptr<camera_msg::msg::CameraInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_msg__msg__CameraInfo
    std::shared_ptr<camera_msg::msg::CameraInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraInfo_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraInfo_

// alias to use template instance with default allocator
using CameraInfo =
  camera_msg::msg::CameraInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace camera_msg

#endif  // CAMERA_MSG__MSG__DETAIL__CAMERA_INFO__STRUCT_HPP_
