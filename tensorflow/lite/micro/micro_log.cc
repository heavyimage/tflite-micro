/* Copyright 2023 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "tensorflow/lite/micro/micro_log.h"

#include <cstdarg>
#include <cstdint>

#include "tensorflow/lite/micro/debug_log.h"

void VMicroPrintf(const char* format, va_list args) {
}

void MicroPrintf(const char* format, ...) {
}

int MicroSnprintf(char* buffer, size_t buf_size, const char* format, ...) {
  return 0;
}

int MicroVsnprintf(char* buffer, size_t buf_size, const char* format,
                   va_list vlist) {
  return 0;
}
