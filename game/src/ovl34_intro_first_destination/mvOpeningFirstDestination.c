#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mvOpeningFirstDestination.h>

// ovl34 stuff
extern RldmFileId D_ovl34_80134A20[8];

extern scUnkDataBounds D_ovl34_80134BD0;
extern scRuntimeInfo D_ovl34_80134BEC;

uintptr_t gMvOpeningFirstDestinationMasterHandAnimHeap; // 0x80134CD8
uintptr_t gMvOpeningFirstDestinationPluckedFighterAnimHeap; // 0x80134CDC

extern s32 gMvOpeningFirstDestinationFramesElapsed; // 0x80134CE4

extern GObj* gMvOpeningFirstDestinationMasterHandGObj; // 0x80134CF4

extern GObj* gMvOpeningFirstDestinationHALLogoGObj; // 0x80134D00
extern GObj* gMvOpeningFirstDestinationPluckedFighterGObj; // 0x80134D04

extern GObj* gMvOpeningFirstDestinationRoomGObj; // 0x80134D0C
extern GObj* gMvOpeningFirstDestinationSunlightGObj; // 0x80134D10
extern GObj* gMvOpeningFirstDestinationDeskGObj; // 0x80134D14
extern GObj* gMvOpeningFirstDestinationOutsideGObj; // 0x80134D18
extern GObj* gMvOpeningFirstDestinationOutsideHazeGObj; // 0x80134D1C
extern GObj* gMvOpeningFirstDestinationBooksGObj; // 0x80134D20
extern GObj* gMvOpeningFirstDestinationPencilHolderGObj; // 0x80134D24
extern GObj* gMvOpeningFirstDestinationLampGObj; // 0x80134D28
extern GObj* gMvOpeningFirstDestinationTissueBoxGObj; // 0x80134D2C

extern s32 gMvOpeningFirstDestinationHALLogoBackgroundAlpha; // 0x80134D38
extern GObj* gMvOpeningFirstDestinationHALLogoBackgroundGObj; // 0x80134D3C

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
extern intptr_t FILE_034_SUNLIGHT_OBJECT_OFFSET = 0x24708; // file 0x034 offset for First Destination sunlight
extern intptr_t FILE_034_ROOM_OFFSET_1 = 0x42F8; // file 0x034 offset for First Destination room
extern intptr_t FILE_034_ROOM_OFFSET_2 = 0x7E98; // file 0x034 offset for First Destination room
extern intptr_t FILE_034_ROOM_OFFSET_3 = 0x8788; // file 0x034 offset for First Destination room
extern intptr_t FILE_034_DESK_OBJECT_OFFSET = 0x8DF8; // file 0x034 offset for First Destination desk
extern intptr_t FILE_034_OUTSIDE_OBJECT_OFFSET = 0x24200; // file 0x034 offset for First Destination outside view through window
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
// extern intptr_t FILE_034_CAMERA_PARAMETERS_OFFSET = 0x8910; // file 0x044 offset for camera parameters

// extern intptr_t FILE_046_BACKGROUND_IMAGE_OFFSET = 0xB500; // file 0x046 offset for background image footer

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
        omEjectGObjCommon(room_gobj);
    }
}

// 0x80131BA8
void mvOpeningFirstDestinationCreateRoomGeo()
{
    GObj* room_gobj;

    gMvOpeningFirstDestinationRoomGObj = room_gobj = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
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

    gMvOpeningFirstDestinationSunlightGObj = sunlight_gobj = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
    omAddOMMtxForDObjFixed(omAddDObjForGObj(sunlight_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_SUNLIGHT_OBJECT_OFFSET)), 0x1C, 0);
    omAddGObjRenderProc(sunlight_gobj, odRenderDObjDLLinksForGObj, 6, 0x80000000, -1);
}

// 0x80131D08
void mvOpeningFirstDestinationCreateDesk()
{
    GObj* desk_gobj;

    gMvOpeningFirstDestinationDeskGObj = desk_gobj = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
    func_8000F120(desk_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_DESK_OBJECT_OFFSET), 0);
    omAddGObjRenderProc(desk_gobj, odRenderDObjTreeForGObj, 6, 0x80000000, -1);
}

// 0x80131D80
void mvOpeningFirstDestinationCreateOutside()
{
    GObj* outside_gobj;

    gMvOpeningFirstDestinationOutsideGObj = outside_gobj = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
    omAddOMMtxForDObjFixed(omAddDObjForGObj(outside_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_OUTSIDE_OBJECT_OFFSET)), 0x1C, 0);
    omAddGObjRenderProc(outside_gobj, odRenderDObjDLLinksForGObj, 6, 0x80000000, -1);
}

// 0x80131E04
void mvOpeningFirstDestinationCreateOutsideHaze()
{
    GObj* outside_haze_gobj;

    gMvOpeningFirstDestinationOutsideHazeGObj = outside_haze_gobj = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
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

    gMvOpeningFirstDestinationBooksGObj = books_gobj = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
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

    gMvOpeningFirstDestinationPencilHolderGObj = pencil_holder_gobj = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
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

    gMvOpeningFirstDestinationLampGObj = lamp_gobj = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
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

    gMvOpeningFirstDestinationTissueBoxGObj = tissue_box_gobj = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
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
void mvOpeningFirstDestinationFadeHALLogoBackground(GObj* arg0)
{
    if (gMvOpeningFirstDestinationFramesElapsed >= 60)
    {
        if (gMvOpeningFirstDestinationHALLogoBackgroundAlpha > 0)
        {
            gMvOpeningFirstDestinationHALLogoBackgroundAlpha -= 13;

            if (gMvOpeningFirstDestinationHALLogoBackgroundAlpha < 0)
            {
                gMvOpeningFirstDestinationHALLogoBackgroundAlpha = 0;
            }
        }
    }

    gDPPipeSync(gDisplayListHead[1]++);
    gDPSetCycleType(gDisplayListHead[1]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[1]++, 0, 0, 0, 0, 0, gMvOpeningFirstDestinationHALLogoBackgroundAlpha);
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

    gMvOpeningFirstDestinationHALLogoBackgroundAlpha = 0xFF;
    gMvOpeningFirstDestinationHALLogoBackgroundGObj = logo_bg_gobj = omMakeGObjCommon(0, 0, 0x12, 0x80000000);
    omAddGObjRenderProc(logo_bg_gobj, mvOpeningFirstDestinationFadeHALLogoBackground, 0x1A, 0x80000000, -1);
}

// 0x801325A4
void mvOpeningFirstDestinationCreateHALLogo()
{
    GObj* logo_gobj;

    gMvOpeningFirstDestinationHALLogoGObj = logo_gobj = omMakeGObjCommon(0, 0, 0x15, 0x80000000);
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

    snap_gfx_gobj = omMakeGObjCommon(0, 0, 0x13, 0x80000000);
    func_8000F120(snap_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_SNAP_GFX_OBJECT_OFFSET_1), 0);
    omAddGObjRenderProc(snap_gfx_gobj, &odRenderDObjTreeDLLinksForGObj, 0x1B, 0x80000000, -1);
    func_8000BD8C(snap_gfx_gobj, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &FILE_034_SNAP_GFX_OBJECT_OFFSET_2), 0.0F);
    omAddGObjCommonProc(snap_gfx_gobj, func_8000DF34, 1, 1);
    func_8000DF34(snap_gfx_gobj);
}

// 0x80132738
void func_ovl34_80132738()
{
    GObj* temp_v0;

    temp_v0 = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
    func_8000F120(temp_v0, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &D_NF_0001DF28), 0);
    omAddGObjRenderProc(temp_v0, odRenderDObjTreeDLLinksForGObj, 6, 0x80000000, -1);
    DObjGetStruct(temp_v0)->translate.vec.f.x = 0.0F;
    DObjGetStruct(temp_v0)->translate.vec.f.y = 0.0F;
    DObjGetStruct(temp_v0)->translate.vec.f.z = 0.0F;
    func_8000F8F4(temp_v0, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &D_NF_0001DCA0));
    func_8000BE28(temp_v0, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &D_NF_0001DFD8), 0.0F);
    omAddGObjCommonProc(temp_v0, func_8000DF34, 1, 1);
    func_8000BD8C(temp_v0, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &D_NF_0001E010), 0.0F);
    func_8000DF34(temp_v0);

    temp_v0 = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
    func_8000F120(temp_v0, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &D_NF_0001F270), 0);
    omAddGObjRenderProc(temp_v0, odRenderDObjTreeDLLinksForGObj, 6, 0x80000000, -1);
    DObjGetStruct(temp_v0)->translate.vec.f.x = 0.0F;
    DObjGetStruct(temp_v0)->translate.vec.f.y = 0.0F;
    DObjGetStruct(temp_v0)->translate.vec.f.z = 0.0F;
    func_8000F8F4(temp_v0, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &D_NF_0001F0F8));
    func_8000BE28(temp_v0, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &D_NF_0001F2F4), 0.0F);
    omAddGObjCommonProc(temp_v0, func_8000DF34, 1, 1);
    func_8000BD8C(temp_v0, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &D_NF_0001F330), 0.0F);
    func_8000DF34(temp_v0);
}

// 0x80132928
void func_ovl34_80132928(s32 ft_kind)
{
    GObj* fighter_gobj;
    ftCreateDesc spawn_info = dFTDefaultFighterDesc;

    spawn_info.ft_kind = ft_kind;
    spawn_info.costume = ftCostume_GetIndexFFA(ft_kind, 0);
    spawn_info.anim_heap = D_ovl34_80134CE0;
    spawn_info.pos.x = 872.325F;
    spawn_info.pos.y = 4038.86F;
    spawn_info.pos.z = -4734.6F;
    D_ovl34_80134D08 = fighter_gobj = ftManager_MakeFighter(&spawn_info);

    func_ovl1_803905CC(fighter_gobj, 0x10009);
    omMoveGObjDL(fighter_gobj, 6, -1);
}

// 0x801329F0
void func_ovl34_801329F0()
{
    GObj* temp_v0;
    DObj* temp_v0_2;

    D_ovl34_80134D30 = temp_v0 = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
    temp_v0_2 = omAddDObjForGObj(temp_v0, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &D_NF_0001F790));
    omAddOMMtxForDObjFixed(temp_v0_2, 0x1C, 0);
    omAddGObjRenderProc(temp_v0, &odRenderDObjDLHead1, 9, 0x80000000, -1);
    omAddDObjAnimAll(temp_v0_2, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &D_NF_0001F924), 0);
    omAddGObjCommonProc(temp_v0, &func_8000DF34, 1, 1);
}

// 0x80132AB0
void func_ovl34_80132AB0(GObj* arg0)
{
    if (gMvOpeningFirstDestinationFramesElapsed > 1060)
    {
        func_8000DF34(arg0);
    }
}

// 0x80132AE4
void func_ovl34_80132AE4()
{
    GObj* temp_v0;

    temp_v0 = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
    func_8000F120(temp_v0, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &D_NF_00022440), 0);
    omAddGObjRenderProc(temp_v0, &odRenderDObjTreeDLLinksForGObj, 6, 0x80000000, -1);
    func_8000F8F4(temp_v0, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &D_NF_00020480));
    func_8000BE28(temp_v0, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &D_NF_000225CC), 0.0F);
    omAddGObjCommonProc(temp_v0, &func_ovl34_80132AB0, 1, 1);
    func_8000DF34(temp_v0);
}

// 0x80132BB8
void func_ovl34_80132BB8(GObj* arg0)
{
    if (gMvOpeningFirstDestinationHALLogoBackgroundAlpha < 0xA0)
    {
        gMvOpeningFirstDestinationHALLogoBackgroundAlpha += 9;

        if (gMvOpeningFirstDestinationHALLogoBackgroundAlpha >= 0xA1)
        {
            gMvOpeningFirstDestinationHALLogoBackgroundAlpha = 0xA0;
        }
    }

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0, 0, 0, gMvOpeningFirstDestinationHALLogoBackgroundAlpha);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80132CEC
void func_ovl34_80132CEC()
{
    GObj* temp_v0;

    gMvOpeningFirstDestinationHALLogoBackgroundAlpha = 0;
    gMvOpeningFirstDestinationHALLogoBackgroundGObj = temp_v0 = omMakeGObjCommon(0, 0, 0x12, 0x80000000);
    omAddGObjRenderProc(temp_v0, &func_ovl34_80132BB8, 0x1A, 0x80000000, -1);
}

// 0x80132D48
void func_ovl34_80132D48()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x3C, 0x04000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132DE8
void func_ovl34_80132DE8(GObj* gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimDepth(gDisplayListHead[0]++, 36863.0F, 1);
    gDPSetDepthSource(gDisplayListHead[0]++, G_ZS_PRIM);
    gDPSetRenderMode(gDisplayListHead[0]++, AA_EN | Z_CMP | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM), AA_EN | Z_CMP | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM));
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, TEXEL0,  0, 0, 0, TEXEL0,  0, 0, 0, TEXEL0,  0, 0, 0, TEXEL0);

    func_ovl0_800CCF74(gobj);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetDepthSource(gDisplayListHead[0]++, G_ZS_PIXEL);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80132F44
void func_ovl34_80132F44()
{
    GObj* temp_v0;
    SObj* temp_v0_2;

    D_ovl34_80134D44 = temp_v0 = omMakeGObjCommon(0, 0, 0x14, 0x80000000);
    omAddGObjRenderProc(temp_v0, func_ovl34_80132DE8, 0x1C, 0x80000000, -1);

    temp_v0_2 = gcAppendSObjWithSprite(temp_v0, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[7], &D_NF_00026C88));
    temp_v0_2->pos.x = 10.0f;
    temp_v0_2->pos.y = 10.0f;
}

// 0x80132FCC
void func_ovl34_80132FCC(GObj* fighter_gobj, s32 ft_kind)
{
    Vec3f positions[12] = D_ovl34_80134A70;
    Vec3f scales[12] = D_ovl34_80134B00;

    DObjGetStruct(fighter_gobj)->translate.vec.f.x = positions[ft_kind].x * 30.0F;
    DObjGetStruct(fighter_gobj)->translate.vec.f.y = positions[ft_kind].y * 30.0F;
    DObjGetStruct(fighter_gobj)->translate.vec.f.z = positions[ft_kind].z * 30.0F;
    DObjGetStruct(fighter_gobj)->scale.vec.f.x = scales[ft_kind].x;
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = scales[ft_kind].y;
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = scales[ft_kind].z;
}

// 0x801330B8
void func_ovl34_801330B8()
{
    GObj* temp_v0;

    D_ovl34_80134D40 = temp_v0 = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
    omAddOMMtxForDObjFixed(omAddDObjForGObj(temp_v0, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &D_NF_00022E18)), 0x1C, 0);
    omAddGObjRenderProc(temp_v0, odRenderDObjDLHead1, 0x1B, 0x80000000, -1);
    func_8000F8F4(temp_v0, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &D_NF_00022C90));
    func_8000BE28(temp_v0, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[0], &D_NF_00022F10), 0.0F);
    omAddGObjCommonProc(temp_v0, func_8000DF34, 1, 1);
    func_8000DF34(temp_v0);
    func_ovl34_80132FCC(temp_v0, D_ovl34_80134CF8);
}

// 0x801331B0
void func_ovl34_801331B0()
{
    omEjectGObjCommon(gMvOpeningFirstDestinationOutsideGObj);
    omEjectGObjCommon(gMvOpeningFirstDestinationOutsideHazeGObj);
    omEjectGObjCommon(gMvOpeningFirstDestinationBooksGObj);
    omEjectGObjCommon(gMvOpeningFirstDestinationPencilHolderGObj);
    omEjectGObjCommon(gMvOpeningFirstDestinationLampGObj);
    omEjectGObjCommon(gMvOpeningFirstDestinationTissueBoxGObj);
}

// 0x80133210
void func_ovl34_80133210(GObj* camera_gobj)
{
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    cam->projection.persp.near = 80.0F;
    cam->projection.persp.far = 15000.0F;
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[2], &D_NF_00000000), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
    cam->flags |= 4;
}

// 0x801332BC
void func_ovl34_801332BC()
{
    GObj* camera_gobj;

    D_ovl34_80134CE8 = camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x00000040, -1, 0, 1, 0, 1, 0);
    omAddOMMtxForCamera(CameraGetStruct(camera_gobj), 3, 0);
    omAddOMMtxForCamera(CameraGetStruct(camera_gobj), 0xE, 0);
    func_ovl34_80133210(camera_gobj);

    D_ovl34_80134CEC = camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x28, 0x08000200, -1, 1, 1, 0, 1, 0);
    func_ovl34_80133210(camera_gobj);
}

// 0x801333DC
void func_ovl34_801333DC(GObj* camera_gobj)
{
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[3], &D_NF_00000000), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
    cam->flags |= 4;
}

// 0x80133470
void func_ovl34_80133470()
{
    GObj* camera_gobj;

    D_ovl34_80134CE8 = camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x00000040, -1, 0, 1, 0, 1, 0);
    omAddOMMtxForCamera(CameraGetStruct(camera_gobj), 3, 0);
    omAddOMMtxForCamera(CameraGetStruct(camera_gobj), 0x8, 0);
    func_ovl34_801333DC(camera_gobj);

    D_ovl34_80134CEC = camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x28, 0x08000200, -1, 1, 1, 0, 1, 0);
    func_ovl34_801333DC(camera_gobj);
}

// 0x80133590
void func_ovl34_80133590(GObj* camera_gobj)
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
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[4], &D_NF_00000000), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
    cam->flags |= 4;
}

// 0x801336A8
void func_ovl34_801336A8()
{
    GObj* camera_gobj;
    GObj* camera_gobj_2;

    D_ovl34_80134CE8 = camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x00000040, -1, 0, 1, 0, 1, 0);
    omAddOMMtxForCamera(CameraGetStruct(camera_gobj), 3, 0);
    omAddOMMtxForCamera(CameraGetStruct(camera_gobj), 0x8, 0);
    func_ovl34_80133590(camera_gobj);

    D_ovl34_80134CEC = camera_gobj_2 = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x28, 0x08000200, -1, 1, 1, 0, 1, 0);
    func_ovl34_80133590(camera_gobj_2);
}

// 0x801337C8
void func_ovl34_801337C8(GObj* camera_gobj)
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
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[5], &D_NF_00000000), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
}

// 0x801338D4
void func_ovl34_801338D4()
{
    GObj* camera_gobj;
    GObj* camera_gobj_2;

    D_ovl34_80134CE8 = camera_gobj = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x50, 0x00000040, -1, 1, 1, 0, 1, 0);
    func_ovl34_801337C8(camera_gobj);

    D_ovl34_80134CEC = camera_gobj_2 = func_8000B93C(0x401, 0, 0x10, 0x80000000, func_80017EC0, 0x28, 0x00000200, -1, 1, 1, 0, 1, 0);
    func_ovl34_801337C8(camera_gobj_2);
}

// 0x801339CC
void func_ovl34_801339CC()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x5A, 0x10000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133A6C
void func_ovl34_80133A6C()
{
    GObj *camera_gobj;
    Camera *cam;

    D_ovl34_80134CF0 = camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x32, 0x20000000, -1, 1, 1, 0, 1, 0);
    cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[2], &D_NF_00000000), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
}

// 0x80133B58
void func_ovl34_80133B58(GObj* gobj)
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
void func_ovl34_80133CEC(GObj* gobj)
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
void func_ovl34_80133EFC()
{
    GObj* temp_v0;
    DObj* temp_v0_2;

    D_ovl34_80134D48 = temp_v0 = omMakeGObjCommon(0, 0, 0x16, 0x80000000);
    temp_v0_2 = omAddDObjForGObj(temp_v0, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[1], &D_NF_00000F40));
    omAddOMMtxForDObjFixed(temp_v0_2, 0x1C, 0);
    omAddGObjRenderProc(temp_v0, func_ovl34_80133CEC, 0x1E, 0x80000000, -1);
    omAddDObjAnimAll(temp_v0_2, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[1], &D_NF_000011C4), 0);
    omAddGObjCommonProc(temp_v0, func_8000DF34, 1, 1);
    func_8000DF34(temp_v0);

    D_ovl34_80134D4C = temp_v0 = omMakeGObjCommon(0, 0, 0x16, 0x80000000);
    temp_v0_2 = omAddDObjForGObj(temp_v0, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[1], &D_NF_000005A0));
    omAddOMMtxForDObjFixed(temp_v0_2, 0x1C, 0);
    omAddGObjRenderProc(temp_v0, func_ovl34_80133B58, 0x1E, 0x80000000, -1);
    omAddDObjAnimAll(temp_v0_2, GetAddressFromOffset(gMvOpeningFirstDestinationFilesArray[1], &D_NF_00000714), 0);
    omAddGObjCommonProc(temp_v0, func_8000DF34, 1, 1);
    func_8000DF34(temp_v0);
}

// 0x8013407C
void func_ovl34_8013407C()
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
void func_ovl34_80134184()
{
    omEjectGObjCommon(D_ovl34_80134CE8);
    omEjectGObjCommon(D_ovl34_80134CEC);
}

// 0x801341B4
s32 func_ovl34_801341B4()
{
    s32 ft_kinds[8] = D_ovl34_80134B90;
    s32 ft_kind;

    while (ft_kind = ft_kinds[lbRandom_GetTimeByteRange(ARRAY_COUNT(ft_kinds))], ft_kind == D_ovl34_80134CF8);

    return ft_kind;
}

// 0x80134270
s32 func_ovl34_80134270()
{
    s32 ft_kinds[8] = D_ovl34_80134BB0;

    return ft_kinds[lbRandom_GetTimeByteRange(8)];
}

// 0x801342E4
void func_ovl34_801342E4()
{
    gMvOpeningFirstDestinationFramesElapsed = 0;
    D_ovl34_80134CF8 = func_ovl34_80134270();
    D_ovl34_80134CFC = func_ovl34_801341B4();
}

// 0x80134318
sb32 func_ovl34_80134318(GObj* gobj)
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
            mvOpeningFirstDestinationCreatePluckedFighter(D_ovl34_80134CF8);
            mvOpeningFirstDestinationCreatePencilHolder();
            omEjectGObjCommon(gMvOpeningFirstDestinationHALLogoGObj);
            omEjectGObjCommon(gMvOpeningFirstDestinationHALLogoBackgroundGObj);
            omEjectGObjCommon(D_ovl34_80134D30);
        }
        if (gMvOpeningFirstDestinationFramesElapsed == 695)
        {
            func_ovl34_80132928(D_ovl34_80134CFC);
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
            func_ovl34_80132CEC();
            omEjectGObjCommon(gMvOpeningFirstDestinationSunlightGObj);
        }
        if (gMvOpeningFirstDestinationFramesElapsed == 560)
        {
            func_ovl34_80134184();
            func_ovl34_80133470();
            func_ovl1_803905CC(gMvOpeningFirstDestinationMasterHandGObj, 0x10010);
        }
        if (gMvOpeningFirstDestinationFramesElapsed == 500)
        {
            omMoveGObjDL(gMvOpeningFirstDestinationPluckedFighterGObj, 9, -1);
            func_ovl34_801330B8();
        }
        if (gMvOpeningFirstDestinationFramesElapsed == 860)
        {
            func_ovl34_80134184();
            func_ovl34_801336A8();
            func_ovl1_803905CC(gMvOpeningFirstDestinationMasterHandGObj, 0x10011);
            mvOpeningFirstDestinationCreateSnapGFX();
        }
        if (gMvOpeningFirstDestinationFramesElapsed == 1037)
        {
            CameraGetStruct(D_ovl34_80134D50)->flags &= ~2;
        }
        if (gMvOpeningFirstDestinationFramesElapsed == 1040)
        {
            omEjectGObjCommon(gMvOpeningFirstDestinationHALLogoBackgroundGObj);
            omEjectGObjCommon(D_ovl34_80134D40);
            omEjectGObjCommon(gMvOpeningFirstDestinationMasterHandGObj);
            func_ovl34_8013407C();
            func_ovl34_80133EFC();
            func_ovl34_801331B0();
            func_ovl34_80132AE4();
            func_ovl34_80132F44();
        }
        if (gMvOpeningFirstDestinationFramesElapsed == I_SEC_TO_FRAMES(19))
        {
            func_ovl34_80134184();
            func_ovl34_80132738();
            DObjGetStruct(gMvOpeningFirstDestinationPluckedFighterGObj)->rotate.vec.f.x = 0.0F;
            DObjGetStruct(gMvOpeningFirstDestinationPluckedFighterGObj)->rotate.vec.f.y = 0.0F;
            DObjGetStruct(gMvOpeningFirstDestinationPluckedFighterGObj)->rotate.vec.f.z = 0.0F;
            func_ovl1_803905CC(gMvOpeningFirstDestinationPluckedFighterGObj, 0x1000A);
            func_ovl34_801338D4();
        }
        if (gMvOpeningFirstDestinationFramesElapsed == I_SEC_TO_FRAMES(18))
        {
            omEjectGObjCommon(D_ovl34_80134D4C);
            omEjectGObjCommon(D_ovl34_80134D48);
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

    func_800048D0(func_ovl34_80134318);

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

    omMakeGObjCommon(0, mvOpeningFirstDestinationMainProc, 0, 0x80000000);
    D_ovl34_80134D50 = func_8000B9FC(0, 0x80000000, 0x64, 3, 0xFF);
    func_ovl2_80115890();
    func_ovl34_801342E4();
    efManager_AllocUserData();
    ftManager_AllocFighterData(1, 3);
    ftManager_SetFileDataKind(D_ovl34_80134CF8);
    ftManager_SetFileDataKind(D_ovl34_80134CFC);
    ftManager_SetFileDataKind(Ft_Kind_MasterHand);
    gMvOpeningFirstDestinationMasterHandAnimHeap = gsMemoryAlloc(gFTAnimHeapSize, 0x10);
    gMvOpeningFirstDestinationPluckedFighterAnimHeap = gsMemoryAlloc(gFTAnimHeapSize, 0x10);
    D_ovl34_80134CE0 = gsMemoryAlloc(gFTAnimHeapSize, 0x10);
    func_ovl34_801332BC();
    func_ovl34_80132D48();
    func_ovl34_801339CC();
    func_ovl34_80133A6C();
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
    func_ovl34_801329F0();
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
