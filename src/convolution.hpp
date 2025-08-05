/**
 * @brief   3x3 convolution kernel for single-channel images
 *
 * @author  mila
 * @date    2025-08-05
 * @version 0.1
 *
 * @details
 * - applies a 3x3 filter over a 2D float image using NEON intrinsics.
 * - padding or boundary handling assumed - just focusing on the core computation here.
 *
 * @notice
 * - data pointers must be 16-byte aligned for neon as usual :)
 *
 * @license MIT
 */
#pragma once
#include <cstddef>
namespace simd {

/**
 * @brief   Performs a 3x3 convolution on a single-channel image (SIMD-enabled).
 *
 * @param   input    pointer to input image data (row-major)
 * @param   output   pointer to output image data (row-major)
 * @param   width    image width in pixels
 * @param   height   image height in pixels
 * @param   kernel   pointer to 3x3 filter coefficients
 *
 * @details
 * Uses NEON to load and multiply filter windows.
 */
void convolve3x3_optimised(const float* input, float* output, std::size_t width, std::size_t height,
                           const float* kernel);

/**
 * @brief   Performs a 3x3 convolution on a single-channel image (naive).
 *
 * @param   input    pointer to input image data (row-major)
 * @param   output   pointer to output image data (row-major)
 * @param   width    image width in pixels
 * @param   height   image height in pixels
 * @param   kernel   pointer to 3x3 filter coefficients
 *
 * @details
 * Standard scalar implementation.
 */
void convolve3x3_unoptimised(const float* input, float* output, std::size_t width,
                             std::size_t height, const float* kernel);

}  // namespace simd
