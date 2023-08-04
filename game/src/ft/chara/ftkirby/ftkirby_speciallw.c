#include <ft/chara/ftkirby/ftkirby.h>

// 0x80161360
void ftKirby_SpecialLw_Unused(GObj *fighter_gobj)
{
    return;
}

// 0x80161368
void ftKirby_SpecialLw_UpdateColAnim(GObj *fighter_gobj)
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
void ftKirby_SpecialLw_SetDamageResist(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->is_damage_resist = TRUE;

    fp->damage_resist = FTKIRBY_STONE_HEALTH_MAX;
    fp->status_vars.kirby.speciallw.duration = FTKIRBY_STONE_DURATION_MAX;
    fp->status_vars.kirby.speciallw.colanim_id = FTKIRBY_STONE_COLANIM_ID_HIGH;

    ftColor_CheckSetColAnimIndex(fighter_gobj, FTKIRBY_STONE_COLANIM_ID_HIGH, FTKIRBY_STONE_COLANIM_LENGTH_HIGH);
}

// 0x80161468
void ftKirby_SpecialLw_InitDropFallVel(ftStruct *fp)
{
    fp->phys_info.vel_air.y = FTKIRBY_STONE_FALL_VEL;
}

// 0x80161478
f32 ftKirby_SpecialLw_GetGroundAxisRoll(ftStruct *fp)
{
    f32 rot_z = -atan2f(fp->coll_data.ground_angle.x, fp->coll_data.ground_angle.y);

    fp->joint[ftParts_TopN_Joint]->rotate.z = rot_z;

    return rot_z;
}

// 0x801614B4
bool32 ftKirby_SpecialLw_CheckRelease(GObj *fighter_gobj, bool32 is_allow_release)
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
void ftKirby_SpecialLwStart_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        ftStatus_Update(fighter_gobj, ftStatus_Kirby_SpecialLwHold, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
        ftKirby_SpecialLw_SetDamageResist(fighter_gobj);

        fp->command_vars.flags.flag1 = 0;
    }
    else ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftKirby_SpecialLwUnk_SetStatus);
}

// 0x80161598
void ftKirby_SpecialAirLwStart_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        ftKirby_SpecialLw_SetDamageResist(fighter_gobj);

        fp->command_vars.flags.flag1 = 0;
    }
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftKirby_SpecialAirLwHold_SetStatus);
}

// 0x801615E4
void ftKirby_SpecialLwUnk_DecideNextStatus(GObj *fighter_gobj, bool32 ground_or_air)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!(fp->is_damage_resist) && (fp->command_vars.flags.flag1 != 0))
    {
        if (ground_or_air == GA_Ground)
        {
            ftStatus_Update(fighter_gobj, ftStatus_Kirby_SpecialLwHold, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
        }
        ftKirby_SpecialLw_SetDamageResist(fighter_gobj);

        fp->command_vars.flags.flag1 = 0;
        fp->command_vars.flags.flag2 = 1;
    }
    if (fp->command_vars.flags.flag2 != 0)
    {
        if (ftKirby_SpecialLw_CheckRelease(fighter_gobj, FALSE) == TRUE)
        {
            (ground_or_air == GA_Ground) ? ftKirby_SpecialLwEnd_SetStatus(fighter_gobj) : ftKirby_SpecialAirLwEnd_SetStatus(fighter_gobj);

            fp->command_vars.flags.flag2 = 0;
        }
        ftKirby_SpecialLw_UpdateColAnim(fighter_gobj);
    }
}

// 0x801616B0
void ftKirby_SpecialLwUnk_ProcUpdate(GObj *fighter_gobj)
{
    ftKirby_SpecialLwUnk_DecideNextStatus(fighter_gobj, ground);
}

// 0x801616D0
void ftKirby_SpecialAirLwHold_ProcUpdate(GObj *fighter_gobj)
{
    ftKirby_SpecialLwUnk_DecideNextStatus(fighter_gobj, air);
}

// 0x801616F0
void ftKirby_SpecialLwHold_DecideNextStatus(GObj *fighter_gobj, bool32 ground_or_air)
{
    if (ftKirby_SpecialLw_CheckRelease(fighter_gobj, TRUE) == TRUE)
    {
        (ground_or_air == GA_Ground) ? ftKirby_SpecialLwEnd_SetStatus(fighter_gobj) : ftKirby_SpecialAirLwEnd_SetStatus(fighter_gobj);
    }
    ftKirby_SpecialLw_UpdateColAnim(fighter_gobj);
}

// 0x8016174C
void ftKirby_SpecialLwHold_ProcUpdate(GObj *fighter_gobj)
{
    ftKirby_SpecialLwHold_DecideNextStatus(fighter_gobj, ground);
}

// 0x8016176C
void ftKirby_SpecialAirLwFall_ProcUpdate(GObj *fighter_gobj)
{
    ftKirby_SpecialLwHold_DecideNextStatus(fighter_gobj, air);
}

extern f32 D_ovl2_8012C4E0[6];

// 0x8016178C
void ftKirby_SpecialLwHold_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    f32 temp_slide_angle;
    f32 ground_vel_x;
    f32 slide_angle;

    temp_slide_angle = ftKirby_SpecialLw_GetGroundAxisRoll(fp);

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

    func_ovl2_800D8978(fp, (D_ovl2_8012C4E0[fp->coll_data.ground_flags & 0xFFFF00FF] * attributes->traction * FTKIRBY_STONE_SLIDE_TRACTION_MUL));
    func_ovl2_800D87D0(fighter_gobj);
}

// 0x801618C4
void ftKirby_SpecialLwStart_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DDDA8(fighter_gobj) == FALSE)
    {
        ftMap_SetAir(fp);
        ftStatus_Update(fighter_gobj, ftStatus_Kirby_SpecialAirLwStart, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
        ftKirby_SpecialLw_InitDropFallVel(fp);
    }
}

// 0x80161920
void ftKirby_SpecialLwUnk_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DDDA8(fighter_gobj) == FALSE)
    {
        ftMap_SetAir(fp);
        ftStatus_Update(fighter_gobj, ftStatus_Kirby_SpecialAirLwHold, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    }
}

// 0x80161974
void ftKirby_SpecialLwHold_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DDDA8(fighter_gobj) == FALSE)
    {
        ftMap_SetAir(fp);
        ftStatus_Update(fighter_gobj, ftStatus_Kirby_SpecialAirLwFall, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));

        fp->is_damage_resist = TRUE;

        ftKirby_SpecialLw_InitDropFallVel(fp);
    }
}

// 0x801619E0
void ftKirby_SpecialAirLwStart_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DE6B0(fighter_gobj) != FALSE)
    {
        ftMap_SetGround(fp);
        ftStatus_Update(fighter_gobj, ftStatus_Kirby_SpecialLwStart, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    }
}

// 0x80161A30
void ftKirby_SpecialAirLwHold_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DE6B0(fighter_gobj) != FALSE)
    {
        ftMap_SetGround(fp);
        ftStatus_Update(fighter_gobj, ftStatus_Kirby_SpecialAirLwLanding, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));

        fp->is_damage_resist = TRUE;
    }
}

// 0x80161A94
void ftKirby_SpecialLwStart_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Kirby_SpecialLwStart, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag1 = 0;

    fp->phys_info.vel_air.y = 0.0F;
    fp->phys_info.vel_air.x = 0.0F;
}

// 0x80161AEC
void ftKirby_SpecialLwUnk_SetStatus(GObj *fighter_gobj) // Unused
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Kirby_SpecialLwUnk, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    ftKirby_SpecialLw_Unused(fighter_gobj);
}

// 0x80161B2C
void ftKirby_SpecialLwEnd_SetStatus(GObj *fighter_gobj)
{
    ftMap_SetAir(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_SpecialLwEnd, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
}

// 0x80161B70
void ftKirby_SpecialAirLwStart_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    u32 armor_flag = fp->is_damage_resist;

    ftStatus_Update(fighter_gobj, ftStatus_Kirby_SpecialAirLwStart, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftAnim_Update(fighter_gobj);

    if (fp->is_damage_resist = armor_flag & TRUE) // ??????
    {
        fp->command_vars.flags.flag2 = 1;
    }
    else
    {
        fp->command_vars.flags.flag2 = 0;
        fp->command_vars.flags.flag1 = 0;
    }
    fp->phys_info.vel_air.y = 0.0F;
    fp->phys_info.vel_air.x = 0.0F;
}

// 0x80161C0C
void ftKirby_SpecialAirLwHold_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Kirby_SpecialAirLwHold, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftKirby_SpecialLw_Unused(fighter_gobj);
    ftKirby_SpecialLw_InitDropFallVel(fp);
}

// 0x80161C5C
void ftKirby_SpecialAirLwEnd_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_SpecialAirLwEnd, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
}