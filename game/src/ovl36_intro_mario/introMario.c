#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <introMario.h>

// // ovl35 stuff
extern CameraVec7 D_ovl36_8018E090;
extern CameraVec7 D_ovl36_8018E0AC;

ftExplainCommand dOpMarioInputSeq[/* */] =
{
    FTEXPLAIN_EVENT_STICK(0, 0, 0),                             // 0x2000, 0x0000
    FTEXPLAIN_EVENT_BUTTON(A_BUTTON, 1),                        // 0x1001, 0x8000
    FTEXPLAIN_EVENT_BUTTON(0, 11),                              // 0x100B, 0x0000
    FTEXPLAIN_EVENT_BUTTON(A_BUTTON, 1),                        // 0x1001, 0x8000
    FTEXPLAIN_EVENT_BUTTON(0, 20),                              // 0x1014, 0x0000
    FTEXPLAIN_EVENT_STICK(0, -I_CONTROLLER_RANGE_MAX, 0),       // 0x2000, 0x00B0
    FTEXPLAIN_EVENT_BUTTON(A_BUTTON, 1),                        // 0x1001, 0x8000
    FTEXPLAIN_EVENT_END()                                       // 0x0000
};

extern RldmFileId D_ovl36_8018E0E8[2];
extern intptr_t dIntroMarioNameOffsets[6]; // 0x8018E0F0;
extern f32 dIntroMarioNameCharXPositions[5]; // 0x8018E108;


// extern intptr_t dIntroPortraitsPortraitOffsetsSet1[4]; // 0x801328D8;
// extern Vec2f dIntroPortraitsPortraitPositionsSet1[4]; // 0x801328E8;
// extern intptr_t dIntroPortraitsPortraitOffsetsSet2[4]; // 0x80132908;
// extern Vec2f dIntroPortraitsPortraitPositionsSet2[4]; // 0x80132918;

// extern scUnkDataBounds D_ovl35_80132938;
// extern scRuntimeInfo D_ovl35_80132954;

extern s32 gIntroMarioFramesElapsed; // 0x8018E208
extern GObj* gIntroMarioNameGObj; // 0x8018E20C

extern GObj* D_ovl36_8018E218;

extern CameraVec7 D_ovl36_8018E228;
extern CameraVec7 D_ovl36_8018E248;

// extern s32 gIntroPotraitsFramesElapsed; // 0x801329E8
// extern s32 gIntroPotraitsCurrentRow; // 0x801329EC
// extern GObj* gIntroPortraitsPortraitGObj; // 0x801329F0
// extern s32 gIntroPortraitsUnusedCounter; // 0x801329F4;
extern rdFileNode D_ovl36_8018E268[48];
extern rdFileNode D_ovl36_8018E3E8[7];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern s32 gIntroMarioFilesArray[2]; // 0x8018E420[2]
// gIntroMarioFilesArray[0] - D_ovl36_8018E420; // file 0x0?? pointer
// gIntroMarioFilesArray[1] - D_ovl36_8018E424; // file 0x0?? pointer

// Offsets
// extern intptr_t FILE_035_PORTRAIT_OVERLAY_IMAGE_OFFSET = 0x2B2D0; // file 0x035 image offset for portrait overlay

// 0x8018D0C0
void opMarioInit()
{
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = D_ovl36_8018E268;
    rldmSetup.statusBufSize = ARRAY_COUNT(D_ovl36_8018E268);
    rldmSetup.forceBuf = D_ovl36_8018E3E8;
    rldmSetup.forceBufSize = ARRAY_COUNT(D_ovl36_8018E3E8);
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl36_8018E0E8, ARRAY_COUNT(D_ovl36_8018E0E8), gIntroMarioFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl36_8018E0E8, ARRAY_COUNT(D_ovl36_8018E0E8)), 0x10));
}

// 0x8018D160
void opMarioSetNameColor(SObj* name_sobj)
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
void opMarioDrawName()
{
    GObj* name_gobj;
    SObj* name_sobj;
    intptr_t offsets[6] = dIntroMarioNameOffsets;
    f32 x_positions[5] = dIntroMarioNameCharXPositions;
    s32 i;

    gIntroMarioNameGObj = name_gobj = omMakeGObjCommon(0, 0, 0x11, GOBJ_LINKORDER_DEFAULT);
    omAddGObjRenderProc(name_gobj, func_ovl0_800CCF00, 0x1B, 0x80000000, -1);

    for (i = 0; offsets[i] != 0; i++)
    {
        name_sobj = gcAppendSObjWithSprite(name_gobj, GetAddressFromOffset(gIntroMarioFilesArray[0], offsets[i]));
        name_sobj->sprite.attr &= ~SP_FASTCOPY;
        name_sobj->sprite.attr |= SP_TRANSPARENT;
        name_sobj->pos.x = x_positions[i] + 80.0F;
        name_sobj->pos.y = 100.0F;

        opMarioSetNameColor(name_sobj);
    }
}

// 0x8018D314
void func_ovl36_8018D314(GObj* camera_gobj)
{
    Camera *cam = CameraGetStruct(camera_gobj);

    if (gIntroMarioFramesElapsed >= 15)
    {
        cam->vec.eye.x += (((D_ovl36_8018E248.eye.x - D_ovl36_8018E228.eye.x) / 45.0F));
        cam->vec.eye.y += (((D_ovl36_8018E248.eye.y - D_ovl36_8018E228.eye.y) / 45.0F));
        cam->vec.eye.z += (((D_ovl36_8018E248.eye.z - D_ovl36_8018E228.eye.z) / 45.0F));
        cam->vec.at.x += (((D_ovl36_8018E248.at.x - D_ovl36_8018E228.at.x) / 45.0F));
        cam->vec.at.y += (((D_ovl36_8018E248.at.y - D_ovl36_8018E228.at.y) / 45.0F));
        cam->vec.at.z += (((D_ovl36_8018E248.at.z - D_ovl36_8018E228.at.z) / 45.0F));
        cam->vec.up.x += (((D_ovl36_8018E248.upx - D_ovl36_8018E228.upx) / 45.0F));
    }
}

// 0x8018D40C
void func_ovl36_8018D40C(Vec3f arg0)
{
    Camera *cam;

    D_ovl36_8018E228 = D_ovl36_8018E090;
    D_ovl36_8018E248 = D_ovl36_8018E0AC;

    D_ovl36_8018E218 = func_ovl2_8010DB2C(0);
    cam = CameraGetStruct(D_ovl36_8018E218);
    func_80007080(&cam->viewport, 110.0F, 10.0F, 310.0F, 230.0F);
    cam->projection.persp.aspect = 10.0F / 11.0F;
    func_8000B39C(D_ovl36_8018E218);
    omAddGObjCommonProc(D_ovl36_8018E218, func_ovl36_8018D314, 1, 1);

    D_ovl36_8018E228.eye.x += arg0.x;
    D_ovl36_8018E228.eye.y += arg0.y;
    D_ovl36_8018E228.eye.z += arg0.z;
    D_ovl36_8018E228.at.x += arg0.x;
    D_ovl36_8018E228.at.y += arg0.y;
    D_ovl36_8018E228.at.z += arg0.z;

    D_ovl36_8018E248.eye.x += arg0.x;
    D_ovl36_8018E248.eye.y += arg0.y;
    D_ovl36_8018E248.eye.z += arg0.z;
    D_ovl36_8018E248.at.x += arg0.x;
    D_ovl36_8018E248.at.y += arg0.y;
    D_ovl36_8018E248.at.z += arg0.z;

    cam->vec.eye.x = D_ovl36_8018E228.eye.x;
    cam->vec.eye.y = D_ovl36_8018E228.eye.y;
    cam->vec.eye.z = D_ovl36_8018E228.eye.z;
    cam->vec.at.x = D_ovl36_8018E228.at.x;
    cam->vec.at.y = D_ovl36_8018E228.at.y;
    cam->vec.at.z = D_ovl36_8018E228.at.z;
    cam->vec.up.x = D_ovl36_8018E228.upx;
}

// 0x8018D614
void func_ovl36_8018D614()
{
    GObj* fighter_gobj;
    s32 i;
    s32 foo;
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
    func_ovl36_8018D40C(spawn_position);
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
        spawn_info.lr_spawn = LR_Right;
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

        D_ovl36_8018E210 = fighter_gobj = ftManager_MakeFighter(&spawn_info);

        ftCommon_ClearPlayerMatchStats(i, fighter_gobj);
        ftCommon_SetHowToPlayInputSeq(fighter_gobj, dOpMarioInputSeq);
    }
}

// 0x8018D844
void func_ovl36_8018D844(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 160, 170, 255, 255);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 110, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8018D944
void func_ovl36_8018D944()
{
    omAddGObjRenderProc(omMakeGObjCommon(0, 0, 0x13, 0x80000000), func_ovl36_8018D844, 0x1C, 0x80000000, -1);
}

// 0x8018D990
void func_ovl36_8018D990(GObj* fighter_gobj)
{
    switch (gIntroMarioFramesElapsed)
    {
        default:
            break;
        case 15:
            D_ovl36_8018E220 = 17.0f;
            break;
        case 45:
            D_ovl36_8018E220 = 15.0f;
            break;
        case 60:
            D_ovl36_8018E220 = 0.0f;
            break;
    }

    if ((gIntroMarioFramesElapsed > 15) && (gIntroMarioFramesElapsed < 45))
    {
        D_ovl36_8018E220 += 1.0F / 15.0F;
    }
    if ((gIntroMarioFramesElapsed > 45) && (gIntroMarioFramesElapsed < 60))
    {
        D_ovl36_8018E220 += -1.0f;
    }

    DObjGetStruct(fighter_gobj)->translate.vec.f.y -= D_ovl36_8018E220;

// 0x8018DA60
void func_ovl36_8018DA60()
{
    GObj* fighter_gobj;
    ftCreateDesc spawn_info = dFtDefaultFighterDesc;

    spawn_info.ft_kind = Ft_Kind_Mario;
    spawn_info.costume = ftCostume_GetIndexFFA(0, 0);
    spawn_info.anim_heap = D_ovl36_8018E21C;
    spawn_info.pos.x = 0.0f;
    spawn_info.pos.y = 600.0f;
    spawn_info.pos.z = 0.0f;

    fighter_gobj = ftManager_MakeFighter(&spawn_info);
    func_ovl1_803905CC(fighter_gobj, 0x1000C);
    omMoveGObjDL(fighter_gobj, 0x1A, -1);
    omAddGObjCommonProc(fighter_gobj, func_ovl36_8018D990, 1, 1);

    DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;
}

// 0x8018DB5C
void func_ovl36_8018DB5C()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8018DBFC
void func_ovl36_8018DBFC()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
    cam->projection.persp.aspect = 5.0F / 11.0F;
    func_8000FA3C(cam, GetAddressFromOffset(D_ovl36_8018E424, &D_NF_00000000), 0.0F);
    omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
}

// func_ovl36_8018DCEC

// func_ovl36_8018DD9C

// func_ovl36_8018DE58

// func_ovl36_8018DE64

// func_ovl36_8018DFE4

// intro_focus_mario_entry
