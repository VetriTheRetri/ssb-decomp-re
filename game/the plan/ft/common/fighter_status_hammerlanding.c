#include <ft/fighter.h>

// 0x80148050
void ftCommon_HammerLanding_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.common.hammer.landing_anim_frame++;

    if (fp->status_vars.common.hammer.landing_anim_frame <= 4.0F)
    {
        ftCommon_HammerWait_SetStatus(fighter_gobj);
    }
}

// 0x801480A4
void ftCommon_HammerLanding_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Common_HammerLanding, ftCommon_HammerGetAnimFrame(fighter_gobj), 1.0F, ftCommon_HammerGetStatUpdateFlags(fighter_gobj));
    ftCommon_HammerCheckSetColAnim(fighter_gobj);

    fp->status_vars.common.hammer.landing_anim_frame = 0.0F;
}