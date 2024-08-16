#include <ft/fighter.h>
#include <mn/menu.h>
#include <sc/scene.h> // includes sys/obj.h
#include <sys/system_00.h>
#include <sys/thread6.h>
#include <ovl0/reloc_data_mgr.h>


extern uintptr_t ovl57_BSS_END;       // 80132300
extern void func_ovl0_800CD2CC();
extern void func_ovl0_800CCF00();
extern GObj* func_8000B93C(u32, void*, s32, u32, void*, s32, s64, s32, s32, s32, s32, s32, s32);
extern void func_80007080(void*, f32, f32, f32, f32);
extern void* func_800269C0_275C0(u16);


// DATA
// 80132100
mnCongraFile dMNCongraFileInfo[] = {
	{ 0x000000ba, 0x00020718, 0x000000bb, 0x00020718 },
	{ 0x000000be, 0x00020718, 0x000000bf, 0x00020718 },
	{ 0x000000b8, 0x00020718, 0x000000b9, 0x00020718 },
	{ 0x000000b0, 0x00020718, 0x000000b1, 0x00020718 },
	{ 0x000000bc, 0x00020718, 0x000000bd, 0x00020718 },
	{ 0x000000b2, 0x00020718, 0x000000b3, 0x00020718 },
	{ 0x000000ac, 0x00020718, 0x000000ad, 0x00020718 },
	{ 0x000000b6, 0x00020718, 0x000000b7, 0x00020718 },
	{ 0x000000aa, 0x00020718, 0x000000ab, 0x00020718 },
	{ 0x000000ae, 0x00020718, 0x000000af, 0x00020718 },
	{ 0x000000b4, 0x00020718, 0x000000b5, 0x00020718 },
	{ 0x000000c0, 0x00020718, 0x000000c1, 0x00020718 }
};

// 801321C0
Unk800D4060 D_ovl57_801321C0 = { 0xff };

// 801321C4
Unk800D4060 D_ovl57_801321C4 = { 0 };

// 801321C8
Lights1 dMNCongraLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x0A, 0x32, 0x32);

// 801321E0
Gfx dMNCongraDisplayList[] =
{
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPSetLights1(dMNCongraLights1),
	gsSPEndDisplayList()
};

// 80132208
syDisplaySetup D_ovl57_80132208 = {
	0x80325400, 0x8036d200, 0x803b5000, 0x00000000, 0x00000140, 0x000000f0, 0x00015aa9
};

// 80132224
scRuntimeInfo D_ovl57_80132224 = {
	0x00000000, 0x8000a5e4, 0x80131f60,
	0x80132300, 0x00000000, 0x00000001, 0x00000002,
	0x00002800, 0x00002800, 0x00000000, 0x00000000,
	0x00002800, 0x00020000, 0x0000c000, 0x80131fe8,
	0x80004310, 0x00000000, 0x00000600, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000088,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x0000006c, 0x00000000, 0x00000090, 0x80131ca4,
};


// BSS

// 801322B0
u32 D_ovl57_801322B0;

// 801322B4
u32 D_ovl57_801322B4;

// 801322B8
rdFileNode sMNCongraStatusBuf[5];

// 801322E0
s32 sMNCongraFighterKind;

// 801322E4
s32 sMNCongraSkipWait;

// 801322E8
s32 sMNCongraSceneChangeWait;

// 801322EC
sb32 sMNCongraIsProceed;

// 801322F0
sb32 sMNCongraIsSceneChange;


// 80131B00
sb32 mnCongraCheckPlayerControllerConnected(s32 player)
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(gPlayerControllerPortStatuses); i++)
	{
		if (player == gPlayerControllerPortStatuses[i])
			return TRUE;
	}
	return FALSE;
}

// 80131B6C
s32 mnCongraGetPlayerControllerInterrupt(u32 button_mask)
{
	s32 player;

	for (player = 0; player < ARRAY_COUNT(gPlayerControllers); player++)
	{
		if ((mnCongraCheckPlayerControllerConnected(player) != FALSE) && (gPlayerControllers[player].button_tap & button_mask))
			return player + 1;
	}
	return 0;
}

// 80131C04
void mnCongraActorProcUpdate(GObj *gobj)
{
	Unk800D4060 sp2C;

	if (sMNCongraSkipWait != 0)
		sMNCongraSkipWait--;

	if ((sMNCongraSkipWait == 0) && (sMNCongraIsProceed == FALSE) && (mnCongraGetPlayerControllerInterrupt(A_BUTTON | B_BUTTON | START_BUTTON) != 0))
	{
		sMNCongraIsProceed = TRUE;
		sp2C = D_ovl57_801321C0;
		func_ovl0_800D4060(0x3FD, 0xD, 0xA, &sp2C, 0x5A, 0, &sMNCongraIsSceneChange);
	}
}

// 80131CA4
void mnCongraInitAll()
{
	rdSetup rldm_setup;
	Camera *cam;
	GObj *gobj;
	SObj *sobj;

	sMNCongraSkipWait = 8;
	sMNCongraSceneChangeWait = 0;
	sMNCongraIsProceed = FALSE;
	sMNCongraIsSceneChange = 0;

	rldm_setup.table_addr = &lRDManagerTableAddr;
	rldm_setup.table_files_num = &lRDManagerTableFilesNum;
	rldm_setup.file_heap = 0;
	rldm_setup.file_heap_size = 0;
	rldm_setup.status_buf = sMNCongraStatusBuf;
	rldm_setup.status_buf_size = ARRAY_COUNT(sMNCongraStatusBuf);
	rldm_setup.force_buf = NULL;
	rldm_setup.force_buf_size = 0;

	rdManagerInitSetup(&rldm_setup);

	gcMakeGObjSPAfter(0, mnCongraActorProcUpdate, 0, GOBJ_LINKORDER_DEFAULT);
	func_8000B9FC(0, 0x80000000, 0x64, 2, 0xFF);

	cam = CameraGetStruct(func_8000B93C(0x3EB, NULL, 9, 0x80000000, func_ovl0_800CD2CC, 0x50, 1, -1, 0, 1, 0, 1, 0));
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	gobj = gcMakeGObjSPAfter(nOMObjCommonKindWallpaper, NULL, nOMObjCommonLinkIDWallpaper, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0, 0x80000000, -1);

	sobj = gcAppendSObjWithSprite
	(
		gobj, (Sprite*)
		(
			(uintptr_t)rdManagerGetFileWithExternHeap
			(
				dMNCongraFileInfo[sMNCongraFighterKind].image1_file_id,
				gsMemoryAlloc(rdManagerGetFileSize(dMNCongraFileInfo[sMNCongraFighterKind].image1_file_id), 0x10)
			)
			+
			dMNCongraFileInfo[sMNCongraFighterKind].image1_offset
		)
	);
	sobj->sprite.attr &= ~SP_FASTCOPY;

	sobj->pos.x = 10.0F;
	sobj->pos.y = 120.0F;

	sobj = gcAppendSObjWithSprite
	(
		gobj, (Sprite*)
		(
			(uintptr_t)rdManagerGetFileWithExternHeap
			(
				dMNCongraFileInfo[sMNCongraFighterKind].image2_file_id,
				gsMemoryAlloc(rdManagerGetFileSize(dMNCongraFileInfo[sMNCongraFighterKind].image2_file_id), 0x10)
			)
			+
			dMNCongraFileInfo[sMNCongraFighterKind].image2_offset
		)
	);
	sobj->sprite.attr &= ~SP_FASTCOPY;

	sobj->pos.x = 10.0F;
	sobj->pos.y = 10.0F;

	func_800269C0_275C0((gSceneData.spgame_score >= 1000000) ? 0x1D2 : 0x1D1);
}

// 80131F60
void mnCongraUpdateScene()
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

// 80131FE8
void mnCongraAddLightsDisplayList(Gfx **dl)
{
	gSPDisplayList(dl[0]++, dMNCongraDisplayList);
}

// 8013200C
void mnCongraStartScene()
{
	u16 *subsys_arena_lo;
	u32 *congra_arena_hi;

	congra_arena_hi = (u32*)0x80325400;

	while ((uintptr_t)congra_arena_hi < 0x80400000) { *congra_arena_hi++ = 0x000000FF; } // WARNING: Newline memes!

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
	D_ovl57_80132208.zbuffer = ((uintptr_t)&scmanager_BSS_END - 6400);
	func_80007024(&D_ovl57_80132208);
	D_ovl57_80132224.arena_size = (0x80325400 - (uintptr_t)&ovl57_BSS_END);
	gsGTLSceneInit(&D_ovl57_80132224); subsys_arena_lo = (uintptr_t)&gSCSubsysFramebuffer1; // WARNING: Newline memes!
	while ((uintptr_t)subsys_arena_lo < 0x80400000) { *subsys_arena_lo++ = GPACK_RGBA5551(0x00, 0x00, 0x00, 0x01); }
}
