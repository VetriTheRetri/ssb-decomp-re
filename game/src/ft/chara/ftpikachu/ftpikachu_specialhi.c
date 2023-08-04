#include <ft/chara/ftpikachu/ftpikachu.h>

#define FTPIKACHU_SPECIALHI_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)

// 0x801527B0
void ftPikachu_SpecialHiStart_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.pikachu.specialhi.anim_frames--;

    if (fp->status_vars.pikachu.specialhi.anim_frames == 0)
    {
        ftPikachu_SpecialHiEnd_GotoSubZip(fighter_gobj);
    }
}

// 0x801527E4
void ftPikachu_SpecialAirHiStart_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.pikachu.specialhi.anim_frames--;

    if (fp->status_vars.pikachu.specialhi.anim_frames == 0)
    {
        ftPikachu_SpecialAirHiEnd_GotoSubZip(fighter_gobj);
    }
}

// 0x80152818
void ftPikachu_SpecialAirHiStart_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    func_ovl2_800D8D68(fp, 0.8F, attributes->fall_speed_max);

    if (func_ovl2_800D8FA8(fp, attributes) == FALSE)
    {
        func_ovl2_800D9074(fp, attributes);
    }
}

// 0x8015286C
void ftPikachu_SpecialHiStart_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftPikachu_SpecialHiStart_SwitchStatusAir);
}

// 0x80152890
void ftPikachu_SpecialAirHiStart_ProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundCliff(fighter_gobj, ftPikachu_SpecialAirHiStart_SwitchStatusGround);
}

// 0x801528B4
void ftPikachu_SpecialAirHiStart_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialHiStart, fighter_gobj->anim_frame, 0.0F, FTPIKACHU_SPECIALHI_STATUPDATE_FLAGS);
}

// 0x801528F4
void ftPikachu_SpecialHiStart_SwitchStatusAir(GObj *fighter_gobj)
{
    ftMap_SetAir(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialAirHiStart, fighter_gobj->anim_frame, 0.0F, FTPIKACHU_SPECIALHI_STATUPDATE_FLAGS);
}

// 0x80152934
void ftPikachu_SpecialHiStart_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag1 = 0;

    fp->status_vars.pikachu.specialhi.anim_frames = FTPIKACHU_QUICKATTACK_START_TIME;
    fp->status_vars.pikachu.specialhi.is_subsequent_zip = FALSE;
    fp->status_vars.pikachu.specialhi.pass_timer = 0;

    fp->phys_info.vel_ground.x = 0.0F;
    fp->phys_info.vel_air.y = 0.0F;
    fp->phys_info.vel_air.x = 0.0F;
}

// 0x80152960 - Set hit collision, color animation and anim rate
void ftPikachu_SpecialHi_InitMiscVars(GObj *fighter_gobj)
{
    ftCollision_SetHitStatusAll(fighter_gobj, gmHitCollision_HitStatus_Intangible); // Set hit status

    ftColor_CheckSetColAnimIndex(fighter_gobj, FTPIKACHU_QUICKATTACK_COLANIM_ID, FTPIKACHU_QUICKATTACK_COLANIM_LENGTH); // Apply color animation

    gOMObj_SetAnimPlaybackRate(fighter_gobj, 0.0F); // Set animation speed (0.0F = freeze)
}

// 0x801529A0
void ftPikachu_SpecialHiStart_SetStatus(GObj *fighter_gobj)
{
    ftPikachu_SpecialHiStart_InitStatusVars(fighter_gobj);
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialHiStart, 0.0F, 0.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftPikachu_SpecialHi_InitMiscVars(fighter_gobj);
}

// 0x801529EC
void ftPikachu_SpecialAirHiStart_SetStatus(GObj *fighter_gobj)
{
    ftPikachu_SpecialHiStart_InitStatusVars(fighter_gobj);
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialAirHiStart, 0.0F, 0.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftPikachu_SpecialHi_InitMiscVars(fighter_gobj);
}

// 0x80152A38
void ftPikachu_SpecialHi_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.pikachu.specialhi.anim_frames--;

    if (fp->status_vars.pikachu.specialhi.anim_frames <= 0) // NOW you're checking if less than too?
    {
        ftPikachu_SpecialHiEnd_SetStatus(fighter_gobj);
    }
}

// 0x80152A6C
void ftPikachu_SpecialAirHi_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.pikachu.specialhi.anim_frames--;

    if (fp->status_vars.pikachu.specialhi.anim_frames <= 0) // NOW you're checking if less than too?
    {
        ftPikachu_SpecialAirHiEnd_SetStatus(fighter_gobj);
    }
}

// 0x80152AA0
void ftPikachu_SpecialHi_UpdateModelPitchScale(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->joint[FTPIKACHU_QUICKATTACK_BASE_JOINT]->rotate.x = (atan2f(fp->phys_info.vel_air.x, fp->phys_info.vel_air.y) * fp->lr) - HALF_PI32;

    fp->joint[FTPIKACHU_QUICKATTACK_BASE_JOINT]->scale.x = FTPIKACHU_QUICKATTACK_SCALE_X;
    fp->joint[FTPIKACHU_QUICKATTACK_BASE_JOINT]->scale.y = FTPIKACHU_QUICKATTACK_SCALE_Y;
    fp->joint[FTPIKACHU_QUICKATTACK_BASE_JOINT]->scale.z = FTPIKACHU_QUICKATTACK_SCALE_Z;

    func_ovl2_800EB528(fp->joint[FTPIKACHU_QUICKATTACK_BASE_JOINT]);
}

// 0x80152B24
void ftPikachu_SpecialHi_ProcPhysics(GObj *fighter_gobj)
{
    jtgt_ovl2_800D8B94(fighter_gobj);
    ftPikachu_SpecialHi_UpdateModelPitchScale(fighter_gobj);
}

// 0x80152B4C
void ftPikachu_SpecialAirHi_ProcPhysics(GObj *fighter_gobj)
{
    ftPikachu_SpecialHi_UpdateModelPitchScale(fighter_gobj);
}

// 0x80152B6C
void ftPikachu_SpecialHi_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DDDA8(fighter_gobj) == FALSE)
    {
        if (fp->coll_data.coll_mask & (MPCOLL_MASK_LWALL | MPCOLL_MASK_RWALL))
        {
            ftMap_SetAir(fp);
            ftPikachu_SpecialAirHiEnd_SetStatus(fighter_gobj);
        }
        else ftPikachu_SpecialHi_SwitchStatusAir(fighter_gobj);
    }
    else if (fp->coll_data.coll_mask & (MPCOLL_MASK_LWALL | MPCOLL_MASK_RWALL))
    {
        ftPikachu_SpecialHiEnd_SetStatus(fighter_gobj);
    }
}

// 0x80152BF4
bool32 ftPikachu_SpecialHi_CheckIgnorePass(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!(fp->coll_data.ground_flags & MPCOLL_MASK_NONSOLID) || (fp->status_vars.pikachu.specialhi.pass_timer >= FTPIKACHU_QUICKATTACK_PASS_BUFFER_MAX))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80152C2C
void ftPikachu_SpecialAirHi_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.pikachu.specialhi.pass_timer++;

    if (func_ovl2_800DE798(fighter_gobj, ftPikachu_SpecialHi_CheckIgnorePass) != FALSE)
    {
        if (fp->coll_data.coll_type & MPCOLL_MASK_CLIFF_ALL)
        {
            ftCommon_CliffCatch_SetStatus(fighter_gobj);

        }
        else if (FTPIKACHU_QUICKATTACK_HALT_ANGLE < vec3f_angle_diff(&fp->coll_data.ground_angle, &fp->phys_info.vel_air))
        {
            ftMap_SetGround(fp);
            ftPikachu_SpecialHiEnd_SetStatus(fighter_gobj);
        }
        else ftPikachu_SpecialAirHi_SwitchStatusGround(fighter_gobj);
    }
    else
    {
        if ((fp->coll_data.coll_mask & MPCOLL_MASK_CEIL) && (FTPIKACHU_QUICKATTACK_HALT_ANGLE < vec3f_angle_diff(&fp->coll_data.ceil_angle, &fp->phys_info.vel_air)))
        {
            ftPikachu_SpecialAirHiEnd_SetStatus(fighter_gobj);
        }
        if ((fp->coll_data.coll_mask & MPCOLL_MASK_RWALL) && (FTPIKACHU_QUICKATTACK_HALT_ANGLE < vec3f_angle_diff(&fp->coll_data.rwall_angle, &fp->phys_info.vel_air)))
        {
            ftPikachu_SpecialAirHiEnd_SetStatus(fighter_gobj);
        }
        if ((fp->coll_data.coll_mask & MPCOLL_MASK_LWALL) && (FTPIKACHU_QUICKATTACK_HALT_ANGLE < vec3f_angle_diff(&fp->coll_data.lwall_angle, &fp->phys_info.vel_air)))
        {
            ftPikachu_SpecialAirHiEnd_SetStatus(fighter_gobj);
        }
    }
}

// 0x80152D98
void ftPikachu_SpecialAirHi_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialHi, fighter_gobj->anim_frame, 0.0F, FTPIKACHU_SPECIALHI_STATUPDATE_FLAGS);
}

// 0x80152DD8
void ftPikachu_SpecialHi_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialAirHi, fighter_gobj->anim_frame, 0.0F, FTPIKACHU_SPECIALHI_STATUPDATE_FLAGS);

    fp->jumps_used = fp->attributes->jumps_max;
}

// 0x80152E2C
void ftPikachu_SpecialHi_InitStatusVarsZip(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.pikachu.specialhi.anim_frames = FTPIKACHU_QUICKATTACK_ZIP_TIME;
    fp->jumps_used = fp->attributes->jumps_max;
}

// 0x80152E48
void ftPikachu_SpecialHiEnd_GotoSubZip(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 sqrt_stick_range;
    f32 temp_stick_x;
    Vec3f stick_range;
    f32 temp_stick_y;

    temp_stick_x = fp->input.pl.stick_range.x;
    temp_stick_y = fp->input.pl.stick_range.y;

    sqrt_stick_range = sqrtf(SQUARE(temp_stick_x) + SQUARE(temp_stick_y));

    if (sqrt_stick_range > GCONTROLLER_RANGE_MAX_F)
    {
        sqrt_stick_range = GCONTROLLER_RANGE_MAX_F;
    }
    if (!(sqrt_stick_range < FTPIKACHU_QUICKATTACK_STICK_RANGE_MIN) && !(fp->coll_data.ground_flags & MPCOLL_MASK_NONSOLID))
    {
        stick_range.x = fp->input.pl.stick_range.x;
        stick_range.y = fp->input.pl.stick_range.y;
        stick_range.z = 0.0F;

        if ((vec3f_angle_diff(&fp->coll_data.ground_angle, &stick_range) < HALF_PI32)) goto block_end;
        {
            fp->status_vars.pikachu.specialhi.stick_range.x = stick_range.x;
            fp->status_vars.pikachu.specialhi.stick_range.y = stick_range.y;

            ftCommon_StickInputSetLR(fp);
            ftPikachu_SpecialHi_InitStatusVarsZip(fighter_gobj);

            fp->phys_info.vel_ground.x = (FTPIKACHU_QUICKATTACK_VEL_BASE * sqrt_stick_range) + FTPIKACHU_QUICKATTACK_VEL_ADD;

            if (fp->status_vars.pikachu.specialhi.is_subsequent_zip != FALSE)
            {
                fp->phys_info.vel_ground.x *= FTPIKACHU_QUICKATTACK_VEL_MUL;
            }
            ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialHi, 0.0F, 0.0F, FTSTATUPDATE_NONE_PRESERVE);
            ftAnim_Update(fighter_gobj);
            return;
        }
    }
block_end:
    ftMap_SetAir(fp);

    ftPikachu_SpecialAirHiEnd_GotoSubZip(fighter_gobj);
}

// 0x80152FEC
void ftPikachu_SpecialAirHiEnd_GotoSubZip(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 tangent;
    f32 sqrt_stick_range = sqrtf(SQUARE((f32)fp->input.pl.stick_range.x) + SQUARE((f32)fp->input.pl.stick_range.y));

    if (sqrt_stick_range > GCONTROLLER_RANGE_MAX_F)
    {
        sqrt_stick_range = GCONTROLLER_RANGE_MAX_F;
    }
    ftCommon_StickInputSetLR(fp);

    if (sqrt_stick_range > FTPIKACHU_QUICKATTACK_STICK_RANGE_MIN)
    {
        tangent = atan2f((f32)fp->input.pl.stick_range.y, (f32)(fp->input.pl.stick_range.x * fp->lr));

        fp->status_vars.pikachu.specialhi.stick_range.x = (s32)fp->input.pl.stick_range.x;
        fp->status_vars.pikachu.specialhi.stick_range.y = (s32)fp->input.pl.stick_range.y;
    }
    else
    {
        tangent = 0.9F;
        sqrt_stick_range = 80.0F;

        fp->status_vars.pikachu.specialhi.stick_range.x = 0;
        fp->status_vars.pikachu.specialhi.stick_range.y = 80;
    }

    ftPikachu_SpecialHi_InitStatusVarsZip(fighter_gobj);

    fp->phys_info.vel_air.x = cosf(tangent) * ((FTPIKACHU_QUICKATTACK_VEL_BASE * sqrt_stick_range) + FTPIKACHU_QUICKATTACK_VEL_ADD) * fp->lr;

    fp->phys_info.vel_air.y = __sinf(tangent) * ((FTPIKACHU_QUICKATTACK_VEL_BASE * sqrt_stick_range) + FTPIKACHU_QUICKATTACK_VEL_ADD);

    if (fp->status_vars.pikachu.specialhi.is_subsequent_zip != FALSE)
    {
        fp->phys_info.vel_air.x *= FTPIKACHU_QUICKATTACK_VEL_MUL;
        fp->phys_info.vel_air.y *= FTPIKACHU_QUICKATTACK_VEL_MUL;
    }
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialAirHi, 0.0F, 0.0F, 0U);
    ftAnim_Update(fighter_gobj);
}

// 0x801531AC
bool32 ftPikachu_SpecialHi_CheckGotoSubZip(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f current_angle;
    Vec3f previous_angle;
    f32 unused[2];
    f32 temp_stick_x;
    f32 temp_stick_y;

    temp_stick_x = (f32)fp->input.pl.stick_range.x;
    temp_stick_y = (f32)fp->input.pl.stick_range.y;

    if (sqrtf((temp_stick_x * temp_stick_x) + (temp_stick_y * temp_stick_y)) < FTPIKACHU_QUICKATTACK_STICK_RANGE_MIN)
    {
        return FALSE;
    }
    else if (fp->status_vars.pikachu.specialhi.is_subsequent_zip == FALSE)
    {
        current_angle.x = (f32)fp->input.pl.stick_range.x;
        current_angle.y = (f32)fp->input.pl.stick_range.y;
        current_angle.z = 0.0F;

        previous_angle.x = (f32)fp->status_vars.pikachu.specialhi.stick_range.x;
        previous_angle.y = (f32)fp->status_vars.pikachu.specialhi.stick_range.y;
        previous_angle.z = 0.0F;

        if (FTPIKACHU_QUICKATTACK_ANGLE_DIFF_MIN < vec3f_angle_diff(&previous_angle, &current_angle))
        {
            return TRUE;
        }
        else return FALSE;
    }
    else return FALSE;
}

// 0x801532B8
void ftPikachu_SpecialHiEnd_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 == 1)
    {
        if (ftPikachu_SpecialHi_CheckGotoSubZip(fighter_gobj) != FALSE)
        {
            fp->command_vars.flags.flag1 = 0;

            fp->status_vars.pikachu.specialhi.is_subsequent_zip = TRUE;

            ftPikachu_SpecialHiEnd_GotoSubZip(fighter_gobj);
        }
        else fp->command_vars.flags.flag1 = 2;
    }
    else if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftCommon_Wait_SetStatus(fighter_gobj);
    }
}

// 0x80153340
void ftPikachu_SpecialAirHiEnd_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 == 1)
    {
        if (ftPikachu_SpecialHi_CheckGotoSubZip(fighter_gobj) != FALSE)
        {
            fp->command_vars.flags.flag1 = 0;
            fp->status_vars.pikachu.specialhi.is_subsequent_zip = TRUE;

            ftPikachu_SpecialAirHiEnd_GotoSubZip(fighter_gobj);
        }
        else fp->command_vars.flags.flag1 = 2;
    }
    else if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftCommon_FallSpecial_SetStatus(fighter_gobj, FTPIKACHU_QUICKATTACK_FALLSPECIAL_DRIFT, FALSE, TRUE, TRUE, FTPIKACHU_QUICKATTACK_LANDING_LAG, FALSE);
    }
}

// 0x801533E4
void ftPikachu_SpecialHiEnd_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        func_ovl2_800D8BB4(fighter_gobj);
    }
}

// 0x80153414
void ftPikachu_SpecialAirHiEnd_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        ftAttributes *attributes;

        func_ovl2_800D8E50(fp, fp->attributes);

        attributes = fp->attributes;

        ftPhysics_ClampDriftStickRange(F(fp, 8, attributes->aerial_acceleration * FTPIKACHU_QUICKATTACK_AIR_ACCEL_MUL, attributes->aerial_speed_max_x * FTPIKACHU_QUICKATTACK_AIR_SPEED_MUL);
       
        func_ovl2_800D9074(fp, fp->attributes);
    }
    else
    {
        fp->phys_info.vel_air.y -= (fp->phys_info.vel_air.y / FTPIKACHU_QUICKATTACK_VEL_Y_DIV);

        func_ovl2_800D9074(fp, fp->attributes);
    }
}

// 0x801534BC
void ftPikachu_SpecialHiEnd_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftPikachu_SpecialHiEnd_SwitchStatusAir);
}

// 0x801534E0
void ftPikachu_SpecialAirHiEnd_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DE7D8(fighter_gobj) != FALSE)
    {
        if (fp->coll_data.coll_type & MPCOLL_MASK_CLIFF_ALL)
        {
            ftCommon_CliffCatch_SetStatus(fighter_gobj);
        }
        else ftCommon_LandingFallSpecial_SetStatus(fighter_gobj, FALSE, FTPIKACHU_QUICKATTACK_LANDING_LAG);
    }
}

// 0x80153544
void ftPikachu_SpecialAirHiEnd_SwitchStatusGround(GObj *fighter_gobj) // Unused
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialHiEnd, fighter_gobj->anim_frame, 1.0F, FTPIKACHU_SPECIALHI_STATUPDATE_FLAGS);
}

// 0x80153584
void ftPikachu_SpecialHiEnd_SwitchStatusAir(GObj *fighter_gobj)
{
    ftMap_SetAir(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialAirHiEnd, fighter_gobj->anim_frame, 1.0F, FTPIKACHU_SPECIALHI_STATUPDATE_FLAGS);
}

// 0x801535C4
void ftPikachu_SpecialHiEnd_BackupVel(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.pikachu.specialhi.vel_x_bak = fp->phys_info.vel_air.x;
    fp->status_vars.pikachu.specialhi.vel_y_bak = fp->phys_info.vel_air.y;
    fp->status_vars.pikachu.specialhi.vel_ground_bak = fp->phys_info.vel_ground.x;

    fp->phys_info.vel_air.y = 0.0F;
    fp->phys_info.vel_air.x = 0.0F;
    fp->phys_info.vel_ground.x = 0.0F;
}

// 0x801535F4
void ftPikachu_SpecialHiEnd_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftPikachu_SpecialHiEnd_BackupVel(fighter_gobj);

    fp->phys_info.vel_ground.x = fp->status_vars.pikachu.specialhi.vel_ground_bak * FTPIKACHU_QUICKATTACK_VEL_BAK_MUL;

    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialHiEnd, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
}

// 0x80153654
void ftPikachu_SpecialAirHiEnd_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftPikachu_SpecialHiEnd_BackupVel(fighter_gobj);

    fp->phys_info.vel_air.x = fp->status_vars.pikachu.specialhi.vel_x_bak * FTPIKACHU_QUICKATTACK_VEL_BAK_MUL;
    fp->phys_info.vel_air.y = fp->status_vars.pikachu.specialhi.vel_y_bak * FTPIKACHU_QUICKATTACK_VEL_BAK_MUL;

    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialAirHiEnd, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
}
