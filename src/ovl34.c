#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <sc/scene.h>
#include <gr/ground.h>
#include <lb/library.h>
#include <sys/system_00.h>


typedef struct viFrameBuf
{
	u16 pix[230 * 320];

} viFrameBuf;


// Externs
extern void* scNextFrameBuffer;
extern void* D_80044FA8_407B8;
extern u32 scTimestampSetFb;
extern s32 D_800A50F0;
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
u32 D_ovl34_80134A20[8] = {

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
uintptr_t gMVOpeningFirstDestinationMasterHandFigatreeHeap;

// 0x80134CDC
uintptr_t gMVOpeningFirstDestinationPluckedFigatreeHeap;

// 0x80134CE0
uintptr_t gMVOpeningFirstDestinationDroppedFigatreeHeap;

// 0x80134CE4
s32 gMVOpeningFirstDestinationFramesElapsed;

// 0x80134CE8
GObj* gMVOpeningFirstDestinationMainCameraGObj;

// 0x80134CEC
GObj* gMVOpeningFirstDestinationFighterCameraGObj;

// 0x80134CF0
GObj* gMVOpeningFirstDestinationHALLogoCameraGObj;

// 0x80134CF4
GObj* gMVOpeningFirstDestinationMasterHandGObj;

// 0x80134CF8
s32 gMVOpeningFirstDestinationPluckedFighterKind;

// 0x80134CFC
GObj* gMVOpeningFirstDestinationDroppedFighterKind;

// 0x80134D00
GObj* gMVOpeningFirstDestinationHALLogoGObj;

// 0x80134D04
GObj* gMVOpeningFirstDestinationPluckedFighterGObj;

// 0x80134D08
GObj* gMVOpeningFirstDestinationDroppedFighterGObj;

// 0x80134D0C
GObj* gMVOpeningFirstDestinationRoomGObj;

// 0x80134D10
GObj* gMVOpeningFirstDestinationSunlightGObj;

// 0x80134D14
GObj* gMVOpeningFirstDestinationDeskGObj;

// 0x80134D18
GObj* gMVOpeningFirstDestinationOutsideGObj;

// 0x80134D1C
GObj* gMVOpeningFirstDestinationOutsideHazeGObj;

// 0x80134D20
GObj* gMVOpeningFirstDestinationBooksGObj;

// 0x80134D24
GObj* gMVOpeningFirstDestinationPencilHolderGObj;

// 0x80134D28
GObj* gMVOpeningFirstDestinationLampGObj;

// 0x80134D2C
GObj* gMVOpeningFirstDestinationTissueBoxGObj;

// 0x80134D30
GObj* gMVOpeningFirstDestinationMasterHandShadowGObj;

// 0x80134D34
s32 D_ovl34_80134D34;

// 0x80134D38
s32 gMVOpeningFirstDestinationOverlayAlpha;

// 0x80134D3C
GObj* gMVOpeningFirstDestinationOverlayGObj;

// 0x80134D40
GObj* gMVOpeningFirstDestinationSpotlightGObj;

// 0x80134D44
GObj* gMVOpeningFirstDestinationBackgroundGObj;

// 0x80134D48
GObj* gMVOpeningFirstDestinationTransitionGFXOutlineGObj;

// 0x80134D4C
GObj* gMVOpeningFirstDestinationTransitionGFXOverlayGObj;

// 0x80134D50
GObj* gMVOpeningFirstDestinationCameraGObj;

// 0x80134D54
s32 gMVOpeningFirstDestinationUnusedCounter;

// 0x80134D58
lbFileNode D_ovl34_80134D58[100];

// 0x80135078
lbFileNode D_ovl34_80135078[7];

// 0x801350B0
uintptr_t gMVOpeningFirstDestinationFiles[9];


// 0x80131B00
void mvOpeningFirstDestinationFuncLights(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
void mvOpeningFirstDestinationFadeOutAndDestroyRoomGeo(GObj* room_gobj)
{
	if (gMVOpeningFirstDestinationFramesElapsed > I_SEC_TO_TICS(18))
		gcPlayAnimAll(room_gobj);

	if (gMVOpeningFirstDestinationFramesElapsed == I_SEC_TO_TICS(19))
		gcEjectGObj(room_gobj);
}

// 0x80131BA8
void mvOpeningFirstDestinationCreateRoomGeo()
{
	GObj* room_gobj;

	gMVOpeningFirstDestinationRoomGObj = room_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(room_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_ROOM_OFFSET_2), 0);
	gcAddGObjDisplay(room_gobj, gcDrawDObjTreeDLLinksForGObj, 6, 0x80000000, -1);
	gcAddMObjAll(room_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_ROOM_OFFSET_1));
	gcAddMatAnimJointAll(room_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_ROOM_OFFSET_3), 0.0F);
	gcAddGObjProcess(room_gobj, mvOpeningFirstDestinationFadeOutAndDestroyRoomGeo, 1, 1);
	gcPlayAnimAll(room_gobj);
}

// 0x80131C84
void mvOpeningFirstDestinationCreateSunlight()
{
	GObj* sunlight_gobj;

	gMVOpeningFirstDestinationSunlightGObj = sunlight_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddOMMtxForDObjFixed(gcAddDObjForGObj(sunlight_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_SUNLIGHT_OBJECT_OFFSET)), 0x1C, 0);
	gcAddGObjDisplay(sunlight_gobj, gcDrawDObjDLLinksForGObj, 6, 0x80000000, -1);
}

// 0x80131D08
void mvOpeningFirstDestinationCreateDesk()
{
	GObj* desk_gobj;

	gMVOpeningFirstDestinationDeskGObj = desk_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(desk_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_DESK_OBJECT_OFFSET), 0);
	gcAddGObjDisplay(desk_gobj, gcDrawDObjTreeForGObj, 6, 0x80000000, -1);
}

// 0x80131D80
void mvOpeningFirstDestinationCreateOutside()
{
	GObj* outside_gobj;

	gMVOpeningFirstDestinationOutsideGObj = outside_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddOMMtxForDObjFixed(gcAddDObjForGObj(outside_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_OUTSIDE_OBJECT_OFFSET)), 0x1C, 0);
	gcAddGObjDisplay(outside_gobj, gcDrawDObjDLLinksForGObj, 6, 0x80000000, -1);
}

// 0x80131E04
void mvOpeningFirstDestinationCreateOutsideHaze()
{
	GObj* outside_haze_gobj;

	gMVOpeningFirstDestinationOutsideHazeGObj = outside_haze_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddOMMtxForDObjFixed(gcAddDObjForGObj(outside_haze_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_OUTSIDE_HAZE_OBJECT_OFFSET)), 0x1C, 0);
	gcAddGObjDisplay(outside_haze_gobj, gcDrawDObjDLLinksForGObj, 6, 0x80000000, -1);
}

// 0x80131E88
void mvOpeningFirstDestinationAnimateDeskObjects(GObj* desk_object_gobj)
{
	if (gMVOpeningFirstDestinationFramesElapsed >= 560)
		gcPlayAnimAll(desk_object_gobj);
}

// 0x80131EBC
void mvOpeningFirstDestinationCreateBooks()
{
	GObj* books_gobj;

	gMVOpeningFirstDestinationBooksGObj = books_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(books_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_BOOKS_OBJECT_OFFSET_1), 0);
	gcAddGObjDisplay(books_gobj, gcDrawDObjTreeForGObj, 6, 0x80000000, -1);
	gcAddGObjProcess(books_gobj, mvOpeningFirstDestinationAnimateDeskObjects, 1, 1);
	gcAddAnimJointAll(books_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_BOOKS_OBJECT_OFFSET_2), 0.0F);
	gcPlayAnimAll(books_gobj);
}

// 0x80131F7C
void mvOpeningFirstDestinationCreatePencilHolder()
{
	GObj* pencil_holder_gobj;

	gMVOpeningFirstDestinationPencilHolderGObj = pencil_holder_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(pencil_holder_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_PENCIL_HOLDER_OBJECT_OFFSET_1), 0);
	gcAddGObjDisplay(pencil_holder_gobj, gcDrawDObjTreeForGObj, 6, 0x80000000, -1);
	gcAddAnimJointAll(pencil_holder_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_PENCIL_HOLDER_OBJECT_OFFSET_2), 0.0F);
	gcAddGObjProcess(pencil_holder_gobj, mvOpeningFirstDestinationAnimateDeskObjects, 1, 1);
	gcPlayAnimAll(pencil_holder_gobj);
}

// 0x8013203C
void mvOpeningFirstDestinationCreateLamp()
{
	GObj* lamp_gobj;

	gMVOpeningFirstDestinationLampGObj = lamp_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(lamp_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_LAMP_OBJECT_OFFSET_1), 0);
	gcAddGObjDisplay(lamp_gobj, gcDrawDObjTreeForGObj, 6, 0x80000000, -1);
	gcAddAnimJointAll(lamp_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_LAMP_OBJECT_OFFSET_2), 0.0F);
	gcAddGObjProcess(lamp_gobj, mvOpeningFirstDestinationAnimateDeskObjects, 1, 1);
	gcPlayAnimAll(lamp_gobj);
}

// 0x801320FC
void mvOpeningFirstDestinationAnimateTissueBox(GObj* tissue_box_gobj)
{
	if (gMVOpeningFirstDestinationFramesElapsed >= 560)
		gcPlayAnimAll(tissue_box_gobj);
}

// 0x80132130
void mvOpeningFirstDestinationCreateTissueBox()
{
	GObj* tissue_box_gobj;
	DObj* tissue_box_dobj;

	gMVOpeningFirstDestinationTissueBoxGObj = tissue_box_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	tissue_box_dobj = gcAddDObjForGObj(tissue_box_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_TISSUE_BOX_OBJECT_OFFSET_1));
	gcAddOMMtxForDObjFixed(tissue_box_dobj, 0x1C, 0);
	gcAddGObjDisplay(tissue_box_gobj, gcDrawDObjDLHead0, 6, 0x80000000, -1);
	gcAddDObjAnimJoint(tissue_box_dobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_TISSUE_BOX_OBJECT_OFFSET_2), 0);
	gcAddGObjProcess(tissue_box_gobj, mvOpeningFirstDestinationAnimateTissueBox, 1, 1);
	gcPlayAnimAll(tissue_box_gobj);
}

// 0x801321F8
void mvOpeningFirstDestinationCreateMasterHand()
{
	GObj* fighter_gobj;
	ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.ft_kind = nFTKindBoss;
	spawn_info.costume = ftParamGetCostumeCommonID(nFTKindBoss, 0);
	spawn_info.pos.x = 0.0f;
	spawn_info.pos.y = 0.0f;
	spawn_info.pos.z = 0.0f;
	spawn_info.figatree_heap = gMVOpeningFirstDestinationMasterHandFigatreeHeap;
	gMVOpeningFirstDestinationMasterHandGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

	scSubsysFighterSetStatus(fighter_gobj, 0x1000F);
}

// 0x801322A0 - Unused?
void func_ovl34_801322A0(s32 arg0)
{
	func_ovl1_803905F4(gMVOpeningFirstDestinationMasterHandGObj, arg0);
}

// 0x801322C8 - Unused?
void func_ovl34_801322C8(GObj* fighter_gobj)
{
	ftStruct* fp;
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
void mvOpeningFirstDestinationCreatePluckedFighter(s32 ft_kind)
{
	GObj* fighter_gobj;
	ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.ft_kind = ft_kind;
	spawn_info.costume = ftParamGetCostumeCommonID(ft_kind, 0);
	spawn_info.pos.x = 0.0f;
	spawn_info.pos.y = 0.0f;
	spawn_info.pos.z = 0.0f;
	spawn_info.figatree_heap = gMVOpeningFirstDestinationPluckedFigatreeHeap;
	gMVOpeningFirstDestinationPluckedFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

	DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;

	scSubsysFighterSetStatus(fighter_gobj, 0x10008);

	gcMoveGObjDL(fighter_gobj, 6, -1);
}

// 0x80132404
void mvOpeningFirstDestinationRenderHALLogoBackground(GObj* logo_gobj)
{
	if (gMVOpeningFirstDestinationFramesElapsed >= 60)
	{
		if (gMVOpeningFirstDestinationOverlayAlpha > 0)
		{
			gMVOpeningFirstDestinationOverlayAlpha -= 13;

			if (gMVOpeningFirstDestinationOverlayAlpha < 0)
				gMVOpeningFirstDestinationOverlayAlpha = 0;
		}
	}

	gDPPipeSync(gSYTaskmanDLHeads[1]++);
	gDPSetCycleType(gSYTaskmanDLHeads[1]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[1]++, 0, 0, 0, 0, 0, gMVOpeningFirstDestinationOverlayAlpha);
	gDPSetCombineLERP(gSYTaskmanDLHeads[1]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[1]++, 10, 10, 310, 230);
	gDPPipeSync(gSYTaskmanDLHeads[1]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[1]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80132544
void mvOpeningFirstDestinationCreateHALLogoBackground()
{
	GObj* logo_bg_gobj;

	gMVOpeningFirstDestinationOverlayAlpha = 0xFF;
	gMVOpeningFirstDestinationOverlayGObj = logo_bg_gobj = gcMakeGObjSPAfter(0, 0, 0x12, 0x80000000);
	gcAddGObjDisplay(logo_bg_gobj, mvOpeningFirstDestinationRenderHALLogoBackground, 0x1A, 0x80000000, -1);
}

// 0x801325A4
void mvOpeningFirstDestinationCreateHALLogo()
{
	GObj* logo_gobj;

	gMVOpeningFirstDestinationHALLogoGObj = logo_gobj = gcMakeGObjSPAfter(0, 0, 0x15, 0x80000000);
	gcSetupCommonDObjs(logo_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_HAL_LOGO_OFFSET_2), 0);
	gcAddGObjDisplay(logo_gobj, gcDrawDObjTreeDLLinksForGObj, 0x1D, 0x80000000, -1);
	gcAddMObjAll(logo_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_HAL_LOGO_OFFSET_1));
	gcAddMatAnimJointAll(logo_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_HAL_LOGO_OFFSET_3), 0.0F);
	gcAddGObjProcess(logo_gobj, gcPlayAnimAll, 1, 1);
	gcPlayAnimAll(logo_gobj);
}

// 0x80132680
void mvOpeningFirstDestinationCreateSnapGFX()
{
	GObj* snap_gfx_gobj;

	snap_gfx_gobj = gcMakeGObjSPAfter(0, 0, 0x13, 0x80000000);
	gcSetupCommonDObjs(snap_gfx_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_SNAP_GFX_OBJECT_OFFSET_1), 0);
	gcAddGObjDisplay(snap_gfx_gobj, gcDrawDObjTreeDLLinksForGObj, 0x1B, 0x80000000, -1);
	gcAddAnimJointAll(snap_gfx_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_SNAP_GFX_OBJECT_OFFSET_2), 0.0F);
	gcAddGObjProcess(snap_gfx_gobj, gcPlayAnimAll, 1, 1);
	gcPlayAnimAll(snap_gfx_gobj);
}

// 0x80132738
void mvOpeningFirstDestinationCreateCloseUpGFX()
{
	GObj* closeup_gfx_gobj;

	// Close-up GFX air
	closeup_gfx_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(closeup_gfx_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_CLOSEUP_GFX_AIR_OFFSET_2), 0);
	gcAddGObjDisplay(closeup_gfx_gobj, gcDrawDObjTreeDLLinksForGObj, 6, 0x80000000, -1);
	DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.x = 0.0F;
	DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.y = 0.0F;
	DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.z = 0.0F;
	gcAddMObjAll(closeup_gfx_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_CLOSEUP_GFX_AIR_OFFSET_1));
	gcAddMatAnimJointAll(closeup_gfx_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_CLOSEUP_GFX_AIR_OFFSET_3), 0.0F);
	gcAddGObjProcess(closeup_gfx_gobj, gcPlayAnimAll, 1, 1);
	gcAddAnimJointAll(closeup_gfx_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_CLOSEUP_GFX_AIR_OFFSET_4), 0.0F);
	gcPlayAnimAll(closeup_gfx_gobj);

	// Close-up GFX ground
	closeup_gfx_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(closeup_gfx_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_CLOSEUP_GFX_GROUND_OFFSET_2), 0);
	gcAddGObjDisplay(closeup_gfx_gobj, gcDrawDObjTreeDLLinksForGObj, 6, 0x80000000, -1);
	DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.x = 0.0F;
	DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.y = 0.0F;
	DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.z = 0.0F;
	gcAddMObjAll(closeup_gfx_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_CLOSEUP_GFX_GROUND_OFFSET_1));
	gcAddMatAnimJointAll(closeup_gfx_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_CLOSEUP_GFX_GROUND_OFFSET_3), 0.0F);
	gcAddGObjProcess(closeup_gfx_gobj, gcPlayAnimAll, 1, 1);
	gcAddAnimJointAll(closeup_gfx_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_CLOSEUP_GFX_GROUND_OFFSET_4), 0.0F);
	gcPlayAnimAll(closeup_gfx_gobj);
}

// 0x80132928
void mvOpeningFirstDestinationCreateDroppedFighter(s32 ft_kind)
{
	GObj* fighter_gobj;
	ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.ft_kind = ft_kind;
	spawn_info.costume = ftParamGetCostumeCommonID(ft_kind, 0);
	spawn_info.figatree_heap = gMVOpeningFirstDestinationDroppedFigatreeHeap;
	spawn_info.pos.x = 872.3249512F;
	spawn_info.pos.y = 4038.864014F;
	spawn_info.pos.z = -4734.600098F;
	gMVOpeningFirstDestinationDroppedFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

	scSubsysFighterSetStatus(fighter_gobj, 0x10009);
	gcMoveGObjDL(fighter_gobj, 6, -1);
}

// 0x801329F0
void mvOpeningFirstDestinationCreateMasterHandShadow()
{
	GObj* masterhand_shadow_gobj;
	DObj* masterhand_shadow_dobj;

	gMVOpeningFirstDestinationMasterHandShadowGObj = masterhand_shadow_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	masterhand_shadow_dobj = gcAddDObjForGObj(masterhand_shadow_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_MASTERHAND_SHADOW_OBJECT_OFFSET_1));
	gcAddOMMtxForDObjFixed(masterhand_shadow_dobj, 0x1C, 0);
	gcAddGObjDisplay(masterhand_shadow_gobj, gcDrawDObjDLHead1, 9, 0x80000000, -1);
	gcAddDObjAnimJoint(masterhand_shadow_dobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_MASTERHAND_SHADOW_OBJECT_OFFSET_2), 0);
	gcAddGObjProcess(masterhand_shadow_gobj,gcPlayAnimAll, 1, 1);
}

// 0x80132AB0
void mvOpeningFirstDestinationAnimateDeskStage(GObj* desk_stage_gobj)
{
	if (gMVOpeningFirstDestinationFramesElapsed > 1060)
		gcPlayAnimAll(desk_stage_gobj);
}

// 0x80132AE4
void mvOpeningFirstDestinationCreateDeskStage()
{
	GObj* desk_stage_gobj;

	desk_stage_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(desk_stage_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_DESK_STAGE_OFFSET_2), 0);
	gcAddGObjDisplay(desk_stage_gobj, gcDrawDObjTreeDLLinksForGObj, 6, 0x80000000, -1);
	gcAddMObjAll(desk_stage_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_DESK_STAGE_OFFSET_1));
	gcAddMatAnimJointAll(desk_stage_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_DESK_STAGE_OFFSET_3), 0.0F);
	gcAddGObjProcess(desk_stage_gobj, mvOpeningFirstDestinationAnimateDeskStage, 1, 1);
	gcPlayAnimAll(desk_stage_gobj);
}

// 0x80132BB8
void mvOpeningFirstDestinationRenderCloseupOverlay(GObj* arg0)
{
	if (gMVOpeningFirstDestinationOverlayAlpha < 0xA0)
	{
		gMVOpeningFirstDestinationOverlayAlpha += 9;

		if (gMVOpeningFirstDestinationOverlayAlpha >= 0xA1)
			gMVOpeningFirstDestinationOverlayAlpha = 0xA0;
	}

	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0, 0, 0, gMVOpeningFirstDestinationOverlayAlpha);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 10, 10, 310, 230);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80132CEC
void mvOpeningFirstDestinationCreateCloseupOverlay()
{
	GObj* overlay_gobj;

	gMVOpeningFirstDestinationOverlayAlpha = 0;
	gMVOpeningFirstDestinationOverlayGObj = overlay_gobj = gcMakeGObjSPAfter(0, 0, 0x12, 0x80000000);
	gcAddGObjDisplay(overlay_gobj, mvOpeningFirstDestinationRenderCloseupOverlay, 0x1A, 0x80000000, -1);
}

// 0x80132D48
void mvOpeningFirstDestinationCreateOverlayViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x3C, 0x04000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132DE8
void mvOpeningFirstDestinationRenderBackground(GObj* bg_gobj)
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
void mvOpeningFirstDestinationCreateBackground()
{
	GObj* bg_gobj;
	SObj* bg_sobj;

	gMVOpeningFirstDestinationBackgroundGObj = bg_gobj = gcMakeGObjSPAfter(0, 0, 0x14, 0x80000000);
	gcAddGObjDisplay(bg_gobj, mvOpeningFirstDestinationRenderBackground, 0x1C, 0x80000000, -1);

	bg_sobj = lbCommonMakeSObjForGObj(bg_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[7], &FILE_05A_BACKGROUND_IMAGE_OFFSET));
	bg_sobj->pos.x = 10.0f;
	bg_sobj->pos.y = 10.0f;
}

// 0x80132FCC
void mvOpeningFirstDestinationPositionSpotlight(GObj* spotlight_gobj, s32 ft_kind)
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

	DObjGetStruct(spotlight_gobj)->translate.vec.f.x = positions[ft_kind].x * 30.0F;
	DObjGetStruct(spotlight_gobj)->translate.vec.f.y = positions[ft_kind].y * 30.0F;
	DObjGetStruct(spotlight_gobj)->translate.vec.f.z = positions[ft_kind].z * 30.0F;
	DObjGetStruct(spotlight_gobj)->scale.vec.f.x = scales[ft_kind].x;
	DObjGetStruct(spotlight_gobj)->scale.vec.f.y = scales[ft_kind].y;
	DObjGetStruct(spotlight_gobj)->scale.vec.f.z = scales[ft_kind].z;
}

// 0x801330B8
void mvOpeningFirstDestinationCreateSpotlight()
{
	GObj* spotlight_gobj;

	gMVOpeningFirstDestinationSpotlightGObj = spotlight_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddOMMtxForDObjFixed(gcAddDObjForGObj(spotlight_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_SPOTLIGHT_OFFSET_2)), 0x1C, 0);
	gcAddGObjDisplay(spotlight_gobj, gcDrawDObjDLHead1, 0x1B, 0x80000000, -1);
	gcAddMObjAll(spotlight_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_SPOTLIGHT_OFFSET_1));
	gcAddMatAnimJointAll(spotlight_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[0], &FILE_034_SPOTLIGHT_OFFSET_3), 0.0F);
	gcAddGObjProcess(spotlight_gobj, gcPlayAnimAll, 1, 1);
	gcPlayAnimAll(spotlight_gobj);
	mvOpeningFirstDestinationPositionSpotlight(spotlight_gobj, gMVOpeningFirstDestinationPluckedFighterKind);
}

// 0x801331B0
void mvOpeningFirstDestinationDestroyDeskObjects()
{
	gcEjectGObj(gMVOpeningFirstDestinationOutsideGObj);
	gcEjectGObj(gMVOpeningFirstDestinationOutsideHazeGObj);
	gcEjectGObj(gMVOpeningFirstDestinationBooksGObj);
	gcEjectGObj(gMVOpeningFirstDestinationPencilHolderGObj);
	gcEjectGObj(gMVOpeningFirstDestinationLampGObj);
	gcEjectGObj(gMVOpeningFirstDestinationTissueBoxGObj);
}

// 0x80133210
void mvOpeningFirstDestinationConfigureFirstSceneViewport(GObj* camera_gobj)
{
	Camera *cam = CameraGetStruct(camera_gobj);
	syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	cam->projection.persp.near = 80.0F;
	cam->projection.persp.far = 15000.0F;
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[2], &FILE_038_CAMERA_PARAMETERS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
	cam->flags |= 4;
}

// 0x801332BC
void mvOpeningFirstDestinationCreateFirstSceneViewports()
{
	GObj* camera_gobj;

	gMVOpeningFirstDestinationMainCameraGObj = camera_gobj = gcMakeCameraGObj(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x00000040, -1, 0, 1, 0, 1, 0);
	gcAddOMMtxForCamera(CameraGetStruct(camera_gobj), 3, 0);
	gcAddOMMtxForCamera(CameraGetStruct(camera_gobj), 0xE, 0);
	mvOpeningFirstDestinationConfigureFirstSceneViewport(camera_gobj);

	gMVOpeningFirstDestinationFighterCameraGObj = camera_gobj = gcMakeCameraGObj(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x28, 0x08000200, -1, 1, 1, 0, 1, 0);
	mvOpeningFirstDestinationConfigureFirstSceneViewport(camera_gobj);
}

// 0x801333DC
void mvOpeningFirstDestinationConfigureSecondSceneViewport(GObj* camera_gobj)
{
	Camera *cam = CameraGetStruct(camera_gobj);
	syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[3], &FILE_039_CAMERA_PARAMETERS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
	cam->flags |= 4;
}

// 0x80133470
void mvOpeningFirstDestinationCreateSecondSceneViewports()
{
	GObj* camera_gobj;

	gMVOpeningFirstDestinationMainCameraGObj = camera_gobj = gcMakeCameraGObj(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x00000040, -1, 0, 1, 0, 1, 0);
	gcAddOMMtxForCamera(CameraGetStruct(camera_gobj), 3, 0);
	gcAddOMMtxForCamera(CameraGetStruct(camera_gobj), 0x8, 0);
	mvOpeningFirstDestinationConfigureSecondSceneViewport(camera_gobj);

	gMVOpeningFirstDestinationFighterCameraGObj = camera_gobj = gcMakeCameraGObj(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x28, 0x08000200, -1, 1, 1, 0, 1, 0);
	mvOpeningFirstDestinationConfigureSecondSceneViewport(camera_gobj);
}

// 0x80133590
void mvOpeningFirstDestinationConfigureThirdSceneViewport(GObj* camera_gobj)
{
	Camera *cam = CameraGetStruct(camera_gobj);
	syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	cam->vec.eye.x = 9.2993F;
	cam->vec.eye.y = 3880.389404F;
	cam->vec.eye.z = 4077.981689F;
	cam->vec.at.x = 0.9915789962F;
	cam->vec.at.y = 2995.681396F;
	cam->vec.at.z = -388.9534302F;
	cam->vec.up.x = 0.0F;
	cam->vec.up.y = 1.0F;
	cam->vec.up.z = 0.0F;
	cam->projection.persp.fovy = 18.60718727F;
	cam->projection.persp.near = 128.0F;
	cam->projection.persp.far = 16384.0F;
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[4], &FILE_03A_CAMERA_PARAMETERS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
	cam->flags |= 4;
}

// 0x801336A8
void mvOpeningFirstDestinationCreateThirdSceneViewports()
{
	GObj* camera_gobj;
	GObj* camera_gobj_2;

	gMVOpeningFirstDestinationMainCameraGObj = camera_gobj = gcMakeCameraGObj(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x00000040, -1, 0, 1, 0, 1, 0);
	gcAddOMMtxForCamera(CameraGetStruct(camera_gobj), 3, 0);
	gcAddOMMtxForCamera(CameraGetStruct(camera_gobj), 0x8, 0);
	mvOpeningFirstDestinationConfigureThirdSceneViewport(camera_gobj);

	gMVOpeningFirstDestinationFighterCameraGObj = camera_gobj_2 = gcMakeCameraGObj(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x28, 0x08000200, -1, 1, 1, 0, 1, 0);
	mvOpeningFirstDestinationConfigureThirdSceneViewport(camera_gobj_2);
}

// 0x801337C8
void mvOpeningFirstDestinationConfigureFourthSceneViewport(GObj* camera_gobj)
{
	Camera *cam = CameraGetStruct(camera_gobj);
	syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	cam->vec.eye.x = -1039.880615F;
	cam->vec.eye.y = 3199.215576F;
	cam->vec.eye.z = -1235.168823F;
	cam->vec.at.x = -1162.40979F;
	cam->vec.at.y = 2127.824463F;
	cam->vec.at.z = -3853.073242F;
	cam->vec.up.x = 0.0F;
	cam->vec.up.y = 1.0F;
	cam->vec.up.z = 0.0F;
	cam->projection.persp.fovy = 11.98226547F;
	cam->projection.persp.near = 128.0F;
	cam->projection.persp.far = 16384.0F;
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[5], &FILE_03B_CAMERA_PARAMETERS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 0x801338D4
void mvOpeningFirstDestinationCreateFourthSceneViewports()
{
	GObj* camera_gobj;
	GObj* camera_gobj_2;

	gMVOpeningFirstDestinationMainCameraGObj = camera_gobj = gcMakeCameraGObj(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x00000040, -1, 1, 1, 0, 1, 0);
	mvOpeningFirstDestinationConfigureFourthSceneViewport(camera_gobj);

	gMVOpeningFirstDestinationFighterCameraGObj = camera_gobj_2 = gcMakeCameraGObj(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x28, 0x00000200, -1, 1, 1, 0, 1, 0);
	mvOpeningFirstDestinationConfigureFourthSceneViewport(camera_gobj_2);
}

// 0x801339CC
void mvOpeningFirstDestinationCreateBackgroundViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x5A, 0x10000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133A6C
void mvOpeningFirstDestinationCreateHALLogoViewport()
{
	GObj *camera_gobj;
	Camera *cam;

	gMVOpeningFirstDestinationHALLogoCameraGObj = camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x32, 0x20000000, -1, 1, 1, 0, 1, 0);
	cam = CameraGetStruct(camera_gobj);
	syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[2], &FILE_038_CAMERA_PARAMETERS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 0x80133B58
void mvOpeningFirstDestinationRenderTransitionGFXOverlay(GObj* gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetColorImage(gSYTaskmanDLHeads[0]++, G_IM_FMT_RGBA, G_IM_SIZ_16b, gSYDisplayResWidth, gSYDisplayZBuffer);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 255, 255, 255, 255);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, 1,  0, 0, 0, PRIMITIVE,  0, 0, 0, 1);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_PASS, G_RM_OPA_SURF2);
	gcDrawDObjDLHead0(gobj);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetColorImage(gSYTaskmanDLHeads[0]++, G_IM_FMT_RGBA, gSYDisplayPixelComponentSize, gSYDisplayResWidth, (void*)0x0F000000);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80133CEC
void mvOpeningFirstDestinationRenderTransitionGFXOutline(GObj* gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetColorImage(gSYTaskmanDLHeads[0]++, G_IM_FMT_RGBA, G_IM_SIZ_16b, gSYDisplayResWidth, gSYDisplayZBuffer);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0, 0, 0, 255);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 0, 0, 320, 240);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetColorImage(gSYTaskmanDLHeads[0]++, G_IM_FMT_RGBA, gSYDisplayPixelComponentSize, gSYDisplayResWidth, (void*)0x0F000000);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, SHADE,  0, 0, 0, 1,  0, 0, 0, SHADE,  0, 0, 0, 1);
	gcDrawDObjDLHead0(gobj);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80133EFC
void mvOpeningFirstDestinationCreateTransitionGFX()
{
	GObj* gfx_gobj;
	DObj* gfx_dobj;

	gMVOpeningFirstDestinationTransitionGFXOutlineGObj = gfx_gobj = gcMakeGObjSPAfter(0, 0, 0x16, 0x80000000);
	gfx_dobj = gcAddDObjForGObj(gfx_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[1], &FILE_03F_TRANSITION_GFX_OUTLINE_OBJECT_OFFSET_1));
	gcAddOMMtxForDObjFixed(gfx_dobj, 0x1C, 0);
	gcAddGObjDisplay(gfx_gobj, mvOpeningFirstDestinationRenderTransitionGFXOutline, 0x1E, 0x80000000, -1);
	gcAddDObjAnimJoint(gfx_dobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[1], &FILE_03F_TRANSITION_GFX_OUTLINE_OBJECT_OFFSET_2), 0);
	gcAddGObjProcess(gfx_gobj, gcPlayAnimAll, 1, 1);
	gcPlayAnimAll(gfx_gobj);

	gMVOpeningFirstDestinationTransitionGFXOverlayGObj = gfx_gobj = gcMakeGObjSPAfter(0, 0, 0x16, 0x80000000);
	gfx_dobj = gcAddDObjForGObj(gfx_gobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[1], &FILE_03F_TRANSITION_GFX_OVERLAY_OBJECT_OFFSET_1));
	gcAddOMMtxForDObjFixed(gfx_dobj, 0x1C, 0);
	gcAddGObjDisplay(gfx_gobj, mvOpeningFirstDestinationRenderTransitionGFXOverlay, 0x1E, 0x80000000, -1);
	gcAddDObjAnimJoint(gfx_dobj, GetAddressFromOffset(gMVOpeningFirstDestinationFiles[1], &FILE_03F_TRANSITION_GFX_OVERLAY_OBJECT_OFFSET_2), 0);
	gcAddGObjProcess(gfx_gobj, gcPlayAnimAll, 1, 1);
	gcPlayAnimAll(gfx_gobj);
}

// 0x8013407C
void mvOpeningFirstDestinationCreateTransitionGFXViewport()
{
	GObj* camera_gobj = gcMakeCameraGObj(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x5F, 0x40000000, -1, 1, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	cam->vec.eye.x = 0.0F;
	cam->vec.eye.y = 0.0F;
	cam->vec.eye.z = 1000.0F;
	cam->vec.at.x = 0.0F;
	cam->vec.at.y = 0.0F;
	cam->vec.at.z = 0.0F;
	cam->vec.up.x = 0.0F;
	cam->vec.up.y = 1.0F;
	cam->vec.up.z = 0.0F;
	cam->projection.persp.fovy = 39.56115341F;
	cam->projection.persp.near = 128.0F;
	cam->projection.persp.far = 16384.0F;
}

// 0x80134184
void mvOpeningFirstDestinationDestroyViewports()
{
	gcEjectGObj(gMVOpeningFirstDestinationMainCameraGObj);
	gcEjectGObj(gMVOpeningFirstDestinationFighterCameraGObj);
}

// 0x801341B4
s32 mvOpeningFirstDestinationGetDroppedFighterKind()
{
	s32 ft_kinds[8] = {

		0, 1, 2, 3, 5, 6, 8, 9
	};
	s32 ft_kind;

	while (ft_kind = ft_kinds[mtTrigGetRandomTimeUCharRange(ARRAY_COUNT(ft_kinds))], ft_kind == gMVOpeningFirstDestinationPluckedFighterKind);

	return ft_kind;
}

// 0x80134270
s32 mvOpeningFirstDestinationGetPluckedFighterKind()
{
	s32 ft_kinds[8] = {

		0, 1, 2, 3, 5, 6, 8, 9
	};

	return ft_kinds[mtTrigGetRandomTimeUCharRange(8)];
}

// 0x801342E4
void mvOpeningFirstDestinationInitGlobals()
{
	gMVOpeningFirstDestinationFramesElapsed = 0;
	gMVOpeningFirstDestinationPluckedFighterKind = mvOpeningFirstDestinationGetPluckedFighterKind();
	gMVOpeningFirstDestinationDroppedFighterKind = mvOpeningFirstDestinationGetDroppedFighterKind();
}

// 0x80134318
sb32 mvOpeningFirstDestinationSetFrameBuffer(GObj* gobj)
{
	s32 i;
	s32 unused;
	viFrameBuf *nextFb, *currFb;

	if (scNextFrameBuffer != NULL)
		return TRUE;

	nextFb = osViGetNextFramebuffer();
	currFb = osViGetCurrentFramebuffer();

	if ((uintptr_t)D_80044FA8_407B8 == (uintptr_t)&D_NF_80392A00[0])
		i = 1;
	else if ((uintptr_t)D_80044FA8_407B8 == (uintptr_t)&D_NF_80392A00[1])
		i = 2;
	else if ((uintptr_t)D_80044FA8_407B8 == (uintptr_t)&D_NF_80392A00[2])
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
void mvOpeningFirstDestinationMainProc(GObj* arg0)
{
	gMVOpeningFirstDestinationFramesElapsed += 1;

	if (gMVOpeningFirstDestinationFramesElapsed >= 10)
	{
		if (gMVOpeningFirstDestinationUnusedCounter != 0)
		{
			gMVOpeningFirstDestinationUnusedCounter -= 1;
		}

		if ((scSubsysControllerGetPlayerStickInRangeLR(-15, 15)) && (scSubsysControllerGetPlayerStickInRangeUD(-15, 15)))
		{
			gMVOpeningFirstDestinationUnusedCounter = 0;
		}

		if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON))
		{
			gSceneData.scene_previous = gSceneData.scene_current;
			gSceneData.scene_current = 1;
			syTaskmanSetLoadScene();
		}

		if (gMVOpeningFirstDestinationFramesElapsed == 280)
		{
			mvOpeningFirstDestinationCreatePluckedFighter(gMVOpeningFirstDestinationPluckedFighterKind);
			mvOpeningFirstDestinationCreatePencilHolder();
			gcEjectGObj(gMVOpeningFirstDestinationHALLogoGObj);
			gcEjectGObj(gMVOpeningFirstDestinationOverlayGObj);
			gcEjectGObj(gMVOpeningFirstDestinationMasterHandShadowGObj);
		}
		if (gMVOpeningFirstDestinationFramesElapsed == 695)
		{
			mvOpeningFirstDestinationCreateDroppedFighter(gMVOpeningFirstDestinationDroppedFighterKind);
		}
		if (gMVOpeningFirstDestinationFramesElapsed == 380)
		{
			scSubsysFighterSetStatus(gMVOpeningFirstDestinationPluckedFighterGObj, 0x10009);
			DObjGetStruct(gMVOpeningFirstDestinationPluckedFighterGObj)->rotate.vec.f.x = 0.0F;
			DObjGetStruct(gMVOpeningFirstDestinationPluckedFighterGObj)->rotate.vec.f.y = 0.0F;
			DObjGetStruct(gMVOpeningFirstDestinationPluckedFighterGObj)->rotate.vec.f.z = 0.0F;
		}
		if (gMVOpeningFirstDestinationFramesElapsed == 450)
		{
			mvOpeningFirstDestinationCreateCloseupOverlay();
			gcEjectGObj(gMVOpeningFirstDestinationSunlightGObj);
		}
		if (gMVOpeningFirstDestinationFramesElapsed == 560)
		{
			mvOpeningFirstDestinationDestroyViewports();
			mvOpeningFirstDestinationCreateSecondSceneViewports();
			scSubsysFighterSetStatus(gMVOpeningFirstDestinationMasterHandGObj, 0x10010);
		}
		if (gMVOpeningFirstDestinationFramesElapsed == 500)
		{
			gcMoveGObjDL(gMVOpeningFirstDestinationPluckedFighterGObj, 9, -1);
			mvOpeningFirstDestinationCreateSpotlight();
		}
		if (gMVOpeningFirstDestinationFramesElapsed == 860)
		{
			mvOpeningFirstDestinationDestroyViewports();
			mvOpeningFirstDestinationCreateThirdSceneViewports();
			scSubsysFighterSetStatus(gMVOpeningFirstDestinationMasterHandGObj, 0x10011);
			mvOpeningFirstDestinationCreateSnapGFX();
		}
		if (gMVOpeningFirstDestinationFramesElapsed == 1037)
		{
			CameraGetStruct(gMVOpeningFirstDestinationCameraGObj)->flags &= ~2;
		}
		if (gMVOpeningFirstDestinationFramesElapsed == 1040)
		{
			gcEjectGObj(gMVOpeningFirstDestinationOverlayGObj);
			gcEjectGObj(gMVOpeningFirstDestinationSpotlightGObj);
			gcEjectGObj(gMVOpeningFirstDestinationMasterHandGObj);
			mvOpeningFirstDestinationCreateTransitionGFXViewport();
			mvOpeningFirstDestinationCreateTransitionGFX();
			mvOpeningFirstDestinationDestroyDeskObjects();
			mvOpeningFirstDestinationCreateDeskStage();
			mvOpeningFirstDestinationCreateBackground();
		}
		if (gMVOpeningFirstDestinationFramesElapsed == I_SEC_TO_TICS(19))
		{
			mvOpeningFirstDestinationDestroyViewports();
			mvOpeningFirstDestinationCreateCloseUpGFX();
			DObjGetStruct(gMVOpeningFirstDestinationPluckedFighterGObj)->rotate.vec.f.x = 0.0F;
			DObjGetStruct(gMVOpeningFirstDestinationPluckedFighterGObj)->rotate.vec.f.y = 0.0F;
			DObjGetStruct(gMVOpeningFirstDestinationPluckedFighterGObj)->rotate.vec.f.z = 0.0F;
			scSubsysFighterSetStatus(gMVOpeningFirstDestinationPluckedFighterGObj, 0x1000A);
			mvOpeningFirstDestinationCreateFourthSceneViewports();
		}
		if (gMVOpeningFirstDestinationFramesElapsed == I_SEC_TO_TICS(18))
		{
			gcEjectGObj(gMVOpeningFirstDestinationTransitionGFXOverlayGObj);
			gcEjectGObj(gMVOpeningFirstDestinationTransitionGFXOutlineGObj);
		}
		if (gMVOpeningFirstDestinationFramesElapsed == I_SEC_TO_TICS(22))
		{
			gSceneData.scene_previous = gSceneData.scene_current;
			gSceneData.scene_current = 0x1D;
			syTaskmanSetLoadScene();
		}
	}
}

// 0x80134788
void mvOpeningFirstDestinationInit()
{
	s32 foo;
	lbRelocSetup rl_setup;

	func_800048D0(mvOpeningFirstDestinationSetFrameBuffer);

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = (lbFileNode*) &D_ovl34_80134D58;
	rl_setup.status_buffer_size = ARRAY_COUNT(D_ovl34_80134D58);
	rl_setup.force_status_buffer = (lbFileNode*) &D_ovl34_80135078;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(D_ovl34_80135078);
	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern(D_ovl34_80134A20, ARRAY_COUNT(D_ovl34_80134A20), gMVOpeningFirstDestinationFiles, syTaskmanMalloc(lbRelocGetAllocSize(D_ovl34_80134A20, ARRAY_COUNT(D_ovl34_80134A20)), 0x10));

	gcMakeGObjSPAfter(0, mvOpeningFirstDestinationMainProc, 0, 0x80000000);
	gMVOpeningFirstDestinationCameraGObj = gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0x2 | 0x1, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
	efAllocInitParticleBank();
	mvOpeningFirstDestinationInitGlobals();
	efManagerInitEffects();
	ftManagerAllocFighter(1, 3);
	ftManagerSetupFilesAllKind(gMVOpeningFirstDestinationPluckedFighterKind);
	ftManagerSetupFilesAllKind(gMVOpeningFirstDestinationDroppedFighterKind);
	ftManagerSetupFilesAllKind(nFTKindBoss);
	gMVOpeningFirstDestinationMasterHandFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);
	gMVOpeningFirstDestinationPluckedFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);
	gMVOpeningFirstDestinationDroppedFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);
	mvOpeningFirstDestinationCreateFirstSceneViewports();
	mvOpeningFirstDestinationCreateOverlayViewport();
	mvOpeningFirstDestinationCreateBackgroundViewport();
	mvOpeningFirstDestinationCreateHALLogoViewport();
	mvOpeningFirstDestinationCreateOutside();
	mvOpeningFirstDestinationCreateOutsideHaze();
	mvOpeningFirstDestinationCreateRoomGeo();
	mvOpeningFirstDestinationCreateSunlight();
	mvOpeningFirstDestinationCreateDesk();
	mvOpeningFirstDestinationCreateHALLogoBackground();
	mvOpeningFirstDestinationCreateHALLogo();
	mvOpeningFirstDestinationCreateBooks();
	mvOpeningFirstDestinationCreateLamp();
	mvOpeningFirstDestinationCreateTissueBox();
	mvOpeningFirstDestinationCreateMasterHand();
	mvOpeningFirstDestinationCreateMasterHandShadow();
	scSubsysFighterSetLightParams(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);
	func_800266A0_272A0();
	auPlaySong(0, 0x21);
	func_80000920(0);
	D_800A50F0 = 0;
}

// 0x80134BD0
syDisplaySetup D_ovl34_80134BD0 = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99,
};

// 0x80134BEC
scRuntimeInfo D_ovl34_80134BEC = {

	0x00000000, 0x8000A5E4,
	0x800A26B8, &lOverlay34ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00002EE0, 0x00001000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000C000,
	mvOpeningFirstDestinationFuncLights, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800D5CAC, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mvOpeningFirstDestinationInit
};

// 0x801349BC
void intro_firstscene_entry()
{
	D_ovl34_80134BD0.zbuffer = syDisplayGetZBuffer(6400);
	syDisplayInit(&D_ovl34_80134BD0);
	D_ovl34_80134BEC.arena_size = (u32) ((uintptr_t)&lOverlay34ArenaHi - (uintptr_t)&lOverlay34ArenaLo);
	func_800A2698(&D_ovl34_80134BEC);
	func_800048D0(0);
}
