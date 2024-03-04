#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>
#include <css-training.h>

// ovl1 stuff
extern f32 menu_zoom[12]; // D_ovl1_80390D90

// ovl28 stuff
extern RldmFileId D_ovl28_80137F60[8];

extern f32 dMnTrainingPortraitPositionsX[12]; // 0x80137FB0[12];
extern f32 dMnTrainingPortraitVelocities[12]; // 0x80137FE0[12];
extern Vec2f dMnTrainingPortraitPositionsXY[12]; // 0x80138010[12];
extern s32 dMnTrainingFtKindOrder[12]; // 0x80138094[12];
extern s32 dMnTrainingPortraitOrder[12]; // 0x801380C4[12];
extern intptr_t dMnTrainingLockedPortraitOffsets[12]; // 0x801380F4[12];
extern intptr_t dMnTrainingPortraitOffsets[12]; // 0x80138124[12];
extern Vec2f dMnTrainingUnusedPositions[12]; // 0x80138154[12];
extern intptr_t dMnTrainingLogoOffsets[12]; // 0x801381B4[12];
extern intptr_t dMnTrainingNameOffsets[12]; // 0x801381E4[12];
extern intptr_t dMnTrainingPanelLUTOffsets[4]; // 0x80138214[4];
extern intptr_t dMnTrainingTypeOffsets[4]; // 0x80138224[4];
extern f32 dMnTrainingTypeOffsetsX[4]; // 0x80138234[4];
extern intptr_t dMnTrainingTypeOffsetsDuplicate[4]; // 0x80138244[4];
extern f32 dMnTrainingTypeOffsetsXDuplicate[4]; // 0x80138254[4];

extern GfxColorPair dMnTrainingCursorTypeColors[4]; // 0x801382B4[4]; // cursor type texture colors
extern intptr_t dMnTrainingCursorTypeOffsets[4]; // 0x801382CC[4]; // cursor type texture offsets
extern intptr_t dMnTrainingCursorOffsets[4]; // 0x801382DC[3]; // cursor offsets
extern Vec2i dMnTrainingCursorTypePositions[4]; // 0x801382E8[3]; // x,y offset pairs for cursor type texture
extern s32 dMnTrainingPanelColorIndexesUnused[4]; // 0x80138300[4]; // panel color indexes
extern u16 dMnTrainingAnnouncerNames[12]; // 0x80138310[12];

extern s32 dMnTrainingTokenPickupDisplayOrders[4]; // 0x80138350[4];
extern s32 dMnTrainingTokenPlaceHeldDisplayOrders[4]; // 0x80138360[4]; // display orders for cursors holding tokens on token placement
extern s32 dMnTrainingTokenPlaceUnheldDisplayOrders[4]; // 0x80138370[4]; // display orders for cursors not holding tokens on token placement
extern Vec2i dMnTrainingCursorTypePositions2[3]; // 0x80138380[3]; // x,y offset pairs for cursor type texture
extern intptr_t dMnTrainingTokenOffsets[5]; // 0x80138398[5]; // token offsets
extern intptr_t dMnTrainingCursorTypeOffsetsUnused[4]; // 0x801383AC[4]; // cursor type texture offsets
extern s32 dMnTrainingCursorStartingDisplayOrders[4]; // 0x801383BC[4]; // display orders for cursors on initial load
extern intptr_t dMnTrainingTokenOffsetsNoCPU[4]; // 0x801383CC; // token offsets not including cpu
extern s32 dMnTrainingTokenStartingDisplayOrders[4]; // 0x801383DC; // display orders for tokens on initial load
extern s32 dMnTrainingTokenHoldingDisplayOrders[4]; // 0x801383EC; // display orders for tokens while being held initially?
extern f32 dMnTrainingWhiteCircleSizes[12]; // 0x801383FC[12]

extern scUnkDataBounds D_ovl28_8013842C;
extern scRuntimeInfo D_ovl28_80138448;

extern mnCharPanelTraining gMnTrainingPanels[2]; // 0x80138558[2];

extern s32 gMnTrainingStartDelayTimer; // 0x80138860;
extern sb32 gMnTrainingIsStartTriggered; // 0x80138864;
extern sb32 gMnTrainingDefaultCostumeOnly; // 0x80138868

extern GObj* gMnTrainingTitleGObj; // 0x80138870; // title gobj
extern s32 gMnTrainingTokenShinePulseColor; // 0x80138874
extern sb32 gMnTrainingIsTokenShineIncreasing; // 0x80138878;
extern u16 gMnTrainingCharacterUnlockedMask; // 0x8013887C;

extern s32 gMnTrainingPressStartFlashTimer; // 0x80138884

extern s32 gMnTrainingFramesElapsed; // 0x8013888C; // frames elapsed on CSS
extern s32 gMnTrainingMaxFramesElapsed; // 0x80138890;
extern s32 gMnTrainingHumanPanelPort; // 0x80138894;
extern s32 gMnTrainingCPUPanelPort; // 0x80138898;

extern RldmFileNode D_ovl28_801388A0;
extern u32 D_ovl28_801388D8[240];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern s32 gMnTrainingFilesArray[8]; // 0x80138C98[8]
// gMnTrainingFilesArray[0] // 0x80138C98; // file 0x011 pointer
// gMnTrainingFilesArray[1] // 0x80138C9C; // file 0x017 pointer
// gMnTrainingFilesArray[2] // 0x80138CA0; // file 0x000 pointer
// gMnTrainingFilesArray[3] // 0x80138CA4; // file 0x014 pointer
// gMnTrainingFilesArray[4] // 0x80138CA8; // file 0x015 pointer
// gMnTrainingFilesArray[5] // 0x80138CAC; // file 0x012 pointer
// gMnTrainingFilesArray[6] // 0x80138CB0; // file 0x013 pointer
// gMnTrainingFilesArray[7] // 0x80138CB4; // file 0x016 pointer

extern intptr_t FILE_000_COLON_IMAGE_OFFSET = 0xDCF0; // file 0x000 image offset for colon

extern intptr_t FILE_011_TYPE_CP_IMAGE_OFFSET = 0xFF8; // file 0x011 image offset for CP type image
extern intptr_t FILE_011_HANDICAP_IMAGE_OFFSET = 0x1108; // file 0x011 image offset for Handicap image
extern intptr_t FILE_011_CPU_LEVEL_IMAGE_OFFSET = 0x1218; // file 0x011 image offset for CPU Level image
extern intptr_t FILE_011_START_IMAGE_OFFSET = 0x1378; // Press Start's "Start" texture
extern intptr_t FILE_011_PRESS_IMAGE_OFFSET = 0x14D8; // Press Start's "Press" texture
extern intptr_t FILE_011_CURSOR_POINTER_IMAGE_OFFSET = 0x76E8; // file 0x011 image offset for pointer cursor
extern intptr_t FILE_011_ARROW_L_IMAGE_OFFSET = 0xECE8; // file 0x011 image offset for left arrow
extern intptr_t FILE_011_ARROW_R_IMAGE_OFFSET = 0xEDC8; // file 0x011 image offset for right arrow
extern intptr_t FILE_011_READY_TO_FIGHT_IMAGE_OFFSET = 0xF448; // Ready to Fight banner text
extern intptr_t FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET = 0xF530; // Ready to Fight banner bg
extern intptr_t FILE_011_BACK_IMAGE_OFFSET = 0x115C8; // file 0x011 image offset for Back button

extern intptr_t FILE_012_TRAINING_MODE_IMAGE_OFFSET = 0x758; // file 0x012 image offset for Training Mode title image

extern intptr_t FILE_013_XBOX_IMAGE_OFFSET; //D_NF_000002B8;
extern intptr_t FILE_013_WHITE_SQUARE = 0x6F0; // white square
extern intptr_t FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET = 0xF68; // file 0x013 image offset for portrait question mark image
extern intptr_t FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET = 0x24D0; // file 0x013 image offset for portrait bg (fire) image

extern intptr_t FILE_015_BACKGROUND_IMAGE_OFFSET = 0x440; // file 0x015 image offset for background tile

extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_1 = 0x408; // AObj? for white circle
extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_2 = 0x568; // DObjDesc for white circle

extern intptr_t FILE_017_PANEL_IMAGE_OFFSET = 0x32A8;
extern intptr_t FILE_017_CPU_PANEL_LUT_OFFSET = 0x3328; // D_NF_00003238; // CPU panel LUT

// 0x80131B00
void mnTrainingSetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B58
void mnTrainingSelectCharWithToken(s32 port_id, s32 select_button)
{
    s32 held_port_id = gMnTrainingPanels[port_id].held_port_id, costume_id;

    if (select_button != mnSelect_A)
    {
        costume_id = ftCostume_GetIndexFFA(gMnTrainingPanels[held_port_id].char_id, select_button);

        if (mnTrainingIsCostumeInUse(gMnTrainingPanels[held_port_id].char_id, held_port_id, costume_id) != FALSE)
        {
            func_800269C0(0xA5U);
            return;
        }

        func_ovl2_800E9248(gMnTrainingPanels[held_port_id].player, costume_id, 0);
        gMnTrainingPanels[held_port_id].costume_id = costume_id;
    }

    gMnTrainingPanels[held_port_id].is_selected = TRUE;

    mnTrainingReorderCursorsOnPlacement(port_id, held_port_id);

    gMnTrainingPanels[held_port_id].holder_port_id = 4;
    gMnTrainingPanels[port_id].cursor_state = mnCursorStateNotHoldingToken;

    mnTrainingRedrawCursor(gMnTrainingPanels[port_id].cursor, port_id, 2);

    gMnTrainingPanels[port_id].held_port_id = -1;
    gMnTrainingPanels[held_port_id].unk_0x88 = TRUE;

    mnTrainingAnnounceFighter(port_id, held_port_id);

    mnTrainingCreateWhiteSquare(held_port_id);
}

// 0x80131C70
f32 mnTrainingGetNextPortraitX(s32 portrait_id, f32 current_x_position)
{
    f32 portrait_x_position[12] = dMnTrainingPortraitPositionsX,
        portrait_velocity[12] = dMnTrainingPortraitVelocities;

    if (current_x_position == portrait_x_position[portrait_id])
    {
        return -1.0F;
    }
    else if (portrait_x_position[portrait_id] < current_x_position)
    {
        return (current_x_position + portrait_velocity[portrait_id]) <= portrait_x_position[portrait_id]
            ? portrait_x_position[portrait_id]
            : current_x_position + portrait_velocity[portrait_id];
    }
    else
    {
        return (current_x_position + portrait_velocity[portrait_id]) >= portrait_x_position[portrait_id]
            ? portrait_x_position[portrait_id]
            : current_x_position + portrait_velocity[portrait_id];
    }
}

// 0x80131D84
sb32 mnTrainingCheckFighterIsXBoxed(s32 ft_kind)
{
    return FALSE;
}

// 0x80131D90
void mnTrainingSetPortraitX(GObj *portrait_gobj)
{
    f32 new_portrait_x = mnTrainingGetNextPortraitX(portrait_gobj->user_data.s, SObjGetStruct(portrait_gobj)->pos.x);

    if (new_portrait_x != -1.0F)
    {
        SObjGetStruct(portrait_gobj)->pos.x = new_portrait_x;

        if (SObjGetStruct(portrait_gobj)->next != NULL)
        {
            SObjGetStruct(portrait_gobj)->next->pos.x = SObjGetStruct(portrait_gobj)->pos.x + 4.0F;
        }
    }
}

// 0x80131E0C
void mnTrainingInitializePortraitBackgroundPosition(SObj *portrait_bg_sobj, s32 portrait_id)
{
    Vec2f coordinates[12] = dMnTrainingPortraitPositionsXY;

    portrait_bg_sobj->pos.x = coordinates[portrait_id].x;
    portrait_bg_sobj->pos.y = coordinates[portrait_id].y;
}

// 0x80131E68
void mnTrainingAddRedXBoxToPortrait(GObj* portrait_gobj, s32 portrait_id)
{
    SObj* portrait_sobj = SObjGetStruct(portrait_gobj);
    f32 x = portrait_sobj->pos.x,
        y = portrait_sobj->pos.y;
    s32 xbox_image_offset = &(FILE_013_XBOX_IMAGE_OFFSET);

    portrait_sobj = gcAppendSObjWithSprite(portrait_gobj, (gMnTrainingFilesArray[5] + xbox_image_offset)); // AppendTexture

    portrait_sobj->pos.x = x + 4.0F;
    portrait_sobj->pos.y = y + 12.0F;
    portrait_sobj->sprite.attr = portrait_sobj->sprite.attr & ~SP_FASTCOPY;
    portrait_sobj->sprite.attr = portrait_sobj->sprite.attr| SP_TRANSPARENT;
    portrait_sobj->sprite.red = 0xFF;
    portrait_sobj->sprite.green = 0;
}

// 0x80131EFC
s32 mnTrainingGetIsLocked(s32 char_id)
{
    switch (char_id)
    {
        case Ft_Kind_Ness:
            return (gMnTrainingCharacterUnlockedMask & (1 << Ft_Kind_Ness)) ? FALSE : TRUE;

        case Ft_Kind_Purin:
            return (gMnTrainingCharacterUnlockedMask & (1 << Ft_Kind_Purin)) ? FALSE : TRUE;

        case Ft_Kind_Captain:
            return (gMnTrainingCharacterUnlockedMask & (1 << Ft_Kind_Captain)) ? FALSE : TRUE;

        case Ft_Kind_Luigi:
            return (gMnTrainingCharacterUnlockedMask & (1 << Ft_Kind_Luigi)) ? FALSE : TRUE;
    }
    return FALSE;
}

// 0x80131FC8 - Unused?
void func_ovl28_80131FC8()
{
    return;
}

// 0x80131FD0
s32 mnTrainingGetFtKind(s32 portrait_id)
{
    s32 ftKind_order[12] = dMnTrainingFtKindOrder;

    return ftKind_order[portrait_id];
}

// 0x80132020
s32 mnTrainingGetPortraitId(s32 ft_kind)
{
    s32 portrait_id_order[12] = dMnTrainingPortraitOrder;

    return portrait_id_order[ft_kind];
}

// 0x80132070
void mnTrainingRenderPortraitWithNoise(GObj *portrait_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x30, 0x30, 0x30, 0xFF);
    gDPSetCombineLERP(gDisplayListHead[0]++, NOISE, TEXEL0, PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0, NOISE, TEXEL0, PRIMITIVE, TEXEL0,  0, 0, 0, TEXEL0);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    func_ovl0_800CCF74(portrait_gobj);
}

// 0x80132130
void mnTrainingCreateLockedPortrait(s32 portrait_id)
{
    GObj* texture_gobj;
    SObj* texture_sobj;
    intptr_t locked_portrait_offsets[12] = dMnTrainingLockedPortraitOffsets;

    // portrait bg (fire)
    texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
    omAddGObjRenderProc(texture_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
    omAddGObjCommonProc(texture_gobj, mnTrainingSetPortraitX, 1, 1);

    texture_sobj = gcAppendSObjWithSprite(texture_gobj, GetAddressFromOffset(gMnTrainingFilesArray[6], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
    texture_sobj->pos.x = (f32) (((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 0x2D) + 0x19);
    texture_sobj->pos.y = (f32) (((portrait_id >= 6 ? 1 : 0) * 0x2B) + 0x24);

    mnTrainingInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
    texture_gobj->user_data.s = portrait_id;

    // portrait
    texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
    omAddGObjRenderProc(texture_gobj, mnTrainingRenderPortraitWithNoise, 0x1BU, 0x80000000U, -1);
    omAddGObjCommonProc(texture_gobj, mnTrainingSetPortraitX, 1, 1);

    texture_sobj = gcAppendSObjWithSprite(texture_gobj, GetAddressFromOffset(gMnTrainingFilesArray[6], locked_portrait_offsets[mnTrainingGetFtKind(portrait_id)]));
    texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
    texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;

    texture_gobj->user_data.s = portrait_id;
    mnTrainingInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

    // question mark
    texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
    omAddGObjRenderProc(texture_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
    omAddGObjCommonProc(texture_gobj, mnTrainingSetPortraitX, 1, 1);

    texture_sobj = gcAppendSObjWithSprite(texture_gobj, GetAddressFromOffset(gMnTrainingFilesArray[6], &FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET));
    texture_sobj->sprite.attr &= ~SP_FASTCOPY;
    texture_sobj->sprite.attr |= SP_TRANSPARENT;
    texture_sobj->shadow_color.r = 0x5B;
    texture_sobj->shadow_color.g = 0x41;
    texture_sobj->shadow_color.b = 0x33;
    texture_sobj->sprite.red = 0xC4;
    texture_sobj->sprite.green = 0xB9;
    texture_sobj->sprite.blue = 0xA9;

    texture_gobj->user_data.s = portrait_id;
    mnTrainingInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
}

// 0x801323D8
void mnTrainingCreatePortrait(s32 portrait_id)
{
    GObj *portrait_gobj, *portrait_bg_gobj;
    SObj *texture_sobj;
    intptr_t portrait_offsets[12] = dMnTrainingPortraitOffsets;

    // if locked, render locked portrait instead
    if (mnTrainingGetIsLocked(mnTrainingGetFtKind(portrait_id)))
    {
        mnTrainingCreateLockedPortrait(portrait_id);
    }
    else
    {
        // portrait bg (fire)
        portrait_bg_gobj = omMakeGObjCommon(0U, NULL, 0x1DU, 0x80000000U);
        omAddGObjRenderProc(portrait_bg_gobj, func_ovl0_800CCF00, 0x24U, 0x80000000U, -1);
        portrait_bg_gobj->user_data.p = portrait_id;
        omAddGObjCommonProc(portrait_bg_gobj, mnTrainingSetPortraitX, 1, 1);

        texture_sobj = gcAppendSObjWithSprite(portrait_bg_gobj, GetAddressFromOffset(gMnTrainingFilesArray[6], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
        mnTrainingInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

        // portrait
        portrait_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
        omAddGObjRenderProc(portrait_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
        omAddGObjCommonProc(portrait_gobj, mnTrainingSetPortraitX, 1, 1);

        texture_sobj = gcAppendSObjWithSprite(portrait_gobj, GetAddressFromOffset(gMnTrainingFilesArray[6], portrait_offsets[mnTrainingGetFtKind(portrait_id)]));
        texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
        texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;
        portrait_gobj->user_data.p = portrait_id;

        // this conditionally draws a big red box with an X in it, but this check always fails
        if (mnTrainingCheckFighterIsXBoxed(mnTrainingGetFtKind(portrait_id)) != FALSE)
        {
            mnTrainingAddRedXBoxToPortrait(portrait_gobj, portrait_id);
        }
        mnTrainingInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
    }
}

// 0x80132594
void mnTrainingCreatePortraits()
{
    s32 portrait_id;

    for (portrait_id = 0; portrait_id < 12; portrait_id++)
    {
        mnTrainingCreatePortrait(portrait_id);
    }
}

// 0x801325D4
void mnTrainingSetNameAndLogo(GObj* name_logo_gobj, s32 port_id, s32 ft_kind)
{
    SObj* sobj;
    Vec2f coords[12] = dMnTrainingUnusedPositions;
    intptr_t logo_offsets[12] = dMnTrainingLogoOffsets;
    intptr_t name_offsets[12] = dMnTrainingNameOffsets;

    if (ft_kind != Ft_Kind_Null)
    {
        func_8000B760(name_logo_gobj);

        // logo
        sobj = gcAppendSObjWithSprite(name_logo_gobj, GetAddressFromOffset(gMnTrainingFilesArray[3], logo_offsets[ft_kind]));
        sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
        sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;

        if (port_id == gMnTrainingHumanPanelPort)
        {
            sobj->sprite.red = 0x1E;
            sobj->sprite.green = 0x1E;
            sobj->sprite.blue = 0x1E;
            sobj->pos.x = 63.0F;
            sobj->pos.y = 144.0F;
        }
        else
        {
            sobj->sprite.red = 0x44;
            sobj->sprite.green = 0x44;
            sobj->sprite.blue = 0x44;
            sobj->pos.x = 195.0F;
            sobj->pos.y = 144.0F;
        }

        // name
        sobj = gcAppendSObjWithSprite(name_logo_gobj, GetAddressFromOffset(gMnTrainingFilesArray[0], name_offsets[ft_kind]));
        sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
        sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;

        if (port_id == gMnTrainingHumanPanelPort)
        {
            sobj->pos.x = 61.0F;
            sobj->pos.y = 202.0F;
        }
        else
        {
            sobj->pos.x = 193.0F;
            sobj->pos.y = 202.0F;
        }
    }
}

// 0x801327C4
void mnTrainingCreatePortraitViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x46, 0x08000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132864
void mnTrainingCreatePortraitBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x4B, 0x1000000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132904
void mnTrainingCreatePortraitWhiteBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x49, 0x2000000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801329A4
void mnTrainingCreatePanelDoorsViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x28, 0x20000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132A44
void mnTrainingCreateTypeButtonViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x23, 0x40000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132AE4
void mnTrainingCreatePanelViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x32, 0x10000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132B84
void mnTrainingCreateTeamButtonViewPort()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x2D, 0x400000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132C24
void mnTrainingUpdatePanel(GObj* panel_gobj, s32 port_id) {
    SObj* panel_sobj;
    intptr_t offsets[4] = dMnTrainingPanelLUTOffsets;

    panel_sobj = SObjGetStruct(panel_gobj);

    if (port_id == gMnTrainingHumanPanelPort)
    {
        panel_sobj->sprite.LUT = GetAddressFromOffset(gMnTrainingFilesArray[0], offsets[gMnTrainingHumanPanelPort]);
    }
    else
    {
        panel_sobj->sprite.LUT = GetAddressFromOffset(gMnTrainingFilesArray[1], &FILE_017_CPU_PANEL_LUT_OFFSET);
    }
}

// 0x80132CA4
void mnTrainingCreateTypeImage(s32 port_id)
{
    GObj* type_gobj;
    SObj* type_sobj;
    intptr_t offsets[4] = dMnTrainingTypeOffsets;
    f32 floats[4] = dMnTrainingTypeOffsetsX;

    gMnTrainingPanels[port_id].type = type_gobj = omMakeGObjCommon(0U, NULL, 0x16U, 0x80000000U);
    omAddGObjRenderProc(type_gobj, func_ovl0_800CCF00, 0x1CU, 0x80000000U, -1);

    if (port_id == gMnTrainingHumanPanelPort)
    {
        type_sobj = gcAppendSObjWithSprite(type_gobj, GetAddressFromOffset(gMnTrainingFilesArray[0], offsets[gMnTrainingHumanPanelPort]));
        type_sobj->pos.x = floats[port_id] + 53.0F;
        type_sobj->pos.y = 131.0F;
    }
    else
    {
        type_sobj = gcAppendSObjWithSprite(type_gobj, GetAddressFromOffset(gMnTrainingFilesArray[0], &FILE_011_TYPE_CP_IMAGE_OFFSET));
        type_sobj->pos.x = 192.0F;
        type_sobj->pos.y = 132.0F;
    }

    type_sobj->sprite.attr &= ~SP_FASTCOPY;
    type_sobj->sprite.attr |= SP_TRANSPARENT;
    type_sobj->sprite.red = 0;
    type_sobj->sprite.green = 0;
    type_sobj->sprite.blue = 0;
}

// 0x80132E24
void mnTrainingCreatePanel(s32 port_id)
{
    GObj* panel_gobj;
    GObj* namelogo_gobj;
    intptr_t type_offsets[4] = dMnTrainingTypeOffsetsDuplicate; // unused
    f32 type_x_offsets[4] = dMnTrainingTypeOffsetsXDuplicate; // unused

    // create panel
    panel_gobj = func_ovl0_800CD050(0, NULL, 0x16, 0x80000000, func_ovl0_800CCF00, 0x1C, 0x80000000, -1, GetAddressFromOffset(gMnTrainingFilesArray[1], &FILE_017_PANEL_IMAGE_OFFSET), 1, NULL, 1);
    gMnTrainingPanels[port_id].panel = panel_gobj;
    SObjGetStruct(panel_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(panel_gobj)->sprite.attr |= SP_TRANSPARENT;

    if (port_id == gMnTrainingHumanPanelPort) {
        SObjGetStruct(panel_gobj)->pos.x = 53.0f;
        SObjGetStruct(panel_gobj)->pos.y = 127.0f;
    } else {
        SObjGetStruct(panel_gobj)->pos.x = 185.0f;
        SObjGetStruct(panel_gobj)->pos.y = 127.0f;
    }

    mnTrainingUpdatePanel(panel_gobj, port_id);
    mnTrainingCreateTypeImage(port_id);

    // name/logo
    namelogo_gobj = omMakeGObjCommon(0U, NULL, 0x16U, 0x80000000U);
    gMnTrainingPanels[port_id].name_logo = namelogo_gobj;
    omAddGObjRenderProc(namelogo_gobj, func_ovl0_800CCF00, 0x1CU, 0x80000000U, -1);

    mnTrainingSyncNameAndLogo(port_id);
}

// 0x80132FF4 - Unused?
void func_ovl28_80132FF4()
{
    return;
}

// 0x80132FFC - Unused?
void func_ovl28_80132FFC()
{
    return;
}

// 0x80133004 - Unused?
void func_ovl28_80133004()
{
    return;
}

// 0x8013300C - Unused?
void func_ovl28_8013300C()
{
    return;
}

// 0x80133014
void mnTrainingCreateBackground()
{
    GObj* background_gobj;
    SObj* background_sobj;

    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x04000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    background_gobj = omMakeGObjCommon(0U, NULL, 0x11U, 0x80000000U);
    omAddGObjRenderProc(background_gobj, func_ovl0_800CCF00, 0x1AU, 0x80000000U, -1);
    background_sobj = gcAppendSObjWithSprite(background_gobj, GetAddressFromOffset(gMnTrainingFilesArray[4], &FILE_015_BACKGROUND_IMAGE_OFFSET));
    background_sobj->cmt = G_TX_WRAP;
    background_sobj->cms = G_TX_WRAP;
    background_sobj->maskt = 6;
    background_sobj->masks = 5;
    background_sobj->lrs = 300;
    background_sobj->lrt = 220;
    background_sobj->pos.x = 10.0F;
    background_sobj->pos.y = 10.0F;
}

// 0x80133140
void mnTrainingDrawTitleAndBack()
{
    GObj* back_gobj;
    GObj* title_gobj;
    void* unused;

    title_gobj = func_ovl0_800CD050(0, NULL, 0x19, 0x80000000, func_ovl0_800CCF00, 0x1A, 0x80000000, -1, GetAddressFromOffset(gMnTrainingFilesArray[5], &FILE_012_TRAINING_MODE_IMAGE_OFFSET), 1, NULL, 1);
    SObjGetStruct(title_gobj)->pos.x = 27.0F;
    SObjGetStruct(title_gobj)->pos.y = 24.0F;
    SObjGetStruct(title_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(title_gobj)->sprite.attr |= SP_TRANSPARENT;
    SObjGetStruct(title_gobj)->sprite.red = 0xE3;
    SObjGetStruct(title_gobj)->sprite.green = 0xAC;
    SObjGetStruct(title_gobj)->sprite.blue = 4;
    gMnTrainingTitleGObj = title_gobj;

    back_gobj = func_ovl0_800CD050(0, NULL, 0x19, 0x80000000, func_ovl0_800CCF00, 0x1A, 0x80000000, -1, GetAddressFromOffset(gMnTrainingFilesArray[0], &FILE_011_BACK_IMAGE_OFFSET), 1, NULL, 1);
    SObjGetStruct(back_gobj)->pos.x = 244.0F;
    SObjGetStruct(back_gobj)->pos.y = 23.0F;
    SObjGetStruct(back_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(back_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 0x801332C4 - Unused?
void func_ovl28_801332C4()
{
    return;
}

// 0x801332CC - Unused?
void func_ovl28_801332CC()
{
    return;
}

// 0x801332D4 - Unused?
void func_ovl28_801332D4()
{
    return;
}

// 0x801332DC
s32 mnTrainingGetAdditionalSelectedCount(s32 ft_kind)
{
    s32 count = 0;

    if (ft_kind == gMnTrainingPanels[gMnTrainingHumanPanelPort].char_id) {
        count += 1;
    }
    if (ft_kind == gMnTrainingPanels[gMnTrainingCPUPanelPort].char_id) {
        count += 1;
    }
    return (count != 0) ? count - 1 : count;
}

// 0x80133350
sb32 mnTrainingIsCostumeInUse(s32 ft_kind, s32 port_id, s32 costume_id)
{
    if (port_id == gMnTrainingHumanPanelPort)
    {
        if (
            (ft_kind == gMnTrainingPanels[gMnTrainingCPUPanelPort].char_id)
            && (costume_id == gMnTrainingPanels[gMnTrainingCPUPanelPort].costume_id)
            )
        {
            return TRUE;
        }
        return FALSE;
    }
    if (port_id == gMnTrainingCPUPanelPort)
    {
        if (
            (ft_kind == gMnTrainingPanels[gMnTrainingHumanPanelPort].char_id)
            && (costume_id == gMnTrainingPanels[gMnTrainingHumanPanelPort].costume_id)
            )
        {
            return TRUE;
        }
        return FALSE;
    }
}

// 0x80133408
s32 mnTrainingGetAvailableCostumeFFA(s32 ft_kind, s32 port_id)
{
    s32 i, j, k, l;
    sb32 some_array[4];

    for (i = 0; i < 4; i++)
    {
        some_array[i] = FALSE;
    }

    if (port_id == gMnTrainingHumanPanelPort)
    {
        if (ft_kind == gMnTrainingPanels[gMnTrainingCPUPanelPort].char_id)
        {
            for (j = 0; j < 4; j++)
            {
                if (ftCostume_GetIndexFFA(ft_kind, j) == gMnTrainingPanels[gMnTrainingCPUPanelPort].costume_id)
                {
                    some_array[j] = TRUE;
                }
            }
        }
    }
    else
    {
        if (ft_kind ==gMnTrainingPanels[gMnTrainingHumanPanelPort].char_id)
        {
            for (k = 0; k < 4; k++)
            {
                if (ftCostume_GetIndexFFA(ft_kind, k) == gMnTrainingPanels[gMnTrainingHumanPanelPort].costume_id)
                {
                    some_array[k] = TRUE;
                }
            }
        }
    }

    for (l = 0; l < 4; l++)
    {
        if (some_array[l] == FALSE) return l;
    }
}

// 0x801335F0
s32 mnTrainingGetAvailableCostume(s32 ft_kind, s32 port_id)
{
    return ftCostume_GetIndexFFA(ft_kind, mnTrainingGetAvailableCostumeFFA(ft_kind, port_id));
}

// 0x8013361C
s32 mnTrainingGetSelectedAnimation(s32 ft_kind)
{
    switch (ft_kind)
    {
        case Ft_Kind_Fox:
        case Ft_Kind_Samus:
            return 0x10004;
        case Ft_Kind_Donkey:
        case Ft_Kind_Luigi:
        case Ft_Kind_Link:
        case Ft_Kind_Captain:
            return 0x10001;
        case Ft_Kind_Yoshi:
        case Ft_Kind_Purin:
        case Ft_Kind_Ness:
            return 0x10002;
        case Ft_Kind_Mario:
        case Ft_Kind_Kirby:
            return 0x10003;
        default:
            return 0x10001;
    }
}

// 0x8013367C
void mnTrainingRotateFighter(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);
    s32 port_id = fp->player;
    mnCharPanelTraining* panel_info = &gMnTrainingPanels[port_id];

    if (panel_info->unk_0x88 == 1)
    {
        if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y < F_DEG_TO_RAD(0.1F))
        {
            if (panel_info->selected_animation_started == FALSE)
            {
                func_ovl1_803905CC(panel_info->player, mnTrainingGetSelectedAnimation(panel_info->char_id));

                panel_info->selected_animation_started = TRUE;
            }
        }
        else
        {
            DObjGetStruct(fighter_gobj)->rotate.vec.f.y += F_DEG_TO_RAD(20.0F);

            if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > F_DEG_TO_RAD(360.0F))
            {
                DObjGetStruct(fighter_gobj)->rotate.vec.f.y = 0.0F;

                func_ovl1_803905CC(panel_info->player, mnTrainingGetSelectedAnimation(panel_info->char_id));

                panel_info->selected_animation_started = TRUE;
            }
        }
    } else {
        DObjGetStruct(fighter_gobj)->rotate.vec.f.y += F_DEG_TO_RAD(2.0F);

        if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > F_DEG_TO_RAD(360.0F))
        {
            DObjGetStruct(fighter_gobj)->rotate.vec.f.y -= F_DEG_TO_RAD(360.0F);
        }
    }
}

// 0x801337BC
void mnTrainingSpawnFighter(GObj* fighter_gobj, s32 port_id, s32 ft_kind, s32 costume_id)
{
    f32 initial_y_rotation;
    ftSpawnInfo spawn_info = ftGlobal_SpawnInfo_MainData;

    if (ft_kind != Ft_Kind_Null)
    {
        if (fighter_gobj != NULL)
        {
            initial_y_rotation = DObjGetStruct(fighter_gobj)->rotate.vec.f.y;
            func_ovl2_800D78E8(fighter_gobj);
        }
        else
        {
            initial_y_rotation = 0.0F;
        }

        spawn_info.ft_kind = ft_kind;
        gMnTrainingPanels[port_id].costume_id = spawn_info.costume = costume_id;
        spawn_info.shade = 0;
        spawn_info.anim_heap = gMnTrainingPanels[port_id].anim_heap;
        spawn_info.player = port_id;
        fighter_gobj = ftManager_MakeFighter(&spawn_info);

        gMnTrainingPanels[port_id].player = fighter_gobj;

        omAddGObjCommonProc(fighter_gobj, mnTrainingRotateFighter, 1, 1);

        if (port_id == gMnTrainingHumanPanelPort)
        {
            DObjGetStruct(fighter_gobj)->translate.vec.f.x = -830.0F;
            DObjGetStruct(fighter_gobj)->translate.vec.f.y = -870.0F;
        }
        else
        {
            DObjGetStruct(fighter_gobj)->translate.vec.f.x = 830.0F;
            DObjGetStruct(fighter_gobj)->translate.vec.f.y = -870.0F;
        }
        DObjGetStruct(fighter_gobj)->rotate.vec.f.y = initial_y_rotation;

        DObjGetStruct(fighter_gobj)->scale.vec.f.x = menu_zoom[ft_kind];
        DObjGetStruct(fighter_gobj)->scale.vec.f.y = menu_zoom[ft_kind];
        DObjGetStruct(fighter_gobj)->scale.vec.f.z = menu_zoom[ft_kind];

        if (port_id == gMnTrainingCPUPanelPort)
        {
            ftColor_CheckSetColAnimIndex(fighter_gobj, 1, 0);
        }
    }
}

// 0x801339A0
void mnTrainingCreateFighterViewport()
{
    OMCamera *cam = OMCameraGetStruct((GObj*)func_8000B93C(0x401U, NULL, 0x10, 0x80000000U, func_80017EC0, 0x1E, 0x48600, -1, 1, 1, 0, 1, 0));
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    cam->view.tilt.x = 0.0F;
    cam->view.tilt.y = 0.0F;
    cam->view.tilt.z = -5000.0F;
    cam->flags = 4;
    cam->view.pan.x = 0.0F;
    cam->view.pan.y = 0.0F;
    cam->view.pan.z = 0.0F;
    cam->view.unk.x = 0.0F;
    cam->view.unk.z = 0.0F;
    cam->view.unk.y = 1.0F;
}

// 0x80133A90
void mnTrainingRedrawCursor(GObj* cursor_gobj, s32 port_id, u32 cursor_state)
{
    SObj* cursor_sobj;
    f32 current_x, current_y;
    GfxColorPair type_colors[4] = dMnTrainingCursorTypeColors;
    intptr_t type_offsets[4] = dMnTrainingCursorTypeOffsets;
    intptr_t cursor_offsets[3] = dMnTrainingCursorOffsets;
    Vec2i type_positions[3] = dMnTrainingCursorTypePositions;

    current_x = SObjGetStruct(cursor_gobj)->pos.x;
    current_y = SObjGetStruct(cursor_gobj)->pos.y;

    func_8000B760(cursor_gobj);

    cursor_sobj = gcAppendSObjWithSprite(cursor_gobj, GetAddressFromOffset(gMnTrainingFilesArray[0], cursor_offsets[cursor_state]));
    cursor_sobj->pos.x = current_x;
    cursor_sobj->pos.y = current_y;
    cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
    cursor_sobj->sprite.attr |= SP_TRANSPARENT;

    cursor_sobj = gcAppendSObjWithSprite(cursor_gobj, GetAddressFromOffset(gMnTrainingFilesArray[0], type_offsets[port_id]));
    cursor_sobj->pos.x = SObjGetPrev(cursor_sobj)->pos.x + type_positions[cursor_state].x;
    cursor_sobj->pos.y = SObjGetPrev(cursor_sobj)->pos.y + type_positions[cursor_state].y;
    cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
    cursor_sobj->sprite.attr |= SP_TRANSPARENT;
    cursor_sobj->sprite.red = type_colors[port_id].prim.r;
    cursor_sobj->sprite.green = type_colors[port_id].prim.g;
    cursor_sobj->sprite.blue = type_colors[port_id].prim.b;
    cursor_sobj->shadow_color.r = type_colors[port_id].env.r;
    cursor_sobj->shadow_color.g = type_colors[port_id].env.g;
    cursor_sobj->shadow_color.b = type_colors[port_id].env.b;
}

// 0x80133CA0 - Unused?
void func_ovl28_80133CA0()
{
    return;
}

// 0x80133CA8
void mnTrainingUpdatePanels()
{
    s32 i;
    s32 color_indexes[4] = dMnTrainingPanelColorIndexesUnused; // unused

    mnTrainingUpdatePanel(gMnTrainingPanels[gMnTrainingHumanPanelPort].panel, gMnTrainingHumanPanelPort);
    mnTrainingUpdatePanel(gMnTrainingPanels[gMnTrainingCPUPanelPort].panel, gMnTrainingCPUPanelPort);
}

// 0x80133D44
sb32 mnTrainingCheckTokenPickup(GObj* cursor_gobj, s32 cursor_port_id, s32 port_id)
{
    f32 current_x, current_y;
    s32 range_check;
    SObj* cursor_sobj = SObjGetStruct(cursor_gobj);
    SObj* token_sobj = SObjGetStruct(gMnTrainingPanels[port_id].token);

    current_x = cursor_sobj->pos.x + 25.0F;

    range_check = (current_x >= token_sobj->pos.x) && (current_x <= token_sobj->pos.x + 26.0F) ? TRUE : FALSE;

    if (range_check)
    {
        current_y = cursor_sobj->pos.y + 3.0F;

        range_check = (current_y >= token_sobj->pos.y) && (current_y <= token_sobj->pos.y + 24.0F) ? TRUE : FALSE;
        if (range_check) return TRUE;
    }
    return FALSE;
}

// 0x80133E30
void mnTrainingSyncFighterDisplay(s32 port_id)
{
    s32 var_v0 = 0;

    if (gMnTrainingPanels[port_id].player != NULL)
    {
        if ((gMnTrainingPanels[port_id].char_id == Ft_Kind_Null) && (gMnTrainingPanels[port_id].is_selected == 0))
        {
            gMnTrainingPanels[port_id].player->obj_renderflags = 1;
            var_v0 = 1;
        }
    }
    if (var_v0 == 0)
    {
        mnTrainingSpawnFighter(gMnTrainingPanels[port_id].player, port_id, gMnTrainingPanels[port_id].char_id, mnTrainingGetAvailableCostume(gMnTrainingPanels[port_id].char_id, port_id));
        gMnTrainingPanels[port_id].selected_animation_started = FALSE;
    }
}

// 0x80133ED8 - Unused?
void func_ovl28_80133ED8()
{
    return;
}

// 0x80133EE0
void mnTrainingSyncNameAndLogo(s32 port_id)
{
    mnCharPanelTraining* panel_info = &gMnTrainingPanels[port_id];

    if ((panel_info->player_type == mnPanelTypeNA) || ((panel_info->char_id == Ft_Kind_Null) && (panel_info->is_selected == FALSE)))
    {
        panel_info->name_logo->obj_renderflags = 1;
    }
    else
    {
        panel_info->name_logo->obj_renderflags = 0;
        mnTrainingSetNameAndLogo(panel_info->name_logo, port_id, panel_info->char_id);
    }
}

// 0x80133F68
void mnTrainingRemoveWhiteSquare(s32 port_id)
{
    GObj* white_square_gobj;
    mnCharPanelTraining* panel_info = &gMnTrainingPanels[port_id];

    white_square_gobj = panel_info->white_square;
    if (white_square_gobj != NULL)
    {
        panel_info->white_square = NULL;
        omEjectGObjCommon(white_square_gobj);
    }
}

// 0x80133FB4
void mnTrainingFlashWhiteSquare(GObj* white_square_gobj)
{
    s32 duration = 16;
    s32 frames_to_wait = 1;

    while (TRUE)
    {
        duration--, frames_to_wait--;

        if (duration == 0) mnTrainingRemoveWhiteSquare(white_square_gobj->user_data.p);

        if (frames_to_wait == 0)
        {
            frames_to_wait = 1;
            white_square_gobj->obj_renderflags = (white_square_gobj->obj_renderflags == 1) ? 0 : 1;
        }

        stop_current_process(1);
    }
}

// 0x8013405C
void mnTrainingCreateWhiteSquare(s32 port_id)
{
    GObj* white_square_gobj;
    SObj* white_square_sobj;
    s32 portrait_id = mnTrainingGetPortraitId(gMnTrainingPanels[port_id].char_id);

    mnTrainingRemoveWhiteSquare(port_id);

    white_square_gobj = omMakeGObjCommon(0U, NULL, 0x1EU, 0x80000000U);
    gMnTrainingPanels[port_id].white_square = white_square_gobj;
    omAddGObjRenderProc(white_square_gobj, func_ovl0_800CCF00, 0x25U, 0x80000000U, -1);
    white_square_gobj->user_data.p = port_id;
    omAddGObjCommonProc(white_square_gobj, mnTrainingFlashWhiteSquare, 0, 1);

    white_square_sobj = gcAppendSObjWithSprite(white_square_gobj, GetAddressFromOffset(gMnTrainingFilesArray[6], &FILE_013_WHITE_SQUARE));
    white_square_sobj->pos.x = (f32) (((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 45) + 26);
    white_square_sobj->pos.y = (f32) (((portrait_id >= 6 ? 1 : 0) * 43) + 37);
}

// 0x801341B0
void mnTrainingAnnounceFighter(s32 port_id, s32 panel_id)
{
    u16 announcer_fgms[12] = dMnTrainingAnnouncerNames;

    if (gMnTrainingPanels[port_id].p_sfx != NULL)
    {
        if ((gMnTrainingPanels[port_id].p_sfx->sfx_id != 0) && (gMnTrainingPanels[port_id].p_sfx->sfx_id == gMnTrainingPanels[port_id].sfx_id))
        {
            func_80026738(gMnTrainingPanels[port_id].p_sfx);
        }
    }

    func_800269C0(0x79U);

    gMnTrainingPanels[port_id].p_sfx = func_800269C0(announcer_fgms[gMnTrainingPanels[panel_id].char_id]);

    if (gMnTrainingPanels[port_id].p_sfx != NULL)
    {
        gMnTrainingPanels[port_id].sfx_id = gMnTrainingPanels[port_id].p_sfx->sfx_id;
    }
}

// 0x801342B0 - Unused?
void func_ovl28_801342B0()
{
    return;
}

// 0x801342B8
void mnTrainingRemoveHandicapCPULevel(s32 port_id)
{
    if (gMnTrainingPanels[port_id].handicap_cpu_level != NULL)
    {
        omEjectGObjCommon(gMnTrainingPanels[port_id].handicap_cpu_level);
    }
    if (gMnTrainingPanels[port_id].arrows != NULL)
    {
        omEjectGObjCommon(gMnTrainingPanels[port_id].arrows);
    }
    if (gMnTrainingPanels[port_id].handicap_cpu_level_value != NULL)
    {
        omEjectGObjCommon(gMnTrainingPanels[port_id].handicap_cpu_level_value);
    }

    gMnTrainingPanels[port_id].handicap_cpu_level = NULL;
    gMnTrainingPanels[port_id].arrows = NULL;
    gMnTrainingPanels[port_id].handicap_cpu_level_value = NULL;
}

// 0x80134340
SObj* mnTrainingGetArrowSObj(GObj* arrow_gobj, s32 direction)
{
    SObj* second_arrow_sobj;
    SObj* first_arrow_sobj;

    first_arrow_sobj = SObjGetStruct(arrow_gobj);
    if (first_arrow_sobj != NULL)
    {
        if (direction == first_arrow_sobj->user_data.s)
        {
            return first_arrow_sobj;
        }

        second_arrow_sobj = SObjGetNext(first_arrow_sobj);
        if ((second_arrow_sobj != NULL) && (direction == second_arrow_sobj->user_data.s))
        {
            return second_arrow_sobj;
        }
    }
    return NULL;
}

// 0x8013438C - Unused?
void mnTrainingSyncAndBlinkArrows(GObj* arrow_gobj)
{
    SObj* arrow_sobj;
    s32 port_id = arrow_gobj->user_data.s;
    s32 blink_duration = 10;
    s32 value;

    while (TRUE)
    {
        blink_duration--;

        if (blink_duration == 0)
        {
            blink_duration = 10;
            arrow_gobj->obj_renderflags = arrow_gobj->obj_renderflags == 1 ? 0 : 1;
        }

        value = (gMnTrainingPanels[port_id].player_type == mnPanelTypeHuman) ? gMnTrainingPanels[port_id].handicap : gMnTrainingPanels[port_id].cpu_level;

        if (value == 1)
        {
            arrow_sobj = mnTrainingGetArrowSObj(arrow_gobj, 0);

            if (arrow_sobj != NULL)
            {
                func_800096EC(arrow_sobj);
            }
        }
        else if (mnTrainingGetArrowSObj(arrow_gobj, 0) == NULL)
        {
            arrow_sobj = gcAppendSObjWithSprite(arrow_gobj, GetAddressFromOffset(gMnTrainingFilesArray[0], &FILE_011_ARROW_L_IMAGE_OFFSET));
            arrow_sobj->pos.x = (port_id * 0x45) + 0x19;
            arrow_sobj->pos.y = 201.0F;
            arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
            arrow_sobj->sprite.attr |= SP_TRANSPARENT;
            arrow_sobj->user_data.s = 0;
        }

        if (value == 9)
        {
            arrow_sobj = mnTrainingGetArrowSObj(arrow_gobj, 1);

            if (arrow_sobj != NULL)
            {
                func_800096EC(arrow_sobj);
            }
        }
        else if (mnTrainingGetArrowSObj(arrow_gobj, 1) == NULL)
        {
            arrow_sobj = gcAppendSObjWithSprite(arrow_gobj, GetAddressFromOffset(gMnTrainingFilesArray[0], &FILE_011_ARROW_R_IMAGE_OFFSET));
            arrow_sobj->pos.x = (port_id * 0x45) + 0x4F;
            arrow_sobj->pos.y = 201.0F;
            arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
            arrow_sobj->sprite.attr |= SP_TRANSPARENT;
            arrow_sobj->user_data.s = 1;
        }
        stop_current_process(1);
    }
}

// 0x801345B8
void mnTrainingSyncHandicapCPULevelDisplay(GObj* handicap_cpu_level_gobj)
{
    s32 port_id = handicap_cpu_level_gobj->user_data.p;

    if (gMnTrainingPanels[port_id].unk_0x88 == 0)
    {
        mnTrainingRemoveHandicapCPULevel(port_id);
    }
    else if (SObjGetStruct(handicap_cpu_level_gobj)->user_data.s != gMnTrainingPanels[port_id].player_type)
    {
        mnTrainingDrawHandicapCPULevel(port_id);
    }
}

// 0x8013462C
void mnTrainingDrawHandicapCPULevel(s32 port_id)
{
    GObj* handicap_cpu_level_gobj;
    SObj* handicap_cpu_level_sobj;

    if (gMnTrainingPanels[port_id].handicap_cpu_level != NULL)
    {
        omEjectGObjCommon(gMnTrainingPanels[port_id].handicap_cpu_level);
        gMnTrainingPanels[port_id].handicap_cpu_level = NULL;
    }

    handicap_cpu_level_gobj = omMakeGObjCommon(0U, NULL, 0x1CU, 0x80000000U);
    gMnTrainingPanels[port_id].handicap_cpu_level = handicap_cpu_level_gobj;
    omAddGObjRenderProc(handicap_cpu_level_gobj, func_ovl0_800CCF00, 0x23U, 0x80000000U, -1);
    handicap_cpu_level_gobj->user_data.p = port_id;
    omAddGObjCommonProc(handicap_cpu_level_gobj, mnTrainingSyncHandicapCPULevelDisplay, 1, 1);

    if (gMnTrainingPanels[port_id].player_type == mnPanelTypeHuman)
    {
        handicap_cpu_level_sobj = gcAppendSObjWithSprite(handicap_cpu_level_gobj, GetAddressFromOffset(gMnTrainingFilesArray[0], &FILE_011_HANDICAP_IMAGE_OFFSET));
        handicap_cpu_level_sobj->pos.x = (port_id * 0x45) + 0x23;
        handicap_cpu_level_sobj->user_data.p = NULL;
    }
    else
    {
        handicap_cpu_level_sobj = gcAppendSObjWithSprite(handicap_cpu_level_gobj, GetAddressFromOffset(gMnTrainingFilesArray[0], &FILE_011_CPU_LEVEL_IMAGE_OFFSET));
        handicap_cpu_level_sobj->pos.x = (port_id * 0x45) + 0x22;
        handicap_cpu_level_sobj->user_data.p = 1;
    }

    handicap_cpu_level_sobj->sprite.red = 0xC2;
    handicap_cpu_level_sobj->sprite.green = 0xBD;
    handicap_cpu_level_sobj->sprite.blue = 0xAD;
    handicap_cpu_level_sobj->sprite.attr &= ~SP_FASTCOPY;
    handicap_cpu_level_sobj->sprite.attr |= SP_TRANSPARENT;
    handicap_cpu_level_sobj->pos.y = 201.0F;

    handicap_cpu_level_sobj = gcAppendSObjWithSprite(handicap_cpu_level_gobj, GetAddressFromOffset(gMnTrainingFilesArray[2], &FILE_000_COLON_IMAGE_OFFSET));
    handicap_cpu_level_sobj->sprite.red = 0xFF;
    handicap_cpu_level_sobj->sprite.green = 0xFF;
    handicap_cpu_level_sobj->pos.x = (port_id * 0x45) + 0x3D;
    handicap_cpu_level_sobj->sprite.blue = 0xFF;
    handicap_cpu_level_sobj->sprite.attr &= ~SP_FASTCOPY;
    handicap_cpu_level_sobj->sprite.attr |= SP_TRANSPARENT;
    handicap_cpu_level_sobj->pos.y = 202.0F;
}

// 0x80134830 - Unused?
void func_ovl28_80134830()
{
    return;
}

// 0x80134838 - Unused?
void func_ovl28_80134838()
{
    return;
}

// 0x80134840 - Unused?
void func_ovl28_80134840()
{
    return;
}

// 0x80134848
sb32 mnTrainingSelectChar(GObj* cursor_gobj, s32 port_id, s32 arg2, s32 select_button)
{
    mnCharPanelTraining* panel_info = &gMnTrainingPanels[port_id];

    if (panel_info->cursor_state != mnCursorStateHoldingToken) return FALSE;

    if (gMnTrainingPanels[panel_info->held_port_id].char_id != Ft_Kind_Null) {
        mnTrainingSelectCharWithToken(port_id, select_button);
        panel_info->min_frames_elapsed_until_recall = gMnTrainingFramesElapsed + 0x1E;
        return TRUE;
    }

    func_800269C0(0xA5U);
    return FALSE;
}

// 0x801348F0
void mnTrainingReorderCursorsOnPickup(s32 port_id, s32 token_id)
{
    s32 diplay_orders[4] = dMnTrainingTokenPickupDisplayOrders;
    s32 i, order_id;

    om_g_move_obj_dl(gMnTrainingPanels[port_id].cursor, 0x20U, diplay_orders[3]);
    om_g_move_obj_dl(gMnTrainingPanels[token_id].token, 0x20U, diplay_orders[3] + 1);

    for (i = 0, order_id = 3; i < 4; i++, order_id--)
    {
        if (i != port_id)
        {
            if (gMnTrainingPanels[i].cursor != NULL)
            {
                om_g_move_obj_dl(gMnTrainingPanels[i].cursor, 0x20U, diplay_orders[order_id]);
            }
            if (gMnTrainingPanels[i].held_port_id != -1U)
            {
                om_g_move_obj_dl(gMnTrainingPanels[gMnTrainingPanels[i].held_port_id].token, 0x20U, diplay_orders[order_id] + 1);
            }
        }
    }
}

// 0x80134A4C
void mnTrainingReorderCursorsOnPlacement(s32 port_id, s32 held_token_id) {
    s32 held_orders[4] = dMnTrainingTokenPlaceHeldDisplayOrders, unheld_orders[4] = dMnTrainingTokenPlaceUnheldDisplayOrders;
    s32 *order;
    s32 unused;
    sb32 token_held[4];
    s32 i;

    for (i = 0; i < 4; i++)
    {
        if (gMnTrainingPanels[i].held_port_id == -1)
        {
            token_held[i] = FALSE;
        }
        else token_held[i] = TRUE;
    }

    for (i = 0, order = &unheld_orders[3]; (s32)i < 4; i++)
    {
        if ((i != port_id) && (token_held[i] != FALSE))
        {
            if (gMnTrainingPanels[i].cursor != NULL)
            {
                om_g_move_obj_dl(gMnTrainingPanels[i].cursor, 0x20, *order);
            }
            om_g_move_obj_dl(gMnTrainingPanels[gMnTrainingPanels[i].held_port_id].token, 0x20, *order + 1);
            order--;
        }
    }

    if (port_id != 4)
    {
        om_g_move_obj_dl(gMnTrainingPanels[port_id].cursor, 0x20, *order);
    }

    om_g_move_obj_dl(gMnTrainingPanels[held_token_id].token, 0x21, *order + 1);

    order--;
    for (i = 0; i < 4; i++)
    {
        if ((i != port_id) && (token_held[i] == FALSE))
        {
            if (gMnTrainingPanels[i].cursor != NULL)
            {
                om_g_move_obj_dl(gMnTrainingPanels[i].cursor, 0x20, *order);
            }
            order--;
        }
    }
}

// 0x80134C64
void mnTrainingSetCursorCoordinatesFromToken(s32 port_id)
{
    mnCharPanelTraining* panel_info;
    mnCharPanelTraining* held_token_panel_info;

    panel_info = &gMnTrainingPanels[port_id];
    held_token_panel_info = &gMnTrainingPanels[panel_info->held_port_id];

    panel_info->cursor_pickup_x = SObjGetStruct(held_token_panel_info->token)->pos.x - 11.0F;
    panel_info->cursor_pickup_y = SObjGetStruct(held_token_panel_info->token)->pos.y - -14.0F;
}

// 0x80134CC8
void mnTrainingHandleCursorPickup(s32 port_id, s32 held_port_id)
{
    mnCharPanelTraining* panel_info;
    mnCharPanelTraining* held_token_panel_info;

    held_token_panel_info = &gMnTrainingPanels[held_port_id];
    held_token_panel_info->holder_port_id = port_id;
    held_token_panel_info->is_selected = FALSE;

    panel_info = &gMnTrainingPanels[port_id];
    panel_info->cursor_state = mnCursorStateHoldingToken;
    panel_info->held_port_id = held_port_id;

    held_token_panel_info->unk_0x88 = FALSE;

    mnTrainingSyncFighterDisplay(held_port_id);
    mnTrainingReorderCursorsOnPickup(port_id, held_port_id);
    mnTrainingSetCursorCoordinatesFromToken(port_id);
    mnTrainingRedrawCursor(panel_info->cursor, port_id, panel_info->cursor_state);

    panel_info->unk_0xA0 = TRUE;

    func_800269C0(0x7FU);

    mnTrainingRemoveHandicapCPULevel(held_port_id);
    mnTrainingRemoveWhiteSquare(held_port_id);
    mnTrainingSyncNameAndLogo(held_port_id);
}

// 0x80134D8C
sb32 mnTrainingCheckAndHandleTokenPickup(GObj* cursor_gobj, s32 port_id)
{
    s32 i;

    if ((gMnTrainingFramesElapsed < gMnTrainingPanels[port_id].min_frames_elapsed_until_recall) || (gMnTrainingPanels[port_id].is_recalling != FALSE))
    {
        return FALSE;
    }
    else if (gMnTrainingPanels[port_id].cursor_state != mnCursorStateNotHoldingToken)
    {
        return FALSE;
    }

    for (i = 3; i >=0; i--)
    {
        if (port_id == i)
        {
            if ((gMnTrainingPanels[i].holder_port_id == 4) && (gMnTrainingPanels[i].player_type != 2) && (mnTrainingCheckTokenPickup(cursor_gobj, port_id, i) != 0))
            {
                mnTrainingHandleCursorPickup(port_id, i);

                return TRUE;
            }
        }
        else if ((gMnTrainingPanels[i].holder_port_id == 4) && (gMnTrainingPanels[i].player_type == 1) && (mnTrainingCheckTokenPickup(cursor_gobj, port_id, i) != 0))
        {
            mnTrainingHandleCursorPickup(port_id, i);

            return TRUE;
        }
    }

    return FALSE;
}

// 0x80134EE8
s32 mnTrainingGetFtKindFromTokenPosition(s32 port_id)
{
    SObj* token_sobj = SObjGetStruct(gMnTrainingPanels[port_id].token);
    s32 current_y = (s32) token_sobj->pos.x + 13;
    s32 current_x = (s32) token_sobj->pos.y + 12;
    s32 char_id;
    sb32 is_within_bounds;

    is_within_bounds = (current_x >= 36) && (current_x < 79) ? TRUE : FALSE;

    if (is_within_bounds != FALSE)
    {
        is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

        if (is_within_bounds != FALSE)
        {
            char_id = mnTrainingGetFtKind((s32) (current_y - 25) / 45);

            if ((mnTrainingCheckFighterIsXBoxed(char_id) != FALSE) || (mnTrainingGetIsLocked(char_id) != FALSE))
            {
                return Ft_Kind_Null;
            }

            return char_id;
        }
    }

    is_within_bounds = (current_x >= 79) && (current_x < 122) ? TRUE : FALSE;

    if (is_within_bounds != FALSE)
    {
        is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

        if (is_within_bounds != FALSE)
        {
            char_id = mnTrainingGetFtKind(((s32) (current_y - 25) / 45) + 6);

            if ((mnTrainingCheckFighterIsXBoxed(char_id) != FALSE) || (mnTrainingGetIsLocked(char_id) != FALSE))
            {
                return Ft_Kind_Null;
            }

            return char_id;
        }
    }
    return Ft_Kind_Null;
}

// 0x80135074
void mnTrainingAutoPositionCursor(GObj* cursor_gobj, s32 port_id)
{
    gmController* controller;
    Vec2i coords[3] = dMnTrainingCursorTypePositions2;
    f32 delta;
    sb32 is_within_bounds;

    if (gMnTrainingPanels[port_id].unk_0xA0 != FALSE)
    {
        delta = (gMnTrainingPanels[port_id].cursor_pickup_x - SObjGetStruct(gMnTrainingPanels[port_id].cursor)->pos.x) / 5.0F;

        is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

        if (is_within_bounds != 0)
        {
            SObjGetStruct(gMnTrainingPanels[port_id].cursor)->pos.x = gMnTrainingPanels[port_id].cursor_pickup_x;
        }
        else SObjGetStruct(gMnTrainingPanels[port_id].cursor)->pos.x += delta;

        delta = (gMnTrainingPanels[port_id].cursor_pickup_y - SObjGetStruct(gMnTrainingPanels[port_id].cursor)->pos.y) / 5.0F;

        is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

        if (is_within_bounds != 0)
        {
            SObjGetStruct(gMnTrainingPanels[port_id].cursor)->pos.y = gMnTrainingPanels[port_id].cursor_pickup_y;
        }
        else SObjGetStruct(gMnTrainingPanels[port_id].cursor)->pos.y += delta;

        if ((SObjGetStruct(gMnTrainingPanels[port_id].cursor)->pos.x == gMnTrainingPanels[port_id].cursor_pickup_x) && (SObjGetStruct(gMnTrainingPanels[port_id].cursor)->pos.y == gMnTrainingPanels[port_id].cursor_pickup_y))
        {
            gMnTrainingPanels[port_id].unk_0xA0 = FALSE;
        }

        SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = (f32) ((f32) coords[gMnTrainingPanels[port_id].cursor_state].x + SObjGetStruct(cursor_gobj)->pos.x);
        SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = (f32) ((f32) coords[gMnTrainingPanels[port_id].cursor_state].y + SObjGetStruct(cursor_gobj)->pos.y);
    }
    else if (gMnTrainingPanels[port_id].is_recalling == FALSE)
    {
        controller = &gPlayerControllers[gMnTrainingHumanPanelPort];
        is_within_bounds = (controller->stick_range.x < -8) || (controller->stick_range.x >= 9) ? TRUE : FALSE;

        if (is_within_bounds != 0)
        {
            delta = ((f32) controller->stick_range.x / 20.0F) + SObjGetStruct(cursor_gobj)->pos.x;

            is_within_bounds = (delta >= 0.0F) && (delta <= 280.0F) ? TRUE : FALSE;

            if (is_within_bounds != 0)
            {
                SObjGetStruct(cursor_gobj)->pos.x = delta;
                SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = SObjGetStruct(cursor_gobj)->pos.x + coords[gMnTrainingPanels[port_id].cursor_state].x;
            }
        }

        controller = &gPlayerControllers[gMnTrainingHumanPanelPort];
        is_within_bounds = (controller->stick_range.y < -8) || (controller->stick_range.y >= 9) ? TRUE : FALSE;

        if (is_within_bounds != 0)
        {
            delta = ((f32) controller->stick_range.y / -20.0F) + SObjGetStruct(cursor_gobj)->pos.y;

            is_within_bounds = (delta >= 10.0F) && (delta <= 205.0F) ? TRUE : FALSE;

            if (is_within_bounds != 0)
            {
                SObjGetStruct(cursor_gobj)->pos.y = delta;
                SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = SObjGetStruct(cursor_gobj)->pos.y + coords[gMnTrainingPanels[port_id].cursor_state].y;
            }
        }
    }
}

// 0x80135430
void mnTrainingSyncCursorDisplay(GObj* cursor_gobj, s32 port_id)
{
    mnCharPanelTraining* panel_info = &gMnTrainingPanels[port_id];
    s32 i;

    if ((SObjGetStruct(cursor_gobj)->pos.y > 124.0F) || (SObjGetStruct(cursor_gobj)->pos.y < 38.0F))
    {
        if (panel_info->cursor_state != mnCursorStatePointer)
        {
            mnTrainingRedrawCursor(cursor_gobj, port_id, mnCursorStatePointer);
            panel_info->cursor_state = mnCursorStatePointer;
        }
    }
    else
    {
        if (panel_info->held_port_id == -1)
        {
            if (panel_info->cursor_state != mnCursorStateNotHoldingToken)
            {
                mnTrainingRedrawCursor(cursor_gobj, port_id, mnCursorStateNotHoldingToken);
                panel_info->cursor_state = mnCursorStateNotHoldingToken;
            }
        }
        else
        {
            if (panel_info->cursor_state != mnCursorStateHoldingToken)
            {
                mnTrainingRedrawCursor(cursor_gobj, port_id, mnCursorStateHoldingToken);
                panel_info->cursor_state = mnCursorStateHoldingToken;
            }
        }
    }

    if ((panel_info->cursor_state == mnCursorStatePointer) && (panel_info->is_selected != 0))
    {
        for (i = 0; i < 4; i++)
        {
            if ((gMnTrainingPanels[i].is_selected == 1) && (mnTrainingCheckTokenPickup(cursor_gobj, port_id, i) != 0))
            {
                mnTrainingRedrawCursor(cursor_gobj, port_id, mnCursorStateNotHoldingToken);
                panel_info->cursor_state = mnCursorStateNotHoldingToken;
                return;
            }
        }
    }
}

// 0x801355E0
void mnTrainingTryCostumeChange(s32 port_id, s32 select_button)
{
    u32 costume_id = ftCostume_GetIndexFFA(gMnTrainingPanels[port_id].char_id, select_button);

    if (mnTrainingIsCostumeInUse(gMnTrainingPanels[port_id].char_id, port_id, costume_id) != FALSE)
    {
        func_800269C0(0xA5U);
        return;
    }

    func_ovl2_800E9248(gMnTrainingPanels[port_id].player, costume_id, 0);
    gMnTrainingPanels[port_id].costume_id = costume_id;

    func_800269C0(0xA4U);
}

// 0x80135674
sb32 mnTrainingIsHumanWithCharacterSelected(s32 port_id)
{
    mnCharPanelTraining* panel_info = &gMnTrainingPanels[port_id];

    if ((panel_info->is_selected != FALSE) && (panel_info->held_port_id == -1) && (panel_info->player_type == mnPanelTypeHuman))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x801356D0
void mnTrainingRecallToken(s32 port_id)
{
    gMnTrainingPanels[port_id].unk_0x88 = FALSE;
    gMnTrainingPanels[port_id].is_selected = FALSE;
    gMnTrainingPanels[port_id].is_recalling = TRUE;
    gMnTrainingPanels[port_id].recall_frame_counter = 0;
    gMnTrainingPanels[port_id].recall_start_x = SObjGetStruct(gMnTrainingPanels[port_id].token)->pos.x;
    gMnTrainingPanels[port_id].recall_start_y = SObjGetStruct(gMnTrainingPanels[port_id].token)->pos.y;

    gMnTrainingPanels[port_id].recall_end_x = SObjGetStruct(gMnTrainingPanels[port_id].cursor)->pos.x + 20.0F;

    if (gMnTrainingPanels[port_id].recall_end_x > 280.0F)
    {
        gMnTrainingPanels[port_id].recall_end_x = 280.0F;
    }

    gMnTrainingPanels[port_id].recall_end_y = SObjGetStruct(gMnTrainingPanels[port_id].cursor)->pos.y + -15.0F;

    if (gMnTrainingPanels[port_id].recall_end_y < 10.0F)
    {
        gMnTrainingPanels[port_id].recall_end_y = 10.0F;
    }

    if (gMnTrainingPanels[port_id].recall_end_y < gMnTrainingPanels[port_id].recall_start_y)
    {
        gMnTrainingPanels[port_id].recall_mid_y = gMnTrainingPanels[port_id].recall_end_y - 20.0F;
    }
    else
    {
        gMnTrainingPanels[port_id].recall_mid_y = gMnTrainingPanels[port_id].recall_start_y - 20.0F;
    }
}

// 0x801357CC
void mnTrainingGoBackTo1PMenu()
{
    gSceneData.scene_previous = gSceneData.scene_current;
    gSceneData.scene_current = 8;

    mnTrainingSaveMatchInfo();
    func_80020A74();
    func_800266A0();
    func_80005C74();
}

// 0x80135818
void mnTrainingExitIfBButtonPressed(s32 port_id)
{
    gmController* controller = &gPlayerControllers[port_id];

    if ((gMnTrainingFramesElapsed >= 10) && (controller->button_new & B_BUTTON))
    {
        mnTrainingGoBackTo1PMenu();
    }
}

// 0x8013586C
sb32 mnTrainingCheckBackButtonPress(GObj* cursor_gobj)
{
    f32 current_x, current_y;
    s32 range_check;
    SObj* cursor_sobj;

    cursor_sobj = SObjGetStruct(cursor_gobj);

    current_y = cursor_sobj->pos.y + 3.0F;

    range_check = (current_y < 13.0F) || (current_y > 34.0F) ? TRUE : FALSE;
    if (range_check) return FALSE;

    current_x = cursor_sobj->pos.x + 20.0F;

    range_check = (current_x >= 244.0F) && (current_x <= 292.0F) ? TRUE : FALSE;
    if (range_check) return TRUE;

    return FALSE;
}

// 0x80135934
void mnTrainingHandleButtonPresses(GObj* cursor_gobj)
{
    gmController* controller = &gPlayerControllers[gMnTrainingHumanPanelPort];
    mnCharPanelTraining* panel_info;
    s32 foo, bar, baz;
    s32 port_id = cursor_gobj->user_data.s;

    mnTrainingAutoPositionCursor(cursor_gobj, port_id);
    panel_info = &gMnTrainingPanels[port_id];

    if ((gPlayerControllers[gMnTrainingHumanPanelPort].button_new & A_BUTTON)
        && (mnTrainingSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 4) == FALSE)
        && (mnTrainingCheckAndHandleTokenPickup(cursor_gobj, port_id) == FALSE)
        && (mnTrainingCheckBackButtonPress(cursor_gobj) != FALSE))
    {
            mnTrainingGoBackTo1PMenu();
            func_800269C0(0xA4U);
    }

    if (gMnTrainingDefaultCostumeOnly == FALSE)
    {
        if ((gPlayerControllers[gMnTrainingHumanPanelPort].button_new & U_CBUTTONS)
            && (mnTrainingSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 0) == FALSE)
            && (panel_info->unk_0x88 != FALSE))
        {
            mnTrainingTryCostumeChange(port_id, 0);
        }
        if ((gPlayerControllers[gMnTrainingHumanPanelPort].button_new & R_CBUTTONS)
            && (mnTrainingSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 1) == FALSE)
            && (panel_info->unk_0x88 != FALSE))
        {
            mnTrainingTryCostumeChange(port_id, 1);
        }
        if ((gPlayerControllers[gMnTrainingHumanPanelPort].button_new & D_CBUTTONS)
            && (mnTrainingSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 2) == FALSE)
            && (panel_info->unk_0x88 != FALSE))
        {
            mnTrainingTryCostumeChange(port_id, 2);
        }
        if ((gPlayerControllers[gMnTrainingHumanPanelPort].button_new & L_CBUTTONS)
            && (mnTrainingSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 3) == FALSE)
            && (panel_info->unk_0x88 != FALSE))
        {
            mnTrainingTryCostumeChange(port_id, 3);
        }
    }

    if ((gPlayerControllers[gMnTrainingHumanPanelPort].button_new & B_BUTTON) && (mnTrainingIsHumanWithCharacterSelected(port_id) != FALSE))
    {
        mnTrainingRecallToken(port_id);
    }
    if (panel_info->is_recalling == FALSE)
    {
        mnTrainingExitIfBButtonPressed(port_id);
    }
    if (panel_info->is_recalling == FALSE)
    {
        mnTrainingSyncCursorDisplay(cursor_gobj, port_id);
    }
}

// 0x80135C18
void mnTrainingRedrawToken(GObj* token_gobj, s32 token_index)
{
    SObj* token_sobj;
    f32 current_x, current_y;
    intptr_t token_offsets[5] = dMnTrainingTokenOffsets;

    current_x = SObjGetStruct(token_gobj)->pos.x;
    current_y = SObjGetStruct(token_gobj)->pos.y;

    func_8000B760(token_gobj);

    token_sobj = gcAppendSObjWithSprite(token_gobj, GetAddressFromOffset(gMnTrainingFilesArray[0], token_offsets[token_index]));
    token_sobj->pos.x = current_x;
    token_sobj->pos.y = current_y;
    token_sobj->sprite.attr &= ~SP_FASTCOPY;
    token_sobj->sprite.attr |= SP_TRANSPARENT;
}

// 0x80135CCC
void mnTrainingCenterTokenInPortrait(GObj* token_gobj, s32 ft_kind)
{
    s32 portrait_id = mnTrainingGetPortraitId(ft_kind);

    if (portrait_id >= 6)
    {
        SObjGetStruct(token_gobj)->pos.x = (portrait_id * 45) - (6 * 45) + 36;
        SObjGetStruct(token_gobj)->pos.y = 89.0F;
    }
    else
    {
        SObjGetStruct(token_gobj)->pos.x = (portrait_id * 45) + 36;
        SObjGetStruct(token_gobj)->pos.y = 46.0F;
    }
}

// 0x80135D7C - Unused?
void func_ovl28_80135D7C()
{
    return;
}

// 0x80135D84
void mnTrainingMoveToken(s32 port_id)
{
    mnCharPanelTraining* panel_info = &gMnTrainingPanels[port_id];

    SObjGetStruct(panel_info->token)->pos.x += panel_info->token_x_velocity;
    SObjGetStruct(panel_info->token)->pos.y += panel_info->token_y_velocity;
}

// 0x80135DD8
void mnTrainingSyncTokenAndFighter(GObj* token_gobj)
{
    s32 ft_kind;
    s32 port_id = token_gobj->user_data.s;

    if (gMnTrainingFramesElapsed < 0x1E)
    {
        token_gobj->obj_renderflags = 1;
    }
    else
    {
        if ((gMnTrainingPanels[port_id].player_type == mnPanelTypeCPU)
            || ((gMnTrainingPanels[port_id].player_type == mnPanelTypeHuman)
                && ((gMnTrainingPanels[port_id].cursor_state != mnCursorStatePointer)
                    || (gMnTrainingPanels[port_id].is_selected == TRUE)
                    || (gMnTrainingPanels[port_id].is_recalling == TRUE))))
        {
            token_gobj->obj_renderflags = 0;
        }
        else
        {
            token_gobj->obj_renderflags = 1;
        }
    }

    if ((gMnTrainingPanels[port_id].player_type) != mnPanelTypeNA)
    {
        if ((gMnTrainingPanels[port_id].is_selected == FALSE)
            && (gMnTrainingPanels[port_id].holder_port_id != 4)) {
            if (gMnTrainingPanels[gMnTrainingPanels[port_id].holder_port_id].unk_0xA0 == FALSE) {
                SObjGetStruct(token_gobj)->pos.x = (f32) (SObjGetStruct(gMnTrainingPanels[gMnTrainingPanels[port_id].holder_port_id].cursor)->pos.x + 11.0F);
                SObjGetStruct(token_gobj)->pos.y = (f32) (SObjGetStruct(gMnTrainingPanels[gMnTrainingPanels[port_id].holder_port_id].cursor)->pos.y + -14.0F);
            }
        }
        else {
            mnTrainingMoveToken(port_id);
        }

        ft_kind = mnTrainingGetFtKindFromTokenPosition(port_id);

        if ((gMnTrainingPanels[port_id].player_type == mnPanelTypeCPU)
            && (ft_kind != gMnTrainingPanels[port_id].char_id)
            && (ft_kind == Ft_Kind_Null))
        {
            if (gMnTrainingPanels[port_id].holder_port_id != 4)
            {
                mnTrainingSelectCharWithToken(gMnTrainingPanels[port_id].holder_port_id, 4);
            }
        }

        if ((gMnTrainingPanels[port_id].is_selected == FALSE)
            && (ft_kind != gMnTrainingPanels[port_id].char_id))
        {
            gMnTrainingPanels[port_id].char_id = ft_kind;

            mnTrainingSyncFighterDisplay(port_id);
            mnTrainingSyncNameAndLogo(port_id);
        }
    }
}

// 0x80135FE8
void mnTrainingCreateCursorViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x14, 0x100000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80136088
void mnTrainingCreateDroppedTokenViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x19, 0x200000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80136128
void mnTrainingCreateHandicapCPULevelViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x2B, 0x800000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801361C8
void mnTrainingCreateReadyToFightViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0xA, 0x4000000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80136268
void mnTrainingCreateCursor(s32 port_id)
{
    GObj* cursor_gobj;
    s32 unused;
    intptr_t unk1[4] = dMnTrainingCursorTypeOffsetsUnused;
    s32 unk3[4] = dMnTrainingCursorStartingDisplayOrders;

    cursor_gobj = func_ovl0_800CD050(0, NULL, 0x13, 0x80000000, func_ovl0_800CCF00, 0x20, unk3[port_id], -1, GetAddressFromOffset(gMnTrainingFilesArray[0], &FILE_011_CURSOR_POINTER_IMAGE_OFFSET), 1, mnTrainingHandleButtonPresses, 2);

    gMnTrainingPanels[port_id].cursor = cursor_gobj;
    cursor_gobj->user_data.s = port_id;
    SObjGetStruct(cursor_gobj)->pos.x = 70.0F;
    SObjGetStruct(cursor_gobj)->pos.y = 170.0F;
    SObjGetStruct(cursor_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(cursor_gobj)->sprite.attr |= SP_TRANSPARENT;

    mnTrainingRedrawCursor(cursor_gobj, port_id, 0);
}

// 0x801363C8
void mnTrainingRenderToken(GObj* token_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
    gDPSetEnvColor(gDisplayListHead[0]++, gMnTrainingTokenShinePulseColor & 0xFF, gMnTrainingTokenShinePulseColor & 0xFF, gMnTrainingTokenShinePulseColor & 0xFF, gMnTrainingTokenShinePulseColor & 0xFF);
    gDPSetCombineLERP(gDisplayListHead[0]++, TEXEL0, PRIMITIVE, ENVIRONMENT, PRIMITIVE,  0, 0, 0, TEXEL0,  TEXEL0, PRIMITIVE, ENVIRONMENT, PRIMITIVE,  0, 0, 0, TEXEL0);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    func_ovl0_800CCF74(token_gobj);
}

// 0x801364C0
void mnTrainingCreateToken(s32 port_id)
{
    GObj* token_gobj;
    mnCharPanelTraining* panel_info;
    intptr_t offsets[4] = dMnTrainingTokenOffsetsNoCPU;
    s32 orders1[4] = dMnTrainingTokenStartingDisplayOrders;
    s32 orders2[4] = dMnTrainingTokenHoldingDisplayOrders;

    gMnTrainingPanels[port_id].token = token_gobj = func_ovl0_800CD050(0, NULL, 0x14, 0x80000000, mnTrainingRenderToken, 0x21, orders1[port_id], -1, GetAddressFromOffset(gMnTrainingFilesArray[0], offsets[port_id]), 1, mnTrainingSyncTokenAndFighter, 1);

    panel_info = &gMnTrainingPanels[port_id];

    token_gobj->user_data.s = port_id;

    if (panel_info->player_type == mnPanelTypeCPU)
    {
        mnTrainingRedrawToken(token_gobj, 4);
    }

    if ((panel_info->player_type == mnPanelTypeHuman) && (panel_info->held_port_id != -1))
    {
        om_g_move_obj_dl(panel_info->token, 0x20U, orders2[port_id] + 1);
    }

    if (panel_info->char_id == Ft_Kind_Null)
    {
        SObjGetStruct(token_gobj)->pos.x = 51.0F;
        SObjGetStruct(token_gobj)->pos.y = 161.0F;
    }
    else
    {
        mnTrainingCenterTokenInPortrait(token_gobj, panel_info->char_id);
    }

    SObjGetStruct(token_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(token_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 0x801366D0
f32 getTrainingTokenDistance(s32 port_id_1, s32 port_id_2) {
    f32 delta_x, delta_y;
    SObj* token_sobj_2 = SObjGetStruct(gMnTrainingPanels[port_id_2].token);
    SObj* token_sobj_1 = SObjGetStruct(gMnTrainingPanels[port_id_1].token);

    delta_y = token_sobj_2->pos.y - token_sobj_1->pos.y;
    delta_x = token_sobj_2->pos.x - token_sobj_1->pos.x;

    return sqrtf((delta_y * delta_y) + (delta_x * delta_x));
}

// 0x80136748
void mnTrainingAutopositionOverlappedTokens(s32 port_id_1, s32 port_id_2, f32 unused)
{
    int unused_2;

    if (SObjGetStruct(gMnTrainingPanels[port_id_1].token)->pos.x == SObjGetStruct(gMnTrainingPanels[port_id_2].token)->pos.x)
    {
        gMnTrainingPanels[port_id_1].token_x_velocity += lbRandom_GetIntRange(2) - 1;
    }
    else
    {
        gMnTrainingPanels[port_id_1].token_x_velocity += (-1.0F * (SObjGetStruct(gMnTrainingPanels[port_id_2].token)->pos.x - SObjGetStruct(gMnTrainingPanels[port_id_1].token)->pos.x)) / 10.0F;
    }

    if (SObjGetStruct(gMnTrainingPanels[port_id_1].token)->pos.y == SObjGetStruct(gMnTrainingPanels[port_id_2].token)->pos.y) {
        gMnTrainingPanels[port_id_1].token_y_velocity += lbRandom_GetIntRange(2) - 1;
    }
    else
    {
        gMnTrainingPanels[port_id_1].token_y_velocity += (-1.0F * (SObjGetStruct(gMnTrainingPanels[port_id_2].token)->pos.y - SObjGetStruct(gMnTrainingPanels[port_id_1].token)->pos.y)) / 10.0F;
    }
}

// 0x80136888
void mnTrainingAutopositionTokenFromPortraitEdges(s32 port_id)
{
    s32 portrait_id = mnTrainingGetPortraitId(gMnTrainingPanels[port_id].char_id);
    f32 portrait_edge_x = ((portrait_id >= 6) ? portrait_id - 6 : portrait_id) * 45 + 25;
    f32 portrait_edge_y = ((portrait_id >= 6) ? 1 : 0) * 43 + 36;
    f32 new_pos_x = SObjGetStruct(gMnTrainingPanels[port_id].token)->pos.x + gMnTrainingPanels[port_id].token_x_velocity + 13.0F;
    f32 new_pos_y = SObjGetStruct(gMnTrainingPanels[port_id].token)->pos.y + gMnTrainingPanels[port_id].token_y_velocity + 12.0F;

    if (new_pos_x < (portrait_edge_x + 5.0F))
    {
        gMnTrainingPanels[port_id].token_x_velocity = ((portrait_edge_x + 5.0F) - new_pos_x) / 10.0F;
    }
    if (((portrait_edge_x + 45.0F) - 5.0F) < new_pos_x)
    {
        gMnTrainingPanels[port_id].token_x_velocity = ((new_pos_x - ((portrait_edge_x + 45.0F) - 5.0F)) * -1.0F) / 10.0F;
    }
    if (new_pos_y < (portrait_edge_y + 5.0F))
    {
        gMnTrainingPanels[port_id].token_y_velocity = ((portrait_edge_y + 5.0F) - new_pos_y) / 10.0F;
    }
    if (((portrait_edge_y + 43.0F) - 5.0F) < new_pos_y)
    {
        gMnTrainingPanels[port_id].token_y_velocity = ((new_pos_y - ((portrait_edge_y + 43.0F) - 5.0F)) * -1.0F) / 10.0F;
    }
}

// 0x80136A44
void mnTrainingAutopositionPlacedToken(s32 port_id)
{
    s32 other_port_id;
    f32 distances[4];

    other_port_id = (port_id == gMnTrainingHumanPanelPort) ? gMnTrainingCPUPanelPort : gMnTrainingHumanPanelPort;

    if (port_id != other_port_id)
    {
        if (gMnTrainingPanels[port_id].is_selected != FALSE)
        {
            distances[other_port_id] = getTrainingTokenDistance(port_id, other_port_id);
        }
    }
    else
    {
        distances[other_port_id] = -1.0F;
    }

    gMnTrainingPanels[port_id].token_x_velocity = 0.0F;
    gMnTrainingPanels[port_id].token_y_velocity = 0.0F;

    if (
        (isBetween(distances[other_port_id], 0.0F, 15.0F) != FALSE)
        && (gMnTrainingPanels[port_id].char_id == gMnTrainingPanels[other_port_id].char_id)
        && (gMnTrainingPanels[port_id].char_id != Ft_Kind_Null)
        && (gMnTrainingPanels[other_port_id].is_selected == 1))
    {
        mnTrainingAutopositionOverlappedTokens(port_id, other_port_id, (15.0F -  distances[other_port_id]) / 15.0F);
    }

    mnTrainingAutopositionTokenFromPortraitEdges(port_id);
}

// 0x80136BE0
void mnTrainingAutopositionRecalledToken(s32 port_id)
{
    f32 new_y_velocity, new_x_velocity;

    gMnTrainingPanels[port_id].recall_frame_counter += 1;

    if (gMnTrainingPanels[port_id].recall_frame_counter < 11)
    {
        new_x_velocity = (gMnTrainingPanels[port_id].recall_end_x - gMnTrainingPanels[port_id].recall_start_x) / 10.0F;

        if (gMnTrainingPanels[port_id].recall_frame_counter < 6)
        {
            new_y_velocity = (gMnTrainingPanels[port_id].recall_mid_y - gMnTrainingPanels[port_id].recall_start_y) / 5.0F;
        }
        else
        {
            new_y_velocity = (gMnTrainingPanels[port_id].recall_end_y - gMnTrainingPanels[port_id].recall_mid_y) / 5.0F;
        }

        gMnTrainingPanels[port_id].token_x_velocity = new_x_velocity;
        gMnTrainingPanels[port_id].token_y_velocity = new_y_velocity;
    }
    else if (gMnTrainingPanels[port_id].recall_frame_counter == 11)
    {
        mnTrainingHandleCursorPickup(port_id, port_id);

        gMnTrainingPanels[port_id].token_x_velocity = 0.0F;
        gMnTrainingPanels[port_id].token_y_velocity = 0.0F;
    }
    if (gMnTrainingPanels[port_id].recall_frame_counter == 30)
    {
        gMnTrainingPanels[port_id].is_recalling = FALSE;
    }
}

// 0x80136CCC
void mnTrainingAutopositionToken(s32 port_id)
{
    if (gMnTrainingPanels[gMnTrainingHumanPanelPort].is_recalling != FALSE)
    {
        mnTrainingAutopositionRecalledToken(gMnTrainingHumanPanelPort);
    }
    if (gMnTrainingPanels[gMnTrainingHumanPanelPort].is_selected != FALSE)
    {
        mnTrainingAutopositionPlacedToken(gMnTrainingHumanPanelPort);
    }
    if (gMnTrainingPanels[gMnTrainingCPUPanelPort].is_recalling != FALSE)
    {
        mnTrainingAutopositionRecalledToken(gMnTrainingCPUPanelPort);
    }
    if (gMnTrainingPanels[gMnTrainingCPUPanelPort].is_selected != FALSE)
    {
        mnTrainingAutopositionPlacedToken(gMnTrainingCPUPanelPort);
    }
}

// 0x80136DD8
void mnTrainingCreateTokenAutopositionRoutine() {
    omAddGObjCommonProc(omMakeGObjCommon(0U, NULL, 0x1AU, 0x80000000U), mnTrainingAutopositionToken, 1, 1);
}

// 0x80136E1C
void mnTrainingUpdateTokenShinePulseColor(GObj* unused)
{
    if (gMnTrainingIsTokenShineIncreasing == FALSE)
    {
        gMnTrainingTokenShinePulseColor += 9;

        if (gMnTrainingTokenShinePulseColor >= 0x100)
        {
            gMnTrainingTokenShinePulseColor = 0xFF;
            gMnTrainingIsTokenShineIncreasing = TRUE;
        }
    }
    if (gMnTrainingIsTokenShineIncreasing == TRUE)
    {
        gMnTrainingTokenShinePulseColor -= 9;

        if (gMnTrainingTokenShinePulseColor < 0x80)
        {
            gMnTrainingTokenShinePulseColor = 0x80;
            gMnTrainingIsTokenShineIncreasing = FALSE;
        }
    }
}

// 0x80136E94
void mnTrainingCreateTokenShinePulseRoutine() {
    omAddGObjCommonProc(omMakeGObjCommon(0U, NULL, 0x1AU, 0x80000000U), mnTrainingUpdateTokenShinePulseColor, 1, 1);
}

// 0x80136ED8
void mnTrainingSyncShadeAndCostume(s32 unused) {
    s32 i;
    s32 costume_id;

    for (i = 0; i < 4; i++)
    {
        if ((gMnTrainingPanels[i].char_id != Ft_Kind_Null) && (mnTrainingGetAdditionalSelectedCount(gMnTrainingPanels[i].char_id) == 0))
        {
            costume_id = ftCostume_GetIndexFFA(gMnTrainingPanels[i].char_id, 0);

            if ((costume_id != gMnTrainingPanels[i].costume_id) && (gMnTrainingPanels[i].unk_0x88 == 0))
            {
                func_ovl2_800E9248(gMnTrainingPanels[i].player, costume_id, 0);
                gMnTrainingPanels[i].costume_id = costume_id;
            }
        }
    }
}

// 0x80136F84
void mnTrainingCreateSyncShadeAndCostumeRoutine() {
    omAddGObjCommonProc(omMakeGObjCommon(0U, NULL, 0x1FU, 0x80000000U), mnTrainingSyncShadeAndCostume, 1, 1);
}

// 0x80136FC8
void mnTrainingSyncWhiteCircleSizeAndDisplay(GObj* white_circle_gobj)
{
    s32 portrait_id = white_circle_gobj->user_data.s;
    f32 sizes[12] = dMnTrainingWhiteCircleSizes;

    if ((gMnTrainingPanels[portrait_id].unk_0x88 == 0) && (gMnTrainingPanels[portrait_id].char_id != Ft_Kind_Null))
    {
        white_circle_gobj->obj_renderflags = (white_circle_gobj->obj_renderflags == 1) ? 0 : 1;

        DObjGetStruct(white_circle_gobj)->scale.vec.f.x = sizes[gMnTrainingPanels[portrait_id].char_id];
        DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[gMnTrainingPanels[portrait_id].char_id];
        DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[gMnTrainingPanels[portrait_id].char_id];
    }
    else white_circle_gobj->obj_renderflags = 1;
}

// 0x801370BC
void mnTrainingCreateWhiteCircles()
{
    GObj* white_circle_gobj;
    s32 i;

    for (i = 0; i < 4; i++)
    {
        white_circle_gobj = omMakeGObjCommon(0U, NULL, 0x15U, 0x80000000U);

        func_8000F120(white_circle_gobj, GetAddressFromOffset(gMnTrainingFilesArray[7], &FILE_016_WHITE_CIRCLE_OFFSET_2), 0);

        omAddGObjRenderProc(white_circle_gobj, func_80014768, 9U, 0x80000000U, -1);

        white_circle_gobj->user_data.s = i;

        func_8000F8F4(white_circle_gobj, GetAddressFromOffset(gMnTrainingFilesArray[7], &FILE_016_WHITE_CIRCLE_OFFSET_1));

        omAddGObjCommonProc(white_circle_gobj, mnTrainingSyncWhiteCircleSizeAndDisplay, 1, 1);

        func_8000DF34(white_circle_gobj);

        if (i == gMnTrainingHumanPanelPort)
        {
            DObjGetStruct(white_circle_gobj)->translate.vec.f.x = -830.0f;
            DObjGetStruct(white_circle_gobj)->translate.vec.f.y = -870.0f;
            DObjGetStruct(white_circle_gobj)->translate.vec.f.z = 0.0f;
        }
        else
        {
            DObjGetStruct(white_circle_gobj)->translate.vec.f.x = 830.0f;
            DObjGetStruct(white_circle_gobj)->translate.vec.f.y = -870.0f;
            DObjGetStruct(white_circle_gobj)->translate.vec.f.z = 0.0f;
        }
    }
}

// 0x80137254 - Unused?
void mnTrainingRenderReadyToFightObject()
{
    func_ovl0_800CCF00();
}

// 0x80137274
sb32 mnTrainingIsReadyToFight()
{
    if ((gMnTrainingPanels[gMnTrainingHumanPanelPort].unk_0x88 != 0) && (gMnTrainingPanels[gMnTrainingCPUPanelPort].unk_0x88 != 0)) {
        return TRUE;
    }
    return FALSE;
}

// 0x801372D4
void mnTrainingBlinkIfReadyToFight(GObj* gobj)
{
    if (mnTrainingIsReadyToFight() != FALSE)
    {
        gMnTrainingPressStartFlashTimer += 1;

        if (gMnTrainingPressStartFlashTimer == 0x28)
        {
            gMnTrainingPressStartFlashTimer = 0;
        }

        gobj->obj_renderflags = (gMnTrainingPressStartFlashTimer < 0x1E) ? 0 : 1;
    }
    else
    {
        gobj->obj_renderflags = 1;
        gMnTrainingPressStartFlashTimer = 0;
    }
}

// 0x80137354
void mnTrainingCreateReadyToFightObjects()
{
    GObj* gobj;
    SObj* sobj;

    // Ready to Fight banner
    gobj = omMakeGObjCommon(0U, NULL, 0x20U, 0x80000000U);
    omAddGObjRenderProc(gobj, mnTrainingRenderReadyToFightObject, 0x26U, 0x80000000U, -1);
    omAddGObjCommonProc(gobj, mnTrainingBlinkIfReadyToFight, 1, 1);

    // Ready to Fight banner bg
    sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMnTrainingFilesArray[0], &FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET));
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    sobj->shadow_color.r = 0;
    sobj->shadow_color.g = 0;
    sobj->shadow_color.b = 0;
    sobj->sprite.red = 0xF4;
    sobj->sprite.green = 0x56;
    sobj->sprite.blue = 0x7F;
    sobj->cmt = 0;
    sobj->cms = 0;
    sobj->maskt = 3;
    sobj->masks = 0;
    sobj->lrs = 0x140;
    sobj->lrt = 0x11;
    sobj->pos.x = 0.0f;
    sobj->pos.y = 71.0f;

    // Ready to Fight banner text
    sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMnTrainingFilesArray[0], &FILE_011_READY_TO_FIGHT_IMAGE_OFFSET));
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    sobj->shadow_color.r = 0xFF;
    sobj->shadow_color.g = 0xCA;
    sobj->shadow_color.b = 0x13;
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue = 0x9D;
    sobj->pos.x = 50.0f;
    sobj->pos.y = 76.0f;

    // Press Start indicator
    gobj = omMakeGObjCommon(0U, NULL, 0x16U, 0x80000000U);
    omAddGObjRenderProc(gobj, mnTrainingRenderReadyToFightObject, 0x1CU, 0x80000000U, -1);
    omAddGObjCommonProc(gobj, mnTrainingBlinkIfReadyToFight, 1, 1);

    // "Press"
    sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMnTrainingFilesArray[0], &FILE_011_PRESS_IMAGE_OFFSET));
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    sobj->sprite.red = 0xD6;
    sobj->sprite.green = 0xDD;
    sobj->sprite.blue = 0xC6;
    sobj->pos.x = 133.0f;
    sobj->pos.y = 219.0f;

    // "Start"
    sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMnTrainingFilesArray[0], &FILE_011_START_IMAGE_OFFSET));
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0x56;
    sobj->sprite.blue = 0x92;
    sobj->pos.x = 162.0f;
    sobj->pos.y = 219.0f;
}

// 0x801375D0 - Unused?
void func_ovl28_801375D0()
{
    return;
}

// 0x801375D8
void mnTrainingSaveMatchInfo()
{
    gSceneData.training_human_char_id = gMnTrainingPanels[gMnTrainingHumanPanelPort].char_id;
    gSceneData.training_human_costume_id = gMnTrainingPanels[gMnTrainingHumanPanelPort].costume_id;

    gSceneData.training_cpu_char_id = gMnTrainingPanels[gMnTrainingCPUPanelPort].char_id;
    gSceneData.training_cpu_costume_id = gMnTrainingPanels[gMnTrainingCPUPanelPort].costume_id;
}

// 0x80137638
void mnTrainingDestroyCursorAndTokenProcesses()
{
    if (gMnTrainingPanels[gMnTrainingHumanPanelPort].cursor != NULL)
    {
        func_8000B2EC(gMnTrainingPanels[gMnTrainingHumanPanelPort].cursor->gobjproc);
    }

    if (gMnTrainingPanels[gMnTrainingHumanPanelPort].token != NULL)
    {
        func_8000B2EC(gMnTrainingPanels[gMnTrainingHumanPanelPort].token->gobjproc);
    }

    if (gMnTrainingPanels[gMnTrainingCPUPanelPort].token != NULL)
    {
        func_8000B2EC(gMnTrainingPanels[gMnTrainingCPUPanelPort].token->gobjproc);
    }
}

// 0x80137700
void mnTrainingMain(s32 arg0)
{
    gMnTrainingFramesElapsed += 1;

    if (gMnTrainingFramesElapsed == gMnTrainingMaxFramesElapsed)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = 1;

        mnTrainingSaveMatchInfo();
        func_80005C74();

        return;
    }

    if (func_ovl1_80390B7C() == 0)
    {
        gMnTrainingMaxFramesElapsed = gMnTrainingFramesElapsed + 0x4650;
    }

    if (gMnTrainingIsStartTriggered != FALSE)
    {
        gMnTrainingStartDelayTimer -= 1;

        if (gMnTrainingStartDelayTimer == 0)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 0x15;

            mnTrainingSaveMatchInfo();
            func_80005C74();
        }
    }
    else if ((func_ovl1_8039076C(START_BUTTON) != FALSE) && (gMnTrainingFramesElapsed >= 0x3D))
    {
        if (mnTrainingIsReadyToFight() != FALSE)
        {
            func_800269C0(0x26AU);

            gMnTrainingStartDelayTimer = 0x1E;
            gMnTrainingIsStartTriggered = TRUE;

            mnTrainingDestroyCursorAndTokenProcesses();
            return;
        }

        func_800269C0(0xA5U);
    }
}

// 0x8013784C
void mnTrainingInitPort(s32 port_id)
{
    mnCharPanelTraining* panel_info = &gMnTrainingPanels[port_id];

    panel_info->team_color_button = NULL;
    panel_info->handicap_cpu_level = NULL;
    panel_info->arrows = NULL;
    panel_info->handicap_cpu_level_value = NULL;
    panel_info->white_square = NULL;
    panel_info->p_sfx = NULL;
    panel_info->sfx_id = 0;
    panel_info->player = NULL;

    if (port_id == gMnTrainingHumanPanelPort)
    {
        panel_info->player_type = mnPanelTypeHuman;
        panel_info->holder_port_id = 4;
        panel_info->held_port_id = -1;
        panel_info->char_id = gSceneData.training_human_char_id;
        panel_info->costume_id = gSceneData.training_human_costume_id;
        panel_info->unk_0x88 = TRUE;
        panel_info->is_selected = TRUE;
        panel_info->is_recalling = FALSE;

    }
    else
    {
        panel_info->holder_port_id = 4;
        panel_info->held_port_id = -1;
        panel_info->unk_0x88 = TRUE;
        panel_info->is_selected = TRUE;
        panel_info->is_recalling = FALSE;
    }
}

// 0x80137900
void mnTrainingResetPort(s32 port_id)
{
    mnCharPanelTraining* panel_info = &gMnTrainingPanels[port_id];

    panel_info->team_color_button = NULL;
    panel_info->handicap_cpu_level = NULL;
    panel_info->arrows = NULL;
    panel_info->handicap_cpu_level_value = NULL;
    panel_info->white_square = NULL;
    panel_info->player = NULL;
    panel_info->p_sfx = NULL;
    panel_info->sfx_id = 0;
    panel_info->is_selected = FALSE;
    panel_info->char_id = Ft_Kind_Null;
    panel_info->is_recalling = FALSE;
    panel_info->player_type = mnPanelTypeHuman;
    panel_info->holder_port_id = port_id;
    panel_info->held_port_id = port_id;
}

// 0x80137960
void mnTrainingResetPortToNA(s32 port_id)
{
    mnCharPanelTraining* panel_info = &gMnTrainingPanels[port_id];

    panel_info->team_color_button = NULL;
    panel_info->handicap_cpu_level = NULL;
    panel_info->arrows = NULL;
    panel_info->handicap_cpu_level_value = NULL;
    panel_info->white_square = NULL;
    panel_info->player = NULL;
    panel_info->p_sfx = NULL;
    panel_info->sfx_id = 0;
    panel_info->is_selected = FALSE;
    panel_info->char_id = Ft_Kind_Null;
    panel_info->is_recalling = FALSE;
    panel_info->player_type = mnPanelTypeNA;
    panel_info->holder_port_id = 4;
    panel_info->held_port_id = -1;
}

// 0x801379CC
void mnTrainingLoadMatchInfo()
{
    s32 i;
    s32 ft_kind, costume_id;

    gMnTrainingFramesElapsed = 0;
    gMnTrainingIsStartTriggered = FALSE;
    gMnTrainingMaxFramesElapsed = gMnTrainingFramesElapsed + 0x4650;
    gMnTrainingHumanPanelPort = gSceneData.spgame_player;
    gMnTrainingCPUPanelPort = (gMnTrainingHumanPanelPort == 0) ? 1 : 0;
    gMnTrainingCharacterUnlockedMask = gSaveData.character_mask;

    if (gSceneData.training_human_char_id == Ft_Kind_Null)
    {
        mnTrainingResetPort(gMnTrainingHumanPanelPort);
    }
    else
    {
        mnTrainingInitPort(gMnTrainingHumanPanelPort);
    }

    gMnTrainingPanels[gMnTrainingHumanPanelPort].min_frames_elapsed_until_recall = FALSE;

    ft_kind = gSceneData.training_cpu_char_id;

    if (ft_kind == Ft_Kind_Null)
    {
        do
        {
            do
            {
                ft_kind = lbRandom_GetTimeByteRange(12);
            } while (mnTrainingCheckFighterIsXBoxed(ft_kind) != FALSE);
        } while (mnTrainingGetIsLocked(ft_kind) != FALSE);

        if (mnTrainingIsCostumeInUse(ft_kind, gMnTrainingCPUPanelPort, ftCostume_GetIndexFFA(ft_kind, 0)) != FALSE)
        {
            costume_id = ftCostume_GetIndexFFA(ft_kind, 1);
        } else {
            costume_id = ftCostume_GetIndexFFA(ft_kind, 0);
        }
    }
    else
    {
        costume_id = gSceneData.training_cpu_costume_id;
    }

    gMnTrainingPanels[gMnTrainingCPUPanelPort].char_id = ft_kind;
    gMnTrainingPanels[gMnTrainingCPUPanelPort].costume_id = costume_id;
    gMnTrainingPanels[gMnTrainingCPUPanelPort].player_type = 1;
    mnTrainingInitPort(gMnTrainingCPUPanelPort);

    for(i = 0; i < 4; i++)
    {
        if ((i != gMnTrainingHumanPanelPort) && (i != gMnTrainingCPUPanelPort))
        {
            mnTrainingResetPortToNA(i);
        }
    }
}

// 0x80137BB0
void mnTrainingInitPanel(s32 port_id)
{
    s32 char_id;

    if (port_id == gMnTrainingHumanPanelPort)
    {
        mnTrainingCreateCursor(port_id);
    }
    else
    {
        gMnTrainingPanels[port_id].cursor = NULL;
    }

    mnTrainingCreateToken(port_id);
    mnTrainingCreatePanel(port_id);

    if (gMnTrainingPanels[port_id].is_selected != FALSE)
    {
        char_id = gMnTrainingPanels[port_id].char_id;

        if (char_id != Ft_Kind_Null)
        {
            mnTrainingSpawnFighter(gMnTrainingPanels[port_id].player, port_id, char_id, gMnTrainingPanels[port_id].costume_id);
        }
    }
}

// 0x80137C74
void mnTrainingInitPanels()
{
    mnTrainingInitPanel(gMnTrainingHumanPanelPort);
    mnTrainingInitPanel(gMnTrainingCPUPanelPort);
    mnTrainingUpdatePanels();
}

// 0x80137CAC
void mnTrainingInitCSS() {
    s32 bar, baz;
    RldmSetup rldmSetup;
    f32 foo;
    s32 i;
    s32 j;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (RldmFileNode*) &D_ovl28_801388D8;
    rldmSetup.statusBufSize = 0x78;
    rldmSetup.forceBuf = (RldmFileNode*) &D_ovl28_801388A0;
    rldmSetup.forceBufSize = 7;
    rldm_initialize(&rldmSetup);
    rldm_load_files_into(D_ovl28_80137F60, 8U, gMnTrainingFilesArray, hal_alloc(rldm_bytes_need_to_load(D_ovl28_80137F60, 8U), 0x10U));

    omMakeGObjCommon(0x400U, &mnTrainingMain, 0xFU, 0x80000000U);
    func_8000B9FC(0x10, 0x80000000U, 0x64, 1, 0);
    func_ovl2_80115890();
    efManager_AllocUserData();
    mnTrainingLoadMatchInfo();
    ftManager_AllocFighterData(1U, 4);

    for (i = 0; i < 12; i++)
    {
        ftManager_SetFileDataKind(i);
    }

    for (i = 0; i < 4; i++)
    {
        gMnTrainingPanels[i].anim_heap = hal_alloc(D_ovl2_80130D9C, 0x10U);
    }

    mnTrainingCreatePortraitViewport();
    mnTrainingCreateCursorViewport();
    mnTrainingCreateDroppedTokenViewport();
    mnTrainingCreatePanelViewport();
    mnTrainingCreatePanelDoorsViewport();
    mnTrainingCreateTypeButtonViewport();
    mnTrainingCreateFighterViewport();
    mnTrainingCreateTeamButtonViewPort();
    mnTrainingCreateHandicapCPULevelViewport();
    mnTrainingCreatePortraitBackgroundViewport();
    mnTrainingCreatePortraitWhiteBackgroundViewport();
    mnTrainingCreateReadyToFightViewport();
    mnTrainingCreateBackground();
    mnTrainingCreatePortraits();
    mnTrainingInitPanels();
    mnTrainingDrawTitleAndBack();
    mnTrainingCreateTokenAutopositionRoutine();
    mnTrainingCreateTokenShinePulseRoutine();
    mnTrainingCreateSyncShadeAndCostumeRoutine();
    mnTrainingCreateWhiteCircles();
    mnTrainingCreateReadyToFightObjects();
    func_ovl1_803904E0(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

    if (gSceneData.scene_previous != 0x15)
    {
        func_80020AB4(0, 0xA);
    }

    func_800266A0();
    func_800269C0(0x212U);
}

// training_css_entry
void training_css_entry()
{
    D_ovl28_8013842C.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl28_8013842C);
    D_ovl28_80138448.arena_size = (u32) ((uintptr_t)&lOverlay28ArenaHi - (uintptr_t)&lOverlay28ArenaLo);
    func_800A2698(&D_ovl28_80138448);
}