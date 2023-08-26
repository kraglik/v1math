#ifndef V1MATH_MATRIX_H
#define V1MATH_MATRIX_H

#include <stdlib.h>
#include "vector.h"

// Matrix structures

typedef struct matrix2f_column_major {
    float col_1[2];
    float col_2[2];
} t_mat2f_cm;

typedef struct matrix2f_row_major {
    float row_1[2];
    float row_2[2];
} t_mat2f_rm;

typedef struct matrix3f_column_major {
    float col_1[4];
    float col_2[4];
    float col_3[4];
} t_mat3f_cm;

typedef struct matrix3f_row_major {
    float row_1[4];
    float row_2[4];
    float row_3[4];
} t_mat3f_rm;

typedef struct matrix4f_column_major {
    float col_1[4];
    float col_2[4];
    float col_3[4];
    float col_4[4];
} t_mat4f_cm;

typedef struct matrix4f_row_major {
    float row_1[4];
    float row_2[4];
    float row_3[4];
    float row_4[4];
} t_mat4f_rm;

typedef struct matrix3x2f_column_major {
    float col_1[4];
    float col_2[4];
} t_mat3x2f_cm;

typedef struct matrix3x2f_row_major {
    float row_1[2];
    float row_2[2];
    float row_3[2];
} t_mat3x2f_rm;

typedef struct matrix3x4f_column_major {
    float col_1[4];
    float col_2[4];
    float col_3[4];
    float col_4[4];
} t_mat3x4f_cm;

typedef struct matrix3x4f_row_major {
    float row_1[4];
    float row_2[4];
    float row_3[4];
} t_mat3x4f_rm;

typedef struct matrix4x2f_column_major {
    float col_1[4];
    float col_2[4];
} t_mat4x2f_cm;

typedef struct matrix4x2f_row_major {
    float row_1[2];
    float row_2[2];
    float row_3[2];
    float row_4[2];
} t_mat4x2f_rm;

typedef struct matrix4x3f_column_major {
    float col_1[4];
    float col_2[4];
    float col_3[4];
} t_mat4x3f_cm;

typedef struct matrix4x3f_row_major {
    float row_1[4];
    float row_2[4];
    float row_3[4];
    float row_4[4];
} t_mat4x3f_rm;

typedef struct matrix2x3f_column_major {
    float col_1[2];
    float col_2[2];
    float col_3[2];
} t_mat2x3f_cm;

typedef struct matrix2x3f_row_major {
    float row_1[4];
    float row_2[4];
} t_mat2x3f_rm;

typedef struct matrix2x4f_column_major {
    float col_1[2];
    float col_2[2];
    float col_3[2];
    float col_4[2];
} t_mat2x4f_cm;

typedef struct matrix2x4f_row_major {
    float row_1[4];
    float row_2[4];
} t_mat2x4f_rm;

// Functions

// Constructors

t_mat2f_cm mat2f_cm(float* column_1, float* column_2);
t_mat2f_rm mat2f_rm(float* row_1, float* row_2);
t_mat2x3f_cm mat2x3f_cm(float* column_1, float* column_2, float* column_3);
t_mat2x3f_rm mat2x3f_rm(float* row_1, float* row_2);
t_mat2x4f_cm mat2x4f_cm(float* column_1, float* column_2, float* column_3, float* column_4);
t_mat2x4f_rm mat2x4f_rm(float* row_1, float* row_2);

t_mat3f_cm mat3f_cm(float* column_1, float* column_2, float* column_3);
t_mat3f_rm mat3f_rm(float* row_1, float* row_2, float* row_3);
t_mat3x2f_cm mat3x2f_cm(float* column_1, float* column_2);
t_mat3x2f_rm mat3x2f_rm(float* row_1, float* row_2, float* row_3);
t_mat3x4f_cm mat3x4f_cm(float* column_1, float* column_2, float* column_3, float* column_4);
t_mat3x4f_rm mat3x4f_rm(float* row_1, float* row_2, float* row_3);

t_mat4f_cm mat4f_cm(float* column_1, float* column_2, float* column_3, float* column_4);
t_mat4f_rm mat4f_rm(float* row_1, float* row_2, float* row_3, float* row_4);
t_mat4x2f_cm mat4x2f_cm(float* column_1, float* column_2);
t_mat4x2f_rm mat4x2f_rm(float* row_1, float* row_2, float* row_3, float* row_4);
t_mat4x3f_cm mat4x3f_cm(float* column_1, float* column_2, float* column_3);
t_mat4x3f_rm mat4x3f_rm(float* row_1, float* row_2, float* row_3, float* row_4);

t_mat2f_cm mat2f_cm_from_scalar(float a);
t_mat3f_cm mat3f_cm_from_scalar(float a);
t_mat4f_cm mat4f_cm_from_scalar(float a);

t_mat2x3f_cm mat2x3f_cm_from_scalar(float a);
t_mat2x3f_rm mat2x3f_rm_from_scalar(float a);
t_mat2x4f_cm mat2x4f_cm_from_scalar(float a);
t_mat2x4f_rm mat2x4f_rm_from_scalar(float a);

t_mat3x2f_cm mat3x2f_cm_from_scalar(float a);
t_mat3x2f_rm mat3x2f_rm_from_scalar(float a);
t_mat3x4f_cm mat3x4f_cm_from_scalar(float a);
t_mat3x4f_rm mat3x4f_rm_from_scalar(float a);

t_mat4x2f_cm mat4x2f_cm_from_scalar(float a);
t_mat4x2f_rm mat4x2f_rm_from_scalar(float a);
t_mat4x3f_cm mat4x3f_cm_from_scalar(float a);
t_mat4x3f_rm mat4x3f_rm_from_scalar(float a);

t_mat2f_rm mat2f_rm_from_scalar(float a);
t_mat3f_rm mat3f_rm_from_scalar(float a);
t_mat4f_rm mat4f_rm_from_scalar(float a);

t_mat2f_rm mat2f_cm_zero(void);
t_mat3f_rm mat3f_cm_zero(void);
t_mat4f_rm mat4f_cm_zero(void);

t_mat2f_cm mat2f_rm_zero(void);
t_mat3f_cm mat3f_rm_zero(void);
t_mat4f_cm mat4f_rm_zero(void);

t_mat2f_cm mat2x3f_cm_diagonal(float x);
t_mat2f_rm mat2x3f_rm_diagonal(float x);
t_mat2f_cm mat2x4f_cm_diagonal(float x);
t_mat2f_rm mat2x4f_rm_diagonal(float x);

t_mat3f_cm mat3x2f_cm_diagonal(float x);
t_mat3f_rm mat3x2f_rm_diagonal(float x);
t_mat3f_cm mat3x4f_cm_diagonal(float x);
t_mat3f_rm mat3x4f_rm_diagonal(float x);

t_mat4f_cm mat4x2f_cm_diagonal(float x);
t_mat4f_rm mat4x2f_rm_diagonal(float x);
t_mat4f_cm mat4x3f_cm_diagonal(float x);
t_mat4f_rm mat4x3f_rm_diagonal(float x);

t_mat2f_cm mat2f_cm_diagonal(float x);
t_mat3f_cm mat3f_cm_diagonal(float x);
t_mat4f_cm mat4f_cm_diagonal(float x);

t_mat2f_rm mat2f_rm_diagonal(float x);
t_mat3f_rm mat3f_rm_diagonal(float x);
t_mat4f_rm mat4f_rm_diagonal(float x);

t_mat2f_cm mat2f_cm_identity(void);
t_mat3f_cm mat3f_cm_identity(void);
t_mat4f_cm mat4f_cm_identity(void);

t_mat2f_rm mat2f_rm_identity(void);
t_mat3f_rm mat3f_rm_identity(void);
t_mat4f_rm mat4f_rm_identity(void);

// Conversion functions

// Column major to row major

void mat2f_cm_to_mat2f_rm(const t_mat2f_cm* a, t_mat2f_rm *out, size_t n);
void mat3f_cm_to_mat3f_rm(const t_mat3f_cm* a, t_mat3f_rm *out, size_t n);
void mat4f_cm_to_mat4f_rm(const t_mat4f_cm* a, t_mat4f_rm *out, size_t n);

void mat2x3f_cm_to_mat2x3f_rm(const t_mat2x3f_cm* a, t_mat2x3f_rm* out, size_t n);
void mat2x4f_cm_to_mat2x4f_rm(const t_mat2x4f_cm* a, t_mat2x4f_rm* out, size_t n);
void mat3x2f_cm_to_mat3x2f_rm(const t_mat3x2f_cm* a, t_mat3x2f_rm* out, size_t n);
void mat3x4f_cm_to_mat3x4f_rm(const t_mat3x4f_cm* a, t_mat3x4f_rm* out, size_t n);
void mat4x2f_cm_to_mat4x2f_rm(const t_mat4x2f_cm* a, t_mat4x2f_rm* out, size_t n);
void mat4x3f_cm_to_mat4x3f_rm(const t_mat4x3f_cm* a, t_mat4x3f_rm* out, size_t n);

// Row major to column major

void mat2f_rm_to_mat2f_cm(const t_mat2f_rm* a, t_mat2f_cm* out, size_t n);
void mat3f_rm_to_mat3f_cm(const t_mat3f_rm* a, t_mat3f_cm* out, size_t n);
void mat4f_rm_to_mat4f_cm(const t_mat4f_rm* a, t_mat4f_cm* out, size_t n);

void mat2x3f_rm_to_mat2x3f_cm(const t_mat2x3f_rm* a, t_mat2x3f_cm* out, size_t n);
void mat2x4f_rm_to_mat2x4f_cm(const t_mat2x4f_rm* a, t_mat2x4f_cm* out, size_t n);
void mat3x2f_rm_to_mat3x2f_cm(const t_mat3x2f_rm* a, t_mat3x2f_cm* out, size_t n);
void mat3x4f_rm_to_mat3x4f_cm(const t_mat3x4f_rm* a, t_mat3x4f_cm* out, size_t n);
void mat4x2f_rm_to_mat4x2f_cm(const t_mat4x2f_rm* a, t_mat4x2f_cm* out, size_t n);
void mat4x3f_rm_to_mat4x3f_cm(const t_mat4x3f_rm* a, t_mat4x3f_cm* out, size_t n);

// Advanced functions

// Matrix multiplication

void mat2f_cm_multiply_mm(const t_mat2f_cm* a, const t_mat2f_cm* b, t_mat2f_cm* out, size_t n);
void mat3f_cm_multiply_mm(const t_mat3f_cm* a, const t_mat3f_cm* b, t_mat3f_cm* out, size_t n);
void mat4f_cm_multiply_mm(const t_mat4f_cm* a, const t_mat4f_cm* b, t_mat4f_cm* out, size_t n);

void mat2f_rm_multiply_mm(const t_mat2f_rm* a, const t_mat2f_rm* b, t_mat2f_rm* out, size_t n);
void mat3f_rm_multiply_mm(const t_mat3f_rm* a, const t_mat3f_rm* b, t_mat3f_rm* out, size_t n);
void mat4f_rm_multiply_mm(const t_mat4f_rm* a, const t_mat4f_rm* b, t_mat4f_rm* out, size_t n);

void mat2x3f_3x2f_cm_multiply_mm(const t_mat2x3f_cm* a, const t_mat3x2f_cm* b, t_mat2f_cm* out, size_t n);
void mat2x3f_3x2f_rm_multiply_mm(const t_mat2x3f_rm* a, const t_mat3x2f_rm* b, t_mat2f_rm* out, size_t n);

void mat2x4f_4x2f_cm_multiply_mm(const t_mat2x4f_cm* a, const t_mat4x2f_cm* b, t_mat2f_cm* out, size_t n);
void mat2x4f_4x2f_rm_multiply_mm(const t_mat2x4f_rm* a, const t_mat4x2f_rm* b, t_mat2f_rm* out, size_t n);

void mat3x2f_2x3f_cm_multiply_mm(const t_mat3x2f_cm* a, const t_mat2x3f_cm* b, t_mat3f_cm* out, size_t n);
void mat3x2f_2x3f_rm_multiply_mm(const t_mat3x2f_rm* a, const t_mat2x3f_rm* b, t_mat3f_rm* out, size_t n);

void mat3x4f_4x3f_cm_multiply_mm(const t_mat3x4f_cm* a, const t_mat4x3f_cm* b, t_mat3f_cm* out, size_t n);
void mat3x4f_4x3f_rm_multiply_mm(const t_mat3x4f_rm* a, const t_mat4x3f_rm* b, t_mat3f_rm* out, size_t n);

void mat4x2f_2x4f_cm_multiply_mm(const t_mat4x2f_cm* a, const t_mat2x4f_cm* b, t_mat4f_cm* out, size_t n);
void mat4x2f_2x4f_rm_multiply_mm(const t_mat4x2f_rm* a, const t_mat2x4f_rm* b, t_mat4f_rm* out, size_t n);

void mat4x3f_3x4f_cm_multiply_mm(const t_mat4x3f_cm* a, const t_mat3x4f_cm* b, t_mat4f_cm* out, size_t n);
void mat4x3f_3x4f_rm_multiply_mm(const t_mat4x3f_rm* a, const t_mat3x4f_rm* b, t_mat4f_rm* out, size_t n);

// Matrix-vector multiplication

void mat2f_cm_multiply_vm(const t_mat2f_cm* a, const t_vec2f* b, t_vec2f* out, size_t n);
void mat3f_cm_multiply_vm(const t_mat3f_cm* a, const t_vec3f* b, t_vec3f* out, size_t n);
void mat4f_cm_multiply_vm(const t_mat4f_cm* a, const t_vec4f* b, t_vec4f* out, size_t n);

void mat2f_rm_multiply_vm(const t_mat2f_rm* a, const t_vec2f* b, t_vec2f* out, size_t n);
void mat3f_rm_multiply_vm(const t_mat3f_rm* a, const t_vec3f* b, t_vec3f* out, size_t n);
void mat4f_rm_multiply_vm(const t_mat4f_rm* a, const t_vec4f* b, t_vec4f* out, size_t n);

void mat2x3f_cm_multiply_vm(const t_mat2x3f_cm* a, const t_vec3f* b, t_vec2f* out, size_t n);
void mat2x4f_cm_multiply_vm(const t_mat2x4f_cm* a, const t_vec4f* b, t_vec2f* out, size_t n);

void mat3x2f_cm_multiply_vm(const t_mat3x2f_cm* a, const t_vec2f* b, t_vec3f* out, size_t n);
void mat3x4f_cm_multiply_vm(const t_mat3x4f_cm* a, const t_vec4f* b, t_vec3f* out, size_t n);

void mat4x2f_cm_multiply_vm(const t_mat4x2f_cm* a, const t_vec2f* b, t_vec4f* out, size_t n);
void mat4x3f_cm_multiply_vm(const t_mat4x3f_cm* a, const t_vec3f* b, t_vec4f* out, size_t n);

void mat2x3f_rm_multiply_vm(const t_mat2x3f_rm* a, const t_vec3f* b, t_vec2f* out, size_t n);
void mat2x4f_rm_multiply_vm(const t_mat2x4f_rm* a, const t_vec4f* b, t_vec2f* out, size_t n);

void mat3x2f_rm_multiply_vm(const t_mat3x2f_rm* a, const t_vec2f* b, t_vec3f* out, size_t n);
void mat3x4f_rm_multiply_vm(const t_mat3x4f_rm* a, const t_vec4f* b, t_vec3f* out, size_t n);

void mat4x2f_rm_multiply_vm(const t_mat4x2f_rm* a, const t_vec2f* b, t_vec4f* out, size_t n);
void mat4x3f_rm_multiply_vm(const t_mat4x3f_rm* a, const t_vec3f* b, t_vec4f* out, size_t n);

// Matrix-scalar multiplication

void mat2f_cm_multiply_sm(const t_mat2f_cm* a, float b, t_mat2f_cm* out, size_t n);
void mat3f_cm_multiply_sm(const t_mat3f_cm* a, float b, t_mat3f_cm* out, size_t n);
void mat4f_cm_multiply_sm(const t_mat4f_cm* a, float b, t_mat4f_cm* out, size_t n);

void mat2f_rm_multiply_sm(const t_mat2f_rm* a, float b, t_mat2f_rm* out, size_t n);
void mat3f_rm_multiply_sm(const t_mat3f_rm* a, float b, t_mat3f_rm* out, size_t n);
void mat4f_rm_multiply_sm(const t_mat4f_rm* a, float b, t_mat4f_rm* out, size_t n);

void mat2x3f_cm_multiply_sm(const t_mat2x3f_cm* a, float b, t_mat2x3f_cm* out, size_t n);
void mat2x4f_cm_multiply_sm(const t_mat2x4f_cm* a, float b, t_mat2x4f_cm* out, size_t n);

void mat3x2f_cm_multiply_sm(const t_mat3x2f_cm* a, float b, t_mat3x2f_cm* out, size_t n);
void mat3x4f_cm_multiply_sm(const t_mat3x4f_cm* a, float b, t_mat3x4f_cm* out, size_t n);

void mat4x2f_cm_multiply_sm(const t_mat4x2f_cm* a, float b, t_mat4x2f_cm* out, size_t n);
void mat4x3f_cm_multiply_sm(const t_mat4x3f_cm* a, float b, t_mat4x3f_cm* out, size_t n);

void mat2x3f_rm_multiply_sm(const t_mat2x3f_rm* a, float b, t_mat2x3f_rm* out, size_t n);
void mat2x4f_rm_multiply_sm(const t_mat2x4f_rm* a, float b, t_mat2x4f_rm* out, size_t n);

void mat3x2f_rm_multiply_sm(const t_mat3x2f_rm* a, float b, t_mat3x2f_rm* out, size_t n);
void mat3x4f_rm_multiply_sm(const t_mat3x4f_rm* a, float b, t_mat3x4f_rm* out, size_t n);

void mat4x2f_rm_multiply_sm(const t_mat4x2f_rm* a, float b, t_mat4x2f_rm* out, size_t n);
void mat4x3f_rm_multiply_sm(const t_mat4x3f_rm* a, float b, t_mat4x3f_rm* out, size_t n);

// Matrix-scalar array multiplication

void mat2f_cm_multiply_am(const t_mat2f_cm* a, const float* b, t_mat2f_cm* out, size_t n);
void mat3f_cm_multiply_am(const t_mat3f_cm* a, const float* b, t_mat3f_cm* out, size_t n);
void mat4f_cm_multiply_am(const t_mat4f_cm* a, const float* b, t_mat4f_cm* out, size_t n);

void mat2f_rm_multiply_am(const t_mat2f_rm* a, float* b, t_mat2f_rm* out, size_t n);
void mat3f_rm_multiply_am(const t_mat3f_rm* a, float* b, t_mat3f_rm* out, size_t n);
void mat4f_rm_multiply_am(const t_mat4f_rm* a, float* b, t_mat4f_rm* out, size_t n);

void mat2x3f_cm_multiply_am(const t_mat2x3f_cm* a, const float* b, t_mat2x3f_cm* out, size_t n);
void mat2x4f_cm_multiply_am(const t_mat2x4f_cm* a, const float* b, t_mat2x4f_cm* out, size_t n);

void mat3x2f_cm_multiply_am(const t_mat3x2f_cm* a, const float* b, t_mat3x2f_cm* out, size_t n);
void mat3x4f_cm_multiply_am(const t_mat3x4f_cm* a, const float* b, t_mat3x4f_cm* out, size_t n);

void mat4x2f_cm_multiply_am(const t_mat4x2f_cm* a, const float* b, t_mat4x2f_cm* out, size_t n);
void mat4x3f_cm_multiply_am(const t_mat4x3f_cm* a, const float* b, t_mat4x3f_cm* out, size_t n);

void mat2x3f_rm_multiply_am(const t_mat2x3f_rm* a, const float* b, t_mat2x3f_rm* out, size_t n);
void mat2x4f_rm_multiply_am(const t_mat2x4f_rm* a, const float* b, t_mat2x4f_rm* out, size_t n);

void mat3x2f_rm_multiply_am(const t_mat3x2f_rm* a, const float* b, t_mat3x2f_rm* out, size_t n);
void mat3x4f_rm_multiply_am(const t_mat3x4f_rm* a, const float* b, t_mat3x4f_rm* out, size_t n);

void mat4x2f_rm_multiply_am(const t_mat4x2f_rm* a, const float* b, t_mat4x2f_rm* out, size_t n);
void mat4x3f_rm_multiply_am(const t_mat4x3f_rm* a, const float* b, t_mat4x3f_rm* out, size_t n);

// Transpose

void mat2f_cm_transpose(const t_mat2f_cm* a, t_mat2f_cm* out, size_t n);
void mat3f_cm_transpose(const t_mat3f_cm* a, t_mat3f_cm* out, size_t n);
void mat4f_cm_transpose(const t_mat4f_cm* a, t_mat4f_cm* out, size_t n);

void mat2f_rm_transpose(const t_mat2f_rm* a, t_mat2f_rm* out, size_t n);
void mat3f_rm_transpose(const t_mat3f_rm* a, t_mat3f_rm* out, size_t n);
void mat4f_rm_transpose(const t_mat4f_rm* a, t_mat4f_rm* out, size_t n);

void mat2x3f_cm_transpose(const t_mat2x3f_cm* a, t_mat3x2f_cm* out, size_t n);
void mat2x4f_cm_transpose(const t_mat2x4f_cm* a, t_mat4x2f_cm* out, size_t n);

void mat3x2f_cm_transpose(const t_mat3x2f_cm* a, t_mat2x3f_cm* out, size_t n);
void mat3x4f_cm_transpose(const t_mat3x4f_cm* a, t_mat4x3f_cm* out, size_t n);

void mat4x2f_cm_transpose(const t_mat4x2f_cm* a, t_mat2x4f_cm* out, size_t n);
void mat4x3f_cm_transpose(const t_mat4x3f_cm* a, t_mat3x4f_cm* out, size_t n);

void mat2x3f_rm_transpose(const t_mat2x3f_rm* a, t_mat3x2f_rm* out, size_t n);
void mat2x4f_rm_transpose(const t_mat2x4f_rm* a, t_mat4x2f_rm* out, size_t n);

void mat3x2f_rm_transpose(const t_mat3x2f_rm* a, t_mat2x3f_rm* out, size_t n);
void mat3x4f_rm_transpose(const t_mat3x4f_rm* a, t_mat4x3f_rm* out, size_t n);

void mat4x2f_rm_transpose(const t_mat4x2f_rm* a, t_mat2x4f_rm* out, size_t n);
void mat4x3f_rm_transpose(const t_mat4x3f_rm* a, t_mat3x4f_rm* out, size_t n);

// Determinant

void mat2f_cm_determinant(const t_mat2f_cm* a, float* out, size_t n);
void mat3f_cm_determinant(const t_mat3f_cm* a, float* out, size_t n);
void mat4f_cm_determinant(const t_mat4f_cm* a, float* out, size_t n);

void mat2f_rm_determinant(const t_mat2f_rm* a, float* out, size_t n);
void mat3f_rm_determinant(const t_mat3f_rm* a, float* out, size_t n);
void mat4f_rm_determinant(const t_mat4f_rm* a, float* out, size_t n);

// Inverse

void mat2f_cm_inverse(const t_mat2f_cm* a, t_mat2f_cm* out, size_t n);
void mat3f_cm_inverse(const t_mat3f_cm* a, t_mat3f_cm* out, size_t n);
void mat4f_cm_inverse(const t_mat4f_cm* a, t_mat4f_cm* out, size_t n);

void mat2f_rm_inverse(const t_mat2f_rm* a, t_mat2f_rm* out, size_t n);
void mat3f_rm_inverse(const t_mat3f_rm* a, t_mat3f_rm* out, size_t n);
void mat4f_rm_inverse(const t_mat4f_rm* a, t_mat4f_rm* out, size_t n);

// Simple functions

// Addition

void mat2f_cm_add_mm(const t_mat2f_cm* a, const t_mat2f_cm* b, t_mat2f_cm* out, size_t n);
void mat3f_cm_add_mm(const t_mat3f_cm* a, const t_mat3f_cm* b, t_mat3f_cm* out, size_t n);
void mat4f_cm_add_mm(const t_mat4f_cm* a, const t_mat4f_cm* b, t_mat4f_cm* out, size_t n);

void mat2f_rm_add_mm(const t_mat2f_rm* a, const t_mat2f_rm* b, t_mat2f_rm* out, size_t n);
void mat3f_rm_add_mm(const t_mat3f_rm* a, const t_mat3f_rm* b, t_mat3f_rm* out, size_t n);
void mat4f_rm_add_mm(const t_mat4f_rm* a, const t_mat4f_rm* b, t_mat4f_rm* out, size_t n);

void mat2x3f_cm_add_mm(const t_mat2x3f_cm* a, const t_mat2x3f_cm* b, t_mat2x3f_cm* out, size_t n);
void mat2x4f_cm_add_mm(const t_mat2x4f_cm* a, const t_mat2x4f_cm* b, t_mat2x4f_cm* out, size_t n);
void mat3x2f_cm_add_mm(const t_mat3x2f_cm* a, const t_mat3x2f_cm* b, t_mat3x2f_cm* out, size_t n);

void mat3x4f_cm_add_mm(const t_mat3x4f_cm* a, const t_mat3x4f_cm* b, t_mat3x4f_cm* out, size_t n);
void mat4x2f_cm_add_mm(const t_mat4x2f_cm* a, const t_mat4x2f_cm* b, t_mat4x2f_cm* out, size_t n);
void mat4x3f_cm_add_mm(const t_mat4x3f_cm* a, const t_mat4x3f_cm* b, t_mat4x3f_cm* out, size_t n);

void mat2x3f_rm_add_mm(const t_mat2x3f_rm* a, const t_mat2x3f_rm* b, t_mat2x3f_rm* out, size_t n);
void mat2x4f_rm_add_mm(const t_mat2x4f_rm* a, const t_mat2x4f_rm* b, t_mat2x4f_rm* out, size_t n);
void mat3x2f_rm_add_mm(const t_mat3x2f_rm* a, const t_mat3x2f_rm* b, t_mat3x2f_rm* out, size_t n);

void mat3x4f_rm_add_mm(const t_mat3x4f_rm* a, const t_mat3x4f_rm* b, t_mat3x4f_rm* out, size_t n);
void mat4x2f_rm_add_mm(const t_mat4x2f_rm* a, const t_mat4x2f_rm* b, t_mat4x2f_rm* out, size_t n);
void mat4x3f_rm_add_mm(const t_mat4x3f_rm* a, const t_mat4x3f_rm* b, t_mat4x3f_rm* out, size_t n);

// Subtraction

void mat2f_cm_subtract_mm(const t_mat2f_cm* a, const t_mat2f_cm* b, t_mat2f_cm* out, size_t n);
void mat3f_cm_subtract_mm(const t_mat3f_cm* a, const t_mat3f_cm* b, t_mat3f_cm* out, size_t n);
void mat4f_cm_subtract_mm(const t_mat4f_cm* a, const t_mat4f_cm* b, t_mat4f_cm* out, size_t n);

void mat2f_rm_subtract_mm(const t_mat2f_rm* a, const t_mat2f_rm* b, t_mat2f_rm* out, size_t n);
void mat3f_rm_subtract_mm(const t_mat3f_rm* a, const t_mat3f_rm* b, t_mat3f_rm* out, size_t n);
void mat4f_rm_subtract_mm(const t_mat4f_rm* a, const t_mat4f_rm* b, t_mat4f_rm* out, size_t n);

void mat2x3f_cm_subtract_mm(const t_mat2x3f_cm* a, const t_mat2x3f_cm* b, t_mat2x3f_cm* out, size_t n);
void mat2x4f_cm_subtract_mm(const t_mat2x4f_cm* a, const t_mat2x4f_cm* b, t_mat2x4f_cm* out, size_t n);
void mat3x2f_cm_subtract_mm(const t_mat3x2f_cm* a, const t_mat3x2f_cm* b, t_mat3x2f_cm* out, size_t n);

void mat3x4f_cm_subtract_mm(const t_mat3x4f_cm* a, const t_mat3x4f_cm* b, t_mat3x4f_cm* out, size_t n);
void mat4x2f_cm_subtract_mm(const t_mat4x2f_cm* a, const t_mat4x2f_cm* b, t_mat4x2f_cm* out, size_t n);
void mat4x3f_cm_subtract_mm(const t_mat4x3f_cm* a, const t_mat4x3f_cm* b, t_mat4x3f_cm* out, size_t n);

void mat2x3f_rm_subtract_mm(const t_mat2x3f_rm* a, const t_mat2x3f_rm* b, t_mat2x3f_rm* out, size_t n);
void mat2x4f_rm_subtract_mm(const t_mat2x4f_rm* a, const t_mat2x4f_rm* b, t_mat2x4f_rm* out, size_t n);
void mat3x2f_rm_subtract_mm(const t_mat3x2f_rm* a, const t_mat3x2f_rm* b, t_mat3x2f_rm* out, size_t n);

void mat3x4f_rm_subtract_mm(const t_mat3x4f_rm* a, const t_mat3x4f_rm* b, t_mat3x4f_rm* out, size_t n);
void mat4x2f_rm_subtract_mm(const t_mat4x2f_rm* a, const t_mat4x2f_rm* b, t_mat4x2f_rm* out, size_t n);
void mat4x3f_rm_subtract_mm(const t_mat4x3f_rm* a, const t_mat4x3f_rm* b, t_mat4x3f_rm* out, size_t n);

// Multiplication

void mat2f_cm_elementwise_multiply_mm(const t_mat2f_cm* a, const t_mat2f_cm* b, t_mat2f_cm* out, size_t n);
void mat3f_cm_elementwise_multiply_mm(const t_mat3f_cm* a, const t_mat3f_cm* b, t_mat3f_cm* out, size_t n);
void mat4f_cm_elementwise_multiply_mm(const t_mat4f_cm* a, const t_mat4f_cm* b, t_mat4f_cm* out, size_t n);

void mat2f_rm_elementwise_multiply_mm(const t_mat2f_rm* a, const t_mat2f_rm* b, t_mat2f_rm* out, size_t n);
void mat3f_rm_elementwise_multiply_mm(const t_mat3f_rm* a, const t_mat3f_rm* b, t_mat3f_rm* out, size_t n);
void mat4f_rm_elementwise_multiply_mm(const t_mat4f_rm* a, const t_mat4f_rm* b, t_mat4f_rm* out, size_t n);

void mat2x3f_cm_elementwise_multiply_mm(const t_mat2x3f_cm* a, const t_mat2x3f_cm* b, t_mat2x3f_cm* out, size_t n);
void mat2x4f_cm_elementwise_multiply_mm(const t_mat2x4f_cm* a, const t_mat2x4f_cm* b, t_mat2x4f_cm* out, size_t n);
void mat3x2f_cm_elementwise_multiply_mm(const t_mat3x2f_cm* a, const t_mat3x2f_cm* b, t_mat3x2f_cm* out, size_t n);
void mat3x4f_cm_elementwise_multiply_mm(const t_mat3x4f_cm* a, const t_mat3x4f_cm* b, t_mat3x4f_cm* out, size_t n);
void mat4x2f_cm_elementwise_multiply_mm(const t_mat4x2f_cm* a, const t_mat4x2f_cm* b, t_mat4x2f_cm* out, size_t n);
void mat4x3f_cm_elementwise_multiply_mm(const t_mat4x3f_cm* a, const t_mat4x3f_cm* b, t_mat4x3f_cm* out, size_t n);

void mat2x3f_rm_elementwise_multiply_mm(const t_mat2x3f_rm* a, const t_mat2x3f_rm* b, t_mat2x3f_rm* out, size_t n);
void mat2x4f_rm_elementwise_multiply_mm(const t_mat2x4f_rm* a, const t_mat2x4f_rm* b, t_mat2x4f_rm* out, size_t n);
void mat3x2f_rm_elementwise_multiply_mm(const t_mat3x2f_rm* a, const t_mat3x2f_rm* b, t_mat3x2f_rm* out, size_t n);
void mat3x4f_rm_elementwise_multiply_mm(const t_mat3x4f_rm* a, const t_mat3x4f_rm* b, t_mat3x4f_rm* out, size_t n);
void mat4x2f_rm_elementwise_multiply_mm(const t_mat4x2f_rm* a, const t_mat4x2f_rm* b, t_mat4x2f_rm* out, size_t n);
void mat4x3f_rm_elementwise_multiply_mm(const t_mat4x3f_rm* a, const t_mat4x3f_rm* b, t_mat4x3f_rm* out, size_t n);

// Division

void mat2f_cm_divide_mm(const t_mat2f_cm* a, const t_mat2f_cm* b, t_mat2f_cm* out, size_t n);
void mat3f_cm_divide_mm(const t_mat3f_cm* a, const t_mat3f_cm* b, t_mat3f_cm* out, size_t n);
void mat4f_cm_divide_mm(const t_mat4f_cm* a, const t_mat4f_cm* b, t_mat4f_cm* out, size_t n);

void mat2f_rm_divide_mm(const t_mat2f_rm* a, const t_mat2f_rm* b, t_mat2f_rm* out, size_t n);
void mat3f_rm_divide_mm(const t_mat3f_rm* a, const t_mat3f_rm* b, t_mat3f_rm* out, size_t n);
void mat4f_rm_divide_mm(const t_mat4f_rm* a, const t_mat4f_rm* b, t_mat4f_rm* out, size_t n);

void mat2x3f_cm_divide_mm(const t_mat2x3f_cm* a, const t_mat2x3f_cm* b, t_mat2x3f_cm* out, size_t n);
void mat2x4f_cm_divide_mm(const t_mat2x4f_cm* a, const t_mat2x4f_cm* b, t_mat2x4f_cm* out, size_t n);
void mat3x2f_cm_divide_mm(const t_mat3x2f_cm* a, const t_mat3x2f_cm* b, t_mat3x2f_cm* out, size_t n);
void mat3x4f_cm_divide_mm(const t_mat3x4f_cm* a, const t_mat3x4f_cm* b, t_mat3x4f_cm* out, size_t n);
void mat4x2f_cm_divide_mm(const t_mat4x2f_cm* a, const t_mat4x2f_cm* b, t_mat4x2f_cm* out, size_t n);
void mat4x3f_cm_divide_mm(const t_mat4x3f_cm* a, const t_mat4x3f_cm* b, t_mat4x3f_cm* out, size_t n);

void mat2x3f_rm_divide_mm(const t_mat2x3f_rm* a, const t_mat2x3f_rm* b, t_mat2x3f_rm* out, size_t n);
void mat2x4f_rm_divide_mm(const t_mat2x4f_rm* a, const t_mat2x4f_rm* b, t_mat2x4f_rm* out, size_t n);
void mat3x2f_rm_divide_mm(const t_mat3x2f_rm* a, const t_mat3x2f_rm* b, t_mat3x2f_rm* out, size_t n);
void mat3x4f_rm_divide_mm(const t_mat3x4f_rm* a, const t_mat3x4f_rm* b, t_mat3x4f_rm* out, size_t n);
void mat4x2f_rm_divide_mm(const t_mat4x2f_rm* a, const t_mat4x2f_rm* b, t_mat4x2f_rm* out, size_t n);
void mat4x3f_rm_divide_mm(const t_mat4x3f_rm* a, const t_mat4x3f_rm* b, t_mat4x3f_rm* out, size_t n);

#endif