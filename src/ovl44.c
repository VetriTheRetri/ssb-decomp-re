#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <sc/scene.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <sys/system_00.h>


// EXTERN
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;
extern intptr_t D_NF_800A5240;      // 800A5240
extern intptr_t lOverlay44ArenaLo;  // 80132AB0
extern intptr_t lOverlay44ArenaHi;  // 803903E0
extern intptr_t FILE_037_BACKGROUND_IMAGE_OFFSET; // file 0x037 offset for scrolling background image
extern intptr_t FILE_03C_TRANSITION_GFX_CAMERA_PARAMS_OFFSET; // file 0x03C offset for camera settings
extern intptr_t FILE_04B_TRANSITION_GFX_OFFSET_1; // file 0x04B offset for transition gfx
extern intptr_t FILE_04B_TRANSITION_GFX_OFFSET_2; // file 0x04B offset for transition gfx
extern intptr_t FILE_04B_TRANSITION_GFX_OFFSET_3; // file 0x04B offset for transition gfx

extern GObj* func_8000B93C(u32, void*, s32, u32, void*, s32, s64, s32, s32, s32, s32, s32, s32);
extern void ftRenderLightsDrawReflect(Gfx**, f32, f32);
extern f32 scSubsysFighterGetLightAngleX();
extern f32 scSubsysFighterGetLightAngleY();
extern void func_80007080(void*, f32, f32, f32, f32);
extern void func_ovl0_800CCF00();
extern void func_ovl0_800CD2CC();


// Data
// 801325D0
rdFileID D_ovl44_801325D0[3] = {

	0x37, 0x3C, 0x4B
};

s32 D_ovl44_801325DC[] = {

	0x00000000,
	0x20202000,
	0x20202000,
	0xFFFFFF00,
	0xFFFFFF00,
	0x14141400,
	0x00000000,
	0x20202000,
	0x20202000,
	0xFFFFFF00,
	0xFFFFFF00,
	0x00140000,
	0x00000000
};


// BSS
// 80132710
s32 D_ovl44_80132710[2];

// 80132718
uintptr_t gMvOpeningRunningFighterAnimHeaps[8];

// 80132738
GObj* gMvOpeningRunningLinkFighterGObj;

// 8013273C
s32 gMvOpeningRunningFramesElapsed;

// 80132740
s32 gMvOpeningRunningUnusedCounter;

// 80132744
s32 D_ovl44_80132744;

// 80132748
rdFileNode D_ovl44_80132748[100];

// 80132A68
rdFileNode D_ovl44_80132A68[7];

// 80132AA0
uintptr_t gMvOpeningRunningFilesArray[3];


// 80131B00
void mvOpeningRunningSetupDisplayList(Gfx **dl)
{
	gSPSetGeometryMode(dl[0]++, G_LIGHTING);

	ftRenderLightsDrawReflect(dl, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 80131B58
void mvOpeningRunningAnimateFighter(GObj* fighter_proxy_gobj)
{
	GObj* fighter_gobj = fighter_proxy_gobj->user_data.p;

	gcPlayAnimAll(fighter_proxy_gobj);
	DObjGetStruct(fighter_gobj)->translate.vec.f.x = DObjGetStruct(fighter_proxy_gobj)->translate.vec.f.x;
	DObjGetStruct(fighter_gobj)->translate.vec.f.y = DObjGetStruct(fighter_proxy_gobj)->translate.vec.f.y;
	DObjGetStruct(fighter_gobj)->translate.vec.f.z = DObjGetStruct(fighter_proxy_gobj)->translate.vec.f.z;
	DObjGetStruct(fighter_gobj)->rotate.vec.f.x = DObjGetStruct(fighter_proxy_gobj)->rotate.vec.f.x;
	DObjGetStruct(fighter_gobj)->rotate.vec.f.y = DObjGetStruct(fighter_proxy_gobj)->rotate.vec.f.y;
	DObjGetStruct(fighter_gobj)->rotate.vec.f.z = DObjGetStruct(fighter_proxy_gobj)->rotate.vec.f.z;
}

// 80131BE8
void mvOpeningRunningCreateFighters()
{
	GObj* fighter_gobj;
	GObj* fighter_proxy_gobj;
	DObj* fighter_proxy_dobj;
	s32 i;
	s32 ftKinds[8] = {

		0, 1, 2, 3, 5, 6, 8, 9
	};
	intptr_t offsets[8] = {

		0x004, 0x0B4, 0x124, 0x184,
		0x224, 0x334, 0x3A4, 0x484
	};

	for (i = 0; i < ARRAY_COUNT(ftKinds); i++)
	{
		ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;
		spawn_info.ft_kind = ftKinds[i];
		spawn_info.costume = ftParamGetCostumeCommonID(ftKinds[i], 0);
		spawn_info.pos.x = 0.0F;
		spawn_info.pos.y = 0.0F;
		spawn_info.pos.z = 0.0F;
		spawn_info.anim_heap = gMvOpeningRunningFighterAnimHeaps[i];
		fighter_gobj = fighter_proxy_gobj = ftManagerMakeFighter(&spawn_info);

		if (ftKinds[i] == nFTKindLink)
			gMvOpeningRunningLinkFighterGObj = fighter_proxy_gobj;

		scSubsysFighterSetStatus(fighter_proxy_gobj, 0x10006);

		fighter_proxy_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
		fighter_proxy_gobj->user_data.p = fighter_gobj;

		fighter_proxy_dobj = gcAddDObjForGObj(fighter_proxy_gobj, NULL);
		gcAddOMMtxForDObjFixed(fighter_proxy_dobj, 0x1C, 0);
		gcAddDObjAnimJoint(fighter_proxy_dobj, GetAddressFromOffset(gMvOpeningRunningFilesArray[0], offsets[i]), 0.0F);

		gcAddGObjProcess(fighter_proxy_gobj, mvOpeningRunningAnimateFighter, 1, 1);
		gcPlayAnimAll(fighter_proxy_gobj);
	}
}

// 80131E28
void mvOpeningRunningScrollBackground(GObj* arg0)
{
	SObj* temp_v0;

	temp_v0 = SObjGetStruct(arg0);
	temp_v0->pos.x = temp_v0->pos.x + 30.0F;

	if (temp_v0->pos.x > 0.0F)
		temp_v0->pos.x += -320.0F;

	SObjGetNext(temp_v0)->pos.x = temp_v0->pos.x + 320.0F;
}

// 80131E88
void mvOpeningRunningCreateBackground()
{
	GObj* bg_gobj;
	SObj* left_bg_sobj;
	SObj* right_bg_sobj;

	bg_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddGObjDisplay(bg_gobj, func_ovl0_800CCF00, 0x1C, 0x80000000, -1);

	left_bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(gMvOpeningRunningFilesArray[0], &FILE_037_BACKGROUND_IMAGE_OFFSET));
	left_bg_sobj->sprite.attr &= ~SP_FASTCOPY;
	left_bg_sobj->sprite.scalex = 2.0f;
	left_bg_sobj->sprite.scaley = 2.0f;
	left_bg_sobj->pos.x = -320.0f;
	left_bg_sobj->pos.y = 0.0f;

	right_bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(gMvOpeningRunningFilesArray[0], &FILE_037_BACKGROUND_IMAGE_OFFSET));
	right_bg_sobj->sprite.attr &= ~SP_FASTCOPY;
	right_bg_sobj->sprite.scalex = 2.0f;
	right_bg_sobj->sprite.scaley = 2.0f;
	right_bg_sobj->pos.x = 0.0f;
	right_bg_sobj->pos.y = 0.0f;

	gcAddGObjProcess(bg_gobj, mvOpeningRunningScrollBackground, 1, 1);
}

// 80131F80
void mvOpeningRunningCreateTransitionGfx()
{
	GObj* gfx_gobj = gcMakeGObjSPAfter(0, 0, 0x13, 0x80000000);
	gcSetupCommonDObjs(gfx_gobj, GetAddressFromOffset(gMvOpeningRunningFilesArray[2], &FILE_04B_TRANSITION_GFX_OFFSET_2), 0);
	gcAddGObjDisplay(gfx_gobj, gcDrawDObjTreeForGObj, 6, 0x80000000, -1);

	DObjGetStruct(gfx_gobj)->translate.vec.f.x = 960.0f;
	DObjGetStruct(gfx_gobj)->translate.vec.f.y = 360.0f;
	DObjGetStruct(gfx_gobj)->translate.vec.f.z = -13.5f;
	DObjGetStruct(gfx_gobj)->rotate.vec.f.y = HALF_PI32;
	DObjGetStruct(gfx_gobj)->scale.vec.f.x = 0.9F;
	DObjGetStruct(gfx_gobj)->scale.vec.f.y = 0.9F;
	DObjGetStruct(gfx_gobj)->scale.vec.f.z = 0.9F;

	gcAddMObjAll(gfx_gobj, GetAddressFromOffset(gMvOpeningRunningFilesArray[2], &FILE_04B_TRANSITION_GFX_OFFSET_1));
	gcAddMatAnimJointAll(gfx_gobj, GetAddressFromOffset(gMvOpeningRunningFilesArray[2], &FILE_04B_TRANSITION_GFX_OFFSET_3), 0);
	gcAddGObjProcess(gfx_gobj, gcPlayAnimAll, 1, 1);
	gcPlayAnimAll(gfx_gobj);
}

// 801320B4
void mvOpeningRunningConfigureTransitionGfxViewport(GObj* camera_gobj)
{
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMvOpeningRunningFilesArray[1], &FILE_03C_TRANSITION_GFX_CAMERA_PARAMS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 80132138
void mvOpeningRunningCreateTransitionGfxViewport()
{
	mvOpeningRunningConfigureTransitionGfxViewport(func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x3C, 0x48640, -1, 1, 1, 0, 1, 0));
}

// 801321BC
void mvOpeningRunningCreateBackgroundViewport()
{
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x10000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 8013225C
void mvOpeningRunningInitFramesElapsed()
{
	gMvOpeningRunningFramesElapsed = 0;
}

// 80132268
void mvOpeningRunningMainProc(s32 arg0)
{
	gMvOpeningRunningFramesElapsed += 1;

	if (gMvOpeningRunningFramesElapsed >= 10)
	{
		if (gMvOpeningRunningUnusedCounter != 0)
		{
			gMvOpeningRunningUnusedCounter -= 1;
		}

		if ((scSubsysControllerGetPlayerStickInRangeLR(-0xF, 0xF) != 0) && (scSubsysControllerGetPlayerStickInRangeUD(-0xF, 0xF) != 0))
		{
			gMvOpeningRunningUnusedCounter = 0;
		}

		if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != 0)
		{
			gSceneData.scene_previous = gSceneData.scene_current;
			gSceneData.scene_current = 1;
			leoInitUnit_atten();
		}

		if (gMvOpeningRunningFramesElapsed == 45)
		{
			scSubsysFighterSetStatus(gMvOpeningRunningLinkFighterGObj, 0x10007);
		}

		if (gMvOpeningRunningFramesElapsed == 190)
		{
			mvOpeningRunningCreateTransitionGfx();
			func_800269C0_275C0(1);
		}

		if (gMvOpeningRunningFramesElapsed == 220)
		{
			gSceneData.scene_previous = gSceneData.scene_current;
			gSceneData.scene_current = 0x28;
			leoInitUnit_atten();
		}
	}
}

// 8013237C
void mvOpeningRunningInit()
{
	s32 i;
	rdSetup rldmSetup;

	rldmSetup.table_addr = &D_NF_001AC870;
	rldmSetup.table_files_num = &D_NF_00000854;
	rldmSetup.file_heap = 0;
	rldmSetup.file_heap_size = 0;
	rldmSetup.status_buf = D_ovl44_80132748;
	rldmSetup.status_buf_size = ARRAY_COUNT(D_ovl44_80132748);
	rldmSetup.force_buf = D_ovl44_80132A68;
	rldmSetup.force_buf_size = ARRAY_COUNT(D_ovl44_80132A68);
	rdManagerInitSetup(&rldmSetup);
	rdManagerLoadFiles(D_ovl44_801325D0, ARRAY_COUNT(D_ovl44_801325D0), gMvOpeningRunningFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl44_801325D0, ARRAY_COUNT(D_ovl44_801325D0)), 0x10));

	gcMakeGObjSPAfter(0, mvOpeningRunningMainProc, 0, 0x80000000);

	func_8000B9FC(0, 0x80000000, 0x64, 1, 0);

	efAllocInitParticleBank();
	mvOpeningRunningInitFramesElapsed();

	efManagerInitEffects();
	ftManagerAllocFighter(1, 8);
	ftManagerSetupFilesAllKind(nFTKindMario);
	ftManagerSetupFilesAllKind(nFTKindFox);
	ftManagerSetupFilesAllKind(nFTKindDonkey);
	ftManagerSetupFilesAllKind(nFTKindSamus);
	ftManagerSetupFilesAllKind(nFTKindLink);
	ftManagerSetupFilesAllKind(nFTKindYoshi);
	ftManagerSetupFilesAllKind(nFTKindKirby);
	ftManagerSetupFilesAllKind(nFTKindPikachu);

	for (i = 0; i < ARRAY_COUNT(gMvOpeningRunningFighterAnimHeaps); i++)
	{
		gMvOpeningRunningFighterAnimHeaps[i] = gsMemoryAlloc(gFTManagerAnimHeapSize, 0x10);
	}

	mvOpeningRunningCreateTransitionGfxViewport();
	mvOpeningRunningCreateBackgroundViewport();
	mvOpeningRunningCreateBackground();
	mvOpeningRunningCreateFighters();

	scSubsysFighterSetLightParams(45.0F, 10.0F, 0xFF, 0xFF, 0xFF, 0xFF);

	while (func_8000092C() < 0x8CAU);
}

// 80132650
syDisplaySetup D_ovl44_80132650 = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99
};

// 8013266C
scRuntimeInfo D_ovl44_8013266C = {

	0x00000000, 0x8000A5E4,
	func_8000A340, &lOverlay44ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00009C40, 0x00001000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000C000,
	mvOpeningRunningSetupDisplayList, update_contdata,
	0x00000008, 0x00000600, 0x00000008, 0x00000000,
	0x00000080, 0x00000080, 0x00000088, 0x00000100,
	0x800D5CAC, 0x00000000, 0x00000320, 0x000000A0,
	0x00000100, 0x00000088, 0x00000080, 0x0000006C,
	0x00000010, 0x00000090,
	mvOpeningRunningInit
};

// 8013256C
void intro_chars_running_entry()
{
	D_ovl44_80132650.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl44_80132650);
	D_ovl44_8013266C.arena_size = (u32) ((uintptr_t)&lOverlay44ArenaHi - (uintptr_t)&lOverlay44ArenaLo);
	gsGTLSceneInit(&D_ovl44_8013266C);
}
