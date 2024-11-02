#include <wp/weapon.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80167880
sb32 wpMapProcLRWallCheckGround(MPCollData *coll_data, GObj *weapon_gobj, u32 flags)
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

// 0x8016796C
sb32 wpMapTestLRWallCheckGround(GObj *weapon_gobj)
{
    return mpProcessUpdateMapProcMain(&wpGetStruct(weapon_gobj)->coll_data, wpMapProcLRWallCheckGround, weapon_gobj, 0);
}

// 0x801679A0
sb32 wpMapProcAll(MPCollData *coll_data, GObj *weapon_gobj, u32 flags)
{
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
        func_ovl2_800DD6A8(coll_data);

        if (coll_data->coll_mask_stat & MPCOLL_FLAG_GROUND)
        {
            mpProcessRunGroundEdgeAdjust(coll_data);
        }
    }
    return FALSE;
}

// 0x80167A58
sb32 wpMapTestAll(GObj *weapon_gobj)
{
    return mpProcessUpdateMapProcMain(&wpGetStruct(weapon_gobj)->coll_data, wpMapProcAll, weapon_gobj, 0);
}

// 0x80167A8C
sb32 wpMapProcAllCheckGround(MPCollData *coll_data, GObj *weapon_gobj, u32 flags)
{
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

            coll_data->is_coll_end = TRUE;

            return TRUE;
        }
    }
    return FALSE;
}

// 0x80167B58
sb32 wpMapTestAllCheckGround(GObj *weapon_gobj)
{
    return mpProcessUpdateMapProcMain(&wpGetStruct(weapon_gobj)->coll_data, wpMapProcAllCheckGround, weapon_gobj, 0);
}

// 0x80167B8C
sb32 wpMapProcAllCheckCollEnd(MPCollData *coll_data, GObj *weapon_gobj, u32 flags)
{
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
    }
    return coll_data->is_coll_end;
}

// 0x80167C04
sb32 wpMapTestAllCheckCollEnd(GObj *weapon_gobj)
{
    return mpProcessUpdateMapProcMain(&wpGetStruct(weapon_gobj)->coll_data, wpMapProcAllCheckCollEnd, weapon_gobj, 0);
}

// 0x80167C38
sb32 wpMapCheckAllRebound(GObj *weapon_gobj, u32 check_flags, f32 mod_vel, Vec3f *pos) // Modify velocity based on angle of collision
{
    WPStruct *wp = wpGetStruct(weapon_gobj);
    MPCollData *coll_data = &wp->coll_data;
    sb32 return_bool = FALSE;
    Vec3f mod_pos, *translate = &DObjGetStruct(weapon_gobj)->translate.vec.f;
    u16 coll_flags = (wp->coll_data.coll_mask_prev ^ wp->coll_data.coll_mask_curr) & wp->coll_data.coll_mask_curr & MPCOLL_FLAG_MAIN_MASK;
    u32 unused;

    if (coll_flags & check_flags & MPCOLL_FLAG_LWALL)
    {
        if (lbCommonSim2D(&wp->physics.vel_air, &coll_data->lwall_angle) < 0.0F)
        {
            lbCommonReflect2D(&wp->physics.vel_air, &coll_data->lwall_angle);

            return_bool = TRUE;

            mod_pos.x = translate->x + coll_data->object_coll.width;
            mod_pos.y = translate->y + coll_data->object_coll.center;
        }
    }
    if (coll_flags & check_flags & MPCOLL_FLAG_RWALL)
    {
        if (lbCommonSim2D(&wp->physics.vel_air, &coll_data->rwall_angle) < 0.0F)
        {
            return_bool = TRUE;

            lbCommonReflect2D(&wp->physics.vel_air, &coll_data->rwall_angle);

            mod_pos.x = translate->x - coll_data->object_coll.width;
            mod_pos.y = translate->y + coll_data->object_coll.center;
        }
    }
    if (coll_flags & check_flags & MPCOLL_FLAG_CEIL)
    {
        if (lbCommonSim2D(&wp->physics.vel_air, &coll_data->ceil_angle) < 0.0F)
        {
            return_bool = TRUE;

            lbCommonReflect2D(&wp->physics.vel_air, &coll_data->ceil_angle);

            mod_pos.x = translate->x;
            mod_pos.y = translate->y + coll_data->object_coll.top;
        }
    }
    if (coll_flags & check_flags & MPCOLL_FLAG_GROUND)
    {
        if (lbCommonSim2D(&wp->physics.vel_air, &coll_data->ground_angle) < 0.0F)
        {
            return_bool = TRUE;

            lbCommonReflect2D(&wp->physics.vel_air, &coll_data->ground_angle);

            mod_pos.x = translate->x;
            mod_pos.y = translate->y + coll_data->object_coll.bottom;
        }
    }
    if (return_bool != FALSE)
    {
        lbCommonScale2D(&wp->physics.vel_air, mod_vel);

        if (pos != NULL)
        {
            pos->x = mod_pos.x;
            pos->y = mod_pos.y;
            pos->z = translate->z;
        }
    }
    return return_bool;
}

// 0x80167E78
void wpMapSetGround(WPStruct *wp) // Make weapon grounded
{
    wp->ga = nMPKineticsGround;
    wp->physics.vel_ground = wp->physics.vel_air.x * wp->lr;
}

// 0x80167E9C
void wpMapSetAir(WPStruct *wp) // Make item airborne
{
    wp->ga = nMPKineticsAir;
}
