#include "sys/vec.h"

#include "macros.h"
#include "sys/trig_rand.h"

#include <ssb_types.h>

#include <PR/gu.h>
#include <PR/mbi.h>
#include <PR/ultratypes.h>

#define VEC_DOT(v, w) ((v->x * w->x) + (v->y * w->y) + (v->z * w->z))

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

f32 vec3f_normalize(struct Vec3f *v) {
    f32 mag = sqrtf(SQUARE(v->x) + SQUARE(v->y) + SQUARE(v->z));
    if (mag == 0.0f) { return 0.0f; }
    v->x *= 1.0f / mag;
    v->y *= 1.0f / mag;
    v->z *= 1.0f / mag;

    return mag;
}

f32 vec3f_mag(const struct Vec3f *v) {
    return sqrtf(SQUARE(v->x) + SQUARE(v->y) + SQUARE(v->z));
}

struct Vec3f *vec3f_add_to(struct Vec3f *dst, const struct Vec3f *addend) {
    dst->x += addend->x;
    dst->y += addend->y;
    dst->z += addend->z;

    return dst;
}

struct Vec3f *vec3f_sub_from(struct Vec3f *dst, const struct Vec3f *subtrahend) {
    dst->x -= subtrahend->x;
    dst->y -= subtrahend->y;
    dst->z -= subtrahend->z;

    return dst;
}

struct Vec3f *
vec3f_sub(struct Vec3f *difference, const struct Vec3f *minuend, const struct Vec3f *subtrahend) {
    difference->x = minuend->x - subtrahend->x;
    difference->y = minuend->y - subtrahend->y;
    difference->z = minuend->z - subtrahend->z;

    return difference;
}

void vec3f_sub_normalize(
    struct Vec3f *difference,
    const struct Vec3f *minuend,
    const struct Vec3f *subtrahend) {
    difference->x = minuend->x - subtrahend->x;
    difference->y = minuend->y - subtrahend->y;
    difference->z = minuend->z - subtrahend->z;

    vec3f_normalize(difference);
}

struct Vec3f *vec3f_scale(struct Vec3f *v, f32 scale) {
    v->x *= scale;
    v->y *= scale;
    v->z *= scale;

    return v;
}

struct Vec3f *vec3f_div_scale(struct Vec3f *v, f32 invScale) {
    if (invScale != 0.0f) {
        v->x /= invScale;
        v->y /= invScale;
        v->z /= invScale;
    }

    return v;
}

struct Vec3f *vec3f_add_scaled(struct Vec3f *dst, const struct Vec3f *addend, f32 scale) {
    dst->x += (addend->x * scale);
    dst->y += (addend->y * scale);
    dst->z += (addend->z * scale);

    return dst;
}

void vec3f_scale_add_scaled_normalize(
    struct Vec3f *dst,
    f32 dstScale,
    const struct Vec3f *addend,
    f32 addendScale) {
    dst->x *= dstScale;
    dst->y *= dstScale;
    dst->z *= dstScale;
    dst->x += (addend->x * addendScale);
    dst->y += (addend->y * addendScale);
    dst->z += (addend->z * addendScale);

    vec3f_normalize(dst);
}

f32 vec3f_angle_diff(struct Vec3f *v1, struct Vec3f *v2) {
    f32 magProd = vec3f_mag(v1) * vec3f_mag(v2);

    if (magProd != 0.0f) {
        f32 cosDiff = VEC_DOT(v1, v2) / magProd;
        // limit result to -1 < x < 1
        if (1.0f < cosDiff) { cosDiff = 1.0f; }
        if (cosDiff < -1.0f) { cosDiff = -1.0f; }
        return acosf(cosDiff);
    }

    // at least one of the vectors is a zero vector
    return 0.0f;
}

struct Vec3f *vec3_get_euler_rotation(struct Vec3f *v, enum VectorAxisFlags axis, f32 angle) {
    f32 xResult, yResult, zResult;
    f32 sinAngle = sinf(angle);
    f32 cosAngle = cosf(angle);

    switch (axis) {
        case AXIS_X:
            xResult = v->x;
            yResult = (v->y * cosAngle) - (v->z * sinAngle);
            zResult = (v->y * sinAngle) + (v->z * cosAngle);
            break;
        case AXIS_Y:
            xResult = (v->x * cosAngle) + (v->z * sinAngle);
            yResult = v->y;
            zResult = (v->z * cosAngle) - (v->x * sinAngle);
            break;
        case AXIS_Z:
            xResult = (v->x * cosAngle) - (v->y * sinAngle);
            yResult = (v->x * sinAngle) + (v->y * cosAngle);
            zResult = v->z;
            break;
    }
    v->x = xResult;
    v->y = yResult;
    v->z = zResult;
    return v;
}

struct Vec3f *vec3f_negate(struct Vec3f *v) {
    v->x = -v->x;
    v->y = -v->y;
    v->z = -v->z;

    return v;
}

#ifdef NON_MATCHING
struct Vec3f *func_80019438(struct Vec3f *arg0, struct Vec3f *arg1, f32 arg2) {
    f32 sp3C;
    f32 sp38; // only set when sp3C != 0
    f32 sp34; // only set when sp3C != 0
    f32 sp30; // cosX
    f32 sp2C; // sinX
    f32 phiF18;
    f32 phiF20;
    f32 resX, resY, resZ;

    sp3C = sqrtf(SQUARE(arg1->y) + SQUARE(arg1->z));
    sp2C = sinf(arg2);
    sp30 = cosf(arg2);

    if (sp3C != 0.0f) {
        sp34 = arg1->y / sp3C;
        sp38 = arg1->z / sp3C;

        phiF20 = (arg0->y * sp38) - (arg0->z * sp34);
        phiF18 = (arg0->y * sp34) + (arg0->z * sp38);
    } else {
        phiF20 = arg0->y;
        phiF18 = arg0->z;
    }
    // L800194F8
    resX = (((((arg0->x * sp3C) - (phiF18 * arg1->x)) * sp30) - (phiF20 * sp2C)) * sp3C)
         + (((arg1->x * arg0->x) + (phiF18 * sp3C)) * arg1->x);
    resY = (((arg0->x * sp3C) - (phiF18 * arg1->x)) * sp2C) + (phiF20 * sp30);
    resZ = (-((((arg0->x * sp3C) - (phiF18 * arg1->x)) * sp30) - (phiF20 * sp2C)) * arg1->x)
         + (((arg1->x * arg0->x) + (phiF18 * sp3C)) * sp3C);

    if (sp3C != 0.0f) {
        arg0->x = resX;
        arg0->y = phiF20 * sp38 + resY * sp34;
        arg0->z = -phiF20 * sp34 + resZ * sp38;
    } else {
        arg0->x = resX;
        arg0->y = resY;
        arg0->z = resZ;
    }

    return arg0;
}

#else
#pragma GLOBAL_ASM("game/nonmatching/sys/sys_vec/func_80019438.s")
#endif

struct Vec3f *vec3_negate_by_axis(struct Vec3f *v, enum VectorAxisFlags flag) {
    if (flag & AXIS_X) { v->x = -v->x; }
    if (flag & AXIS_Y) { v->y = -v->y; }
    if (flag & AXIS_Z) { v->z = -v->z; }
    return v;
}

// _super_ granularly negates components of a vector
struct Vec3f *unref_80019608(struct Vec3f *v, u32 flags) {
    do {
        if (flags & 0x40) {
            if ((flags & 1) && (v->x < 0.0f)) {
                v->x = -v->x;
            } else if ((flags & 8) && (v->x > 0.0f)) {
                v->x = -v->x;
            }
            if ((flags & 2) && (v->y < 0.0f)) {
                v->y = -v->y;
            } else if ((flags & 0x10) && (0.0f < v->y)) {
                v->y = -v->y;
            }
            if ((flags & 4) && (v->z < 0.0f)) {
                v->z = -v->z;
                break;
            }
            if (flags & 0x20) {
                if (0.0f < v->z) {
                    v->z = -v->z;
                    break;
                }
            }
        } else {
            if ((flags & 1) && (0.0f < v->x)) {
                v->x = -v->x;
            } else if (flags & 8) {
                if (v->x < 0.0f) { v->x = -v->x; }
            }
            if ((flags & 2) && (0.0f < v->y)) {
                v->y = -v->y;
            } else if (flags & 0x10) {
                if (v->y < 0.0f) { v->y = -v->y; }
            }
            if (flags & 4) {
                if (0.0f < v->z) {
                    v->z = -v->z;
                    break;
                }
            }
            if ((flags & 0x20) && (v->z < 0.0f)) { v->z = -v->z; }
        }
    } while (FALSE);

    // do while (0)... macro?

    return v;
}

struct Vec3f *unref_80019818(struct Vec3f *v1, const struct Vec3f *v2) {
    f32 dot;

    dot = VEC_DOT(v2, v1) * -2.0f;
    v1->x += (v2->x * dot);
    v1->y += (v2->y * dot);
    v1->z += (v2->z * dot);
    return v1;
}

struct Vec3f *unref_80019888(struct Vec3f *v1, const struct Vec3f *v2) {
    f32 dot;

    dot = VEC_DOT(v2, v1);
    if (dot < 0.0f) {
        dot *= -2.0f;
        v1->x += (v2->x * dot);
        v1->y += (v2->y * dot);
        v1->z += (v2->z * dot);
    }
    return v1;
}

// Returns 1 if the two vectors are less than 180 degrees apart,
// -1 if they are more than 180 degrees apart,
// and 0 if they are perpendicular.
s32 vec3f_compare_directions(struct Vec3f *v1, struct Vec3f *v2) {
    f32 dot;

    dot = VEC_DOT(v2, v1);
    if (dot != 0.0f) {
        return (dot < 0.0f ? -1 : 1);
    } else {
        return 0;
    }
}

struct Vec3f *
vec3f_normalized_cross_product(struct Vec3f *v0, struct Vec3f *v1, struct Vec3f *result) {
    result->x = (v0->y * v1->z) - (v0->z * v1->y);
    result->y = (v0->z * v1->x) - (v0->x * v1->z);
    result->z = (v0->x * v1->y) - (v0->y * v1->x);

    return (vec3f_normalize(result) != 0.0f) ? result : NULL;
}

// Subtracts v0 from v2, and runs the same check as vec3f_compare_directions on the result and v1
s32 vec3f_subtract_compare_directions(struct Vec3f *v0, struct Vec3f *v1, struct Vec3f *v2) {
    f32 dot;

    dot = (v1->x * (v2->x - v0->x)) + (v1->y * (v2->y - v0->y)) + (v1->z * (v2->z - v0->z));
    if (dot != 0.0f) {
        return (dot < 0.0f ? -1 : 1);
    } else {
        return 0;
    }
}

// gets the magnitude of the difference of 2 vectors
f32 vec3f_diff_mag(struct Vec3f *v0, struct Vec3f *v1) {
    struct Vec3f result;

    result.x = v1->x - v0->x;
    result.y = v1->y - v0->y;
    result.z = v1->z - v0->z;

    return vec3f_mag(&result);
}

// Takes the cross product of (arg1 - arg0) and (arg2 - arg0), then
// does the difference of cross dot arg3 and cross dot arg0, then
// takes the absolute value of that difference and divides by the magnitude of the cross product
f32 unref_80019B00(struct Vec3f *arg0, struct Vec3f *arg1, struct Vec3f *arg2, struct Vec3f *arg3) {
    f32 dz1;
    f32 dy1;
    f32 dx1;
    f32 dz2;
    f32 dy2;
    f32 dx2;
    f32 crossx;
    f32 crossy;
    f32 crossz;
    f32 crossdotarg0_neg;
    f32 numerator;

    dx1 = (arg1->x - arg0->x);
    dy1 = (arg1->y - arg0->y);
    dz1 = (arg1->z - arg0->z);

    dx2 = (arg2->x - arg0->x);
    dy2 = (arg2->y - arg0->y);
    dz2 = (arg2->z - arg0->z);

    crossx = (dy1 * dz2) - (dz1 * dy2);
    crossy = (dz1 * dx2) - (dx1 * dz2);
    crossz = (dx1 * dy2) - (dy1 * dx2);

    crossdotarg0_neg = -((arg0->x * crossx) + (crossy * arg0->y) + (crossz * arg0->z));
    numerator =
        ABSF(((arg3->x * crossx) + (crossy * arg3->y) + (crossz * arg3->z)) + crossdotarg0_neg);

    return numerator / sqrtf((crossx * crossx) + (crossy * crossy) + (crossz * crossz));
}
