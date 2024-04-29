#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mvOpeningDK.h>

// // ovl37 stuff
extern CameraVec7 dMvOpeningDKCameraSettingsStart; // 0x8018E070
extern CameraVec7 dMvOpeningDKCameraSettingsEnd; // 0x8018E08C

// 0x8018E0A8
ftExplainCommand dMvOpeningDKInputSeq[/* */] =
{
    FTEXPLAIN_EVENT_STICK(0, -I_CONTROLLER_RANGE_MAX, 0), // 0x2000, 0x00B0
    FTEXPLAIN_EVENT_BUTTON(B_BUTTON, 1),                  // 0x1001, 0x4000
    FTEXPLAIN_EVENT_BUTTON(0, 1),                         // 0x1001, 0x0000
    FTEXPLAIN_EVENT_BUTTON(B_BUTTON, 1),                  // 0x1001, 0x4000
    FTEXPLAIN_EVENT_END()                                 // 0x0000
};

extern RldmFileId D_ovl37_8018E0BC[2];
extern intptr_t dMvOpeningDKNameOffsets[3]; // 0x8018E0C4;
extern Vec2f dMvOpeningDKNameCharPositions[2]; // 0x8018E0D0;

// extern scUnkDataBounds D_ovl36_8018E11C;
// extern scRuntimeInfo D_ovl36_8018E138;

extern s32 gMvOpeningDKFramesElapsed; // 0x8018E1C8
extern GObj* gMvOpeningDKNameGObj; // 0x8018E1CC
extern GObj* gMvOpeningDKStageFighterGObj; // 0x8018E1D0

extern GObj* gMvOpeningDKStageCameraGObj; // 0x8018E1D8
// extern void* gMvOpeningMarioAnimHeap; // 0x8018E21C
extern f32 gMvOpeningDKPosedFighterYSpeed; // 0x8018E1E0

extern CameraVec7 dMvOpeningDKCameraSettingsAdjustedStart; // 0x8018E1E8
extern CameraVec7 dMvOpeningDKCameraSettingsAdjustedEnd; // 0x8018E208

extern rdFileNode D_ovl37_8018E228[48];
extern rdFileNode D_ovl37_8018E3A8[7];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern s32 gMvOpeningDKFilesArray[2]; // 0x8018E3E0[2]
// // gMvOpeningDKFilesArray[0] - D_ovl37_8018E3E0; // file 0x041 pointer
// // gMvOpeningDKFilesArray[1] - D_ovl37_8018E3E4; // file 0x103 pointer

// extern gmSceneInfo gMvOpeningMarioBattleState; // 0x8018E428

// // Offsets
// extern intptr_t FILE_103_UNKNOWN_OFFSET = 0x0; // file 0x103 offset for ?

// 0x8018D0C0
void mvOpeningDKLoadFiles()
{
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl37_8018E228;
    rldmSetup.statusBufSize = 0x30;
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl37_8018E3A8;
    rldmSetup.forceBufSize = 7;
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl37_8018E0BC, ARRAY_COUNT(D_ovl37_8018E0BC), gMvOpeningDKFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl37_8018E0BC, ARRAY_COUNT(D_ovl37_8018E0BC)), 0x10));
}

// 0x8018D160
void mvOpeningDKSetNameColor(SObj* name_sobj)
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
void mvOpeningDKDrawName()
{
    GObj* name_gobj;
    SObj* name_sobj;
    intptr_t offsets[3] = dMvOpeningDKNameOffsets;
    Vec2f positions[2] = dMvOpeningDKNameCharPositions;
    s32 i;

    gMvOpeningDKNameGObj = name_gobj = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
    omAddGObjRenderProc(name_gobj, func_ovl0_800CCF00, 0x1B, 0x80000000, -1);

    for (i = 0; offsets[i] != 0; i++)
    {
        name_sobj = gcAppendSObjWithSprite(name_gobj, GetAddressFromOffset(gMvOpeningDKFilesArray[0], offsets[i]));
        name_sobj->sprite.attr &= ~SP_FASTCOPY;
        name_sobj->sprite.attr |= SP_TRANSPARENT;
        name_sobj->pos.x = positions[i].x + 120.0F;
        name_sobj->pos.y = positions[i].y + 100.0F;

        mvOpeningDKSetNameColor(name_sobj);
    }
}

// 0x8018D2FC
void mvOpeningDKAnimateStageCamera(GObj* camera_gobj)
{
    Camera *cam = CameraGetStruct(camera_gobj);

    if (gMvOpeningDKFramesElapsed >= 15)
    {
        cam->vec.eye.x += (((dMvOpeningDKCameraSettingsAdjustedEnd.eye.x - dMvOpeningDKCameraSettingsAdjustedStart.eye.x) / 45.0F));
        cam->vec.eye.y += (((dMvOpeningDKCameraSettingsAdjustedEnd.eye.y - dMvOpeningDKCameraSettingsAdjustedStart.eye.y) / 45.0F));
        cam->vec.eye.z += (((dMvOpeningDKCameraSettingsAdjustedEnd.eye.z - dMvOpeningDKCameraSettingsAdjustedStart.eye.z) / 45.0F));
        cam->vec.at.x += (((dMvOpeningDKCameraSettingsAdjustedEnd.at.x - dMvOpeningDKCameraSettingsAdjustedStart.at.x) / 45.0F));
        cam->vec.at.y += (((dMvOpeningDKCameraSettingsAdjustedEnd.at.y - dMvOpeningDKCameraSettingsAdjustedStart.at.y) / 45.0F));
        cam->vec.at.z += (((dMvOpeningDKCameraSettingsAdjustedEnd.at.z - dMvOpeningDKCameraSettingsAdjustedStart.at.z) / 45.0F));
        cam->vec.up.x += (((dMvOpeningDKCameraSettingsAdjustedEnd.upx - dMvOpeningDKCameraSettingsAdjustedStart.upx) / 45.0F));
    }
}

// 0x8018D3F4
void mvOpeningDKCreateStageViewport(Vec3f arg0)
{
    Camera *cam;

    dMvOpeningDKCameraSettingsAdjustedStart = dMvOpeningDKCameraSettingsStart;
    dMvOpeningDKCameraSettingsAdjustedEnd = dMvOpeningDKCameraSettingsEnd;

    gMvOpeningDKStageCameraGObj = func_ovl2_8010DB2C(0);
    cam = CameraGetStruct(gMvOpeningDKStageCameraGObj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 210.0F, 230.0F);
    cam->projection.persp.aspect = 10.0F / 11.0F;
    func_8000B39C(gMvOpeningDKStageCameraGObj);
    omAddGObjCommonProc(gMvOpeningDKStageCameraGObj, mvOpeningDKAnimateStageCamera, 1, 1);

    dMvOpeningDKCameraSettingsAdjustedStart.eye.x += arg0.x;
    dMvOpeningDKCameraSettingsAdjustedStart.eye.y += arg0.y;
    dMvOpeningDKCameraSettingsAdjustedStart.eye.z += arg0.z;
    dMvOpeningDKCameraSettingsAdjustedStart.at.x += arg0.x;
    dMvOpeningDKCameraSettingsAdjustedStart.at.y += arg0.y;
    dMvOpeningDKCameraSettingsAdjustedStart.at.z += arg0.z;

    dMvOpeningDKCameraSettingsAdjustedEnd.eye.x += arg0.x;
    dMvOpeningDKCameraSettingsAdjustedEnd.eye.y += arg0.y;
    dMvOpeningDKCameraSettingsAdjustedEnd.eye.z += arg0.z;
    dMvOpeningDKCameraSettingsAdjustedEnd.at.x += arg0.x;
    dMvOpeningDKCameraSettingsAdjustedEnd.at.y += arg0.y;
    dMvOpeningDKCameraSettingsAdjustedEnd.at.z += arg0.z;

    cam->vec.eye.x = dMvOpeningDKCameraSettingsAdjustedStart.eye.x;
    cam->vec.eye.y = dMvOpeningDKCameraSettingsAdjustedStart.eye.y;
    cam->vec.eye.z = dMvOpeningDKCameraSettingsAdjustedStart.eye.z;
    cam->vec.at.x = dMvOpeningDKCameraSettingsAdjustedStart.at.x;
    cam->vec.at.y = dMvOpeningDKCameraSettingsAdjustedStart.at.y;
    cam->vec.at.z = dMvOpeningDKCameraSettingsAdjustedStart.at.z;
    cam->vec.up.x = dMvOpeningDKCameraSettingsAdjustedStart.upx;
}

// 0x8018D604
void mvOpeningDKInitFighterStagePanel()
{
    GObj* fighter_gobj;
    s32 i;
    s32 foo, bar;
    s32 pos_ids;
    Vec3f spawn_position;

    grWallpaper_SetGroundWallpaper();
    grNodeInit_SetGroundFiles();

    if (mpCollision_GetMPointCountKind(mpMPoint_Kind_AutoDemoSpawn1) != 1)
    {
        while (TRUE)
        {
            gsFatalPrintF("wrong number of mapobject");
            smCrashPrintGObjStatus();
        }
    }

    mpCollision_GetMPointIDsKind(mpMPoint_Kind_AutoDemoSpawn1, &pos_ids);
    mpCollision_GetMPointPositionID(pos_ids, &spawn_position);
    mvOpeningDKCreateStageViewport(spawn_position);
    gmRumble_SetPlayerRumble();
    ftPublicReactSetup();

    for (i = 0; i < ARRAY_COUNT(gBattleState->player_block); i++)
    {
        ftCreateDesc spawn_info = dFtDefaultFighterDesc;

        if (gBattleState->player_block[i].player_kind == Pl_Kind_Not) continue;

        ftManager_SetFileDataKind(gBattleState->player_block[i].character_kind);

        spawn_info.ft_kind = gBattleState->player_block[i].character_kind;
        spawn_info.pos.x = spawn_position.x;
        spawn_info.pos.y = spawn_position.y;
        spawn_info.pos.z = spawn_position.z;
        spawn_info.lr_spawn = LR_Left;
        spawn_info.team = gBattleState->player_block[i].team_index;
        spawn_info.player = i;
        spawn_info.model_lod = ftParts_LOD_HighPoly;
        spawn_info.costume = gBattleState->player_block[i].costume_index;
        spawn_info.handicap = gBattleState->player_block[i].handicap;
        spawn_info.cp_level = gBattleState->player_block[i].level;
        spawn_info.stock_count = gBattleState->stock_setting;
        spawn_info.damage = 0;
        spawn_info.pl_kind = gBattleState->player_block[i].player_kind;
        spawn_info.controller = &gPlayerControllers[i];
        spawn_info.anim_heap = ftManager_AllocAnimHeapKind(gBattleState->player_block[i].character_kind);

        gMvOpeningDKStageFighterGObj = fighter_gobj = ftManager_MakeFighter(&spawn_info);

        ftCommon_ClearPlayerMatchStats(i, fighter_gobj);
        ftCommon_SetHowToPlayInputSeq(fighter_gobj, dMvOpeningDKInputSeq);
    }
}

// 0x8018D834
void mvOpeningDKRenderPosedFighterBackground(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 70, 90, 0, 255);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 210, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8018D934
void mvOpeningDKCreatePosedFighterBackground()
{
    omAddGObjRenderProc(omMakeGObjCommon(0, 0, 0x13, 0x80000000), mvOpeningDKRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 0x8018D980
void mvOpeningDKAnimatePosedFighter(GObj* fighter_gobj)
{
    switch (gMvOpeningDKFramesElapsed)
    {
        default:
            break;
        case 15:
            gMvOpeningDKPosedFighterYSpeed = 17.0F;
            break;
        case 45:
            gMvOpeningDKPosedFighterYSpeed = 15.0F;
            break;
        case 60:
            gMvOpeningDKPosedFighterYSpeed = 0.0F;
            break;
    }

    if ((gMvOpeningDKFramesElapsed > 15) && (gMvOpeningDKFramesElapsed < 45))
    {
        gMvOpeningDKPosedFighterYSpeed += -1.0F / 15.0F;
    }
    if ((gMvOpeningDKFramesElapsed > 45) && (gMvOpeningDKFramesElapsed < 60))
    {
        gMvOpeningDKPosedFighterYSpeed += -1.0F;
    }

    DObjGetStruct(fighter_gobj)->translate.vec.f.y += gMvOpeningDKPosedFighterYSpeed;
}

// func_ovl37_8018DA50

// func_ovl37_8018DB50

// func_ovl37_8018DBF0

// func_ovl37_8018DCD8

// func_ovl37_8018DD80

// func_ovl37_8018DE3C

// func_ovl37_8018DE48

// func_ovl37_8018DFCC

// intro_focus_dk_entry
