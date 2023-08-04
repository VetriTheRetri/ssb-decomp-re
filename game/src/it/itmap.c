#include <it/item.h>
#include <gm/gmmatch.h>

// 0x80173480
bool32 itMap_CheckCollideGround(mpCollData *coll_data, s32 arg1, s32 arg2)
{
    s32 ground_line_id = coll_data->ground_line_id;
    bool32 is_collide_ground = FALSE;

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
            is_collide_ground = TRUE;
        }
    }
    else
    {
        coll_data->unk_0x64 = TRUE;
    }
    if (func_ovl2_800DB474(coll_data, ground_line_id) != FALSE)
    {
        func_ovl2_800DD59C(coll_data);

        if (coll_data->coll_type & MPCOLL_MASK_GROUND)
        {
            func_ovl2_800D9F84(coll_data);
            is_collide_ground = TRUE;
        }
        coll_data->unk_0x64 = FALSE;
    }
    return is_collide_ground;
}

bool32 func_ovl3_8017356C(GObj *item_gobj)
{
    return func_ovl2_800DA034(&itGetStruct(item_gobj)->coll_data, itMap_CheckCollideGround, item_gobj, FALSE);
}

bool32 func_ovl3_801735A0(GObj *item_gobj, void (*proc_map)(GObj*))
{
    if (func_ovl3_8017356C(item_gobj) == FALSE)
    {
        proc_map(item_gobj);

        return FALSE;
    }
    else return TRUE;
}

bool32 func_ovl3_801735E0(mpCollData *coll_data, GObj *item_gobj, s32 arg2)
{
    itStruct *ap = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (func_ovl2_800DB838(coll_data) != FALSE)
    {
        coll_data->unk_0x64 = TRUE;
    }
    if (func_ovl2_800DC3C8(coll_data) != FALSE)
    {
        coll_data->unk_0x64 = TRUE;
    }
    if (func_ovl2_800DCF58(coll_data) != FALSE)
    {
        coll_data->unk_0x64 = TRUE;
    }
    if (func_ovl2_800DD578(coll_data) != FALSE)
    {
        coll_data->unk_0x64 = TRUE;

        func_800269C0(gmSound_SFX_ItemMapCollide);

        ap->rotate_step = 0.0F;
        joint->rotate.z = 0.0F;
    }
    return coll_data->unk_0x64;
}

bool32 func_ovl3_80173680(GObj *item_gobj)
{
    return func_ovl2_800DA034(&itGetStruct(item_gobj)->coll_data, func_ovl3_801735E0, item_gobj, FALSE);
}

bool32 func_ovl3_801736B4(mpCollData *coll_data, GObj *item_gobj, u32 coll_flags)
{
    itStruct *ap = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

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
        func_ovl2_800DD59C(coll_data);

        if (coll_data->coll_type & MPCOLL_MASK_GROUND)
        {
            func_ovl2_800D9F84(coll_data);
            func_800269C0(0x2EU);

            ap->rotate_step = 0.0F;

            joint->rotate.z = 0.0F;

            coll_data->unk_0x64 = TRUE;
        }
    }
    if (coll_data->coll_mask & coll_flags)
    {
        return TRUE;
    }
    else return FALSE;
}

bool32 func_ovl3_801737B8(GObj *item_gobj, bool32 flag)
{
    return func_ovl2_800DA034(&itGetStruct(item_gobj)->coll_data, func_ovl3_801736B4, item_gobj, flag);
}

bool32 itMap_CheckCollideAllRebound(GObj *item_gobj, u32 check_flags, f32 mod_vel, Vec3f *pos) // Modify velocity based on angle of collision
{
    itStruct *ap = itGetStruct(item_gobj);
    mpCollData *coll_data = &ap->coll_data;
    Vec3f *translate = &DObjGetStruct(item_gobj)->translate;
    Vec3f mod_pos;
    bool32 return_bool = FALSE;
    u16 coll_flags = (ap->coll_data.coll_mask_prev ^ ap->coll_data.coll_mask) & ap->coll_data.coll_mask & MPCOLL_MASK_MAIN_ALL;

    if (coll_flags & check_flags & MPCOLL_MASK_RWALL)
    {
        if (func_ovl0_800C7C0C(&ap->phys_info.vel, &coll_data->rwall_angle) < 0.0F)
        {
            func_ovl0_800C7B08(&ap->phys_info.vel, &coll_data->rwall_angle);

            mod_pos.x = translate->x + coll_data->object_coll.width;
            mod_pos.y = translate->y + coll_data->object_coll.center;

            return_bool = TRUE;

            func_800269C0(gmSound_SFX_ItemMapCollide);
        }
    }

    if (coll_flags & check_flags & MPCOLL_MASK_LWALL)
    {
        if (func_ovl0_800C7C0C(&ap->phys_info.vel, &coll_data->lwall_angle) < 0.0F)
        {
            func_ovl0_800C7B08(&ap->phys_info.vel, &coll_data->lwall_angle);

            mod_pos.x = translate->x - coll_data->object_coll.width;
            mod_pos.y = translate->y + coll_data->object_coll.center;

            return_bool = TRUE;

            func_800269C0(gmSound_SFX_ItemMapCollide);
        }
    }

    if (coll_flags & check_flags & MPCOLL_MASK_CEIL)
    {
        if (func_ovl0_800C7C0C(&ap->phys_info.vel, &coll_data->ceil_angle) < 0.0F)
        {
            func_ovl0_800C7B08(&ap->phys_info.vel, &coll_data->ceil_angle);

            mod_pos.x = translate->x;
            mod_pos.y = translate->y + coll_data->object_coll.top;

            return_bool = TRUE;
        }
    }

    if (coll_flags & check_flags & MPCOLL_MASK_GROUND)
    {
        if (func_ovl0_800C7C0C(&ap->phys_info.vel, &coll_data->ground_angle) < 0.0F)
        {
            func_ovl0_800C7B08(&ap->phys_info.vel, &coll_data->ground_angle);

            mod_pos.x = translate->x;
            mod_pos.y = translate->y + coll_data->object_coll.bottom;

            return_bool = TRUE;

            func_800269C0(gmSound_SFX_ItemMapCollide);
        }
    }
    if (return_bool != FALSE)
    {
        func_ovl0_800C7AE0(&ap->phys_info.vel, mod_vel);

        if (pos != NULL)
        {
            pos->x = mod_pos.x;
            pos->y = mod_pos.y;
            pos->z = translate->z;
        }
    }
    return return_bool;
}

void func_ovl3_80173A48(Vec3f *vel, Vec3f *ground_angle, f32 ground_rebound)
{
    f32 temp_f0;
    f32 scale;
    f32 rebound;

    temp_f0 = func_ovl0_800C7A84(vel);

    if (temp_f0 != 0.0F)
    {
        scale = 1.0F / temp_f0;
        rebound = temp_f0 * ground_rebound * 0.5F;

        func_ovl0_800C7B08(vel, ground_angle);

        vel->x *= scale;
        vel->y *= scale;
        vel->x += ground_angle->x;
        vel->y += ground_angle->y;
        vel->x *= rebound;
        vel->y *= rebound;
    }
}

// 0x80173B24
bool32 itMap_CheckMapCollideThrownLanding(GObj *item_gobj, f32 wall_ceil_rebound, f32 ground_rebound, void (*proc_status)(GObj*))
{
    itStruct *ap = itGetStruct(item_gobj);
    s32 unused;
    bool32 is_collide_ground = func_ovl3_801737B8(item_gobj, MPCOLL_MASK_GROUND);

    if (itMap_CheckCollideAllRebound(item_gobj, (MPCOLL_MASK_CEIL | MPCOLL_MASK_LWALL | MPCOLL_MASK_RWALL), wall_ceil_rebound, NULL) != FALSE)
    {
        itMain_VelSetRotateStepLR(item_gobj);
    }
    if (is_collide_ground != FALSE)
    {
        func_ovl3_80173A48(&ap->phys_info.vel, &ap->coll_data.ground_angle, ground_rebound);
        itMain_VelSetRotateStepLR(item_gobj);

        ap->times_landed++;

        if (ap->times_landed == 1)
        {
            if ((gpBattleState->game_type != gmMatch_GameType_HowToPlay) && (ap->times_thrown != 0) && ((ap->times_thrown == 4) || (lbRandom_GetIntRange(4) == 0)))
            {
                return TRUE;
            }
        }
        if ((ap->times_landed == 2) && (proc_status != NULL))
        {
            proc_status(item_gobj);
        }
    }
    return FALSE;
}

// 0x80173C68
bool32 itMap_CheckMapCollideLanding(GObj *item_gobj, f32 wall_ceil_rebound, f32 ground_rebound, void (*proc_map)(GObj*))
{
    itStruct *ap = itGetStruct(item_gobj);
    s32 unused;
    bool32 is_collide_ground = func_ovl3_801737B8(item_gobj, MPCOLL_MASK_GROUND);

    if (itMap_CheckCollideAllRebound(item_gobj, (MPCOLL_MASK_CEIL | MPCOLL_MASK_LWALL | MPCOLL_MASK_RWALL), wall_ceil_rebound, NULL) != FALSE)
    {
        itMain_VelSetRotateStepLR(item_gobj);
    }
    if (is_collide_ground != FALSE)
    {
        func_ovl0_800C7B08(&ap->phys_info.vel, &ap->coll_data.ground_angle);
        func_ovl0_800C7AE0(&ap->phys_info.vel, ground_rebound);
        itMain_VelSetRotateStepLR(item_gobj);

        if (proc_map != NULL)
        {
            proc_map(item_gobj);
        }
        return TRUE;
    }
    else return FALSE;
}

// 0x80173D24
bool32 itMap_CheckMapCollideAny(GObj *item_gobj, f32 wall_ceil_rebound, f32 ground_rebound, void (*proc_map)(GObj*))
{
    itStruct *ap = itGetStruct(item_gobj);
    mpCollData *coll_data = &ap->coll_data;
    bool32 is_collide_any = func_ovl3_801737B8(item_gobj, MPCOLL_MASK_MAIN_ALL);

    if (itMap_CheckCollideAllRebound(item_gobj, (MPCOLL_MASK_CEIL | MPCOLL_MASK_LWALL | MPCOLL_MASK_RWALL), wall_ceil_rebound, NULL) != FALSE)
    {
        itMain_VelSetRotateStepLR(item_gobj);
    }
    if (coll_data->coll_mask & MPCOLL_MASK_GROUND)
    {
        func_ovl0_800C7B08(&ap->phys_info.vel, &coll_data->ground_angle);
        func_ovl0_800C7AE0(&ap->phys_info.vel, ground_rebound);
        itMain_VelSetRotateStepLR(item_gobj);
    }
    if (is_collide_any != FALSE)
    {
        if (proc_map != NULL)
        {
            proc_map(item_gobj);
        }
        return TRUE;
    }
    else return FALSE;
}

bool32 func_ovl3_80173DF4(GObj *item_gobj, f32 wall_ceil_rebound)
{
    bool32 is_collide_ground = func_ovl3_801737B8(item_gobj, MPCOLL_MASK_GROUND);

    if (itMap_CheckCollideAllRebound(item_gobj, (MPCOLL_MASK_CEIL | MPCOLL_MASK_LWALL | MPCOLL_MASK_RWALL), wall_ceil_rebound, NULL) != FALSE)
    {
        itMain_VelSetRotateStepLR(item_gobj);
    }
    if (is_collide_ground != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

bool32 func_ovl3_80173E58(GObj *item_gobj, void (*proc)(GObj*))
{
    if ((func_ovl3_801737B8(item_gobj, MPCOLL_MASK_MAIN_ALL) != FALSE) && (proc != NULL))
    {
        proc(item_gobj);
    }
    return FALSE;
}

bool32 func_ovl3_80173E9C(GObj *item_gobj, void (*proc)(GObj*)) // Unused
{
    if ((func_ovl3_801737B8(item_gobj, MPCOLL_MASK_MAIN_ALL) != FALSE))
    {
        if (proc != NULL)
        {
            proc(item_gobj);
        }
        return TRUE;
    }
    else return FALSE;
}

bool32 func_ovl3_80173EE8(GObj *item_gobj, f32 wall_ceil_rebound, void (*proc)(GObj*))
{
    if ((func_ovl3_801737B8(item_gobj, MPCOLL_MASK_GROUND) != FALSE) && (proc != NULL))
    {
        proc(item_gobj);
    }
    if (itMap_CheckCollideAllRebound(item_gobj, (MPCOLL_MASK_CEIL | MPCOLL_MASK_LWALL | MPCOLL_MASK_RWALL), wall_ceil_rebound, NULL) != FALSE)
    {
        itMain_VelSetRotateStepLR(item_gobj);
    }
    return FALSE;
}

// 0x80173F54
void itMap_SetGround(itStruct *ip)
{
    ip->ground_or_air = GA_Ground;
    ip->phys_info.vel_ground = ip->phys_info.vel_air.x * ip->lr;
}

// 0x80173F78
void itMap_SetAir(itStruct *ip)
{
    ip->ground_or_air = GA_Air;
}