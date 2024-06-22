#include <ft/fighter.h>

extern f32 ftCommon_GetStickAngleRadians(ftStruct*);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80144EE0
void ftCommonCliffQuickProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        switch (fp->status_vars.common.cliffmotion.status_id)
        {
        case nFTCommonCliffKindClimbQuick:
            ftCommonCliffClimbQuick1SetStatus(fighter_gobj);
            break;

        case nFTCommonCliffKindAttackQuick:
            ftCommonCliffAttackQuick1SetStatus(fighter_gobj);
            break;

        case nFTCommonCliffKindEscapeQuick:
            ftCommonCliffEscapeQuick1SetStatus(fighter_gobj);
            break;
        }
    }
}

// 0x80144F64
void ftCommonCliffSlowProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        switch (fp->status_vars.common.cliffmotion.status_id)
        {
        case nFTCommonCliffKindClimbSlow:
            ftCommonCliffClimbSlow1SetStatus(fighter_gobj);
            break;

        case nFTCommonCliffKindAttackSlow:
            ftCommonCliffAttackSlow1SetStatus(fighter_gobj);
            break;

        case nFTCommonCliffKindEscapeSlow:
            ftCommonCliffEscapeSlow1SetStatus(fighter_gobj);
            break;
        }
    }
}

// 0x80144FE8
void ftCommonCliffQuickOrSlowSetStatus(GObj *fighter_gobj, s32 status_input)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;
    s32 status_queue;

    if (fp->percent_damage < FTCOMMON_CLIFF_DAMAGE_HIGH)
    {
        status_id = ftStatus_Common_CliffQuick, status_queue = nFTCommonCliffKindClimbQuick;
    }
    else status_id = ftStatus_Common_CliffSlow, status_queue = nFTCommonCliffKindClimbSlow;

    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    fp->status_vars.common.cliffmotion.status_id = status_input + status_queue;
    fp->status_vars.common.cliffmotion.cliff_id = fp->coll_data.cliff_id;

    fp->is_cliff_hold = TRUE;

    fp->proc_damage = ftCommonCliffCommonProcDamage;
}

// 0x80145084
sb32 ftCommonCliffClimbOrFallCheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((ABS(fp->input.pl.stick_range.x) >= FTCOMMON_CLIFF_MOTION_STICK_RANGE_MIN) || (ABS(fp->input.pl.stick_range.y) >= FTCOMMON_CLIFF_MOTION_STICK_RANGE_MIN))
    {
        f32 angle = ftCommon_GetStickAngleRadians(fp);

        if ((angle > F_CST_DTOR32(50.0F)) || ((angle > F_CST_DTOR32(-50.0F)) && ((fp->input.pl.stick_range.x * fp->lr) >= 0)))
        {
            if (fp->status_vars.common.cliffmotion.status_id != 0)
            {
                ftCommonCliffQuickOrSlowSetStatus(fighter_gobj, 0);

                return TRUE;
            }
            else return FALSE;
        }
        else if (fp->status_vars.common.cliffmotion.status_id != 0)
        {
            fp->cliffcatch_wait = FTCOMMON_CLIFF_CATCH_WAIT;

            ftCommonCliffCommonProcDamage(fighter_gobj);
            ftCommonFallSetStatus(fighter_gobj);

            return TRUE;
        }
        else return FALSE;
    }
    else fp->status_vars.common.cliffmotion.status_id = 1;

    return FALSE;
}

// 0x801451A8
void ftCommonCliffClimbQuick1ProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftCommonCliffClimbQuick2SetStatus);
}

// 0x801451CC
void ftCommonCliffClimbSlow1ProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftCommonCliffClimbSlow2SetStatus);
}

// 0x801451F0
void ftCommonCliffClimbQuick1SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_CliffClimbQuick1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->is_cliff_hold = TRUE;

    fp->proc_damage = ftCommonCliffCommonProcDamage;
}

// 0x80145240
void ftCommonCliffClimbSlow1SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_CliffClimbSlow1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->is_cliff_hold = TRUE;

    fp->proc_damage = ftCommonCliffCommonProcDamage;
}

// 0x80145290
void ftCommonCliffCommon2ProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftMap_SetStatusWaitOrFall);
}

// 0x801452B4
void ftCommonCliffCommon2ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    Vec3f vel;
    Vec3f *translate;
    f32 y;

    if (fp->ground_or_air == GA_Ground)
    {
        ftPhysics_ApplyGroundVelTransN(fighter_gobj);
    }
    else
    {
        translate = &DObjGetStruct(fighter_gobj)->translate.vec.f;

        pos = *translate;

        ftPhysics_GetAirVelTransN(fp, &vel.x, NULL, &vel.z);

        pos.x += vel.x;
        pos.z += vel.z;

        mpCollision_GetSpeedLineID(fp->status_vars.common.cliffmotion.cliff_id, &vel);

        pos.x += vel.x;

        if (mpCollision_GetUDCommonUp(fp->status_vars.common.cliffmotion.cliff_id, &pos, &y, NULL, NULL) != FALSE)
        {
            pos.y += y;

            pos.y += fp->joint[ftParts_Joint_TransN]->translate.vec.f.y;

            fp->phys_info.vel_air.x = pos.x - translate->x;
            fp->phys_info.vel_air.y = pos.y - translate->y;
            fp->phys_info.vel_air.z = pos.z - translate->z;
        }
        else ftPhysics_ApplyAirVelTransNAll(fighter_gobj);
    }
}

// 0x801453F0
void ftCommonCliffClimbCommon2ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        ftMap_CheckGroundBreakSetFall(fighter_gobj);
    }
    else if (ftMap_CheckAirLanding(fighter_gobj) != FALSE)
    {
        ftMap_SetGround(fp);
    }
}

// 0x80145440
void ftCommonCliffAttackEscape2ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        ftMap_CheckGroundStopEdgeFall(fighter_gobj);
    }
    else if (ftMap_CheckAirLanding(fighter_gobj) != FALSE)
    {
        ftMap_SetGround(fp);
    }
}

// 0x80145490
void ftCommonCliffCommon2UpdateCollData(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    mpCollData *coll_data = &fp->coll_data;
    Vec3f *translate = &DObjGetStruct(fighter_gobj)->translate.vec.f;

    if (fp->attributes->cliff_status_ground_air_id[fp->status_vars.common.cliffmotion.status_id] == GA_Ground)
    {
        ftMap_SetGround(fp);
    }
    if (fp->lr == LR_Right)
    {
        mpCollision_GetLREdgeLeft(coll_data->cliff_id, translate);

        translate->x += 5.0F;
    }
    else
    {
        mpCollision_GetLREdgeRight(coll_data->cliff_id, translate);

        translate->x -= 5.0F;
    }
    coll_data->ground_line_id = coll_data->cliff_id;

    mpCollision_GetUDCommonUp(coll_data->ground_line_id, translate, &coll_data->ground_dist, &coll_data->ground_flags, &coll_data->ground_angle);

    translate->y += coll_data->ground_dist;

    coll_data->ground_dist = 0.0F;
}

// 0x8014557C
void ftCommonCliffCommon2InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        fp->is_ignore_jostle = TRUE;
    }
}

// 0x801455A0
void ftCommonCliffClimbQuick2SetStatus(GObj *fighter_gobj)
{
    ftCommonCliffCommon2UpdateCollData(fighter_gobj);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_CliffClimbQuick2, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommonCliffCommon2InitStatusVars(fighter_gobj);
}

// 0x801455E0
void ftCommonCliffClimbSlow2SetStatus(GObj *fighter_gobj)
{
    ftCommonCliffCommon2UpdateCollData(fighter_gobj);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_CliffClimbSlow2, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommonCliffCommon2InitStatusVars(fighter_gobj);
}
