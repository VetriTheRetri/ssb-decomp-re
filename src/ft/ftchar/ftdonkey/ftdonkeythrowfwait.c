#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

// Donkey Kong's Cargo Wait
#define ftDonkeyThrowFWaitCheckInterupt(fighter_gobj)                             \
(                                                                                  \
    (ftCommonHeavyThrowCheckInterruptCommon(fighter_gobj) != FALSE) ||           \
    (ftDonkeyThrowFFCheckInterruptThrowFCommon(fighter_gobj) != FALSE) ||        \
    (ftDonkeyThrowFKneeBendCheckInterruptThrowFCommon(fighter_gobj) != FALSE) || \
    (ftDonkeyThrowFFallCheckInterruptPass(fighter_gobj) != FALSE) ||             \
    (ftDonkeyThrowFTurnCheckInterruptThrowFCommon(fighter_gobj) != FALSE)        \
)

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8014D400
void ftDonkeyThrowFWaitProcInterrupt(GObj *fighter_gobj)
{
    if (!(ftDonkeyThrowFWaitCheckInterupt(fighter_gobj)))
    {
        ftDonkeyThrowFWalkCheckInterruptThrowFWait(fighter_gobj);
    }
}

// 0x8014D478
void ftDonkeyThrowFCommonProcMap(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftDonkeyThrowFFallSetStatus);
}

// 0x8014D49C
void ftDonkeyThrowFWaitSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        ftMap_SetGround(fp);
    }
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Donkey_ThrowFWait, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}

// 0x8014D4EC
sb32 ftDonkeyThrowFWaitCheckInterruptThrowFWalk(GObj *fighter_gobj)
{
    if (ftCommonWaitCheckInputSuccess(fighter_gobj) != FALSE)
    {
        ftDonkeyThrowFWaitSetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}
