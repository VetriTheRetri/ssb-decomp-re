#include <ft/fighter.h>
#include "effect.h"

// 0x80148E30
void ftCommon_GuardOn_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_GuardOn, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    if (fp->shield_health != 0)
    {
        if (fp->ft_kind == Ft_Kind_Yoshi)
        {
            fp->status_vars.common.guard.effect_gobj = efParticle_YoshiShield_MakeEffect(fighter_gobj);

            ftCommon_HideModelPartAll(fighter_gobj);
            ftCommon_Guard_SetHitStatusYoshi(fighter_gobj);
        }
        else fp->status_vars.common.guard.effect_gobj = efParticle_Shield_MakeEffect(fighter_gobj);

        fp->is_shield = TRUE;
    }
    func_ovl3_80148714(fighter_gobj);

    fp->status_vars.common.guard.release_lag = FTCOMMON_GUARD_RELEASE_LAG;
    fp->status_vars.common.guard.shield_decay_wait = FTCOMMON_GUARD_DECAY_INT;
    fp->status_vars.common.guard.is_release = FALSE;
    fp->status_vars.common.guard.slide_frames = 0;
    fp->status_vars.common.guard.is_setoff = FALSE;

    ftStatus_Update(fighter_gobj, ftStatus_Common_Guard, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));

    func_ovl3_8014889C(fighter_gobj);

    fp->is_shield = TRUE;
}

// 0x80148F24
bool32 ftCommon_GuardOn_CheckInterruptEscape(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->input.pl.button_hold & fp->input.button_mask_z) && (fp->shield_health != 0))
    {
        ftCommon_GuardOn_SetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}

// 0x80148F74
void ftCommon_GuardOn_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_Guard_UpdateShieldVars(fighter_gobj);

    if (fp->shield_health == 0)
    {
        ftCommon_ShieldBreakFly_UpdateVarsSetStatus(fighter_gobj);
    }
    else if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftCommon_Wait_SetStatus(fighter_gobj);
    }
    else func_ovl3_80148714(fighter_gobj);
}

// 0x80148FF0
void ftCommon_GuardOff_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    u32 flag = fp->is_shield;

    ftStatus_Update(fighter_gobj, ftStatus_Common_GuardOff, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
    ftAnim_Update(fighter_gobj);

    fp->is_shield = flag;

    func_ovl3_80148714(fighter_gobj);
    func_800269C0(0xEU);
}

// 0x80149074
void ftCommon_GuardSetOff_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_Guard_CheckScheduleRelease(fp);

    fp->status_vars.common.guard.setoff_frames--;

    if (fp->status_vars.common.guard.setoff_frames <= 0.0F)
    {
        if (fp->status_vars.common.guard.is_release != FALSE)
        {
            ftCommon_GuardOff_SetStatus(fighter_gobj);
        }
        else func_ovl3_80148DDC(fighter_gobj);
    }
    else func_ovl3_8014889C(fighter_gobj);
}

// 0x80149108
void ftCommon_GuardSetOff_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_GuardSetOff, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));

    fp->status_vars.common.guard.setoff_frames = (fp->shield_damage * FTCOMMON_GUARD_SETOFF_MUL) + FTCOMMON_GUARD_SETOFF_ADD;

    fp->phys_info.vel_ground.x = ((fp->lr == fp->lr_shield) ? LEFT : RIGHT) * (fp->status_vars.common.guard.setoff_frames * FTCOMMON_GUARD_VEL_MUL);

    if (fp->status_vars.common.guard.effect_gobj != NULL)
    {
        efStruct *ep = efGetStruct(fp->status_vars.common.guard.effect_gobj);

        ep->effect_vars.basic1.unk_ef_0x1C = 1;
    }
    fp->is_shield = TRUE;

    fp->status_vars.common.guard.is_setoff = TRUE;
}