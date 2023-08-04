#ifndef SYS_VEC_H
#define SYS_VEC_H

#include <ssb_types.h>

#include <PR/ultratypes.h>

enum VectorAxisFlags { AXIS_X = 1 << 0, AXIS_Y = 1 << 1, AXIS_Z = 1 << 2 };

extern f32 vec3f_normalize(struct Vec3f *v);
extern f32 vec3f_mag(const struct Vec3f *v);
extern struct Vec3f *vec3f_add_to(struct Vec3f *dst, const struct Vec3f *addend);
extern struct Vec3f *vec3f_sub_from(struct Vec3f *dst, const struct Vec3f *subtrahend);
extern struct Vec3f *
vec3f_sub(struct Vec3f *difference, const struct Vec3f *minuend, const struct Vec3f *subtrahend);
extern void vec3f_sub_normalize(
    struct Vec3f *difference,
    const struct Vec3f *minuend,
    const struct Vec3f *subtrahend);
extern struct Vec3f *vec3f_scale(struct Vec3f *v, f32 scale);
extern struct Vec3f *vec3f_div_scale(struct Vec3f *v, f32 invScale);
extern struct Vec3f *vec3f_add_scaled(struct Vec3f *dst, const struct Vec3f *addend, f32 scale);
extern void vec3f_scale_add_scaled_normalize(
    struct Vec3f *dst,
    f32 dstScale,
    const struct Vec3f *addend,
    f32 addendScale);
extern f32 vec3f_angle_diff(struct Vec3f *v1, struct Vec3f *v2);
extern struct Vec3f *vec3_get_euler_rotation(struct Vec3f *v, enum VectorAxisFlags axis, f32 angle);
extern struct Vec3f *vec3f_negate(struct Vec3f *v);
extern struct Vec3f *func_80019438(struct Vec3f *, struct Vec3f *, f32);
extern struct Vec3f *vec3_negate_by_axis(struct Vec3f *v, enum VectorAxisFlags flag);
extern struct Vec3f *unref_80019608(struct Vec3f *v, u32 flags);
extern struct Vec3f *unref_80019818(struct Vec3f *v1, const struct Vec3f *v2);
extern struct Vec3f *unref_80019888(struct Vec3f *v1, const struct Vec3f *v2);
extern s32 vec3f_compare_directions(struct Vec3f *v1, struct Vec3f *v2);
extern struct Vec3f *
vec3f_normalized_cross_product(struct Vec3f *v0, struct Vec3f *v1, struct Vec3f *result);
extern s32 vec3f_subtract_compare_directions(struct Vec3f *v0, struct Vec3f *v1, struct Vec3f *v2);
extern f32 vec3f_diff_mag(struct Vec3f *v0, struct Vec3f *v1);
extern f32
unref_80019B00(struct Vec3f *arg0, struct Vec3f *arg1, struct Vec3f *arg2, struct Vec3f *arg3);

#endif /* SYS_VEC_H */
