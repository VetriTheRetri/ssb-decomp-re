#include <ft/fighter.h>
#include <it/item.h>
#include <gr/ground.h>
#include <if/interface.h>
#include <gm/battle.h>
#include <sc/scene.h>

#define scGetTrainingModeItemSpawn(kind) \
((kind) + (It_Kind_UtilityStart - 1))

#define scGetTrainingModeItemHold(kind) \
((kind) - (It_Kind_UtilityStart - 1))

extern intptr_t D_NF_00000000;      // 0x00000000
extern intptr_t D_NF_00000020;      // 0x00000020
extern intptr_t D_NF_000000BC;      // 0x000000BC
extern intptr_t D_NF_000000FE;      // 0x000000FE
extern intptr_t D_NF_0000010C;      // 0x0000010C
extern intptr_t D_NF_0000013C;      // 0x0000013C
extern intptr_t D_NF_000001B8;      // 0x000001B8

extern uintptr_t D_NF_800A5240;     // 0x800A5240
extern uintptr_t lOverlay7ArenaLo;  // 0x80190FA0
extern uintptr_t lOverlay7ArenaHi;  // 0x80392A00

extern u32 gMusicIndexDefault;
extern u32 gMusicIndexCurrent;

// GLOBALS

// 0x80190968
gmBattleState gTrainingModeBattleState;

// 0x80190B58
scTrainingStruct gTrainingModeStruct;

// DATA

// 0x80190770
s32 D_ovl7_80190770[/* */] =
{
    0x00, 0x00, 
    0x04, 0x05,
    0x06, 0x07, 
    0x08, 0x09,
    0x0A, 0x0B, 
    0x0C, 0x0D,
    0x0E, 0x0F, 
    0x10, 0x11,
    0x12, 0x13
};

// 0x801907B8
intptr_t D_ovl7_801907B8[/* */] =
{
    0x26C88,
    0x26C88,
    0x26C88,
    0x26C88,
    0x26C88,
    0x26C88,
    0x26C88,
    0x26C88,
    0x26C88
};

// 0x801907DC
u16 scTrainingMode_DamageDisplay_DigitPositionsX[/* */] = { 75, 85, 95 };

// 0x801907E4
u8 scTrainingMode_DamageDisplay_UnitSizes[/* */] = { 100, 10, 1 };

// 0x801907E8
u16 scTrainingMode_ComboDisplay_DigitPositionsX[2] = { 69, 79 };

// 0x801907EC
u8 scTrainingMode_ComboDisplay_UnitSizes[2] = { 10, 1 };

// 0x801907F0
sb32(*scTrainingMode_MainMenu_ProcList[/* */])(void) =
{
    scTrainingMode_UpdateCPOption,
    scTrainingMode_UpdateItemOption,
    scTrainingMode_UpdateSpeedOption,
    scTrainingMode_UpdateViewOption,
    scTrainingMode_UpdateResetOption,
    scTrainingMode_UpdateExitOption
};

// 0x80190808
s32 scTrainingMode_CPOpponent_BehaviorKind[/* */] = { 0x0F, 0x10, 0x11, 0x12, 0x00 };

// 0x8019081C - [row][0] = lagframe wait, [row][1] = frameadvance wait
u8 scTrainingMode_SpeedMenu_SpeedRates[/* */][2] =
{
    { 0, 0 },
    { 1, 1 },
    { 0, 1 },
    { 0, 3 }
};

// 0x80190824
scTrainingFiles scTrainingMode_Files_BackgroundImageInfo[/* */] =
{
    { 0x1A, 0x20718, { 0x00, 0x00, 0x00 } },
    { 0x1B, 0x20718, { 0xEE, 0x9E, 0x06 } },
    { 0x1C, 0x20718, { 0xAF, 0xF5, 0xFF } }
};

// 0x80190848
s32 scTrainingMode_Files_BackgroundImageIDs[/* */] =
{
    2,  // Peach's Castle
    0,  // Sector Z
    0,  // Kongo Jungle
    0,  // Planet Zebes
    2,  // Hyrule Castle
    1,  // Yoshi's Story
    2,  // Dream Land
    2,  // Saffron City
    2   // Mushroom Kingdom
};

// 0x8019086C
Unk800D4060 D_ovl7_8019086C = { 0 };

// 0x80190870
scUnkDataBounds D_ovl7_80190870;

// 0x8019088C
scRuntimeInfo D_ovl7_8019088C;

// 0x8018D0C0
void scTrainingMode_SetPauseGObjRenderFlags(u32 flags)
{
    GObj *pause_gobj = gOMObjCommonLinks[GObj_LinkID_PauseMenu];

    while (pause_gobj != NULL)
    {
        pause_gobj->flags = flags;

        pause_gobj = pause_gobj->link_next;
    }
}

// 0x8018D0E8
void scTrainingMode_CheckEnterTrainingMenu(void)
{
    s32 player = gSceneData.spgame_player;

    if (gPlayerControllers[player].button_new & START_BUTTON)
    {
        GObj *fighter_gobj = gBattleState->player_block[player].fighter_gobj;
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (!(fp->is_ignore_startbutton))
        {
            ifCommon_SetRenderFlagsAll(DOBJ_FLAG_NOTEXTURE);
            scTrainingMode_SetPauseGObjRenderFlags(DOBJ_FLAG_NONE);
            func_ovl2_801157EC();
            ftCommon_ResetControllerInputs(gBattleState->player_block[player].fighter_gobj);
            ftCommon_ResetControllerInputs(gBattleState->player_block[gTrainingModeStruct.opponent].fighter_gobj);

            gBattleState->game_status = gmMatch_GameStatus_Pause;

            func_800269C0(alSound_SFX_GamePause);
            func_80020B38(0, 0x3C00);

            gTrainingModeStruct.is_read_menu_inputs = FALSE;
        }
    }
}

// 0x8018D1F0
void scTrainingMode_CheckLeaveTrainingMenu(void)
{
    s32 player = gSceneData.spgame_player;
    GObj *fighter_gobj;

    if (gPlayerControllers[player].button_new & (B_BUTTON | START_BUTTON))
    {
        ifCommon_SetRenderFlagsAll(GOBJ_FLAG_NONE);
        scTrainingMode_SetPauseGObjRenderFlags(GOBJ_FLAG_NORENDER);

        gBattleState->game_status = gmMatch_GameStatus_Go;

        ftCommon_SetAllowPlayerControl(gBattleState->player_block[gTrainingModeStruct.opponent].fighter_gobj);

        fighter_gobj = gBattleState->player_block[player].fighter_gobj;

        ftCommon_SetAllowPlayerControl(fighter_gobj);

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
    s32 player = gSceneData.spgame_player;

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
    if (gTrainingModeStruct.is_read_menu_inputs == FALSE)
    {
        if (!(inputs))
        {
            gTrainingModeStruct.is_read_menu_inputs = TRUE;
        }
    }
    else
    {
        gTrainingModeStruct.button_tap = (inputs ^ gTrainingModeStruct.button_hold) & inputs;

        if (inputs ^ gTrainingModeStruct.button_hold)
        {
            gTrainingModeStruct.button_queue = gTrainingModeStruct.button_tap;
            gTrainingModeStruct.rapid_scroll_wait = SCTRAINING_GENERAL_SCROLL_WAIT_NORMAL;
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
                gTrainingModeStruct.rapid_scroll_wait = SCTRAINING_GENERAL_SCROLL_WAIT_FAST;
            }
        }
        gTrainingModeStruct.button_hold = inputs;
    }
}

// 0x8018D3DC
void func_ovl7_8018D3DC(void)
{
    scTrainingMode_UpdateOptionArrows();
    scTrainingMode_UpdateCursorUnderline();
    func_800269C0(alSound_SFX_MenuScroll2);
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
        scTrainingMode_UpdateOpponentBehavior();
        scTrainingMode_InitCPDisplaySprite();
        scTrainingMode_InitCPOptionSprite();
        func_ovl7_8018D3DC();
    }
    return FALSE;
}

// 0x8018D4D0
s32 scTrainingMode_GetSpawnableItemCount(void)
{
    GObj *item_gobj = gOMObjCommonLinks[GObj_LinkID_Item];
    s32 item_count;

    for (item_count = 0; item_gobj != NULL; item_gobj = item_gobj->link_next)
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
        scTrainingMode_InitItemOptionSprite();
        func_ovl7_8018D3DC();
    }
    if (gTrainingModeStruct.item_spawn_wait == 0)
    {
        if ((gPlayerControllers[gSceneData.spgame_player].button_new & A_BUTTON) && (gTrainingModeStruct.item_menu_option != scTrainingMenu_Item_None))
        {
            if (scTrainingMode_GetSpawnableItemCount() < SCTRAINING_ITEMSPAWN_MAX)
            {
                vel.x = vel.z = 0.0F;
                vel.y = SCTRAINING_ITEMSPAWN_VEL_Y;

                pos = DObjGetStruct(gBattleState->player_block[gSceneData.spgame_player].fighter_gobj)->translate.vec.f;

                pos.y += SCTRAINING_ITEMSPAWN_OFF_Y;
                pos.z = 0.0F;

                itManager_MakeItemSetupCommon(NULL, scGetTrainingModeItemSpawn(gTrainingModeStruct.item_menu_option), &pos, &vel, ITEM_MASK_SPAWN_DEFAULT);

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

        scTrainingMode_InitSpeedDisplaySprite();
        scTrainingMode_InitSpeedOptionSprite();
        func_ovl7_8018D3DC();
    }
    return FALSE;
}

// 0x8018D6DC
sb32 scTrainingMode_UpdateViewOption(void)
{
    if (scTrainingMode_CheckUpdateOptionID(&gTrainingModeStruct.view_menu_option, scTrainingMenu_View_EnumStart, scTrainingMenu_View_EnumMax) != FALSE)
    {
        if (gTrainingModeStruct.view_menu_option == scTrainingMenu_View_Normal)
        {
            func_ovl2_8010CF20();

            gTrainingModeStruct.magnify_wait = SCTRAINING_VIEW_MAGNIFY_WAIT;
        }
        else
        {
            GObj *fighter_gobj = gBattleState->player_block[gSceneData.spgame_player].fighter_gobj;

            func_ovl2_8010CF44(fighter_gobj, 0.0F, 0.0F, ftGetStruct(fighter_gobj)->attributes->closeup_cam_zoom, 0.1F, 28.0F);

            gPlayerCommonInterface.is_ifmagnify_display = FALSE;

            gTrainingModeStruct.magnify_wait = 0;
        }
        scTrainingMode_InitSpeedOptionSprite();
        func_ovl7_8018D3DC();
    }
    return FALSE;
}

// 0x8018D7B8
sb32 scTrainingMode_UpdateResetOption(void)
{
    if (gPlayerControllers[gSceneData.spgame_player].button_new & A_BUTTON)
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

// 0x8018D830
sb32 scTrainingMode_UpdateExitOption(void)
{
    if (gPlayerControllers[gSceneData.spgame_player].button_new & A_BUTTON)
    {
        func_800266A0();
        func_800269C0(alSound_SFX_TModeSel2);
        func_80005C74();

        return TRUE;
    }
    else return FALSE;
}

// 0x8018D898
void scTrainingMode_UpdateMainOption(void)
{
    if (gTrainingModeStruct.button_queue & (U_JPAD | D_JPAD))
    {
        if (gTrainingModeStruct.button_queue & U_JPAD)
        {
            if (--gTrainingModeStruct.main_menu_option < scTrainingMenu_Main_EnumStart)
            {
                gTrainingModeStruct.main_menu_option = scTrainingMenu_Main_Exit;
            }
        }
        else if (++gTrainingModeStruct.main_menu_option >= scTrainingMenu_Main_EnumMax)
        {
            gTrainingModeStruct.main_menu_option = scTrainingMenu_Main_CP;
        }
        scTrainingMode_UpdateCursorPosition();
        func_ovl7_8018D3DC();
        func_800269C0(alSound_SFX_MenuScroll2);
    }
}

// 0x8018D91C
void scTrainingMode_UpdateTrainingMenu(void)
{
    scTrainingMode_UpdateMenuInputs();

    if (scTrainingMode_MainMenu_ProcList[gTrainingModeStruct.main_menu_option]() == FALSE)
    {
        scTrainingMode_UpdateMainOption();
        scTrainingMode_CheckLeaveTrainingMenu();
    }
}

// 0x8018D974 - TRUE if frame advance timer is on cooldown?
sb32 scTrainingMode_CheckSpeedFrameFreeze(void)
{
    if (gTrainingModeStruct.lagframe_wait == 0)
    {
        if (gTrainingModeStruct.frameadvance_wait == 0)
        {
            gTrainingModeStruct.lagframe_wait = scTrainingMode_SpeedMenu_SpeedRates[gTrainingModeStruct.speed_menu_option][0];
        }
        else
        {
            gTrainingModeStruct.frameadvance_wait--;

            return TRUE;
        }
    }
    else gTrainingModeStruct.lagframe_wait--;

    if (gTrainingModeStruct.lagframe_wait == 0)
    {
        gTrainingModeStruct.frameadvance_wait = scTrainingMode_SpeedMenu_SpeedRates[gTrainingModeStruct.speed_menu_option][1];
    }
    return FALSE;
}

// 0x8018D9F0
void scTrainingMode_ProcUpdate(void)
{
    switch (gBattleState->game_status)
    {
    case gmMatch_GameStatus_Go:
        scTrainingMode_CheckEnterTrainingMenu();
        break;

    case gmMatch_GameStatus_Pause:
        scTrainingMode_UpdateTrainingMenu();
        break;
    }
    if (scTrainingMode_CheckSpeedFrameFreeze() == FALSE)
    {
        func_8000A5E4();
    }
    else cmManager_RunProcCamera(gCameraGObj);

    func_ovl2_80114800();
}

// 0x8018DA78
void scTrainingMode_RunProcUpdate(void)
{
    scTrainingMode_ProcUpdate();
}

// 0x8018DA98
void func_ovl7_8018DA98(void)
{
    s32 opponent;
    s32 player;

    gTrainingModeBattleState = gDefaultBattleState;
    gBattleState = &gTrainingModeBattleState;

    gBattleState->game_type = gmMatch_GameType_TrainingMode;

    gBattleState->gr_kind = gSceneData.gr_kind;

    gBattleState->time_limit = GMMATCH_TIMELIMIT_INFINITE;

    gBattleState->is_display_score = FALSE;

    gBattleState->item_toggles = 0;

    for (player = 0; player < ARRAY_COUNT(gBattleState->player_block); player++)
    {
        if (player == gSceneData.spgame_player)
        {
            gBattleState->player_block[player].player_kind = Pl_Kind_Man;
            gBattleState->player_block[player].character_kind = gSceneData.unk3B;
            gBattleState->player_block[player].costume_index = gSceneData.unk3C;
            gBattleState->player_block[player].team_index = 0;
            gBattleState->player_block[player].player_color_index = player;
        }
        else gBattleState->player_block[player].player_kind = Pl_Kind_Not;
    }

    opponent = (gSceneData.spgame_player == 0) ? 1 : 0;

    gBattleState->player_block[opponent].player_kind = Pl_Kind_Com;
    gBattleState->player_block[opponent].tag_index = ifPlayerTag_Kind_CP;
    gBattleState->player_block[opponent].character_kind = gSceneData.unk3D;
    gBattleState->player_block[opponent].costume_index = gSceneData.unk3E;
    gBattleState->player_block[opponent].level = 3;
    gBattleState->player_block[opponent].team_index = 1;
    gBattleState->player_block[opponent].player_color_index = gmMatch_PlayerColor_CP;

    gBattleState->pl_count = 1;
    gBattleState->cp_count = 1;

    gTrainingModeStruct.main_menu_option = 0;
    gTrainingModeStruct.damage = 0;
    gTrainingModeStruct.combo = 0;
    gTrainingModeStruct.item_hold = -1;

    gTrainingModeStruct.cp_menu_option = 0;
    gTrainingModeStruct.speed_menu_option = 0;
    gTrainingModeStruct.view_menu_option = scTrainingMenu_View_Normal;

    gTrainingModeStruct.lagframe_wait = 0;
    gTrainingModeStruct.frameadvance_wait = 0;

    gTrainingModeStruct.item_spawn_wait = 0;
    gTrainingModeStruct.item_menu_option = 0;

    gTrainingModeStruct.opponent = opponent;

    gTrainingModeStruct.button_hold = gTrainingModeStruct.button_tap = gTrainingModeStruct.button_queue = 0;

    gTrainingModeStruct.rapid_scroll_wait = SCTRAINING_GENERAL_SCROLL_WAIT_NORMAL;

    gTrainingModeStruct.damage_reset_wait = 0;
    gTrainingModeStruct.combo_reset_wait = 0;

    gTrainingModeStruct.exit_or_reset = 0;

    gTrainingModeStruct.magnify_wait = 0;

    gTrainingModeStruct.is_read_menu_inputs = FALSE;
}

// 0x8018DD0C
void scTrainingMode_LoadFiles(void)
{
    void *addr = rdManagerGetFileWithExternHeap((u32)&D_NF_000000FE, hlMemoryAlloc(rdManagerGetFileSize((u32)&D_NF_000000FE), 0x10));

    gTrainingModeStruct.display_label_sprites = (void*) ((uintptr_t)addr + (intptr_t)&D_NF_00000000);
    gTrainingModeStruct.display_option_sprites = (void*) ((uintptr_t)addr + (intptr_t)&D_NF_00000020);
    gTrainingModeStruct.menu_label_sprites = (void*) ((uintptr_t)addr + (intptr_t)&D_NF_000000BC);
    gTrainingModeStruct.menu_option_sprites = (void*) ((uintptr_t)addr + (intptr_t)&D_NF_0000013C);
    gTrainingModeStruct.unk_trainmenu_0x34 = (void*) ((uintptr_t)addr + (intptr_t)&D_NF_0000010C);
    gTrainingModeStruct.unk_trainmenu_0x38 = (void*) ((uintptr_t)addr + (intptr_t)&D_NF_000001B8);
}

// 0x8018DDB0
void scTrainingMode_LoadBackgroundImage(void)
{
    gGroundInfo->background_sprite = (void*)
    (
        rldm_get_file_external_force
        (
            scTrainingMode_Files_BackgroundImageInfo[scTrainingMode_Files_BackgroundImageIDs[gBattleState->gr_kind]].file_id,
            (void*) ((uintptr_t)gGroundInfo->background_sprite - (intptr_t)D_ovl7_801907B8[gBattleState->gr_kind])
        )

        +

        scTrainingMode_Files_BackgroundImageInfo[scTrainingMode_Files_BackgroundImageIDs[gBattleState->gr_kind]].addr
    );
}

// 0x8018DE60
void scTrainingMode_InitMiscVars(void)
{
    gGroundInfo->fog_color = scTrainingMode_Files_BackgroundImageInfo[scTrainingMode_Files_BackgroundImageIDs[gBattleState->gr_kind]].fog_color;

    ifPlayer_MagnifyGlass_SetInterface();

    gPlayerCommonInterface.is_ifmagnify_display = TRUE;
}

// 0x8018DEDC
SObj* scTrainingMode_MakeStatDisplaySObj(GObj *interface_gobj, scTrainingSprites *tms)
{
    SObj *sobj = gcAppendSObjWithSprite(interface_gobj, tms->sprite);

    sobj->pos.x = tms->pos.x;
    sobj->pos.y = tms->pos.y;

    return sobj;
}

// 0x8018DF30
void scTrainingMode_InitStatDisplayTextInterface(void)
{
    s32 i;
    GObj *interface_gobj = omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xB, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

    for (i = 0; i < SCTRAINING_STATDISPLAY_TEXT_COUNT; i++)
    {
        SObj *sobj = scTrainingMode_MakeStatDisplaySObj(interface_gobj, &gTrainingModeStruct.display_label_sprites[i]);

        sobj->sprite.red   = 0xAF;
        sobj->sprite.green = 0xAE;
        sobj->sprite.blue  = 0xDD;

        sobj->shadow_color.r = 0x00;
        sobj->shadow_color.g = 0x00;
        sobj->shadow_color.b = 0x00;

        sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;
    }
}

// 0x8018E014
void scTrainingMode_UpdateDamageDisplay(GObj *interface_gobj, s32 damage)
{
    SObj *sobj = SObjGetStruct(interface_gobj);
    s32 i;

    for (i = 0; i < (ARRAY_COUNT(scTrainingMode_DamageDisplay_DigitPositionsX) + ARRAY_COUNT(scTrainingMode_DamageDisplay_UnitSizes)) / 2; i++);
    {
        s32 modulo = damage / scTrainingMode_DamageDisplay_UnitSizes[i];

        damage -= (modulo * scTrainingMode_DamageDisplay_UnitSizes[i]);

        sobj->sprite = *gTrainingModeStruct.display_option_sprites[modulo];

        sobj->pos.x = (s32)(scTrainingMode_DamageDisplay_DigitPositionsX[i] - (sobj->sprite.width * 0.5F));

        sobj = sobj->next;
    }
}

// 0x8018E138
void scTrainingMode_UpdateDamageInfo(GObj *interface_gobj)
{
    s32 damage = gBattleState->player_block[gTrainingModeStruct.opponent].combo_damage_foe;

    if (damage > GMCOMMON_PERCENT_DAMAGE_MAX)
    {
        damage = GMCOMMON_PERCENT_DAMAGE_MAX;
    }
    if (damage == 0)
    {
        if (gTrainingModeStruct.damage != 0)
        {
            gTrainingModeStruct.damage_reset_wait = 90;
            gTrainingModeStruct.damage = 0;
        }
        if (gTrainingModeStruct.damage_reset_wait == 0)
        {
            gTrainingModeStruct.damage = 1;
        }
    }
    if (damage != gTrainingModeStruct.damage)
    {
        scTrainingMode_UpdateDamageDisplay(interface_gobj, damage);

        gTrainingModeStruct.damage = damage;
    }
    func_ovl0_800CCF00(interface_gobj);
}

// 0x8018E1F8
void scTrainingMode_UpdateDamageResetWait(GObj *interface_gobj)
{
    if (gTrainingModeStruct.damage_reset_wait != 0)
    {
        gTrainingModeStruct.damage_reset_wait--;
    }
}

// 0x8018E21C
void scTrainingMode_InitStatDisplayCharacterVars(void)
{
    s32 i;

    for (i = 0; i < SCTRAINING_STATDISPLAY_CHARACTER_COUNT; i++)
    {
        Sprite *sprite = gTrainingModeStruct.display_option_sprites[i];

        sprite->red   = 0x6C;
        sprite->green = 0xFF;
        sprite->blue  = 0x6C;

        sprite->attr = SP_TEXSHUF | SP_TRANSPARENT;
    }
}

// 0x8018E300
void scTrainingMode_InitSObjColors(SObj *sobj)
{
    sobj->shadow_color.r = 0x00;
    sobj->shadow_color.g = 0x00;
    sobj->shadow_color.b = 0x00;
}

// 0x8018E310
void scTrainingMode_MakeDamageDisplayInterface(void)
{
    GObj *interface_gobj;
    SObj *sobj;
    s32 i;

    gTrainingModeStruct.damage_display_gobj = interface_gobj = omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xB, 0x80000000);

    omAddGObjRenderProc(interface_gobj, scTrainingMode_UpdateDamageInfo, 0x17, 0x80000000, -1);
    omAddGObjCommonProc(interface_gobj, scTrainingMode_UpdateDamageResetWait, 1, 4);

    for (i = 0; i < SCTRAINING_DAMAGEDISPLAY_DIGIT_COUNT; i++)
    {
        sobj = gcAppendSObjWithSprite(interface_gobj, gTrainingModeStruct.display_option_sprites[0]);
        scTrainingMode_InitSObjColors(sobj);

        sobj->pos.y = 20.0F;
    }
    scTrainingMode_UpdateDamageDisplay(interface_gobj, 0);

    sobj = gcAppendSObjWithSprite(interface_gobj, gTrainingModeStruct.display_option_sprites[SCTRAINING_STATDISPLAY_CHARACTER_COUNT - 1]);

    scTrainingMode_InitSObjColors(sobj);

    sobj->pos.y = 20.0F;
    sobj->pos.x = 100.0F;
}

// 0x8018E424
void scTrainingMode_UpdateComboDisplay(GObj *interface_gobj, s32 combo)
{
    SObj *sobj = SObjGetStruct(interface_gobj);
    s32 i;

    for (i = 0; i < (ARRAY_COUNT(scTrainingMode_ComboDisplay_DigitPositionsX) + ARRAY_COUNT(scTrainingMode_ComboDisplay_UnitSizes)) / 2; i++)
    {
        s32 modulo = combo / scTrainingMode_ComboDisplay_UnitSizes[i];

        combo -= (modulo * scTrainingMode_ComboDisplay_UnitSizes[i]);

        sobj->sprite = *gTrainingModeStruct.display_option_sprites[modulo];

        sobj->pos.x = (s32)(scTrainingMode_ComboDisplay_DigitPositionsX[i] - (sobj->sprite.width * 0.5F));

        sobj = sobj->next;
    }
}

// 0x8018E548
void scTrainingMode_UpdateComboResetWait(GObj *interface_gobj)
{
    if (gTrainingModeStruct.combo_reset_wait != 0)
    {
        gTrainingModeStruct.combo_reset_wait--;
    }
}

// 0x8018E56C
void scTrainingMode_UpdateComboInfo(s32 interface_gobj)
{
    s32 combo = gBattleState->player_block[gTrainingModeStruct.opponent].combo_count_foe;

    if (combo > 99)
    {
        combo = 99;
    }
    if (combo == 0)
    {
        if (gTrainingModeStruct.combo != 0)
        {
            gTrainingModeStruct.combo_reset_wait = 90;
            gTrainingModeStruct.combo = 0;
        }
        if (gTrainingModeStruct.combo_reset_wait == 0)
        {
            gTrainingModeStruct.combo = 1;
        }
    }
    if (combo != gTrainingModeStruct.combo)
    {
        scTrainingMode_UpdateComboDisplay(interface_gobj, combo);

        gTrainingModeStruct.combo = combo;
    }
    func_ovl0_800CCF00(interface_gobj);
}

// 0x8018E62C
void scTrainingMode_MakeComboDisplayInterface(void)
{
    GObj *interface_gobj;
    s32 i;

    gTrainingModeStruct.combo_display_gobj = interface_gobj = omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xB, 0x80000000);

    omAddGObjRenderProc(interface_gobj, scTrainingMode_UpdateComboInfo, 0x17, 0x80000000, -1);
    omAddGObjCommonProc(interface_gobj, scTrainingMode_UpdateComboResetWait, 1, 4);

    for (i = 0; i < SCTRAINING_COMBODISPLAY_DIGIT_COUNT; i++)
    {
        SObj *sobj = gcAppendSObjWithSprite(interface_gobj, *gTrainingModeStruct.display_option_sprites);

        scTrainingMode_InitSObjColors(sobj);

        sobj->pos.y = 36.0F;
    }
    scTrainingMode_UpdateComboDisplay(interface_gobj, 0);
}

// 0x8018E714
void scTrainingMode_InitSpeedDisplaySprite(void)
{
    SObj *sobj = SObjGetStruct(gTrainingModeStruct.speed_display_gobj);

    sobj->sprite = *gTrainingModeStruct.display_option_sprites[gTrainingModeStruct.speed_menu_option + 27];
}

// 0x8018E774
void scTrainingMode_MakeSpeedDisplayInterface(void)
{
    GObj *interface_gobj;
    SObj *sobj;

    gTrainingModeStruct.speed_display_gobj = interface_gobj = omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xB, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

    sobj = gcAppendSObjWithSprite(interface_gobj, gTrainingModeStruct.display_option_sprites[gTrainingModeStruct.speed_menu_option + 27]);

    sobj->pos.x = 276.0F;
    sobj->pos.y = 20.0F;

    scTrainingMode_InitSObjColors(sobj);
}

// 0x8018E810
void scTrainingMode_InitCPDisplaySprite(void)
{
    SObj *sobj = SObjGetStruct(gTrainingModeStruct.cp_display_gobj);

    sobj->sprite = *gTrainingModeStruct.display_option_sprites[gTrainingModeStruct.cp_menu_option + 31];
}

// 0x8018E870
void scTrainingMode_MakeCPDisplayInterface(void)
{
    GObj *interface_gobj;
    SObj *sobj;

    gTrainingModeStruct.cp_display_gobj = interface_gobj = omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xB, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000U, -1);

    sobj = gcAppendSObjWithSprite(interface_gobj, gTrainingModeStruct.display_option_sprites[gTrainingModeStruct.cp_menu_option + 31]);

    sobj->pos.x = 191.0F;
    sobj->pos.y = 20.0F;

    scTrainingMode_InitSObjColors(sobj);
}

// 0x8018E90C
void scTrainingMode_InitItemDisplaySprite(void)
{
    SObj *root_sobj, *next_sobj;

    root_sobj = SObjGetStruct(gTrainingModeStruct.item_display_gobj)->next;
    next_sobj = root_sobj->next;

    root_sobj->sprite = *gTrainingModeStruct.display_option_sprites[gTrainingModeStruct.item_hold + 10];

    root_sobj->pos.x = (f32)(292 - root_sobj->sprite.width);
    next_sobj->pos.x = (f32)(292 - root_sobj->sprite.width) - next_sobj->sprite.width;
}

// 0x8018E9AC
void scTrainingMode_UpdateItemDisplay(GObj *interface_gobj)
{
    ftStruct *fp = ftGetStruct(gBattleState->player_block[gSceneData.spgame_player].fighter_gobj);
    GObj *item_gobj = fp->item_hold;
    s32 item_id;

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        if (ip->it_kind <= It_Kind_ContainerEnd)
        {
            while (TRUE)
            {
                gsFatalPrintF("Error : wrong item! %d\n", ip->it_kind);
                scnmgr_scManagerCrashPrintGObjStatus();
            }
        }
        item_id = (ip->it_kind <= It_Kind_CommonEnd) ? scGetTrainingModeItemHold(ip->it_kind) : scTrainingMenu_Item_None;
    }
    else item_id = scTrainingMenu_Item_None;

    if (gTrainingModeStruct.item_hold != item_id)
    {
        gTrainingModeStruct.item_hold = item_id;

        scTrainingMode_InitItemDisplaySprite();
    }
    func_ovl0_800CCF00(interface_gobj);
}

// 0x8018EA88
void scTrainingMode_MakeItemDisplayInterface(void)
{
    GObj *interface_gobj;
    SObj *sobj;

    gTrainingModeStruct.item_display_gobj = interface_gobj = omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xB, 0x80000000);

    omAddGObjRenderProc(interface_gobj, scTrainingMode_UpdateItemDisplay, 0x17, 0x80000000, -1);

    sobj = gcAppendSObjWithSprite(interface_gobj, gTrainingModeStruct.display_option_sprites[37]);

    sobj->pos.x = 292.0F;
    sobj->pos.y = 36.0F;

    scTrainingMode_InitSObjColors(sobj);

    sobj = gcAppendSObjWithSprite(interface_gobj, gTrainingModeStruct.display_option_sprites[0]);
    sobj->pos.y = 36.0F;

    scTrainingMode_InitSObjColors(sobj);

    sobj = gcAppendSObjWithSprite(interface_gobj, gTrainingModeStruct.display_option_sprites[36]);
    sobj->pos.y = 36.0F;

    scTrainingMode_InitSObjColors(sobj);
}

// 0x8018EB64
void scTrainingMode_InitStatDisplayAll(void)
{
    scTrainingMode_InitStatDisplayTextInterface();
    scTrainingMode_InitStatDisplayCharacterVars();

    scTrainingMode_MakeDamageDisplayInterface();
    scTrainingMode_MakeComboDisplayInterface();
    scTrainingMode_MakeSpeedDisplayInterface();
    scTrainingMode_MakeCPDisplayInterface();
    scTrainingMode_MakeItemDisplayInterface();
}

// 0x8018EBB4
void scTrainingMode_MakeMenuLabelsInterface(void)
{
    GObj *interface_gobj;
    s32 i;

    gTrainingModeStruct.menu_label_gobj = interface_gobj = omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xE, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

    for (i = 0; i < SCTRAINING_MENULABELS_SPRITE_COUNT; i++)
    {
        SObj *sobj = scTrainingMode_MakeStatDisplaySObj(interface_gobj, &gTrainingModeStruct.menu_label_sprites[i]);

        if (i < SCTRAINING_MENULABELS_TEXT_COUNT)
        {
            sobj->sprite.red   = 0xF3;
            sobj->sprite.green = 0xA7;
            sobj->sprite.blue  = 0x6A;

            sobj->shadow_color.r = 0x00;
            sobj->shadow_color.g = 0x00;
            sobj->shadow_color.b = 0x00;
        }
        sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;
    }
}

// 0x8018ECA4
void scTrainingMode_InitMenuOptionSpriteAttrs(void)
{
    s32 i;

    for (i = 0; i < scTrainingMenu_OptionSprite_EnumMax; i++)
    {
        gTrainingModeStruct.menu_option_sprites[i]->attr = SP_TEXSHUF | SP_TRANSPARENT;
    }
}

// 0x8018ED2C
void scTrainingMode_RenderMainMenu(GObj *interface_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);

    gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);

    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x00, 0x64, 0xFF, 0x64);

    gDPFillRectangle(gDisplayListHead[0]++, 68, 47, 253, 198);

    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x8018EE10
void scTrainingMode_MakeMainMenuInterface(void)
{
    omAddGObjRenderProc(omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xE, 0x80000000), scTrainingMode_RenderMainMenu, 0x16, 0x80000000, -1);
}

// 0x8018EE5C
void scTrainingMode_InitCPOptionTextColors(void)
{
    s32 i;

    for (i = scTrainingMenu_OptionSprite_CPStart; i <= scTrainingMenu_OptionSprite_CPEnd; i++)
    {
        Sprite *sprite = gTrainingModeStruct.menu_option_sprites[i];

        sprite->red   = 0xFF;
        sprite->green = 0xFF;
        sprite->blue  = 0xFF;
    }
}

// 0x8018EEE8
void scTrainingMode_InitCPOptionSprite(void)
{
    SObj *sobj = SObjGetStruct(gTrainingModeStruct.cp_option_gobj);

    sobj->sprite = *gTrainingModeStruct.menu_option_sprites[gTrainingModeStruct.cp_menu_option + scTrainingMenu_OptionSprite_CPStart];

    sobj->pos.x = 191 - (sobj->sprite.width / 2);
}

// 0x8018EF78
void scTrainingMode_MakeCPOptionInterface(void)
{
    GObj *interface_gobj;
    SObj *sobj;

    gTrainingModeStruct.cp_option_gobj = interface_gobj = omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xE, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

    sobj = gcAppendSObjWithSprite(interface_gobj, gTrainingModeStruct.menu_option_sprites[gTrainingModeStruct.cp_menu_option + scTrainingMenu_OptionSprite_CPStart]);

    sobj->pos.x = 191 - (sobj->sprite.width / 2);
    sobj->pos.y = 65.0F;

    sobj->shadow_color.r = 0x4A;
    sobj->shadow_color.g = 0x2E;
    sobj->shadow_color.b = 0x60;
}

// 0x8018F040
void scTrainingMode_InitItemOptionSprite(void)
{
    SObj *sobj = SObjGetStruct(gTrainingModeStruct.item_option_gobj);

    sobj->sprite = *gTrainingModeStruct.menu_option_sprites[gTrainingModeStruct.item_menu_option + scTrainingMenu_OptionSprite_ItemStart];

    sobj->pos.x = 191 - (sobj->sprite.width / 2);

    sobj->pos.y = (gTrainingModeStruct.item_menu_option == scTrainingMenu_Item_MotionSensorBomb) ? 83.0F : 85.0F;
}

// 0x8018F0FC
void scTrainingMode_InitItemOptionTextColors(void)
{
    s32 i;

    for (i = scTrainingMenu_OptionSprite_ItemStart; i <= scTrainingMenu_OptionSprite_ItemEnd; i++)
    {
        Sprite *sprite = gTrainingModeStruct.menu_option_sprites[i];

        sprite->red   = 0xFF;
        sprite->green = 0xFF;
        sprite->blue  = 0xFF;
    }
}

// 0x8018F194
void scTrainingMode_MakeItemOptionInterface(void)
{
    GObj *interface_gobj;
    SObj *sobj;

    gTrainingModeStruct.item_option_gobj = interface_gobj = omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xE, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

    sobj = gcAppendSObjWithSprite(interface_gobj, gTrainingModeStruct.menu_option_sprites[gTrainingModeStruct.item_menu_option + scTrainingMenu_OptionSprite_ItemStart]);
    sobj->pos.x = 191 - (sobj->sprite.width / 2);

    scTrainingMode_InitItemOptionSprite();

    sobj->shadow_color.r = 0x4A;
    sobj->shadow_color.g = 0x2E;
    sobj->shadow_color.b = 0x60;
}

// 0x8018F264
void scTrainingMode_InitSpeedOptionTextColors(void)
{
    s32 i;

    for (i = scTrainingMenu_OptionSprite_SpeedStart; i <= scTrainingMenu_OptionSprite_SpeedEnd; i++)
    {
        Sprite *sprite = gTrainingModeStruct.menu_option_sprites[i];

        sprite->red   = 0xFF;
        sprite->green = 0xFF;
        sprite->blue  = 0xFF;
    }
}

// 0x8018F2C4
void scTrainingMode_InitSpeedOptionSprite(void)
{
    SObj *sobj = SObjGetStruct(gTrainingModeStruct.speed_option_gobj);

    sobj->sprite = *gTrainingModeStruct.menu_option_sprites[gTrainingModeStruct.speed_menu_option + scTrainingMenu_OptionSprite_SpeedStart];

    sobj->pos.x = 191 - (sobj->sprite.width / 2);
}

// 0x8018F354
void scTrainingMode_MakeSpeedOptionInterface(void)
{
    GObj *interface_gobj;
    SObj *sobj;

    gTrainingModeStruct.speed_option_gobj = interface_gobj = omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xE, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

    sobj = gcAppendSObjWithSprite(interface_gobj, gTrainingModeStruct.menu_option_sprites[gTrainingModeStruct.speed_menu_option + scTrainingMenu_OptionSprite_SpeedStart]);

    sobj->pos.x = 191 - (sobj->sprite.width / 2);
    sobj->pos.y = 105.0F;

    sobj->shadow_color.r = 0x4A;
    sobj->shadow_color.g = 0x2E;
    sobj->shadow_color.b = 0x60;
}

// 0x8018F41C - ???
void func_ovl7_8018F41C(void)
{
    return;
}

// 0x8018F424
void scTrainingMode_InitSpeedOptionSprite(void)
{
    SObj *sobj = SObjGetStruct(gTrainingModeStruct.view_option_gobj);

    sobj->sprite = *gTrainingModeStruct.menu_option_sprites[gTrainingModeStruct.view_menu_option + scTrainingMenu_OptionSprite_ViewStart];

    sobj->pos.x = 191 - (sobj->sprite.width / 2);
}

// 0x8018F4B4
void scTrainingMode_UpdateMagnifyWait(GObj *interface_gobj)
{
    if (gTrainingModeStruct.magnify_wait != 0)
    {
        gTrainingModeStruct.magnify_wait--;

        if (gTrainingModeStruct.magnify_wait == 0)
        {
            gPlayerCommonInterface.is_ifmagnify_display = TRUE;
        }
    }
}

// 0x8018F4EC
void scTrainingMode_MakeViewOptionInterface(void)
{
    GObj *interface_gobj;
    SObj *sobj;

    gTrainingModeStruct.view_option_gobj = interface_gobj = omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xE, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

    sobj = gcAppendSObjWithSprite(interface_gobj, gTrainingModeStruct.menu_option_sprites[gTrainingModeStruct.view_menu_option + scTrainingMenu_OptionSprite_ViewStart]);

    sobj->pos.x = 191 - (sobj->sprite.width / 2);
    sobj->pos.y = 125.0F;

    sobj->shadow_color.r = 0x4A;
    sobj->shadow_color.g = 0x2E;
    sobj->shadow_color.b = 0x60;

    omAddGObjCommonProc(interface_gobj, scTrainingMode_UpdateMagnifyWait, 1, 4);
}

// 0x8018F5CC
void scTrainingMode_CopyHScrollOptionSObjs(void)
{
    gTrainingModeStruct.hscroll_option_sobj[0] = SObjGetStruct(gTrainingModeStruct.cp_option_gobj);
    gTrainingModeStruct.hscroll_option_sobj[1] = SObjGetStruct(gTrainingModeStruct.item_option_gobj);
    gTrainingModeStruct.hscroll_option_sobj[2] = SObjGetStruct(gTrainingModeStruct.speed_option_gobj);
    gTrainingModeStruct.hscroll_option_sobj[3] = SObjGetStruct(gTrainingModeStruct.view_option_gobj);
}

// 0x8018F608
void scTrainingMode_InitOptionArrowColors(SObj *sobj)
{
    sobj->sprite.red   = 0xF3;
    sobj->sprite.green = 0x10;
    sobj->sprite.blue  = 0xE;

    sobj->shadow_color.r = 0x00;
    sobj->shadow_color.g = 0x00;
    sobj->shadow_color.b = 0x00;
}

// 0x8018F630
void scTrainingMode_UpdateOptionArrows(void)
{
    SObj *root_sobj = SObjGetStruct(gTrainingModeStruct.arrow_option_gobj); // Left arrow
    SObj *next_sobj = root_sobj->next; // Right arrow

    if (gTrainingModeStruct.main_menu_option <= scTrainingMenu_Main_ScrollEnd)
    {
        SObj *option_sobj = gTrainingModeStruct.hscroll_option_sobj[gTrainingModeStruct.main_menu_option];

        root_sobj->pos.x = 137.0F;
        next_sobj->pos.x = 237.0F;

        if ((gTrainingModeStruct.main_menu_option == scTrainingMenu_Main_Item) && (gTrainingModeStruct.item_menu_option == scTrainingMenu_Item_MotionSensorBomb))
        {
            root_sobj->pos.y = next_sobj->pos.y = (s32)(option_sobj->pos.y + 5.0F);
        }
        else root_sobj->pos.y = next_sobj->pos.y = (s32)(option_sobj->pos.y + 3.0F);

        root_sobj->sprite.attr &= ~SP_HIDDEN;
        next_sobj->sprite.attr &= ~SP_HIDDEN;
    }
    else
    {
        root_sobj->sprite.attr |= SP_HIDDEN;
        next_sobj->sprite.attr |= SP_HIDDEN;
    }
}

// 0x8018F730
void scTrainingMode_MakeOptionArrowInterface(void)
{
    GObj *interface_gobj;

    gTrainingModeStruct.arrow_option_gobj = interface_gobj = omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xE, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

    scTrainingMode_InitOptionArrowColors(gcAppendSObjWithSprite(interface_gobj, gTrainingModeStruct.menu_option_sprites[scTrainingMenu_OptionSprite_LeftArrow]));
    scTrainingMode_InitOptionArrowColors(gcAppendSObjWithSprite(interface_gobj, gTrainingModeStruct.menu_option_sprites[scTrainingMenu_OptionSprite_RightArrow]));

    scTrainingMode_UpdateOptionArrows();
}

// 0x8018F7C8
SObj* func_ovl7_8018F7C8(GObj *interface_gobj, scTrainingSprites *tms)
{
    SObj *sobj = gcAppendSObjWithSprite(interface_gobj, tms->sprite);

    sobj->pos.x = tms->pos.x;

    return sobj;
}

// 0x8018F804
void func_ovl7_8018F804(void) // Unused?
{
    s32 i;

    for (i = 0; i < 6; i++)
    {
        gTrainingModeStruct.unk_trainmenu_0x34[i].sprite->attr = SP_TEXSHUF | SP_TRANSPARENT;
    }
}

// 0x8018F874
void func_ovl7_8018F874(void) // Unused?
{
    SObj *sobj = SObjGetStruct(gTrainingModeStruct.unk_trainmenu_0x7C);

    sobj->sprite = *gTrainingModeStruct.unk_trainmenu_0x34[gTrainingModeStruct.main_menu_option].sprite;

    sobj->pos.x = gTrainingModeStruct.unk_trainmenu_0x34[gTrainingModeStruct.main_menu_option].pos.x;
}

// 0x8018F8FC
void func_ovl7_8018F8FC(void) // Unused?
{
    GObj *interface_gobj;

    gTrainingModeStruct.unk_trainmenu_0x7C = interface_gobj = omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xE, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);
    func_ovl7_8018F7C8(interface_gobj, &gTrainingModeStruct.unk_trainmenu_0x34[gTrainingModeStruct.main_menu_option])->pos.y = 182.0F;
}

// 0x8018F984
void func_ovl7_8018F984(void) // Unused?
{
    s32 i;

    for (i = 0; i < 28; i++)
    {
        gTrainingModeStruct.unk_trainmenu_0x38[i].sprite->attr = SP_TEXSHUF | SP_TRANSPARENT;
    }
}

// 0x8018F9E8
s32 scTrainingMode_GetMenuOptionSpriteID(void)
{
    switch (gTrainingModeStruct.main_menu_option)
    {
    case scTrainingMenu_Main_CP:
        return gTrainingModeStruct.cp_menu_option + scTrainingMenu_OptionSprite_CPStart;

    case scTrainingMenu_Main_Item:
        return gTrainingModeStruct.item_menu_option + scTrainingMenu_OptionSprite_ItemStart;

    case scTrainingMenu_Main_Speed:
        return gTrainingModeStruct.speed_menu_option + scTrainingMenu_OptionSprite_SpeedStart;

    case scTrainingMenu_Main_View:
        return gTrainingModeStruct.view_menu_option + scTrainingMenu_OptionSprite_ViewStart;

    case scTrainingMenu_Main_Reset:
        return scTrainingMenu_OptionSprite_EnumMax;

    case scTrainingMenu_Main_Exit:
        return scTrainingMenu_OptionSprite_EnumMax;
    }
}

// 0x8018FA54
void func_ovl7_8018FA54(void) // Unused but referenced?
{
    SObj *sobj = SObjGetStruct(gTrainingModeStruct.unk_trainmenu_0x80);
    s32 sprite_id = scTrainingMode_GetMenuOptionSpriteID();

    if (sprite_id == scTrainingMenu_OptionSprite_EnumMax)
    {
        sobj->sprite.attr |= SP_HIDDEN;
    }
    else
    {
        sobj->sprite = *gTrainingModeStruct.unk_trainmenu_0x38[sprite_id].sprite;

        sobj->pos.x = gTrainingModeStruct.unk_trainmenu_0x38[sprite_id].pos.x;

        sobj->pos.y = (sprite_id == scTrainingMenu_OptionSprite_ItemMotionSensorBomb) ? 178.0F : 182.0F;

        sobj->sprite.attr &= ~SP_HIDDEN;
    }
}

// 0x8018FB40
void func_ovl7_8018FB40(void) // Unused?
{
    GObj *interface_gobj;

    gTrainingModeStruct.unk_trainmenu_0x80 = interface_gobj = omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xE, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);
    func_ovl7_8018F7C8(interface_gobj, gTrainingModeStruct.unk_trainmenu_0x38);
    func_ovl7_8018FA54();
}

// 0x8018FBB0
void scTrainingMode_UpdateCursorPosition(void)
{
    SObj *cursor_sobj = SObjGetStruct(gTrainingModeStruct.cursor_gobj);
    SObj *text_sobj = gTrainingModeStruct.vscroll_option_sobj[gTrainingModeStruct.main_menu_option][0];

    cursor_sobj->pos.y = (s32)(text_sobj->pos.y - 1.0F);
}

// 0x8018FC00
void scTrainingMode_MakeMenuCursorInterface(void)
{
    GObj *interface_gobj;

    gTrainingModeStruct.cursor_gobj = interface_gobj = omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xE, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

    gcAppendSObjWithSprite(interface_gobj, gTrainingModeStruct.menu_option_sprites[scTrainingMenu_OptionSprite_Cursor])->pos.x = 71.0F;

    scTrainingMode_UpdateCursorPosition();
}

// 0x8018FC7C
void scTrainingMode_CopyVScrollOptionSObjs(void)
{
    SObj *arrow_sobj = SObjGetStruct(gTrainingModeStruct.arrow_option_gobj)->next;

    gTrainingModeStruct.vscroll_option_sobj[0][0] = SObjGetStruct(gTrainingModeStruct.menu_label_gobj);
    gTrainingModeStruct.vscroll_option_sobj[0][1] = arrow_sobj;

    gTrainingModeStruct.vscroll_option_sobj[1][0] = gTrainingModeStruct.vscroll_option_sobj[0][0]->next;
    gTrainingModeStruct.vscroll_option_sobj[1][1] = arrow_sobj;

    gTrainingModeStruct.vscroll_option_sobj[2][0] = gTrainingModeStruct.vscroll_option_sobj[1][0]->next;
    gTrainingModeStruct.vscroll_option_sobj[2][1] = arrow_sobj;

    gTrainingModeStruct.vscroll_option_sobj[3][0] = gTrainingModeStruct.vscroll_option_sobj[2][0]->next;
    gTrainingModeStruct.vscroll_option_sobj[3][1] = arrow_sobj;

    gTrainingModeStruct.vscroll_option_sobj[4][0] = gTrainingModeStruct.vscroll_option_sobj[4][1] = gTrainingModeStruct.vscroll_option_sobj[3][0]->next;
    gTrainingModeStruct.vscroll_option_sobj[5][0] = gTrainingModeStruct.vscroll_option_sobj[5][1] = gTrainingModeStruct.vscroll_option_sobj[4][0]->next;
}

// 0x8018FCE0
void scTrainingMode_RenderCursorUnderline(GObj *interface_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);

    gDPSetFillColor(gDisplayListHead[0]++, rgba32_to_fill_color(GPACK_RGBA8888(0xFF, 0x00, 0x00, 0xFF), gDisplayListHead));

    gDPFillRectangle(gDisplayListHead[0]++, gTrainingModeStruct.cursor_ulx, gTrainingModeStruct.cursor_uly, gTrainingModeStruct.cursor_lrx, gTrainingModeStruct.cursor_lry);

    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8018FE40
void scTrainingMode_UpdateCursorUnderline(void)
{
    SObj *text_sobj = gTrainingModeStruct.vscroll_option_sobj[gTrainingModeStruct.main_menu_option][0];
    SObj *arrow_sobj = gTrainingModeStruct.vscroll_option_sobj[gTrainingModeStruct.main_menu_option][1];
    s32 offset;

    gTrainingModeStruct.cursor_ulx = text_sobj->pos.x - 13.0F;

    offset = ((gTrainingModeStruct.main_menu_option == scTrainingMenu_Main_Reset) || (gTrainingModeStruct.main_menu_option == scTrainingMenu_Main_Exit)) ? 2 : -2;

    gTrainingModeStruct.cursor_lrx = offset + (arrow_sobj->pos.x + arrow_sobj->sprite.width);

    gTrainingModeStruct.cursor_uly = text_sobj->pos.y + text_sobj->sprite.height + (-1.0F);
    gTrainingModeStruct.cursor_lry = gTrainingModeStruct.cursor_uly + 1;
}

// 0x80190070
void scTrainingMode_MakeCursorUnderlineInterface(void)
{
    omAddGObjRenderProc(omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xE, 0x80000000), scTrainingMode_RenderCursorUnderline, 0x16, 0x80000000, -1);
    scTrainingMode_UpdateCursorUnderline();
}

// 0x801900C4
void scTrainingMode_InitTrainingMenuAll(void)
{
    scTrainingMode_MakeMenuLabelsInterface();
    scTrainingMode_InitMenuOptionSpriteAttrs();
    scTrainingMode_MakeMainMenuInterface();
    scTrainingMode_InitCPOptionTextColors();
    scTrainingMode_MakeCPOptionInterface();
    scTrainingMode_InitItemOptionTextColors();
    scTrainingMode_MakeItemOptionInterface();
    scTrainingMode_InitSpeedOptionTextColors();
    scTrainingMode_MakeSpeedOptionInterface();
    func_ovl7_8018F41C();
    scTrainingMode_MakeViewOptionInterface();
    scTrainingMode_CopyHScrollOptionSObjs();
    scTrainingMode_MakeOptionArrowInterface();
    scTrainingMode_CopyVScrollOptionSObjs();
    scTrainingMode_MakeMenuCursorInterface();
    scTrainingMode_MakeCursorUnderlineInterface();
    scTrainingMode_SetPauseGObjRenderFlags(GOBJ_FLAG_NORENDER);
}

// 0x80190164
void scTrainingMode_SetPlayDefaultMusicID(void)
{
    gMusicIndexDefault = 0x2A;

    func_80020AB4(0, gMusicIndexDefault);

    gMusicIndexCurrent = gMusicIndexDefault;
}

// 0x801901A0
void scTrainingMode_SetGameStatusGo(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];

    while (fighter_gobj != NULL)
    {
        ftCommon_SetAllowPlayerControl(fighter_gobj);

        fighter_gobj = fighter_gobj->link_next;
    }
    gBattleState->game_status = gmMatch_GameStatus_Go;
}

// 0x801901F4
void scTrainingMode_UpdateOpponentBehavior(void)
{
    ftStruct *fp = ftGetStruct(gBattleState->player_block[gTrainingModeStruct.opponent].fighter_gobj);

    if (fp->status_info.pl_kind == Pl_Kind_Com)
    {
        fp->fighter_com.behavior_set = scTrainingMode_CPOpponent_BehaviorKind[gTrainingModeStruct.cp_menu_option];
        fp->fighter_com.behavior_write = 0xA;
    }
}

// 0x80190260
void scTrainingMode_InitTrainingMode(void)
{
    GObj *fighter_gobj;
    ftSpawnInfo player_spawn;
    s32 player;
    Unk800D4060 sp54;

    func_ovl7_8018DA98();
    func_ovl7_801906D0();
    scTrainingMode_LoadFiles();
    func_8000B9FC(9, 0x80000000, 0x64, 1, 0xFF);
    func_ovl2_80115890();
    func_ovl2_800EC130();
    mpCollision_InitMapCollisionData();
    cmManager_SetViewportCoordinates(10, 10, 310, 230);
    cmManager_MakeWallpaperCamera();
    grWallpaper_SetGroundWallpaper();
    func_ovl2_8010DB00();
    itManager_AllocUserData();
    grNodeInit_SetGroundFiles();
    ftManager_AllocFighterData(2, GMMATCH_PLAYERS_MAX);
    wpManager_AllocUserData();
    efManager_AllocUserData();
    ifScreenFlash_InitInterfaceVars(0xFF);
    gmRumble_SetPlayerRumble();
    ftPublicity_SetPlayerPublicReact();

    for (player = 0; player < ARRAY_COUNT(gBattleState->player_block); player++)
    {
        player_spawn = dFighterDefaultSpawn;

        if (gBattleState->player_block[player].player_kind == Pl_Kind_Not) continue;

        ftManager_SetFileDataKind(gBattleState->player_block[player].character_kind);

        player_spawn.ft_kind = gBattleState->player_block[player].character_kind;

        mpCollision_GetPlayerMPointPosition(player, &player_spawn.pos);

        player_spawn.lr_spawn = (player_spawn.pos.x >= 0.0F) ? LR_Left : LR_Right;

        player_spawn.team = gBattleState->player_block[player].team_index;

        player_spawn.player = player;

        player_spawn.model_lod = ((gBattleState->pl_count + gBattleState->cp_count) < 3) ? ftParts_LOD_HighPoly : ftParts_LOD_LowPoly;

        player_spawn.costume = gBattleState->player_block[player].costume_index;

        player_spawn.shade = gBattleState->player_block[player].shade_index;

        player_spawn.handicap = gBattleState->player_block[player].handicap;

        player_spawn.cp_level = gBattleState->player_block[player].level;

        player_spawn.stock_count = gBattleState->stock_setting;

        player_spawn.damage = 0;

        player_spawn.pl_kind = gBattleState->player_block[player].player_kind;

        player_spawn.controller = &gPlayerControllers[player];

        player_spawn.anim_heap = ftManager_AllocAnimHeapKind(gBattleState->player_block[player].character_kind);

        player_spawn.is_skip_entry = TRUE;

        fighter_gobj = ftManager_MakeFighter(&player_spawn);

        ftCommon_ClearPlayerMatchStats(player, fighter_gobj);
    }
    scTrainingMode_UpdateOpponentBehavior();
    ftManager_SetFileDataPlayables();
    scTrainingMode_SetGameStatusGo();
    func_ovl2_8010E2D4();
    ifPlayer_MagnifyArrows_SetInterface();
    func_ovl2_8010E1A4();
    scTrainingMode_InitMiscVars();
    func_ovl2_8010DDC4();
    func_ovl2_8010E374();
    func_ovl2_8010E498();
    ifPlayer_Tag_SetInterface();
    func_ovl2_8010F3A0();
    func_ovl2_8010F3C0();
    ifPlayer_Damage_InitInterface();
    ifPlayer_Stocks_SetInterface();
    scTrainingMode_InitStatDisplayAll();
    scTrainingMode_InitTrainingMenuAll();
    scTrainingMode_SetPlayDefaultMusicID();
    func_800266A0();
    func_800269C0(0x272);

    sp54 = D_ovl7_8019086C;

    func_ovl0_800D4060(0x3FD, 0xD, 0xA, &sp54, 0xC, 1, 0);
}

// 0x801905A8
void scTrainingMode_SetGeometryRenderLights(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);

    ftRender_Lights_DisplayLightReflect(display_list, gMapLightAngleX, gMapLightAngleY);
}

// 0x801905F4
void scManager_TrainingMode_InitScene(void)
{
    D_ovl7_80190870.unk_scdatabounds_0xC = (uintptr_t)&D_NF_800A5240 - 6400;

    func_80007024(&D_ovl7_80190870);

    D_ovl7_8019088C.arena_size = ((uintptr_t)&lOverlay7ArenaHi - (uintptr_t)&lOverlay7ArenaLo);
    D_ovl7_8019088C.proc_start = scTrainingMode_InitTrainingMode;

    do
    {
        func_800A2698(&D_ovl7_8019088C);
        func_ovl2_801157EC();

    } 
    while (gTrainingModeStruct.exit_or_reset != 0);

    func_80020A74();

    while (func_80020D58(0) != FALSE)
    {
        continue;
    }
    func_80020B38(0, 0x7800);

    gSceneData.scene_previous = gSceneData.scene_current;
    gSceneData.scene_current = 0x12;
}

