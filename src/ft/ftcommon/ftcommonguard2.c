#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80148E30
void ftCommonGuardSetStatusFromEscape(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_GuardOn, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE); // Why? It overwrites this with Guard later down.
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    if (fp->shield_health != 0)
    {
        if (fp->ft_kind == Ft_Kind_Yoshi)
        {
            fp->status_vars.common.guard.effect_gobj = efParticle_YoshiShield_MakeEffect(fighter_gobj);

            ftCommon_HideModelPartAll(fighter_gobj);
            ftCommonGuardSetHitStatusYoshi(fighter_gobj);
        }
        else fp->status_vars.common.guard.effect_gobj = efParticle_Shield_MakeEffect(fighter_gobj);

        fp->is_shield = TRUE;
    }
    ftCommonGuardUpdateJoints(fighter_gobj);

    fp->status_vars.common.guard.release_lag = FTCOMMON_GUARD_RELEASE_LAG;
    fp->status_vars.common.guard.shield_decay_wait = FTCOMMON_GUARD_DECAY_INT;
    fp->status_vars.common.guard.is_release = FALSE;
    fp->status_vars.common.guard.slide_frames = 0;
    fp->status_vars.common.guard.is_setoff = FALSE;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_Guard, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE));

    ftCommonGuardInitJoints(fighter_gobj);

    fp->is_shield = TRUE;
}

// 0x80148F24
sb32 ftCommonGuardCheckInterruptEscape(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->input.pl.button_hold & fp->input.button_mask_z) && (fp->shield_health != 0))
    {
        ftCommonGuardSetStatusFromEscape(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}

// 0x80148F74
void ftCommonGuardOffProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonGuardUpdateShieldVars(fighter_gobj);

    if (fp->shield_health == 0)
    {
        ftCommonShieldBreakFlyCommonSetStatus(fighter_gobj);
    }
    else if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftCommonWaitSetStatus(fighter_gobj);
    }
    else ftCommonGuardUpdateJoints(fighter_gobj);
}

// 0x80148FF0
void ftCommonGuardOffSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ub32 flag = fp->is_shield;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_GuardOff, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE));
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    fp->is_shield = flag;

    ftCommonGuardUpdateJoints(fighter_gobj);
    func_800269C0_275C0(alSound_SFX_GuardOff);
}

// 0x80149074
void ftCommonGuardSetOffProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonGuardCheckScheduleRelease(fp);

    fp->status_vars.common.guard.setoff_frames--;

    if (fp->status_vars.common.guard.setoff_frames <= 0.0F)
    {
        if (fp->status_vars.common.guard.is_release != FALSE)
        {
            ftCommonGuardOffSetStatus(fighter_gobj);
        }
        else ftCommonGuardSetStatus(fighter_gobj);
    }
    else ftCommonGuardInitJoints(fighter_gobj);
}

// 0x80149108
void ftCommonGuardSetOffSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_GuardSetOff, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE));

    fp->status_vars.common.guard.setoff_frames = (fp->shield_damage * FTCOMMON_GUARD_SETOFF_MUL) + FTCOMMON_GUARD_SETOFF_ADD;

    fp->phys_info.vel_ground.x = ((fp->lr == fp->lr_shield) ? LR_Left : LR_Right) * (fp->status_vars.common.guard.setoff_frames * FTCOMMON_GUARD_VEL_MUL);

    if (fp->status_vars.common.guard.effect_gobj != NULL)
    {
        efStruct *ep = efGetStruct(fp->status_vars.common.guard.effect_gobj);

        ep->effect_vars.shield.is_damage_shield = TRUE;
    }
    fp->is_shield = TRUE;

    fp->status_vars.common.guard.is_setoff = TRUE;
}
