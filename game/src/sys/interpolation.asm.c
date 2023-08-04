#include "sys/interpolation.h"

#include <macros.h>
#include <ssb_types.h>

#include <PR/gu.h>
#include <PR/ultratypes.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

#define SQ(x) SQUARE(x)
#define CB(x) CUBE(x)
// biquadrate lol; easier to make a symbol than quartic (QT looks familiar too me)
#define BQ(x) ((x) * (x) * (x) * (x))

// Catmull–Rom cubic spline
void func_8001D610(struct Vec3f *out, struct Vec3f *ctrl, f32 s, f32 t);

#ifdef NON_MATCHING
#define BASIS1(t, s) ((-CB((t)) + 2.0f * SQ((t)) - (t)) * (s))
#define BASIS2(t, s) ((2.0f - (s)) * CB((t)) + ((s)-3.0f) * SQ((t)) + 1.0f)
#define BASIS3(t, s) (((s)-2.0f) * CB((t)) + (3.0f - 2.0f * (s)) * SQ((t)) + (s) * (t))
#define BASIS4(t, s) ((CB((t)) - SQ((t))) * (s))

void func_8001D610(struct Vec3f *out, struct Vec3f *ctrl, f32 s, f32 t) {
    f32 b1;
    f32 b2;
    f32 b3;
    UNUSED f32 extra;
    f32 b4;

    b1 = BASIS1(t, s);
    b2 = BASIS2(t, s);
    b3 = BASIS3(t, s);
    b4 = BASIS4(t, s);

    out->x = ctrl[0].x * BASIS1(t, s) + ctrl[1].x * BASIS2(t, s) + ctrl[2].x * BASIS3(t, s)
           + ctrl[3].x * BASIS4(t, s);

    out->y = ctrl[0].y * BASIS1(t, s) + ctrl[1].y * BASIS2(t, s) + ctrl[2].y * BASIS3(t, s)
           + ctrl[3].y * BASIS4(t, s);

    out->z = ctrl[0].z * BASIS1(t, s) + ctrl[1].z * BASIS2(t, s) + ctrl[2].z * BASIS3(t, s)
           + ctrl[3].z * BASIS4(t, s);
}

#undef BASIS1
#undef BASIS2
#undef BASIS3
#undef BASIS4

#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_09/func_8001D610.s")
#endif

// quadratic spline?
void func_8001D754(struct Vec3f *out, struct Vec3f *ctrl, f32 s, f32 t);
#ifdef NON_MATCHING
#define BASIS1(t, s) ((-3.0f * SQ((t)) + 4.0f * (t)-1.0f) * (s))
#define BASIS2(t, s) ((2.0f - (s)) * 3.0f * SQ((t)) + 2.0f * ((s)-3.0f) * (t))
#define BASIS3(t, s) (((s)-2.0f) * 3.0f * SQ((t)) + 2.0f * (3.0f - 2.0f * (s)) * (t) + (s))
#define BASIS4(t, s) ((3.0f * SQ((t)) - 2.0f * (t)) * (s))

void func_8001D754(struct Vec3f *out, struct Vec3f *ctrl, f32 s, f32 t) {
    // f32 b1, b2, b3, b4;
    f32 sX, sY, sZ;

    // b1 = BASIS1(t,s);
    // b2 = BASIS2(t,s);
    // b3 = BASIS3(t,s);
    // b4 = BASIS4(t,s);

    sX = ctrl[0].x * BASIS1(t, s) + ctrl[1].x * BASIS2(t, s) + ctrl[2].x * BASIS3(t, s)
       + ctrl[3].x * BASIS4(t, s);
    sY = ctrl[0].y * BASIS1(t, s) + ctrl[1].y * BASIS2(t, s) + ctrl[2].y * BASIS3(t, s)
       + ctrl[3].y * BASIS4(t, s);
    sZ = ctrl[0].z * BASIS1(t, s) + ctrl[1].z * BASIS2(t, s) + ctrl[2].z * BASIS3(t, s)
       + ctrl[3].z * BASIS4(t, s);

    out->x = sX;
    out->y = sY;
    out->z = sZ;
}

#undef BASIS1
#undef BASIS2
#undef BASIS3
#undef BASIS4
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_09/func_8001D754.s")
#endif

// some sort of bezier interpolation
void func_8001D8E0(struct Vec3f *out, struct Vec3f *ctrl, f32 t);
#ifdef NON_MATCHING
#define BASIS1(t) ((1.0f / 6.0f) * (CB(1.0f - t)))
#define BASIS2(t) ((1.0f / 6.0f) * (((3.0f * CB(t)) - (6.0f * SQ(t))) + 4.0f))
#define BASIS3(t) ((1.0f / 6.0f) * ((((SQ(t) - CB(t)) + t) * 3.0f) + 1.0f))
#define BASIS4(t) ((1.0f / 6.0f) * CB(t))

void func_8001D8E0(struct Vec3f *out, struct Vec3f *ctrl, f32 t) {
    f32 b1, b2, b3, b4;

    b4 = BASIS4(t);
    b1 = BASIS1(t);
    b2 = BASIS2(t);
    b3 = BASIS3(t);

    out->x = ctrl[0].x * b1 + ctrl[1].x * b2 + ctrl[2].x * b3 + ctrl[3].x * b4;
    out->y = ctrl[0].y * b1 + ctrl[1].y * b2 + ctrl[2].y * b3 + ctrl[3].y * b4;
    out->z = ctrl[0].z * b1 + ctrl[1].z * b2 + ctrl[2].z * b3 + ctrl[3].z * b4;
}

#undef BASIS1
#undef BASIS2
#undef BASIS3
#undef BASIS4
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_09/func_8001D8E0.s")
#endif

// quadratic bezier with four control points (not three?)
void func_8001DA40(struct Vec3f *out, struct Vec3f *ctrl, f32 t);
#ifdef NON_MATCHING
void func_8001DA40(struct Vec3f *out, struct Vec3f *ctrl, f32 t) {
    f32 tSq;
    f32 mt;
    f32 b2;
    f32 b3;
    f32 b4;
    f32 b1;

    tSq = t * t;
    mt  = 1.0f - t;
    b4  = 0.5f * SQ(t);
    b1  = -0.5f * SQ(1.0f - t);
    b2  = ((3.0f * SQ(t)) - (4.0f * t)) * 0.5f;
    b3  = ((-3.0f * SQ(t)) + (2.0f * t) + 1.0f) * 0.5f;

    out->x = (ctrl[3].x * b4) + ((ctrl[0].x * b1) + (ctrl[1].x * b2) + (ctrl[2].x * b3));
    out->y = (ctrl[3].y * b4) + ((ctrl[0].y * b1) + (ctrl[1].y * b2) + (ctrl[2].y * b3));
    out->z = (ctrl[3].z * b4) + ((ctrl[0].z * b1) + (ctrl[1].z * b2) + (ctrl[2].z * b3));
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_09/func_8001DA40.s")
#endif

// cubic bezier with scale factor of 3?
void func_8001DB74(struct Vec3f *out, struct Vec3f *ctrl, f32 t);
#ifdef NON_MATCHING
void func_8001DB74(struct Vec3f *out, struct Vec3f *ctrl, f32 t) {
    f32 mt;
    f32 tSq;
    f32 b1;
    f32 b2;
    f32 b3;
    f32 b4;

    tSq = SQ(t);
    mt  = 1.0f - t;

    b4 = CB(t);
    b1 = CB(mt);
    b2 = 3.0f * t * CB(mt);
    b3 = 3.0f * tSq * mt;

    out->x = (ctrl[3].x * b4) + ((ctrl[0].x * b1) + (ctrl[1].x * b2) + (ctrl[2].x * b3));
    out->y = (ctrl[3].y * b4) + ((ctrl[0].y * b1) + (ctrl[1].y * b2) + (ctrl[2].y * b3));
    out->z = (ctrl[3].z * b4) + ((ctrl[0].z * b1) + (ctrl[1].z * b2) + (ctrl[2].z * b3));
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_09/func_8001DB74.s")
#endif

// four point quadratic bezier with scale of 3?
void func_8001DC88(struct Vec3f *out, struct Vec3f *ctrl, f32 t);
#ifdef NON_MATCHING
void func_8001DC88(struct Vec3f *out, struct Vec3f *ctrl, f32 t) {
    f32 mt;
    f32 b1;
    f32 b2;
    f32 b3;
    f32 b4;

    mt = t - 1.0f;

    b4 = 3.0f * SQ(t);
    b1 = -3.0f * SQ(mt);
    b2 = ((1.0f - (4.0f * t)) + (3.0f * SQ(t))) * 3.0f;
    b3 = ((2.0f * t) - (3.0f * SQ(t))) * 3.0f;

    out->x = (ctrl[3].x * b4) + ((ctrl[0].x * b1) + (ctrl[1].x * b2) + (ctrl[2].x * b3));
    out->y = (ctrl[3].y * b4) + ((ctrl[0].y * b1) + (ctrl[1].y * b2) + (ctrl[2].y * b3));
    out->z = (ctrl[3].z * b4) + ((ctrl[0].z * b1) + (ctrl[1].z * b2) + (ctrl[2].z * b3));
}

#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_09/func_8001DC88.s")
#endif

// arg1->unk02 is total frames? elapsed frames?
// delta time cubic interpolation?
void func_8001DD94(struct Vec3f *out, struct HalInterpolationParam *params, f32 t) {
    s16 targetFrame; // f10
    struct Vec3f *cur;

    if (!(t < 0.0f) && !(t > 1.0f)) {
        if (t < 1.0f) {
            // convert interval from [0,1] to [0,totalFrames]
            t *= (f32)(params->unk02 - 1);
            targetFrame = t;
            // get only the rounding difference for interpolation?
            t = t - (f32)targetFrame;

            switch (params->kind) {
                case HAL_INTERP_LINEAR:
                    cur    = params->unk08 + targetFrame;
                    out->x = (cur[1].x - cur[0].x) * t + cur[0].x;
                    out->y = (cur[1].y - cur[0].y) * t + cur[0].y;
                    out->z = (cur[1].z - cur[0].z) * t + cur[0].z;

                    break;
                case HAL_INTERP_BEZIER_S3:
                    func_8001DB74(out, params->unk08 + targetFrame * 3, t);
                    break;
                case HAL_INTERP_BEZIER: func_8001D8E0(out, params->unk08 + targetFrame, t); break;
                case HAL_INTERP_CATROM:
                    func_8001D610(out, params->unk08 + targetFrame, params->unk04, t);
                    break;
            }
        } else {
            targetFrame = params->unk02 - 1;

            switch (params->kind) {
                case HAL_INTERP_LINEAR:
                    cur  = &params->unk08[targetFrame];
                    *out = *cur;
                    break;
                case HAL_INTERP_BEZIER_S3:
                    cur  = &params->unk08[targetFrame * 3];
                    *out = *cur;
                    break;
                case HAL_INTERP_BEZIER:
                    func_8001D8E0(out, params->unk08 + (targetFrame - 1), 1.0f);
                    break;
                case HAL_INTERP_CATROM:
                    cur  = &params->unk08[targetFrame + 1];
                    *out = *cur;
                    break;
            }
        }
    }
}

// quadratic interpolation
void func_8001E020(struct Vec3f *out, struct HalInterpolationParam *params, f32 t) {
    s16 targetFrame;
    f32 tOrig;
    struct Vec3f *cur;

    if (!(t < 0.0f) && !(t > 1.0f)) {
        tOrig = t;
        t *= (f32)(params->unk02 - 1);
        targetFrame = t;
        t           = t - (f32)targetFrame;

        switch (params->kind) {
            case HAL_INTERP_LINEAR:
                if (tOrig == 1.0f) { targetFrame -= 1; }
                cur    = params->unk08 + targetFrame;
                out->x = cur[1].x - cur[0].x;
                out->y = cur[1].y - cur[0].y;
                out->z = cur[1].z - cur[0].z;

                break;
            case HAL_INTERP_BEZIER_S3:
                func_8001DC88(out, params->unk08 + targetFrame * 3, t);
                break;
            case HAL_INTERP_BEZIER: func_8001DA40(out, params->unk08 + targetFrame, t); break;
            case HAL_INTERP_CATROM:
                func_8001D754(out, params->unk08 + targetFrame, params->unk04, t);
                break;
        }
    }
}

// sqrt of quartic polynomial of x?
f32 func_8001E1A8(f32 x, f32 *cof) {
    f32 sum;

    sum = cof[0] * BQ(x) + cof[1] * CB(x) + cof[2] * SQ(x) + cof[3] * x + cof[4];

    if ((sum < 0.0f) && (sum > -0.001f)) { sum = 0.0f; }

    return sqrtf(sum);
}

f32 func_8001E240(f32 arg0, f32 arg1, f32 *cof) {
    f32 sp4C; // f24
    f32 f22;
    f32 f20;
    s32 i;

    sp4C = (arg1 - arg0) / 8;
    f22  = 0.0f;
    f20  = arg0 + sp4C;
    for (i = 2; i < 9; i++) {
        if (!(i & 1)) {
            f22 += 4.0f * func_8001E1A8(f20, cof);
        } else {
            f22 += 2.0f * func_8001E1A8(f20, cof);
        }
        f20 += sp4C;
    }

    return ((func_8001E1A8(arg0, cof) + f22 + func_8001E1A8(arg1, cof)) * sp4C) / 3.0f;
}

// something like get arg1 as fractional frames?
f32 func_8001E344(struct HalInterpolationParam *params, f32 arg1) {
    f32 *cur; // v0
    s32 idx;
    f32 f28; // sp5C
    f32 f20;
    f32 min = 0.0f;
    f32 max = 1.0f;
    f32 res;
    f32 diff; // f24

    idx = 0;
    cur = params->unk10;
    while (cur[1] < arg1) {
        idx++;
        cur++;
    }

    switch (params->kind) {
        case HAL_INTERP_LINEAR:
            f28 = (arg1 - params->unk10[idx]) / (params->unk10[idx + 1] - params->unk10[idx]);
            break;
        case HAL_INTERP_BEZIER_S3:
        case HAL_INTERP_BEZIER:
        case HAL_INTERP_CATROM:
            f20 = (arg1 - params->unk10[idx]) * params->unk0C;

            do {
                f28 = (min + max) / 2.0f;
                res = func_8001E240(min, f28, params->unk14 + (idx * 5));

                if (f20 < (res + 0.00001f)) {
                    max = f28;
                } else {
                    min = f28;
                    f20 -= res;
                }

                diff = min < max ? -(min - max) : min - max;

                if (diff < 0.00001f) { break; }

            } while ((res + 0.00001f) < f20 || f20 < (res - 0.00001f));

            break;
    }

    return ((f32)idx + f28) / ((f32)params->unk02 - 1.0f);
}

void hal_interpolation_cubic(struct Vec3f *out, struct HalInterpolationParam *p, f32 t) {
    func_8001DD94(out, p, func_8001E344(p, t));
}

void hal_interpolation_quadratic(struct Vec3f *out, struct HalInterpolationParam *p, f32 t) {
    func_8001E020(out, p, func_8001E344(p, t));
}

#pragma GCC diagnostic pop
