#include <ft/fighter.h>
#include <gm/battle.h>
#include <mn/menu.h>
#include <sys/thread6.h>
#include <ovl0/reloc_data_mgr.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern s8 gPlayerControllerPortStatuses[4];

extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_00000854;
extern intptr_t D_NF_800A5240;
extern intptr_t lMNCongraArenaLo;       // 0x80132300
extern intptr_t lSubSystemArenaLo;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x801322B8
rdFileNode sMNCongraStatusBuf[5];

// 0x801322E0
s32 sMNCongraFighterKind;

// 0x801322E4
s32 sMNCongraSkipWait;

// 0x801322E8
s32 sMNCongraSceneChangeWait;

// 0x801322EC
sb32 sMNCongraIsProceed;

// 0x801322F0
sb32 sMNCongraIsSceneChange;

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80132100
mnCongraFile dMNCongraFileInfo[/* */];

// 0x801321C0
Unk800D4060 D_ovl57_801321C0;

// 0x801321C4
Unk800D4060 D_ovl57_801321C4;

// 0x801321C8
Lights1 dMNCongraLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x0A, 0x32, 0x32);

// 0x801321E0
Gfx dMNCongraDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMNCongraLights1),
    gsSPEndDisplayList()
};

// 0x80132208
scUnkDataBounds D_ovl57_80132208;

// 0x80132224
scRuntimeInfo D_ovl57_80132224;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
sb32 mnCongraCheckPlayerControllerConnected(s32 player)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gPlayerControllerPortStatuses); i++)
    {
        if (player == gPlayerControllerPortStatuses[i])
        {
            return TRUE;
        }
    }
    return FALSE;
}

// 0x80131B6C
s32 mnCongraGetPlayerControllerInterrupt(u32 button_mask)
{
    s32 player;

    for (player = 0; player < ARRAY_COUNT(gPlayerControllers); player++)
    {
        if ((mnCongraCheckPlayerControllerConnected(player) != FALSE) && (gPlayerControllers[player].button_new & button_mask))
        {
            return player + 1;
        }
    }
    return 0;
}

// 0x80131C04
void mnCongraActorProcUpdate(GObj *gobj)
{
    Unk800D4060 sp2C;

    if (sMNCongraSkipWait != 0)
    {
        sMNCongraSkipWait--;
    }
    if ((sMNCongraSkipWait == 0) && (sMNCongraIsProceed == FALSE) && (mnCongraGetPlayerControllerInterrupt(A_BUTTON | B_BUTTON | START_BUTTON) != 0))
    {
        sMNCongraIsProceed = TRUE;

        sp2C = D_ovl57_801321C0;

        func_ovl0_800D4060(0x3FD, 0xD, 0xA, &sp2C, 0x5A, 0, &sMNCongraIsSceneChange);
    }
}

// 0x80131CA4
void mnCongraInitAll(void)
{
    rdSetup rldm_setup;
    Camera *cam;
    GObj *gobj;
    SObj *sobj;

    sMNCongraSkipWait = 8;
    sMNCongraSceneChangeWait = 0;
    sMNCongraIsProceed = FALSE;
    sMNCongraIsSceneChange = 0;

    rldm_setup.tableRomAddr = &D_NF_001AC870;
    rldm_setup.tableFileCount = &D_NF_00000854;
    rldm_setup.fileHeap = 0;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = sMNCongraStatusBuf;
    rldm_setup.statusBufSize = ARRAY_COUNT(sMNCongraStatusBuf);
    rldm_setup.forceBuf = NULL;
    rldm_setup.forceBufSize = 0;

    rdManagerInitSetup(&rldm_setup);

    omMakeGObjCommon(0, mnCongraActorProcUpdate, 0, GOBJ_LINKORDER_DEFAULT);
    func_8000B9FC(0, 0x80000000, 0x64, 2, 0xFF);

    cam = CameraGetStruct(func_8000B93C(0x3EB, NULL, 9, 0x80000000, func_ovl0_800CD2CC, 0x50, 1, -1, 0, 1, 0, 1, 0));
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    gobj = omMakeGObjCommon(GObj_Kind_Wallpaper, NULL, GObj_LinkID_Wallpaper, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0, 0x80000000, -1);

    sobj = gcAppendSObjWithSprite
    (
        gobj, (Sprite*)
        (
            (uintptr_t)rdManagerGetFileWithExternHeap
            (
                dMNCongraFileInfo[sMNCongraFighterKind].image1_file_id,
                gsMemoryAlloc(rdManagerGetFileSize(dMNCongraFileInfo[sMNCongraFighterKind].image1_file_id), 0x10)
            )
            +
            dMNCongraFileInfo[sMNCongraFighterKind].image1_offset
        )
    );
    sobj->sprite.attr &= ~SP_FASTCOPY;

    sobj->pos.x = 10.0F;
    sobj->pos.y = 120.0F;

    sobj = gcAppendSObjWithSprite
    (
        gobj, (Sprite*)
        (
            (uintptr_t)rdManagerGetFileWithExternHeap
            (
                dMNCongraFileInfo[sMNCongraFighterKind].image2_file_id,
                gsMemoryAlloc(rdManagerGetFileSize(dMNCongraFileInfo[sMNCongraFighterKind].image2_file_id), 0x10)
            )
            +
            dMNCongraFileInfo[sMNCongraFighterKind].image2_offset
        )
    );
    sobj->sprite.attr &= ~SP_FASTCOPY;

    sobj->pos.x = 10.0F;
    sobj->pos.y = 10.0F;

    func_800269C0((gSceneData.spgame_score >= 1000000) ? 0x1D2 : 0x1D1);
}

// 0x80131F60
void mnCongraUpdateScene(void)
{
    func_8000A340();

    if (sMNCongraIsSceneChange != FALSE)
    {
        sMNCongraIsSceneChange = FALSE;

        func_80006E18(0x100);

        sMNCongraSceneChangeWait = 5;
    }
    if (sMNCongraSceneChangeWait != 0)
    {
        sMNCongraSceneChangeWait--;

        if (sMNCongraSceneChangeWait == 0)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = scMajor_Kind_Title;

            func_80005C74();
        }
    }
}

// 0x80131FE8
void mnCongraAddLightsDisplayList(Gfx **dl)
{
    gSPDisplayList(dl[0]++, dMNCongraDisplayList);
}

// 0x80131FE8
void mnCongraStartScene(void)
{
    u16 *subsys_arena_lo;
    u32 *congra_arena_hi;

    congra_arena_hi = (u32*)0x80325400;

    while ((uintptr_t)congra_arena_hi < 0x80400000) { *congra_arena_hi++ = 0x000000FF; } // WARNING: Newline memes!

    switch (gSceneData.scene_previous)
    {
    default:
        sMNCongraFighterKind = Ft_Kind_Mario;
        break;

    case scMajor_Kind_1PGame:
        sMNCongraFighterKind = gSceneData.ft_kind;
        break;

    case scMajor_Kind_DebugMapSel:
        sMNCongraFighterKind = gTransferBattleState.player_block[0].character_kind;
        break;
    }
    D_ovl57_80132208.unk_scdatabounds_0xC = ((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl57_80132208);
    D_ovl57_80132224.arena_size = (0x80325400 - (intptr_t)&lMNCongraArenaLo);
    func_8000683C(&D_ovl57_80132224); subsys_arena_lo = (uintptr_t)&lSubSystemArenaLo; // WARNING: Newline memes!
    while ((uintptr_t)subsys_arena_lo < 0x80400000) { *subsys_arena_lo++ = 0x0001; }
}
