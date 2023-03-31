/**
  ******************************************************************************
  * @file    network.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Thu Mar 23 21:42:02 2023
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */


#include "network.h"
#include "network_data.h"

#include "ai_platform.h"
#include "ai_platform_interface.h"
#include "ai_math_helpers.h"

#include "core_common.h"
#include "core_convert.h"

#include "layers.h"



#undef AI_NET_OBJ_INSTANCE
#define AI_NET_OBJ_INSTANCE g_network
 
#undef AI_NETWORK_MODEL_SIGNATURE
#define AI_NETWORK_MODEL_SIGNATURE     "7541539eb86bec7c44baf75ce9d67ad9"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Thu Mar 23 21:42:02 2023"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_NETWORK_N_BATCHES
#define AI_NETWORK_N_BATCHES         (1)

static ai_ptr g_network_activations_map[1] = AI_C_ARRAY_INIT;
static ai_ptr g_network_weights_map[1] = AI_C_ARRAY_INIT;



/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  dense_1_in0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1024, AI_STATIC)
/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  dense_1_out0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 96, AI_STATIC)
/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  lstm_7_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)
/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  dense_1_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 96, AI_STATIC)
/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  dense_1_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 3, AI_STATIC)
/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  lstm_4_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 224, AI_STATIC)
/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  lstm_5_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 112, AI_STATIC)
/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  lstm_6_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 112, AI_STATIC)
/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  lstm_7_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 224, AI_STATIC)
/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  input_0_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 96, AI_STATIC)
/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  lstm_4_output0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1024, AI_STATIC)
/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  lstm_5_output0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 16, AI_STATIC)
/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  repeat_vector_1_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 512, AI_STATIC)
/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  lstm_6_output0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 512, AI_STATIC)
/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  lstm_7_output0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1024, AI_STATIC)
/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  time_distributed_1_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 96, AI_STATIC)
/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  lstm_4_kernel_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 384, AI_STATIC)
/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  lstm_4_recurrent_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4096, AI_STATIC)
/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  lstm_4_peephole_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 96, AI_STATIC)
/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  lstm_4_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)
/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  lstm_5_kernel_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2048, AI_STATIC)
/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  lstm_5_recurrent_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1024, AI_STATIC)
/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  lstm_5_peephole_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 48, AI_STATIC)
/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  lstm_5_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)
/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  lstm_6_kernel_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1024, AI_STATIC)
/* Array#25 */
AI_ARRAY_OBJ_DECLARE(
  lstm_6_recurrent_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1024, AI_STATIC)
/* Array#26 */
AI_ARRAY_OBJ_DECLARE(
  lstm_6_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)
/* Array#27 */
AI_ARRAY_OBJ_DECLARE(
  lstm_7_kernel_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2048, AI_STATIC)
/* Array#28 */
AI_ARRAY_OBJ_DECLARE(
  lstm_7_recurrent_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4096, AI_STATIC)
/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  dense_1_in0, AI_STATIC,
  0, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &dense_1_in0_array, NULL)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  dense_1_out0, AI_STATIC,
  1, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 1), AI_STRIDE_INIT(4, 4, 4, 12, 12),
  1, &dense_1_out0_array, NULL)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  lstm_7_bias, AI_STATIC,
  2, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &lstm_7_bias_array, NULL)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  dense_1_weights, AI_STATIC,
  3, 0x0,
  AI_SHAPE_INIT(4, 32, 3, 1, 1), AI_STRIDE_INIT(4, 4, 128, 384, 384),
  1, &dense_1_weights_array, NULL)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  dense_1_bias, AI_STATIC,
  4, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 1), AI_STRIDE_INIT(4, 4, 4, 12, 12),
  1, &dense_1_bias_array, NULL)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  lstm_4_scratch0, AI_STATIC,
  5, 0x0,
  AI_SHAPE_INIT(4, 1, 224, 1, 1), AI_STRIDE_INIT(4, 4, 4, 896, 896),
  1, &lstm_4_scratch0_array, NULL)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  lstm_5_scratch0, AI_STATIC,
  6, 0x0,
  AI_SHAPE_INIT(4, 1, 112, 1, 1), AI_STRIDE_INIT(4, 4, 4, 448, 448),
  1, &lstm_5_scratch0_array, NULL)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  lstm_6_scratch0, AI_STATIC,
  7, 0x0,
  AI_SHAPE_INIT(4, 1, 112, 1, 1), AI_STRIDE_INIT(4, 4, 4, 448, 448),
  1, &lstm_6_scratch0_array, NULL)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  lstm_7_scratch0, AI_STATIC,
  8, 0x0,
  AI_SHAPE_INIT(4, 1, 224, 1, 1), AI_STRIDE_INIT(4, 4, 4, 896, 896),
  1, &lstm_7_scratch0_array, NULL)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  input_0_output, AI_STATIC,
  9, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 32), AI_STRIDE_INIT(4, 4, 4, 12, 12),
  1, &input_0_output_array, NULL)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  lstm_4_output0, AI_STATIC,
  10, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 32), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &lstm_4_output0_array, NULL)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  lstm_5_output0, AI_STATIC,
  11, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &lstm_5_output0_array, NULL)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  repeat_vector_1_output, AI_STATIC,
  12, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 32), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &repeat_vector_1_output_array, NULL)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  lstm_6_output0, AI_STATIC,
  13, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 32), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &lstm_6_output0_array, NULL)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  lstm_7_output0, AI_STATIC,
  14, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 32), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &lstm_7_output0_array, NULL)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  lstm_7_output00, AI_STATIC,
  15, 0x0,
  AI_SHAPE_INIT(4, 32, 32, 1, 1), AI_STRIDE_INIT(4, 128, 4, 128, 128),
  1, &lstm_7_output0_array, NULL)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  time_distributed_1_output, AI_STATIC,
  16, 0x0,
  AI_SHAPE_INIT(4, 32, 3, 1, 1), AI_STRIDE_INIT(4, 12, 4, 12, 12),
  1, &time_distributed_1_output_array, NULL)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  time_distributed_1_output0, AI_STATIC,
  17, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 32), AI_STRIDE_INIT(4, 4, 4, 12, 12),
  1, &time_distributed_1_output_array, NULL)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  lstm_4_kernel, AI_STATIC,
  18, 0x0,
  AI_SHAPE_INIT(4, 3, 1, 1, 128), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &lstm_4_kernel_array, NULL)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  lstm_4_recurrent, AI_STATIC,
  19, 0x0,
  AI_SHAPE_INIT(4, 32, 1, 1, 128), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &lstm_4_recurrent_array, NULL)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  lstm_4_peephole, AI_STATIC,
  20, 0x0,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &lstm_4_peephole_array, NULL)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  lstm_4_bias, AI_STATIC,
  21, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &lstm_4_bias_array, NULL)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  lstm_5_kernel, AI_STATIC,
  22, 0x0,
  AI_SHAPE_INIT(4, 32, 1, 1, 64), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &lstm_5_kernel_array, NULL)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  lstm_5_recurrent, AI_STATIC,
  23, 0x0,
  AI_SHAPE_INIT(4, 16, 1, 1, 64), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &lstm_5_recurrent_array, NULL)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  lstm_5_peephole, AI_STATIC,
  24, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &lstm_5_peephole_array, NULL)

/* Tensor #25 */
AI_TENSOR_OBJ_DECLARE(
  lstm_5_bias, AI_STATIC,
  25, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &lstm_5_bias_array, NULL)

/* Tensor #26 */
AI_TENSOR_OBJ_DECLARE(
  lstm_6_kernel, AI_STATIC,
  26, 0x0,
  AI_SHAPE_INIT(4, 16, 1, 1, 64), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &lstm_6_kernel_array, NULL)

/* Tensor #27 */
AI_TENSOR_OBJ_DECLARE(
  lstm_6_recurrent, AI_STATIC,
  27, 0x0,
  AI_SHAPE_INIT(4, 16, 1, 1, 64), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &lstm_6_recurrent_array, NULL)

/* Tensor #28 */
AI_TENSOR_OBJ_DECLARE(
  lstm_6_bias, AI_STATIC,
  28, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &lstm_6_bias_array, NULL)

/* Tensor #29 */
AI_TENSOR_OBJ_DECLARE(
  lstm_7_kernel, AI_STATIC,
  29, 0x0,
  AI_SHAPE_INIT(4, 16, 1, 1, 128), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &lstm_7_kernel_array, NULL)

/* Tensor #30 */
AI_TENSOR_OBJ_DECLARE(
  lstm_7_recurrent, AI_STATIC,
  30, 0x0,
  AI_SHAPE_INIT(4, 32, 1, 1, 128), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &lstm_7_recurrent_array, NULL)



/**  Layer declarations section  **********************************************/


AI_TENSOR_CHAIN_OBJ_DECLARE(
  dense_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_1_in0),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_1_out0),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &dense_1_weights, &dense_1_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  dense_1_layer, 5,
  DENSE_TYPE, 0x0, NULL,
  dense, forward_dense,
  &dense_1_chain,
  NULL, &dense_1_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  time_distributed_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &lstm_7_output00),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &time_distributed_1_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  time_distributed_1_layer, 5,
  TIME_DISTRIBUTED_TYPE, 0x0, NULL,
  time_distributed, forward_time_distributed,
  &time_distributed_1_chain,
  NULL, &dense_1_layer, AI_STATIC, 
  .inner_layer = AI_LAYER_OBJ(&dense_1_layer), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  lstm_7_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &lstm_6_output0),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &lstm_7_output0),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 9, &lstm_7_kernel, &lstm_7_recurrent, &lstm_4_peephole, &lstm_7_bias, NULL, NULL, NULL, NULL, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &lstm_7_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  lstm_7_layer, 4,
  LSTM_TYPE, 0x0, NULL,
  lstm, forward_lstm,
  &lstm_7_chain,
  NULL, &time_distributed_1_layer, AI_STATIC, 
  .n_units = 32, 
  .activation_nl = nl_func_relu_array_f32, 
  .go_backwards = false, 
  .reverse_seq = false, 
  .return_state = false, 
  .out_nl = nl_func_relu_array_f32, 
  .recurrent_nl = nl_func_sigmoid_array_f32, 
  .cell_clip = 3e+38, 
  .state = AI_HANDLE_PTR(NULL), 
  .init = AI_LAYER_FUNC(NULL), 
  .destroy = AI_LAYER_FUNC(NULL), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  lstm_6_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &repeat_vector_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &lstm_6_output0),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 9, &lstm_6_kernel, &lstm_6_recurrent, &lstm_5_peephole, &lstm_6_bias, NULL, NULL, NULL, NULL, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &lstm_6_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  lstm_6_layer, 3,
  LSTM_TYPE, 0x0, NULL,
  lstm, forward_lstm,
  &lstm_6_chain,
  NULL, &lstm_7_layer, AI_STATIC, 
  .n_units = 16, 
  .activation_nl = nl_func_relu_array_f32, 
  .go_backwards = false, 
  .reverse_seq = false, 
  .return_state = false, 
  .out_nl = nl_func_relu_array_f32, 
  .recurrent_nl = nl_func_sigmoid_array_f32, 
  .cell_clip = 3e+38, 
  .state = AI_HANDLE_PTR(NULL), 
  .init = AI_LAYER_FUNC(NULL), 
  .destroy = AI_LAYER_FUNC(NULL), 
)


AI_STATIC_CONST ai_i16 repeat_vector_1_repeats_data[] = { 32, 1, 1 };
AI_ARRAY_OBJ_DECLARE(
    repeat_vector_1_repeats, AI_ARRAY_FORMAT_S16,
    repeat_vector_1_repeats_data, repeat_vector_1_repeats_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  repeat_vector_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &lstm_5_output0),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &repeat_vector_1_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  repeat_vector_1_layer, 2,
  TILE_TYPE, 0x0, NULL,
  tile, forward_tile,
  &repeat_vector_1_chain,
  NULL, &lstm_6_layer, AI_STATIC, 
  .repeats = &repeat_vector_1_repeats, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  lstm_5_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &lstm_4_output0),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &lstm_5_output0),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 9, &lstm_5_kernel, &lstm_5_recurrent, &lstm_5_peephole, &lstm_5_bias, NULL, NULL, NULL, NULL, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &lstm_5_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  lstm_5_layer, 1,
  LSTM_TYPE, 0x0, NULL,
  lstm, forward_lstm,
  &lstm_5_chain,
  NULL, &repeat_vector_1_layer, AI_STATIC, 
  .n_units = 16, 
  .activation_nl = nl_func_relu_array_f32, 
  .go_backwards = false, 
  .reverse_seq = false, 
  .return_state = false, 
  .out_nl = nl_func_relu_array_f32, 
  .recurrent_nl = nl_func_sigmoid_array_f32, 
  .cell_clip = 3e+38, 
  .state = AI_HANDLE_PTR(NULL), 
  .init = AI_LAYER_FUNC(NULL), 
  .destroy = AI_LAYER_FUNC(NULL), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  lstm_4_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &input_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &lstm_4_output0),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 9, &lstm_4_kernel, &lstm_4_recurrent, &lstm_4_peephole, &lstm_4_bias, NULL, NULL, NULL, NULL, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &lstm_4_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  lstm_4_layer, 0,
  LSTM_TYPE, 0x0, NULL,
  lstm, forward_lstm,
  &lstm_4_chain,
  NULL, &lstm_5_layer, AI_STATIC, 
  .n_units = 32, 
  .activation_nl = nl_func_relu_array_f32, 
  .go_backwards = false, 
  .reverse_seq = false, 
  .return_state = false, 
  .out_nl = nl_func_relu_array_f32, 
  .recurrent_nl = nl_func_sigmoid_array_f32, 
  .cell_clip = 3e+38, 
  .state = AI_HANDLE_PTR(NULL), 
  .init = AI_LAYER_FUNC(NULL), 
  .destroy = AI_LAYER_FUNC(NULL), 
)


#if (AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 65484, 1, 1),
    65484, NULL, NULL),
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 7040, 1, 1),
    7040, NULL, NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_IN_NUM, &input_0_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_OUT_NUM, &time_distributed_1_output0),
  &lstm_4_layer, 0, NULL)

#else

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 65484, 1, 1),
      65484, NULL, NULL)
  ),
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 7040, 1, 1),
      7040, NULL, NULL)
  ),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_IN_NUM, &input_0_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_OUT_NUM, &time_distributed_1_output0),
  &lstm_4_layer, 0, NULL)

#endif	/*(AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)*/


/******************************************************************************/
AI_DECLARE_STATIC
ai_bool network_configure_activations(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_activations_map(g_network_activations_map, 1, params)) {
    /* Updating activations (byte) offsets */
    
    input_0_output_array.data = AI_PTR(g_network_activations_map[0] + 1536);
    input_0_output_array.data_start = AI_PTR(g_network_activations_map[0] + 1536);
    
    lstm_4_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 1920);
    lstm_4_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 1920);
    
    lstm_4_output0_array.data = AI_PTR(g_network_activations_map[0] + 2816);
    lstm_4_output0_array.data_start = AI_PTR(g_network_activations_map[0] + 2816);
    
    lstm_5_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 1536);
    lstm_5_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 1536);
    
    lstm_5_output0_array.data = AI_PTR(g_network_activations_map[0] + 1984);
    lstm_5_output0_array.data_start = AI_PTR(g_network_activations_map[0] + 1984);
    
    repeat_vector_1_output_array.data = AI_PTR(g_network_activations_map[0] + 2048);
    repeat_vector_1_output_array.data_start = AI_PTR(g_network_activations_map[0] + 2048);
    
    lstm_6_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 1536);
    lstm_6_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 1536);
    
    lstm_6_output0_array.data = AI_PTR(g_network_activations_map[0] + 4096);
    lstm_6_output0_array.data_start = AI_PTR(g_network_activations_map[0] + 4096);
    
    lstm_7_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 6144);
    lstm_7_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 6144);
    
    lstm_7_output0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    lstm_7_output0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    time_distributed_1_output_array.data = AI_PTR(g_network_activations_map[0] + 4096);
    time_distributed_1_output_array.data_start = AI_PTR(g_network_activations_map[0] + 4096);
    
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_ACTIVATIONS);
  return false;
}



/******************************************************************************/
AI_DECLARE_STATIC
ai_bool network_configure_weights(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_weights_map(g_network_weights_map, 1, params)) {
    /* Updating weights (byte) offsets */
    
    lstm_7_bias_array.format |= AI_FMT_FLAG_CONST;
    lstm_7_bias_array.data = AI_PTR(g_network_weights_map[0] + 0);
    lstm_7_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 0);
    
    dense_1_weights_array.format |= AI_FMT_FLAG_CONST;
    dense_1_weights_array.data = AI_PTR(g_network_weights_map[0] + 512);
    dense_1_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 512);
    
    dense_1_bias_array.format |= AI_FMT_FLAG_CONST;
    dense_1_bias_array.data = AI_PTR(g_network_weights_map[0] + 896);
    dense_1_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 896);
    
    lstm_4_kernel_array.format |= AI_FMT_FLAG_CONST;
    lstm_4_kernel_array.data = AI_PTR(g_network_weights_map[0] + 908);
    lstm_4_kernel_array.data_start = AI_PTR(g_network_weights_map[0] + 908);
    
    lstm_4_recurrent_array.format |= AI_FMT_FLAG_CONST;
    lstm_4_recurrent_array.data = AI_PTR(g_network_weights_map[0] + 2444);
    lstm_4_recurrent_array.data_start = AI_PTR(g_network_weights_map[0] + 2444);
    
    lstm_4_peephole_array.format |= AI_FMT_FLAG_CONST;
    lstm_4_peephole_array.data = AI_PTR(g_network_weights_map[0] + 18828);
    lstm_4_peephole_array.data_start = AI_PTR(g_network_weights_map[0] + 18828);
    
    lstm_4_bias_array.format |= AI_FMT_FLAG_CONST;
    lstm_4_bias_array.data = AI_PTR(g_network_weights_map[0] + 19212);
    lstm_4_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 19212);
    
    lstm_5_kernel_array.format |= AI_FMT_FLAG_CONST;
    lstm_5_kernel_array.data = AI_PTR(g_network_weights_map[0] + 19724);
    lstm_5_kernel_array.data_start = AI_PTR(g_network_weights_map[0] + 19724);
    
    lstm_5_recurrent_array.format |= AI_FMT_FLAG_CONST;
    lstm_5_recurrent_array.data = AI_PTR(g_network_weights_map[0] + 27916);
    lstm_5_recurrent_array.data_start = AI_PTR(g_network_weights_map[0] + 27916);
    
    lstm_5_peephole_array.format |= AI_FMT_FLAG_CONST;
    lstm_5_peephole_array.data = AI_PTR(g_network_weights_map[0] + 32012);
    lstm_5_peephole_array.data_start = AI_PTR(g_network_weights_map[0] + 32012);
    
    lstm_5_bias_array.format |= AI_FMT_FLAG_CONST;
    lstm_5_bias_array.data = AI_PTR(g_network_weights_map[0] + 32204);
    lstm_5_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 32204);
    
    lstm_6_kernel_array.format |= AI_FMT_FLAG_CONST;
    lstm_6_kernel_array.data = AI_PTR(g_network_weights_map[0] + 32460);
    lstm_6_kernel_array.data_start = AI_PTR(g_network_weights_map[0] + 32460);
    
    lstm_6_recurrent_array.format |= AI_FMT_FLAG_CONST;
    lstm_6_recurrent_array.data = AI_PTR(g_network_weights_map[0] + 36556);
    lstm_6_recurrent_array.data_start = AI_PTR(g_network_weights_map[0] + 36556);
    
    lstm_6_bias_array.format |= AI_FMT_FLAG_CONST;
    lstm_6_bias_array.data = AI_PTR(g_network_weights_map[0] + 40652);
    lstm_6_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 40652);
    
    lstm_7_kernel_array.format |= AI_FMT_FLAG_CONST;
    lstm_7_kernel_array.data = AI_PTR(g_network_weights_map[0] + 40908);
    lstm_7_kernel_array.data_start = AI_PTR(g_network_weights_map[0] + 40908);
    
    lstm_7_recurrent_array.format |= AI_FMT_FLAG_CONST;
    lstm_7_recurrent_array.data = AI_PTR(g_network_weights_map[0] + 49100);
    lstm_7_recurrent_array.data_start = AI_PTR(g_network_weights_map[0] + 49100);
    
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_WEIGHTS);
  return false;
}


/**  PUBLIC APIs SECTION  *****************************************************/


AI_DEPRECATED
AI_API_ENTRY
ai_bool ai_network_get_info(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_NETWORK_MODEL_NAME,
      .model_signature   = AI_NETWORK_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 522336,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .params            = AI_STRUCT_INIT,
      .activations       = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}


AI_API_ENTRY
ai_bool ai_network_get_report(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_NETWORK_MODEL_NAME,
      .model_signature   = AI_NETWORK_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 522336,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .map_signature     = AI_MAGIC_SIGNATURE,
      .map_weights       = AI_STRUCT_INIT,
      .map_activations   = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}

AI_API_ENTRY
ai_error ai_network_get_error(ai_handle network)
{
  return ai_platform_network_get_error(network);
}

AI_API_ENTRY
ai_error ai_network_create(
  ai_handle* network, const ai_buffer* network_config)
{
  return ai_platform_network_create(
    network, network_config, 
    &AI_NET_OBJ_INSTANCE,
    AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR, AI_TOOLS_API_VERSION_MICRO);
}

AI_API_ENTRY
ai_error ai_network_create_and_init(
  ai_handle* network, const ai_handle activations[], const ai_handle weights[])
{
    ai_error err;
    ai_network_params params;

    err = ai_network_create(network, AI_NETWORK_DATA_CONFIG);
    if (err.type != AI_ERROR_NONE)
        return err;
    if (ai_network_data_params_get(&params) != true) {
        err = ai_network_get_error(*network);
        return err;
    }
#if defined(AI_NETWORK_DATA_ACTIVATIONS_COUNT)
    if (activations) {
        /* set the addresses of the activations buffers */
        for (int idx=0;idx<params.map_activations.size;idx++)
            AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_activations, idx, activations[idx]);
    }
#endif
#if defined(AI_NETWORK_DATA_WEIGHTS_COUNT)
    if (weights) {
        /* set the addresses of the weight buffers */
        for (int idx=0;idx<params.map_weights.size;idx++)
            AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_weights, idx, weights[idx]);
    }
#endif
    if (ai_network_init(*network, &params) != true) {
        err = ai_network_get_error(*network);
    }
    return err;
}

AI_API_ENTRY
ai_buffer* ai_network_inputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    ((ai_network *)network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_inputs_get(network, n_buffer);
}

AI_API_ENTRY
ai_buffer* ai_network_outputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    ((ai_network *)network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_outputs_get(network, n_buffer);
}

AI_API_ENTRY
ai_handle ai_network_destroy(ai_handle network)
{
  return ai_platform_network_destroy(network);
}

AI_API_ENTRY
ai_bool ai_network_init(
  ai_handle network, const ai_network_params* params)
{
  ai_network* net_ctx = ai_platform_network_init(network, params);
  if (!net_ctx) return false;

  ai_bool ok = true;
  ok &= network_configure_weights(net_ctx, params);
  ok &= network_configure_activations(net_ctx, params);

  ok &= ai_platform_network_post_init(network);

  return ok;
}


AI_API_ENTRY
ai_i32 ai_network_run(
  ai_handle network, const ai_buffer* input, ai_buffer* output)
{
  return ai_platform_network_process(network, input, output);
}

AI_API_ENTRY
ai_i32 ai_network_forward(ai_handle network, const ai_buffer* input)
{
  return ai_platform_network_process(network, input, NULL);
}



#undef AI_NETWORK_MODEL_SIGNATURE
#undef AI_NET_OBJ_INSTANCE
#undef AI_TOOLS_DATE_TIME
#undef AI_TOOLS_COMPILE_TIME

