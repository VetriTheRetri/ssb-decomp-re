#include <wp/weapon.h>
#include <ft/fighter.h>

extern void *D_ovl2_80131070;

wpCreateDesc wpKirby_Cutter_WeaponDesc =
{
    3,                                      // Render flags?
    Wp_Kind_Cutter,                         // Weapon Kind
    &D_ovl2_80131070,                       // Pointer to character's loaded files?
    0x8,                                    // Offset of weapon attributes in loaded files
    0x1C,                                   // ???
    0,                                      // ???
    0,                                      // ???
    wpKirby_Cutter_ProcUpdate,              // Proc Update
    wpKirby_Cutter_ProcMap,                 // Proc Map
    wpKirby_Cutter_ProcHit,                 // Proc Hit
    wpKirby_Cutter_ProcShield,              // Proc Shield
    NULL,                                   // Proc Hop
    wpKirby_Cutter_ProcSetOff,              // Proc Set-Off
    wpKirby_Cutter_ProcReflector,           // Proc Reflector
    wpKirby_Cutter_ProcShield               // Proc Absorb
};

// 0x8016BC50
bool32 wpKirby_Cutter_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wpMain_DecLifeCheckExpire(wp) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);

        return TRUE;
    }
    else if (wp->ground_or_air == GA_Ground)
    {
        DObjGetStruct(weapon_gobj)->rotate.z = -atan2f(wp->coll_data.ground_angle.x, wp->coll_data.ground_angle.y);
    }
    return FALSE;
}

// 0x8016BCC8
bool32 wpKirby_Cutter_ProcMap(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wp->ground_or_air == GA_Air)
    {
        if (func_ovl3_80167B58(weapon_gobj) == TRUE)
        {
            wpMap_SetGround(wp);
        }
    }
    else if (func_ovl3_8016796C(weapon_gobj) == FALSE)
    {
        wpMap_SetAir(wp);

        wp->phys_info.vel_air.x = cosf(DObjGetStruct(weapon_gobj)->rotate.z) * wp->phys_info.vel_ground;
        wp->phys_info.vel_air.y = __sinf(DObjGetStruct(weapon_gobj)->rotate.z) * wp->phys_info.vel_ground;

        if (DObjGetStruct(weapon_gobj)->rotate.y < 0.0F)
        {
            wp->phys_info.vel_air.x = -wp->phys_info.vel_air.x;
            wp->phys_info.vel_air.y = -wp->phys_info.vel_air.y;
        }
    }

    if (wp->coll_data.coll_mask & (MPCOLL_MASK_CEIL | MPCOLL_MASK_LWALL | MPCOLL_MASK_RWALL))
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);

        return TRUE;
    }
    else return FALSE;
}

// 0x8016BDD0
bool32 wpKirby_Cutter_ProcHit(GObj *weapon_gobj)
{
    func_800269C0(0U);
    efParticle_SparkleWhite_MakeEffect(&DObjGetStruct(weapon_gobj)->translate);

    return FALSE;
}

// 0x8016BE08
bool32 wpKirby_Cutter_ProcShield(GObj *weapon_gobj)
{
    return FALSE;
}

// 0x8016BE14
bool32 wpKirby_Cutter_ProcSetOff(GObj *weapon_gobj)
{
    func_800269C0(0U);
    efParticle_SparkleWhite_MakeEffect(&DObjGetStruct(weapon_gobj)->translate);

    return TRUE;
}

// 0x8016BE4C
bool32 wpKirby_Cutter_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wp->lifetime = WPFINALCUTTER_LIFETIME;

    wpMain_ReflectorSetLR(wp, fp);
    func_ovl3_80167FA0(weapon_gobj);

    return FALSE;
}

// 0x8016BE8C
GObj* wpKirby_Cutter_MakeWeapon(GObj *fighter_gobj, Vec3f *pos)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *weapon_gobj = wpManager_MakeWeapon(fighter_gobj, &wpKirby_Cutter_WeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lifetime = WPFINALCUTTER_LIFETIME;

    wp->phys_info.vel_air.x = wp->lr * WPFINALCUTTER_VEL;

    if (mpCollision_GetUUCommonUp(fp->coll_data.ground_line_id, pos, NULL, NULL, &wp->coll_data.ground_angle) != FALSE)
    {
        wp->coll_data.ground_line_id = fp->coll_data.ground_line_id;

        wpMap_SetGround(wp);
    }
    func_ovl3_80167FA0(weapon_gobj);

    return weapon_gobj;
}