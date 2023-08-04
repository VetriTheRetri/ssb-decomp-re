#include <ft/fighter.h>

// 0x80141D60
void ftCommon_Pass_ProcInterrupt(GObj *fighter_gobj)
{
    if ((ftCommon_SpecialAir_CheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommon_AttackAir_CheckInterruptCommon(fighter_gobj) == FALSE))
    {
        ftCommon_JumpAerial_CheckInterruptCommon(fighter_gobj);
    }
}

// 0x80141DA0
void ftCommon_Pass_SetStatusParam(GObj *fighter_gobj, s32 status_id, f32 frame_begin, u32 flags)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, status_id, frame_begin, 1.0F, flags);
    func_ovl2_800D8EB8(fp);

    fp->phys_info.vel_air.y = 0.0F;

    fp->coll_data.ignore_line_id = fp->coll_data.ground_line_id;

    fp->tap_stick_y = U8_MAX - 1;
}

// 0x80141E18
void ftCommon_Pass_SetStatusSquat(GObj *fighter_gobj)
{
    ftCommon_Squat_SetStatusPass(fighter_gobj);
}

// 0x80141E38
void ftCommon_GuardPass_SetStatus(GObj *fighter_gobj)
{
    ftCommon_Pass_SetStatusParam(fighter_gobj, ftStatus_Common_GuardPass, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}

// 0x80141E60
bool32 ftCommon_Pass_CheckInputSuccess(ftStruct *fp)
{
    if ((fp->input.pl.stick_range.y <= FTCOMMON_PASS_STICK_RANGE_MIN) && (fp->tap_stick_y < FTCOMMON_PASS_BUFFER_FRAMES_MAX) && (fp->coll_data.ground_flags & MPCOLL_MASK_NONSOLID))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80141EA4
bool32 ftCommon_Pass_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftCommon_HammerCheckHold(fighter_gobj) != FALSE)
    {
        return ftCommon_HammerFall_CheckInterruptCommon(fighter_gobj);
    }
    else if (ftCommon_Pass_CheckInputSuccess(fp) != FALSE)
    {
        ftCommon_Pass_SetStatusSquat(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}

// 0x80141F0C
bool32 ftCommon_Pass_CheckInterruptSquat(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftCommon_HammerCheckHold(fighter_gobj) != FALSE)
    {
        return ftCommon_HammerFall_CheckInterruptCommon(fighter_gobj);
    }
    if (fp->status_vars.common.squat.is_allow_pass == FALSE)
    {
        if (ftCommon_Pass_CheckInputSuccess(fp) != FALSE)
        {
            fp->status_vars.common.squat.is_allow_pass = TRUE;
            fp->status_vars.common.squat.pass_wait = FTCOMMON_SQUAT_PASS_WAIT;

            return TRUE;
        }
    }
    return FALSE;
}

// 0x80141F8C
bool32 ftCommon_GuardPass_CheckInterruptGuard(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((ftCommon_Pass_CheckInputSuccess(fp) != FALSE) && (fp->input.pl.button_hold & fp->input.button_mask_z))
    {
        ftCommon_GuardPass_SetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}