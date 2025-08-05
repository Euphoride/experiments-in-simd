#include "linear_inference.hpp"

namespace simd {

float logistic_inference_aligned_16_optimised(const float* data, const float* weights,
                                              std::size_t length, float bias) {
  // ! Stub for now
  return 0.0f;
}

float logistic_inference_unaligned_unoptimised(const float* data, const float* weights,
                                               std::size_t length, float bias) {
  // ! Stub for now
  return 0.0f;
}

}  // namespace simd
