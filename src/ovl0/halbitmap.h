#ifndef OVL0_HALBITMAP_H
#define OVL0_HALBITMAP_H

#include <PR/ultratypes.h>
#include <ssb_types.h>

extern f32 lbMathSin(f32 x);
extern f32 lbMathCos(f32 x);
extern f32 lbMathTan(f32 angle);
extern f32 lbMathNormDist2D(Vec3f *p);
extern f32 lbMathMag2D(Vec3f *p);
extern Vec3f* lbMathAdd2D(Vec3f *dst, const Vec3f *p);
extern Vec3f* lbMathScale2D(Vec3f *dst, f32 scale);
extern Vec3f* lbMathReflect2D(Vec3f *dst, const Vec3f *p);
extern f32 lbMathSim3D(Vec3f *a, Vec3f *b);
extern f32 lbMathSim2D(Vec3f*, Vec3f*);
extern void* func_ovl0_800CE8C0(s32, s32, f32, f32, f32, f32, f32, f32);

#endif /* OVL0_HALBITMAP_H */
