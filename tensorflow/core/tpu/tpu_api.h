/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

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

#ifndef TENSORFLOW_CORE_TPU_TPU_API_H_
#define TENSORFLOW_CORE_TPU_TPU_API_H_

#include "tensorflow/core/tpu/kernels/tpu_compile_c_api.h"
#include "tensorflow/core/tpu/kernels/tpu_execute_c_api.h"
#include "tensorflow/core/tpu/kernels/tpu_mesh_state_c_api.h"
#include "tensorflow/core/tpu/kernels/tpu_util_c_api.h"
#include "tensorflow/core/tpu/libtftpu.h"
#include "tensorflow/core/tpu/tpu_config_c_api.h"
#include "tensorflow/stream_executor/tpu/tpu_executor_c_api.h"
#include "tensorflow/stream_executor/tpu/tpu_node_context_c_api.h"

namespace tensorflow {
namespace tpu {

TfTpu_BaseFn* InitializeApiFn();

TfTpu_ConfigApiFn* ConfigApiFn();

TfTpu_MeshStateApiFn* MeshStateApiFn();

TfTpu_CompileApiFn* CompileApiFn();

TfTpu_ExecuteApiFn* ExecuteApiFn();

TfTpu_TpuProgramApiFn* TpuProgramApiFn();

TfTpu_ExecutorApiFn* ExecutorApiFn();

TfTpu_NodeContextApiFn* NodeContextApiFn();

TfTpu_UtilApiFn* UtilApiFn();

}  // namespace tpu
}  // namespace tensorflow

#endif  // TENSORFLOW_CORE_TPU_TPU_API_H_
