#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>
#include <css-1p.h>

// ovl1 stuff
extern f32 menu_zoom[12]; // D_ovl1_80390D90

// ovl26 stuff
// extern RldmFileId D_ovl26_8013B3A0[7];

extern f32 dMn1PPortraitPositionsX[12]; // 0x801387A0[12]
extern f32 dMn1PPortraitVelocities[12]; // 0x801387D0[12]
extern Vec2f dMn1PPortraitPositionsXY[12]; // 0x80138800[12];

extern s32 dMn1PFtKindOrder[12]; // 0x80138884[12];
extern s32 dMn1PPortraitOrder[12]; // 0x801388B4[12];
extern s32 dMn1PLockedPortraitOffsets[12]; // 0x801388E4[12];
// extern s32 dMn1PPortraitOffsets[12]; // 0x8013B564[12];
// extern s32 dMn1PTeamButtonOffsets[3]; // 0x8013B594[3];
// extern s32 dMn1PTypeButtonOffsets[3]; // 0x8013B5A0[3];
// extern Vec2f dMn1PUnusedPositions[12]; // 0x8013B5AC[12];
// extern s32 dMn1PLogoOffsets[12]; // 0x8013B60C[12];
// extern s32 dMn1PNameOffsets[12]; // 0x8013B63C[12];
// extern intptr_t dMn1PPanelOffsets[4]; // 0x8013B66C[4];
// extern intptr_t dMn1PPanelCPUOffsets[4]; // 0x8013B67C[4];
// extern GfxColor dMn1PUnusedColors[4]; // 0x8013B68C[4]
// extern intptr_t dMn1PTypeButtonOffsetsDuplicate[3]; // 0x8013B698[3];
// extern intptr_t dMn1PTypeOffsets[4]; // 0x8013B6A4[4];
// extern f32 dMn1PTypeOffsetsX[4]; // 0x8013B6B4[4];
// extern intptr_t dMn1PTypeOffsetsDuplicate[4]; // 0x8013B6C4[4];
// extern f32 dMn1PTypeOffsetsXDuplicate[4]; // 0x8013B6D4[4];
// extern intptr_t dMn1PPanelProcRenderList[4]; // 0x8013B6E4[4];
// extern s32 dMn1PPaletteIndexes[4]; // 0x8013B6F4[4];
extern intptr_t dMn1PNumberOffsets[10]; // 0x80138690[10];
extern intptr_t dMn1PChrOffsets[29]; // 0x801386B8[29];
extern f32 dMn1PChrWidths[29]; // 0x8013872C[29];
// extern s32 dMn1PNumberColorsTime[6]; // 0x8013B72C[6];
// extern s32 dMn1PNumberColorsStock[6]; // 0x8013B744[6];
// extern intptr_t dMn1PTitleOffsets[2]; // 0x8013B75C[2]; // title offsets
// extern GfxColor dMn1PTitleColors[2]; // 0x8013B764[2]; // title colors
// extern GfxColorPair dMn1PCursorTypeColors[4]; // 0x8013B76C[4]; // cursor type texture colors
// extern intptr_t dMn1PCursorTypeOffsets[4]; // 0x8013B784[4]; // cursor type texture offsets
// extern intptr_t dMn1PCursorOffsets[4]; // 0x8013B794[3]; // cursor offsets
// extern Vec2i dMn1PCursorTypePositions[4]; // 0x8013B7A0[3]; // x,y offset pairs for cursor type texture
// extern s32 dMn1PPanelColorIndexes[4]; // 0x8013B7B8[4]; // panel color indexes
// extern intptr_t dMn1PTitleOffsetsDuplicate[2]; // 0x8013B7C8[2]; // ffa/team battle offsets
// extern GfxColor dMn1PTitleColorsDuplicate[2]; // 0x8013B7D0[2]; // ffa/team battle colors
// extern s32 dMn1PTeamPaletteIndexes[3]; // 0x8013B7D8[3]; // team panel color indexes
// extern s32 D_ovl26_8013B7E4[3]; // ??
// extern s32 dMn1PTokenIndexes[4]; // 0x8013B7F0[4]; // token_ids
// extern u16 dMn1PAnnouncerNames[12]; // 0x8013B800[12]; // announcer names
// extern intptr_t dMn1PHandicapCPULevelNumberOffsets[10]; // 0x8013B818[10];
// extern s32 dMn1PTokenPickupDisplayOrders[4]; // 0x8013B840[4]; // display orders for cursors on token pickup
// extern s32 dMn1PTokenPlaceHeldDisplayOrders[4]; // 0x8013B850[4]; // display orders for cursors holding tokens on token placement
// extern s32 dMn1PTokenPlaceUnheldDisplayOrders[4]; // 0x8013B860[4]; // display orders for cursors not holding tokens on token placement
// extern Vec2i dMn1PCursorTypePositions2[3]; // 0x8013B870[3]; // x,y offset pairs for cursor type texture
// extern intptr_t dMn1PTokenOffsets[5]; // 0x8013B888[5]; // token offsets
// extern intptr_t dMn1PCursorTypeOffsetsUnused[4]; // 0x8013B89C[4]; // cursor type texture offsets
// extern Vec2f dMn1PCursorStartingPositions[4]; // 0x8013B8AC[4]; // starting coords for cursors
// extern s32 dMn1PCursorStartingDisplayOrders[4]; // 0x8013B8CC[4]; // display orders for cursors on initial load
// extern intptr_t dMn1PTokenOffsetsNoCPU[4]; // 0x8013B8DC; // token offsets not including cpu
// extern s32 dMn1PTokenStartingDisplayOrders[4]; // 0x8013B8EC; // display orders for tokens on initial load
// extern s32 dMn1PTokenHoldingDisplayOrders[4]; // 0x8013B8FC; // display orders for tokens while being held initially?
// extern f32 dMn1PWhiteCircleSizes[12]; // 0x8013B90C[12]; // white circle size
// extern s32 dMn1PTimerValues[8]; // 0x8013B93C[8];
// extern s32 dMn1PTimerValuesDuplicate[8]; // 0x8013B95C[8];
// extern u8 dMn1PDefaultTeam[4]; // 0x8013B97C[4]; // default team
// extern scUnkDataBounds D_ovl26_8013B980;
// extern scRuntimeInfo D_ovl26_8013B99C;

extern mnCharPanel1P gMn1PPanel; // 0x80138EE8;
// extern GObj* gMn1PPickerGObj; // 0x8013BD78; // stock/time picker
// extern s32 gMn1PTimerValue; // 0x8013BD7C;
extern s32 gMn1PStockValue; // 0x80138FB8; // stocks
// extern s32 gMn1PControllerOrderArray[4]; // 0x8013BD90; // -1 if no controller plugged in; due to a bug, random positive value if plugged in


// extern s32 gMn1PStartDelayTimer; // 0x8013BDA0; // when start is pressed when ready to fight, timer counts down to delay leaving CSS
// extern sb32 gMn1PIsStartTriggered; // 0x8013BDA4;
// extern sb32 gMn1PIsTeam1P; // 0x8013BDA8
// extern sb32 gMn1PRule; // 0x8013BDAC
// extern GObj* gMn1PTitleGObj; // 0x8013BDB0; // title gobj
// extern s32 gMn1PTokenShinePulseColor; // 0x8013BDB4;
// extern sb32 gMn1PIsTokenShineIncreasing; // 0x8013BDB8;
extern u16 gMn1PCharacterUnlockedMask; // 0x80138FC8; // flag indicating which bonus chars are available

// extern s32 gMn1PPressStartFlashTimer; // 0x8013BDC4; looping timer that helps determine blink rate of Press Start (and Ready to Fight?)
// extern s32 D_ovl26_8013BDC8;
// extern s32 gMn1PFramesElapsed; // 0x8013BDCC; // frames elapsed on CSS
// extern s32 gMn1PMaxFramesElapsed; // 0x8013BDD0; // frames to wait until exiting the CSS

// extern RldmFileNode D_ovl26_8013C0A8;
// extern u32 D_ovl26_8013C0E0[240];
// extern uintptr_t D_NF_001AC870;
// extern uintptr_t D_NF_00000854;

extern s32 gMn1PFilesArray[11]; // 0x801396A0[11]
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
// extern intptr_t FILE_000_COLON_IMAGE_OFFSET = 0xDCF0; // file 0x000 image offset for colon

// extern intptr_t FILE_011_TYPE_CP_IMAGE_OFFSET = 0xFF8; // file 0x011 image offset for CP type image
// extern intptr_t FILE_011_HANDICAP_IMAGE_OFFSET = 0x1108; // file 0x011 image offset for Handicap image
// extern intptr_t FILE_011_CPU_LEVEL_IMAGE_OFFSET = 0x1218; // file 0x011 image offset for CPU Level image
// extern intptr_t FILE_011_START_IMAGE_OFFSET = 0x1378; // Press Start's "Start" texture
// extern intptr_t FILE_011_PRESS_IMAGE_OFFSET = 0x14D8; // Press Start's "Press" texture
// extern intptr_t FILE_011_INFINITY_IMAGE_OFFSET = 0x3EF0; // file 0x011 image offset for infinity symbol
// extern intptr_t FILE_011_PICKER_TIME_IMAGE_OFFSET = 0x48B0; // file 0x011 image offset for Time picker texture
// extern intptr_t FILE_011_PICKER_STOCK_IMAGE_OFFSET = 0x5270; // file 0x011 image offset for Stock picker texture
// extern intptr_t FILE_011_CURSOR_POINTER_IMAGE_OFFSET = 0x76E8; // file 0x011 image offset for pointer cursor
// extern intptr_t FILE_011_PANEL_DOOR_L_IMAGE_OFFSET = 0xCDB0;
// extern intptr_t FILE_011_PANEL_DOOR_R_IMAGE_OFFSET = 0xDFA0;
// extern intptr_t FILE_011_ARROW_L_IMAGE_OFFSET = 0xECE8; // file 0x011 image offset for left arrow
// extern intptr_t FILE_011_ARROW_R_IMAGE_OFFSET = 0xEDC8; // file 0x011 image offset for right arrow
// extern intptr_t FILE_011_READY_TO_FIGHT_IMAGE_OFFSET = 0xF448; // Ready to Fight banner text
// extern intptr_t FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET = 0xF530; // Ready to Fight banner bg
// extern intptr_t FILE_011_PANEL_IMAGE_OFFSET = 0x104B0;
// extern intptr_t FILE_011_BACK_IMAGE_OFFSET = 0x115C8; // file 0x011 image offset for

// extern s32 FILE_013_XBOX_IMAGE_OFFSET = 0x2B8; // file 0x013 image offset
// extern intptr_t FILE_013_WHITE_SQUARE = 0x6F0; // white square
// extern s32 FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET = 0xF68; // file 0x013 image offset for portrait question mark image
// extern s32 FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET = 0x24D0; // file 0x013 image offset for portrait bg (fire) image

// extern intptr_t FILE_015_BACKGROUND_IMAGE_OFFSET = 0x440; // file 0x015 image offset for background tile

// extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_1 = 0x408; // AObj? for white circle
// extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_2 = 0x568; // DObjDesc for white circle

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
    sobj->shadow_color.r = (u8) colors[0];
    sobj->shadow_color.g = (u8) colors[1];
    sobj->shadow_color.b = (u8) colors[2];
    sobj->sprite.red = (u8) colors[3];
    sobj->sprite.green = (u8) colors[4];
    sobj->sprite.blue = (u8) colors[5];
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
void mn1PCreateNumber(GObj* number_gobj, s32 num, f32 x, f32 y, s32 colors[], s32 maxDigits, sb32 pad)
{
    intptr_t number_offsets[10] = dMn1PNumberOffsets;
    SObj* number_sobj;
    f32 left_x = x;
    s32 place;
    s32 numDigits;
    s32 digit;

    if (num < 0) num = 0;

    number_sobj = gcAppendSObjWithSprite(number_gobj, GetAddressFromOffset(gMn1PFilesArray[9], number_offsets[num % 10]));
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

        number_sobj = gcAppendSObjWithSprite(number_gobj, GetAddressFromOffset(gMn1PFilesArray[9], number_offsets[digit % 10]));
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
void dMn1PDrawString(SObj* sobj, const char *str, f32 x, f32 y, s32 color[3])
{
    intptr_t chrOffsets[29] = dMn1PChrOffsets;
    f32 chrWidths[29] = dMn1PChrWidths;
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
                start_x += 3.0f;
            }
            else
            {
                start_x += str[i] - '0';
            }
        }
        else
        {
            chr_sobj = gcAppendSObjWithSprite(sobj, GetAddressFromOffset(gMn1PFilesArray[8], chrOffsets[mn1PGetChrIndex(str[i])]));
            chr_sobj->pos.x = start_x;

            start_x += chrWidths[mn1PGetChrIndex(str[i])] + mn1PGetChrSpacing(str, i);

            switch (str[i])
            {
                default:
                    chr_sobj->pos.y = y;
                    break;
                case '\'':
                    chr_sobj->pos.y = y - 1.0F;
                    break;
                case '.':
                    chr_sobj->pos.y = y + 4.0F;
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
    s32 held_port_id = gMn1PPanel.held_port_id,
        costume_id = ftCostume_GetIndexFFA(gMn1PPanel.char_id, select_button);

    func_ovl2_800E9248(gMn1PPanel.player, costume_id, 0);

    gMn1PPanel.costume_id = costume_id;
    gMn1PPanel.is_selected = TRUE;
    gMn1PPanel.holder_port_id = 4;
    gMn1PPanel.cursor_state = mnCursorStateNotHoldingToken;

    func_ovl27_801352BC(gMn1PPanel.cursor, port_id, gMn1PPanel.cursor_state);

    gMn1PPanel.held_port_id = -1;
    gMn1PPanel.unk_0x88 = TRUE;

    func_ovl27_80135CF4(held_port_id);
    func_ovl27_80135B30(port_id, held_port_id);
    func_ovl27_801359FC(held_port_id);
    func_ovl27_8013419C(gMn1PStockValue, gMn1PPanel.char_id);
}

// 0x8013243C
f32 mn1PGetNextPortraitX(s32 portrait_id, f32 current_x_position)
{
    f32 portrait_x_position[12] = dMn1PPortraitPositionsX, // dMn1PPortraitPositionsX,
        portrait_velocity[12] = dMn1PPortraitVelocities; // dMn1PPortraitVelocities;

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
    Vec2f coordinates[12] = dMn1PPortraitPositionsXY;

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

    portrait_sobj = gcAppendSObjWithSprite(portrait_gobj, GetAddressFromOffset(gMn1PFilesArray[4], xbox_image_offset)); // AppendTexture

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
            return (gMn1PCharacterUnlockedMask & (1 << Ft_Kind_Ness)) ? FALSE : TRUE;

        case Ft_Kind_Purin:
            return (gMn1PCharacterUnlockedMask & (1 << Ft_Kind_Purin)) ? FALSE : TRUE;

        case Ft_Kind_Captain:
            return (gMn1PCharacterUnlockedMask & (1 << Ft_Kind_Captain)) ? FALSE : TRUE;

        case Ft_Kind_Luigi:
            return (gMn1PCharacterUnlockedMask & (1 << Ft_Kind_Luigi)) ? FALSE : TRUE;
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
    s32 ftKind_order[12] = dMn1PFtKindOrder;

    return ftKind_order[portrait_id];
}

// 0x801327EC
s32 mn1PGetPortraitId(s32 ft_kind)
{
    s32 portrait_id_order[12] = dMn1PPortraitOrder;

    return portrait_id_order[ft_kind];
}

// mn1PRenderPortraitWithNoise
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
    intptr_t locked_portrait_offsets[12] = dMn1PLockedPortraitOffsets;

    // portrait bg (fire)
    texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
    omAddGObjRenderProc(texture_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
    omAddGObjCommonProc(texture_gobj, mn1PSetPortraitX, 1, 1);

    texture_sobj = gcAppendSObjWithSprite(texture_gobj, GetAddressFromOffset(gMn1PFilesArray[4], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
    texture_sobj->pos.x = (f32) (((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 0x2D) + 0x19);
    texture_sobj->pos.y = (f32) (((portrait_id >= 6 ? 1 : 0) * 0x2B) + 0x24);

    mn1PInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
    texture_gobj->user_data.s = portrait_id;

    // portrait
    texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
    omAddGObjRenderProc(texture_gobj, mn1PRenderPortraitWithNoise, 0x1BU, 0x80000000U, -1);
    omAddGObjCommonProc(texture_gobj, mn1PSetPortraitX, 1, 1);

    texture_sobj = gcAppendSObjWithSprite(texture_gobj, GetAddressFromOffset(gMn1PFilesArray[4], locked_portrait_offsets[mn1PGetFtKind(portrait_id)]));
    texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
    texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;

    texture_gobj->user_data.s = portrait_id;
    mn1PInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

    // question mark
    texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
    omAddGObjRenderProc(texture_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
    omAddGObjCommonProc(texture_gobj, mn1PSetPortraitX, 1, 1);

    texture_sobj = gcAppendSObjWithSprite(texture_gobj, GetAddressFromOffset(gMn1PFilesArray[4], &FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET));
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

// func_ovl27_80132BA4
// func_ovl27_80132D60
// func_ovl27_80132DA0
// func_ovl27_80132F1C
// func_ovl27_80132FBC
// func_ovl27_8013305C
// func_ovl27_801330FC
// func_ovl27_8013319C
// func_ovl27_801331F4
// func_ovl27_801333D4
// func_ovl27_80133680
// func_ovl27_80133804
// func_ovl27_801338EC
// func_ovl27_80133990
// func_ovl27_80133A30
// func_ovl27_80133B74
// func_ovl27_80133BC0
// func_ovl27_80133D9C
// func_ovl27_80133F30
// func_ovl27_80133FA4
// func_ovl27_8013419C
// func_ovl27_8013434C
// func_ovl27_801343C8
// func_ovl27_801346B8
// func_ovl27_80134758
// func_ovl27_8013476C
// func_ovl27_80134968
// func_ovl27_8013497C
// func_ovl27_80134B3C
// func_ovl27_80134B64
// func_ovl27_80134BB4
// func_ovl27_80134CB8
// func_ovl27_80134D08
// func_ovl27_80134E88
// func_ovl27_80134EC0
// func_ovl27_80134EE0
// func_ovl27_80134F40
// func_ovl27_80135060
// func_ovl27_801351CC
// func_ovl27_801352BC
// func_ovl27_801354CC
// func_ovl27_80135594
// func_ovl27_8013565C
// func_ovl27_80135724
// func_ovl27_80135804
// func_ovl27_801358C4
// func_ovl27_80135924
// func_ovl27_8013595C
// func_ovl27_801359FC
// func_ovl27_80135B30
// func_ovl27_80135C04
// func_ovl27_80135C88
// func_ovl27_80135CF4
// func_ovl27_80135D58
// func_ovl27_80135D9C
// func_ovl27_80135E2C
// func_ovl27_80135F34
// func_ovl27_80136050
// func_ovl27_801361C8
// func_ovl27_80136540
// func_ovl27_801366C4
// func_ovl27_80136788
// func_ovl27_8013684C
// func_ovl27_801368FC
// func_ovl27_801369C0
// func_ovl27_80136A84
// func_ovl27_80136B44
// func_ovl27_80136BAC
// func_ovl27_80136BD4
// func_ovl27_80136CB8
// func_ovl27_80136D04
// func_ovl27_80136D58
// func_ovl27_80137034
// func_ovl27_801370EC
// func_ovl27_8013712C
// func_ovl27_80137268
// func_ovl27_80137308
// func_ovl27_801373A8
// func_ovl27_80137448
// func_ovl27_80137590
// func_ovl27_801376F8
// func_ovl27_801378A8
// func_ovl27_801378C8
// func_ovl27_8013799C
// func_ovl27_801379E8
// func_ovl27_80137A2C
// func_ovl27_80137B04
// func_ovl27_80137BE4
// func_ovl27_80137C64
// func_ovl27_80137EF0
// func_ovl27_80137F10
// func_ovl27_80137F9C
// func_ovl27_80137FCC
// func_ovl27_80138118
// func_ovl27_80138134
// func_ovl27_80138150
// func_ovl27_801381D8
// func_ovl27_801382C8
// func_ovl27_80138334
// classic_css_entry
