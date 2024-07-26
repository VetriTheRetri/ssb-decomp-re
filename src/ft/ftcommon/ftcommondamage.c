#include <ft/fighter.h>
#include <it/item.h>

extern alSoundEffect* func_800269C0_275C0(u16);
extern f32 ftCommon_DamageCalcHitStun(f32 knockback);
extern s32 gmCommon_DamageCalcHitLag(s32 damage, s32 status_id, f32 hitlag_mul);

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

// 0x801885A0
s32 dFTCommonDamageStatusGroundIDs[/* */][3] =
{
    { ftStatus_Common_DamageLw1,   ftStatus_Common_DamageN1,    ftStatus_Common_DamageHi1   },
    { ftStatus_Common_DamageLw2,   ftStatus_Common_DamageN2,    ftStatus_Common_DamageHi2   },
    { ftStatus_Common_DamageLw3,   ftStatus_Common_DamageN3,    ftStatus_Common_DamageHi3   },
    { ftStatus_Common_DamageFlyLw, ftStatus_Common_DamageFlyN,  ftStatus_Common_DamageFlyHi }
};

// 0x801885D0
s32 dFTCommonDamageStatusAirIDs[/* */][3] =
{
    { ftStatus_Common_DamageAir1,  ftStatus_Common_DamageAir1,  ftStatus_Common_DamageAir1  },
    { ftStatus_Common_DamageAir2,  ftStatus_Common_DamageAir2,  ftStatus_Common_DamageAir2  },
    { ftStatus_Common_DamageAir3,  ftStatus_Common_DamageAir3,  ftStatus_Common_DamageAir3  },
    { ftStatus_Common_DamageFlyLw, ftStatus_Common_DamageFlyN,  ftStatus_Common_DamageFlyHi }
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80140340
void ftCommonDamageSetDustEffectInterval(ftStruct *fp)
{
    f32 vel = (fp->ground_or_air == nMPKineticsAir) ? lbVector_Vec3fMagnitude(&fp->phys_info.vel_damage_air) : ABSF(fp->phys_info.vel_damage_ground);
    s32 make_effect_wait;

    if (vel < FTCOMMON_DAMAGE_EFFECT_KNOCKBACK_LOW)
    {
        make_effect_wait = FTCOMMON_DAMAGE_EFFECT_WAIT_LOW;
    }
    else if (vel < FTCOMMON_DAMAGE_EFFECT_KNOCKBACK_MID_LOW)
    {
        make_effect_wait = FTCOMMON_DAMAGE_EFFECT_WAIT_MID_LOW;
    }
    else if (vel < FTCOMMON_DAMAGE_EFFECT_KNOCKBACK_MID)
    {
        make_effect_wait = FTCOMMON_DAMAGE_EFFECT_WAIT_MID;
    }
    else if (vel < FTCOMMON_DAMAGE_EFFECT_KNOCKBACK_MID_HIGH)
    {
        make_effect_wait = FTCOMMON_DAMAGE_EFFECT_WAIT_MID_HIGH;
    }
    else if (vel < FTCOMMON_DAMAGE_EFFECT_KNOCKBACK_HIGH)
    {
        make_effect_wait = FTCOMMON_DAMAGE_EFFECT_WAIT_HIGH;
    }
    else make_effect_wait = FTCOMMON_DAMAGE_EFFECT_WAIT_DEFAULT;
    
    fp->status_vars.common.damage.dust_effect_int = make_effect_wait;
}

// 0x80140454
void ftCommonDamageUpdateDustEffect(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.damage.dust_effect_int != 0)
    {
        fp->status_vars.common.damage.dust_effect_int--;

        if (fp->status_vars.common.damage.dust_effect_int == 0)
        {
            ftParticle_MakeEffectKind(fighter_gobj, Ef_Kind_DustExpandLarge, 4, NULL, NULL, fp->lr, FALSE, FALSE);
            ftCommonDamageSetDustEffectInterval(fp);
        }
    }
}

// 0x801404B8
void ftCommonDamageDecHitStunSetPublicity(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.damage.hitstun_timer != 0)
    {
        fp->status_vars.common.damage.hitstun_timer--;

        if (fp->status_vars.common.damage.hitstun_timer == 0)
        {
            fp->publicity_knockback = fp->status_vars.common.damage.publicity_knockback;
        }
    }
}

// 0x801404E0
void ftCommonDamageCommonProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonDamageDecHitStunSetPublicity(fighter_gobj);

    if ((fighter_gobj->anim_frame <= 0.0F) && (fp->status_vars.common.damage.hitstun_timer == 0))
    {
        ftMap_SetStatusWaitOrFall(fighter_gobj);
    }
}

// 0x8014053C
void ftCommonDamageAirCommonProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonDamageUpdateDustEffect(fighter_gobj);
    ftCommonDamageDecHitStunSetPublicity(fighter_gobj);

    if ((fighter_gobj->anim_frame <= 0.0F) && (fp->status_vars.common.damage.hitstun_timer == 0))
    {
        ftCommonDamageFallSetStatusFromDamage(fighter_gobj);
    }
}

// 0x801405A0
void ftCommonDamageCheckSetInvincible(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->hitlag_timer <= 0) && (fp->status_vars.common.damage.is_knockback_over != FALSE))
    {
        fp->status_vars.common.damage.is_knockback_over = FALSE;

        ftCommon_ApplyInvincibleTimer(fp, 1);
    }
}

// 0x801405E4
void ftCommonDamageSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->hitlag_timer <= 0)
    {
        ftMainSetFighterStatus(fighter_gobj, fp->status_vars.common.damage.status_id, 0.0F, 1.0F, (FTSTATUPDATE_DAMAGEPORT_PRESERVE | FTSTATUPDATE_SHUFFLETIME_PRESERVE));
        ftMainUpdateAnimCheckInterrupt(fighter_gobj);

        if (fp->status_info.status_id == ftStatus_Common_DamageFlyRoll)
        {
            ftCommonDamageFlyRollUpdateModelRoll(fighter_gobj);
        }
        fp->is_hitstun = TRUE;

        if (fp->status_vars.common.damage.is_knockback_over != FALSE)
        {
            fp->status_vars.common.damage.is_knockback_over = FALSE;

            ftCommon_ApplyInvincibleTimer(fp, 1);
        }
    }
}

// 0x80140674
void ftCommonDamageCommonProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.damage.hitstun_timer == 0)
    {
        fp->is_hitstun = FALSE;

        if (fp->ground_or_air == nMPKineticsAir)
        {
            if (ftHammerCheckHoldHammer(fighter_gobj) != FALSE)
            {
                ftCommonHammerFallProcInterrupt(fighter_gobj);
            }
            else ftCommonFallProcInterrupt(fighter_gobj);
        }
        else if (ftHammerCheckHoldHammer(fighter_gobj) != FALSE)
        {
            ftHammerProcInterrupt(fighter_gobj);
        }
        else ftCommonWaitProcInterrupt(fighter_gobj);
    }
}

// 0x8014070C
void ftCommonDamageAirCommonProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.damage.hitstun_timer == 0)
    {
        fp->is_hitstun = FALSE;

        ftCommonDamageFallProcInterrupt(fighter_gobj);
    }
}

// 0x80140744
void ftCommonDamageFlyRollUpdateModelRoll(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->joint[4]->rotate.vec.f.x = atan2f(fp->phys_info.vel_air.x + fp->phys_info.vel_damage_air.x, fp->phys_info.vel_air.y + fp->phys_info.vel_damage_air.y) * fp->lr;

    func_ovl2_800EB528(fp->joint[4]);
}

// 0x801407A8
void ftCommonDamageCommonProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == nMPKineticsAir)
    {
        if (fp->status_vars.common.damage.hitstun_timer == 0)
        {
            ftPhysics_ApplyAirVelDriftFastFall(fighter_gobj);
        }
        else ftPhysics_ApplyAirVelFriction(fighter_gobj);
    }
    else ftPhysics_ApplyGroundVelFriction(fighter_gobj);
    
    if (fp->status_info.status_id == ftStatus_Common_DamageFlyRoll)
    {
        ftCommonDamageFlyRollUpdateModelRoll(fighter_gobj);
    }
    if ((fp->throw_gobj != NULL) && (lbVector_Vec3fMagnitude(&fp->phys_info.vel_damage_air) < 70.0F))
    {
        ftCommon_ClearHitAll(fighter_gobj);
    }
}

// 0x80140878
void ftCommonDamageCommonProcLagUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->hitlag_timer != 0)
    {
        if ((SQUARE(fp->input.pl.stick_range.x) + SQUARE(fp->input.pl.stick_range.y)) >= SQUARE(FTCOMMON_DAMAGE_SMASH_DI_RANGE_MIN))
        {
            if ((fp->tap_stick_x < FTCOMMON_DAMAGE_SMASH_DI_BUFFER_FRAMES_MAX) || (fp->tap_stick_y < FTCOMMON_DAMAGE_SMASH_DI_BUFFER_FRAMES_MAX))
            {
                Vec3f *translate = &DObjGetStruct(fighter_gobj)->translate.vec.f;

                translate->x += fp->input.pl.stick_range.x * FTCOMMON_DAMAGE_SMASH_DI_RANGE_MUL;
                translate->y += fp->input.pl.stick_range.y * FTCOMMON_DAMAGE_SMASH_DI_RANGE_MUL;

                fp->tap_stick_x = fp->tap_stick_y = FTINPUT_STICKBUFFER_FRAMES_MAX;
            }
        }
    }
}

// 0x80140934
void func_ovl3_80140934(void) // Unused?
{
    return;
}

// 0x8014093C
void ftCommonDamageAirCommonProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if 
    (
        (ftMap_CheckAllFighterDamage(fighter_gobj) != FALSE)                &&
        (ftCommonWallDamageCheckGoto(fighter_gobj) == FALSE)                &&
        (fp->status_vars.common.damage.coll_mask_curr & MPCOLL_KIND_GROUND) &&
        (ftCommonPassiveStandCheckInterruptDamage(fighter_gobj) == FALSE)   &&
        (ftCommonPassiveCheckInterruptDamage(fighter_gobj) == FALSE)
    )
    {
        ftCommonDownBounceSetStatus(fighter_gobj);
    }
}

// 0x801409BC
f32 ftCommonDamageGetKnockbackAngle(s32 angle_i, sb32 ground_or_air, f32 knockback)
{
    f32 angle_f;

    if (angle_i != 361)
    {
        angle_f = F_CLC_DTOR32(angle_i);
    }
    else if (ground_or_air == nMPKineticsAir)
    {
        angle_f = FTCOMMON_DAMAGE_SAKURAI_ANGLE_DEFAULT_AR;
    }
    else if (knockback < FTCOMMON_DAMAGE_SAKURAI_KNOCKBACK_LOW)
    {
        angle_f = FTCOMMON_DAMAGE_SAKURAI_ANGLE_LOW_GR;
    }
    else
    {
        angle_f = F_CLC_DTOR32((((knockback - FTCOMMON_DAMAGE_SAKURAI_KNOCKBACK_LOW) / 0.099998474F) * FTCOMMON_DAMAGE_SAKURAI_ANGLE_HIGH_GD) + 1.0F);

        if (angle_f > FTCOMMON_DAMAGE_SAKURAI_ANGLE_HIGH_GR)
        {
            angle_f = FTCOMMON_DAMAGE_SAKURAI_ANGLE_HIGH_GR;
        }
    }
    return angle_f;
}

// 0x80140A94
s32 ftCommonDamageGetDamageLevel(f32 hitstun)
{
    s32 damage_level;

    if (hitstun < FTCOMMON_DAMAGE_LEVEL_HITSTUN_LOW)
    {
        damage_level = 0; // DamageX1
    }
    else if (hitstun < FTCOMMON_DAMAGE_LEVEL_HITSTUN_MID)
    {
        damage_level = 1; // DamageX2
    }
    else if (hitstun < FTCOMMON_DAMAGE_LEVEL_HITSTUN_HIGH)
    {
        damage_level = 2; // DamageX3
    }
    else damage_level = 3; // Fighter becomes airborne

    return damage_level;
}

// 0x80140B00
void ftCommonDamageSetPublicity(ftStruct *this_fp, f32 knockback, f32 angle)
{
    GObj *attacker_gobj = ftCommon_GetPlayerNumGObj(this_fp->damage_player_number);
    sb32 is_force_current_knockback;

    this_fp->status_vars.common.damage.publicity_knockback = knockback;
    this_fp->publicity_knockback = 0.0F;

    // By default, if knockback angle is between 75 and 115 degrees, the crowd is 20% less likely to gasp
    if ((angle > FTCOMMON_DAMAGE_PUBLIC_REACT_GASP_ANGLE_LOW) && (angle < FTCOMMON_DAMAGE_PUBLIC_REACT_GASP_ANGLE_HIGH))
    {
        this_fp->status_vars.common.damage.publicity_knockback *= FTCOMMON_DAMAGE_PUBLIC_REACT_GASP_KNOCKBACK_MUL;
    }
    if ((attacker_gobj != NULL) && (ftGetStruct(attacker_gobj)->publicity_knockback >= FTCOMMON_DAMAGE_KNOCKBACK_VERYHIGH))
    {
        is_force_current_knockback = TRUE;
    }
    else is_force_current_knockback = FALSE;

    ftPublicityCommonCheck(this_fp->fighter_gobj, this_fp->status_vars.common.damage.publicity_knockback, is_force_current_knockback);
}

// 0x80140BCC
sb32 ftCommonDamageCheckElementSetColAnim(GObj *fighter_gobj, s32 element, s32 damage_level)
{
    sb32 is_set_colanim;

    switch (element)
    {
    case gmHitCollision_Element_Fire:
        is_set_colanim = ftColor_CheckSetColAnimIndex(fighter_gobj, damage_level + 0xC, 0);
        break;

    case gmHitCollision_Element_Electric:
        is_set_colanim = func_ovl2_800E9AF4(fighter_gobj, damage_level);
        break;

    case gmHitCollision_Element_Freezing:
        is_set_colanim = ftColor_CheckSetColAnimIndex(fighter_gobj, damage_level + 0x20, 0);
        break;

    default:
        is_set_colanim = ftColor_CheckSetColAnimIndex(fighter_gobj, 5, 0);
        break;
    }
    return is_set_colanim;
}

// 0x80140C50
void ftCommonDamageCheckMakeScreenFlash(f32 knockback, s32 element)
{
    // Actually checking to run white screen flash effect
    switch (element)
    {
    case gmHitCollision_Element_Fire:
        if (knockback > FTCOMMON_DAMAGE_KNOCKBACK_VERYHIGH) 
        {
            ifScreenFlashSetColAnimID(0x53, 0);
        }
        break;

    case gmHitCollision_Element_Electric:
        if (knockback > FTCOMMON_DAMAGE_KNOCKBACK_VERYHIGH)
        {
            ifScreenFlashSetColAnimID(0x54, 0);
        }
        break;

    case gmHitCollision_Element_Freezing:
        if (knockback > FTCOMMON_DAMAGE_KNOCKBACK_VERYHIGH)
        {
            ifScreenFlashSetColAnimID(0x55, 0);
        }
        break;

    default:
        if (knockback > FTCOMMON_DAMAGE_KNOCKBACK_VERYHIGH)
        {
            ifScreenFlashSetColAnimID(0x52, 0);
        }
        break;
    }
}

// 0x80140D30
sb32 ftCommonDamageCheckCatchResist(ftStruct *fp)
{
    // Something to do with a fighter in Catch(Wait) being hit?

    if (fp->damage_element == gmHitCollision_Element_Sleep)
    {
        return FALSE;
    }
    if (fp->damage_knockback == 0.0F)
    {
        return TRUE;
    }
    if ((fp->hitlag_timer > 0) && (fp->x192_flag_b6) && (fp->damage_knockback < (fp->damage_stack + 30.0F)))
    {
        return TRUE;
    }
    if ((fp->ft_kind == Ft_Kind_Donkey) || (fp->ft_kind == Ft_Kind_PolyDonkey) || (fp->ft_kind == Ft_Kind_GiantDonkey))
    {
        if ((fp->status_info.status_id >= ftStatus_Donkey_ThrowFStartDamage) && (fp->status_info.status_id <= ftStatus_Donkey_ThrowFEndDamage) && (ftCommonDamageGetDamageLevel(ftCommon_DamageCalcHitStun(fp->damage_knockback)) < 3))
        {
            return TRUE;
        }
    }
    return FALSE;
}

// 0x80140E2C
void ftCommonDamageUpdateCatchResist(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->damage_knockback == 0.0F) || ((fp->hitlag_timer > 0) && (fp->x192_flag_b6) && (fp->damage_knockback < (fp->damage_stack + 30.0F))))
    {
        ftCommonDamageSetDamageColAnim(fighter_gobj);
    }
    else
    {
        ftCommon_ProcDamageStopVoice(fighter_gobj);
        ftDonkeyThrowFDamageSetStatus(fighter_gobj);
    }
}

// 0x80140EC0
sb32 ftCommonDamageCheckCaptureKeepHold(ftStruct *fp)
{
    if (fp->damage_queue < FTCOMMON_DAMAGE_CATCH_RELEASE_THRESHOLD)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80140EE4
void ftCommonDamageInitDamageVars(GObj *this_gobj, s32 status_id_replace, s32 damage, f32 knockback, s32 angle_start, s32 lr_damage,
s32 damage_index, s32 element, s32 damage_player_number, sb32 is_rumble, sb32 is_force_damage_sfx, sb32 is_allow_losecopy)
{
    ftStruct *this_fp = ftGetStruct(this_gobj);
    GObj *attacker_gobj;
    f32 angle_end = ftCommonDamageGetKnockbackAngle(angle_start, this_fp->ground_or_air, knockback);
    f32 vel_x = __cosf(angle_end) * knockback;
    s32 unused2;
    f32 vel_y = __sinf(angle_end) * knockback;
    f32 hitstun_timer = ftCommon_DamageCalcHitStun(knockback);
    s32 unused1;
    s32 damage_level;
    s32 status_id_set;
    s32 status_id_var;
    Vec3f vel_damage;
    f32 angle_diff;
    s32 unused3;

    this_fp->status_vars.common.damage.hitstun_timer = hitstun_timer;

    if (this_fp->status_vars.common.damage.hitstun_timer == 0)
    {
        this_fp->status_vars.common.damage.hitstun_timer = 1;
    }
    damage_level = ftCommonDamageGetDamageLevel(hitstun_timer);

    if (status_id_replace != -1)
    {
        damage_level = 3;
    }

    this_fp->lr = lr_damage;

    if (this_fp->ground_or_air == nMPKineticsAir)
    {
        status_id_var = status_id_set = dFTCommonDamageStatusAirIDs[damage_level][damage_index];

        this_fp->phys_info.vel_damage_air.x = -vel_x * this_fp->lr;
        this_fp->phys_info.vel_damage_air.y = vel_y;
        this_fp->phys_info.vel_damage_ground = 0.0F;
    }
    else
    {
        vel_damage.x = -vel_x * this_fp->lr;
        vel_damage.y = vel_y;
        vel_damage.z = 0.0F;

        angle_diff = lbVector_Vec3fAngleDiff(&this_fp->coll_data.ground_angle, &vel_damage);

        if (angle_diff < F_CST_DTOR32(90.0F)) // HALF_PI32
        {
            status_id_var = status_id_set = dFTCommonDamageStatusGroundIDs[damage_level][damage_index];

            ftMap_SetAir(this_fp);

            this_fp->phys_info.vel_damage_air.x = vel_damage.x;
            this_fp->phys_info.vel_damage_air.y = vel_damage.y;
            this_fp->phys_info.vel_damage_ground = 0.0F;
        }
        else if (damage_level == 3)
        {
            ftMap_SetAir(this_fp);

            status_id_var = status_id_set = dFTCommonDamageStatusGroundIDs[damage_level][damage_index];

            if (angle_diff > F_CST_DTOR32(100.0F)) // 1.7453293F
            {
                this_fp->phys_info.vel_damage_air.x = vel_damage.x;
                this_fp->phys_info.vel_damage_air.y = -vel_damage.y * 0.8F;
                this_fp->phys_info.vel_damage_ground = 0.0F;

                ftParticle_MakeEffectKind(this_gobj, Ef_Kind_ImpactWave, 0, NULL, NULL, this_fp->lr, 0, 0);
                ftParticle_MakeEffectKind(this_gobj, Ef_Kind_QuakeM0, 0, NULL, NULL, this_fp->lr, 0, 0);
            }
            else
            {
                this_fp->phys_info.vel_damage_air.x = vel_damage.x;
                this_fp->phys_info.vel_damage_air.y = vel_damage.y;
                this_fp->phys_info.vel_damage_ground = 0.0F;
            }
        }
        else
        {
            status_id_var = status_id_set = dFTCommonDamageStatusGroundIDs[damage_level][damage_index];

            this_fp->phys_info.vel_damage_ground = (-vel_x * this_fp->lr);
            this_fp->phys_info.vel_damage_air.x = this_fp->coll_data.ground_angle.y * (-vel_x * this_fp->lr);
            this_fp->phys_info.vel_damage_air.y = -this_fp->coll_data.ground_angle.x * (-vel_x * this_fp->lr);
        }
    }
    this_fp->phys_info.vel_air.x = this_fp->phys_info.vel_air.y = this_fp->phys_info.vel_air.z = this_fp->phys_info.vel_ground.x = 0.0F;

    if ((damage_level == 3) && (this_fp->ground_or_air == nMPKineticsAir))
    {
        if ((angle_end > FTCOMMON_DAMAGE_FIGHTER_FLYTOP_ANGLE_LOW) && (angle_end < FTCOMMON_DAMAGE_FIGHTER_FLYTOP_ANGLE_HIGH))
        {
            status_id_var = status_id_set = ftStatus_Common_DamageFlyTop;
        }
        else if ((this_fp->percent_damage >= FTCOMMON_DAMAGE_FIGHTER_FLYROLL_DAMAGE_MIN) && (mtTrigGetRandomFloat() < FTCOMMON_DAMAGE_FIGHTER_FLYROLL_RANDOM_CHANCE))
        {
            status_id_var = status_id_set = ftStatus_Common_DamageFlyRoll;           
        }
    }
    if (status_id_replace != -1)
    {
        status_id_set = status_id_replace;
    }

    if (((element == gmHitCollision_Element_Electric) && (status_id_set >= ftStatus_Common_DamageStart)) && (status_id_set <= ftStatus_Common_DamageEnd))
    {
        status_id_var = status_id_set;

        status_id_set = (damage_level == 3) ? ftStatus_Common_DamageE2 : ftStatus_Common_DamageE1;
    }
    this_fp->damage_player_number = damage_player_number;

    ftCommonDamageSetPublicity(this_fp, knockback, angle_end);

    if (damage != 0)
    {
        ftCommonDamageCheckElementSetColAnim(this_gobj, element, damage_level);
    }
    ftCommonDamageCheckMakeScreenFlash(knockback, element);

    if ((damage_level == 3) && (is_allow_losecopy != FALSE))
    {
        ftKirbySpecialNDamageCheckLoseCopy(this_gobj);
    }
    ftMainSetFighterStatus(this_gobj, status_id_set, 0.0F, 1.0F, FTSTATUPDATE_DAMAGEPORT_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(this_gobj);

    if (knockback >= 65000.0F)
    {
        this_fp->status_vars.common.damage.is_knockback_over = TRUE;
    }
    else this_fp->status_vars.common.damage.is_knockback_over = FALSE;
    
    if ((this_fp->status_info.status_id == ftStatus_Common_DamageE1) || (this_fp->status_info.status_id == ftStatus_Common_DamageE2))
    {
        this_fp->proc_effect = ftCommonDamageSetStatus;
        this_fp->status_vars.common.damage.status_id = status_id_var;
    }
    else this_fp->proc_effect = ftCommonDamageCheckSetInvincible;
    
    this_fp->proc_lagupdate = ftCommonDamageCommonProcLagUpdate;

    this_fp->tap_stick_x = this_fp->tap_stick_y = FTINPUT_STICKBUFFER_FRAMES_MAX;

    this_fp->damage_stack = knockback;

    if ((damage_level == 3) || (is_rumble != FALSE))
    {
        ftMainMakeRumble(this_fp, 2, 0);
    }
    if (this_fp->status_info.status_id == ftStatus_Common_DamageFlyRoll)
    {
        ftCommonDamageFlyRollUpdateModelRoll(this_gobj);
    }
    ftCommonDamageSetDustEffectInterval(this_fp);

    if (this_fp->status_vars.common.damage.dust_effect_int != 0)
    {
        this_fp->status_vars.common.damage.dust_effect_int = 1;
    }
    if ((hitstun_timer >= FTCOMMON_DAMAGE_FIGHTER_DAMAGEVOICE_MIN) && (this_fp->attributes->damage_sfx != 0x2B7) || (is_force_damage_sfx != FALSE))
    {
        func_800269C0_275C0(this_fp->attributes->damage_sfx);
    }

    this_fp->is_hitstun = TRUE;
    this_fp->time_since_last_z = FTINPUT_ZTRIGLAST_FRAMES_MAX;

    if ((damage_level == 3) && (knockback >= FTCOMMON_DAMAGE_FIGHTER_PLAYERTAG_KNOCKBACK_MIN))
    {
        ftCommon_SetPlayerTagWait(this_gobj, FTCOMMON_DAMAGE_FIGHTER_PLAYERTAG_HIDE_FRAMES);
    }
    this_fp->status_vars.common.damage.coll_mask_curr = 0;

    attacker_gobj = ftCommon_GetPlayerNumGObj(damage_player_number);

    if (attacker_gobj != NULL)
    {
        ftStruct *attacker_fp = ftGetStruct(attacker_gobj);

        attacker_fp->attack_hit_count++;
        attacker_fp->attack_knockback = knockback;
    }
}

// 0x80141560 - Enter sleep or common damage state
void ftCommonDamageGotoDamageStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->is_cliff_hold)
    {
        fp->cliffcatch_wait = FTCOMMON_CLIFF_CATCH_WAIT;
    }
    if (fp->damage_element == gmHitCollision_Element_Sleep)
    {
        ftCommonFuraSleepSetStatus(fighter_gobj);
    }
    else ftCommonDamageInitDamageVars(fighter_gobj, -1, fp->damage_queue, fp->damage_knockback, fp->damage_angle, fp->lr_damage, fp->damage_index, fp->damage_element, fp->damage_player_number, FALSE, FALSE, TRUE);
}

// 0x801415F8
void ftCommonDamageUpdateDamageColAnim(GObj *fighter_gobj, f32 knockback, s32 element)
{
    if (ftCommonDamageCheckElementSetColAnim(fighter_gobj, element, ftCommonDamageGetDamageLevel(ftCommon_DamageCalcHitStun(knockback))) != 0)
    {
        ftMainRunUpdateColAnim(fighter_gobj);
    }
}

// 0x80141648
void ftCommonDamageSetDamageColAnim(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonDamageUpdateDamageColAnim(fighter_gobj, fp->damage_knockback, fp->damage_element);
}

// 0x80141670
void ftCommonDamageUpdateMain(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *grab_gobj = this_fp->catch_gobj;
    ftStruct *grab_fp;

    if (grab_gobj != NULL)
    {
        grab_fp = ftGetStruct(grab_gobj);

        if (ftCommonDamageCheckCatchResist(this_fp) != FALSE)
        {
            if (grab_fp->damage_knockback != 0)
            {
                if (ftCommonDamageCheckCaptureKeepHold(grab_fp) != FALSE)
                {
                    grab_fp->damage_lag = this_fp->damage_lag;
                    grab_fp->hitlag_mul = this_fp->hitlag_mul;

                    ftCommonDamageUpdateCatchResist(fighter_gobj);

                    grab_fp->damage_kind = 2;
                }
                else
                {
                    ftCommonThrownDecideFighterLoseGrip(fighter_gobj, grab_gobj);
                    ftCommon_ProcDamageStopVoice(fighter_gobj);
                    ftCommonDamageGotoDamageStatus(fighter_gobj);

                    grab_fp->damage_kind = 1;
                }
            }
            else ftCommonDamageUpdateCatchResist(fighter_gobj);
        }
        else if (grab_fp->damage_knockback != 0)
        {
            if (ftCommonDamageCheckCaptureKeepHold(grab_fp) != FALSE)
            {
                ftCommonThrownUpdateDamageStats(grab_fp);
            }
            ftCommonThrownDecideFighterLoseGrip(fighter_gobj, grab_gobj);
            ftCommon_ProcDamageStopVoice(fighter_gobj);
            ftCommonDamageGotoDamageStatus(fighter_gobj);

            grab_fp->damage_kind = 1;
        }
        else
        {
            ftCommon_ProcDamageStopVoice(grab_gobj);
            ftCommonThrownSetStatusDamageRelease(grab_gobj);

            if (this_fp->x192_flag_b3)
            {
                ftCommonThrownReleaseFighterLoseGrip(fighter_gobj);
            }
            this_fp->catch_gobj = NULL;

            ftCommon_ProcDamageStopVoice(fighter_gobj);
            ftCommonDamageGotoDamageStatus(fighter_gobj);
        }
        return;
    }
    else grab_gobj = this_fp->capture_gobj;

    if (grab_gobj != NULL)
    {
        grab_fp = ftGetStruct(grab_gobj);

        if (ftCommonDamageCheckCaptureKeepHold(this_fp) != FALSE)
        {
            if (grab_fp->damage_knockback != 0)
            {
                if (ftCommonDamageCheckCatchResist(grab_fp) != 0)
                {
                    this_fp->damage_lag = grab_fp->damage_lag;
                    this_fp->hitlag_mul = grab_fp->hitlag_mul;
                    grab_fp->damage_kind = 3;

                    ftCommonDamageSetDamageColAnim(fighter_gobj);
                }
                else
                {
                    ftCommonThrownUpdateDamageStats(this_fp);
                    ftCommonThrownDecideFighterLoseGrip(grab_gobj, fighter_gobj);
                    ftCommon_ProcDamageStopVoice(fighter_gobj);
                    ftCommonDamageGotoDamageStatus(fighter_gobj);

                    grab_fp->damage_kind = 1;
                }
            }
            else
            {
                grab_fp->hitlag_timer = gmCommon_DamageCalcHitLag(this_fp->damage_lag, grab_fp->status_info.status_id, grab_fp->hitlag_mul);

                this_fp->input.pl.button_tap = this_fp->input.pl.button_tap_prev = 0;

                if (this_fp->proc_lagstart != NULL)
                {
                    this_fp->proc_lagstart(fighter_gobj);
                }
                ftCommonDamageSetDamageColAnim(fighter_gobj);
            }
        }
        else if (grab_fp->damage_knockback != 0)
        {
            ftCommonThrownDecideFighterLoseGrip(grab_gobj, fighter_gobj);
            ftCommon_ProcDamageStopVoice(fighter_gobj);
            ftCommonDamageGotoDamageStatus(fighter_gobj);

            grab_fp->damage_kind = 1;
        }
        else
        {
            ftCommonThrownDecideFighterLoseGrip(grab_gobj, fighter_gobj);
            ftCommon_ProcDamageStopVoice(fighter_gobj);
            ftCommonDamageGotoDamageStatus(fighter_gobj);
            ftCommon_ProcDamageStopVoice(grab_gobj);
            ftCommonThrownSetStatusNoDamageRelease(grab_gobj);
        }
        return;
    }
    if (this_fp->item_hold != NULL)
    {
        if ((itGetStruct(this_fp->item_hold)->weight == It_Weight_Heavy) && ((this_fp->ft_kind == Ft_Kind_Donkey) || (this_fp->ft_kind == Ft_Kind_PolyDonkey) || (this_fp->ft_kind == Ft_Kind_GiantDonkey)))
        {
            if (ftCommonDamageCheckCatchResist(this_fp) != FALSE)
            {
                ftCommonDamageUpdateCatchResist(fighter_gobj);
            }
            else
            {
                ftSetupDropItem(this_fp);
                ftCommon_ProcDamageStopVoice(fighter_gobj);
                ftCommonDamageGotoDamageStatus(fighter_gobj);
            }
            return;
        }
    }
    if ((this_fp->damage_element != gmHitCollision_Element_Sleep) && ((this_fp->damage_knockback == 0.0F) || ((this_fp->hitlag_timer > 0) && (this_fp->x192_flag_b6) && (this_fp->damage_knockback < (this_fp->damage_stack + 30.0F)))))
    {
        ftCommonDamageSetDamageColAnim(fighter_gobj);
    }
    else
    {
        ftCommon_ProcDamageStopVoice(fighter_gobj);
        ftCommonDamageGotoDamageStatus(fighter_gobj);
    }
}
