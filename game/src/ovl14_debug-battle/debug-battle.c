#include <sys/develop.h>
#include <ft/fighter.h>
#include <gm/gmsound.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <debug-battle.h>

// ?
extern void func_8000B1C4();

// ovl9
extern void mnDebugMenuCreateMenu(s32, s32, s32, void*, s32);
extern mnDebugMenuDestroyMenu();
extern sb32 gMNDebugMenuIsMenuOpen; // isMenuShown

// ovl14 stuff

// 0x80132694
extern s8 gMNDebugBattleMenuValueScene = 0; // scene

// 0x80132698
extern s32 gMNDebugBattleCurrentAnimation = 0x0002000A;

// 0x8013269C
extern char (*dMNDebugBattleFighterKindStrings[27])[] = {
    dMNDebugBattleMario,
    dMNDebugBattleFox,
    dMNDebugBattleDonkey,
    dMNDebugBattleSamus,
    dMNDebugBattleLuigi,
    dMNDebugBattleLink,
    dMNDebugBattleYoshi,
    dMNDebugBattleCaptain,
    dMNDebugBattleKirby,
    dMNDebugBattlePikacyu,
    dMNDebugBattlePurin,
    dMNDebugBattleNes,
    dMNDebugBattleBoss,
    dMNDebugBattleMetal,
    dMNDebugBattleNMario,
    dMNDebugBattleNFox,
    dMNDebugBattleNDonkey,
    dMNDebugBattleNSamus,
    dMNDebugBattleNLuigi,
    dMNDebugBattleNLink,
    dMNDebugBattleNYoshi,
    dMNDebugBattleNCaptain,
    dMNDebugBattleNKirby,
    dMNDebugBattleNPikacyu,
    dMNDebugBattleNPurin,
    dMNDebugBattleNNes,
    dMNDebugBattleGDonkey
};

// 0x80132708
extern char (*dMNDebugBattlePlayerKindStrings[6])[] = {
    dMNDebugBattleMan,
    dMNDebugBattleCom,
    dMNDebugBattleNot,
    dMNDebugBattleDemo,
    dMNDebugBattleKey,
    dMNDebugBattleGameKey
};

// 0x80132720
extern char (*dMNDebugBattleSceneStrings[6])[] = {
    dMNDebugBattleVsMode,
    dMNDebugBattle1PMode,
    dMNDebugBattleStaffroll,
    dMNDebugBattleExplain,
    dMNDebugBattleAutoDemo,
    dMNDebugBattleCongra
};

// 0x80132738
extern char (*dMNDebugBattleStageStrings[18])[] = {
    dMNDebugBattleStageLink,
    dMNDebugBattleStageYoshi,
    dMNDebugBattleStageFox,
    dMNDebugBattleStageBonus1,
    dMNDebugBattleStageMarioBros,
    dMNDebugBattleStagePikacyu,
    dMNDebugBattleStageGDonkey,
    dMNDebugBattleStageBonus2,
    dMNDebugBattleStageKirby,
    dMNDebugBattleStageSamus,
    dMNDebugBattleStageMetal,
    dMNDebugBattleStageBonus3,
    dMNDebugBattleStageZako,
    dMNDebugBattleStageBoss,
    dMNDebugBattleStageLuigi,
    dMNDebugBattleStageNes,
    dMNDebugBattleStagePurin,
    dMNDebugBattleStageCaptain
};

// 0x80132780
extern dbMenuItem dMNDebugBattleMenuItems[15] = {
    { nDBMenuItemKindStringByte,     mnDebugBattleStartBattle,   dMNDebugBattleSceneStrings,         &gMNDebugBattleMenuValueScene,                          0.0F, 5.0F,  0 },
    { nDBMenuItemKindNumericByte,    0,                          dMNDebugBattleBattleTime,           &gTransferBattleState.time_limit,                       0.0F, 60.0F, 0 },
    { nDBMenuItemKindStringByte,     0,                          dMNDebugBattleStageStrings,         &gSceneData.spgame_stage,                               0.0F, 17.0F, 0 },
    { nDBMenuItemKindStringByte,     0,                          dMNDebugBattlePlayerKindStrings,    &gTransferBattleState.player_block[0].player_kind,      0.0F, 5.0F,  0 },
    { nDBMenuItemKindStringByte,     0,                          dMNDebugBattleFighterKindStrings,   &gTransferBattleState.player_block[0].character_kind,   0.0F, 26.0F, 0 },
    { nDBMenuItemKindNumericByte,    0,                          dMNDebugBattleCostume,              &gTransferBattleState.player_block[0].costume_index,    0.0F, 10.0F, 0 },
    { nDBMenuItemKindStringByte,     0,                          dMNDebugBattlePlayerKindStrings,    &gTransferBattleState.player_block[1].player_kind,      0.0F, 5.0F,  0 },
    { nDBMenuItemKindStringByte,     0,                          dMNDebugBattleFighterKindStrings,   &gTransferBattleState.player_block[1].character_kind,   0.0F, 26.0F, 0 },
    { nDBMenuItemKindNumericByte,    0,                          dMNDebugBattleCostume,              &gTransferBattleState.player_block[1].costume_index,    0.0F, 10.0F, 0 },
    { nDBMenuItemKindStringByte,     0,                          dMNDebugBattlePlayerKindStrings,    &gTransferBattleState.player_block[2].player_kind,      0.0F, 5.0F,  0 },
    { nDBMenuItemKindStringByte,     0,                          dMNDebugBattleFighterKindStrings,   &gTransferBattleState.player_block[2].character_kind,   0.0F, 26.0F, 0 },
    { nDBMenuItemKindNumericByte,    0,                          dMNDebugBattleCostume,              &gTransferBattleState.player_block[2].costume_index,    0.0F, 10.0F, 0 },
    { nDBMenuItemKindStringByte,     0,                          dMNDebugBattlePlayerKindStrings,    &gTransferBattleState.player_block[3].player_kind,      0.0F, 5.0F,  0 },
    { nDBMenuItemKindStringByte,     0,                          dMNDebugBattleFighterKindStrings,   &gTransferBattleState.player_block[3].character_kind,   0.0F, 26.0F, 0 },
    { nDBMenuItemKindNumericByte,    0,                          dMNDebugBattleCostume,              &gTransferBattleState.player_block[3].costume_index,    0.0F, 10.0F, 0 }
};

// 0x80132924
extern s32 dMNDebugBattleInitialFtKinds[4] = { Ft_Kind_Mario, Ft_Kind_Donkey, Ft_Kind_Samus, Ft_Kind_Fox };

extern scUnkDataBounds D_ovl14_80132934;
extern scRuntimeInfo D_ovl14_80132950;

// 0x801329E0
extern char dMNDebugBattleMario[] = "Mario";

// 0x801329E8
extern char dMNDebugBattleFox[] = "Fox";

// 0x801329F0
extern char dMNDebugBattleDonkey[] = "Donkey";

// 0x801329F8
extern char dMNDebugBattleSamus[] = "Samus";

// 0x80132A00
extern char dMNDebugBattleLuigi[] = "Luigi";

// 0x80132A08
extern char dMNDebugBattleLink[] = "Link";

// 0x80132A10
extern char dMNDebugBattleYoshi[] = "Yoshi";

// 0x80132A18
extern char dMNDebugBattleCaptain[] = "Captain";

// 0x80132A24
extern char dMNDebugBattleKirby[] = "Kirby";

// 0x80132A2C
extern char dMNDebugBattlePikacyu[] = "Pikacyu";

// 0x80132A38
extern char dMNDebugBattlePurin[] = "Purin";

// 0x80132A40
extern char dMNDebugBattleNes[] = "Nes";

// 0x80132A48
extern char dMNDebugBattleBoss[] = "Boss";

// 0x80132A50
extern char dMNDebugBattleMetal[] = "Metal";

// 0x80132A58
extern char dMNDebugBattleNMario[] = "NMario";

// 0x80132A60
extern char dMNDebugBattleNFox[] = "NFox";

// 0x80132A68
extern char dMNDebugBattleNDonkey[] = "NDonkey";

// 0x80132A74
extern char dMNDebugBattleNSamus[] = "NSamus";

// 0x80132A7C
extern char dMNDebugBattleNLuigi[] = "NLuigi";

// 0x80132A84
extern char dMNDebugBattleNLink[] = "NLink";

// 0x80132A8C
extern char dMNDebugBattleNYoshi[] = "NYoshi";

// 0x80132A94
extern char dMNDebugBattleNCaptain[] = "NCaptain";

// 0x80132AA0
extern char dMNDebugBattleNKirby[] = "NKirby";

// 0x80132AA8
extern char dMNDebugBattleNPikacyu[] = "NPikacyu";

// 0x80132AB4
extern char dMNDebugBattleNPurin[] = "NPurin";

// 0x80132ABC
extern char dMNDebugBattleNNes[] = "NNes";

// 0x80132AC4
extern char dMNDebugBattleGDonkey[] = "GDonkey";

// 0x80132AD0
extern char dMNDebugBattleMan[] = "Man";

// 0x80132AD4
extern char dMNDebugBattleCom[] = "Com";

// 0x80132AD8
extern char dMNDebugBattleNot[] = "Not";

// 0x80132ADC
extern char dMNDebugBattleDemo[] = "Demo";

// 0x80132AE4
extern char dMNDebugBattleKey[] = "Key";

// 0x80132AE8
extern char dMNDebugBattleGameKey[] = "GameKey";

// 0x80132AF0
extern char dMNDebugBattleVsMode[] = "VS Mode";

// 0x80132AF8
extern char dMNDebugBattle1PMode[] = "1P Mode";

// 0x80132B00
extern char dMNDebugBattleStaffroll[] = "Staffroll";

// 0x80132B0C
extern char dMNDebugBattleExplain[] = "Explain";

// 0x80132B14
extern char dMNDebugBattleAutoDemo[] = "AutoDemo";

// 0x80132B20
extern char dMNDebugBattleCongra[] = "Congra";

// 0x80132B28
extern char dMNDebugBattleStageLink[] = "S:Link";

// 0x80132B30
extern char dMNDebugBattleStageYoshi[] = "S:Yoshi";

// 0x80132B38
extern char dMNDebugBattleStageFox[] = "S:Fox";

// 80132B40
extern char dMNDebugBattleStageBonus1[] = "S:Bonus1";

// 80132B4C
extern char dMNDebugBattleStageMarioBros[] = "S:MarioBros";

// 80132B58
extern char dMNDebugBattleStagePikacyu[] = "S:Pikacyu";

// 80132B64
extern char dMNDebugBattleStageGDonkey[] = "S:GDonkey";

// 80132B70
extern char dMNDebugBattleStageBonus2[] = "S:Bonus2";

// 80132B7C
extern char dMNDebugBattleStageKirby[] = "S:Kirby";

// 80132B84
extern char dMNDebugBattleStageSamus[] = "S:Samus";

// 80132B8C
extern char dMNDebugBattleStageMetal[] = "S:Metal";

// 80132B94
extern char dMNDebugBattleStageBonus3[] = "S:Bonus3";

// 80132BA0
extern char dMNDebugBattleStageZako[] = "S:Zako";

// 80132BA8
extern char dMNDebugBattleStageBoss[] = "S:Boss";

// 80132BB0
extern char dMNDebugBattleStageLuigi[] = "S:Luigi";

// 80132BB8
extern char dMNDebugBattleStageNes[] = "S:Nes";

// 80132BC0
extern char dMNDebugBattleStagePurin[] = "S:Purin";

// 80132BC8
extern char dMNDebugBattleStageCaptain[] = "S:Captain";

// 0x80132BD4
extern char dMNDebugBattleBattleTime[] = "BattleTime %3d";

// 0x80132BE4
extern char dMNDebugBattleCostume[] = "  %1d";

// 0x80132690
extern s32 gMNDebugBattleExitInterrupt;

// 0x80133110
extern dbFighter gMNDebugBattleFighters[4];

extern u32 D_ovl14_80132C28[150];
extern u32 D_ovl14_801330D8[7];

extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;


// 0x80131B00
void mnDebugBattleSetupDisplaylist(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B58
void mnDebugBattleStartBattle()
{
    s32 i;

    gMNDebugBattleExitInterrupt = 1;
    gTransferBattleState.pl_count = gTransferBattleState.cp_count = 0;

    for (i = 0; i < 4; i++)
    {
        switch (gTransferBattleState.player_block[i].player_kind)
        {
            case Pl_Kind_Man:
                gTransferBattleState.pl_count++;
                break;
            case Pl_Kind_Com:
                gTransferBattleState.cp_count++;
                break;
        }

        gTransferBattleState.player_block[i].team_index = i;
        gTransferBattleState.player_block[i].player_color_index = i;
        gTransferBattleState.player_block[i].tag_kind = i;
    }

    gTransferBattleState.is_team_battle = FALSE;
}

// 0x80131CD8
s32 mnDebugBattleSetShade(s32 port_id)
{
    s32 i, shade;

    for (i = shade = 0; i != ARRAY_COUNT(gTransferBattleState.player_block); i++)
    {
    loop:
        if (i == port_id)
        {
            continue;
        }
        if
        (
            (gTransferBattleState.player_block[i].character_kind == gTransferBattleState.player_block[port_id].character_kind) &&
            (gTransferBattleState.player_block[i].costume_index == gTransferBattleState.player_block[port_id].costume_index) &&
            (gTransferBattleState.player_block[i].shade_index == shade)
        )
        {
            shade++, i = 0;

            goto loop;
        }
    }
    gTransferBattleState.player_block[port_id].shade_index = shade;

    return shade;
}

// 0x80131D74
s32 mnDebugBattleGetUnlockedCharsCountForMask(u16 mask)
{
    s32 i;
    s32 unlocked_chars;

    for (i = 0, unlocked_chars = 0; i < 16; i++, mask = mask >> 1)
    {
        if (mask & 1)
        {
            unlocked_chars++;
        }
    }

    return unlocked_chars;
}

// 0x80131DEC
s32 mnDebugBattleGetMissingFtKind(u16 mask_1, u16 mask_2, s32 missing_index)
{
    s32 ft_kind = -1;

    missing_index = missing_index + 1;

    do
    {
        ft_kind += 1;

        if ((mask_1 & gmSaveChrMask(ft_kind)) && !(mask_2 & gmSaveChrMask(ft_kind)))
        {
            missing_index -= 1;
        }
    }
    while (missing_index != 0);

    return ft_kind;
}

// 0x80131E38
void mnDebugBattleSetDemoFtKinds()
{
    s32 non_recently_demoed_count;
    u16 unlocked_mask = (gSaveData.character_mask | GMSAVEINFO_CHARACTER_MASK_STARTER);

    if (unlocked_mask == gSceneData.recently_demoed_mask)
    {
        gSceneData.recently_demoed_mask = 0;
    }

    non_recently_demoed_count = mnDebugBattleGetUnlockedCharsCountForMask(unlocked_mask) - mnDebugBattleGetUnlockedCharsCountForMask(gSceneData.recently_demoed_mask);

    gSceneData.demo_ft_kind[0] = mnDebugBattleGetMissingFtKind(unlocked_mask, gSceneData.recently_demoed_mask, lbRandom_GetIntRange(non_recently_demoed_count));

    if (gSceneData.recently_demoed_mask == 0)
    {
        gSceneData.first_demo_ft_kind = gSceneData.demo_ft_kind[0];
    }

    gSceneData.recently_demoed_mask |= gmSaveChrMask(gSceneData.demo_ft_kind[0]);

    non_recently_demoed_count = mnDebugBattleGetUnlockedCharsCountForMask(unlocked_mask) - mnDebugBattleGetUnlockedCharsCountForMask(gSceneData.recently_demoed_mask);

    if (non_recently_demoed_count == 0)
    {
        gSceneData.demo_ft_kind[1] = gSceneData.first_demo_ft_kind;
    }
    else
    {
        gSceneData.demo_ft_kind[1] = mnDebugBattleGetMissingFtKind(unlocked_mask, gSceneData.recently_demoed_mask, lbRandom_GetIntRange(non_recently_demoed_count));
        gSceneData.recently_demoed_mask |= gmSaveChrMask(gSceneData.demo_ft_kind[1]);
    }
}

// 0x80131F3C
void mnDebugBattleMain(GObj* arg0)
{
    void *anim_heap;
    s32 i;
    GObj* fighter_gobj;
    ftStruct *fp;

    if (gSysController.button_new & START_BUTTON)
    {
        if (gMNDebugMenuIsMenuOpen != FALSE)
        {
            mnDebugBattleStartBattle();
        }
        else
        {
            mnDebugMenuCreateMenu(0x1E, 0x14, 0x55, &dMNDebugBattleMenuItems, 0xF);
        }
    }

    for (i = 0; i < 4; i++)
    {
        if (gTransferBattleState.player_block[i].character_kind != gMNDebugBattleFighters[i].ft_kind)
        {
            ftCreateDesc spawn_info = dFTDefaultFighterDesc;
            fighter_gobj = gMNDebugBattleFighters[i].fighter_gobj;
            fp = ftGetStruct(fighter_gobj);

            anim_heap = fp->anim_load;

            ftManagerDestroyFighter(fighter_gobj);

            spawn_info.ft_kind = gTransferBattleState.player_block[i].character_kind;
            spawn_info.pos.x = (i * 400.0f) - 600.0f;

            if (func_ovl2_800EC11C(spawn_info.ft_kind) < gTransferBattleState.player_block[i].costume_index)
            {
                gTransferBattleState.player_block[i].costume_index = func_ovl2_800EC11C(gTransferBattleState.player_block[i].character_kind);
            }

            spawn_info.costume = gTransferBattleState.player_block[i].costume_index;
            spawn_info.shade = mnDebugBattleSetShade(i);
            spawn_info.anim_heap = anim_heap;
            gMNDebugBattleFighters[i].fighter_gobj = ftManagerMakeFighter(&spawn_info);

            gMNDebugBattleFighters[i].ft_kind = gTransferBattleState.player_block[i].character_kind;
            gMNDebugBattleFighters[i].costume_index = gTransferBattleState.player_block[i].costume_index;
        }

        if (gTransferBattleState.player_block[i].costume_index != gMNDebugBattleFighters[i].costume_index)
        {
            mnDebugBattleSetShade(i);
            func_ovl2_800E9248(gMNDebugBattleFighters[i].fighter_gobj, gTransferBattleState.player_block[i].costume_index, gTransferBattleState.player_block[i].shade_index);
            gMNDebugBattleFighters[i].costume_index = gTransferBattleState.player_block[i].costume_index;
        }
    }

    if (gSysController.button_new & U_CBUTTONS)
    {
        func_ovl1_803905CC(gMNDebugBattleFighters[1].fighter_gobj, gMNDebugBattleCurrentAnimation++);
    }

    if (gSysController.button_new & D_CBUTTONS)
    {
        func_ovl1_803905CC(gMNDebugBattleFighters[1].fighter_gobj, gMNDebugBattleCurrentAnimation--);
    }

    if (gMNDebugBattleExitInterrupt != 0)
    {
        mnDebugMenuDestroyMenu();

        gSceneData.scene_previous = gSceneData.scene_current;

        switch (gMNDebugBattleMenuValueScene)
        {
            case dbBattleSceneVsMode:
                gSceneData.scene_current = scMajor_Kind_DebugMPSel;
                break;
            case dbBattleScene1PMode:
                gSceneData.scene_current = scMajor_Kind_1PGame;
                gSceneData.spgame_player = 0;
                gSceneData.ft_kind = gTransferBattleState.player_block[0].character_kind;
                gSceneData.costume_index = gTransferBattleState.player_block[0].costume_index;
                break;
            case dbBattleSceneStaffroll:
                gSceneData.scene_current = scMajor_Kind_Credits;
                break;
            case dbBattleSceneExplain:
                gSceneData.scene_current = scMajor_Kind_HowToPlay;
                gTransferBattleState.is_team_battle = FALSE;
                break;
            case dbBattleSceneAutoDemo:
                mnDebugBattleSetDemoFtKinds();
                gSceneData.scene_current = scMajor_Kind_Demo;
                gTransferBattleState.is_team_battle = FALSE;
                break;
            case dbBattleSceneCongra:
                gSceneData.scene_current = scMajor_Kind_1PCongratulations;
                break;
        }

        func_80005C74();
    }
}

// 0x80132238
void mnDebugBattleSyncCostumes(s32 arg0)
{
    s32 i;
    u8 temp_v0;

    for (i = 0; i < 4; i++)
    {
        if (gTransferBattleState.player_block[i].costume_index != gMNDebugBattleFighters[i].costume_index)
        {
            if (gTransferBattleState.player_block[i].costume_index == 10)
            {
                gTransferBattleState.player_block[i].costume_index = func_ovl2_800EC11C(gTransferBattleState.player_block[i].character_kind);
            }
            else if (func_ovl2_800EC11C(gTransferBattleState.player_block[i].character_kind) < gTransferBattleState.player_block[i].costume_index)
            {
                gTransferBattleState.player_block[i].costume_index = 0;
            }
        }
    }
}

// 0x801322DC
GObj* mnDebugBattleCreateViewport(void (*proc)(GObj*))
{
    GObj *camera_gobj = func_8000B93C(0x400, func_8000B1C4, 0xF, 0x80000000U, func_80017DBC, 0x32, 0x00048600, -1, 1, 0, proc, 1, 0);
    Camera *cam;

    if (camera_gobj == NULL)
    {
        return NULL;
    }

    cam = CameraGetStruct(camera_gobj);
    cam->flags = 5;
    cam->vec.at.y = 600.0f;
    cam->vec.eye.z = 3000.0f;
    cam->vec.eye.y = 600.0f;

    return camera_gobj;
}

// 0x8013239C
void mnDebugBattleInit()
{
    s32 i;
    rdSetup rldmSetup;
    GObj *main_gobj;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl14_80132C28;
    rldmSetup.statusBufSize = 0x96;
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl14_801330D8;
    rldmSetup.forceBufSize = 7;
    rdManagerInitSetup(&rldmSetup);

    main_gobj = omMakeGObjSPAfter(0, mnDebugBattleMain, 0xF, 0x80000000);
    omAddGObjCommonProc(main_gobj, mnDebugBattleSyncCostumes, 1, 0);

    func_8000B9FC(0xF, 0x80000000, 0x64, 2, 0xFF);
    func_ovl2_80115890();
    mnDebugBattleCreateViewport(0);
    efManager_AllocUserData();
    ftManagerAllocFighter(3, 4);

    for (i = Ft_Kind_Mario; i <= Ft_Kind_GiantDonkey; i++)
    {
        ftManagerSetupDataKind(i);
    }

    for (i = 0; i < ARRAY_COUNT(gTransferBattleState.player_block); i++)
    {
        gTransferBattleState.player_block[i].team_index = i;
        gTransferBattleState.player_block[i].player_kind = 0;
        gTransferBattleState.player_block[i].shade_index = 0;
        gTransferBattleState.player_block[i].character_kind = dMNDebugBattleInitialFtKinds[i];
    }

    for (i = 0; i < ARRAY_COUNT(gTransferBattleState.player_block); i++)
    {
        ftCreateDesc spawn_info = dFTDefaultFighterDesc;
        spawn_info.ft_kind = gTransferBattleState.player_block[i].character_kind;
        spawn_info.costume = gTransferBattleState.player_block[i].costume_index;
        spawn_info.pos.x = (i * 400.0f) - 600.0f;
        spawn_info.anim_heap = gsMemoryAlloc(gFTAnimHeapSize, 0x10);
        gMNDebugBattleFighters[i].fighter_gobj = ftManagerMakeFighter(&spawn_info);

        gMNDebugBattleFighters[i].ft_kind = gTransferBattleState.player_block[i].character_kind;
        gMNDebugBattleFighters[i].costume_index = gTransferBattleState.player_block[i].costume_index;
    }

    mnDebugMenuInitMenu();
    mnDebugMenuCreateMenu(0x1E, 0x14, 0x55, &dMNDebugBattleMenuItems, 0xF);
    func_ovl1_803904E0(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);
}

// 0x80132638
void mnDebugBattleStartScene()
{
    D_ovl14_80132934.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl14_80132934);
    D_ovl14_80132950.arena_size = (u32) ((uintptr_t)&lOverlay14ArenaHi - (uintptr_t)&lOverlay14ArenaLo);
    gsGTLSceneInit(&D_ovl14_80132950);
}
