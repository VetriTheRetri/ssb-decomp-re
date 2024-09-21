#include <sys/develop.h>
#include <ft/fighter.h>
#include <gm/gmsound.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <lb/reloc_data_mgr.h>
#include <sys/system_00.h>

#include "debug.h"

// Extern
extern intptr_t lOverlay15ArenaLo;  // 800D6A00
extern intptr_t lOverlay15ArenaHi;  // 80392A00
extern void gcUpdateDefault(UNUSED GObj* arg0);

extern void mnDebugMenuCreateMenu(s32, s32, s32, void*, s32);
extern mnDebugMenuDestroyMenu();

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
char* dMNDebugFallsFighterKindStrings[5] = {
	"Mario",
	"Fox",
	"Donkey",
	"Samus",
	"Luigi"
};

// 800D6738
dbMenuItem dMNDebugFallsMenuItems[13] = {
	{ dbMenuItemKindExitLabel,  mnDebugFallsExit, (char*) "Exit",                          (void*) NULL,                                     0.0F, 0.0F,     0 },
	{ dbMenuItemKindStringByte, 0,                (char*) dMNDebugFallsFighterKindStrings, (void*) &gTransferBattleState.players[0].ft_kind, 0.0F, 26.0F,    0 },
	{ dbMenuItemKindNumeric,    0,                (char*) " Dead : %3d",                   (void*) &gTransferBattleState.players[0].falls,   0.0F, 65536.0F, 0 },
	{ dbMenuItemKindNumeric,    0,                (char*) " Finish : %3d",                 (void*) &gTransferBattleState.players[0].score,   0.0F, 65536.0F, 0 },
	{ dbMenuItemKindStringByte, 0,                (char*) dMNDebugFallsFighterKindStrings, (void*) &gTransferBattleState.players[1].ft_kind, 0.0F, 26.0F,    0 },
	{ dbMenuItemKindNumeric,    0,                (char*) " Dead : %3d",                   (void*) &gTransferBattleState.players[1].falls,   0.0F, 65536.0F, 0 },
	{ dbMenuItemKindNumeric,    0,                (char*) " Finish : %3d",                 (void*) &gTransferBattleState.players[1].score,   0.0F, 65536.0F, 0 },
	{ dbMenuItemKindStringByte, 0,                (char*) dMNDebugFallsFighterKindStrings, (void*) &gTransferBattleState.players[2].ft_kind, 0.0F, 26.0F,    0 },
	{ dbMenuItemKindNumeric,    0,                (char*) " Dead : %3d",                   (void*) &gTransferBattleState.players[2].falls,   0.0F, 65536.0F, 0 },
	{ dbMenuItemKindNumeric,    0,                (char*) " Finish : %3d",                 (void*) &gTransferBattleState.players[2].score,   0.0F, 65536.0F, 0 },
	{ dbMenuItemKindStringByte, 0,                (char*) dMNDebugFallsFighterKindStrings, (void*) &gTransferBattleState.players[3].ft_kind, 0.0F, 26.0F,    0 },
	{ dbMenuItemKindNumeric,    0,                (char*) " Dead : %3d",                   (void*) &gTransferBattleState.players[3].falls,   0.0F, 65536.0F, 0 },
	{ dbMenuItemKindNumeric,    0,                (char*) " Finish : %3d",                 (void*) &gTransferBattleState.players[3].score,   0.0F, 65536.0F, 0 }
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
		mnDebugMenuCreateMenu(0x32, 0x32, 0x64, &dMNDebugFallsMenuItems, 0xD);

	if (gMNDebugFallsExitInterrupt != 0)
	{
		mnDebugMenuDestroyMenu();

		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 4;

		leoInitUnit_atten();
	}
}

// 800D6544
GObj* mnDebugFallsCreateViewport(void (*proc)(GObj*))
{
	GObj *camera_gobj = gcMakeCameraGObj(0x10000002, gcUpdateDefault, 0, 0x80000000U, func_80017DBC, 0x32, 0x00000001, -1, 1, 0, proc, 1, 0);
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
	gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0x2, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
	mnDebugFallsCreateViewport(0);
	mnDebugMenuInitMenu();
	mnDebugMenuCreateMenu(0x32, 0x32, 0x64, &dMNDebugFallsMenuItems, 0xD);
}

// 800D6688
void mnDebugFallsStartScene()
{
	D_ovl15_800D68A4.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl15_800D68A4);
	D_ovl15_800D68C0.arena_size = (u32) ((uintptr_t)&lOverlay15ArenaHi - (uintptr_t)&lOverlay15ArenaLo);
	gsGTLSceneInit(&D_ovl15_800D68C0);
}
