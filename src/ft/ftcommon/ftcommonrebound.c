#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80144A10
void ftCommonReboundProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.common.rebound.rebound_timer--;

    if (fp->status_vars.common.rebound.rebound_timer <= 0.0F)
    {
        ftCommonWaitSetStatus(fighter_gobj);
    }
}

// 0x80144A60
void ftCommonReboundSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusRebound, 0.0F, fp->status_vars.common.rebound.anim_speed, FTSTATUS_PRESERVE_NONE);
}

// 0x80144A90
void ftCommonReboundWaitProcUpdate(GObj *fighter_gobj)
{
    ftCommonReboundSetStatus(fighter_gobj);
}

// 0x80144AB0
void ftCommonReboundWaitSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 lr_rebound;

    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusReboundWait, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);

    fp->status_vars.common.rebound.anim_speed = fp->attributes->rebound_anim_length / fp->attack_rebound;

    fp->status_vars.common.rebound.rebound_timer = fp->attack_rebound;

    if (fp->lr == fp->lr_attack)
    {
        lr_rebound = LR_Left;
    }
    else lr_rebound = LR_Right;

    fp->phys_info.vel_ground.x = (lr_rebound * (2.0F * fp->status_vars.common.rebound.rebound_timer));
}
