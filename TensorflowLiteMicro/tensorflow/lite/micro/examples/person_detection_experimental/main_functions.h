/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

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

#ifndef TENSORFLOW_LITE_MICRO_EXAMPLES_PERSON_DETECTION_EXPERIMENTAL_MAIN_FUNCTIONS_H_
#define TENSORFLOW_LITE_MICRO_EXAMPLES_PERSON_DETECTION_EXPERIMENTAL_MAIN_FUNCTIONS_H_

#include "tensorflow/lite/c/common.h"

// Initializes all data needed for the example. The name is important, and needs
// to be setup() for Arduino compatibility.
#ifdef __cplusplus
extern "C" {
#endif

void person_detect_init(unsigned char* model_data);

// Runs one iteration of data gathering and inference. This should be called
// repeatedly from the application code. The name needs to be loop() for Arduino
// compatibility.
int person_detect(uint8_t * hardware_input);

#ifdef __cplusplus
}
#endif
#endif  // TENSORFLOW_LITE_MICRO_EXAMPLES_PERSON_DETECTION_EXPERIMENTAL_MAIN_FUNCTIONS_H_
