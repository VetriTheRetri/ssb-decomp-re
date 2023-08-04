#include "mpcoll.h"
#include <ft/fighter.h>
#include <wp/weapon.h>
#include <it/item.h>
#include <gm/gmmatch.h>

extern s32 D_ovl2_80130DE0;
extern s32 D_ovl2_80130DE8[5]; // Wall line ID?
extern f32 D_ovl2_80130DFC;
extern s32 D_ovl2_80130E00;
extern s32 D_ovl2_80130E04;
extern Vec3f D_ovl2_80130E08;
extern u16 D_ovl2_80131398;

void func_ovl2_800D9510(void)
{
    D_ovl2_80130DE0 = 0;
}

void func_ovl2_800D951C(s32 arg0)
{
    s32 i;

    for (i = 0; i < D_ovl2_80130DE0; i++)
    {
        if (arg0 == D_ovl2_80130DE8[i])
        {
            return;
        }
    }

    if (D_ovl2_80130DE0 != ARRAY_COUNT(D_ovl2_80130DE8))
    {
        D_ovl2_80130DE8[D_ovl2_80130DE0] = arg0;
        D_ovl2_80130DE0++;
    }
}

void func_ovl2_800D957C(void)
{
    D_ovl2_80130DFC = ((f32) -(U16_MAX + 1));
}

void func_ovl2_800D9590(void)
{
    D_ovl2_80130DFC = ((f32) (U16_MAX + 1));
}

void func_ovl2_800D95A4(f32 arg0, s32 arg1, s32 arg2, Vec3f *arg3)
{
    D_ovl2_80130DFC = arg0;
    D_ovl2_80130E00 = arg1;
    D_ovl2_80130E04 = arg2;
    D_ovl2_80130E08 = *arg3;
}

void func_ovl2_800D95E0(f32 *arg0, s32 *arg1, s32 *arg2, Vec3f *arg3)
{
    *arg0 = D_ovl2_80130DFC;
    *arg1 = D_ovl2_80130E00;
    *arg2 = D_ovl2_80130E04;
    *arg3 = D_ovl2_80130E08;
}

bool32 func_ovl2_800D9628(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f b;
    Vec3f a;
    s32 sp2C;
    s32 sp28;

    sp28 = func_ovl2_800FAAE4(coll_data->ceil_line_id);

    b.x = translate->x;
    b.y = translate->y + object_coll->top;
    a.x = translate->x + object_coll->width;
    a.y = translate->y + object_coll->center;

    if ((func_ovl2_800F7F00(&b, &a, 0, &sp2C, 0, 0) != FALSE) && (sp2C != sp28))
    {
        return TRUE;
    }
    else return FALSE;
}

void func_ovl2_800D96D8(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp3C;
    Vec3f sp30;
    f32 sp2C;

    sp30.x = translate->x + object_coll->width;
    sp3C.x = sp30.x;

    sp30.y = translate->y + object_coll->center;
    sp3C.y = sp30.y;

    sp3C.x += (2.0F * (coll_data->ceil_angle.y * object_coll->width));
    sp3C.y += (2.0F * (-coll_data->ceil_angle.x * object_coll->width));

    if (func_ovl2_800F7F00(&sp3C, &sp30, &coll_data->ground_to_air_pos_last, NULL, 0, 0) != 0)
    {
        sp30.x = coll_data->ground_to_air_pos_last.x - object_coll->width;
        sp30.y = translate->y + object_coll->top;

        if (func_ovl2_800F3E04(coll_data->ceil_line_id, &sp30, &sp2C, &coll_data->ceil_flags, &coll_data->ceil_angle) != 0)
        {
            translate->y += sp2C;
            translate->x = sp30.x;
        }
    }
}

bool32 func_ovl2_800D97F0(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f b;
    Vec3f a;
    s32 sp2C;
    s32 sp28;

    sp28 = func_ovl2_800FABA4(coll_data->ceil_line_id);

    b.x = translate->x;
    b.y = translate->y + object_coll->top;
    a.x = translate->x - object_coll->width;
    a.y = translate->y + object_coll->center;

    if ((func_ovl2_800F6B58(&b, &a, 0, &sp2C, 0, 0) != FALSE) && (sp2C != sp28))
    {
        return TRUE;
    }
    else return FALSE;
}

void func_ovl2_800D98A0(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp3C;
    Vec3f sp30;
    f32 sp2C;

    sp30.x = translate->x - object_coll->width;
    sp3C.x = sp30.x;

    sp30.y = translate->y + object_coll->center;
    sp3C.y = sp30.y;

    sp3C.x += (2.0F * (-coll_data->ceil_angle.y * object_coll->width));
    sp3C.y += (2.0F * (coll_data->ceil_angle.x * object_coll->width));

    if (func_ovl2_800F6B58(&sp3C, &sp30, &coll_data->ground_to_air_pos_last, NULL, 0, 0) != 0)
    {
        sp30.x = coll_data->ground_to_air_pos_last.x + object_coll->width;
        sp30.y = translate->y + object_coll->top;

        if (func_ovl2_800F3E04(coll_data->ceil_line_id, &sp30, &sp2C, &coll_data->ceil_flags, &coll_data->ceil_angle) != 0)
        {
            translate->y += sp2C;
            translate->x = sp30.x;
        }
    }
}

void func_ovl2_800D99B8(mpCollData *coll_data)
{
    if (func_ovl2_800D9628(coll_data) != FALSE)
    {
        func_ovl2_800D96D8(coll_data);
    }
    if (func_ovl2_800D97F0(coll_data) != FALSE)
    {
        func_ovl2_800D98A0(coll_data);
    }
}

bool32 func_ovl2_800D9A00(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f b;
    Vec3f a;
    s32 sp2C = func_ovl2_800FAA24(coll_data->ground_line_id);

    b.x = translate->x;
    b.y = translate->y + object_coll->bottom;
    a.x = translate->x + object_coll->width;
    a.y = translate->y + object_coll->center;

    if ((func_ovl2_800F7F00(&b, &a, NULL, &coll_data->unk_0x60, 0, 0) != 0) && (sp2C != coll_data->unk_0x60))
    {
        return TRUE;
    }
    else return FALSE;
}

void func_ovl2_800D9AB0(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp44;
    Vec3f sp38;
    f32 sp34;

    sp38.x = translate->x + object_coll->width;
    sp38.y = translate->y + object_coll->center;

    if (func_ovl2_800F4194(coll_data->unk_0x60, &sp38, NULL, NULL, NULL) != 0)
    {
        sp38.x = translate->x + object_coll->width;
        sp44.x = sp38.x;
        sp38.y = translate->y + object_coll->center;
        sp44.y = sp38.y;

        sp44.x += (2.0F * (-coll_data->ground_angle.y * object_coll->width));
        sp44.y += (2.0F * (coll_data->ground_angle.x * object_coll->width));

        if (func_ovl2_800F7F00(&sp44, &sp38, &coll_data->ground_to_air_pos_last, NULL, 0, 0) != 0)
        {
            sp38.x = coll_data->ground_to_air_pos_last.x - object_coll->width;
            sp38.y = translate->y + object_coll->bottom;

            if (mpCollision_GetUUCommonUp(coll_data->ground_line_id, &sp38, &sp34, &coll_data->ground_flags, &coll_data->ground_angle) != 0)
            {
                translate->y += sp34;
                translate->x = sp38.x;
            }
        }
    }
    else
    {
        func_ovl2_800F4650(coll_data->unk_0x60, &sp44);

        sp44.x -= 2.0F;
        sp38.x = sp44.x - (2.0F * object_coll->width);
        sp38.y = sp44.y - (2.0F * (object_coll->center - object_coll->bottom));

        if (func_ovl2_800F4BD8(&sp44, &sp38, &coll_data->ground_to_air_pos_last, NULL, NULL, NULL) != 0)
        {
            sp38.x = coll_data->ground_to_air_pos_last.x;
            sp38.y = translate->y;

            if (mpCollision_GetUUCommonUp(coll_data->ground_line_id, &sp38, &sp34, &coll_data->ground_flags, &coll_data->ground_angle) != 0)
            {
                translate->y += sp34;
                translate->x = sp38.x;
            }
        }
    }
}

bool32 func_ovl2_800D9CC0(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f b;
    Vec3f a;
    s32 sp2C = func_ovl2_800FA964(coll_data->ground_line_id);

    b.x = translate->x;
    b.y = translate->y + object_coll->bottom;
    a.x = translate->x - object_coll->width;
    a.y = translate->y + object_coll->center;

    if ((func_ovl2_800F6B58(&b, &a, NULL, &coll_data->unk_0x60, 0, 0) != 0) && (sp2C != coll_data->unk_0x60))
    {
        return TRUE;
    }
    else return FALSE;
}

void func_ovl2_800D9D70(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp44;
    Vec3f sp38;
    f32 sp34;

    sp38.x = translate->x - object_coll->width;
    sp38.y = translate->y + object_coll->center;

    if (func_ovl2_800F41C0(coll_data->unk_0x60, &sp38, NULL, NULL, NULL) != 0)
    {
        sp38.x = translate->x - object_coll->width;
        sp44.x = sp38.x;
        sp38.y = translate->y + object_coll->center;
        sp44.y = sp38.y;

        sp44.x += (2.0F * (coll_data->ground_angle.y * object_coll->width));
        sp44.y += (2.0F * (-coll_data->ground_angle.x * object_coll->width));

        if (func_ovl2_800F6B58(&sp44, &sp38, &coll_data->ground_to_air_pos_last, NULL, 0, 0) != 0)
        {
            sp38.x = coll_data->ground_to_air_pos_last.x + object_coll->width;
            sp38.y = translate->y + object_coll->bottom;

            if (mpCollision_GetUUCommonUp(coll_data->ground_line_id, &sp38, &sp34, &coll_data->ground_flags, &coll_data->ground_angle) != 0)
            {
                translate->y += sp34;
                translate->x = sp38.x;
            }
        }
    }
    else
    {
        func_ovl2_800F4690(coll_data->unk_0x60, &sp44);

        sp44.x += 2.0F;
        sp44.x = sp38.x + (2.0F * object_coll->width);
        sp44.y = sp38.y - (2.0F * (object_coll->center - object_coll->bottom));

        if (func_ovl2_800F4BD8(&sp44, &sp38, &coll_data->ground_to_air_pos_last, NULL, NULL, NULL) != 0)
        {
            sp38.x = coll_data->ground_to_air_pos_last.x;
            sp38.y = translate->y;

            if (mpCollision_GetUUCommonUp(coll_data->ground_line_id, &sp38, &sp34, &coll_data->ground_flags, &coll_data->ground_angle) != 0)
            {
                translate->y += sp34;
                translate->x = sp38.x;
            }
        }
    }
}

void func_ovl2_800D9F84(mpCollData *coll_data)
{
    if (func_ovl2_800D9A00(coll_data) != FALSE)
    {
        func_ovl2_800D9AB0(coll_data);
    }
    if (func_ovl2_800D9CC0(coll_data) != FALSE)
    {
        func_ovl2_800D9D70(coll_data);
    }
}

void func_ovl2_800D9FCC(mpCollData *coll_data) // Check if fighter is above ground while airborne
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp2C;

    sp2C.x = translate->x;
    sp2C.y = translate->y + object_coll->bottom;

    if (func_ovl2_800F9348(&sp2C, &coll_data->ground_line_id, &coll_data->ground_dist, &coll_data->ground_flags, &coll_data->ground_angle) == FALSE)
    {
        coll_data->ground_line_id = -1;
    }
}

bool32 func_ovl2_800DA034(mpCollData *coll_data, bool32(*proc_map)(mpCollData*, GObj*, s32), GObj *gobj, bool32 arg3)
{
    Vec3f *translate = coll_data->p_translate;
    Vec3f *pcurr = &coll_data->pos_curr;
    f32 project_y;
    f32 project_x;
    f32 var_f20;
    f32 var_f22;
    f32 var_f24;
    s32 var_s1;
    s32 var_s3;
    s32 sp50;

    if (translate->x < pcurr->x)
    {
        project_x = -(translate->x - pcurr->x);
    }
    else project_x = translate->x - pcurr->x;

    if (translate->y < pcurr->y)
    {
        project_y = -(translate->y - pcurr->y);
    }
    else project_y = translate->y - pcurr->y;

    if ((project_x > 250.0F) || (project_y > 250.0F))
    {
        var_s3 = (project_y < project_x) ? (s32)(project_x / 250.0F) : (s32)(project_y / 250.0F);

        var_s3++;

        var_f20 = coll_data->pos_prev.x / var_s3;
        var_f22 = coll_data->pos_prev.y / var_s3;
        var_f24 = coll_data->pos_prev.z / var_s3;
    }
    else
    {
        var_s3 = 1;

        var_f20 = coll_data->pos_prev.x;
        var_f22 = coll_data->pos_prev.y;
        var_f24 = coll_data->pos_prev.z;
    }
    *translate = *pcurr;

    for (var_s1 = 0; (var_s1 < var_s3) && (coll_data->unk_0x64 == 0); var_s1++)
    {
        *pcurr = *translate;

        if (var_s1 == 0)
        {
            translate->x += coll_data->pos_correct.x + coll_data->vel_push.x;
            translate->y += coll_data->pos_correct.y + coll_data->vel_push.y;
            translate->z += coll_data->pos_correct.z + coll_data->vel_push.z;
        }
        translate->x += var_f20;
        translate->y += var_f22;
        translate->z += var_f24;

        sp50 = proc_map(coll_data, gobj, arg3);
    }
    coll_data->wall_flag = D_ovl2_80131398;

    return sp50;
}

bool32 func_ovl2_800DA294(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    mpObjectColl *p_object_coll = coll_data->p_object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f *pcurr = &coll_data->pos_curr;
    Vec3f sp4C;
    Vec3f sp40;
    bool32 is_collide_rwall = FALSE;
    s32 test_line_id;
    s32 ground_line_id;
    bool32 wall_collide;

    func_ovl2_800D9510();

    ground_line_id = (func_ovl2_800FC67C(coll_data->ground_line_id) != FALSE) ? func_ovl2_800FAA24(coll_data->ground_line_id) : -1;

    sp4C.x = pcurr->x + p_object_coll->width;
    sp4C.y = pcurr->y + p_object_coll->center;
    sp40.x = translate->x + object_coll->width;
    sp40.y = translate->y + object_coll->center;

    wall_collide = (coll_data->wall_flag != D_ovl2_80131398) ? func_ovl2_800F8974(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) : func_ovl2_800F7F00(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL);

    if ((wall_collide != FALSE) && (test_line_id != ground_line_id))
    {
        func_ovl2_800D951C(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp4C.x = pcurr->x;
    sp4C.y = pcurr->y + p_object_coll->bottom;
    sp40.x = translate->x;
    sp40.y = translate->y + object_coll->bottom;

    wall_collide = (coll_data->wall_flag != D_ovl2_80131398) ? func_ovl2_800F8974(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) : func_ovl2_800F7F00(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL);

    if ((wall_collide != FALSE) && (test_line_id != ground_line_id))
    {
        func_ovl2_800D951C(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp4C.x = pcurr->x;
    sp4C.y = pcurr->y + p_object_coll->top;
    sp40.x = translate->x;
    sp40.y = translate->y + object_coll->top;

    wall_collide = (coll_data->wall_flag != D_ovl2_80131398) ? func_ovl2_800F8974(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) : func_ovl2_800F7F00(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL);

    if ((wall_collide != FALSE) && (test_line_id != ground_line_id))
    {
        func_ovl2_800D951C(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp4C.x = translate->x;
    sp4C.y = translate->y + object_coll->bottom;
    sp40.x = translate->x + object_coll->width;
    sp40.y = translate->y + object_coll->center;

    if ((func_ovl2_800F7F00(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) != FALSE) && (test_line_id != ground_line_id))
    {
        func_ovl2_800D951C(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp4C.x = translate->x;
    sp4C.y = translate->y + object_coll->top;
    sp40.x = translate->x + object_coll->width;
    sp40.y = translate->y + object_coll->center;

    if ((func_ovl2_800F7F00(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) != FALSE) && (test_line_id != ground_line_id))
    {
        func_ovl2_800D951C(test_line_id);

        is_collide_rwall = TRUE;
    }
    if (is_collide_rwall != FALSE)
    {
        coll_data->coll_mask |= MPCOLL_MASK_RWALL;
    }
    return is_collide_rwall;
}

void func_ovl2_800DA658(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp94;
    Vec3f sp88;
    Vec3f sp7C;
    s32 i;
    s32 temp_v0;
    s32 j;
    f32 sp6C;
    s32 wall_line_id;
    f32 sp64;

    func_ovl2_800D9590();

    for (i = 0; i < D_ovl2_80130DE0; i++)
    {
        wall_line_id = D_ovl2_80130DE8[i];

        func_ovl2_800F4650(wall_line_id, &sp94);

        if (sp94.y < (translate->y + object_coll->bottom))
        {
            if ((sp94.x < D_ovl2_80130DFC) && (func_ovl2_800F4194(wall_line_id, &sp94, NULL, &sp6C, &sp88) != 0))
            {
                func_ovl2_800D95A4(sp94.x, wall_line_id, sp6C, &sp88);
            }
        }
        else
        {
            func_ovl2_800F4670(wall_line_id, &sp94);

            if ((translate->y + object_coll->top) < sp94.y)
            {
                if ((sp94.x < D_ovl2_80130DFC) && (func_ovl2_800F4194(wall_line_id, &sp94, NULL, &sp6C, &sp88) != 0))
                {
                    func_ovl2_800D95A4(sp94.x, wall_line_id, sp6C, &sp88);
                }
            }
            else
            {
                sp94.x = translate->x;
                sp94.y = translate->y + object_coll->bottom;

                if (func_ovl2_800F4194(wall_line_id, &sp94, &sp64, &sp6C, &sp88) != 0)
                {
                    if ((translate->x + sp64) < D_ovl2_80130DFC)
                    {
                        func_ovl2_800D95A4((translate->x + sp64), wall_line_id, sp6C, &sp88);
                    }
                }
                sp94.x = translate->x + object_coll->width;
                sp94.y = translate->y + object_coll->center;

                if (func_ovl2_800F4194(wall_line_id, &sp94, &sp64, &sp6C, &sp88) != 0)
                {
                    if ((translate->x + sp64) < D_ovl2_80130DFC)
                    {
                        func_ovl2_800D95A4((translate->x + sp64), wall_line_id, sp6C, &sp88);
                    }
                }
                sp94.x = translate->x;
                sp94.y = translate->y + object_coll->top;

                if (func_ovl2_800F4194(wall_line_id, &sp94, &sp64, &sp6C, &sp88) != 0)
                {
                    if ((translate->x + sp64) < D_ovl2_80130DFC)
                    {
                        func_ovl2_800D95A4((translate->x + sp64), wall_line_id, sp6C, &sp88);
                    }
                }
                temp_v0 = func_ovl2_800FA518(wall_line_id);

                for (j = 0; j < temp_v0; j++)
                {
                    func_ovl2_800FA5E8(wall_line_id, j, &sp7C);

                    if ((translate->y + object_coll->bottom) <= sp7C.y)
                    {
                        if (sp7C.y <= (translate->y + object_coll->center))
                        {
                            sp64 = sp7C.x - (((sp7C.y - (translate->y + object_coll->bottom)) * object_coll->width) / (object_coll->center - object_coll->bottom));

                            goto block_26;
                        }
                    }
                    if ((translate->y + object_coll->center) <= sp7C.y)
                    {
                        if (sp7C.y <= (translate->y + object_coll->top))
                        {
                            sp64 = sp7C.x - ((((translate->y + object_coll->top) - sp7C.y) * object_coll->width) / (object_coll->top - object_coll->center));

                        block_26:
                            if ((sp64 < D_ovl2_80130DFC) && (func_ovl2_800F4194(wall_line_id, &sp7C, NULL, &sp6C, &sp88) != 0))
                            {
                                func_ovl2_800D95A4(sp64, wall_line_id, sp6C, &sp88);
                            }
                        }
                    }
                }
            }
        }
        continue;
    }
    func_ovl2_800D95E0(&sp64, &coll_data->rwall_line_id, &coll_data->rwall_flags, &coll_data->rwall_angle);

    if (sp64 < translate->x)
    {
        translate->x = sp64;
    }
}

bool32 func_ovl2_800DAAA8(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    mpObjectColl *p_object_coll = coll_data->p_object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f *pcurr = &coll_data->pos_curr;
    Vec3f sp4C;
    Vec3f sp40;
    bool32 is_collide_lwall = FALSE;
    s32 test_line_id;
    s32 ground_line_id;
    bool32 wall_collide;

    func_ovl2_800D9510();

    ground_line_id = (func_ovl2_800FC67C(coll_data->ground_line_id) != FALSE) ? func_ovl2_800FA964(coll_data->ground_line_id) : -1;

    sp4C.x = pcurr->x - p_object_coll->width;
    sp4C.y = pcurr->y + p_object_coll->center;
    sp40.x = translate->x - object_coll->width;
    sp40.y = translate->y + object_coll->center;

    wall_collide = (coll_data->wall_flag != D_ovl2_80131398) ? func_ovl2_800F769C(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) : func_ovl2_800F6B58(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL);

    if ((wall_collide != FALSE) && (test_line_id != ground_line_id))
    {
        func_ovl2_800D951C(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp4C.x = pcurr->x;
    sp4C.y = pcurr->y + p_object_coll->bottom;
    sp40.x = translate->x;
    sp40.y = translate->y + object_coll->bottom;

    wall_collide = (coll_data->wall_flag != D_ovl2_80131398) ? func_ovl2_800F769C(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) : func_ovl2_800F6B58(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL);

    if ((wall_collide != FALSE) && (test_line_id != ground_line_id))
    {
        func_ovl2_800D951C(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp4C.x = pcurr->x;
    sp4C.y = pcurr->y + p_object_coll->top;
    sp40.x = translate->x;
    sp40.y = translate->y + object_coll->top;

    wall_collide = (coll_data->wall_flag != D_ovl2_80131398) ? func_ovl2_800F769C(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) : func_ovl2_800F6B58(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL);

    if ((wall_collide != FALSE) && (test_line_id != ground_line_id))
    {
        func_ovl2_800D951C(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp4C.x = translate->x;
    sp4C.y = translate->y + object_coll->bottom;
    sp40.x = translate->x - object_coll->width;
    sp40.y = translate->y + object_coll->center;

    if ((func_ovl2_800F6B58(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) != FALSE) && (test_line_id != ground_line_id))
    {
        func_ovl2_800D951C(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp4C.x = translate->x;
    sp4C.y = translate->y + object_coll->top;
    sp40.x = translate->x - object_coll->width;
    sp40.y = translate->y + object_coll->center;

    if ((func_ovl2_800F6B58(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) != FALSE) && (test_line_id != ground_line_id))
    {
        func_ovl2_800D951C(test_line_id);

        is_collide_lwall = TRUE;
    }
    if (is_collide_lwall != FALSE)
    {
        coll_data->coll_mask |= MPCOLL_MASK_LWALL;
    }
    return is_collide_lwall;
}

void func_ovl2_800DAE6C(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp94;
    Vec3f sp88;
    Vec3f sp7C;
    s32 i;
    s32 temp_v0;
    s32 j;
    u32 sp6C;
    s32 wall_line_id;
    f32 sp64;

    func_ovl2_800D957C();

    for (i = 0; i < D_ovl2_80130DE0; i++)
    {
        wall_line_id = D_ovl2_80130DE8[i];

        func_ovl2_800F4690(wall_line_id, &sp94);

        if (sp94.y < (translate->y + object_coll->bottom))
        {
            if ((D_ovl2_80130DFC < sp94.x) && (func_ovl2_800F41C0(wall_line_id, &sp94, NULL, &sp6C, &sp88) != 0))
            {
                func_ovl2_800D95A4(sp94.x, wall_line_id, sp6C, &sp88);
            }
        }
        else
        {
            func_ovl2_800F46B0(wall_line_id, &sp94);

            if ((translate->y + object_coll->top) < sp94.y)
            {
                if ((D_ovl2_80130DFC < sp94.x) && (func_ovl2_800F41C0(wall_line_id, &sp94, NULL, &sp6C, &sp88) != 0))
                {
                    func_ovl2_800D95A4(sp94.x, wall_line_id, sp6C, &sp88);
                }
            }
            else
            {
                sp94.x = translate->x;
                sp94.y = translate->y + object_coll->bottom;

                if (func_ovl2_800F41C0(wall_line_id, &sp94, &sp64, &sp6C, &sp88) != 0)
                {
                    if ((translate->x + sp64) > D_ovl2_80130DFC)
                    {
                        func_ovl2_800D95A4((translate->x + sp64), wall_line_id, sp6C, &sp88);
                    }
                }
                sp94.x = translate->x - object_coll->width;
                sp94.y = translate->y + object_coll->center;

                if (func_ovl2_800F41C0(wall_line_id, &sp94, &sp64, &sp6C, &sp88) != 0)
                {
                    if ((translate->x + sp64) > D_ovl2_80130DFC)
                    {
                        func_ovl2_800D95A4((translate->x + sp64), wall_line_id, sp6C, &sp88);
                    }
                }
                sp94.x = translate->x;
                sp94.y = translate->y + object_coll->top;

                if (func_ovl2_800F41C0(wall_line_id, &sp94, &sp64, &sp6C, &sp88) != 0)
                {
                    if ((translate->x + sp64) > D_ovl2_80130DFC)
                    {
                        func_ovl2_800D95A4((translate->x + sp64), wall_line_id, sp6C, &sp88);
                    }
                }
                temp_v0 = func_ovl2_800FA518(wall_line_id);

                for (j = 0; j < temp_v0; j++)
                {
                    func_ovl2_800FA5E8(wall_line_id, j, &sp7C);

                    if ((translate->y + object_coll->bottom) <= sp7C.y)
                    {
                        if (sp7C.y <= (translate->y + object_coll->center))
                        {
                            sp64 = sp7C.x + (((sp7C.y - (translate->y + object_coll->bottom)) * object_coll->width) / (object_coll->center - object_coll->bottom));

                            goto block_26;
                        }
                    }
                    if ((translate->y + object_coll->center) <= sp7C.y)
                    {
                        if (sp7C.y <= (translate->y + object_coll->top))
                        {
                            sp64 = sp7C.x + ((((translate->y + object_coll->top) - sp7C.y) * object_coll->width) / (object_coll->top - object_coll->center));

                        block_26:
                            if ((D_ovl2_80130DFC < sp64) && (func_ovl2_800F41C0(wall_line_id, &sp7C, NULL, &sp6C, &sp88) != 0))
                            {
                                func_ovl2_800D95A4(sp64, wall_line_id, sp6C, &sp88);
                            }
                        }
                    }
                }
            }
        }
        continue;
    }
    func_ovl2_800D95E0(&sp64, &coll_data->lwall_line_id, &coll_data->lwall_flags, &coll_data->lwall_angle);

    if (translate->x < sp64)
    {
        translate->x = sp64;
    }
}

bool32 func_ovl2_800DB2BC(mpCollData *coll_data)
{
    Vec3f *translate = coll_data->p_translate;
    s32 temp_v0;
    Vec3f sp3C;
    s32 unused;
    bool32 sp34;
    f32 sp30;

    coll_data->coll_type &= ~(MPCOLL_MASK_GROUND);

    sp3C.x = translate->x;
    sp3C.y = translate->y + coll_data->object_coll.bottom;

    if (func_ovl2_800FC67C(coll_data->ground_line_id) == FALSE)
    {
        func_ovl2_800D9FCC(coll_data);

        return FALSE;
    }
    if (mpCollision_GetUUCommonUp(coll_data->ground_line_id, &sp3C, &sp30, &coll_data->ground_flags, &coll_data->ground_angle) != FALSE)
    {
        translate->y += sp30;

        coll_data->ground_dist = 0.0F;
        coll_data->coll_type |= MPCOLL_MASK_GROUND;

        return TRUE;
    }
    sp34 = FALSE;

    mpCollision_GetLREdgeLeft(coll_data->ground_line_id, &sp3C);

    if (translate->x <= sp3C.x)
    {
        temp_v0 = func_ovl2_800FAA24(coll_data->ground_line_id);

        if ((temp_v0 != -1) && (func_ovl2_800FA8A4(temp_v0) == 2))
        {
            sp34 = TRUE;
        }
    }
    else
    {
        mpCollision_GetLREdgeRight(coll_data->ground_line_id, &sp3C);

        temp_v0 = func_ovl2_800FA964(coll_data->ground_line_id);

        if ((temp_v0 != -1) && (func_ovl2_800FA8A4(temp_v0) == 3))
        {
            sp34 = TRUE;
        }
    }
    translate->y = sp3C.y - coll_data->object_coll.bottom;

    if (sp34 != 0)
    {
        translate->x = sp3C.x;

        mpCollision_GetUUCommonUp(coll_data->ground_line_id, &sp3C, NULL, &coll_data->ground_flags, &coll_data->ground_angle);

        coll_data->coll_type |= MPCOLL_MASK_GROUND;
        coll_data->ground_dist = 0.0F;

        return TRUE;
    }
    func_ovl2_800D9FCC(coll_data);

    return FALSE;
}

bool32 func_ovl2_800DB474(mpCollData *coll_data, s32 arg1)
{
    mpObjectColl *p_object_coll = coll_data->p_object_coll;
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    s32 var_v0;
    Vec3f sp4C;
    Vec3f sp40;
    s32 ground_line_id;
    u32 sp38;
    Vec3f sp2C;

    sp4C.x = coll_data->pos_curr.x;
    sp4C.y = coll_data->pos_curr.y + p_object_coll->bottom;
    sp40.x = translate->x;
    sp40.y = translate->y + object_coll->bottom;

                         var_v0
                              
                            =

        (coll_data->wall_flag != D_ovl2_80131398)

                            ?

    func_ovl2_800F521C(&sp4C, &sp40, &coll_data->ground_to_air_pos_last, &ground_line_id, &sp38, &sp2C)

                            :

    func_ovl2_800F4BD8(&sp4C, &sp40, &coll_data->ground_to_air_pos_last, &ground_line_id, &sp38, &sp2C);

    if ((var_v0 != 0) && (ground_line_id != arg1))
    {
        coll_data->coll_mask |= MPCOLL_MASK_GROUND;
        coll_data->ground_line_id = ground_line_id;
        coll_data->ground_flags = sp38;
        coll_data->ground_angle = sp2C;

        return TRUE;
    }
    else return FALSE;
}

bool32 func_ovl2_800DB590(mpCollData *coll_data)
{
    Vec3f *translate = coll_data->p_translate;
    Vec2f *cliffcatch_coll = &coll_data->cliffcatch_coll;
    Vec3f *pcurr = &coll_data->pos_curr;
    Vec3f sp48;
    Vec3f sp3C;
    u32 sp38;
    s32 var_v0;

    if (*coll_data->p_lr != RIGHT)
    {
        return FALSE;
    }

    sp48.x = pcurr->x + cliffcatch_coll->x;
    sp48.y = pcurr->y + cliffcatch_coll->y;
    sp3C.x = translate->x + cliffcatch_coll->x;
    sp3C.y = translate->y + cliffcatch_coll->y;

                    var_v0

                       =

    (coll_data->wall_flag != D_ovl2_80131398)

                       ?

    func_ovl2_800F521C(&sp48, &sp3C, &coll_data->ground_to_air_pos_last, &coll_data->cliff_id, &sp38, NULL)

                       :

    func_ovl2_800F4BD8(&sp48, &sp3C, &coll_data->ground_to_air_pos_last, &coll_data->cliff_id, &sp38, NULL);


    if ((var_v0 != 0) && (sp38 & MPCOLL_MASK_UNK1) && ((sp38 & 0xFFFF00FF) != 4))
    {
        mpCollision_GetLREdgeLeft(coll_data->cliff_id, &sp3C);

        if ((coll_data->ground_to_air_pos_last.x - sp3C.x) < 800.0F)
        {
            coll_data->coll_mask |= MPCOLL_MASK_LCLIFF;
            coll_data->coll_type |= MPCOLL_MASK_LCLIFF;

            return TRUE;
        }
    }
    return FALSE;
}

bool32 func_ovl2_800DB6F0(mpCollData *coll_data)
{
    Vec3f *translate = coll_data->p_translate;
    Vec2f *cliffcatch_coll = &coll_data->cliffcatch_coll;
    Vec3f *pcurr = &coll_data->pos_curr;
    Vec3f sp48;
    Vec3f sp3C;
    u32 sp38;
    s32 var_v0;

    if (*coll_data->p_lr != LEFT)
    {
        return FALSE;
    }

    sp48.x = pcurr->x - cliffcatch_coll->x;
    sp48.y = pcurr->y + cliffcatch_coll->y;
    sp3C.x = translate->x - cliffcatch_coll->x;
    sp3C.y = translate->y + cliffcatch_coll->y;

                    var_v0

                       =

    (coll_data->wall_flag != D_ovl2_80131398)

                       ?

    func_ovl2_800F521C(&sp48, &sp3C, &coll_data->ground_to_air_pos_last, &coll_data->cliff_id, &sp38, NULL)

                       :

    func_ovl2_800F4BD8(&sp48, &sp3C, &coll_data->ground_to_air_pos_last, &coll_data->cliff_id, &sp38, NULL);

    if ((var_v0 != 0) && (sp38 & MPCOLL_MASK_UNK1))
    {
        mpCollision_GetLREdgeRight(coll_data->cliff_id, &sp3C);

        if ((sp3C.x - coll_data->ground_to_air_pos_last.x) < 800.0F)
        {
            coll_data->coll_mask |= MPCOLL_MASK_RCLIFF;
            coll_data->coll_type |= MPCOLL_MASK_RCLIFF;

            return TRUE;
        }
    }
    return FALSE;
}

bool32 func_ovl2_800DB838(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    mpObjectColl *p_object_coll = coll_data->p_object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f *pcurr = &coll_data->pos_curr;
    Vec3f sp54;
    Vec3f sp48;
    bool32 is_collide_rwall;
    s32 sp40;
    s32 sp3C;
    s32 sp38;
    u32 sp34;
    s32 var_v0;

    is_collide_rwall = FALSE;

    coll_data->unk_0x58 &= ~(MPCOLL_MASK_RWALL);
    coll_data->coll_type &= ~(MPCOLL_MASK_RWALL);

    func_ovl2_800D9510();

    sp54.x = pcurr->x + p_object_coll->width;
    sp54.y = pcurr->y + p_object_coll->center;
    sp48.x = translate->x + object_coll->width;
    sp48.y = translate->y + object_coll->center;

                             var_v0

                                =

            (coll_data->wall_flag != D_ovl2_80131398)

                                ?

    func_ovl2_800F8974(&sp54, &sp48, NULL, &sp40, NULL, NULL)

                                :

    func_ovl2_800F7F00(&sp54, &sp48, NULL, &sp40, NULL, NULL);

    if (var_v0 != 0)
    {
        func_ovl2_800D951C(sp40);

        is_collide_rwall = TRUE;
    }
    sp54.x = pcurr->x;
    sp54.y = pcurr->y + p_object_coll->bottom;
    sp48.x = translate->x;
    sp48.y = translate->y + object_coll->bottom;

                         var_v0

                            =

            (coll_data->wall_flag != D_ovl2_80131398)

                            ?

    func_ovl2_800F8974(&sp54, &sp48, NULL, &sp40, NULL, NULL)

                            :

    func_ovl2_800F7F00(&sp54, &sp48, NULL, &sp40, NULL, NULL);

    if (var_v0 != 0)
    {
        func_ovl2_800D951C(sp40);

        is_collide_rwall = TRUE;
    }
    sp54.x = pcurr->x;
    sp54.y = pcurr->y + p_object_coll->top;
    sp48.x = translate->x;
    sp48.y = translate->y + object_coll->top;

                     var_v0

                        =

    (coll_data->wall_flag != D_ovl2_80131398)

                        ?

    func_ovl2_800F8974(&sp54, &sp48, NULL, &sp40, NULL, NULL)

                        :

    func_ovl2_800F7F00(&sp54, &sp48, NULL, &sp40, NULL, NULL);

    if (var_v0 != 0)
    {
        func_ovl2_800D951C(sp40);

        is_collide_rwall = TRUE;
    }
    sp54.x = translate->x;
    sp54.y = translate->y + object_coll->bottom;
    sp48.x = translate->x + object_coll->width;
    sp48.y = translate->y + object_coll->center;

    if (func_ovl2_800F7F00(&sp54, &sp48, NULL, &sp40, NULL, NULL) != 0)
    {
        func_ovl2_800D951C(sp40);

        is_collide_rwall = TRUE;
    }
    sp54.x = translate->x;
    sp54.y = translate->y + object_coll->top;
    sp48.x = translate->x + object_coll->width;
    sp48.y = translate->y + object_coll->center;

    if (func_ovl2_800F7F00(&sp54, &sp48, NULL, &sp40, NULL, NULL) != 0)
    {
        func_ovl2_800D951C(sp40);

        is_collide_rwall = TRUE;
    }
    sp54.x = pcurr->x + p_object_coll->width;
    sp54.y = pcurr->y + p_object_coll->center;
    sp48.x = translate->x + object_coll->width;
    sp48.y = translate->y + object_coll->center;

                     var_v0

                        =

    (coll_data->wall_flag != D_ovl2_80131398)

                        ?

    func_ovl2_800F64D4(&sp54, &sp48, NULL, &sp40, NULL, NULL)

                        :

    func_ovl2_800F5E90(&sp54, &sp48, NULL, &sp40, NULL, NULL);

    if (var_v0 != 0)
    {
        sp38 = func_ovl2_800FABA4(sp40);

        if (sp38 != -1)
        {
            if (func_ovl2_800FA8A4(sp38) == 3)
            {
                sp54.x = pcurr->x;
                sp54.y = pcurr->y + p_object_coll->top;
                sp48.x = translate->x;
                sp48.y = translate->y + object_coll->top;

                                     var_v0

                                        =

                    (coll_data->wall_flag != D_ovl2_80131398)

                                        ?

                func_ovl2_800F64D4(&sp54, &sp48, NULL, &sp3C, NULL, NULL)

                                        :

                func_ovl2_800F5E90(&sp54, &sp48, NULL, &sp3C, NULL, NULL);

                if ((var_v0 == 0) || (sp40 != sp3C))
                {
                    sp54.x = translate->x;
                    sp54.y = translate->y + object_coll->top;
                    sp48.x = translate->x + object_coll->width;
                    sp48.y = translate->y + object_coll->center;

                    if ((func_ovl2_800F5E90(&sp54, &sp48, 0, &sp3C, 0, 0) == 0) || (sp40 != sp3C))
                    {
                        func_ovl2_800D951C(sp38);

                        is_collide_rwall = TRUE;
                    }
                }
            }
        }
    }
    sp54.x = pcurr->x + p_object_coll->width;
    sp54.y = pcurr->y + p_object_coll->center;
    sp48.x = translate->x + object_coll->width;
    sp48.y = translate->y + object_coll->center;

                         var_v0

                            =

        (coll_data->wall_flag != D_ovl2_80131398)

                            ?

    func_ovl2_800F521C(&sp54, &sp48, NULL, &sp40, &sp34, NULL)

                            :

    func_ovl2_800F4BD8(&sp54, &sp48, NULL, &sp40, &sp34, NULL);

    if ((var_v0 != 0) && !(sp34 & 0x4000))
    {
        sp38 = func_ovl2_800FAA24(sp40);

        if (sp38 != -1)
        {
            if (func_ovl2_800FA8A4(sp38) == 3)
            {
                sp54.x = pcurr->x;
                sp54.y = pcurr->y + p_object_coll->bottom;
                sp48.x = translate->x;
                sp48.y = translate->y + object_coll->bottom;

                                 var_v0

                                    =

                (coll_data->wall_flag != D_ovl2_80131398)

                                    ?

                func_ovl2_800F521C(&sp54, &sp48, NULL, &sp3C, NULL, NULL)

                                    :

                func_ovl2_800F4BD8(&sp54, &sp48, NULL, &sp3C, NULL, NULL);

                if ((var_v0 == 0) || (sp40 != sp3C))
                {
                    sp54.x = translate->x;
                    sp54.y = translate->y + object_coll->bottom;
                    sp48.x = translate->x + object_coll->width;
                    sp48.y = translate->y + object_coll->center;

                    if ((func_ovl2_800F4BD8(&sp54, &sp48, NULL, &sp3C, NULL, NULL) == 0) || (sp40 != sp3C))
                    {
                        func_ovl2_800D951C(sp38);

                        is_collide_rwall = TRUE;
                    }
                }
            }
        }
    }
    if (is_collide_rwall != FALSE)
    {
        coll_data->coll_mask |= MPCOLL_MASK_RWALL;
    }
    return is_collide_rwall;
}

void func_ovl2_800DBF58(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp94;
    Vec3f sp88;
    Vec3f sp7C;
    s32 i;
    s32 temp_v0;
    s32 j;
    f32 sp6C;
    s32 wall_line_id;
    f32 sp64;

    func_ovl2_800D9590();

    for (i = 0; i < D_ovl2_80130DE0; i++)
    {
        wall_line_id = D_ovl2_80130DE8[i];

        func_ovl2_800F4650(wall_line_id, &sp94);

        if (sp94.y < (translate->y + object_coll->bottom))
        {
            if ((sp94.x < D_ovl2_80130DFC) && (func_ovl2_800F4194(wall_line_id, &sp94, NULL, &sp6C, &sp88) != 0))
            {
                func_ovl2_800D95A4(sp94.x, wall_line_id, sp6C, &sp88);
            }
        }
        else
        {
            func_ovl2_800F4670(wall_line_id, &sp94);

            if ((translate->y + object_coll->top) < sp94.y)
            {
                if ((sp94.x < D_ovl2_80130DFC) && (func_ovl2_800F4194(wall_line_id, &sp94, NULL, &sp6C, &sp88) != 0))
                {
                    func_ovl2_800D95A4(sp94.x, wall_line_id, sp6C, &sp88);
                }
            }
            else
            {
                sp94.x = translate->x;
                sp94.y = translate->y + object_coll->bottom;

                if (func_ovl2_800F4194(wall_line_id, &sp94, &sp64, &sp6C, &sp88) != 0)
                {
                    if ((translate->x + sp64) < D_ovl2_80130DFC)
                    {
                        func_ovl2_800D95A4((translate->x + sp64), wall_line_id, sp6C, &sp88);
                    }
                }
                sp94.x = translate->x + object_coll->width;
                sp94.y = translate->y + object_coll->center;

                if (func_ovl2_800F4194(wall_line_id, &sp94, &sp64, &sp6C, &sp88) != 0)
                {
                    if ((translate->x + sp64) < D_ovl2_80130DFC)
                    {
                        func_ovl2_800D95A4((translate->x + sp64), wall_line_id, sp6C, &sp88);
                    }
                }
                sp94.x = translate->x;
                sp94.y = translate->y + object_coll->top;

                if (func_ovl2_800F4194(wall_line_id, &sp94, &sp64, &sp6C, &sp88) != 0)
                {
                    if ((translate->x + sp64) < D_ovl2_80130DFC)
                    {
                        func_ovl2_800D95A4((translate->x + sp64), wall_line_id, sp6C, &sp88);
                    }
                }
                temp_v0 = func_ovl2_800FA518(wall_line_id);

                for (j = 0; j < temp_v0; j++)
                {
                    func_ovl2_800FA5E8(wall_line_id, j, &sp7C);

                    if ((translate->y + object_coll->bottom) <= sp7C.y)
                    {
                        if (sp7C.y <= (translate->y + object_coll->center))
                        {
                            sp64 = sp7C.x - (((sp7C.y - (translate->y + object_coll->bottom)) * object_coll->width) / (object_coll->center - object_coll->bottom));

                            goto block_26;
                        }
                    }
                    if ((translate->y + object_coll->center) <= sp7C.y)
                    {
                        if (sp7C.y <= (translate->y + object_coll->top))
                        {
                            sp64 = sp7C.x - ((((translate->y + object_coll->top) - sp7C.y) * object_coll->width) / (object_coll->top - object_coll->center));

                        block_26:
                            if ((sp64 < D_ovl2_80130DFC) && (func_ovl2_800F4194(wall_line_id, &sp7C, NULL, &sp6C, &sp88) != 0))
                            {
                                func_ovl2_800D95A4(sp64, wall_line_id, sp6C, &sp88);
                            }
                        }
                    }
                }
            }
        }
        continue;
    }
    func_ovl2_800D95E0(&sp64, &coll_data->rwall_line_id, &coll_data->rwall_flags, &coll_data->rwall_angle);

    if (sp64 < translate->x)
    {
        translate->x = sp64;

        coll_data->coll_type |= MPCOLL_MASK_RWALL;
    }
    coll_data->unk_0x58 |= MPCOLL_MASK_RWALL;
}

bool32 func_ovl2_800DC3C8(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    mpObjectColl *p_object_coll = coll_data->p_object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f *pcurr = &coll_data->pos_curr;
    Vec3f sp54;
    Vec3f sp48;
    bool32 is_collide_lwall;
    s32 sp40;
    s32 sp3C;
    s32 sp38;
    u32 sp34;
    s32 var_v0;

    is_collide_lwall = FALSE;

    coll_data->unk_0x58 &= ~(MPCOLL_MASK_LWALL);
    coll_data->coll_type &= ~(MPCOLL_MASK_LWALL);

    func_ovl2_800D9510();

    sp54.x = pcurr->x - p_object_coll->width;
    sp54.y = pcurr->y + p_object_coll->center;
    sp48.x = translate->x - object_coll->width;
    sp48.y = translate->y + object_coll->center;

                             var_v0

                                =

            (coll_data->wall_flag != D_ovl2_80131398)

                                ?

    func_ovl2_800F769C(&sp54, &sp48, NULL, &sp40, NULL, NULL)

                                :

    func_ovl2_800F6B58(&sp54, &sp48, NULL, &sp40, NULL, NULL);

    if (var_v0 != 0)
    {
        func_ovl2_800D951C(sp40);

        is_collide_lwall = TRUE;
    }
    sp54.x = pcurr->x;
    sp54.y = pcurr->y + p_object_coll->bottom;
    sp48.x = translate->x;
    sp48.y = translate->y + object_coll->bottom;

                         var_v0

                            =

            (coll_data->wall_flag != D_ovl2_80131398)

                            ?

    func_ovl2_800F769C(&sp54, &sp48, NULL, &sp40, NULL, NULL)

                            :

    func_ovl2_800F6B58(&sp54, &sp48, NULL, &sp40, NULL, NULL);

    if (var_v0 != 0)
    {
        func_ovl2_800D951C(sp40);

        is_collide_lwall = TRUE;
    }
    sp54.x = pcurr->x;
    sp54.y = pcurr->y + p_object_coll->top;
    sp48.x = translate->x;
    sp48.y = translate->y + object_coll->top;

                     var_v0

                        =

    (coll_data->wall_flag != D_ovl2_80131398)

                        ?

    func_ovl2_800F769C(&sp54, &sp48, NULL, &sp40, NULL, NULL)

                        :

    func_ovl2_800F6B58(&sp54, &sp48, NULL, &sp40, NULL, NULL);

    if (var_v0 != 0)
    {
        func_ovl2_800D951C(sp40);

        is_collide_lwall = TRUE;
    }
    sp54.x = translate->x;
    sp54.y = translate->y + object_coll->bottom;
    sp48.x = translate->x - object_coll->width;
    sp48.y = translate->y + object_coll->center;

    if (func_ovl2_800F6B58(&sp54, &sp48, NULL, &sp40, NULL, NULL) != 0)
    {
        func_ovl2_800D951C(sp40);

        is_collide_lwall = TRUE;
    }
    sp54.x = translate->x;
    sp54.y = translate->y + object_coll->top;
    sp48.x = translate->x - object_coll->width;
    sp48.y = translate->y + object_coll->center;

    if (func_ovl2_800F6B58(&sp54, &sp48, NULL, &sp40, NULL, NULL) != 0)
    {
        func_ovl2_800D951C(sp40);

        is_collide_lwall = TRUE;
    }
    sp54.x = pcurr->x - p_object_coll->width;
    sp54.y = pcurr->y + p_object_coll->center;
    sp48.x = translate->x - object_coll->width;
    sp48.y = translate->y + object_coll->center;

                     var_v0

                        =

    (coll_data->wall_flag != D_ovl2_80131398)

                        ?

    func_ovl2_800F64D4(&sp54, &sp48, NULL, &sp40, NULL, NULL)

                        :

    func_ovl2_800F5E90(&sp54, &sp48, NULL, &sp40, NULL, NULL);

    if (var_v0 != 0)
    {
        sp38 = func_ovl2_800FAAE4(sp40);

        if (sp38 != -1)
        {
            if (func_ovl2_800FA8A4(sp38) == 2)
            {
                sp54.x = pcurr->x;
                sp54.y = pcurr->y + p_object_coll->top;
                sp48.x = translate->x;
                sp48.y = translate->y + object_coll->top;

                                     var_v0

                                        =

                    (coll_data->wall_flag != D_ovl2_80131398)

                                        ?

                func_ovl2_800F64D4(&sp54, &sp48, NULL, &sp3C, NULL, NULL)

                                        :

                func_ovl2_800F5E90(&sp54, &sp48, NULL, &sp3C, NULL, NULL);

                if ((var_v0 == 0) || (sp40 != sp3C))
                {
                    sp54.x = translate->x;
                    sp54.y = translate->y + object_coll->top;
                    sp48.x = translate->x - object_coll->width;
                    sp48.y = translate->y + object_coll->center;

                    if ((func_ovl2_800F5E90(&sp54, &sp48, 0, &sp3C, 0, 0) == 0) || (sp40 != sp3C))
                    {
                        func_ovl2_800D951C(sp38);

                        is_collide_lwall = TRUE;
                    }
                }
            }
        }
    }
    sp54.x = pcurr->x - p_object_coll->width;
    sp54.y = pcurr->y + p_object_coll->center;
    sp48.x = translate->x - object_coll->width;
    sp48.y = translate->y + object_coll->center;

                         var_v0

                            =

        (coll_data->wall_flag != D_ovl2_80131398)

                            ?

    func_ovl2_800F521C(&sp54, &sp48, NULL, &sp40, &sp34, NULL)

                            :

    func_ovl2_800F4BD8(&sp54, &sp48, NULL, &sp40, &sp34, NULL);

    if ((var_v0 != 0) && !(sp34 & 0x4000))
    {
        sp38 = func_ovl2_800FA964(sp40);

        if (sp38 != -1)
        {
            if (func_ovl2_800FA8A4(sp38) == 2)
            {
                sp54.x = pcurr->x;
                sp54.y = pcurr->y + p_object_coll->bottom;
                sp48.x = translate->x;
                sp48.y = translate->y + object_coll->bottom;

                                 var_v0

                                    =

                (coll_data->wall_flag != D_ovl2_80131398)

                                    ?

                func_ovl2_800F521C(&sp54, &sp48, NULL, &sp3C, NULL, NULL)

                                    :

                func_ovl2_800F4BD8(&sp54, &sp48, NULL, &sp3C, NULL, NULL);

                if ((var_v0 == 0) || (sp40 != sp3C))
                {
                    sp54.x = translate->x;
                    sp54.y = translate->y + object_coll->bottom;
                    sp48.x = translate->x - object_coll->width;
                    sp48.y = translate->y + object_coll->center;

                    if ((func_ovl2_800F4BD8(&sp54, &sp48, NULL, &sp3C, NULL, NULL) == 0) || (sp40 != sp3C))
                    {
                        func_ovl2_800D951C(sp38);

                        is_collide_lwall = TRUE;
                    }
                }
            }
        }
    }
    if (is_collide_lwall != FALSE)
    {
        coll_data->coll_mask |= MPCOLL_MASK_LWALL;
    }
    return is_collide_lwall;
}

void func_ovl2_800DCAE8(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp94;
    Vec3f sp88;
    Vec3f sp7C;
    s32 i;
    s32 temp_v0;
    s32 j;
    f32 sp6C;
    s32 wall_line_id;
    f32 sp64;

    func_ovl2_800D957C();

    for (i = 0; i < D_ovl2_80130DE0; i++)
    {
        wall_line_id = D_ovl2_80130DE8[i];

        func_ovl2_800F4690(wall_line_id, &sp94);

        if (sp94.y < (translate->y + object_coll->bottom))
        {
            if ((D_ovl2_80130DFC < sp94.x) && (func_ovl2_800F41C0(wall_line_id, &sp94, NULL, &sp6C, &sp88) != 0))
            {
                func_ovl2_800D95A4(sp94.x, wall_line_id, sp6C, &sp88);
            }
        }
        else
        {
            func_ovl2_800F46B0(wall_line_id, &sp94);

            if ((translate->y + object_coll->top) < sp94.y)
            {
                if ((D_ovl2_80130DFC < sp94.x) && (func_ovl2_800F41C0(wall_line_id, &sp94, NULL, &sp6C, &sp88) != 0))
                {
                    func_ovl2_800D95A4(sp94.x, wall_line_id, sp6C, &sp88);
                }
            }
            else
            {
                sp94.x = translate->x;
                sp94.y = translate->y + object_coll->bottom;

                if (func_ovl2_800F41C0(wall_line_id, &sp94, &sp64, &sp6C, &sp88) != 0)
                {
                    if ((translate->x + sp64) > D_ovl2_80130DFC)
                    {
                        func_ovl2_800D95A4((translate->x + sp64), wall_line_id, sp6C, &sp88);
                    }
                }
                sp94.x = translate->x - object_coll->width;
                sp94.y = translate->y + object_coll->center;

                if (func_ovl2_800F41C0(wall_line_id, &sp94, &sp64, &sp6C, &sp88) != 0)
                {
                    if ((translate->x + sp64) > D_ovl2_80130DFC)
                    {
                        func_ovl2_800D95A4((translate->x + sp64), wall_line_id, sp6C, &sp88);
                    }
                }
                sp94.x = translate->x;
                sp94.y = translate->y + object_coll->top;

                if (func_ovl2_800F41C0(wall_line_id, &sp94, &sp64, &sp6C, &sp88) != 0)
                {
                    if ((translate->x + sp64) > D_ovl2_80130DFC)
                    {
                        func_ovl2_800D95A4((translate->x + sp64), wall_line_id, sp6C, &sp88);
                    }
                }
                temp_v0 = func_ovl2_800FA518(wall_line_id);

                for (j = 0; j < temp_v0; j++)
                {
                    func_ovl2_800FA5E8(wall_line_id, j, &sp7C);

                    if ((translate->y + object_coll->bottom) <= sp7C.y)
                    {
                        if (sp7C.y <= (translate->y + object_coll->center))
                        {
                            sp64 = sp7C.x + (((sp7C.y - (translate->y + object_coll->bottom)) * object_coll->width) / (object_coll->center - object_coll->bottom));

                            goto block_26;
                        }
                    }
                    if ((translate->y + object_coll->center) <= sp7C.y)
                    {
                        if (sp7C.y <= (translate->y + object_coll->top))
                        {
                            sp64 = sp7C.x + ((((translate->y + object_coll->top) - sp7C.y) * object_coll->width) / (object_coll->top - object_coll->center));

                        block_26:
                            if ((D_ovl2_80130DFC < sp64) && (func_ovl2_800F41C0(wall_line_id, &sp7C, NULL, &sp6C, &sp88) != 0))
                            {
                                func_ovl2_800D95A4(sp64, wall_line_id, sp6C, &sp88);
                            }
                        }
                    }
                }
            }
        }
        continue;
    }
    func_ovl2_800D95E0(&sp64, &coll_data->lwall_line_id, &coll_data->lwall_flags, &coll_data->lwall_angle);

    if (translate->x < sp64)
    {
        translate->x = sp64;

        coll_data->coll_type |= MPCOLL_MASK_LWALL;
    }
    coll_data->unk_0x58 |= MPCOLL_MASK_LWALL;
}

bool32 func_ovl2_800DCF58(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    mpObjectColl *p_object_coll = coll_data->p_object_coll;
    Vec3f *translate = coll_data->p_translate;
    s32 unused;
    Vec3f sp4C;
    Vec3f sp40;
    s32 var_v0;
    f32 sp38;
    s32 line_id;

    coll_data->coll_type &= ~(MPCOLL_MASK_CEIL);

    sp4C.x = coll_data->pos_curr.x;
    sp4C.y = coll_data->pos_curr.y + p_object_coll->top;

    sp40.x = translate->x;
    sp40.y = translate->y + object_coll->top;

    var_v0 = (coll_data->wall_flag != D_ovl2_80131398)

        ?

        func_ovl2_800F64D4(&sp4C, &sp40, &coll_data->ground_to_air_pos_last, &coll_data->ceil_line_id, &coll_data->ceil_flags, &coll_data->ceil_angle)

        :

        func_ovl2_800F5E90(&sp4C, &sp40, &coll_data->ground_to_air_pos_last, &coll_data->ceil_line_id, &coll_data->ceil_flags, &coll_data->ceil_angle);

    if (var_v0 != 0)
    {
        coll_data->coll_mask |= MPCOLL_MASK_CEIL;

        return TRUE;
    }
    if (coll_data->unk_0x58 & MPCOLL_MASK_RWALL)
    {
        line_id = func_ovl2_800FAC64(coll_data->rwall_line_id);

        if ((line_id != -1) && (func_ovl2_800FA8A4(line_id) == 1) && (func_ovl2_800F3E04(line_id, &sp40, &sp38, &coll_data->ceil_flags, &coll_data->ceil_angle) != 0) && (sp38 < 0.0F))
        {
            coll_data->ceil_line_id = line_id;
            coll_data->coll_mask |= MPCOLL_MASK_CEIL;

            return TRUE;
        }
    }
    else if (coll_data->unk_0x58 & MPCOLL_MASK_LWALL)
    {
        line_id = func_ovl2_800FADE4(coll_data->lwall_line_id);

        if ((line_id != -1) && (func_ovl2_800FA8A4(line_id) == 1) && (func_ovl2_800F3E04(line_id, &sp40, &sp38, &coll_data->ceil_flags, &coll_data->ceil_angle) != 0) && (sp38 < 0.0F))
        {
            coll_data->ceil_line_id = line_id;
            coll_data->coll_mask |= MPCOLL_MASK_CEIL;

            return TRUE;
        }
    }
    return FALSE;
}

void func_ovl2_800DD160(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp3C;
    s32 temp_v0;
    bool32 is_collide_ceil;
    f32 sp30;

    sp3C.x = translate->x;
    sp3C.y = translate->y + object_coll->top;

    if (func_ovl2_800F3E04(coll_data->ceil_line_id, &sp3C, &sp30, &coll_data->ceil_flags, &coll_data->ceil_angle) != FALSE)
    {
        translate->y += sp30;
        coll_data->coll_type |= MPCOLL_MASK_CEIL;

        return;
    }
    is_collide_ceil = FALSE;

    func_ovl2_800F4468(coll_data->ceil_line_id, &sp3C);

    if (translate->x <= sp3C.x)
    {
        temp_v0 = func_ovl2_800FABA4(coll_data->ceil_line_id);

        if ((temp_v0 != -1) && (func_ovl2_800FA8A4(temp_v0) == 2))
        {
            is_collide_ceil = TRUE;
        }
    }
    else
    {
        func_ovl2_800F4448(coll_data->ceil_line_id, &sp3C);

        temp_v0 = func_ovl2_800FAAE4(coll_data->ceil_line_id);

        if ((temp_v0 != -1) && (func_ovl2_800FA8A4(temp_v0) == 3))
        {
            is_collide_ceil = TRUE;
        }
    }
    translate->y = sp3C.y - object_coll->top;

    if (is_collide_ceil != FALSE)
    {
        translate->x = sp3C.x;

        func_ovl2_800F3E04(coll_data->ceil_line_id, &sp3C, NULL, &coll_data->ceil_flags, &coll_data->ceil_angle);

        coll_data->coll_type |= MPCOLL_MASK_CEIL;
    }
}

bool32 func_ovl2_800DD2C8(mpCollData *coll_data, bool32(*proc_map)(GObj*), GObj *gobj)
{
    mpObjectColl *p_object_coll = coll_data->p_object_coll;
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f *pcurr = &coll_data->pos_curr;
    Vec3f sp4C;
    Vec3f sp40;
    s32 line_id;
    f32 sp38;
    s32 var_v0;

    coll_data->coll_type &= ~(MPCOLL_MASK_GROUND);

    sp4C.x = pcurr->x;
    sp4C.y = pcurr->y + p_object_coll->bottom;

    sp40.x = translate->x;
    sp40.y = translate->y + object_coll->bottom;

                                                                        var_v0 = 
                                        
                                                        (coll_data->wall_flag != D_ovl2_80131398)

                                                                            ?

    func_ovl2_800F521C(&sp4C, &sp40, &coll_data->ground_to_air_pos_last, &coll_data->ground_line_id, &coll_data->ground_flags, &coll_data->ground_angle)

                                                                            :

    func_ovl2_800F4BD8(&sp4C, &sp40, &coll_data->ground_to_air_pos_last, &coll_data->ground_line_id, &coll_data->ground_flags, &coll_data->ground_angle);

    if ((var_v0 != 0) && (!(coll_data->ground_flags & MPCOLL_MASK_NONSOLID) || (coll_data->ground_line_id != coll_data->ignore_line_id)) && ((proc_map == NULL) || (proc_map(gobj) != FALSE)))
    {
        coll_data->coll_mask |= MPCOLL_MASK_GROUND;

        return TRUE;
    }
    if (coll_data->unk_0x58 & MPCOLL_MASK_RWALL)
    {
        line_id = func_ovl2_800FAD24(coll_data->rwall_line_id);

        if (line_id != -1)
        {
            if ((func_ovl2_800FA8A4(line_id) == 0) && (mpCollision_GetUUCommonUp(line_id, &sp40, &sp38, &coll_data->ground_flags, &coll_data->ground_angle) != 0) && (sp38 > 0.0F))
            {
                coll_data->ground_line_id = line_id;

                if (!(coll_data->ground_flags & MPCOLL_MASK_NONSOLID) || (coll_data->ground_line_id != coll_data->ignore_line_id))
                {
                    if ((proc_map == NULL) || (proc_map(gobj) != FALSE))
                    {
                        coll_data->coll_mask |= MPCOLL_MASK_GROUND;

                        return TRUE;
                    }
                }
            }
        }
    }
    else if (coll_data->unk_0x58 & MPCOLL_MASK_LWALL)
    {
        line_id = func_ovl2_800FAEA4(coll_data->lwall_line_id);

        if (line_id != -1)
        {
            if ((func_ovl2_800FA8A4(line_id) == 0) && (mpCollision_GetUUCommonUp(line_id, &sp40, &sp38, &coll_data->ground_flags, &coll_data->ground_angle) != 0) && (sp38 > 0.0F))
            {
                coll_data->ground_line_id = line_id;

                if (!(coll_data->ground_flags & MPCOLL_MASK_NONSOLID) || (coll_data->ground_line_id != coll_data->ignore_line_id))
                {
                    if ((proc_map == NULL) || (proc_map(gobj) != FALSE))
                    {
                        coll_data->coll_mask |= MPCOLL_MASK_GROUND;

                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

bool32 func_ovl2_800DD578(mpCollData *coll_data)
{
    return func_ovl2_800DD2C8(coll_data, NULL, NULL);
}

void func_ovl2_800DD59C(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp34;
    f32 sp30;

    sp34.x = translate->x;
    sp34.y = translate->y + object_coll->bottom;

    if (mpCollision_GetUUCommonUp(coll_data->ground_line_id, &sp34, &sp30, &coll_data->ground_flags, &coll_data->ground_angle) != 0)
    {
        translate->y += sp30;
    }
    else
    {
        mpCollision_GetLREdgeLeft(coll_data->ground_line_id, &sp34);

        if (sp34.x <= translate->x)
        {
            mpCollision_GetLREdgeRight(coll_data->ground_line_id, &sp34);
        }
        translate->y = sp34.y - object_coll->bottom;
        translate->x = sp34.x;

        mpCollision_GetUUCommonUp(coll_data->ground_line_id, &sp34, NULL, &coll_data->ground_flags, &coll_data->ground_angle);
    }
    coll_data->coll_type |= MPCOLL_MASK_GROUND;
    coll_data->ground_dist = 0.0F;
}

void func_ovl2_800DD6A8(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp3C;
    s32 temp_v0;
    s32 is_collide_ground;
    f32 sp30;

    sp3C.x = translate->x;
    sp3C.y = translate->y + object_coll->bottom;

    if (mpCollision_GetUUCommonUp(coll_data->ground_line_id, &sp3C, &sp30, &coll_data->ground_flags, &coll_data->ground_angle) != 0)
    {
        translate->y += sp30;

        coll_data->coll_type |= MPCOLL_MASK_GROUND;
        coll_data->ground_dist = 0.0F;

        return;
    }
    is_collide_ground = FALSE;

    mpCollision_GetLREdgeLeft(coll_data->ground_line_id, &sp3C);

    if (translate->x <= sp3C.x)
    {
        temp_v0 = func_ovl2_800FAA24(coll_data->ground_line_id);

        if ((temp_v0 != -1) && (func_ovl2_800FA8A4(temp_v0) == 2))
        {
            is_collide_ground = TRUE;
        }
    }
    else
    {
        mpCollision_GetLREdgeRight(coll_data->ground_line_id, &sp3C);

        temp_v0 = func_ovl2_800FA964(coll_data->ground_line_id);

        if ((temp_v0 != -1) && (func_ovl2_800FA8A4(temp_v0) == 3))
        {
            is_collide_ground = TRUE;
        }
    }
    translate->y = sp3C.y - object_coll->bottom;

    if (is_collide_ground != 0)
    {
        translate->x = sp3C.x;

        mpCollision_GetUUCommonUp(coll_data->ground_line_id, &sp3C, NULL, &coll_data->ground_flags, &coll_data->ground_angle);

        coll_data->coll_type |= MPCOLL_MASK_GROUND;
        coll_data->ground_dist = 0.0F;
    }
}

bool32 func_ovl2_800DD820(GObj *fighter_gobj, s32 ground_line_id)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    mpObjectColl *object_coll = &fp->coll_data.object_coll;
    Vec3f *translate = fp->coll_data.p_translate;
    Vec3f sp58;
    Vec3f sp4C;
    Vec3f sp40;
    u32 flags;
    f32 sp38;

    if (func_ovl2_800FC67C(ground_line_id) == FALSE)
    {
        return FALSE;
    }
    else
    {
        mpCollision_GetLREdgeLeft(ground_line_id, &sp58);

        if (translate->x <= sp58.x)
        {
            if ((fp->lr == LEFT) && (fp->input.pl.stick_range.x >= -0x3B))
            {
                sp58.x += 40.0F;

                mpCollision_GetUUCommonUp(ground_line_id, &sp58, &sp38, &flags, &sp40);

                sp58.y += sp38;
                sp4C.x = object_coll->width + sp58.x;
                sp4C.y = (object_coll->center + sp58.y) - object_coll->bottom;

                if (func_ovl2_800F7F00(&sp58, &sp4C, NULL, NULL, NULL, NULL) == FALSE)
                {
                    fp->lr = LEFT;

                    goto setground;
                }
            }
        }
        else if ((fp->lr == RIGHT) && (fp->input.pl.stick_range.x <= 0x3B))
        {
            mpCollision_GetLREdgeRight(ground_line_id, &sp58);

            sp58.x -= 40.0F;

            mpCollision_GetUUCommonUp(ground_line_id, &sp58, &sp38, &flags, &sp40);

            sp58.y += sp38;
            sp4C.x = sp58.x - object_coll->width;
            sp4C.y = (object_coll->center + sp58.y) - object_coll->bottom;

            if (func_ovl2_800F6B58(&sp58, &sp4C, NULL, NULL, NULL, NULL) == FALSE)
            {
                fp->lr = RIGHT;

                goto setground;
            }
        }
    }
    return FALSE;

setground: // ???
    *translate = sp58; // This is what causes the infamous Dream Land teleport

    fp->coll_data.ground_line_id = ground_line_id;
    fp->coll_data.ground_flags = flags;
    fp->coll_data.ground_angle = sp40;
    fp->coll_data.ground_dist = 0.0F;

    fp->coll_data.coll_type |= 0x8000;

    return TRUE;
}

bool32 func_ovl2_800DDA6C(GObj *fighter_gobj, s32 ground_line_id)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    mpObjectColl *object_coll = &fp->coll_data.object_coll;
    Vec3f *translate = fp->coll_data.p_translate;
    Vec3f sp58;
    Vec3f sp4C;
    Vec3f sp40;
    Vec3f angle;
    u32 flags;
    f32 sp2C;

    if (func_ovl2_800FC67C(ground_line_id) == FALSE)
    {
        return FALSE;
    }
    else
    {
        mpCollision_GetLREdgeLeft(ground_line_id, &sp58);

        if (translate->x <= sp58.x)
        {
            if (mpCollision_GetUUCommonUp(ground_line_id, &sp58, &sp2C, &flags, &angle));

            sp4C.x = sp58.x + 1.0F;
            sp4C.y = sp58.y + 1.0F;

            sp40.x = object_coll->width + sp58.x;
            sp40.y = (object_coll->center + sp58.y) - object_coll->bottom;

            if (func_ovl2_800F7F00(&sp4C, &sp40, NULL, NULL, NULL, NULL) == 0)
            {
                if (TRUE) goto setground;
            }
        }
        else
        {
            mpCollision_GetLREdgeRight(ground_line_id, &sp58);

            if (mpCollision_GetUUCommonUp(ground_line_id, &sp58, &sp2C, &flags, &angle));

            sp4C.x = sp58.x - 1.0F;
            sp4C.y = sp58.y + 1.0F;

            sp40.x = sp58.x - object_coll->width;
            sp40.y = (object_coll->center + sp58.y) - object_coll->bottom;

            if (func_ovl2_800F6B58(&sp4C, &sp40, NULL, NULL, NULL, NULL) == 0)
            {
                if (TRUE) goto setground;
            }
        }
    }
    return FALSE;

setground: // Absolutely ridiculous match
    *translate = sp58;

    fp->coll_data.ground_line_id = ground_line_id;
    fp->coll_data.ground_flags = flags;
    fp->coll_data.ground_angle = angle;
    fp->coll_data.ground_dist = 0.0F;

    return TRUE;
}

bool32 func_ovl2_800DDC50(mpCollData *coll_data, GObj *fighter_gobj, s32 arg2)
{
    s32 ground_line_id = coll_data->ground_line_id;
    bool32 sp20 = FALSE;

    if (func_ovl2_800DA294(coll_data) != FALSE)
    {
        func_ovl2_800DA658(coll_data);

        coll_data->unk_0x64 = TRUE;
    }
    if (func_ovl2_800DAAA8(coll_data) != FALSE)
    {
        func_ovl2_800DAE6C(coll_data);

        coll_data->unk_0x64 = TRUE;
    }
    if (func_ovl2_800DB2BC(coll_data) != FALSE)
    {
        if (coll_data->coll_type & MPCOLL_MASK_GROUND)
        {
            func_ovl2_800D9F84(coll_data);

            sp20 = TRUE;
        }
    }
    else if (arg2 & 1)
    {
        func_ovl2_800DD820(fighter_gobj, ground_line_id);

        coll_data->unk_0x64 = TRUE;
    }
    else if (arg2 & 2)
    {
        if (func_ovl2_800DDA6C(fighter_gobj, ground_line_id) != FALSE)
        {
            sp20 = TRUE;
        }
        else coll_data->unk_0x64 = TRUE;

    }
    else coll_data->unk_0x64 = TRUE;

    if (func_ovl2_800DB474(coll_data, ground_line_id) != FALSE)
    {
        func_ovl2_800DD59C(coll_data);

        if (coll_data->coll_type & MPCOLL_MASK_GROUND)
        {
            func_ovl2_800D9F84(coll_data);

            sp20 = TRUE;
        }
        coll_data->coll_type &= ~(0x8000);
        coll_data->unk_0x64 = FALSE;
    }
    return sp20;
}

bool32 func_ovl2_800DDDA8(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return func_ovl2_800DA034(&fp->coll_data, func_ovl2_800DDC50, fighter_gobj, 0);
}

bool32 func_ovl2_800DDDDC(GObj *fighter_gobj, void (*proc_map)(GObj*))
{
    if (func_ovl2_800DDDA8(fighter_gobj) == FALSE)
    {
        proc_map(fighter_gobj);

        return FALSE;
    }
    else return TRUE;
}

void func_ovl2_800DDE1C(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    func_ovl2_800DA034(&fp->coll_data, func_ovl2_800DDC50, fighter_gobj, 1);
}

void func_ovl2_800DDE50(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    func_ovl2_800DA034(&fp->coll_data, func_ovl2_800DDC50, fighter_gobj, 2);
}

bool32 func_ovl2_800DDE84(GObj *fighter_gobj, void (*proc_map)(GObj*))
{
    if (func_ovl2_800DDE50(fighter_gobj) == FALSE)
    {
        proc_map(fighter_gobj);

        return FALSE;
    }
    else return TRUE;
}

void jtgt_ovl2_800DDEC4(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftCommon_Fall_SetStatus);
}

void jtgt_ovl2_800DDEE8(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DDE1C(fighter_gobj) == FALSE)
    {
        if (fp->coll_data.coll_type & MPCOLL_MASK_GROUND0)
        {
            ftCommon_Ottotto_SetStatus(fighter_gobj);
        }
        else ftCommon_Fall_SetStatus(fighter_gobj);
    }
}

void func_ovl2_800DDF44(GObj *fighter_gobj)
{
    if (func_ovl2_800DDE50(fighter_gobj) == FALSE)
    {
        ftCommon_Fall_SetStatus(fighter_gobj);
    }
}

bool32 func_ovl2_800DDF74(GObj *fighter_gobj, ftStruct *fp, ftAttributes *attributes, DObj *target_joint, Vec3f *vec)
{
    Vec3f sp64;
    Vec3f vec_translate;
    Vec3f sp4C;
    f32 sp48;
    DObj *joint;
    f32 tangent;
    u32 sp3C;
    f32 ternary;
    f32 translate_y;

    if (mpCollision_GetUUCommonUp(fp->coll_data.ground_line_id, vec, &sp48, &sp3C, &sp64) != FALSE)
    {
        translate_y = (vec->y + sp48) - DObjGetStruct(fighter_gobj)->translate.y;
    }
    else
    {
        mpCollision_GetLREdgeLeft(fp->coll_data.ground_line_id, &vec_translate);

        if (vec_translate.x < vec->x)
        {
            mpCollision_GetLREdgeRight(fp->coll_data.ground_line_id, &vec_translate);
        }
        translate_y = vec_translate.y - DObjGetStruct(fighter_gobj)->translate.y;
    }

    ternary = ABSF(translate_y);

    if (ternary < 0.0001F)
    {
        return FALSE;
    }

    vec->y += translate_y;

    joint = DObjGetStruct(fighter_gobj);

    if (vec->y < joint->translate.y)
    {
        ternary = ((joint->translate.x < vec->x) ? -(joint->translate.x - vec->x) : (joint->translate.x - vec->x));

        tangent = DObjGetStruct(fighter_gobj)->translate.y - ternary * tanf(attributes->unk_0x320);

        if (vec->y < tangent)
        {
            vec->y = tangent;
        }
    }

    sp4C.x = sp4C.y = sp4C.z = 0;

    func_ovl2_800EDF24(target_joint, &sp4C);

    if (sp4C.y - attributes->unk_0x31C < vec->y)
    {
        vec->y = sp4C.y - attributes->unk_0x31C;
    }
    return TRUE;
}

void func_ovl2_800DE150(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *common_attrs = fp->attributes;
    DObj *joint;
    Vec3f sp30;
    f32 sp2C;

    if (fp->ground_or_air == GA_Ground)
    {
        if ((fp->coll_data.ground_line_id != -1) && (fp->coll_data.ground_line_id != -2) && (fp->hitlag_timer <= 0))
        {
            if (fp->slope_contour & 2)
            {
                joint = fp->joint[common_attrs->joint_index1];

                func_ovl2_800EBC0C(fp, &sp30, &sp2C, common_attrs->joint_float1, joint);

                if (func_ovl2_800DDF74(fighter_gobj, fp, common_attrs, joint, &sp30) != FALSE)
                {
                    func_ovl2_800EE018(fp->joint[common_attrs->joint_index1], &sp30);
                    func_ovl2_800EBD08(fp->joint[common_attrs->joint_index1], common_attrs->joint_float1, &sp30, sp2C);
                }
            }
            if (fp->slope_contour & 1)
            {
                joint = fp->joint[common_attrs->joint_index2];

                func_ovl2_800EBC0C(fp, &sp30, &sp2C, common_attrs->joint_float2, joint);

                if (func_ovl2_800DDF74(fighter_gobj, fp, common_attrs, joint, &sp30) != FALSE)
                {
                    func_ovl2_800EE018(fp->joint[common_attrs->joint_index2], &sp30);
                    func_ovl2_800EBD08(fp->joint[common_attrs->joint_index2], common_attrs->joint_float2, &sp30, sp2C);
                }
            }
            if (fp->slope_contour & 4)
            {
                DObjGetStruct(fighter_gobj)->rotate.x = (atan2f(fp->coll_data.ground_angle.x, fp->coll_data.ground_angle.y) * fp->lr);
            }
        }
    }
    else return;
}

void func_ovl2_800DE324(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    func_ovl2_800D9FCC(&fp->coll_data);
}

void func_ovl2_800DE348(GObj *fighter_gobj)
{
    func_ovl2_800DE324(fighter_gobj);
}

void func_ovl2_800DE368(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->publicity_knockback != 0.0F)
    {
        if ((fp->publicity_knockback >= 100.0F) && ((fp->joint[ftParts_TopN_Joint]->translate.x < (gMapEdgeBounds.d2.left + 450.0F)) || ((gMapEdgeBounds.d2.right - 450.0F) < fp->joint[ftParts_TopN_Joint]->translate.x)))
        {
            func_ovl3_80164F70(fighter_gobj, fp->publicity_knockback);
        }
        fp->publicity_knockback = 0.0F;
    }
    switch (fp->ft_kind)
    {
    case Ft_Kind_Mario:
    case Ft_Kind_MetalMario:
    case Ft_Kind_PolyMario:
        fp->fighter_vars.mario.is_expend_tornado = FALSE;
        break;

    case Ft_Kind_Samus:
    case Ft_Kind_PolySamus:
        fp->fighter_vars.samus.charge_recoil = 0;
        return;

    case Ft_Kind_Luigi:
    case Ft_Kind_PolyLuigi:
        fp->fighter_vars.mario.is_expend_tornado = FALSE;
        break;

    case Ft_Kind_Captain:
    case Ft_Kind_PolyCaptain:
        fp->fighter_vars.captain.falcon_punch_unk = FALSE;
        break;

    case Ft_Kind_Purin:
    case Ft_Kind_PolyPurin:
        fp->fighter_vars.purin.unk_0x0 = FALSE;
        break;
    }
}

static bool32(*D_ovl2_80130E20)(GObj*); // Static function pointer???

bool32 func_ovl2_800DE45C(mpCollData *coll_data, GObj *fighter_gobj, u32 arg2)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *cliffcatch_gobj;
    ftStruct *cliffcatch_fp;
    s32 unused;
    s32 sp24 = FALSE;
    s32 var_v0;

    if (func_ovl2_800DB838(coll_data) != FALSE)
    {
        func_ovl2_800DBF58(coll_data);
    }
    if (func_ovl2_800DC3C8(coll_data) != FALSE)
    {
        func_ovl2_800DCAE8(coll_data);
    }
    if (func_ovl2_800DCF58(coll_data) != FALSE)
    {
        func_ovl2_800DD160(coll_data);

        if (coll_data->coll_type & MPCOLL_MASK_CEIL)
        {
            func_ovl2_800D99B8(coll_data);
        }
        if ((arg2 & 8) && (this_fp->phys_info.vel_air.y >= 30.0F))
        {
            coll_data->coll_mask |= MPCOLL_MASK_CEILHEAVY;

            sp24 = TRUE;

            coll_data->unk_0x64 = TRUE;
        }
    }
    var_v0 = ((arg2 & 4) ? func_ovl2_800DD2C8(coll_data, D_ovl2_80130E20, fighter_gobj) : func_ovl2_800DD578(coll_data));

    if (var_v0 != FALSE)
    {
        if (arg2 & 2)
        {
            func_ovl2_800DD6A8(coll_data);

            if (coll_data->coll_type & MPCOLL_MASK_GROUND)
            {
                func_ovl2_800D9F84(coll_data);
            }
            else func_ovl2_800D9FCC(coll_data);
        }
        else
        {
            func_ovl2_800DD59C(coll_data);
            func_ovl2_800DE368(fighter_gobj);

            if (coll_data->coll_type & MPCOLL_MASK_GROUND)
            {
                func_ovl2_800D9F84(coll_data);

                coll_data->unk_0x64 = TRUE;

                return TRUE;
            }
        }
    }
    else func_ovl2_800D9FCC(coll_data);

    if ((arg2 & 1) && (this_fp->cliffcatch_wait == 0) && ((func_ovl2_800DB590(coll_data) != FALSE) || (func_ovl2_800DB6F0(coll_data) != FALSE)))
    {
        cliffcatch_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];

        while (cliffcatch_gobj != NULL)
        {
            if (cliffcatch_gobj != fighter_gobj)
            {
                cliffcatch_fp = ftGetStruct(cliffcatch_gobj);

                if ((cliffcatch_fp->x190_flag_b7) && (this_fp->coll_data.cliff_id == cliffcatch_fp->coll_data.cliff_id) && (this_fp->lr == cliffcatch_fp->lr))
                {
                    return sp24;
                }
                else goto l_continue; // Bruh
            }
        l_continue:
            cliffcatch_gobj = cliffcatch_gobj->group_gobj_next;
        }
        func_ovl2_800DE368(fighter_gobj);

        coll_data->unk_0x64 = TRUE;

        return TRUE;
    }
    else return sp24;
}

bool32 func_ovl2_800DE6B0(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return func_ovl2_800DA034(&fp->coll_data, func_ovl2_800DE45C, fighter_gobj, 0);
}

bool32 func_ovl2_800DE6E4(GObj *fighter_gobj, void(*proc_map)(GObj*))
{
    if (func_ovl2_800DE6B0(fighter_gobj) != FALSE)
    {
        proc_map(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}

bool32 func_ovl2_800DE724(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return func_ovl2_800DA034(&fp->coll_data, func_ovl2_800DE45C, fighter_gobj, 2);
}

bool32 func_ovl2_800DE758(GObj *fighter_gobj, bool32(*proc_map)(GObj*))
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    D_ovl2_80130E20 = proc_map;

    return func_ovl2_800DA034(&fp->coll_data, func_ovl2_800DE45C, fighter_gobj, 4);
}

bool32 func_ovl2_800DE798(GObj *fighter_gobj, bool32(*proc_map)(GObj*))
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    D_ovl2_80130E20 = proc_map;

    return func_ovl2_800DA034(&fp->coll_data, func_ovl2_800DE45C, fighter_gobj, 5);
}

bool32 func_ovl2_800DE7D8(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return func_ovl2_800DA034(&fp->coll_data, func_ovl2_800DE45C, fighter_gobj, 1);
}

// Check if fighter becomes grounded, allow CliffCatch interrupt
bool32 ftMap_CheckGroundCliff(GObj *fighter_gobj, void (*proc_map)(GObj*))
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DE7D8(fighter_gobj) != FALSE)
    {
        if (fp->coll_data.coll_type & MPCOLL_MASK_CLIFF_ALL)
        {
            ftCommon_CliffCatch_SetStatus(fighter_gobj);

            return TRUE;
        }
        else proc_map(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}

bool32 func_ovl2_800DE87C(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return func_ovl2_800DA034(&fp->coll_data, func_ovl2_800DE45C, fighter_gobj, 9);
}

bool32 func_ovl2_800DE8B0(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return func_ovl2_800DA034(&fp->coll_data, func_ovl2_800DE45C, fighter_gobj, 8);
}

void func_ovl2_800DE8E4(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->phys_info.vel_air.y > FTCOMMON_ATTACKAIR_SKIP_LANDING_VEL_Y_MAX)
    {
        ftCommon_Wait_SetStatus(fighter_gobj);
    }
    else ftCommon_Landing_SetStatus(fighter_gobj);
}

bool32 jtgt_ovl2_800DE934(GObj *fighter_gobj)
{
    return func_ovl2_800DE6E4(fighter_gobj, func_ovl2_800DE8E4);
}

bool32 func_ovl2_800DE958(GObj *fighter_gobj)
{
    return func_ovl2_800DE724(fighter_gobj);
}

bool32 func_ovl2_800DE978(GObj *fighter_gobj)
{
    return ftMap_CheckGroundCliff(fighter_gobj, func_ovl2_800DE8E4);
}

void jtgt_ovl2_800DE99C(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DE87C(fighter_gobj) != FALSE)
    {
        if (fp->coll_data.coll_type & MPCOLL_MASK_CLIFF_ALL)
        {
            ftCommon_CliffCatch_SetStatus(fighter_gobj);
        }
        else if (fp->coll_data.coll_type & MPCOLL_MASK_GROUND)
        {
            func_ovl2_800DE8E4(fighter_gobj);
        }
        else if (fp->coll_data.coll_mask & MPCOLL_MASK_CEILHEAVY) // Enter ceiling bonk if true?
        {
            ftCommon_StopCeil_SetStatus(fighter_gobj);
        }
    }
}

bool32 func_ovl2_800DEA20(mpCollData *coll_data, GObj *fighter_gobj, bool32 arg2)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    bool32 is_collide = FALSE;

    if (func_ovl2_800DB838(coll_data) != FALSE)
    {
        func_ovl2_800DBF58(coll_data);

        if (!(fp->status_vars.common.damage.coll_mask_prev & MPCOLL_MASK_RWALL) && (func_ovl0_800C7A84(&coll_data->pos_prev) > 30.0F) && (vec3f_angle_diff(&coll_data->pos_prev, &coll_data->rwall_angle) > 1.9198622F))
        {
            fp->status_vars.common.damage.coll_mask_curr |= MPCOLL_MASK_RWALL;

            is_collide = TRUE;

            coll_data->unk_0x64 = TRUE;
        }
        else if (!(coll_data->coll_mask_prev & MPCOLL_MASK_RWALL))
        {
            fp->status_vars.common.damage.coll_mask_unk |= MPCOLL_MASK_RWALL;
        }
    }
    if (func_ovl2_800DC3C8(coll_data) != FALSE)
    {
        func_ovl2_800DCAE8(coll_data);

        if (!(fp->status_vars.common.damage.coll_mask_prev & MPCOLL_MASK_LWALL) && (func_ovl0_800C7A84(&coll_data->pos_prev) > 30.0F) && (vec3f_angle_diff(&coll_data->pos_prev, &coll_data->lwall_angle) > 1.9198622F))
        {
            fp->status_vars.common.damage.coll_mask_curr |= MPCOLL_MASK_LWALL;

            is_collide = TRUE;

            coll_data->unk_0x64 = TRUE;
        }
        else if (!(coll_data->coll_mask_prev & MPCOLL_MASK_LWALL))
        {
            fp->status_vars.common.damage.coll_mask_unk |= MPCOLL_MASK_LWALL;
        }
    }
    if (func_ovl2_800DCF58(coll_data) != FALSE)
    {
        func_ovl2_800DD160(coll_data);

        if (coll_data->coll_type & MPCOLL_MASK_CEIL)
        {
            func_ovl2_800D99B8(coll_data);
        }
        if (!(fp->status_vars.common.damage.coll_mask_prev & MPCOLL_MASK_CEIL) && (func_ovl0_800C7A84(&coll_data->pos_prev) > 30.0F) && (vec3f_angle_diff(&coll_data->pos_prev, &coll_data->ceil_angle) > 1.9198622F))
        {
            fp->status_vars.common.damage.coll_mask_curr |= MPCOLL_MASK_CEIL;

            is_collide = TRUE;

            coll_data->unk_0x64 = TRUE;
        }
        else if (!(coll_data->coll_mask_prev & MPCOLL_MASK_CEIL))
        {
            fp->status_vars.common.damage.coll_mask_unk |= MPCOLL_MASK_CEIL;
        }
    }
    if (func_ovl2_800DD578(coll_data) != FALSE)
    {
        if (fp->hitlag_timer > 0)
        {
            func_ovl2_800DD6A8(coll_data);

            if (coll_data->coll_type & MPCOLL_MASK_GROUND)
            {
                func_ovl2_800D9F84(coll_data);
            }
            else func_ovl2_800D9FCC(coll_data);

        }
        else
        {
            if (vec3f_angle_diff(&coll_data->pos_prev, &coll_data->ground_angle) > 1.9198622F)
            {
                func_ovl2_800DD59C(coll_data);
                func_ovl2_800DE368(fighter_gobj);

                if (coll_data->coll_type & MPCOLL_MASK_GROUND)
                {
                    func_ovl2_800D9F84(coll_data);

                    fp->status_vars.common.damage.coll_mask_curr |= MPCOLL_MASK_GROUND;

                    is_collide = TRUE;

                    coll_data->unk_0x64 = TRUE;
                }
            }
            else
            {
                func_ovl2_800DD6A8(coll_data);

                if (coll_data->coll_type & MPCOLL_MASK_GROUND)
                {
                    func_ovl2_800D9F84(coll_data);

                    if (!(coll_data->coll_mask_prev & MPCOLL_MASK_GROUND))
                    {
                        fp->status_vars.common.damage.coll_mask_unk |= MPCOLL_MASK_GROUND;

                        fp->status_vars.common.damage.wall_collide_angle = coll_data->ground_angle;
                    }
                }
                else func_ovl2_800D9FCC(coll_data);
            }
        }
    }
    else func_ovl2_800D9FCC(coll_data);

    return is_collide;
}

void func_ovl2_800DEDAC(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.common.damage.coll_mask_prev = fp->status_vars.common.damage.coll_mask_curr;
    fp->status_vars.common.damage.coll_mask_curr = 0;
    fp->status_vars.common.damage.coll_mask_unk = 0;

    func_ovl2_800DA034(&fp->coll_data, func_ovl2_800DEA20, fighter_gobj, 0);
}

void func_ovl2_800DEDF0(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        if (func_ovl2_800DE6B0(fighter_gobj) != FALSE)
        {
            ftMap_SetGround(fp);
        }
    }
    else if (func_ovl2_800DDDA8(fighter_gobj) == FALSE)
    {
        ftMap_SetAir(fp);
    }
}

void func_ovl2_800DEE54(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        ftCommon_Fall_SetStatus(fighter_gobj);
    }
    else ftCommon_Wait_SetStatus(fighter_gobj);
}

void ftMap_SetGround(ftStruct *fp)
{
    fp->phys_info.vel_ground.x = fp->phys_info.vel_air.x * fp->lr;

    fp->ground_or_air = GA_Ground;

    fp->jumps_used = 0;

    fp->stat_flags.is_ground_or_air = GA_Ground; // Ground/Air bool?
}

void ftMap_SetAir(ftStruct *fp)
{
    fp->ground_or_air = GA_Air;

    fp->phys_info.vel_air.z = fp->joint[ftParts_TopN_Joint]->translate.z = 0.0F;

    fp->jumps_used = 1;
}

void func_ovl2_800DEEF4(mpCollData *coll_data, GObj *fighter_gobj, s32 arg2)
{
    if (func_ovl2_800DB838(coll_data) != FALSE)
    {
        func_ovl2_800DBF58(coll_data);
    }
    if (func_ovl2_800DC3C8(coll_data) != FALSE)
    {
        func_ovl2_800DCAE8(coll_data);
    }
    if (func_ovl2_800DCF58(coll_data) != FALSE)
    {
        func_ovl2_800DD160(coll_data);

        if (coll_data->coll_type & MPCOLL_MASK_CEIL)
        {
            func_ovl2_800D99B8(coll_data);
        }
    }
    if (func_ovl2_800DD578(coll_data) != FALSE)
    {
        func_ovl2_800DD6A8(coll_data);

        if (coll_data->coll_type & MPCOLL_MASK_GROUND)
        {
            func_ovl2_800D9F84(coll_data);
        }
    }
    else func_ovl2_800D9FCC(coll_data);
}

void func_ovl2_800DEFBC(mpCollData *this_coll_data, Vec3f *pos, mpCollData *other_coll_data)
{
    this_coll_data->pos_curr = *pos;

    this_coll_data->p_object_coll = &other_coll_data->object_coll;
    this_coll_data->coll_mask = 0;
    this_coll_data->unk_0x58 = 0;
    this_coll_data->coll_type = 0;
    this_coll_data->unk_0x64 = FALSE;
    this_coll_data->wall_flag = other_coll_data->wall_flag;
}

void func_ovl2_800DEFF8(mpCollData *coll_data)
{
    coll_data->p_object_coll = &coll_data->object_coll;

    coll_data->wall_flag = D_ovl2_80131398;
    coll_data->coll_mask = 0;
}

void func_ovl2_800DF014(GObj *fighter_gobj, Vec3f *pos, mpCollData *coll_data)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    func_ovl2_800DEFBC(&fp->coll_data, pos, coll_data);
    func_ovl2_800DEEF4(&fp->coll_data, fighter_gobj, 0);
    func_ovl2_800DEFF8(&fp->coll_data);
}

void func_ovl2_800DF058(GObj *item_gobj, Vec3f *pos, mpCollData *coll_data)
{
    itStruct *ap = itGetStruct(item_gobj);

    func_ovl2_800DEFBC(&ap->coll_data, pos, coll_data);
    func_ovl2_800DEEF4(&ap->coll_data, item_gobj, 0);
    func_ovl2_800DEFF8(&ap->coll_data);
}

void func_ovl2_800DF09C(GObj *weapon_gobj, Vec3f *pos, mpCollData *coll_data)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);

    func_ovl2_800DEFBC(&ip->coll_data, pos, coll_data);
    func_ovl2_800DEEF4(&ip->coll_data, weapon_gobj, 0);
    func_ovl2_800DEFF8(&ip->coll_data);
}