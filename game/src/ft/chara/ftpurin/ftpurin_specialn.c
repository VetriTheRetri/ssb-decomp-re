#include <ft/chara/ftpurin/ftpurin.h>

#define FTPURIN_SPECIALN_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)

// 0x80151260
void ftPurin_SpecialN_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag1 = 0;
    fp->command_vars.flags.flag0 = 0;
}

// 0x80151274
f32 ftPurin_SpecialN_GetAngle(s32 stick_y)
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

// 0x801512EC
void ftPurin_SpecialAirN_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 unused;
    f32 angle;

    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->command_vars.flags.flag1 = 0;

        fp->fighter_vars.purin.unk_0x0++;

        angle = ftPurin_SpecialN_GetAngle(fp->input.pl.stick_range.y);

        fp->phys_info.vel_air.y = (f32)(__sinf(angle) * FTPURIN_POUND_VEL_BASE);
        fp->phys_info.vel_air.x = (f32)(cosf(angle) * (f32)fp->lr * FTPURIN_POUND_VEL_BASE);
    }

    switch (fp->command_vars.flags.flag2)
    {
    case 0:
        func_ovl2_800D91EC(fighter_gobj);
        break;

    case 1:
        fp->phys_info.vel_air.y *= FTPURIN_POUND_VEL_MUL;
        fp->phys_info.vel_air.x *= FTPURIN_POUND_VEL_MUL;
        break;

    case 2:
        jtgt_ovl2_800D9160(fighter_gobj);
        break;
    }
}

// 0x801513F0
void ftPurin_SpecialN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftPurin_SpecialN_SwitchStatusAir);
}

// 0x80151414
void ftPurin_SpecialAirN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftPurin_SpecialAirN_SwitchStatusGround);
}

// 0x80151438
void ftPurin_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Purin_SpecialN, fighter_gobj->anim_frame, 1.0F, FTPURIN_SPECIALN_STATUPDATE_FLAGS);
}

// 0x80151478
void ftPurin_SpecialN_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Purin_SpecialAirN, fighter_gobj->anim_frame, 1.0F, FTPURIN_SPECIALN_STATUPDATE_FLAGS);
    func_ovl2_800D8EB8(fp);
}

// 0x801514C4
void ftPurin_SpecialN_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Purin_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftPurin_SpecialN_InitStatusVars(fighter_gobj);
    ftAnim_Update(fighter_gobj);
}

// 0x80151504
void ftPurin_SpecialAirN_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Purin_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftPurin_SpecialN_InitStatusVars(fighter_gobj);
    ftAnim_Update(fighter_gobj);
}
