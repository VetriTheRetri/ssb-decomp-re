#include <mn/menu.h>
#include <gm/gmsound.h>
#include <sc/scene.h>
#include <lb/library.h>
#include <sys/system_00.h>
#include <sys/thread6.h>

extern void* func_800269C0_275C0(u16);
extern void func_80007080(void*, f32, f32, f32, f32);



// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern uintptr_t D_NF_00000000;
extern uintptr_t D_NF_00000006;
extern u8 gSYMainIsSPImemOK;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80134930
GObj* sMNVSModeButtonGObjVSStart;

// 0x80134934
GObj* sMNVSModeButtonGObjRule;

// 0x80134938
GObj* sMNVSModeButtonGObjTimeStock;

// 0x8013493C
GObj* sMNVSModeButtonGObjVSOptions;

// 0x80134940 - Padding?
s32 sMNVSModePad0x80134940[2];

// 0x80134948
s32 sMNVSModeCursorIndex;

// 0x8013494C
s32 sMNVSModeRule;

// 0x80134950
s32 sMNVSModeTime;

// 0x80134954
s32 sMNVSModeStock;

// 0x80134958
GObj* sMNVSModeRuleValueGObj;

// 0x8013495C
GObj* sMNVSModeTimeStockValueGObj;

// 0x80134960
GObj* sMNVSModeUnusedGObj;

// 0x80134964
GObj* sMNVSModeRuleArrowsGObj;

// 0x80134968
GObj* sMNVSModeTimeStockArrowsGObj;

// 0x8013496C
s32 sMNVSModeTimeStockArrowBlinkTimer;

// 0x80134970
s32 sMNVSModeRuleArrowBlinkTimer;

// 0x80134974
s32 sMNVSModeExitInterrupt;

// 0x80134978
s32 sMNVSModeInputDirection;

// 0x8013497C
s32 sMNVSModeChangeWait;

// 0x80134980
s32 sMNVSModeFramesElapsed;

// 0x80134984
s32 sMNVSModeMaxFramesElapsed;

// 0x80134988
lbFileNode sMNVSModeStatusBuf[24];

// 0x80134A48
void *sMNVSModeFiles[2];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x801347B0
u32 dMNVSModeFileIDs[/* */] = { &D_NF_00000000, &D_NF_00000006 };

// 0x801347B8
Lights1 dMNVSModeLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x801347D0
Gfx dMNVSModeDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMNVSModeLights1),
    gsSPEndDisplayList()
};

// 0x80131B00
void mnVSModeProcLights(Gfx **display_list)
{
    gSPDisplayList(display_list[0]++, dMNVSModeDisplayList);
}

// 0x80131B24
s32 mnVSModePow(s32 num, s32 pow)
{
    if (pow == 0) 
    {
        return 1;
    }
    else
    {
        s32 result = num, i = pow;

        if (pow >= 2)
        {
            do
            {
                result *= num;
            }
            while (--i != 1);
        }
        return result;
    }
}

// 0x80131BC4
void mnVSModeSetTextureColors(SObj* sobj, u32 *colors)
{
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    sobj->sprite.red = colors[0];
    sobj->sprite.green = colors[1];
    sobj->sprite.blue = colors[2];
}

// 0x80131BF4
s32 mnVSModeGetNumberOfDigits(s32 num, s32 maxDigits)
{
    s32 numDigits;

    for (numDigits = maxDigits; numDigits > 0; numDigits--)
    {
        if (mnVSModePow(10, numDigits - 1) != 0 ? num / mnVSModePow(10, numDigits - 1) : 0 != 0) return numDigits;
    }

    return 0;
}

// 0x80131CA0
void mnVSModeMakeNumber(GObj* number_gobj, s32 num, f32 x, f32 y, u32 *colors, s32 maxDigits, sb32 pad)
{
    // 0x801347F8
    intptr_t number_offsets[/* */] =
    {
        &lMNCommonDigit0Sprite,
        &lMNCommonDigit1Sprite,
        &lMNCommonDigit2Sprite,
        &lMNCommonDigit3Sprite,
        &lMNCommonDigit4Sprite,
        &lMNCommonDigit5Sprite,
        &lMNCommonDigit6Sprite,
        &lMNCommonDigit7Sprite,
        &lMNCommonDigit8Sprite,
        &lMNCommonDigit9Sprite
    };

    // 0x80134820
    Vec2f floats[/* */] =
    {
        { 10.0F,  6.0F }, 
        {  9.0F,  9.0F },
        { 10.0F,  9.0F }, 
        {  9.0F, 10.0F },
        {  9.0F, 10.0F }
    };

    SObj* number_sobj;
    f32 left_x = x;
    s32 place;
    s32 numDigits;
    s32 digit;

    if (num < 0) num = 0;

    number_sobj = lbCommonMakeSObjForGObj(number_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[0], number_offsets[num % 10]));
    mnVSModeSetTextureColors(number_sobj, colors);
    left_x -= 11.0F;
    number_sobj->pos.x = left_x;
    number_sobj->pos.y = y;

    for
    (
        place = 1, numDigits = (pad != FALSE) ? maxDigits : mnVSModeGetNumberOfDigits(num, maxDigits);
        place < numDigits;
        place++, numDigits = (pad != FALSE) ? maxDigits : mnVSModeGetNumberOfDigits(num, maxDigits)
    )
    {
        digit = (mnVSModePow(10, place) != 0) ? num / mnVSModePow(10, place) : 0;

        number_sobj = lbCommonMakeSObjForGObj(number_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[0], number_offsets[digit % 10]));
        mnVSModeSetTextureColors(number_sobj, colors);
        left_x -= 11.0F;
        number_sobj->pos.x = left_x;
        number_sobj->pos.y = y;
    }
}

// 0x80131F4C
void mnVSModeUpdateButton(GObj* button_gobj, s32 button_status)
{
    // 0x80134848
    syColorRGBPair selcolors = { { 0x00, 0x00, 0x00 }, { 0xFF, 0xFF, 0xFF } };

    // 0x80134850
    syColorRGBPair hicolors = { { 0x82, 0x00, 0x28 }, { 0xFF, 0x00, 0x28 } };

    // 0x80134858
    syColorRGBPair notcolors = { { 0x00, 0x00, 0x00 }, { 0x82, 0x82, 0xAA } };

    syColorRGBPair *colors;
    s32 i;
    SObj* button_sobj;

    switch (button_status)
    {
        case nMNOptionTabStatusHighlight:
            colors = &hicolors;
            break;
        case nMNOptionTabStatusNot:
            colors = &notcolors;
            break;
        case nMNOptionTabStatusSelected:
            colors = &selcolors;
            break;
    }

    button_sobj = SObjGetStruct(button_gobj);

    for (i = 0; i < nMNOptionTabStatusEnumMax; i++)
    {
        button_sobj->env_color.r = colors->prim.r;
        button_sobj->env_color.g = colors->prim.g;
        button_sobj->env_color.b = colors->prim.b;
        button_sobj->sprite.red = colors->env.r;
        button_sobj->sprite.green = colors->env.g;
        button_sobj->sprite.blue = colors->env.b;

        button_sobj = button_sobj->next;
    }
}

// 0x80132024
void mnVSModeMakeButton(GObj* button_gobj, f32 x, f32 y, s32 arg3)
{
    SObj* button_sobj;

    button_sobj = lbCommonMakeSObjForGObj(button_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[0], &lMNCommonOptionTabLeftSprite));
    button_sobj->sprite.attr &= ~SP_FASTCOPY;
    button_sobj->sprite.attr |= SP_TRANSPARENT;
    button_sobj->pos.x = x;
    button_sobj->pos.y = y;

    button_sobj = lbCommonMakeSObjForGObj(button_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[0], &lMNCommonOptionTabMiddleSprite));
    button_sobj->sprite.attr &= ~SP_FASTCOPY;
    button_sobj->sprite.attr |= SP_TRANSPARENT;
    button_sobj->pos.x = x + 16.0F;
    button_sobj->pos.y = y;
    button_sobj->cms = 0;
    button_sobj->cmt = 0;
    button_sobj->masks = 4;
    button_sobj->maskt = 0;
    button_sobj->lrs = arg3 * 8;
    button_sobj->lrt = 0x1D;

    button_sobj = lbCommonMakeSObjForGObj(button_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[0], &lMNCommonOptionTabRightSprite));
    button_sobj->sprite.attr &= ~SP_FASTCOPY;
    button_sobj->sprite.attr |= SP_TRANSPARENT;
    button_sobj->pos.x = x + 16.0F + (arg3 * 8);
    button_sobj->pos.y = y;
}

// 0x80132154
void mnVSModeMakeVSStartButton()
{
    GObj* button_gobj;
    SObj* button_sobj;

    sMNVSModeButtonGObjVSStart = button_gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(button_gobj, lbCommonDrawSObjAttr, 2, GOBJ_LINKORDER_DEFAULT, -1);
    mnVSModeMakeButton(button_gobj, 120.0F, 31.0F, 17);

    mnVSModeUpdateButton(button_gobj, (sMNVSModeCursorIndex == 0) ? nMNOptionTabStatusHighlight : nMNOptionTabStatusNot);

    button_sobj = lbCommonMakeSObjForGObj(button_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[1], &lMNVSModeVSStartSprite));
    button_sobj->sprite.attr &= ~SP_FASTCOPY;
    button_sobj->sprite.attr |= SP_TRANSPARENT;
    button_sobj->sprite.red = 0x00;
    button_sobj->sprite.green = 0x00;
    button_sobj->sprite.blue = 0x00;
    button_sobj->pos.x = 153.0F;
    button_sobj->pos.y = 36.0F;
}

// 0x80132238
void mnVSModeMakeRuleValue()
{
    GObj* rule_value_gobj;
    SObj* rule_value_sobj;

    // 0x80134860
    syColorRGB color = { 0xFF, 0xFF, 0xFF };

    sMNVSModeRuleValueGObj = rule_value_gobj = gcMakeGObjSPAfter(0, NULL, 5, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(rule_value_gobj, lbCommonDrawSObjAttr, 3, GOBJ_LINKORDER_DEFAULT, -1);

    switch (sMNVSModeRule)
    {
        case nMNVSModeRuleStock:
            rule_value_sobj = lbCommonMakeSObjForGObj(rule_value_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[1], &lMNVSModeSmallStockSprite));
            rule_value_sobj->sprite.attr &= ~SP_FASTCOPY;
            rule_value_sobj->sprite.attr |= SP_TRANSPARENT;
            rule_value_sobj->pos.x = 183.0F;
            rule_value_sobj->pos.y = 78.0F;
            rule_value_sobj->sprite.red = color.r;
            rule_value_sobj->sprite.green = color.g;
            rule_value_sobj->sprite.blue = color.b;
            return;
        case nMNVSModeRuleTime:
            rule_value_sobj = lbCommonMakeSObjForGObj(rule_value_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[1], &lMNVSModeSmallTimeSprite));
            rule_value_sobj->sprite.attr &= ~SP_FASTCOPY;
            rule_value_sobj->sprite.attr |= SP_TRANSPARENT;
            rule_value_sobj->pos.x = 187.0F;
            rule_value_sobj->pos.y = 78.0F;
            rule_value_sobj->sprite.red = color.r;
            rule_value_sobj->sprite.green = color.g;
            rule_value_sobj->sprite.blue = color.b;
            return;
        case nMNVSModeRuleStockTeam:
            rule_value_sobj = lbCommonMakeSObjForGObj(rule_value_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[1], &lMNVSModeSmallStockSprite));
            rule_value_sobj->sprite.attr &= ~SP_FASTCOPY;
            rule_value_sobj->sprite.attr |= SP_TRANSPARENT;
            rule_value_sobj->pos.x = 165.0F;
            rule_value_sobj->pos.y = 78.0F;
            rule_value_sobj->sprite.red = color.r;
            rule_value_sobj->sprite.green = color.g;
            rule_value_sobj->sprite.blue = color.b;

            rule_value_sobj = lbCommonMakeSObjForGObj(rule_value_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[1], &lMNVSModeTeamSprite));
            rule_value_sobj->sprite.attr &= ~SP_FASTCOPY;
            rule_value_sobj->sprite.attr |= SP_TRANSPARENT;
            rule_value_sobj->pos.x = 212.0F;
            rule_value_sobj->pos.y = 78.0F;
            rule_value_sobj->sprite.red = color.r;
            rule_value_sobj->sprite.green = color.g;
            rule_value_sobj->sprite.blue = color.b;
            return;
        case nMNVSModeRuleTimeTeam:
            rule_value_sobj = lbCommonMakeSObjForGObj(rule_value_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[1], &lMNVSModeSmallTimeSprite));
            rule_value_sobj->sprite.attr &= ~SP_FASTCOPY;
            rule_value_sobj->sprite.attr |= SP_TRANSPARENT;
            rule_value_sobj->pos.x = 168.0F;
            rule_value_sobj->pos.y = 78.0F;
            rule_value_sobj->sprite.red = color.r;
            rule_value_sobj->sprite.green = color.g;
            rule_value_sobj->sprite.blue = color.b;

            rule_value_sobj = lbCommonMakeSObjForGObj(rule_value_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[1], &lMNVSModeTeamSprite));
            rule_value_sobj->sprite.attr &= ~SP_FASTCOPY;
            rule_value_sobj->sprite.attr |= SP_TRANSPARENT;
            rule_value_sobj->pos.x = 212.0F;
            rule_value_sobj->pos.y = 78.0F;
            rule_value_sobj->sprite.red = color.r;
            rule_value_sobj->sprite.green = color.g;
            rule_value_sobj->sprite.blue = color.b;
            return;
    }
}

// 0x80132524
SObj* mnVSModeGetArrowSObj(GObj* arrow_gobj, s32 direction)
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
void mnVSModeMakeLeftArrow(GObj* arrow_gobj, f32 x, f32 y)
{
    SObj* arrow_sobj;

    arrow_sobj = lbCommonMakeSObjForGObj(arrow_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[0], &lMNCommonLeftArrowSprite));
    arrow_sobj->user_data.s = 0;
    arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
    arrow_sobj->sprite.attr |= SP_TRANSPARENT;
    arrow_sobj->pos.x = x;
    arrow_sobj->pos.y = y;
    arrow_sobj->sprite.red = 0xFF;
    arrow_sobj->sprite.green = 0xAE;
    arrow_sobj->sprite.blue = 0x00;
}

// 0x801325E4
void mnVSModeMakeRightArrow(GObj* arrow_gobj, f32 x, f32 y)
{
    SObj* arrow_sobj;

    arrow_sobj = lbCommonMakeSObjForGObj(arrow_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[0], &lMNCommonRightArrowSprite));
    arrow_sobj->user_data.s = 1;
    arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
    arrow_sobj->sprite.attr |= SP_TRANSPARENT;
    arrow_sobj->pos.x = x;
    arrow_sobj->pos.y = y;
    arrow_sobj->sprite.red = 0xFF;
    arrow_sobj->sprite.green = 0xAE;
    arrow_sobj->sprite.blue = 0x00;
}

// 0x8013265C
void mnVSModeAnimateRuleArrows(GObj* rule_arrows_gobj)
{
    SObj* arrow_sobj;

    while (TRUE)
    {
        if (sMNVSModeCursorIndex == 1)
        {
            sMNVSModeRuleArrowBlinkTimer--;

            if (sMNVSModeRuleArrowBlinkTimer == 0)
            {
                if (rule_arrows_gobj->flags == GOBJ_FLAG_NORENDER)
                {
                    rule_arrows_gobj->flags = GOBJ_FLAG_NONE;
                }
                else rule_arrows_gobj->flags = GOBJ_FLAG_NORENDER;

                sMNVSModeRuleArrowBlinkTimer = 30;
            }

            if (sMNVSModeRule == nMNVSModeRuleTime)
            {
                arrow_sobj = mnVSModeGetArrowSObj(rule_arrows_gobj, 0);

                if (arrow_sobj != NULL)
                {
                    gcEjectSObj(arrow_sobj);
                }
            }
            else if (mnVSModeGetArrowSObj(rule_arrows_gobj, 0) == NULL)
            {
                mnVSModeMakeLeftArrow(rule_arrows_gobj, 165.0F, 70.0F);
            }

            if (sMNVSModeRule == nMNVSModeRuleStockTeam)
            {
                arrow_sobj = mnVSModeGetArrowSObj(rule_arrows_gobj, 1);

                if (arrow_sobj != NULL)
                {
                    gcEjectSObj(arrow_sobj);
                }
            }
            else if (mnVSModeGetArrowSObj(rule_arrows_gobj, 1) == NULL)
            {
                mnVSModeMakeRightArrow(rule_arrows_gobj, 250.0F, 70.0F);
            }
        }
        else rule_arrows_gobj->flags = GOBJ_FLAG_NORENDER;

        gcStopCurrentGObjThread(1);
    }
}

// 0X80132818
void mnVSModeMakeRuleArrows()
{
    GObj* rule_arrows_gobj;

    if (sMNVSModeRuleArrowsGObj != NULL)
    {
        gcEjectGObj(sMNVSModeRuleArrowsGObj);

        sMNVSModeRuleArrowsGObj = NULL;
    }
    sMNVSModeRuleArrowsGObj = rule_arrows_gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(rule_arrows_gobj, lbCommonDrawSObjAttr, 2, GOBJ_LINKORDER_DEFAULT, -1);
    gcAddGObjProcess(rule_arrows_gobj, mnVSModeAnimateRuleArrows, 0, 1);
}

// 0x801328A8
void mnVSModeAnimateTimeStockArrows(GObj* time_stock_arrows_gobj)
{
    while (TRUE)
    {
        if (sMNVSModeCursorIndex == 2)
        {
            sMNVSModeTimeStockArrowBlinkTimer--;

            if (sMNVSModeTimeStockArrowBlinkTimer == 0)
            {
                if (time_stock_arrows_gobj->flags == GOBJ_FLAG_NORENDER)
                {
                    time_stock_arrows_gobj->flags = GOBJ_FLAG_NONE;
                }
                else time_stock_arrows_gobj->flags = GOBJ_FLAG_NORENDER;

                sMNVSModeTimeStockArrowBlinkTimer = 30;
            }
        }
        else time_stock_arrows_gobj->flags = GOBJ_FLAG_NORENDER;

        gcStopCurrentGObjThread(1);
    }
}

// 0x80132964
void mnVSModeMakeTimeStockArrows()
{
    GObj* time_stock_arrows_gobj;

    if (sMNVSModeTimeStockArrowsGObj != NULL)
    {
        gcEjectGObj(sMNVSModeTimeStockArrowsGObj);

        sMNVSModeTimeStockArrowsGObj = NULL;
    }

    sMNVSModeTimeStockArrowsGObj = time_stock_arrows_gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(time_stock_arrows_gobj, lbCommonDrawSObjAttr, 2, GOBJ_LINKORDER_DEFAULT, -1);
    gcAddGObjProcess(time_stock_arrows_gobj, mnVSModeAnimateTimeStockArrows, nOMObjProcessKindThread, 1);

    if (mnVSModeIsTime() != FALSE)
    {
        mnVSModeMakeLeftArrow(time_stock_arrows_gobj, 155.0F, 109.0F);
        mnVSModeMakeRightArrow(time_stock_arrows_gobj, 230.0F, 109.0F);
    }
    else
    {
        mnVSModeMakeLeftArrow(time_stock_arrows_gobj, 165.0F, 109.0F);
        mnVSModeMakeRightArrow(time_stock_arrows_gobj, 230.0F, 109.0F);
    }
}

// 0x80132A4C
void mnVSModeMakeRuleButton()
{
    GObj* rule_button_gobj;
    SObj* button_sobj;

    sMNVSModeButtonGObjRule = rule_button_gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(rule_button_gobj, lbCommonDrawSObjAttr, 2, GOBJ_LINKORDER_DEFAULT, -1);
    mnVSModeMakeButton(rule_button_gobj, 97.0F, 70.0F, 17);

    mnVSModeUpdateButton(rule_button_gobj, (sMNVSModeCursorIndex == nMNVSModeOptionRule) ? nMNOptionTabStatusHighlight : nMNOptionTabStatusNot);

    button_sobj = lbCommonMakeSObjForGObj(rule_button_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[1], &lMNVSModeRuleSprite));
    button_sobj->sprite.attr &= ~SP_FASTCOPY;
    button_sobj->sprite.attr |= SP_TRANSPARENT;
    button_sobj->sprite.red = 0x00;
    button_sobj->sprite.green = 0x00;
    button_sobj->sprite.blue = 0x00;
    button_sobj->pos.x = 108.0F;
    button_sobj->pos.y = 75.0F;

    mnVSModeMakeRuleArrows();
}

// 0x80132B38
sb32 mnVSModeIsTime()
{
    if ((sMNVSModeRule == nMNVSModeRuleTime) || (sMNVSModeRule == nMNVSModeRuleTimeTeam))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80132B68
s32 mnVSModeGetTimeStockValue()
{
    if (mnVSModeIsTime() != FALSE)
    {
        return sMNVSModeTime;
    }
    else return sMNVSModeStock + 1;
}

// 0x80132BA0
void mnVSModeMakeTimeStockValue()
{
    GObj* time_stock_value_gobj;
    SObj* time_stock_value_sobj;
    s32 value;
    s32 x;
    s32 unused;

    // 0x80134864
    u32 colors[/* */] = { 0x000000FF, 0x000000FF, 0x000000FF };

    sMNVSModeTimeStockValueGObj = time_stock_value_gobj = gcMakeGObjSPAfter(0, NULL, 5, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(time_stock_value_gobj, lbCommonDrawSObjAttr, 3, GOBJ_LINKORDER_DEFAULT, -1);

    value = mnVSModeGetTimeStockValue();

    if (value == SCBATTLE_TIMELIMIT_INFINITE)
    {
        time_stock_value_sobj = lbCommonMakeSObjForGObj(time_stock_value_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[0], &lMNCommonInfinitySprite));
        time_stock_value_sobj->sprite.attr &= ~SP_FASTCOPY;
        time_stock_value_sobj->sprite.attr |= SP_TRANSPARENT;
        time_stock_value_sobj->pos.x = 162.0F;
        time_stock_value_sobj->pos.y = 118.0F;
        time_stock_value_sobj->sprite.red = colors[0];
        time_stock_value_sobj->sprite.green = colors[1];
        time_stock_value_sobj->sprite.blue = colors[2];
    }
    else
    {
        if (mnVSModeIsTime() != FALSE)
        {
            x = (value < 10) ? 185 : 190;
        }
        else
        {
            x = (value < 10) ? 210 : 215;
        }
        mnVSModeMakeNumber(time_stock_value_gobj, value, (f32)x, 116.0F, colors, 2, 0);
    }
}

// 0x80132D04
void mnVSModeMakeTimeStockButton()
{
    GObj* time_stock_button_gobj;
    SObj* time_stock_button_sobj;

    sMNVSModeButtonGObjTimeStock = time_stock_button_gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(time_stock_button_gobj, lbCommonDrawSObjAttr, 2, GOBJ_LINKORDER_DEFAULT, -1);
    mnVSModeMakeButton(time_stock_button_gobj, 74.0F, 109.0F, 17);

    mnVSModeUpdateButton(time_stock_button_gobj, (sMNVSModeCursorIndex == nMNVSModeOptionTimeStock) ? nMNOptionTabStatusHighlight : nMNOptionTabStatusNot);

    if ((sMNVSModeRule == nMNVSModeRuleTime) || (sMNVSModeRule == nMNVSModeRuleTimeTeam))
    {
        time_stock_button_sobj = lbCommonMakeSObjForGObj(time_stock_button_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[1], &lMNVSModeTimeSprite));
        time_stock_button_sobj->sprite.attr &= ~SP_FASTCOPY;
        time_stock_button_sobj->sprite.attr |= SP_TRANSPARENT;
        time_stock_button_sobj->sprite.red = 0x00;
        time_stock_button_sobj->sprite.green = 0x00;
        time_stock_button_sobj->sprite.blue = 0x00;
        time_stock_button_sobj->pos.x = 97.0F;
        time_stock_button_sobj->pos.y = 113.0F;

        time_stock_button_sobj = lbCommonMakeSObjForGObj(time_stock_button_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[1], &lMNVSModeMinSprite));
        time_stock_button_sobj->sprite.attr &= ~SP_FASTCOPY;
        time_stock_button_sobj->sprite.attr |= SP_TRANSPARENT;
        time_stock_button_sobj->sprite.red = 0x00;
        time_stock_button_sobj->sprite.green = 0x00;
        time_stock_button_sobj->sprite.blue = 0x00;
        time_stock_button_sobj->pos.x = 197.0F;
        time_stock_button_sobj->pos.y = 120.0F;
    }
    else
    {
        time_stock_button_sobj = lbCommonMakeSObjForGObj(time_stock_button_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[1], &lMNVSModeStockSprite));
        time_stock_button_sobj->sprite.attr &= ~SP_FASTCOPY;
        time_stock_button_sobj->sprite.attr |= SP_TRANSPARENT;
        time_stock_button_sobj->sprite.red = 0x00;
        time_stock_button_sobj->sprite.green = 0x00;
        time_stock_button_sobj->sprite.blue = 0x00;
        time_stock_button_sobj->pos.x = 106.0F;
        time_stock_button_sobj->pos.y = 114.0F;
    }

    mnVSModeMakeTimeStockArrows();
}

// 0x80132EBC
void mnVSModeMakeVSOptionsButton(void)
{
    GObj* button_gobj;
    SObj* button_sobj;

    sMNVSModeButtonGObjVSOptions = button_gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(button_gobj, lbCommonDrawSObjAttr, 2, GOBJ_LINKORDER_DEFAULT, -1);
    mnVSModeMakeButton(button_gobj, 51.0F, 148.0F, 17);
    mnVSModeUpdateButton(button_gobj, (sMNVSModeCursorIndex == nMNVSModeOptionOptions) ? nMNOptionTabStatusHighlight : nMNOptionTabStatusNot);

    button_sobj = lbCommonMakeSObjForGObj(button_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[1], &lMNVSModeVSOptionsSprite));
    button_sobj->sprite.attr &= ~SP_FASTCOPY;
    button_sobj->sprite.attr |= SP_TRANSPARENT;
    button_sobj->sprite.red = 0x00;
    button_sobj->sprite.green = 0x00;
    button_sobj->sprite.blue = 0x00;
    button_sobj->pos.x = 71.0F;
    button_sobj->pos.y = 151.0F;
}

// 0x80132FA4 - Unused?
void mnVSModeSetColorsUnused(SObj* sobj)
{
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    sobj->env_color.r = 0;
    sobj->env_color.g = 0;
    sobj->env_color.b = 0;
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue = 0xFF;
}

// 0x80132FD8
void mnVSModeMakeUnusedGObj(void)
{
    sMNVSModeUnusedGObj = gcMakeGObjSPAfter(0, NULL, 5, GOBJ_LINKORDER_DEFAULT);
}

// 0x80133008
void mnVSModeRenderMenuName(GObj* menu_name_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xA0, 0x78, 0x14, 0xE6);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 225, 143, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);

    lbCommonClearExternSpriteParams();
    lbCommonDrawSObjAttr(menu_name_gobj);
}

// 0x8013314C
void mnVSModeMakeMenuName()
{
    GObj* menu_name_gobj;
    SObj* menu_name_sobj;

    menu_name_gobj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(menu_name_gobj, mnVSModeRenderMenuName, 1, GOBJ_LINKORDER_DEFAULT, -1);

    menu_name_sobj = lbCommonMakeSObjForGObj(menu_name_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[0], &lMNCommonSmashLogoSprite));
    menu_name_sobj->sprite.attr &= ~SP_FASTCOPY;
    menu_name_sobj->sprite.attr |= SP_TRANSPARENT;
    menu_name_sobj->sprite.red = 0x00;
    menu_name_sobj->sprite.green = 0x00;
    menu_name_sobj->sprite.blue = 0x00;
    menu_name_sobj->pos.x = 235.0F;
    menu_name_sobj->pos.y = 158.0F;

    menu_name_sobj = lbCommonMakeSObjForGObj(menu_name_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[1], &lMNVSModeVSSprite));
    menu_name_sobj->sprite.attr &= ~SP_FASTCOPY;
    menu_name_sobj->sprite.attr |= SP_TRANSPARENT;
    menu_name_sobj->sprite.red = 0x00;
    menu_name_sobj->sprite.green = 0x00;
    menu_name_sobj->sprite.blue = 0x00;
    menu_name_sobj->pos.x = 158.0F;
    menu_name_sobj->pos.y = 192.0F;

    menu_name_sobj = lbCommonMakeSObjForGObj(menu_name_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[0], &lMNCommonGameModeSprite));
    menu_name_sobj->sprite.attr &= ~SP_FASTCOPY;
    menu_name_sobj->sprite.attr |= SP_TRANSPARENT;
    menu_name_sobj->sprite.red = 0x00;
    menu_name_sobj->sprite.green = 0x00;
    menu_name_sobj->sprite.blue = 0x00;
    menu_name_sobj->pos.x = 189.0F;
    menu_name_sobj->pos.y = 87.0F;
}

// 0x80133298
void mnVSModeMakeBackground(void)
{
    GObj* bg_gobj;
    SObj* bg_sobj;

    bg_gobj = gcMakeGObjSPAfter(0, NULL, 2, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(bg_gobj, lbCommonDrawSObjAttr, 0, GOBJ_LINKORDER_DEFAULT, -1);

    bg_sobj = lbCommonMakeSObjForGObj(bg_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[0], &lMNCommonCircleSprite));
    bg_sobj->pos.x = 10.0F;
    bg_sobj->pos.y = 10.0F;

    bg_sobj = lbCommonMakeSObjForGObj(bg_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[0], &lMNCommonPaperTearSprite));
    bg_sobj->sprite.attr &= ~SP_FASTCOPY;
    bg_sobj->sprite.attr |= SP_TRANSPARENT;
    bg_sobj->sprite.red = 0xA0;
    bg_sobj->sprite.green = 0x78;
    bg_sobj->sprite.blue = 0x14;
    bg_sobj->pos.x = 140.0F;
    bg_sobj->pos.y = 143.0F;

    bg_sobj = lbCommonMakeSObjForGObj(bg_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[0], &lMNCommonPaperTearSprite));
    bg_sobj->sprite.attr &= ~SP_FASTCOPY;
    bg_sobj->sprite.attr |= SP_TRANSPARENT;
    bg_sobj->sprite.red = 0xA0;
    bg_sobj->sprite.green = 0x78;
    bg_sobj->sprite.blue = 0x14;
    bg_sobj->pos.x = 225.0F;
    bg_sobj->pos.y = 56.0F;

    bg_sobj = lbCommonMakeSObjForGObj(bg_gobj, lbGetDataFromFile(Sprite*, sMNVSModeFiles[1], &lMNVSModeN64ConsoleSprite));
    bg_sobj->sprite.attr &= ~SP_FASTCOPY;
    bg_sobj->sprite.attr |= SP_TRANSPARENT;
    bg_sobj->sprite.red = 0x99;
    bg_sobj->sprite.green = 0x99;
    bg_sobj->sprite.blue = 0x99;
    bg_sobj->pos.x = 10.0F;
    bg_sobj->pos.y = 10.0F;
}

// 0x8013342C
void mnVSModeMakeButtonValuesViewport(void)
{
    GObj *camera_gobj = gcMakeCameraGObj
    (
        1,
        NULL,
        1,
        GOBJ_LINKORDER_DEFAULT,
        lbCommonScissorSpriteCamera,
        0x14,
        CAMERA_MASK_DLLINK(3),
        -1,
        0,
        1,
        NULL,
        1,
        0
    );
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801334CC
void mnVSModeMakeButtonViewport(void)
{
    GObj *camera_gobj = gcMakeCameraGObj
    (
        1,
        NULL,
        1,
        GOBJ_LINKORDER_DEFAULT,
        lbCommonScissorSpriteCamera,
        40,
        CAMERA_MASK_DLLINK(2),
        -1,
        0,
        1,
        0,
        1,
        0
    );
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013356C
void mnVSModeMakeMenuNameViewport(void)
{
    GObj *camera_gobj = gcMakeCameraGObj
    (
        1,
        NULL,
        1,
        GOBJ_LINKORDER_DEFAULT,
        lbCommonScissorSpriteCamera,
        60,
        CAMERA_MASK_DLLINK(1),
        -1,
        0,
        1,
        NULL,
        1,
        0
    );
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013360C
void mnVSModeMakeBackgroundViewport()
{
    GObj *camera_gobj = gcMakeCameraGObj(
        1,
        NULL,
        1,
        GOBJ_LINKORDER_DEFAULT,
        lbCommonScissorSpriteCamera,
        80,
        CAMERA_MASK_DLLINK(0),
        -1,
        0,
        1,
        0,
        1,
        0
    );
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801336AC
void mnVSModeProcStartVars()
{
    if (gSceneData.scene_previous == nSCKindVSOptions)
    {
        sMNVSModeCursorIndex = nMNVSModeOptionOptions;
    }
    else sMNVSModeCursorIndex = nMNVSModeOptionStart;

    sMNVSModeChangeWait = 0;

    switch (gTransferBattleState.is_team_battle)
    {
        case FALSE:
            if (gTransferBattleState.game_rules == SCBATTLE_GAMERULE_TIME)
            {
                sMNVSModeRule = nMNVSModeRuleTime;
            }
            else sMNVSModeRule = nMNVSModeRuleStock;

            break;
        case TRUE:
            if (gTransferBattleState.game_rules == SCBATTLE_GAMERULE_TIME)
            {
                sMNVSModeRule = nMNVSModeRuleTimeTeam;
            }
            else sMNVSModeRule = nMNVSModeRuleStockTeam;

            break;
    }

    sMNVSModeTime = gTransferBattleState.time_limit;
    sMNVSModeStock = gTransferBattleState.stock_setting;
    sMNVSModeTimeStockArrowsGObj = 0;
    sMNVSModeRuleArrowsGObj = 0;
    sMNVSModeInputDirection = nMNVSModeInputDirectionNone;
    sMNVSModeFramesElapsed = 0;
    sMNVSModeExitInterrupt = 0;
    sMNVSModeMaxFramesElapsed = sMNVSModeFramesElapsed + I_MIN_TO_FRAMES(5);
    sMNVSModeTimeStockArrowBlinkTimer = 0;
    sMNVSModeRuleArrowBlinkTimer = 0;
}

// 0x801337B8
void mnVSModeSaveSettings()
{
    gTransferBattleState.time_limit = sMNVSModeTime;
    gTransferBattleState.stock_setting = sMNVSModeStock;

    switch (sMNVSModeRule)
    {
        case nMNVSModeRuleStock:
            gTransferBattleState.is_team_battle = FALSE;
            gTransferBattleState.game_rules = SCBATTLE_GAMERULE_STOCK;
            break;
        case nMNVSModeRuleTime:
            gTransferBattleState.is_team_battle = FALSE;
            gTransferBattleState.game_rules = SCBATTLE_GAMERULE_TIME;
            break;
        case nMNVSModeRuleStockTeam:
            gTransferBattleState.is_team_battle = TRUE;
            gTransferBattleState.game_rules = SCBATTLE_GAMERULE_STOCK;
            break;
        case nMNVSModeRuleTimeTeam:
            gTransferBattleState.is_team_battle = TRUE;
            gTransferBattleState.game_rules = SCBATTLE_GAMERULE_TIME;
            break;
    }
}

// 0x80133850
s32 mnVSModeGetShade(s32 player)
{
    sb32 is_same_costume[GMCOMMON_PLAYERS_MAX];
    s32 i;

    if ((sMNVSModeRule == nMNVSModeRuleTime) || (sMNVSModeRule == nMNVSModeRuleStock))
    {
        return 0;
    }
    for (i = 0; i < ARRAY_COUNT(is_same_costume); i++)
    {
        is_same_costume[i] = FALSE;
    }
    for (i = 0; i < ARRAY_COUNT(is_same_costume); i++)
    {
        if
        (
            (player != i) &&
            (gTransferBattleState.players[player].ft_kind == gTransferBattleState.players[i].ft_kind) &&
            (gTransferBattleState.players[player].team == gTransferBattleState.players[i].team)
        )
        {
            is_same_costume[gTransferBattleState.players[i].shade] = TRUE;
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
s32 mnVSModeGetCostume(s32 ft_kind, s32 arg1)
{
    s32 i;
    s32 j;
    s32 unused[2];
    sb32 is_same_costume[GMCOMMON_PLAYERS_MAX];

    for (i = 0; i < ARRAY_COUNT(is_same_costume); i++)
    {
        is_same_costume[i] = FALSE;
    }
    for (i = 0; i < ARRAY_COUNT(is_same_costume); i++)
    {
        if (i != arg1)
        {
            if (ft_kind == gTransferBattleState.players[i].ft_kind)
            {
                for (j = 0; j < ARRAY_COUNT(is_same_costume); j++)
                {
                    if (ftParamGetCostumeCommonID(ft_kind, j) == gTransferBattleState.players[i].costume)
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
void mnVSModeSetCostumesAndShades(void)
{
    s32 i;

    switch (sMNVSModeRule)
    {
        case nMNVSModeRuleTime:
        case nMNVSModeRuleStock:
            for (i = 0; i < ARRAY_COUNT(gTransferBattleState.players); i++)
            {
                if (gTransferBattleState.players[i].ft_kind != nFTKindNull)
                {
                    gTransferBattleState.players[i].costume = ftParamGetCostumeCommonID(gTransferBattleState.players[i].ft_kind, mnVSModeGetCostume(gTransferBattleState.players[i].ft_kind, i));
                    gTransferBattleState.players[i].shade = mnVSModeGetShade(i);
                }
            }
            break;
        case nMNVSModeRuleTimeTeam:
        case nMNVSModeRuleStockTeam:
            for (i = 0; i < ARRAY_COUNT(gTransferBattleState.players); i++)
            {
                if (gTransferBattleState.players[i].ft_kind != nFTKindNull)
                {
                    gTransferBattleState.players[i].costume = ftParamGetCostumeTeamID(gTransferBattleState.players[i].ft_kind, gTransferBattleState.players[i].team);
                    gTransferBattleState.players[i].shade = mnVSModeGetShade(i);
                }
            }
            break;
    }
}

// 0x80133B8C
void mnVSModeMain(GObj *gobj)
{
    s32 unused;

    // 0x80134870
    GObj** buttons[/* */] = { &sMNVSModeButtonGObjVSStart, &sMNVSModeButtonGObjRule, &sMNVSModeButtonGObjTimeStock, &sMNVSModeButtonGObjVSOptions };
    
    s32 stick_range;
    s32 is_button;

    sMNVSModeFramesElapsed++;

    if (sMNVSModeFramesElapsed >= 10)
    {
        if (sMNVSModeFramesElapsed == sMNVSModeMaxFramesElapsed)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindTitle;

            mnVSModeSaveSettings();
            leoInitUnit_atten();

            return;
        }
        if (scSubsysControllerCheckNoInputAll() == FALSE)
        {
            sMNVSModeMaxFramesElapsed = sMNVSModeFramesElapsed + I_MIN_TO_FRAMES(5);
        }
        if (sMNVSModeExitInterrupt != 0)
        {
            leoInitUnit_atten();
        }
        if (sMNVSModeChangeWait != 0)
        {
            sMNVSModeChangeWait--;
        }
        if
        (
            (scSubsysControllerGetPlayerStickInRangeLR(-20, 20) != FALSE) &&
            (scSubsysControllerGetPlayerStickInRangeUD(-20, 20) != FALSE) &&
            (scSubsysControllerGetPlayerHoldButtons(U_JPAD | R_JPAD | R_TRIG | U_CBUTTONS | R_CBUTTONS) == FALSE) &&
            (scSubsysControllerGetPlayerHoldButtons(D_JPAD | L_JPAD | L_TRIG | D_CBUTTONS | L_CBUTTONS) == FALSE)
        )
        {
            sMNVSModeChangeWait = 0;
            sMNVSModeInputDirection = nMNVSModeInputDirectionNone;
        }
        if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | START_BUTTON) != FALSE)
        {
            switch (sMNVSModeCursorIndex)
            {
                case nMNVSModeOptionStart:
                    func_800269C0_275C0(nSYAudioFGMMenuSelect);
                    mnVSModeUpdateButton(sMNVSModeButtonGObjVSStart, nMNOptionTabStatusSelected);
                    mnVSModeSaveSettings();

                    sMNVSModeExitInterrupt = TRUE;

                    gSceneData.scene_previous = gSceneData.scene_current;
                    gSceneData.scene_current = nSCKindVSChrSel;

                    return;
                case nMNVSModeOptionOptions:
                    func_800269C0_275C0(nSYAudioFGMMenuSelect);
                    mnVSModeUpdateButton(sMNVSModeButtonGObjVSOptions, nMNOptionTabStatusSelected);
                    mnVSModeSaveSettings();

                    sMNVSModeExitInterrupt = TRUE;

                    gSceneData.scene_previous = gSceneData.scene_current;
                    gSceneData.scene_current = nSCKindVSOptions;

                    return;
            }
        }

        if (scSubsysControllerGetPlayerTapButtons(B_BUTTON) != FALSE)
        {
            mnVSModeSaveSettings();

            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindModeSelect;

            leoInitUnit_atten();
        }
        if
        (
            mnCommonCheckGetOptionButtonInput(sMNVSModeChangeWait, is_button, U_JPAD | U_CBUTTONS) ||
            mnCommonCheckGetOptionStickInputUD(sMNVSModeChangeWait, stick_range, 20, 1)
        )
        {
            func_800269C0_275C0(nSYAudioFGMMenuScroll2);

            mnCommonSetOptionChangeWaitP(sMNVSModeChangeWait, is_button, stick_range, 7);

            if (sMNVSModeCursorIndex == nMNVSModeOptionRule)
            {
                sMNVSModeChangeWait += 8;
            }
            mnVSModeUpdateButton(*buttons[sMNVSModeCursorIndex], nMNOptionTabStatusNot);

            if (sMNVSModeCursorIndex == nMNVSModeOptionStart)
            {
                sMNVSModeCursorIndex = nMNVSModeOptionOptions;
            }
            else sMNVSModeCursorIndex--;

            mnVSModeUpdateButton(*buttons[sMNVSModeCursorIndex], nMNOptionTabStatusHighlight);
            gcEjectGObj(sMNVSModeUnusedGObj);
            mnVSModeMakeUnusedGObj();

            sMNVSModeInputDirection = nMNVSModeInputDirectionUp;

            if (sMNVSModeCursorIndex == nMNVSModeOptionRule)
            {
                sMNVSModeRuleArrowsGObj->flags = GOBJ_FLAG_NONE;
                sMNVSModeRuleArrowBlinkTimer = 30;
            }

            if (sMNVSModeCursorIndex == nMNVSModeOptionTimeStock)
            {
                sMNVSModeTimeStockArrowsGObj->flags = GOBJ_FLAG_NONE;
                sMNVSModeTimeStockArrowBlinkTimer = 30;
            }
        }

        if
        (
            mnCommonCheckGetOptionButtonInput(sMNVSModeChangeWait, is_button, D_JPAD | D_CBUTTONS) ||
            mnCommonCheckGetOptionStickInputUD(sMNVSModeChangeWait, stick_range, -20, 0)
        )
        {
            func_800269C0_275C0(nSYAudioFGMMenuScroll2);

            mnCommonSetOptionChangeWaitN(sMNVSModeChangeWait, is_button, stick_range, 7);

            if (sMNVSModeCursorIndex == nMNVSModeOptionTimeStock)
            {
                sMNVSModeChangeWait += 8;
            }

            mnVSModeUpdateButton(*buttons[sMNVSModeCursorIndex], nMNOptionTabStatusNot);

            if (sMNVSModeCursorIndex == nMNVSModeOptionOptions)
            {
                sMNVSModeCursorIndex = nMNVSModeOptionStart;
            }
            else sMNVSModeCursorIndex++;

            mnVSModeUpdateButton(*buttons[sMNVSModeCursorIndex], nMNOptionTabStatusHighlight);
            gcEjectGObj(sMNVSModeUnusedGObj);
            mnVSModeMakeUnusedGObj();

            sMNVSModeInputDirection = nMNVSModeInputDirectionDown;

            if (sMNVSModeCursorIndex == 1)
            {
                sMNVSModeRuleArrowsGObj->flags = GOBJ_FLAG_NONE;
                sMNVSModeRuleArrowBlinkTimer = 30;
            }

            if (sMNVSModeCursorIndex == 2)
            {
                sMNVSModeTimeStockArrowsGObj->flags = GOBJ_FLAG_NONE;
                sMNVSModeTimeStockArrowBlinkTimer = 30;
            }
        }

        switch (sMNVSModeCursorIndex)
        {
            case nMNVSModeOptionRule:
                if
                (
                    mnCommonCheckGetOptionButtonInput(sMNVSModeChangeWait, is_button, L_JPAD | L_TRIG | L_CBUTTONS) ||
                    mnCommonCheckGetOptionStickInputLR(sMNVSModeChangeWait, stick_range, -20, 0)
                )
                {
                    if (sMNVSModeRule > nMNVSModeRuleTime)
                    {
                        func_800269C0_275C0(nSYAudioFGMMenuScroll1);

                        sMNVSModeRule--;

                        if (sMNVSModeRule == nMNVSModeRuleStock)
                        {
                            mnVSModeSetCostumesAndShades();
                        }

                        gcEjectGObj(sMNVSModeButtonGObjTimeStock);
                        mnVSModeMakeTimeStockButton();
                        gcEjectGObj(sMNVSModeRuleValueGObj);
                        mnVSModeMakeRuleValue();
                        gcEjectGObj(sMNVSModeTimeStockValueGObj);
                        mnVSModeMakeTimeStockValue();

                        mnCommonSetOptionChangeWaitN(sMNVSModeChangeWait, is_button, stick_range, 7);

                        gcEjectGObj(sMNVSModeUnusedGObj);
                        mnVSModeMakeUnusedGObj();

                        sMNVSModeInputDirection = nMNVSModeInputDirectionLeft;
                    }
                }

                if (
                    mnCommonCheckGetOptionButtonInput(sMNVSModeChangeWait, is_button, R_JPAD | R_TRIG | R_CBUTTONS) ||
                    mnCommonCheckGetOptionStickInputLR(sMNVSModeChangeWait, stick_range, 20, 1)
                )
                {
                    if (sMNVSModeRule < nMNVSModeRuleStockTeam)
                    {
                        func_800269C0_275C0(nSYAudioFGMMenuScroll1);

                        sMNVSModeRule++;

                        if (sMNVSModeRule == nMNVSModeRuleTimeTeam)
                        {
                            mnVSModeSetCostumesAndShades();
                        }

                        gcEjectGObj(sMNVSModeButtonGObjTimeStock);
                        mnVSModeMakeTimeStockButton();
                        gcEjectGObj(sMNVSModeRuleValueGObj);
                        mnVSModeMakeRuleValue();
                        gcEjectGObj(sMNVSModeTimeStockValueGObj);
                        mnVSModeMakeTimeStockValue();

                        mnCommonSetOptionChangeWaitP(sMNVSModeChangeWait, is_button, stick_range, 7);

                        gcEjectGObj(sMNVSModeUnusedGObj);
                        mnVSModeMakeUnusedGObj();

                        sMNVSModeInputDirection = nMNVSModeInputDirectionRight;

                        return;
                    }
                }
                break;

            case nMNVSModeOptionTimeStock:
                if (
                    mnCommonCheckGetOptionButtonInput(sMNVSModeChangeWait, is_button, L_JPAD | L_TRIG | L_CBUTTONS) ||
                    mnCommonCheckGetOptionStickInputLR(sMNVSModeChangeWait, stick_range, -20, 0)
                )
                {
                    func_800269C0_275C0(nSYAudioFGMMenuScroll1);

                    mnCommonSetOptionChangeWaitN(sMNVSModeChangeWait, is_button, stick_range, 14);

                    if (sMNVSModeInputDirection != nMNVSModeInputDirectionLeft)
                    {
                        sMNVSModeChangeWait *= 2;
                    }

                    if (mnVSModeIsTime() != FALSE)
                    {
                        if (sMNVSModeTime == 1)
                        {
                            sMNVSModeTime = SCBATTLE_TIMELIMIT_INFINITE;
                        }
                        else sMNVSModeTime--;

                        if (sMNVSModeTime == 1)
                        {
                            sMNVSModeChangeWait += 8;
                        }
                    }
                    else
                    {
                        if (sMNVSModeStock == 0)
                        {
                            sMNVSModeStock = 98;
                        }
                        else sMNVSModeStock--;

                        if (sMNVSModeStock == 0)
                        {
                            sMNVSModeChangeWait += 8;
                        }
                    }
                    gcEjectGObj(sMNVSModeTimeStockValueGObj);
                    mnVSModeMakeTimeStockValue();

                    sMNVSModeInputDirection = nMNVSModeInputDirectionLeft;
                }
                if
                (
                    mnCommonCheckGetOptionButtonInput(sMNVSModeChangeWait, is_button, R_JPAD | R_TRIG | R_CBUTTONS) ||
                    mnCommonCheckGetOptionStickInputLR(sMNVSModeChangeWait, stick_range, 20, 1)
                )
                {
                    func_800269C0_275C0(nSYAudioFGMMenuScroll1);

                    mnCommonSetOptionChangeWaitP(sMNVSModeChangeWait, is_button, stick_range, 14);

                    if (sMNVSModeInputDirection != nMNVSModeInputDirectionRight)
                    {
                        sMNVSModeChangeWait *= 2;
                    }

                    if (mnVSModeIsTime() != FALSE)
                    {
                        if (sMNVSModeTime == 100)
                        {
                            sMNVSModeTime = 1;
                        }
                        else sMNVSModeTime += 1;

                        if (sMNVSModeTime == SCBATTLE_TIMELIMIT_INFINITE)
                        {
                            sMNVSModeChangeWait += 8;
                        }
                    }
                    else
                    {
                        if (sMNVSModeStock == 98)
                        {
                            sMNVSModeStock = 0;
                        }
                        else sMNVSModeStock++;

                        if (sMNVSModeStock == 98)
                        {
                            sMNVSModeChangeWait += 8;
                        }
                    }
                    gcEjectGObj(sMNVSModeTimeStockValueGObj);
                    mnVSModeMakeTimeStockValue();

                    sMNVSModeInputDirection = nMNVSModeInputDirectionRight;
                }
                break;
        }
    }
}

// 0x801345C4
void mnVSModeProcStart(void)
{
    lbRelocSetup rl_setup;

    rl_setup.table_addr = &lLBRelocTableAddr;
    rl_setup.table_files_num = &lLBRelocTableFilesNum;
    rl_setup.file_heap = NULL;
    rl_setup.file_heap_size = 0;
    rl_setup.status_buf = sMNVSModeStatusBuf;
    rl_setup.status_buf_size = ARRAY_COUNT(sMNVSModeStatusBuf);
    rl_setup.force_buf = NULL;
    rl_setup.force_buf_size = 0;

    lbRelocInitSetup(&rl_setup);

    if
    (
        !(gSaveData.error_flags & LBBACKUP_ERROR_RANDOMKNOCKBACK) && 
        (gSaveData.unk5E3 >= 22)                                  && 
        (gSYMainIsSPImemOK == FALSE)
    )
    {
        gSaveData.error_flags |= LBBACKUP_ERROR_RANDOMKNOCKBACK;
    }
    lbRelocLoadFilesExtern
    (
        dMNVSModeFileIDs,
        ARRAY_COUNT(dMNVSModeFileIDs),
        sMNVSModeFiles,
        gsMemoryAlloc
        (
            lbRelocGetAllocSize
            (
                dMNVSModeFileIDs,
                ARRAY_COUNT(dMNVSModeFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mnVSModeMain, 0, GOBJ_LINKORDER_DEFAULT);
    gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0, GPACK_RGBA8888(0x00, 0x00, 0x00, 0x00));

    mnVSModeProcStartVars();
    mnVSModeMakeBackgroundViewport();
    mnVSModeMakeMenuNameViewport();
    mnVSModeMakeButtonViewport();
    mnVSModeMakeButtonValuesViewport();
    mnVSModeMakeBackground();
    mnVSModeMakeMenuName();
    mnVSModeMakeVSStartButton();
    mnVSModeMakeRuleButton();
    mnVSModeMakeRuleValue();
    mnVSModeMakeTimeStockButton();
    mnVSModeMakeTimeStockValue();
    mnVSModeMakeVSOptionsButton();
    mnVSModeMakeUnusedGObj();

    if (gSceneData.scene_previous == nSCKindVSChrSel)
    {
        auPlaySong(0, nSYAudioBGMModeSelect);
    }
}

// 0x80134880
syDisplaySetup dMNVSModeDisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x8013489C
scRuntimeInfo dMNVSModeGtlSetup =
{
    0x00000000,
    func_8000A5E4,
    func_8000A340,
    &ovl19_BSS_END,
    0,
    1,
    2,
    0xEA60,
    0,
    0,
    0,
    0x8000,
    0x20000,
    0xC000,
    mnVSModeProcLights,
    update_contdata,
    0,
    0x600,
    0,
    0,
    0,
    0,
    0x88,
    0,
    0,
    0,
    0,
    0,
    0,
    0x88,
    0,
    0x6C,
    0,
    0x90,
    mnVSModeProcStart
};

// 0x80134758
void mnVSModeStartScene(void)
{
    dMNVSModeDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);
    func_80007024(&dMNVSModeDisplaySetup);

    dMNVSModeGtlSetup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl19_BSS_END);
    gsGTLSceneInit(&dMNVSModeGtlSetup);
}