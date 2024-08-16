#include <mn/menu.h>
#include <sc/scene.h> // includes sys/obj.h
#include <sys/system_00.h>
#include <ovl0/reloc_data_mgr.h>

extern intptr_t D_NF_800A5240;
extern intptr_t D_NF_000000C2;
extern intptr_t D_NF_000073C0;
extern intptr_t lMNN64ArenaLo;          // 80132080
extern uintptr_t lMNN64ArenaHi;         // 803903E0
extern void func_ovl0_800CD2CC(GObj*);
extern void func_ovl0_800CCF00();
extern GObj* func_8000B93C(u32, void*, s32, u32, void*, s32, s64, s32, s32, s32, s32, s32, s32);
extern void func_80007080(void*, f32, f32, f32, f32);

// BSS
// 80132040
u32 D_ovl58_80132040;

// 80132044
u32 D_ovl58_80132044;

// 80132048
rdFileNode sMNN64StatusBuf[5];

// 80132070 - Delay frames before N64 logo can be skipped
s32 sMNN64SkipAllowWait;

// 80132074 - if TRUE, proceed to the opening movie
sb32 sMNN64IsProceedOpening;


// DATA
// 80131F50
Unk800D4060 D_ovl58_80131F50 = { 0xff };

// 80131F54
Unk800D4060 D_ovl58_80131F54 = { 0 };

// 80131F58
Lights1 dMNN64Lights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x0A, 0x32, 0x32);

// 80131F70
Gfx dMNN64DisplayList[] =
{
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPSetLights1(dMNN64Lights1),
	gsSPEndDisplayList()
};

// 80131F98
syDisplaySetup D_ovl58_80131F98 = {
	0x80392a00, 0x803b6900,
	0x803da800, 0x00000000, 0x00000140, 0x000000f0,
	0x00016a99
};

// 80131FB4
scRuntimeInfo D_ovl58_80131FB4 = {
	0x00000000, 0x8000a5e4, 0x8000a340,
	0x80132080, 0x00000000, 0x00000001, 0x00000002,
	0x00002800, 0x00002800, 0x00000000, 0x00000000,
	0x00002800, 0x00020000, 0x0000c000, 0x80131ecc,
	0x80004310, 0x00000000, 0x00000600, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000088,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x0000006c, 0x00000000, 0x00000090, 0x80131cb8
};


// 80131B00
void mnN64LogoProcUpdate(GObj *gobj)
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
		gcStopCurrentProcess(1);
}

// 80131C20
void mnN64ActorProcUpdate(GObj *gobj)
{
	if (sMNN64SkipAllowWait != 0)
		sMNN64SkipAllowWait--;

	if ((sMNN64SkipAllowWait == 0) && (scSubsysControllerGetFirstTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE))
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

// 80131CB8
void mnN64InitAll()
{
	rdSetup rldm_setup;
	Camera *cam;
	GObj *gobj;
	SObj *sobj;
	Sprite *sprite;
	Unk800D4060 sp4C;

	sMNN64SkipAllowWait = 8;
	sMNN64IsProceedOpening = FALSE;

	rldm_setup.table_addr = &lRDManagerTableAddr;
	rldm_setup.table_files_num = &lRDManagerTableFilesNum;
	rldm_setup.file_heap = 0;
	rldm_setup.file_heap_size = 0;
	rldm_setup.status_buf = sMNN64StatusBuf;
	rldm_setup.status_buf_size = ARRAY_COUNT(sMNN64StatusBuf);
	rldm_setup.force_buf = NULL;
	rldm_setup.force_buf_size = 0;

	rdManagerInitSetup(&rldm_setup);

	gcMakeGObjSPAfter(0, mnN64ActorProcUpdate, 0, GOBJ_LINKORDER_DEFAULT);
	func_8000B9FC(0, 0x80000000, 0x64, 2, 0xFF);

	cam = CameraGetStruct(func_8000B93C(0x3EB, NULL, 9, 0x80000000, func_ovl0_800CD2CC, 0x50, 1, -1, 0, 1, 0, 1, 0));
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	gobj = gcMakeGObjSPAfter(nOMObjCommonKindWallpaper, NULL, nOMObjCommonLinkIDWallpaper, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjCommonProc(gobj, mnN64LogoProcUpdate, 0, 1);
	gcAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0, 0x80000000, -1);

	sprite = (Sprite*)((uintptr_t)rdManagerGetFileWithExternHeap(&D_NF_000000C2, gsMemoryAlloc(rdManagerGetFileSize(&D_NF_000000C2), 0x10)) + (intptr_t)&D_NF_000073C0);
	sobj = gcAppendSObjWithSprite(gobj, sprite);

	sobj->sprite.attr &= ~SP_FASTCOPY;

	sobj->pos.x = 96.0F;
	sobj->pos.y = 220.0F;

	sp4C = D_ovl58_80131F54;

	func_ovl0_800D4060(0x3FD, 0xD, 0xA, &sp4C, 0x10, 1, 0);
}

// 80131ECC
void mnN64AddLightsDisplayList(Gfx **dl)
{
	gSPDisplayList(dl[0]++, dMNN64DisplayList);
}

// 80131EF0
void mnN64StartScene()
{
	auStopBGM();
	D_ovl58_80131F98.zbuffer = ((uintptr_t)&D_NF_800A5240 - 0x1900);
	func_80007024(&D_ovl58_80131F98);
	D_ovl58_80131FB4.arena_size = ((uintptr_t)&lMNN64ArenaHi - (uintptr_t)&lMNN64ArenaLo);
	gsGTLSceneInit(&D_ovl58_80131FB4);
}
