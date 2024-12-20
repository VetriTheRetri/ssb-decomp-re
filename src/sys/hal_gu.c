#include "common.h"

#include "hal_gu.h"

#include <sys/vector.h>

#include <macros.h>
#include <ssb_types.h>
#include <lb/library.h>

#include <PR/gu.h>
#include <PR/mbi.h>
#include <PR/ultratypes.h>

void syMatrixF2L(Mtx44f *src, Mtx *dst)
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
void syMatrixF2LFixedW(Mtx44f *src, Mtx *dst) 
{
    u32 e1, e2;

    e1           = FTOFIX32((*src)[0][0]);
    e2           = FTOFIX32((*src)[0][1]);
    dst->m[0][0] = COMBINE_INTEGRAL(e1, e2);
    dst->m[2][0] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[0][2]);
    e2           = FTOFIX32(0.0F);
    dst->m[0][1] = COMBINE_INTEGRAL(e1, e2);
    dst->m[2][1] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[1][0]);
    e2           = FTOFIX32((*src)[1][1]);
    dst->m[0][2] = COMBINE_INTEGRAL(e1, e2);
    dst->m[2][2] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[1][2]);
    e2           = FTOFIX32(0.0F);
    dst->m[0][3] = COMBINE_INTEGRAL(e1, e2);
    dst->m[2][3] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[2][0]);
    e2           = FTOFIX32((*src)[2][1]);
    dst->m[1][0] = COMBINE_INTEGRAL(e1, e2);
    dst->m[3][0] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[2][2]);
    e2           = FTOFIX32(0.0F);
    dst->m[1][1] = COMBINE_INTEGRAL(e1, e2);
    dst->m[3][1] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[3][0]);
    e2           = FTOFIX32((*src)[3][1]);
    dst->m[1][2] = COMBINE_INTEGRAL(e1, e2);
    dst->m[3][2] = COMBINE_FRACTIONAL(e1, e2);
    e1           = FTOFIX32((*src)[3][2]);
    e2           = FTOFIX32(1.0F);
    dst->m[1][3] = COMBINE_INTEGRAL(e1, e2);
    dst->m[3][3] = COMBINE_FRACTIONAL(e1, e2);
}

s32 syMatrixFastSin(f32 x) 
{
    s32 index = RAD_TO_IDX(x);
    u16 sinx = gSinTable[index & 0x7FF];

    if ((index & 0x800) != 0)
    {
        return -sinx;
    }
    return sinx;
}

s32 syMatrixFastCos(f32 x)
{
    s32 index = RAD_TO_IDX(x + F_CST_DTOR32(90.0F));
    u16 cosx = gSinTable[index & 0x7FF];
    
    if ((index & 0x800) != 0)
    { 
        return -cosx;
    }
    return cosx;
}

// As noticed in Kirby64 decomp, these functions are copies from libultra, but
// with explicit float constants and other slight modifications.

void syMatrixLookAtF
(
    Mtx44f *mf,
    f32 eye_x,
    f32 eye_y,
    f32 eye_z,
    f32 at_x,
    f32 at_y,
    f32 at_z,
    f32 up_x,
    f32 up_y,
    f32 up_z
)
{
    f32 len, look_x, look_y, look_z, right_x, right_y, right_z;

    look_x = at_x - eye_x;
    look_y = at_y - eye_y;
    look_z = at_z - eye_z;

    /* Negate because positive Z is behind us: */
    len = -1.0F / sqrtf(SQUARE(look_x) + SQUARE(look_y) + SQUARE(look_z));
    look_x *= len;
    look_y *= len;
    look_z *= len;

    /* Right = Up x Look */
    right_x = up_y * look_z - up_z * look_y;
    right_y = up_z * look_x - up_x * look_z;
    right_z = up_x * look_y - up_y * look_x;

    len = 1.0F / sqrtf(SQUARE(right_x) + SQUARE(right_y) + SQUARE(right_z));
    right_x *= len;
    right_y *= len;
    right_z *= len;

    /* Up = Look x Right */
    up_x = look_y * right_z - look_z * right_y;
    up_y = look_z * right_x - look_x * right_z;
    up_z = look_x * right_y - look_y * right_x;

    len = 1.0F / sqrtf(SQUARE(up_x) + SQUARE(up_y) + SQUARE(up_z));
    up_x *= len;
    up_y *= len;
    up_z *= len;

    (*mf)[0][0] = right_x;
    (*mf)[1][0] = right_y;
    (*mf)[2][0] = right_z;
    (*mf)[3][0] = -(eye_x * right_x + eye_y * right_y + eye_z * right_z);

    (*mf)[0][1] = up_x;
    (*mf)[1][1] = up_y;
    (*mf)[2][1] = up_z;
    (*mf)[3][1] = -(eye_x * up_x + eye_y * up_y + eye_z * up_z);

    (*mf)[0][2] = look_x;
    (*mf)[1][2] = look_y;
    (*mf)[2][2] = look_z;
    (*mf)[3][2] = -(eye_x * look_x + eye_y * look_y + eye_z * look_z);

    (*mf)[0][3] = 0;
    (*mf)[1][3] = 0;
    (*mf)[2][3] = 0;
    (*mf)[3][3] = 1;
}

void syMatrixLookAt
(
    Mtx *m,
    f32 eye_x,
    f32 eye_y,
    f32 eye_z,
    f32 at_x,
    f32 at_y,
    f32 at_z,
    f32 up_x,
    f32 up_y,
    f32 up_z
)
{
    Mtx44f mf;

    syMatrixLookAtF(&mf, eye_x, eye_y, eye_z, at_x, at_y, at_z, up_x, up_y, up_z);

    syMatrixF2L(&mf, m);
}

// Modified version of guLookAtF that takes an extra f32 argument and calls func_80019438
void syMatrixModLookAtF(
    Mtx44f *mf,
    f32 eye_x,
    f32 eye_y,
    f32 eye_z,
    f32 at_x,
    f32 at_y,
    f32 at_z,
    f32 arg7,
    f32 up_x,
    f32 up_y,
    f32 up_z) {
    f32 len;
    Vec3f look;
    Vec3f right;

    look.x = at_x - eye_x;
    look.y = at_y - eye_y;
    look.z = at_z - eye_z;

    /* Negate because positive Z is behind us: */
    len = -1.0F / sqrtf(look.x * look.x + look.y * look.y + look.z * look.z);
    look.x *= len;
    look.y *= len;
    look.z *= len;

    /* Right = Up x Look */

    right.x = up_y * look.z - up_z * look.y;
    right.y = up_z * look.x - up_x * look.z;
    right.z = up_x * look.y - up_y * look.x;
    len     = 1.0F / sqrtf(right.x * right.x + right.y * right.y + right.z * right.z);
    right.x *= len;
    right.y *= len;
    right.z *= len;

    func_80019438(&right, &look, arg7);
    up_x = (look.y * right.z) - (look.z * right.y);
    up_y = (look.z * right.x) - (look.x * right.z);
    up_z = (look.x * right.y) - (look.y * right.x);
    len = 1.0F / sqrtf(((up_x * up_x) + (up_y * up_y)) + (up_z * up_z));
    up_x = up_x * len;
    up_y = up_y * len;
    up_z = up_z * len;

    (*mf)[0][0] = right.x;
    (*mf)[1][0] = right.y;
    (*mf)[2][0] = right.z;
    (*mf)[3][0] = -(eye_x * right.x + eye_y * right.y + eye_z * right.z);

    (*mf)[0][1] = up_x;
    (*mf)[1][1] = up_y;
    (*mf)[2][1] = up_z;
    (*mf)[3][1] = -(eye_x * up_x + eye_y * up_y + eye_z * up_z);

    (*mf)[0][2] = look.x;
    (*mf)[1][2] = look.y;
    (*mf)[2][2] = look.z;
    (*mf)[3][2] = -(eye_x * look.x + eye_y * look.y + eye_z * look.z);

    (*mf)[0][3] = 0;
    (*mf)[1][3] = 0;
    (*mf)[2][3] = 0;
    (*mf)[3][3] = 1;
}

void syMatrixModLookAt
(
    Mtx *m,
    f32 eye_x,
    f32 eye_y,
    f32 eye_z,
    f32 at_x,
    f32 at_y,
    f32 at_z,
    f32 arg7,
    f32 up_x,
    f32 up_y,
    f32 up_z
)
{
    Mtx44f mf;

    syMatrixModLookAtF(&mf, eye_x, eye_y, eye_z, at_x, at_y, at_z, arg7, up_x, up_y, up_z);

    syMatrixF2L(&mf, m);
}

// modified like hal's version of guLookAtF
void syMatrixLookAtReflectF
(
    Mtx44f *mf,
    LookAt *l,
    f32 eye_x,
    f32 eye_y,
    f32 eye_z,
    f32 at_x,
    f32 at_y,
    f32 at_z,
    f32 up_x,
    f32 up_y,
    f32 up_z
)
{
    f32 len, look_x, look_y, look_z, right_x, right_y, right_z;

    look_x = at_x - eye_x;
    look_y = at_y - eye_y;
    look_z = at_z - eye_z;

    /* Negate because positive Z is behind us: */
    len = -1.0F / sqrtf(look_x * look_x + look_y * look_y + look_z * look_z);
    look_x *= len;
    look_y *= len;
    look_z *= len;

    /* Right = Up x Look */

    right_x = up_y * look_z - up_z * look_y;
    right_y = up_z * look_x - up_x * look_z;
    right_z = up_x * look_y - up_y * look_x;

    len = 1.0F / sqrtf(right_x * right_x + right_y * right_y + right_z * right_z);
    right_x *= len;
    right_y *= len;
    right_z *= len;

    /* Up = Look x Right */

    up_x = look_y * right_z - look_z * right_y;
    up_y = look_z * right_x - look_x * right_z;
    up_z = look_x * right_y - look_y * right_x;

    len = 1.0F / sqrtf(up_x * up_x + up_y * up_y + up_z * up_z);
    up_x *= len;
    up_y *= len;
    up_z *= len;

    /* reflectance vectors = Up and Right */

    l->l[0].l.dir[0]  = FTOFRAC8(right_x);
    l->l[0].l.dir[1]  = FTOFRAC8(right_y);
    l->l[0].l.dir[2]  = FTOFRAC8(right_z);
    l->l[1].l.dir[0]  = FTOFRAC8(up_x);
    l->l[1].l.dir[1]  = FTOFRAC8(up_y);
    l->l[1].l.dir[2]  = FTOFRAC8(up_z);
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

    (*mf)[0][0] = right_x;
    (*mf)[1][0] = right_y;
    (*mf)[2][0] = right_z;
    (*mf)[3][0] = -(eye_x * right_x + eye_y * right_y + eye_z * right_z);

    (*mf)[0][1] = up_x;
    (*mf)[1][1] = up_y;
    (*mf)[2][1] = up_z;
    (*mf)[3][1] = -(eye_x * up_x + eye_y * up_y + eye_z * up_z);

    (*mf)[0][2] = look_x;
    (*mf)[1][2] = look_y;
    (*mf)[2][2] = look_z;
    (*mf)[3][2] = -(eye_x * look_x + eye_y * look_y + eye_z * look_z);

    (*mf)[0][3] = 0;
    (*mf)[1][3] = 0;
    (*mf)[2][3] = 0;
    (*mf)[3][3] = 1;
}

void syMatrixLookAtReflect
(
    Mtx *m,
    LookAt *l,
    f32 eye_x,
    f32 eye_y,
    f32 eye_z,
    f32 at_x,
    f32 at_y,
    f32 at_z,
    f32 up_x,
    f32 up_y,
    f32 up_z
)
{
    Mtx44f mf;

    syMatrixLookAtReflectF(&mf, l, eye_x, eye_y, eye_z, at_x, at_y, at_z, up_x, up_y, up_z);

    syMatrixF2L(&mf, m);
}

void syMatrixModLookAtReflectF
(
    Mtx44f *mf,
    LookAt *l,
    f32 eye_x,
    f32 eye_y,
    f32 eye_z,
    f32 at_x,
    f32 at_y,
    f32 at_z,
    f32 roll,
    f32 up_x,
    f32 up_y,
    f32 up_z
)
{
    f32 len;
    Vec3f look;
    Vec3f right;

    look.x = at_x - eye_x;
    look.y = at_y - eye_y;
    look.z = at_z - eye_z;

    /* Negate because positive Z is behind us: */
    len = -1.0F / sqrtf(look.x * look.x + look.y * look.y + look.z * look.z);
    look.x *= len;
    look.y *= len;
    look.z *= len;

    /* Right = Up x Look */

    right.x = up_y * look.z - up_z * look.y;
    right.y = up_z * look.x - up_x * look.z;
    right.z = up_x * look.y - up_y * look.x;

    len = 1.0F / sqrtf(right.x * right.x + right.y * right.y + right.z * right.z);
    right.x *= len;
    right.y *= len;
    right.z *= len;

    /* Up = Look x Right */

    func_80019438(&right, &look, roll);
    up_x = look.y * right.z - look.z * right.y;
    up_y = look.z * right.x - look.x * right.z;
    up_z = look.x * right.y - look.y * right.x;

    len = 1.0F / sqrtf(up_x * up_x + up_y * up_y + up_z * up_z);
    up_x *= len;
    up_y *= len;
    up_z *= len;

    /* reflectance vectors = Up and Right */

    l->l[0].l.dir[0]  = FTOFRAC8(right.x);
    l->l[0].l.dir[1]  = FTOFRAC8(right.y);
    l->l[0].l.dir[2]  = FTOFRAC8(right.z);
    l->l[1].l.dir[0]  = FTOFRAC8(up_x);
    l->l[1].l.dir[1]  = FTOFRAC8(up_y);
    l->l[1].l.dir[2]  = FTOFRAC8(up_z);
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
    (*mf)[3][0] = -(eye_x * right.x + eye_y * right.y + eye_z * right.z);

    (*mf)[0][1] = up_x;
    (*mf)[1][1] = up_y;
    (*mf)[2][1] = up_z;
    (*mf)[3][1] = -(eye_x * up_x + eye_y * up_y + eye_z * up_z);

    (*mf)[0][2] = look.x;
    (*mf)[1][2] = look.y;
    (*mf)[2][2] = look.z;
    (*mf)[3][2] = -(eye_x * look.x + eye_y * look.y + eye_z * look.z);

    (*mf)[0][3] = 0;
    (*mf)[1][3] = 0;
    (*mf)[2][3] = 0;
    (*mf)[3][3] = 1;
}

void syMatrixModLookAtReflect
(
    Mtx *m,
    LookAt *l,
    f32 eye_x,
    f32 eye_y,
    f32 eye_z,
    f32 at_x,
    f32 at_y,
    f32 at_z,
    f32 roll,
    f32 up_x,
    f32 up_y,
    f32 up_z
)
{
    Mtx44f mf;

    syMatrixModLookAtReflectF(&mf, l, eye_x, eye_y, eye_z, at_x, at_y, at_z, roll, up_x, up_y, up_z);

    syMatrixF2L(&mf, m);
}

void syMatrixOrthoF(Mtx44f *mf, f32 l, f32 r, f32 b, f32 t, f32 n, f32 f, f32 scale)
{
    s32 i, j;

    (*mf)[0][0] = 2 / (r - l);
    (*mf)[1][1] = 2 / (t - b);
    (*mf)[2][2] = -2 / (f - n);
    (*mf)[3][0] = -(r + l) / (r - l);
    (*mf)[3][1] = -(t + b) / (t - b);
    (*mf)[3][2] = -(f + n) / (f - n);
    (*mf)[3][3] = 1;

    for (i = 0; i < 3; i++)
    {
        if (i != 0)
        {
            (*mf)[i][0] = 0;
        }
        if (i != 1)
        {
            (*mf)[i][1] = 0;
        }
        if (i != 2)
        {
            (*mf)[i][2] = 0;
        }
        if (i != 3)
        {
            (*mf)[i][3] = 0;
        }
    }
    for (i = 0; i < ARRAY_COUNT(*mf); i++)
    {
        for (j = 0; j < ARRAY_COUNT(*mf[0]); j++)
        {
            (*mf)[i][j] *= scale;
        }
    }
}

void syMatrixOrtho(Mtx *m, f32 l, f32 r, f32 b, f32 t, f32 n, f32 f, f32 scale)
{
    Mtx44f mf;

    syMatrixOrthoF(&mf, l, r, b, t, n, f, scale);

    syMatrixF2L(&mf, m);
}

// this function seems to have larger changes than the prior `gu` functions
void syMatrixPerspFastF(Mtx44f mf, u16 *persp_norm, f32 fovy, f32 aspect, f32 near, f32 far, f32 scale)
{
    f32 cot;
    u16 index;
    f32 sin, cos;
    s32 unused[4];

    fovy *= 0.008726646F;

    lbGetSinCosUShort(sin, cos, fovy, index);

    cot = cos / sin;

    mf[0][0] = (cot / aspect) * scale;
    mf[1][1] = cot * scale;
    mf[2][2] = ((near + far) * scale) / (near - far);
    mf[2][3] = -scale;
    mf[3][2] = (2.0F * near * far * scale) / (near - far);
    mf[3][3] = 0.0F;

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

    if (persp_norm != NULL)
    {
        if (near + far <= 2.0F)
        {
            *persp_norm = 0xFFFF;
        }
        else
        {
            *persp_norm = (2.0F * 65536.0F) / (near + far);

            if (*persp_norm <= 0)
            {
                *persp_norm = 1;
            }
        }
    }
}

void syMatrixPerspFast
(
    Mtx *m,
    u16 *persp_norm,
    f32 fovy,
    f32 aspect,
    f32 near,
    f32 far,
    f32 scale
)
{
    Mtx44f mf;

    syMatrixPerspFastF(mf, persp_norm, fovy, aspect, near, far, scale);

    syMatrixF2L(&mf, m);
}

void syMatrixPerspF
(
    Mtx44f mf,
    u16 *persp_norm,
    f32 fovy,
    f32 aspect,
    f32 near,
    f32 far,
    f32 scale
)
{
    s32 unused1;
    f32 cot;
    f32 sin;
    f32 cos;
    s32 unused2;

    fovy *= DTOR32;
    cos = cosf(fovy / 2);
    sin = sinf(fovy / 2);
    cot = cos / sin;

    mf[0][0] = (cot / aspect) * scale;
    mf[1][1] = cot * scale;
    mf[2][2] = ((near + far) * scale) / (near - far);
    mf[2][3] = -scale;
    mf[3][2] = (2.0F * near * far * scale) / (near - far);
    mf[3][3] = 0.0F;

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

    if (persp_norm != NULL)
    {
        if (near + far <= 2.0F)
        {
            *persp_norm = 0xFFFF;
        }
        else
        {
            *persp_norm = (2.0F * 65536.0F) / (near + far);

            if (*persp_norm <= 0)
            {
                *persp_norm = 1;
            }
        }
    }
}


void syMatrixPersp(Mtx *m, u16 *persp_norm, f32 fovy, f32 aspect, f32 near, f32 far, f32 scale)
{
    Mtx44f mf;

    syMatrixPerspF(mf, persp_norm, fovy, aspect, near, far, scale);

    syMatrixF2L(&mf, m);
}

void syMatrixScaF(Mtx44f *mf, f32 x, f32 y, f32 z)
{
    s32 i, j;

    (*mf)[0][0] = x;
    (*mf)[1][1] = y;
    (*mf)[2][2] = z;
    (*mf)[3][3] = 1.0F;

    for (i = 0; i < ARRAY_COUNT(*mf); i++)
    {
        for (j = 0; j < ARRAY_COUNT(*mf[0]); j++)
        {
            if (i != j)
            {
                (*mf)[i][j] = 0;
            }
        }
    }
}

void syMatrixSca(Mtx *m, f32 x, f32 y, f32 z)
{
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

void syMatrixRowscaleF(Mtx44f *mf, f32 x, f32 y, f32 z)
{
    s32 j;

    for (j = 0; j < ARRAY_COUNT(*mf[0]); j++)
    {
        if ((*mf)[0][j] != 0.0F)
        {
            (*mf)[0][j] *= x;
        }
    }
    for (j = 0; j < ARRAY_COUNT(*mf[0]); j++)
    {
        if ((*mf)[1][j] != 0.0F)
        {
            (*mf)[1][j] *= y;
        }
    }
    for (j = 0; j < ARRAY_COUNT(*mf[0]); j++)
    {
        if ((*mf)[2][j] != 0.0F)
        {
            (*mf)[2][j] *= z;
        }
    }
}

void syMatrixTraF(Mtx44f *mf, f32 x, f32 y, f32 z)
{
    int i, j;

    (*mf)[3][0] = x;
    (*mf)[3][1] = y;
    (*mf)[3][2] = z;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < ARRAY_COUNT(*mf[0]); j++)
        {
            if (i == j)
            {
                (*mf)[i][j] = 1.0F;
            }
            else (*mf)[i][j] = 0.0F;
        }
    }
    (*mf)[3][3] = 1.0F;
}

#if 0
void syMatrixTranslate(Mtx *m, f32 x, f32 y, f32 z)
{
    u32 tempx = FTOFIX32(x), tempy = FTOFIX32(y), tempz = FTOFIX32(z);

    m->m[0][0] = COMBINE_INTEGRAL(FTOFIX32(1), FTOFIX32(0));
    m->m[2][0] = COMBINE_FRACTIONAL(FTOFIX32(1), FTOFIX32(0));
    m->m[0][1] = COMBINE_INTEGRAL(FTOFIX32(0), FTOFIX32(0));
    m->m[2][1] = COMBINE_FRACTIONAL(FTOFIX32(0), FTOFIX32(0));
    m->m[0][2] = COMBINE_INTEGRAL(FTOFIX32(0), FTOFIX32(1));
    m->m[2][2] = COMBINE_FRACTIONAL(FTOFIX32(0), FTOFIX32(1));
    m->m[0][3] = COMBINE_INTEGRAL(FTOFIX32(0), FTOFIX32(0));
    m->m[2][3] = COMBINE_FRACTIONAL(FTOFIX32(0), FTOFIX32(0));
    m->m[1][0] = COMBINE_INTEGRAL(FTOFIX32(0), FTOFIX32(0));
    m->m[3][0] = COMBINE_FRACTIONAL(FTOFIX32(0), FTOFIX32(0));
    m->m[1][1] = COMBINE_INTEGRAL(FTOFIX32(1), FTOFIX32(0));
    m->m[3][1] = COMBINE_FRACTIONAL(FTOFIX32(1), FTOFIX32(0));
    m->m[1][2] = COMBINE_INTEGRAL(tempx, tempy);
    m->m[3][2] = COMBINE_FRACTIONAL(tempx, tempy);
    m->m[1][3] = COMBINE_INTEGRAL(tempz, FTOFIX32(1));
    m->m[3][3] = COMBINE_FRACTIONAL(tempz, FTOFIX32(1));
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_gu/syMatrixTranslate.s")
#endif

// takes radians instead of degrees
void syMatrixRotRF(Mtx44f *mf, f32 a, f32 x, f32 y, f32 z)
{
    f32 sine;
    f32 cosine;
    f32 ab, bc, ca, t;

    guNormalize(&x, &y, &z);
    sine   = __sinf(a);
    cosine = __cosf(a);
    t      = (1.0F - cosine);
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

    (*mf)[0][3] = 0.0F;
    (*mf)[1][3] = 0.0F;
    (*mf)[2][3] = 0.0F;

    (*mf)[3][0] = 0.0F;
    (*mf)[3][1] = 0.0F;
    (*mf)[3][2] = 0.0F;
    (*mf)[3][3] = 1.0F;
}

void syMatrixRotR(Mtx *m, f32 a, f32 x, f32 y, f32 z)
{
    Mtx44f mf;

    syMatrixRotRF(&mf, a, x, y, z);

    syMatrixF2LFixedW(&mf, m);
}

void syMatrixTraRotRF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 angle, f32 rx, f32 ry, f32 rz)
{
    syMatrixRotRF(mf, angle, rx, ry, rz);
    (*mf)[3][0] = tx;
    (*mf)[3][1] = ty;
    (*mf)[3][2] = tz;
}

void syMatrixTraRotR(Mtx *m, f32 tx, f32 ty, f32 tz, f32 angle, f32 rx, f32 ry, f32 rz)
{
    Mtx44f mf;

    syMatrixTraRotRF(&mf, tx, ty, tz, angle, rx, ry, rz);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixTraRotRScaF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 angle, f32 rx, f32 ry, f32 rz, f32 sx, f32 sy, f32 sz)
{
    syMatrixRotRF(mf, angle, rx, ry, rz);
    (*mf)[3][0] = tx;
    (*mf)[3][1] = ty;
    (*mf)[3][2] = tz;
    syMatrixRowscaleF(mf, sx, sy, sz);
}

void syMatrixTraRotRSca(Mtx *m, f32 tx, f32 ty, f32 tz, f32 angle, f32 rx, f32 ry, f32 rz, f32 sx, f32 sy, f32 sz)
{
    Mtx44f mf;

    syMatrixTraRotRScaF(&mf, tx, ty, tz, angle, rx, ry, rz, sx, sy, sz);
    syMatrixF2LFixedW(&mf, m);
}

// Return rotation matrix given roll, pitch, and yaw in radians
void syMatrixRotRpyRF(Mtx44f *mf, f32 r, f32 p, f32 y)
{
    f32 sinr, sinp, siny;
    f32 cosr, cosp, cosy;

    sinr = __sinf(r);
    cosr = __cosf(r);
    sinp = __sinf(p);
    cosp = __cosf(p);
    siny = __sinf(y);
    cosy = __cosf(y);

    (*mf)[0][0] = cosp * cosy;
    (*mf)[0][1] = cosp * siny;
    (*mf)[0][2] = -sinp;

    (*mf)[1][0] = sinr * sinp * cosy - cosr * siny;
    (*mf)[1][1] = sinr * sinp * siny + cosr * cosy;
    (*mf)[1][2] = sinr * cosp;

    (*mf)[2][0] = cosr * sinp * cosy + sinr * siny;
    (*mf)[2][1] = cosr * sinp * siny - sinr * cosy;
    (*mf)[2][2] = cosr * cosp;

    (*mf)[3][2] = 0.0F;
    (*mf)[3][1] = 0.0F;
    (*mf)[3][0] = 0.0F;

    (*mf)[3][3] = 1.0F;
    (*mf)[2][3] = 0.0F;
    (*mf)[1][3] = 0.0F;
    (*mf)[0][3] = 0.0F;
}

#ifdef NON_MATCHING
void syMatrixRotRpyR(Mtx *m, f32 r, f32 p, f32 y)
{
    s32 sinr, sinp, siny;
    s32 cosr, cosp, cosy;
    u32 e1, e2;
    u16 index;

    index  = (s32)(r * 651.8986f) & 0xFFF;
    sinr = gSinTable[index & 0x7FF];
    if (index & 0x800) { sinr = -sinr; }
    cosr = gSinTable[(index + 0x400) & 0x7FF];
    if ((index + 0x400) & 0x800) { cosr = -cosr; }

    index  = (s32)(p * 651.8986f) & 0xFFF;
    sinp = gSinTable[index & 0x7FF];
    if (index & 0x800) { sinp = -sinp; }
    cosp = gSinTable[(index + 0x400) & 0x7FF];
    if ((index + 0x400) & 0x800) { cosp = -cosp; }

    index  = (s32)(y * 651.8986f) & 0xFFF;
    siny = gSinTable[index & 0x7FF];
    if (index & 0x800) { siny = -siny; }
    cosy = gSinTable[(index + 0x400) & 0x7FF];
    if ((index + 0x400) & 0x800) { cosy = -cosy; }

    // [0, 0] -> [0, 3]
    e1 = (cosp * cosy) >> 14;
    e2 = (cosp * siny) >> 14;
    // e3 = sinp * -2;
    m->m[0][0] = COMBINE_INTEGRAL(e1, e2);
    m->m[2][0] = COMBINE_FRACTIONAL(e1, e2);

    e1         = sinp * -2;
    m->m[0][1] = COMBINE_INTEGRAL(e1, 0);
    m->m[2][1] = COMBINE_FRACTIONAL(e1, 0);

    // [1, 0] -> [1, 3]
    e1 = ((((sinr * sinp) >> 15) * cosy) >> 14) - ((cosr * siny) >> 14);
    e2 = ((((sinr * sinp) >> 15) * siny) >> 14) + ((cosr * cosy) >> 14);
    // e3 = (sinr * cosp) >> 14;
    m->m[0][2] = COMBINE_INTEGRAL(e1, e2);
    m->m[2][2] = COMBINE_FRACTIONAL(e1, e2);

    e1 = (sinr * cosp) >> 14;
    // e2 = 0;
    m->m[0][3] = COMBINE_INTEGRAL(e1, 0);
    m->m[2][3] = COMBINE_FRACTIONAL(e1, 0);

    // [2, 0] -> [2, 3]
    e1 = ((((cosr * sinp) >> 15) * cosy) >> 14) + ((sinr * siny) >> 14);
    e2 = ((((cosr * sinp) >> 15) * siny) >> 14) - ((sinr * cosy) >> 14);
    // e3 = (cosr * cosp) >> 14;
    m->m[1][0] = COMBINE_INTEGRAL(e1, e2);
    m->m[3][0] = COMBINE_FRACTIONAL(e1, e2);

    e1         = (cosr * cosp) >> 14;
    m->m[1][1] = COMBINE_INTEGRAL(e1, 0);
    m->m[3][1] = COMBINE_FRACTIONAL(e1, 0);

    // [3, 0] -> [3, 3]
    m->m[1][2] = COMBINE_INTEGRAL(FTOFIX32(0), FTOFIX32(0));
    m->m[3][2] = COMBINE_FRACTIONAL(FTOFIX32(0), FTOFIX32(0));

    m->m[1][3] = COMBINE_INTEGRAL(0, FTOFIX32(1.0F));
    m->m[3][3] = COMBINE_FRACTIONAL(0, FTOFIX32(1.0F));
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_gu/syMatrixRotRpyR.s")
#endif

void syMatrixTraRotRpyRF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 r, f32 p, f32 y)
{
    syMatrixRotRpyRF(mf, r, p, y);
    (*mf)[3][0] = tx;
    (*mf)[3][1] = ty;
    (*mf)[3][2] = tz;
}

#ifdef NON_MATCHING
void syMatrixTraRotRpyR(Mtx *m, f32 tx, f32 ty, f32 tz, f32 r, f32 p, f32 y)
{
    s32 sinr, sinp, siny;
    s32 cosr, cosp, cosy;
    u32 e1, e2;
    u16 index;

    index  = (s32)(r * 651.8986f) & 0xFFF;
    sinr = gSinTable[index & 0x7FF];
    if (index & 0x800) { sinr = -sinr; }
    cosr = gSinTable[(index + 0x400) & 0x7FF];
    if ((index + 0x400) & 0x800) { cosr = -cosr; }

    index  = (s32)(p * 651.8986f) & 0xFFF;
    sinp = gSinTable[index & 0x7FF];
    if (index & 0x800) { sinp = -sinp; }
    cosp = gSinTable[(index + 0x400) & 0x7FF];
    if ((index + 0x400) & 0x800) { cosp = -cosp; }

    index  = (s32)(y * 651.8986f) & 0xFFF;
    siny = gSinTable[index & 0x7FF];
    if (index & 0x800) { siny = -siny; }
    cosy = gSinTable[(index + 0x400) & 0x7FF];
    if ((index + 0x400) & 0x800) { cosy = -cosy; }

    // [0, 0] -> [0, 3]
    e1 = (cosp * cosy) >> 14;
    e2 = (cosp * siny) >> 14;
    // e3 = sinp * -2;
    m->m[0][0] = COMBINE_INTEGRAL(e1, e2);
    m->m[2][0] = COMBINE_FRACTIONAL(e1, e2);

    e1         = sinp * -2;
    m->m[0][1] = COMBINE_INTEGRAL(e1, 0);
    m->m[2][1] = COMBINE_FRACTIONAL(e1, 0);

    // [1, 0] -> [1, 3]
    e1 = ((((sinr * sinp) >> 15) * cosy) >> 14) - ((cosr * siny) >> 14);
    e2 = ((((sinr * sinp) >> 15) * siny) >> 14) + ((cosr * cosy) >> 14);
    // e3 = (sinr * cosp) >> 14;
    m->m[0][2] = COMBINE_INTEGRAL(e1, e2);
    m->m[2][2] = COMBINE_FRACTIONAL(e1, e2);

    e1 = (sinr * cosp) >> 14;
    // e2 = 0;
    m->m[0][3] = COMBINE_INTEGRAL(e1, 0);
    m->m[2][3] = COMBINE_FRACTIONAL(e1, 0);

    // [2, 0] -> [2, 3]
    e1 = ((((cosr * sinp) >> 15) * cosy) >> 14) + ((sinr * siny) >> 14);
    e2 = ((((cosr * sinp) >> 15) * siny) >> 14) - ((sinr * cosy) >> 14);
    // e3 = (cosr * cosp) >> 14;
    m->m[1][0] = COMBINE_INTEGRAL(e1, e2);
    m->m[3][0] = COMBINE_FRACTIONAL(e1, e2);

    e1         = (cosr * cosp) >> 14;
    m->m[1][1] = COMBINE_INTEGRAL(e1, 0);
    m->m[3][1] = COMBINE_FRACTIONAL(e1, 0);

    // [3, 0] -> [3, 3]
    e1         = FTOFIX32(tx);
    e2         = FTOFIX32(ty);
    m->m[1][2] = COMBINE_INTEGRAL(e1, e2);
    m->m[3][2] = COMBINE_FRACTIONAL(e1, e2);

    e1         = FTOFIX32(tz);
    e2         = FTOFIX32(1.0F);
    m->m[1][3] = COMBINE_INTEGRAL(e1, e2);
    m->m[3][3] = COMBINE_FRACTIONAL(e1, e2);
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_gu/syMatrixTraRotRpyR.s")
#endif

void syMatrixTraRotRpyRScaF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 r, f32 p, f32 y, f32 sx, f32 sy, f32 sz)
{
    syMatrixRotRpyRF(mf, r, p, y);
    (*mf)[3][0] = tx;
    (*mf)[3][1] = ty;
    (*mf)[3][2] = tz;
    syMatrixRowscaleF(mf, sx, sy, sz);
}

#ifdef NON_MATCHING
void syMatrixTraRotRpyRSca(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 r, f32 p, f32 y, f32 sx, f32 sy, f32 sz)
{
    s32 sinr, sinp, siny;
    s32 cosr, cosp, cosy;
    s32 scaleX, scaleY, scaleZ;
    u32 e1, e2;
    u16 index;

    index  = (s32)(r * 651.8986f) & 0xFFF;
    sinr = gSinTable[index & 0x7FF];
    if (index & 0x800) { sinr = -sinr; }
    cosr = gSinTable[(index + 0x400) & 0x7FF];
    if ((index + 0x400) & 0x800) { cosr = -cosr; }

    index  = (s32)(p * 651.8986f) & 0xFFF;
    sinp = gSinTable[index & 0x7FF];
    if (index & 0x800) { sinp = -sinp; }
    cosp = gSinTable[(index + 0x400) & 0x7FF];
    if ((index + 0x400) & 0x800) { cosp = -cosp; }

    index  = (s32)(y * 651.8986f) & 0xFFF;
    siny = gSinTable[index & 0x7FF];
    if (index & 0x800) { siny = -siny; }
    cosy = gSinTable[(index + 0x400) & 0x7FF];
    if ((index + 0x400) & 0x800) { cosy = -cosy; }

    scaleX = (s32)(sx * (f32)0x100);
    scaleY = (s32)(sy * (f32)0x100);
    scaleZ = (s32)(sz * (f32)0x100);

    // [0, 0] -> [0, 3]
    e1         = (((cosp * cosy) >> 14) * scaleX) / 256;
    e2         = (((cosp * siny) >> 14) * scaleX) / 256;
    m->m[0][0] = COMBINE_INTEGRAL(e1, e2);
    m->m[2][0] = COMBINE_FRACTIONAL(e1, e2);

    e1         = (sinp * -2 * scaleX) / 256;
    m->m[0][1] = COMBINE_INTEGRAL(e1, 0);
    m->m[2][1] = COMBINE_FRACTIONAL(e1, 0);

    // [1, 0] -> [1, 3]
    e1         = (((((sinr * sinp) >> 14) * cosy) >> 14) - ((cosr * siny) >> 14) * scaleY) / 256;
    e2         = (((((sinr * sinp) >> 14) * siny) >> 14) + ((cosr * cosy) >> 14) * scaleY) / 256;
    m->m[0][2] = COMBINE_INTEGRAL(e1, e2);
    m->m[2][2] = COMBINE_FRACTIONAL(e1, e2);

    e1 = (((sinr * cosp) >> 14) * scaleY) / 256;
    // e2 = 0;
    m->m[0][3] = COMBINE_INTEGRAL(e1, 0);
    m->m[2][3] = COMBINE_FRACTIONAL(e1, 0);

    // [2, 0] -> [2, 3]
    e1         = (((((cosr * sinp) >> 14) * cosy) >> 14) + ((sinr * siny) >> 14) * scaleZ) / 256;
    e2         = (((((cosr * sinp) >> 14) * siny) >> 14) - ((sinr * cosy) >> 14) * scaleZ) / 256;
    m->m[1][0] = COMBINE_INTEGRAL(e1, e2);
    m->m[3][0] = COMBINE_FRACTIONAL(e1, e2);

    e1         = (((cosr * cosp) >> 14) * scaleZ) / 256;
    m->m[1][1] = COMBINE_INTEGRAL(e1, 0);
    m->m[3][1] = COMBINE_FRACTIONAL(e1, 0);

    // [3, 0] -> [3, 3]
    e1         = FTOFIX32(tx);
    e2         = FTOFIX32(ty);
    m->m[1][2] = COMBINE_INTEGRAL(e1, e2);
    m->m[3][2] = COMBINE_FRACTIONAL(e1, e2);

    e1         = FTOFIX32(tz);
    e2         = FTOFIX32(1.0F);
    m->m[1][3] = COMBINE_INTEGRAL(e1, e2);
    m->m[3][3] = COMBINE_FRACTIONAL(e1, e2);
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_gu/syMatrixTraRotRpyRSca.s")
#endif

// Pitch yaw roll, I think...
void syMatrixRotPyrRF(Mtx44f *mf, f32 r, f32 p, f32 y)
{
    f32 sinr, sinp, siny;
    f32 cosr, cosp, cosy;
    UNUSED u32 pad[4];

    sinr = __sinf(r);
    cosr = __cosf(r);
    sinp = __sinf(p);
    cosp = __cosf(p);
    siny = __sinf(y);
    cosy = __cosf(y);

    (*mf)[0][0] = cosy * cosp;
    (*mf)[0][1] = cosr * siny * cosp + sinr * sinp;
    (*mf)[0][2] = sinr * siny * cosp - cosr * sinp;

    (*mf)[1][0] = -siny;
    (*mf)[1][1] = cosr * cosy;
    (*mf)[1][2] = sinr * cosy;

    (*mf)[2][0] = cosy * sinp;
    (*mf)[2][1] = cosr * siny * sinp - sinr * cosp;
    (*mf)[2][2] = sinr * siny * sinp + cosr * cosp;

    (*mf)[0][3] = 0;
    (*mf)[1][3] = 0;
    (*mf)[2][3] = 0;

    (*mf)[3][0] = 0;
    (*mf)[3][1] = 0;
    (*mf)[3][2] = 0;
    (*mf)[3][3] = 1;
}

void syMatrixRotPyrR(Mtx *m, f32 r, f32 p, f32 y)
{
    Mtx44f mf;

    syMatrixRotPyrRF(&mf, r, p, y);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixTraRotPyrRF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 r, f32 p, f32 y)
{
    syMatrixRotPyrRF(mf, r, p, y);
    (*mf)[3][0] = tx;
    (*mf)[3][1] = ty;
    (*mf)[3][2] = tz;
}

void syMatrixTraRotPyrR(Mtx *m, f32 tx, f32 ty, f32 tz, f32 r, f32 p, f32 y)
{
    Mtx44f mf;

    syMatrixTraRotPyrRF(&mf, tx, ty, tz, r, p, y);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixTraRotPyrRScaF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 r, f32 p, f32 y, f32 sx, f32 sy, f32 sz)
{
    syMatrixRotPyrRF(mf, r, p, y);
    (*mf)[3][0] = tx;
    (*mf)[3][1] = ty;
    (*mf)[3][2] = tz;
    syMatrixRowscaleF(mf, sx, sy, sz);
}

void syMatrixTraRotPyrRSca(Mtx *m, f32 tx, f32 ty, f32 tz, f32 r, f32 p, f32 y, f32 sx, f32 sy, f32 sz)
{
    Mtx44f mf;

    syMatrixTraRotPyrRScaF(&mf, tx, ty, tz, r, p, y, sx, sy, sz);
    syMatrixF2LFixedW(&mf, m);
}

// rotate pitch yaw?
void syMatrixRotPyRF(Mtx44f *mf, f32 p, f32 y)
{
    f32 sinp, siny;
    f32 cosp, cosy;

    sinp = __sinf(p);
    cosp = __cosf(p);
    siny = __sinf(y);
    cosy = __cosf(y);

    (*mf)[0][0] = cosp * cosy;
    (*mf)[0][1] = cosp * siny;
    (*mf)[0][2] = -sinp;

    (*mf)[1][0] = -siny;
    (*mf)[1][1] = cosy;
    (*mf)[1][2] = 0;

    (*mf)[2][0] = sinp * cosy;
    (*mf)[2][1] = sinp * siny;
    (*mf)[2][2] = cosp;

    (*mf)[0][3] = (*mf)[1][3] = (*mf)[2][3] = (*mf)[3][0] = (*mf)[3][1] = (*mf)[3][2] = 0;

    (*mf)[3][3] = 1.0F;
}

void syMatrixRotPyR(Mtx *m, f32 p, f32 y)
{
    Mtx44f mf;

    syMatrixRotPyRF(&mf, p, y);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixTraRotPyRF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 p, f32 y)
{
    syMatrixRotPyRF(mf, p, y);
    (*mf)[3][0] = tx;
    (*mf)[3][1] = ty;
    (*mf)[3][2] = tz;
}

void syMatrixTraRotPyR(Mtx *m, f32 tx, f32 ty, f32 tz, f32 p, f32 y)
{
    Mtx44f mf;

    syMatrixTraRotPyRF(&mf, tx, ty, tz, p, y);
    syMatrixF2LFixedW(&mf, m);
}

// roll pitch
void syMatrixRotRpRF(Mtx44f *mf, f32 r, f32 p)
{
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

    (*mf)[3][3] = 1.0F;
}

void syMatrixRotRpR(Mtx *m, f32 r, f32 p)
{
    Mtx44f mf;

    syMatrixRotRpRF(&mf, r, p);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixTraRotRpRF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 r, f32 p)
{
    syMatrixRotRpRF(mf, r, p);
    (*mf)[3][0] = tx;
    (*mf)[3][1] = ty;
    (*mf)[3][2] = tz;
}

void syMatrixTraRotRpR(Mtx *m, f32 tx, f32 ty, f32 tz, f32 r, f32 p)
{
    Mtx44f mf;

    syMatrixTraRotRpRF(&mf, tx, ty, tz, r, p);
    syMatrixF2LFixedW(&mf, m);
}

// this has to be a fake matching, but whatever: it's unused
void syMatrixRotYawRF(Mtx44f *mf, f32 y)
{
    f32 siny;
    f32 cosy;

    siny = __sinf(y);
    cosy = __cosf(y);

    (*mf)[0][0] = (*mf)[1][1] = cosy;
    (*mf)[0][1]               = siny;

    (*mf)[1][0] = -siny;
    (*mf)[1][1] = cosy; // necessary for matching

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

void syMatrixRotYawR(Mtx *m, f32 y)
{
    Mtx44f mf;

    syMatrixRotYawRF(&mf, y);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixTraRotYawRF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 y)
{
    syMatrixRotYawRF(mf, y);
    (*mf)[3][0] = tx;
    (*mf)[3][1] = ty;
    (*mf)[3][2] = tz;
}

void syMatrixTraRotYawR(Mtx *m, f32 tx, f32 ty, f32 tz, f32 y)
{
    Mtx44f mf;

    syMatrixTraRotYawRF(&mf, tx, ty, tz, y);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixRotPitchRF(Mtx44f *mf, f32 p)
{
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

void syMatrixRotPitchR(Mtx *m, f32 p)
{
    Mtx44f mf;

    syMatrixRotPitchRF(&mf, p);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixTraRotPitchRF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 p)
{
    syMatrixRotPitchRF(mf, p);
    (*mf)[3][0] = tx;
    (*mf)[3][1] = ty;
    (*mf)[3][2] = tz;
}

void syMatrixTraRotPitchR(Mtx *m, f32 tx, f32 ty, f32 tz, f32 p)
{
    Mtx44f mf;

    syMatrixTraRotPitchRF(&mf, tx, ty, tz, p);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixRotDF(Mtx44f *mf, f32 a, f32 x, f32 y, f32 z)
{
    syMatrixRotRF(mf, F_CLC_DTOR32(a), x, y, z);
}

void syMatrixRotD(Mtx *m, f32 a, f32 x, f32 y, f32 z)
{
    Mtx44f mf;

    syMatrixRotRF(&mf, F_CLC_DTOR32(a), x, y, z);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixTraRotDF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 a, f32 rx, f32 ry, f32 rz)
{
    syMatrixTraRotRF(mf, tx, ty, tz, F_CLC_DTOR32(a), rx, ry, rz);
}

void syMatrixTraRotD(Mtx *m, f32 tx, f32 ty, f32 tz, f32 a, f32 rx, f32 ry, f32 rz)
{
    Mtx44f mf;

    syMatrixTraRotRF(&mf, tx, ty, tz, F_CLC_DTOR32(a), rx, ry, rz);
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixRotRpyDF(Mtx44f *mf, f32 r, f32 p, f32 y)
{
    syMatrixRotRpyRF(mf, F_CLC_DTOR32(r), F_CLC_DTOR32(p), F_CLC_DTOR32(y));
}

void syMatrixRotRpyD(Mtx *m, f32 r, f32 p, f32 y)
{
    Mtx44f mf;

    syMatrixRotRpyRF(&mf, F_CLC_DTOR32(r), F_CLC_DTOR32(p), F_CLC_DTOR32(y));
    syMatrixF2LFixedW(&mf, m);
}

void syMatrixTraRotRpyDF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 r, f32 p, f32 y)
{
    syMatrixTraRotRpyRF(mf, tx, ty, tz, F_CLC_DTOR32(r), F_CLC_DTOR32(p), F_CLC_DTOR32(y));
}

void syMatrixTraRotRpyD(Mtx *m, f32 tx, f32 ty, f32 tz, f32 r, f32 p, f32 y)
{
    Mtx44f mf;

    syMatrixTraRotRpyRF(&mf, tx, ty, tz, F_CLC_DTOR32(r), F_CLC_DTOR32(p), F_CLC_DTOR32(y));
    syMatrixF2LFixedW(&mf, m);
}
