#include <ft/fighter.h>
#include <it/item.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern u8 g1PGameBonusStatTomatoCount;
extern u8 g1PGameBonusStatHeartCount;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80145990
GObj* ftCommonGetFindItemPickupGObj(GObj *fighter_gobj, u8 pickup_mask)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *pickup_gobj = NULL;
    ftItemPickup *item_pickup = &fp->attributes->item_pickup;
    GObj *item_gobj = gOMObjCommonLinks[GObj_LinkID_Item];
    f32 closest_item_dist = F32_MAX;
    sb32 is_pickup;
    f32 current_item_dist;
    Vec2f pickup_range;

    while (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        if (ip->is_allow_pickup)
        {
            if (fp->coll_data.ground_line_id == ip->coll_data.ground_line_id)
            {
                Vec3f *ft_translate = &DObjGetStruct(fighter_gobj)->translate.vec.f;
                Vec3f *it_translate = &DObjGetStruct(item_gobj)->translate.vec.f;
                mpObjectColl *object_coll = &ip->coll_data.object_coll;

                is_pickup = FALSE;

                if ((ip->weight == It_Weight_Light) && (pickup_mask & FTCOMMON_GET_MASK_LIGHT))
                {
                    pickup_range.x = ft_translate->x + (fp->lr * item_pickup->pickup_offset_light.x);
                    pickup_range.y = ft_translate->y + item_pickup->pickup_offset_light.y;

                    if ((((pickup_range.x - item_pickup->pickup_range_light.x) - object_coll->width) < it_translate->x) && (it_translate->x < (item_pickup->pickup_range_light.x + pickup_range.x + object_coll->width)))
                    {
                        if ((((pickup_range.y - item_pickup->pickup_range_light.y) - object_coll->top) < it_translate->y) && (it_translate->y < ((item_pickup->pickup_range_light.y + pickup_range.y) - object_coll->bottom)))
                        {
                            is_pickup = TRUE;
                        }
                    }
                }
                if ((ip->weight == It_Weight_Heavy) && (pickup_mask & FTCOMMON_GET_MASK_HEAVY))
                {
                    pickup_range.x = ft_translate->x + (fp->lr * item_pickup->pickup_offset_heavy.x);
                    pickup_range.y = ft_translate->y + item_pickup->pickup_offset_heavy.y;

                    if ((((pickup_range.x - item_pickup->pickup_range_heavy.x) - object_coll->width) < it_translate->x) && (it_translate->x < (item_pickup->pickup_range_heavy.x + pickup_range.x + object_coll->width)))
                    {
                        if ((((pickup_range.y - item_pickup->pickup_range_heavy.y) - object_coll->top) < it_translate->y) && (it_translate->y < ((item_pickup->pickup_range_heavy.y + pickup_range.y) - object_coll->bottom)))
                        {
                            is_pickup = TRUE;
                        }
                    }
                }
                if (is_pickup != FALSE)
                {
                    current_item_dist = (pickup_range.x < it_translate->x) ? -(pickup_range.x - it_translate->x) : (pickup_range.x - it_translate->x);

                    if (current_item_dist < closest_item_dist)
                    {
                        closest_item_dist = current_item_dist;
                        pickup_gobj = item_gobj;
                    }
                }
            }
        }
        item_gobj = item_gobj->link_next;
    }
    return pickup_gobj;
}

// 0x80145BE4
void ftCommonLightGetProcDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *item_gobj = fp->item_hold;

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        if (ip->type == It_Type_Consume)
        {
            switch (ip->it_kind)
            {
            case It_Kind_Tomato:
                ftCommon_ApplyDamageHeal(fp, ITTOMATO_DAMAGE_HEAL);
                itMainDestroyItem(item_gobj);

                if ((gBattleState->game_type == gmMatch_GameType_1PGame) && (fp->player == gSceneData.spgame_player) && (g1PGameBonusStatTomatoCount < U8_MAX))
                {
                    g1PGameBonusStatTomatoCount++;
                }
                break;

            case It_Kind_Heart:
                ftCommon_ApplyDamageHeal(fp, ITHEART_DAMAGE_HEAL);
                itMainDestroyItem(item_gobj);

                if ((gBattleState->game_type == gmMatch_GameType_1PGame) && (fp->player == gSceneData.spgame_player) && (g1PGameBonusStatHeartCount < U8_MAX))
                {
                    g1PGameBonusStatHeartCount++;
                }
                break;

            case It_Kind_Hammer:
                fp->hammer_timer = ITHAMMER_TIME;

                ftSpecialITem_BGMSetPlay(alSound_Music_Hammer);
                break;

            default:
                break;
            }
        }
    }
}

// 0x80145D28
void ftCommonHeavyGetProcDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->item_hold != NULL)
    {
        ftSetupDropItem(fp);
    }
}

// 0x80145D70
void ftCommonGetProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *item_gobj;

    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->command_vars.flags.flag1 = 0;

        item_gobj = ftCommonGetFindItemPickupGObj(fighter_gobj, ((fp->status_info.status_id == ftStatus_Common_HeavyGet) ? FTCOMMON_GET_MASK_HEAVY : FTCOMMON_GET_MASK_LIGHT));

        if (item_gobj != NULL)
        {
            itMainSetFighterHold(item_gobj, fighter_gobj);
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
                    ftDonkeyThrowFWaitSetStatus(fighter_gobj);
                }
                else ftCommonLiftWaitSetStatus(fighter_gobj);
            }
            else ftCommon_Wait_SetStatus(fighter_gobj);
        }
        else
        {
            item_gobj = fp->item_hold;

            if (item_gobj != NULL)
            {
                itStruct *ip = itGetStruct(item_gobj);

                if (ip->type == It_Type_Consume)
                {
                    ftCommonLightGetProcDamage(fighter_gobj);

                    if (ip->it_kind == It_Kind_Hammer)
                    {
                        ftHammer_SetStatusHammerWait(fighter_gobj);

                        return;
                    }
                }
            }
            ftCommon_Wait_SetStatus(fighter_gobj);
        }
    }
}

// 0x80145ED8
void ftCommonLightGetProcMap(GObj *fighter_gobj)
{
    if (ftMap_CheckGroundStanding(fighter_gobj) == FALSE)
    {
        ftCommonLightGetProcDamage(fighter_gobj);
        ftCommon_Fall_SetStatus(fighter_gobj);
    }
}

// 0x80145F10
void ftCommonHeavyGetProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftMap_CheckGroundStanding(fighter_gobj) == FALSE)
    {
        if (fp->item_hold != NULL)
        {
            ftSetupDropItem(fp);
        }
        ftCommon_Fall_SetStatus(fighter_gobj);
    }
}

// 0x80145F74
void ftCommonHeavyThrowProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftMap_CheckGroundStopEdge(fighter_gobj) == FALSE)
    {
        if (fp->item_hold != NULL)
        {
            ftSetupDropItem(fp);
        }
        ftCommon_Fall_SetStatus(fighter_gobj);
    }
}

// 0x80145FD8
void ftCommonGetSetStatus(GObj *fighter_gobj, GObj *item_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    itStruct *ip = itGetStruct(item_gobj);

    fp->command_vars.flags.flag1 = 0;

    ftMainSetFighterStatus(fighter_gobj, ((ip->weight == It_Weight_Heavy) ? ftStatus_Common_HeavyGet : ftStatus_Common_LightGet), 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    if (fp->status_info.status_id == ftStatus_Common_HeavyGet)
    {
        fp->proc_damage = ftCommonHeavyGetProcDamage;
    }
    else fp->proc_damage = ftCommonLightGetProcDamage;
}

// 0x80146064
sb32 ftCommonGetCheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->item_hold == NULL)
    {
        GObj *item_gobj = ftCommonGetFindItemPickupGObj(fighter_gobj, (FTCOMMON_GET_MASK_LIGHT | FTCOMMON_GET_MASK_HEAVY));

        if (item_gobj != NULL)
        {
            ftCommonGetSetStatus(fighter_gobj, item_gobj);

            return TRUE;
        }
    }
    return FALSE;
}

// 0x801460B8
void ftCommonLiftWaitProcInterrupt(GObj *fighter_gobj)
{
    if (ftCommonHeavyThrowCheckInterruptCommon(fighter_gobj) == FALSE)
    {
        ftCommonLiftTurnCheckInterruptLiftWait(fighter_gobj);
    }
}

// 0x801460E8
void ftCommonLiftWaitSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_LiftWait, 0.0F, 1.0F, FTSTATUPDATE_SLOPECONTOUR_PRESERVE);

    fp->proc_damage = ftCommonHeavyGetProcDamage;
}

// 0x80146130
void ftCommonLiftTurnUpdateModelPitch(ftStruct *fp)
{
    fp->status_vars.common.lift.turn_frames--;

    fp->joint[ftParts_Joint_TopN]->rotate.vec.f.y += FTCOMMON_LIFT_TURN_STEP;

    func_ovl2_800EB528(fp->joint[ftParts_Joint_TopN]);

    if (fp->status_vars.common.lift.turn_frames == (FTCOMMON_LIFT_TURN_FRAMES / 2))
    {
        fp->lr = -fp->lr;
        fp->phys_info.vel_ground.x = -fp->phys_info.vel_ground.x;
    }
}

// 0x801461A8
void ftCommonLiftTurnProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonLiftTurnUpdateModelPitch(fp);

    if (fp->status_vars.common.lift.turn_frames == 0)
    {
        ftCommonLiftWaitSetStatus(fighter_gobj);
    }
}

// 0x801461E8
void ftCommonLiftTurnProcInterrupt(GObj *fighter_gobj)
{
    ftCommonHeavyThrowCheckInterruptCommon(fighter_gobj);
}

// 0x80146208
void ftCommonLiftTurnSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_LiftTurn, 0.0F, 1.0F, FTSTATUPDATE_SLOPECONTOUR_PRESERVE);

    fp->proc_damage = ftCommonHeavyGetProcDamage;

    fp->status_vars.common.lift.turn_frames = FTCOMMON_LIFT_TURN_FRAMES;

    ftCommonLiftTurnUpdateModelPitch(fp);
}

// 0x8014625C
sb32 ftCommonLiftTurnCheckInterruptLiftWait(GObj *fighter_gobj)
{
    if (ftCommon_Turn_CheckInputSuccess(fighter_gobj) != FALSE)
    {
        ftCommonLiftTurnSetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}