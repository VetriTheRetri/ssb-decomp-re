#include <it/item.h>
#include <gm/battle.h>

// 0x80173480
sb32 itMap_ProcLRWallCheckGround(mpCollData *coll_data, GObj *item_gobj, u32 flags)
{
    s32 ground_line_id = coll_data->ground_line_id;
    sb32 is_collide_ground = FALSE;

    if (mpObjectProc_CheckTestLWallCollision(coll_data) != FALSE)
    {
        mpCollision_RunLWallCollision(coll_data);
        coll_data->is_coll_end = TRUE;
    }
    if (mpObjectProc_CheckTestRWallCollision(coll_data) != FALSE)
    {
        mpObjectProc_RunRWallCollision(coll_data);
        coll_data->is_coll_end = TRUE;
    }
    if (mpObjectProc_CheckTestGroundCollisionNew(coll_data) != FALSE)
    {
        if (coll_data->coll_mask_stat & MPCOLL_KIND_GROUND)
        {
            mpObjectProc_RunGroundEdgeAdjust(coll_data);
            is_collide_ground = TRUE;
        }
    }
    else coll_data->is_coll_end = TRUE;
    
    if (mpObjectProc_CheckTestGroundCollision(coll_data, ground_line_id) != FALSE)
    {
        func_ovl2_800DD59C(coll_data);

        if (coll_data->coll_mask_stat & MPCOLL_KIND_GROUND)
        {
            mpObjectProc_RunGroundEdgeAdjust(coll_data);
            is_collide_ground = TRUE;
        }
        coll_data->is_coll_end = FALSE;
    }
    return is_collide_ground;
}

// 0x8017356C
sb32 itMap_TestLRWallCheckGround(GObj *item_gobj)
{
    return mpObjectProc_UpdateMapProcMain(&itGetStruct(item_gobj)->coll_data, itMap_ProcLRWallCheckGround, item_gobj, 0);
}

// 0x801735A0
sb32 itMap_CheckLRWallProcGround(GObj *item_gobj, void (*proc_map)(GObj*))
{
    if (itMap_TestLRWallCheckGround(item_gobj) == FALSE)
    {
        proc_map(item_gobj);

        return FALSE;
    }
    else return TRUE;
}

// 0x801735E0
sb32 itMap_ProcAllCheckCollEnd(mpCollData *coll_data, GObj *item_gobj, u32 flags)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (mpObjectProc_CheckTestLWallCollisionAdjNew(coll_data) != FALSE)
    {
        coll_data->is_coll_end = TRUE;
    }
    if (mpObjectProc_CheckTestRWallCollisionAdjNew(coll_data) != FALSE)
    {
        coll_data->is_coll_end = TRUE;
    }
    if (mpObjectProc_CheckTestCeilCollisionAdjNew(coll_data) != FALSE)
    {
        coll_data->is_coll_end = TRUE;
    }
    if (mpObjectProc_RunGroundCollisionAdjNewNULL(coll_data) != FALSE)
    {
        coll_data->is_coll_end = TRUE;

        func_800269C0(alSound_SFX_ItemMapCollide);

        ip->rotate_step = 0.0F;
        joint->rotate.vec.f.z = 0.0F;
    }
    return coll_data->is_coll_end;
}

// 0x80173680
sb32 itMap_TestAllCheckCollEnd(GObj *item_gobj)
{
    return mpObjectProc_UpdateMapProcMain(&itGetStruct(item_gobj)->coll_data, itMap_ProcAllCheckCollEnd, item_gobj, 0);
}

// 0x801736B4
sb32 itMap_ProcAllCheckCollisionFlag(mpCollData *coll_data, GObj *item_gobj, u32 coll_flags)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (mpObjectProc_CheckTestLWallCollisionAdjNew(coll_data) != FALSE)
    {
        mpObjectProc_RunLWallCollisionAdjNew(coll_data);
    }
    if (mpObjectProc_CheckTestRWallCollisionAdjNew(coll_data) != FALSE)
    {
        mpObjectProc_RunRWallCollisionAdjNew(coll_data);
    }
    if (mpObjectProc_CheckTestCeilCollisionAdjNew(coll_data) != FALSE)
    {
        mpObjectProc_RunCeilCollisionAdjNew(coll_data);

        if (coll_data->coll_mask_stat & MPCOLL_KIND_CEIL)
        {
            mpObjectProc_RunCeilEdgeAdjust(coll_data);
        }
    }
    if (mpObjectProc_RunGroundCollisionAdjNewNULL(coll_data) != FALSE)
    {
        func_ovl2_800DD59C(coll_data);

        if (coll_data->coll_mask_stat & MPCOLL_KIND_GROUND)
        {
            mpObjectProc_RunGroundEdgeAdjust(coll_data);
            func_800269C0(alSound_SFX_ItemMapCollide);

            ip->rotate_step = 0.0F;
            joint->rotate.vec.f.z = 0.0F;

            coll_data->is_coll_end = TRUE;
        }
    }
    if (coll_data->coll_mask_curr & coll_flags)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x801737B8
sb32 itMap_TestAllCollisionFlag(GObj *item_gobj, u32 flag)
{
    return mpObjectProc_UpdateMapProcMain(&itGetStruct(item_gobj)->coll_data, itMap_ProcAllCheckCollisionFlag, item_gobj, flag);
}

// 0x801737EC
sb32 itMap_CheckCollideAllRebound(GObj *item_gobj, u32 check_flags, f32 mod_vel, Vec3f *pos) // Modify velocity based on angle of collision
{
    itStruct *ip = itGetStruct(item_gobj);
    mpCollData *coll_data = &ip->coll_data;
    Vec3f *translate = &DObjGetStruct(item_gobj)->translate.vec.f;
    Vec3f mod_pos;
    sb32 return_bool = FALSE;
    u16 coll_flags = (ip->coll_data.coll_mask_prev ^ ip->coll_data.coll_mask_curr) & ip->coll_data.coll_mask_curr & MPCOLL_KIND_MAIN_MASK;

    if (coll_flags & check_flags & MPCOLL_KIND_LWALL)
    {
        if (func_ovl0_800C7C0C(&ip->phys_info.vel, &coll_data->lwall_angle) < 0.0F)
        {
            func_ovl0_800C7B08(&ip->phys_info.vel, &coll_data->lwall_angle);

            mod_pos.x = translate->x + coll_data->object_coll.width;
            mod_pos.y = translate->y + coll_data->object_coll.center;

            return_bool = TRUE;

            func_800269C0(alSound_SFX_ItemMapCollide);
        }
    }
    if (coll_flags & check_flags & MPCOLL_KIND_RWALL)
    {
        if (func_ovl0_800C7C0C(&ip->phys_info.vel, &coll_data->rwall_angle) < 0.0F)
        {
            func_ovl0_800C7B08(&ip->phys_info.vel, &coll_data->rwall_angle);

            mod_pos.x = translate->x - coll_data->object_coll.width;
            mod_pos.y = translate->y + coll_data->object_coll.center;

            return_bool = TRUE;

            func_800269C0(alSound_SFX_ItemMapCollide);
        }
    }
    if (coll_flags & check_flags & MPCOLL_KIND_CEIL)
    {
        if (func_ovl0_800C7C0C(&ip->phys_info.vel, &coll_data->ceil_angle) < 0.0F)
        {
            func_ovl0_800C7B08(&ip->phys_info.vel, &coll_data->ceil_angle);

            mod_pos.x = translate->x;
            mod_pos.y = translate->y + coll_data->object_coll.top;

            return_bool = TRUE;
        }
    }
    if (coll_flags & check_flags & MPCOLL_KIND_GROUND)
    {
        if (func_ovl0_800C7C0C(&ip->phys_info.vel, &coll_data->ground_angle) < 0.0F)
        {
            func_ovl0_800C7B08(&ip->phys_info.vel, &coll_data->ground_angle);

            mod_pos.x = translate->x;
            mod_pos.y = translate->y + coll_data->object_coll.bottom;

            return_bool = TRUE;

            func_800269C0(alSound_SFX_ItemMapCollide);
        }
    }
    if (return_bool != FALSE)
    {
        func_ovl0_800C7AE0(&ip->phys_info.vel, mod_vel);

        if (pos != NULL)
        {
            pos->x = mod_pos.x;
            pos->y = mod_pos.y;
            pos->z = translate->z;
        }
    }
    return return_bool;
}

// 0x80173A48
void itMap_SetGroundCollisionRecoil(Vec3f *vel, Vec3f *ground_angle, f32 ground_rebound)
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
sb32 itMap_CheckMapCollideThrownLanding(GObj *item_gobj, f32 wall_ceil_rebound, f32 ground_rebound, void (*proc_status)(GObj*))
{
    itStruct *ip = itGetStruct(item_gobj);
    s32 unused;
    sb32 is_collide_ground = itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND);

    if (itMap_CheckCollideAllRebound(item_gobj, (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL), wall_ceil_rebound, NULL) != FALSE)
    {
        itMain_VelSetRotateStepLR(item_gobj);
    }
    if (is_collide_ground != FALSE)
    {
        itMap_SetGroundCollisionRecoil(&ip->phys_info.vel, &ip->coll_data.ground_angle, ground_rebound);
        itMain_VelSetRotateStepLR(item_gobj);

        ip->times_landed++;

        if (ip->times_landed == ITEM_LANDING_DESPAWN_CHECK)
        {
            if
            (
                (gBattleState->game_type != gmMatch_GameType_HowToPlay) && 
                (ip->times_thrown != 0)                                 && 
                (
                    (ip->times_thrown == ITEM_THROW_NUM_MAX)            || 
                    (lbRandom_GetIntRange(ITEM_THROW_DESPAWN_RANDOM) == 0)
                )
            )
            {
                return TRUE;
            }
        }
        if ((ip->times_landed == ITEM_LANDING_NUM_MAX) && (proc_status != NULL))
        {
            proc_status(item_gobj);
        }
    }
    return FALSE;
}

// 0x80173C68
sb32 itMap_CheckMapCollideLanding(GObj *item_gobj, f32 wall_ceil_rebound, f32 ground_rebound, void (*proc_map)(GObj*))
{
    itStruct *ap = itGetStruct(item_gobj);
    s32 unused;
    sb32 is_collide_ground = itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND);

    if (itMap_CheckCollideAllRebound(item_gobj, (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL), wall_ceil_rebound, NULL) != FALSE)
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
sb32 itMap_CheckMapReboundProcAll(GObj *item_gobj, f32 wall_ceil_rebound, f32 ground_rebound, void (*proc_map)(GObj*))
{
    itStruct *ap = itGetStruct(item_gobj);
    mpCollData *coll_data = &ap->coll_data;
    sb32 is_collide_any = itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_MAIN_MASK);

    if (itMap_CheckCollideAllRebound(item_gobj, (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL), wall_ceil_rebound, NULL) != FALSE)
    {
        itMain_VelSetRotateStepLR(item_gobj);
    }
    if (coll_data->coll_mask_curr & MPCOLL_KIND_GROUND)
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

// 0x80173DF4
sb32 itMap_CheckMapReboundGround(GObj *item_gobj, f32 wall_ceil_rebound)
{
    sb32 is_collide_ground = itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND);

    if (itMap_CheckCollideAllRebound(item_gobj, (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL), wall_ceil_rebound, NULL) != FALSE)
    {
        itMain_VelSetRotateStepLR(item_gobj);
    }
    if (is_collide_ground != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80173E58
sb32 itMap_CheckMapProcAll(GObj *item_gobj, void (*proc_map)(GObj*))
{
    if ((itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_MAIN_MASK) != FALSE) && (proc_map != NULL))
    {
        proc_map(item_gobj);
    }
    return FALSE;
}

// 0x80173E9C
sb32 func_ovl3_80173E9C(GObj *item_gobj, void (*proc)(GObj*)) // Unused
{
    if ((itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_MAIN_MASK) != FALSE))
    {
        if (proc != NULL)
        {
            proc(item_gobj);
        }
        return TRUE;
    }
    else return FALSE;
}

// 0x80173EE8
sb32 itMap_CheckMapReboundProcGround(GObj *item_gobj, f32 wall_ceil_rebound, void (*proc_map)(GObj*))
{
    if ((itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE) && (proc_map != NULL))
    {
        proc_map(item_gobj);
    }
    if (itMap_CheckCollideAllRebound(item_gobj, (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL), wall_ceil_rebound, NULL) != FALSE)
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