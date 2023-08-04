#include <ft/fighter.h>
#include <ft/chara/ftdonkey/ftdonkey.h>
#include <it/item.h>

// 0x801462A0
void ftCommon_ItemThrow_UpdateModelYaw(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag3 != 0)
    {
        fp->status_vars.common.itemthrow.turn_rotate_step =
        fp->status_vars.common.itemthrow.turn_frames = fp->command_vars.flags.flag3;

        fp->status_vars.common.itemthrow.turn_invert_lr_wait = fp->command_vars.flags.flag3 / 2;

        fp->command_vars.flags.flag3 = 0;
    }

    if (fp->status_vars.common.itemthrow.turn_frames != 0)
    {
        fp->status_vars.common.itemthrow.turn_frames--;

        if (fp->status_vars.common.itemthrow.turn_invert_lr_wait != 0)
        {
            fp->status_vars.common.itemthrow.turn_invert_lr_wait--;

            if (fp->status_vars.common.itemthrow.turn_invert_lr_wait == 0)
            {
                fp->lr = -fp->lr;
            }
        }
        fp->joint[ftParts_TopN_Joint]->rotate.y -= F_DEG_TO_RAD(180.0F / fp->status_vars.common.itemthrow.turn_rotate_step);

        func_ovl2_800EB528(fp->joint[ftParts_TopN_Joint]);
    }
}

extern ftItemThrow Fighter_ItemThrow_Desc[ftStatus_Common_SpecialStart];

// 0x8014634C
void ftCommon_ItemThrow_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 vel_base;
    ftItemThrow *item_throw_desc;
    f32 damage_mul;
    Vec3f vel;
    s32 status_id;
    s32 angle;

    ftCommon_ItemThrow_UpdateModelYaw(fighter_gobj);

    if (fp->command_vars.flags.flag2 != 0)
    {
        fp->status_vars.common.itemthrow.throw_vel = fp->command_vars.item_throw.vel * 0.01F;
        fp->status_vars.common.itemthrow.throw_angle = fp->command_vars.item_throw.angle;

        fp->command_vars.flags.flag2 = 0;
    }
    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->status_vars.common.itemthrow.throw_damage = fp->command_vars.item_throw.damage * 0.01F;

        fp->command_vars.flags.flag1 = 0;
    }
    if ((fp->item_hold != NULL) && (fp->command_vars.item_throw.is_throw_item != FALSE))
    {
        if 
        (

            (fp->ft_kind == Ft_Kind_Donkey || fp->ft_kind == Ft_Kind_PolyDonkey || fp->ft_kind == Ft_Kind_GiantDonkey)

                                                                      &&

            (fp->status_info.status_id >= ftStatus_Donkey_HeavyThrowF && fp->status_info.status_id <= ftStatus_Donkey_HeavyThrowB4)

        )
        {
            status_id = fp->status_info.status_id - ftStatus_Common_HeavyThrowF4;
        }
        else status_id = fp->status_info.status_id;

        vel_base = Fighter_ItemThrow_Desc[status_id - ftStatus_Common_LightThrowDrop].velocity * fp->status_vars.common.itemthrow.throw_vel * fp->attributes->item_throw_vel * 0.01F;

        if (fp->status_vars.common.itemthrow.throw_angle == 361)
        {
            angle = Fighter_ItemThrow_Desc[status_id - ftStatus_Common_LightThrowDrop].angle;
        }
        else angle = fp->status_vars.common.itemthrow.throw_angle;

        damage_mul = Fighter_ItemThrow_Desc[status_id - ftStatus_Common_LightThrowDrop].damage * 0.01F * fp->status_vars.common.itemthrow.throw_damage * fp->attributes->item_throw_mul * 0.01F;

        vel.x = cosf(F_DEG_TO_RAD(angle)) * vel_base * fp->lr;
        vel.y = __sinf(F_DEG_TO_RAD(angle)) * vel_base;
        vel.z = 0.0F;

        if (status_id == ftStatus_Common_LightThrowDrop)
        {
            itMain_SetFighterDrop(fp->item_hold, &vel, damage_mul);
        }
        else itMain_SetFighterThrow(fp->item_hold, &vel, damage_mul, Fighter_ItemThrow_Desc[status_id - ftStatus_Common_LightThrowDrop].is_smash_throw);

        fp->command_vars.flags.flag0 = 0;
    }
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        func_ovl2_800DEE54(fighter_gobj);
    }
}

// 0x80146618
void ftCommon_ItemThrow_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        jtgt_ovl2_800D90E0(fighter_gobj);
    }
    else func_ovl2_800D8BB4(fighter_gobj);
}

// 0x8014665C
void ftCommon_ItemThrow_InitCommandVars(ftStruct *fp)
{
    fp->command_vars.flags.flag0 = 0;
    fp->command_vars.flags.flag1 = 0;
    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag3 = 0;
}

// 0x80146670
void ftCommon_ItemThrow_InitStatusVars(ftStruct *fp)
{
    fp->status_vars.common.itemthrow.turn_frames = 0;
    fp->status_vars.common.itemthrow.throw_angle = 361;
    fp->status_vars.common.itemthrow.throw_vel = 1.0F;
    fp->status_vars.common.itemthrow.throw_damage = 1.0F;
}

// 0x80146690
void ftCommon_ItemThrow_SetStatus(GObj *fighter_gobj, s32 status_id)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_ItemThrow_InitCommandVars(fp);

    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    ftCommon_ItemThrow_InitStatusVars(fp);
    ftCommon_ItemThrow_UpdateModelYaw(fighter_gobj);
}

// 0x801466EC
void ftCommon_LightThrow_DecideSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    if ((ABS(fp->input.pl.stick_range.x) >= FTCOMMON_LIGHTTHROW4_STICK_RANGE_X_MIN) && (fp->hold_stick_x < FTCOMMON_LIGHTTHROW4_F_OR_B_BUFFER_FRAMES_MAX))
    {
        status_id = ((fp->input.pl.stick_range.x * fp->lr) >= 0) ? ftStatus_Common_LightThrowF4 : ftStatus_Common_LightThrowB4;
    }
    else if ((fp->input.pl.stick_range.y >= FTCOMMON_LIGHTTHROW4_STICK_RANGE_Y_MIN) && (fp->hold_stick_y < (FTCOMMON_LIGHTTHROW4_HI_OR_LW_BUFFER_FRAMES_MAX + fp->attributes->kneebend_frames)))
    {
        status_id = ftStatus_Common_LightThrowHi4;
    }
    else if ((fp->input.pl.stick_range.y <= -FTCOMMON_LIGHTTHROW4_STICK_RANGE_Y_MIN) && (fp->hold_stick_y < FTCOMMON_LIGHTTHROW4_HI_OR_LW_BUFFER_FRAMES_MAX))
    {
        status_id = ftStatus_Common_LightThrowLw4;
    }
    else if ((ABS(fp->input.pl.stick_range.x) >= FTCOMMON_LIGHTTHROW_STICK_RANGE_XY_MIN) && (((ftCommon_GetStickAngleRadians(fp) < 0.0F) ? -ftCommon_GetStickAngleRadians(fp) : ftCommon_GetStickAngleRadians(fp)) <= FTCOMMON_LIGHTTHROW_HI_OR_LW_ANGLE))
    {
        status_id = ((fp->input.pl.stick_range.x * fp->lr) >= 0) ? ftStatus_Common_LightThrowF : ftStatus_Common_LightThrowB;
    }
    else if ((fp->input.pl.stick_range.y >= FTCOMMON_LIGHTTHROW_STICK_RANGE_XY_MIN) && (ftCommon_GetStickAngleRadians(fp) > FTCOMMON_LIGHTTHROW_HI_OR_LW_ANGLE))
    {
        status_id = ftStatus_Common_LightThrowHi;
    }
    else if ((fp->input.pl.stick_range.y <= -FTCOMMON_LIGHTTHROW_STICK_RANGE_XY_MIN) && (ftCommon_GetStickAngleRadians(fp) < -FTCOMMON_LIGHTTHROW_HI_OR_LW_ANGLE))
    {
        status_id = ftStatus_Common_LightThrowLw; 
    }
    else status_id = (itGetStruct(fp->item_hold)->type == It_Type_Throw) ? ftStatus_Common_LightThrowF : ftStatus_Common_LightThrowDrop; // No NULL check

    ftCommon_ItemThrow_SetStatus(fighter_gobj, status_id);
}

// 0x80146930
void ftCommon_HeavyThrow_DecideSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    if ((ABS(fp->input.pl.stick_range.x) >= FTCOMMON_HEAVYTHROW4_STICK_RANGE_X_MIN) && (fp->hold_stick_x < FTCOMMON_HEAVYTHROW4_F_OR_B_BUFFER_FRAMES_MAX))
    {
        status_id = ((fp->input.pl.stick_range.x * fp->lr) >= 0) ? ftStatus_Common_HeavyThrowF4 : ftStatus_Common_HeavyThrowB4;
    }
    else if (((ABS(fp->input.pl.stick_range.x) >= FTCOMMON_HEAVYTHROW_STICK_RANGE_XY_MIN) && ((ftCommon_GetStickAngleRadians(fp) < 0.0F) ? -ftCommon_GetStickAngleRadians(fp) : ftCommon_GetStickAngleRadians(fp)) <= FTCOMMON_HEAVYTHROW_HI_OR_LW_ANGLE))
    {
        status_id = ((fp->input.pl.stick_range.x * fp->lr) >= 0) ? ftStatus_Common_HeavyThrowF : ftStatus_Common_HeavyThrowB;
    }
    else status_id = ftStatus_Common_HeavyThrowF;

    if ((fp->ft_kind == Ft_Kind_Donkey) || (fp->ft_kind == Ft_Kind_PolyDonkey) || (fp->ft_kind == Ft_Kind_GiantDonkey))
    {
        status_id += ftStatus_Common_HeavyThrowF4;
    }
    ftCommon_ItemThrow_SetStatus(fighter_gobj, status_id);

    fp->proc_damage = ftCommon_Get_DropItem;
}

// 0x80146A8C
bool32 ftCommon_LightThrow_CheckItemTypeThrow(ftStruct *fp)
{
    if (fp->item_hold != NULL)
    {
        if (fp->input.pl.button_tap & fp->input.button_mask_a)
        {
            if ((fp->input.pl.button_hold & fp->input.button_mask_z) || (itGetStruct(fp->item_hold)->type == It_Type_Throw))
            {
                return TRUE;
            }
        }
    }
    return FALSE;
}

// 0x80146AE8
bool32 ftCommon_LightThrow_CheckInterruptGuard(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->item_hold != NULL) && (fp->input.pl.button_tap & fp->input.button_mask_a))
    {
        if (fp->status_vars.common.itemthrow.throw_wait != 0)
        {
            ftCommon_ItemThrow_SetStatus(fighter_gobj, ftStatus_Common_LightThrowDash);

            return TRUE;
        }
        else ftCommon_LightThrow_DecideSetStatus(fighter_gobj);

        return TRUE;
    }
    if (fp->status_vars.common.itemthrow.throw_wait != 0)
    {
        fp->status_vars.common.itemthrow.throw_wait--;
    }
    return FALSE;
}

// 0x80146B64
bool32 ftCommon_LightThrow_CheckInterruptEscape(GObj *fighter_gobj) // Interrupt item throw from roll
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    if ((ftCommon_LightThrow_CheckItemTypeThrow(fp) != FALSE) && (fp->status_vars.common.itemthrow.turn_rotate_step != 0)) // Might be a different var? Not sure, this is just LightThrow again
    {
        if (fp->status_info.status_id == ftStatus_Common_EscapeF)
        {
            status_id = ftStatus_Common_LightThrowF4;
        }
        else status_id = ftStatus_Common_LightThrowB4;

        ftCommon_ItemThrow_SetStatus(fighter_gobj, status_id);

        return TRUE;
    }
    if (fp->status_vars.common.itemthrow.turn_rotate_step != 0)
    {
        fp->status_vars.common.itemthrow.turn_rotate_step--;
    }
    return FALSE;
}

// 0x80146BE0
bool32 ftCommon_LightThrow_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->item_hold != NULL) && (fp->input.pl.button_tap & (fp->input.button_mask_a | fp->input.button_mask_b)))
    {
        ftCommon_HeavyThrow_DecideSetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}