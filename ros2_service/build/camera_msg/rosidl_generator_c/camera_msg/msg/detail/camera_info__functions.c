// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from camera_msg:msg/CameraInfo.idl
// generated code does not contain a copyright notice
#include "camera_msg/msg/detail/camera_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `command`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"

bool
camera_msg__msg__CameraInfo__init(camera_msg__msg__CameraInfo * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    camera_msg__msg__CameraInfo__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    camera_msg__msg__CameraInfo__fini(msg);
    return false;
  }
  return true;
}

void
camera_msg__msg__CameraInfo__fini(camera_msg__msg__CameraInfo * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
}

bool
camera_msg__msg__CameraInfo__are_equal(const camera_msg__msg__CameraInfo * lhs, const camera_msg__msg__CameraInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  return true;
}

bool
camera_msg__msg__CameraInfo__copy(
  const camera_msg__msg__CameraInfo * input,
  camera_msg__msg__CameraInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  return true;
}

camera_msg__msg__CameraInfo *
camera_msg__msg__CameraInfo__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_msg__msg__CameraInfo * msg = (camera_msg__msg__CameraInfo *)allocator.allocate(sizeof(camera_msg__msg__CameraInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(camera_msg__msg__CameraInfo));
  bool success = camera_msg__msg__CameraInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
camera_msg__msg__CameraInfo__destroy(camera_msg__msg__CameraInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    camera_msg__msg__CameraInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
camera_msg__msg__CameraInfo__Sequence__init(camera_msg__msg__CameraInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_msg__msg__CameraInfo * data = NULL;

  if (size) {
    data = (camera_msg__msg__CameraInfo *)allocator.zero_allocate(size, sizeof(camera_msg__msg__CameraInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = camera_msg__msg__CameraInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        camera_msg__msg__CameraInfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
camera_msg__msg__CameraInfo__Sequence__fini(camera_msg__msg__CameraInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      camera_msg__msg__CameraInfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

camera_msg__msg__CameraInfo__Sequence *
camera_msg__msg__CameraInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_msg__msg__CameraInfo__Sequence * array = (camera_msg__msg__CameraInfo__Sequence *)allocator.allocate(sizeof(camera_msg__msg__CameraInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = camera_msg__msg__CameraInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
camera_msg__msg__CameraInfo__Sequence__destroy(camera_msg__msg__CameraInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    camera_msg__msg__CameraInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
camera_msg__msg__CameraInfo__Sequence__are_equal(const camera_msg__msg__CameraInfo__Sequence * lhs, const camera_msg__msg__CameraInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!camera_msg__msg__CameraInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
camera_msg__msg__CameraInfo__Sequence__copy(
  const camera_msg__msg__CameraInfo__Sequence * input,
  camera_msg__msg__CameraInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(camera_msg__msg__CameraInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    camera_msg__msg__CameraInfo * data =
      (camera_msg__msg__CameraInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!camera_msg__msg__CameraInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          camera_msg__msg__CameraInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!camera_msg__msg__CameraInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
