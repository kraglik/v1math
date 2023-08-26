#include <immintrin.h>

#include "v1math/scalar.h"

// Addition

void fadd_aa_vectorized(const float* a, const float* b, float* out, size_t n) {
    int i;
    __m256 a_vec, b_vec, out_vec;

    for (i = 0; i < n; i += 8) {
        a_vec = _mm256_loadu_ps(a + i);
        b_vec = _mm256_loadu_ps(b + i);

        out_vec = _mm256_add_ps(a_vec, b_vec);

        _mm256_storeu_ps(out + i, out_vec);
    }

    for (; i < n; i++) {
        out[i] = a[i] + b[i];
    }
}

void fadd_as_vectorized(const float* a, float b, float* out, size_t n) {
    int i;
    __m256 a_vec, b_vec, out_vec;

    b_vec = _mm256_set1_ps(b);

    for (i = 0; i < n; i += 8) {
        a_vec = _mm256_loadu_ps(a + i);

        out_vec = _mm256_add_ps(a_vec, b_vec);

        _mm256_storeu_ps(out + i, out_vec);
    }

    for (; i < n; i++) {
        out[i] = a[i] + b;
    }
}

// Subtraction

void fsub_aa_vectorized(const float* a, const float* b, float* out, size_t n) {
    int i;
    __m256 a_vec, b_vec, out_vec;

    for (i = 0; i < n; i += 8) {
        a_vec = _mm256_loadu_ps(a + i);
        b_vec = _mm256_loadu_ps(b + i);

        out_vec = _mm256_sub_ps(a_vec, b_vec);

        _mm256_storeu_ps(out + i, out_vec);
    }

    for (; i < n; i++) {
        out[i] = a[i] - b[i];
    }
}

void fsub_as_vectorized(const float* a, float b, float* out, size_t n) {
    int i;
    __m256 a_vec, b_vec, out_vec;

    b_vec = _mm256_set1_ps(b);

    for (i = 0; i < n; i += 8) {
        a_vec = _mm256_loadu_ps(a + i);

        out_vec = _mm256_sub_ps(a_vec, b_vec);

        _mm256_storeu_ps(out + i, out_vec);
    }

    for (; i < n; i++) {
        out[i] = a[i] - b;
    }
}

// Multiplication

void fmul_aa_vectorized(const float* a, const float* b, float* out, size_t n) {
    int i;
    __m256 a_vec, b_vec, out_vec;

    for (i = 0; i < n; i += 8) {
        a_vec = _mm256_loadu_ps(a + i);
        b_vec = _mm256_loadu_ps(b + i);

        out_vec = _mm256_mul_ps(a_vec, b_vec);

        _mm256_storeu_ps(out + i, out_vec);
    }

    for (; i < n; i++) {
        out[i] = a[i] * b[i];
    }
}

void fmul_as_vectorized(const float* a, float b, float* out, size_t n) {
    int i;
    __m256 a_vec, b_vec, out_vec;

    b_vec = _mm256_set1_ps(b);

    for (i = 0; i < n; i += 8) {
        a_vec = _mm256_loadu_ps(a + i);

        out_vec = _mm256_mul_ps(a_vec, b_vec);

        _mm256_storeu_ps(out + i, out_vec);
    }

    for (; i < n; i++) {
        out[i] = a[i] * b;
    }
}

// Division

void fdiv_aa_vectorized(const float* a, const float* b, float* out, size_t n) {
    int i;
    __m256 a_vec, b_vec, out_vec;

    for (i = 0; i < n; i += 8) {
        a_vec = _mm256_loadu_ps(a + i);
        b_vec = _mm256_loadu_ps(b + i);

        out_vec = _mm256_div_ps(a_vec, b_vec);

        _mm256_storeu_ps(out + i, out_vec);
    }

    for (; i < n; i++) {
        out[i] = a[i] / b[i];
    }
}

void fdiv_as_vectorized(const float* a, float b, float* out, size_t n) {
    int i;
    __m256 a_vec, b_vec, out_vec;

    b_vec = _mm256_set1_ps(b);

    for (i = 0; i < n; i += 8) {
        a_vec = _mm256_loadu_ps(a + i);

        out_vec = _mm256_div_ps(a_vec, b_vec);

        _mm256_storeu_ps(out + i, out_vec);
    }

    for (; i < n; i++) {
        out[i] = a[i] / b;
    }
}

void fdiv_sa_vectorized(float a, const float* b, float* out, size_t n) {
    int i;
    __m256 a_vec, b_vec, out_vec;

    a_vec = _mm256_set1_ps(a);

    for (i = 0; i < n; i += 8) {
        b_vec = _mm256_loadu_ps(b + i);

        out_vec = _mm256_div_ps(a_vec, b_vec);

        _mm256_storeu_ps(out + i, out_vec);
    }

    for (; i < n; i++) {
        out[i] = a / b[i];
    }
}
