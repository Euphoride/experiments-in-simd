/**
 * @brief   Get the cosine similarity between two vectors
 *
 * @author  mila
 * @date    2025-08-05
 * @version 0.1
 *
 * @details
 *  - computes dot(x,y) / (||x|| * ||y||) as usual :)
 *
 * @license MIT
 */
#pragma once
#include <cstddef>
namespace simd {

/**
 * @brief   Calculates cosine similarity of two float vectors (SIMD-enabled).
 *
 * @param   x        pointer to first vector
 * @param   y        pointer to second vector
 * @param   length   number of elements
 * @return  float    cosine similarity in [-1,1]
 */
float cosine_similarity_optimised(const float* x, const float* y, std::size_t length);

/**
 * @brief   Calculates cosine similarity of two float vectors (naive).
 *
 * @param   x        pointer to first vector
 * @param   y        pointer to second vector
 * @param   length   number of elements
 * @return  float    cosine similarity in [-1,1]
 */
float cosine_similarity_unoptimised(const float* x, const float* y, std::size_t length);

} // namespace simd
