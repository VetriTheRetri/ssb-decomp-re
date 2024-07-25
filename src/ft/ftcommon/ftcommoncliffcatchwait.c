#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80144B30
void ftCommonCliffCatchProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftCommonCliffWaitSetStatus);
}

// 0x80144B54
void ftCommonCliffCommonProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj *topn_joint = fp->joint[ftParts_Joint_TopN], *transn_joint = fp->joint[ftParts_Joint_TransN];
    Vec3f vel;

    if (fp->lr == LR_Right)
    {
        mpCollision_GetLREdgeLeft(fp->coll_data.cliff_id, &vel);
    }
    else mpCollision_GetLREdgeRight(fp->coll_data.cliff_id, &vel);

    topn_joint->translate.vec.f.x = ((transn_joint->translate.vec.f.z * fp->lr * topn_joint->scale.vec.f.x) + vel.x);
    topn_joint->translate.vec.f.y = ((transn_joint->translate.vec.f.y * topn_joint->scale.vec.f.y) + vel.y);
}

// 0x80144C1C
void ftCommonCliffCommonProcMap(GObj *fighter_gobj)
{
    return;
}

// 0x80144C24
void ftCommonCliffCatchSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f vel;

    ftMap_SetGround(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_CliffCatch, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftMap_SetAir(fp);
    ftPhysics_StopVelAll(fighter_gobj);

    fp->coll_data.ground_line_id = -1;

    ftCommonCliffCommonProcPhysics(fighter_gobj);

    fp->is_cliff_hold = TRUE;

    if (fp->lr == LR_Right)
    {
        mpCollision_GetLREdgeLeft(fp->coll_data.cliff_id, &vel);
    }
    else mpCollision_GetLREdgeRight(fp->coll_data.cliff_id, &vel);

    efManagerFlashMiddleMakeEffect(&vel);

    fp->proc_damage = ftCommonCliffCommonProcDamage;

    ftParamSetCaptureImmuneMask(fp, FTCATCHKIND_MASK_TARUCANN);
}

// 0x80144CF8
void ftCommonCliffCommonProcDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    mpObjectColl *object_coll = &fp->coll_data.object_coll;
    Vec3f vel;

    if (fp->lr == LR_Right)
    {
        mpCollision_GetLREdgeLeft(fp->coll_data.cliff_id, &vel);
    }
    else mpCollision_GetLREdgeRight(fp->coll_data.cliff_id, &vel);

    vel.x -= ((object_coll->width + 30.0F) * fp->lr);
    vel.y -= object_coll->center;

    ftMap_RunCollisionDefault(fighter_gobj, &vel, &fp->coll_data);
}

// 0x80144DA4
void ftCommonCliffWaitProcInterrupt(GObj *fighter_gobj)
{
    if ((ftCommonCliffAttackCheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommonCliffEscapeCheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommonCliffClimbOrFallCheckInterruptCommon(fighter_gobj) == FALSE))
    {
        ftCommonCliffWaitCheckFall(fighter_gobj);
    }
}

// 0x80144DF4
void ftCommonCliffWaitSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_CliffWait, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->status_vars.common.cliffwait.status_id = 0;

    if (fp->percent_damage < FTCOMMON_CLIFF_DAMAGE_HIGH)
    {
        fp->status_vars.common.cliffwait.fall_wait = FTCOMMON_CLIFF_FALL_WAIT_DAMAGE_LOW;
    }
    else fp->status_vars.common.cliffwait.fall_wait = FTCOMMON_CLIFF_FALL_WAIT_DAMAGE_HIGH;

    fp->is_cliff_hold = TRUE;

    ftCommon_SetPlayerTagWait(fighter_gobj, 120);

    fp->proc_damage = ftCommonCliffCommonProcDamage;

    ftParamSetCaptureImmuneMask(fp, FTCATCHKIND_MASK_TARUCANN);
}

// 0x80144E84
sb32 ftCommonCliffWaitCheckFall(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.common.cliffwait.fall_wait--;

    if (fp->status_vars.common.cliffwait.fall_wait == 0)
    {
        fp->cliffcatch_wait = FTCOMMON_CLIFF_CATCH_WAIT;

        ftCommonCliffCommonProcDamage(fighter_gobj);
        ftCommonDamageFallSetStatusFromCliffWait(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}
