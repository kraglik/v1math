#include <immintrin.h>

#include "v1math/vector.h"


t_vec2f vec2f(float x, float y) {
    t_vec2f out;

    out.x = x;
    out.y = y;

    return out;
}

t_vec3f vec3f(float x, float y, float z) {
    t_vec3f out;

    out.x = x;
    out.y = y;
    out.z = z;

    return out;
}

t_vec4f vec4f(float x, float y, float z, float w) {
    t_vec4f out;

    out.x = x;
    out.y = y;
    out.z = z;
    out.w = w;

    return out;
}

t_vec2i vec2i(int x, int y) {
    t_vec2i out;

    out.x = x;
    out.y = y;

    return out;
}

t_vec3i vec3i(int x, int y, int z) {
    t_vec3i out;

    out.x = x;
    out.y = y;
    out.z = z;

    return out;
}

t_vec4i vec4i(int x, int y, int z, int w) {
    t_vec4i out;

    out.x = x;
    out.y = y;
    out.z = z;
    out.w = w;

    return out;
}

t_vec2f vec2f_from_vec2i(const t_vec2i* a) {
    t_vec2f out;

    out.x = (float) a->x;
    out.y = (float) a->y;

    return out;
}
t_vec3f vec3f_from_vec3i(const t_vec3i* a) {
    t_vec3f out;

    out.x = (float) a->x;
    out.y = (float) a->y;
    out.z = (float) a->z;

    return out;
}

t_vec4f vec4f_from_vec4i(const t_vec4i* a) {
    t_vec4f out;

    out.x = (float) a->x;
    out.y = (float) a->y;
    out.z = (float) a->z;
    out.w = (float) a->w;

    return out;
}

t_vec2i vec2i_from_vec2f(const t_vec2f* a) {
    t_vec2i out;

    out.x = (int) a->x;
    out.y = (int) a->y;

    return out;
}

t_vec3i vec3i_from_vec3f(const t_vec3f* a) {
    t_vec3i out;

    out.x = (int) a->x;
    out.y = (int) a->y;
    out.z = (int) a->z;

    return out;
}

t_vec4i vec4i_from_vec4f(const t_vec4f* a) {
    t_vec4i out;

    out.x = (int) a->x;
    out.y = (int) a->y;
    out.z = (int) a->z;
    out.w = (int) a->w;

    return out;
}

t_vec2f vec2f_from_scalar(float a) {
    t_vec2f out;

    out.x = a;
    out.y = a;

    return out;
}

t_vec3f vec3f_from_scalar(float a) {
    t_vec3f out;

    out.x = a;
    out.y = a;
    out.z = a;

    return out;
}

t_vec4f vec4f_from_scalar(float a) {
    t_vec4f out;

    out.x = a;
    out.y = a;
    out.z = a;
    out.w = a;

    return out;
}

t_vec2i vec2i_from_scalar(int a) {
    t_vec2i out;

    out.x = a;
    out.y = a;

    return out;
}

t_vec3i vec3i_from_scalar(int a) {
    t_vec3i out;

    out.x = a;
    out.y = a;
    out.z = a;

    return out;
}

t_vec4i vec4i_from_scalar(int a) {
    t_vec4i out;

    out.x = a;
    out.y = a;
    out.z = a;
    out.w = a;

    return out;
}
