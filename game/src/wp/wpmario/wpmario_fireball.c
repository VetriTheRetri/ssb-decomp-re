#include <wp/weapon.h>
#include <ft/fighter.h>

extern void *D_ovl2_80130E3C, *D_ovl2_80130F7C;

wpMarioFireballAttributes dWpMarioFireballWeaponAttributes[/* */] = 
{
    // Mario
    {
        140,                    // Lifetime
        55.0F,                  // Terminal velocity
        30.0F,                  // Map collision damage
        1.2F,                   // Gravity
        0.85F,                  // Map collision rebound velocity?
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
        55.0F,                  // Terminal velocity
        30.0F,                  // Map collision damage
        0.0F,                   // Gravity
        0.85F,                  // Map collision rebound velocity?
        F_DEG_TO_RAD(25.0F),    // Rotate speed (0.436332315207F)
        F_DEG_TO_RAD(0.0F),     // Grounded launch angle (0.0F)
        F_DEG_TO_RAD(0.0F),     // Aerial launch angle (0.0F)
        36.0F,                  // Base velocity
        &D_ovl2_80130F7C,       // Pointer to ???
        0x0,                    // Offset of hitbox/attributes?
        1.0F                    // Animation starting frame?
    }
};

wpCreateDesc dWpMarioFireballWeaponDesc =
{
    0x00,                                   // Render flags?
    Wp_Kind_Fireball,                       // Weapon Kind
    &D_ovl2_80130E3C,                       // Pointer to character's loaded files?
    0x0,                                    // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_Tra,                // Main matrix transformations
        0x47,                               // Secondary matrix transformations?
        0,                                  // ???
    },

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
sb32 wpMario_Fireball_ProcUpdate(GObj *weapon_gobj) // Animation
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    DObj *joint;

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

        return TRUE;
    }
    wpMainApplyGClampTVel(wp, dWpMarioFireballWeaponAttributes[wp->weapon_vars.fireball.index].gravity, dWpMarioFireballWeaponAttributes[wp->weapon_vars.fireball.index].vel_terminal);

    joint = DObjGetStruct(weapon_gobj);

    joint->rotate.vec.f.x += dWpMarioFireballWeaponAttributes[wp->weapon_vars.fireball.index].rotate_speed;

    return FALSE;
}

// 0x801685F0
sb32 wpMario_Fireball_ProcMap(GObj *weapon_gobj) // Collision
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f pos;

    wpMapTestAll(weapon_gobj);

    if (wpMapCheckAllRebound(weapon_gobj, MPCOLL_KIND_MAIN_MASK, dWpMarioFireballWeaponAttributes[wp->weapon_vars.fireball.index].collide_rebound, &pos) != FALSE)
    {
        if (func_ovl0_800C7A84(&wp->phys_info.vel) < dWpMarioFireballWeaponAttributes[wp->weapon_vars.fireball.index].vel_min)
        {
            efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);
            return TRUE;
        }
        wpMainVelSetModelPitch(weapon_gobj);

        efParticle_FireGrind_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);
    }
    return FALSE;
}

// 0x801686C0
sb32 wpMario_Fireball_ProcHit(GObj *weapon_gobj) // Hit target
{
    func_800269C0(alSound_SFX_ExplodeS);
    efParticle_SparkleWhite_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

    return TRUE;
}

// 0x801686F8
sb32 wpMario_Fireball_ProcHop(GObj *weapon_gobj) // Hit shield at deflect angle
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel, &wp->shield_collide_vec, wp->shield_collide_angle * 2);
    wpMainVelSetModelPitch(weapon_gobj);

    return FALSE;
}

// 0x80168748
sb32 wpMario_Fireball_ProcReflector(GObj *weapon_gobj) // Hit reflector
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wp->lifetime = dWpMarioFireballWeaponAttributes[wp->weapon_vars.fireball.index].lifetime;

    wpMainReflectorSetLR(wp, fp);
    wpMainVelSetModelPitch(weapon_gobj);

    return FALSE;
}

// 0x801687A0
GObj* wpMario_Fireball_MakeWeapon(GObj *fighter_gobj, Vec3f *pos, s32 index) // Create item
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *weapon_gobj;
    wpStruct *wp;
    f32 angle;

    dWpMarioFireballWeaponDesc.p_weapon = dWpMarioFireballWeaponAttributes[index].p_weapon;
    dWpMarioFireballWeaponDesc.offset = dWpMarioFireballWeaponAttributes[index].offset;

    weapon_gobj = wpManagerMakeWeapon(fighter_gobj, &dWpMarioFireballWeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->weapon_vars.fireball.index = index;

    wp->lifetime = dWpMarioFireballWeaponAttributes[index].lifetime;

    angle = (fp->ground_or_air == GA_Air) ? dWpMarioFireballWeaponAttributes[index].angle_air : dWpMarioFireballWeaponAttributes[index].angle_ground;

    wp->phys_info.vel_air.z = 0.0F;

    wp->phys_info.vel_air.x = dWpMarioFireballWeaponAttributes[index].vel_base * cosf(angle) * fp->lr;
    wp->phys_info.vel_air.y = dWpMarioFireballWeaponAttributes[index].vel_base * __sinf(angle);

    DObjGetStruct(weapon_gobj)->mobj->image_frame = dWpMarioFireballWeaponAttributes[index].anim_frame;

    wpMainVelSetModelPitch(weapon_gobj);

    return weapon_gobj;
}
