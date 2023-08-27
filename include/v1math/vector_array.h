#ifndef V1MATH_VECTOR_ARRAY_H
#define V1MATH_VECTOR_ARRAY_H

#include <stdlib.h>

// Vector structures

// Floating point vectors

typedef struct __attribute__((aligned(16))) vector2f_array {
    float* x;
    float* y;
    size_t size;
} t_vec2f_array;

typedef struct __attribute__((aligned(16))) vector3f_array {
    float* x;
    float* y;
    float* z;
    size_t size;
} t_vec3f_array;

typedef struct __attribute__((aligned(16))) vector4f_array {
    float* x;
    float* y;
    float* z;
    float* w;
    size_t size;
} t_vec4f_array;

// Integer vectors

typedef struct __attribute__((aligned(16))) vector2i_array {
    int* x;
    int* y;
    size_t size;
} t_vec2i_array;

typedef struct __attribute__((aligned(16))) vector3i_array {
    int* x;
    int* y;
    int* z;
    size_t size;
} t_vec3i_array;

typedef struct __attribute__((aligned(16))) vector4i_array {
    int* x;
    int* y;
    int* z;
    int* w;
    size_t size;
} t_vec4i_array;

// Functions

// Constructors

t_vec2f_array vec2f_array(size_t size, float x, float y);
t_vec3f_array vec3f_array(size_t size, float x, float y, float z);
t_vec4f_array vec4f_array(size_t size, float x, float y, float z, float w);

t_vec2i_array vec2i_array(size_t size, int x, int y);
t_vec3i_array vec3i_array(size_t size, int x, int y, int z);
t_vec4i_array vec4i_array(size_t size, int x, int y, int z, int w);

t_vec2f_array vec2f_array_from_vec2i_array(const t_vec2i_array* a);
t_vec3f_array vec3f_array_from_vec3i_array(const t_vec3i_array* a);
t_vec4f_array vec4f_array_from_vec4i_array(const t_vec4i_array* a);

t_vec2i_array vec2i_array_from_vec2f_array(const t_vec2f_array* a);
t_vec3i_array vec3i_array_from_vec3f_array(const t_vec3f_array* a);
t_vec4i_array vec4i_array_from_vec4f_array(const t_vec4f_array* a);

t_vec2f_array vec2f_array_from_arrays(size_t size, float* x, float* y);
t_vec3f_array vec3f_array_from_arrays(size_t size, float* x, float* y, float* z);
t_vec4f_array vec4f_array_from_arrays(size_t size, float* x, float* y, float* z, float* w);

t_vec2i_array vec2i_array_from_arrays(size_t size, int* x, int* y);
t_vec3i_array vec3i_array_from_arrays(size_t size, int* x, int* y, int* z);
t_vec4i_array vec4i_array_from_arrays(size_t size, int* x, int* y, int* z, int* w);

// Advanced functions

// Vector dot product

float v2f_array_dot(const t_vec2f_array* a, const t_vec2f_array* b);
float v3f_array_dot(const t_vec3f_array* a, const t_vec3f_array* b);
float v4f_array_dot(const t_vec4f_array* a, const t_vec4f_array* b);

int v2i_array_dot(const t_vec2i_array* a, const t_vec2i_array* b);
int v3i_array_dot(const t_vec3i_array* a, const t_vec3i_array* b);
int v4i_array_dot(const t_vec4i_array* a, const t_vec4i_array* b);

// Vector cross product

t_vec3f_array v3f_array_cross(const t_vec3f_array* a, const t_vec3f_array* b);

// Vector length

float v2f_array_length(const t_vec2f_array* a);
float v3f_array_length(const t_vec3f_array* a);
float v4f_array_length(const t_vec4f_array* a);

float v2i_array_length(const t_vec2i_array* a);
float v3i_array_length(const t_vec3i_array* a);
float v4i_array_length(const t_vec4i_array* a);

// Simple functions

// Addition

void v2f_array_add_vv(const t_vec2f_array* a, const t_vec2f_array* b, t_vec2f_array* out);
void v3f_array_add_vv(const t_vec3f_array* a, const t_vec3f_array* b, t_vec3f_array* out);
void v4f_array_add_vv(const t_vec4f_array* a, const t_vec4f_array* b, t_vec4f_array* out);

void v2i_array_add_vv(const t_vec2i_array* a, const t_vec2i_array* b, t_vec2i_array* out);
void v3i_array_add_vv(const t_vec3i_array* a, const t_vec3i_array* b, t_vec3i_array* out);
void v4i_array_add_vv(const t_vec4i_array* a, const t_vec4i_array* b, t_vec4i_array* out);

void v2i_array_add_va(const t_vec2i_array* a, int b, t_vec2i_array* out);
void v3i_array_add_va(const t_vec3i_array* a, int b, t_vec3i_array* out);
void v4i_array_add_va(const t_vec4i_array* a, int b, t_vec4i_array* out);

void v2f_array_add_va(const t_vec2f_array* a, float b, t_vec2f_array* out);
void v3f_array_add_va(const t_vec3f_array* a, float b, t_vec3f_array* out);
void v4f_array_add_va(const t_vec4f_array* a, float b, t_vec4f_array* out);

void v2f_array_add_vs(const t_vec2f_array* a, float b, t_vec2f_array* out);
void v3f_array_add_vs(const t_vec3f_array* a, float b, t_vec3f_array* out);
void v4f_array_add_vs(const t_vec4f_array* a, float b, t_vec4f_array* out);

void v2i_array_add_vs(const t_vec2i_array* a, int b, t_vec2i_array* out);
void v3i_array_add_vs(const t_vec3i_array* a, int b, t_vec3i_array* out);
void v4i_array_add_vs(const t_vec4i_array* a, int b, t_vec4i_array* out);

// Subtraction

void v2f_array_sub_vv(const t_vec2f_array* a, const t_vec2f_array* b, t_vec2f_array* out);
void v3f_array_sub_vv(const t_vec3f_array* a, const t_vec3f_array* b, t_vec3f_array* out);
void v4f_array_sub_vv(const t_vec4f_array* a, const t_vec4f_array* b, t_vec4f_array* out);

void v2i_array_sub_vv(const t_vec2i_array* a, const t_vec2i_array* b, t_vec2i_array* out);
void v3i_array_sub_vv(const t_vec3i_array* a, const t_vec3i_array* b, t_vec3i_array* out);
void v4i_array_sub_vv(const t_vec4i_array* a, const t_vec4i_array* b, t_vec4i_array* out);

void v2i_array_sub_va(const t_vec2i_array* a, int b, t_vec2i_array* out);
void v3i_array_sub_va(const t_vec3i_array* a, int b, t_vec3i_array* out);
void v4i_array_sub_va(const t_vec4i_array* a, int b, t_vec4i_array* out);

void v2f_array_sub_va(const t_vec2f_array* a, float b, t_vec2f_array* out);
void v3f_array_sub_va(const t_vec3f_array* a, float b, t_vec3f_array* out);
void v4f_array_sub_va(const t_vec4f_array* a, float b, t_vec4f_array* out);

void v2f_array_sub_vs(const t_vec2f_array* a, float b, t_vec2f_array* out);
void v3f_array_sub_vs(const t_vec3f_array* a, float b, t_vec3f_array* out);
void v4f_array_sub_vs(const t_vec4f_array* a, float b, t_vec4f_array* out);

void v2i_array_sub_vs(const t_vec2i_array* a, int b, t_vec2i_array* out);
void v3i_array_sub_vs(const t_vec3i_array* a, int b, t_vec3i_array* out);
void v4i_array_sub_vs(const t_vec4i_array* a, int b, t_vec4i_array* out);

// Multiplication

void v2f_array_mul_vv(const t_vec2f_array* a, const t_vec2f_array* b, t_vec2f_array* out);
void v3f_array_mul_vv(const t_vec3f_array* a, const t_vec3f_array* b, t_vec3f_array* out);
void v4f_array_mul_vv(const t_vec4f_array* a, const t_vec4f_array* b, t_vec4f_array* out);

void v2i_array_mul_vv(const t_vec2i_array* a, const t_vec2i_array* b, t_vec2i_array* out);
void v3i_array_mul_vv(const t_vec3i_array* a, const t_vec3i_array* b, t_vec3i_array* out);
void v4i_array_mul_vv(const t_vec4i_array* a, const t_vec4i_array* b, t_vec4i_array* out);

void v2i_array_mul_va(const t_vec2i_array* a, int b, t_vec2i_array* out);
void v3i_array_mul_va(const t_vec3i_array* a, int b, t_vec3i_array* out);
void v4i_array_mul_va(const t_vec4i_array* a, int b, t_vec4i_array* out);

void v2f_array_mul_va(const t_vec2f_array* a, float b, t_vec2f_array* out);
void v3f_array_mul_va(const t_vec3f_array* a, float b, t_vec3f_array* out);
void v4f_array_mul_va(const t_vec4f_array* a, float b, t_vec4f_array* out);

void v2f_array_mul_vs(const t_vec2f_array* a, float b, t_vec2f_array* out);
void v3f_array_mul_vs(const t_vec3f_array* a, float b, t_vec3f_array* out);
void v4f_array_mul_vs(const t_vec4f_array* a, float b, t_vec4f_array* out);

void v2i_array_mul_vs(const t_vec2i_array* a, int b, t_vec2i_array* out);
void v3i_array_mul_vs(const t_vec3i_array* a, int b, t_vec3i_array* out);
void v4i_array_mul_vs(const t_vec4i_array* a, int b, t_vec4i_array* out);

// Division

void v2f_array_div_vv(const t_vec2f_array* a, const t_vec2f_array* b, t_vec2f_array* out);
void v3f_array_div_vv(const t_vec3f_array* a, const t_vec3f_array* b, t_vec3f_array* out);
void v4f_array_div_vv(const t_vec4f_array* a, const t_vec4f_array* b, t_vec4f_array* out);

void v2f_array_div_va(const t_vec2f_array* a, float b, t_vec2f_array* out);
void v3f_array_div_va(const t_vec3f_array* a, float b, t_vec3f_array* out);
void v4f_array_div_va(const t_vec4f_array* a, float b, t_vec4f_array* out);

void v2f_array_div_vs(const t_vec2f_array* a, float b, t_vec2f_array* out);
void v3f_array_div_vs(const t_vec3f_array* a, float b, t_vec3f_array* out);
void v4f_array_div_vs(const t_vec4f_array* a, float b, t_vec4f_array* out);


#endif