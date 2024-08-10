#ifndef SYS_SYSTEM_08_H
#define SYS_SYSTEM_08_H

#include <macros.h>
#include <ssb_types.h>

#include <PR/mbi.h>
#include <PR/ultratypes.h>

typedef union gsMtxStore
{
    Mtx *gbi;
    Mtx4f *f;

} gsMtxStore;

#define RAD_TO_IDX(x)      ((s32)((x) * ((f32)ARRAY_COUNT(gSinTable) / M_PI_F)))
#define SIN_TABLE_IDX_MASK (ARRAY_COUNT(gSinTable) - 1)

extern u16 gSinTable[0x800];

// might take another pointer type for a1 (to convert to RSP matrix?)
// convert from mtx4f to gbi Mtx
extern void syMatrixF2L(Mtx4f *src, Mtx *dst);
extern void syMatrixF2LFixedW(Mtx4f *src, Mtx *dst);
extern void syMatrixLookAtF(
    Mtx4f *mf,
    f32 xEye,
    f32 yEye,
    f32 zEye,
    f32 xAt,
    f32 yAt,
    f32 zAt,
    f32 xUp,
    f32 yUp,
    f32 zUp);
extern void syMatrixLookAt(
    Mtx *m,
    f32 xEye,
    f32 yEye,
    f32 zEye,
    f32 xAt,
    f32 yAt,
    f32 zAt,
    f32 xUp,
    f32 yUp,
    f32 zUp);
extern void syMatrixModLookAt_f(
    Mtx4f *mf,
    f32 xEye,
    f32 yEye,
    f32 zEye,
    f32 xAt,
    f32 yAt,
    f32 zAt,
    f32 arg7,
    f32 xUp,
    f32 yUp,
    f32 zUp);
extern void syMatrixModLookAt(
    Mtx *m,
    f32 xEye,
    f32 yEye,
    f32 zEye,
    f32 xAt,
    f32 yAt,
    f32 zAt,
    f32 arg7,
    f32 xUp,
    f32 yUp,
    f32 zUp);
extern void syMatrixLookAtReflectF(
    Mtx4f *mf,
    LookAt *l,
    f32 xEye,
    f32 yEye,
    f32 zEye,
    f32 xAt,
    f32 yAt,
    f32 zAt,
    f32 xUp,
    f32 yUp,
    f32 zUp);
extern void syMatrixLookAtReflect(
    Mtx *m,
    LookAt *l,
    f32 xEye,
    f32 yEye,
    f32 zEye,
    f32 xAt,
    f32 yAt,
    f32 zAt,
    f32 xUp,
    f32 yUp,
    f32 zUp);
extern void syMatrixModLookAtReflect_f(
    Mtx4f *mf,
    LookAt *l,
    f32 xEye,
    f32 yEye,
    f32 zEye,
    f32 xAt,
    f32 yAt,
    f32 zAt,
    f32 arg8,
    f32 xUp,
    f32 yUp,
    f32 zUp);
extern void syMatrixModLookAtReflect(
    Mtx *m,
    LookAt *l,
    f32 xEye,
    f32 yEye,
    f32 zEye,
    f32 xAt,
    f32 yAt,
    f32 zAt,
    f32 arg8,
    f32 xUp,
    f32 yUp,
    f32 zUp);
extern void syMatrixOrthoF(Mtx4f *mf, f32 l, f32 r, f32 b, f32 t, f32 n, f32 f, f32 scale);
extern void syMatrixOrtho(Mtx *m, f32 l, f32 r, f32 b, f32 t, f32 n, f32 f, f32 scale);
extern void syMatrixPerspFastF(
    Mtx4f *mf,
    u16 *perspNorm,
    f32 fovy,
    f32 aspect,
    f32 near,
    f32 far,
    f32 scale);
extern void
syMatrixPerspFast(Mtx *m, u16 *perspNorm, f32 fovy, f32 aspect, f32 near, f32 far, f32 scale);
extern void
syMatrixPerspF(Mtx4f *mf, u16 *perspNorm, f32 fovy, f32 aspect, f32 near, f32 far, f32 scale);
extern void
hal_perspective(Mtx *m, u16 *perspNorm, f32 fovy, f32 aspect, f32 near, f32 far, f32 scale);
extern void syMatrixScaleF(Mtx4f *mf, f32 x, f32 y, f32 z);
extern void syMatrixScale(Mtx *m, f32 x, f32 y, f32 z);
extern void syMatrixTranslate_f(Mtx4f *mf, f32 x, f32 y, f32 z);
extern void syMatrixTranslate(Mtx *m, f32 x, f32 y, f32 z);
extern void hal_rotate_f(Mtx4f *mf, f32 a, f32 x, f32 y, f32 z);
extern void hal_rotate(Mtx *m, f32 a, f32 x, f32 y, f32 z);
extern void
hal_rotate_translate_f(Mtx4f *mf, f32 dx, f32 dy, f32 dz, f32 angle, f32 rx, f32 ry, f32 rz);
extern void hal_rotate_translate(Mtx *m, f32 dx, f32 dy, f32 dz, f32 angle, f32 rx, f32 ry, f32 rz);
extern void hal_rotate_translate_rowscale_f(
    Mtx4f *mf,
    f32 dx,
    f32 dy,
    f32 dz,
    f32 angle,
    f32 rx,
    f32 ry,
    f32 rz,
    f32 sx,
    f32 sy,
    f32 sz);
extern void hal_rotate_translate_rowscale(
    Mtx *m,
    f32 dx,
    f32 dy,
    f32 dz,
    f32 angle,
    f32 rx,
    f32 ry,
    f32 rz,
    f32 sx,
    f32 sy,
    f32 sz);
extern void hal_rotate_rpy_f(Mtx4f *mf, f32 r, f32 p, f32 h);
extern void hal_rotate_rpy(Mtx *m, f32 r, f32 p, f32 h);
extern void hal_rotate_rpy_translate_f(Mtx4f *mf, f32 dx, f32 dy, f32 dz, f32 r, f32 p, f32 h);
extern void hal_rotate_rpy_translate(Mtx *m, f32 dx, f32 dy, f32 dz, f32 r, f32 p, f32 h);
extern void hal_rotate_rpy_translate_scale_f(
    Mtx4f *mf,
    f32 dx,
    f32 dy,
    f32 dz,
    f32 r,
    f32 p,
    f32 h,
    f32 sx,
    f32 sy,
    f32 sz);
extern void hal_rotate_rpy_translate_scale(
    Mtx *m,
    f32 dx,
    f32 dy,
    f32 dz,
    f32 r,
    f32 p,
    f32 h,
    f32 sx,
    f32 sy,
    f32 sz);
extern void hal_rotate_pyr_f(Mtx4f *mf, f32 r, f32 p, f32 h);
extern void hal_rotate_pyr(Mtx *m, f32 r, f32 p, f32 h);
extern void hal_rotate_pyr_translate_f(Mtx4f *mf, f32 dx, f32 dy, f32 dz, f32 r, f32 p, f32 h);
extern void hal_rotate_pyr_translate(Mtx *m, f32 dx, f32 dy, f32 dz, f32 r, f32 p, f32 h);
extern void hal_rotate_pyr_translate_scale_f(
    Mtx4f *mf,
    f32 dx,
    f32 dy,
    f32 dz,
    f32 r,
    f32 p,
    f32 h,
    f32 sx,
    f32 sy,
    f32 sz);
extern void hal_rotate_pyr_translate_scale(
    Mtx *m,
    f32 dx,
    f32 dy,
    f32 dz,
    f32 r,
    f32 p,
    f32 h,
    f32 sx,
    f32 sy,
    f32 sz);
extern void hal_rotate_py_f(Mtx4f *mf, f32 p, f32 h);
extern void hal_rotate_py(Mtx *m, f32 p, f32 h);
extern void hal_rotate_py_translate_f(Mtx4f *mf, f32 dx, f32 dy, f32 dz, f32 p, f32 h);
extern void hal_rotate_py_translate(Mtx *m, f32 dx, f32 dy, f32 dz, f32 p, f32 h);
extern void hal_rotate_rp_f(Mtx4f *mf, f32 r, f32 p);
extern void hal_rotate_rp(Mtx *m, f32 p, f32 h);
extern void hal_rotate_rp_translate_f(Mtx4f *mf, f32 dx, f32 dy, f32 dz, f32 r, f32 p);
extern void hal_rotate_rp_translate(Mtx *m, f32 dx, f32 dy, f32 dz, f32 r, f32 p);
extern void hal_rotate_yaw_f(Mtx4f *mf, f32 h);
extern void hal_rotate_yaw(Mtx *m, f32 h);
extern void hal_rotate_yaw_translate_f(Mtx4f *mf, f32 dx, f32 dy, f32 dz, f32 h);
extern void hal_rotate_yaw_translate(Mtx *m, f32 dx, f32 dy, f32 dz, f32 h);
extern void hal_rotate_pitch_f(Mtx4f *mf, f32 p);
extern void hal_rotate_pitch(Mtx *m, f32 p);
extern void hal_rotate_pitch_translate_f(Mtx4f *mf, f32 dx, f32 dy, f32 dz, f32 p);
extern void hal_rotate_pitch_translate(Mtx *m, f32 dx, f32 dy, f32 dz, f32 p);
extern void hal_rotate_f_degrees(Mtx4f *mf, f32 a, f32 x, f32 y, f32 z);
extern void hal_rotate_degrees(Mtx *m, f32 a, f32 x, f32 y, f32 z);
extern void
hal_rotate_translate_f_degrees(Mtx4f *mf, f32 dx, f32 dy, f32 dz, f32 a, f32 rx, f32 ry, f32 rz);
extern void
hal_rotate_translate_degrees(Mtx *m, f32 dx, f32 dy, f32 dz, f32 a, f32 rx, f32 ry, f32 rz);
extern void hal_rotate_rpy_f_degrees(Mtx4f *mf, f32 r, f32 p, f32 h);
extern void hal_rotate_rpy_degrees(Mtx *m, f32 r, f32 p, f32 h);
extern void
hal_rotate_rpy_translate_f_degrees(Mtx4f *mf, f32 dx, f32 dy, f32 dz, f32 r, f32 p, f32 h);
extern void hal_rotate_rpy_translate_degrees(Mtx *m, f32 dx, f32 dy, f32 dz, f32 r, f32 p, f32 h);

#endif /* SYS_SYSTEM_08_H */
