#ifndef OVL0_HALBITMAP_H
#define OVL0_HALBITMAP_H

#include <PR/ultratypes.h>
#include <ssb_types.h>

extern f32 lbCommonSin(f32 x);
extern f32 lbCommonCos(f32 x);
extern f32 lbCommonTan(f32 angle);
extern f32 lbCommonNormDist2D(Vec3f *p);
extern f32 lbCommonMag2D(Vec3f *p);
extern Vec3f* lbCommonAdd2D(Vec3f *dst, Vec3f *p);
extern Vec3f* lbCommonScale2D(Vec3f *dst, f32 scale);
extern Vec3f* lbCommonReflect2D(Vec3f *dst, Vec3f *p);
extern f32 lbCommonSim3D(Vec3f *a, Vec3f *b);
extern f32 lbCommonSim2D(Vec3f*, Vec3f*);
extern void* func_ovl0_800CE8C0(s32, s32, f32, f32, f32, f32, f32, f32);

#endif /* OVL0_HALBITMAP_H */
