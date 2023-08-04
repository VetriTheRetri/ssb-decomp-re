#include <ft/chara/ftsamus/ftsamus.h>

// 0x8015DF00
void ftSamus_SpecialLw_CreateBomb(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    DObj *joint;

    if (fp->command_vars.flags.flag0 != FALSE)
    {
        fp->command_vars.flags.flag0 = FALSE;

        pos.x = 0.0F;
        pos.z = 0.0F;
        pos.y = 60.0F;

        joint = fp->joint[ftParts_TopN_Joint]; // Not required but stack might suggest they wrote it like this

        func_ovl2_800EDF24(joint, &pos);
        wpSamus_Bomb_MakeWeapon(fighter_gobj, &pos);
    }
}

// 0x8015DF64
void ftSamus_SpecialLw_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftSamus_SpecialLw_CreateBomb(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        ftSamus_SpecialLw_TransferStatusAir(fighter_gobj);
    }
    else ftCommon_IfAnimEnd_SetStatusWait(fighter_gobj);
}

// 0x8015DFBC
void ftSamus_SpecialAirLw_ProcUpdate(GObj *fighter_gobj)
{
    ftSamus_SpecialLw_CreateBomb(fighter_gobj);
    ftCommon_IfAnimEnd_SetStatusFall(fighter_gobj);
}

// 0x8015DFE4
void ftSamus_SpecialLw_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->command_vars.flags.flag3 != FALSE)
    {
        func_ovl2_800D8ADC(fp, attributes->walk_speed_mul * FTSAMUS_BOMB_DRIFT, attributes->traction);
        func_ovl2_800D87D0(fighter_gobj);
    }
    else func_ovl2_800D8BB4(fighter_gobj);
}

// 0x8015E050
void ftSamus_SpecialAirLw_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    func_ovl2_800D8E50(fp, attributes);

    if (func_ovl2_800D8EDC(fp, attributes->aerial_speed_max_x * FTSAMUS_BOMB_DRIFT) == FALSE)
    {
        ftPhysics_ClampDriftStickRange(fp, 8, attributes->aerial_acceleration * FTSAMUS_BOMB_DRIFT, attributes->aerial_speed_max_x * FTSAMUS_BOMB_DRIFT);
        func_ovl2_800D9074(fp, attributes);
    }
}

// 0x8015E0E8
void ftSamus_SpecialLw_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftSamus_SpecialLw_SwitchStatusAir);
}

// 0x8015E10C
void ftSamus_SpecialAirLw_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftSamus_SpecialAirLw_SwitchStatusGround);
}

// 0x8015E130
void ftSamus_SpecialAirLw_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag3 = FALSE;

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Samus_SpecialLw, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}

// 0x8015E170 - Go to aerial Screw Attack from grounded update process
void ftSamus_SpecialLw_TransferStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Samus_SpecialAirLw, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->phys_info.vel_air.y = FTSAMUS_BOMB_VEL_Y_BASE;
    fp->jumps_used = attributes->jumps_max;
}

// 0x8015E1DC
void ftSamus_SpecialLw_SwitchStatusAir(GObj *fighter_gobj)
{
    ftMap_SetAir(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Samus_SpecialAirLw, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}

// 0x8015E218
void ftSamus_SpecialLw_InitStatusVars(ftStruct *fp)
{
    fp->command_vars.flags.flag0 = FALSE;
}

// 0x8015E220
void ftSamus_SpecialLw_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag3 = FALSE;

    ftStatus_Update(fighter_gobj, ftStatus_Samus_SpecialLw, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftSamus_SpecialLw_InitStatusVars(fp);

    fp->status_vars.samus.speciallw.unused = FALSE;
}

// 0x8015E274
void ftSamus_SpecialAirLw_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftStatus_Update(fighter_gobj, ftStatus_Samus_SpecialAirLw, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftSamus_SpecialLw_InitStatusVars(fp);

    fp->phys_info.vel_air.y = FTSAMUS_BOMB_VEL_Y_BASE - FTSAMUS_BOMB_VEL_Y_SUB;

    func_ovl2_800D8E78(fp, attributes->aerial_speed_max_x * FTSAMUS_BOMB_DRIFT);

    fp->jumps_used = attributes->jumps_max; // Why tho

    fp->status_vars.samus.speciallw.unused = TRUE;
}