/**
 * @brief   inclusive prefix sum (scanl basically) for float arrays
 *
 * @author  mila
 * @date    2025-08-05
 * @version 0.1
 *
 * @details
 * - see this one is tricky because it's typically a linearised ordeal, right?
 * - addition is associative though!
 *
 * @license MIT
 */
#pragma once
#include <cstddef>
namespace simd {

/**
 * @brief   Computes inclusive prefix sum (SIMD-enabled).
 */
void prefix_sum_optimised(const float* input, float* output, std::size_t length);

/**
 * @brief   Computes inclusive prefix sum (naive).
 */
void prefix_sum_unoptimised(const float* input, float* output, std::size_t length);

} // namespace simd
