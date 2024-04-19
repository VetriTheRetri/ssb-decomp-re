#include <sys/develop.h>
// #include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <introPortraits.h>

// // ovl1 stuff
// extern f32 menu_zoom[12]; // D_ovl1_80390D90

// // ovl35 stuff
// extern RldmFileId D_ovl31_80138F70[8];

// extern s32 dMnResultsAnnouncerNames[12]; // 0x80138FA8
// extern s32 dMnResultsAnnouncerTeams[12]; // 0x80138FD8

extern intptr_t dIntroPortraitsPortraitOffsets[4]; // 0x801328D8;
extern Vec2f dIntroPortraitsPortraitPositions[4]; // 0x801328E8;
extern intptr_t dIntroPortraitsPortraitOffsets2[4]; // 0x80132908;
extern Vec2f dIntroPortraitsPortraitPositions2[4]; // 0x80132918;
// extern intptr_t dMnResultsLogoZoomAnimOffsets[12]; // 0x80139014;
// extern intptr_t dMnResultsLogoColorAnimOffsets[12]; // 0x80139044;
// extern s32 dMnResultsTeamColorIndexes[3]; // 0x80139074;
// extern gsColorRGBPair dMnResultsUnusedBackgroundColors[4]; // 0x80139080;
// extern uintptr_t dMnResultsUnusedBackgroundColorArrays[4]; // 0x80139098;
// extern s32 dMnResultsBackgroundTeamColorIndexes[3]; // 0x801390A8;
// extern gsColorRGBPair dMnResultsBackgroundColors[4]; // 0x801390B4;

// extern f32 dMnResultsFighterXPositions2P[2][4]; // 0x801390CC;
// extern f32 dMnResultsFighterXPositions3P[3][4]; // 0x801390EC;
// extern f32 dMnResultsFighterXPositions4P[4][4]; // 0x8013911C;
// extern Vec2f dMnResultsFighterYZPositions[4]; // 0x8013915C;
// extern s32 mnResultsVictoryAnims[3]; // 0x8013917C;
// extern s32 D_ovl31_80139188[4]; // D_ovl31_80139188;
// extern s32 D_ovl31_80139198[5]; // D_ovl31_80139198;
// extern Vec2f dMnResultsIndicatorPositions3P[3][4]; // 0x801391EC;
// extern Vec2f dMnResultsIndicatorPositions4P[4][4]; // 0x8013924C;
// extern f32 dMnResultsIndicatorYOffsets[12][4] = {
//     {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0},
//     {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}
// }; // 0x801392CC;
// extern gsColorRGBPair dMnResultsUnusedIndicatorColors[4]; // 0x8013938C;
// extern intptr_t dMnResultsIndicatorOffsets[4]; // 0x801393A4;
// extern f32 dMnResultsCharWidths[28]; // 0x801393B4;
// extern intptr_t dMnResultsCharOffsets[28]; // 0x80139424;
// extern gsColorRGBPair dMnResultsCharColors[5]; // 0x80139494;
// extern f32 dMnResultsWinsXByKind[12]; // 0x801394B4;
// extern f32 dMnResultsWinsXByTeam[3]; // 0x801394E4;
// extern char* dMnResultsWinnerStringByKind[12]; // 0x801394F0;
// extern f32 dMnResultsNameXByKind[12]; // 0x80139520;
// extern f32 dMnResultsNameScaleXByKind[12]; // 0x80139550;
// extern char* dMnResultsWinnerStringByTeam[9]; // 0x80139580;
// extern f32 dMnResultsNameXByTeam[9]; // 0x801395A4;
// extern gsColorRGBPair dMnResultsNumberColors[5]; // 0x801395C8
// extern intptr_t dMnResultsNumberOffsets[10]; // 0x801395E8
// extern gsColorRGBPair dMnResultsUnusedNumberColors[5]; // 0x80139610
// extern intptr_t dMnResultsPlaceNumberOffsets[10]; // 0x80139630;
// extern gsColorRGBPair dMnResultsPlaceNumberUnusedColors[5]; // 0x80139658;
// extern f32 dMnResultsColumnX2P[2]; // 0x80139678;
// extern f32 dMnResultsColumnX3P[3]; // 0x80139680;
// extern f32 dMnResultsColumnX4P[4]; // 0x8013968C;
// extern s32 dMnResultsNumberTeamColorIndexes[3]; // 0x8013969C
// extern intptr_t dMnResultsPortIndicatorOffsets[4]; // 0x801396A8

// extern intptr_t dMnResultsScreenTitleOffsets[2]; // 0x801396DC
// extern uintptr_t dMnResultsRoutines[5]; // 0x801396E4
// extern f32 D_ovl31_801396F8[3]; // 0x801396F8;
// extern f32 D_ovl31_80139704[3]; // 0x80139704;
// extern scUnkDataBounds D_ovl31_80139710;
// extern scRuntimeInfo D_ovl31_8013972C;

// extern char dMnResultsStringWin[] = "W1I1N1!"; // 0x801397C0
// extern char dMnResultsStringWins[] = "W1I1N1S1!"; // 0x801397C8

// extern char dMnResultsStringNoContest[] = "NO CONTEST"; // 0x80139854

// extern s32 gMnResultsFramesElapsed; // 0x80139B78; // frames elapsed on Results screen
// extern s32 gMnResultsHorizontalLineWidth; // 0x80139B7C;
// extern s32 gMnResultsKOs[4]; // 0x80139B80
// extern s32 gMnResultsTKOs[4]; // 0x80139B90
// extern s32 gMnResultsPoints[4]; // 0x80139BA0;
// extern s32 gMnResultsPlacement[4]; // 0x80139BB0
// extern u32 gMnResultsOverlayAlpha; // 0x80139BC0;
// extern u32 gMnResultsBackgroundOverlayAlpha; // 0x80139BC4;
// extern u32 gMnResultsBackgroundOverlay2Alpha; // 0x80139BC8;
// extern sb32 gMnResultsIsPresent[4]; // 0x80139BD0
extern GObj* gIntroPortraitsPortraitGObj; // 0x801329F0
// extern s32 gMnResultsFtKind[4]; // 0x80139BF0
// extern void* gMnResultsAnimHeaps[4]; // 0x80139C00
// extern s32 gMnResultsGameRule; // 0x80139C10
// extern ub8 gMnResultsIsTeamBattle; // 0x80139C14
// extern s32 gMnResultsMinFramesElapsed; // 0x80139C18 // frames to wait until pressing start will exit the Results screen

// extern sb32 gMnResultsIsSharedWinner[4]; // 0x80139C20

// extern s32 gMnResultsCharacterAlpha; // 0x80139C40;
// extern s32 gMnResultsDrawBackgroundFrame; // 0x80139C44;
// extern s32 gMnResultsDrawWinnerTextFrame; // 0x80139C48;
// extern s32 gMnResultsDrawFightersFrame; // 0x80139C4C;

// extern u32 D_ovl31_80139C50[240];
// extern rdFileNode D_ovl31_8013A010;
// extern uintptr_t D_NF_001AC870;
// extern uintptr_t D_NF_00000854;

extern s32 gIntroPortraitsFilesArray[2]; // 0x80132BB0[2]
// gIntroPortraitsFilesArray[0] - D_ovl35_80132BB0; // file 0x035 pointer
// gIntroPortraitsFilesArray[1] - D_ovl35_80132BB4; // file 0x036 pointer

// Offsets
// extern intptr_t FILE_022_TKO_TEXTURE_IMAGE_OFFSET = 0x358; // file 0x022 image offset for TKO texture
// extern intptr_t FILE_022_PLACE_TEXTURE_IMAGE_OFFSET = 0x990; // file 0x022 image offset for Place texture
// extern intptr_t FILE_022_POINTS_TEXTURE_IMAGE_OFFSET = 0x10D8; // file 0x022 image offset for Pts texture
// extern intptr_t FILE_022_KOS_TEXTURE_IMAGE_OFFSET = 0xD38; // file 0x022 image offset for KOs texture
// extern intptr_t FILE_022_BACKGROUND_IMAGE_OFFSET = 0xD5C8; // file 0x022 image offset for background image
// extern intptr_t FILE_022_FIRST_PLACE_ICON_IMAGE_OFFSET = 0xE2A0; // file 0x022 image offset for 1st place icon

// extern intptr_t FILE_024_DASH_IMAGE_OFFSET = 0x710; // file 0x024 image offset for dash

// extern intptr_t FILE_026_INDICATOR_CP_IMAGE_OFFSET = 0xCD8; // file 0x026 image offset for CPU player indicator

// extern intptr_t FILE_0A4_1_IMAGE_OFFSET = 0x2D8; // file 0x0A4 image offset for number 1

// 0x80131B00
void introPortraitsSetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B58
void introPortraitsCreatePortraits()
{
    GObj* portraits_gobj;
    SObj* portrait_sobj;
    s32 i;
    intptr_t offsets[4] = dIntroPortraitsPortraitOffsets;
    Vec2f positions[4] = dIntroPortraitsPortraitPositions;

    gIntroPortraitsPortraitGObj = portraits_gobj = omMakeGObjCommon(0, 0, 0x11, 0x80000000U);
    omAddGObjRenderProc(portraits_gobj, func_ovl0_800CCF00, 0x1B, 0x80000000U, -1);

    for (i = 0; i < ARRAY_COUNT(offsets); i++)
    {
        portrait_sobj = gcAppendSObjWithSprite(portraits_gobj, GetAddressFromOffset(gIntroPortraitsFilesArray[0], offsets[i]));
        portrait_sobj->sprite.attr &= ~SP_FASTCOPY;
        portrait_sobj->pos.x = positions[i].x;
        portrait_sobj->pos.y = positions[i].y;
    }
}

// 0x80131CAC
void func_ovl35_80131CAC()
{
    GObj* portraits_gobj;
    SObj* portrait_sobj;
    s32 i;
    intptr_t offsets[4] = dIntroPortraitsPortraitOffsets2;
    Vec2f positions[4] = dIntroPortraitsPortraitPositions2;

    gIntroPortraitsPortraitGObj = portraits_gobj = omMakeGObjCommon(0, 0, 0x11, 0x80000000U);
    omAddGObjRenderProc(portraits_gobj, func_ovl0_800CCF00, 0x1B, 0x80000000U, -1);

    for (i = 0; i < ARRAY_COUNT(offsets); i++)
    {
        portrait_sobj = gcAppendSObjWithSprite(portraits_gobj, GetAddressFromOffset(gIntroPortraitsFilesArray[1], offsets[i]));
        portrait_sobj->sprite.attr &= ~SP_FASTCOPY;
        portrait_sobj->pos.x = positions[i].x;
        portrait_sobj->pos.y = positions[i].y;
    }
}

// 0x80131E00
void func_ovl35_80131E00()
{
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 65);
}

// 0x80131E30
void func_ovl35_80131E30()
{
    gDPFillRectangle(gDisplayListHead[0]++, 10, 65, 310, 120);
}

// 0x80131E60
void func_ovl35_80131E60()
{
    gDPFillRectangle(gDisplayListHead[0]++, 10, 120, 310, 175);
}

// 0x80131E90
void func_ovl35_80131E90()
{
    gDPFillRectangle(gDisplayListHead[0]++, 10, 175, 310, 230);
}

// 0x80131EC0
void func_ovl35_80131EC0(s32 row, s32 x_offset)
{
    s32 uly = 10 + row * 55;
    s32 lry = 65 + row * 55;

    if (x_offset > 0)
    {
        gDPFillRectangle(gDisplayListHead[0]++, 0, uly, x_offset, lry);
    }

    if (x_offset + 0x290 < 0)
    {
        gDPFillRectangle(gDisplayListHead[0]++, 0, uly, 320, lry);
    }

    if (x_offset + 0x290 < 0x140)
    {
        gDPFillRectangle(gDisplayListHead[0]++, x_offset + 0x290, uly, 320, lry);
    }
}

// 0x80131FC4
void func_ovl35_80131FC4(GObj* arg0)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0, 0, 0, 255);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    switch (D_ovl35_801329EC)
    {
        case 0:
            func_ovl35_80131E30();
            func_ovl35_80131E60();
            func_ovl35_80131E90();
            func_ovl35_80131EC0(0, SObjGetStruct(arg0)->pos.x);
            break;
        case 1:
            func_ovl35_80131E00();
            func_ovl35_80131E60();
            func_ovl35_80131E90();
            func_ovl35_80131EC0(1, SObjGetStruct(arg0)->pos.x);
            break;
        case 2:
            func_ovl35_80131E00();
            func_ovl35_80131E30();
            func_ovl35_80131E90();
            func_ovl35_80131EC0(2, SObjGetStruct(arg0)->pos.x);
            break;
        case 3:
            func_ovl35_80131E00();
            func_ovl35_80131E30();
            func_ovl35_80131E60();
            func_ovl35_80131EC0(3, SObjGetStruct(arg0)->pos.x);
            break;
    }

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

    func_ovl0_800CCEAC();
    func_ovl0_800CCF00(arg0);
}

// 0x801321FC
void func_ovl35_801321FC(GObj* arg0)
{
    SObj* temp_v0 = SObjGetStruct(arg0);

    if (D_ovl35_801329E8 == 75)
    {
        temp_v0->pos.x = -656.0F;
    }

    if (D_ovl35_801329E8 < 75)
    {
        if (temp_v0->pos.x < 656.0F)
        {
            temp_v0->pos.x += 93.0F;

            if (temp_v0->pos.x > 656.0F)
            {
                temp_v0->pos.x = 656.0F;
            }
        }
    }
    else
    {
        if (temp_v0->pos.x > -656.0F)
        {
            temp_v0->pos.x -= 93.0F;

            if (temp_v0->pos.x < -656.0F)
            {
                temp_v0->pos.x = -656.0F;
            }
        }
    }

    switch (D_ovl35_801329E8)
    {
        case 15:
            temp_v0->pos.x = -656.0F;
            temp_v0->pos.y = 10.0F;
            D_ovl35_801329EC = 0;
            break;
        case 45:
            temp_v0->pos.x = -656.0F;
            temp_v0->pos.y = 65.0F;
            D_ovl35_801329EC = 1;
            break;
        case 30:
            temp_v0->pos.x = -656.0F;
            temp_v0->pos.y = 120.0F;
            D_ovl35_801329EC = 2;
            break;
        case 60:
            temp_v0->pos.x = -656.0F;
            temp_v0->pos.y = 175.0F;
            D_ovl35_801329EC = 3;
            break;
        case 105:
            temp_v0->pos.x = 656.0F;
            temp_v0->pos.y = 10.0F;
            D_ovl35_801329EC = 0;
            break;
        case 135:
            temp_v0->pos.x = 656.0F;
            temp_v0->pos.y = 65.0F;
            D_ovl35_801329EC = 1;
            break;
        case 90:
            temp_v0->pos.x = 656.0F;
            temp_v0->pos.y = 120.0F;
            D_ovl35_801329EC = 2;
            break;
        case 120:
            temp_v0->pos.x = 656.0F;
            temp_v0->pos.y = 175.0F;
            D_ovl35_801329EC = 3;
            break;
    }
}

// 0x80132414
void func_ovl35_80132414()
{
    GObj* temp_v0;
    SObj* temp_v0_2;

    temp_v0 = omMakeGObjCommon(0, 0, 0x12, 0x80000000);
    omAddGObjRenderProc(temp_v0, &func_ovl35_80131FC4, 0x1C, 0x80000000, -1);

    temp_v0_2 = gcAppendSObjWithSprite(temp_v0, GetAddressFromOffset(D_ovl35_80132BB0[0], &D_NF_0002B2D0));
    temp_v0_2->sprite.attr &= ~SP_FASTCOPY;
    temp_v0_2->sprite.attr |= SP_TRANSPARENT;
    temp_v0_2->sprite.red = 0;
    temp_v0_2->sprite.green = 0;
    temp_v0_2->sprite.blue = 0;
    temp_v0_2->pos.x = 656.0f;
    temp_v0_2->pos.y = 10.0f;
    omAddGObjCommonProc(temp_v0, func_ovl35_801321FC, 1, 1);
}

// 0x801324D0
void func_ovl35_801324D0()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x8000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132570
void func_ovl35_80132570()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x3C, 0x10000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132610
void func_ovl35_80132610()
{
    D_ovl35_801329E8 = 0;
    D_ovl35_801329EC = 0;
}

// 0x80132624
void introPortraitsMain(s32 arg0)
{
    D_ovl35_801329E8 += 1;

    if (D_ovl35_801329E8 >= 10)
    {
        if (D_ovl35_801329F4 != 0)
        {
            D_ovl35_801329F4 -= 1;
        }

        if ((func_ovl1_80390A04(-0xF, 0xF) != 0) && (func_ovl1_80390AC0(-0xF, 0xF) != 0))
        {
            D_ovl35_801329F4 = 0;
        }

        if (func_ovl1_8039076C(0xD000) != 0)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 1;
            func_80005C74();
        }

        if (D_ovl35_801329E8 == 75)
        {
            omEjectGObjCommon(gIntroPortraitsPortraitGObj);
            func_ovl35_80131CAC();
        }

        if (D_ovl35_801329E8 == 150)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 0x1E;
            func_80005C74();
        }
    }
}

// 0x80132718
void introPortraitsInit()
{
    s32 foo;
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl35_801329F8;
    rldmSetup.statusBufSize = 0x30;
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl35_80132B78;
    rldmSetup.forceBufSize = 7;
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl35_801328A0, ARRAY_COUNT(D_ovl35_801328A0), D_ovl35_80132BB0, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl35_801328A0, ARRAY_COUNT(D_ovl35_801328A0)), 0x10));

    omMakeGObjCommon(0, introPortraitsMain, 0, 0x80000000);
    func_8000B9FC(0, 0x80000000, 0x64, 3, 0xFF);
    func_ovl35_80132610();
    func_ovl35_801324D0();
    func_ovl35_80132570();
    introPortraitsCreatePortraits();
    func_ovl35_80132414();

    if (func_8000092C() < 0x537U) {
        do {} while (func_8000092C() < 0x537U);
    }
}

// intro_portrait_wipes_entry
void intro_portrait_wipes_entry()
{
    D_ovl35_80132938.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl35_80132938);
    D_ovl35_80132954.arena_size = (u32) ((uintptr_t)&func_ovl1_803903E0 - (uintptr_t)&D_NF_80132BC0);
    func_8000683C(&D_ovl35_80132954);
}
