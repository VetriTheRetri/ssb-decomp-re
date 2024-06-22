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

    if (ftHammer_CheckItemHold(fighter_gobj) != FALSE)
    {
        ftCommonHammerFallSetStatus(fighter_gobj);
    }
    else
    {
        if (fp->ground_or_air == GA_Ground)
        {
            ftMap_SetAir(fp);
        }
        ftMainSetFighterStatus(fighter_gobj, ((fp->jumps_used >= fp->attributes->jumps_max) ? ftStatus_Common_FallAerial : ftStatus_Common_Fall), 0.0F, 1.0F, FTSTATUPDATE_FASTFALL_PRESERVE);

        ftPhysics_ClampAirVelXMax(fp);

        fp->is_special_interrupt = TRUE;
    }
}