#include <ft/fighter.h>

// 0x80144EE0
void ftCommon_CliffQuick_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        switch (fp->status_vars.common.cliffmotion.status_id)
        {
        case 0:
            ftCommon_CliffClimbQuick1_SetStatus(fighter_gobj);
            break;

        case 1:
            ftCommon_CliffAttackQuick1_SetStatus(fighter_gobj);
            break;

        case 2:
            ftCommon_CliffEscapeQuick1_SetStatus(fighter_gobj);
            break;
        }
    }
}

// 0x80144F64
void ftCommon_CliffSlow_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        switch (fp->status_vars.common.cliffmotion.status_id)
        {
        case 3:
            ftCommon_CliffClimbSlow1_SetStatus(fighter_gobj);
            break;

        case 4:
            ftCommon_CliffAttackSlow1_SetStatus(fighter_gobj);
            break;

        case 5:
            ftCommon_CliffEscapeSlow1_SetStatus(fighter_gobj);
            break;
        }
    }
}

// 0x80144FE8
void ftCommon_CliffQuickOrSlow_SetStatus(GObj *fighter_gobj, s32 status_input)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;
    s32 status_new;

    if (fp->percent_damage < FTCOMMON_CLIFF_DAMAGE_HIGH)
    {
        status_id = ftStatus_Common_CliffQuick, status_new = 0;
    }
    else status_id = ftStatus_Common_CliffSlow, status_new = 3;

    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    fp->status_vars.common.cliffmotion.status_id = status_input + status_new;
    fp->status_vars.common.cliffmotion.cliff_id = fp->coll_data.cliff_id;

    fp->x190_flag_b7 = TRUE;

    fp->proc_damage = ftCommon_CliffCommon_ProcDamage;
}

bool32 ftCommon_CliffClimbOrFall_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((ABS(fp->input.pl.stick_range.x) >= FTCOMMON_CLIFF_MOTION_STICK_RANGE_MIN) || (ABS(fp->input.pl.stick_range.y) >= FTCOMMON_CLIFF_MOTION_STICK_RANGE_MIN))
    {
        f32 angle = ftCommon_GetStickAngleRadians(fp);

        if ((angle > F_DEG_TO_RAD(50.0F)) /* 0.87266463F */ || ((angle > F_DEG_TO_RAD(-50.0F)) /* -0.87266463F */ && ((fp->input.pl.stick_range.x * fp->lr) >= 0)))
        {
            if (fp->status_vars.common.cliffmotion.status_id != 0)
            {
                ftCommon_CliffQuickOrSlow_SetStatus(fighter_gobj, 0);

                return TRUE;
            }
            else return FALSE;
        }
        else if (fp->status_vars.common.cliffmotion.status_id != 0)
        {
            fp->cliffcatch_wait = FTCOMMON_CLIFF_CATCH_WAIT;

            ftCommon_CliffCommon_ProcDamage(fighter_gobj);
            ftCommon_Fall_SetStatus(fighter_gobj);

            return TRUE;
        }
        else return FALSE;
    }
    else fp->status_vars.common.cliffmotion.status_id = 1;

    return FALSE;
}

// 0x801451A8
void ftCommon_CliffClimbQuick1_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_CliffClimbQuick2_SetStatus);
}

// 0x801451CC
void ftCommon_CliffClimbSlow1_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_CliffClimbSlow2_SetStatus);
}

// 0x801451F0
void ftCommon_CliffClimbQuick1_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_CliffClimbQuick1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->x190_flag_b7 = TRUE;

    fp->proc_damage = ftCommon_CliffCommon_ProcDamage;
}

// 0x80145240
void ftCommon_CliffClimbSlow1_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_CliffClimbSlow1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->x190_flag_b7 = TRUE;

    fp->proc_damage = ftCommon_CliffCommon_ProcDamage;
}

// 0x80145290
void ftCommon_CliffCommon2_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, func_ovl2_800DEE54);
}

// 0x801452B4
void ftCommon_CliffCommon2_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    Vec3f vel;
    Vec3f *translate;
    f32 y;

    if (fp->ground_or_air == GA_Ground)
    {
        func_ovl2_800D8C14(fighter_gobj);
    }
    else
    {
        translate = &DObjGetStruct(fighter_gobj)->translate;

        pos = *translate;

        func_ovl2_800D9260(fp, &vel.x, NULL, &vel.z);

        pos.x += vel.x;
        pos.z += vel.z;

        func_ovl2_800FA7B8(fp->status_vars.common.cliffmotion.cliff_id, &vel);

        pos.x += vel.x;

        if (mpCollision_GetUUCommonUp(fp->status_vars.common.cliffmotion.cliff_id, &pos, &y, NULL, NULL) != FALSE)
        {
            pos.y += y;

            pos.y += fp->joint[ftParts_TransN_Joint]->translate.y;

            fp->phys_info.vel_air.x = pos.x - translate->x;
            fp->phys_info.vel_air.y = pos.y - translate->y;
            fp->phys_info.vel_air.z = pos.z - translate->z;
        }
        else func_ovl2_800D93E4(fighter_gobj);
    }
}

// 0x801453F0
void ftCommon_CliffClimbCommon2_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        jtgt_ovl2_800DDEC4(fighter_gobj);
    }
    else if (func_ovl2_800DE6B0(fighter_gobj) != FALSE)
    {
        ftMap_SetGround(fp);
    }
}

// 0x80145440
void ftCommon_CliffAttackEscape2_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        func_ovl2_800DDF44(fighter_gobj);
    }
    else if (func_ovl2_800DE6B0(fighter_gobj) != FALSE)
    {
        ftMap_SetGround(fp);
    }
}

// 0x80145490
void ftCommon_CliffCommon2_UpdateCollData(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    mpCollData *coll_data = &fp->coll_data;
    Vec3f *translate = &DObjGetStruct(fighter_gobj)->translate;

    if (fp->attributes->cliff_status_ground_air_id[fp->status_vars.common.cliffmotion.status_id] == GA_Ground)
    {
        ftMap_SetGround(fp);
    }
    if (fp->lr == RIGHT)
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

    mpCollision_GetUUCommonUp(coll_data->ground_line_id, translate, &coll_data->ground_dist, &coll_data->ground_flags, &coll_data->ground_angle);

    translate->y += coll_data->ground_dist;

    coll_data->ground_dist = 0.0F;
}

// 0x8014557C
void ftCommon_CliffCommon2_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        fp->x18F_flag_b4 = TRUE;
    }
}

// 0x801455A0
void ftCommon_CliffClimbQuick2_SetStatus(GObj *fighter_gobj)
{
    ftCommon_CliffCommon2_UpdateCollData(fighter_gobj);
    ftStatus_Update(fighter_gobj, ftStatus_Common_CliffClimbQuick2, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_CliffCommon2_InitStatusVars(fighter_gobj);
}

// 0x801455E0
void ftCommon_CliffClimbSlow2_SetStatus(GObj *fighter_gobj)
{
    ftCommon_CliffCommon2_UpdateCollData(fighter_gobj);
    ftStatus_Update(fighter_gobj, ftStatus_Common_CliffClimbSlow2, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_CliffCommon2_InitStatusVars(fighter_gobj);
}
