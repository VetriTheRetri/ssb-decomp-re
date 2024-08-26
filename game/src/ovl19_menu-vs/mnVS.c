#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mnVS.h>

// ?
extern u8 gSPImemOkay;
extern void func_ovl0_800CCF00();
extern void func_ovl0_800CD2CC();

// ovl19 stuff
extern RldmFileId D_ovl19_801347B0[2] = { 0x000, 0x006 };

// 0x801347B8
extern Lights1 dMNVSLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x801347D0
extern Gfx dMNVSDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMNVSLights1),
    gsSPEndDisplayList()
};

// 0x801347F8
extern intptr_t dMNVSNumberOffsets[10] = {
    0x0000D310, 0x0000D3E0, 0x0000D4B0, 0x0000D580,
    0x0000D650, 0x0000D720, 0x0000D7F0, 0x0000D8C0,
    0x0000D990, 0x0000DA60
};

// 0x80134820
extern f32 dMNVSUnusedFloats[10] = {
    10.0F, 6.0F, 9.0F, 9.0F,
    10.0F, 9.0F, 9.0F, 10.0F,
    9.0F, 10.0F
};

// 0x80134848
extern gsColorRGBPair dMNVSButtonColorsSelected;
// 0x80134850
extern gsColorRGBPair dMNVSButtonColorsHighlighted;
// 0x80134858
extern gsColorRGBPair dMNVSButtonColorsDefault;

// 0x80134860
extern gsColorRGB dMNVSRuleValueColor;
// 0x80134864
extern u32 dMNVSTimeStockValueColor[3];

// 0x80134870
extern GObj** gMNVSButtons[4];

extern scUnkDataBounds D_ovl19_80134880;
extern scRuntimeInfo D_ovl19_8013489C;

// 0x80134930
extern GObj* gMNVSButtonGObjVSStart;

// 0x80134934
extern GObj* gMNVSButtonGObjRule;

// 0x80134938
extern GObj* gMNVSButtonGObjTimeStock;

// 0x8013493C
extern GObj* gMNVSButtonGObjVSOptions;

// 0x80134948
extern s32 gMNVSCursorIndex;

// 0x8013494C
extern s32 gMNVSRule;

// 0x80134950
extern s32 gMNVSTime;

// 0x80134954
extern s32 gMNVSStock;

// 0x80134958
extern GObj* gMNVSRuleValueGObj;

// 0x8013495C
extern GObj* gMNVSTimeStockValueGObj;

// 0x80134960
extern GObj* gMNVSUnusedGObj;

// 0x80134964
extern GObj* gMNVSRuleArrowsGObj;

// 0x80134968
extern GObj* gMNVSTimeStockArrowsGObj;

// 0x8013496C
extern GObj* gMNVSTimeStockArrowBlinkTimer;

// 0x80134970
extern GObj* gMNVSRuleArrowBlinkTimer;

// 0x80134974
extern s32 gMNVSExitInterrupt;

// 0x80134978
extern s32 gMNVSInputDirection;

// 0x8013497C
extern s32 gMNVSChangeWait;

// 0x80134980
extern s32 gMNVSFramesElapsed;

// 0x80134984
extern s32 gMNVSMaxFramesElapsed;

extern rdFileNode D_ovl19_80134988;
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern uintptr_t gMNVSFilesArray[2]; // 0x80134A48[2]
// gMNVSFilesArray[0] - D_ovl19_80134A48; // file 0x000 pointer
// gMNVSFilesArray[1] - D_ovl19_80134A4C; // file 0x006 pointer

// Offsets
extern intptr_t FILE_000_BUTTON_LEFT_TEXTURE_OFFSET = 0x1E8; // file 0x000 offset for
extern intptr_t FILE_000_BUTTON_MIDDLE_TEXTUREOFFSET = 0x330; // file 0x000 offset for
extern intptr_t FILE_000_BUTTON_RIGHT_TEXTURE_OFFSET = 0x568; // file 0x000 offset for
extern intptr_t FILE_000_LEFT_ARROW_TEXTURE_OFFSET = 0xDE30; // file 0x000 offset for
extern intptr_t FILE_000_RIGHT_ARROW_TEXTURE_OFFSET = 0xDD90; // file 0x000 offset for
extern intptr_t FILE_000_INFINITY_TEXTURE_OFFSET = 0xDC48; // file 0x000 offset for
extern intptr_t FILE_000_SMASH_LOGO_TEXTURE_OFFSET = 0x31F8; // file 0x000 offset for
extern intptr_t FILE_000_GAME_MODE_TEXTURE_OFFSET = 0xD240; // file 0x000 offset for
extern intptr_t FILE_000_MENU_BACKGROUND_TEXTURE_OFFSET = 0x18000; // file 0x000 offset for
extern intptr_t FILE_000_YELLOW_UNDERLAY_TEXTURE_OFFSET = 0x2A30; // file 0x000 offset for

extern intptr_t FILE_006_VS_TEXTURE_OFFSET = 0x6118; // file 0x006 offset for
extern intptr_t FILE_006_VS_START_TEXTURE_OFFSET = 0x24C8; // file 0x006 offset for
extern intptr_t FILE_006_STOCK_SMALL_TEXTURE_OFFSET = 0x2A80; // file 0x006 offset for
extern intptr_t FILE_006_TIME_SMALL_TEXTURE_OFFSET = 0x28E0; // file 0x006 offset for
extern intptr_t FILE_006_TEAM_TEXTURE_OFFSET = 0x2C20; // file 0x006 offset for
extern intptr_t FILE_006_RULE_TEXTURE_OFFSET = 0x2748; // file 0x006 offset for
extern intptr_t FILE_006_TIME_TEXTURE_OFFSET = 0x2EC8; // file 0x006 offset for
extern intptr_t FILE_006_MIN_TEXTURE_OFFSET = 0x2FC8; // file 0x006 offset for
extern intptr_t FILE_006_STOCK_TEXTURE_OFFSET = 0x3248; // file 0x006 offset for
extern intptr_t FILE_006_VS_OPTIONS_TEXTURE_OFFSET = 0x3828; // file 0x006 offset for
extern intptr_t FILE_006_N64_CONSOLE_TEXTURE_OFFSET = 0x5EB0; // file 0x006 offset for

// 0x80131B00
void mnVSSetupDisplayList(Gfx **display_list)
{
    gSPDisplayList(display_list[0]++, dMNVSDisplayList);
}

// 0x80131B24
s32 mnVSPow(s32 num, s32 pow)
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

// 0x80131BC4
void mnVSSetTextureColors(SObj* sobj, u32 color[])
{
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    sobj->sprite.red = color[0];
    sobj->sprite.green = color[1];
    sobj->sprite.blue = color[2];
}

// 0x80131BF4
s32 mnVSGetNumberOfDigits(s32 num, s32 maxDigits)
{
    s32 numDigits;

    for (numDigits = maxDigits; numDigits > 0; numDigits--)
    {
        if (mnVSPow(10, numDigits - 1) != 0 ? num / mnVSPow(10, numDigits - 1) : 0 != 0) return numDigits;
    }

    return 0;
}

// 0x80131CA0
void mnVSCreateNumber(GObj* number_gobj, s32 num, f32 x, f32 y, s32 colors[], s32 maxDigits, sb32 pad)
{
    intptr_t number_offsets[10] = dMNVSNumberOffsets;
    f32 unused_floats[10] = dMNVSUnusedFloats;
    SObj* number_sobj;
    f32 left_x = x;
    s32 place;
    s32 numDigits;
    s32 digit;

    if (num < 0) num = 0;

    number_sobj = gcAppendSObjWithSprite(number_gobj, GetAddressFromOffset(gMNVSFilesArray[0], number_offsets[num % 10]));
    mnVSSetTextureColors(number_sobj, colors);
    left_x -= 11.0F;
    number_sobj->pos.x = left_x;
    number_sobj->pos.y = y;

    for
    (
        place = 1, numDigits = (pad != FALSE) ? maxDigits : mnVSGetNumberOfDigits(num, maxDigits);
        place < numDigits;
        place++, numDigits = (pad != FALSE) ? maxDigits : mnVSGetNumberOfDigits(num, maxDigits)
    )
    {
        digit = (mnVSPow(10, place) != 0) ? num / mnVSPow(10, place) : 0;

        number_sobj = gcAppendSObjWithSprite(number_gobj, GetAddressFromOffset(gMNVSFilesArray[0], number_offsets[digit % 10]));
        mnVSSetTextureColors(number_sobj, colors);
        left_x -= 11.0F;
        number_sobj->pos.x = left_x;
        number_sobj->pos.y = y;
    }
}

// 0x80131F4C
void mnVSUpdateButton(GObj* button_gobj, s32 button_status)
{
    gsColorRGBPair selected_colors = dMNVSButtonColorsSelected;
    gsColorRGBPair highlighted_colors = dMNVSButtonColorsHighlighted;
    gsColorRGBPair default_colors = dMNVSButtonColorsDefault;
    gsColorRGBPair *colors;
    s32 i;
    SObj* button_sobj;

    switch (button_status)
    {
        case nMNButtonStatusHighlighted:
            colors = &highlighted_colors;
            break;
        case nMNButtonStatusDefault:
            colors = &default_colors;
            break;
        case nMNButtonStatusSelected:
            colors = &selected_colors;
            break;
    }

    button_sobj = SObjGetStruct(button_gobj);

    for (i = 0; i < 3; i++)
    {
        button_sobj->shadow_color.r = colors->prim.r;
        button_sobj->shadow_color.g = colors->prim.g;
        button_sobj->shadow_color.b = colors->prim.b;
        button_sobj->sprite.red = colors->env.r;
        button_sobj->sprite.green = colors->env.g;
        button_sobj->sprite.blue = colors->env.b;

        button_sobj = button_sobj->next;
    }
}

// 0x80132024
void mnVSCreateButton(GObj* button_gobj, f32 x, f32 y, s32 arg3)
{
    SObj* button_sobj;

    button_sobj = gcAppendSObjWithSprite(button_gobj, GetAddressFromOffset(gMNVSFilesArray[0], &FILE_000_BUTTON_LEFT_TEXTURE_OFFSET));
    button_sobj->sprite.attr &= ~SP_FASTCOPY;
    button_sobj->sprite.attr |= SP_TRANSPARENT;
    button_sobj->pos.x = x;
    button_sobj->pos.y = y;

    button_sobj = gcAppendSObjWithSprite(button_gobj, GetAddressFromOffset(gMNVSFilesArray[0], &FILE_000_BUTTON_MIDDLE_TEXTUREOFFSET));
    button_sobj->sprite.attr &= ~SP_FASTCOPY;
    button_sobj->sprite.attr |= SP_TRANSPARENT;
    button_sobj->pos.x = x + 16.0f;
    button_sobj->pos.y = y;
    button_sobj->cmt = 0;
    button_sobj->cms = 0;
    button_sobj->maskt = 4;
    button_sobj->masks = 0;
    button_sobj->lrs = arg3 * 8;
    button_sobj->lrt = 0x1D;

    button_sobj = gcAppendSObjWithSprite(button_gobj, GetAddressFromOffset(gMNVSFilesArray[0], &FILE_000_BUTTON_RIGHT_TEXTURE_OFFSET));
    button_sobj->sprite.attr &= ~SP_FASTCOPY;
    button_sobj->sprite.attr |= SP_TRANSPARENT;
    button_sobj->pos.x = x + 16.0f + (arg3 * 8);
    button_sobj->pos.y = y;
}

// 0x80132154
void mnVSCreateVSStartButton()
{
    GObj* button_gobj;
    SObj* button_sobj;

    gMNVSButtonGObjVSStart = button_gobj = omMakeGObjSPAfter(0, 0, 4, 0x80000000);
    omAddGObjRenderProc(button_gobj, func_ovl0_800CCF00, 2, 0x80000000, -1);
    mnVSCreateButton(button_gobj, 120.0F, 31.0F, 17);

    mnVSUpdateButton(button_gobj, (gMNVSCursorIndex == 0) ? nMNButtonStatusHighlighted : nMNButtonStatusDefault);

    button_sobj = gcAppendSObjWithSprite(button_gobj, GetAddressFromOffset(gMNVSFilesArray[1], &FILE_006_VS_START_TEXTURE_OFFSET));
    button_sobj->sprite.attr &= ~SP_FASTCOPY;
    button_sobj->sprite.attr |= SP_TRANSPARENT;
    button_sobj->sprite.red = 0;
    button_sobj->sprite.green = 0;
    button_sobj->sprite.blue = 0;
    button_sobj->pos.x = 153.0f;
    button_sobj->pos.y = 36.0f;
}

// 0x80132238
void mnVSCreateRuleValue()
{
    GObj* rule_value_gobj;
    SObj* rule_value_sobj;
    gsColorRGB color = dMNVSRuleValueColor;

    gMNVSRuleValueGObj = rule_value_gobj = omMakeGObjSPAfter(0, 0, 5, 0x80000000);

    omAddGObjRenderProc(rule_value_gobj, func_ovl0_800CCF00, 3, 0x80000000, -1);

    switch (gMNVSRule)
    {
        case nMNRuleStock:
            rule_value_sobj = gcAppendSObjWithSprite(rule_value_gobj, GetAddressFromOffset(gMNVSFilesArray[1], &FILE_006_STOCK_SMALL_TEXTURE_OFFSET));
            rule_value_sobj->sprite.attr &= ~SP_FASTCOPY;
            rule_value_sobj->sprite.attr |= SP_TRANSPARENT;
            rule_value_sobj->pos.x = 183.0f;
            rule_value_sobj->pos.y = 78.0f;
            rule_value_sobj->sprite.red = color.r;
            rule_value_sobj->sprite.green = color.g;
            rule_value_sobj->sprite.blue = color.b;
            return;
        case nMNRuleTime:
            rule_value_sobj = gcAppendSObjWithSprite(rule_value_gobj, GetAddressFromOffset(gMNVSFilesArray[1], &FILE_006_TIME_SMALL_TEXTURE_OFFSET));
            rule_value_sobj->sprite.attr &= ~SP_FASTCOPY;
            rule_value_sobj->sprite.attr |= SP_TRANSPARENT;
            rule_value_sobj->pos.x = 187.0f;
            rule_value_sobj->pos.y = 78.0f;
            rule_value_sobj->sprite.red = color.r;
            rule_value_sobj->sprite.green = color.g;
            rule_value_sobj->sprite.blue = color.b;
            return;
        case nMNRuleStockTeam:
            rule_value_sobj = gcAppendSObjWithSprite(rule_value_gobj, GetAddressFromOffset(gMNVSFilesArray[1], &FILE_006_STOCK_SMALL_TEXTURE_OFFSET));
            rule_value_sobj->sprite.attr &= ~SP_FASTCOPY;
            rule_value_sobj->sprite.attr |= SP_TRANSPARENT;
            rule_value_sobj->pos.x = 165.0f;
            rule_value_sobj->pos.y = 78.0f;
            rule_value_sobj->sprite.red = color.r;
            rule_value_sobj->sprite.green = color.g;
            rule_value_sobj->sprite.blue = color.b;

            rule_value_sobj = gcAppendSObjWithSprite(rule_value_gobj, GetAddressFromOffset(gMNVSFilesArray[1], &FILE_006_TEAM_TEXTURE_OFFSET));
            rule_value_sobj->sprite.attr &= ~SP_FASTCOPY;
            rule_value_sobj->sprite.attr |= SP_TRANSPARENT;
            rule_value_sobj->pos.x = 212.0f;
            rule_value_sobj->pos.y = 78.0f;
            rule_value_sobj->sprite.red = color.r;
            rule_value_sobj->sprite.green = color.g;
            rule_value_sobj->sprite.blue = color.b;
            return;
        case nMNRuleTimeTeam:
            rule_value_sobj = gcAppendSObjWithSprite(rule_value_gobj, GetAddressFromOffset(gMNVSFilesArray[1], &FILE_006_TIME_SMALL_TEXTURE_OFFSET));
            rule_value_sobj->sprite.attr &= ~SP_FASTCOPY;
            rule_value_sobj->sprite.attr |= SP_TRANSPARENT;
            rule_value_sobj->pos.x = 168.0f;
            rule_value_sobj->pos.y = 78.0f;
            rule_value_sobj->sprite.red = color.r;
            rule_value_sobj->sprite.green = color.g;
            rule_value_sobj->sprite.blue = color.b;

            rule_value_sobj = gcAppendSObjWithSprite(rule_value_gobj, GetAddressFromOffset(gMNVSFilesArray[1], &FILE_006_TEAM_TEXTURE_OFFSET));
            rule_value_sobj->sprite.attr &= ~SP_FASTCOPY;
            rule_value_sobj->sprite.attr |= SP_TRANSPARENT;
            rule_value_sobj->pos.x = 212.0f;
            rule_value_sobj->pos.y = 78.0f;
            rule_value_sobj->sprite.red = color.r;
            rule_value_sobj->sprite.green = color.g;
            rule_value_sobj->sprite.blue = color.b;
            return;
    }
}

// 0x80132524
SObj* mnVSGetArrowSObj(GObj* arrow_gobj, s32 direction)
{
    SObj* next_arrow_sobj;
    SObj* first_arrow_sobj;

    first_arrow_sobj = SObjGetStruct(arrow_gobj);

    if (first_arrow_sobj != NULL)
    {
        if (direction == first_arrow_sobj->user_data.s)
        {
            return first_arrow_sobj;
        }

        next_arrow_sobj = first_arrow_sobj->next;

        if ((next_arrow_sobj != NULL) && (direction == next_arrow_sobj->user_data.s))
        {
            return next_arrow_sobj;
        }
    }

    return NULL;
}

// 0x80132570
void mnVSCreateLeftArrow(GObj* arrow_gobj, f32 x, f32 y)
{
    SObj* arrow_sobj;

    arrow_sobj = gcAppendSObjWithSprite(arrow_gobj, GetAddressFromOffset(gMNVSFilesArray[0], &FILE_000_LEFT_ARROW_TEXTURE_OFFSET));
    arrow_sobj->user_data.s = 0;
    arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
    arrow_sobj->sprite.attr |= SP_TRANSPARENT;
    arrow_sobj->pos.x = x;
    arrow_sobj->pos.y = y;
    arrow_sobj->sprite.red = 0xFF;
    arrow_sobj->sprite.green = 0xAE;
    arrow_sobj->sprite.blue = 0;
}

// 0x801325E4
void mnVSCreateRightArrow(GObj* arrow_gobj, f32 x, f32 y)
{
    SObj* arrow_sobj;

    arrow_sobj = gcAppendSObjWithSprite(arrow_gobj, GetAddressFromOffset(gMNVSFilesArray[0], &FILE_000_RIGHT_ARROW_TEXTURE_OFFSET));
    arrow_sobj->user_data.s = 1;
    arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
    arrow_sobj->sprite.attr |= SP_TRANSPARENT;
    arrow_sobj->pos.x = x;
    arrow_sobj->pos.y = y;
    arrow_sobj->sprite.red = 0xFF;
    arrow_sobj->sprite.green = 0xAE;
    arrow_sobj->sprite.blue = 0;
}

// 0x8013265C
void mnVSAnimateRuleArrows(GObj* rule_arrows_gobj)
{
    SObj* arrow_sobj;

    while (TRUE)
    {
        if (gMNVSCursorIndex == 1)
        {
            gMNVSRuleArrowBlinkTimer--;

            if (gMNVSRuleArrowBlinkTimer == 0)
            {
                if (rule_arrows_gobj->flags == 1)
                {
                    rule_arrows_gobj->flags = 0;
                }
                else rule_arrows_gobj->flags = 1;

                gMNVSRuleArrowBlinkTimer = 30;
            }

            if (gMNVSRule == nMNRuleTime)
            {
                arrow_sobj = mnVSGetArrowSObj(rule_arrows_gobj, 0);

                if (arrow_sobj != NULL)
                {
                    omEjectSObj(arrow_sobj);
                }
            }
            else if (mnVSGetArrowSObj(rule_arrows_gobj, 0) == NULL)
            {
                mnVSCreateLeftArrow(rule_arrows_gobj, 165.0F, 70.0F);
            }

            if (gMNVSRule == nMNRuleStockTeam)
            {
                arrow_sobj = mnVSGetArrowSObj(rule_arrows_gobj, 1);

                if (arrow_sobj != NULL)
                {
                    omEjectSObj(arrow_sobj);
                }
            }
            else if (mnVSGetArrowSObj(rule_arrows_gobj, 1) == NULL)
            {
                mnVSCreateRightArrow(rule_arrows_gobj, 250.0F, 70.0F);
            }
        }
        else rule_arrows_gobj->flags = 1;

        gsStopCurrentProcess(1);
    }
}

// 0X80132818
void mnVSCreateRuleArrows()
{
    GObj* rule_arrows_gobj;

    if (gMNVSRuleArrowsGObj != NULL)
    {
        omEjectGObj(gMNVSRuleArrowsGObj);

        gMNVSRuleArrowsGObj = NULL;
    }

    gMNVSRuleArrowsGObj = rule_arrows_gobj = omMakeGObjSPAfter(0, 0, 4, 0x80000000);

    omAddGObjRenderProc(rule_arrows_gobj, func_ovl0_800CCF00, 2, 0x80000000, -1);
    omAddGObjCommonProc(rule_arrows_gobj, mnVSAnimateRuleArrows, 0, 1);
}

// 0x801328A8
void mnVSAnimateTimeStockArrows(GObj* time_stock_arrows_gobj)
{
    while (TRUE)
    {
        if (gMNVSCursorIndex == 2)
        {
            gMNVSTimeStockArrowBlinkTimer--;

            if (gMNVSTimeStockArrowBlinkTimer == 0)
            {
                if (time_stock_arrows_gobj->flags == 1)
                {
                    time_stock_arrows_gobj->flags = 0;
                }
                else time_stock_arrows_gobj->flags = 1;

                gMNVSTimeStockArrowBlinkTimer = 30;
            }
        }
        else time_stock_arrows_gobj->flags = 1;

        gsStopCurrentProcess(1);
    }
}

// 0x80132964
void mnVSCreateTimeStockArrows()
{
    GObj* time_stock_arrows_gobj;

    if (gMNVSTimeStockArrowsGObj != NULL)
    {
        omEjectGObj(gMNVSTimeStockArrowsGObj);

        gMNVSTimeStockArrowsGObj = NULL;
    }

    gMNVSTimeStockArrowsGObj = time_stock_arrows_gobj = omMakeGObjSPAfter(0, 0, 4, 0x80000000);
    omAddGObjRenderProc(time_stock_arrows_gobj, func_ovl0_800CCF00, 2, 0x80000000, -1);
    omAddGObjCommonProc(time_stock_arrows_gobj, mnVSAnimateTimeStockArrows, 0, 1);

    if (mnVSIsTime() != FALSE)
    {
        mnVSCreateLeftArrow(time_stock_arrows_gobj, 155.0F, 109.0F);
        mnVSCreateRightArrow(time_stock_arrows_gobj, 230.0F, 109.0F);
    }
    else
    {
        mnVSCreateLeftArrow(time_stock_arrows_gobj, 165.0F, 109.0F);
        mnVSCreateRightArrow(time_stock_arrows_gobj, 230.0F, 109.0F);
    }
}

// 0x80132A4C
void mnVSCreateRuleButton()
{
    GObj* rule_button_gobj;
    SObj* button_sobj;

    gMNVSButtonGObjRule = rule_button_gobj = omMakeGObjSPAfter(0, 0, 4, 0x80000000);
    omAddGObjRenderProc(rule_button_gobj, func_ovl0_800CCF00, 2, 0x80000000, -1);
    mnVSCreateButton(rule_button_gobj, 97.0F, 70.0F, 17);

    mnVSUpdateButton(rule_button_gobj, (gMNVSCursorIndex == nMNButtonVSRule) ? nMNButtonStatusHighlighted : nMNButtonStatusDefault);

    button_sobj = gcAppendSObjWithSprite(rule_button_gobj, GetAddressFromOffset(gMNVSFilesArray[1], &FILE_006_RULE_TEXTURE_OFFSET));
    button_sobj->sprite.attr &= ~SP_FASTCOPY;
    button_sobj->sprite.attr |= SP_TRANSPARENT;
    button_sobj->sprite.red = 0;
    button_sobj->sprite.green = 0;
    button_sobj->sprite.blue = 0;
    button_sobj->pos.x = 108.0f;
    button_sobj->pos.y = 75.0f;

    mnVSCreateRuleArrows();
}

// 0x80132B38
sb32 mnVSIsTime()
{
    if ((gMNVSRule == nMNRuleTime) || (gMNVSRule == nMNRuleTimeTeam))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80132B68
s32 mnVSGetTimeStockValue()
{
    if (mnVSIsTime() != FALSE)
    {
        return gMNVSTime;
    }
    else return gMNVSStock + 1;
}

// 0x80132BA0
void mnVSCreateTimeStockValue()
{
    GObj* time_stock_value_gobj;
    SObj* time_stock_value_sobj;
    s32 value;
    s32 x;
    s32 unused;
    u32 color[3] = dMNVSTimeStockValueColor;

    gMNVSTimeStockValueGObj = time_stock_value_gobj = omMakeGObjSPAfter(0, 0, 5, 0x80000000);
    omAddGObjRenderProc(time_stock_value_gobj, func_ovl0_800CCF00, 3, 0x80000000, -1);

    value = mnVSGetTimeStockValue();

    if (value == 100)
    {
        time_stock_value_sobj = gcAppendSObjWithSprite(time_stock_value_gobj, GetAddressFromOffset(gMNVSFilesArray[0], &FILE_000_INFINITY_TEXTURE_OFFSET));
        time_stock_value_sobj->sprite.attr &= ~SP_FASTCOPY;
        time_stock_value_sobj->sprite.attr |= SP_TRANSPARENT;
        time_stock_value_sobj->pos.x = 162.0f;
        time_stock_value_sobj->pos.y = 118.0f;
        time_stock_value_sobj->sprite.red = color[0];
        time_stock_value_sobj->sprite.green = color[1];
        time_stock_value_sobj->sprite.blue = color[2];
    }
    else
    {
        if (mnVSIsTime() != FALSE)
        {
            x = (value < 10) ? 185 : 190;
        }
        else
        {
            x = (value < 10) ? 210 : 215;
        }

        mnVSCreateNumber(time_stock_value_gobj, value, (f32) x, 116.0F, &color, 2, 0);
    }
}

// 0x80132D04
void mnVSCreateTimeStockButton()
{
    GObj* time_stock_button_gobj;
    SObj* time_stock_button_sobj;

    gMNVSButtonGObjTimeStock = time_stock_button_gobj = omMakeGObjSPAfter(0, 0, 4, 0x80000000);
    omAddGObjRenderProc(time_stock_button_gobj, func_ovl0_800CCF00, 2, 0x80000000, -1);
    mnVSCreateButton(time_stock_button_gobj, 74.0F, 109.0F, 17);

    mnVSUpdateButton(time_stock_button_gobj, (gMNVSCursorIndex == nMNButtonVSTimeStock) ? nMNButtonStatusHighlighted : nMNButtonStatusDefault);

    if ((gMNVSRule == nMNRuleTime) || (gMNVSRule == nMNRuleTimeTeam))
    {
        time_stock_button_sobj = gcAppendSObjWithSprite(time_stock_button_gobj, GetAddressFromOffset(gMNVSFilesArray[1], &FILE_006_TIME_TEXTURE_OFFSET));
        time_stock_button_sobj->sprite.attr &= ~SP_FASTCOPY;
        time_stock_button_sobj->sprite.attr |= SP_TRANSPARENT;
        time_stock_button_sobj->sprite.red = 0;
        time_stock_button_sobj->sprite.green = 0;
        time_stock_button_sobj->sprite.blue = 0;
        time_stock_button_sobj->pos.x = 97.0f;
        time_stock_button_sobj->pos.y = 113.0f;

        time_stock_button_sobj = gcAppendSObjWithSprite(time_stock_button_gobj, GetAddressFromOffset(gMNVSFilesArray[1], &FILE_006_MIN_TEXTURE_OFFSET));
        time_stock_button_sobj->sprite.attr &= ~SP_FASTCOPY;
        time_stock_button_sobj->sprite.attr |= SP_TRANSPARENT;
        time_stock_button_sobj->sprite.red = 0;
        time_stock_button_sobj->sprite.green = 0;
        time_stock_button_sobj->sprite.blue = 0;
        time_stock_button_sobj->pos.x = 197.0f;
        time_stock_button_sobj->pos.y = 120.0f;
    }
    else
    {
        time_stock_button_sobj = gcAppendSObjWithSprite(time_stock_button_gobj, GetAddressFromOffset(gMNVSFilesArray[1], &FILE_006_STOCK_TEXTURE_OFFSET));
        time_stock_button_sobj->sprite.attr &= ~SP_FASTCOPY;
        time_stock_button_sobj->sprite.attr |= SP_TRANSPARENT;
        time_stock_button_sobj->sprite.red = 0;
        time_stock_button_sobj->sprite.green = 0;
        time_stock_button_sobj->sprite.blue = 0;
        time_stock_button_sobj->pos.x = 106.0f;
        time_stock_button_sobj->pos.y = 114.0f;
    }

    mnVSCreateTimeStockArrows();
}

// 0x80132EBC
void mnVSCreateVSOptionsButton()
{
    GObj* button_gobj;
    SObj* button_sobj;

    gMNVSButtonGObjVSOptions = button_gobj = omMakeGObjSPAfter(0U, NULL, 4U, 0x80000000U);
    omAddGObjRenderProc(button_gobj, func_ovl0_800CCF00, 2U, 0x80000000U, -1);
    mnVSCreateButton(button_gobj, 51.0F, 148.0F, 17);
    mnVSUpdateButton(button_gobj, (gMNVSCursorIndex == nMNButtonVSOptions) ? nMNButtonStatusHighlighted : nMNButtonStatusDefault);

    button_sobj = gcAppendSObjWithSprite(button_gobj, GetAddressFromOffset(gMNVSFilesArray[1], &FILE_006_VS_OPTIONS_TEXTURE_OFFSET));
    button_sobj->sprite.attr &= ~SP_FASTCOPY;
    button_sobj->sprite.attr |= SP_TRANSPARENT;
    button_sobj->sprite.red = 0;
    button_sobj->sprite.green = 0;
    button_sobj->sprite.blue = 0;
    button_sobj->pos.x = 71.0f;
    button_sobj->pos.y = 151.0f;
}

// 0x80132FA4 - Unused?
void mnVSSetColorsUnused(SObj* sobj)
{
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    sobj->shadow_color.r = 0;
    sobj->shadow_color.g = 0;
    sobj->shadow_color.b = 0;
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue = 0xFF;
}

// 0x80132FD8
void mnVSCreateUnusedGObj()
{
    gMNVSUnusedGObj = omMakeGObjSPAfter(0U, NULL, 5U, 0x80000000U);
}

// 0x80133008
void mnVSRenderMenuName(GObj* menu_name_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 160, 120, 20, 230);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 225, 143, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);

    func_ovl0_800CCEAC();
    func_ovl0_800CCF00(menu_name_gobj);
}

// 0x8013314C
void mnVSCreateMenuName()
{
    GObj* menu_name_gobj;
    SObj* menu_name_sobj;

    menu_name_gobj = omMakeGObjSPAfter(0U, NULL, 3U, 0x80000000U);
    omAddGObjRenderProc(menu_name_gobj, mnVSRenderMenuName, 1U, 0x80000000U, -1);

    menu_name_sobj = gcAppendSObjWithSprite(menu_name_gobj, GetAddressFromOffset(gMNVSFilesArray[0], &FILE_000_SMASH_LOGO_TEXTURE_OFFSET));
    menu_name_sobj->sprite.attr &= ~SP_FASTCOPY;
    menu_name_sobj->sprite.attr |= SP_TRANSPARENT;
    menu_name_sobj->sprite.red = 0;
    menu_name_sobj->sprite.green = 0;
    menu_name_sobj->sprite.blue = 0;
    menu_name_sobj->pos.x = 235.0f;
    menu_name_sobj->pos.y = 158.0f;

    menu_name_sobj = gcAppendSObjWithSprite(menu_name_gobj, GetAddressFromOffset(gMNVSFilesArray[1], &FILE_006_VS_TEXTURE_OFFSET));
    menu_name_sobj->sprite.attr &= ~SP_FASTCOPY;
    menu_name_sobj->sprite.attr |= SP_TRANSPARENT;
    menu_name_sobj->sprite.red = 0;
    menu_name_sobj->sprite.green = 0;
    menu_name_sobj->sprite.blue = 0;
    menu_name_sobj->pos.x = 158.0f;
    menu_name_sobj->pos.y = 192.0f;

    menu_name_sobj = gcAppendSObjWithSprite(menu_name_gobj, GetAddressFromOffset(gMNVSFilesArray[0], &FILE_000_GAME_MODE_TEXTURE_OFFSET));
    menu_name_sobj->sprite.attr &= ~SP_FASTCOPY;
    menu_name_sobj->sprite.attr |= SP_TRANSPARENT;
    menu_name_sobj->sprite.red = 0;
    menu_name_sobj->sprite.green = 0;
    menu_name_sobj->sprite.blue = 0;
    menu_name_sobj->pos.x = 189.0f;
    menu_name_sobj->pos.y = 87.0f;
}

// 0x80133298
void mnVSCreateBackground()
{
    GObj* bg_gobj;
    SObj* bg_sobj;

    bg_gobj = omMakeGObjSPAfter(0U, NULL, 2U, 0x80000000U);
    omAddGObjRenderProc(bg_gobj, func_ovl0_800CCF00, 0U, 0x80000000U, -1);

    bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(gMNVSFilesArray[0], &FILE_000_MENU_BACKGROUND_TEXTURE_OFFSET));
    bg_sobj->pos.x = 10.0f;
    bg_sobj->pos.y = 10.0f;

    bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(gMNVSFilesArray[0], &FILE_000_YELLOW_UNDERLAY_TEXTURE_OFFSET));
    bg_sobj->sprite.attr &= ~SP_FASTCOPY;
    bg_sobj->sprite.attr |= SP_TRANSPARENT;
    bg_sobj->sprite.red = 0xA0;
    bg_sobj->sprite.green = 0x78;
    bg_sobj->sprite.blue = 0x14;
    bg_sobj->pos.x = 140.0f;
    bg_sobj->pos.y = 143.0f;

    bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(gMNVSFilesArray[0], &FILE_000_YELLOW_UNDERLAY_TEXTURE_OFFSET));
    bg_sobj->sprite.attr &= ~SP_FASTCOPY;
    bg_sobj->sprite.attr |= SP_TRANSPARENT;
    bg_sobj->sprite.red = 0xA0;
    bg_sobj->sprite.green = 0x78;
    bg_sobj->sprite.blue = 0x14;
    bg_sobj->pos.x = 225.0f;
    bg_sobj->pos.y = 56.0f;

    bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(gMNVSFilesArray[1], &FILE_006_N64_CONSOLE_TEXTURE_OFFSET));
    bg_sobj->sprite.attr &= ~SP_FASTCOPY;
    bg_sobj->sprite.attr |= SP_TRANSPARENT;
    bg_sobj->sprite.red = 0x99;
    bg_sobj->sprite.green = 0x99;
    bg_sobj->sprite.blue = 0x99;
    bg_sobj->pos.x = 10.0f;
    bg_sobj->pos.y = 10.0f;
}

// 0x8013342C
void mnVSCreateButtonValuesViewport()
{
    GObj *camera_gobj = func_8000B93C(1, NULL, 1, 0x80000000U, func_ovl0_800CD2CC, 0x14, 0x00000008, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801334CC
void mnVSCreateButtonViewport()
{
    GObj *camera_gobj = func_8000B93C(1, NULL, 1, 0x80000000U, func_ovl0_800CD2CC, 0x28, 0x00000004, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013356C
void mnVSCreateMenuNameViewport()
{
    GObj *camera_gobj = func_8000B93C(1, NULL, 1, 0x80000000U, func_ovl0_800CD2CC, 0x3C, 0x00000002, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013360C
void mnVSCreateBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(1, NULL, 1, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x00000001, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801336AC
void mnVSInitVars()
{
    if (gSceneData.scene_previous == 0xA)
    {
        gMNVSCursorIndex = nMNButtonVSOptions;
    }
    else gMNVSCursorIndex = nMNButtonVSStart;

    gMNVSChangeWait = 0;

    switch (gTransferBattleState.is_team_battle)
    {
        case FALSE:
            if (gTransferBattleState.match_rules == GMMATCH_GAMERULE_TIME)
            {
                gMNVSRule = nMNRuleTime;
            }
            else gMNVSRule = nMNRuleStock;

            break;
        case TRUE:
            if (gTransferBattleState.match_rules == GMMATCH_GAMERULE_TIME)
            {
                gMNVSRule = nMNRuleTimeTeam;
            }
            else gMNVSRule = nMNRuleStockTeam;

            break;
    }

    gMNVSTime = gTransferBattleState.time_limit;
    gMNVSStock = gTransferBattleState.stock_setting;
    gMNVSTimeStockArrowsGObj = 0;
    gMNVSRuleArrowsGObj = 0;
    gMNVSInputDirection = nMNInputDirectionNone;
    gMNVSFramesElapsed = 0;
    gMNVSExitInterrupt = 0;
    gMNVSMaxFramesElapsed = gMNVSFramesElapsed + 0x4650;
    gMNVSTimeStockArrowBlinkTimer = 0;
    gMNVSRuleArrowBlinkTimer = 0;
}

// 0x801337B8
void mnVSSaveSettings()
{
    gTransferBattleState.time_limit = gMNVSTime;
    gTransferBattleState.stock_setting = gMNVSStock;

    switch (gMNVSRule)
    {
        case nMNRuleStock:
            gTransferBattleState.is_team_battle = FALSE;
            gTransferBattleState.match_rules = GMMATCH_GAMERULE_STOCK;
            break;
        case nMNRuleTime:
            gTransferBattleState.is_team_battle = FALSE;
            gTransferBattleState.match_rules = GMMATCH_GAMERULE_TIME;
            break;
        case nMNRuleStockTeam:
            gTransferBattleState.is_team_battle = TRUE;
            gTransferBattleState.match_rules = GMMATCH_GAMERULE_STOCK;
            break;
        case nMNRuleTimeTeam:
            gTransferBattleState.is_team_battle = TRUE;
            gTransferBattleState.match_rules = GMMATCH_GAMERULE_TIME;
            break;
    }
}

// 0x80133850
s32 mnVSGetShade(s32 port_id)
{
    sb32 is_same_costume[4];
    s32 i;

    if ((gMNVSRule == nMNRuleTime) || (gMNVSRule == nMNRuleStock))
    {
        return 0;
    }

    for (i = 0; i < ARRAY_COUNT(is_same_costume); i++)
    {
        is_same_costume[i] = FALSE;
    }

    for (i = 0; i < ARRAY_COUNT(is_same_costume); i++)
    {
        if ((port_id != i) && (gTransferBattleState.player_block[port_id].character_kind == gTransferBattleState.player_block[i].character_kind) && (gTransferBattleState.player_block[port_id].team_index == gTransferBattleState.player_block[i].team_index))
        {
            is_same_costume[gTransferBattleState.player_block[i].shade_index] = TRUE;
        }
    }

    for (i = 0; i < ARRAY_COUNT(is_same_costume); i++)
    {
        if (is_same_costume[i] == FALSE)
        {
            return i;
        }
    }
}

// 0x8013394C
s32 mnVSGetCostume(s32 ft_kind, s32 arg1)
{
    s32 i;
    s32 j;
    s32 unused;
    s32 unused2;
    sb32 is_same_costume[4];

    for (i = 0; i < ARRAY_COUNT(is_same_costume); i++)
    {
        is_same_costume[i] = FALSE;
    }

    for (i = 0; i < ARRAY_COUNT(is_same_costume); i++)
    {
        if (i != arg1)
        {
            if (ft_kind == gTransferBattleState.player_block[i].character_kind)
            {
                for (j = 0; j < ARRAY_COUNT(is_same_costume); j++)
                {
                    if (ftCostume_GetIndexFFA(ft_kind, j) == gTransferBattleState.player_block[i].costume_index)
                    {
                        is_same_costume[j] = TRUE;
                    }
                }
            }
        }
    }

    for (i = 0; i < ARRAY_COUNT(is_same_costume); i++)
    {
        if (is_same_costume[i] == FALSE)
        {
            return i;
        }
    }
}

// 0x80133A8C
void mnVSSetCostumesAndShades()
{
    s32 i;

    switch (gMNVSRule)
    {
        case nMNRuleTime:
        case nMNRuleStock:
            for (i = 0; i < 4; i++)
            {
                if (gTransferBattleState.player_block[i].character_kind != Ft_Kind_Null)
                {
                    gTransferBattleState.player_block[i].costume_index = ftCostume_GetIndexFFA(gTransferBattleState.player_block[i].character_kind, mnVSGetCostume(gTransferBattleState.player_block[i].character_kind, i));
                    gTransferBattleState.player_block[i].shade_index = mnVSGetShade(i);
                }
            }
            break;
        case nMNRuleTimeTeam:
        case nMNRuleStockTeam:
            for (i = 0; i < 4; i++)
            {
                if (gTransferBattleState.player_block[i].character_kind != Ft_Kind_Null)
                {
                    gTransferBattleState.player_block[i].costume_index = ftCostume_GetIndexTeam(gTransferBattleState.player_block[i].character_kind, gTransferBattleState.player_block[i].team_index);
                    gTransferBattleState.player_block[i].shade_index = mnVSGetShade(i);
                }
            }
            break;
    }
}

// 0x80133B8C
void mnVSMain(GObj* arg0)
{
    s32 unused;
    GObj** buttons[4] = gMNVSButtons;
    s32 stick_range;
    s32 is_button;

    gMNVSFramesElapsed++;

    if (gMNVSFramesElapsed >= 10)
    {
        if (gMNVSFramesElapsed == gMNVSMaxFramesElapsed)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 1;

            mnVSSaveSettings();
            func_80005C74();

            return;
        }

        if (func_ovl1_80390B7C() == 0)
        {
            gMNVSMaxFramesElapsed = gMNVSFramesElapsed + 0x4650;
        }

        if (gMNVSExitInterrupt != 0)
        {
            func_80005C74();
        }

        if (gMNVSChangeWait != 0)
        {
            gMNVSChangeWait--;
        }

        if (
            (func_ovl1_80390A04(-20, 20) != 0) &&
            (func_ovl1_80390AC0(-20, 20) != 0) &&
            (func_ovl1_80390804(U_JPAD | R_JPAD | R_TRIG | U_CBUTTONS | R_CBUTTONS) == FALSE) &&
            (func_ovl1_80390804(D_JPAD | L_JPAD | L_TRIG | D_CBUTTONS | L_CBUTTONS) == FALSE))
        {
            gMNVSChangeWait = 0;
            gMNVSInputDirection = nMNInputDirectionNone;
        }

        if (func_ovl1_8039076C(A_BUTTON | START_BUTTON) != FALSE)
        {
            switch (gMNVSCursorIndex)
            {
                case nMNButtonVSStart:
                    func_800269C0(0x9EU);
                    mnVSUpdateButton(gMNVSButtonGObjVSStart, nMNButtonStatusSelected);
                    mnVSSaveSettings();

                    gMNVSExitInterrupt = 1;

                    gSceneData.scene_previous = gSceneData.scene_current;
                    gSceneData.scene_current = 0x10;

                    return;
                case nMNButtonVSOptions:
                    func_800269C0(0x9EU);
                    mnVSUpdateButton(gMNVSButtonGObjVSOptions, nMNButtonStatusSelected);
                    mnVSSaveSettings();

                    gMNVSExitInterrupt = 1;

                    gSceneData.scene_previous = gSceneData.scene_current;
                    gSceneData.scene_current = 0xA;

                    return;
            }
        }

        if (func_ovl1_8039076C(B_BUTTON) != FALSE)
        {
            mnVSSaveSettings();

            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = 7;

            func_80005C74();
        }

        if (
            mnCommonCheckGetOptionButtonInput(gMNVSChangeWait, is_button, U_JPAD | U_CBUTTONS) ||
            mnCommonCheckGetOptionStickInputUD(gMNVSChangeWait, stick_range, 20, 1)
        )
        {
            func_800269C0(0xA4U);

            mnCommonSetOptionChangeWaitP(gMNVSChangeWait, is_button, stick_range, 7);

            if (gMNVSCursorIndex == nMNButtonVSRule)
            {
                gMNVSChangeWait += 8;
            }

            mnVSUpdateButton(*buttons[gMNVSCursorIndex], nMNButtonStatusDefault);

            if (gMNVSCursorIndex == nMNButtonVSStart)
            {
                gMNVSCursorIndex = nMNButtonVSOptions;
            }
            else gMNVSCursorIndex -= 1;

            mnVSUpdateButton(*buttons[gMNVSCursorIndex], nMNButtonStatusHighlighted);
            omEjectGObj(gMNVSUnusedGObj);
            mnVSCreateUnusedGObj();

            gMNVSInputDirection = nMNInputDirectionUp;

            if (gMNVSCursorIndex == nMNButtonVSRule)
            {
                gMNVSRuleArrowsGObj->flags = 0;
                gMNVSRuleArrowBlinkTimer = 30;
            }

            if (gMNVSCursorIndex == nMNButtonVSTimeStock)
            {
                gMNVSTimeStockArrowsGObj->flags = 0;
                gMNVSTimeStockArrowBlinkTimer = 30;
            }
        }

        if (
            mnCommonCheckGetOptionButtonInput(gMNVSChangeWait, is_button, D_JPAD | D_CBUTTONS) ||
            mnCommonCheckGetOptionStickInputUD(gMNVSChangeWait, stick_range, -20, 0)
        )
        {
            func_800269C0(0xA4U);

            mnCommonSetOptionChangeWaitN(gMNVSChangeWait, is_button, stick_range, 7);

            if (gMNVSCursorIndex == nMNButtonVSTimeStock)
            {
                gMNVSChangeWait += 8;
            }

            mnVSUpdateButton(*buttons[gMNVSCursorIndex], nMNButtonStatusDefault);

            if (gMNVSCursorIndex == nMNButtonVSOptions)
            {
                gMNVSCursorIndex = nMNButtonVSStart;
            }
            else gMNVSCursorIndex++;

            mnVSUpdateButton(*buttons[gMNVSCursorIndex], nMNButtonStatusHighlighted);
            omEjectGObj(gMNVSUnusedGObj);
            mnVSCreateUnusedGObj();

            gMNVSInputDirection = nMNInputDirectionDown;

            if (gMNVSCursorIndex == 1)
            {
                gMNVSRuleArrowsGObj->flags = 0;
                gMNVSRuleArrowBlinkTimer = 30;
            }

            if (gMNVSCursorIndex == 2)
            {
                gMNVSTimeStockArrowsGObj->flags = 0;
                gMNVSTimeStockArrowBlinkTimer = 30;
            }
        }

        switch (gMNVSCursorIndex)
        {
            case nMNButtonVSRule:
                if (
                    mnCommonCheckGetOptionButtonInput(gMNVSChangeWait, is_button, L_JPAD | L_TRIG | L_CBUTTONS) ||
                    mnCommonCheckGetOptionStickInputLR(gMNVSChangeWait, stick_range, -20, 0)
                )
                {
                    if (gMNVSRule > nMNRuleTime)
                    {
                        func_800269C0(0xA3U);

                        gMNVSRule--;

                        if (gMNVSRule == nMNRuleStock)
                        {
                            mnVSSetCostumesAndShades();
                        }

                        omEjectGObj(gMNVSButtonGObjTimeStock);
                        mnVSCreateTimeStockButton();
                        omEjectGObj(gMNVSRuleValueGObj);
                        mnVSCreateRuleValue();
                        omEjectGObj(gMNVSTimeStockValueGObj);
                        mnVSCreateTimeStockValue();

                        mnCommonSetOptionChangeWaitN(gMNVSChangeWait, is_button, stick_range, 7);

                        omEjectGObj(gMNVSUnusedGObj);
                        mnVSCreateUnusedGObj();

                        gMNVSInputDirection = nMNInputDirectionLeft;
                    }
                }

                if (
                    mnCommonCheckGetOptionButtonInput(gMNVSChangeWait, is_button, R_JPAD | R_TRIG | R_CBUTTONS) ||
                    mnCommonCheckGetOptionStickInputLR(gMNVSChangeWait, stick_range, 20, 1)
                )
                {
                    if (gMNVSRule < nMNRuleStockTeam)
                    {
                        func_800269C0(0xA3U);

                        gMNVSRule++;

                        if (gMNVSRule == nMNRuleTimeTeam)
                        {
                            mnVSSetCostumesAndShades();
                        }

                        omEjectGObj(gMNVSButtonGObjTimeStock);
                        mnVSCreateTimeStockButton();
                        omEjectGObj(gMNVSRuleValueGObj);
                        mnVSCreateRuleValue();
                        omEjectGObj(gMNVSTimeStockValueGObj);
                        mnVSCreateTimeStockValue();

                        mnCommonSetOptionChangeWaitP(gMNVSChangeWait, is_button, stick_range, 7);

                        omEjectGObj(gMNVSUnusedGObj);
                        mnVSCreateUnusedGObj();

                        gMNVSInputDirection = nMNInputDirectionRight;

                        return;
                    }
                }
                break;
            case nMNButtonVSTimeStock:
                if (
                    mnCommonCheckGetOptionButtonInput(gMNVSChangeWait, is_button, L_JPAD | L_TRIG | L_CBUTTONS) ||
                    mnCommonCheckGetOptionStickInputLR(gMNVSChangeWait, stick_range, -20, 0)
                )
                {
                    func_800269C0(0xA3U);

                    mnCommonSetOptionChangeWaitN(gMNVSChangeWait, is_button, stick_range, 14);

                    if (gMNVSInputDirection != nMNInputDirectionLeft)
                    {
                        gMNVSChangeWait *= 2;
                    }

                    if (mnVSIsTime() != FALSE)
                    {
                        if (gMNVSTime == 1)
                        {
                            gMNVSTime = 100;
                        }
                        else gMNVSTime--;

                        if (gMNVSTime == 1)
                        {
                            gMNVSChangeWait += 8;
                        }
                    }
                    else
                    {
                        if (gMNVSStock == 0)
                        {
                            gMNVSStock = 98;
                        }
                        else gMNVSStock--;

                        if (gMNVSStock == 0)
                        {
                            gMNVSChangeWait += 8;
                        }
                    }

                    omEjectGObj(gMNVSTimeStockValueGObj);
                    mnVSCreateTimeStockValue();

                    gMNVSInputDirection = nMNInputDirectionLeft;
                }

                if (
                    mnCommonCheckGetOptionButtonInput(gMNVSChangeWait, is_button, R_JPAD | R_TRIG | R_CBUTTONS) ||
                    mnCommonCheckGetOptionStickInputLR(gMNVSChangeWait, stick_range, 20, 1)
                )
                {
                    func_800269C0(0xA3U);

                    mnCommonSetOptionChangeWaitP(gMNVSChangeWait, is_button, stick_range, 14);

                    if (gMNVSInputDirection != nMNInputDirectionRight)
                    {
                        gMNVSChangeWait *= 2;
                    }

                    if (mnVSIsTime() != FALSE)
                    {
                        if (gMNVSTime == 100)
                        {
                            gMNVSTime = 1;
                        }
                        else gMNVSTime += 1;

                        if (gMNVSTime == 100)
                        {
                            gMNVSChangeWait += 8;
                        }
                    }
                    else
                    {
                        if (gMNVSStock == 98)
                        {
                            gMNVSStock = 0;
                        }
                        else gMNVSStock++;

                        if (gMNVSStock == 98)
                        {
                            gMNVSChangeWait += 8;
                        }
                    }

                    omEjectGObj(gMNVSTimeStockValueGObj);
                    mnVSCreateTimeStockValue();

                    gMNVSInputDirection = nMNInputDirectionRight;
                }
                break;
        }
    }
}

// 0x801345C4
void mnVSInit()
{
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl19_80134988;
    rldmSetup.statusBufSize = 0x18;
    rldmSetup.forceBuf = 0;
    rldmSetup.forceBufSize = 0;
    rdManagerInitSetup(&rldmSetup);
    if (!(gSaveData.mprotect_fail & 1) && ((s32) gSaveData.unk5E3 >= 0x16) && (gSPImemOkay == 0))
    {
        gSaveData.mprotect_fail |= 1;
    }
    rdManagerLoadFiles(D_ovl19_801347B0, ARRAY_COUNT(D_ovl19_801347B0), gMNVSFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl19_801347B0, ARRAY_COUNT(D_ovl19_801347B0)), 0x10));

    omMakeGObjSPAfter(0U, mnVSMain, 0U, 0x80000000U);
    func_8000B9FC(0, 0x80000000U, 0x64, 0, 0);
    mnVSInitVars();
    mnVSCreateBackgroundViewport();
    mnVSCreateMenuNameViewport();
    mnVSCreateButtonViewport();
    mnVSCreateButtonValuesViewport();
    mnVSCreateBackground();
    mnVSCreateMenuName();
    mnVSCreateVSStartButton();
    mnVSCreateRuleButton();
    mnVSCreateRuleValue();
    mnVSCreateTimeStockButton();
    mnVSCreateTimeStockValue();
    mnVSCreateVSOptionsButton();
    mnVSCreateUnusedGObj();

    if (gSceneData.scene_previous == 0x10)
    {
        func_80020AB4(0, 0x2C);
    }
}

// 0x80134758
void mnVSStartScene()
{
    D_ovl19_80134880.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl19_80134880);
    D_ovl19_8013489C.arena_size = (u32) ((uintptr_t)&lOverlay19ArenaHi - (uintptr_t)&lOverlay19ArenaLo);
    gsGTLSceneInit(&D_ovl19_8013489C);
}
