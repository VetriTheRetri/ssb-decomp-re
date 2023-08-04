#include <wp/weapon.h>
#include <ft/fighter.h>
#include <gm/gmmatch.h>

typedef enum wpLinkBoomerangFlags
{
    wpLink_Boomerang_Flags_Return,
    wpLink_Boomerang_Flags_Destroy,
    wpLink_Boomerang_Flags_Forward,
    wpLink_Boomerang_Flags_Unk2,
    wpLink_Boomerang_Flags_Unk3,
    wpLink_Boomerang_Flags_Reflect

} wpLinkBoomerangFlags;

#define WPLINK_BOOMERANG_MASK_RETURN    (1 << wpLink_Boomerang_Flags_Return)
#define WPLINK_BOOMERANG_MASK_DESTROY   (1 << wpLink_Boomerang_Flags_Destroy)
#define WPLINK_BOOMERANG_MASK_FORWARD   (1 << wpLink_Boomerang_Flags_Forward)
#define WPLINK_BOOMERANG_MASK_UNK2      (1 << wpLink_Boomerang_Flags_Unk2)
#define WPLINK_BOOMERANG_MASK_UNK3      (1 << wpLink_Boomerang_Flags_Unk3)
#define WPLINK_BOOMERANG_MASK_REFLECT   (1 << wpLink_Boomerang_Flags_Reflect)

extern void *D_ovl2_80130FBC;

wpCreateDesc wpLink_Booemrang_WeaponDesc =
{
    1,                                      // Render flags?
    Wp_Kind_Boomerang,                      // Weapon Kind
    &D_ovl2_80130FBC,                       // Pointer to character's loaded files?
    0x0,                                    // Offset of weapon attributes in loaded files
    0x1C,                                   // ???
    0,                                      // ???
    0,                                      // ???
    wpLink_Boomerang_ProcUpdate,            // Proc Update
    wpLink_Boomerang_ProcMap,               // Proc Map
    wpLink_Boomerang_ProcHit,               // Proc Hit
    wpLink_Boomerang_ProcShield,            // Proc Shield
    wpLink_Boomerang_ProcHop,               // Proc Hop
    wpLink_Boomerang_ProcHit,               // Proc Set-Off
    wpLink_Boomerang_ProcReflector,         // Proc Reflector
    wpLink_Boomerang_ProcHit                // Proc Absorb
};

// 0x8016CC50
void wpLink_Boomerang_ClampAngle360(f32 *angle)
{
    if (*angle > F_DEG_TO_RAD(360.0F)) // DOUBLE_PI32
    {
        *angle -= F_DEG_TO_RAD(360.0F);
    }
    else if (*angle < F_DEG_TO_RAD(-360.0F)) // -DOUBLE_PI32
    {
        *angle += F_DEG_TO_RAD(360.0F);
    }
} 

// 0x8016CCA0
bool32 func_ovl3_8016CCA0(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    f32 sp30;
    f32 sp2C;
    f32 temp_f0;
    f32 temp_f2;

    if (wp->weapon_vars.boomerang.homing_delay > 0)
    {
        wp->weapon_vars.boomerang.homing_delay--;
    }
    else
    {
        wp->weapon_vars.boomerang.adjust_angle_delay++;

        if (wp->weapon_vars.boomerang.adjust_angle_delay >= 9)
        {
            wp->weapon_vars.boomerang.adjust_angle_delay = 0;

            func_ovl2_800EB924(OMCameraGetStruct(gpCameraGObj), &D_ovl2_80131470, &DObjGetStruct(weapon_gobj)->translate, &sp30, &sp2C);

            temp_f0 = (D_ovl2_801314B0.unk_0x38.x / 2) + 40.0F;
            temp_f2 = (D_ovl2_801314B0.unk_0x38.y / 2) + 40.0F;

            if ((sp30 < -temp_f0) || (temp_f0 < sp30) || (sp2C < -temp_f2) || (temp_f2 < sp2C))
            {
                return TRUE;
            }
        }
    }
    return FALSE;
}

// 0x8016CDC8
void wpLink_Boomerang_SetReturnVars(GObj *weapon_gobj, bool32 angle_max_or_min)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    wp->weapon_vars.boomerang.flags |= WPLINK_BOOMERANG_MASK_RETURN;

    wp->weapon_hit.damage = 8;

    wp->weapon_vars.boomerang.default_angle -= F_DEG_TO_RAD(180.0F); // PI32

    if (wp->weapon_vars.boomerang.default_angle < 0.0F)
    {
        wp->weapon_vars.boomerang.default_angle += F_DEG_TO_RAD(360.0F); // DOUBLE_PI32
    }
    wp->lr = -wp->lr;

    wp->weapon_vars.boomerang.flyforward_timer = 140;

    wp->weapon_vars.boomerang.homing_angle = (angle_max_or_min == 1) ? WPBOOMERANG_HOMING_ANGLE_MAX : WPBOOMERANG_HOMING_ANGLE_MIN;

    DObjGetStruct(weapon_gobj)->next->next->unk_0x54 = 1;

    wpMain_PlaySFX(wp, 0xCEU);
}

// 0x8016CE90
f32 wpLink_Boomerang_AddVelSqrt(wpStruct *wp, f32 vel_add)
{
    f32 sqrt_vel = sqrtf(SQUARE(wp->phys_info.vel_air.x) + SQUARE(wp->phys_info.vel_air.y)) + vel_add;

    if (sqrt_vel > 90.0F)
    {
        sqrt_vel = 90.0F;
    }
    return sqrt_vel;
}

// 0x8016CEEC
f32 wpLink_Boomerang_SubVelSqrt(wpStruct *wp, f32 vel_sub)
{
    f32 sqrt_vel = sqrtf(SQUARE(wp->phys_info.vel_air.x) + SQUARE(wp->phys_info.vel_air.y)) - vel_sub;

    if (sqrt_vel < 10.0F)
    {
        sqrt_vel = 10.0F;
    }
    return sqrt_vel;
}

// 0x8016CF48
void wpLink_Boomerang_UpdateVelLR(wpStruct *wp, f32 vel_mul)
{
    sqrtf(SQUARE(wp->phys_info.vel_air.x) + SQUARE(wp->phys_info.vel_air.y)); // Can we talk about how this doesn't do anything

    wp->phys_info.vel_air.x = cosf(wp->weapon_vars.boomerang.default_angle) * vel_mul;
    wp->phys_info.vel_air.y = __sinf(wp->weapon_vars.boomerang.default_angle) * vel_mul;

    wp->lr = ((wp->weapon_vars.boomerang.default_angle > F_DEG_TO_RAD(90.0F)) && (wp->weapon_vars.boomerang.default_angle < F_DEG_TO_RAD(270.0F))) ? LEFT : RIGHT; // HALF_PI32, 4.712389F
}

// 0x8016CFFC
void wpLink_Boomerang_ClampAngleForward(f32 *angle)
{
    if ((*angle > F_DEG_TO_RAD(30.0F)) && (*angle <= F_DEG_TO_RAD(90.0F))) // 0.5235988F, HALF_PI32
    {
        *angle = F_DEG_TO_RAD(30.0F);
    }
    else if ((*angle < F_DEG_TO_RAD(150.0F)) && (*angle >= F_DEG_TO_RAD(90.0F))) // 2.6179938F, HALF_PI32
    {
        *angle = F_DEG_TO_RAD(150.0F);
    }
    else if ((*angle > F_DEG_TO_RAD(210.0F)) && (*angle <= F_DEG_TO_RAD(270.0F))) // 3.6651917F, 4.712389F
    {
        *angle = F_DEG_TO_RAD(210.0F);
    }
    else if ((*angle < F_DEG_TO_RAD(330.0F)) && (*angle >= F_DEG_TO_RAD(270.0F))) // 5.759587F, 4.712389F
    {
        *angle = F_DEG_TO_RAD(330.0F);
    }
}

// 0x8016D0E4
f32 wpLink_Boomerang_GetDistUpdateAngle(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    f32 unused;
    f32 dist_x;
    f32 dist_y;
    f32 angle;
    f32 sqrt_dist = 0.0F;

    if (wp->weapon_vars.boomerang.spawn_gobj != NULL)
    {
        dist_x = DObjGetStruct(wp->weapon_vars.boomerang.spawn_gobj)->translate.x - DObjGetStruct(weapon_gobj)->translate.x;
        dist_y = (DObjGetStruct(wp->weapon_vars.boomerang.spawn_gobj)->translate.y - DObjGetStruct(weapon_gobj)->translate.y) + 290.0F;

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
        if ((wp->weapon_vars.boomerang.flags & WPLINK_BOOMERANG_MASK_UNK3) && (((dist_x < 0.0F) && (wp->lr == RIGHT)) || ((dist_x > 0.0F) && (wp->lr == LEFT))))
        {
            return sqrt_dist;
        }
        else
        {
            angle = atan2f(dist_y, dist_x);

            if (angle < F_DEG_TO_RAD(-180.0F)) // -PI32
            {
                angle += F_DEG_TO_RAD(360.0F); // DOUBLE_PI32
            }
            else if (angle > F_DEG_TO_RAD(180.0F)) // PI32
            {
                angle -= F_DEG_TO_RAD(360.0F); // DOUBLE_PI32
            }

            angle -= wp->weapon_vars.boomerang.default_angle;

            if (angle < F_DEG_TO_RAD(-180.0F)) // -PI32
            {
                angle += F_DEG_TO_RAD(360.0F); // DOUBLE_PI32
            }
            else if (angle > F_DEG_TO_RAD(180.0F))
            {
                angle -= F_DEG_TO_RAD(360.0F); // DOUBLE_PI32
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

            wpLink_Boomerang_ClampAngle360(&wp->weapon_vars.boomerang.default_angle);

            if (wp->weapon_vars.boomerang.flags & WPLINK_BOOMERANG_MASK_UNK2)
            {
                wpLink_Boomerang_ClampAngleForward(&wp->weapon_vars.boomerang.default_angle);
            }
        }
    }
    return sqrt_dist;
}

// 0x8016D31C
void wpLink_Boomerang_ClearObjectReference(wpStruct *wp)
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
void wpLink_Boomerang_CheckReturnOwner(GObj *weapon_gobj, f32 distance)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if ((wp->weapon_vars.boomerang.flags & WPLINK_BOOMERANG_MASK_RETURN) && (distance < 180.0F))
    {
        if (wp->weapon_vars.boomerang.spawn_gobj != NULL)
        {
            ftStruct *fp = ftGetStruct(wp->weapon_vars.boomerang.spawn_gobj);

            if (fp->x192_flag_b0)
            {
                if ((fp->ft_kind == Ft_Kind_Kirby) || (fp->ft_kind == Ft_Kind_PolyKirby))
                {
                    ftKirby_CopyLink_SpecialNReturn_SetStatus(wp->weapon_vars.boomerang.spawn_gobj);
                }
                else ftLink_SpecialNReturn_SetStatus(wp->weapon_vars.boomerang.spawn_gobj);          
            }
        }
        wpLink_Boomerang_ClearObjectReference(wp);
        wpMain_DestroyWeapon(weapon_gobj);
    }
}

// 0x8016D40C
bool32 wpLink_Boomerang_CheckBound(wpStruct *wp, Vec3f *coll_angle)
{
    f32 angle = func_ovl0_800C7C0C(&wp->phys_info.vel, coll_angle);

    if (angle < 0.0F)
    {
        if (angle > -__sinf(F_DEG_TO_RAD(30.0F))) // 0.5235988F
        {
            func_ovl0_800C7B08(&wp->phys_info.vel, coll_angle);

            wp->weapon_vars.boomerang.default_angle = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);

            wpLink_Boomerang_ClampAngle360(&wp->weapon_vars.boomerang.default_angle);
        }
        else return TRUE;
    }
    return FALSE;
}

// 0x8016D4B8
bool32 wpLink_Boomerang_ProcDead(GObj *weapon_gobj)
{
    wpLink_Boomerang_ClearObjectReference(wpGetStruct(weapon_gobj));

    return TRUE;
}

// 0x8016D4DC
bool32 wpLink_Boomerang_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if ((wpMain_DecLifeCheckExpire(wp) != FALSE) || (func_ovl3_8016CCA0(weapon_gobj) == TRUE))
    {
        wpLink_Boomerang_ClearObjectReference(wp);

        return TRUE;
    }
    if (wp->weapon_vars.boomerang.flags & WPLINK_BOOMERANG_MASK_DESTROY)
    {
        wpLink_Boomerang_ClearObjectReference(wp);

        return TRUE;
    }
    if (wp->weapon_vars.boomerang.flags & WPLINK_BOOMERANG_MASK_REFLECT)
    {
        return FALSE;
    }
    else if (wp->weapon_vars.boomerang.flags & WPLINK_BOOMERANG_MASK_RETURN)
    {
        wpLink_Boomerang_UpdateVelLR(wp, wpLink_Boomerang_AddVelSqrt(wp, 1.0F));

        wpLink_Boomerang_CheckReturnOwner(weapon_gobj, wpLink_Boomerang_GetDistUpdateAngle(weapon_gobj));
    }
    else
    {
        f32 vel = wpLink_Boomerang_SubVelSqrt(wp, 1.4F);

        wpLink_Boomerang_UpdateVelLR(wp, vel);

        if (vel == 10.0F)
        {
            wpLink_Boomerang_SetReturnVars(weapon_gobj, FALSE);
        }
    }
    return FALSE;
}

// 0x8016D5EC
bool32 wpLink_Boomerang_ProcMap(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    bool32 is_collide = FALSE;
    u16 coll_flags;

    if (!(wp->weapon_vars.boomerang.flags & (WPLINK_BOOMERANG_MASK_REFLECT | WPLINK_BOOMERANG_MASK_RETURN)))
    {
        func_ovl3_80167A58(weapon_gobj);

        coll_flags = (wp->coll_data.coll_mask_prev ^ wp->coll_data.coll_mask) & wp->coll_data.coll_mask & MPCOLL_MASK_MAIN_ALL;

        if (coll_flags)
        {
            efParticle_DustCollision_MakeEffect(&DObjGetStruct(weapon_gobj)->translate);

            if (coll_flags & MPCOLL_MASK_RWALL)
            {
                is_collide |= wpLink_Boomerang_CheckBound(wp, &wp->coll_data.rwall_angle);
            }
            if (coll_flags & MPCOLL_MASK_LWALL)
            {
                is_collide |= wpLink_Boomerang_CheckBound(wp, &wp->coll_data.lwall_angle);
            }
            if (coll_flags & MPCOLL_MASK_CEIL)
            {
                is_collide |= wpLink_Boomerang_CheckBound(wp, &wp->coll_data.ceil_angle);
            }
            if (coll_flags & MPCOLL_MASK_GROUND)
            {
                is_collide |= wpLink_Boomerang_CheckBound(wp, &wp->coll_data.ground_angle);
            }
            if (is_collide == TRUE)
            {
                wpLink_Boomerang_SetReturnVars(weapon_gobj, TRUE);
            }
        }
    }
    return FALSE;
}

// 0x8016D714
bool32 wpLink_Boomerang_ProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (!(wp->weapon_vars.boomerang.flags & (WPLINK_BOOMERANG_MASK_REFLECT | WPLINK_BOOMERANG_MASK_RETURN)) && (wp->hit_normal_damage != 0))
    {
        wpLink_Boomerang_UpdateVelLR(wp, wpLink_Boomerang_SubVelSqrt(wp, 5.0F));
        wpLink_Boomerang_SetReturnVars(weapon_gobj, TRUE);
    }
    return FALSE;
}

// 0x8016D77C
bool32 wpLink_Boomerang_ProcSetOff(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (!(wp->weapon_vars.boomerang.flags & (WPLINK_BOOMERANG_MASK_REFLECT | WPLINK_BOOMERANG_MASK_RETURN)))
    {
        wpLink_Boomerang_SetReturnVars(weapon_gobj, TRUE);
    }
    return FALSE;
}

// 0x8016D7B4
bool32 wpLink_Boomerang_ProcShield(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (!(wp->weapon_vars.boomerang.flags & (WPLINK_BOOMERANG_MASK_REFLECT | WPLINK_BOOMERANG_MASK_RETURN)))
    {
        wpLink_Boomerang_SetReturnVars(weapon_gobj, TRUE);
    }
    return FALSE;
}

// 0x8016D7EC
bool32 wpLink_Boomerang_ProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wp->shield_collide_vec.z > 0.0F)
    {
        wp->weapon_vars.boomerang.default_angle += (wp->shield_collide_angle * 2);
    }
    else wp->weapon_vars.boomerang.default_angle -= (wp->shield_collide_angle * 2);
    
    wpLink_Boomerang_ClampAngle360(&wp->weapon_vars.boomerang.default_angle);

    return FALSE;
}

// 0x8016D868
bool32 wpLink_Boomerang_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    f32 dist_x, dist_y;

    if (!(wp->weapon_vars.boomerang.flags & WPLINK_BOOMERANG_MASK_REFLECT))
    {
        wp->weapon_vars.boomerang.flags = WPLINK_BOOMERANG_MASK_REFLECT;
        wp->lifetime = WPBOOMERANG_LIFETIME_REFLECT;
    }

    dist_x = DObjGetStruct(weapon_gobj)->translate.x - DObjGetStruct(wp->owner_gobj)->translate.x;
    dist_y = DObjGetStruct(weapon_gobj)->translate.y - (DObjGetStruct(wp->owner_gobj)->translate.y + 250.0F);

    wp->weapon_vars.boomerang.default_angle = atan2f(dist_y, dist_x);

    wpLink_Boomerang_ClampAngle360(&wp->weapon_vars.boomerang.default_angle);

    wpLink_Boomerang_UpdateVelLR(wp, sqrtf(SQUARE(wp->phys_info.vel_air.x) + SQUARE(wp->phys_info.vel_air.y)));

    return FALSE;
}

// 0x8016D914
f32 wpLink_Boomerang_GetAngleSetVel(Vec3f *vel, ftStruct *fp, s32 lr, f32 vel_mul)
{
    f32 angle;

    if (ABS(fp->input.pl.stick_range.y) > WPBOOMERANG_ANGLE_STICK_THRESHOLD)
    {
        angle = atan2f(fp->input.pl.stick_range.y, ABS(fp->input.pl.stick_range.x));

        if (angle > F_DEG_TO_RAD(30.0F)) // 0.5235988F
        {
            angle = F_DEG_TO_RAD(30.0F);

        }
        else if (angle < F_DEG_TO_RAD(-30.0F)) // -0.5235988F
        {
            angle = F_DEG_TO_RAD(-30.0F);
        }
    }
    else
    {
        angle = 0.0F;
    }
    vel->x = (cosf(angle) * vel_mul * lr);
    vel->y = (__sinf(angle) * vel_mul * lr);
    vel->z = 0.0F;

    if (lr == LEFT)
    {
        if (angle < 0.0F)
        {
            angle = F_DEG_TO_RAD(180.0F) - angle; // PI32
        }
        else angle = F_DEG_TO_RAD(-180.0F) - angle; // -PI32
        
    }
    if (angle < 0.0F)
    {
        angle += F_DEG_TO_RAD(360.0F); // DOUBLE_PI32
    }
    return angle;
}

// 0x8016DA78
GObj* wpLink_Boomerang_MakeWeapon(GObj *fighter_gobj, Vec3f *pos)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *weapon_gobj;
    wpStruct *wp;
    Vec3f offset;
    s32 unused;

    offset = *pos;

    offset.y += WPBOOMERANG_OFF_Y;

    offset.x = (fp->lr == RIGHT) ? offset.x + WPBOOMERANG_OFF_X : offset.x - WPBOOMERANG_OFF_X;

    weapon_gobj = wpManager_MakeWeapon(fighter_gobj, &wpLink_Boomerang_CreateDesc, &offset, WEAPON_MASK_SPAWN_FIGHTER);

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lr = fp->lr;

    if (fp->status_vars.link.specialn.is_smash == TRUE)
    {
        wp->lifetime = WPBOOMERANG_LIFETIME_SMASH;
        wp->weapon_vars.boomerang.default_angle = wpLink_Boomerang_GetAngleSetVel(&wp->phys_info.vel, fp, wp->lr, WPBOOMERANG_VEL_SMASH);
    }
    else
    {
        wp->lifetime = WPBOOMERANG_LIFETIME_TILT;
        wp->weapon_vars.boomerang.default_angle = wpLink_Boomerang_GetAngleSetVel(&wp->phys_info.vel, fp, wp->lr, WPBOOMERANG_VEL_TILT);
    }
    wp->proc_setoff = wpLink_Boomerang_ProcSetOff;
    wp->proc_dead = wpLink_Boomerang_ProcDead;

    wp->is_camera_follow = TRUE;

    wpMain_PlaySFX(wp, 0xCFU);

    wp->weapon_vars.boomerang.spawn_gobj = fighter_gobj;
    wp->weapon_vars.boomerang.flags = WPLINK_BOOMERANG_MASK_FORWARD;
    wp->weapon_vars.boomerang.homing_delay = 130;
    wp->weapon_vars.boomerang.adjust_angle_delay = 0;

    wpMain_VelSetModelYaw(weapon_gobj);

    wp->is_hitlag_victim = TRUE;

    return weapon_gobj;
}
