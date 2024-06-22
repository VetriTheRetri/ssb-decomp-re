#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define ftCommonWalkCheckInterrupt(fighter_gobj)                        \
(                                                                       \
    (ftCommonSpecialNCheckInterruptCommon(fighter_gobj) != FALSE)   ||  \
    (ftCommonSpecialHiCheckInterruptCommon(fighter_gobj) != FALSE)  ||  \
    (ftCommonSpecialLwCheckInterruptCommon(fighter_gobj) != FALSE)  ||  \
    (ftCommonCatchCheckInterruptCommon(fighter_gobj) != FALSE)      ||  \
    (ftCommonAttackS4CheckInterruptCommon(fighter_gobj) != FALSE)   ||  \
    (ftCommonAttackHi4CheckInterruptCommon(fighter_gobj) != FALSE)  ||  \
    (ftCommonAttackLw4CheckInterruptCommon(fighter_gobj) != FALSE)  ||  \
    (ftCommonAttackS3CheckInterruptCommon(fighter_gobj) != FALSE)   ||  \
    (ftCommonAttackHi3CheckInterruptCommon(fighter_gobj) != FALSE)  ||  \
    (ftCommonAttackLw3CheckInterruptCommon(fighter_gobj) != FALSE)  ||  \
    (ftCommonAttack1CheckInterruptCommon(fighter_gobj) != FALSE)    ||  \
    (ftCommonGuardOnCheckInterruptCommon(fighter_gobj) != FALSE)    ||  \
    (ftCommonAppealCheckInterruptCommon(fighter_gobj) != FALSE)     ||  \
    (ftCommonKneeBendCheckInterruptCommon(fighter_gobj) != FALSE)   ||  \
    (ftCommonDashCheckInterruptCommon(fighter_gobj) != FALSE)       ||  \
    (ftCommonSquatCheckInterruptCommon(fighter_gobj) != FALSE)      ||  \
    (ftCommonWaitCheckInterruptCommon(fighter_gobj) != FALSE)           \
)

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8013E2E0
f32 ftCommonWalkGetWalkAnimLength(ftStruct *fp, s32 status_id)
{
    f32 walk_anim_length;

    switch (status_id)
    {
    case ftStatus_Common_WalkSlow:
        walk_anim_length = fp->attributes->walkslow_anim_length;
        break;

    case ftStatus_Common_WalkMiddle:
        walk_anim_length = fp->attributes->walkmiddle_anim_length;
        break;

    case ftStatus_Common_WalkFast:
        walk_anim_length = fp->attributes->walkfast_anim_length;
        break;
    }
    return walk_anim_length;
}

// 0x8013E340
s32 ftCommonWalkGetWalkStatus(s8 stick_range_x)
{
    s32 status_id;

    stick_range_x = ABS(stick_range_x);

    if (stick_range_x >= FTCOMMON_WALKFAST_STICK_RANGE_MIN) 
    {
        status_id = ftStatus_Common_WalkFast;
    }
    else if (stick_range_x >= FTCOMMON_WALKMIDDLE_STICK_RANGE_MIN) 
    {
        status_id = ftStatus_Common_WalkMiddle;
    }
    else status_id = ftStatus_Common_WalkSlow;

    return status_id;
}

// 0x8013E390
void ftCommonWalkProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!(ftCommonWalkCheckInterrupt(fighter_gobj)))
    {
        s32 status_id = ftCommonWalkGetWalkStatus(ABS(fp->input.pl.stick_range.x));

        if (status_id != fp->status_info.status_id)
        {
            f32 div = ftCommonWalkGetWalkAnimLength(fp, fp->status_info.status_id);
            f32 mul = ftCommonWalkGetWalkAnimLength(fp, status_id);

            ftCommonWalkSetStatusParam(fighter_gobj, (s32) ((fighter_gobj->anim_frame / div) * mul));
        }
    }
}

// 0x8013E548
void ftCommonWalkProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftPhysics_SetGroundVelAbsStickRange(fp, fp->attributes->walk_speed_mul, fp->attributes->traction);
    ftPhysics_SetGroundVelTransferAir(fighter_gobj);
}

// 0x8013E580
void ftCommonWalkSetStatusParam(GObj *fighter_gobj, f32 anim_frame_begin)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id = ftCommonWalkGetWalkStatus(fp->input.pl.stick_range.x);

    ftMainSetFighterStatus(fighter_gobj, status_id, anim_frame_begin, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    if (status_id != ftStatus_Common_WalkFast)
    {
        fp->is_special_interrupt = TRUE;
    }
}

// 0x8013E5F4
void ftCommonWalkSetStatusDefault(GObj *fighter_gobj)
{
    ftCommonWalkSetStatusParam(fighter_gobj, 0.0F);
}

// 0x8013E614
sb32 ftCommonWalkCheckInputSuccess(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->input.pl.stick_range.x * fp->lr) >= 8)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8013E648
sb32 ftCommonWalkCheckInterruptCommon(GObj *fighter_gobj)
{
    if (ftCommonWalkCheckInputSuccess(fighter_gobj) != FALSE)
    {
        ftCommonWalkSetStatusDefault(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}
