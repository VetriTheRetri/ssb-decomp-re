#include <wp/weapon.h>
#include <ft/fighter.h>

extern void *D_ovl2_80130E9C;

wpCreateDesc wpFox_Blaster_WeaponDesc = 
{
    0,                                      // Render flags?
    Wp_Kind_Blaster,                        // Weapon Kind
    &D_ovl2_80130E9C,                       // Pointer to character's loaded files?
    0,                                      // Offset of weapon attributes in loaded files
    0x1C,                                   // ???
    0,                                      // ???
    0,                                      // ???
    wpFox_Blaster_ProcUpdate,               // Proc Update
    wpFox_Blaster_ProcMap,                  // Proc Map
    wpFox_Blaster_ProcHit,                  // Proc Hit
    wpFox_Blaster_ProcHit,                  // Proc Shield
    wpFox_Blaster_ProcHop,                  // Proc Hop
    wpFox_Blaster_ProcHit,                  // Proc Set-Off
    wpFox_Blaster_ProcReflector,            // Proc Reflector
    wpFox_Blaster_ProcHit                   // Proc Absorb
};

// 0x801688D0
bool32 wpFox_Blaster_ProcUpdate(GObj *weapon_gobj)
{
    if (DObjGetStruct(weapon_gobj)->scale.x < 53.333332F)
    {
        DObjGetStruct(weapon_gobj)->scale.x += 5.3333335F;

        if (DObjGetStruct(weapon_gobj)->scale.x > 53.333332F)
        {
            DObjGetStruct(weapon_gobj)->scale.x = 53.333332F;
        }
    }
    return FALSE;
}

// 0x80168924
bool32 wpFox_Blaster_ProcMap(GObj *weapon_gobj)
{
    if (func_ovl3_80167C04(weapon_gobj) != FALSE)
    {
        func_ovl2_80103320(&DObjGetStruct(weapon_gobj)->translate);

        return TRUE;
    }
    else return FALSE;
}

// 0x80168964
bool32 wpFox_Blaster_ProcHit(GObj *weapon_gobj)
{
    func_ovl2_80103320(&DObjGetStruct(weapon_gobj)->translate);

    return TRUE;
}

// 0x8016898C
bool32 wpFox_Blaster_ProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.x = 1.0F;

    func_ovl2_80103320(&DObjGetStruct(weapon_gobj)->translate);

    return FALSE;
}

// 0x80168A14
bool32 wpFox_Blaster_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wpMain_ReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.x = 1.0F;

    return FALSE;
}

// 0x80168A74
GObj* wpFox_Blaster_MakeWeapon(GObj *fighter_gobj, Vec3f *pos)
{
    wpStruct *wp;
    GObj *weapon_gobj = wpManager_MakeWeapon(fighter_gobj, &wpFox_Blaster_WeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->phys_info.vel_air.x = wp->lr * WPBLASTER_VEL_X;

    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);

    func_ovl2_80103320(pos);

    return weapon_gobj;
}