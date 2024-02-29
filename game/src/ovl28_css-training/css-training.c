#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>
#include <css-training.h>

// ovl1 stuff
extern f32 menu_zoom[12]; // D_ovl1_80390D90

// ovl28 stuff
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

extern mnCharPanelTraining gMnTrainingPanels[2]; // 0x80138558[2];

extern GObj* gMnTrainingTitleGObj; // 0x80138870; // title gobj

extern u16 gMnTrainingCharacterUnlockedMask; // 0x8013887C;

extern s32 gMnTrainingHumanPanelPort; // 0x80138894;
extern s32 gMnTrainingCPUPanelPort; // 0x80138898;

extern s32 gMnTrainingFilesArray[8]; // 0x80138C98[8]
// gMnTrainingFilesArray[0] // 0x80138C98; // file 0x011 pointer
// gMnTrainingFilesArray[1] // 0x80138C9C; // file 0x017 pointer
// gMnTrainingFilesArray[2] // 0x80138CA0; // file 0x000 pointer
// gMnTrainingFilesArray[3] // 0x80138CA4; // file 0x014 pointer
// gMnTrainingFilesArray[4] // 0x80138CA8; // file 0x015 pointer
// gMnTrainingFilesArray[5] // 0x80138CAC; // file 0x012 pointer
// gMnTrainingFilesArray[6] // 0x80138CB0; // file 0x013 pointer
// gMnTrainingFilesArray[7] // 0x80138CB4; // file 0x016 pointer

extern intptr_t FILE_011_TYPE_CP_IMAGE_OFFSET = 0xFF8; // file 0x011 image offset for CP type image
extern intptr_t FILE_011_BACK_IMAGE_OFFSET = 0x115C8; // file 0x011 image offset for Back button

extern intptr_t FILE_012_TRAINING_MODE_IMAGE_OFFSET = 0x758; // file 0x012 image offset for Training Mode title image

extern intptr_t FILE_013_XBOX_IMAGE_OFFSET; //D_NF_000002B8;
extern intptr_t FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET = 0xF68; // file 0x013 image offset for portrait question mark image
extern intptr_t FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET = 0x24D0; // file 0x013 image offset for portrait bg (fire) image

extern intptr_t FILE_015_BACKGROUND_IMAGE_OFFSET = 0x440; // file 0x015 image offset for background tile

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

    func_ovl28_80134A4C(port_id, held_port_id);

    gMnTrainingPanels[held_port_id].holder_port_id = 4;
    gMnTrainingPanels[port_id].cursor_state = mnCursorStateNotHoldingToken;

    mnTrainingRedrawCursor(gMnTrainingPanels[port_id].cursor, port_id, 2);

    gMnTrainingPanels[port_id].held_port_id = -1;
    gMnTrainingPanels[held_port_id].unk_0x88 = TRUE;

    func_ovl28_801341B0(port_id, held_port_id);

    func_ovl28_8013405C(held_port_id);
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

    cursor_sobj = func_ovl0_800CCFDC(cursor_gobj, GetAddressFromOffset(gMnTrainingFilesArray[0], cursor_offsets[cursor_state]));
    cursor_sobj->pos.x = current_x;
    cursor_sobj->pos.y = current_y;
    cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
    cursor_sobj->sprite.attr |= SP_TRANSPARENT;

    cursor_sobj = func_ovl0_800CCFDC(cursor_gobj, GetAddressFromOffset(gMnTrainingFilesArray[0], type_offsets[port_id]));
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

// 0x801341B0

// 0x801342B8

// 0x80134340
//# Maybe start of new file

// 0x801345B8

// 0x8013462C

// 0x80134848

// 0x801348F0

// 0x80134A4C

// 0x80134C64

// 0x80134CC8

// 0x80134D8C

// 0x80134EE8

// 0x80135074

// 0x80135430

// 0x801355E0

// 0x80135674

// 0x801356D0

// 0x801357CC

// 0x80135818

// 0x8013586C

// 0x80135934

// 0x80135C18

// 0x80135CCC

// 0x80135D84

// 0x80135DD8

// 0x80135FE8

// 0x80136088

// 0x80136128

// 0x801361C8

// 0x80136268

// 0x801363C8

// 0x801364C0

// 0x801366D0

// 0x80136748

// 0x80136888

// 0x80136A44

// 0x80136BE0

// 0x80136CCC

// 0x80136DD8

// 0x80136E1C

// 0x80136E94

// 0x80136ED8

// 0x80136F84

// 0x80136FC8

// 0x801370BC

// 0x80137254

// 0x80137274

// 0x801372D4

// 0x80137354

// 0x801375D8

// 0x80137638

// 0x80137700

// 0x8013784C

// 0x80137900

// 0x80137960

// 0x801379CC

// 0x80137BB0

// 0x80137C74

// 0x80137CAC

// training_css_entry
