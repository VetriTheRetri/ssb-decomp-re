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

extern intptr_t D_NF_00000000;
extern intptr_t D_NF_00000020;
extern intptr_t D_NF_000000BC;
extern intptr_t D_NF_000000FE;
extern intptr_t D_NF_0000010C;
extern intptr_t D_NF_0000013C;
extern intptr_t D_NF_000001B8;

// 0x80190968
gmMatchInfo gTrainingModeBattleState;

// 0x80190B58
scTrainingStruct gTrainingModeStruct;

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

            gTrainingModeStruct.is_read_menu_inputs = FALSE;
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
    func_ovl7_8018F630();
    func_ovl7_8018FE40();
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
        func_ovl7_801901F4();
        scTrainingMode_InitCPDisplaySprite();
        scTrainingMode_InitCPOptionSprite();
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
        if ((gPlayerControllers[gSceneData.player_port].button_new & A_BUTTON) && (gTrainingModeStruct.item_menu_option != scTrainingMenu_Item_None))
        {
            if (scTrainingMode_GetSpawnableItemCount() < SCTRAINING_ITEMSPAWN_MAX)
            {
                vel.x = vel.z = 0.0F;
                vel.y = SCTRAINING_ITEMSPAWN_VEL_Y;

                pos = DObjGetStruct(gBattleState->player_block[gSceneData.player_port].fighter_gobj)->translate.vec.f;

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

// 0x8018D830
sb32 scTrainingMode_UpdateExitOption(void)
{
    if (gPlayerControllers[gSceneData.player_port].button_new & A_BUTTON)
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
        func_ovl7_8018FBB0();
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
        if (player == gSceneData.player_port)
        {
            gBattleState->player_block[player].player_kind = Pl_Kind_Human;
            gBattleState->player_block[player].character_kind = gSceneData.unk3B;
            gBattleState->player_block[player].costume_index = gSceneData.unk3C;
            gBattleState->player_block[player].team_index = 0;
            gBattleState->player_block[player].player_color_index = player;
        }
        else gBattleState->player_block[player].player_kind = Pl_Kind_None;
    }

    opponent = (gSceneData.player_port == 0) ? 1 : 0;

    gBattleState->player_block[opponent].player_kind = Pl_Kind_CPU;
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
    void *addr = rldm_get_file_with_external_heap((u32)&D_NF_000000FE, hal_alloc(rldm_bytes_needed_to_load((u32)&D_NF_000000FE), 0x10));

    gTrainingModeStruct.stat_display_text = (void*) ((uintptr_t)addr + (intptr_t)&D_NF_00000000);
    gTrainingModeStruct.stat_display_sprites = (void*) ((uintptr_t)addr + (intptr_t)&D_NF_00000020);
    gTrainingModeStruct.menu_label_text = (void*) ((uintptr_t)addr + (intptr_t)&D_NF_000000BC);
    gTrainingModeStruct.menu_option_sprites = (void*) ((uintptr_t)addr + (intptr_t)&D_NF_0000013C);
    gTrainingModeStruct.unk_trainmenu_0x34 = (void*) ((uintptr_t)addr + (intptr_t)&D_NF_0000010C);
    gTrainingModeStruct.unk_trainmenu_0x38 = (void*) ((uintptr_t)addr + (intptr_t)&D_NF_000001B8);
}

// 0x8018DDB0
void scTrainingMode_LoadBackgroundImage(void)
{
    gGroundInfo->unk_0x48 = (void*)
    (
        rldm_get_file_external_force
        (
            scTrainingMode_Files_BackgroundImageInfo[scTrainingMode_Files_BackgroundImageIDs[gBattleState->gr_kind]].file_id,
            (void*) ((uintptr_t)gGroundInfo->unk_0x48 - (intptr_t)D_ovl7_801907B8[gBattleState->gr_kind])
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
    SObj *sobj = func_ovl0_800CCFDC(interface_gobj, tms->sprite);

    sobj->pos.x = tms->pos.x;
    sobj->pos.y = tms->pos.y;

    return sobj;
}

// 0x8018DF30
void scTrainingMode_InitStatDisplayTextInterface(void)
{
    s32 i;
    GObj *interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

    for (i = 0; i < SCTRAINING_STATDISPLAY_TEXT_COUNT; i++)
    {
        SObj *sobj = scTrainingMode_MakeStatDisplaySObj(interface_gobj, &gTrainingModeStruct.stat_display_text[i]);

        sobj->sprite.red   = 0xAF;
        sobj->sprite.green = 0xAE;
        sobj->sprite.blue  = 0xDD;

        sobj->sobj_color.r = 0x00;
        sobj->sobj_color.g = 0x00;
        sobj->sobj_color.b = 0x00;

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

        sobj->sprite = *gTrainingModeStruct.stat_display_sprites[modulo];

        sobj->pos.x = (s32)(scTrainingMode_DamageDisplay_DigitPositionsX[i] - (sobj->sprite.width * 0.5F));

        sobj = sobj->unk_sobj_0x8;
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
    func_ovl0_800CCF00(interface_gobj, damage);
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
        Sprite *sprite = gTrainingModeStruct.stat_display_sprites[i];

        sprite->red   = 0x6C;
        sprite->green = 0xFF;
        sprite->blue  = 0x6C;

        sprite->attr = SP_TEXSHUF | SP_TRANSPARENT;
    }
}

// 0x8018E300
void scTrainingMode_InitSObjColors(SObj *sobj)
{
    sobj->sobj_color.r = 0x00;
    sobj->sobj_color.g = 0x00;
    sobj->sobj_color.b = 0x00;
}

// 0x8018E310
void scTrainingMode_MakeDamageDisplayInterface(void)
{
    GObj *interface_gobj;
    SObj *sobj;
    s32 i;

    gTrainingModeStruct.damage_display_gobj = interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000);

    omAddGObjRenderProc(interface_gobj, scTrainingMode_UpdateDamageInfo, 0x17, 0x80000000, -1);
    omAddGObjCommonProc(interface_gobj, scTrainingMode_UpdateDamageResetWait, 1, 4);

    for (i = 0; i < SCTRAINING_DAMAGEDISPLAY_DIGIT_COUNT; i++)
    {
        sobj = func_ovl0_800CCFDC(interface_gobj, gTrainingModeStruct.stat_display_sprites[0]);
        scTrainingMode_InitSObjColors(sobj);

        sobj->pos.y = 20.0F;
    }
    scTrainingMode_UpdateDamageDisplay(interface_gobj, 0);

    sobj = func_ovl0_800CCFDC(interface_gobj, gTrainingModeStruct.stat_display_sprites[SCTRAINING_STATDISPLAY_CHARACTER_COUNT - 1]);

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

        sobj->sprite = *gTrainingModeStruct.stat_display_sprites[modulo];

        sobj->pos.x = (s32)(scTrainingMode_ComboDisplay_DigitPositionsX[i] - (sobj->sprite.width * 0.5F));

        sobj = sobj->unk_sobj_0x8;
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
    func_ovl0_800CCF00(interface_gobj, combo);
}

// 0x8018E62C
void scTrainingMode_MakeComboDisplayInterface(void)
{
    GObj *interface_gobj;
    s32 i;

    gTrainingModeStruct.combo_display_gobj = interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xBU, 0x80000000);

    omAddGObjRenderProc(interface_gobj, scTrainingMode_UpdateComboInfo, 0x17, 0x80000000, -1);
    omAddGObjCommonProc(interface_gobj, scTrainingMode_UpdateComboResetWait, 1, 4);

    for (i = 0; i < SCTRAINING_COMBODISPLAY_DIGIT_COUNT; i++)
    {
        SObj *sobj = func_ovl0_800CCFDC(interface_gobj, *gTrainingModeStruct.stat_display_sprites);

        scTrainingMode_InitSObjColors(sobj);

        sobj->pos.y = 36.0F;
    }
    scTrainingMode_UpdateComboDisplay(interface_gobj, 0);
}

// 0x8018E714
void scTrainingMode_InitSpeedDisplaySprite(void)
{
    SObj *sobj = SObjGetStruct(gTrainingModeStruct.speed_display_gobj);

    sobj->sprite = *gTrainingModeStruct.stat_display_sprites[gTrainingModeStruct.speed_menu_option + 27];
}

// 0x8018E774
void scTrainingMode_MakeSpeedDisplayInterface(void)
{
    GObj *interface_gobj;
    SObj *sobj;

    gTrainingModeStruct.speed_display_gobj = interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

    sobj = func_ovl0_800CCFDC(interface_gobj, gTrainingModeStruct.stat_display_sprites[gTrainingModeStruct.speed_menu_option + 27]);

    sobj->pos.x = 276.0F;
    sobj->pos.y = 20.0F;

    scTrainingMode_InitSObjColors(sobj);
}

// 0x8018E810
void scTrainingMode_InitCPDisplaySprite(void)
{
    SObj *sobj = SObjGetStruct(gTrainingModeStruct.cp_display_gobj);

    sobj->sprite = *gTrainingModeStruct.stat_display_sprites[gTrainingModeStruct.cp_menu_option + 31];
}

// 0x8018E870
void scTrainingMode_MakeCPDisplayInterface(void)
{
    GObj *interface_gobj;
    SObj *sobj;

    gTrainingModeStruct.cp_display_gobj = interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000U, -1);

    sobj = func_ovl0_800CCFDC(interface_gobj, gTrainingModeStruct.stat_display_sprites[gTrainingModeStruct.cp_menu_option + 31]);

    sobj->pos.x = 191.0F;
    sobj->pos.y = 20.0F;

    scTrainingMode_InitSObjColors(sobj);
}

// 0x8018E90C
void scTrainingMode_InitItemDisplaySprite(void)
{
    SObj *root_sobj, *next_sobj;

    root_sobj = SObjGetStruct(gTrainingModeStruct.item_display_gobj)->unk_sobj_0x8;
    next_sobj = root_sobj->unk_sobj_0x8;

    root_sobj->sprite = *gTrainingModeStruct.stat_display_sprites[gTrainingModeStruct.item_hold + 10];

    root_sobj->pos.x = (f32)(292 - root_sobj->sprite.width);
    next_sobj->pos.x = (f32)(292 - root_sobj->sprite.width) - next_sobj->sprite.width;
}

// 0x8018E9AC
void scTrainingMode_UpdateItemDisplay(GObj *interface_gobj)
{
    ftStruct *fp = ftGetStruct(gBattleState->player_block[gSceneData.player_port].fighter_gobj);
    GObj *item_gobj = fp->item_hold;
    s32 item_id;

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        if (ip->it_kind <= It_Kind_ContainerEnd)
        {
            while (TRUE)
            {
                fatal_printf("Error : wrong item! %d\n", ip->it_kind);
                scnmgr_crash_print_gobj_state();
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

    gTrainingModeStruct.item_display_gobj = interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000);

    omAddGObjRenderProc(interface_gobj, scTrainingMode_UpdateItemDisplay, 0x17, 0x80000000, -1);

    sobj = func_ovl0_800CCFDC(interface_gobj, gTrainingModeStruct.stat_display_sprites[37]);

    sobj->pos.x = 292.0F;
    sobj->pos.y = 36.0F;
    scTrainingMode_InitSObjColors(sobj);

    sobj = func_ovl0_800CCFDC(interface_gobj, gTrainingModeStruct.stat_display_sprites[0]);
    sobj->pos.y = 36.0F;
    scTrainingMode_InitSObjColors(sobj);

    sobj = func_ovl0_800CCFDC(interface_gobj, gTrainingModeStruct.stat_display_sprites[36]);
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

    gTrainingModeStruct.menu_label_gobj = interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xE, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

    for (i = 0; i < SCTRAINING_MENULABELS_SPRITE_COUNT; i++)
    {
        SObj *sobj = scTrainingMode_MakeStatDisplaySObj(interface_gobj, &gTrainingModeStruct.menu_label_text[i]);

        if (i < SCTRAINING_MENULABELS_TEXT_COUNT)
        {
            sobj->sprite.red   = 0xF3;
            sobj->sprite.green = 0xA7;
            sobj->sprite.blue  = 0x6A;

            sobj->sobj_color.r = 0x00;
            sobj->sobj_color.g = 0x00;
            sobj->sobj_color.b = 0x00;
        }
        sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;
    }
}

// 0x8018ECA4
void scTrainingMode_InitMenuOptionSpriteAttrs(void)
{
    s32 i;

    for (i = 0; i < 31; i++)
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
    omAddGObjRenderProc(omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xE, 0x80000000), scTrainingMode_RenderMainMenu, 0x16, 0x80000000, -1);
}

// 0x8018EE5C
void scTrainingMode_InitCPOptionTextColors(void)
{
    s32 i;

    for (i = 21; i < 26; i++)
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

    sobj->sprite = *gTrainingModeStruct.menu_option_sprites[gTrainingModeStruct.cp_menu_option + 21];

    sobj->pos.x = 191 - (sobj->sprite.width / 2);
}
