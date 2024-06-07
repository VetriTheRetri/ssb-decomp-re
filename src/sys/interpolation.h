#ifndef SYS_INTERPOLATION_H
#define SYS_INTERPOLATION_H

#include <ssb_types.h>

#include <PR/ultratypes.h>

struct HalInterpolationParam {
    /* 0x00 */ u8 kind;
    /* 0x01 align pad */
    /* 0x02 */ s16 unk02;           // total frames?
    /* 0x04 */ f32 unk04;           // CR scale? count?
    /* 0x08 */ struct Vec3f *unk08; // control points?
    /* 0x0C */ f32 unk0C;
    /* 0x10 */ f32 *unk10; // maybe keyframes as fraction t?
    /* 0x14 */ f32 *unk14; // quartic coef
};

enum HalInterpolationKind {
    HAL_INTERP_LINEAR,
    HAL_INTERP_BEZIER_S3,
    HAL_INTERP_BEZIER,
    HAL_INTERP_CATROM
};

extern void hal_interpolation_cubic(struct Vec3f *out, struct HalInterpolationParam *p, f32 t);
extern void hal_interpolation_quadratic(struct Vec3f *out, struct HalInterpolationParam *p, f32 t);

#endif /* SYS_INTERPOLATION_H */
