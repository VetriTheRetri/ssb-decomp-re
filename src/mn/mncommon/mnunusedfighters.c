#include <mn/menu.h>
#include <sc/scene.h>
#include <sys/thread6.h>
#include <sys/video.h>

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

extern gsController gSysController;

extern uintptr_t D_NF_00000011;

extern intptr_t lMNFightersMarioNameSprite;             // 0x00001838
extern intptr_t lMNFightersLuigiNameSprite;             // 0x00001B18
extern intptr_t lMNFightersSamusNameSprite;             // 0x00002358
extern intptr_t lMNFightersPikachuNameSprite;           // 0x000032F8
extern intptr_t lMNFightersSymbolInfiniteSprite;        // 0x00003EF0
extern intptr_t D_NF_00004728;                          // 0x00004728
extern intptr_t lMNFightersOptionTimeSprite;            // 0x000048B0
extern intptr_t D_NF_00006978;                          // 0x00006978
extern intptr_t D_NF_00008BC8;                          // 0x00008BC8
extern intptr_t D_NF_0000AE18;                          // 0x0000AE18
extern intptr_t D_NF_0000D068;                          // 0x0000D068
extern intptr_t D_NF_0000F2B8;                          // 0x0000F2B8
extern intptr_t D_NF_00011508;                          // 0x00011508
extern intptr_t D_NF_00013758;                          // 0x00013758
extern intptr_t D_NF_000159A8;                          // 0x000159A8

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x800D7110
s32 sMNUnusedFightersPad0x800D7110[2];

// 0x800D7118
LBFileNode sMNUnusedFightersStatusBuffer[10];

// 0x800D7168
void *sMNUnusedFightersFiles[1];

// 0x800D716C
f32 sMNUnusedFightersTimePositionX;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x800D7010
u32 dMNUnusedFightersFileIDs[/* */] = { &D_NF_00000011 };

// 0x800D7018
Lights1 dMNUnusedFightersLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x14);

// 0x800D7030
Gfx dMNUnusedFightersDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMNUnusedFightersLights1),
    gsSPEndDisplayList()
};

// 0x800D7058
SYVideoSetup dMNUnusedFightersVideoSetup = SYVIDEO_DEFINE_DEFAULT();

// 0x800D7074
scRuntimeInfo dMNUnusedFightersTaskmanSetup =
{
    0x00000000,
    gcRunAll,
    gcDrawAll,
    &ovl16_BSS_END,
    0,
    1,
    1,
    0x1770,
    0x200,
    0,
    0,
    0x400,
    0x20000,
    0x1000,
    mnUnusedFightersFuncLights,
    update_contdata,
    0x20,
    0x100,
    0x20,
    0,
    0x20,
    0x20,
    0x88,
    0x100,
    0,
    0,
    0x80,
    0x8,
    0x40,
    0x88,
    0x20,
    0x6C,
    0x8,
    0x90,
    mnUnusedFightersFuncStart
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800D6490
void mnUnusedFightersFuncLights(Gfx **dls)
{
    gSPDisplayList(dls[0]++, dMNUnusedFightersDisplayList);
}

// 0x800D64B4
void func_ovl16_800D64B4(void)
{
    return;
}

// 0x800D64BC
void func_ovl16_800D64BC(void)
{
    return;
}

// 0x800D64C4
void mnUnusedFightersTimeProcUpdate(GObj *gobj)
{
    if (gSysController.button_hold & L_JPAD)
    {
        sMNUnusedFightersTimePositionX -= 0.1F;
    }
    if (gSysController.button_hold & R_JPAD)
    {
        sMNUnusedFightersTimePositionX += 0.1F;
    }
    if (gSysController.button_hold & A_BUTTON)
    {
        SObjGetStruct(gobj)->pos.x = (s32) sMNUnusedFightersTimePositionX;
    }
    else SObjGetStruct(gobj)->pos.x = sMNUnusedFightersTimePositionX;
}

// 0x800D655C
void mnUnusedFightersFuncRun(GObj *gobj)
{
    if (gSysController.button_tap & START_BUTTON)
    {
        gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
        gSCManagerSceneData.scene_curr = nSCKindTitle;

        syTaskmanSetLoadScene();
    }
    if (gSysController.button_tap & Z_TRIG)
    {
        syErrorMakeControllerCamera(0x1F, 0x80000000, 0);
    }
}

// 0x800D65C4
void mnUnusedFightersFuncStart(void)
{
    s32 unused[2];
    LBRelocSetup rl_setup;
    GObj *gobj;
    CObj *cobj;

    rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
    rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
    rl_setup.file_heap = NULL;
    rl_setup.file_heap_size = 0;
    rl_setup.status_buffer = sMNUnusedFightersStatusBuffer;
    rl_setup.status_buffer_size = ARRAY_COUNT(sMNUnusedFightersStatusBuffer);
    rl_setup.force_status_buffer = NULL;
    rl_setup.force_status_buffer_size = 0;
    
    lbRelocInitSetup(&rl_setup);
    lbRelocLoadFilesExtern
    (
        dMNUnusedFightersFileIDs,
        ARRAY_COUNT(dMNUnusedFightersFileIDs),
        sMNUnusedFightersFiles,
        syTaskmanMalloc
        (
            lbRelocGetAllocSize
            (
                dMNUnusedFightersFileIDs,
                ARRAY_COUNT(dMNUnusedFightersFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mnUnusedFightersFuncRun, 0, GOBJ_PRIORITY_DEFAULT);
    gcMakeDefaultCameraGObj(1, GOBJ_PRIORITY_DEFAULT, 100, COBJ_FLAG_FILLCOLOR | COBJ_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
    
    cobj = CObjGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_PRIORITY_DEFAULT,
            lbCommonScissorSpriteCamera,
            50,
            COBJ_MASK_DLLINK(1),
            -1,
            FALSE,
            nGCProcessKindFunc,
            NULL,
            1,
            FALSE
        )   
    );
    
    syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    
    cobj = CObjGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_PRIORITY_DEFAULT,
            func_80017DBC,
            30,
            COBJ_MASK_DLLINK(2),
            -1,
            TRUE,
            nGCProcessKindFunc,
            NULL,
            1,
            FALSE
        )
    );
        
    cobj->vec.eye.x = 0.0F;
    cobj->vec.eye.y = 0.0F;
    cobj->vec.eye.z = 3000.0F;
    
    cobj->vec.at.x = 0.0F;
    cobj->vec.at.y = 0.0F;
    cobj->vec.at.z = 0.0F;
    
    cobj->vec.up.x = 0.0F;
    cobj->vec.up.y = 1.0F;
    cobj->vec.up.z = 0.0F;
    
    gobj = gcMakeSpriteGObj
    (
        0,
        NULL,
        0,
        GOBJ_PRIORITY_DEFAULT,
        lbCommonDrawSObjAttr,
        1,
        GOBJ_PRIORITY_DEFAULT,
        -1,
        lbRelocGetFileData(Sprite*, sMNUnusedFightersFiles[0], &D_NF_00004728),
        nGCProcessKindFunc,
        NULL,
        1
    );

    SObjGetStruct(gobj)->pos.x = 25.0F;
    SObjGetStruct(gobj)->pos.y = 36.0F;
    
    gobj = gcMakeSpriteGObj
    (
        0,
        NULL,
        0,
        GOBJ_PRIORITY_DEFAULT,
        lbCommonDrawSObjAttr,
        1,
        GOBJ_PRIORITY_DEFAULT,
        -1,
        lbRelocGetFileData(Sprite*, sMNUnusedFightersFiles[0], &D_NF_00006978),
        nGCProcessKindFunc,
        NULL,
        1
    );
    
    SObjGetStruct(gobj)->pos.x = 70.0F;
    SObjGetStruct(gobj)->pos.y = 36.0F;
    
    gobj = gcMakeSpriteGObj
    (
        0,
        NULL,
        0,
        GOBJ_PRIORITY_DEFAULT,
        lbCommonDrawSObjAttr,
        1,
        GOBJ_PRIORITY_DEFAULT,
        -1,
        lbRelocGetFileData(Sprite*, sMNUnusedFightersFiles[0], &D_NF_00008BC8),
        nGCProcessKindFunc,
        NULL,
        1
    );
    
    SObjGetStruct(gobj)->pos.x = 115.0F;
    SObjGetStruct(gobj)->pos.y = 36.0F;
    
    gobj = gcMakeSpriteGObj
    (
        0,
        NULL,
        0,
        GOBJ_PRIORITY_DEFAULT,
        lbCommonDrawSObjAttr,
        1,
        GOBJ_PRIORITY_DEFAULT,
        -1,
        lbRelocGetFileData(Sprite*, sMNUnusedFightersFiles[0], &D_NF_0000AE18),
        nGCProcessKindFunc,
        NULL,
        1
    );
    
    SObjGetStruct(gobj)->pos.x = 160.0F;
    SObjGetStruct(gobj)->pos.y = 36.0F;
    
    gobj = gcMakeSpriteGObj
    (
        0,
        NULL,
        0,
        GOBJ_PRIORITY_DEFAULT,
        lbCommonDrawSObjAttr,
        1,
        GOBJ_PRIORITY_DEFAULT,
        -1,
        lbRelocGetFileData(Sprite*, sMNUnusedFightersFiles[0], &D_NF_0000D068),
        nGCProcessKindFunc,
        NULL,
        1
    );
    
    SObjGetStruct(gobj)->pos.x = 205.0F;
    SObjGetStruct(gobj)->pos.y = 36.0F;
    
    gobj = gcMakeSpriteGObj
    (
        0,
        NULL,
        0,
        GOBJ_PRIORITY_DEFAULT,
        lbCommonDrawSObjAttr,
        1,
        GOBJ_PRIORITY_DEFAULT,
        -1,
        lbRelocGetFileData(Sprite*, sMNUnusedFightersFiles[0], &D_NF_0000F2B8),
        nGCProcessKindFunc,
        NULL,
        1
    );
    
    SObjGetStruct(gobj)->pos.x = 250.0F;
    SObjGetStruct(gobj)->pos.y = 36.0F;
    
    gobj = gcMakeSpriteGObj
    (
        0,
        NULL,
        0,
        GOBJ_PRIORITY_DEFAULT,
        lbCommonDrawSObjAttr,
        1,
        GOBJ_PRIORITY_DEFAULT,
        -1,
        lbRelocGetFileData(Sprite*, sMNUnusedFightersFiles[0], &D_NF_00011508),
        nGCProcessKindFunc,
        NULL,
        1
    );
    
    SObjGetStruct(gobj)->pos.x = 25.0F;
    SObjGetStruct(gobj)->pos.y = 79.0F;
    
    gobj = gcMakeSpriteGObj
    (
        0,
        NULL,
        0,
        GOBJ_PRIORITY_DEFAULT,
        lbCommonDrawSObjAttr,
        1,
        GOBJ_PRIORITY_DEFAULT,
        -1,
        lbRelocGetFileData(Sprite*, sMNUnusedFightersFiles[0], &D_NF_00013758),
        nGCProcessKindFunc,
        NULL,
        1
    );
    
    SObjGetStruct(gobj)->pos.x = 70.0F;
    SObjGetStruct(gobj)->pos.y = 79.0F;
    
    gobj = gcMakeSpriteGObj
    (
        0,
        NULL,
        0,
        GOBJ_PRIORITY_DEFAULT,
        lbCommonDrawSObjAttr,
        1,
        GOBJ_PRIORITY_DEFAULT,
        -1,
        lbRelocGetFileData(Sprite*, sMNUnusedFightersFiles[0], &D_NF_000159A8),
        nGCProcessKindFunc,
        NULL,
        1
    );
    
    SObjGetStruct(gobj)->pos.x = 115.0F;
    SObjGetStruct(gobj)->pos.y = 79.0F;
    
    gobj = gcMakeSpriteGObj
    (
        0,
        NULL,
        0,
        GOBJ_PRIORITY_DEFAULT,
        lbCommonDrawSObjAttr,
        1,
        GOBJ_PRIORITY_DEFAULT,
        -1,
        lbRelocGetFileData(Sprite*, sMNUnusedFightersFiles[0], &lMNFightersMarioNameSprite),
        nGCProcessKindFunc,
        NULL,
        1
    );
    
    SObjGetStruct(gobj)->pos.x = 27.0F;
    SObjGetStruct(gobj)->pos.y = 216.0F;

    SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;
    
    gobj = gcMakeSpriteGObj
    (
        0,
        NULL,
        0,
        GOBJ_PRIORITY_DEFAULT,
        lbCommonDrawSObjAttr,
        1,
        GOBJ_PRIORITY_DEFAULT,
        -1,
        lbRelocGetFileData(Sprite*, sMNUnusedFightersFiles[0], &lMNFightersSamusNameSprite),
        nGCProcessKindFunc,
        NULL,
        1
    );

    SObjGetStruct(gobj)->pos.x = 95.0F;
    SObjGetStruct(gobj)->pos.y = 216.0F;

    SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;
    
    gobj = gcMakeSpriteGObj
    (
        0,
        NULL,
        0,
        GOBJ_PRIORITY_DEFAULT,
        lbCommonDrawSObjAttr,
        1,
        GOBJ_PRIORITY_DEFAULT,
        -1,
        lbRelocGetFileData(Sprite*, sMNUnusedFightersFiles[0], &lMNFightersPikachuNameSprite),
        nGCProcessKindFunc,
        NULL,
        1
    );
    
    SObjGetStruct(gobj)->pos.x = 163.0F;
    SObjGetStruct(gobj)->pos.y = 216.0F;

    SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;
    
    gobj = gcMakeSpriteGObj
    (
        0,
        NULL,
        0,
        GOBJ_PRIORITY_DEFAULT,
        lbCommonDrawSObjAttr,
        1,
        GOBJ_PRIORITY_DEFAULT,
        -1,
        lbRelocGetFileData(Sprite*, sMNUnusedFightersFiles[0], &lMNFightersLuigiNameSprite),
        nGCProcessKindFunc,
        NULL,
        1
    );

    SObjGetStruct(gobj)->pos.x = 231.0F;
    SObjGetStruct(gobj)->pos.y = 216.0F;

    SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;
    
    gobj = gcMakeSpriteGObj
    (
        0,
        NULL,
        0,
        GOBJ_PRIORITY_DEFAULT,
        lbCommonDrawSObjAttr,
        1,
        GOBJ_PRIORITY_DEFAULT,
        -1,
        lbRelocGetFileData(Sprite*, sMNUnusedFightersFiles[0], &lMNFightersOptionTimeSprite),
        nGCProcessKindFunc,
        mnUnusedFightersTimeProcUpdate,
        1
    );
    
    SObjGetStruct(gobj)->pos.x = sMNUnusedFightersTimePositionX = 145.0F;
    SObjGetStruct(gobj)->pos.y = 20.0F;
    
    SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
    
    gobj = gcMakeSpriteGObj
    (
        0,
        NULL,
        0,
        GOBJ_PRIORITY_DEFAULT,
        lbCommonDrawSObjAttr,
        1,
        GOBJ_PRIORITY_DEFAULT,
        -1,
        lbRelocGetFileData(Sprite*, sMNUnusedFightersFiles[0], &lMNFightersSymbolInfiniteSprite),
        nGCProcessKindFunc,
        NULL,
        1
    );
    
    SObjGetStruct(gobj)->pos.x = 182.0F;
    SObjGetStruct(gobj)->pos.y = 23.0F;
    
    SObjGetStruct(gobj)->envcolor.r = 0x32;
    SObjGetStruct(gobj)->envcolor.g = 0x1C;
    SObjGetStruct(gobj)->envcolor.b = 0x0E;
    
    SObjGetStruct(gobj)->sprite.red = 0xFF;
    SObjGetStruct(gobj)->sprite.green = 0xFF;
    SObjGetStruct(gobj)->sprite.blue = 0xFF;
    
    SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 0x800D6FB0
void mnUnusedFightersStartScene(void)
{
    dMNUnusedFightersVideoSetup.zbuffer = syVideoGetZBuffer(6400);
    syVideoInit(&dMNUnusedFightersVideoSetup);

    dMNUnusedFightersTaskmanSetup.arena_size = (size_t) ((uintptr_t)&gSCSubsysFramebuffer0 - (uintptr_t)&ovl16_BSS_END);
    syTaskmanRun(&dMNUnusedFightersTaskmanSetup);
}
