#include <ft/chara/ftfox/ftfox.h>

// 0x8015BD00
void ftFox_SpecialHiStart_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftFox_SpecialHiHold_SetStatus);
}

// 0x8015BD24
void ftFox_SpecialAirHiStart_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftFox_SpecialAirHiHold_SetStatus);
}

// 0x8015BD48
void ftFox_SpecialAirHiStart_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->status_vars.fox.specialhi.gravity_delay != 0)
    {
        fp->status_vars.fox.specialhi.gravity_delay--;
    }
    else
    {
        func_ovl2_800D8D68(fp, 0.5F, attributes->fall_speed_max);
    }

    if (func_ovl2_800D8FA8(fp, attributes) == FALSE)
    {
        func_ovl2_800D9074(fp, attributes);
    }
}

// 0x8015BDC0
void ftFox_SpecialHiStart_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftFox_SpecialHiStart_SwitchStatusAir);
}

// 0x8015BDE4
void ftFox_SpecialAirHiStart_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftFox_SpecialAirHiStart_SwitchStatusGround);
}

// 0x8015BE08
void ftFox_SpecialAirHiStart_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialHiStart, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
}

// 0x8015BE48
void ftFox_SpecialHiStart_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialAirHiStart, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
    func_ovl2_800D8EB8(fp);
}

// 0x8015BE94
void ftFox_SpecialHiHold_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.fox.specialhi.launch_delay--;

    if (fp->status_vars.fox.specialhi.launch_delay == 0)
    {
        if (fp->ground_or_air == GA_Air)
        {
            ftFox_SpecialAirHi_FromGroundSetStatus(fighter_gobj);

        }
        else ftFox_SpecialHi_DecideSetStatus(fighter_gobj);
    }
}

// 0x8015BEE8
void ftFox_SpecialHiHold_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftFox_SpecialHiHold_SwitchStatusAir);
}

// 0x8015BF0C
void ftFox_SpecialAirHiHold_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftFox_SpecialAirHiHold_SwitchStatusGround);
}

// 0x8015BF30
void ftFox_SpecialAirHiHold_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialHiHold, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
}

// 0x8015BF70
void ftFox_SpecialHiHold_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialAirHiHold, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    func_ovl2_800D8EB8(fp);
}

// 0x8015BFBC
void ftFox_SpecialHiHold_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    fp->status_vars.fox.specialhi.launch_delay = FTFOX_FIREFOX_LAUNCH_DELAY;
}

// 0x8015BFCC
void ftFox_SpecialHiHold_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialHiHold, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftFox_SpecialHiHold_InitStatusVars(fighter_gobj);
}

// 0x8015C010
void ftFox_SpecialAirHiHold_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialAirHiHold, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftFox_SpecialHiHold_InitStatusVars(fighter_gobj);
}

// 0x8015C054
void ftFox_SpecialHi_UpdateModelPitch(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->joint[4]->rotate.x = (atan2f(fp->phys_info.vel_air.x, fp->phys_info.vel_air.y) * (f32)fp->lr) - HALF_PI32;
    func_ovl2_800EB528(fp->joint[4]);
}

// 0x8015C0B4
void ftFox_SpecialHi_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.fox.specialhi.anim_frames--;

    if (fp->status_vars.fox.specialhi.anim_frames == 0)
    {
        if (fp->ground_or_air == GA_Air)
        {
            ftFox_SpecialAirHiEnd_SetStatus(fighter_gobj);
        }
        else ftFox_SpecialHiEnd_SetStatus(fighter_gobj);
    }
}

// 0x8015C108
void ftFox_SpecialHi_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.fox.specialhi.decelerate_wait++;

    if (fp->status_vars.fox.specialhi.decelerate_wait >= FTFOX_FIREFOX_DECELERATE_DELAY)
    {
        func_ovl2_800D8978(fp, FTFOX_FIREFOX_DECELERATE_VEL);
    }
    func_ovl2_800D87D0(fighter_gobj);
}

// 0x8015C15C
void ftFox_SpecialAirHi_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.fox.specialhi.decelerate_wait++;

    if (fp->status_vars.fox.specialhi.decelerate_wait >= FTFOX_FIREFOX_DECELERATE_DELAY)
    {
        fp->phys_info.vel_air.x -= (FTFOX_FIREFOX_DECELERATE_VEL * cosf(fp->status_vars.fox.specialhi.angle) * fp->lr);
        fp->phys_info.vel_air.y -= (FTFOX_FIREFOX_DECELERATE_VEL * __sinf(fp->status_vars.fox.specialhi.angle));
    }
    ftFox_SpecialHi_UpdateModelPitch(fighter_gobj);
}

// 0x8015C1F4
void ftFox_SpecialHi_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.fox.specialhi.coll_timer_unk++;

    if (func_ovl2_800DDDDC(fighter_gobj, ftFox_SpecialAirHi_SetStatus) != FALSE)
    {
        fp->status_vars.fox.specialhi.angle = atan2f(-fp->coll_data.ground_angle.x * fp->lr, fp->coll_data.ground_angle.y);
    }
}

// 0x8015C264
bool32 ftFox_SpecialHi_CheckIgnorePass(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!(fp->coll_data.ground_flags & MPCOLL_MASK_NONSOLID) || (fp->status_vars.fox.specialhi.coll_timer_unk >= 0xF))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8015C29C
void ftFox_SpecialAirHi_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    u16 coll_mask;

    fp->status_vars.fox.specialhi.coll_timer_unk++;

    if (func_ovl2_800DE758(fighter_gobj, ftFox_SpecialHi_CheckIgnorePass) != FALSE)
    {
        coll_mask = (fp->coll_data.coll_mask_prev ^ fp->coll_data.coll_mask) & fp->coll_data.coll_mask & MPCOLL_MASK_GROUND;

        if (!(coll_mask & MPCOLL_MASK_GROUND) || (func_ovl0_800C7C98(&fp->phys_info.vel_air, &fp->coll_data.ground_angle, FTFOX_FIREFOX_COLL_ANGLE_UNK) == FALSE))
        {
            if (vec3f_angle_diff(&fp->coll_data.ground_angle, &fp->phys_info.vel_air) > 1.9198622F)
            {
                ftFox_SpecialHiBound_SetStatus(fighter_gobj);
                return;
            }
            ftFox_SpecialHiEnd_SetStatus(fighter_gobj);
            return;
        }
        goto coll_end;
    }
    coll_mask = (fp->coll_data.coll_mask_prev ^ fp->coll_data.coll_mask) & fp->coll_data.coll_mask & (MPCOLL_MASK_CEIL | MPCOLL_MASK_LWALL | MPCOLL_MASK_RWALL);

    if (coll_mask & MPCOLL_MASK_CEIL)
    {
        if (func_ovl0_800C7C98(&fp->phys_info.vel_air, &fp->coll_data.ceil_angle, FTFOX_FIREFOX_COLL_ANGLE_UNK) != FALSE)
        {
            goto coll_end;
        }
    }
    else if (coll_mask & MPCOLL_MASK_RWALL)
    {
        if (func_ovl0_800C7C98(&fp->phys_info.vel_air, &fp->coll_data.rwall_angle, FTFOX_FIREFOX_COLL_ANGLE_UNK) != FALSE)
        {
            goto coll_end;
        }
    }
    else if ((coll_mask & MPCOLL_MASK_LWALL) && (func_ovl0_800C7C98(&fp->phys_info.vel_air, &fp->coll_data.lwall_angle, FTFOX_FIREFOX_COLL_ANGLE_UNK) != FALSE))
    {
    coll_end:

        fp->lr = (fp->phys_info.vel_air.x >= 0.0F) ? RIGHT : LEFT;

        fp->joint[ftParts_TopN_Joint]->rotate.y = (f32)((f32)fp->lr * HALF_PI32);

        fp->status_vars.fox.specialhi.angle = atan2f(fp->phys_info.vel_air.y, fp->phys_info.vel_air.x * (f32)fp->lr);

        ftFox_SpecialHi_UpdateModelPitch(fighter_gobj);
    }
}

// 0x8015C46C
void ftFox_SpecialAirHi_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialAirHi, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->jumps_used = attributes->jumps_max;
}

// 0x8015C4C8
void ftFox_SpecialHi_InitStatusVars(ftStruct *fp)
{
    fp->status_vars.fox.specialhi.anim_frames = FTFOX_FIREFOX_TRAVEL_TIME;
    fp->status_vars.fox.specialhi.decelerate_wait = 0;
    fp->status_vars.fox.specialhi.coll_timer_unk = 0;
}

// 0x8015C4DC
void ftFox_SpecialHi_DecideSetStatus(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    s32 temp_stick_y;
    s32 temp_stick_x;

    Vec3f sp38;

    s32 stick_y;
    s32 stick_x;

    s32 unused;

    temp_stick_x = fp->input.pl.stick_range.x;

    stick_x = temp_stick_x;

    if (temp_stick_x < 0)
    {
        stick_x = -temp_stick_x;
    }
    else stick_x = temp_stick_x;

    temp_stick_y = fp->input.pl.stick_range.y;

    stick_y = temp_stick_y;

    if (temp_stick_y < 0)
    {
        stick_y = -temp_stick_y;
    }
    else stick_y = temp_stick_y;

    if (((stick_y + stick_x) >= FTFOX_FIREFOX_ANGLE_STICK_THRESHOLD) && !(fp->coll_data.ground_flags & MPCOLL_MASK_NONSOLID))
    {
        sp38.x = temp_stick_x;
        sp38.y = fp->input.pl.stick_range.y;
        sp38.z = 0.0F;

        if (!(vec3f_angle_diff(&fp->coll_data.ground_angle, &sp38) < HALF_PI32))
        {
            ftCommon_StickInputSetLR(fp);
            ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialHi, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
            ftFox_SpecialHi_InitStatusVars(fp);

            fp->phys_info.vel_ground.x = 115.0F;
            fp->status_vars.fox.specialhi.angle = atan2f(-fp->coll_data.ground_angle.x * fp->lr, fp->coll_data.ground_angle.y);
            return;
        }
    }
    ftMap_SetAir(fp);
    ftFox_SpecialAirHi_FromGroundSetStatus(fighter_gobj);
}

// 0x8015C60C
void ftFox_SpecialAirHi_FromGroundSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    s32 stick_x;
    s32 stick_y;
    s32 stick_x_2;

    stick_x = fp->input.pl.stick_range.x;

    stick_x = ABS(fp->input.pl.stick_range.x);

    stick_y = fp->input.pl.stick_range.y;

    stick_y = ABS(fp->input.pl.stick_range.y);

    if ((stick_y + stick_x) >= FTFOX_FIREFOX_ANGLE_STICK_THRESHOLD)
    {
        stick_x_2 = fp->input.pl.stick_range.x;

        stick_x_2 = ABS(fp->input.pl.stick_range.x);

        if (stick_x_2 >= FTFOX_FIREFOX_MODEL_STICK_THRESHOLD)
        {
            ftCommon_StickInputSetLR(fp);
        }
        fp->status_vars.fox.specialhi.angle = atan2f((f32)fp->input.pl.stick_range.y, (f32)(fp->input.pl.stick_range.x * fp->lr));
    }
    else
    {
        fp->status_vars.fox.specialhi.angle = (f32)HALF_PI32;
    }
    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialAirHi, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
    ftFox_SpecialHi_InitStatusVars(fp);

    fp->phys_info.vel_air.x = (cosf(fp->status_vars.fox.specialhi.angle) * FTFOX_FIREFOX_VEL_XY * fp->lr);
    fp->phys_info.vel_air.y = (__sinf(fp->status_vars.fox.specialhi.angle) * FTFOX_FIREFOX_VEL_XY);

    ftFox_SpecialHi_UpdateModelPitch(fighter_gobj);

    fp->jumps_used = attributes->jumps_max;
}

// 0x8015C750
void ftFox_SpecialAirHiEnd_ProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftCommon_FallSpecial_SetStatus(fighter_gobj, FTFOX_FIREFOX_AIR_DRIFT, FALSE, TRUE, FALSE, FTFOX_FIREFOX_LANDING_LAG, TRUE);
    }
}

// 0x8015C7A4
void ftFox_SpecialHiEnd_ProcPhysics(GObj *fighter_gobj)
{
    func_ovl2_800D8978(ftGetStruct(fighter_gobj), FTFOX_FIREFOX_DECELERATE_END);
    func_ovl2_800D87D0(fighter_gobj);
}

// 0x8015C7D4
void ftFox_SpecialHiEnd_ProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundCliff(fighter_gobj, ftFox_SpecialAirHiEnd_SwitchStatusGround);
}

// 0x8015C7F8
void ftFox_SpecialAirHiEnd_SwitchStatusGround(GObj *fighter_gobj)
{
    func_ovl2_800DEE98(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialHiEnd, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
}

// 0x8015C838
void ftFox_SpecialHiEnd_SetStatus(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        ftMap_SetGround(fp);
    }
    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialHiEnd, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
}

// 0x8015C88C
void ftFox_SpecialAirHiEnd_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialAirHiEnd, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
}

// 0x8015C8BC
void ftFox_SpecialHiBound_ProcUpdate(GObj* fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->command_vars.flags.flag1 != 0) && (fp->ground_or_air == GA_Air))
    {
        ftCommon_FallSpecial_SetStatus(fighter_gobj, FTFOX_FIREFOX_AIR_DRIFT, FALSE, TRUE, FALSE, FTFOX_FIREFOX_LANDING_LAG, TRUE);
    }

    else if (fighter_gobj->anim_frame <= 0.0F)
    {
        if (fp->ground_or_air == GA_Air)
        {
            ftCommon_FallSpecial_SetStatus(fighter_gobj, FTFOX_FIREFOX_AIR_DRIFT, FALSE, TRUE, FALSE, FTFOX_FIREFOX_LANDING_LAG, TRUE);
        }
        else ftCommon_Wait_SetStatus(fighter_gobj);
    }
}

// 0x8015C97C
void ftFox_SpecialHiBound_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->ground_or_air == GA_Air)
    {
        jtgt_ovl2_800D9414(fighter_gobj);

        if (func_ovl2_800D8FA8(fp, attributes) == FALSE)
        {
            func_ovl2_800D9074(fp, attributes);
        }
    }
    else func_ovl2_800D8BB4(fighter_gobj);
}

// 0x8015C9E8
void ftFox_SpecialHiBound_ProcMap(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        if (func_ovl2_800DE7D8(fighter_gobj) != FALSE)
        {
            if (fp->coll_data.coll_type & MPCOLL_MASK_CLIFF_ALL)
            {
                ftCommon_CliffCatch_SetStatus(fighter_gobj);
            }
            else ftMap_SetGround(fp);
        }
    }
    else jtgt_ovl2_800DDEC4(fighter_gobj);
}

// 0x8015CA64
void ftFox_SpecialHiBound_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialHiBound, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->command_vars.flags.flag1 = FALSE;
}

// 0x8015CAA4
void ftFox_SpecialHiStart_InitGravity(ftStruct *fp)
{
    fp->status_vars.fox.specialhi.gravity_delay = FTFOX_FIREFOX_GRAVITY_DELAY;
}

// 0x8015CAB0
void ftFox_SpecialHiStart_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialHiStart, 0.0F, 1.0F, 0U);
    ftAnim_Update(fighter_gobj);
    ftFox_SpecialHiStart_InitGravity(fp);

    fp->phys_info.vel_ground.x /= 2;
}

// 0x8015CB10
void ftFox_SpecialAirHiStart_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialAirHiStart, 0.0F, 1.0F, 0U);
    ftAnim_Update(fighter_gobj);
    ftFox_SpecialHiStart_InitGravity(fp);

    fp->phys_info.vel_air.y = 0.0F;
    fp->phys_info.vel_air.x /= 2;
}