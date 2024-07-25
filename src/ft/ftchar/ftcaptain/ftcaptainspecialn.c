#include <ft/fighter.h>

extern void ftCommon_ProcPauseGFX(GObj*);
extern void ftCommon_ProcResumeGFX(GObj*);

// 0x8015F7F0
void ftCaptainSpecialNUpdateEffect(GObj *fighter_gobj) // Falcon Punch
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!(fp->is_attach_effect))
    {
        if (fp->command_vars.flags.flag0 == 1)
        {
            if (efManagerCaptainFalconPunchMakeEffect(fighter_gobj) != FALSE)
            {
                fp->is_attach_effect = TRUE;
            }
            fp->command_vars.flags.flag0 = 0;
        }
    }

    else if (fp->command_vars.flags.flag0 == 1)
    {
        ftCommon_ProcStopGFX(fighter_gobj);

        fp->command_vars.flags.flag0 = 2;
    }
}

// 0x8015F874
f32 ftCaptainSpecialNGetAngle(s32 stick_y)
{
    s32 temp_stick_y = ABS(stick_y);

    if (temp_stick_y > 50)
    {
        temp_stick_y = 50;
    }

    temp_stick_y -= 10;

    if (temp_stick_y < 0)
    {
        temp_stick_y = 0;
    }

    if (stick_y < 0)
    {
        temp_stick_y = -temp_stick_y;
    }

    return F_CLC_DTOR32((temp_stick_y * 30) / 40.0F);
}

// 0x8015F8EC
void ftCaptainSpecialNProcPhysics(GObj *fighter_gobj)
{
    ftCaptainSpecialNUpdateEffect(fighter_gobj);
    ftPhysics_ApplyGroundVelTransN(fighter_gobj);
}

// 0x8015F914
void ftCaptainSpecialAirNProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 unused;
    f32 boost;

    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->command_vars.flags.flag1 = 0;
        fp->fighter_vars.captain.falcon_punch_unk++;

        boost = ftCaptainSpecialNGetAngle(fp->input.pl.stick_range.y);

        fp->phys_info.vel_air.y = (__sinf(boost) * FTCAPTAIN_FALCONPUNCH_VEL_BASE);
        fp->phys_info.vel_air.x = (__cosf(boost) * fp->lr * FTCAPTAIN_FALCONPUNCH_VEL_BASE);
    }

    ftCaptainSpecialNUpdateEffect(fighter_gobj);

    switch (fp->command_vars.flags.flag2)
    {
    case 0:
        ftPhysics_ApplyAirVelFriction(fighter_gobj);
        break;

    case 1:
        fp->phys_info.vel_air.y *= FTCAPTAIN_FALCONPUNCH_VEL_MUL;
        fp->phys_info.vel_air.x *= FTCAPTAIN_FALCONPUNCH_VEL_MUL;
        break;

    case 2:
        ftPhysics_ApplyAirVelDriftFastFall(fighter_gobj);
        break;
    }
}

// 0x8015FA2C
void ftCaptainSpecialAirNSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Captain_SpecialN, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));

    fp->proc_lagstart = ftCommon_ProcPauseGFX;
    fp->proc_lagend = ftCommon_ProcResumeGFX;
}

// 0x8015FA8C
void ftCaptainSpecialNSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Captain_SpecialAirN, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftPhysics_ClampAirVelXMax(fp);

    fp->proc_lagstart = ftCommon_ProcPauseGFX;
    fp->proc_lagend = ftCommon_ProcResumeGFX;
}

// 0x8015FAF8
void ftCaptainSpecialNProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftCaptainSpecialNSwitchStatusAir);
}

// 0x8015FB1C
void ftCaptainSpecialAirNProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftCaptainSpecialAirNSwitchStatusGround);
}

// 0x8015FB40
void ftCaptainSpecialNInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag1 = 0;
    fp->command_vars.flags.flag0 = 0;
}

// 0x8015FB54
void func_ovl3_8015FB54() // Unused???
{
    return;
}

// 0x8015FB5C
void ftCaptainSpecialNSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Captain_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftCaptainSpecialNInitStatusVars(fighter_gobj);

    fp->proc_lagstart = ftCommon_ProcPauseGFX;
    fp->proc_lagend = ftCommon_ProcResumeGFX;
}

// 0x8015FBC0
void ftCaptainSpecialAirNSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Captain_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftCaptainSpecialNInitStatusVars(fighter_gobj);

    fp->proc_lagstart = ftCommon_ProcPauseGFX;
    fp->proc_lagend = ftCommon_ProcResumeGFX;
}
