#include <ft/fighter.h>

// 0x8013F2A0
void ftCommon_KneeBend_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    fp->status_vars.common.kneebend.anim_frame += DObjGetStruct(fighter_gobj)->dobj_f1;

    if 
    (
        (fp->status_vars.common.kneebend.input_source == FTCOMMON_KNEEBEND_INPUT_TYPE_BUTTON) &&
        (fp->status_vars.common.kneebend.anim_frame <= FTCOMMON_KNEEBEND_SHORT_HOP_FRAMES) &&
        (fp->input.pl.button_tap_prev & (HAL_BUTTON_C_RIGHT | HAL_BUTTON_C_LEFT | HAL_BUTTON_C_DOWN | HAL_BUTTON_C_UP))
    )
    {
        fp->status_vars.common.kneebend.is_short_hop = TRUE;
    }
    if (attributes->kneebend_frames <= fp->status_vars.common.kneebend.anim_frame) 
    {
        ftCommon_Jump_SetStatus(fighter_gobj);
    }
}

// 0x8013F334
void ftCommon_KneeBend_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftCommon_SpecialHi_CheckInterruptCommon(fighter_gobj) == FALSE)
    {
        if (ftCommon_AttackHi4_CheckInterruptKneeBend(fighter_gobj) == FALSE)
        {
            if (fp->status_vars.common.kneebend.jump_force < fp->input.pl.stick_range.y)
            {
                fp->status_vars.common.kneebend.jump_force = fp->input.pl.stick_range.y;
            }
        }
    }
}

// 0x8013F3A0
void ftCommon_KneeBend_SetStatusParam(GObj *fighter_gobj, s32 status_id, s32 input_source)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->status_vars.common.kneebend.jump_force = fp->input.pl.stick_range.y;
    fp->status_vars.common.kneebend.anim_frame = 0.0F;
    fp->status_vars.common.kneebend.input_source = input_source;
    fp->status_vars.common.kneebend.is_short_hop = FALSE;

    fp->x192_flag_b0 = TRUE;
}

// 0x8013F408
void ftCommon_KneeBend_SetStatus(GObj *fighter_gobj, s32 input_source)
{
    ftCommon_KneeBend_SetStatusParam(fighter_gobj, ftStatus_Common_KneeBend, input_source);
}

// 0x8013F42C
void ftCommon_GuardKneeBend_SetStatus(GObj *fighter_gobj, s32 input_source)
{
    ftCommon_KneeBend_SetStatusParam(fighter_gobj, ftStatus_Common_GuardKneeBend, input_source);
}

// 0x8013F450
bool32 ftCommon_KneeBend_CheckButtonTap(ftStruct *fp)
{
    if (fp->input.pl.button_tap & (HAL_BUTTON_C_RIGHT | HAL_BUTTON_C_LEFT | HAL_BUTTON_C_DOWN | HAL_BUTTON_C_UP))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8013F474
s32 ftCommon_KneeBend_GetInputTypeCommon(ftStruct *fp)
{
    if ((fp->input.pl.stick_range.y >= FTCOMMON_KNEEBEND_STICK_RANGE_MIN) && (fp->tap_stick_y <= FTCOMMON_KNEEBEND_BUFFER_FRAMES_MAX))
    {
        return FTCOMMON_KNEEBEND_INPUT_TYPE_STICK;
    }
    else if (ftCommon_KneeBend_CheckButtonTap(fp) != FALSE)
    {
        return FTCOMMON_KNEEBEND_INPUT_TYPE_BUTTON;
    }
    else return FTCOMMON_KNEEBEND_INPUT_TYPE_NONE;
}

// 0x8013F4D0
bool32 ftCommon_KneeBend_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 input_source;

    if (ftCommon_HammerCheckHold(fighter_gobj) != FALSE)
    {
        return ftCommon_HammerKneeBend_CheckInterruptCommon(fighter_gobj);
    }
    input_source = ftCommon_KneeBend_GetInputTypeCommon(fp);

    if (input_source != FTCOMMON_KNEEBEND_INPUT_TYPE_NONE)
    {
        ftCommon_KneeBend_SetStatus(fighter_gobj, input_source);

        return TRUE;
    }
    else return FALSE;
}

// 0x8013F53C
s32 ftCommon_KneeBend_GetInputTypeRun(ftStruct *fp)
{
    if ((fp->input.pl.stick_range.y > FTCOMMON_KNEEBEND_RUN_STICK_RANGE_MIN) && (fp->tap_stick_y <= FTCOMMON_KNEEBEND_BUFFER_FRAMES_MAX))
    {
        return FTCOMMON_KNEEBEND_INPUT_TYPE_STICK;
    }
    else if (ftCommon_KneeBend_CheckButtonTap(fp) != FALSE)
    {
        return FTCOMMON_KNEEBEND_INPUT_TYPE_BUTTON;
    }
    else return FTCOMMON_KNEEBEND_INPUT_TYPE_NONE;
}

// 0x8013F598
bool32 ftCommon_KneeBend_CheckInterruptRun(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 input_source;

    if (ftCommon_HammerCheckHold(fighter_gobj) != FALSE)
    {
        return ftCommon_HammerKneeBend_CheckInterruptCommon(fighter_gobj);
    }
    input_source = ftCommon_KneeBend_GetInputTypeRun(fp);

    if (input_source != FTCOMMON_KNEEBEND_INPUT_TYPE_NONE)
    {
        ftCommon_KneeBend_SetStatus(fighter_gobj, input_source);

        return TRUE;
    }
    else return FALSE;
}

// 0x8013F604
bool32 ftCommon_GuardKneeBend_CheckInterruptGuard(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 input_source = ftCommon_KneeBend_GetInputTypeCommon(fp);

    if ((input_source != FTCOMMON_KNEEBEND_INPUT_TYPE_NONE) && (fp->input.pl.button_hold & fp->input.button_mask_z))
    {
        ftCommon_GuardKneeBend_SetStatus(fighter_gobj, input_source);

        return TRUE;
    }
    else return FALSE;
}

// 0x8013F6A0 - Might be its own file?
void ftCommon_Jump_GetJumpForceButton(s32 stick_range_x, s32 *jump_vel_x, s32 *jump_vel_y, bool32 is_short_hop)
{
    f32 sqrt_vel_x;
    f32 vel_y;
    f32 vel_x;

    vel_x = ABS(stick_range_x);

    sqrt_vel_x = sqrtf(1.0F - SQUARE(vel_x / GCONTROLLER_RANGE_MAX_F));

    if (is_short_hop == FALSE)
    {
        vel_y = (FTCOMMON_KNEEBEND_BUTTON_LONG_FORCE * sqrt_vel_x) + FTCOMMON_KNEEBEND_BUTTON_LONG_MIN;

        if ((SQUARE(vel_x) + SQUARE(vel_y)) > SQUARE(GCONTROLLER_RANGE_MAX_F))
        {
            vel_y = sqrtf(SQUARE(GCONTROLLER_RANGE_MAX_F) - SQUARE(vel_x));
        }
        if (vel_y < FTCOMMON_KNEEBEND_BUTTON_LONG_MIN)
        {
            vel_y = FTCOMMON_KNEEBEND_BUTTON_LONG_MIN;
        }
    }
    else
    {
        vel_y = (FTCOMMON_KNEEBEND_BUTTON_SHORT_FORCE * sqrt_vel_x) + FTCOMMON_KNEEBEND_BUTTON_SHORT_MIN;

        if ((SQUARE(vel_x) + SQUARE(vel_y)) > SQUARE(GCONTROLLER_RANGE_MAX_F))
        {
            vel_y = sqrtf(SQUARE(GCONTROLLER_RANGE_MAX_F) - SQUARE(vel_x));
        }
        if (vel_y < FTCOMMON_KNEEBEND_BUTTON_SHORT_MIN)
        {
            vel_y = FTCOMMON_KNEEBEND_BUTTON_SHORT_MIN;
        }
    }
    if (vel_y > FTCOMMON_KNEEBEND_BUTTON_HEIGHT_CLAMP)
    {
        vel_y = FTCOMMON_KNEEBEND_BUTTON_HEIGHT_CLAMP;
    }
    *jump_vel_x = (stick_range_x >= 0) ? vel_x : -vel_x;

    *jump_vel_y = vel_y;
}

// 0x8013F880
void ftCommon_Jump_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    s32 status_id;
    s32 vel_x, vel_y;

    ftMap_SetAir(fp);

    status_id = ((fp->input.pl.stick_range.x * fp->lr) > FTCOMMON_KNEEBEND_JUMP_F_OR_B_RANGE) ? ftStatus_Common_JumpF : ftStatus_Common_JumpB;

    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    switch (fp->status_vars.common.kneebend.input_source)
    {
    case FTCOMMON_KNEEBEND_INPUT_TYPE_BUTTON:
        ftCommon_Jump_GetJumpForceButton(fp->input.pl.stick_range.x, &vel_x, &vel_y, fp->status_vars.common.kneebend.is_short_hop);
        break;

    case FTCOMMON_KNEEBEND_INPUT_TYPE_STICK:
    default:
        vel_x = fp->input.pl.stick_range.x;
        vel_y = fp->status_vars.common.kneebend.jump_force;

        if (vel_y < FTCOMMON_KNEEBEND_STICK_RANGE_MIN)
        {
            vel_y = FTCOMMON_KNEEBEND_STICK_RANGE_MIN;
        }
        break;
    }
    fp->phys_info.vel_air.y = (vel_y * attributes->jump_height_mul) + attributes->jump_height_base;
    fp->phys_info.vel_air.x = vel_x * attributes->jump_vel_x;

    fp->tap_stick_y = U8_MAX - 1;

    fp->x192_flag_b0 = TRUE;
}