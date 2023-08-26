#ifndef V1MATH_SCALAR_H
#define V1MATH_SCALAR_H

void fadd_aa_vectorized(const float* a, const float* b, float* out, size_t n);
void iadd_aa_vectorized(const int* a, const int* b, int* out, size_t n);

void fsub_aa_vectorized(const float* a, const float* b, float* out, size_t n);
void isub_aa_vectorized(const int* a, const int* b, int* out, size_t n);

void fmul_aa_vectorized(const float* a, const float* b, float* out, size_t n);
void imul_aa_vectorized(const int* a, const int* b, int* out, size_t n);

void fdiv_aa_vectorized(const float* a, const float* b, float* out, size_t n);
void idiv_aa_vectorized(const int* a, const int* b, int* out, size_t n);

void fadd_as_vectorized(const float* a, float b, float* out, size_t n);
void iadd_as_vectorized(const int* a, int b, int* out, size_t n);

void fsub_as_vectorized(const float* a, float b, float* out, size_t n);
void isub_as_vectorized(const int* a, int b, int* out, size_t n);

void fmul_as_vectorized(const float* a, float b, float* out, size_t n);
void imul_as_vectorized(const int* a, int b, int* out, size_t n);

void fdiv_as_vectorized(const float* a, float b, float* out, size_t n);

void fdiv_sa_vectorized(float a, const float* b, float* out, size_t n);

#endif