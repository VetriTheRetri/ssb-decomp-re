#ifndef _RESULTS_H_
#define _RESULTS_H_

#include <ssb_types.h>
#include <sys/objdraw.h>

// EXTERN

extern intptr_t FILE_041_LINK_CAMERA_PARAMS_OFFSET; // 0xC0
extern intptr_t D_NF_800A5240;      // 800A5240
extern intptr_t lOverlay40ArenaHi;  // 803903E0
extern intptr_t lOverlay40ArenaLo;  // 8018E5E0
extern u32 gFTManagerAnimHeapSize;			// 80130D9C
extern f32 gMPCollisionLightAngleX;          // 80131390
extern f32 gMPCollisionLightAngleY;          // 80131394

extern void ftRenderLightsDrawReflect(Gfx**, f32, f32);
extern void func_8000FA3C(void*, void*, f32);
extern GObj* func_8000B93C(u32, void*, s32, u32, void*, s32, s64, s32, s32, s32, s32, s32, s32);
extern void ftManagerSetupFilesAllKind(s32);
extern void func_80007080(void*, f32, f32, f32, f32);
extern func_ovl0_800CCF00();
extern func_ovl0_800CD2CC();
extern func_80010580();

// DATA

// 8018E070
CameraVec7 dMvOpeningLinkCameraSettingsStart = {
	{ -800.0, 180.0, 800.0 },
	{ 0.0, 180.0, 0.0 },
	0.0
};

// 8018E08C
CameraVec7 dMvOpeningLinkCameraSettingsEnd = {
	{ 200.0, 0.0, 400.0 },
	{ 0.0, 240.0, 0.0 },
	0.4
};

// 8018E0A8
ftExplainCommand dMvOpeningLinkInputSeq[/* */] =
{
    FTEXPLAIN_EVENT_BUTTON(L_TRIG, 1),             // 0x1001, 0x0020
    FTEXPLAIN_EVENT_END()                          // 0x0000
};

rdFileID D_ovl40_8018E0B0[2] = {0x00000025, 0x00000041};

// 8018E0B8
intptr_t dMvOpeningLinkNameOffsets[5] = {
	0x00003358, 0x000026b8,
	0x00003e88, 0x00002f98, 0x00000000
};

// 8018E0CC
f32 dMvOpeningLinkNameCharXPositions[4] = {
	0.0, 30.0, 45.0, 80.0
};

// 8018E0DC
scUnkDataBounds D_ovl40_8018E0DC = {
	0x80392a00,
	0x803b6900, 0x803da800, 0x00000000,
	0x00000140,
	0x000000f0, 0x00016a99
};

// 8018E0F8
scRuntimeInfo D_ovl40_8018E0F8 = {
	0x00000000, 0x8000a5e4,
	0x800a26b8, 0x8018e5e0, 0x00000000, 0x00000001,
	0x00000002, 0x00004000, 0x00002000, 0x00000000,
	0x00000000, 0x00008000, 0x00020000, 0x0000c000,
	0x8018dfcc, 0x80004310, 0x00000000, 0x00000600,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000088, 0x00000000, 0x800d5cac, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000088,
	0x00000000, 0x0000006c, 0x00000000, 0x00000090,
	0x8018de48
};

// BSS

s32 unused8018E1C0;
s32 unused8018E1C4;
s32 gMvOpeningLinkFramesElapsed; // 8018E1C8
GObj* gMvOpeningLinkNameGObj; // 8018E1CC
GObj* gMvOpeningLinkStageFighterGObj; // 8018E1D0
s32 unused8018E1D4;
GObj* gMvOpeningLinkStageCameraGObj; // 8018E1D8
void* gMvOpeningLinkAnimHeap; // 8018E1DC
f32 gMvOpeningLinkPosedFighterXSpeed; // 8018E1E0
s32 unused8018E1E4;
CameraVec7 dMvOpeningLinkCameraSettingsAdjustedStart; // 8018E1E8
CameraVec7 dMvOpeningLinkCameraSettingsAdjustedEnd; // 8018E208
rdFileNode D_ovl40_8018E228[48];
rdFileNode D_ovl40_8018E3A8[7];
uintptr_t gMvOpeningLinkFilesArray[2]; // 8018E3E0[2]
gmBattleState gMvOpeningLinkBattleState; // 8018E3E8

#endif