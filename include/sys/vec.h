#ifndef SYS_VEC_H
#define SYS_VEC_H

#include <ssb_types.h>

#include <PR/ultratypes.h>

enum VectorAxisFlags
{
	AXIS_X = 1 << 0,
	AXIS_Y = 1 << 1,
	AXIS_Z = 1 << 2
};

extern f32 lbVector_Vec3fNormalize(struct Vec3f* v);
extern f32 lbVector_Vec3fMagnitude(const struct Vec3f* v);
extern struct Vec3f* lbVector_Vec3fAddTo(struct Vec3f* dst, const struct Vec3f* addend);
extern struct Vec3f* lbVector_Vec3fSubtractFrom(struct Vec3f* dst, const struct Vec3f* subtrahend);
extern struct Vec3f*
lbVector_Vec3fSubtract(struct Vec3f* difference, const struct Vec3f* minuend, const struct Vec3f* subtrahend);
extern void
lbVector_Vec3fSubtractNormalize(struct Vec3f* difference, const struct Vec3f* minuend, const struct Vec3f* subtrahend);
extern struct Vec3f* lbVector_Vec3fScale(struct Vec3f* v, f32 scale);
extern struct Vec3f* lbVector_Vec3fDivideScale(struct Vec3f* v, f32 invScale);
extern struct Vec3f* lbVector_Vec3fAddScaled(struct Vec3f* dst, const struct Vec3f* addend, f32 scale);
extern void
lbVector_Vec3fScaleAddScaledNormalize(struct Vec3f* dst, f32 dstScale, const struct Vec3f* addend, f32 addendScale);
extern f32 lbVector_Vec3fAngleDiff(struct Vec3f* v1, struct Vec3f* v2);
extern struct Vec3f* lbVector_Vec3fGetEulerRotation(struct Vec3f* v, enum VectorAxisFlags axis, f32 angle);
extern struct Vec3f* lbVector_Vec3fNegate(struct Vec3f* v);
extern struct Vec3f* func_80019438(struct Vec3f*, struct Vec3f*, f32);
extern struct Vec3f* lbVector_Vec3fNegateByAxis(struct Vec3f* v, enum VectorAxisFlags flag);
extern struct Vec3f* unref_80019608(struct Vec3f* v, u32 flags);
extern struct Vec3f* unref_80019818(struct Vec3f* v1, const struct Vec3f* v2);
extern struct Vec3f* unref_80019888(struct Vec3f* v1, const struct Vec3f* v2);
extern s32 lbVector_Vec3fCompareDirection(struct Vec3f* v1, struct Vec3f* v2);
extern struct Vec3f* lbVector_Vec3fNormalizedCross(struct Vec3f* v0, struct Vec3f* v1, struct Vec3f* result);
extern s32 lbVector_Vec3fSubtractCompareDirection(struct Vec3f* v0, struct Vec3f* v1, struct Vec3f* v2);
extern f32 lbVector_Vec3fDiffMagnitude(struct Vec3f* v0, struct Vec3f* v1);
extern f32 unref_80019B00(struct Vec3f* arg0, struct Vec3f* arg1, struct Vec3f* arg2, struct Vec3f* arg3);

#endif /* SYS_VEC_H */
