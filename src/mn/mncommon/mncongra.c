#include <ft/fighter.h>
#include <mn/menu.h>
#include <sc/scene.h> // includes sys/obj.h
#include <sys/system_00.h>
#include <sys/thread6.h>
#include <lb/library.h>

extern void func_80007080(void*, f32, f32, f32, f32);
extern void* func_800269C0_275C0(u16);

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x801322B0
s32 sMNCongraPad0x801322B0[2];

// 0x801322B8
lbFileNode sMNCongraStatusBuf[5];

// 0x801322E0
s32 sMNCongraFighterKind;

// 0x801322E4
s32 sMNCongraSkipWait;

// 0x801322E8
s32 sMNCongraSceneChangeWait;

// 0x801322EC
sb32 sMNCongraIsProceed;

// 0x801322F0
sb32 sMNCongraIsProceedScene;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80132100
mnCongraPicture dMNCongraPictures[/* */] =
{
	// Mario
	{ 
		&lMNCongraMarioBottomFileID, 	&lMNCongraMarioBottomSprite, 
		&lMNCongraMarioTopFileID, 	 	&lMNCongraMarioTopSprite 
	},

	// Fox
	{ 
		&lMNCongraFoxBottomFileID,		&lMNCongraFoxBottomSprite,
		&lMNCongraFoxTopFileID,    		&lMNCongraFoxTopSprite
	},

	// Donkey Kong
	{ 
		&lMNCongraDonkeyBottomFileID, 	&lMNCongraDonkeyBottomSprite,
		&lMNCongraDonkeyTopFileID, 	  	&lMNCongraDonkeyTopSprite
	},

	// Samus
	{ 
		&lMNCongraSamusBottomFileID, 	&lMNCongraSamusBottomSprite,
		&lMNCongraSamusTopFileID, 	 	&lMNCongraSamusTopSprite
	},

	// Luigi
	{ 
		&lMNCongraLuigiBottomFileID, 	&lMNCongraLuigiBottomSprite,
		&lMNCongraLuigiTopFileID, 		&lMNCongraLuigiTopSprite
	},

	// Link
	{
		&lMNCongraLinkBottomFileID, 	&lMNCongraLinkBottomSprite,
		&lMNCongraLinkTopFileID, 		&lMNCongraLinkTopSprite
	},

	// Yoshi
	{
		&lMNCongraYoshiBottomFileID, 	&lMNCongraYoshiBottomSprite,
		&lMNCongraYoshiTopFileID, 		&lMNCongraYoshiTopSprite
	},

	// Captain Falcon
	{ 
		&lMNCongraCaptainBottomFileID, 	&lMNCongraCaptainBottomSprite,
		&lMNCongraCaptainTopFileID, 	&lMNCongraCaptainTopSprite
	},

	// Kirby
	{
		&lMNCongraKirbyBottomFileID, 	&lMNCongraKirbyBottomSprite,
		&lMNCongraKirbyTopFileID, 		&lMNCongraKirbyTopSprite
	},

	// Pikachu
	{
		&lMNCongraPikachuBottomFileID,	&lMNCongraPikachuBottomSprite,
		&lMNCongraPikachuTopFileID, 	&lMNCongraPikachuTopSprite
	},

	// Jigglypuff
	{
		&lMNCongraPurinBottomFileID, 	&lMNCongraPurinBottomSprite,
		&lMNCongraPurinTopFileID, 		&lMNCongraPurinTopSprite
	},

	// Ness
	{
		&lMNCongraNessBottomFileID, 	&lMNCongraNessBottomSprite,
		&lMNCongraNessTopFileID, 		&lMNCongraNessTopSprite
	}
};

// 0x801321C0
syColorRGBA dMNCongraFadeColor = { 0x00, 0x00, 0x00, 0xFF };

// 0x801321C4
syColorRGBA D_ovl57_801321C4 = { 0x00, 0x00, 0x00, 0x00 };

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
syDisplaySetup dMNCongraDisplaySetup =
{
	SYDISPLAY_DEFINE_FRAMEBUF_ADDR(320, 230, 0, 10, u32, 0),
	SYDISPLAY_DEFINE_FRAMEBUF_ADDR(320, 230, 0, 10, u32, 1),
	SYDISPLAY_DEFINE_FRAMEBUF_ADDR(320, 230, 0, 10, u32, 2),
	NULL,
	320,
	240, 
	0x15AA9
};

// 0x80132224
scRuntimeInfo dMNCongraGtlSetup =
{
	0x00000000,
	func_8000A5E4,
	mnCongraUpdateScene,
	&ovl57_BSS_END,
	0x00000000,
	0x00000001,
	0x00000002,
	0x00002800,
	0x00002800,
	0x00000000,
	0x00000000,
	0x00002800,
	0x00020000,
	0x0000c000,
	mnCongraProcLights,
	0x80004310,
	0x00000000,
	0x00000600,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000088,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000088,
	0x00000000,
	0x0000006c,
	0x00000000,
	0x00000090,
	mnCongraProcStart
};

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
s32 mnCongraGetPlayerTapButtons(u32 buttons)
{
	s32 player;

	for (player = 0; player < ARRAY_COUNT(gPlayerControllers); player++)
	{
		if
		(
			(mnCongraCheckPlayerControllerConnected(player) != FALSE) &&
			(gPlayerControllers[player].button_tap & buttons)
		)
		{
			return player + 1;
		}
	}
	return 0;
}

// 0x80131C04
void mnCongraActorProcRun(GObj *gobj)
{
	syColorRGBA color;

	if (sMNCongraSkipWait != 0)
	{
		sMNCongraSkipWait--;
	}
	if
	(
		(sMNCongraSkipWait == 0) 		&& 
		(sMNCongraIsProceed == FALSE) 	&& 
		(mnCongraGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
	)
	{
		sMNCongraIsProceed = TRUE;
		color = dMNCongraFadeColor;
		lbFadeMakeActor(nOMObjCommonKindTransition, nOMObjCommonLinkIDTransition, 10, &color, 90, FALSE, &sMNCongraIsProceedScene);
	}
}

// 0x80131CA4
void mnCongraProcStart(void)
{
	lbRelocSetup rl_setup;
	Camera *cam;
	GObj *gobj;
	SObj *sobj;

	sMNCongraSkipWait = 8;
	sMNCongraSceneChangeWait = 0;
	sMNCongraIsProceed = FALSE;
	sMNCongraIsProceedScene = 0;

	rl_setup.table_addr = &lLBRelocTableAddr;
	rl_setup.table_files_num = &lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buf = sMNCongraStatusBuf;
	rl_setup.status_buf_size = ARRAY_COUNT(sMNCongraStatusBuf);
	rl_setup.force_buf = NULL;
	rl_setup.force_buf_size = 0;

	lbRelocInitSetup(&rl_setup);

	gcMakeGObjSPAfter(0, mnCongraActorProcRun, 0, GOBJ_LINKORDER_DEFAULT);
	gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0x2, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));

	cam = CameraGetStruct
	(
		gcMakeCameraGObj
		(
			nOMObjCommonKindWallpaperCamera,
			NULL,
			nOMObjCommonLinkIDCamera,
			GOBJ_LINKORDER_DEFAULT,
			lbCommonScissorSpriteCamera,
			80,
			CAMERA_MASK_DLLINK(0),
			-1,
			0,
			1,
			NULL,
			1,
			0
		)
	);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	gobj = gcMakeGObjSPAfter(nOMObjCommonKindWallpaper, NULL, nOMObjCommonLinkIDWallpaper, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);

	sobj = lbCommonMakeSObjForGObj
	(
		gobj,
		lbGetDataFromFile
		(
			Sprite*,
			lbRelocGetFileExternHeap
			(
				dMNCongraPictures[sMNCongraFighterKind].bottom_file_id,
				gsMemoryAlloc
				(
					lbRelocGetFileSize
					(
						dMNCongraPictures[sMNCongraFighterKind].bottom_file_id
					),
					0x10
				)
			),
			dMNCongraPictures[sMNCongraFighterKind].bottom_offset
		)
	);
	sobj->sprite.attr &= ~SP_FASTCOPY;

	sobj->pos.x = 10.0F;
	sobj->pos.y = 120.0F;

	sobj = lbCommonMakeSObjForGObj
	(
		gobj,
		lbGetDataFromFile
		(
			Sprite*,
			lbRelocGetFileExternHeap
			(
				dMNCongraPictures[sMNCongraFighterKind].top_file_id,
				gsMemoryAlloc
				(
					lbRelocGetFileSize
					(
						dMNCongraPictures[sMNCongraFighterKind].top_file_id
					),
					0x10
				)
			),
			dMNCongraPictures[sMNCongraFighterKind].top_offset
		)
	);
	sobj->sprite.attr &= ~SP_FASTCOPY;

	sobj->pos.x = 10.0F;
	sobj->pos.y = 10.0F;

	func_800269C0_275C0
	(
		(gSceneData.spgame_score >= 1000000) ? 
			nSYAudioVoiceAnnounceIncredible  : 
			nSYAudioVoiceAnnounceCongra
	);
}

// 0x80131F60
void mnCongraUpdateScene(void)
{
	func_8000A340();

	if (sMNCongraIsProceedScene != FALSE)
	{
		sMNCongraIsProceedScene = FALSE;

		func_80006E18(0x100);

		sMNCongraSceneChangeWait = 5;
	}
	if (sMNCongraSceneChangeWait != 0)
	{
		sMNCongraSceneChangeWait--;

		if (sMNCongraSceneChangeWait == 0)
		{
			gSceneData.scene_previous = gSceneData.scene_current;
			gSceneData.scene_current = nSCKindTitle;

			leoInitUnit_atten();
		}
	}
}

// 0x80131FE8
void mnCongraProcLights(Gfx **dls)
{
	gSPDisplayList(dls[0]++, dMNCongraDisplayList);
}

// 0x8013200C
void mnCongraStartScene(void)
{
	u16 *subsys_arena_lo;
	u32 *congra_arena_hi;

	congra_arena_hi = (u32*)SYDISPLAY_DEFINE_FRAMEBUF_ADDR(320, 230, 0, 10, u32, 0);

	while ((uintptr_t)congra_arena_hi < 0x80400000) { *congra_arena_hi++ = GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF); } // WARNING: Newline memes!

	switch (gSceneData.scene_previous)
	{
	default:
		sMNCongraFighterKind = nFTKindMario;
		break;

	case nSCKind1PGame:
		sMNCongraFighterKind = gSceneData.ft_kind;
		break;

	case nSCKindDebugChrSel:
		sMNCongraFighterKind = gTransferBattleState.players[0].ft_kind;
		break;
	}
	dMNCongraDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&dMNCongraDisplaySetup);

	dMNCongraGtlSetup.arena_size = (size_t) (SYDISPLAY_DEFINE_FRAMEBUF_ADDR(320, 230, 0, 10, u32, 0) - (uintptr_t)&ovl57_BSS_END);
	gsGTLSceneInit(&dMNCongraGtlSetup); subsys_arena_lo = gSCSubsysFramebuffer0; // WARNING: Newline memes!
	while ((uintptr_t)subsys_arena_lo < 0x80400000) { *subsys_arena_lo++ = GPACK_RGBA5551(0x00, 0x00, 0x00, 0x01); }
}
