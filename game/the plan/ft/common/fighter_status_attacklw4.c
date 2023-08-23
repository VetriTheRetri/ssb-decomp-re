#include <ft/fighter.h>
#include <it/item.h>

// 0x80150760
void ftCommon_AttackLw4_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Common_AttackLw4, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
}

// 0x80150798
bool32 ftCommon_AttackLw4_CheckInputSuccess(ftStruct *fp)
{
    if ((fp->input.pl.stick_range.y <= FTCOMMON_ATTACKLW4_STICK_RANGE_MIN) && (fp->input.pl.button_tap & fp->input.button_mask_a))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x801507D0
bool32 ftCommon_AttackLw4_CheckInterruptMain(ftStruct *fp)
{
    ftAttributes *attributes = fp->attributes;

    if (ftCommon_LightThrow_CheckItemTypeThrow(fp) != FALSE)
    {
        ftCommon_ItemThrow_SetStatus(fp->fighter_gobj, ftStatus_Common_LightThrowLw4);

        return TRUE;
    }
    if (attributes->is_have_attacklw4)
    {
        ftCommon_AttackLw4_SetStatus(fp->fighter_gobj);

        return TRUE;
    }
    return FALSE;
}

// 0x80150838
bool32 ftCommon_AttackLw4_CheckInterruptSquat(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((ftCommon_AttackLw4_CheckInputSuccess(fp) != FALSE) && (fp->status_vars.common.attack4.is_goto_attacklw4 != FALSE))
    {
        return ftCommon_AttackLw4_CheckInterruptMain(fp);
    }
    else return FALSE;
}

// 0x80150884
bool32 ftCommon_AttackLw4_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((ftCommon_AttackLw4_CheckInputSuccess(fp) != FALSE) && (fp->tap_stick_y < FTCOMMON_ATTACKLW4_BUFFER_FRAMES_MAX))
    {
        return ftCommon_AttackLw4_CheckInterruptMain(fp);
    }
    else return FALSE;
}