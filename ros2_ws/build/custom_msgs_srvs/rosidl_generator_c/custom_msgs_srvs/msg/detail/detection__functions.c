// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs_srvs:msg/Detection.idl
// generated code does not contain a copyright notice
#include "custom_msgs_srvs/msg/detail/detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_msgs_srvs__msg__Detection__init(custom_msgs_srvs__msg__Detection * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // dis
  return true;
}

void
custom_msgs_srvs__msg__Detection__fini(custom_msgs_srvs__msg__Detection * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // dis
}

bool
custom_msgs_srvs__msg__Detection__are_equal(const custom_msgs_srvs__msg__Detection * lhs, const custom_msgs_srvs__msg__Detection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // dis
  if (lhs->dis != rhs->dis) {
    return false;
  }
  return true;
}

bool
custom_msgs_srvs__msg__Detection__copy(
  const custom_msgs_srvs__msg__Detection * input,
  custom_msgs_srvs__msg__Detection * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // dis
  output->dis = input->dis;
  return true;
}

custom_msgs_srvs__msg__Detection *
custom_msgs_srvs__msg__Detection__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs_srvs__msg__Detection * msg = (custom_msgs_srvs__msg__Detection *)allocator.allocate(sizeof(custom_msgs_srvs__msg__Detection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs_srvs__msg__Detection));
  bool success = custom_msgs_srvs__msg__Detection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs_srvs__msg__Detection__destroy(custom_msgs_srvs__msg__Detection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs_srvs__msg__Detection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs_srvs__msg__Detection__Sequence__init(custom_msgs_srvs__msg__Detection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs_srvs__msg__Detection * data = NULL;

  if (size) {
    data = (custom_msgs_srvs__msg__Detection *)allocator.zero_allocate(size, sizeof(custom_msgs_srvs__msg__Detection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs_srvs__msg__Detection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs_srvs__msg__Detection__fini(&data[i - 1]);
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
custom_msgs_srvs__msg__Detection__Sequence__fini(custom_msgs_srvs__msg__Detection__Sequence * array)
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
      custom_msgs_srvs__msg__Detection__fini(&array->data[i]);
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

custom_msgs_srvs__msg__Detection__Sequence *
custom_msgs_srvs__msg__Detection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs_srvs__msg__Detection__Sequence * array = (custom_msgs_srvs__msg__Detection__Sequence *)allocator.allocate(sizeof(custom_msgs_srvs__msg__Detection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs_srvs__msg__Detection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs_srvs__msg__Detection__Sequence__destroy(custom_msgs_srvs__msg__Detection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs_srvs__msg__Detection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs_srvs__msg__Detection__Sequence__are_equal(const custom_msgs_srvs__msg__Detection__Sequence * lhs, const custom_msgs_srvs__msg__Detection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs_srvs__msg__Detection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs_srvs__msg__Detection__Sequence__copy(
  const custom_msgs_srvs__msg__Detection__Sequence * input,
  custom_msgs_srvs__msg__Detection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs_srvs__msg__Detection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msgs_srvs__msg__Detection * data =
      (custom_msgs_srvs__msg__Detection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs_srvs__msg__Detection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msgs_srvs__msg__Detection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs_srvs__msg__Detection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
