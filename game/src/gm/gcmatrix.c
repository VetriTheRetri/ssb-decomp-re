#include <sys/obj.h>
#include <ft/fighter.h>

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
void func_ovl2_800ECDE4(DObj *dobj, UnkDObjData *arg1, Mtx44f mtx)
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
void gcSetMatrixNcs(DObj *dobj, UnkDObjData *arg1, Mtx44f mtx, Vec3f *scale_mul)
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

// 0x800ED3C0
void func_ovl2_800ED3C0(Mtx44f mtx, Vec3f *vec)
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
    UnkDObjData *unk_dobjdata;
    UnkDObjData *current_dobjdata;
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
            unk_dobjdata = second_dobj->unk_0x84;

            if (unk_dobjdata->unk_dobjdata_0x5 != 0)
            {
                break;
            }
            else if (second_dobj->parent == DObjParentNULL)
            {
                if (unk_dobjdata->unk_dobjdata_0x0 == 0)
                {
                    func_ovl2_800ECDE4(second_dobj, unk_dobjdata, unk_dobjdata->unk_dobjdata_0x10);

                    unk_dobjdata->unk_dobjdata_0x0 = 1;
                }
                func_ovl2_800ECD80(unk_dobjdata->unk_dobjdata_0x50, unk_dobjdata->unk_dobjdata_0x10);

                unk_dobjdata->unk_dobjdata_0x5 = 1;

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

            if (current_dobjdata->unk_dobjdata_0x0 == 0)
            {
                func_ovl2_800ECDE4(second_dobj, current_dobjdata, current_dobjdata->unk_dobjdata_0x10);

                current_dobjdata->unk_dobjdata_0x0 = 1;
            }
            func_ovl2_800ED490(current_dobjdata->unk_dobjdata_0x50, unk_dobjdata->unk_dobjdata_0x50, current_dobjdata->unk_dobjdata_0x10);

            current_dobjdata->unk_dobjdata_0x5 = 1;
            unk_dobjdata = current_dobjdata;
        }
    }
    else
    {
        second_dobj = main_dobj;

        i = 0;

        while (TRUE)
        {
            unk_dobjdata = second_dobj->unk_0x84;

            if (unk_dobjdata->unk_dobjdata_0x5 != 0)
            {
                break;
            }
            else if (second_dobj->parent == DObjParentNULL)
            {
                if (unk_dobjdata->unk_dobjdata_0x0 == 0)
                {
                    gcSetMatrixNcs(second_dobj, unk_dobjdata, unk_dobjdata->unk_dobjdata_0x10, NULL);

                    unk_dobjdata->unk_dobjdata_0x0 = 1;
                    unk_dobjdata->unk_dobjdata_0x6 = 1;
                }
                func_ovl2_800ECD80(unk_dobjdata->unk_dobjdata_0x50, unk_dobjdata->unk_dobjdata_0x10);

                unk_dobjdata->unk_dobjdata_0x5 = 1;

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

            if (current_dobjdata->unk_dobjdata_0x0 == 0)
            {
                gcSetMatrixNcs(second_dobj, current_dobjdata, current_dobjdata->unk_dobjdata_0x10, &unk_dobjdata->unk_dobjdata_0x90);

                current_dobjdata->unk_dobjdata_0x0 = 1;
                current_dobjdata->unk_dobjdata_0x6 = 1;
            }
            func_ovl2_800ED490(current_dobjdata->unk_dobjdata_0x50, unk_dobjdata->unk_dobjdata_0x50, current_dobjdata->unk_dobjdata_0x10);

            current_dobjdata->unk_dobjdata_0x5 = 1;
            unk_dobjdata = current_dobjdata;
        }
    }
}

// 0x800EDE00
void func_ovl2_800EDE00(DObj *main_dobj)
{
    UnkDObjData *unk_dobjdata = main_dobj->unk_0x84;

    if (unk_dobjdata->unk_dobjdata_0x7 == 0)
    {
        if (unk_dobjdata->unk_dobjdata_0x5 == 0)
        {
            func_ovl2_800EDBA4();
        }
        gcSetInvMatrix(unk_dobjdata->unk_dobjdata_0x9C, unk_dobjdata->unk_dobjdata_0x50);

        unk_dobjdata->unk_dobjdata_0x7 = 1;
    }
}

// 0x800EDE5C
void func_ovl2_800EDE5C(DObj *main_dobj)
{
    UnkDObjData *unk_dobjdata = main_dobj->unk_0x84;

    if (unk_dobjdata->unk_dobjdata_0x6 == 0)
    {
        if (unk_dobjdata->unk_dobjdata_0x5 == 0)
        {
            func_ovl2_800EDBA4();
        }
        unk_dobjdata->unk_dobjdata_0x90.x = sqrtf(SQUARE(unk_dobjdata->unk_dobjdata_0x50[0][0]) + SQUARE(unk_dobjdata->unk_dobjdata_0x50[0][1]) + SQUARE(unk_dobjdata->unk_dobjdata_0x50[0][2]));
        unk_dobjdata->unk_dobjdata_0x90.y = sqrtf(SQUARE(unk_dobjdata->unk_dobjdata_0x50[1][0]) + SQUARE(unk_dobjdata->unk_dobjdata_0x50[1][1]) + SQUARE(unk_dobjdata->unk_dobjdata_0x50[1][2]));
        unk_dobjdata->unk_dobjdata_0x90.z = sqrtf(SQUARE(unk_dobjdata->unk_dobjdata_0x50[2][0]) + SQUARE(unk_dobjdata->unk_dobjdata_0x50[2][1]) + SQUARE(unk_dobjdata->unk_dobjdata_0x50[2][2]));

        unk_dobjdata->unk_dobjdata_0x6 = 1;
    }
}

// 0x800EDF24
void func_ovl2_800EDF24(DObj *main_dobj, Vec3f *vec)
{
    UnkDObjData *unk_dobjdata;
    u32 flag = ftGetStruct(main_dobj->parent_gobj)->x190_flag_b3;

    if (flag == FALSE)
    {
        while (main_dobj != DObjParentNULL)
        {
            unk_dobjdata = main_dobj->unk_0x84;

            if (unk_dobjdata->unk_dobjdata_0x5 != 0)
            {
                func_ovl2_800ED3C0(unk_dobjdata->unk_dobjdata_0x50, vec);

                return;
            }
            else if (unk_dobjdata->unk_dobjdata_0x0 == 0)
            {
                func_ovl2_800ECDE4(main_dobj, unk_dobjdata, unk_dobjdata->unk_dobjdata_0x10);

                unk_dobjdata->unk_dobjdata_0x0 = 1;
            }
            func_ovl2_800ED3C0(unk_dobjdata->unk_dobjdata_0x10, vec);

            main_dobj = main_dobj->parent;
        }
    }
    else
    {
        unk_dobjdata = main_dobj->unk_0x84;

        if (unk_dobjdata->unk_dobjdata_0x5 == 0)
        {
            func_ovl2_800EDBA4(main_dobj);
        }
        func_ovl2_800ED3C0(unk_dobjdata->unk_dobjdata_0x50, vec);
    }
}

// 0x800EE018
void func_ovl2_800EE018(DObj *main_dobj, Vec3f *vec)
{
    UnkDObjData *unk_dobjdata = main_dobj->unk_0x84;

    func_ovl2_800EDE00(main_dobj);
    func_ovl2_800ED3C0(unk_dobjdata->unk_dobjdata_0x9C, vec);
}
