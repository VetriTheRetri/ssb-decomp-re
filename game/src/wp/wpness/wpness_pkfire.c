#include <wp/weapon.h>
#include <ft/fighter.h>

extern void *D_ovl2_8013113C;

wpCreateDesc wpNess_PKFire_WeaponDesc =
{
    0,                                      // Render flags?
    Wp_Kind_PKFire,                         // Weapon Kind
    &D_ovl2_8013113C,                       // Pointer to character's loaded files?
    0x0,                                    // Offset of weapon attributes in loaded files
    0x12,                                   // ???
    0x2E,                                   // ???
    0,                                      // ???
    wpNess_PKFire_ProcUpdate,               // Proc Update
    wpNess_PKFire_ProcMap,                  // Proc Map
    wpNess_PKFire_ProcHit,                  // Proc Hit
    wpNess_PKFire_ProcAbsorb,               // Proc Shield
    wpNess_PKFire_ProcHop,                  // Proc Hop
    wpNess_PKFire_ProcHit,                  // Proc Set-Off
    wpNess_PKFire_ProcReflector,            // Proc Reflector
    wpNess_PKFire_ProcAbsorb                // Proc Absorb
};

// 0x8016AA40
bool32 wpNess_PKFire_ProcUpdate(GObj *weapon_gobj)
{
    if (wpMain_DecLifeCheckExpire(wpGetStruct(weapon_gobj)) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);

        return TRUE;
    }
    else return FALSE;
}

// 0x8016AA88
bool32 wpNess_PKFire_ProcMap(GObj *weapon_gobj)
{
    if (func_ovl3_80167C04(weapon_gobj) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);

        return TRUE;
    }
    else return FALSE;
}

// 0x8016AACC
bool32 wpNess_PKFire_ProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f pos;
    Vec3f vel;

    vel.x = 0.0F;
    vel.y = 0.0F;
    vel.z = 0.0F;

    pos = wp->phys_info.vel;

    vec3f_normalize(&pos);

    pos.x = (pos.x * WPPKFIRE_VEL_MUL) + DObjGetStruct(weapon_gobj)->translate.x;
    pos.y = (pos.y * WPPKFIRE_VEL_MUL) + DObjGetStruct(weapon_gobj)->translate.y;
    pos.z = (pos.z * WPPKFIRE_VEL_MUL) + DObjGetStruct(weapon_gobj)->translate.z;

    itNess_PKFire_MakeItem(weapon_gobj, &pos, &vel);

    return TRUE;
}

// 0x8016AB84
bool32 wpNess_PKFire_ProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel, &wp->shield_collide_vec, wp->shield_collide_angle * 2);
    wpMain_VelSetLR(weapon_gobj);

    DObjGetStruct(weapon_gobj)->rotate.z *= -1.0F;

    return FALSE;
}

// 0x8016ABF0
bool32 wpNess_PKFire_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wp->lifetime = WPPKFIRE_LIFETIME;

    wpMain_ReflectorSetLR(wp, fp);
    wpMain_VelSetLR(weapon_gobj);

    DObjGetStruct(weapon_gobj)->rotate.z *= -1.0F;

    return FALSE;
}

// 0x8016AC4C
bool32 wpNess_PKFire_ProcAbsorb(GObj *weapon_gobj)
{
    efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);

    return TRUE;
}

// 0x8016AC78
GObj* wpNess_PKFire_MakeWeapon(GObj *fighter_gobj, Vec3f *pos, Vec3f *vel, f32 angle)
{
    s32 unused;
    GObj *weapon_gobj = wpManager_MakeWeapon(fighter_gobj, &wpNess_PKFire_WeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lifetime = WPPKFIRE_LIFETIME;

    wp->phys_info.vel = *vel;

    wpMain_VelSetLR(weapon_gobj);

    DObjGetStruct(weapon_gobj)->rotate.z = (angle + F_DEG_TO_RAD(90.0F)) * wp->lr; // HALF_PI32

    return weapon_gobj;
}