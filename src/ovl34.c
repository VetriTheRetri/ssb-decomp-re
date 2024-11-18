#include <ft/fighter.h>
#include <gr/ground.h>
#include <mv/movie.h>
#include <sc/scene.h>
#include <sys/video.h>

extern void syRdpSetViewport(void*, f32, f32, f32, f32);
extern void scManagerFuncDraw();

// Externs
extern void *gSYSchedulerNextFramebuffer;
extern void *dSYSchedulerCurrentFramebuffer;
extern u32 gSYSchedulerFramebufferSetTimestamp;
extern s32 gSCManagerUnkown0x800A50F0;

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

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

extern u32 lMVCommonFileID;						// 0x00000034
extern u32 lMVOpeningRoomTransitionFileID;		// 0x0000003F
extern u32 lMVOpeningRoomScene1FileID;			// 0x00000038
extern u32 lMVOpeningRoomScene2FileID;			// 0x00000039
extern u32 lMVOpeningRoomScene3FileID;			// 0x0000003A
extern u32 lMVOpeningRoomScene4FileID;			// 0x0000003B
extern u32 lMVOpeningRunCrashFileID;			// 0x0000004B
extern u32 lMVOpeningRoomWallpaperFileID;		// 0x0000005A

// 0x80134A20
u32 dMVOpeningRoomFileIDs[/* */] =
{
	&lMVCommonFileID,
	&lMVOpeningRoomTransitionFileID,
	&lMVOpeningRoomScene1FileID,
	&lMVOpeningRoomScene2FileID,
	&lMVOpeningRoomScene3FileID,
	&lMVOpeningRoomScene4FileID,
	&lMVOpeningRunCrashFileID,
	&lMVOpeningRoomWallpaperFileID
};

// 0x80134A40
Lights1 dMVOpeningRoomLights11 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);

// 0x80134A58
Lights1 dMVOpeningRoomLights12 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x00);

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80134CD0
s32 sMVOpeningRoomPad0x80134CD0[2];

// 0x80134CD8
void *sMVOpeningRoomBossFigatreeHeap;

// 0x80134CDC
void *sMVOpeningRoomPluckedFigatreeHeap;

// 0x80134CE0
void *sMVOpeningRoomDroppedFigatreeHeap;

// 0x80134CE4
s32 sMVOpeningRoomTotalTimeTics;

// 0x80134CE8
GObj *sMVOpeningRoomMainCameraGObj;

// 0x80134CEC
GObj *sMVOpeningRoomFighterCameraGObj;

// 0x80134CF0
GObj *sMVOpeningRoomLogoCameraGObj;

// 0x80134CF4
GObj *sMVOpeningRoomBossGObj;

// 0x80134CF8
s32 sMVOpeningRoomPluckedFighterKind;

// 0x80134CFC
GObj *sMVOpeningRoomDroppedFighterKind;

// 0x80134D00
GObj *sMVOpeningRoomLogoGObj;

// 0x80134D04
GObj *sMVOpeningRoomPluckedFighterGObj;

// 0x80134D08
GObj *sMVOpeningRoomDroppedFighterGObj;

// 0x80134D0C
GObj *sMVOpeningRoomGObj;

// 0x80134D10
GObj *sMVOpeningRoomSunlightGObj;

// 0x80134D14
GObj *sMVOpeningRoomDeskGObj;

// 0x80134D18
GObj *sMVOpeningRoomOutsideGObj;

// 0x80134D1C
GObj *sMVOpeningRoomOutsideHazeGObj;

// 0x80134D20
GObj *sMVOpeningRoomBooksGObj;

// 0x80134D24
GObj *sMVOpeningRoomPencilsGObj;

// 0x80134D28
GObj *sMVOpeningRoomLampGObj;

// 0x80134D2C
GObj *sMVOpeningRoomTissuesGObj;

// 0x80134D30
GObj *sMVOpeningRoomBossShadowGObj;

// 0x80134D34
s32 sMVOpeningRoomPad0x80134D34;

// 0x80134D38
s32 sMVOpeningRoomOverlayAlpha;

// 0x80134D3C
GObj *sMVOpeningRoomOverlayGObj;

// 0x80134D40
GObj *sMVOpeningRoomSpotlightGObj;

// 0x80134D44
GObj *sMVOpeningRoomBackgroundGObj;

// 0x80134D48
GObj *sMVOpeningTransitionOutlineGObj;

// 0x80134D4C
GObj *sMVOpeningTransitionOverlayGObj;

// 0x80134D50
GObj *sMVOpeningRoomCameraGObj;

// 0x80134D54
s32 sMVOpeningRoomUnused0x80134D54;

// 0x80134D58
LBFileNode sMVOpeningRoomStatusBuffer[100];

// 0x80135078
LBFileNode sMVOpeningRoomForceStatusBuffer[7];

// 0x801350B0
void *sMVOpeningRoomFiles[ARRAY_COUNT(dMVOpeningRoomFileIDs)];

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mvOpeningRoomFuncLights(Gfx **dls)
{
	gSPSetGeometryMode(dls[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
void mvOpeningRoomProcUpdate(GObj *gobj)
{
	if (sMVOpeningRoomTotalTimeTics > I_SEC_TO_TICS(18))
	{
		gcPlayAnimAll(gobj);
	}
	if (sMVOpeningRoomTotalTimeTics == I_SEC_TO_TICS(19))
	{
		gcEjectGObj(gobj);
	}
}

// 0x80131BA8
void mvOpeningRoomMakeRoom(void)
{
	GObj *gobj;

	sMVOpeningRoomGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMVOpeningRoomFiles[0], &FILE_034_ROOM_OFFSET_2), NULL);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddMObjAll(gobj, lbRelocGetFileData(MObjSub***, sMVOpeningRoomFiles[0], &FILE_034_ROOM_OFFSET_1));
	gcAddMatAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32***, sMVOpeningRoomFiles[0], &FILE_034_ROOM_OFFSET_3), 0.0F);
	gcAddGObjProcess(gobj, mvOpeningRoomProcUpdate, nGCProcessKindFunc, 1);
	gcPlayAnimAll(gobj);
}

// 0x80131C84
void mvOpeningRoomMakeSunlight(void)
{
	GObj *gobj;

	sMVOpeningRoomSunlightGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcAddXObjForDObjFixed(gcAddDObjForGObj(gobj, lbRelocGetFileData(void*, sMVOpeningRoomFiles[0], &FILE_034_SUNLIGHT_OBJECT_OFFSET)), nGCMatrixKindTraRotRpyRSca, 0);
	gcAddGObjDisplay(gobj, gcDrawDObjDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x80131D08
void mvOpeningRoomMakeDesk(void)
{
	GObj *gobj;

	sMVOpeningRoomDeskGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMVOpeningRoomFiles[0], &FILE_034_DESK_OBJECT_OFFSET), NULL);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x80131D80
void mvOpeningRoomMakeOutside(void)
{
	GObj *gobj;

	sMVOpeningRoomOutsideGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcAddXObjForDObjFixed(gcAddDObjForGObj(gobj, lbRelocGetFileData(void*, sMVOpeningRoomFiles[0], &FILE_034_OUTSIDE_OBJECT_OFFSET)), nGCMatrixKindTraRotRpyRSca, 0);
	gcAddGObjDisplay(gobj, gcDrawDObjDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x80131E04
void mvOpeningRoomMakeHaze(void)
{
	GObj *gobj;

	sMVOpeningRoomOutsideHazeGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcAddXObjForDObjFixed(gcAddDObjForGObj(gobj, lbRelocGetFileData(void*, sMVOpeningRoomFiles[0], &FILE_034_OUTSIDE_HAZE_OBJECT_OFFSET)), nGCMatrixKindTraRotRpyRSca, 0);
	gcAddGObjDisplay(gobj, gcDrawDObjDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x80131E88
void mvOpeningRoomCommonProcUpdate(GObj *gobj)
{
	if (sMVOpeningRoomTotalTimeTics >= 560)
	{
		gcPlayAnimAll(gobj);
	}
}

// 0x80131EBC
void mvOpeningRoomMakeBooks(void)
{
	GObj *gobj;

	sMVOpeningRoomBooksGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMVOpeningRoomFiles[0], &FILE_034_BOOKS_OBJECT_OFFSET_1), NULL);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mvOpeningRoomCommonProcUpdate, nGCProcessKindFunc, 1);
	gcAddAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32**, sMVOpeningRoomFiles[0], &FILE_034_BOOKS_OBJECT_OFFSET_2), 0.0F);
	gcPlayAnimAll(gobj);
}

// 0x80131F7C
void mvOpeningRoomMakePencils(void)
{
	GObj *gobj;

	sMVOpeningRoomPencilsGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMVOpeningRoomFiles[0], &FILE_034_PENCIL_HOLDER_OBJECT_OFFSET_1), NULL);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32**, sMVOpeningRoomFiles[0], &FILE_034_PENCIL_HOLDER_OBJECT_OFFSET_2), 0.0F);
	gcAddGObjProcess(gobj, mvOpeningRoomCommonProcUpdate, nGCProcessKindFunc, 1);
	gcPlayAnimAll(gobj);
}

// 0x8013203C
void mvOpeningRoomMakeLamp(void)
{
	GObj *gobj;

	sMVOpeningRoomLampGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMVOpeningRoomFiles[0], &FILE_034_LAMP_OBJECT_OFFSET_1), NULL);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32**, sMVOpeningRoomFiles[0], &FILE_034_LAMP_OBJECT_OFFSET_2), 0.0F);
	gcAddGObjProcess(gobj, mvOpeningRoomCommonProcUpdate, nGCProcessKindFunc, 1);
	gcPlayAnimAll(gobj);
}

// 0x801320FC
void mvOpeningRoomTissuesProcUpdate(GObj *gobj)
{
	if (sMVOpeningRoomTotalTimeTics >= 560)
	{
		gcPlayAnimAll(gobj);
	}
}

// 0x80132130
void mvOpeningRoomMakeTissues(void)
{
	GObj *gobj;
	DObj *dobj;

	sMVOpeningRoomTissuesGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	dobj = gcAddDObjForGObj(gobj, lbRelocGetFileData(void*, sMVOpeningRoomFiles[0], &FILE_034_TISSUE_BOX_OBJECT_OFFSET_1));
	gcAddXObjForDObjFixed(dobj, nGCMatrixKindTraRotRpyRSca, 0);
	gcAddGObjDisplay(gobj, gcDrawDObjDLHead0, 6, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddDObjAnimJoint(dobj, lbRelocGetFileData(AObjEvent32*, sMVOpeningRoomFiles[0], &FILE_034_TISSUE_BOX_OBJECT_OFFSET_2), 0.0F);
	gcAddGObjProcess(gobj, mvOpeningRoomTissuesProcUpdate, nGCProcessKindFunc, 1);
	gcPlayAnimAll(gobj);
}

// 0x801321F8
void mvOpeningRoomMakeBoss(void)
{
	GObj *fighter_gobj;
	FTCreateDesc desc = dFTManagerDefaultFighterDesc;

	desc.fkind = nFTKindBoss;
	desc.costume = ftParamGetCostumeCommonID(nFTKindBoss, 0);
	desc.pos.x = 0.0F;
	desc.pos.y = 0.0F;
	desc.pos.z = 0.0F;
	desc.figatree_heap = sMVOpeningRoomBossFigatreeHeap;
	sMVOpeningRoomBossGObj = fighter_gobj = ftManagerMakeFighter(&desc);

	scSubsysFighterSetStatus(fighter_gobj, 0x1000F);
}

// 0x801322A0 - Unused?
void func_ovl34_801322A0(GObj *fighter_gobj)
{
	func_ovl1_803905F4(sMVOpeningRoomBossGObj, fighter_gobj);
}

// 0x801322C8 - Unused?
void func_ovl34_801322C8(GObj *fighter_gobj)
{
	FTStruct *fp;
	DObj *topn_joint, *transn_joint;

	fp = ftGetStruct(fighter_gobj);
	transn_joint = fp->joints[1];
	topn_joint = fp->joints[0];

	topn_joint->translate.vec.f.x = topn_joint->translate.vec.f.x + (transn_joint->translate.vec.f.x - fp->anim_vel.x);
	topn_joint->translate.vec.f.y = topn_joint->translate.vec.f.y + (transn_joint->translate.vec.f.y - fp->anim_vel.y);
	topn_joint->translate.vec.f.z = topn_joint->translate.vec.f.z + (transn_joint->translate.vec.f.z - fp->anim_vel.z);
}

// 0x80132320 - Unused?
void func_ovl34_80132320(void)
{
	return;
}

// 0x80132328 - Unused?
void func_ovl34_80132328(void)
{
	return;
}

// 0x80132330
void mvOpeningRoomMakePluckedFighter(s32 fkind)
{
	GObj *fighter_gobj;
	FTCreateDesc desc = dFTManagerDefaultFighterDesc;

	desc.fkind = fkind;
	desc.costume = ftParamGetCostumeCommonID(fkind, 0);
	desc.pos.x = 0.0F;
	desc.pos.y = 0.0F;
	desc.pos.z = 0.0F;
	desc.figatree_heap = sMVOpeningRoomPluckedFigatreeHeap;
	sMVOpeningRoomPluckedFighterGObj = fighter_gobj = ftManagerMakeFighter(&desc);

	DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0F;
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0F;
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0F;

	scSubsysFighterSetStatus(fighter_gobj, 0x10008);

	gcMoveGObjDL(fighter_gobj, 6, -1);
}

// 0x80132404
void mvOpeningRoomLogoWallpaperFuncDisplay(GObj *gobj)
{
	if (sMVOpeningRoomTotalTimeTics >= 60)
	{
		if (sMVOpeningRoomOverlayAlpha > 0x00)
		{
			sMVOpeningRoomOverlayAlpha -= 0x0D;

			if (sMVOpeningRoomOverlayAlpha < 0x00)
			{
				sMVOpeningRoomOverlayAlpha = 0x00;
			}
		}
	}
	gDPPipeSync(gSYTaskmanDLHeads[1]++);
	gDPSetCycleType(gSYTaskmanDLHeads[1]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[1]++, 0, 0, 0x00, 0x00, 0x00, sMVOpeningRoomOverlayAlpha);
	gDPSetCombineLERP(gSYTaskmanDLHeads[1]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[1]++, 10, 10, 310, 230);
	gDPPipeSync(gSYTaskmanDLHeads[1]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[1]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80132544
void mvOpeningRoomMakeLogoWallpaper(void)
{
	GObj *gobj;

	sMVOpeningRoomOverlayAlpha = 0xFF;
	sMVOpeningRoomOverlayGObj = gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, mvOpeningRoomLogoWallpaperFuncDisplay, 26, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x801325A4
void mvOpeningRoomMakeLogo(void)
{
	GObj *gobj;

	sMVOpeningRoomLogoGObj = gobj = gcMakeGObjSPAfter(0, NULL, 21, GOBJ_PRIORITY_DEFAULT);
	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMVOpeningRoomFiles[0], &FILE_034_HAL_LOGO_OFFSET_2), NULL);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeDLLinksForGObj, 29, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddMObjAll(gobj, lbRelocGetFileData(MObjSub***, sMVOpeningRoomFiles[0], &FILE_034_HAL_LOGO_OFFSET_1));
	gcAddMatAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32***, sMVOpeningRoomFiles[0], &FILE_034_HAL_LOGO_OFFSET_3), 0.0F);
	gcAddGObjProcess(gobj, gcPlayAnimAll, nGCProcessKindFunc, 1);
	gcPlayAnimAll(gobj);
}

// 0x80132680
void mvOpeningRoomMakeSnap(void)
{
	GObj *gobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 19, GOBJ_PRIORITY_DEFAULT);
	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMVOpeningRoomFiles[0], &FILE_034_SNAP_GFX_OBJECT_OFFSET_1), NULL);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeDLLinksForGObj, 27, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32**, sMVOpeningRoomFiles[0], &FILE_034_SNAP_GFX_OBJECT_OFFSET_2), 0.0F);
	gcAddGObjProcess(gobj, gcPlayAnimAll, nGCProcessKindFunc, 1);
	gcPlayAnimAll(gobj);
}

// 0x80132738
void mvOpeningRoomMakeCloseUpEffect(void)
{
	GObj *gobj;

	// Close-up effect air
	gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMVOpeningRoomFiles[0], &FILE_034_CLOSEUP_GFX_AIR_OFFSET_2), NULL);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);

	DObjGetStruct(gobj)->translate.vec.f.x = 0.0F;
	DObjGetStruct(gobj)->translate.vec.f.y = 0.0F;
	DObjGetStruct(gobj)->translate.vec.f.z = 0.0F;

	gcAddMObjAll(gobj, lbRelocGetFileData(MObjSub***, sMVOpeningRoomFiles[0], &FILE_034_CLOSEUP_GFX_AIR_OFFSET_1));
	gcAddMatAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32***, sMVOpeningRoomFiles[0], &FILE_034_CLOSEUP_GFX_AIR_OFFSET_3), 0.0F);
	gcAddGObjProcess(gobj, gcPlayAnimAll, nGCProcessKindFunc, 1);
	gcAddAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32**, sMVOpeningRoomFiles[0], &FILE_034_CLOSEUP_GFX_AIR_OFFSET_4), 0.0F);
	gcPlayAnimAll(gobj);

	// Close-up effect ground
	gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMVOpeningRoomFiles[0], &FILE_034_CLOSEUP_GFX_GROUND_OFFSET_2), 0);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);

	DObjGetStruct(gobj)->translate.vec.f.x = 0.0F;
	DObjGetStruct(gobj)->translate.vec.f.y = 0.0F;
	DObjGetStruct(gobj)->translate.vec.f.z = 0.0F;

	gcAddMObjAll(gobj, lbRelocGetFileData(MObjSub***, sMVOpeningRoomFiles[0], &FILE_034_CLOSEUP_GFX_GROUND_OFFSET_1));
	gcAddMatAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32***, sMVOpeningRoomFiles[0], &FILE_034_CLOSEUP_GFX_GROUND_OFFSET_3), 0.0F);
	gcAddGObjProcess(gobj, gcPlayAnimAll, nGCProcessKindFunc, 1);
	gcAddAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32**, sMVOpeningRoomFiles[0], &FILE_034_CLOSEUP_GFX_GROUND_OFFSET_4), 0.0F);
	gcPlayAnimAll(gobj);
}

// 0x80132928
void mvOpeningRoomMakeDroppedFighter(s32 fkind)
{
	GObj *fighter_gobj;
	FTCreateDesc desc = dFTManagerDefaultFighterDesc;

	desc.fkind = fkind;
	desc.costume = ftParamGetCostumeCommonID(fkind, 0);
	desc.figatree_heap = sMVOpeningRoomDroppedFigatreeHeap;
	desc.pos.x = 872.3249512F;
	desc.pos.y = 4038.864014F;
	desc.pos.z = -4734.600098F;
	sMVOpeningRoomDroppedFighterGObj = fighter_gobj = ftManagerMakeFighter(&desc);

	scSubsysFighterSetStatus(fighter_gobj, 0x10009);
	gcMoveGObjDL(fighter_gobj, 6, -1);
}

// 0x801329F0
void mvOpeningRoomMakeBossShadow(void)
{
	GObj *gobj;
	DObj *dobj;

	sMVOpeningRoomBossShadowGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	dobj = gcAddDObjForGObj(gobj, lbRelocGetFileData(void*, sMVOpeningRoomFiles[0], &FILE_034_MASTERHAND_SHADOW_OBJECT_OFFSET_1));
	gcAddXObjForDObjFixed(dobj, nGCMatrixKindTraRotRpyRSca, 0);
	gcAddGObjDisplay(gobj, gcDrawDObjDLHead1, 9, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddDObjAnimJoint(dobj, lbRelocGetFileData(AObjEvent32*, sMVOpeningRoomFiles[0], &FILE_034_MASTERHAND_SHADOW_OBJECT_OFFSET_2), 0.0F);
	gcAddGObjProcess(gobj,gcPlayAnimAll, nGCProcessKindFunc, 1);
}

// 0x80132AB0
void mvOpeningRoomDeskGroundProcUpdate(GObj *stage_gobj)
{
	if (sMVOpeningRoomTotalTimeTics > 1060)
	{
		gcPlayAnimAll(stage_gobj);
	}
}

// 0x80132AE4
void mvOpeningRoomMakeDeskGround(void)
{
	GObj *gobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMVOpeningRoomFiles[0], &FILE_034_DESK_STAGE_OFFSET_2), NULL);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddMObjAll(gobj, lbRelocGetFileData(MObjSub***, sMVOpeningRoomFiles[0], &FILE_034_DESK_STAGE_OFFSET_1));
	gcAddMatAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32***, sMVOpeningRoomFiles[0], &FILE_034_DESK_STAGE_OFFSET_3), 0.0F);
	gcAddGObjProcess(gobj, mvOpeningRoomDeskGroundProcUpdate, nGCProcessKindFunc, 1);
	gcPlayAnimAll(gobj);
}

// 0x80132BB8
void mvOpeningRoomCloseUpOverlayFuncDisplay(GObj *gobj)
{
	if (sMVOpeningRoomOverlayAlpha < 0xA0)
	{
		sMVOpeningRoomOverlayAlpha += 0x09;

		if (sMVOpeningRoomOverlayAlpha > 0xA0)
		{
			sMVOpeningRoomOverlayAlpha = 0xA0;
		}
	}
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x00, 0x00, 0x00, sMVOpeningRoomOverlayAlpha);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 10, 10, 310, 230);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80132CEC
void mvOpeningRoomCreateCloseUpOverlay(void)
{
	GObj *gobj;

	sMVOpeningRoomOverlayAlpha = 0x00;
	sMVOpeningRoomOverlayGObj = gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);

	gcAddGObjDisplay(gobj, mvOpeningRoomCloseUpOverlayFuncDisplay, 26, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x80132D48
void mvOpeningRoomMakeCloseUpOverlayCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			nGCCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			60,
			COBJ_MASK_DLLINK(26),
			~0,
			FALSE,
			nGCProcessKindFunc,
			NULL,
			1,
			FALSE
		)
	);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132DE8
void mvOpeningRoomWallpaperFuncDisplay(GObj *gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimDepth(gSYTaskmanDLHeads[0]++, 36863.0F, 1);
	gDPSetDepthSource(gSYTaskmanDLHeads[0]++, G_ZS_PRIM);

	// ???
	gDPSetRenderMode
	(
		gSYTaskmanDLHeads[0]++,
		AA_EN | Z_CMP | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM),
		AA_EN | Z_CMP | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
	);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, TEXEL0,  0, 0, 0, TEXEL0,  0, 0, 0, TEXEL0,  0, 0, 0, TEXEL0);

	lbCommonDrawSObjNoAttr(gobj);

	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetDepthSource(gSYTaskmanDLHeads[0]++, G_ZS_PIXEL);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80132F44
void mvOpeningRoomMakeWallpaper(void)
{
	GObj *gobj;
	SObj *sobj;

	sMVOpeningRoomBackgroundGObj = gobj = gcMakeGObjSPAfter(0, NULL, 20, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, mvOpeningRoomWallpaperFuncDisplay, 28, GOBJ_PRIORITY_DEFAULT, ~0);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMVOpeningRoomFiles[7], &FILE_05A_BACKGROUND_IMAGE_OFFSET));

	sobj->pos.x = 10.0F;
	sobj->pos.y = 10.0F;
}

// 0x80132FCC
void mvOpeningRoomSetSpotlightPosition(GObj *gobj, s32 fkind)
{
	Vec3f translates[/* */] =
	{
		{ -38.310F,   74.904F, -122.733F },
		{ -38.870F,   74.904F, -121.776F },
		{ -38.870F,   74.904F, -119.480F },
		{ -38.870F,   74.904F, -119.480F },
		{   0.000F,    0.000F,    0.000F },
		{ -37.040F,   74.904F, -119.600F },
		{ -39.390F,   74.904F, -118.380F },
		{   0.000F,    0.000F,    0.000F },
		{ -38.310F,   74.904F, -122.733F },
		{ -39.390F,   74.904F, -118.380F },
		{   0.000F,    0.000F,    0.000F },
		{   0.000F,    0.000F,    0.000F }
	};
	Vec3f scales[/* */] =
	{
		{ 1.00F, 1.00F, 1.00F },
		{ 1.10F, 1.00F, 1.10F },
		{ 1.30F, 1.00F, 1.30F },
		{ 1.30F, 1.00F, 1.30F },
		{ 0.00F, 0.00F, 0.00F },
		{ 1.00F, 1.00F, 1.00F },
		{ 1.20F, 1.00F, 1.20F },
		{ 0.00F, 0.00F, 0.00F },
		{ 1.17F, 1.00F, 1.17F },
		{ 1.20F, 1.00F, 1.20F },
		{ 0.00F, 0.00F, 0.00F },
		{ 0.00F, 0.00F, 0.00F }
	};

	DObjGetStruct(gobj)->translate.vec.f.x = translates[fkind].x * 30.0F;
	DObjGetStruct(gobj)->translate.vec.f.y = translates[fkind].y * 30.0F;
	DObjGetStruct(gobj)->translate.vec.f.z = translates[fkind].z * 30.0F;
	DObjGetStruct(gobj)->scale.vec.f.x = scales[fkind].x;
	DObjGetStruct(gobj)->scale.vec.f.y = scales[fkind].y;
	DObjGetStruct(gobj)->scale.vec.f.z = scales[fkind].z;
}

// 0x801330B8
void mvOpeningRoomMakeSpotlight(void)
{
	GObj *gobj;

	sMVOpeningRoomSpotlightGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);

	gcAddXObjForDObjFixed(gcAddDObjForGObj(gobj, lbRelocGetFileData(void*, sMVOpeningRoomFiles[0], &FILE_034_SPOTLIGHT_OFFSET_2)), nGCMatrixKindTraRotRpyRSca, 0);
	gcAddGObjDisplay(gobj, gcDrawDObjDLHead1, 27, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddMObjAll(gobj, lbRelocGetFileData(MObjSub***, sMVOpeningRoomFiles[0], &FILE_034_SPOTLIGHT_OFFSET_1));
	gcAddMatAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32***, sMVOpeningRoomFiles[0], &FILE_034_SPOTLIGHT_OFFSET_3), 0.0F);
	gcAddGObjProcess(gobj, gcPlayAnimAll, nGCProcessKindFunc, 1);
	gcPlayAnimAll(gobj);

	mvOpeningRoomSetSpotlightPosition(gobj, sMVOpeningRoomPluckedFighterKind);
}

// 0x801331B0
void mvOpeningRoomEjectRoomGObjs(void)
{
	gcEjectGObj(sMVOpeningRoomOutsideGObj);
	gcEjectGObj(sMVOpeningRoomOutsideHazeGObj);
	gcEjectGObj(sMVOpeningRoomBooksGObj);
	gcEjectGObj(sMVOpeningRoomPencilsGObj);
	gcEjectGObj(sMVOpeningRoomLampGObj);
	gcEjectGObj(sMVOpeningRoomTissuesGObj);
}

// 0x80133210
void mvOpeningRoomInitScene1Cameras(GObj *gobj)
{
	CObj *cobj = CObjGetStruct(gobj);

	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	cobj->projection.persp.near = 80.0F;
	cobj->projection.persp.far = 15000.0F;

	gcAddCameraCamAnimJoint(cobj, lbRelocGetFileData(AObjEvent32*, sMVOpeningRoomFiles[2], &FILE_038_CAMERA_PARAMETERS_OFFSET), 0.0F);
	gcAddGObjProcess(gobj, gcPlayCamAnim, nGCProcessKindFunc, 1);

	cobj->flags |= COBJ_FLAG_DLBUFFERS;
}

// 0x801332BC
void mvOpeningRoomMakeScene1Cameras(void)
{
	GObj *gobj;

	sMVOpeningRoomMainCameraGObj = gobj = gcMakeCameraGObj
	(
		nGCCommonKindSceneCamera,
		NULL,
		16,
		GOBJ_PRIORITY_DEFAULT,
		func_80017EC0,
		80,
		COBJ_MASK_DLLINK(6),
		~0,
		FALSE,
		nGCProcessKindFunc,
		NULL,
		1,
		FALSE
	);
	gcAddXObjForCamera(CObjGetStruct(gobj), nGCMatrixKindPerspFastF, 0);
	gcAddXObjForCamera(CObjGetStruct(gobj), 14, 0);
	mvOpeningRoomInitScene1Cameras(gobj);

	sMVOpeningRoomFighterCameraGObj = gobj = gcMakeCameraGObj
	(
		nGCCommonKindSceneCamera,
		NULL,
		16,
		GOBJ_PRIORITY_DEFAULT,
		func_80017EC0,
		40,
		COBJ_MASK_DLLINK(27) | COBJ_MASK_DLLINK(9),
		~0,
		TRUE,
		nGCProcessKindFunc,
		NULL,
		1,
		FALSE
	);
	mvOpeningRoomInitScene1Cameras(gobj);
}

// 0x801333DC
void mvOpeningRoomInitScene2Cameras(GObj *gobj)
{
	CObj *cobj = CObjGetStruct(gobj);

	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	gcAddCameraCamAnimJoint(cobj, lbRelocGetFileData(AObjEvent32*, sMVOpeningRoomFiles[3], &FILE_039_CAMERA_PARAMETERS_OFFSET), 0.0F);
	gcAddGObjProcess(gobj, gcPlayCamAnim, nGCProcessKindFunc, 1);

	cobj->flags |= COBJ_FLAG_DLBUFFERS;
}

// 0x80133470
void mvOpeningRoomMakeScene2Cameras(void)
{
	GObj *gobj;

	sMVOpeningRoomMainCameraGObj = gobj = gcMakeCameraGObj
	(
		nGCCommonKindSceneCamera,
		NULL,
		16,
		GOBJ_PRIORITY_DEFAULT,
		func_80017EC0,
		80,
		COBJ_MASK_DLLINK(6),
		~0,
		FALSE,
		nGCProcessKindFunc,
		NULL,
		1,
		FALSE
	);
	gcAddXObjForCamera(CObjGetStruct(gobj), nGCMatrixKindPerspFastF, 0);
	gcAddXObjForCamera(CObjGetStruct(gobj), 8, 0);
	mvOpeningRoomInitScene2Cameras(gobj);

	sMVOpeningRoomFighterCameraGObj = gobj = gcMakeCameraGObj
	(
		nGCCommonKindSceneCamera,
		NULL,
		16,
		GOBJ_PRIORITY_DEFAULT,
		func_80017EC0,
		40,
		COBJ_MASK_DLLINK(27) | COBJ_MASK_DLLINK(9),
		~0,
		TRUE,
		nGCProcessKindFunc,
		NULL,
		1,
		FALSE
	);
	mvOpeningRoomInitScene2Cameras(gobj);
}

// 0x80133590
void mvOpeningRoomInitScene3Cameras(GObj *gobj)
{
	CObj *cobj = CObjGetStruct(gobj);
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

	gcAddCameraCamAnimJoint(cobj, lbRelocGetFileData(AObjEvent32*, sMVOpeningRoomFiles[4], &FILE_03A_CAMERA_PARAMETERS_OFFSET), 0.0F);
	gcAddGObjProcess(gobj, gcPlayCamAnim, nGCProcessKindFunc, 1);

	cobj->flags |= COBJ_FLAG_DLBUFFERS;
}

// 0x801336A8
void mvOpeningRoomMakeScene3Cameras(void)
{
	GObj *main_camera_gobj;
	GObj *fighter_camera_gobj;

	sMVOpeningRoomMainCameraGObj = main_camera_gobj = gcMakeCameraGObj
	(
		nGCCommonKindSceneCamera,
		NULL,
		16,
		GOBJ_PRIORITY_DEFAULT,
		func_80017EC0,
		80,
		COBJ_MASK_DLLINK(6),
		~0,
		FALSE,
		nGCProcessKindFunc,
		NULL,
		1,
		FALSE
	);
	gcAddXObjForCamera(CObjGetStruct(main_camera_gobj), nGCMatrixKindPerspFastF, 0);
	gcAddXObjForCamera(CObjGetStruct(main_camera_gobj), 8, 0);
	mvOpeningRoomInitScene3Cameras(main_camera_gobj);

	sMVOpeningRoomFighterCameraGObj = fighter_camera_gobj = gcMakeCameraGObj
	(
		nGCCommonKindSceneCamera,
		NULL,
		16,
		GOBJ_PRIORITY_DEFAULT,
		func_80017EC0,
		40,
		COBJ_MASK_DLLINK(27) | COBJ_MASK_DLLINK(9),
		~0,
		TRUE,
		nGCProcessKindFunc,
		NULL,
		1,
		FALSE
	);
	mvOpeningRoomInitScene3Cameras(fighter_camera_gobj);
}

// 0x801337C8
void mvOpeningRoomInitScene4Cameras(GObj *gobj)
{
	CObj *cobj = CObjGetStruct(gobj);

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

	gcAddCameraCamAnimJoint(cobj, lbRelocGetFileData(AObjEvent32*, sMVOpeningRoomFiles[5], &FILE_03B_CAMERA_PARAMETERS_OFFSET), 0.0F);
	gcAddGObjProcess(gobj, gcPlayCamAnim, nGCProcessKindFunc, 1);
}

// 0x801338D4
void mvOpeningRoomMakeScene4Cameras(void)
{
	GObj *main_camera_gobj;
	GObj *fighter_camera_gobj;

	sMVOpeningRoomMainCameraGObj = main_camera_gobj = gcMakeCameraGObj
	(
		nGCCommonKindSceneCamera,
		NULL,
		16,
		GOBJ_PRIORITY_DEFAULT,
		func_80017EC0,
		80,
		COBJ_MASK_DLLINK(6),
		~0,
		TRUE,
		nGCProcessKindFunc,
		NULL,
		1,
		FALSE
	);
	mvOpeningRoomInitScene4Cameras(main_camera_gobj);

	sMVOpeningRoomFighterCameraGObj = fighter_camera_gobj = gcMakeCameraGObj
	(
		nGCCommonKindSceneCamera,
		NULL,
		16,
		GOBJ_PRIORITY_DEFAULT,
		func_80017EC0,
		40,
		COBJ_MASK_DLLINK(9),
		~0,
		TRUE,
		nGCProcessKindFunc,
		NULL,
		1,
		FALSE
	);
	mvOpeningRoomInitScene4Cameras(fighter_camera_gobj);
}

// 0x801339CC
void mvOpeningRoomMakeWallpaperCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			nGCCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			90,
			COBJ_MASK_DLLINK(28),
			~0,
			FALSE,
			nGCProcessKindFunc,
			NULL,
			1,
			FALSE
		)
	);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133A6C
void mvOpeningRoomMakeLogoCamera(void)
{
	GObj *gobj;
	CObj *cobj;

	sMVOpeningRoomLogoCameraGObj = gobj = gcMakeCameraGObj
	(
		nGCCommonKindSceneCamera,
		NULL,
		16,
		GOBJ_PRIORITY_DEFAULT,
		func_80017EC0,
		50,
		COBJ_MASK_DLLINK(29),
		~0,
		TRUE,
		nGCProcessKindFunc,
		NULL,
		1,
		FALSE
	);
	cobj = CObjGetStruct(gobj);

	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	gcAddCameraCamAnimJoint(cobj, lbRelocGetFileData(AObjEvent32*, sMVOpeningRoomFiles[2], &FILE_038_CAMERA_PARAMETERS_OFFSET), 0.0F);
	gcAddGObjProcess(gobj, gcPlayCamAnim, nGCProcessKindFunc, 1);
}

// 0x80133B58
void mvOpeningRoomTransitionOverlayFuncDisplay(GObj *gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetColorImage(gSYTaskmanDLHeads[0]++, G_IM_FMT_RGBA, G_IM_SIZ_16b, gSYVideoResWidth, gSYVideoZBuffer);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE, 0, 0, 0, 1, 0, 0, 0, PRIMITIVE, 0, 0, 0, 1);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_PASS, G_RM_OPA_SURF2);

	gcDrawDObjDLHead0(gobj);

	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetColorImage(gSYTaskmanDLHeads[0]++, G_IM_FMT_RGBA, gSYVideoColorDepth, gSYVideoResWidth, (void*)0x0F000000);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80133CEC
void mvOpeningRoomTransitionOutlineFuncDisplay(GObj *gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetColorImage(gSYTaskmanDLHeads[0]++, G_IM_FMT_RGBA, G_IM_SIZ_16b, gSYVideoResWidth, gSYVideoZBuffer);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x00, 0x00, 0x00, 0xFF);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 0, 0, 320, 240);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetColorImage(gSYTaskmanDLHeads[0]++, G_IM_FMT_RGBA, gSYVideoColorDepth, gSYVideoResWidth, (void*)0x0F000000);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, SHADE, 0, 0, 0, 1, 0, 0, 0, SHADE, 0, 0, 0, 1);

	gcDrawDObjDLHead0(gobj);

	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80133EFC
void mvOpeningRoomMakeTransitionEffect(void)
{
	GObj *gobj;
	DObj *dobj;

	sMVOpeningTransitionOutlineGObj = gobj = gcMakeGObjSPAfter(0, NULL, 22, GOBJ_PRIORITY_DEFAULT);
	dobj = gcAddDObjForGObj(gobj, lbRelocGetFileData(void*, sMVOpeningRoomFiles[1], &FILE_03F_TRANSITION_GFX_OUTLINE_OBJECT_OFFSET_1));
	gcAddXObjForDObjFixed(dobj, nGCMatrixKindTraRotRpyRSca, 0);
	gcAddGObjDisplay(gobj, mvOpeningRoomTransitionOutlineFuncDisplay, 30, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddDObjAnimJoint(dobj, lbRelocGetFileData(AObjEvent32*, sMVOpeningRoomFiles[1], &FILE_03F_TRANSITION_GFX_OUTLINE_OBJECT_OFFSET_2), 0.0F);
	gcAddGObjProcess(gobj, gcPlayAnimAll, nGCProcessKindFunc, 1);
	gcPlayAnimAll(gobj);

	sMVOpeningTransitionOverlayGObj = gobj = gcMakeGObjSPAfter(0, NULL, 22, GOBJ_PRIORITY_DEFAULT);
	dobj = gcAddDObjForGObj(gobj, lbRelocGetFileData(void*, sMVOpeningRoomFiles[1], &FILE_03F_TRANSITION_GFX_OVERLAY_OBJECT_OFFSET_1));
	gcAddXObjForDObjFixed(dobj, nGCMatrixKindTraRotRpyRSca, 0);
	gcAddGObjDisplay(gobj, mvOpeningRoomTransitionOverlayFuncDisplay, 30, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddDObjAnimJoint(dobj, lbRelocGetFileData(AObjEvent32*, sMVOpeningRoomFiles[1], &FILE_03F_TRANSITION_GFX_OVERLAY_OBJECT_OFFSET_2), 0.0F);
	gcAddGObjProcess(gobj, gcPlayAnimAll, nGCProcessKindFunc, 1);
	gcPlayAnimAll(gobj);
}

// 0x8013407C
void mvOpeningRoomMakeTransitionEffectCamera(void)
{
	GObj *gobj = gcMakeCameraGObj
	(
		nGCCommonKindSceneCamera,
		NULL,
		16,
		GOBJ_PRIORITY_DEFAULT,
		func_80017EC0,
		95,
		COBJ_MASK_DLLINK(30),
		~0,
		TRUE,
		nGCProcessKindFunc,
		NULL,
		1,
		FALSE
	);
	CObj *cobj = CObjGetStruct(gobj);

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
void mvOpeningRoomEjectCameraGObjs(void)
{
	gcEjectGObj(sMVOpeningRoomMainCameraGObj);
	gcEjectGObj(sMVOpeningRoomFighterCameraGObj);
}

// 0x801341B4
s32 mvOpeningRoomGetDroppedFighterKind(void)
{
	s32 fkinds[/* */] =
	{
		nFTKindMario,
		nFTKindFox,
		nFTKindDonkey,
		nFTKindSamus,
		nFTKindLink,
		nFTKindYoshi,
		nFTKindKirby,
		nFTKindPikachu
	};

	s32 fkind;

	while (fkind = fkinds[mtTrigGetRandomTimeUCharRange(ARRAY_COUNT(fkinds))], fkind == sMVOpeningRoomPluckedFighterKind);

	return fkind;
}

// 0x80134270
s32 mvOpeningRoomGetPluckedFighterKind(void)
{
	s32 fkinds[/* */] =
	{
		nFTKindMario,
		nFTKindFox,
		nFTKindDonkey,
		nFTKindSamus,
		nFTKindLink,
		nFTKindYoshi,
		nFTKindKirby,
		nFTKindPikachu
	};

	return fkinds[mtTrigGetRandomTimeUCharRange(ARRAY_COUNT(fkinds))];
}

// 0x801342E4
void mvOpeningRoomInitVars(void)
{
	sMVOpeningRoomTotalTimeTics = 0;
	sMVOpeningRoomPluckedFighterKind = mvOpeningRoomGetPluckedFighterKind();
	sMVOpeningRoomDroppedFighterKind = mvOpeningRoomGetDroppedFighterKind();
}

// 0x80134318
sb32 mvOpeningRoomCheckSetFramebuffer(SYTaskGfx *tgfx)
{
	s32 i;
	s32 unused;
	void *fb_next, *fb_curr;

	if (gSYSchedulerNextFramebuffer != NULL)
	{
		return TRUE;
	}
	fb_next = osViGetNextFramebuffer();
	fb_curr = osViGetCurrentFramebuffer();

	if ((void*)dSYSchedulerCurrentFramebuffer == gSYFramebufferSets[0])
	{
		i = 1;
	}
	else if ((void*)dSYSchedulerCurrentFramebuffer == gSYFramebufferSets[1])
	{
		i = 2;
	}
	else if ((void*)dSYSchedulerCurrentFramebuffer == gSYFramebufferSets[2])
	{
		i = 0;
	}
	else i = 0;

	if ((fb_curr != gSYFramebufferSets[i]) && (fb_next != gSYFramebufferSets[i]))
	{
		gSYSchedulerNextFramebuffer = gSYFramebufferSets[i];
		gSYSchedulerFramebufferSetTimestamp = osGetCount();

		return TRUE;
	}
	else return FALSE;
}

// 0x80134400
void mvOpeningRoomFuncRun(GObj *gobj)
{
	sMVOpeningRoomTotalTimeTics++;

	if (sMVOpeningRoomTotalTimeTics >= 10)
	{
		if (sMVOpeningRoomUnused0x80134D54 != 0)
		{
			sMVOpeningRoomUnused0x80134D54--;
		}
		if ((scSubsysControllerGetPlayerStickInRangeLR(-15, 15)) && (scSubsysControllerGetPlayerStickInRangeUD(-15, 15)))
		{
			sMVOpeningRoomUnused0x80134D54 = 0;
		}
		if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON))
		{
			gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
			gSCManagerSceneData.scene_curr = nSCKindTitle;

			syTaskmanSetLoadScene();
		}
		if (sMVOpeningRoomTotalTimeTics == 280)
		{
			mvOpeningRoomMakePluckedFighter(sMVOpeningRoomPluckedFighterKind);
			mvOpeningRoomMakePencils();

			gcEjectGObj(sMVOpeningRoomLogoGObj);
			gcEjectGObj(sMVOpeningRoomOverlayGObj);
			gcEjectGObj(sMVOpeningRoomBossShadowGObj);
		}
		if (sMVOpeningRoomTotalTimeTics == 695)
		{
			mvOpeningRoomMakeDroppedFighter(sMVOpeningRoomDroppedFighterKind);
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
			mvOpeningRoomCreateCloseUpOverlay();
			gcEjectGObj(sMVOpeningRoomSunlightGObj);
		}
		if (sMVOpeningRoomTotalTimeTics == 560)
		{
			mvOpeningRoomEjectCameraGObjs();
			mvOpeningRoomMakeScene2Cameras();
			scSubsysFighterSetStatus(sMVOpeningRoomBossGObj, 0x10010);
		}
		if (sMVOpeningRoomTotalTimeTics == 500)
		{
			gcMoveGObjDL(sMVOpeningRoomPluckedFighterGObj, 9, -1);
			mvOpeningRoomMakeSpotlight();
		}
		if (sMVOpeningRoomTotalTimeTics == 860)
		{
			mvOpeningRoomEjectCameraGObjs();
			mvOpeningRoomMakeScene3Cameras();
			scSubsysFighterSetStatus(sMVOpeningRoomBossGObj, 0x10011);
			mvOpeningRoomMakeSnap();
		}
		if (sMVOpeningRoomTotalTimeTics == 1037)
		{
			CObjGetStruct(sMVOpeningRoomCameraGObj)->flags &= ~COBJ_FLAG_FILLCOLOR;
		}
		if (sMVOpeningRoomTotalTimeTics == 1040)
		{
			gcEjectGObj(sMVOpeningRoomOverlayGObj);
			gcEjectGObj(sMVOpeningRoomSpotlightGObj);
			gcEjectGObj(sMVOpeningRoomBossGObj);

			mvOpeningRoomMakeTransitionEffectCamera();
			mvOpeningRoomMakeTransitionEffect();
			mvOpeningRoomEjectRoomGObjs();
			mvOpeningRoomMakeDeskGround();
			mvOpeningRoomMakeWallpaper();
		}
		if (sMVOpeningRoomTotalTimeTics == I_SEC_TO_TICS(19))
		{
			mvOpeningRoomEjectCameraGObjs();
			mvOpeningRoomMakeCloseUpEffect();

			DObjGetStruct(sMVOpeningRoomPluckedFighterGObj)->rotate.vec.f.x = 0.0F;
			DObjGetStruct(sMVOpeningRoomPluckedFighterGObj)->rotate.vec.f.y = 0.0F;
			DObjGetStruct(sMVOpeningRoomPluckedFighterGObj)->rotate.vec.f.z = 0.0F;

			scSubsysFighterSetStatus(sMVOpeningRoomPluckedFighterGObj, 0x1000A);
			mvOpeningRoomMakeScene4Cameras();
		}
		if (sMVOpeningRoomTotalTimeTics == I_SEC_TO_TICS(18))
		{
			gcEjectGObj(sMVOpeningTransitionOverlayGObj);
			gcEjectGObj(sMVOpeningTransitionOutlineGObj);
		}
		if (sMVOpeningRoomTotalTimeTics == I_SEC_TO_TICS(22))
		{
			gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
			gSCManagerSceneData.scene_curr = nSCKindOpeningPortraits;

			syTaskmanSetLoadScene();
		}
	}
}

// 0x80134788
void mvOpeningRoomFuncStart(void)
{
	s32 unused;
	LBRelocSetup rl_setup;

	func_800048D0(mvOpeningRoomCheckSetFramebuffer);

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
	gcMakeGObjSPAfter(0, mvOpeningRoomFuncRun, 0, GOBJ_PRIORITY_DEFAULT);
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

	mvOpeningRoomMakeScene1Cameras();
	mvOpeningRoomMakeCloseUpOverlayCamera();
	mvOpeningRoomMakeWallpaperCamera();
	mvOpeningRoomMakeLogoCamera();
	mvOpeningRoomMakeOutside();
	mvOpeningRoomMakeHaze();
	mvOpeningRoomMakeRoom();
	mvOpeningRoomMakeSunlight();
	mvOpeningRoomMakeDesk();
	mvOpeningRoomMakeLogoWallpaper();
	mvOpeningRoomMakeLogo();
	mvOpeningRoomMakeBooks();
	mvOpeningRoomMakeLamp();
	mvOpeningRoomMakeTissues();
	mvOpeningRoomMakeBoss();
	mvOpeningRoomMakeBossShadow();
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
