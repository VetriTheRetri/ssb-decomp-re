#include <ft/fighter.h>

// 0x80144A10
void ftCommon_Rebound_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.common.rebound.rebound_timer--;

    if (fp->status_vars.common.rebound.rebound_timer <= 0.0F)
    {
        ftCommon_Wait_SetStatus(fighter_gobj);
    }
}

// 0x80144A60
void ftCommon_Rebound_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_Rebound, 0.0F, fp->status_vars.common.rebound.anim_speed, FTSTATUPDATE_NONE_PRESERVE);
}

// 0x80144A90
void ftCommon_ReboundWait_ProcUpdate(GObj *fighter_gobj)
{
    ftCommon_Rebound_SetStatus(fighter_gobj);
}

// 0x80144AB0
void ftCommon_ReboundWait_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 lr_rebound;

    ftStatus_Update(fighter_gobj, ftStatus_Common_ReboundWait, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->status_vars.common.rebound.anim_speed = fp->attributes->rebound_anim_length / fp->attack_rebound;

    fp->status_vars.common.rebound.rebound_timer = fp->attack_rebound;

    if (fp->lr == fp->lr_attack)
    {
        lr_rebound = LEFT;
    }
    else lr_rebound = RIGHT;

    fp->phys_info.vel_ground.x = (lr_rebound * (2.0F * fp->status_vars.common.rebound.rebound_timer));
}