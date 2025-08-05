# Hello! :)

this repo is a personal sandbox for playing with low-level performance in c++, mainly around SIMD, memory layout, and optimization strategies.

### what's all this then?

- experimenting with cache behavior & alignment
- refreshing core C++ SIMD and optimisation best practices
- using `rapidcheck` to explore property-based testing, i might potentially look at formal verification via klee/frama

### why?

mainly just a personal thing.

- benchmark different M3 SIMD strategies across compilers
- eventually port this to Rust (anybody surprised?) for comparisons in ergonomics + performance

### structure

```
├── src/             # core implementations
├── test/            # property-based tests (via rapidcheck)
└── bench/           # microbenchmarks
```

### data?

coming soon...


### running

```bash
# clone with submodules
git clone --recurse-submodules https://github.com/euphoride/simd_experiments
cd simd_experiments

# make sure bazel is installed (8+)
bazel build //tests:tests
./bazel-bin/tests/tests
```
