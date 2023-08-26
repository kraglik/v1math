#ifndef V1MATH_VECTOR_H
#define V1MATH_VECTOR_H

#include <stdlib.h>

// Vector structures

// Floating point vectors

typedef struct vector2f {
    float x, y;
} t_vec2f;

typedef struct vector4f {
    float x, y, z, w;
} t_vec4f;

typedef struct __attribute__((aligned(sizeof(t_vec4f)))) vector3f {
    float x, y, z;
} t_vec3f;

// Integer vectors

typedef struct vector2i {
    int x, y;
} t_vec2i;

typedef struct vector4i {
    int x, y, z, w;
} t_vec4i;

typedef struct __attribute__((aligned(sizeof(t_vec4i)))) vector3i {
    int x, y, z;
} t_vec3i;

// Functions

// Constructors

t_vec2f vec2f(float x, float y);
t_vec3f vec3f(float x, float y, float z);
t_vec4f vec4f(float x, float y, float z, float w);

t_vec2i vec2i(int x, int y);
t_vec3i vec3i(int x, int y, int z);
t_vec4i vec4i(int x, int y, int z, int w);

t_vec2f vec2f_from_vec2i(const t_vec2i* a);
t_vec3f vec3f_from_vec3i(const t_vec3i* a);
t_vec4f vec4f_from_vec4i(const t_vec4i* a);

t_vec2i vec2i_from_vec2f(const t_vec2f* a);
t_vec3i vec3i_from_vec3f(const t_vec3f* a);
t_vec4i vec4i_from_vec4f(const t_vec4f* a);

t_vec2f vec2f_from_scalar(float a);
t_vec3f vec3f_from_scalar(float a);
t_vec4f vec4f_from_scalar(float a);

t_vec2i vec2i_from_scalar(int a);
t_vec3i vec3i_from_scalar(int a);
t_vec4i vec4i_from_scalar(int a);

// Advanced functions

// Vector dot product

float v2f_dot(const t_vec2f* a, const t_vec2f* b);
float v3f_dot(const t_vec3f* a, const t_vec3f* b);
float v4f_dot(const t_vec4f* a, const t_vec4f* b);

int v2i_dot(const t_vec2i* a, const t_vec2i* b);
int v3i_dot(const t_vec3i* a, const t_vec3i* b);
int v4i_dot(const t_vec4i* a, const t_vec4i* b);

// Vectorized vector dot product

void v2f_dot_vectorized(const t_vec2f* a, const t_vec2f* b, float* out, size_t n);
void v3f_dot_vectorized(const t_vec3f* a, const t_vec3f* b, float* out, size_t n);
void v4f_dot_vectorized(const t_vec4f* a, const t_vec4f* b, float* out, size_t n);

void v2i_dot_vectorized(const t_vec2i* a, const t_vec2i* b, int* out, size_t n);
void v3i_dot_vectorized(const t_vec3i* a, const t_vec3i* b, int* out, size_t n);
void v4i_dot_vectorized(const t_vec4i* a, const t_vec4i* b, int* out, size_t n);

// Vector cross product

t_vec3f v3f_cross(const t_vec3f* a, const t_vec3f* b);

// Vectorized vector cross product

void v3f_cross_vectorized(const t_vec3f* a, const t_vec3f* b, t_vec3f* out);

// Vector length

float v2f_length(const t_vec2f* a);
float v3f_length(const t_vec3f* a);
float v4f_length(const t_vec4f* a);

float v2i_length(const t_vec2i* a);
float v3i_length(const t_vec3i* a);
float v4i_length(const t_vec4i* a);

// Vectorized vector length

void v2f_length_vectorized(const t_vec2f* a, float* out, size_t n);
void v3f_length_vectorized(const t_vec3f* a, float* out, size_t n);
void v4f_length_vectorized(const t_vec4f* a, float* out, size_t n);

void v2i_length_vectorized(const t_vec2i* a, float* out, size_t n);
void v3i_length_vectorized(const t_vec3i* a, float* out, size_t n);
void v4i_length_vectorized(const t_vec4i* a, float* out, size_t n);

// Basic functions

// Vector addition

void v2fadd_vv_vectorized(const t_vec2f* a, const t_vec2f* b, t_vec2f * out, size_t n);
void v3fadd_vv_vectorized(const t_vec3f* a, const t_vec3f* b, t_vec3f * out, size_t n);
void v4fadd_vv_vectorized(const t_vec4f* a, const t_vec4f* b, t_vec4f * out, size_t n);

void v2iadd_vv_vectorized(const t_vec2i* a, const t_vec2i* b, t_vec2i * out, size_t n);
void v3iadd_vv_vectorized(const t_vec3i* a, const t_vec3i* b, t_vec3i * out, size_t n);
void v4iadd_vv_vectorized(const t_vec4i* a, const t_vec4i* b, t_vec4i * out, size_t n);

void v2iadd_va_vectorized(const t_vec2i* a, const int* b, t_vec2i * out, size_t n);
void v3iadd_va_vectorized(const t_vec3i* a, const int* b, t_vec3i * out, size_t n);
void v4iadd_va_vectorized(const t_vec4i* a, const int* b, t_vec4i * out, size_t n);

void v2fadd_va_vectorized(const t_vec2f* a, const float* b, t_vec2f * out, size_t n);
void v3fadd_va_vectorized(const t_vec3f* a, const float* b, t_vec3f * out, size_t n);
void v4fadd_va_vectorized(const t_vec4f* a, const float* b, t_vec4f * out, size_t n);

void v2fadd_vs_vectorized(const t_vec2f* a, float b, t_vec2f * out, size_t n);
void v3fadd_vs_vectorized(const t_vec3f* a, float b, t_vec3f * out, size_t n);
void v4fadd_vs_vectorized(const t_vec4f* a, float b, t_vec4f * out, size_t n);

void v2iadd_vs_vectorized(const t_vec2i* a, int b, t_vec2i * out, size_t n);
void v3iadd_vs_vectorized(const t_vec3i* a, int b, t_vec3i * out, size_t n);
void v4iadd_vs_vectorized(const t_vec4i* a, int b, t_vec4i * out, size_t n);

// Vector subtraction

void v2fsub_vv_vectorized(const t_vec2f* a, const t_vec2f* b, t_vec2f * out, size_t n);
void v3fsub_vv_vectorized(const t_vec3f* a, const t_vec3f* b, t_vec3f * out, size_t n);
void v4fsub_vv_vectorized(const t_vec4f* a, const t_vec4f* b, t_vec4f * out, size_t n);

void v2isub_vv_vectorized(const t_vec2i* a, const t_vec2i* b, t_vec2i * out, size_t n);
void v3isub_vv_vectorized(const t_vec3i* a, const t_vec3i* b, t_vec3i * out, size_t n);
void v4isub_vv_vectorized(const t_vec4i* a, const t_vec4i* b, t_vec4i * out, size_t n);

void v2fsub_va_vectorized(const t_vec2f* a, const float* b, t_vec2f * out, size_t n);
void v3fsub_va_vectorized(const t_vec3f* a, const float* b, t_vec3f * out, size_t n);
void v4fsub_va_vectorized(const t_vec4f* a, const float* b, t_vec4f * out, size_t n);

void v2isub_va_vectorized(const t_vec2i* a, const int* b, t_vec2i * out, size_t n);
void v3isub_va_vectorized(const t_vec3i* a, const int* b, t_vec3i * out, size_t n);
void v4isub_va_vectorized(const t_vec4i* a, const int* b, t_vec4i * out, size_t n);

void v2fsub_vs_vectorized(const t_vec2f* a, float b, t_vec2f * out, size_t n);
void v3fsub_vs_vectorized(const t_vec3f* a, float b, t_vec3f * out, size_t n);
void v4fsub_vs_vectorized(const t_vec4f* a, float b, t_vec4f * out, size_t n);

void v2isub_vs_vectorized(const t_vec2i* a, int b, t_vec2i * out, size_t n);
void v3isub_vs_vectorized(const t_vec3i* a, int b, t_vec3i * out, size_t n);
void v4isub_vs_vectorized(const t_vec4i* a, int b, t_vec4i * out, size_t n);

// Vector multiplication

void v2fmul_vv_vectorized(const t_vec2f* a, const t_vec2f* b, t_vec2f * out, size_t n);
void v3fmul_vv_vectorized(const t_vec3f* a, const t_vec3f* b, t_vec3f * out, size_t n);
void v4fmul_vv_vectorized(const t_vec4f* a, const t_vec4f* b, t_vec4f * out, size_t n);

void v2imul_vv_vectorized(const t_vec2i* a, const t_vec2i* b, t_vec2i * out, size_t n);
void v3imul_vv_vectorized(const t_vec3i* a, const t_vec3i* b, t_vec3i * out, size_t n);
void v4imul_vv_vectorized(const t_vec4i* a, const t_vec4i* b, t_vec4i * out, size_t n);

void v2fmul_va_vectorized(const t_vec2f* a, const float* b, t_vec2f * out, size_t n);
void v3fmul_va_vectorized(const t_vec3f* a, const float* b, t_vec3f * out, size_t n);
void v4fmul_va_vectorized(const t_vec4f* a, const float* b, t_vec4f * out, size_t n);

void v2imul_va_vectorized(const t_vec2i* a, const int* b, t_vec2i * out, size_t n);
void v3imul_va_vectorized(const t_vec3i* a, const int* b, t_vec3i * out, size_t n);
void v4imul_va_vectorized(const t_vec4i* a, const int* b, t_vec4i * out, size_t n);

void v2fmul_vs_vectorized(const t_vec2f* a, float b, t_vec2f * out, size_t n);
void v3fmul_vs_vectorized(const t_vec3f* a, float b, t_vec3f * out, size_t n);
void v4fmul_vs_vectorized(const t_vec4f* a, float b, t_vec4f * out, size_t n);

void v2imul_vs_vectorized(const t_vec2i* a, int b, t_vec2i * out, size_t n);
void v3imul_vs_vectorized(const t_vec3i* a, int b, t_vec3i * out, size_t n);
void v4imul_vs_vectorized(const t_vec4i* a, int b, t_vec4i * out, size_t n);

// Vector division

void v2fdiv_vv_vectorized(const t_vec2f* a, const t_vec2f* b, t_vec2f * out, size_t n);
void v3fdiv_vv_vectorized(const t_vec3f* a, const t_vec3f* b, t_vec3f * out, size_t n);
void v4fdiv_vv_vectorized(const t_vec4f* a, const t_vec4f* b, t_vec4f * out, size_t n);

void v2fdiv_va_vectorized(const t_vec2f* a, const float* b, t_vec2f * out, size_t n);
void v3fdiv_va_vectorized(const t_vec3f* a, const float* b, t_vec3f * out, size_t n);
void v4fdiv_va_vectorized(const t_vec4f* a, const float* b, t_vec4f * out, size_t n);

void v2fdiv_vs_vectorized(const t_vec2f* a, float b, t_vec2f * out, size_t n);
void v3fdiv_vs_vectorized(const t_vec3f* a, float b, t_vec3f * out, size_t n);
void v4fdiv_vs_vectorized(const t_vec4f* a, float b, t_vec4f * out, size_t n);

#endif