#ifndef OVL0_HALBITMAP_H
#define OVL0_HALBITMAP_H

#include <PR/ultratypes.h>
#include <ssb_types.h>

extern f32 bitmap_sinf(f32 x);
extern f32 bitmap_cosf(f32 x);
extern f32 func_ovl0_800C793C(f32 angle);
extern f32 func_ovl0_800C7A00(Vec3f *p);
extern f32 func_ovl0_800C7A84(Vec3f *p);
extern Vec3f* func_ovl0_800C7AB8(Vec3f *dst, const Vec3f *p);
extern Vec3f* func_ovl0_800C7AE0(Vec3f *dst, f32 scale);
extern Vec3f* func_ovl0_800C7B08(Vec3f *dst, const Vec3f *p);
extern f32 func_ovl0_800C7B58(Vec3f *a, Vec3f *b);
extern f32 func_ovl0_800C7C0C(Vec3f*, Vec3f*);
extern void* func_ovl0_800CE8C0(s32, s32, f32, f32, f32, f32, f32, f32);

#endif /* OVL0_HALBITMAP_H */
