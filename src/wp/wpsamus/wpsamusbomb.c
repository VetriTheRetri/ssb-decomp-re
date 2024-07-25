#include <wp/weapon.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t 
lWPSamusBombWeaponAttributes;               // 0x0000000C

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

wpCreateDesc dWPSamusBombWeaponDesc =
{
    0x00,                                   // Render flags?
    Wp_Kind_SamusBomb,                      // Weapon Kind
    &gFTDataSamusMain,                      // Pointer to character's loaded files?
    &lWPSamusBombWeaponAttributes,          // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_Tra,                // Main matrix transformations
        0x46,                               // Secondary matrix transformations?
        0                                   // ???
    },

    wpSamusBombProcUpdate,                  // Proc Update
    wpSamusBombProcMap,                     // Proc Map
    wpSamusBombProcHit,                     // Proc Hit
    wpSamusBombProcHit,                     // Proc Shield
    wpSamusBombProcHop,                     // Proc Hop
    wpSamusBombProcHit,                     // Proc Set-Off
    wpSamusBombProcReflector,               // Proc Reflector
    wpSamusBombProcAbsorb                   // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80168F00
sb32 wpSamusBombExplodeProcUpdate(GObj *weapon_gobj)
{
    if (wpMainDecLifeCheckExpire(wpGetStruct(weapon_gobj)) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80168F2C
void wpSamusBombExplodeInitWeaponVars(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    wp->lifetime = WPSAMUSBOMB_EXPLODE_LIFETIME;

    wp->weapon_hit.can_rehit_item = TRUE;
    wp->weapon_hit.can_hop = FALSE;

    wp->phys_info.vel_air.x = wp->phys_info.vel_air.y = wp->phys_info.vel_air.z = 0.0F;

    wp->weapon_hit.size = WPSAMUSBOMB_EXPLODE_SIZE;

    DObjGetStruct(weapon_gobj)->display_ptr = NULL;

    wp->proc_update = wpSamusBombExplodeProcUpdate;
    wp->proc_map = NULL;
    wp->proc_hit = NULL;
    wp->proc_shield = NULL;
    wp->proc_hop = NULL;
    wp->proc_setoff = NULL;
    wp->proc_reflector = NULL;
}

// 0x80168F98
sb32 wpSamusBombProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        efManagerSparkleWhiteMultiExplodeMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);
        wpSamusBombExplodeInitWeaponVars(weapon_gobj);
        func_800269C0_275C0(alSound_SFX_ExplodeS);

        return FALSE;
    }
    else
    {
        if (wp->ground_or_air == GA_Air)
        {
            wpMainApplyGClampTVel(wp, WPSAMUSBOMB_WAIT_GRAVITY, WPSAMUSBOMB_WAIT_T_VEL);
            DObjGetStruct(weapon_gobj)->rotate.vec.f.z -= (WPSAMUSBOMB_WAIT_ROTATE_SPEED_AIR * wp->lr);
        }
        else
        {
            wpMainVelGroundTransferAir(weapon_gobj);
            DObjGetStruct(weapon_gobj)->rotate.vec.f.z -= (WPSAMUSBOMB_WAIT_ROTATE_SPEED_GROUND * wp->lr);
        }
        wp->weapon_vars.samus_bomb.bomb_blink_timer--;

        if (wp->weapon_vars.samus_bomb.bomb_blink_timer == 0)
        {
            MObj *mobj = DObjGetStruct(weapon_gobj)->mobj;

            mobj->image_frame = (mobj->image_frame != 0) ? 0.0F : 1.0F;

            if (wp->lifetime > WPSAMUSBOMB_WAIT_BLINK_SLOW)
            {
                wp->weapon_vars.samus_bomb.bomb_blink_timer = WPSAMUSBOMB_WAIT_BLINK_TIMER_SLOW;
            }
            else if (wp->lifetime > WPSAMUSBOMB_WAIT_BLINK_MID)
            {
                wp->weapon_vars.samus_bomb.bomb_blink_timer = WPSAMUSBOMB_WAIT_BLINK_TIMER_MID;
            }
            else wp->weapon_vars.samus_bomb.bomb_blink_timer = WPSAMUSBOMB_WAIT_BLINK_TIMER_FAST;
        }
    }
    return FALSE;
}

// 0x80169108
sb32 wpSamusBombProcMap(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f *vel;
    sb32 is_collide;

    if (wp->ground_or_air == GA_Air)
    {
        is_collide = wpMapTestAllCheckGround(weapon_gobj);

        if (wpMapCheckAllRebound(weapon_gobj, (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL), WPSAMUSBOMB_WAIT_COLLIDE_MOD_VEL, NULL) != FALSE)
        {
            wpMainVelSetLR(weapon_gobj);
        }
        if (is_collide != FALSE)
        {
            vel = &wp->phys_info.vel_air;

            func_ovl0_800C7B08(vel, &wp->coll_data.ground_angle);
            func_ovl0_800C7AE0(vel, 0.6F);
            wpMainVelSetLR(weapon_gobj);

            if (func_ovl0_800C7A84(vel) < 8.0F)
            {
                wpMapSetGround(wp);
            }
        }
    }
    else if (wpMapTestLRWallCheckGround(weapon_gobj) == FALSE)
    {
        wpMapSetAir(wp);
    }
    return FALSE;
}

// 0x801691FC
sb32 wpSamusBombProcHit(GObj *weapon_gobj)
{
    func_800269C0_275C0(alSound_SFX_ExplodeS);
    efManagerSparkleWhiteMultiExplodeMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);
    wpSamusBombExplodeInitWeaponVars(weapon_gobj);

    return FALSE;
}

// 0x8016923C
sb32 wpSamusBombProcAbsorb(GObj *weapon_gobj)
{
    func_800269C0_275C0(alSound_SFX_ExplodeS);
    efManagerSparkleWhiteMultiExplodeMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

    return TRUE;
}

// 0x80169274
sb32 wpSamusBombProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel_air, &wp->shield_collide_vec, wp->shield_collide_angle * 2);
    wpMainVelSetLR(weapon_gobj);

    return FALSE;
}

// 0x801692C4
sb32 wpSamusBombProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wp->lifetime = WPSAMUSBOMB_WAIT_LIFETIME;

    if (wp->ground_or_air == GA_Air)
    {
        wpMainReflectorSetLR(wp, fp);
        wpMainVelSetLR(weapon_gobj);
    }
    else wp->lr = fp->lr;
    
    return FALSE;
}

// 0x80169328
GObj* wpSamusBombMakeWeapon(GObj *fighter_gobj, Vec3f *pos)
{
    GObj *weapon_gobj = wpManagerMakeWeapon(fighter_gobj, &dWPSamusBombWeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lifetime = WPSAMUSBOMB_WAIT_LIFETIME;

    wp->weapon_vars.samus_bomb.bomb_blink_timer = WPSAMUSBOMB_WAIT_BLINK_TIMER_SLOW;

    wp->phys_info.vel_air.y = WPSAMUSBOMB_WAIT_VEL_Y;

    return weapon_gobj;
}
