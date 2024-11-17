#include <ft/fighter.h>
#include <sc/scene.h>
#include <sys/video.h>

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

extern uintptr_t D_NF_0000000A;                                 // 0x0000000A

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80132480
s32 sSC1PChallengerPad0x80132480[2];

// 0x80132488
s32 sSC1PChallengerFighterKind;

// 0x8013248C
void *sSC1PChallengerFigatreeHeap;

// 0x80132490
f32 sSC1PChallengerUnk0x80132490;

// 0x80132494
s32 sSC1PChallengerUnk0x80132494;

// 0x80132498
s32 sSC1PChallengerTotalTimeTics;

// 0x8013249C
s32 sSC1PChallengerPad0x8013249C;

// 0x801324A0
LBFileNode sSC1PChallengerForceStatusBuffer[7];

// 0x801324D8
LBFileNode sSC1PChallengerStatusBuffer[100];

// 0x801327F8
void *sSC1PChallengerFiles[1];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80132370
u32 dSC1PChallengerFileIDs[/* */] = { &D_NF_0000000A };

// 0x80132378
Lights1 dSC1PChallengerLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x80132390
Gfx dSC1PChallengerDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dSC1PChallengerLights1),
    gsSPEndDisplayList()
};

// 0x801323B8
SYVideoSetup dSC1PChallengerVideoSetup = SYVIDEO_SETUP_DEFAULT();

// 0x801323D4
SYTaskmanSetup dSC1PChallengerTaskmanSetup =
{
    // Task Manager Buffer Setup
    {
        0,                          // ???
        gcRunAll,              		// Update function
        gcDrawAll,                  // Frame draw function
        &ovl23_BSS_END,             // Allocatable memory pool start
        0,                          // Allocatable memory pool size
        1,                          // ???
        2,                          // Number of contexts?
        sizeof(Gfx) * 2500,         // Display List Buffer 0 Size
        sizeof(Gfx) * 128,          // Display List Buffer 1 Size
        0,                          // Display List Buffer 2 Size
        0,                          // Display List Buffer 3 Size
        0x8000,                     // Graphics Heap Size
        2,                          // ???
        0xC000,                     // RDP Output Buffer Size
        sc1PChallengerFuncLights,   // Pre-render function
        syControllerFuncRead,       // Controller I/O function
    },

    0,                              // Number of GObjThreads
    sizeof(u64) * 192,              // Thread stack size
    0,                              // Number of thread stacks
    0,                              // ???
    0,                              // Number of GObjProcesses
    0,                              // Number of GObjs
    sizeof(GObj),                   // GObj size
    0,                              // Number of XObjs
    dLBCommonFuncMatrixList,        // Matrix function list
    NULL,                           // DObjVec eject function
    0,                              // Number of AObjs
    0,                              // Number of MObjs
    0,                              // Number of DObjs
    sizeof(DObj),                   // DObj size
    0,                              // Number of SObjs
    sizeof(SObj),                   // SObj size
    0,                              // Number of Cameras
    sizeof(CObj),                 	// CObj size
    
    sc1PChallengerFuncStart         // Task start function
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void sc1PChallengerFuncLights(Gfx **dls)
{
    gSPDisplayList(dls[0]++, dSC1PChallengerDisplayList);
}

// 0x80131B24
void sc1PChallengerDecalsFuncDisplay(GObj *gobj)
{
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x00, 0x00, 0x3B, 0xFF);
    gDPSetCombineMode(gSYTaskmanDLHeads[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gSYTaskmanDLHeads[0]++, 207, 92, 287, 216);
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    
    lbCommonClearExternSpriteParams();
    lbCommonDrawSObjAttr(gobj);
}

// 0x80131C40
void sc1PChallengerMakeDecals(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = gcMakeGObjSPAfter(0, NULL, 2, GOBJ_PRIORITY_DEFAULT);
    gcAddGObjDisplay(gobj, sc1PChallengerDecalsFuncDisplay, 0, GOBJ_PRIORITY_DEFAULT, ~0);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sSC1PChallengerFiles[0], &lSC1PChallengerDecalExclaimSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = 139.0F;
    sobj->pos.y = 22.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sSC1PChallengerFiles[0], &lSC1PChallengerTextWarningSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0xD5;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x27;
    
    sobj->pos.x = 100.0F;
    sobj->pos.y = 63.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sSC1PChallengerFiles[0], &lSC1PChallengerTextChallengerSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xA8;
    sobj->sprite.blue = 0x00;
    
    sobj->pos.x = 55.0F;
    sobj->pos.y = 127.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sSC1PChallengerFiles[0], &lSC1PChallengerTextApproachingSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xA8;
    sobj->sprite.blue = 0x00;
    
    sobj->pos.x = 55.0F;
    sobj->pos.y = 149.0F;
}

// 0x80131DF4
void sc1PChallengerFighterProcUpdate(GObj *fighter_gobj)
{
    DObjGetStruct(fighter_gobj)->rotate.vec.f.y += F_CST_DTOR32(2.0F);

    if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > F_CST_DTOR32(360.0F))
    {
        DObjGetStruct(fighter_gobj)->rotate.vec.f.y -= F_CST_DTOR32(360.0F);
    }
}

// 0x80131E3C
void sc1PChallengerMakeFighter(s32 fkind)
{
    GObj *fighter_gobj;
    FTCreateDesc ft_desc = dFTManagerDefaultFighterDesc;

    ft_desc.fkind = fkind;
    ft_desc.costume = ftParamGetCostumeCommonID(fkind, 0);
    ft_desc.player = 0;
    ft_desc.figatree_heap = sSC1PChallengerFigatreeHeap;
    
    fighter_gobj = ftManagerMakeFighter(&ft_desc);
    
    gcAddGObjProcess(fighter_gobj, sc1PChallengerFighterProcUpdate, nGCProcessKindFunc, 1);
    
    DObjGetStruct(fighter_gobj)->translate.vec.f.x = 610.0F;
    DObjGetStruct(fighter_gobj)->translate.vec.f.y = -550.0F;
    DObjGetStruct(fighter_gobj)->translate.vec.f.z = 0.0F;
    
    DObjGetStruct(fighter_gobj)->scale.vec.f.x = dSCSubsysFighterScales[fkind];
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = dSCSubsysFighterScales[fkind];
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = dSCSubsysFighterScales[fkind];
    
    ftParamCheckSetFighterColAnimID(fighter_gobj, 0x50, 0);
}

// 0x80131F58
void sc1PChallengerMakeFighterCamera(void)
{
    CObj *cobj = CObjGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_PRIORITY_DEFAULT,
            func_80017EC0,
            40,
            COBJ_MASK_DLLINK(18) | COBJ_MASK_DLLINK(15) |
            COBJ_MASK_DLLINK(10) | COBJ_MASK_DLLINK(9),
            -1,
            TRUE,
            nGCProcessKindFunc,
            NULL,
            1,
            FALSE
        )
    );
    syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    
    cobj->vec.eye.x = 0.0F;
    cobj->vec.eye.y = 0.0F;
    cobj->vec.eye.z = 3000.0F;
    
    cobj->vec.at.x = 0.0F;
    cobj->vec.at.y = 0.0F;
    cobj->vec.at.z = 0.0F;
    
    cobj->vec.up.x = 0.0F;
    cobj->vec.up.y = 1.0F;
    cobj->vec.up.z = 0.0F;
}

// 0x80132040
void sc1PChallengerMakeDecalsCamera(void)
{
    CObj *cobj = CObjGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_PRIORITY_DEFAULT,
            lbCommonDrawSprite,
            70,
            COBJ_MASK_DLLINK(0),
            -1,
            FALSE,
            nGCProcessKindFunc,
            NULL,
            1,
            FALSE
        )
    );
    syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801320E0
void sc1PChallengerInitVars(void)
{
    sSC1PChallengerFighterKind = gSCManagerSceneData.challenger_fkind;
    
    sSC1PChallengerUnk0x80132490 = 0.0F;
    
    sSC1PChallengerUnk0x80132494 = 0;
    sSC1PChallengerTotalTimeTics = 0;
}

// 0x80132110 - unused?
void func_ovl23_80132110(void)
{
    return;
}

// 0x80132118
void sc1PChallengerFuncRun(GObj *gobj)
{
    sSC1PChallengerTotalTimeTics++;
    
    if (sSC1PChallengerTotalTimeTics >= 120)
    {
        if (sSC1PChallengerUnk0x80132494 != 0)
        {
            sSC1PChallengerUnk0x80132494--;
        }
        if ((scSubsysControllerGetPlayerStickInRangeLR(-30, 30) != FALSE) && (scSubsysControllerGetPlayerStickInRangeUD(-30, 30) != FALSE))
        {
            sSC1PChallengerUnk0x80132494 = 0;
        }
        if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
        {
            gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
            gSCManagerSceneData.scene_curr = nSCKindTitle;
            
            func_ovl23_80132110();
            syTaskmanSetLoadScene();
        }
    }
}

// 0x801321C0
void sc1PChallengerFuncStart(void)
{
    LBRelocSetup rl_setup;
    s32 unused;

    rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
    rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
    rl_setup.file_heap = NULL;
    rl_setup.file_heap_size = 0;
    rl_setup.status_buffer = sSC1PChallengerStatusBuffer;
    rl_setup.status_buffer_size = ARRAY_COUNT(sSC1PChallengerStatusBuffer);
    rl_setup.force_status_buffer = sSC1PChallengerForceStatusBuffer;
    rl_setup.force_status_buffer_size = ARRAY_COUNT(sSC1PChallengerForceStatusBuffer);
    
    lbRelocInitSetup(&rl_setup);
    lbRelocLoadFilesExtern
    (
        dSC1PChallengerFileIDs,
        ARRAY_COUNT(dSC1PChallengerFileIDs),
        sSC1PChallengerFiles,
        syTaskmanMalloc
        (
            lbRelocGetAllocSize
            (
                dSC1PChallengerFileIDs,
                ARRAY_COUNT(dSC1PChallengerFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, sc1PChallengerFuncRun, 0, GOBJ_PRIORITY_DEFAULT);
    gcMakeDefaultCameraGObj(0, GOBJ_PRIORITY_DEFAULT, 100, COBJ_FLAG_FILLCOLOR | COBJ_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
    sc1PChallengerInitVars();
    efParticleInitAll();
    efManagerInitEffects();
    ftManagerAllocFighter(FTDATA_FLAG_SUBMOTION, 1);
    ftManagerSetupFilesAllKind(sSC1PChallengerFighterKind);
    
    sSC1PChallengerFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);
    
    sc1PChallengerMakeDecalsCamera();
    sc1PChallengerMakeFighterCamera();
    sc1PChallengerMakeDecals();
    sc1PChallengerMakeFighter(sSC1PChallengerFighterKind);
    
    auPlaySong(0, nSYAudioBGM1PChallenger);
    func_800269C0_275C0(nSYAudioFGMDeadUpStar);
}

// 0x80132310
void sc1PChallengerStartScene(void)
{
    dSC1PChallengerVideoSetup.zbuffer = syVideoGetZBuffer(6400);
    syVideoInit(&dSC1PChallengerVideoSetup);
    
    dSC1PChallengerTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl23_BSS_END);
    syTaskmanRun(&dSC1PChallengerTaskmanSetup);
}
