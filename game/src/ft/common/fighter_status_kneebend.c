#include <ft/fighter.h>

// 0x8013F2A0
void ftCommon_KneeBend_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    fp->status_vars.common.kneebend.anim_frame += DObjGetStruct(fighter_gobj)->dobj_f1;

    if 
    (
        (fp->status_vars.common.kneebend.input_source == FTCOMMON_KNEEBEND_INPUT_TYPE_BUTTON) &&
        (fp->status_vars.common.kneebend.anim_frame <= FTCOMMON_KNEEBEND_SHORT_HOP_FRAMES)    &&
        (fp->input.pl.button_tap_prev & (R_CBUTTONS | L_CBUTTONS | D_CBUTTONS | U_CBUTTONS))
    )
    {
        fp->status_vars.common.kneebend.is_short_hop = TRUE;
    }
    if (attributes->kneebend_frames <= fp->status_vars.common.kneebend.anim_frame) 
    {
        ftCommon_Jump_SetStatus(fighter_gobj);
    }
}

// 0x8013F334
void ftCommon_KneeBend_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftCommon_SpecialHi_CheckInterruptCommon(fighter_gobj) == FALSE)
    {
        if (ftCommon_AttackHi4_CheckInterruptKneeBend(fighter_gobj) == FALSE)
        {
            if (fp->status_vars.common.kneebend.jump_force < fp->input.pl.stick_range.y)
            {
                fp->status_vars.common.kneebend.jump_force = fp->input.pl.stick_range.y;
            }
        }
    }
}

// 0x8013F3A0
void ftCommon_KneeBend_SetStatusParam(GObj *fighter_gobj, s32 status_id, s32 input_source)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMain_SetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->status_vars.common.kneebend.jump_force = fp->input.pl.stick_range.y;
    fp->status_vars.common.kneebend.anim_frame = 0.0F;
    fp->status_vars.common.kneebend.input_source = input_source;
    fp->status_vars.common.kneebend.is_short_hop = FALSE;

    fp->is_special_interrupt = TRUE;
}

// 0x8013F408
void ftCommon_KneeBend_SetStatus(GObj *fighter_gobj, s32 input_source)
{
    ftCommon_KneeBend_SetStatusParam(fighter_gobj, ftStatus_Common_KneeBend, input_source);
}

// 0x8013F42C
void ftCommon_GuardKneeBend_SetStatus(GObj *fighter_gobj, s32 input_source)
{
    ftCommon_KneeBend_SetStatusParam(fighter_gobj, ftStatus_Common_GuardKneeBend, input_source);
}

// 0x8013F450
sb32 ftCommon_KneeBend_CheckButtonTap(ftStruct *fp)
{
    if (fp->input.pl.button_tap & (R_CBUTTONS | L_CBUTTONS | D_CBUTTONS | U_CBUTTONS))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8013F474
s32 ftCommon_KneeBend_GetInputTypeCommon(ftStruct *fp)
{
    if ((fp->input.pl.stick_range.y >= FTCOMMON_KNEEBEND_STICK_RANGE_MIN) && (fp->tap_stick_y <= FTCOMMON_KNEEBEND_BUFFER_FRAMES_MAX))
    {
        return FTCOMMON_KNEEBEND_INPUT_TYPE_STICK;
    }
    else if (ftCommon_KneeBend_CheckButtonTap(fp) != FALSE)
    {
        return FTCOMMON_KNEEBEND_INPUT_TYPE_BUTTON;
    }
    else return FTCOMMON_KNEEBEND_INPUT_TYPE_NONE;
}

// 0x8013F4D0
sb32 ftCommon_KneeBend_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 input_source;

    if (ftHammer_CheckItemHold(fighter_gobj) != FALSE)
    {
        return ftCommon_HammerKneeBend_CheckInterruptCommon(fighter_gobj);
    }
    input_source = ftCommon_KneeBend_GetInputTypeCommon(fp);

    if (input_source != FTCOMMON_KNEEBEND_INPUT_TYPE_NONE)
    {
        ftCommon_KneeBend_SetStatus(fighter_gobj, input_source);

        return TRUE;
    }
    else return FALSE;
}

// 0x8013F53C
s32 ftCommon_KneeBend_GetInputTypeRun(ftStruct *fp)
{
    if ((fp->input.pl.stick_range.y > FTCOMMON_KNEEBEND_RUN_STICK_RANGE_MIN) && (fp->tap_stick_y <= FTCOMMON_KNEEBEND_BUFFER_FRAMES_MAX))
    {
        return FTCOMMON_KNEEBEND_INPUT_TYPE_STICK;
    }
    else if (ftCommon_KneeBend_CheckButtonTap(fp) != FALSE)
    {
        return FTCOMMON_KNEEBEND_INPUT_TYPE_BUTTON;
    }
    else return FTCOMMON_KNEEBEND_INPUT_TYPE_NONE;
}

// 0x8013F598
sb32 ftCommon_KneeBend_CheckInterruptRun(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 input_source;

    if (ftHammer_CheckItemHold(fighter_gobj) != FALSE)
    {
        return ftCommon_HammerKneeBend_CheckInterruptCommon(fighter_gobj);
    }
    input_source = ftCommon_KneeBend_GetInputTypeRun(fp);

    if (input_source != FTCOMMON_KNEEBEND_INPUT_TYPE_NONE)
    {
        ftCommon_KneeBend_SetStatus(fighter_gobj, input_source);

        return TRUE;
    }
    else return FALSE;
}

// 0x8013F604
sb32 ftCommon_GuardKneeBend_CheckInterruptGuard(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 input_source = ftCommon_KneeBend_GetInputTypeCommon(fp);

    if ((input_source != FTCOMMON_KNEEBEND_INPUT_TYPE_NONE) && (fp->input.pl.button_hold & fp->input.button_mask_z))
    {
        ftCommon_GuardKneeBend_SetStatus(fighter_gobj, input_source);

        return TRUE;
    }
    else return FALSE;
}
