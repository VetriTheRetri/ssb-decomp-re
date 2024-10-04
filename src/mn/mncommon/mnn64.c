#include <mn/menu.h>
#include <sc/scene.h> // includes sys/obj.h
#include <sys/system_00.h>
#include <lb/library.h>


extern void func_80007080(void*, f32, f32, f32, f32);

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern uintptr_t D_NF_000000C2;
extern intptr_t lMNN64LogoSprite;			// 0x000073C0

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80132040
s32 sMNN64Pad0x80132040[2];

// 0x80132048
lbFileNode sMNN64StatusBuffer[5];

// 0x80132070 - Delay frames before N64 logo can be skipped
s32 sMNN64SkipAllowWait;

// 0x80132074 - if TRUE, proceed to the opening movie
sb32 sMNN64IsProceedOpening;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80131F50
syColorRGBA dMNN64EndFadeColor = { 0x00, 0x00, 0x00, 0xFF };

// 0x80131F54
syColorRGBA dMNN64StartFadeColor = { 0x00, 0x00, 0x00, 0x00 };

// 0x80131F58
Lights1 dMNN64Lights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x0A, 0x32, 0x32);

// 0x80131F70
Gfx dMNN64DisplayList[/* */] =
{
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPSetLights1(dMNN64Lights1),
	gsSPEndDisplayList()
};

// 0x80131F98
syDisplaySetup dMNN64DisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x80131FB4
scRuntimeInfo dMNN64TasklogSetup =
{
	0x00000000,
	func_8000A5E4,
	func_8000A340,
	&ovl58_BSS_END,
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
	mnN64ProcLights,
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
	mnN64ProcStart
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mnN64LogoThreadUpdate(GObj *gobj)
{
	f32 step;
	s32 i;
	SObj *sobj;
	syColorRGBA color;

	sobj = SObjGetStruct(gobj);

	i = 0;

	while (i < 16)
	{
		step = 16 - i;
		sobj->pos.y = 65.0F - ((-(38.75F / 64.0F) * step) * step);

		gcStopCurrentGObjThread(1);
		
		i++;
	}
	sobj->pos.y = 65.0F;

	i = 0;

	while (i < 24)
	{
		gcStopCurrentGObjThread(1);
		i++;
	}
	color = dMNN64EndFadeColor;

	lbFadeMakeActor(nOMObjCommonKindTransition, nOMObjCommonLinkIDTransition, 10, &color, 10, FALSE, NULL);

	i = 0;

	while (i < 13)
	{
		gcStopCurrentGObjThread(1);
		i++;
	}
	sMNN64IsProceedOpening = TRUE;

	while (TRUE)
	{
		gcStopCurrentGObjThread(1);
	}
}

// 0x80131C20
void mnN64ActorProcRun(GObj *gobj)
{
	if (sMNN64SkipAllowWait != 0)
	{
		sMNN64SkipAllowWait--;
	}
	if ((sMNN64SkipAllowWait == 0) && (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE))
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = nSCKindTitle;
		syTasklogSetLoadScene();
	}
	else if (sMNN64IsProceedOpening != FALSE)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = nSCKindOpeningRoom;
		syTasklogSetLoadScene();
	}
}

// 0x80131CB8
void mnN64ProcStart(void)
{
	lbRelocSetup rl_setup;
	Camera *cam;
	GObj *gobj;
	SObj *sobj;
	Sprite *sprite;
	syColorRGBA color;

	sMNN64SkipAllowWait = 8;
	sMNN64IsProceedOpening = FALSE;

	rl_setup.table_addr = &lLBRelocTableAddr;
	rl_setup.table_files_num = &lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = sMNN64StatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(sMNN64StatusBuffer);
	rl_setup.force_status_buffer = NULL;
	rl_setup.force_status_buffer_size = 0;

	lbRelocInitSetup(&rl_setup);

	gcMakeGObjSPAfter(0, mnN64ActorProcRun, 0, GOBJ_LINKORDER_DEFAULT);
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

	gcAddGObjProcess(gobj, mnN64LogoThreadUpdate, nOMObjProcessKindThread, 1);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0, GOBJ_DLLINKORDER_DEFAULT, -1);

	sprite = lbGetDataFromFile
	(
		Sprite*,
		lbRelocGetFileExternHeap
		(
			&D_NF_000000C2,
			syTasklogMalloc
			(
				lbRelocGetFileSize
				(
					&D_NF_000000C2
				),
				0x10
			)
		),
		&lMNN64LogoSprite
	);
	sobj = lbCommonMakeSObjForGObj(gobj, sprite);

	sobj->sprite.attr &= ~SP_FASTCOPY;

	sobj->pos.x = 96.0F;
	sobj->pos.y = 220.0F;

	color = dMNN64StartFadeColor;

	lbFadeMakeActor(nOMObjCommonKindTransition, nOMObjCommonLinkIDTransition, 10, &color, 16, TRUE, NULL);
}

// 0x80131ECC
void mnN64ProcLights(Gfx **dls)
{
	gSPDisplayList(dls[0]++, dMNN64DisplayList);
}

// 0x80131EF0
void mnN64StartScene(void)
{
	auStopBGM();
	
	dMNN64DisplaySetup.zbuffer = syDisplayGetZBuffer(6400);
	syDisplayInit(&dMNN64DisplaySetup);

	dMNN64TasklogSetup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl58_BSS_END);
	syTasklogInit(&dMNN64TasklogSetup);
}
