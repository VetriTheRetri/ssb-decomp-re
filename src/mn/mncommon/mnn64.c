#include <mn/menu.h>
#include <sc/scene.h> // includes sys/obj.h
#include <sys/system_00.h>
#include <ovl0/reloc_data_mgr.h>

extern void func_ovl0_800CD2CC(GObj*);
extern void func_ovl0_800CCF00();
extern GObj* func_8000B93C(u32, void*, s32, u32, void*, s32, s64, s32, s32, s32, s32, s32, s32);
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
rdFileNode sMNN64StatusBuf[5];

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
Unk800D4060 D_ovl58_80131F50 = { 0xFF };

// 0x80131F54
Unk800D4060 D_ovl58_80131F54 = { 0 };

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
scRuntimeInfo dMNN64GtlSetup =
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
	Unk800D4060 sp50;

	sobj = SObjGetStruct(gobj);

	i = 0;

	while (i < 16)
	{
		step = 16 - i;
		sobj->pos.y = 65.0F - ((-(38.75F / 64.0F) * step) * step);

		gcStopCurrentProcess(1);
		
		i++;
	}
	sobj->pos.y = 65.0F;

	i = 0;

	while (i < 24)
	{
		gcStopCurrentProcess(1);
		i++;
	}
	sp50 = D_ovl58_80131F50;

	func_ovl0_800D4060(0x3FD, 0xD, 0xA, &sp50, 0xA, 0, 0);

	i = 0;

	while (i < 13)
	{
		gcStopCurrentProcess(1);
		i++;
	}
	sMNN64IsProceedOpening = TRUE;

	while (TRUE)
	{
		gcStopCurrentProcess(1);
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
		leoInitUnit_atten();
	}
	else if (sMNN64IsProceedOpening != FALSE)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = nSCKindOpeningRoom;
		leoInitUnit_atten();
	}
}

// 0x80131CB8
void mnN64ProcStart(void)
{
	rdSetup rd_setup;
	Camera *cam;
	GObj *gobj;
	SObj *sobj;
	Sprite *sprite;
	Unk800D4060 sp4C;

	sMNN64SkipAllowWait = 8;
	sMNN64IsProceedOpening = FALSE;

	rd_setup.table_addr = (uintptr_t)&lRDManagerTableAddr;
	rd_setup.table_files_num = (uintptr_t)&lRDManagerTableFilesNum;
	rd_setup.file_heap = NULL;
	rd_setup.file_heap_size = 0;
	rd_setup.status_buf = sMNN64StatusBuf;
	rd_setup.status_buf_size = ARRAY_COUNT(sMNN64StatusBuf);
	rd_setup.force_buf = NULL;
	rd_setup.force_buf_size = 0;

	rdManagerInitSetup(&rd_setup);

	gcMakeGObjSPAfter(0, mnN64ActorProcRun, 0, GOBJ_LINKORDER_DEFAULT);
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

	gcAddGObjProcess(gobj, mnN64LogoThreadUpdate, nOMObjProcessKindThread, 1);
	gcAddGObjDisplay(gobj, func_ovl0_800CCF00, 0, GOBJ_DLLINKORDER_DEFAULT, -1);

	sprite = gcGetDataFromFile
	(
		Sprite*,
		rdManagerGetFileWithExternHeap
		(
			&D_NF_000000C2,
			gsMemoryAlloc
			(
				rdManagerGetFileSize
				(
					&D_NF_000000C2
				),
				0x10
			)
		),
		&lMNN64LogoSprite
	);
	sobj = gcAppendSObjWithSprite(gobj, sprite);

	sobj->sprite.attr &= ~SP_FASTCOPY;

	sobj->pos.x = 96.0F;
	sobj->pos.y = 220.0F;

	sp4C = D_ovl58_80131F54;

	func_ovl0_800D4060(0x3FD, 0xD, 0xA, &sp4C, 0x10, 1, 0);
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
	func_80007024(&dMNN64DisplaySetup);

	dMNN64GtlSetup.arena_size = (size_t) ((uintptr_t)&ovl1_TEXT_START - (uintptr_t)&ovl58_BSS_END);
	gsGTLSceneInit(&dMNN64GtlSetup);
}
