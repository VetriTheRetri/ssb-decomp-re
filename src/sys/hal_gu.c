#include "common.h"

#include "hal_gu.h"

#include <sys/vector.h>

#include <macros.h>
#include <ssb_types.h>

#include <PR/gu.h>
#include <PR/mbi.h>
#include <PR/ultratypes.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

void syMatrixF2L(Mtx4f *src, Mtx *dst)
{
    u32 e1, e2;

    e1           = FTOFIX32((*src)[0][0]);
    e2           = FTOFIX32((*src)[0][1]);
    dst->m[0][0] = COMBINE_INTEGRAL(e1, e2);
    dst->m[2][0] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[0][2]);
    e2           = FTOFIX32((*src)[0][3]);
    dst->m[0][1] = COMBINE_INTEGRAL(e1, e2);
    dst->m[2][1] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[1][0]);
    e2           = FTOFIX32((*src)[1][1]);
    dst->m[0][2] = COMBINE_INTEGRAL(e1, e2);
    dst->m[2][2] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[1][2]);
    e2           = FTOFIX32((*src)[1][3]);
    dst->m[0][3] = COMBINE_INTEGRAL(e1, e2);
    dst->m[2][3] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[2][0]);
    e2           = FTOFIX32((*src)[2][1]);
    dst->m[1][0] = COMBINE_INTEGRAL(e1, e2);
    dst->m[3][0] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[2][2]);
    e2           = FTOFIX32((*src)[2][3]);
    dst->m[1][1] = COMBINE_INTEGRAL(e1, e2);
    dst->m[3][1] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[3][0]);
    e2           = FTOFIX32((*src)[3][1]);
    dst->m[1][2] = COMBINE_INTEGRAL(e1, e2);
    dst->m[3][2] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[3][2]);
    e2           = FTOFIX32((*src)[3][3]);
    dst->m[1][3] = COMBINE_INTEGRAL(e1, e2);
    dst->m[3][3] = COMBINE_FRACTIONAL(e1, e2);
}

// Same as above, but assumes column 3 is (0, 0, 0, 1)
void syMatrixF2LFixedW(Mtx4f *src, Mtx *dst) 
{
    u32 e1, e2;

    e1           = FTOFIX32((*src)[0][0]);
    e2           = FTOFIX32((*src)[0][1]);
    dst->m[0][0] = COMBINE_INTEGRAL(e1, e2);
    dst->m[2][0] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[0][2]);
    e2           = FTOFIX32(0.0f);
    dst->m[0][1] = COMBINE_INTEGRAL(e1, e2);
    dst->m[2][1] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[1][0]);
    e2           = FTOFIX32((*src)[1][1]);
    dst->m[0][2] = COMBINE_INTEGRAL(e1, e2);
    dst->m[2][2] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[1][2]);
    e2           = FTOFIX32(0.0f);
    dst->m[0][3] = COMBINE_INTEGRAL(e1, e2);
    dst->m[2][3] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[2][0]);
    e2           = FTOFIX32((*src)[2][1]);
    dst->m[1][0] = COMBINE_INTEGRAL(e1, e2);
    dst->m[3][0] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[2][2]);
    e2           = FTOFIX32(0.0f);
    dst->m[1][1] = COMBINE_INTEGRAL(e1, e2);
    dst->m[3][1] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[3][0]);
    e2           = FTOFIX32((*src)[3][1]);
    dst->m[1][2] = COMBINE_INTEGRAL(e1, e2);
    dst->m[3][2] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[3][2]);
    e2           = FTOFIX32(1.0f);
    dst->m[1][3] = COMBINE_INTEGRAL(e1, e2);
    dst->m[3][3] = COMBINE_FRACTIONAL(e1, e2);
}

s32 fast_sinf(f32 x) 
{
    s32 idx = RAD_TO_IDX(x);
    u16 sinx = gSinTable[idx & (ARRAY_COUNT(gSinTable) - 1)];

    if ((idx & 0x800) != 0)
    {
        return -sinx;
    }
    return sinx;
}

s32 fast___cosf(f32 x)
{
    s32 idx = RAD_TO_IDX(x + (M_PI_F / 2.0F));
    u16 cosx = gSinTable[idx & (ARRAY_COUNT(gSinTable) - 1)];
    
    if ((idx & 0x800) != 0)
    { 
        return -cosx;
    }
    return cosx;
}

// As noticed in Kirby64 decomp, these functions are copies from libultra, but
// with explicit float constants and other slight modifications.

void syMatrixLookAtF(
    Mtx4f *mf,
    f32 xEye,
    f32 yEye,
    f32 zEye,
    f32 xAt,
    f32 yAt,
    f32 zAt,
    f32 xUp,
    f32 yUp,
    f32 zUp) {
    f32 len, xLook, yLook, zLook, xRight, yRight, zRight;

    xLook = xAt - xEye;
    yLook = yAt - yEye;
    zLook = zAt - zEye;

    /* Negate because positive Z is behind us: */
    len = -1.0f / sqrtf(xLook * xLook + yLook * yLook + zLook * zLook);
    xLook *= len;
    yLook *= len;
    zLook *= len;

    /* Right = Up x Look */

    xRight = yUp * zLook - zUp * yLook;
    yRight = zUp * xLook - xUp * zLook;
    zRight = xUp * yLook - yUp * xLook;
    len    = 1.0f / sqrtf(xRight * xRight + yRight * yRight + zRight * zRight);
    xRight *= len;
    yRight *= len;
    zRight *= len;

    /* Up = Look x Right */

    xUp = yLook * zRight - zLook * yRight;
    yUp = zLook * xRight - xLook * zRight;
    zUp = xLook * yRight - yLook * xRight;
    len = 1.0f / sqrtf(xUp * xUp + yUp * yUp + zUp * zUp);
    xUp *= len;
    yUp *= len;
    zUp *= len;

    (*mf)[0][0] = xRight;
    (*mf)[1][0] = yRight;
    (*mf)[2][0] = zRight;
    (*mf)[3][0] = -(xEye * xRight + yEye * yRight + zEye * zRight);

    (*mf)[0][1] = xUp;
    (*mf)[1][1] = yUp;
    (*mf)[2][1] = zUp;
    (*mf)[3][1] = -(xEye * xUp + yEye * yUp + zEye * zUp);

    (*mf)[0][2] = xLook;
    (*mf)[1][2] = yLook;
    (*mf)[2][2] = zLook;
    (*mf)[3][2] = -(xEye * xLook + yEye * yLook + zEye * zLook);

    (*mf)[0][3] = 0;
    (*mf)[1][3] = 0;
    (*mf)[2][3] = 0;
    (*mf)[3][3] = 1;
}

void syMatrixLookAt(
    Mtx *m,
    f32 xEye,
    f32 yEye,
    f32 zEye,
    f32 xAt,
    f32 yAt,
    f32 zAt,
    f32 xUp,
    f32 yUp,
    f32 zUp) {
    Mtx4f mf;

    syMatrixLookAtF(&mf, xEye, yEye, zEye, xAt, yAt, zAt, xUp, yUp, zUp);

    syMatrixF2L(&mf, m);
}

// Modified version of guLookAtF that takes an extra f32 argument and calls func_80019438
void syMatrixModLookAtF(
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
    f32 zUp) {
    f32 len;
    Vec3f look;
    Vec3f right;

    look.x = xAt - xEye;
    look.y = yAt - yEye;
    look.z = zAt - zEye;

    /* Negate because positive Z is behind us: */
    len = -1.0f / sqrtf(look.x * look.x + look.y * look.y + look.z * look.z);
    look.x *= len;
    look.y *= len;
    look.z *= len;

    /* Right = Up x Look */

    right.x = yUp * look.z - zUp * look.y;
    right.y = zUp * look.x - xUp * look.z;
    right.z = xUp * look.y - yUp * look.x;
    len     = 1.0f / sqrtf(right.x * right.x + right.y * right.y + right.z * right.z);
    right.x *= len;
    right.y *= len;
    right.z *= len;

    func_80019438(&right, &look, arg7);
    xUp = (look.y * right.z) - (look.z * right.y);
    yUp = (look.z * right.x) - (look.x * right.z);
    zUp = (look.x * right.y) - (look.y * right.x);
    len = 1.0f / sqrtf(((xUp * xUp) + (yUp * yUp)) + (zUp * zUp));
    xUp = xUp * len;
    yUp = yUp * len;
    zUp = zUp * len;

    (*mf)[0][0] = right.x;
    (*mf)[1][0] = right.y;
    (*mf)[2][0] = right.z;
    (*mf)[3][0] = -(xEye * right.x + yEye * right.y + zEye * right.z);

    (*mf)[0][1] = xUp;
    (*mf)[1][1] = yUp;
    (*mf)[2][1] = zUp;
    (*mf)[3][1] = -(xEye * xUp + yEye * yUp + zEye * zUp);

    (*mf)[0][2] = look.x;
    (*mf)[1][2] = look.y;
    (*mf)[2][2] = look.z;
    (*mf)[3][2] = -(xEye * look.x + yEye * look.y + zEye * look.z);

    (*mf)[0][3] = 0;
    (*mf)[1][3] = 0;
    (*mf)[2][3] = 0;
    (*mf)[3][3] = 1;
}

void syMatrixModLookAt(
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
    f32 zUp) {
    Mtx4f mf;

    syMatrixModLookAtF(&mf, xEye, yEye, zEye, xAt, yAt, zAt, arg7, xUp, yUp, zUp);

    syMatrixF2L(&mf, m);
}

// modified like hal's version of guLookAtF
void syMatrixLookAtReflectF(
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
    f32 zUp) {
    f32 len, xLook, yLook, zLook, xRight, yRight, zRight;

    xLook = xAt - xEye;
    yLook = yAt - yEye;
    zLook = zAt - zEye;

    /* Negate because positive Z is behind us: */
    len = -1.0f / sqrtf(xLook * xLook + yLook * yLook + zLook * zLook);
    xLook *= len;
    yLook *= len;
    zLook *= len;

    /* Right = Up x Look */

    xRight = yUp * zLook - zUp * yLook;
    yRight = zUp * xLook - xUp * zLook;
    zRight = xUp * yLook - yUp * xLook;
    len    = 1.0f / sqrtf(xRight * xRight + yRight * yRight + zRight * zRight);
    xRight *= len;
    yRight *= len;
    zRight *= len;

    /* Up = Look x Right */

    xUp = yLook * zRight - zLook * yRight;
    yUp = zLook * xRight - xLook * zRight;
    zUp = xLook * yRight - yLook * xRight;
    len = 1.0f / sqrtf(xUp * xUp + yUp * yUp + zUp * zUp);
    xUp *= len;
    yUp *= len;
    zUp *= len;

    /* reflectance vectors = Up and Right */

    l->l[0].l.dir[0]  = FTOFRAC8(xRight);
    l->l[0].l.dir[1]  = FTOFRAC8(yRight);
    l->l[0].l.dir[2]  = FTOFRAC8(zRight);
    l->l[1].l.dir[0]  = FTOFRAC8(xUp);
    l->l[1].l.dir[1]  = FTOFRAC8(yUp);
    l->l[1].l.dir[2]  = FTOFRAC8(zUp);
    l->l[0].l.col[0]  = 0x00;
    l->l[0].l.col[1]  = 0x00;
    l->l[0].l.col[2]  = 0x00;
    l->l[0].l.pad1    = 0x00;
    l->l[0].l.colc[0] = 0x00;
    l->l[0].l.colc[1] = 0x00;
    l->l[0].l.colc[2] = 0x00;
    l->l[0].l.pad2    = 0x00;
    l->l[1].l.col[0]  = 0x00;
    l->l[1].l.col[1]  = 0x80;
    l->l[1].l.col[2]  = 0x00;
    l->l[1].l.pad1    = 0x00;
    l->l[1].l.colc[0] = 0x00;
    l->l[1].l.colc[1] = 0x80;
    l->l[1].l.colc[2] = 0x00;
    l->l[1].l.pad2    = 0x00;

    (*mf)[0][0] = xRight;
    (*mf)[1][0] = yRight;
    (*mf)[2][0] = zRight;
    (*mf)[3][0] = -(xEye * xRight + yEye * yRight + zEye * zRight);

    (*mf)[0][1] = xUp;
    (*mf)[1][1] = yUp;
    (*mf)[2][1] = zUp;
    (*mf)[3][1] = -(xEye * xUp + yEye * yUp + zEye * zUp);

    (*mf)[0][2] = xLook;
    (*mf)[1][2] = yLook;
    (*mf)[2][2] = zLook;
    (*mf)[3][2] = -(xEye * xLook + yEye * yLook + zEye * zLook);

    (*mf)[0][3] = 0;
    (*mf)[1][3] = 0;
    (*mf)[2][3] = 0;
    (*mf)[3][3] = 1;
}

void syMatrixLookAtReflect(
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
    f32 zUp) {
    Mtx4f mf;

    syMatrixLookAtReflectF(&mf, l, xEye, yEye, zEye, xAt, yAt, zAt, xUp, yUp, zUp);

    syMatrixF2L(&mf, m);
}

void syMatrixModLookAtReflect_f(
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
    f32 zUp) {
    f32 len;
    Vec3f look;
    Vec3f right;

    look.x = xAt - xEye;
    look.y = yAt - yEye;
    look.z = zAt - zEye;

    /* Negate because positive Z is behind us: */
    len = -1.0f / sqrtf(look.x * look.x + look.y * look.y + look.z * look.z);
    look.x *= len;
    look.y *= len;
    look.z *= len;

    /* Right = Up x Look */

    right.x = yUp * look.z - zUp * look.y;
    right.y = zUp * look.x - xUp * look.z;
    right.z = xUp * look.y - yUp * look.x;
    len     = 1.0f / sqrtf(right.x * right.x + right.y * right.y + right.z * right.z);
    right.x *= len;
    right.y *= len;
    right.z *= len;

    /* Up = Look x Right */

    func_80019438(&right, &look, arg8);
    xUp = look.y * right.z - look.z * right.y;
    yUp = look.z * right.x - look.x * right.z;
    zUp = look.x * right.y - look.y * right.x;
    len = 1.0f / sqrtf(xUp * xUp + yUp * yUp + zUp * zUp);
    xUp *= len;
    yUp *= len;
    zUp *= len;

    /* reflectance vectors = Up and Right */

    l->l[0].l.dir[0]  = FTOFRAC8(right.x);
    l->l[0].l.dir[1]  = FTOFRAC8(right.y);
    l->l[0].l.dir[2]  = FTOFRAC8(right.z);
    l->l[1].l.dir[0]  = FTOFRAC8(xUp);
    l->l[1].l.dir[1]  = FTOFRAC8(yUp);
    l->l[1].l.dir[2]  = FTOFRAC8(zUp);
    l->l[0].l.col[0]  = 0x00;
    l->l[0].l.col[1]  = 0x00;
    l->l[0].l.col[2]  = 0x00;
    l->l[0].l.pad1    = 0x00;
    l->l[0].l.colc[0] = 0x00;
    l->l[0].l.colc[1] = 0x00;
    l->l[0].l.colc[2] = 0x00;
    l->l[0].l.pad2    = 0x00;
    l->l[1].l.col[0]  = 0x00;
    l->l[1].l.col[1]  = 0x80;
    l->l[1].l.col[2]  = 0x00;
    l->l[1].l.pad1    = 0x00;
    l->l[1].l.colc[0] = 0x00;
    l->l[1].l.colc[1] = 0x80;
    l->l[1].l.colc[2] = 0x00;
    l->l[1].l.pad2    = 0x00;

    (*mf)[0][0] = right.x;
    (*mf)[1][0] = right.y;
    (*mf)[2][0] = right.z;
    (*mf)[3][0] = -(xEye * right.x + yEye * right.y + zEye * right.z);

    (*mf)[0][1] = xUp;
    (*mf)[1][1] = yUp;
    (*mf)[2][1] = zUp;
    (*mf)[3][1] = -(xEye * xUp + yEye * yUp + zEye * zUp);

    (*mf)[0][2] = look.x;
    (*mf)[1][2] = look.y;
    (*mf)[2][2] = look.z;
    (*mf)[3][2] = -(xEye * look.x + yEye * look.y + zEye * look.z);

    (*mf)[0][3] = 0;
    (*mf)[1][3] = 0;
    (*mf)[2][3] = 0;
    (*mf)[3][3] = 1;
}

void syMatrixModLookAtReflect(
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
    f32 zUp) {
    Mtx4f mf;

    syMatrixModLookAtReflect_f(&mf, l, xEye, yEye, zEye, xAt, yAt, zAt, arg8, xUp, yUp, zUp);

    syMatrixF2L(&mf, m);
}

void syMatrixOrthoF(Mtx4f *mf, f32 l, f32 r, f32 b, f32 t, f32 n, f32 f, f32 scale) {
    s32 i, j;

    (*mf)[0][0] = 2 / (r - l);
    (*mf)[1][1] = 2 / (t - b);
    (*mf)[2][2] = -2 / (f - n);
    (*mf)[3][0] = -(r + l) / (r - l);
    (*mf)[3][1] = -(t + b) / (t - b);
    (*mf)[3][2] = -(f + n) / (f - n);
    (*mf)[3][3] = 1;

    for (i = 0; i < 3; i++) {
        if (i != 0) { (*mf)[i][0] = 0; }
        if (i != 1) { (*mf)[i][1] = 0; }
        if (i != 2) { (*mf)[i][2] = 0; }
        if (i != 3) { (*mf)[i][3] = 0; }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) { (*mf)[i][j] *= scale; }
    }
}

void syMatrixOrtho(Mtx *m, f32 l, f32 r, f32 b, f32 t, f32 n, f32 f, f32 scale) {
    Mtx4f mf;

    syMatrixOrthoF(&mf, l, r, b, t, n, f, scale);

    syMatrixF2L(&mf, m);
}

// this function seems to have larger changes than the prior `gu` functions
void syMatrixPerspFastF(
    Mtx4f mf,
    u16* perspNorm,
    f32 fovy,
    f32 aspect,
    f32 near,
    f32 far,
    f32 scale) {
    f32 cot;
    u16 sinAngle;
    f32 sinX, cosX;
    s32 unused[4];

    fovy *= 0.008726646f;

    sinAngle = (s32) (fovy * 651.8986f) & 0xFFF;
    // clang-format off
    do { \
        sinX = (f32) gSinTable[sinAngle & (ARRAY_COUNT(gSinTable) - 1)]; \
        if (sinAngle & 0x800) { \
            sinX = -sinX; \
        } \
        sinAngle += 0x400; \
        cosX = (f32) gSinTable[sinAngle & (ARRAY_COUNT(gSinTable) - 1)]; \
        if (sinAngle & 0x800) { \
            cosX = -cosX; \
        } \
    } while (0);
    // clang-format on
    cot = cosX / sinX;

    mf[0][0] = (cot / aspect) * scale;
    mf[1][1] = cot * scale;
    mf[2][2] = ((near + far) * scale) / (near - far);
    mf[2][3] = -scale;
    mf[3][2] = (2.0f * near * far * scale) / (near - far);
    mf[3][3] = 0.0f;

    mf[0][1] = 0;
    mf[0][2] = 0;
    mf[0][3] = 0;

    mf[1][0] = 0;
    mf[1][2] = 0;
    mf[1][3] = 0;

    mf[2][0] = 0;
    mf[2][1] = 0;

    mf[3][0] = 0;
    mf[3][1] = 0;

    if (perspNorm != NULL) {
        if (near + far <= 2.0f) {
            *perspNorm = (u16) 0xFFFF;
        } else {
            *perspNorm = (u16) ((2.0f * 65536.0f) / (near + far));
            if (*perspNorm <= 0) {
                *perspNorm = (u16) 0x0001;
            }
        }
    }
}

void syMatrixPerspFast(
    Mtx *m,
    u16 *perspNorm,
    f32 fovy,
    f32 aspect,
    f32 near,
    f32 far,
    f32 scale) {
    Mtx4f mf;

    syMatrixPerspFastF(&mf, perspNorm, fovy, aspect, near, far, scale);

    syMatrixF2L(&mf, m);
}

void syMatrixPerspF(
    Mtx4f mf,
    u16* perspNorm,
    f32 fovy,
    f32 aspect,
    f32 near,
    f32 far,
    f32 scale) {
    s32 unused1;
    f32 cotValue;
    f32 sinValue;
    f32 cosValue;
    s32 unused3;

    fovy *= 3.1415926f / 180.0f;
    cosValue = cosf(fovy / 2);
    sinValue = sinf(fovy / 2);
    cotValue = cosValue / sinValue;

    mf[0][0] = (cotValue / aspect) * scale;
    mf[1][1] = cotValue * scale;
    mf[2][2] = ((near + far) * scale) / (near - far);
    mf[2][3] = -scale;
    mf[3][2] = (2.0f * near * far * scale) / (near - far);
    mf[3][3] = 0.0f;

    mf[0][1] = 0;
    mf[0][2] = 0;
    mf[0][3] = 0;

    mf[1][0] = 0;
    mf[1][2] = 0;
    mf[1][3] = 0;

    mf[2][0] = 0;
    mf[2][1] = 0;

    mf[3][0] = 0;
    mf[3][1] = 0;

    if (perspNorm != NULL) {
        if (near + far <= 2.0f) {
            *perspNorm = 0xFFFF;
        } else {
            *perspNorm = (2.0f * 65536.0f) / (near + far);
            if (*perspNorm <= 0) {
                *perspNorm = 1;
            }
        }
    }
}


void hal_perspective(Mtx *m, u16 *perspNorm, f32 fovy, f32 aspect, f32 near, f32 far, f32 scale) {
    Mtx4f mf;

    syMatrixPerspF(&mf, perspNorm, fovy, aspect, near, far, scale);

    syMatrixF2L(&mf, m);
}

void syMatrixScaF(Mtx4f *mf, f32 x, f32 y, f32 z) {
    s32 i, j;

    (*mf)[0][0] = x;
    (*mf)[1][1] = y;
    (*mf)[2][2] = z;
    (*mf)[3][3] = 1.0f;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i != j) { (*mf)[i][j] = 0; }
        }
    }
}

void syMatrixSca(Mtx *m, f32 x, f32 y, f32 z) {
    s32 e1, e2;

    m->m[0][1] = 0;
    m->m[2][1] = 0;
    m->m[0][3] = 0;
    m->m[2][3] = 0;
    m->m[1][0] = 0;
    m->m[3][0] = 0;

    e1         = FTOFIX32(x);
    e2         = FTOFIX32(0);
    m->m[0][0] = COMBINE_INTEGRAL(e1, e2);
    m->m[2][0] = COMBINE_FRACTIONAL(e1, e2);

    e1         = FTOFIX32(0);
    e2         = FTOFIX32(y);
    m->m[0][2] = COMBINE_INTEGRAL(e1, e2);
    m->m[2][2] = COMBINE_FRACTIONAL(e1, e2);

    e1         = FTOFIX32(z);
    e2         = FTOFIX32(0);
    m->m[1][1] = COMBINE_INTEGRAL(e1, e2);
    m->m[3][1] = COMBINE_FRACTIONAL(e1, e2);

    m->m[1][2] = 0;
    m->m[3][2] = 0;

    m->m[1][3] = 1;
    m->m[3][3] = 0;
}

void hal_rowscale_f(Mtx4f *mf, f32 x, f32 y, f32 z) {
    s32 j;

    for (j = 0; j < 4; j++) {
        if ((*mf)[0][j] != 0.0f) { (*mf)[0][j] *= x; }
    }

    for (j = 0; j < 4; j++) {
        if ((*mf)[1][j] != 0.0f) { (*mf)[1][j] *= y; }
    }

    for (j = 0; j < 4; j++) {
        if ((*mf)[2][j] != 0.0f) { (*mf)[2][j] *= z; }
    }
}

void syMatrixTraF(Mtx4f *mf, f32 x, f32 y, f32 z) {
    int i, j;

    (*mf)[3][0] = x;
    (*mf)[3][1] = y;
    (*mf)[3][2] = z;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            if (i == j) {
                (*mf)[i][j] = 1.0f;
            } else {
                (*mf)[i][j] = 0.0f;
            }
        }
    }
    (*mf)[3][3] = 1.0f;
}

#ifdef NON_MATCHING
void syMatrixTranslate(Mtx *m, f32 x, f32 y, f32 z) {
    u32 e1, e2;

    e1         = FTOFIX32(1); // 0, 0
    e2         = FTOFIX32(0); // 0, 1
    m->m[0][0] = COMBINE_INTEGRAL(e1, e2);
    m->m[2][0] = COMBINE_FRACTIONAL(e1, e2);

    e1         = FTOFIX32(0); // 0, 2
    e2         = FTOFIX32(0); // 0, 3
    m->m[0][1] = COMBINE_INTEGRAL(e1, e2);
    m->m[2][1] = COMBINE_FRACTIONAL(e1, e2);

    e1         = FTOFIX32(0); // 1 0
    e2         = FTOFIX32(1); // 1 1
    m->m[0][2] = COMBINE_INTEGRAL(e1, e2);
    m->m[2][2] = COMBINE_FRACTIONAL(e1, e2);

    e1         = FTOFIX32(0); // 1 2
    e2         = FTOFIX32(0);
    m->m[0][3] = COMBINE_INTEGRAL(e1, e2);
    m->m[2][3] = COMBINE_FRACTIONAL(e1, e2);

    e1         = FTOFIX32(0); // 2 0
    e2         = FTOFIX32(0);
    m->m[1][0] = COMBINE_INTEGRAL(e1, e2);
    m->m[3][0] = COMBINE_FRACTIONAL(e1, e2);

    e1         = FTOFIX32(1); // 2 2
    e2         = FTOFIX32(0);
    m->m[1][1] = COMBINE_INTEGRAL(e1, e2);
    m->m[3][1] = COMBINE_FRACTIONAL(e1, e2);

    e1         = FTOFIX32(x); // 3 0
    e2         = FTOFIX32(y); // 3 1
    m->m[1][2] = COMBINE_INTEGRAL(e1, e2);
    m->m[3][2] = COMBINE_FRACTIONAL(e1, e2);

    e1         = FTOFIX32(z); // 3 2
    e2         = FTOFIX32(1); // 3 3
    m->m[1][3] = COMBINE_INTEGRAL(e1, e2);
    m->m[3][3] = COMBINE_FRACTIONAL(e1, e2);
}

#else
#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_gu/syMatrixTranslate.s")
#endif

// takes radians instead of degrees
void syMatrixRotR_f(Mtx4f *mf, f32 a, f32 x, f32 y, f32 z) {
    f32 sine;
    f32 cosine;
    f32 ab, bc, ca, t;

    guNormalize(&x, &y, &z);
    sine   = __sinf(a);
    cosine = __cosf(a);
    t      = (1.0f - cosine);
    ab     = x * y * t;
    bc     = y * z * t;
    ca     = z * x * t;

    t           = x * x;
    (*mf)[0][0] = t + cosine * (1 - t);
    (*mf)[2][1] = bc - x * sine;
    (*mf)[1][2] = bc + x * sine;

    t           = y * y;
    (*mf)[1][1] = t + cosine * (1 - t);
    (*mf)[2][0] = ca + y * sine;
    (*mf)[0][2] = ca - y * sine;

    t           = z * z;
    (*mf)[2][2] = t + cosine * (1 - t);
    (*mf)[1][0] = ab - z * sine;
    (*mf)[0][1] = ab + z * sine;

    (*mf)[0][3] = 0.0f;
    (*mf)[1][3] = 0.0f;
    (*mf)[2][3] = 0.0f;

    (*mf)[3][0] = 0.0f;
    (*mf)[3][1] = 0.0f;
    (*mf)[3][2] = 0.0f;
    (*mf)[3][3] = 1.0f;
}

void syMatrixRotR(Mtx *m, f32 a, f32 x, f32 y, f32 z) {
    Mtx4f mf;

    syMatrixRotR_f(&mf, a, x, y, z);

    syMatrixF2LFixedW(&mf, m);
}

void syMatrixRotR_translate_f(Mtx4f *mf, f32 dx, f32 dy, f32 dz, f32 angle, f32 rx, f32 ry, f32 rz) {
    syMatrixRotR_f(mf, angle, rx, ry, rz);
    (*mf)[3][0] = dx;
    (*mf)[3][1] = dy;
    (*mf)[3][2] = dz;
}

void syMatrixRotR_translate(Mtx *m, f32 dx, f32 dy, f32 dz, f32 angle, f32 rx, f32 ry, f32 rz) {
    Mtx4f mf;

    syMatrixRotR_translate_f(&mf, dx, dy, dz, angle, rx, ry, rz);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixTraRotRSca_f(
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
    f32 sz) {
    syMatrixRotR_f(mf, angle, rx, ry, rz);
    (*mf)[3][0] = dx;
    (*mf)[3][1] = dy;
    (*mf)[3][2] = dz;
    hal_rowscale_f(mf, sx, sy, sz);
}

void syMatrixTraRotRSca(
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
    f32 sz) {
    Mtx4f mf;

    syMatrixTraRotRSca_f(&mf, dx, dy, dz, angle, rx, ry, rz, sx, sy, sz);
    syMatrixF2LFixedW(&mf, m);
}

// Return rotation matrix given roll, pitch, and yaw in radians
void syMatrixRotRpyRF(Mtx4f *mf, f32 r, f32 p, f32 h) {
    f32 sinr, sinp, sinh;
    f32 cosr, cosp, cosh;

    sinr = __sinf(r);
    cosr = __cosf(r);
    sinp = __sinf(p);
    cosp = __cosf(p);
    sinh = __sinf(h);
    cosh = __cosf(h);

    (*mf)[0][0] = cosp * cosh;
    (*mf)[0][1] = cosp * sinh;
    (*mf)[0][2] = -sinp;

    (*mf)[1][0] = sinr * sinp * cosh - cosr * sinh;
    (*mf)[1][1] = sinr * sinp * sinh + cosr * cosh;
    (*mf)[1][2] = sinr * cosp;

    (*mf)[2][0] = cosr * sinp * cosh + sinr * sinh;
    (*mf)[2][1] = cosr * sinp * sinh - sinr * cosh;
    (*mf)[2][2] = cosr * cosp;

    (*mf)[3][2] = 0.0f;
    (*mf)[3][1] = 0.0f;
    (*mf)[3][0] = 0.0f;

    (*mf)[3][3] = 1.0f;
    (*mf)[2][3] = 0.0f;
    (*mf)[1][3] = 0.0f;
    (*mf)[0][3] = 0.0f;
}

#ifdef NON_MATCHING
void syMatrixRotRpyR(Mtx *m, f32 r, f32 p, f32 h) {
    s32 sinr, sinp, sinh;
    s32 cosr, cosp, cosh;
    u32 e1, e2;
    u16 idx;

    idx  = (s32)(r * 651.8986f) & 0xFFF;
    sinr = gSinTable[idx & 0x7FF];
    if (idx & 0x800) { sinr = -sinr; }
    cosr = gSinTable[(idx + 0x400) & 0x7FF];
    if ((idx + 0x400) & 0x800) { cosr = -cosr; }

    idx  = (s32)(p * 651.8986f) & 0xFFF;
    sinp = gSinTable[idx & 0x7FF];
    if (idx & 0x800) { sinp = -sinp; }
    cosp = gSinTable[(idx + 0x400) & 0x7FF];
    if ((idx + 0x400) & 0x800) { cosp = -cosp; }

    idx  = (s32)(h * 651.8986f) & 0xFFF;
    sinh = gSinTable[idx & 0x7FF];
    if (idx & 0x800) { sinh = -sinh; }
    cosh = gSinTable[(idx + 0x400) & 0x7FF];
    if ((idx + 0x400) & 0x800) { cosh = -cosh; }

    // [0, 0] -> [0, 3]
    e1 = (cosp * cosh) >> 14;
    e2 = (cosp * sinh) >> 14;
    // e3 = sinp * -2;
    m->m[0][0] = COMBINE_INTEGRAL(e1, e2);
    m->m[2][0] = COMBINE_FRACTIONAL(e1, e2);

    e1         = sinp * -2;
    m->m[0][1] = COMBINE_INTEGRAL(e1, 0);
    m->m[2][1] = COMBINE_FRACTIONAL(e1, 0);

    // [1, 0] -> [1, 3]
    e1 = ((((sinr * sinp) >> 15) * cosh) >> 14) - ((cosr * sinh) >> 14);
    e2 = ((((sinr * sinp) >> 15) * sinh) >> 14) + ((cosr * cosh) >> 14);
    // e3 = (sinr * cosp) >> 14;
    m->m[0][2] = COMBINE_INTEGRAL(e1, e2);
    m->m[2][2] = COMBINE_FRACTIONAL(e1, e2);

    e1 = (sinr * cosp) >> 14;
    // e2 = 0;
    m->m[0][3] = COMBINE_INTEGRAL(e1, 0);
    m->m[2][3] = COMBINE_FRACTIONAL(e1, 0);

    // [2, 0] -> [2, 3]
    e1 = ((((cosr * sinp) >> 15) * cosh) >> 14) + ((sinr * sinh) >> 14);
    e2 = ((((cosr * sinp) >> 15) * sinh) >> 14) - ((sinr * cosh) >> 14);
    // e3 = (cosr * cosp) >> 14;
    m->m[1][0] = COMBINE_INTEGRAL(e1, e2);
    m->m[3][0] = COMBINE_FRACTIONAL(e1, e2);

    e1         = (cosr * cosp) >> 14;
    m->m[1][1] = COMBINE_INTEGRAL(e1, 0);
    m->m[3][1] = COMBINE_FRACTIONAL(e1, 0);

    // [3, 0] -> [3, 3]
    m->m[1][2] = COMBINE_INTEGRAL(0, 0);
    m->m[3][2] = COMBINE_FRACTIONAL(0, 0);

    m->m[1][3] = COMBINE_INTEGRAL(0, FTOFIX32(1.0f));
    m->m[3][3] = COMBINE_FRACTIONAL(0, FTOFIX32(1.0f));
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_gu/syMatrixRotRpyR.s")
#endif

void syMatrixTraRotRpyR_f(Mtx4f *mf, f32 dx, f32 dy, f32 dz, f32 r, f32 p, f32 h) {
    syMatrixRotRpyRF(mf, r, p, h);
    (*mf)[3][0] = dx;
    (*mf)[3][1] = dy;
    (*mf)[3][2] = dz;
}

#ifdef NON_MATCHING
void syMatrixTraRotRpyR(Mtx *m, f32 dx, f32 dy, f32 dz, f32 r, f32 p, f32 h) {
    s32 sinr, sinp, sinh;
    s32 cosr, cosp, cosh;
    u32 e1, e2;
    u16 idx;

    idx  = (s32)(r * 651.8986f) & 0xFFF;
    sinr = gSinTable[idx & 0x7FF];
    if (idx & 0x800) { sinr = -sinr; }
    cosr = gSinTable[(idx + 0x400) & 0x7FF];
    if ((idx + 0x400) & 0x800) { cosr = -cosr; }

    idx  = (s32)(p * 651.8986f) & 0xFFF;
    sinp = gSinTable[idx & 0x7FF];
    if (idx & 0x800) { sinp = -sinp; }
    cosp = gSinTable[(idx + 0x400) & 0x7FF];
    if ((idx + 0x400) & 0x800) { cosp = -cosp; }

    idx  = (s32)(h * 651.8986f) & 0xFFF;
    sinh = gSinTable[idx & 0x7FF];
    if (idx & 0x800) { sinh = -sinh; }
    cosh = gSinTable[(idx + 0x400) & 0x7FF];
    if ((idx + 0x400) & 0x800) { cosh = -cosh; }

    // [0, 0] -> [0, 3]
    e1 = (cosp * cosh) >> 14;
    e2 = (cosp * sinh) >> 14;
    // e3 = sinp * -2;
    m->m[0][0] = COMBINE_INTEGRAL(e1, e2);
    m->m[2][0] = COMBINE_FRACTIONAL(e1, e2);

    e1         = sinp * -2;
    m->m[0][1] = COMBINE_INTEGRAL(e1, 0);
    m->m[2][1] = COMBINE_FRACTIONAL(e1, 0);

    // [1, 0] -> [1, 3]
    e1 = ((((sinr * sinp) >> 15) * cosh) >> 14) - ((cosr * sinh) >> 14);
    e2 = ((((sinr * sinp) >> 15) * sinh) >> 14) + ((cosr * cosh) >> 14);
    // e3 = (sinr * cosp) >> 14;
    m->m[0][2] = COMBINE_INTEGRAL(e1, e2);
    m->m[2][2] = COMBINE_FRACTIONAL(e1, e2);

    e1 = (sinr * cosp) >> 14;
    // e2 = 0;
    m->m[0][3] = COMBINE_INTEGRAL(e1, 0);
    m->m[2][3] = COMBINE_FRACTIONAL(e1, 0);

    // [2, 0] -> [2, 3]
    e1 = ((((cosr * sinp) >> 15) * cosh) >> 14) + ((sinr * sinh) >> 14);
    e2 = ((((cosr * sinp) >> 15) * sinh) >> 14) - ((sinr * cosh) >> 14);
    // e3 = (cosr * cosp) >> 14;
    m->m[1][0] = COMBINE_INTEGRAL(e1, e2);
    m->m[3][0] = COMBINE_FRACTIONAL(e1, e2);

    e1         = (cosr * cosp) >> 14;
    m->m[1][1] = COMBINE_INTEGRAL(e1, 0);
    m->m[3][1] = COMBINE_FRACTIONAL(e1, 0);

    // [3, 0] -> [3, 3]
    e1         = FTOFIX32(dx);
    e2         = FTOFIX32(dy);
    m->m[1][2] = COMBINE_INTEGRAL(e1, e2);
    m->m[3][2] = COMBINE_FRACTIONAL(e1, e2);

    e1         = FTOFIX32(dz);
    e2         = FTOFIX32(1.0f);
    m->m[1][3] = COMBINE_INTEGRAL(e1, e2);
    m->m[3][3] = COMBINE_FRACTIONAL(e1, e2);
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_gu/syMatrixTraRotRpyR.s")
#endif

void syMatrixTraRotRpyRScaF(
    Mtx4f *mf,
    f32 dx,
    f32 dy,
    f32 dz,
    f32 r,
    f32 p,
    f32 h,
    f32 sx,
    f32 sy,
    f32 sz) {
    syMatrixRotRpyRF(mf, r, p, h);
    (*mf)[3][0] = dx;
    (*mf)[3][1] = dy;
    (*mf)[3][2] = dz;
    hal_rowscale_f(mf, sx, sy, sz);
}

#ifdef NON_MATCHING
void syMatrixTraRotRpyRSca(
    Mtx *m,
    f32 dx,
    f32 dy,
    f32 dz,
    f32 r,
    f32 p,
    f32 h,
    f32 sx,
    f32 sy,
    f32 sz) {
    s32 sinr, sinp, sinh;
    s32 cosr, cosp, cosh;
    s32 scaleX, scaleY, scaleZ;
    u32 e1, e2;
    u16 idx;

    idx  = (s32)(r * 651.8986f) & 0xFFF;
    sinr = gSinTable[idx & 0x7FF];
    if (idx & 0x800) { sinr = -sinr; }
    cosr = gSinTable[(idx + 0x400) & 0x7FF];
    if ((idx + 0x400) & 0x800) { cosr = -cosr; }

    idx  = (s32)(p * 651.8986f) & 0xFFF;
    sinp = gSinTable[idx & 0x7FF];
    if (idx & 0x800) { sinp = -sinp; }
    cosp = gSinTable[(idx + 0x400) & 0x7FF];
    if ((idx + 0x400) & 0x800) { cosp = -cosp; }

    idx  = (s32)(h * 651.8986f) & 0xFFF;
    sinh = gSinTable[idx & 0x7FF];
    if (idx & 0x800) { sinh = -sinh; }
    cosh = gSinTable[(idx + 0x400) & 0x7FF];
    if ((idx + 0x400) & 0x800) { cosh = -cosh; }

    scaleX = (s32)(sx * (f32)0x100);
    scaleY = (s32)(sy * (f32)0x100);
    scaleZ = (s32)(sz * (f32)0x100);

    // [0, 0] -> [0, 3]
    e1         = (((cosp * cosh) >> 14) * scaleX) / 256;
    e2         = (((cosp * sinh) >> 14) * scaleX) / 256;
    m->m[0][0] = COMBINE_INTEGRAL(e1, e2);
    m->m[2][0] = COMBINE_FRACTIONAL(e1, e2);

    e1         = (sinp * -2 * scaleX) / 256;
    m->m[0][1] = COMBINE_INTEGRAL(e1, 0);
    m->m[2][1] = COMBINE_FRACTIONAL(e1, 0);

    // [1, 0] -> [1, 3]
    e1         = (((((sinr * sinp) >> 14) * cosh) >> 14) - ((cosr * sinh) >> 14) * scaleY) / 256;
    e2         = (((((sinr * sinp) >> 14) * sinh) >> 14) + ((cosr * cosh) >> 14) * scaleY) / 256;
    m->m[0][2] = COMBINE_INTEGRAL(e1, e2);
    m->m[2][2] = COMBINE_FRACTIONAL(e1, e2);

    e1 = (((sinr * cosp) >> 14) * scaleY) / 256;
    // e2 = 0;
    m->m[0][3] = COMBINE_INTEGRAL(e1, 0);
    m->m[2][3] = COMBINE_FRACTIONAL(e1, 0);

    // [2, 0] -> [2, 3]
    e1         = (((((cosr * sinp) >> 14) * cosh) >> 14) + ((sinr * sinh) >> 14) * scaleZ) / 256;
    e2         = (((((cosr * sinp) >> 14) * sinh) >> 14) - ((sinr * cosh) >> 14) * scaleZ) / 256;
    m->m[1][0] = COMBINE_INTEGRAL(e1, e2);
    m->m[3][0] = COMBINE_FRACTIONAL(e1, e2);

    e1         = (((cosr * cosp) >> 14) * scaleZ) / 256;
    m->m[1][1] = COMBINE_INTEGRAL(e1, 0);
    m->m[3][1] = COMBINE_FRACTIONAL(e1, 0);

    // [3, 0] -> [3, 3]
    e1         = FTOFIX32(dx);
    e2         = FTOFIX32(dy);
    m->m[1][2] = COMBINE_INTEGRAL(e1, e2);
    m->m[3][2] = COMBINE_FRACTIONAL(e1, e2);

    e1         = FTOFIX32(dz);
    e2         = FTOFIX32(1.0f);
    m->m[1][3] = COMBINE_INTEGRAL(e1, e2);
    m->m[3][3] = COMBINE_FRACTIONAL(e1, e2);
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_gu/syMatrixTraRotRpyRSca.s")
#endif

// pitch yaw roll; i think...
void syMatrixRotPyrR_f(Mtx4f *mf, f32 r, f32 p, f32 h) {
    f32 sinr, sinp, sinh;
    f32 cosr, cosp, cosh;
    UNUSED u32 pad[4];

    sinr = __sinf(r);
    cosr = __cosf(r);
    sinp = __sinf(p);
    cosp = __cosf(p);
    sinh = __sinf(h);
    cosh = __cosf(h);

    (*mf)[0][0] = cosh * cosp;
    (*mf)[0][1] = cosr * sinh * cosp + sinr * sinp;
    (*mf)[0][2] = sinr * sinh * cosp - cosr * sinp;

    (*mf)[1][0] = -sinh;
    (*mf)[1][1] = cosr * cosh;
    (*mf)[1][2] = sinr * cosh;

    (*mf)[2][0] = cosh * sinp;
    (*mf)[2][1] = cosr * sinh * sinp - sinr * cosp;
    (*mf)[2][2] = sinr * sinh * sinp + cosr * cosp;

    (*mf)[0][3] = 0;
    (*mf)[1][3] = 0;
    (*mf)[2][3] = 0;

    (*mf)[3][0] = 0;
    (*mf)[3][1] = 0;
    (*mf)[3][2] = 0;
    (*mf)[3][3] = 1;
}

void syMatrixRotPyrR(Mtx *m, f32 r, f32 p, f32 h) {
    Mtx4f mf;

    syMatrixRotPyrR_f(&mf, r, p, h);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixTraRotPyrR_f(Mtx4f *mf, f32 dx, f32 dy, f32 dz, f32 r, f32 p, f32 h) {
    syMatrixRotPyrR_f(mf, r, p, h);
    (*mf)[3][0] = dx;
    (*mf)[3][1] = dy;
    (*mf)[3][2] = dz;
}

void syMatrixTraRotPyrR(Mtx *m, f32 dx, f32 dy, f32 dz, f32 r, f32 p, f32 h) {
    Mtx4f mf;

    syMatrixTraRotPyrR_f(&mf, dx, dy, dz, r, p, h);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixTraRotPyrRSca_f(
    Mtx4f *mf,
    f32 dx,
    f32 dy,
    f32 dz,
    f32 r,
    f32 p,
    f32 h,
    f32 sx,
    f32 sy,
    f32 sz) {
    syMatrixRotPyrR_f(mf, r, p, h);
    (*mf)[3][0] = dx;
    (*mf)[3][1] = dy;
    (*mf)[3][2] = dz;
    hal_rowscale_f(mf, sx, sy, sz);
}

void syMatrixTraRotPyrRSca(
    Mtx *m,
    f32 dx,
    f32 dy,
    f32 dz,
    f32 r,
    f32 p,
    f32 h,
    f32 sx,
    f32 sy,
    f32 sz) {
    Mtx4f mf;

    syMatrixTraRotPyrRSca_f(&mf, dx, dy, dz, r, p, h, sx, sy, sz);
    syMatrixF2LFixedW(&mf, m);
}

// rotate pitch yaw?
void syMatrixRotR_py_f(Mtx4f *mf, f32 p, f32 h) {
    f32 sinp, sinh;
    f32 cosp, cosh;

    sinp = __sinf(p);
    cosp = __cosf(p);
    sinh = __sinf(h);
    cosh = __cosf(h);

    (*mf)[0][0] = cosp * cosh;
    (*mf)[0][1] = cosp * sinh;
    (*mf)[0][2] = -sinp;

    (*mf)[1][0] = -sinh;
    (*mf)[1][1] = cosh;
    (*mf)[1][2] = 0;

    (*mf)[2][0] = sinp * cosh;
    (*mf)[2][1] = sinp * sinh;
    (*mf)[2][2] = cosp;

    (*mf)[0][3] = (*mf)[1][3] = (*mf)[2][3] = (*mf)[3][0] = (*mf)[3][1] = (*mf)[3][2] = 0;

    (*mf)[3][3] = 1.0f;
}

void syMatrixRotR_py(Mtx *m, f32 p, f32 h) {
    Mtx4f mf;

    syMatrixRotR_py_f(&mf, p, h);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixRotR_py_translate_f(Mtx4f *mf, f32 dx, f32 dy, f32 dz, f32 p, f32 h) {
    syMatrixRotR_py_f(mf, p, h);
    (*mf)[3][0] = dx;
    (*mf)[3][1] = dy;
    (*mf)[3][2] = dz;
}

void syMatrixRotR_py_translate(Mtx *m, f32 dx, f32 dy, f32 dz, f32 p, f32 h) {
    Mtx4f mf;

    syMatrixRotR_py_translate_f(&mf, dx, dy, dz, p, h);
    syMatrixF2LFixedW(&mf, m);
}

// roll pitch
void syMatrixRotR_rp_f(Mtx4f *mf, f32 r, f32 p) {
    f32 sinr, sinp;
    f32 cosr, cosp;

    sinr = __sinf(r);
    cosr = __cosf(r);
    sinp = __sinf(p);
    cosp = __cosf(p);

    (*mf)[0][0] = cosp;
    (*mf)[0][1] = 0;
    (*mf)[0][2] = -sinp;

    (*mf)[1][0] = sinp * sinr;
    (*mf)[1][1] = cosr;
    (*mf)[1][2] = cosp * sinr;

    (*mf)[2][0] = sinp * cosr;
    (*mf)[2][1] = -sinr;
    (*mf)[2][2] = cosp * cosr;

    (*mf)[0][3] = (*mf)[1][3] = (*mf)[2][3] = (*mf)[3][0] = (*mf)[3][1] = (*mf)[3][2] = 0;

    (*mf)[3][3] = 1.0f;
}

void syMatrixRotR_rp(Mtx *m, f32 p, f32 h) {
    Mtx4f mf;

    syMatrixRotR_rp_f(&mf, p, h);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixRotR_rp_translate_f(Mtx4f *mf, f32 dx, f32 dy, f32 dz, f32 r, f32 p) {
    syMatrixRotR_rp_f(mf, r, p);
    (*mf)[3][0] = dx;
    (*mf)[3][1] = dy;
    (*mf)[3][2] = dz;
}

void syMatrixRotR_rp_translate(Mtx *m, f32 dx, f32 dy, f32 dz, f32 r, f32 p) {
    Mtx4f mf;

    syMatrixRotR_rp_translate_f(&mf, dx, dy, dz, r, p);
    syMatrixF2LFixedW(&mf, m);
}

// this has to be a fake matching, but whatever: it's unused
void syMatrixRotR_yaw_f(Mtx4f *mf, f32 h) {
    f32 sinh;
    f32 cosh;

    sinh = __sinf(h);
    cosh = __cosf(h);

    (*mf)[0][0] = (*mf)[1][1] = cosh;
    (*mf)[0][1]               = sinh;

    (*mf)[1][0] = -sinh;
    (*mf)[1][1] = cosh; // necessary for matching

    (*mf)[2][1] = 0;
    (*mf)[2][0] = 0;

    (*mf)[1][2] = 0;
    (*mf)[0][2] = 0;

    (*mf)[3][2] = 0;
    (*mf)[3][1] = 0;
    (*mf)[3][0] = 0;

    (*mf)[2][3] = 0;
    (*mf)[1][3] = 0;
    (*mf)[0][3] = 0;

    (*mf)[2][2] = (*mf)[3][3] = 1;
}

void syMatrixRotR_yaw(Mtx *m, f32 h) {
    Mtx4f mf;

    syMatrixRotR_yaw_f(&mf, h);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixRotR_yaw_translate_f(Mtx4f *mf, f32 dx, f32 dy, f32 dz, f32 h) {
    syMatrixRotR_yaw_f(mf, h);
    (*mf)[3][0] = dx;
    (*mf)[3][1] = dy;
    (*mf)[3][2] = dz;
}

void syMatrixRotR_yaw_translate(Mtx *m, f32 dx, f32 dy, f32 dz, f32 h) {
    Mtx4f mf;

    syMatrixRotR_yaw_translate_f(&mf, dx, dy, dz, h);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixRotR_pitch_f(Mtx4f *mf, f32 p) {
    f32 sinp;
    f32 cosp;

    sinp = __sinf(p);
    cosp = __cosf(p);

    (*mf)[0][0] = (*mf)[2][2] = cosp;

    (*mf)[0][2] = -sinp;
    (*mf)[2][0] = sinp;

    (*mf)[2][2] = cosp; // necessary for matching

    (*mf)[2][1] = 0;
    (*mf)[1][0] = 0;

    (*mf)[1][2] = 0;
    (*mf)[0][1] = 0;

    (*mf)[3][2] = 0;
    (*mf)[3][1] = 0;
    (*mf)[3][0] = 0;

    (*mf)[2][3] = 0;
    (*mf)[1][3] = 0;
    (*mf)[0][3] = 0;

    (*mf)[1][1] = (*mf)[3][3] = 1;
}

void syMatrixRotR_pitch(Mtx *m, f32 p) {
    Mtx4f mf;

    syMatrixRotR_pitch_f(&mf, p);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixRotR_pitch_translate_f(Mtx4f *mf, f32 dx, f32 dy, f32 dz, f32 p) {
    syMatrixRotR_pitch_f(mf, p);
    (*mf)[3][0] = dx;
    (*mf)[3][1] = dy;
    (*mf)[3][2] = dz;
}

void syMatrixRotR_pitch_translate(Mtx *m, f32 dx, f32 dy, f32 dz, f32 p) {
    Mtx4f mf;

    syMatrixRotR_pitch_translate_f(&mf, dx, dy, dz, p);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixRotR_f_degrees(Mtx4f *mf, f32 a, f32 x, f32 y, f32 z) {
    syMatrixRotR_f(mf, (a * M_PI_F) / 180.0f, x, y, z);
}

void syMatrixRotD(Mtx *m, f32 a, f32 x, f32 y, f32 z) {
    Mtx4f mf;

    syMatrixRotR_f(&mf, (a * M_PI_F) / 180.0f, x, y, z);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixRotR_translate_f_degrees(
    Mtx4f *mf,
    f32 dx,
    f32 dy,
    f32 dz,
    f32 a,
    f32 rx,
    f32 ry,
    f32 rz) {
    syMatrixRotR_translate_f(mf, dx, dy, dz, (a * M_PI_F) / 180.0f, rx, ry, rz);
}

void syMatrixTraRotD(Mtx *m, f32 dx, f32 dy, f32 dz, f32 a, f32 rx, f32 ry, f32 rz) {
    Mtx4f mf;

    syMatrixRotR_translate_f(&mf, dx, dy, dz, (a * M_PI_F) / 180.0f, rx, ry, rz);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixRotRpyRF_degrees(Mtx4f *mf, f32 r, f32 p, f32 h) {
    syMatrixRotRpyRF(mf, (r * M_PI_F) / 180.0f, (p * M_PI_F) / 180.0f, (h * M_PI_F) / 180.0f);
}

void syMatrixRotRpyD(Mtx *m, f32 r, f32 p, f32 h) {
    Mtx4f mf;

    syMatrixRotRpyRF(&mf, (r * M_PI_F) / 180.0f, (p * M_PI_F) / 180.0f, (h * M_PI_F) / 180.0f);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixTraRotRpyR_f_degrees(Mtx4f *mf, f32 dx, f32 dy, f32 dz, f32 r, f32 p, f32 h) {
    syMatrixTraRotRpyR_f(
        mf, dx, dy, dz, (r * M_PI_F) / 180.0f, (p * M_PI_F) / 180.0f, (h * M_PI_F) / 180.0f);
}

void syMatrixTraRotRpyD(Mtx *m, f32 dx, f32 dy, f32 dz, f32 r, f32 p, f32 h) {
    Mtx4f mf;

    syMatrixTraRotRpyR_f(
        &mf, dx, dy, dz, (r * M_PI_F) / 180.0f, (p * M_PI_F) / 180.0f, (h * M_PI_F) / 180.0f);
    syMatrixF2LFixedW(&mf, m);
}

#pragma GCC diagnostic pop
