/**
 * @brief   2z2, 3x3 and 4x4 matrix multiplication using NEON :)
 *
 * @author  mila
 * @date    2025-08-05
 * @version 0.1
 *
 * @details
 *  - so this is actually interesting because it partly ties into other research work i'm
 *    meant to do around reverse engineering minimal candidate programs to see if we can
 *    actually prove a tight bound on instructions for a 3x3 matmul.
 *  - for now though, we use established algorithms and leave the type theoretic research
 *    later lol
 *
 * @license MIT
 */

#pragma once

namespace simd {

/* TODO: Write better docstrings */

/**
 * @brief   Multiply two 4x4 matrices A and B, write to C (SIMD-enabled).
 */
void matmul4x4_optimised(const float* A, const float* B, float* C);

/**
 * @brief   Multiply two 4x4 matrices A and B, write to C (naive).
 */
void matmul4x4_unoptimised(const float* A, const float* B, float* C);

/**
 * @brief   Multiply two 4x4 matrices A and B, write to C (SIMD-enabled).
 */
void matmul3x3_optimised(const float* A, const float* B, float* C);

/**
 * @brief   Multiply two 4x4 matrices A and B, write to C (naive).
 */
void matmul3x3_unoptimised(const float* A, const float* B, float* C);

/**
 * @brief   Multiply two 4x4 matrices A and B, write to C (SIMD-enabled).
 */
void matmul2x2_optimised(const float* A, const float* B, float* C);

/**
 * @brief   Multiply two 4x4 matrices A and B, write to C (naive).
 */
void matmul2x2_unoptimised(const float* A, const float* B, float* C);

}  // namespace simd
