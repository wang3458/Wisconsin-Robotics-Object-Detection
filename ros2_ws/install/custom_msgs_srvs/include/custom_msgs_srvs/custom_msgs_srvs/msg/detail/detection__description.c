// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_msgs_srvs:msg/Detection.idl
// generated code does not contain a copyright notice

#include "custom_msgs_srvs/msg/detail/detection__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_type_hash_t *
custom_msgs_srvs__msg__Detection__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfc, 0x06, 0x2c, 0x4a, 0xc8, 0x26, 0x6f, 0xc1,
      0x0d, 0x1e, 0x07, 0x9b, 0x0f, 0xb4, 0x75, 0x03,
      0x44, 0xb6, 0x3e, 0x6c, 0x16, 0x15, 0x1a, 0xc3,
      0xa5, 0x78, 0xfd, 0x7b, 0x7d, 0x85, 0x9a, 0xe7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_msgs_srvs__msg__Detection__TYPE_NAME[] = "custom_msgs_srvs/msg/Detection";

// Define type names, field names, and default values
static char custom_msgs_srvs__msg__Detection__FIELD_NAME__x[] = "x";
static char custom_msgs_srvs__msg__Detection__FIELD_NAME__y[] = "y";
static char custom_msgs_srvs__msg__Detection__FIELD_NAME__dis[] = "dis";

static rosidl_runtime_c__type_description__Field custom_msgs_srvs__msg__Detection__FIELDS[] = {
  {
    {custom_msgs_srvs__msg__Detection__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs_srvs__msg__Detection__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs_srvs__msg__Detection__FIELD_NAME__dis, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_msgs_srvs__msg__Detection__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_msgs_srvs__msg__Detection__TYPE_NAME, 30, 30},
      {custom_msgs_srvs__msg__Detection__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 x\n"
  "int64 y\n"
  "float64 dis";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_msgs_srvs__msg__Detection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_msgs_srvs__msg__Detection__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 28, 28},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msgs_srvs__msg__Detection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_msgs_srvs__msg__Detection__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
