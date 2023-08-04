#include <ft/fighter.h>
#include <it/item.h>
#include <gm/gmmatch.h>

extern u8 gmBonusStat_TomatoPickupCount;
extern u8 gmBonusStat_HeartPickupCount;

// 0x80145990
GObj* ftCommon_Get_GetItemPickupGObj(GObj *fighter_gobj, u8 pickup_mask)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *pickup_gobj = NULL;
    ftItemPickup *item_pickup = &fp->attributes->item_pickup;
    GObj *item_gobj = gOMObjCommonLinks[gOMObjLinkIndexItem];
    f32 closest_item_dist = (f32)FLOAT_MAX;
    bool32 is_pickup;
    f32 current_item_dist;
    Vec2f pickup_range;

    while (item_gobj != NULL)
    {
        itStruct *ap = itGetStruct(item_gobj);

        if (ap->is_allow_pickup)
        {
            if (fp->coll_data.ground_line_id == ap->coll_data.ground_line_id)
            {
                Vec3f *ft_translate = &DObjGetStruct(fighter_gobj)->translate;
                Vec3f *at_translate = &DObjGetStruct(item_gobj)->translate;
                mpObjectColl *object_coll = &ap->coll_data.object_coll;

                is_pickup = FALSE;

                if ((ap->weight == It_Weight_Light) && (pickup_mask & FTCOMMON_GET_MASK_LIGHT))
                {
                    pickup_range.x = ft_translate->x + (fp->lr * item_pickup->pickup_offset_light.x);
                    pickup_range.y = ft_translate->y + item_pickup->pickup_offset_light.y;

                    if ((((pickup_range.x - item_pickup->pickup_range_light.x) - object_coll->width) < at_translate->x) && (at_translate->x < (item_pickup->pickup_range_light.x + pickup_range.x + object_coll->width)))
                    {
                        if ((((pickup_range.y - item_pickup->pickup_range_light.y) - object_coll->top) < at_translate->y) && (at_translate->y < ((item_pickup->pickup_range_light.y + pickup_range.y) - object_coll->bottom)))
                        {
                            is_pickup = TRUE;
                        }
                    }
                }
                if ((ap->weight == It_Weight_Heavy) && (pickup_mask & FTCOMMON_GET_MASK_HEAVY))
                {
                    pickup_range.x = ft_translate->x + (fp->lr * item_pickup->pickup_offset_heavy.x);
                    pickup_range.y = ft_translate->y + item_pickup->pickup_offset_heavy.y;

                    if ((((pickup_range.x - item_pickup->pickup_range_heavy.x) - object_coll->width) < at_translate->x) && (at_translate->x < (item_pickup->pickup_range_heavy.x + pickup_range.x + object_coll->width)))
                    {
                        if ((((pickup_range.y - item_pickup->pickup_range_heavy.y) - object_coll->top) < at_translate->y) && (at_translate->y < ((item_pickup->pickup_range_heavy.y + pickup_range.y) - object_coll->bottom)))
                        {
                            is_pickup = TRUE;
                        }
                    }
                }
                if (is_pickup != FALSE)
                {
                    current_item_dist = (pickup_range.x < at_translate->x) ? -(pickup_range.x - at_translate->x) : (pickup_range.x - at_translate->x);

                    if (current_item_dist < closest_item_dist)
                    {
                        closest_item_dist = current_item_dist;
                        pickup_gobj = item_gobj;
                    }
                }
            }
        }
        item_gobj = item_gobj->group_gobj_next;
    }
    return pickup_gobj;
}

// 0x80145BE4
void ftCommon_Get_ApplyItemStats(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *item_gobj = fp->item_hold;

    if (item_gobj != NULL)
    {
        itStruct *ap = itGetStruct(item_gobj);

        if (ap->type == It_Type_Special)
        {
            switch (ap->it_kind)
            {
            case It_Kind_Tomato:
                ftCommon_ApplyDamageHeal(fp, ITTOMATO_DAMAGE_HEAL);
                itMain_DestroyItem(item_gobj);

                if ((gpBattleState->game_type == gmMatch_GameType_1PGame) && (fp->player == gSceneData.player_port) && (gmBonusStat_TomatoPickupCount < U8_MAX))
                {
                    gmBonusStat_TomatoPickupCount++;
                }
                break;

            case It_Kind_Heart:
                ftCommon_ApplyDamageHeal(fp, ITHEART_DAMAGE_HEAL);
                itMain_DestroyItem(item_gobj);

                if ((gpBattleState->game_type == gmMatch_GameType_1PGame) && (fp->player == gSceneData.player_port) && (gmBonusStat_HeartPickupCount < U8_MAX))
                {
                    gmBonusStat_HeartPickupCount++;
                }
                break;

            case It_Kind_Hammer:
                fp->hammer_timer = ITHAMMER_TIME;

                ftSpecialItem_BGMSetPlay(ITHAMMER_BGM_ID);
                break;

            default:
                break;
            }
        }
    }
}

// 0x80145D28
void ftCommon_Get_DropItem(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->item_hold != NULL)
    {
        ftSetupDropItem(fp);
    }
}

// 0x80145D70
void ftCommon_Get_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *item_gobj;

    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->command_vars.flags.flag1 = 0;

        item_gobj = ftCommon_Get_GetItemPickupGObj(fighter_gobj, ((fp->status_info.status_id == ftStatus_Common_HeavyGet) ? FTCOMMON_GET_MASK_HEAVY : FTCOMMON_GET_MASK_LIGHT));

        if (item_gobj != NULL)
        {
            itMain_SetFighterHold(item_gobj, fighter_gobj);
        }
    }
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        if (fp->status_info.status_id == ftStatus_Common_HeavyGet)
        {
            if (fp->item_hold != NULL)
            {
                if ((fp->ft_kind == Ft_Kind_Donkey) || (fp->ft_kind == Ft_Kind_PolyDonkey) || (fp->ft_kind == Ft_Kind_GiantDonkey))
                {
                    ftDonkey_ThrowFWait_SetStatus(fighter_gobj);
                }
                else ftCommon_LiftWait_SetStatus(fighter_gobj);
            }
            else ftCommon_Wait_SetStatus(fighter_gobj);
        }
        else
        {
            item_gobj = fp->item_hold;

            if (item_gobj != NULL)
            {
                itStruct *ap = itGetStruct(item_gobj);

                if (ap->type == It_Type_Special)
                {
                    ftCommon_Get_ApplyItemStats(fighter_gobj);

                    if (ap->it_kind == It_Kind_Hammer)
                    {
                        ftCommon_HammerWait_SetStatus(fighter_gobj);

                        return;
                    }
                }
            }
            ftCommon_Wait_SetStatus(fighter_gobj);
        }
    }
}

// 0x80145ED8
void ftCommon_LightGet_ProcMap(GObj *fighter_gobj)
{
    if (func_ovl2_800DDDA8(fighter_gobj) == FALSE)
    {
        ftCommon_Get_ApplyItemStats(fighter_gobj);
        ftCommon_Fall_SetStatus(fighter_gobj);
    }
}

// 0x80145F10
void ftCommon_HeavyGet_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DDDA8(fighter_gobj) == FALSE)
    {
        if (fp->item_hold != NULL)
        {
            ftSetupDropItem(fp);
        }
        ftCommon_Fall_SetStatus(fighter_gobj);
    }
}

// 0x80145F74
void ftCommon_HeavyThrow_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DDE50(fighter_gobj) == FALSE)
    {
        if (fp->item_hold != NULL)
        {
            ftSetupDropItem(fp);
        }
        ftCommon_Fall_SetStatus(fighter_gobj);
    }
}

// 0x80145FD8
void ftCommon_Get_SetStatus(GObj *fighter_gobj, GObj *item_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    itStruct *ip = itGetStruct(item_gobj);

    fp->command_vars.flags.flag1 = 0;

    ftStatus_Update(fighter_gobj, ((ip->weight == It_Weight_Heavy) ? ftStatus_Common_HeavyGet : ftStatus_Common_LightGet), 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    if (fp->status_info.status_id == ftStatus_Common_HeavyGet)
    {
        fp->proc_damage = ftCommon_Get_DropItem;
    }
    else fp->proc_damage = ftCommon_Get_ApplyItemStats;
}

// 0x80146064
bool32 ftCommon_Get_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->item_hold == NULL)
    {
        GObj *item_gobj = ftCommon_Get_GetItemPickupGObj(fighter_gobj, (FTCOMMON_GET_MASK_LIGHT | FTCOMMON_GET_MASK_HEAVY));

        if (item_gobj != NULL)
        {
            ftCommon_Get_SetStatus(fighter_gobj, item_gobj);

            return TRUE;
        }
    }
    return FALSE;
}

// 0x801460B8
void ftCommon_LiftWait_ProcInterrupt(GObj *fighter_gobj)
{
    if (ftCommon_LightThrow_CheckInterruptCommon(fighter_gobj) == FALSE)
    {
        ftCommon_LiftTurn_CheckInterruptLiftWait(fighter_gobj);
    }
}

// 0x801460E8
void ftCommon_LiftWait_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_LiftWait, 0.0F, 1.0F, FTSTATUPDATE_SLOPECONTOUR_PRESERVE);

    fp->proc_damage = ftCommon_Get_DropItem;
}

// 0x80146130
void ftCommon_LiftTurn_UpdateModelYaw(ftStruct *fp)
{
    fp->status_vars.common.lift.turn_frames--;

    fp->joint[ftParts_TopN_Joint]->rotate.y += FTCOMMON_LIFT_TURN_STEP;

    func_ovl2_800EB528(fp->joint[ftParts_TopN_Joint]);

    if (fp->status_vars.common.lift.turn_frames == (FTCOMMON_LIFT_TURN_FRAMES / 2))
    {
        fp->lr = -fp->lr;
        fp->phys_info.vel_ground.x = -fp->phys_info.vel_ground.x;
    }
}

// 0x801461A8
void ftCommon_LiftTurn_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_LiftTurn_UpdateModelYaw(fp);

    if (fp->status_vars.common.lift.turn_frames == 0)
    {
        ftCommon_LiftWait_SetStatus(fighter_gobj);
    }
}

// 0x801461E8
void ftCommon_LiftTurn_ProcInterrupt(GObj *fighter_gobj)
{
    ftCommon_LightThrow_CheckInterruptCommon(fighter_gobj);
}

// 0x80146208
void ftCommon_LiftTurn_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_LiftTurn, 0.0F, 1.0F, FTSTATUPDATE_SLOPECONTOUR_PRESERVE);

    fp->proc_damage = ftCommon_Get_DropItem;

    fp->status_vars.common.lift.turn_frames = FTCOMMON_LIFT_TURN_FRAMES;

    ftCommon_LiftTurn_UpdateModelYaw(fp);
}

// 0x8014625C
bool32 ftCommon_LiftTurn_CheckInterruptLiftWait(GObj *fighter_gobj)
{
    if (ftCommon_Turn_CheckInputSuccess(fighter_gobj) != FALSE)
    {
        ftCommon_LiftTurn_SetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}