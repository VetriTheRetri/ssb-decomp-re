#include <ft/chara/ftmario/ftmario.h>

// 0x801564F0
void ftMario_SpecialLw_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag3 != FALSE)
    {
        fp->status_vars.mario.speciallw.dust_gfx_int--;

        if (fp->status_vars.mario.speciallw.dust_gfx_int == 4)
        {
            ftCommon_GFXSpawn(fighter_gobj, 11, 0, 0, 0, -fp->lr, 0, 0); // Spawn GFX
        }
        else if (fp->status_vars.mario.speciallw.dust_gfx_int == 0)
        {
            ftCommon_GFXSpawn(fighter_gobj, 11, 0, 0, 0, fp->lr, 0, 0); // Spawn GFX 

            fp->status_vars.mario.speciallw.dust_gfx_int = 8;
        }
    }
    ftCommon_IfAnimEnd_SetStatusWait(fighter_gobj);
}

// 0x801565A8
void ftMario_SpecialAirLw_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag2 != FALSE)
    {
        fp->command_vars.flags.flag2 = FALSE;
        fp->fighter_vars.mario.is_expend_tornado = TRUE;
    }
    ftCommon_IfAnimEnd_SetStatusFall(fighter_gobj);
}

// 0x801565E4
f32 ftMario_SpecialLw_UpdateFriction(ftStruct *fp, f32 vel)
{
    if (fp->command_vars.flags.flag1 != FALSE)
    {
        fp->status_vars.mario.speciallw.friction -= 2.0F;

        vel += fp->status_vars.mario.speciallw.friction;

        if (vel < 0.0F)
        {
            vel = 0.0F;
        }
    }
    return vel;
}

// 0x80156630
void ftMario_SpecialLw_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    func_ovl2_800D89E0(fp, 0, 0.025F, ftMario_SpecialLw_UpdateFriction(fp, 17.0F));
    func_ovl2_800D87D0(fighter_gobj);

    if ((fp->command_vars.flags.flag3 != FALSE) && (fp->input.pl.button_tap & fp->input.button_mask_b))
    {
        fp->phys_info.vel_air.y += FTMARIO_TORNADO_TAP_VEL_ADD;

        ftMario_SpecialLw_SwitchStatusAir(fighter_gobj);
    }
}

// 0x801566C4
void ftMario_SpecialAirLw_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if ((fp->fighter_vars.mario.is_expend_tornado == FALSE) && (fp->command_vars.flags.flag3 != FALSE) && (fp->input.pl.button_tap & fp->input.button_mask_b))
    {
        func_ovl2_800D8D34(fp, FTMARIO_TORNADO_TAP_VEL_ADD, 40.0F);
    }
    func_ovl2_800D8E50(fp, attributes);
    ftPhysics_ClampDriftStickRange(fp, 0, 0.03F, ftMario_SpecialLw_UpdateFriction(fp, 17.0F));
}

// 0x8015675C
void ftMario_SpecialLw_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftMario_SpecialLw_SwitchStatusAir);
}

// 0x80156780
void ftMario_SpecialAirLw_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftMario_SpecialAirLw_SwitchStatusGround);
}

// 0x801567A4
void ftMario_SpecialAirLw_SetDisableRise(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag3 = FALSE;
}

// 0x801567B0
void ftMario_SpecialAirLw_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMario_SpecialAirLw_SetDisableRise(fighter_gobj);
    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Mario_SpecialLw, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_RUMBLE_PRESERVE);
    func_ovl2_800D8938(fp, 17.0F);
}

// 0x80156808
void ftMario_SpecialLw_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMario_SpecialAirLw_SetDisableRise(fighter_gobj);
    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Mario_SpecialAirLw, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_RUMBLE_PRESERVE);
    func_ovl2_800D8D10(fp, 40.0F);
    func_ovl2_800D8E78(fp, 17.0F);
}

// 0x8015686C
void ftMario_SpecialLw_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag1 = FALSE;
    fp->command_vars.flags.flag2 = FALSE;

    fp->status_vars.mario.speciallw.dust_gfx_int = 5;
    fp->status_vars.mario.speciallw.friction = 0.0F;
}

// 0x8015688C
void ftMario_SpecialLw_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMario_SpecialAirLw_SetDisableRise(fighter_gobj);
    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Mario_SpecialAirLw, 0.0F, 1.0F, 0U);
    ftAnim_Update(fighter_gobj);

    fp->phys_info.vel_air.y = -7.0F;

    func_ovl2_800D8E78(fp, 17.0F);
    ftMario_SpecialLw_InitStatusVars(fighter_gobj);

    fp->stat_flags.is_ground_or_air = GA_Ground; // Related to staling?
}

// 0x80156910
void ftMario_SpecialAirLw_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 tornado_vel_y;

    ftMario_SpecialAirLw_SetDisableRise(fighter_gobj);
    ftStatus_Update(fighter_gobj, ftStatus_Mario_SpecialAirLw, 0.0F, 1.0F, 0U);
    ftAnim_Update(fighter_gobj);

    tornado_vel_y = (fp->fighter_vars.mario.is_expend_tornado != FALSE) ? 0.0F : 22.0F;

    fp->phys_info.vel_air.y = (f32)(15.0F - tornado_vel_y);

    func_ovl2_800D8E78(fp, 17.0F);
    ftMario_SpecialLw_InitStatusVars(fighter_gobj);
}
