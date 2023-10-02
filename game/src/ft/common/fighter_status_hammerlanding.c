#include <ft/fighter.h>

// 0x80148050
void ftCommon_HammerLanding_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.common.hammer.landing_anim_frame++;

    if (fp->status_vars.common.hammer.landing_anim_frame <= 4.0F)
    {
        ftHammer_SetStatusHammerWait(fighter_gobj);
    }
}

// 0x801480A4
void ftCommon_HammerLanding_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_HammerLanding, ftHammer_GetAnimFrame(fighter_gobj), 1.0F, ftHammer_GetStatUpdateFlags(fighter_gobj));
    ftHammer_CheckSetColAnim(fighter_gobj);

    fp->status_vars.common.hammer.landing_anim_frame = 0.0F;
}