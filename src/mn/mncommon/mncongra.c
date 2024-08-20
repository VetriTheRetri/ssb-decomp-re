#include <ft/fighter.h>
#include <mn/menu.h>
#include <sc/scene.h> // includes sys/obj.h
#include <sys/system_00.h>
#include <sys/thread6.h>
#include <ovl0/reloc_data_mgr.h>

extern void func_ovl0_800CD2CC(GObj*);
extern void func_ovl0_800CCF00(GObj*);
extern GObj* func_8000B93C(u32, void*, s32, u32, void*, s32, s64, s32, s32, s32, s32, s32, s32);
extern void func_80007080(void*, f32, f32, f32, f32);
extern void* func_800269C0_275C0(u16);

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern uintptr_t lMNCongraKirbyBottomFileID;	// 0x000000AA
extern uintptr_t lMNCongraKirbyTopFileID;		// 0x000000AB
extern uintptr_t lMNCongraYoshiBottomFileID;	// 0x000000AC
extern uintptr_t lMNCongraYoshiTopFileID;		// 0x000000AD
extern uintptr_t lMNCongraPikachuBottomFileID;	// 0x000000AE
extern uintptr_t lMNCongraPikachuTopFileID;		// 0x000000AF
extern uintptr_t lMNCongraSamusBottomFileID;	// 0x000000B0
extern uintptr_t lMNCongraSamusTopFileID;		// 0x000000B1
extern uintptr_t lMNCongraLinkBottomFileID;		// 0x000000B2
extern uintptr_t lMNCongraLinkTopFileID;		// 0x000000B3
extern uintptr_t lMNCongraPurinBottomFileID;	// 0x000000B4
extern uintptr_t lMNCongraPurinTopFileID;		// 0x000000B5
extern uintptr_t lMNCongraCaptainBottomFileID;	// 0x000000B6
extern uintptr_t lMNCongraCaptainTopFileID;		// 0x000000B7
extern uintptr_t lMNCongraDonkeyBottomFileID;	// 0x000000B8
extern uintptr_t lMNCongraDonkeyTopFileID;		// 0x000000B9
extern uintptr_t lMNCongraMarioBottomFileID;	// 0x000000BA
extern uintptr_t lMNCongraMarioTopFileID;		// 0x000000BB
extern uintptr_t lMNCongraLuigiBottomFileID;	// 0x000000BC
extern uintptr_t lMNCongraLuigiTopFileID;		// 0x000000BD
extern uintptr_t lMNCongraFoxBottomFileID;		// 0x000000BE
extern uintptr_t lMNCongraFoxTopFileID;			// 0x000000BF
extern uintptr_t lMNCongraNessBottomFileID;		// 0x000000C0
extern uintptr_t lMNCongraNessTopFileID;		// 0x000000C1

extern intptr_t lMNCongraKirbyBottomSprite;		// 0x00020718
extern intptr_t lMNCongraKirbyTopSprite;		// 0x00020718
extern intptr_t lMNCongraYoshiBottomSprite;		// 0x00020718
extern intptr_t lMNCongraYoshiTopSprite;		// 0x00020718
extern intptr_t lMNCongraPikachuBottomSprite;	// 0x00020718
extern intptr_t lMNCongraPikachuTopSprite;		// 0x00020718
extern intptr_t lMNCongraSamusBottomSprite;		// 0x00020718
extern intptr_t lMNCongraSamusTopSprite;		// 0x00020718
extern intptr_t lMNCongraLinkBottomSprite;		// 0x00020718
extern intptr_t lMNCongraLinkTopSprite;			// 0x00020718
extern intptr_t lMNCongraPurinBottomSprite;		// 0x00020718
extern intptr_t lMNCongraPurinTopSprite;		// 0x00020718
extern intptr_t lMNCongraCaptainBottomSprite;	// 0x00020718
extern intptr_t lMNCongraCaptainTopSprite;		// 0x00020718
extern intptr_t lMNCongraDonkeyBottomSprite;	// 0x00020718
extern intptr_t lMNCongraDonkeyTopSprite;		// 0x00020718
extern intptr_t lMNCongraMarioBottomSprite;		// 0x00020718
extern intptr_t lMNCongraMarioTopSprite;		// 0x00020718
extern intptr_t lMNCongraLuigiBottomSprite;		// 0x00020718
extern intptr_t lMNCongraLuigiTopSprite;		// 0x00020718
extern intptr_t lMNCongraFoxBottomSprite;		// 0x00020718
extern intptr_t lMNCongraFoxTopSprite;			// 0x00020718
extern intptr_t lMNCongraNessBottomSprite;		// 0x00020718
extern intptr_t lMNCongraNessTopSprite;			// 0x00020718

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x801322B0
s32 sMNCongraPad0x801322B0[2];

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
Unk800D4060 D_ovl57_801321C0 = { 0xFF };

// 0x801321C4
Unk800D4060 D_ovl57_801321C4 = { 0 };

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
	Unk800D4060 sp2C;

	if (sMNCongraSkipWait != 0)
		sMNCongraSkipWait--;

	if
	(
		(sMNCongraSkipWait == 0) 		&& 
		(sMNCongraIsProceed == FALSE) 	&& 
		(mnCongraGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
	)
	{
		sMNCongraIsProceed = TRUE;
		sp2C = D_ovl57_801321C0;
		func_ovl0_800D4060(0x3FD, 0xD, 0xA, &sp2C, 0x5A, 0, &sMNCongraIsSceneChange);
	}
}

// 0x80131CA4
void mnCongraProcStart(void)
{
	rdSetup rd_setup;
	Camera *cam;
	GObj *gobj;
	SObj *sobj;

	sMNCongraSkipWait = 8;
	sMNCongraSceneChangeWait = 0;
	sMNCongraIsProceed = FALSE;
	sMNCongraIsSceneChange = 0;

	rd_setup.table_addr = (uintptr_t)&lRDManagerTableAddr;
	rd_setup.table_files_num = (uintptr_t)&lRDManagerTableFilesNum;
	rd_setup.file_heap = 0;
	rd_setup.file_heap_size = 0;
	rd_setup.status_buf = sMNCongraStatusBuf;
	rd_setup.status_buf_size = ARRAY_COUNT(sMNCongraStatusBuf);
	rd_setup.force_buf = NULL;
	rd_setup.force_buf_size = 0;

	rdManagerInitSetup(&rd_setup);

	gcMakeGObjSPAfter(0, mnCongraActorProcRun, 0, GOBJ_LINKORDER_DEFAULT);
	func_8000B9FC(0, 0x80000000, 0x64, 2, 0xFF);

	cam = CameraGetStruct
	(
		func_8000B93C
		(
			nOMObjCommonKindWallpaperCamera,
			NULL,
			nOMObjCommonLinkIDCamera,
			GOBJ_LINKORDER_DEFAULT,
			func_ovl0_800CD2CC,
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

	gcAddGObjDisplay(gobj, func_ovl0_800CCF00, 0, GOBJ_DLLINKORDER_DEFAULT, -1);

	sobj = gcAppendSObjWithSprite
	(
		gobj,
		gcGetDataFromFile
		(
			Sprite*,
			rdManagerGetFileWithExternHeap
			(
				dMNCongraPictures[sMNCongraFighterKind].bottom_file_id,
				gsMemoryAlloc
				(
					rdManagerGetFileSize
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

	sobj = gcAppendSObjWithSprite
	(
		gobj,
		gcGetDataFromFile
		(
			Sprite*,
			rdManagerGetFileWithExternHeap
			(
				dMNCongraPictures[sMNCongraFighterKind].top_file_id,
				gsMemoryAlloc
				(
					rdManagerGetFileSize
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
