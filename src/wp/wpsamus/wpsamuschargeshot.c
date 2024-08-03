#include <wp/weapon.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t 
lWPSamusChargeShotWeaponAttributes;         // 0x00000000

extern alSoundEffect* func_800269C0_275C0(u16);
extern void ftParamPlayLoopSFX(ftStruct*, u16);

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

wpSamusChargeShotAttributes dWPSamusChargeShotWeaponAttributes[/* */] =
{
    // Level 0 (Uncharged)
    {
        150.0F,                             // Sprite size
        60.0F,                              // X-Velocity
        3,                                  // Damage
        100,                                // Hitbox size
        10,                                 // Object collision size
        nGMSoundFGMSamusSpecialNShootS,    // Shoot SFX
        nGMSoundFGMSamusSpecialNCharge0,   // Charge SFX
        nGMSoundFGMShockS,                 // Hit SFX
        1                                   // Priority
    },

    // Level 1
    {
        230.0F,                             // Sprite size
        62.0F,                              // X-Velocity
        6,                                  // Damage
        120,                                // Hitbox size
        10,                                 // Object collision size
        nGMSoundFGMSamusSpecialNShootS,    // Shoot SFX
        nGMSoundFGMSamusSpecialNCharge1,   // Charge SFX
        nGMSoundFGMShockS,                 // Hit SFX
        1                                   // Priority
    },

    // Level 2
    {
        280.0F,                             // Sprite size
        64.0F,                              // X-Velocity
        9,                                  // Damage
        140,                                // Hitbox size
        10,                                 // Object collision size
        nGMSoundFGMSamusSpecialNShootM,    // Shoot SFX
        nGMSoundFGMSamusSpecialNCharge2,   // Charge SFX
        nGMSoundFGMShockM,                 // Hit SFX
        1                                   // Priority
    },

    // Level 3
    {
        340.0F,                             // Sprite size
        66.0F,                              // X-Velocity
        12,                                 // Damage
        160,                                // Hitbox size
        10,                                 // Object collision size
        nGMSoundFGMSamusSpecialNShootM,    // Shoot SFX
        nGMSoundFGMSamusSpecialNCharge3,   // Charge SFX
        nGMSoundFGMShockM,                 // Hit SFX
        1                                   // Priority
    },

    // Level 4
    {
        410.0F,                             // Sprite size
        68.0F,                              // X-Velocity
        15,                                 // Damage
        180,                                // Hitbox size
        10,                                 // Object collision size
        nGMSoundFGMSamusSpecialNShootM,    // Shoot SFX
        nGMSoundFGMSamusSpecialNCharge4,   // Charge SFX
        nGMSoundFGMShockM,                 // Hit SFX
        1                                   // Priority
    },

    // Level 5
    {
        490.0F,                             // Sprite size
        70.0F,                              // X-Velocity
        18,                                 // Damage
        200,                                // Hitbox size
        10,                                 // Object collision size
        nGMSoundFGMSamusSpecialNShootL,    // Shoot SFX
        nGMSoundFGMSamusSpecialNCharge5,   // Charge SFX
        nGMSoundFGMShockL,                 // Hit SFX
        1                                   // Priority
    },

    // Level 6
    {
        600.0F,                             // Sprite size
        72.0F,                              // X-Velocity
        21,                                 // Damage
        240,                                // Hitbox size
        10,                                 // Object collision size
        nGMSoundFGMSamusSpecialNShootL,    // Shoot SFX
        nGMSoundFGMSamusSpecialNCharge6,   // Charge SFX
        nGMSoundFGMShockL,                 // Hit SFX
        1                                   // Priority
    },

    // Level 7 (Full charge)
    {
        700.0F,                             // Sprite size
        74.0F,                              // X-Velocity
        26,                                 // Damage
        260,                                // Hitbox size
        10,                                 // Object collision size
        nGMSoundFGMSamusSpecialNShootF,    // Shoot SFX
        nGMSoundFGMSamusSpecialNCharge7,   // Charge SFX
        nGMSoundFGMShockL,                 // Hit SFX
        2                                   // Priority
    }
};

wpCreateDesc dWPSamusChargeShotWeaponDesc =
{
    0x00,                                   // Render flags?
    nWPKindChargeShot,                     // Weapon Kind
    &gFTDataSamusSpecial1,                    // Pointer to character's loaded files?
    &lWPSamusChargeShotWeaponAttributes,    // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        nOMTransformTra,                // Main matrix transformations
        0x2E,                               // Secondary matrix transformations?
        0                                   // ???
    },

    wpSamusChargeShotProcUpdate,            // Proc Update
    wpSamusChargeShotProcMap,               // Proc Map
    wpSamusChargeShotProcHit,               // Proc Hit
    wpSamusChargeShotProcHit,               // Proc Shield
    wpSamusChargeShotProcHop,               // Proc Hop
    wpSamusChargeShotProcHit,               // Proc Set-Off
    wpSamusChargeShotProcReflector,         // Proc Reflector
    wpSamusChargeShotProcHit                // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80168B00
void wpSamusChargeShotLaunch(GObj *weapon_gobj) // Set Charge Shot's attributes upon firing
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    f32 coll_size;

    wp->phys_info.vel_air.x = dWPSamusChargeShotWeaponAttributes[wp->weapon_vars.charge_shot.charge_size].vel_x * wp->lr;

    wp->weapon_hit.damage = dWPSamusChargeShotWeaponAttributes[wp->weapon_vars.charge_shot.charge_size].damage;
    wp->weapon_hit.size = dWPSamusChargeShotWeaponAttributes[wp->weapon_vars.charge_shot.charge_size].hit_size * 0.5F;

    coll_size = dWPSamusChargeShotWeaponAttributes[wp->weapon_vars.charge_shot.charge_size].coll_size * 0.5F;

    wp->coll_data.object_coll.width = coll_size;
    wp->coll_data.object_coll.top = coll_size;
    wp->coll_data.object_coll.bottom = -coll_size;

    func_800269C0_275C0(dWPSamusChargeShotWeaponAttributes[wp->weapon_vars.charge_shot.charge_size].shoot_sfx_id);

    wp->weapon_hit.hit_sfx = dWPSamusChargeShotWeaponAttributes[wp->weapon_vars.charge_shot.charge_size].hit_sfx_id;
    wp->weapon_hit.priority = dWPSamusChargeShotWeaponAttributes[wp->weapon_vars.charge_shot.charge_size].priority;

    wp->weapon_vars.charge_shot.owner_gobj = NULL;
}

// 0x80168BDC
sb32 wpSamusChargeShotProcDead(GObj *weapon_gobj) // Clear GObj pointers
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wp->weapon_vars.charge_shot.owner_gobj != NULL) // Always NULL though?
    {
        ftStruct *fp = ftGetStruct(wp->weapon_vars.charge_shot.owner_gobj);

        fp->status_vars.samus.specialn.charge_gobj = NULL; // This would quite problematic if Samus and Kirby's SpecialN statevar structs deviated...
    }
    return TRUE;
}

// 0x80168BFC
sb32 wpSamusChargeShotProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wp->weapon_vars.charge_shot.is_release == FALSE)
    {
        DObjGetStruct(weapon_gobj)->scale.vec.f.x =
        DObjGetStruct(weapon_gobj)->scale.vec.f.y = dWPSamusChargeShotWeaponAttributes[wp->weapon_vars.charge_shot.charge_size].gfx_size / WPCHARGESHOT_GFX_SIZE_DIV;

        if (wp->weapon_vars.charge_shot.is_full_charge != FALSE)
        {
            wp->weapon_vars.charge_shot.is_release = TRUE;

            wpSamusChargeShotLaunch(weapon_gobj);

            wp->weapon_hit.update_state = nGMHitUpdateNew;

            wpProcessUpdateHitPositions(weapon_gobj);
        }
    }
    DObjGetStruct(weapon_gobj)->rotate.vec.f.z -= WPCHARGESHOT_ROTATE_SPEED * wp->lr;

    return FALSE;
}

// 0x80168CC4
sb32 wpSamusChargeShotProcMap(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wp->weapon_vars.charge_shot.is_release != FALSE)
    {
        // If Charge Shot has been fired, begin checking for collision

        if (wpMapTestAllCheckCollEnd(weapon_gobj) != FALSE) 
        {
            efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

            return TRUE;
        }
        else return FALSE; // Redundant return here lol
    }
    else return FALSE;
}

// 0x80168D24
sb32 wpSamusChargeShotProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    efManagerImpactShockMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->weapon_hit.damage);

    return TRUE;
}

// 0x80168D54
sb32 wpSamusChargeShotProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel_air, &wp->shield_collide_vec, wp->shield_collide_angle * 2);
    wpMainVelSetLR(weapon_gobj);

    return FALSE;
}

// 0x80168DA4
sb32 wpSamusChargeShotProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wpMainReflectorSetLR(wp, fp);
    wpMainVelSetLR(weapon_gobj);

    return FALSE;
}

// 0x80168DDC
GObj* wpSamusChargeShotMakeWeapon(GObj *fighter_gobj, Vec3f *pos, s32 charge_level, sb32 is_release) 
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *weapon_gobj = wpManagerMakeWeapon(fighter_gobj, &dWPSamusChargeShotWeaponDesc, pos, (is_release != FALSE) ? (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER) : WEAPON_MASK_SPAWN_FIGHTER);
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->weapon_vars.charge_shot.is_release = is_release;
    wp->weapon_vars.charge_shot.charge_size = charge_level;

    if (is_release != FALSE)
    {
        wpSamusChargeShotLaunch(weapon_gobj);
    }
    else
    {
        wp->weapon_hit.update_state = nGMHitUpdateDisable;
        wp->weapon_vars.charge_shot.is_full_charge = FALSE;

        wp->weapon_vars.charge_shot.owner_gobj = fighter_gobj;

        ftParamPlayLoopSFX(fp, dWPSamusChargeShotWeaponAttributes[wp->weapon_vars.charge_shot.charge_size].charge_sfx_id);
    }
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = DObjGetStruct(weapon_gobj)->scale.vec.f.y = dWPSamusChargeShotWeaponAttributes[charge_level].gfx_size / WPCHARGESHOT_GFX_SIZE_DIV;

    wp->proc_dead = wpSamusChargeShotProcDead;

    return weapon_gobj;
}
