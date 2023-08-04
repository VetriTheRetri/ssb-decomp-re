#include <ft/fighter.h>

#define ftCheckInterruptSquat(fighter_gobj) \
(                                                  \
    (ftCommon_SpecialN_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_SpecialHi_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_SpecialLw_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_Catch_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_AttackS4_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_AttackHi4_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_AttackLw4_CheckInterruptSquat(fighter_gobj) != FALSE) || \
    (ftCommon_AttackS3_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_AttackHi3_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_AttackLw3_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_Attack1_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_GuardOn_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_Appeal_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_KneeBend_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_Pass_CheckInterruptSquat(fighter_gobj) != FALSE) || \
    (ftCommon_DokanStart_CheckInterruptCommon(fighter_gobj) != FALSE)    \
)                                                  \

#define ftStatusCheckInterruptSquatWait(fighter_gobj)                    \
(                                                                        \
    (ftCommon_SpecialN_CheckInterruptCommon(fighter_gobj) != FALSE)   || \
    (ftCommon_SpecialHi_CheckInterruptCommon(fighter_gobj) != FALSE)  || \
    (ftCommon_SpecialLw_CheckInterruptCommon(fighter_gobj) != FALSE)  || \
    (ftCommon_Catch_CheckInterruptCommon(fighter_gobj) != FALSE)      || \
    (ftCommon_AttackS4_CheckInterruptCommon(fighter_gobj) != FALSE)   || \
    (ftCommon_AttackHi4_CheckInterruptCommon(fighter_gobj) != FALSE)  || \
    (ftCommon_AttackLw4_CheckInterruptSquat(fighter_gobj) != FALSE)   || \
    (ftCommon_AttackS3_CheckInterruptCommon(fighter_gobj) != FALSE)   || \
    (ftCommon_AttackHi3_CheckInterruptCommon(fighter_gobj) != FALSE)  || \
    (ftCommon_AttackLw3_CheckInterruptCommon(fighter_gobj) != FALSE)  || \
    (ftCommon_Attack1_CheckInterruptCommon(fighter_gobj) != FALSE)    || \
    (ftCommon_GuardOn_CheckInterruptCommon(fighter_gobj) != FALSE) ||                       \
    (ftCommon_Appeal_CheckInterruptCommon(fighter_gobj) != FALSE)     || \
    (ftCommon_KneeBend_CheckInterruptCommon(fighter_gobj) != FALSE)   || \
    (ftCommon_Dash_CheckInterruptCommon(fighter_gobj) != FALSE)       || \
    (ftCommon_Pass_CheckInterruptSquat(fighter_gobj) != FALSE)        || \
    (ftCommon_DokanStart_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_SquatRv_CheckInterruptSquatWait(fighter_gobj) != FALSE)    \
)                                                                        \

#define ftCheckInterruptSquatRv(fighter_gobj) \
(                                                      \
    (ftCommon_SpecialN_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_SpecialHi_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_SpecialLw_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_Catch_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_AttackS4_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_AttackHi4_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_AttackLw4_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_AttackS3_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_AttackHi3_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_AttackLw3_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_Attack1_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_GuardOn_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_Appeal_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_KneeBend_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_Dash_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_Pass_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_DokanStart_CheckInterruptCommon(fighter_gobj) != FALSE)        \
)                                                      \

// 0x80142E70
bool32 ftCommon_Squat_CheckGotoPass(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.squat.is_allow_pass != FALSE)
    {
        if (fp->status_vars.common.squat.pass_wait != 0)
        {
            fp->status_vars.common.squat.pass_wait--;

            if (fp->status_vars.common.squat.pass_wait == 0)
            {
                ftCommon_Pass_SetStatusParam(fighter_gobj, ftStatus_Common_Pass, 1.0F, 0);

                return TRUE;
            }
        }
    }
    if (fp->status_vars.common.squat.unk_0x8 != 0)
    {
        fp->status_vars.common.squat.unk_0x8--;
    }
    return FALSE;
}

// 0x80142ED8
void ftCommon_Squat_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_SquatWait_SetStatus);
}

// 0x80142EFC
void ftCommon_Squat_ProcInterrupt(GObj *fighter_gobj)
{
    if (!ftCheckInterruptSquat(fighter_gobj))
    {
        ftCommon_Squat_CheckGotoPass(fighter_gobj);
    }
}

// 0x80143024
void ftCommon_Squat_SetStatusNoPass(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_Squat, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    fp->x192_flag_b0 = TRUE;

    fp->status_vars.common.squat.is_allow_pass = FALSE;
    fp->status_vars.common.squat.pass_wait = 0;

    if ((fp->input.pl.stick_range.y <= FTCOMMON_SQUAT_STICK_RANGE_MIN) && (fp->tap_stick_y < FTCOMMON_SQUAT_BUFFER_FRAMES_MAX))
    {
        fp->status_vars.common.squat.unk_0x8 = 3;
    }
    else fp->status_vars.common.squat.unk_0x8 = 0;
}

// 0x801430A8
void ftCommon_Squat_SetStatusPass(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_Squat, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    fp->x192_flag_b0 = TRUE;

    fp->status_vars.common.squat.is_allow_pass = TRUE;
    fp->status_vars.common.squat.pass_wait = FTCOMMON_SQUAT_PASS_WAIT;
    fp->status_vars.common.squat.unk_0x8 = 3;
}

// 0x8014310C
bool32 ftCommon_Squat_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->input.pl.stick_range.y <= (FTCOMMON_SQUAT_STICK_RANGE_MIN - 2))
    {
        ftCommon_Squat_SetStatusNoPass(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}

// 0x8014314C
void ftCommon_SquatWait_ProcUpdate(GObj *fighter_gobj)
{
    return;
}

void ftCommon_SquatWait_ProcInterrupt(GObj *fighter_gobj)
{
    if (!ftStatusCheckInterruptSquatWait(fighter_gobj))
    {
        ftCommon_Squat_CheckGotoPass(fighter_gobj);
    }
}

// 0x8014329C
void ftCommon_SquatWait_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_SquatWait, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->x192_flag_b0 = TRUE;

    func_ovl2_800E7F7C(fighter_gobj, 120);
}

// 0x801432F0
void ftCommon_SquatWait_SetStatusNoPass(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_SquatWait, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->x192_flag_b0 = TRUE;

    func_ovl2_800E7F7C(fighter_gobj, 120);

    fp->status_vars.common.squat.is_allow_pass = FALSE;
    fp->status_vars.common.squat.unk_0x8 = 0;
    fp->status_vars.common.squat.pass_wait = 0;
}

// 0x80143354
bool32 ftCommon_SquatWait_CheckInterruptLanding(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->input.pl.stick_range.y <= (FTCOMMON_SQUAT_STICK_RANGE_MIN - 2))
    {
        ftCommon_SquatWait_SetStatusNoPass(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}

// 0x80143394
void ftCommon_SquatRv_ProcInterrupt(GObj *fighter_gobj)
{
    if (!ftCheckInterruptSquatRv(fighter_gobj))
    {
        ftCommon_Walk_CheckInterruptCommon(fighter_gobj);
    }
}

// 0x801434CC
void ftCommon_SquatRv_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_SquatRv, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    fp->x192_flag_b0 = TRUE;
}

// 0x8014351C
bool32 ftCommon_SquatRv_CheckInterruptSquatWait(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->input.pl.stick_range.y >= (FTCOMMON_SQUAT_STICK_RANGE_MIN + 4))
    {
        ftCommon_SquatRv_SetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}