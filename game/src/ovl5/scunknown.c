#include <ft/fighter.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>

// OVERLAY 5

extern void *gCommonFiles[];
extern intptr_t D_NF_00000854;
extern intptr_t D_NF_001AC870;
extern u32 dCommonFileIDs[8];
extern intptr_t D_NF_80000023;

// DATA

// 0x8018D580
ftExplainCommand D_ovl5_8018D580[/* */] =
{
    FTEXPLAIN_COMMAND_BUTTON(180, 0),                                       // 0x10B4, 0x0000

    FTEXPLAIN_COMMAND_STICK(60, 30, 0),                                     // 0x203C, 0x1E00

    FTEXPLAIN_COMMAND_STICK(0, 0, 0),                                       // 0x2000, 0x0000

    FTEXPLAIN_COMMAND_BUTTON(1, A_BUTTON),                                  // 0x1001, 0x8000

    FTEXPLAIN_COMMAND_BUTTON(12, 0),                                        // 0x100C, 0x0000

    FTEXPLAIN_COMMAND_BUTTON(1, A_BUTTON),                                  // 0x1001, 0x8000

    FTEXPLAIN_COMMAND_BUTTON(12, 0),                                        // 0x100C, 0x0000

    FTEXPLAIN_COMMAND_BUTTON(1, A_BUTTON),                                  // 0x1001, 0x8000

    FTEXPLAIN_COMMAND_BUTTON(30, 0),                                        // 0x101E, 0x0000

    FTEXPLAIN_COMMAND_STICK(0, 0, 80),                                      // 0x2000, 0x0050

    FTEXPLAIN_COMMAND_BUTTON(1, B_BUTTON),                                  // 0x1001, 0x4000

    FTEXPLAIN_COMMAND_STICK(0, 0, 0),                                       // 0x2000, 0x0000

    FTEXPLAIN_COMMAND_BUTTON(180, 0),                                       // 0x10B4, 0x0000

    FTEXPLAIN_COMMAND_END                                                   // 0x0000
};

Unk800D4060 D_ovl5_8018D5B8;
rdFileNode D_ovl5_8018D678[20];
rdFileNode D_ovl5_8018D718[7];
GObj *gUnkExplainFighterGObj;
gmMatchInfo gUnkExplainBattleState;

// 0x8018D0C0
void func_ovl5_8018D0C0(void)
{
    rdSetup rldm_setup;

    rldm_setup.tableRomAddr = (s32)&D_NF_001AC870;
    rldm_setup.tableFileCount = (u32)&D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = D_ovl5_8018D678;
    rldm_setup.statusBufSize = ARRAY_COUNT(D_ovl5_8018D678);
    rldm_setup.forceBuf = D_ovl5_8018D718;
    rldm_setup.forceBufSize = ARRAY_COUNT(D_ovl5_8018D718);

    rdManagerInitSetup(&rldm_setup);
    rdManagerLoadFiles(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs), gCommonFiles, hlMemoryAlloc(rdManagerGetAllocSize(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs)), 0x10));
}

// 0x8018D160
void func_ovl5_8018D160(GObj *arg0)
{
    if (ftCommon_CheckHowToPlayInputSeq(gUnkExplainFighterGObj) == FALSE)
    {
        func_800269C0(alSound_SFX_TitlePressStart);
        func_80005C74();
    }
}

// 0x8018D1A0
void func_ovl5_8018D1A0(void)
{
    s32 unused[3];
    GObj *fighter_gobj;
    s32 player;
    ftSpawnInfo player_spawn;
    Unk800D4060 unk_struct;

    gUnkExplainBattleState = gDefaultBattleState;
    gBattleState = &gUnkExplainBattleState;

    gBattleState->game_type = gmMatch_GameType_Unk6;
    gBattleState->gr_kind = Gr_Kind_Pupupu;
    gBattleState->pl_count = 1;
    gBattleState->player_block[0].character_kind = Ft_Kind_Mario;
    gBattleState->player_block[0].player_kind = Pl_Kind_Key;

    func_ovl5_8018D0C0();
    omMakeGObjCommon(0x3F7U, func_ovl5_8018D160, 0xDU, 0x80000000);
    func_8000B9FC(9, 0x80000000, 0x64, 1, 0xFF);
    func_ovl2_80115890();
    func_ovl2_800EC130();
    mpCollision_InitMapCollisionData();
    cmManager_SetViewportCoordinates(10, 10, 310, 230);
    cmManager_MakeWallpaperCamera();
    grWallpaper_SetGroundWallpaper();
    func_ovl2_8010DB00();
    grNodeInit_SetGroundFiles();
    ftManager_AllocFighterData(3, 1);
    wpManager_AllocUserData();
    itManager_AllocUserData();
    efManager_AllocUserData();
    gmRumble_SetPlayerRumble();
    ftPublicity_SetPlayerPublicReact();

    for (player = 0; player < ARRAY_COUNT(gBattleState->player_block); player++)
    {
        player_spawn = dFighterDefaultSpawn;

        if (gBattleState->player_block[player].player_kind == Pl_Kind_Not) continue;

        ftManager_SetFileDataKind(gBattleState->player_block[player].character_kind);

        player_spawn.ft_kind = gBattleState->player_block[player].character_kind;
        player_spawn.pos.x = 0.0F;
        player_spawn.pos.y = 150.0F;
        player_spawn.pos.z = 0.0F;
        player_spawn.lr_spawn = LR_Right;
        player_spawn.team = gBattleState->player_block[player].team_index;
        player_spawn.player = player;
        player_spawn.model_lod = ftParts_LOD_HighPoly;
        player_spawn.costume = gBattleState->player_block[player].costume_index;
        player_spawn.handicap = gBattleState->player_block[player].handicap;
        player_spawn.cp_level = gBattleState->player_block[player].level;
        player_spawn.stock_count = gBattleState->stock_setting;
        player_spawn.damage = 0;
        player_spawn.pl_kind = gBattleState->player_block[player].player_kind;
        player_spawn.controller = &gPlayerControllers[player];

        player_spawn.anim_heap = ftManager_AllocAnimHeapKind(gBattleState->player_block[player].character_kind);

        fighter_gobj = ftManager_MakeFighter(&player_spawn);
        gUnkExplainFighterGObj = fighter_gobj;

        ftCommon_ClearPlayerMatchStats(player, fighter_gobj);
        ftCommon_SetHowToPlayInputSeq(fighter_gobj, D_ovl5_8018D580);

    }
    unk_struct = D_ovl5_8018D5B8;
    func_ovl0_800D4060(0x3FD, 0xD, 0xA, &unk_struct, 0xC, 1, 0);
}

// 0x8018D4BC
void func_ovl5_8018D4BC(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);

    ftRender_Lights_DisplayLightReflect(display_list, gMapLightAngleX, gMapLightAngleY);
}
