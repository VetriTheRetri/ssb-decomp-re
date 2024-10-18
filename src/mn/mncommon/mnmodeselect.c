#include <mn/menu.h>
#include <sc/scene.h>
#include <gm/gmsound.h>
#include <sys/thread6.h>
#include <sys/video.h>

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

extern uintptr_t D_NF_00000000;
extern uintptr_t D_NF_00000001;

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define mnModeSelectCheckGetOptionButtonInput(is_button, mask) \
mnCommonCheckGetOptionButtonInput(sMNModeSelectOptionChangeWait, is_button, mask)

#define mnModeSelectCheckGetOptionStickInputUD(stick_range, min, b) \
mnCommonCheckGetOptionStickInputUD(sMNModeSelectOptionChangeWait, stick_range, min, b)

#define mnModeSelectCheckGetOptionStickInputLR(stick_range, min, b) \
mnCommonCheckGetOptionStickInputLR(sMNModeSelectOptionChangeWait, stick_range, min, b)

#define mnModeSelectSetOptionChangeWaitP(is_button, stick_range, div) \
mnCommonSetOptionChangeWaitP(sMNModeSelectOptionChangeWait, is_button, stick_range, div)

#define mnModeSelectSetOptionChangeWaitN(is_button, stick_range, div) \
mnCommonSetOptionChangeWaitN(sMNModeSelectOptionChangeWait, is_button, stick_range, div)

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80132C80
s32 sMNModeSelectPad0x80132C80[2];

// 0x80132C88
s32 sMNModeSelectOption;

// 0x80132C8C
GObj *sMNModeSelectOption1PModeGObj;

// 0x80132C90
GObj *sMNModeSelectOptionVSModeGObj;

// 0x80132C94
GObj *sMNModeSelectOptionOptionGObj;

// 0x80132C98
GObj *sMNModeSelectOptionDataGObj;

// 0x80132C9C
s32 sMNModeSelectOptionChangeWait;

// 0x80132CA0
s32 sMNModeSelectTotalTimeTics;

// 0x80132CA4
s32 sMNModeSelectReturnTic;

// 0x80132CA8
lbFileNode sMNModeSelectStatusBuffer[24];

// 0x80132D68
void *sMNModeSelectFiles[2];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80132B90
u32 dMNModeSelectFileIDs[/* */] = { &D_NF_00000000, &D_NF_00000001 };

// 0x80133088
Lights1 dMNModeSelectLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x801330A0
Gfx dMNModeSelectDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMNModeSelectLights1),
    gsSPEndDisplayList()
};

// 0x80132BD8
syVideoSetup dMNModeSelectDisplaySetup = SYVIDEO_DEFINE_DEFAULT();

// 0x80132BF4
scRuntimeInfo dMNModeSelectTaskmanSetup =
{
    0x00000000,
    func_8000A5E4,
    func_8000A340,
    &ovl17_BSS_END,
    0,
    1,
    2,
    0x7530,
    0,
    0,
    0,
    0x8000,
    0x20000,
    0xC000,
    mnModeSelectFuncLights,
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
    mnModeSelectFuncStart
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mnModeSelectFuncLights(Gfx **dls)
{
    gSPDisplayList(dls[0]++, dMNModeSelectDisplayList);
}

// 0x80131B24
void mnModeSelectMake1PMode(void)
{
    GObj *gobj;
    SObj *sobj;

    sMNModeSelectOption1PModeGObj = gobj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT); 
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    if (sMNModeSelectOption == nMNModeSelectOption1PMode)
    {
        sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNModeSelectFiles[1], &lMNModeSelectOption1PModeHighlightSprite));

        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;

        sobj->sprite.red = 0xFF;
        sobj->sprite.green = 0xFF;
        sobj->sprite.blue = 0xFF;
    
        sobj->envcolor.r = 0x00;
        sobj->envcolor.g = 0x00;
        sobj->envcolor.b = 0x00;
        
        sobj->pos.x = 169.0F;
        sobj->pos.y = 27.0F;
    }
    else
    {
        sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNModeSelectFiles[1], &lMNModeSelectOption1PModeNotSprite));
        
        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;
        
        sobj->sprite.red = 0x96;
        sobj->sprite.green = 0x96;
        sobj->sprite.blue = 0x96;
        
        sobj->pos.x = 169.0F;
        sobj->pos.y = 27.0F;
    }
}

// 0x80131C44
void mnModeSelectMakeVSMode(void)
{
    GObj *gobj;
    SObj *sobj;

    sMNModeSelectOptionVSModeGObj = gobj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT); 
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    if (sMNModeSelectOption == nMNModeSelectOptionVSMode)
    {
        sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNModeSelectFiles[1], &lMNModeSelectOptionVSModeHighlightSprite));

        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;

        sobj->sprite.red = 0xFF;
        sobj->sprite.green = 0xFF;
        sobj->sprite.blue = 0xFF;
    
        sobj->envcolor.r = 0x00;
        sobj->envcolor.g = 0x00;
        sobj->envcolor.b = 0x00;
        
        sobj->pos.x = 128.0F;
        sobj->pos.y = 64.0F;
    }
    else
    {
        sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNModeSelectFiles[1], &lMNModeSelectOptionVSModeNotSprite));
        
        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;
        
        sobj->sprite.red = 0x96;
        sobj->sprite.green = 0x96;
        sobj->sprite.blue = 0x96;
        
        sobj->pos.x = 128.0F;
        sobj->pos.y = 64.0F;
    }
}

// 0x80131D68
void mnModeSelectMakeOption(void)
{
    GObj *gobj;
    SObj *sobj;

    sMNModeSelectOptionOptionGObj = gobj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT); 
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    if (sMNModeSelectOption == nMNModeSelectOptionOption)
    {
        sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNModeSelectFiles[1], &lMNModeSelectOptionOptionHighlightSprite));

        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;

        sobj->sprite.red = 0xFF;
        sobj->sprite.green = 0xFF;
        sobj->sprite.blue = 0xFF;
    
        sobj->envcolor.r = 0x00;
        sobj->envcolor.g = 0x00;
        sobj->envcolor.b = 0x00;
        
        sobj->pos.x = 87.0F;
        sobj->pos.y = 101.0F;
    }
    else
    {
        sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNModeSelectFiles[1], &lMNModeSelectOptionOptionNotSprite));
        
        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;
        
        sobj->sprite.red = 0x96;
        sobj->sprite.green = 0x96;
        sobj->sprite.blue = 0x96;
        
        sobj->pos.x = 87.0F;
        sobj->pos.y = 101.0F;
    }
}

// 0x80131E8C
void mnModeSelectMakeData(void)
{
    GObj *gobj;
    SObj *sobj;

    sMNModeSelectOptionDataGObj = gobj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT); 
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    if (sMNModeSelectOption == nMNModeSelectOptionData)
    {
        sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNModeSelectFiles[1], &lMNModeSelectOptionDataHighlightSprite));

        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;

        sobj->sprite.red = 0xFF;
        sobj->sprite.green = 0xFF;
        sobj->sprite.blue = 0xFF;
    
        sobj->envcolor.r = 0x00;
        sobj->envcolor.g = 0x00;
        sobj->envcolor.b = 0x00;
        
        sobj->pos.x = 46.0F;
        sobj->pos.y = 138.0F;
    }
    else
    {
        sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNModeSelectFiles[1], &lMNModeSelectOptionDataNotSprite));
        
        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;
        
        sobj->sprite.red = 0x96;
        sobj->sprite.green = 0x96;
        sobj->sprite.blue = 0x96;
        
        sobj->pos.x = 46.0F;
        sobj->pos.y = 138.0F;
    }
}

// 0x80131FB0
void mnModeSelectMakeLabels(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNModeSelectFiles[1], &lMNModeSelectLabel1PModeSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;
    
    sobj->pos.x = 224.0F;
    sobj->pos.y = 52.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNModeSelectFiles[1], &lMNModeSelectLabelVSModeSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;
    
    sobj->pos.x = 183.0F;
    sobj->pos.y = 89.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNModeSelectFiles[1], &lMNModeSelectLabelOptionSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;
    
    sobj->pos.x = 142.0F;
    sobj->pos.y = 126.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNModeSelectFiles[1], &lMNModeSelectLabelDataSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;
    
    sobj->pos.x = 102.0F;
    sobj->pos.y = 163.0F;
}

// 0x80132168
void mnModeSelectMakeDecals(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = gcMakeGObjSPAfter(0, NULL, 2, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNModeSelectFiles[0], &lMNCommonWallpaperSprite));
    
    sobj->pos.x = 10.0F;
    sobj->pos.y = 10.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNModeSelectFiles[1], &lMNModeSelectDecalBarMiddleSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0x08;
    sobj->sprite.green = 0x33;
    sobj->sprite.blue = 0x65;
    
    sobj->cms = 0;
    sobj->cmt = 0;
    
    sobj->masks = 4;
    sobj->maskt = 0;
    
    sobj->lrs = 96;
    sobj->lrt = 38;
    
    sobj->pos.x = 0.0f;
    sobj->pos.y = 37.0f;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNModeSelectFiles[1], &lMNModeSelectDecalBarEdgeSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0x08;
    sobj->sprite.green = 0x33;
    sobj->sprite.blue = 0x65;
    
    sobj->pos.x = 96.0F;
    sobj->pos.y = 37.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNModeSelectFiles[1], &lMNModeSelectDecalModeSelectSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->envcolor.r = 0x00;
    sobj->envcolor.g = 0x00;
    sobj->envcolor.b = 0x00;
    
    sobj->sprite.red = 0x3C;
    sobj->sprite.green = 0x73;
    sobj->sprite.blue = 0xB4;
    
    sobj->pos.x = 28.0F;
    sobj->pos.y = 27.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNModeSelectFiles[1], &lMNModeSelectDecalSmashLogoSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0x08;
    sobj->sprite.green = 0x33;
    sobj->sprite.blue = 0x65;
    
    sobj->pos.x = 226.0F;
    sobj->pos.y = 137.0F;
}

// 0x80132398
void mnModeSelectMakeLabelsCamera(void)
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
            60,
            CAMERA_MASK_DLLINK(1),
            -1,
            FALSE,
            nOMObjProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132438
void mnModeSelectMakeDecalsCamera(void)
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
            80,
            CAMERA_MASK_DLLINK(0),
            -1,
            FALSE,
            nOMObjProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801324D8
void mnModeSelectMakeOptions(void)
{
    mnModeSelectMake1PMode();
    mnModeSelectMakeVSMode();
    mnModeSelectMakeOption();
    mnModeSelectMakeData();
}

// 0x80132510
void mnModeSelectEjectOptions(void)
{
    gcEjectGObj(sMNModeSelectOption1PModeGObj);
    gcEjectGObj(sMNModeSelectOptionVSModeGObj);
    gcEjectGObj(sMNModeSelectOptionOptionGObj);
    gcEjectGObj(sMNModeSelectOptionDataGObj);
}

// 0x80132558
void mnModeSelectInitVars(void)
{
    switch (gSceneData.scene_previous)
    {
    default:
        sMNModeSelectOption = nMNModeSelectOption1PMode;
        break;
        
    case nSCKind1PMode:
        sMNModeSelectOption = nMNModeSelectOption1PMode;
        break;
        
    case nSCKindVSMode:
        sMNModeSelectOption = nMNModeSelectOptionVSMode;
        break;
        
    case nSCKindOption:
        sMNModeSelectOption = nMNModeSelectOptionOption;
        break;
        
    case nSCKindData:
        sMNModeSelectOption = nMNModeSelectOptionData;
        break;
    }
    sMNModeSelectOptionChangeWait = 0;
    
    sMNModeSelectTotalTimeTics = 0;
    sMNModeSelectReturnTic = sMNModeSelectTotalTimeTics + I_MIN_TO_TICS(5);
}

// 0x801325E8
void mnModeSelectFuncRun(GObj *gobj)
{
    s32 unused1;
    s32 stick_range;
    s32 unused2;
    sb32 is_button;

    sMNModeSelectTotalTimeTics++;
    
    if (sMNModeSelectTotalTimeTics >= 10)
    {
        if (sMNModeSelectTotalTimeTics == sMNModeSelectReturnTic)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindTitle;

            syTaskmanSetLoadScene();
            return;
        }
        if (scSubsysControllerCheckNoInputAll() == FALSE)
        {
            sMNModeSelectReturnTic = sMNModeSelectTotalTimeTics + I_MIN_TO_TICS(5);
        }
        if (sMNModeSelectOptionChangeWait != 0)
        {
            sMNModeSelectOptionChangeWait--;
        }
        if
        (
            (scSubsysControllerGetPlayerStickInRangeLR(-20, 20) != FALSE)                                &&
            (scSubsysControllerGetPlayerStickInRangeUD(-20, 20) != FALSE)                                &&
            (scSubsysControllerGetPlayerHoldButtons(U_JPAD | R_JPAD | U_CBUTTONS | R_CBUTTONS) == FALSE) &&
            (scSubsysControllerGetPlayerHoldButtons(D_JPAD | L_JPAD | D_CBUTTONS | L_CBUTTONS) == FALSE)
        )
        {
            sMNModeSelectOptionChangeWait = 0;
        }
        if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | START_BUTTON) != FALSE)
        {
            switch (sMNModeSelectOption)
            {
            case nMNModeSelectOption1PMode:
                func_800269C0_275C0(nSYAudioFGMMenuSelect);
                
                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = nSCKind1PMode;
                
                syTaskmanSetLoadScene();
                return;
                
            case nMNModeSelectOptionVSMode:
                func_800269C0_275C0(nSYAudioFGMMenuSelect);
                
                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = nSCKindVSMode;
                
                syTaskmanSetLoadScene();
                return;
                
            case nMNModeSelectOptionOption:
                func_800269C0_275C0(nSYAudioFGMMenuSelect);
                
                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = nSCKindOption;
                
                syTaskmanSetLoadScene();
                return;
                
            case nMNModeSelectOptionData:
                func_800269C0_275C0(nSYAudioFGMMenuSelect);
                
                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = nSCKindData;
                
                syTaskmanSetLoadScene();
                return;
            }
        }
        else
        {
            if (scSubsysControllerGetPlayerTapButtons(B_BUTTON) != FALSE)
            {
                auStopBGM();

                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = nSCKindTitle;
            
                syTaskmanSetLoadScene();
            }
            if
            (
                (
                    (scSubsysControllerGetPlayerStickUD(20, 1) <= 0) ||
                    (scSubsysControllerGetPlayerStickLR(-20, 0) >= 0)
                )
                &&
                (
                    (scSubsysControllerGetPlayerStickUD(-20, 0) >= 0) ||
                    (scSubsysControllerGetPlayerStickLR(20, 1) <= 0)
                )
            )
            {
                if
                (
                    mnModeSelectCheckGetOptionButtonInput(is_button, U_JPAD | R_JPAD | U_CBUTTONS | R_CBUTTONS) ||
                    (sMNModeSelectOptionChangeWait == 0)
                    &&
                    (
                        ((stick_range) = scSubsysControllerGetPlayerStickUD(20, 1), stick_range != 0) ||
                        ((stick_range) = scSubsysControllerGetPlayerStickLR(20, 1), stick_range != 0)
                    )
                )
                {    
                    func_800269C0_275C0(nSYAudioFGMMenuScroll2);
                    
                    mnModeSelectSetOptionChangeWaitP(is_button, stick_range, 7);
                        
                    if (sMNModeSelectOption == nMNModeSelectOptionStart)
                    {
                        sMNModeSelectOption = nMNModeSelectOptionEnd;
                    }
                    else sMNModeSelectOption--;
                    
                    if (sMNModeSelectOption == nMNModeSelectOptionStart)
                    {
                        sMNModeSelectOptionChangeWait += 8;
                    }
                    mnModeSelectEjectOptions();
                    mnModeSelectMakeOptions();
                }
                if
                (
                    mnModeSelectCheckGetOptionButtonInput(is_button, D_JPAD | L_JPAD | D_CBUTTONS | L_CBUTTONS) ||
                    (sMNModeSelectOptionChangeWait == 0)
                    &&
                    (
                        ((stick_range) = scSubsysControllerGetPlayerStickUD(-20, 0), stick_range != 0) ||
                        ((stick_range) = scSubsysControllerGetPlayerStickLR(-20, 0), stick_range != 0)
                    )
                )
                {    
                    func_800269C0_275C0(nSYAudioFGMMenuScroll2);
                    
                    mnModeSelectSetOptionChangeWaitN(is_button, stick_range, 7);
                        
                    if (sMNModeSelectOption == nMNModeSelectOptionEnd)
                    {
                        sMNModeSelectOption = nMNModeSelectOptionStart;
                    }
                    else sMNModeSelectOption++;
                    
                    if (sMNModeSelectOption == nMNModeSelectOptionEnd)
                    {
                        sMNModeSelectOptionChangeWait += 8;
                    }
                    mnModeSelectEjectOptions();
                    mnModeSelectMakeOptions();
                }
            }
        }
    }
}

// 0x80132A0C
void mnModeSelectFuncStart(void)
{
    lbRelocSetup rl_setup;

    rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
    rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
    rl_setup.file_heap = NULL;
    rl_setup.file_heap_size = 0;
    rl_setup.status_buffer = sMNModeSelectStatusBuffer;
    rl_setup.status_buffer_size = ARRAY_COUNT(sMNModeSelectStatusBuffer);
    rl_setup.force_status_buffer = NULL;
    rl_setup.force_status_buffer_size = 0;
    
    lbRelocInitSetup(&rl_setup);
    lbRelocLoadFilesExtern
    (
        dMNModeSelectFileIDs,
        ARRAY_COUNT(dMNModeSelectFileIDs),
        sMNModeSelectFiles,
        syTaskmanMalloc
        (
            lbRelocGetAllocSize
            (
                dMNModeSelectFileIDs,
                ARRAY_COUNT(dMNModeSelectFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mnModeSelectFuncRun, 0, GOBJ_LINKORDER_DEFAULT);
    gcMakeDefaultCameraGObj(0, GOBJ_DLLINKORDER_DEFAULT, 100, 0, GPACK_RGBA8888(0x00, 0x00, 0x00, 0x00));
    
    mnModeSelectInitVars();
    mnModeSelectMakeDecalsCamera();
    mnModeSelectMakeLabelsCamera();
    mnModeSelectMakeDecals();
    mnModeSelectMakeOptions();
    mnModeSelectMakeLabels();
    
    if
    (
        (gSceneData.scene_previous != nSCKind1PMode) &&
        (gSceneData.scene_previous != nSCKindVSMode) &&
        (gSceneData.scene_previous != nSCKindOption) &&
        (gSceneData.scene_previous != nSCKindData)
    )
    {
        auPlaySong(0, nSYAudioBGMModeSelect);
    }
}

// 0x80132B34
void mnModeSelectStartScene(void)
{
    dMNModeSelectDisplaySetup.zbuffer = syVideoGetZBuffer(6400);
    syVideoInit(&dMNModeSelectDisplaySetup);
    
    dMNModeSelectTaskmanSetup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl17_BSS_END);
    syTaskmanInit(&dMNModeSelectTaskmanSetup);
}
