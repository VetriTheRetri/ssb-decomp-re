#ifndef SYS_VEC_H
#define SYS_VEC_H

#include <ssb_types.h>
#include <PR/ultratypes.h>

enum VectorAxisFlags { AXIS_X = 1 << 0, AXIS_Y = 1 << 1, AXIS_Z = 1 << 2 };

extern f32 lbVector_Vec3fNormalize(Vec3f *v);
extern f32 lbVector_Vec3fMagnitude(const Vec3f *v);
extern Vec3f *lbVector_Vec3fAddTo(Vec3f *dst, const Vec3f *addend);
extern Vec3f *lbVector_Vec3fSubtractFrom(Vec3f *dst, const Vec3f *subtrahend);
extern Vec3f *
lbVector_Vec3fSubtract(Vec3f *difference, const Vec3f *minuend, const Vec3f *subtrahend);
extern void lbVector_Vec3fSubtractNormalize(
    Vec3f *difference,
    const Vec3f *minuend,
    const Vec3f *subtrahend);
extern Vec3f *lbVector_Vec3fScale(Vec3f *v, f32 scale);
extern Vec3f *lbVector_Vec3fDivideScale(Vec3f *v, f32 invScale);
extern Vec3f *lbVector_Vec3fAddScaled(Vec3f *dst, const Vec3f *addend, f32 scale);
extern void lbVector_Vec3fScaleAddScaledNormalize(
    Vec3f *dst,
    f32 dstScale,
    const Vec3f *addend,
    f32 addendScale);
extern f32 lbVector_Vec3fAngleDiff(Vec3f *v1, Vec3f *v2);
extern Vec3f *lbVector_Vec3fGetEulerRotation(Vec3f *v, enum VectorAxisFlags axis, f32 angle);
extern Vec3f *lbVector_Vec3fNegate(Vec3f *v);
extern Vec3f *func_80019438(Vec3f *, Vec3f *, f32);
extern Vec3f *lbVector_Vec3fNegateByAxis(Vec3f *v, enum VectorAxisFlags flag);
extern Vec3f *unref_80019608(Vec3f *v, u32 flags);
extern Vec3f *unref_80019818(Vec3f *v1, const Vec3f *v2);
extern Vec3f *unref_80019888(Vec3f *v1, const Vec3f *v2);
extern s32 lbVector_Vec3fCompareDirection(Vec3f *v1, Vec3f *v2);
extern Vec3f *
lbVector_Vec3fNormalizedCross(Vec3f *v0, Vec3f *v1, Vec3f *result);
extern s32 lbVector_Vec3fSubtractCompareDirection(Vec3f *v0, Vec3f *v1, Vec3f *v2);
extern f32 lbVector_Vec3fDiffMagnitude(Vec3f *v0, Vec3f *v1);
extern f32
unref_80019B00(Vec3f *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3);

#endif /* SYS_VEC_H */
