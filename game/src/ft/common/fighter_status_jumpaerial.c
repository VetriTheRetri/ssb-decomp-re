#include <ft/fighter.h>
#include <ft/chara/ftkirby/ftkirby.h>
#include <ft/chara/ftpurin/ftpurin.h>

// These arrays are strange, Kirby begins at .rodata padding 0x80188578, and index is never zero, but ends up using the correct values regardless???
// If Kirby DOES begin at 0x80188578, that means his array accesses overflow into Jigglypuff's starting at index 0x4

f32 ftKirby_JumpAerialF_VelY[ftStatus_Kirby_JumpAerialF5 - ftStatus_Kirby_JumpAerialF1] = { 60.0F, 52.0F, 47.0F, 40.0F };
f32 ftPurin_JumpAerialF_VelY[ftStatus_Purin_JumpAerialF5 - ftStatus_Purin_JumpAerialF1] = { 60.0F, 40.0F, 20.0F,  0.0F };

// 0x8013FA90
void ftCommon_JumpAerial_UpdateModelYaw(ftStruct *fp)
{
    if (fp->status_vars.common.jumpaerial.turn_frames != 0)
    {
        fp->status_vars.common.jumpaerial.turn_frames--;

        fp->joint[ftParts_TopN_Joint]->rotate.y += FTCOMMON_JUMPAERIAL_TURN_ROTATE_STEP;

        func_ovl2_800EB528(fp->joint[ftParts_TopN_Joint]);

        if (fp->status_vars.common.jumpaerial.turn_frames == (FTCOMMON_JUMPAERIAL_TURN_FRAMES / 2))
        {
            fp->lr = -fp->lr;
        }
    }
}

// 0x8013FB00
void ftCommon_JumpAerial_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_JumpAerial_UpdateModelYaw(fp);
    ftCommon_IfAnimEnd_SetStatusFall(fighter_gobj);
}

// 0x8013FB2C
void ftCommon_JumpAerial_ProcInterrupt(GObj *fighter_gobj)
{
    if ((ftCommon_SpecialAir_CheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommon_AttackAir_CheckInterruptCommon(fighter_gobj) == FALSE))
    {
        ftCommon_JumpAerial_CheckInterruptCommon(fighter_gobj);
    }
}

// 0x8013FB6C
void ftYoshi_JumpAerial_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    jtgt_ovl2_800D9414(fighter_gobj);

    if (func_ovl2_800D8FA8(fp, attributes) == FALSE)
    {
        func_ovl2_800D9044(fp, attributes);
        func_ovl2_800D9074(fp, attributes);
    }
}

// 0x8013FBC4
void ftNess_JumpAerial_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    f32 vel_x;

    func_ovl2_800D9260(fp, &fp->status_vars.common.jumpaerial.drift, &fp->phys_info.vel_air.y, &fp->phys_info.vel_air.z);

    fp->phys_info.vel_air.x = fp->status_vars.common.jumpaerial.vel_x;

    if (func_ovl2_800D8FA8(fp, attributes) == FALSE)
    {
        func_ovl2_800D9044(fp, attributes);
        func_ovl2_800D9074(fp, attributes);
    }
    fp->status_vars.common.jumpaerial.vel_x = fp->phys_info.vel_air.x;

    fp->phys_info.vel_air.x += fp->status_vars.common.jumpaerial.drift;
}

// 0x8013FC4C
void ftCommon_JumpAerial_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    func_ovl2_800D8DB0(fp);

    (fp->is_fast_fall) ? func_ovl2_800D8DA0(fp, attributes) : func_ovl2_800D8E50(fp, attributes);

    switch (fp->ft_kind)
    {
    case Ft_Kind_Kirby:
    case Ft_Kind_PolyKirby:
        if (func_ovl2_800D8FA8(fp, attributes) == FALSE)
        {
            ftPhysics_ClampDriftStickRange(fp, 8, attributes->aerial_acceleration * FTKIRBY_JUMPAERIAL_VEL_MUL, attributes->aerial_speed_max_x * FTKIRBY_JUMPAERIAL_VEL_MUL);
        }
        break;

    case Ft_Kind_Purin:
    case Ft_Kind_PolyPurin:
        if (func_ovl2_800D8FA8(fp, attributes) == FALSE)
        {
            ftPhysics_ClampDriftStickRange(fp, 8, attributes->aerial_acceleration * FTPURIN_JUMPAERIAL_VEL_MUL, attributes->aerial_speed_max_x * FTPURIN_JUMPAERIAL_VEL_MUL);
        }
        break;
    }
    func_ovl2_800D9074(fp, attributes);
}

// 0x8013FD74
void ftCommon_JumpAerial_SetStatus(GObj *fighter_gobj, s32 input_source)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    s32 status_id = ((fp->input.pl.stick_range.x * fp->lr) >= FTCOMMON_JUMPAERIAL_F_OR_B_RANGE) ? ftStatus_Common_JumpAerialF : ftStatus_Common_JumpAerialB;
    s32 stick_range_y = GCONTROLLER_RANGE_MAX_I;
    s32 stick_range_x;

    // It would seem that the stick range jump mechanic was initially considered for double jumps as well...

    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_PLAYERTAG_PRESERVE);

    if ((fp->ft_kind == Ft_Kind_Yoshi) || (fp->ft_kind == Ft_Kind_PolyYoshi))
    {
        fp->proc_physics = ftYoshi_JumpAerial_ProcPhysics;
        fp->knockback_resist_status = FTYOSHI_JUMPAERIAL_KNOCKBACK_RESIST;
    }
    else if ((fp->ft_kind == Ft_Kind_Ness) || (fp->ft_kind == Ft_Kind_PolyNess))
    {
        fp->proc_physics = ftNess_JumpAerial_ProcPhysics;
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

    if ((fp->ft_kind == Ft_Kind_Ness) || (fp->ft_kind == Ft_Kind_PolyNess))
    {
        fp->status_vars.common.jumpaerial.vel_x = stick_range_x * attributes->aerial_jump_vel_x;
    }
    else fp->phys_info.vel_air.x = stick_range_x * attributes->aerial_jump_vel_x;

    fp->jumps_used++;

    fp->tap_stick_y = U8_MAX - 1;

    fp->x192_flag_b0 = TRUE;

    if (((fp->ft_kind == Ft_Kind_Yoshi) || (fp->ft_kind == Ft_Kind_PolyYoshi)) && ((fp->input.pl.stick_range.x * fp->lr) < FTCOMMON_JUMPAERIAL_TURN_STICK_RANGE_MIN))
    {
        fp->status_vars.common.jumpaerial.turn_frames = FTCOMMON_JUMPAERIAL_TURN_FRAMES;
    }
    else fp->status_vars.common.jumpaerial.turn_frames = 0;

    ftCommon_JumpAerial_UpdateModelYaw(fp);
}

// 0x8013FF38
void ftCommon_JumpAerialMulti_SetStatus(GObj *fighter_gobj, s32 input_source)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    s32 status_id;
    s32 stick_range_x;
    s32 stick_range_y = GCONTROLLER_RANGE_MAX_I;

    switch (fp->ft_kind)
    {
    case Ft_Kind_Kirby:
    case Ft_Kind_PolyKirby:
        status_id = fp->jumps_used + ftStatus_Kirby_JumpAerialF1 - 1;
        break;

    case Ft_Kind_Purin:
    case Ft_Kind_PolyPurin:
        status_id = fp->jumps_used + ftStatus_Purin_JumpAerialF1 - 1;
        break;
    }
    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_PLAYERTAG_PRESERVE);

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

        fp->tap_stick_y = U8_MAX - 1;
    }
    else switch (fp->ft_kind)
    {
    case Ft_Kind_Kirby:
    case Ft_Kind_PolyKirby:
        fp->phys_info.vel_air.y = ftKirby_JumpAerialF_VelY[fp->jumps_used - 2] * (stick_range_y / GCONTROLLER_RANGE_MAX_F);

        break;

    case Ft_Kind_Purin:
    case Ft_Kind_PolyPurin:
        fp->phys_info.vel_air.y = ftPurin_JumpAerialF_VelY[fp->jumps_used - 2] * (stick_range_y / GCONTROLLER_RANGE_MAX_F);

        break;
    }
    fp->jumps_used++;

    fp->command_vars.flags.flag1 = 0;

    fp->x192_flag_b0 = TRUE;

    if ((fp->input.pl.stick_range.x * fp->lr) < FTCOMMON_JUMPAERIAL_TURN_STICK_RANGE_MIN)
    {
        fp->status_vars.common.jumpaerial.turn_frames = FTCOMMON_JUMPAERIAL_TURN_FRAMES;
    }
    else fp->status_vars.common.jumpaerial.turn_frames = 0;

    ftCommon_JumpAerial_UpdateModelYaw(fp);
}

// 0x8014012C
bool32 ftCommon_JumpAerialMulti_CheckJumpButtonHold(ftStruct *fp)
{
    if (fp->input.pl.button_hold & (HAL_BUTTON_C_RIGHT | HAL_BUTTON_C_LEFT | HAL_BUTTON_C_DOWN | HAL_BUTTON_C_UP))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80140150
s32 ftCommon_JumpAerialMulti_GetJumpInputType(ftStruct *fp)
{
    if (fp->input.pl.stick_range.y >= FTCOMMON_JUMPAERIAL_STICK_RANGE_MIN)
    {
        return FTCOMMON_JUMPAERIAL_INPUT_TYPE_STICK;
    }
    else if (ftCommon_JumpAerialMulti_CheckJumpButtonHold(fp) != FALSE)
    {
        return FTCOMMON_JUMPAERIAL_INPUT_TYPE_BUTTON;
    }
    else return FTCOMMON_JUMPAERIAL_INPUT_TYPE_NONE;
}

// 0x8014019C
bool32 ftCommon_JumpAerial_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 input_source;

    if (ftCommon_HammerCheckHold(fighter_gobj) != FALSE)
    {
        return FALSE;
    }
    else if ((fp->ft_kind == Ft_Kind_Kirby) || (fp->ft_kind == Ft_Kind_PolyKirby) || (fp->ft_kind == Ft_Kind_Purin) || (fp->ft_kind == Ft_Kind_PolyPurin))
    {
        if (fp->jumps_used < fp->attributes->jumps_max)
        {
            if (fp->jumps_used == 1)
            {
                input_source = ftCommon_KneeBend_GetInputTypeCommon(fp);

                if (input_source != FTCOMMON_JUMPAERIAL_INPUT_TYPE_NONE)
                {
                    ftCommon_JumpAerialMulti_SetStatus(fighter_gobj, input_source);

                    return TRUE;
                }
            }
            else switch (fp->ft_kind)
            {
            case Ft_Kind_Kirby:
            case Ft_Kind_PolyKirby:
                if ((fp->status_info.status_id < ftStatus_Kirby_JumpAerialF1) || (fp->status_info.status_id > ftStatus_Kirby_JumpAerialF5) || (fp->command_vars.flags.flag1 != 0))
                {
                    input_source = ftCommon_JumpAerialMulti_GetJumpInputType(fp);

                    if (input_source != FTCOMMON_JUMPAERIAL_INPUT_TYPE_NONE)
                    {
                        ftCommon_JumpAerialMulti_SetStatus(fighter_gobj, input_source);

                        return TRUE;
                    }
                }
                break;

            case Ft_Kind_Purin:
            case Ft_Kind_PolyPurin:
                if ((fp->status_info.status_id < ftStatus_Purin_JumpAerialF1) || (fp->status_info.status_id > ftStatus_Purin_JumpAerialF5) || (fp->command_vars.flags.flag1 != 0))
                {
                    input_source = ftCommon_JumpAerialMulti_GetJumpInputType(fp);

                    if (input_source != FTCOMMON_JUMPAERIAL_INPUT_TYPE_NONE)
                    {
                        ftCommon_JumpAerialMulti_SetStatus(fighter_gobj, input_source);

                        return TRUE;
                    }
                }
                break;
            }
        }
    }
    else
    {
        input_source = ftCommon_KneeBend_GetInputTypeCommon(fp);

        if ((input_source != FTCOMMON_JUMPAERIAL_INPUT_TYPE_NONE) && (fp->jumps_used < fp->attributes->jumps_max))
        {
            ftCommon_JumpAerial_SetStatus(fighter_gobj, input_source);

            return TRUE;
        }
    }
    return FALSE;
}
