#include <sys/develop.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <lb/library.h>
#include <sys/system_00.h>
#include <sys/thread6.h>

#include "debug.h"

// Externs
extern intptr_t D_NF_800A5240;      // 800A5240
extern intptr_t lOverlay12ArenaLo;  // 800D69F0
extern intptr_t lOverlay12ArenaHi;  // 80369240
extern scBattleState D_800A4B18;
// ovl9
extern sb32 gMNDebugMenuIsMenuOpen;
extern void dbMenuCreateMenu(s32, s32, s32, dbMenuItem*, s32);
extern void dbMenuDestroyMenu();

// Forward declarations
void dbStageSelectTriggerInterrupt();

// DATA
// 800D6680
sb32 dMNDebugStageSelectInterrupt = FALSE;

// 800D6684
s32 dMNDebugStageSelectGrKind = 0;

// 800D6688
char* D_ovl12_800D6688[] = {

	"Mario",
	"Fox",
	"Donkey",
	"Samus",
	"Link",
	"Yoshi",
	"Kirby",
	"Pikacyu",
	"OldMario",
	"Small",
	"New",
	"Explain",
	"SYoshi",
	"Metal",
	"Zako",
	"Bonus3",
	"Boss",
	"Bonus1Mario",
	"Bonus1Fox",
	"Bonus1Donkey",
	"Bonus1Samus",
	"Bonus1Luigi",
	"Bonus1Link",
	"Bonus1Yoshi",
	"Bonus1Captain",
	"Bonus1Kirby",
	"Bonus1Pikachu",
	"Bonus1Purin",
	"Bonus1Nes",
	"Bonus2Mario",
	"Bonus2Fox",
	"Bonus2Donkey",
	"Bonus2Samus",
	"Bonus2Luigi",
	"Bonus2Link",
	"Bonus2Yoshi",
	"Bonus2Captain",
	"Bonus2Kirby",
	"Bonus2Pikachu",
	"Bonus2Purin",
	"Bonus2Nes"
};

// 800D672C
dbMenuItem dMNDebugStageSelectMenuItems[] = {
	{
		dbMenuItemKindExitLabel,
		dbStageSelectTriggerInterrupt,
		"Exit",
		0,
		0.0f,
		0.0f,
		0.0f
	},
	{
		dbMenuItemKindString,
		NULL,
		(char*) D_ovl12_800D6688,
		&dMNDebugStageSelectGrKind,
		0.0f,
		40.0f,
		0.0f
	}
};

// 800D6764
syDisplaySetup D_ovl12_800D6764 = {

	0x80392A00,
	0x803B6900,
	0x803DA800,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99
};

// 800D6780
scRuntimeInfo D_ovl12_800D6780 = {

	0x00000000,
	0x8000A5E4,
	0x8000A340,
	0x800D69F0,
	0x00000000,
	0x00000001,
	0x00000001,
	0x000036B0,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00001000,
	0x00020000,
	0x00001000,
	0x00000000,
	0x80004310,
	0x00000008,
	0x00000600,
	0x00000008,
	0x00000000,
	0x00000020,
	0x00000040,
	0x00000088,
	0x00000100,
	0x00000000,
	0x00000000,
	0x00000020,
	0x00000010,
	0x00000040,
	0x00000088,
	0x00000007,
	0x0000006C,
	0x00000008,
	0x00000090,
	0x800D65AC
};


// 800D6490
void dbStageSelectTriggerInterrupt()
{
	dMNDebugStageSelectInterrupt = TRUE;
}

// 800D64A0
void dbStageSelectMain(GObj* arg0)
{
	if (gSysController.button_tap & START_BUTTON)
	{
		if (gMNDebugMenuIsMenuOpen)
			dbStageSelectTriggerInterrupt();
		else
			dbMenuCreateMenu(0x32, 0x32, 0x64, dMNDebugStageSelectMenuItems, ARRAY_COUNT(dMNDebugStageSelectMenuItems));
	}

	if (dMNDebugStageSelectInterrupt)
	{
		dbMenuDestroyMenu();

		gSceneData.gr_kind = dMNDebugStageSelectGrKind;
		gSceneData.scene_previous = gSceneData.scene_current;

		if (gSceneData.gr_kind >= nGRKindBonusGameStart)
		{
			D_800A4B18 = gTransferBattleState;
			D_800A4B18.gr_kind = gSceneData.gr_kind;
			gSceneData.scene_current = nSCKind1PBonusGame;
		}
		else
			gSceneData.scene_current = nSCKindVSBattle;

		leoInitUnit_atten();
	}
}

// 800D65AC
void dbStageSelectInit()
{
	gcMakeGObjSPAfter(0, dbStageSelectMain, 0, 0x80000000);
	gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0x2, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
	dbMenuInitMenu();
	dbMenuCreateMenu(0x32, 0x32, 0x64, dMNDebugStageSelectMenuItems, ARRAY_COUNT(dMNDebugStageSelectMenuItems));
}

// 800D6620
void dbStageSelectStartScene()
{
	D_ovl12_800D6764.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl12_800D6764);
	D_ovl12_800D6780.arena_size = (u32) ((uintptr_t)&lOverlay12ArenaHi - (uintptr_t)&lOverlay12ArenaLo);
	gsGTLSceneInit(&D_ovl12_800D6780);
}