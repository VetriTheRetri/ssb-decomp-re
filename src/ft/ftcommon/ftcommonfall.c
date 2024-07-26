#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8013F9A0
void ftCommonFallProcInterrupt(GObj *fighter_gobj)
{
    if ((ftCommonSpecialAirCheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommonAttackAirCheckInterruptCommon(fighter_gobj) == FALSE))
    {
        ftCommonJumpAerialCheckInterruptCommon(fighter_gobj);
    }
}

// 0x8013F9E0
void ftCommonFallSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftHammerCheckHoldHammer(fighter_gobj) != FALSE)
    {
        ftCommonHammerFallSetStatus(fighter_gobj);
    }
    else
    {
        if (fp->ground_or_air == nMPKineticsGround)
        {
            ftMap_SetAir(fp);
        }
        ftMainSetFighterStatus(fighter_gobj, ((fp->jumps_used >= fp->attributes->jumps_max) ? nFTCommonStatusFallAerial : nFTCommonStatusFall), 0.0F, 1.0F, FTSTATUPDATE_FASTFALL_PRESERVE);

        ftPhysics_ClampAirVelXMax(fp);

        fp->is_special_interrupt = TRUE;
    }
}
