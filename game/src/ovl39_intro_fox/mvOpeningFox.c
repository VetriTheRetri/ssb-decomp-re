#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mvOpeningFox.h>

// // ovl37 stuff
// extern CameraVec7 dMvOpeningFoxCameraSettingsStart; // 0x8018E070
// extern CameraVec7 dMvOpeningFoxCameraSettingsEnd; // 0x8018E08C

// // 0x8018E0A8
// ftExplainCommand dMvOpeningFoxInputSeq[/* */] =
// {
//     FTEXPLAIN_EVENT_STICK(0, -I_CONTROLLER_RANGE_MAX, 0), // 0x2000, 0x00B0
//     FTEXPLAIN_EVENT_BUTTON(B_BUTTON, 1),                  // 0x1001, 0x4000
//     FTEXPLAIN_EVENT_BUTTON(0, 1),                         // 0x1001, 0x0000
//     FTEXPLAIN_EVENT_BUTTON(B_BUTTON, 1),                  // 0x1001, 0x4000
//     FTEXPLAIN_EVENT_END()                                 // 0x0000
// };

extern RldmFileId D_ovl39_8018E0E0[2];
extern intptr_t dMvOpeningFoxNameOffsets[4]; // 0x8018E0E8;
extern Vec2f dMvOpeningFoxNameCharPositions[3]; // 0x8018E0F8;

// extern scUnkDataBounds D_ovl37_8018E0E0;
// extern scRuntimeInfo D_ovl37_8018E0FC;

extern s32 gMvOpeningFoxFramesElapsed; // 0x8018E1F8
extern GObj* gMvOpeningFoxNameGObj; // 0x8018E1FC
// extern GObj* gMvOpeningFoxStageFighterGObj; // 0x8018E1D0

// extern GObj* gMvOpeningFoxStageCameraGObj; // 0x8018E1D8
// extern void* gMvOpeningFoxAnimHeap; // 0x8018E1DC
// extern f32 gMvOpeningFoxPosedFighterYSpeed; // 0x8018E1E0

extern CameraVec7 dMvOpeningFoxCameraSettingsAdjustedStart; // 0x8018E218
extern CameraVec7 dMvOpeningFoxCameraSettingsAdjustedEnd; // 0x8018E238

extern rdFileNode D_ovl39_8018E258[48];
extern rdFileNode D_ovl39_8018E3D8[7];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern uintptr_t gMvOpeningFoxFilesArray[2]; // 0x8018E410[2]
// // gMvOpeningFoxFilesArray[0] - D_ovl39_8018E410; // file 0x025 pointer
// // gMvOpeningFoxFilesArray[1] - D_ovl39_8018E414; // file 0x041 pointer

// extern gmBattleState gMvOpeningFoxBattleState; // 0x8018E3E8

// // Offsets
// extern intptr_t FILE_041_FOX_CAMERA_PARAMS_OFFSET = 0x30; // file 0x041 offset for Fox's fighter pose camera settings

// 0x8018D0C0
void mvOpeningFoxLoadFiles()
{
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl39_8018E258;
    rldmSetup.statusBufSize = 0x30;
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl39_8018E3D8;
    rldmSetup.forceBufSize = 7;
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl39_8018E0E0, ARRAY_COUNT(D_ovl39_8018E0E0), gMvOpeningFoxFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl39_8018E0E0, ARRAY_COUNT(D_ovl39_8018E0E0)), 0x10));
}

// 0x8018D160
void mvOpeningFoxSetNameColor(SObj* name_sobj)
{
    name_sobj->sprite.attr &= ~SP_FASTCOPY;
    name_sobj->sprite.attr |= SP_TRANSPARENT;
    name_sobj->shadow_color.r = 0xFF;
    name_sobj->shadow_color.g = 0xFF;
    name_sobj->shadow_color.b = 0xFF;
    name_sobj->sprite.red = 0xFF;
    name_sobj->sprite.green = 0xFF;
    name_sobj->sprite.blue = 0xFF;
}

// 0x8018D194
void mvOpeningFoxDrawName()
{
    GObj* name_gobj;
    SObj* name_sobj;
    intptr_t offsets[4] = dMvOpeningFoxNameOffsets;
    Vec2f positions[3] = dMvOpeningFoxNameCharPositions;
    s32 i;

    gMvOpeningFoxNameGObj = name_gobj = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
    omAddGObjRenderProc(name_gobj, func_ovl0_800CCF00, 0x1B, 0x80000000, -1);

    for (i = 0; offsets[i] != 0; i++)
    {
        name_sobj = gcAppendSObjWithSprite(name_gobj, GetAddressFromOffset(gMvOpeningFoxFilesArray[0], offsets[i]));
        name_sobj->sprite.attr &= ~SP_FASTCOPY;
        name_sobj->sprite.attr |= SP_TRANSPARENT;
        name_sobj->pos.x = positions[i].x + 110.0F;
        name_sobj->pos.y = positions[i].y + 100.0F;

        mvOpeningFoxSetNameColor(name_sobj);
    }
}

// 0x8018D314
void mvOpeningFoxAnimateStageCamera(GObj* camera_gobj)
{
    Camera *cam = CameraGetStruct(camera_gobj);

    if (gMvOpeningFoxFramesElapsed >= 15)
    {
        cam->vec.eye.x += (((dMvOpeningFoxCameraSettingsAdjustedEnd.eye.x - dMvOpeningFoxCameraSettingsAdjustedStart.eye.x) / 45.0F));
        cam->vec.eye.y += (((dMvOpeningFoxCameraSettingsAdjustedEnd.eye.y - dMvOpeningFoxCameraSettingsAdjustedStart.eye.y) / 45.0F));
        cam->vec.eye.z += (((dMvOpeningFoxCameraSettingsAdjustedEnd.eye.z - dMvOpeningFoxCameraSettingsAdjustedStart.eye.z) / 45.0F));
        cam->vec.at.x += (((dMvOpeningFoxCameraSettingsAdjustedEnd.at.x - dMvOpeningFoxCameraSettingsAdjustedStart.at.x) / 45.0F));
        cam->vec.at.y += (((dMvOpeningFoxCameraSettingsAdjustedEnd.at.y - dMvOpeningFoxCameraSettingsAdjustedStart.at.y) / 45.0F));
        cam->vec.at.z += (((dMvOpeningFoxCameraSettingsAdjustedEnd.at.z - dMvOpeningFoxCameraSettingsAdjustedStart.at.z) / 45.0F));
        cam->vec.up.x += (((dMvOpeningFoxCameraSettingsAdjustedEnd.upx - dMvOpeningFoxCameraSettingsAdjustedStart.upx) / 45.0F));
    }
}

// func_ovl39_8018D40C

// func_ovl39_8018D61C

// func_ovl39_8018D84C

// func_ovl39_8018D94C

// func_ovl39_8018D998

// func_ovl39_8018DA68

// func_ovl39_8018DB68

// func_ovl39_8018DC08

// func_ovl39_8018DCF0

// func_ovl39_8018DD98

// func_ovl39_8018DE54

// func_ovl39_8018DE60

// func_ovl39_8018DFE0

// intro_focus_fox_entry
