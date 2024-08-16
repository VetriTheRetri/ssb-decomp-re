#include <sys/develop.h>
#include <ft/fighter.h>
#include <gm/gmsound.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <ovl0/reloc_data_mgr.h>
#include <sys/system_00.h>

#include "ovl15.h"

// Extern
      // 800A5240
extern intptr_t lOverlay15ArenaLo;  // 800D6A00
extern intptr_t lOverlay15ArenaHi;  // 80392A00
extern void func_8000B1C4();
extern GObj* func_8000B93C(u32, void*, s32, u32, void*, s32, s64, s32, s32, s32, s32, s32, s32);
// ovl9
extern void func_ovl9_80369D78(s32, s32, s32, void*, s32);
extern func_ovl9_80369EC0();

// Forward declarations
void mnDebugFallsExit();

// Data

// 800D66E0
Lights1 dMNDebugFallsLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 800D66F8
Gfx dMNDebugFallsDisplayList[] =
{
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPSetLights1(dMNDebugFallsLights1),
	gsSPEndDisplayList()
};

// 800D6720
s32 gMNDebugFallsExitInterrupt = 0;

// 800D6724
// UB: Menu expects 27 like in debug-battle.c but here only 5 are defined
char (*dMNDebugFallsFighterKindStrings[5])[] = {
	"Mario",
	"Fox",
	"Donkey",
	"Samus",
	"Luigi"
};

// 800D6738
dbMenuItem dMNDebugFallsMenuItems[13] = {
	{ dbMenuItemKindExitLabel,      mnDebugFallsExit,   "Exit",                  0,                                                      0.0F, 0.0F,     0 },
	{ dbMenuItemKindStringByte,     0,                  dMNDebugFallsFighterKindStrings,    &gTransferBattleState.players[0].ft_kind,   0.0F, 26.0F,    0 },
	{ dbMenuItemKindNumeric,        0,                  " Dead : %3d",                  &gTransferBattleState.players[0].falls,            0.0F, 65536.0F, 0 },
	{ dbMenuItemKindNumeric,        0,                  " Finish : %3d",                &gTransferBattleState.players[0].score,            0.0F, 65536.0F, 0 },
	{ dbMenuItemKindStringByte,     0,                  dMNDebugFallsFighterKindStrings,    &gTransferBattleState.players[1].ft_kind,   0.0F, 26.0F,    0 },
	{ dbMenuItemKindNumeric,        0,                  " Dead : %3d",                  &gTransferBattleState.players[1].falls,            0.0F, 65536.0F, 0 },
	{ dbMenuItemKindNumeric,        0,                  " Finish : %3d",                &gTransferBattleState.players[1].score,            0.0F, 65536.0F, 0 },
	{ dbMenuItemKindStringByte,     0,                  dMNDebugFallsFighterKindStrings,    &gTransferBattleState.players[2].ft_kind,   0.0F, 26.0F,    0 },
	{ dbMenuItemKindNumeric,        0,                  " Dead : %3d",                  &gTransferBattleState.players[2].falls,            0.0F, 65536.0F, 0 },
	{ dbMenuItemKindNumeric,        0,                  " Finish : %3d",                &gTransferBattleState.players[2].score,            0.0F, 65536.0F, 0 },
	{ dbMenuItemKindStringByte,     0,                  dMNDebugFallsFighterKindStrings,    &gTransferBattleState.players[3].ft_kind,   0.0F, 26.0F,    0 },
	{ dbMenuItemKindNumeric,        0,                  " Dead : %3d",                  &gTransferBattleState.players[3].falls,            0.0F, 65536.0F, 0 },
	{ dbMenuItemKindNumeric,        0,                  " Finish : %3d",                &gTransferBattleState.players[3].score,            0.0F, 65536.0F, 0 }
};

// 800D68A4
syDisplaySetup D_ovl15_800D68A4 = { 0x80392A00, 0x803B6900, 0x803DA800, 0, 0x00140, 0x00F0, 0x00016a99 };

// 800D68C0
scRuntimeInfo D_ovl15_800D68C0 = {
	0x00000000, 0x8000a5e4, 0x8000a340, 0x800d6a00,
	0x00000000, 0x00000001, 0x00000002, 0x00004000,
	0x00000000, 0x00000000, 0x00000000, 0x00008000,
	0x00020000, 0x0000c000, 0x800d6490, 0x80004310,
	0x00000008, 0x00000600, 0x00000008, 0x00000000,
	0x00000020, 0x00000020, 0x00000088, 0x00000100,
	0x00000000, 0x00000000, 0x00000400, 0x00000000,
	0x00000100, 0x00000088, 0x00000007, 0x0000006c,
	0x00000008, 0x00000090, 0x800d660c
};


// 800D6490
void mnDebugFallsSetLighting(Gfx **display_list)
{
	gSPDisplayList(display_list[0]++, dMNDebugFallsDisplayList);
}

// 800D64B4
void mnDebugFallsExit()
{
	gMNDebugFallsExitInterrupt = 1;
}

// 800D64C4
void mnDebugFallsMain(GObj* arg0)
{
	u8 temp_t0;

	if (gSysController.button_tap & START_BUTTON)
		func_ovl9_80369D78(0x32, 0x32, 0x64, &dMNDebugFallsMenuItems, 0xD);

	if (gMNDebugFallsExitInterrupt != 0)
	{
		func_ovl9_80369EC0();

		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 4;

		leoInitUnit_atten();
	}
}

// 800D6544
GObj* mnDebugFallsCreateViewport(void (*proc)(GObj*))
{
	GObj *camera_gobj = func_8000B93C(0x10000002, func_8000B1C4, 0, 0x80000000U, func_80017DBC, 0x32, 0x00000001, -1, 1, 0, proc, 1, 0);
	Camera *cam;

	if (camera_gobj == NULL)
		return NULL;

	cam = CameraGetStruct(camera_gobj);
	cam->flags = 5;
	cam->vec.at.y = 300.0f;
	cam->vec.eye.z = 3000.0f;
	cam->vec.eye.y = 600.0f;

	return camera_gobj;
}

// 800D660C
void mnDebugFallsInit()
{
	gcMakeGObjSPAfter(0, mnDebugFallsMain, 0, 0x80000000);
	func_8000B9FC(0, 0x80000000, 0x64, 2, 0xFF);
	mnDebugFallsCreateViewport(0);
	func_ovl9_80369EE0();
	func_ovl9_80369D78(0x32, 0x32, 0x64, &dMNDebugFallsMenuItems, 0xD);
}

// 800D6688
void mnDebugFallsStartScene()
{
	D_ovl15_800D68A4.zbuffer = (uintptr_t)((uintptr_t)&scmanager_BSS_END - 6400);
	func_80007024(&D_ovl15_800D68A4);
	D_ovl15_800D68C0.arena_size = (u32) ((uintptr_t)&lOverlay15ArenaHi - (uintptr_t)&lOverlay15ArenaLo);
	gsGTLSceneInit(&D_ovl15_800D68C0);
}
