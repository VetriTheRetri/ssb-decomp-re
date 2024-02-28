#include <gm/gmsound.h>
#include <gm/battle.h>
#include <sys/obj_renderer.h>
#include <PR/gbi.h>
#include <PR/os.h>
#include <ovl0/reloc_data_mgr.h>

#define scSoundTestGetCheckOptionButtonInput(is_button, mask)\
((gSoundTestOptionChangeWait == 0) && (is_button = func_ovl1_80390804(mask), is_button != FALSE))

#define scSoundTestGetCheckOptionStickInputUD(stick_range, min, b)\
((gSoundTestOptionChangeWait == 0) && (stick_range = func_ovl1_80390950(min, b, &gSoundTestOptionChangeWait), stick_range != 0))

#define scSoundTestGetCheckOptionStickInputLR(stick_range, min, b)\
((gSoundTestOptionChangeWait == 0) && (stick_range = func_ovl1_8039089C(min, b, &gSoundTestOptionChangeWait), stick_range != 0))

// EXTERN

extern intptr_t D_NF_800A5240;
extern intptr_t D_NF_80134480;
extern intptr_t func_ovl1_803903E0;
extern intptr_t D_NF_001AC870;                      // 0x001AC870
extern intptr_t lSoundTestMusicTextSprite;          // 0x00000438
extern intptr_t D_NF_00000854;                      // 0x00000854
extern intptr_t lSoundTestAButtonSprite;            // 0x00000958
extern intptr_t lSoundTestSoundTextSprite;          // 0x000009C0
extern intptr_t lSoundTestBButtonSprite;            // 0x00000A88
extern intptr_t lSoundTestDataTextSprite;           // 0x00000B40
extern intptr_t lSoundTestVoiceTextSprite;          // 0x00000E48
extern intptr_t lSoundTestOptionRoundCorner;        // 0x00001138
extern intptr_t lSoundTestBFunctionTextSprite;      // 0x00001208
extern intptr_t lSoundTestStartFunctionTextSprite;  // 0x00001348
extern intptr_t lSoundTestAFunctionTextSprite;      // 0x00001450
extern intptr_t lSoundTestHeaderTextSprite;         // 0x00001BB8
extern intptr_t lSoundTestStartButtonSprite;        // 0x00001D50
extern intptr_t lSoundTestRightArrowSprite;         // 0x0000DD90
extern intptr_t lSoundTestLeftArrowSprite;          // 0x0000DE30

// DATA

// 0x801339E0
u32 dSoundTestMusicIDs[45];

// 0x80133A94
u32 dSoundTestSoundIDs[194];

// 0x80133D9C
u32 dSoundTestVoiceIDs[244];

// TO DO: fill out these arrays with the proper sound / music IDs

// 0x8013416C
u32 D_ovl62_8013416C[/* */] = { 0xC5, 0xA4, 0x20, 0x00, 0xC4 };

// 0x80134180
f32 dSoundTestArrowSpritePositions[/* */]
{
    162.0F,  73.0F, 224.0F, 
    181.0F, 121.0F, 243.0F,
    201.0F, 168.0F, 263.0F
};

// 0x801341A4
intptr_t dSoundTestDigitSpriteOffsets[/* */] =
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
s32 dSoundTestDigitSpriteWidths[/* */] = { 14, 9, 15, 14, 15, 13, 15, 14, 15, 15, 17, 20 };

// 0x80134200
Lights1 dSoundTestLights1[/* */] =
{
    gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x0A, 0x32, 0x32)
};

// 0x80134218
Gfx dSoundTestDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights0(dSoundTestLights1)
    gsSPEndDisplayList()
};

// 0x80134240
scUnkDataBounds D_ovl62_80134240;

// 0x8013425C
scRuntimeInfo D_ovl62_8013425C;

// GLOBALS

// 0x80134308
s32 gSoundTestOption;                                           // Sound Test option selected (0 = Music, 1 = Sound, 2 = Voice)

// 0x80134310
s32 gSoundTestOptionColorR[scSoundTest_Option_EnumMax];         // R color value of sound test menu options

// 0x80134320
s32 gSoundTestOptionColorG[scSoundTest_Option_EnumMax];         // G color value of sound test menu options

// 0x80134330
s32 gSoundTestOptionColorB[scSoundTest_Option_EnumMax];         // B color value of sound test menu options

// 0x8013433C
s32 gSoundTestOptionChangeWait;                                 // Frames to wait before new sound test option can be selected

// 0x80134340                                                   
s32 gSoundTestDirectionInputKind;                               // Type of directional input: 0 = none, 1 = left, 2 = right, 3 = up, 4 = down

// 0x80134344
s32 D_ovl62_80134344;                                           // ???

// 0x80134348
s32 gSoundTestOptionSelectID[scSoundTest_Option_EnumMax];       // Current selected ID of each option (e.g. Music is index 0 and holds a value from 0 to 44)

// 0x80134358
f32 gSoundTestSelectIDPositionsX[scSoundTest_Option_EnumMax];   // X-Position of each selection ID

// 0x80134364
s32 gSoundTestFadeOutWait;                                      // Frames to wait until fadeout is complete

// 0x80134368
RldmFileNode D_ovl62_80134368[32];

// 0x80134468
void *gSoundTestSpriteFiles[8];

// 0x80131B00
void scSoundTestUpdateOptionColors(void)
{
    s32 i;

    for (i = 0; i < (ARRAY_COUNT(gSoundTestOptionColorR) + ARRAY_COUNT(gSoundTestOptionColorG) + ARRAY_COUNT(gSoundTestOptionColorB)) / 3; i++)
    {
        if (i == gSoundTestOption)
        {
            gSoundTestOptionColorR[i] = 0xFF;
            gSoundTestOptionColorG[i] = 0xA8;
            gSoundTestOptionColorB[i] = 0x00;
        }
        else
        {
            gSoundTestOptionColorR[i] = 0x7D;
            gSoundTestOptionColorG[i] = 0x45;
            gSoundTestOptionColorB[i] = 0x07;
        }
    }
}

// 0x80131B80
void scSoundTestUpdateControllerInputs(void)
{
    s32 stick_range;// Stick axis range
    sb32 is_button; // Is option being selected with a button?

    if (gSoundTestOptionChangeWait != 0)
    {
        gSoundTestOptionChangeWait--;
    }
    if
    (
        (func_ovl1_80390A04(-0x20, 0x20, &gSoundTestOptionChangeWait) != 0) &&
        (func_ovl1_80390AC0(-0x20, 0x20, &gSoundTestOptionChangeWait) != 0) &&
        (func_ovl1_80390804(U_JPAD | R_JPAD | R_TRIG | U_CBUTTONS | R_CBUTTONS) == FALSE) &&
        (func_ovl1_80390804(D_JPAD | L_JPAD | L_TRIG | D_CBUTTONS | L_CBUTTONS) == FALSE)
    )
    {
        gSoundTestOptionChangeWait = 0;
        gSoundTestDirectionInputKind = 0;
    }
    if
    (
        scSoundTestGetCheckOptionButtonInput(is_button, U_JPAD | U_CBUTTONS) ||
        scSoundTestGetCheckOptionStickInputUD(stick_range, 0x20, 1)
    )
    {
        func_800269C0(alSound_SFX_MenuScroll2);

        if (is_button != FALSE)
        {
            gSoundTestOptionChangeWait = 12;
        }
        else gSoundTestOptionChangeWait = (160 - stick_range) / 8;

        gSoundTestOption--;

        if (gSoundTestOption < scSoundTest_Option_Start)
        {
            gSoundTestOption = scSoundTest_Option_End;
        }
        if (gSoundTestOption == scSoundTest_Option_Start)
        {
            gSoundTestOptionChangeWait += 10;
        }
        gSoundTestDirectionInputKind = 3;
    }
    if
    (
        scSoundTestGetCheckOptionButtonInput(is_button, D_JPAD | D_CBUTTONS) ||
        scSoundTestGetCheckOptionStickInputUD(stick_range, -0x20, 0)
    )
    {
        func_800269C0(alSound_SFX_MenuScroll2);

        if (is_button != FALSE)
        {
            gSoundTestOptionChangeWait = 12;
        }
        else gSoundTestOptionChangeWait = (stick_range + 160) / 8;

        gSoundTestOption++;

        if (gSoundTestOption > scSoundTest_Option_End)
        {
            gSoundTestOption = scSoundTest_Option_Start;
        }
        if (gSoundTestOption == scSoundTest_Option_End)
        {
            gSoundTestOptionChangeWait += 10;
        }
        gSoundTestDirectionInputKind = 4;
    }
    if
    (
        scSoundTestGetCheckOptionButtonInput(is_button, L_JPAD | L_TRIG | L_CBUTTONS) ||
        scSoundTestGetCheckOptionStickInputLR(stick_range, -0x20, 0)
    )
    {
        if (is_button != FALSE)
        {
            gSoundTestOptionChangeWait = 12;
        }
        else gSoundTestOptionChangeWait = (stick_range + 160) / 16;

        gSoundTestOptionSelectID[gSoundTestOption]--;

        switch (gSoundTestOption)
        {
        case scSoundTest_Option_Music:
            if (gSoundTestOptionSelectID[gSoundTestOption] < 0)
            {
                gSoundTestOptionSelectID[gSoundTestOption] = 44;
            }
            if (gSoundTestOptionSelectID[gSoundTestOption] == 0)
            {
                gSoundTestOptionChangeWait += 20;
            }
            break;

        case scSoundTest_Option_Sound:
            if (gSoundTestOptionSelectID[gSoundTestOption] < 0)
            {
                gSoundTestOptionSelectID[gSoundTestOption] = 193;
            }
            if (gSoundTestOptionSelectID[gSoundTestOption] == 0)
            {
                gSoundTestOptionChangeWait += 20;
            }
            break;

        case scSoundTest_Option_Voice:
            if (gSoundTestOptionSelectID[gSoundTestOption] < 0)
            {
                gSoundTestOptionSelectID[gSoundTestOption] = 243;
            }
            if (gSoundTestOptionSelectID[gSoundTestOption] == 0)
            {
                gSoundTestOptionChangeWait += 20;
            }
            break;
        }
        if (gSoundTestDirectionInputKind != 1)
        {
            gSoundTestOptionChangeWait *= 2;
        }
        gSoundTestDirectionInputKind = 1;
    }
    if
    (
        scSoundTestGetCheckOptionButtonInput(is_button, R_JPAD | R_TRIG | R_CBUTTONS) ||
        scSoundTestGetCheckOptionStickInputLR(stick_range, 0x20, 1)
    )
    {
        if (is_button != FALSE)
        {
            gSoundTestOptionChangeWait = 12;
        }
        else gSoundTestOptionChangeWait = (160 - stick_range) / 16;

        gSoundTestOptionSelectID[gSoundTestOption]++;

        switch (gSoundTestOption)
        {
        case scSoundTest_Option_Music:
            if (gSoundTestOptionSelectID[gSoundTestOption] > 44)
            {
                gSoundTestOptionSelectID[gSoundTestOption] = 0;
            }
            if (gSoundTestOptionSelectID[gSoundTestOption] == 44)
            {
                gSoundTestOptionChangeWait += 20;
            }
            break;

        case scSoundTest_Option_Sound:
            if (gSoundTestOptionSelectID[gSoundTestOption] > 193)
            {
                gSoundTestOptionSelectID[gSoundTestOption] = 0;
            }
            if (gSoundTestOptionSelectID[gSoundTestOption] == 193)
            {
                gSoundTestOptionChangeWait += 20;
            }
            break;

        case scSoundTest_Option_Voice:
            if (gSoundTestOptionSelectID[gSoundTestOption] > 243)
            {
                gSoundTestOptionSelectID[gSoundTestOption] = 0;
            }
            if (gSoundTestOptionSelectID[gSoundTestOption] == 243)
            {
                gSoundTestOptionChangeWait += 20;
            }
            break;
        }
        if (gSoundTestDirectionInputKind != 2)
        {
            gSoundTestOptionChangeWait *= 2;
        }
        gSoundTestDirectionInputKind = 2;
    }
}

// 0x801320B4
void scSoundTestUpdateFunctions(void)
{
    if (gSoundTestFadeOutWait != -1)
    {
        if (gSoundTestFadeOutWait != 0)
        {
            gSoundTestFadeOutWait--;
        }
        else
        {
            func_80020A74();
            gSoundTestFadeOutWait = -1;
        }
    }
    else func_80020B38(0, 0x7000);

    if (func_ovl1_8039076C(A_BUTTON) != FALSE)
    {
        switch (gSoundTestOption)
        {
        case scSoundTest_Option_Music:
            if (gSoundTestFadeOutWait > 0)
            {
                gSoundTestFadeOutWait = -1;
            }
            func_80020A74();
            func_80020AB4(0, dSoundTestMusicIDs[gSoundTestOptionSelectID[scSoundTest_Option_Music]]);
            break;

        case scSoundTest_Option_Sound:
            func_800266A0();
            func_800269C0(dSoundTestSoundIDs[gSoundTestOptionSelectID[scSoundTest_Option_Sound]]);
            break;

        case scSoundTest_Option_Voice:
            func_800266A0();
            func_800269C0(dSoundTestVoiceIDs[gSoundTestOptionSelectID[scSoundTest_Option_Voice]]);
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
        gSoundTestFadeOutWait = 120;
        func_800266A0();
    }
}

// 0x80132244
void scSoundTestMenuProcUpdate(GObj *gobj)
{
    scSoundTestUpdateOptionColors();

    if (func_ovl1_8039076C(B_BUTTON) != FALSE)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = scMajor_Kind_Data;

        func_80020A74();
        func_800266A0();
        func_80020B38(0, 0x7000);
        func_80005C74();
    }
    scSoundTestUpdateControllerInputs();
    scSoundTestUpdateFunctions();
}

// 0x801322B8
void func_ovl62_801322B8(void)
{
    RldmSetup rldm_setup;

    rldm_setup.tableRomAddr = (intptr_t)&D_NF_001AC870;
    rldm_setup.tableFileCount = (intptr_t)&D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = D_ovl62_80134368;
    rldm_setup.statusBufSize = ARRAY_COUNT(D_ovl62_80134368);
    rldm_setup.forceBuf = 0;
    rldm_setup.forceBufSize = 0;

    rldm_initialize(&rldm_setup);
    rldm_load_files_into(D_ovl62_8013416C, ARRAY_COUNT(D_ovl62_8013416C), gSoundTestSpriteFiles, hal_alloc(rldm_bytes_need_to_load(D_ovl62_8013416C, ARRAY_COUNT(D_ovl62_8013416C)), 0x10));
}

// 0x8013234C
SObj* scSoundTestMakeHeaderSObj(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = omMakeGObjCommon(1, NULL, 2, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);

    sobj = func_ovl0_800CCFDC(gobj, ((uintptr_t)gSoundTestSpriteFiles[2] + (intptr_t)&lSoundTestDataTextSprite));

    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->sprite.red   = 0x5F;
    sobj->sprite.green = 0x58;
    sobj->sprite.blue  = 0x46;
    sobj->pos.x = 23.0F;
    sobj->pos.y = 17.0F;

    sobj = func_ovl0_800CCFDC(gobj, ((uintptr_t)gSoundTestSpriteFiles[4] + (intptr_t)&lSoundTestHeaderTextSprite));

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
void scSoundTestOptionProcUpdate(GObj *gobj)
{
    s32 color_id = gobj->user_data.s;
    SObj *sobj = SObjGetStruct(gobj);

    while (TRUE)
    {
        sobj->next->sprite.red = sobj->sprite.red = gSoundTestOptionColorR[color_id];

        sobj->next->sprite.green = sobj->sprite.green = gSoundTestOptionColorG[color_id];

        sobj->next->sprite.blue = sobj->sprite.blue = gSoundTestOptionColorB[color_id];

        stop_current_process(1);
    }
}

// 0x801324FC
void scSoundTestMusicProcRender(GObj *gobj)
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
                    gSoundTestOptionColorR[scSoundTest_Option_Music], 
                    gSoundTestOptionColorG[scSoundTest_Option_Music], 
                    gSoundTestOptionColorB[scSoundTest_Option_Music], 
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
SObj* scSoundTestMakeMusicSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = omMakeGObjCommon(1, NULL, 3, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);

    gobj->user_data.s = scSoundTest_Option_Music;

    omAddGObjCommonProc(gobj, scSoundTestOptionProcUpdate, 0, 1);
    omAddGObjRenderProc(omMakeGObjCommon(1, NULL, 3, 0x80000000), scSoundTestMusicProcRender, 2, 0x80000000, -1);

    sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)gSoundTestSpriteFiles[4] + (intptr_t)&lSoundTestMusicTextSprite));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 55.0F;
    sobj->pos.y = 61.0F;

    sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)gSoundTestSpriteFiles[4] + (intptr_t)&lSoundTestOptionRoundCorner));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 112.0F;
    sobj->pos.y = 56.0F;

    return sobj;
}

// 0x80132758
void scSoundTestSoundProcRender(GObj *gobj)
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
                    gSoundTestOptionColorR[scSoundTest_Option_Sound],
                    gSoundTestOptionColorG[scSoundTest_Option_Sound],
                    gSoundTestOptionColorB[scSoundTest_Option_Sound],
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
SObj* scSoundTestMakeSoundSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = omMakeGObjCommon(1, NULL, 3, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(gobj, scSoundTestOptionProcUpdate, 0, 1);

    gobj->user_data.s = scSoundTest_Option_Sound;

    omAddGObjRenderProc(omMakeGObjCommon(1, NULL, 3, 0x80000000), scSoundTestSoundProcRender, 2, 0x80000000, -1);

    sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)gSoundTestSpriteFiles[4] + (intptr_t)&lSoundTestSoundTextSprite));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 64.0F;
    sobj->pos.y = 108.0F;

    sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)gSoundTestSpriteFiles[4] + (intptr_t)&lSoundTestOptionRoundCorner));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 132.0F;
    sobj->pos.y = 104.0F;

    return sobj;
}

// 0x801329B8
void scSoundTestVoiceProcRender(GObj *gobj)
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
                    gSoundTestOptionColorR[scSoundTest_Option_Voice],
                    gSoundTestOptionColorG[scSoundTest_Option_Voice],
                    gSoundTestOptionColorB[scSoundTest_Option_Voice],
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
SObj* scSoundTestMakeVoiceSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = omMakeGObjCommon(1, NULL, 3, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(gobj, scSoundTestOptionProcUpdate, 0, 1);

    gobj->user_data.s = scSoundTest_Option_Voice;

    omAddGObjRenderProc(omMakeGObjCommon(1, NULL, 3, 0x80000000), scSoundTestVoiceProcRender, 2, 0x80000000, -1);

    sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)gSoundTestSpriteFiles[4] + (intptr_t)&lSoundTestVoiceTextSprite));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 94.0F;
    sobj->pos.y = 156.0F;

    sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)gSoundTestSpriteFiles[4] + (intptr_t)&lSoundTestOptionRoundCorner));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 152.0F;
    sobj->pos.y = 152.0F;

    return sobj;
}

// 0x80132C10
SObj* scSoundTestMakeAButtonSObj(GObj *gobj)
{
    SObj *sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)gSoundTestSpriteFiles[0] + (intptr_t)&lSoundTestAButtonSprite));

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
SObj* scSoundTestMakeBButtonSObj(GObj *gobj)
{
    SObj *sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)gSoundTestSpriteFiles[0] + (intptr_t)&lSoundTestBButtonSprite));

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
SObj* scSoundTestMakeStartButtonSObj(GObj *gobj)
{
    SObj *sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)gSoundTestSpriteFiles[4] + (intptr_t)&lSoundTestStartButtonSprite));

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
SObj* scSoundTestMakeAFunctionSObj(GObj *gobj)
{
    SObj *sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)gSoundTestSpriteFiles[4] + (intptr_t)&lSoundTestAFunctionTextSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->sprite.red   = 0x73;
    sobj->sprite.green = 0x6B;
    sobj->sprite.blue  = 0x59;

    sobj->pos.x = 72.0F;
    sobj->pos.y = 208.0F;

    return sobj;
}

// 0x80132DF8
SObj* scSoundTestMakeStartFunctionSObj(GObj *gobj)
{
    SObj *sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)gSoundTestSpriteFiles[4] + (intptr_t)&lSoundTestStartFunctionTextSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->sprite.red   = 0x73;
    sobj->sprite.green = 0x6B;
    sobj->sprite.blue  = 0x59;

    sobj->pos.x = 148.0F;
    sobj->pos.y = 208.0F;

    return sobj;
}

// 0x80132E60
SObj* scSoundTestMakeBFunctionSObj(GObj *gobj)
{
    SObj *sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)gSoundTestSpriteFiles[4] + (intptr_t)&lSoundTestBFunctionTextSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->sprite.red   = 0x73;
    sobj->sprite.green = 0x6B;
    sobj->sprite.blue  = 0x59;

    sobj->pos.x = 235.0F;
    sobj->pos.y = 208.0F;

    return sobj;
}

// 0x80132EC8
void scSoundTestMakeButtonSObjs(void)
{
    GObj *gobj = omMakeGObjCommon(1, NULL, 3, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    scSoundTestMakeAButtonSObj(gobj);
    scSoundTestMakeBButtonSObj(gobj);
    scSoundTestMakeStartButtonSObj(gobj);
    scSoundTestMakeAFunctionSObj(gobj);
    scSoundTestMakeStartFunctionSObj(gobj);
    scSoundTestMakeBFunctionSObj(gobj);
}

// 0x80132F50
void scSoundTestMakeNumberSObj(GObj *gobj)
{
    s32 i;

    for (i = 0; i < scSoundTest_Option_EnumMax; i++)
    {
        SObj *sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)gSoundTestSpriteFiles[1] + (intptr_t)dSoundTestDigitSpriteOffsets[0]));

        sobj->sprite.attr = SP_HIDDEN;

        switch (gobj->user_data.s)
        {
        case scSoundTest_Option_Music:
            sobj->pos.y = 67.0F;
            break;

        case scSoundTest_Option_Sound:
            sobj->pos.y = 115.0F;
            break;

        case scSoundTest_Option_Voice:
            sobj->pos.y = 163.0F;
            break;
        }
    }
}

// 0x80133058
void scSoundTestUpdateNumberPositions(GObj *gobj, f32 width)
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

    pos_x = gSoundTestSelectIDPositionsX[index] - (width * 0.5F);

    while ((sobj != NULL) && (sobj->sprite.attr != SP_HIDDEN))
    {
        sobj->pos.x = pos_x + sobj->user_data.s + ((index == scSoundTest_Option_Music) ? 171.0F : ((index == scSoundTest_Option_Sound) ? 190.0F : 210.0F));

        sobj = sobj->next;
    }
}

// 0x80133194
void scSoundTestUpdateNumberSprites(GObj *gobj)
{
    SObj *sobj = SObjGetStruct(gobj);
    f32 width = 0.0F;
    s32 option = gobj->user_data.s;
    s32 number = gSoundTestOptionSelectID[option] + 1;

    while (sobj != NULL)
    {
        sobj->sprite.attr = SP_HIDDEN;
        sobj = sobj->next;
    }
    sobj = SObjGetStruct(gobj);

    do
    {
        sobj->sprite = *(Sprite*) ((uintptr_t)gSoundTestSpriteFiles[1] + (intptr_t)dSoundTestDigitSpriteOffsets[number % 10]);

        sobj->user_data.s = dSoundTestDigitSpriteWidths[number % 10];

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

    scSoundTestUpdateNumberPositions(gobj, width);
}

// 0x80133304
void scSoundTestSelectIDProcUpdate(GObj *gobj)
{
    s32 option = gobj->user_data.s;
    s32 number = -1;

    scSoundTestMakeNumberSObj(gobj);

    while (TRUE)
    {
        if (number != gSoundTestOptionSelectID[option])
        {
            number = gSoundTestOptionSelectID[option];

            scSoundTestUpdateNumberSprites(gobj);
        }
        stop_current_process(1);
    }
}

// 0x80133398
void scSoundTestMakeSelectIDSObjs(void)
{
    GObj *gobj = omMakeGObjCommon(1, NULL, 5, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(gobj, scSoundTestSelectIDProcUpdate, 0, 1);

    gobj->user_data.s = scSoundTest_Option_Music;

    gobj = omMakeGObjCommon(1, NULL, 6, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(gobj, scSoundTestSelectIDProcUpdate, 0, 1);

    gobj->user_data.s = scSoundTest_Option_Sound;

    gobj = omMakeGObjCommon(1, NULL, 7, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(gobj, scSoundTestSelectIDProcUpdate, 0, 1);

    gobj->user_data.s = scSoundTest_Option_Voice;
}

// 0x801334BC
void scSoundTestArrowsProcUpdate(GObj *gobj)
{
    SObj *sobj = SObjGetStruct(gobj);
    s32 arrow_toggle_wait = 30;
    s32 option = gSoundTestOption;
    s32 id;

    while (TRUE)
    {
        if (option != gSoundTestOption)
        {
            option = gSoundTestOption;

            arrow_toggle_wait = 30;

            gobj->obj_renderflags = GOBJ_RENDERFLAG_NONE;
        }
        if (arrow_toggle_wait == 0)
        {
            arrow_toggle_wait = 30;

            gobj->obj_renderflags ^= GOBJ_RENDERFLAG_HIDDEN;
        }
        arrow_toggle_wait--;

        id = gSoundTestOption * scSoundTest_Option_EnumMax; // Really?

        sobj->pos.x = dSoundTestArrowSpritePositions[id + 0];
        sobj->pos.y = dSoundTestArrowSpritePositions[id + 1];
        sobj->next->pos.x = dSoundTestArrowSpritePositions[id + 2];
        sobj->next->pos.y = dSoundTestArrowSpritePositions[id + 1];

        stop_current_process(1);
    }
}

// 0x801335C8
void scSoundTestMakeArrowSObjs(void)
{
    GObj *gobj = omMakeGObjCommon(1, NULL, 2, 0x80000000);
    SObj *sobj;

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(gobj, scSoundTestArrowsProcUpdate, 0, 1);

    sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)gSoundTestSpriteFiles[4] + (intptr_t)&lSoundTestLeftArrowSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->pos.x = dSoundTestArrowSpritePositions[scSoundTest_Option_Start + 0];
    sobj->pos.y = dSoundTestArrowSpritePositions[scSoundTest_Option_Start + 1];

    sobj->sprite.red   = 0xFF;
    sobj->sprite.green = 0xC3;
    sobj->sprite.blue  = 0x26;

    sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)gSoundTestSpriteFiles[4] + (intptr_t)&lSoundTestRightArrowSprite));

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->pos.x = dSoundTestArrowSpritePositions[scSoundTest_Option_Start + 2];
    sobj->pos.y = dSoundTestArrowSpritePositions[scSoundTest_Option_Start + 3];

    sobj->sprite.red   = 0xFF;
    sobj->sprite.green = 0xC3;
    sobj->sprite.blue  = 0x26;
}

// 0x801336D8
void scSoundTestMakeAllSObjs(void)
{
    scSoundTestMakeHeaderSObj();
    scSoundTestMakeMusicSObjs();
    scSoundTestMakeSoundSObjs();
    scSoundTestMakeVoiceSObjs();
    scSoundTestMakeSelectIDSObjs();
    scSoundTestMakeArrowSObjs();
    scSoundTestMakeButtonSObjs();
}

// 0x80133728
void func_ovl62_80133728(void)
{
    OMCamera *cam = OMCameraGetStruct(func_8000B93C(2, NULL, 4, 0x80000000, func_ovl0_800CD2CC, 0x1E, 2, -1, 0, 1, 0, 1, 0));

    func_80007080(&cam->viewport, 10.0F, 10.0F, 630.0F, 470.0F);

    cam = OMCameraGetStruct(func_8000B93C(2, NULL, 4, 0x80000000, func_80017EC0, 0x32, 4, -1, 0, 1, 0, 1, 0));

    func_80007080(&cam->viewport, 10.0F, 10.0F, 630.0F, 470.0F);
}

// 0x80133858
void scSoundTestInitVars(void)
{
    gSoundTestOptionColorR[scSoundTest_Option_Music] = gSoundTestOptionColorR[scSoundTest_Option_Sound] = gSoundTestOptionColorR[scSoundTest_Option_Voice] = 0x7D;
    gSoundTestOptionColorG[scSoundTest_Option_Music] = gSoundTestOptionColorG[scSoundTest_Option_Sound] = gSoundTestOptionColorG[scSoundTest_Option_Voice] = 0x45;
    gSoundTestOptionColorB[scSoundTest_Option_Music] = gSoundTestOptionColorB[scSoundTest_Option_Sound] = gSoundTestOptionColorB[scSoundTest_Option_Voice] = 0x07;

    gSoundTestOption = 0;
    gSoundTestOptionChangeWait = 0;
    gSoundTestDirectionInputKind = 0;

    gSoundTestOptionSelectID[scSoundTest_Option_Music] = gSoundTestOptionSelectID[scSoundTest_Option_Sound] = gSoundTestOptionSelectID[scSoundTest_Option_Voice] = 0;

    gSoundTestSelectIDPositionsX[scSoundTest_Option_Music] = 26.5F;
    gSoundTestSelectIDPositionsX[scSoundTest_Option_Sound] = 26.5F;
    gSoundTestSelectIDPositionsX[scSoundTest_Option_Voice] = 26.5F;

    gSoundTestFadeOutWait = -1;
}

// 0x801338F8
void func_ovl62_801338F8(void)
{
    omMakeGObjCommon(0, scSoundTestMenuProcUpdate, 1, 0x80000000);
    func_8000B9FC(4, 0x80000000, 0x64, 2, 0xFF);
    func_ovl62_801322B8();
    scSoundTestInitVars();
    scSoundTestMakeAllSObjs();
    func_ovl62_80133728();
}

// 0x80133964
void func_ovl62_80133964(Gfx **display_list)
{
    gSPDisplayList(display_list[0]++, dSoundTestDisplayList);
}

// 0x80133988
void scSoundTestStartScene(void)
{
    D_ovl62_80134240.unk_scdatabounds_0xC = ((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl62_80134240);
    D_ovl62_8013425C.arena_size = ((uintptr_t)&func_ovl1_803903E0 - (uintptr_t)&D_NF_80134480);
    func_8000683C(&D_ovl62_8013425C);
}