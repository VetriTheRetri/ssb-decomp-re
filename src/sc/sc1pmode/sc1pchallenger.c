#include <ft/fighter.h>
#include <sc/scene.h>
#include <sys/system_00.h>

extern void func_80007080(void*, f32, f32, f32, f32);

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
lbFileNode sSC1PChallengerForceStatusBuffer[7];

// 0x801324D8
lbFileNode sSC1PChallengerStatusBuffer[100];

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
syDisplaySetup dSC1PChallengerDisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x801323D4
syTaskmanSetup dSC1PChallengerTaskmanSetup =
{
    // Task Logic Buffer Setup
    {
        0,                          // ???
        func_8000A5E4,              // Update function
        func_8000A340,              // Frame draw function
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
        update_contdata,            // Controller I/O function
    },

    0,                              // Number of GObjThreads
    sizeof(u64) * 192,              // Thread stack size
    0,                              // Number of thread stacks
    0,                              // ???
    0,                              // Number of GObjProcesses
    0,                              // Number of GObjs
    sizeof(GObj),                   // GObj size
    0,                              // Number of Object Manager Matrices
    dLBCommonFuncMatrixList,        // Matrix function list
    NULL,                           // Function for ejecting DObjDynamicStore?
    0,                              // Number of AObjs
    0,                              // Number of MObjs
    0,                              // Number of DObjs
    sizeof(DObj),                   // DObj size
    0,                              // Number of SObjs
    sizeof(SObj),                   // SObj size
    0,                              // Number of Cameras
    sizeof(Camera),                 // Camera size
    
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
void sc1PChallengerDecalsProcDisplay(GObj *gobj)
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

    gobj = gcMakeGObjSPAfter(0, NULL, 2, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, sc1PChallengerDecalsProcDisplay, 0, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sSC1PChallengerFiles[0], &lSC1PChallengerDecalExclaimSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = 139.0F;
    sobj->pos.y = 22.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sSC1PChallengerFiles[0], &lSC1PChallengerTextWarningSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0xD5;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x27;
    
    sobj->pos.x = 100.0F;
    sobj->pos.y = 63.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sSC1PChallengerFiles[0], &lSC1PChallengerTextChallengerSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xA8;
    sobj->sprite.blue = 0x00;
    
    sobj->pos.x = 55.0F;
    sobj->pos.y = 127.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sSC1PChallengerFiles[0], &lSC1PChallengerTextApproachingSprite));
    
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
void sc1PChallengerMakeFighter(s32 ft_kind)
{
    GObj *fighter_gobj;
    ftCreateDesc ft_desc = dFTManagerDefaultFighterDesc;

    ft_desc.ft_kind = ft_kind;
    ft_desc.costume = ftParamGetCostumeCommonID(ft_kind, 0);
    ft_desc.player = 0;
    ft_desc.figatree_heap = sSC1PChallengerFigatreeHeap;
    
    fighter_gobj = ftManagerMakeFighter(&ft_desc);
    
    gcAddGObjProcess(fighter_gobj, sc1PChallengerFighterProcUpdate, nOMObjProcessKindProc, 1);
    
    DObjGetStruct(fighter_gobj)->translate.vec.f.x = 610.0F;
    DObjGetStruct(fighter_gobj)->translate.vec.f.y = -550.0F;
    DObjGetStruct(fighter_gobj)->translate.vec.f.z = 0.0F;
    
    DObjGetStruct(fighter_gobj)->scale.vec.f.x = dSCSubsysFighterScales[ft_kind];
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = dSCSubsysFighterScales[ft_kind];
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = dSCSubsysFighterScales[ft_kind];
    
    ftParamCheckSetFighterColAnimID(fighter_gobj, 0x50, 0);
}

// 0x80131F58
void sc1PChallengerMakeFighterCamera(void)
{
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            func_80017EC0,
            40,
            CAMERA_MASK_DLLINK(18) | CAMERA_MASK_DLLINK(15) |
            CAMERA_MASK_DLLINK(10) | CAMERA_MASK_DLLINK(9),
            -1,
            TRUE,
            nOMObjProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    
    cam->vec.eye.x = 0.0F;
    cam->vec.eye.y = 0.0F;
    cam->vec.eye.z = 3000.0F;
    
    cam->vec.at.x = 0.0F;
    cam->vec.at.y = 0.0F;
    cam->vec.at.z = 0.0F;
    
    cam->vec.up.x = 0.0F;
    cam->vec.up.y = 1.0F;
    cam->vec.up.z = 0.0F;
}

// 0x80132040
void sc1PChallengerMakeDecalsCamera(void)
{
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            70,
            CAMERA_MASK_DLLINK(0),
            -1,
            FALSE,
            nOMObjProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801320E0
void sc1PChallengerInitVars(void)
{
    sSC1PChallengerFighterKind = gSceneData.challenger_ft_kind;
    
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
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindTitle;
            
            func_ovl23_80132110();
            syTaskmanSetLoadScene();
        }
    }
}

// 0x801321C0
void sc1PChallengerFuncStart(void)
{
    lbRelocSetup rl_setup;
    s32 unused;

    rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
    rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
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
    gcMakeGObjSPAfter(0, sc1PChallengerFuncRun, 0, GOBJ_LINKORDER_DEFAULT);
    gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0x2 | 0x1, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
    sc1PChallengerInitVars();
    efAllocInitParticleBank();
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
    dSC1PChallengerDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);
    syDisplayInit(&dSC1PChallengerDisplaySetup);
    
    dSC1PChallengerTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl23_BSS_END);
    syTaskmanInit(&dSC1PChallengerTaskmanSetup);
}
