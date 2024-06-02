#include <sys/develop.h>
// #include <ft/ftdef.h>
// #include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <sss.h>

// ovl30 stuff
extern RldmFileId D_ovl30_801344D0[5];
extern mnStageFileInfo dMNStageFileInfoArray[9]; // 801344E4[9];

extern intptr_t dMNStageBackgroundFileOffsets[9]; //0x8013452C
extern rdFileNode dMNStageTrainingBackgroundFileNodes[3]; // 0x80134550
extern s32 dMNStageTrainingBackgroundIDs[10]; // 0x80134568

extern Lights1 D_ovl30_80134590 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14); // 20202000 20202000 FFFFFF00 FFFFFF00 14141400 00000000
extern Gfx D_ovl30_801345A8[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(D_ovl30_80134590),
    gsSPEndDisplayList()
};

extern intptr_t dMNStageChrOffsets[29]; // 0x801345D0[29]

extern s32 dMNStageIDOrder[10]; // 0x80134644[10];
extern intptr_t dMNStageImageOffsets[10]; // 0x8013466C[10]
extern Vec2f dMNStageNamePositions[9]; // 0x80134694[9];
extern intptr_t dMNStageNameImageOffsets[9]; // 0x801346DC[9];
extern Vec2f dMNStageLogoPositions[10]; // 0x801347E4[10]
extern Vec2f dMNStageLogoOffsets[9]; // 0x80134834[9]
extern f32 dMNStagePreviewScale[9]; // 0x80134858[9]
extern Vec2f dMNStagePreviewTranslations[9]; // 0x8013487C[9]

extern scUnkDataBounds D_ovl30_8013490C;
extern scRuntimeInfo D_ovl30_80134928;

extern s32 D_ovl30_801348E8[9]; // unused, probably stage_ids

extern s32 gMNStageCursorSlotId; // 0x80134BD8
extern GObj* gMNStageCursorGobj; // 0x80134BDC
extern GObj* gMNStageNameLogoGobj; // 0x80134BE0
extern GObj* gMNStageHeap0BackgroundGobj; // 0x80134BE4
extern GObj* gMNStageHeap1BackgroundGobj; // 0x80134BE8
extern GObj* gMNStageHeap0StageInfoArray[4]; // 0x80134BF0
extern GObj* gMNStageHeap1StageInfoArray[4]; // 0x80134C00
extern gmGroundInfo* gMNStageGroundInfo; // 0x80134C10
extern Camera* gMNStagePreviewCam; // 0x80134C14;
extern sb32 gMNStageIsTrainingMode; // 0x80134C18
extern u8 gMNStageUnlockedMask; // 0x80134C1C; // flag indicating which bonus features are available
extern s32 gMNStageCurrentHeap; // 0x80134C20

extern s32 gMNStageFramesElapsed; // 0x80134C24; // frames elapsed on SSS
extern s32 gMNStageScrollBuffer; // 0x80134C28; // frames until can move cursor again
extern s32 gMNStageMaxFramesElapsed; // 0x80134C2C // frames to wait until exiting the SSS

extern uintptr_t gMNStageModelHeap0Ptr; // 80134E24;
extern uintptr_t gMNStageModelHeap1Ptr; // 80134E28;

extern rdFileNode D_ovl30_80134D20;
extern u32 D_ovl30_80134C30[240];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern s32 gMNStageFilesArray[5]; // 0x80134E10[5]
// // extern s32 gFile014; // 0x80134E10; // file 0x014 pointer
// // extern s32 gFile015; // 0x80134E14; // file 0x015 pointer
// // extern s32 gFile01E; // 0x80134E18; // file 0x01E pointer
// // extern s32 gFile021; // 0x80134E1C; // file 0x021 pointer
// // extern s32 gFile01A; // 0x80134E20; // file 0x01A pointer

// // // Offsets
extern intptr_t FILE_015_BACKGROUND_IMAGE_OFFSET = 0x440; // file 0x015 image offset for background tile

extern intptr_t FILE_01A_TRAINING_BACKGROUND_IMAGE_OFFSET = 0x20718; // also file 0x1B and 0x1C

extern intptr_t FILE_01E_CURSOR_IMAGE_OFFSET = 0x1AB8; // file 0x1E image offset for cursor
extern intptr_t FILE_01E_SMASH_LOGO_IMAGE_OFFSET = 0x1DD8; // file 0x1E image offset for Smash logo
extern intptr_t FILE_01E_STAGE_SELECT_IMAGE_OFFSET = 0x26A0; // file 0x1E image offset for wooden circle
extern intptr_t FILE_01E_WOODEN_CIRCLE_IMAGE_OFFSET = 0x3840; // file 0x1E image offset for wooden circle
extern intptr_t FILE_01E_YELLOW_OVAL_RIGHT_IMAGE_OFFSET = 0x3C68; // file 0x1E image offset for yellow oval right edge
extern intptr_t FILE_01E_YELLOW_OVAL_CENTER_IMAGE_OFFSET = 0x3D68; // file 0x1E image offset for yellow oval center
extern intptr_t FILE_01E_YELLOW_OVAL_LEFT_IMAGE_OFFSET = 0x3FA8; // file 0x1E image offset for yellow oval left edge
extern intptr_t FILE_01E_STAGE_PREVIEW_PATTERNED_BG_IMAGE_OFFSET = 0xC728; // file 0x1E image offset for patterned stage preview bg texture
extern intptr_t FILE_01E_RANDOM_IMAGE_OFFSET = 0xCB10; // file 0x1E image offset for Random stage image
extern intptr_t FILE_01E_RANDOM_STAGE_PREVIEW_BG_IMAGE_OFFSET = 0xDE30; // file 0x1E image offset for Random stage image

// 0x80131B00
void mnStageAllocateStageModelHeaps()
{
    u32 size;
    u32 max = 0;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(dMNStageFileInfoArray); i++)
    {
        size = rdManagerGetFileSize(dMNStageFileInfoArray[i].id);

        if (max < size)
        {
            max = size;
        }
    }

    gMNStageModelHeap0Ptr = gsMemoryAlloc(max, 0x10);
    gMNStageModelHeap1Ptr = gsMemoryAlloc(max, 0x10);
}

// 0x80131B88
void mnStageSetLighting(Gfx** display_list) {
    gSPDisplayList(display_list[0]++, &D_ovl30_801345A8);
}

// 0x80131BAC
sb32 mnStageGetIsLocked(s32 stage_id)
{
    if (stage_id == Gr_Kind_Inishie)
    {
        if (gMNStageUnlockedMask & GMSAVE_UNLOCK_MASK_INISHIE)
        {
            return FALSE;
        }
        return TRUE;
    }

    return FALSE;
}

// 0x80131BE4
s32 mnStageGetChrIndex(const char chr)
{
    switch (chr) {
        case '\'':
            return 0x1A;
        case '%':
            return 0x1B;
        case '.':
            return 0x1C;
        case ' ':
            return 0x1D;
        default:
            if ((chr < 'A') || (chr > 'Z'))
            {
                return 0x1D;
            }
            else return chr - 0x41;
    }
}

// 0x80131C5C
f32 mnStageGetChrSpacing(const char *s, s32 c)
{
    switch (s[c])
    {
    case 'A':
        switch (s[c + 1])
        {
        case 'F':
        case 'P':
        case 'T':
        case 'V':
        case 'Y':
            return 0.0F;

        default:
            return 1.0F;
        }
        break;

    case 'F':
    case 'P':
    case 'V':
    case 'Y':
        switch(s[c + 1])
        {
        case 'A':
        case 'T':
            return 0.0F;

        default:
            return 1.0F;
        }
        break;

    case 'Q':
    case 'T':
        switch(s[c + 1])
        {
        case '\'':
        case '.':
            return 1.0F;

        default:
            return 0.0F;
        }
        break;

    case '\'':
        return 1.0F;

    case '.':
        return 1.0F;

    default:
        switch(s[c + 1])
        {
        case 'T':
            return 0.0F;

        default:
            return 1.0F;
        }
        break;
    }
}

// 0x80131D80 - Unused?
void mnStageDrawString(GObj* gobj, const char *str, f32 x, f32 y, s32 color[3])
{
    intptr_t chrOffsets[29] = dMNStageChrOffsets;
    SObj* chr_sobj;
    f32 start_x = x;
    s32 i;

    for (i = 0; str[i] != 0; i++)
    {
        if (((((str[i] >= '0') && (str[i] <= '9')) ? TRUE : FALSE) != FALSE) || (str[i] == ' '))
        {
            if (str[i] == ' ')
            {
                start_x += 4.0f;
            }
            else
            {
                start_x += str[i] - '0';
            }
        }
        else
        {
            chr_sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMNStageFilesArray[3], chrOffsets[mnStageGetChrIndex(str[i])]));
            chr_sobj->pos.x = start_x;

            start_x += chr_sobj->sprite.width + mnStageGetChrSpacing(str, i);

            switch (str[i])
            {
                case '\'':
                    chr_sobj->pos.y = y - 1.0F;
                    break;
                case '.':
                    chr_sobj->pos.y = y + 4.0F;
                    break;
                default:
                    chr_sobj->pos.y = y;
                    break;
            }

            chr_sobj->sprite.attr &= ~SP_FASTCOPY;
            chr_sobj->sprite.attr |= SP_TRANSPARENT;
            chr_sobj->sprite.red = color[0];
            chr_sobj->sprite.green = color[1];
            chr_sobj->sprite.blue = color[2];
        }
    }
}

// 0x80131FA4
void mnStageCreateBackground()
{
    GObj* background_gobj;
    SObj* background_sobj;

    background_gobj = omMakeGObjSPAfter(0U, NULL, 0x2U, 0x80000000U);
    omAddGObjRenderProc(background_gobj, func_ovl0_800CCF00, 0x0U, 0x80000000U, -1);
    background_sobj = gcAppendSObjWithSprite(background_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_015_BACKGROUND_IMAGE_OFFSET));
    background_sobj->cmt = G_TX_WRAP;
    background_sobj->cms = G_TX_WRAP;
    background_sobj->maskt = 6;
    background_sobj->masks = 5;
    background_sobj->lrs = 300;
    background_sobj->lrt = 220;
    background_sobj->pos.x = 10.0F;
    background_sobj->pos.y = 10.0F;
}

// 0x80132048
void mnStageCreateWoodenCircle()
{
    GObj* wooden_circle_gobj;
    SObj* wooden_circle_sobj;

    wooden_circle_gobj = omMakeGObjSPAfter(0U, NULL, 8U, 0x80000000U);
    omAddGObjRenderProc(wooden_circle_gobj, func_ovl0_800CCF00, 6U, 0x80000000U, -1);

    wooden_circle_sobj = gcAppendSObjWithSprite(wooden_circle_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_01E_WOODEN_CIRCLE_IMAGE_OFFSET));
    wooden_circle_sobj->sprite.attr &= ~SP_FASTCOPY;
    wooden_circle_sobj->sprite.attr |= SP_TRANSPARENT;
    wooden_circle_sobj->pos.x = 189.0f;
    wooden_circle_sobj->pos.y = 124.0f;
}

// 0x801320E0
void mnStageRenderStageSelectGfx(GObj* stage_select_gobj) {
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x57, 0x60, 0x88, 0xFF);
    gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x57, 0x60, 0x88, 0xFF);
    gDPFillRectangle(gDisplayListHead[0]++, 160, 128, 320, 134);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x00, 0x00, 0x00, 0x33);
    gDPFillRectangle(gDisplayListHead[0]++, 194, 189, 268, 193);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    func_ovl0_800CCEAC();
    func_ovl0_800CCF00(stage_select_gobj);
}

// 0x80132288
void mnStageCreateStageSelectGfx()
{
    GObj* stage_select_gobj;
    SObj* stage_select_sobj;
    SObj* yellow_oval_left_sobj;
    SObj* yellow_oval_center_sobj;
    SObj* yellow_oval_right_sobj;
    s32 x;

    stage_select_gobj = omMakeGObjSPAfter(0U, NULL, 6U, 0x80000000U);
    omAddGObjRenderProc(stage_select_gobj, mnStageRenderStageSelectGfx, 4U, 0x80000000U, -1);

    // Stage Select texture
    stage_select_sobj = gcAppendSObjWithSprite(stage_select_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_01E_STAGE_SELECT_IMAGE_OFFSET));
    stage_select_sobj->sprite.attr &= ~SP_FASTCOPY;
    stage_select_sobj->sprite.attr |= SP_TRANSPARENT;
    stage_select_sobj->shadow_color.r = 0;
    stage_select_sobj->shadow_color.g = 0;
    stage_select_sobj->shadow_color.b = 0;
    stage_select_sobj->sprite.red = 0xAF;
    stage_select_sobj->sprite.green = 0xB1;
    stage_select_sobj->sprite.blue = 0xCC;
    stage_select_sobj->pos.x = 172.0f;
    stage_select_sobj->pos.y = 122.0f;

    // Yellow oval left edge
    yellow_oval_left_sobj = gcAppendSObjWithSprite(stage_select_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_01E_YELLOW_OVAL_LEFT_IMAGE_OFFSET));
    yellow_oval_left_sobj->sprite.attr &= ~SP_FASTCOPY;
    yellow_oval_left_sobj->sprite.attr |= SP_TRANSPARENT;
    yellow_oval_left_sobj->pos.x = 174.0f;
    yellow_oval_left_sobj->pos.y = 191.0f;

    // Yellow oval middle section
    for (x = 0xBA; x < 0x106; x += 4)
    {
        yellow_oval_center_sobj = gcAppendSObjWithSprite(stage_select_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_01E_YELLOW_OVAL_CENTER_IMAGE_OFFSET));
        yellow_oval_center_sobj->pos.x = x;
        yellow_oval_center_sobj->pos.y = 191.0f;
    }

    // Yellow oval right edge
    yellow_oval_right_sobj = gcAppendSObjWithSprite(stage_select_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_01E_YELLOW_OVAL_RIGHT_IMAGE_OFFSET));
    yellow_oval_right_sobj->sprite.attr &= ~SP_FASTCOPY;
    yellow_oval_right_sobj->sprite.attr |= SP_TRANSPARENT;
    yellow_oval_right_sobj->pos.x = 262.0f;
    yellow_oval_right_sobj->pos.y = 191.0f;
}

// 0x80132430
s32 mnStageGetStageID(s32 slot_id)
{
    s32 stage_ids[10] = dMNStageIDOrder;

    if (slot_id == 9)
    {
        return 0xDE;
    }

    return stage_ids[slot_id];
}

// 0x80132498
s32 mnStageGetSlotID(s32 stage_id)
{
    switch (stage_id)
    {
        case 0x0:
            return 0;
        case 0x2:
            return 1;
        case 0x4:
            return 2;
        case 0x3:
            return 3;
        case 0x8:
            return 4;
        case 0x5:
            return 5;
        case 0x6:
            return 6;
        case 0x1:
            return 7;
        case 0x7:
            return 8;
        case 0xDE:
            return 9;
    }
}

// 0x80132528
void mnStageCreateStageImages()
{
    GObj* stage_image_gobj;
    SObj* stage_image_sobj;
    intptr_t offsets[10] = dMNStageImageOffsets;
    s32 x;
    s32 i;

    stage_image_gobj = omMakeGObjSPAfter(0U, NULL, 3U, 0x80000000U);
    omAddGObjRenderProc(stage_image_gobj, func_ovl0_800CCF00, 1U, 0x80000000U, -1);

    for (i = 0; i < ARRAY_COUNT(offsets); i++)
    {
        if (mnStageGetIsLocked(mnStageGetStageID(i)) == FALSE)
        {
            x = i * 50;

            if (i == 9)
            {
                stage_image_sobj = gcAppendSObjWithSprite(stage_image_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_01E_RANDOM_IMAGE_OFFSET));
            }
            else
            {
                stage_image_sobj = gcAppendSObjWithSprite(stage_image_gobj, GetAddressFromOffset(gMNStageFilesArray[2], offsets[mnStageGetStageID(i)]));
            }

            if (i < 5)
            {
                stage_image_sobj->pos.y = 30.0f;
                stage_image_sobj->pos.x = x + 30;
            }
            else
            {
                stage_image_sobj->pos.y = 68.0f;
                stage_image_sobj->pos.x = x - 220;
            }
        }
    }
}

// 0x801326DC
void mnStagePositionStageName(SObj* stage_name_sobj, s32 stage_id)
{
    Vec2f positions[9] = dMNStageNamePositions;

    stage_name_sobj->pos.x = 183.0f;
    stage_name_sobj->pos.y = 196.0f;
}

// 0x80132738
void mnStageCreateStageName(GObj* name_logo_gobj, s32 stage_id)
{
    SObj* stage_name_sobj;
    intptr_t offsets[9] = dMNStageNameImageOffsets;

    stage_name_sobj = gcAppendSObjWithSprite(name_logo_gobj, GetAddressFromOffset(gMNStageFilesArray[2], offsets[stage_id]));
    mnStagePositionStageName(stage_name_sobj, stage_id);

    stage_name_sobj->sprite.attr &= ~SP_FASTCOPY;
    stage_name_sobj->sprite.attr |= SP_TRANSPARENT;
    stage_name_sobj->sprite.red = 0;
    stage_name_sobj->sprite.green = 0;
    stage_name_sobj->sprite.blue = 0;
}

// 0x801327E0 - Unused?
void func_ovl30_801327E0()
{
    return;
}

// 0x801327E8 - Unused?
void func_ovl30_801327E8()
{
    return;
}

// 0x801327F0
void mnStagePositionLogo(GObj* name_logo_gobj, s32 stage_id)
{
    Vec2f positions[10] = dMNStageLogoPositions;

    if (stage_id == 0xDE)
    {
        SObjGetStruct(name_logo_gobj)->pos.x = 223.0f;
        SObjGetStruct(name_logo_gobj)->pos.y = 144.0f;
    }
    else
    {
        SObjGetStruct(name_logo_gobj)->pos.x = positions[stage_id].x + 189.0f;
        SObjGetStruct(name_logo_gobj)->pos.y = positions[stage_id].y + 124.0f;
    }
}

// 0x801328A8
void mnStageCreateLogo(GObj* name_logo_gobj, s32 stage_id)
{
    SObj* name_logo_sobj;
    intptr_t offsets[9] = dMNStageLogoOffsets;

    if (stage_id == 0xDE)
    {
        name_logo_sobj = gcAppendSObjWithSprite(name_logo_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_01E_SMASH_LOGO_IMAGE_OFFSET));
        name_logo_sobj->sprite.attr &= ~SP_FASTCOPY;
        name_logo_sobj->sprite.attr |= SP_TRANSPARENT;
        name_logo_sobj->sprite.red = 0x5C;
        name_logo_sobj->sprite.green = 0x22;
        name_logo_sobj->sprite.blue = 0;
    }
    else
    {
        name_logo_sobj = gcAppendSObjWithSprite(name_logo_gobj, GetAddressFromOffset(gMNStageFilesArray[0], offsets[stage_id]));
        name_logo_sobj->sprite.attr &= ~SP_FASTCOPY;
        name_logo_sobj->sprite.attr |= SP_TRANSPARENT;
        name_logo_sobj->sprite.red = 0x5C;
        name_logo_sobj->sprite.green = 0x22;
        name_logo_sobj->sprite.blue = 0;
    }

    mnStagePositionLogo(name_logo_gobj, stage_id);
}

// 0x801329AC
void mnStageCreateStageNameAndLogo(s32 slot_id)
{
    GObj* name_logo_gobj;

    if (gMNStageNameLogoGobj != NULL)
    {
        omEjectGObj(gMNStageNameLogoGobj);
    }

    name_logo_gobj = omMakeGObjSPAfter(0U, NULL, 4U, 0x80000000U);
    gMNStageNameLogoGobj = name_logo_gobj;
    omAddGObjRenderProc(name_logo_gobj, func_ovl0_800CCF00, 2U, 0x80000000U, -1);
    mnStageCreateLogo(gMNStageNameLogoGobj, mnStageGetStageID(slot_id));

    if (slot_id != 9)
    {
        mnStageCreateStageName(gMNStageNameLogoGobj, mnStageGetStageID(slot_id));
    }
}

// 0x80132A58
void mnStagePositionCursor(GObj* cursor_gobj, s32 slot_id)
{
    if (slot_id < 5)
    {
        SObjGetStruct(cursor_gobj)->pos.x = (slot_id * 50) + 23;
        SObjGetStruct(cursor_gobj)->pos.y = 23.0F;
    }
    else
    {
        SObjGetStruct(cursor_gobj)->pos.x = (slot_id * 50) - 250 + 23;
        SObjGetStruct(cursor_gobj)->pos.y = 61.0F;
    }
}


// 0x80132ADC
void mnStageCreateCursor()
{
    GObj* cursor_gobj;
    SObj* cursor_sobj;

    gMNStageCursorGobj = cursor_gobj = omMakeGObjSPAfter(0U, NULL, 7U, 0x80000000U);
    omAddGObjRenderProc(cursor_gobj, func_ovl0_800CCF00, 5U, 0x80000000U, -1);

    cursor_sobj = gcAppendSObjWithSprite(cursor_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_01E_CURSOR_IMAGE_OFFSET));
    cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
    cursor_sobj->sprite.attr |= SP_TRANSPARENT;
    cursor_sobj->sprite.red = 0xFF;
    cursor_sobj->sprite.green = 0;
    cursor_sobj->sprite.blue = 0;

    mnStagePositionCursor(cursor_gobj, gMNStageCursorSlotId);
}

// 0x80132B84
void mnStageLoadStageFile(s32 stage_id, u8* heapAddr)
{
    gMNStageGroundInfo = (gmGroundInfo*) rldm_get_file_external_force(dMNStageFileInfoArray[stage_id].id, heapAddr) + dMNStageFileInfoArray[stage_id].header_size;
}

// 0x80132BC8
void mnStageRenderStagePreviewBackground(s32 stage_preview_bg_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x57, 0x60, 0x88, 0xFF);
    gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x00, 0x00, 0x00, 0x73);
    gDPFillRectangle(gDisplayListHead[0]++, 43, 130, 152, 211);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    func_ovl0_800CCEAC();
    func_ovl0_800CCF00(stage_preview_bg_gobj);
}

// 0x80132D2C
GObj* mnStageCreateStagePreviewBackground(s32 stage_id) {
    GObj* stage_preview_bg_gobj;
    SObj* stage_preview_bg_sobj;
    s32 x;

    stage_preview_bg_gobj = omMakeGObjSPAfter(0U, NULL, 9U, 0x80000000U);
    omAddGObjRenderProc(stage_preview_bg_gobj, mnStageRenderStagePreviewBackground, 7U, 0x80000000U, -1);

    // draw patterned bg
    for (x = 0x2B; x < 0x9B; x += 0x10)
    {
        stage_preview_bg_sobj = gcAppendSObjWithSprite(stage_preview_bg_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_01E_STAGE_PREVIEW_PATTERNED_BG_IMAGE_OFFSET));
        stage_preview_bg_sobj->pos.x = x;
        stage_preview_bg_sobj->pos.y = 130.0f;

        if (TRUE); // grrrrrr
    }

    // Check if Random
    if (stage_id == 0xDE)
    {
        // If Random, use Random image
        stage_preview_bg_sobj = gcAppendSObjWithSprite(stage_preview_bg_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_01E_RANDOM_STAGE_PREVIEW_BG_IMAGE_OFFSET));
        stage_preview_bg_sobj->pos.x = 40.0f;
        stage_preview_bg_sobj->pos.y = 127.0f;
    }
    else
    {
        // If not Random, check if Training Mode
        if (gMNStageIsTrainingMode == TRUE)
        {
            // If Training Mode, use Smash logo bg
            stage_preview_bg_sobj = gcAppendSObjWithSprite(stage_preview_bg_gobj, GetAddressFromOffset(rldm_get_file_external_force(dMNStageTrainingBackgroundFileNodes[dMNStageTrainingBackgroundIDs[stage_id]].id, (uintptr_t)gMNStageGroundInfo->background_sprite - dMNStageBackgroundFileOffsets[stage_id]), &FILE_01A_TRAINING_BACKGROUND_IMAGE_OFFSET));
        }
        else
        {
            // Use stage bg
            stage_preview_bg_sobj = gcAppendSObjWithSprite(stage_preview_bg_gobj, gMNStageGroundInfo->background_sprite);
        }

        stage_preview_bg_sobj->sprite.attr &= ~SP_FASTCOPY;
        stage_preview_bg_sobj->sprite.scalex = 0.37F;
        stage_preview_bg_sobj->sprite.scaley = 0.37F;
        stage_preview_bg_sobj->pos.x = 40.0f;
        stage_preview_bg_sobj->pos.y = 127.0f;
    }

    return stage_preview_bg_gobj;
}

// 0x80132EF0
void mnStageRenderStagePreviewPrimary(GObj* stage_geo_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gSPSetGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    odRenderDObjTreeForGObj(stage_geo_gobj);
}

// 0x80132F70
void mnStageRenderStagePreviewSecondary(GObj* stage_geo_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gSPSetGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPPipeSync(gDisplayListHead[1]++);
    gSPSetGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
    odRenderDObjTreeDLLinksForGObj(stage_geo_gobj);
}

// 0x8013303C
GObj* mnStageCreateStageGeo(s32 stage_id, gmGroundInfo* stage_info, grCreateDesc* stage_geo, s32 stage_geo_id)
{
    GObj* stage_geo_gobj;
    f32 scale[9] = dMNStagePreviewScale;

    if (stage_geo->dobj_desc == NULL)
    {
        return NULL;
    }

    stage_geo_gobj = omMakeGObjSPAfter(0U, NULL, 5U, 0x80000000U);
    omAddGObjRenderProc(stage_geo_gobj, (stage_info->unk_0x44 & (1 << stage_geo_id)) ? mnStageRenderStagePreviewSecondary : mnStageRenderStagePreviewPrimary, 3U, 0x80000000U, -1);
    func_8000F590(stage_geo_gobj, stage_geo->dobj_desc, NULL, 0x1CU, 0, 0);

    if (stage_geo->aobj != NULL)
    {
        func_8000F8F4(stage_geo_gobj, stage_geo->aobj);
    }

    if ((stage_geo->anim_joint != NULL) || (stage_geo->matanim_joint != NULL))
    {
        func_8000BED8(stage_geo_gobj, stage_geo->anim_joint, stage_geo->matanim_joint, 0.0f);
        func_8000DF34(stage_geo_gobj);
    }

    DObjGetStruct(stage_geo_gobj)->scale.vec.f.x = scale[stage_id];
    DObjGetStruct(stage_geo_gobj)->scale.vec.f.y = scale[stage_id];
    DObjGetStruct(stage_geo_gobj)->scale.vec.f.z = scale[stage_id];

    return stage_geo_gobj;
}

// 0x801331AC
void mnStageCreateStageGeos(s32 stage_id, gmGroundInfo* stage_info, s32 heap_id) {
    DObj* stage_dobj;
    DObj* next_dobj;
    GObj** stage_info_array = (heap_id == 0) ? &gMNStageHeap1StageInfoArray : &gMNStageHeap0StageInfoArray;
    s32 i;

    stage_info_array[0] = mnStageCreateStageGeo(stage_id, stage_info, &stage_info->gr_desc[0], 0);
    stage_info_array[1] = mnStageCreateStageGeo(stage_id, stage_info, &stage_info->gr_desc[1], 1);
    stage_info_array[2] = mnStageCreateStageGeo(stage_id, stage_info, &stage_info->gr_desc[2], 2);
    stage_info_array[3] = mnStageCreateStageGeo(stage_id, stage_info, &stage_info->gr_desc[3], 3);

    if (stage_id == Gr_Kind_Yamabuki)
    {
        DObjGetChild(DObjGetChild(DObjGetStruct(stage_info_array[3])))->flags = DOBJ_RENDERFLAG_HIDDEN;
    }

    if (stage_id == Gr_Kind_Yoster)
    {
        for (next_dobj = stage_dobj = DObjGetStruct(stage_info_array[0]), i = 1; next_dobj != NULL; next_dobj = func_ovl0_800C86E8(next_dobj, stage_dobj), i += 1)
        {
            if ((i == 0xF) || (i == 0x11))
            {
                next_dobj->flags = DOBJ_RENDERFLAG_HIDDEN;
            }
        }
    }
}

// 0x801332DC
void mnStageDestroyStagePreview(s32 heap_id)
{
    s32 i;

    if (heap_id == 0)
    {
        if (gMNStageHeap0BackgroundGobj != NULL)
        {
            omEjectGObj(gMNStageHeap0BackgroundGobj);
            gMNStageHeap0BackgroundGobj = NULL;
        }

        for (i = 0; i < ARRAY_COUNT(gMNStageHeap0StageInfoArray); i++)
        {
            if (gMNStageHeap0StageInfoArray[i] != NULL)
            {
                omEjectGObj(gMNStageHeap0StageInfoArray[i]);
                gMNStageHeap0StageInfoArray[i] = NULL;
            }
        }
    }
    else
    {
        if (gMNStageHeap1BackgroundGobj != NULL)
        {
            omEjectGObj(gMNStageHeap1BackgroundGobj);
            gMNStageHeap1BackgroundGobj = NULL;
        }

        for (i = 0; i < ARRAY_COUNT(gMNStageHeap1StageInfoArray); i++)
        {
            if (gMNStageHeap1StageInfoArray[i] != NULL)
            {
                omEjectGObj(gMNStageHeap1StageInfoArray[i]);
                gMNStageHeap1StageInfoArray[i] = NULL;
            }
        }
    }
}

// 0x801333B4
void mnStageCreateStagePreview(s32 stage_id)
{
    if (stage_id != 0xDE)
    {
        if (gMNStageCurrentHeap == 0)
        {
            mnStageLoadStageFile(stage_id, gMNStageModelHeap1Ptr);
        }
        else
        {
            mnStageLoadStageFile(stage_id, gMNStageModelHeap0Ptr);
        }
    }

    if (gMNStageCurrentHeap == 0)
    {
        gMNStageHeap1BackgroundGobj = mnStageCreateStagePreviewBackground(stage_id);
    }
    else
    {
        gMNStageHeap0BackgroundGobj = mnStageCreateStagePreviewBackground(stage_id);
    }

    if (stage_id != 0xDE)
    {
        mnStageCreateStageGeos(stage_id, gMNStageGroundInfo, gMNStageCurrentHeap);
        mnStagePositionStagePreviewCamera(gMNStagePreviewCam, stage_id);
    }

    mnStageDestroyStagePreview(gMNStageCurrentHeap);

    gMNStageCurrentHeap = (gMNStageCurrentHeap == 0) ? 1 : 0;
}

// 0x801334AC
void mnStageCreateBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x1, NULL, 0x1, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x00000001, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013354C
void mnStageCreateWoodenCircleViewport()
{
    GObj *camera_gobj = func_8000B93C(0x1, NULL, 0x1, 0x80000000U, func_ovl0_800CD2CC, 0x28, 0x00000040, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801335EC
void mnStageCreateStagePreviewBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x1, NULL, 0x1, 0x80000000U, func_ovl0_800CD2CC, 0x46, 0x00000080, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013368C
void mnStageCreateStageSelectGfxViewport()
{
    GObj *camera_gobj = func_8000B93C(0x1, NULL, 0x1, 0x80000000U, func_ovl0_800CD2CC, 0x1E, 0x00000010, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013372C
void mnStageCreateStageImagesViewport()
{
    GObj *camera_gobj = func_8000B93C(0x1, NULL, 0x1, 0x80000000U, func_ovl0_800CD2CC, 0x3C, 0x00000002, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801337CC
void mnStageCreateStageNameAndLogoViewport()
{
    GObj *camera_gobj = func_8000B93C(0x1, NULL, 0x1, 0x80000000U, func_ovl0_800CD2CC, 0x14, 0x00000004, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013386C
void mnStageCreateCursorViewport()
{
    GObj *camera_gobj = func_8000B93C(0x1, NULL, 0x1, 0x80000000U, func_ovl0_800CD2CC, 0x32, 0x00000020, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013390C
void mnStagePositionStagePreviewCamera(Camera* stage_preview_cam, s32 stage_id) {
    Vec3f positions[9] = dMNStagePreviewTranslations;

    if (stage_id == 0xDE)
    {
        stage_id = 0;
    }

    stage_preview_cam->vec.eye.x = -3000.0F;
    stage_preview_cam->vec.eye.y = 3000.0F;
    stage_preview_cam->vec.eye.z = 9000.0F;
    stage_preview_cam->vec.up.x = 0.0f;
    stage_preview_cam->vec.up.y = 1.0f;
    stage_preview_cam->vec.up.z = 0.0f;
    stage_preview_cam->vec.at.x = positions[stage_id].x;
    stage_preview_cam->vec.at.y = positions[stage_id].y;
    stage_preview_cam->vec.at.z = positions[stage_id].z;
}

// 0x801339C4
void mnStageAdjustStagePreviewY(GObj* stage_preview_cam_gobj) {
    Camera* cam = CameraGetStruct(stage_preview_cam_gobj);
    f32 y = cam->vec.at.y;
    f32 deg = 0.0F;

    while (TRUE)
    {
        cam->vec.at.y = __sinf(F_DEG_TO_RAD(deg)) * 40.0F + y;

        deg = (deg + 2.0F > 360.0F) ? deg + 2.0F - 360.0F : deg + 2.0F;

        gsStopCurrentProcess(1);
    }
}

// 0x80133A88
void mnStageCreateStagePreviewViewport()
{
    int foo;
    GObj* stage_preview_cam_gobj = func_8000B93C(1U, NULL, 1, 0x80000000U, &func_80017DBC, 0x41, 0x00000008, -1, 1, 0, 0, 1, 0);
    Camera* cam = CameraGetStruct(stage_preview_cam_gobj);

    gMNStagePreviewCam = cam;

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->projection.persp.far = 16384.0F;

    mnStagePositionStagePreviewCamera(cam, mnStageGetStageID(gMNStageCursorSlotId));

    omAddGObjCommonProc(stage_preview_cam_gobj, mnStageAdjustStagePreviewY, 0, 1);
}

// 0x80133B78
void mnStageSaveSceneData()
{
    s32 unused[9] = D_ovl30_801348E8;
    s32 stage_id;

    if (gMNStageCursorSlotId == 9)
    {
        do
        {
            stage_id = lbRandom_GetTimeByteRange(9);
        } while (mnStageGetIsLocked(stage_id) != FALSE || stage_id == gSceneData.gr_kind);

        gSceneData.gr_kind = stage_id;
    }
    else
    {
        gSceneData.gr_kind = mnStageGetStageID(gMNStageCursorSlotId);
    }

    if (gMNStageIsTrainingMode == FALSE)
    {
        gSceneData.sss_battle_gr_kind = mnStageGetStageID(gMNStageCursorSlotId);
    }

    if (gMNStageIsTrainingMode == TRUE)
    {
        gSceneData.sss_training_gr_kind = mnStageGetStageID(gMNStageCursorSlotId);
    }
}

// 0x80133C6C
void mnStageLoadSceneData()
{
    s32 i;

    gMNStageNameLogoGobj = NULL;
    gMNStageHeap0BackgroundGobj = NULL;
    gMNStageHeap1BackgroundGobj = NULL;

    for (i = 0; i < ARRAY_COUNT(gMNStageHeap0StageInfoArray); i++)
    {
        gMNStageHeap0StageInfoArray[i] = NULL;
        gMNStageHeap1StageInfoArray[i] = NULL;
    }

    switch (gSceneData.scene_previous)
    {
        case 0x12:
            gMNStageIsTrainingMode = TRUE;
            gMNStageCursorSlotId = mnStageGetSlotID(gSceneData.sss_training_gr_kind);
            break;
        case scMajor_Kind_VSChrSel:
            gMNStageIsTrainingMode = FALSE;
            gMNStageCursorSlotId = mnStageGetSlotID(gSceneData.sss_battle_gr_kind);
            break;
    }

    gMNStageUnlockedMask = gSaveData.unlock_mask;
    gMNStageCurrentHeap = 1;
    gMNStageFramesElapsed = 0;
    gMNStageMaxFramesElapsed = gMNStageFramesElapsed + I_MIN_TO_FRAMES(5);
}

// 0x80133D60
void mnStageSaveSceneData2()
{
    mnStageSaveSceneData();
}

// 0x80133D80
void mnStageHandleButtonPresses(s32 arg0)
{
    s32 unused;
    s32 stick_input;
    s32 button_input;

    gMNStageFramesElapsed += 1;

    if (gMNStageFramesElapsed >= 10)
    {
        if (gMNStageFramesElapsed == gMNStageMaxFramesElapsed)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = scMajor_Kind_Title;

            mnStageSaveSceneData2();
            func_80005C74();
            return;
        }

        if (func_ovl1_80390B7C() == FALSE)
        {
            gMNStageMaxFramesElapsed = gMNStageFramesElapsed + I_MIN_TO_FRAMES(5);
        }

        if (gMNStageScrollBuffer != 0)
        {
            gMNStageScrollBuffer -= 1;
        }

        if (
            (func_ovl1_80390A04(-0x14, 0x14) != FALSE)
            && (func_ovl1_80390AC0(-0x14, 0x14) != FALSE)
            && (func_ovl1_80390804(U_JPAD | R_JPAD | R_TRIG | U_CBUTTONS | R_CBUTTONS) == FALSE)
            && (func_ovl1_80390804(D_JPAD | L_JPAD | L_TRIG | D_CBUTTONS | L_CBUTTONS) == FALSE)
        )
        {
            gMNStageScrollBuffer = 0;
        }

        if (func_ovl1_8039076C(A_BUTTON | START_BUTTON) != FALSE)
        {
            mnStageSaveSceneData2();
            func_800269C0(0x9FU);

            if (gMNStageIsTrainingMode == TRUE)
            {
                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = scMajor_Kind_1PTrainingMode;
            }
            else
            {
                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = scMajor_Kind_VSBattle;
            }

            func_80005C74();
        }

        if (func_ovl1_8039076C(B_BUTTON) != FALSE)
        {
            mnStageSaveSceneData2();

            if (gMNStageIsTrainingMode == TRUE)
            {
                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = scMajor_Kind_TrainingChrSel;
            }
            else
            {
                gSceneData.scene_previous = gSceneData.scene_current;
                gSceneData.scene_current = scMajor_Kind_VSChrSel;
            }

            func_80005C74();
        }

        if (gMNStageScrollBuffer == 0)
        {
            button_input = func_ovl1_80390804(U_JPAD | U_CBUTTONS);

            if ((button_input != FALSE) || (stick_input = func_ovl1_80390950(0x14, 1), (stick_input != 0)))
            {
                if ((gMNStageCursorSlotId >= 5) && (mnStageGetIsLocked(mnStageGetStageID(gMNStageCursorSlotId - 5)) == FALSE))
                {
                    func_800269C0(0xA4U);

                    gMNStageCursorSlotId -= 5;

                    mnStageCreateStageNameAndLogo(gMNStageCursorSlotId);
                    mnStagePositionCursor(gMNStageCursorGobj, gMNStageCursorSlotId);
                    mnStageCreateStagePreview(mnStageGetStageID(gMNStageCursorSlotId));
                }

                if (button_input != FALSE)
                {
                    gMNStageScrollBuffer = 12;
                }
                else
                {
                    gMNStageScrollBuffer = (0xA0 - stick_input) / 7;
                }

                return;
            }

            button_input = func_ovl1_80390804(D_JPAD | D_CBUTTONS);

            if ((button_input != FALSE) || (stick_input = func_ovl1_80390950(-0x14, 0), (stick_input != 0)))
            {
                if ((gMNStageCursorSlotId < 5) && (mnStageGetIsLocked(mnStageGetStageID(gMNStageCursorSlotId + 5)) == FALSE))
                {
                    func_800269C0(0xA4U);

                    gMNStageCursorSlotId += 5;

                    mnStageCreateStageNameAndLogo(gMNStageCursorSlotId);
                    mnStagePositionCursor(gMNStageCursorGobj, gMNStageCursorSlotId);
                    mnStageCreateStagePreview(mnStageGetStageID(gMNStageCursorSlotId));
                }

                if (button_input != FALSE)
                {
                    gMNStageScrollBuffer = 12;
                }
                else
                {
                    gMNStageScrollBuffer = (stick_input + 0xA0) / 7;
                }
                return;
            }

            button_input = func_ovl1_80390804(L_JPAD | L_TRIG | L_CBUTTONS);

            if ((button_input != FALSE) || (stick_input = func_ovl1_8039089C(-0x14, 0), (stick_input != FALSE)))
            {
                switch (gMNStageCursorSlotId)
                {
                    case 0:
                        gMNStageCursorSlotId = (mnStageGetIsLocked(mnStageGetStageID(4)) != FALSE) ? 3 : 4;
                        break;
                    case 5:
                        gMNStageCursorSlotId = 9;
                        break;
                    default:
                        gMNStageCursorSlotId -= 1;
                }

                func_800269C0(0xA4U);
                mnStageCreateStageNameAndLogo(gMNStageCursorSlotId);
                mnStagePositionCursor(gMNStageCursorGobj, gMNStageCursorSlotId);
                mnStageCreateStagePreview(mnStageGetStageID(gMNStageCursorSlotId));

                if (button_input != FALSE)
                {
                    gMNStageScrollBuffer = 12;
                }
                else
                {
                    gMNStageScrollBuffer = (stick_input + 0xA0) / 7;
                }

                return;
            }

            button_input = func_ovl1_80390804(R_JPAD | R_TRIG | R_CBUTTONS);

            if ((button_input != FALSE) || (stick_input = func_ovl1_8039089C(0x14, 1), (stick_input != FALSE)))
            {
                switch (gMNStageCursorSlotId)
                {
                    case 3:
                        gMNStageCursorSlotId = (mnStageGetIsLocked(mnStageGetStageID(4)) != FALSE) ? 0 : 4;
                        break;
                    case 4:
                        gMNStageCursorSlotId = 0;
                        break;
                    case 9:
                        gMNStageCursorSlotId = 5;
                        break;
                    default:
                        gMNStageCursorSlotId += 1;
                }

                func_800269C0(0xA4U);
                mnStageCreateStageNameAndLogo(gMNStageCursorSlotId);
                mnStagePositionCursor(gMNStageCursorGobj, gMNStageCursorSlotId);
                mnStageCreateStagePreview(mnStageGetStageID(gMNStageCursorSlotId));

                if (button_input != 0)
                {
                    gMNStageScrollBuffer = 12;
                }
                else
                {
                    gMNStageScrollBuffer = (0xA0 - stick_input) / 7;
                }
            }
        }
    }
}

// 0X80134304
void mnStageInitSSS()
{
    s32 foo;
    s32 bar;
    rdSetup rldmSetup;
    s32 baz;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl30_80134C30;
    rldmSetup.statusBufSize = 0x1E;
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl30_80134D20;
    rldmSetup.forceBufSize = 0x1E;
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl30_801344D0, ARRAY_COUNT(D_ovl30_801344D0), gMNStageFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl30_801344D0, ARRAY_COUNT(D_ovl30_801344D0)), 0x10));

    mnStageAllocateStageModelHeaps();

    omMakeGObjSPAfter(0U, mnStageHandleButtonPresses, 0U, 0x80000000U);
    func_8000B9FC(1, 0x80000000U, 0x64, 1, 0);
    mnStageLoadSceneData();
    mnStageCreateBackgroundViewport();
    mnStageCreateStageSelectGfxViewport();
    mnStageCreateStageImagesViewport();
    mnStageCreateStageNameAndLogoViewport();
    mnStageCreateCursorViewport();
    mnStageCreateStagePreviewViewport();
    mnStageCreateWoodenCircleViewport();
    mnStageCreateStagePreviewBackgroundViewport();
    mnStageCreateBackground();
    mnStageCreateWoodenCircle();
    mnStageCreateStageSelectGfx();
    mnStageCreateStageImages();
    mnStageCreateStageNameAndLogo(gMNStageCursorSlotId);
    mnStageCreateCursor();
    mnStageCreateStagePreview(mnStageGetStageID(gMNStageCursorSlotId));
}

// stage_select_entry
void stage_select_entry()
{
    D_ovl30_8013490C.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl30_8013490C);
    D_ovl30_80134928.arena_size = (u32) ((uintptr_t)&lOverlay30ArenaHi - (uintptr_t)&lOverlay30ArenaLo);
    func_800A2698(&D_ovl30_80134928);
}