#include <ft/fighter.h>

#define ftCheckInterruptGuard(fighter_gobj)                                 \
(                                                                           \
    (ftCommon_LightThrow_CheckInterruptGuardOnOn(fighter_gobj) != FALSE) || \
    (ftCommon_Escape_CheckInterruptGuard(fighter_gobj) != FALSE)         || \
    (ftCommon_Catch_CheckInterruptGuard(fighter_gobj) != FALSE)          || \
    (ftCommon_GuardKneeBend_CheckInterruptGuard(fighter_gobj) != FALSE)  || \
    (ftCommon_GuardPass_CheckInterruptGuard(fighter_gobj) != FALSE)         \
)                                                                           \

// 0x801886C0
Vec3f ftCommon_GuardOff_YoshiEffectOffset = { 0.0F, 0.0F, 0.0F };

// 0x80148120
void ftCommon_Guard_CheckScheduleRelease(ftStruct *fp)
{
    if (!(fp->input.pl.button_hold & fp->input.button_mask_z))
    {
        fp->status_vars.common.guard.is_release = TRUE;
    }
}

// 0x80148144
void ftCommon_GuardOn_SetHitStatusYoshi(GObj *fighter_gobj) // Set all of Yoshi's hurtbox collision states to invincible (GuardOn)
{
    ftCommon_SetHitStatusPart(fighter_gobj, 5,  gmHitCollision_HitStatus_Invincible);
    ftCommon_SetHitStatusPart(fighter_gobj, 6,  gmHitCollision_HitStatus_Invincible);
    ftCommon_SetHitStatusPart(fighter_gobj, 7,  gmHitCollision_HitStatus_Invincible);
    ftCommon_SetHitStatusPart(fighter_gobj, 15, gmHitCollision_HitStatus_Invincible);
    ftCommon_SetHitStatusPart(fighter_gobj, 11, gmHitCollision_HitStatus_Invincible);
    ftCommon_SetHitStatusPart(fighter_gobj, 16, gmHitCollision_HitStatus_Invincible);
    ftCommon_SetHitStatusPart(fighter_gobj, 12, gmHitCollision_HitStatus_Invincible);
    ftCommon_SetHitStatusPart(fighter_gobj, 27, gmHitCollision_HitStatus_Invincible);
    ftCommon_SetHitStatusPart(fighter_gobj, 22, gmHitCollision_HitStatus_Invincible);
    ftCommon_SetHitStatusPart(fighter_gobj, 28, gmHitCollision_HitStatus_Invincible);
    ftCommon_SetHitStatusPart(fighter_gobj, 23, gmHitCollision_HitStatus_Invincible);
}

// 0x80148214
void ftCommon_Guard_SetHitStatusYoshi(GObj *fighter_gobj) // Set all of Yoshi's hurtbox collision states to intangible (Guard)
{
    ftCommon_SetHitStatusPart(fighter_gobj, 5,  gmHitCollision_HitStatus_Intangible);
    ftCommon_SetHitStatusPart(fighter_gobj, 6,  gmHitCollision_HitStatus_Intangible);
    ftCommon_SetHitStatusPart(fighter_gobj, 7,  gmHitCollision_HitStatus_Intangible);
    ftCommon_SetHitStatusPart(fighter_gobj, 15, gmHitCollision_HitStatus_Intangible);
    ftCommon_SetHitStatusPart(fighter_gobj, 11, gmHitCollision_HitStatus_Intangible);
    ftCommon_SetHitStatusPart(fighter_gobj, 16, gmHitCollision_HitStatus_Intangible);
    ftCommon_SetHitStatusPart(fighter_gobj, 12, gmHitCollision_HitStatus_Intangible);
    ftCommon_SetHitStatusPart(fighter_gobj, 27, gmHitCollision_HitStatus_Intangible);
    ftCommon_SetHitStatusPart(fighter_gobj, 22, gmHitCollision_HitStatus_Intangible);
    ftCommon_SetHitStatusPart(fighter_gobj, 28, gmHitCollision_HitStatus_Intangible);
    ftCommon_SetHitStatusPart(fighter_gobj, 23, gmHitCollision_HitStatus_Intangible);
}

// 0x801482E4
void ftCommon_GuardOff_SetHitStatusYoshi(GObj *fighter_gobj)
{
    ftCommon_SetHitStatusPartAll(fighter_gobj, gmHitCollision_HitStatus_Normal);
}

// 0x80148304
void ftCommon_Guard_UpdateShieldVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->is_shield)
    {
        if (fp->status_vars.common.guard.shield_decay_wait != 0)
        {
            fp->status_vars.common.guard.shield_decay_wait--;

            if (fp->status_vars.common.guard.shield_decay_wait == 0)
            {
                fp->shield_health--;

                if (fp->shield_health != 0)
                {
                    fp->status_vars.common.guard.shield_decay_wait = FTCOMMON_GUARD_DECAY_INT;

                    goto lag_decrement;
                }
                else goto lag_end;
            }
        }
    lag_decrement:
        if (fp->status_vars.common.guard.release_lag != 0)
        {
            fp->status_vars.common.guard.release_lag--;
        }
        if ((fp->status_vars.common.guard.release_lag == 0) && (fp->status_vars.common.guard.is_release != FALSE))
        {
        lag_end:
            if (fp->ft_kind == Ft_Kind_Yoshi)
            {
                ftCommon_ResetModelPartRenderAll(fighter_gobj);
                ftCommon_GuardOff_SetHitStatusYoshi(fighter_gobj);

                if (fp->is_attach_effect)
                {
                    Vec3f egg_gfx_offset = ftCommon_GuardOff_YoshiEffectOffset;

                    ftParts_GetDObjWorldPosition(fp->joint[ftParts_Joint_YRotN], &egg_gfx_offset);
                    efParticle_EggBreak_MakeEffect(&egg_gfx_offset);
                }
            }
            ftCommon_ProcStopGFX(fighter_gobj);

            fp->is_shield = FALSE;
        }
    }
}

// 0x80148408
void ftCommon_Guard_UpdateShieldHitbox(ftStruct *fp)
{
    Vec3f *scale = &fp->joint[ftParts_Joint_YRotN]->scale;
    f32 scale_final;
    f32 scale_mul;

    if (fp->ft_kind == Ft_Kind_Yoshi)
    {
        scale_mul = 1.0F;
    }
    else scale_mul = fp->shield_health / FTCOMMON_GUARD_SIZE_HEALTH_DIV;

    scale_final = (((FTCOMMON_GUARD_SIZE_SCALE_MUL_INIT * scale_mul) + FTCOMMON_GUARD_SIZE_SCALE_MUL_ADD) * fp->attributes->shield_size) / FTCOMMON_GUARD_SIZE_SCALE_MUL_DIV;

    scale->x = scale->y = scale->z = scale_final;
}

// 0x80148488
void func_ovl3_80148488(ftStruct *fp)
{
    f32 angle_r = atan2f(fp->input.pl.stick_range.y, fp->input.pl.stick_range.x * fp->lr);
    f32 angle_d;
    f32 range;

    if (angle_r < 0.0F)
    {
        angle_r += F_DEG_TO_RAD(360.0F); // DOUBLE_PI32
    }
    angle_d = F_RAD_TO_DEG(angle_r);

    if (angle_d < 0.0F)
    {
        angle_d = 0.0F;
    }
    if (angle_d > FTCOMMON_GUARD_ANGLE_MAX)
    {
        angle_d = FTCOMMON_GUARD_ANGLE_MAX;
    }
    fp->status_vars.common.guard.angle_i = (angle_d / 45.0F);
    fp->status_vars.common.guard.angle_f = (angle_d - (fp->status_vars.common.guard.angle_i * 45.0F));

    range = sqrtf(SQUARE(fp->input.pl.stick_range.x) + SQUARE(fp->input.pl.stick_range.y)) / F_CONTROLLER_RANGE_MAX;

    if (range > 1.0F)
    {
        range = 1.0F;
    }
    fp->status_vars.common.guard.shield_rotate_range = range;
}

// WARNING: Not actually DObjDesc*
void func_ovl3_801485CC(DObj *joint, DObjDesc *joint_desc, f32 range)
{
    joint->rotate.vec.f.x = ((joint->rotate.vec.f.x - joint_desc->rotate.vec.f.x) * range) + joint_desc->rotate.vec.f.x;
    joint->rotate.vec.f.y = ((joint->rotate.vec.f.y - joint_desc->rotate.vec.f.y) * range) + joint_desc->rotate.vec.f.y;
    joint->rotate.vec.f.z = ((joint->rotate.vec.f.z - joint_desc->rotate.vec.f.z) * range) + joint_desc->rotate.vec.f.z;

    joint->translate.vec.f.x = ((joint->translate.vec.f.x - joint_desc->translate.vec.f.x) * range) + joint_desc->translate.vec.f.x;
    joint->translate.vec.f.y = ((joint->translate.vec.f.y - joint_desc->translate.vec.f.y) * range) + joint_desc->translate.vec.f.y;
    joint->translate.vec.f.z = ((joint->translate.vec.f.z - joint_desc->translate.vec.f.z) * range) + joint_desc->translate.vec.f.z;
}

// WARNING: Not actually DObjDesc*
void func_ovl3_80148664(DObj *joint, DObjDesc *joint_desc, f32 range, Vec3f *scale)
{
    f32 scale_translate;

    joint->rotate.vec.f.x = ((joint->rotate.vec.f.x - joint_desc->rotate.vec.f.x) * range) + joint_desc->rotate.vec.f.x;
    joint->rotate.vec.f.y = ((joint->rotate.vec.f.y - joint_desc->rotate.vec.f.y) * range) + joint_desc->rotate.vec.f.y;
    joint->rotate.vec.f.z = ((joint->rotate.vec.f.z - joint_desc->rotate.vec.f.z) * range) + joint_desc->rotate.vec.f.z;

    // y tho

    scale_translate = joint_desc->translate.vec.f.x * scale->x;
    joint->translate.vec.f.x = ((joint->translate.vec.f.x - scale_translate) * range) + scale_translate;

    scale_translate = joint_desc->translate.vec.f.y * scale->y;
    joint->translate.vec.f.y = ((joint->translate.vec.f.y - scale_translate) * range) + scale_translate;

    scale_translate = joint_desc->translate.vec.f.z * scale->z;
    joint->translate.vec.f.z = ((joint->translate.vec.f.z - scale_translate) * range) + scale_translate;
}

// Return to this when the struct at 0x2D8 of ftAttributes is mapped
void func_ovl3_80148714(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 unused2;
    DObj *yrotn_joint = fp->joint[ftParts_Joint_YRotN];
    DObj **fj = &fp->joint[ftParts_Joint_XRotN];
    s32 index;
    s32 i;
    Vec3f *scale = &fp->attributes->unk_0x324[3];

    if (fp->is_shield)
    {
        func_ovl3_80148488(fp);

        // TO DO: figure out what this loop bound means

        for (i = 2, index = 0; i < ARRAY_COUNT(fp->joint); i++, fj++)
        {
            if (*fj != NULL)
            {
                index++;
            }
        }
        index--;

        omAddDObjAnimAll(yrotn_joint, fp->attributes->unk_joint[fp->status_vars.common.guard.angle_i][index], fp->status_vars.common.guard.angle_f);
        func_8000BFE8(yrotn_joint);

        if (fp->x18F_flag_b5)
        {
            func_ovl0_800C9488(yrotn_joint, scale);
        }
        else func_8000CCBC(yrotn_joint);

        if (fp->x18F_flag_b5)
        {
            func_ovl3_80148664(yrotn_joint, &fp->attributes->dobj_lookup[index], fp->status_vars.common.guard.shield_rotate_range, scale);
        }
        else func_ovl3_801485CC(yrotn_joint, &fp->attributes->dobj_lookup[index], fp->status_vars.common.guard.shield_rotate_range);

        yrotn_joint->dobj_f0 = (f32)FLOAT_NEG_MAX;

        ftCommon_Guard_UpdateShieldHitbox(fp);
        func_ovl2_800EB528(fp->joint[ftParts_Joint_YRotN]);
    }
}

// Need to revisit this when once I have a better understanding of these structs...
void func_ovl3_8014889C(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    DObj **p_joint = &fp->joint[ftParts_Joint_EnumMax];
    DObjDesc *unk_vec = &attributes->dobj_lookup[1];
    DObj *joint;
    Vec3f *scale;
    s32 i;

    if (fp->status_info.status_id != ftStatus_Common_GuardSetOff)
    {
        func_ovl3_80148488(fp);
    }
    fp->anim_flags.flags.x19B_flag_b4 = TRUE;

    func_ovl0_800C8758(fp->joint[ftParts_Joint_XRotN], attributes->unk_joint[fp->status_vars.common.guard.angle_i], fp->status_vars.common.guard.angle_f);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);

    if (fp->x18F_flag_b5)
    {
        scale = &fp->attributes->unk_0x324[4];

        for (i = ftParts_Joint_EnumMax; i < ARRAY_COUNT(fp->joint); i++, p_joint++, scale++)
        {
            joint = *p_joint;

            if (joint != NULL)
            {
                if (joint->dobj_f0 != (f32)FLOAT_NEG_MAX)
                {
                    func_ovl3_80148664(joint, unk_vec, fp->status_vars.common.guard.shield_rotate_range, scale);
                    joint->dobj_f0 = (f32)FLOAT_NEG_MAX;
                }
                unk_vec++;
            }
        }
        joint = fp->joint[ftParts_Joint_YRotN];

        if (joint->dobj_f0 != (f32)FLOAT_NEG_MAX)
        {
            func_ovl3_80148664(joint, unk_vec, fp->status_vars.common.guard.shield_rotate_range, &fp->attributes->unk_0x324[3]);

            joint->dobj_f0 = (f32)FLOAT_NEG_MAX;
        }
    }
    else
    {
        for (i = ftParts_Joint_EnumMax; i < ARRAY_COUNT(fp->joint); i++, p_joint++)
        {
            joint = *p_joint;

            if (joint != NULL)
            {
                if (joint->dobj_f0 != (f32)FLOAT_NEG_MAX)
                {
                    func_ovl3_801485CC(joint, unk_vec, fp->status_vars.common.guard.shield_rotate_range);

                    joint->dobj_f0 = (f32)FLOAT_NEG_MAX;
                }
                unk_vec++;
            }
        }
        joint = fp->joint[ftParts_Joint_YRotN];

        if (joint->dobj_f0 != (f32)FLOAT_NEG_MAX)
        {
            func_ovl3_801485CC(joint, unk_vec, fp->status_vars.common.guard.shield_rotate_range);

            joint->dobj_f0 = (f32)FLOAT_NEG_MAX;
        }
    }
    ftCommon_Guard_UpdateShieldHitbox(fp);
    func_ovl2_800EB648(fp->joint[ftParts_Joint_XRotN]);
}

// 0x80148A88
void ftCommon_GuardOn_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_Guard_CheckScheduleRelease(fp);
    ftCommon_Guard_UpdateShieldVars(fighter_gobj);

    if (fp->shield_health == 0)
    {
        ftCommon_ShieldBreakFly_UpdateVarsSetStatus(fighter_gobj);
    }
    else
    {
        if (fighter_gobj->anim_frame <= 0.0F)
        {
            if (fp->status_vars.common.guard.is_release != FALSE)
            {
                if (fp->ft_kind == Ft_Kind_Yoshi)
                {
                    ftCommon_GuardOff_SetHitStatusYoshi(fighter_gobj);
                }
                ftCommon_GuardOff_SetStatus(fighter_gobj);
            }
            else
            {
                if (fp->ft_kind == Ft_Kind_Yoshi)
                {
                    fp->status_vars.common.guard.effect_gobj = efParticle_YoshiShield_MakeEffect(fighter_gobj);

                    ftCommon_HideModelPartAll(fighter_gobj);
                    ftCommon_Guard_SetHitStatusYoshi(fighter_gobj);

                    fp->is_shield = TRUE;

                    func_ovl3_80148714(fighter_gobj);
                }
                ftCommon_Guard_SetStatus(fighter_gobj);
            }
        }
        else func_ovl3_80148714(fighter_gobj);
    }
}

// 0x80148B84
void ftCommon_GuardCommon_ProcInterrupt(GObj *fighter_gobj)
{
    if (!ftCheckInterruptGuard(fighter_gobj))
    {
        ftCommon_DokanStart_CheckInterruptCommon(fighter_gobj);
    }
}

// 0x80148BFC
void ftCommon_GuardOn_SetStatus(GObj *fighter_gobj, s32 slide_frames)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_GuardOn, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);

    if (fp->shield_health != 0)
    {
        if (fp->ft_kind == Ft_Kind_Yoshi)
        {
            ftCommon_GuardOn_SetHitStatusYoshi(fighter_gobj);
        }
        else
        {
            fp->status_vars.common.guard.effect_gobj = efParticle_Shield_MakeEffect(fighter_gobj);
            fp->is_shield = TRUE;
        }
    }
    func_ovl3_80148714(fighter_gobj);

    fp->status_vars.common.guard.release_lag = FTCOMMON_GUARD_RELEASE_LAG;
    fp->status_vars.common.guard.shield_decay_wait = FTCOMMON_GUARD_DECAY_INT;
    fp->status_vars.common.guard.is_release = FALSE;
    fp->status_vars.common.guard.slide_frames = slide_frames;
    fp->status_vars.common.guard.is_setoff = FALSE;

    func_800269C0(alSound_SFX_GuardOn);
}

// 0x80148CBC
sb32 ftCommon_GuardOn_CheckInterruptSuccess(GObj *fighter_gobj, s32 slide_frames)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->input.pl.button_hold & fp->input.button_mask_z) && (fp->shield_health != 0))
    {
        ftCommon_GuardOn_SetStatus(fighter_gobj, slide_frames);

        return TRUE;
    }
    else return FALSE;
}

// 0x80148D0C
sb32 ftCommon_GuardOn_CheckInterruptCommon(GObj *fighter_gobj)
{
    return ftCommon_GuardOn_CheckInterruptSuccess(fighter_gobj, 0);
}

// 0x80148D2C
sb32 ftCommon_GuardOn_CheckInterruptDashRun(GObj *fighter_gobj, s32 slide_frames)
{
    return ftCommon_GuardOn_CheckInterruptSuccess(fighter_gobj, slide_frames);
}

// 0x80148D4C
void ftCommon_Guard_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_Guard_CheckScheduleRelease(fp);
    ftCommon_Guard_UpdateShieldVars(fighter_gobj);

    if (fp->shield_health == 0)
    {
        ftCommon_ShieldBreakFly_UpdateVarsSetStatus(fighter_gobj);
    }
    else if ((fp->status_vars.common.guard.is_release != FALSE) || !(fp->is_shield))
    {
        ftCommon_GuardOff_SetStatus(fighter_gobj);
    }
    else func_ovl3_8014889C(fighter_gobj);
}

// 0x80148DDC
void ftCommon_Guard_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_Guard, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
    func_ovl3_8014889C(fighter_gobj);

    fp->is_shield = TRUE;
}
