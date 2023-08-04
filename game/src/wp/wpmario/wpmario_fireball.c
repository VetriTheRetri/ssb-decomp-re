#include <wp/weapon.h>
#include <ft/fighter.h>

extern void *D_ovl2_80130E3C, *D_ovl2_80130F7C;

wpMarioFireballAttributes wpMario_Fireball_WeaponAttributes[2] = 
{
    // Mario
    {
        140,                    // Lifetime
        55.0F                   // Terminal velocity
        30.0F                   // Map collision damage
        1.2F                    // Gravity
        0.85F                   // Map collision rebound velocity?
        F_DEG_TO_RAD(20.0F),    // Rotate speed (0.349065870047F)
        F_DEG_TO_RAD(-5.0F),    // Grounded launch angle (-0.0872664675117F)
        F_DEG_TO_RAD(-5.0F),    // Aerial launch angle (-0.0872664675117F)
        50.0F,                  // Base velocity
        &D_ovl2_80130E3C,       // Pointer to ???
        0x0,                    // Offset of hitbox/attributes?
        0.0F                    // Animation starting frame?
    },

    // Luigi
    {
        80,                     // Lifetime
        55.0F                   // Terminal velocity
        30.0F                   // Map collision damage
        0.0F                    // Gravity
        0.85F                   // Map collision rebound velocity?
        F_DEG_TO_RAD(25.0F),    // Rotate speed (0.436332315207F)
        F_DEG_TO_RAD(0.0F),     // Grounded launch angle (0.0F)
        F_DEG_TO_RAD(0.0F),     // Aerial launch angle (0.0F)
        36.0F,                  // Base velocity
        &D_ovl2_80130F7C,       // Pointer to ???
        0x0,                    // Offset of hitbox/attributes?
        1.0F                    // Animation starting frame?
    }
};

wpCreateDesc wpMario_Fireball_WeaponDesc =
{
    0,                                      // Render flags?
    Wp_Kind_Fireball,                       // Weapon Kind
    &D_ovl2_80130E3C,                       // Pointer to character's loaded files?
    0x0,                                    // Offset of weapon attributes in loaded files
    0x12,                                   // ???
    0x47,                                   // ???
    0,                                      // ???
    wpMario_Fireball_ProcUpdate,            // Proc Update
    wpMario_Fireball_ProcMap,               // Proc Map
    wpMario_Fireball_ProcHit,               // Proc Hit
    wpMario_Fireball_ProcHit,               // Proc Shield
    wpMario_Fireball_ProcHop,               // Proc Hop
    wpMario_Fireball_ProcHit,               // Proc Set-Off
    wpMario_Fireball_ProcReflector,         // Proc Reflector
    wpMario_Fireball_ProcHit                // Proc Absorb
};

// 0x80168540
bool32 wpMario_Fireball_ProcUpdate(GObj *weapon_gobj) // Animation
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    DObj *joint;

    if (wpMain_DecLifeCheckExpire(wp) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);

        return TRUE;
    }
    wpMain_UpdateGravityClampTVel(wp, wpMario_Fireball_WeaponAttributes[wp->weapon_vars.fireball.index].gravity, wpMario_Fireball_WeaponAttributes[wp->weapon_vars.fireball.index].fall_speed_max);

    joint = DObjGetStruct(weapon_gobj);

    joint->rotate.x += wpMario_Fireball_WeaponAttributes[wp->weapon_vars.fireball.index].rotate_speed;

    return FALSE;
}

// 0x801685F0
bool32 wpMario_Fireball_ProcMap(GObj *weapon_gobj) // Collision
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f pos;

    func_ovl3_80167A58(weapon_gobj);

    if (wpMap_CheckCollideAllRebound(weapon_gobj, MPCOLL_MASK_MAIN_ALL, wpMario_Fireball_WeaponAttributes[wp->weapon_vars.fireball.index].collide_vel, &pos) != FALSE)
    {
        if (func_ovl0_800C7A84(&wp->phys_info.vel) < wpMario_Fireball_WeaponAttributes[wp->weapon_vars.fireball.index].collide_damage)
        {
            efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);
            return TRUE;
        }
        wpMain_VelSetModelYaw(weapon_gobj);
        func_ovl2_80102DEC(&DObjGetStruct(weapon_gobj)->translate);
    }
    return FALSE;
}

// 0x801686C0
bool32 wpMario_Fireball_ProcHit(GObj *weapon_gobj) // Hit target
{
    func_800269C0(0);
    efParticle_SparkleWhite_MakeEffect(&DObjGetStruct(weapon_gobj)->translate);

    return TRUE;
}

// 0x801686F8
bool32 wpMario_Fireball_ProcHop(GObj *weapon_gobj) // Hit shield at deflect angle
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel, &wp->shield_collide_vec, wp->shield_collide_angle * 2);
    wpMain_VelSetModelYaw(weapon_gobj);

    return FALSE;
}

// 0x80168748
bool32 wpMario_Fireball_ProcReflector(GObj *weapon_gobj) // Hit reflector
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wp->lifetime = wpMario_Fireball_WeaponAttributes[wp->weapon_vars.fireball.index].lifetime;

    wpMain_ReflectorSetLR(wp, fp);
    wpMain_VelSetModelYaw(weapon_gobj);

    return FALSE;
}

// 0x801687A0
GObj* wpMario_Fireball_MakeWeapon(GObj *fighter_gobj, Vec3f *pos, s32 index) // Create item
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *weapon_gobj;
    wpStruct *wp;
    f32 angle;

    wpMario_Fireball_WeaponDesc.p_item = wpMario_Fireball_WeaponAttributes[index].p_item;
    wpMario_Fireball_WeaponDesc.offset = wpMario_Fireball_WeaponAttributes[index].offset;

    weapon_gobj = wpManager_MakeWeapon(fighter_gobj, &wpMario_Fireball_WeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->weapon_vars.fireball.index = index;

    wp->lifetime = wpMario_Fireball_WeaponAttributes[index].lifetime;

    angle = (fp->ground_or_air == GA_Air) ? wpMario_Fireball_WeaponAttributes[index].angle_air : wpMario_Fireball_WeaponAttributes[index].angle_ground;

    wp->phys_info.vel_air.z = 0.0F;

    wp->phys_info.vel_air.x = wpMario_Fireball_WeaponAttributes[index].vel_base * cosf(angle) * fp->lr;
    wp->phys_info.vel_air.y = wpMario_Fireball_WeaponAttributes[index].vel_base * __sinf(angle);

    DObjGetStruct(weapon_gobj)->mobj->anim_frame = wpMario_Fireball_WeaponAttributes[index].anim_frame;

    wpMain_VelSetModelYaw(weapon_gobj);

    return weapon_gobj;
}
