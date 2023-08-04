#include <ft/fighter.h>

// 0x8013E070
void ftCommon_Wait_ProcInterrupt(GObj *fighter_gobj)
{
    !ftCheckInterruptAll(fighter_gobj);
}

// 0x8013E1C8
void ftCommon_Wait_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftCommon_HammerCheckHold(fighter_gobj) != FALSE)
    {
        ftCommon_HammerWait_SetStatus(fighter_gobj);
    }
    else
    {
        if (fp->ground_or_air == GA_Air)
        {
            ftMap_SetGround(fp);
        }
        ftStatus_Update(fighter_gobj, ftStatus_Common_Wait, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

        fp->x192_flag_b0 = TRUE;

        func_ovl2_800E7F7C(fighter_gobj, 120);
    }
}

// 0x8013E258
bool32 ftCommon_Wait_CheckInputSuccess(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (((fp->input.pl.stick_range.x * fp->lr) < 0) || (ABS(fp->input.pl.stick_range.x) < 8))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8013E2A0
bool32 ftCommon_Wait_CheckInterruptCommon(GObj *fighter_gobj)
{
    if (ftCommon_Wait_CheckInputSuccess(fighter_gobj) != FALSE)
    {
        ftCommon_Wait_SetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}