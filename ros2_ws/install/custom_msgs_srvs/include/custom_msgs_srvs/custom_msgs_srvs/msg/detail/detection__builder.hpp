// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs_srvs:msg/Detection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs_srvs/msg/detection.hpp"


#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__DETECTION__BUILDER_HPP_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs_srvs/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs_srvs
{

namespace msg
{

namespace builder
{

class Init_Detection_dis
{
public:
  explicit Init_Detection_dis(::custom_msgs_srvs::msg::Detection & msg)
  : msg_(msg)
  {}
  ::custom_msgs_srvs::msg::Detection dis(::custom_msgs_srvs::msg::Detection::_dis_type arg)
  {
    msg_.dis = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs_srvs::msg::Detection msg_;
};

class Init_Detection_y
{
public:
  explicit Init_Detection_y(::custom_msgs_srvs::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_dis y(::custom_msgs_srvs::msg::Detection::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Detection_dis(msg_);
  }

private:
  ::custom_msgs_srvs::msg::Detection msg_;
};

class Init_Detection_x
{
public:
  Init_Detection_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detection_y x(::custom_msgs_srvs::msg::Detection::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Detection_y(msg_);
  }

private:
  ::custom_msgs_srvs::msg::Detection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs_srvs::msg::Detection>()
{
  return custom_msgs_srvs::msg::builder::Init_Detection_x();
}

}  // namespace custom_msgs_srvs

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__DETECTION__BUILDER_HPP_
