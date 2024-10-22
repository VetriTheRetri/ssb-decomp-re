#ifndef SYS_VEC_H
#define SYS_VEC_H

#include <ssb_types.h>
#include <PR/ultratypes.h>

typedef enum syVectorAxisFlags 
{
    nSYVectorAxisX, 
    nSYVectorAxisY,
    nSYVectorAxisZ,
    nSYVectorInvX,
    nSYVectorInvY,
    nSYVectorInvZ,
    nSYVectorInvSwap
    
} syVectorAxisFlags;

#define SYVECTOR_AXIS_X     (1 << nSYVectorAxisX)
#define SYVECTOR_AXIS_Y     (1 << nSYVectorAxisY)
#define SYVECTOR_AXIS_Z     (1 << nSYVectorAxisZ)
#define SYVECTOR_INV_X      (1 << nSYVectorInvX)
#define SYVECTOR_INV_Y      (1 << nSYVectorInvY)
#define SYVECTOR_INV_Z      (1 << nSYVectorInvZ)
#define SYVECTOR_INV_SWAP   (1 << nSYVectorInvSwap)

extern f32 syVectorNorm3D(Vec3f *dst);
extern f32 syVectorMag3D(Vec3f *src);
extern Vec3f* syVectorAdd3D(Vec3f *dst, Vec3f *add);
extern Vec3f* syVectorSub3D(Vec3f *dst, Vec3f *sub);
extern Vec3f* syVectorDiff3D(Vec3f *dst, Vec3f *src, Vec3f *sub);
extern f32 syVectorNormDiff3D(Vec3f *dst, Vec3f *src, Vec3f *sub);
extern Vec3f* syVectorScale3D(Vec3f *dst, f32 scale);
extern Vec3f* syVectorInv3D(Vec3f *dst, f32 inv);
extern Vec3f* syVectorAddScaled3D(Vec3f *dst, Vec3f *add, f32 scale);
extern f32 syVectorNormScaleAddScaled3D(Vec3f *dst, f32 dst_scale, Vec3f *add, f32 add_scale);
extern f32 syVectorAngleDiff3D(Vec3f *a, Vec3f *b);
extern Vec3f* syVectorRotate3D(Vec3f *dst, s32 axis, f32 angle);
extern Vec3f* syVectorNeg3D(Vec3f *dst);
extern Vec3f* func_80019438(Vec3f*, Vec3f*, f32);
extern Vec3f* syVectorAxisNeg3D(Vec3f *dst, u32 flags);
extern Vec3f* unref_80019608(Vec3f *dst, u32 flags);
extern Vec3f* unref_80019818(Vec3f *a, Vec3f *b);
extern Vec3f* unref_80019888(Vec3f *a, Vec3f *b);
extern s32 syVectorDirection3D(Vec3f *a, Vec3f *b);
extern Vec3f* syVectorNormCross3D(Vec3f *a, Vec3f *b, Vec3f *dst);
extern s32 syVectorDiffDirection3D(Vec3f *sub, Vec3f *a, Vec3f *b);
extern f32 syVectorMagDiff3D(Vec3f *sub, Vec3f *src);
extern f32 unref_80019B00(Vec3f *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3);

#endif /* SYS_VEC_H */
