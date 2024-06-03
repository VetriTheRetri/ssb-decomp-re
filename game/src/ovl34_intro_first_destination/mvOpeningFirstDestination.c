#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mvOpeningFirstDestination.h>

// ovl34 stuff
extern RldmFileId D_ovl34_80134A20[8];

Vec3f dMvOpeningFirstDestinationSpotlightPositions[12]; // 0x80134A70
Vec3f dMvOpeningFirstDestinationSpotlightScales[12]; // 0x80134B00
s32 dMvOpeningFirstDestinationFighterKinds[8]; // 0x80134B90
s32 dMvOpeningFirstDestinationFighterKindsDuplicate[8]; // 0x80134BB0
extern scUnkDataBounds D_ovl34_80134BD0;
extern scRuntimeInfo D_ovl34_80134BEC;

uintptr_t gMvOpeningFirstDestinationMasterHandAnimHeap; // 0x80134CD8
uintptr_t gMvOpeningFirstDestinationPluckedFighterAnimHeap; // 0x80134CDC
uintptr_t gMvOpeningFirstDestinationDroppedFighterAnimHeap; // 0x80134CE0
extern s32 gMvOpeningFirstDestinationFramesElapsed; // 0x80134CE4
extern GObj* gMvOpeningFirstDestinationMainCameraGObj; // 0x80134CE8
extern GObj* gMvOpeningFirstDestinationFighterCameraGObj; // 0x80134CEC
extern GObj* gMvOpeningFirstDestinationHALLogoCameraGObj; // 0x80134CF0
extern GObj* gMvOpeningFirstDestinationMasterHandGObj; // 0x80134CF4
extern GObj* gMvOpeningFirstDestinationPluckedFighterKind; // 0x80134CF8
extern GObj* gMvOpeningFirstDestinationDroppedFighterKind; // 0x80134CFC
extern GObj* gMvOpeningFirstDestinationHALLogoGObj; // 0x80134D00
extern GObj* gMvOpeningFirstDestinationPluckedFighterGObj; // 0x80134D04
extern GObj* gMvOpeningFirstDestinationDroppedFighterGObj; // 0x80134D08
extern GObj* gMvOpeningFirstDestinationRoomGObj; // 0x80134D0C
extern GObj* gMvOpeningFirstDestinationSunlightGObj; // 0x80134D10
extern GObj* gMvOpeningFirstDestinationDeskGObj; // 0x80134D14
extern GObj* gMvOpeningFirstDestinationOutsideGObj; // 0x80134D18
extern GObj* gMvOpeningFirstDestinationOutsideHazeGObj; // 0x80134D1C
extern GObj* gMvOpeningFirstDestinationBooksGObj; // 0x80134D20
extern GObj* gMvOpeningFirstDestinationPencilHolderGObj; // 0x80134D24
extern GObj* gMvOpeningFirstDestinationLampGObj; // 0x80134D28
extern GObj* gMvOpeningFirstDestinationTissueBoxGObj; // 0x80134D2C
extern GObj* gMvOpeningFirstDestinationMasterHandShadowGObj; // 0x80134D30

extern s32 gMvOpeningFirstDestinationOverlayAlpha; // 0x80134D38
extern GObj* gMvOpeningFirstDestinationOverlayGObj; // 0x80134D3C
extern GObj* gMvOpeningFirstDestinationSpotlightGObj; // 0x80134D40
extern GObj* gMvOpeningFirstDestinationBackgroundGObj; // 0x80134D44
extern GObj* gMvOpeningFirstDestinationTransitionGFXOutlineGObj; // 0x80134D48
extern GObj* gMvOpeningFirstDestinationTransitionGFXOverlayGObj; // 0x80134D4C
extern GObj* gMvOpeningFirstDestinationCameraGObj; // 0x80134D50
extern s32 gMvOpeningFirstDestinationUnusedCounter; // 0x80134D54
extern rdFileNode D_ovl34_80134D58[100];
extern rdFileNode D_ovl34_80135078[7];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern uintptr_t gMvOpeningFirstDestinationFilesArray[9]; // 0x801350B0[8]
// gMvOpeningFirstDestinationFilesArray[0] - D_ovl34_801350B0; // file 0x034 pointer
// gMvOpeningFirstDestinationFilesArray[1] - D_ovl34_801350B4; // file 0x03F pointer
// gMvOpeningFirstDestinationFilesArray[2] - D_ovl34_801350B8; // file 0x038 pointer
// gMvOpeningFirstDestinationFilesArray[3] - D_ovl34_801350BC; // file 0x039 pointer
// gMvOpeningFirstDestinationFilesArray[4] - D_ovl34_801350C0; // file 0x03A pointer
// gMvOpeningFirstDestinationFilesArray[5] - D_ovl34_801350C4; // file 0x03B pointer
// gMvOpeningFirstDestinationFilesArray[6] - D_ovl34_801350C8; // file 0x04B pointer - unused?
// gMvOpeningFirstDestinationFilesArray[7] - D_ovl34_801350CC; // file 0x05A pointer

// // Offsets
extern intptr_t FILE_034_ROOM_OFFSET_1 = 0x42F8; // file 0x034 offset for First Destination room
extern intptr_t FILE_034_ROOM_OFFSET_2 = 0x7E98; // file 0x034 offset for First Destination room
extern intptr_t FILE_034_ROOM_OFFSET_3 = 0x8788; // file 0x034 offset for First Destination room
extern intptr_t FILE_034_DESK_OBJECT_OFFSET = 0x8DF8; // file 0x034 offset for First Destination desk
extern intptr_t FILE_034_OUTSIDE_HAZE_OBJECT_OFFSET = 0x98F8; // file 0x034 offset for First Destination outside haze in window
extern intptr_t FILE_034_BOOKS_OBJECT_OFFSET_1 = 0xA6F8; // file 0x034 offset for First Destination books
extern intptr_t FILE_034_BOOKS_OBJECT_OFFSET_2 = 0xA7B0; // file 0x034 offset for First Destination books
extern intptr_t FILE_034_PENCIL_HOLDER_OBJECT_OFFSET_1 = 0xAEB8; // file 0x034 offset for First Destination pencil holder
extern intptr_t FILE_034_PENCIL_HOLDER_OBJECT_OFFSET_2 = 0xAF70; // file 0x034 offset for First Destination pencil holder
extern intptr_t FILE_034_LAMP_OBJECT_OFFSET_1 = 0xBDC0; // file 0x034 offset for First Destination lamp
extern intptr_t FILE_034_LAMP_OBJECT_OFFSET_2 = 0xBEA0; // file 0x034 offset for First Destination lamp
extern intptr_t FILE_034_TISSUE_BOX_OBJECT_OFFSET_1 = 0xC690; // file 0x034 offset for First Destination tissue box
extern intptr_t FILE_034_TISSUE_BOX_OBJECT_OFFSET_2 = 0xC884; // file 0x034 offset for First Destination tissue box
extern intptr_t FILE_034_HAL_LOGO_OFFSET_1 = 0x1BC60; // file 0x034 offset for First Destination HAL logo
extern intptr_t FILE_034_HAL_LOGO_OFFSET_2 = 0x1C4A8; // file 0x034 offset for First Destination HAL logo
extern intptr_t FILE_034_HAL_LOGO_OFFSET_3 = 0x1C52C; // file 0x034 offset for First Destination HAL logo
extern intptr_t FILE_034_SNAP_GFX_OBJECT_OFFSET_1 = 0x1CA68; // file 0x034 offset for First Destination snap gfx
extern intptr_t FILE_034_SNAP_GFX_OBJECT_OFFSET_2 = 0x1CAF0; // file 0x034 offset for First Destination snap gfx
extern intptr_t FILE_034_CLOSEUP_GFX_AIR_OFFSET_1 = 0x1DCA0; // file 0x034 offset for First Destination close-up gfx air
extern intptr_t FILE_034_CLOSEUP_GFX_AIR_OFFSET_2 = 0x1DF28; // file 0x034 offset for First Destination close-up gfx air
extern intptr_t FILE_034_CLOSEUP_GFX_AIR_OFFSET_3 = 0x1DFD8; // file 0x034 offset for First Destination close-up gfx air
extern intptr_t FILE_034_CLOSEUP_GFX_AIR_OFFSET_4 = 0x1E010; // file 0x034 offset for First Destination close-up gfx air
extern intptr_t FILE_034_CLOSEUP_GFX_GROUND_OFFSET_1 = 0x1F0F8; // file 0x034 offset for First Destination close-up gfx ground
extern intptr_t FILE_034_CLOSEUP_GFX_GROUND_OFFSET_2 = 0x1F270; // file 0x034 offset for First Destination close-up gfx ground
extern intptr_t FILE_034_CLOSEUP_GFX_GROUND_OFFSET_3 = 0x1F2F4; // file 0x034 offset for First Destination close-up gfx ground
extern intptr_t FILE_034_CLOSEUP_GFX_GROUND_OFFSET_4 = 0x1F330; // file 0x034 offset for First Destination close-up gfx ground
extern intptr_t FILE_034_MASTERHAND_SHADOW_OBJECT_OFFSET_1 = 0x1F790; // file 0x034 offset for First Destination Master Hand's shadow
extern intptr_t FILE_034_MASTERHAND_SHADOW_OBJECT_OFFSET_2 = 0x1F924; // file 0x034 offset for First Destination Master Hand's shadow
extern intptr_t FILE_034_DESK_STAGE_OFFSET_1 = 0x20480; // file 0x034 offset for First Destination HAL logo
extern intptr_t FILE_034_DESK_STAGE_OFFSET_2 = 0x22440; // file 0x034 offset for First Destination HAL logo
extern intptr_t FILE_034_DESK_STAGE_OFFSET_3 = 0x225CC; // file 0x034 offset for First Destination HAL logo
extern intptr_t FILE_034_SPOTLIGHT_OFFSET_1 = 0x22C90; // file 0x034 offset for First Destination HAL logo
extern intptr_t FILE_034_SPOTLIGHT_OFFSET_2 = 0x22E18; // file 0x034 offset for First Destination HAL logo
extern intptr_t FILE_034_SPOTLIGHT_OFFSET_3 = 0x22F10; // file 0x034 offset for First Destination HAL logo
extern intptr_t FILE_034_OUTSIDE_OBJECT_OFFSET = 0x24200; // file 0x034 offset for First Destination outside view through window
extern intptr_t FILE_034_SUNLIGHT_OBJECT_OFFSET = 0x24708; // file 0x034 offset for First Destination sunlight

extern intptr_t FILE_038_CAMERA_PARAMETERS_OFFSET = 0x0; // file 0x038 offset for camera parameters for scene 1

extern intptr_t FILE_039_CAMERA_PARAMETERS_OFFSET = 0x0; // file 0x039 offset for camera parameters for scene 2

extern intptr_t FILE_03A_CAMERA_PARAMETERS_OFFSET = 0x0; // file 0x03A offset for camera parameters for scene 3

extern intptr_t FILE_03B_CAMERA_PARAMETERS_OFFSET = 0x0; // file 0x03B offset for camera parameters for scene 4

extern intptr_t FILE_03F_TRANSITION_GFX_OVERLAY_OBJECT_OFFSET_1 = 0x5A0; // file 0x03F offset for First Destination transition gfx shaded overlay
extern intptr_t FILE_03F_TRANSITION_GFX_OVERLAY_OBJECT_OFFSET_2 = 0x714; // file 0x03F offset for First Destination transition gfx shaded overlay
extern intptr_t FILE_03F_TRANSITION_GFX_OUTLINE_OBJECT_OFFSET_1 = 0xF40; // file 0x03F offset for First Destination transition gfx red outline
extern intptr_t FILE_03F_TRANSITION_GFX_OUTLINE_OBJECT_OFFSET_2 = 0x11C4; // file 0x03F offset for First Destination transition gfx red outline

extern intptr_t FILE_05A_BACKGROUND_IMAGE_OFFSET = 0x26C88; // file 0x05A offset for background image footer

// 0x80131B00
void mvOpeningFirstDestinationSetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B58
void mvOpeningFirstDestinationFadeOutAndDestroyRoomGeo(GObj* room_gobj)
{
    if (gMvOpeningFirstDestinationFramesElapsed > I_SEC_TO_FRAMES(18))
    {
        func_8000DF34(room_gobj);
    }
    if (gMvOpeningFirstDestinationFramesElapsed == I_SEC_TO_FRAMES(19))
    {
        omEjectGObj(room_gobj);
    }
}

// 0x80131BA8
void mvOpeningFirstDestinationCreateRoomGeo()
{
    GObj* room_gobj;

    gMvOpeningFirstDestinationRoomGObj = room_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    func_8000F120(room_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_ROOM_OFFSET_2), 0);
    omAddGObjRenderProc(room_gobj, odRenderDObjTreeDLLinksForGObj, 6, 0x80000000, -1);
    func_8000F8F4(room_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_ROOM_OFFSET_1));
    func_8000BE28(room_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_ROOM_OFFSET_3), 0.0F);
    omAddGObjCommonProc(room_gobj, mvOpeningFirstDestinationFadeOutAndDestroyRoomGeo, 1, 1);
    func_8000DF34(room_gobj);
}

// 0x80131C84
void mvOpeningFirstDestinationCreateSunlight()
{
    GObj* sunlight_gobj;

    gMvOpeningFirstDestinationSunlightGObj = sunlight_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    omAddOMMtxForDObjFixed(omAddDObjForGObj(sunlight_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_SUNLIGHT_OBJECT_OFFSET)), 0x1C, 0);
    omAddGObjRenderProc(sunlight_gobj, odRenderDObjDLLinksForGObj, 6, 0x80000000, -1);
}

// 0x80131D08
void mvOpeningFirstDestinationCreateDesk()
{
    GObj* desk_gobj;

    gMvOpeningFirstDestinationDeskGObj = desk_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    func_8000F120(desk_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_DESK_OBJECT_OFFSET), 0);
    omAddGObjRenderProc(desk_gobj, odRenderDObjTreeForGObj, 6, 0x80000000, -1);
}

// 0x80131D80
void mvOpeningFirstDestinationCreateOutside()
{
    GObj* outside_gobj;

    gMvOpeningFirstDestinationOutsideGObj = outside_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    omAddOMMtxForDObjFixed(omAddDObjForGObj(outside_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_OUTSIDE_OBJECT_OFFSET)), 0x1C, 0);
    omAddGObjRenderProc(outside_gobj, odRenderDObjDLLinksForGObj, 6, 0x80000000, -1);
}

// 0x80131E04
void mvOpeningFirstDestinationCreateOutsideHaze()
{
    GObj* outside_haze_gobj;

    gMvOpeningFirstDestinationOutsideHazeGObj = outside_haze_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    omAddOMMtxForDObjFixed(omAddDObjForGObj(outside_haze_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_OUTSIDE_HAZE_OBJECT_OFFSET)), 0x1C, 0);
    omAddGObjRenderProc(outside_haze_gobj, odRenderDObjDLLinksForGObj, 6, 0x80000000, -1);
}

// 0x80131E88
void mvOpeningFirstDestinationAnimateDeskObjects(GObj* desk_object_gobj)
{
    if (gMvOpeningFirstDestinationFramesElapsed >= 560)
    {
        func_8000DF34(desk_object_gobj);
    }
}

// 0x80131EBC
void mvOpeningFirstDestinationCreateBooks()
{
    GObj* books_gobj;

    gMvOpeningFirstDestinationBooksGObj = books_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    func_8000F120(books_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_BOOKS_OBJECT_OFFSET_1), 0);
    omAddGObjRenderProc(books_gobj, odRenderDObjTreeForGObj, 6, 0x80000000, -1);
    omAddGObjCommonProc(books_gobj, mvOpeningFirstDestinationAnimateDeskObjects, 1, 1);
    func_8000BD8C(books_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_BOOKS_OBJECT_OFFSET_2), 0.0F);
    func_8000DF34(books_gobj);
}

// 0x80131F7C
void mvOpeningFirstDestinationCreatePencilHolder()
{
    GObj* pencil_holder_gobj;

    gMvOpeningFirstDestinationPencilHolderGObj = pencil_holder_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    func_8000F120(pencil_holder_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_PENCIL_HOLDER_OBJECT_OFFSET_1), 0);
    omAddGObjRenderProc(pencil_holder_gobj, odRenderDObjTreeForGObj, 6, 0x80000000, -1);
    func_8000BD8C(pencil_holder_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_PENCIL_HOLDER_OBJECT_OFFSET_2), 0.0F);
    omAddGObjCommonProc(pencil_holder_gobj, mvOpeningFirstDestinationAnimateDeskObjects, 1, 1);
    func_8000DF34(pencil_holder_gobj);
}

// 0x8013203C
void mvOpeningFirstDestinationCreateLamp()
{
    GObj* lamp_gobj;

    gMvOpeningFirstDestinationLampGObj = lamp_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    func_8000F120(lamp_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_LAMP_OBJECT_OFFSET_1), 0);
    omAddGObjRenderProc(lamp_gobj, odRenderDObjTreeForGObj, 6, 0x80000000, -1);
    func_8000BD8C(lamp_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_LAMP_OBJECT_OFFSET_2), 0.0F);
    omAddGObjCommonProc(lamp_gobj, mvOpeningFirstDestinationAnimateDeskObjects, 1, 1);
    func_8000DF34(lamp_gobj);
}

// 0x801320FC
void mvOpeningFirstDestinationAnimateTissueBox(GObj* tissue_box_gobj)
{
    if (gMvOpeningFirstDestinationFramesElapsed >= 560)
    {
        func_8000DF34(tissue_box_gobj);
    }
}

// 0x80132130
void mvOpeningFirstDestinationCreateTissueBox()
{
    GObj* tissue_box_gobj;
    DObj* tissue_box_dobj;

    gMvOpeningFirstDestinationTissueBoxGObj = tissue_box_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    tissue_box_dobj = omAddDObjForGObj(tissue_box_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_TISSUE_BOX_OBJECT_OFFSET_1));
    omAddOMMtxForDObjFixed(tissue_box_dobj, 0x1C, 0);
    omAddGObjRenderProc(tissue_box_gobj, odRenderDObjDLHead0, 6, 0x80000000, -1);
    omAddDObjAnimAll(tissue_box_dobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_TISSUE_BOX_OBJECT_OFFSET_2), 0);
    omAddGObjCommonProc(tissue_box_gobj, mvOpeningFirstDestinationAnimateTissueBox, 1, 1);
    func_8000DF34(tissue_box_gobj);
}

// 0x801321F8
void mvOpeningFirstDestinationCreateMasterHand()
{
    GObj* fighter_gobj;
    ftCreateDesc spawn_info = dFTDefaultFighterDesc;

    spawn_info.ft_kind = Ft_Kind_MasterHand;
    spawn_info.costume = ftCostume_GetIndexFFA(Ft_Kind_MasterHand, 0);
    spawn_info.pos.x = 0.0f;
    spawn_info.pos.y = 0.0f;
    spawn_info.pos.z = 0.0f;
    spawn_info.anim_heap = gMvOpeningFirstDestinationMasterHandAnimHeap;
    gMvOpeningFirstDestinationMasterHandGObj = fighter_gobj = ftManager_MakeFighter(&spawn_info);

    func_ovl1_803905CC(fighter_gobj, 0x1000F);
}

// 0x801322A0 - Unused?
void func_ovl34_801322A0(s32 arg0)
{
    func_ovl1_803905F4(gMvOpeningFirstDestinationMasterHandGObj, arg0);
}

// 0x801322C8 - Unused?
void func_ovl34_801322C8(GObj* fighter_gobj)
{
    ftStruct* fp;
    DObj* topJoint;
    DObj* firstJoint;

    fp = ftGetStruct(fighter_gobj);
    firstJoint = fp->joint[1];
    topJoint = fp->joint[0];
    topJoint->translate.vec.f.x = topJoint->translate.vec.f.x + (firstJoint->translate.vec.f.x - fp->anim_vel.x);
    topJoint->translate.vec.f.y = topJoint->translate.vec.f.y + (firstJoint->translate.vec.f.y - fp->anim_vel.y);
    topJoint->translate.vec.f.z = topJoint->translate.vec.f.z + (firstJoint->translate.vec.f.z - fp->anim_vel.z);
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

// 0x80132330
void mvOpeningFirstDestinationCreatePluckedFighter(s32 ft_kind)
{
    GObj* fighter_gobj;
    ftCreateDesc spawn_info = dFTDefaultFighterDesc;

    spawn_info.ft_kind = ft_kind;
    spawn_info.costume = ftCostume_GetIndexFFA(ft_kind, 0);
    spawn_info.pos.x = 0.0f;
    spawn_info.pos.y = 0.0f;
    spawn_info.pos.z = 0.0f;
    spawn_info.anim_heap = gMvOpeningFirstDestinationPluckedFighterAnimHeap;
    gMvOpeningFirstDestinationPluckedFighterGObj = fighter_gobj = ftManager_MakeFighter(&spawn_info);

    DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;

    func_ovl1_803905CC(fighter_gobj, 0x10008);

    omMoveGObjDL(fighter_gobj, 6, -1);
}

// 0x80132404
void mvOpeningFirstDestinationRenderHALLogoBackground(GObj* logo_gobj)
{
    if (gMvOpeningFirstDestinationFramesElapsed >= 60)
    {
        if (gMvOpeningFirstDestinationOverlayAlpha > 0)
        {
            gMvOpeningFirstDestinationOverlayAlpha -= 13;

            if (gMvOpeningFirstDestinationOverlayAlpha < 0)
            {
                gMvOpeningFirstDestinationOverlayAlpha = 0;
            }
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

// 0x80132544
void mvOpeningFirstDestinationCreateHALLogoBackground()
{
    GObj* logo_bg_gobj;

    gMvOpeningFirstDestinationOverlayAlpha = 0xFF;
    gMvOpeningFirstDestinationOverlayGObj = logo_bg_gobj = omMakeGObjSPAfter(0, 0, 0x12, 0x80000000);
    omAddGObjRenderProc(logo_bg_gobj, mvOpeningFirstDestinationRenderHALLogoBackground, 0x1A, 0x80000000, -1);
}

// 0x801325A4
void mvOpeningFirstDestinationCreateHALLogo()
{
    GObj* logo_gobj;

    gMvOpeningFirstDestinationHALLogoGObj = logo_gobj = omMakeGObjSPAfter(0, 0, 0x15, 0x80000000);
    func_8000F120(logo_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_HAL_LOGO_OFFSET_2), 0);
    omAddGObjRenderProc(logo_gobj, odRenderDObjTreeDLLinksForGObj, 0x1D, 0x80000000, -1);
    func_8000F8F4(logo_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_HAL_LOGO_OFFSET_1));
    func_8000BE28(logo_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_HAL_LOGO_OFFSET_3), 0.0F);
    omAddGObjCommonProc(logo_gobj, func_8000DF34, 1, 1);
    func_8000DF34(logo_gobj);
}

// 0x80132680
void mvOpeningFirstDestinationCreateSnapGFX()
{
    GObj* snap_gfx_gobj;

    snap_gfx_gobj = omMakeGObjSPAfter(0, 0, 0x13, 0x80000000);
    func_8000F120(snap_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_SNAP_GFX_OBJECT_OFFSET_1), 0);
    omAddGObjRenderProc(snap_gfx_gobj, odRenderDObjTreeDLLinksForGObj, 0x1B, 0x80000000, -1);
    func_8000BD8C(snap_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_SNAP_GFX_OBJECT_OFFSET_2), 0.0F);
    omAddGObjCommonProc(snap_gfx_gobj, func_8000DF34, 1, 1);
    func_8000DF34(snap_gfx_gobj);
}

// 0x80132738
void mvOpeningFirstDestinationCreateCloseUpGFX()
{
    GObj* closeup_gfx_gobj;

    // Close-up GFX air
    closeup_gfx_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    func_8000F120(closeup_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_CLOSEUP_GFX_AIR_OFFSET_2), 0);
    omAddGObjRenderProc(closeup_gfx_gobj, odRenderDObjTreeDLLinksForGObj, 6, 0x80000000, -1);
    DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.y = 0.0F;
    DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.z = 0.0F;
    func_8000F8F4(closeup_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_CLOSEUP_GFX_AIR_OFFSET_1));
    func_8000BE28(closeup_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_CLOSEUP_GFX_AIR_OFFSET_3), 0.0F);
    omAddGObjCommonProc(closeup_gfx_gobj, func_8000DF34, 1, 1);
    func_8000BD8C(closeup_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_CLOSEUP_GFX_AIR_OFFSET_4), 0.0F);
    func_8000DF34(closeup_gfx_gobj);

    // Close-up GFX ground
    closeup_gfx_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    func_8000F120(closeup_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_CLOSEUP_GFX_GROUND_OFFSET_2), 0);
    omAddGObjRenderProc(closeup_gfx_gobj, odRenderDObjTreeDLLinksForGObj, 6, 0x80000000, -1);
    DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.y = 0.0F;
    DObjGetStruct(closeup_gfx_gobj)->translate.vec.f.z = 0.0F;
    func_8000F8F4(closeup_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_CLOSEUP_GFX_GROUND_OFFSET_1));
    func_8000BE28(closeup_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_CLOSEUP_GFX_GROUND_OFFSET_3), 0.0F);
    omAddGObjCommonProc(closeup_gfx_gobj, func_8000DF34, 1, 1);
    func_8000BD8C(closeup_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_CLOSEUP_GFX_GROUND_OFFSET_4), 0.0F);
    func_8000DF34(closeup_gfx_gobj);
}

// 0x80132928
void mvOpeningFirstDestinationCreateDroppedFighter(s32 ft_kind)
{
    GObj* fighter_gobj;
    ftCreateDesc spawn_info = dFTDefaultFighterDesc;

    spawn_info.ft_kind = ft_kind;
    spawn_info.costume = ftCostume_GetIndexFFA(ft_kind, 0);
    spawn_info.anim_heap = gMvOpeningFirstDestinationDroppedFighterAnimHeap;
    spawn_info.pos.x = 872.325F;
    spawn_info.pos.y = 4038.86F;
    spawn_info.pos.z = -4734.6F;
    gMvOpeningFirstDestinationDroppedFighterGObj = fighter_gobj = ftManager_MakeFighter(&spawn_info);

    func_ovl1_803905CC(fighter_gobj, 0x10009);
    omMoveGObjDL(fighter_gobj, 6, -1);
}

// 0x801329F0
void mvOpeningFirstDestinationCreateMasterHandShadow()
{
    GObj* masterhand_shadow_gobj;
    DObj* masterhand_shadow_dobj;

    gMvOpeningFirstDestinationMasterHandShadowGObj = masterhand_shadow_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    masterhand_shadow_dobj = omAddDObjForGObj(masterhand_shadow_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_MASTERHAND_SHADOW_OBJECT_OFFSET_1));
    omAddOMMtxForDObjFixed(masterhand_shadow_dobj, 0x1C, 0);
    omAddGObjRenderProc(masterhand_shadow_gobj, odRenderDObjDLHead1, 9, 0x80000000, -1);
    omAddDObjAnimAll(masterhand_shadow_dobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_MASTERHAND_SHADOW_OBJECT_OFFSET_2), 0);
    omAddGObjCommonProc(masterhand_shadow_gobj,func_8000DF34, 1, 1);
}

// 0x80132AB0
void mvOpeningFirstDestinationAnimateDeskStage(GObj* desk_stage_gobj)
{
    if (gMvOpeningFirstDestinationFramesElapsed > 1060)
    {
        func_8000DF34(desk_stage_gobj);
    }
}

// 0x80132AE4
void mvOpeningFirstDestinationCreateDeskStage()
{
    GObj* desk_stage_gobj;

    desk_stage_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    func_8000F120(desk_stage_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_DESK_STAGE_OFFSET_2), 0);
    omAddGObjRenderProc(desk_stage_gobj, odRenderDObjTreeDLLinksForGObj, 6, 0x80000000, -1);
    func_8000F8F4(desk_stage_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_DESK_STAGE_OFFSET_1));
    func_8000BE28(desk_stage_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_DESK_STAGE_OFFSET_3), 0.0F);
    omAddGObjCommonProc(desk_stage_gobj, mvOpeningFirstDestinationAnimateDeskStage, 1, 1);
    func_8000DF34(desk_stage_gobj);
}

// 0x80132BB8
void mvOpeningFirstDestinationRenderCloseupOverlay(GObj* arg0)
{
    if (gMvOpeningFirstDestinationOverlayAlpha < 0xA0)
    {
        gMvOpeningFirstDestinationOverlayAlpha += 9;

        if (gMvOpeningFirstDestinationOverlayAlpha >= 0xA1)
        {
            gMvOpeningFirstDestinationOverlayAlpha = 0xA0;
        }
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

// 0x80132CEC
void mvOpeningFirstDestinationCreateCloseupOverlay()
{
    GObj* overlay_gobj;

    gMvOpeningFirstDestinationOverlayAlpha = 0;
    gMvOpeningFirstDestinationOverlayGObj = overlay_gobj = omMakeGObjSPAfter(0, 0, 0x12, 0x80000000);
    omAddGObjRenderProc(overlay_gobj, mvOpeningFirstDestinationRenderCloseupOverlay, 0x1A, 0x80000000, -1);
}

// 0x80132D48
void mvOpeningFirstDestinationCreateOverlayViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x3C, 0x04000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132DE8
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

// 0x80132F44
void mvOpeningFirstDestinationCreateBackground()
{
    GObj* bg_gobj;
    SObj* bg_sobj;

    gMvOpeningFirstDestinationBackgroundGObj = bg_gobj = omMakeGObjSPAfter(0, 0, 0x14, 0x80000000);
    omAddGObjRenderProc(bg_gobj, mvOpeningFirstDestinationRenderBackground, 0x1C, 0x80000000, -1);

    bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[7], &FILE_05A_BACKGROUND_IMAGE_OFFSET));
    bg_sobj->pos.x = 10.0f;
    bg_sobj->pos.y = 10.0f;
}

// 0x80132FCC
void mvOpeningFirstDestinationPositionSpotlight(GObj* spotlight_gobj, s32 ft_kind)
{
    Vec3f positions[12] = dMvOpeningFirstDestinationSpotlightPositions;
    Vec3f scales[12] = dMvOpeningFirstDestinationSpotlightScales;

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

    gMvOpeningFirstDestinationSpotlightGObj = spotlight_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    omAddOMMtxForDObjFixed(omAddDObjForGObj(spotlight_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_SPOTLIGHT_OFFSET_2)), 0x1C, 0);
    omAddGObjRenderProc(spotlight_gobj, odRenderDObjDLHead1, 0x1B, 0x80000000, -1);
    func_8000F8F4(spotlight_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_SPOTLIGHT_OFFSET_1));
    func_8000BE28(spotlight_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_SPOTLIGHT_OFFSET_3), 0.0F);
    omAddGObjCommonProc(spotlight_gobj, func_8000DF34, 1, 1);
    func_8000DF34(spotlight_gobj);
    mvOpeningFirstDestinationPositionSpotlight(spotlight_gobj, gMvOpeningFirstDestinationPluckedFighterKind);
}

// 0x801331B0
void mvOpeningFirstDestinationDestroyDeskObjects()
{
    omEjectGObj(gMvOpeningFirstDestinationOutsideGObj);
    omEjectGObj(gMvOpeningFirstDestinationOutsideHazeGObj);
    omEjectGObj(gMvOpeningFirstDestinationBooksGObj);
    omEjectGObj(gMvOpeningFirstDestinationPencilHolderGObj);
    omEjectGObj(gMvOpeningFirstDestinationLampGObj);
    omEjectGObj(gMvOpeningFirstDestinationTissueBoxGObj);
}

// 0x80133210
void mvOpeningFirstDestinationConfigureFirstSceneViewport(GObj* camera_gobj)
{
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    cam->projection.persp.near = 80.0F;
    cam->projection.persp.far = 15000.0F;
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[2], &FILE_038_CAMERA_PARAMETERS_OFFSET), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
    cam->flags |= 4;
}

// 0x801332BC
void mvOpeningFirstDestinationCreateFirstSceneViewports()
{
    GObj* camera_gobj;

    gMvOpeningFirstDestinationMainCameraGObj = camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x00000040, -1, 0, 1, 0, 1, 0);
    omAddOMMtxForCamera(CameraGetStruct(camera_gobj), 3, 0);
    omAddOMMtxForCamera(CameraGetStruct(camera_gobj), 0xE, 0);
    mvOpeningFirstDestinationConfigureFirstSceneViewport(camera_gobj);

    gMvOpeningFirstDestinationFighterCameraGObj = camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x28, 0x08000200, -1, 1, 1, 0, 1, 0);
    mvOpeningFirstDestinationConfigureFirstSceneViewport(camera_gobj);
}

// 0x801333DC
void mvOpeningFirstDestinationConfigureSecondSceneViewport(GObj* camera_gobj)
{
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[3], &FILE_039_CAMERA_PARAMETERS_OFFSET), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
    cam->flags |= 4;
}

// 0x80133470
void mvOpeningFirstDestinationCreateSecondSceneViewports()
{
    GObj* camera_gobj;

    gMvOpeningFirstDestinationMainCameraGObj = camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x00000040, -1, 0, 1, 0, 1, 0);
    omAddOMMtxForCamera(CameraGetStruct(camera_gobj), 3, 0);
    omAddOMMtxForCamera(CameraGetStruct(camera_gobj), 0x8, 0);
    mvOpeningFirstDestinationConfigureSecondSceneViewport(camera_gobj);

    gMvOpeningFirstDestinationFighterCameraGObj = camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x28, 0x08000200, -1, 1, 1, 0, 1, 0);
    mvOpeningFirstDestinationConfigureSecondSceneViewport(camera_gobj);
}

// 0x80133590
void mvOpeningFirstDestinationConfigureThirdSceneViewport(GObj* camera_gobj)
{
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    cam->vec.eye.x = 9.2993F;
    cam->vec.eye.y = 3880.39F;
    cam->vec.eye.z = 4077.98F;
    cam->vec.at.x = 0.991579F;
    cam->vec.at.y = 2995.68F;
    cam->vec.at.z = -388.953F;
    cam->vec.up.x = 0.0F;
    cam->vec.up.y = 1.0F;
    cam->vec.up.z = 0.0F;
    cam->projection.persp.fovy = 18.6072F;
    cam->projection.persp.near = 128.0F;
    cam->projection.persp.far = 16384.0F;
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[4], &FILE_03A_CAMERA_PARAMETERS_OFFSET), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
    cam->flags |= 4;
}

// 0x801336A8
void mvOpeningFirstDestinationCreateThirdSceneViewports()
{
    GObj* camera_gobj;
    GObj* camera_gobj_2;

    gMvOpeningFirstDestinationMainCameraGObj = camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x00000040, -1, 0, 1, 0, 1, 0);
    omAddOMMtxForCamera(CameraGetStruct(camera_gobj), 3, 0);
    omAddOMMtxForCamera(CameraGetStruct(camera_gobj), 0x8, 0);
    mvOpeningFirstDestinationConfigureThirdSceneViewport(camera_gobj);

    gMvOpeningFirstDestinationFighterCameraGObj = camera_gobj_2 = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x28, 0x08000200, -1, 1, 1, 0, 1, 0);
    mvOpeningFirstDestinationConfigureThirdSceneViewport(camera_gobj_2);
}

// 0x801337C8
void mvOpeningFirstDestinationConfigureFourthSceneViewport(GObj* camera_gobj)
{
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    cam->vec.eye.x = -1039.88F;
    cam->vec.eye.y = 3199.22F;
    cam->vec.eye.z = -1235.17F;
    cam->vec.at.x = -1162.41F;
    cam->vec.at.y = 2127.82F;
    cam->vec.at.z = -3853.07F;
    cam->vec.up.x = 0.0F;
    cam->vec.up.y = 1.0F;
    cam->vec.up.z = 0.0F;
    cam->projection.persp.fovy = 11.9823F;
    cam->projection.persp.near = 128.0F;
    cam->projection.persp.far = 16384.0F;
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[5], &FILE_03B_CAMERA_PARAMETERS_OFFSET), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
}

// 0x801338D4
void mvOpeningFirstDestinationCreateFourthSceneViewports()
{
    GObj* camera_gobj;
    GObj* camera_gobj_2;

    gMvOpeningFirstDestinationMainCameraGObj = camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x00000040, -1, 1, 1, 0, 1, 0);
    mvOpeningFirstDestinationConfigureFourthSceneViewport(camera_gobj);

    gMvOpeningFirstDestinationFighterCameraGObj = camera_gobj_2 = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x28, 0x00000200, -1, 1, 1, 0, 1, 0);
    mvOpeningFirstDestinationConfigureFourthSceneViewport(camera_gobj_2);
}

// 0x801339CC
void mvOpeningFirstDestinationCreateBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x5A, 0x10000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133A6C
void mvOpeningFirstDestinationCreateHALLogoViewport()
{
    GObj *camera_gobj;
    Camera *cam;

    gMvOpeningFirstDestinationHALLogoCameraGObj = camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x32, 0x20000000, -1, 1, 1, 0, 1, 0);
    cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[2], &FILE_038_CAMERA_PARAMETERS_OFFSET), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
}

// 0x80133B58
void mvOpeningFirstDestinationRenderTransitionGFXOverlay(GObj* gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetColorImage(gDisplayListHead[0]++, G_IM_FMT_RGBA, G_IM_SIZ_16b, gCurrScreenWidth, gZBuffer);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 255, 255, 255, 255);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, 1,  0, 0, 0, PRIMITIVE,  0, 0, 0, 1);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_PASS, G_RM_OPA_SURF2);
    odRenderDObjDLHead0(gobj);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetColorImage(gDisplayListHead[0]++, G_IM_FMT_RGBA, gPixelComponentSize, gCurrScreenWidth, (void*)0x0F000000);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80133CEC
void mvOpeningFirstDestinationRenderTransitionGFXOutline(GObj* gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetColorImage(gDisplayListHead[0]++, G_IM_FMT_RGBA, G_IM_SIZ_16b, gCurrScreenWidth, gZBuffer);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0, 0, 0, 255);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 0, 0, 320, 240);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetColorImage(gDisplayListHead[0]++, G_IM_FMT_RGBA, gPixelComponentSize, gCurrScreenWidth, (void*)0x0F000000);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, SHADE,  0, 0, 0, 1,  0, 0, 0, SHADE,  0, 0, 0, 1);
    odRenderDObjDLHead0(gobj);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80133EFC
void mvOpeningFirstDestinationCreateTransitionGFX()
{
    GObj* gfx_gobj;
    DObj* gfx_dobj;

    gMvOpeningFirstDestinationTransitionGFXOutlineGObj = gfx_gobj = omMakeGObjSPAfter(0, 0, 0x16, 0x80000000);
    gfx_dobj = omAddDObjForGObj(gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[1], &FILE_03F_TRANSITION_GFX_OUTLINE_OBJECT_OFFSET_1));
    omAddOMMtxForDObjFixed(gfx_dobj, 0x1C, 0);
    omAddGObjRenderProc(gfx_gobj, mvOpeningFirstDestinationRenderTransitionGFXOutline, 0x1E, 0x80000000, -1);
    omAddDObjAnimAll(gfx_dobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[1], &FILE_03F_TRANSITION_GFX_OUTLINE_OBJECT_OFFSET_2), 0);
    omAddGObjCommonProc(gfx_gobj, func_8000DF34, 1, 1);
    func_8000DF34(gfx_gobj);

    gMvOpeningFirstDestinationTransitionGFXOverlayGObj = gfx_gobj = omMakeGObjSPAfter(0, 0, 0x16, 0x80000000);
    gfx_dobj = omAddDObjForGObj(gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[1], &FILE_03F_TRANSITION_GFX_OVERLAY_OBJECT_OFFSET_1));
    omAddOMMtxForDObjFixed(gfx_dobj, 0x1C, 0);
    omAddGObjRenderProc(gfx_gobj, mvOpeningFirstDestinationRenderTransitionGFXOverlay, 0x1E, 0x80000000, -1);
    omAddDObjAnimAll(gfx_dobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[1], &FILE_03F_TRANSITION_GFX_OVERLAY_OBJECT_OFFSET_2), 0);
    omAddGObjCommonProc(gfx_gobj, func_8000DF34, 1, 1);
    func_8000DF34(gfx_gobj);
}

// 0x8013407C
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
    cam->projection.persp.fovy = 39.5612F;
    cam->projection.persp.near = 128.0F;
    cam->projection.persp.far = 16384.0F;
}

// 0x80134184
void mvOpeningFirstDestinationDestroyViewports()
{
    omEjectGObj(gMvOpeningFirstDestinationMainCameraGObj);
    omEjectGObj(gMvOpeningFirstDestinationFighterCameraGObj);
}

// 0x801341B4
s32 mvOpeningFirstDestinationGetDroppedFighterKind()
{
    s32 ft_kinds[8] = dMvOpeningFirstDestinationFighterKinds;
    s32 ft_kind;

    while (ft_kind = ft_kinds[lbRandom_GetTimeByteRange(ARRAY_COUNT(ft_kinds))], ft_kind == gMvOpeningFirstDestinationPluckedFighterKind);

    return ft_kind;
}

// 0x80134270
s32 mvOpeningFirstDestinationGetPluckedFighterKind()
{
    s32 ft_kinds[8] = dMvOpeningFirstDestinationFighterKindsDuplicate;

    return ft_kinds[lbRandom_GetTimeByteRange(8)];
}

// 0x801342E4
void mvOpeningFirstDestinationInitGlobals()
{
    gMvOpeningFirstDestinationFramesElapsed = 0;
    gMvOpeningFirstDestinationPluckedFighterKind = mvOpeningFirstDestinationGetPluckedFighterKind();
    gMvOpeningFirstDestinationDroppedFighterKind = mvOpeningFirstDestinationGetDroppedFighterKind();
}

// 0x80134318
sb32 mvOpeningFirstDestinationSetFrameBuffer(GObj* gobj)
{
    s32 i;
    s32 unused;
    viFrameBuf *nextFb, *currFb;

    if (D_80044F9C != NULL) { return TRUE; }

    nextFb = osViGetNextFramebuffer();
    currFb = osViGetCurrentFramebuffer();

    if ((uintptr_t)D_80044FA8 == (uintptr_t)&D_NF_80392A00[0])
    {
        i = 1;
    }
    else if ((uintptr_t)D_80044FA8 == (uintptr_t)&D_NF_80392A00[1])
    {
        i = 2;
    }
    else if ((uintptr_t)D_80044FA8 == (uintptr_t)&D_NF_80392A00[2])
    {
        i = 0;
    }
    else i =0;

    if ((currFb != &D_NF_80392A00[i]) && (nextFb != &D_NF_80392A00[i]))
    {
        D_80044F9C = &D_NF_80392A00[i];
        D_80044FAC = osGetCount();
        return TRUE;
    }
    else return FALSE;
}

// 0x80134400
void mvOpeningFirstDestinationMainProc(GObj* arg0)
{
    gMvOpeningFirstDestinationFramesElapsed += 1;

    if (gMvOpeningFirstDestinationFramesElapsed >= 10)
    {
        if (gMvOpeningFirstDestinationUnusedCounter != 0)
        {
            gMvOpeningFirstDestinationUnusedCounter -= 1;
        }

        if ((func_ovl1_80390A04(-15, 15) != 0) && (func_ovl1_80390AC0(-15, 15) != 0))
        {
            gMvOpeningFirstDestinationUnusedCounter = 0;
        }

        if (func_ovl1_8039076C(A_BUTTON | B_BUTTON | START_BUTTON) != 0)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 1;
            func_80005C74();
        }

        if (gMvOpeningFirstDestinationFramesElapsed == 280)
        {
            mvOpeningFirstDestinationCreatePluckedFighter(gMvOpeningFirstDestinationPluckedFighterKind);
            mvOpeningFirstDestinationCreatePencilHolder();
            omEjectGObj(gMvOpeningFirstDestinationHALLogoGObj);
            omEjectGObj(gMvOpeningFirstDestinationOverlayGObj);
            omEjectGObj(gMvOpeningFirstDestinationMasterHandShadowGObj);
        }
        if (gMvOpeningFirstDestinationFramesElapsed == 695)
        {
            mvOpeningFirstDestinationCreateDroppedFighter(gMvOpeningFirstDestinationDroppedFighterKind);
        }
        if (gMvOpeningFirstDestinationFramesElapsed == 380)
        {
            func_ovl1_803905CC(gMvOpeningFirstDestinationPluckedFighterGObj, 0x10009);
            DObjGetStruct(gMvOpeningFirstDestinationPluckedFighterGObj)->rotate.vec.f.x = 0.0F;
            DObjGetStruct(gMvOpeningFirstDestinationPluckedFighterGObj)->rotate.vec.f.y = 0.0F;
            DObjGetStruct(gMvOpeningFirstDestinationPluckedFighterGObj)->rotate.vec.f.z = 0.0F;
        }
        if (gMvOpeningFirstDestinationFramesElapsed == 450)
        {
            mvOpeningFirstDestinationCreateCloseupOverlay();
            omEjectGObj(gMvOpeningFirstDestinationSunlightGObj);
        }
        if (gMvOpeningFirstDestinationFramesElapsed == 560)
        {
            mvOpeningFirstDestinationDestroyViewports();
            mvOpeningFirstDestinationCreateSecondSceneViewports();
            func_ovl1_803905CC(gMvOpeningFirstDestinationMasterHandGObj, 0x10010);
        }
        if (gMvOpeningFirstDestinationFramesElapsed == 500)
        {
            omMoveGObjDL(gMvOpeningFirstDestinationPluckedFighterGObj, 9, -1);
            mvOpeningFirstDestinationCreateSpotlight();
        }
        if (gMvOpeningFirstDestinationFramesElapsed == 860)
        {
            mvOpeningFirstDestinationDestroyViewports();
            mvOpeningFirstDestinationCreateThirdSceneViewports();
            func_ovl1_803905CC(gMvOpeningFirstDestinationMasterHandGObj, 0x10011);
            mvOpeningFirstDestinationCreateSnapGFX();
        }
        if (gMvOpeningFirstDestinationFramesElapsed == 1037)
        {
            CameraGetStruct(gMvOpeningFirstDestinationCameraGObj)->flags &= ~2;
        }
        if (gMvOpeningFirstDestinationFramesElapsed == 1040)
        {
            omEjectGObj(gMvOpeningFirstDestinationOverlayGObj);
            omEjectGObj(gMvOpeningFirstDestinationSpotlightGObj);
            omEjectGObj(gMvOpeningFirstDestinationMasterHandGObj);
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
            func_ovl1_803905CC(gMvOpeningFirstDestinationPluckedFighterGObj, 0x1000A);
            mvOpeningFirstDestinationCreateFourthSceneViewports();
        }
        if (gMvOpeningFirstDestinationFramesElapsed == I_SEC_TO_FRAMES(18))
        {
            omEjectGObj(gMvOpeningFirstDestinationTransitionGFXOverlayGObj);
            omEjectGObj(gMvOpeningFirstDestinationTransitionGFXOutlineGObj);
        }
        if (gMvOpeningFirstDestinationFramesElapsed == I_SEC_TO_FRAMES(22))
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 0x1D;
            func_80005C74();
        }
    }
}

// 0x80134788
void mvOpeningFirstDestinationInit()
{
    s32 foo;
    rdSetup rldmSetup;

    func_800048D0(mvOpeningFirstDestinationSetFrameBuffer);

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl34_80134D58;
    rldmSetup.statusBufSize = ARRAY_COUNT(D_ovl34_80134D58);
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl34_80135078;
    rldmSetup.forceBufSize = ARRAY_COUNT(D_ovl34_80135078);
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl34_80134A20, ARRAY_COUNT(D_ovl34_80134A20), gMvOpeningFirstDestinationFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl34_80134A20, ARRAY_COUNT(D_ovl34_80134A20)), 0x10));

    omMakeGObjSPAfter(0, mvOpeningFirstDestinationMainProc, 0, 0x80000000);
    gMvOpeningFirstDestinationCameraGObj = func_8000B9FC(0, 0x80000000, 0x64, 3, 0xFF);
    func_ovl2_80115890();
    mvOpeningFirstDestinationInitGlobals();
    efManager_AllocUserData();
    ftManager_AllocFighterData(1, 3);
    ftManager_SetFileDataKind(gMvOpeningFirstDestinationPluckedFighterKind);
    ftManager_SetFileDataKind(gMvOpeningFirstDestinationDroppedFighterKind);
    ftManager_SetFileDataKind(Ft_Kind_MasterHand);
    gMvOpeningFirstDestinationMasterHandAnimHeap = gsMemoryAlloc(gFTAnimHeapSize, 0x10);
    gMvOpeningFirstDestinationPluckedFighterAnimHeap = gsMemoryAlloc(gFTAnimHeapSize, 0x10);
    gMvOpeningFirstDestinationDroppedFighterAnimHeap = gsMemoryAlloc(gFTAnimHeapSize, 0x10);
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
    func_ovl1_803904E0(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);
    func_800266A0();
    func_80020AB4(0, 0x21);
    func_80000920(0);
    D_800A50F0 = 0;
}

// intro_firstscene_entry
void intro_firstscene_entry()
{
    D_ovl34_80134BD0.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl34_80134BD0);
    D_ovl34_80134BEC.arena_size = (u32) ((uintptr_t)&lOverlay34ArenaHi - (uintptr_t)&lOverlay34ArenaLo);
    func_800A2698(&D_ovl34_80134BEC);
    func_800048D0(0);
}
