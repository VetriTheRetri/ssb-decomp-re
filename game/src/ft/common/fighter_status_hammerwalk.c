#include <ft/fighter.h>

// 0x801479A0
void ftCommon_HammerWalk_ProcInterrupt(GObj *fighter_gobj)
{
    if ((ftCommon_HammerKneeBend_CheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommon_HammerFall_CheckInterruptCommon(fighter_gobj) == FALSE))
    {
        ftCommon_HammerWaitCheckSetStatus(fighter_gobj);
    }
}

// 0x801479E0
void ftCommon_HammerWalk_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_HammerWalk, ftCommon_HammerGetAnimFrame(fighter_gobj), 1.0F, ftCommon_HammerGetStatUpdateFlags(fighter_gobj));
    ftCommon_HammerCheckSetColAnim(fighter_gobj);
}

// 0x80147A2C
bool32 ftCommon_HammerWalk_CheckInterruptCommon(GObj *fighter_gobj)
{
    if (ftCommon_Walk_CheckInputSuccess(fighter_gobj) != FALSE)
    {
        ftCommon_HammerWalk_SetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}