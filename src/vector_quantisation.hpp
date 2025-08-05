/**
 * @brief   Quantisation for those rainy GPU-poor days you need fast inference on that one ML model
 *
 * @author  mila
 * @date    2025-08-05
 * @version 0.1
 *
 * @details
 *  - floats go in, tiny integers come out. it's like magic, but with more segfaults.
 *
 * @license MIT
 */
#pragma once
#include <cstddef>
#include <cstdint>
namespace simd {

/**
 * @brief   Quantizes floats to int8 with scale and zero-point (SIMD-enabled).
 */
void vector_quantise_optimised(const float* input, int8_t* output,
                               std::size_t length, float scale, int8_t zero_point);

/**
 * @brief   Quantizes floats to int8 with scale and zero-point (naive).
 */
void vector_quantise_unoptimised(const float* input, int8_t* output,
                                 std::size_t length, float scale, int8_t zero_point);

/**
 * @brief   Dequantizes int8 back to floats (SIMD-enabled).
 */
void vector_dequantise_optimised(const int8_t* input, float* output,
                                 std::size_t length, float scale, int8_t zero_point);

/**
 * @brief   Dequantizes int8 back to floats (naive).
 */
void vector_dequantise_unoptimised(const int8_t* input, float* output,
                                   std::size_t length, float scale, int8_t zero_point);

} // namespace simd
