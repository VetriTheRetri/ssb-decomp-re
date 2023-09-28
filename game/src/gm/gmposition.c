#include <sys/obj.h>
#include <ft/fighter.h>
#include <wp/weapon.h>
#include <it/item.h>

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
void func_ovl2_800ECDE4(DObj *dobj, ftParts *arg1, Mtx44f mtx)
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

// 0x800ECFF4
void gcSetMatrixNcs(DObj *dobj, ftParts *arg1, Mtx44f mtx, Vec3f *scale_mul)
{
    Vec3f *translate = &dobj->translate.vec.f;
    Vec3f *rotate = &dobj->rotate.vec.f;
    Vec3f *scale = &dobj->scale.vec.f;
    Vec3f *nscale = &arg1->unk_dobjtrans_0x90;
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

// 0x800ED3C0
void gcGetVectorWorldPosition(Mtx44f mtx, Vec3f *vec)
{
    Vec3f product;

    product.x = ((mtx[0][0] * vec->x) + (mtx[1][0] * vec->y) + (mtx[2][0] * vec->z)) + mtx[3][0];
    product.y = ((mtx[0][1] * vec->x) + (mtx[1][1] * vec->y) + (mtx[2][1] * vec->z)) + mtx[3][1];
    product.z = ((mtx[0][2] * vec->x) + (mtx[1][2] * vec->y) + (mtx[2][2] * vec->z)) + mtx[3][2];

    *vec = product;
}

// 0x800ED490
void func_ovl2_800ED490(Mtx44f dst, Mtx44f lhs, Mtx44f rhs)
{
    dst[0][0] = (lhs[0][0] * rhs[0][0]) + (lhs[1][0] * rhs[0][1]) + (lhs[2][0] * rhs[0][2]);
    dst[0][1] = (lhs[0][1] * rhs[0][0]) + (lhs[1][1] * rhs[0][1]) + (lhs[2][1] * rhs[0][2]);
    dst[0][2] = (lhs[0][2] * rhs[0][0]) + (lhs[1][2] * rhs[0][1]) + (lhs[2][2] * rhs[0][2]);

    dst[1][0] = (lhs[0][0] * rhs[1][0]) + (lhs[1][0] * rhs[1][1]) + (lhs[2][0] * rhs[1][2]);
    dst[1][1] = (lhs[0][1] * rhs[1][0]) + (lhs[1][1] * rhs[1][1]) + (lhs[2][1] * rhs[1][2]);
    dst[1][2] = (lhs[0][2] * rhs[1][0]) + (lhs[1][2] * rhs[1][1]) + (lhs[2][2] * rhs[1][2]);

    dst[2][0] = (lhs[0][0] * rhs[2][0]) + (lhs[1][0] * rhs[2][1]) + (lhs[2][0] * rhs[2][2]);
    dst[2][1] = (lhs[0][1] * rhs[2][0]) + (lhs[1][1] * rhs[2][1]) + (lhs[2][1] * rhs[2][2]);
    dst[2][2] = (lhs[0][2] * rhs[2][0]) + (lhs[1][2] * rhs[2][1]) + (lhs[2][2] * rhs[2][2]);

    dst[3][0] = ((lhs[0][0] * rhs[3][0]) + (lhs[1][0] * rhs[3][1]) + (lhs[2][0] * rhs[3][2])) + lhs[3][0];
    dst[3][1] = ((lhs[0][1] * rhs[3][0]) + (lhs[1][1] * rhs[3][1]) + (lhs[2][1] * rhs[3][2])) + lhs[3][1];
    dst[3][2] = ((lhs[0][2] * rhs[3][0]) + (lhs[1][2] * rhs[3][1]) + (lhs[2][2] * rhs[3][2])) + lhs[3][2];
}

// 0x800ED6EC
void gcSetInvMatrix(Mtx44f dst, Mtx44f src)
{
    f32 scale;

    dst[0][0] = (src[1][1] * src[2][2]) - (src[1][2] * src[2][1]);
    dst[1][0] = (src[1][0] * src[2][2]) - (src[1][2] * src[2][0]);
    dst[2][0] = (src[1][0] * src[2][1]) - (src[1][1] * src[2][0]);
    dst[3][0] = (src[3][0] * dst[0][0]) - (src[3][1] * dst[1][0]) + (src[3][2] * dst[2][0]);

    dst[0][1] = (src[0][1] * src[2][2]) - (src[0][2] * src[2][1]);
    dst[1][1] = (src[0][0] * src[2][2]) - (src[0][2] * src[2][0]);
    dst[2][1] = (src[0][0] * src[2][1]) - (src[0][1] * src[2][0]);
    dst[3][1] = (src[3][0] * dst[0][1]) - (src[3][1] * dst[1][1]) + (src[3][2] * dst[2][1]);

    dst[0][2] = (src[0][1] * src[1][2]) - (src[0][2] * src[1][1]);
    dst[1][2] = (src[0][0] * src[1][2]) - (src[0][2] * src[1][0]);
    dst[2][2] = (src[0][0] * src[1][1]) - (src[0][1] * src[1][0]);
    dst[3][2] = (src[3][0] * dst[0][2]) - (src[3][1] * dst[1][2]) + (src[3][2] * dst[2][2]);

    scale = (src[0][0] * dst[0][0]) - (src[0][1] * dst[1][0]) + (src[0][2] * dst[2][0]);

    dst[1][0] = -dst[1][0];
    dst[3][0] = -dst[3][0];
    dst[0][1] = -dst[0][1];
    dst[2][1] = -dst[2][1];
    dst[1][2] = -dst[1][2];
    dst[3][2] = -dst[3][2];

    if (scale == 0.0F)
    {
        while (TRUE)
        {
            fatal_printf("zero div in gcSetInvMatrix()\n");
            scnmgr_crash_print_gobj_state();
        }
    }
    scale = 1.0F / scale;

    dst[0][0] *= scale;
    dst[1][0] *= scale;
    dst[2][0] *= scale;
    dst[3][0] *= scale;
    dst[0][1] *= scale;
    dst[1][1] *= scale;
    dst[2][1] *= scale;
    dst[3][1] *= scale;
    dst[0][2] *= scale;
    dst[1][2] *= scale;
    dst[2][2] *= scale;
    dst[3][2] *= scale;
}

// 0x800EDA0C
void func_ovl2_800EDA0C(Mtx44f mtx, Vec3f *rotate)
{
    Mtx44f dst;
    f32 scale;
    s32 i;

    // i < 3
    for (i = 0; i < (ARRAY_COUNT(mtx[0]) - 1); i++)
    {
        scale = sqrtf(SQUARE(mtx[i][0]) + SQUARE(mtx[i][1]) + SQUARE(mtx[i][2]));

        if (scale != 0.0F)
        {
            scale = 1.0F / scale;
        }
        dst[i][0] = mtx[i][0] * scale;
        dst[i][1] = mtx[i][1] * scale;
        dst[i][2] = mtx[i][2] * scale;
    }
    if ((dst[0][2] == -1.0F) || (dst[0][2] == 1.0F))
    {
        if (dst[0][2] == -1.0F)
        {
            rotate->y = F_DEG_TO_RAD(90.0F);
            rotate->x = atan2f(dst[1][0], dst[1][1]);

        }
        else
        {
            rotate->y = F_DEG_TO_RAD(-90.0F);
            rotate->x = atan2f(-dst[1][0], dst[1][1]);
        }
        rotate->z = 0;
    }
    else
    {
        rotate->y = asinf(-dst[0][2]);
        rotate->x = atan2f(dst[1][2], dst[2][2]);
        rotate->z = atan2f(dst[0][1], dst[0][0]);
    }
}

// 0x800EDB88
void func_ovl2_800EDB88(Mtx44f mtx, Vec3f *vec)
{
    vec->x = mtx[3][0];
    vec->y = mtx[3][1];
    vec->z = mtx[3][2];
}

// 0x800EDBA4
void func_ovl2_800EDBA4(DObj *main_dobj)
{
    DObj *current_dobj;
    ftParts *unk_dobjtrans;
    ftParts *current_dobjdata;
    DObj *setup_dobj[18];
    DObj *second_dobj;
    u32 flag = ftGetStruct(main_dobj->parent_gobj)->x190_flag_b3;
    s32 i;

    if (flag == FALSE)
    {
        second_dobj = main_dobj;

        i = 0;

        while (TRUE)
        {
            unk_dobjtrans = second_dobj->unk_0x84;

            if (unk_dobjtrans->unk_dobjtrans_0x5 != 0)
            {
                break;
            }
            else if (second_dobj->parent == DObjParentNULL)
            {
                if (unk_dobjtrans->transform_update_mode == 0)
                {
                    func_ovl2_800ECDE4(second_dobj, unk_dobjtrans, unk_dobjtrans->unk_dobjtrans_0x10);

                    unk_dobjtrans->transform_update_mode = 1;
                }
                func_ovl2_800ECD80(unk_dobjtrans->unk_dobjtrans_0x50, unk_dobjtrans->unk_dobjtrans_0x10);

                unk_dobjtrans->unk_dobjtrans_0x5 = 1;

                break;
            }
            else
            {
                setup_dobj[i] = second_dobj;
                second_dobj = second_dobj->parent;

                i++;
            }
        }
        for (i = i - 1; i >= 0; i--)
        {
            second_dobj = setup_dobj[i];

            current_dobjdata = second_dobj->unk_0x84;

            if (current_dobjdata->transform_update_mode == 0)
            {
                func_ovl2_800ECDE4(second_dobj, current_dobjdata, current_dobjdata->unk_dobjtrans_0x10);

                current_dobjdata->transform_update_mode = 1;
            }
            func_ovl2_800ED490(current_dobjdata->unk_dobjtrans_0x50, unk_dobjtrans->unk_dobjtrans_0x50, current_dobjdata->unk_dobjtrans_0x10);

            current_dobjdata->unk_dobjtrans_0x5 = 1;
            unk_dobjtrans = current_dobjdata;
        }
    }
    else
    {
        second_dobj = main_dobj;

        i = 0;

        while (TRUE)
        {
            unk_dobjtrans = second_dobj->unk_0x84;

            if (unk_dobjtrans->unk_dobjtrans_0x5 != 0)
            {
                break;
            }
            else if (second_dobj->parent == DObjParentNULL)
            {
                if (unk_dobjtrans->transform_update_mode == 0)
                {
                    gcSetMatrixNcs(second_dobj, unk_dobjtrans, unk_dobjtrans->unk_dobjtrans_0x10, NULL);

                    unk_dobjtrans->transform_update_mode = 1;
                    unk_dobjtrans->unk_dobjtrans_0x6 = 1;
                }
                func_ovl2_800ECD80(unk_dobjtrans->unk_dobjtrans_0x50, unk_dobjtrans->unk_dobjtrans_0x10);

                unk_dobjtrans->unk_dobjtrans_0x5 = 1;

                break;
            }
            else
            {
                setup_dobj[i] = second_dobj;
                second_dobj = second_dobj->parent;

                i++;
            }
        }
        for (i = i - 1; i >= 0; i--)
        {
            second_dobj = setup_dobj[i];

            current_dobjdata = second_dobj->unk_0x84;

            if (current_dobjdata->transform_update_mode == 0)
            {
                gcSetMatrixNcs(second_dobj, current_dobjdata, current_dobjdata->unk_dobjtrans_0x10, &unk_dobjtrans->unk_dobjtrans_0x90);

                current_dobjdata->transform_update_mode = 1;
                current_dobjdata->unk_dobjtrans_0x6 = 1;
            }
            func_ovl2_800ED490(current_dobjdata->unk_dobjtrans_0x50, unk_dobjtrans->unk_dobjtrans_0x50, current_dobjdata->unk_dobjtrans_0x10);

            current_dobjdata->unk_dobjtrans_0x5 = 1;
            unk_dobjtrans = current_dobjdata;
        }
    }
}

// 0x800EDE00
void func_ovl2_800EDE00(DObj *main_dobj)
{
    ftParts *unk_dobjtrans = main_dobj->unk_0x84;

    if (unk_dobjtrans->unk_dobjtrans_0x7 == 0)
    {
        if (unk_dobjtrans->unk_dobjtrans_0x5 == 0)
        {
            func_ovl2_800EDBA4(main_dobj);
        }
        gcSetInvMatrix(unk_dobjtrans->unk_dobjtrans_0x9C, unk_dobjtrans->unk_dobjtrans_0x50);

        unk_dobjtrans->unk_dobjtrans_0x7 = 1;
    }
}

// 0x800EDE5C
void func_ovl2_800EDE5C(DObj *main_dobj)
{
    ftParts *unk_dobjtrans = main_dobj->unk_0x84;

    if (unk_dobjtrans->unk_dobjtrans_0x6 == 0)
    {
        if (unk_dobjtrans->unk_dobjtrans_0x5 == 0)
        {
            func_ovl2_800EDBA4(main_dobj);
        }
        unk_dobjtrans->unk_dobjtrans_0x90.x = sqrtf(SQUARE(unk_dobjtrans->unk_dobjtrans_0x50[0][0]) + SQUARE(unk_dobjtrans->unk_dobjtrans_0x50[0][1]) + SQUARE(unk_dobjtrans->unk_dobjtrans_0x50[0][2]));
        unk_dobjtrans->unk_dobjtrans_0x90.y = sqrtf(SQUARE(unk_dobjtrans->unk_dobjtrans_0x50[1][0]) + SQUARE(unk_dobjtrans->unk_dobjtrans_0x50[1][1]) + SQUARE(unk_dobjtrans->unk_dobjtrans_0x50[1][2]));
        unk_dobjtrans->unk_dobjtrans_0x90.z = sqrtf(SQUARE(unk_dobjtrans->unk_dobjtrans_0x50[2][0]) + SQUARE(unk_dobjtrans->unk_dobjtrans_0x50[2][1]) + SQUARE(unk_dobjtrans->unk_dobjtrans_0x50[2][2]));

        unk_dobjtrans->unk_dobjtrans_0x6 = 1;
    }
}

// 0x800EDF24
void ftParts_GetDObjWorldPosition(DObj *main_dobj, Vec3f *vec)
{
    ftParts *unk_dobjtrans;
    u32 flag = ftGetStruct(main_dobj->parent_gobj)->x190_flag_b3;

    if (flag == FALSE)
    {
        while (main_dobj != DObjParentNULL)
        {
            unk_dobjtrans = main_dobj->unk_0x84;

            if (unk_dobjtrans->unk_dobjtrans_0x5 != 0)
            {
                gcGetVectorWorldPosition(unk_dobjtrans->unk_dobjtrans_0x50, vec);

                return;
            }
            else if (unk_dobjtrans->transform_update_mode == 0)
            {
                func_ovl2_800ECDE4(main_dobj, unk_dobjtrans, unk_dobjtrans->unk_dobjtrans_0x10);

                unk_dobjtrans->transform_update_mode = 1;
            }
            gcGetVectorWorldPosition(unk_dobjtrans->unk_dobjtrans_0x10, vec);

            main_dobj = main_dobj->parent;
        }
    }
    else
    {
        unk_dobjtrans = main_dobj->unk_0x84;

        if (unk_dobjtrans->unk_dobjtrans_0x5 == 0)
        {
            func_ovl2_800EDBA4(main_dobj);
        }
        gcGetVectorWorldPosition(unk_dobjtrans->unk_dobjtrans_0x50, vec);
    }
}

// 0x800EE018
void func_ovl2_800EE018(DObj *main_dobj, Vec3f *vec)
{
    ftParts *unk_dobjtrans = main_dobj->unk_0x84;

    func_ovl2_800EDE00(main_dobj);
    gcGetVectorWorldPosition(unk_dobjtrans->unk_dobjtrans_0x9C, vec);
}

// 0x800EE050
void func_ovl2_800EE050(s32 arg0, Vec3f *arg1, Vec3f *arg2, bool32 *arg3, Mtx44f mtx, f32 *p_scale)
{
    Vec3f dist;
    f32 unused[2];
    f32 square;
    f32 scale;
    f32 temp;

    if ((arg0 == 3) && (*arg3 == FALSE))
    {
        dist.x = arg2->x - arg1->x;
        dist.y = arg2->y - arg1->y;
        dist.z = arg2->z - arg1->z;

        *p_scale = sqrtf(SQUARE(dist.x) + SQUARE(dist.y) + SQUARE(dist.z));

        if (*p_scale != 0.0F)
        {
            scale = 1.0F / *p_scale;

            dist.x *= scale;
            dist.y *= scale;
            dist.z *= scale;

            // JUST BARELY matches; otherwise 1.0F and square are swapped in the c.eq.s instruction operands; if(TRUE) necessary (for now)
            square = SQUARE(dist.x);

            if (TRUE && square == 1.0F)
            {
                if (dist.x >= 0.0F)
                {
                    mtx[0][0] = mtx[1][1] = mtx[2][2] = 1.0F;

                    mtx[0][1] =
                    mtx[0][2] =
                    mtx[1][0] =
                    mtx[1][2] =
                    mtx[2][0] =
                    mtx[2][1] = 0.0F;
                }
                else
                {
                    mtx[0][0] = mtx[1][1] = -1.0F;

                    mtx[2][2] = 1.0F;

                    mtx[0][1] =
                    mtx[0][2] =
                    mtx[1][0] =
                    mtx[1][2] =
                    mtx[2][0] =
                    mtx[2][1] = 0.0F;
                }
            }
            else
            {
                mtx[0][0] = temp = dist.x;
                mtx[1][2] = (dist.z * dist.y) / (1.0F + dist.x);
                mtx[2][1] = (dist.z * dist.y) / (1.0F + dist.x);

                scale = (1.0F / (1.0F - SQUARE(temp)));

                mtx[1][1] = ((1.0F - (SQUARE(dist.z) * scale)) * temp) + (SQUARE(dist.z) * scale);
                mtx[2][0] = dist.z;
                mtx[0][2] = -dist.z;

                mtx[2][2] = ((1.0F - (SQUARE(dist.y) * scale)) * temp) + (SQUARE(dist.y) * scale);
                mtx[0][1] = dist.y;
                mtx[1][0] = -dist.y;
            }
            mtx[3][0] = *p_scale *= 0.5F;
            mtx[3][1] = 0.0F;
            mtx[3][2] = 0.0F;

            *arg3 = TRUE;
        }
    }
}

// 0x800EE24C
u32 func_ovl2_800EE24C(Vec3f *lhs, Vec3f *rhs)
{
    u32 flags = 0;

    if (lhs->x < -rhs->x)
    {
        flags |= 1;
    }
    if (lhs->x > rhs->x)
    {
        flags |= 2;
    }
    if (lhs->y < -rhs->y)
    {
        flags |= 4;
    }
    if (lhs->y > rhs->y)
    {
        flags |= 8;
    }
    return flags;
}

// 0x800EE2C0
u32 func_ovl2_800EE2C0(Vec3f *lhs, Vec3f *rhs)
{
    u32 flags = 0;

    if (lhs->z < -rhs->z)
    {
        flags |= 1;
    }
    if (lhs->z > rhs->z)
    {
        flags |= 2;
    }
    return flags;
}

// 0x800EE300
bool32 gcColRectangle(Vec3f *sphere1, Vec3f *sphere2, f32 radius, s32 opkind, Mtx44f mtx, Vec3f *ref, Vec3f *arg6, Vec3f *arg7)
{
    // Not sure about the variable names; help from ChatGPT
    Vec3f center;
    Vec3f sp90;
    Vec3f sp84;
    Vec3f sp78;
    Vec3f sp6C;
    u32 flags_sp78;
    u32 flags_sp6C;
    u32 flags_main;
    f32 distx;
    f32 disty;
    f32 distz;

    center.x = arg6->x + (radius / arg7->x);
    center.y = arg6->y + (radius / arg7->y);
    center.z = arg6->z + (radius / arg7->z);

    if (opkind == 2)
    {
        sp90 = *sphere1;

        if (mtx != NULL)
        {
            gcGetVectorWorldPosition(mtx, &sp90);
        }
        sp90.x -= ref->x;
        sp90.y -= ref->y;
        sp90.z -= ref->z;

        if ((-center.x <= sp90.x) && (sp90.x <= center.x) && (-center.y <= sp90.y) && (sp90.y <= center.y) && (-center.z <= sp90.z) && (sp90.z <= center.z))
        {
            return TRUE;
        }
        else return FALSE;
    }
    sp78 = *sphere1;
    sp6C = *sphere2;

    if (mtx != NULL)
    {
        gcGetVectorWorldPosition(mtx, &sp78);
        gcGetVectorWorldPosition(mtx, &sp6C);
    }
    sp78.x -= ref->x;
    sp78.y -= ref->y;
    sp78.z -= ref->z;
    sp6C.x -= ref->x;
    sp6C.y -= ref->y;
    sp6C.z -= ref->z;

    distx = sp6C.x - sp78.x;
    disty = sp6C.y - sp78.y;
    distz = sp6C.z - sp78.z;

    flags_sp78 = func_ovl2_800EE24C(&sp78, &center);
    flags_sp6C = func_ovl2_800EE24C(&sp6C, &center);

loop_14:
    if ((flags_sp78 != 0) || (flags_sp6C != 0))
    {
        if (flags_sp78 & flags_sp6C)
        {
            return FALSE;
        }
        else if (flags_sp78 != 0)
        {
            flags_main = flags_sp78;
        }
        else flags_main = flags_sp6C;

        if (flags_main & 1)
        {
            sp84.x = -center.x;
            sp84.y = (((sp84.x - sp78.x) / distx) * disty) + sp78.y;
            sp84.z = (((sp84.x - sp78.x) / distx) * distz) + sp78.z;
        }
        else if (flags_main & 2)
        {
            sp84.x = center.x;
            sp84.y = (((sp84.x - sp78.x) / distx) * disty) + sp78.y;
            sp84.z = (((sp84.x - sp78.x) / distx) * distz) + sp78.z;
        }
        else if (flags_main & 4)
        {
            sp84.y = -center.y;
            sp84.x = (((sp84.y - sp78.y) / disty) * distx) + sp78.x;
            sp84.z = (((sp84.y - sp78.y) / disty) * distz) + sp78.z;
        }
        else if (flags_main & 8)
        {
            sp84.y = center.y;
            sp84.x = (((sp84.y - sp78.y) / disty) * distx) + sp78.x;
            sp84.z = (((sp84.y - sp78.y) / disty) * distz) + sp78.z;
        }
        if (flags_main == flags_sp78)
        {
            sp78 = sp84;
            flags_sp78 = func_ovl2_800EE24C(&sp78, &center);
        }
        else
        {
            sp6C = sp84;
            flags_sp6C = func_ovl2_800EE24C(&sp6C, &center);
        }
        goto loop_14;
    }
    flags_sp78 = func_ovl2_800EE2C0(&sp78, &center);
    flags_sp6C = func_ovl2_800EE2C0(&sp6C, &center);

    if (flags_sp78 & flags_sp6C)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800EE750
bool32 gcColSphere(Vec3f *hitpos_current, Vec3f *hitpos_prev, f32 hitsize, s32 update_state, Mtx44f mtx, Vec3f *sphere_offset, Vec3f *sphere_size, Vec3f *arg7, s32 sphit_kind, f32 *p_angle, Vec3f *argA)
{
    // Might be very fake. Maybe not. Spent a whole day trying to match this and finally managed to find a solution using the permuter!
    Vec3f center;

    center.x = sphere_size->x + (hitsize / arg7->x);
    center.y = sphere_size->y + (hitsize / arg7->y);
    center.z = sphere_size->z + (hitsize / arg7->z);

    if ((update_state == gmHitCollision_UpdateState_Transfer) || (hitpos_current->x == hitpos_prev->x) && (hitpos_current->y == hitpos_prev->y) && (hitpos_current->z == hitpos_prev->z))
    {
        Vec3f copy1 = *hitpos_current;

        gcGetVectorWorldPosition(mtx, &copy1);

        copy1.x -= sphere_offset->x;
        copy1.y -= sphere_offset->y;
        copy1.z -= sphere_offset->z;

        copy1.x /= center.x;
        copy1.y /= center.y;
        copy1.z /= center.z;

        if (lbVector_Vec3fMagnitude(&copy1) <= 1)
        {
            switch (sphit_kind)
            {
            default:
                break;

            case 0:
                *p_angle = F_DEG_TO_RAD(180.0F);
                break;

            case 1:
                *p_angle = F_DEG_TO_RAD(180.0F);

                argA->x = 1;
                argA->y = argA->z = 0.0F;
                break;

            case 2:
                break;
            }
            return TRUE;
        }
        else return FALSE;
    }
    else
    {
        Vec3f copy1;
        Vec3f copy2;
        Vec3f copysub;
        Vec3f sp58;
        f32 sp54;
        f32 sp50;
        f32 sp4C;
        f32 sp48;
        f32 sp44;
        f32 sp40;
        f32 sp3C;

        copy1 = *hitpos_current;
        copy2 = *hitpos_prev;

        gcGetVectorWorldPosition(mtx, &copy1);
        gcGetVectorWorldPosition(mtx, &copy2);

        copy1.x -= sphere_offset->x;
        copy1.y -= sphere_offset->y;
        copy1.z -= sphere_offset->z;

        copy2.x -= sphere_offset->x;
        copy2.y -= sphere_offset->y;
        copy2.z -= sphere_offset->z;

        copy1.x /= center.x;
        copy1.y /= center.y;
        copy1.z /= center.z;

        copy2.x /= center.x;
        copy2.y /= center.y;
        copy2.z /= center.z;

        copysub.x = copy1.x - copy2.x;
        copysub.y = copy1.y - copy2.y;
        copysub.z = copy1.z - copy2.z;

        sp54 = (SQUARE(copysub.x) + SQUARE(copysub.y) + SQUARE(copysub.z));

        if (sp54 != 0.0F)
        {
            sp40 = SQUARE(copy2.z);

            if (sp54 != 0.0F)
            {

            }
            sp50 = (copysub.x * copy2.x) + (copysub.y * copy2.y) + (copysub.z * copy2.z);
            sp3C = ((SQUARE(copy2.x) + SQUARE(copy2.y) + sp40) - 1.0F);
            sp3C = sp54 * sp3C;

            sp48 = SQUARE(sp50) - sp3C;

            if (SQUARE(sp50) < sp3C)
            {
                return FALSE;
            }
            else if (sp48 == 0.0F)
            {
                if (sp54 == 0.0F)
                {
                    while (TRUE)
                    {
                        fatal_printf("zero div 1 in gcColSphere()\n");
                        scnmgr_crash_print_gobj_state();
                    }
                }
                sp44 = sp40 = -sp50 / sp54;

                if ((sp44 >= 0.0F) && (sp44 <= 1.0F))
                {
                    goto next;
                }
                else return FALSE;
            }
            else
            {
                if (sp54 == 0.0F)
                {
                    while (TRUE)
                    {
                        fatal_printf("zero div 2 in gcColSphere()\n");
                        scnmgr_crash_print_gobj_state();
                    }
                }
                sp44 = (sqrtf(sp48) + -sp50) / sp54;
                sp40 = (-sp50 - sqrtf(sp48)) / sp54;

                if ((sp44 >= 0.0F) && (sp44 <= 1.0F))
                {
                    goto next;
                }
                else if ((sp40 >= 0.0F) && (sp40 <= 1.0F))
                {
                    goto next;
                }
                else if ((sp44 * sp40) < 0.0F)
                {
                    goto next;
                }
                else return FALSE;
            }
        next:
            switch (sphit_kind)
            {
            default:
                break;

            case 0:
                sp3C = (sp44 < sp40) ? sp44 : sp40;

                sp58.x = (copysub.x * sp3C) + copy2.x;
                sp58.y = (copysub.y * sp3C) + copy2.y;
                sp58.z = (copysub.z * sp3C) + copy2.z;

                *p_angle = lbVector_Vec3fAngleDiff(&copysub, &sp58);
                break;

            case 1:
                sp3C = (sp44 < sp40) ? sp44 : sp40;

                copysub.x = 0.0F;
                sp58.x = 0.0F;

                sp58.y = (copysub.y * sp3C) + copy2.y;
                sp58.z = (copysub.z * sp3C) + copy2.z;

                *p_angle = ((sp58.y == 0.0F) && (sp58.z == 0.0F)) ? F_DEG_TO_RAD(180.0F) : lbVector_Vec3fAngleDiff(&copysub, &sp58);

                if (*p_angle != F_DEG_TO_RAD(180.0F))
                {
                    lbVector_Vec3fNormalizedCross(&copysub, &sp58, argA);
                }
                else
                {
                    argA->x = 1.0F;
                    argA->y = argA->z = 0.0F;
                }
                break;

            case 2:
                break;
            }
            return TRUE;
        }
        else if (lbVector_Vec3fMagnitude(&copy1) <= 1)
        {
            switch (sphit_kind)
            {
            default:
                break;

            case 0:
                *p_angle = F_DEG_TO_RAD(180.0F);
                break;

            case 1:
                *p_angle = F_DEG_TO_RAD(180.0F);

                argA->x = 1;
                argA->y = argA->z = 0.0F;
                break;

            case 2:
                break;
            }
            return TRUE;
        }
        else return FALSE;
    }
}

// 0x800EEEAC
bool32 func_ovl2_800EEEAC(Vec3f *arg0, Vec3f *arg1, f32 arg2, s32 opkind, Mtx44f mtx, s32 arg5, Vec3f *arg6, f32 arg7, s32 arg8, f32 arg9)
{
    Vec3f sp94;
    Vec3f sp88;
    Vec3f sp7C;
    Vec3f sp70;
    Vec3f sp64;
    u32 flags_sp70;
    u32 flags_sp64;
    u32 flags_main;
    f32 distx;
    f32 disty;
    f32 distz;

    sp94.x = arg9 + arg7 + arg2;
    sp94.y = sp94.z = arg7 + arg2;

    if (opkind == 2)
    {
        sp88.x = arg0->x - arg6->x;
        sp88.y = arg0->y - arg6->y;
        sp88.z = arg0->z - arg6->z;

        if ((arg8 == 3) && (arg5 == 1))
        {
            gcGetVectorWorldPosition(mtx, &sp88);
        }
        if ((-sp94.x <= sp88.x) && (sp88.x <= sp94.x) && (-sp94.y <= sp88.y) && (sp88.y <= sp94.y) && (-sp94.z <= sp88.z) && (sp88.z <= sp94.z))
        {
            return TRUE;
        }
        else return FALSE;
    }
    sp70.x = arg0->x - arg6->x;
    sp70.y = arg0->y - arg6->y;
    sp70.z = arg0->z - arg6->z;

    sp64.x = arg1->x - arg6->x;
    sp64.y = arg1->y - arg6->y;
    sp64.z = arg1->z - arg6->z;

    if ((arg8 == 3) && (arg5 == 1))
    {
        gcGetVectorWorldPosition(mtx, &sp70);
        gcGetVectorWorldPosition(mtx, &sp64);
    }
    distx = sp64.x - sp70.x;
    disty = sp64.y - sp70.y;
    distz = sp64.z - sp70.z;

    flags_sp70 = func_ovl2_800EE24C(&sp70, &sp94);
    flags_sp64 = func_ovl2_800EE24C(&sp64, &sp94);

loop_16:
    if ((flags_sp70 != 0) || (flags_sp64 != 0))
    {
        if (flags_sp70 & flags_sp64)
        {
            return FALSE;
        }
        else if (flags_sp70 != 0)
        {
            flags_main = flags_sp70;
        }
        else flags_main = flags_sp64;

        if (flags_main & 1)
        {
            sp7C.x = -sp94.x;
            sp7C.y = (((sp7C.x - sp70.x) / distx) * disty) + sp70.y;
            sp7C.z = (((sp7C.x - sp70.x) / distx) * distz) + sp70.z;
        }
        else if (flags_main & 2)
        {
            sp7C.x = sp94.x;
            sp7C.y = (((sp7C.x - sp70.x) / distx) * disty) + sp70.y;
            sp7C.z = (((sp7C.x - sp70.x) / distx) * distz) + sp70.z;
        }
        else if (flags_main & 4)
        {
            sp7C.y = -sp94.y;
            sp7C.x = (((sp7C.y - sp70.y) / disty) * distx) + sp70.x;
            sp7C.z = (((sp7C.y - sp70.y) / disty) * distz) + sp70.z;
        }
        else if (flags_main & 8)
        {
            sp7C.y = sp94.y;
            sp7C.x = (((sp7C.y - sp70.y) / disty) * distx) + sp70.x;
            sp7C.z = (((sp7C.y - sp70.y) / disty) * distz) + sp70.z;
        }
        if (flags_main == flags_sp70)
        {
            sp70 = sp7C;

            flags_sp70 = func_ovl2_800EE24C(&sp70, &sp94);
        }
        else
        {
            sp64 = sp7C;

            flags_sp64 = func_ovl2_800EE24C(&sp64, &sp94);
        }
        goto loop_16;
    }
    flags_sp70 = func_ovl2_800EE2C0(&sp70, &sp94);
    flags_sp64 = func_ovl2_800EE2C0(&sp64, &sp94);

    if (flags_sp70 & flags_sp64)
    {
        return FALSE;
    }
    return TRUE;
}

// 0x800EF2D0
bool32 func_ovl2_800EF2D0(Vec3f *hit_position, Vec3f *obj_position, Vec3f *arg2, f32 size)
{
    f32 distx = hit_position->x - obj_position->x;
    f32 disty = hit_position->y - obj_position->y;

    if ((distx < (-arg2->z - size)) || ((arg2->z + size) < distx) || (disty < (-arg2->y - size)) || ((arg2->x + size) < disty))
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800EF364
bool32 ftCollision_CheckFighterHitInRange(ftHitbox *ft_hit, GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (ft_hit->update_state == gmHitCollision_UpdateState_Transfer)
    {
        return func_ovl2_800EF2D0(&ft_hit->pos, &DObjGetStruct(fighter_gobj)->translate.vec.f, &attributes->hit_detect_range, ft_hit->size);
    }
    else if
    (
        (func_ovl2_800EF2D0(&ft_hit->pos, &DObjGetStruct(fighter_gobj)->translate.vec.f, &attributes->hit_detect_range, ft_hit->size) != FALSE)      ||
        (func_ovl2_800EF2D0(&ft_hit->pos_prev, &DObjGetStruct(fighter_gobj)->translate.vec.f, &attributes->hit_detect_range, ft_hit->size) != FALSE)
    )
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800EF414
bool32 ftCollision_CheckWeaponHitInRange(wpHitbox *wp_hit, s32 hit_id, GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (wp_hit->update_state == gmHitCollision_UpdateState_Transfer)
    {
        return func_ovl2_800EF2D0(&wp_hit->hit_positions[hit_id].pos, &DObjGetStruct(fighter_gobj)->translate.vec.f, &attributes->hit_detect_range, wp_hit->size);
    }
    else if
    (
        (func_ovl2_800EF2D0(&wp_hit->hit_positions[hit_id].pos, &DObjGetStruct(fighter_gobj)->translate.vec.f, &attributes->hit_detect_range, wp_hit->size) != FALSE)      ||
        (func_ovl2_800EF2D0(&wp_hit->hit_positions[hit_id].pos_prev, &DObjGetStruct(fighter_gobj)->translate.vec.f, &attributes->hit_detect_range, wp_hit->size) != FALSE)
    )
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800EF4F4
bool32 ftCollision_CheckItemHitInRange(itHitbox *it_hit, s32 hit_id, GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (it_hit->update_state == gmHitCollision_UpdateState_Transfer)
    {
        return func_ovl2_800EF2D0(&it_hit->hit_positions[hit_id].pos, &DObjGetStruct(fighter_gobj)->translate.vec.f, &attributes->hit_detect_range, it_hit->size);
    }
    else if
    (
        (func_ovl2_800EF2D0(&it_hit->hit_positions[hit_id].pos, &DObjGetStruct(fighter_gobj)->translate.vec.f, &attributes->hit_detect_range, it_hit->size) != FALSE)      ||
        (func_ovl2_800EF2D0(&it_hit->hit_positions[hit_id].pos_prev, &DObjGetStruct(fighter_gobj)->translate.vec.f, &attributes->hit_detect_range, it_hit->size) != FALSE)
    )
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800EF5D4
bool32 func_ovl2_800EF5D4(Vec3f *arg0, Vec3f *arg1, f32 arg2, s32 arg3, Vec3f *arg4, Vec3f *arg5, f32 arg6, s32 arg7)
{
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 var_f12;
    f32 temp;

    temp = arg6 + arg2;

    if (arg7 == 2)
    {
        if (arg3 == 2)
        {
            if ((arg0->x < (arg4->x - temp)) || ((arg4->x + temp) < arg0->x) || (arg0->y < (arg4->y - temp)) || ((arg4->y + temp) < arg0->y))
            {
                return FALSE;
            }
            else return TRUE;
        }
        if (arg0->x < arg1->x)
        {
            sp2C = arg0->x - temp;
            sp28 = arg1->x + temp;
        }
        else
        {
            sp2C = arg1->x - temp;
            sp28 = arg0->x + temp;
        }
        if ((arg4->x < sp2C) || (sp28 < arg4->x))
        {
            return FALSE;
        }
        if (arg0->y < arg1->y)
        {
            sp24 = arg0->y - temp;
            sp20 = arg1->y + temp;
        }
        else
        {
            sp24 = arg1->y - temp;
            sp20 = arg0->y + temp;
        }
        if ((arg4->y < sp24) || (sp20 < arg4->y))
        {
            return FALSE;
        }
        else return TRUE;
    }
    if (arg3 == 2)
    {
        if (arg4->x < arg5->x)
        {
            sp2C = arg4->x - temp;
            sp28 = arg5->x + temp;
        }
        else
        {
            sp2C = arg5->x - temp;
            sp28 = arg4->x + temp;
        }
        if ((arg0->x < sp2C) || (sp28 < arg0->x))
        {
            return FALSE;
        }
        if (arg4->y < arg5->y)
        {
            sp24 = arg4->y - temp;
            sp20 = arg5->y + temp;
        }
        else
        {
            sp24 = arg5->y - temp;
            sp20 = arg4->y + temp;
        }
        if ((arg0->y < sp24) || (sp20 < arg0->y))
        {
            return FALSE;
        }
        else return TRUE;
    }
    if (arg0->x < arg1->x)
    {
        var_f12 = -(arg0->x - arg1->x);
    }
    else
    {
        var_f12 = arg0->x - arg1->x;
    }
    if (arg4->x < arg5->x)
    {
        sp2C = arg4->x - ((var_f12 * 0.5F) + temp);
        sp28 = arg5->x + ((var_f12 * 0.5F) + temp);
    }
    else
    {
        sp2C = arg5->x - ((var_f12 * 0.5F) + temp);
        sp28 = arg4->x + ((var_f12 * 0.5F) + temp);

    }
    if ((arg0->x < sp2C) && (arg1->x < sp2C))
    {
        return FALSE;
    }
    else if ((sp28 < arg0->x) && (sp28 < arg1->x))
    {
        return FALSE;
    }
    if (arg0->y < arg1->y)
    {
        var_f12 = -(arg0->y - arg1->y);
    }
    else var_f12 = arg0->y - arg1->y;

    if (arg4->y < arg5->y)
    {
        sp24 = arg4->y - ((var_f12 * 0.5F) + temp);
        sp20 = arg5->y + ((var_f12 * 0.5F) + temp);
    }
    else
    {
        sp24 = arg5->y - ((var_f12 * 0.5F) + temp);
        sp20 = arg4->y + ((var_f12 * 0.5F) + temp);
    }
    if ((arg0->y < sp24) && (arg1->y < sp24))
    {
        return FALSE;
    }
    else if ((sp20 < arg0->y) && (sp20 < arg1->y))
    {
        return FALSE;
    }
    return TRUE;
}

// 0x800EFABC - Check if fighter hitbox intersects with other fighter hurtbox
bool32 ftCollision_CheckFighterHitFighterHitIntersect(ftHitbox *ft_hit1, ftHitbox *ft_hit2)
{
    if 
    (
        func_ovl2_800EF5D4
        (
            &ft_hit1->pos, 
            &ft_hit1->pos_prev, 
            ft_hit1->size, 
            ft_hit1->update_state, 
            &ft_hit2->pos, 
            &ft_hit2->pos_prev, 
            ft_hit2->size, 
            ft_hit2->update_state

        ) == FALSE
    )
    {
        return FALSE;
    }
    else func_ovl2_800EE050
    (
        ft_hit2->update_state, 
        &ft_hit2->pos, 
        &ft_hit2->pos_prev, 
        &ft_hit2->hit_matrix.unk_fthitmtx_0x0, 
        ft_hit2->hit_matrix.mtx, 
        &ft_hit2->hit_matrix.unk_fthitmtx_0x44
    );

    return func_ovl2_800EEEAC
    (
        &ft_hit1->pos,
        &ft_hit1->pos_prev,
        ft_hit1->size,
        ft_hit1->update_state,
        ft_hit2->hit_matrix.mtx,
        ft_hit2->hit_matrix.unk_fthitmtx_0x0,
        &ft_hit2->pos,
        ft_hit2->size,
        ft_hit2->update_state,
        ft_hit2->hit_matrix.unk_fthitmtx_0x44
    );
}

// 0x800EFBA4 - Check if fighter hurtbox intersects with item hurtbox
bool32 ftCollision_CheckFighterHitFighterHurtIntersect(ftHitbox *ft_hit, ftHurtbox *ft_hurt)
{
    ftParts *unk_dobjtrans;
    DObj *dobj;

    dobj = ft_hurt->joint;
    unk_dobjtrans = dobj->unk_0x84;

    func_ovl2_800EDE00(dobj);
    func_ovl2_800EDE5C(dobj);

    return gcColRectangle
    (
        &ft_hit->pos,
        &ft_hit->pos_prev,
        ft_hit->size,
        ft_hit->update_state,
        unk_dobjtrans->unk_dobjtrans_0x9C,
        &ft_hurt->offset,
        &ft_hurt->size,
        &unk_dobjtrans->unk_dobjtrans_0x90
    );
}

// 0x800EFC20 - Check if item hurtbox intersects with fighter hitbox
bool32 ftCollision_CheckFighterHitItemHurtIntersect(ftHitbox *ft_hit, itHurtbox *it_hurt, GObj *item_gobj)
{
    Vec3f it_hurt_pos;

    it_hurt_pos.x = DObjGetStruct(item_gobj)->translate.vec.f.x + it_hurt->offset.x;
    it_hurt_pos.y = DObjGetStruct(item_gobj)->translate.vec.f.y + it_hurt->offset.y;
    it_hurt_pos.z = DObjGetStruct(item_gobj)->translate.vec.f.z + it_hurt->offset.z;

    return gcColRectangle(&ft_hit->pos, &ft_hit->pos_prev, ft_hit->size, ft_hit->update_state, NULL, &it_hurt_pos, &it_hurt->size, &DObjGetStruct(item_gobj)->scale.vec.f);
}

// 0x800EFCC0 - Check if fighter hitbox intersects with shield
bool32 ftCollision_CheckFighterHitShieldIntersect(ftHitbox *ft_hit, GObj *fighter_gobj, DObj *dobj, f32 *p_angle)
{
    ftParts *unk_dobjtrans;
    Vec3f sp48;
    Vec3f sp3C;

    sp48.x = 0.0F;
    sp48.y = 0.0F;
    sp48.z = 0.0F;

    sp3C.x = 30.0F;
    sp3C.y = 30.0F;
    sp3C.z = 30.0F;

    unk_dobjtrans = dobj->unk_0x84;

    func_ovl2_800EDE00(dobj);
    func_ovl2_800EDE5C(dobj);

    return gcColSphere
    (
        &ft_hit->pos, 
        &ft_hit->pos_prev, 
        ft_hit->size, 
        ft_hit->update_state, 
        unk_dobjtrans->unk_dobjtrans_0x9C,
        &sp48, 
        &sp3C, 
        &unk_dobjtrans->unk_dobjtrans_0x90, 
        0,
        p_angle, 
        NULL
    );
}

// 0x800EFD70 - Check if weapon hitbox intersects with fighter hitbox
bool32 wpCollision_CheckWeaponHitFighterHitIntersect(wpHitbox *wp_hit, s32 hit_id, ftHitbox *ft_hit)
{
    if
    (
        func_ovl2_800EF5D4
        (
            &wp_hit->hit_positions[hit_id].pos,
            &wp_hit->hit_positions[hit_id].pos_prev,
            wp_hit->size,
            wp_hit->update_state,
            &ft_hit->pos,
            &ft_hit->pos_prev,
            ft_hit->size,
            ft_hit->update_state

        ) == FALSE
    )
    {
        return FALSE;
    }
    else func_ovl2_800EE050
    (
        ft_hit->update_state,
        &ft_hit->pos,
        &ft_hit->pos_prev,
        &ft_hit->hit_matrix.unk_fthitmtx_0x0,
        ft_hit->hit_matrix.mtx,
        &ft_hit->hit_matrix.unk_fthitmtx_0x44
    );

    return func_ovl2_800EEEAC
    (
        &wp_hit->hit_positions[hit_id].pos,
        &wp_hit->hit_positions[hit_id].pos_prev,
        wp_hit->size,
        wp_hit->update_state,
        ft_hit->hit_matrix.mtx,
        ft_hit->hit_matrix.unk_fthitmtx_0x0,
        &ft_hit->pos,
        ft_hit->size,
        ft_hit->update_state,
        ft_hit->hit_matrix.unk_fthitmtx_0x44
    );
}

// 0x800EFE6C
bool32 wpCollision_CheckWeaponHitFighterHurtIntersect(wpHitbox *wp_hit, s32 hit_id, ftHurtbox *ft_hurt)
{
    ftParts *unk_dobjtrans;
    DObj *dobj;

    dobj = ft_hurt->joint;
    unk_dobjtrans = dobj->unk_0x84;

    func_ovl2_800EDE00(dobj);
    func_ovl2_800EDE5C(dobj);

    return gcColRectangle
    (
        &wp_hit->hit_positions[hit_id].pos,
        &wp_hit->hit_positions[hit_id].pos_prev,
        wp_hit->size,
        wp_hit->update_state, 
        unk_dobjtrans->unk_dobjtrans_0x9C, 
        &ft_hurt->offset, 
        &ft_hurt->size, 
        &unk_dobjtrans->unk_dobjtrans_0x90
    );
}

// 0x800EFF00
bool32 wpCollision_CheckWeaponHitShieldIntersect(wpHitbox *wp_hit, s32 hit_id, GObj *fighter_gobj, DObj *dobj, f32 *p_angle, Vec3f *vec)
{
    ftParts *unk_dobjtrans;
    Vec3f sp58;
    Vec3f sp4C;
    Vec3f unused;

    sp58.x = 0.0F;
    sp58.y = 0.0F;
    sp58.z = 0.0F;

    sp4C.x = 30.0F;
    sp4C.y = 30.0F;
    sp4C.z = 30.0F;

    unk_dobjtrans = dobj->unk_0x84;

    func_ovl2_800EDE00(dobj);
    func_ovl2_800EDE5C(dobj);

    return gcColSphere
    (
        &wp_hit->hit_positions[hit_id].pos,
        &wp_hit->hit_positions[hit_id].pos_prev,
        wp_hit->size,
        wp_hit->update_state,
        unk_dobjtrans->unk_dobjtrans_0x9C,
        &sp58,
        &sp4C,
        &unk_dobjtrans->unk_dobjtrans_0x90,
        1,
        p_angle,
        vec
    );
}

// 0x800EFFCC
bool32 wpCollision_CheckWeaponHitSpecialIntersect(wpHitbox *wp_hit, s32 hit_id, ftStruct *fp, ftSpecialHit *special_hit)
{
    DObj *dobj = fp->joint[special_hit->joint_index];
    ftParts *unk_dobjtrans = dobj->unk_0x84;

    func_ovl2_800EDE00(dobj);
    func_ovl2_800EDE5C(dobj);

    return gcColSphere
    (
        &wp_hit->hit_positions[hit_id].pos,
        &wp_hit->hit_positions[hit_id].pos_prev,
        wp_hit->size,
        wp_hit->update_state,
        unk_dobjtrans->unk_dobjtrans_0x9C,
        &special_hit->offset,
        &special_hit->size,
        &unk_dobjtrans->unk_dobjtrans_0x90,
        2,
        NULL,
        NULL
    );
}

// 0x800F007C
bool32 wpCollision_CheckWeaponHitWeaponHitIntersect(wpHitbox *wp_hit1, s32 hit1_id, wpHitbox *wp_hit2, s32 hit2_id)
{
    if
    (
        func_ovl2_800EF5D4
        (
            &wp_hit1->hit_positions[hit1_id].pos,
            &wp_hit1->hit_positions[hit1_id].pos_prev,
            wp_hit1->size,
            wp_hit1->update_state,
            &wp_hit2->hit_positions[hit2_id].pos,
            &wp_hit2->hit_positions[hit2_id].pos_prev,
            wp_hit2->size,
            wp_hit2->update_state

        ) == FALSE
    )
    {
        return FALSE;
    }
    else func_ovl2_800EE050
    (
        wp_hit2->update_state,
        &wp_hit2->hit_positions[hit2_id].pos,
        &wp_hit2->hit_positions[hit2_id].pos_prev,
        &wp_hit2->hit_positions[hit2_id].unk_wphitpos_0x18,
        wp_hit2->hit_positions[hit2_id].mtx,
        &wp_hit2->hit_positions[hit2_id].unk_wphitpos_0x5C
    );

    return func_ovl2_800EEEAC
    (
        &wp_hit1->hit_positions[hit1_id].pos,
        &wp_hit1->hit_positions[hit1_id].pos_prev,
        wp_hit1->size,
        wp_hit1->update_state,
        wp_hit2->hit_positions[hit2_id].mtx,
        wp_hit2->hit_positions[hit2_id].unk_wphitpos_0x18,
        &wp_hit2->hit_positions[hit2_id].pos,
        wp_hit2->size,
        wp_hit2->update_state,
        wp_hit2->hit_positions[hit2_id].unk_wphitpos_0x5C
    );
}

// 0x800F019C
bool32 wpCollision_CheckWeaponHitItemHitIntersect(wpHitbox *wp_hit, s32 wp_hit_id, itHitbox *it_hit, s32 it_hit_id)
{
    if
    (
        func_ovl2_800EF5D4
        (
            &wp_hit->hit_positions[wp_hit_id].pos,
            &wp_hit->hit_positions[wp_hit_id].pos_prev,
            wp_hit->size,
            wp_hit->update_state,
            &it_hit->hit_positions[it_hit_id].pos,
            &it_hit->hit_positions[it_hit_id].pos_prev,
            it_hit->size,
            it_hit->update_state

        ) == FALSE
    )
    {
        return FALSE;
    }
    else func_ovl2_800EE050
    (
        it_hit->update_state,
        &it_hit->hit_positions[it_hit_id].pos,
        &it_hit->hit_positions[it_hit_id].pos_prev,
        &it_hit->hit_positions[it_hit_id].unk_ithitpos_0x18,
        it_hit->hit_positions[it_hit_id].mtx,
        &it_hit->hit_positions[it_hit_id].unk_ithitpos_0x5C
    );

    return func_ovl2_800EEEAC
    (
        &wp_hit->hit_positions[wp_hit_id].pos,
        &wp_hit->hit_positions[wp_hit_id].pos_prev,
        wp_hit->size,
        wp_hit->update_state,
        it_hit->hit_positions[it_hit_id].mtx,
        it_hit->hit_positions[it_hit_id].unk_ithitpos_0x18,
        &it_hit->hit_positions[it_hit_id].pos,
        it_hit->size,
        it_hit->update_state,
        it_hit->hit_positions[it_hit_id].unk_ithitpos_0x5C
    );
}

// 0x800F02BC
bool32 itCollision_CheckItemHitFighterHitIntersect(itHitbox *it_hit, s32 hit_id, ftHitbox *ft_hit)
{
    if
    (
        func_ovl2_800EF5D4
        (
            &it_hit->hit_positions[hit_id].pos,
            &it_hit->hit_positions[hit_id].pos_prev,
            it_hit->size,
            it_hit->update_state,
            &ft_hit->pos,
            &ft_hit->pos_prev,
            ft_hit->size,
            ft_hit->update_state

        ) == FALSE
    )
    {
        return FALSE;
    }
    else func_ovl2_800EE050
    (
        ft_hit->update_state,
        &ft_hit->pos,
        &ft_hit->pos_prev,
        &ft_hit->hit_matrix.unk_fthitmtx_0x0,
        ft_hit->hit_matrix.mtx,
        &ft_hit->hit_matrix.unk_fthitmtx_0x44
    );

    return func_ovl2_800EEEAC
    (
        &it_hit->hit_positions[hit_id].pos,
        &it_hit->hit_positions[hit_id].pos_prev,
        it_hit->size,
        it_hit->update_state,
        ft_hit->hit_matrix.mtx,
        ft_hit->hit_matrix.unk_fthitmtx_0x0,
        &ft_hit->pos,
        ft_hit->size,
        ft_hit->update_state,
        ft_hit->hit_matrix.unk_fthitmtx_0x44
    );
}

// 0x800F03B8
bool32 itCollision_CheckItemHitFighterHurtIntersect(itHitbox *it_hit, s32 hit_id, ftHurtbox *ft_hurt)
{
    ftParts *unk_dobjtrans;
    DObj *dobj;

    dobj = ft_hurt->joint;
    unk_dobjtrans = dobj->unk_0x84;

    func_ovl2_800EDE00(dobj);
    func_ovl2_800EDE5C(dobj);

    return gcColRectangle
    (
        &it_hit->hit_positions[hit_id].pos,
        &it_hit->hit_positions[hit_id].pos_prev,
        it_hit->size,
        it_hit->update_state, 
        unk_dobjtrans->unk_dobjtrans_0x9C,
        &ft_hurt->offset, 
        &ft_hurt->size, 
        &unk_dobjtrans->unk_dobjtrans_0x90
    );
}

// 0x800F044C
bool32 itCollision_CheckItemHitShieldIntersect(itHitbox *it_hit, s32 hit_id, GObj *fighter_gobj, DObj *dobj, f32 *p_angle, Vec3f *vec)
{
    ftParts *unk_dobjtrans;
    Vec3f sp58;
    Vec3f sp4C;
    Vec3f unused;

    sp58.x = 0.0F;
    sp58.y = 0.0F;
    sp58.z = 0.0F;

    sp4C.x = 30.0F;
    sp4C.y = 30.0F;
    sp4C.z = 30.0F;

    unk_dobjtrans = dobj->unk_0x84;

    func_ovl2_800EDE00(dobj);
    func_ovl2_800EDE5C(dobj);

    return gcColSphere
    (
        &it_hit->hit_positions[hit_id].pos,
        &it_hit->hit_positions[hit_id].pos_prev,
        it_hit->size,
        it_hit->update_state,
        unk_dobjtrans->unk_dobjtrans_0x9C,
        &sp58,
        &sp4C,
        &unk_dobjtrans->unk_dobjtrans_0x90,
        1,
        p_angle,
        vec
    );
}

// 0x800F0518
bool32 itCollision_CheckItemHitSpecialIntersect(itHitbox *it_hit, s32 hit_id, ftStruct *fp, ftSpecialHit *special_hit)
{
    DObj *dobj = fp->joint[special_hit->joint_index];
    ftParts *unk_dobjtrans = dobj->unk_0x84;

    func_ovl2_800EDE00(dobj);
    func_ovl2_800EDE5C(dobj);

    return gcColSphere
    (
        &it_hit->hit_positions[hit_id].pos,
        &it_hit->hit_positions[hit_id].pos_prev,
        it_hit->size,
        it_hit->update_state,
        unk_dobjtrans->unk_dobjtrans_0x9C,
        &special_hit->offset,
        &special_hit->size,
        &unk_dobjtrans->unk_dobjtrans_0x90,
        2,
        NULL,
        NULL
    );
}

// 0x800F05C8
bool32 itCollision_CheckItemHitItemHitIntersect(itHitbox *it_hit1, s32 hit1_id, itHitbox *it_hit2, s32 hit2_id)
{
    if
    (
        func_ovl2_800EF5D4
        (
            &it_hit1->hit_positions[hit1_id].pos,
            &it_hit1->hit_positions[hit1_id].pos_prev,
            it_hit1->size,
            it_hit1->update_state,
            &it_hit2->hit_positions[hit2_id].pos,
            &it_hit2->hit_positions[hit2_id].pos_prev,
            it_hit2->size,
            it_hit2->update_state

        ) == FALSE
    )
    {
        return FALSE;
    }
    else func_ovl2_800EE050
    (
        it_hit2->update_state,
        &it_hit2->hit_positions[hit2_id].pos,
        &it_hit2->hit_positions[hit2_id].pos_prev,
        &it_hit2->hit_positions[hit2_id].unk_ithitpos_0x18,
        it_hit2->hit_positions[hit2_id].mtx,
        &it_hit2->hit_positions[hit2_id].unk_ithitpos_0x5C
    );

    return func_ovl2_800EEEAC
    (
        &it_hit1->hit_positions[hit1_id].pos,
        &it_hit1->hit_positions[hit1_id].pos_prev,
        it_hit1->size,
        it_hit1->update_state,
        it_hit2->hit_positions[hit2_id].mtx,
        it_hit2->hit_positions[hit2_id].unk_ithitpos_0x18,
        &it_hit2->hit_positions[hit2_id].pos,
        it_hit2->size,
        it_hit2->update_state,
        it_hit2->hit_positions[hit2_id].unk_ithitpos_0x5C
    );
}

// 0x800F06E8
bool32 itCollision_CheckItemHitItemHurtIntersect(itHitbox *it_hit, s32 hit_id, itHurtbox *it_hurt, GObj *item_gobj)
{
    Vec3f it_hurt_pos;

    it_hurt_pos.x = DObjGetStruct(item_gobj)->translate.vec.f.x + it_hurt->offset.x;
    it_hurt_pos.y = DObjGetStruct(item_gobj)->translate.vec.f.y + it_hurt->offset.y;
    it_hurt_pos.z = DObjGetStruct(item_gobj)->translate.vec.f.z + it_hurt->offset.z;

    return gcColRectangle
    (
        &it_hit->hit_positions[hit_id].pos,
        &it_hit->hit_positions[hit_id].pos_prev,
        it_hit->size,
        it_hit->update_state,
        NULL,
        &it_hurt_pos,
        &it_hurt->size,
        &DObjGetStruct(item_gobj)->scale.vec.f
    );
}

// 0x800F079C
bool32 itCollision_CheckWeaponHitItemHurtIntersect(wpHitbox *wp_hit, s32 hit_id, itHurtbox *it_hurt, GObj *item_gobj)
{
    Vec3f it_hurt_pos;

    it_hurt_pos.x = DObjGetStruct(item_gobj)->translate.vec.f.x + it_hurt->offset.x;
    it_hurt_pos.y = DObjGetStruct(item_gobj)->translate.vec.f.y + it_hurt->offset.y;
    it_hurt_pos.z = DObjGetStruct(item_gobj)->translate.vec.f.z + it_hurt->offset.z;

    return gcColRectangle
    (
        &wp_hit->hit_positions[hit_id].pos,
        &wp_hit->hit_positions[hit_id].pos_prev,
        wp_hit->size,
        wp_hit->update_state,
        NULL,
        &it_hurt_pos,
        &it_hurt->size,
        &DObjGetStruct(item_gobj)->scale.vec.f
    );
}

// 0x800F0850
void ftCollision_GetHitPosition(Vec3f *dst, ftHitbox *ft_hit)
{
    if (ft_hit->update_state == gmHitCollision_UpdateState_Transfer)
    {
        *dst = ft_hit->pos;
    }
    else
    {
        dst->x = (ft_hit->pos.x + ft_hit->pos_prev.x) * 0.5F;
        dst->y = (ft_hit->pos.y + ft_hit->pos_prev.y) * 0.5F;
        dst->z = (ft_hit->pos.z + ft_hit->pos_prev.z) * 0.5F;
    }
}

// 0x800F08C8
void wpCollision_GetHitPosition(Vec3f *dst, wpHitbox *wp_hit, s32 hit_id)
{
    if (wp_hit->update_state == gmHitCollision_UpdateState_Transfer)
    {
        *dst = wp_hit->hit_positions[hit_id].pos;
    }
    else
    {
        dst->x = (wp_hit->hit_positions[hit_id].pos.x + wp_hit->hit_positions[hit_id].pos_prev.x) * 0.5F;
        dst->y = (wp_hit->hit_positions[hit_id].pos.y + wp_hit->hit_positions[hit_id].pos_prev.y) * 0.5F;
        dst->z = (wp_hit->hit_positions[hit_id].pos.z + wp_hit->hit_positions[hit_id].pos_prev.z) * 0.5F;
    }
}

// 0x800F095C
void itCollision_GetHitPosition(Vec3f *dst, itHitbox *it_hit, s32 hit_id)
{
    if (it_hit->update_state == gmHitCollision_UpdateState_Transfer)
    {
        *dst = it_hit->hit_positions[hit_id].pos;
    }
    else
    {
        dst->x = (it_hit->hit_positions[hit_id].pos.x + it_hit->hit_positions[hit_id].pos_prev.x) * 0.5F;
        dst->y = (it_hit->hit_positions[hit_id].pos.y + it_hit->hit_positions[hit_id].pos_prev.y) * 0.5F;
        dst->z = (it_hit->hit_positions[hit_id].pos.z + it_hit->hit_positions[hit_id].pos_prev.z) * 0.5F;
    }
}

// 0x800F09F0
void ftCollision_GetShieldPosition(Vec3f *dst, GObj *gobj, DObj *dobj)
{
    ftParts *unk_dobjtrans = dobj->unk_0x84;

    dst->x = 0.0F;
    dst->y = 0.0F;
    dst->z = 0.0F;

    gcGetVectorWorldPosition(unk_dobjtrans->unk_dobjtrans_0x50, dst);

    dst->z = DObjGetStruct(gobj)->translate.vec.f.z;
}

// 0x800F0A48
void gmCollision_GetImpactPosition(Vec3f *dst, Vec3f *pos, Vec3f *offset)
{
    dst->x = (pos->x + offset->x) * 0.5F;
    dst->y = (pos->y + offset->y) * 0.5F;
    dst->z = (pos->z + offset->z) * 0.5F;
}

// 0x800F0A90
void ftCollision_GetHurtImpactPosition(Vec3f *dst, ftHitbox *ft_hit, ftHurtbox *ft_hurt)
{
    ftParts *unk_dobjtrans;
    Vec3f hit_pos;
    Vec3f hurt_pos;

    ftCollision_GetHitPosition(&hit_pos, ft_hit);

    unk_dobjtrans = ft_hurt->joint->unk_0x84;

    hurt_pos = ft_hurt->offset;

    gcGetVectorWorldPosition(unk_dobjtrans->unk_dobjtrans_0x50, &hurt_pos);
    gmCollision_GetImpactPosition(dst, &hit_pos, &hurt_pos);
}

// 0x800F0AF8
void itCollision_GetHurtImpactPosition(Vec3f *dst, ftHitbox *ft_hit, itHurtbox *it_hurt, GObj *item_gobj)
{
    Vec3f hit_pos;
    Vec3f hurt_pos;

    ftCollision_GetHitPosition(&hit_pos, ft_hit);

    hurt_pos.x = DObjGetStruct(item_gobj)->translate.vec.f.x + it_hurt->hurt_pos.x;
    hurt_pos.y = DObjGetStruct(item_gobj)->translate.vec.f.y + it_hurt->hurt_pos.y;
    hurt_pos.z = DObjGetStruct(item_gobj)->translate.vec.f.z + it_hurt->hurt_pos.z;

    gmCollision_GetImpactPosition(dst, &hit_pos, &hurt_pos);
}

// 0x800F0B78
void ftCollision_GetShieldImpactPosition(Vec3f *dst, ftHitbox *ft_hit, GObj *gobj, DObj *dobj)
{
    Vec3f pos;
    Vec3f offset;

    ftCollision_GetHitPosition(&pos, ft_hit);
    ftCollision_GetShieldPosition(&offset, gobj, dobj);
    gmCollision_GetImpactPosition(dst, &pos, &offset);
}

// 0x800F0BC4
void ftCollision_GetFighterHitImpactPosition(Vec3f *dst, ftHitbox *ft_hit1, ftHitbox *ft_hit2)
{
    Vec3f pos1;
    Vec3f pos2;

    ftCollision_GetHitPosition(&pos1, ft_hit1);
    ftCollision_GetHitPosition(&pos2, ft_hit2);
    gmCollision_GetImpactPosition(dst, &pos1, &pos2);
}

// 0x800F0C08
void wpCollision_GetFighterHitImpactPosition(Vec3f *dst, wpHitbox *wp_hit, s32 hit_id, ftHitbox *ft_hit)
{
    Vec3f wp_pos;
    Vec3f ft_pos;

    wpCollision_GetHitPosition(&wp_pos, wp_hit, hit_id);
    ftCollision_GetHitPosition(&ft_pos, ft_hit);
    gmCollision_GetImpactPosition(dst, &wp_pos, &ft_pos);
}

// 0x800F0C4C
void wpCollision_GetShieldImpactPosition(Vec3f *dst, wpHitbox *wp_hit, s32 hit_id, GObj *gobj, DObj *dobj)
{
    Vec3f wp_pos;
    Vec3f shield_pos;

    wpCollision_GetHitPosition(&wp_pos, wp_hit, hit_id);
    ftCollision_GetShieldPosition(&shield_pos, gobj, dobj);
    gmCollision_GetImpactPosition(dst, &wp_pos, &shield_pos);
}

// 0x800F0C94
void wpCollision_GetWeaponHitImpactPosition(Vec3f *dst, wpHitbox *wp_hit1, s32 hit1_id, wpHitbox *wp_hit2, s32 hit2_id)
{
    Vec3f pos1;
    Vec3f pos2;

    wpCollision_GetHitPosition(&pos1, wp_hit1, hit1_id);
    wpCollision_GetHitPosition(&pos2, wp_hit2, hit2_id);
    gmCollision_GetImpactPosition(dst, &pos1, &pos2);
}

// 0x800F0CDC
void wpCollision_GetItemHitImpactPosition(Vec3f *dst, wpHitbox *wp_hit, s32 wp_hit_id, s32 it_hit, s32 it_hit_id)
{
    Vec3f wp_pos;
    Vec3f it_pos;

    wpCollision_GetHitPosition(&wp_pos, wp_hit, wp_hit_id);
    itCollision_GetHitPosition(&it_pos, it_hit, it_hit_id);
    gmCollision_GetImpactPosition(dst, &wp_pos, &it_pos);
}

// 0x800F0D24
void wpCollision_GetFighterHurtImpactPosition(Vec3f *dst, wpHitbox *wp_hit, s32 hit_id, ftHurtbox *ft_hurt)
{
    ftParts *unk_dobjtrans;
    Vec3f hit_pos;
    Vec3f hurt_pos;

    wpCollision_GetHitPosition(&hit_pos, wp_hit, hit_id);

    unk_dobjtrans = ft_hurt->joint->unk_0x84;

    hurt_pos = ft_hurt->offset;

    gcGetVectorWorldPosition(unk_dobjtrans->unk_dobjtrans_0x50, &hurt_pos);
    gmCollision_GetImpactPosition(dst, &hit_pos, &hurt_pos);
}

// 0x800F0D8C
void wpCollision_GetItemHurtImpactPosition(Vec3f *dst, wpHitbox *wp_hit, s32 hit_id, itHurtbox *it_hurt, GObj *item_gobj)
{
    Vec3f hit_pos;
    Vec3f hurt_pos;

    wpCollision_GetHitPosition(&hit_pos, wp_hit, hit_id);

    hurt_pos.x = DObjGetStruct(item_gobj)->translate.vec.f.x + it_hurt->offset.x;
    hurt_pos.y = DObjGetStruct(item_gobj)->translate.vec.f.y + it_hurt->offset.y;
    hurt_pos.z = DObjGetStruct(item_gobj)->translate.vec.f.z + it_hurt->offset.z;

    gmCollision_GetImpactPosition(dst, &hit_pos, &hurt_pos);
}

// 0x800F0E08
void itCollision_GetFighterHurtImpactPosition(Vec3f *dst, itHitbox *it_hit, s32 hit_id, ftHurtbox *ft_hurt)
{
    ftParts *unk_dobjtrans;
    Vec3f hit_pos;
    Vec3f hurt_pos;

    itCollision_GetHitPosition(&hit_pos, it_hit, hit_id);

    unk_dobjtrans = ft_hurt->joint->unk_0x84;

    hurt_pos = ft_hurt->offset;

    gcGetVectorWorldPosition(unk_dobjtrans->unk_dobjtrans_0x50, &hurt_pos);
    gmCollision_GetImpactPosition(dst, &hit_pos, &hurt_pos);
}

// 0x800F0E70
void itCollision_GetFighterHitImpactPosition(Vec3f *dst, itHitbox *it_hit, s32 hit_id, ftHitbox *ft_hit)
{
    Vec3f it_pos;
    Vec3f ft_pos;

    itCollision_GetHitPosition(&it_pos, it_hit, hit_id);
    ftCollision_GetHitPosition(&ft_pos, ft_hit);
    gmCollision_GetImpactPosition(dst, &it_pos, &ft_pos);
}

// 0x800F0EB4
void itCollision_GetShieldImpactPosition(Vec3f *dst, itHitbox *it_hit, s32 hit_id, GObj *gobj, DObj *dobj)
{
    Vec3f it_pos;
    Vec3f shield_pos;

    itCollision_GetHitPosition(&it_pos, it_hit, hit_id);
    ftCollision_GetShieldPosition(&shield_pos, gobj, dobj);
    gmCollision_GetImpactPosition(dst, &it_pos, &shield_pos);
}

// 0x800F0EFC
void itCollision_GetItemHitImpactPosition(Vec3f *dst, itHitbox *it_hit1, s32 hit1_id, itHitbox *it_hit2, s32 hit2_id)
{
    Vec3f pos1;
    Vec3f pos2;

    itCollision_GetHitPosition(&pos1, it_hit1, hit1_id);
    itCollision_GetHitPosition(&pos2, it_hit2, hit2_id);
    gmCollision_GetImpactPosition(dst, &pos1, &pos2);
}

// 0x800F0F44
void itCollision_GetItemHurtImpactPosition(Vec3f *dst, itHitbox *it_hit, s32 hit_id, itHurtbox *it_hurt, GObj *item_gobj)
{
    Vec3f hit_pos;
    Vec3f hurt_pos;

    itCollision_GetHitPosition(&hit_pos, it_hit, hit_id);

    hurt_pos.x = DObjGetStruct(item_gobj)->translate.vec.f.x + it_hurt->offset.x;
    hurt_pos.y = DObjGetStruct(item_gobj)->translate.vec.f.y + it_hurt->offset.y;
    hurt_pos.z = DObjGetStruct(item_gobj)->translate.vec.f.z + it_hurt->offset.z;

    gmCollision_GetImpactPosition(dst, &hit_pos, &hurt_pos);
}

// 0x800F0FC0
f32 ftCollision_GetDamageSlashRotation(ftStruct *fp, ftHitbox *ft_hit)
{
    Vec2f pos;

    if (ft_hit->update_state == gmHitCollision_UpdateState_Transfer)
    {
        pos.x = fp->phys_info.vel_air.x;
        pos.y = fp->phys_info.vel_air.y;
    }
    else
    {
        pos.x = ft_hit->pos.x - ft_hit->pos_prev.x;
        pos.y = ft_hit->pos.y - ft_hit->pos_prev.y;
    }
    return atan2f(pos.y, pos.x);
}
