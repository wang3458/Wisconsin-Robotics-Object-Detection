// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs_srvs:msg/Detection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs_srvs/msg/detection.hpp"


#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__DETECTION__TRAITS_HPP_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs_srvs/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msgs_srvs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Detection & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: dis
  {
    out << "dis: ";
    rosidl_generator_traits::value_to_yaml(msg.dis, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: dis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dis: ";
    rosidl_generator_traits::value_to_yaml(msg.dis, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Detection & msg, bool use_flow_style = false)
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

}  // namespace custom_msgs_srvs

namespace rosidl_generator_traits
{

[[deprecated("use custom_msgs_srvs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msgs_srvs::msg::Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs_srvs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs_srvs::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs_srvs::msg::Detection & msg)
{
  return custom_msgs_srvs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs_srvs::msg::Detection>()
{
  return "custom_msgs_srvs::msg::Detection";
}

template<>
inline const char * name<custom_msgs_srvs::msg::Detection>()
{
  return "custom_msgs_srvs/msg/Detection";
}

template<>
struct has_fixed_size<custom_msgs_srvs::msg::Detection>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_msgs_srvs::msg::Detection>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_msgs_srvs::msg::Detection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__DETECTION__TRAITS_HPP_
