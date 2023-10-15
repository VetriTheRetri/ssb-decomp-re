#include <ft/fighter.h>
#include <wp/weapon.h>
#include <it/item.h>
#include <gm/battle.h>
#include <sc/scene.h>

// 0x80190B58
scTrainingMenu gTrainingModeStruct;

// 0x8018D0C0
void scTrainingMode_SetPauseGObjRenderFlags(u32 flags)
{
    GObj *pause_gobj = gOMObjCommonLinks[omGObj_LinkIndex_PauseMenu];

    while (pause_gobj != NULL)
    {
        pause_gobj->obj_renderflags = flags;

        pause_gobj = pause_gobj->group_gobj_next;
    }
}

// 0x8018D0E8
void scTrainingMode_CheckEnterTrainingMenu(void)
{
    s32 player = gSceneData.player_port;

    if (gPlayerControllers[player].button_new & START_BUTTON)
    {
        GObj *fighter_gobj = gBattleState->player_block[player].fighter_gobj;
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (!(fp->is_ignore_startbutton))
        {
            ifCommon_SetRenderFlagsAll(DOBJ_RENDERFLAG_UNK1);
            scTrainingMode_SetPauseGObjRenderFlags(DOBJ_RENDERFLAG_NONE);
            func_ovl2_801157EC();
            ftCommon_ResetControllerInputs(gBattleState->player_block[player].fighter_gobj);
            ftCommon_ResetControllerInputs(gBattleState->player_block[gTrainingModeStruct.opponent].fighter_gobj);

            gBattleState->game_status = gmMatch_GameStatus_Pause;

            func_800269C0(alSound_SFX_GamePause);
            func_80020B38(0, 0x3C00);

            gTrainingModeStruct.unk_trainmenu_0xD8 = FALSE;
        }
    }
}

// 0x8018D1F0
void scTrainingMode_CheckLeaveTrainingMenu(void)
{
    s32 player = gSceneData.player_port;
    GObj *fighter_gobj;

    if (gPlayerControllers[player].button_new & (B_BUTTON | START_BUTTON))
    {
        ifCommon_SetRenderFlagsAll(DOBJ_RENDERFLAG_NONE);
        scTrainingMode_SetPauseGObjRenderFlags(DOBJ_RENDERFLAG_UNK1);

        gBattleState->game_status = gmMatch_GameStatus_Go;

        func_ovl2_800E7F68(gBattleState->player_block[gTrainingModeStruct.opponent].fighter_gobj);

        fighter_gobj = gBattleState->player_block[player].fighter_gobj;

        func_ovl2_800E7F68(fighter_gobj);

        if (gPlayerControllers[player].button_new & B_BUTTON)
        {
            ftStruct *fp = ftGetStruct(fighter_gobj);

            fp->input.pl.button_hold |= B_BUTTON;
        }
        func_80020B38(0, 0x7800);
    }
}

// 0x8018D2F0
void scTrainingMode_UpdateMenuInputs(void)
{
    u16 inputs = 0;
    s32 player = gSceneData.player_port;

    if (gPlayerControllers[player].stick_range.x > SCTRAINING_INPUT_STICK_RANGE_MIN)
    {
        inputs |= R_JPAD;
    }
    if (gPlayerControllers[player].stick_range.x < -SCTRAINING_INPUT_STICK_RANGE_MIN)
    {
        inputs |= L_JPAD;
    }
    if (gPlayerControllers[player].stick_range.y > SCTRAINING_INPUT_STICK_RANGE_MIN)
    {
        inputs |= U_JPAD;
    }
    if (gPlayerControllers[player].stick_range.y < -SCTRAINING_INPUT_STICK_RANGE_MIN)
    {
        inputs |= D_JPAD;
    }
    if (gTrainingModeStruct.unk_trainmenu_0xD8 == FALSE)
    {
        if (!(inputs))
        {
            gTrainingModeStruct.unk_trainmenu_0xD8 = TRUE;
        }
    }
    else
    {
        gTrainingModeStruct.button_tap = (inputs ^ gTrainingModeStruct.button_hold) & inputs;

        if (inputs ^ gTrainingModeStruct.button_hold)
        {
            gTrainingModeStruct.button_queue = gTrainingModeStruct.button_tap;
            gTrainingModeStruct.rapid_scroll_wait = 30;
        }
        else
        {
            gTrainingModeStruct.rapid_scroll_wait--;

            if (gTrainingModeStruct.rapid_scroll_wait > 0)
            {
                gTrainingModeStruct.button_queue = 0;
            }
            else
            {
                gTrainingModeStruct.button_queue = inputs;
                gTrainingModeStruct.rapid_scroll_wait = 5;
            }
        }
        gTrainingModeStruct.button_hold = inputs;
    }
}

// 0x8018D3DC
void func_ovl7_8018D3DC(void)
{
    func_ovl7_8018F630();
    func_ovl7_8018FE40();
    func_800269C0(alSound_SFX_MenuOptionH);
}

// 0x8018D40C - Update scrollable menu option?
sb32 scTrainingMode_CheckUpdateOptionID(s32 *option_id, s32 min, s32 max)
{
    if (gTrainingModeStruct.button_queue & (L_JPAD | R_JPAD))
    {
        if (gTrainingModeStruct.button_queue & L_JPAD)
        {
            if (--(*option_id) < min)
            {
                *option_id = max - 1;

                return TRUE;
            }
        }
        else if (++(*option_id) >= max)
        {
            *option_id = min;
        }
        return TRUE;
    }
    return FALSE;
}

// 0x8018D478
sb32 scTrainingMode_UpdateCPOption(void)
{
    if (scTrainingMode_CheckUpdateOptionID(&gTrainingModeStruct.cp_menu_option, scTrainingMenu_CP_EnumStart, scTrainingMenu_CP_EnumMax) != FALSE)
    {
        func_ovl7_801901F4();
        func_ovl7_8018E810();
        func_ovl7_8018EEE8();
        func_ovl7_8018D3DC();
    }
    return FALSE;
}

// 0x8018D4D0
s32 scTrainingMode_GetSpawnableItemCount(void)
{
    GObj *item_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Item];
    s32 item_count;

    for (item_count = 0; item_gobj != NULL; item_gobj = item_gobj->group_gobj_next)
    {
        if ((itGetStruct(item_gobj)->it_kind <= It_Kind_CommonEnd) || (itGetStruct(item_gobj)->it_kind >= It_Kind_MbMonsterStart))
        {
            item_count++;
        }
    }
    return item_count;
}

// 0x8018D518
sb32 scTrainingMode_UpdateItemOption(void)
{
    Vec3f pos;
    Vec3f vel;

    if (scTrainingMode_CheckUpdateOptionID(&gTrainingModeStruct.item_menu_option, scTrainingMenu_Item_EnumStart, scTrainingMenu_Item_EnumMax) != FALSE)
    {
        func_ovl7_8018F040();
        func_ovl7_8018D3DC();
    }
    if (gTrainingModeStruct.item_spawn_wait == 0)
    {
        if ((gPlayerControllers[gSceneData.player_port].button_new & A_BUTTON) && (gTrainingModeStruct.item_menu_option != 0))
        {
            if (scTrainingMode_GetSpawnableItemCount() < SCTRAINING_ITEMSPAWN_MAX)
            {
                vel.x = vel.z = 0.0F;
                vel.y = SCTRAINING_ITEMSPAWN_VEL_Y;

                pos = DObjGetStruct(gBattleState->player_block[gSceneData.player_port].fighter_gobj)->translate.vec.f;

                pos.y += SCTRAINING_ITEMSPAWN_OFF_Y;
                pos.z = 0.0F;

                itManager_MakeItemSetupCommon(NULL, gTrainingModeStruct.item_menu_option + (It_Kind_UtilityStart - 1), &pos, &vel, ITEM_MASK_SPAWN_DEFAULT);

                func_800269C0(alSound_SFX_MenuSelect);

                gTrainingModeStruct.item_spawn_wait = SCTRAINING_ITEMSPAWN_WAIT;
            }
            else func_800269C0(alSound_SFX_MenuDenied);
        }
    }
    else gTrainingModeStruct.item_spawn_wait--;

    return FALSE;
}

// 0x8018D684
sb32 scTrainingMode_UpdateSpeedOption(void)
{
    if (scTrainingMode_CheckUpdateOptionID(&gTrainingModeStruct.speed_menu_option, scTrainingMenu_Speed_EnumStart, scTrainingMenu_Speed_EnumMax) != FALSE)
    {
        gTrainingModeStruct.lagframe_wait = gTrainingModeStruct.frameadvance_wait = 0;

        func_ovl7_8018E714();
        func_ovl7_8018F2C4();
        func_ovl7_8018D3DC();
    }
    return FALSE;
}

// 0x8018D6DC
sb32 scTrainingMode_UpdateViewOption(void)
{
    if (scTrainingMode_CheckUpdateOptionID(&gTrainingModeStruct.view_menu_option, scTrainingMenu_View_EnumStart, scTrainingMenu_View_EnumMax) != FALSE)
    {
        if (gTrainingModeStruct.view_menu_option == 1)
        {
            func_ovl2_8010CF20();

            gTrainingModeStruct.magnify_wait = SCTRAINING_VIEW_MAGNIFY_WAIT;
        }
        else
        {
            GObj *fighter_gobj = gBattleState->player_block[gSceneData.player_port].fighter_gobj;

            func_ovl2_8010CF44(fighter_gobj, 0.0F, 0.0F, ftGetStruct(fighter_gobj)->attributes->closeup_cam_zoom, 0.1F, 28.0F);

            gPlayerCommonInterface.is_ifmagnify_display = FALSE;

            gTrainingModeStruct.magnify_wait = 0;
        }
        func_ovl7_8018F424();
        func_ovl7_8018D3DC();
    }
    return FALSE;
}

// 0x8018D7B8
sb32 scTrainingMode_UpdateResetOption(void)
{
    if (gPlayerControllers[gSceneData.player_port].button_new & A_BUTTON)
    {
        gTrainingModeStruct.exit_or_reset = 1;

        func_800266A0();
        func_800269C0(alSound_SFX_TModeSel2);
        func_80020B38(0, 0x7800);
        func_80005C74();

        return TRUE;
    }
    else return FALSE;
}