#include <ft/fighter.h>

// 0x80147EC0
void ftCommon_HammerKneeBend_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    fp->status_vars.common.hammer.kneebend_anim_frame++;

    if 
    (
        (fp->status_vars.common.hammer.input_source == FTCOMMON_KNEEBEND_INPUT_TYPE_BUTTON)                             &&
        (fp->status_vars.common.hammer.kneebend_anim_frame <= FTCOMMON_KNEEBEND_SHORT_HOP_FRAMES)                       &&
        (fp->input.pl.button_tap_prev & (HAL_BUTTON_C_RIGHT | HAL_BUTTON_C_LEFT | HAL_BUTTON_C_DOWN | HAL_BUTTON_C_UP))
    )
    {
        fp->status_vars.common.hammer.is_short_hop = TRUE;
    }
    if (attributes->kneebend_frames <= fp->status_vars.common.hammer.kneebend_anim_frame)
    {
        ftCommon_HammerFall_SetStatusJump(fighter_gobj);
    }
}

// 0x80147F54
void ftCommon_HammerKneeBend_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.hammer.jump_force < fp->input.pl.stick_range.y)
    {
        fp->status_vars.common.hammer.jump_force = fp->input.pl.stick_range.y;
    }
}

// 0x80147F88
void ftCommon_HammerKneeBend_SetStatus(GObj *fighter_gobj, s32 input_source)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_HammerKneeBend, ftCommon_HammerGetAnimFrame(fighter_gobj), 1.0F, ftCommon_HammerGetStatUpdateFlags(fighter_gobj));
    ftCommon_HammerCheckSetColAnim(fighter_gobj);

    fp->status_vars.common.hammer.jump_force = fp->input.pl.stick_range.y;
    fp->status_vars.common.hammer.kneebend_anim_frame = 0.0F;
    fp->status_vars.common.hammer.input_source = input_source;
    fp->status_vars.common.hammer.is_short_hop = FALSE;
}

// 0x8014800C
bool32 ftCommon_HammerKneeBend_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 input_source = ftCommon_KneeBend_GetInputTypeCommon(fp);

    if (input_source != FTCOMMON_KNEEBEND_INPUT_TYPE_NONE)
    {
        ftCommon_HammerKneeBend_SetStatus(fighter_gobj, input_source);

        return TRUE;
    }
    else return FALSE;
}
