// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs_srvs:msg/Detection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs_srvs/msg/detection.hpp"


#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__DETECTION__STRUCT_HPP_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msgs_srvs__msg__Detection __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs_srvs__msg__Detection __declspec(deprecated)
#endif

namespace custom_msgs_srvs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detection_
{
  using Type = Detection_<ContainerAllocator>;

  explicit Detection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ll;
      this->y = 0ll;
      this->dis = 0.0;
    }
  }

  explicit Detection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ll;
      this->y = 0ll;
      this->dis = 0.0;
    }
  }

  // field types and members
  using _x_type =
    int64_t;
  _x_type x;
  using _y_type =
    int64_t;
  _y_type y;
  using _dis_type =
    double;
  _dis_type dis;

  // setters for named parameter idiom
  Type & set__x(
    const int64_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int64_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__dis(
    const double & _arg)
  {
    this->dis = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs_srvs::msg::Detection_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs_srvs::msg::Detection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs_srvs::msg::Detection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs_srvs::msg::Detection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::msg::Detection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::msg::Detection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::msg::Detection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::msg::Detection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs_srvs::msg::Detection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs_srvs::msg::Detection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs_srvs__msg__Detection
    std::shared_ptr<custom_msgs_srvs::msg::Detection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs_srvs__msg__Detection
    std::shared_ptr<custom_msgs_srvs::msg::Detection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detection_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->dis != other.dis) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detection_

// alias to use template instance with default allocator
using Detection =
  custom_msgs_srvs::msg::Detection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs_srvs

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__DETECTION__STRUCT_HPP_
