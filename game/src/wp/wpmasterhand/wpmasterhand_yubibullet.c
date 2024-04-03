#include <wp/weapon.h>
#include <ft/fighter.h>

extern void *gFtDataBossBattleMotion;

wpCreateDesc dWpBossYubiBulletNormalWeaponDesc =
{
    0x01,                                   // Render flags?
    Wp_Kind_YubiBulletNormal,               // Weapon Kind
    &gFtDataBossBattleMotion,                       // Pointer to character's loaded files?
    0x774,                                  // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0,                                  // ???
    },

    NULL,                                   // Proc Update
    wpBossYubiBulletProcMap,        // Proc Map
    wpBossYubiBulletProcHit,        // Proc Hit
    wpBossYubiBulletProcHit,        // Proc Shield
    wpBossYubiBulletProcHop,        // Proc Hop
    wpBossYubiBulletProcHit,        // Proc Set-Off
    wpBossYubiBulletProcReflector,  // Proc Reflector
    wpBossYubiBulletProcHit         // Proc Absorb
};

wpCreateDesc dWpBossYubiBulletHardWeaponDesc =
{
    0x01,                                   // Render flags?
    Wp_Kind_YubiBulletHard,                 // Weapon Kind
    &gFtDataBossBattleMotion,                       // Pointer to character's loaded files?
    0x7A8,                                  // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0,                                  // ???
    },

    NULL,                                   // Proc Update
    wpBossYubiBulletProcMap,        // Proc Map
    wpBossYubiBulletProcHit,        // Proc Hit
    wpBossYubiBulletProcHit,        // Proc Shield
    wpBossYubiBulletProcHop,        // Proc Hop
    wpBossYubiBulletProcHit,        // Proc Set-Off
    wpBossYubiBulletProcReflector,  // Proc Reflector
    wpBossYubiBulletProcHit         // Proc Absorb
};

// 0x8016DC00
sb32 wpBossYubiExplodeProcUpdate(GObj *weapon_gobj)
{
    if (wpMainDecLifeCheckExpire(wpGetStruct(weapon_gobj)) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
} 

// 0x8016DC2C
void wpBossYubiExplodeInitWeaponVars(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    wp->weapon_hit.hit_sfx = alSound_SFX_ExplodeL;

    wp->weapon_hit.can_rehit_item = TRUE;
    wp->weapon_hit.can_hop = FALSE;
    wp->weapon_hit.can_reflect = FALSE;

    wp->weapon_hit.element = gmHitCollision_Element_Fire;

    wp->lifetime = WPYUBIBULLET_EXPLODE_LIFETIME;

    wp->phys_info.vel_air.x = wp->phys_info.vel_air.y = wp->phys_info.vel_air.z = 0.0F;

    wp->weapon_hit.size = WPYUBIBULLET_EXPLODE_SIZE;

    DObjGetStruct(weapon_gobj)->display_ptr = NULL;

    wp->proc_update = wpBossYubiExplodeProcUpdate;
    wp->proc_map = NULL;
    wp->proc_hit = NULL;
    wp->proc_shield = NULL;
    wp->proc_hop = NULL;
    wp->proc_setoff = NULL;
    wp->proc_reflector = NULL;
}

// 0x8016DCB0
sb32 wpBossYubiBulletProcMap(GObj *weapon_gobj)
{
    if (wpMapTestAllCheckCollEnd(weapon_gobj) != FALSE)
    {
        wpBossYubiExplodeInitWeaponVars(weapon_gobj);
        func_800269C0(alSound_SFX_ExplodeS);
        efParticle_SparkleWhiteMultiExplode_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

        return TRUE;
    }
    else return FALSE;
}

// 0x8016DD04
sb32 wpBossYubiBulletProcHit(GObj *weapon_gobj)
{
    efParticle_SparkleWhiteMultiExplode_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

    return TRUE;
}

// 0x8016DD2C
sb32 wpBossYubiBulletProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel, &wp->shield_collide_vec, wp->shield_collide_angle * 2);
    wpMainReflectorRotateWeaponModel(weapon_gobj);

    return FALSE;
}

// 0x8016DD7C
sb32 wpBossYubiBulletProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wpMainReflectorSetLR(wp, fp);
    wpMainReflectorRotateWeaponModel(weapon_gobj);

    return FALSE;
}

// 0x8016DDB4
GObj* wpBossYubiBulletNormalMakeWeapon(GObj *fighter_gobj, Vec3f *pos)
{
    GObj *weapon_gobj = wpManagerMakeWeapon(fighter_gobj, &dWpBossYubiBulletNormalWeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->phys_info.vel_air.x = WPYUBIBULLET_VEL_X * wp->lr;
    wp->phys_info.vel_air.y = WPYUBIBULLET_VEL_Y;

    wpMainReflectorRotateWeaponModel(weapon_gobj);

    return weapon_gobj;
}

// 0x8016DE28
GObj* wpBossYubiBulletHardMakeWeapon(GObj *fighter_gobj, Vec3f *pos)
{
    GObj *weapon_gobj = wpManagerMakeWeapon(fighter_gobj, &dWpBossYubiBulletHardWeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->phys_info.vel_air.x = WPYUBIBULLET_VEL_X * wp->lr;
    wp->phys_info.vel_air.y = WPYUBIBULLET_VEL_Y;

    wpMainReflectorRotateWeaponModel(weapon_gobj);

    return weapon_gobj;
}