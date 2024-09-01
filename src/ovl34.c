#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <sc/scene.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <sys/system_00.h>


typedef struct viFrameBuf
{
	u16 pix[230 * 320];

} viFrameBuf;


// Externs
extern void* D_80044F9C_407AC;
extern void* D_80044FA8_407B8;
extern u32 D_80044FAC_407BC;
extern s32 D_800A50F0;
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;
extern intptr_t D_NF_800A5240;      // 800A5240
extern intptr_t lOverlay34ArenaLo;  // 801350D0
extern intptr_t lOverlay34ArenaHi;  // 803903E0

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
extern void func_ovl0_800CD2CC();
extern void func_80007080(void*, f32, f32, f32, f32);
extern GObj* func_8000B93C(u32, void*, s32, u32, void*, s32, s64, s32, s32, s32, s32, s32, s32);
extern void ftRenderLightsDrawReflect(Gfx**, f32, f32);
extern f32 scSubsysFighterGetLightAngleX();
extern f32 scSubsysFighterGetLightAngleY();


// Data
// 80134A20
rdFileID D_ovl34_80134A20[8] = {

	0x34, 0x3F, 0x38, 0x39, 0x3A, 0x3B, 0x4B, 0x5A
};

// 80134A40
rdFileID D_ovl34_80134A40[12] = {

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
// 80134CD0
s32 D_ovl34_80134CD0[2];

// 80134CD8
uintptr_t gMvOpeningFirstDestinationMasterHandAnimHeap;

// 80134CDC
uintptr_t gMvOpeningFirstDestinationPluckedFighterAnimHeap;

// 80134CE0
uintptr_t gMvOpeningFirstDestinationDroppedFighterAnimHeap;

// 80134CE4
s32 gMvOpeningFirstDestinationFramesElapsed;

// 80134CE8
GObj* gMvOpeningFirstDestinationMainCameraGObj;

// 80134CEC
GObj* gMvOpeningFirstDestinationFighterCameraGObj;

// 80134CF0
GObj* gMvOpeningFirstDestinationHALLogoCameraGObj;

// 80134CF4
GObj* gMvOpeningFirstDestinationMasterHandGObj;

// 80134CF8
s32 gMvOpeningFirstDestinationPluckedFighterKind;

// 80134CFC
GObj* gMvOpeningFirstDestinationDroppedFighterKind;

// 80134D00
GObj* gMvOpeningFirstDestinationHALLogoGObj;

// 80134D04
GObj* gMvOpeningFirstDestinationPluckedFighterGObj;

// 80134D08
GObj* gMvOpeningFirstDestinationDroppedFighterGObj;

// 80134D0C
GObj* gMvOpeningFirstDestinationRoomGObj;

// 80134D10
GObj* gMvOpeningFirstDestinationSunlightGObj;

// 80134D14
GObj* gMvOpeningFirstDestinationDeskGObj;

// 80134D18
GObj* gMvOpeningFirstDestinationOutsideGObj;

// 80134D1C
GObj* gMvOpeningFirstDestinationOutsideHazeGObj;

// 80134D20
GObj* gMvOpeningFirstDestinationBooksGObj;

// 80134D24
GObj* gMvOpeningFirstDestinationPencilHolderGObj;

// 80134D28
GObj* gMvOpeningFirstDestinationLampGObj;

// 80134D2C
GObj* gMvOpeningFirstDestinationTissueBoxGObj;

// 80134D30
GObj* gMvOpeningFirstDestinationMasterHandShadowGObj;

// 80134D34
s32 D_ovl34_80134D34;

// 80134D38
s32 gMvOpeningFirstDestinationOverlayAlpha;

// 80134D3C
GObj* gMvOpeningFirstDestinationOverlayGObj;

// 80134D40
GObj* gMvOpeningFirstDestinationSpotlightGObj;

// 80134D44
GObj* gMvOpeningFirstDestinationBackgroundGObj;

// 80134D48
GObj* gMvOpeningFirstDestinationTransitionGFXOutlineGObj;

// 80134D4C
GObj* gMvOpeningFirstDestinationTransitionGFXOverlayGObj;

// 80134D50
GObj* gMvOpeningFirstDestinationCameraGObj;

// 80134D54
s32 gMvOpeningFirstDestinationUnusedCounter;

// 80134D58
rdFileNode D_ovl34_80134D58[100];

// 80135078
rdFileNode D_ovl34_80135078[7];

// 801350B0
uintptr_t gMvOpeningFirstDestinationFilesArray[9];


// 80131B00
void mvOpeningFirstDestinationSetupDisplayList(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftRenderLightsDrawReflect(display_list, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 80131B58
void mvOpeningFirstDestinationFadeOutAndDestroyRoomGeo(GObj* room_gobj)
{
	if (gMvOpeningFirstDestinationFramesElapsed > I_SEC_TO_FRAMES(18))
		gcPlayAnimAll(room_gobj);

	if (gMvOpeningFirstDestinationFramesElapsed == I_SEC_TO_FRAMES(19))
		gcEjectGObj(room_gobj);
}

// 80131BA8
void mvOpeningFirstDestinationCreateRoomGeo()
{
	GObj* room_gobj;

	gMvOpeningFirstDestinationRoomGObj = room_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(room_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_ROOM_OFFSET_2), 0);
	gcAddGObjDisplay(room_gobj, gcDrawDObjTreeDLLinksForGObj, 6, 0x80000000, -1);
	gcAddMObjAll(room_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_ROOM_OFFSET_1));
	gcAddMatAnimJointAll(room_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_ROOM_OFFSET_3), 0.0F);
	gcAddGObjProcess(room_gobj, mvOpeningFirstDestinationFadeOutAndDestroyRoomGeo, 1, 1);
	gcPlayAnimAll(room_gobj);
}

// 80131C84
void mvOpeningFirstDestinationCreateSunlight()
{
	GObj* sunlight_gobj;

	gMvOpeningFirstDestinationSunlightGObj = sunlight_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddOMMtxForDObjFixed(gcAddDObjForGObj(sunlight_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_SUNLIGHT_OBJECT_OFFSET)), 0x1C, 0);
	gcAddGObjDisplay(sunlight_gobj, gcDrawDObjDLLinksForGObj, 6, 0x80000000, -1);
}

// 80131D08
void mvOpeningFirstDestinationCreateDesk()
{
	GObj* desk_gobj;

	gMvOpeningFirstDestinationDeskGObj = desk_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(desk_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_DESK_OBJECT_OFFSET), 0);
	gcAddGObjDisplay(desk_gobj, gcDrawDObjTreeForGObj, 6, 0x80000000, -1);
}

// 80131D80
void mvOpeningFirstDestinationCreateOutside()
{
	GObj* outside_gobj;

	gMvOpeningFirstDestinationOutsideGObj = outside_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddOMMtxForDObjFixed(gcAddDObjForGObj(outside_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_OUTSIDE_OBJECT_OFFSET)), 0x1C, 0);
	gcAddGObjDisplay(outside_gobj, gcDrawDObjDLLinksForGObj, 6, 0x80000000, -1);
}

// 80131E04
void mvOpeningFirstDestinationCreateOutsideHaze()
{
	GObj* outside_haze_gobj;

	gMvOpeningFirstDestinationOutsideHazeGObj = outside_haze_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddOMMtxForDObjFixed(gcAddDObjForGObj(outside_haze_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_OUTSIDE_HAZE_OBJECT_OFFSET)), 0x1C, 0);
	gcAddGObjDisplay(outside_haze_gobj, gcDrawDObjDLLinksForGObj, 6, 0x80000000, -1);
}

// 80131E88
void mvOpeningFirstDestinationAnimateDeskObjects(GObj* desk_object_gobj)
{
	if (gMvOpeningFirstDestinationFramesElapsed >= 560)
		gcPlayAnimAll(desk_object_gobj);
}

// 80131EBC
void mvOpeningFirstDestinationCreateBooks()
{
	GObj* books_gobj;

	gMvOpeningFirstDestinationBooksGObj = books_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(books_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_BOOKS_OBJECT_OFFSET_1), 0);
	gcAddGObjDisplay(books_gobj, gcDrawDObjTreeForGObj, 6, 0x80000000, -1);
	gcAddGObjProcess(books_gobj, mvOpeningFirstDestinationAnimateDeskObjects, 1, 1);
	gcAddAnimJointAll(books_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_BOOKS_OBJECT_OFFSET_2), 0.0F);
	gcPlayAnimAll(books_gobj);
}

// 80131F7C
void mvOpeningFirstDestinationCreatePencilHolder()
{
	GObj* pencil_holder_gobj;

	gMvOpeningFirstDestinationPencilHolderGObj = pencil_holder_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(pencil_holder_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_PENCIL_HOLDER_OBJECT_OFFSET_1), 0);
	gcAddGObjDisplay(pencil_holder_gobj, gcDrawDObjTreeForGObj, 6, 0x80000000, -1);
	gcAddAnimJointAll(pencil_holder_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_PENCIL_HOLDER_OBJECT_OFFSET_2), 0.0F);
	gcAddGObjProcess(pencil_holder_gobj, mvOpeningFirstDestinationAnimateDeskObjects, 1, 1);
	gcPlayAnimAll(pencil_holder_gobj);
}

// 8013203C
void mvOpeningFirstDestinationCreateLamp()
{
	GObj* lamp_gobj;

	gMvOpeningFirstDestinationLampGObj = lamp_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(lamp_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_LAMP_OBJECT_OFFSET_1), 0);
	gcAddGObjDisplay(lamp_gobj, gcDrawDObjTreeForGObj, 6, 0x80000000, -1);
	gcAddAnimJointAll(lamp_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_LAMP_OBJECT_OFFSET_2), 0.0F);
	gcAddGObjProcess(lamp_gobj, mvOpeningFirstDestinationAnimateDeskObjects, 1, 1);
	gcPlayAnimAll(lamp_gobj);
}

// 801320FC
void mvOpeningFirstDestinationAnimateTissueBox(GObj* tissue_box_gobj)
{
	if (gMvOpeningFirstDestinationFramesElapsed >= 560)
		gcPlayAnimAll(tissue_box_gobj);
}

// 80132130
void mvOpeningFirstDestinationCreateTissueBox()
{
	GObj* tissue_box_gobj;
	DObj* tissue_box_dobj;

	gMvOpeningFirstDestinationTissueBoxGObj = tissue_box_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	tissue_box_dobj = gcAddDObjForGObj(tissue_box_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_TISSUE_BOX_OBJECT_OFFSET_1));
	gcAddOMMtxForDObjFixed(tissue_box_dobj, 0x1C, 0);
	gcAddGObjDisplay(tissue_box_gobj, gcDrawDObjDLHead0, 6, 0x80000000, -1);
	gcAddDObjAnimJoint(tissue_box_dobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_TISSUE_BOX_OBJECT_OFFSET_2), 0);
	gcAddGObjProcess(tissue_box_gobj, mvOpeningFirstDestinationAnimateTissueBox, 1, 1);
	gcPlayAnimAll(tissue_box_gobj);
}

// 801321F8
void mvOpeningFirstDestinationCreateMasterHand()
{
	GObj* fighter_gobj;
	ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.ft_kind = nFTKindBoss;
	spawn_info.costume = ftParamGetCostumeCommonID(nFTKindBoss, 0);
	spawn_info.pos.x = 0.0f;
	spawn_info.pos.y = 0.0f;
	spawn_info.pos.z = 0.0f;
	spawn_info.anim_heap = gMvOpeningFirstDestinationMasterHandAnimHeap;
	gMvOpeningFirstDestinationMasterHandGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

	scSubsysFighterSetStatus(fighter_gobj, 0x1000F);
}

// 801322A0 - Unused?
void func_ovl34_801322A0(s32 arg0)
{
	func_ovl1_803905F4(gMvOpeningFirstDestinationMasterHandGObj, arg0);
}

// 801322C8 - Unused?
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

// 80132320 - Unused?
void func_ovl34_80132320() {}

// 80132328 - Unused?
void func_ovl34_80132328() {}

// 80132330
void mvOpeningFirstDestinationCreatePluckedFighter(s32 ft_kind)
{
	GObj* fighter_gobj;
	ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.ft_kind = ft_kind;
	spawn_info.costume = ftParamGetCostumeCommonID(ft_kind, 0);
	spawn_info.pos.x = 0.0f;
	spawn_info.pos.y = 0.0f;
	spawn_info.pos.z = 0.0f;
	spawn_info.anim_heap = gMvOpeningFirstDestinationPluckedFighterAnimHeap;
	gMvOpeningFirstDestinationPluckedFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

	DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;

	scSubsysFighterSetStatus(fighter_gobj, 0x10008);

	gcMoveGObjDL(fighter_gobj, 6, -1);
}

// 80132404
void mvOpeningFirstDestinationRenderHALLogoBackground(GObj* logo_gobj)
{
	if (gMvOpeningFirstDestinationFramesElapsed >= 60)
	{
		if (gMvOpeningFirstDestinationOverlayAlpha > 0)
		{
			gMvOpeningFirstDestinationOverlayAlpha -= 13;

			if (gMvOpeningFirstDestinationOverlayAlpha < 0)
				gMvOpeningFirstDestinationOverlayAlpha = 0;
		}
	}

	gDPPipeSync(gDisplayListHead[1]++);
	gDPSetCycleType(gDisplayListHead[1]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gDisplayListHead[1]++, 0, 0, 0, 0, 0, gMvOpeningFirstDestinationOverlayAlpha);
	gDPSetCombineLERP(gDisplayListHead[1]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gDisplayListHead[1]++, 10, 10, 310, 230);
	gDPPipeSync(gDisplayListHead[1]++);
	gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 80132544
void mvOpeningFirstDestinationCreateHALLogoBackground()
{
	GObj* logo_bg_gobj;

	gMvOpeningFirstDestinationOverlayAlpha = 0xFF;
	gMvOpeningFirstDestinationOverlayGObj = logo_bg_gobj = gcMakeGObjSPAfter(0, 0, 0x12, 0x80000000);
	gcAddGObjDisplay(logo_bg_gobj, mvOpeningFirstDestinationRenderHALLogoBackground, 0x1A, 0x80000000, -1);
}

// 801325A4
void mvOpeningFirstDestinationCreateHALLogo()
{
	GObj* logo_gobj;

	gMvOpeningFirstDestinationHALLogoGObj = logo_gobj = gcMakeGObjSPAfter(0, 0, 0x15, 0x80000000);
	gcSetupCommonDObjs(logo_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_HAL_LOGO_OFFSET_2), 0);
	gcAddGObjDisplay(logo_gobj, gcDrawDObjTreeDLLinksForGObj, 0x1D, 0x80000000, -1);
	gcAddMObjAll(logo_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_HAL_LOGO_OFFSET_1));
	gcAddMatAnimJointAll(logo_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_HAL_LOGO_OFFSET_3), 0.0F);
	gcAddGObjProcess(logo_gobj, gcPlayAnimAll, 1, 1);
	gcPlayAnimAll(logo_gobj);
}

// 80132680
void mvOpeningFirstDestinationCreateSnapGFX()
{
	GObj* snap_gfx_gobj;

	snap_gfx_gobj = gcMakeGObjSPAfter(0, 0, 0x13, 0x80000000);
	gcSetupCommonDObjs(snap_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_SNAP_GFX_OBJECT_OFFSET_1), 0);
	gcAddGObjDisplay(snap_gfx_gobj, gcDrawDObjTreeDLLinksForGObj, 0x1B, 0x80000000, -1);
	gcAddAnimJointAll(snap_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_SNAP_GFX_OBJECT_OFFSET_2), 0.0F);
	gcAddGObjProcess(snap_gfx_gobj, gcPlayAnimAll, 1, 1);
	gcPlayAnimAll(snap_gfx_gobj);
}

// 80132738
void mvOpeningFirstDestinationCreateCloseUpGFX()
{
	GObj* closeup_gfx_gobj;

	// Close-up GFX air
	closeup_gfx_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(closeup_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_CLOSEUP_GFX_AIR_OFFSET_2), 0);
	gcAddGObjDisplay(closeup_gfx_gobj, gcDrawDObjTreeDLLinksForGObj, 6, 0x80000000, -1);
	DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.x = 0.0F;
	DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.y = 0.0F;
	DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.z = 0.0F;
	gcAddMObjAll(closeup_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_CLOSEUP_GFX_AIR_OFFSET_1));
	gcAddMatAnimJointAll(closeup_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_CLOSEUP_GFX_AIR_OFFSET_3), 0.0F);
	gcAddGObjProcess(closeup_gfx_gobj, gcPlayAnimAll, 1, 1);
	gcAddAnimJointAll(closeup_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_CLOSEUP_GFX_AIR_OFFSET_4), 0.0F);
	gcPlayAnimAll(closeup_gfx_gobj);

	// Close-up GFX ground
	closeup_gfx_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(closeup_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_CLOSEUP_GFX_GROUND_OFFSET_2), 0);
	gcAddGObjDisplay(closeup_gfx_gobj, gcDrawDObjTreeDLLinksForGObj, 6, 0x80000000, -1);
	DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.x = 0.0F;
	DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.y = 0.0F;
	DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.z = 0.0F;
	gcAddMObjAll(closeup_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_CLOSEUP_GFX_GROUND_OFFSET_1));
	gcAddMatAnimJointAll(closeup_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_CLOSEUP_GFX_GROUND_OFFSET_3), 0.0F);
	gcAddGObjProcess(closeup_gfx_gobj, gcPlayAnimAll, 1, 1);
	gcAddAnimJointAll(closeup_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_CLOSEUP_GFX_GROUND_OFFSET_4), 0.0F);
	gcPlayAnimAll(closeup_gfx_gobj);
}

// 80132928
void mvOpeningFirstDestinationCreateDroppedFighter(s32 ft_kind)
{
	GObj* fighter_gobj;
	ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.ft_kind = ft_kind;
	spawn_info.costume = ftParamGetCostumeCommonID(ft_kind, 0);
	spawn_info.anim_heap = gMvOpeningFirstDestinationDroppedFighterAnimHeap;
	spawn_info.pos.x = 872.3249512F;
	spawn_info.pos.y = 4038.864014F;
	spawn_info.pos.z = -4734.600098F;
	gMvOpeningFirstDestinationDroppedFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

	scSubsysFighterSetStatus(fighter_gobj, 0x10009);
	gcMoveGObjDL(fighter_gobj, 6, -1);
}

// 801329F0
void mvOpeningFirstDestinationCreateMasterHandShadow()
{
	GObj* masterhand_shadow_gobj;
	DObj* masterhand_shadow_dobj;

	gMvOpeningFirstDestinationMasterHandShadowGObj = masterhand_shadow_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	masterhand_shadow_dobj = gcAddDObjForGObj(masterhand_shadow_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_MASTERHAND_SHADOW_OBJECT_OFFSET_1));
	gcAddOMMtxForDObjFixed(masterhand_shadow_dobj, 0x1C, 0);
	gcAddGObjDisplay(masterhand_shadow_gobj, gcDrawDObjDLHead1, 9, 0x80000000, -1);
	gcAddDObjAnimJoint(masterhand_shadow_dobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_MASTERHAND_SHADOW_OBJECT_OFFSET_2), 0);
	gcAddGObjProcess(masterhand_shadow_gobj,gcPlayAnimAll, 1, 1);
}

// 80132AB0
void mvOpeningFirstDestinationAnimateDeskStage(GObj* desk_stage_gobj)
{
	if (gMvOpeningFirstDestinationFramesElapsed > 1060)
		gcPlayAnimAll(desk_stage_gobj);
}

// 80132AE4
void mvOpeningFirstDestinationCreateDeskStage()
{
	GObj* desk_stage_gobj;

	desk_stage_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcSetupCommonDObjs(desk_stage_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_DESK_STAGE_OFFSET_2), 0);
	gcAddGObjDisplay(desk_stage_gobj, gcDrawDObjTreeDLLinksForGObj, 6, 0x80000000, -1);
	gcAddMObjAll(desk_stage_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_DESK_STAGE_OFFSET_1));
	gcAddMatAnimJointAll(desk_stage_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_DESK_STAGE_OFFSET_3), 0.0F);
	gcAddGObjProcess(desk_stage_gobj, mvOpeningFirstDestinationAnimateDeskStage, 1, 1);
	gcPlayAnimAll(desk_stage_gobj);
}

// 80132BB8
void mvOpeningFirstDestinationRenderCloseupOverlay(GObj* arg0)
{
	if (gMvOpeningFirstDestinationOverlayAlpha < 0xA0)
	{
		gMvOpeningFirstDestinationOverlayAlpha += 9;

		if (gMvOpeningFirstDestinationOverlayAlpha >= 0xA1)
			gMvOpeningFirstDestinationOverlayAlpha = 0xA0;
	}

	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0, 0, 0, gMvOpeningFirstDestinationOverlayAlpha);
	gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);
	gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 80132CEC
void mvOpeningFirstDestinationCreateCloseupOverlay()
{
	GObj* overlay_gobj;

	gMvOpeningFirstDestinationOverlayAlpha = 0;
	gMvOpeningFirstDestinationOverlayGObj = overlay_gobj = gcMakeGObjSPAfter(0, 0, 0x12, 0x80000000);
	gcAddGObjDisplay(overlay_gobj, mvOpeningFirstDestinationRenderCloseupOverlay, 0x1A, 0x80000000, -1);
}

// 80132D48
void mvOpeningFirstDestinationCreateOverlayViewport()
{
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x3C, 0x04000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80132DE8
void mvOpeningFirstDestinationRenderBackground(GObj* bg_gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetPrimDepth(gDisplayListHead[0]++, 36863.0F, 1);
	gDPSetDepthSource(gDisplayListHead[0]++, G_ZS_PRIM);
	gDPSetRenderMode(gDisplayListHead[0]++, AA_EN | Z_CMP | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM), AA_EN | Z_CMP | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM));
	gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, TEXEL0,  0, 0, 0, TEXEL0,  0, 0, 0, TEXEL0,  0, 0, 0, TEXEL0);

	func_ovl0_800CCF74(bg_gobj);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetDepthSource(gDisplayListHead[0]++, G_ZS_PIXEL);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 80132F44
void mvOpeningFirstDestinationCreateBackground()
{
	GObj* bg_gobj;
	SObj* bg_sobj;

	gMvOpeningFirstDestinationBackgroundGObj = bg_gobj = gcMakeGObjSPAfter(0, 0, 0x14, 0x80000000);
	gcAddGObjDisplay(bg_gobj, mvOpeningFirstDestinationRenderBackground, 0x1C, 0x80000000, -1);

	bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[7], &FILE_05A_BACKGROUND_IMAGE_OFFSET));
	bg_sobj->pos.x = 10.0f;
	bg_sobj->pos.y = 10.0f;
}

// 80132FCC
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

// 801330B8
void mvOpeningFirstDestinationCreateSpotlight()
{
	GObj* spotlight_gobj;

	gMvOpeningFirstDestinationSpotlightGObj = spotlight_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddOMMtxForDObjFixed(gcAddDObjForGObj(spotlight_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_SPOTLIGHT_OFFSET_2)), 0x1C, 0);
	gcAddGObjDisplay(spotlight_gobj, gcDrawDObjDLHead1, 0x1B, 0x80000000, -1);
	gcAddMObjAll(spotlight_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_SPOTLIGHT_OFFSET_1));
	gcAddMatAnimJointAll(spotlight_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_SPOTLIGHT_OFFSET_3), 0.0F);
	gcAddGObjProcess(spotlight_gobj, gcPlayAnimAll, 1, 1);
	gcPlayAnimAll(spotlight_gobj);
	mvOpeningFirstDestinationPositionSpotlight(spotlight_gobj, gMvOpeningFirstDestinationPluckedFighterKind);
}

// 801331B0
void mvOpeningFirstDestinationDestroyDeskObjects()
{
	gcEjectGObj(gMvOpeningFirstDestinationOutsideGObj);
	gcEjectGObj(gMvOpeningFirstDestinationOutsideHazeGObj);
	gcEjectGObj(gMvOpeningFirstDestinationBooksGObj);
	gcEjectGObj(gMvOpeningFirstDestinationPencilHolderGObj);
	gcEjectGObj(gMvOpeningFirstDestinationLampGObj);
	gcEjectGObj(gMvOpeningFirstDestinationTissueBoxGObj);
}

// 80133210
void mvOpeningFirstDestinationConfigureFirstSceneViewport(GObj* camera_gobj)
{
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	cam->projection.persp.near = 80.0F;
	cam->projection.persp.far = 15000.0F;
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[2], &FILE_038_CAMERA_PARAMETERS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
	cam->flags |= 4;
}

// 801332BC
void mvOpeningFirstDestinationCreateFirstSceneViewports()
{
	GObj* camera_gobj;

	gMvOpeningFirstDestinationMainCameraGObj = camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x00000040, -1, 0, 1, 0, 1, 0);
	gcAddOMMtxForCamera(CameraGetStruct(camera_gobj), 3, 0);
	gcAddOMMtxForCamera(CameraGetStruct(camera_gobj), 0xE, 0);
	mvOpeningFirstDestinationConfigureFirstSceneViewport(camera_gobj);

	gMvOpeningFirstDestinationFighterCameraGObj = camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x28, 0x08000200, -1, 1, 1, 0, 1, 0);
	mvOpeningFirstDestinationConfigureFirstSceneViewport(camera_gobj);
}

// 801333DC
void mvOpeningFirstDestinationConfigureSecondSceneViewport(GObj* camera_gobj)
{
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[3], &FILE_039_CAMERA_PARAMETERS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
	cam->flags |= 4;
}

// 80133470
void mvOpeningFirstDestinationCreateSecondSceneViewports()
{
	GObj* camera_gobj;

	gMvOpeningFirstDestinationMainCameraGObj = camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x00000040, -1, 0, 1, 0, 1, 0);
	gcAddOMMtxForCamera(CameraGetStruct(camera_gobj), 3, 0);
	gcAddOMMtxForCamera(CameraGetStruct(camera_gobj), 0x8, 0);
	mvOpeningFirstDestinationConfigureSecondSceneViewport(camera_gobj);

	gMvOpeningFirstDestinationFighterCameraGObj = camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x28, 0x08000200, -1, 1, 1, 0, 1, 0);
	mvOpeningFirstDestinationConfigureSecondSceneViewport(camera_gobj);
}

// 80133590
void mvOpeningFirstDestinationConfigureThirdSceneViewport(GObj* camera_gobj)
{
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
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
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[4], &FILE_03A_CAMERA_PARAMETERS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
	cam->flags |= 4;
}

// 801336A8
void mvOpeningFirstDestinationCreateThirdSceneViewports()
{
	GObj* camera_gobj;
	GObj* camera_gobj_2;

	gMvOpeningFirstDestinationMainCameraGObj = camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x00000040, -1, 0, 1, 0, 1, 0);
	gcAddOMMtxForCamera(CameraGetStruct(camera_gobj), 3, 0);
	gcAddOMMtxForCamera(CameraGetStruct(camera_gobj), 0x8, 0);
	mvOpeningFirstDestinationConfigureThirdSceneViewport(camera_gobj);

	gMvOpeningFirstDestinationFighterCameraGObj = camera_gobj_2 = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x28, 0x08000200, -1, 1, 1, 0, 1, 0);
	mvOpeningFirstDestinationConfigureThirdSceneViewport(camera_gobj_2);
}

// 801337C8
void mvOpeningFirstDestinationConfigureFourthSceneViewport(GObj* camera_gobj)
{
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
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
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[5], &FILE_03B_CAMERA_PARAMETERS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 801338D4
void mvOpeningFirstDestinationCreateFourthSceneViewports()
{
	GObj* camera_gobj;
	GObj* camera_gobj_2;

	gMvOpeningFirstDestinationMainCameraGObj = camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x00000040, -1, 1, 1, 0, 1, 0);
	mvOpeningFirstDestinationConfigureFourthSceneViewport(camera_gobj);

	gMvOpeningFirstDestinationFighterCameraGObj = camera_gobj_2 = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x28, 0x00000200, -1, 1, 1, 0, 1, 0);
	mvOpeningFirstDestinationConfigureFourthSceneViewport(camera_gobj_2);
}

// 801339CC
void mvOpeningFirstDestinationCreateBackgroundViewport()
{
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x5A, 0x10000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80133A6C
void mvOpeningFirstDestinationCreateHALLogoViewport()
{
	GObj *camera_gobj;
	Camera *cam;

	gMvOpeningFirstDestinationHALLogoCameraGObj = camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x32, 0x20000000, -1, 1, 1, 0, 1, 0);
	cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[2], &FILE_038_CAMERA_PARAMETERS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 80133B58
void mvOpeningFirstDestinationRenderTransitionGFXOverlay(GObj* gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetColorImage(gDisplayListHead[0]++, G_IM_FMT_RGBA, G_IM_SIZ_16b, gSYDisplayResWidth, gSYDisplayZBuffer);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 255, 255, 255, 255);
	gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, 1,  0, 0, 0, PRIMITIVE,  0, 0, 0, 1);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_PASS, G_RM_OPA_SURF2);
	gcDrawDObjDLHead0(gobj);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetColorImage(gDisplayListHead[0]++, G_IM_FMT_RGBA, gSYDisplayPixelComponentSize, gSYDisplayResWidth, (void*)0x0F000000);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 80133CEC
void mvOpeningFirstDestinationRenderTransitionGFXOutline(GObj* gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetColorImage(gDisplayListHead[0]++, G_IM_FMT_RGBA, G_IM_SIZ_16b, gSYDisplayResWidth, gSYDisplayZBuffer);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0, 0, 0, 255);
	gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gDisplayListHead[0]++, 0, 0, 320, 240);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetColorImage(gDisplayListHead[0]++, G_IM_FMT_RGBA, gSYDisplayPixelComponentSize, gSYDisplayResWidth, (void*)0x0F000000);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);
	gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, SHADE,  0, 0, 0, 1,  0, 0, 0, SHADE,  0, 0, 0, 1);
	gcDrawDObjDLHead0(gobj);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 80133EFC
void mvOpeningFirstDestinationCreateTransitionGFX()
{
	GObj* gfx_gobj;
	DObj* gfx_dobj;

	gMvOpeningFirstDestinationTransitionGFXOutlineGObj = gfx_gobj = gcMakeGObjSPAfter(0, 0, 0x16, 0x80000000);
	gfx_dobj = gcAddDObjForGObj(gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[1], &FILE_03F_TRANSITION_GFX_OUTLINE_OBJECT_OFFSET_1));
	gcAddOMMtxForDObjFixed(gfx_dobj, 0x1C, 0);
	gcAddGObjDisplay(gfx_gobj, mvOpeningFirstDestinationRenderTransitionGFXOutline, 0x1E, 0x80000000, -1);
	gcAddDObjAnimJoint(gfx_dobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[1], &FILE_03F_TRANSITION_GFX_OUTLINE_OBJECT_OFFSET_2), 0);
	gcAddGObjProcess(gfx_gobj, gcPlayAnimAll, 1, 1);
	gcPlayAnimAll(gfx_gobj);

	gMvOpeningFirstDestinationTransitionGFXOverlayGObj = gfx_gobj = gcMakeGObjSPAfter(0, 0, 0x16, 0x80000000);
	gfx_dobj = gcAddDObjForGObj(gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[1], &FILE_03F_TRANSITION_GFX_OVERLAY_OBJECT_OFFSET_1));
	gcAddOMMtxForDObjFixed(gfx_dobj, 0x1C, 0);
	gcAddGObjDisplay(gfx_gobj, mvOpeningFirstDestinationRenderTransitionGFXOverlay, 0x1E, 0x80000000, -1);
	gcAddDObjAnimJoint(gfx_dobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[1], &FILE_03F_TRANSITION_GFX_OVERLAY_OBJECT_OFFSET_2), 0);
	gcAddGObjProcess(gfx_gobj, gcPlayAnimAll, 1, 1);
	gcPlayAnimAll(gfx_gobj);
}

// 8013407C
void mvOpeningFirstDestinationCreateTransitionGFXViewport()
{
	GObj* camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x5F, 0x40000000, -1, 1, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
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

// 80134184
void mvOpeningFirstDestinationDestroyViewports()
{
	gcEjectGObj(gMvOpeningFirstDestinationMainCameraGObj);
	gcEjectGObj(gMvOpeningFirstDestinationFighterCameraGObj);
}

// 801341B4
s32 mvOpeningFirstDestinationGetDroppedFighterKind()
{
	s32 ft_kinds[8] = {

		0, 1, 2, 3, 5, 6, 8, 9
	};
	s32 ft_kind;

	while (ft_kind = ft_kinds[mtTrigGetRandomTimeUCharRange(ARRAY_COUNT(ft_kinds))], ft_kind == gMvOpeningFirstDestinationPluckedFighterKind);

	return ft_kind;
}

// 80134270
s32 mvOpeningFirstDestinationGetPluckedFighterKind()
{
	s32 ft_kinds[8] = {

		0, 1, 2, 3, 5, 6, 8, 9
	};

	return ft_kinds[mtTrigGetRandomTimeUCharRange(8)];
}

// 801342E4
void mvOpeningFirstDestinationInitGlobals()
{
	gMvOpeningFirstDestinationFramesElapsed = 0;
	gMvOpeningFirstDestinationPluckedFighterKind = mvOpeningFirstDestinationGetPluckedFighterKind();
	gMvOpeningFirstDestinationDroppedFighterKind = mvOpeningFirstDestinationGetDroppedFighterKind();
}

// 80134318
sb32 mvOpeningFirstDestinationSetFrameBuffer(GObj* gobj)
{
	s32 i;
	s32 unused;
	viFrameBuf *nextFb, *currFb;

	if (D_80044F9C_407AC != NULL)
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
		D_80044F9C_407AC = &D_NF_80392A00[i];
		D_80044FAC_407BC = osGetCount();
		return TRUE;
	}
	
	return FALSE;
}

// 80134400
void mvOpeningFirstDestinationMainProc(GObj* arg0)
{
	gMvOpeningFirstDestinationFramesElapsed += 1;

	if (gMvOpeningFirstDestinationFramesElapsed >= 10)
	{
		if (gMvOpeningFirstDestinationUnusedCounter != 0)
		{
			gMvOpeningFirstDestinationUnusedCounter -= 1;
		}

		if ((scSubsysControllerGetPlayerStickInRangeLR(-15, 15)) && (scSubsysControllerGetPlayerStickInRangeUD(-15, 15)))
		{
			gMvOpeningFirstDestinationUnusedCounter = 0;
		}

		if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON))
		{
			gSceneData.scene_previous = gSceneData.scene_current;
			gSceneData.scene_current = 1;
			leoInitUnit_atten();
		}

		if (gMvOpeningFirstDestinationFramesElapsed == 280)
		{
			mvOpeningFirstDestinationCreatePluckedFighter(gMvOpeningFirstDestinationPluckedFighterKind);
			mvOpeningFirstDestinationCreatePencilHolder();
			gcEjectGObj(gMvOpeningFirstDestinationHALLogoGObj);
			gcEjectGObj(gMvOpeningFirstDestinationOverlayGObj);
			gcEjectGObj(gMvOpeningFirstDestinationMasterHandShadowGObj);
		}
		if (gMvOpeningFirstDestinationFramesElapsed == 695)
		{
			mvOpeningFirstDestinationCreateDroppedFighter(gMvOpeningFirstDestinationDroppedFighterKind);
		}
		if (gMvOpeningFirstDestinationFramesElapsed == 380)
		{
			scSubsysFighterSetStatus(gMvOpeningFirstDestinationPluckedFighterGObj, 0x10009);
			DObjGetStruct(gMvOpeningFirstDestinationPluckedFighterGObj)->rotate.vec.f.x = 0.0F;
			DObjGetStruct(gMvOpeningFirstDestinationPluckedFighterGObj)->rotate.vec.f.y = 0.0F;
			DObjGetStruct(gMvOpeningFirstDestinationPluckedFighterGObj)->rotate.vec.f.z = 0.0F;
		}
		if (gMvOpeningFirstDestinationFramesElapsed == 450)
		{
			mvOpeningFirstDestinationCreateCloseupOverlay();
			gcEjectGObj(gMvOpeningFirstDestinationSunlightGObj);
		}
		if (gMvOpeningFirstDestinationFramesElapsed == 560)
		{
			mvOpeningFirstDestinationDestroyViewports();
			mvOpeningFirstDestinationCreateSecondSceneViewports();
			scSubsysFighterSetStatus(gMvOpeningFirstDestinationMasterHandGObj, 0x10010);
		}
		if (gMvOpeningFirstDestinationFramesElapsed == 500)
		{
			gcMoveGObjDL(gMvOpeningFirstDestinationPluckedFighterGObj, 9, -1);
			mvOpeningFirstDestinationCreateSpotlight();
		}
		if (gMvOpeningFirstDestinationFramesElapsed == 860)
		{
			mvOpeningFirstDestinationDestroyViewports();
			mvOpeningFirstDestinationCreateThirdSceneViewports();
			scSubsysFighterSetStatus(gMvOpeningFirstDestinationMasterHandGObj, 0x10011);
			mvOpeningFirstDestinationCreateSnapGFX();
		}
		if (gMvOpeningFirstDestinationFramesElapsed == 1037)
		{
			CameraGetStruct(gMvOpeningFirstDestinationCameraGObj)->flags &= ~2;
		}
		if (gMvOpeningFirstDestinationFramesElapsed == 1040)
		{
			gcEjectGObj(gMvOpeningFirstDestinationOverlayGObj);
			gcEjectGObj(gMvOpeningFirstDestinationSpotlightGObj);
			gcEjectGObj(gMvOpeningFirstDestinationMasterHandGObj);
			mvOpeningFirstDestinationCreateTransitionGFXViewport();
			mvOpeningFirstDestinationCreateTransitionGFX();
			mvOpeningFirstDestinationDestroyDeskObjects();
			mvOpeningFirstDestinationCreateDeskStage();
			mvOpeningFirstDestinationCreateBackground();
		}
		if (gMvOpeningFirstDestinationFramesElapsed == I_SEC_TO_FRAMES(19))
		{
			mvOpeningFirstDestinationDestroyViewports();
			mvOpeningFirstDestinationCreateCloseUpGFX();
			DObjGetStruct(gMvOpeningFirstDestinationPluckedFighterGObj)->rotate.vec.f.x = 0.0F;
			DObjGetStruct(gMvOpeningFirstDestinationPluckedFighterGObj)->rotate.vec.f.y = 0.0F;
			DObjGetStruct(gMvOpeningFirstDestinationPluckedFighterGObj)->rotate.vec.f.z = 0.0F;
			scSubsysFighterSetStatus(gMvOpeningFirstDestinationPluckedFighterGObj, 0x1000A);
			mvOpeningFirstDestinationCreateFourthSceneViewports();
		}
		if (gMvOpeningFirstDestinationFramesElapsed == I_SEC_TO_FRAMES(18))
		{
			gcEjectGObj(gMvOpeningFirstDestinationTransitionGFXOverlayGObj);
			gcEjectGObj(gMvOpeningFirstDestinationTransitionGFXOutlineGObj);
		}
		if (gMvOpeningFirstDestinationFramesElapsed == I_SEC_TO_FRAMES(22))
		{
			gSceneData.scene_previous = gSceneData.scene_current;
			gSceneData.scene_current = 0x1D;
			leoInitUnit_atten();
		}
	}
}

// 80134788
void mvOpeningFirstDestinationInit()
{
	s32 foo;
	rdSetup rldmSetup;

	func_800048D0(mvOpeningFirstDestinationSetFrameBuffer);

	rldmSetup.table_addr = &D_NF_001AC870;
	rldmSetup.table_files_num = &D_NF_00000854;
	rldmSetup.file_heap = 0;
	rldmSetup.file_heap_size = 0;
	rldmSetup.status_buf = (rdFileNode*) &D_ovl34_80134D58;
	rldmSetup.status_buf_size = ARRAY_COUNT(D_ovl34_80134D58);
	rldmSetup.force_buf = (rdFileNode*) &D_ovl34_80135078;
	rldmSetup.force_buf_size = ARRAY_COUNT(D_ovl34_80135078);
	rdManagerInitSetup(&rldmSetup);
	rdManagerLoadFiles(D_ovl34_80134A20, ARRAY_COUNT(D_ovl34_80134A20), gMvOpeningFirstDestinationFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl34_80134A20, ARRAY_COUNT(D_ovl34_80134A20)), 0x10));

	gcMakeGObjSPAfter(0, mvOpeningFirstDestinationMainProc, 0, 0x80000000);
	gMvOpeningFirstDestinationCameraGObj = func_8000B9FC(0, 0x80000000, 0x64, 3, 0xFF);
	efAllocInitParticleBank();
	mvOpeningFirstDestinationInitGlobals();
	efManagerInitEffects();
	ftManagerAllocFighter(1, 3);
	ftManagerSetupFilesAllKind(gMvOpeningFirstDestinationPluckedFighterKind);
	ftManagerSetupFilesAllKind(gMvOpeningFirstDestinationDroppedFighterKind);
	ftManagerSetupFilesAllKind(nFTKindBoss);
	gMvOpeningFirstDestinationMasterHandAnimHeap = gsMemoryAlloc(gFTManagerAnimHeapSize, 0x10);
	gMvOpeningFirstDestinationPluckedFighterAnimHeap = gsMemoryAlloc(gFTManagerAnimHeapSize, 0x10);
	gMvOpeningFirstDestinationDroppedFighterAnimHeap = gsMemoryAlloc(gFTManagerAnimHeapSize, 0x10);
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

// 80134BD0
syDisplaySetup D_ovl34_80134BD0 = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99,
};

// 80134BEC
scRuntimeInfo D_ovl34_80134BEC = {

	0x00000000, 0x8000A5E4,
	0x800A26B8, &lOverlay34ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00002EE0, 0x00001000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000C000,
	mvOpeningFirstDestinationSetupDisplayList, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800D5CAC, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mvOpeningFirstDestinationInit
};

// 801349BC
void intro_firstscene_entry()
{
	D_ovl34_80134BD0.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl34_80134BD0);
	D_ovl34_80134BEC.arena_size = (u32) ((uintptr_t)&lOverlay34ArenaHi - (uintptr_t)&lOverlay34ArenaLo);
	func_800A2698(&D_ovl34_80134BEC);
	func_800048D0(0);
}
