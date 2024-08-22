#include <sys/develop.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <ovl0/reloc_data_mgr.h>
#include <sys/system_00.h>
#include <sys/thread6.h>

// Externs
extern intptr_t D_NF_800A5240;      // 800A5240
extern intptr_t lOverlay12ArenaLo;  // 800D69F0
extern intptr_t lOverlay12ArenaHi;  // 80369240
extern scBattleState D_800A4B18;
// ovl9
extern sb32 D_ovl9_80371420;
extern void func_ovl9_80369D78(s32, s32, s32, void*, s32);
extern void func_ovl9_80369EC0();

// DATA

// 800D6680
sb32 dMNDebugStageSelectInterrupt = FALSE;

// 800D6684
s32 dMNDebugStageSelectGrKind = 0;

// 800D6688
uintptr_t D_ovl12_800D6688[] = {

	0x800D6810, 0x800D6818,
	0x800D681C, 0x800D6824,
	0x800D682C, 0x800D6834,
	0x800D683C, 0x800D6844,
	0x800D684C, 0x800D6858,
	0x800D6860, 0x800D6864,
	0x800D686C, 0x800D6874,
	0x800D687C, 0x800D6884,
	0x800D688C, 0x800D6894,
	0x800D68A0, 0x800D68AC,
	0x800D68BC, 0x800D68C8,
	0x800D68D4, 0x800D68E0,
	0x800D68EC, 0x800D68FC,
	0x800D6908, 0x800D6918,
	0x800D6924, 0x800D6930,
	0x800D693C, 0x800D6948,
	0x800D6958, 0x800D6964,
	0x800D6970, 0x800D697C,
	0x800D6988, 0x800D6998,
	0x800D69A4, 0x800D69B4,
	0x800D69C0
};

// 800D672C
uintptr_t D_ovl12_800D672C[] = {

	0x00000000,
	0x800D6490,
	0x800D69CC,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000003,
	0x00000000,
	0x800D6688,
	0x800D6684,
	0x00000000,
	0x42200000,
	0x00000000
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
void mnDebugStageSelectTriggerInterrupt()
{
	const char* text0 = "Mario";
	const char* text1 = "Fox";
	const char* text2 = "Donkey";
	const char* text3 = "Samus";
	const char* text4 = "Link";
	const char* text5 = "Yoshi";
	const char* text6 = "Kirby";
	const char* text7 = "Pikacyu";
	const char* text8 = "OldMario";
	const char* text9 = "Small";
	const char* text10 = "New";
	const char* text11 = "Explain";
	const char* text12 = "SYoshi";
	const char* text13 = "Metal";
	const char* text14 = "Zako";
	const char* text15 = "Bonus3";
	const char* text16 = "Boss";
	const char* text17 = "Bonus1Mario";
	const char* text18 = "Bonus1Fox";
	const char* text19 = "Bonus1Donkey";
	const char* text20 = "Bonus1Samus";
	const char* text21 = "Bonus1Luigi";
	const char* text22 = "Bonus1Link";
	const char* text23 = "Bonus1Yoshi";
	const char* text24 = "Bonus1Captain";
	const char* text25 = "Bonus1Kirby";
	const char* text26 = "Bonus1Pikachu";
	const char* text27 = "Bonus1Purin";
	const char* text28 = "Bonus1Nes";
	const char* text29 = "Bonus2Mario";
	const char* text30 = "Bonus2Fox";
	const char* text31 = "Bonus2Donkey";
	const char* text32 = "Bonus2Samus";
	const char* text33 = "Bonus2Luigi";
	const char* text34 = "Bonus2Link";
	const char* text35 = "Bonus2Yoshi";
	const char* text36 = "Bonus2Captain";
	const char* text37 = "Bonus2Kirby";
	const char* text38 = "Bonus2Pikachu";
	const char* text39 = "Bonus2Purin";
	const char* text40 = "Bonus2Nes";
	const char* text41 = "Exit";
	dMNDebugStageSelectInterrupt = TRUE;
}

// 800D64A0
void mnDebugStageSelectMain(GObj* arg0)
{
	if (gSysController.button_tap & START_BUTTON)
	{
		if (D_ovl9_80371420)
			mnDebugStageSelectTriggerInterrupt();
		else
			func_ovl9_80369D78(0x32, 0x32, 0x64, D_ovl12_800D672C, 2);
	}

	if (dMNDebugStageSelectInterrupt)
	{
		func_ovl9_80369EC0();

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
void mnDebugStageSelectInit()
{
	gcMakeGObjSPAfter(0, mnDebugStageSelectMain, 0, 0x80000000);
	func_8000B9FC(0, 0x80000000, 0x64, 2, 0xFF);
	func_ovl9_80369EE0();
	func_ovl9_80369D78(0x32, 0x32, 0x64, D_ovl12_800D672C, 2);
}

// 800D6620
void mnDebugStageSelectStartScene()
{
	D_ovl12_800D6764.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl12_800D6764);
	D_ovl12_800D6780.arena_size = (u32) ((uintptr_t)&lOverlay12ArenaHi - (uintptr_t)&lOverlay12ArenaLo);
	gsGTLSceneInit(&D_ovl12_800D6780);
}
