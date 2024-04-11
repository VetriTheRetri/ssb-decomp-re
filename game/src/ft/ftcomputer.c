#include <ft/fighter.h>
#include <wp/weapon.h>
#include <it/item.h>
#include <gr/ground.h>
#include <gm/battle.h>

wpStruct* func_ovl3_80131B00(ftStruct *fp)
{
    GObj *weapon_gobj = gOMObjCommonLinks[GObj_LinkID_Weapon];

    while (weapon_gobj != NULL)
    {
        wpStruct *wp = wpGetStruct(weapon_gobj);

        if (ip->owner_gobj == fp->fighter_gobj)
        {
            return wp;
        }
        weapon_gobj = weapon_gobj->link_next;
    }
    return NULL;
}

// 0x80131B44
Vec3f* ftComputer_GetWeaponKindPosition(ftStruct *fp, s32 wp_kind)
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
void ftComputer_SetControlPKThunder(ftStruct *fp)
{
    Vec3f *pos = ftComputer_GetWeaponKindPosition(fp, Wp_Kind_PKThunderTrail);
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

void func_ovl3_80131C68(ftStruct *this_fp)
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
                                        (ft_com->target_fp->status_info.status_id == ftStatus_Common_CliffCatch) || 
                                        (ft_com->target_fp->status_info.status_id == ftStatus_Common_CliffWait)
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
                    ftComputer_SetControlPKThunder(this_fp);
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

void func_ovl3_80132564(ftStruct *fp, s32 index)
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

void func_ovl3_80132758(ftStruct *fp, s32 index)
{
    ftComputer *ft_com = &fp->fighter_com;

    ft_com->input_wait = 1;
    ft_com->p_command = dFtComputerPlayerScripts[index];
}

void func_ovl3_80132778(ftStruct *fp, s32 index)
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

sb32 func_ovl3_8013295C(ftStruct *this_fp)
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
                        ft_com->target_fp = other_fp;

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

    if (ft_com->target_fp->ground_or_air == GA_Ground)
    {
        ft_com->target_line_id = ft_com->target_fp->coll_data.ground_line_id;
    }
    else ft_com->target_line_id = -1;

    return TRUE;
}

sb32 func_ovl3_80132BC8(ftStruct *this_fp)
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

ftStruct* func_ovl3_80132D18(ftStruct *this_fp)
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
sb32 func_ovl3_80132EC8(ftStruct *this_fp, f32 detect_range_base);

#if defined(NON_MATCHING)
sb32 func_ovl3_80132EC8(ftStruct *this_fp, f32 detect_range_base)
{
    // Unfortunately, this does not match. A few register swaps in the middle prevent it from being 100%, however, it's fully functionally equivalent.
    ftComputer *ft_com = &this_fp->fighter_com;
    ftStruct *target_fp = this_fp->fighter_com.target_fp;
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
            detect_near_x = this_fp->joint[0]->translate.vec.f.x;
            detect_far_x = this_fp->joint[0]->translate.vec.f.x + (this_fp->phys_info.vel_air.x * 40.0F);
        }
        else
        {
            detect_far_x = this_fp->joint[0]->translate.vec.f.x;
            detect_near_x = this_fp->joint[0]->translate.vec.f.x + (this_fp->phys_info.vel_air.x * 40.0F);
        }
        this_detect_pos.y = this_fp->joint[0]->translate.vec.f.y;
        this_detect_pos.x = (this_fp->joint[0]->translate.vec.f.x + detect_near_x) - 100.0F;

        while (this_detect_pos.x < ((this_fp->joint[0]->translate.vec.f.x + detect_far_x) + 100.0F))
        {
            if (func_ovl2_800F8FFC(&this_detect_pos) == FALSE)
            {
                return FALSE;
            }
            this_detect_pos.x += 100.0F;
        }
    }
    this_pos_x = this_fp->joint[0]->translate.vec.f.x;
    this_pos_y = this_fp->joint[0]->translate.vec.f.y;

    var_f0 = (((lbRandom_GetFloat() - 0.5F) * (9 - this_fp->cp_level)) * 0.1F) + 1.0F;

    sp178 = target_fp->unk_fighter_0x260 * var_f0;
    sp174 = target_fp->unk_fighter_0x264 * var_f0;

    target_pos_x = target_fp->joint[0]->translate.vec.f.x;
    target_pos_y = target_fp->joint[0]->translate.vec.f.y;

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
                this_detect_pos.y = this_fp->joint[0]->translate.vec.f.y;
                this_detect_pos.x = (this_fp->joint[0]->translate.vec.f.x + detect_near_x) - 100.0F;

                while (this_detect_pos.x < ((this_fp->joint[0]->translate.vec.f.x + detect_far_x) + 100.0F))
                {
                    if (func_ovl2_800F8FFC(&this_detect_pos) == FALSE)
                    {
                        goto comattack_inc;
                    }
                    this_detect_pos.x += 100.0F;
                }
                if (this_fp->joint[0]->translate.vec.f.x < ft_com->target_pos.x)
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
                if ((this_fp->joint[0]->translate.vec.f.x < (gMapEdgeBounds.d2.left + 500.0F)) || (this_fp->joint[0]->translate.vec.f.x > (gMapEdgeBounds.d2.right - 500.0F)))
                {
                    switch (ft_comattack->input_kind)
                    {
                    case 13:
                        goto comattack_inc;

                    case 9:
                        if ((this_fp->joint[0]->translate.vec.f.x * this_fp->lr) > 0.0F)
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
                    if ((ft_com->target_fp->status_info.status_id == ftStatus_Common_CliffCatch) || (ft_com->target_fp->status_info.status_id == ftStatus_Common_CliffWait))
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
                        reflect_fp = ft_com->target_fp;

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
                        func_ovl3_80132758(this_fp, 4);

                        return TRUE;
                    }
                }
                else ft_com->attack_repeat_count = 0;

                func_ovl3_80132564(this_fp, attack_ids[i]);

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
#pragma GLOBAL_ASM("game/nonmatching/ovl3/func_ovl3_80132EC8.s")
#endif
