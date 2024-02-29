#include <ft/fighter.h>
#include <gr/ground.h>
#include <gm/battle.h>

// EXTERN
extern intptr_t D_NF_0000000C;
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay64ArenaLo;  // 0x8018E860
extern intptr_t lOverlay64ArenaHi;  // 0x80392A00

// DATA

// 0x8018E168
u8 dAutoDemoGroundOrder[/* */] = 
{
    Gr_Kind_Pupupu,
    Gr_Kind_Zebes,
    Gr_Kind_Castle,
    Gr_Kind_Jungle,
    Gr_Kind_Sector,
    Gr_Kind_Yoster,
    Gr_Kind_Yamabuki,
    Gr_Kind_Hyrule
};

// 0x8018E170
s16 dAutoDemoMPointKindList[/* */] = 
{
    mpMPoint_Kind_AutoDemoSpawn1,
    mpMPoint_Kind_AutoDemoSpawn2,
    mpMPoint_Kind_AutoDemoSpawn3,
    mpMPoint_Kind_AutoDemoSpawn4,
    mpMPoint_Kind_AutoDemoSpawn5,
    mpMPoint_Kind_AutoDemoSpawn6,
    mpMPoint_Kind_AutoDemoSpawn7,
    mpMPoint_Kind_AutoDemoSpawn8
};

// 0x8018E180
scAutoDemoProc dAutoDemoProcList[/* */] =
{
    // Nothing?
    {
        0,                              // Wait frames until focus changes 
        NULL,                           // Function to run on focus change
        NULL                            // Function to run when focusing
    },

    // Pre-focus
    {
        340,                            // Wait frames until focus changes 
        func_ovl64_8018D19C,            // Function to run on focus change
        NULL                            // Function to run when focusing
    },

    // Player 1 Focus
    {
        340,                            // Wait frames until focus changes 
        scAutoDemoSetFocusPlayer1,      // Function to run on focus change
        NULL                            // Function to run when focusing
    },

    // Player 2 focus
    {
        340,                            // Wait frames until focus changes 
        scAutoDemoSetFocusPlayer2,      // Function to run on focus change
        scAutoDemoProcFocusPlayer1      // Function to run when focusing
    },

    // End focus
    {
        400,                            // Wait frames until focus changes 
        scAutoDemoResetFocusPlayerAll,  // Function to run on focus change
        scAutoDemoProcFocusPlayer2      // Function to run when focusing
    },

    // End demo
    {
        60,                             // Wait frames until focus changes 
        scAutoDemoExit,                 // Function to run on focus change
        NULL                            // Function to run when focusing
    }
};

// 0x8018E1D4
f32 D_ovl64_8018E1D4[/* */] = { -40.0F, -28.0F, -14.0F, 14.0F, 28.0F, 40.0F };

// 0x8018E1EC
f32 D_ovl64_8018E1EC[/* */] = { 2.0F, 0.0F, -6.0F, -9.0F, -30.0F };

// 0x8018E200
intptr_t dAutoDemoFighterNameSpriteOffsets[/* */] =
{
    0x00000138,             // Mario
    0x00000258,             // Fox
    0x00000378,             // Donkey Kong
    0x000004F8,             // Samus
    0x00000618,             // Luigi
    0x00000738,             // Link
    0x00000858,             // Yoshi
    0x00000A38,             // Captain Falcon
    0x00000BB8,             // Kirby
    0x00000D38,             // Pikachu
    0x00000F78,             // Jigglypuff
    0x00001098              // Ness
};

// 0x8018E230
Unk800D4060 D_ovl64_8018E230;

// 0x8018E234
scUnkDataBounds D_ovl64_8018E234;

// 0x8018E250
scRuntimeInfo D_ovl64_8018E250;

// GLOBALS

// 0x8018E2F0
gmMatchInfo gAutoDemoBattleState;

// 0x8018E4E0
s32 gAutoDemoFocusChangeWait;

// 0x8018E4E4
u16 gAutoDemoCharacterFlag;

// 0x8018E4E8
GObj *gAutoDemoFighterNameGObj;

// 0x8018E4EC
scAutoDemoProc *gAutoDemoProc;

// 0x8018E4F0
s16 gAutoDemoMPoints[8];

// FUNCTIONS

// 0x8018D0C0
void func_ovl64_8018D0C0(void)
{
    func_8000A5E4();
}

// 0x8018D0E0
void scAutoDemoBeginMatch(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Fighter];

    while (fighter_gobj != NULL)
    {
        ftCommon_SetAllowPlayerControl(fighter_gobj);

        fighter_gobj = fighter_gobj->group_gobj_next;
    }
    gBattleState->game_status = gmMatch_GameStatus_Go;
}

// 0x8018D134
void scAutoDemoDetectExit(void)
{
    s32 player;

    for (player = 0; player < ARRAY_COUNT(gPlayerControllers); player++)
    {
        u16 button_new = gPlayerControllers[player].button_new;

        if (button_new & (A_BUTTON | B_BUTTON | START_BUTTON))
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = scMajor_Kind_Title;

            func_80005C74();
            break;
        }
    }
}

// 0x8018D19C
void func_ovl64_8018D19C(void)
{
    Unk800D4060 sp2C = D_ovl64_8018E230;

    func_ovl0_800D4060(0x3FD, 0xD, 0xA, &sp2C, 0x1E, 1, 0);
}

// 0x8018D1EC
sb32 scAutoDemoCheckStopFocusPlayer(ftStruct *fp)
{
    switch (fp->status_info.status_id)
    {
    case ftStatus_Common_DeadDown:
    case ftStatus_Common_DeadLeftRight:
    case ftStatus_Common_DeadUpStar:
        return TRUE;

    default:
        return FALSE;
    }
}

// 0x8018D220
void func_ovl64_8018D220(GObj *fighter_gobj)
{
    func_ovl2_8010CF44
    (
        fighter_gobj,
        F_DEG_TO_RAD(D_ovl64_8018E1D4[lbRandom_GetIntRange(ARRAY_COUNT(D_ovl64_8018E1D4))]),
        F_DEG_TO_RAD(D_ovl64_8018E1EC[lbRandom_GetIntRange(ARRAY_COUNT(D_ovl64_8018E1EC))]),
        ftGetStruct(fighter_gobj)->attributes->closeup_cam_zoom,
        0.3F,
        28.0F
    );
}

// 0x8018D2CC
void scAutoDemoSetFocusPlayer1(void)
{
    GObj *fighter_gobj = gBattleState->player_block[0].fighter_gobj;
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (scAutoDemoCheckStopFocusPlayer(fp) != FALSE)
    {
        gAutoDemoFocusChangeWait = 0;
    }
    else
    {
        ftGetStruct(gBattleState->player_block[1].fighter_gobj)->cp_level =
        ftGetStruct(gBattleState->player_block[2].fighter_gobj)->cp_level =
        ftGetStruct(gBattleState->player_block[3].fighter_gobj)->cp_level = 1;

        func_ovl64_8018D220(fighter_gobj);
        ftCommon_SetModelPartLevelDetailAll(fighter_gobj, ftParts_LOD_HighPoly);

        fp->lod_match = ftParts_LOD_HighPoly;

        SObjGetStruct(gAutoDemoFighterNameGObj)->sprite.attr &= ~SP_HIDDEN;

        gPlayerCommonInterface.is_ifmagnify_display = FALSE;
    }
}

// 0x8018D39C
void scAutoDemoProcFocusPlayer1(void)
{
    if (scAutoDemoCheckStopFocusPlayer(ftGetStruct(gBattleState->player_block[0].fighter_gobj)) != FALSE)
    {
        gAutoDemoFocusChangeWait = 0;
    }
}

// 0x8018D3D4
void scAutoDemoSetFocusPlayer2(void)
{
    GObj *p2_gobj = gBattleState->player_block[1].fighter_gobj;
    GObj *p1_gobj = gBattleState->player_block[0].fighter_gobj;
    ftStruct *p2_fp = ftGetStruct(p2_gobj);

    SObjGetStruct(gAutoDemoFighterNameGObj)->sprite.attr |= SP_HIDDEN;

    ftCommon_SetModelPartLevelDetailAll(p1_gobj, ftParts_LOD_LowPoly);
    ftGetStruct(p1_gobj)->lod_match = ftParts_LOD_LowPoly;

    if (scAutoDemoCheckStopFocusPlayer(p2_fp) != FALSE)
    {
        gAutoDemoFocusChangeWait = 0;
    }
    else
    {
        ftGetStruct(gBattleState->player_block[1].fighter_gobj)->cp_level = 9;

        ftGetStruct(gBattleState->player_block[0].fighter_gobj)->cp_level =
        ftGetStruct(gBattleState->player_block[2].fighter_gobj)->cp_level =
        ftGetStruct(gBattleState->player_block[3].fighter_gobj)->cp_level = 1;

        func_ovl64_8018D220(p2_gobj);
        ftCommon_SetModelPartLevelDetailAll(p2_gobj, ftParts_LOD_HighPoly);

        p2_fp->lod_match = ftParts_LOD_HighPoly;

        SObjGetStruct(gAutoDemoFighterNameGObj)->next->sprite.attr &= ~SP_HIDDEN;
    }
}

// 0x8018D4F0
void scAutoDemoProcFocusPlayer2(void)
{
    if (scAutoDemoCheckStopFocusPlayer(ftGetStruct(gBattleState->player_block[1].fighter_gobj)) != FALSE)
    {
        gAutoDemoFocusChangeWait = 0;
    }
}

// 0x8018D528
void scAutoDemoResetFocusPlayerAll(void)
{
    GObj *p2_gobj = gBattleState->player_block[1].fighter_gobj;

    func_ovl2_8010CF20();

    ftGetStruct(gBattleState->player_block[0].fighter_gobj)->cp_level =
    ftGetStruct(p2_gobj)->cp_level =
    ftGetStruct(gBattleState->player_block[2].fighter_gobj)->cp_level =
    ftGetStruct(gBattleState->player_block[3].fighter_gobj)->cp_level = 9;

    ftCommon_SetModelPartLevelDetailAll(p2_gobj, ftParts_LOD_LowPoly);

    ftGetStruct(p2_gobj)->lod_match = ftParts_LOD_LowPoly;

    SObjGetStruct(gAutoDemoFighterNameGObj)->next->sprite.attr |= SP_HIDDEN;
}

// 0x8018D5E0
void scAutoDemoSetMagnifyDisplayOn(void)
{
    gPlayerCommonInterface.is_ifmagnify_display = TRUE;
}

// 0x8018D5F0
void scAutoDemoExit(void)
{
    gSceneData.scene_previous = gSceneData.scene_current;
    gSceneData.scene_current = scMajor_Kind_N64;

    func_80005C74();
}

// 0x8018D624
void scAutoDemoChangeFocus(void)
{
    gAutoDemoFocusChangeWait = gAutoDemoProc->focus_end_wait;

    if (gAutoDemoProc->proc_change != NULL)
    {
        gAutoDemoProc->proc_change();
    }
    gAutoDemoProc++;
}

// 0x8018D674
void scAutoDemoUpdateFocus(void)
{
    if (gAutoDemoProc->proc_focus != NULL)
    {
        gAutoDemoProc->proc_focus();
    }
    while (gAutoDemoFocusChangeWait == 0)
    {
        scAutoDemoChangeFocus();
    }
    gAutoDemoFocusChangeWait--;
}

// 0x8018D6DC
void scAutoDemoProcUpdateMain(GObj *gobj)
{
    scAutoDemoDetectExit();
    scAutoDemoUpdateFocus();
}

// 0x8018D704
GObj* scAutoDemoMakeFocusInterface(void)
{
    GObj *interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, scAutoDemoProcUpdateMain, 0xA, 0x80000000);

    gAutoDemoProc = dAutoDemoProcList;
    gAutoDemoFocusChangeWait = 0;

    scAutoDemoUpdateFocus();

    return interface_gobj;
}

// 0x8018D758
void scAutoDemoGetPlayerSpawnPosition(s32 mpoint_kind, Vec3f *mpoint_pos)
{
    s32 i, j;
    s32 mpoint_random;
    s32 mpoint_select;
    s32 mpoint;

    mpoint_random = lbRandom_GetIntRange(((ARRAY_COUNT(dAutoDemoMPointKindList) + ARRAY_COUNT(gAutoDemoMPoints)) / 2) - mpoint_kind);

    for (i = j = 0; i < (ARRAY_COUNT(dAutoDemoMPointKindList) + ARRAY_COUNT(gAutoDemoMPoints)) / 2; i++)
    {
        mpoint_select = dAutoDemoMPointKindList[i];

        if (gAutoDemoMPoints[i] != -1)
        {
            if (mpoint_random == j)
            {
                gAutoDemoMPoints[i] = -1;

                break;
            }
            else j++;
        }
    }
    if (mpCollision_GetMPointCountKind(mpoint_select) != 0)
    {
        mpCollision_GetMPointIDsKind(mpoint_select, &mpoint);
        mpCollision_GetMPointPositionID(mpoint, mpoint_pos);
    }
}

// 0x8018D7FC
s32 func_ovl64_8018D7FC(u16 flag)
{
    s32 i, j;

    for (i = 0, j = 0; i < (sizeof(u16) * 8); i++, flag = flag >> 1)
    {
        if (flag & 1)
        {
            j++;
        }
    }
    return j;
}

// 0x8018D874
s32 func_ovl64_8018D874(u16 arg0, u16 arg1, s32 arg2)
{
    s32 var_v1 = -1;

    arg2++;

    do
    {
        var_v1++;

        if ((arg0 & (1 << var_v1)) && !(arg1 & (1 << var_v1)))
        {
            arg2--;
        }
    } while (arg2 != 0);

    return var_v1;
}

// 0x8018D8C0
s32 scAutoDemoGetFighterKind(s32 player)
{
    u16 character_flag;
    s32 unused;
    s32 character_count2;
    s32 character_count1;
    s32 shuf;

    if (player < ARRAY_COUNT(gSceneData.demo_ft_kind))
    {
        return gSceneData.demo_ft_kind[player];
    }
    character_flag = (gSaveData.character_mask | GMSAVEINFO_CHARACTER_MASK_STARTER);

    character_count1 = func_ovl64_8018D7FC(character_flag), character_count2 = func_ovl64_8018D7FC(gAutoDemoCharacterFlag);

    shuf = func_ovl64_8018D874(character_flag, gAutoDemoCharacterFlag, lbRandom_GetIntRange(character_count1 - character_count2));

    gAutoDemoCharacterFlag |= 1 << shuf;

    return shuf;
}

// 0x8018D954
s32 scAutoDemoGetPlayerDamage(s32 player)
{
    if (player < ARRAY_COUNT(gSceneData.demo_ft_kind))
    {
        return lbRandom_GetIntRange(30);
    }
    else return lbRandom_GetIntRange(60) + 40;
}

// 0x8018D990
void func_ovl64_8018D990(void)
{
    s32 i;

    gAutoDemoBattleState = gDefaultBattleState;
    gBattleState = &gAutoDemoBattleState;

    gBattleState->game_type = gmMatch_GameType_Demo;
    gBattleState->gr_kind = dAutoDemoGroundOrder[gSceneData.demo_ground_order];

    gSceneData.demo_ground_order++;

    if (gSceneData.demo_ground_order >= ARRAY_COUNT(dAutoDemoGroundOrder))
    {
        gSceneData.demo_ground_order = 0;
    }
    gAutoDemoCharacterFlag = (1 << gSceneData.demo_ft_kind[0]) | (1 << gSceneData.demo_ft_kind[1]);

    for (i = 0; i < ARRAY_COUNT(gBattleState->player_block); i++)
    {
        gBattleState->player_block[i].player_kind = Pl_Kind_Com;
        gBattleState->player_block[i].character_kind = scAutoDemoGetFighterKind(i);
        gBattleState->player_block[i].level = 9;

        gBattleState->player_block[i].stock_damage_all = scAutoDemoGetPlayerDamage(i);
    }
    gBattleState->pl_count = 0;
    gBattleState->cp_count = 4;

    for (i = 0; i < ARRAY_COUNT(gAutoDemoMPoints); i++)
    {
        gAutoDemoMPoints[i] = 0;
    }
}

// 0x8018DB18
void func_ovl64_8018DB18(void)
{
    GObj *interface_gobj;
    s32 player;
    void *file;

    file = rldm_get_file_with_external_heap((uintptr_t)&D_NF_0000000C, hal_alloc(rldm_bytes_needed_to_load((uintptr_t)&D_NF_0000000C), 0x10));
    gAutoDemoFighterNameGObj = interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

    for (player = 0; player < ARRAY_COUNT(gSceneData.demo_ft_kind); player++)
    {
        SObj *sobj = gcAppendSObjWithSprite(interface_gobj, (Sprite*) (dAutoDemoFighterNameSpriteOffsets[gBattleState->player_block[player].character_kind] + (uintptr_t)file));

        sobj->sprite.red   = 0xFF;
        sobj->sprite.green = 0xFF;
        sobj->sprite.blue  = 0xFF;

        sobj->sprite.attr = SP_TEXSHUF | SP_HIDDEN | SP_TRANSPARENT;

        sobj->pos.x = (s32)(160.0F - (sobj->sprite.width * 0.5F));
        sobj->pos.y = (s32)(50.0F - (sobj->sprite.height * 0.5F));
    }
}

// 0x8018DCC4
void func_ovl64_8018DCC4(void)
{
    GObj *fighter_gobj;
    ftSpawnInfo player_spawn;
    s32 player;

    func_ovl64_8018D990();
    func_ovl64_8018E0C0();
    func_8000B9FC(9, 0x80000000U, 0x64, 1, 0xFF);
    func_ovl2_80115890();
    func_ovl2_800EC130();
    mpCollision_InitMapCollisionData();
    cmManager_SetViewportCoordinates(10, 10, 310, 230);
    cmManager_MakeWallpaperCamera();
    grWallpaper_SetGroundWallpaper();
    func_ovl2_8010DB00();
    itManager_AllocUserData();
    grNodeInit_SetGroundFiles();
    ftManager_AllocFighterData(2, 4);
    wpManager_AllocUserData();
    efManager_AllocUserData();
    ifScreenFlash_InitInterfaceVars(0xFF);
    gmRumble_SetPlayerRumble();
    ftPublicity_SetPlayerPublicReact();

    for (player = 0; player < ARRAY_COUNT(gBattleState->player_block); player++)
    {
        player_spawn = ftGlobal_SpawnInfo_MainData;

        ftManager_SetFileDataKind(gBattleState->player_block[player].character_kind);

        player_spawn.ft_kind = gBattleState->player_block[player].character_kind;

        scAutoDemoGetPlayerSpawnPosition(player, &player_spawn.pos);

        player_spawn.lr_spawn = (player_spawn.pos.x >= 0.0F) ? LR_Left : LR_Right;

        player_spawn.team = gBattleState->player_block[player].team_index;

        player_spawn.player = player;

        player_spawn.model_lod = ((gBattleState->pl_count + gBattleState->cp_count) < 3) ? ftParts_LOD_HighPoly : ftParts_LOD_LowPoly;

        player_spawn.costume = gBattleState->player_block[player].costume_index;

        player_spawn.shade = gBattleState->player_block[player].shade_index;

        player_spawn.handicap = gBattleState->player_block[player].handicap;

        player_spawn.cp_level = gBattleState->player_block[player].level;

        player_spawn.stock_count = gBattleState->stock_setting;

        player_spawn.damage = gBattleState->player_block[player].stock_damage_all;

        player_spawn.pl_kind = gBattleState->player_block[player].player_kind;

        player_spawn.p_controller = &gPlayerControllers[player];

        player_spawn.anim_heap = ftManager_AllocAnimHeapKind(gBattleState->player_block[player].character_kind);

        player_spawn.is_skip_entry = TRUE;

        fighter_gobj = ftManager_MakeFighter(&player_spawn);

        gBattleState->player_block[player].player_color_index = player;
        gBattleState->player_block[player].tag_index = player;

        ftCommon_ClearPlayerMatchStats(player, fighter_gobj);
    }
    ftManager_SetFileDataPlayables();
    scAutoDemoBeginMatch();
    func_ovl2_8010E2D4();
    ifPlayer_MagnifyArrows_SetInterface();
    func_ovl2_8010E1A4();
    ifPlayer_MagnifyGlass_SetInterface();

    gPlayerCommonInterface.is_ifmagnify_display = TRUE;

    func_ovl2_8010DDC4();
    func_ovl2_8010E374();
    func_ovl2_8010E498();
    ifPlayer_Tag_SetInterface();
    func_ovl2_8010F3A0();
    func_ovl2_8010F3C0();
    ifPlayer_Damage_InitInterface();
    ifPlayer_Stocks_SetInterface();
    func_ovl64_8018DB18();
    mpCollision_SetPlayMusicID();
    func_800269C0(0x272);
    scAutoDemoMakeFocusInterface();
}

// 0x8018DFC8
void func_ovl64_8018DFC8(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);

    ftRender_Lights_DisplayLightReflect(display_list, gMapLightAngleX, gMapLightAngleY);
}

// 0x8018E014
void scAutoDemoStartScene(void)
{
    D_ovl64_8018E234.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);

    func_80007024(&D_ovl64_8018E234);

    D_ovl64_8018E250.arena_size = (u32)((uintptr_t)&lOverlay64ArenaHi - (uintptr_t)&lOverlay64ArenaLo);
    D_ovl64_8018E250.proc_start = &func_ovl64_8018DCC4;

    func_800A2698(&D_ovl64_8018E250);
    func_80020A74();

    while (func_80020D58(0) != FALSE)
    {
        continue;
    }

    func_80020B38(0, 0x7800);
    func_800266A0();
    func_ovl2_801157EC();
}