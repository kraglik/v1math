#include <immintrin.h>

#include "v1math/vector.h"

// Addition

void v2iadd_vv_vectorized(const t_vec2i *a, const t_vec2i *b, t_vec2i *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 2) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i b256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i out256 = _mm256_add_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }

    for (; i < n; i++) {
        __m128i a128 = _mm_load_si128((__m128i*)(a + i));
        __m128i b128 = _mm_load_si128((__m128i*)(a + i));
        __m128i out128 = _mm_add_epi32(a128, b128);
        _mm_store_si128((__m128i*)out + i, out128);
    }
}

void v3iadd_vv_vectorized(const t_vec3i *a, const t_vec3i *b, t_vec3i *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i b256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i out256 = _mm256_add_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }
}

void v4iadd_vv_vectorized(const t_vec4i *a, const t_vec4i *b, t_vec4i *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i b256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i out256 = _mm256_add_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }
}

// Subtraction

void v2isub_vv_vectorized(const t_vec2i *a, const t_vec2i *b, t_vec2i *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 2) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i b256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i out256 = _mm256_sub_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }

    for (; i < n; i++) {
        __m128i a128 = _mm_load_si128((__m128i*)(a + i));
        __m128i b128 = _mm_load_si128((__m128i*)(a + i));
        __m128i out128 = _mm_sub_epi32(a128, b128);
        _mm_store_si128((__m128i*)out + i, out128);
    }
}

void v3isub_vv_vectorized(const t_vec3i *a, const t_vec3i *b, t_vec3i *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i b256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i out256 = _mm256_sub_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }
}

void v4isub_vv_vectorized(const t_vec4i *a, const t_vec4i *b, t_vec4i *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i b256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i out256 = _mm256_sub_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }
}

// Multiplication

void v2imul_vv_vectorized(const t_vec2i *a, const t_vec2i *b, t_vec2i *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 2) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i b256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i out256 = _mm256_mul_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }

    for (; i < n; i++) {
        __m128i a128 = _mm_load_si128((__m128i*)(a + i));
        __m128i b128 = _mm_load_si128((__m128i*)(a + i));
        __m128i out128 = _mm_mul_epi32(a128, b128);
        _mm_store_si128((__m128i*)out + i, out128);
    }
}

void v3imul_vv_vectorized(const t_vec3i *a, const t_vec3i *b, t_vec3i *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i b256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i out256 = _mm256_mul_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }
}

void v4imul_vv_vectorized(const t_vec4i *a, const t_vec4i *b, t_vec4i *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i b256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i out256 = _mm256_mul_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }
}

void v2iadd_va_vectorized(const t_vec2i *a, const int *b, t_vec2i *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 2) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i b256 = _mm256_set_epi32(b[i], b[i], b[i + 1], b[i + 1], b[i + 2], b[i + 2], b[i + 3], b[i + 3]);
        __m256i out256 = _mm256_add_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }

    for (; i < n; i++) {
        __m128i a128 = _mm_load_si128((__m128i*)(a + i));
        __m128i b128 = _mm_set1_epi32(b[i]);
        __m128i out128 = _mm_add_epi32(a128, b128);
        _mm_store_si128((__m128i*)out + i, out128);
    }
}

void v3iadd_va_vectorized(const t_vec3i *a, const int *b, t_vec3i *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i b256 = _mm256_set_epi32(b[i], b[i], b[i], b[i], b[i + 1], b[i + 1], b[i + 1], b[i + 1]);
        __m256i out256 = _mm256_add_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }
}

void v4iadd_va_vectorized(const t_vec4i *a, const int *b, t_vec4i *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i b256 = _mm256_set_epi32(b[i], b[i], b[i], b[i], b[i + 1], b[i + 1], b[i + 1], b[i + 1]);
        __m256i out256 = _mm256_add_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }
}

void v2isub_va_vectorized(const t_vec2i *a, const int *b, t_vec2i *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 2) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i b256 = _mm256_set_epi32(b[i], b[i], b[i + 1], b[i + 1], b[i + 2], b[i + 2], b[i + 3], b[i + 3]);
        __m256i out256 = _mm256_sub_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }

    for (; i < n; i++) {
        __m128i a128 = _mm_load_si128((__m128i*)(a + i));
        __m128i b128 = _mm_set1_epi32(b[i]);
        __m128i out128 = _mm_sub_epi32(a128, b128);
        _mm_store_si128((__m128i*)out + i, out128);
    }
}

void v3isub_va_vectorized(const t_vec3i *a, const int *b, t_vec3i *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i b256 = _mm256_set_epi32(b[i], b[i], b[i], b[i], b[i + 1], b[i + 1], b[i + 1], b[i + 1]);
        __m256i out256 = _mm256_sub_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }
}

void v4isub_va_vectorized(const t_vec4i *a, const int *b, t_vec4i *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i b256 = _mm256_set_epi32(b[i], b[i], b[i], b[i], b[i + 1], b[i + 1], b[i + 1], b[i + 1]);
        __m256i out256 = _mm256_sub_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }
}

void v2imul_va_vectorized(const t_vec2i *a, const int *b, t_vec2i *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 2) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i b256 = _mm256_set_epi32(b[i], b[i], b[i + 1], b[i + 1], b[i + 2], b[i + 2], b[i + 3], b[i + 3]);
        __m256i out256 = _mm256_mul_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }

    for (; i < n; i++) {
        __m128i a128 = _mm_load_si128((__m128i*)(a + i));
        __m128i b128 = _mm_set1_epi32(b[i]);
        __m128i out128 = _mm_mul_epi32(a128, b128);
        _mm_store_si128((__m128i*)out + i, out128);
    }
}

void v3imul_va_vectorized(const t_vec3i *a, const int *b, t_vec3i *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i b256 = _mm256_set_epi32(b[i], b[i], b[i], b[i], b[i + 1], b[i + 1], b[i + 1], b[i + 1]);
        __m256i out256 = _mm256_mul_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }
}

void v4imul_va_vectorized(const t_vec4i *a, const int *b, t_vec4i *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i b256 = _mm256_set_epi32(b[i], b[i], b[i], b[i], b[i + 1], b[i + 1], b[i + 1], b[i + 1]);
        __m256i out256 = _mm256_mul_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }
}

void v2iadd_vs_vectorized(const t_vec2i *a, int b, t_vec2i *out, size_t n) {
    size_t i;

    __m256i b256 = _mm256_set1_epi32(b);
    __m128i b128 = _mm_set1_epi32(b);

    for (i = 0; i < n; i += 2) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i out256 = _mm256_add_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }

    for (; i < n; i++) {
        __m128i a128 = _mm_load_si128((__m128i*)(a + i));
        __m128i out128 = _mm_add_epi32(a128, b128);
        _mm_store_si128((__m128i*)out + i, out128);
    }
}

void v3iadd_vs_vectorized(const t_vec3i *a, int b, t_vec3i *out, size_t n) {
    size_t i;

    __m256i b256 = _mm256_set1_epi32(b);

    for (i = 0; i < n; i++) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i out256 = _mm256_add_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }
}

void v4iadd_vs_vectorized(const t_vec4i *a, int b, t_vec4i *out, size_t n) {
    size_t i;

    __m256i b256 = _mm256_set1_epi32(b);

    for (i = 0; i < n; i++) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i out256 = _mm256_add_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }
}

void v2isub_vs_vectorized(const t_vec2i *a, int b, t_vec2i *out, size_t n) {
    size_t i;

    __m256i b256 = _mm256_set1_epi32(b);
    __m128i b128 = _mm_set1_epi32(b);

    for (i = 0; i < n; i += 2) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i out256 = _mm256_sub_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }

    for (; i < n; i++) {
        __m128i a128 = _mm_load_si128((__m128i*)(a + i));
        __m128i out128 = _mm_sub_epi32(a128, b128);
        _mm_store_si128((__m128i*)out + i, out128);
    }
}

void v3isub_vs_vectorized(const t_vec3i *a, int b, t_vec3i *out, size_t n) {
    size_t i;

    __m256i b256 = _mm256_set1_epi32(b);

    for (i = 0; i < n; i++) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i out256 = _mm256_sub_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }
}

void v4isub_vs_vectorized(const t_vec4i *a, int b, t_vec4i *out, size_t n) {
    size_t i;

    __m256i b256 = _mm256_set1_epi32(b);

    for (i = 0; i < n; i++) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i out256 = _mm256_sub_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }
}

void v2imul_vs_vectorized(const t_vec2i *a, int b, t_vec2i *out, size_t n) {
    size_t i;

    __m256i b256 = _mm256_set1_epi32(b);
    __m128i b128 = _mm_set1_epi32(b);

    for (i = 0; i < n; i += 2) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i out256 = _mm256_mul_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }

    for (; i < n; i++) {
        __m128i a128 = _mm_load_si128((__m128i*)(a + i));
        __m128i out128 = _mm_mul_epi32(a128, b128);
        _mm_store_si128((__m128i*)out + i, out128);
    }
}

void v3imul_vs_vectorized(const t_vec3i *a, int b, t_vec3i *out, size_t n) {
    size_t i;

    __m256i b256 = _mm256_set1_epi32(b);

    for (i = 0; i < n; i++) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i out256 = _mm256_mul_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }
}

void v4imul_vs_vectorized(const t_vec4i *a, int b, t_vec4i *out, size_t n) {
    size_t i;

    __m256i b256 = _mm256_set1_epi32(b);

    for (i = 0; i < n; i++) {
        __m256i a256 = _mm256_load_si256((__m256i*)(a + i));
        __m256i out256 = _mm256_mul_epi32(a256, b256);
        _mm256_store_si256((__m256i*)out + i, out256);
    }
}
