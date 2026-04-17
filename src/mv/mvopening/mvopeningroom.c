#include <ft/fighter.h>
#include <gr/ground.h>
#include <mv/movie.h>
#include <sc/scene.h>
#include <sys/video.h>
#include <sys/rdp.h>
#include <reloc_data.h>


// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 80134A20
u32 dMVOpeningRoomFileIDs[] =
{
	&llMVCommonFileID,
	&llMVOpeningRoomTransitionFileID,
	&llMVOpeningRoomScene1FileID,
	&llMVOpeningRoomScene2FileID,
	&llMVOpeningRoomScene3FileID,
	&llMVOpeningRoomScene4FileID,
	&llMVOpeningRunCrashFileID,
	&llMVOpeningRoomWallpaperFileID
};

// 80134A40
Lights1 dMVOpeningRoomLights11 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);

// 80134A58
Lights1 dMVOpeningRoomLights12 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x00);

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 80134CD0
s32 sMVOpeningRoomPad0x80134CD0[2];

// 80134CD8
void *sMVOpeningRoomBossFigatreeHeap;

// 80134CDC
void *sMVOpeningRoomPluckedFigatreeHeap;

// 80134CE0
void *sMVOpeningRoomDroppedFigatreeHeap;

// 80134CE4
s32 sMVOpeningRoomTotalTimeTics;

// 80134CE8
GObj *sMVOpeningRoomMainCameraGObj;

// 80134CEC
GObj *sMVOpeningRoomFighterCameraGObj;

// 80134CF0
GObj *sMVOpeningRoomLogoCameraGObj;

// 80134CF4
GObj *sMVOpeningRoomBossGObj;

// 80134CF8
s32 sMVOpeningRoomPulledFighterKind;

// 80134CFC
GObj *sMVOpeningRoomDroppedFighterKind;

// 80134D00
GObj *sMVOpeningRoomLogoGObj;

// 80134D04
GObj *sMVOpeningRoomPulledFighterGObj;

// 80134D08
GObj *sMVOpeningRoomDroppedFighterGObj;

// 80134D0C
GObj *sMVOpeningRoomGObj;

// 80134D10
GObj *sMVOpeningRoomSunlightGObj;

// 80134D14
GObj *sMVOpeningRoomDeskGObj;

// 80134D18
GObj *sMVOpeningRoomOutsideGObj;

// 80134D1C
GObj *sMVOpeningRoomOutsideHazeGObj;

// 80134D20
GObj *sMVOpeningRoomBooksGObj;

// 80134D24
GObj *sMVOpeningRoomPencilsGObj;

// 80134D28
GObj *sMVOpeningRoomLampGObj;

// 80134D2C
GObj *sMVOpeningRoomTissuesGObj;

// 80134D30
GObj *sMVOpeningRoomBossShadowGObj;

// 80134D34
s32 sMVOpeningRoomPad0x80134D34;

// 80134D38
s32 sMVOpeningRoomOverlayAlpha;

// 80134D3C
GObj *sMVOpeningRoomOverlayGObj;

// 80134D40
GObj *sMVOpeningRoomSpotlightGObj;

// 80134D44
GObj *sMVOpeningRoomBackgroundGObj;

// 80134D48
GObj *sMVOpeningTransitionOutlineGObj;

// 80134D4C
GObj *sMVOpeningTransitionOverlayGObj;

// 80134D50
GObj *sMVOpeningRoomCameraGObj;

// 80134D54
s32 sMVOpeningRoomUnused0x80134D54;

// 80134D58
LBFileNode sMVOpeningRoomStatusBuffer[100];

// 80135078
LBFileNode sMVOpeningRoomForceStatusBuffer[7];

// 801350B0
void *sMVOpeningRoomFiles[ARRAY_COUNT(dMVOpeningRoomFileIDs)];

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 80131B00
void mvOpeningRoomFuncLights(Gfx **dls)
{
	gSPSetGeometryMode(dls[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 80131B58
void mvOpeningRoomBackgroundProcUpdate(GObj *gobj)
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

// 80131BA8
void mvOpeningRoomMakeBackground()
{
	GObj *gobj;

	sMVOpeningRoomGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMVOpeningRoomFiles[0], &llMVCommonRoomBackgroundDObjDesc), NULL);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddMObjAll(gobj, lbRelocGetFileData(MObjSub***, sMVOpeningRoomFiles[0], &llMVCommonRoomBackgroundMObjSub));
	gcAddMatAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32***, sMVOpeningRoomFiles[0], &llMVCommonRoomBackgroundMatAnimJoint), 0.0F);
	gcAddGObjProcess(gobj, mvOpeningRoomBackgroundProcUpdate, nGCProcessKindFunc, 1);
	gcPlayAnimAll(gobj);
}

// 80131C84
void mvOpeningRoomMakeSunlight()
{
	GObj *gobj;

	sMVOpeningRoomSunlightGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcAddXObjForDObjFixed(gcAddDObjForGObj(gobj, lbRelocGetFileData(void*, sMVOpeningRoomFiles[0], &llMVCommonRoomSunlightDisplayList)), nGCMatrixKindTraRotRpyRSca, 0);
	gcAddGObjDisplay(gobj, gcDrawDObjDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 80131D08
void mvOpeningRoomMakeDesk()
{
	GObj *gobj;

	sMVOpeningRoomDeskGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMVOpeningRoomFiles[0], &llMVCommonRoomDeskDObjDesc), NULL);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 80131D80
void mvOpeningRoomMakeOutside()
{
	GObj *gobj;

	sMVOpeningRoomOutsideGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcAddXObjForDObjFixed(gcAddDObjForGObj(gobj, lbRelocGetFileData(void*, sMVOpeningRoomFiles[0], &llMVCommonRoomOutsideDisplayList)), nGCMatrixKindTraRotRpyRSca, 0);
	gcAddGObjDisplay(gobj, gcDrawDObjDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 80131E04
void mvOpeningRoomMakeHaze()
{
	GObj *gobj;

	sMVOpeningRoomOutsideHazeGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcAddXObjForDObjFixed(gcAddDObjForGObj(gobj, lbRelocGetFileData(void*, sMVOpeningRoomFiles[0], &llMVCommonRoomHazeDisplayList)), nGCMatrixKindTraRotRpyRSca, 0);
	gcAddGObjDisplay(gobj, gcDrawDObjDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 80131E88
void mvOpeningRoomCommonProcUpdate(GObj *gobj)
{
	if (sMVOpeningRoomTotalTimeTics >= 560)
	{
		gcPlayAnimAll(gobj);
	}
}

// 80131EBC
void mvOpeningRoomMakeBooks()
{
	GObj *gobj;

	sMVOpeningRoomBooksGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMVOpeningRoomFiles[0], &llMVCommonRoomBooksDObjDesc), NULL);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mvOpeningRoomCommonProcUpdate, nGCProcessKindFunc, 1);
	gcAddAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32**, sMVOpeningRoomFiles[0], &llMVCommonRoomBooksAnimJoint), 0.0F);
	gcPlayAnimAll(gobj);
}

// 80131F7C
void mvOpeningRoomMakePencils()
{
	GObj *gobj;

	sMVOpeningRoomPencilsGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMVOpeningRoomFiles[0], &llMVCommonRoomPencilsDObjDesc), NULL);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32**, sMVOpeningRoomFiles[0], &llMVCommonRoomPencilsAnimJoint), 0.0F);
	gcAddGObjProcess(gobj, mvOpeningRoomCommonProcUpdate, nGCProcessKindFunc, 1);
	gcPlayAnimAll(gobj);
}

// 8013203C
void mvOpeningRoomMakeLamp()
{
	GObj *gobj;

	sMVOpeningRoomLampGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMVOpeningRoomFiles[0], &llMVCommonRoomLampDObjDesc), NULL);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32**, sMVOpeningRoomFiles[0], &llMVCommonRoomLampAnimJoint), 0.0F);
	gcAddGObjProcess(gobj, mvOpeningRoomCommonProcUpdate, nGCProcessKindFunc, 1);
	gcPlayAnimAll(gobj);
}

// 801320FC
void mvOpeningRoomTissuesProcUpdate(GObj *gobj)
{
	if (sMVOpeningRoomTotalTimeTics >= 560)
	{
		gcPlayAnimAll(gobj);
	}
}

// 80132130
void mvOpeningRoomMakeTissues()
{
	GObj *gobj;
	DObj *dobj;

	sMVOpeningRoomTissuesGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	dobj = gcAddDObjForGObj(gobj, lbRelocGetFileData(void*, sMVOpeningRoomFiles[0], &llMVCommonRoomTissuesDisplayList));
	gcAddXObjForDObjFixed(dobj, nGCMatrixKindTraRotRpyRSca, 0);
	gcAddGObjDisplay(gobj, gcDrawDObjDLHead0, 6, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddDObjAnimJoint(dobj, lbRelocGetFileData(AObjEvent32*, sMVOpeningRoomFiles[0], &llMVCommonRoomTissuesAnimJoint), 0.0F);
	gcAddGObjProcess(gobj, mvOpeningRoomTissuesProcUpdate, nGCProcessKindFunc, 1);
	gcPlayAnimAll(gobj);
}

// 801321F8
void mvOpeningRoomMakeBoss()
{
	GObj *fighter_gobj;
	FTDesc desc = dFTManagerDefaultFighterDesc;

	desc.fkind = nFTKindBoss;
	desc.costume = ftParamGetCostumeCommonID(nFTKindBoss, 0);
	desc.pos.x = 0.0F;
	desc.pos.y = 0.0F;
	desc.pos.z = 0.0F;
	desc.figatree_heap = sMVOpeningRoomBossFigatreeHeap;
	sMVOpeningRoomBossGObj = fighter_gobj = ftManagerMakeFighter(&desc);

	scSubsysFighterSetStatus(fighter_gobj, 0x1000F);
}

// 0x801322A0 - Referenced from scsubsysdata
void mvOpeningFighterProcUpdate(GObj *fighter_gobj)
{
	scSubsysFighterOpeningProcUpdate(sMVOpeningRoomBossGObj, fighter_gobj);
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
void func_ovl34_80132320()
{
	return;
}

// 0x80132328 - Unused?
void func_ovl34_80132328()
{
	return;
}

// 80132330
void mvOpeningRoomMakePulledFighter(s32 fkind)
{
	GObj *fighter_gobj;
	FTDesc desc = dFTManagerDefaultFighterDesc;

	desc.fkind = fkind;
	desc.costume = ftParamGetCostumeCommonID(fkind, 0);
	desc.pos.x = 0.0F;
	desc.pos.y = 0.0F;
	desc.pos.z = 0.0F;
	desc.figatree_heap = sMVOpeningRoomPluckedFigatreeHeap;
	sMVOpeningRoomPulledFighterGObj = fighter_gobj = ftManagerMakeFighter(&desc);

	DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0F;
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0F;
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0F;

	scSubsysFighterSetStatus(fighter_gobj, nFTDemoStatusFigurePulled);

	gcMoveGObjDL(fighter_gobj, 6, -1);
}

// 80132404
void mvOpeningRoomLogoWallpaperProcDisplay(GObj *gobj)
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

// 80132544
void mvOpeningRoomMakeLogoWallpaper()
{
	GObj *gobj;

	sMVOpeningRoomOverlayAlpha = 0xFF;
	sMVOpeningRoomOverlayGObj = gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, mvOpeningRoomLogoWallpaperProcDisplay, 26, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 801325A4
void mvOpeningRoomMakeLogo()
{
	GObj *gobj;

	sMVOpeningRoomLogoGObj = gobj = gcMakeGObjSPAfter(0, NULL, 21, GOBJ_PRIORITY_DEFAULT);
	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMVOpeningRoomFiles[0], &llMVCommonRoomLogoDObjDesc), NULL);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeDLLinksForGObj, 29, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddMObjAll(gobj, lbRelocGetFileData(MObjSub***, sMVOpeningRoomFiles[0], &llMVCommonRoomLogoMObjSub));
	gcAddMatAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32***, sMVOpeningRoomFiles[0], &llMVCommonRoomLogoMatAnimJoint), 0.0F);
	gcAddGObjProcess(gobj, gcPlayAnimAll, nGCProcessKindFunc, 1);
	gcPlayAnimAll(gobj);
}

// 80132680
void mvOpeningRoomMakeSnap()
{
	GObj *gobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 19, GOBJ_PRIORITY_DEFAULT);
	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMVOpeningRoomFiles[0], &llMVCommonRoomSnapDObjDesc), NULL);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeDLLinksForGObj, 27, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32**, sMVOpeningRoomFiles[0], &llMVCommonRoomSnapAnimJoint), 0.0F);
	gcAddGObjProcess(gobj, gcPlayAnimAll, nGCProcessKindFunc, 1);
	gcPlayAnimAll(gobj);
}

// 80132738
void mvOpeningRoomMakeCloseUpEffect()
{
	GObj *gobj;

	// Close-up effect air
	gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMVOpeningRoomFiles[0], &llMVCommonRoomCloseUpEffectAirDObjDesc), NULL);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);

	DObjGetStruct(gobj)->translate.vec.f.x = 0.0F;
	DObjGetStruct(gobj)->translate.vec.f.y = 0.0F;
	DObjGetStruct(gobj)->translate.vec.f.z = 0.0F;

	gcAddMObjAll(gobj, lbRelocGetFileData(MObjSub***, sMVOpeningRoomFiles[0], &llMVCommonRoomCloseUpEffectAirMObjSub));
	gcAddMatAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32***, sMVOpeningRoomFiles[0], &llMVCommonRoomCloseUpEffectAirMatAnimJoint), 0.0F);
	gcAddGObjProcess(gobj, gcPlayAnimAll, nGCProcessKindFunc, 1);
	gcAddAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32**, sMVOpeningRoomFiles[0], &llMVCommonRoomCloseUpEffectAirAnimJoint), 0.0F);
	gcPlayAnimAll(gobj);

	// Close-up effect ground
	gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMVOpeningRoomFiles[0], &llMVCommonRoomCloseUpEffectGroundDObjDesc), 0);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);

	DObjGetStruct(gobj)->translate.vec.f.x = 0.0F;
	DObjGetStruct(gobj)->translate.vec.f.y = 0.0F;
	DObjGetStruct(gobj)->translate.vec.f.z = 0.0F;

	gcAddMObjAll(gobj, lbRelocGetFileData(MObjSub***, sMVOpeningRoomFiles[0], &llMVCommonRoomCloseUpEffectGroundMObjSub));
	gcAddMatAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32***, sMVOpeningRoomFiles[0], &llMVCommonRoomCloseUpEffectGroundMatAnimJoint), 0.0F);
	gcAddGObjProcess(gobj, gcPlayAnimAll, nGCProcessKindFunc, 1);
	gcAddAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32**, sMVOpeningRoomFiles[0], &llMVCommonRoomCloseUpEffectGroundAnimJoint), 0.0F);
	gcPlayAnimAll(gobj);
}

// 80132928
void mvOpeningRoomMakeDroppedFighter(s32 fkind)
{
	GObj *fighter_gobj;
	FTDesc desc = dFTManagerDefaultFighterDesc;

	desc.fkind = fkind;
	desc.costume = ftParamGetCostumeCommonID(fkind, 0);
	desc.figatree_heap = sMVOpeningRoomDroppedFigatreeHeap;
	desc.pos.x = 872.3249512F;
	desc.pos.y = 4038.864014F;
	desc.pos.z = -4734.600098F;
	sMVOpeningRoomDroppedFighterGObj = fighter_gobj = ftManagerMakeFighter(&desc);

	scSubsysFighterSetStatus(fighter_gobj, nFTDemoStatusFigureDropped);
	gcMoveGObjDL(fighter_gobj, 6, -1);
}

// 801329F0
void mvOpeningRoomMakeBossShadow()
{
	GObj *gobj;
	DObj *dobj;

	sMVOpeningRoomBossShadowGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	dobj = gcAddDObjForGObj(gobj, lbRelocGetFileData(void*, sMVOpeningRoomFiles[0], &llMVCommonRoomBossShadowDisplayList));
	gcAddXObjForDObjFixed(dobj, nGCMatrixKindTraRotRpyRSca, 0);
	gcAddGObjDisplay(gobj, gcDrawDObjDLHead1, 9, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddDObjAnimJoint(dobj, lbRelocGetFileData(AObjEvent32*, sMVOpeningRoomFiles[0], &llMVCommonRoomBossShadowAnimJoint), 0.0F);
	gcAddGObjProcess(gobj,gcPlayAnimAll, nGCProcessKindFunc, 1);
}

// 80132AB0
void mvOpeningRoomDeskGroundProcUpdate(GObj *gobj)
{
	if (sMVOpeningRoomTotalTimeTics > 1060)
	{
		gcPlayAnimAll(gobj);
	}
}

// 80132AE4
void mvOpeningRoomMakeDeskGround()
{
	GObj *gobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMVOpeningRoomFiles[0], &llMVCommonRoomDeskGroundDObjDesc), NULL);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeDLLinksForGObj, 6, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddMObjAll(gobj, lbRelocGetFileData(MObjSub***, sMVOpeningRoomFiles[0], &llMVCommonRoomDeskGroundMObjSub));
	gcAddMatAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32***, sMVOpeningRoomFiles[0], &llMVCommonRoomDeskGroundMatAnimJoint), 0.0F);
	gcAddGObjProcess(gobj, mvOpeningRoomDeskGroundProcUpdate, nGCProcessKindFunc, 1);
	gcPlayAnimAll(gobj);
}

// 80132BB8
void mvOpeningRoomCloseUpOverlayProcDisplay(GObj *gobj)
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

// 80132CEC
void mvOpeningRoomMakeCloseUpOverlay()
{
	GObj *gobj;

	sMVOpeningRoomOverlayAlpha = 0x00;
	sMVOpeningRoomOverlayGObj = gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);

	gcAddGObjDisplay(gobj, mvOpeningRoomCloseUpOverlayProcDisplay, 26, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 80132D48
void mvOpeningRoomMakeCloseUpOverlayCamera()
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

// 80132DE8
void mvOpeningRoomWallpaperProcDisplay(GObj *gobj)
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

// 80132F44
void mvOpeningRoomMakeWallpaper()
{
	GObj *gobj;
	SObj *sobj;

	sMVOpeningRoomBackgroundGObj = gobj = gcMakeGObjSPAfter(0, NULL, 20, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, mvOpeningRoomWallpaperProcDisplay, 28, GOBJ_PRIORITY_DEFAULT, ~0);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMVOpeningRoomFiles[7], &llMVOpeningRoomWallpaperSprite));

	sobj->pos.x = 10.0F;
	sobj->pos.y = 10.0F;
}

// 80132FCC
void mvOpeningRoomSetSpotlightPosition(GObj *gobj, s32 fkind)
{
	Vec3f translates[] =
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
	Vec3f scales[] =
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

// 801330B8
void mvOpeningRoomMakeSpotlight()
{
	GObj *gobj;

	sMVOpeningRoomSpotlightGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);

	gcAddXObjForDObjFixed(gcAddDObjForGObj(gobj, lbRelocGetFileData(void*, sMVOpeningRoomFiles[0], &llMVCommonRoomSpotlightDisplayList)), nGCMatrixKindTraRotRpyRSca, 0);
	gcAddGObjDisplay(gobj, gcDrawDObjDLHead1, 27, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddMObjAll(gobj, lbRelocGetFileData(MObjSub***, sMVOpeningRoomFiles[0], &llMVCommonRoomSpotlightMObjSub));
	gcAddMatAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32***, sMVOpeningRoomFiles[0], &llMVCommonRoomSpotlightMatAnimJoint), 0.0F);
	gcAddGObjProcess(gobj, gcPlayAnimAll, nGCProcessKindFunc, 1);
	gcPlayAnimAll(gobj);

	mvOpeningRoomSetSpotlightPosition(gobj, sMVOpeningRoomPulledFighterKind);
}

// 801331B0
void mvOpeningRoomEjectRoomGObjs()
{
	gcEjectGObj(sMVOpeningRoomOutsideGObj);
	gcEjectGObj(sMVOpeningRoomOutsideHazeGObj);
	gcEjectGObj(sMVOpeningRoomBooksGObj);
	gcEjectGObj(sMVOpeningRoomPencilsGObj);
	gcEjectGObj(sMVOpeningRoomLampGObj);
	gcEjectGObj(sMVOpeningRoomTissuesGObj);
}

// 80133210
void mvOpeningRoomInitScene1Cameras(GObj *gobj)
{
	CObj *cobj = CObjGetStruct(gobj);

	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	cobj->projection.persp.near = 80.0F;
	cobj->projection.persp.far = 15000.0F;

	gcAddCObjCamAnimJoint(cobj, lbRelocGetFileData(AObjEvent32*, sMVOpeningRoomFiles[2], &llMVOpeningRoomScene1CamAnimJoint), 0.0F);
	gcAddGObjProcess(gobj, gcPlayCamAnim, nGCProcessKindFunc, 1);

	cobj->flags |= COBJ_FLAG_DLBUFFERS;
}

// 801332BC
void mvOpeningRoomMakeScene1Cameras()
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

// 801333DC
void mvOpeningRoomInitScene2Cameras(GObj *gobj)
{
	CObj *cobj = CObjGetStruct(gobj);

	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	gcAddCObjCamAnimJoint(cobj, lbRelocGetFileData(AObjEvent32*, sMVOpeningRoomFiles[3], &llMVOpeningRoomScene2CamAnimJoint), 0.0F);
	gcAddGObjProcess(gobj, gcPlayCamAnim, nGCProcessKindFunc, 1);

	cobj->flags |= COBJ_FLAG_DLBUFFERS;
}

// 80133470
void mvOpeningRoomMakeScene2Cameras()
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

// 80133590
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

	gcAddCObjCamAnimJoint(cobj, lbRelocGetFileData(AObjEvent32*, sMVOpeningRoomFiles[4], &llMVOpeningRoomScene3CamAnimJoint), 0.0F);
	gcAddGObjProcess(gobj, gcPlayCamAnim, nGCProcessKindFunc, 1);

	cobj->flags |= COBJ_FLAG_DLBUFFERS;
}

// 801336A8
void mvOpeningRoomMakeScene3Cameras()
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

// 801337C8
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

	gcAddCObjCamAnimJoint(cobj, lbRelocGetFileData(AObjEvent32*, sMVOpeningRoomFiles[5], &llMVOpeningRoomScene4CamAnimJoint), 0.0F);
	gcAddGObjProcess(gobj, gcPlayCamAnim, nGCProcessKindFunc, 1);
}

// 801338D4
void mvOpeningRoomMakeScene4Cameras()
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

// 801339CC
void mvOpeningRoomMakeWallpaperCamera()
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

// 80133A6C
void mvOpeningRoomMakeLogoCamera()
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
	gcAddCObjCamAnimJoint(cobj, lbRelocGetFileData(AObjEvent32*, sMVOpeningRoomFiles[2], &llMVOpeningRoomScene1CamAnimJoint), 0.0F);
	gcAddGObjProcess(gobj, gcPlayCamAnim, nGCProcessKindFunc, 1);
}

// 80133B58
void mvOpeningRoomTransitionOverlayProcDisplay(GObj *gobj)
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

// 80133CEC
void mvOpeningRoomTransitionOutlineProcDisplay(GObj *gobj)
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

// 80133EFC
void mvOpeningRoomMakeTransition()
{
	GObj *gobj;
	DObj *dobj;

	sMVOpeningTransitionOutlineGObj = gobj = gcMakeGObjSPAfter(0, NULL, 22, GOBJ_PRIORITY_DEFAULT);
	dobj = gcAddDObjForGObj(gobj, lbRelocGetFileData(void*, sMVOpeningRoomFiles[1], &llMVOpeningRoomTransitionOutlineDisplayList));
	gcAddXObjForDObjFixed(dobj, nGCMatrixKindTraRotRpyRSca, 0);
	gcAddGObjDisplay(gobj, mvOpeningRoomTransitionOutlineProcDisplay, 30, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddDObjAnimJoint(dobj, lbRelocGetFileData(AObjEvent32*, sMVOpeningRoomFiles[1], &llMVOpeningRoomTransitionOutlineAnimJoint), 0.0F);
	gcAddGObjProcess(gobj, gcPlayAnimAll, nGCProcessKindFunc, 1);
	gcPlayAnimAll(gobj);

	sMVOpeningTransitionOverlayGObj = gobj = gcMakeGObjSPAfter(0, NULL, 22, GOBJ_PRIORITY_DEFAULT);
	dobj = gcAddDObjForGObj(gobj, lbRelocGetFileData(void*, sMVOpeningRoomFiles[1], &llMVOpeningRoomTransitionOverlayDisplayList));
	gcAddXObjForDObjFixed(dobj, nGCMatrixKindTraRotRpyRSca, 0);
	gcAddGObjDisplay(gobj, mvOpeningRoomTransitionOverlayProcDisplay, 30, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddDObjAnimJoint(dobj, lbRelocGetFileData(AObjEvent32*, sMVOpeningRoomFiles[1], &llMVOpeningRoomTransitionOverlayAnimJoint), 0.0F);
	gcAddGObjProcess(gobj, gcPlayAnimAll, nGCProcessKindFunc, 1);
	gcPlayAnimAll(gobj);
}

// 8013407C
void mvOpeningRoomMakeTransitionCamera()
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

// 80134184
void mvOpeningRoomEjectCameraGObjs()
{
	gcEjectGObj(sMVOpeningRoomMainCameraGObj);
	gcEjectGObj(sMVOpeningRoomFighterCameraGObj);
}

// 801341B4
s32 mvOpeningRoomGetDroppedFighterKind()
{
	s32 fkinds[] =
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

	while (fkind = fkinds[syUtilsRandTimeUCharRange(ARRAY_COUNT(fkinds))], fkind == sMVOpeningRoomPulledFighterKind);

	return fkind;
}

// 80134270
s32 mvOpeningRoomGetPulledFighterKind()
{
	s32 fkinds[] =
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

	return fkinds[syUtilsRandTimeUCharRange(ARRAY_COUNT(fkinds))];
}

// 801342E4
void mvOpeningRoomInitVars()
{
	sMVOpeningRoomTotalTimeTics = 0;
	sMVOpeningRoomPulledFighterKind = mvOpeningRoomGetPulledFighterKind();
	sMVOpeningRoomDroppedFighterKind = mvOpeningRoomGetDroppedFighterKind();
}

// 80134318
sb32 mvOpeningRoomCheckSetFramebuffer(SYTaskGfx *arg)
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

	if ((void*)gSYSchedulerCurrentFramebuffer == gSYFramebufferSets[0])
	{
		i = 1;
	}
	else if ((void*)gSYSchedulerCurrentFramebuffer == gSYFramebufferSets[1])
	{
		i = 2;
	}
	else if ((void*)gSYSchedulerCurrentFramebuffer == gSYFramebufferSets[2])
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

// 80134400
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
			mvOpeningRoomMakePulledFighter(sMVOpeningRoomPulledFighterKind);
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
			scSubsysFighterSetStatus(sMVOpeningRoomPulledFighterGObj, nFTDemoStatusFigureDropped);

			DObjGetStruct(sMVOpeningRoomPulledFighterGObj)->rotate.vec.f.x = 0.0F;
			DObjGetStruct(sMVOpeningRoomPulledFighterGObj)->rotate.vec.f.y = 0.0F;
			DObjGetStruct(sMVOpeningRoomPulledFighterGObj)->rotate.vec.f.z = 0.0F;
		}
		if (sMVOpeningRoomTotalTimeTics == 450)
		{
			mvOpeningRoomMakeCloseUpOverlay();
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
			gcMoveGObjDL(sMVOpeningRoomPulledFighterGObj, 9, -1);
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

			mvOpeningRoomMakeTransitionCamera();
			mvOpeningRoomMakeTransition();
			mvOpeningRoomEjectRoomGObjs();
			mvOpeningRoomMakeDeskGround();
			mvOpeningRoomMakeWallpaper();
		}
		if (sMVOpeningRoomTotalTimeTics == I_SEC_TO_TICS(19))
		{
			mvOpeningRoomEjectCameraGObjs();
			mvOpeningRoomMakeCloseUpEffect();

			DObjGetStruct(sMVOpeningRoomPulledFighterGObj)->rotate.vec.f.x = 0.0F;
			DObjGetStruct(sMVOpeningRoomPulledFighterGObj)->rotate.vec.f.y = 0.0F;
			DObjGetStruct(sMVOpeningRoomPulledFighterGObj)->rotate.vec.f.z = 0.0F;

			scSubsysFighterSetStatus(sMVOpeningRoomPulledFighterGObj, nFTDemoStatusFigureStand);
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

// 80134788
void mvOpeningRoomFuncStart()
{
	s32 unused;
	LBRelocSetup rl_setup;

	syTaskmanSetFuncSwapBuffer(mvOpeningRoomCheckSetFramebuffer);

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&llRelocFileCount;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = sMVOpeningRoomStatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(sMVOpeningRoomStatusBuffer);
	rl_setup.force_status_buffer = sMVOpeningRoomForceStatusBuffer;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(sMVOpeningRoomForceStatusBuffer);

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesListed(dMVOpeningRoomFileIDs, sMVOpeningRoomFiles);
	gcMakeGObjSPAfter(0, mvOpeningRoomFuncRun, 0, GOBJ_PRIORITY_DEFAULT);
	sMVOpeningRoomCameraGObj = gcMakeDefaultCameraGObj(0, GOBJ_PRIORITY_DEFAULT, 100, COBJ_FLAG_FILLCOLOR | COBJ_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
	efParticleInitAll();
	mvOpeningRoomInitVars();
	efManagerInitEffects();
	ftManagerAllocFighter(FTDATA_FLAG_SUBMOTION, 3);
	ftManagerSetupFilesAllKind(sMVOpeningRoomPulledFighterKind);
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
	mvOpeningRoomMakeBackground();
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
	syAudioPlayBGM(0, nSYAudioBGMOpening);
	sySchedulerSetTicCount(0);

	gSCManagerUnkown0x800A50F0 = 0;
}

// 80134BD0
SYVideoSetup dMVOpeningRoomVideoSetup = SYVIDEO_SETUP_DEFAULT();

// 80134BEC
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
	0,                                  // Number of CObjs
	sizeof(CObj),                       // Camera size
	
	mvOpeningRoomFuncStart            	// Task start function
};

// 801349BC
void mvOpeningRoomStartScene()
{
	dMVOpeningRoomVideoSetup.zbuffer = SYVIDEO_ZBUFFER_START(320, 240, 0, 10, u16);
	syVideoInit(&dMVOpeningRoomVideoSetup);

	dMVOpeningRoomTaskmanSetup.scene_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl34_BSS_END);
	scManagerFuncUpdate(&dMVOpeningRoomTaskmanSetup);

	syTaskmanSetFuncSwapBuffer(NULL);
}
