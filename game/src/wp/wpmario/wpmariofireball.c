#include <wp/weapon.h>
#include <ft/fighter.h>

extern void *gFTDataMarioSpecial1;
extern void *gFTDataLuigiSpecial1;
extern intptr_t
lWPMariroFireballWeaponAttributes;          // 0x00000000

wpMarioFireballAttributes dWPMarioFireballWeaponAttributes[/* */] = 
{
    // Mario
    {
        140,                                // Lifetime
        55.0F,                              // Terminal velocity
        30.0F,                              // Map collision damage
        1.2F,                               // Gravity
        0.85F,                              // Map collision rebound velocity?
        F_DEG_TO_RAD(20.0F),                // Rotate speed (0.349065870047F)
        F_DEG_TO_RAD(-5.0F),                // Grounded launch angle (-0.0872664675117F)
        F_DEG_TO_RAD(-5.0F),                // Aerial launch angle (-0.0872664675117F)
        50.0F,                              // Base velocity
        &gFTDataMarioSpecial1,                // Pointer to ???
        0x0,                                // Offset of hitbox/attributes?
        0.0F                                // Animation starting frame?
    },

    // Luigi
    {
        80,                                 // Lifetime
        55.0F,                              // Terminal velocity
        30.0F,                              // Map collision damage
        0.0F,                               // Gravity
        0.85F,                              // Map collision rebound velocity?
        F_DEG_TO_RAD(25.0F),                // Rotate speed (0.436332315207F)
        F_DEG_TO_RAD(0.0F),                 // Grounded launch angle (0.0F)
        F_DEG_TO_RAD(0.0F),                 // Aerial launch angle (0.0F)
        36.0F,                              // Base velocity
        &gFTDataLuigiSpecial1,                // Pointer to ???
        0x0,                                // Offset of hitbox/attributes?
        1.0F                                // Animation starting frame?
    }
};

wpCreateDesc dWPMarioFireballWeaponDesc =
{
    0x00,                                   // Render flags?
    Wp_Kind_Fireball,                       // Weapon Kind
    &gFTDataMarioSpecial1,                    // Pointer to character's loaded files?
    &lWPMariroFireballWeaponAttributes,     // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_Tra,                // Main matrix transformations
        0x47,                               // Secondary matrix transformations?
        0                                   // ???
    },

    wpMarioFireballProcUpdate,              // Proc Update
    wpMarioFireballProcMap,                 // Proc Map
    wpMarioFireballProcHit,                 // Proc Hit
    wpMarioFireballProcHit,                 // Proc Shield
    wpMarioFireballProcHop,                 // Proc Hop
    wpMarioFireballProcHit,                 // Proc Set-Off
    wpMarioFireballProcReflector,           // Proc Reflector
    wpMarioFireballProcHit                  // Proc Absorb
};

// 0x80168540
sb32 wpMarioFireballProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    DObj *dobj;

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

        return TRUE;
    }
    wpMainApplyGClampTVel(wp, dWPMarioFireballWeaponAttributes[wp->weapon_vars.fireball.index].gravity, dWPMarioFireballWeaponAttributes[wp->weapon_vars.fireball.index].vel_terminal);

    dobj = DObjGetStruct(weapon_gobj);

    dobj->rotate.vec.f.x += dWPMarioFireballWeaponAttributes[wp->weapon_vars.fireball.index].rotate_speed;

    return FALSE;
}

// 0x801685F0
sb32 wpMarioFireballProcMap(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f pos;

    wpMapTestAll(weapon_gobj);

    if (wpMapCheckAllRebound(weapon_gobj, MPCOLL_KIND_MAIN_MASK, dWPMarioFireballWeaponAttributes[wp->weapon_vars.fireball.index].collide_rebound, &pos) != FALSE)
    {
        if (func_ovl0_800C7A84(&wp->phys_info.vel) < dWPMarioFireballWeaponAttributes[wp->weapon_vars.fireball.index].vel_min)
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
sb32 wpMarioFireballProcHit(GObj *weapon_gobj)
{
    func_800269C0(alSound_SFX_ExplodeS);
    efParticle_SparkleWhite_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

    return TRUE;
}

// 0x801686F8
sb32 wpMarioFireballProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel, &wp->shield_collide_vec, wp->shield_collide_angle * 2);
    wpMainVelSetModelPitch(weapon_gobj);

    return FALSE;
}

// 0x80168748
sb32 wpMarioFireballProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wp->lifetime = dWPMarioFireballWeaponAttributes[wp->weapon_vars.fireball.index].lifetime;

    wpMainReflectorSetLR(wp, fp);
    wpMainVelSetModelPitch(weapon_gobj);

    return FALSE;
}

// 0x801687A0
GObj* wpMarioFireballMakeWeapon(GObj *fighter_gobj, Vec3f *pos, s32 index)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *weapon_gobj;
    wpStruct *wp;
    f32 angle;

    dWPMarioFireballWeaponDesc.p_weapon = dWPMarioFireballWeaponAttributes[index].p_weapon;
    dWPMarioFireballWeaponDesc.offset = dWPMarioFireballWeaponAttributes[index].offset;

    weapon_gobj = wpManagerMakeWeapon(fighter_gobj, &dWPMarioFireballWeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->weapon_vars.fireball.index = index;

    wp->lifetime = dWPMarioFireballWeaponAttributes[index].lifetime;

    angle = (fp->ground_or_air == GA_Air) ? dWPMarioFireballWeaponAttributes[index].angle_air : dWPMarioFireballWeaponAttributes[index].angle_ground;

    wp->phys_info.vel_air.z = 0.0F;

    wp->phys_info.vel_air.x = dWPMarioFireballWeaponAttributes[index].vel_base * cosf(angle) * fp->lr;
    wp->phys_info.vel_air.y = dWPMarioFireballWeaponAttributes[index].vel_base * __sinf(angle);

    DObjGetStruct(weapon_gobj)->mobj->image_frame = dWPMarioFireballWeaponAttributes[index].anim_frame;

    wpMainVelSetModelPitch(weapon_gobj);

    return weapon_gobj;
}
