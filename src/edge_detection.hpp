/**
 * @file    edge_detection.hpp
 * @brief   sobel edge detection on grayscale images (could be any filter tbh)
 *
 * @author  mila
 * @date    2025-08-05
 * @version 0.1
 *
 * @details
 * - just the usual sobel filter 
 *
 * @license MIT
 */
#pragma once
#include <cstddef>
namespace simd {

/**
 * @brief   Applies Sobel operator to detect edges (SIMD-enabled).
 *
 * @param   input    pointer to input image (row-major)
 * @param   output   pointer to output image (row-major)
 * @param   width    image width in pixels
 * @param   height   image height in pixels
 */
void sobel_edge_detect_optimised(const float* input, float* output,
                                 std::size_t width, std::size_t height);

/**
 * @brief   Applies Sobel operator to detect edges (naive).
 *
 * @param   input    pointer to input image (row-major)
 * @param   output   pointer to output image (row-major)
 * @param   width    image width in pixels
 * @param   height   image height in pixels
 */
void sobel_edge_detect_unoptimised(const float* input, float* output,
                                   std::size_t width, std::size_t height);

} // namespace simd
