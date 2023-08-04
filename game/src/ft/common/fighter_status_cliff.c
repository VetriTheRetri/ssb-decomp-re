#include <ft/fighter.h>

// CliffCatch + CliffWait

// 0x80144B30
void ftCommon_CliffCatch_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_CliffWait_SetStatus);
}

// 0x80144B54
void ftCommon_CliffCommon_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj *topn_joint = fp->joint[ftParts_TopN_Joint], *transn_joint = fp->joint[ftParts_TransN_Joint];
    Vec3f vel;

    if (fp->lr == RIGHT)
    {
        mpCollision_GetLREdgeLeft(fp->coll_data.cliff_id, &vel);
    }
    else mpCollision_GetLREdgeRight(fp->coll_data.cliff_id, &vel);

    topn_joint->translate.x = ((transn_joint->translate.z * fp->lr * topn_joint->scale.x) + vel.x);
    topn_joint->translate.y = ((transn_joint->translate.y * topn_joint->scale.y) + vel.y);
}

// 0x80144C1C
void ftCommon_CliffCommon_ProcMap(GObj *fighter_gobj)
{
    return;
}

// 0x80144C24
void ftCommon_CliffCatch_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f vel;

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Common_CliffCatch, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftMap_SetAir(fp);
    func_ovl2_800D9444(fighter_gobj);

    fp->coll_data.ground_line_id = -1;

    ftCommon_CliffCommon_ProcPhysics(fighter_gobj);

    fp->x190_flag_b7 = TRUE;

    if (fp->lr == RIGHT)
    {
        mpCollision_GetLREdgeLeft(fp->coll_data.cliff_id, &vel);
    }
    else mpCollision_GetLREdgeRight(fp->coll_data.cliff_id, &vel);

    efParticle_FlashMiddle_MakeEffect(&vel);

    fp->proc_damage = ftCommon_CliffCommon_ProcDamage;

    ftCommon_SetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_CLIFFCOMMON);
}

// 0x80144CF8
void ftCommon_CliffCommon_ProcDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    mpObjectColl *object_coll = &fp->coll_data.object_coll;
    Vec3f vel;

    if (fp->lr == RIGHT)
    {
        mpCollision_GetLREdgeLeft(fp->coll_data.cliff_id, &vel);
    }
    else mpCollision_GetLREdgeRight(fp->coll_data.cliff_id, &vel);

    vel.x -= ((object_coll->width + 30.0F) * fp->lr);
    vel.y -= object_coll->center;

    func_ovl2_800DF014(fighter_gobj, &vel, &fp->coll_data);
}

// 0x80144DA4
void ftCommon_CliffWait_ProcInterrupt(GObj *fighter_gobj)
{
    if ((ftCommon_CliffAttack_CheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommon_CliffEscape_CheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommon_CliffClimbOrFall_CheckInterruptCommon(fighter_gobj) == FALSE))
    {
        ftCommon_CliffWait_CheckFall(fighter_gobj);
    }
}

// 0x80144DF4
void ftCommon_CliffWait_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_CliffWait, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->status_vars.common.cliffwait.status_id = 0;

    if (fp->percent_damage < FTCOMMON_CLIFF_DAMAGE_HIGH)
    {
        fp->status_vars.common.cliffwait.fall_wait = FTCOMMON_CLIFF_FALL_WAIT_DAMAGE_LOW;
    }
    else fp->status_vars.common.cliffwait.fall_wait = FTCOMMON_CLIFF_FALL_WAIT_DAMAGE_HIGH;

    fp->x190_flag_b7 = TRUE;

    func_ovl2_800E7F7C(fighter_gobj, 120);

    fp->proc_damage = ftCommon_CliffCommon_ProcDamage;

    ftCommon_SetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_CLIFFCOMMON);
}

// 0x80144E84
bool32 ftCommon_CliffWait_CheckFall(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.common.cliffwait.fall_wait--;

    if (fp->status_vars.common.cliffwait.fall_wait == 0)
    {
        fp->cliffcatch_wait = FTCOMMON_CLIFF_CATCH_WAIT;

        ftCommon_CliffCommon_ProcDamage(fighter_gobj);
        ftCommon_DamageFall_SetStatusFromCliffWait(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}