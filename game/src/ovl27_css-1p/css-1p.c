#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>
#include <css-1p.h>

// ovl1 stuff
extern f32 menu_zoom[12]; // D_ovl1_80390D90

// ovl27 stuff
extern RldmFileId D_ovl27_80138630[11];

extern intptr_t dMN1PSmallerNumberOffsets[10]; // 0x80138690[10];
extern intptr_t dMN1PChrOffsets[29]; // 0x801386B8[29];
extern f32 dMN1PChrWidths[29]; // 0x8013872C[29];

extern f32 dMN1PPortraitPositionsX[12]; // 0x801387A0[12]
extern f32 dMN1PPortraitVelocities[12]; // 0x801387D0[12]
extern Vec2f dMN1PPortraitPositionsXY[12]; // 0x80138800[12];

extern s32 dMN1PFtKindOrder[12]; // 0x80138884[12];
extern s32 dMN1PPortraitOrder[12]; // 0x801388B4[12];
extern s32 dMN1PLockedPortraitOffsets[12]; // 0x801388E4[12];
extern s32 dMN1PPortraitOffsets[12]; // 0x80138914[12];
extern Vec2f dMN1PUnusedPositions[12]; // 0x80138944[12];
extern s32 dMN1PLogoOffsets[12]; // 0x801389A4[12];
extern s32 dMN1PNameOffsets[12]; // 0x801389D4[12];
extern intptr_t dMN1PPanelOffsets[4]; // 0x80138A04[4];
extern intptr_t dMN1PTypeOffsets[4]; // 0x80138A14[4];
extern f32 dMN1PTypeOffsetsX[4]; // 0x80138A24[4];
extern intptr_t dMN1PNumberOffsets[10]; // 0x80138A34[10];
extern f32 dMN1PNumberWidths[10]; // 0x80138A5C[10];
extern s32 dMN1PNumberColorsTime[6]; // 0x80138A84[6];
extern intptr_t dMN1PLevelOffsets[5]; // 0x80138A9C[5]
extern Vec2f dMN1PLevelPositions[5]; // 0x80138AB0[5]
extern gsColorRGB dMN1PLevelColors[5]; // 0x80138AD8[5]
extern s32 dMN1PHighscoreTextColors[3]; // 0x80138AE8;
extern s32 dMN1PHighscoreNumberColors[6]; // 0x80138AF4;
extern gsColorRGB dMN1PHighscoreSmashLogoColors[5]; // 0x80138B0C;
extern s32 dMN1PBonusesNumberColors[6]; // 0x80138B1C;
extern s32 dMN1PTotalHighscoreTextColors[3]; // 0x80138B34;
extern s32 dMN1PHighscoreNumberColors[6]; // 0x80138B40;
extern s32 dMN1PTotalBonusesNumberColors[6]; // 0x80138B58;
extern gsColorRGBPair dMN1PCursorTypeColors[4]; // 0x80138B70[4]; // cursor type texture colors
extern intptr_t dMN1PCursorTypeOffsets[4]; // 0x80138B88[4]; // cursor type texture offsets
extern intptr_t dMN1PCursorOffsets[3]; // 0x80138B98[3]; // cursor offsets
extern Vec2i dMN1PCursorTypePositions[3]; // 0x80138BA4[3]; // x,y offset pairs for cursor type texture
extern u16 dMN1PAnnouncerNames[12]; // 0x80138BBC[12]; // announcer names
extern s32 dMN1PTokenPickupDisplayOrders[4]; // 0x80138BD4[4]; // display orders for cursors on token pickup
extern s32 dMN1PTokenPlaceUnheldDisplayOrders[4]; // 0x80138BE4[4]; // display orders for cursors not holding tokens on token placement
extern Vec2i dMN1PCursorTypePositions2[3]; // 0x80138BF4[3]; // x,y offset pairs for cursor type texture

extern intptr_t dMN1PCursorTypeOffsetsUnused[4]; // 0x80138C20[4]; // cursor type texture offsets
extern s32 dMN1PCursorStartingDisplayOrders[4]; // 0x80138C30[4]; // display orders for cursors on initial load
extern intptr_t dMN1PTokenOffsetsNoCPU[4]; // 0x80138C40; // token offsets not including cpu
extern s32 dMN1PTokenStartingDisplayOrders[4]; // 0x80138C50; // display orders for tokens on initial load
extern f32 dMN1PWhiteCircleSizes[12]; // 0x80138C60[12]; // white circle size

extern scUnkDataBounds D_ovl27_80138C90;
extern scRuntimeInfo D_ovl27_80138CAC;

extern char* gMNHighscoreString; // 0x80138D40
extern char* gMNTotalHighscoreString; // 0x80138D4C

extern mnCharPanel1P gMN1PPanel; // 0x80138EE8;

extern s32 gMN1PHumanPanelPort; // 0x80138FA8
extern GObj* gMN1PPickerGObj; // 0x80138F70; // stock/time picker
extern s32 gMN1PFramesElapsed; // 0x80138F74; // frames elapsed on CSS
extern s32 gMN1PMaxFramesElapsed; // 0x80138F78; // frames to wait until exiting the CSS
extern s32 gMN1PPressStartFlashTimer; // 0x80138F7C; looping timer that helps determine blink rate of Press Start (and Ready to Fight?)
extern s32 gMN1PTimerValue; // 0x80138F80;

extern s32 gMN1PStartDelayTimer; // 0x80138F98;
extern sb32 gMN1PIsStartTriggered; // 0x80138F9C;
extern s32 gMN1PIsTeamBattle; // 0x80138FA0
extern s32 gMN1PRule; // 0x80138FA4

extern GObj* gMN1PHighscoreGObj; // 0x80138FAC
extern GObj* gMN1PBonusesGObj; // 0x80138FB0
extern s32 gMN1PLevelValue; // 0x80138FB4; // level
extern s32 gMN1PStockValue; // 0x80138FB8; // stocks
extern GObj* gMN1PLevelGObj; // 0x80138FBC;
extern GObj* gMN1PStockGObj; // 0x80138FC0;
extern void* gMN1PAnimHeap; // 0x80138FC4;
extern u16 gMN1PCharacterUnlockedMask; // 0x80138FC8; // flag indicating which bonus chars are available
extern s32 gMN1PFtKind; // 0x80138FCC
extern s32 gMN1PCostumeId; // 0x80138FD0

// extern s32 D_ovl26_8013BDC8;

extern rdFileNode D_ovl27_801392A8;
extern u32 D_ovl27_801392E0[240];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern s32 gMN1PFilesArray[11]; // 0x801396A0[11]
// extern s32 gFile011; // 0x801396A0; // file 0x011 pointer
// extern s32 gFile014; // 0x801396A4; // file 0x014 pointer
// extern s32 gFile015; // 0x801396A8; // file 0x015 pointer
// extern s32 gFile012; // 0x801396AC; // file 0x012 pointer
// extern s32 gFile013; // 0x801396B0; // file 0x013 pointer
// extern s32 gFile017; // 0x801396B4; // file 0x017 pointer
// extern s32 gFile018; // 0x801396B8; // file 0x018 pointer
// extern s32 gFile019; // 0x801396BC; // file 0x019 pointer
// extern s32 gFile021; // 0x801396C0; // file 0x021 pointer
// extern s32 gFile024; // 0x801396C4; // file 0x024 pointer
// extern s32 gFile016; // 0x801396C8; // file 0x016 pointer

// // Offsets
extern intptr_t FILE_011_START_IMAGE_OFFSET = 0x1378; // Press Start's "Start" texture
extern intptr_t FILE_011_PRESS_IMAGE_OFFSET = 0x14D8; // Press Start's "Press" texture
extern intptr_t FILE_011_INFINITY_IMAGE_OFFSET = 0x3EF0; // file 0x011 image offset for infinity symbol
extern intptr_t FILE_011_PICKER_TIME_IMAGE_OFFSET = 0x48B0; // file 0x011 image offset for Time picker texture
extern intptr_t FILE_011_ARROW_L_IMAGE_OFFSET = 0xECE8; // file 0x011 image offset for left arrow
extern intptr_t FILE_011_ARROW_R_IMAGE_OFFSET = 0xEDC8; // file 0x011 image offset for right arrow
extern intptr_t FILE_011_READY_TO_FIGHT_IMAGE_OFFSET = 0xF448; // Ready to Fight banner text
extern intptr_t FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET = 0xF530; // Ready to Fight banner bg
extern intptr_t FILE_011_BACK_IMAGE_OFFSET = 0x115C8; // file 0x011 image offset for

extern s32 FILE_013_XBOX_IMAGE_OFFSET = 0x2B8; // file 0x013 image offset
extern intptr_t FILE_013_WHITE_SQUARE = 0x6F0; // white square
extern s32 FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET = 0xF68; // file 0x013 image offset for portrait question mark image
extern s32 FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET = 0x24D0; // file 0x013 image offset for portrait bg (fire) image

extern intptr_t FILE_015_BACKGROUND_IMAGE_OFFSET = 0x440; // file 0x015 image offset for background tile

extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_1 = 0x408; // AObj? for white circle
extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_2 = 0x568; // DObjDesc for white circle

extern intptr_t FILE_017_1_PLAYER_GAME_TITLE_IMAGE_OFFSET = 0x228;
extern intptr_t FILE_017_PARENTHESIS_R_IMAGE_OFFSET = 0x2C8;
extern intptr_t FILE_017_PARENTHESIS_L_IMAGE_OFFSET = 0x368;
extern intptr_t FILE_017_LEVEL_IMAGE_OFFSET = 0x488;
extern intptr_t FILE_017_STOCK_IMAGE_OFFSET = 0x5A8;
extern intptr_t FILE_017_STOCK_LEVEL_OUTLINE_IMAGE_OFFSET = 0x1208;
extern intptr_t FILE_017_SMASH_LOGO_IMAGE_OFFSET = 0x1950;
extern intptr_t FILE_017_OPTION_IMAGE_OFFSET = 0x1EC8;
extern intptr_t FILE_017_PANEL_IMAGE_OFFSET = 0x32A8;

extern intptr_t FILE_019_POLYGON_STOCK_ICON_IMAGE_OFFSET = 0x80;

// 0x80131B00
void mn1PSetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B58
s32 mn1PPow(s32 num, s32 pow)
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
void mn1PSetTextureColors(SObj* sobj, u32 colors[])
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
s32 mn1PGetNumberOfDigits(s32 num, s32 maxDigits)
{
    s32 numDigits;

    for (numDigits = maxDigits; numDigits > 0; numDigits--)
    {
        if (mn1PPow(10, numDigits - 1) != 0 ? num / mn1PPow(10, numDigits - 1) : 0 != 0) return numDigits;
    }

    return 0;
}

// 0x80131CEC
void mn1PCreateSmallerNumber(GObj* number_gobj, s32 num, f32 x, f32 y, s32 colors[], s32 maxDigits, sb32 pad)
{
    intptr_t number_offsets[10] = dMN1PSmallerNumberOffsets;
    SObj* number_sobj;
    f32 left_x = x;
    s32 place;
    s32 numDigits;
    s32 digit;

    if (num < 0) num = 0;

    number_sobj = gcAppendSObjWithSprite(number_gobj, GetAddressFromOffset(gMN1PFilesArray[9], number_offsets[num % 10]));
    mn1PSetTextureColors(number_sobj, colors);
    left_x -= 8;
    number_sobj->pos.x = left_x;
    number_sobj->pos.y = y;

    for
    (
        place = 1, numDigits = (pad != FALSE) ? maxDigits : mn1PGetNumberOfDigits(num, maxDigits);
        place < numDigits;
        place++, numDigits = (pad != FALSE) ? maxDigits : mn1PGetNumberOfDigits(num, maxDigits)
    )
    {
        digit = (mn1PPow(10, place) != 0) ? num / mn1PPow(10, place) : 0;

        number_sobj = gcAppendSObjWithSprite(number_gobj, GetAddressFromOffset(gMN1PFilesArray[9], number_offsets[digit % 10]));
        mn1PSetTextureColors(number_sobj, colors);
        left_x -= 8;
        number_sobj->pos.x = left_x;
        number_sobj->pos.y = y;
    }
}

// 0x80131F5C
s32 mn1PGetChrIndex(const char chr)
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

// 0x80131FD4
f32 mn1PGetChrSpacing(const char *s, s32 c)
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

// 0x801320F8
void mn1PDrawString(GObj* gobj, const char *str, f32 x, f32 y, s32 color[3])
{
    intptr_t chrOffsets[29] = dMN1PChrOffsets;
    f32 chrWidths[29] = dMN1PChrWidths;
    SObj* chr_sobj;
    f32 start_x = x;
    s32 i;
    sb32 is_number;

    for (i = 0; str[i] != 0; i++)
    {
        is_number = ((str[i] >= '0') && (str[i] <= '9')) ? TRUE : FALSE;

        if ((is_number != FALSE) || (str[i] == ' '))
        {
            if (str[i] == ' ')
            {
                start_x += 3.0F;
            }
            else
            {
                start_x += str[i] - '0';
            }
        }
        else
        {
            chr_sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMN1PFilesArray[8], chrOffsets[mn1PGetChrIndex(str[i])]));
            chr_sobj->pos.x = start_x;

            start_x += chrWidths[mn1PGetChrIndex(str[i])] + mn1PGetChrSpacing(str, i);

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

// 0x80132384
void mn1PSelectCharWithToken(s32 port_id, s32 select_button)
{
    s32 held_port_id = gMN1PPanel.held_port_id,
        costume_id = ftCostume_GetIndexFFA(gMN1PPanel.char_id, select_button);

    func_ovl2_800E9248(gMN1PPanel.player, costume_id, 0);

    gMN1PPanel.costume_id = costume_id;
    gMN1PPanel.is_selected = TRUE;
    gMN1PPanel.holder_port_id = 4;
    gMN1PPanel.cursor_state = mnCursorStateNotHoldingToken;

    mn1PRedrawCursor(gMN1PPanel.cursor, port_id, gMN1PPanel.cursor_state);

    gMN1PPanel.held_port_id = -1;
    gMN1PPanel.unk_0x88 = TRUE;

    mn1PReorderCursorsOnPlacement(held_port_id);
    mn1PAnnounceFighter(port_id, held_port_id);
    mn1PCreateWhiteSquare(held_port_id);
    mn1PDrawStock(gMN1PStockValue, gMN1PPanel.char_id);
}

// 0x8013243C
f32 mn1PGetNextPortraitX(s32 portrait_id, f32 current_x_position)
{
    f32 portrait_x_position[12] = dMN1PPortraitPositionsX, // dMN1PPortraitPositionsX,
        portrait_velocity[12] = dMN1PPortraitVelocities; // dMN1PPortraitVelocities;

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

// 0x80132550
sb32 mn1PCheckFighterIsXBoxed(s32 ft_kind)
{
    return FALSE;
}

// 0x8013255C
void mn1PSetPortraitX(GObj *portrait_gobj)
{
    f32 new_portrait_x = mn1PGetNextPortraitX(portrait_gobj->user_data.s, SObjGetStruct(portrait_gobj)->pos.x);

    if (new_portrait_x != -1.0F)
    {
        SObjGetStruct(portrait_gobj)->pos.x = new_portrait_x;

        if (SObjGetStruct(portrait_gobj)->next != NULL)
        {
            SObjGetStruct(portrait_gobj)->next->pos.x = SObjGetStruct(portrait_gobj)->pos.x + 4.0F;
        }
    }
}

// 0x801325D8
void mn1PInitializePortraitBackgroundPosition(SObj *portrait_bg_sobj, s32 portrait_id)
{
    Vec2f coordinates[12] = dMN1PPortraitPositionsXY;

    portrait_bg_sobj->pos.x = coordinates[portrait_id].x;
    portrait_bg_sobj->pos.y = coordinates[portrait_id].y;
}

// 0x80132634
void mn1PAddRedXBoxToPortrait(GObj* portrait_gobj, s32 portrait_id)
{
    SObj* portrait_sobj = SObjGetStruct(portrait_gobj);
    f32 x = portrait_sobj->pos.x,
        y = portrait_sobj->pos.y;
    s32 xbox_image_offset = &(FILE_013_XBOX_IMAGE_OFFSET);

    portrait_sobj = gcAppendSObjWithSprite(portrait_gobj, GetAddressFromOffset(gMN1PFilesArray[4], xbox_image_offset)); // AppendTexture

    portrait_sobj->pos.x = x + 4.0F;
    portrait_sobj->pos.y = y + 12.0F;
    portrait_sobj->sprite.attr = portrait_sobj->sprite.attr & ~SP_FASTCOPY;
    portrait_sobj->sprite.attr = portrait_sobj->sprite.attr| SP_TRANSPARENT;
    portrait_sobj->sprite.red = 0xFF;
    portrait_sobj->sprite.green = 0;
    portrait_sobj->sprite.blue = 0;
}

// 0x801326C8
sb32 mn1PGetIsLocked(s32 char_id)
{
    switch (char_id)
    {
        case Ft_Kind_Ness:
            return (gMN1PCharacterUnlockedMask & (1 << Ft_Kind_Ness)) ? FALSE : TRUE;

        case Ft_Kind_Purin:
            return (gMN1PCharacterUnlockedMask & (1 << Ft_Kind_Purin)) ? FALSE : TRUE;

        case Ft_Kind_Captain:
            return (gMN1PCharacterUnlockedMask & (1 << Ft_Kind_Captain)) ? FALSE : TRUE;

        case Ft_Kind_Luigi:
            return (gMN1PCharacterUnlockedMask & (1 << Ft_Kind_Luigi)) ? FALSE : TRUE;
    }
    return FALSE;
}

// 0x80132794 - Unused?
void func_ovl27_80132794()
{
    return;
}

// 0x8013279C
s32 mn1PGetFtKind(s32 portrait_id)
{
    s32 ftKind_order[12] = dMN1PFtKindOrder;

    return ftKind_order[portrait_id];
}

// 0x801327EC
s32 mn1PGetPortraitId(s32 ft_kind)
{
    s32 portrait_id_order[12] = dMN1PPortraitOrder;

    return portrait_id_order[ft_kind];
}

// 0x8013283C
void mn1PRenderPortraitWithNoise(GObj *portrait_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x30, 0x30, 0x30, 0xFF);
    gDPSetCombineLERP(gDisplayListHead[0]++, NOISE, TEXEL0, PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0, NOISE, TEXEL0, PRIMITIVE, TEXEL0,  0, 0, 0, TEXEL0);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    func_ovl0_800CCF74(portrait_gobj);
}

// 0x801328FC
void mn1PCreateLockedPortrait(s32 portrait_id)
{
    GObj* texture_gobj;
    SObj* texture_sobj;
    intptr_t locked_portrait_offsets[12] = dMN1PLockedPortraitOffsets;

    // portrait bg (fire)
    texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
    omAddGObjRenderProc(texture_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
    omAddGObjCommonProc(texture_gobj, mn1PSetPortraitX, 1, 1);

    texture_sobj = gcAppendSObjWithSprite(texture_gobj, GetAddressFromOffset(gMN1PFilesArray[4], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
    texture_sobj->pos.x = (f32) (((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 0x2D) + 0x19);
    texture_sobj->pos.y = (f32) (((portrait_id >= 6 ? 1 : 0) * 0x2B) + 0x24);

    mn1PInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
    texture_gobj->user_data.s = portrait_id;

    // portrait
    texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
    omAddGObjRenderProc(texture_gobj, mn1PRenderPortraitWithNoise, 0x1BU, 0x80000000U, -1);
    omAddGObjCommonProc(texture_gobj, mn1PSetPortraitX, 1, 1);

    texture_sobj = gcAppendSObjWithSprite(texture_gobj, GetAddressFromOffset(gMN1PFilesArray[4], locked_portrait_offsets[mn1PGetFtKind(portrait_id)]));
    texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
    texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;

    texture_gobj->user_data.s = portrait_id;
    mn1PInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

    // question mark
    texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
    omAddGObjRenderProc(texture_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
    omAddGObjCommonProc(texture_gobj, mn1PSetPortraitX, 1, 1);

    texture_sobj = gcAppendSObjWithSprite(texture_gobj, GetAddressFromOffset(gMN1PFilesArray[4], &FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET));
    texture_sobj->sprite.attr &= ~SP_FASTCOPY;
    texture_sobj->sprite.attr |= SP_TRANSPARENT;
    texture_sobj->shadow_color.r = 0x5B;
    texture_sobj->shadow_color.g = 0x41;
    texture_sobj->shadow_color.b = 0x33;
    texture_sobj->sprite.red = 0xC4;
    texture_sobj->sprite.green = 0xB9;
    texture_sobj->sprite.blue = 0xA9;

    texture_gobj->user_data.s = portrait_id;
    mn1PInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
}

// 0x80132BA4
void mn1PCreatePortrait(s32 portrait_id)
{
    GObj *portrait_gobj, *portrait_bg_gobj;
    SObj *texture_sobj;
    intptr_t portrait_offsets[12] = dMN1PPortraitOffsets;

    // if locked, render locked portrait instead
    if (mn1PGetIsLocked(mn1PGetFtKind(portrait_id)))
    {
        mn1PCreateLockedPortrait(portrait_id);
    }
    else
    {
        // portrait bg (fire)
        portrait_bg_gobj = omMakeGObjCommon(0U, NULL, 0x19U, 0x80000000U);
        omAddGObjRenderProc(portrait_bg_gobj, func_ovl0_800CCF00, 0x20U, 0x80000000U, -1);
        portrait_bg_gobj->user_data.p = portrait_id;
        omAddGObjCommonProc(portrait_bg_gobj, mn1PSetPortraitX, 1, 1);

        texture_sobj = gcAppendSObjWithSprite(portrait_bg_gobj, GetAddressFromOffset(gMN1PFilesArray[4], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
        mn1PInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

        // portrait
        portrait_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
        omAddGObjRenderProc(portrait_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
        omAddGObjCommonProc(portrait_gobj, mn1PSetPortraitX, 1, 1);

        texture_sobj = gcAppendSObjWithSprite(portrait_gobj, GetAddressFromOffset(gMN1PFilesArray[4], portrait_offsets[mn1PGetFtKind(portrait_id)]));
        texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
        texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;
        portrait_gobj->user_data.p = portrait_id;

        // this conditionally draws a big red box with an X in it, but this check always fails
        if (mn1PCheckFighterIsXBoxed(mn1PGetFtKind(portrait_id)) != FALSE)
        {
            mn1PAddRedXBoxToPortrait(portrait_gobj, portrait_id);
        }
        mn1PInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
    }
}

// 0x80132D60
void mn1PCreatePortraits()
{
    s32 portrait_id;

    for (portrait_id = 0; portrait_id < 12; portrait_id++)
    {
        mn1PCreatePortrait(portrait_id);
    }
}

// 0x80132DA0
void mn1PSetNameAndLogo(GObj* name_logo_gobj, s32 port_id, s32 ft_kind)
{
    SObj* sobj;
    Vec2f coords[12] = dMN1PUnusedPositions;
    intptr_t logo_offsets[12] = dMN1PLogoOffsets;
    intptr_t name_offsets[12] = dMN1PNameOffsets;

    if (ft_kind != Ft_Kind_Null)
    {
        func_8000B760(name_logo_gobj);

        // logo
        sobj = gcAppendSObjWithSprite(name_logo_gobj, GetAddressFromOffset(gMN1PFilesArray[1], logo_offsets[ft_kind]));
        sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
        sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;
        sobj->sprite.red = 0;
        sobj->sprite.green = 0;
        sobj->sprite.blue = 0;
        sobj->pos.x = 35.0F;
        sobj->pos.y = 144.0F;

        // name
        sobj = gcAppendSObjWithSprite(name_logo_gobj, GetAddressFromOffset(gMN1PFilesArray[0], name_offsets[ft_kind]));
        sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
        sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;
        sobj->pos.x = 33.0F;
        sobj->pos.y = 202.0F;
    }
}

// 0x80132F1C
void mn1PCreatePortraitViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x28, 0x08000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132FBC
void mn1PCreatePortraitBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x3C, 0x100000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013305C
void mn1PCreatePortraitWhiteBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x32, 0x200000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801330FC
void mn1PCreatePanelViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x1E, 0x10000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013319C
void mn1PUpdatePanel(GObj* panel_gobj, s32 port_id) {
    SObj* panel_sobj;
    intptr_t offsets[4] = dMN1PPanelOffsets;

    panel_sobj = SObjGetStruct(panel_gobj);

    panel_sobj->sprite.LUT = GetAddressFromOffset(gMN1PFilesArray[0], offsets[port_id]);
}

// 0x801331F4
void mn1PCreatePanel(s32 port_id)
{
    GObj* gobj;
    SObj* type_sobj;
    intptr_t type_offsets[4] = dMN1PTypeOffsets;
    f32 type_x_offsets[4] = dMN1PTypeOffsetsX;

    // create panel
    gobj = func_ovl0_800CD050(0, NULL, 0x16, 0x80000000, func_ovl0_800CCF00, 0x1C, 0x80000000, -1, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_PANEL_IMAGE_OFFSET), 1, NULL, 1);
    SObjGetStruct(gobj)->pos.x = 25.0F;
    SObjGetStruct(gobj)->pos.y = 127.0F;
    SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;

    gMN1PPanel.panel = gobj;

    type_sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMN1PFilesArray[0], type_offsets[port_id]));
    type_sobj->pos.x = type_x_offsets[port_id] + 25.0F;
    type_sobj->pos.y = 132.0F;
    type_sobj->sprite.attr &= ~SP_FASTCOPY;
    type_sobj->sprite.attr |= SP_TRANSPARENT;
    type_sobj->sprite.red = 0;
    type_sobj->sprite.green = 0;
    type_sobj->sprite.blue = 0;

    mn1PUpdatePanel(gobj, port_id);

    // name/logo
    gobj = omMakeGObjCommon(0U, NULL, 0x16U, 0x80000000U);
    gMN1PPanel.name_logo = gobj;
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0x1CU, 0x80000000U, -1);

    mn1PSyncNameAndLogo(port_id);
}

// 0x801333D4
void mn1PCreateNumber(GObj* number_gobj, s32 num, f32 x, f32 y, s32 colors[], s32 maxDigits, sb32 pad)
{
    intptr_t number_offsets[10] = dMN1PNumberOffsets;
    f32 widths[10] = dMN1PNumberWidths;
    SObj* number_sobj;
    f32 left_x = x;
    s32 place;
    s32 numDigits;
    s32 digit;

    if (num < 0) num = 0;

    number_sobj = gcAppendSObjWithSprite(number_gobj, GetAddressFromOffset(gMN1PFilesArray[0], number_offsets[num % 10]));
    mn1PSetTextureColors(number_sobj, colors);
    left_x -= widths[num % 10];
    number_sobj->pos.x = left_x;
    number_sobj->pos.y = y;

    for
    (
        place = 1, numDigits = (pad != FALSE) ? maxDigits : mn1PGetNumberOfDigits(num, maxDigits);
        place < numDigits;
        place++, numDigits = (pad != FALSE) ? maxDigits : mn1PGetNumberOfDigits(num, maxDigits)
    )
    {
        digit = (mn1PPow(10, place) != 0) ? num / mn1PPow(10, place) : 0;

        number_sobj = gcAppendSObjWithSprite(number_gobj, GetAddressFromOffset(gMN1PFilesArray[0], number_offsets[digit % 10]));
        mn1PSetTextureColors(number_sobj, colors);
        left_x -= widths[digit % 10];
        number_sobj->pos.x = left_x;
        number_sobj->pos.y = y;
    }
}

// 0x80133680
void mn1PDrawTimerValue(s32 num)
{
    s32 colors[6] = dMN1PNumberColorsTime;
    SObj* infinity_sobj;

    while (SObjGetStruct(gMN1PPickerGObj)->next != NULL)
    {
        omEjectSObj(SObjGetStruct(gMN1PPickerGObj)->next);
    }

    if (num == 100)
    {
        infinity_sobj = gcAppendSObjWithSprite(gMN1PPickerGObj, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_INFINITY_IMAGE_OFFSET));
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

    if (num < 10) mn1PCreateNumber(gMN1PPickerGObj, num, 205.0F, 23.0F, colors, 2, 0);
    else mn1PCreateNumber(gMN1PPickerGObj, num, 209.0F, 23.0F, colors, 2, 0);
}

// 0x80133804
void mn1PDrawTimerPicker(s32 num)
{
    GObj* picker_gobj;

    if (gMN1PPickerGObj != NULL) omEjectGObjCommon(gMN1PPickerGObj);

    picker_gobj = func_ovl0_800CD050(0, NULL, 0x17, 0x80000000, func_ovl0_800CCF00, 0x1A, 0x80000000, -1, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_PICKER_TIME_IMAGE_OFFSET), 1, NULL, 1);
    gMN1PPickerGObj = picker_gobj;

    SObjGetStruct(picker_gobj)->pos.x = 140.0F;
    SObjGetStruct(picker_gobj)->pos.y = 22.0F;
    SObjGetStruct(picker_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(picker_gobj)->sprite.attr |= SP_TRANSPARENT;

    mn1PDrawTimerValue(gMN1PTimerValue);
}

// 0x801338EC
void mn1PCreateBackground()
{
    GObj* background_gobj;
    SObj* background_sobj;

    background_gobj = omMakeGObjCommon(0U, NULL, 0x11U, 0x80000000U);
    omAddGObjRenderProc(background_gobj, func_ovl0_800CCF00, 0x1AU, 0x80000000U, -1);
    background_sobj = gcAppendSObjWithSprite(background_gobj, GetAddressFromOffset(gMN1PFilesArray[2], &FILE_015_BACKGROUND_IMAGE_OFFSET));
    background_sobj->cmt = G_TX_WRAP;
    background_sobj->cms = G_TX_WRAP;
    background_sobj->maskt = 6;
    background_sobj->masks = 5;
    background_sobj->lrs = 300;
    background_sobj->lrt = 220;
    background_sobj->pos.x = 10.0F;
    background_sobj->pos.y = 10.0F;
}

// 0x80133990
void mn1PCreateBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x4000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133A30
void mn1PRenderOptionsSection(GObj* options_gobj) {
    // Draw the rectangle behind the Option image
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 87, 96, 136, 255);
    gDPFillRectangle(gDisplayListHead[0]++, 157, 136, 320, 141);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);

    func_ovl0_800CCEAC();
    func_ovl0_800CCF00(options_gobj);
}

// 0x80133B74
SObj* mn1PGetArrowSObj(GObj* arrow_gobj, s32 direction)
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

// 0x80133BC0
void mn1PSyncAndBlinkLevelArrows(GObj* arrow_gobj)
{
    SObj* arrow_sobj;
    s32 port_id = arrow_gobj->user_data.s;
    s32 blink_duration = 10;

    while (TRUE)
    {
        blink_duration--;

        if (blink_duration == 0)
        {
            blink_duration = 10;
            arrow_gobj->flags = arrow_gobj->flags == 1 ? 0 : 1;
        }

        if (gMN1PLevelValue == 0)
        {
            arrow_sobj = mn1PGetArrowSObj(arrow_gobj, 0);

            if (arrow_sobj != NULL)
            {
                omEjectSObj(arrow_sobj);
            }
        }
        else if (mn1PGetArrowSObj(arrow_gobj, 0) == NULL)
        {
            arrow_sobj = gcAppendSObjWithSprite(arrow_gobj, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_ARROW_L_IMAGE_OFFSET));
            arrow_sobj->pos.x = 194.0F;
            arrow_sobj->pos.y = 158.0F;
            arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
            arrow_sobj->sprite.attr |= SP_TRANSPARENT;
            arrow_sobj->user_data.s = 0;
        }

        if (gMN1PLevelValue == 4)
        {
            arrow_sobj = mn1PGetArrowSObj(arrow_gobj, 1);

            if (arrow_sobj != NULL)
            {
                omEjectSObj(arrow_sobj);
            }
        }
        else if (mn1PGetArrowSObj(arrow_gobj, 1) == NULL)
        {
            arrow_sobj = gcAppendSObjWithSprite(arrow_gobj, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_ARROW_R_IMAGE_OFFSET));
            arrow_sobj->pos.x = 269.0F;
            arrow_sobj->pos.y = 158.0F;
            arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
            arrow_sobj->sprite.attr |= SP_TRANSPARENT;
            arrow_sobj->user_data.s = 1;
        }
        gsStopCurrentProcess(1);
    }
}

// 0x80133D9C
void gMN1PDrawLevel(s32 level) {
    GObj* level_gobj;
    SObj* level_sobj;
    intptr_t offsets[5] = dMN1PLevelOffsets;
    Vec2f positions[5] = dMN1PLevelPositions;
    gsColorRGB colors[5] = dMN1PLevelColors;

    if (gMN1PLevelGObj != NULL) {
        omEjectGObjCommon(gMN1PLevelGObj);
    }
    gMN1PLevelGObj = level_gobj = omMakeGObjCommon(0U, NULL, 0x17U, 0x80000000U);
    omAddGObjRenderProc(level_gobj, func_ovl0_800CCF00, 0x22U, 0x80000000U, -1);

    level_sobj = gcAppendSObjWithSprite(level_gobj, GetAddressFromOffset(gMN1PFilesArray[6], offsets[level]));
    level_sobj->sprite.attr &= ~SP_FASTCOPY;
    level_sobj->sprite.attr |= SP_TRANSPARENT;
    level_sobj->pos.x = positions[level].x;
    level_sobj->pos.y = positions[level].y;
    level_sobj->sprite.red = colors[level].r;
    level_sobj->sprite.green = colors[level].g;
    level_sobj->sprite.blue = colors[level].b;
}

// 0x80133F30
void mn1PCreateLevelAndArrows()
{
    GObj* arrows_gobj;

    arrows_gobj = omMakeGObjCommon(0U, NULL, 0x17U, 0x80000000U);
    omAddGObjRenderProc(arrows_gobj, func_ovl0_800CCF00, 0x22U, 0x80000000U, -1);
    omAddGObjCommonProc(arrows_gobj, mn1PSyncAndBlinkLevelArrows, 0, 1);
    gMN1PDrawLevel(gMN1PLevelValue);
}

// 0x80133FA4
void mn1PSyncAndBlinkStockArrows(GObj* arrow_gobj)
{
    SObj* arrow_sobj;
    s32 port_id = arrow_gobj->user_data.s;
    s32 blink_duration = 10;

    while (TRUE)
    {
        blink_duration--;

        if (blink_duration == 0)
        {
            blink_duration = 10;
            arrow_gobj->flags = arrow_gobj->flags == 1 ? 0 : 1;
        }

        if (gMN1PStockValue == 0)
        {
            arrow_sobj = mn1PGetArrowSObj(arrow_gobj, 0);

            if (arrow_sobj != NULL)
            {
                omEjectSObj(arrow_sobj);
            }
        }
        else if (mn1PGetArrowSObj(arrow_gobj, 0) == NULL)
        {
            arrow_sobj = gcAppendSObjWithSprite(arrow_gobj, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_ARROW_L_IMAGE_OFFSET));
            arrow_sobj->pos.x = 194.0F;
            arrow_sobj->pos.y = 178.0F;
            arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
            arrow_sobj->sprite.attr |= SP_TRANSPARENT;
            arrow_sobj->user_data.s = 0;
        }

        if (gMN1PStockValue == 4)
        {
            arrow_sobj = mn1PGetArrowSObj(arrow_gobj, 1);

            if (arrow_sobj != NULL)
            {
                omEjectSObj(arrow_sobj);
            }
        }
        else if (mn1PGetArrowSObj(arrow_gobj, 1) == NULL)
        {
            arrow_sobj = gcAppendSObjWithSprite(arrow_gobj, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_ARROW_R_IMAGE_OFFSET));
            arrow_sobj->pos.x = 269.0F;
            arrow_sobj->pos.y = 178.0F;
            arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
            arrow_sobj->sprite.attr |= SP_TRANSPARENT;
            arrow_sobj->user_data.s = 1;
        }
        gsStopCurrentProcess(1);
    }
}

// 0x8013419C
void mn1PDrawStock(s32 stock, s32 ft_kind)
{
    GObj* stock_gobj;
    SObj* icon_sobj;
    ftStruct* ft_struct;

    if (gMN1PStockGObj != NULL)
    {
        omEjectGObjCommon(gMN1PStockGObj);
    }

    gMN1PStockGObj = stock_gobj = omMakeGObjCommon(0U, NULL, 0x17U, 0x80000000U);
    omAddGObjRenderProc(stock_gobj, func_ovl0_800CCF00, 0x22U, 0x80000000U, -1);

    for (stock = stock + 1; stock > 0; stock--)
    {
        if (ft_kind == Ft_Kind_Null)
        {
            icon_sobj = gcAppendSObjWithSprite(stock_gobj, GetAddressFromOffset(gMN1PFilesArray[7], &FILE_019_POLYGON_STOCK_ICON_IMAGE_OFFSET));
            icon_sobj->pos.y = 179.0F;
        }
        else
        {
            ft_struct = gMN1PPanel.player->user_data.p;
            icon_sobj = gcAppendSObjWithSprite(stock_gobj, ft_struct->attributes->sprites->stock_spr);
            icon_sobj->sprite.LUT = ft_struct->attributes->sprites->stock_lut[ft_struct->costume];
            icon_sobj->pos.y = 178.0F;
        }

        icon_sobj->pos.x = (stock - 1) * 12 + 207.0F;
        icon_sobj->sprite.attr &= ~SP_FASTCOPY;
        icon_sobj->sprite.attr |= SP_TRANSPARENT;
    }
}

// 0x8013434C
void mn1PCreateStockAndArrows()
{
    GObj* arrows_gobj;

    arrows_gobj = omMakeGObjCommon(0U, NULL, 0x17U, 0x80000000U);
    omAddGObjRenderProc(arrows_gobj, func_ovl0_800CCF00, 0x22U, 0x80000000U, -1);
    omAddGObjCommonProc(arrows_gobj, mn1PSyncAndBlinkStockArrows, 0, 1);
    mn1PDrawStock(gMN1PStockValue, gMN1PPanel.char_id);
}

// 0x801343C8
void mn1PDrawPickerOptionsTitleAndBack()
{
    GObj* picker_gobj;
    SObj* picker_sobj;

    picker_gobj = func_ovl0_800CD050(0, NULL, 0x17, 0x80000000, mn1PRenderOptionsSection, 0x22, 0x80000000, -1, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_1_PLAYER_GAME_TITLE_IMAGE_OFFSET), 1, NULL, 1);
    SObjGetStruct(picker_gobj)->pos.x = 27.0F;
    SObjGetStruct(picker_gobj)->pos.y = 24.0F;
    SObjGetStruct(picker_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(picker_gobj)->sprite.attr |= SP_TRANSPARENT;
    SObjGetStruct(picker_gobj)->sprite.red = 0xE3;
    SObjGetStruct(picker_gobj)->sprite.green = 0xAC;
    SObjGetStruct(picker_gobj)->sprite.blue = 4;

    mn1PDrawTimerPicker(gMN1PTimerValue);

    // Back image
    picker_sobj = gcAppendSObjWithSprite(picker_gobj, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_BACK_IMAGE_OFFSET));
    picker_sobj->sprite.attr &= ~SP_FASTCOPY;
    picker_sobj->sprite.attr |= SP_TRANSPARENT;
    picker_sobj->pos.x = 244.0F;
    picker_sobj->pos.y = 23.0F;

    // Option texture
    picker_sobj = gcAppendSObjWithSprite(picker_gobj, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_OPTION_IMAGE_OFFSET));
    picker_sobj->sprite.attr &= ~SP_FASTCOPY;
    picker_sobj->sprite.attr |= SP_TRANSPARENT;
    picker_sobj->shadow_color.r = 0;
    picker_sobj->shadow_color.g = 0;
    picker_sobj->shadow_color.b = 0;
    picker_sobj->sprite.red = 0xAF;
    picker_sobj->sprite.green = 0xB1;
    picker_sobj->sprite.blue = 0xCC;
    picker_sobj->pos.x = 180.0F;
    picker_sobj->pos.y = 129.0F;

    // Level/Stock outline texture (mirrored vertically)
    picker_sobj = gcAppendSObjWithSprite(picker_gobj, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_STOCK_LEVEL_OUTLINE_IMAGE_OFFSET));
    picker_sobj->sprite.attr &= ~SP_FASTCOPY;
    picker_sobj->sprite.attr |= SP_TRANSPARENT;
    picker_sobj->sprite.red = 0x57;
    picker_sobj->sprite.green = 0x60;
    picker_sobj->sprite.blue = 0x88;
    picker_sobj->cmt = G_TX_WRAP;
    picker_sobj->cms = G_TX_MIRROR;
    picker_sobj->maskt = 0;
    picker_sobj->masks = 5;
    picker_sobj->lrs = 0xB8;
    picker_sobj->lrt = 0x40;
    picker_sobj->pos.x = 128.0F;
    picker_sobj->pos.y = 141.0F;

    // Level label
    picker_sobj = gcAppendSObjWithSprite(picker_gobj, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_LEVEL_IMAGE_OFFSET));
    picker_sobj->sprite.attr &= ~SP_FASTCOPY;
    picker_sobj->sprite.attr |= SP_TRANSPARENT;
    picker_sobj->sprite.red = 0xC5;
    picker_sobj->sprite.green = 0xB6;
    picker_sobj->sprite.blue = 0xA7;
    picker_sobj->pos.x = 145.0F;
    picker_sobj->pos.y = 159.0F;

    // Stock label
    picker_sobj = gcAppendSObjWithSprite(picker_gobj, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_STOCK_IMAGE_OFFSET));
    picker_sobj->sprite.attr &= ~SP_FASTCOPY;
    picker_sobj->sprite.attr |= SP_TRANSPARENT;
    picker_sobj->sprite.red = 0xC5;
    picker_sobj->sprite.green = 0xB6;
    picker_sobj->sprite.blue = 0xA7;
    picker_sobj->pos.x = 144.0F;
    picker_sobj->pos.y = 179.0F;
}

// 0x801346B8
void mn1PCreateTitleOptionsAndBackViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x46, 0x400000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80134758
u32 mn1PGetHighscore(s32 ft_kind)
{
    return gSaveData.spgame_records[ft_kind].spgame_hiscore;
}

// 0x8013476C
void mn1PDrawHighscore()
{
    GObj* highscore_gobj;
    s32 foo, bar;
    SObj* difficulty_sobj;
    s32 text_color[3] = dMN1PHighscoreTextColors;
    s32 number_color[6] = dMN1PHighscoreNumberColors;
    gsColorRGB colors[5] = dMN1PHighscoreSmashLogoColors;
    s32 best_difficulty;
    s32 ft_kind = mn1PGetFtKindFromTokenPositionEvenIfLocked();

    if (gMN1PHighscoreGObj != NULL)
    {
        omEjectGObjCommon(gMN1PHighscoreGObj);
        gMN1PHighscoreGObj = NULL;
    }

    if (ft_kind != Ft_Kind_Null)
    {
        gMN1PHighscoreGObj = highscore_gobj = omMakeGObjCommon(0U, NULL, 0x17U, 0x80000000U);
        omAddGObjRenderProc(highscore_gobj, func_ovl0_800CCF00, 0x1AU, 0x80000000U, -1);

        mn1PDrawString(highscore_gobj, &gMNHighscoreString, 142.0F, 201.0F, text_color);
        mn1PCreateSmallerNumber(highscore_gobj, mn1PGetHighscore(ft_kind), 256.0F, 198.0F, number_color, 8, 1);

        best_difficulty = gSaveData.spgame_records[ft_kind].spgame_best_difficulty;

        if (best_difficulty != 0)
        {
            difficulty_sobj = gcAppendSObjWithSprite(highscore_gobj, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_SMASH_LOGO_IMAGE_OFFSET));
            difficulty_sobj->sprite.attr &= ~SP_FASTCOPY;
            difficulty_sobj->sprite.attr |= SP_TRANSPARENT;
            difficulty_sobj->pos.x = 126.0F;
            difficulty_sobj->pos.y = 198.0F;
            difficulty_sobj->sprite.red = colors[best_difficulty - 1].r;
            difficulty_sobj->sprite.green = colors[best_difficulty - 1].g;
            difficulty_sobj->sprite.blue = colors[best_difficulty - 1].b;
        }
    }
}

// 0x80134968
s32 mn1PGetBonuses(s32 ft_kind)
{
    return gSaveData.spgame_records[ft_kind].spgame_bonuses;
}

// 0x8013497C
void mn1PDrawBonuses()
{
    GObj* bonuses_gobj;
    s32 foo, bar;
    SObj* parenthesis_sobj;
    s32 number_color[6] = dMN1PBonusesNumberColors;
    s32 ft_kind = mn1PGetFtKindFromTokenPositionEvenIfLocked();

    if (gMN1PBonusesGObj != NULL)
    {
        omEjectGObjCommon(gMN1PBonusesGObj);
        gMN1PBonusesGObj = NULL;
    }

    if (ft_kind != Ft_Kind_Null)
    {
        gMN1PBonusesGObj = bonuses_gobj = omMakeGObjCommon(0U, NULL, 0x17U, 0x80000000U);
        omAddGObjRenderProc(bonuses_gobj, func_ovl0_800CCF00, 0x1AU, 0x80000000U, -1);

        parenthesis_sobj = gcAppendSObjWithSprite(bonuses_gobj, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_PARENTHESIS_L_IMAGE_OFFSET));
        parenthesis_sobj->sprite.attr &= ~SP_FASTCOPY;
        parenthesis_sobj->sprite.attr |= SP_TRANSPARENT;
        parenthesis_sobj->pos.x = 258.0F;
        parenthesis_sobj->pos.y = 199.0F;
        parenthesis_sobj->sprite.red = 0x40;
        parenthesis_sobj->sprite.green = 0x6F;
        parenthesis_sobj->sprite.blue = 0xCD;

        parenthesis_sobj = gcAppendSObjWithSprite(bonuses_gobj, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_PARENTHESIS_R_IMAGE_OFFSET));
        parenthesis_sobj->sprite.attr &= ~SP_FASTCOPY;
        parenthesis_sobj->sprite.attr |= SP_TRANSPARENT;
        parenthesis_sobj->pos.x = 286.0F;
        parenthesis_sobj->pos.y = 199.0F;
        parenthesis_sobj->sprite.red = 0x40;
        parenthesis_sobj->sprite.green = 0x6F;
        parenthesis_sobj->sprite.blue = 0xCD;

        mn1PCreateSmallerNumber(bonuses_gobj, mn1PGetBonuses(ft_kind), 285.0F, 198.0F, number_color, 3, 1);
    }
}

// 0x80134B3C
void mn1PDrawHighscoreAndBonuses()
{
    mn1PDrawHighscore();
    mn1PDrawBonuses();
}

// 0x80134B64
s32 mn1PGetTotalHighscore()
{
    s32 i;
    s32 sum = 0;

    for(i = 0; i < 12; i++)
    {
        sum += mn1PGetHighscore(i);
    }

    return sum;
}

// 0x80134BB4
void mn1PDrawTotalHighscore()
{
    GObj* total_gobj;
    s32 foo, bar, baz;
    s32 text_color[3] = dMN1PTotalHighscoreTextColors;
    s32 number_color[6] = dMN1PHighscoreNumberColors;

    total_gobj = omMakeGObjCommon(0U, NULL, 0x17U, 0x80000000U);
    omAddGObjRenderProc(total_gobj, func_ovl0_800CCF00, 0x1AU, 0x80000000U, -1);
    mn1PDrawString(total_gobj, &gMNTotalHighscoreString, 109.0F, 211.0F, text_color);
    mn1PCreateSmallerNumber(total_gobj, mn1PGetTotalHighscore(), 256.0F, 208.0F, number_color, 9, 1);
}

// 0x80134CB8
s32 mn1PGetTotalBonuses()
{
    s32 i;
    s32 sum = 0;

    for(i = 0; i < 12; i++)
    {
        sum += mn1PGetBonuses(i);
    }

    return sum;
}

// 0x80134D08
void mn1PDrawTotalBonuses()
{
    GObj* bonuses_gobj;
    s32 foo, bar;
    SObj* parenthesis_sobj;
    s32 number_color[6] = dMN1PTotalBonusesNumberColors;

    bonuses_gobj = omMakeGObjCommon(0U, NULL, 0x17U, 0x80000000U);
    omAddGObjRenderProc(bonuses_gobj, func_ovl0_800CCF00, 0x1AU, 0x80000000U, -1);

    parenthesis_sobj = gcAppendSObjWithSprite(bonuses_gobj, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_PARENTHESIS_L_IMAGE_OFFSET));
    parenthesis_sobj->sprite.attr &= ~SP_FASTCOPY;
    parenthesis_sobj->sprite.attr |= SP_TRANSPARENT;
    parenthesis_sobj->pos.x = 258.0F;
    parenthesis_sobj->pos.y = 209.0F;
    parenthesis_sobj->sprite.red = 0x40;
    parenthesis_sobj->sprite.green = 0x6F;
    parenthesis_sobj->sprite.blue = 0xCD;

    parenthesis_sobj = gcAppendSObjWithSprite(bonuses_gobj, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_PARENTHESIS_R_IMAGE_OFFSET));
    parenthesis_sobj->sprite.attr &= ~SP_FASTCOPY;
    parenthesis_sobj->sprite.attr |= SP_TRANSPARENT;
    parenthesis_sobj->pos.x = 286.0F;
    parenthesis_sobj->pos.y = 209.0F;
    parenthesis_sobj->sprite.red = 0x40;
    parenthesis_sobj->sprite.green = 0x6F;
    parenthesis_sobj->sprite.blue = 0xCD;

    mn1PCreateSmallerNumber(bonuses_gobj, mn1PGetTotalBonuses(), 285.0F, 208.0F, number_color, 3, 1);
}

// 0x80134E88
void mn1PDrawTotalHighscoreAndBonuses()
{
    mn1PDrawTotalHighscore();
    mn1PDrawTotalBonuses();
}

// 0x80134EB0 - Unused?
void func_ovl27_80134EB0()
{
    return;
}

// 0x80134EB8 - Unused?
void func_ovl27_80134EB8()
{
    return;
}

// 0x80134EC0
s32 mn1PGetAvailableCostume(s32 ft_kind, s32 select_button)
{
    return ftCostume_GetIndexFFA(ft_kind, select_button);
}

// 0x80134EE0
s32 mn1PGetSelectedAnimation(s32 ft_kind)
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

// 0x80134F40
void mn1PRotateFighter(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);
    s32 port_id = fp->player;

    if (gMN1PPanel.unk_0x88 == 1)
    {
        if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y < F_DEG_TO_RAD(0.1F))
        {
            if (gMN1PPanel.selected_animation_started == FALSE)
            {
                func_ovl1_803905CC(gMN1PPanel.player, mn1PGetSelectedAnimation(gMN1PPanel.char_id));

                gMN1PPanel.selected_animation_started = TRUE;
            }
        }
        else
        {
            DObjGetStruct(fighter_gobj)->rotate.vec.f.y += F_DEG_TO_RAD(20.0F);

            if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > F_DEG_TO_RAD(360.0F))
            {
                DObjGetStruct(fighter_gobj)->rotate.vec.f.y = 0.0F;

                func_ovl1_803905CC(gMN1PPanel.player, mn1PGetSelectedAnimation(gMN1PPanel.char_id));

                gMN1PPanel.selected_animation_started = TRUE;
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

// 0x80135060
void mn1PSpawnFighter(GObj* fighter_gobj, s32 port_id, s32 ft_kind, s32 costume_id)
{
    f32 initial_y_rotation;
    ftCreateDesc spawn_info = dFTDefaultFighterDesc;

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
        gMN1PPanel.costume_id = spawn_info.costume = costume_id;
        spawn_info.shade = 0;
        spawn_info.anim_heap = gMN1PAnimHeap;
        spawn_info.player = port_id;
        gMN1PPanel.player = fighter_gobj = ftManager_MakeFighter(&spawn_info);

        omAddGObjCommonProc(fighter_gobj, mn1PRotateFighter, 1, 1);

        DObjGetStruct(fighter_gobj)->translate.vec.f.x = -1100.0F;
        DObjGetStruct(fighter_gobj)->translate.vec.f.y = -850.0F;

        DObjGetStruct(fighter_gobj)->rotate.vec.f.y = initial_y_rotation;

        DObjGetStruct(fighter_gobj)->scale.vec.f.x = menu_zoom[ft_kind];
        DObjGetStruct(fighter_gobj)->scale.vec.f.y = menu_zoom[ft_kind];
        DObjGetStruct(fighter_gobj)->scale.vec.f.z = menu_zoom[ft_kind];
    }
}

// 0x801351CC
void mn1PCreateFighterViewport()
{
    Camera *cam = CameraGetStruct((GObj*)func_8000B93C(0x401U, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x48600, -1, 1, 1, 0, 1, 0));
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
    cam->vec.eye.x = 0.0F;
    cam->vec.eye.y = 0.0F;
    cam->vec.eye.z = 5000.0F;
    cam->flags = 4;
    cam->vec.at.x = 0.0F;
    cam->vec.at.y = 0.0F;
    cam->vec.at.z = 0.0F;
    cam->vec.up.x = 0.0F;
    cam->vec.up.z = 0.0F;
    cam->vec.up.y = 1.0F;
}

// 0x801352BC
void mn1PRedrawCursor(GObj* cursor_gobj, s32 port_id, u32 cursor_state)
{
    SObj* cursor_sobj;
    f32 current_x, current_y;
    gsColorRGBPair type_colors[4] = dMN1PCursorTypeColors; //dMN1PCursorTypeColors;
    intptr_t type_offsets[4] = dMN1PCursorTypeOffsets; //dMN1PCursorTypeOffsets;
    intptr_t cursor_offsets[3] = dMN1PCursorOffsets; //dMN1PCursorOffsets;
    Vec2i type_positions[3] = dMN1PCursorTypePositions; //dMN1PCursorTypePositions;

    current_x = SObjGetStruct(cursor_gobj)->pos.x;
    current_y = SObjGetStruct(cursor_gobj)->pos.y;

    func_8000B760(cursor_gobj);

    cursor_sobj = gcAppendSObjWithSprite(cursor_gobj, GetAddressFromOffset(gMN1PFilesArray[0], cursor_offsets[cursor_state]));
    cursor_sobj->pos.x = current_x;
    cursor_sobj->pos.y = current_y;
    cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
    cursor_sobj->sprite.attr |= SP_TRANSPARENT;

    cursor_sobj = gcAppendSObjWithSprite(cursor_gobj, GetAddressFromOffset(gMN1PFilesArray[0], type_offsets[port_id]));
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

// 0x801354CC
sb32 mn1PCheckPickerRightArrowPress(GObj* cursor_gobj)
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

// 0x80135594
sb32 mn1PCheckPickerLeftArrowPress(GObj* cursor_gobj)
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

// 0x8013565C
sb32 mn1PCheckBackButtonPress(GObj* cursor_gobj)
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

// 0x80135724
sb32 mn1PCheckTokenPickup(GObj* cursor_gobj, s32 cursor_port_id, s32 port_id)
{
    f32 current_x, current_y;
    s32 range_check;
    SObj* cursor_sobj = SObjGetStruct(cursor_gobj);
    SObj* token_sobj = SObjGetStruct(gMN1PPanel.token);

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

// 0x801357FC - Unused?
void func_ovl27_801357FC()
{
    return;
}

// 0x80135804
void mn1PSyncFighterDisplay(s32 port_id)
{
    s32 var_v0 = 0;

    if ((gMN1PPanel.char_id == Ft_Kind_Null) && (gMN1PPanel.is_selected == FALSE))
    {
        gMN1PPanel.player->flags = 1;
        mn1PDrawStock(gMN1PStockValue, gMN1PPanel.char_id);
        mn1PDrawHighscoreAndBonuses();
        var_v0 = 1;
    }

    if (var_v0 == 0)
    {
        mn1PSpawnFighter(gMN1PPanel.player, port_id, gMN1PPanel.char_id, mn1PGetAvailableCostume(gMN1PPanel.char_id, 0));
        mn1PDrawStock(gMN1PStockValue, gMN1PPanel.char_id);
        mn1PDrawHighscoreAndBonuses();
        gMN1PPanel.player->flags = 0;
        gMN1PPanel.selected_animation_started = FALSE;
    }
}

// 0x801358BC - Unused?
void func_ovl27_801358BC()
{
    return;
}

// 0x801358C4
void mn1PSyncNameAndLogo(s32 port_id)
{
    if ((gMN1PPanel.char_id == Ft_Kind_Null) && (gMN1PPanel.is_selected == FALSE))
    {
        gMN1PPanel.name_logo->flags = 1;
    }
    else
    {
        gMN1PPanel.name_logo->flags = 0;
        mn1PSetNameAndLogo(gMN1PPanel.name_logo, port_id, gMN1PPanel.char_id);
    }
}

// 0x80135924
void mn1PRemoveWhiteSquare(s32 port_id)
{
    GObj* white_square_gobj;

    white_square_gobj = gMN1PPanel.white_square;
    if (white_square_gobj != NULL)
    {
        gMN1PPanel.white_square = NULL;
        omEjectGObjCommon(white_square_gobj);
    }
}

// 0x8013595C
void mn1PFlashWhiteSquare(GObj* white_square_gobj)
{
    s32 duration = 16;
    s32 frames_to_wait = 1;

    while (TRUE)
    {
        duration--, frames_to_wait--;

        if (duration == 0) mn1PRemoveWhiteSquare(white_square_gobj->user_data.p);

        if (frames_to_wait == 0)
        {
            frames_to_wait = 1;
            white_square_gobj->flags = (white_square_gobj->flags == 1) ? 0 : 1;
        }

        gsStopCurrentProcess(1);
    }
}

// 0x801359FC
void mn1PCreateWhiteSquare(s32 port_id)
{
    GObj* white_square_gobj;
    SObj* white_square_sobj;
    s32 portrait_id = mn1PGetPortraitId(gMN1PPanel.char_id);

    mn1PRemoveWhiteSquare(port_id);

    gMN1PPanel.white_square = white_square_gobj = omMakeGObjCommon(0U, NULL, 0x1AU, 0x80000000U);
    omAddGObjRenderProc(white_square_gobj, func_ovl0_800CCF00, 0x21U, 0x80000000U, -1);
    white_square_gobj->user_data.p = port_id;
    omAddGObjCommonProc(white_square_gobj, mn1PFlashWhiteSquare, 0, 1);

    white_square_sobj = gcAppendSObjWithSprite(white_square_gobj, GetAddressFromOffset(gMN1PFilesArray[4], &FILE_013_WHITE_SQUARE));
    white_square_sobj->pos.x = (f32) (((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 45) + 26);
    white_square_sobj->pos.y = (f32) (((portrait_id >= 6 ? 1 : 0) * 43) + 37);
}

// 0x80135B30
void mn1PAnnounceFighter(s32 port_id, s32 panel_id)
{
    u16 announcer_fgms[12] = dMN1PAnnouncerNames;

    if (gMN1PPanel.p_sfx != NULL)
    {
        if ((gMN1PPanel.p_sfx->sfx_id != 0) && (gMN1PPanel.p_sfx->sfx_id == gMN1PPanel.sfx_id))
        {
            func_80026738(gMN1PPanel.p_sfx);
        }
    }

    func_800269C0(0x79U);

    gMN1PPanel.p_sfx = func_800269C0(announcer_fgms[gMN1PPanel.char_id]);

    if (gMN1PPanel.p_sfx != NULL)
    {
        gMN1PPanel.sfx_id = gMN1PPanel.p_sfx->sfx_id;
    }
}

// 0x80135BFC - Unused?
void func_ovl27_80135BFC()
{
    return;
}

// 0x80135C04
sb32 mn1PSelectChar(GObj* cursor_gobj, s32 port_id, s32 arg2, s32 select_button)
{
    if (gMN1PPanel.cursor_state != mnCursorStateHoldingToken) return FALSE;

    if (gMN1PPanel.char_id != Ft_Kind_Null) {
        mn1PSelectCharWithToken(port_id, select_button);
        gMN1PPanel.min_frames_elapsed_until_recall = gMN1PFramesElapsed + 0x1E;
        return TRUE;
    }

    func_800269C0(0xA5U);
    return FALSE;
}

// 0x80135C88
void mn1PReorderCursorsOnPickup(s32 port_id, s32 token_id)
{
    s32 display_orders[4] = dMN1PTokenPickupDisplayOrders;

    omMoveGObjDL(gMN1PPanel.token, 0x1E, display_orders[port_id] + 1);
}

// 0x80135CF4
void mn1PReorderCursorsOnPlacement(s32 port_id) {
    s32 unheld_orders[4] = dMN1PTokenPlaceUnheldDisplayOrders;

    omMoveGObjDL(gMN1PPanel.token, 0x1F, unheld_orders[port_id]);
}

// 0x80135D58
void mn1PSetCursorCoordinatesFromToken(s32 port_id)
{
    gMN1PPanel.cursor_pickup_x = SObjGetStruct(gMN1PPanel.token)->pos.x - 11.0F;
    gMN1PPanel.cursor_pickup_y = SObjGetStruct(gMN1PPanel.token)->pos.y - -14.0F;
}

// 0x80135D9C
void mn1PHandleCursorPickup(s32 port_id)
{
    gMN1PPanel.holder_port_id = port_id;
    gMN1PPanel.is_selected = FALSE;
    gMN1PPanel.cursor_state = mnCursorStateHoldingToken;
    gMN1PPanel.held_port_id = port_id;
    gMN1PPanel.unk_0x88 = FALSE;

    mn1PSyncFighterDisplay();
    mn1PReorderCursorsOnPickup(port_id, port_id);
    mn1PSetCursorCoordinatesFromToken(port_id);
    mn1PRedrawCursor(gMN1PPanel.cursor, port_id, gMN1PPanel.cursor_state);

    gMN1PPanel.unk_0xA0 = TRUE;

    func_800269C0(0x7FU);

    mn1PRemoveWhiteSquare(port_id);
    mn1PSyncNameAndLogo(port_id);
}

// 0x80135E2C
sb32 mn1PCheckAndHandleTokenPickup(GObj* cursor_gobj, s32 port_id)
{
    mnCharPanel1P* panel_info = &gMN1PPanel;

    if ((gMN1PFramesElapsed < gMN1PPanel.min_frames_elapsed_until_recall) || (gMN1PPanel.is_recalling != FALSE))
    {
        return FALSE;
    }
    else if (gMN1PPanel.cursor_state != mnCursorStateNotHoldingToken)
    {
        return FALSE;
    }

    if ((gMN1PPanel.holder_port_id == 4) && (mn1PCheckTokenPickup(cursor_gobj, port_id, port_id) != FALSE))
    {
        gMN1PPanel.holder_port_id = port_id;
        gMN1PPanel.is_selected = FALSE;
        gMN1PPanel.cursor_state = mnCursorStateHoldingToken;
        panel_info->held_port_id = port_id;
        gMN1PPanel.unk_0x88 = FALSE;

        mn1PSyncFighterDisplay(port_id);
        mn1PReorderCursorsOnPickup(port_id, port_id);
        mn1PSetCursorCoordinatesFromToken(port_id);
        mn1PRedrawCursor(cursor_gobj, port_id, gMN1PPanel.cursor_state);

        gMN1PPanel.unk_0xA0 = TRUE;

        func_800269C0(0x7FU);
        mn1PRemoveWhiteSquare(port_id);
        mn1PSyncNameAndLogo(port_id);

        return TRUE;
    }

    return FALSE;
}

// 0x80135F34
s32 mn1PGetFtKindFromTokenPositionEvenIfLocked()
{
    SObj* token_sobj = SObjGetStruct(gMN1PPanel.token);
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
            return mn1PGetFtKind((s32) (current_y - 25) / 45);
        }
    }

    is_within_bounds = (current_x >= 79) && (current_x < 122) ? TRUE : FALSE;

    if (is_within_bounds != FALSE)
    {
        is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

        if (is_within_bounds != FALSE)
        {
            return mn1PGetFtKind(((s32) (current_y - 25) / 45) + 6);
        }
    }
    return Ft_Kind_Null;
}

// 0x80136050
s32 mn1PGetFtKindFromTokenPosition(s32 port_id)
{
    SObj* token_sobj = SObjGetStruct(gMN1PPanel.token);
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
            char_id = mn1PGetFtKind((s32) (current_y - 25) / 45);

            if ((mn1PCheckFighterIsXBoxed(char_id) != FALSE) || (mn1PGetIsLocked(char_id) != FALSE))
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
            char_id = mn1PGetFtKind(((s32) (current_y - 25) / 45) + 6);

            if ((mn1PCheckFighterIsXBoxed(char_id) != FALSE) || (mn1PGetIsLocked(char_id) != FALSE))
            {
                return Ft_Kind_Null;
            }

            return char_id;
        }
    }
    return Ft_Kind_Null;
}

// 0x801361C8
void mn1PAutoPositionCursor(GObj* cursor_gobj, s32 port_id)
{
    gsController* controller;
    Vec2i coords[3] = dMN1PCursorTypePositions2;
    f32 delta;
    sb32 is_within_bounds;

    if (gMN1PPanel.unk_0xA0 != FALSE)
    {
        delta = (gMN1PPanel.cursor_pickup_x - SObjGetStruct(gMN1PPanel.cursor)->pos.x) / 5.0F;

        is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

        if (is_within_bounds != 0)
        {
            SObjGetStruct(gMN1PPanel.cursor)->pos.x = gMN1PPanel.cursor_pickup_x;
        }
        else SObjGetStruct(gMN1PPanel.cursor)->pos.x += delta;

        delta = (gMN1PPanel.cursor_pickup_y - SObjGetStruct(gMN1PPanel.cursor)->pos.y) / 5.0F;

        is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

        if (is_within_bounds != 0)
        {
            SObjGetStruct(gMN1PPanel.cursor)->pos.y = gMN1PPanel.cursor_pickup_y;
        }
        else SObjGetStruct(gMN1PPanel.cursor)->pos.y += delta;

        if ((SObjGetStruct(gMN1PPanel.cursor)->pos.x == gMN1PPanel.cursor_pickup_x) && (SObjGetStruct(gMN1PPanel.cursor)->pos.y == gMN1PPanel.cursor_pickup_y))
        {
            gMN1PPanel.unk_0xA0 = FALSE;
        }

        SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = (f32) ((f32) coords[gMN1PPanel.cursor_state].x + SObjGetStruct(cursor_gobj)->pos.x);
        SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = (f32) ((f32) coords[gMN1PPanel.cursor_state].y + SObjGetStruct(cursor_gobj)->pos.y);
    }
    else if (gMN1PPanel.is_recalling == FALSE)
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
                SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = SObjGetStruct(cursor_gobj)->pos.x + coords[gMN1PPanel.cursor_state].x;
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
                SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = SObjGetStruct(cursor_gobj)->pos.y + coords[gMN1PPanel.cursor_state].y;
            }
        }
    }
}

// 0x80136540
void mn1PSyncCursorDisplay(GObj* cursor_gobj, s32 port_id)
{
    s32 i;

    if ((SObjGetStruct(cursor_gobj)->pos.y > 124.0F) || (SObjGetStruct(cursor_gobj)->pos.y < 38.0F))
    {
        if (gMN1PPanel.cursor_state != mnCursorStatePointer)
        {
            mn1PRedrawCursor(cursor_gobj, port_id, mnCursorStatePointer);
            gMN1PPanel.cursor_state = mnCursorStatePointer;
        }
    }
    else
    {
        if (gMN1PPanel.held_port_id == -1)
        {
            if (gMN1PPanel.cursor_state != mnCursorStateNotHoldingToken)
            {
                mn1PRedrawCursor(cursor_gobj, port_id, mnCursorStateNotHoldingToken);
                gMN1PPanel.cursor_state = mnCursorStateNotHoldingToken;
            }
        }
        else
        {
            if (gMN1PPanel.cursor_state != mnCursorStateHoldingToken)
            {
                mn1PRedrawCursor(cursor_gobj, port_id, mnCursorStateHoldingToken);
                gMN1PPanel.cursor_state = mnCursorStateHoldingToken;
            }
        }
    }

    if ((gMN1PPanel.cursor_state == mnCursorStatePointer) && (gMN1PPanel.is_selected != 0))
    {
        for (i = 0; i < 4; i++)
        {
            if ((gMN1PPanel.is_selected == 1) && (mn1PCheckTokenPickup(cursor_gobj, port_id, i) != 0))
            {
                mn1PRedrawCursor(cursor_gobj, port_id, mnCursorStateNotHoldingToken);
                gMN1PPanel.cursor_state = mnCursorStateNotHoldingToken;
                return;
            }
        }
    }
}

// 0x801366C4
sb32 mn1PCheckLevelRightArrowPress(GObj* cursor_gobj)
{
    f32 current_x, current_y;
    s32 range_check;
    SObj* cursor_sobj;

    cursor_sobj = SObjGetStruct(cursor_gobj);

    current_x = cursor_sobj->pos.x + 20.0F;

    range_check = (current_x >= 258.0F) && (current_x <= 280.0F) ? TRUE : FALSE;

    if (range_check)
    {
        current_y = cursor_sobj->pos.y + 3.0F;

        range_check = (current_y >= 155.0F) && (current_y <= 174.0F) ? TRUE : FALSE;
        if (range_check) return TRUE;
    }
    return FALSE;
}

// 0x80136788
sb32 mn1PCheckLevelLeftArrowPress(GObj* cursor_gobj)
{
    f32 current_x, current_y;
    s32 range_check;
    SObj* cursor_sobj;

    cursor_sobj = SObjGetStruct(cursor_gobj);

    current_x = cursor_sobj->pos.x + 20.0F;

    range_check = (current_x >= 190.0F) && (current_x <= 212.0F) ? TRUE : FALSE;

    if (range_check)
    {
        current_y = cursor_sobj->pos.y + 3.0F;

        range_check = (current_y >= 155.0F) && (current_y <= 174.0F) ? TRUE : FALSE;
        if (range_check) return TRUE;
    }
    return FALSE;
}

// 0x8013684C
sb32 mn1PCheckAnyLevelArrowPress(GObj* cursor_gobj)
{
    if (mn1PCheckLevelRightArrowPress(cursor_gobj) != FALSE)
    {
        if (gMN1PLevelValue < 4)
        {
            func_800269C0(0xA4U);

            gMN1PDrawLevel(++gMN1PLevelValue);
        }
        return TRUE;
    }
    if (mn1PCheckLevelLeftArrowPress(cursor_gobj) != FALSE)
    {
        if (gMN1PLevelValue > 0)
        {
            func_800269C0(0xA4U);

            gMN1PDrawLevel(--gMN1PLevelValue);
        }
        return TRUE;
    }
    return FALSE;
}

// 0x801368FC
sb32 mn1PCheckStockRightArrowPress(GObj* cursor_gobj)
{
    f32 current_x, current_y;
    s32 range_check;
    SObj* cursor_sobj;

    cursor_sobj = SObjGetStruct(cursor_gobj);

    current_x = cursor_sobj->pos.x + 20.0F;

    range_check = (current_x >= 258.0F) && (current_x <= 280.0F) ? TRUE : FALSE;

    if (range_check)
    {
        current_y = cursor_sobj->pos.y + 3.0F;

        range_check = (current_y >= 175.0F) && (current_y <= 194.0F) ? TRUE : FALSE;
        if (range_check) return TRUE;
    }
    return FALSE;
}

// 0x801369C0
sb32 mn1PCheckStockLeftArrowPress(GObj* cursor_gobj)
{
    f32 current_x, current_y;
    s32 range_check;
    SObj* cursor_sobj;

    cursor_sobj = SObjGetStruct(cursor_gobj);

    current_x = cursor_sobj->pos.x + 20.0F;

    range_check = (current_x >= 190.0F) && (current_x <= 212.0F) ? TRUE : FALSE;

    if (range_check)
    {
        current_y = cursor_sobj->pos.y + 3.0F;

        range_check = (current_y >= 175.0F) && (current_y <= 194.0F) ? TRUE : FALSE;
        if (range_check) return TRUE;
    }
    return FALSE;
}

// 0x80136A84
sb32 mn1PCheckAnyStockArrowPress(GObj* cursor_gobj)
{
    if (mn1PCheckStockRightArrowPress(cursor_gobj) != FALSE)
    {
        if (gMN1PStockValue < 4)
        {
            func_800269C0(0xA4U);

            mn1PDrawStock(++gMN1PStockValue, gMN1PPanel.char_id);
        }
        return TRUE;
    }
    if (mn1PCheckStockLeftArrowPress(cursor_gobj) != FALSE)
    {
        if (gMN1PStockValue > 0)
        {
            func_800269C0(0xA4U);

            mn1PDrawStock(--gMN1PStockValue, gMN1PPanel.char_id);
        }
        return TRUE;
    }
    return FALSE;
}

// 0x80136B44
void mn1PSyncShadeAndCostume(s32 arg0, s32 select_button)
{
    s32 costume_id = ftCostume_GetIndexFFA(gMN1PPanel.char_id, select_button);

    func_ovl2_800E9248(gMN1PPanel.player, costume_id, 0);

    gMN1PPanel.costume_id = costume_id;

    mn1PDrawStock(gMN1PStockValue, gMN1PPanel.char_id);

    func_800269C0(0xA4U);
}

// 0x80136BAC
sb32 mn1PIsHumanWithCharacterSelected(s32 arg0)
{
    if (gMN1PPanel.is_selected != FALSE)
    {
        return TRUE;
    }
    return FALSE;
}

// 0x80136BD4
void mn1PRecallToken(s32 port_id)
{
    gMN1PPanel.unk_0x88 = FALSE;
    gMN1PPanel.is_selected = FALSE;
    gMN1PPanel.is_recalling = TRUE;
    gMN1PPanel.recall_frame_counter = 0;
    gMN1PPanel.recall_start_x = SObjGetStruct(gMN1PPanel.token)->pos.x;
    gMN1PPanel.recall_start_y = SObjGetStruct(gMN1PPanel.token)->pos.y;

    gMN1PPanel.recall_end_x = SObjGetStruct(gMN1PPanel.cursor)->pos.x + 20.0F;

    if (gMN1PPanel.recall_end_x > 280.0F)
    {
        gMN1PPanel.recall_end_x = 280.0F;
    }

    gMN1PPanel.recall_end_y = SObjGetStruct(gMN1PPanel.cursor)->pos.y + -15.0F;

    if (gMN1PPanel.recall_end_y < 10.0F)
    {
        gMN1PPanel.recall_end_y = 10.0F;
    }

    if (gMN1PPanel.recall_end_y < gMN1PPanel.recall_start_y)
    {
        gMN1PPanel.recall_mid_y = gMN1PPanel.recall_end_y - 20.0F;
    }
    else
    {
        gMN1PPanel.recall_mid_y = gMN1PPanel.recall_start_y - 20.0F;
    }
}

// 0x80136CB8
void mn1PGoBackTo1PMenu()
{
    gSceneData.scene_previous = gSceneData.scene_current;
    gSceneData.scene_current = scMajor_Kind_1PMode;

    mn1PSaveMatchInfo();
    func_80020A74();
    func_800266A0();
    func_80005C74();
}

// 0x80136D04
void mn1PExitIfBButtonPressed(s32 port_id)
{
    gsController* controller = &gPlayerControllers[port_id];

    if ((gMN1PFramesElapsed >= 10) && (controller->button_new & B_BUTTON))
    {
        mn1PGoBackTo1PMenu();
    }
}


// 0x80136D58
void mn1PHandleButtonPresses(GObj* cursor_gobj)
{
    gsController* controller = &gPlayerControllers[cursor_gobj->user_data.s];
    mnCharPanel1P* panel_info;
    s32 foo, bar, baz;
    s32 port_id = cursor_gobj->user_data.s;

    mn1PAutoPositionCursor(cursor_gobj, port_id);

    if ((gPlayerControllers[port_id].button_new & A_BUTTON)
        && (mn1PSelectChar(cursor_gobj, port_id, gMN1PPanel.held_port_id, 0) == FALSE)
        && (mn1PCheckAndHandleTokenPickup(cursor_gobj, port_id) == FALSE))
    {
        if (mn1PCheckPickerRightArrowPress(cursor_gobj) != FALSE)
        {
            gMN1PTimerValue = mn1PGetNextTimerValue(gMN1PTimerValue);
            mn1PDrawTimerPicker(gMN1PTimerValue);
            func_800269C0(0xA4U);
        }
        else if (mn1PCheckPickerLeftArrowPress(cursor_gobj) != FALSE)
        {
            gMN1PTimerValue = mn1PGetPrevTimerValue(gMN1PTimerValue);
            mn1PDrawTimerPicker(gMN1PTimerValue);
            func_800269C0(0xA4U);
        }
        else if (mn1PCheckBackButtonPress(cursor_gobj) != FALSE)
        {
                mn1PGoBackTo1PMenu();
                func_800269C0(0xA4U);
        }
        else if (mn1PCheckAnyLevelArrowPress(cursor_gobj) == FALSE)
        {
            mn1PCheckAnyStockArrowPress(cursor_gobj);
        }
    }

    if ((gPlayerControllers[port_id].button_new & U_CBUTTONS)
        && (mn1PSelectChar(cursor_gobj, port_id, gMN1PPanel.held_port_id, 0) == FALSE)
        && (gMN1PPanel.unk_0x88 != FALSE))
    {
        mn1PSyncShadeAndCostume(port_id, 0);
    }
    if ((gPlayerControllers[port_id].button_new & R_CBUTTONS)
        && (mn1PSelectChar(cursor_gobj, port_id, gMN1PPanel.held_port_id, 1) == FALSE)
        && (gMN1PPanel.unk_0x88 != FALSE))
    {
        mn1PSyncShadeAndCostume(port_id, 1);
    }
    if ((gPlayerControllers[port_id].button_new & D_CBUTTONS)
        && (mn1PSelectChar(cursor_gobj, port_id, gMN1PPanel.held_port_id, 2) == FALSE)
        && (gMN1PPanel.unk_0x88 != FALSE))
    {
        mn1PSyncShadeAndCostume(port_id, 2);
    }
    if ((gPlayerControllers[port_id].button_new & L_CBUTTONS)
        && (mn1PSelectChar(cursor_gobj, port_id, gMN1PPanel.held_port_id, 3) == FALSE)
        && (gMN1PPanel.unk_0x88 != FALSE))
    {
        mn1PSyncShadeAndCostume(port_id, 3);
    }

    if ((gPlayerControllers[port_id].button_new & B_BUTTON) && (mn1PIsHumanWithCharacterSelected(port_id) != FALSE))
    {
        mn1PRecallToken(port_id);
    }
    if (gMN1PPanel.is_recalling == FALSE)
    {
        mn1PExitIfBButtonPressed(port_id);
    }
    if (gMN1PPanel.is_recalling == FALSE)
    {
        mn1PSyncCursorDisplay(cursor_gobj, port_id);
    }
}

// 0x8013702C - Unused?
void func_ovl27_8013702C()
{
    return;
}

// 0x80137034
void mn1PCenterTokenInPortrait(GObj* token_gobj, s32 ft_kind)
{
    s32 portrait_id = mn1PGetPortraitId(ft_kind);

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

// 0x801370E4 - Unused?
void func_ovl27_801370E4()
{
    return;
}

// 0x801370EC
void mn1PMoveToken(s32 port_id)
{
    SObjGetStruct(gMN1PPanel.token)->pos.x += gMN1PPanel.token_x_velocity;
    SObjGetStruct(gMN1PPanel.token)->pos.y += gMN1PPanel.token_y_velocity;
}

// 0x8013712C
void mn1PSyncTokenAndFighter(GObj* token_gobj)
{
    s32 ft_kind;
    s32 port_id = token_gobj->user_data.s;

    if (gMN1PFramesElapsed < 0x1E)
    {
        token_gobj->flags = 1;
    }
    else
    {
        if ((gMN1PPanel.cursor_state != mnCursorStatePointer)
            || (gMN1PPanel.is_selected == TRUE)
            || (gMN1PPanel.is_recalling == TRUE))
        {
            token_gobj->flags = 0;
        }
        else
        {
            token_gobj->flags = 1;
        }
    }

    if ((gMN1PPanel.is_selected == FALSE)
        && (gMN1PPanel.holder_port_id != 4)) {
        if (gMN1PPanel.unk_0xA0 == FALSE) {
            SObjGetStruct(token_gobj)->pos.x = (f32) (SObjGetStruct(gMN1PPanel.cursor)->pos.x + 11.0F);
            SObjGetStruct(token_gobj)->pos.y = (f32) (SObjGetStruct(gMN1PPanel.cursor)->pos.y + -14.0F);
        }
    }
    else {
        mn1PMoveToken(port_id);
    }

    ft_kind = mn1PGetFtKindFromTokenPosition(port_id);

    if ((gMN1PPanel.is_selected == FALSE)
        && (ft_kind != gMN1PPanel.char_id))
    {
        gMN1PPanel.char_id = ft_kind;

        mn1PSyncFighterDisplay(port_id);
        mn1PSyncNameAndLogo(port_id);
    }
    mn1PDrawHighscoreAndBonuses();
}

// 0x80137268
void mn1PCreateCursorViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0xD, 0x40000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80137308
void mn1PCreateDroppedTokenViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0xF, 0x80000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801373A8
void mn1PCreateReadyToFightViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0xA, 0x800000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80137448
void mn1PCreateCursor(s32 port_id)
{
    GObj* cursor_gobj;
    s32 unused;
    intptr_t unk1[4] = dMN1PCursorTypeOffsetsUnused;
    s32 unk3[4] = dMN1PCursorStartingDisplayOrders;

    cursor_gobj = func_ovl0_800CD050(0, NULL, 0x13, 0x80000000, func_ovl0_800CCF00, 0x1E, unk3[port_id], -1, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_CURSOR_POINTER_IMAGE_OFFSET), 1, mn1PHandleButtonPresses, 2);

    cursor_gobj->user_data.s = port_id;
    gMN1PPanel.cursor = cursor_gobj;
    SObjGetStruct(cursor_gobj)->pos.x = 60.0F;
    SObjGetStruct(cursor_gobj)->pos.y = 170.0F;
    SObjGetStruct(cursor_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(cursor_gobj)->sprite.attr |= SP_TRANSPARENT;

    mn1PRedrawCursor(cursor_gobj, port_id, 0);
}

// 0x80137590
void mn1PCreateToken(s32 port_id)
{
    GObj* token_gobj;
    mnCharPanel1P* panel_info;
    intptr_t offsets[4] = dMN1PTokenOffsetsNoCPU;
    s32 orders1[4] = dMN1PTokenStartingDisplayOrders; // dMN1PTokenStartingDisplayOrders;
    // s32 orders2[4] = D_ovl27_801396A0; // dMN1PTokenHoldingDisplayOrders;
    s32 foo;

    token_gobj = func_ovl0_800CD050(0, NULL, 0x14, 0x80000000, func_ovl0_800CCF00, 0x1F, orders1[port_id], -1, GetAddressFromOffset(gMN1PFilesArray[0], offsets[port_id]), 1, mn1PSyncTokenAndFighter, 1);

    token_gobj->user_data.s = port_id;
    gMN1PPanel.token = token_gobj;

    if (gMN1PPanel.char_id == Ft_Kind_Null)
    {
        SObjGetStruct(token_gobj)->pos.x = 51.0F;
        SObjGetStruct(token_gobj)->pos.y = 161.0F;
    }
    else
    {
        mn1PCenterTokenInPortrait(token_gobj, gMN1PPanel.char_id);
    }

    SObjGetStruct(token_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(token_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 0x801376F0 - Unused?
void func_ovl27_801376F0()
{
    return;
}

// 0x801376F8
void mn1PAutopositionTokenFromPortraitEdges(s32 port_id)
{
    s32 portrait_id = mn1PGetPortraitId(gMN1PPanel.char_id);
    f32 portrait_edge_x = ((portrait_id >= 6) ? portrait_id - 6 : portrait_id) * 45 + 25;
    f32 portrait_edge_y = ((portrait_id >= 6) ? 1 : 0) * 43 + 36;
    f32 new_pos_x = SObjGetStruct(gMN1PPanel.token)->pos.x + gMN1PPanel.token_x_velocity + 13.0F;
    f32 new_pos_y = SObjGetStruct(gMN1PPanel.token)->pos.y + gMN1PPanel.token_y_velocity + 12.0F;

    if (new_pos_x < (portrait_edge_x + 5.0F))
    {
        gMN1PPanel.token_x_velocity = ((portrait_edge_x + 5.0F) - new_pos_x) / 10.0F;
    }
    if (((portrait_edge_x + 45.0F) - 5.0F) < new_pos_x)
    {
        gMN1PPanel.token_x_velocity = ((new_pos_x - ((portrait_edge_x + 45.0F) - 5.0F)) * -1.0F) / 10.0F;
    }
    if (new_pos_y < (portrait_edge_y + 5.0F))
    {
        gMN1PPanel.token_y_velocity = ((portrait_edge_y + 5.0F) - new_pos_y) / 10.0F;
    }
    if (((portrait_edge_y + 43.0F) - 5.0F) < new_pos_y)
    {
        gMN1PPanel.token_y_velocity = ((new_pos_y - ((portrait_edge_y + 43.0F) - 5.0F)) * -1.0F) / 10.0F;
    }
}

// 0x801378A8
void mn1PAutopositionPlacedToken(s32 port_id)
{
    mn1PAutopositionTokenFromPortraitEdges(port_id);
}

// 0x801378C8
void mn1PAutopositionRecalledToken(s32 port_id)
{
    f32 new_y_velocity, new_x_velocity;

    gMN1PPanel.recall_frame_counter += 1;

    if (gMN1PPanel.recall_frame_counter < 11)
    {
        new_x_velocity = (gMN1PPanel.recall_end_x - gMN1PPanel.recall_start_x) / 10.0F;

        if (gMN1PPanel.recall_frame_counter < 6)
        {
            new_y_velocity = (gMN1PPanel.recall_mid_y - gMN1PPanel.recall_start_y) / 5.0F;
        }
        else
        {
            new_y_velocity = (gMN1PPanel.recall_end_y - gMN1PPanel.recall_mid_y) / 5.0F;
        }

        gMN1PPanel.token_x_velocity = new_x_velocity;
        gMN1PPanel.token_y_velocity = new_y_velocity;
    }
    else if (gMN1PPanel.recall_frame_counter == 11)
    {
        mn1PHandleCursorPickup(port_id);

        gMN1PPanel.token_x_velocity = 0.0F;
        gMN1PPanel.token_y_velocity = 0.0F;
    }
    if (gMN1PPanel.recall_frame_counter == 30)
    {
        gMN1PPanel.is_recalling = FALSE;
    }
}

// 0x8013799C
void mn1PAutopositionToken(s32 port_id)
{
    if (gMN1PPanel.is_recalling != FALSE)
    {
        mn1PAutopositionRecalledToken(gMN1PHumanPanelPort);
    }
    if (gMN1PPanel.is_selected != FALSE)
    {
        mn1PAutopositionPlacedToken(0);
    }
}

// 0x801379E8
void mn1PCreateTokenAutopositionRoutine()
{
    omAddGObjCommonProc(omMakeGObjCommon(0U, NULL, 0x18U, 0x80000000U), mn1PAutopositionToken, 1, 1);
}

// 0x80137A2C
void mn1PSyncWhiteCircleSizeAndDisplay(GObj* white_circle_gobj)
{
    f32 sizes[12] = dMN1PWhiteCircleSizes;

    if ((gMN1PPanel.unk_0x88 == 0) && (gMN1PPanel.char_id != Ft_Kind_Null))
    {
        white_circle_gobj->flags = (white_circle_gobj->flags == 1) ? 0 : 1;

        DObjGetStruct(white_circle_gobj)->scale.vec.f.x = sizes[gMN1PPanel.char_id];
        DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[gMN1PPanel.char_id];
        DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[gMN1PPanel.char_id];
    }
    else white_circle_gobj->flags = 1;
}

// 0x80137B04
void mn1PCreateWhiteCircles()
{
    GObj* white_circle_gobj;

    white_circle_gobj = omMakeGObjCommon(0U, NULL, 0x15U, 0x80000000U);

    func_8000F120(white_circle_gobj, GetAddressFromOffset(gMN1PFilesArray[10], &FILE_016_WHITE_CIRCLE_OFFSET_2), 0);

    omAddGObjRenderProc(white_circle_gobj, odRenderDObjTreeDLLinksForGObj, 9U, 0x80000000U, -1);

    func_8000F8F4(white_circle_gobj, GetAddressFromOffset(gMN1PFilesArray[10], &FILE_016_WHITE_CIRCLE_OFFSET_1));

    omAddGObjCommonProc(white_circle_gobj, mn1PSyncWhiteCircleSizeAndDisplay, 1, 1);

    func_8000DF34(white_circle_gobj);

    DObjGetStruct(white_circle_gobj)->translate.vec.f.x = -830.0F;
    DObjGetStruct(white_circle_gobj)->translate.vec.f.y = -870.0F;
    DObjGetStruct(white_circle_gobj)->translate.vec.f.z = 0.0F;
}

// 0x80137BE4
void mn1PBlinkIfReadyToFight(GObj* gobj)
{
    if (mn1PIsReadyToFight() != FALSE)
    {
        gMN1PPressStartFlashTimer++;

        if (gMN1PPressStartFlashTimer == 40)
        {
            gMN1PPressStartFlashTimer = 0;
        }

        gobj->flags = (gMN1PPressStartFlashTimer < 30) ? GOBJ_FLAG_NONE : GOBJ_FLAG_NORENDER;
    }
    else
    {
        gobj->flags = GOBJ_FLAG_NORENDER;
        gMN1PPressStartFlashTimer = 0;
    }
}

// 0x80137C64
void mn1PCreateReadyToFightObjects()
{
    GObj* gobj;
    SObj* sobj;

    // Ready to Fight banner
    gobj = omMakeGObjCommon(0U, NULL, 0x1CU, 0x80000000U);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0x23U, 0x80000000U, -1);
    omAddGObjCommonProc(gobj, mn1PBlinkIfReadyToFight, 1, 1);

    // Ready to Fight banner bg
    sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET));
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
    sobj->pos.x = 0.0F;
    sobj->pos.y = 71.0F;

    // Ready to Fight banner text
    sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_READY_TO_FIGHT_IMAGE_OFFSET));
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    sobj->shadow_color.r = 0xFF;
    sobj->shadow_color.g = 0xCA;
    sobj->shadow_color.b = 0x13;
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue = 0x9D;
    sobj->pos.x = 50.0F;
    sobj->pos.y = 76.0F;

    // Press Start indicator
    gobj = omMakeGObjCommon(0U, NULL, 0x16U, 0x80000000U);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0x1CU, 0x80000000U, -1);
    omAddGObjCommonProc(gobj, mn1PBlinkIfReadyToFight, 1, 1);

    // "Press"
    sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_PRESS_IMAGE_OFFSET));
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    sobj->sprite.red = 0xD6;
    sobj->sprite.green = 0xDD;
    sobj->sprite.blue = 0xC6;
    sobj->pos.x = 133.0F;
    sobj->pos.y = 219.0F;

    // "Start"
    sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_START_IMAGE_OFFSET));
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0x56;
    sobj->sprite.blue = 0x92;
    sobj->pos.x = 162.0F;
    sobj->pos.y = 219.0F;
}

// 0x80137EE0 - Unused?
void func_ovl27_80137EE0()
{
    return;
}

// 0x80137EE8 - Unused?
void func_ovl27_80137EE8()
{
    return;
}

// 0x80137EF0
sb32 mn1PIsReadyToFight()
{
    sb32 is_ready = TRUE;

    if (gMN1PPanel.unk_0x88 == FALSE)
    {
        is_ready = FALSE;
    }

    return is_ready;
}

// 0x80137F10
void mn1PSaveMatchInfo()
{
    gSceneData.spgame_time_limit = gMN1PTimerValue;
    gSceneData.spgame_player = gMN1PHumanPanelPort;
    gSaveData.spgame_difficulty = gMN1PLevelValue;
    gSceneData.spgame_stage = 0;
    gSaveData.spgame_stock_count = gMN1PStockValue;

    if (gMN1PPanel.unk_0x88 != 0)
    {
        gSceneData.ft_kind = gMN1PPanel.char_id;
    }
    else
    {
        gSceneData.ft_kind = Ft_Kind_Null;
    }

    gSceneData.costume_index = gMN1PPanel.costume_id;

    lbMemory_SaveData_WriteSRAM();
}

// 0x80137F9C
void mn1PDestroyCursorAndTokenProcesses()
{
    if (gMN1PPanel.cursor != NULL)
    {
        func_8000B2EC(gMN1PPanel.cursor->gobjproc);
    }
}

// 0x80137FCC
void mn1PMain(s32 arg0)
{
    gMN1PFramesElapsed += 1;

    if (gMN1PFramesElapsed == gMN1PMaxFramesElapsed)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = scMajor_Kind_Title;

        mn1PSaveMatchInfo();
        func_80005C74();

        return;
    }

    if (func_ovl1_80390B7C() == 0)
    {
        gMN1PMaxFramesElapsed = gMN1PFramesElapsed + I_MIN_TO_FRAMES(5);
    }

    if (gMN1PIsStartTriggered != FALSE) // gMN1PIsStartTriggered
    {
        gMN1PStartDelayTimer -= 1; // gMN1PStartDelayTimer

        if (gMN1PStartDelayTimer == 0)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = scMajor_Kind_1PGame;

            mn1PSaveMatchInfo();
            func_80005C74();
        }
    }
    else if ((func_ovl1_8039076C(START_BUTTON) != FALSE) && (gMN1PFramesElapsed > 60))
    {
        if (mn1PIsReadyToFight() != FALSE)
        {
            func_800269C0(0x26AU);

            gMN1PStartDelayTimer = 30;
            gMN1PIsStartTriggered = TRUE;

            mn1PDestroyCursorAndTokenProcesses();
            return;
        }

        func_800269C0(0xA5U);
    }
}

// 0x80138118
s32 mn1PGetNextTimerValue(s32 arg0)
{
    return (arg0 == 5) ? 0x64 : 5;
}

// 0x80138134
s32 mn1PGetPrevTimerValue(s32 arg0)
{
    return (arg0 == 5) ? 0x64 : 5;
}

// 0x80138150
void mn1PInitPort(s32 port_id)
{
    gMN1PPanel.white_square = NULL;
    gMN1PPanel.p_sfx = NULL;
    gMN1PPanel.sfx_id = 0;
    gMN1PPanel.player = NULL;
    gMN1PPanel.char_id = gSceneData.ft_kind;
    gMN1PPanel.costume_id = gSceneData.costume_index;

    if (gMN1PPanel.char_id == Ft_Kind_Null)
    {
        gMN1PPanel.holder_port_id = port_id;
        gMN1PPanel.held_port_id = port_id;
        gMN1PPanel.unk_0x88 = FALSE;
        gMN1PPanel.is_selected = FALSE;
        gMN1PPanel.is_recalling = FALSE;
        gMN1PPanel.unk_0xA0 = FALSE;
    }
    else
    {
        gMN1PPanel.holder_port_id = 4;
        gMN1PPanel.held_port_id = -1;
        gMN1PPanel.unk_0x88 = TRUE;
        gMN1PPanel.is_selected = TRUE;
        gMN1PPanel.is_recalling = FALSE;
        gMN1PPanel.unk_0xA0 = FALSE;
    }
}

// 0x801381D0 - Unused?
void func_ovl27_801381D0()
{
    return;
}

// 0x801381D8
void mn1PLoadMatchInfo()
{
    gMN1PFramesElapsed = 0;
    gMN1PMaxFramesElapsed = gMN1PFramesElapsed + I_MIN_TO_FRAMES(5);
    gMN1PIsStartTriggered = 0;
    gMN1PTimerValue = gSceneData.spgame_time_limit;
    gMN1PHumanPanelPort = gSceneData.spgame_player;
    gMN1PLevelValue = gSaveData.spgame_difficulty;
    gMN1PStockValue = gSaveData.spgame_stock_count;
    gMN1PFtKind = gSceneData.ft_kind;
    gMN1PCostumeId = gSceneData.costume_index;
    gMN1PHighscoreGObj = NULL;
    gMN1PBonusesGObj = NULL;
    gMN1PLevelGObj = NULL;
    gMN1PStockGObj = NULL;
    gMN1PIsTeamBattle = D_800A4B18.is_team_battle;
    gMN1PRule = D_800A4B18.match_rules;

    mn1PInitPort(gMN1PHumanPanelPort);

    gMN1PPanel.min_frames_elapsed_until_recall = 0;
    gMN1PCharacterUnlockedMask = gSaveData.character_mask;
}

// 0x801382C8
void mn1PInitPanel(s32 port_id)
{
    mn1PCreateCursor();
    mn1PCreateToken(port_id);
    mn1PCreatePanel(port_id);

    if ((gMN1PPanel.is_selected != FALSE) && (gMN1PPanel.char_id != Ft_Kind_Null))
    {
        mn1PSpawnFighter(gMN1PPanel.player, port_id, gMN1PPanel.char_id, gMN1PPanel.costume_id);
        mn1PDrawHighscoreAndBonuses();
    }
}

// 0x80138334
void mn1PInitCSS()
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
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl27_801392E0;
    rldmSetup.statusBufSize = 0x78;
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl27_801392A8;
    rldmSetup.forceBufSize = 7;
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl27_80138630, 11U, gMN1PFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl27_80138630, 11U), 0x10U));

    omMakeGObjCommon(0x400U, &mn1PMain, 0xFU, 0x80000000U);
    func_8000B9FC(0x10, 0x80000000U, 0x64, 1, 0);
    func_ovl2_80115890();
    efManager_AllocUserData();
    ftManager_AllocFighterData(1U, 1);

    for (i = 0; i < 12; i++)
    {
        ftManager_SetFileDataKind(i);
    }

    gMN1PAnimHeap = gsMemoryAlloc(gFTAnimHeapSize, 0x10U);

    mn1PLoadMatchInfo();
    mn1PCreatePortraitViewport();
    mn1PCreateCursorViewport();
    mn1PCreateDroppedTokenViewport();
    mn1PCreatePanelViewport();
    mn1PCreateFighterViewport();
    mn1PCreatePortraitBackgroundViewport();
    mn1PCreatePortraitWhiteBackgroundViewport();
    mn1PCreateBackgroundViewport();
    mn1PCreateTitleOptionsAndBackViewport();
    mn1PCreateReadyToFightViewport();
    mn1PCreateBackground();
    mn1PCreatePortraits();
    mn1PInitPanel(gMN1PHumanPanelPort);
    mn1PDrawPickerOptionsTitleAndBack();
    mn1PDrawTotalHighscoreAndBonuses();
    gMN1PCreateLevelAndArrows();
    mn1PCreateStockAndArrows();
    mn1PCreateTokenAutopositionRoutine();
    mn1PCreateWhiteCircles();
    mn1PCreateReadyToFightObjects();
    func_ovl1_803904E0(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

    if (gSceneData.scene_previous != scMajor_Kind_VSMapSel)
    {
        func_80020AB4(0, 0xA);
    }

    func_800269C0(0x1DFU);
}

// classic_css_entry
void classic_css_entry()
{
    D_ovl27_80138C90.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl27_80138C90);
    D_ovl27_80138CAC.arena_size = (u32) ((uintptr_t)&lOverlay27ArenaHi - (uintptr_t)&lOverlay27ArenaLo);
    func_8000683C(&D_ovl27_80138CAC);
}