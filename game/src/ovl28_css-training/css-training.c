#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>
#include <css-training.h>

// ovl28 stuff
extern f32 dMnTrainingPortraitPositionsX[12]; // 0x80137FB0[12];
extern f32 dMnTrainingPortraitVelocities[12]; // 0x80137FE0[12];
extern Vec2f dMnTrainingPortraitPositionsXY[12]; // 0x80138010[12];
extern s32 dMnTrainingFtKindOrder[12]; // 0x80138094[12];
extern s32 dMnTrainingPortraitOrder[12]; // 0x801380C4[12];
extern intptr_t dMnTrainingLockedPortraitOffsets[12]; // 0x801380F4[12];
extern intptr_t dMnTrainingPortraitOffsets[12]; // 0x80138124[12];
extern Vec2f dMnTrainingUnusedPositions[12]; // D_ovl28_80138154[12];
extern intptr_t dMnTrainingLogoOffsets[12]; // D_ovl28_801381B4[12];
extern intptr_t dMnTrainingNameOffsets[12]; // D_ovl28_801381E4[12];
extern intptr_t dMnTrainingPanelLUTOffsets[4]; // D_ovl28_80138214[4];

extern mnCharPanelTraining gMnTrainingPanels[2]; // 0x80138558[2];

extern u16 gMnTrainingCharacterUnlockedMask; //D_ovl28_8013887C;

extern s32 gMnTrainingHumanPanelPort; // D_ovl28_80138894;
extern s32 gMnTrainingCPUPanelPort; //D_ovl28_80138898;

extern s32 gMnTrainingFilesArray[8]; // 0x80138C98[8]
// gMnTrainingFilesArray[0] // 0x80138C98; // file 0x011 pointer
// gMnTrainingFilesArray[1] // 0x80138C9C; // file 0x017 pointer
// gMnTrainingFilesArray[2] // 0x80138CA0; // file 0x000 pointer
// gMnTrainingFilesArray[3] // 0x8013C4A4; // file 0x014 pointer
// gMnTrainingFilesArray[4] // 0x8013C4A8; // file 0x015 pointer
// gMnTrainingFilesArray[5] // 0x8013C4AC; // file 0x012 pointer
// gMnTrainingFilesArray[6] // 0x8013C4B0; // file 0x013 pointer
// gMnTrainingFilesArray[7] // 0x8013C4B4; // file 0x016 pointer

extern intptr_t FILE_013_XBOX_IMAGE_OFFSET; //D_NF_000002B8;
extern intptr_t FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET = 0xF68; // file 0x013 image offset for portrait question mark image
extern intptr_t FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET = 0x24D0; // file 0x013 image offset for portrait bg (fire) image

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

        if (func_ovl28_80133350(gMnTrainingPanels[held_port_id].char_id, held_port_id, costume_id) != FALSE)
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

    func_ovl28_80133A90(gMnTrainingPanels[port_id].cursor, port_id, 2);

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

    portrait_sobj = func_ovl0_800CCFDC(portrait_gobj, (gMnTrainingFilesArray[5] + xbox_image_offset)); // AppendTexture

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
void func_ovl26_80131FC8()
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

    texture_sobj = func_ovl0_800CCFDC(texture_gobj, GetAddressFromOffset(gMnTrainingFilesArray[6], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
    texture_sobj->pos.x = (f32) (((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 0x2D) + 0x19);
    texture_sobj->pos.y = (f32) (((portrait_id >= 6 ? 1 : 0) * 0x2B) + 0x24);

    mnTrainingInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
    texture_gobj->user_data.s = portrait_id;

    // portrait
    texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
    omAddGObjRenderProc(texture_gobj, mnTrainingRenderPortraitWithNoise, 0x1BU, 0x80000000U, -1);
    omAddGObjCommonProc(texture_gobj, mnTrainingSetPortraitX, 1, 1);

    texture_sobj = func_ovl0_800CCFDC(texture_gobj, GetAddressFromOffset(gMnTrainingFilesArray[6], locked_portrait_offsets[mnTrainingGetFtKind(portrait_id)]));
    texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
    texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;

    texture_gobj->user_data.s = portrait_id;
    mnTrainingInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

    // question mark
    texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
    omAddGObjRenderProc(texture_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
    omAddGObjCommonProc(texture_gobj, mnTrainingSetPortraitX, 1, 1);

    texture_sobj = func_ovl0_800CCFDC(texture_gobj, GetAddressFromOffset(gMnTrainingFilesArray[6], &FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET));
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

        texture_sobj = func_ovl0_800CCFDC(portrait_bg_gobj, GetAddressFromOffset(gMnTrainingFilesArray[6], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
        mnTrainingInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

        // portrait
        portrait_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
        omAddGObjRenderProc(portrait_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
        omAddGObjCommonProc(portrait_gobj, mnTrainingSetPortraitX, 1, 1);

        texture_sobj = func_ovl0_800CCFDC(portrait_gobj, GetAddressFromOffset(gMnTrainingFilesArray[6], portrait_offsets[mnTrainingGetFtKind(portrait_id)]));
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
        sobj = func_ovl0_800CCFDC(name_logo_gobj, GetAddressFromOffset(gMnTrainingFilesArray[3], logo_offsets[ft_kind]));
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
        sobj = func_ovl0_800CCFDC(name_logo_gobj, GetAddressFromOffset(gMnTrainingFilesArray[0], name_offsets[ft_kind]));
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

// 0x80132E24

// 0x80133014

// 0x80133140

// 0x801332DC

// 0x80133350

// 0x80133408

// 0x801335F0

// 0x8013361C

// 0x8013367C

// 0x801337BC

// 0x801339A0

// 0x80133A90

// 0x80133CA8

// 0x80133D44

// 0x80133E30

// 0x80133EE0

// 0x80133F68

// 0x80133FB4
//# Maybe start of new file
//# Maybe start of new file

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
