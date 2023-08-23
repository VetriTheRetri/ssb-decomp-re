#include <ft/fighter.h>

// 0x80147BE0
void ftCommon_HammerFall_ProcInterrupt(GObj *fighter_gobj)
{
	return;
}

// 0x80147BE8
void ftCommon_HammerFall_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DE6B0(fighter_gobj) != FALSE)
    {
        if (fp->phys_info.vel_air.y > FTCOMMON_HAMMER_SKIP_LANDING_VEL_Y_MAX)
        {
            ftCommon_HammerWait_SetStatus(fighter_gobj);
        }
        else ftCommon_HammerLanding_SetStatus(fighter_gobj);
    }
}

// 0x80147C50
void ftCommon_HammerFall_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        ftMap_SetAir(fp);
    }
    ftStatus_Update(fighter_gobj, ftStatus_Common_HammerFall, ftCommon_HammerGetAnimFrame(fighter_gobj), 1.0F, ftCommon_HammerGetStatUpdateFlags(fighter_gobj));
    ftCommon_HammerCheckSetColAnim(fighter_gobj);
    func_ovl2_800D8EB8(fp);
}

// 0x80147CCC
bool32 ftCommon_HammerFall_CheckInterruptDamageFall(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((ftCommon_HammerCheckHold(fighter_gobj) != FALSE) && (fp->input.pl.button_tap & (fp->input.button_mask_a | fp->input.button_mask_b)))
    {
        ftCommon_HammerFall_SetStatus(fighter_gobj); // Wiggle out of DamageFall if A or B is pressed

        return TRUE;
    }
    else return FALSE;
}

// 0x80147D30
void ftCommon_HammerFall_SetStatusJump(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    s32 vel_x, vel_y;

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Common_HammerFall, ftCommon_HammerGetAnimFrame(fighter_gobj), 1.0F, ftCommon_HammerGetStatUpdateFlags(fighter_gobj));
    ftCommon_HammerCheckSetColAnim(fighter_gobj);

    switch (fp->status_vars.common.hammer.input_source)
    {
    case FTCOMMON_KNEEBEND_INPUT_TYPE_BUTTON:
        ftCommon_Jump_GetJumpForceButton(fp->input.pl.stick_range.x, &vel_x, &vel_y, fp->status_vars.common.hammer.is_short_hop);
        break;

    case FTCOMMON_KNEEBEND_INPUT_TYPE_STICK:
    default:
        vel_x = fp->input.pl.stick_range.x;
        vel_y = fp->status_vars.common.hammer.jump_force;
        break;
    }
    fp->phys_info.vel_air.y = (vel_y * attributes->jump_height_mul) + attributes->jump_height_base;
    fp->phys_info.vel_air.x = vel_x * attributes->jump_vel_x;

    fp->tap_stick_y = U8_MAX - 1;
}

// 0x80147E34
void func_ovl3_80147E34(GObj *fighter_gobj)
{
    ftCommon_Pass_SetStatusParam(fighter_gobj, ftStatus_Common_HammerFall, ftCommon_HammerGetAnimFrame(fighter_gobj), ftCommon_HammerGetStatUpdateFlags(fighter_gobj));
    ftCommon_HammerCheckSetColAnim(fighter_gobj);
}

// 0x80147E7C
bool32 ftCommon_HammerFall_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftCommon_Pass_CheckInputSuccess(fp) != FALSE)
    {
        func_ovl3_80147E34(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}