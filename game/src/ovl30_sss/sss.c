#include <sys/develop.h>
// #include <ft/ftdef.h>
// #include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <sss.h>

// ovl30 stuff
extern mnStageFileInfo dMnStageFileInfoArray[9]; // 801344E4[9];

extern intptr_t dMnStageBackgroundFileOffsets[9];
extern rdFileNode dMnStageTrainingBackgroundFileNodes[3];
extern s32 dMnStageTrainingBackgroundIDs[10];

extern Lights1 D_ovl30_80134590 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14); // 20202000 20202000 FFFFFF00 FFFFFF00 14141400 00000000
extern Gfx D_ovl30_801345A8[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(D_ovl30_80134590),
    gsSPEndDisplayList()
};

extern intptr_t dMnStageChrOffsets[29]; // 0x801345D0[29]

extern s32 dMnStageIDOrder[10]; // 0x80134644[10];
extern intptr_t dMnStageImageOffsets[10]; // 0x8013466C[10]
extern Vec2f dMnStageNamePositions[9]; // 0x80134694[9];
extern intptr_t dMnStageNameImageOffsets[9]; // 0x801346DC[9];
extern Vec2f dMnStageLogoPositions[10]; // 0x801347E4[10]
extern Vec2f dMnStageLogoOffsets[9]; // 0x80134834[9]
extern f32 dMnStagePreviewScale[9]; // 0x80134858[9]

extern s32 gMnStageCursorSlotId; // 0x80134BD8
extern GObj* gMnStageCursorGobj; // 0x80134BDC
extern GObj* gMnStageNameLogoGobj; // 0x80134BE0

extern gmGroundInfo* gMnStageGroundInfo; // 0x80134C10
extern sb32 gMnStageIsTrainingMode; // 0x80134C18
extern u8 gMnStageUnlockedMask; // 0x80134C1C; // flag indicating which bonus features are available

extern uintptr_t gMnStageModelHeap1Ptr; // 80134E24;
extern uintptr_t gMnStageModelHeap2Ptr; // 80134E28;

// extern RldmFileId D_ovl29_80136F50[11];

// extern scUnkDataBounds D_ovl29_80137530;
// extern scRuntimeInfo D_ovl29_8013754C;

// extern rdFileNode D_ovl29_80137A00;
// extern u32 D_ovl29_80137A38[240];
// extern uintptr_t D_NF_001AC870;
// extern uintptr_t D_NF_00000854;

extern s32 gMnStageFilesArray[5]; // 0x80134E10[5]
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

    for (i = 0; i < ARRAY_COUNT(dMnStageFileInfoArray); i++)
    {
        size = rdManagerGetFileSize(dMnStageFileInfoArray[i].id);

        if (max < size)
        {
            max = size;
        }
    }

    gMnStageModelHeap1Ptr = hlMemoryAlloc(max, 0x10);
    gMnStageModelHeap2Ptr = hlMemoryAlloc(max, 0x10);
}

// 0x80131B88
void mnStageSetLighting(Gfx** display_list) {
    gSPDisplayList(display_list[0]++, &D_ovl30_801345A8);
}

// func_ovl30_80131BAC
sb32 func_ovl30_80131BAC(s32 stage_id)
{
    if (stage_id == Gr_Kind_Inishie)
    {
        if (gMnStageUnlockedMask & GMSAVE_UNLOCK_MASK_INISHIE)
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
    intptr_t chrOffsets[29] = dMnStageChrOffsets;
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
            chr_sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMnStageFilesArray[3], chrOffsets[mnStageGetChrIndex(str[i])]));
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

    background_gobj = omMakeGObjCommon(0U, NULL, 0x2U, 0x80000000U);
    omAddGObjRenderProc(background_gobj, func_ovl0_800CCF00, 0x0U, 0x80000000U, -1);
    background_sobj = gcAppendSObjWithSprite(background_gobj, GetAddressFromOffset(gMnStageFilesArray[2], &FILE_015_BACKGROUND_IMAGE_OFFSET));
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

    wooden_circle_gobj = omMakeGObjCommon(0U, NULL, 8U, 0x80000000U);
    omAddGObjRenderProc(wooden_circle_gobj, func_ovl0_800CCF00, 6U, 0x80000000U, -1);

    wooden_circle_sobj = gcAppendSObjWithSprite(wooden_circle_gobj, GetAddressFromOffset(gMnStageFilesArray[2], &FILE_01E_WOODEN_CIRCLE_IMAGE_OFFSET));
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

    stage_select_gobj = omMakeGObjCommon(0U, NULL, 6U, 0x80000000U);
    omAddGObjRenderProc(stage_select_gobj, mnStageRenderStageSelectGfx, 4U, 0x80000000U, -1);

    // Stage Select texture
    stage_select_sobj = gcAppendSObjWithSprite(stage_select_gobj, GetAddressFromOffset(gMnStageFilesArray[2], &FILE_01E_STAGE_SELECT_IMAGE_OFFSET));
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
    yellow_oval_left_sobj = gcAppendSObjWithSprite(stage_select_gobj, GetAddressFromOffset(gMnStageFilesArray[2], &FILE_01E_YELLOW_OVAL_LEFT_IMAGE_OFFSET));
    yellow_oval_left_sobj->sprite.attr &= ~SP_FASTCOPY;
    yellow_oval_left_sobj->sprite.attr |= SP_TRANSPARENT;
    yellow_oval_left_sobj->pos.x = 174.0f;
    yellow_oval_left_sobj->pos.y = 191.0f;

    // Yellow oval middle section
    for (x = 0xBA; x < 0x106; x += 4)
    {
        yellow_oval_center_sobj = gcAppendSObjWithSprite(stage_select_gobj, GetAddressFromOffset(gMnStageFilesArray[2], &FILE_01E_YELLOW_OVAL_CENTER_IMAGE_OFFSET));
        yellow_oval_center_sobj->pos.x = x;
        yellow_oval_center_sobj->pos.y = 191.0f;
    }

    // Yellow oval right edge
    yellow_oval_right_sobj = gcAppendSObjWithSprite(stage_select_gobj, GetAddressFromOffset(gMnStageFilesArray[2], &FILE_01E_YELLOW_OVAL_RIGHT_IMAGE_OFFSET));
    yellow_oval_right_sobj->sprite.attr &= ~SP_FASTCOPY;
    yellow_oval_right_sobj->sprite.attr |= SP_TRANSPARENT;
    yellow_oval_right_sobj->pos.x = 262.0f;
    yellow_oval_right_sobj->pos.y = 191.0f;
}

// 0x80132430
s32 mnStageGetStageID(s32 slot_id)
{
    s32 stage_ids[10] = dMnStageIDOrder;

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
    intptr_t offsets[10] = dMnStageImageOffsets;
    s32 x;
    s32 i;

    stage_image_gobj = omMakeGObjCommon(0U, NULL, 3U, 0x80000000U);
    omAddGObjRenderProc(stage_image_gobj, func_ovl0_800CCF00, 1U, 0x80000000U, -1);

    for (i = 0; i < ARRAY_COUNT(offsets); i++)
    {
        if (func_ovl30_80131BAC(mnStageGetStageID(i)) == FALSE)
        {
            x = i * 50;

            if (i == 9)
            {
                stage_image_sobj = gcAppendSObjWithSprite(stage_image_gobj, GetAddressFromOffset(gMnStageFilesArray[2], &FILE_01E_RANDOM_IMAGE_OFFSET));
            }
            else
            {
                stage_image_sobj = gcAppendSObjWithSprite(stage_image_gobj, GetAddressFromOffset(gMnStageFilesArray[2], offsets[mnStageGetStageID(i)]));
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
    Vec2f positions[9] = dMnStageNamePositions;

    stage_name_sobj->pos.x = 183.0f;
    stage_name_sobj->pos.y = 196.0f;
}

// 0x80132738
void mnStageCreateStageName(GObj* name_logo_gobj, s32 stage_id)
{
    SObj* stage_name_sobj;
    intptr_t offsets[9] = dMnStageNameImageOffsets;

    stage_name_sobj = gcAppendSObjWithSprite(name_logo_gobj, GetAddressFromOffset(gMnStageFilesArray[2], offsets[stage_id]));
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
    Vec2f positions[10] = dMnStageLogoPositions;

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
    intptr_t offsets[9] = dMnStageLogoOffsets;

    if (stage_id == 0xDE)
    {
        name_logo_sobj = gcAppendSObjWithSprite(name_logo_gobj, GetAddressFromOffset(gMnStageFilesArray[2], &FILE_01E_SMASH_LOGO_IMAGE_OFFSET));
        name_logo_sobj->sprite.attr &= ~SP_FASTCOPY;
        name_logo_sobj->sprite.attr |= SP_TRANSPARENT;
        name_logo_sobj->sprite.red = 0x5C;
        name_logo_sobj->sprite.green = 0x22;
        name_logo_sobj->sprite.blue = 0;
    }
    else
    {
        name_logo_sobj = gcAppendSObjWithSprite(name_logo_gobj, GetAddressFromOffset(gMnStageFilesArray[0], offsets[stage_id]));
        name_logo_sobj->sprite.attr &= ~SP_FASTCOPY;
        name_logo_sobj->sprite.attr |= SP_TRANSPARENT;
        name_logo_sobj->sprite.red = 0x5C;
        name_logo_sobj->sprite.green = 0x22;
        name_logo_sobj->sprite.blue = 0;
    }

    mnStagePositionLogo(name_logo_gobj, stage_id);
}

// func_ovl30_801329AC
void func_ovl30_801329AC(s32 slot_id)
{
    GObj* name_logo_gobj;

    if (gMnStageNameLogoGobj != NULL)
    {
        omEjectGObjCommon(gMnStageNameLogoGobj);
    }

    name_logo_gobj = omMakeGObjCommon(0U, NULL, 4U, 0x80000000U);
    gMnStageNameLogoGobj = name_logo_gobj;
    omAddGObjRenderProc(name_logo_gobj, func_ovl0_800CCF00, 2U, 0x80000000U, -1);
    mnStageCreateLogo(gMnStageNameLogoGobj, mnStageGetStageID(slot_id));

    if (slot_id != 9)
    {
        mnStageCreateStageName(gMnStageNameLogoGobj, mnStageGetStageID(slot_id));
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

    gMnStageCursorGobj = cursor_gobj = omMakeGObjCommon(0U, NULL, 7U, 0x80000000U);
    omAddGObjRenderProc(cursor_gobj, func_ovl0_800CCF00, 5U, 0x80000000U, -1);

    cursor_sobj = gcAppendSObjWithSprite(cursor_gobj, GetAddressFromOffset(gMnStageFilesArray[2], &FILE_01E_CURSOR_IMAGE_OFFSET));
    cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
    cursor_sobj->sprite.attr |= SP_TRANSPARENT;
    cursor_sobj->sprite.red = 0xFF;
    cursor_sobj->sprite.green = 0;
    cursor_sobj->sprite.blue = 0;

    mnStagePositionCursor(cursor_gobj, gMnStageCursorSlotId);
}

// 0x80132B84
void mnStageLoadStageFile(s32 stage_id, u8* heapAddr)
{
    gMnStageGroundInfo = rldm_get_file_external_force(dMnStageFileInfoArray[stage_id].id, heapAddr) + dMnStageFileInfoArray[stage_id].header_size;
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

    stage_preview_bg_gobj = omMakeGObjCommon(0U, NULL, 9U, 0x80000000U);
    omAddGObjRenderProc(stage_preview_bg_gobj, mnStageRenderStagePreviewBackground, 7U, 0x80000000U, -1);

    // draw patterned bg
    for (x = 0x2B; x < 0x9B; x += 0x10)
    {
        stage_preview_bg_sobj = gcAppendSObjWithSprite(stage_preview_bg_gobj, GetAddressFromOffset(gMnStageFilesArray[2], &FILE_01E_STAGE_PREVIEW_PATTERNED_BG_IMAGE_OFFSET));
        stage_preview_bg_sobj->pos.x = x;
        stage_preview_bg_sobj->pos.y = 130.0f;

        if (TRUE); // grrrrrr
    }

    // Check if Random
    if (stage_id == 0xDE)
    {
        // If Random, use Random image
        stage_preview_bg_sobj = gcAppendSObjWithSprite(stage_preview_bg_gobj, GetAddressFromOffset(gMnStageFilesArray[2], &FILE_01E_RANDOM_STAGE_PREVIEW_BG_IMAGE_OFFSET));
        stage_preview_bg_sobj->pos.x = 40.0f;
        stage_preview_bg_sobj->pos.y = 127.0f;
    }
    else
    {
        // If not Random, check if Training Mode
        if (gMnStageIsTrainingMode == TRUE)
        {
            // If Training Mode, use Smash logo bg
            stage_preview_bg_sobj = gcAppendSObjWithSprite(stage_preview_bg_gobj, GetAddressFromOffset(rldm_get_file_external_force(dMnStageTrainingBackgroundFileNodes[dMnStageTrainingBackgroundIDs[stage_id]].id, (uintptr_t)gMnStageGroundInfo->background_sprite - dMnStageBackgroundFileOffsets[stage_id]), &FILE_01A_TRAINING_BACKGROUND_IMAGE_OFFSET));
        }
        else
        {
            // Use stage bg
            stage_preview_bg_sobj = gcAppendSObjWithSprite(stage_preview_bg_gobj, gMnStageGroundInfo->background_sprite);
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
    func_80014768(stage_geo_gobj);
}

// 0x8013303C
GObj* mnStageCreateStageGeo(s32 stage_id, gmGroundInfo* stage_info, grCreateDesc* stage_geo, s32 stage_geo_id)
{
    GObj* stage_geo_gobj;
    f32 scale[9] = dMnStagePreviewScale;

    if (stage_geo->dobj_desc == NULL)
    {
        return NULL;
    }

    stage_geo_gobj = omMakeGObjCommon(0U, NULL, 5U, 0x80000000U);
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

// func_ovl30_801331AC

// func_ovl30_801332DC

// func_ovl30_801333B4

// func_ovl30_801334AC

// func_ovl30_8013354C

// func_ovl30_801335EC

// func_ovl30_8013368C

// func_ovl30_8013372C

// func_ovl30_801337CC

// func_ovl30_8013386C

// func_ovl30_8013390C

// func_ovl30_801339C4

// func_ovl30_80133A88

// func_ovl30_80133B78

// func_ovl30_80133C6C

// func_ovl30_80133D60

// func_ovl30_80133D80

// func_ovl30_80134304

// stage_select_entry
