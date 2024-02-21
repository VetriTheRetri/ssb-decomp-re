#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <css-vs.h>

// ovl1 stuff
extern f32 menu_zoom[12]; // D_ovl1_80390D90

// ovl26 stuff

extern f32 gPortraitXCoords[12]; // D_ovl26_8013B3F0
extern f32 gPortraitVelocities[12]; // D_ovl26_8013B420
extern Vec2f gPortraitBackgroundXYCoords[12]; // D_ovl26_8013B450[12];

extern s32 gMnFtKindOrder[12]; // D_ovl26_8013B4D4[12];
extern s32 gMnPortraitOrder[12]; // D_ovl26_8013B4D4[12];
extern s32 gMnLockedPortraitOffsets[12]; // D_ovl26_8013B534[12];
extern s32 gMnPortraitOffsets[12]; // D_ovl26_8013B564[12];
extern s32 gMnTeamButtonOffsets[3]; // D_ovl26_8013B594[3];
extern s32 gMnTypeButtonOffsets[3]; // D_ovl26_8013B5A0[3];
extern Vec2f gMnUnusedCoords[12]; // D_ovl26_8013B5AC[12];
extern s32 gMnLogoOffsets[12]; // D_ovl26_8013B60C[12];
extern s32 gMnNameOffsets[12]; // D_ovl26_8013B63C[12];
extern intptr_t gMnPanelOffsets[4]; // D_ovl26_8013B66C[4];
extern intptr_t gMnPanelCPUOffsets[4]; // D_ovl26_8013B67C[4];
extern GfxColor gMnUnusedColors[4]; // D_ovl26_8013B68C[4]
extern intptr_t gMnTypeButtonOffsetsDuplicate[3]; // D_ovl26_8013B698[3];
extern intptr_t gMnTypeOffsets[4]; // D_ovl26_8013B6A4[4];
extern f32 gMnTypeXOffsets[4]; // D_ovl26_8013B6B4[4];
extern intptr_t gMnTypeOffsetsDuplicate[4]; // D_ovl26_8013B6C4[4];
extern f32 gMnTypeXOffsetsDuplicate[4]; // D_ovl26_8013B6D4[4];
extern intptr_t gMnPanelRenderRoutines[4]; // jtbl_ovl26_8013B6E4[4];
extern s32 gMnPaletteIndexes[4]; // D_ovl26_8013B6F4[4];
extern intptr_t gMnNumberOffsets[10]; // D_ovl26_8013B704[10];
extern s32 mnNumberColorsTime[6]; // D_ovl26_8013B72C[6];
extern s32 mnNumberColorsStock[6]; // D_ovl26_8013B744[6];
extern intptr_t gMnTitleOffsets[2]; // D_ovl26_8013B75C[2]; // title offsets
extern GfxColor gMnTitleColors[2]; // D_ovl26_8013B764[2]; // title colors
extern GfxColorPair gMnCursorTypeColors[4]; // D_ovl26_8013B76C[4]; // cursor type texture colors
extern intptr_t gMnCursorTypeOffsets[4]; // D_ovl26_8013B784[4]; // cursor type texture offsets
extern intptr_t gMnCursorOffsets[4]; // D_ovl26_8013B794[3]; // cursor offsets
extern Vec2i gMnCursorTypeCoords[4]; // D_ovl26_8013B7A0[3]; // x,y offset pairs for cursor type texture
extern s32 gMnPanelColorIndexes[4]; // D_ovl26_8013B7B8[4]; // panel color indexes
extern intptr_t gMnTitleOffsetsDuplicate[2]; // D_ovl26_8013B7C8[2]; // ffa/team battle offsets
extern GfxColor gMnTitleColorsDuplicate[2]; // D_ovl26_8013B7D0[2]; // ffa/team battle colors
extern s32 gMnTeamPaletteIndexes[3]; // D_ovl26_8013B7D8[3]; // team panel color indexes
extern s32 D_ovl26_8013B7E4[3]; // ??
extern s32 gMnTokenIndexes[4]; // D_ovl26_8013B7F0[4]; // token_ids
extern u16 mnAnnouncerNames[12]; // D_ovl26_8013B800[12]; // announcer names
extern intptr_t gMnHandicapCPULevelNumberOffsets[10]; // D_ovl26_8013B818[10];
extern s32 gMnTokenPickupDisplayOrders[4]; // D_ovl26_8013B840[4]; // display orders for cursors on token pickup
extern s32 gMnTokenPlaceHeldDisplayOrders[4]; // D_ovl26_8013B850[4]; // display orders for cursors holding tokens on token placement
extern s32 gMnTokenPlaceUnheldDisplayOrders[4]; // D_ovl26_8013B860[4]; // display orders for cursors not holding tokens on token placement
extern Vec2i gMnCursorTypeCoords2[3]; // D_ovl26_8013B870[3]; // x,y offset pairs for cursor type texture
extern intptr_t gMnTokenOffsets[5]; // D_ovl26_8013B888[5]; // token offsets
extern intptr_t gMnCursorTypeOffsetsUnused[4]; // D_ovl26_8013B89C[4]; // cursor type texture offsets
extern Vec2f gMnCursorStartingCoords[4]; // D_ovl26_8013B8AC[4]; // starting coords for cursors
extern s32 gMnCursorInitialDisplayOrders[4]; // D_ovl26_8013B8CC[4]; // display orders for cursors on initial load

extern f32 gMnFighterYOffset; // D_ovl26_8013BA74;
extern f32 gMnFighterViewportTiltZ; // D_ovl26_8013BA78;

extern mnCharSelPanelVS gPanelVS[GMMATCH_PLAYERS_MAX]; // D_ovl26_8013BA88[GMMATCH_PLAYERS_MAX];
extern GObj* mnPickerGObj; // D_ovl26_8013BD78; // stock/time picker
extern s32 mnTimerValue; // D_ovl26_8013BD7C;
extern s32 mnStockValue; // D_ovl26_8013BD80;
extern s32 D_ovl26_8013BD90[4]; // ??

extern sb32 gIsTeamBattle; // D_ovl26_8013BDA8
extern sb32 gMnRule; // D_ovl26_8013BDAC
extern GObj* gMnTitleGObj; // D_ovl26_8013BDB0; // title gobj
extern s32 gTokenShinePulseColor; // D_ovl26_8013BDB4;

extern u16 gMenuUnlockedMask; // D_ovl26_8013BDBC; // flag indicating which bonus chars are available

extern u32 gMnFramesElapsed; // D_ovl26_8013BDCC; // frames elapsed on CSS

extern s32 gFilesArray[7]; // D_ovl26_8013C4A0[7]
extern s32 gFile011; // D_ovl26_8013C4A0; // file 0x011 pointer
extern s32 gFile000; // D_ovl26_8013C4A4; // file 0x000 pointer
extern s32 gFile014; // D_ovl26_8013C4A8; // file 0x014 pointer
extern s32 gFile015; // D_ovl26_8013C4AC; // file 0x015 pointer
extern s32 gFile012; // D_ovl26_8013C4B0; // file 0x012 pointer
extern s32 gFile013; // D_ovl26_8013C4B4; // file 0x013 pointer
extern s32 gFile016; // D_ovl26_8013C4B8; // file 0x016 pointer

// Offsets
extern intptr_t FILE_000_COLON_IMAGE_OFFSET = 0xDCF0; // file 0x000 image offset for colon

extern intptr_t FILE_011_TYPE_CP_IMAGE_OFFSET = 0xFF8; // file 0x011 image offset for CP type image
extern intptr_t FILE_011_HANDICAP_IMAGE_OFFSET = 0x1108; // file 0x011 image offset for Handicap image
extern intptr_t FILE_011_CPU_LEVEL_IMAGE_OFFSET = 0x1218; // file 0x011 image offset for CPU Level image
extern intptr_t FILE_011_INFINITY_IMAGE_OFFSET = 0x3EF0; // file 0x011 image offset for infinity symbol
extern intptr_t FILE_011_PICKER_TIME_IMAGE_OFFSET = 0x48B0; // file 0x011 image offset for Time picker texture
extern intptr_t FILE_011_PICKER_STOCK_IMAGE_OFFSET = 0x5270; // file 0x011 image offset for Stock picker texture
extern intptr_t FILE_011_CURSOR_POINTER_IMAGE_OFFSET = 0x76E8; // file 0x011 image offset for pointer cursor
extern intptr_t FILE_011_PANEL_DOOR_L_IMAGE_OFFSET = 0xCDB0;
extern intptr_t FILE_011_PANEL_DOOR_R_IMAGE_OFFSET = 0xDFA0;
extern intptr_t FILE_011_ARROW_L_IMAGE_OFFSET = 0xECE8; // file 0x011 image offset for left arrow
extern intptr_t FILE_011_ARROW_R_IMAGE_OFFSET = 0xEDC8; // file 0x011 image offset for right arrow
extern intptr_t FILE_011_PANEL_IMAGE_OFFSET = 0x104B0;
extern intptr_t FILE_011_BACK_IMAGE_OFFSET = 0x115C8; // file 0x011 image offset for

extern s32 FILE_013_XBOX_IMAGE_OFFSET = 0x2B8; // file 0x013 image offset
extern intptr_t FILE_013_WHITE_SQUARE = 0x6F0; // white square
extern s32 FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET = 0xF68; // file 0x013 image offset for portrait question mark image
extern s32 FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET = 0x24D0; // file 0x013 image offset for portrait bg (fire) image

extern intptr_t FILE_015_BACKGROUND_IMAGE_OFFSET = 0x440; // file 0x015 image offset for background tile

// 0x80131B20
void func_ovl26_80131B20(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
    return;
}

// 0x80131B78
s32 mnVS_GetShade(s32 port_id)
{
    sb32 used_shade[GMMATCH_PLAYERS_MAX];
    s32 i;

    if (gIsTeamBattle == FALSE)
    {
        return 0;
    }

    for (i = 0; i < ARRAY_COUNT(used_shade); i++)
    {
        used_shade[i] = 0;
    }

    if (gIsTeamBattle == TRUE)
    {
        for (i = 0; i < ARRAY_COUNT(gPanelVS); i++)
        {
            if (port_id != i)
            {
                if
                (
                    gPanelVS[port_id].char_id == gPanelVS[i].char_id &&
                    gPanelVS[port_id].team == gPanelVS[i].team
                )
                {
                    used_shade[gPanelVS[i].shade] = TRUE;
                }
            }
        }
        for(i = 0; i < ARRAY_COUNT(used_shade); i++)
        {
            if(used_shade[i] == FALSE)
            {
                return i;
            }
        }
    }
    // WARNING: Undefined behavior. If D_ovl26_8013BDA8 is FALSE, returned value is indeterminate.
}

// 0x80131C74
void mnVS_SelectCharWithToken(s32 port_id, s32 select_button)
{
    s32 held_port_id = gPanelVS[port_id].held_port_id, costume_id;

    if (select_button != mnSelect_A)
    {
        costume_id = ftCostume_GetIndexFFA(gPanelVS[held_port_id].char_id, select_button);

        if (mnIsCostumeInUse(gPanelVS[held_port_id].char_id, held_port_id, costume_id) != FALSE)
        {
            func_800269C0(0xA5U);
            return;
        }

        gPanelVS[held_port_id].shade = mnVS_GetShade(held_port_id);
        gPanelVS[held_port_id].costume_id = costume_id;
        func_ovl2_800E9248(gPanelVS[held_port_id].player, costume_id, gPanelVS[held_port_id].shade);
    }

    gPanelVS[held_port_id].is_selected = 1;

    mnReorderCursorsOnPlacement(port_id, held_port_id);

    gPanelVS[held_port_id].unk_0x7C = 4;
    gPanelVS[port_id].cursor_state = 2;

    mnRedrawCursor(gPanelVS[port_id].cursor, port_id, 2);

    gPanelVS[port_id].held_port_id = -1;
    gPanelVS[held_port_id].unk_0x88 = 1;

    mnAnnounceFighter(port_id, held_port_id);

    if ((mnIsHandicap() != FALSE) || (gPanelVS[held_port_id].player_type == 1))
    {
        mnReplaceFighterNameWithHandicapCPULevel(held_port_id);
    }

    mnCreateWhiteSquare(held_port_id);
}

// 0x80131DC4
f32 mnGetNextPortraitX(s32 portrait_id, f32 current_x_position) 
{
    f32 portrait_x_position[12] = gPortraitXCoords,
        portrait_velocity[12] = gPortraitVelocities;

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

// 0x80131ED8
sb32 mnCheckFighterIsXBoxed(s32 ftKind)
{
    return FALSE;
}

// 0x80131EE4
void mnSetPortraitX(GObj *portrait_gobj)
{
    SObj *next_sobj;
    SObj *main_sobj = SObjGetStruct(portrait_gobj);
    f32 new_portrait_x = mnGetNextPortraitX(portrait_gobj->user_data.s, main_sobj->pos.x);

    if (new_portrait_x != -1.0F)
    {
        main_sobj->pos.x = new_portrait_x;
        next_sobj = main_sobj->next;

        if (next_sobj != NULL)
        {
            next_sobj->pos.x = SObjGetStruct(portrait_gobj)->pos.x;
        }
    }
}

// 0x80131F54
void mnInitializePortraitBackgroundPosition(SObj *portrait_bg_sobj, s32 portrait_id)
{
    Vec2f coordinates[12] = gPortraitBackgroundXYCoords;

    portrait_bg_sobj->pos.x = coordinates[portrait_id].x;
    portrait_bg_sobj->pos.y = coordinates[portrait_id].y;
}

// 0x80131FB0
void mnAddRedXBoxToPortrait(GObj* portrait_gobj, s32 portrait_id)
{
    SObj* portrait_sobj = SObjGetStruct(portrait_gobj);
    f32 x = portrait_sobj->pos.x,
        y = portrait_sobj->pos.y;
    s32 xbox_image_offset = &(FILE_013_XBOX_IMAGE_OFFSET);

    portrait_sobj = func_ovl0_800CCFDC(portrait_gobj, (gFile013 + xbox_image_offset)); // AppendTexture

    portrait_sobj->pos.x = x + 4.0F;
    portrait_sobj->pos.y = y + 12.0F;
    portrait_sobj->sprite.attr = portrait_sobj->sprite.attr & ~SP_FASTCOPY;
    portrait_sobj->sprite.attr = portrait_sobj->sprite.attr| SP_TRANSPARENT;
    portrait_sobj->sprite.red = 0xFF;
    portrait_sobj->sprite.green = 0;
}

// 0x80132044
sb32 mgGetIsLocked(s32 char_id)
{
    switch (char_id)
    {
    case Ft_Kind_Ness:
        return (gMenuUnlockedMask & (1 << Ft_Kind_Ness)) ? FALSE : TRUE;

    case Ft_Kind_Purin:
        return (gMenuUnlockedMask & (1 << Ft_Kind_Purin)) ? FALSE : TRUE;

    case Ft_Kind_Captain:
        return (gMenuUnlockedMask & (1 << Ft_Kind_Captain)) ? FALSE : TRUE;

    case Ft_Kind_Luigi:
        return (gMenuUnlockedMask & (1 << Ft_Kind_Luigi)) ? FALSE : TRUE;
    }
    return FALSE;
}

// 0x80132110 - Unused?
void func_ovl26_80132110(void) 
{ 
    return;
}

// 0x80132118
s32 mnGetFtKind(s32 portrait_id)
{
    s32 ftKind_order[12] = gMnFtKindOrder;

    return ftKind_order[portrait_id];
}

// 0x80132168
s32 mnGetPortraitId(s32 ft_kind)
{
    s32 portrait_id_order[DAIRANTOU_CHR_PLAYABLE_MAX] = gMnPortraitOrder;

    return portrait_id_order[ft_kind];
}

// 0x801321B8
void mnRenderPortraitWithNoise(GObj *portrait_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x30, 0x30, 0x30, 0xFF);
    gDPSetCombineLERP(gDisplayListHead[0]++, NOISE, TEXEL0, PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0, NOISE, TEXEL0, PRIMITIVE, TEXEL0,  0, 0, 0, TEXEL0);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    func_ovl0_800CCF74(portrait_gobj);
}

// 0x80132278
void mnCreateLockedPortrait(s32 portrait_id)
{
    GObj* texture_gobj;
    SObj* texture_sobj;
    s32 locked_portrait_offsets[12] = gMnLockedPortraitOffsets;

    // portrait bg (fire)
    texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
    omAddGObjRenderProc(texture_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
    omAddGObjCommonProc(texture_gobj, mnSetPortraitX, 1, 1);

    texture_sobj = func_ovl0_800CCFDC(texture_gobj, gFile013 + (intptr_t)&FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET);
    texture_sobj->pos.x = (f32) (((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 0x2D) + 0x19);
    texture_sobj->pos.y = (f32) (((portrait_id >= 6 ? 1 : 0) * 0x2B) + 0x24);

    mnInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
    texture_gobj->user_data.p = portrait_id;

    // portrait
    texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
    omAddGObjRenderProc(texture_gobj, mnRenderPortraitWithNoise, 0x1BU, 0x80000000U, -1);
    omAddGObjCommonProc(texture_gobj, mnSetPortraitX, 1, 1);

    texture_sobj = func_ovl0_800CCFDC(texture_gobj, (gFile013 + locked_portrait_offsets[mnGetFtKind(portrait_id)]));
    texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
    texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;

    texture_gobj->user_data.p = portrait_id;
    mnInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

    // question mark
    texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
    omAddGObjRenderProc(texture_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
    omAddGObjCommonProc(texture_gobj, mnSetPortraitX, 1, 1);

    texture_sobj = func_ovl0_800CCFDC(texture_gobj, gFile013 + (intptr_t)&FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET);
    texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
    texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;
    texture_sobj->shadow_color.r = 0x5B;
    texture_sobj->shadow_color.g = 0x41;
    texture_sobj->shadow_color.b = 0x33;
    texture_sobj->sprite.red = 0xC4;
    texture_sobj->sprite.green = 0xB9;
    texture_sobj->sprite.blue = 0xA9;

    texture_gobj->user_data.p = portrait_id;
    mnInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
}

// 0x80132520
void mnCreatePortrait(s32 portrait_id)
{
    GObj *portrait_gobj, *portrait_bg_gobj;
    SObj *texture_sobj;
    s32 portrait_offsets[12] = gMnPortraitOffsets;

    // if locked, render locked portrait instead
    if (mgGetIsLocked(mnGetFtKind(portrait_id)))
    {
        mnCreateLockedPortrait(portrait_id);
    }
    else
    {
        // portrait bg (fire)
        portrait_bg_gobj = omMakeGObjCommon(0U, NULL, 0x1DU, 0x80000000U);
        omAddGObjRenderProc(portrait_bg_gobj, func_ovl0_800CCF00, 0x24U, 0x80000000U, -1);
        portrait_bg_gobj->user_data.p = portrait_id;
        omAddGObjCommonProc(portrait_bg_gobj, mnSetPortraitX, 1, 1);

        texture_sobj = func_ovl0_800CCFDC(portrait_bg_gobj, gFile013 + (intptr_t)&FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET);
        mnInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

        // portrait
        portrait_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
        omAddGObjRenderProc(portrait_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
        omAddGObjCommonProc(portrait_gobj, mnSetPortraitX, 1, 1);

        texture_sobj = func_ovl0_800CCFDC(portrait_gobj, (gFile013 + portrait_offsets[mnGetFtKind(portrait_id)]));
        texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
        texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;
        portrait_gobj->user_data.p = portrait_id;

        // this conditionally draws a big red box with an X in it, but this check always fails
        if (mnCheckFighterIsXBoxed(mnGetFtKind(portrait_id)) != FALSE)
        {
            mnAddRedXBoxToPortrait(portrait_gobj, portrait_id);
        }
        mnInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
    }
}

// 0x801326DC
void mnCreatePortraits()
{
    s32 portrait_id;

    for (portrait_id = 0; portrait_id < 0xC; portrait_id++)
    {
        mnCreatePortrait(portrait_id);
    }
}

// 0x8013271C
void mnCreateTeamButton(s32 team_id, s32 port_id)
{
    GObj *team_button_gobj;
    SObj *team_button_sobj;
    s32 team_color_button_offsets[3] = gMnTeamButtonOffsets;

    team_button_gobj = gPanelVS[port_id].team_color_button = omMakeGObjCommon(0U, NULL, 0x1BU, 0x80000000U);
    omAddGObjRenderProc(team_button_gobj, func_ovl0_800CCF00, 0x22U, 0x80000000U, -1);

    team_button_sobj = func_ovl0_800CCFDC(team_button_gobj, gFile011 + team_color_button_offsets[team_id]);
    team_button_sobj->pos.x = (f32) ((port_id * 0x45) + 0x22);
    team_button_sobj->pos.y = 131.0F;
    team_button_sobj->sprite.attr = team_button_sobj->sprite.attr & ~SP_FASTCOPY;
    team_button_sobj->sprite.attr = team_button_sobj->sprite.attr| SP_TRANSPARENT;
}

// 0x80132824
void mnDestroyTeamButton(s32 port_id)
{
    if (gPanelVS[port_id].team_color_button != NULL)
    {
        omEjectGObjCommon(gPanelVS[port_id].team_color_button);
        gPanelVS[port_id].team_color_button = NULL;
    }
}

// 0x80132878
void mnCreateOrReplaceTeamButton(s32 team_id, s32 port_id)
{
    mnDestroyTeamButton(port_id);
    mnCreateTeamButton(team_id, port_id);
}

// 0x801328AC
void mnDestroyTeamButtons()
{
    s32 port_id;

    for (port_id = 0; port_id < ARRAY_COUNT(gPanelVS); port_id++)
    {
        if (gPanelVS[port_id].team_color_button != NULL)
        {
            omEjectGObjCommon(gPanelVS[port_id].team_color_button);
            gPanelVS[port_id].team_color_button = NULL;
        }
    }
}

// 0x80132904
void mnCreateTeamButtons()
{
    s32 panel_id;

    mnDestroyTeamButtons();

    for (panel_id = 0; panel_id < ARRAY_COUNT(gPanelVS); panel_id++)
    {
        mnCreateTeamButton(gPanelVS[panel_id].team, panel_id);
    }
}

// 0x8013295C
void mnRecreateTypeButton(GObj* type_gobj, s32 port_id, s32 type_id)
{
    SObj* type_sobj;
    f32 x = (f32) ((port_id * 0x45) + 0x40),
        y = 131.0F;
    s32 type_button_offsets[3] = gMnTypeButtonOffsets;

    func_8000B760(type_gobj);
    type_sobj = func_ovl0_800CCFDC(type_gobj, gFile011 + type_button_offsets[type_id]);
    type_sobj->pos.x = x;
    type_sobj->pos.y = y;
    type_sobj->sprite.attr = type_sobj->sprite.attr & ~SP_FASTCOPY;
    type_sobj->sprite.attr = type_sobj->sprite.attr | SP_TRANSPARENT;
}

// 0x80132A14
void setNameAndLogo(GObj* name_logo_gobj, s32 port_id, s32 ftKind)
{
    SObj* sobj;
    Vec2f coords[12] = gMnUnusedCoords;
    s32 logo_offsets[12] = gMnLogoOffsets;
    s32 name_offsets[12] = gMnNameOffsets;

    if (ftKind != 0x1C)
    {
        func_8000B760(name_logo_gobj);

        // logo
        sobj = func_ovl0_800CCFDC(name_logo_gobj, gFile014 + logo_offsets[ftKind]);
        sobj->pos.x = (port_id * 0x45) + 0x18;
        sobj->pos.y = 143.0F;
        sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
        sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;

        if (gPanelVS[port_id].player_type == mnPanelTypeHuman)
        {
            sobj->sprite.red = 0x1E;
            sobj->sprite.green = 0x1E;
            sobj->sprite.blue = 0x1E;
        }
        else
        {
            sobj->sprite.red = 0x44;
            sobj->sprite.green = 0x44;
            sobj->sprite.blue = 0x44;
        }

        // name
        sobj = func_ovl0_800CCFDC(name_logo_gobj, gFile011 + name_offsets[ftKind]);
        sobj->pos.x = (port_id * 0x45) + 0x16;
        sobj->pos.y = 201.0F;
        sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
        sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;
    }
}

// 0x80132BF4
void mnAnimatePanelDoors(s32 port_id)
{
    // left door
    SObjGetStruct(gPanelVS[port_id].panel_doors)->pos.x = (f32) ((s32)gPanelVS[port_id].door_offset + port_id * 0x45 - 0x13);

    // right door
    SObjGetStruct(gPanelVS[port_id].panel_doors)->next->pos.x = (f32) (port_id * 0x45 + 0x58 - (s32)gPanelVS[port_id].door_offset);
}

// 0x80132C6C
void mnUpdatePanelDoors(GObj* panel_doors)
{
    s32 port_id = panel_doors->user_data.p;
    s32 delta = 2,
        max = 0x29,
        min = 0;

    if (gPanelVS[port_id].player_type == mnPanelTypeNA)
    {
        if (gPanelVS[port_id].door_offset == delta)
        {
            // left over check
        }

        if (gPanelVS[port_id].door_offset < max)
        {
            gPanelVS[port_id].door_offset += delta;

            if (gPanelVS[port_id].door_offset >= max)
            {
                gPanelVS[port_id].door_offset = max;
                func_800269C0(0xA6U);
            }
            mnAnimatePanelDoors(port_id);
        }
    }
    else
    {
        if (gPanelVS[port_id].door_offset == min)
        {
            // left over check
        }

        if (gPanelVS[port_id].door_offset > min)
        {
            gPanelVS[port_id].door_offset -= delta;

            if (gPanelVS[port_id].door_offset < min)
            {
                gPanelVS[port_id].door_offset = min;
            }
            mnAnimatePanelDoors(port_id);
        }
    }
}

// 0x80132D1C
void mnCreatePortraitViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x46, 0x08000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132DBC
void mnCreatePortraitBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x4B, 0x1000000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132E5C
void mnCreatePortraitWhiteBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x49, 0x2000000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132EFC
void mnCreatePanelDoorsViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x28, 0x20000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132F9C
void mnCreateTypeButtonViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x23, 0x40000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013303C
void mnCreatePanelViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x32, 0x10000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801330DC
void mnCreateTeamButtonViewPort()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x2D, 0x400000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013317C
void mnRenderPanelDoorsP1(GObj panel_doors_gobj)
{
    func_ovl0_800CD1F0(0x16, 0x58, 0x7E, 0xD9);
    func_ovl0_800CCF00(panel_doors_gobj);
    func_ovl0_800CD1F0(0xA, 0x136, 0xA, 0xE6);
}

// 0x801331C8
void mnRenderPanelDoorsP2(GObj* panel_doors_gobj)
{
    func_ovl0_800CD1F0(0x5B, 0x9D, 0x7E, 0xD9);
    func_ovl0_800CCF00(panel_doors_gobj);
    func_ovl0_800CD1F0(0xA, 0x136, 0xA, 0xE6);
}

// 0x80133214
void mnRenderPanelDoorsP3(GObj* panel_doors_gobj)
{
    func_ovl0_800CD1F0(0xA0, 0xE2, 0x7E, 0xD9);
    func_ovl0_800CCF00(panel_doors_gobj);
    func_ovl0_800CD1F0(0xA, 0x136, 0xA, 0xE6);
}

// 0x80133260
void mnRenderPanelDoorsP4(GObj* panel_doors_gobj)
{
    func_ovl0_800CD1F0(0xE5, 0x127, 0x7E, 0xD9);
    func_ovl0_800CCF00(panel_doors_gobj);
    func_ovl0_800CD1F0(0xA, 0x136, 0xA, 0xE6);
}

// 0x801332AC
void mnUpdatePanel(GObj* panel_gobj, s32 color_id, s32 player_type)
{
    SObj* panel_sobj;
    intptr_t panel_offsets[4] = gMnPanelOffsets;
    intptr_t panel_offsets_cpu[4] = gMnPanelCPUOffsets;
    GfxColor colors[4] = gMnUnusedColors;

    panel_sobj = SObjGetStruct(panel_gobj);

    if (player_type == mnPanelTypeHuman)
    {
        SObjGetSprite(panel_sobj)->LUT = GetAddressFromOffset(gFile011, panel_offsets[color_id]);
    }
    else SObjGetSprite(panel_sobj)->LUT = GetAddressFromOffset(gFile011, panel_offsets_cpu[color_id]);
}

// 0x80133378
void mnCreateTypeButton(s32 port_id)
{
    GObj* type_button_gobj;
    intptr_t offsets[3] = gMnTypeButtonOffsetsDuplicate;

    type_button_gobj = func_ovl0_800CD050(0, NULL, 0x18, 0x80000000, func_ovl0_800CCF00, 0x1E, 0x80000000, -1, GetAddressFromOffset(gFile011, offsets[gPanelVS[port_id].player_type]), 1, NULL, 1);

    gPanelVS[port_id].type_button = type_button_gobj;
    SObjGetStruct(type_button_gobj)->pos.x = (f32) ((port_id * 0x45) + 0x40);
    SObjGetStruct(type_button_gobj)->pos.y = 131.0F;
    SObjGetStruct(type_button_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(type_button_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 0x801334A8
void mnCreateTypeImage(s32 port_id)
{
    GObj* type_gobj;
    SObj* type_sobj;
    intptr_t offsets[4] = gMnTypeOffsets;
    f32 floats[4] = gMnTypeXOffsets;

    gPanelVS[port_id].type = type_gobj = omMakeGObjCommon(0U, NULL, 0x16U, 0x80000000U);
    omAddGObjRenderProc(type_gobj, func_ovl0_800CCF00, 0x1CU, 0x80000000U, -1);

    if (gPanelVS[port_id].player_type == mnPanelTypeCPU)
    {
        type_sobj = func_ovl0_800CCFDC(type_gobj, GetAddressFromOffset(gFile011, &FILE_011_TYPE_CP_IMAGE_OFFSET));
        type_sobj->pos.x = (f32) ((port_id * 0x45) + 0x1A);
    }
    else
    {
        type_sobj = func_ovl0_800CCFDC(type_gobj, GetAddressFromOffset(gFile011, offsets[port_id]));
        type_sobj->pos.x = floats[port_id] + (f32) ((port_id * 0x45) + 0x16);
    }
    type_sobj->sprite.attr &= ~SP_FASTCOPY;
    type_sobj->sprite.attr |= SP_TRANSPARENT;
    type_sobj->sprite.red = 0;
    type_sobj->sprite.green = 0;
    type_sobj->sprite.blue = 0;
    type_sobj->pos.y = 131.0F;
}

// 0x8013365C
void mnCreatePanel(s32 port_id)
{
    GObj* temp_gobj;
    SObj* right_door_sobj;

    intptr_t type_offsets[4] = gMnTypeOffsetsDuplicate; // unused
    f32 type_x_offsets[4] = gMnTypeXOffsetsDuplicate; // unused
    intptr_t panelRenderRoutines[4] = gMnPanelRenderRoutines;
    s32 palette_ids[4] = gMnPaletteIndexes;

    s32 start_x;

    // create panel
    temp_gobj = func_ovl0_800CD050(0, NULL, 0x16, 0x80000000, func_ovl0_800CCF00, 0x1C, 0x80000000, -1, GetAddressFromOffset(gFile011, &FILE_011_PANEL_IMAGE_OFFSET), 1, NULL, 1);
    gPanelVS[port_id].panel = temp_gobj;
    start_x = port_id * 0x45;
    SObjGetStruct(temp_gobj)->pos.x = (f32) (start_x + 0x16);
    SObjGetStruct(temp_gobj)->pos.y = 126.0F;
    SObjGetStruct(temp_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(temp_gobj)->sprite.attr |= SP_TRANSPARENT;

    if (gIsTeamBattle == FALSE)
    {
        mnUpdatePanel(temp_gobj, palette_ids[port_id], gPanelVS[port_id].player_type);
    }
    else
    {
        // TODO: team enum - 2 is GREEN here
        mnUpdatePanel(temp_gobj, ((gPanelVS[port_id].team == 2) ? 3 : gPanelVS[port_id].team), gPanelVS[port_id].player_type);
    }

    mnCreateTypeImage(port_id);

    // create panel doors
    temp_gobj = func_ovl0_800CD050(0, NULL, 0x17, 0x80000000, panelRenderRoutines[port_id], 0x1D, 0x80000000, -1, GetAddressFromOffset(gFile011, &FILE_011_PANEL_DOOR_L_IMAGE_OFFSET), 1, mnUpdatePanelDoors, 1);
    temp_gobj->user_data.p = port_id;
    SObjGetStruct(temp_gobj)->pos.x = (f32) (start_x - 0x13);
    SObjGetStruct(temp_gobj)->pos.y = 126.0F;
    SObjGetStruct(temp_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(temp_gobj)->sprite.attr |= SP_TRANSPARENT;
    gPanelVS[port_id].panel_doors = temp_gobj;

    right_door_sobj = func_ovl0_800CCFDC(temp_gobj, GetAddressFromOffset(gFile011, &FILE_011_PANEL_DOOR_R_IMAGE_OFFSET));
    right_door_sobj->pos.x = (f32) (start_x + 0x58);
    right_door_sobj->pos.y = 126.0F;
    right_door_sobj->sprite.attr &= ~SP_FASTCOPY;
    right_door_sobj->sprite.attr |= SP_TRANSPARENT;
    gPanelVS[port_id].door_offset = 0x29;

    mnAnimatePanelDoors(port_id);
    mnCreateTypeButton(port_id);

    // name/logo
    temp_gobj = omMakeGObjCommon(0U, NULL, 0x16U, 0x80000000U);
    gPanelVS[port_id].name_logo = temp_gobj;
    omAddGObjRenderProc(temp_gobj, func_ovl0_800CCF00, 0x1CU, 0x80000000U, -1);

    mnSyncNameAndLogo(port_id);

    if ((mnIsHandicap() != FALSE) || (gPanelVS[port_id].player_type == mnPanelTypeCPU)) {
        mnReplaceFighterNameWithHandicapCPULevel(port_id);
    }
    if (gIsTeamBattle == TRUE) {
        mnCreateTeamButton(gPanelVS[port_id].team, port_id);
    }
}

// 0x80133A1C
s32 mnPow(s32 num, s32 pow)
{
    if (pow == 0) return 1;
    else
    {
        s32 result = num, i = pow;

        if (pow >= 2)
        {
            do result *= num;
            while (--i != 1);
        }

        return result;
    }
}


// 0x80133ABC
void mnSetTextureColors(SObj* sobj, u32 colors[])
{
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    sobj->shadow_color.r = (u8) colors[0];
    sobj->shadow_color.g = (u8) colors[1];
    sobj->shadow_color.b = (u8) colors[2];
    sobj->sprite.red = (u8) colors[3];
    sobj->sprite.green = (u8) colors[4];
    sobj->sprite.blue = (u8) colors[5];
}

// 0x80133B04
s32 mnGetNumberOfDigits(s32 num, s32 maxDigits)
{
    s32 numDigits;

    for (numDigits = maxDigits; numDigits > 0; numDigits--)
    {
        if (mnPow(10, numDigits - 1) != 0 ? num / mnPow(10, numDigits - 1) : 0 != 0) return numDigits;
    }

    return 0;
}

// 0x80133BB0
void mnCreateNumber(GObj* number_gobj, s32 num, f32 x, f32 y, s32 colors[], s32 maxDigits, sb32 pad)
{
    intptr_t number_offsets[10] = gMnNumberOffsets;
    SObj* number_sobj;
    f32 left_x = x;
    s32 place;
    s32 numDigits;
    s32 digit;

    if (num < 0) num = 0;

    number_sobj = func_ovl0_800CCFDC(number_gobj, GetAddressFromOffset(gFile011, number_offsets[num % 10]));
    mnSetTextureColors(number_sobj, colors);
    left_x -= number_sobj->sprite.width;
    number_sobj->pos.x = left_x;
    number_sobj->pos.y = y;

    for
    (
        place = 1, numDigits = (pad != FALSE) ? maxDigits : mnGetNumberOfDigits(num, maxDigits);
        place < numDigits;
        place++, numDigits = (pad != FALSE) ? maxDigits : mnGetNumberOfDigits(num, maxDigits)
    )
    {
        digit = (mnPow(10, place) != 0) ? num / mnPow(10, place) : 0;

        number_sobj = func_ovl0_800CCFDC(number_gobj, GetAddressFromOffset(gFile011, number_offsets[digit % 10]));
        mnSetTextureColors(number_sobj, colors);
        left_x -= (f32) number_sobj->sprite.width;
        number_sobj->pos.x = left_x;
        number_sobj->pos.y = y;
    }
}

// 0x80133E28
void mnDrawTimerValue(s32 num)
{
    s32 colors[6] = mnNumberColorsTime;
    SObj* infinity_sobj;

    while (SObjGetStruct(mnPickerGObj)->next != NULL)
    {
        func_800096EC(SObjGetStruct(mnPickerGObj)->next);
    }

    if (num == 100)
    {
        infinity_sobj = func_ovl0_800CCFDC(mnPickerGObj, GetAddressFromOffset(gFile011, &FILE_011_INFINITY_IMAGE_OFFSET));
        infinity_sobj->pos.x = 194.0F;
        infinity_sobj->pos.y = 24.0F;
        infinity_sobj->shadow_color.r = colors[0];
        infinity_sobj->shadow_color.g = colors[1];
        infinity_sobj->shadow_color.b = colors[2];
        infinity_sobj->sprite.red = colors[3];
        infinity_sobj->sprite.green = colors[4];
        infinity_sobj->sprite.blue = colors[5];
        infinity_sobj->sprite.attr &= ~SP_FASTCOPY;
        infinity_sobj->sprite.attr |= SP_TRANSPARENT;
        return;
    }

    if (num < 10) mnCreateNumber(mnPickerGObj, num, 208.0F, 23.0F, colors, 2, 0);
    else mnCreateNumber(mnPickerGObj, num, 212.0F, 23.0F, colors, 2, 0);
}

// 0x80133FAC
void mnDrawTimerPicker(s32 num)
{
    GObj* picker_gobj;

    if (mnPickerGObj != NULL) omEjectGObjCommon(mnPickerGObj);

    picker_gobj = func_ovl0_800CD050(0, NULL, 0x19, 0x80000000, func_ovl0_800CCF00, 0x1A, 0x80000000, -1, GetAddressFromOffset(gFile011, &FILE_011_PICKER_TIME_IMAGE_OFFSET), 1, NULL, 1);
    mnPickerGObj = picker_gobj;

    SObjGetStruct(picker_gobj)->pos.x = 140.0F;
    SObjGetStruct(picker_gobj)->pos.y = 22.0F;
    SObjGetStruct(picker_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(picker_gobj)->sprite.attr |= SP_TRANSPARENT;

    mnDrawTimerValue(mnTimerValue);
}

// 0x80134094
void mnDrawStockValue(s32 num)
{
    s32 colors[6] = mnNumberColorsStock;

    while (SObjGetStruct(mnPickerGObj)->next != NULL)
    {
        func_800096EC(SObjGetStruct(mnPickerGObj)->next);
    }

    if (num < 10) mnCreateNumber(mnPickerGObj, num, 210.0F, 23.0F, colors, 2, 0);
    else mnCreateNumber(mnPickerGObj, num, 214.0F, 23.0F, colors, 2, 0);
}

// 0x80134198
void mnDrawStockPicker(s32 num)
{
    GObj* picker_gobj;

    if (mnPickerGObj != NULL) omEjectGObjCommon(mnPickerGObj);

    picker_gobj = func_ovl0_800CD050(0, NULL, 0x19, 0x80000000, func_ovl0_800CCF00, 0x1A, 0x80000000, -1, GetAddressFromOffset(gFile011, &FILE_011_PICKER_STOCK_IMAGE_OFFSET), 1, NULL, 1);
    mnPickerGObj = picker_gobj;

    SObjGetStruct(picker_gobj)->pos.x = 140.0F;
    SObjGetStruct(picker_gobj)->pos.y = 22.0F;
    SObjGetStruct(picker_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(picker_gobj)->sprite.attr |= SP_TRANSPARENT;

    mnDrawStockValue(mnStockValue + 1);
}

// 0x80134284
void mnCreateBackground()
{
    GObj* background_gobj;
    SObj* background_sobj;

    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x04000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    background_gobj = omMakeGObjCommon(0U, NULL, 0x11U, 0x80000000U);
    omAddGObjRenderProc(background_gobj, func_ovl0_800CCF00, 0x1AU, 0x80000000U, -1);
    background_sobj = func_ovl0_800CCFDC(background_gobj, GetAddressFromOffset(gFile015, &FILE_015_BACKGROUND_IMAGE_OFFSET));
    background_sobj->cmt = G_TX_WRAP;
    background_sobj->cms = G_TX_WRAP;
    background_sobj->maskt = 6;
    background_sobj->masks = 5;
    background_sobj->lrs = 300;
    background_sobj->lrt = 220;
    background_sobj->pos.x = 10.0F;
    background_sobj->pos.y = 10.0F;
}

// 0x801343B0
void mnDrawTitleAndBack()
{
    GObj* back_gobj;
    GObj* title_gobj;
    void* unused;
    intptr_t title_offsets[2] = gMnTitleOffsets;
    GfxColor title_colors[2] = gMnTitleColors;

    title_gobj = func_ovl0_800CD050(0, NULL, 0x19, 0x80000000, func_ovl0_800CCF00, 0x1A, 0x80000000, -1, GetAddressFromOffset(gFile012, title_offsets[gIsTeamBattle]), 1, NULL, 1);
    SObjGetStruct(title_gobj)->pos.x = 27.0F;
    SObjGetStruct(title_gobj)->pos.y = 24.0F;
    SObjGetStruct(title_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(title_gobj)->sprite.attr |= SP_TRANSPARENT;
    SObjGetStruct(title_gobj)->sprite.red = title_colors[gIsTeamBattle].r;
    SObjGetStruct(title_gobj)->sprite.green = title_colors[gIsTeamBattle].g;
    SObjGetStruct(title_gobj)->sprite.blue = title_colors[gIsTeamBattle].b;
    gMnTitleGObj = title_gobj;

    (gMnRule == GMMATCH_GAMERULE_TIME) ? mnDrawTimerPicker(mnTimerValue) : mnDrawStockPicker(mnStockValue);

    back_gobj = func_ovl0_800CD050(0, NULL, 0x19, 0x80000000, func_ovl0_800CCF00, 0x1A, 0x80000000, -1, GetAddressFromOffset(gFile011, &FILE_011_BACK_IMAGE_OFFSET), 1, NULL, 1);
    SObjGetStruct(back_gobj)->pos.x = 244.0F;
    SObjGetStruct(back_gobj)->pos.y = 23.0F;
    SObjGetStruct(back_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(back_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 0x801345F0
void nop2(void) { /* */ }

// 0x801345F8
void nop3(void) { /* */ }

// 0x80134600
void nop4(void) { /* */ }

// 0x80134608
// Not really, though - it returns [0, 0, 1, 2, 3] for [0, 1, 2, 3, 4] counts
s32 mnGetSelectedCount(s32 ftKind)
{
    s32 count = 0, i;

    for (i = 0; i < GMMATCH_PLAYERS_MAX; i++)
    {
        if (ftKind == gPanelVS[i].char_id) count += 1;
    }

    return (count != 0) ? count - 1 : count;
}

// 0x80134674
sb32 mnIsCostumeInUse(s32 ftKind, s32 port_id, s32 costume_id) {
    s32 i;

    for (i = 0; i < GMMATCH_PLAYERS_MAX; i++)
    {
        if ((port_id != i) && (ftKind == gPanelVS[i].char_id) && (costume_id == gPanelVS[i].costume_id))
        {
            return TRUE;
        }
    }
    return FALSE;
}

// 0x8013473C
// Gets the first costume not in use by another port
u32 mnGetAvailableCostumeFFA(s32 ftKind, s32 port_id)
{
    mnCharSelPanelVS* panel_info;
    s32 i, j, k;
    sb32 some_array[4];

    for (i = 0; i < 4; i++)
    {
        some_array[i] = FALSE;
    }

    for (i = 0; i < 4; i++)
    {
        if (i != port_id)
        {
            panel_info = &gPanelVS[i];

            if (ftKind == panel_info->char_id)
            {
                for (j = 0; j < 4; j++)
                {
                    if (ftCostume_GetIndexFFA(ftKind, j) == panel_info->costume_id)
                    {
                        some_array[j] = TRUE;
                    }
                }
            }
        }
    }

    for (k = 0; k < 4; k++)
    {
        if (some_array[k] == FALSE) return k;
    }
}

// 0x8013487C
s32 mnGetAvailableCostume(s32 ktKind, s32 port_id)
{
    if (gIsTeamBattle == FALSE)
    {
        return ftCostume_GetIndexFFA(ktKind, mnGetAvailableCostumeFFA(ktKind, port_id));
    }
    else if (gIsTeamBattle == TRUE)
    {
        return ftCostume_GetIndexTeam(ktKind, gPanelVS[port_id].team);
    }
}

// 0x801348EC
s32 mnGetSelectedAnimation(u32 ftKind)
{
    switch (ftKind)
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

// 0x8013494C
void mnRotateFighter(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);
    s32 port_id = fp->player;
    mnCharSelPanelVS* panel_info = &gPanelVS[port_id];

    if (panel_info->unk_0x88 == 1)
    {
        if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y < F_DEG_TO_RAD(0.1F))
        {
            if (panel_info->unk_0x8C == 0)
            {
                func_ovl1_803905CC(panel_info->player, mnGetSelectedAnimation(panel_info->char_id));

                panel_info->unk_0x8C = 1;
            }
        }
        else
        {
            DObjGetStruct(fighter_gobj)->rotate.vec.f.y += F_DEG_TO_RAD(20.0F);

            if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > F_DEG_TO_RAD(360.0F))
            {
                DObjGetStruct(fighter_gobj)->rotate.vec.f.y = 0.0F;

                func_ovl1_803905CC(panel_info->player, mnGetSelectedAnimation(panel_info->char_id));

                panel_info->unk_0x8C = 1;
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

// 0x80134A8C
void mnSpawnFighter(GObj* fighter_gobj, s32 port_id, s32 ftKind, s32 costume_id)
{
    f32 initial_y_rotation;
    ftSpawnInfo spawn_info = ftGlobal_SpawnInfo_MainData;

    if (ftKind != 0x1C)
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

        spawn_info.ft_kind = ftKind;
        gPanelVS[port_id].costume_id = spawn_info.costume = costume_id;
        spawn_info.shade = gPanelVS[port_id].shade;
        spawn_info.anim_heap = gPanelVS[port_id].unk_0x34;
        spawn_info.player = port_id;
        fighter_gobj = ftManager_MakeFighter(&spawn_info);

        gPanelVS[port_id].player = fighter_gobj;

        omAddGObjCommonProc(fighter_gobj, mnRotateFighter, 1, 1);

        DObjGetStruct(fighter_gobj)->translate.vec.f.x = (f32) ((port_id * 0x348) - 0x4E2);
        DObjGetStruct(fighter_gobj)->translate.vec.f.y = (f32) gMnFighterYOffset;

        DObjGetStruct(fighter_gobj)->rotate.vec.f.y = initial_y_rotation;

        DObjGetStruct(fighter_gobj)->scale.vec.f.x = menu_zoom[ftKind];
        DObjGetStruct(fighter_gobj)->scale.vec.f.y = menu_zoom[ftKind];
        DObjGetStruct(fighter_gobj)->scale.vec.f.z = menu_zoom[ftKind];

        if (gPanelVS[port_id].player_type == mnPanelTypeCPU)
        {
            ftColor_CheckSetColAnimIndex(fighter_gobj, 1, 0);
        }
    }
}

// 0x80134C64
void mnCreateFighterViewport()
{
    OMCamera *cam = OMCameraGetStruct((GObj*)func_8000B93C(0x401U, NULL, 0x10, 0x80000000U, func_80017EC0, 0x1E, 0x48600, -1, 1, 1, 0, 1, 0));
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    cam->view.tilt.x = 0.0F;
    cam->view.tilt.y = 0.0F;
    cam->view.tilt.z = (f32) gMnFighterViewportTiltZ;
    cam->flags = 4;
    cam->view.pan.x = 0.0F;
    cam->view.pan.y = 0.0F;
    cam->view.pan.z = 0.0F;
    cam->view.unk.x = 0.0F;
    cam->view.unk.z = 0.0F;
    cam->view.unk.y = 1.0F;
}

// 0x80134D54
void mnRedrawCursor(GObj* cursor_gobj, s32 port_id, u32 cursor_state)
{
    SObj* cursor_sobj;
    f32 current_x, current_y;
    GfxColorPair type_colors[4] = gMnCursorTypeColors;
    intptr_t type_offsets[4] = gMnCursorTypeOffsets;
    intptr_t cursor_offsets[3] = gMnCursorOffsets;
    Vec2i type_positions[3] = gMnCursorTypeCoords;

    current_x = SObjGetStruct(cursor_gobj)->pos.x;
    current_y = SObjGetStruct(cursor_gobj)->pos.y;

    func_8000B760(cursor_gobj);

    cursor_sobj = func_ovl0_800CCFDC(cursor_gobj, GetAddressFromOffset(gFile011, cursor_offsets[cursor_state]));
    cursor_sobj->pos.x = current_x;
    cursor_sobj->pos.y = current_y;
    cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
    cursor_sobj->sprite.attr |= SP_TRANSPARENT;

    cursor_sobj = func_ovl0_800CCFDC(cursor_gobj, GetAddressFromOffset(gFile011, type_offsets[port_id]));
    cursor_sobj->pos.x = (f32) SObjGetPrev(cursor_sobj)->pos.x + type_positions[cursor_state].x;
    cursor_sobj->pos.y = (f32) SObjGetPrev(cursor_sobj)->pos.y + type_positions[cursor_state].y;
    cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
    cursor_sobj->sprite.attr |= SP_TRANSPARENT;
    cursor_sobj->sprite.red = type_colors[port_id].prim.r;
    cursor_sobj->sprite.green = type_colors[port_id].prim.g;
    cursor_sobj->sprite.blue = type_colors[port_id].prim.b;
    cursor_sobj->shadow_color.r = type_colors[port_id].env.r;
    cursor_sobj->shadow_color.g = type_colors[port_id].env.g;
    cursor_sobj->shadow_color.b = type_colors[port_id].env.b;
}

// 0x80134F64
sb32 mnCheckPickerRightArrowPress(GObj* cursor_gobj)
{
    f32 current_x, current_y;
    s32 range_check;
    SObj* cursor_sobj;

    cursor_sobj = SObjGetStruct(cursor_gobj);

    current_y = cursor_sobj->pos.y + 3.0F;

    range_check = (current_y < 12.0F) || (current_y > 35.0F) ? TRUE : FALSE;
    if (range_check) return FALSE;

    current_x = cursor_sobj->pos.x + 20.0F;

    range_check = (current_x >= 210.0F) && (current_x <= 230.0F) ? TRUE : FALSE;
    if (range_check) return TRUE;

    return FALSE;
}

// 0x8013502C
s32 mnCheckPickerLeftArrowPress(GObj* cursor_gobj)
{
    f32 current_x, current_y;
    s32 range_check;
    SObj* cursor_sobj;

    cursor_sobj = SObjGetStruct(cursor_gobj);

    current_y = cursor_sobj->pos.y + 3.0F;

    range_check = (current_y < 12.0F) || (current_y > 35.0F) ? TRUE : FALSE;
    if (range_check) return FALSE;

    current_x = cursor_sobj->pos.x + 20.0F;

    range_check = (current_x >= 140.0F) && (current_x <= 160.0F) ? TRUE : FALSE;
    if (range_check) return TRUE;

    return FALSE;
}

// 0x801350F4
void nop5(void) { /* */ }

// 0x801350FC
void mnUpdatePanelAndFighterCostume()
{
    s32 i;
    s32 color_indexes[4] = gMnPanelColorIndexes;

    if (gIsTeamBattle == FALSE)
    {
        for (i = 0; i < 4; i++)
        {
            mnUpdatePanel(gPanelVS[i].panel, color_indexes[i], gPanelVS[i].player_type);
            if (gPanelVS[i].char_id != 0x1C)
            {
                gPanelVS[i].costume_id = ftCostume_GetIndexFFA(gPanelVS[i].char_id, mnGetAvailableCostumeFFA(gPanelVS[i].char_id, i));
                gPanelVS[i].shade = mnVS_GetShade(i);
                func_ovl2_800E9248(gPanelVS[i].player, gPanelVS[i].costume_id, gPanelVS[i].shade);
            }
        }
    }
    if (gIsTeamBattle == TRUE)
    {
        for (i = 0; i < 4; i++)
        {
            mnUpdatePanel(gPanelVS[i].panel, gPanelVS[i].team == 2 ? 3 : gPanelVS[i].team, gPanelVS[i].player_type);
            if (gPanelVS[i].char_id != 0x1C)
            {
                gPanelVS[i].costume_id = ftCostume_GetIndexTeam(gPanelVS[i].char_id, gPanelVS[i].team);
                gPanelVS[i].shade = mnVS_GetShade(i);
                func_ovl2_800E9248(gPanelVS[i].player, gPanelVS[i].costume_id, gPanelVS[i].shade);
            }
        }
    }
}

// 0x80135270
s32 mnCheckFFATeamBattleTogglePress(GObj* cursor_gobj)
{
    f32 current_x, current_y;
    s32 range_check;
    SObj* cursor_sobj;

    cursor_sobj = SObjGetStruct(cursor_gobj);

    current_x = cursor_sobj->pos.x + 20.0F;

    range_check = (current_x >= 27.0F) && (current_x <= 137.0F) ? TRUE : FALSE;

    if (range_check)
    {
        current_y = cursor_sobj->pos.y + 3.0F;

        range_check = (current_y >= 14.0F) && (current_y <= 35.0F) ? TRUE : FALSE;
        if (range_check) return TRUE;
    }
    return FALSE;
}

// 0x80135334
void mnHandleFFATeamBattleTogglePress() {
    GObj* title_gobj;
    SObj* title_sobj;
    int i;
    intptr_t offsets[2] = gMnTitleOffsetsDuplicate;
    GfxColor colors[2] = gMnTitleColorsDuplicate;

    title_gobj = gMnTitleGObj;

    if (gIsTeamBattle == 1) {
        gIsTeamBattle = 0;
    } else {
        gIsTeamBattle = 1;
    }
    func_800266A0();

    func_800269C0(0xA4U);

    if (gIsTeamBattle == 0) func_800269C0(0x200U);
    else func_800269C0(0x20EU);

    func_8000B760(title_gobj);

    title_sobj = func_ovl0_800CCFDC(title_gobj, GetAddressFromOffset(gFile012, offsets[gIsTeamBattle]));
    title_sobj->sprite.attr &= ~SP_FASTCOPY;
    title_sobj->sprite.attr |= SP_TRANSPARENT;
    title_sobj->pos.x = 27.0F;
    title_sobj->pos.y = 24.0F;
    title_sobj->sprite.red = colors[gIsTeamBattle].r;
    title_sobj->sprite.green = colors[gIsTeamBattle].g;
    title_sobj->sprite.blue = colors[gIsTeamBattle].b;

    if (gIsTeamBattle == 1)
    {
        for (i = 0; i < 4; i++)
        {
            if (gPanelVS[i].char_id != 0x1C)
            {
                gPanelVS[i].shade = 4;
            }
        }
    }

    mnUpdatePanelAndFighterCostume();

    if (gIsTeamBattle == 0) mnDestroyTeamButtons();
    else mnCreateTeamButtons();
}

// 0x80135554
s32 mnCheckTeamButtonPress(GObj* cursor_gobj, s32 port_id)
{
    f32 current_x, current_y;
    s32 range_check;
    SObj* cursor_sobj;

    cursor_sobj = SObjGetStruct(cursor_gobj);

    current_x = cursor_sobj->pos.x + 20.0F;

    range_check = (current_x >= port_id * 69 + 34) && (current_x <= port_id * 69 + 58) ? TRUE : FALSE;

    if (range_check)
    {
        current_y = cursor_sobj->pos.y + 3.0F;

        range_check = (current_y >= 131.0F) && (current_y <= 141.0F) ? TRUE : FALSE;
        if (range_check) return TRUE;
    }
    return FALSE;
}

// 0x80135634
sb32 mnCheckAnyTeamButtonPress(GObj* cursor_gobj, s32 cursor_port_id)
{
    s32 port_id;
    s32 color_indexes[3] = gMnTeamPaletteIndexes;
    s32 unknown_unused[3] = D_ovl26_8013B7E4;
    u32 shade;

    if (gIsTeamBattle != TRUE) return FALSE;

    for (port_id = 0; port_id < 4; port_id++)
    {
        if ((gPanelVS[port_id].player_type != 2) && (mnCheckTeamButtonPress(cursor_gobj, port_id) != 0))
        {
            gPanelVS[port_id].team = gPanelVS[port_id].team == 2 ? 0 : gPanelVS[port_id].team + 1;

            mnUpdatePanel(gPanelVS[port_id].panel, color_indexes[gPanelVS[port_id].team], gPanelVS[port_id].player_type);
            mnCreateOrReplaceTeamButton(gPanelVS[port_id].team, port_id);

            if (gPanelVS[port_id].char_id != 0x1C)
            {
                gPanelVS[port_id].costume_id = ftCostume_GetIndexTeam(gPanelVS[port_id].char_id, gPanelVS[port_id].team);

                gPanelVS[port_id].shade = shade = mnVS_GetShade(port_id);
                func_ovl2_800E9248(gPanelVS[port_id].player, gPanelVS[port_id].costume_id, shade);
            }

            func_800269C0(0x9DU);

            return TRUE;
        }
    }
    return FALSE;
}

// 0x801357A4
sb32 mnCheckAnyCPUHandicapArrowPress(GObj* cursor_gobj, s32 cursor_port_id)
{
    s32 port_id;
    u32* target;

    for (port_id = 0; port_id < 4; port_id++)
    {
        target = (gPanelVS[port_id].player_type == 0) ? &gPanelVS[port_id].handicap : &gPanelVS[port_id].cpu_level;

        if (((gPanelVS[port_id].player_type == 1) || ((mnIsHandicapOn() != FALSE) && (gPanelVS[port_id].player_type == 0) && (port_id == cursor_port_id))) && (gPanelVS[port_id].unk_0x88 != 0))
        {
            if (mnCheckCPUHandicapRightArrowPress(cursor_gobj, port_id) != 0)
            {
                if ((s32) *target < 9)
                {
                    func_800269C0(0xA4U);
                    *target += 1;
                    mnDrawHandicapCPULevelValue(port_id);
                }
                return 1;
            }
            if (mnCheckCPUHandicapLeftArrowPress(cursor_gobj, port_id) != 0)
            {
                if ((s32) *target >= 2)
                {
                    func_800269C0(0xA4U);
                    *target -= 1;
                    mnDrawHandicapCPULevelValue(port_id);
                }
                return 1;
            }
        }
    }
    return 0;
}

// 0x801358F8
s32 mnCheckCPUHandicapRightArrowPress(GObj* cursor_gobj, s32 port_id)
{
    f32 current_x, current_y;
    s32 range_check;
    SObj* cursor_sobj;

    cursor_sobj = SObjGetStruct(cursor_gobj);

    current_x = cursor_sobj->pos.x + 20.0F;

    range_check = (current_x >= port_id * 69 + 68) && (current_x <= port_id * 69 + 90) ? TRUE : FALSE;

    if (range_check)
    {
        current_y = cursor_sobj->pos.y + 3.0F;

        range_check = (current_y >= 197.0F) && (current_y <= 216.0F) ? TRUE : FALSE;
        if (range_check) return TRUE;
    }
    return FALSE;
}

// 0x801359D8
s32 mnCheckCPUHandicapLeftArrowPress(GObj* cursor_gobj, s32 port_id)
{
    f32 current_x, current_y;
    s32 range_check;
    SObj* cursor_sobj;

    cursor_sobj = SObjGetStruct(cursor_gobj);

    current_x = cursor_sobj->pos.x + 20.0F;

    range_check = (current_x >= port_id * 69 + 21) && (current_x <= port_id * 69 + 43) ? TRUE : FALSE;

    if (range_check)
    {
        current_y = cursor_sobj->pos.y + 3.0F;

        range_check = (current_y >= 197.0F) && (current_y <= 216.0F) ? TRUE : FALSE;
        if (range_check) return TRUE;
    }
    return FALSE;
}

// 0x80135AB8
s32 mnCheckPlayerTypeButtonPress(GObj* cursor_gobj, s32 port_id)
{
    f32 current_x, current_y;
    s32 range_check;
    SObj* cursor_sobj;

    cursor_sobj = SObjGetStruct(cursor_gobj);

    current_x = cursor_sobj->pos.x + 20.0F;

    range_check = (current_x >= port_id * 69 + 60) && (current_x <= port_id * 69 + 88) ? TRUE : FALSE;

    if (range_check)
    {
        current_y = cursor_sobj->pos.y + 3.0F;

        range_check = (current_y >= 127.0F) && (current_y <= 145.0F) ? TRUE : FALSE;
        if (range_check) return TRUE;
    }
    return FALSE;
}

// 0x80135B98
sb32 mnCheckTokenPickup(GObj* cursor_gobj, s32 cursor_port_id, s32 port_id)
{
    f32 current_x, current_y, token_x, token_y;
    s32 range_check;
    SObj* cursor_sobj = SObjGetStruct(cursor_gobj);
    SObj* token_sobj = SObjGetStruct(gPanelVS[port_id].token);

    current_x = cursor_sobj->pos.x + 25.0F;
    token_x = token_sobj->pos.x;

    range_check = (token_x <= current_x) && (current_x <= token_x + 26.0F) ? TRUE : FALSE;

    if (range_check)
    {
        current_y = cursor_sobj->pos.y + 3.0F;
        token_y = token_sobj->pos.y;

        range_check = (token_y <= current_y) && (current_y <= token_y + 24.0F) ? TRUE : FALSE;
        if (range_check) return TRUE;
    }
    return FALSE;
}

// 0x80135C84
void mnHandlePlayerTypeButtonPress(u32 port_id)
{
    GObj* cursor_gobj;
    s32 not_held = -1;

    switch (gPanelVS[port_id].player_type)
    {
        case mnPanelTypeHuman:
            if (gPanelVS[port_id].held_port_id != not_held)
            {
                gPanelVS[gPanelVS[port_id].held_port_id].unk_0x7C = 4;
                gPanelVS[gPanelVS[port_id].held_port_id].is_selected = 1;
                gPanelVS[gPanelVS[port_id].held_port_id].unk_0x88 = 1;

                mnReorderCursorsOnPlacement(port_id, gPanelVS[port_id].held_port_id);
                mnReplaceFighterNameWithHandicapCPULevel(gPanelVS[port_id].held_port_id);
                mnCreateWhiteSquare(gPanelVS[port_id].held_port_id);
            }

            gPanelVS[port_id].is_selected = 0;
            gPanelVS[port_id].char_id = 0x1C;
            gPanelVS[port_id].unk_0x88 = 0;
            gPanelVS[port_id].unk_0x7C = port_id;
            gPanelVS[port_id].held_port_id = port_id;

            mnReorderCursorsOnPickup(port_id, port_id);

            gPanelVS[port_id].unk_0xA0 = 0;

            if (gPanelVS[port_id].type != NULL)
            {
                omEjectGObjCommon(gPanelVS[port_id].type);
                mnCreateTypeImage(port_id);
            }

            if (gIsTeamBattle == 0)
            {
                mnUpdatePanel(gPanelVS[port_id].panel, port_id, gPanelVS[port_id].player_type);
                return;
            }

            mnUpdatePanel(gPanelVS[port_id].panel, gPanelVS[port_id].team == 2 ? 3 : gPanelVS[port_id].team, gPanelVS[port_id].player_type);
            return;
        case mnPanelTypeCPU:
            if (gPanelVS[port_id].held_port_id != not_held)
            {
                gPanelVS[gPanelVS[port_id].held_port_id].unk_0x7C = 4;
                gPanelVS[gPanelVS[port_id].held_port_id].is_selected = 1;
                gPanelVS[gPanelVS[port_id].held_port_id].unk_0x88 = 1;

                mnReorderCursorsOnPlacement(port_id, gPanelVS[port_id].held_port_id);
                mnReplaceFighterNameWithHandicapCPULevel(gPanelVS[port_id].held_port_id);
                mnCreateWhiteSquare(gPanelVS[port_id].held_port_id);
            }

            gPanelVS[port_id].is_selected = 1;
            gPanelVS[port_id].unk_0x7C = 4;
            gPanelVS[port_id].held_port_id = not_held;

            mnReorderCursorsOnPlacement(4U, port_id);

            gPanelVS[port_id].unk_0x88 = 1;

            if (gPanelVS[port_id].char_id == 0x1C)
            {
                gPanelVS[port_id].char_id = mnSelectRandomFighter(gPanelVS[port_id].token);
            }

            gPanelVS[port_id].unk_0xA0 = 0;
            if (gPanelVS[port_id].type != NULL)
            {
                omEjectGObjCommon(gPanelVS[port_id].type);
                mnCreateTypeImage(port_id);
            }

            if (gIsTeamBattle == 0)
            {
                mnUpdatePanel(gPanelVS[port_id].panel, port_id, gPanelVS[port_id].player_type);
                return;
            }

            mnUpdatePanel(gPanelVS[port_id].panel, gPanelVS[port_id].team == 2 ? 3 : gPanelVS[port_id].team, gPanelVS[port_id].player_type);
            return;
        case mnPanelTypeNA:
            if (gPanelVS[port_id].unk_0x7C != 4)
            {
                gPanelVS[gPanelVS[port_id].unk_0x7C].held_port_id = not_held;
                gPanelVS[gPanelVS[port_id].unk_0x7C].is_selected = 1;
                gPanelVS[gPanelVS[port_id].unk_0x7C].cursor_state = 2;

                cursor_gobj = gPanelVS[gPanelVS[port_id].unk_0x7C].cursor;
                if (cursor_gobj != NULL) {
                    mnRedrawCursor(cursor_gobj, gPanelVS[port_id].unk_0x7C, gPanelVS[gPanelVS[port_id].unk_0x7C].cursor_state);
                }
            }

            if (gPanelVS[port_id].held_port_id != not_held)
            {
                gPanelVS[gPanelVS[port_id].held_port_id].unk_0x7C = 4;
                gPanelVS[gPanelVS[port_id].held_port_id].is_selected = 1;
                gPanelVS[gPanelVS[port_id].held_port_id].unk_0x88 = 1;
                mnReorderCursorsOnPlacement(port_id, gPanelVS[port_id].held_port_id);
                mnReplaceFighterNameWithHandicapCPULevel(gPanelVS[port_id].held_port_id);
                mnCreateWhiteSquare(gPanelVS[port_id].held_port_id);
            }

            gPanelVS[port_id].is_selected = 0;
            gPanelVS[port_id].held_port_id = not_held;
            gPanelVS[port_id].char_id = 0x1C;
            gPanelVS[port_id].unk_0x88 = 0;
            gPanelVS[port_id].unk_0xA0 = 0;

            if (D_ovl26_8013BD90[port_id] != -1)
            {
                gPanelVS[port_id].unk_0x7C = port_id;
            }
            return;
    }
}

// 0x80136038
void mnSyncTokenDisplay(GObj* token_gobj, s32 port_id)
{
    s32 token_ids[4] = gMnTokenIndexes;

    if ((gPanelVS[port_id].cursor_state == 0) && (gPanelVS[port_id].is_selected == FALSE))
    {
        token_gobj->obj_renderflags = 1;
    }
    else token_gobj->obj_renderflags = 0;

    switch (gPanelVS[port_id].player_type)
    {
        case mnPanelTypeHuman:
            gPanelVS[port_id].is_selected = FALSE;
            mnRedrawToken(token_gobj, token_ids[port_id]);
            break;
        case mnPanelTypeCPU:
            mnRedrawToken(token_gobj, 4);
            gPanelVS[port_id].is_selected = TRUE;
            break;
        case mnPanelTypeNA:
            if (FALSE); // grr!

            token_gobj->obj_renderflags = 1;
            break;
    }
    return;
}

// 0x80136128
void mnSyncFighterDisplay(s32 port_id)
{
    GObj* player_gobj;
    s32 var_v0 = 0;

    player_gobj = gPanelVS[port_id].player;

    if (player_gobj != NULL)
    {
        if (gPanelVS[port_id].player_type == mnPanelTypeNA)
        {
            player_gobj->obj_renderflags = 1;
            var_v0 = 1;
        }
        else if ((gPanelVS[port_id].char_id == 0x1C) && (gPanelVS[port_id].is_selected == 0))
        {
            player_gobj->obj_renderflags = 1;
            var_v0 = 1;
        }
    }
    if (var_v0 == 0)
    {
        gPanelVS[port_id].shade = mnVS_GetShade(port_id);
        mnSpawnFighter(gPanelVS[port_id].player, port_id, gPanelVS[port_id].char_id, mnGetAvailableCostume(gPanelVS[port_id].char_id, port_id));
        gPanelVS[port_id].unk_0x8C = 0;
    }
}

// 0x801361F8
void mnUpdateCursor(GObj* cursor_gobj, s32 port_id)
{
    if (cursor_gobj != NULL)
    {
        if (( SObjGetStruct(cursor_gobj)->pos.y > 122.0F) || ( SObjGetStruct(cursor_gobj)->pos.y < 36.0F))
        {
            if (gPanelVS[port_id].cursor_state != 0)
            {
                mnRedrawCursor(cursor_gobj, port_id, 0);
                gPanelVS[port_id].cursor_state = 0;
            }
        }
        else
        {
            if ((gPanelVS[port_id].is_selected == 1) || (gPanelVS[port_id].player_type == 2))
            {
                mnRedrawCursor(cursor_gobj, port_id, 2);
                gPanelVS[port_id].cursor_state = 2;
            }
            else if (gPanelVS[port_id].cursor_state != 1)
            {
                mnRedrawCursor(cursor_gobj, port_id, 1);
                gPanelVS[port_id].cursor_state = 1;
            }
        }
    }
}

// 0x80136300
void mnSyncNameAndLogo(s32 port_id)
{
    mnCharSelPanelVS* panel_info = &gPanelVS[port_id];

    if ((panel_info->player_type == mnPanelTypeNA) || ((panel_info->char_id == 0x1C) && (panel_info->is_selected == 0)))
    {
        panel_info->name_logo->obj_renderflags = 1;
    }
    else {
        panel_info->name_logo->obj_renderflags = 0;
        setNameAndLogo(panel_info->name_logo, port_id, panel_info->char_id);
    }
}

// 0x80136388
void mnRemoveWhiteSquare(s32 port_id)
{
    mnCharSelPanelVS* panel_info = &gPanelVS[port_id];

    if (panel_info->white_square != NULL)
    {
        omEjectGObjCommon(panel_info->white_square);
        panel_info->white_square = NULL;
    }
}

// 0x801363DC
void mnFlashWhiteSquare(GObj* white_square_gobj)
{
    s32 duration = 16;
    s32 frames_to_wait = 1;

    while (TRUE)
    {
        duration--, frames_to_wait--;

        if (duration == 0) mnRemoveWhiteSquare(white_square_gobj->user_data.p);

        if (frames_to_wait == 0)
        {
            frames_to_wait = 1;
            white_square_gobj->obj_renderflags = (white_square_gobj->obj_renderflags == 1) ? 0 : 1;
        }

        stop_current_process(1);
    }
}

// 0x8013647C
void mnCreateWhiteSquare(s32 port_id)
{
    GObj* white_square_gobj;
    SObj* white_square_sobj;
    s32 portrait_id = mnGetPortraitId(gPanelVS[port_id].char_id);

    mnRemoveWhiteSquare(port_id);

    white_square_gobj = omMakeGObjCommon(0U, NULL, 0x1EU, 0x80000000U);
    gPanelVS[port_id].white_square = white_square_gobj;
    omAddGObjRenderProc(white_square_gobj, func_ovl0_800CCF00, 0x25U, 0x80000000U, -1);
    white_square_gobj->user_data.p = port_id;
    omAddGObjCommonProc(white_square_gobj, mnFlashWhiteSquare, 0, 1);

    white_square_sobj = func_ovl0_800CCFDC(white_square_gobj, GetAddressFromOffset(gFile013, &FILE_013_WHITE_SQUARE));
    white_square_sobj->pos.x = (f32) (((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 45) + 26);
    white_square_sobj->pos.y = (f32) (((portrait_id >= 6 ? 1 : 0) * 43) + 37);
}

// 0x801365D0
sb32 mnCheckAndHandlePlayerTypeButtonPress(GObj* cursor_gobj, s32 port_id, u32 panel_id)
{
    s32 player_type;

    if (mnCheckPlayerTypeButtonPress(cursor_gobj, panel_id) != FALSE)
    {
        if (D_ovl26_8013BD90[panel_id] == -1)
        {
            player_type = gPanelVS[panel_id].player_type + 1;

            gPanelVS[panel_id].player_type = (player_type >= 3) ? mnPanelTypeCPU : player_type;
        }
        else
        {
            player_type = gPanelVS[panel_id].player_type + 1;

            gPanelVS[panel_id].player_type = (player_type >= 3) ? mnPanelTypeHuman : player_type;
        }

        mnHandlePlayerTypeButtonPress(panel_id);
        mnRecreateTypeButton(gPanelVS[panel_id].type_button, panel_id, gPanelVS[panel_id].player_type);
        mnSyncTokenDisplay(gPanelVS[panel_id].token, panel_id);
        mnUpdateCursor(gPanelVS[panel_id].cursor, panel_id);
        mnSyncFighterDisplay(panel_id);
        mnSyncNameAndLogo(panel_id);

        switch (gPanelVS[panel_id].player_type)
        {
            case mnPanelTypeHuman:
                gPanelVS[panel_id].unk_0x7C = panel_id;
                func_800269C0(0xA7U);
                break;
            case mnPanelTypeCPU:
                gPanelVS[panel_id].unk_0x7C = 4;
                mnAnnounceFighter(port_id, panel_id);
                mnReplaceFighterNameWithHandicapCPULevel(panel_id);
                mnCreateWhiteSquare(panel_id);
                break;
            case mnPanelTypeNA:
                func_800269C0(0xA7U);
                break;
        }

        func_800269C0(0x9DU);
        return TRUE;
    }
    return FALSE;
}

// 0x8013676C
sb32 mnCheckAndHandleAnyPlayerTypeButtonPress(GObj* cursor_gobj, s32 port_id)
{
    sb32 was_pressed = FALSE;

    if (mnCheckAndHandlePlayerTypeButtonPress(cursor_gobj, port_id, 0) != FALSE) was_pressed = TRUE;
    if (mnCheckAndHandlePlayerTypeButtonPress(cursor_gobj, port_id, 1) != FALSE) was_pressed = TRUE;
    if (mnCheckAndHandlePlayerTypeButtonPress(cursor_gobj, port_id, 2) != FALSE) was_pressed = TRUE;
    if (mnCheckAndHandlePlayerTypeButtonPress(cursor_gobj, port_id, 3) != FALSE) was_pressed = TRUE;

    return was_pressed;
}

// 0x801367F0
void mnAnnounceFighter(s32 port_id, s32 panel_id)
{
    u16 announcer_fgms[12] = gMnAnnouncerNames;

    func_80026738(gPanelVS[port_id].unk_0xA8);

    func_800269C0(0x79U);

    gPanelVS[port_id].unk_0xA8 = func_800269C0(announcer_fgms[gPanelVS[panel_id].char_id]);

    if (gPanelVS[port_id].unk_0xA8 != 0)
    {
        gPanelVS[port_id].unk_0xAC = ((alSoundEffect*)(gPanelVS[port_id].unk_0xA8))->sfx_id;
    }
}

// 0x801368C4
void mnHideFighterName(s32 port_id)
{
    SObj* name_logo_sobj;
    SObj* name_sobj;

    name_logo_sobj = SObjGetStruct(gPanelVS[port_id].name_logo);

    if (name_logo_sobj != NULL)
    {
        name_sobj = SObjGetNext(name_logo_sobj);

        if (name_sobj != NULL)
        {
            name_sobj->sprite.attr |= SP_HIDDEN;
        }
    }
}

// 0x80136910
void mnRemoveHandicapCPULevel(s32 port_id)
{
    if (gPanelVS[port_id].handicap_cpu_level != NULL)
    {
        omEjectGObjCommon(gPanelVS[port_id].handicap_cpu_level);
    }
    if (gPanelVS[port_id].arrows != NULL)
    {
        omEjectGObjCommon(gPanelVS[port_id].arrows);
    }
    if (gPanelVS[port_id].handicap_cpu_level_value != NULL)
    {
        omEjectGObjCommon(gPanelVS[port_id].handicap_cpu_level_value);
    }

    gPanelVS[port_id].handicap_cpu_level = NULL;
    gPanelVS[port_id].arrows = NULL;
    gPanelVS[port_id].handicap_cpu_level_value = NULL;
}

// 0x80136998
SObj* mnGetArrowSObj(GObj* arrow_gobj, s32 direction)
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

// 0x801369E4
void mnSyncAndBlinkArrows(GObj* arrow_gobj)
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
            arrow_gobj->obj_renderflags = arrow_gobj->obj_renderflags == GOBJ_RENDERFLAG_HIDDEN ? GOBJ_RENDERFLAG_NONE : GOBJ_RENDERFLAG_HIDDEN;
        }

        value = (gPanelVS[port_id].player_type == 0) ? gPanelVS[port_id].handicap : gPanelVS[port_id].cpu_level;

        if (value == 1)
        {
            arrow_sobj = mnGetArrowSObj(arrow_gobj, 0);

            if (arrow_sobj != NULL)
            {
                func_800096EC(arrow_sobj);
            }
        }
        else if (mnGetArrowSObj(arrow_gobj, 0) == NULL)
        {
            arrow_sobj = func_ovl0_800CCFDC(arrow_gobj, GetAddressFromOffset(gFile011, &FILE_011_ARROW_L_IMAGE_OFFSET));
            arrow_sobj->pos.x = (port_id * 0x45) + 0x19;
            arrow_sobj->pos.y = 201.0F;
            arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
            arrow_sobj->sprite.attr |= SP_TRANSPARENT;
            arrow_sobj->user_data.s = 0;
        }

        if (value == 9)
        {
            arrow_sobj = mnGetArrowSObj(arrow_gobj, 1);

            if (arrow_sobj != NULL)
            {
                func_800096EC(arrow_sobj);
            }
        }
        else if (mnGetArrowSObj(arrow_gobj, 1) == NULL)
        {
            arrow_sobj = func_ovl0_800CCFDC(arrow_gobj, GetAddressFromOffset(gFile011, &FILE_011_ARROW_R_IMAGE_OFFSET));
            arrow_sobj->pos.x = (port_id * 0x45) + 0x4F;
            arrow_sobj->pos.y = 201.0F;
            arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
            arrow_sobj->sprite.attr |= SP_TRANSPARENT;
            arrow_sobj->user_data.s = 1;
        }
        stop_current_process(1);
    }
}

// 0x80136C18
void mnSyncHandicapCPULevelDisplay(GObj* handicap_cpu_level_gobj)
{
    s32 port_id = handicap_cpu_level_gobj->user_data.p;

    if (gPanelVS[port_id].unk_0x88 == 0)
    {
        mnRemoveHandicapCPULevel(port_id);
    }
    else if (SObjGetStruct(handicap_cpu_level_gobj)->user_data.s != gPanelVS[port_id].player_type)
    {
        mnDrawHandicapCPULevel(port_id);
    }
}

// 0x80136C8C
void mnDrawHandicapCPULevel(s32 port_id)
{
    GObj* handicap_cpu_level_gobj;
    SObj* handicap_cpu_level_sobj;

    if (gPanelVS[port_id].handicap_cpu_level != NULL)
    {
        omEjectGObjCommon(gPanelVS[port_id].handicap_cpu_level);
        gPanelVS[port_id].handicap_cpu_level = NULL;
    }

    handicap_cpu_level_gobj = omMakeGObjCommon(0U, NULL, 0x1CU, 0x80000000U);
    gPanelVS[port_id].handicap_cpu_level = handicap_cpu_level_gobj;
    omAddGObjRenderProc(handicap_cpu_level_gobj, func_ovl0_800CCF00, 0x23U, 0x80000000U, -1);
    handicap_cpu_level_gobj->user_data.p = port_id;
    omAddGObjCommonProc(handicap_cpu_level_gobj, mnSyncHandicapCPULevelDisplay, 1, 1);

    if (gPanelVS[port_id].player_type == 0)
    {
        handicap_cpu_level_sobj = func_ovl0_800CCFDC(handicap_cpu_level_gobj, GetAddressFromOffset(gFilesArray[0], &FILE_011_HANDICAP_IMAGE_OFFSET));
        handicap_cpu_level_sobj->pos.x = (port_id * 0x45) + 0x23;
        handicap_cpu_level_sobj->user_data.p = NULL;
    }
    else
    {
        handicap_cpu_level_sobj = func_ovl0_800CCFDC(handicap_cpu_level_gobj, GetAddressFromOffset(gFilesArray[0], &FILE_011_CPU_LEVEL_IMAGE_OFFSET));
        handicap_cpu_level_sobj->pos.x = (port_id * 0x45) + 0x22;
        handicap_cpu_level_sobj->user_data.p = 1;
    }

    handicap_cpu_level_sobj->sprite.red = 0xC2;
    handicap_cpu_level_sobj->sprite.green = 0xBD;
    handicap_cpu_level_sobj->sprite.blue = 0xAD;
    handicap_cpu_level_sobj->sprite.attr &= ~SP_FASTCOPY;
    handicap_cpu_level_sobj->sprite.attr |= SP_TRANSPARENT;
    handicap_cpu_level_sobj->pos.y = 201.0F;

    handicap_cpu_level_sobj = func_ovl0_800CCFDC(handicap_cpu_level_gobj, GetAddressFromOffset(gFilesArray[1], &FILE_000_COLON_IMAGE_OFFSET));
    handicap_cpu_level_sobj->sprite.red = 0xFF;
    handicap_cpu_level_sobj->sprite.green = 0xFF;
    handicap_cpu_level_sobj->pos.x = (port_id * 0x45) + 0x3D;
    handicap_cpu_level_sobj->sprite.blue = 0xFF;
    handicap_cpu_level_sobj->sprite.attr &= ~SP_FASTCOPY;
    handicap_cpu_level_sobj->sprite.attr |= SP_TRANSPARENT;
    handicap_cpu_level_sobj->pos.y = 202.0F;
}

// 0x80136E90
void mnDrawHandicapCPULevelValue(s32 port_id)
{
    intptr_t offsets[10] = gMnHandicapCPULevelNumberOffsets;
    GObj* handicap_cpu_level_gobj;
    SObj* handicap_cpu_level_sobj;
    u32 value = (gPanelVS[port_id].player_type == 0) ? gPanelVS[port_id].handicap : gPanelVS[port_id].cpu_level;

    if (gPanelVS[port_id].handicap_cpu_level_value != NULL)
    {
        omEjectGObjCommon(gPanelVS[port_id].handicap_cpu_level_value);
        gPanelVS[port_id].handicap_cpu_level_value = NULL;
    }

    handicap_cpu_level_gobj = omMakeGObjCommon(0U, NULL, 0x1CU, 0x80000000U);
    gPanelVS[port_id].handicap_cpu_level_value = handicap_cpu_level_gobj;
    omAddGObjRenderProc(handicap_cpu_level_gobj, func_ovl0_800CCF00, 0x23U, 0x80000000U, -1);

    handicap_cpu_level_sobj = func_ovl0_800CCFDC(handicap_cpu_level_gobj, GetAddressFromOffset(gFile000, offsets[value]));
    handicap_cpu_level_sobj->pos.x = (port_id * 0x45) + 0x43;
    handicap_cpu_level_sobj->sprite.red = 0xFF;
    handicap_cpu_level_sobj->sprite.green = 0xFF;
    handicap_cpu_level_sobj->sprite.blue = 0xFF;
    handicap_cpu_level_sobj->sprite.attr &= ~SP_FASTCOPY;
    handicap_cpu_level_sobj->sprite.attr |= SP_TRANSPARENT;
    handicap_cpu_level_sobj->pos.y = 200.0f;
}

// 0x80137004
void mnReplaceFighterNameWithHandicapCPULevel(s32 port_id)
{
    GObj* arrow_gobj;

    mnHideFighterName();
    mnRemoveHandicapCPULevel(port_id);
    mnDrawHandicapCPULevel(port_id);

    if ((mnIsHandicapAuto() == FALSE) || (gPanelVS[port_id].player_type == 1))
    {
        arrow_gobj = omMakeGObjCommon(0U, NULL, 0x1CU, 0x80000000U);
        gPanelVS[port_id].arrows = arrow_gobj;
        omAddGObjRenderProc(arrow_gobj, func_ovl0_800CCF00, 0x23U, 0x80000000U, -1);
        arrow_gobj->user_data.s = port_id;
        omAddGObjCommonProc(arrow_gobj, mnSyncAndBlinkArrows, 0, 1);
    }
    mnDrawHandicapCPULevelValue(port_id);
}

// 0x801370F8
sb32 mnIsHandicapOn()
{
    return (D_800A4D08.handicap_setting == 1) ? TRUE : FALSE;
}

// 0x80137120
sb32 mnIsHandicapAuto()
{
    return (D_800A4D08.handicap_setting == 2) ? TRUE : FALSE;
}

// 0x80137148
sb32 mnIsHandicap()
{
    if ((mnIsHandicapOn() != FALSE) || (mnIsHandicapAuto() != FALSE))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8013718C
sb32 mnSelectChar(GObj* cursor_gobj, u32 port_id, u32 arg2, s32 select_button)
{
    mnCharSelPanelVS* panel_info = &gPanelVS[port_id];

    if (panel_info->cursor_state != 1) return FALSE;

    if (gPanelVS[panel_info->held_port_id].char_id != 0x1C) {
        mnVS_SelectCharWithToken(port_id, select_button);
        panel_info->unk_0x60 = gMnFramesElapsed + 0x1E;
        return TRUE;
    }

    func_800269C0(0xA5U);
    return FALSE;
}

// 0x80137234
void mnReorderCursorsOnPickup(u32 port_id, u32 token_id)
{
    s32 diplay_orders[4] = gMnTokenPickupDisplayOrders;
    u32 i, order_id;

    om_g_move_obj_dl(gPanelVS[port_id].cursor, 0x20U, diplay_orders[3]);
    om_g_move_obj_dl(gPanelVS[token_id].token, 0x20U, diplay_orders[3] + 1);

    for (i = 0, order_id = 3; i < 4; i++, order_id--)
    {
        if (i != port_id)
        {
            if (gPanelVS[i].cursor != NULL)
            {
                om_g_move_obj_dl(gPanelVS[i].cursor, 0x20U, diplay_orders[order_id]);
            }
            if (gPanelVS[i].held_port_id != -1U)
            {
                om_g_move_obj_dl(gPanelVS[gPanelVS[i].held_port_id].token, 0x20U, diplay_orders[order_id] + 1);
            }
        }
    }
}

// 0x80137390
void mnReorderCursorsOnPlacement(s32 port_id, s32 held_token_id) {
    s32 held_orders[4] = gMnTokenPlaceHeldDisplayOrders, unheld_orders[4] = gMnTokenPlaceUnheldDisplayOrders;
    s32 *order;
    s32 unused;
    sb32 token_held[4];
    s32 i;

    for (i = 0; i < 4; i++)
    {
        if (gPanelVS[i].held_port_id == -1)
        {
            token_held[i] = FALSE;
        }
        else token_held[i] = TRUE;
    }

    for (i = 0, order = &unheld_orders[3]; (s32)i < 4; i++)
    {
        if ((i != port_id) && (token_held[i] != FALSE))
        {
            if (gPanelVS[i].cursor != NULL)
            {
                om_g_move_obj_dl(gPanelVS[i].cursor, 0x20, *order);
            }
            om_g_move_obj_dl(gPanelVS[gPanelVS[i].held_port_id].token, 0x20, *order + 1);
            order--;
        }
    }

    if (port_id != 4)
    {
        om_g_move_obj_dl(gPanelVS[port_id].cursor, 0x20, *order);
    }

    om_g_move_obj_dl(gPanelVS[held_token_id].token, 0x21, *order + 1);

    order--;
    for (i = 0; i < 4; i++)
    {
        if ((i != port_id) && (token_held[i] == FALSE))
        {
            if (gPanelVS[i].cursor != NULL)
            {
                om_g_move_obj_dl(gPanelVS[i].cursor, 0x20, *order);
            }
            order--;
        }
    }
}

// 0x801375A8
void mnSetCursorCoordinatesFromToken(u32 port_id)
{
    mnCharSelPanelVS* panel_info;
    mnCharSelPanelVS* held_token_panel_info;

    panel_info = &gPanelVS[port_id];
    held_token_panel_info = &gPanelVS[panel_info->held_port_id];

    panel_info->cursor_pickup_x = SObjGetStruct(held_token_panel_info->token)->pos.x - 11.0f;
    panel_info->cursor_pickup_y = SObjGetStruct(held_token_panel_info->token)->pos.y - -14.0f;
}

// 0x8013760C
void mnHandleCursorPickup(u32 port_id, u32 held_port_id)
{
    mnCharSelPanelVS* panel_info;
    mnCharSelPanelVS* held_token_panel_info;

    held_token_panel_info = &gPanelVS[held_port_id];
    held_token_panel_info->unk_0x7C = port_id;
    held_token_panel_info->is_selected = 0;

    panel_info = &gPanelVS[port_id];
    panel_info->cursor_state = 1;
    panel_info->held_port_id = held_port_id;

    held_token_panel_info->unk_0x88 = 0;

    mnSyncFighterDisplay(held_port_id);
    mnReorderCursorsOnPickup(port_id, held_port_id);
    mnSetCursorCoordinatesFromToken(port_id);
    mnRedrawCursor(panel_info->cursor, port_id, panel_info->cursor_state);

    panel_info->unk_0xA0 = 1;

    func_800269C0(0x7FU);

    mnRemoveHandicapCPULevel(held_port_id);
    mnRemoveWhiteSquare(held_port_id);
    mnSyncNameAndLogo(held_port_id);
}

// 0x801376D0
sb32 mnCheckAndHandleTokenPickup(GObj* cursor_gobj, s32 port_id)
{
    s32 i;

    if ((gMnFramesElapsed < (s32) gPanelVS[port_id].unk_0x60) || (gPanelVS[port_id].unk_0x5C != 0))
    {
        return FALSE;
    }
    else if (gPanelVS[port_id].cursor_state != 2)
    {
        return FALSE;
    }

    for (i = 3; i >=0; i--)
    {
        if (port_id == i)
        {
            if ((gPanelVS[i].unk_0x7C == 4) && (gPanelVS[i].player_type != 2) && (mnCheckTokenPickup(cursor_gobj, port_id, i) != 0))
            {
                mnHandleCursorPickup(port_id, i);

                return TRUE;
            }
        }
        else if ((gPanelVS[i].unk_0x7C == 4) && (gPanelVS[i].player_type == 1) && (mnCheckTokenPickup(cursor_gobj, port_id, i) != 0))
        {
            mnHandleCursorPickup(port_id, i);

            return TRUE;
        }
    }

    return FALSE;
}

// 0x8013782C
s32 mnGetFtKindFromTokenPosition(s32 port_id)
{
    SObj* token_sobj = SObjGetStruct(gPanelVS[port_id].token);
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
            char_id = mnGetFtKind((s32) (current_y - 25) / 45);

            if ((mnCheckFighterIsXBoxed(char_id) != FALSE) || (mgGetIsLocked(char_id) != FALSE))
            {
                return 0x1C;
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
            char_id = mnGetFtKind(((s32) (current_y - 25) / 45) + 6);

            if ((mnCheckFighterIsXBoxed(char_id) != FALSE) || (mgGetIsLocked(char_id) != FALSE))
            {
                return 0x1C;
            }

            return char_id;
        }
    }
    return 0x1C;
}

// 0x801379B8
void mnAutoPositionCursor(GObj* cursor_gobj, s32 port_id)
{
    gmController* controller;
    Vec2i coords[3] = gMnCursorTypeCoords2;
    f32 delta;
    sb32 is_within_bounds;

    if (gPanelVS[port_id].unk_0xA0 != FALSE)
    {
        delta = (gPanelVS[port_id].cursor_pickup_x - SObjGetStruct(gPanelVS[port_id].cursor)->pos.x) / 5.0f;

        is_within_bounds = (delta >= -1.0f) && (delta <= 1.0f) ? TRUE : FALSE;

        if (is_within_bounds != 0)
        {
            SObjGetStruct(gPanelVS[port_id].cursor)->pos.x = gPanelVS[port_id].cursor_pickup_x;
        }
        else SObjGetStruct(gPanelVS[port_id].cursor)->pos.x += delta;

        delta = (gPanelVS[port_id].cursor_pickup_y - SObjGetStruct(gPanelVS[port_id].cursor)->pos.y) / 5.0f;

        is_within_bounds = (delta >= -1.0f) && (delta <= 1.0f) ? TRUE : FALSE;

        if (is_within_bounds != 0)
        {
            SObjGetStruct(gPanelVS[port_id].cursor)->pos.y = gPanelVS[port_id].cursor_pickup_y;
        }
        else SObjGetStruct(gPanelVS[port_id].cursor)->pos.y += delta;

        if ((SObjGetStruct(gPanelVS[port_id].cursor)->pos.x == gPanelVS[port_id].cursor_pickup_x) && (SObjGetStruct(gPanelVS[port_id].cursor)->pos.y == gPanelVS[port_id].cursor_pickup_y))
        {
            gPanelVS[port_id].unk_0xA0 = FALSE;
        }

        SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = (f32) ((f32) coords[gPanelVS[port_id].cursor_state].x + SObjGetStruct(cursor_gobj)->pos.x);
        SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = (f32) ((f32) coords[gPanelVS[port_id].cursor_state].y + SObjGetStruct(cursor_gobj)->pos.y);
    }
    else if (gPanelVS[port_id].unk_0x5C == FALSE)
    {
        controller = &gPlayerControllers[port_id];

        is_within_bounds = (controller->stick_range.x < -8) || (controller->stick_range.x >= 9) ? TRUE : FALSE;

        if (is_within_bounds != 0)
        {
            delta = ((f32) controller->stick_range.x / 20.0f) + SObjGetStruct(cursor_gobj)->pos.x;

            is_within_bounds = (delta >= 0.0f) && (delta <= 280.0f) ? TRUE : FALSE;

            if (is_within_bounds != 0)
            {
                SObjGetStruct(cursor_gobj)->pos.x = delta;
                SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = SObjGetStruct(cursor_gobj)->pos.x + coords[gPanelVS[port_id].cursor_state].x;
            }
        }

        is_within_bounds = (controller->stick_range.y < -8) || (controller->stick_range.y >= 9) ? TRUE : FALSE;

        if (is_within_bounds != 0)
        {
            delta = ((f32) controller->stick_range.y / -20.0f) + SObjGetStruct(cursor_gobj)->pos.y;

            is_within_bounds = (delta >= 10.0f) && (delta <= 205.0f) ? TRUE : FALSE;

            if (is_within_bounds != 0)
            {
                SObjGetStruct(cursor_gobj)->pos.y = delta;
                SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = SObjGetStruct(cursor_gobj)->pos.y + coords[gPanelVS[port_id].cursor_state].y;
            }
        }
    }
}

// 0x80137D4C
void mnSyncCursorDisplay(GObj* cursor_gobj, s32 port_id)
{
    mnCharSelPanelVS* panel_info = &gPanelVS[port_id];
    s32 i;

    if ((SObjGetStruct(cursor_gobj)->pos.y > 124.0f) || (SObjGetStruct(cursor_gobj)->pos.y < 38.0f))
    {
        if (panel_info->cursor_state != 0)
        {
            mnRedrawCursor(cursor_gobj, port_id, 0);
            panel_info->cursor_state = 0;
        }
    }
    else
    {
        if (panel_info->held_port_id == -1)
        {
            if (panel_info->cursor_state != 2)
            {
                mnRedrawCursor(cursor_gobj, port_id, 2);
                panel_info->cursor_state = 2;
            }
        }
        else
        {
            if (panel_info->cursor_state != 1)
            {
                mnRedrawCursor(cursor_gobj, port_id, 1);
                panel_info->cursor_state = 1;
            }
        }
    }

    if ((panel_info->cursor_state == 0) && (panel_info->is_selected != 0))
    {
        for (i = 0; i < 4; i++)
        {
            if ((gPanelVS[i].is_selected == 1) && (mnCheckTokenPickup(cursor_gobj, port_id, i) != 0))
            {
                mnRedrawCursor(cursor_gobj, port_id, 2);
                panel_info->cursor_state = 2;
                return;
            }
        }
    }
}

// 0x80137EFC
void mnTryCostumeChange(s32 port_id, s32 select_button)
{
    u32 costume_id = ftCostume_GetIndexFFA(gPanelVS[port_id].char_id, select_button);

    if (mnIsCostumeInUse(gPanelVS[port_id].char_id, port_id, costume_id) != FALSE)
    {
        func_800269C0(0xA5U);
        return;
    }

    gPanelVS[port_id].costume_id = costume_id;
    gPanelVS[port_id].shade = mnVS_GetShade(port_id);

    func_ovl2_800E9248(gPanelVS[port_id].player, costume_id, gPanelVS[port_id].shade);

    func_800269C0(0xA4U);
}

// 0x80137F9C
sb32 mnIsHumanWithCharacterSelected(s32 port_id)
{
    mnCharSelPanelVS* panel_info = &gPanelVS[port_id];

    if ((panel_info->is_selected != FALSE) && (panel_info->held_port_id == -1) && (panel_info->player_type == mnPanelTypeHuman))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80137FF8
void mnRecallToken(s32 port_id)
{
    gPanelVS[port_id].unk_0x88 = FALSE;
    gPanelVS[port_id].is_selected = FALSE;
    gPanelVS[port_id].unk_0x5C = TRUE;
    gPanelVS[port_id].unk_0x78 = 0;
    gPanelVS[port_id].unk_0x64 = SObjGetStruct(gPanelVS[port_id].token)->pos.x;
    gPanelVS[port_id].unk_0x6C = SObjGetStruct(gPanelVS[port_id].token)->pos.y;

    gPanelVS[port_id].unk_0x68 = SObjGetStruct(gPanelVS[port_id].cursor)->pos.x + 20.0f;

    if (gPanelVS[port_id].unk_0x68 > 280.0f)
    {
        gPanelVS[port_id].unk_0x68 = 280.0f;
    }

    gPanelVS[port_id].unk_0x74 = SObjGetStruct(gPanelVS[port_id].cursor)->pos.y + -15.0f;

    if (gPanelVS[port_id].unk_0x74 < 10.0f)
    {
        gPanelVS[port_id].unk_0x74 = 10.0f;
    }

    if (gPanelVS[port_id].unk_0x74 < gPanelVS[port_id].unk_0x6C)
    {
        gPanelVS[port_id].unk_0x70 = gPanelVS[port_id].unk_0x74 - 20.0f;
    }
    else
    {
        gPanelVS[port_id].unk_0x70 = gPanelVS[port_id].unk_0x6C - 20.0f;
    }
}

// 0x801380F4
void mnGoBackToVSMenu()
{
    gSceneData.scene_previous = gSceneData.scene_current;
    gSceneData.scene_current = 9;

    func_ovl26_8013A664();
    func_ovl26_8013A8B8();
    func_80020A74();
    func_80005C74();
}

// 0x80138140
void mnExitIfBButtonHeld(s32 port_id)
{
    mnCharSelPanelVS* panel_info = &gPanelVS[port_id];
    gmController* controller = &gPlayerControllers[port_id];

    if (panel_info->is_b_held != FALSE)
    {
        if ((panel_info->b_held_frame_count != 0))
        {
            panel_info->b_held_frame_count++;

            if ((panel_info->b_held_frame_count < 41))
            {
                if (controller->button_press & B_BUTTON)
                {
                    if (panel_info->b_held_frame_count == 40)
                    {
                        mnGoBackToVSMenu();
                    }
                }
                else
                {
                    panel_info->is_b_held = FALSE;
                    panel_info->b_held_frame_count = 0;
                }
            }
        }
    }
    else
    {
        if (controller->button_new & B_BUTTON)
        {
            panel_info->is_b_held = TRUE;
        }
        panel_info->b_held_frame_count = 1;
    }
}

// 0x80138218
s32 mnCheckBackButtonPress(GObj* cursor_gobj)
{
    f32 current_x, current_y;
    s32 range_check;
    SObj* cursor_sobj;

    cursor_sobj = SObjGetStruct(cursor_gobj);

    current_y = cursor_sobj->pos.y + 3.0f;

    range_check = (current_y < 13.0f) || (current_y > 34.0f) ? TRUE : FALSE;
    if (range_check) return FALSE;

    current_x = cursor_sobj->pos.x + 20.0f;

    range_check = (current_x >= 244.0f) && (current_x <= 292.0f) ? TRUE : FALSE;
    if (range_check) return TRUE;

    return FALSE;
}

// 0x801382E0
void mnHandleButtonPresses(GObj* cursor_gobj)
{
    gmController* controller;
    mnCharSelPanelVS* panel_info;
    s32 foo, bar, baz;
    s32 port_id = cursor_gobj->user_data.s;

    mnAutoPositionCursor(cursor_gobj, port_id);
    controller = &gPlayerControllers[port_id];

    if ((controller->button_new & A_BUTTON)
        && (mnCheckAndHandleAnyPlayerTypeButtonPress(cursor_gobj, port_id) == TRUE)
        && (mnSelectChar(cursor_gobj, port_id, gPanelVS[port_id].held_port_id, 4) == TRUE)
        && (mnCheckAndHandleTokenPickup(cursor_gobj, port_id) == TRUE))
    {
        if (mnCheckPickerRightArrowPress(cursor_gobj) != FALSE)
        {
            if (gMnRule == GMMATCH_GAMERULE_TIME)
            {
                mnTimerValue = func_ovl26_8013AAF8(mnTimerValue);
                mnDrawTimerPicker(mnTimerValue);
            }
            else
            {
                if (mnStockValue + 1 >= 0x63)
                {
                    mnStockValue = 0;
                }
                else
                {
                    mnStockValue = mnStockValue + 1;
                }
                mnDrawStockPicker(mnStockValue);
            }
            func_800269C0(0xA4U);
        }
        else if (mnCheckPickerLeftArrowPress(cursor_gobj) != FALSE)
        {
            if (gMnRule == GMMATCH_GAMERULE_TIME)
            {
                mnTimerValue = func_ovl26_8013ABDC(mnTimerValue);
                mnDrawTimerPicker(mnTimerValue);
            }
            else
            {
                if (mnStockValue - 1 < 0)
                {
                    mnStockValue = 0x62;
                }
                else
                {
                    mnStockValue = mnStockValue - 1;
                }
                mnDrawStockPicker(mnStockValue);
            }
            func_800269C0(0xA4U);
        }
        else if (mnCheckFFATeamBattleTogglePress(cursor_gobj) != FALSE)
        {
            mnHandleFFATeamBattleTogglePress();
        }
        else if (mnCheckBackButtonPress(cursor_gobj) != FALSE)
        {
            mnGoBackToVSMenu();
            func_800269C0(0xA4U);
        }
        else if (mnCheckAnyTeamButtonPress(cursor_gobj, port_id) == TRUE)
        {
            mnCheckAnyCPUHandicapArrowPress(cursor_gobj, port_id);
        }
    }

    panel_info = &gPanelVS[port_id];

    if (gIsTeamBattle == FALSE)
    {
        if ((controller->button_new & U_CBUTTONS)
            && (mnSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 0) == TRUE)
            && (panel_info->unk_0x88 != FALSE))
        {
            mnTryCostumeChange(port_id, 0);
        }
        if ((controller->button_new & R_CBUTTONS)
            && (mnSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 1) == TRUE)
            && (panel_info->unk_0x88 != FALSE))
        {
            mnTryCostumeChange(port_id, 1);
        }
        if ((controller->button_new & D_CBUTTONS)
            && (mnSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 2) == TRUE)
            && (panel_info->unk_0x88 != FALSE))
        {
            mnTryCostumeChange(port_id, 2);
        }
        if ((controller->button_new & L_CBUTTONS)
            && (mnSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 3) == TRUE)
            && (panel_info->unk_0x88 != FALSE))
        {
            mnTryCostumeChange(port_id, 3);
        }
    }
    else if (controller->button_new & (U_CBUTTONS | R_CBUTTONS | D_CBUTTONS | L_CBUTTONS))
    {
        mnSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 4);
    }
    if ((controller->button_new & B_BUTTON) && (mnIsHumanWithCharacterSelected(port_id) != FALSE))
    {
        mnRecallToken(port_id);
    }
    if (panel_info->unk_0x5C == TRUE)
    {
        mnExitIfBButtonHeld(port_id);
    }
    if (panel_info->unk_0x5C == TRUE)
    {
        mnSyncCursorDisplay(cursor_gobj, port_id);
    }
}

// 0x801386E4
void mnRedrawToken(GObj* token_gobj, s32 token_index)
{
    SObj* token_sobj;
    f32 current_x, current_y;
    intptr_t token_offsets[5] = gMnTokenOffsets;

    current_x = SObjGetStruct(token_gobj)->pos.x;
    current_y = SObjGetStruct(token_gobj)->pos.y;

    func_8000B760(token_gobj);

    token_sobj = func_ovl0_800CCFDC(token_gobj, GetAddressFromOffset(gFile011, token_offsets[token_index]));
    token_sobj->pos.x = current_x;
    token_sobj->pos.y = current_y;
    token_sobj->sprite.attr &= ~SP_FASTCOPY;
    token_sobj->sprite.attr |= SP_TRANSPARENT;
}

// 0x80138798
void mnCenterTokenInPortrait(GObj* token_gobj, s32 ftKind)
{
    s32 portrait_id = mnGetPortraitId(ftKind);

    if (portrait_id >= 6)
    {
        SObjGetStruct(token_gobj)->pos.x = (portrait_id * 45) - (6 * 45) + 36;
        SObjGetStruct(token_gobj)->pos.y = 89.0f;
    }
    else
    {
        SObjGetStruct(token_gobj)->pos.x = (portrait_id * 45) + 36;
        SObjGetStruct(token_gobj)->pos.y = 46.0f;
    }
}

// 0x80138848
s32 mnSelectRandomFighter(GObj* token_gobj)
{
    s32 ftKind;

    do
    {
        do
        {
            ftKind = lbRandom_GetTimeByteRange(12);
        } while (mnCheckFighterIsXBoxed(ftKind) != 0);
    } while (mgGetIsLocked(ftKind) != 0);

    mnCenterTokenInPortrait(token_gobj, ftKind);
    return ftKind;
}

// 0x801388A4
void mnMoveToken(s32 port_id)
{
    mnCharSelPanelVS* panel_info = &gPanelVS[port_id];

    SObjGetStruct(panel_info->token)->pos.x += panel_info->token_x_velocity;
    SObjGetStruct(panel_info->token)->pos.y += panel_info->token_y_velocity;
}

// 0x801388F8
void mnSyncTokenAndFighter(GObj* token_gobj)
{
    s32 ftKind;
    s32 port_id = token_gobj->user_data.s;

    if (gMnFramesElapsed < 0x1E)
    {
        token_gobj->obj_renderflags = 1;
    }
    else
    {
        if ((gPanelVS[port_id].player_type == mnPanelTypeCPU)
            || ((gPanelVS[port_id].player_type == mnPanelTypeHuman)
                && ((gPanelVS[port_id].cursor_state != 0)
                    || (gPanelVS[port_id].is_selected == TRUE)
                    || (gPanelVS[port_id].unk_0x5C == TRUE))))
        {
            token_gobj->obj_renderflags = 0;
        }
        else
        {
            token_gobj->obj_renderflags = 1;
        }
    }

    if ((gPanelVS[port_id].is_selected == FALSE)
        && (gPanelVS[port_id].unk_0x7C != 4)) {
        if (gPanelVS[gPanelVS[port_id].unk_0x7C].unk_0xA0 == 0) {
            if (gPanelVS[gPanelVS[port_id].unk_0x7C].cursor != NULL) {
                SObjGetStruct(token_gobj)->pos.x = (f32) (SObjGetStruct(gPanelVS[gPanelVS[port_id].unk_0x7C].cursor)->pos.x + 11.0f);
                SObjGetStruct(token_gobj)->pos.y = (f32) (SObjGetStruct(gPanelVS[gPanelVS[port_id].unk_0x7C].cursor)->pos.y + -14.0f);
            }
        }
    } else {
        mnMoveToken(port_id);
    }

    ftKind = mnGetFtKindFromTokenPosition(port_id);

    switch (gPanelVS[port_id].player_type)
    {
        case mnPanelTypeNA:
            if ((D_ovl26_8013BD90[port_id] != -1) && (ftKind != 0x1C))
            {
                gPanelVS[port_id].player_type = mnPanelTypeHuman;

                mnHandlePlayerTypeButtonPress(port_id);
                mnRecreateTypeButton(gPanelVS[port_id].type_button, port_id, gPanelVS[port_id].player_type);
                mnSyncTokenDisplay(gPanelVS[port_id].token, port_id);
            }
            else break;
        default:
            if ((gPanelVS[port_id].player_type == mnPanelTypeCPU)
                && (ftKind != gPanelVS[port_id].char_id)
                && (ftKind == 0x1C))
            {
                if (gPanelVS[port_id].unk_0x7C != 4)
                {
                    mnVS_SelectCharWithToken(gPanelVS[port_id].unk_0x7C, 4);
                }
            }
            if ((gPanelVS[port_id].is_selected == FALSE)
                && (ftKind != gPanelVS[port_id].char_id))
            {
                gPanelVS[port_id].char_id = ftKind;

                mnSyncFighterDisplay(port_id);
                mnSyncNameAndLogo(port_id);
            }
    }
}

// 0x80138B6C
void mnCreateCursorViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x14, 0x100000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0f, 10.0f, 310.0f, 230.0f);
}

// 0x80138C0C
void mnCreateDroppedTokenViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x19, 0x200000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0f, 10.0f, 310.0f, 230.0f);
}

// 0x80138CAC
void mnCreateHandicapCPULevelViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x2B, 0x800000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0f, 10.0f, 310.0f, 230.0f);
}

// 0x80138D4C
void mnCreateReadyToFightViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0xA, 0x4000000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0f, 10.0f, 310.0f, 230.0f);
}

// 0x80138DEC
void mnCreateCursor(s32 port_id)
{
    GObj* cursor_gobj;
    s32 unused;
    s32 unk1[4] = gMnCursorTypeOffsetsUnused;
    Vec2f unk2[4] = gMnCursorStartingCoords;
    s32 unk3[4] = gMnCursorInitialDisplayOrders;

    cursor_gobj = func_ovl0_800CD050(0, NULL, 0x13, 0x80000000, func_ovl0_800CCF00, 0x20, unk3[port_id], -1, GetAddressFromOffset(gFile011, &FILE_011_CURSOR_POINTER_IMAGE_OFFSET), 1, mnHandleButtonPresses, 2);

    cursor_gobj->user_data.s = port_id;
    SObjGetStruct(cursor_gobj)->pos.x = (f32) unk2[port_id].x;
    SObjGetStruct(cursor_gobj)->pos.y = (f32) unk2[port_id].y;
    SObjGetStruct(cursor_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(cursor_gobj)->sprite.attr |= SP_TRANSPARENT;

    mnRedrawCursor(cursor_gobj, port_id, 0);
}

// 0x80138FA0
void mnRenderToken(GObj* token_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
    gDPSetEnvColor(gDisplayListHead[0]++, gTokenShinePulseColor & 0xFF, gTokenShinePulseColor & 0xFF, gTokenShinePulseColor & 0xFF, gTokenShinePulseColor & 0xFF);
    gDPSetCombineLERP(gDisplayListHead[0]++, TEXEL0, PRIMITIVE, ENVIRONMENT, PRIMITIVE,  0, 0, 0, TEXEL0,  TEXEL0, PRIMITIVE, ENVIRONMENT, PRIMITIVE,  0, 0, 0, TEXEL0);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    func_ovl0_800CCF74(token_gobj);
}

// 0x80139098

// 0x801392A8

// 0x80139320

// 0x80139460

// 0x8013961C

// 0x801397CC

// 0x801398B8

// 0x8013992C

// 0x80139970

// 0x801399E8

// 0x80139A2C

// 0x80139B4C

// 0x80139B90

// 0x80139C84

// 0x80139DE0

// 0x80139E60

// 0x8013A0DC

// 0x8013A2A4

// 0x8013A30C

// 0x8013A3AC

// 0x8013A40C

// 0x8013A470

// 0x8013A534

// 0x8013A5E4

// 0x8013A664

// 0x8013A8B8

// 0x8013A920

// 0x8013AAF8

// 0x8013ABDC

// 0x8013AC7C

// 0x8013ADE0

// 0x8013AEC8

// 0x8013AFC0

// 0x8013B090

// 0x8013B0C8

// vs_css_entry