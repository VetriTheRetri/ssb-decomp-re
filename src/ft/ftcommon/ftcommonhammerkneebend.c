#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80147EC0
void ftCommonHammerKneeBendProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    fp->status_vars.common.hammer.kneebend_anim_frame++;

    if 
    (
        (fp->status_vars.common.hammer.input_source == FTCOMMON_KNEEBEND_INPUT_TYPE_BUTTON)       &&
        (fp->status_vars.common.hammer.kneebend_anim_frame <= FTCOMMON_KNEEBEND_SHORT_HOP_FRAMES) &&
        (fp->input.pl.button_tap_prev & (R_CBUTTONS | L_CBUTTONS | D_CBUTTONS | U_CBUTTONS))
    )
    {
        fp->status_vars.common.hammer.is_short_hop = TRUE;
    }
    if (fp->status_vars.common.hammer.kneebend_anim_frame >= attributes->kneebend_anim_length)
    {
        ftCommonHammerFallSetStatusJump(fighter_gobj);
    }
}

// 0x80147F54
void ftCommonHammerKneeBendProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.hammer.jump_force < fp->input.pl.stick_range.y)
    {
        fp->status_vars.common.hammer.jump_force = fp->input.pl.stick_range.y;
    }
}

// 0x80147F88
void ftCommonHammerKneeBendSetStatus(GObj *fighter_gobj, s32 input_source)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusHammerKneeBend, ftHammerGetAnimFrame(fighter_gobj), 1.0F, ftHammerGetStatUpdateFlags(fighter_gobj));
    ftHammerSetColAnim(fighter_gobj);

    fp->status_vars.common.hammer.jump_force = fp->input.pl.stick_range.y;
    fp->status_vars.common.hammer.kneebend_anim_frame = 0.0F;
    fp->status_vars.common.hammer.input_source = input_source;
    fp->status_vars.common.hammer.is_short_hop = FALSE;
}

// 0x8014800C
sb32 ftCommonHammerKneeBendCheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 input_source = ftCommonKneeBendGetInputTypeCommon(fp);

    if (input_source != FTCOMMON_KNEEBEND_INPUT_TYPE_NONE)
    {
        ftCommonHammerKneeBendSetStatus(fighter_gobj, input_source);

        return TRUE;
    }
    else return FALSE;
}
