#include <wp/weapon.h>
#include <ft/fighter.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t 
lWPLinkBoomerangWeaponAttributes;           // 0x00000000

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

wpCreateDesc dWPLinkBoomerangWeaponDesc =
{
    0x01,                                   // Render flags?
    Wp_Kind_Boomerang,                      // Weapon Kind
    &gFTDataLinkSpecial1,                   // Pointer to character's loaded files?
    &lWPLinkBoomerangWeaponAttributes,      // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    wpLinkBoomerangProcUpdate,              // Proc Update
    wpLinkBoomerangProcMap,                 // Proc Map
    wpLinkBoomerangProcHit,                 // Proc Hit
    wpLinkBoomerangProcShield,              // Proc Shield
    wpLinkBoomerangProcHop,                 // Proc Hop
    wpLinkBoomerangProcHit,                 // Proc Set-Off
    wpLinkBoomerangProcReflector,           // Proc Reflector
    wpLinkBoomerangProcHit                  // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

typedef enum wpLinkBoomerangFlags
{
    wpLink_Boomerang_Flags_Return,
    wpLink_Boomerang_Flags_Destroy,
    wpLink_Boomerang_Flags_Forward,
    wpLink_Boomerang_Flags_Unk2,
    wpLink_Boomerang_Flags_Unk3,
    wpLink_Boomerang_Flags_Reflect

} wpLinkBoomerangFlags;

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define WPLINK_BOOMERANG_MASK_RETURN        (1 << wpLink_Boomerang_Flags_Return)
#define WPLINK_BOOMERANG_MASK_DESTROY       (1 << wpLink_Boomerang_Flags_Destroy)
#define WPLINK_BOOMERANG_MASK_FORWARD       (1 << wpLink_Boomerang_Flags_Forward)
#define WPLINK_BOOMERANG_MASK_UNK2          (1 << wpLink_Boomerang_Flags_Unk2)
#define WPLINK_BOOMERANG_MASK_UNK3          (1 << wpLink_Boomerang_Flags_Unk3)
#define WPLINK_BOOMERANG_MASK_REFLECT       (1 << wpLink_Boomerang_Flags_Reflect)

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8016CC50
void wpLinkBoomerangClampAngle360(f32 *angle)
{
    if (*angle > F_CST_DTOR32(360.0F)) // DOUBLE_PI32
    {
        *angle -= F_CST_DTOR32(360.0F);
    }
    else if (*angle < F_CST_DTOR32(-360.0F)) // -DOUBLE_PI32
    {
        *angle += F_CST_DTOR32(360.0F);
    }
} 

// 0x8016CCA0
sb32 wpLinkBoomerangCheckOffCamera(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    f32 pos_x;
    f32 pos_y;
    f32 cam_bound_x;
    f32 cam_bound_y;

    if (wp->weapon_vars.boomerang.homing_delay > 0)
    {
        wp->weapon_vars.boomerang.homing_delay--;
    }
    else
    {
        wp->weapon_vars.boomerang.adjust_angle_delay++;

        if (wp->weapon_vars.boomerang.adjust_angle_delay > 8)
        {
            wp->weapon_vars.boomerang.adjust_angle_delay = 0;

            func_ovl2_800EB924(CameraGetStruct(gCMManagerCameraGObj), sCMManagerMtx, &DObjGetStruct(weapon_gobj)->translate.vec.f, &pos_x, &pos_y);

            cam_bound_x = (gCMManagerCameraStruct.viewport_width / 2) + 40.0F;
            cam_bound_y = (gCMManagerCameraStruct.viewport_height / 2) + 40.0F;

            if ((pos_x < -cam_bound_x) || (pos_x > cam_bound_x) || (pos_y < -cam_bound_y) || (pos_y > cam_bound_y))
            {
                return TRUE;
            }
        }
    }
    return FALSE;
}

// 0x8016CDC8
void wpLinkBoomerangSetReturnVars(GObj *weapon_gobj, sb32 angle_max_or_min)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    wp->weapon_vars.boomerang.flags |= WPLINK_BOOMERANG_MASK_RETURN;

    wp->weapon_hit.damage = WPBOOMERANG_RETURN_DAMAGE;

    wp->weapon_vars.boomerang.default_angle -= F_CST_DTOR32(180.0F); // PI32

    if (wp->weapon_vars.boomerang.default_angle < 0.0F)
    {
        wp->weapon_vars.boomerang.default_angle += F_CST_DTOR32(360.0F); // DOUBLE_PI32
    }
    wp->lr = -wp->lr;

    wp->weapon_vars.boomerang.flyforward_timer = 140;

    wp->weapon_vars.boomerang.homing_angle = (angle_max_or_min == 1) ? WPBOOMERANG_HOMING_ANGLE_MAX : WPBOOMERANG_HOMING_ANGLE_MIN;

    DObjGetStruct(weapon_gobj)->child->child->flags = DOBJ_FLAG_NOTEXTURE;

    wpMainPlaySFX(wp, alSound_SFX_LinkSpecialNThrow);
}

// 0x8016CE90
f32 wpLinkBoomerangAddVelSqrt(wpStruct *wp, f32 vel_add)
{
    f32 sqrt_vel = sqrtf(SQUARE(wp->phys_info.vel_air.x) + SQUARE(wp->phys_info.vel_air.y)) + vel_add;

    if (sqrt_vel > 90.0F)
    {
        sqrt_vel = 90.0F;
    }
    return sqrt_vel;
}

// 0x8016CEEC
f32 wpLinkBoomerangSubVelSqrt(wpStruct *wp, f32 vel_sub)
{
    f32 sqrt_vel = sqrtf(SQUARE(wp->phys_info.vel_air.x) + SQUARE(wp->phys_info.vel_air.y)) - vel_sub;

    if (sqrt_vel < 10.0F)
    {
        sqrt_vel = 10.0F;
    }
    return sqrt_vel;
}

// 0x8016CF48
void wpLinkBoomerangUpdateVelLR(wpStruct *wp, f32 vel_mul)
{
    /*
        The following floating point operations and sqrtf subroutine call are unused and waste CPU cycles.
        Guarded by the preprocessor flag DAIRANTOU_OPT0.
    */

#if !defined(DAIRANTOU_OPT0)
    sqrtf(SQUARE(wp->phys_info.vel_air.x) + SQUARE(wp->phys_info.vel_air.y)); // Can we just talk about how this doesn't do anything
#endif

    wp->phys_info.vel_air.x = __cosf(wp->weapon_vars.boomerang.default_angle) * vel_mul;
    wp->phys_info.vel_air.y = __sinf(wp->weapon_vars.boomerang.default_angle) * vel_mul;

    wp->lr = ((wp->weapon_vars.boomerang.default_angle > F_CST_DTOR32(90.0F)) && (wp->weapon_vars.boomerang.default_angle < F_CST_DTOR32(270.0F))) ? LR_Left : LR_Right; // HALF_PI32, 4.712389F
}

// 0x8016CFFC
void wpLinkBoomerangClampAngleForward(f32 *angle)
{
    if ((*angle > F_CST_DTOR32(30.0F)) && (*angle <= F_CST_DTOR32(90.0F))) // 0.5235988F, HALF_PI32
    {
        *angle = F_CST_DTOR32(30.0F);
    }
    else if ((*angle < F_CST_DTOR32(150.0F)) && (*angle >= F_CST_DTOR32(90.0F))) // 2.6179938F, HALF_PI32
    {
        *angle = F_CST_DTOR32(150.0F);
    }
    else if ((*angle > F_CLC_DTOR32(210.0F)) && (*angle <= F_CST_DTOR32(270.0F))) // 3.6651917F, 4.712389F
    {
        *angle = F_CLC_DTOR32(210.0F);
    }
    else if ((*angle < F_CLC_DTOR32(330.0F)) && (*angle >= F_CST_DTOR32(270.0F))) // 5.759587F, 4.712389F
    {
        *angle = F_CLC_DTOR32(330.0F);
    }
}

// 0x8016D0E4
f32 wpLinkBoomerangGetDistUpdateAngle(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    f32 unused;
    f32 dist_x;
    f32 dist_y;
    f32 angle;
    f32 sqrt_dist = 0.0F;

    if (wp->weapon_vars.boomerang.spawn_gobj != NULL)
    {
        dist_x = DObjGetStruct(wp->weapon_vars.boomerang.spawn_gobj)->translate.vec.f.x - DObjGetStruct(weapon_gobj)->translate.vec.f.x;
        dist_y = (DObjGetStruct(wp->weapon_vars.boomerang.spawn_gobj)->translate.vec.f.y - DObjGetStruct(weapon_gobj)->translate.vec.f.y) + 290.0F;

        sqrt_dist = sqrtf(SQUARE(dist_x) + SQUARE(dist_y));

        if (wp->weapon_vars.boomerang.flags & WPLINK_BOOMERANG_MASK_FORWARD)
        {
            if (wp->weapon_vars.boomerang.flyforward_timer > 0)
            {
                wp->weapon_vars.boomerang.flyforward_timer--;
            }
            else if (wp->weapon_vars.boomerang.flyforward_timer == 0)
            {
                return sqrt_dist;
            }
        }
        if ((wp->weapon_vars.boomerang.flags & WPLINK_BOOMERANG_MASK_UNK3) && (((dist_x < 0.0F) && (wp->lr == LR_Right)) || ((dist_x > 0.0F) && (wp->lr == LR_Left))))
        {
            return sqrt_dist;
        }
        else
        {
            angle = atan2f(dist_y, dist_x);

            if (angle < F_CST_DTOR32(-180.0F)) // -PI32
            {
                angle += F_CST_DTOR32(360.0F); // DOUBLE_PI32
            }
            else if (angle > F_CST_DTOR32(180.0F)) // PI32
            {
                angle -= F_CST_DTOR32(360.0F); // DOUBLE_PI32
            }
            angle -= wp->weapon_vars.boomerang.default_angle;

            if (angle < F_CST_DTOR32(-180.0F)) // -PI32
            {
                angle += F_CST_DTOR32(360.0F); // DOUBLE_PI32
            }
            else if (angle > F_CST_DTOR32(180.0F))
            {
                angle -= F_CST_DTOR32(360.0F); // DOUBLE_PI32
            }
            if (angle > wp->weapon_vars.boomerang.homing_angle)
            {
                angle = wp->weapon_vars.boomerang.homing_angle;
            }
            else if (angle < -wp->weapon_vars.boomerang.homing_angle)
            {
                angle = -wp->weapon_vars.boomerang.homing_angle;
            }
            wp->weapon_vars.boomerang.default_angle += angle;

            wpLinkBoomerangClampAngle360(&wp->weapon_vars.boomerang.default_angle);

            if (wp->weapon_vars.boomerang.flags & WPLINK_BOOMERANG_MASK_UNK2)
            {
                wpLinkBoomerangClampAngleForward(&wp->weapon_vars.boomerang.default_angle);
            }
        }
    }
    return sqrt_dist;
}

// 0x8016D31C
void wpLinkBoomerangClearGObjs(wpStruct *wp)
{
    if (wp->weapon_vars.boomerang.spawn_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(wp->weapon_vars.boomerang.spawn_gobj);

        if ((fp->ft_kind == Ft_Kind_Kirby) || (fp->ft_kind == Ft_Kind_PolyKirby))
        {
            fp->fighter_vars.kirby.copylink_boomerang_gobj = NULL;
        }
        else fp->fighter_vars.link.boomerang_gobj = NULL;
        
        wp->weapon_vars.boomerang.spawn_gobj = NULL;
    }
}

// 0x8016D35C
void wpLinkBoomerangCheckOwnerCatch(GObj *weapon_gobj, f32 distance)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if ((wp->weapon_vars.boomerang.flags & WPLINK_BOOMERANG_MASK_RETURN) && (distance < 180.0F))
    {
        if (wp->weapon_vars.boomerang.spawn_gobj != NULL)
        {
            ftStruct *fp = ftGetStruct(wp->weapon_vars.boomerang.spawn_gobj);

            if (fp->is_special_interrupt)
            {
                if ((fp->ft_kind == Ft_Kind_Kirby) || (fp->ft_kind == Ft_Kind_PolyKirby))
                {
                    ftKirbyCopyLinkSpecialNReturnSetStatus(wp->weapon_vars.boomerang.spawn_gobj);
                }
                else ftLinkSpecialNReturnSetStatus(wp->weapon_vars.boomerang.spawn_gobj);          
            }
        }
        wpLinkBoomerangClearGObjs(wp);
        wpMainDestroyWeapon(weapon_gobj);
    }
}

// 0x8016D40C
sb32 wpLinkBoomerangCheckBound(wpStruct *wp, Vec3f *coll_angle)
{
    f32 angle = func_ovl0_800C7C0C(&wp->phys_info.vel_air, coll_angle);

    if (angle < 0.0F)
    {
        if (angle > -__sinf(F_CST_DTOR32(30.0F))) // 0.5235988F
        {
            func_ovl0_800C7B08(&wp->phys_info.vel_air, coll_angle);

            wp->weapon_vars.boomerang.default_angle = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);

            wpLinkBoomerangClampAngle360(&wp->weapon_vars.boomerang.default_angle);
        }
        else return TRUE;
    }
    return FALSE;
}

// 0x8016D4B8
sb32 wpLinkBoomerangProcDead(GObj *weapon_gobj)
{
    wpLinkBoomerangClearGObjs(wpGetStruct(weapon_gobj));

    return TRUE;
}

// 0x8016D4DC
sb32 wpLinkBoomerangProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if ((wpMainDecLifeCheckExpire(wp) != FALSE) || (wpLinkBoomerangCheckOffCamera(weapon_gobj) == TRUE))
    {
        wpLinkBoomerangClearGObjs(wp);

        return TRUE;
    }
    if (wp->weapon_vars.boomerang.flags & WPLINK_BOOMERANG_MASK_DESTROY)
    {
        wpLinkBoomerangClearGObjs(wp);

        return TRUE;
    }
    if (wp->weapon_vars.boomerang.flags & WPLINK_BOOMERANG_MASK_REFLECT)
    {
        return FALSE;
    }
    else if (wp->weapon_vars.boomerang.flags & WPLINK_BOOMERANG_MASK_RETURN)
    {
        wpLinkBoomerangUpdateVelLR(wp, wpLinkBoomerangAddVelSqrt(wp, 1.0F));

        wpLinkBoomerangCheckOwnerCatch(weapon_gobj, wpLinkBoomerangGetDistUpdateAngle(weapon_gobj));
    }
    else
    {
        f32 vel = wpLinkBoomerangSubVelSqrt(wp, 1.4F);

        wpLinkBoomerangUpdateVelLR(wp, vel);

        if (vel == 10.0F)
        {
            wpLinkBoomerangSetReturnVars(weapon_gobj, 0);
        }
    }
    return FALSE;
}

// 0x8016D5EC
sb32 wpLinkBoomerangProcMap(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    sb32 is_collide = FALSE;
    u16 coll_flags;

    if (!(wp->weapon_vars.boomerang.flags & (WPLINK_BOOMERANG_MASK_REFLECT | WPLINK_BOOMERANG_MASK_RETURN)))
    {
        wpMapTestAll(weapon_gobj);

        coll_flags = (wp->coll_data.coll_mask_prev ^ wp->coll_data.coll_mask_curr) & wp->coll_data.coll_mask_curr & MPCOLL_KIND_MAIN_MASK;

        if (coll_flags)
        {
            efParticle_DustCollision_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

            if (coll_flags & MPCOLL_KIND_LWALL)
            {
                is_collide |= wpLinkBoomerangCheckBound(wp, &wp->coll_data.lwall_angle);
            }
            if (coll_flags & MPCOLL_KIND_RWALL)
            {
                is_collide |= wpLinkBoomerangCheckBound(wp, &wp->coll_data.rwall_angle);
            }
            if (coll_flags & MPCOLL_KIND_CEIL)
            {
                is_collide |= wpLinkBoomerangCheckBound(wp, &wp->coll_data.ceil_angle);
            }
            if (coll_flags & MPCOLL_KIND_GROUND)
            {
                is_collide |= wpLinkBoomerangCheckBound(wp, &wp->coll_data.ground_angle);
            }
            if (is_collide == TRUE)
            {
                wpLinkBoomerangSetReturnVars(weapon_gobj, 1);
            }
        }
    }
    return FALSE;
}

// 0x8016D714
sb32 wpLinkBoomerangProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (!(wp->weapon_vars.boomerang.flags & (WPLINK_BOOMERANG_MASK_REFLECT | WPLINK_BOOMERANG_MASK_RETURN)) && (wp->hit_normal_damage != 0))
    {
        wpLinkBoomerangUpdateVelLR(wp, wpLinkBoomerangSubVelSqrt(wp, 5.0F));
        wpLinkBoomerangSetReturnVars(weapon_gobj, 1);
    }
    return FALSE;
}

// 0x8016D77C
sb32 wpLinkBoomerangProcSetOff(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (!(wp->weapon_vars.boomerang.flags & (WPLINK_BOOMERANG_MASK_REFLECT | WPLINK_BOOMERANG_MASK_RETURN)))
    {
        wpLinkBoomerangSetReturnVars(weapon_gobj, 1);
    }
    return FALSE;
}

// 0x8016D7B4
sb32 wpLinkBoomerangProcShield(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (!(wp->weapon_vars.boomerang.flags & (WPLINK_BOOMERANG_MASK_REFLECT | WPLINK_BOOMERANG_MASK_RETURN)))
    {
        wpLinkBoomerangSetReturnVars(weapon_gobj, 1);
    }
    return FALSE;
}

// 0x8016D7EC
sb32 wpLinkBoomerangProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wp->shield_collide_vec.z > 0.0F)
    {
        wp->weapon_vars.boomerang.default_angle += (wp->shield_collide_angle * 2);
    }
    else wp->weapon_vars.boomerang.default_angle -= (wp->shield_collide_angle * 2);
    
    wpLinkBoomerangClampAngle360(&wp->weapon_vars.boomerang.default_angle);

    return FALSE;
}

// 0x8016D868
sb32 wpLinkBoomerangProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    f32 dist_x, dist_y;

    if (!(wp->weapon_vars.boomerang.flags & WPLINK_BOOMERANG_MASK_REFLECT))
    {
        wp->weapon_vars.boomerang.flags = WPLINK_BOOMERANG_MASK_REFLECT;
        wp->lifetime = WPBOOMERANG_LIFETIME_REFLECT;
    }
    dist_x = DObjGetStruct(weapon_gobj)->translate.vec.f.x - DObjGetStruct(wp->owner_gobj)->translate.vec.f.x;
    dist_y = DObjGetStruct(weapon_gobj)->translate.vec.f.y - (DObjGetStruct(wp->owner_gobj)->translate.vec.f.y + 250.0F);

    wp->weapon_vars.boomerang.default_angle = atan2f(dist_y, dist_x);

    wpLinkBoomerangClampAngle360(&wp->weapon_vars.boomerang.default_angle);
    wpLinkBoomerangUpdateVelLR(wp, sqrtf(SQUARE(wp->phys_info.vel_air.x) + SQUARE(wp->phys_info.vel_air.y)));

    return FALSE;
}

// 0x8016D914
f32 wpLinkBoomerangGetAngleSetVel(Vec3f *vel, ftStruct *fp, s32 lr, f32 vel_mul)
{
    f32 angle;

    if (ABS(fp->input.pl.stick_range.y) > WPBOOMERANG_ANGLE_STICK_THRESHOLD)
    {
        angle = atan2f(fp->input.pl.stick_range.y, ABS(fp->input.pl.stick_range.x));

        if (angle > F_CST_DTOR32(30.0F)) // 0.5235988F
        {
            angle = F_CST_DTOR32(30.0F);

        }
        else if (angle < F_CST_DTOR32(-30.0F)) // -0.5235988F
        {
            angle = F_CST_DTOR32(-30.0F);
        }
    }
    else angle = 0.0F;
    
    vel->x = (__cosf(angle) * vel_mul * lr);
    vel->y = (__sinf(angle) * vel_mul * lr);
    vel->z = 0.0F;

    if (lr == LR_Left)
    {
        if (angle < 0.0F)
        {
            angle = F_CST_DTOR32(-180.0F) - angle; // PI32
        }
        else angle = F_CST_DTOR32(180.0F) - angle; // -PI32
    }
    if (angle < 0.0F)
    {
        angle += F_CST_DTOR32(360.0F); // DOUBLE_PI32
    }
    return angle;
}

// 0x8016DA78
GObj* wpLinkBoomerangMakeWeapon(GObj *fighter_gobj, Vec3f *pos)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *weapon_gobj;
    wpStruct *wp;
    Vec3f offset;
    s32 unused;

    offset = *pos;

    offset.y += WPBOOMERANG_OFF_Y;

    offset.x = (fp->lr == LR_Right) ? offset.x + WPBOOMERANG_OFF_X : offset.x - WPBOOMERANG_OFF_X;

    weapon_gobj = wpManagerMakeWeapon(fighter_gobj, &dWPLinkBoomerangWeaponDesc, &offset, WEAPON_MASK_SPAWN_FIGHTER);

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lr = fp->lr;

    if (fp->status_vars.link.specialn.is_smash == TRUE)
    {
        wp->lifetime = WPBOOMERANG_LIFETIME_SMASH;
        wp->weapon_vars.boomerang.default_angle = wpLinkBoomerangGetAngleSetVel(&wp->phys_info.vel_air, fp, wp->lr, WPBOOMERANG_VEL_SMASH);
    }
    else
    {
        wp->lifetime = WPBOOMERANG_LIFETIME_TILT;
        wp->weapon_vars.boomerang.default_angle = wpLinkBoomerangGetAngleSetVel(&wp->phys_info.vel_air, fp, wp->lr, WPBOOMERANG_VEL_TILT);
    }
    wp->proc_setoff = wpLinkBoomerangProcSetOff;
    wp->proc_dead = wpLinkBoomerangProcDead;

    wp->is_camera_follow = TRUE;

    wpMainPlaySFX(wp, alSound_SFX_LinkSpecialNDraw);

    wp->weapon_vars.boomerang.spawn_gobj = fighter_gobj;
    wp->weapon_vars.boomerang.flags = WPLINK_BOOMERANG_MASK_FORWARD;
    wp->weapon_vars.boomerang.homing_delay = 130;
    wp->weapon_vars.boomerang.adjust_angle_delay = 0;

    wpMainVelSetModelPitch(weapon_gobj);

    wp->is_hitlag_victim = TRUE;

    return weapon_gobj;
}
