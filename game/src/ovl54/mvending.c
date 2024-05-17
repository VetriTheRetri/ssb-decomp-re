#include <ft/fighter.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>

// EXTERN

extern void func_ovl1_803903E0(void);

extern u32 gFTAnimHeapSize;

extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_00000854;
extern intptr_t D_NF_800A5240;

extern intptr_t lMVEndingArenaLo;           // 0x80132F80
    
extern intptr_t D_NF_00000000;              // 0x00000000
extern intptr_t D_NF_000042F8;              // 0x000042F8
extern intptr_t D_NF_00007E98;              // 0x00007E98
extern intptr_t D_NF_00008788;              // 0x00008788
extern intptr_t D_NF_00008DF8;              // 0x00008DF8
extern intptr_t D_NF_0000A6F8;
extern intptr_t D_NF_0000A7B0;
extern intptr_t D_NF_0000AEB8;
extern intptr_t D_NF_0000AF70;
extern intptr_t D_NF_0000BDC0;
extern intptr_t D_NF_0000BEA0;
extern intptr_t D_NF_0000C690;
extern intptr_t D_NF_0000C884;

// STATIC / GLOBAL

// 0x80132BC0
s32 sMVEndingPadding[2];

// 0x80132BC8
void *sMVEndingFighterAnimHeap;

// 0x80132BCC
s32 sMVEndingRoomTimer;

// 0x80132BD0
GObj *D_ovl54_80132BD0;

// 0x80132BD4
GObj *D_ovl54_80132BD4;

// 0x80132BDC
GObj *sMVEndingFighterGObj;

// 0x80132BE0
GObj *D_ovl54_80132BE0;

// 0x80132BE4
GObj *D_ovl54_80132BE4;

// 0x80132BE8
GObj *D_ovl54_80132BE8;

// 0x80132BEC
GObj *D_ovl54_80132BEC;

// 0x80132BF0
GObj *D_ovl54_80132BF0;

// 0x80132BF4
GObj *D_ovl54_80132BF4;

// 0x80132BF8
s32 sMVEndingRoomFadeInAlpha;

// 0x80132BFC
f32 sMVEndingRoomLightAlpha;

// 0x80132C00
GObj *sMVEndingRoomFadeInGObj;

// 0x80132C04
GObj *sMVEndingRoomLightGObj;

// 0x80132C08
mvFighterDesc sMVEndingFighterDesc;

// 0x80132C14
s32 D_ovl54_80132C14;

// 0x80132C18
rdFileNode sMVEndingStatusBuf[100];

// 0x80132F38
rdFileNode sMVEndingForceBuf[7];

// 0x80132F70
void *sMVEndingFiles[2];

// DATA

// 0x80132AD0
u32 dMVEndingFileIDs[/* */] = { 0x34, 0x4C };

// 0x80132AD8
Lights1 dMVEndingLights11 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);

// 0x80132AF0
Lights1 dMVEndingLights12 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x00);

// 0x80132B08
scUnkDataBounds D_ovl54_80132B08;

// 0x80132B24
scRuntimeInfo D_ovl54_80132B24;

// 0x80131B00
void func_ovl54_80131B00(Gfx **dl)
{
    gSPSetGeometryMode(dl[0]++, G_LIGHTING);

    ftRender_Lights_DisplayLightReflect(dl, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B58
void func_ovl54_80131B58(void)
{
    GObj *gobj;

    D_ovl54_80132BE0 = gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

    func_8000F120(gobj, ((uintptr_t)sMVEndingFiles[0] + (intptr_t)&D_NF_00007E98), 0);
    omAddGObjRenderProc(gobj, odRenderDObjTreeDLLinksForGObj, 0x1D, GOBJ_DLLINKORDER_DEFAULT, -1);
    func_8000F8F4(gobj, ((uintptr_t)sMVEndingFiles[0] + (intptr_t)&D_NF_000042F8));
    func_8000BE28(gobj, ((uintptr_t)sMVEndingFiles[0] + (intptr_t)&D_NF_00008788), 0.0F);
    func_8000DF34(gobj);
}

// 0x80131C1C
void func_ovl54_80131C1C(void)
{
    GObj *gobj;

    D_ovl54_80132BE4 = gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

    func_8000F120(gobj, ((uintptr_t)sMVEndingFiles[0] + (intptr_t)&D_NF_00008DF8), 0);
    omAddGObjRenderProc(gobj, odRenderDObjTreeForGObj, 0x1D, GOBJ_DLLINKORDER_DEFAULT, -1);
}

// 0x80131C94
void func_ovl54_80131C94(void)
{
    GObj *gobj;

    D_ovl54_80132BE8 = gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

    func_8000F120(gobj, ((uintptr_t)sMVEndingFiles[0] + (intptr_t)&D_NF_0000A6F8), 0);
    omAddGObjRenderProc(gobj, odRenderDObjTreeForGObj, 0x1D, GOBJ_DLLINKORDER_DEFAULT, -1);
    func_8000BD8C(gobj, ((uintptr_t)sMVEndingFiles[0] + (intptr_t)&D_NF_0000A7B0), 300.0F);
    func_8000DF34(gobj);
}

// 0x80131D34
void func_ovl54_80131D34(void)
{
    GObj *gobj;

    D_ovl54_80132BEC = gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

    func_8000F120(gobj, ((uintptr_t)sMVEndingFiles[0] + (intptr_t)&D_NF_0000AEB8), 0);
    omAddGObjRenderProc(gobj, odRenderDObjTreeForGObj, 0x1D, GOBJ_DLLINKORDER_DEFAULT, -1);
    func_8000BD8C(gobj, ((uintptr_t)sMVEndingFiles[0] + (intptr_t)&D_NF_0000AF70), 300.0F);
    func_8000DF34(gobj);
}

// 0x80131DD4
void func_ovl54_80131DD4(void)
{
    GObj *gobj;

    D_ovl54_80132BF0 = gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

    func_8000F120(gobj, ((uintptr_t)sMVEndingFiles[0] + (intptr_t)&D_NF_0000BDC0), 0);
    omAddGObjRenderProc(gobj, odRenderDObjTreeForGObj, 0x1D, GOBJ_DLLINKORDER_DEFAULT, -1);
    func_8000BD8C(gobj, ((uintptr_t)sMVEndingFiles[0] + (intptr_t)&D_NF_0000BEA0), 300.0F);
    func_8000DF34(gobj);
}

// 0x80131E74
void func_ovl54_80131E74(void)
{
    GObj *gobj;
    DObj *dobj;

    D_ovl54_80132BF4 = gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

    dobj = omAddDObjForGObj(gobj, ((uintptr_t)sMVEndingFiles[0] + (intptr_t)&D_NF_0000C690));

    omAddOMMtxForDObjFixed(dobj, OMMtx_Transform_TraRotRpyRSca, 0);
    omAddGObjRenderProc(gobj, odRenderDObjDLHead0, 0x1D, GOBJ_DLLINKORDER_DEFAULT, -1);
    omAddDObjAnimAll(dobj, ((uintptr_t)sMVEndingFiles[0] + (intptr_t)&D_NF_0000C884), 300.0F);
    func_8000DF34(gobj);
}

// 0x80131F24
void mvEndingMakeFighter(s32 ft_kind)
{
    GObj *fighter_gobj;
    ftCreateDesc player_spawn = dFTDefaultFighterDesc;

    player_spawn.ft_kind = ft_kind;

    player_spawn.pos.x = -1077.804F;
    player_spawn.pos.y = 4038.864F;

    player_spawn.costume = sMVEndingFighterDesc.costume;
    player_spawn.shade = sMVEndingFighterDesc.shade;

    player_spawn.anim_heap = sMVEndingFighterAnimHeap;

    player_spawn.pos.z = -3688.5298F;

    sMVEndingFighterGObj = fighter_gobj = ftManager_MakeFighter(&player_spawn);

    func_ovl1_803905CC(fighter_gobj, 0x10009);
}

// 0x80131FE8
void mvEndingRoomFadeInProcRender(GObj *gobj)
{
    if (sMVEndingRoomTimer >= 540)
    {
        sMVEndingRoomFadeInAlpha = 0xFF;
    }
    if ((sMVEndingRoomTimer >= 70) && (sMVEndingRoomTimer < 540))
    {
        if (sMVEndingRoomFadeInAlpha > 0)
        {
            sMVEndingRoomFadeInAlpha -= 7;

            if (sMVEndingRoomFadeInAlpha < 0)
            {
                sMVEndingRoomFadeInAlpha = 0x00;
            }
        }
    }
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x00, 0x00, 0x00, sMVEndingRoomFadeInAlpha);
    gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80132144
void mvEndingMakeRoomFadeIn(void)
{
    GObj *gobj;

    sMVEndingRoomFadeInAlpha = 0xFF;

    sMVEndingRoomFadeInGObj = gobj = omMakeGObjCommon(0, NULL, 0x12, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gobj, mvEndingRoomFadeInProcRender, 26, GOBJ_DLLINKORDER_DEFAULT, -1);
}

// 0x801321A4
void mvEndingMakeRoomFadeInCamera(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_ovl0_800CD2CC, 0x3C, CAMERA_MASK_DLLINK(26), -1, 0, 1, 0, 1, 0));
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132244
void mvEndingRoomLightProcRender(GObj *gobj)
{
    if ((sMVEndingRoomTimer >= 340) && (sMVEndingRoomLightAlpha < 220.0F))
    {
        sMVEndingRoomLightAlpha += 1.1F;

        if (sMVEndingRoomLightAlpha > 220.0F)
        {
            sMVEndingRoomLightAlpha = 220.0F;
        }
    }
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0xFF, (u8)sMVEndingRoomLightAlpha);
    gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8013243C
void mvEndingMakeRoomLight(void)
{
    GObj *gobj;

    sMVEndingRoomLightAlpha = 0.0F;

    sMVEndingRoomLightGObj = gobj = omMakeGObjCommon(0, NULL, 0x15, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gobj, mvEndingRoomLightProcRender, 30, GOBJ_DLLINKORDER_DEFAULT, -1);
}

// 0x8013249C
void mvEndingMakeRoomLightCamera(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_ovl0_800CD2CC, 0x1E, CAMERA_MASK_DLLINK(30), -1, 0, 1, 0, 1, 0));
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013253C
void func_ovl54_8013253C(void)
{
    omEjectGObjCommon(D_ovl54_80132BE0);
    omEjectGObjCommon(D_ovl54_80132BE8);
    omEjectGObjCommon(D_ovl54_80132BEC);
    omEjectGObjCommon(D_ovl54_80132BF0);
    omEjectGObjCommon(D_ovl54_80132BF4);
}

// 0x80132590
void func_ovl54_80132590(GObj *gobj)
{
    Camera *cam = CameraGetStruct(gobj);

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->projection.persp.near = 128.0F;
    cam->projection.persp.far = 16384.0F;

    func_8000FA3C(cam, ((uintptr_t)sMVEndingFiles[1] + (intptr_t)&D_NF_00000000), 0.0F);
    omAddGObjCommonProc(gobj, func_80010580, 1, 1);
}

// 0x80132630
void func_ovl54_80132630(void)
{
    GObj *gobj;

    D_ovl54_80132BD0 = gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_80017EC0, 0x50, CAMERA_MASK_DLLINK(29), -1, 0, 1, 0, 1, 0);

    omAddOMMtxForCamera(CameraGetStruct(gobj), 3, 0);
    omAddOMMtxForCamera(CameraGetStruct(gobj), 8, 0);
    func_ovl54_80132590(gobj);

    CameraGetStruct(gobj)->flags |= 4;

    D_ovl54_80132BD4 = gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_80017EC0, 0x28, CAMERA_MASK_DLLINK(9), -1, 1, 1, 0, 1, 0);

    func_ovl54_80132590(gobj);

    CameraGetStruct(gobj)->flags |= 4;
}

// 0x80132774
void mvEndingInitVars(void)
{
    sMVEndingRoomTimer = 0;

    sMVEndingFighterDesc.ft_kind = D_800A4B18.player_block[gSceneData.spgame_player].character_kind;
    sMVEndingFighterDesc.costume = D_800A4B18.player_block[gSceneData.spgame_player].costume_index;
    sMVEndingFighterDesc.shade = D_800A4B18.player_block[gSceneData.spgame_player].shade_index;
}

// 0x801327C8
void mvEndingActorProcUpdate(GObj *gobj)
{
    sMVEndingRoomTimer++;

    if (sMVEndingRoomTimer >= 10)
    {
        if (D_ovl54_80132C14 != 0)
        {
            D_ovl54_80132C14--;
        }
        if ((func_ovl1_80390A04(-15, 15) != 0) && (func_ovl1_80390AC0(-15, 15) != 0))
        {
            D_ovl54_80132C14 = 0;
        }
        if (sMVEndingRoomTimer == 340)
        {
            mvEndingMakeRoomLight();
        }
        if (sMVEndingRoomTimer == 540)
        {
            func_ovl54_8013253C();
            func_ovl2_800D78E8(sMVEndingFighterGObj);
            omEjectGObjCommon(sMVEndingRoomLightGObj);
            func_800269C0(0x14);
        }
        if (sMVEndingRoomTimer == 660)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = scMajor_Kind_Credits;

            func_80005C74();
        }
    }
}

// 0x801328D0
void mvEndingInitAll(void)
{
    s32 unused;
    rdSetup rldm_setup;

    rldm_setup.tableRomAddr = &D_NF_001AC870;
    rldm_setup.tableFileCount = &D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = sMVEndingStatusBuf;
    rldm_setup.statusBufSize = ARRAY_COUNT(sMVEndingStatusBuf);
    rldm_setup.forceBuf = sMVEndingForceBuf;
    rldm_setup.forceBufSize = ARRAY_COUNT(sMVEndingForceBuf);

    rdManagerInitSetup(&rldm_setup);
    rdManagerLoadFiles(dMVEndingFileIDs, ARRAY_COUNT(dMVEndingFileIDs), sMVEndingFiles, gsMemoryAlloc(rdManagerGetAllocSize(dMVEndingFileIDs, ARRAY_COUNT(dMVEndingFileIDs)), 0x10));
    omMakeGObjCommon(0, mvEndingActorProcUpdate, 0, GOBJ_LINKORDER_DEFAULT);
    func_8000B9FC(0, 0x80000000, 0x64, 3, -1);
    func_ovl2_80115890();
    mvEndingInitVars();
    efManager_AllocUserData();
    ftManager_AllocFighterData(1, 1);
    ftManager_SetFileDataKind(sMVEndingFighterDesc.ft_kind);

    sMVEndingFighterAnimHeap = gsMemoryAlloc(gFTAnimHeapSize, 0x10);

    func_ovl54_80132630();
    mvEndingMakeRoomFadeInCamera();
    mvEndingMakeRoomLightCamera();
    func_ovl54_80131B58();
    func_ovl54_80131C1C();
    func_ovl54_80131C94();
    func_ovl54_80131DD4();
    func_ovl54_80131D34();
    func_ovl54_80131E74();
    mvEndingMakeFighter(sMVEndingFighterDesc.ft_kind);
    mvEndingMakeRoomFadeIn();
    func_ovl1_803904E0(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);
    func_80020AB4(0, 0x26);
}

// 0x80132A78
void mvEndingStartScene(void)
{
    D_ovl54_80132B08.unk_scdatabounds_0xC = ((uintptr_t)&D_NF_800A5240 - 0x1900);

    func_80007024(&D_ovl54_80132B08);

    D_ovl54_80132B24.arena_size = ((uintptr_t)&func_ovl1_803903E0 - (uintptr_t)&lMVEndingArenaLo);

    gsGTLSceneInit(&D_ovl54_80132B24);
}
