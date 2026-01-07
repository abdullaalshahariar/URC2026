// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from camera_msg:srv/CameraStatus.idl
// generated code does not contain a copyright notice
#include "camera_msg/srv/detail/camera_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `command`
// Member `camera_id`
#include "rosidl_runtime_c/string_functions.h"

bool
camera_msg__srv__CameraStatus_Request__init(camera_msg__srv__CameraStatus_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    camera_msg__srv__CameraStatus_Request__fini(msg);
    return false;
  }
  // camera_id
  if (!rosidl_runtime_c__String__init(&msg->camera_id)) {
    camera_msg__srv__CameraStatus_Request__fini(msg);
    return false;
  }
  return true;
}

void
camera_msg__srv__CameraStatus_Request__fini(camera_msg__srv__CameraStatus_Request * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // camera_id
  rosidl_runtime_c__String__fini(&msg->camera_id);
}

bool
camera_msg__srv__CameraStatus_Request__are_equal(const camera_msg__srv__CameraStatus_Request * lhs, const camera_msg__srv__CameraStatus_Request * rhs)
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
  // camera_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->camera_id), &(rhs->camera_id)))
  {
    return false;
  }
  return true;
}

bool
camera_msg__srv__CameraStatus_Request__copy(
  const camera_msg__srv__CameraStatus_Request * input,
  camera_msg__srv__CameraStatus_Request * output)
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
  // camera_id
  if (!rosidl_runtime_c__String__copy(
      &(input->camera_id), &(output->camera_id)))
  {
    return false;
  }
  return true;
}

camera_msg__srv__CameraStatus_Request *
camera_msg__srv__CameraStatus_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_msg__srv__CameraStatus_Request * msg = (camera_msg__srv__CameraStatus_Request *)allocator.allocate(sizeof(camera_msg__srv__CameraStatus_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(camera_msg__srv__CameraStatus_Request));
  bool success = camera_msg__srv__CameraStatus_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
camera_msg__srv__CameraStatus_Request__destroy(camera_msg__srv__CameraStatus_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    camera_msg__srv__CameraStatus_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
camera_msg__srv__CameraStatus_Request__Sequence__init(camera_msg__srv__CameraStatus_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_msg__srv__CameraStatus_Request * data = NULL;

  if (size) {
    data = (camera_msg__srv__CameraStatus_Request *)allocator.zero_allocate(size, sizeof(camera_msg__srv__CameraStatus_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = camera_msg__srv__CameraStatus_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        camera_msg__srv__CameraStatus_Request__fini(&data[i - 1]);
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
camera_msg__srv__CameraStatus_Request__Sequence__fini(camera_msg__srv__CameraStatus_Request__Sequence * array)
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
      camera_msg__srv__CameraStatus_Request__fini(&array->data[i]);
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

camera_msg__srv__CameraStatus_Request__Sequence *
camera_msg__srv__CameraStatus_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_msg__srv__CameraStatus_Request__Sequence * array = (camera_msg__srv__CameraStatus_Request__Sequence *)allocator.allocate(sizeof(camera_msg__srv__CameraStatus_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = camera_msg__srv__CameraStatus_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
camera_msg__srv__CameraStatus_Request__Sequence__destroy(camera_msg__srv__CameraStatus_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    camera_msg__srv__CameraStatus_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
camera_msg__srv__CameraStatus_Request__Sequence__are_equal(const camera_msg__srv__CameraStatus_Request__Sequence * lhs, const camera_msg__srv__CameraStatus_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!camera_msg__srv__CameraStatus_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
camera_msg__srv__CameraStatus_Request__Sequence__copy(
  const camera_msg__srv__CameraStatus_Request__Sequence * input,
  camera_msg__srv__CameraStatus_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(camera_msg__srv__CameraStatus_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    camera_msg__srv__CameraStatus_Request * data =
      (camera_msg__srv__CameraStatus_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!camera_msg__srv__CameraStatus_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          camera_msg__srv__CameraStatus_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!camera_msg__srv__CameraStatus_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
camera_msg__srv__CameraStatus_Response__init(camera_msg__srv__CameraStatus_Response * msg)
{
  if (!msg) {
    return false;
  }
  // is_active
  // status_message
  if (!rosidl_runtime_c__String__init(&msg->status_message)) {
    camera_msg__srv__CameraStatus_Response__fini(msg);
    return false;
  }
  return true;
}

void
camera_msg__srv__CameraStatus_Response__fini(camera_msg__srv__CameraStatus_Response * msg)
{
  if (!msg) {
    return;
  }
  // is_active
  // status_message
  rosidl_runtime_c__String__fini(&msg->status_message);
}

bool
camera_msg__srv__CameraStatus_Response__are_equal(const camera_msg__srv__CameraStatus_Response * lhs, const camera_msg__srv__CameraStatus_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_active
  if (lhs->is_active != rhs->is_active) {
    return false;
  }
  // status_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status_message), &(rhs->status_message)))
  {
    return false;
  }
  return true;
}

bool
camera_msg__srv__CameraStatus_Response__copy(
  const camera_msg__srv__CameraStatus_Response * input,
  camera_msg__srv__CameraStatus_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // is_active
  output->is_active = input->is_active;
  // status_message
  if (!rosidl_runtime_c__String__copy(
      &(input->status_message), &(output->status_message)))
  {
    return false;
  }
  return true;
}

camera_msg__srv__CameraStatus_Response *
camera_msg__srv__CameraStatus_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_msg__srv__CameraStatus_Response * msg = (camera_msg__srv__CameraStatus_Response *)allocator.allocate(sizeof(camera_msg__srv__CameraStatus_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(camera_msg__srv__CameraStatus_Response));
  bool success = camera_msg__srv__CameraStatus_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
camera_msg__srv__CameraStatus_Response__destroy(camera_msg__srv__CameraStatus_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    camera_msg__srv__CameraStatus_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
camera_msg__srv__CameraStatus_Response__Sequence__init(camera_msg__srv__CameraStatus_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_msg__srv__CameraStatus_Response * data = NULL;

  if (size) {
    data = (camera_msg__srv__CameraStatus_Response *)allocator.zero_allocate(size, sizeof(camera_msg__srv__CameraStatus_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = camera_msg__srv__CameraStatus_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        camera_msg__srv__CameraStatus_Response__fini(&data[i - 1]);
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
camera_msg__srv__CameraStatus_Response__Sequence__fini(camera_msg__srv__CameraStatus_Response__Sequence * array)
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
      camera_msg__srv__CameraStatus_Response__fini(&array->data[i]);
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

camera_msg__srv__CameraStatus_Response__Sequence *
camera_msg__srv__CameraStatus_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_msg__srv__CameraStatus_Response__Sequence * array = (camera_msg__srv__CameraStatus_Response__Sequence *)allocator.allocate(sizeof(camera_msg__srv__CameraStatus_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = camera_msg__srv__CameraStatus_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
camera_msg__srv__CameraStatus_Response__Sequence__destroy(camera_msg__srv__CameraStatus_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    camera_msg__srv__CameraStatus_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
camera_msg__srv__CameraStatus_Response__Sequence__are_equal(const camera_msg__srv__CameraStatus_Response__Sequence * lhs, const camera_msg__srv__CameraStatus_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!camera_msg__srv__CameraStatus_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
camera_msg__srv__CameraStatus_Response__Sequence__copy(
  const camera_msg__srv__CameraStatus_Response__Sequence * input,
  camera_msg__srv__CameraStatus_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(camera_msg__srv__CameraStatus_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    camera_msg__srv__CameraStatus_Response * data =
      (camera_msg__srv__CameraStatus_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!camera_msg__srv__CameraStatus_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          camera_msg__srv__CameraStatus_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!camera_msg__srv__CameraStatus_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "camera_msg/srv/detail/camera_status__functions.h"

bool
camera_msg__srv__CameraStatus_Event__init(camera_msg__srv__CameraStatus_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    camera_msg__srv__CameraStatus_Event__fini(msg);
    return false;
  }
  // request
  if (!camera_msg__srv__CameraStatus_Request__Sequence__init(&msg->request, 0)) {
    camera_msg__srv__CameraStatus_Event__fini(msg);
    return false;
  }
  // response
  if (!camera_msg__srv__CameraStatus_Response__Sequence__init(&msg->response, 0)) {
    camera_msg__srv__CameraStatus_Event__fini(msg);
    return false;
  }
  return true;
}

void
camera_msg__srv__CameraStatus_Event__fini(camera_msg__srv__CameraStatus_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  camera_msg__srv__CameraStatus_Request__Sequence__fini(&msg->request);
  // response
  camera_msg__srv__CameraStatus_Response__Sequence__fini(&msg->response);
}

bool
camera_msg__srv__CameraStatus_Event__are_equal(const camera_msg__srv__CameraStatus_Event * lhs, const camera_msg__srv__CameraStatus_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!camera_msg__srv__CameraStatus_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!camera_msg__srv__CameraStatus_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
camera_msg__srv__CameraStatus_Event__copy(
  const camera_msg__srv__CameraStatus_Event * input,
  camera_msg__srv__CameraStatus_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!camera_msg__srv__CameraStatus_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!camera_msg__srv__CameraStatus_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

camera_msg__srv__CameraStatus_Event *
camera_msg__srv__CameraStatus_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_msg__srv__CameraStatus_Event * msg = (camera_msg__srv__CameraStatus_Event *)allocator.allocate(sizeof(camera_msg__srv__CameraStatus_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(camera_msg__srv__CameraStatus_Event));
  bool success = camera_msg__srv__CameraStatus_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
camera_msg__srv__CameraStatus_Event__destroy(camera_msg__srv__CameraStatus_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    camera_msg__srv__CameraStatus_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
camera_msg__srv__CameraStatus_Event__Sequence__init(camera_msg__srv__CameraStatus_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_msg__srv__CameraStatus_Event * data = NULL;

  if (size) {
    data = (camera_msg__srv__CameraStatus_Event *)allocator.zero_allocate(size, sizeof(camera_msg__srv__CameraStatus_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = camera_msg__srv__CameraStatus_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        camera_msg__srv__CameraStatus_Event__fini(&data[i - 1]);
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
camera_msg__srv__CameraStatus_Event__Sequence__fini(camera_msg__srv__CameraStatus_Event__Sequence * array)
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
      camera_msg__srv__CameraStatus_Event__fini(&array->data[i]);
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

camera_msg__srv__CameraStatus_Event__Sequence *
camera_msg__srv__CameraStatus_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_msg__srv__CameraStatus_Event__Sequence * array = (camera_msg__srv__CameraStatus_Event__Sequence *)allocator.allocate(sizeof(camera_msg__srv__CameraStatus_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = camera_msg__srv__CameraStatus_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
camera_msg__srv__CameraStatus_Event__Sequence__destroy(camera_msg__srv__CameraStatus_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    camera_msg__srv__CameraStatus_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
camera_msg__srv__CameraStatus_Event__Sequence__are_equal(const camera_msg__srv__CameraStatus_Event__Sequence * lhs, const camera_msg__srv__CameraStatus_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!camera_msg__srv__CameraStatus_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
camera_msg__srv__CameraStatus_Event__Sequence__copy(
  const camera_msg__srv__CameraStatus_Event__Sequence * input,
  camera_msg__srv__CameraStatus_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(camera_msg__srv__CameraStatus_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    camera_msg__srv__CameraStatus_Event * data =
      (camera_msg__srv__CameraStatus_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!camera_msg__srv__CameraStatus_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          camera_msg__srv__CameraStatus_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!camera_msg__srv__CameraStatus_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
