#include <ft/fighter.h>

// 0x8013E690
void ftCommon_Turn_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->command_vars.flags.flag1 = 0;

        fp->status_vars.common.turn.is_allow_turn_direction = TRUE;
        fp->status_vars.common.turn.is_disable_interrupts = TRUE;

        fp->lr = -fp->lr;
        fp->phys_info.vel_ground.x = -fp->phys_info.vel_ground.x;
    }
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftCommon_Wait_SetStatus(fighter_gobj);
    }
}

// Dawg what
void ftCommon_Turn_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    bool32 unk_bool;

    if (fp->status_vars.common.turn.is_allow_turn_direction != FALSE)
    {
        fp->input.pl.button_tap |= fp->status_vars.common.turn.button_mask;
    }

    if (fp->status_vars.common.turn.is_disable_interrupts == FALSE) goto interrupt1;

    if (ftCommon_SpecialN_CheckInterruptCommon(fighter_gobj) != FALSE) return;

    if (ftCommon_SpecialHi_CheckInterruptCommon(fighter_gobj) != FALSE) return;

    if (ftCommon_SpecialLw_CheckInterruptCommon(fighter_gobj) != FALSE) return;

interrupt1:
    if (ftCommon_Catch_CheckInterruptCommon(fighter_gobj) == FALSE)
    {
        if (fp->status_vars.common.turn.unk_0x14 < 256) fp->status_vars.common.turn.unk_0x14++;

        unk_bool = (fp->status_vars.common.turn.unk_0x14 < 6) ? ftCommon_AttackS4_CheckInterruptTurn(fighter_gobj) : ftCommon_AttackS4_CheckInterruptCommon(fighter_gobj);

        if (unk_bool == FALSE)
        {
            if (fp->status_vars.common.turn.is_disable_interrupts == FALSE) goto interrupt2;

            if (ftCommon_AttackHi4_CheckInterruptCommon(fighter_gobj) != FALSE) return;

            if (ftCommon_AttackLw4_CheckInterruptCommon(fighter_gobj) != FALSE) return;

            if (ftCommon_AttackS3_CheckInterruptCommon(fighter_gobj) != FALSE) return;

            if (ftCommon_AttackHi3_CheckInterruptCommon(fighter_gobj) != FALSE) return;

            if (ftCommon_AttackLw3_CheckInterruptCommon(fighter_gobj) != FALSE) return;

            if (ftCommon_Attack1_CheckInterruptCommon(fighter_gobj) != FALSE) return;

        interrupt2:
            if (ftCommon_GuardOn_CheckInterruptCommon(fighter_gobj) != FALSE) return;

            if (ftCommon_Appeal_CheckInterruptCommon(fighter_gobj) != FALSE) return;

            if (ftCommon_KneeBend_CheckInterruptCommon(fighter_gobj) != FALSE) return;

            ftCommon_Dash_CheckTurn(fighter_gobj);

            if (fp->status_vars.common.turn.is_allow_turn_direction != FALSE)
            {
                if (fp->status_vars.common.turn.lr_dash != CENTER)
                {
                    if ((fp->input.pl.stick_range.x * fp->status_vars.common.turn.lr_turn) >= FTCOMMON_DASH_STICK_RANGE_MIN)
                    {
                        ftCommon_Dash_SetStatus(fighter_gobj, 0);
                    }
                }
            }
            if (fp->input.pl.button_tap & fp->input.button_mask_a)
            {
                fp->status_vars.common.turn.button_mask |= fp->input.button_mask_a;
            }
            if (fp->input.pl.button_tap & fp->input.button_mask_b)
            {
                fp->status_vars.common.turn.button_mask |= fp->input.button_mask_b;
            }
            if (fp->status_vars.common.turn.is_allow_turn_direction != FALSE)
            {
                fp->status_vars.common.turn.is_allow_turn_direction = FALSE;
            }
        }
    }
}

// 0x8013E908
void ftCommon_Turn_SetStatus(GObj *fighter_gobj, s32 lr_dash)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag1 = 0;

    ftStatus_Update(fighter_gobj, ftStatus_Common_Turn, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    fp->status_vars.common.turn.is_allow_turn_direction = FALSE;
    fp->status_vars.common.turn.is_disable_interrupts = FALSE;
    fp->status_vars.common.turn.button_mask = 0;
    fp->status_vars.common.turn.lr_dash = lr_dash;
    fp->status_vars.common.turn.unk_0x14 = (lr_dash != 0) ? 0 : 256;
    fp->status_vars.common.turn.lr_turn = -fp->lr;
}

// 0x8013E988
void ftCommon_Turn_SetStatusCenter(GObj *fighter_gobj)
{
    ftCommon_Turn_SetStatus(fighter_gobj, CENTER);
}

// 0x8013E9A8
void ftCommon_Turn_SetStatusInvertLR(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_Turn_SetStatus(fighter_gobj, -fp->lr);
}

// 0x8013ED90
bool32 ftCommon_Turn_CheckInputSuccess(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->input.pl.stick_range.x * fp->lr) <= FTCOMMON_TURN_STICK_RANGE_MIN)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8013EA04
bool32 ftCommon_Turn_CheckInterruptCommon(GObj *fighter_gobj)
{
    if (ftCommon_Turn_CheckInputSuccess(fighter_gobj) != FALSE)
    {
        ftCommon_Turn_SetStatusCenter(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}