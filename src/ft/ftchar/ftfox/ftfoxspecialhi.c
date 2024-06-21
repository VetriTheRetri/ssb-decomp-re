#include <ft/fighter.h>

extern sb32 func_ovl0_800C7C98(Vec3f*, Vec3f*, f32);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8015BD00
void ftFoxSpecialHiStartProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftFoxSpecialHiHoldSetStatus);
}

// 0x8015BD24
void ftFoxSpecialAirHiStartProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftFoxSpecialAirHiHoldSetStatus);
}

// 0x8015BD48
void ftFoxSpecialAirHiStartProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->status_vars.fox.specialhi.gravity_delay != 0)
    {
        fp->status_vars.fox.specialhi.gravity_delay--;
    }
    else ftPhysics_ApplyGClampTVel(fp, 0.5F, attributes->fall_speed_max);
    
    if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
    {
        ftPhysics_ApplyAirVelXFriction(fp, attributes);
    }
}

// 0x8015BDC0
void ftFoxSpecialHiStartProcMap(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftFoxSpecialHiStartSwitchStatusAir);
}

// 0x8015BDE4
void ftFoxSpecialAirHiStartProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftFoxSpecialAirHiStartSwitchStatusGround);
}

// 0x8015BE08
void ftFoxSpecialAirHiStartSwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Fox_SpecialHiStart, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
}

// 0x8015BE48
void ftFoxSpecialHiStartSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Fox_SpecialAirHiStart, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
    ftPhysics_ClampAirVelXMax(fp);
}

// 0x8015BE94
void ftFoxSpecialHiHoldProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.fox.specialhi.launch_delay--;

    if (fp->status_vars.fox.specialhi.launch_delay == 0)
    {
        if (fp->ground_or_air == GA_Air)
        {
            ftFoxSpecialAirHiSetStatusFromGround(fighter_gobj);
        }
        else ftFoxSpecialHiDecideSetStatus(fighter_gobj);
    }
}

// 0x8015BEE8
void ftFoxSpecialHiHoldProcMap(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftFoxSpecialHiHoldSwitchStatusAir);
}

// 0x8015BF0C
void ftFoxSpecialAirHiHoldProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftFoxSpecialAirHiHoldSwitchStatusGround);
}

// 0x8015BF30
void ftFoxSpecialAirHiHoldSwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Fox_SpecialHiHold, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
}

// 0x8015BF70
void ftFoxSpecialHiHoldSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Fox_SpecialAirHiHold, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftPhysics_ClampAirVelXMax(fp);
}

// 0x8015BFBC
void ftFoxSpecialHiHoldInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    fp->status_vars.fox.specialhi.launch_delay = FTFOX_FIREFOX_LAUNCH_DELAY;
}

// 0x8015BFCC
void ftFoxSpecialHiHoldSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Fox_SpecialHiHold, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftFoxSpecialHiHoldInitStatusVars(fighter_gobj);
}

// 0x8015C010
void ftFoxSpecialAirHiHoldSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Fox_SpecialAirHiHold, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftFoxSpecialHiHoldInitStatusVars(fighter_gobj);
}

// 0x8015C054
void ftFoxSpecialHiUpdateModelRoll(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->joint[4]->rotate.vec.f.x = (atan2f(fp->phys_info.vel_air.x, fp->phys_info.vel_air.y) * fp->lr) - F_CST_DTOR32(90.0F); // HALF_PI32
    func_ovl2_800EB528(fp->joint[4]);
}

// 0x8015C0B4
void ftFoxSpecialHiProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.fox.specialhi.anim_frames--;

    if (fp->status_vars.fox.specialhi.anim_frames == 0)
    {
        if (fp->ground_or_air == GA_Air)
        {
            ftFoxSpecialAirHiEndSetStatus(fighter_gobj);
        }
        else ftFoxSpecialHiEndSetStatus(fighter_gobj);
    }
}

// 0x8015C108
void ftFoxSpecialHiProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.fox.specialhi.decelerate_wait++;

    if (fp->status_vars.fox.specialhi.decelerate_wait >= FTFOX_FIREFOX_DECELERATE_DELAY)
    {
        ftPhysics_SetGroundVelFriction(fp, FTFOX_FIREFOX_DECELERATE_VEL);
    }
    ftPhysics_SetGroundVelTransferAir(fighter_gobj);
}

// 0x8015C15C
void ftFoxSpecialAirHiProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.fox.specialhi.decelerate_wait++;

    if (fp->status_vars.fox.specialhi.decelerate_wait >= FTFOX_FIREFOX_DECELERATE_DELAY)
    {
        fp->phys_info.vel_air.x -= (FTFOX_FIREFOX_DECELERATE_VEL * __cosf(fp->status_vars.fox.specialhi.angle) * fp->lr);
        fp->phys_info.vel_air.y -= (FTFOX_FIREFOX_DECELERATE_VEL * __sinf(fp->status_vars.fox.specialhi.angle));
    }
    ftFoxSpecialHiUpdateModelRoll(fighter_gobj);
}

// 0x8015C1F4
void ftFoxSpecialHiProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.fox.specialhi.pass_timer++;

    if (ftMap_ProcFighterAirProcMap(fighter_gobj, ftFoxSpecialAirHiSetStatus) != FALSE)
    {
        fp->status_vars.fox.specialhi.angle = atan2f(-fp->coll_data.ground_angle.x * fp->lr, fp->coll_data.ground_angle.y);
    }
}

// 0x8015C264
sb32 ftFoxSpecialHiCheckIgnorePass(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!(fp->coll_data.ground_flags & MPCOLL_VERTEX_CLL_PASS) || (fp->status_vars.fox.specialhi.pass_timer >= 15))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8015C29C
void ftFoxSpecialAirHiProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    u16 coll_mask;

    fp->status_vars.fox.specialhi.pass_timer++;

    if (mpObjectProc_ProcFighterPass(fighter_gobj, ftFoxSpecialHiCheckIgnorePass) != FALSE)
    {
        coll_mask = (fp->coll_data.coll_mask_prev ^ fp->coll_data.coll_mask_curr) & fp->coll_data.coll_mask_curr & MPCOLL_KIND_GROUND;

        if (!(coll_mask & MPCOLL_KIND_GROUND) || (func_ovl0_800C7C98(&fp->phys_info.vel_air, &fp->coll_data.ground_angle, FTFOX_FIREFOX_COLL_ANGLE_UNK) == FALSE))
        {
            if (lbVector_Vec3fAngleDiff(&fp->coll_data.ground_angle, &fp->phys_info.vel_air) > F_CST_DTOR32(110.0F)) // 1.9198622F
            {
                ftFoxSpecialAirHiBoundSetStatus(fighter_gobj);
            }
            else ftFoxSpecialHiEndSetStatus(fighter_gobj);

            return;
        }
        goto coll_end;
    }
    coll_mask = (fp->coll_data.coll_mask_prev ^ fp->coll_data.coll_mask_curr) & fp->coll_data.coll_mask_curr & (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL);

    if (coll_mask & MPCOLL_KIND_CEIL)
    {
        if (func_ovl0_800C7C98(&fp->phys_info.vel_air, &fp->coll_data.ceil_angle, FTFOX_FIREFOX_COLL_ANGLE_UNK) != FALSE)
        {
            goto coll_end;
        }
    }
    else if (coll_mask & MPCOLL_KIND_LWALL)
    {
        if (func_ovl0_800C7C98(&fp->phys_info.vel_air, &fp->coll_data.lwall_angle, FTFOX_FIREFOX_COLL_ANGLE_UNK) != FALSE)
        {
            goto coll_end;
        }
    }
    else if ((coll_mask & MPCOLL_KIND_RWALL) && (func_ovl0_800C7C98(&fp->phys_info.vel_air, &fp->coll_data.rwall_angle, FTFOX_FIREFOX_COLL_ANGLE_UNK) != FALSE))
    {
    coll_end:
        fp->lr = (fp->phys_info.vel_air.x >= 0.0F) ? LR_Right : LR_Left;

        fp->joint[ftParts_Joint_TopN]->rotate.vec.f.y = fp->lr * F_CST_DTOR32(90.0F); // HALF_PI32

        fp->status_vars.fox.specialhi.angle = atan2f(fp->phys_info.vel_air.y, fp->phys_info.vel_air.x * fp->lr);

        ftFoxSpecialHiUpdateModelRoll(fighter_gobj);
    }
}

// 0x8015C46C
void ftFoxSpecialAirHiSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Fox_SpecialAirHi, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->jumps_used = attributes->jumps_max;
}

// 0x8015C4C8
void ftFoxSpecialHiInitStatusVars(ftStruct *fp)
{
    fp->status_vars.fox.specialhi.anim_frames = FTFOX_FIREFOX_TRAVEL_TIME;
    fp->status_vars.fox.specialhi.decelerate_wait = 0;
    fp->status_vars.fox.specialhi.pass_timer = 0;
}

// 0x8015C4DC
void ftFoxSpecialHiDecideSetStatus(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    s32 temp_stick_y;
    s32 temp_stick_x;

    Vec3f angle;

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

    if (((stick_y + stick_x) >= FTFOX_FIREFOX_ANGLE_STICK_THRESHOLD) && !(fp->coll_data.ground_flags & MPCOLL_VERTEX_CLL_PASS))
    {
        angle.x = temp_stick_x;
        angle.y = fp->input.pl.stick_range.y;
        angle.z = 0.0F;

        if (lbVector_Vec3fAngleDiff(&fp->coll_data.ground_angle, &angle) < F_CST_DTOR32(90.0F)) // HALF_PI32
        {
            goto setair;
        }
        else
        {
            ftCommon_StickInputSetLR(fp);
            ftMainSetFighterStatus(fighter_gobj, ftStatus_Fox_SpecialHi, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
            ftFoxSpecialHiInitStatusVars(fp);

            fp->phys_info.vel_ground.x = 115.0F;
            fp->status_vars.fox.specialhi.angle = atan2f(-fp->coll_data.ground_angle.x * fp->lr, fp->coll_data.ground_angle.y);
            return;
        }
    }
setair:
    ftMap_SetAir(fp);
    ftFoxSpecialAirHiSetStatusFromGround(fighter_gobj);
}

// 0x8015C60C
void ftFoxSpecialAirHiSetStatusFromGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if ((ABS(fp->input.pl.stick_range.x) + ABS(fp->input.pl.stick_range.y)) >= FTFOX_FIREFOX_ANGLE_STICK_THRESHOLD)
    {
        if (ABS(fp->input.pl.stick_range.x) >= FTFOX_FIREFOX_MODEL_STICK_THRESHOLD)
        {
            ftCommon_StickInputSetLR(fp);
        }
        fp->status_vars.fox.specialhi.angle = atan2f(fp->input.pl.stick_range.y, fp->input.pl.stick_range.x * fp->lr);
    }
    else
    {
        fp->status_vars.fox.specialhi.angle = F_CST_DTOR32(90.0F); // HALF_PI32
    }
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Fox_SpecialAirHi, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
    ftFoxSpecialHiInitStatusVars(fp);

    fp->phys_info.vel_air.x = (__cosf(fp->status_vars.fox.specialhi.angle) * FTFOX_FIREFOX_VEL_XY * fp->lr);
    fp->phys_info.vel_air.y = (__sinf(fp->status_vars.fox.specialhi.angle) * FTFOX_FIREFOX_VEL_XY);

    ftFoxSpecialHiUpdateModelRoll(fighter_gobj);

    fp->jumps_used = attributes->jumps_max;
}

// 0x8015C750
void ftFoxSpecialAirHiEndProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftCommon_FallSpecial_SetStatus(fighter_gobj, FTFOX_FIREFOX_AIR_DRIFT, FALSE, TRUE, FALSE, FTFOX_FIREFOX_LANDING_LAG, TRUE);
    }
}

// 0x8015C7A4
void ftFoxSpecialHiEndProcPhysics(GObj *fighter_gobj)
{
    ftPhysics_SetGroundVelFriction(ftGetStruct(fighter_gobj), FTFOX_FIREFOX_DECELERATE_END);
    ftPhysics_SetGroundVelTransferAir(fighter_gobj);
}

// 0x8015C7D4
void ftFoxSpecialAirHiEndProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterCliffProcMap(fighter_gobj, ftFoxSpecialAirHiEndSwitchStatusGround);
}

// 0x8015C7F8
void ftFoxSpecialAirHiEndSwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Fox_SpecialHiEnd, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
}

// 0x8015C838
void ftFoxSpecialHiEndSetStatus(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        ftMap_SetGround(fp);
    }
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Fox_SpecialHiEnd, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
}

// 0x8015C88C
void ftFoxSpecialAirHiEndSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Fox_SpecialAirHiEnd, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
}

// 0x8015C8BC
void ftFoxSpecialAirHiBoundProcUpdate(GObj* fighter_gobj)
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
void ftFoxSpecialAirHiBoundProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->ground_or_air == GA_Air)
    {
        ftPhysics_ApplyAirVelTransNYZ(fighter_gobj);

        if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
        {
            ftPhysics_ApplyAirVelXFriction(fp, attributes);
        }
    }
    else ftPhysics_ApplyGroundVelFriction(fighter_gobj);
}

// 0x8015C9E8
void ftFoxSpecialAirHiBoundProcMap(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        if (mpObjectProc_ProcFighterCliff(fighter_gobj) != FALSE)
        {
            if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_CLIFF_MASK)
            {
                ftCommonCliffCatchSetStatus(fighter_gobj);
            }
            else ftMap_SetGround(fp);
        }
    }
    else ftMap_CheckGroundBreakSetFall(fighter_gobj);
}

// 0x8015CA64
void ftFoxSpecialAirHiBoundSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Fox_SpecialAirHiBound, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->command_vars.flags.flag1 = FALSE;
}

// 0x8015CAA4
void ftFoxSpecialHiStartInitGravity(ftStruct *fp)
{
    fp->status_vars.fox.specialhi.gravity_delay = FTFOX_FIREFOX_GRAVITY_DELAY;
}

// 0x8015CAB0
void ftFoxSpecialHiStartSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Fox_SpecialHiStart, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftFoxSpecialHiStartInitGravity(fp);

    fp->phys_info.vel_ground.x /= 2;
}

// 0x8015CB10
void ftFoxSpecialAirHiStartSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Fox_SpecialAirHiStart, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftFoxSpecialHiStartInitGravity(fp);

    fp->phys_info.vel_air.y = 0.0F;
    fp->phys_info.vel_air.x /= 2;
}
