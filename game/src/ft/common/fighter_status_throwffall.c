#include <ft/chara/ftdonkey/ftdonkey.h>

// 0x8014DA00
void ftDonkey_ThrowFFall_ProcInterrupt(GObj *fighter_gobj)
{
    if (ftCommon_LightThrow_CheckInterruptCommon(fighter_gobj) == FALSE)
    {
        ftDonkey_ThrowFF_CheckInterruptThrowFCommon(fighter_gobj);
    }
}

// 0x8014DA30
void ftDonkey_ThrowFFall_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DE6B0(fighter_gobj) != FALSE)
    {
        if (fp->phys_info.vel_air.y > FTCOMMON_THROWFFALL_SKIP_LANDING_VEL_Y_MAX)
        {
            ftDonkey_ThrowFWait_SetStatus(fighter_gobj);
        }
        else ftDonkey_ThrowFLanding_SetStatus(fighter_gobj);
    }
}

// 0x8014DA98
void ftDonkey_ThrowFFall_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        ftMap_SetAir(fp);
    }
    ftStatus_Update(fighter_gobj, ftStatus_Donkey_ThrowFFall, 0.0F, 0.0F, FTSTATUPDATE_FASTFALL_PRESERVE);
    func_ovl2_800D8EB8(fp);
}

// 0x8014DAF8
void ftDonkey_ThrowFJump_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    s32 vel_x;
    s32 vel_y;

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Donkey_ThrowFFall, 0.0F, 0.0F, FTSTATUPDATE_NONE_PRESERVE);

    switch (fp->status_vars.common.throwf.input_source)
    {
    case FTCOMMON_KNEEBEND_INPUT_TYPE_BUTTON:
        ftCommon_Jump_GetJumpForceButton(fp->input.pl.stick_range.x, &vel_x, &vel_y, fp->status_vars.common.throwf.is_short_hop);
        break;

    case FTCOMMON_KNEEBEND_INPUT_TYPE_STICK:
    default:
        vel_x = fp->input.pl.stick_range.x;
        vel_y = fp->status_vars.common.throwf.jump_force;

    }
    fp->phys_info.vel_air.y = (vel_y * attributes->jump_height_mul) + attributes->jump_height_base;
    fp->phys_info.vel_air.x = vel_x * attributes->jump_vel_x;

    fp->tap_stick_y = U8_MAX - 1;
}

// 0x8014DBE0
void ftDonkey_ThrowFFall_SetStatusPass(GObj *fighter_gobj)
{
    ftCommon_Pass_SetStatusParam(fighter_gobj, ftStatus_Donkey_ThrowFFall, 1.0F, 0);
}

// 0x8014DC08
bool32 ftDonkey_ThrowFFall_CheckInterruptPass(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftCommon_Pass_CheckInputSuccess(fp) != FALSE)
    {
        ftDonkey_ThrowFFall_SetStatusPass(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}
