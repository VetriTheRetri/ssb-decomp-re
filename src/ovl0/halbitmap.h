#ifndef OVL0_HALBITMAP_H
#define OVL0_HALBITMAP_H

#include <PR/ultratypes.h>
#include <ssb_types.h>

extern f32 halMathSin(f32 x);
extern f32 halMathCos(f32 x);
extern f32 halMathTan(f32 angle);
extern f32 halMathNormalize(Vec3f *p);
extern f32 halMathMagnitude(Vec3f *p);
extern Vec3f* halMathVectorAdd(Vec3f *dst, const Vec3f *p);
extern Vec3f* halMathScaleVector(Vec3f *dst, f32 scale);
extern Vec3f* func_ovl0_800C7B08(Vec3f *dst, const Vec3f *p);
extern f32 halMathVector3Similarity(Vec3f *a, Vec3f *b);
extern f32 halMathVector2Similarity(Vec3f*, Vec3f*);
extern void* func_ovl0_800CE8C0(s32, s32, f32, f32, f32, f32, f32, f32);

#endif /* OVL0_HALBITMAP_H */
