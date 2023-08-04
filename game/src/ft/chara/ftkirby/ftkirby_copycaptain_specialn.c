#include <ft/chara/ftkirby/ftkirby.h>

// 0x80160810
void ftKirby_CopyCaptain_SpecialN_UpdateGFX(GObj *fighter_gobj)
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

// 0x80160894
f32 ftKirby_CopyCaptain_SpecialN_GetAngle(s32 stick_y)
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

// 0x8016090C
void ftKirby_CopyCaptain_SpecialN_ProcPhysics(GObj *fighter_gobj)
{
    ftKirby_CopyCaptain_SpecialN_UpdateGFX(fighter_gobj);
    func_ovl2_800D8C14(fighter_gobj);
}

// 0x80160934
void ftKirby_CopyCaptain_SpecialAirN_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 unused;
    f32 boost;

    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->command_vars.flags.flag1 = 0;
        fp->fighter_vars.kirby.copycaptain_falcon_punch_unk++;

        boost = ftKirby_CopyCaptain_SpecialN_GetAngle(fp->input.pl.stick_range.y);

        fp->phys_info.vel_air.y = __sinf(boost) * FTKIRBY_COPYCAPTAIN_FALCONPUNCH_VEL_BASE;
        fp->phys_info.vel_air.x = cosf(boost) * fp->lr * FTKIRBY_COPYCAPTAIN_FALCONPUNCH_VEL_BASE;
    }
    ftKirby_CopyCaptain_SpecialN_UpdateGFX(fighter_gobj);

    switch (fp->command_vars.flags.flag2)
    {
    case 0:
        func_ovl2_800D91EC(fighter_gobj);
        break;

    case 1:
        fp->phys_info.vel_air.y *= FTKIRBY_COPYCAPTAIN_FALCONPUNCH_VEL_MUL; // Interestingly, Kirby's version multiplies by singles, 
        fp->phys_info.vel_air.x *= FTKIRBY_COPYCAPTAIN_FALCONPUNCH_VEL_MUL; // as opposed to Falcon's multiplying by doubles
        break;

    case 2:
        jtgt_ovl2_800D9160(fighter_gobj);
        break;
    }
}

// 0x80160A40
void ftKirby_CopyCaptain_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyCaptain_SpecialN, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
}

// 0x80160A80
void ftKirby_CopyCaptain_SpecialN_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyCaptain_SpecialAirN, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    func_ovl2_800D8EB8(fp);
}

// 0x80160ACC
void ftKirby_CopyCaptain_SpecialN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftKirby_CopyCaptain_SpecialN_SwitchStatusAir);
}

// 0x80160AF0
void ftKirby_CopyCaptain_SpecialAirN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftKirby_CopyCaptain_SpecialAirN_SwitchStatusGround);
}

// 0x80160B14
void ftKirby_CopyCaptain_SpecialN_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag1 = 0;
    fp->command_vars.flags.flag0 = 0;
}

void func_ovl3_80160B28() // Unused
{
    return;
}

// 0x80160B30
void ftKirby_CopyCaptain_SpecialN_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyCaptain_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftKirby_CopyCaptain_SpecialN_InitStatusVars(fighter_gobj);
}

// 0x80160B70
void ftKirby_CopyCaptain_SpecialAirN_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyCaptain_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftKirby_CopyCaptain_SpecialN_InitStatusVars(fighter_gobj);
}