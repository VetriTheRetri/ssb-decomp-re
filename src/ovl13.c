
#include <db/debug.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <gm/gmsound.h>
#include <sys/error.h>
#include <sys/video.h>

// Externs
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay13ArenaLo;  // 0x80133170
extern intptr_t lOverlay13ArenaHi;  // 0x80369240

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

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x801321E0
s32 dDBCubePad0x801321E0[/* */] = { 0, 0 };

// 0x801321E8
u16 dDBCubeKirbyFaceTexture[/* */] =
{
	#include "dbcubekirbyface.txt"
};

// 0x801329E8
Vtx_t dDBCubeKirbyCubeVtxG[/* */] =
{
	{ { -50, -50, -50 }, 0, { 0, 0 }, { 0x00, 0x80, 0x00, 0xFF } },
    { { 50, -50, -50 }, 0, { 1024, 0 }, { 0x00, 0x80, 0x00, 0xFF } },
    { { 50, -50, 50 }, 0, { 1024, 1024 }, { 0x00, 0x80, 0x00, 0xFF } },
	{ { -50, -50, 50 }, 0, { 0, 1024 }, { 0x00, 0x80, 0x00, 0xFF } },
	{ { 50, 50, -50 }, 0, { 1024, 0 }, { 0x00, 0x7F, 0x00, 0xFF } },
	{ { -50, 50, -50 }, 0, { 0, 0 }, { 0x00, 0x7F, 0x00, 0xFF } },
	{ { -50, 50, 50 }, 0, { 0, 1024 }, { 0x00, 0x7F, 0x00, 0xFF } },
	{ { 50, 50, 50 }, 0, { 1024, 1024 }, { 0x00, 0x7F, 0x00, 0xFF } }
};

// 0x80132A68
Vtx_t dDBCubeKirbyCubeVtxB[/* */] =
{
	{ { -50, 50, -50 }, 0, { 1024, 0 }, { 0x00, 0x00, 0x80, 0xFF } },
	{ { 50, -50, -50 }, 0, { 0, 1024 }, { 0x00, 0x00, 0x80, 0xFF } },
	{ { -50, -50, -50 }, 0, { 0, 0 }, { 0x00, 0x00, 0x80, 0xFF } },
	{ { 50, 50, -50 }, 0, { 1024, 1024 }, { 0x00, 0x00, 0x80, 0xFF } },
	{ { -50, -50, 50 }, 0, { 0, 0 }, { 0x00, 0x00, 0x7F, 0xFF } },
	{ { 50, -50, 50 }, 0, { 0, 1024 }, { 0x00, 0x00, 0x7F, 0xFF } },
	{ { 50, 50, 50 }, 0, { 1024, 1024 }, { 0x00, 0x00, 0x7F, 0xFF } },
	{ { -50, 50, 50 }, 0, { 1024, 0 }, { 0x00, 0x00, 0x7F, 0xFF } }
};

// 0x80132AE8
Vtx_t dDBCubeKirbyCubeVtxR[/* */] =
{
	{ { -50, 50, -50 }, 0, { 1024, 0 }, { 0x80, 0x00, 0x00, 0xFF } },
	{ { -50, -50, -50 }, 0, { 0, 0 }, { 0x80, 0x00, 0x00, 0xFF } },
	{ { -50, -50, 50 }, 0, { 0, 1024 }, { 0x80, 0x00, 0x00, 0xFF } },
	{ { -50, 50, 50 }, 0, { 1024, 1024 }, { 0x80, 0x00, 0x00, 0xFF } },
	{ { 50, -50, -50 }, 0, { 0, 0 }, { 0x7F, 0x00, 0x00, 0xFF } },
	{ { 50, 50, -50 }, 0, { 1024, 0 }, { 0x7F, 0x00, 0x00, 0xFF } },
	{ { 50, 50, 50 }, 0, { 1024, 1024 }, { 0x7F, 0x00, 0x00, 0xFF } },
	{ { 50, -50, 50 }, 0, { 0, 1024 }, { 0x7F, 0x00, 0x00, 0xFF } }
};

// 0x80132B68
Gfx dDBCubeKirbyCubeDisplayList[/* */] =
{
	gsDPPipeSync(),
	gsSPLightColor(LIGHT_1, GPACK_RGBA8888(0xB3, 0xB3, 0xB3, 0x00)),
	gsSPLightColor(LIGHT_2, GPACK_RGBA8888(0x4C, 0x4C, 0x4C, 0x00)),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0,  TEXEL0, 0, SHADE, 0,  TEXEL0, 0, SHADE, 0,  TEXEL0, 0, SHADE, 0),
	gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dDBCubeKirbyFaceTexture),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 1023, 256),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
	gsSPVertex(dDBCubeKirbyCubeVtxG, ARRAY_COUNT(dDBCubeKirbyCubeVtxG), 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSPVertex(dDBCubeKirbyCubeVtxB, ARRAY_COUNT(dDBCubeKirbyCubeVtxB), 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSPVertex(dDBCubeKirbyCubeVtxR, ARRAY_COUNT(dDBCubeKirbyCubeVtxR), 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSPEndDisplayList()
};

// 0x80132C20
s32 dDBCubeUnknown0x80132C20[/* */] =
{
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
Lights1 dDBCubeLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x80132CF0
Gfx dDBCubeDisplayList[/* */] =
{
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPSetLights1(dDBCubeLights1),
	gsSPEndDisplayList()
};

// 0x80132D18
f32 dDBCubeRotateStepX = 0.5F;

// 0x80132D1C
f32 dDBCubeRotateStepY = 0.7F;

// 0x80132D20
f32 dDBCubeRotateStepZ = 0.2F;

// 0x80132D24
f32 D_ovl13_80132D24 = 0.0F;

// 0x80132D28
f32 D_ovl13_80132D28 = 0.0F;

// 0x80132D2C
s32 dDBCubeMenuValueCall = 0; // "call"

// 0x80132D30
s32 dDBCubeMenuValueFGM = 0; // "fgm"

// 0x80132D34
s32 dDBCubeMenuValueBGM = 0; // "bgm"

// 0x80132D38
s32 dDBCubeMenuValueEffect = 0; // "effect"

// 0x80132D3C
sb32 dDBCubeIsBGMInterrupt = FALSE;

// 0x80132D40
s32 dDBCubeMenuValueRumble = 0; // "rumble" (rumble_id)

// 0x80132D44
s32 dDBCubeMenuValueFrame = 0; // "frame" (duration)

// 0x80132D48
s32 gDBCubeQueuedFGM = 0;

// 0x80132D4C
alSoundEffect *dDBCubeSFX = NULL;

// 0x80132D50
s32 dDBCubeCurrentSoundID = 0;

// 0x80132D54
s32 dDBCubeCallFGMs[/* */] =
{
	nSYAudioVoicePublicityMario,
	nSYAudioVoicePublicityFox,
	nSYAudioVoicePublicityDonkey,
	nSYAudioVoicePublicitySamus,
	nSYAudioVoicePublicityLuigi,
	nSYAudioVoicePublicityLink,
	nSYAudioVoicePublicityYoshi,
	nSYAudioVoicePublicityCaptain,
	nSYAudioVoicePublicityKirby,
	nSYAudioVoicePublicityPikachu,
	nSYAudioVoicePublicityPurin,
	nSYAudioVoicePublicityNess
};

// 0x80132D84
s32 dDBCubeMenuValueTransition = 0; // transition id

// 0x80132D88
char *dDBCubeUnknown0x80132D88[/* */] =
{
	"FOO", "BAR", "BAZ", "POI", "QWE"
};

// 0x80132D9C
char *dDBCubeTransitionNames[/* */] =
{
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
dbMenuItem dDBCubeMenuItems[/* */] =
{
	{ dbMenuItemKindExitLabel,   NULL,               "Continue",                    	NULL,                       0.0F, 0.0F,    0 },
	{ dbMenuItemKindNumeric,     dbCubeStartRumble,  "rumble %3d",                      &dDBCubeMenuValueRumble,    0.0F, 10.0F,   0 },
	{ dbMenuItemKindNumeric,     dbCubeStartRumble,  "frame %4d",                       &dDBCubeMenuValueFrame,     0.0F, 8000.0F, 0 },
	{ dbMenuItemKindLabel,       dbCubeStopRumble,   "STOP RUMBLE",                     NULL,                       0.0F, 0.0F,    0 },
	{ dbMenuItemKindNumeric,     dbCubePlayCall,     "call %3d",                        &dDBCubeMenuValueCall,      0.0F, 11.0F,   0 },
	{ dbMenuItemKindNumeric,     dbCubePlayFGM,      "fgm %3d",                         &dDBCubeMenuValueFGM,       0.0F, 695.0F,  0 },
	{ dbMenuItemKindLabel,       dbCubeStopFGM,      "STOP FGM",                        NULL,                       0.0F, 0.0F,    0 },
	{ dbMenuItemKindNumeric,     dbCubePlayBGM,      "bgm %3d",                         &dDBCubeMenuValueBGM,       0.0F, 46.0F,   0 },
	{ dbMenuItemKindNumeric,     dbCubePlayBGM,      "effect %3d",                      &dDBCubeMenuValueEffect,    0.0F, 6.0F,    0 },
	{ dbMenuItemKindLabel,       dbCubeStopBGM,      "STOP BGM",                        NULL,                       0.0F, 0.0F,    0 },
	{ dbMenuItemKindString,      dbCubeDoTransition, (char*)dDBCubeTransitionNames, 	&dDBCubeMenuValueTransition,0.0F, 10.0F,   0 },
	{ dbMenuItemKindNumericByte, NULL,               "cic %3d",                         &gSCManagerCIC,             0.0F, 255.0F,  0 },
	{ dbMenuItemKindNumericByte, NULL,               "boot %3d",                        &gSCManagerBackupData.boot, 0.0F, 255.0F,  0 },
	{ dbMenuItemKindNumeric,     NULL,               "TvType %3d",                      &osTvType,                 	0.0F, 255.0F,  0 },
	{ dbMenuItemKindExitLabel,   dbCubeExit,         "Exit",                            NULL,                       0.0F, 0.0F,    0 }
};

SYVideoSetup dDBCubeVideoSetup = SYVIDEO_DEFINE_DEFAULT();

scRuntimeInfo dDBCubeTaskmanSetup =
{
	0x00000000, 0x8000A5E4, 0x8000A340, 0x80133170, 0x00000000,
	0x00000001, 0x00000002, 0x00002000, 0x00000000, 0x00000000,
	0x00000000, 0x00001000, 0x00020000, 0x00001000, 0x80131B00,
	0x80004310, 0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000088,
	0x00000000, 0x0000006C, 0x00000000, 0x00000090, 0x80131FDC
};

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80133130
s32 sDBCubePad0x80133130[2];

// 0x80133138
sb32 dDBCubeIsExitInterrupt;

// 0x8013313C
sb32 dDBCubeIsTransitionInterrupt;

// 0x80133140
LBFileNode sDBCubeStatusBuffer[5];

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void dbCubeFuncLights(Gfx **dls)
{
	gSPDisplayList(dls[0]++, dDBCubeDisplayList);
}

// 0x80131B24
void dbCubeRotateKirbyCube(GObj *cube_gobj)
{
	DObj *cube_dobj = DObjGetStruct(cube_gobj);

	while (TRUE)
	{
		cube_dobj->rotate.vec.f.x += dDBCubeRotateStepX;
		cube_dobj->rotate.vec.f.y += dDBCubeRotateStepY;
		cube_dobj->rotate.vec.f.z += dDBCubeRotateStepZ;

		gcStopCurrentGObjThread(1);
	}
}

// 0x80131BBC
void dbCubeExit(void)
{
	dDBCubeIsExitInterrupt = TRUE;
}

// 0x80131BCC - Unused?
void func_ovl13_80131BCC(void)
{
	return;
}

// 0x80131BD4
void dbCubeStartRumble(void)
{
	gmRumbleSetPlayerRumbleParams(0, dDBCubeMenuValueRumble, dDBCubeMenuValueFrame);
}

// 0x80131C04
void dbCubeStopRumble(void)
{
	gmRumbleStopRumbleID(0, dDBCubeMenuValueRumble);
}

// 0x80131C2C
void dbCubePlayFGM(void)
{
	func_80020D88(dDBCubeMenuValueFGM);
}

// 0x80131C50
void dbCubeStopFGM(void)
{
	func_80020E28();
}

// 0x80131C70
void dbCubePlayCall(void)
{
	gDBCubeQueuedFGM = dDBCubeCallFGMs[dDBCubeMenuValueCall];
}

// 0x80131C94
void dbCubeStopBGM(void)
{
	auStopSong(0);
}

// 0x80131CB4
void dbCubePlayBGM(void)
{
	auStopSong(0);
	auSetReverbType(dDBCubeMenuValueEffect);

	dDBCubeIsBGMInterrupt = TRUE;
}

// 0x80131CE8
void dbCubeDoTransition(void)
{
	dDBCubeIsExitInterrupt = TRUE;
	dDBCubeIsTransitionInterrupt = TRUE;
}

// 0x80131D00
void dbCubeCheckAudioChange(GObj *gobj)
{
	while (TRUE)
	{
		if ((dDBCubeIsBGMInterrupt != FALSE) && (func_80021048() == 0))
		{
			auPlaySong(0, dDBCubeMenuValueBGM);

			dDBCubeIsBGMInterrupt = FALSE;
		}
		if
		(
			(
				(dDBCubeSFX == NULL) 		||
				(dDBCubeSFX->sfx_id == 0) 	||
				(dDBCubeCurrentSoundID != dDBCubeSFX->sfx_id)
			)
			&&
			(
				(gDBCubeQueuedFGM != FALSE)
			)
		)
		{
			dDBCubeSFX = func_800269C0_275C0(gDBCubeQueuedFGM);

			if (dDBCubeSFX != NULL)
			{
				dDBCubeCurrentSoundID = dDBCubeSFX->sfx_id;
				gDBCubeQueuedFGM = 0;
			}
		}
		gcStopCurrentGObjThread(1);
	}
}

// 0x80131E00
void dbCubeFuncRun(GObj *gobj)
{
	if (gSYControllerMain.button_tap & START_BUTTON)
	{
		dbMenuCreateMenu(0x32, 0x32, 0x50, &dDBCubeMenuItems, 0xF);
	}
	if (gSYControllerMain.button_tap & Z_TRIG)
	{
		syErrorMakeControllerCamera(0, GOBJ_PRIORITY_DEFAULT, 0);
	}
	if (dDBCubeIsExitInterrupt != FALSE)
	{
		dbMenuDestroyMenu();

		gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
		gSCManagerSceneData.scene_curr = nSCKindTitle;

		syTaskmanSetLoadScene();
	}
}

// 0x80131EA0
GObj* dbCubeMakeModel(void (*thread)(GObj*), void *dvar)
{
	GObj *gobj = gcMakeModelGObj
	(
		0x10000000,
		gcDefaultFuncRun,
		0,
		GOBJ_PRIORITY_DEFAULT,
		gcDrawDObjDLHead0,
		0,
		GOBJ_PRIORITY_DEFAULT,
		~0,
		dvar,
		TRUE,
		nGCProcessKindThread,
		thread,
		1
	);
	return (gobj != NULL) ? gobj : NULL;
}

// 0x80131F28
GObj* dbCubeMakeCamera(void (*thread)(GObj*))
{
	GObj *camera_gobj = gcMakeCameraGObj
	(
		0x10000002,
		gcDefaultFuncRun,
		0,
		GOBJ_PRIORITY_DEFAULT,
		func_80017DBC,
		50,
		COBJ_MASK_DLLINK(0),
		~0,
		TRUE,
		nGCProcessKindThread,
		thread,
		1,
		FALSE
	);
	if (camera_gobj == NULL)
	{
		return NULL;
	}
	CObjGetStruct(camera_gobj)->vec.eye.z = 700.0F;
	CObjGetStruct(camera_gobj)->flags = COBJ_FLAG_DLBUFFERS | COBJ_FLAG_ZBUFFER;

	return camera_gobj;
}

// 0x80131FDC
void dbCubeFuncStart(void)
{
	s32 unused1[2];
	LBRelocSetup rl_setup;
	s32 unused3;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = sDBCubeStatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(sDBCubeStatusBuffer);
	rl_setup.force_status_buffer = NULL;
	rl_setup.force_status_buffer_size = 0;

	lbRelocInitSetup(&rl_setup);

	gcMakeGObjSPAfter(0, dbCubeFuncRun, 0, GOBJ_PRIORITY_DEFAULT);
	gcMakeDefaultCameraGObj
	(
		0,
		GOBJ_PRIORITY_DEFAULT,
		100,
		COBJ_FLAG_FILLCOLOR,
		GPACK_RGBA8888
		(
			mtTrigGetRandomIntRange(0x80),
			mtTrigGetRandomIntRange(0x80),
			mtTrigGetRandomIntRange(0x80),
			0xFF
		)
	);
	dbCubeMakeCamera(NULL);
	dbCubeMakeModel(dbCubeRotateKirbyCube, dDBCubeKirbyCubeDisplayList);
	lbTransitionSetupTransition();
	lbTransitionMakeCamera(0x20000002, 0, 50, COBJ_MASK_DLLINK(1));
	gcSetAnimSpeed(lbTransitionMakeTransition(dDBCubeMenuValueTransition, 0x20000000, 0, lbTransitionFuncDisplay, 1, lbTransitionProcUpdate), 0.25F);
	gmRumbleMakeActor();
	dbMenuInitMenu();
	dbCubeMakeModel(dbCubeCheckAudioChange, NULL);
}

// 0x8013214C
void dbCubeStartScene(void)
{
	dDBCubeVideoSetup.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&dDBCubeVideoSetup);

	dDBCubeTaskmanSetup.arena_size = (size_t) ((uintptr_t)&lOverlay13ArenaHi - (uintptr_t)&lOverlay13ArenaLo);

	do
	{
		dDBCubeIsExitInterrupt = 0;
		dDBCubeIsTransitionInterrupt = 0;

		syTaskmanRun(&dDBCubeTaskmanSetup);
	}
	while (dDBCubeIsTransitionInterrupt != FALSE);
}
