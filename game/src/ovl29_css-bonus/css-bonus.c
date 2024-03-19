#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>
#include <css-bonus.h>

// ovl1 stuff
extern f32 menu_zoom[12]; // D_ovl1_80390D90

// ovl29 stuff
extern RldmFileId D_ovl29_80136F50[11];

extern intptr_t dMnBonusSmallerNumberOffsets[10]; // 0x80136FB0[10];
// extern intptr_t dMnBonusChrOffsets[29]; // 0x801386B8[29];
// extern f32 dMnBonusChrWidths[29]; // 0x8013872C[29];

extern f32 dMnBonusPortraitPositionsX[12]; // 0x801370C0[12]
extern f32 dMnBonusPortraitVelocities[12]; // 0x801370F0[12]
extern Vec2f dMnBonusPortraitPositionsXY[12]; // 0x80137120[12];

extern s32 dMnBonusFtKindOrder[12]; // 0x801371A4[12];
extern s32 dMnBonusPortraitOrder[12]; // 0x801371D4[12];
extern s32 dMnBonusLockedPortraitOffsets[12]; // 0x80137204[12];
extern s32 dMnBonusPortraitOffsets[12]; // 0x80137234[12];
extern Vec2f dMnBonusUnusedPositions[12]; // 0x80137264[12];
extern s32 dMnBonusLogoOffsets[12]; // 0x801372C4[12];
extern s32 dMnBonusNameOffsets[12]; // 0x801372F4[12];
extern intptr_t dMnBonusPanelOffsets[4]; // 0x80137324[4];
extern intptr_t dMnBonusTypeOffsets[4]; // 0x80137334[4];
extern f32 dMnBonusTypeOffsetsX[4]; // 0x80137344[4];

extern s32 dMnBonusBestTimeColorsUnused[3]; // 0x801373A4[3];
extern s32 dMnBonusBestTimeColors[6]; // 0x801373B0[3];
extern s32 dMnBonusBestCountColorsUnused[3]; // 0x801373C8[3];
extern s32 dMnBonusBestCountColors[6]; // 0x801373D4[6];
extern s32 dMnBonusTotalTimeColorsUnused[3]; // 0x801373EC[3];
extern s32 dMnBonusTotalTimeColors[6]; // 0x801373F8[6];
// extern intptr_t dMnBonusNumberOffsets[10]; // 0x80138A34[10];
// extern f32 dMnBonusNumberWidths[10]; // 0x80138A5C[10];
// extern s32 dMnBonusNumberColorsTime[6]; // 0x80138A84[6];
// extern intptr_t dMnBonusLevelOffsets[5]; // 0x80138A9C[5]
// extern Vec2f dMnBonusLevelPositions[5]; // 0x80138AB0[5]
// extern GfxColor dMnBonusLevelColors[5]; // 0x80138AD8[5]
// extern s32 dMnBonusHighscoreTextColors[3]; // 0x80138AE8;
// extern s32 dMnBonusHighscoreNumberColors[6]; // 0x80138AF4;
// extern GfxColor dMnBonusHighscoreSmashLogoColors[5]; // 0x80138B0C;
// extern s32 dMnBonusBonusesNumberColors[6]; // 0x80138B1C;
// extern s32 dMnBonusTotalHighscoreTextColors[3]; // 0x80138B34;
// extern s32 dMnBonusHighscoreNumberColors[6]; // 0x80138B40;
// extern s32 dMnBonusTotalBonusesNumberColors[6]; // 0x80138B58;
extern GfxColorPair dMnBonusCursorTypeColors[4]; // 0x80137410[4]; // cursor type texture colors
extern intptr_t dMnBonusCursorTypeOffsets[4]; // 0x80137428[4]; // cursor type texture offsets
extern intptr_t dMnBonusCursorOffsets[3]; // 0x80137438[3]; // cursor offsets
extern Vec2i dMnBonusCursorTypePositions[3]; // 0x80137444[3]; // x,y offset pairs for cursor type texture

extern u16 dMnBonusAnnouncerNames[12]; // 0x8013745C[12]; // announcer names
extern s32 dMnBonusTokenPickupDisplayOrders[4]; // 0x80137474[4]; // display orders for cursors on token pickup
extern s32 dMnBonusTokenPlaceUnheldDisplayOrders[4]; // 0x80137484[4]; // display orders for cursors not holding tokens on token placement
extern Vec2i dMnBonusCursorTypePositions2[3]; // 0x80137494[3]; // x,y offset pairs for cursor type texture

extern intptr_t dMnBonusCursorTypeOffsetsUnused[4]; // 0x801374C0[4]; // cursor type texture offsets
extern s32 dMnBonusCursorStartingDisplayOrders[4]; // 0x801374D0[4]; // display orders for cursors on initial load
extern intptr_t dMnBonusTokenOffsetsNoCPU[4]; // 0x801374E0; // token offsets not including cpu
extern s32 dMnBonusTokenStartingDisplayOrders[4]; // 0x801374F0 // display orders for tokens on initial load
extern f32 dMnBonusWhiteCircleSizes[12]; // 0x80137500[12]; // white circle size

extern scUnkDataBounds D_ovl29_80137530;
extern scRuntimeInfo D_ovl29_8013754C;

// extern char* gMnHighscoreString; // 0x80138D40
// extern char* gMnTotalHighscoreString; // 0x80138D4C

extern mnCharPanelBonus gMnBonusPanel; // 0x80137648;

extern s32 D_ovl29_801376D4; // unknown
extern s32 D_ovl29_801376D8[4]; // unknown
extern s32 gMnBonusAutostartTimer; // 0x801376E8 // timer after selecting char before auto-starting
extern sb32 gMnBonusCharSelected; // 0x801376EC
extern sb32 gMnBonusIsTeamBattle; // 0x801376F0
extern s32 gMnBonusRule; // 0x801376F4
extern s32 gMnBonusHumanPanelPort; // 0x801376F8
extern GObj* gMnBonusHighscoreGobj; // 0x801376FC

// extern s32 gMnBonusTimerValue; // 0x80138F80;

// extern s32 gMnBonusStartDelayTimer; // 0x80138F98;
// extern sb32 gMnBonusIsStartTriggered; // 0x80138F9C;

// extern GObj* gMnBonusHighscoreGObj; // 0x80138FAC
// extern GObj* gMnBonusBonusesGObj; // 0x80138FB0
// extern s32 gMnBonusLevelValue; // 0x80138FB4; // level
// extern s32 gMnBonusStockValue; // 0x80138FB8; // stocks
// extern GObj* gMnBonusLevelGObj; // 0x80138FBC;
// extern GObj* gMnBonusStockGObj; // 0x80138FC0;

extern void* gMnBonusAnimHeap; // 0x80137710;
extern s32 gMnBonusType; // 0x80137714; // 0 = BTT; 1 = BTP
extern GObj* gMnBonusTitleGObj; // 0x80137718; // title and back button
extern GObj* gMnBonusTotalTimeGobj; //  // 0x8013771C; // total time highscore
extern u16 gMnBonusCharacterUnlockedMask; // 0x80137720; // flag indicating which bonus chars are available
extern s32 gMnBonusFramesElapsed; // 0x80137724; // frames elapsed on CSS
extern s32 gMnBonusMaxFramesElapsed; // 0x80137728; // frames to wait until exiting the CSS
extern s32 gMnBonusPressStartFlashTimer; // 0x8013772C; looping timer that helps determine blink rate of Press Start (and Ready to Fight?)

// extern s32 gMnBonusFtKind; // 0x80138FCC
// extern s32 gMnBonusCostumeId; // 0x80138FD0

// // extern s32 D_ovl26_8013BDC8;

extern rdFileNode D_ovl29_80137A00;
extern u32 D_ovl29_80137A38[240];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern s32 gMnBonusFilesArray[11]; // 0x80137DF8[11]
// // extern s32 gFile011; // 0x80137DF8; // file 0x011 pointer
// // extern s32 gFile014; // 0x80137DFC; // file 0x014 pointer
// // extern s32 gFile015; // 0x80137E00; // file 0x015 pointer
// // extern s32 gFile012; // 0x80137E04; // file 0x012 pointer
// // extern s32 gFile013; // 0x80137E08; // file 0x013 pointer
// // extern s32 gFile017; // 0x80137E0C; // file 0x017 pointer
// // extern s32 gFile018; // 0x80137E10; // file 0x018 pointer
// // extern s32 gFile019; // 0x80137E14; // file 0x019 pointer
// // extern s32 gFile021; // 0x80137E18; // file 0x021 pointer
// // extern s32 gFile024; // 0x80137E1C; // file 0x024 pointer
// // extern s32 gFile016; // 0x80137E20; // file 0x016 pointer

// // // Offsets
extern intptr_t FILE_011_START_IMAGE_OFFSET = 0x1378; // Press Start's "Start" texture
extern intptr_t FILE_011_PRESS_IMAGE_OFFSET = 0x14D8; // Press Start's "Press" texture
// extern intptr_t FILE_011_INFINITY_IMAGE_OFFSET = 0x3EF0; // file 0x011 image offset for infinity symbol
// extern intptr_t FILE_011_PICKER_TIME_IMAGE_OFFSET = 0x48B0; // file 0x011 image offset for Time picker texture
// extern intptr_t FILE_011_ARROW_L_IMAGE_OFFSET = 0xECE8; // file 0x011 image offset for left arrow
// extern intptr_t FILE_011_ARROW_R_IMAGE_OFFSET = 0xEDC8; // file 0x011 image offset for right arrow
extern intptr_t FILE_011_READY_TO_FIGHT_IMAGE_OFFSET = 0xF448; // Ready to Fight banner text
extern intptr_t FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET = 0xF530; // Ready to Fight banner bg
extern intptr_t FILE_011_BACK_IMAGE_OFFSET = 0x115C8; // file 0x011 image offset for

extern intptr_t FILE_012_BREAK_THE_TARGETS_TITLE_IMAGE_OFFSET = 0xBD8; // file 0x012 image offset for Break The Targets title
extern intptr_t FILE_012_BOARD_THE_PLATFORMS_TITLE_IMAGE_OFFSET = 0x1058; // file 0x012 image offset for Board the Platforms title

extern s32 FILE_013_XBOX_IMAGE_OFFSET = 0x2B8; // file 0x013 image offset
// extern intptr_t FILE_013_WHITE_SQUARE = 0x6F0; // white square
extern s32 FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET = 0xF68; // file 0x013 image offset for portrait question mark image
extern s32 FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET = 0x24D0; // file 0x013 image offset for portrait bg (fire) image

extern intptr_t FILE_015_BACKGROUND_IMAGE_OFFSET = 0x440; // file 0x015 image offset for background tile

extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_1 = 0x408; // AObj? for white circle
extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_2 = 0x568; // DObjDesc for white circle

// extern intptr_t FILE_017_1_PLAYER_GAME_TITLE_IMAGE_OFFSET = 0x228;
// extern intptr_t FILE_017_PARENTHESIS_R_IMAGE_OFFSET = 0x2C8;
// extern intptr_t FILE_017_PARENTHESIS_L_IMAGE_OFFSET = 0x368;
// extern intptr_t FILE_017_LEVEL_IMAGE_OFFSET = 0x488;
// extern intptr_t FILE_017_STOCK_IMAGE_OFFSET = 0x5A8;
// extern intptr_t FILE_017_STOCK_LEVEL_OUTLINE_IMAGE_OFFSET = 0x1208;
extern intptr_t FILE_017_BEST_TIME_LABEL_IMAGE_OFFSET = 0x12E0;
extern intptr_t FILE_017_TOTAL_BEST_TIME_LABEL_IMAGE_OFFSET = 0x1410;
extern intptr_t FILE_017_TARGETS_LABEL_IMAGE_OFFSET = 0x1658;
extern intptr_t FILE_017_PLATFORMS_LABEL_IMAGE_OFFSET = 0x1898;
extern intptr_t FILE_017_APOSTROPHE_IMAGE_OFFSET = 0x1F48;
extern intptr_t FILE_017_DOUBLE_QUOTE_IMAGE_OFFSET = 0x1FC8;
// extern intptr_t FILE_017_SMASH_LOGO_IMAGE_OFFSET = 0x1950;
// extern intptr_t FILE_017_OPTION_IMAGE_OFFSET = 0x1EC8;
// extern intptr_t FILE_017_PANEL_IMAGE_OFFSET = 0x32A8;

// extern intptr_t FILE_019_POLYGON_STOCK_ICON_IMAGE_OFFSET = 0x80;

// 0x80131B00
void mnBonusSetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B58
s32 mnBonusPow(s32 num, s32 pow)
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

// 0x80131BF8
void mnBonusSetTextureColors(SObj* sobj, u32 colors[])
{
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    sobj->shadow_color.r = colors[0];
    sobj->shadow_color.g = colors[1];
    sobj->shadow_color.b = colors[2];
    sobj->sprite.red = colors[3];
    sobj->sprite.green = colors[4];
    sobj->sprite.blue = colors[5];
}

// 0x80131C40
s32 mnBonusGetNumberOfDigits(s32 num, s32 maxDigits)
{
    s32 numDigits;

    for (numDigits = maxDigits; numDigits > 0; numDigits--)
    {
        if (mnBonusPow(10, numDigits - 1) != 0 ? num / mnBonusPow(10, numDigits - 1) : 0 != 0) return numDigits;
    }

    return 0;
}

// 0x80131CEC
void mnBonusCreateSmallerNumber(GObj* number_gobj, s32 num, f32 x, f32 y, s32 colors[], s32 maxDigits, sb32 pad)
{
    intptr_t number_offsets[10] = dMnBonusSmallerNumberOffsets;
    SObj* number_sobj;
    f32 left_x = x;
    s32 place;
    s32 numDigits;
    s32 digit;

    if (num < 0) num = 0;

    number_sobj = gcAppendSObjWithSprite(number_gobj, GetAddressFromOffset(gMnBonusFilesArray[9], number_offsets[num % 10]));
    mnBonusSetTextureColors(number_sobj, colors);
    left_x -= 8;
    number_sobj->pos.x = left_x;
    number_sobj->pos.y = y;

    for
    (
        place = 1, numDigits = (pad != FALSE) ? maxDigits : mnBonusGetNumberOfDigits(num, maxDigits);
        place < numDigits;
        place++, numDigits = (pad != FALSE) ? maxDigits : mnBonusGetNumberOfDigits(num, maxDigits)
    )
    {
        digit = (mnBonusPow(10, place) != 0) ? num / mnBonusPow(10, place) : 0;

        number_sobj = gcAppendSObjWithSprite(number_gobj, GetAddressFromOffset(gMnBonusFilesArray[9], number_offsets[digit % 10]));
        mnBonusSetTextureColors(number_sobj, colors);
        left_x -= 8;
        number_sobj->pos.x = left_x;
        number_sobj->pos.y = y;
    }
}

// 0x80131F5C - Unused?
void func_ovl29_80131F5C()
{
    return;
}

// 0x80131F64 - Unused?
void func_ovl29_80131F64()
{
    return;
}

// 0x80131F6C - Unused?
void func_ovl29_80131F6C()
{
    return;
}

// 0x80131F74
void mnBonusSelectCharWithToken(s32 port_id, s32 select_button)
{
    s32 held_port_id = gMnBonusPanel.held_port_id,
        costume_id = ftCostume_GetIndexFFA(gMnBonusPanel.char_id, select_button);

    func_ovl2_800E9248(gMnBonusPanel.player, costume_id, 0);

    gMnBonusPanel.costume_id = costume_id;
    gMnBonusPanel.is_selected = TRUE;
    gMnBonusPanel.holder_port_id = 4;
    gMnBonusPanel.cursor_state = mnCursorStateNotHoldingToken;

    mnBonusRedrawCursor(gMnBonusPanel.cursor, port_id, gMnBonusPanel.cursor_state);

    gMnBonusPanel.held_port_id = -1;
    gMnBonusPanel.unk_0x88 = TRUE;

    mnBonusReorderCursorsOnPlacement(held_port_id);
    mnBonusAnnounceFighter(port_id, held_port_id);
    mnBonusCreateWhiteSquare(held_port_id);
    gMnBonusAutostartTimer = 0x8C;
    gMnBonusCharSelected = 1;
}

// 0x80132030
f32 mnBonusGetNextPortraitX(s32 portrait_id, f32 current_x_position)
{
    f32 portrait_x_position[12] = dMnBonusPortraitPositionsX,
        portrait_velocity[12] = dMnBonusPortraitVelocities;

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

// 0x80132144
sb32 mnBonusCheckFighterIsXBoxed(s32 ft_kind)
{
    return FALSE;
}

// 0x80132150
void mnBonusSetPortraitX(GObj *portrait_gobj)
{
    f32 new_portrait_x = mnBonusGetNextPortraitX(portrait_gobj->user_data.s, SObjGetStruct(portrait_gobj)->pos.x);

    if (new_portrait_x != -1.0F)
    {
        SObjGetStruct(portrait_gobj)->pos.x = new_portrait_x;

        if (SObjGetStruct(portrait_gobj)->next != NULL)
        {
            SObjGetStruct(portrait_gobj)->next->pos.x = SObjGetStruct(portrait_gobj)->pos.x + 4.0F;
        }
    }
}

// 0x801321CC
void mnBonusInitializePortraitBackgroundPosition(SObj *portrait_bg_sobj, s32 portrait_id)
{
    Vec2f coordinates[12] = dMnBonusPortraitPositionsXY;

    portrait_bg_sobj->pos.x = coordinates[portrait_id].x;
    portrait_bg_sobj->pos.y = coordinates[portrait_id].y;
}

// 0x80132228
void mnBonusAddRedXBoxToPortrait(GObj* portrait_gobj, s32 portrait_id)
{
    SObj* portrait_sobj = SObjGetStruct(portrait_gobj);
    f32 x = portrait_sobj->pos.x,
        y = portrait_sobj->pos.y;
    intptr_t xbox_image_offset = &(FILE_013_XBOX_IMAGE_OFFSET);

    portrait_sobj = gcAppendSObjWithSprite(portrait_gobj, GetAddressFromOffset(gMnBonusFilesArray[4], xbox_image_offset)); // AppendTexture

    portrait_sobj->pos.x = x + 4.0F;
    portrait_sobj->pos.y = y + 12.0F;
    portrait_sobj->sprite.attr = portrait_sobj->sprite.attr & ~SP_FASTCOPY;
    portrait_sobj->sprite.attr = portrait_sobj->sprite.attr| SP_TRANSPARENT;
    portrait_sobj->sprite.red = 0xFF;
    portrait_sobj->sprite.green = 0;
    portrait_sobj->sprite.blue = 0;
}

// 0x801322BC
sb32 mnBonusGetIsLocked(s32 char_id)
{
    switch (char_id)
    {
        case Ft_Kind_Ness:
            return (gMnBonusCharacterUnlockedMask & (1 << Ft_Kind_Ness)) ? FALSE : TRUE;

        case Ft_Kind_Purin:
            return (gMnBonusCharacterUnlockedMask & (1 << Ft_Kind_Purin)) ? FALSE : TRUE;

        case Ft_Kind_Captain:
            return (gMnBonusCharacterUnlockedMask & (1 << Ft_Kind_Captain)) ? FALSE : TRUE;

        case Ft_Kind_Luigi:
            return (gMnBonusCharacterUnlockedMask & (1 << Ft_Kind_Luigi)) ? FALSE : TRUE;
    }
    return FALSE;
}

// 0x80132388 - Unused?
void func_ovl29_80132388()
{
    return;
}

// 0x80132390
s32 mnBonusGetFtKind(s32 portrait_id)
{
    s32 ftKind_order[12] = dMnBonusFtKindOrder;

    return ftKind_order[portrait_id];
}

// 0x801323E0
s32 mnBonusGetPortraitId(s32 ft_kind)
{
    s32 portrait_id_order[12] = dMnBonusPortraitOrder;

    return portrait_id_order[ft_kind];
}

// 0x80132430
void mnBonusRenderPortraitWithNoise(GObj *portrait_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x30, 0x30, 0x30, 0xFF);
    gDPSetCombineLERP(gDisplayListHead[0]++, NOISE, TEXEL0, PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0, NOISE, TEXEL0, PRIMITIVE, TEXEL0,  0, 0, 0, TEXEL0);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    func_ovl0_800CCF74(portrait_gobj);
}

// 0x801324F0
void mnBonusCreateLockedPortrait(s32 portrait_id)
{
    GObj* texture_gobj;
    SObj* texture_sobj;
    intptr_t locked_portrait_offsets[12] = dMnBonusLockedPortraitOffsets;

    // portrait bg (fire)
    texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
    omAddGObjRenderProc(texture_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
    omAddGObjCommonProc(texture_gobj, mnBonusSetPortraitX, 1, 1);

    texture_sobj = gcAppendSObjWithSprite(texture_gobj, GetAddressFromOffset(gMnBonusFilesArray[4], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
    texture_sobj->pos.x = (f32) (((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 0x2D) + 0x19);
    texture_sobj->pos.y = (f32) (((portrait_id >= 6 ? 1 : 0) * 0x2B) + 0x24);

    mnBonusInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
    texture_gobj->user_data.s = portrait_id;

    // portrait
    texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
    omAddGObjRenderProc(texture_gobj, mnBonusRenderPortraitWithNoise, 0x1BU, 0x80000000U, -1);
    omAddGObjCommonProc(texture_gobj, mnBonusSetPortraitX, 1, 1);

    texture_sobj = gcAppendSObjWithSprite(texture_gobj, GetAddressFromOffset(gMnBonusFilesArray[4], locked_portrait_offsets[mnBonusGetFtKind(portrait_id)]));
    texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
    texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;

    texture_gobj->user_data.s = portrait_id;
    mnBonusInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

    // question mark
    texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
    omAddGObjRenderProc(texture_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
    omAddGObjCommonProc(texture_gobj, mnBonusSetPortraitX, 1, 1);

    texture_sobj = gcAppendSObjWithSprite(texture_gobj, GetAddressFromOffset(gMnBonusFilesArray[4], &FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET));
    texture_sobj->sprite.attr &= ~SP_FASTCOPY;
    texture_sobj->sprite.attr |= SP_TRANSPARENT;
    texture_sobj->shadow_color.r = 0x5B;
    texture_sobj->shadow_color.g = 0x41;
    texture_sobj->shadow_color.b = 0x33;
    texture_sobj->sprite.red = 0xC4;
    texture_sobj->sprite.green = 0xB9;
    texture_sobj->sprite.blue = 0xA9;

    texture_gobj->user_data.s = portrait_id;
    mnBonusInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
}

// 0x80132798
void mnBonusCreatePortrait(s32 portrait_id)
{
    GObj *portrait_gobj, *portrait_bg_gobj;
    SObj *texture_sobj;
    intptr_t portrait_offsets[12] = dMnBonusPortraitOffsets;

    // if locked, render locked portrait instead
    if (mnBonusGetIsLocked(mnBonusGetFtKind(portrait_id)))
    {
        mnBonusCreateLockedPortrait(portrait_id);
    }
    else
    {
        // portrait bg (fire)
        portrait_bg_gobj = omMakeGObjCommon(0U, NULL, 0x19U, 0x80000000U);
        omAddGObjRenderProc(portrait_bg_gobj, func_ovl0_800CCF00, 0x20U, 0x80000000U, -1);
        portrait_bg_gobj->user_data.p = portrait_id;
        omAddGObjCommonProc(portrait_bg_gobj, mnBonusSetPortraitX, 1, 1);

        texture_sobj = gcAppendSObjWithSprite(portrait_bg_gobj, GetAddressFromOffset(gMnBonusFilesArray[4], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
        texture_sobj->pos.x = ((((portrait_id >= 6) ? portrait_id - 6 : portrait_id) * 0x2D) + 0x19);
        texture_sobj->pos.y = (((portrait_id >= 6) ? 1 : 0) * 0x2B) + 0x24;

        mnBonusInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

        // portrait
        portrait_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
        omAddGObjRenderProc(portrait_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
        omAddGObjCommonProc(portrait_gobj, mnBonusSetPortraitX, 1, 1);

        texture_sobj = gcAppendSObjWithSprite(portrait_gobj, GetAddressFromOffset(gMnBonusFilesArray[4], portrait_offsets[mnBonusGetFtKind(portrait_id)]));
        texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
        texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;
        texture_sobj->pos.x = ((((portrait_id >= 6) ? portrait_id - 6 : portrait_id) * 0x2D) + 0x19);
        texture_sobj->pos.y = (((portrait_id >= 6) ? 1 : 0) * 0x2B) + 0x24;
        portrait_gobj->user_data.p = portrait_id;

        // this conditionally draws a big red box with an X in it, but this check always fails
        if (mnBonusCheckFighterIsXBoxed(mnBonusGetFtKind(portrait_id)) != FALSE)
        {
            mnBonusAddRedXBoxToPortrait(portrait_gobj, portrait_id);
        }
        mnBonusInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
    }
}

// 0x80132A58
void mnBonusCreatePortraits()
{
    s32 portrait_id;

    for (portrait_id = 0; portrait_id < 12; portrait_id++)
    {
        mnBonusCreatePortrait(portrait_id);
    }
}

// 0x80132A98
void mnBonusSetNameAndLogo(GObj* name_logo_gobj, s32 port_id, s32 ft_kind)
{
    SObj* sobj;
    Vec2f coords[12] = dMnBonusUnusedPositions;
    intptr_t logo_offsets[12] = dMnBonusLogoOffsets;
    intptr_t name_offsets[12] = dMnBonusNameOffsets;

    if (ft_kind != Ft_Kind_Null)
    {
        func_8000B760(name_logo_gobj);

        // logo
        sobj = gcAppendSObjWithSprite(name_logo_gobj, GetAddressFromOffset(gMnBonusFilesArray[1], logo_offsets[ft_kind]));
        sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
        sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;
        sobj->sprite.red = 0;
        sobj->sprite.green = 0;
        sobj->sprite.blue = 0;
        sobj->pos.x = 68.0F;
        sobj->pos.y = 144.0F;

        // name
        sobj = gcAppendSObjWithSprite(name_logo_gobj, GetAddressFromOffset(gMnBonusFilesArray[0], name_offsets[ft_kind]));
        sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
        sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;
        sobj->pos.x = 66.0F;
        sobj->pos.y = 202.0F;
    }
}

// 0x80132C14
void mnBonusCreatePortraitViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x28, 0x08000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132CB4
void mnBonusCreatePortraitBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x3C, 0x100000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132D54
void mnBonusCreatePortraitWhiteBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x32, 0x200000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132DF4
void mnBonusCreatePanelViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x1E, 0x10000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132E94
void mnBonusUpdatePanel(GObj* panel_gobj, s32 port_id) {
    SObj* panel_sobj;
    intptr_t offsets[4] = dMnBonusPanelOffsets;

    panel_sobj = SObjGetStruct(panel_gobj);

    panel_sobj->sprite.LUT = GetAddressFromOffset(gMnBonusFilesArray[0], offsets[port_id]);
}

// 0x80132EEC
void mnBonusCreatePanel(s32 port_id)
{
    GObj* gobj;
    SObj* type_sobj;
    intptr_t type_offsets[4] = dMnBonusTypeOffsets;
    f32 type_x_offsets[4] = dMnBonusTypeOffsetsX;

    // create panel
    gobj = func_ovl0_800CD050(0, NULL, 0x16, 0x80000000, func_ovl0_800CCF00, 0x1C, 0x80000000, -1, GetAddressFromOffset(gMnBonusFilesArray[5], &FILE_017_PANEL_IMAGE_OFFSET), 1, NULL, 1);
    SObjGetStruct(gobj)->pos.x = 58.0f;
    SObjGetStruct(gobj)->pos.y = 127.0f;
    SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;

    gMnBonusPanel.panel = gobj;

    type_sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMnBonusFilesArray[0], type_offsets[port_id]));
    type_sobj->pos.x = type_x_offsets[port_id] + 58.0F;
    type_sobj->pos.y = 132.0F;
    type_sobj->sprite.attr &= ~SP_FASTCOPY;
    type_sobj->sprite.attr |= SP_TRANSPARENT;
    type_sobj->sprite.red = 0;
    type_sobj->sprite.green = 0;
    type_sobj->sprite.blue = 0;

    mnBonusUpdatePanel(gobj, port_id);

    // name/logo
    gobj = omMakeGObjCommon(0U, NULL, 0x16U, 0x80000000U);
    gMnBonusPanel.name_logo = gobj;
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0x1CU, 0x80000000U, -1);
}

// 0x801330C4 - Unused?
void func_ovl29_801330C4()
{
    return;
}

// 0x801330CC
void mnBonusCreateBackground()
{
    GObj* background_gobj;
    SObj* background_sobj;

    background_gobj = omMakeGObjCommon(0U, NULL, 0x11U, 0x80000000U);
    omAddGObjRenderProc(background_gobj, func_ovl0_800CCF00, 0x1AU, 0x80000000U, -1);
    background_sobj = gcAppendSObjWithSprite(background_gobj, GetAddressFromOffset(gMnBonusFilesArray[2], &FILE_015_BACKGROUND_IMAGE_OFFSET));
    background_sobj->cmt = G_TX_WRAP;
    background_sobj->cms = G_TX_WRAP;
    background_sobj->maskt = 6;
    background_sobj->masks = 5;
    background_sobj->lrs = 300;
    background_sobj->lrt = 220;
    background_sobj->pos.x = 10.0F;
    background_sobj->pos.y = 10.0F;
}

// 0x80133170
void mnBonusCreateBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x4000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133210 - Unused?
void func_ovl29_80133210()
{
    return;
}

// 0x80133218
void mnBonusDrawTitleAndBack()
{
    GObj* title_gobj;
    SObj* title_sobj;
    SObj* back_sobj;
    void* unused;

    gMnBonusTitleGObj = title_gobj = omMakeGObjCommon(0U, NULL, 0x17U, 0x80000000U);
    omAddGObjRenderProc(title_gobj, func_ovl0_800CCF00, 0x22U, 0x80000000U, -1);

    if (gMnBonusType == mnBonusTypeBTT)
    {
        title_sobj = gcAppendSObjWithSprite(title_gobj, GetAddressFromOffset(gMnBonusFilesArray[3], &FILE_012_BREAK_THE_TARGETS_TITLE_IMAGE_OFFSET));
    }
    else
    {
        title_sobj = gcAppendSObjWithSprite(title_gobj, GetAddressFromOffset(gMnBonusFilesArray[3], &FILE_012_BOARD_THE_PLATFORMS_TITLE_IMAGE_OFFSET));
    }

    title_sobj->sprite.attr &= ~SP_FASTCOPY;
    title_sobj->sprite.attr |= SP_TRANSPARENT;
    title_sobj->pos.x = 27.0F;
    title_sobj->pos.y = 24.0F;
    title_sobj->sprite.red = 0xE3;
    title_sobj->sprite.green = 0xAC;
    title_sobj->sprite.blue = 0x04;

    if (gMnBonusType == mnBonusTypeBTT) {
         func_800269C0(0x1DEU);
     } else {
         func_800269C0(0x1DCU);
     }

    back_sobj = gcAppendSObjWithSprite(title_gobj, GetAddressFromOffset(gMnBonusFilesArray[0], &FILE_011_BACK_IMAGE_OFFSET));
    back_sobj->pos.x = 244.0F;
    back_sobj->pos.y = 23.0F;
    back_sobj->sprite.attr &= ~SP_FASTCOPY;
    back_sobj->sprite.attr |= SP_TRANSPARENT;
}

// 0x80133370
void mnBonusCreateTitleOptionsAndBackViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x46, 0x400000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133410
u32 mnBonusGetBestTime(s32 ft_kind)
{
    u32 time;

    if (gMnBonusType == 0)
    {
        time = gSaveData.spgame_records[ft_kind].bonus1_time;

        if (time >= 0x34BC0U)
        {
            return 0x34BBFU;
        } else return time;
    }
    else
    {
        time = gSaveData.spgame_records[ft_kind].bonus2_time;

        if (time >= 0x34BC0U)
        {
            return 0x34BBFU;
        } else return time;
    }
}

// 0x80133488
s32 mnBonusGetMinutes(s32 frames)
{
    return frames / 3600;
}

// 0x8013349C
s32 mnBonusGetSeconds(s32 frames)
{
    return (frames % 3600) / 60;
}

// 0x801334C0
s32 mnBonusGetCentiseconds(s32 frames)
{
    s32 seconds = frames % 3600;
    s32 tenths = (seconds % 60) / 6 * 10;
    s32 hundredths = (seconds % 6) / 0.554F;

    return tenths + hundredths;
}

// 0x80133570
s32 mnBonusGetTotalMinutes()
{
    s32 i;
    s32 sum = 0;

    for(i = 0; i < 12; i++)
    {
        if (mnBonusGetIsLocked(i) == FALSE) {
            sum += mnBonusGetMinutes(mnBonusGetBestTime(i));
        }
    }

    return sum;
}

// 0x801335DC
s32 mnBonusGetTotalSeconds()
{
    s32 i;
    s32 sum = 0;

    for(i = 0; i < 12; i++)
    {
        if (mnBonusGetIsLocked(i) == 0) {
            sum += mnBonusGetSeconds(mnBonusGetBestTime(i));
        }
    }

    return sum;
}

// 0x80133648
s32 mnBonusGetTotalCentiseconds()
{
    s32 i;
    s32 sum = 0;

    for(i = 0; i < 12; i++)
    {
        if (mnBonusGetIsLocked(i) == 0) {
            sum += mnBonusGetCentiseconds(mnBonusGetBestTime(i));
        }
    }

    return sum;
}

// 0x801336B4
void mnBonusDrawBestTime()
{
    GObj* best_time_gobj;
    SObj* temp_v0_2;
    SObj* temp_v0_3;
    SObj* temp_v0_4;
    s32 colors1[3] = dMnBonusBestTimeColorsUnused;
    s32 colors2[6] = dMnBonusBestTimeColors;
    s32 best_time;
    s32 ft_kind = mnBonusGetFtKindFromTokenPositionEvenIfLocked();

    if (gMnBonusHighscoreGobj != NULL)
    {
        omEjectGObjCommon(gMnBonusHighscoreGobj);
        gMnBonusHighscoreGobj = NULL;
    }

    if (ft_kind != Ft_Kind_Null)
    {
        best_time = mnBonusGetBestTime(ft_kind);

        gMnBonusHighscoreGobj = best_time_gobj = omMakeGObjCommon(0U, NULL, 0x17U, 0x80000000U);
        omAddGObjRenderProc(best_time_gobj, func_ovl0_800CCF00, 0x1AU, 0x80000000U, -1);

        temp_v0_2 = gcAppendSObjWithSprite(best_time_gobj, GetAddressFromOffset(gMnBonusFilesArray[5], &FILE_017_BEST_TIME_LABEL_IMAGE_OFFSET));
        temp_v0_2->pos.x = 177.0f;
        temp_v0_2->pos.y = 198.0f;
        temp_v0_2->sprite.attr &= ~SP_FASTCOPY;
        temp_v0_2->sprite.attr |= SP_TRANSPARENT;
        temp_v0_2->sprite.red = 0x7E;
        temp_v0_2->sprite.green = 0x7C;
        temp_v0_2->sprite.blue = 0x77;

        mnBonusCreateSmallerNumber(best_time_gobj, mnBonusGetMinutes(best_time), 237.0F, 195.0F, colors2, 2, 1);

        temp_v0_3 = gcAppendSObjWithSprite(best_time_gobj, GetAddressFromOffset(gMnBonusFilesArray[5], &FILE_017_APOSTROPHE_IMAGE_OFFSET));
        temp_v0_3->pos.x = 239.0f;
        temp_v0_3->pos.y = 195.0f;
        temp_v0_3->sprite.attr &= ~SP_FASTCOPY;
        temp_v0_3->sprite.attr |= SP_TRANSPARENT;
        temp_v0_3->shadow_color.r = 0;
        temp_v0_3->shadow_color.g = 0;
        temp_v0_3->shadow_color.b = 0;
        temp_v0_3->sprite.red = 0x7E;
        temp_v0_3->sprite.green = 0x7C;
        temp_v0_3->sprite.blue = 0x77;

        mnBonusCreateSmallerNumber(best_time_gobj, mnBonusGetSeconds(best_time), 259.0F, 195.0F, colors2, 2, 1);

        temp_v0_4 = gcAppendSObjWithSprite(best_time_gobj, GetAddressFromOffset(gMnBonusFilesArray[5], &FILE_017_DOUBLE_QUOTE_IMAGE_OFFSET));
        temp_v0_4->pos.x = 261.0F;
        temp_v0_4->pos.y = 195.0f;
        temp_v0_4->sprite.attr &= ~SP_FASTCOPY;
        temp_v0_4->sprite.attr |= SP_TRANSPARENT;
        temp_v0_4->shadow_color.r = 0;
        temp_v0_4->shadow_color.g = 0;
        temp_v0_4->shadow_color.b = 0;
        temp_v0_4->sprite.red = 0x7E;
        temp_v0_4->sprite.green = 0x7C;
        temp_v0_4->sprite.blue = 0x77;

        mnBonusCreateSmallerNumber(best_time_gobj, mnBonusGetCentiseconds(best_time), 283.0F, 195.0F, colors2, 2, 1);
    }
}

// 0x80133990
u8 mnBonusGetBestCount(s32 ft_kind)
{
    if (gMnBonusType == 0) {
        return gSaveData.spgame_records[ft_kind].bonus1_task_count;
    }
    else return gSaveData.spgame_records[ft_kind].bonus2_task_count;
}

// 0x801339C8
void mnBonusDrawBestCount()
{
    GObj* count_gobj;
    SObj* label_sobj;
    SObj *foo, *bar;
    s32 colors1[3] = dMnBonusBestCountColorsUnused;
    s32 colors2[6] = dMnBonusBestCountColors;
    s32 ft_kind = mnBonusGetFtKindFromTokenPositionEvenIfLocked();

    if (gMnBonusHighscoreGobj != NULL)
    {
        omEjectGObjCommon(gMnBonusHighscoreGobj);
        gMnBonusHighscoreGobj = NULL;
    }

    if (ft_kind != Ft_Kind_Null)
    {
        gMnBonusHighscoreGobj = count_gobj = omMakeGObjCommon(0U, NULL, 0x17U, 0x80000000U);
        omAddGObjRenderProc(count_gobj, func_ovl0_800CCF00, 0x1AU, 0x80000000U, -1);

        if (gMnBonusType == 0)
        {
            label_sobj = gcAppendSObjWithSprite(count_gobj, GetAddressFromOffset(gMnBonusFilesArray[5], &FILE_017_TARGETS_LABEL_IMAGE_OFFSET));
        }
        else
        {
            label_sobj = gcAppendSObjWithSprite(count_gobj, GetAddressFromOffset(gMnBonusFilesArray[5], &FILE_017_PLATFORMS_LABEL_IMAGE_OFFSET));
        }

        label_sobj->pos.x = 235.0f;
        label_sobj->pos.y = 195.0f;
        label_sobj->sprite.attr &= ~SP_FASTCOPY;
        label_sobj->sprite.attr |= SP_TRANSPARENT;
        label_sobj->sprite.red = 0x7E;
        label_sobj->sprite.green = 0x7C;
        label_sobj->sprite.blue = 0x77;

        mnBonusCreateSmallerNumber(count_gobj, mnBonusGetBestCount(ft_kind), 225.0F, 194.0F, colors2, 2, 1);
    }
}

// 0x80133B7C
sb32 mnBonusIsCompleted(s32 ft_kind)
{
    u8 count;

    if (gMnBonusType == 0)
    {
        count = gSaveData.spgame_records[ft_kind].bonus1_task_count;
    }
    else
    {
        count = gSaveData.spgame_records[ft_kind].bonus2_task_count;
    }

    if (count == 10)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80133BCC
void mnBonusDrawHighscore()
{
    if (mnBonusIsCompleted(mnBonusGetFtKindFromTokenPositionEvenIfLocked()) != FALSE)
    {
        mnBonusDrawBestTime();
    }
    else mnBonusDrawBestCount();
}

// 0x80133C14 - Unused?
void func_ovl29_80133C14()
{
    return;
}

// 0x80133C1C
void mnDrawBonusTotalTime()
{
    GObj* best_time_gobj;
    SObj* temp_v0_2;
    SObj* temp_v0_4;
    SObj* temp_v0_3;
    s32 colors1[3] = dMnBonusTotalTimeColorsUnused;
    s32 colors2[6] = dMnBonusTotalTimeColors;
    s32 centiseconds;
    s32 remainder;
    s32 seconds;

    gMnBonusTotalTimeGobj = best_time_gobj = omMakeGObjCommon(0U, NULL, 0x17U, 0x80000000U);
    omAddGObjRenderProc(best_time_gobj, func_ovl0_800CCF00, 0x1AU, 0x80000000U, -1);

    temp_v0_2 = gcAppendSObjWithSprite(best_time_gobj, GetAddressFromOffset(gMnBonusFilesArray[5], &FILE_017_TOTAL_BEST_TIME_LABEL_IMAGE_OFFSET));
    temp_v0_2->pos.x = 142.0f;
    temp_v0_2->pos.y = 209.0f;
    temp_v0_2->sprite.attr &= ~SP_FASTCOPY;
    temp_v0_2->sprite.attr |= SP_TRANSPARENT;
    temp_v0_2->sprite.red = 0x7E;
    temp_v0_2->sprite.green = 0x7C;
    temp_v0_2->sprite.blue = 0x77;

    centiseconds = mnBonusGetTotalCentiseconds();
    remainder = centiseconds / 100;
    mnBonusCreateSmallerNumber(best_time_gobj, centiseconds % 100, 283.0F, 206.0F, colors2, 2, 1);

    temp_v0_4 = gcAppendSObjWithSprite(best_time_gobj, GetAddressFromOffset(gMnBonusFilesArray[5], &FILE_017_DOUBLE_QUOTE_IMAGE_OFFSET));
    temp_v0_4->pos.x = 261.0F;
    temp_v0_4->pos.y = 206.0f;
    temp_v0_4->sprite.attr &= ~SP_FASTCOPY;
    temp_v0_4->sprite.attr |= SP_TRANSPARENT;
    temp_v0_4->shadow_color.r = 0;
    temp_v0_4->shadow_color.g = 0;
    temp_v0_4->shadow_color.b = 0;
    temp_v0_4->sprite.red = 0x7E;
    temp_v0_4->sprite.green = 0x7C;
    temp_v0_4->sprite.blue = 0x77;

    seconds = mnBonusGetTotalSeconds() + remainder;
    remainder = seconds / 60;
    seconds = seconds % 60;
    mnBonusCreateSmallerNumber(best_time_gobj, seconds, 259.0F, 206.0F, colors2, 2, 1);

    temp_v0_3 = gcAppendSObjWithSprite(best_time_gobj, GetAddressFromOffset(gMnBonusFilesArray[5], &FILE_017_APOSTROPHE_IMAGE_OFFSET));
    temp_v0_3->pos.x = 239.0f;
    temp_v0_3->pos.y = 206.0f;
    temp_v0_3->sprite.attr &= ~SP_FASTCOPY;
    temp_v0_3->sprite.attr |= SP_TRANSPARENT;
    temp_v0_3->shadow_color.r = 0;
    temp_v0_3->shadow_color.g = 0;
    temp_v0_3->shadow_color.b = 0;
    temp_v0_3->sprite.red = 0x7E;
    temp_v0_3->sprite.green = 0x7C;
    temp_v0_3->sprite.blue = 0x77;

    mnBonusCreateSmallerNumber(best_time_gobj, mnBonusGetTotalMinutes() + remainder, 237.0F, 206.0F, colors2, 3, 1);
}

// 0x80133F4C - Unused?
void func_ovl29_80133F4C()
{
    return;
}

// 0x80133F54 - Unused?
void func_ovl29_80133F54()
{
    return;
}

// 0x80133F5C
void mnBonusGetAvailableCostume(s32 ft_kind, s32 select_button)
{
    ftCostume_GetIndexFFA(ft_kind, ftCostume_GetIndexFFA(ft_kind, select_button));
}

// 0x80133F88
s32 mnBonusGetSelectedAnimation(s32 ft_kind)
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

// 0x80133FE8
void mnBonusRotateFighter(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);
    s32 port_id = fp->player;

    if (gMnBonusPanel.unk_0x88 == 1)
    {
        if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y < F_DEG_TO_RAD(0.1F))
        {
            if (gMnBonusPanel.selected_animation_started == FALSE)
            {
                func_ovl1_803905CC(gMnBonusPanel.player, mnBonusGetSelectedAnimation(gMnBonusPanel.char_id));

                gMnBonusPanel.selected_animation_started = TRUE;
            }
        }
        else
        {
            DObjGetStruct(fighter_gobj)->rotate.vec.f.y += F_DEG_TO_RAD(20.0F);

            if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > F_DEG_TO_RAD(360.0F))
            {
                DObjGetStruct(fighter_gobj)->rotate.vec.f.y = 0.0F;

                func_ovl1_803905CC(gMnBonusPanel.player, mnBonusGetSelectedAnimation(gMnBonusPanel.char_id));

                gMnBonusPanel.selected_animation_started = TRUE;
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

// 0x80134108
void mnBonusSpawnFighter(GObj* fighter_gobj, s32 port_id, s32 ft_kind)
{
    f32 initial_y_rotation;
    ftSpawnInfo spawn_info = dFighterDefaultSpawn;

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
        gMnBonusPanel.costume_id = spawn_info.costume = mnBonusGetAvailableCostume(ft_kind, 0);
        // spawn_info.shade = 0;
        spawn_info.anim_heap = gMnBonusAnimHeap;
        spawn_info.player = port_id;
        gMnBonusPanel.player = fighter_gobj = ftManager_MakeFighter(&spawn_info);

        omAddGObjCommonProc(fighter_gobj, mnBonusRotateFighter, 1, 1);

        DObjGetStruct(fighter_gobj)->translate.vec.f.x = -700.0F;
        DObjGetStruct(fighter_gobj)->translate.vec.f.y = -850.0F;

        DObjGetStruct(fighter_gobj)->rotate.vec.f.y = initial_y_rotation;

        DObjGetStruct(fighter_gobj)->scale.vec.f.x = menu_zoom[ft_kind];
        DObjGetStruct(fighter_gobj)->scale.vec.f.y = menu_zoom[ft_kind];
        DObjGetStruct(fighter_gobj)->scale.vec.f.z = menu_zoom[ft_kind];
    }
}

// 0x80134274
void mnBonusCreateFighterViewport()
{
    OMCamera *cam = OMCameraGetStruct((GObj*)func_8000B93C(0x401U, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x48600, -1, 1, 1, 0, 1, 0));
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    cam->view.tilt.x = 0.0F;
    cam->view.tilt.y = 0.0F;
    cam->view.tilt.z = 5000.0F;
    cam->flags = 4;
    cam->view.pan.x = 0.0F;
    cam->view.pan.y = 0.0F;
    cam->view.pan.z = 0.0F;
    cam->view.unk.x = 0.0F;
    cam->view.unk.z = 0.0F;
    cam->view.unk.y = 1.0F;
}

// 0x80134364
void mnBonusRedrawCursor(GObj* cursor_gobj, s32 port_id, u32 cursor_state)
{
    SObj* cursor_sobj;
    f32 current_x, current_y;
    GfxColorPair type_colors[4] = dMnBonusCursorTypeColors;
    intptr_t type_offsets[4] = dMnBonusCursorTypeOffsets;
    intptr_t cursor_offsets[3] = dMnBonusCursorOffsets;
    Vec2i type_positions[3] = dMnBonusCursorTypePositions;

    current_x = SObjGetStruct(cursor_gobj)->pos.x;
    current_y = SObjGetStruct(cursor_gobj)->pos.y;

    func_8000B760(cursor_gobj);

    cursor_sobj = gcAppendSObjWithSprite(cursor_gobj, GetAddressFromOffset(gMnBonusFilesArray[0], cursor_offsets[cursor_state]));
    cursor_sobj->pos.x = current_x;
    cursor_sobj->pos.y = current_y;
    cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
    cursor_sobj->sprite.attr |= SP_TRANSPARENT;

    cursor_sobj = gcAppendSObjWithSprite(cursor_gobj, GetAddressFromOffset(gMnBonusFilesArray[0], type_offsets[port_id]));
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

// 0x80134574 - Unused?
void mnBonusCheckPickerRightArrowPress()
{
    return;
}

// 0x8013457C - Unused?
void mnBonusCheckPickerLeftArrowPress()
{
    return;
}

// 0x80134584
s32 mnBonusCheckBackButtonPress(GObj* cursor_gobj)
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

// 0x8013464C
s32 mnBonusCheckTokenPickup(GObj* cursor_gobj, s32 cursor_port_id, s32 port_id)
{
    f32 current_x, current_y;
    s32 range_check;
    SObj* cursor_sobj = SObjGetStruct(cursor_gobj);
    SObj* token_sobj = SObjGetStruct(gMnBonusPanel.token);

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

// 0x80134724
void mnBonusResetPort(s32 port_id)
{
    gMnBonusPanel.is_selected = FALSE;
    gMnBonusPanel.char_id = Ft_Kind_Null;
    gMnBonusPanel.holder_port_id = port_id;
    gMnBonusPanel.held_port_id = port_id;
    gMnBonusPanel.unk_0x88 = FALSE;

    mnBonusReorderCursorsOnPickup(port_id, port_id);

    gMnBonusPanel.unk_0xA0 = FALSE;
}

// 0x8013476C
void mnBonusSyncFighterDisplay(s32 port_id)
{
    s32 var_v0 = 0;

    if ((gMnBonusPanel.char_id == Ft_Kind_Null) && (gMnBonusPanel.is_selected == FALSE))
    {
        gMnBonusPanel.player->obj_renderflags = 1;
        mnBonusDrawHighscore();
        var_v0 = 1;
    }
    if (var_v0 == 0)
    {
        mnBonusSpawnFighter(gMnBonusPanel.player, port_id, gMnBonusPanel.char_id);
        mnBonusDrawHighscore();
        gMnBonusPanel.player->obj_renderflags = 0;
        gMnBonusPanel.selected_animation_started = 0;
    }
}

// 0x801347F0 - Unused?
void func_ovl29_801347F0()
{
    return;
}

// 0x801347F8
void mnBonusSyncNameAndLogo(s32 port_id)
{
    if ((gMnBonusPanel.char_id == Ft_Kind_Null) && (gMnBonusPanel.is_selected == FALSE))
    {
        gMnBonusPanel.name_logo->obj_renderflags = 1;
    }
    else
    {
        gMnBonusPanel.name_logo->obj_renderflags = 0;
        mnBonusSetNameAndLogo(gMnBonusPanel.name_logo, port_id, gMnBonusPanel.char_id);
    }
}

// 0x80134858
void mnBonusRemoveWhiteSquare(s32 port_id)
{
    GObj* white_square_gobj;

    white_square_gobj = gMnBonusPanel.white_square;
    if (white_square_gobj != NULL)
    {
        gMnBonusPanel.white_square = NULL;
        omEjectGObjCommon(white_square_gobj);
    }
}

// 0x80134890
void mnBonusFlashWhiteSquare(GObj* white_square_gobj)
{
    s32 duration = 16;
    s32 frames_to_wait = 1;

    while (TRUE)
    {
        duration--, frames_to_wait--;

        if (duration == 0) mnBonusRemoveWhiteSquare(white_square_gobj->user_data.p);

        if (frames_to_wait == 0)
        {
            frames_to_wait = 1;
            white_square_gobj->obj_renderflags = (white_square_gobj->obj_renderflags == 1) ? 0 : 1;
        }

        stop_current_process(1);
    }
}

// 0x8013491C
void mnBonusCreateWhiteSquare(s32 port_id)
{
    GObj* white_square_gobj;
    SObj* white_square_sobj;
    s32 portrait_id = mnBonusGetPortraitId(gMnBonusPanel.char_id);

    mnBonusRemoveWhiteSquare(port_id);

    gMnBonusPanel.white_square = white_square_gobj = omMakeGObjCommon(0U, NULL, 0x1AU, 0x80000000U);
    omAddGObjRenderProc(white_square_gobj, func_ovl0_800CCF00, 0x21U, 0x80000000U, -1);
    white_square_gobj->user_data.p = port_id;
    omAddGObjCommonProc(white_square_gobj, mnBonusFlashWhiteSquare, 0, 1);

    white_square_sobj = gcAppendSObjWithSprite(white_square_gobj, GetAddressFromOffset(gMnBonusFilesArray[4], &FILE_013_WHITE_SQUARE));
    white_square_sobj->pos.x = (f32) (((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 45) + 26);
    white_square_sobj->pos.y = (f32) (((portrait_id >= 6 ? 1 : 0) * 43) + 37);
}

// 0x80134A50
void mnBonusAnnounceFighter(s32 port_id, s32 panel_id)
{
    u16 announcer_fgms[12] = dMnBonusAnnouncerNames;

    if (gMnBonusPanel.p_sfx != NULL)
    {
        if ((gMnBonusPanel.p_sfx->sfx_id != 0) && (gMnBonusPanel.p_sfx->sfx_id == gMnBonusPanel.sfx_id))
        {
            func_80026738(gMnBonusPanel.p_sfx);
        }
    }

    func_800269C0(0x79U);

    gMnBonusPanel.p_sfx = func_800269C0(announcer_fgms[gMnBonusPanel.char_id]);

    if (gMnBonusPanel.p_sfx != NULL)
    {
        gMnBonusPanel.sfx_id = gMnBonusPanel.p_sfx->sfx_id;
    }
}

// 0x80134B1C - Unused?
void func_ovl29_80134B1C()
{
    return;
}

// 0x80134B24
sb32 mnBonusSelectChar(GObj* cursor_gobj, s32 port_id, s32 arg2, s32 select_button)
{
    if (gMnBonusPanel.cursor_state != mnCursorStateHoldingToken) return FALSE;

    if (gMnBonusPanel.char_id != Ft_Kind_Null) {
        mnBonusSelectCharWithToken(port_id, select_button);
        gMnBonusPanel.min_frames_elapsed_until_recall = gMnBonusFramesElapsed + 0x1E;
        func_800269C0(0x9FU);
        return TRUE;
    }

    func_800269C0(0xA5U);
    return FALSE;
}

// 0x80134BB0
void mnBonusReorderCursorsOnPickup(s32 port_id, s32 token_id)
{
    s32 diplay_orders[4] = dMnBonusTokenPickupDisplayOrders;

    om_g_move_obj_dl(gMnBonusPanel.token, 0x1EU, diplay_orders[port_id] + 1);
}

// 0x80134C1C
void mnBonusReorderCursorsOnPlacement(s32 port_id) {
    s32 unheld_orders[4] = dMnBonusTokenPlaceUnheldDisplayOrders;

    om_g_move_obj_dl(gMnBonusPanel.token, 0x1F, unheld_orders[port_id]);
}

// 0x80134C80
void mnBonusSetCursorCoordinatesFromToken(s32 port_id)
{
    gMnBonusPanel.cursor_pickup_x = SObjGetStruct(gMnBonusPanel.token)->pos.x - 11.0f;
    gMnBonusPanel.cursor_pickup_y = SObjGetStruct(gMnBonusPanel.token)->pos.y - -14.0f;
}

// 0x80134CC4
void mnBonusHandleCursorPickup(s32 port_id)
{
    gMnBonusPanel.holder_port_id = port_id;
    gMnBonusPanel.is_selected = FALSE;
    gMnBonusPanel.cursor_state = mnCursorStateHoldingToken;
    gMnBonusPanel.held_port_id = port_id;
    gMnBonusPanel.unk_0x88 = FALSE;

    mnBonusSyncFighterDisplay();
    mnBonusReorderCursorsOnPickup(port_id, port_id);
    mnBonusSetCursorCoordinatesFromToken(port_id);
    mnBonusRedrawCursor(gMnBonusPanel.cursor, port_id, gMnBonusPanel.cursor_state);

    gMnBonusPanel.unk_0xA0 = TRUE;

    func_800269C0(0x7FU);

    mnBonusRemoveWhiteSquare(port_id);
    mnBonusSyncNameAndLogo(port_id);
}

// 0x80134D54
sb32 mnBonusCheckAndHandleTokenPickup(GObj* cursor_gobj, s32 port_id)
{
    mnCharPanelBonus* panel_info = &gMnBonusPanel;

    if ((gMnBonusFramesElapsed < gMnBonusPanel.min_frames_elapsed_until_recall))
    {
        return FALSE;
    }
    else if (gMnBonusPanel.cursor_state != mnCursorStateNotHoldingToken)
    {
        return FALSE;
    }

    if ((gMnBonusPanel.holder_port_id == 4) && (mnBonusCheckTokenPickup(cursor_gobj, port_id, port_id) != FALSE))
    {
        gMnBonusPanel.holder_port_id = port_id;
        gMnBonusPanel.is_selected = FALSE;
        gMnBonusPanel.cursor_state = mnCursorStateHoldingToken;
        panel_info->held_port_id = port_id;
        gMnBonusPanel.unk_0x88 = FALSE;

        mnBonusSyncFighterDisplay(port_id);
        mnBonusReorderCursorsOnPickup(port_id, port_id);
        mnBonusSetCursorCoordinatesFromToken(port_id);
        mnBonusRedrawCursor(cursor_gobj, port_id, gMnBonusPanel.cursor_state);

        gMnBonusPanel.unk_0xA0 = TRUE;

        func_800269C0(0x7FU);
        mnBonusRemoveWhiteSquare(port_id);
        mnBonusSyncNameAndLogo(port_id);

        return TRUE;
    }

    return FALSE;
}

// 0x80134E50
s32 mnBonusGetFtKindFromTokenPositionEvenIfLocked()
{
    SObj* token_sobj = SObjGetStruct(gMnBonusPanel.token);
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
            return mnBonusGetFtKind((s32) (current_y - 25) / 45);
        }
    }

    is_within_bounds = (current_x >= 79) && (current_x < 122) ? TRUE : FALSE;

    if (is_within_bounds != FALSE)
    {
        is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

        if (is_within_bounds != FALSE)
        {
            return mnBonusGetFtKind(((s32) (current_y - 25) / 45) + 6);
        }
    }
    return Ft_Kind_Null;
}

// 0x80134F6C
s32 mnBonusGetFtKindFromTokenPosition(s32 port_id)
{
    SObj* token_sobj = SObjGetStruct(gMnBonusPanel.token);
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
            char_id = mnBonusGetFtKind((s32) (current_y - 25) / 45);

            if ((mnBonusCheckFighterIsXBoxed(char_id) != FALSE) || (mnBonusGetIsLocked(char_id) != FALSE))
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
            char_id = mnBonusGetFtKind(((s32) (current_y - 25) / 45) + 6);

            if ((mnBonusCheckFighterIsXBoxed(char_id) != FALSE) || (mnBonusGetIsLocked(char_id) != FALSE))
            {
                return Ft_Kind_Null;
            }

            return char_id;
        }
    }
    return Ft_Kind_Null;
}

// 0x801350E4
void mnBonusAutoPositionCursor(GObj* cursor_gobj, s32 port_id)
{
    gmController* controller;
    Vec2i coords[3] = dMnBonusCursorTypePositions2;
    f32 delta;
    sb32 is_within_bounds;

    if (gMnBonusPanel.unk_0xA0 != FALSE)
    {
        delta = (gMnBonusPanel.cursor_pickup_x - SObjGetStruct(gMnBonusPanel.cursor)->pos.x) / 5.0F;

        is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

        if (is_within_bounds != 0)
        {
            SObjGetStruct(gMnBonusPanel.cursor)->pos.x = gMnBonusPanel.cursor_pickup_x;
        }
        else SObjGetStruct(gMnBonusPanel.cursor)->pos.x += delta;

        delta = (gMnBonusPanel.cursor_pickup_y - SObjGetStruct(gMnBonusPanel.cursor)->pos.y) / 5.0F;

        is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

        if (is_within_bounds != 0)
        {
            SObjGetStruct(gMnBonusPanel.cursor)->pos.y = gMnBonusPanel.cursor_pickup_y;
        }
        else SObjGetStruct(gMnBonusPanel.cursor)->pos.y += delta;

        if ((SObjGetStruct(gMnBonusPanel.cursor)->pos.x == gMnBonusPanel.cursor_pickup_x) && (SObjGetStruct(gMnBonusPanel.cursor)->pos.y == gMnBonusPanel.cursor_pickup_y))
        {
            gMnBonusPanel.unk_0xA0 = FALSE;
        }

        SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = (f32) ((f32) coords[gMnBonusPanel.cursor_state].x + SObjGetStruct(cursor_gobj)->pos.x);
        SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = (f32) ((f32) coords[gMnBonusPanel.cursor_state].y + SObjGetStruct(cursor_gobj)->pos.y);
    }
    else if (gMnBonusPanel.is_recalling == FALSE)
    {
        controller = &gPlayerControllers[port_id];
        is_within_bounds = (controller->stick_range.x < -8) || (controller->stick_range.x >= 9) ? TRUE : FALSE;

        if (is_within_bounds != 0)
        {
            delta = ((f32) controller->stick_range.x / 20.0F) + SObjGetStruct(cursor_gobj)->pos.x;

            is_within_bounds = (delta >= 0.0F) && (delta <= 280.0F) ? TRUE : FALSE;

            if (is_within_bounds != 0)
            {
                SObjGetStruct(cursor_gobj)->pos.x = delta;
                SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = SObjGetStruct(cursor_gobj)->pos.x + coords[gMnBonusPanel.cursor_state].x;
            }
        }

        controller = &gPlayerControllers[port_id];
        is_within_bounds = (controller->stick_range.y < -8) || (controller->stick_range.y >= 9) ? TRUE : FALSE;

        if (is_within_bounds != 0)
        {
            delta = ((f32) controller->stick_range.y / -20.0F) + SObjGetStruct(cursor_gobj)->pos.y;

            is_within_bounds = (delta >= 10.0F) && (delta <= 205.0F) ? TRUE : FALSE;

            if (is_within_bounds != 0)
            {
                SObjGetStruct(cursor_gobj)->pos.y = delta;
                SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = SObjGetStruct(cursor_gobj)->pos.y + coords[gMnBonusPanel.cursor_state].y;
            }
        }
    }
}

// 0x8013545C
void mnBonusSyncCursorDisplay(GObj* cursor_gobj, s32 port_id)
{
    s32 i;

    if ((SObjGetStruct(cursor_gobj)->pos.y > 124.0F) || (SObjGetStruct(cursor_gobj)->pos.y < 38.0F))
    {
        if (gMnBonusPanel.cursor_state != mnCursorStatePointer)
        {
            mnBonusRedrawCursor(cursor_gobj, port_id, mnCursorStatePointer);
            gMnBonusPanel.cursor_state = mnCursorStatePointer;
        }
    }
    else
    {
        if (gMnBonusPanel.held_port_id == -1)
        {
            if (gMnBonusPanel.cursor_state != mnCursorStateNotHoldingToken)
            {
                mnBonusRedrawCursor(cursor_gobj, port_id, mnCursorStateNotHoldingToken);
                gMnBonusPanel.cursor_state = mnCursorStateNotHoldingToken;
            }
        }
        else
        {
            if (gMnBonusPanel.cursor_state != mnCursorStateHoldingToken)
            {
                mnBonusRedrawCursor(cursor_gobj, port_id, mnCursorStateHoldingToken);
                gMnBonusPanel.cursor_state = mnCursorStateHoldingToken;
            }
        }
    }

    if ((gMnBonusPanel.cursor_state == mnCursorStatePointer) && (gMnBonusPanel.is_selected != 0))
    {
        for (i = 0; i < 4; i++)
        {
            if ((gMnBonusPanel.is_selected == 1) && (mnBonusCheckTokenPickup(cursor_gobj, port_id, i) != 0))
            {
                mnBonusRedrawCursor(cursor_gobj, port_id, mnCursorStateNotHoldingToken);
                gMnBonusPanel.cursor_state = mnCursorStateNotHoldingToken;
                return;
            }
        }
    }
}

// 0x801355E0
void mnBonusSyncShadeAndCostume(s32 arg0, s32 select_button)
{
    s32 costume_id = ftCostume_GetIndexFFA(gMnBonusPanel.char_id, select_button);

    func_ovl2_800E9248(gMnBonusPanel.player, costume_id, 0);

    gMnBonusPanel.costume_id = costume_id;

    func_800269C0(0xA4U);
}

// 0x80135634
sb32 mnBonusIsHumanWithCharacterSelected(s32 arg0)
{
    if (gMnBonusPanel.is_selected != FALSE)
    {
        return TRUE;
    }
    return FALSE;
}

// 0x8013565C
void mnBonusRecallToken(s32 port_id)
{
    gMnBonusPanel.unk_0x88 = FALSE;
    gMnBonusPanel.is_selected = FALSE;
    gMnBonusPanel.is_recalling = TRUE;
    gMnBonusPanel.recall_frame_counter = 0;
    gMnBonusPanel.recall_start_x = SObjGetStruct(gMnBonusPanel.token)->pos.x;
    gMnBonusPanel.recall_start_y = SObjGetStruct(gMnBonusPanel.token)->pos.y;

    gMnBonusPanel.recall_end_x = SObjGetStruct(gMnBonusPanel.cursor)->pos.x + 20.0F;

    if (gMnBonusPanel.recall_end_x > 280.0F)
    {
        gMnBonusPanel.recall_end_x = 280.0F;
    }

    gMnBonusPanel.recall_end_y = SObjGetStruct(gMnBonusPanel.cursor)->pos.y + -15.0F;

    if (gMnBonusPanel.recall_end_y < 10.0F)
    {
        gMnBonusPanel.recall_end_y = 10.0F;
    }

    if (gMnBonusPanel.recall_end_y < gMnBonusPanel.recall_start_y)
    {
        gMnBonusPanel.recall_mid_y = gMnBonusPanel.recall_end_y - 20.0F;
    }
    else
    {
        gMnBonusPanel.recall_mid_y = gMnBonusPanel.recall_start_y - 20.0F;
    }
}

// 0x80135740
void mnBonusGoBackTo1PMenu()
{
    if (gMnBonusType == 0)
    {
        gSceneData.scene_previous = 0x13;
    }
    else  gSceneData.scene_previous = 0x14;

    gSceneData.scene_current = 8;

    mnBonusSaveMatchInfo();
    func_80020A74();
    func_800266A0();
    func_80005C74();
}

// 0x801357AC
void mnBonusExitIfBButtonPressed(s32 port_id)
{
    gmController* controller = &gPlayerControllers[port_id];

    if ((gMnBonusFramesElapsed >= 10) && (controller->button_new & B_BUTTON))
    {
        mnBonusGoBackTo1PMenu();
    }
}

// 0x80135800
sb32 mnBonusCheckTitlePress(GObj* cursor_gobj)
{
    f32 current_x, current_y;
    s32 range_check;
    SObj* cursor_sobj;

    cursor_sobj = SObjGetStruct(cursor_gobj);

    current_x = cursor_sobj->pos.x + 20.0F;

    range_check = (current_x >= 27.0F) && (current_x <= 207.0F) ? TRUE : FALSE;

    if (range_check)
    {
        current_y = cursor_sobj->pos.y + 3.0F;

        range_check = (current_y >= 14.0F) && (current_y <= 35.0F) ? TRUE : FALSE;
        if (range_check) return TRUE;
    }
    return FALSE;
}

// 0x801358C4
void mnBonusHandleTitlePress()
{
    if (gMnBonusType == 0)
    {
        gMnBonusType = 1;
    }
    else gMnBonusType = 0;

    omEjectGObjCommon(gMnBonusTitleGObj);
    mnBonusDrawTitleAndBack();
    mnBonusDrawHighscore();

    if (gMnBonusTotalTimeGobj != NULL)
    {
        omEjectGObjCommon(gMnBonusTotalTimeGobj);
        gMnBonusTotalTimeGobj = NULL;
    }

    if (mnBonusAreAllCompleted() != FALSE)
    {
        mnDrawBonusTotalTime();
    }
}

// 0x80135950
void mnBonusHandleButtonPresses(GObj* cursor_gobj)
{
    s32 port_id = cursor_gobj->user_data.s;
    gmController* controller = &gPlayerControllers[port_id];
    mnCharPanelBonus* panel_info;
    s32 foo, bar, baz;

    mnBonusAutoPositionCursor(cursor_gobj, port_id);

    if ((controller->button_new & A_BUTTON)
        && (mnBonusSelectChar(cursor_gobj, port_id, gMnBonusPanel.held_port_id, 0) == FALSE)
        && (mnBonusCheckAndHandleTokenPickup(cursor_gobj, port_id) == FALSE))
    {
        if (mnBonusCheckTitlePress(cursor_gobj) != FALSE)
        {
            mnBonusHandleTitlePress();
        }
        else if (mnBonusCheckBackButtonPress(cursor_gobj) != FALSE)
        {
                mnBonusGoBackTo1PMenu();
                func_800269C0(0xA4U);
        }
    }

    if ((controller->button_new & U_CBUTTONS)
        && (mnBonusSelectChar(cursor_gobj, port_id, gMnBonusPanel.held_port_id, 0) == FALSE)
        && (gMnBonusPanel.unk_0x88 != FALSE))
    {
        mnBonusSyncShadeAndCostume(port_id, 0);
    }
    if ((controller->button_new & R_CBUTTONS)
        && (mnBonusSelectChar(cursor_gobj, port_id, gMnBonusPanel.held_port_id, 1) == FALSE)
        && (gMnBonusPanel.unk_0x88 != FALSE))
    {
        mnBonusSyncShadeAndCostume(port_id, 1);
    }
    if ((controller->button_new & D_CBUTTONS)
        && (mnBonusSelectChar(cursor_gobj, port_id, gMnBonusPanel.held_port_id, 2) == FALSE)
        && (gMnBonusPanel.unk_0x88 != FALSE))
    {
        mnBonusSyncShadeAndCostume(port_id, 2);
    }
    if ((controller->button_new & L_CBUTTONS)
        && (mnBonusSelectChar(cursor_gobj, port_id, gMnBonusPanel.held_port_id, 3) == FALSE)
        && (gMnBonusPanel.unk_0x88 != FALSE))
    {
        mnBonusSyncShadeAndCostume(port_id, 3);
    }

    if ((controller->button_new & B_BUTTON) && (mnBonusIsHumanWithCharacterSelected(port_id) != FALSE))
    {
        mnBonusRecallToken(port_id);
    }
    if (gMnBonusPanel.is_recalling == FALSE)
    {
        mnBonusExitIfBButtonPressed(port_id);
    }
    if (gMnBonusPanel.is_recalling == FALSE)
    {
        mnBonusSyncCursorDisplay(cursor_gobj, port_id);
    }
}

// 0x80135BA4 - Unused?
void func_ovl29_80135BA4()
{
    return;
}

// 0x80135BAC - Unused?
void func_ovl29_80135BAC()
{
    return;
}

// 0x80135BB4
void mnBonusMoveToken(s32 port_id)
{
    SObjGetStruct(gMnBonusPanel.token)->pos.x += gMnBonusPanel.token_x_velocity;
    SObjGetStruct(gMnBonusPanel.token)->pos.y += gMnBonusPanel.token_y_velocity;
}

// 0x80135BF4
void mnBonusSyncTokenAndFighter(GObj* token_gobj)
{
    s32 ft_kind;
    s32 port_id = token_gobj->user_data.s;

    if ((gMnBonusPanel.cursor_state != mnCursorStatePointer)
        || (gMnBonusPanel.is_selected == TRUE)
        || (gMnBonusPanel.is_recalling == TRUE))
    {
        token_gobj->obj_renderflags = 0;
    }
    else
    {
        token_gobj->obj_renderflags = 1;
    }

    if ((gMnBonusPanel.is_selected == FALSE)
        && (gMnBonusPanel.holder_port_id != 4)) {
        if (gMnBonusPanel.unk_0xA0 == FALSE) {
            SObjGetStruct(token_gobj)->pos.x = (f32) (SObjGetStruct(gMnBonusPanel.cursor)->pos.x + 11.0F);
            SObjGetStruct(token_gobj)->pos.y = (f32) (SObjGetStruct(gMnBonusPanel.cursor)->pos.y + -14.0F);
        }
    }
    else {
        mnBonusMoveToken(port_id);
    }

    ft_kind = mnBonusGetFtKindFromTokenPosition(port_id);

    if ((gMnBonusPanel.is_selected == FALSE)
        && (ft_kind != gMnBonusPanel.char_id))
    {
        gMnBonusPanel.char_id = ft_kind;

        mnBonusSyncFighterDisplay(port_id);
        mnBonusSyncNameAndLogo(port_id);
    }
    mnBonusDrawHighscore();
}

// 0x80135D08
void mnBonusCreateReadyToFightViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0xA, 0x800000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135DA8
void mnBonusCreateCursorViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0xD, 0x40000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135E48
void mnBonusCreateDroppedTokenViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0xF, 0x80000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135EE8
void mnBonusCreateCursor(s32 port_id)
{
    GObj* cursor_gobj;
    s32 unused;
    intptr_t unk1[4] = dMnBonusCursorTypeOffsetsUnused;
    s32 unk3[4] = dMnBonusCursorStartingDisplayOrders;

    cursor_gobj = func_ovl0_800CD050(0, NULL, 0x13, 0x80000000, func_ovl0_800CCF00, 0x1E, unk3[port_id], -1, GetAddressFromOffset(gMnBonusFilesArray[0], &FILE_011_CURSOR_POINTER_IMAGE_OFFSET), 1, mnBonusHandleButtonPresses, 2);

    cursor_gobj->user_data.s = port_id;
    gMnBonusPanel.cursor = cursor_gobj;
    SObjGetStruct(cursor_gobj)->pos.x = 80.0F;
    SObjGetStruct(cursor_gobj)->pos.y = 170.0F;
    SObjGetStruct(cursor_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(cursor_gobj)->sprite.attr |= SP_TRANSPARENT;

    mnBonusRedrawCursor(cursor_gobj, port_id, 0);
    gMnBonusPanel.is_selected = FALSE;
}

// 0x80136034
void mnBonusCreateToken(s32 port_id)
{
    GObj* token_gobj;
    mnCharPanelBonus* panel_info;
    intptr_t offsets[4] = dMnBonusTokenOffsetsNoCPU;
    s32 orders1[4] = dMnBonusTokenStartingDisplayOrders;

    token_gobj = func_ovl0_800CD050(0, NULL, 0x14, 0x80000000, func_ovl0_800CCF00, 0x1F, orders1[port_id], -1, GetAddressFromOffset(gMnBonusFilesArray[0], offsets[port_id]), 1, mnBonusSyncTokenAndFighter, 1);

    token_gobj->user_data.s = port_id;
    gMnBonusPanel.token = token_gobj;

    SObjGetStruct(token_gobj)->pos.x = 51.0F;
    SObjGetStruct(token_gobj)->pos.y = 161.0F;
    SObjGetStruct(token_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(token_gobj)->sprite.attr |= SP_TRANSPARENT;

    if (D_ovl29_801376D8[port_id] != -1)
    {
        gMnBonusPanel.holder_port_id = port_id;
    }
    else gMnBonusPanel.holder_port_id = 4;
}

// 0x801361A4 - Unused?
void func_ovl29_801361A4()
{
    return;
}

// 0x801361AC
void mnBonusAutopositionTokenFromPortraitEdges(s32 port_id)
{
    s32 portrait_id = mnBonusGetPortraitId(gMnBonusPanel.char_id);
    f32 portrait_edge_x = ((portrait_id >= 6) ? portrait_id - 6 : portrait_id) * 45 + 25;
    f32 portrait_edge_y = ((portrait_id >= 6) ? 1 : 0) * 43 + 36;
    f32 new_pos_x = SObjGetStruct(gMnBonusPanel.token)->pos.x + gMnBonusPanel.token_x_velocity + 13.0F;
    f32 new_pos_y = SObjGetStruct(gMnBonusPanel.token)->pos.y + gMnBonusPanel.token_y_velocity + 12.0F;

    if (new_pos_x < (portrait_edge_x + 5.0F))
    {
        gMnBonusPanel.token_x_velocity = ((portrait_edge_x + 5.0F) - new_pos_x) / 10.0F;
    }
    if (((portrait_edge_x + 45.0F) - 5.0F) < new_pos_x)
    {
        gMnBonusPanel.token_x_velocity = ((new_pos_x - ((portrait_edge_x + 45.0F) - 5.0F)) * -1.0F) / 10.0F;
    }
    if (new_pos_y < (portrait_edge_y + 5.0F))
    {
        gMnBonusPanel.token_y_velocity = ((portrait_edge_y + 5.0F) - new_pos_y) / 10.0F;
    }
    if (((portrait_edge_y + 43.0F) - 5.0F) < new_pos_y)
    {
        gMnBonusPanel.token_y_velocity = ((new_pos_y - ((portrait_edge_y + 43.0F) - 5.0F)) * -1.0F) / 10.0F;
    }
}

// 0x8013635C
void mnBonusAutopositionPlacedToken(s32 port_id)
{
    mnBonusAutopositionTokenFromPortraitEdges(port_id);
}

// 0x8013637C
void mnBonusAutopositionRecalledToken(s32 port_id)
{
    f32 new_y_velocity, new_x_velocity;

    gMnBonusPanel.recall_frame_counter += 1;

    if (gMnBonusPanel.recall_frame_counter < 11)
    {
        new_x_velocity = (gMnBonusPanel.recall_end_x - gMnBonusPanel.recall_start_x) / 10.0F;

        if (gMnBonusPanel.recall_frame_counter < 6)
        {
            new_y_velocity = (gMnBonusPanel.recall_mid_y - gMnBonusPanel.recall_start_y) / 5.0F;
        }
        else
        {
            new_y_velocity = (gMnBonusPanel.recall_end_y - gMnBonusPanel.recall_mid_y) / 5.0F;
        }

        gMnBonusPanel.token_x_velocity = new_x_velocity;
        gMnBonusPanel.token_y_velocity = new_y_velocity;
    }
    else if (gMnBonusPanel.recall_frame_counter == 11)
    {
        mnBonusHandleCursorPickup(port_id);

        gMnBonusPanel.token_x_velocity = 0.0F;
        gMnBonusPanel.token_y_velocity = 0.0F;
    }
    if (gMnBonusPanel.recall_frame_counter == 30)
    {
        gMnBonusPanel.is_recalling = FALSE;
    }
}

// 0x80136450
void mnBonusAutopositionToken(s32 port_id)
{
    if (gMnBonusPanel.is_recalling != FALSE)
    {
        mnBonusAutopositionRecalledToken(gMnBonusHumanPanelPort);
    }
    if (gMnBonusPanel.is_selected != FALSE)
    {
        mnBonusAutopositionPlacedToken(0);
    }
}

// 0x8013649C
void mnBonusCreateTokenAutopositionRoutine()
{
    omAddGObjCommonProc(omMakeGObjCommon(0U, NULL, 0x18U, 0x80000000U), mnBonusAutopositionToken, 1, 1);
}

// 0x801364E0
void mnBonusSyncWhiteCircleSizeAndDisplay(GObj* white_circle_gobj)
{
    f32 sizes[12] = dMnBonusWhiteCircleSizes;

    if ((gMnBonusPanel.unk_0x88 == 0) && (gMnBonusPanel.char_id != Ft_Kind_Null))
    {
        white_circle_gobj->obj_renderflags = (white_circle_gobj->obj_renderflags == 1) ? 0 : 1;

        DObjGetStruct(white_circle_gobj)->scale.vec.f.x = sizes[gMnBonusPanel.char_id];
        DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[gMnBonusPanel.char_id];
        DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[gMnBonusPanel.char_id];
    }
    else white_circle_gobj->obj_renderflags = 1;
}

// 0x801365B8
void mnBonusCreateWhiteCircles()
{
    GObj* white_circle_gobj;

    white_circle_gobj = omMakeGObjCommon(0U, NULL, 0x15U, 0x80000000U);

    func_8000F120(white_circle_gobj, GetAddressFromOffset(gMnBonusFilesArray[10], &FILE_016_WHITE_CIRCLE_OFFSET_2), 0);

    omAddGObjRenderProc(white_circle_gobj, func_80014768, 9U, 0x80000000U, -1);

    func_8000F8F4(white_circle_gobj, GetAddressFromOffset(gMnBonusFilesArray[10], &FILE_016_WHITE_CIRCLE_OFFSET_1));

    omAddGObjCommonProc(white_circle_gobj, mnBonusSyncWhiteCircleSizeAndDisplay, 1, 1);

    func_8000DF34(white_circle_gobj);

    DObjGetStruct(white_circle_gobj)->translate.vec.f.x = -700.0f;
    DObjGetStruct(white_circle_gobj)->translate.vec.f.y = -870.0f;
    DObjGetStruct(white_circle_gobj)->translate.vec.f.z = 0.0f;
}

// 0x80136698
void func_ovl29_80136698(GObj* gobj)
{
    if (gMnBonusCharSelected != FALSE)
    {
        gMnBonusPressStartFlashTimer += 1;

        if (gMnBonusPressStartFlashTimer == 0x28)
        {
            gMnBonusPressStartFlashTimer = 0;
        }

        gobj->obj_renderflags = (gMnBonusPressStartFlashTimer < 0x1E) ? 0 : 1;
    }
    else
    {
        gobj->obj_renderflags = 1;
        gMnBonusPressStartFlashTimer = 0;
    }
}

// 0x80136704
void mnBonusCreateReadyToFightObjects()
{
    GObj* gobj;
    SObj* sobj;

    // Ready to Fight banner
    gobj = omMakeGObjCommon(0U, NULL, 0x1CU, 0x80000000U);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0x23U, 0x80000000U, -1);
    omAddGObjCommonProc(gobj, func_ovl29_80136698, 1, 1);

    // Ready to Fight banner bg
    sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMnBonusFilesArray[0], &FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET));
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
    sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMnBonusFilesArray[0], &FILE_011_READY_TO_FIGHT_IMAGE_OFFSET));
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
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0x1CU, 0x80000000U, -1);
    omAddGObjCommonProc(gobj, func_ovl29_80136698, 1, 1);

    // "Press"
    sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMnBonusFilesArray[0], &FILE_011_PRESS_IMAGE_OFFSET));
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    sobj->sprite.red = 0xD6;
    sobj->sprite.green = 0xDD;
    sobj->sprite.blue = 0xC6;
    sobj->pos.x = 133.0f;
    sobj->pos.y = 219.0f;

    // "Start"
    sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMnBonusFilesArray[0], &FILE_011_START_IMAGE_OFFSET));
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0x56;
    sobj->sprite.blue = 0x92;
    sobj->pos.x = 162.0f;
    sobj->pos.y = 219.0f;
}

// 0x80136980 - Unused?
void func_ovl29_80136980()
{
    return;
}

// 0x80136988 - Unused?
void func_ovl29_80136988()
{
    return;
}

// 0x80136990 - Unused?
void func_ovl29_80136990()
{
    return;
}

// 0x80136998
void mnBonusSaveMatchInfo()
{
    gSceneData.spgame_player = gMnBonusHumanPanelPort;
    gSceneData.bonus_char_id = gMnBonusPanel.char_id;
    gSceneData.bonus_costume_id = gMnBonusPanel.costume_id;
}

// 0x801369C8 - Unused?
void func_ovl29_801369C8()
{
    return;
}

// 0x801369D0
void mnBonusMain(s32 arg0)
{
    gMnBonusFramesElapsed += 1;

    if (gMnBonusFramesElapsed == gMnBonusMaxFramesElapsed)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = 1;

        mnBonusSaveMatchInfo();
        func_80005C74();

        return;
    }

    if (func_ovl1_80390B7C() == 0)
    {
        gMnBonusMaxFramesElapsed = gMnBonusFramesElapsed + 0x4650;
    }

    if (gMnBonusCharSelected != FALSE && gMnBonusPanel.unk_0x88 == FALSE)
    {
        gMnBonusCharSelected = 0;
    }

    if (gMnBonusCharSelected != FALSE && (--gMnBonusAutostartTimer == 0 || gPlayerControllers[gMnBonusHumanPanelPort].button_new & START_BUTTON))
    {

        if (gMnBonusType == 0)
        {
            gSceneData.scene_previous = 0x13;
        }
        else gSceneData.scene_previous = 0x14;

        gSceneData.scene_current = 0x35;

        mnBonusSaveMatchInfo();
        func_80005C74();
    }
}

// 0x80136B14 - Unused?
void func_ovl29_80136B14()
{
    return;
}

// 0x80136B1C - Unused?
void func_ovl29_80136B1C()
{
    return;
}

// 0x80136B24
void mnBonusInitPort()
{
    gMnBonusPanel.held_port_id = -1;
    gMnBonusPanel.white_square = NULL;
    gMnBonusPanel.p_sfx = NULL;
    gMnBonusPanel.sfx_id = 0;
    gMnBonusPanel.is_selected = FALSE;
    gMnBonusPanel.is_recalling = FALSE;
    gMnBonusPanel.char_id = Ft_Kind_Null;
}

// 0x80136B54
void mnBonusLoadMatchInfo()
{
    gMnBonusFramesElapsed = 0;
    gMnBonusMaxFramesElapsed = gMnBonusFramesElapsed + 0x4650;
    D_ovl29_801376D4 = 5;
    gMnBonusCharSelected = FALSE;
    gMnBonusHumanPanelPort = gSceneData.spgame_player;
    gMnBonusTotalTimeGobj = NULL;
    gMnBonusIsTeamBattle = D_800A4B18.is_team_battle;
    gMnBonusRule = D_800A4B18.match_rules;

    mnBonusInitPort();

    gMnBonusPanel.min_frames_elapsed_until_recall = 0;
    gMnBonusCharacterUnlockedMask = gSaveData.character_mask;

    if (gSceneData.scene_current == 0x13)
    {
        gMnBonusType = 0;
    }
    else gMnBonusType = 1;
}

// 0x80136C14
void mnBonusInitPanel(s32 port_id)
{
    if (D_ovl29_801376D8[port_id] != -1)
    {
        mnBonusCreateCursor(port_id);
    }
    else gMnBonusPanel.cursor = NULL;

    mnBonusCreateToken(port_id);
    mnBonusCreatePanel(port_id);
    mnBonusResetPort(port_id);
}

// 0x80136C80 - Unused?
void func_ovl29_80136C80()
{
    return;
}

// 0x80136C88
sb32 mnBonusAreAllCompleted() {
    s32 i;

    for (i = 0; i < 12; i++)
    {
        if (mnBonusIsCompleted(i) == FALSE)
        {
            return FALSE;
        }
    }

    return TRUE;
}

// 0x80136CD8
void mnBonusInitCSS()
{
    s32 bar, baz;
    rdSetup rldmSetup;
    f32 foo;
    s32 i;
    s32 j;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl29_80137A38;
    rldmSetup.statusBufSize = 0x78;
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl29_80137A00;
    rldmSetup.forceBufSize = 7;
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl29_80136F50, 11U, gMnBonusFilesArray, hlMemoryAlloc(rdManagerGetAllocSize(D_ovl29_80136F50, 11U), 0x10U));

    omMakeGObjCommon(0x400U, &mnBonusMain, 0xFU, 0x80000000U);
    func_8000B9FC(0x10, 0x80000000U, 0x64, 1, 0);
    func_ovl2_80115890();
    efManager_AllocUserData();
    ftManager_AllocFighterData(1U, 1);

    for (i = 0; i < 12; i++)
    {
        ftManager_SetFileDataKind(i);
    }

    gMnBonusAnimHeap = hlMemoryAlloc(D_ovl2_80130D9C, 0x10U);

    mnBonusLoadMatchInfo();
    mnBonusCreatePortraitViewport();
    mnBonusCreateCursorViewport();
    mnBonusCreateDroppedTokenViewport();
    mnBonusCreatePanelViewport();
    mnBonusCreateFighterViewport();
    mnBonusCreatePortraitBackgroundViewport();
    mnBonusCreatePortraitWhiteBackgroundViewport();
    mnBonusCreateBackgroundViewport();
    mnBonusCreateTitleOptionsAndBackViewport();
    mnBonusCreateReadyToFightViewport();
    mnBonusCreateBackground();
    mnBonusCreatePortraits();
    mnBonusInitPanel(gMnBonusHumanPanelPort);
    mnBonusDrawTitleAndBack();
    if (mnBonusAreAllCompleted() != FALSE)
    {
        mnDrawBonusTotalTime();
    }
    mnBonusCreateTokenAutopositionRoutine();
    mnBonusCreateWhiteCircles();
    mnBonusCreateReadyToFightObjects();
    func_ovl1_803904E0(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

    if (gSceneData.scene_previous != 0x15)
    {
        func_80020AB4(0, 0xA);
    }
}

// bonus_css_entry
void bonus_css_entry()
{
    D_ovl29_80137530.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl29_80137530);
    D_ovl29_8013754C.arena_size = (u32) ((uintptr_t)&lOverlay29ArenaHi - (uintptr_t)&lOverlay29ArenaLo);
    func_8000683C(&D_ovl29_8013754C);
}