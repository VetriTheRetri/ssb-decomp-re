#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801479A0
void ftCommonHammerWalkProcInterrupt(GObj *fighter_gobj)
{
    if ((ftCommonHammerKneeBendCheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommonHammerFallCheckInterruptCommon(fighter_gobj) == FALSE))
    {
        ftHammer_CheckGotoHammerWait(fighter_gobj);
    }
}

// 0x801479E0
void ftCommonHammerWalkSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_HammerWalk, ftHammer_GetAnimFrame(fighter_gobj), 1.0F, ftHammer_GetStatUpdateFlags(fighter_gobj));
    ftHammer_CheckSetColAnim(fighter_gobj);
}

// 0x80147A2C
sb32 ftCommonHammerWalkCheckInterruptCommon(GObj *fighter_gobj)
{
    if (ftCommon_Walk_CheckInputSuccess(fighter_gobj) != FALSE)
    {
        ftCommonHammerWalkSetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}
