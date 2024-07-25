#include <wp/weapon.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t 
lWPKirbyCutterWeaponAttributes;             // 0x00000008

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

wpCreateDesc dWPKirbyCutterWeaponDesc =
{
    0x03,                                   // Render flags?
    Wp_Kind_Cutter,                         // Weapon Kind
    &gFTDataKirbyMain,                      // Pointer to character's loaded files?
    &lWPKirbyCutterWeaponAttributes,        // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    wpKirbyCutterProcUpdate,                // Proc Update
    wpKirbyCutterProcMap,                   // Proc Map
    wpKirbyCutterProcHit,                   // Proc Hit
    wpKirbyCutterProcShield,                // Proc Shield
    NULL,                                   // Proc Hop
    wpKirbyCutterProcSetOff,                // Proc Set-Off
    wpKirbyCutterProcReflector,             // Proc Reflector
    wpKirbyCutterProcShield                 // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8016BC50
sb32 wpKirbyCutterProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

        return TRUE;
    }
    else if (wp->ground_or_air == GA_Ground)
    {
        DObjGetStruct(weapon_gobj)->rotate.vec.f.z = -atan2f(wp->coll_data.ground_angle.x, wp->coll_data.ground_angle.y);
    }
    return FALSE;
}

// 0x8016BCC8
sb32 wpKirbyCutterProcMap(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wp->ground_or_air == GA_Air)
    {
        if (wpMapTestAllCheckGround(weapon_gobj) == TRUE)
        {
            wpMapSetGround(wp);
        }
    }
    else if (wpMapTestLRWallCheckGround(weapon_gobj) == FALSE)
    {
        wpMapSetAir(wp);

        wp->phys_info.vel_air.x = __cosf(DObjGetStruct(weapon_gobj)->rotate.vec.f.z) * wp->phys_info.vel_ground;
        wp->phys_info.vel_air.y = __sinf(DObjGetStruct(weapon_gobj)->rotate.vec.f.z) * wp->phys_info.vel_ground;

        if (DObjGetStruct(weapon_gobj)->rotate.vec.f.y < 0.0F)
        {
            wp->phys_info.vel_air.x = -wp->phys_info.vel_air.x;
            wp->phys_info.vel_air.y = -wp->phys_info.vel_air.y;
        }
    }

    if (wp->coll_data.coll_mask_curr & (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL))
    {
        efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

        return TRUE;
    }
    else return FALSE;
}

// 0x8016BDD0
sb32 wpKirbyCutterProcHit(GObj *weapon_gobj)
{
    func_800269C0_275C0(alSound_SFX_ExplodeS);
    efManagerSparkleWhiteMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

    return FALSE;
}

// 0x8016BE08
sb32 wpKirbyCutterProcShield(GObj *weapon_gobj)
{
    return FALSE;
}

// 0x8016BE14
sb32 wpKirbyCutterProcSetOff(GObj *weapon_gobj)
{
    func_800269C0_275C0(alSound_SFX_ExplodeS);
    efManagerSparkleWhiteMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

    return TRUE;
}

// 0x8016BE4C
sb32 wpKirbyCutterProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wp->lifetime = WPFINALCUTTER_LIFETIME;

    wpMainReflectorSetLR(wp, fp);
    wpMainVelSetModelPitch(weapon_gobj);

    return FALSE;
}

// 0x8016BE8C
GObj* wpKirbyCutterMakeWeapon(GObj *fighter_gobj, Vec3f *pos)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *weapon_gobj = wpManagerMakeWeapon(fighter_gobj, &dWPKirbyCutterWeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lifetime = WPFINALCUTTER_LIFETIME;

    wp->phys_info.vel_air.x = wp->lr * WPFINALCUTTER_VEL;

    if (mpCollision_GetUDCommonUp(fp->coll_data.ground_line_id, pos, NULL, NULL, &wp->coll_data.ground_angle) != FALSE)
    {
        wp->coll_data.ground_line_id = fp->coll_data.ground_line_id;

        wpMapSetGround(wp);
    }
    wpMainVelSetModelPitch(weapon_gobj);

    return weapon_gobj;
}
