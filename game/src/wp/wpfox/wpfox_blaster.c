#include <wp/weapon.h>
#include <ft/fighter.h>

extern void *gFtDataFoxExtra1;

wpCreateDesc dWpFoxBlasterWeaponDesc = 
{
    0x00,                                   // Render flags?
    Wp_Kind_Blaster,                        // Weapon Kind
    &gFtDataFoxExtra1,                      // Pointer to character's loaded files?
    0,                                      // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    wpFoxBlasterProcUpdate,                 // Proc Update
    wpFoxBlasterProcMap,                    // Proc Map
    wpFoxBlasterProcHit,                    // Proc Hit
    wpFoxBlasterProcHit,                    // Proc Shield
    wpFoxBlasterProcHop,                    // Proc Hop
    wpFoxBlasterProcHit,                    // Proc Set-Off
    wpFoxBlasterProcReflector,              // Proc Reflector
    wpFoxBlasterProcHit                     // Proc Absorb
};

// 0x801688D0
sb32 wpFoxBlasterProcUpdate(GObj *weapon_gobj)
{
    if (DObjGetStruct(weapon_gobj)->scale.vec.f.x < WPBLASTER_CLAMP_SCALE_X)
    {
        DObjGetStruct(weapon_gobj)->scale.vec.f.x += WPBLASTER_ADD_SCALE_X;

        if (DObjGetStruct(weapon_gobj)->scale.vec.f.x > WPBLASTER_CLAMP_SCALE_X)
        {
            DObjGetStruct(weapon_gobj)->scale.vec.f.x = WPBLASTER_CLAMP_SCALE_X;
        }
    }
    return FALSE;
}

// 0x80168924
sb32 wpFoxBlasterProcMap(GObj *weapon_gobj)
{
    if (wpMapTestAllCheckCollEnd(weapon_gobj) != FALSE)
    {
        efParticle_FoxBlasterGlow_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

        return TRUE;
    }
    else return FALSE;
}

// 0x80168964
sb32 wpFoxBlasterProcHit(GObj *weapon_gobj)
{
    efParticle_FoxBlasterGlow_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

    return TRUE;
}

// 0x8016898C
sb32 wpFoxBlasterProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    efParticle_FoxBlasterGlow_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

    return FALSE;
}

// 0x80168A14
sb32 wpFoxBlasterProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wpMainReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    return FALSE;
}

// 0x80168A74
GObj* wpFoxBlasterMakeWeapon(GObj *fighter_gobj, Vec3f *pos)
{
    wpStruct *wp;
    GObj *weapon_gobj = wpManagerMakeWeapon(fighter_gobj, &dWpFoxBlasterWeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->phys_info.vel_air.x = wp->lr * WPBLASTER_VEL_X;

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);

    efParticle_FoxBlasterGlow_MakeEffect(pos);

    return weapon_gobj;
}