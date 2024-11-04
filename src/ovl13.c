
#include <sys/develop.h>
#include <gm/gmsound.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <lb/library.h>
#include <sys/video.h>

#include "debug.h"

// Externs
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay13ArenaLo;  // 0x80133170
extern intptr_t lOverlay13ArenaHi;  // 0x80369240

extern void gcDefaultFuncRun(UNUSED GObj* arg0);
extern void* func_800269C0_275C0(u16);

// ovl9
extern void dbMenuCreateMenu(s32, s32, s32, void*, s32);
extern dbMenuDestroyMenu();

// Forward declarations
void dbCubeExit();
void dbCubeDoTransition();
void dbCubeStopBGM();
void dbCubePlayBGM();
void dbCubeStopFGM();
void dbCubePlayFGM();
void dbCubePlayCall();
void dbCubeStopRumble();
void dbCubeStartRumble();


// Data
// 0x801321E0
s32 D_ovl13_801321E0[2] = { 0 };

// 0x801321E8
s32 D_ovl13_801321E8[] = {

	0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x0885677F, 0x677F677F, 0x677F677F, 0x0885677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F6F7F, 0x6F7F677F, 0x677F677F, 0x6F7F6F7F, 0x677F677F, 0x677F677F, 0x114B5F7D, 0x677F677F, 0x677F5F7D, 0x2B1B677F, 0x677F677F, 0x677F6F7F, 0x6F7F6F7F, 0x677F677F, 0x677F6F7F, 0x6F7F677F, 0x677F6F7F, 0x54FB3C3B, 0x33BB2BBB, 0x443B673F, 0x6F7F677F, 0x677F0885, 0x677F0885, 0x5F7D677F, 0x5F7D2A97, 0x677F0885, 0x677F677F, 0x677F6F7F, 0x45FB4CBB, 0x3BFB33BB, 0x33BB4C7B, 0x6F3F677F, 0x677F4CBB, 0x33FB3BFB, 0x3BFB33BB, 0x2B7B237B, 0x6F3F677F, 0x677F677F, 0x677F677F, 0x08850885, 0x0885677F, 0x677F677F, 0x677F677F, 0x677F6F3F, 0x3C7B33FB, 0x3BFB33FB, 0x33BB233B, 0x33FB677F, 0x677F4DFB, 0x457B44BB, 0x3C7B3C3B, 0x3C3B33FB, 0x66FD6F7F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F673F, 0x45FB453B, 0x44BB3C7B, 0x3C3B3BFB, 0x33FB677F, 0x677F0E7F, 0x4DFD457B, 0x453B44BB, 0x44BB663D, 0x6F7F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x0E7F45FB, 0x453B44FB, 0x44BB44BB, 0x6E3D677F, 0x677F6F7F, 0x6F3D4DFD, 0x4DFD4DFD, 0x4DFD677F, 0x677F677F, 0x5F7F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x5F7F677F, 0x677F677F, 0x677F6EFD, 0x4DFD4DFD, 0x4DFD6F7F, 0x6F3F677F, 0x677F677F, 0x6F7F6F7F, 0x6F3F6F7F, 0x6F7F677F, 0x677F3BE1, 0x08874E33, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F56F9, 0x08872AD9, 0x677F677F, 0x677F6F7F, 0x6F3F6F3F, 0x6F7F6F7F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x56F9089B, 0x0015088D, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F119D, 0x0019088F, 0x4DF3677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x336D0037, 0x0021000F, 0x4DF3677F, 0x677F677F, 0x677F677F, 0x56B908B3, 0x002D0015, 0x1995677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x08B310BF, 0x002B0015, 0x33A3677F, 0x677F677F, 0x677F677F, 0x44F5007F, 0x08B7001D, 0x08915F7D, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F56FB, 0x001D0893, 0x000B000B, 0x1153677F, 0x677F677F, 0x677F677F, 0x22A5005B, 0x084B000B, 0x000756F9, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F5635, 0x00010001, 0x00010001, 0x08895F7F, 0x677F677F, 0x677F677F, 0x118D0001, 0x00010001, 0x00014DF1, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F4DAF, 0x00010003, 0x08470001, 0x0003573D, 0x677F677F, 0x677F677F, 0x08C90001, 0x08870003, 0x000144E9, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F452D, 0x0043AD6D, 0xE7395299, 0x0001573B, 0x677F677F, 0x677F5F7F, 0x00015AD9, 0xE739A52B, 0x00033C25, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F452D, 0x52D9FFFF, 0xFFFFDF39, 0x08455F3D, 0x677F677F, 0x677F677F, 0x194DE739, 0xFFFFFFFF, 0x4A973C67, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F4DAF, 0x94E7FFFF, 0xFFFFFFFF, 0x210B5F7F, 0x677F677F, 0x677F677F, 0x52D9FFFF, 0xFFFFFFFF, 0x9D294DF1, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F339F, 0xA52BFFFF, 0xFFFFFFFF, 0x210B677F, 0x677F677F, 0x677F573B, 0x10C5AD6B, 0xF7BDFFFF, 0xADAD56FB, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F44E9, 0x4E35BDEF, 0xFFFF298F, 0x2B194DAF, 0x677F677F, 0x677F56B7, 0x22550885, 0x4A53F7BD, 0x5F3D5F7D, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x33E133DF, 0x2B194E33, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F573B, 0x335B0885, 0x56B7677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x4E330885, 0x33DF5675, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F5F7D, 0x44A72A97, 0x2255677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x5F7F3C21, 0x3C215F7D, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x44E92295, 0x56F9677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x5F7D335B, 0x3BE15F7F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x4DEF2253, 0x5633677F, 0x677F677F, 0x677F677F, 0x573B677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x56FB677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F, 0x677F677F
};

// 0x801329E8
s32 D_ovl13_801329E8[] = {

	0xFFCEFFCE,
	0xFFCE0000,
	0x00000000,
	0x008000FF,
	0x0032FFCE,
	0xFFCE0000,
	0x04000000,
	0x008000FF,
	0x0032FFCE,
	0x00320000,
	0x04000400,
	0x008000FF,
	0xFFCEFFCE,
	0x00320000,
	0x00000400,
	0x008000FF,
	0x00320032,
	0xFFCE0000,
	0x04000000,
	0x007F00FF,
	0xFFCE0032,
	0xFFCE0000,
	0x00000000,
	0x007F00FF,
	0xFFCE0032,
	0x00320000,
	0x00000400,
	0x007F00FF,
	0x00320032,
	0x00320000,
	0x04000400,
	0x007F00FF
};

// 0x80132A68
s32 D_ovl13_80132A68[] = {

	0xFFCE0032,
	0xFFCE0000,
	0x04000000,
	0x000080FF,
	0x0032FFCE,
	0xFFCE0000,
	0x00000400,
	0x000080FF,
	0xFFCEFFCE,
	0xFFCE0000,
	0x00000000,
	0x000080FF,
	0x00320032,
	0xFFCE0000,
	0x04000400,
	0x000080FF,
	0xFFCEFFCE,
	0x00320000,
	0x00000000,
	0x00007FFF,
	0x0032FFCE,
	0x00320000,
	0x00000400,
	0x00007FFF,
	0x00320032,
	0x00320000,
	0x04000400,
	0x00007FFF,
	0xFFCE0032,
	0x00320000,
	0x04000000,
	0x00007FFF
};

// 0x80132AE8
s32 D_ovl13_80132AE8[] = {

	0xFFCE0032,
	0xFFCE0000,
	0x04000000,
	0x800000FF,
	0xFFCEFFCE,
	0xFFCE0000,
	0x00000000,
	0x800000FF,
	0xFFCEFFCE,
	0x00320000,
	0x00000400,
	0x800000FF,
	0xFFCE0032,
	0x00320000,
	0x04000400,
	0x800000FF,
	0x0032FFCE,
	0xFFCE0000,
	0x00000000,
	0x7F0000FF,
	0x00320032,
	0xFFCE0000,
	0x04000000,
	0x7F0000FF,
	0x00320032,
	0x00320000,
	0x04000400,
	0x7F0000FF,
	0x0032FFCE,
	0x00320000,
	0x00000400,
	0x7F0000FF
};

// 0x80132B68
Gfx dMNDebugCubeKirbyCubeDisplayList[] = {
	gsDPPipeSync(),
	0xDB0A0000, 0xB3B3B300,
	0xDB0A0004, 0xB3B3B300,
	0xDB0A0018, 0x4C4C4C00,
	0xDB0A001C, 0x4C4C4C00,
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0,  TEXEL0, 0, SHADE, 0,  TEXEL0, 0, SHADE, 0,  TEXEL0, 0, SHADE, 0), // FC121824, FF33FFFF,
	gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON), // D7000002, FFFFFFFF,
	0xFD100000, 0x801321E8,
	0xF5100000, 0x07014050,
	0xE6000000, 0x00000000,
	0xF3000000, 0x073FF100,
	0xF5101000, 0x00094250,
	0xF2000000, 0x0007C07C,
	0x01008010, 0x801329E8,
	0x06000204, 0x00000406,
	0x06080A0C, 0x00080C0E,
	0x01008010, 0x80132A68,
	0x06000204, 0x00000602,
	0x06080A0C, 0x00080C0E,
	0x01008010, 0x80132AE8,
	0x06000204, 0x00000406,
	0x06080A0C, 0x00080C0E,
	gsSPEndDisplayList()
};

// 0x80132C20
s32 D_ovl13_80132C20[] = {
	0x00000000,
	0x3F800000,
	0x00000000,
	0xC1200000,
	0x00000000,
	0x00000000,
	0x3F800000,
	0x00000000,
	0xC1400000,
	0x00000000,
	0x3F800000,
	0xBF800000,
	0x00000000,
	0x00000001,
	0x00000003,
	0xFFFFFFFF,
	0xFFFFFFFF,
	0xBF800000,
	0x00000000,
	0x3F800000,
	0xFFFFFFFF,
	0x00000002,
	0xFFFFFFFF,
	0xFFFFFFFF,
	0x00000000,
	0x3F800000,
	0xBF800000,
	0xFFFFFFFF,
	0xFFFFFFFF,
	0x00000000,
	0xFFFFFFFF,
	0x3F800000,
	0x00000000,
	0xBF800000,
	0x00000004,
	0xFFFFFFFF,
	0xFFFFFFFF,
	0xFFFFFFFF,
	0x00000000,
	0xBF800000,
	0x3F800000,
	0xFFFFFFFF,
	0xFFFFFFFF,
	0xFFFFFFFF,
	0x00000001,
	0x00000000
};

// 0x80132CD8
Lights1 dMNDebugCubeLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x80132CF0
Gfx dMNDebugCubeDisplayList[] =
{
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPSetLights1(dMNDebugCubeLights1),
	gsSPEndDisplayList()
};

// 0x80132D18
f32 dMNDebugCubeRotateVelX = 0.5F;

// 0x80132D1C
f32 dMNDebugCubeRotateVelY = 0.7F;

// 0x80132D20
f32 dMNDebugCubeRotateVelZ = 0.2F;

// 0x80132D24
f32 D_ovl13_80132D24 = 0.0F;
// 0x80132D28
f32 D_ovl13_80132D28 = 0.0F;

// 0x80132D2C
s32 gMNDebugCubeMenuValueCall = 0; // "call"

// 0x80132D30
s32 gMNDebugCubeMenuValueFGM = 0; // "fgm"

// 0x80132D34
s32 gMNDebugCubeMenuValueBGM = 0; // "bgm"

// 0x80132D38
s32 gMNDebugCubeMenuValueEffect = 0; // "effect"

// 0x80132D3C
s32 gMNDebugCubeBGMInterrupt = 0;

// 0x80132D40
s32 gMNDebugCubeMenuValueRumble = 0; // "rumble" (rumble_id)

// 0x80132D44
s32 gMNDebugCubeMenuValueFrame = 0; // "frame" (duration)

// 0x80132D48
s32 gMNDebugCubeQueuedFGM = 0;

// 0x80132D4C
alSoundEffect* gMNDebugCubeSFX = NULL;

// 0x80132D50
s32 gMNDebugCubeCurrentSFX = 0;

// 0x80132D54
s32 dMNDebugCubeCallFGMs[12] = {

	0x0261, 0x025D, 0x025B, 0x0265,
	0x0260, 0x025F, 0x0266, 0x025C,
	0x025E, 0x0263, 0x0264, 0x0262
};

// 0x80132D84
s32 gMNDebugCubeMenuValueTransition = 0; // transition id

// 0x80132D88
char* D_ovl13_80132D88[] = {

	"FOO", "BAR", "BAZ", "POI", "QWE"
};

// 0x80132D9C
char* dMNDebugCubeTransitionStrings[11] = {

	"Aeroplane",
	"Check",
	"Gakubuthi",
	"Kannon",
	"Star",
	"Sudare1",
	"Sudare2",
	"Camera",
	"Block",
	"RotScale",
	"Curtain"
};

// 0x80132DC8
dbMenuItem dMNDebugCubeMenuItems[15] = {

	{ dbMenuItemKindExitLabel,   0,                       "Continue",                            0,                                0.0F, 0.0F,    0 },
	{ dbMenuItemKindNumeric,     dbCubeStartRumble,  "rumble %3d",                          &gMNDebugCubeMenuValueRumble,     0.0F, 10.0F,   0 },
	{ dbMenuItemKindNumeric,     dbCubeStartRumble,  "frame %4d",                           &gMNDebugCubeMenuValueFrame,      0.0F, 8000.0F, 0 },
	{ dbMenuItemKindLabel,       dbCubeStopRumble,   "STOP RUMBLE",                         0,                                0.0F, 0.0F,    0 },
	{ dbMenuItemKindNumeric,     dbCubePlayCall,     "call %3d",                            &gMNDebugCubeMenuValueCall,       0.0F, 11.0F,   0 },
	{ dbMenuItemKindNumeric,     dbCubePlayFGM,      "fgm %3d",                             &gMNDebugCubeMenuValueFGM,        0.0F, 695.0F,  0 },
	{ dbMenuItemKindLabel,       dbCubeStopFGM,      "STOP FGM",                            0,                                0.0F, 0.0F,    0 },
	{ dbMenuItemKindNumeric,     dbCubePlayBGM,      "bgm %3d",                             &gMNDebugCubeMenuValueBGM,        0.0F, 46.0F,   0 },
	{ dbMenuItemKindNumeric,     dbCubePlayBGM,      "effect %3d",                          &gMNDebugCubeMenuValueEffect,     0.0F, 6.0F,    0 },
	{ dbMenuItemKindLabel,       dbCubeStopBGM,      "STOP BGM",                            0,                                0.0F, 0.0F,    0 },
	{ dbMenuItemKindString,      dbCubeDoTransition, (char*) dMNDebugCubeTransitionStrings, &gMNDebugCubeMenuValueTransition, 0.0F, 10.0F,   0 },
	{ dbMenuItemKindNumericByte, 0,                       "cic %3d",                             0x800A50EC,                       0.0F, 255.0F,  0 },
	{ dbMenuItemKindNumericByte, 0,                       "boot %3d",                            0x800A4AC3,                       0.0F, 255.0F,  0 },
	{ dbMenuItemKindNumeric,     0,                       "TvType %3d",                          0x80000300,                       0.0F, 255.0F,  0 },
	{ dbMenuItemKindExitLabel,   dbCubeExit,         "Exit",                                0,                                0.0F, 0.0F,    0 }
};

SYVideoSetup D_ovl13_80132F6C = {

	0x80392A00,
	0x803B6900,
	0x803DA800,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99
};
scRuntimeInfo D_ovl13_80132F88 = {

	0x00000000, 0x8000A5E4, 0x8000A340, 0x80133170, 0x00000000,
	0x00000001, 0x00000002, 0x00002000, 0x00000000, 0x00000000,
	0x00000000, 0x00001000, 0x00020000, 0x00001000, 0x80131B00,
	0x80004310, 0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000088,
	0x00000000, 0x0000006C, 0x00000000, 0x00000090, 0x80131FDC
};

// BSS
// 0x80133130
s32 D_ovl13_80133130[2];

// 0x80133138
s32 dMNDebugCubeExitInterrupt;

// 0x8013313C
s32 dMNDebugCubeTransitionInterrupt;

// 0x80133140
u32 D_ovl13_80133140[5];


// 0x80131B00
void dbCubeSetLighting(Gfx **display_list)
{
	gSPDisplayList(display_list[0]++, dMNDebugCubeDisplayList);
}

// 0x80131B24
void dbCubeRotateKirbyCube(GObj* cube_gobj)
{
	DObj* cube_dobj = DObjGetStruct(cube_gobj);

	while (TRUE)
	{
		cube_dobj->rotate.vec.f.x += dMNDebugCubeRotateVelX;
		cube_dobj->rotate.vec.f.y += dMNDebugCubeRotateVelY;
		cube_dobj->rotate.vec.f.z += dMNDebugCubeRotateVelZ;

		gcStopCurrentGObjThread(1);
	}
}

// 0x80131BBC
void dbCubeExit()
{
	dMNDebugCubeExitInterrupt = 1;
}

// 0x80131BCC - Unused?
void func_ovl13_80131BCC()
{
	return;
}

// 0x80131BD4
void dbCubeStartRumble()
{
	gmRumbleSetPlayerRumbleParams(0, gMNDebugCubeMenuValueRumble, gMNDebugCubeMenuValueFrame);
}

// 0x80131C04
void dbCubeStopRumble()
{
	gmRumbleSetRumbleID(0, gMNDebugCubeMenuValueRumble);
}

// 0x80131C2C
void dbCubePlayFGM()
{
	func_80020D88(gMNDebugCubeMenuValueFGM);
}

// 0x80131C50
void dbCubeStopFGM()
{
	func_80020E28();
}

// 0x80131C70
void dbCubePlayCall()
{
	gMNDebugCubeQueuedFGM = dMNDebugCubeCallFGMs[gMNDebugCubeMenuValueCall];
}

// 0x80131C94
void dbCubeStopBGM()
{
	auStopSong(0);
}

// 0x80131CB4
void dbCubePlayBGM()
{
	auStopSong(0);
	auSetReverbType(gMNDebugCubeMenuValueEffect);

	gMNDebugCubeBGMInterrupt = 1;
}

// 0x80131CE8
void dbCubeDoTransition()
{
	dMNDebugCubeExitInterrupt = 1;
	dMNDebugCubeTransitionInterrupt = 1;
}

// 0x80131D00
void dbCubeCheckAudioChange(s32 arg0)
{
	while (TRUE)
	{
		if ((gMNDebugCubeBGMInterrupt != 0) && (func_80021048() == 0))
		{
			auPlaySong(0, gMNDebugCubeMenuValueBGM);

			gMNDebugCubeBGMInterrupt = 0;
		}

		if
		(
			(
				(gMNDebugCubeSFX == NULL) ||
				(gMNDebugCubeSFX->sfx_id == 0) ||
				(gMNDebugCubeCurrentSFX != gMNDebugCubeSFX->sfx_id)
			) &&
			(
				(gMNDebugCubeQueuedFGM != 0)
			)
		)
		{
			gMNDebugCubeSFX = func_800269C0_275C0(gMNDebugCubeQueuedFGM);

			if (gMNDebugCubeSFX != NULL)
			{
				gMNDebugCubeCurrentSFX = gMNDebugCubeSFX->sfx_id;
				gMNDebugCubeQueuedFGM = 0;
			}
		}

		gcStopCurrentGObjThread(1);
	}
}

// 0x80131E00
void dbCubeMain(GObj* arg0)
{
	if (gSysController.button_tap & START_BUTTON)
		dbMenuCreateMenu(0x32, 0x32, 0x50, &dMNDebugCubeMenuItems, 0xF);

	if (gSysController.button_tap & Z_TRIG)
		syErrorMakeControllerCamera(0, 0x80000000, 0);

	if (dMNDebugCubeExitInterrupt != 0)
	{
		dbMenuDestroyMenu();

		gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
		gSCManagerSceneData.scene_curr = 1U;

		syTaskmanSetLoadScene();
	}
}

// 0x80131EA0
GObj* dbCubeCreateGObj(void* ptr, void* dvar)
{
	GObj* gobj = gcMakeModelGObj(0x10000000, gcDefaultFuncRun, 0, 0x80000000, gcDrawDObjDLHead0, 0, 0x80000000, -1, dvar, 1, 0, ptr, 1);

	return (gobj != NULL) ? gobj : NULL;
}

// 0x80131F28
GObj* dbCubeCreateViewport(void (*proc)(GObj*))
{
	GObj *camera_gobj = gcMakeCameraGObj(0x10000002, gcDefaultFuncRun, 0, 0x80000000U, func_80017DBC, 0x32, 0x00000001, -1, 1, 0, proc, 1, 0);

	if (camera_gobj == NULL)
		return NULL;

	CObjGetStruct(camera_gobj)->vec.eye.z = 700.0f;
	CObjGetStruct(camera_gobj)->flags = 5;

	return camera_gobj;
}

// 0x80131FDC
void dbCubeInit()
{
	s32 unused1;
	s32 unused2;
	LBRelocSetup rl_setup;
	s32 unused3;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = (LBFileNode*) &D_ovl13_80133140;
	rl_setup.status_buffer_size = 5;
	rl_setup.force_status_buffer = 0;
	rl_setup.force_status_buffer_size = 0;
	lbRelocInitSetup(&rl_setup);

	gcMakeGObjSPAfter(0, dbCubeMain, 0, 0x80000000);
	gcMakeDefaultCameraGObj
	(
		0,
		GOBJ_PRIORITY_DEFAULT,
		100,
		0x2,
		GPACK_RGBA8888
		(
			mtTrigGetRandomIntRange(0x80),
			mtTrigGetRandomIntRange(0x80),
			mtTrigGetRandomIntRange(0x80),
			0xFF
		)
	);
	dbCubeCreateViewport(0);
	dbCubeCreateGObj(dbCubeRotateKirbyCube, &dMNDebugCubeKirbyCubeDisplayList);
	lbTransitionSetupTransition();
	lbTransitionMakeCamera(0x20000002, 0, 0x32, 0x00000002);
	gcSetAnimSpeed(lbTransitionMakeTransition(gMNDebugCubeMenuValueTransition, 0x20000000, 0, lbTransitionFuncDisplay, 1, lbTransitionProcUpdate), 0.25F);
	gmRumbleMakeActor();
	dbMenuInitMenu();
	dbCubeCreateGObj(dbCubeCheckAudioChange, NULL);
}

// 0x8013214C
void dbCubeStartScene()
{
	D_ovl13_80132F6C.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&D_ovl13_80132F6C);
	D_ovl13_80132F88.arena_size = (u32) ((uintptr_t)&lOverlay13ArenaHi - (uintptr_t)&lOverlay13ArenaLo);

	do
	{
		dMNDebugCubeExitInterrupt = 0;
		dMNDebugCubeTransitionInterrupt = 0;
		syTaskmanRun(&D_ovl13_80132F88);
	}
	while (dMNDebugCubeTransitionInterrupt != 0);
}
