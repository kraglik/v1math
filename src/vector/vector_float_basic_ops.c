#include <immintrin.h>

#include "v1math/vector.h"

void v2fadd_vv_vectorized(const t_vec2f *a, const t_vec2f *b, t_vec2f *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 2) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_load_ps((float *)b + i * 4);
        __m256 out256 = _mm256_add_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }

    for (; i < n; i++) {
        __m128 a128 = _mm_load_ps((float *)a + i * 2);
        __m128 b128 = _mm_load_ps((float *)b + i * 2);
        __m128 out128 = _mm_add_ps(a128, b128);
        _mm_store_ps((float *)out + i * 2, out128);
    }
}

void v3fadd_vv_vectorized(const t_vec3f *a, const t_vec3f *b, t_vec3f *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_load_ps((float *)b + i * 4);
        __m256 out256 = _mm256_add_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

void v4fadd_vv_vectorized(const t_vec4f *a, const t_vec4f *b, t_vec4f *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_load_ps((float *)b + i * 4);
        __m256 out256 = _mm256_add_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}


// Subtraction

void v2fsub_vv_vectorized(const t_vec2f *a, const t_vec2f *b, t_vec2f *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 2) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_load_ps((float *)b + i * 4);
        __m256 out256 = _mm256_sub_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }

    for (; i < n; i++) {
        __m128 a128 = _mm_load_ps((float *)a + i * 2);
        __m128 b128 = _mm_load_ps((float *)b + i * 2);
        __m128 out128 = _mm_sub_ps(a128, b128);
        _mm_store_ps((float *)out + i * 2, out128);
    }
}

void v3fsub_vv_vectorized(const t_vec3f *a, const t_vec3f *b, t_vec3f *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_load_ps((float *)b + i * 4);
        __m256 out256 = _mm256_sub_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

void v4fsub_vv_vectorized(const t_vec4f *a, const t_vec4f *b, t_vec4f *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_load_ps((float *)b + i * 4);
        __m256 out256 = _mm256_sub_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

// Multiplication

void v2fmul_vv_vectorized(const t_vec2f *a, const t_vec2f *b, t_vec2f *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 2) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_load_ps((float *)b + i * 4);
        __m256 out256 = _mm256_mul_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }

    for (; i < n; i++) {
        __m128 a128 = _mm_load_ps((float *)a + i * 2);
        __m128 b128 = _mm_load_ps((float *)b + i * 2);
        __m128 out128 = _mm_mul_ps(a128, b128);
        _mm_store_ps((float *)out + i * 2, out128);
    }
}

void v3fmul_vv_vectorized(const t_vec3f *a, const t_vec3f *b, t_vec3f *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_load_ps((float *)b + i * 4);
        __m256 out256 = _mm256_mul_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

void v4fmul_vv_vectorized(const t_vec4f *a, const t_vec4f *b, t_vec4f *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_load_ps((float *)b + i * 4);
        __m256 out256 = _mm256_mul_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

// Division

void v2fdiv_vv_vectorized(const t_vec2f *a, const t_vec2f *b, t_vec2f *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 2) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_load_ps((float *)b + i * 4);
        __m256 out256 = _mm256_div_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }

    for (; i < n; i++) {
        __m128 a128 = _mm_load_ps((float *)a + i * 2);
        __m128 b128 = _mm_load_ps((float *)b + i * 2);
        __m128 out128 = _mm_div_ps(a128, b128);
        _mm_store_ps((float *)out + i * 2, out128);
    }
}

void v3fdiv_vv_vectorized(const t_vec3f *a, const t_vec3f *b, t_vec3f *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_load_ps((float *)b + i * 4);
        __m256 out256 = _mm256_div_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

void v4fdiv_vv_vectorized(const t_vec4f *a, const t_vec4f *b, t_vec4f *out, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_load_ps((float *)b + i * 4);
        __m256 out256 = _mm256_div_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

void v2fadd_va_vectorized(const t_vec2f* a, const float* b, t_vec2f * out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 4) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_set_ps(b[i], b[i], b[i + 1], b[i + 1], b[i + 2], b[i + 2], b[i + 3], b[i + 3]);
        __m256 out256 = _mm256_add_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }

    for (; i < n; i++) {
        __m128 a128 = _mm_load_ps((float *)a + i * 2);
        __m128 b128 = _mm_set_ps(b[i], b[i], b[i + 1], b[i + 1]);
        __m128 out128 = _mm_add_ps(a128, b128);
        _mm_store_ps((float *)out + i * 2, out128);
    }
}

void v3fadd_va_vectorized(const t_vec3f* a, const float* b, t_vec3f * out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 4) {

        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_set_ps(b[i], b[i], b[i], b[i], b[i + 1], b[i + 1], b[i + 1], b[i + 1]);
        __m256 out256 = _mm256_add_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

void v4fadd_va_vectorized(const t_vec4f* a, const float* b, t_vec4f * out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 4) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_set_ps(b[i], b[i], b[i], b[i], b[i + 1], b[i + 1], b[i + 1], b[i + 1]);
        __m256 out256 = _mm256_add_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

void v2fadd_vs_vectorized(const t_vec2f* a, float b, t_vec2f * out, size_t n) {
    size_t i;

    __m256 b256 = _mm256_set1_ps(b);
    __m128 b128 = _mm_set1_ps(b);

    for (i = 0; i < n; i += 4) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 out256 = _mm256_add_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }

    for (; i < n; i++) {
        __m128 a128 = _mm_load_ps((float *)a + i * 2);
        __m128 out128 = _mm_add_ps(a128, b128);
        _mm_store_ps((float *)out + i * 2, out128);
    }
}

void v3fadd_vs_vectorized(const t_vec3f* a, float b, t_vec3f * out, size_t n) {
    size_t i;

    __m256 b256 = _mm256_set1_ps(b);

    for (i = 0; i < n; i += 4) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 out256 = _mm256_add_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

void v4fadd_vs_vectorized(const t_vec4f* a, float b, t_vec4f * out, size_t n) {
    size_t i;

    __m256 b256 = _mm256_set1_ps(b);

    for (i = 0; i < n; i += 4) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 out256 = _mm256_add_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

// Subtraction

void v2fsub_va_vectorized(const t_vec2f* a, const float* b, t_vec2f * out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 4) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_set_ps(b[i], b[i], b[i + 1], b[i + 1], b[i + 2], b[i + 2], b[i + 3], b[i + 3]);
        __m256 out256 = _mm256_sub_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }

    for (; i < n; i++) {
        __m128 a128 = _mm_load_ps((float *)a + i * 2);
        __m128 b128 = _mm_set_ps(b[i], b[i], b[i + 1], b[i + 1]);
        __m128 out128 = _mm_sub_ps(a128, b128);
        _mm_store_ps((float *)out + i * 2, out128);
    }
}

void v3fsub_va_vectorized(const t_vec3f* a, const float* b, t_vec3f * out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 4) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_set_ps(b[i], b[i], b[i], b[i], b[i + 1], b[i + 1], b[i + 1], b[i + 1]);
        __m256 out256 = _mm256_sub_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

void v4fsub_va_vectorized(const t_vec4f* a, const float* b, t_vec4f * out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 4) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_set_ps(b[i], b[i], b[i], b[i], b[i + 1], b[i + 1], b[i + 1], b[i + 1]);
        __m256 out256 = _mm256_sub_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

void v2fsub_vs_vectorized(const t_vec2f* a, float b, t_vec2f * out, size_t n) {
    size_t i;

    __m256 b256 = _mm256_set1_ps(b);
    __m128 b128 = _mm_set1_ps(b);

    for (i = 0; i < n; i += 4) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 out256 = _mm256_sub_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }

    for (; i < n; i++) {
        __m128 a128 = _mm_load_ps((float *)a + i * 2);
        __m128 out128 = _mm_sub_ps(a128, b128);
        _mm_store_ps((float *)out + i * 2, out128);
    }
}

void v3fsub_vs_vectorized(const t_vec3f* a, float b, t_vec3f * out, size_t n) {
    size_t i;

    __m256 b256 = _mm256_set1_ps(b);

    for (i = 0; i < n; i += 4) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 out256 = _mm256_sub_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

void v4fsub_vs_vectorized(const t_vec4f* a, float b, t_vec4f * out, size_t n) {
    size_t i;

    __m256 b256 = _mm256_set1_ps(b);

    for (i = 0; i < n; i += 4) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 out256 = _mm256_sub_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

// Multiplication

void v2fmul_va_vectorized(const t_vec2f* a, const float* b, t_vec2f * out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 4) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_set_ps(b[i], b[i], b[i + 1], b[i + 1], b[i + 2], b[i + 2], b[i + 3], b[i + 3]);
        __m256 out256 = _mm256_mul_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }

    for (; i < n; i++) {
        __m128 a128 = _mm_load_ps((float *)a + i * 2);
        __m128 b128 = _mm_set_ps(b[i], b[i], b[i + 1], b[i + 1]);
        __m128 out128 = _mm_mul_ps(a128, b128);
        _mm_store_ps((float *)out + i * 2, out128);
    }
}

void v3fmul_va_vectorized(const t_vec3f* a, const float* b, t_vec3f * out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 4) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_set_ps(b[i], b[i], b[i], b[i], b[i + 1], b[i + 1], b[i + 1], b[i + 1]);
        __m256 out256 = _mm256_mul_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

void v4fmul_va_vectorized(const t_vec4f* a, const float* b, t_vec4f * out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 4) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_set_ps(b[i], b[i], b[i], b[i], b[i + 1], b[i + 1], b[i + 1], b[i + 1]);
        __m256 out256 = _mm256_mul_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

void v2fmul_vs_vectorized(const t_vec2f* a, float b, t_vec2f * out, size_t n) {
    size_t i;

    __m256 b256 = _mm256_set1_ps(b);
    __m128 b128 = _mm_set1_ps(b);

    for (i = 0; i < n; i += 4) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 out256 = _mm256_mul_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }

    for (; i < n; i++) {
        __m128 a128 = _mm_load_ps((float *)a + i * 2);
        __m128 out128 = _mm_mul_ps(a128, b128);
        _mm_store_ps((float *)out + i * 2, out128);
    }
}

void v3fmul_vs_vectorized(const t_vec3f* a, float b, t_vec3f * out, size_t n) {
    size_t i;

    __m256 b256 = _mm256_set1_ps(b);

    for (i = 0; i < n; i += 4) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 out256 = _mm256_mul_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

void v4fmul_vs_vectorized(const t_vec4f* a, float b, t_vec4f * out, size_t n) {
    size_t i;

    __m256 b256 = _mm256_set1_ps(b);

    for (i = 0; i < n; i += 4) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 out256 = _mm256_mul_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

// Division

void v2fdiv_va_vectorized(const t_vec2f* a, const float* b, t_vec2f * out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 4) {
        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_set_ps(b[i], b[i], b[i + 1], b[i + 1], b[i + 2], b[i + 2], b[i + 3], b[i + 3]);
        __m256 out256 = _mm256_div_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }

    for (; i < n; i++) {
        __m128 a128 = _mm_load_ps((float *)a + i * 2);
        __m128 b128 = _mm_set_ps(b[i], b[i], b[i + 1], b[i + 1]);
        __m128 out128 = _mm_div_ps(a128, b128);
        _mm_store_ps((float *)out + i * 2, out128);
    }
}

void v3fdiv_va_vectorized(const t_vec3f* a, const float* b, t_vec3f * out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 4) {

        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_set_ps(b[i], b[i], b[i], b[i], b[i + 1], b[i + 1], b[i + 1], b[i + 1]);
        __m256 out256 = _mm256_div_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

void v4fdiv_va_vectorized(const t_vec4f* a, const float* b, t_vec4f * out, size_t n) {
    size_t i;

    for (i = 0; i < n; i += 4) {

        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 b256 = _mm256_set_ps(b[i], b[i], b[i], b[i], b[i + 1], b[i + 1], b[i + 1], b[i + 1]);
        __m256 out256 = _mm256_div_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

void v2fdiv_vs_vectorized(const t_vec2f* a, float b, t_vec2f * out, size_t n) {
    size_t i;

    __m256 b256 = _mm256_set1_ps(b);
    __m128 b128 = _mm_set1_ps(b);

    for (i = 0; i < n; i += 4) {

        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 out256 = _mm256_div_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }

    for (; i < n; i++) {

        __m128 a128 = _mm_load_ps((float *)a + i * 2);
        __m128 out128 = _mm_div_ps(a128, b128);
        _mm_store_ps((float *)out + i * 2, out128);
    }
}

void v3fdiv_vs_vectorized(const t_vec3f* a, float b, t_vec3f * out, size_t n) {
    size_t i;

    __m256 b256 = _mm256_set1_ps(b);

    for (i = 0; i < n; i += 4) {

        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 out256 = _mm256_div_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}

void v4fdiv_vs_vectorized(const t_vec4f* a, float b, t_vec4f * out, size_t n) {
    size_t i;

    __m256 b256 = _mm256_set1_ps(b);

    for (i = 0; i < n; i += 4) {

        __m256 a256 = _mm256_load_ps((float *)a + i * 4);
        __m256 out256 = _mm256_div_ps(a256, b256);
        _mm256_store_ps((float *)out + i * 4, out256);
    }
}
