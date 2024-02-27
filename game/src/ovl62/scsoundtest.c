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

extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_00000438;
extern intptr_t D_NF_00000854;
extern intptr_t D_NF_000009C0;
extern intptr_t D_NF_00000B40;
extern intptr_t D_NF_00000E48;
extern intptr_t D_NF_00001138;
extern intptr_t D_NF_00001BB8;

// DATA

// 0x801339E0
u32 dSoundTestMusicIDs[45];

// 0x80133A94
u32 dSoundTestSoundIDs[194];

// 0x80133D9C
u32 dSoundTestVoiceIDs[244];

// GLOBALS

// 0x8013416C
u32 D_ovl62_8013416C[5];

// 0x80134308
s32 gSoundTestOption;                                       // Sound Test option selected (0 = Music, 1 = Sound, 2 = Voice)

// 0x80134310
s32 gSoundTestOptionColorR[scSoundTest_Option_EnumMax];     // R color value of sound test menu options

// 0x80134320
s32 gSoundTestOptionColorG[scSoundTest_Option_EnumMax];     // G color value of sound test menu options

// 0x80134330
s32 gSoundTestOptionColorB[scSoundTest_Option_EnumMax];     // B color value of sound test menu options

// 0x8013433C
s32 gSoundTestOptionChangeWait;                             // Frames to wait before new sound test option can be selected

// 0x80134340                                               // Type of directional input: 0 = none, 1 = left, 2 = right, 3 = up, 4 = down
s32 gSoundTestDirectionInputKind;

// 0x80134344
s32 D_ovl62_80134344;

// 0x80134348
s32 gSoundTestOptionSelectID[3];                            // Current selected ID of each option (e.g. Music is index 0 and holds a value from 0 to 44)

// 0x80134364
s32 gSoundTestFadeOutWait;

// 0x80134368
RldmFileNode D_ovl62_80134368[32];

// 0x80134468
void *D_ovl62_80134468[8];

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
void scSoundTestUpdateAll(GObj *gobj)
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
    rldm_load_files_into(D_ovl62_8013416C, ARRAY_COUNT(D_ovl62_8013416C), D_ovl62_80134468, hal_alloc(rldm_bytes_need_to_load(D_ovl62_8013416C, ARRAY_COUNT(D_ovl62_8013416C)), 0x10));
}

// 0x8013234C
SObj* scSoundTestMakeHeaderSObj(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = omMakeGObjCommon(1, NULL, 2, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);

    sobj = func_ovl0_800CCFDC(gobj, ((uintptr_t)D_ovl62_80134468[2] + (intptr_t)&D_NF_00000B40));

    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->sprite.red   = 0x5F;
    sobj->sprite.green = 0x58;
    sobj->sprite.blue  = 0x46;
    sobj->pos.x = 23.0F;
    sobj->pos.y = 17.0F;

    sobj = func_ovl0_800CCFDC(gobj, ((uintptr_t)D_ovl62_80134468[4] + (intptr_t)&D_NF_00001BB8));

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

    sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)D_ovl62_80134468[4] + (intptr_t)&D_NF_00000438));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 55.0F;
    sobj->pos.y = 61.0F;

    sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)D_ovl62_80134468[4] + (intptr_t)&D_NF_00001138));
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

    sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)D_ovl62_80134468[4] + (intptr_t)&D_NF_000009C0));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 64.0F;
    sobj->pos.y = 108.0F;

    sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)D_ovl62_80134468[4] + (intptr_t)&D_NF_00001138));
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

    gobj->user_data.s = 2;

    omAddGObjRenderProc(omMakeGObjCommon(1, NULL, 3, 0x80000000), scSoundTestSoundProcRender, 2, 0x80000000, -1);

    sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)D_ovl62_80134468[4] + (intptr_t)&D_NF_00000E48));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 94.0F;
    sobj->pos.y = 156.0F;

    sobj = func_ovl0_800CCFDC(gobj, (Sprite*) ((uintptr_t)D_ovl62_80134468[4] + (intptr_t)&D_NF_00001138));
    sobj->sprite.attr = SP_TRANSPARENT;
    sobj->pos.x = 152.0F;
    sobj->pos.y = 152.0F;

    return sobj;
}
