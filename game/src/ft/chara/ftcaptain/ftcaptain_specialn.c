#include <ft/chara/ftcaptain/ftcaptain.h>

// 0x8015F7F0
void ftCaptain_SpecialN_UpdateGFX(GObj *fighter_gobj) // Falcon Punch
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!(fp->is_persist_effect))
    {
        if (fp->command_vars.flags.flag0 == 1)
        {
            if (func_ovl2_80101F84(fighter_gobj) != FALSE)
            {
                fp->is_persist_effect = TRUE;
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
f32 ftCaptain_SpecialN_GetAngle(s32 stick_y)
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

    return F_DEG_TO_RAD((temp_stick_y * 30) / 40.0F);
}

// 0x8015F8EC
void ftCaptain_SpecialN_ProcPhysics(GObj *fighter_gobj)
{
    ftCaptain_SpecialN_UpdateGFX(fighter_gobj);
    func_ovl2_800D8C14(fighter_gobj);
}

// 0x8015F914
void ftCaptain_SpecialAirN_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 unused;
    f32 boost;

    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->command_vars.flags.flag1 = 0;
        fp->fighter_vars.captain.falcon_punch_unk++;

        boost = ftCaptain_SpecialN_GetAngle(fp->input.pl.stick_range.y);

        fp->phys_info.vel_air.y = (__sinf(boost) * FTCAPTAIN_FALCONPUNCH_VEL_BASE);
        fp->phys_info.vel_air.x = (cosf(boost) * fp->lr * FTCAPTAIN_FALCONPUNCH_VEL_BASE);
    }

    ftCaptain_SpecialN_UpdateGFX(fighter_gobj);

    switch (fp->command_vars.flags.flag2)
    {
    case 0:
        func_ovl2_800D91EC(fighter_gobj);
        break;

    case 1:
        fp->phys_info.vel_air.y *= FTCAPTAIN_FALCONPUNCH_VEL_MUL;
        fp->phys_info.vel_air.x *= FTCAPTAIN_FALCONPUNCH_VEL_MUL;
        break;

    case 2:
        jtgt_ovl2_800D9160(fighter_gobj);
        break;
    }
}

// 0x8015FA2C
void ftCaptain_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Captain_SpecialN, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));

    fp->proc_lagstart = ftCommon_ProcPauseGFX;
    fp->proc_lagend = ftCommon_ProcResumeGFX;
}

// 0x8015FA8C
void ftCaptain_SpecialN_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Captain_SpecialAirN, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    func_ovl2_800D8EB8(fp);

    fp->proc_lagstart = ftCommon_ProcPauseGFX;
    fp->proc_lagend = ftCommon_ProcResumeGFX;
}

// 0x8015FAF8
void ftCaptain_SpecialN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftCaptain_SpecialN_SwitchStatusAir);
}

// 0x8015FB1C
void ftCaptain_SpecialAirN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftCaptain_SpecialAirN_SwitchStatusGround);
}

// 0x8015FB40
void ftCaptain_SpecialN_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag1 = 0;
    fp->command_vars.flags.flag0 = 0;
}

void func_ovl3_8015FB54() // Unused???
{
    return;
}

// 0x8015FB5C
void ftCaptain_SpecialN_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Captain_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftCaptain_SpecialN_InitStatusVars(fighter_gobj);

    fp->proc_lagstart = ftCommon_ProcPauseGFX;
    fp->proc_lagend = ftCommon_ProcResumeGFX;
}

// 0x8015FBC0
void ftCaptain_SpecialAirN_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Captain_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftCaptain_SpecialN_InitStatusVars(fighter_gobj);

    fp->proc_lagstart = ftCommon_ProcPauseGFX;
    fp->proc_lagend = ftCommon_ProcResumeGFX;
}