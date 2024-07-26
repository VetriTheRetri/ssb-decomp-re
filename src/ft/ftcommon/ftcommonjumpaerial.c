#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

// 0x80188580
f32 dFTKirbyJumpAerialFVelocities[/* */] = { 60.0F, 52.0F, 47.0F, 40.0F };

// 0x801885A0
f32 dFTPurinJumpAerialFVelocities[/* */] = { 60.0F, 40.0F, 20.0F, 0.0F };

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8013FA90
void ftCommonJumpAerialUpdateModelPitch(ftStruct *fp)
{
    if (fp->status_vars.common.jumpaerial.turn_frames != 0)
    {
        fp->status_vars.common.jumpaerial.turn_frames--;

        fp->joint[nFTPartsJointTopN]->rotate.vec.f.y += FTCOMMON_JUMPAERIAL_TURN_ROTATE_STEP;

        func_ovl2_800EB528(fp->joint[nFTPartsJointTopN]);

        if (fp->status_vars.common.jumpaerial.turn_frames == (FTCOMMON_JUMPAERIAL_TURN_FRAMES / 2))
        {
            fp->lr = -fp->lr;
        }
    }
}

// 0x8013FB00
void ftCommonJumpAerialProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonJumpAerialUpdateModelPitch(fp);
    ftStatusFallOnAnimEnd(fighter_gobj);
}

// 0x8013FB2C
void ftCommonJumpAerialProcInterrupt(GObj *fighter_gobj)
{
    if ((ftCommonSpecialAirCheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommonAttackAirCheckInterruptCommon(fighter_gobj) == FALSE))
    {
        ftCommonJumpAerialCheckInterruptCommon(fighter_gobj);
    }
}

// 0x8013FB6C
void ftYoshiJumpAerialProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftPhysics_ApplyAirVelTransNYZ(fighter_gobj);

    if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
    {
        ftPhysics_ClampAirVelXStickDefault(fp, attributes);
        ftPhysics_ApplyAirVelXFriction(fp, attributes);
    }
}

// 0x8013FBC4
void ftNessJumpAerialProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    f32 vel_x;

    ftPhysics_GetAirVelTransN(fp, &fp->status_vars.common.jumpaerial.drift, &fp->phys_info.vel_air.y, &fp->phys_info.vel_air.z);

    fp->phys_info.vel_air.x = fp->status_vars.common.jumpaerial.vel_x;

    if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
    {
        ftPhysics_ClampAirVelXStickDefault(fp, attributes);
        ftPhysics_ApplyAirVelXFriction(fp, attributes);
    }
    fp->status_vars.common.jumpaerial.vel_x = fp->phys_info.vel_air.x;

    fp->phys_info.vel_air.x += fp->status_vars.common.jumpaerial.drift;
}

// 0x8013FC4C
void ftCommonJumpAerialProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftPhysics_CheckSetFastFall(fp);

    (fp->is_fast_fall) ? ftPhysics_ApplyFastFall(fp, attributes) : ftPhysics_ApplyGravityDefault(fp, attributes);

    switch (fp->ft_kind)
    {
    case nFTKindKirby:
    case nFTKindPolyKirby:
        if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
        {
            ftPhysics_ClampAirVelXStickRange(fp, FTPHYSICS_AIRDRIFT_CLAMP_RANGE_MIN, attributes->aerial_acceleration * FTKIRBY_JUMPAERIAL_VEL_MUL, attributes->aerial_speed_max_x * FTKIRBY_JUMPAERIAL_VEL_MUL);
        }
        break;

    case nFTKindPurin:
    case nFTKindPolyPurin:
        if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
        {
            ftPhysics_ClampAirVelXStickRange(fp, FTPHYSICS_AIRDRIFT_CLAMP_RANGE_MIN, attributes->aerial_acceleration * FTPURIN_JUMPAERIAL_VEL_MUL, attributes->aerial_speed_max_x * FTPURIN_JUMPAERIAL_VEL_MUL);
        }
        break;
    }
    ftPhysics_ApplyAirVelXFriction(fp, attributes);
}

// 0x8013FD74
void ftCommonJumpAerialSetStatus(GObj *fighter_gobj, s32 input_source)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    s32 status_id = ((fp->input.pl.stick_range.x * fp->lr) >= FTCOMMON_JUMPAERIAL_F_OR_B_RANGE) ? nFTCommonStatusJumpAerialF : nFTCommonStatusJumpAerialB;
    s32 stick_range_y = I_CONTROLLER_RANGE_MAX;
    s32 stick_range_x;

    // It would seem that the stick range jump mechanic was initially considered for double jumps as well...

    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUS_PRESERVE_PLAYERTAG);

    if ((fp->ft_kind == nFTKindYoshi) || (fp->ft_kind == nFTKindPolyYoshi))
    {
        fp->proc_physics = ftYoshiJumpAerialProcPhysics;
        fp->knockback_resist_status = FTYOSHI_JUMPAERIAL_KNOCKBACK_RESIST;
    }
    else if ((fp->ft_kind == nFTKindNess) || (fp->ft_kind == nFTKindPolyNess))
    {
        fp->proc_physics = ftNessJumpAerialProcPhysics;
        fp->status_vars.common.jumpaerial.drift = 0.0F;
    }
    switch (input_source) // Last minute bruh moment from HAL
    {
    case FTCOMMON_JUMPAERIAL_INPUT_TYPE_BUTTON:
        stick_range_x = fp->input.pl.stick_range.x;
        break;

    case FTCOMMON_JUMPAERIAL_INPUT_TYPE_STICK:
    default:
        stick_range_x = fp->input.pl.stick_range.x;
        break;
    } 
    fp->phys_info.vel_air.y = (((stick_range_y * attributes->jump_height_mul) + attributes->jump_height_base) * attributes->aerial_jump_height);

    if ((fp->ft_kind == nFTKindNess) || (fp->ft_kind == nFTKindPolyNess))
    {
        fp->status_vars.common.jumpaerial.vel_x = stick_range_x * attributes->aerial_jump_vel_x;
    }
    else fp->phys_info.vel_air.x = stick_range_x * attributes->aerial_jump_vel_x;

    fp->jumps_used++;

    fp->tap_stick_y = FTINPUT_STICKBUFFER_FRAMES_MAX;

    fp->is_special_interrupt = TRUE;

    if (((fp->ft_kind == nFTKindYoshi) || (fp->ft_kind == nFTKindPolyYoshi)) && ((fp->input.pl.stick_range.x * fp->lr) < FTCOMMON_JUMPAERIAL_TURN_STICK_RANGE_MIN))
    {
        fp->status_vars.common.jumpaerial.turn_frames = FTCOMMON_JUMPAERIAL_TURN_FRAMES;
    }
    else fp->status_vars.common.jumpaerial.turn_frames = 0;

    ftCommonJumpAerialUpdateModelPitch(fp);
}

// 0x8013FF38
void ftCommonJumpAerialMultiSetStatus(GObj *fighter_gobj, s32 input_source)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    s32 status_id;
    s32 stick_range_x;
    s32 stick_range_y = I_CONTROLLER_RANGE_MAX;

    switch (fp->ft_kind)
    {
    case nFTKindKirby:
    case nFTKindPolyKirby:
        status_id = fp->jumps_used + nFTKirbyStatusJumpAerialF1 - 1;
        break;

    case nFTKindPurin:
    case nFTKindPolyPurin:
        status_id = fp->jumps_used + nFTPurinStatusJumpAerialF1 - 1;
        break;
    }
    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUS_PRESERVE_PLAYERTAG);

    switch (input_source)
    {
    case FTCOMMON_JUMPAERIAL_INPUT_TYPE_BUTTON:
        stick_range_x = fp->input.pl.stick_range.x;
        break;

    case FTCOMMON_JUMPAERIAL_INPUT_TYPE_STICK:
    default:
        stick_range_x = fp->input.pl.stick_range.x;
        break;
    }

    fp->phys_info.vel_air.x = stick_range_x * attributes->aerial_jump_vel_x;

    if (fp->jumps_used == 1)
    {
        fp->phys_info.vel_air.y = (((stick_range_y * attributes->jump_height_mul) + attributes->jump_height_base) * attributes->aerial_jump_height);

        fp->tap_stick_y = FTINPUT_STICKBUFFER_FRAMES_MAX;
    }
    else switch (fp->ft_kind)
    {
    case nFTKindKirby:
    case nFTKindPolyKirby:
        fp->phys_info.vel_air.y = dFTKirbyJumpAerialFVelocities[fp->jumps_used - 2] * (stick_range_y / F_CONTROLLER_RANGE_MAX);

        break;

    case nFTKindPurin:
    case nFTKindPolyPurin:
        fp->phys_info.vel_air.y = dFTPurinJumpAerialFVelocities[fp->jumps_used - 2] * (stick_range_y / F_CONTROLLER_RANGE_MAX);

        break;
    }
    fp->jumps_used++;

    fp->command_vars.flags.flag1 = 0;

    fp->is_special_interrupt = TRUE;

    if ((fp->input.pl.stick_range.x * fp->lr) < FTCOMMON_JUMPAERIAL_TURN_STICK_RANGE_MIN)
    {
        fp->status_vars.common.jumpaerial.turn_frames = FTCOMMON_JUMPAERIAL_TURN_FRAMES;
    }
    else fp->status_vars.common.jumpaerial.turn_frames = 0;

    ftCommonJumpAerialUpdateModelPitch(fp);
}

// 0x8014012C
sb32 ftCommonJumpAerialMultiCheckJumpButtonHold(ftStruct *fp)
{
    if (fp->input.pl.button_hold & (R_CBUTTONS | L_CBUTTONS | D_CBUTTONS | U_CBUTTONS))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80140150
s32 ftCommonJumpAerialMultiGetJumpInputType(ftStruct *fp)
{
    if (fp->input.pl.stick_range.y >= FTCOMMON_JUMPAERIAL_STICK_RANGE_MIN)
    {
        return FTCOMMON_JUMPAERIAL_INPUT_TYPE_STICK;
    }
    else if (ftCommonJumpAerialMultiCheckJumpButtonHold(fp) != FALSE)
    {
        return FTCOMMON_JUMPAERIAL_INPUT_TYPE_BUTTON;
    }
    else return FTCOMMON_JUMPAERIAL_INPUT_TYPE_NONE;
}

// 0x8014019C
sb32 ftCommonJumpAerialCheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 input_source;

    if (ftHammerCheckHoldHammer(fighter_gobj) != FALSE)
    {
        return FALSE;
    }
    else if ((fp->ft_kind == nFTKindKirby) || (fp->ft_kind == nFTKindPolyKirby) || (fp->ft_kind == nFTKindPurin) || (fp->ft_kind == nFTKindPolyPurin))
    {
        if (fp->jumps_used < fp->attributes->jumps_max)
        {
            if (fp->jumps_used == 1)
            {
                input_source = ftCommonKneeBendGetInputTypeCommon(fp);

                if (input_source != FTCOMMON_JUMPAERIAL_INPUT_TYPE_NONE)
                {
                    ftCommonJumpAerialMultiSetStatus(fighter_gobj, input_source);

                    return TRUE;
                }
            }
            else switch (fp->ft_kind)
            {
            case nFTKindKirby:
            case nFTKindPolyKirby:
                if ((fp->status_info.status_id < nFTKirbyStatusJumpAerialF1) || (fp->status_info.status_id > nFTKirbyStatusJumpAerialF5) || (fp->command_vars.flags.flag1 != 0))
                {
                    input_source = ftCommonJumpAerialMultiGetJumpInputType(fp);

                    if (input_source != FTCOMMON_JUMPAERIAL_INPUT_TYPE_NONE)
                    {
                        ftCommonJumpAerialMultiSetStatus(fighter_gobj, input_source);

                        return TRUE;
                    }
                }
                break;

            case nFTKindPurin:
            case nFTKindPolyPurin:
                if ((fp->status_info.status_id < nFTPurinStatusJumpAerialF1) || (fp->status_info.status_id > nFTPurinStatusJumpAerialF5) || (fp->command_vars.flags.flag1 != 0))
                {
                    input_source = ftCommonJumpAerialMultiGetJumpInputType(fp);

                    if (input_source != FTCOMMON_JUMPAERIAL_INPUT_TYPE_NONE)
                    {
                        ftCommonJumpAerialMultiSetStatus(fighter_gobj, input_source);

                        return TRUE;
                    }
                }
                break;
            }
        }
    }
    else
    {
        input_source = ftCommonKneeBendGetInputTypeCommon(fp);

        if ((input_source != FTCOMMON_JUMPAERIAL_INPUT_TYPE_NONE) && (fp->jumps_used < fp->attributes->jumps_max))
        {
            ftCommonJumpAerialSetStatus(fighter_gobj, input_source);

            return TRUE;
        }
    }
    return FALSE;
}
