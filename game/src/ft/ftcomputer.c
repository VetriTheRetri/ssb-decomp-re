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

static mpEdgeBounds gMapEdgeBounds; // Extern

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

                if ((other_fp->status_info.status_id >= ftStatus_Common_Wait) &&
                (((func_ovl2_800F8FFC(&other_fp->joint[ftParts_Joint_TopN]->translate.vec.f) != FALSE) &&
                (other_pos_x <= gMapEdgeBounds.d2.right) &&
                (gMapEdgeBounds.d2.left <= other_pos_x) &&
                (gMapEdgeBounds.d2.bottom <= other_pos_y) &&
                (other_pos_y < gGroundInfo->cam_bound_top)) ||
                ((this_fp->ground_or_air == GA_Ground) &&
                ((other_fp->status_info.status_id == ftStatus_Common_CliffCatch) ||
                (other_fp->status_info.status_id == ftStatus_Common_CliffWait)))) &&
                ((this_fp->ft_kind != Ft_Kind_MetalMario) ||
                (other_fp->ground_or_air == GA_Ground)))
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
                if (other_fp->status_info.status_id >= ftStatus_Common_Wait)
                {
                    if ((ft_com->target_gobj != NULL) && (other_fp->fighter_gobj == ft_com->target_gobj))
                    {
                        if (other_fp->percent_damage == ft_com->target_damage_percent)
                        {
                            if ((u32)ft_com->target_find_wait != 0)
                            {
                                ft_com->target_find_wait--;
                            }
                            if ((u32)ft_com->target_find_wait == 0)
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
