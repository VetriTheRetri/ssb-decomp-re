#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80143560
void ftCommonDamageFallProcInterrupt(GObj *fighter_gobj)
{
    if
    (
        (ftCommonSpecialAirCheckInterruptCommon(fighter_gobj) == FALSE)     && 
        (ftCommonAttackAirCheckInterruptCommon(fighter_gobj) == FALSE)      &&
        (ftCommonJumpAerialCheckInterruptCommon(fighter_gobj) == FALSE)
    )
    {
        ftCommonHammerFallCheckInterruptDamageFall(fighter_gobj);
    }
}

// 0x801435B0
void ftCommonDamageFallProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (mpObjectProc_ProcFighterCliff(fighter_gobj) != FALSE)
    {
        if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_CLIFF_MASK)
        {
            ftCommonCliffCatchSetStatus(fighter_gobj);
        }
        else if ((ftCommonPassiveStandCheckInterruptDamage(fighter_gobj) == FALSE) && (ftCommonPassiveCheckInterruptDamage(fighter_gobj) == FALSE))
        {
            ftCommonDownBounceSetStatus(fighter_gobj);
        }
    }
}

// 0x80143630
void ftCommonDamageFallClampRumble(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftPhysics_ClampAirVelXMax(fp);
    ftMainMakeRumble(fp, 3, 0);
}

// 0x80143664
void ftCommonDamageFallSetStatusFromDamage(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_DamageFall, 0.0F, 1.0F, (FTSTATUPDATE_PLAYERTAG_PRESERVE | FTSTATUPDATE_FASTFALL_PRESERVE));
    ftCommonDamageFallClampRumble(fighter_gobj);
}

// 0x801436A0
void ftCommonDamageFallSetStatusFromCliffWait(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_DamageFall, 0.0F, 1.0F, FTSTATUPDATE_FASTFALL_PRESERVE);
    ftCommonDamageFallClampRumble(fighter_gobj);

    fp->time_since_last_z = FTINPUT_ZTRIGLAST_FRAMES_MAX;
}

// 0x801436F0
void func_ovl3_801436F0(GObj *fighter_gobj) // Unused
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_DamageFall, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_PLAYERTAG_PRESERVE | FTSTATUPDATE_FASTFALL_PRESERVE));
    ftCommonDamageFallClampRumble(fighter_gobj);
}
