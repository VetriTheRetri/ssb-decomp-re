#include <sys/develop.h>
#include <ft/fighter.h>
#include <gm/gmsound.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <debug-falls.h>

// ?
extern void func_8000B1C4();

// ovl9
extern void func_ovl9_80369D78(s32, s32, s32, void*, s32);
extern func_ovl9_80369EC0();

// ovl15 stuff

// 0x800D66E0
extern Lights1 dMNDebugFallsLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x800D66F8
extern Gfx dMNDebugFallsDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMNDebugFallsLights1),
    gsSPEndDisplayList()
};

// 0x800D6720
extern s32 gMNDebugFallsExitInterrupt;

// 0x800D6724
// UB: Menu expects 27 like in debug-battle.c but here only 5 are defined
extern char (*dMNDebugFallsFighterKindStrings[5])[] = {
    dMNDebugBattleMario,
    dMNDebugBattleFox,
    dMNDebugBattleDonkey,
    dMNDebugBattleSamus,
    dMNDebugBattleLuigi
};

// 0x800D6738
extern dbMenuItem dMNDebugFallsMenuItems[15] = {
    { dbMenuItemKindExitLabel,      mnDebugFallsExit,   dMNDebugFallsExit,                  0,                                                      0.0F, 0.0F,     0 },
    { dbMenuItemKindStringByte,     0,                  dMNDebugFallsFighterKindStrings,    &gTransferBattleState.player_block[0].character_kind,   0.0F, 26.0F,    0 },
    { dbMenuItemKindNumeric,        0,                  dMNDebugFallsDead,                  &gTransferBattleState.player_block[0].falls,            0.0F, 65536.0F, 0 },
    { dbMenuItemKindNumeric,        0,                  dMNDebugFallsFinish,                &gTransferBattleState.player_block[0].score,            0.0F, 65536.0F, 0 },
    { dbMenuItemKindStringByte,     0,                  dMNDebugFallsFighterKindStrings,    &gTransferBattleState.player_block[1].character_kind,   0.0F, 26.0F,    0 },
    { dbMenuItemKindNumeric,        0,                  dMNDebugFallsDead,                  &gTransferBattleState.player_block[1].falls,            0.0F, 65536.0F, 0 },
    { dbMenuItemKindNumeric,        0,                  dMNDebugFallsFinish,                &gTransferBattleState.player_block[1].score,            0.0F, 65536.0F, 0 },
    { dbMenuItemKindStringByte,     0,                  dMNDebugFallsFighterKindStrings,    &gTransferBattleState.player_block[2].character_kind,   0.0F, 26.0F,    0 },
    { dbMenuItemKindNumeric,        0,                  dMNDebugFallsDead,                  &gTransferBattleState.player_block[2].falls,            0.0F, 65536.0F, 0 },
    { dbMenuItemKindNumeric,        0,                  dMNDebugFallsFinish,                &gTransferBattleState.player_block[2].score,            0.0F, 65536.0F, 0 },
    { dbMenuItemKindStringByte,     0,                  dMNDebugFallsFighterKindStrings,    &gTransferBattleState.player_block[3].character_kind,   0.0F, 26.0F,    0 },
    { dbMenuItemKindNumeric,        0,                  dMNDebugFallsDead,                  &gTransferBattleState.player_block[3].falls,            0.0F, 65536.0F, 0 },
    { dbMenuItemKindNumeric,        0,                  dMNDebugFallsFinish,                &gTransferBattleState.player_block[3].score,            0.0F, 65536.0F, 0 }
};

extern scUnkDataBounds D_ovl15_800D68A4;
extern scRuntimeInfo D_ovl15_800D68C0;

// 0x800D6950
extern char dMNDebugBattleMario[] = "Mario";

// 0x800D6958
extern char dMNDebugBattleFox[] = "Fox";

// 0x800D695C
extern char dMNDebugBattleDonkey[] = "Donkey";

// 0x800D6964
extern char dMNDebugBattleSamus[] = "Samus";

// 0x800D696C
extern char dMNDebugBattleLuigi[] = "Luigi";

// 0x800D6974
extern char dMNDebugFallsExit[] = "Exit";

// 0x800D697C
extern char dMNDebugFallsDead[] = " Dead : %3d";

// 0x800D6988
extern char dMNDebugFallsFinish[] = " Finish : %3d";

// 0x800D6490
void mnDebugFallsSetLighting(Gfx **display_list)
{
    gSPDisplayList(display_list[0]++, dMNDebugFallsDisplayList);
}

// 0x800D64B4
void mnDebugFallsExit()
{
    gMNDebugFallsExitInterrupt = 1;
}

// 0x800D64C4
void mnDebugFallsMain(GObj* arg0)
{
    u8 temp_t0;

    if (gSysController.button_new & START_BUTTON)
    {
        func_ovl9_80369D78(0x32, 0x32, 0x64, &dMNDebugFallsMenuItems, 0xD);
    }

    if (gMNDebugFallsExitInterrupt != 0)
    {
        func_ovl9_80369EC0();

        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = 4;

        func_80005C74();
    }
}

// 0x800D6544
GObj* mnDebugFallsCreateViewport(void (*proc)(GObj*))
{
    GObj *camera_gobj = func_8000B93C(0x10000002, func_8000B1C4, 0, 0x80000000U, func_80017DBC, 0x32, 0x00000001, -1, 1, 0, proc, 1, 0);
    Camera *cam;

    if (camera_gobj == NULL)
    {
        return NULL;
    }

    cam = CameraGetStruct(camera_gobj);
    cam->flags = 5;
    cam->vec.at.y = 300.0f;
    cam->vec.eye.z = 3000.0f;
    cam->vec.eye.y = 600.0f;

    return camera_gobj;
}

// 0x800D660C
void mnDebugFallsInit()
{
    omMakeGObjSPAfter(0, mnDebugFallsMain, 0, 0x80000000);
    func_8000B9FC(0, 0x80000000, 0x64, 2, 0xFF);
    mnDebugFallsCreateViewport(0);
    func_ovl9_80369EE0();
    func_ovl9_80369D78(0x32, 0x32, 0x64, &dMNDebugFallsMenuItems, 0xD);
}

// 0x800D6688
void mnDebugFallsStartScene()
{
    D_ovl15_800D68A4.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl15_800D68A4);
    D_ovl15_800D68C0.arena_size = (u32) ((uintptr_t)&lOverlay15ArenaHi - (uintptr_t)&lOverlay15ArenaLo);
    gsGTLSceneInit(&D_ovl15_800D68C0);
}
