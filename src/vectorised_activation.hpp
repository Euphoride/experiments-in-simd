/**
 * @brief   SIMD-enabled activation functions... at this point we're building an inference stack.
 *
 * @author  mila
 * @date    2025-08-05
 * @version 0.1
 *
 * @details
 * all operations are vectorised. UB-induced self-reflection, however, is not.
 *
 * @license MIT
 */
#pragma once
#include <cstddef>
namespace simd {

/**
 * @brief   Applies ReLU activation in-place (SIMD-enabled).
 */
void relu_activation_optimised(float* data, std::size_t length);

/**
 * @brief   Applies ReLU activation in-place (naive).
 */
void relu_activation_unoptimised(float* data, std::size_t length);

/**
 * @brief   Applies sigmoid activation in-place (SIMD-enabled).
 */
void sigmoid_activation_optimised(float* data, std::size_t length);

/**
 * @brief   Applies sigmoid activation in-place (naive).
 */
void sigmoid_activation_unoptimised(float* data, std::size_t length);

/**
 * @brief   Applies tanh activation in-place (SIMD-enabled).
 */
void tanh_activation_optimised(float* data, std::size_t length);

/**
 * @brief   Applies tanh activation in-place (naive).
 */
void tanh_activation_unoptimised(float* data, std::size_t length);

} // namespace simd
