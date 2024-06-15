#include <wp/weapon.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern
intptr_t lWPYoshiStarWeaponAttributes;      // 0x00000040

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

wpCreateDesc dWPYoshiStarWeaponDesc =
{
    0x00,                                   // Render flags?
    Wp_Kind_YoshiStar,                      // Weapon Kind
    &gFTDataYoshiMain,                      // Pointer to character's loaded files?
    &lWPYoshiStarWeaponAttributes,          // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    wpYoshiStarProcUpdate,                  // Proc Update
    wpYoshiStarProcMap,                     // Proc Map
    wpYoshiStarProcHit,                     // Proc Hit
    wpYoshiStarProcShield,                  // Proc Shield
    wpYoshiStarProcHop,                     // Proc Hop
    wpYoshiStarProcHit,                     // Proc Set-Off
    wpYoshiStarProcReflector,               // Proc Reflector
    wpYoshiStarProcShield                   // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8016C540
f32 wpYoshiStarGetScale(wpStruct *wp)
{
    f32 scale = (wp->lifetime * WPYOSHISTAR_LIFETIME_SCALE_MUL) + WPYOSHISTAR_LIFETIME_SCALE_ADD;

    if (scale > 1.0F)
    {
        scale = 1.0F;
    }
    return scale;
}

// 0x8016C588
sb32 wpYoshiStarProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    f32 scale;
    f32 vel_sqrt;
    f32 vel_mul;

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

        return TRUE;
    }
    scale = wpYoshiStarGetScale(wp);

    DObjGetStruct(weapon_gobj)->scale.vec.f.x = scale;
    DObjGetStruct(weapon_gobj)->scale.vec.f.y = scale;

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z += (WPYOSHISTAR_ROTATE_SPEED * wp->lr);

    vel_sqrt = sqrtf(SQUARE(wp->phys_info.vel_air.x) + SQUARE(wp->phys_info.vel_air.y));

    if (vel_sqrt > 0.0F)
    {
        if (vel_sqrt < WPYOSHISTAR_VEL_CLAMP)
        {
            vel_mul = 0.0F;
        }
        else vel_mul = vel_sqrt - WPYOSHISTAR_VEL_CLAMP;
        
        wp->phys_info.vel_air.x = (wp->phys_info.vel_air.x * vel_mul) / vel_sqrt;
        wp->phys_info.vel_air.y = (wp->phys_info.vel_air.y * vel_mul) / vel_sqrt;
    }
    return FALSE;
}

// 0x8016C6A0
sb32 wpYoshiStarProcMap(GObj *weapon_gobj)
{
    return FALSE;
}

// 0x8016C6AC
sb32 wpYoshiStarProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    efParticle_SparkleWhite_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

    if (wp->hit_normal_damage != 0)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8016C6F0
sb32 wpYoshiStarProcShield(GObj *weapon_gobj)
{
    efParticle_SparkleWhite_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

    return TRUE;
}

// 0x8016C718
sb32 wpYoshiStarProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel_air, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);

    if (wp->phys_info.vel_air.x > 0.0F)
    {
        wp->lr = LR_Right;
    }
    else wp->lr = LR_Left;

    return FALSE;
}

// 0x8016C7B0
sb32 wpYoshiStarProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wp->lifetime = WPYOSHISTAR_LIFETIME;

    wpMainReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);

    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;
    DObjGetStruct(weapon_gobj)->scale.vec.f.y = 1.0F;

    wp->lr = -wp->lr;

    return FALSE;
}

// 0x8016C834
#if !defined (DAIRANTOU_OPT0)
    GObj* wpYoshiStarMakeWeapon(GObj *fighter_gobj, Vec3f *pos, s32 lr)
#else
    void wpYoshiStarMakeWeapon(GObj *fighter_gobj, Vec3f *pos, s32 lr)
#endif
{
    GObj *weapon_gobj;
    wpStruct *wp;
    Vec3f offset = *pos;

    offset.y += WPYOSHISTAR_OFF_Y;

    if (lr == LR_Right)
    {
        offset.x += WPYOSHISTAR_OFF_X;
    }
    else offset.x -= WPYOSHISTAR_OFF_X;
    
    weapon_gobj = wpManagerMakeWeapon(fighter_gobj, &dWPYoshiStarWeaponDesc, &offset, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lr = lr;

    wp->lifetime = WPYOSHISTAR_LIFETIME;

    wp->phys_info.vel_air.x = __cosf(WPYOSHISTAR_ANGLE) * (WPYOSHISTAR_VEL * wp->lr);
    wp->phys_info.vel_air.y = __sinf(WPYOSHISTAR_ANGLE) * WPYOSHISTAR_VEL;

    #if !defined (AVOID_UB) || defined (DAIRANTOU_OPT0)
        return; // Undefined behavior here, no return value
    #else
        return weapon_gobj;
    #endif
}

// 0x8016C954
GObj* wpYoshiStarMakeStars(GObj *fighter_gobj, Vec3f *pos)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    wpYoshiStarMakeWeapon(fighter_gobj, pos, fp->lr);
    wpYoshiStarMakeWeapon(fighter_gobj, pos, -fp->lr);

    return NULL;
}
