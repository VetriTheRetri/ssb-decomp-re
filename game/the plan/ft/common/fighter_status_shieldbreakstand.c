#include <ft/fighter.h>

#define FTCOMMON_SHIELDBREAKSTAND_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)

// 0x801497A0
void ftCommon_ShieldBreakStand_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_FuraFura_SetStatus);
}

// 0x801497C4
void ftCommon_ShieldBreakStand_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id = (fp->status_info.status_id == ftStatus_Common_ShieldBreakDownD) ? ftStatus_Common_ShieldBreakStandD : ftStatus_Common_ShieldBreakStandU;

    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTCOMMON_SHIELDBREAKSTAND_STATUPDATE_FLAGS);
}
