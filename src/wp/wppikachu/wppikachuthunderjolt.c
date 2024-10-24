#include <wp/weapon.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t 
lWPPikachuThunderJoltAirWeaponAttributes;               // 0x00000000
extern intptr_t 
lWPPikachuThunderJoltGroundWeaponAttributes;            // 0x00000034
extern intptr_t 
lWPPikachuThunderJoltAnimJoint;                         // 0x00001A20
extern intptr_t 
lWPPikachuThunderJoltMatAnimJoint;                      // 0x00001AE0

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

wpCreateDesc dWPPikachuThunderJoltAirWeaponDesc =
{
    0x00,                                               // Render flags?
    nWPKindThunderJoltAir,                             // Weapon Kind
    &gFTDataPikachuSpecial1,                              // Pointer to character's loaded files?
    &lWPPikachuThunderJoltAirWeaponAttributes,          // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        nGCTransformTra,                            // Main matrix transformations
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
    nWPKindThunderJoltGround,                          // Weapon Kind
    &gFTDataPikachuSpecial1,                              // Pointer to character's loaded files?
    &lWPPikachuThunderJoltGroundWeaponAttributes,       // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        nGCTransformTraRotRpyRSca,                  // Main matrix transformations
        nGCTransformNull,                           // Secondary matrix transformations?
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

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80169390
sb32 wpPikachuThunderJoltAirProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

        return TRUE;
    }
    else wpMainApplyGravityClampTVel(wp, WPPIKACHUJOLT_GRAVITY, WPPIKACHUJOLT_TVEL);

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
        wpPikachuThunderJoltGroundMakeWeapon(weapon_gobj, &DObjGetStruct(weapon_gobj)->translate.vec.f, nMPLineKindGround);

        return TRUE;
    }

    else if (wp->coll_data.coll_mask_current & MPCOLL_FLAG_LWALL)
    {
        mpCollisionGetUDEdgeUp(wp->coll_data.lwall_line_id, &pos);

        if (DObjGetStruct(weapon_gobj)->translate.vec.f.y > pos.y)
        {
            DObjGetStruct(weapon_gobj)->translate.vec.f.y = pos.y;
        }
        mpCollisionGetUDEdgeDown(wp->coll_data.lwall_line_id, &pos);

        if (DObjGetStruct(weapon_gobj)->translate.vec.f.y < pos.y)
        {
            DObjGetStruct(weapon_gobj)->translate.vec.f.y = pos.y;
        }
        wpPikachuThunderJoltGroundMakeWeapon(weapon_gobj, &DObjGetStruct(weapon_gobj)->translate.vec.f, nMPLineKindLWall);

        return TRUE;
    }

    else if (wp->coll_data.coll_mask_current & MPCOLL_FLAG_RWALL)
    {
        func_ovl2_800F4690(wp->coll_data.rwall_line_id, &pos);

        if (DObjGetStruct(weapon_gobj)->translate.vec.f.y > pos.y)
        {
            DObjGetStruct(weapon_gobj)->translate.vec.f.y = pos.y;
        }
        func_ovl2_800F46B0(wp->coll_data.rwall_line_id, &pos);

        if (DObjGetStruct(weapon_gobj)->translate.vec.f.y < pos.y)
        {
            DObjGetStruct(weapon_gobj)->translate.vec.f.y = pos.y;
        }
        wpPikachuThunderJoltGroundMakeWeapon(weapon_gobj, &DObjGetStruct(weapon_gobj)->translate.vec.f, nMPLineKindRWall);

        return TRUE;
    }
    return FALSE;
}

// 0x8016953C
sb32 wpPikachuThunderJoltAirProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    efManagerImpactShockMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->weapon_hit.damage);

    return TRUE;
}

// 0x8016956C
sb32 wpPikachuThunderJoltAirProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel_air, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

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
    GObj *weapon_gobj = wpManagerMakeWeapon(fighter_gobj, &dWPPikachuThunderJoltAirWeaponDesc, pos, (WEAPON_FLAG_COLLPROJECT | WEAPON_FLAG_PARENT_FIGHTER));
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lifetime = WPPIKACHUJOLT_LIFETIME;

    wp->phys_info.vel_air = *vel;

    return weapon_gobj;
}

// 0x80169654
void wpPikachuThunderJoltGroundAddAnim(GObj *weapon_gobj)
{
    gcAddAnimAll
    (
        weapon_gobj, 
        lbRelocGetDataFromFile(AObjEvent32**, gFTDataPikachuSpecial3, &lWPPikachuThunderJoltAnimJoint), 
        lbRelocGetDataFromFile(AObjEvent32***, gFTDataPikachuSpecial3, &lWPPikachuThunderJoltMatAnimJoint), 
        0.0F
    );
    gcPlayAnimAll(weapon_gobj);
}

// 0x801696A0
sb32 wpPikachuThunderJoltGroundProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (weapon_gobj->anim_frame == WPPIKACHUJOLT_ANIM_PUSH_FRAME)
    {
        efManagerPikachuThunderJoltMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, DObjGetStruct(weapon_gobj)->rotate.vec.f.z);
        wpPikachuThunderJoltGroundAddAnim(weapon_gobj);
    }
    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);
        return TRUE;
    }
    wp->phys_info.vel_air.x = cosf(DObjGetStruct(weapon_gobj)->rotate.vec.f.z) * WPPIKACHUJOLTVEL;
    wp->phys_info.vel_air.y = __sinf(DObjGetStruct(weapon_gobj)->rotate.vec.f.z) * WPPIKACHUJOLTVEL;

    switch (wp->weapon_vars.thunder_jolt.line_type)
    {
    case nMPLineKindGround:
        wp->phys_info.vel_air.x *= wp->lr;
        break;

    case nMPLineKindRWall:
    case nMPLineKindLWall:
        if (wp->lr == nMPLineKindRWall)
        {
            if (wp->phys_info.vel_air.y < 0.0F)
            {
                wp->phys_info.vel_air.y *= -1.0F;
            }
        }
        if (wp->lr == nMPLineKindLWall)
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
    case nMPLineKindGround:
        if (wp->lr == nGMFacingR)
        {
            if 
            (
                (mpCollisionCheckLWallLineCollisionDiff(&wp->coll_data.pos_current, wp->coll_data.p_translate, &pos, &line_id, NULL, NULL) != FALSE) && 
                (mpCollisionGetEdgeUnderLLineID(wp->coll_data.ground_line_id) != line_id)
            )
            {
                if (mpCollisionGetLRCommonLeft(line_id, &pos, NULL, NULL, &rotate) != FALSE)
                {
                    wp->weapon_vars.thunder_jolt.line_type = nMPLineKindLWall;
                    wp->coll_data.lwall_line_id = line_id;
                    wp->lr = nGMFacingWallU;

                    DObjGetStruct(weapon_gobj)->translate.vec.f = pos;

                    wpPikachuThunderJoltGroundAddAnim(weapon_gobj);

                    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(-rotate.x, rotate.y);

                    return nWPPikachuThunderJoltStatusActive;
                }
                return nWPPikachuThunderJoltStatusDestroy;
            }
            break;
        }
        else if 
        (
            (mpCollisionCheckRWallLineCollisionDiff(&wp->coll_data.pos_current, wp->coll_data.p_translate, &pos, &line_id, NULL, NULL) != FALSE) && 
            (mpCollisionGetEdgeUnderRLineID(wp->coll_data.ground_line_id) != line_id)
        )
        {
            if (mpCollisionGetLRCommonRight(line_id, &pos, NULL, NULL, &rotate) != FALSE)
            {
                wp->weapon_vars.thunder_jolt.line_type = nMPLineKindRWall;
                wp->coll_data.rwall_line_id = line_id;
                wp->lr = nGMFacingWallU;

                DObjGetStruct(weapon_gobj)->translate.vec.f = pos;

                wpPikachuThunderJoltGroundAddAnim(weapon_gobj);

                DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(-rotate.x, rotate.y);

                return nWPPikachuThunderJoltStatusActive;
            }
            return nWPPikachuThunderJoltStatusDestroy;
        }
        break;

    case nMPLineKindLWall:
        if (wp->lr == nGMFacingWallD)
        {
            if 
            (
                (mpCollisionCheckGroundLineCollisionDiff(&wp->coll_data.pos_current, wp->coll_data.p_translate, &pos, &line_id, NULL, NULL) != FALSE) && 
                (mpCollisionGetEdgeRightULineID(wp->coll_data.lwall_line_id) != line_id)
            )
            {
                if (mpCollisionGetUDCommonUp(line_id, &pos, NULL, NULL, &rotate) != FALSE)
                {
                    wp->weapon_vars.thunder_jolt.line_type = nMPLineKindGround;
                    wp->coll_data.ground_line_id = line_id;
                    wp->lr = nGMFacingL;

                    DObjGetStruct(weapon_gobj)->translate.vec.f = pos;

                    wpPikachuThunderJoltGroundAddAnim(weapon_gobj);

                    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(-rotate.x, rotate.y);

                    return nWPPikachuThunderJoltStatusActive;
                }
                return nWPPikachuThunderJoltStatusDestroy;
            }
            break;
        }
        else if (mpCollisionCheckCeilLineCollisionDiff(&wp->coll_data.pos_current, wp->coll_data.p_translate, &pos, &line_id, NULL, NULL) != FALSE)
        {
            return nWPPikachuThunderJoltStatusDestroy;
        }
        break;

    case nMPLineKindRWall:
        if (wp->lr == nGMFacingWallD)
        {
            if 
            (
                (mpCollisionCheckGroundLineCollisionDiff(&wp->coll_data.pos_current, wp->coll_data.p_translate, &pos, &line_id, NULL, NULL) != FALSE) &&
                (mpCollisionGetEdgeLeftULineID(wp->coll_data.rwall_line_id) != line_id)
            )
            {
                if (mpCollisionGetUDCommonUp(line_id, &pos, NULL, NULL, &rotate) != FALSE)
                {
                    wp->weapon_vars.thunder_jolt.line_type = nMPLineKindGround;
                    wp->coll_data.ground_line_id = line_id;
                    wp->lr = nGMFacingR;

                    DObjGetStruct(weapon_gobj)->translate.vec.f = pos;

                    wpPikachuThunderJoltGroundAddAnim(weapon_gobj);

                    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(-rotate.x, rotate.y);

                    return nWPPikachuThunderJoltStatusActive;
                }
                return nWPPikachuThunderJoltStatusDestroy;
            }
        }
        else if (mpCollisionCheckCeilLineCollisionDiff(&wp->coll_data.pos_current, wp->coll_data.p_translate, &pos, &line_id, NULL, NULL) != FALSE)
        {
            return nWPPikachuThunderJoltStatusDestroy;
        }
        break;

    default: 
        break;
    }
    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(-wp->weapon_vars.thunder_jolt.rotate.x, wp->weapon_vars.thunder_jolt.rotate.y);

    return nWPPikachuThunderJoltStatusNull;
}

// 0x80169BF0
sb32 wpPikachuThunderJoltGroundCheckDestroy(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f angle;

    wpPikachuThunderJoltGroundAddAnim(weapon_gobj);

    switch (wp->weapon_vars.thunder_jolt.line_type)
    {
    case nMPLineKindGround:
        mpCollisionGetUDCommonUp(wp->coll_data.ground_line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f, NULL, NULL, &angle);
        break;

    case nMPLineKindLWall:
        mpCollisionGetLRCommonLeft(wp->coll_data.lwall_line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f, NULL, NULL, &angle);
        break;

    case nMPLineKindRWall:
        mpCollisionGetLRCommonRight(wp->coll_data.rwall_line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f, NULL, NULL, &angle);
        break;
    }
    if (syVectorAngleDiff3D(&angle, &wp->weapon_vars.thunder_jolt.rotate) > WPPIKACHUJOLT_ROTATE_ANGLE_MAX)
    {
        efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

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
    case nMPLineKindGround:
        if (mpCollisionCheckExistLineID(wp->coll_data.ground_line_id) == FALSE)
        {
            efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);
            return TRUE;
        }
        if (mpCollisionGetUDCommonUp(wp->coll_data.ground_line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f, &pos.x, NULL, &wp->weapon_vars.thunder_jolt.rotate) != FALSE)
        {
            DObjGetStruct(weapon_gobj)->translate.vec.f.y += pos.x;

            if (wpPikachuThunderJoltGroundGetStatus(weapon_gobj) == nWPPikachuThunderJoltStatusDestroy)
            {
                efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

                return TRUE;
            }
            return FALSE;
        }
        if (wp->lr == nGMFacingR)
        {
            line_id = mpCollisionGetEdgeUnderRLineID(wp->coll_data.ground_line_id);
        }
        else if (wp->lr == nGMFacingL)
        {
            line_id = mpCollisionGetEdgeUnderLLineID(wp->coll_data.ground_line_id);
        }
        else line_id = -1;
        
        if ((line_id == -1) || (line_id == -2))
        {
            if (wpPikachuThunderJoltGroundGetStatus(weapon_gobj) != nWPPikachuThunderJoltStatusActive)
            {
                efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

                return TRUE;
            }
            return FALSE;
        }
        coll_type = mpCollisionGetLineTypeID(line_id);

        if (wp->lr == nGMFacingR)
        {
            if (coll_type == nMPLineKindLWall)
            {
                wp->coll_data.lwall_line_id = line_id;
                wp->weapon_vars.thunder_jolt.line_type = coll_type;
                wp->lr = nGMFacingWallU;

                mpCollisionGetUDEdgeDown(line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f);

                return wpPikachuThunderJoltGroundCheckDestroy(weapon_gobj);
            }
            if (coll_type == nMPLineKindRWall)
            {
                wp->coll_data.rwall_line_id = line_id;
                wp->weapon_vars.thunder_jolt.line_type = coll_type;
                wp->lr = nGMFacingWallD;

                func_ovl2_800F4690(line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f);

                return wpPikachuThunderJoltGroundCheckDestroy(weapon_gobj);
            }
        }
        else if (coll_type == nMPLineKindLWall)
        {
            wp->coll_data.lwall_line_id = line_id;
            wp->weapon_vars.thunder_jolt.line_type = coll_type;
            wp->lr = nGMFacingWallD;

            mpCollisionGetUDEdgeUp(line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f);

            return wpPikachuThunderJoltGroundCheckDestroy(weapon_gobj);
        }
        else if (coll_type == nMPLineKindRWall)
        {
            wp->coll_data.rwall_line_id = line_id;
            wp->weapon_vars.thunder_jolt.line_type = coll_type;
            wp->lr = nGMFacingWallU;

            func_ovl2_800F46B0(line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f);

            return wpPikachuThunderJoltGroundCheckDestroy(weapon_gobj);
        }
        if (wpPikachuThunderJoltGroundGetStatus(weapon_gobj) != 1)
        {
            efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

            return TRUE;
        }
        return FALSE;

        break;

    case nMPLineKindLWall:
        if (mpCollisionCheckExistLineID(wp->coll_data.lwall_line_id) == FALSE)
        {
            efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

            return TRUE;
        }
        if (mpCollisionGetLRCommonLeft(wp->coll_data.lwall_line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f, &pos.x, NULL, &wp->weapon_vars.thunder_jolt.rotate) != FALSE)
        {
            DObjGetStruct(weapon_gobj)->translate.vec.f.x += pos.x;

            if (wpPikachuThunderJoltGroundGetStatus(weapon_gobj) == nWPPikachuThunderJoltStatusDestroy)
            {
                efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

                return TRUE;
            }
            return FALSE;
        }
        if (wp->lr == nGMFacingWallU)
        {
            line_id = mpCollisionGetEdgeRightULineID(wp->coll_data.lwall_line_id);
        }
        else line_id = mpCollisionGetEdgeRightDLineID(wp->coll_data.lwall_line_id);
        
        if ((line_id == -1) || (line_id == -2))
        {
            if (wpPikachuThunderJoltGroundGetStatus(weapon_gobj) != nWPPikachuThunderJoltStatusActive)
            {
                efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

                return TRUE;
            }
            return FALSE;
        }
        coll_type = mpCollisionGetLineTypeID(line_id);

        if (wp->lr == nGMFacingWallU)
        {
            if (coll_type == nMPLineKindGround)
            {
                wp->coll_data.ground_line_id = line_id;
                wp->weapon_vars.thunder_jolt.line_type = coll_type;
                wp->lr = nGMFacingR;

                mpCollisionGetLREdgeLeft(line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f);

                return wpPikachuThunderJoltGroundCheckDestroy(weapon_gobj);
            }
        }
        else if (coll_type == nMPLineKindGround)
        {
            wp->coll_data.ground_line_id = line_id;
            wp->weapon_vars.thunder_jolt.line_type = coll_type;
            wp->lr = nGMFacingL;

            mpCollisionGetLREdgeRight(line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f);

            return wpPikachuThunderJoltGroundCheckDestroy(weapon_gobj);
        }
        if (wpPikachuThunderJoltGroundGetStatus(weapon_gobj) != nWPPikachuThunderJoltStatusActive)
        {
            efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

            return TRUE;
        }
        return FALSE;

        break;

    case nMPLineKindRWall:
        if (mpCollisionCheckExistLineID(wp->coll_data.rwall_line_id) == FALSE)
        {
            efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

            return TRUE;
        }
        if (mpCollisionGetLRCommonRight(wp->coll_data.rwall_line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f, &pos.x, NULL, &wp->weapon_vars.thunder_jolt.rotate) != FALSE)
        {
            DObjGetStruct(weapon_gobj)->translate.vec.f.x += pos.x;

            if (wpPikachuThunderJoltGroundGetStatus(weapon_gobj) == nWPPikachuThunderJoltStatusDestroy)
            {
                efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

                return TRUE;
            }
            return FALSE;
        }
        if (wp->lr == nGMFacingWallU)
        {
            line_id = mpCollisionGetEdgeLeftULineID(wp->coll_data.rwall_line_id);
        }
        else line_id = mpCollisionGetEdgeLeftDLineID(wp->coll_data.rwall_line_id);
        
        if ((line_id == -1) || (line_id == -2))
        {
            if (wpPikachuThunderJoltGroundGetStatus(weapon_gobj) != nWPPikachuThunderJoltStatusActive)
            {
                efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

                return TRUE;
            }
            return FALSE;
        }
        coll_type = mpCollisionGetLineTypeID(line_id);

        if (wp->lr == nGMFacingWallU)
        {
            if (coll_type == nMPLineKindGround)
            {
                wp->coll_data.ground_line_id = line_id;
                wp->weapon_vars.thunder_jolt.line_type = coll_type;
                wp->lr = nGMFacingL;

                mpCollisionGetLREdgeRight(line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f);

                return wpPikachuThunderJoltGroundCheckDestroy(weapon_gobj);
            }
        }
        else if (coll_type == nMPLineKindGround)
        {
            wp->coll_data.ground_line_id = line_id;
            wp->weapon_vars.thunder_jolt.line_type = coll_type;
            wp->lr = nGMFacingR;

            mpCollisionGetLREdgeLeft(line_id, &DObjGetStruct(weapon_gobj)->translate.vec.f);

            return wpPikachuThunderJoltGroundCheckDestroy(weapon_gobj);
        }
        if (wpPikachuThunderJoltGroundGetStatus(weapon_gobj) != nWPPikachuThunderJoltStatusActive)
        {
            efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

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

    efManagerImpactShockMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->weapon_hit.damage);

    return TRUE;
}

// 0x8016A3A4
sb32 wpPikachuThunderJoltGroundProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wp->lifetime = WPPIKACHUJOLT_LIFETIME;

    wpMainReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.y = (wp->phys_info.vel_air.x >= 0.0F) ? F_CST_DTOR32(180.0F) : 0;

    wpMainVelSetLR(weapon_gobj);

    return FALSE;
}

// 0x8016A42C
GObj* wpPikachuThunderJoltGroundMakeWeapon(GObj *prev_gobj, Vec3f *pos, s32 coll_type)
{
    s32 unused[2];
    wpStruct *prev_wp = wpGetStruct(prev_gobj);
    wpStruct *new_wp;
    GObj *new_gobj = wpManagerMakeWeapon(prev_gobj, &dWPPikachuThunderJoltGroundWeaponDesc, pos, (WEAPON_FLAG_COLLPROJECT | WEAPON_FLAG_PARENT_WEAPON));

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

    gcSetAllAnimSpeed(new_gobj, 0.5F);

    wpPikachuThunderJoltGroundProcMap(new_gobj);

    switch (new_wp->weapon_vars.thunder_jolt.line_type)
    {
    case nMPLineKindGround:
        new_wp->lr = (prev_wp->phys_info.vel_air.x >= 0.0F) ? nGMFacingR : nGMFacingL;

        DObjGetStruct(new_gobj)->rotate.vec.f.y = (new_wp->lr >= 0.0F) ? F_CST_DTOR32(180.0F) : 0; // PI32
        break;

    case nMPLineKindLWall:
        if (atan2f(new_wp->weapon_vars.thunder_jolt.rotate.y, new_wp->weapon_vars.thunder_jolt.rotate.x) > F_CST_DTOR32(135.0F)) // 2.3561945F
        {
            DObjGetStruct(new_gobj)->rotate.vec.f.y = 0;
            new_wp->lr = nGMFacingWallD;
        }
        else
        {
            DObjGetStruct(new_gobj)->rotate.vec.f.y = F_CST_DTOR32(180.0F);
            new_wp->lr = nGMFacingWallU;
        }
        break;

    case nMPLineKindRWall:
        if (atan2f(new_wp->weapon_vars.thunder_jolt.rotate.y, new_wp->weapon_vars.thunder_jolt.rotate.x) > F_CST_DTOR32(45.0F)) // QUART_PI32
        {
            DObjGetStruct(new_gobj)->rotate.vec.f.y = 0;
            new_wp->lr = nGMFacingWallU;
        }
        else
        {
            DObjGetStruct(new_gobj)->rotate.vec.f.y = F_CST_DTOR32(180.0F);
            new_wp->lr = nGMFacingWallD;
        }
        break;
    }
    efManagerPikachuThunderJoltMakeEffect(&DObjGetStruct(new_gobj)->translate.vec.f, DObjGetStruct(new_gobj)->rotate.vec.f.z);
    wpMainPlaySFX(new_wp, nSYAudioFGMPikachuElectricLoop); // Bruh

    return new_gobj;
}
