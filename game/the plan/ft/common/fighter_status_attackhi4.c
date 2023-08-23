#include <ft/fighter.h>
#include <it/item.h>

// 0x801505F0
void ftCommon_AttackHi4_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Common_AttackHi4, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
}

// 0x80150628
bool32 ftCommon_AttackHi4_CheckInputSuccess(ftStruct *fp)
{
    if ((fp->input.pl.stick_range.y >= FTCOMMON_ATTACKHI4_STICK_RANGE_MIN) && (fp->input.pl.button_tap & fp->input.button_mask_a))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80150660
bool32 ftCommon_AttackHi4_CheckInterruptMain(ftStruct *fp)
{
    ftAttributes *attributes = fp->attributes;

    if (ftCommon_LightThrow_CheckItemTypeThrow(fp) != FALSE)
    {
        ftCommon_ItemThrow_SetStatus(fp->fighter_gobj, ftStatus_Common_LightThrowHi4);

        return TRUE;
    }
    if (attributes->is_have_attackhi4)
    {
        ftCommon_AttackHi4_SetStatus(fp->fighter_gobj);

        return TRUE;
    }
    return FALSE;
}

// 0x801506CC
bool32 ftCommon_AttackHi4_CheckInterruptKneeBend(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftCommon_AttackHi4_CheckInputSuccess(fp) != FALSE)
    {
        return ftCommon_AttackHi4_CheckInterruptMain(fp);
    }
    else return FALSE;
}

// 0x8015070C
bool32 ftCommon_AttackHi4_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((ftCommon_AttackHi4_CheckInputSuccess(fp) != FALSE) && (fp->tap_stick_y < FTCOMMON_ATTACKHI4_BUFFER_FRAMES_MAX))
    {
        return ftCommon_AttackHi4_CheckInterruptMain(fp);
    }
    else return FALSE;
}