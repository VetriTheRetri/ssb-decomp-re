#include <mn/menu.h>
#include <sc/scene.h>
#include <gm/gmsound.h>
#include <sys/thread6.h>
#include <sys/video.h>

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

extern ub8 gSYMainIsDmemOK;

extern uintptr_t D_NF_00000000;
extern uintptr_t D_NF_00000002;

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define mn1PModeCheckGetOptionButtonInput(is_button, mask) \
mnCommonCheckGetOptionButtonInput(sMN1PModeOptionChangeWait, is_button, mask)

#define mn1PModeCheckGetOptionStickInputUD(stick_range, min, b) \
mnCommonCheckGetOptionStickInputUD(sMN1PModeOptionChangeWait, stick_range, min, b)

#define mn1PModeCheckGetOptionStickInputLR(stick_range, min, b) \
mnCommonCheckGetOptionStickInputLR(sMN1PModeOptionChangeWait, stick_range, min, b)

#define mn1PModeSetOptionChangeWaitP(is_button, stick_range, div) \
mnCommonSetOptionChangeWaitP(sMN1PModeOptionChangeWait, is_button, stick_range, div)

#define mn1PModeSetOptionChangeWaitN(is_button, stick_range, div) \
mnCommonSetOptionChangeWaitN(sMN1PModeOptionChangeWait, is_button, stick_range, div)

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x801331A0
GObj *sMN1PModeOptionGObjs[nMN1PModeOptionEnumMax];

// 0x801331B0
s32 sMN1PModePad0x801331B4[2];

// 0x801331B8
s32 sMN1PModeOption;

// 0x801331BC
GObj *D_801331BC_11F2CC;

// 0x801331C0
sb32 sMN1PModeIsProceedScene;

// 0x801331C4
s32 sMN1PModeOptionChangeWait;

// 0x801331C8
s32 sMN1PModeTotalTimeTics;

// 0x801331CC
s32 sMN1PModeReturnTic;

// 0x801331D0
LBFileNode sMN1PModeStatusBuffer[24];

// 0x80133290
void *sMN1PModeFiles[2];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80133080
u32 dMN1PModeFileIDs[/* */] = { &D_NF_00000000, &D_NF_00000002 };

// 0x80133088
Lights1 dMN1PModeLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x801330A0
Gfx dMN1PModeDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMN1PModeLights1),
    gsSPEndDisplayList()
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mn1PModeFuncLights(Gfx **dls)
{
    gSPDisplayList(dls[0]++, dMN1PModeDisplayList);
}

// 0x80131B24
void mn1PModeSetOptionSpriteColors(GObj *gobj, s32 status, s32 option_id)
{
    // 0x801330C8
    syColorRGBPair selcolors = { { 0x00, 0x00, 0x00 }, { 0xFF, 0xFF, 0xFF } };

    // 0x801330D0
    syColorRGBPair hicolors  = { { 0x82, 0x00, 0x28 }, { 0xFF, 0x00, 0x28 } };

    // 0x801330D8
    syColorRGBPair notcolors = { { 0x00, 0x00, 0x00 }, { 0x82, 0x82, 0xAA } };
    
    syColorRGBPair *colors;
    SObj *sobj;
    s32 count;
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
        break; // WARNING: Undefined behavior. This will assign sp 0x1C to colors which is uninitialized.
    }

    /*
     * Because Bonus 1 Pratice and Bonus 2 Practice use shorter, all-in-one option tab sprites, 
     * they only require a single iteration as opposed to full-size, three-piece option tabs.
     */

    count = ((option_id == nMN1PModeOption1PGame) || (option_id == nMN1PModeOptionTrainingMode)) ? 3 : 1;

    sobj = SObjGetStruct(gobj);

    for (i = 0; i < count; i++)
    {
        sobj->envcolor.r = colors->prim.r;
        sobj->envcolor.g = colors->prim.g;
        sobj->envcolor.b = colors->prim.b;

        sobj->sprite.red = colors->env.r;
        sobj->sprite.green = colors->env.g;
        sobj->sprite.blue = colors->env.b;

        sobj = sobj->next;
    }
}

// 0x80131D04
void mn1PModeMakeOptionTab(GObj *gobj, f32 pos_x, f32 pos_y, s32 lrs)
{
    SObj  *sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PModeFiles[0], &lMNCommonOptionTabLeftSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = pos_x;
    sobj->pos.y = pos_y;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PModeFiles[0], &lMNCommonOptionTabMiddleSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = pos_x + 16.0F;
    sobj->pos.y = pos_y;
    
    sobj->cms = 0;
    sobj->cmt = 0;
    
    sobj->masks = 4;
    sobj->maskt = 0;

    sobj->lrs = lrs * 8;
    sobj->lrt = 29;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PModeFiles[0], &lMNCommonOptionTabRightSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = pos_x + 16.0F + (lrs * 8);
    sobj->pos.y = pos_y;
}

// 0x80131E34
void mn1PModeMake1PGame(void)
{
    GObj *gobj;
    SObj *sobj;

    sMN1PModeOptionGObjs[nMN1PModeOption1PGame] = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 2, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    mn1PModeMakeOptionTab(gobj, 124.0F, 42.0F, 16);
    mn1PModeSetOptionSpriteColors(gobj, sMN1PModeOption == nMN1PModeOption1PGame, nMN1PModeOption1PGame);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PModeFiles[1], &lMN1PModeText1PGameSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;
    
    sobj->pos.x = 161.0F;
    sobj->pos.y = 46.0F;
}

// 0x80131F0C
void mn1PModeMakeTrainingMode(void)
{
    GObj *gobj;
    SObj *sobj;
    
    sMN1PModeOptionGObjs[nMN1PModeOptionTrainingMode] = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 2, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    mn1PModeMakeOptionTab(gobj, 99.0F, 84.0F, 16);
    mn1PModeSetOptionSpriteColors(gobj, sMN1PModeOption == nMN1PModeOptionTrainingMode, nMN1PModeOptionTrainingMode);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PModeFiles[1], &lMN1PModeTextTraningModeSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;
    
    sobj->pos.x = 107.0F;
    sobj->pos.y = 87.0F;
}

// 0x80131FE8
void mn1PModeMakeBonus1Practice(void)
{
    GObj *gobj;
    SObj *sobj;

    sMN1PModeOptionGObjs[nMN1PModeOptionBonus1Practice] = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 2, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PModeFiles[1], &lMN1PModeOptionTabSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = 78.0F;
    sobj->pos.y = 126.0F;
    
    mn1PModeSetOptionSpriteColors(gobj, sMN1PModeOption == nMN1PModeOptionBonus1Practice, nMN1PModeOptionBonus1Practice);
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PModeFiles[1], &lMN1PModeTextBonus1PracticeSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;
    
    sobj->pos.x = 97.0F;
    sobj->pos.y = 127.0F;
}

// 0x801320F8
void mn1PModeMakeBonus2Practice(void)
{
    GObj *gobj;
    SObj *sobj;

    sMN1PModeOptionGObjs[nMN1PModeOptionBonus2Practice] = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 2, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PModeFiles[1], &lMN1PModeOptionTabSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = 67.0F;
    sobj->pos.y = 148.0F;
    
    mn1PModeSetOptionSpriteColors(gobj, sMN1PModeOption == nMN1PModeOptionBonus2Practice, nMN1PModeOptionBonus2Practice);
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PModeFiles[1], &lMN1PModeTextBonus2PracticeSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;
    
    sobj->pos.x = 86.0F;
    sobj->pos.y = 149.0F;
}

// 0x80132208
void func_ovl18_80132208(SObj *sobj)
{
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->envcolor.r = 0x00;
    sobj->envcolor.g = 0x00;
    sobj->envcolor.b = 0x00;
    
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue = 0xFF;
}

// 0x8013223C
void func_ovl18_8013223C(void)
{
    D_801331BC_11F2CC = gcMakeGObjSPAfter(0, NULL, 5, GOBJ_LINKORDER_DEFAULT);
}

// 0x8013226C
void mn1PModeLabelsFuncDisplay(GObj *gobj)
{
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0xA0, 0x78, 0x14, 0xE6);
    gDPSetCombineMode(gSYTaskmanDLHeads[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gSYTaskmanDLHeads[0]++, 225, 143, 310, 230);
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
    
    lbCommonClearExternSpriteParams();
    lbCommonDrawSObjAttr(gobj);
}

// 0x801323B0
void mn1PModeMakeLabels(void)
{
    GObj *gobj;
    SObj *sobj;
    
    gobj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, mn1PModeLabelsFuncDisplay, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PModeFiles[0], &lMNCommonSmashLogoSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;
    
    sobj->pos.x = 235.0F;
    sobj->pos.y = 158.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PModeFiles[1], &lMN1PModeLabel1PSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;
    
    sobj->pos.x = 161.0F;
    sobj->pos.y = 194.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PModeFiles[0], &lMNCommonLabelGameModeSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;
    
    sobj->pos.x = 188.0F;
    sobj->pos.y = 88.0F;
}

// 0x801324FC
void mn1PModeMakeDecals(void)
{
    GObj *gobj;
    SObj *sobj;
    
    gobj = gcMakeGObjSPAfter(0, NULL, 2, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PModeFiles[0], &lMNCommonWallpaperSprite));
    
    sobj->pos.x = 10.0F;
    sobj->pos.y = 10.0F;

    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PModeFiles[0], &lMNCommonDecalPaperSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0xA0;
    sobj->sprite.green = 0x78;
    sobj->sprite.blue = 0x14;
    
    sobj->pos.x = 140.0F;
    sobj->pos.y = 143.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PModeFiles[0], &lMNCommonDecalPaperSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0xA0;
    sobj->sprite.green = 0x78;
    sobj->sprite.blue = 0x14;
    
    sobj->pos.x = 225.0F;
    sobj->pos.y = 56.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PModeFiles[1], &lMN1PModeDecalControllerSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0x99;
    sobj->sprite.green = 0x99;
    sobj->sprite.blue = 0x99;
    
    sobj->pos.x = 10.0F;
    sobj->pos.y = 10.0F;
}

// 0x80132690
void mn1PModeMakeLink3Camera(void)
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
            20,
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

// 0x80132730
void mn1PModeMakeOptionsCamera(void)
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

// 0x801327D0
void mn1PModeMakeLabelsCamera(void)
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

// 0x80132870
void mn1PModeMakeDecalsCamera(void)
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

// 0x80132910
void mn1PModeInitVars(void)
{
    switch (gSceneData.scene_previous)
    {
    case nSCKind1PGameFighters:
        sMN1PModeOption = nMN1PModeOption1PGame;
        break;
        
    case nSCKind1PTrainingFighters:
        sMN1PModeOption = nMN1PModeOptionTrainingMode;
        break;
        
    case nSCKind1PBonus1Fighters:
        sMN1PModeOption = nMN1PModeOptionBonus1Practice;
        break;
        
    case nSCKind1PBonus2Fighters:
        sMN1PModeOption = nMN1PModeOptionBonus2Practice;
        break;
    }
    sMN1PModeOptionChangeWait = 0;
    sMN1PModeTotalTimeTics = 0;

    sMN1PModeIsProceedScene = FALSE;
    
    sMN1PModeReturnTic = sMN1PModeTotalTimeTics + I_MIN_TO_TICS(5);
}

// 0x801329A8
void mn1PModeFuncRun(GObj *gobj)
{
    s32 unused;
    
    // 0x801330E0
    GObj **option_gobjs[/* */] =
    {
        &sMN1PModeOptionGObjs[nMN1PModeOption1PGame],
        &sMN1PModeOptionGObjs[nMN1PModeOptionTrainingMode],
        &sMN1PModeOptionGObjs[nMN1PModeOptionBonus1Practice],
        &sMN1PModeOptionGObjs[nMN1PModeOptionBonus2Practice],
    };

    s32 stick_range;
    s32 player;
    sb32 is_button;
    
    sMN1PModeTotalTimeTics++;

    if (sMN1PModeTotalTimeTics >= 10)
    {
        if (sMN1PModeTotalTimeTics == sMN1PModeReturnTic)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindTitle;

            syTaskmanSetLoadScene();
            return;
        }
        if (scSubsysControllerCheckNoInputAll() == FALSE)
        {
            sMN1PModeReturnTic = sMN1PModeTotalTimeTics + I_MIN_TO_TICS(5);
        }
        if (sMN1PModeIsProceedScene != FALSE)
        {
            syTaskmanSetLoadScene();
        }
        if (sMN1PModeOptionChangeWait != 0)
        {
            sMN1PModeOptionChangeWait--;
        }
        if
        (
            (scSubsysControllerGetPlayerStickInRangeLR(-20, 20) != FALSE)          &&
            (scSubsysControllerGetPlayerStickInRangeUD(-20, 20) != FALSE)          &&
            (scSubsysControllerGetPlayerHoldButtons(U_JPAD | U_CBUTTONS) == FALSE) &&
            (scSubsysControllerGetPlayerHoldButtons(D_JPAD | D_CBUTTONS) == FALSE)
        )
        {
            sMN1PModeOptionChangeWait = 0;
        }
        player = scSubsysControllerGetPlayerTapButtons(A_BUTTON | START_BUTTON);

        if (player != FALSE)
        {
            switch (sMN1PModeOption)
            {
            case nMN1PModeOption1PGame:
                func_800269C0_275C0(nSYAudioFGMMenuSelect);
                mn1PModeSetOptionSpriteColors(sMN1PModeOptionGObjs[nMN1PModeOption1PGame], nMNOptionTabStatusSelected, nMN1PModeOption1PGame);

                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = nSCKind1PGameFighters;
                gSceneData.spgame_player = player - 1;

                sMN1PModeIsProceedScene = TRUE;
                return;

            case nMN1PModeOptionTrainingMode:
                func_800269C0_275C0(nSYAudioFGMMenuSelect);
                mn1PModeSetOptionSpriteColors(sMN1PModeOptionGObjs[nMN1PModeOptionTrainingMode], nMNOptionTabStatusSelected, nMN1PModeOptionTrainingMode);

                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = nSCKind1PTrainingFighters;
                gSceneData.spgame_player = player - 1;

                sMN1PModeIsProceedScene = TRUE;
                return;

            case nMN1PModeOptionBonus1Practice:
                func_800269C0_275C0(nSYAudioFGMMenuSelect);
                mn1PModeSetOptionSpriteColors(sMN1PModeOptionGObjs[nMN1PModeOptionBonus1Practice], nMNOptionTabStatusSelected, nMN1PModeOptionBonus1Practice);

                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = nSCKind1PBonus1Fighters;
                gSceneData.spgame_player = player - 1;

                sMN1PModeIsProceedScene = TRUE;
                return;

            case nMN1PModeOptionBonus2Practice:
                func_800269C0_275C0(nSYAudioFGMMenuSelect);
                mn1PModeSetOptionSpriteColors(sMN1PModeOptionGObjs[nMN1PModeOptionBonus2Practice], nMNOptionTabStatusSelected, nMN1PModeOptionBonus2Practice);

                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = nSCKind1PBonus2Fighters;
                gSceneData.spgame_player = player - 1;

                sMN1PModeIsProceedScene = TRUE;
                return;
            }
        }
        if (scSubsysControllerGetPlayerTapButtons(B_BUTTON) != FALSE)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindModeSelect;

            syTaskmanSetLoadScene();
        }
        if
        (
            mn1PModeCheckGetOptionButtonInput(is_button, U_JPAD | U_CBUTTONS) ||
            mn1PModeCheckGetOptionStickInputUD(stick_range, 20, 1)
        )
        {
            func_800269C0_275C0(nSYAudioFGMMenuScroll2);

            mn1PModeSetOptionChangeWaitP(is_button, stick_range, 7);
            mn1PModeSetOptionSpriteColors(*option_gobjs[sMN1PModeOption], nMNOptionTabStatusNot, sMN1PModeOption);

            if (sMN1PModeOption == nMN1PModeOptionStart)
            {
                sMN1PModeOption = nMN1PModeOptionEnd;
            }
            else sMN1PModeOption--;
            
            if (sMN1PModeOption == nMN1PModeOptionStart)
            {
                sMN1PModeOptionChangeWait += 8;
            }
            mn1PModeSetOptionSpriteColors(*option_gobjs[sMN1PModeOption], nMNOptionTabStatusHighlight, sMN1PModeOption);
            gcEjectGObj(D_801331BC_11F2CC);
            func_ovl18_8013223C();
        }
        if
        (
            mn1PModeCheckGetOptionButtonInput(is_button, D_JPAD | D_CBUTTONS) ||
            mn1PModeCheckGetOptionStickInputUD(stick_range, -20, 0)
        )
        {
            func_800269C0_275C0(nSYAudioFGMMenuScroll2);

            mn1PModeSetOptionChangeWaitN(is_button, stick_range, 7);
            mn1PModeSetOptionSpriteColors(*option_gobjs[sMN1PModeOption], nMNOptionTabStatusNot, sMN1PModeOption);

            if (sMN1PModeOption == nMN1PModeOptionEnd)
            {
                sMN1PModeOption = nMN1PModeOptionStart;
            }
            else sMN1PModeOption++;
            
            if (sMN1PModeOption == nMN1PModeOptionEnd)
            {
                sMN1PModeOptionChangeWait += 8;
            }
            mn1PModeSetOptionSpriteColors(*option_gobjs[sMN1PModeOption], nMNOptionTabStatusHighlight, sMN1PModeOption);
            gcEjectGObj(D_801331BC_11F2CC);
            func_ovl18_8013223C();
        }
    }
}

// 0x80132E9C
void mn1PModeFuncStart(void)
{
    LBRelocSetup rl_setup;
    
    rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
    rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
    rl_setup.file_heap = NULL;
    rl_setup.file_heap_size = 0;
    rl_setup.status_buffer = sMN1PModeStatusBuffer;
    rl_setup.status_buffer_size = ARRAY_COUNT(sMN1PModeStatusBuffer);
    rl_setup.force_status_buffer = NULL;
    rl_setup.force_status_buffer_size = 0;
    
    lbRelocInitSetup(&rl_setup);
    
    if (!(gSaveData.error_flags & LBBACKUP_ERROR_HALFSTICKRANGE) && (gSaveData.unk5E3 > 42) && (gSYMainIsDmemOK == FALSE))
    {
        gSaveData.error_flags |= LBBACKUP_ERROR_HALFSTICKRANGE;
    }
    lbRelocLoadFilesExtern
    (
        dMN1PModeFileIDs,
        ARRAY_COUNT(dMN1PModeFileIDs),
        sMN1PModeFiles,
        syTaskmanMalloc
        (
            lbRelocGetAllocSize
            (
                dMN1PModeFileIDs,
                ARRAY_COUNT(dMN1PModeFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mn1PModeFuncRun, 0, GOBJ_LINKORDER_DEFAULT);
    gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0, GPACK_RGBA8888(0x00, 0x00, 0x00, 0x00));
    
    mn1PModeInitVars();
    mn1PModeMakeDecalsCamera();
    mn1PModeMakeLabelsCamera();
    mn1PModeMakeOptionsCamera();
    mn1PModeMakeLink3Camera();
    mn1PModeMakeDecals();
    mn1PModeMakeLabels();
    mn1PModeMake1PGame();
    mn1PModeMakeTrainingMode();
    mn1PModeMakeBonus1Practice();
    mn1PModeMakeBonus2Practice();
    func_ovl18_8013223C();
    
    if (gSceneData.scene_previous != nSCKindModeSelect)
    {
        auPlaySong(0, nSYAudioBGMModeSelect);
    }
}

// 0x801330F0
syVideoSetup dMN1PModeVideoSetup = SYVIDEO_DEFINE_DEFAULT();

// 0x8013310C
syTaskmanSetup dMN1PModeTaskmanSetup =
{
    // Task Logic Buffer Setup
    {
        0,                          // ???
        func_8000A5E4,              // Update function
        func_8000A340,              // Frame draw function
        &ovl18_BSS_END,             // Allocatable memory pool start
        0,                          // Allocatable memory pool size
        1,                          // ???
        2,                          // Number of contexts?
        sizeof(Gfx) * 7500,         // Display List Buffer 0 Size
        0,                          // Display List Buffer 1 Size
        0,                          // Display List Buffer 2 Size
        0,                          // Display List Buffer 3 Size
        0x8000,                     // Graphics Heap Size
        2,                          // ???
        0xC000,                     // RDP Output Buffer Size
        mn1PModeFuncLights,         // Pre-render function
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
    NULL,                           // Matrix function list
    NULL,                           // Function for ejecting DObjVec?
    0,                              // Number of AObjs
    0,                              // Number of MObjs
    0,                              // Number of DObjs
    sizeof(DObj),                   // DObj size
    0,                              // Number of SObjs
    sizeof(SObj),                   // SObj size
    0,                              // Number of Cameras
    sizeof(CObj),                 	// CObj size
    
    mn1PModeFuncStart               // Task start function
};

// 0x80133020
void mn1PModeStartScene(void)
{
    dMN1PModeVideoSetup.zbuffer = syVideoGetZBuffer(6400);
    syVideoInit(&dMN1PModeVideoSetup);
    
    dMN1PModeTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl18_BSS_END);
    syTaskmanInit(&dMN1PModeTaskmanSetup);
}
