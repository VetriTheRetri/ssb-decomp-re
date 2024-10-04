#include <mn/menu.h>
#include <sc/scene.h>
#include <gm/gmsound.h>
#include <sys/thread6.h>
#include <sys/system_00.h>

extern void func_80007080(void*, f32, f32, f32, f32);
extern uintptr_t D_NF_0000000F;                             // 0x0000000F

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80132920
s32 sMNScreenAdjustPad0x80132920[2];

// 0x80132928
f32 sMNScreenAdjustOffsetH;

// 0x8013292C
f32 sMNScreenAdjustOffsetV;

// 0x80132930
s32 sMNScreenAdjustButtonHoldWait;

// 0x80132934
s32 sMNScreenAdjustTotalTimeTics;

// 0x80132938
s32 sMNScreenAdjustReturnTic;

// 0x80132940
lbFileNode sMNScreenAdjustForceStatusBuffer[7];

// 0x80132978
lbFileNode sMNScreenAdjustStatusBuffer[24];

// 0x80132A38
void *sMNScreenAdjustFiles[1];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80132830
u32 dMNScreenAdjustFileIDs[/* */] = { &D_NF_0000000F };

// 0x80132838
Lights1 dMNScreenAdjustLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x80132850
Gfx dMNScreenAdjustDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMNScreenAdjustLights1),
    gsSPEndDisplayList()
};

// 0x80132878
syDisplaySetup dMNScreenAdjustDisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x80132894
scRuntimeInfo dMNScreenAdjustTasklogSetup =
{
    0x00000000,
    func_8000A5E4,
    func_8000A340,
    &ovl25_BSS_END,
    0,
    1,
    2,
    0x4E20,
    0x400,
    0,
    0,
    0x8000,
    0x20000,
    0xC000,
    mnScreenAdjustProcLights,
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
    mnScreenAdjustProcStart
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mnScreenAdjustProcLights(Gfx **dls)
{
    gSPDisplayList(dls[0]++, dMNScreenAdjustDisplayList);
}

// 0x80131B24
void mnScreenAdjustFrameProcDisplay(GObj *gobj)
{
    gDPPipeSync(gSYTasklogDLHeads[0]++);
    gDPSetCycleType(gSYTasklogDLHeads[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gSYTasklogDLHeads[0]++, 0, 0, 0xBF, 0xA4, 0x47, 0xFF);
    gDPSetCombineMode(gSYTasklogDLHeads[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gSYTasklogDLHeads[0]++, 159, 0, 161, 254);
    gDPFillRectangle(gSYTasklogDLHeads[0]++, 0, 119, 334, 121);
    gDPSetPrimColor(gSYTasklogDLHeads[0]++, 0, 0, 0x8B, 0x8B, 0x8B, 0xFF);
    gDPFillRectangle(gSYTasklogDLHeads[0]++, 44, 44, 276, 45);
    gDPFillRectangle(gSYTasklogDLHeads[0]++, 44, 196, 276, 197);
    gDPFillRectangle(gSYTasklogDLHeads[0]++, 44, 44, 45, 196);
    gDPFillRectangle(gSYTasklogDLHeads[0]++, 276, 44, 277, 196);
    gDPPipeSync(gSYTasklogDLHeads[0]++);
    gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80131D00
void mnScreenAdjustMakeFrame(void)
{
    GObj *gobj = gcMakeGObjSPAfter(0, NULL, 2, GOBJ_LINKORDER_DEFAULT);
    
    gcAddGObjDisplay(gobj, mnScreenAdjustFrameProcDisplay, 0, GOBJ_DLLINKORDER_DEFAULT, -1);
}

// 0x80131D4C
void mnScreenAdjustMakeGuide(void)
{
    GObj *gobj;
    SObj *sobj;
    
    gobj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNScreenAdjustFiles[0], &lMNScreenAdjustGuideSprite));
    
    sobj->pos.x = 10.0F;
    sobj->pos.y = 10.0F;
}

// 0x80131DCC
void mnScreenAdjustMakeInstruction(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNScreenAdjustFiles[0], &lMNScreenAdjustInstructionSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue = 0xFF;
    
    sobj->pos.x = 16.0F;
    sobj->pos.y = 198.0F;
}

// 0x80131E74
void mnScreenAdjustMakeFrameCamera(void)
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
            40,
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

// 0x80131F14
void mnScreenAdjustMakeSpriteCamera(void)
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
            CAMERA_MASK_DLLINK(1),
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

// 0x80131FB4
void mnScreenAdjustApplyCenterOffsets(s16 h, s16 v)
{
    syDisplaySetCenterOffsets(h, h, v, v);
}

// 0x80131FF8
void mnScreenAdjustInitVars(void)
{
    sMNScreenAdjustOffsetH = D_80046694;
    sMNScreenAdjustOffsetV = D_80046698;
    
    sMNScreenAdjustButtonHoldWait = 0;
    sMNScreenAdjustTotalTimeTics = 0;
    
    sMNScreenAdjustReturnTic = sMNScreenAdjustTotalTimeTics + I_MIN_TO_TICS(5);
}

// 0x8013204C
void mnScreenAdjustBackupOffsets(void)
{
    gSaveData.screen_adjust_h = sMNScreenAdjustOffsetH;
    gSaveData.screen_adjust_v = sMNScreenAdjustOffsetV;
    
    lbBackupWrite();
}

// 0x8013209C
void mnScreenAdjustProcRun(GObj *gobj)
{
    s32 stick_range;

    sMNScreenAdjustTotalTimeTics++;
    
    if (sMNScreenAdjustTotalTimeTics >= 10)
    {
        if (sMNScreenAdjustButtonHoldWait != 0)
        {
            sMNScreenAdjustButtonHoldWait--;
        }
        if ((scSubsysControllerGetPlayerStickInRangeLR(-30, 30) != FALSE) && (scSubsysControllerGetPlayerStickInRangeUD(-30, 30) != FALSE))
        {
            sMNScreenAdjustButtonHoldWait = 0;
        }
        if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
        {
            func_800269C0_275C0(nSYAudioFGMMenuSelect);
            
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindOption;

            mnScreenAdjustBackupOffsets();
            syTasklogSetLoadScene();
        }
        if (scSubsysControllerGetPlayerTapButtons(U_JPAD | U_CBUTTONS) != FALSE)
        {
            if (sMNScreenAdjustOffsetV > -14.0F)
            {
                sMNScreenAdjustOffsetV--;
            
                if (sMNScreenAdjustOffsetV < -14.0F)
                {
                    sMNScreenAdjustOffsetV = -14.0F;
                }
                mnScreenAdjustApplyCenterOffsets(sMNScreenAdjustOffsetH, sMNScreenAdjustOffsetV);
            }
        }
        if (sMNScreenAdjustButtonHoldWait == 0)
        {
            stick_range = scSubsysControllerGetPlayerStickUD(30, 1);
            
            if ((stick_range != 0) && (sMNScreenAdjustOffsetV > -14.0F))
            {
                sMNScreenAdjustOffsetV -= stick_range / 50.0F;
                
                if (sMNScreenAdjustOffsetV < -14.0F)
                {
                    sMNScreenAdjustOffsetV = -14.0F;
                }
                mnScreenAdjustApplyCenterOffsets(sMNScreenAdjustOffsetH, sMNScreenAdjustOffsetV);
            }
        }
        if (scSubsysControllerGetPlayerTapButtons(D_JPAD | D_CBUTTONS) != FALSE)
        {
            if (sMNScreenAdjustOffsetV < 14.0F)
            {
                sMNScreenAdjustOffsetV++;
            
                if (sMNScreenAdjustOffsetV > 14.0F)
                {
                    sMNScreenAdjustOffsetV = 14.0F;
                }
                mnScreenAdjustApplyCenterOffsets(sMNScreenAdjustOffsetH, sMNScreenAdjustOffsetV);
            }
        }
        if (sMNScreenAdjustButtonHoldWait == 0)
        {
            stick_range = scSubsysControllerGetPlayerStickUD(-30, 0);
            
            if ((stick_range != 0) && (sMNScreenAdjustOffsetV < 14.0F))
            {
                sMNScreenAdjustOffsetV -= stick_range / 50.0F;
                
                if (sMNScreenAdjustOffsetV > 14.0F)
                {
                    sMNScreenAdjustOffsetV = 14.0F;
                }
                mnScreenAdjustApplyCenterOffsets(sMNScreenAdjustOffsetH, sMNScreenAdjustOffsetV);
            }
        }
        if (scSubsysControllerGetPlayerTapButtons(L_JPAD | L_TRIG | L_CBUTTONS) != FALSE)
        {
            if (sMNScreenAdjustOffsetH > -14.0F)
            {
                sMNScreenAdjustOffsetH--;
            
                if (sMNScreenAdjustOffsetH < -14.0F)
                {
                    sMNScreenAdjustOffsetH = -14.0F;
                }
                mnScreenAdjustApplyCenterOffsets(sMNScreenAdjustOffsetH, sMNScreenAdjustOffsetV);
            }
        }
        if (sMNScreenAdjustButtonHoldWait == 0)
        {
            stick_range = scSubsysControllerGetPlayerStickLR(-30, 0);
            
            if ((stick_range != 0) && (sMNScreenAdjustOffsetH > -14.0F))
            {
                sMNScreenAdjustOffsetH += stick_range / 50.0F;
                
                if (sMNScreenAdjustOffsetH < -14.0F)
                {
                    sMNScreenAdjustOffsetH = -14.0F;
                }
                mnScreenAdjustApplyCenterOffsets(sMNScreenAdjustOffsetH, sMNScreenAdjustOffsetV);
            }
        }
        if (scSubsysControllerGetPlayerTapButtons(R_JPAD | R_TRIG | R_CBUTTONS) != FALSE)
        {
            if (sMNScreenAdjustOffsetH < 14.0F)
            {
                sMNScreenAdjustOffsetH++;
            
                if (sMNScreenAdjustOffsetH > 14.0F)
                {
                    sMNScreenAdjustOffsetH = 14.0F;
                }
                mnScreenAdjustApplyCenterOffsets(sMNScreenAdjustOffsetH, sMNScreenAdjustOffsetV);
            }
        }
        if (sMNScreenAdjustButtonHoldWait == 0)
        {
            stick_range = scSubsysControllerGetPlayerStickLR(30, 1);
            
            if ((stick_range != 0) && (sMNScreenAdjustOffsetH < 14.0F))
            {
                sMNScreenAdjustOffsetH += stick_range / 50.0F;
                
                if (sMNScreenAdjustOffsetH > 14.0F)
                {
                    sMNScreenAdjustOffsetH = 14.0F;
                }
                mnScreenAdjustApplyCenterOffsets(sMNScreenAdjustOffsetH, sMNScreenAdjustOffsetV);
            }
        }
        sMNScreenAdjustButtonHoldWait = 0;
        
        if (scSubsysControllerGetPlayerTapButtons(Z_TRIG) != FALSE)
        {
            sMNScreenAdjustOffsetH = 0.0F;
            sMNScreenAdjustOffsetV = 0.0F;
            
            mnScreenAdjustApplyCenterOffsets(sMNScreenAdjustOffsetH, sMNScreenAdjustOffsetV);
        }
    }
}

// 0x801326CC
void mnScreenAdjustProcStart(void)
{
    lbRelocSetup rl_setup;
    s32 unused[2];

    rl_setup.table_addr = &lLBRelocTableAddr;
    rl_setup.table_files_num = &lLBRelocTableFilesNum;
    rl_setup.file_heap = NULL;
    rl_setup.file_heap_size = 0;
    rl_setup.status_buffer = sMNScreenAdjustStatusBuffer;
    rl_setup.status_buffer_size = ARRAY_COUNT(sMNScreenAdjustStatusBuffer);
    rl_setup.force_status_buffer = sMNScreenAdjustForceStatusBuffer;
    rl_setup.force_status_buffer_size = ARRAY_COUNT(sMNScreenAdjustForceStatusBuffer);
    
    lbRelocInitSetup(&rl_setup);
    lbRelocLoadFilesExtern
    (
        dMNScreenAdjustFileIDs,
        ARRAY_COUNT(dMNScreenAdjustFileIDs),
        sMNScreenAdjustFiles,
        syTasklogMalloc
        (
            lbRelocGetAllocSize
            (
                dMNScreenAdjustFileIDs,
                ARRAY_COUNT(dMNScreenAdjustFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mnScreenAdjustProcRun, 0, GOBJ_LINKORDER_DEFAULT);
    gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0x2 | 0x1, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
    mnScreenAdjustInitVars();
    mnScreenAdjustMakeFrameCamera();
    mnScreenAdjustMakeSpriteCamera();
    mnScreenAdjustMakeGuide();
    mnScreenAdjustMakeFrame();
    mnScreenAdjustMakeInstruction();
    auStopBGM();
}

// 0x801327D8
void mnScreenAdjustStartScene(void)
{
    dMNScreenAdjustDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);
    func_80007024(&dMNScreenAdjustDisplaySetup);
    
    dMNScreenAdjustTasklogSetup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl25_BSS_END);
    syTasklogInit(&dMNScreenAdjustTasklogSetup);
}
