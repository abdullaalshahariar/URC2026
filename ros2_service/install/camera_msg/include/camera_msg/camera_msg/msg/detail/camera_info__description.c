// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from camera_msg:msg/CameraInfo.idl
// generated code does not contain a copyright notice

#include "camera_msg/msg/detail/camera_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_camera_msg
const rosidl_type_hash_t *
camera_msg__msg__CameraInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc7, 0xc7, 0x6f, 0x33, 0xb2, 0x5d, 0x7c, 0xa5,
      0xae, 0x35, 0x9e, 0x2a, 0xf8, 0x15, 0xe3, 0x1b,
      0x6a, 0x13, 0x8f, 0x5d, 0x6f, 0x73, 0x7a, 0xd6,
      0xc6, 0x31, 0x2e, 0x82, 0x26, 0xd8, 0xca, 0x73,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char camera_msg__msg__CameraInfo__TYPE_NAME[] = "camera_msg/msg/CameraInfo";

// Define type names, field names, and default values
static char camera_msg__msg__CameraInfo__FIELD_NAME__command[] = "command";
static char camera_msg__msg__CameraInfo__FIELD_NAME__id[] = "id";

static rosidl_runtime_c__type_description__Field camera_msg__msg__CameraInfo__FIELDS[] = {
  {
    {camera_msg__msg__CameraInfo__FIELD_NAME__command, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {camera_msg__msg__CameraInfo__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
camera_msg__msg__CameraInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {camera_msg__msg__CameraInfo__TYPE_NAME, 25, 25},
      {camera_msg__msg__CameraInfo__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string command\n"
  "string id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
camera_msg__msg__CameraInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {camera_msg__msg__CameraInfo__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 24, 24},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
camera_msg__msg__CameraInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *camera_msg__msg__CameraInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
