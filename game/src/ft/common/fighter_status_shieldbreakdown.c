#include <ft/fighter.h>

#define FTCOMMON_SHIELDBREAKDOWN_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)

// 0x80149680 - Probably its own file?
void ftCommon_ShieldBreakDown_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_ShieldBreakStand_SetStatus);
}

// 0x801496A4
void ftCommon_ShieldBreakDown_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    if (fp->ground_or_air == GA_Air)
    {
        ftMap_SetGround(fp);
    }
    status_id = (ftCommon_DownBounce_UpOrDown(fighter_gobj) != 0) ? ftStatus_Common_ShieldBreakDownD : ftStatus_Common_ShieldBreakDownU;

    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTCOMMON_SHIELDBREAKDOWN_STATUPDATE_FLAGS);
    ftCommon_DownBounce_UpdateEffects(fighter_gobj);
}