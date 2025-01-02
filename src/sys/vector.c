#include "common.h"
#include "vector.h"

#include "macros.h"
#include <sys/utils.h>

#include <ssb_types.h>

#include <PR/gu.h>
#include <PR/mbi.h>

#define VEC_DOT(v, w) ((v->x * w->x) + (v->y * w->y) + (v->z * w->z))

f32 syVectorNorm3D(Vec3f *dst)
{
    f32 mag = sqrtf(SQUARE(dst->x) + SQUARE(dst->y) + SQUARE(dst->z));

    if (mag == 0.0F)
    {
        return 0.0F;
    }
    dst->x *= 1.0F / mag;
    dst->y *= 1.0F / mag;
    dst->z *= 1.0F / mag;

    return mag;
}

f32 syVectorMag3D(Vec3f *src)
{
    return sqrtf(SQUARE(src->x) + SQUARE(src->y) + SQUARE(src->z));
}

Vec3f* syVectorAdd3D(Vec3f *dst, Vec3f *add)
{
    dst->x += add->x;
    dst->y += add->y;
    dst->z += add->z;

    return dst;
}

Vec3f* syVectorSub3D(Vec3f *dst, Vec3f *sub)
{
    dst->x -= sub->x;
    dst->y -= sub->y;
    dst->z -= sub->z;

    return dst;
}

Vec3f* syVectorDiff3D(Vec3f *dst, Vec3f *src, Vec3f *sub)
{
    dst->x = src->x - sub->x;
    dst->y = src->y - sub->y;
    dst->z = src->z - sub->z;

    return dst;
}

f32 syVectorNormDiff3D(Vec3f *dst, Vec3f *src, Vec3f *sub)
{
    dst->x = src->x - sub->x;
    dst->y = src->y - sub->y;
    dst->z = src->z - sub->z;

    return syVectorNorm3D(dst);
}

Vec3f* syVectorScale3D(Vec3f *dst, f32 scale)
{
    dst->x *= scale;
    dst->y *= scale;
    dst->z *= scale;

    return dst;
}

Vec3f* syVectorInv3D(Vec3f *dst, f32 inv)
{
    if (inv != 0.0F)
    {
        dst->x /= inv;
        dst->y /= inv;
        dst->z /= inv;
    }
    return dst;
}

Vec3f* syVectorAddScaled3D(Vec3f *dst, Vec3f *add, f32 scale)
{
    dst->x += (add->x * scale);
    dst->y += (add->y * scale);
    dst->z += (add->z * scale);

    return dst;
}

f32 syVectorNormScaleAddScaled3D(Vec3f *dst, f32 dst_scale, Vec3f *add, f32 add_scale)
{
    dst->x *= dst_scale;
    dst->y *= dst_scale;
    dst->z *= dst_scale;

    dst->x += (add->x * add_scale);
    dst->y += (add->y * add_scale);
    dst->z += (add->z * add_scale);

    return syVectorNorm3D(dst);
}

f32 syVectorAngleDiff3D(Vec3f *a, Vec3f *b)
{
    f32 mag = syVectorMag3D(a) * syVectorMag3D(b);

    if (mag != 0.0F)
    {
        f32 cos_diff = VEC_DOT(a, b) / mag;

        // limit result to -1 < x < 1
        if (cos_diff > 1.0F)
        {
            cos_diff = 1.0F;
        }
        if (cos_diff < -1.0F)
        {
            cos_diff = -1.0F;
        }
        return syUtilsArcCos(cos_diff);
    }
    // at least one of the vectors is a zero vector
    return 0.0F;
}

Vec3f* syVectorRotate3D(Vec3f *dst, s32 axis, f32 angle)
{
    f32 x, y, z;
    f32 sin = __sinf(angle);
    f32 cos = __cosf(angle);

    switch (axis)
    {
    case SYVECTOR_AXIS_X:
        x = dst->x;
        y = (dst->y * cos) - (dst->z * sin);
        z = (dst->y * sin) + (dst->z * cos);
        break;

    case SYVECTOR_AXIS_Y:
        x = (dst->x * cos) + (dst->z * sin);
        y = dst->y;
        z = (dst->z * cos) - (dst->x * sin);
        break;

    case SYVECTOR_AXIS_Z:
        x = (dst->x * cos) - (dst->y * sin);
        y = (dst->x * sin) + (dst->y * cos);
        z = dst->z;
        break;
    }
    dst->x = x;
    dst->y = y;
    dst->z = z;

    return dst;
}

Vec3f* syVectorNeg3D(Vec3f *dst)
{
    dst->x = -dst->x;
    dst->y = -dst->y;
    dst->z = -dst->z;

    return dst;
}

#ifdef NON_MATCHING
Vec3f *func_80019438(Vec3f *arg0, Vec3f *arg1, f32 arg2) {
    f32 sp3C;
    f32 sp38; // only set when sp3C != 0
    f32 sp34; // only set when sp3C != 0
    f32 sp30; // cosX
    f32 sp2C; // sinX
    f32 phiF18;
    f32 phiF20;
    f32 resX, resY, resZ;

    sp3C = sqrtf(SQUARE(arg1->y) + SQUARE(arg1->z));
    sp2C = __sinf(arg2);
    sp30 = __cosf(arg2);

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
#pragma GLOBAL_ASM("asm/nonmatchings/sys/vector/func_80019438.s")
#endif

Vec3f* syVectorAxisNeg3D(Vec3f *dst, u32 flags)
{
    if (flags & SYVECTOR_AXIS_X)
    {
        dst->x = -dst->x;
    }
    if (flags & SYVECTOR_AXIS_Y)
    {
        dst->y = -dst->y;
    }
    if (flags & SYVECTOR_AXIS_Z)
    {
        dst->z = -dst->z;
    }
    return dst;
}

// _super_ granularly negates components of a vector
Vec3f* unref_80019608(Vec3f *dst, u32 flags)
{
    if (flags & SYVECTOR_INV_SWAP)
    {
        if ((flags & SYVECTOR_AXIS_X) && (dst->x < 0.0F))
        {
            dst->x = -dst->x;
        }
        else if ((flags & SYVECTOR_INV_X) && (dst->x > 0.0F))
        {
            dst->x = -dst->x;
        }
        if ((flags & SYVECTOR_AXIS_Y) && (dst->y < 0.0F))
        {
            dst->y = -dst->y;
        }
        else if ((flags & SYVECTOR_INV_Y) && (dst->y > 0.0F))
        {
            dst->y = -dst->y;
        }
        if ((flags & SYVECTOR_AXIS_Z) && (dst->z < 0.0F))
        {
            dst->z = -dst->z;
        }
        else if ((flags & SYVECTOR_INV_Z) && (dst->z > 0.0F))
        {
            dst->z = -dst->z;
        }
    }
    else
    {
        if ((flags & SYVECTOR_AXIS_X) && (dst->x > 0.0F))
        {
            dst->x = -dst->x;
        }
        else if ((flags & SYVECTOR_INV_X) && (dst->x < 0.0F))
        {
            dst->x = -dst->x;
        }
        if ((flags & SYVECTOR_AXIS_Y) && (dst->y > 0.0F))
        {
            dst->y = -dst->y;
        }
        else if ((flags & SYVECTOR_INV_Y) && (dst->y < 0.0F))
        {
            dst->y = -dst->y;
        }
        if ((flags & SYVECTOR_AXIS_Z) && (dst->z > 0.0F))
        {
            dst->z = -dst->z;
        }
        else if ((flags & SYVECTOR_INV_Z) && (dst->z < 0.0F))
        {
            dst->z = -dst->z;
        }
    }
    return dst;
}

Vec3f* unref_80019818(Vec3f *a, Vec3f *b)
{
    f32 dot = VEC_DOT(b, a) * -2.0F;

    a->x += (b->x * dot);
    a->y += (b->y * dot);
    a->z += (b->z * dot);

    return a;
}

Vec3f* unref_80019888(Vec3f *a, Vec3f *b)
{
    f32 dot = VEC_DOT(b, a);

    if (dot < 0.0F)
    {
        dot *= -2.0F;

        a->x += (b->x * dot);
        a->y += (b->y * dot);
        a->z += (b->z * dot);
    }
    return a;
}

// Returns 1 if the two vectors are less than 180 degrees apart,
// -1 if they are more than 180 degrees apart,
// and 0 if they are perpendicular.
s32 syVectorDirection3D(Vec3f *a, Vec3f *b)
{
    f32 dot = VEC_DOT(b, a);

    if (dot != 0.0F)
    {
        return (dot < 0.0F) ? -1 : 1;
    }
    else return 0;
}

Vec3f* syVectorNormCross3D(Vec3f *a, Vec3f *b, Vec3f *dst)
{
    dst->x = (a->y * b->z) - (a->z * b->y);
    dst->y = (a->z * b->x) - (a->x * b->z);
    dst->z = (a->x * b->y) - (a->y * b->x);

    return (syVectorNorm3D(dst) != 0.0F) ? dst : NULL;
}

// Subtracts v0 from b, and runs the same check as syVectorDirection3D on the result and a
s32 syVectorDiffDirection3D(Vec3f *sub, Vec3f *a, Vec3f *b)
{
    f32 dot = (a->x * (b->x - sub->x)) + (a->y * (b->y - sub->y)) + (a->z * (b->z - sub->z));

    if (dot != 0.0F)
    {
        return (dot < 0.0F) ? -1 : 1;
    }
    else return 0;
}

// gets the magnitude of the difference of 2 vectors
f32 syVectorMagDiff3D(Vec3f *sub, Vec3f *src)
{
    Vec3f res;

    res.x = src->x - sub->x;
    res.y = src->y - sub->y;
    res.z = src->z - sub->z;

    return syVectorMag3D(&res);
}

// Takes the cross product of (arg1 - arg0) and (arg2 - arg0), then
// does the difference of cross dot arg3 and cross dot arg0, then
// takes the absolute value of that difference and divides by the magnitude of the cross product
f32 unref_80019B00(Vec3f *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3)
{
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
    numerator = ABSF(((arg3->x * crossx) + (crossy * arg3->y) + (crossz * arg3->z)) + crossdotarg0_neg);

    return numerator / sqrtf((crossx * crossx) + (crossy * crossy) + (crossz * crossz));
}
