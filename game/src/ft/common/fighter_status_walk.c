#include <ft/fighter.h>

#define ftCheckInterruptWalk(fighter_gobj)  \
(                                                  \
    (ftCommon_SpecialN_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_SpecialHi_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_SpecialLw_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_Catch_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_AttackS4_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_AttackHi4_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_AttackLw4_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_AttackS3_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_AttackHi3_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_AttackLw3_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_Attack1_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_GuardOn_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_Appeal_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_KneeBend_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_Dash_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_Squat_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_Wait_CheckInterruptCommon(fighter_gobj) != FALSE)    \
)                                                  \

// 0x8013E2E0
f32 ftCommon_Walk_GetWalkAnimSpeed(ftStruct *fp, s32 status_id)
{
    f32 walk_anim_speed;

    switch (status_id)
    {
    case ftStatus_Common_WalkSlow:
        walk_anim_speed = fp->attributes->walkslow_anim_speed;
        break;

    case ftStatus_Common_WalkMiddle:
        walk_anim_speed = fp->attributes->walkmiddle_anim_speed;
        break;

    case ftStatus_Common_WalkFast:
        walk_anim_speed = fp->attributes->walkfast_anim_speed;
        break;
    }
    return walk_anim_speed;
}

// 0x8013E340
s32 ftCommon_Walk_GetWalkStatus(s8 stick_range_x)
{
    s32 status_id;

    stick_range_x = ABS(stick_range_x);

    if (stick_range_x >= FTCOMMON_WALKFAST_STICK_RANGE_MIN) status_id = ftStatus_Common_WalkFast;

    else if (stick_range_x >= FTCOMMON_WALKMIDDLE_STICK_RANGE_MIN) status_id = ftStatus_Common_WalkMiddle;

    else status_id = ftStatus_Common_WalkSlow;

    return status_id;
}

// 0x8013E390
void ftCommon_Walk_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!ftCheckInterruptWalk(fighter_gobj))
    {
        s32 status_id = ftCommon_Walk_GetWalkStatus(ABS(fp->input.pl.stick_range.x));

        if (status_id != fp->status_info.status_id)
        {
            f32 div = ftCommon_Walk_GetWalkAnimSpeed(fp, fp->status_info.status_id);
            f32 mul = ftCommon_Walk_GetWalkAnimSpeed(fp, status_id);

            ftCommon_Walk_SetStatusParam(fighter_gobj, (s32) ((fighter_gobj->anim_frame / div) * mul));
        }
    }
}

// 0x8013E548
void ftCommon_Walk_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    func_ovl2_800D8A70(fp, fp->attributes->walk_speed_mul, fp->attributes->traction);
    func_ovl2_800D87D0(fighter_gobj);
}

// 0x8013E580
void ftCommon_Walk_SetStatusParam(GObj *fighter_gobj, f32 anim_frame_begin)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id = ftCommon_Walk_GetWalkStatus(fp->input.pl.stick_range.x);

    ftStatus_Update(fighter_gobj, status_id, anim_frame_begin, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    if (status_id != ftStatus_Common_WalkFast)
    {
        fp->x192_flag_b0 = TRUE;
    }
}

// 0x8013E5F4
void ftCommon_Walk_SetStatusDefault(GObj *fighter_gobj)
{
    ftCommon_Walk_SetStatusParam(fighter_gobj, 0.0F);
}

// 0x8013E614
bool32 ftCommon_Walk_CheckInputSuccess(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->input.pl.stick_range.x * fp->lr) >= 8)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8013E648
bool32 ftCommon_Walk_CheckInterruptCommon(GObj *fighter_gobj)
{
    if (ftCommon_Walk_CheckInputSuccess(fighter_gobj) != FALSE)
    {
        ftCommon_Walk_SetStatusDefault(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}