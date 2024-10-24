#include <wp/weapon.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t 
lWPLinkSpinAttackWeaponAttributes;          // 0x0000000C

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

wpCreateDesc dWPLinkSpinAttackWeaponDesc =
{
    0x03,                                   // Render flags?
    nWPKindSpinAttack,                     // Weapon Kind
    &gFTDataLinkMain,                       // Pointer to character's loaded files?
    &lWPLinkSpinAttackWeaponAttributes,     // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        nGCTransformTraRotRpyRSca,      // Main matrix transformations
        nGCTransformNull,               // Secondary matrix transformations?
        0                                   // ???
    },

    wpLinkSpinAttackProcUpdate,             // Proc Update
    wpLinkSpinAttackProcMap,                // Proc Map
    wpLinkSpinAttackProcHit,                // Proc Hit
    wpLinkSpinAttackProcHit,                // Proc Shield
    NULL,                                   // Proc Hop
    wpLinkSpinAttackProcHit,                // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8016C9A0
void func_ovl3_8016C9A0(void) // Unused
{
    return;
}

// 0x8016C9A8
sb32 wpLinkSpinAttackProcDead(GObj *weapon_gobj)
{
    return FALSE;
}

// 0x8016C9B4
sb32 wpLinkSpinAttackProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    f32 sqrt_vel;
    f32 mod_vel;

    if (wp->weapon_vars.spin_attack.is_destroy != FALSE)
    {
        return TRUE;
    }

    sqrt_vel = sqrtf(SQUARE(wp->weapon_vars.spin_attack.vel.x) + SQUARE(wp->weapon_vars.spin_attack.vel.y));

    if (sqrt_vel > 0.0F)
    {
        if (sqrt_vel < WPSPINATTACK_VEL_CLAMP)
        {
            mod_vel = 0.0F;
        }
        else mod_vel = sqrt_vel - WPSPINATTACK_VEL_CLAMP;
        
        wp->weapon_vars.spin_attack.vel.x = (wp->weapon_vars.spin_attack.vel.x * mod_vel) / sqrt_vel;
        wp->weapon_vars.spin_attack.vel.y = (wp->weapon_vars.spin_attack.vel.y * mod_vel) / sqrt_vel;

        wp->weapon_hit.offset[0].x += wp->weapon_vars.spin_attack.vel.x; // TO DO: this might not be an array at all, loops don't match when indexed with iterator
        wp->weapon_hit.offset[0].y += wp->weapon_vars.spin_attack.vel.y;
        wp->weapon_hit.offset[1].x -= wp->weapon_vars.spin_attack.vel.x;
        wp->weapon_hit.offset[1].y += wp->weapon_vars.spin_attack.vel.y;
    }
    return FALSE;
}

// 0x8016CA9C
sb32 wpLinkSpinAttackProcMap(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    f32 pos_x, pos_y;
    s32 index = (wp->weapon_vars.spin_attack.pos_index + 1) % WPSPINATTACK_EXTEND_POS_COUNT;

    pos_x = wp->weapon_vars.spin_attack.pos_x[index];
    pos_y = wp->weapon_vars.spin_attack.pos_y[index];

    pos_y += WPSPINATTACK_OFF_Y;

    wp->phys_info.vel_air.x = pos_x - DObjGetStruct(weapon_gobj)->translate.vec.f.x;
    wp->phys_info.vel_air.y = pos_y - DObjGetStruct(weapon_gobj)->translate.vec.f.y;

    return FALSE;
}

// 0x8016CB10
sb32 wpLinkSpinAttackProcHit(GObj *weapon_gobj)
{
    return FALSE;
}

// 0x8016CB1C
GObj* wpLinkSpinAttackMakeWeapon(GObj *fighter_gobj, Vec3f *pos)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *weapon_gobj;
    wpStruct *wp;
    Vec3f offset = *pos;

    offset.y += WPSPINATTACK_OFF_Y;

    weapon_gobj = wpManagerMakeWeapon(fighter_gobj, &dWPLinkSpinAttackWeaponDesc, &offset, WEAPON_FLAG_PARENT_FIGHTER);

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->weapon_hit.offset[0].x = WPSPINATTACK_OFF_X;
    wp->weapon_hit.offset[0].y = 0.0F;
    wp->weapon_hit.offset[1].x = -WPSPINATTACK_OFF_X;
    wp->weapon_hit.offset[1].y = 0.0F;

    wp->lr = fp->lr;

    wp->lifetime = WPSPINATTACK_LIFETIME;

    wp->proc_dead = wpLinkSpinAttackProcDead;

    bzero(&wp->weapon_vars.spin_attack, sizeof(wp->weapon_vars));

    wp->weapon_vars.spin_attack.vel.x = __cosf(WPSPINATTACK_ANGLE) * WPSPINATTACK_VEL;
    wp->weapon_vars.spin_attack.vel.y = __sinf(WPSPINATTACK_ANGLE) * WPSPINATTACK_VEL;
    
    wp->phys_info.vel_air.x = wp->phys_info.vel_air.y = wp->phys_info.vel_air.z = 0.0F;

    wpProcessUpdateHitPositions(weapon_gobj);

    return weapon_gobj;
}
