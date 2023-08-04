#include <ft/fighter.h>
#include <it/item.h>

// 0x8014FE40
void ftCommon_AttackS4_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f offset;

    switch (fp->ft_kind)
    {
    case Ft_Kind_Pikachu:
    case Ft_Kind_PolyPikachu:
        if ((fp->command_vars.flags.flag1 != 0) || (fp->command_vars.flags.flag2 != 0))
        {
            fp->status_vars.common.attack4.gfx_id += lbRandom_GetIntRange((FTCOMMON_ATTACKS4_THUNDERSHOCK_GFX_ID_MAX - 1)) + 1;

            if (fp->status_vars.common.attack4.gfx_id >= FTCOMMON_ATTACKS4_THUNDERSHOCK_GFX_ID_MAX)
            {
                fp->status_vars.common.attack4.gfx_id -= FTCOMMON_ATTACKS4_THUNDERSHOCK_GFX_ID_MAX;
            }
            if (fp->command_vars.flags.flag1 != 0)
            {
                fp->command_vars.flags.flag1 = 0;

                offset.x = -FTCOMMON_ATTACKS4_THUNDERSHOCK_GFX_OFF_X;
                offset.z = FTCOMMON_ATTACKS4_THUNDERSHOCK_GFX_OFF_Z;
                offset.y = FTCOMMON_ATTACKS4_THUNDERSHOCK_GFX_OFF_Y;
            }
            if (fp->command_vars.flags.flag2 != 0)
            {
                fp->command_vars.flags.flag2 = 0;

                offset.x = FTCOMMON_ATTACKS4_THUNDERSHOCK_GFX_OFF_X;
                offset.z = FTCOMMON_ATTACKS4_THUNDERSHOCK_GFX_OFF_Z;
                offset.y = FTCOMMON_ATTACKS4_THUNDERSHOCK_GFX_OFF_Y;

            }
            func_ovl2_800EDF24(fp->joint[11], &offset);
            func_ovl2_800EE018(fp->joint[ftParts_TopN_Joint], &offset);

            if (efParticle_ThunderShock_MakeEffect(fighter_gobj, &offset, fp->status_vars.common.attack4.gfx_id) != NULL)
            {
                fp->is_persist_effect = TRUE;
            }
        }
        // Fallthrough, should break here for efficiency
    case Ft_Kind_Ness:
    case Ft_Kind_PolyNess:
        if ((fp->command_vars.flags.flag1 != 0) && !(fp->is_reflect))
        {
            fp->is_reflect = TRUE;
        }
        if ((fp->command_vars.flags.flag1 == 0) && (fp->is_reflect))
        {
            fp->is_reflect = FALSE;
        }
        break;
    }
    ftCommon_IfAnimEnd_SetStatusWait(fighter_gobj);
}

extern intptr_t ftNess_AttackS4_ftSpecialHit; // 0x00001114
extern void *D_ovl2_80131134;               // Pointer to Ness' file?

// 0x8014FFE0
void ftCommon_AttackS4_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 stick_angle;
    s32 status_id;

    if (fp->ft_data->script1->script_info[0xB2].anim_id != 0)
    {
        stick_angle = ftCommon_GetStickAngleRadians(fp);

        status_id = (stick_angle > FTCOMMON_ATTACKS4_5ANGLE_HI_MIN)  ? ftStatus_Common_AttackS4Hi  :
                    (stick_angle > FTCOMMON_ATTACKS4_5ANGLE_HIS_MIN) ? ftStatus_Common_AttackS4HiS :
                    (stick_angle < FTCOMMON_ATTACKS4_5ANGLE_LW_MIN)  ? ftStatus_Common_AttackS4Lw  :
                    (stick_angle < FTCOMMON_ATTACKS4_5ANGLE_LWS_MIN) ? ftStatus_Common_AttackS4LwS :
                                                                       ftStatus_Common_AttackS4;
    }
    else if (fp->ft_data->script1->script_info[0xB1].anim_id != 0)
    {
        stick_angle = ftCommon_GetStickAngleRadians(fp);

        status_id = (stick_angle > FTCOMMON_ATTACKS4_3ANGLE_HI_MIN)  ? ftStatus_Common_AttackS4Hi  :
                    (stick_angle < FTCOMMON_ATTACKS4_3ANGLE_LW_MIN)  ? ftStatus_Common_AttackS4Lw  :
                                                                       ftStatus_Common_AttackS4;
    }
    else status_id = ftStatus_Common_AttackS4;

    switch (fp->ft_kind)
    {
    case Ft_Kind_Pikachu:
    case Ft_Kind_PolyPikachu:
        fp->command_vars.flags.flag2 = 0;
        fp->command_vars.flags.flag1 = 0;
        break;

    case Ft_Kind_Ness:
    case Ft_Kind_PolyNess:
        fp->command_vars.flags.flag1 = 0;
        break;
    }
    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    switch (fp->ft_kind)
    {
    case Ft_Kind_Pikachu:
    case Ft_Kind_PolyPikachu:
        fp->status_vars.common.attack4.gfx_id = 0;

        fp->proc_lagstart = ftCommon_ProcPauseGFX;
        fp->proc_lagend = ftCommon_ProcResumeGFX;
        break;

    case Ft_Kind_Ness:
    case Ft_Kind_PolyNess:
        fp->special_hit = (ftSpecialHit*) ((uintptr_t)D_ovl2_80131134 + (intptr_t)&ftNess_AttackS4_ftSpecialHit); // Linker thing
        break;
    }
}

// 0x801501E0
bool32 ftCommon_AttackS4_CheckInterruptDash(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (((fp->input.pl.stick_range.x * fp->lr) >= FTCOMMON_ATTACKS4_STICK_RANGE_MIN) && (fp->input.pl.button_tap & fp->input.button_mask_a))
    {
        GObj *item_gobj = fp->item_hold;

        if (item_gobj != NULL)
        {
            itStruct *ap = itGetStruct(item_gobj);

            if ((fp->input.pl.button_hold & fp->input.button_mask_z) || ((ap->type == It_Type_Throw) || (ap->type == It_Type_Shoot) && (itMain_CheckShootNoAmmo(item_gobj) != FALSE)))
            {
                ftCommon_ItemThrow_SetStatus(fighter_gobj, ftStatus_Common_LightThrowF4);

                return TRUE;
            }
            switch (ap->type)
            {
            case It_Type_Swing:
                ftCommon_ItemSwing_SetStatus(fighter_gobj, 2);
                return TRUE;

            case It_Type_Shoot:
                ftCommon_ItemShoot_SetStatus(fighter_gobj);
                return TRUE;
            }
        }
        if (attributes->is_have_attacks4)
        {
            ftCommon_AttackS4_SetStatus(fighter_gobj);

            return TRUE;
        }
    }
    return FALSE;
}

// 0x8015030C
bool32 ftCommon_AttackS4_CheckInterruptTurn(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (((fp->input.pl.stick_range.x * fp->status_vars.common.attack4.lr) >= FTCOMMON_ATTACKS4_STICK_RANGE_MIN) && (fp->input.pl.button_tap & fp->input.button_mask_a))
    {
        GObj *item_gobj = fp->item_hold;

        if (item_gobj != NULL)
        {
            itStruct *ap = itGetStruct(item_gobj);

            if ((fp->input.pl.button_hold & fp->input.button_mask_z) || ((ap->type == It_Type_Throw) || (ap->type == It_Type_Shoot) && (itMain_CheckShootNoAmmo(item_gobj) != FALSE)))
            {
                ftCommon_ItemThrow_SetStatus(fighter_gobj, ((fp->input.pl.stick_range.x * fp->lr) >= 0) ? ftStatus_Common_LightThrowF4 : ftStatus_Common_LightThrowB4);

                return TRUE;
            }
            switch (ap->type)
            {
            case It_Type_Swing:
                ftCommon_StickInputSetLR(fp);
                ftCommon_ItemSwing_SetStatus(fighter_gobj, 2);
                return TRUE;

            case It_Type_Shoot:
                ftCommon_StickInputSetLR(fp);
                ftCommon_ItemShoot_SetStatus(fighter_gobj);
                return TRUE;
            }
        }
        if (attributes->is_have_attacks4)
        {
            ftCommon_StickInputSetLR(fp);
            ftCommon_AttackS4_SetStatus(fighter_gobj);

            return TRUE;
        }
    }
    return FALSE;
}

// 0x80150470
bool32 ftCommon_AttackS4_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if ((ABS(fp->input.pl.stick_range.x) >= FTCOMMON_ATTACKS4_STICK_RANGE_MIN) && (fp->tap_stick_x < FTCOMMON_ATTACKS4_BUFFER_FRAMES_MAX) && (fp->input.pl.button_tap & fp->input.button_mask_a))
    {
        GObj *item_gobj = fp->item_hold;

        if (item_gobj != NULL)
        {
            itStruct *ap = itGetStruct(item_gobj);

            if ((fp->input.pl.button_hold & fp->input.button_mask_z) || ((ap->type == It_Type_Throw) || (ap->type == It_Type_Shoot) && (itMain_CheckShootNoAmmo(item_gobj) != FALSE)))
            {
                ftCommon_ItemThrow_SetStatus(fighter_gobj, ((fp->input.pl.stick_range.x * fp->lr) >= 0) ? ftStatus_Common_LightThrowF4 : ftStatus_Common_LightThrowB4);

                return TRUE;
            }
            switch (ap->type)
            {
            case It_Type_Swing:
                ftCommon_StickInputSetLR(fp);
                ftCommon_ItemSwing_SetStatus(fighter_gobj, 2);
                return TRUE;

            case It_Type_Shoot:
                ftCommon_StickInputSetLR(fp);
                ftCommon_ItemShoot_SetStatus(fighter_gobj);
                return TRUE;
            }
        }
        if (attributes->is_have_attacks4)
        {
            ftCommon_StickInputSetLR(fp);
            ftCommon_AttackS4_SetStatus(fighter_gobj);

            return TRUE;
        }
    }
    return FALSE;
}