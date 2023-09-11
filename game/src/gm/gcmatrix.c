#include <sys/obj.h>

// 0x800ECD80
void func_ovl2_800ECD80(Mtx44f dst, Mtx44f src)
{
    dst[0][0] = src[0][0];
    dst[1][0] = src[1][0];
    dst[2][0] = src[2][0];
    dst[3][0] = src[3][0];
    dst[0][1] = src[0][1];
    dst[1][1] = src[1][1];
    dst[2][1] = src[2][1];
    dst[3][1] = src[3][1];
    dst[0][2] = src[0][2];
    dst[1][2] = src[1][2];
    dst[2][2] = src[2][2];
    dst[3][2] = src[3][2];
}

// 0x800ECDE4
void func_ovl2_800ECDE4(DObj *dobj, void *arg1, Mtx44f mtx)
{
    Vec3f *translate = &dobj->translate.vec.f;
    Vec3f *rotate = &dobj->rotate.vec.f;
    Vec3f *scale = &dobj->scale.vec.f;
    f32 sinx, siny, sinz;
    f32 cosx, cosy, cosz;

    sinx = bitmap_sinf(rotate->x);
    cosx = bitmap_cosf(rotate->x);

    siny = bitmap_sinf(rotate->y);
    cosy = bitmap_cosf(rotate->y);

    sinz = bitmap_sinf(rotate->z);
    cosz = bitmap_cosf(rotate->z);

    mtx[0][0] = cosy * cosz;
    mtx[0][1] = cosy * sinz;
    mtx[0][2] = -siny;

    mtx[1][0] = (sinx * siny * cosz) - (cosx * sinz);
    mtx[1][1] = (sinx * siny * sinz) + (cosx * cosz);
    mtx[1][2] = sinx * cosy;

    mtx[2][0] = (cosx * siny * cosz) + (sinx * sinz);
    mtx[2][1] = (cosx * siny * sinz) - (sinx * cosz);
    mtx[2][2] = cosx * cosy;

    if (scale->x != 1.0F)
    {
        mtx[0][0] *= scale->x;
        mtx[0][1] *= scale->x;
        mtx[0][2] *= scale->x;
    }
    if (scale->y != 1.0F)
    {
        mtx[1][0] *= scale->y;
        mtx[1][1] *= scale->y;
        mtx[1][2] *= scale->y;
    }
    if (scale->z != 1.0F)
    {
        mtx[2][0] *= scale->z;
        mtx[2][1] *= scale->z;
        mtx[2][2] *= scale->z;
    }
    mtx[3][0] = translate->x;
    mtx[3][1] = translate->y;
    mtx[3][2] = translate->z;
}

void func_ovl2_800ECFF4(DObj *dobj, UnkDObjData *arg1, Mtx44f mtx, Vec3f *scale_mul)
{
    Vec3f *translate = &dobj->translate.vec.f;
    Vec3f *rotate = &dobj->rotate.vec.f;
    Vec3f *scale = &dobj->scale.vec.f;
    Vec3f *nscale = &arg1->unk_dobjdata_0x90;
    f32 sinx, siny, sinz;
    f32 cosx, cosy, cosz;
    f32 invx, invy, invz;

    if (scale_mul != NULL)
    {
        nscale->x = scale_mul->x * scale->x;
        nscale->y = scale_mul->y * scale->y;
        nscale->z = scale_mul->z * scale->z;
    }
    else *nscale = *scale;

    sinx = bitmap_sinf(rotate->x);
    cosx = bitmap_cosf(rotate->x);

    siny = bitmap_sinf(rotate->y);
    cosy = bitmap_cosf(rotate->y);

    sinz = bitmap_sinf(rotate->z);
    cosz = bitmap_cosf(rotate->z);

    mtx[0][0] = cosy * cosz;
    mtx[0][1] = cosy * sinz;
    mtx[0][2] = -siny;

    mtx[1][0] = (sinx * siny * cosz) - (cosx * sinz);
    mtx[1][1] = (sinx * siny * sinz) + (cosx * cosz);
    mtx[1][2] = sinx * cosy;

    mtx[2][0] = (cosx * siny * cosz) + (sinx * sinz);
    mtx[2][1] = (cosx * siny * sinz) - (sinx * cosz);
    mtx[2][2] = cosx * cosy;

    if (nscale->x != 1.0F)
    {
        mtx[0][0] *= nscale->x;
        mtx[0][1] *= nscale->x;
        mtx[0][2] *= nscale->x;
    }
    if (nscale->y != 1.0F)
    {
        mtx[1][0] *= nscale->y;
        mtx[1][1] *= nscale->y;
        mtx[1][2] *= nscale->y;
    }
    if (nscale->z != 1.0F)
    {
        mtx[2][0] *= nscale->z;
        mtx[2][1] *= nscale->z;
        mtx[2][2] *= nscale->z;
    }
    if (scale_mul != NULL)
    {
        if (scale_mul->x != 1.0F)
        {
            if (scale_mul->x == 0.0F)
            {
                while (TRUE)
                {
                    fatal_printf("zero div x in gcSetMatrixNcs()\n");
                    scnmgr_crash_print_gobj_state();
                }
            }
            invx = 1.0F / scale_mul->x;

            mtx[0][0] *= invx;
            mtx[1][0] *= invx;
            mtx[2][0] *= invx;
        }
        if (scale_mul->y != 1.0F)
        {
            if (scale_mul->y == 0.0F)
            {
                while (TRUE)
                {
                    fatal_printf("zero div y in gcSetMatrixNcs()\n");
                    scnmgr_crash_print_gobj_state();
                }
            }
            invy = 1.0F / scale_mul->y;

            mtx[0][1] *= invy;
            mtx[1][1] *= invy;
            mtx[2][1] *= invy;
        }
        if (scale_mul->z != 1.0F)
        {
            if (scale_mul->z == 0.0F)
            {
                while (TRUE)
                {
                    fatal_printf("zero div z in gcSetMatrixNcs()\n");
                    scnmgr_crash_print_gobj_state();
                }
            }
            invz = 1.0F / scale_mul->z;

            mtx[0][2] *= invz;
            mtx[1][2] *= invz;
            mtx[2][2] *= invz;
        }
    }
    mtx[3][0] = translate->x;
    mtx[3][1] = translate->y;
    mtx[3][2] = translate->z;
}