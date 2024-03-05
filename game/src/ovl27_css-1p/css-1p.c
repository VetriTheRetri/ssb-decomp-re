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

// extern f32 dMn1PPortraitPositionsX[12]; // 0x8013B3F0
// extern f32 dMn1PPortraitVelocities[12]; // 0x8013B420
// extern Vec2f dMn1PPortraitPositionsXY[12]; // 0x8013B450[12];

// extern s32 dMn1PFtKindOrder[12]; // 0x8013B4D4[12];
// extern s32 dMn1PPortraitOrder[12]; // 0x8013B504[12];
// extern s32 dMn1PLockedPortraitOffsets[12]; // 0x8013B534[12];
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

// extern mnCharPanel1P gMn1PPanels[GMMATCH_PLAYERS_MAX]; // 0x8013BA88[GMMATCH_PLAYERS_MAX];
// extern GObj* gMn1PPickerGObj; // 0x8013BD78; // stock/time picker
// extern s32 gMn1PTimerValue; // 0x8013BD7C;
// extern s32 gMn1PStockValue; // 0x8013BD80;
// extern s32 gMn1PControllerOrderArray[4]; // 0x8013BD90; // -1 if no controller plugged in; due to a bug, random positive value if plugged in

// extern s32 gMn1PStartDelayTimer; // 0x8013BDA0; // when start is pressed when ready to fight, timer counts down to delay leaving CSS
// extern sb32 gMn1PIsStartTriggered; // 0x8013BDA4;
// extern sb32 gMn1PIsTeam1P; // 0x8013BDA8
// extern sb32 gMn1PRule; // 0x8013BDAC
// extern GObj* gMn1PTitleGObj; // 0x8013BDB0; // title gobj
// extern s32 gMn1PTokenShinePulseColor; // 0x8013BDB4;
// extern sb32 gMn1PIsTokenShineIncreasing; // 0x8013BDB8;
// extern u16 gMn1PCharacterUnlockedMask; // 0x8013BDBC; // flag indicating which bonus chars are available

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

// func_ovl27_80131F5C
// func_ovl27_80131FD4
// func_ovl27_801320F8
// func_ovl27_80132384
// func_ovl27_8013243C
// func_ovl27_80132550
// func_ovl27_8013255C
// func_ovl27_801325D8
// func_ovl27_80132634
// func_ovl27_801326C8
// func_ovl27_8013279C
// func_ovl27_801327EC
// func_ovl27_8013283C
// func_ovl27_801328FC
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
