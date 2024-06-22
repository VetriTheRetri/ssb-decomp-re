#include <ft/fighter.h>

extern void func_ovl0_800C8758(DObj*, void*, f32);

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define ftCommonGuardCheckInterrupt(fighter_gobj)                           \
(                                                                           \
    (ftCommonLightThrowCheckInterruptGuardOn(fighter_gobj) != FALSE)    ||  \
    (ftCommonEscapeCheckInterruptGuard(fighter_gobj) != FALSE)          ||  \
    (ftCommonCatchCheckInterruptGuard(fighter_gobj) != FALSE)           ||  \
    (ftCommonGuardKneeBendCheckInterruptGuard(fighter_gobj) != FALSE) ||  \
    (ftCommonGuardPassCheckInterruptGuard(fighter_gobj) != FALSE)         \
)

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80148120
void ftCommonGuardCheckScheduleRelease(ftStruct *fp)
{
    if (!(fp->input.pl.button_hold & fp->input.button_mask_z))
    {
        fp->status_vars.common.guard.is_release = TRUE;
    }
}

// 0x80148144
void ftCommonGuardOnSetHitStatusYoshi(GObj *fighter_gobj) // Set all of Yoshi's hurtbox collision states to invincible (GuardOn)
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
void ftCommonGuardSetHitStatusYoshi(GObj *fighter_gobj) // Set all of Yoshi's hurtbox collision states to intangible (Guard)
{
    ftCommon_SetHitStatusPart(fighter_gobj, 5,  gmHitCollision_HitStatus_Normal);
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
void ftCommonGuardOffSetHitStatusYoshi(GObj *fighter_gobj)
{
    ftCommon_SetHitStatusPartAll(fighter_gobj, gmHitCollision_HitStatus_Normal);
}

// 0x80148304
void ftCommonGuardUpdateShieldVars(GObj *fighter_gobj)
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
                ftCommonGuardOffSetHitStatusYoshi(fighter_gobj);

                if (fp->is_attach_effect)
                {
                    // 0x801886C0
                    Vec3f egg_gfx_offset = { 0.0F, 0.0F, 0.0F };

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
void ftCommonGuardUpdateShieldHitbox(ftStruct *fp)
{
    Vec3f *scale = &fp->joint[ftParts_Joint_YRotN]->scale.vec.f;
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
void ftCommonGuardUpdateShieldAngle(ftStruct *fp)
{
    f32 angle_r = atan2f(fp->input.pl.stick_range.y, fp->input.pl.stick_range.x * fp->lr);
    f32 angle_d;
    f32 range;

    if (angle_r < 0.0F)
    {
        angle_r += F_CST_DTOR32(360.0F); // DOUBLE_PI32
    }
    angle_d = F_CLC_RTOD32(angle_r);

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

// WARNING: Actually DObjDesc*?
void ftCommonGuardGetJointTransform(DObj *joint, DObjDesc *joint_desc, f32 range)
{
    joint->rotate.vec.f.x = ((joint->rotate.vec.f.x - joint_desc->rotate.x) * range) + joint_desc->rotate.x;
    joint->rotate.vec.f.y = ((joint->rotate.vec.f.y - joint_desc->rotate.y) * range) + joint_desc->rotate.y;
    joint->rotate.vec.f.z = ((joint->rotate.vec.f.z - joint_desc->rotate.z) * range) + joint_desc->rotate.z;

    joint->translate.vec.f.x = ((joint->translate.vec.f.x - joint_desc->translate.x) * range) + joint_desc->translate.x;
    joint->translate.vec.f.y = ((joint->translate.vec.f.y - joint_desc->translate.y) * range) + joint_desc->translate.y;
    joint->translate.vec.f.z = ((joint->translate.vec.f.z - joint_desc->translate.z) * range) + joint_desc->translate.z;
}

// WARNING: Actually DObjDesc*?
void ftCommonGuardGetJointTransformScale(DObj *joint, DObjDesc *joint_desc, f32 range, Vec3f *scale)
{
    f32 scale_translate;

    joint->rotate.vec.f.x = ((joint->rotate.vec.f.x - joint_desc->rotate.x) * range) + joint_desc->rotate.x;
    joint->rotate.vec.f.y = ((joint->rotate.vec.f.y - joint_desc->rotate.y) * range) + joint_desc->rotate.y;
    joint->rotate.vec.f.z = ((joint->rotate.vec.f.z - joint_desc->rotate.z) * range) + joint_desc->rotate.z;

    // y tho

    scale_translate = joint_desc->translate.x * scale->x;
    joint->translate.vec.f.x = ((joint->translate.vec.f.x - scale_translate) * range) + scale_translate;

    scale_translate = joint_desc->translate.y * scale->y;
    joint->translate.vec.f.y = ((joint->translate.vec.f.y - scale_translate) * range) + scale_translate;

    scale_translate = joint_desc->translate.z * scale->z;
    joint->translate.vec.f.z = ((joint->translate.vec.f.z - scale_translate) * range) + scale_translate;
}

// Return to this when the struct at 0x2D8 of ftAttributes is mapped
void ftCommonGuardUpdateJoints(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 unused2;
    DObj *yrotn_joint = fp->joint[ftParts_Joint_YRotN];
    DObj **p_joint = &fp->joint[ftParts_Joint_XRotN];
    s32 joint_num;
    s32 i;
    Vec3f *scale = &fp->attributes->translate_scales[ftParts_Joint_YRotN];

    if (fp->is_shield)
    {
        ftCommonGuardUpdateShieldAngle(fp);

        for (i = ftParts_Joint_XRotN, joint_num = 0; i < ARRAY_COUNT(fp->joint); i++, p_joint++)
        {
            if (*p_joint != NULL)
            {
                joint_num++;
            }
        }
        joint_num--;

        omAddDObjAnimAll(yrotn_joint, fp->attributes->shield_keys[fp->status_vars.common.guard.angle_i][joint_num], fp->status_vars.common.guard.angle_f);
        func_8000BFE8_CBE8(yrotn_joint);

        if (fp->is_have_translate_scale)
        {
            func_ovl0_800C9488(yrotn_joint, scale);
        }
        else func_8000CCBC_D8BC(yrotn_joint);

        if (fp->is_have_translate_scale)
        {
            ftCommonGuardGetJointTransformScale(yrotn_joint, &fp->attributes->dobj_lookup[joint_num], fp->status_vars.common.guard.shield_rotate_range, scale);
        }
        else ftCommonGuardGetJointTransform(yrotn_joint, &fp->attributes->dobj_lookup[joint_num], fp->status_vars.common.guard.shield_rotate_range);

        yrotn_joint->dobj_f0 = AOBJ_FRAME_NULL;

        ftCommonGuardUpdateShieldHitbox(fp);
        func_ovl2_800EB528(fp->joint[ftParts_Joint_YRotN]);
    }
}

// Need to revisit this when once I have a better understanding of these structs...
void ftCommonGuardInitJoints(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    DObj **p_joint = &fp->joint[ftParts_Joint_EnumMax];
    DObjDesc *dobj_desc = &attributes->dobj_lookup[1];
    DObj *joint;
    Vec3f *scale;
    s32 i;

    if (fp->status_info.status_id != ftStatus_Common_GuardSetOff)
    {
        ftCommonGuardUpdateShieldAngle(fp);
    }
    fp->anim_flags.flags.x19B_flag_b4 = TRUE;

    func_ovl0_800C8758(fp->joint[ftParts_Joint_XRotN], attributes->shield_keys[fp->status_vars.common.guard.angle_i], fp->status_vars.common.guard.angle_f);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    if (fp->is_have_translate_scale)
    {
        scale = &fp->attributes->translate_scales[ftParts_Joint_EnumMax];

        for (i = ftParts_Joint_EnumMax; i < ARRAY_COUNT(fp->joint); i++, p_joint++, scale++)
        {
            joint = *p_joint;

            if (joint != NULL)
            {
                if (joint->dobj_f0 != AOBJ_FRAME_NULL)
                {
                    ftCommonGuardGetJointTransformScale(joint, dobj_desc, fp->status_vars.common.guard.shield_rotate_range, scale);

                    joint->dobj_f0 = AOBJ_FRAME_NULL;
                }
                dobj_desc++;
            }
        }
        joint = fp->joint[ftParts_Joint_YRotN];

        if (joint->dobj_f0 != AOBJ_FRAME_NULL)
        {
            ftCommonGuardGetJointTransformScale(joint, dobj_desc, fp->status_vars.common.guard.shield_rotate_range, &fp->attributes->translate_scales[ftParts_Joint_YRotN]);

            joint->dobj_f0 = AOBJ_FRAME_NULL;
        }
    }
    else
    {
        for (i = ftParts_Joint_EnumMax; i < ARRAY_COUNT(fp->joint); i++, p_joint++)
        {
            joint = *p_joint;

            if (joint != NULL)
            {
                if (joint->dobj_f0 != AOBJ_FRAME_NULL)
                {
                    ftCommonGuardGetJointTransform(joint, dobj_desc, fp->status_vars.common.guard.shield_rotate_range);

                    joint->dobj_f0 = AOBJ_FRAME_NULL;
                }
                dobj_desc++;
            }
        }
        joint = fp->joint[ftParts_Joint_YRotN];

        if (joint->dobj_f0 != AOBJ_FRAME_NULL)
        {
            ftCommonGuardGetJointTransform(joint, dobj_desc, fp->status_vars.common.guard.shield_rotate_range);

            joint->dobj_f0 = AOBJ_FRAME_NULL;
        }
    }
    ftCommonGuardUpdateShieldHitbox(fp);
    func_ovl2_800EB648(fp->joint[ftParts_Joint_XRotN]);
}

// 0x80148A88
void ftCommonGuardOnProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonGuardCheckScheduleRelease(fp);
    ftCommonGuardUpdateShieldVars(fighter_gobj);

    if (fp->shield_health == 0)
    {
        ftCommonShieldBreakFlyCommonSetStatus(fighter_gobj);
    }
    else
    {
        if (fighter_gobj->anim_frame <= 0.0F)
        {
            if (fp->status_vars.common.guard.is_release != FALSE)
            {
                if (fp->ft_kind == Ft_Kind_Yoshi)
                {
                    ftCommonGuardOffSetHitStatusYoshi(fighter_gobj);
                }
                ftCommonGuardOffSetStatus(fighter_gobj);
            }
            else
            {
                if (fp->ft_kind == Ft_Kind_Yoshi)
                {
                    fp->status_vars.common.guard.effect_gobj = efParticle_YoshiShield_MakeEffect(fighter_gobj);

                    ftCommon_HideModelPartAll(fighter_gobj);
                    ftCommonGuardSetHitStatusYoshi(fighter_gobj);

                    fp->is_shield = TRUE;

                    ftCommonGuardUpdateJoints(fighter_gobj);
                }
                ftCommonGuardSetStatus(fighter_gobj);
            }
        }
        else ftCommonGuardUpdateJoints(fighter_gobj);
    }
}

// 0x80148B84
void ftCommonGuardCommonProcInterrupt(GObj *fighter_gobj)
{
    if (!(ftCommonGuardCheckInterrupt(fighter_gobj)))
    {
        ftCommonDokanStartCheckInterruptCommon(fighter_gobj);
    }
}

// 0x80148BFC
void ftCommonGuardOnSetStatus(GObj *fighter_gobj, s32 slide_frames)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_GuardOn, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    if (fp->shield_health != 0)
    {
        if (fp->ft_kind == Ft_Kind_Yoshi)
        {
            ftCommonGuardOnSetHitStatusYoshi(fighter_gobj);
        }
        else
        {
            fp->status_vars.common.guard.effect_gobj = efParticle_Shield_MakeEffect(fighter_gobj);
            fp->is_shield = TRUE;
        }
    }
    ftCommonGuardUpdateJoints(fighter_gobj);

    fp->status_vars.common.guard.release_lag = FTCOMMON_GUARD_RELEASE_LAG;
    fp->status_vars.common.guard.shield_decay_wait = FTCOMMON_GUARD_DECAY_INT;
    fp->status_vars.common.guard.is_release = FALSE;
    fp->status_vars.common.guard.slide_frames = slide_frames;
    fp->status_vars.common.guard.is_setoff = FALSE;

    func_800269C0_275C0(alSound_SFX_GuardOn);
}

// 0x80148CBC
sb32 ftCommonGuardOnCheckInterruptSuccess(GObj *fighter_gobj, s32 slide_frames)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->input.pl.button_hold & fp->input.button_mask_z) && (fp->shield_health != 0))
    {
        ftCommonGuardOnSetStatus(fighter_gobj, slide_frames);

        return TRUE;
    }
    else return FALSE;
}

// 0x80148D0C
sb32 ftCommonGuardOnCheckInterruptCommon(GObj *fighter_gobj)
{
    return ftCommonGuardOnCheckInterruptSuccess(fighter_gobj, 0);
}

// 0x80148D2C
sb32 ftCommonGuardOnCheckInterruptDashRun(GObj *fighter_gobj, s32 slide_frames)
{
    return ftCommonGuardOnCheckInterruptSuccess(fighter_gobj, slide_frames);
}

// 0x80148D4C
void ftCommonGuardProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonGuardCheckScheduleRelease(fp);
    ftCommonGuardUpdateShieldVars(fighter_gobj);

    if (fp->shield_health == 0)
    {
        ftCommonShieldBreakFlyCommonSetStatus(fighter_gobj);
    }
    else if ((fp->status_vars.common.guard.is_release != FALSE) || !(fp->is_shield))
    {
        ftCommonGuardOffSetStatus(fighter_gobj);
    }
    else ftCommonGuardInitJoints(fighter_gobj);
}

// 0x80148DDC
void ftCommonGuardSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_Guard, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE));
    ftCommonGuardInitJoints(fighter_gobj);

    fp->is_shield = TRUE;
}
