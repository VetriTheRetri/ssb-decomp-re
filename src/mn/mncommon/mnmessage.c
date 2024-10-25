#include <ft/fighter.h>
#include <mn/menu.h>
#include <sc/scene.h>
#include <sys/video.h>

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

extern uintptr_t D_NF_00000000;                             // 0x00000000
extern uintptr_t D_NF_00000009;                             // 0x00000009

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80132650
s32 sMNMessagePadd0x80132650[2];

// 0x80132658
s32 sMNMessageUnlockID;

// 0x8013265C
s32 sMNMessageQueueID;

// 0x80132660
s32 sMNMessageUnk0x80132660;

// 0x80132664
s32 sMNMessageTotalTimeTics;

// 0x80132668
lbFileNode sMNMessageStatusBuffer[100];

// 0x80132988
void *sMNMessageFiles[2];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80132500
u32 dMNMessageFileIDs[/* */] = { &D_NF_00000000, &D_NF_00000009 };

// 0x80132508
Lights1 dMNMessageLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x80132520
Gfx dMNMessageDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMNMessageLights1),
    gsSPEndDisplayList()
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mnMessageFuncLights(Gfx **dls)
{
    gSPDisplayList(dls[0]++, dMNMessageDisplayList);
}

// 0x80131B24
void mnMessageMakeWallpaper(void)
{
    GObj *gobj;
    SObj *sobj;
    
    gobj = gcMakeGObjSPAfter(0, NULL, 2, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNMessageFiles[0], &lMNCommonWallpaperSprite));
    
    sobj->pos.x = 10.0F;
    sobj->pos.y = 10.0F;
}

// 0x80131BA4
void mnMessageTintFuncDisplay(GObj *gobj)
{
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x00, 0x00, 0xFF, 0x3F);
    gDPSetCombineMode(gSYTaskmanDLHeads[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gSYTaskmanDLHeads[0]++, 10, 10, 310, 230);
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    
    lbCommonClearExternSpriteParams();
}

// 0x80131CB8
void mnMessageMakeTint(void)
{
    gcAddGObjDisplay(gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT), mnMessageTintFuncDisplay, 2, GOBJ_DLLINKORDER_DEFAULT, -1);
}

// 0x80131D04
void mnMessageMakeExclaim(void)
{
    GObj *gobj;
    SObj *sobj;
    
    gobj = gcMakeGObjSPAfter(0, NULL, 5, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 3, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNMessageFiles[1], &lMNMessageDecalExclaimSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = 140.0F;
    sobj->pos.y = 62.0F;
}

// 0x80131D9C
void mnMessageMakeMessage(s32 message)
{
    GObj *gobj;
    SObj *sobj;
    
    // 0x80132548
    intptr_t message_offsets[/* */] =
    {
        &lMNMessageUnlockLuigiSprite,
        &lMNMessageUnlockNessSprite,
        &lMNMessageUnlockCaptainSprite,
        &lMNMessageUnlockPurinSprite,
        &lMNMessageUnlockInishieSprite,
        &lMNMessageUnlockSoundTestSprite,
        &lMNMessageUnlockItemSwitchSprite
    };

    // 0x80132564
    Vec2i message_pos[/* */] =
    {
        { 85, 114 },
        { 35, 123 },
        { 58, 114 },
        { 44, 114 },
        { 48, 123 },
        { 56, 114 },
        { 54, 114 }
    };

    gobj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNMessageFiles[1], message_offsets[message]));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = message_pos[message].x;
    sobj->pos.y = message_pos[message].y;
}

// 0x80131EE8
void mnMessageMakeTintCamera(void)
{
    CObj *cobj = CObjGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            70,
            COBJ_MASK_DLLINK(2),
            -1,
            FALSE,
            nGCProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80131F88
void mnMessageMakeMessageCamera(void)
{
    CObj *cobj = CObjGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            40,
            COBJ_MASK_DLLINK(1),
            -1,
            FALSE,
            nGCProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132028
void mnMessageMakeWallpaperCamera(void)
{
    CObj *cobj = CObjGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            80,
            COBJ_MASK_DLLINK(0),
            -1,
            FALSE,
            nGCProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801320C8
void mnMessageMakeExclaimCamera(void)
{
    CObj *cobj = CObjGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            60,
            COBJ_MASK_DLLINK(3),
            -1,
            FALSE,
            nGCProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132168
void mnMessageInitVars(void)
{
    sMNMessageUnlockID = gSceneData.unlock_messages[sMNMessageQueueID];
    gSceneData.unlock_messages[sMNMessageQueueID] = nLBBackupUnlockEnumMax;
    
    sMNMessageUnk0x80132660 = 0;
    sMNMessageTotalTimeTics = 0;
}

// 0x801321A4
void mnMessageApplyUnlock(void)
{
    // 0x8013259C
    u8 ft_kinds[/* */] = { nFTKindLuigi, nFTKindNess, nFTKindCaptain, nFTKindPurin };
    
    gSaveData.unlock_mask |= (1 << sMNMessageUnlockID);
    
    switch (sMNMessageUnlockID)
    {
    case nLBBackupUnlockLuigi:
    case nLBBackupUnlockNess:
    case nLBBackupUnlockCaptain:
    case nLBBackupUnlockPurin:
        gSaveData.fighter_mask |= (1 << ft_kinds[sMNMessageUnlockID]);
        gSaveData.characters_ft_kind = ft_kinds[sMNMessageUnlockID];
        break;
    }
    lbBackupWrite();
}

// 0x8013223C
void mnMessageFuncRun(GObj *gobj)
{
    sMNMessageTotalTimeTics++;
    
    if (sMNMessageTotalTimeTics >= 120)
    {
        if (sMNMessageUnk0x80132660 != 0)
        {
            sMNMessageUnk0x80132660--;
        }
        if ((scSubsysControllerGetPlayerStickInRangeLR(-30, 30) != FALSE) && (scSubsysControllerGetPlayerStickInRangeUD(-30, 30) != FALSE))
        {
            sMNMessageUnk0x80132660 = 0;
        }
        if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
        {
            mnMessageApplyUnlock();
            syTaskmanSetLoadScene();
        }
    }
}

// 0x801322D4
void mnMessageFuncStart(void)
{
    lbRelocSetup rl_setup;

    rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
    rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
    rl_setup.file_heap = NULL;
    rl_setup.file_heap_size = 0;
    rl_setup.status_buffer = sMNMessageStatusBuffer;
    rl_setup.status_buffer_size = ARRAY_COUNT(sMNMessageStatusBuffer);
    rl_setup.force_status_buffer = NULL;
    rl_setup.force_status_buffer_size = 0;
    
    lbRelocInitSetup(&rl_setup);
    lbRelocLoadFilesExtern
    (
        dMNMessageFileIDs,
        ARRAY_COUNT(dMNMessageFileIDs),
        sMNMessageFiles,
        syTaskmanMalloc
        (
            lbRelocGetAllocSize
            (
                dMNMessageFileIDs,
                ARRAY_COUNT(dMNMessageFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mnMessageFuncRun, 0, GOBJ_LINKORDER_DEFAULT);
    gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0, GPACK_RGBA8888(0x00, 0x00, 0x00, 0x00));

    mnMessageInitVars();
    mnMessageMakeWallpaperCamera();
    mnMessageMakeMessageCamera();
    mnMessageMakeTintCamera();
    mnMessageMakeExclaimCamera();
    mnMessageMakeWallpaper();
    mnMessageMakeTint();
    mnMessageMakeExclaim();
    mnMessageMakeMessage(sMNMessageUnlockID);

    auPlaySong(0, nSYAudioBGMMessage);
    func_800269C0_275C0(nSYAudioFGMDeadUpStar);
}

// 0x801325A0
syVideoSetup dMNMessageDisplaySetup = SYVIDEO_DEFINE_DEFAULT();

// 0x801325BC
scRuntimeInfo dMNMessageTaskmanSetup =
{
    0x00000000,
    func_8000A5E4,
    func_8000A340,
    &ovl22_BSS_END,
    0,
    1,
    2,
    0x4E20,
    0,
    0,
    0,
    0x8000,
    0x20000,
    0xC000,
    mnMessageFuncLights,
    update_contdata,
    0,
    0x600,
    0,
    0,
    0,
    0,
    0x88,
    0,
    0,
    0,
    0,
    0,
    0,
    0x88,
    0,
    0x6C,
    0,
    0x90,
    mnMessageFuncStart
};

// 0x801323F8
void mnMessageStartScene(void)
{
    dMNMessageDisplaySetup.zbuffer = syVideoGetZBuffer(6400);
    
    syVideoInit(&dMNMessageDisplaySetup);
    
    dMNMessageTaskmanSetup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl22_BSS_END);

    for
    (
        sMNMessageQueueID = 0;
        sMNMessageQueueID < nLBBackupUnlockEnumMax && gSceneData.unlock_messages[sMNMessageQueueID] != nLBBackupUnlockEnumMax;
        sMNMessageQueueID++
    )
    {
        syTaskmanInit(&dMNMessageTaskmanSetup);
    }
    if (gSceneData.scene_previous == nSCKindVSResults)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = nSCKindVSFighters;
    }
    else
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = nSCKindN64;
    }
}
