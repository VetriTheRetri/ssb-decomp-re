#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define ftDonkeyThrowFTurnCheckInterrupt(fighter_gobj)                            \
(                                                                           \
    (ftCommon_LightThrow_CheckInterruptCommon(fighter_gobj) != FALSE) ||    \
    (ftDonkeyThrowFFCheckInterruptThrowFCommon(fighter_gobj) != FALSE)    \
)

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8014D740
void ftDonkeyThrowFTurnProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->command_vars.flags.flag1 = 0;

        fp->lr = -fp->lr;

        fp->phys_info.vel_ground.x = -fp->phys_info.vel_ground.x;
    }
    ftStatusSetOnAnimEnd(fighter_gobj, ftDonkeyThrowFWaitSetStatus);
}

// 0x8014D790
void ftDonkeyThrowFTurnProcInterrupt(GObj *fighter_gobj)
{
    if (!(ftDonkeyThrowFTurnCheckInterrupt(fighter_gobj)))
    {
        ftDonkeyThrowFKneeBendCheckInterruptThrowFCommon(fighter_gobj);
    }
}

// 0x8014D7D0
void ftDonkeyThrowFTurnSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag1 = 0;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Donkey_ThrowFTurn, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x8014D810
sb32 ftDonkeyThrowFTurnCheckInterruptThrowFCommon(GObj *fighter_gobj)
{
    if (ftCommon_Turn_CheckInputSuccess(fighter_gobj) != FALSE)
    {
        ftDonkeyThrowFTurnSetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}
