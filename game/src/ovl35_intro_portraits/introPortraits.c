#include <sys/develop.h>
// #include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <introPortraits.h>

// // ovl35 stuff
extern RldmFileId D_ovl35_801328A0[2];

extern intptr_t dIntroPortraitsPortraitOffsetsSet1[4]; // 0x801328D8;
extern Vec2f dIntroPortraitsPortraitPositionsSet1[4]; // 0x801328E8;
extern intptr_t dIntroPortraitsPortraitOffsetsSet2[4]; // 0x80132908;
extern Vec2f dIntroPortraitsPortraitPositionsSet2[4]; // 0x80132918;

extern scUnkDataBounds D_ovl35_80132938;
extern scRuntimeInfo D_ovl35_80132954;

extern s32 gIntroPotraitsFramesElapsed; // 0x801329E8
extern s32 gIntroPotraitsCurrentRow; // 0x801329EC
extern GObj* gIntroPortraitsPortraitGObj; // 0x801329F0
extern s32 gIntroPortraitsUnusedCounter; // 0x801329F4;
extern u32 D_ovl35_801329F8[];
extern rdFileNode D_ovl35_80132B78;
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern s32 gIntroPortraitsFilesArray[2]; // 0x80132BB0[2]
// gIntroPortraitsFilesArray[0] - D_ovl35_80132BB0; // file 0x035 pointer
// gIntroPortraitsFilesArray[1] - D_ovl35_80132BB4; // file 0x036 pointer

// Offsets
extern intptr_t FILE_035_PORTRAIT_OVERLAY_IMAGE_OFFSET = 0x2B2D0; // file 0x035 image offset for portrait overlay

// 0x80131B00
void mvPortraitsSetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B58
void mvPortraitsCreatePortraitsSet1()
{
    GObj* portraits_gobj;
    SObj* portrait_sobj;
    s32 i;
    intptr_t offsets[4] = dIntroPortraitsPortraitOffsetsSet1;
    Vec2f positions[4] = dIntroPortraitsPortraitPositionsSet1;

    gIntroPortraitsPortraitGObj = portraits_gobj = omMakeGObjCommon(0, 0, 0x11, GOBJ_LINKORDER_DEFAULT);
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
void mvPortraitsCreatePortraitsSet2()
{
    GObj* portraits_gobj;
    SObj* portrait_sobj;
    s32 i;
    intptr_t offsets[4] = dIntroPortraitsPortraitOffsetsSet2;
    Vec2f positions[4] = dIntroPortraitsPortraitPositionsSet2;

    gIntroPortraitsPortraitGObj = portraits_gobj = omMakeGObjCommon(0, 0, 0x11, GOBJ_LINKORDER_DEFAULT);
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
void mvPortraitsBlockRow1()
{
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 65);
}

// 0x80131E30
void mvPortraitsBlockRow2()
{
    gDPFillRectangle(gDisplayListHead[0]++, 10, 65, 310, 120);
}

// 0x80131E60
void mvPortraitsBlockRow3()
{
    gDPFillRectangle(gDisplayListHead[0]++, 10, 120, 310, 175);
}

// 0x80131E90
void mvPortraitsBlockRow4()
{
    gDPFillRectangle(gDisplayListHead[0]++, 10, 175, 310, 230);
}

// 0x80131EC0
void mvPortraitsPartiallyBlockRow(s32 row, s32 x_offset)
{
    s32 uly = 10 + row * 55;
    s32 lry = 65 + row * 55;

    if (x_offset > 0)
    {
        gDPFillRectangle(gDisplayListHead[0]++, 0, uly, x_offset, lry);
    }

    if (x_offset + 656 < 0)
    {
        gDPFillRectangle(gDisplayListHead[0]++, 0, uly, 320, lry);
    }

    if (x_offset + 656 < 320)
    {
        gDPFillRectangle(gDisplayListHead[0]++, x_offset + 656, uly, 320, lry);
    }
}

// 0x80131FC4
void mvPortraitsRenderPortraitOverlay(GObj* portrait_overlay_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0, 0, 0, 255);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    switch (gIntroPotraitsCurrentRow)
    {
        case 0:
            mvPortraitsBlockRow2();
            mvPortraitsBlockRow3();
            mvPortraitsBlockRow4();
            mvPortraitsPartiallyBlockRow(0, SObjGetStruct(portrait_overlay_gobj)->pos.x);
            break;
        case 1:
            mvPortraitsBlockRow1();
            mvPortraitsBlockRow3();
            mvPortraitsBlockRow4();
            mvPortraitsPartiallyBlockRow(1, SObjGetStruct(portrait_overlay_gobj)->pos.x);
            break;
        case 2:
            mvPortraitsBlockRow1();
            mvPortraitsBlockRow2();
            mvPortraitsBlockRow4();
            mvPortraitsPartiallyBlockRow(2, SObjGetStruct(portrait_overlay_gobj)->pos.x);
            break;
        case 3:
            mvPortraitsBlockRow1();
            mvPortraitsBlockRow2();
            mvPortraitsBlockRow3();
            mvPortraitsPartiallyBlockRow(3, SObjGetStruct(portrait_overlay_gobj)->pos.x);
            break;
    }

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

    func_ovl0_800CCEAC();
    func_ovl0_800CCF00(portrait_overlay_gobj);
}

// 0x801321FC
void mvPortraitsAnimatePortraitOverlay(GObj* portrait_overlay_gobj)
{
    SObj* portrait_overlay_sobj = SObjGetStruct(portrait_overlay_gobj);

    if (gIntroPotraitsFramesElapsed == 75)
    {
        portrait_overlay_sobj->pos.x = -656.0F;
    }

    if (gIntroPotraitsFramesElapsed < 75)
    {
        if (portrait_overlay_sobj->pos.x < 656.0F)
        {
            portrait_overlay_sobj->pos.x += 93.0F;

            if (portrait_overlay_sobj->pos.x > 656.0F)
            {
                portrait_overlay_sobj->pos.x = 656.0F;
            }
        }
    }
    else
    {
        if (portrait_overlay_sobj->pos.x > -656.0F)
        {
            portrait_overlay_sobj->pos.x -= 93.0F;

            if (portrait_overlay_sobj->pos.x < -656.0F)
            {
                portrait_overlay_sobj->pos.x = -656.0F;
            }
        }
    }

    switch (gIntroPotraitsFramesElapsed)
    {
        case 15:
            portrait_overlay_sobj->pos.x = -656.0F;
            portrait_overlay_sobj->pos.y = 10.0F;
            gIntroPotraitsCurrentRow = 0;
            break;
        case 45:
            portrait_overlay_sobj->pos.x = -656.0F;
            portrait_overlay_sobj->pos.y = 65.0F;
            gIntroPotraitsCurrentRow = 1;
            break;
        case 30:
            portrait_overlay_sobj->pos.x = -656.0F;
            portrait_overlay_sobj->pos.y = 120.0F;
            gIntroPotraitsCurrentRow = 2;
            break;
        case 60:
            portrait_overlay_sobj->pos.x = -656.0F;
            portrait_overlay_sobj->pos.y = 175.0F;
            gIntroPotraitsCurrentRow = 3;
            break;
        case 105:
            portrait_overlay_sobj->pos.x = 656.0F;
            portrait_overlay_sobj->pos.y = 10.0F;
            gIntroPotraitsCurrentRow = 0;
            break;
        case 135:
            portrait_overlay_sobj->pos.x = 656.0F;
            portrait_overlay_sobj->pos.y = 65.0F;
            gIntroPotraitsCurrentRow = 1;
            break;
        case 90:
            portrait_overlay_sobj->pos.x = 656.0F;
            portrait_overlay_sobj->pos.y = 120.0F;
            gIntroPotraitsCurrentRow = 2;
            break;
        case 120:
            portrait_overlay_sobj->pos.x = 656.0F;
            portrait_overlay_sobj->pos.y = 175.0F;
            gIntroPotraitsCurrentRow = 3;
            break;
    }
}

// 0x80132414
void mvPortraitsCreatePortraitOverlay()
{
    GObj* portrait_overlay_gobj;
    SObj* portrait_overlay_sobj;

    portrait_overlay_gobj = omMakeGObjCommon(0, 0, 0x12, 0x80000000);
    omAddGObjRenderProc(portrait_overlay_gobj, &mvPortraitsRenderPortraitOverlay, 0x1C, 0x80000000, -1);

    portrait_overlay_sobj = gcAppendSObjWithSprite(portrait_overlay_gobj, GetAddressFromOffset(gIntroPortraitsFilesArray[0], &FILE_035_PORTRAIT_OVERLAY_IMAGE_OFFSET));
    portrait_overlay_sobj->sprite.attr &= ~SP_FASTCOPY;
    portrait_overlay_sobj->sprite.attr |= SP_TRANSPARENT;
    portrait_overlay_sobj->sprite.red = 0;
    portrait_overlay_sobj->sprite.green = 0;
    portrait_overlay_sobj->sprite.blue = 0;
    portrait_overlay_sobj->pos.x = 656.0F;
    portrait_overlay_sobj->pos.y = 10.0F;
    omAddGObjCommonProc(portrait_overlay_gobj, mvPortraitsAnimatePortraitOverlay, 1, 1);
}

// 0x801324D0
void mvPortraitsCreatePortraitViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x8000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132570
void mvPortraitsCreatePortraitOverlayViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x3C, 0x10000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132610
void mvPortraitsInitVariables()
{
    gIntroPotraitsFramesElapsed = 0;
    gIntroPotraitsCurrentRow = 0;
}

// 0x80132624
void mvPortraitsMain(GObj* arg0)
{
    gIntroPotraitsFramesElapsed++;

    if (gIntroPotraitsFramesElapsed >= 10)
    {
        // gIntroPortraitsUnusedCounter gets set to 0 if any diagonal stick press occurs...
        // This scene must have been interactive at some point
        if (gIntroPortraitsUnusedCounter != 0)
        {
            gIntroPortraitsUnusedCounter -= 1;
        }

        if ((func_ovl1_80390A04(-0xF, 0xF) != 0) && (func_ovl1_80390AC0(-0xF, 0xF) != 0))
        {
            gIntroPortraitsUnusedCounter = 0;
        }

        if (func_ovl1_8039076C(A_BUTTON | B_BUTTON | START_BUTTON) != 0)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = scMajor_Kind_Title;
            func_80005C74();
        }

        if (gIntroPotraitsFramesElapsed == 75)
        {
            omEjectGObjCommon(gIntroPortraitsPortraitGObj);
            mvPortraitsCreatePortraitsSet2();
        }

        if (gIntroPotraitsFramesElapsed == 150)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 0x1E;
            func_80005C74();
        }
    }
}

// 0x80132718
void mvPortraitsInit()
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
    rdManagerLoadFiles(D_ovl35_801328A0, ARRAY_COUNT(D_ovl35_801328A0), gIntroPortraitsFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl35_801328A0, ARRAY_COUNT(D_ovl35_801328A0)), 0x10));

    omMakeGObjCommon(0, mvPortraitsMain, 0, GOBJ_LINKORDER_DEFAULT);
    func_8000B9FC(0, 0x80000000, 0x64, 3, 0xFF);
    mvPortraitsInitVariables();
    mvPortraitsCreatePortraitViewport();
    mvPortraitsCreatePortraitOverlayViewport();
    mvPortraitsCreatePortraitsSet1();
    mvPortraitsCreatePortraitOverlay();

    while (func_8000092C() < 1335)
    {
        continue;
    }
}

// mvPortraitsStartScene
void mvPortraitsStartScene()
{
    D_ovl35_80132938.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl35_80132938);
    D_ovl35_80132954.arena_size = (u32) ((uintptr_t)&lOverlay35ArenaHi - (uintptr_t)&lOverlay35ArenaLo);
    gsGTLSceneInit(&D_ovl35_80132954);
}
