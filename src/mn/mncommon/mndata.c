#include <mn/menu.h>
#include <gm/gmsound.h>
#include <sc/scene.h>
#include <ovl0/reloc_data_mgr.h>
#include <sys/system_00.h>
#include <sys/thread6.h>

extern void auStopBGM();
extern void* func_800269C0_275C0(u16);
extern void func_80007080(void*, f32, f32, f32, f32);
extern GObj* func_8000B9FC();
extern GObj* func_8000B93C
(
	u32 id,
	void (*arg1)(GObj *),
	s32 link,
	u32 arg3,
	void (*arg4)(GObj *),
	u32 arg5,
	s64 arg7,
	s32 arg8,
	s32 arg9,
	s32 arg10,
	void *arg11,
	u32 arg12,
	s32 arg13
);
extern void func_ovl0_800CCF00(GObj*);
extern void func_ovl0_800CD2CC(GObj*);

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define mnDataCheckGetOptionButtonInput(is_button, mask) mnCommonCheckGetOptionButtonInput(sMNDataOptionChangeWait, is_button, mask)
#define mnDataCheckGetOptionStickInputUD(stick_range, min, b) mnCommonCheckGetOptionStickInputUD(sMNDataOptionChangeWait, stick_range, min, b)
#define mnDataCheckGetOptionStickInputLR(stick_range, min, b) mnCommonCheckGetOptionStickInputLR(sMNDataOptionChangeWait, stick_range, min, b)
#define mnDataSetOptionChangeWaitP(is_button, stick_range, div) mnCommonSetOptionChangeWaitP(sMNDataOptionChangeWait, is_button, stick_range, div)
#define mnDataSetOptionChangeWaitN(is_button, stick_range, div) mnCommonSetOptionChangeWaitN(sMNDataOptionChangeWait, is_button, stick_range, div)

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern uintptr_t D_NF_00000000;
extern uintptr_t D_NF_00000005;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80133060
GObj *sMNDataCharactersGObj;

// 0x80133064
GObj *sMNDataVSRecordGObj;

// 0x80133068
GObj *sMNDataSoundTestGObj;

// 0x80133070
s32 sMNDataPad0x80133070[2];

// 0x80133078
s32 sMNDataOption;

// 0x8013307C
GObj *sMNDataMenuGObj;

// 0x80133080
s32 sMNDataFirstAvailableOption;

// 0x80133084
s32 sMNDataLastAvailableOption;

// 0x80133088
sb32 sMNDataIsSoundTestUnlocked;

// 0x8013308C
sb32 sMNDataIsOptionSelected;

// 0x80133090
s32 sMNDataOptionChangeWait;

// 0x80133094
s32 sMNDataTotalTimeTics;

// 0x80133098
s32 sMNDataReturnTic;

// 0x8013309C - Padding?
// s32 sMNDataPad0x8013309C;

// 0x801330A0
rdFileNode sMNDataStatusBuf[24];

// 0x80133160
void *sMNDataFiles[2];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80132F20
u32 dMNDataFileIDs[/* */] = { &D_NF_00000000, &D_NF_00000005 };

// 0x80132F28
Lights1 dMNDataLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x80132F40
Gfx dMNDataDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMNDataLights1),
    gsSPEndDisplayList()
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mnDataProcLights(Gfx **dls)
{
    gSPDisplayList(dls[0]++, dMNDataDisplayList);
}

// 0x80131B24
sb32 mnDataCheckSoundTestUnlocked(void)
{
    if (gSaveData.unlock_mask & SCBACKUP_UNLOCK_MASK_SOUNDTEST)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80131B4C
void mnDataUpdateOptionTabSObjs(GObj *gobj, s32 status)
{
    // 0x80132F68
    syColorRGBPair selcolors = { { 0x00, 0x00, 0x00 }, { 0xFF, 0xFF, 0xFF } };

    // 0x80132F70
    syColorRGBPair hicolors  = { { 0x82, 0x00, 0x28 }, { 0xFF, 0x00, 0x28 } };

    // 0x80132F78
    syColorRGBPair notcolors = { { 0x00, 0x00, 0x00 }, { 0x82, 0x82, 0xAA } };
    
    syColorRGBPair *colors;
    SObj *sobj;
    s32 i;

    switch (status)
    {
    case nMNOptionTabStatusHighlight:
        colors = &hicolors;
        break;

    case nMNOptionTabStatusNot:
        colors = &notcolors;
        break;

    case nMNOptionTabStatusSelected:
        colors = &selcolors;
        break;

    default:
        break; // WARNING: Undefined behavior. This will assign sp 0xC to colors which is uninitialized.
    }
    sobj = SObjGetStruct(gobj);

    for (i = 0; i < nMNOptionTabStatusEnumMax; i++)
    {
        sobj->shadow_color.r = colors->prim.r;
        sobj->shadow_color.g = colors->prim.g;
        sobj->shadow_color.b = colors->prim.b;

        sobj->sprite.red   = colors->env.r;
        sobj->sprite.green = colors->env.g;
        sobj->sprite.blue  = colors->env.b;

        sobj = sobj->next;
    }
}

// 0x80131C24
void mnDataMakeOptionTabSObjs(GObj *gobj, f32 posx, f32 posy, s32 lrs)
{
    SObj *sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNDataFiles[0], &lMNCommonOptionTabLeftSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = posx;
    sobj->pos.y = posy;

    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNDataFiles[0], &lMNCommonOptionTabMiddleSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = posx + 16.0F;
    sobj->pos.y = posy;

    sobj->cmt = 0;
    sobj->cms = 0;

    sobj->maskt = 4;
    sobj->masks = 0;

    sobj->lrs = lrs * 8;
    sobj->lrt = 29;

    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNDataFiles[0], &lMNCommonOptionTabRightSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = posx + 16.0F + (lrs * 8);
    sobj->pos.y = posy;
}

// 0x80131D54
void func_ovl61_80131D54(void)
{
    return;
}

// 0x80131D5C
void mnDataMakeCharactersSObj(void)
{
    GObj *gobj;
    SObj *sobj;
    s32 posx;
    s32 posy;

    if (sMNDataIsSoundTestUnlocked != FALSE)
    {
        posx = 133;
        posy = 42;
    }
    else
    {
        posx = 113;
        posy = 57;
    }

    sMNDataCharactersGObj = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, func_ovl0_800CCF00, 2, GOBJ_DLLINKORDER_DEFAULT, -1);

    mnDataMakeOptionTabSObjs(gobj, posx, posy, 16);

    mnDataUpdateOptionTabSObjs(gobj, sMNDataOption == nMNDataOptionCharacters);

    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNDataFiles[1], &lMNDataCharacterOptionSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = posx + 26;
    sobj->pos.y = posy + 4;

    sobj->sprite.red   = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue  = 0x00;
}

// 0x80131E90
void mnDataMakeVSRecordSObj(void)
{
    GObj *gobj;
    SObj *sobj;
    s32 posx;
    s32 posy;

    if (sMNDataIsSoundTestUnlocked != FALSE)
    {
        posx = 101;
        posy = 89;
    }
    else
    {
        posx = 81;
        posy = 126;
    }

    sMNDataVSRecordGObj = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, func_ovl0_800CCF00, 2, GOBJ_DLLINKORDER_DEFAULT, -1);

    mnDataMakeOptionTabSObjs(gobj, posx, posy, 16);

    mnDataUpdateOptionTabSObjs(gobj, sMNDataOption == nMNDataOptionVSRecord);

    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNDataFiles[1], &lMNDataVSRecordOptionSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = posx + 27;
    sobj->pos.y = posy + 4;

    sobj->sprite.red   = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue  = 0x00;
}

// 0x80131FC8
void mnDataMakeSoundTestSObj(void)
{
    GObj *gobj;
    SObj *sobj;

    sMNDataSoundTestGObj = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, func_ovl0_800CCF00, 2, GOBJ_DLLINKORDER_DEFAULT, -1);

    mnDataMakeOptionTabSObjs(gobj, 69.0F, 136.0F, 16);

    mnDataUpdateOptionTabSObjs(gobj, sMNDataOption == nMNDataOptionSoundTest);

    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNDataFiles[1], &lMNDataSoundTestOptionSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue  = 0x00;

    sobj->pos.x = 95.0F;
    sobj->pos.y = 140.0F;
}

// 0x801320A0 - Unused?
void func_ovl61_801320A0(SObj *sobj)
{
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->shadow_color.r = 0x00;
    sobj->shadow_color.g = 0x00;
    sobj->shadow_color.b = 0x00;

    sobj->sprite.red   = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue  = 0xFF;
}

// 0x801320D4
void mnDataMakeMenuGObj(void)
{
    s32 unused[2];

    // 0x80132F80 - Japanese descriptions
    intptr_t sp34[/* */] = { 0x000006A8, 0x00000AC8, 0x000010C8 };

    // 0x8013F28C
    Vec2f sp1C[/* */] =
    {
        { 105.0F, 194.0F },
        { 131.0F, 194.0F },
        { 113.0F, 194.0F }
    };

    sMNDataMenuGObj = gcMakeGObjSPAfter(0, NULL, 5, GOBJ_LINKORDER_DEFAULT);
}

// 0x80132164
void mnDataHeaderProcRender(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 160, 120, 20, 230);
    gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 225, 143, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);

    func_ovl0_800CCEAC();
    func_ovl0_800CCF00(gobj);
}

// 0x801322A8
void mnDataMakeHeaderSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, mnDataHeaderProcRender, 1, GOBJ_DLLINKORDER_DEFAULT, -1);

    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNDataFiles[0], &lMNCommonSmashLogoSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;

    sobj->pos.x = 235.0F;
    sobj->pos.y = 158.0F;

    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNDataFiles[1], &lMNDataHeaderTextSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue  = 0x00;

    sobj->pos.x = 206.0F;
    sobj->pos.y = 131.0F;
}

// 0x801323A0
void mnDataMakeDecalSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = gcMakeGObjSPAfter(0, NULL, 2, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, func_ovl0_800CCF00, 0, GOBJ_DLLINKORDER_DEFAULT, -1);

    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNDataFiles[0], &lMNCommonCircleSprite));

    sobj->pos.x = 10.0F;
    sobj->pos.y = 10.0F;

    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNDataFiles[0], &lMNCommonPaperTearSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0xA0;
    sobj->sprite.green = 0x78;
    sobj->sprite.blue  = 0x14;

    sobj->pos.x = 140.0F;
    sobj->pos.y = 143.0F;

    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNDataFiles[0], &lMNCommonPaperTearSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0xA0;
    sobj->sprite.green = 0x78;
    sobj->sprite.blue  = 0x14;

    sobj->pos.x = 225.0F;
    sobj->pos.y = 56.0F;

    sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sMNDataFiles[1], &lMNDataNotebookSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x99;
    sobj->sprite.green = 0x99;
    sobj->sprite.blue  = 0x99;

    sobj->pos.x = 10.0F;
    sobj->pos.y = 10.0F;
}

// 0x80132534
void mnDataMakeLink3Camera(void)
{
    Camera *cam = CameraGetStruct
    (
        func_8000B93C
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            func_ovl0_800CD2CC,
            20,
            CAMERA_MASK_DLLINK(3),
            -1,
            0,
            1,
            0,
            1,
            0
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801325D4
void mnDataMakeLink2Camera(void)
{
    Camera *cam = CameraGetStruct
    (
        func_8000B93C
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            func_ovl0_800CD2CC,
            40,
            CAMERA_MASK_DLLINK(2),
            -1,
            0,
            1,
            0,
            1,
            0
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132674
void mnDataMakeLink1Camera(void)
{
    Camera *cam = CameraGetStruct
    (
        func_8000B93C
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            func_ovl0_800CD2CC,
            60,
            CAMERA_MASK_DLLINK(1),
            -1,
            0,
            1,
            0,
            1,
            0
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132714
void mnDataMakeLink0Camera(void)
{
    Camera *cam = CameraGetStruct
    (
        func_8000B93C
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            func_ovl0_800CD2CC,
            80,
            CAMERA_MASK_DLLINK(0),
            -1,
            0,
            1,
            0,
            1,
            0
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801327B4
void mnDataInitVars(void)
{
    switch (gSceneData.scene_previous)
    {
    case nSCKindVSRecord:
        sMNDataOption = nMNDataOptionVSRecord;
        break;

    case nSCKindSoundTest:
        sMNDataOption = nMNDataOptionSoundTest;
        break;

    default:
        sMNDataOption = nMNDataOptionCharacters;
        break;
    }
    sMNDataFirstAvailableOption = nMNDataOptionCharacters;

    if (mnDataCheckSoundTestUnlocked() != FALSE)
    {
        sMNDataLastAvailableOption = nMNDataOptionSoundTest;
        sMNDataIsSoundTestUnlocked = TRUE;
    }
    else
    {
        sMNDataLastAvailableOption = nMNDataOptionVSRecord;
        sMNDataIsSoundTestUnlocked = FALSE;
    }
    sMNDataOptionChangeWait = 0;
    sMNDataTotalTimeTics = 0;
    sMNDataIsOptionSelected = FALSE;
    sMNDataReturnTic = sMNDataTotalTimeTics + I_MIN_TO_FRAMES(5);
}

// 0x80132874
void mnDataProcRun(GObj *gobj)
{
    GObj *select_gobj;
    s32 stick_range;

    // 0x8013F2A4
    GObj **option_gobj[/* */] = { &sMNDataCharactersGObj, &sMNDataVSRecordGObj, &sMNDataSoundTestGObj };

    sb32 is_button;

    sMNDataTotalTimeTics++;

    if (sMNDataTotalTimeTics >= 10)
    {
        if (sMNDataTotalTimeTics == sMNDataReturnTic)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindTitle;

            leoInitUnit_atten();

            return;
        }
        if (scSubsysControllerCheckNoInputAll() == FALSE)
        {
            sMNDataReturnTic = sMNDataTotalTimeTics + I_MIN_TO_FRAMES(5);
        }
        if (sMNDataIsOptionSelected != FALSE)
        {
            leoInitUnit_atten();

            return;
        }
        if (sMNDataOptionChangeWait != 0)
        {
            sMNDataOptionChangeWait--;
        }
        if
        (
            (scSubsysControllerGetPlayerStickInRangeLR(-20, 20) != FALSE) &&
            (scSubsysControllerGetPlayerStickInRangeUD(-20, 20) != FALSE) &&
            (scSubsysControllerGetPlayerHoldButtons(U_JPAD | U_CBUTTONS) == FALSE) &&
            (scSubsysControllerGetPlayerHoldButtons(D_JPAD | D_CBUTTONS) == FALSE)
        )
        {
            sMNDataOptionChangeWait = 0;
        }
        if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | START_BUTTON) != FALSE)
        {
            switch (sMNDataOption)
            {
            case nMNDataOptionCharacters:
                func_800269C0_275C0(nSYAudioFGMMenuSelect);
                mnDataUpdateOptionTabSObjs(*option_gobj[sMNDataOption], nMNOptionTabStatusSelected);
                auStopBGM();

                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = nSCKindCharacters;
                sMNDataIsOptionSelected = TRUE;
                return;

            case nMNDataOptionVSRecord:
                func_800269C0_275C0(nSYAudioFGMMenuSelect);
                mnDataUpdateOptionTabSObjs(*option_gobj[sMNDataOption], nMNOptionTabStatusSelected);
                auStopBGM();

                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = nSCKindVSRecord;
                sMNDataIsOptionSelected = TRUE;
                return;

            case nMNDataOptionSoundTest:
                func_800269C0_275C0(nSYAudioFGMMenuSelect);
                mnDataUpdateOptionTabSObjs(*option_gobj[sMNDataOption], nMNOptionTabStatusSelected);
                auStopBGM();

                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = nSCKindSoundTest;
                sMNDataIsOptionSelected = TRUE;
                return;
            }
        }
        if (scSubsysControllerGetPlayerTapButtons(B_BUTTON) != FALSE)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindMainMenu;

            leoInitUnit_atten();

            return;
        }
        if
        (
            mnDataCheckGetOptionButtonInput(is_button, U_JPAD | U_CBUTTONS) ||
            mnDataCheckGetOptionStickInputUD(stick_range, 20, 1)
        )
        {
            func_800269C0_275C0(nSYAudioFGMMenuScroll2);

            mnDataSetOptionChangeWaitP(is_button, stick_range, 7);

            mnDataUpdateOptionTabSObjs(*option_gobj[sMNDataOption], nMNOptionTabStatusNot);

            if (sMNDataOption == sMNDataFirstAvailableOption)
            {
                sMNDataOption = sMNDataLastAvailableOption;
            }
            else sMNDataOption--;

            mnDataUpdateOptionTabSObjs(*option_gobj[sMNDataOption], nMNOptionTabStatusHighlight);

            if (sMNDataOption == sMNDataFirstAvailableOption)
            {
                sMNDataOptionChangeWait += 8;
            }
            gcEjectGObj(sMNDataMenuGObj);

            mnDataMakeMenuGObj();
        }
        if
        (
            mnDataCheckGetOptionButtonInput(is_button, D_JPAD | D_CBUTTONS) ||
            mnDataCheckGetOptionStickInputUD(stick_range, -20, 0)
        )
        {
            func_800269C0_275C0(nSYAudioFGMMenuScroll2);

            mnDataSetOptionChangeWaitN(is_button, stick_range, 7);

            mnDataUpdateOptionTabSObjs(*option_gobj[sMNDataOption], nMNOptionTabStatusNot);

            if (sMNDataOption == sMNDataLastAvailableOption)
            {
                sMNDataOption = sMNDataFirstAvailableOption;
            }
            else sMNDataOption++;

            mnDataUpdateOptionTabSObjs(*option_gobj[sMNDataOption], nMNOptionTabStatusHighlight);

            if (sMNDataOption == sMNDataLastAvailableOption)
            {
                sMNDataOptionChangeWait += 8;
            }
            gcEjectGObj(sMNDataMenuGObj);

            mnDataMakeMenuGObj();
        }
    }
}

// 0x80132D64
void mnDataProcStart(void)
{
    rdSetup rd_setup;

    rd_setup.table_addr = (uintptr_t)&lRDManagerTableAddr;
    rd_setup.table_files_num = (uintptr_t)&lRDManagerTableFilesNum;
    rd_setup.file_heap = NULL;
    rd_setup.file_heap_size = 0;
    rd_setup.status_buf = sMNDataStatusBuf;
    rd_setup.status_buf_size = ARRAY_COUNT(sMNDataStatusBuf);
    rd_setup.force_buf = NULL;
    rd_setup.force_buf_size = 0;

    rdManagerInitSetup(&rd_setup);
    rdManagerLoadFiles
    (
        dMNDataFileIDs,
        ARRAY_COUNT(dMNDataFileIDs),
        sMNDataFiles,
        gsMemoryAlloc
        (
            rdManagerGetAllocSize
            (
                dMNDataFileIDs, 
                ARRAY_COUNT(dMNDataFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mnDataProcRun, 0, GOBJ_LINKORDER_DEFAULT);
    func_8000B9FC(0, 0x80000000, 0x64, 0, 0);

    mnDataInitVars();
    mnDataMakeLink0Camera();
    mnDataMakeLink1Camera();
    mnDataMakeLink2Camera();
    mnDataMakeLink3Camera();
    mnDataMakeDecalSObjs();
    mnDataMakeHeaderSObjs();
    mnDataMakeCharactersSObj();
    mnDataMakeVSRecordSObj();

    if (sMNDataIsSoundTestUnlocked != FALSE)
    {
        mnDataMakeSoundTestSObj();
    }
    mnDataMakeMenuGObj();

    if
    (
        (gSceneData.scene_previous == nSCKindVSRecord)  || 
        (gSceneData.scene_previous == nSCKindCharacters)||
        (gSceneData.scene_previous == nSCKindSoundTest)
    )
    {
        auPlaySong(0, nSYAudioBGMModeSelect);
    }
}

// 0x80132FB0
syDisplaySetup dMNDataDisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x80132FCC
scRuntimeInfo dMNDataGtlSetup = 
{
    0x00000000,
    func_8000A5E4,
    func_8000A340,
    &ovl61_BSS_END,
    0,
    1,
    2,
    0xEA60,
    0,
    0,
    0,
    0x8000,
    0x20000,
    0xC000,
    mnDataProcLights,
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
    mnDataProcStart
};

// 0x80132EC0
void mnDataStartScene(void)
{
    dMNDataDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);
    func_80007024(&dMNDataDisplaySetup);

    dMNDataGtlSetup.arena_size = (size_t) ((uintptr_t)&ovl1_TEXT_START - (uintptr_t)&ovl61_BSS_END);
    gsGTLSceneInit(&dMNDataGtlSetup);
}