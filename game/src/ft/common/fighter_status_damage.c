#include <ft/fighter.h>
#include <ft/chara/ftdonkey/ftdonkey.h>
#include <it/item.h>

// 0x80140340
void ftCommon_Damage_SetDustGFXInterval(ftStruct *fp)
{
    f32 vel = (fp->ground_or_air == GA_Air) ? vec3f_mag(&fp->phys_info.vel_damage_air) : ABSF(fp->phys_info.vel_damage_ground);
    s32 spawn_gfx_wait;

    if (vel < FTCOMMON_DAMAGE_GFX_KNOCKBACK_LOW)
    {
        spawn_gfx_wait = FTCOMMON_DAMAGE_GFX_WAIT_LOW;
    }
    else if (vel < FTCOMMON_DAMAGE_GFX_KNOCKBACK_MID_LOW)
    {
        spawn_gfx_wait = FTCOMMON_DAMAGE_GFX_WAIT_MID_LOW;
    }
    else if (vel < FTCOMMON_DAMAGE_GFX_KNOCKBACK_MID)
    {
        spawn_gfx_wait = FTCOMMON_DAMAGE_GFX_WAIT_MID;
    }
    else if (vel < FTCOMMON_DAMAGE_GFX_KNOCKBACK_MID_HIGH)
    {
        spawn_gfx_wait = FTCOMMON_DAMAGE_GFX_WAIT_MID_HIGH;
    }
    else if (vel < FTCOMMON_DAMAGE_GFX_KNOCKBACK_HIGH)
    {
        spawn_gfx_wait = FTCOMMON_DAMAGE_GFX_WAIT_HIGH;
    }
    else spawn_gfx_wait = FTCOMMON_DAMAGE_GFX_WAIT_DEFAULT;
    
    fp->status_vars.common.damage.dust_gfx_int = spawn_gfx_wait;
}

void ftCommon_Damage_UpdateDustGFX(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.damage.dust_gfx_int != 0)
    {
        fp->status_vars.common.damage.dust_gfx_int--;

        if (fp->status_vars.common.damage.dust_gfx_int == 0)
        {
            ftCommon_GFXSpawn(fighter_gobj, 0x11, 4, 0, 0, fp->lr, 0, 0);
            ftCommon_Damage_SetDustGFXInterval(fp);
        }
    }
}

// 0x801404B8
void ftCommon_Damage_DecHitStunSetPublicity(GObj *fighter_gobj)
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
void ftCommon_DamageCommon_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_Damage_DecHitStunSetPublicity(fighter_gobj);

    if ((fighter_gobj->anim_frame <= 0.0F) && (fp->status_vars.common.damage.hitstun_timer == 0))
    {
        func_ovl2_800DEE54(fighter_gobj);
    }
}

// 0x8014053C
void ftCommon_DamageAirCommon_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_Damage_UpdateDustGFX(fighter_gobj);
    ftCommon_Damage_DecHitStunSetPublicity(fighter_gobj);

    if ((fighter_gobj->anim_frame <= 0.0F) && (fp->status_vars.common.damage.hitstun_timer == 0))
    {
        ftCommon_DamageFall_SetStatusFromDamage(fighter_gobj);
    }
}

// 0x801405A0
void ftCommon_Damage_CheckSetInvincible(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->hitlag_timer <= 0) && (fp->status_vars.common.damage.is_knockback_over != FALSE))
    {
        fp->status_vars.common.damage.is_knockback_over = FALSE;

        ftCommon_ApplyInvincibleTimer(fp, 1);
    }
}

// 0x801405E4
void ftCommon_Damage_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->hitlag_timer <= 0)
    {
        ftStatus_Update(fighter_gobj, fp->status_vars.common.damage.status_id, 0.0F, 1.0F, (FTSTATUPDATE_DAMAGEPORT_PRESERVE | FTSTATUPDATE_SHUFFLETIME_PRESERVE));
        ftAnim_Update(fighter_gobj);

        if (fp->status_info.status_id == ftStatus_Common_DamageFlyRoll)
        {
            ftCommon_DamageFlyRoll_UpdateModelPitch(fighter_gobj);
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
void ftCommon_DamageCommon_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.damage.hitstun_timer == 0)
    {
        fp->is_hitstun = FALSE;

        if (fp->ground_or_air == GA_Air)
        {
            if (ftCommon_HammerCheckHold(fighter_gobj) != FALSE)
            {
                ftCommon_HammerFall_ProcInterrupt(fighter_gobj);
            }
            else ftCommon_Fall_ProcInterrupt(fighter_gobj);
        }
        else if (ftCommon_HammerCheckHold(fighter_gobj) != FALSE)
        {
            ftCommon_HammerProcInterrupt(fighter_gobj);
        }
        else ftCommon_Wait_ProcInterrupt(fighter_gobj);
    }
}

// 0x8014070C
void ftCommon_DamageAirCommon_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.damage.hitstun_timer == 0)
    {
        fp->is_hitstun = FALSE;

        ftCommon_DamageFall_ProcInterrupt(fighter_gobj);
    }
}

// 0x80140744
void ftCommon_DamageFlyRoll_UpdateModelPitch(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->joint[4]->rotate.x = atan2f(fp->phys_info.vel_air.x + fp->phys_info.vel_damage_air.x, fp->phys_info.vel_air.y + fp->phys_info.vel_damage_air.y) * fp->lr;

    func_ovl2_800EB528(fp->joint[4]);
}

// 0x801407A8
void ftCommon_DamageCommon_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        if (fp->status_vars.common.damage.hitstun_timer == 0)
        {
            jtgt_ovl2_800D9160(fighter_gobj);
        }
        else func_ovl2_800D91EC(fighter_gobj);
    }
    else func_ovl2_800D8BB4(fighter_gobj);
    
    if (fp->status_info.status_id == ftStatus_Common_DamageFlyRoll)
    {
        ftCommon_DamageFlyRoll_UpdateModelPitch(fighter_gobj);
    }
    if ((fp->throw_gobj != NULL) && (vec3f_mag(&fp->phys_info.vel_damage_air) < 70.0F))
    {
        ftCommon_ClearHitAll(fighter_gobj);
    }
}

// 0x80140878
void ftCommon_DamageCommon_ProcLagUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->hitlag_timer != 0)
    {
        if ((SQUARE(fp->input.pl.stick_range.x) + SQUARE(fp->input.pl.stick_range.y)) >= SQUARE(FTCOMMON_DAMAGE_SMASH_DI_RANGE_MIN))
        {
            if ((fp->tap_stick_x < FTCOMMON_DAMAGE_SMASH_DI_BUFFER_FRAMES_MAX) || (fp->tap_stick_y < FTCOMMON_DAMAGE_SMASH_DI_BUFFER_FRAMES_MAX))
            {
                Vec3f *translate = &DObjGetStruct(fighter_gobj)->translate;

                translate->x += fp->input.pl.stick_range.x * FTCOMMON_DAMAGE_SMASH_DI_RANGE_MUL;
                translate->y += fp->input.pl.stick_range.y * FTCOMMON_DAMAGE_SMASH_DI_RANGE_MUL;

                fp->tap_stick_x = fp->tap_stick_y = U8_MAX - 1;
            }
        }
    }
}

void func_ovl3_80140934(void) // Unused
{
    return;
}

// 0x8014093C
void ftCommon_DamageAirCommon_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if 
    (
        (func_ovl2_800DEDAC(fighter_gobj) != FALSE)                         &&
        (ftCommon_WallDamage_CheckGoto(fighter_gobj) == FALSE)              &&
        (fp->status_vars.common.damage.coll_mask_curr & MPCOLL_MASK_GROUND) &&
        (ftCommon_PassiveStand_CheckInterruptDamage(fighter_gobj) == FALSE)                         &&
        (ftCommon_Passive_CheckInterruptDamage(fighter_gobj) == FALSE)
    )
    {
        ftCommon_DownBounce_SetStatus(fighter_gobj);
    }
}

// 0x801409BC
f32 gmCommon_Damage_GetKnockbackAngle(s32 angle_i, s32 ground_or_air, f32 knockback)
{
    f32 angle_f;

    if (angle_i != 361)
    {
        angle_f = F_DEG_TO_RAD(angle_i);
    }
    else if (ground_or_air == GA_Air)
    {
        angle_f = FTCOMMON_DAMAGE_SAKURAI_ANGLE_DEFAULT_AR;
    }
    else if (knockback < FTCOMMON_DAMAGE_SAKURAI_KNOCKBACK_LOW)
    {
        angle_f = FTCOMMON_DAMAGE_SAKURAI_ANGLE_LOW_GR;
    }
    else
    {
        angle_f = F_DEG_TO_RAD(((((knockback - FTCOMMON_DAMAGE_SAKURAI_KNOCKBACK_LOW) / 0.099998474F) * FTCOMMON_DAMAGE_SAKURAI_ANGLE_HIGH_GD) + 1.0F));

        if (angle_f > FTCOMMON_DAMAGE_SAKURAI_ANGLE_HIGH_GR)
        {
            angle_f = FTCOMMON_DAMAGE_SAKURAI_ANGLE_HIGH_GR;
        }
    }
    return angle_f;
}

// 0x80140A94
s32 ftCommon_Damage_GetDamageLevel(f32 hitstun)
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
void ftCommon_Damage_SetPublicReact(ftStruct *this_fp, f32 knockback, f32 angle)
{
    GObj *attacker_gobj = ftCommon_GetPlayerNumGObj(this_fp->damage_player_number);
    bool32 unk_bool;

    this_fp->status_vars.common.damage.publicity_knockback = knockback;
    this_fp->publicity_knockback = 0.0F;

    // By default, if knockback angle is between 75 and 115 degrees, the crowd is 20% less likely to gasp
    if ((angle > FTCOMMON_DAMAGE_PUBLIC_REACT_GASP_ANGLE_LOW) && (angle < FTCOMMON_DAMAGE_PUBLIC_REACT_GASP_ANGLE_HIGH))
    {
        this_fp->status_vars.common.damage.publicity_knockback *= FTCOMMON_DAMAGE_PUBLIC_REACT_GASP_KNOCKBACK_MUL;
    }
    if ((attacker_gobj != NULL) && (ftGetStruct(attacker_gobj)->publicity_knockback >= FTCOMMON_DAMAGE_PUBLIC_REACT_GASP_KNOCKBACK_UNK))
    {
        unk_bool = TRUE;
    }
    else unk_bool = FALSE;

    func_ovl3_80164F2C(this_fp->fighter_gobj, this_fp->status_vars.common.damage.publicity_knockback, unk_bool);
}

// 0x80140BCC
bool32 ftCommon_Damage_CheckElementSetColAnim(GObj *fighter_gobj, s32 element, s32 damage_level)
{
    bool32 is_set_colanim;

    switch (element)
    {
    case gmHitCollision_Element_Fire:
        is_set_colanim = ftColor_CheckSetColAnimIndex(fighter_gobj, damage_level + 0xC, 0);
        break;

    case gmHitCollision_Element_Electric:
        is_set_colanim = func_ovl2_800E9AF4(fighter_gobj, damage_level);
        break;

    case gmHitCollision_Element_Sleep:
        is_set_colanim = ftColor_CheckSetColAnimIndex(fighter_gobj, damage_level + 0x20, 0);
        break;

    default:
        is_set_colanim = ftColor_CheckSetColAnimIndex(fighter_gobj, 5, 0);
        break;
    }
    return is_set_colanim;
}

// 0x80140C50
void func_ovl3_80140C50(f32 knockback, s32 element)
{
    switch (element)
    {
    case gmHitCollision_Element_Fire:
        if (knockback > FTCOMMON_DAMAGE_PUBLIC_REACT_GASP_KNOCKBACK_UNK)
        {
            func_ovl2_80115BF0(0x53, 0);
        }
        break;

    case gmHitCollision_Element_Electric:
        if (knockback > FTCOMMON_DAMAGE_PUBLIC_REACT_GASP_KNOCKBACK_UNK)
        {
            func_ovl2_80115BF0(0x54, 0);
        }
        break;

    case gmHitCollision_Element_Sleep:
        if (knockback > FTCOMMON_DAMAGE_PUBLIC_REACT_GASP_KNOCKBACK_UNK)
        {
            func_ovl2_80115BF0(0x55, 0);
        }
        break;

    default:
        if (knockback > FTCOMMON_DAMAGE_PUBLIC_REACT_GASP_KNOCKBACK_UNK)
        {
            func_ovl2_80115BF0(0x52, 0);
        }
        break;
    }
}

// 0x80140D30
bool32 func_ovl3_80140D30(ftStruct *fp)
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
        if ((fp->status_info.status_id >= ftStatus_Donkey_ThrowFWait) && (fp->status_info.status_id <= ftStatus_Donkey_ThrowFDamage) && (ftCommon_Damage_GetDamageLevel(ftCommon_DamageCalcHitStun(fp->damage_knockback)) < 3))
        {
            return TRUE;
        }
    }
    return FALSE;
}

// 0x80140E2C
void func_ovl3_80140E2C(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->damage_knockback == 0.0F) || ((fp->hitlag_timer > 0) && (fp->x192_flag_b6) && (fp->damage_knockback < (fp->damage_stack + 30.0F))))
    {
        ftCommon_Damage_SetDamageColAnim(fighter_gobj);
    }
    else
    {
        ftCommon_ProcDamageStopVoice(fighter_gobj);
        ftDonkey_ThrowFDamage_SetStatus(fighter_gobj);
    }
}

// 0x80140EC0
bool32 ftCommon_Damage_CheckCaptureKeepHold(ftStruct *fp)
{
    if (fp->damage_queue < FTCOMMON_DAMAGE_CATCH_RELEASE_THRESHOLD)
    {
        return TRUE;
    }
    else return FALSE;
}

s32 Fighter_StatusList_DamageGround[3][3] = 
{ 
    { ftStatus_Common_DamageLw1,   ftStatus_Common_DamageN1,    ftStatus_Common_DamageHi1 },
    { ftStatus_Common_DamageLw2,   ftStatus_Common_DamageN2,    ftStatus_Common_DamageHi2 },
    { ftStatus_Common_DamageLw3,   ftStatus_Common_DamageN3,    ftStatus_Common_DamageHi3 } 
};

s32 Fighter_StatusList_DamageAir[4][3] = 
{ 
    { ftStatus_Common_DamageFlyLw, ftStatus_Common_DamageFlyN,  ftStatus_Common_DamageFlyHi },
    { ftStatus_Common_DamageAir1,  ftStatus_Common_DamageAir1,  ftStatus_Common_DamageAir1  },
    { ftStatus_Common_DamageAir2,  ftStatus_Common_DamageAir2,  ftStatus_Common_DamageAir2  },
    { ftStatus_Common_DamageAir3,  ftStatus_Common_DamageAir3,  ftStatus_Common_DamageAir3  } 
};

// 0x80140EE4
void ftCommon_Damage_InitDamageVars(GObj *this_gobj, s32 status_id_replace, s32 damage, f32 knockback, s32 angle_start, s32 lr_damage,
s32 damage_index, s32 element, s32 damage_player_number, s32 arg9, bool32 unk_bool, bool32 is_publicity)
{
    ftStruct *this_fp = ftGetStruct(this_gobj);
    GObj *attacker_gobj;
    f32 angle_end = gmCommon_Damage_GetKnockbackAngle(angle_start, this_fp->ground_or_air, knockback);
    f32 vel_x = cosf(angle_end) * knockback;
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
    damage_level = ftCommon_Damage_GetDamageLevel(hitstun_timer);

    if (status_id_replace != -1)
    {
        damage_level = 3;
    }

    this_fp->lr = lr_damage;

    if (this_fp->ground_or_air == GA_Air)
    {
        status_id_var = status_id_set = Fighter_StatusList_DamageAir[damage_level][damage_index];

        this_fp->phys_info.vel_damage_air.x = -vel_x * this_fp->lr;
        this_fp->phys_info.vel_damage_air.y = vel_y;
        this_fp->phys_info.vel_damage_ground = 0.0F;
    }
    else
    {
        vel_damage.x = -vel_x * this_fp->lr;
        vel_damage.y = vel_y;
        vel_damage.z = 0.0F;

        angle_diff = vec3f_angle_diff(&this_fp->coll_data.ground_angle, &vel_damage);

        if (angle_diff < F_DEG_TO_RAD(90.0F)) // HALF_PI32
        {
            status_id_var = status_id_set = Fighter_StatusList_DamageGround[damage_level][damage_index];

            ftMap_SetAir(this_fp);

            this_fp->phys_info.vel_damage_air.x = vel_damage.x;
            this_fp->phys_info.vel_damage_air.y = vel_damage.y;
            this_fp->phys_info.vel_damage_ground = 0.0F;
        }
        else if (damage_level == 3)
        {
            ftMap_SetAir(this_fp);

            status_id_var = status_id_set = Fighter_StatusList_DamageGround[damage_level][damage_index];

            if (angle_diff > F_DEG_TO_RAD(100.0F)) // 1.7453293F
            {
                this_fp->phys_info.vel_damage_air.x = vel_damage.x;
                this_fp->phys_info.vel_damage_air.y = -vel_damage.y * 0.8F;
                this_fp->phys_info.vel_damage_ground = 0.0F;

                ftCommon_GFXSpawn(this_gobj, 0x16, 0, 0, 0, this_fp->lr, 0, 0);
                ftCommon_GFXSpawn(this_gobj, 0x20, 0, 0, 0, this_fp->lr, 0, 0);
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
            status_id_var = status_id_set = Fighter_StatusList_DamageGround[damage_level][damage_index];

            this_fp->phys_info.vel_damage_ground = (-vel_x * this_fp->lr);
            this_fp->phys_info.vel_damage_air.x = this_fp->coll_data.ground_angle.y * (-vel_x * this_fp->lr);
            this_fp->phys_info.vel_damage_air.y = -this_fp->coll_data.ground_angle.x * (-vel_x * this_fp->lr);
        }
    }
    this_fp->phys_info.vel_air.x = this_fp->phys_info.vel_air.y = this_fp->phys_info.vel_air.z = this_fp->phys_info.vel_ground.x = 0.0F;

    if ((damage_level == 3) && (this_fp->ground_or_air == GA_Air))
    {
        if ((angle_end > FTCOMMON_DAMAGE_FIGHTER_FLYTOP_ANGLE_LOW) && (angle_end < FTCOMMON_DAMAGE_FIGHTER_FLYTOP_ANGLE_HIGH))
        {
            status_id_var = status_id_set = ftStatus_Common_DamageFlyTop;
        }
        else if ((this_fp->percent_damage >= FTCOMMON_DAMAGE_FIGHTER_FLYROLL_DAMAGE_MIN) && (lbRandom_GetFloat() < FTCOMMON_DAMAGE_FIGHTER_FLYROLL_RANDOM_CHANCE))
        {
            status_id_var = status_id_set = ftStatus_Common_DamageFlyRoll;           
        }
    }
    if (status_id_replace != -1)
    {
        status_id_set = status_id_replace;
    }

    if (((element == gmHitCollision_Element_Electric) && (status_id_set >= ftStatus_Common_DamageHi1)) && (status_id_set <= ftStatus_Common_WallDamage))
    {
        status_id_var = status_id_set;

        if (damage_level == 3)
        {
            status_id_set = ftStatus_Common_DamageElec2;
        }
        else
        {
            status_id_set = ftStatus_Common_DamageElec1;
        }
    }
    this_fp->damage_player_number = damage_player_number;

    ftCommon_Damage_SetPublicReact(this_fp, knockback, angle_end);

    if (damage != 0)
    {
        ftCommon_Damage_CheckElementSetColAnim(this_gobj, element, damage_level);
    }
    func_ovl3_80140C50(knockback, element);

    if ((damage_level == 3) && (is_publicity != FALSE))
    {
        ftKirby_SpecialN_DamageCheckLoseCopy(this_gobj);
    }
    ftStatus_Update(this_gobj, status_id_set, 0.0F, 1.0F, FTSTATUPDATE_DAMAGEPORT_PRESERVE);
    ftAnim_Update(this_gobj);

    if (knockback >= 65000.0F)
    {
        this_fp->status_vars.common.damage.is_knockback_over = TRUE;
    }
    else this_fp->status_vars.common.damage.is_knockback_over = FALSE;
    
    if ((this_fp->status_info.status_id == ftStatus_Common_DamageElec1) || (this_fp->status_info.status_id == ftStatus_Common_DamageElec2))
    {
        this_fp->proc_gfx = ftCommon_Damage_SetStatus;
        this_fp->status_vars.common.damage.status_id = status_id_var;
    }
    else this_fp->proc_gfx = ftCommon_Damage_CheckSetInvincible;
    
    this_fp->proc_lagupdate = ftCommon_DamageCommon_ProcLagUpdate;

    this_fp->tap_stick_x = this_fp->tap_stick_y = U8_MAX - 1;

    this_fp->damage_stack = knockback;

    if ((damage_level == 3) || (arg9 != 0))
    {
        ftMain_MakeRumble(this_fp, 2, 0);
    }
    if (this_fp->status_info.status_id == ftStatus_Common_DamageFlyRoll)
    {
        ftCommon_DamageFlyRoll_UpdateModelPitch(this_gobj);
    }
    ftCommon_Damage_SetDustGFXInterval(this_fp);

    if (this_fp->status_vars.common.damage.dust_gfx_int != 0)
    {
        this_fp->status_vars.common.damage.dust_gfx_int = 1;
    }
    if ((!(hitstun_timer >= FTCOMMON_DAMAGE_FIGHTER_REACT_GASP_KNOCKBACK_MIN)) || (this_fp->attributes->damage_sfx == 0x2B7))
    {
        // ???

        if (unk_bool == FALSE) goto next;
        {

        }
    }
    func_800269C0(this_fp->attributes->damage_sfx);
next:
    this_fp->is_hitstun = TRUE;
    this_fp->time_since_last_z = U16_MAX + 1;

    if ((damage_level == 3) && (knockback >= 130.0F))
    {
        func_ovl2_800E7F7C(this_gobj, 0xA);
    }
    this_fp->status_vars.common.damage.coll_mask = 0;

    attacker_gobj = ftCommon_GetPlayerNumGObj(damage_player_number);

    if (attacker_gobj != NULL)
    {
        ftStruct *attacker_fp = ftGetStruct(attacker_gobj);

        attacker_fp->attack_hit_count++;
        attacker_fp->attack_knockback = knockback;
    }
}

// 0x80141560 - Enter sleep or common damage state
void ftCommon_Damage_GotoDamageStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->x190_flag_b7)
    {
        fp->cliffcatch_wait = FTCOMMON_CLIFF_CATCH_WAIT;
    }
    if (fp->damage_element == gmHitCollision_Element_Sleep)
    {
        ftCommon_FuraSleep_SetStatus(fighter_gobj);
    }
    else ftCommon_Damage_InitDamageVars(fighter_gobj, -1, fp->damage_queue, fp->damage_knockback, fp->damage_angle, fp->lr_damage, fp->damage_index, fp->damage_element, fp->damage_player_number, 0, 0, TRUE);
}

// 0x801415F8
void ftCommon_Damage_UpdateDamageColAnim(GObj *fighter_gobj, f32 knockback, s32 element)
{
    if (ftCommon_Damage_CheckElementSetColAnim(fighter_gobj, element, ftCommon_Damage_GetDamageLevel(ftCommon_DamageCalcHitStun(knockback))) != FALSE)
    {
        ftCommon_UpdateColAnim(fighter_gobj);
    }
}

// 0x80141648
void ftCommon_Damage_SetDamageColAnim(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_Damage_UpdateDamageColAnim(fighter_gobj, fp->damage_knockback, fp->damage_element);
}

// 0x80141670
void ftCommon_Damage_UpdateMain(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *grab_gobj = this_fp->catch_gobj;
    ftStruct *grab_fp;

    if (grab_gobj != NULL)
    {
        grab_fp = ftGetStruct(grab_gobj);

        if (func_ovl3_80140D30(this_fp) != FALSE)
        {
            if (grab_fp->damage_knockback != 0)
            {
                if (ftCommon_Damage_CheckCaptureKeepHold(grab_fp) != FALSE)
                {
                    grab_fp->damage_lag = this_fp->damage_lag;
                    grab_fp->hitlag_mul = this_fp->hitlag_mul;

                    func_ovl3_80140E2C(fighter_gobj);

                    grab_fp->damage_kind = 2;
                }
                else
                {
                    func_ovl3_8014AECC(fighter_gobj, grab_gobj);
                    ftCommon_ProcDamageStopVoice(fighter_gobj);
                    ftCommon_Damage_GotoDamageStatus(fighter_gobj);

                    grab_fp->damage_kind = 1;
                }
            }
            else func_ovl3_80140E2C(fighter_gobj);
        }
        else if (grab_fp->damage_knockback != 0)
        {
            if (ftCommon_Damage_CheckCaptureKeepHold(grab_fp) != FALSE)
            {
                func_ovl3_8014B2AC(grab_fp);
            }
            func_ovl3_8014AECC(fighter_gobj, grab_gobj);
            ftCommon_ProcDamageStopVoice(fighter_gobj);
            ftCommon_Damage_GotoDamageStatus(fighter_gobj);

            grab_fp->damage_kind = 1;
        }
        else
        {
            ftCommon_ProcDamageStopVoice(grab_gobj);
            func_ovl3_8014B330(grab_gobj);

            if (this_fp->x192_flag_b3)
            {
                func_ovl3_8014ADB0(fighter_gobj);
            }
            this_fp->catch_gobj = NULL;

            ftCommon_ProcDamageStopVoice(fighter_gobj);
            ftCommon_Damage_GotoDamageStatus(fighter_gobj);
        }
        return;
    }
    else grab_gobj = this_fp->capture_gobj;

    if (grab_gobj != NULL)
    {
        grab_fp = ftGetStruct(grab_gobj);

        if (ftCommon_Damage_CheckCaptureKeepHold(this_fp) != FALSE)
        {
            if (grab_fp->damage_knockback != 0)
            {
                if (func_ovl3_80140D30(grab_fp) != 0)
                {
                    this_fp->damage_lag = grab_fp->damage_lag;
                    this_fp->hitlag_mul = grab_fp->hitlag_mul;
                    grab_fp->damage_kind = 3;

                    ftCommon_Damage_SetDamageColAnim(fighter_gobj);
                }
                else
                {
                    func_ovl3_8014B2AC(this_fp);
                    func_ovl3_8014AECC(grab_gobj, fighter_gobj);
                    ftCommon_ProcDamageStopVoice(fighter_gobj);
                    ftCommon_Damage_GotoDamageStatus(fighter_gobj);

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
                ftCommon_Damage_SetDamageColAnim(fighter_gobj);
            }
        }
        else if (grab_fp->damage_knockback != 0)
        {
            func_ovl3_8014AECC(grab_gobj, fighter_gobj);
            ftCommon_ProcDamageStopVoice(fighter_gobj);
            ftCommon_Damage_GotoDamageStatus(fighter_gobj);

            grab_fp->damage_kind = 1;
        }
        else
        {
            func_ovl3_8014AECC(grab_gobj, fighter_gobj);
            ftCommon_ProcDamageStopVoice(fighter_gobj);
            ftCommon_Damage_GotoDamageStatus(fighter_gobj);
            ftCommon_ProcDamageStopVoice(grab_gobj);
            func_ovl3_8014B5B4(grab_gobj);
        }
        return;
    }
    if (this_fp->item_hold != NULL)
    {
        if ((itGetStruct(this_fp->item_hold)->weight == It_Weight_Heavy) && ((this_fp->ft_kind == Ft_Kind_Donkey) || (this_fp->ft_kind == Ft_Kind_PolyDonkey) || (this_fp->ft_kind == Ft_Kind_GiantDonkey)))
        {
            if (func_ovl3_80140D30(this_fp) != FALSE)
            {
                func_ovl3_80140E2C(fighter_gobj);
            }
            else
            {
                ftSetupDropItem(this_fp);
                ftCommon_ProcDamageStopVoice(fighter_gobj);
                ftCommon_Damage_GotoDamageStatus(fighter_gobj);
            }
            return;
        }
    }
    if ((this_fp->damage_element != gmHitCollision_Element_Sleep) && ((this_fp->damage_knockback == 0.0F) || ((this_fp->hitlag_timer > 0) && (this_fp->x192_flag_b6) && (this_fp->damage_knockback < (this_fp->damage_stack + 30.0F)))))
    {
        ftCommon_Damage_SetDamageColAnim(fighter_gobj);
    }
    else
    {
        ftCommon_ProcDamageStopVoice(fighter_gobj);
        ftCommon_Damage_GotoDamageStatus(fighter_gobj);
    }
}

// 0x80141AC0
void ftCommon_WallDamage_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_Damage_UpdateDustGFX(fighter_gobj);
    ftCommon_Damage_DecHitStunSetPublicity(fighter_gobj);

    if (fp->status_vars.common.damage.hitstun_timer == 0)
    {
        ftCommon_DamageFall_SetStatusFromDamage(fighter_gobj);
    }
}

// 0x80141B08
void ftCommon_WallDamage_SetStatus(GObj *fighter_gobj, Vec3f *angle, Vec3f *pos)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f vel_air;
    f32 knockback;

    efParticle_ImpactSW_MakeEffect(pos, 4, atan2f(-angle->x, angle->y));
    efParticle_Quake_MakeEffect(2);

    vel_air = fp->phys_info.vel_air;

    func_ovl0_800C7AB8(&vel_air, &fp->phys_info.vel_damage_air);
    func_ovl0_800C7B08(&vel_air, angle);
    func_ovl0_800C7AE0(&vel_air, 0.8F);

    fp->phys_info.vel_damage_air = vel_air;

    fp->phys_info.vel_air.x = fp->phys_info.vel_air.y = fp->phys_info.vel_air.z = 0.0F;

    fp->lr = (fp->phys_info.vel_damage_air.x < 0.0F) ? RIGHT : LEFT;

    knockback = func_ovl0_800C7A84(&vel_air);

    fp->status_vars.common.damage.hitstun_timer = ftCommon_DamageCalcHitStun(knockback);

    ftStatus_Update(fighter_gobj, ftStatus_Common_WallDamage, 0.0F, 2.0F, (FTSTATUPDATE_DAMAGEPORT_PRESERVE | FTSTATUPDATE_PLAYERTAG_PRESERVE));

    fp->damage_stack = knockback;

    ftMain_MakeRumble(fp, 2, 0);

    ftCommon_ApplyIntangibleTimer(fp, FTCOMMON_WALLDAMAGE_INTANGIBLE_TIMER);

    fp->is_hitstun = FALSE;
}

// 0x80141C6C
bool32 ftCommon_WallDamage_CheckGoto(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    pos.x = DObjGetStruct(fighter_gobj)->translate.x;
    pos.y = DObjGetStruct(fighter_gobj)->translate.y;
    pos.z = 0.0F;

    if (fp->status_vars.common.damage.coll_mask & MPCOLL_MASK_RWALL)
    {
        pos.x += fp->coll_data.object_coll.width;
        pos.y += fp->coll_data.object_coll.center;

        ftCommon_WallDamage_SetStatus(fighter_gobj, &fp->coll_data.rwall_angle, &pos);

        return TRUE;
    }
    else if (fp->status_vars.common.damage.coll_mask & MPCOLL_MASK_LWALL)
    {
        pos.x -= fp->coll_data.object_coll.width;
        pos.y += fp->coll_data.object_coll.center;

        ftCommon_WallDamage_SetStatus(fighter_gobj, &fp->coll_data.lwall_angle, &pos);

        return TRUE;
    }
    else if (fp->status_vars.common.damage.coll_mask & MPCOLL_MASK_CEIL)
    {
        pos.y += fp->coll_data.object_coll.top;

        ftCommon_WallDamage_SetStatus(fighter_gobj, &fp->coll_data.ceil_angle, &pos);

        return TRUE;
    }
    else return FALSE;
}