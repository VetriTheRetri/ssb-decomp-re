#include <ft/fighter.h>

// 0x8015B6D0
void ftDonkey_SpecialHi_ProcUpdate(GObj *fighter_gobj)
{
    ftStatus_IfAnimEnd_SetStatusWait(fighter_gobj);
}

// 0x8015B6F0
void ftDonkey_SpecialAirHi_ProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftCommon_FallSpecial_SetStatus(fighter_gobj, FTDONKEY_SPINNINGKONG_FALLSPECIAL_DRIFT, FALSE, TRUE, FALSE, FTDONKEY_SPINNINGKONG_LANDING_LAG, TRUE);
    }
}

// 0x8015B744
void ftDonkey_SpecialHi_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftPhysics_ApplyClampGroundVelStickRange(fp, 0, FTDONKEY_SPINNINGKONG_GROUND_ACCEL, FTDONKEY_SPINNINGKONG_GROUND_VEL_MAX);
    ftPhysics_SetGroundVelTransferAir(fighter_gobj);
}

// 0x8015B780
void ftDonkey_SpecialAirHi_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftAttributes *attributes = fp->attributes;

    f32 gravity_mul = (fp->command_vars.flags.flag1 != 0) ? FTDONKEY_SPINNINGKONG_END_GRAVITY_MUL : FTDONKEY_SPINNINGKONG_START_GRAVITY_MUL;

    ftPhysics_ApplyGravityClampTVel(fp, attributes->gravity * gravity_mul, attributes->fall_speed_max);

    ftPhysics_ClampAirVelXStickRange(fp, 0, FTDONKEY_SPINNINGKONG_AIR_ACCEL, FTDONKEY_SPINNINGKONG_AIR_VEL_MAX);
}

// 0x8015B800
void ftDonkey_SpecialHi_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftDonkey_SpecialHi_SwitchStatusAir);
}

// 0x8015B824
void ftDonkey_SpecialAirHi_ProcMap(GObj *fighter_gobj)
{
    ftMap_CheckCollideGroundCliff(fighter_gobj, ftDonkey_SpecialAirHi_SwitchStatusGround);
}

// 0x8015B848
void ftDonkey_SpecialAirHi_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Donkey_SpecialHi, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_RUMBLE_PRESERVE);
    ftPhysics_ClampGroundVel(fp, FTDONKEY_SPINNINGKONG_GROUND_VEL_MAX);
}

// 0x8015B898
void ftDonkey_SpecialHi_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Donkey_SpecialAirHi, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_RUMBLE_PRESERVE);
    ftPhysics_ClampAirVelX(fp, FTDONKEY_SPINNINGKONG_AIR_VEL_MAX);
}

// 0x8015B8E8
void ftDonkey_SpecialHi_SetStatusFlagGA(GObj *fighter_gobj, sb32 ground_or_air)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Donkey_SpecialAirHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);

    ftPhysics_ClampAirVelX(fp, FTDONKEY_SPINNINGKONG_AIR_VEL_MAX);

    fp->jumps_used = attributes->jumps_max;

    fp->command_vars.flags.flag1 = 0;

    fp->status_vars.donkey.specialhi.unk_0x0 = 9;

    if (ground_or_air == GA_Ground)
    {
        fp->stat_flags.is_ground_or_air = GA_Ground;
    }
}

// 0x8015B974
void ftDonkey_SpecialHi_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);

    fp->phys_info.vel_air.y = 0.0F;

    ftDonkey_SpecialHi_SetStatusFlagGA(fighter_gobj, GA_Ground);
}

// 0x8015B9B8
void ftDonkey_SpecialAirHi_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->phys_info.vel_air.y = FTDONKEY_SPINNINGKONG_AIR_VEL_Y;

    ftDonkey_SpecialHi_SetStatusFlagGA(fighter_gobj, GA_Air);
}
