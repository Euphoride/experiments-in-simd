/**
 * @brief   horizontal reductions: sum, max, min, argmax :)
 *
 * @author  mila
 * @date    2025-08-05
 * @version 0.1
 *
 * @details
 *  - these are the tail end of other possibly simd-accelerated operations
 *    so interesting to look at too
 *
 * @license MIT
 */
#pragma once
#include <cstddef>
namespace simd {

/* These do what they say on the tin so I'll forgo the excessive docstrings */

/**
 * @brief   Finds the sum of an array of floats (SIMD-enabled).
 */
float horizontal_sum_optimised(const float* data, std::size_t length);

/**
 * @brief   Finds the sum of an array of floats (naive).
 */
float horizontal_sum_unoptimised(const float* data, std::size_t length);

/**
 * @brief   Finds the maximum value in a float array (SIMD-enabled).
 */
float horizontal_max_optimised(const float* data, std::size_t length);

/**
 * @brief   Finds the maximum value in a float array (naive).
 */
float horizontal_max_unoptimised(const float* data, std::size_t length);

/**
 * @brief   Finds the minimum value in a float array (SIMD-enabled).
 */
float horizontal_min_optimised(const float* data, std::size_t length);

/**
 * @brief   Finds the minimum value in a float array (naive).
 */
float horizontal_min_unoptimised(const float* data, std::size_t length);

/**
 * @brief   Finds the index of the maximum value (SIMD-enabled).
 */
std::size_t horizontal_argmax_optimised(const float* data, std::size_t length);

/**
 * @brief   Finds the index of the maximum value (naive).
 */
std::size_t horizontal_argmax_unoptimised(const float* data, std::size_t length);

} // namespace simd
