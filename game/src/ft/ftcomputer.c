#include <ft/fighter.h>
#include <wp/weapon.h>
#include <it/item.h>
#include <gr/ground.h>
#include <gm/battle.h>

// 0x80131B00
wpStruct* ftComputerGetOwnWeapon(ftStruct *fp)
{
    GObj *weapon_gobj = gOMObjCommonLinks[GObj_LinkID_Weapon];

    while (weapon_gobj != NULL)
    {
        wpStruct *wp = wpGetStruct(weapon_gobj);

        if (wp->owner_gobj == fp->fighter_gobj)
        {
            return wp;
        }
        weapon_gobj = weapon_gobj->link_next;
    }
    return NULL;
}

// 0x80131B44
Vec3f* ftComputerGetWeaponPositionKind(ftStruct *fp, s32 wp_kind)
{
    GObj *weapon_gobj = gOMObjCommonLinks[GObj_LinkID_Weapon];

    while (weapon_gobj != NULL)
    {
        wpStruct *wp = wpGetStruct(weapon_gobj);

        if ((wp->owner_gobj == fp->fighter_gobj) && (wp->wp_kind == wp_kind))
        {
            return &DObjGetStruct(wp->weapon_gobj)->translate.vec.f;
        }
        weapon_gobj = weapon_gobj->link_next;
    }
    return NULL;
}

// 0x80131BA0
void ftComputerSetControlPKThunder(ftStruct *fp)
{
    Vec3f *pos = ftComputerGetWeaponPositionKind(fp, Wp_Kind_PKThunderTrail);
    ftComputer *ft_com = &fp->fighter_com;

    if (pos != NULL)
    {
        f32 dist_x = ft_com->target_pos.x - pos->x;
        f32 dist_y = ft_com->target_pos.y - pos->y;

        f32 scale = 1.0F / sqrtf(SQUARE(dist_x) + SQUARE(dist_y));

        fp->input.cp.stick_range.x = (F_CONTROLLER_RANGE_MAX * dist_x * scale);
        fp->input.cp.stick_range.y = (F_CONTROLLER_RANGE_MAX * dist_y * scale);
    }
    else
    {
        fp->input.cp.stick_range.x = 0;
        fp->input.cp.stick_range.y = 0;
    }
}

// 0x80131C68
void ftComputerUpdateInputs(ftStruct *this_fp)
{
    ftComputer *ft_com = &this_fp->fighter_com;
    u8 *p_command;
    u8 command;
    s8 var_t1;
    s16 stick_range_y;
    s16 stick_range_x;
    f32 dist_x;
    f32 dist_y;

    if (ft_com->input_wait != 0)
    {
        ft_com->input_wait--;

        if (ft_com->input_wait == 0)
        {
            p_command = ft_com->p_command;

            while (ft_com->input_wait == 0)
            {
                command = *p_command++;

                if (command < FTCOMPUTER_COMMAND_DEFAULT_MAX)
                {
                    ft_com->input_wait = command & 0xF;

                    switch (command & FTCOMPUTER_COMMAND_DEFAULT_MAX)
                    {
                    case FTCOMPUTER_COMMAND_BUTTON_A_PRESS:
                        this_fp->input.cp.button_inputs |= A_BUTTON;
                        break;

                    case FTCOMPUTER_COMMAND_BUTTON_A_RELEASE:
                        this_fp->input.cp.button_inputs &= ~A_BUTTON;
                        break;

                    case FTCOMPUTER_COMMAND_BUTTON_B_PRESS:
                        this_fp->input.cp.button_inputs |= B_BUTTON;
                        break;

                    case FTCOMPUTER_COMMAND_BUTTON_B_RELEASE:
                        this_fp->input.cp.button_inputs &= ~B_BUTTON;
                        break;

                    case FTCOMPUTER_COMMAND_BUTTON_Z_PRESS:
                        this_fp->input.cp.button_inputs |= Z_TRIG;
                        break;

                    case FTCOMPUTER_COMMAND_BUTTON_Z_RELEASE:
                        this_fp->input.cp.button_inputs &= ~Z_TRIG;
                        break;

                    case FTCOMPUTER_COMMAND_BUTTON_L_PRESS:
                        this_fp->input.cp.button_inputs |= L_TRIG;
                        break;

                    case FTCOMPUTER_COMMAND_BUTTON_L_RELEASE:
                        this_fp->input.cp.button_inputs &= ~L_TRIG;
                        break;

                    case FTCOMPUTER_COMMAND_BUTTON_START_PRESS:
                        this_fp->input.cp.button_inputs |= START_BUTTON;
                        break;

                    case FTCOMPUTER_COMMAND_BUTTON_START_RELEASE:
                        this_fp->input.cp.button_inputs &= ~START_BUTTON;
                        break;

                    case FTCOMPUTER_COMMAND_STICK_X_TILT:
                        switch (*p_command)
                        {
                        default:
                            this_fp->input.cp.stick_range.x = *p_command++;
                            break;

                        case 0x7FU:
                            this_fp->input.cp.stick_range.x = (this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x < ft_com->target_pos.x) ? (I_CONTROLLER_RANGE_MAX) : -(I_CONTROLLER_RANGE_MAX);
                            p_command++;
                            break;

                        case 0x80U:
                            this_fp->input.cp.stick_range.x = (this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x < ft_com->target_pos.x) ? (I_CONTROLLER_RANGE_MAX / 2) : -(I_CONTROLLER_RANGE_MAX / 2);
                            p_command++;
                            break;
                        }
                        break;

                    case FTCOMPUTER_COMMAND_STICK_Y_TILT:
                        switch (*p_command)
                        {
                        default:
                            this_fp->input.cp.stick_range.y = *p_command++;
                            break;

                        case 0x7FU:
                            this_fp->input.cp.stick_range.y = (this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y < ft_com->target_pos.y) ? (I_CONTROLLER_RANGE_MAX) : -(I_CONTROLLER_RANGE_MAX);
                            p_command++;
                            break;

                        case 0x80U:
                            this_fp->input.cp.stick_range.y = (this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y < ft_com->target_pos.y) ? (I_CONTROLLER_RANGE_MAX / 2) : -(I_CONTROLLER_RANGE_MAX / 2);
                            p_command++;
                            break;
                        }
                        break;

                    case FTCOMPUTER_COMMAND_FOXSPECIALHI:
                        dist_x = ft_com->target_pos.x - this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;
                        dist_y = ft_com->target_pos.y - this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;

                        if ((this_fp->ground_or_air == GA_Ground) && (this_fp->cp_level < 5))
                        {
                            stick_range_x = (ABSF(dist_x) > 100.0F) ? (I_CONTROLLER_RANGE_MAX / 2) : 0;
                        }
                        else if (this_fp->ground_or_air == GA_Ground)
                        {
                            if ((ft_com->unk_ftcom_0x8C * 1.5F) < ABSF(dist_x))
                            {
                                stick_range_x = (I_CONTROLLER_RANGE_MAX);
                            }
                            else
                            {
                                if (ft_com->unk_ftcom_0x8C < ABSF(dist_x))
                                {
                                    stick_range_x = ((2.0F * ((ABSF(dist_x) - ft_com->unk_ftcom_0x8C) / ft_com->unk_ftcom_0x8C) * (F_CONTROLLER_RANGE_MAX / 2)) + (F_CONTROLLER_RANGE_MAX / 2));
                                }
                                else
                                {
                                    stick_range_x = (ABSF(dist_x) > 100.0F) ? (I_CONTROLLER_RANGE_MAX / 2) : 0;
                                }
                            }
                        }
                        else
                        {
                            stick_range_x = ((ABSF(dist_x) > 100.0F) || ((this_fp->lr * dist_x) < 0.0F)) ? (I_CONTROLLER_RANGE_MAX) : (I_CONTROLLER_RANGE_MAX / 4);
                        }
                        stick_range_y = I_CONTROLLER_RANGE_MAX;

                        if (this_fp->ground_or_air == GA_Ground)
                        {
                            if (this_fp->status_info.status_id != ftStatus_Common_KneeBend)
                            {
                                if (ft_com->target_line_id == this_fp->coll_data.ground_line_id)
                                {
                                    stick_range_y = dist_y = 0.0F;
                                }
                                if 
                                (
                                    (ft_com->ftcom_flags_0x4A_b1) && 
                                    (
                                        (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_CliffCatch) || 
                                        (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_CliffWait)
                                    )
                                )
                                {
                                    stick_range_y = dist_y = 0.0F;
                                }
                            }
                        }
                        else
                        {
                            if
                            (
                                (
                                    (this_fp->ft_kind != Ft_Kind_Fox) ||
                                    (
                                        (this_fp->status_info.status_id != ftStatus_Fox_SpecialHiStart) &&
                                        (this_fp->status_info.status_id != ftStatus_Fox_SpecialAirHiStart) &&
                                        (this_fp->status_info.status_id != ftStatus_Fox_SpecialHiHold) &&
                                        (this_fp->status_info.status_id != ftStatus_Fox_SpecialAirHiHold)
                                    )
                                ) 
                                &&
                                (dist_y < 0)
                            )
                            {
                                stick_range_y = dist_y = 0.0F;
                            }
                            switch (ft_com->behavior_set)
                            {
                            case 7:
                                if (this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y < 0)
                                {
                                    stick_range_y = dist_y = 0.0F;
                                }
                                break;

                            case 8:
                            case 9:
                                if (this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y < -300.0F)
                                {
                                    stick_range_y = dist_y = 0.0F;
                                }
                                break;
                            }
                        }
                        if ((dist_x != 0.0F) && (dist_y != 0.0F))
                        {
                            if (ABSF(dist_y) < ABSF(dist_x))
                            {
                                this_fp->input.cp.stick_range.x = (dist_x > 0.0F) ? stick_range_x : -stick_range_x;

                                this_fp->input.cp.stick_range.y = (ABSF((dist_y / dist_x)) * ((dist_y > 0.0F) ? stick_range_y : -stick_range_y));
                            }
                            else
                            {
                                this_fp->input.cp.stick_range.x = (ABSF((dist_x / dist_y)) * ((dist_x > 0.0F) ? stick_range_x : -stick_range_x));

                                this_fp->input.cp.stick_range.y = (dist_y > 0.0F) ? stick_range_y : -stick_range_y;
                            }
                        }
                        else if (dist_x != 0.0F)
                        {
                            this_fp->input.cp.stick_range.x = (dist_x > 0.0F) ? stick_range_x : -stick_range_x;

                            this_fp->input.cp.stick_range.y = (ABSF((dist_y / dist_x)) * ((dist_y > 0.0F) ? stick_range_y : -stick_range_y));
                        }
                        else if (dist_y != 0.0F)
                        {
                            this_fp->input.cp.stick_range.x = (ABSF((dist_x / dist_y)) * ((dist_x > 0.0F) ? stick_range_x : -stick_range_x));

                            this_fp->input.cp.stick_range.y = (dist_y > 0.0F) ? stick_range_y : -stick_range_y;
                        }
                        else
                        {
                            this_fp->input.cp.stick_range.x = this_fp->input.cp.stick_range.y = 0;
                        }
                        break;

                    case FTCOMPUTER_COMMAND_STICK_X_VAR:
                        this_fp->input.cp.stick_range.x = var_t1;
                        break;

                    case FTCOMPUTER_COMMAND_STICK_Y_VAR:
                        this_fp->input.cp.stick_range.y = var_t1;
                        break;
                    }
                }
                else switch (command)
                {
                case FTCOMPUTER_COMMAND_DEFAULT_MAX + 0:
                    ft_com->input_wait = *p_command++;
                    break;

                case FTCOMPUTER_COMMAND_DEFAULT_MAX + 1:
                    var_t1 = 1;
                    break;

                case FTCOMPUTER_COMMAND_DEFAULT_MAX + 2:
                    ft_com->input_wait = var_t1;
                    break;

                case FTCOMPUTER_COMMAND_DEFAULT_MAX + 3:
                    ftComputerSetControlPKThunder(this_fp);
                    break;

                case FTCOMPUTER_COMMAND_DEFAULT_MAX + 0xF:
                    ft_com->input_wait = 0;
                    ft_com->p_command = NULL;
                    return;
                }
            }
            ft_com->p_command = p_command;
        }
    }
}

extern u8 *dFtComputerPlayerScripts[]; // CPU player commands

// 0x80132564
void ftComputerSetCommandWait(ftStruct *fp, s32 index)
{
    ftComputer *ft_com = &fp->fighter_com;

    if (fp->ground_or_air == GA_Ground)
    {
        ft_com->input_wait = ((2 * (lbRandom_GetFloat() * (GMCOMPLAYER_LEVEL_MAX - fp->cp_level))) + ((GMCOMPLAYER_LEVEL_MAX - fp->cp_level) * 2) + 1.0F);
    }
    else
    {
        ft_com->input_wait = ((lbRandom_GetFloat() * (GMCOMPLAYER_LEVEL_MAX - fp->cp_level)) + ((GMCOMPLAYER_LEVEL_MAX - fp->cp_level) / 2) + 1.0F);
    }
    ft_com->p_command = dFtComputerPlayerScripts[index];
}

// 0x80132758
void ftComputerSetCommandImmediate(ftStruct *fp, s32 index)
{
    ftComputer *ft_com = &fp->fighter_com;

    ft_com->input_wait = 1;
    ft_com->p_command = dFtComputerPlayerScripts[index];
}

// 0x80132778
void ftComputerSetCommandQuadruple(ftStruct *fp, s32 index)
{
    ftComputer *ft_com = &fp->fighter_com;

    if (fp->ground_or_air == GA_Ground)
    {
        ft_com->input_wait = ((4 * (lbRandom_GetFloat() * (GMCOMPLAYER_LEVEL_MAX - fp->cp_level))) + ((GMCOMPLAYER_LEVEL_MAX - fp->cp_level) * 4) + 1.0F);
    }
    else
    {
        ft_com->input_wait = ((lbRandom_GetFloat() * (GMCOMPLAYER_LEVEL_MAX - fp->cp_level)) + (GMCOMPLAYER_LEVEL_MAX - fp->cp_level) + 1.0F);
    }
    ft_com->p_command = dFtComputerPlayerScripts[index];
}

// 0x8013295C
sb32 ftComputerCheckFindTarget(ftStruct *this_fp)
{
    ftComputer *ft_com = &this_fp->fighter_com;
    ftStruct *other_fp;
    f32 this_pos_x = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;
    f32 this_pos_y = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;
    GObj *other_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];
    f32 distance = F32_MAX;
    f32 square_xy;
    f32 other_pos_x;
    f32 other_pos_y;

    while (other_gobj != NULL)
    {
        if (other_gobj != this_fp->fighter_gobj)
        {
            other_fp = ftGetStruct(other_gobj);

            if (this_fp->team != other_fp->team)
            {
                other_pos_x = other_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;
                other_pos_y = other_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;

                if 
                (
                    (other_fp->status_info.status_id >= ftStatus_Common_Wait) &&
                    (
                        (
                            (func_ovl2_800F8FFC(&other_fp->joint[ftParts_Joint_TopN]->translate.vec.f) != FALSE) &&
                            (other_pos_x <= gMapEdgeBounds.d2.right) &&
                            (gMapEdgeBounds.d2.left <= other_pos_x) &&
                            (gMapEdgeBounds.d2.bottom <= other_pos_y) &&
                            (other_pos_y < gGroundInfo->cam_bound_top)
                        ) 
                        ||
                        (
                            (this_fp->ground_or_air == GA_Ground) &&
                            (
                                (other_fp->status_info.status_id == ftStatus_Common_CliffCatch) ||
                                (other_fp->status_info.status_id == ftStatus_Common_CliffWait)
                            )
                        )
                    ) 
                    &&
                    (
                        (this_fp->ft_kind != Ft_Kind_MetalMario) ||
                        (other_fp->ground_or_air == GA_Ground)
                    )
                )
                {
                    square_xy = SQUARE(this_pos_x - other_pos_x) + SQUARE(this_pos_y - other_pos_y);

                    if (square_xy < distance)
                    {
                        ft_com->target_pos.x = other_pos_x;
                        ft_com->target_pos.y = other_pos_y;
                        ft_com->target_user = other_fp;

                        distance = square_xy;
                    }
                }
            }
        }
        other_gobj = other_gobj->link_next;
    }

    if (distance == F32_MAX)
    {
        ft_com->target_line_id = -1;
        ft_com->target_dist = F32_MAX;
        ft_com->ftcom_flags_0x4A_b1 = FALSE;

        return FALSE;
    }
    ft_com->ftcom_flags_0x4A_b1 = TRUE;
    ft_com->target_dist = sqrtf(distance);

    if (ftGetComTargetFighter(ft_com)->ground_or_air == GA_Ground)
    {
        ft_com->target_line_id = ftGetComTargetFighter(ft_com)->coll_data.ground_line_id;
    }
    else ft_com->target_line_id = -1;

    return TRUE;
}

// 0x80132BC8
sb32 ftComputerCheckEvade(ftStruct *this_fp)
{
    GObj *other_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];

    while (other_gobj != NULL)
    {
        if (other_gobj != this_fp->fighter_gobj)
        {
            ftStruct *other_fp = ftGetStruct(other_gobj);

            if (this_fp->team != other_fp->team)
            {
                DObj *other_joint = other_fp->joint[ftParts_Joint_TopN];
                DObj *this_joint = this_fp->joint[ftParts_Joint_TopN];
                f32 other_x = (other_joint->translate.vec.f.x + other_fp->phys_info.vel_air.x * 3.0F);
                f32 other_y = (other_joint->translate.vec.f.y + other_fp->phys_info.vel_air.x * 3.0F);
                f32 sqrt_xy = sqrtf(SQUARE(this_joint->translate.vec.f.y - other_y) + SQUARE(this_joint->translate.vec.f.x - other_x));

                if ((other_fp->star_hitstatus == gmHitCollision_HitStatus_Invincible) && (sqrt_xy < 1500.0F))
                {
                    return TRUE;
                }
                else if ((other_fp->item_hold != NULL) && (itGetStruct(other_fp->item_hold)->it_kind == It_Kind_MBall) && (sqrt_xy < 2500.0F))
                {
                    return TRUE;
                }
            }
        }
        other_gobj = other_gobj->link_next;
    }
    return FALSE;
}

// 0x80132D18
ftStruct* ftComputerWaitGetTarget(ftStruct *this_fp)
{
    ftComputer *ft_com = &this_fp->fighter_com;
    GObj *other_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];
    s32 target_damage = 9999;
    ftStruct *target_fp = NULL;

    while (other_gobj != NULL)
    {
        if (other_gobj != this_fp->fighter_gobj)
        {
            ftStruct *other_fp = ftGetStruct(other_gobj);

            if (this_fp->team != other_fp->team)
            {
                if (other_fp->status_info.status_id >= ftStatus_Common_ActionStart)
                {
                    if ((ft_com->target_gobj != NULL) && (other_fp->fighter_gobj == ft_com->target_gobj))
                    {
                        if (other_fp->percent_damage == ft_com->target_damage_percent)
                        {
                            if (ft_com->target_find_wait)
                            {
                                ft_com->target_find_wait--;
                            }
                            if (!(ft_com->target_find_wait))
                            {
                                return other_fp;
                            }
                            else return NULL;
                        }
                        ft_com->target_gobj = NULL;
                    }
                    if (other_fp->percent_damage < target_damage)
                    {
                        target_damage = other_fp->percent_damage;
                        target_fp = other_fp;
                    }
                }
            }
        }
        other_gobj = other_gobj->link_next;
    }
    if (target_fp != NULL)
    {
        ft_com->target_damage_percent = target_damage;
        ft_com->target_gobj = target_fp->fighter_gobj;
        ft_com->target_find_wait = (lbRandom_GetFloat() * 300.0F) + 600.0F;
    }
    return NULL;
}

void func_ovl3_80132EC0(void) // Unused
{
    return;
}

extern ftComputerAttack *jtbl_ovl3_801880C4[27];

// 0x80132EC8
sb32 ftComputerCheckDetectTarget(ftStruct *this_fp, f32 detect_range_base);

#if defined(NON_MATCHING)
sb32 ftComputerCheckDetectTarget(ftStruct *this_fp, f32 detect_range_base)
{
    // Unfortunately, this does not match. A few register swaps in the middle prevent it from being 100%, however, it's fully functionally equivalent.
    ftComputer *ft_com = &this_fp->fighter_com;
    ftStruct *target_fp = this_fp->fighter_com.target_user;
    f32 this_pos_x;
    f32 this_pos_y;
    f32 this_vel_x;
    f32 this_vel_y;
    f32 this_fall_speed_max;
    f32 this_gravity;
    f32 target_pos_x;
    f32 target_pos_y;
    f32 target_vel_x;
    f32 target_vel_y;
    f32 target_fall_speed_max;
    f32 target_gravity;
    ftStruct *reflect_fp;
    f32 sp178;
    f32 sp174;
    f32 predict_pos_x;
    f32 predict_pos_y;
    f32 var_f0;
    f32 detect_far_x;
    f32 detect_near_x;
    f32 detect_near_y;
    s32 attack_ids[20];
    f32 detect_ranges_x[20];
    s32 hit_frame;
    s32 i;
    sb32 is_attempt_edgeguard;
    s32 target_predict_frame;
    s32 this_predict_frame;
    s32 attack_count;
    f32 detect_far_y;
    ftComputerAttack *ft_comattack;
    Vec3f this_detect_pos;
    f32 predict_adjust_y;
    s32 input_kind;
    GObj *item_gobj;
    itStruct *ip;

    if (gBattleState->gr_kind == Gr_Kind_Inishie)
    {
        if ((this_fp->coll_data.ground_line_id >= 0) && (mpCollision_CheckExistPlatformLineID(this_fp->coll_data.ground_line_id) != FALSE))
        {
            return FALSE;
        }
    }
    if ((gBattleState->gr_kind == Gr_Kind_Yamabuki) && (this_fp->ground_or_air != GA_Ground))
    {
        if (this_fp->phys_info.vel_air.x > 0.0F)
        {
            detect_near_x = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;
            detect_far_x = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x + (this_fp->phys_info.vel_air.x * 40.0F);
        }
        else
        {
            detect_far_x = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;
            detect_near_x = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x + (this_fp->phys_info.vel_air.x * 40.0F);
        }
        this_detect_pos.y = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;
        this_detect_pos.x = (this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x + detect_near_x) - 100.0F;

        while (this_detect_pos.x < ((this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x + detect_far_x) + 100.0F))
        {
            if (func_ovl2_800F8FFC(&this_detect_pos) == FALSE)
            {
                return FALSE;
            }
            this_detect_pos.x += 100.0F;
        }
    }
    this_pos_x = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;
    this_pos_y = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;

    var_f0 = (((lbRandom_GetFloat() - 0.5F) * (9 - this_fp->cp_level)) * 0.1F) + 1.0F;

    sp178 = target_fp->hurtbox_size.x * var_f0;
    sp174 = target_fp->hurtbox_size.y * var_f0;

    target_pos_x = target_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;
    target_pos_y = target_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;

    target_vel_x = target_fp->phys_info.vel_air.x;
    target_vel_y = target_fp->phys_info.vel_air.y;

    target_fall_speed_max = -target_fp->attributes->fall_speed_max;
    target_gravity = target_fp->attributes->gravity;

    this_vel_x = this_fp->phys_info.vel_air.x;
    this_vel_y = this_fp->phys_info.vel_air.y;

    this_fall_speed_max = -this_fp->attributes->fall_speed_max;
    this_gravity = this_fp->attributes->gravity;

    ft_comattack = jtbl_ovl3_801880C4[this_fp->ft_kind];

    if (this_fp->ground_or_air != GA_Ground)
    {
        while (ft_comattack->input_kind != -1)
        {
            ft_comattack++;
        }
        ft_comattack++;
    }
    for (attack_count = 0; TRUE; ft_comattack++)
    {
        if (ft_comattack->input_kind == -1)
        {
            break;
        }
        else if (ft_comattack->hitcollision_frame == 0)
        {
            continue;
        }
        else
        {
            predict_pos_x = ((target_pos_x + (target_vel_x * ft_comattack->hitcollision_frame)) - (this_pos_x + (this_vel_x * ft_comattack->hitcollision_frame))) * this_fp->lr;
            hit_frame = ft_comattack->hitcollision_frame;
            is_attempt_edgeguard = FALSE;
            this_predict_frame = -(this_fall_speed_max - this_pos_y) / this_gravity;

            if ((this_fp->status_info.status_id == ftStatus_Common_Pass) || (this_predict_frame <= 0))
            {
                predict_adjust_y = (this_vel_y * hit_frame) + this_pos_y;
            }
            else if (hit_frame < this_predict_frame)
            {
                predict_adjust_y = ((this_vel_y * hit_frame) - ((this_gravity * SQUARE(hit_frame)) * 0.5F)) + this_pos_y;
            }
            else predict_adjust_y = (((hit_frame * this_vel_y) - ((this_gravity * SQUARE(this_predict_frame)) * 0.5F)) + (this_fall_speed_max * (hit_frame - this_predict_frame))) + this_pos_y;

            if ((target_fp->status_info.status_id != ftStatus_Common_Pass) && (target_fp->ground_or_air != GA_Ground))
            {
                target_predict_frame = -(target_fall_speed_max - target_vel_y) / target_gravity;

                if (target_predict_frame <= 0)
                {
                    predict_pos_y = ((ft_comattack->hitcollision_frame * target_vel_y) + target_pos_y) - predict_adjust_y;
                }
                else if (ft_comattack->hitcollision_frame < target_predict_frame)
                {
                    predict_pos_y = (((ft_comattack->hitcollision_frame * target_vel_y) + target_pos_y) - ((target_gravity * SQUARE(ft_comattack->hitcollision_frame)) * 0.5F)) - predict_adjust_y;
                }
                else predict_pos_y = ((((ft_comattack->hitcollision_frame * target_vel_y) + target_pos_y) - ((target_gravity * SQUARE(target_predict_frame)) * 0.5F)) + (target_fall_speed_max * (ft_comattack->hitcollision_frame - target_predict_frame))) - predict_adjust_y;
            }
            else predict_pos_y = ((ft_comattack->hitcollision_frame * target_vel_y) + target_pos_y) - predict_adjust_y;

            if (this_fp->lr > 0)
            {
                detect_near_x = ft_comattack->detect_near_x;
                detect_far_x = ft_comattack->detect_far_x;
            }
            else
            {
                detect_near_x = -ft_comattack->detect_far_x;
                detect_far_x = -ft_comattack->detect_near_x;
            }
            detect_near_y = ft_comattack->detect_near_y;
            detect_far_y = ft_comattack->detect_far_y;

            if (this_fp->ft_kind == Ft_Kind_GiantDonkey)
            {
                detect_near_x *= 1.4F;
                detect_far_x *= 1.4F;
                detect_near_y *= 1.4F;
                detect_far_y *= 1.4F;
            }
            if (this_fp->ground_or_air == GA_Ground)
            {
                switch (ft_comattack->input_kind)
                {
                case 0x5:
                case 0x13:
                case 0x15:
                    item_gobj = this_fp->item_hold;

                    if (item_gobj != NULL)
                    {
                        ip = itGetStruct(item_gobj);

                        if (ip != NULL)
                        {
                            if
                                (
                                    (ip->it_kind == It_Kind_Sword) ||
                                    (ip->it_kind == It_Kind_Bat) ||
                                    (ip->it_kind == It_Kind_StarRod)
                                    )
                            {
                                detect_near_x *= 1.3F;
                                detect_far_x *= 1.3F;
                            }
                        }
                    }
                    break;

                default:
                    break;
                }
            }
            switch (this_fp->ft_kind)
            {
            case Ft_Kind_Mario:
            case Ft_Kind_Luigi:
            case Ft_Kind_MetalMario:
            case Ft_Kind_PolyMario:
            case Ft_Kind_PolyLuigi:
                if (ft_comattack->input_kind == 0xD)
                {
                    is_attempt_edgeguard = TRUE;
                }
                break;

            case Ft_Kind_Kirby:
            case Ft_Kind_PolyKirby:
                if (ft_comattack->input_kind == 0xD)
                {
                    is_attempt_edgeguard = TRUE;
                }
                /* fallthrough */
            case Ft_Kind_Yoshi:
            case Ft_Kind_Captain:
            case Ft_Kind_PolyYoshi:
            case Ft_Kind_PolyCaptain:
                if (ft_comattack->input_kind == 0x1B)
                {
                    is_attempt_edgeguard = TRUE;
                }
                break;

            case Ft_Kind_MasterHand:
            case Ft_Kind_PolyFox:
            case Ft_Kind_PolyDonkey:
            case Ft_Kind_PolySamus:
            case Ft_Kind_PolyLink:
            case Ft_Kind_PolyPikachu:
            case Ft_Kind_PolyNess:
            case Ft_Kind_GiantDonkey:
                break;
            }
            if (is_attempt_edgeguard != FALSE)
            {
                this_detect_pos.y = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;
                this_detect_pos.x = (this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x + detect_near_x) - 100.0F;

                while (this_detect_pos.x < ((this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x + detect_far_x) + 100.0F))
                {
                    if (func_ovl2_800F8FFC(&this_detect_pos) == FALSE)
                    {
                        goto comattack_inc;
                    }
                    this_detect_pos.x += 100.0F;
                }
                if (this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x < ft_com->target_pos.x)
                {
                    if (ft_com->cliff_right_pos.x < (ft_com->target_pos.x + 1200.0F))
                    {
                        goto comattack_inc;
                    }
                }
                else if (ft_com->cliff_left_pos.x > (ft_com->target_pos.x - 1200.0F))
                {
                    goto comattack_inc;
                }
            }
            if (this_fp->ft_kind == Ft_Kind_GiantDonkey)
            {
                if ((this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x < (gMapEdgeBounds.d2.left + 500.0F)) || (this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x > (gMapEdgeBounds.d2.right - 500.0F)))
                {
                    switch (ft_comattack->input_kind)
                    {
                    case 13:
                        goto comattack_inc;

                    case 9:
                        if ((this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x * this_fp->lr) > 0.0F)
                        {
                            goto comattack_inc;
                        }
                        break;

                    default:
                        if (this_fp->ground_or_air != GA_Ground)
                        {
                            goto comattack_inc;
                        }
                        break;
                    }
                }
            }
            if ((this_fp->ft_kind != Ft_Kind_GiantDonkey) || (this_fp->ground_or_air == GA_Ground) || (ft_comattack->input_kind != 0xD))
            {
                if (ft_com->ftcom_flags_0x4A_b1)
                {
                    if ((ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_CliffCatch) || (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_CliffWait))
                    {
                        if (detect_near_y < 0.0F)
                        {
                            detect_near_y -= 500.0F;
                        }
                    }
                }
                if ((predict_pos_y < detect_far_y) && ((detect_near_y - sp174) < predict_pos_y) && ((detect_near_x - sp178) < predict_pos_x) && (predict_pos_x < (detect_far_x + sp178)))
                {
                    attack_ids[attack_count] = ft_comattack->input_kind;

                    switch (ft_comattack->input_kind)
                    {
                    case 21:
                        if (this_fp->item_hold != NULL)
                        {
                            if (this_fp && this_fp && this_fp);

                            if (itGetStruct(this_fp->item_hold) != NULL)
                            {
                                if (itGetStruct(this_fp->item_hold)->type == It_Type_Swing)
                                {
                                    detect_range_base = -0.8F;
                                }
                            }
                            if (itGetStruct(this_fp->item_hold) != NULL)
                            {
                                if (itGetStruct(this_fp->item_hold)->it_kind == It_Kind_Bat)
                                {
                                    if (this_fp->ground_or_air == GA_Ground)
                                    {
                                        detect_ranges_x[attack_count] = 4.0F;
                                        attack_count++;
                                        break;
                                    }
                                }
                            }
                        }
                        detect_ranges_x[attack_count] = 1.0F;
                        attack_count++;
                        break;

                    case 9:
                        reflect_fp = ft_com->target_user;

                        if (this_fp->cp_level >= 5)
                        {
                            if (reflect_fp != NULL)
                            {
                                if ((reflect_fp->ft_kind == Ft_Kind_Ness) || (reflect_fp->ft_kind == Ft_Kind_Fox))
                                {
                                    switch ((this_fp->ft_kind == Ft_Kind_Kirby) ? this_fp->fighter_vars.kirby.copy_id : this_fp->ft_kind)
                                    {
                                    case Ft_Kind_Mario:
                                    case Ft_Kind_Fox:
                                    case Ft_Kind_Samus:
                                    case Ft_Kind_Luigi:
                                    case Ft_Kind_Link:
                                    case Ft_Kind_Pikachu:
                                    case Ft_Kind_MetalMario:
                                        goto comattack_inc;
                                    }
                                }
                            }
                        }
                        switch (this_fp->ft_kind)
                        {
                        case Ft_Kind_Donkey:
                        case Ft_Kind_GiantDonkey:
                            detect_ranges_x[attack_count] = (this_fp->fighter_vars.donkey.charge_level == 10) ? 4.0F : 1.0F + detect_range_base;
                            break;

                        case Ft_Kind_Samus:
                            detect_ranges_x[attack_count] = (this_fp->fighter_vars.samus.charge_level == 7) ? 4.0F : 1.0F + detect_range_base;
                            break;

                        case Ft_Kind_Kirby:
                            switch (this_fp->fighter_vars.kirby.copy_id)
                            {
                            case Ft_Kind_Donkey:
                                detect_ranges_x[attack_count] = (this_fp->fighter_vars.kirby.copydonkey_charge_level == 10) ? 4.0F : 1.0F + detect_range_base;
                                break;

                            case Ft_Kind_Samus:
                                detect_ranges_x[attack_count] = (this_fp->fighter_vars.kirby.copysamus_charge_level == 7) ? 4.0F : 1.0F + detect_range_base;
                                break;

                            default:
                                detect_ranges_x[attack_count] = 4.0F;
                                break;
                            }
                            break;

                        default:
                            detect_ranges_x[attack_count] = 1.0F + detect_range_base;
                            break;
                        }
                        attack_count++;
                        break;

                    case 13:
                    case 27:
                        detect_ranges_x[attack_count] = (detect_range_base * 0.5F) + 1.0F;
                        attack_count++;
                        break;

                    case 28:
                        if ((this_fp->ft_kind != Ft_Kind_Link) && (this_fp->ft_kind != Ft_Kind_Samus))
                        {
                            detect_ranges_x[attack_count] = 4.0F;
                            attack_count++;
                            break;
                        }
                        /* fallthrough */
                    default:
                        detect_ranges_x[attack_count] = 1.0F;
                        attack_count++;
                        break;
                    }
                }
            }
        }
    comattack_inc:
        continue;
    }
    if (attack_count != 0)
    {
        if (ft_com->behavior_write == 1)
        {
            if (this_fp->percent_damage < ((lbRandom_GetFloat() * 100.0F) + 1.0F))
            {
                ft_com->unk_timer_0x1A = 0;
                return FALSE;
            }
        }
        if (this_fp->cp_level < 3)
        {
            if ((this_fp->percent_damage + 5.0F) < (lbRandom_GetFloat() * (200.0F - (this_fp->cp_level * 50.0F))))
            {
                ft_com->unk_timer_0x1A = 0;
                return FALSE;
            }
        }
        detect_far_x = 0.0F;

        for (i = 0; i < attack_count; i++)
        {
            if (ft_com->attack_id == attack_ids[i])
            {
                detect_ranges_x[i] *= 0.25F;
            }
            switch (attack_ids[i])
            {
            case 19:
                detect_ranges_x[i] += ft_com->attack11 * 0.2F;
                ft_com->attack11++;
                break;

            case 5:
                detect_ranges_x[i] += ft_com->attacks3 * 0.2F;
                ft_com->attacks3++;
                break;

            case 21:
                detect_ranges_x[i] += ft_com->attacks4 * 0.2F;
                ft_com->attacks4++;
                break;

            case 23:
                detect_ranges_x[i] += ft_com->attackhi3 * 0.2F;
                ft_com->attackhi3++;
                break;

            case 25:
                detect_ranges_x[i] += ft_com->attackhi4 * 0.2F;
                ft_com->attackhi4++;
                break;

            case 32:
                detect_ranges_x[i] += ft_com->attacklw3 * 0.2F;
                ft_com->attacklw3++;
                break;

            case 34:
                detect_ranges_x[i] += ft_com->attacklw4 * 0.2F;
                ft_com->attacklw4++;
                break;

            case 9:
                detect_ranges_x[i] += ft_com->specialn * 0.2F;
                ft_com->specialn++;
                break;

            case 13:
                detect_ranges_x[i] += ft_com->specialhi * 0.2F;
                ft_com->specialhi++;
                break;

            case 27:
                detect_ranges_x[i] += ft_com->speciallw * 0.2F;
                ft_com->speciallw++;
                break;

            case 28:
                detect_ranges_x[i] += ft_com->unk_ftcom_0x43 * 0.2F;
                ft_com->unk_ftcom_0x43++;
                break;

            default:
                break;
            }
            detect_ranges_x[i] += detect_far_x;
            detect_far_x = detect_ranges_x[i];
        }
        detect_far_x = lbRandom_GetFloat() * detect_far_x;

        for (i = 0; i < attack_count; i++)
        {
            if (detect_far_x < detect_ranges_x[i])
            {
                if (ft_com->attack_id == attack_ids[i])
                {
                    ft_com->attack_repeat_count++;

                    if (ft_com->attack_repeat_count >= 4)
                    {
                        ftComputerSetCommandImmediate(this_fp, 4);

                        return TRUE;
                    }
                }
                else ft_com->attack_repeat_count = 0;

                ftComputerSetCommandWait(this_fp, attack_ids[i]);

                ft_com->attack_id = attack_ids[i];

                switch (attack_ids[i])
                {
                case 19:
                    ft_com->attack11 = 0;
                    break;

                case 5:
                    ft_com->attacks3 = 0;
                    break;

                case 21:
                    ft_com->attacks4 = 0;
                    break;

                case 23:
                    ft_com->attackhi3 = 0;
                    break;

                case 25:
                    ft_com->attackhi4 = 0;
                    break;

                case 32:
                    ft_com->attacklw3 = 0;
                    break;

                case 34:
                    ft_com->attacklw4 = 0;
                    break;

                case 9:
                    ft_com->specialn = 0;
                    break;

                case 13:
                    ft_com->specialhi = 0;
                    break;

                case 27:
                    ft_com->speciallw = 0;
                    break;

                case 28:
                    ft_com->unk_ftcom_0x43 = 0;
                    break;

                default:
                    break;
                }
                if ((this_fp->ft_kind == Ft_Kind_Purin) && (ft_com->attack_id == 0xD) && (lbRandom_GetFloat() < 0.9F))
                {
                    return FALSE;
                }
                return TRUE;
            }
        }
    }
    else return FALSE;

    if (ft_comattack); // Really???
}
#else 
#pragma GLOBAL_ASM("game/nonmatching/ovl3/ftComputerCheckDetectTarget.s")
#endif

// 0x80134000
sb32 ftComputerCheckSetTargetEdgeRight(ftStruct *fp, sb32 is_find_edge_target)
{
    ftComputer *ft_com = &fp->fighter_com;
    f32 edge_dist_x;
    f32 edge_predict_y;
    f32 edge_offset;
    s32 fall_predict;
    Vec3f edge_pos;
    f32 acid_level_x;
    f32 acid_level_y;
    s32 edge_predict_x;
    u16 *line_ids;
    s32 i;

    if (fp->phys_info.vel_air.y >= 0.0F)
    {
        ft_com->target_pos.x = fp->joint[ftParts_Joint_TopN]->translate.vec.f.x - 500.0F;
        ft_com->target_pos.y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;

        return TRUE;
    }
    edge_offset = ft_com->unk_ftcom_0x90 * 0.75F;

    if (fp->ft_kind == Ft_Kind_MetalMario)
    {
        edge_offset = 0;
    }
    if (gBattleState->gr_kind == Gr_Kind_Yamabuki)
    {
        edge_offset = 0;
    }
    line_ids = &gMapLineTypeGroups[mpCollision_LineType_Ground].line_id[0];

    for (i = 0; i < gMapLineTypeGroups[mpCollision_LineType_Ground].line_count; i++)
    {
        if (mpCollision_CheckExistLineID(line_ids[i]) != FALSE)
        {
            mpCollision_GetLREdgeRight(line_ids[i], &edge_pos);

            if (gBattleState->gr_kind == Gr_Kind_Zebes)
            {
                grCommon_Zebes_GetAcidLevelInfo(&acid_level_x, &acid_level_y);

                if ((edge_pos.y < (acid_level_x + 500.0F)) || (edge_pos.y < ((5.0F * acid_level_y) + acid_level_x + 500.0F))) continue;
            }
            if ((gBattleState->gr_kind == Gr_Kind_Inishie) && (mpCollision_CheckExistPlatformLineID(line_ids[i]) != FALSE)) continue;

            edge_dist_x = fp->joint[ftParts_Joint_TopN]->translate.vec.f.x - edge_pos.x;

            if (edge_dist_x > 0.0F)
            {
                edge_predict_x = (edge_dist_x / fp->attributes->aerial_speed_max_x);
                fall_predict = -(-fp->attributes->fall_speed_max - fp->phys_info.vel_air.y) / fp->attributes->gravity;

                if (fall_predict <= 0)
                {
                    edge_predict_y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y + (fp->phys_info.vel_air.y * edge_predict_x);
                }
                else if (edge_predict_x < fall_predict)
                {
                    edge_predict_y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y +
                    (
                        (fp->phys_info.vel_air.y * edge_predict_x) - (fp->attributes->gravity * SQUARE(edge_predict_x) * 0.5F)
                    );
                }
                else edge_predict_y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y +
                (
                    ((fp->phys_info.vel_air.y * edge_predict_x) - (fp->attributes->gravity * SQUARE(fall_predict) * 0.5F)) -
                    (fp->attributes->fall_speed_max * (edge_predict_x - fall_predict))
                );
                if ((is_find_edge_target == FALSE) && (edge_predict_y < (edge_pos.y - ft_com->unk_ftcom_0x90))) continue;

                if ((edge_predict_y < edge_pos.y) && ((edge_pos.y - edge_offset) < edge_predict_y)) continue;

                ft_com->target_pos.x = edge_pos.x - 500.0F;
                ft_com->target_pos.y = edge_pos.y;

                return TRUE;
            }
        }
    }
    return FALSE;
}

// 0x80134368
sb32 ftComputerCheckSetTargetEdgeLeft(ftStruct *fp, sb32 is_find_edge_target)
{
    ftComputer *ft_com = &fp->fighter_com;
    f32 edge_dist_x;
    f32 edge_predict_y;
    f32 edge_offset;
    s32 fall_predict;
    Vec3f edge_pos;
    f32 acid_level_x;
    f32 acid_level_y;
    s32 edge_predict_x;
    u16 *line_ids;
    s32 i;

    if (fp->phys_info.vel_air.y >= 0.0F)
    {
        ft_com->target_pos.x = fp->joint[ftParts_Joint_TopN]->translate.vec.f.x + 500.0F;
        ft_com->target_pos.y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;

        return TRUE;
    }
    edge_offset = ft_com->unk_ftcom_0x90 * 0.75F;

    if (fp->ft_kind == Ft_Kind_MetalMario)
    {
        edge_offset = 0;
    }
    if (gBattleState->gr_kind == Gr_Kind_Yamabuki)
    {
        edge_offset = 0;
    }
    line_ids = &gMapLineTypeGroups[mpCollision_LineType_Ground].line_id[0];

    for (i = 0; i < gMapLineTypeGroups[mpCollision_LineType_Ground].line_count; i++)
    {
        if (mpCollision_CheckExistLineID(line_ids[i]) != FALSE)
        {
            mpCollision_GetLREdgeLeft(line_ids[i], &edge_pos);

            if (gBattleState->gr_kind == Gr_Kind_Zebes)
            {
                grCommon_Zebes_GetAcidLevelInfo(&acid_level_x, &acid_level_y);

                if ((edge_pos.y < (acid_level_x + 500.0F)) || (edge_pos.y < ((5.0F * acid_level_y) + acid_level_x + 500.0F))) continue;
            }
            if ((gBattleState->gr_kind == Gr_Kind_Inishie) && (mpCollision_CheckExistPlatformLineID(line_ids[i]) != FALSE)) continue;

            edge_dist_x = fp->joint[ftParts_Joint_TopN]->translate.vec.f.x - edge_pos.x;

            if (edge_dist_x < 0.0F)
            {
                edge_predict_x = (edge_dist_x / -fp->attributes->aerial_speed_max_x);
                fall_predict = -(-fp->attributes->fall_speed_max - fp->phys_info.vel_air.y) / fp->attributes->gravity;

                if (fall_predict <= 0)
                {
                    edge_predict_y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y + (fp->phys_info.vel_air.y * edge_predict_x);
                }
                else if (edge_predict_x < fall_predict)
                {
                    edge_predict_y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y +
                    (
                        (fp->phys_info.vel_air.y * edge_predict_x) - (fp->attributes->gravity * SQUARE(edge_predict_x) * 0.5F)
                    );
                }
                else edge_predict_y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y +
                (
                    ((fp->phys_info.vel_air.y * edge_predict_x) - (fp->attributes->gravity * SQUARE(fall_predict) * 0.5F)) -
                    (fp->attributes->fall_speed_max * (edge_predict_x - fall_predict))
                );
                if ((is_find_edge_target == FALSE) && (edge_predict_y < (edge_pos.y - ft_com->unk_ftcom_0x90))) continue;

                if ((edge_predict_y < edge_pos.y) && ((edge_pos.y - edge_offset) < edge_predict_y)) continue;

                ft_com->target_pos.x = edge_pos.x + 500.0F;
                ft_com->target_pos.y = edge_pos.y;

                return TRUE;
            }
        }
    }
    return FALSE;
}

// 0x801346D4
void func_ovl3_801346D4(ftStruct *fp)
{
    ftComputer *ft_com = &fp->fighter_com;
    Vec3f pos = fp->joint[ftParts_Joint_TopN]->translate.vec.f;
    f32 range = fp->fighter_com.unk_ftcom_0x90;

    if (fp->jumps_used == fp->attributes->jumps_max)
    {
        switch (fp->ft_kind)
        {
        case Ft_Kind_Fox:
        case Ft_Kind_Donkey:
        case Ft_Kind_GiantDonkey:
            range *= 0.5F;
            break;

        case Ft_Kind_Ness:
            range = -ft_com->unk_ftcom_0x90;
            break;
        }
    }
    if (fp->ft_kind == Ft_Kind_MetalMario)
    {
        range = 0;
    }
    if (fp->ft_kind == Ft_Kind_GiantDonkey)
    {
        range = 0;
    }
    if (pos.x > gMapEdgeBounds.d2.right)
    {
        if (fp->lr > 0)
        {
            range *= 0.75F;
        }
        ft_com->target_pos.x = pos.x - 1100.0F;

        if (pos.x < (ft_com->cliff_right_pos.x + 300.0F))
        {
            range = 0.0F;
        }
        if (((fp->jumps_used < fp->attributes->jumps_max) && ((pos.x - gMapEdgeBounds.d2.right) > 1500.0F)) || ((fp->joint[ftParts_Joint_TopN]->translate.vec.f.y + fp->phys_info.vel_air.y) < (ft_com->cliff_right_pos.y - range)))
        {
            ft_com->target_pos.y = pos.y + 1100.0F;
        }
        else ft_com->target_pos.y = pos.y;
    }
    else
    {
        if (fp->lr < 0)
        {
            range *= 0.75F;
        }
        ft_com->target_pos.x = pos.x + 1100.0F;

        if ((ft_com->cliff_left_pos.x - 300.0F) < pos.x)
        {
            range = 0.0F;
        }
        if
        (
            (
                (fp->jumps_used < fp->attributes->jumps_max) && 
                (
                    (gMapEdgeBounds.d2.left - pos.x) > 1500.0F
                )
            ) 
            || 
            (
                (fp->joint[ftParts_Joint_TopN]->translate.vec.f.y + fp->phys_info.vel_air.y) < (ft_com->cliff_left_pos.y - range)
            )
        )
        {
            ft_com->target_pos.y = pos.y + 1100.0F;
        }
        else ft_com->target_pos.y = pos.y;
    }
}

// 0x80134964
void func_ovl3_80134964(ftStruct *fp)
{
    ftComputer *ft_com = &fp->fighter_com;
    Vec3f pos = fp->joint[ftParts_Joint_TopN]->translate.vec.f;

    ft_com->target_line_id = -1;
    ft_com->ftcom_flags_0x4A_b1 = FALSE;

    if (!(ft_com->ftcom_flags_0x49_b0) && (pos.x <= gMapEdgeBounds.d2.right) && (pos.x >= gMapEdgeBounds.d2.left))
    {
        if (fp->phys_info.vel_air.x < 0.0F)
        {
            if
            (
                (ftComputerCheckSetTargetEdgeRight(fp, FALSE) != FALSE) ||
                (ftComputerCheckSetTargetEdgeLeft(fp, FALSE) != FALSE)  ||
                (ftComputerCheckSetTargetEdgeRight(fp, TRUE) != FALSE)  ||
                (ftComputerCheckSetTargetEdgeLeft(fp, TRUE) != FALSE)
            )
            {
                return;
            }
        }
        else if
        (
            (ftComputerCheckSetTargetEdgeLeft(fp, FALSE) != FALSE)  ||
            (ftComputerCheckSetTargetEdgeRight(fp, FALSE) != FALSE) ||
            (ftComputerCheckSetTargetEdgeLeft(fp, TRUE) != FALSE)   ||
            (ftComputerCheckSetTargetEdgeRight(fp, TRUE) != FALSE)
        )
        {
            return;
        }
        if ((pos.x + (pos.x < 0.0F)) != FALSE)
        {
            ft_com->target_pos.x = 500.0F;
        }
        else ft_com->target_pos.x = -500.0F;

        if ((pos.y + 1100.0F) > gGroundInfo->cam_bound_top)
        {
            ft_com->target_pos.y = pos.y;
        }
        else ft_com->target_pos.y = (pos.y + 1100.0F);
    }
    else func_ovl3_801346D4(fp);
}

// 0x80134B4C
sb32 ftComputerCheckTargetItemOrTwister(ftStruct *fp)
{
    ftComputer *ft_com = &fp->fighter_com;
    f32 predict_x;
    f32 predict_y;
    f32 dist_x;
    f32 dist_y;
    s32 unused;
    GObj *item_gobj;
    Vec3f twister_pos;

    item_gobj = gOMObjCommonLinks[GObj_LinkID_Item];

    predict_x = fp->joint[ftParts_Joint_TopN]->translate.vec.f.x + (fp->phys_info.vel_air.x * 5.0F);
    predict_y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y + (fp->phys_info.vel_air.y * 5.0F);

    while (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        if
        (
            (ip->owner_gobj != fp->fighter_gobj) &&
            (
                (gBattleState->is_team_battle != TRUE) || (gBattleState->is_team_attack != FALSE) || (ip->team != fp->team)
            )
            &&
            (
                (
                    (ip->it_kind == It_Kind_MSBomb) && (ip->is_damage_all == TRUE)
                )
                ||
                (
                    (ip->item_hit.update_state != gmHitCollision_UpdateState_Disable) && (ip->item_hit.update_state != gmHitCollision_UpdateState_New)
                )
                &&
                (ip->item_hit.interact_mask & GMHITCOLLISION_MASK_FIGHTER)
            )
        )
        {
            itHitbox *it_hit = &ip->item_hit;
            s32 hit_id = 0;

            if (it_hit->hitbox_count > 0)
            {
                dist_x = (predict_x < it_hit->hit_positions[hit_id].pos.x) ? 
                        -(predict_x - it_hit->hit_positions[hit_id].pos.x) :    
                         (predict_x - it_hit->hit_positions[hit_id].pos.x) ;

                if (dist_x < it_hit->size)
                {
                    dist_y = (predict_y < it_hit->hit_positions[hit_id].pos.y) ? 
                            -(predict_y - it_hit->hit_positions[hit_id].pos.y) : 
                             (predict_y - it_hit->hit_positions[hit_id].pos.y) ;

                    if (dist_y < it_hit->size)
                    {
                        ft_com->ftcom_flags_0x4A_b1 = FALSE;

                        if (fp->ground_or_air != GA_Ground)
                        {
                            ft_com->target_pos.x = (ft_com->target_pos.x < it_hit->hit_positions[hit_id].pos.x) ?
                                                                (it_hit->hit_positions[hit_id].pos.x + 1500.0F) :
                                                                (it_hit->hit_positions[hit_id].pos.x - 1500.0F) ;

                            ft_com->target_pos.y = it_hit->hit_positions[hit_id].pos.y;
                        }
                        else
                        {
                            ft_com->target_pos.x = fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;
                            ft_com->target_pos.y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y + 1100.0F;
                        }
                    }
                }
                return TRUE;
            }
        }
        item_gobj = item_gobj->link_next;
    }
    if (gBattleState->gr_kind == Gr_Kind_Hyrule)
    {
        if (grHyrule_Twister_GetPosition(&twister_pos) != FALSE)
        {
            dist_x = (predict_x < twister_pos.x) ? 
                    -(predict_x - twister_pos.x) :
                     (predict_x - twister_pos.x) ;

            if (dist_x < 600)
            {
                dist_y = predict_y - twister_pos.y;

                if ((dist_y < 600.0F) && (dist_y > -300.0F))
                {
                    ft_com->ftcom_flags_0x4A_b1 = FALSE;

                    if (fp->joint[ftParts_Joint_TopN]->translate.vec.f.x < (twister_pos.x - 300.0F))
                    {
                        ft_com->target_pos.x = (twister_pos.x - 1200.0F);
                        ft_com->target_pos.y = (twister_pos.y + 1100.0F);
                    }
                    else
                    {
                        ft_com->target_pos.x = (twister_pos.x + 1200.0F);
                        ft_com->target_pos.y = (twister_pos.y + 1100.0F);
                    }
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

// 0x80134E98
void func_ovl3_80134E98(ftStruct *fp)
{
    s32 unused;
    Vec3f target_pos;
    Vec3f ga_last;
    s32 stand_line_id;
    Vec3f edge_left;
    Vec3f edge_right;
    Vec3f sp9C;
    Vec3f sp90;
    ftStruct *target_fp;
    Vec3f sp80;
    Vec3f sp74;
    Vec3f sp68;
    f32 edge_dist_x;
    Vec3f sp58;
    ftComputer *ft_com;

    ft_com = &fp->fighter_com;

    target_pos = fp->joint[ftParts_Joint_TopN]->translate.vec.f;

    target_pos.x = fp->fighter_com.target_pos.x;
    target_pos.y = fp->fighter_com.target_pos.y;

    if ((fp->ground_or_air == GA_Ground) && (fp->joint[ftParts_Joint_TopN]->translate.vec.f.y < ft_com->target_pos.y))
    {
        if (mpCollision_CheckCeilLineCollisionSame(&fp->joint[ftParts_Joint_TopN]->translate.vec.f, &target_pos, &ga_last, &stand_line_id, NULL, NULL) != FALSE)
        {
            func_ovl2_800F4468(stand_line_id, &edge_left);
            func_ovl2_800F4448(stand_line_id, &edge_right);

            if (GS_DISTANCE(edge_left.x, fp->joint[ftParts_Joint_TopN]->translate.vec.f.x) < GS_DISTANCE(edge_right.x, fp->joint[ftParts_Joint_TopN]->translate.vec.f.x))
            {
                ft_com->target_pos.x = edge_left.x - 600.0F;
                ft_com->target_pos.y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;
            }
            else
            {
                ft_com->target_pos.x = edge_right.x + 600.0F;
                ft_com->target_pos.y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;
            }
        }
    }
    else if
    (
        !(fp->coll_data.ground_flags & MPCOLL_VERTEX_CLL_PASS) &&
        (fp->coll_data.ground_line_id >= 0) &&
        (ft_com->target_pos.y < ((fp->joint[ftParts_Joint_TopN]->translate.vec.f.y + fp->coll_data.ground_dist) - 500.0F)) &&
        (GS_DISTANCE(ft_com->target_pos.x, fp->joint[ftParts_Joint_TopN]->translate.vec.f.x) < (GS_DISTANCE(ft_com->target_pos.y, fp->joint[ftParts_Joint_TopN]->translate.vec.f.y) * 0.2F))
    )
    {
        mpCollision_GetLREdgeLeft(fp->coll_data.ground_line_id, &sp9C);
        mpCollision_GetLREdgeRight(fp->coll_data.ground_line_id, &sp90);

        if (GS_DISTANCE(sp9C.x, fp->joint[ftParts_Joint_TopN]->translate.vec.f.x) < GS_DISTANCE(sp90.x, fp->joint[ftParts_Joint_TopN]->translate.vec.f.x))
        {
            ft_com->target_pos.x = sp9C.x - 600.0F;
            ft_com->target_pos.y = sp9C.y;
        }
        else
        {
            ft_com->target_pos.x = sp90.x + 600.0F;
            ft_com->target_pos.y = sp90.y;
        }
    }
    else if ((fp->ground_or_air == GA_Ground) || (fp->phys_info.vel_air.y < 0.0F) || (fp->ft_kind == Ft_Kind_Kirby) || (fp->ft_kind == Ft_Kind_Purin))
    {
        if (fp->joint[ftParts_Joint_TopN]->translate.vec.f.x < ft_com->target_pos.x)
        {
            if (mpCollision_CheckLWallLineCollisionSame(&fp->joint[ftParts_Joint_TopN]->translate.vec.f, &target_pos, &ga_last, &stand_line_id, NULL, NULL) != FALSE)
            {
                mpCollision_GetUDEdgeUp(stand_line_id, &ga_last);

                ft_com->target_pos.x = ga_last.x + 100.0;
                ft_com->target_pos.y = ga_last.y + 100.0;

                if ((fp->ground_or_air == GA_Ground) && (fp->lr < 0.0F))
                {
                    ft_com->target_pos.x = fp->joint[ftParts_Joint_TopN]->translate.vec.f.x + 100.0F;
                    ft_com->target_pos.y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;

                    ftComputerSetCommandImmediate(fp, 0x11);
                    return;
                }
            }
        }
        else if (mpCollision_CheckRWallLineCollisionSame(&fp->joint[ftParts_Joint_TopN]->translate.vec.f, &target_pos, &ga_last, &stand_line_id, NULL, NULL) != FALSE)
        {
            func_ovl2_800F4690(stand_line_id, &ga_last);

            ft_com->target_pos.x = ga_last.x - 100.0;
            ft_com->target_pos.y = ga_last.y + 100.0;

            if ((fp->ground_or_air == GA_Ground) && (fp->lr > 0.0F))
            {
                ft_com->target_pos.x = fp->joint[ftParts_Joint_TopN]->translate.vec.f.x - 100.0F;
                ft_com->target_pos.y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;

                ftComputerSetCommandImmediate(fp, 0x11);
                return;
            }
        }
    }
    ftComputerCheckTargetItemOrTwister(fp);
    ftComputerSetCommandImmediate(fp, 1);

    if (fp->ground_or_air != GA_Ground)
    {
        switch (ft_com->behavior_set)
        {
        case 7:
            if (fp->joint[ftParts_Joint_TopN]->translate.vec.f.y < 0.0F)
            {
                break;
            }
            else goto block_52;

        case 8:
        case 9:
            if (fp->joint[ftParts_Joint_TopN]->translate.vec.f.y < -300.0F)
            {
                break;
            }
            /* fallthrough */
        default:
        block_52:
            if (fp->joint[ftParts_Joint_TopN]->translate.vec.f.y < ft_com->target_pos.y)
            {
                if ((ft_com->behave_current != 4) && ((ft_com->target_pos.y - 200.0F) < fp->joint[ftParts_Joint_TopN]->translate.vec.f.y))
                {
                    ft_com->target_pos.y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;
                    return;
                }
                ft_com->ftcom_flags_0x4A_b0 = FALSE;

                if ((fp->joint[ftParts_Joint_TopN]->translate.vec.f.y < (gGroundInfo->blastzone_top - 4000.0F)) && (fp->phys_info.vel_air.y < 0.0F))
                {
                    if (fp->jumps_used < fp->attributes->jumps_max)
                    {
                        if
                        (
                            (fp->status_info.status_id == ftStatus_Common_DamageFlyHi)  ||
                            (fp->status_info.status_id == ftStatus_Common_DamageFlyN)   ||
                            (fp->status_info.status_id == ftStatus_Common_DamageFlyLw)  ||
                            (fp->status_info.status_id == ftStatus_Common_DamageFlyTop) ||
                            (fp->status_info.status_id == ftStatus_Common_DamageFlyRoll)
                        )
                        {
                            if (fp->status_vars.common.damage.hitstun_timer == 0)
                            {
                                ftComputerSetCommandImmediate(fp, 4);
                                return;
                            }
                        }
                    }
                    if (fp->jumps_used < fp->attributes->jumps_max)
                    {
                        if
                        (
                            (fp->status_info.status_id == ftStatus_Common_JumpF)        ||
                            (fp->status_info.status_id == ftStatus_Common_JumpB)        ||
                            (fp->status_info.status_id == ftStatus_Common_Fall)         ||
                            (fp->status_info.status_id == ftStatus_Common_DamageFall)   ||
                            (fp->status_info.status_id == ftStatus_Common_FallSpecial)
                        )
                        {
                            ftComputerSetCommandImmediate(fp, 4);
                            return;
                        }
                    }
                    if ((ft_com->behave_current == 4) && !(ft_com->ftcom_flags_0x49_b7))
                    {
                        if ((fp->ft_kind != Ft_Kind_Yoshi) && (fp->ft_kind != Ft_Kind_Purin))
                        {
                            if
                            (
                                (fp->status_info.status_id == ftStatus_Common_JumpAerialF) ||
                                (fp->status_info.status_id == ftStatus_Common_JumpAerialB) ||
                                (fp->status_info.status_id == ftStatus_Common_FallAerial) ||
                                (fp->status_info.status_id == ftStatus_Common_DamageFall)
                            )
                            {
                                ft_com->ftcom_flags_0x49_b7 = TRUE;

                                if ((fp->ft_kind == Ft_Kind_GiantDonkey) || (lbRandom_GetFloat() < (fp->cp_level + 2) / 9.0F))
                                {
                                    ftComputerSetCommandImmediate(fp, 0xD);
                                    return;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                if (fp->phys_info.vel_air.y < 0.0F)
                {
                    if (ft_com->behave_current != 4)
                    {
                        if (!(fp->is_fast_fall) && !(ft_com->ftcom_flags_0x4A_b0))
                        {
                            ft_com->ftcom_flags_0x4A_b0 = TRUE;

                            if 
                            (
                                (fp->cp_level > 5) && 
                                (lbRandom_GetFloat() * (550 - (fp->cp_level * 50)) < 70.0F) || 
                                (ft_com->behavior_set == 7)                                 ||
                                (ft_com->behavior_set == 8)                                 || 
                                (ft_com->behavior_set == 9)
                            )
                            {
                                ftComputerSetCommandWait(fp, 0x27);
                                return;
                            }
                        }
                    }

                }
            }
            switch (ft_com->behavior_set)
            {
            case 7:
            case 8:
            case 9:
                if (fp->status_info.status_id == ftStatus_Common_Fall)
                {
                    if (func_ovl2_800F8FFC(&fp->joint[ftParts_Joint_TopN]->translate.vec.f) != FALSE)
                    {
                        ft_com->target_pos.x = fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;
                        ft_com->target_pos.y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y - 500.0F;
                    }
                }
                break;
            }
            if
            (
                (fp->cp_level >= 5)                                                                     && 
                (ft_com->ftcom_flags_0x4A_b1)                                                           && 
                ((ft_com->target_pos.y + 1100.0F) < fp->joint[ftParts_Joint_TopN]->translate.vec.f.y)   && 
                (fp->phys_info.vel_air.y < 0.0F)
            )
            {
                target_fp = ft_com->target_user;

                sp80.x = target_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x - (target_fp->lr * 1500.0F);
                sp80.y = target_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;
                sp80.z = 0.0F;

                if (func_ovl2_800F8FFC(&sp80) != FALSE)
                {
                    ft_com->target_pos.x = sp80.x;
                    ft_com->target_pos.y = sp80.y;
                }
                else
                {
                    sp80.x = target_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x + (target_fp->lr * 1500.0F);

                    if (func_ovl2_800F8FFC(&sp80) != FALSE)
                    {
                        ft_com->target_pos.x = sp80.x;
                        ft_com->target_pos.y = sp80.y;
                    }
                }
            }
            if (ft_com->ftcom_flags_0x4A_b1)
            {
                if (ft_com->target_line_id >= 0)
                {
                    mpCollision_GetLREdgeLeft(ft_com->target_line_id, &sp74);
                    mpCollision_GetLREdgeRight(ft_com->target_line_id, &sp68);

                    if ((sp74.x <= ft_com->target_pos.x) && (sp68.x >= ft_com->target_pos.x))
                    {
                        if (ft_com->target_pos.x < (sp74.x + 200.0F))
                        {
                            ft_com->target_pos.x = (sp74.x + 200.0F);
                        }
                        if (ft_com->target_pos.x > (sp68.x - 200.0F))
                        {
                            ft_com->target_pos.x = (sp68.x - 200.0F);
                        }
                    }
                }
            }
            ftComputerSetCommandImmediate(fp, 1);
            return;
        }
    }
    else
    {
        if (ft_com->unk_ftcom_0x8C <= GS_DISTANCE(ft_com->target_pos.x, fp->joint[ftParts_Joint_TopN]->translate.vec.f.x))
        {
            if (fp->joint[ftParts_Joint_TopN]->translate.vec.f.y < ft_com->target_pos.y)
            {
                if (fp->coll_data.ground_line_id >= 0)
                {
                    if (fp->phys_info.vel_air.x < 0.0F)
                    {
                        mpCollision_GetLREdgeLeft(fp->coll_data.ground_line_id, &sp58);
                    }
                    else mpCollision_GetLREdgeRight(fp->coll_data.ground_line_id, &sp58);

                    if (sp58.x < fp->joint[ftParts_Joint_TopN]->translate.vec.f.x)
                    {
                        edge_dist_x = -(sp58.x - fp->joint[ftParts_Joint_TopN]->translate.vec.f.x);
                    }
                    else edge_dist_x = (sp58.x - fp->joint[ftParts_Joint_TopN]->translate.vec.f.x);
                }
                else edge_dist_x = 0.0F;

                if ((edge_dist_x - ABSF(fp->phys_info.vel_air.x)) < 200.0F)
                {
                    if (fp->status_info.status_id != ftStatus_Common_KneeBend)
                    {
                        ftComputerSetCommandWait(fp, 4);
                    }
                }
                else ftComputerSetCommandImmediate(fp, 1);
            }
            else ftComputerSetCommandImmediate(fp, 1);
        }
        else if (fp->status_info.status_id != ftStatus_Common_Dash)
        {
            if (ft_com->target_line_id != fp->coll_data.ground_line_id)
            {
                if (fp->joint[ftParts_Joint_TopN]->translate.vec.f.y < ft_com->target_pos.y)
                {
                    if (fp->status_info.status_id != ftStatus_Common_KneeBend)
                    {
                        ftComputerSetCommandWait(fp, 4);
                    }
                }
                else if (fp->coll_data.ground_flags & MPCOLL_VERTEX_CLL_PASS)
                {
                    ftComputerSetCommandWait(fp, 0x27);
                }
            }
            else ftComputerSetCommandImmediate(fp, 1);
        }
        else ftComputerSetCommandImmediate(fp, 1);
    }
}

// 0x80135B78
sb32 func_ovl3_80135B78(ftStruct *this_fp)
{
    GObj *fighter_gobj;
    GObj *weapon_gobj;
    GObj *item_gobj;
    f32 hit_size;
    f32 predict_vel_x;
    f32 predict_div_x;
    f32 this_pos_x;
    f32 this_pos_y;
    f32 predict_pos_x;
    f32 predict_pos_y;
    wpStruct *wp;
    itStruct *ip;
    ftStruct *other_fp;
    ftComputer *ft_com;
    wpHitbox *wp_hit;
    itHitbox *it_hit;
    itHitPositions *it_hitpos;
    wpHitPositions *wp_hitpos;
    s32 i;

    ft_com = &this_fp->fighter_com;

    this_pos_x = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;
    this_pos_y = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;

    fighter_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];

    while (fighter_gobj != NULL)
    {
        if (this_fp->fighter_gobj == fighter_gobj) goto next_fighter;

        other_fp = ftGetStruct(fighter_gobj);

        if (this_fp->team == ftGetStruct(fighter_gobj)->team) goto next_fighter;

        if (other_fp->ft_kind == Ft_Kind_Donkey)
        {
            if (other_fp->fighter_vars.donkey.charge_level == 10)
            {
                if (this_fp->cp_level && this_fp->cp_level); // WTF???
            }
        }
    next_fighter:
        fighter_gobj = fighter_gobj->link_next;
    }
    weapon_gobj = gOMObjCommonLinks[GObj_LinkID_Weapon];

    while (weapon_gobj != NULL)
    {
        wp = wpGetStruct(weapon_gobj);

        if (wp->owner_gobj != this_fp->fighter_gobj)
        {
            if ((gBattleState->is_team_battle != TRUE) || (gBattleState->is_team_attack != FALSE) || (wp->team != this_fp->team))
            {
                if ((wp->weapon_hit.update_state != gmHitCollision_UpdateState_Disable) && (wp->weapon_hit.update_state != gmHitCollision_UpdateState_New) && (wp->weapon_hit.interact_mask & GMHITCOLLISION_MASK_FIGHTER))
                {
                    wp_hit = &wp->weapon_hit;

                    for (i = 0; i < wp_hit->hitbox_count; i++)
                    {
                        predict_vel_x = (wp->phys_info.vel_air.x - this_fp->phys_info.vel_air.x) * wp->lr;

                        if (predict_vel_x > 0.0F)
                        {
                            wp_hitpos = &wp_hit->hit_positions[i];

                            predict_pos_x = (this_pos_x - wp_hit->hit_positions[i].pos.x) * wp->lr;

                            hit_size = wp_hit->size * 0.5F;

                            predict_pos_x -= (this_fp->hurtbox_size.x + hit_size);

                            if (predict_pos_x > 0.0F)
                            {
                                predict_div_x = predict_pos_x / predict_vel_x;

                                if (predict_div_x < 15.0f)
                                {
                                    predict_pos_y = (this_fp->ground_or_air != GA_Ground) ? (this_fp->phys_info.vel_air.y * predict_div_x) + this_pos_y : this_pos_y;

                                    if ((((wp_hit->hit_positions[i].pos.y - hit_size) - this_fp->hurtbox_size.y) < predict_pos_y) && (predict_pos_y < (wp_hit->hit_positions[i].pos.y + hit_size)))
                                    {
                                        ft_com->target_pos.y = predict_pos_y;
                                        ft_com->unk_ftcom_0x38 = predict_div_x;

                                        if (lbRandom_GetFloat() < ((this_fp->cp_level + 2) / 9.0F))
                                        {
                                            if (!(ft_com->ftcom_flags_0x49_b2))
                                            {
                                                if
                                                (
                                                    (this_fp->ft_kind == (0, Ft_Kind_Fox))  || // WTF????????????????????????
                                                    (this_fp->ft_kind == Ft_Kind_Ness)      ||
                                                    (this_fp->ft_kind == Ft_Kind_PolyFox)   ||
                                                    (this_fp->ft_kind == Ft_Kind_PolyNess)
                                                )
                                                {
                                                    ft_com->ftcom_flags_0x49_b6 = TRUE;
                                                }
                                            }
                                            return TRUE;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    next_weapon:
        weapon_gobj = weapon_gobj->link_next;
    }
    item_gobj = gOMObjCommonLinks[GObj_LinkID_Item];

    while (item_gobj != NULL)
    {
        ip = itGetStruct(item_gobj);

        if (ip->owner_gobj != this_fp->fighter_gobj)
        {
            if ((gBattleState->is_team_battle != TRUE) || (gBattleState->is_team_attack != FALSE) || (ip->team != this_fp->team))
            {
                if ((ip->item_hit.update_state != gmHitCollision_UpdateState_Disable) && (ip->item_hit.update_state != gmHitCollision_UpdateState_New) && (ip->item_hit.interact_mask & GMHITCOLLISION_MASK_FIGHTER))
                {
                    it_hit = &ip->item_hit;

                    for (i = 0; i < it_hit->hitbox_count; i++)
                    {
                        predict_vel_x = (ip->phys_info.vel_air.x - this_fp->phys_info.vel_air.x) * ip->lr;

                        if (predict_vel_x > 0.0F)
                        {
                            predict_pos_x = (this_pos_x - it_hit->hit_positions[i].pos.x) * ip->lr;

                            hit_size = it_hit->size * 0.5F;

                            predict_pos_x -= (this_fp->hurtbox_size.x + hit_size);

                            if (predict_pos_x > 0.0F)
                            {
                                predict_div_x = predict_pos_x / predict_vel_x;

                                if (predict_div_x < 15.0F)
                                {
                                    predict_pos_y = (this_fp->ground_or_air != GA_Ground) ? (this_fp->phys_info.vel_air.y * predict_div_x) + this_pos_y : this_pos_y;

                                    if ((((it_hit->hit_positions[i].pos.y - hit_size) - this_fp->hurtbox_size.y) < predict_pos_y) && (predict_pos_y < (it_hit->hit_positions[i].pos.y + hit_size)))
                                    {
                                        ft_com->target_pos.y = predict_pos_y;
                                        ft_com->unk_ftcom_0x38 = predict_div_x;

                                        if (lbRandom_GetFloat() < ((this_fp->cp_level + 2) / 9.0F))
                                        {
                                            if (!(ft_com->ftcom_flags_0x49_b2))
                                            {
                                                if
                                                (
                                                    (this_fp->ft_kind == (0, Ft_Kind_Fox))  || // I AM LOSING MY MIND
                                                    (this_fp->ft_kind == Ft_Kind_Ness)      ||
                                                    (this_fp->ft_kind == Ft_Kind_PolyFox)   ||
                                                    (this_fp->ft_kind == Ft_Kind_PolyNess)
                                                )
                                                {
                                                    ft_com->ftcom_flags_0x49_b6 = TRUE;
                                                }
                                            }
                                            return TRUE;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    next_item:
        item_gobj = item_gobj->link_next;
    }
    return FALSE;
}

// 0x801361BC
void func_ovl3_801361BC(ftStruct *fp)
{
    ftComputer *ft_com = &fp->fighter_com;
    s32 var_v1;

    ft_com->target_line_id = -1;
    ft_com->ftcom_flags_0x4A_b1 = FALSE;
    ft_com = &fp->fighter_com;

    if (!(ft_com->ftcom_flags_0x49_b4) && !(ft_com->ftcom_flags_0x49_b6))
    {
        if (fp->ground_or_air != GA_Ground)
        {
            ft_com->target_pos.x = fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;

            if (((fp->joint[ftParts_Joint_TopN]->translate.vec.f.y + fp->hurtbox_size.y) < ft_com->target_pos.y) && (fp->phys_info.vel_air.y <= 0.0F))
            {
                ft_com->target_pos.y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y - 1100.0F;
            }
            else ft_com->target_pos.y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y + 1100.0F;
        }
        else
        {
            switch (fp->ft_kind)
            {
            default:
                var_v1 = 7;
                break;

            case Ft_Kind_Donkey:
            case Ft_Kind_PolyDonkey:
            case Ft_Kind_GiantDonkey:
                var_v1 = 11;
                break;

            case Ft_Kind_MetalMario:
                var_v1 = 20;
                break;
            }
            if ((ft_com->unk_ftcom_0x38 < var_v1) || (fp->status_info.status_id == ftStatus_Common_Run) || (fp->status_info.status_id == ftStatus_Common_Dash))
            {
                ft_com->ftcom_flags_0x49_b5 = TRUE;
            }
            else
            {
                ft_com->target_pos.x = fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;
                ft_com->target_pos.y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y + 1100.0F;
            }
        }
    }
}

// 0x80136310
sb32 ftComputerCheckFindItem(ftStruct *fp)
{
    ftComputer *ft_com = &fp->fighter_com;
    GObj *item_gobj;
    f32 nearest_dist;
    f32 ft_pos_x;
    f32 ft_pos_y;

    if (fp->item_hold != NULL)
    {
        fp->fighter_com.target_line_id = -1;

        return FALSE;
    }
    nearest_dist = F32_MAX;

    ft_pos_x = fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;
    ft_pos_y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;

    ft_com->ftcom_flags_0x4A_b1 = FALSE;

    item_gobj = gOMObjCommonLinks[GObj_LinkID_Item];

    while (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        if (ip->owner_gobj == fp->fighter_gobj) goto next_item;

        if ((gBattleState->is_team_battle == TRUE) && (gBattleState->is_team_attack == FALSE) && (ip->team == fp->team)) goto next_item;

        if ((ip->is_allow_pickup) && (func_ovl2_800F8FFC(&DObjGetStruct(item_gobj)->translate.vec.f) != FALSE))
        {
            f32 it_pos_x = DObjGetStruct(item_gobj)->translate.vec.f.x;
            f32 it_pos_y = DObjGetStruct(item_gobj)->translate.vec.f.y;

            if ((it_pos_x <= gMapEdgeBounds.d2.right) && (it_pos_x >= gMapEdgeBounds.d2.left) && (it_pos_y >= gMapEdgeBounds.d2.bottom) && (it_pos_y < gGroundInfo->cam_bound_top))
            {
                f32 current_dist = SQUARE(ft_pos_x - it_pos_x) + SQUARE(ft_pos_y - it_pos_y);

                if (nearest_dist > current_dist)
                {
                    ft_com->target_pos.x = it_pos_x;
                    ft_com->target_pos.y = it_pos_y;

                    ft_com->target_user = ip;

                    nearest_dist = current_dist;
                }
            }
        }
    next_item:
        item_gobj = item_gobj->link_next;
    }
    if (nearest_dist == F32_MAX)
    {
        ft_com->target_line_id = -1;

        return FALSE;
    }
    ft_com->target_dist = sqrtf(nearest_dist);

    ft_com->target_line_id = (ftGetComTargetItem(ft_com)->ground_or_air == GA_Ground) ? ftGetComTargetItem(ft_com)->coll_data.ground_line_id : -1;

    return TRUE;
}

// 0x80136550
sb32 ftComputerCheckTargetItemInRange(ftStruct *fp)
{
    ftItemPickup *item_pickup = &fp->attributes->item_pickup;
    itStruct *ip = ftGetComTargetItem(&fp->fighter_com);
    Vec3f *ft_pos = &DObjGetStruct(fp->fighter_gobj)->translate.vec.f;
    Vec3f *it_pos = &DObjGetStruct(ip->item_gobj)->translate.vec.f;
    mpObjectColl *object_coll = &ip->coll_data.object_coll;

    if (ip->weight == It_Weight_Light)
    {
        Vec2f range;

        range.x = ft_pos->x + (fp->lr * item_pickup->pickup_offset_light.x);
        range.y = ft_pos->y + item_pickup->pickup_offset_light.y;

        if ((((range.x - item_pickup->pickup_range_light.x) - object_coll->width) < it_pos->x) && (((item_pickup->pickup_range_light.x + range.x) + object_coll->width) > it_pos->x))
        {
            if ((((range.y - item_pickup->pickup_range_light.y) - object_coll->top) < it_pos->y) && (((item_pickup->pickup_range_light.y + range.y) - object_coll->bottom) > it_pos->y))
            {
                return TRUE;
            }
        }
    }
    else
    {
        Vec2f range;

        range.x = ft_pos->x + (fp->lr * item_pickup->pickup_offset_heavy.x);
        range.y = ft_pos->y + item_pickup->pickup_offset_heavy.y;

        if ((((range.x - item_pickup->pickup_range_heavy.x) - object_coll->width) < it_pos->x) && (((item_pickup->pickup_range_heavy.x + range.x) + object_coll->width) > it_pos->x))
        {
            if ((((range.y - item_pickup->pickup_range_heavy.y) - object_coll->top) < it_pos->y) && (((item_pickup->pickup_range_heavy.y + range.y) - object_coll->bottom) > it_pos->y))
            {
                return TRUE;
            }
        }
    }
    return FALSE;
}

// 0x801366F0
sb32 func_ovl3_801366F0(ftStruct *this_fp)
{
    ftComputer *ft_com;
    GObj *fighter_gobj;
    f32 current_dist;
    f32 nearest_dist;
    f32 this_pos_x;
    f32 predict_x;
    f32 predict_y;
    f32 this_pos_y;
    ftStruct *target_fp;
    Vec3f edge_pos;
    s32 unused;
    s32 line_id;

    ft_com = &this_fp->fighter_com;

    nearest_dist = 6250000.0F;

    this_pos_x = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;
    this_pos_y = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;

    ft_com->ftcom_flags_0x4A_b1 = FALSE;

    fighter_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];

    while (fighter_gobj != NULL)
    {
        if (fighter_gobj == this_fp->fighter_gobj) goto next_fighter;

        target_fp = ftGetStruct(fighter_gobj);

        if (this_fp->team == target_fp->team) goto next_fighter;

        predict_x = target_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x + (target_fp->phys_info.vel_air.x * 3.0F);
        predict_y = target_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y + (target_fp->phys_info.vel_air.x * 3.0F);

        if ((target_fp->star_hitstatus == gmHitCollision_HitStatus_Invincible) || ((target_fp->item_hold != NULL) && (itGetStruct(target_fp->item_hold)->it_kind == It_Kind_Hammer)))
        {
            ft_com->target_user = target_fp;

            nearest_dist = SQUARE(this_pos_x - predict_x) + SQUARE(this_pos_y - predict_y);

            break;
        }
        else if ((target_fp->status_info.status_id >= ftStatus_Common_Wait) && (predict_x <= gMapEdgeBounds.d2.right) && (predict_x >= gMapEdgeBounds.d2.left) && (predict_y >= gMapEdgeBounds.d2.bottom))
        {
            current_dist = SQUARE(this_pos_x - predict_x) + SQUARE(this_pos_y - predict_y);

            if (nearest_dist > current_dist)
            {
                ft_com->target_user = target_fp;

                nearest_dist = current_dist;
            }
        }

    next_fighter:
        fighter_gobj = fighter_gobj->link_next;
    }
    if (nearest_dist == 6250000.0F)
    {
        ft_com->target_pos.x = this_pos_x;
        ft_com->target_pos.y = this_pos_y;
        ft_com->target_line_id = -1;

        return TRUE;
    }
    else
    {
        target_fp = ft_com->target_user;

        predict_x = target_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;
        predict_y = target_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;

        if (this_fp->coll_data.ground_line_id >= 0)
        {
            line_id = this_fp->coll_data.ground_line_id;

            if (this_pos_x < predict_x)
            {
                mpCollision_GetLREdgeLeft(line_id, &edge_pos);
            }
            else mpCollision_GetLREdgeRight(line_id, &edge_pos);
        }
        else edge_pos = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f;

        if (target_fp->ground_or_air == GA_Ground)
        {
            ft_com->target_pos.y = predict_y;
        }
        else ft_com->target_pos.y = this_pos_y;

        if (this_pos_x < predict_x)
        {
            ft_com->target_pos.x = predict_x - 2500.0F;

            if (ft_com->target_pos.x < edge_pos.x)
            {
                ft_com->target_pos.x = predict_x + 2500.0F;

                ftComputerSetCommandWait(this_fp, 4);

                return FALSE;
            }
        }
        else
        {
            ft_com->target_pos.x = predict_x + 2500.0F;

            if (ft_com->target_pos.x > edge_pos.x)
            {
                ft_com->target_pos.x = predict_x - 2500.0F;

                ftComputerSetCommandWait(this_fp, 4);

                return FALSE;
            }
        }
        ft_com->target_dist = sqrtf(nearest_dist);
        ft_com->target_line_id = -1;
        ft_com->behave_current = 3;
    }
    return TRUE;
}

// 0x80136A20
sb32 ftComputerCheckTryChargeSpecialN(ftStruct *fp)
{
    switch (fp->ft_kind)
    {
    case Ft_Kind_Donkey:
        if
        (
            (fp->status_info.status_id != ftStatus_Donkey_SpecialNStart)    &&
            (fp->status_info.status_id != ftStatus_Donkey_SpecialAirNStart) &&
            (fp->status_info.status_id != ftStatus_Donkey_SpecialNLoop)     &&
            (fp->status_info.status_id != ftStatus_Donkey_SpecialAirNLoop)  &&
            (fp->status_info.status_id != ftStatus_Donkey_SpecialLwStart)   &&
            (fp->status_info.status_id != ftStatus_Donkey_SpecialLwLoop)    &&
            (fp->status_info.status_id != ftStatus_Donkey_SpecialLwEnd)     &&
            (fp->fighter_vars.donkey.charge_level < FTDONKEY_GIANTPUNCH_CHARGE_MAX)
        )
        {
            ftComputerSetCommandWait(fp, 0xB);
            return TRUE;
        }
        break;

    case Ft_Kind_GiantDonkey:
        switch (fp->status_info.status_id)
        {
        case ftStatus_Common_Wait:
        case ftStatus_Common_WalkSlow:
        case ftStatus_Common_WalkMiddle:
        case ftStatus_Common_WalkFast:
        case ftStatus_Common_Dash:
        case ftStatus_Common_Run:
        case ftStatus_Common_RunBrake:
        case ftStatus_Common_Squat:
        case ftStatus_Common_SquatWait:
        case ftStatus_Common_SquatRv:
        case ftStatus_Common_LandingLight:
        case ftStatus_Common_OttottoWait:
        case ftStatus_Common_Ottotto:
            if (fp->fighter_vars.donkey.charge_level < FTDONKEY_GIANTPUNCH_CHARGE_MAX)
            {
                ftComputerSetCommandWait(fp, 0xB);
                return TRUE;
            }
            break;
        }
        break;

    case Ft_Kind_Samus:
        if
        (
            (fp->status_info.status_id != ftStatus_Samus_SpecialNStart)     &&
            (fp->status_info.status_id != ftStatus_Samus_SpecialAirNStart)  &&
            (fp->status_info.status_id != ftStatus_Samus_SpecialNLoop)      &&
            (fp->status_info.status_id != ftStatus_Samus_SpecialAirNEnd)    &&
            (fp->fighter_vars.samus.charge_level < FTSAMUS_CHARGE_MAX)
        )
        {
            ftComputerSetCommandWait(fp, 0xB);
            return TRUE;
        }
        break;

    case Ft_Kind_Kirby:
        switch (fp->fighter_vars.kirby.copy_id)
        {
        case Ft_Kind_Donkey:
            if
            (
                (fp->status_info.status_id != ftStatus_Kirby_CopyDonkey_SpecialNStart)      &&
                (fp->status_info.status_id != ftStatus_Kirby_CopyDonkey_SpecialAirNStart)   &&
                (fp->status_info.status_id != ftStatus_Kirby_CopyDonkey_SpecialNLoop)       &&
                (fp->status_info.status_id != ftStatus_Kirby_CopyDonkey_SpecialAirNLoop)    &&
                (fp->fighter_vars.kirby.copydonkey_charge_level < FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_MAX)
            )
            {
                ftComputerSetCommandWait(fp, 0xB);
                return TRUE;
            }
            break;

        case Ft_Kind_Samus:
            if
            (
                (fp->status_info.status_id != ftStatus_Kirby_CopySamus_SpecialNStart)   &&
                (fp->status_info.status_id != ftStatus_Kirby_CopySamus_SpecialAirNStart)&&
                (fp->status_info.status_id != ftStatus_Kirby_CopySamus_SpecialNLoop)    &&
                (fp->status_info.status_id != ftStatus_Kirby_CopySamus_SpecialAirNEnd)  &&
                (fp->fighter_vars.kirby.copysamus_charge_level < FTKIRBY_COPYSAMUS_CHARGE_MAX)
            )
            {
                ftComputerSetCommandWait(fp, 0xB);
                return TRUE;
            }
            break;
        }
        break;
    }
    return FALSE;
}

// 0x80136C0C
sb32 ftComputerCheckTryCancelSpecialN(ftStruct *fp)
{
    switch ((fp->ft_kind == Ft_Kind_Kirby) ? fp->fighter_vars.kirby.copy_id : fp->ft_kind)
    {
    case Ft_Kind_Donkey:
    case Ft_Kind_GiantDonkey:
        if
        (
            (fp->status_info.status_id == ftStatus_Donkey_SpecialNStart)                ||
            (fp->status_info.status_id == ftStatus_Donkey_SpecialAirNStart)             ||
            (fp->status_info.status_id == ftStatus_Donkey_SpecialNLoop)                 ||
            (fp->status_info.status_id == ftStatus_Donkey_SpecialAirNLoop)              ||
            (fp->status_info.status_id == ftStatus_Kirby_CopyDonkey_SpecialNStart)      ||
            (fp->status_info.status_id == ftStatus_Kirby_CopyDonkey_SpecialAirNStart)   ||
            (fp->status_info.status_id == ftStatus_Kirby_CopyDonkey_SpecialNLoop)       ||
            (fp->status_info.status_id == ftStatus_Kirby_CopyDonkey_SpecialAirNLoop)
        )
        {
            ftComputerSetCommandWait(fp, 0xC);
            return TRUE;
        }
        break;

    case Ft_Kind_Samus:
        if
        (
            (fp->status_info.status_id == ftStatus_Samus_SpecialNStart)             ||
            (fp->status_info.status_id == ftStatus_Samus_SpecialAirNStart)          ||
            (fp->status_info.status_id == ftStatus_Samus_SpecialNLoop)              ||
            (fp->status_info.status_id == ftStatus_Samus_SpecialAirNEnd)            ||
            (fp->status_info.status_id == ftStatus_Kirby_CopySamus_SpecialNStart)   ||
            (fp->status_info.status_id == ftStatus_Kirby_CopySamus_SpecialAirNStart)||
            (fp->status_info.status_id == ftStatus_Kirby_CopySamus_SpecialNLoop)    ||
            (fp->status_info.status_id == ftStatus_Kirby_CopySamus_SpecialAirNEnd)
        )
        {
            ftComputerSetCommandWait(fp, 0xC);
            return TRUE;
        }
        break;
    }
    return FALSE;
}

// 0x80136D0C
s32 func_ovl3_80136D0C(GObj *this_gobj)
{
    ftStruct *this_fp = ftGetStruct(this_gobj);
    ftComputer *ft_com = &this_fp->fighter_com;
    s32 action_wait;
    Vec3f tarucann_pos;
    f32 acid_level_x;
    f32 acid_level_y;
    f32 fvar;

    if (this_fp->status_info.status_id == ftStatus_Common_CliffWait)
    {
        action_wait = (this_fp->status_vars.common.cliffwait.fall_wait > 480) ?
                      (1080- this_fp->status_vars.common.cliffwait.fall_wait) :
                      (480 - this_fp->status_vars.common.cliffwait.fall_wait) ;

        if (lbRandom_GetFloat() < 0.01F)
        {
            action_wait *= 2;
        }
        if (((9 - this_fp->cp_level) * 15) < action_wait)
        {
            if (lbRandom_GetFloat() < 0.4F)
            {
                ftComputerSetCommandWait(this_fp, 0x28);
                return 0;
            }
            else if (lbRandom_GetFloat() < 0.5F)
            {
                ftComputerSetCommandWait(this_fp, 0xC);
                return 0;
            }
            else ftComputerSetCommandWait(this_fp, 4);
            return 0;
        }
    }
    if ((this_fp->status_info.status_id == ftStatus_Common_DownWaitD) || (this_fp->status_info.status_id == ftStatus_Common_DownWaitU))
    {
        action_wait = 180 - this_fp->status_vars.common.downwait.stand_wait;

        if (((9 - this_fp->cp_level) * 25) < action_wait)
        {
            ftComputerCheckFindTarget(this_fp);

            if ((this_fp->ft_kind != Ft_Kind_GiantDonkey) && (ft_com->target_dist < 800.0F) && (this_fp->cp_level >= 4))
            {
                if ((lbRandom_GetFloat() * (11 - this_fp->cp_level)) < 1.0F)
                {
                    if (ft_com->target_pos.x < this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x)
                    {
                        ftComputerSetCommandWait(this_fp, 0x2D);
                        return 0;
                    }
                    ftComputerSetCommandWait(this_fp, 0x2E);
                    return 0;
                }
            }
            ftComputerSetCommandWait(this_fp, 0x28);
            return 0;
        }
    }
    if 
    (
        (this_fp->status_info.status_id == ftStatus_Common_OttottoWait) ||
        (this_fp->status_info.status_id == ftStatus_Common_Ottotto)     ||
        (this_fp->status_info.status_id == ftStatus_Common_SquatWait)
    )
    {
        ftComputerSetCommandWait(this_fp, 4);
        return 0;
    }
    if (this_fp->status_info.status_id == ftStatus_Common_TaruCann)
    {
        grJungle_TaruCann_GetPosition(&tarucann_pos);

        tarucann_pos.y = 2000.0F;

        if (func_ovl2_800F8FFC(&tarucann_pos) != FALSE)
        {
            fvar = ((grJungle_TaruCann_GetRotate() < 0.0F) ? -grJungle_TaruCann_GetRotate() : grJungle_TaruCann_GetRotate());

            if (fvar < 0.05F)
            {
                ftComputerSetCommandImmediate(this_fp, 0x28);
                return 0;
            }
        }
    }
    if (this_fp->status_info.status_id == ftStatus_Common_CatchWait)
    {
        if (this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x < 0.0F)
        {
            ftComputerSetCommandImmediate(this_fp, 0x1E);
            return 0;
        }
        else ftComputerSetCommandImmediate(this_fp, 0x1F);
        return 0;
    }

    if
    (
        (this_fp->status_info.status_id == ftStatus_Common_CaptureWaitKirby) ||
        (this_fp->status_info.status_id == ftStatus_Common_YoshiEgg)         ||
        (this_fp->status_info.status_id == ftStatus_Common_FuraFura)         ||
        (this_fp->status_info.status_id == ftStatus_Common_FuraSleep)        ||
        (this_fp->status_info.status_id == ftStatus_Common_Shouldered)
    )
    {
        ft_com->target_find_wait++;

        if (((9 - this_fp->cp_level) * 15) < ft_com->target_find_wait)
        {
            ftComputerSetCommandWait(this_fp, 0x2C);
            return 0;
        }
    }
    else ft_com->target_find_wait = 0;

    if (this_fp->ft_kind == Ft_Kind_Kirby)
    {
        if
        (
            (this_fp->status_info.status_id == ftStatus_Kirby_SpecialNCatch)    ||
            (this_fp->status_info.status_id == ftStatus_Kirby_SpecialAirNCatch) ||
            (this_fp->status_info.status_id == ftStatus_Kirby_SpecialNEat)      ||
            (this_fp->status_info.status_id == ftStatus_Kirby_SpecialAirNEat)
        )
        {
            ftComputerSetCommandImmediate(this_fp, 0);
            return 0;
        }
        else if ((this_fp->status_info.status_id == ftStatus_Kirby_SpecialNWait) || (this_fp->status_info.status_id == ftStatus_Kirby_SpecialAirNWait))
        {
            ftComputerSetCommandWait(this_fp, 0x1B);
            return 0;
        }
    }
    if (this_fp->ft_kind == Ft_Kind_Ness)
    {
        if ((this_fp->status_info.status_id == ftStatus_Ness_SpecialHiHold) || (this_fp->status_info.status_id == ftStatus_Ness_SpecialAirHiHold))
        {
            if (func_ovl2_800F8FFC(&this_fp->joint[ftParts_Joint_TopN]->translate.vec.f) == FALSE)
            {
                ft_com->target_pos.x = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;

                if (this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x > 0.0F)
                {
                    ft_com->target_pos.x += 200.0F;
                }
                else ft_com->target_pos.x -= 200.0F;

                ft_com->target_pos.y = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y - 100.0F;
            }
            else ftComputerCheckFindTarget(this_fp);

            ftComputerSetCommandImmediate(this_fp, 0x30);
            return 0;
        }
    }
    if (this_fp->ground_or_air == GA_Ground)
    {
        if
        (
            (
                SQUARE(this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x - ft_com->unk_ftcom_0x80) + 
                SQUARE(this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y - ft_com->unk_ftcom_0x84) > 10000.0F
            ) 
            ||
            (ft_com->behavior_set == 0xF)
        )
        {
            ft_com->unk_ftcom_0x80 = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;
            ft_com->unk_ftcom_0x84 = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;
            ft_com->unk_ftcom_0x2C = 0;
            ft_com->ftcom_flags_0x4A_b2 = FALSE;
        }
        else
        {
            ft_com->unk_ftcom_0x2C++;

            if (ft_com->unk_ftcom_0x2C > 300)
            {
                ft_com->ftcom_flags_0x4A_b2 = TRUE;
            }
        }
    }
    else
    {
        ft_com->unk_ftcom_0x2C = 0;
        ft_com->ftcom_flags_0x4A_b2 = FALSE;
    }
    if (ft_com->ftcom_flags_0x4A_b2)
    {
        ftComputerSetCommandImmediate(this_fp, 4);
        return 0;
    }
    if (this_fp->percent_damage != 0)
    {
        switch (ft_com->behavior_set)
        {
        case 7:
            if (((this_fp->cp_level - 4) * 0.01F) <= lbRandom_GetFloat())
            {
                return -1;
            }
            /* fallthrough */
        case 8:
            if (((this_fp->cp_level - 3) * 0.03F) <= lbRandom_GetFloat())
            {
                return -1;
            }
            break;

        case 9:
            if ((this_fp->cp_level * 0.04F) <= lbRandom_GetFloat())
            {
                return -1;
            }
            break;
        }
    }
    if
    (
        (func_ovl2_800F8FFC(&this_fp->joint[ftParts_Joint_TopN]->translate.vec.f) == FALSE) ||
        (gBattleState->gr_kind == Gr_Kind_Inishie) &&
        (this_fp->coll_data.ground_line_id >= 0) &&
        (mpCollision_CheckExistPlatformLineID(this_fp->coll_data.ground_line_id) != FALSE) &&
        (this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y < -100.0F)
    )
    {
        if (ft_com->behave_current != 4)
        {
            ft_com->ftcom_flags_0x49_b7 = FALSE;
        }
        ft_com->behave_current = 4;
        return 1;
    }
    if (gBattleState->gr_kind == Gr_Kind_Zebes)
    {
        grCommon_Zebes_GetAcidLevelInfo(&acid_level_x, &acid_level_y);

        if
        (
            (this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y < (acid_level_x + 500.0F)) ||
            (this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y < (acid_level_x + (5.0F * acid_level_y) + 500.0F))
        )
        {
            ft_com->behave_current = 4;
            return 1;
        }
    }
    ft_com->ftcom_flags_0x49_b0 = FALSE;

    if (ft_com->behave_current == 4)
    {
        ft_com->behave_current = 1;
    }
    fvar = 0.0F;

    if ((this_fp->status_info.status_id == ftStatus_Common_DamageFall) && (((this_fp->phys_info.vel_air.y * 5.0F) - this_fp->coll_data.ground_dist) <= fvar))
    {
        if (!(ft_com->ftcom_flags_0x49_b3))
        {
            ft_com->ftcom_flags_0x49_b3 = TRUE;

            if (this_fp->cp_level >= 3)
            {
                if ((lbRandom_GetFloat() * (325 - (this_fp->cp_level * 25))) < 70.0F)
                {
                    ft_com->behave_current = 7;
                    ft_com->ftcom_flags_0x49_b4 = TRUE;
                    return 1;
                }
            }
        }
    }
    else ft_com->ftcom_flags_0x49_b3 = FALSE;

    if (this_fp->fighter_com.unk_ftcom_0x28 != this_fp->attack_hit_count)
    {
        this_fp->fighter_com.unk_ftcom_0x28 = this_fp->attack_hit_count;

        if (this_fp->attack_knockback > 160.0F)
        {
            ft_com->unk_ftcom_0x2A = 60;
        }
    }
    if (ft_com->unk_ftcom_0x2A != 0)
    {
        ft_com->unk_ftcom_0x2A--;

        if ((gBattleState->gr_kind == Gr_Kind_Inishie) || (gBattleState->gr_kind == Gr_Kind_Yoster))
        {
            if (this_fp->coll_data.ground_line_id >= 0)
            {
                if (mpCollision_CheckExistPlatformLineID(this_fp->coll_data.ground_line_id) != FALSE)
                {
                    return -1;
                }
            }
        }
        if (ft_com->target_dist > 2500.0F)
        {
            switch (this_fp->status_info.status_id)
            {
            case ftStatus_Common_Wait:
            case ftStatus_Common_WalkSlow:
            case ftStatus_Common_WalkMiddle:
            case ftStatus_Common_WalkFast:
            case ftStatus_Common_Dash:
            case ftStatus_Common_Run:
            case ftStatus_Common_RunBrake:
            case ftStatus_Common_Squat:
            case ftStatus_Common_SquatWait:
            case ftStatus_Common_SquatRv:
            case ftStatus_Common_LandingLight:
            case ftStatus_Common_OttottoWait:
            case ftStatus_Common_Ottotto:
                ft_com->unk_ftcom_0x2A = 0;
                ftComputerSetCommandWait(this_fp, 0xF);
                return 0;
            }
        }
    }
    return -1;
}

// 0x80137778
s32 func_ovl3_80137778(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftComputer *ft_com = &fp->fighter_com;
    s32 temp_v0 = func_ovl3_80136D0C(fighter_gobj);

    if ((temp_v0 == 0) || (temp_v0 == 1))
    {
        return temp_v0;
    }
    if (ftComputerCheckEvade(fp) != FALSE)
    {
        ft_com->behave_current = 3;
        return 1;
    }
    if ((fp->ft_kind != Ft_Kind_MetalMario) && (fp->ft_kind != Ft_Kind_GiantDonkey))
    {
        if (func_ovl3_80135B78(fp) != FALSE)
        {
            ft_com->behave_current = 7;
            return 1;
        }
    }
    switch (fp->ft_kind)
    {
    case Ft_Kind_Fox:
    case Ft_Kind_PolyFox:
        if ((fp->status_info.status_id >= ftStatus_Fox_SpecialLwScopeStart) && (fp->status_info.status_id <= ftStatus_Fox_SpecialLwScopeEnd))
        {
            ftComputerSetCommandWait(fp, 0x26);
            return 0;
        }
        break;

    case Ft_Kind_Ness:
    case Ft_Kind_PolyNess:
        if ((fp->status_info.status_id >= ftStatus_Ness_SpecialLwScopeStart) && (fp->status_info.status_id <= ftStatus_Ness_SpecialLwScopeEnd))
        {
            ftComputerSetCommandWait(fp, 0x26);
            return 0;
        }
        break;
    }
    if ((fp->status_info.status_id >= ftStatus_Common_GuardStart) && (fp->status_info.status_id <= ftStatus_Common_GuardEnd))
    {
        ftComputerSetCommandWait(fp, 0x24);
        return 0;
    }
    else ftComputerCheckFindTarget(fp);

    if (ft_com->target_dist < 350.0F)
    {
        ft_com->behave_current = 2;
        return 1;
    }
    else if (ftComputerCheckFindItem(fp) != FALSE)
    {
        if (ft_com->target_dist < (400.0F * (fp->cp_level + 3)))
        {
            s32 pickup_wait = (gBattleState->game_type == gmMatch_GameType_1PGame) ? (-fp->cp_level * 35) + 315 : (-fp->cp_level * 25) + 225;

            ft_com->item_pickup_wait++;

            if (pickup_wait < ft_com->item_pickup_wait)
            {
                ft_com->behave_current = 5;
                return 1;
            }
        }
    }
    else ft_com->item_pickup_wait = 0;

    if (fp->item_hold != NULL)
    {
        itStruct *ip = itGetStruct(fp->item_hold);

        switch (ip->type)
        {
        case It_Type_Ground:
        case It_Type_Shoot:
        case It_Type_Throw:
            ft_com->behave_current = 6;
            return 1;

        default:
            ft_com->behave_current = 2;
            return 1;
        }
    }
    else ft_com->behave_current = ft_com->behave_default;
    return 1;
}

// 0x80137A18
s32 func_ovl3_80137A18(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftComputer *ft_com = &fp->fighter_com;
    s32 temp_v0 = func_ovl3_80136D0C(fighter_gobj);

    ft_com->ftcom_flags_0x4A_b1 = FALSE;

    if ((temp_v0 == 0) || (temp_v0 == 1))
    {
        return temp_v0;
    }
    if (fp->status_info.status_id == ftStatus_Common_RebirthWait)
    {
        ft_com->target_pos.x = ft_com->unk_ftcom_0x70;
        ft_com->target_pos.y = ft_com->unk_ftcom_0x74;
        ft_com->target_line_id = ft_com->unk_ftcom_0x88;

        ft_com->behave_current = 1;
    }
    else ft_com->behave_current = 0;

    return 1;
}

// 0x80137AA4
s32 func_ovl3_80137AA4(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftComputer *ft_com = &fp->fighter_com;
    s32 temp_v0 = func_ovl3_80136D0C(fighter_gobj);
    Vec3f edge_left_pos;
    Vec3f edge_right_pos;
    f32 dist;

    ft_com->ftcom_flags_0x4A_b1 = FALSE;

    if ((temp_v0 == 0) || (temp_v0 == 1))
    {
        return temp_v0;
    }
    ft_com->target_pos.y = ft_com->unk_ftcom_0x74;
    ft_com->target_line_id = ft_com->unk_ftcom_0x88;

    if (GS_DISTANCE(ft_com->target_pos.x, fp->joint[ftParts_Joint_TopN]->translate.vec.f.x) < 100.0F)
    {
        ft_com->target_pos.x = (((2.0 * lbRandom_GetFloat()) - 1.0) * 2500.0) + ft_com->unk_ftcom_0x70;

        if ((ft_com->unk_ftcom_0x88 < 0) || (mpCollision_CheckExistLineID(ft_com->unk_ftcom_0x88) == FALSE))
        {
            ft_com->target_pos.x = ft_com->unk_ftcom_0x70;
        }
        else
        {
            mpCollision_GetLREdgeLeft(ft_com->unk_ftcom_0x88, &edge_left_pos);
            mpCollision_GetLREdgeRight(ft_com->unk_ftcom_0x88, &edge_right_pos);

            if (ft_com->target_pos.x < edge_left_pos.x)
            {
                ft_com->target_pos.x = edge_left_pos.x;
                ft_com->target_pos.y = edge_left_pos.y;
            }
            if (ft_com->target_pos.x > edge_right_pos.x)
            {
                ft_com->target_pos.x = edge_right_pos.x;
                ft_com->target_pos.y = edge_right_pos.y;
            }
        }
    }
    ft_com->behave_current = 1;

    dist = SQUARE(ft_com->target_pos.x - fp->joint[ftParts_Joint_TopN]->translate.vec.f.x) + SQUARE(ft_com->target_pos.y - fp->joint[ftParts_Joint_TopN]->translate.vec.f.y);

    if (dist < 10000.0F)
    {
        ft_com->behave_current = 0;
    }
    return 1;
}

// 0x80137C7C
s32 func_ovl3_80137C7C(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftComputer *ft_com = &fp->fighter_com;
    s32 temp_v0 = func_ovl3_80136D0C(fighter_gobj);

    ft_com->ftcom_flags_0x4A_b1 = FALSE;

    if ((temp_v0 == 0) || (temp_v0 == 1))
    {
        return temp_v0;
    }
    ft_com->behave_current = 3;

    return 1;
}

// 0x80137CD8
s32 func_ovl3_80137CD8(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftComputer *ft_com = &fp->fighter_com;
    s32 temp_v0 = func_ovl3_80136D0C(fighter_gobj);
    f32 dist;

    ft_com->ftcom_flags_0x4A_b1 = FALSE;

    if ((temp_v0 == 0) || (temp_v0 == 1))
    {
        return temp_v0;
    }
    ft_com->target_pos.x = ft_com->unk_ftcom_0x70;

    if (ft_com->unk_ftcom_0x10 == 0)
    {
        ft_com->unk_ftcom_0x10 = (lbRandom_GetFloat() * 30.0F) + 30.0F;
        ft_com->target_pos.y = ft_com->unk_ftcom_0x74 + 1100.0F;
        ft_com->target_line_id = -1;
    }
    else
    {
        ft_com->target_pos.y = ft_com->unk_ftcom_0x74;
        ft_com->target_line_id = ft_com->unk_ftcom_0x88;
        ft_com->unk_ftcom_0x10--;
    }
    ft_com->behave_current = 1;

    dist = SQUARE(ft_com->target_pos.x - fp->joint[ftParts_Joint_TopN]->translate.vec.f.x) + SQUARE(ft_com->target_pos.y - fp->joint[ftParts_Joint_TopN]->translate.vec.f.y);

    if (dist < 10000.0F)
    {
        ft_com->behave_current = 0;
    }
    return 1;
}

// 0x80137E70
s32 func_ovl3_80137E70(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftComputer *ft_com = &fp->fighter_com;
    s32 temp_v0 = func_ovl3_80136D0C(fighter_gobj);
    f32 dist;

    ft_com->ftcom_flags_0x4A_b1 = FALSE;

    if ((temp_v0 == 0) || (temp_v0 == 1))
    {
        return temp_v0;
    }
    ft_com->target_pos.x = ft_com->unk_ftcom_0x70;
    ft_com->target_pos.y = ft_com->unk_ftcom_0x74;
    ft_com->target_line_id = ft_com->unk_ftcom_0x88;

    ft_com->behave_current = 1;

    dist = SQUARE(ft_com->target_pos.x - fp->joint[ftParts_Joint_TopN]->translate.vec.f.x) + SQUARE(ft_com->target_pos.y - fp->joint[ftParts_Joint_TopN]->translate.vec.f.y);

    if (dist < 10000.0F)
    {
        ft_com->behave_current = 0;
    }
    return 1;
}

// 0x80137F24
void func_ovl3_80137F24(ftStruct *fp)
{
    ftComputer *ft_com = &fp->fighter_com;

    if (ftComputerCheckTryCancelSpecialN(fp) == FALSE)
    {
        func_ovl3_80134964(fp);

        if (fp->ft_kind == Ft_Kind_Pikachu)
        {
            switch (fp->status_info.status_id)
            {
            case ftStatus_Pikachu_SpecialAirHiStart:
                ft_com->target_pos.x = fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;
                ft_com->target_pos.y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y + 1100.0F;
                break;
            case ftStatus_Pikachu_SpecialAirHi:
                ft_com->target_pos.x = 0.0F;
                ft_com->target_pos.y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;
                break;
            }
        }
        func_ovl3_80134E98(fp);
    }
}

// 0x80137FD4
void func_ovl3_80137FD4(ftStruct *fp)
{
    ftComputer *ft_com = &fp->fighter_com;

    func_ovl3_801361BC(fp);

    if (ft_com->ftcom_flags_0x49_b4)
    {
        ftComputerSetCommandImmediate(fp, 0x10);

        ft_com->ftcom_flags_0x49_b4 = FALSE;
    }
    else if (ft_com->ftcom_flags_0x49_b6)
    {
        ft_com->ftcom_flags_0x49_b6 = FALSE;

        switch (fp->ft_kind)
        {
        case Ft_Kind_Fox:
        case Ft_Kind_PolyFox:
            if ((fp->status_info.status_id < ftStatus_Fox_SpecialLwScopeStart) || (fp->status_info.status_id > ftStatus_Fox_SpecialLwScopeEnd))
            {
                ftComputerSetCommandImmediate(fp, 0x25);
            }
            break;

        case Ft_Kind_Ness:
        case Ft_Kind_PolyNess:
            if ((fp->status_info.status_id < ftStatus_Ness_SpecialLwScopeStart) || (fp->status_info.status_id > ftStatus_Ness_SpecialLwScopeEnd))
            {
                ftComputerSetCommandImmediate(fp, 0x25);
            }
            break;
        }
    }
    else if (ft_com->ftcom_flags_0x49_b5)
    {
        ft_com->ftcom_flags_0x49_b5 = FALSE;

        if ((fp->status_info.status_id < ftStatus_Common_GuardStart) || (fp->status_info.status_id > ftStatus_Common_GuardEnd))
        {
            ftComputerSetCommandImmediate(fp, 0x23);
        }
    }
    else func_ovl3_80134E98(fp);
}

// 0x80138104
void func_ovl3_80138104(ftStruct *fp)
{
    if ((ftComputerCheckTargetItemInRange(fp) != FALSE))
    {
        if ((fp->status_info.status_id == ftStatus_Common_Wait) || (fp->status_info.status_id == ftStatus_Common_Squat))
        {
            ftComputerSetCommandWait(fp, 0x28);
            return;
        }
    }
    func_ovl3_80134E98(fp);
}

// 0x8013815C
void ftComputerSetUseItem(ftStruct *fp)
{
    ftComputer *ft_com = &fp->fighter_com;
    itStruct *ip = itGetStruct(fp->item_hold);
    ftStruct *target_fp;

    switch (ip->type)
    {
    case It_Type_Shoot:
        if (ip->it_multi != 0)
        {
            ftComputerCheckFindTarget(fp);
            target_fp = ftGetComTargetFighter(ft_com);

            if ((fp->cp_level >= 5) && (target_fp != NULL))
            {
                if ((target_fp->ft_kind == Ft_Kind_Ness) || (target_fp->ft_kind == Ft_Kind_Fox))
                {
                    ftComputerSetCommandWait(fp, 0x2A);
                    return;
                }
            }
            if (GS_DISTANCE(fp->joint[ftParts_Joint_TopN]->translate.vec.f.y, ft_com->target_pos.y) < 400.0F)
            {
                if
                (
                    (ip->it_kind == It_Kind_FFlower) &&
                    (
                        ((ft_com->target_pos.x - fp->joint[ftParts_Joint_TopN]->translate.vec.f.x) * fp->lr < 0.0F)     ||
                        ((ft_com->target_pos.x - fp->joint[ftParts_Joint_TopN]->translate.vec.f.x) * fp->lr > 1500.0F)
                    )
                )
                {
                    func_ovl3_80134E98(fp);
                }
                else ftComputerSetCommandWait(fp, 0x29);
            }
            else func_ovl3_80134E98(fp);

            ft_com->unk_ftcom_0x34 = 0;
            return;
        }
        ft_com->unk_ftcom_0x34++;
        /* fallthrough */
    case It_Type_Ground:
    case It_Type_Throw:
        ftComputerCheckFindTarget(fp);

        if ((ft_com->unk_ftcom_0x34 >= 3) || (ip->it_kind == It_Kind_MBall))
        {
            ftComputerSetCommandWait(fp, 0x2B);

            ft_com->unk_ftcom_0x34 = 0;
        }
        else ftComputerSetCommandWait(fp, 0x2A);
        break;
    }
}

// 0x8013834C
void func_ovl3_8013834C(ftStruct *fp)
{
    if (func_ovl3_801366F0(fp) != FALSE)
    {
        func_ovl3_80134E98(fp);
    }
}

s32 func_ovl3_8013837C(ftStruct *this_fp)
{
    ftComputer *ft_com = &this_fp->fighter_com;

    if ((this_fp->fighter_com.behavior_set != 7) && (this_fp->ft_kind != Ft_Kind_GiantDonkey))
    {
        ftStruct *target_fp = ftComputerWaitGetTarget(this_fp);

        if (target_fp != NULL)
        {
            ft_com->target_user = target_fp;
            ft_com->target_pos.x = target_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;
            ft_com->target_pos.y = target_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;

            ft_com->target_dist = sqrtf
            (
                SQUARE(this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x - ft_com->target_pos.x) +
                SQUARE(this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y - ft_com->target_pos.y)
            );
            ft_com->ftcom_flags_0x4A_b1 = TRUE;

            if (ftGetComTargetFighter(ft_com)->ground_or_air == GA_Ground)
            {
                ft_com->target_line_id = ftGetComTargetFighter(ft_com)->coll_data.ground_line_id;
            }
            else ft_com->target_line_id = -1;

            return 1;
        }
    }
    if ((ftComputerCheckFindTarget(this_fp) == 0) || (ft_com->unk_timer_0x1A == 0))
    {
        ft_com->unk_timer_0x1A = 1;

        // NOTE: This only trims the (lbRandom_GetFloat() * (9 - this_fp->cp_level) * 4.0F) part to 8-bits.
        ft_com->unk_timer_0x1C = (u8)(lbRandom_GetFloat() * (9 - this_fp->cp_level) * 4.0F) + ((9 - this_fp->cp_level) * 16);

        if (ft_com->behavior_set == 7)
        {
            ft_com->unk_timer_0x1C += (300.0F + (lbRandom_GetFloat() * 300.0F));
        }
        ft_com->unk_ftcom_0x1E = ((lbRandom_GetFloat() * 120.0F) + (ft_com->unk_timer_0x1C + 120));

        return 0;
    }
    if (ft_com->unk_timer_0x1C < ++ft_com->unk_timer_0x1A)
    {
        if (ft_com->unk_ftcom_0x1E < ft_com->unk_timer_0x1A)
        {
            ft_com->unk_timer_0x1A = 0;
        }
        if (ft_com->target_dist < 1200.0F)
        {
            if (ftComputerCheckTryCancelSpecialN(this_fp) != FALSE)
            {
                return -1;
            }
        }
        else if ((this_fp->ground_or_air == GA_Ground) && (ftComputerCheckTryChargeSpecialN(this_fp) != FALSE))
        {
            return -1;
        }
        return 1;
    }
    return 0;
}

// 0x8013877C
void func_ovl3_8013877C(ftStruct *this_fp)
{
    ftComputer *ft_com = &this_fp->fighter_com;
    Vec3f edge_left_pos;
    Vec3f edge_right_pos;
    s32 unused[2];

    ft_com->unk_ftcom_0x18++;

    if (ft_com->unk_ftcom_0x18 >= 30)
    {
        if (ft_com->unk_ftcom_0x18 == 30)
        {
            if (this_fp->coll_data.ground_line_id >= 0)
            {
                ft_com->unk_ftcom_0x88 = this_fp->coll_data.ground_line_id;

                ft_com->unk_ftcom_0x78 = ft_com->unk_ftcom_0x70 = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;

                if (this_fp->ground_or_air == GA_Ground)
                {
                    ft_com->unk_ftcom_0x7C = ft_com->unk_ftcom_0x74 = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;
                }
                else ft_com->unk_ftcom_0x7C = ft_com->unk_ftcom_0x74 = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y + this_fp->coll_data.ground_dist;
            }
            else
            {
                ft_com->unk_ftcom_0x78 = ft_com->unk_ftcom_0x70;
                ft_com->unk_ftcom_0x7C = ft_com->unk_ftcom_0x74;
            }
        }
        ft_com->target_line_id = ft_com->unk_ftcom_0x88;

        if ((ft_com->target_line_id < 0) || (mpCollision_CheckExistLineID(ft_com->target_line_id) == FALSE))
        {
            if (ftComputerCheckFindTarget(this_fp) != FALSE)
            {
                func_ovl3_80134E98(this_fp);
            }
        }
        else
        {
            if (GS_DISTANCE(ft_com->unk_ftcom_0x78, this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x) < 100.0F)
            {
                ft_com->unk_ftcom_0x78 = (((2.0 * lbRandom_GetFloat()) - 1.0) * 2500.0) + ft_com->unk_ftcom_0x70;

                mpCollision_GetLREdgeLeft(ft_com->unk_ftcom_0x88, &edge_left_pos);
                mpCollision_GetLREdgeRight(ft_com->unk_ftcom_0x88, &edge_right_pos);

                if (ft_com->unk_ftcom_0x78 < edge_left_pos.x)
                {
                    ft_com->unk_ftcom_0x78 = edge_left_pos.x;
                    ft_com->unk_ftcom_0x7C = edge_left_pos.y;
                }
                if (ft_com->unk_ftcom_0x78 > edge_right_pos.x)
                {
                    ft_com->unk_ftcom_0x78 = edge_right_pos.x;
                    ft_com->unk_ftcom_0x7C = edge_right_pos.y;
                }
            }
            ft_com->target_pos.x = ft_com->unk_ftcom_0x78;
            ft_com->target_pos.y = ft_com->unk_ftcom_0x7C;

            ft_com->ftcom_flags_0x4A_b1 = FALSE;

            func_ovl3_80134E98(this_fp);

            if (ft_com->unk_ftcom_0x18 > 150)
            {
                ft_com->unk_ftcom_0x18 = 0;
            }
        }
    }
    else
    {
        ft_com->input_wait = 1;
        ft_com->p_command = dFtComputerPlayerScripts[0];

        if ((ft_com->unk_ftcom_0x18 == ((-this_fp->cp_level * 2) + 18)) && (this_fp->ground_or_air == GA_Ground))
        {
            ftComputerCheckTryChargeSpecialN(this_fp);

            switch (this_fp->ft_kind)
            {
            case Ft_Kind_Link:
                if (ftComputerCheckFindTarget(this_fp) != FALSE)
                {
                    if (ft_com->target_dist < 1500.0F)
                    {
                        ftComputerSetCommandWait(this_fp, 0x1B);
                    }
                }
                break;

            case Ft_Kind_Ness:
                if (lbRandom_GetFloat(this_fp->ft_kind) < 0.25F) // what is haven't happening
                {
                    ftComputerSetCommandWait(this_fp, 0xD);
                }
                break;
            }
        }
    }
}

// 0x80138AA8
sb32 func_ovl3_80138AA8(ftStruct *this_fp, sb32 arg1)
{
    ftComputer *ft_com = &this_fp->fighter_com;
    Vec3f pos;
    Vec3f ga_last;
    s32 stand_line_id;
    s32 ft_kind;
    ftStruct *target_fp;

    target_fp = ft_com->target_user;

    if (GS_DISTANCE(this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.y, ft_com->target_pos.y) < 400.0F)
    {
        if (ft_com->unk_ftcom_0x35 == 0)
        {
            ft_com->unk_ftcom_0x35 = 2.0F * (lbRandom_GetFloat() * (9 - this_fp->cp_level));
        }
        if ((lbRandom_GetFloat() < ((this_fp->cp_level - 1) / 9.0F)) && (target_fp != NULL))
        {
            if ((target_fp->ft_kind == Ft_Kind_Ness) || (target_fp->ft_kind == Ft_Kind_Fox))
            {
                return FALSE;
            }
        }
        ft_kind = (this_fp->ft_kind == Ft_Kind_Kirby) ? this_fp->fighter_vars.kirby.copy_id : this_fp->ft_kind;

        if (ft_kind == Ft_Kind_Samus)
        {
            if
            (
                (this_fp->status_info.status_id == ftStatus_Samus_SpecialNStart)                ||
                (this_fp->status_info.status_id == ftStatus_Samus_SpecialAirNStart)             ||
                (this_fp->status_info.status_id == ftStatus_Samus_SpecialNLoop)                 ||
                (this_fp->status_info.status_id == ftStatus_Samus_SpecialAirNEnd)               ||
                (this_fp->status_info.status_id == ftStatus_Kirby_CopySamus_SpecialNStart)      ||
                (this_fp->status_info.status_id == ftStatus_Kirby_CopySamus_SpecialAirNStart)   ||
                (this_fp->status_info.status_id == ftStatus_Kirby_CopySamus_SpecialNLoop)       ||
                (this_fp->status_info.status_id == ftStatus_Kirby_CopySamus_SpecialAirNEnd)
            )
            {
                return FALSE;
            }
        }
        switch (ft_kind)
        {
        case Ft_Kind_Link:
            if (ft_com->target_dist < 1500.0F)
            {
                if (lbRandom_GetFloat() < 0.3F)
                {
                    ftComputerSetCommandWait(this_fp, 0x1B);
                }
            }
            /* fallthrough */
        case Ft_Kind_Mario:
        case Ft_Kind_Fox:
        case Ft_Kind_Samus:
        case Ft_Kind_Luigi:
        case Ft_Kind_Pikachu:
        case Ft_Kind_MetalMario:
            ft_com->unk_ftcom_0x35++;

            if (ft_com->unk_ftcom_0x35 >= 5)
            {
                func_ovl3_80134E98(this_fp);
                return TRUE;
            }
            pos = this_fp->joint[ftParts_Joint_TopN]->translate.vec.f;
            pos.x = ft_com->target_pos.x;
            pos.y = ft_com->target_pos.y;

            if (ft_com->target_pos.x < this_fp->joint[ftParts_Joint_TopN]->translate.vec.f.x)
            {
                if (mpCollision_CheckRWallLineCollisionSame(&this_fp->joint[ftParts_Joint_TopN]->translate.vec.f, &pos, &ga_last, &stand_line_id, NULL, NULL) != FALSE)
                {
                    return FALSE;
                }
                if (mpCollision_CheckGroundLineCollisionSame(&this_fp->joint[ftParts_Joint_TopN]->translate.vec.f, &pos, &ga_last, &stand_line_id, NULL, NULL) != FALSE)
                {
                    return FALSE;
                }
                if (mpCollision_CheckCeilLineCollisionSame(&this_fp->joint[ftParts_Joint_TopN]->translate.vec.f, &pos, &ga_last, &stand_line_id, NULL, NULL) != FALSE)
                {
                    return FALSE;
                }
            }
            else if (mpCollision_CheckLWallLineCollisionSame(&this_fp->joint[ftParts_Joint_TopN]->translate.vec.f, &pos, &ga_last, &stand_line_id, NULL, NULL) != FALSE)
            {
                return FALSE;
            }
            else if (mpCollision_CheckGroundLineCollisionSame(&this_fp->joint[ftParts_Joint_TopN]->translate.vec.f, &pos, &ga_last, &stand_line_id, NULL, NULL) != FALSE)
            {
                return FALSE;
            }
            else if (mpCollision_CheckCeilLineCollisionSame(&this_fp->joint[ftParts_Joint_TopN]->translate.vec.f, &pos, &ga_last, &stand_line_id, NULL, NULL) != FALSE)
            {
                return FALSE;
            }
            if (arg1 == FALSE)
            {
                ftComputerSetCommandQuadruple(this_fp, 9);
            }
            else ftComputerSetCommandQuadruple(this_fp, 10);

            return TRUE;
        }
    }
    return FALSE;
}

// 0x80138EE4
sb32 func_ovl3_80138EE4(ftStruct *fp)
{
    ftComputer *ft_com = &fp->fighter_com;
    s32 ft_kind;
    f32 random;
    Vec3f edge_left_pos;
    Vec3f edge_right_pos;

    if (fp->ft_kind == Ft_Kind_GiantDonkey)
    {
        return FALSE;
    }
    ft_kind = (fp->ft_kind == Ft_Kind_Kirby) ? fp->fighter_vars.kirby.copy_id : fp->ft_kind;

    if (ft_kind == Ft_Kind_Samus)
    {
        if
        (
           (fp->status_info.status_id == ftStatus_Samus_SpecialNStart)             ||
           (fp->status_info.status_id == ftStatus_Samus_SpecialAirNStart)          ||
           (fp->status_info.status_id == ftStatus_Samus_SpecialNLoop)              ||
           (fp->status_info.status_id == ftStatus_Samus_SpecialAirNEnd)            ||
           (fp->status_info.status_id == ftStatus_Kirby_CopySamus_SpecialNStart)   ||
           (fp->status_info.status_id == ftStatus_Kirby_CopySamus_SpecialAirNStart)||
           (fp->status_info.status_id == ftStatus_Kirby_CopySamus_SpecialNLoop)    ||
           (fp->status_info.status_id == ftStatus_Kirby_CopySamus_SpecialAirNEnd)
        )
        {
            return FALSE;
        }
    }
    if ((ft_kind == Ft_Kind_Donkey) || (ft_kind == Ft_Kind_PolyDonkey) || (ft_kind == Ft_Kind_GiantDonkey))
    {
        if
        (
            (fp->status_info.status_id == ftStatus_Donkey_SpecialNStart)                ||
            (fp->status_info.status_id == ftStatus_Donkey_SpecialAirNStart)             ||
            (fp->status_info.status_id == ftStatus_Donkey_SpecialNLoop)                 ||
            (fp->status_info.status_id == ftStatus_Donkey_SpecialAirNLoop)              ||
            (fp->status_info.status_id == ftStatus_Kirby_CopyDonkey_SpecialNStart)      ||
            (fp->status_info.status_id == ftStatus_Kirby_CopyDonkey_SpecialAirNStart)   ||
            (fp->status_info.status_id == ftStatus_Kirby_CopyDonkey_SpecialNLoop)       ||
            (fp->status_info.status_id == ftStatus_Kirby_CopyDonkey_SpecialAirNLoop)    ||
            (fp->status_info.status_id == ftStatus_Donkey_ThrowFWait)                   ||
            (fp->status_info.status_id == ftStatus_Donkey_ThrowFWalkSlow)               ||
            (fp->status_info.status_id == ftStatus_Donkey_ThrowFWalkMiddle)             ||
            (fp->status_info.status_id == ftStatus_Donkey_ThrowFWalkFast)               ||
            (fp->status_info.status_id == ftStatus_Donkey_ThrowFTurn)
        )
        {
            return FALSE;
        }
    }
    if (ft_com->ftcom_flags_0x4A_b1)
    {
        if ((ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_CliffCatch) || (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_CliffWait))
        {
            return FALSE;
        }
    }
    random = lbRandom_GetFloat();
    if
    (
        (fp->ground_or_air == GA_Ground) &&
        (
            (
                (ft_com->target_dist < ((random * 450.0F) + 350.0F) &&
                (
                    (
                        (fp->cp_level >= 4) &&
                        (lbRandom_GetFloat() * (11 - fp->cp_level)) < 1.0F) ||
                        (
                            (fp->cp_level >= 3) &&
                            (((ft_com->target_pos.x - fp->joint[ftParts_Joint_TopN]->translate.vec.f.x) * fp->lr) < 0.0F)
                        )
                    )
                )
                ||
                (
                    (ft_com->target_dist < 800.0F) &&
                    (fp->cp_level >= 7) &&
                    ((lbRandom_GetFloat() * (10 - fp->cp_level)) < 1.0F) &&
                    (((ft_com->target_pos.x - fp->joint[ftParts_Joint_TopN]->translate.vec.f.x) * ftGetComTargetFighter(ft_com)->lr) < 0.0F)
                )
            )
        )
    )
    {
        if (fp->coll_data.ground_line_id >= 0)
        {
            mpCollision_GetLREdgeLeft(fp->coll_data.ground_line_id, &edge_left_pos);
            mpCollision_GetLREdgeRight(fp->coll_data.ground_line_id, &edge_right_pos);

            if (ft_com->target_pos.x < fp->joint[ftParts_Joint_TopN]->translate.vec.f.x)
            {
                if (fp->joint[ftParts_Joint_TopN]->translate.vec.f.x < (edge_left_pos.x + 500.0F))
                {
                    return FALSE;
                }
            }
            else if (fp->joint[ftParts_Joint_TopN]->translate.vec.f.x > (edge_right_pos.x - 500.0F))
            {
                return FALSE;
            }
        }
        if (ft_com->target_pos.x < fp->joint[ftParts_Joint_TopN]->translate.vec.f.x)
        {
            ftComputerSetCommandWait(fp, 0x2D);
        }
        else ftComputerSetCommandWait(fp, 0x2E);

        return TRUE;
    }
    return FALSE;
}

// 0x801392C8
void func_ovl3_801392C8(ftStruct *fp)
{
    ftComputer *ft_com = &fp->fighter_com;
    s32 temp_v0 = func_ovl3_8013837C(fp);
    f32 random;
    sb32 var_a1;
    s32 unused[2];

    if (temp_v0 != 0)
    {
        if (temp_v0 != -1)
        {
            lbRandom_GetFloat();
            lbRandom_GetFloat();
            random = lbRandom_GetFloat();

            if (((fp->joint[ftParts_Joint_TopN]->translate.vec.f.x < ft_com->target_pos.x) && (fp->lr == LR_Right)) || ((fp->joint[ftParts_Joint_TopN]->translate.vec.f.x > ft_com->target_pos.x) && (fp->lr == LR_Left)))
            {
                var_a1 = FALSE;
            }
            else var_a1 = TRUE;

            if (ft_com->target_dist < ((random * 300.0F) + 1200.0F))
            {
                if (func_ovl3_80138EE4(fp) != FALSE)
                {
                    ft_com->unk_ftcom_0x35 = 0;
                    return;
                }
                if (ftComputerCheckDetectTarget(fp, 0.0F) != FALSE)
                {
                    ft_com->unk_ftcom_0x20 = 0;
                    ft_com->unk_ftcom_0x35 = 0;
                    return;
                }
                if (ftGetComTargetFighter(ft_com)->phys_info.vel_air.y > 30.0F)
                {
                    if (lbRandom_GetFloat() < ((fp->cp_level + 2) / 9.0F))
                    {
                        if
                        (
                            (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_DamageFlyHi)   ||
                            (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_DamageFlyN)    ||
                            (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_DamageFlyLw)   ||
                            (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_DamageFlyTop)  ||
                            (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_DamageFall)    ||
                            (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_DamageFlyRoll)
                        )
                        {
                            ftComputerSetCommandImmediate(fp, 4);
                            ft_com->unk_ftcom_0x18 = 0;
                            return;
                        }
                    }
                }
                if ((GS_DISTANCE(ft_com->target_pos.y, fp->joint[ftParts_Joint_TopN]->translate.vec.f.y) > 1500.0F) || (ft_com->unk_ftcom_0x20 != 0))
                {
                    func_ovl3_80134E98(fp);

                    ft_com->unk_ftcom_0x18 = 0;

                    if (ft_com->unk_ftcom_0x20 != 0)
                    {
                        ft_com->unk_ftcom_0x20--;
                    }
                }
                else
                {
                    if (lbRandom_GetFloat() < 0.05F)
                    {
                        ft_com->unk_ftcom_0x20 = (lbRandom_GetFloat() * 60.0F) + 30.0F;

                        func_ovl3_80134E98(fp);

                        ft_com->unk_ftcom_0x18 = 0;

                        return;
                    }
                    func_ovl3_8013877C(fp);
                }
            }
            else
            {
                ft_com->unk_ftcom_0x34 = 0;

                if (func_ovl3_80138AA8(fp, var_a1) != FALSE)
                {
                    ft_com->unk_ftcom_0x18 = 0;
                    return;
                }
                if ((fp->star_hitstatus == gmHitCollision_HitStatus_Invincible) || ((fp->item_hold != NULL) && (itGetStruct(fp->item_hold)->it_kind == It_Kind_Hammer)))
                {
                    func_ovl3_80134E98(fp);

                    ft_com->unk_ftcom_0x18 = 0;

                    return;
                }
                if ((GS_DISTANCE(ft_com->target_pos.y, fp->joint[ftParts_Joint_TopN]->translate.vec.f.y) > 1500.0F) || (ft_com->unk_ftcom_0x20 != 0))
                {
                    func_ovl3_80134E98(fp);

                    ft_com->unk_ftcom_0x18 = 0;

                    if (ft_com->unk_ftcom_0x20 != 0)
                    {
                        ft_com->unk_ftcom_0x20--;
                    }
                }
                else
                {
                    if (lbRandom_GetFloat() < 0.05F)
                    {
                        ft_com->unk_ftcom_0x20 = (lbRandom_GetFloat(fp) * 60.0F) + 30.0F;

                        func_ovl3_80134E98(fp);

                        ft_com->unk_ftcom_0x18 = 0;

                        return;
                    }
                    ft_com->unk_ftcom_0x35 = 0;

                    func_ovl3_8013877C(fp);
                }
            }
        }
    }
    else func_ovl3_8013877C(fp);
}

// 0x801397F4
void func_ovl3_801397F4(ftStruct *fp)
{
    ftComputer *ft_com = &fp->fighter_com;
    s32 temp_v0 = func_ovl3_8013837C(fp);
    f32 random;
    sb32 var_a1;
    s32 unused[2];

    if (temp_v0 != 0)
    {
        if (temp_v0 != -1)
        {
            lbRandom_GetFloat();
            lbRandom_GetFloat();
            random = lbRandom_GetFloat();

            if (((fp->joint[ftParts_Joint_TopN]->translate.vec.f.x < ft_com->target_pos.x) && (fp->lr == LR_Right)) || ((fp->joint[ftParts_Joint_TopN]->translate.vec.f.x > ft_com->target_pos.x) && (fp->lr == LR_Left)))
            {
                var_a1 = FALSE;
            }
            else var_a1 = TRUE;

            if (ft_com->target_dist < ((random * 300.0F) + 1200.0F))
            {
                if (func_ovl3_80138EE4(fp) != FALSE)
                {
                    ft_com->unk_ftcom_0x35 = 0;
                    return;
                }
                if (ftComputerCheckDetectTarget(fp, 0.0F) != FALSE)
                {
                    ft_com->unk_ftcom_0x35 = 0;
                    return;
                }
                if (ftGetComTargetFighter(ft_com)->phys_info.vel_air.y > 30.0F)
                {
                    if (lbRandom_GetFloat() < ((fp->cp_level + 5) / 9.0F))
                    {
                        if
                        (
                            (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_DamageFlyHi)   ||
                            (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_DamageFlyN)    ||
                            (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_DamageFlyLw)   ||
                            (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_DamageFlyTop)  ||
                            (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_DamageFall)    ||
                            (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_DamageFlyRoll)
                        )
                        {
                            ftComputerSetCommandImmediate(fp, 4);
                            ft_com->unk_ftcom_0x18 = 0;
                            return;
                        }
                    }
                }
                func_ovl3_80134E98(fp);
                ft_com->unk_ftcom_0x18 = 0;
            }
            else
            {
                ft_com->unk_ftcom_0x34 = 0;

                if (func_ovl3_80138AA8(fp, var_a1) != FALSE)
                {
                    ft_com->unk_ftcom_0x18 = 0;
                }
                else if ((fp->star_hitstatus == gmHitCollision_HitStatus_Invincible) || ((fp->item_hold != NULL) && (itGetStruct(fp->item_hold)->it_kind == It_Kind_Hammer)))
                {
                    func_ovl3_80134E98(fp);

                    ft_com->unk_ftcom_0x18 = 0;
                }
                else
                {
                    ft_com->unk_ftcom_0x35 = 0;

                    func_ovl3_80134E98(fp);

                    ft_com->unk_ftcom_0x18 = 0;
                }
            }
        }
    }
    else func_ovl3_8013877C(fp);
}

// 0x80139A60
void func_ovl3_80139A60(ftStruct *fp)
{
    ftComputer *ft_com = &fp->fighter_com;
    s32 temp_v0 = func_ovl3_8013837C(fp);
    f32 random;
    sb32 var_a1;
    s32 unused[2];

    if (temp_v0 != 0)
    {
        if (temp_v0 != -1)
        {
            lbRandom_GetFloat();
            lbRandom_GetFloat();
            random = lbRandom_GetFloat();

            if (((fp->joint[ftParts_Joint_TopN]->translate.vec.f.x < ft_com->target_pos.x) && (fp->lr == LR_Right)) || ((fp->joint[ftParts_Joint_TopN]->translate.vec.f.x > ft_com->target_pos.x) && (fp->lr == LR_Left)))
            {
                var_a1 = FALSE;
            }
            else var_a1 = TRUE;

            if (ft_com->target_dist < ((random * 300.0F) + 1200.0F))
            {
                if (func_ovl3_80138EE4(fp) != FALSE)
                {
                    ft_com->unk_ftcom_0x35 = 0;
                    return;
                }
                if (ftComputerCheckDetectTarget(fp, -0.5F) != FALSE)
                {
                    ft_com->unk_ftcom_0x35 = 0;
                    return;
                }
                func_ovl3_8013877C(fp);
                return;
            }
            ft_com->unk_ftcom_0x34 = 0;

            if (func_ovl3_80138AA8(fp, var_a1) != FALSE)
            {
                ft_com->unk_ftcom_0x18 = 0;
                return;
            }
            if ((fp->star_hitstatus == gmHitCollision_HitStatus_Invincible) || ((fp->item_hold != NULL) && (itGetStruct(fp->item_hold)->it_kind == It_Kind_Hammer)))
            {
                func_ovl3_80134E98(fp);

                ft_com->unk_ftcom_0x18 = 0;
                return;
            }
            if ((GS_DISTANCE(ft_com->target_pos.y, fp->joint[ftParts_Joint_TopN]->translate.vec.f.y) > 1500.0F) || (ft_com->unk_ftcom_0x20 != 0))
            {
                func_ovl3_80134E98(fp);

                ft_com->unk_ftcom_0x18 = 0;

                if (ft_com->unk_ftcom_0x20 != 0)
                {
                    ft_com->unk_ftcom_0x20--;
                }
            }
            else
            {
                if (lbRandom_GetFloat() < 0.01F)
                {
                    ft_com->unk_ftcom_0x20 = (lbRandom_GetFloat() * 60.0F) + 30.0F;

                    func_ovl3_80134E98(fp);

                    ft_com->unk_ftcom_0x18 = 0;
                    return;
                }
                ft_com->unk_ftcom_0x35 = 0;
                func_ovl3_8013877C(fp);
            }
        }
    }
    else func_ovl3_8013877C(fp);
}

// 0x80139D6C
void func_ovl3_80139D6C(ftStruct *fp)
{
    ftComputer *ft_com = &fp->fighter_com;
    s32 temp_v0 = func_ovl3_8013837C(fp);
    f32 random;
    sb32 var_a1;
    s32 unused[2];

    if (temp_v0 != 0)
    {
        if (temp_v0 != -1)
        {
            lbRandom_GetFloat();
            lbRandom_GetFloat();
            random = lbRandom_GetFloat();

            if (((fp->joint[ftParts_Joint_TopN]->translate.vec.f.x < ft_com->target_pos.x) && (fp->lr == LR_Right)) || ((fp->joint[ftParts_Joint_TopN]->translate.vec.f.x > ft_com->target_pos.x) && (fp->lr == LR_Left)))
            {
                var_a1 = FALSE;
            }
            else var_a1 = TRUE;

            if (ft_com->target_dist < ((random * 300.0F) + 1200.0F))
            {
                if (func_ovl3_80138EE4(fp) != FALSE)
                {
                    ft_com->unk_ftcom_0x35 = 0;
                    return;
                }
                if (ftComputerCheckDetectTarget(fp, 2.0F) != FALSE)
                {
                    ft_com->unk_ftcom_0x20 = 0;
                    ft_com->unk_ftcom_0x35 = 0;
                    return;
                }
                if (ftGetComTargetFighter(ft_com)->phys_info.vel_air.y > 30.0F)
                {
                    if (lbRandom_GetFloat() < ((fp->cp_level + 2) / 9.0F))
                    {
                        if
                        (
                            (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_DamageFlyHi)   ||
                            (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_DamageFlyN)    ||
                            (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_DamageFlyLw)   ||
                            (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_DamageFlyTop)  ||
                            (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_DamageFall)    ||
                            (ftGetComTargetFighter(ft_com)->status_info.status_id == ftStatus_Common_DamageFlyRoll)
                        )
                        {
                            ftComputerSetCommandImmediate(fp, 4);
                            ft_com->unk_ftcom_0x18 = 0;
                            return;
                        }
                    }
                }
                if ((GS_DISTANCE(ft_com->target_pos.y, fp->joint[ftParts_Joint_TopN]->translate.vec.f.y) > 1500.0F) || (ft_com->unk_ftcom_0x20 != 0))
                {
                    func_ovl3_80134E98(fp);

                    ft_com->unk_ftcom_0x18 = 0;

                    if (ft_com->unk_ftcom_0x20 != 0)
                    {
                        ft_com->unk_ftcom_0x20--;
                    }
                }
                else
                {
                    if (lbRandom_GetFloat() < 0.05F)
                    {
                        ft_com->unk_ftcom_0x20 = (lbRandom_GetFloat() * 60.0F) + 15.0F;

                        func_ovl3_80134E98(fp);

                        ft_com->unk_ftcom_0x18 = 0;
                        return;
                    }
                    else func_ovl3_8013877C(fp);
                }
            }
            else
            {
                ft_com->unk_ftcom_0x34 = 0;

                if (func_ovl3_80138AA8(fp, var_a1) != FALSE)
                {
                    ft_com->unk_ftcom_0x18 = 0;
                    return;
                }
                if ((fp->star_hitstatus == gmHitCollision_HitStatus_Invincible) || ((fp->item_hold != NULL) && (itGetStruct(fp->item_hold)->it_kind == It_Kind_Hammer)))
                {
                    func_ovl3_80134E98(fp);

                    ft_com->unk_ftcom_0x18 = 0;
                    return;
                }
                if ((GS_DISTANCE(ft_com->target_pos.y, fp->joint[ftParts_Joint_TopN]->translate.vec.f.y) > 1500.0F) || (ft_com->unk_ftcom_0x20 != 0))
                {
                    func_ovl3_80134E98(fp);

                    ft_com->unk_ftcom_0x18 = 0;

                    if (ft_com->unk_ftcom_0x20 != 0)
                    {
                        ft_com->unk_ftcom_0x20--;
                    }
                }
                else
                {
                    if (lbRandom_GetFloat() < 0.05F)
                    {
                        ft_com->unk_ftcom_0x20 = (lbRandom_GetFloat() * 60.0F) + 30.0F;

                        func_ovl3_80134E98(fp);

                        ft_com->unk_ftcom_0x18 = 0;
                        return;
                    }
                    ft_com->unk_ftcom_0x35 = 0;
                    func_ovl3_8013877C(fp);
                }
            }
        }
    }
    else func_ovl3_8013877C(fp);
}

// 0x8013A298
void func_ovl3_8013A298(ftStruct *fp)
{
    ftComputer *ft_com = &fp->fighter_com;
    f32 random;
    sb32 var_a1;
    s32 unused;

    if (ftComputerCheckFindTarget(fp) != FALSE)
    {
        lbRandom_GetFloat(fp);
        random = lbRandom_GetFloat();

        if (((fp->joint[ftParts_Joint_TopN]->translate.vec.f.x < ft_com->target_pos.x) && (fp->lr == LR_Right)) || ((fp->joint[ftParts_Joint_TopN]->translate.vec.f.x > ft_com->target_pos.x) && (fp->lr == LR_Left)))
        {
            var_a1 = FALSE;
        }
        else var_a1 = TRUE;

        if (ft_com->target_dist < ((random * 300.0F) + 1200.0F))
        {
            if (ftComputerCheckDetectTarget(fp, 0.0F) != FALSE)
            {
                ft_com->unk_ftcom_0x18 = 0;
            }
            else
            {
                func_ovl3_80134E98(fp);
                ft_com->unk_ftcom_0x18 = 0;
            }
        }
        else if (TRUE)
        {
            func_ovl3_80134E98(fp);
            ft_com->unk_ftcom_0x18 = 0;
        }
    }
    else func_ovl3_8013877C(fp);
}

// 0x8013A38C
void func_ovl3_8013A38C(ftStruct *fp)
{
    ftComputer *ft_com = &fp->fighter_com;

    if (ft_com->proc_com(fp->fighter_gobj) != FALSE)
    {
        switch (ft_com->behave_current)
        {
        case 0:
            ft_com->input_wait = 1;
            ft_com->p_command = dFtComputerPlayerScripts[0];
            break;

        case 1:
            func_ovl3_80134E98(fp);
            break;

        case 2:
            func_ovl3_801392C8(fp);
            break;

        case 3:
            func_ovl3_8013834C(fp);
            break;

        case 4:
            func_ovl3_80137F24(fp);
            break;

        case 5:
            func_ovl3_80138104(fp);
            break;

        case 6:
            ftComputerSetUseItem(fp);
            break;

        case 7:
            func_ovl3_80137FD4(fp);
            break;

        case 8:
            func_ovl3_801397F4(fp);
            break;

        case 9:
            func_ovl3_80139A60(fp);
            break;

        case 10:
            func_ovl3_80139D6C(fp);
            break;

        case 11:
            func_ovl3_8013A298(fp);
            break;
        }
    }
}

// 0x8013A4AC
void func_ovl3_8013A4AC(ftStruct *fp)
{
    ftComputer *ft_com = &fp->fighter_com;

    switch (ft_com->behavior_set)
    {
    case 0:
        ft_com->proc_com = func_ovl3_80137778;
        ft_com->behave_default = 2;
        break;

    case 1:
        ft_com->proc_com = func_ovl3_80137778;
        ft_com->behave_default = 3;
        break;

    case 2:
        ft_com->proc_com = func_ovl3_80137778;
        ft_com->behave_default = 8;
        break;

    case 3:
        ft_com->proc_com = func_ovl3_80137778;
        ft_com->behave_default = 9;
        break;

    case 4:
        ft_com->proc_com = func_ovl3_80137778;
        ft_com->behave_default = 10;
        break;

    case 5:
        ft_com->proc_com = func_ovl3_80137778;
        ft_com->behave_default = 2;
        break;

    case 7:
        ft_com->proc_com = func_ovl3_80137778;
        ft_com->behave_default = 9;
        break;

    case 8:
        ft_com->proc_com = func_ovl3_80137778;
        ft_com->behave_default = 10;
        break;

    case 9:
        ft_com->proc_com = func_ovl3_80137778;
        ft_com->behave_default = 2;
        break;

    case 13:
        ft_com->proc_com = func_ovl3_80137778;
        ft_com->behave_default = 11;
        break;

    case 15:
        ft_com->proc_com = func_ovl3_80137A18;
        break;

    case 16:
        ft_com->proc_com = func_ovl3_80137AA4;
        break;

    case 17:
        ft_com->proc_com = func_ovl3_80137C7C;
        break;

    case 18:
        ft_com->proc_com = func_ovl3_80137CD8;
        break;

    case 19:
        ft_com->proc_com = func_ovl3_80137E70;
        break;
    }
}

// 0x8013A63C
void func_ovl3_8013A63C(ftStruct *fp)
{
    ftComputer *ft_com = &fp->fighter_com;

    switch (ft_com->behavior_write)
    {
    case 0:
        if (ft_com->unk_ftcom_0x14 == 0)
        {
            ft_com->unk_ftcom_0x14 = (lbRandom_GetFloat() * 900.0F) + 900.0F;

            switch (lbRandom_GetShort() & 3)
            {
            case 0:
                ft_com->behavior_set = 0;
                break;

            case 1:
                ft_com->behavior_set = 2;
                break;

            case 2:
                ft_com->behavior_set = 3;
                ft_com->unk_ftcom_0x14 >>= 2;
                break;

            case 3:
                ft_com->behavior_set = 4;
                break;
            }
        }
        break;

    case 1:
        if ((fp->percent_damage >= 14) || (ft_com->unk_ftcom_0x14 == 0))
        {
            ft_com->behavior_set = 0;
        }
        else ft_com->behavior_set = 0xF;
        break;

    case 2:
        ft_com->behavior_set = 7;
        break;

    case 3:
        ft_com->behavior_set = 8;
        break;

    case 4:
        ft_com->behavior_set = 9;
        break;

    case 5:
        if (fp->ft_kind == Ft_Kind_Mario)
        {
            ft_com->behavior_set = 0;
        }
        else ft_com->behavior_set = 3;
        break;

    case 6:
        ft_com->behavior_set = 0;
        break;

    case 7:
        ft_com->behavior_set = 2;
        break;

    case 8:
        ft_com->behavior_set = 0xD;
        break;

    case 9:
        ft_com->behavior_set = 3;
        break;

    case 10:
        break;
    }
}

// 0x8013A834
void func_ovl3_8013A834(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftComputer *ft_com = &fp->fighter_com;

    if (fp->ft_kind != Ft_Kind_MasterHand)
    {
        if (ft_com->unk_ftcom_0x14 != 0)
        {
            ft_com->unk_ftcom_0x14--;
        }
        if (ft_com->input_wait == 0)
        {
            func_ovl3_8013A63C(fp);
            func_ovl3_8013A4AC(fp);
            func_ovl3_8013A38C(fp);
        }
        ftComputerUpdateInputs(fp);
    }
}

// 0x8013A8A8
void func_ovl3_8013A8A8(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftComputer *ft_com = &fp->fighter_com;
    f32 dash_speed;
    f32 jump;
    f32 edge_left_nearest;
    f32 edge_right_nearest;
    u16 *line_ids;
    Vec3f edge_pos;
    s32 i;

    _bzero(ft_com, sizeof(*ft_com));

    if (fp->ft_kind != Ft_Kind_MasterHand)
    {
        ft_com->unk_ftcom_0x70 = ft_com->target_pos.x = fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;

        if (fp->ground_or_air == GA_Ground)
        {
            ft_com->unk_ftcom_0x74 = ft_com->target_pos.y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;
        }
        else ft_com->unk_ftcom_0x74 = ft_com->target_pos.y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y + fp->coll_data.ground_dist;

        ft_com->unk_ftcom_0x88 = fp->coll_data.ground_line_id;

        ft_com->proc_com = NULL;

        ft_com->behavior_write = 0;
        ft_com->behavior_set = 0;

        i = 1440 - (fp->cp_level * 240);

        if (i < 0)
        {
            i = 0;
        }
        ft_com->unk_ftcom_0x14 = i;
        ft_com->unk_ftcom_0x8C = 0.0F;

        dash_speed = fp->attributes->dash_speed;

        for (i = 0; i < fp->attributes->dash_to_run; i++)
        {
            if (i >= 7)
            {
                dash_speed -= fp->attributes->dash_decelerate;
            }
            ft_com->unk_ftcom_0x8C += dash_speed;
        }
        ft_com->unk_ftcom_0x90 = -200.0F;

        jump = (fp->attributes->jump_height_mul * F_CONTROLLER_RANGE_MAX) + fp->attributes->jump_height_base;

        while (jump > 0.0F)
        {
            jump -= fp->attributes->gravity;

            ft_com->unk_ftcom_0x90 += jump;
        }
        edge_left_nearest = 2000.0F;
        edge_right_nearest = -2000.0F;

        ft_com->cliff_left_pos.y = ft_com->cliff_right_pos.y = 9999.9F;

        line_ids = gMapLineTypeGroups[mpCollision_LineType_Ground].line_id;

        for (i = 0; i < gMapLineTypeGroups[mpCollision_LineType_Ground].line_count; i++)
        {
            if ((mpCollision_CheckExistLineID(line_ids[i]) != FALSE) && (mpCollision_CheckExistPlatformLineID(line_ids[i]) == FALSE))
            {
                mpCollision_GetLREdgeLeft(line_ids[i], &edge_pos);

                if (edge_left_nearest > edge_pos.x)
                {
                    edge_left_nearest = edge_pos.x;

                    if (ft_com->cliff_left_pos.y > edge_pos.y)
                    {
                        ft_com->cliff_left_pos.x = edge_pos.x;
                        ft_com->cliff_left_pos.y = edge_pos.y;
                    }
                }
                else if (((edge_pos.x - gMapEdgeBounds.d2.left) < 500.0F) && (ft_com->cliff_left_pos.y > edge_pos.y))
                {
                    ft_com->cliff_left_pos.x = edge_pos.x;
                    ft_com->cliff_left_pos.y = edge_pos.y;
                }
                mpCollision_GetLREdgeRight(line_ids[i], &edge_pos);

                if (edge_right_nearest < edge_pos.x)
                {
                    edge_right_nearest = edge_pos.x;

                    if (ft_com->cliff_right_pos.y > edge_pos.y)
                    {
                        ft_com->cliff_right_pos.x = edge_pos.x;
                        ft_com->cliff_right_pos.y = edge_pos.y;
                    }
                }
                else if (((gMapEdgeBounds.d2.right - edge_pos.x) < 500.0F) && (ft_com->cliff_right_pos.y > edge_pos.y))
                {
                    ft_com->cliff_right_pos.x = edge_pos.x;
                    ft_com->cliff_right_pos.y = edge_pos.y;
                }
            }
        }
    }
    else return;
}

// 0x8013AC00
void func_ovl3_8013AC00(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftHurtbox *ft_hurt;
    ftParts *ft_part;
    Vec3f sp90;
    f32 nearest_x;
    f32 nearest_y;
    f32 pos_x;
    f32 pos_y;
    s32 i, j;
    DObj *joint;

    pos_x = fp->joint[ftParts_Joint_TopN]->translate.vec.f.x;
    pos_y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;

    nearest_x = pos_x;
    nearest_y = pos_y;

    for (i = 0; i < ARRAY_COUNT(fp->fighter_hurt); i++)
    {
        ft_hurt = &fp->fighter_hurt[i];

        if (ft_hurt->hitstatus == gmHitCollision_HitStatus_Normal)
        {
            joint = ft_hurt->joint;

            ft_part = joint->user_data.p;

            if (ft_part->unk_dobjtrans_0x5 == 0)
            {
                func_ovl2_800EDBA4(joint);
            }
            for (j = 0; j < 8; j++)
            {
                sp90.x = (j & 1) ? ft_hurt->offset.x + ft_hurt->size.x : ft_hurt->offset.x - ft_hurt->size.x;
                sp90.y = (j & 2) ? ft_hurt->offset.y + ft_hurt->size.y : ft_hurt->offset.y - ft_hurt->size.y;
                sp90.z = (j & 4) ? ft_hurt->offset.z + ft_hurt->size.z : ft_hurt->offset.z - ft_hurt->size.z;

                gcGetVectorWorldPosition(ft_part->unk_dobjtrans_0x50, &sp90);

                if (nearest_x > sp90.x)
                {
                    nearest_x = sp90.x;
                }
                if (pos_x < sp90.x)
                {
                    pos_x = sp90.x;
                }
                if (nearest_y > sp90.y)
                {
                    nearest_y = sp90.y;
                }
                if (pos_y < sp90.y)
                {
                    pos_y = sp90.y;
                }
            }
        }
    }
    fp->hurtbox_size.x = (pos_x - nearest_x) * 0.55F;
    fp->hurtbox_size.y = (pos_y - nearest_y) * 0.55F;
}
