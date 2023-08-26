#include <immintrin.h>

#include "v1math/scalar.h"

// Addition

void iadd_aa_vectorized(const int* a, const int* b, int* out, size_t n) {
    int i;
    __m256i a_vec, b_vec, out_vec;

    for (i = 0; i < n; i += 8) {
        a_vec = _mm256_loadu_si256((__m256i*)(a + i));
        b_vec = _mm256_loadu_si256((__m256i*)(b + i));

        out_vec = _mm256_add_epi32(a_vec, b_vec);

        _mm256_storeu_si256((__m256i*)(out + i), out_vec);
    }

    for (; i < n; i++) {
        out[i] = a[i] + b[i];
    }
}

void iadd_as_vectorized(const int* a, int b, int* out, size_t n) {
    int i;
    __m256i a_vec, b_vec, out_vec;

    b_vec = _mm256_set1_epi32(b);

    for (i = 0; i < n; i += 8) {
        a_vec = _mm256_loadu_si256((__m256i*)(a + i));

        out_vec = _mm256_add_epi32(a_vec, b_vec);

        _mm256_storeu_si256((__m256i*)(out + i), out_vec);
    }

    for (; i < n; i++) {
        out[i] = a[i] + b;
    }
}

// Subtraction

void isub_aa_vectorized(const int* a, const int* b, int* out, size_t n) {
    int i;
    __m256i a_vec, b_vec, out_vec;

    for (i = 0; i < n; i += 8) {
        a_vec = _mm256_loadu_si256((__m256i*)(a + i));
        b_vec = _mm256_loadu_si256((__m256i*)(b + i));

        out_vec = _mm256_sub_epi32(a_vec, b_vec);

        _mm256_storeu_si256((__m256i*)(out + i), out_vec);
    }

    for (; i < n; i++) {
        out[i] = a[i] - b[i];
    }
}

void isub_as_vectorized(const int* a, int b, int* out, size_t n) {
    int i;
    __m256i a_vec, b_vec, out_vec;

    b_vec = _mm256_set1_epi32(b);

    for (i = 0; i < n; i += 8) {
        a_vec = _mm256_loadu_si256((__m256i*)(a + i));

        out_vec = _mm256_sub_epi32(a_vec, b_vec);

        _mm256_storeu_si256((__m256i*)(out + i), out_vec);
    }

    for (; i < n; i++) {
        out[i] = a[i] - b;
    }
}

// Multiplication

void imul_aa_vectorized(const int* a, const int* b, int* out, size_t n) {
    int i;
    __m256i a_vec, b_vec, out_vec;

    for (i = 0; i < n; i += 8) {
        a_vec = _mm256_loadu_si256((__m256i*)(a + i));
        b_vec = _mm256_loadu_si256((__m256i*)(b + i));

        out_vec = _mm256_mullo_epi32(a_vec, b_vec);

        _mm256_storeu_si256((__m256i*)(out + i), out_vec);
    }

    for (; i < n; i++) {
        out[i] = a[i] * b[i];
    }
}

void imul_as_vectorized(const int* a, int b, int* out, size_t n) {
    int i;
    __m256i a_vec, b_vec, out_vec;

    b_vec = _mm256_set1_epi32(b);

    for (i = 0; i < n; i += 8) {
        a_vec = _mm256_loadu_si256((__m256i*)(a + i));

        out_vec = _mm256_mullo_epi32(a_vec, b_vec);

        _mm256_storeu_si256((__m256i*)(out + i), out_vec);
    }

    for (; i < n; i++) {
        out[i] = a[i] * b;
    }
}
