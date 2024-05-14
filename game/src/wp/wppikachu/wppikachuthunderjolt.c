#include <wp/weapon.h>
#include <ft/fighter.h>

extern void *gFTDataPikachuExtra1, *gFTDataPikachuExtra3;

extern 
intptr_t lWPPikachuThunderJoltAirWeaponAttributes;      // 0x00000000
extern 
intptr_t lWPPikachuThunderJoltGroundWeaponAttributes;   // 0x00000034
extern 
intptr_t lWPPikachuThunderJoltAnimJoint;                // 0x00001A20
extern 
intptr_t lWPPikachuThunderJoltMatAnimJoint;             // 0x00001AE0

wpCreateDesc dWPPikachuThunderJoltAirWeaponDesc =
{
    0x00,                                               // Render flags?
    Wp_Kind_ThunderJoltAir,                             // Weapon Kind
    &gFTDataPikachuExtra1,                              // Pointer to character's loaded files?
    &lWPPikachuThunderJoltAirWeaponAttributes,          // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_Tra,                            // Main matrix transformations
        0x2E,                                           // Secondary matrix transformations?
        0                                               // ???
    },

    wpPikachuThunderJoltAirProcUpdate,                  // Proc Update
    wpPikachuThunderJoltAirProcMap,                     // Proc Map
    wpPikachuThunderJoltAirProcHit,                     // Proc Hit
    wpPikachuThunderJoltAirProcHit,                     // Proc Shield
    wpPikachuThunderJoltAirProcHop,                     // Proc Hop
    wpPikachuThunderJoltAirProcHit,                     // Proc Set-Off
    wpPikachuThunderJoltAirProcReflector,               // Proc Reflector
    wpPikachuThunderJoltAirProcHit                      // Proc Absorb
};

wpCreateDesc dWPPikachuThunderJoltGroundWeaponDesc =
{
    0x03,                                               // Render flags?
    Wp_Kind_ThunderJoltGround,                          // Weapon Kind
    &gFTDataPikachuExtra1,                              // Pointer to character's loaded files?
    &lWPPikachuThunderJoltGroundWeaponAttributes,       // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyRSca,                  // Main matrix transformations
        OMMtx_Transform_Null,                           // Secondary matrix transformations?
        0                                               // ???
    },

    wpPikachuThunderJoltGroundProcUpdate,               // Proc Update
    wpPikachuThunderJoltGroundProcMap,                  // Proc Map
    wpPikachuThunderJoltGroundProcHit,                  // Proc Hit
    wpPikachuThunderJoltGroundProcHit,                  // Proc Shield
    NULL,                                               // Proc Hop
    wpPikachuThunderJoltGroundProcHit,                  // Proc Set-Off
    wpPikachuThunderJoltGroundProcReflector,            // Proc Reflector
    wpPikachuThunderJoltGroundProcHit                   // Proc Absorb
};

// 0x80169390
sb32 wpPikachuThunderJoltAirProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

        return TRUE;
    }
    else wpMainApplyGClampTVel(wp, WPPIKACHUJOLT_GRAVITY, WPPIKACHUJOLT_T_VEL);

    return FALSE;
}

// 0x801693EC
sb32 wpPikachuThunderJoltAirProcMap(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f pos;
    u32 unused[2];

    if (wpMapTestAllCheckGround(weapon_gobj) != FALSE)
    {
        wpPikachuThunderJoltGroundMakeWeapon(weapon_gobj, &DObjGetStruct(weapon_gobj)->translate.vec.f, 0);

        return TRUE;
    }

    else if (wp->coll_data.coll_mask_curr & MPCOLL_KIND_LWALL)
    {
        mpCollision_GetUDEdgeUp(wp->coll_data.rwall_line_id, &pos);

        if (DObjGetStruct(weapon_gobj)->translate.vec.f.y > pos.y)
        {
            DObjGetStruct(weapon_gobj)->translate.vec.f.y = pos.y;
        }

        mpCollision_GetUDEdgeDown(wp->coll_data.rwall_line_id, &pos);

        if (DObjGetStruct(weapon_gobj)->translate.vec.f.y < pos.y)
        {
            DObjGetStruct(weapon_gobj)->translate.vec.f.y = pos.y;
        }
        wpPikachuThunderJoltGroundMakeWeapon(weapon_gobj, &DObjGetStruct(weapon_gobj)->translate.vec.f, 3);

        return TRUE;
    }

    else if (wp->coll_data.coll_mask_curr & MPCOLL_KIND_RWALL)
    {
        func_ovl2_800F4690(wp->coll_data.lwall_line_id, &pos);

        if (DObjGetStruct(weapon_gobj)->translate.vec.f.y > pos.y)
        {
            DObjGetStruct(weapon_gobj)->translate.vec.f.y = pos.y;
        }
        func_ovl2_800F46B0(wp->coll_data.lwall_line_id, &pos);

        if (DObjGetStruct(weapon_gobj)->translate.vec.f.y < pos.y)
        {
            DObjGetStruct(weapon_gobj)->translate.vec.f.y = pos.y;
        }
        wpPikachuThunderJoltGroundMakeWeapon(weapon_gobj, &DObjGetStruct(weapon_gobj)->translate.vec.f, 1);

        return TRUE;
    }
    return FALSE;
}

// 0x8016953C
sb32 wpPikachuThunderJoltAirProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_ovl2_800FE068(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->weapon_hit.damage);

    return TRUE;
}

// 0x8016956C
sb32 wpPikachuThunderJoltAirProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

    return FALSE;
}

// 0x801695B0
sb32 wpPikachuThunderJoltAirProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wp->lifetime = WPPIKACHUJOLT_LIFETIME;

    wpMainReflectorSetLR(wp, fp);

    return FALSE;
}

// 0x801695E4
GObj* wpPikachuThunderJoltAirMakeWeapon(GObj *fighter_gobj, Vec3f *pos, Vec3f *vel)
{
    GObj *weapon_gobj = wpManagerMakeWeapon(fighter_gobj, &dWPPikachuThunderJoltAirWeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lifetime = WPPIKACHUJOLT_LIFETIME;

    wp->phys_info.vel = *vel;

    return weapon_gobj;
}

// 0x80169654
void wpPikachuThunderJoltGroundAddAnim(GObj *weapon_gobj)
{
    func_8000BED8
    (
        weapon_gobj, 
        (uintptr_t)gFTDataPikachuExtra3 + (intptr_t)&lWPPikachuThunderJoltAnimJoint, 
        (uintptr_t)gFTDataPikachuExtra3 + (intptr_t)&lWPPikachuThunderJoltMatAnimJoint, 
        0.0F
    ); // Linker thing
    func_8000DF34(weapon_gobj);
}

// 0x801696A0
sb32 wpPikachuThunderJoltGroundProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (weapon_gobj->anim_frame == WPPIKACHUJOLT_ANIM_PUSH_FRAME)
    {
        efParticle_ThunderJolt_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, DObjGetStruct(weapon_gobj)->rotate.vec.f.z);
        wpPikachuThunderJoltGroundAddAnim(weapon_gobj);
    }
    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);
        return TRUE;
    }
    wp->phys_info.vel_air.x = cosf(DObjGetStruct(weapon_gobj)->rotate.vec.f.z) * WPPIKACHUJOLT_VEL;
    wp->phys_info.vel_air.y = __sinf(DObjGetStruct(weapon_gobj)->rotate.vec.f.z) * WPPIKACHUJOLT_VEL;

    switch (wp->weapon_vars.thunder_jolt.line_type)
    {
    case mpCollision_LineType_Ground:
        wp->phys_info.vel_air.x *= wp->lr;
        break;

    case mpCollision_LineType_RWall:
    case mpCollision_LineType_LWall:
        if (wp->lr == mpCollision_LineType_RWall)
        {
            if (wp->phys_info.vel_air.y < 0.0F)
            {
                wp->phys_info.vel_air.y *= -1.0F;
            }
        }
        if (wp->lr == mpCollision_LineType_LWall)
        {
            if (wp->phys_info.vel_air.y > 0.0F)
            {
                wp->phys_info.vel_air.y *= -1.0F;
            }
        }
        break;
    }
    return FALSE;
}

// 0x8016981C
s32 wpPikachuThunderJoltGroundGetStatus(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f pos;
    Vec3f rotate;
    s32 line_id;

    switch (wp->weapon_vars.thunder_jolt.line_type)
    {
    case mpCollision_LineType_Ground:
        if (wp->lr == LR_Right)
        {
            if 
            (
                (mpCollision_CheckLWallLineCollisionDiff(&wp->coll_data.pos_curr, wp->coll_data.p_translate, &pos, &line_id, NULL, NULL) != FALSE) && 
                (mpCollision_GetEdgeUnderLLineID(wp->coll_data.ground_line_id) != line_id)
            )
            {
                if (mpCollision_GetLRCommonLeft(line_id, &pos, NULL, NULL, &rotate) != FALSE)
                {
                    wp->weapon_vars.thunder_jolt.line_type = mpCollision_LineType_LWall;
                    wp->coll_data.lwall_line_id = line_id;
                    wp->lr = LR_WallUp;

                    DObjGetStruct(weapon_gobj)->translate.vec.f = pos;

                    wpPikachuThunderJoltGroundAddAnim(weapon_gobj);

                    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(-rotate.x, rotate.y);

                    return wpPikachuThunderJolt_Status_Active;
                }
                return wpPikachuThunderJolt_Status_Destroy;
            }
            break;
        }
        else if 
        (
            (mpCollision_CheckRWallLineCollisionDiff(&wp->coll_data.pos_curr, wp->coll_data.p_translate, &pos, &line_id, NULL, NULL) != FALSE) && 
            (mpCollision_GetEdgeUnderRLineID(wp->coll_data.ground_line_id) != line_id)
        )
        {
            if (mpCollision_GetLRCommonRight(line_id, &pos, NULL, NULL, &rotate) != FALSE)
            {
                wp->weapon_vars.thunder_jolt.line_type = mpCollision_LineType_RWall;
                wp->coll_data.rwall_line_id = line_id;
                wp->lr = LR_WallUp;

                DObjGetStruct(weapon_gobj)->translate.vec.f = pos;

                wpPikachuThunderJoltGroundAddAnim(weapon_gobj);

                DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(-rotate.x, rotate.y);

                return wpPikachuThunderJolt_Status_Active;
            }
            return wpPikachuThunderJolt_Status_Destroy;
        }
        break;

    case mpCollision_LineType_LWall:
        if (wp->lr == LR_WallDown)
        {
            if 
            (
                (mpCollision_CheckGroundLineCollisionDiff(&wp->coll_data.pos_curr, wp->coll_data.p_translate, &pos, &line_id, NULL, NULL) != FALSE) && 
                (mpCollision_GetEdgeRightULineID(wp->coll_data.lwall_line_id) != line_id)
            )
            {
                if (mpCollision_GetUDCommonUp(line_id, &pos, NULL, NULL, &rotate) != FALSE)
                {
                    wp->weapon_vars.thunder_jolt.line_type = mpCollision_LineType_Ground;
                    wp->coll_data.ground_line_id = line_id;
                    wp->lr = LR_Left;

                    DObjGetStruct(weapon_gobj)->translate.vec.f = pos;

                    wpPikachuThunderJoltGroundAddAnim(weapon_gobj);

                    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(-rotate.x, rotate.y);

                    return wpPikachuThunderJolt_Status_Active;
                }
                return wpPikachuThunderJolt_Status_Destroy;
            }
            break;
        }
        else if (mpCollision_CheckCeilLineCollisionDiff(&wp->coll_data.pos_curr, wp->coll_data.p_translate, &pos, &line_id, NULL, NULL) != FALSE)
        {
            return wpPikachuThunderJolt_Status_Destroy;
        }
        break;

    case mpCollision_LineType_RWall:
        if (wp->lr == LR_WallDown)
        {
            if 
            (
                (mpCollision_CheckGroundLineCollisionDiff(&wp->coll_data.pos_curr, wp->coll_data.p_translate, &pos, &line_id, NULL, NULL) != FALSE) &&
                (mpCollision_GetEdgeLeftULineID(wp->coll_data.rwall_line_id) != line_id)
            )
            {
                if (mpCollision_GetUDCommonUp(line_id, &pos, NULL, NULL, &rotate) != FALSE)
                {
                    wp->weapon_vars.thunder_jolt.line_type = mpCollision_LineType_Ground;
                    wp->coll_data.ground_line_id = line_id;
                    wp->lr = LR_Right;

                    DObjGetStruct(weapon_gobj)->translate.vec.f = pos;

                    wpPikachuThunderJoltGroundAddAnim(weapon_gobj);

                    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(-rotate.x, rotate.y);

                    return wpPikachuThunderJolt_Status_Active;
                }
                return wpPikachuThunderJolt_Status_Destroy;
            }
        }
        else if (mpCollision_CheckCeilLineCollisionDiff(&wp->coll_data.pos_curr, wp->coll_data.p_translate, &pos, &line_id, NULL, NULL) != FALSE)
        {
            return wpPikachuThunderJolt_Status_Destroy;
        }
        break;

    default: 
        break;
    }
    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(-wp->weapon_vars.thunder_jolt.rotate.x, wp->weapon_vars.thunder_jolt.rotate.y);

    return wpPikachuThunderJolt_Status_Null;
}

// 0x80169BF0
sb32 wpPikachuThunderJoltGroundCheckDestroy(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f angle;

    wpPikachuThunderJoltGroundAddAnim(weapon_gobj);

    switch (wp->weapon_vars.thunder_jolt.line_type)
    {
    case mpCollision_LineType_Ground:
        mpCollision_GetUDCommonUp(wp->coll_data.ground_line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f, NULL, NULL, &angle);
        break;

    case mpCollision_LineType_LWall:
        mpCollision_GetLRCommonLeft(wp->coll_data.lwall_line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f, NULL, NULL, &angle);
        break;

    case mpCollision_LineType_RWall:
        mpCollision_GetLRCommonRight(wp->coll_data.rwall_line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f, NULL, NULL, &angle);
        break;
    }
    if (lbVector_Vec3fAngleDiff(&angle, &wp->weapon_vars.thunder_jolt.rotate) > WPPIKACHUJOLT_ROTATE_ANGLE_MAX)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

        return TRUE;
    }
    else DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(-angle.x, angle.y);

    return FALSE;
}

// 0x80169D08
sb32 wpPikachuThunderJoltGroundProcMap(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    s32 coll_type;
    Vec3f pos;
    s32 line_id;
    s32 unused;

    switch (wp->weapon_vars.thunder_jolt.line_type)
    {
    case mpCollision_LineType_Ground:
        if (mpCollision_CheckExistLineID(wp->coll_data.ground_line_id) == FALSE)
        {
            efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);
            return TRUE;
        }
        if (mpCollision_GetUDCommonUp(wp->coll_data.ground_line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f, &pos, NULL, &wp->weapon_vars.thunder_jolt.rotate) != FALSE)
        {
            DObjGetStruct(weapon_gobj)->translate.vec.f.y += pos.x;

            if (wpPikachuThunderJoltGroundGetStatus(weapon_gobj) == wpPikachuThunderJolt_Status_Destroy)
            {
                efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

                return TRUE;
            }
            return FALSE;
        }
        if (wp->lr == LR_Right)
        {
            line_id = mpCollision_GetEdgeUnderRLineID(wp->coll_data.ground_line_id);
        }
        else if (wp->lr == LR_Left)
        {
            line_id = mpCollision_GetEdgeUnderLLineID(wp->coll_data.ground_line_id);
        }
        else line_id = -1;
        
        if ((line_id == -1) || (line_id == -2))
        {
            if (wpPikachuThunderJoltGroundGetStatus(weapon_gobj) != wpPikachuThunderJolt_Status_Active)
            {
                efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

                return TRUE;
            }
            return FALSE;
        }
        coll_type = mpCollision_GetLineTypeID(line_id);

        if (wp->lr == LR_Right)
        {
            if (coll_type == mpCollision_LineType_LWall)
            {
                wp->coll_data.lwall_line_id = line_id;
                wp->weapon_vars.thunder_jolt.line_type = coll_type;
                wp->lr = LR_WallUp;

                mpCollision_GetUDEdgeDown(line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f);

                return wpPikachuThunderJoltGroundCheckDestroy(weapon_gobj);
            }
            if (coll_type == mpCollision_LineType_RWall)
            {
                wp->coll_data.rwall_line_id = line_id;
                wp->weapon_vars.thunder_jolt.line_type = coll_type;
                wp->lr = LR_WallDown;

                func_ovl2_800F4690(line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f);

                return wpPikachuThunderJoltGroundCheckDestroy(weapon_gobj);
            }
        }
        else if (coll_type == mpCollision_LineType_LWall)
        {
            wp->coll_data.lwall_line_id = line_id;
            wp->weapon_vars.thunder_jolt.line_type = coll_type;
            wp->lr = LR_WallDown;

            mpCollision_GetUDEdgeUp(line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f);

            return wpPikachuThunderJoltGroundCheckDestroy(weapon_gobj);
        }
        else if (coll_type == mpCollision_LineType_RWall)
        {
            wp->coll_data.rwall_line_id = line_id;
            wp->weapon_vars.thunder_jolt.line_type = coll_type;
            wp->lr = LR_WallUp;

            func_ovl2_800F46B0(line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f);

            return wpPikachuThunderJoltGroundCheckDestroy(weapon_gobj);
        }
        if (wpPikachuThunderJoltGroundGetStatus(weapon_gobj) != 1)
        {
            efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

            return TRUE;
        }
        return FALSE;

        break;

    case mpCollision_LineType_LWall:
        if (mpCollision_CheckExistLineID(wp->coll_data.lwall_line_id) == FALSE)
        {
            efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

            return TRUE;
        }
        if (mpCollision_GetLRCommonLeft(wp->coll_data.lwall_line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f, &pos, NULL, &wp->weapon_vars.thunder_jolt.rotate) != FALSE)
        {
            DObjGetStruct(weapon_gobj)->translate.vec.f.x += pos.x;

            if (wpPikachuThunderJoltGroundGetStatus(weapon_gobj) == wpPikachuThunderJolt_Status_Destroy)
            {
                efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

                return TRUE;
            }
            return FALSE;
        }
        if (wp->lr == LR_WallUp)
        {
            line_id = mpCollision_GetEdgeRightULineID(wp->coll_data.lwall_line_id);
        }
        else line_id = mpCollision_GetEdgeRightDLineID(wp->coll_data.lwall_line_id);
        
        if ((line_id == -1) || (line_id == -2))
        {
            if (wpPikachuThunderJoltGroundGetStatus(weapon_gobj) != wpPikachuThunderJolt_Status_Active)
            {
                efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

                return TRUE;
            }
            return FALSE;
        }
        coll_type = mpCollision_GetLineTypeID(line_id);

        if (wp->lr == LR_WallUp)
        {
            if (coll_type == mpCollision_LineType_Ground)
            {
                wp->coll_data.ground_line_id = line_id;
                wp->weapon_vars.thunder_jolt.line_type = coll_type;
                wp->lr = LR_Right;

                mpCollision_GetLREdgeLeft(line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f);

                return wpPikachuThunderJoltGroundCheckDestroy(weapon_gobj);
            }
        }
        else if (coll_type == mpCollision_LineType_Ground)
        {
            wp->coll_data.ground_line_id = line_id;
            wp->weapon_vars.thunder_jolt.line_type = coll_type;
            wp->lr = LR_Left;

            mpCollision_GetLREdgeRight(line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f);

            return wpPikachuThunderJoltGroundCheckDestroy(weapon_gobj);
        }
        if (wpPikachuThunderJoltGroundGetStatus(weapon_gobj) != wpPikachuThunderJolt_Status_Active)
        {
            efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

            return TRUE;
        }
        return FALSE;

        break;

    case mpCollision_LineType_RWall:
        if (mpCollision_CheckExistLineID(wp->coll_data.rwall_line_id) == FALSE)
        {
            efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

            return TRUE;
        }
        if (mpCollision_GetLRCommonRight(wp->coll_data.rwall_line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f, &pos, NULL, &wp->weapon_vars.thunder_jolt.rotate) != FALSE)
        {
            DObjGetStruct(weapon_gobj)->translate.vec.f.x += pos.x;

            if (wpPikachuThunderJoltGroundGetStatus(weapon_gobj) == wpPikachuThunderJolt_Status_Destroy)
            {
                efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

                return TRUE;
            }
            return FALSE;
        }
        if (wp->lr == LR_WallUp)
        {
            line_id = mpCollision_GetEdgeLeftULineID(wp->coll_data.rwall_line_id);
        }
        else line_id = mpCollision_GetEdgeLeftDLineID(wp->coll_data.rwall_line_id);
        
        if ((line_id == -1) || (line_id == -2))
        {
            if (wpPikachuThunderJoltGroundGetStatus(weapon_gobj) != wpPikachuThunderJolt_Status_Active)
            {
                efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

                return TRUE;
            }
            return FALSE;
        }
        coll_type = mpCollision_GetLineTypeID(line_id);

        if (wp->lr == LR_WallUp)
        {
            if (coll_type == mpCollision_LineType_Ground)
            {
                wp->coll_data.ground_line_id = line_id;
                wp->weapon_vars.thunder_jolt.line_type = coll_type;
                wp->lr = LR_Left;

                mpCollision_GetLREdgeRight(line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f);

                return wpPikachuThunderJoltGroundCheckDestroy(weapon_gobj);
            }
        }
        else if (coll_type == mpCollision_LineType_Ground)
        {
            wp->coll_data.ground_line_id = line_id;
            wp->weapon_vars.thunder_jolt.line_type = coll_type;
            wp->lr = LR_Right;

            mpCollision_GetLREdgeLeft(line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f);

            return wpPikachuThunderJoltGroundCheckDestroy(weapon_gobj);
        }
        if (wpPikachuThunderJoltGroundGetStatus(weapon_gobj) != wpPikachuThunderJolt_Status_Active)
        {
            efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

            return TRUE;
        }
        return FALSE;

    default:
        return FALSE;
    }
}

// 0x8016A374
sb32 wpPikachuThunderJoltGroundProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_ovl2_800FE068(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->weapon_hit.damage);

    return TRUE;
}

// 0x8016A3A4
sb32 wpPikachuThunderJoltGroundProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wp->lifetime = WPPIKACHUJOLT_LIFETIME;

    wpMainReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.y = (wp->phys_info.vel_air.x >= 0.0F) ? F_DEG_TO_RAD(180.0F) : 0;

    wpMainVelSetLR(weapon_gobj);

    return FALSE;
}

// 0x8016A42C
GObj* wpPikachuThunderJoltGroundMakeWeapon(GObj *prev_gobj, Vec3f *pos, s32 coll_type)
{
    s32 unused[2];
    wpStruct *prev_wp = wpGetStruct(prev_gobj);
    wpStruct *new_wp;
    GObj *new_gobj = wpManagerMakeWeapon(prev_gobj, &dWPPikachuThunderJoltGroundWeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_WEAPON));

    if (new_gobj == NULL)
    {
        return NULL;
    }
    new_wp = wpGetStruct(new_gobj);

    new_wp->weapon_vars.thunder_jolt.line_type = coll_type;

    new_wp->lifetime = prev_wp->lifetime;

    new_wp->coll_data.ground_line_id = prev_wp->coll_data.ground_line_id;
    new_wp->coll_data.lwall_line_id = prev_wp->coll_data.lwall_line_id;
    new_wp->coll_data.rwall_line_id = prev_wp->coll_data.rwall_line_id;

    gcSetAllAnimPlaybackRate(new_gobj, 0.5F);

    wpPikachuThunderJoltGroundProcMap(new_gobj);

    switch (new_wp->weapon_vars.thunder_jolt.line_type)
    {
    case mpCollision_LineType_Ground:
        new_wp->lr = (prev_wp->phys_info.vel_air.x >= 0.0F) ? LR_Right : LR_Left;

        DObjGetStruct(new_gobj)->rotate.vec.f.y = (new_wp->lr >= 0.0F) ? F_DEG_TO_RAD(180.0F) : 0; // PI32
        break;

    case mpCollision_LineType_LWall:
        if (atan2f(new_wp->weapon_vars.thunder_jolt.rotate.y, new_wp->weapon_vars.thunder_jolt.rotate.x) > F_DEG_TO_RAD(135.0F)) // 2.3561945F
        {
            DObjGetStruct(new_gobj)->rotate.vec.f.y = 0;
            new_wp->lr = LR_WallDown;
        }
        else
        {
            DObjGetStruct(new_gobj)->rotate.vec.f.y = F_DEG_TO_RAD(180.0F);
            new_wp->lr = LR_WallUp;
        }
        break;

    case mpCollision_LineType_RWall:
        if (atan2f(new_wp->weapon_vars.thunder_jolt.rotate.y, new_wp->weapon_vars.thunder_jolt.rotate.x) > F_DEG_TO_RAD(45.0F)) // QUART_PI32
        {
            DObjGetStruct(new_gobj)->rotate.vec.f.y = 0;
            new_wp->lr = LR_WallUp;
        }
        else
        {
            DObjGetStruct(new_gobj)->rotate.vec.f.y = F_DEG_TO_RAD(180.0F);
            new_wp->lr = LR_WallDown;
        }
        break;
    }
    efParticle_ThunderJolt_MakeEffect(&DObjGetStruct(new_gobj)->translate.vec.f, DObjGetStruct(new_gobj)->rotate.vec.f.z);
    wpMainPlaySFX(new_wp, alSound_SFX_NessSpecialHiCrackLoop); // Bruh

    return new_gobj;
}
