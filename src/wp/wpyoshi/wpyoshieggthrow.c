#include <wp/weapon.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t 
lWPYoshiEggThrowWeaponAttributes;           // 0x0000000C

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

wpCreateDesc dWPYoshiEggThrowWeaponDesc =
{
    0x00,                                   // Render flags?
    nWPKindEggThrow,                       // Weapon Kind
    &gFTDataYoshiMain,                      // Pointer to character's loaded files?
    &lWPYoshiEggThrowWeaponAttributes,      // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        0x2E,                               // Secondary matrix transformations?
        0                                   // ???
    },

    wpYoshiEggThrowProcUpdate,              // Proc Update
    wpYoshiEggThrowProcMap,                 // Proc Map
    wpYoshiEggThrowProcHit,                 // Proc Hit
    wpYoshiEggThrowProcHit,                 // Proc Shield
    wpYoshiEggThrowProcHop,                 // Proc Hop
    wpYoshiEggThrowProcHit,                 // Proc Set-Off
    wpYoshiEggThrowProcReflector,           // Proc Reflector
    NULL                                    // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8016BF50
sb32 wpYoshiEggThrowProcDead(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wp->weapon_vars.egg_throw.is_throw == FALSE)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x8016BF74
sb32 wpYoshiEggExplodeProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8016BFA0
void wpYoshiEggHitInitWeaponVars(GObj *weapon_gobj) // Egg Throw explodes from landing successfully
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    wp->lifetime = WPEGGTHROW_EXPLODE_LIFETIME;

    wp->weapon_hit.can_hop = FALSE;
    wp->weapon_hit.can_reflect = FALSE;

    wp->phys_info.vel_air.x = wp->phys_info.vel_air.y = wp->phys_info.vel_air.z = 0.0F;

    wp->weapon_hit.size = WPEGGTHROW_EXPLODE_SIZE;

    DObjGetStruct(weapon_gobj)->display_list = NULL;

    wp->proc_update = wpYoshiEggExplodeProcUpdate;
    wp->proc_map = NULL;
    wp->proc_hit = NULL;
    wp->proc_shield = NULL;
    wp->proc_hop = NULL;
    wp->proc_setoff = NULL;
    wp->proc_reflector = NULL;
}

// 0x8016C00C
void wpYoshiEggExpireInitWeaponVars(GObj *weapon_gobj) // Egg Throw explodes from expiring 
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    wp->lifetime = WPEGGTHROW_EXPLODE_LIFETIME;

    wp->weapon_hit.can_reflect = FALSE;
    wp->weapon_hit.can_shield = FALSE;

    wp->phys_info.vel_air.x = wp->phys_info.vel_air.y = wp->phys_info.vel_air.z = 0.0F;

    wp->weapon_hit.size = WPEGGTHROW_EXPLODE_SIZE;

    DObjGetStruct(weapon_gobj)->display_list = NULL;

    wp->proc_update = wpYoshiEggExplodeProcUpdate;
    wp->proc_map = NULL;
    wp->proc_hit = NULL;
    wp->proc_shield = NULL;
    wp->proc_hop = NULL;
    wp->proc_setoff = NULL;
    wp->proc_reflector = NULL;
}

// 0x8016C07C
void wpYoshiEggThrowInitWeaponVars(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    f32 angle = ABS(wp->weapon_vars.egg_throw.stick_range) / WPEGGTHROW_TRAJECTORY_DIV;

    if (angle > 1.0F)
    {
        angle = 1.0F;
    }

    angle *= WPEGGTHROW_ANGLE_MUL;

    if (angle < WPEGGTHROW_ANGLE_CLAMP)
    {
        angle = 0.0F;
    }

    angle *= ((wp->weapon_vars.egg_throw.stick_range < 0) ? nGMFacingL : nGMFacingR);

    angle = (wp->weapon_vars.egg_throw.lr > 0) ? (WPEGGTHROW_TRAJECTORY_SUB_FORWARD - angle) : (WPEGGTHROW_TRAJECTORY_SUB_BEHIND - angle);

    wp->phys_info.vel_air.y = __sinf(angle) * ((wp->weapon_vars.egg_throw.throw_force * WPEGGTHROW_VEL_FORCE_MUL) + WPEGGTHROW_VEL_ADD);
    wp->phys_info.vel_air.x = __cosf(angle) * ((wp->weapon_vars.egg_throw.throw_force * WPEGGTHROW_VEL_FORCE_MUL) + WPEGGTHROW_VEL_ADD);

    wp->weapon_vars.egg_throw.angle = F_CLC_DTOR32((wp->weapon_vars.egg_throw.throw_force * WPEGGTHROW_ANGLE_FORCE_MUL) + WPEGGTHROW_ANGLE_ADD);

    DObjGetStruct(weapon_gobj)->translate.vec.f.z = 0.0F;

    wp->weapon_hit.update_state = nGMHitUpdateNew;

    wpProcessUpdateHitPositions(weapon_gobj);
}

// 0x8016C218
sb32 wpYoshiEggThrowProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wp->weapon_vars.egg_throw.is_spin != FALSE)
    {
        if (wpMainDecLifeCheckExpire(wp) != FALSE)
        {
            func_800269C0_275C0(nSYAudioFGMYoshiEggShatter1);

            efManagerYoshiEggExplodeMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);
            efManagerEggBreakMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

            wpYoshiEggExpireInitWeaponVars(weapon_gobj);

            return FALSE;
        }
        else
        {
            DObjGetStruct(weapon_gobj)->rotate.vec.f.z += wp->weapon_vars.egg_throw.angle;
            wpMainApplyGravityClampTVel(wp, WPEGGTHROW_GRAVITY, WPEGGTHROW_TVEL);

            return FALSE;
        }
    }
    else if (wp->weapon_vars.egg_throw.is_throw != FALSE)
    {
        wp->weapon_vars.egg_throw.is_spin = TRUE;

        wpYoshiEggThrowInitWeaponVars(weapon_gobj);
    }
    return FALSE;
}

// 0x8016C2E0
sb32 wpYoshiEggThrowProcMap(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if ((wp->weapon_vars.egg_throw.is_spin != FALSE) && (wpMapTestAllCheckCollEnd(weapon_gobj) != FALSE))
    {
        efManagerQuakeMakeEffect(2);

        func_800269C0_275C0(nSYAudioFGMYoshiEggShatter1);

        efManagerYoshiEggExplodeMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);
        efManagerEggBreakMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

        efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

        wpYoshiEggHitInitWeaponVars(weapon_gobj);
    }
    return FALSE;
}

// 0x8016C374
sb32 wpYoshiEggThrowProcHit(GObj *weapon_gobj)
{
    func_800269C0_275C0(nSYAudioFGMYoshiEggShatter1);

    efManagerYoshiEggExplodeMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);
    efManagerEggBreakMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

    wpYoshiEggHitInitWeaponVars(weapon_gobj);

    return FALSE;
}

// 0x8016C3B4
sb32 wpYoshiEggThrowProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel_air, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

    wpMainVelSetModelPitch(weapon_gobj);

    return FALSE;
}

// 0x8016C404
sb32 wpYoshiEggThrowProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wp->lifetime = WPEGGTHROW_LIFETIME;

    wpMainReflectorSetLR(wp, fp);
    wpMainVelSetModelPitch(weapon_gobj);

    return FALSE;
}

// 0x8016C444
void wpYoshiEggThrowProcDisplay(GObj *weapon_gobj)
{
    gDPPipeSync(gSYProgDLHeads[1]++);

    gDPSetEnvColor(gSYProgDLHeads[1]++, 0x00, 0x00, 0x00, 0x00);

    wpDisplayDLHead1(weapon_gobj);
}

// 0x8016C498
GObj* wpYoshiEggThrowMakeWeapon(GObj *fighter_gobj, Vec3f *pos)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *weapon_gobj = wpManagerMakeWeapon(fighter_gobj, &dWPYoshiEggThrowWeaponDesc, pos, WEAPON_FLAG_PARENT_FIGHTER);
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }

    wp = wpGetStruct(weapon_gobj);

    weapon_gobj->proc_display = wpYoshiEggThrowProcDisplay;

    wp->weapon_vars.egg_throw.is_throw = FALSE;

    wp->proc_dead = wpYoshiEggThrowProcDead;

    wp->lifetime = WPEGGTHROW_LIFETIME;

    wp->weapon_hit.update_state = nGMHitUpdateDisable;

    wp->is_camera_follow = TRUE;

    wp->phys_info.vel_air.x = wp->phys_info.vel_air.y = 0.0F;

    wp->weapon_vars.egg_throw.is_spin = wp->weapon_vars.egg_throw.is_throw;
    wp->weapon_vars.egg_throw.lr = fp->lr;

    return weapon_gobj;
}
