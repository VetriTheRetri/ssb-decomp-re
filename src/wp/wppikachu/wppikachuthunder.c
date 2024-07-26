#include <wp/weapon.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t 
lWPPikachuThunderHeadWeaponAttributes;          // 0x0000000C
extern intptr_t 
lWPPikachuThunderTrailWeaponAttributes;         // 0x00000040

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

wpCreateDesc dWPPikachuThunderHeadWeaponDesc =
{
    0x02,                                       // Render flags?
    nWPKindThunderHead,                        // Weapon Kind
    &gFTDataPikachuMain,                        // Pointer to character's loaded files?
    &lWPPikachuThunderHeadWeaponAttributes,     // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        nOMTransformTraRotRpyRSca,          // Main matrix transformations
        nOMTransformNull,                   // Secondary matrix transformations?
        0                                       // ???
    },

    wpPikachuThunderHeadProcUpdate,             // Proc Update
    wpPikachuThunderHeadProcMap,                // Proc Map
    NULL,                                       // Proc Hit
    NULL,                                       // Proc Shield
    NULL,                                       // Proc Hop
    NULL,                                       // Proc Set-Off
    NULL,                                       // Proc Reflector
    NULL                                        // Proc Absorb
};

wpCreateDesc dWPPikachuThunderTrailWeaponDesc =
{
    0x02,                                       // Render flags?
    nWPKindThunderTrail,                       // Weapon Kind
    &gFTDataPikachuMain,                        // Pointer to character's loaded files?
    &lWPPikachuThunderTrailWeaponAttributes,    // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        nOMTransformTraRotRpyRSca,          // Main matrix transformations
        nOMTransformNull,                   // Secondary matrix transformations?
        0                                       // ???
    },

    wpPikachuThunderTrailProcUpdate,            // Proc Update
    NULL,                                       // Proc Map
    wpPikachuThunderTrailProcHit,               // Proc Hit
    wpPikachuThunderTrailProcHit,               // Proc Shield
    NULL,                                       // Proc Hop
    wpPikachuThunderTrailProcHit,               // Proc Set-Off
    NULL,                                       // Proc Reflector
    wpPikachuThunderTrailProcHit                // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8016A640
void wpPikachuThunderHeadSetDestroy(GObj *weapon_gobj, sb32 is_destroy)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (!(wp->weapon_vars.thunder.thunder_state & wpPikachuThunder_Status_Destroy))
    {
        ftStruct *fp = ftGetStruct(wp->owner_gobj);

        if (fp->player_number == wp->player_number) // Check number of player that spawned Thunder
        {
            fp->fighter_vars.pikachu.is_thunder_destroy |= is_destroy;
        }
    }
}

// 0x8016A680
void wpPikachuThunderHeadMakeTrailEffect(GObj *weapon_gobj, s32 arg1)
{
    s32 unused;
    Vec3f pos;

    pos.x = DObjGetStruct(weapon_gobj)->translate.vec.f.x;
    pos.y = DObjGetStruct(weapon_gobj)->translate.vec.f.y;
    pos.z = 0.0F;

    if (arg1 == 3)
    {
        efManagerPikachuThunderTrailMakeEffect(&pos, 10, 3);
    }
    else if (arg1 == -1)
    {
        efManagerPikachuThunderTrailMakeEffect(&pos, 6, 0);
    }
    else wpPikachuThunderTrailMakeWeapon(weapon_gobj, &pos);
}

// 0x8016A700
sb32 wpPikachuThunderHeadProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wp->weapon_vars.thunder.thunder_state == wpPikachuThunder_Status_Collide)
    {
        wpPikachuThunderHeadMakeTrailEffect(weapon_gobj, 3);

        return TRUE;
    }
    else if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);
        wpPikachuThunderHeadSetDestroy(weapon_gobj, TRUE);
        wpPikachuThunderHeadMakeTrailEffect(weapon_gobj, 3);

        return TRUE;
    }
    else wpPikachuThunderHeadMakeTrailEffect(weapon_gobj, 0);

    return FALSE;
}

// 0x8016A794
sb32 wpPikachuThunderHeadProcMap(GObj *weapon_gobj)
{
    if (wpMapTestAllCheckCollEnd(weapon_gobj) != FALSE)
    {
        wpPikachuThunderHeadSetDestroy(weapon_gobj, TRUE);
        efManagerQuakeMakeEffect(1);
        efManagerSparkleWhiteMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

        return TRUE;
    }
    return FALSE;
}

// 0x8016A7E8
sb32 wpPikachuThunderHeadProcDead(GObj *weapon_gobj)
{
    wpPikachuThunderHeadSetDestroy(weapon_gobj, TRUE);

    return TRUE;
}

// 0x8016A80C
GObj* wpPikachuThunderHeadMakeWeapon(GObj *fighter_gobj, Vec3f *pos, Vec3f *vel)
{
    s32 unused;
    GObj *weapon_gobj = wpManagerMakeWeapon(fighter_gobj, &dWPPikachuThunderHeadWeaponDesc, pos, WEAPON_MASK_SPAWN_FIGHTER);
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->proc_dead = wpPikachuThunderHeadProcDead;

    wp->lifetime = WPPIKACHUTHUNDER_SPAWN_LIFETIME;

    wp->phys_info.vel_air = *vel;

    wp->weapon_hit.update_state = nGMHitUpdateDisable;
    wp->weapon_vars.thunder.thunder_state = wpPikachuThunder_Status_Active;

    wp->group_id = wpManagerGetGroupIndexInc();

    DObjGetStruct(weapon_gobj)->mobj->current_image_id = 3;

    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 0.5F;
    DObjGetStruct(weapon_gobj)->scale.vec.f.y = 0.5F;
    DObjGetStruct(weapon_gobj)->scale.vec.f.z = 0.5F;

    return weapon_gobj;
}

// 0x8016A8D8
sb32 wpPikachuThunderTrailProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        return TRUE;
    }
    else if (wp->lifetime < WPPIKACHUTHUNDER_EXPIRE)
    {
        wpPikachuThunderHeadMakeTrailEffect(weapon_gobj, -1);

        return TRUE;
    }
    else DObjGetStruct(weapon_gobj)->mobj->current_image_id = mtTrigGetRandomIntRange(WPPIKACHUTHUNDER_TEXTURE_COUNT - 1);

    return FALSE;
}

// 0x8016A950
sb32 wpPikachuThunderTrailProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    efManagerImpactShockMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->weapon_hit.damage);

    return FALSE;
}

// 0x8016A980
GObj* wpPikachuThunderTrailMakeWeapon(GObj *weapon_gobj, Vec3f *pos)
{
    s32 unused[2];
    wpStruct *spawn_wp = wpGetStruct(weapon_gobj);
    GObj *trail_gobj = wpManagerMakeWeapon(weapon_gobj, &dWPPikachuThunderTrailWeaponDesc, pos, WEAPON_MASK_SPAWN_WEAPON);
    wpStruct *trail_wp;
    s32 i;

    if (trail_gobj == NULL)
    {
        return NULL;
    }
    trail_wp = wpGetStruct(trail_gobj);

    trail_wp->lifetime = WPPIKACHUTHUNDER_TRAIL_LIFETIME;
    trail_wp->group_id = spawn_wp->group_id;

    for (i = 0; i < ARRAY_COUNT(spawn_wp->weapon_hit.hit_targets); i++)
    {
        trail_wp->weapon_hit.hit_targets[i] = spawn_wp->weapon_hit.hit_targets[i];
    }
    DObjGetStruct(trail_gobj)->scale.vec.f.x = 0.5F;
    DObjGetStruct(trail_gobj)->scale.vec.f.y = 0.5F;
    DObjGetStruct(trail_gobj)->scale.vec.f.z = 0.5F;

    return trail_gobj;
}
