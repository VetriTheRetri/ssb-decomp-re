#include <it/item.h>
#include <sc/scene.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80173480
sb32 itMapProcLRWallCheckGround(MPCollData *coll_data, GObj *item_gobj, u32 flags)
{
    s32 ground_line_id = coll_data->ground_line_id;
    sb32 is_collide_ground = FALSE;

    if (mpProcessCheckTestLWallCollision(coll_data) != FALSE)
    {
        mpProcessRunLWallCollision(coll_data);
        coll_data->is_coll_end = TRUE;
    }
    if (mpProcessCheckTestRWallCollision(coll_data) != FALSE)
    {
        mpProcessRunRWallCollision(coll_data);
        coll_data->is_coll_end = TRUE;
    }
    if (mpProcessCheckTestGroundCollisionNew(coll_data) != FALSE)
    {
        if (coll_data->coll_mask_stat & MPCOLL_FLAG_GROUND)
        {
            mpProcessRunGroundEdgeAdjust(coll_data);
            is_collide_ground = TRUE;
        }
    }
    else coll_data->is_coll_end = TRUE;
    
    if (mpProcessCheckTestGroundCollision(coll_data, ground_line_id) != FALSE)
    {
        func_ovl2_800DD59C(coll_data);

        if (coll_data->coll_mask_stat & MPCOLL_FLAG_GROUND)
        {
            mpProcessRunGroundEdgeAdjust(coll_data);
            is_collide_ground = TRUE;
        }
        coll_data->is_coll_end = FALSE;
    }
    return is_collide_ground;
}

// 0x8017356C
sb32 itMapTestLRWallCheckGround(GObj *item_gobj)
{
    return mpProcessUpdateMapProcMain(&itGetStruct(item_gobj)->coll_data, itMapProcLRWallCheckGround, item_gobj, 0);
}

// 0x801735A0
sb32 itMapCheckLRWallProcGround(GObj *item_gobj, void (*proc_map)(GObj*))
{
    if (itMapTestLRWallCheckGround(item_gobj) == FALSE)
    {
        proc_map(item_gobj);

        return FALSE;
    }
    else return TRUE;
}

// 0x801735E0
sb32 itMapProcAllCheckCollEnd(MPCollData *coll_data, GObj *item_gobj, u32 flags)
{
    ITStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (mpProcessCheckTestLWallCollisionAdjNew(coll_data) != FALSE)
    {
        coll_data->is_coll_end = TRUE;
    }
    if (mpProcessCheckTestRWallCollisionAdjNew(coll_data) != FALSE)
    {
        coll_data->is_coll_end = TRUE;
    }
    if (mpProcessCheckTestCeilCollisionAdjNew(coll_data) != FALSE)
    {
        coll_data->is_coll_end = TRUE;
    }
    if (mpProcessRunGroundCollisionAdjNewNULL(coll_data) != FALSE)
    {
        coll_data->is_coll_end = TRUE;

        func_800269C0_275C0(nSYAudioFGMItemMapCollide);

        ip->rotate_step = 0.0F;
        joint->rotate.vec.f.z = 0.0F;
    }
    return coll_data->is_coll_end;
}

// 0x80173680
sb32 itMapTestAllCheckCollEnd(GObj *item_gobj)
{
    return mpProcessUpdateMapProcMain(&itGetStruct(item_gobj)->coll_data, itMapProcAllCheckCollEnd, item_gobj, 0);
}

// 0x801736B4
sb32 itMapProcAllCheckCollisionFlag(MPCollData *coll_data, GObj *item_gobj, u32 coll_flags)
{
    ITStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (mpProcessCheckTestLWallCollisionAdjNew(coll_data) != FALSE)
    {
        mpProcessRunLWallCollisionAdjNew(coll_data);
    }
    if (mpProcessCheckTestRWallCollisionAdjNew(coll_data) != FALSE)
    {
        mpProcessRunRWallCollisionAdjNew(coll_data);
    }
    if (mpProcessCheckTestCeilCollisionAdjNew(coll_data) != FALSE)
    {
        mpProcessRunCeilCollisionAdjNew(coll_data);

        if (coll_data->coll_mask_stat & MPCOLL_FLAG_CEIL)
        {
            mpProcessRunCeilEdgeAdjust(coll_data);
        }
    }
    if (mpProcessRunGroundCollisionAdjNewNULL(coll_data) != FALSE)
    {
        func_ovl2_800DD59C(coll_data);

        if (coll_data->coll_mask_stat & MPCOLL_FLAG_GROUND)
        {
            mpProcessRunGroundEdgeAdjust(coll_data);
            func_800269C0_275C0(nSYAudioFGMItemMapCollide);

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
sb32 itMapTestAllCollisionFlag(GObj *item_gobj, u32 flag)
{
    return mpProcessUpdateMapProcMain(&itGetStruct(item_gobj)->coll_data, itMapProcAllCheckCollisionFlag, item_gobj, flag);
}

// 0x801737EC
sb32 itMapCheckCollideAllRebound(GObj *item_gobj, u32 check_flags, f32 mod_vel, Vec3f *pos) // Modify velocity based on angle of collision
{
    ITStruct *ip = itGetStruct(item_gobj);
    MPCollData *coll_data = &ip->coll_data;
    Vec3f *translate = &DObjGetStruct(item_gobj)->translate.vec.f;
    Vec3f mod_pos;
    sb32 return_bool = FALSE;
    u16 coll_flags = (ip->coll_data.coll_mask_prev ^ ip->coll_data.coll_mask_curr) & ip->coll_data.coll_mask_curr & MPCOLL_FLAG_MAIN_MASK;

    if (coll_flags & check_flags & MPCOLL_FLAG_LWALL)
    {
        if (lbCommonSim2D(&ip->physics.vel_air, &coll_data->lwall_angle) < 0.0F)
        {
            lbCommonReflect2D(&ip->physics.vel_air, &coll_data->lwall_angle);

            mod_pos.x = translate->x + coll_data->map_coll.width;
            mod_pos.y = translate->y + coll_data->map_coll.center;

            return_bool = TRUE;

            func_800269C0_275C0(nSYAudioFGMItemMapCollide);
        }
    }
    if (coll_flags & check_flags & MPCOLL_FLAG_RWALL)
    {
        if (lbCommonSim2D(&ip->physics.vel_air, &coll_data->rwall_angle) < 0.0F)
        {
            lbCommonReflect2D(&ip->physics.vel_air, &coll_data->rwall_angle);

            mod_pos.x = translate->x - coll_data->map_coll.width;
            mod_pos.y = translate->y + coll_data->map_coll.center;

            return_bool = TRUE;

            func_800269C0_275C0(nSYAudioFGMItemMapCollide);
        }
    }
    if (coll_flags & check_flags & MPCOLL_FLAG_CEIL)
    {
        if (lbCommonSim2D(&ip->physics.vel_air, &coll_data->ceil_angle) < 0.0F)
        {
            lbCommonReflect2D(&ip->physics.vel_air, &coll_data->ceil_angle);

            mod_pos.x = translate->x;
            mod_pos.y = translate->y + coll_data->map_coll.top;

            return_bool = TRUE;
        }
    }
    if (coll_flags & check_flags & MPCOLL_FLAG_GROUND)
    {
        if (lbCommonSim2D(&ip->physics.vel_air, &coll_data->ground_angle) < 0.0F)
        {
            lbCommonReflect2D(&ip->physics.vel_air, &coll_data->ground_angle);

            mod_pos.x = translate->x;
            mod_pos.y = translate->y + coll_data->map_coll.bottom;

            return_bool = TRUE;

            func_800269C0_275C0(nSYAudioFGMItemMapCollide);
        }
    }
    if (return_bool != FALSE)
    {
        lbCommonScale2D(&ip->physics.vel_air, mod_vel);

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
void itMapSetGroundRebound(Vec3f *vel, Vec3f *ground_angle, f32 ground_rebound)
{
    f32 scale;
    f32 inverse;
    f32 rebound;

    scale = lbCommonMag2D(vel);

    if (scale != 0.0F)
    {
        inverse = 1.0F / scale;
        rebound = scale * ground_rebound * 0.5F;

        lbCommonReflect2D(vel, ground_angle);

        vel->x *= inverse;
        vel->y *= inverse;
        vel->x += ground_angle->x;
        vel->y += ground_angle->y;
        vel->x *= rebound;
        vel->y *= rebound;
    }
}

// 0x80173B24
sb32 itMapCheckDestroyDropped(GObj *item_gobj, f32 common_rebound, f32 ground_rebound, void (*proc_status)(GObj*))
{
    ITStruct *ip = itGetStruct(item_gobj);
    s32 unused;
    sb32 is_collide_ground = itMapTestAllCollisionFlag(item_gobj, MPCOLL_FLAG_GROUND);

    if (itMapCheckCollideAllRebound(item_gobj, (MPCOLL_FLAG_CEIL | MPCOLL_FLAG_RWALL | MPCOLL_FLAG_LWALL), common_rebound, NULL) != FALSE)
    {
        itMainVelSetRotateStepLR(item_gobj);
    }
    if (is_collide_ground != FALSE)
    {
        itMapSetGroundRebound(&ip->physics.vel_air, &ip->coll_data.ground_angle, ground_rebound);
        itMainVelSetRotateStepLR(item_gobj);

        ip->times_landed++;

        if (ip->times_landed == ITEM_LANDING_DESPAWN_CHECK)
        {
            if
            (
                (gSCManagerBattleState->game_type != nSCBattleGameTypeExplain)   && 
                (ip->times_thrown != 0)                                 && 
                (
                    (ip->times_thrown == ITEM_THROW_NUM_MAX)            
                    || 
                    (mtTrigGetRandomIntRange(ITEM_THROW_DESPAWN_RANDOM) == 0)
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
sb32 itMapCheckLanding(GObj *item_gobj, f32 common_rebound, f32 ground_rebound, void (*proc_map)(GObj*))
{
    ITStruct *ip = itGetStruct(item_gobj);
    s32 unused;
    sb32 is_collide_ground = itMapTestAllCollisionFlag(item_gobj, MPCOLL_FLAG_GROUND);

    if (itMapCheckCollideAllRebound(item_gobj, (MPCOLL_FLAG_CEIL | MPCOLL_FLAG_RWALL | MPCOLL_FLAG_LWALL), common_rebound, NULL) != FALSE)
    {
        itMainVelSetRotateStepLR(item_gobj);
    }
    if (is_collide_ground != FALSE)
    {
        lbCommonReflect2D(&ip->physics.vel_air, &ip->coll_data.ground_angle);
        lbCommonScale2D(&ip->physics.vel_air, ground_rebound);
        itMainVelSetRotateStepLR(item_gobj);

        if (proc_map != NULL)
        {
            proc_map(item_gobj);
        }
        return TRUE;
    }
    else return FALSE;
}

// 0x80173D24
sb32 itMapCheckMapReboundProcAll(GObj *item_gobj, f32 common_rebound, f32 ground_rebound, void (*proc_map)(GObj*))
{
    ITStruct *ip = itGetStruct(item_gobj);
    MPCollData *coll_data = &ip->coll_data;
    sb32 is_collide_any = itMapTestAllCollisionFlag(item_gobj, MPCOLL_FLAG_MAIN_MASK);

    if (itMapCheckCollideAllRebound(item_gobj, (MPCOLL_FLAG_CEIL | MPCOLL_FLAG_RWALL | MPCOLL_FLAG_LWALL), common_rebound, NULL) != FALSE)
    {
        itMainVelSetRotateStepLR(item_gobj);
    }
    if (coll_data->coll_mask_curr & MPCOLL_FLAG_GROUND)
    {
        lbCommonReflect2D(&ip->physics.vel_air, &coll_data->ground_angle);
        lbCommonScale2D(&ip->physics.vel_air, ground_rebound);
        itMainVelSetRotateStepLR(item_gobj);
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
sb32 itMapCheckDestroyLanding(GObj *item_gobj, f32 common_rebound)
{
    sb32 is_collide_ground = itMapTestAllCollisionFlag(item_gobj, MPCOLL_FLAG_GROUND);

    if (itMapCheckCollideAllRebound(item_gobj, (MPCOLL_FLAG_CEIL | MPCOLL_FLAG_RWALL | MPCOLL_FLAG_LWALL), common_rebound, NULL) != FALSE)
    {
        itMainVelSetRotateStepLR(item_gobj);
    }
    if (is_collide_ground != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80173E58
sb32 itMapCheckMapProcAll(GObj *item_gobj, void (*proc_map)(GObj*))
{
    if ((itMapTestAllCollisionFlag(item_gobj, MPCOLL_FLAG_MAIN_MASK) != FALSE) && (proc_map != NULL))
    {
        proc_map(item_gobj);
    }
    return FALSE;
}

// 0x80173E9C
sb32 func_ovl3_80173E9C(GObj *item_gobj, void (*proc)(GObj*)) // Unused
{
    if ((itMapTestAllCollisionFlag(item_gobj, MPCOLL_FLAG_MAIN_MASK) != FALSE))
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
sb32 itMapCheckMapReboundProcGround(GObj *item_gobj, f32 common_rebound, void (*proc_map)(GObj*))
{
    if ((itMapTestAllCollisionFlag(item_gobj, MPCOLL_FLAG_GROUND) != FALSE) && (proc_map != NULL))
    {
        proc_map(item_gobj);
    }
    if (itMapCheckCollideAllRebound(item_gobj, (MPCOLL_FLAG_CEIL | MPCOLL_FLAG_RWALL | MPCOLL_FLAG_LWALL), common_rebound, NULL) != FALSE)
    {
        itMainVelSetRotateStepLR(item_gobj);
    }
    return FALSE;
}

// 0x80173F54
void itMapSetGround(ITStruct *ip)
{
    ip->ga = nMPKineticsGround;
    ip->physics.vel_ground = ip->physics.vel_air.x * ip->lr;
}

// 0x80173F78
void itMapSetAir(ITStruct *ip)
{
    ip->ga = nMPKineticsAir;
}
