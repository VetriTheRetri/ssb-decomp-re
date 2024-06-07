#include <ft/fighter.h>

#define FTCOMMON_SHIELDBREAKFALL_STATUPDATE_FLAGS (FTSTATUPDATE_DAMAGEPORT_PRESERVE | FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)

// 0x80149720
void ftCommon_ShieldBreakFall_ProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftCommon_ShieldBreakDown_SetStatus);
}

// 0x80149744
void ftCommon_ShieldBreakFall_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_ShieldBreakFall, 0.0F, 1.0F, FTCOMMON_SHIELDBREAKFALL_STATUPDATE_FLAGS); // 0x10B2
    ftPhysics_ClampAirVelXMax(fp);
    ftMainMakeRumble(fp, 3, 0);
}

