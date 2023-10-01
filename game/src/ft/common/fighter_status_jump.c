#include <ft/fighter.h>

// 0x8013F660
void ftCommon_Jump_ProcInterrupt(GObj *fighter_gobj)
{
    if ((ftCommon_SpecialAir_CheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommon_AttackAir_CheckInterruptCommon(fighter_gobj) == FALSE))
    {
        ftCommon_JumpAerial_CheckInterruptCommon(fighter_gobj);
    }
}

// 0x8013F6A0 - Might be its own file?
void ftCommon_Jump_GetJumpForceButton(s32 stick_range_x, s32 *jump_vel_x, s32 *jump_vel_y, sb32 is_short_hop)
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

    ftMain_SetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

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

    fp->tap_stick_y = FTINPUT_STICKBUFFER_FRAMES_MAX;

    fp->is_special_interrupt = TRUE;
}