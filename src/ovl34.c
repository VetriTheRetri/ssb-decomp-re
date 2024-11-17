#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <sc/scene.h>
#include <gr/ground.h>
#include <lb/library.h>
#include <sys/video.h>

extern void scManagerFuncDraw();

typedef struct viFrameBuf
{
	u16 pix[230 * 320];

} viFrameBuf;


// Externs
extern void* scNextFrameBuffer;
extern void* dSYSchedulerCurrentFramebuffer;
extern u32 scTimestampSetFb;
extern s32 gSCManagerUnkown0x800A50F0;
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay34ArenaLo;  // 0x801350D0
extern intptr_t lOverlay34ArenaHi;  // 0x803903E0

extern viFrameBuf D_NF_80392A00[3];
// Offsets
extern intptr_t FILE_034_ROOM_OFFSET_1; // file 0x034 offset for First Destination room
extern intptr_t FILE_034_ROOM_OFFSET_2; // file 0x034 offset for First Destination room
extern intptr_t FILE_034_ROOM_OFFSET_3; // file 0x034 offset for First Destination room
extern intptr_t FILE_034_DESK_OBJECT_OFFSET; // file 0x034 offset for First Destination desk
extern intptr_t FILE_034_OUTSIDE_HAZE_OBJECT_OFFSET; // file 0x034 offset for First Destination outside haze in window
extern intptr_t FILE_034_BOOKS_OBJECT_OFFSET_1; // file 0x034 offset for First Destination books
extern intptr_t FILE_034_BOOKS_OBJECT_OFFSET_2; // file 0x034 offset for First Destination books
extern intptr_t FILE_034_PENCIL_HOLDER_OBJECT_OFFSET_1; // file 0x034 offset for First Destination pencil holder
extern intptr_t FILE_034_PENCIL_HOLDER_OBJECT_OFFSET_2; // file 0x034 offset for First Destination pencil holder
extern intptr_t FILE_034_LAMP_OBJECT_OFFSET_1; // file 0x034 offset for First Destination lamp
extern intptr_t FILE_034_LAMP_OBJECT_OFFSET_2; // file 0x034 offset for First Destination lamp
extern intptr_t FILE_034_TISSUE_BOX_OBJECT_OFFSET_1; // file 0x034 offset for First Destination tissue box
extern intptr_t FILE_034_TISSUE_BOX_OBJECT_OFFSET_2; // file 0x034 offset for First Destination tissue box
extern intptr_t FILE_034_HAL_LOGO_OFFSET_1; // file 0x034 offset for First Destination HAL logo
extern intptr_t FILE_034_HAL_LOGO_OFFSET_2; // file 0x034 offset for First Destination HAL logo
extern intptr_t FILE_034_HAL_LOGO_OFFSET_3; // file 0x034 offset for First Destination HAL logo
extern intptr_t FILE_034_SNAP_GFX_OBJECT_OFFSET_1; // file 0x034 offset for First Destination snap gfx
extern intptr_t FILE_034_SNAP_GFX_OBJECT_OFFSET_2; // file 0x034 offset for First Destination snap gfx
extern intptr_t FILE_034_CLOSEUP_GFX_AIR_OFFSET_1; // file 0x034 offset for First Destination close-up gfx air
extern intptr_t FILE_034_CLOSEUP_GFX_AIR_OFFSET_2; // file 0x034 offset for First Destination close-up gfx air
extern intptr_t FILE_034_CLOSEUP_GFX_AIR_OFFSET_3; // file 0x034 offset for First Destination close-up gfx air
extern intptr_t FILE_034_CLOSEUP_GFX_AIR_OFFSET_4; // file 0x034 offset for First Destination close-up gfx air
extern intptr_t FILE_034_CLOSEUP_GFX_GROUND_OFFSET_1; // file 0x034 offset for First Destination close-up gfx ground
extern intptr_t FILE_034_CLOSEUP_GFX_GROUND_OFFSET_2; // file 0x034 offset for First Destination close-up gfx ground
extern intptr_t FILE_034_CLOSEUP_GFX_GROUND_OFFSET_3; // file 0x034 offset for First Destination close-up gfx ground
extern intptr_t FILE_034_CLOSEUP_GFX_GROUND_OFFSET_4; // file 0x034 offset for First Destination close-up gfx ground
extern intptr_t FILE_034_MASTERHAND_SHADOW_OBJECT_OFFSET_1; // file 0x034 offset for First Destination Master Hand's shadow
extern intptr_t FILE_034_MASTERHAND_SHADOW_OBJECT_OFFSET_2; // file 0x034 offset for First Destination Master Hand's shadow
extern intptr_t FILE_034_DESK_STAGE_OFFSET_1; // file 0x034 offset for First Destination HAL logo
extern intptr_t FILE_034_DESK_STAGE_OFFSET_2; // file 0x034 offset for First Destination HAL logo
extern intptr_t FILE_034_DESK_STAGE_OFFSET_3; // file 0x034 offset for First Destination HAL logo
extern intptr_t FILE_034_SPOTLIGHT_OFFSET_1; // file 0x034 offset for First Destination HAL logo
extern intptr_t FILE_034_SPOTLIGHT_OFFSET_2; // file 0x034 offset for First Destination HAL logo
extern intptr_t FILE_034_SPOTLIGHT_OFFSET_3; // file 0x034 offset for First Destination HAL logo
extern intptr_t FILE_034_OUTSIDE_OBJECT_OFFSET; // file 0x034 offset for First Destination outside view through window
extern intptr_t FILE_034_SUNLIGHT_OBJECT_OFFSET; // file 0x034 offset for First Destination sunlight
extern intptr_t FILE_038_CAMERA_PARAMETERS_OFFSET; // file 0x038 offset for camera parameters for scene 1
extern intptr_t FILE_039_CAMERA_PARAMETERS_OFFSET; // file 0x039 offset for camera parameters for scene 2
extern intptr_t FILE_03A_CAMERA_PARAMETERS_OFFSET; // file 0x03A offset for camera parameters for scene 3
extern intptr_t FILE_03B_CAMERA_PARAMETERS_OFFSET; // file 0x03B offset for camera parameters for scene 4
extern intptr_t FILE_03F_TRANSITION_GFX_OVERLAY_OBJECT_OFFSET_1; // file 0x03F offset for First Destination transition gfx shaded overlay
extern intptr_t FILE_03F_TRANSITION_GFX_OVERLAY_OBJECT_OFFSET_2; // file 0x03F offset for First Destination transition gfx shaded overlay
extern intptr_t FILE_03F_TRANSITION_GFX_OUTLINE_OBJECT_OFFSET_1; // file 0x03F offset for First Destination transition gfx red outline
extern intptr_t FILE_03F_TRANSITION_GFX_OUTLINE_OBJECT_OFFSET_2; // file 0x03F offset for First Destination transition gfx red outline
extern intptr_t FILE_05A_BACKGROUND_IMAGE_OFFSET; // file 0x05A offset for background image footer

extern void gcPlayCamAnim();

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

extern void ftDisplayLightsDrawReflect(Gfx**, f32, f32);
extern f32 scSubsysFighterGetLightAngleX();
extern f32 scSubsysFighterGetLightAngleY();


// Data
// 0x80134A20
u32 dMVOpeningRoomFileIDs[8] = {

	0x34, 0x3F, 0x38, 0x39, 0x3A, 0x3B, 0x4B, 0x5A
};

// 0x80134A40
u32 D_ovl34_80134A40[12] = {

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
// 0x80134CD0
s32 D_ovl34_80134CD0[2];

// 0x80134CD8
uintptr_t sMVOpeningRoomBossFigatreeHeap;

// 0x80134CDC
uintptr_t sMVOpeningRoomPluckedFigatreeHeap;

// 0x80134CE0
uintptr_t sMVOpeningRoomDroppedFigatreeHeap;

// 0x80134CE4
s32 sMVOpeningRoomTotalTimeTics;

// 0x80134CE8
GObj* sMVOpeningRoomMainCameraGObj;

// 0x80134CEC
GObj* sMVOpeningRoomFighterCameraGObj;

// 0x80134CF0
GObj* sMVOpeningRoomHALLogoCameraGObj;

// 0x80134CF4
GObj* sMVOpeningRoomMasterHandGObj;

// 0x80134CF8
s32 sMVOpeningRoomPluckedFighterKind;

// 0x80134CFC
GObj* sMVOpeningRoomDroppedFighterKind;

// 0x80134D00
GObj* sMVOpeningRoomHALLogoGObj;

// 0x80134D04
GObj* sMVOpeningRoomPluckedFighterGObj;

// 0x80134D08
GObj* sMVOpeningRoomDroppedFighterGObj;

// 0x80134D0C
GObj* sMVOpeningRoomRoomGObj;

// 0x80134D10
GObj* sMVOpeningRoomSunlightGObj;

// 0x80134D14
GObj* sMVOpeningRoomDeskGObj;

// 0x80134D18
GObj* sMVOpeningRoomOutsideGObj;

// 0x80134D1C
GObj* sMVOpeningRoomOutsideHazeGObj;

// 0x80134D20
GObj* sMVOpeningRoomBooksGObj;

// 0x80134D24
GObj* sMVOpeningRoomPencilHolderGObj;

// 0x80134D28
GObj* sMVOpeningRoomLampGObj;

// 0x80134D2C
GObj* sMVOpeningRoomTissueBoxGObj;

// 0x80134D30
GObj* sMVOpeningRoomMasterHandShadowGObj;

// 0x80134D34
s32 D_ovl34_80134D34;

// 0x80134D38
s32 sMVOpeningRoomOverlayAlpha;

// 0x80134D3C
GObj* sMVOpeningRoomOverlayGObj;

// 0x80134D40
GObj* sMVOpeningRoomSpotlightGObj;

// 0x80134D44
GObj* sMVOpeningRoomBackgroundGObj;

// 0x80134D48
GObj* sMVOpeningRoomTransitionGFXOutlineGObj;

// 0x80134D4C
GObj* sMVOpeningRoomTransitionGFXOverlayGObj;

// 0x80134D50
GObj* sMVOpeningRoomCameraGObj;

// 0x80134D54
s32 sMVOpeningRoomUnusedCounter;

// 0x80134D58
LBFileNode sMVOpeningRoomStatusBuffer[100];

// 0x80135078
LBFileNode sMVOpeningRoomForceStatusBuffer[7];

// 0x801350B0
uintptr_t sMVOpeningRoomFiles[8];

// 0x80131B00
void mvOpeningRoomFuncLights(Gfx **dls)
{
	gSPSetGeometryMode(dls[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
void mvOpeningRoomFadeOutAndDestroyRoomGeo(GObj* room_gobj)
{
	if (sMVOpeningRoomTotalTimeTics > I_SEC_TO_TICS(18))
		gcPlayAnimAll(room_gobj);

	if (sMVOpeningRoomTotalTimeTics == I_SEC_TO_TICS(19))
		gcEjectGObj(room_gobj);
}

// 0x80131BA8
void mvOpeningRoomCreateRoomGeo()
{
	GObj* room_gobj;

	sMVOpeningRoomRoomGObj = room_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(room_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_ROOM_OFFSET_2), 0);
	gcAddGObjDisplay(room_gobj, gcDrawDObjTreeDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddMObjAll(room_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_ROOM_OFFSET_1));
	gcAddMatAnimJointAll(room_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_ROOM_OFFSET_3), 0.0F);
	gcAddGObjProcess(room_gobj, mvOpeningRoomFadeOutAndDestroyRoomGeo, 1, 1);
	gcPlayAnimAll(room_gobj);
}

// 0x80131C84
void mvOpeningRoomCreateSunlight()
{
	GObj* sunlight_gobj;

	sMVOpeningRoomSunlightGObj = sunlight_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddXObjForDObjFixed(gcAddDObjForGObj(sunlight_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_SUNLIGHT_OBJECT_OFFSET)), 0x1C, 0);
	gcAddGObjDisplay(sunlight_gobj, gcDrawDObjDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x80131D08
void mvOpeningRoomCreateDesk()
{
	GObj* desk_gobj;

	sMVOpeningRoomDeskGObj = desk_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(desk_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_DESK_OBJECT_OFFSET), 0);
	gcAddGObjDisplay(desk_gobj, gcDrawDObjTreeForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x80131D80
void mvOpeningRoomCreateOutside()
{
	GObj* outside_gobj;

	sMVOpeningRoomOutsideGObj = outside_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddXObjForDObjFixed(gcAddDObjForGObj(outside_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_OUTSIDE_OBJECT_OFFSET)), 0x1C, 0);
	gcAddGObjDisplay(outside_gobj, gcDrawDObjDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x80131E04
void mvOpeningRoomCreateOutsideHaze()
{
	GObj* outside_haze_gobj;

	sMVOpeningRoomOutsideHazeGObj = outside_haze_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddXObjForDObjFixed(gcAddDObjForGObj(outside_haze_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_OUTSIDE_HAZE_OBJECT_OFFSET)), 0x1C, 0);
	gcAddGObjDisplay(outside_haze_gobj, gcDrawDObjDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x80131E88
void mvOpeningRoomAnimateDeskObjects(GObj* desk_object_gobj)
{
	if (sMVOpeningRoomTotalTimeTics >= 560)
		gcPlayAnimAll(desk_object_gobj);
}

// 0x80131EBC
void mvOpeningRoomCreateBooks()
{
	GObj* books_gobj;

	sMVOpeningRoomBooksGObj = books_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(books_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_BOOKS_OBJECT_OFFSET_1), 0);
	gcAddGObjDisplay(books_gobj, gcDrawDObjTreeForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(books_gobj, mvOpeningRoomAnimateDeskObjects, 1, 1);
	gcAddAnimJointAll(books_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_BOOKS_OBJECT_OFFSET_2), 0.0F);
	gcPlayAnimAll(books_gobj);
}

// 0x80131F7C
void mvOpeningRoomCreatePencilHolder()
{
	GObj* pencil_holder_gobj;

	sMVOpeningRoomPencilHolderGObj = pencil_holder_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(pencil_holder_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_PENCIL_HOLDER_OBJECT_OFFSET_1), 0);
	gcAddGObjDisplay(pencil_holder_gobj, gcDrawDObjTreeForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddAnimJointAll(pencil_holder_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_PENCIL_HOLDER_OBJECT_OFFSET_2), 0.0F);
	gcAddGObjProcess(pencil_holder_gobj, mvOpeningRoomAnimateDeskObjects, 1, 1);
	gcPlayAnimAll(pencil_holder_gobj);
}

// 0x8013203C
void mvOpeningRoomCreateLamp()
{
	GObj* lamp_gobj;

	sMVOpeningRoomLampGObj = lamp_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(lamp_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_LAMP_OBJECT_OFFSET_1), 0);
	gcAddGObjDisplay(lamp_gobj, gcDrawDObjTreeForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddAnimJointAll(lamp_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_LAMP_OBJECT_OFFSET_2), 0.0F);
	gcAddGObjProcess(lamp_gobj, mvOpeningRoomAnimateDeskObjects, 1, 1);
	gcPlayAnimAll(lamp_gobj);
}

// 0x801320FC
void mvOpeningRoomAnimateTissueBox(GObj* tissue_box_gobj)
{
	if (sMVOpeningRoomTotalTimeTics >= 560)
		gcPlayAnimAll(tissue_box_gobj);
}

// 0x80132130
void mvOpeningRoomCreateTissueBox()
{
	GObj* tissue_box_gobj;
	DObj* tissue_box_dobj;

	sMVOpeningRoomTissueBoxGObj = tissue_box_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	tissue_box_dobj = gcAddDObjForGObj(tissue_box_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_TISSUE_BOX_OBJECT_OFFSET_1));
	gcAddXObjForDObjFixed(tissue_box_dobj, 0x1C, 0);
	gcAddGObjDisplay(tissue_box_gobj, gcDrawDObjDLHead0, 6, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddDObjAnimJoint(tissue_box_dobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_TISSUE_BOX_OBJECT_OFFSET_2), 0);
	gcAddGObjProcess(tissue_box_gobj, mvOpeningRoomAnimateTissueBox, 1, 1);
	gcPlayAnimAll(tissue_box_gobj);
}

// 0x801321F8
void mvOpeningRoomCreateMasterHand()
{
	GObj* fighter_gobj;
	FTCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.fkind = nFTKindBoss;
	spawn_info.costume = ftParamGetCostumeCommonID(nFTKindBoss, 0);
	spawn_info.pos.x = 0.0f;
	spawn_info.pos.y = 0.0f;
	spawn_info.pos.z = 0.0f;
	spawn_info.figatree_heap = sMVOpeningRoomBossFigatreeHeap;
	sMVOpeningRoomMasterHandGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

	scSubsysFighterSetStatus(fighter_gobj, 0x1000F);
}

// 0x801322A0 - Unused?
void func_ovl34_801322A0(s32 arg0)
{
	func_ovl1_803905F4(sMVOpeningRoomMasterHandGObj, arg0);
}

// 0x801322C8 - Unused?
void func_ovl34_801322C8(GObj* fighter_gobj)
{
	FTStruct* fp;
	DObj* topJoint;
	DObj* firstJoint;

	fp = ftGetStruct(fighter_gobj);
	firstJoint = fp->joints[1];
	topJoint = fp->joints[0];
	topJoint->translate.vec.f.x = topJoint->translate.vec.f.x + (firstJoint->translate.vec.f.x - fp->anim_vel.x);
	topJoint->translate.vec.f.y = topJoint->translate.vec.f.y + (firstJoint->translate.vec.f.y - fp->anim_vel.y);
	topJoint->translate.vec.f.z = topJoint->translate.vec.f.z + (firstJoint->translate.vec.f.z - fp->anim_vel.z);
}

// 0x80132320 - Unused?
void func_ovl34_80132320() {}

// 0x80132328 - Unused?
void func_ovl34_80132328() {}

// 0x80132330
void mvOpeningRoomCreatePluckedFighter(s32 fkind)
{
	GObj* fighter_gobj;
	FTCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.fkind = fkind;
	spawn_info.costume = ftParamGetCostumeCommonID(fkind, 0);
	spawn_info.pos.x = 0.0f;
	spawn_info.pos.y = 0.0f;
	spawn_info.pos.z = 0.0f;
	spawn_info.figatree_heap = sMVOpeningRoomPluckedFigatreeHeap;
	sMVOpeningRoomPluckedFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

	DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;

	scSubsysFighterSetStatus(fighter_gobj, 0x10008);

	gcMoveGObjDL(fighter_gobj, 6, -1);
}

// 0x80132404
void mvOpeningRoomRenderHALLogoBackground(GObj* logo_gobj)
{
	if (sMVOpeningRoomTotalTimeTics >= 60)
	{
		if (sMVOpeningRoomOverlayAlpha > 0)
		{
			sMVOpeningRoomOverlayAlpha -= 13;

			if (sMVOpeningRoomOverlayAlpha < 0)
				sMVOpeningRoomOverlayAlpha = 0;
		}
	}

	gDPPipeSync(gSYTaskmanDLHeads[1]++);
	gDPSetCycleType(gSYTaskmanDLHeads[1]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[1]++, 0, 0, 0, 0, 0, sMVOpeningRoomOverlayAlpha);
	gDPSetCombineLERP(gSYTaskmanDLHeads[1]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[1]++, 10, 10, 310, 230);
	gDPPipeSync(gSYTaskmanDLHeads[1]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[1]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80132544
void mvOpeningRoomCreateHALLogoBackground()
{
	GObj* logo_bg_gobj;

	sMVOpeningRoomOverlayAlpha = 0xFF;
	sMVOpeningRoomOverlayGObj = logo_bg_gobj = gcMakeGObjSPAfter(0, 0, 0x12, 0x80000000);
	gcAddGObjDisplay(logo_bg_gobj, mvOpeningRoomRenderHALLogoBackground, 0x1A, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x801325A4
void mvOpeningRoomCreateHALLogo()
{
	GObj* logo_gobj;

	sMVOpeningRoomHALLogoGObj = logo_gobj = gcMakeGObjSPAfter(0, 0, 0x15, 0x80000000);
	gcSetupCommonDObjs(logo_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_HAL_LOGO_OFFSET_2), 0);
	gcAddGObjDisplay(logo_gobj, gcDrawDObjTreeDLLinksForGObj, 0x1D, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddMObjAll(logo_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_HAL_LOGO_OFFSET_1));
	gcAddMatAnimJointAll(logo_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_HAL_LOGO_OFFSET_3), 0.0F);
	gcAddGObjProcess(logo_gobj, gcPlayAnimAll, 1, 1);
	gcPlayAnimAll(logo_gobj);
}

// 0x80132680
void mvOpeningRoomCreateSnapGFX()
{
	GObj* snap_gfx_gobj;

	snap_gfx_gobj = gcMakeGObjSPAfter(0, 0, 0x13, 0x80000000);
	gcSetupCommonDObjs(snap_gfx_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_SNAP_GFX_OBJECT_OFFSET_1), 0);
	gcAddGObjDisplay(snap_gfx_gobj, gcDrawDObjTreeDLLinksForGObj, 0x1B, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddAnimJointAll(snap_gfx_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_SNAP_GFX_OBJECT_OFFSET_2), 0.0F);
	gcAddGObjProcess(snap_gfx_gobj, gcPlayAnimAll, 1, 1);
	gcPlayAnimAll(snap_gfx_gobj);
}

// 0x80132738
void mvOpeningRoomCreateCloseUpGFX()
{
	GObj* closeup_gfx_gobj;

	// Close-up GFX air
	closeup_gfx_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(closeup_gfx_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_CLOSEUP_GFX_AIR_OFFSET_2), 0);
	gcAddGObjDisplay(closeup_gfx_gobj, gcDrawDObjTreeDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
	DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.x = 0.0F;
	DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.y = 0.0F;
	DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.z = 0.0F;
	gcAddMObjAll(closeup_gfx_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_CLOSEUP_GFX_AIR_OFFSET_1));
	gcAddMatAnimJointAll(closeup_gfx_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_CLOSEUP_GFX_AIR_OFFSET_3), 0.0F);
	gcAddGObjProcess(closeup_gfx_gobj, gcPlayAnimAll, 1, 1);
	gcAddAnimJointAll(closeup_gfx_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_CLOSEUP_GFX_AIR_OFFSET_4), 0.0F);
	gcPlayAnimAll(closeup_gfx_gobj);

	// Close-up GFX ground
	closeup_gfx_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(closeup_gfx_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_CLOSEUP_GFX_GROUND_OFFSET_2), 0);
	gcAddGObjDisplay(closeup_gfx_gobj, gcDrawDObjTreeDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
	DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.x = 0.0F;
	DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.y = 0.0F;
	DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.z = 0.0F;
	gcAddMObjAll(closeup_gfx_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_CLOSEUP_GFX_GROUND_OFFSET_1));
	gcAddMatAnimJointAll(closeup_gfx_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_CLOSEUP_GFX_GROUND_OFFSET_3), 0.0F);
	gcAddGObjProcess(closeup_gfx_gobj, gcPlayAnimAll, 1, 1);
	gcAddAnimJointAll(closeup_gfx_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_CLOSEUP_GFX_GROUND_OFFSET_4), 0.0F);
	gcPlayAnimAll(closeup_gfx_gobj);
}

// 0x80132928
void mvOpeningRoomCreateDroppedFighter(s32 fkind)
{
	GObj* fighter_gobj;
	FTCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.fkind = fkind;
	spawn_info.costume = ftParamGetCostumeCommonID(fkind, 0);
	spawn_info.figatree_heap = sMVOpeningRoomDroppedFigatreeHeap;
	spawn_info.pos.x = 872.3249512F;
	spawn_info.pos.y = 4038.864014F;
	spawn_info.pos.z = -4734.600098F;
	sMVOpeningRoomDroppedFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

	scSubsysFighterSetStatus(fighter_gobj, 0x10009);
	gcMoveGObjDL(fighter_gobj, 6, -1);
}

// 0x801329F0
void mvOpeningRoomCreateMasterHandShadow()
{
	GObj* masterhand_shadow_gobj;
	DObj* masterhand_shadow_dobj;

	sMVOpeningRoomMasterHandShadowGObj = masterhand_shadow_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	masterhand_shadow_dobj = gcAddDObjForGObj(masterhand_shadow_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_MASTERHAND_SHADOW_OBJECT_OFFSET_1));
	gcAddXObjForDObjFixed(masterhand_shadow_dobj, 0x1C, 0);
	gcAddGObjDisplay(masterhand_shadow_gobj, gcDrawDObjDLHead1, 9, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddDObjAnimJoint(masterhand_shadow_dobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_MASTERHAND_SHADOW_OBJECT_OFFSET_2), 0);
	gcAddGObjProcess(masterhand_shadow_gobj,gcPlayAnimAll, 1, 1);
}

// 0x80132AB0
void mvOpeningRoomAnimateDeskStage(GObj* desk_stage_gobj)
{
	if (sMVOpeningRoomTotalTimeTics > 1060)
		gcPlayAnimAll(desk_stage_gobj);
}

// 0x80132AE4
void mvOpeningRoomCreateDeskStage()
{
	GObj* desk_stage_gobj;

	desk_stage_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(desk_stage_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_DESK_STAGE_OFFSET_2), 0);
	gcAddGObjDisplay(desk_stage_gobj, gcDrawDObjTreeDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddMObjAll(desk_stage_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_DESK_STAGE_OFFSET_1));
	gcAddMatAnimJointAll(desk_stage_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_DESK_STAGE_OFFSET_3), 0.0F);
	gcAddGObjProcess(desk_stage_gobj, mvOpeningRoomAnimateDeskStage, 1, 1);
	gcPlayAnimAll(desk_stage_gobj);
}

// 0x80132BB8
void mvOpeningRoomRenderCloseupOverlay(GObj* arg0)
{
	if (sMVOpeningRoomOverlayAlpha < 0xA0)
	{
		sMVOpeningRoomOverlayAlpha += 9;

		if (sMVOpeningRoomOverlayAlpha >= 0xA1)
			sMVOpeningRoomOverlayAlpha = 0xA0;
	}

	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0, 0, 0, sMVOpeningRoomOverlayAlpha);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 10, 10, 310, 230);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80132CEC
void mvOpeningRoomCreateCloseupOverlay()
{
	GObj* overlay_gobj;

	sMVOpeningRoomOverlayAlpha = 0;
	sMVOpeningRoomOverlayGObj = overlay_gobj = gcMakeGObjSPAfter(0, 0, 0x12, 0x80000000);
	gcAddGObjDisplay(overlay_gobj, mvOpeningRoomRenderCloseupOverlay, 0x1A, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x80132D48
void mvOpeningRoomCreateOverlayViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x3C, 0x04000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132DE8
void mvOpeningRoomRenderBackground(GObj* bg_gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimDepth(gSYTaskmanDLHeads[0]++, 36863.0F, 1);
	gDPSetDepthSource(gSYTaskmanDLHeads[0]++, G_ZS_PRIM);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, AA_EN | Z_CMP | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM), AA_EN | Z_CMP | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM));
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, TEXEL0,  0, 0, 0, TEXEL0,  0, 0, 0, TEXEL0,  0, 0, 0, TEXEL0);

	lbCommonDrawSObjNoAttr(bg_gobj);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetDepthSource(gSYTaskmanDLHeads[0]++, G_ZS_PIXEL);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80132F44
void mvOpeningRoomCreateBackground()
{
	GObj* bg_gobj;
	SObj* bg_sobj;

	sMVOpeningRoomBackgroundGObj = bg_gobj = gcMakeGObjSPAfter(0, 0, 0x14, 0x80000000);
	gcAddGObjDisplay(bg_gobj, mvOpeningRoomRenderBackground, 0x1C, GOBJ_PRIORITY_DEFAULT, ~0);

	bg_sobj = lbCommonMakeSObjForGObj(bg_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[7], &FILE_05A_BACKGROUND_IMAGE_OFFSET));
	bg_sobj->pos.x = 10.0f;
	bg_sobj->pos.y = 10.0f;
}

// 0x80132FCC
void mvOpeningRoomPositionSpotlight(GObj* spotlight_gobj, s32 fkind)
{
	Vec3f positions[12] = {

		-38.31, 74.904, -122.733,
		-38.87, 74.904, -121.776,
		-38.87, 74.904, -119.48,
		-38.87, 74.904, -119.48,
		0.0, 0.0, 0.0,
		-37.04, 74.904, -119.6,
		-39.39, 74.904, -118.38,
		0.0, 0.0, 0.0,
		-38.31, 74.904, -122.733,
		-39.39, 74.904, -118.38,
		0.0, 0.0, 0.0,
		0.0, 0.0, 0.0
	};
	Vec3f scales[12] = {

		1.0, 1.0, 1.0,
		1.1, 1.0, 1.1,
		1.3, 1.0, 1.3,
		1.3, 1.0, 1.3,
		0.0, 0.0, 0.0,
		1.0, 1.0, 1.0,
		1.2, 1.0, 1.2,
		0.0, 0.0, 0.0,
		1.17, 1.0, 1.17,
		1.2, 1.0, 1.2,
		0.0, 0.0, 0.0,
		0.0, 0.0, 0.0
	};

	DObjGetStruct(spotlight_gobj)->translate.vec.f.x = positions[fkind].x * 30.0F;
	DObjGetStruct(spotlight_gobj)->translate.vec.f.y = positions[fkind].y * 30.0F;
	DObjGetStruct(spotlight_gobj)->translate.vec.f.z = positions[fkind].z * 30.0F;
	DObjGetStruct(spotlight_gobj)->scale.vec.f.x = scales[fkind].x;
	DObjGetStruct(spotlight_gobj)->scale.vec.f.y = scales[fkind].y;
	DObjGetStruct(spotlight_gobj)->scale.vec.f.z = scales[fkind].z;
}

// 0x801330B8
void mvOpeningRoomCreateSpotlight()
{
	GObj* spotlight_gobj;

	sMVOpeningRoomSpotlightGObj = spotlight_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddXObjForDObjFixed(gcAddDObjForGObj(spotlight_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_SPOTLIGHT_OFFSET_2)), 0x1C, 0);
	gcAddGObjDisplay(spotlight_gobj, gcDrawDObjDLHead1, 0x1B, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddMObjAll(spotlight_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_SPOTLIGHT_OFFSET_1));
	gcAddMatAnimJointAll(spotlight_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[0], &FILE_034_SPOTLIGHT_OFFSET_3), 0.0F);
	gcAddGObjProcess(spotlight_gobj, gcPlayAnimAll, 1, 1);
	gcPlayAnimAll(spotlight_gobj);
	mvOpeningRoomPositionSpotlight(spotlight_gobj, sMVOpeningRoomPluckedFighterKind);
}

// 0x801331B0
void mvOpeningRoomDestroyDeskObjects()
{
	gcEjectGObj(sMVOpeningRoomOutsideGObj);
	gcEjectGObj(sMVOpeningRoomOutsideHazeGObj);
	gcEjectGObj(sMVOpeningRoomBooksGObj);
	gcEjectGObj(sMVOpeningRoomPencilHolderGObj);
	gcEjectGObj(sMVOpeningRoomLampGObj);
	gcEjectGObj(sMVOpeningRoomTissueBoxGObj);
}

// 0x80133210
void mvOpeningRoomConfigureFirstSceneViewport(GObj* camera_gobj)
{
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	cobj->projection.persp.near = 80.0F;
	cobj->projection.persp.far = 15000.0F;
	gcAddCameraCamAnimJoint(cobj, GetAddressFromOffset(sMVOpeningRoomFiles[2], &FILE_038_CAMERA_PARAMETERS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, nGCProcessKindFunc, 1);
	cobj->flags |= 4;
}

// 0x801332BC
void mvOpeningRoomCreateFirstSceneViewports()
{
	GObj* camera_gobj;

	sMVOpeningRoomMainCameraGObj = camera_gobj = gcMakeCameraGObj(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x00000040, -1, 0, 1, 0, 1, 0);
	gcAddXObjForCamera(CObjGetStruct(camera_gobj), 3, 0);
	gcAddXObjForCamera(CObjGetStruct(camera_gobj), 0xE, 0);
	mvOpeningRoomConfigureFirstSceneViewport(camera_gobj);

	sMVOpeningRoomFighterCameraGObj = camera_gobj = gcMakeCameraGObj(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x28, 0x08000200, -1, 1, 1, 0, 1, 0);
	mvOpeningRoomConfigureFirstSceneViewport(camera_gobj);
}

// 0x801333DC
void mvOpeningRoomConfigureSecondSceneViewport(GObj* camera_gobj)
{
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	gcAddCameraCamAnimJoint(cobj, GetAddressFromOffset(sMVOpeningRoomFiles[3], &FILE_039_CAMERA_PARAMETERS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, nGCProcessKindFunc, 1);
	cobj->flags |= 4;
}

// 0x80133470
void mvOpeningRoomCreateSecondSceneViewports()
{
	GObj* camera_gobj;

	sMVOpeningRoomMainCameraGObj = camera_gobj = gcMakeCameraGObj(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x00000040, -1, 0, 1, 0, 1, 0);
	gcAddXObjForCamera(CObjGetStruct(camera_gobj), 3, 0);
	gcAddXObjForCamera(CObjGetStruct(camera_gobj), 0x8, 0);
	mvOpeningRoomConfigureSecondSceneViewport(camera_gobj);

	sMVOpeningRoomFighterCameraGObj = camera_gobj = gcMakeCameraGObj(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x28, 0x08000200, -1, 1, 1, 0, 1, 0);
	mvOpeningRoomConfigureSecondSceneViewport(camera_gobj);
}

// 0x80133590
void mvOpeningRoomConfigureThirdSceneViewport(GObj* camera_gobj)
{
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	cobj->vec.eye.x = 9.2993F;
	cobj->vec.eye.y = 3880.389404F;
	cobj->vec.eye.z = 4077.981689F;
	cobj->vec.at.x = 0.9915789962F;
	cobj->vec.at.y = 2995.681396F;
	cobj->vec.at.z = -388.9534302F;
	cobj->vec.up.x = 0.0F;
	cobj->vec.up.y = 1.0F;
	cobj->vec.up.z = 0.0F;
	cobj->projection.persp.fovy = 18.60718727F;
	cobj->projection.persp.near = 128.0F;
	cobj->projection.persp.far = 16384.0F;
	gcAddCameraCamAnimJoint(cobj, GetAddressFromOffset(sMVOpeningRoomFiles[4], &FILE_03A_CAMERA_PARAMETERS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, nGCProcessKindFunc, 1);
	cobj->flags |= 4;
}

// 0x801336A8
void mvOpeningRoomCreateThirdSceneViewports()
{
	GObj* camera_gobj;
	GObj* camera_gobj_2;

	sMVOpeningRoomMainCameraGObj = camera_gobj = gcMakeCameraGObj(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x00000040, -1, 0, 1, 0, 1, 0);
	gcAddXObjForCamera(CObjGetStruct(camera_gobj), 3, 0);
	gcAddXObjForCamera(CObjGetStruct(camera_gobj), 0x8, 0);
	mvOpeningRoomConfigureThirdSceneViewport(camera_gobj);

	sMVOpeningRoomFighterCameraGObj = camera_gobj_2 = gcMakeCameraGObj(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x28, 0x08000200, -1, 1, 1, 0, 1, 0);
	mvOpeningRoomConfigureThirdSceneViewport(camera_gobj_2);
}

// 0x801337C8
void mvOpeningRoomConfigureFourthSceneViewport(GObj* camera_gobj)
{
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	cobj->vec.eye.x = -1039.880615F;
	cobj->vec.eye.y = 3199.215576F;
	cobj->vec.eye.z = -1235.168823F;
	cobj->vec.at.x = -1162.40979F;
	cobj->vec.at.y = 2127.824463F;
	cobj->vec.at.z = -3853.073242F;
	cobj->vec.up.x = 0.0F;
	cobj->vec.up.y = 1.0F;
	cobj->vec.up.z = 0.0F;
	cobj->projection.persp.fovy = 11.98226547F;
	cobj->projection.persp.near = 128.0F;
	cobj->projection.persp.far = 16384.0F;
	gcAddCameraCamAnimJoint(cobj, GetAddressFromOffset(sMVOpeningRoomFiles[5], &FILE_03B_CAMERA_PARAMETERS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 0x801338D4
void mvOpeningRoomCreateFourthSceneViewports()
{
	GObj* camera_gobj;
	GObj* camera_gobj_2;

	sMVOpeningRoomMainCameraGObj = camera_gobj = gcMakeCameraGObj(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x00000040, -1, 1, 1, 0, 1, 0);
	mvOpeningRoomConfigureFourthSceneViewport(camera_gobj);

	sMVOpeningRoomFighterCameraGObj = camera_gobj_2 = gcMakeCameraGObj(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x28, 0x00000200, -1, 1, 1, 0, 1, 0);
	mvOpeningRoomConfigureFourthSceneViewport(camera_gobj_2);
}

// 0x801339CC
void mvOpeningRoomCreateBackgroundViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x5A, 0x10000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133A6C
void mvOpeningRoomCreateHALLogoViewport()
{
	GObj *camera_gobj;
	CObj *cobj;

	sMVOpeningRoomHALLogoCameraGObj = camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x32, 0x20000000, -1, 1, 1, 0, 1, 0);
	cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	gcAddCameraCamAnimJoint(cobj, GetAddressFromOffset(sMVOpeningRoomFiles[2], &FILE_038_CAMERA_PARAMETERS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 0x80133B58
void mvOpeningRoomRenderTransitionGFXOverlay(GObj* gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetColorImage(gSYTaskmanDLHeads[0]++, G_IM_FMT_RGBA, G_IM_SIZ_16b, gSYVideoResWidth, gSYVideoZBuffer);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 255, 255, 255, 255);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, 1,  0, 0, 0, PRIMITIVE,  0, 0, 0, 1);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_PASS, G_RM_OPA_SURF2);
	gcDrawDObjDLHead0(gobj);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetColorImage(gSYTaskmanDLHeads[0]++, G_IM_FMT_RGBA, gSYVideoColorDepth, gSYVideoResWidth, (void*)0x0F000000);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80133CEC
void mvOpeningRoomRenderTransitionGFXOutline(GObj* gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetColorImage(gSYTaskmanDLHeads[0]++, G_IM_FMT_RGBA, G_IM_SIZ_16b, gSYVideoResWidth, gSYVideoZBuffer);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0, 0, 0, 255);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 0, 0, 320, 240);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetColorImage(gSYTaskmanDLHeads[0]++, G_IM_FMT_RGBA, gSYVideoColorDepth, gSYVideoResWidth, (void*)0x0F000000);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, SHADE,  0, 0, 0, 1,  0, 0, 0, SHADE,  0, 0, 0, 1);
	gcDrawDObjDLHead0(gobj);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80133EFC
void mvOpeningRoomCreateTransitionGFX()
{
	GObj* gfx_gobj;
	DObj* gfx_dobj;

	sMVOpeningRoomTransitionGFXOutlineGObj = gfx_gobj = gcMakeGObjSPAfter(0, 0, 0x16, 0x80000000);
	gfx_dobj = gcAddDObjForGObj(gfx_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[1], &FILE_03F_TRANSITION_GFX_OUTLINE_OBJECT_OFFSET_1));
	gcAddXObjForDObjFixed(gfx_dobj, 0x1C, 0);
	gcAddGObjDisplay(gfx_gobj, mvOpeningRoomRenderTransitionGFXOutline, 0x1E, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddDObjAnimJoint(gfx_dobj, GetAddressFromOffset(sMVOpeningRoomFiles[1], &FILE_03F_TRANSITION_GFX_OUTLINE_OBJECT_OFFSET_2), 0);
	gcAddGObjProcess(gfx_gobj, gcPlayAnimAll, 1, 1);
	gcPlayAnimAll(gfx_gobj);

	sMVOpeningRoomTransitionGFXOverlayGObj = gfx_gobj = gcMakeGObjSPAfter(0, 0, 0x16, 0x80000000);
	gfx_dobj = gcAddDObjForGObj(gfx_gobj, GetAddressFromOffset(sMVOpeningRoomFiles[1], &FILE_03F_TRANSITION_GFX_OVERLAY_OBJECT_OFFSET_1));
	gcAddXObjForDObjFixed(gfx_dobj, 0x1C, 0);
	gcAddGObjDisplay(gfx_gobj, mvOpeningRoomRenderTransitionGFXOverlay, 0x1E, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddDObjAnimJoint(gfx_dobj, GetAddressFromOffset(sMVOpeningRoomFiles[1], &FILE_03F_TRANSITION_GFX_OVERLAY_OBJECT_OFFSET_2), 0);
	gcAddGObjProcess(gfx_gobj, gcPlayAnimAll, 1, 1);
	gcPlayAnimAll(gfx_gobj);
}

// 0x8013407C
void mvOpeningRoomCreateTransitionGFXViewport()
{
	GObj* camera_gobj = gcMakeCameraGObj(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x5F, 0x40000000, -1, 1, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	cobj->vec.eye.x = 0.0F;
	cobj->vec.eye.y = 0.0F;
	cobj->vec.eye.z = 1000.0F;
	cobj->vec.at.x = 0.0F;
	cobj->vec.at.y = 0.0F;
	cobj->vec.at.z = 0.0F;
	cobj->vec.up.x = 0.0F;
	cobj->vec.up.y = 1.0F;
	cobj->vec.up.z = 0.0F;
	cobj->projection.persp.fovy = 39.56115341F;
	cobj->projection.persp.near = 128.0F;
	cobj->projection.persp.far = 16384.0F;
}

// 0x80134184
void mvOpeningRoomDestroyViewports()
{
	gcEjectGObj(sMVOpeningRoomMainCameraGObj);
	gcEjectGObj(sMVOpeningRoomFighterCameraGObj);
}

// 0x801341B4
s32 mvOpeningRoomGetDroppedFighterKind()
{
	s32 fkinds[8] = {

		0, 1, 2, 3, 5, 6, 8, 9
	};
	s32 fkind;

	while (fkind = fkinds[mtTrigGetRandomTimeUCharRange(ARRAY_COUNT(fkinds))], fkind == sMVOpeningRoomPluckedFighterKind);

	return fkind;
}

// 0x80134270
s32 mvOpeningRoomGetPluckedFighterKind()
{
	s32 fkinds[8] = {

		0, 1, 2, 3, 5, 6, 8, 9
	};

	return fkinds[mtTrigGetRandomTimeUCharRange(8)];
}

// 0x801342E4
void mvOpeningRoomInitVars()
{
	sMVOpeningRoomTotalTimeTics = 0;
	sMVOpeningRoomPluckedFighterKind = mvOpeningRoomGetPluckedFighterKind();
	sMVOpeningRoomDroppedFighterKind = mvOpeningRoomGetDroppedFighterKind();
}

// 0x80134318
sb32 mvOpeningRoomSetFrameBuffer(GObj* gobj)
{
	s32 i;
	s32 unused;
	viFrameBuf *nextFb, *currFb;

	if (scNextFrameBuffer != NULL)
		return TRUE;

	nextFb = osViGetNextFramebuffer();
	currFb = osViGetCurrentFramebuffer();

	if ((uintptr_t)dSYSchedulerCurrentFramebuffer == (uintptr_t)&D_NF_80392A00[0])
		i = 1;
	else if ((uintptr_t)dSYSchedulerCurrentFramebuffer == (uintptr_t)&D_NF_80392A00[1])
		i = 2;
	else if ((uintptr_t)dSYSchedulerCurrentFramebuffer == (uintptr_t)&D_NF_80392A00[2])
		i = 0;
	else
		i = 0;

	if ((currFb != &D_NF_80392A00[i]) && (nextFb != &D_NF_80392A00[i]))
	{
		scNextFrameBuffer = &D_NF_80392A00[i];
		scTimestampSetFb = osGetCount();
		return TRUE;
	}
	
	return FALSE;
}

// 0x80134400
void mvOpeningRoomMainProc(GObj *gobj)
{
	sMVOpeningRoomTotalTimeTics++;

	if (sMVOpeningRoomTotalTimeTics >= 10)
	{
		if (sMVOpeningRoomUnusedCounter != 0)
		{
			sMVOpeningRoomUnusedCounter -= 1;
		}
		if ((scSubsysControllerGetPlayerStickInRangeLR(-15, 15)) && (scSubsysControllerGetPlayerStickInRangeUD(-15, 15)))
		{
			sMVOpeningRoomUnusedCounter = 0;
		}
		if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON))
		{
			gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
			gSCManagerSceneData.scene_curr = nSCKindTitle;
			syTaskmanSetLoadScene();
		}

		if (sMVOpeningRoomTotalTimeTics == 280)
		{
			mvOpeningRoomCreatePluckedFighter(sMVOpeningRoomPluckedFighterKind);
			mvOpeningRoomCreatePencilHolder();
			gcEjectGObj(sMVOpeningRoomHALLogoGObj);
			gcEjectGObj(sMVOpeningRoomOverlayGObj);
			gcEjectGObj(sMVOpeningRoomMasterHandShadowGObj);
		}
		if (sMVOpeningRoomTotalTimeTics == 695)
		{
			mvOpeningRoomCreateDroppedFighter(sMVOpeningRoomDroppedFighterKind);
		}
		if (sMVOpeningRoomTotalTimeTics == 380)
		{
			scSubsysFighterSetStatus(sMVOpeningRoomPluckedFighterGObj, 0x10009);

			DObjGetStruct(sMVOpeningRoomPluckedFighterGObj)->rotate.vec.f.x = 0.0F;
			DObjGetStruct(sMVOpeningRoomPluckedFighterGObj)->rotate.vec.f.y = 0.0F;
			DObjGetStruct(sMVOpeningRoomPluckedFighterGObj)->rotate.vec.f.z = 0.0F;
		}
		if (sMVOpeningRoomTotalTimeTics == 450)
		{
			mvOpeningRoomCreateCloseupOverlay();
			gcEjectGObj(sMVOpeningRoomSunlightGObj);
		}
		if (sMVOpeningRoomTotalTimeTics == 560)
		{
			mvOpeningRoomDestroyViewports();
			mvOpeningRoomCreateSecondSceneViewports();
			scSubsysFighterSetStatus(sMVOpeningRoomMasterHandGObj, 0x10010);
		}
		if (sMVOpeningRoomTotalTimeTics == 500)
		{
			gcMoveGObjDL(sMVOpeningRoomPluckedFighterGObj, 9, -1);
			mvOpeningRoomCreateSpotlight();
		}
		if (sMVOpeningRoomTotalTimeTics == 860)
		{
			mvOpeningRoomDestroyViewports();
			mvOpeningRoomCreateThirdSceneViewports();
			scSubsysFighterSetStatus(sMVOpeningRoomMasterHandGObj, 0x10011);
			mvOpeningRoomCreateSnapGFX();
		}
		if (sMVOpeningRoomTotalTimeTics == 1037)
		{
			CObjGetStruct(sMVOpeningRoomCameraGObj)->flags &= ~COBJ_FLAG_FILLCOLOR;
		}
		if (sMVOpeningRoomTotalTimeTics == 1040)
		{
			gcEjectGObj(sMVOpeningRoomOverlayGObj);
			gcEjectGObj(sMVOpeningRoomSpotlightGObj);
			gcEjectGObj(sMVOpeningRoomMasterHandGObj);
			mvOpeningRoomCreateTransitionGFXViewport();
			mvOpeningRoomCreateTransitionGFX();
			mvOpeningRoomDestroyDeskObjects();
			mvOpeningRoomCreateDeskStage();
			mvOpeningRoomCreateBackground();
		}
		if (sMVOpeningRoomTotalTimeTics == I_SEC_TO_TICS(19))
		{
			mvOpeningRoomDestroyViewports();
			mvOpeningRoomCreateCloseUpGFX();
			DObjGetStruct(sMVOpeningRoomPluckedFighterGObj)->rotate.vec.f.x = 0.0F;
			DObjGetStruct(sMVOpeningRoomPluckedFighterGObj)->rotate.vec.f.y = 0.0F;
			DObjGetStruct(sMVOpeningRoomPluckedFighterGObj)->rotate.vec.f.z = 0.0F;
			scSubsysFighterSetStatus(sMVOpeningRoomPluckedFighterGObj, 0x1000A);
			mvOpeningRoomCreateFourthSceneViewports();
		}
		if (sMVOpeningRoomTotalTimeTics == I_SEC_TO_TICS(18))
		{
			gcEjectGObj(sMVOpeningRoomTransitionGFXOverlayGObj);
			gcEjectGObj(sMVOpeningRoomTransitionGFXOutlineGObj);
		}
		if (sMVOpeningRoomTotalTimeTics == I_SEC_TO_TICS(22))
		{
			gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
			gSCManagerSceneData.scene_curr = 0x1D;
			syTaskmanSetLoadScene();
		}
	}
}

// 0x80134788
void mvOpeningRoomFuncStart(void)
{
	s32 unused;
	LBRelocSetup rl_setup;

	func_800048D0(mvOpeningRoomSetFrameBuffer);

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = sMVOpeningRoomStatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(sMVOpeningRoomStatusBuffer);
	rl_setup.force_status_buffer = sMVOpeningRoomForceStatusBuffer;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(sMVOpeningRoomForceStatusBuffer);

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern
	(
		dMVOpeningRoomFileIDs,
		ARRAY_COUNT(dMVOpeningRoomFileIDs),
		sMVOpeningRoomFiles,
		syTaskmanMalloc
		(
			lbRelocGetAllocSize
			(
				dMVOpeningRoomFileIDs,
				ARRAY_COUNT(dMVOpeningRoomFileIDs)
			),
			0x10
		)
	);
	gcMakeGObjSPAfter(0, mvOpeningRoomMainProc, 0, GOBJ_PRIORITY_DEFAULT);
	sMVOpeningRoomCameraGObj = gcMakeDefaultCameraGObj(0, GOBJ_PRIORITY_DEFAULT, 100, COBJ_FLAG_FILLCOLOR | COBJ_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
	efParticleInitAll();
	mvOpeningRoomInitVars();
	efManagerInitEffects();
	ftManagerAllocFighter(FTDATA_FLAG_SUBMOTION, 3);
	ftManagerSetupFilesAllKind(sMVOpeningRoomPluckedFighterKind);
	ftManagerSetupFilesAllKind(sMVOpeningRoomDroppedFighterKind);
	ftManagerSetupFilesAllKind(nFTKindBoss);
	
	sMVOpeningRoomBossFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);
	sMVOpeningRoomPluckedFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);
	sMVOpeningRoomDroppedFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);

	mvOpeningRoomCreateFirstSceneViewports();
	mvOpeningRoomCreateOverlayViewport();
	mvOpeningRoomCreateBackgroundViewport();
	mvOpeningRoomCreateHALLogoViewport();
	mvOpeningRoomCreateOutside();
	mvOpeningRoomCreateOutsideHaze();
	mvOpeningRoomCreateRoomGeo();
	mvOpeningRoomCreateSunlight();
	mvOpeningRoomCreateDesk();
	mvOpeningRoomCreateHALLogoBackground();
	mvOpeningRoomCreateHALLogo();
	mvOpeningRoomCreateBooks();
	mvOpeningRoomCreateLamp();
	mvOpeningRoomCreateTissueBox();
	mvOpeningRoomCreateMasterHand();
	mvOpeningRoomCreateMasterHandShadow();
	scSubsysFighterSetLightParams(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);
	func_800266A0_272A0();
	auPlaySong(0, nSYAudioBGMOpening);
	sySchedulerSetTicCount(0);

	gSCManagerUnkown0x800A50F0 = 0;
}

// 0x80134BD0
SYVideoSetup dMVOpeningRoomVideoSetup = SYVIDEO_SETUP_DEFAULT();

// 0x80134BEC
SYTaskmanSetup dMVOpeningRoomTaskmanSetup =
{
    // Task Manager Buffer Setup
    {
        0,                              // ???
        gcRunAll,                       // Update function
        scManagerFuncDraw,              // Frame draw function
        &ovl34_BSS_END,                 // Allocatable memory pool start
        0,                              // Allocatable memory pool size
        1,                              // ???
        2,                              // Number of contexts?
        sizeof(Gfx) * 1500,             // Display List Buffer 0 Size
        sizeof(Gfx) * 512,             	// Display List Buffer 1 Size
        0,                              // Display List Buffer 2 Size
        0,                              // Display List Buffer 3 Size
        0x8000,                         // Graphics Heap Size
        2,                              // ???
        0xC000,                         // RDP Output Buffer Size
        mvOpeningRoomFuncLights,      	// Pre-render function
        syControllerFuncRead,           // Controller I/O function
    },

    0,                                  // Number of GObjThreads
    sizeof(u64) * 192,                  // Thread stack size
    0,                                  // Number of thread stacks
    0,                                  // ???
    0,                                  // Number of GObjProcesses
    0,                                  // Number of GObjs
    sizeof(GObj),                       // GObj size
    0,                                  // Number of XObjs
    dLBCommonFuncMatrixList,            // Matrix function list
    NULL,                               // DObjVec eject function
    0,                                  // Number of AObjs
    0,                                  // Number of MObjs
    0,                                  // Number of DObjs
    sizeof(DObj),                       // DObj size
    0,                                  // Number of SObjs
    sizeof(SObj),                       // SObj size
    0,                                  // Number of Cameras
    sizeof(CObj),                       // Camera size
    
    mvOpeningRoomFuncStart            	// Task start function
};

// 0x801349BC
void mvOpeningRoomStartScene(void)
{
	dMVOpeningRoomVideoSetup.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&dMVOpeningRoomVideoSetup);

	dMVOpeningRoomTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl34_BSS_END);
	scManagerFuncUpdate(&dMVOpeningRoomTaskmanSetup);

	func_800048D0(NULL);
}
