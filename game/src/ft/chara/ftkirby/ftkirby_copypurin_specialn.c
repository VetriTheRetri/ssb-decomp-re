#include <ft/chara/ftkirby/ftkirby.h>

#define FTKIRBY_COPYPURIN_SPECIALN_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)

// 0x80151860
void ftKirby_CopyPurin_SpecialN_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag1 = 0;
    fp->command_vars.flags.flag0 = 0;
}

// 0x80151874
f32 ftKirby_CopyPurin_SpecialN_GetAngle(s32 stick_y)
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

    return F_DEG_TO_RAD((temp_stick_y * 20) / 40.0F);
}

// 0x801518EC
void ftKirby_CopyPurin_SpecialAirN_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 unused;
    f32 boost;

    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->command_vars.flags.flag1 = 0;

        fp->fighter_vars.kirby.copypurin_unk++;

        boost = ftKirby_CopyPurin_SpecialN_GetAngle(fp->input.pl.stick_range.y);

        fp->phys_info.vel_air.y = __sinf(boost) * FTKIRBY_COPYPURIN_POUND_VEL_BASE;
        fp->phys_info.vel_air.x = cosf(boost) * fp->lr * FTKIRBY_COPYPURIN_POUND_VEL_BASE;
    }

    switch (fp->command_vars.flags.flag2)
    {
    case 0:
        func_ovl2_800D91EC(fighter_gobj);
        break;

    case 1:
        fp->phys_info.vel_air.y *= FTKIRBY_COPYPURIN_POUND_VEL_MUL;
        fp->phys_info.vel_air.x *= FTKIRBY_COPYPURIN_POUND_VEL_MUL;
        break;

    case 2:
        jtgt_ovl2_800D9160(fighter_gobj);
        break;
    }
}

// 0x801519F0
void ftKirby_CopyPurin_SpecialN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftKirby_CopyPurin_SpecialN_SwitchStatusAir);
}

// 0x80151A14
void ftKirby_CopyPurin_SpecialAirN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftKirby_CopyPurin_SpecialAirN_SwitchStatusGround);
}

// 0x80151A38
void ftKirby_CopyPurin_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyPurin_SpecialN, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
}

// 0x80151A78
void ftKirby_CopyPurin_SpecialN_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyPurin_SpecialAirN, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    func_ovl2_800D8EB8(fp);
}

// 0x80151AC4
void ftKirby_CopyPurin_SpecialN_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyPurin_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftKirby_CopyPurin_SpecialN_InitStatusVars(fighter_gobj);
    ftAnim_Update(fighter_gobj);
}

// 0x80151B04
void ftKirby_CopyPurin_SpecialAirN_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyPurin_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftKirby_CopyPurin_SpecialN_InitStatusVars(fighter_gobj);
    ftAnim_Update(fighter_gobj);
}
