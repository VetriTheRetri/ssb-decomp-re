#include <ft/fighter.h>

// 0x80161360
void ftKirbySpecialLwUnused(GObj *fighter_gobj)
{
    return;
}

// 0x80161368
void ftKirbySpecialLwUpdateColAnim(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->damage_resist < FTKIRBY_STONE_HEALTH_MID) // Apply color overlay based on remaining Stone HP
    {
        if (fp->damage_resist < FTKIRBY_STONE_HEALTH_LOW)
        {
            if (fp->status_vars.kirby.speciallw.colanim_id != FTKIRBY_STONE_COLANIM_ID_LOW)
            {
                ftColor_CheckSetColAnimIndex(fighter_gobj, FTKIRBY_STONE_COLANIM_ID_LOW, FTKIRBY_STONE_COLANIM_LENGTH_LOW);
                fp->status_vars.kirby.speciallw.colanim_id = FTKIRBY_STONE_COLANIM_ID_LOW;
            }
        }
        else if (fp->status_vars.kirby.speciallw.colanim_id != FTKIRBY_STONE_COLANIM_ID_MID)
        {
            ftColor_CheckSetColAnimIndex(fighter_gobj, FTKIRBY_STONE_COLANIM_ID_MID, FTKIRBY_STONE_COLANIM_LENGTH_MID);
            fp->status_vars.kirby.speciallw.colanim_id = FTKIRBY_STONE_COLANIM_ID_MID;
        }
    }
    else if (fp->status_vars.kirby.speciallw.colanim_id != FTKIRBY_STONE_COLANIM_ID_HIGH)
    {
        ftColor_CheckSetColAnimIndex(fighter_gobj, FTKIRBY_STONE_COLANIM_ID_HIGH, FTKIRBY_STONE_COLANIM_LENGTH_HIGH);
        fp->status_vars.kirby.speciallw.colanim_id = FTKIRBY_STONE_COLANIM_ID_HIGH;
    }
}

// 0x8016141C
void ftKirbySpecialLwSetDamageResist(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->is_damage_resist = TRUE;

    fp->damage_resist = FTKIRBY_STONE_HEALTH_MAX;
    fp->status_vars.kirby.speciallw.duration = FTKIRBY_STONE_DURATION_MAX;
    fp->status_vars.kirby.speciallw.colanim_id = FTKIRBY_STONE_COLANIM_ID_HIGH;

    ftColor_CheckSetColAnimIndex(fighter_gobj, FTKIRBY_STONE_COLANIM_ID_HIGH, FTKIRBY_STONE_COLANIM_LENGTH_HIGH);
}

// 0x80161468
void ftKirbySpecialLwSetDropFallVel(ftStruct *fp)
{
    fp->phys_info.vel_air.y = FTKIRBY_STONE_FALL_VEL;
}

// 0x80161478
f32 ftKirbySpecialLwGetGroundAxisYaw(ftStruct *fp)
{
    f32 rot_z = -atan2f(fp->coll_data.ground_angle.x, fp->coll_data.ground_angle.y);

    fp->joint[ftParts_Joint_TopN]->rotate.vec.f.z = rot_z;

    return rot_z;
}

// 0x801614B4
sb32 ftKirbySpecialLwCheckRelease(GObj *fighter_gobj, sb32 is_allow_release)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (is_allow_release == TRUE)
    {
        if (fp->input.pl.button_tap & fp->input.button_mask_b)
        {
            return TRUE;
        }
    }
    else if ((fp->status_vars.kirby.speciallw.duration < (FTKIRBY_STONE_DURATION_MAX - FTKIRBY_STONE_DURATION_MIN)) && (fp->input.pl.button_tap & fp->input.button_mask_b))
    {
        return TRUE;
    }
    if (fp->status_vars.kirby.speciallw.duration > 0)
    {
        fp->status_vars.kirby.speciallw.duration--;

        return FALSE;
    }
    else return TRUE;
}

// 0x80161530
void ftKirbySpecialLwStartProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_SpecialLwHold, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
        ftKirbySpecialLwSetDamageResist(fighter_gobj);

        fp->command_vars.flags.flag1 = 0;
    }
    else ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftKirbySpecialLwUnkSetStatus);
}

// 0x80161598
void ftKirbySpecialAirLwStartProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        ftKirbySpecialLwSetDamageResist(fighter_gobj);

        fp->command_vars.flags.flag1 = 0;
    }
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftKirbySpecialAirLwHoldSetStatus);
}

// 0x801615E4
void ftKirbySpecialLwUnkDecideNextStatus(GObj *fighter_gobj, sb32 ground_or_air)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!(fp->is_damage_resist) && (fp->command_vars.flags.flag1 != 0))
    {
        if (ground_or_air == GA_Ground)
        {
            ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_SpecialLwHold, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
        }
        ftKirbySpecialLwSetDamageResist(fighter_gobj);

        fp->command_vars.flags.flag1 = 0;
        fp->command_vars.flags.flag2 = 1;
    }
    if (fp->command_vars.flags.flag2 != 0)
    {
        if (ftKirbySpecialLwCheckRelease(fighter_gobj, FALSE) == TRUE)
        {
            (ground_or_air == GA_Ground) ? ftKirbySpecialLwEndSetStatus(fighter_gobj) : ftKirbySpecialAirLwEndSetStatus(fighter_gobj);

            fp->command_vars.flags.flag2 = 0;
        }
        ftKirbySpecialLwUpdateColAnim(fighter_gobj);
    }
}

// 0x801616B0
void ftKirbySpecialLwUnkProcUpdate(GObj *fighter_gobj)
{
    ftKirbySpecialLwUnkDecideNextStatus(fighter_gobj, GA_Ground);
}

// 0x801616D0
void ftKirbySpecialAirLwHoldProcUpdate(GObj *fighter_gobj)
{
    ftKirbySpecialLwUnkDecideNextStatus(fighter_gobj, GA_Air);
}

// 0x801616F0
void ftKirbySpecialLwHoldDecideNextStatus(GObj *fighter_gobj, sb32 ground_or_air)
{
    if (ftKirbySpecialLwCheckRelease(fighter_gobj, TRUE) == TRUE)
    {
        (ground_or_air == GA_Ground) ? ftKirbySpecialLwEndSetStatus(fighter_gobj) : ftKirbySpecialAirLwEndSetStatus(fighter_gobj);
    }
    ftKirbySpecialLwUpdateColAnim(fighter_gobj);
}

// 0x8016174C
void ftKirbySpecialLwHoldProcUpdate(GObj *fighter_gobj)
{
    ftKirbySpecialLwHoldDecideNextStatus(fighter_gobj, GA_Ground);
}

// 0x8016176C
void ftKirbySpecialAirLwFallProcUpdate(GObj *fighter_gobj)
{
    ftKirbySpecialLwHoldDecideNextStatus(fighter_gobj, GA_Air);
}

// 0x8016178C
void ftKirbySpecialLwHoldProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    f32 temp_slide_angle;
    f32 ground_vel_x;
    f32 slide_angle;

    temp_slide_angle = ftKirbySpecialLwGetGroundAxisYaw(fp);

    slide_angle = temp_slide_angle;

    if (FTKIRBY_STONE_SLIDE_ANGLE < temp_slide_angle)
    {
        slide_angle = FTKIRBY_STONE_SLIDE_ANGLE;
    }

    else if (temp_slide_angle < -FTKIRBY_STONE_SLIDE_ANGLE)
    {
        slide_angle = -FTKIRBY_STONE_SLIDE_ANGLE;
    }
    fp->phys_info.vel_ground.x -= (__sinf(slide_angle) * FTKIRBY_STONE_SLIDE_VEL_MUL * fp->lr);

    ground_vel_x = fp->phys_info.vel_ground.x;

    if (ground_vel_x > FTKIRBY_STONE_SLIDE_CLAMP_VEL_X)
    {
        fp->phys_info.vel_ground.x = FTKIRBY_STONE_SLIDE_CLAMP_VEL_X;
    }
    else if (ground_vel_x < -FTKIRBY_STONE_SLIDE_CLAMP_VEL_X)
    {
        fp->phys_info.vel_ground.x = -FTKIRBY_STONE_SLIDE_CLAMP_VEL_X;
    }

    ftPhysics_SetGroundVelFriction(fp, (dFTMainMapSurfaceFrictions[fp->coll_data.ground_flags & MPCOLL_VERTEX_MAT_MASK] * attributes->traction * FTKIRBY_STONE_SLIDE_TRACTION_MUL));
    ftPhysics_SetGroundVelTransferAir(fighter_gobj);
}

// 0x801618C4
void ftKirbySpecialLwStartProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftMap_CheckGroundStanding(fighter_gobj) == FALSE)
    {
        ftMap_SetAir(fp);
        ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_SpecialAirLwStart, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
        ftKirbySpecialLwSetDropFallVel(fp);
    }
}

// 0x80161920
void ftKirbySpecialLwUnkProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftMap_CheckGroundStanding(fighter_gobj) == FALSE)
    {
        ftMap_SetAir(fp);
        ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_SpecialAirLwHold, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    }
}

// 0x80161974
void ftKirbySpecialLwHoldProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftMap_CheckGroundStanding(fighter_gobj) == FALSE)
    {
        ftMap_SetAir(fp);
        ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_SpecialAirLwFall, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));

        fp->is_damage_resist = TRUE;

        ftKirbySpecialLwSetDropFallVel(fp);
    }
}

// 0x801619E0
void ftKirbySpecialAirLwStartProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftMap_CheckAirLanding(fighter_gobj) != FALSE)
    {
        ftMap_SetGround(fp);
        ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_SpecialLwStart, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    }
}

// 0x80161A30
void ftKirbySpecialAirLwHoldProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftMap_CheckAirLanding(fighter_gobj) != FALSE)
    {
        ftMap_SetGround(fp);
        ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_SpecialAirLwLanding, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));

        fp->is_damage_resist = TRUE;
    }
}

// 0x80161A94
void ftKirbySpecialLwStartSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_SpecialLwStart, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag1 = 0;

    fp->phys_info.vel_air.x = fp->phys_info.vel_air.y = 0.0F;
}

// 0x80161AEC
void ftKirbySpecialLwUnkSetStatus(GObj *fighter_gobj) // Unused
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_SpecialLwUnk, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    ftKirbySpecialLwUnused(fighter_gobj);
}

// 0x80161B2C
void ftKirbySpecialLwEndSetStatus(GObj *fighter_gobj)
{
    ftMap_SetAir(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_SpecialLwEnd, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x80161B70
void ftKirbySpecialAirLwStartSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ub32 armor_flag = fp->is_damage_resist;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_SpecialAirLwStart, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    if (fp->is_damage_resist = armor_flag & TRUE) // wat
    {
        fp->command_vars.flags.flag2 = 1;
    }
    else
    {
        fp->command_vars.flags.flag2 = 0;
        fp->command_vars.flags.flag1 = 0;
    }
    fp->phys_info.vel_air.x = fp->phys_info.vel_air.y = 0.0F;
}

// 0x80161C0C
void ftKirbySpecialAirLwHoldSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_SpecialAirLwHold, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbySpecialLwUnused(fighter_gobj);
    ftKirbySpecialLwSetDropFallVel(fp);
}

// 0x80161C5C
void ftKirbySpecialAirLwEndSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_SpecialAirLwEnd, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}
