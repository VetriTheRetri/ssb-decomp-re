#ifndef SYS_SYSTEM_08_H
#define SYS_SYSTEM_08_H

#include <macros.h>
#include <ssb_types.h>

#include <PR/mbi.h>
#include <PR/ultratypes.h>

typedef union gsMtxStore
{
    Mtx *gbi;
    Mtx44f *f;

} gsMtxStore;

#define RAD_TO_IDX(x)      ((s32)((x) * ((f32)ARRAY_COUNT(gSinTable) / M_PI_F)))
#define SIN_TABLE_IDX_MASK (ARRAY_COUNT(gSinTable) - 1)

extern u16 gSinTable[0x800];

// might take another pointer type for a1 (to convert to RSP matrix?)
// convert from mtx4f to gbi Mtx
extern void syMatrixF2L(Mtx44f *src, Mtx *dst);
extern void syMatrixF2LFixedW(Mtx44f *src, Mtx *dst);
extern void syMatrixLookAtF(
    Mtx44f *mf,
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
extern void syMatrixModLookAtF(
    Mtx44f *mf,
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
    Mtx44f *mf,
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
extern void syMatrixModLookAtReflectF(
    Mtx44f *mf,
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
extern void syMatrixOrthoF(Mtx44f *mf, f32 l, f32 r, f32 b, f32 t, f32 n, f32 f, f32 scale);
extern void syMatrixOrtho(Mtx *m, f32 l, f32 r, f32 b, f32 t, f32 n, f32 f, f32 scale);
extern void syMatrixPerspFastF(
    Mtx44f mf,
    u16 *perspNorm,
    f32 fovy,
    f32 aspect,
    f32 near,
    f32 far,
    f32 scale);
extern void
syMatrixPerspFast(Mtx *m, u16 *perspNorm, f32 fovy, f32 aspect, f32 near, f32 far, f32 scale);
extern void
syMatrixPerspF(Mtx44f mf, u16 *perspNorm, f32 fovy, f32 aspect, f32 near, f32 far, f32 scale);
extern void
syMatrixPersp(Mtx *m, u16 *perspNorm, f32 fovy, f32 aspect, f32 near, f32 far, f32 scale);
extern void syMatrixScaF(Mtx44f *mf, f32 x, f32 y, f32 z);
extern void syMatrixSca(Mtx *m, f32 x, f32 y, f32 z);
extern void syMatrixTraF(Mtx44f *mf, f32 x, f32 y, f32 z);
extern void syMatrixTranslate(Mtx *m, f32 x, f32 y, f32 z);
extern void syMatrixRotRF(Mtx44f *mf, f32 a, f32 x, f32 y, f32 z);
extern void syMatrixRotR(Mtx *m, f32 a, f32 x, f32 y, f32 z);
extern void
syMatrixTraRotRF(Mtx44f *mf, f32 dx, f32 dy, f32 dz, f32 angle, f32 rx, f32 ry, f32 rz);
extern void syMatrixTraRotR(Mtx *m, f32 dx, f32 dy, f32 dz, f32 angle, f32 rx, f32 ry, f32 rz);
extern void syMatrixTraRotRScaF(
    Mtx44f *mf,
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
extern void syMatrixTraRotRSca(
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
extern void syMatrixRotRpyRF(Mtx44f *mf, f32 r, f32 p, f32 h);
extern void syMatrixRotRpyR(Mtx *m, f32 r, f32 p, f32 h);
extern void syMatrixTraRotRpyRF(Mtx44f *mf, f32 dx, f32 dy, f32 dz, f32 r, f32 p, f32 h);
extern void syMatrixTraRotRpyR(Mtx *m, f32 dx, f32 dy, f32 dz, f32 r, f32 p, f32 h);
extern void syMatrixTraRotRpyRScaF(
    Mtx44f *mf,
    f32 dx,
    f32 dy,
    f32 dz,
    f32 r,
    f32 p,
    f32 h,
    f32 sx,
    f32 sy,
    f32 sz);
extern void syMatrixTraRotRpyRSca(
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
extern void syMatrixRotPyrRF(Mtx44f *mf, f32 r, f32 p, f32 h);
extern void syMatrixRotPyrR(Mtx *m, f32 r, f32 p, f32 h);
extern void syMatrixTraRotPyrRF(Mtx44f *mf, f32 dx, f32 dy, f32 dz, f32 r, f32 p, f32 h);
extern void syMatrixTraRotPyrR(Mtx *m, f32 dx, f32 dy, f32 dz, f32 r, f32 p, f32 h);
extern void syMatrixTraRotPyrRScaF(
    Mtx44f *mf,
    f32 dx,
    f32 dy,
    f32 dz,
    f32 r,
    f32 p,
    f32 h,
    f32 sx,
    f32 sy,
    f32 sz);
extern void syMatrixTraRotPyrRSca(
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
extern void syMatrixRotPyRF(Mtx44f *mf, f32 p, f32 h);
extern void syMatrixRotPyR(Mtx *m, f32 p, f32 h);
extern void syMatrixTraRotPyRF(Mtx44f *mf, f32 dx, f32 dy, f32 dz, f32 p, f32 h);
extern void syMatrixTraRotPyR(Mtx *m, f32 dx, f32 dy, f32 dz, f32 p, f32 h);
extern void syMatrixRotRpRF(Mtx44f *mf, f32 r, f32 p);
extern void syMatrixRotRpR(Mtx *m, f32 p, f32 h);
extern void syMatrixTraRotRpRF(Mtx44f *mf, f32 dx, f32 dy, f32 dz, f32 r, f32 p);
extern void syMatrixTraRotRpR(Mtx *m, f32 dx, f32 dy, f32 dz, f32 r, f32 p);
extern void syMatrixRotYawRF(Mtx44f *mf, f32 h);
extern void syMatrixRotYawR(Mtx *m, f32 h);
extern void syMatrixTraRotYawRF(Mtx44f *mf, f32 dx, f32 dy, f32 dz, f32 h);
extern void syMatrixTraRotYawR(Mtx *m, f32 dx, f32 dy, f32 dz, f32 h);
extern void syMatrixRotPitchRF(Mtx44f *mf, f32 p);
extern void syMatrixRotPitchR(Mtx *m, f32 p);
extern void syMatrixTraRotPitchRF(Mtx44f *mf, f32 dx, f32 dy, f32 dz, f32 p);
extern void syMatrixTraRotPitchR(Mtx *m, f32 dx, f32 dy, f32 dz, f32 p);
extern void syMatrixRotDF(Mtx44f *mf, f32 a, f32 x, f32 y, f32 z);
extern void syMatrixRotD(Mtx *m, f32 a, f32 x, f32 y, f32 z);
extern void
syMatrixTraRotDF(Mtx44f *mf, f32 dx, f32 dy, f32 dz, f32 a, f32 rx, f32 ry, f32 rz);
extern void
syMatrixTraRotD(Mtx *m, f32 dx, f32 dy, f32 dz, f32 a, f32 rx, f32 ry, f32 rz);
extern void syMatrixRotRpyDF(Mtx44f *mf, f32 r, f32 p, f32 h);
extern void syMatrixRotRpyD(Mtx *m, f32 r, f32 p, f32 h);
extern void
syMatrixTraRotRpyDF(Mtx44f *mf, f32 dx, f32 dy, f32 dz, f32 r, f32 p, f32 h);
extern void syMatrixTraRotRpyD(Mtx *m, f32 dx, f32 dy, f32 dz, f32 r, f32 p, f32 h);

#endif /* SYS_SYSTEM_08_H */
