#include <mn/menu.h>
#include <gm/gmsound.h>
#include <gm/battle.h>
#include <sys/obj_renderer.h>
#include <PR/gbi.h>
#include <PR/os.h>
#include <ovl0/reloc_data_mgr.h>

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define mnSoundTestCheckGetOptionButtonInput(is_button, mask) mnCommonCheckGetOptionButtonInput(sMnSoundTestOptionChangeWait, is_button, mask)
#define mnSoundTestCheckGetOptionStickInputUD(stick_range, min, b) mnCommonCheckGetOptionStickInputUD(sMnSoundTestOptionChangeWait, stick_range, min, b)
#define mnSoundTestCheckGetOptionStickInputLR(stick_range, min, b) mnCommonCheckGetOptionStickInputLR(sMnSoundTestOptionChangeWait, stick_range, min, b)
#define mnSoundTestSetOptionChangeWaitP(is_button, stick_range, div) mnCommonSetOptionChangeWaitP(sMnSoundTestOptionChangeWait, is_button, stick_range, div)
#define mnSoundTestSetOptionChangeWaitN(is_button, stick_range, div) mnCommonSetOptionChangeWaitN(sMnSoundTestOptionChangeWait, is_button, stick_range, div)

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t D_NF_800A5240;
extern intptr_t D_NF_80134480;
extern intptr_t func_ovl1_803903E0;
extern intptr_t D_NF_001AC870;                          // 0x001AC870
extern intptr_t D_NF_00000854;                          // 0x00000854

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80134308
s32 sMnSoundTestOption;                                             // Sound Test option selected (0 = Music, 1 = Sound, 2 = Voice)

// 0x80134310
s32 sMnSoundTestOptionColorR[mnSoundTest_Option_EnumMax];           // R color value of sound test menu options

// 0x80134320
s32 sMnSoundTestOptionColorG[mnSoundTest_Option_EnumMax];           // G color value of sound test menu options

// 0x80134330
s32 sMnSoundTestOptionColorB[mnSoundTest_Option_EnumMax];           // B color value of sound test menu options

// 0x8013433C
s32 sMnSoundTestOptionChangeWait;                                   // Frames to wait before new sound test option can be selected

// 0x80134340                                                   
s32 sMnSoundTestDirectionInputKind;                                 // Type of directional input: 0 = none, 1 = left, 2 = right, 3 = up, 4 = down

// 0x80134344
s32 D_ovl62_80134344;                                               // ???

// 0x80134348
s32 sMnSoundTestOptionSelectID[mnSoundTest_Option_EnumMax];         // Current selected ID of each option (e.g. Music is index 0 and holds a value from 0 to 44)

// 0x80134358
f32 sMnSoundTestSelectIDPositionsX[mnSoundTest_Option_EnumMax];     // X-Position of each selection ID

// 0x80134364
s32 sMnSoundTestFadeOutWait;                                        // Frames to wait until fadeout is complete

// 0x80134368
rdFileNode D_ovl62_80134368[32];

// 0x80134468
void *sMnSoundTestFiles[5];

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x801339E0
u32 dMnSoundTestMusicIDs[45];

// 0x80133A94
u32 dMnSoundTestSoundIDs[194];

// 0x80133D9C
u32 dMnSoundTestVoiceIDs[244];

// TO DO: fill out these arrays with the proper sound / music IDs

// 0x8013416C
u32 dMnSoundTestFileIDs[/* */] = { 0xC5, 0xA4, 0x20, 0x00, 0xC4 };

// 0x80134180
f32 dMnSoundTestArrowSpritePositions[/* */]
{
    162.0F,  73.0F, 224.0F,
    181.0F, 121.0F, 243.0F,
    201.0F, 168.0F, 263.0F
};

// 0x801341A4
intptr_t dMnSoundTestDigitSpriteOffsets[/* */] =
{
    0x00000148,
    0x000002D8,
    0x00000500,
    0x00000698,
    0x000008C0,
    0x00000A58,
    0x00000C80,
    0x00000E18,
    0x00001040,
    0x00001270
};

// 0x801341CC
s32 dMnSoundTestDigitSpriteWidths[/* */] = { 14, 9, 15, 14, 15, 13, 15, 14, 15, 15, 17, 20 };

// 0x80134200
Lights1 dMnSoundTestLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x0A, 0x32, 0x32);

// 0x80134218
Gfx dMnSoundTestDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMnSoundTestLights1),
    gsSPEndDisplayList()
};

// 0x80134240
scUnkDataBounds D_ovl62_80134240;

// 0x8013425C
scRuntimeInfo D_ovl62_8013425C;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mnSoundTestUpdateOptionColors(void)
{
    s32 i;

    for (i = 0; i < (ARRAY_COUNT(sMnSoundTestOptionColorR) + ARRAY_COUNT(sMnSoundTestOptionColorG) + ARRAY_COUNT(sMnSoundTestOptionColorB)) / 3; i++)
    {
        if (i == sMnSoundTestOption)
        {
            sMnSoundTestOptionColorR[i] = 0xFF;
            sMnSoundTestOptionColorG[i] = 0xA8;
            sMnSoundTestOptionColorB[i] = 0x00;
        }
        else
        {
            sMnSoundTestOptionColorR[i] = 0x7D;
            sMnSoundTestOptionColorG[i] = 0x45;
            sMnSoundTestOptionColorB[i] = 0x07;
        }
    }
}

// 0x80131B80
void mnSoundTestUpdateControllerInputs(void)
{
    s32 stick_range;// Stick axis range
    sb32 is_button; // Is option being selected with a button?

    if (sMnSoundTestOptionChangeWait != 0)
    {
        sMnSoundTestOptionChangeWait--;
    }
    if
    (
        (func_ovl1_80390A04(-32, 32) != FALSE) &&
        (func_ovl1_80390AC0(-32, 32) != FALSE) &&
        (func_ovl1_80390804(U_JPAD | R_JPAD | R_TRIG | U_CBUTTONS | R_CBUTTONS) == FALSE) &&
        (func_ovl1_80390804(D_JPAD | L_JPAD | L_TRIG | D_CBUTTONS | L_CBUTTONS) == FALSE)
    )
    {
        sMnSoundTestOptionChangeWait = 0;
        sMnSoundTestDirectionInputKind = 0;
    }
    if
    (
        mnSoundTestCheckGetOptionButtonInput(is_button, U_JPAD | U_CBUTTONS) ||
        mnSoundTestCheckGetOptionStickInputUD(stick_range, 32, 1)
    )
    {
        func_800269C0(alSound_SFX_MenuScroll2);

        mnSoundTestSetOptionChangeWaitP(is_button, stick_range, 8);

        sMnSoundTestOption--;

        if (sMnSoundTestOption < mnSoundTest_Option_Start)
        {
            sMnSoundTestOption = mnSoundTest_Option_End;
        }
        if (sMnSoundTestOption == mnSoundTest_Option_Start)
        {
            sMnSoundTestOptionChangeWait += 10;
        }
        sMnSoundTestDirectionInputKind = 3;
    }
    if
    (
        mnSoundTestCheckGetOptionButtonInput(is_button, D_JPAD | D_CBUTTONS) ||
        mnSoundTestCheckGetOptionStickInputUD(stick_range, -32, 0)
    )
    {
        func_800269C0(alSound_SFX_MenuScroll2);

        mnSoundTestSetOptionChangeWaitN(is_button, stick_range, 8);

        sMnSoundTestOption++;

        if (sMnSoundTestOption > mnSoundTest_Option_End)
        {
            sMnSoundTestOption = mnSoundTest_Option_Start;
        }
        if (sMnSoundTestOption == mnSoundTest_Option_End)
        {
            sMnSoundTestOptionChangeWait += 10;
        }
        sMnSoundTestDirectionInputKind = 4;
    }
    if
    (
        mnSoundTestCheckGetOptionButtonInput(is_button, L_JPAD | L_TRIG | L_CBUTTONS) ||
        mnSoundTestCheckGetOptionStickInputLR(stick_range, -32, 0)
    )
    {
        mnSoundTestSetOptionChangeWaitN(is_button, stick_range, 16);

        sMnSoundTestOptionSelectID[sMnSoundTestOption]--;

        switch (sMnSoundTestOption)
        {
        case mnSoundTest_Option_Music:
            if (sMnSoundTestOptionSelectID[sMnSoundTestOption] < 0)
            {
                sMnSoundTestOptionSelectID[sMnSoundTestOption] = 44;
            }
            if (sMnSoundTestOptionSelectID[sMnSoundTestOption] == 0)
            {
                sMnSoundTestOptionChangeWait += 20;
            }
            break;

        case mnSoundTest_Option_Sound:
            if (sMnSoundTestOptionSelectID[sMnSoundTestOption] < 0)
            {
                sMnSoundTestOptionSelectID[sMnSoundTestOption] = 193;
            }
            if (sMnSoundTestOptionSelectID[sMnSoundTestOption] == 0)
            {
                sMnSoundTestOptionChangeWait += 20;
            }
            break;

        case mnSoundTest_Option_Voice:
            if (sMnSoundTestOptionSelectID[sMnSoundTestOption] < 0)
            {
                sMnSoundTestOptionSelectID[sMnSoundTestOption] = 243;
            }
            if (sMnSoundTestOptionSelectID[sMnSoundTestOption] == 0)
            {
                sMnSoundTestOptionChangeWait += 20;
            }
            break;
        }
        if (sMnSoundTestDirectionInputKind != 1)
        {
            sMnSoundTestOptionChangeWait *= 2;
        }
        sMnSoundTestDirectionInputKind = 1;
    }
    if
    (
        mnSoundTestCheckGetOptionButtonInput(is_button, R_JPAD | R_TRIG | R_CBUTTONS) ||
        mnSoundTestCheckGetOptionStickInputLR(stick_range, 32, 1)
    )
    {
        mnSoundTestSetOptionChangeWaitP(is_button, stick_range, 16);

        sMnSoundTestOptionSelectID[sMnSoundTestOption]++;

        switch (sMnSoundTestOption)
        {
        case mnSoundTest_Option_Music:
            if (sMnSoundTestOptionSelectID[sMnSoundTestOption] > 44)
            {
                sMnSoundTestOptionSelectID[sMnSoundTestOption] = 0;
            }
            if (sMnSoundTestOptionSelectID[sMnSoundTestOption] == 44)
            {
                sMnSoundTestOptionChangeWait += 20;
            }
            break;

        case mnSoundTest_Option_Sound:
            if (sMnSoundTestOptionSelectID[sMnSoundTestOption] > 193)
            {
                sMnSoundTestOptionSelectID[sMnSoundTestOption] = 0;
            }
            if (sMnSoundTestOptionSelectID[sMnSoundTestOption] == 193)
            {
                sMnSoundTestOptionChangeWait += 20;
            }
            break;

        case mnSoundTest_Option_Voice:
            if (sMnSoundTestOptionSelectID[sMnSoundTestOption] > 243)
            {
                sMnSoundTestOptionSelectID[sMnSoundTestOption] = 0;
            }
            if (sMnSoundTestOptionSelectID[sMnSoundTestOption] == 243)
            {
                sMnSoundTestOptionChangeWait += 20;
            }
            break;
        }
        if (sMnSoundTestDirectionInputKind != 2)
        {
            sMnSoundTestOptionChangeWait *= 2;
        }
        sMnSoundTestDirectionInputKind = 2;
    }
}

// 0x801320B4
void mnSoundTestUpdateFunctions(void)
{
    if (sMnSoundTestFadeOutWait != -1)
    {
        if (sMnSoundTestFadeOutWait != 0)
        {
            sMnSoundTestFadeOutWait--;
        }
        else
        {
            func_80020A74();
            sMnSoundTestFadeOutWait = -1;
        }
    }
    else func_80020B38(0, 0x7000);

    if (func_ovl1_8039076C(A_BUTTON) != FALSE)
    {
        switch (sMnSoundTestOption)
        {
        case mnSoundTest_Option_Music:
            if (sMnSoundTestFadeOutWait > 0)
            {
                sMnSoundTestFadeOutWait = -1;
            }
            func_80020A74();
            func_80020AB4(0, dMnSoundTestMusicIDs[sMnSoundTestOptionSelectID[mnSoundTest_Option_Music]]);
            break;

        case mnSoundTest_Option_Sound:
            func_800266A0();
            func_800269C0(dMnSoundTestSoundIDs[sMnSoundTestOptionSelectID[mnSoundTest_Option_Sound]]);
            break;

        case mnSoundTest_Option_Voice:
            func_800266A0();
            func_800269C0(dMnSoundTestVoiceIDs[sMnSoundTestOptionSelectID[mnSoundTest_Option_Voice]]);
            break;
        }
    }
    else if (func_ovl1_8039076C(Z_TRIG) != FALSE)
    {
        func_80020A74();
        func_800266A0();
    }
    else if (func_ovl1_8039076C(START_BUTTON) != FALSE)
    {
        func_80020BC0(0, 0, 120);
        sMnSoundTestFadeOutWait = 120;
        func_800266A0();
    }
}

// 0x80132244
void mnSoundTestMenuProcUpdate(GObj *gobj)
{
    mnSoundTestUpdateOptionColors();

    if (func_ovl1_8039076C(B_BUTTON) != FALSE)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = scMajor_Kind_Data;

        func_80020A74();
        func_800266A0();
        func_80020B38(0, 0x7000);
        func_80005C74();
    }
    mnSoundTestUpdateControllerInputs();
    mnSoundTestUpdateFunctions();
}

// 0x801322B8
void func_ovl62_801322B8(void)
{
    rdSetup rldm_setup;

    rldm_setup.tableRomAddr = (intptr_t)&D_NF_001AC870;
    rldm_setup.tableFileCount = (intptr_t)&D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = D_ovl62_80134368;
    rldm_setup.statusBufSize = ARRAY_COUNT(D_ovl62_80134368);
    rldm_setup.forceBuf = 0;
    rldm_setup.forceBufSize = 0;

    rdManagerInitSetup(&rldm_setup);
    rdManagerLoadFiles(dMnSoundTestFileIDs, ARRAY_COUNT(dMnSoundTestFileIDs), sMnSoundTestFiles, gsMemoryAlloc(rdManagerGetAllocSize(dMnSoundTestFileIDs, ARRAY_COUNT(dMnSoundTestFileIDs)), 0x10));
}

// 0x8013234C
SObj* mnSoundTestMakeHeaderSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = omMakeGObjCommon(1, NULL, 2, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnSoundTestFiles[2], &lMnSoundTestDataTextSprite));

    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->sprite.red   = 0x5F;
    sobj->sprite.green = 0x58;
    sobj->sprite.blue  = 0x46;
    sobj->pos.x = 23.0F;
    sobj->pos.y = 17.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnSoundTestFiles[4], &lMnSoundTestHeaderTextSprite));

    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->sprite.red   = 0xF2;
    sobj->sprite.green = 0xC7;
    sobj->sprite.blue  = 0x0D;
    sobj->shadow_color.r = 0x00;
    sobj->shadow_color.g = 0x00;
    sobj->shadow_color.b = 0x00;
    sobj->pos.x = 152.0F;
    sobj->pos.y = 23.0F;

    return sobj;
}

// 0x80132450
void mnSoundTestOptionProcUpdate(GObj *gobj)
{
    s32 color_id = gobj->user_data.s;
    SObj *sobj = SObjGetStruct(gobj);

    while (TRUE)
    {
        sobj->next->sprite.red   = sobj->sprite.red   = sMnSoundTestOptionColorR[color_id];

        sobj->next->sprite.green = sobj->sprite.green = sMnSoundTestOptionColorG[color_id];

        sobj->next->sprite.blue  = sobj->sprite.blue  = sMnSoundTestOptionColorB[color_id];

        gsStopCurrentProcess(1);
    }
}

// 0x801324FC
void mnSoundTestMusicProcRender(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor
    (
        gDisplayListHead[0]++, 
        GCOMBINE32_RGBA5551
        (
            GCONVERT5551_RGBA8888
            (
                GCOMBINE32_RGBA8888
                (
                    sMnSoundTestOptionColorR[mnSoundTest_Option_Music], 
                    sMnSoundTestOptionColorG[mnSoundTest_Option_Music], 
                    sMnSoundTestOptionColorB[mnSoundTest_Option_Music], 
                    0xFF
                )
            )
        )
    );
    gDPFillRectangle(gDisplayListHead[0]++, 10, 56, 112, 57);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 95, 112, 96);
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x80132638
SObj* mnSoundTestMakeMusicSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = omMakeGObjCommon(1, NULL, 3, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);

    gobj->user_data.s = mnSoundTest_Option_Music;

    omAddGObjCommonProc(gobj, mnSoundTestOptionProcUpdate, 0, 1);
    omAddGObjRenderProc(omMakeGObjCommon(1, NULL, 3, 0x80000000), mnSoundTestMusicProcRender, 2, 0x80000000, -1);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnSoundTestFiles[4], &lMnSoundTestMusicTextSprite));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 55.0F;
    sobj->pos.y = 61.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnSoundTestFiles[4], &lMnSoundTestOptionRoundCorner));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 112.0F;
    sobj->pos.y = 56.0F;

    return sobj;
}

// 0x80132758
void mnSoundTestSoundProcRender(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor
    (
        gDisplayListHead[0]++,
        GCOMBINE32_RGBA5551
        (
            GCONVERT5551_RGBA8888
            (
                GCOMBINE32_RGBA8888
                (
                    sMnSoundTestOptionColorR[mnSoundTest_Option_Sound],
                    sMnSoundTestOptionColorG[mnSoundTest_Option_Sound],
                    sMnSoundTestOptionColorB[mnSoundTest_Option_Sound],
                    0xFF
                )
            )
        )
    );
    gDPFillRectangle(gDisplayListHead[0]++, 10, 104, 132, 105);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 143, 132, 144);
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x80132894
SObj* mnSoundTestMakeSoundSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = omMakeGObjCommon(1, NULL, 3, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(gobj, mnSoundTestOptionProcUpdate, 0, 1);

    gobj->user_data.s = mnSoundTest_Option_Sound;

    omAddGObjRenderProc(omMakeGObjCommon(1, NULL, 3, 0x80000000), mnSoundTestSoundProcRender, 2, 0x80000000, -1);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnSoundTestFiles[4], &lMnSoundTestSoundTextSprite));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 64.0F;
    sobj->pos.y = 108.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnSoundTestFiles[4], &lMnSoundTestOptionRoundCorner));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 132.0F;
    sobj->pos.y = 104.0F;

    return sobj;
}

// 0x801329B8
void mnSoundTestVoiceProcRender(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor
    (
        gDisplayListHead[0]++, 
        GCOMBINE32_RGBA5551
        (
            GCONVERT5551_RGBA8888
            (
                GCOMBINE32_RGBA8888
                (
                    sMnSoundTestOptionColorR[mnSoundTest_Option_Voice],
                    sMnSoundTestOptionColorG[mnSoundTest_Option_Voice],
                    sMnSoundTestOptionColorB[mnSoundTest_Option_Voice],
                    0xFF
                )
            )
        )
    );
    gDPFillRectangle(gDisplayListHead[0]++, 10, 152, 152, 153);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 191, 152, 192);
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x80132AF4
SObj* mnSoundTestMakeVoiceSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = omMakeGObjCommon(1, NULL, 3, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(gobj, mnSoundTestOptionProcUpdate, 0, 1);

    gobj->user_data.s = mnSoundTest_Option_Voice;

    omAddGObjRenderProc(omMakeGObjCommon(1, NULL, 3, 0x80000000), mnSoundTestVoiceProcRender, 2, 0x80000000, -1);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnSoundTestFiles[4], &lMnSoundTestVoiceTextSprite));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 94.0F;
    sobj->pos.y = 156.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnSoundTestFiles[4], &lMnSoundTestOptionRoundCorner));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 152.0F;
    sobj->pos.y = 152.0F;

    return sobj;
}

// 0x80132C10
SObj* mnSoundTestMakeAButtonSObj(GObj *gobj)
{
    SObj *sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnSoundTestFiles[0], &lMnSoundTestAButtonSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->sprite.red   = 0x6E;
    sobj->sprite.green = 0x77;
    sobj->sprite.blue  = 0x75;

    sobj->shadow_color.r = 0x21;
    sobj->shadow_color.g = 0x40;
    sobj->shadow_color.b = 0x3A;

    sobj->pos.x = 55.0F;
    sobj->pos.y = 205.0F;

    return sobj;
}

// 0x80132C90
SObj* mnSoundTestMakeBButtonSObj(GObj *gobj)
{
    SObj *sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnSoundTestFiles[0], &lMnSoundTestBButtonSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->sprite.red   = 0x6E;
    sobj->sprite.green = 0x77;
    sobj->sprite.blue  = 0x5D;

    sobj->shadow_color.r = 0x29;
    sobj->shadow_color.g = 0x37;
    sobj->shadow_color.b = 0x16;

    sobj->pos.x = 218.0F;
    sobj->pos.y = 205.0F;

    return sobj;
}

// 0x80132D10
SObj* mnSoundTestMakeStartButtonSObj(GObj *gobj)
{
    SObj *sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnSoundTestFiles[4], &lMnSoundTestStartButtonSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->sprite.red   = 0x81;
    sobj->sprite.green = 0x6A;
    sobj->sprite.blue  = 0x62;

    sobj->shadow_color.r = 0x3B;
    sobj->shadow_color.g = 0x20;
    sobj->shadow_color.b = 0x16;

    sobj->pos.x = 121.0F;
    sobj->pos.y = 205.0F;

    return sobj;
}

// 0x80132D90
SObj* mnSoundTestMakeAFunctionSObj(GObj *gobj)
{
    SObj *sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnSoundTestFiles[4], &lMnSoundTestAFunctionTextSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->sprite.red   = 0x73;
    sobj->sprite.green = 0x6B;
    sobj->sprite.blue  = 0x59;

    sobj->pos.x = 72.0F;
    sobj->pos.y = 208.0F;

    return sobj;
}

// 0x80132DF8
SObj* mnSoundTestMakeStartFunctionSObj(GObj *gobj)
{
    SObj *sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnSoundTestFiles[4], &lMnSoundTestStartFunctionTextSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->sprite.red   = 0x73;
    sobj->sprite.green = 0x6B;
    sobj->sprite.blue  = 0x59;

    sobj->pos.x = 148.0F;
    sobj->pos.y = 208.0F;

    return sobj;
}

// 0x80132E60
SObj* mnSoundTestMakeBFunctionSObj(GObj *gobj)
{
    SObj *sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnSoundTestFiles[4], &lMnSoundTestBFunctionTextSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->sprite.red   = 0x73;
    sobj->sprite.green = 0x6B;
    sobj->sprite.blue  = 0x59;

    sobj->pos.x = 235.0F;
    sobj->pos.y = 208.0F;

    return sobj;
}

// 0x80132EC8
void mnSoundTestMakeButtonSObjs(void)
{
    GObj *gobj = omMakeGObjCommon(1, NULL, 3, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    mnSoundTestMakeAButtonSObj(gobj);
    mnSoundTestMakeBButtonSObj(gobj);
    mnSoundTestMakeStartButtonSObj(gobj);
    mnSoundTestMakeAFunctionSObj(gobj);
    mnSoundTestMakeStartFunctionSObj(gobj);
    mnSoundTestMakeBFunctionSObj(gobj);
}

// 0x80132F50
void mnSoundTestMakeNumberSObj(GObj *gobj)
{
    s32 i;

    for (i = 0; i < mnSoundTest_Option_EnumMax; i++)
    {
        SObj *sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnSoundTestFiles[1], dMnSoundTestDigitSpriteOffsets[0]));

        sobj->sprite.attr = SP_HIDDEN;

        switch (gobj->user_data.s)
        {
        case mnSoundTest_Option_Music:
            sobj->pos.y = 67.0F;
            break;

        case mnSoundTest_Option_Sound:
            sobj->pos.y = 115.0F;
            break;

        case mnSoundTest_Option_Voice:
            sobj->pos.y = 163.0F;
            break;
        }
    }
}

// 0x80133058
void mnSoundTestUpdateNumberPositions(GObj *gobj, f32 width)
{
    f32 unused[4];
    f32 pos_x = 0.0F;
    s32 index = gobj->user_data.s;
    SObj *sobj = SObjGetStruct(gobj);
    SObj *rewind_sobj;

    while ((sobj != NULL) && (sobj->sprite.attr != SP_HIDDEN))
    {
        rewind_sobj = sobj;

        sobj = sobj->next;
    }
    sobj = rewind_sobj;

    while (sobj != NULL)
    {
        f32 uf = sobj->user_data.s;

        sobj->user_data.s = pos_x;

        pos_x += uf;

        sobj = sobj->prev;
    }
    sobj = SObjGetStruct(gobj);

    pos_x = sMnSoundTestSelectIDPositionsX[index] - (width * 0.5F);

    while ((sobj != NULL) && (sobj->sprite.attr != SP_HIDDEN))
    {
        sobj->pos.x = pos_x + sobj->user_data.s + ((index == mnSoundTest_Option_Music) ? 171.0F : ((index == mnSoundTest_Option_Sound) ? 190.0F : 210.0F));

        sobj = sobj->next;
    }
}

// 0x80133194
void mnSoundTestUpdateNumberSprites(GObj *gobj)
{
    SObj *sobj = SObjGetStruct(gobj);
    f32 width = 0.0F;
    s32 option = gobj->user_data.s;
    s32 number = sMnSoundTestOptionSelectID[option] + 1;

    while (sobj != NULL)
    {
        sobj->sprite.attr = SP_HIDDEN;
        sobj = sobj->next;
    }
    sobj = SObjGetStruct(gobj);

    do
    {
        sobj->sprite = *spGetSpriteFromFile(sMnSoundTestFiles[1], dMnSoundTestDigitSpriteOffsets[number % 10]);

        sobj->user_data.s = dMnSoundTestDigitSpriteWidths[number % 10];

        sobj->sprite.attr = SP_TRANSPARENT;

        sobj->sprite.red   = 0xFF;
        sobj->sprite.green = 0x00;
        sobj->sprite.blue  = 0x00;

        sobj->shadow_color.r = 0x00;
        sobj->shadow_color.g = 0x00;
        sobj->shadow_color.b = 0x00;

        width += sobj->user_data.s;

        number *= 0.1F;

        if (number != 0)
        {
            sobj = sobj->next;
        }
    } 
    while (number != 0);

    mnSoundTestUpdateNumberPositions(gobj, width);
}

// 0x80133304
void mnSoundTestSelectIDProcUpdate(GObj *gobj)
{
    s32 option = gobj->user_data.s;
    s32 number = -1;

    mnSoundTestMakeNumberSObj(gobj);

    while (TRUE)
    {
        if (number != sMnSoundTestOptionSelectID[option])
        {
            number = sMnSoundTestOptionSelectID[option];

            mnSoundTestUpdateNumberSprites(gobj);
        }
        gsStopCurrentProcess(1);
    }
}

// 0x80133398
void mnSoundTestMakeSelectIDGObjs(void)
{
    GObj *gobj = omMakeGObjCommon(1, NULL, 5, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(gobj, mnSoundTestSelectIDProcUpdate, 0, 1);

    gobj->user_data.s = mnSoundTest_Option_Music;

    gobj = omMakeGObjCommon(1, NULL, 6, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(gobj, mnSoundTestSelectIDProcUpdate, 0, 1);

    gobj->user_data.s = mnSoundTest_Option_Sound;

    gobj = omMakeGObjCommon(1, NULL, 7, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(gobj, mnSoundTestSelectIDProcUpdate, 0, 1);

    gobj->user_data.s = mnSoundTest_Option_Voice;
}

// 0x801334BC
void mnSoundTestArrowsProcUpdate(GObj *gobj)
{
    SObj *sobj = SObjGetStruct(gobj);
    s32 arrow_toggle_wait = 30;
    s32 option = sMnSoundTestOption;
    s32 id;

    while (TRUE)
    {
        if (option != sMnSoundTestOption)
        {
            option = sMnSoundTestOption;

            arrow_toggle_wait = 30;

            gobj->flags = GOBJ_FLAG_NONE;
        }
        if (arrow_toggle_wait == 0)
        {
            arrow_toggle_wait = 30;

            gobj->flags ^= GOBJ_FLAG_NORENDER;
        }
        arrow_toggle_wait--;

        id = sMnSoundTestOption * mnSoundTest_Option_EnumMax; // Really?

        sobj->pos.x = dMnSoundTestArrowSpritePositions[id + 0];
        sobj->pos.y = dMnSoundTestArrowSpritePositions[id + 1];
        sobj->next->pos.x = dMnSoundTestArrowSpritePositions[id + 2];
        sobj->next->pos.y = dMnSoundTestArrowSpritePositions[id + 1];

        gsStopCurrentProcess(1);
    }
}

// 0x801335C8
void mnSoundTestMakeArrowSObjs(void)
{
    GObj *gobj = omMakeGObjCommon(1, NULL, 2, 0x80000000);
    SObj *sobj;

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(gobj, mnSoundTestArrowsProcUpdate, 0, 1);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnSoundTestFiles[4], &lMnSoundTestLeftArrowSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->pos.x = dMnSoundTestArrowSpritePositions[mnSoundTest_Option_Start + 0];
    sobj->pos.y = dMnSoundTestArrowSpritePositions[mnSoundTest_Option_Start + 1];

    sobj->sprite.red   = 0xFF;
    sobj->sprite.green = 0xC3;
    sobj->sprite.blue  = 0x26;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sMnSoundTestFiles[4], &lMnSoundTestRightArrowSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->pos.x = dMnSoundTestArrowSpritePositions[mnSoundTest_Option_Start + 2];
    sobj->pos.y = dMnSoundTestArrowSpritePositions[mnSoundTest_Option_Start + 3];

    sobj->sprite.red   = 0xFF;
    sobj->sprite.green = 0xC3;
    sobj->sprite.blue  = 0x26;
}

// 0x801336D8
void mnSoundTestMakeAllSObjs(void)
{
    mnSoundTestMakeHeaderSObjs();
    mnSoundTestMakeMusicSObjs();
    mnSoundTestMakeSoundSObjs();
    mnSoundTestMakeVoiceSObjs();
    mnSoundTestMakeSelectIDGObjs();
    mnSoundTestMakeArrowSObjs();
    mnSoundTestMakeButtonSObjs();
}

// 0x80133728
void func_ovl62_80133728(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(2, NULL, 4, 0x80000000, func_ovl0_800CD2CC, 0x1E, 2, -1, 0, 1, 0, 1, 0));

    func_80007080(&cam->viewport, 10.0F, 10.0F, 630.0F, 470.0F);

    cam = CameraGetStruct(func_8000B93C(2, NULL, 4, 0x80000000, func_80017EC0, 0x32, 4, -1, 0, 1, 0, 1, 0));

    func_80007080(&cam->viewport, 10.0F, 10.0F, 630.0F, 470.0F);
}

// 0x80133858
void mnSoundTestInitVars(void)
{
    sMnSoundTestOptionColorR[mnSoundTest_Option_Music] = sMnSoundTestOptionColorR[mnSoundTest_Option_Sound] = sMnSoundTestOptionColorR[mnSoundTest_Option_Voice] = 0x7D;
    sMnSoundTestOptionColorG[mnSoundTest_Option_Music] = sMnSoundTestOptionColorG[mnSoundTest_Option_Sound] = sMnSoundTestOptionColorG[mnSoundTest_Option_Voice] = 0x45;
    sMnSoundTestOptionColorB[mnSoundTest_Option_Music] = sMnSoundTestOptionColorB[mnSoundTest_Option_Sound] = sMnSoundTestOptionColorB[mnSoundTest_Option_Voice] = 0x07;

    sMnSoundTestOption = 0;
    sMnSoundTestOptionChangeWait = 0;
    sMnSoundTestDirectionInputKind = 0;

    sMnSoundTestOptionSelectID[mnSoundTest_Option_Music] = sMnSoundTestOptionSelectID[mnSoundTest_Option_Sound] = sMnSoundTestOptionSelectID[mnSoundTest_Option_Voice] = 0;

    sMnSoundTestSelectIDPositionsX[mnSoundTest_Option_Music] = 26.5F;
    sMnSoundTestSelectIDPositionsX[mnSoundTest_Option_Sound] = 26.5F;
    sMnSoundTestSelectIDPositionsX[mnSoundTest_Option_Voice] = 26.5F;

    sMnSoundTestFadeOutWait = -1;
}

// 0x801338F8
void func_ovl62_801338F8(void)
{
    omMakeGObjCommon(0, mnSoundTestMenuProcUpdate, 1, 0x80000000);
    func_8000B9FC(4, 0x80000000, 0x64, 2, 0xFF);
    func_ovl62_801322B8();
    mnSoundTestInitVars();
    mnSoundTestMakeAllSObjs();
    func_ovl62_80133728();
}

// 0x80133964
void mnSoundTestAddLightsDisplayList(Gfx **display_list)
{
    gSPDisplayList(display_list[0]++, dMnSoundTestDisplayList);
}

// 0x80133988
void mnSoundTestStartScene(void)
{
    D_ovl62_80134240.unk_scdatabounds_0xC = ((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl62_80134240);
    D_ovl62_8013425C.arena_size = ((uintptr_t)&func_ovl1_803903E0 - (uintptr_t)&D_NF_80134480);
    func_8000683C(&D_ovl62_8013425C);
}