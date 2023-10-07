#include <ft/fighter.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>

// OVERLAY 5

extern void *gCommonSpriteFiles[];
extern intptr_t D_NF_00000854;
extern intptr_t D_NF_001AC870;
extern u32 D_ovl2_80116BD0[8];
extern intptr_t D_NF_80000023;

// DATA
ftExplainCommand D_ovl5_8018D580[/* */] =
{
    { ftExplainCommand_Kind_Button, 180 },  // 0x10B4

    { 0 },                                  // 0x0000

    { ftExplainCommand_Kind_Stick,   60 },  // 0x203C

    { 30, 0 },                              // 0x1E00

    { ftExplainCommand_Kind_Stick,    0 },  // 0x2000

    { 0, 0 },                               // 0x0000

    { ftExplainCommand_Kind_Button,   1 },  // 0x1001
        
    { HAL_BUTTON_A },                       // 0x8000

    { ftExplainCommand_Kind_Button,  12 },  // 0x100C

    { 0 },                                  // 0x0000

    { ftExplainCommand_Kind_Button,   1 },  // 0x1001

    { HAL_BUTTON_A },                       // 0x8000

    { ftExplainCommand_Kind_Button,  12 },  // 0x100C

    { 0 },                                  // 0x0000

    { ftExplainCommand_Kind_Button,   1 },  // 0x1001

    { HAL_BUTTON_A },                       // 0x8000

    { ftExplainCommand_Kind_Button,  30 },  // 0x101E

    { 0 },                                  // 0x0000

    { ftExplainCommand_Kind_Stick,    0 },  // 0x2000
        
    { 0, 80 },                              // 0x0050

    { ftExplainCommand_Kind_Button,   1 },  // 0x1001

    { HAL_BUTTON_B },                       // 0x4000

    { ftExplainCommand_Kind_Stick,    0 },  // 0x2000
        
    { 0 },                                  // 0x0000

    { ftExplainCommand_Kind_Button, 180 },  // 0x10B4
    
    { 0 },                                  // 0x0000

    { ftExplainCommand_Kind_End,       0 }  // 0x0000
};

Unk800D4060 D_ovl5_8018D5B8;
RldmFileNode D_ovl5_8018D678[20];
RldmFileNode D_ovl5_8018D718[7];
GObj *gUnkExplainFighterGObj;
gmMatchInfo gUnkExplainBattleState;

// 0x8018D0C0
void func_ovl5_8018D0C0(void)
{
    RldmSetup rldm_setup;

    rldm_setup.tableRomAddr = (s32)&D_NF_001AC870;
    rldm_setup.tableFileCount = (u32)&D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = D_ovl5_8018D678;
    rldm_setup.statusBufSize = ARRAY_COUNT(D_ovl5_8018D678);
    rldm_setup.forceBuf = D_ovl5_8018D718;
    rldm_setup.forceBufSize = ARRAY_COUNT(D_ovl5_8018D718);

    rldm_initialize(&rldm_setup);
    rldm_load_files_into(D_ovl2_80116BD0, ARRAY_COUNT(D_ovl2_80116BD0), gCommonSpriteFiles, hal_alloc(rldm_bytes_need_to_load(D_ovl2_80116BD0, ARRAY_COUNT(D_ovl2_80116BD0)), 0x10));
}



// 0x8018D160
void func_ovl5_8018D160(GObj *arg0)
{
    if (ftCommon_CheckHowToPlayInputSeq(gUnkExplainFighterGObj) == FALSE)
    {
        func_800269C0(0x9DU);
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
    gBattleState->player_block[0].player_kind = Pl_Kind_Intro;

    func_ovl5_8018D0C0();
    omMakeGObjCommon(0x3F7U, func_ovl5_8018D160, 0xDU, 0x80000000);
    func_8000B9FC(9, 0x80000000, 0x64, 1, 0xFF);
    func_ovl2_80115890();
    func_ovl2_800EC130();
    mpData_SetMapCollisionData();
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
        player_spawn = D_ovl2_80116DD0;

        if (gBattleState->player_block[player].player_kind == Pl_Kind_None) continue;

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
        player_spawn.p_controller = &gPlayerControllers[player];

        player_spawn.unk_rebirth_0x38 = ftManager_AllocAnimHeapKind(gBattleState->player_block[player].character_kind);

        fighter_gobj = ftManager_MakeFighter(&player_spawn);
        gUnkExplainFighterGObj = fighter_gobj;

        ftCommon_ClearPlayerMatchStats(player, fighter_gobj);
        ftCommon_SetHowToPlayInputSeq(fighter_gobj, D_ovl5_8018D580);

    }
    unk_struct = D_ovl5_8018D5B8;
    func_ovl0_800D4060(0x3FD, 0xD, 0xA, &unk_struct, 0xC, 1, 0);
}

void func_ovl5_8018D4BC(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);

    ftRender_Lights_DisplayLightReflect(display_list, gMapLightAngleX, gMapLightAngleY);
}
