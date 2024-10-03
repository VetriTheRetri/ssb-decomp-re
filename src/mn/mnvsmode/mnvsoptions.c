#include <ft/fighter.h>
#include <mn/menu.h>
#include <sc/scene.h>
#include <gm/gmsound.h>
#include <sys/thread6.h>
#include <sys/system_00.h>

extern void func_80007080(void*, f32, f32, f32, f32);

extern uintptr_t D_NF_00000000;
extern uintptr_t D_NF_00000007;

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define mnVSOptionsCheckGetOptionButtonInput(is_button, mask) \
mnCommonCheckGetOptionButtonInput(sMNVSOptionsOptionChangeWait, is_button, mask)

#define mnVSOptionsCheckGetOptionStickInputUD(stick_range, min, b) \
mnCommonCheckGetOptionStickInputUD(sMNVSOptionsOptionChangeWait, stick_range, min, b)

#define mnVSOptionsCheckGetOptionStickInputLR(stick_range, min, b) \
mnCommonCheckGetOptionStickInputLR(sMNVSOptionsOptionChangeWait, stick_range, min, b)

#define mnVSOptionsSetOptionChangeWaitP(is_button, stick_range, div) \
mnCommonSetOptionChangeWaitP(sMNVSOptionsOptionChangeWait, is_button, stick_range, div)

#define mnVSOptionsSetOptionChangeWaitN(is_button, stick_range, div) \
mnCommonSetOptionChangeWaitN(sMNVSOptionsOptionChangeWait, is_button, stick_range, div)

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x801348C0
GObj *sMNVSOptionsOptionGObjs[nMNVSOptionsOptionEnumMax];

// 0x801348D8
s32 sMNVSOptionsPad0x801348D8[2];

// 0x801348E0
s32 sMNVSOptionsOption;

// 0x801348E4
s32 sMNVSOptionsHandicapStatus;

// 0x801348E8
s32 sMNVSOptionsTeamAttackStatus;

// 0x801348EC
s32 sMNVSOptionsStageSelectStatus;

// 0x801348F0
s32 sMNVSOptionsDamage;

// 0x801348F4
GObj *D_801348F4_1280D4;

// 0x801348F8
s32 sMNVSOptionsDamageGObj;

// 0x801348FC
s32 sMNVSOptionsFirstAvailableOption;

// 0x80134900
s32 sMNVSOptionsLastAvailableOption;

// 0x80134904
sb32 sMNVSOptionsIsHaveItemSwitch;

// 0x80134908
s32 sMNVSOptionsOptionChangeWait;

// 0x8013490C
s32 sMNVSOptionsTotalTimeTics;

// 0x80134910
s32 sMNVSOptionsReturnTic;

// 0x80134914
// s32 sMNVSOptionsPad0x80134914;

// 0x80134918
lbFileNode sMNVSOptionsStatusBuffer[24];

// 0x801349D8
void *sMNVSOptionsFiles[2];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x801346C0
u32 dMNVSOptionsFileIDs[/* */] = { &D_NF_00000000, &D_NF_00000007 };

// 0x801346C8
Lights1 dMNVSOptionsLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x801346E0
Gfx dMNVSOptionsDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMNVSOptionsLights1),
    gsSPEndDisplayList()
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mnVSOptionsProcLights(Gfx **dls)
{
    gSPDisplayList(dls[0]++, dMNVSOptionsDisplayList);
}

// 0x80131B24
sb32 mnVSOptionsCheckHaveItemSwitch(void)
{
    if (gSaveData.unlock_mask & LBBACKUP_UNLOCK_MASK_ITEMSWITCH)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80131B4C
s32 mnVSOptionsGetPowerOf(s32 base, s32 exp)
{
	s32 raised = base;
	s32 i;

	if (exp == 0)
	{
		return 1;
	}
	i = exp;

	while (i > 1)
	{
		i--;
		raised *= base;
	}
	return raised;
}

// 0x80131BEC
void mnVSOptionsSetDamageDigitSpriteColors(SObj *sobj, u32 *colors)
{
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = colors[0];
    sobj->sprite.green = colors[1];
    sobj->sprite.blue = colors[2];
}

// 0x80131C1C
s32 mnVSOptionsGetDamageDigitCount(s32 damage, s32 digit_count_max)
{
	s32 digit_count_current = digit_count_max;

	while (digit_count_current > 0)
	{
		s32 digit = (mnVSOptionsGetPowerOf(10, digit_count_current - 1) != 0) ? damage / mnVSOptionsGetPowerOf(10, digit_count_current - 1) : 0;

		if (digit != 0)
		{
			return digit_count_current;
		}
		else digit_count_current--;
	}
	return 0;
}

// 0x80131CC8
void mnVSOptionsMakeDamageDigitSObjs(GObj *gobj, s32 damage, f32 pos_x, f32 pos_y, u32 *colors, s32 digit_count_max, sb32 is_fixed_digit_count)
{    
    // 0x80134708
    intptr_t digit_offsets[/* */] =
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

    // 0x80134730 - unused
    f32 digit_widths[/* */] =
    {
        10.0F,
         6.0F,
         9.0F,
         9.0F,
        10.0F,
         9.0F,
         9.0F,
        10.0F,
         9.0F,
        10.0F
    };

    s32 i;
    s32 digit;
    f32 calc_x;
    SObj *sobj;

    calc_x = pos_x;

    if (damage < 0)
    {
        damage = 0;
    }
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[0], digit_offsets[damage % 10]));
    mnVSOptionsSetDamageDigitSpriteColors(sobj, colors);

    calc_x -= 11.0F;
    
    sobj->pos.x = calc_x;
    sobj->pos.y = pos_y;
    
    for (i = 1; i < ((is_fixed_digit_count != FALSE) ? digit_count_max : mnVSOptionsGetDamageDigitCount(damage, digit_count_max)); i++)
    {
        digit = (mnVSOptionsGetPowerOf(10, i) != 0) ? damage / mnVSOptionsGetPowerOf(10, i) : 0;

        sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[0], digit_offsets[digit % 10]));
        
        mnVSOptionsSetDamageDigitSpriteColors(sobj, colors);
        
        calc_x -= 11.0F;

        sobj->pos.x = calc_x;
        sobj->pos.y = pos_y;
    }
}

// 0x80131F74
void mnVSOptionsSetOptionSpriteColors(GObj *gobj, s32 status)
{
    // 0x80134758
    syColorRGBPair notcolors = { { 0x00, 0x00, 0x00 }, { 0x82, 0x82, 0xAA } };

    // 0x80134760
    syColorRGBPair hicolors = { { 0xFA, 0x8C, 0x00 }, { 0xF4, 0xC8, 0x0A } };

    syColorRGBPair *colors;
    
    SObj *sobj = SObjGetStruct(gobj);
    
    colors = (status != nMNOptionTabStatusNot) ? &hicolors : &notcolors;

    sobj->envcolor.r = colors->prim.r;
    sobj->envcolor.g = colors->prim.g;
    sobj->envcolor.b = colors->prim.b;
    
    sobj->sprite.red = colors->env.r;
    sobj->sprite.green = colors->env.g;
    sobj->sprite.blue = colors->env.b;
}

// 0x80131FFC
void mnVSOptionsSetToggleSpriteColors(GObj *gobj, s32 status)
{
    SObj *sobj = SObjGetStruct(gobj)->next->next;
    
    if (status != nMNOptionTabStatusOff)
    {
        sobj->sprite.red = 0xFF;
        sobj->sprite.green = 0x00;
        sobj->sprite.blue = 0x28;
        
        sobj->next->sprite.red = 0x32;
        sobj->next->sprite.green = 0x32;
        sobj->next->sprite.blue = 0x32;
    }
    else
    {
        sobj->sprite.red = 0x32;
        sobj->sprite.green = 0x32;
        sobj->sprite.blue = 0x32;
        
        sobj->next->sprite.red = 0xFF;
        sobj->next->sprite.green = 0x00;
        sobj->next->sprite.blue = 0x28;
    }
}

// 0x80132078
void mnVSOptionsMakeOnOffToggle(GObj *gobj, f32 pos_x, f32 pos_y)
{
    SObj *sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[0], &lMNCommonTextOnSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = pos_x;
    sobj->pos.y = pos_y;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[0], &lMNCommonTextOffSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = pos_x + 25.0F + 7.0F;
    sobj->pos.y = pos_y;

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[0], &lMNCommonTextSlashSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = pos_x + 25.0F;
    sobj->pos.y = pos_y;
    
    sobj->sprite.red = 0x32;
    sobj->sprite.green = 0x32;
    sobj->sprite.blue = 0x32;
}

// 0x80132184
void mnVSOptionsSetHandicapSpriteColors(GObj *gobj, s32 setting)
{
    SObj *sobj = SObjGetStruct(gobj)->next->next;

    switch (setting)
    {
    case nSCBattleHandicapOn:
        sobj->sprite.red = 0xFF;
        sobj->sprite.green = 0x00;
        sobj->sprite.blue = 0x28;
        
        sobj->next->sprite.red = 0x32;
        sobj->next->sprite.green = 0x32;
        sobj->next->sprite.blue = 0x32;
        
        sobj->next->next->sprite.red = 0x32;
        sobj->next->next->sprite.green = 0x32;
        sobj->next->next->sprite.blue = 0x32;
        break;
        
    case nSCBattleHandicapAuto:
        sobj->sprite.red = 0x32;
        sobj->sprite.green = 0x32;
        sobj->sprite.blue = 0x32;
        
        sobj->next->sprite.red = 0xFF;
        sobj->next->sprite.green = 0x00;
        sobj->next->sprite.blue = 0x28;
        
        sobj->next->next->sprite.red = 0x32;
        sobj->next->next->sprite.green = 0x32;
        sobj->next->next->sprite.blue = 0x32;
        break;
        
    case nSCBattleHandicapOff:
        sobj->sprite.red = 0x32;
        sobj->sprite.green = 0x32;
        sobj->sprite.blue = 0x32;
        
        sobj->next->sprite.red = 0x32;
        sobj->next->sprite.green = 0x32;
        sobj->next->sprite.blue = 0x32;
        
        sobj->next->next->sprite.red = 0xFF;
        sobj->next->next->sprite.green = 0x00;
        sobj->next->next->sprite.blue = 0x28;
        break;
    }
}

// 0x801322B8
void mnVSOptionsMakeHandicapToggle(GObj *gobj, f32 pos_x, f32 pos_y)
{
    SObj *sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[0], &lMNCommonTextOnSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = pos_x;
    sobj->pos.y = pos_y;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[0], &lMNCommonTextAutoSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = pos_x + 25.0F + 5.0F;
    sobj->pos.y = pos_y + 1.0F;

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[0], &lMNCommonTextOffSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = pos_x + 25.0F + 5.0F + 30.0F + 6.0F;
    sobj->pos.y = pos_y;

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[0], &lMNCommonTextSlashSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = pos_x + 25.0F;
    sobj->pos.y = pos_y;
    
    sobj->sprite.red = 0x32;
    sobj->sprite.green = 0x32;
    sobj->sprite.blue = 0x32;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[0], &lMNCommonTextSlashSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = pos_x + 25.0F + 5.0F + 30.0F;
    sobj->pos.y = pos_y;

    sobj->sprite.red = 0x32;
    sobj->sprite.green = 0x32;
    sobj->sprite.blue = 0x32;
}

// 0x80132478
void mnVSOptionsMakeDamageDigits(void)
{
    GObj *gobj;
    s32 unused;
    
    // 0x80134768
    u32 colors[/* */] =
    {
        0xFF, 0x00, 0x28,
        0x00, 0x00, 0x00
    };
 
    s32 pos_y = (sMNVSOptionsIsHaveItemSwitch != FALSE) ? 0x97 : 0xA4;
    
    sMNVSOptionsDamageGObj = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 2, GOBJ_LINKORDER_DEFAULT, -1);
    mnVSOptionsMakeDamageDigitSObjs(gobj, sMNVSOptionsDamage, 220.0F, pos_y, colors, 3, FALSE);
}

// 0x80132564
void mnVSOptionsMakeDamageOption(void)
{
    GObj *gobj;
    SObj *sobj;
    s32 pos_y;

    pos_y = (sMNVSOptionsIsHaveItemSwitch != FALSE) ? 148 : 161;

    sMNVSOptionsOptionGObjs[nMNVSOptionsOptionDamage] = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 2, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[1], &lMNVSOptionsOptionTabSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = 90.0F;
    sobj->pos.y = pos_y;
    
    mnVSOptionsSetOptionSpriteColors(gobj, sMNVSOptionsOption == nMNVSOptionsOptionDamage);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[1], &lMNVSOptionsTextDamageSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = 116.0F;
    sobj->pos.y = pos_y + 1;

    sobj->sprite.red = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[0], &lMNCommonSymbolPercentSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = 226.0F;
    sobj->pos.y = pos_y + 3;
    
    sobj->sprite.red = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;
}

// 0x801326F0
void mnVSOptionsMakeItemSwitchOption(void)
{
    GObj *gobj;
    SObj *sobj;
    s32 pos_y = 176;

    sMNVSOptionsOptionGObjs[nMNVSOptionsOptionItemSwitch] = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 2, GOBJ_DLLINKORDER_DEFAULT, -1);
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[1], &lMNVSOptionsOptionTabSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = 82.0F;
    sobj->pos.y = pos_y + 1;
    
    mnVSOptionsSetOptionSpriteColors(gobj, sMNVSOptionsOption == nMNVSOptionsOptionItemSwitch);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[1], &lMNVSOptionsTextItemSwitchSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = 128.0F;
    sobj->pos.y = pos_y + 3;

    sobj->sprite.red = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;
}

// 0x80132804
void mnVSOptionsMakeStageSelectOption(void)
{
    GObj *gobj;
    SObj *sobj;
    s32 pos_y;

    pos_y = (sMNVSOptionsIsHaveItemSwitch != FALSE) ? 119 : 129;

    sMNVSOptionsOptionGObjs[nMNVSOptionsOptionStageSelect] = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 2, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[1], &lMNVSOptionsOptionTabSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = 98.0F;
    sobj->pos.y = pos_y;
    
    mnVSOptionsSetOptionSpriteColors(gobj, sMNVSOptionsOption == nMNVSOptionsOptionStageSelect);
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[1], &lMNVSOptionsTextStageSelectSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = 104.0F;
    sobj->pos.y = pos_y + 1;
    
    sobj->sprite.red = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;
    
    mnVSOptionsMakeOnOffToggle(gobj, 208.0F, pos_y + 1);
    mnVSOptionsSetToggleSpriteColors(gobj, sMNVSOptionsStageSelectStatus);
}

// 0x80132968
void mnVSOptionsMakeTeamAttackOption(void)
{
    GObj *gobj;
    SObj *sobj;
    s32 pos_y;

    pos_y = (sMNVSOptionsIsHaveItemSwitch != FALSE) ? 90 : 97;

    sMNVSOptionsOptionGObjs[nMNVSOptionsOptionTeamAttack] = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 2, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[1], &lMNVSOptionsOptionTabSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = 106.0F;
    sobj->pos.y = pos_y;
    
    mnVSOptionsSetOptionSpriteColors(gobj, sMNVSOptionsOption == nMNVSOptionsOptionTeamAttack);

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[1], &lMNVSOptionsTextTeamAttackSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = 116.0F;
    sobj->pos.y = pos_y + 2;
    
    sobj->sprite.red = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;
    
    mnVSOptionsMakeOnOffToggle(gobj, 212.0F, pos_y + 1);
    mnVSOptionsSetToggleSpriteColors(gobj, sMNVSOptionsTeamAttackStatus);
}

// 0x80132AC8
void mnVSOptionsMakeHandicapOption(void)
{
    GObj *gobj;
    SObj *sobj;
    s32 pos_y;

    pos_y = (sMNVSOptionsIsHaveItemSwitch != FALSE) ? 61 : 65;

    sMNVSOptionsOptionGObjs[nMNVSOptionsOptionHandicap] = gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 2, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[1], &lMNVSOptionsOptionTabSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = 114.0F;
    sobj->pos.y = pos_y;
    
    mnVSOptionsSetOptionSpriteColors(gobj, sMNVSOptionsOption == nMNVSOptionsOptionHandicap);
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[1], &lMNVSOptionsTextHandicapSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = 121.0F;
    sobj->pos.y = pos_y + 2;
    
    sobj->sprite.red = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;
    
    mnVSOptionsMakeHandicapToggle(gobj, 191.0F, pos_y + 1);
    mnVSOptionsSetHandicapSpriteColors(gobj, sMNVSOptionsHandicapStatus);
}

// 0x80132C24
void mnVSOptionsLabelProcDisplay(GObj *gobj)
{
    gDPPipeSync(gSYProgDLHeads[0]++);
    gDPSetCycleType(gSYProgDLHeads[0]++, G_CYC_1CYCLE);
    gDPSetCombineMode(gSYProgDLHeads[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gSYProgDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPSetPrimColor(gSYProgDLHeads[0]++, 0, 0, 0x80, 0x80, 0x80, 0xFF);
    gDPFillRectangle(gSYProgDLHeads[0]++, 79, 34, 310, 39);
    gDPPipeSync(gSYProgDLHeads[0]++);
    gDPSetRenderMode(gSYProgDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetCycleType(gSYProgDLHeads[0]++, G_CYC_1CYCLE);
    
    lbCommonClearExternSpriteParams();
    lbCommonDrawSObjAttr(gobj);
}

// 0x80132D68
void mnVSOptionsMakeLabel(void)
{
    GObj *gobj;
    SObj *sobj;
    
    gobj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, mnVSOptionsLabelProcDisplay, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[1], &lMNVSOptionsLabelVSOptionsSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->envcolor.r = 0x00;
    sobj->envcolor.g = 0x00;
    sobj->envcolor.b = 0x00;
    
    sobj->sprite.red = 0xF2;
    sobj->sprite.green = 0xC7;
    sobj->sprite.blue = 0x0D;
    
    sobj->pos.x = 84.0F;
    sobj->pos.y = 24.0F;
}

// 0x80132E24
void func_ovl20_80132E24(SObj *sobj)
{
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->envcolor.r = 0x00;
    sobj->envcolor.g = 0x00;
    sobj->envcolor.b = 0x00;
    
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue = 0xFF;
}

// 0x80132E58
void func_ovl20_80132E58(void)
{
    s32 unused[2];
    
    // 0x80134780
    intptr_t sp1C[/* */] =
    {
        &lMNCommonTextOffSprite,
        &lMNCommonTextOnSprite,
        0x1968
    };
    
    D_801348F4_1280D4 = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT);
}

// 0x80132EAC
void mnVSOptionsMakeWallpaper(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = gcMakeGObjSPAfter(0, NULL, 2, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[0], &lMNCommonWallpaperSprite));
    
    sobj->pos.x = 10.0F;
    sobj->pos.y = 10.0F;
}

// 0x80132F2C
void mnVSOptionsUnderlineProcDisplay(GObj *gobj)
{   
    // 0x8013478C
    syRectangle handicap_rect[/* */] =
    {
        { 255, 77, 283, 77 },
        { 190, 77, 216, 77 },
        { 219, 77, 251, 77 }
    };

    // 0x801347BC
    syRectangle team_attack_rect[/* */] =
    {
        { 245, 106, 272, 106 },
        { 213, 106, 239, 106 }
    };

    // 0x801347DC
    syRectangle stage_select_rect[/* */] =
    {
        { 241, 135, 269, 135 },
        { 208, 135, 234, 135 }
    };

    s32 off_y;

    gDPPipeSync(gSYProgDLHeads[0]++);
    gDPSetCycleType(gSYProgDLHeads[0]++, G_CYC_FILL);
    gDPSetRenderMode(gSYProgDLHeads[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor(gSYProgDLHeads[0]++, syDisplayGetFillColor(GPACK_RGBA8888(0xFF, 0x00, 0x28, 0xFF)));

    switch (sMNVSOptionsOption)
    {
    case nMNVSOptionsOptionHandicap:
        off_y = (sMNVSOptionsIsHaveItemSwitch != FALSE) ? 0 : 4;

        gDPFillRectangle
        (
            gSYProgDLHeads[0]++,
            handicap_rect[sMNVSOptionsHandicapStatus].ulx,
            handicap_rect[sMNVSOptionsHandicapStatus].uly + off_y,
            handicap_rect[sMNVSOptionsHandicapStatus].lrx,
            handicap_rect[sMNVSOptionsHandicapStatus].lry + off_y
        );
        break;
        
    case nMNVSOptionsOptionTeamAttack:
        off_y = (sMNVSOptionsIsHaveItemSwitch != FALSE) ? 0 : 7;

        gDPFillRectangle
        (
            gSYProgDLHeads[0]++,
            team_attack_rect[sMNVSOptionsTeamAttackStatus].ulx,
            team_attack_rect[sMNVSOptionsTeamAttackStatus].uly + off_y,
            team_attack_rect[sMNVSOptionsTeamAttackStatus].lrx,
            team_attack_rect[sMNVSOptionsTeamAttackStatus].lry + off_y
        );
        break;
        
    case nMNVSOptionsOptionStageSelect:
        off_y = (sMNVSOptionsIsHaveItemSwitch != FALSE) ? 0 : 10;

        gDPFillRectangle
        (
            gSYProgDLHeads[0]++,
            stage_select_rect[sMNVSOptionsStageSelectStatus].ulx,
            stage_select_rect[sMNVSOptionsStageSelectStatus].uly + off_y,
            stage_select_rect[sMNVSOptionsStageSelectStatus].lrx,
            stage_select_rect[sMNVSOptionsStageSelectStatus].lry + off_y
        );
        break;
    }
    gDPPipeSync(gSYProgDLHeads[0]++);
    gDPSetRenderMode(gSYProgDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetCycleType(gSYProgDLHeads[0]++, G_CYC_1CYCLE);
    
    lbCommonClearExternSpriteParams();
}

// 0x80133300
void mnVSOptionsMakeUnderline(void)
{
    gcAddGObjDisplay(gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT), mnVSOptionsUnderlineProcDisplay, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
}

// 0x8013334C
void mnVSOptionsTintProcDisplay(GObj *gobj)
{
    gDPPipeSync(gSYProgDLHeads[0]++);
    gDPSetCycleType(gSYProgDLHeads[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gSYProgDLHeads[0]++, 0, 0, 0x0D, 0x00, 0x00, 0x99);
    gDPSetCombineMode(gSYProgDLHeads[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gSYProgDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gSYProgDLHeads[0]++, 10, 10, 310, 230);
    gDPPipeSync(gSYProgDLHeads[0]++);
    gDPSetRenderMode(gSYProgDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    
    lbCommonClearExternSpriteParams();
}

// 0x80133464
void mnVSOptionsMakeTint(void)
{
    gcAddGObjDisplay(gcMakeGObjSPAfter(0, NULL, 5, GOBJ_LINKORDER_DEFAULT), mnVSOptionsTintProcDisplay, 3, GOBJ_DLLINKORDER_DEFAULT, -1);
}

// 0x801334B0
void mnVSOptionsMakeDecal(void)
{
    GObj *gobj;
    SObj *sobj;
    
    gobj = gcMakeGObjSPAfter(0, NULL, 6, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 4, GOBJ_DLLINKORDER_DEFAULT, -1);
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSOptionsFiles[1], &lMNVSOptionsDecalN64Sprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0x4A;
    sobj->sprite.green = 0x2A;
    sobj->sprite.blue = 0x23;
    
    sobj->pos.x = 10.0F;
    sobj->pos.y = 10.0F;
}

// 0x80133558
void mnVSOptionsMakeTintCamera(void)
{
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            70,
            CAMERA_MASK_DLLINK(3),
            -1,
            FALSE,
            nOMObjProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801335F8
void mnVSOptionsMakeOptionCamera(void)
{
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            50,
            CAMERA_MASK_DLLINK(2),
            -1,
            FALSE,
            nOMObjProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133698
void mnVSOptionsMakeLabelUnderlineCamera(void)
{
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            40,
            CAMERA_MASK_DLLINK(1),
            -1,
            FALSE,
            nOMObjProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133738
void mnVSOptionsMakeWallpaperCamera(void)
{
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            80,
            CAMERA_MASK_DLLINK(0),
            -1,
            FALSE,
            nOMObjProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801337D8
void mnVSOptionsMakeDecalCamera(void)
{
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            1,
            NULL,
            1,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            60,
            CAMERA_MASK_DLLINK(4),
            -1,
            FALSE,
            nOMObjProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133878
void mnVSOptionsInitVars(void)
{
    sMNVSOptionsOption = (gSceneData.scene_previous == nSCKindVSItemSwitch) ? nMNVSOptionsOptionItemSwitch : nMNVSOptionsOptionHandicap;

    sMNVSOptionsHandicapStatus = gTransferBattleState.handicap_setting;
    sMNVSOptionsTeamAttackStatus = gTransferBattleState.is_team_attack;
    sMNVSOptionsStageSelectStatus = gTransferBattleState.is_stage_select;
    sMNVSOptionsDamage = gTransferBattleState.damage_ratio;
    
    sMNVSOptionsFirstAvailableOption = nMNVSOptionsOptionHandicap;
    
    if (mnVSOptionsCheckHaveItemSwitch() != FALSE)
    {
        sMNVSOptionsLastAvailableOption = nMNVSOptionsOptionItemSwitch;
        sMNVSOptionsIsHaveItemSwitch = TRUE;
    }
    else
    {
        sMNVSOptionsLastAvailableOption = nMNVSOptionsOptionDamage;
        sMNVSOptionsIsHaveItemSwitch = FALSE;
    }
    sMNVSOptionsOptionChangeWait = 0;
    
    sMNVSOptionsTotalTimeTics = 0;
    sMNVSOptionsReturnTic = sMNVSOptionsTotalTimeTics + I_MIN_TO_TICS(5);
}

// 0x8013394C
void mnVSOptionsSetAllSettings(void)
{
    gTransferBattleState.handicap_setting = sMNVSOptionsHandicapStatus;
    gTransferBattleState.is_team_attack = sMNVSOptionsTeamAttackStatus;
    gTransferBattleState.is_stage_select = sMNVSOptionsStageSelectStatus;
    gTransferBattleState.damage_ratio = sMNVSOptionsDamage;
    
    if (gTransferBattleState.handicap_setting == nSCBattleHandicapOff)
    {
        s32 i;

        for (i = 0; i < ARRAY_COUNT(gTransferBattleState.players); i++)
        {
            gTransferBattleState.players[i].handicap = FTCOMMON_HANDICAP_DEFAULT;
        }
    }
}

// 0x801339C4
void mnVSOptionsSetHandicapSettings(void)
{
    s32 i;
    
    if (sMNVSOptionsHandicapStatus == nSCBattleHandicapAuto)
    {
        for (i = 0; i < ARRAY_COUNT(gTransferBattleState.players); i++)
        {
            gTransferBattleState.players[i].handicap = 5;
        }
    }
    else for (i = 0; i < ARRAY_COUNT(gTransferBattleState.players); i++)
    {
        gTransferBattleState.players[i].handicap = FTCOMMON_HANDICAP_DEFAULT;
    }
}

// 0x80133A40
void mnVSOptionsProcRun(GObj *gobj)
{
    s32 unused;

    // 0x801347FC
    GObj **option_gobjs[/* */] =
    {
        &sMNVSOptionsOptionGObjs[nMNVSOptionsOptionHandicap],
        &sMNVSOptionsOptionGObjs[nMNVSOptionsOptionTeamAttack],
        &sMNVSOptionsOptionGObjs[nMNVSOptionsOptionStageSelect],
        &sMNVSOptionsOptionGObjs[nMNVSOptionsOptionDamage],
        &sMNVSOptionsOptionGObjs[nMNVSOptionsOptionItemSwitch]
    };
    
    s32 stick_range;
    sb32 is_button;
    
    sMNVSOptionsTotalTimeTics++;
    
    if (sMNVSOptionsTotalTimeTics >= 10)
    {
        if (sMNVSOptionsTotalTimeTics == sMNVSOptionsReturnTic)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindTitle;
            
            mnVSOptionsSetAllSettings();
            syProgSetLoadScene();
            return;
        }
        if (scSubsysControllerCheckNoInputAll() == FALSE)
        {
            sMNVSOptionsReturnTic = sMNVSOptionsTotalTimeTics + I_MIN_TO_TICS(5);
        }
        if (sMNVSOptionsOptionChangeWait != 0)
        {
            sMNVSOptionsOptionChangeWait--;
        }
        if
        (
            (scSubsysControllerGetPlayerStickInRangeLR(-20, 20) != FALSE)                                         &&
            (scSubsysControllerGetPlayerStickInRangeUD(-20, 20) != FALSE)                                         &&
            (scSubsysControllerGetPlayerHoldButtons(U_JPAD | R_JPAD | R_TRIG | U_CBUTTONS | R_CBUTTONS) == FALSE) &&
            (scSubsysControllerGetPlayerHoldButtons(D_JPAD | L_JPAD | L_TRIG | D_CBUTTONS | L_CBUTTONS) == FALSE)
        )
        {
            sMNVSOptionsOptionChangeWait = 0;
        }
        if ((scSubsysControllerGetPlayerTapButtons(A_BUTTON | START_BUTTON) != FALSE) && (sMNVSOptionsOption == nMNVSOptionsOptionItemSwitch))
        {
            func_800269C0_275C0(nSYAudioFGMMenuSelect);
            
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindVSItemSwitch;

            mnVSOptionsSetAllSettings();
            syProgSetLoadScene();
        }
        if (scSubsysControllerGetPlayerTapButtons(B_BUTTON) != FALSE)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindVSMode;

            mnVSOptionsSetAllSettings();
            syProgSetLoadScene();
        }
        if
        (
            mnVSOptionsCheckGetOptionButtonInput(is_button, U_JPAD | U_CBUTTONS) ||
            mnVSOptionsCheckGetOptionStickInputUD(stick_range, 20, 1)
        )
        {
            func_800269C0_275C0(nSYAudioFGMMenuScroll2);
        
            mnVSOptionsSetOptionChangeWaitP(is_button, stick_range, 7);
                
            mnVSOptionsSetOptionSpriteColors(*option_gobjs[sMNVSOptionsOption], nMNOptionTabStatusNot);
        
            if (sMNVSOptionsOption == sMNVSOptionsFirstAvailableOption)
            {
                sMNVSOptionsOption = sMNVSOptionsLastAvailableOption;
            }
            else sMNVSOptionsOption--;
                
            mnVSOptionsSetOptionSpriteColors(*option_gobjs[sMNVSOptionsOption], nMNOptionTabStatusHighlight);
        
            if (sMNVSOptionsOption == sMNVSOptionsFirstAvailableOption)
            {
                sMNVSOptionsOptionChangeWait += 8;
            }
            gcEjectGObj(D_801348F4_1280D4);
            func_ovl20_80132E58();
        }
        if
        (
            mnVSOptionsCheckGetOptionButtonInput(is_button, D_JPAD | D_CBUTTONS) ||
            mnVSOptionsCheckGetOptionStickInputUD(stick_range, -20, 0)
        )
        {
            func_800269C0_275C0(nSYAudioFGMMenuScroll2);
        
            mnVSOptionsSetOptionChangeWaitN(is_button, stick_range, 7);
                
            mnVSOptionsSetOptionSpriteColors(*option_gobjs[sMNVSOptionsOption], nMNOptionTabStatusNot);
        
            if (sMNVSOptionsOption == sMNVSOptionsLastAvailableOption)
            {
                sMNVSOptionsOption = sMNVSOptionsFirstAvailableOption;
            }
            else sMNVSOptionsOption++;
                
            mnVSOptionsSetOptionSpriteColors(*option_gobjs[sMNVSOptionsOption], nMNOptionTabStatusHighlight);
        
            if (sMNVSOptionsOption == sMNVSOptionsLastAvailableOption)
            {
                sMNVSOptionsOptionChangeWait += 8;
            }
            gcEjectGObj(D_801348F4_1280D4);
            func_ovl20_80132E58();
        }
        if
        (
            mnVSOptionsCheckGetOptionButtonInput(is_button, L_JPAD | L_TRIG | L_CBUTTONS) ||
            mnVSOptionsCheckGetOptionStickInputLR(stick_range, -20, 0)
        )
        {
            switch (sMNVSOptionsOption)
            {
            case nMNVSOptionsOptionHandicap:
                if (sMNVSOptionsHandicapStatus != nSCBattleHandicapOn)
                {
                    sMNVSOptionsHandicapStatus = (sMNVSOptionsHandicapStatus == nSCBattleHandicapOff) ? nSCBattleHandicapAuto : nSCBattleHandicapOn;

                    func_800269C0_275C0(nSYAudioFGMMenuScroll1);
                    gcEjectGObj(D_801348F4_1280D4);
                    func_ovl20_80132E58();
                    mnVSOptionsSetHandicapSettings();
                }
                mnVSOptionsSetHandicapSpriteColors(sMNVSOptionsOptionGObjs[nMNVSOptionsOptionHandicap], sMNVSOptionsHandicapStatus);
                mnVSOptionsSetOptionChangeWaitN(is_button, stick_range, 7);
                break;
                
            case nMNVSOptionsOptionTeamAttack:
                if (sMNVSOptionsTeamAttackStatus == nMNOptionTabStatusOff)
                {
                    sMNVSOptionsTeamAttackStatus = nMNOptionTabStatusOn;
                
                    func_800269C0_275C0(nSYAudioFGMMenuScroll1);
                    gcEjectGObj(D_801348F4_1280D4);
                    func_ovl20_80132E58();
                }
                mnVSOptionsSetToggleSpriteColors(sMNVSOptionsOptionGObjs[nMNVSOptionsOptionTeamAttack], sMNVSOptionsTeamAttackStatus);
                mnVSOptionsSetOptionChangeWaitN(is_button, stick_range, 7);
                break;
                
            case nMNVSOptionsOptionStageSelect:
                if (sMNVSOptionsStageSelectStatus == nMNOptionTabStatusOff)
                {
                    sMNVSOptionsStageSelectStatus = nMNOptionTabStatusOn;
                    
                    func_800269C0_275C0(nSYAudioFGMMenuScroll1);
                    gcEjectGObj(D_801348F4_1280D4);
                    func_ovl20_80132E58();
                }
                mnVSOptionsSetToggleSpriteColors(sMNVSOptionsOptionGObjs[nMNVSOptionsOptionStageSelect], sMNVSOptionsStageSelectStatus);
                mnVSOptionsSetOptionChangeWaitN(is_button, stick_range, 7);
                break;
                
            case nMNVSOptionsOptionDamage:
                func_800269C0_275C0(nSYAudioFGMMenuScroll1);
                
                if (sMNVSOptionsDamage == 50)
                {
                    sMNVSOptionsDamage = 200;
                }
                else sMNVSOptionsDamage--;
                    
                mnVSOptionsSetOptionChangeWaitN(is_button, stick_range, 14);
                
                if (sMNVSOptionsDamage == 50)
                {
                    sMNVSOptionsOptionChangeWait += 8;
                }
                gcEjectGObj(sMNVSOptionsDamageGObj);
                mnVSOptionsMakeDamageDigits();
                break;
            }
        }
        if
        (
            mnVSOptionsCheckGetOptionButtonInput(is_button, R_JPAD | R_TRIG | R_CBUTTONS) ||
            mnVSOptionsCheckGetOptionStickInputLR(stick_range, 20, 1)
        )
        {
            switch (sMNVSOptionsOption)
            {
            case nMNVSOptionsOptionHandicap:
                if (sMNVSOptionsHandicapStatus != nSCBattleHandicapOff)
                {
                    sMNVSOptionsHandicapStatus = (sMNVSOptionsHandicapStatus == nSCBattleHandicapOn) ? nSCBattleHandicapAuto : nSCBattleHandicapOff;

                    func_800269C0_275C0(nSYAudioFGMMenuScroll1);
                    gcEjectGObj(D_801348F4_1280D4);
                    func_ovl20_80132E58();
                    mnVSOptionsSetHandicapSettings();
                }
                mnVSOptionsSetHandicapSpriteColors(sMNVSOptionsOptionGObjs[nMNVSOptionsOptionHandicap], sMNVSOptionsHandicapStatus);
                mnVSOptionsSetOptionChangeWaitP(is_button, stick_range, 7);
                break;
                
            case nMNVSOptionsOptionTeamAttack:
                if (sMNVSOptionsTeamAttackStatus == nMNOptionTabStatusOn)
                {
                    sMNVSOptionsTeamAttackStatus = nMNOptionTabStatusOff;
                
                    func_800269C0_275C0(nSYAudioFGMMenuScroll1);
                    gcEjectGObj(D_801348F4_1280D4);
                    func_ovl20_80132E58();
                }
                mnVSOptionsSetToggleSpriteColors(sMNVSOptionsOptionGObjs[nMNVSOptionsOptionTeamAttack], sMNVSOptionsTeamAttackStatus);
                mnVSOptionsSetOptionChangeWaitP(is_button, stick_range, 7);
                break;
                
            case nMNVSOptionsOptionStageSelect:
                if (sMNVSOptionsStageSelectStatus == nMNOptionTabStatusOn)
                {
                    sMNVSOptionsStageSelectStatus = nMNOptionTabStatusOff;
                    
                    func_800269C0_275C0(nSYAudioFGMMenuScroll1);
                    gcEjectGObj(D_801348F4_1280D4);
                    func_ovl20_80132E58();
                }
                mnVSOptionsSetToggleSpriteColors(sMNVSOptionsOptionGObjs[nMNVSOptionsOptionStageSelect], sMNVSOptionsStageSelectStatus);
                mnVSOptionsSetOptionChangeWaitP(is_button, stick_range, 7);
                break;
                
            case nMNVSOptionsOptionDamage:
                if (sMNVSOptionsDamage == 200)
                {
                    sMNVSOptionsDamage = 50;
                }
                else sMNVSOptionsDamage++;
                    
                mnVSOptionsSetOptionChangeWaitP(is_button, stick_range, 14);
                
                if (sMNVSOptionsDamage == 200)
                {
                    sMNVSOptionsOptionChangeWait += 8;
                }
                func_800269C0_275C0(nSYAudioFGMMenuScroll1);
                gcEjectGObj(sMNVSOptionsDamageGObj);
                mnVSOptionsMakeDamageDigits();
                break;
            }
        }
        if (scSubsysControllerGetPlayerTapButtons(A_BUTTON) != FALSE)
        {
            switch (sMNVSOptionsOption)
            {
            case nMNVSOptionsOptionHandicap:
                func_800269C0_275C0(nSYAudioFGMMenuScroll1);
                
                if (sMNVSOptionsHandicapStatus == nSCBattleHandicapOff)
                {
                    sMNVSOptionsHandicapStatus = nSCBattleHandicapOn;
                } 
                else if (sMNVSOptionsHandicapStatus == nSCBattleHandicapAuto)
                {
                    sMNVSOptionsHandicapStatus = nSCBattleHandicapOff;
                }
                else sMNVSOptionsHandicapStatus = nSCBattleHandicapAuto;
                
                mnVSOptionsSetHandicapSpriteColors(sMNVSOptionsOptionGObjs[nMNVSOptionsOptionHandicap], sMNVSOptionsHandicapStatus);
                gcEjectGObj(D_801348F4_1280D4);
                func_ovl20_80132E58();
                mnVSOptionsSetHandicapSettings();
                break;
                
            case nMNVSOptionsOptionTeamAttack:
                func_800269C0_275C0(nSYAudioFGMMenuScroll1);
                sMNVSOptionsTeamAttackStatus = (sMNVSOptionsTeamAttackStatus == nMNOptionTabStatusOn) ? nMNOptionTabStatusOff : nMNOptionTabStatusOn;
                
                mnVSOptionsSetToggleSpriteColors(sMNVSOptionsOptionGObjs[nMNVSOptionsOptionTeamAttack], sMNVSOptionsTeamAttackStatus);
                gcEjectGObj(D_801348F4_1280D4);
                func_ovl20_80132E58();
                break;
                
            case nMNVSOptionsOptionStageSelect:
                func_800269C0_275C0(nSYAudioFGMMenuScroll1);
                sMNVSOptionsStageSelectStatus = (sMNVSOptionsStageSelectStatus == nMNOptionTabStatusOn) ? nMNOptionTabStatusOff : nMNOptionTabStatusOn;

                mnVSOptionsSetToggleSpriteColors(sMNVSOptionsOptionGObjs[nMNVSOptionsOptionStageSelect], sMNVSOptionsStageSelectStatus);
                gcEjectGObj(D_801348F4_1280D4);
                func_ovl20_80132E58();
                break;
            }
        }
    }
}

// 0x80134504
void mnVSOptionsProcStart(void)
{
    lbRelocSetup rl_setup;

    rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
    rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
    rl_setup.file_heap = NULL;
    rl_setup.file_heap_size = 0;
    rl_setup.status_buffer = sMNVSOptionsStatusBuffer;
    rl_setup.status_buffer_size = ARRAY_COUNT(sMNVSOptionsStatusBuffer);
    rl_setup.force_status_buffer = NULL;
    rl_setup.force_status_buffer_size = 0;
    
    lbRelocInitSetup(&rl_setup);
    lbRelocLoadFilesExtern
    (
        dMNVSOptionsFileIDs,
        ARRAY_COUNT(dMNVSOptionsFileIDs),
        sMNVSOptionsFiles,
        syProgMalloc
        (
            lbRelocGetAllocSize
            (
                dMNVSOptionsFileIDs,
                ARRAY_COUNT(dMNVSOptionsFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, mnVSOptionsProcRun, 0, GOBJ_LINKORDER_DEFAULT);
    gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0, GPACK_RGBA8888(0x00, 0x00, 0x00, 0x00));
    
    mnVSOptionsInitVars();
    mnVSOptionsMakeWallpaperCamera();
    mnVSOptionsMakeLabelUnderlineCamera();
    mnVSOptionsMakeOptionCamera();
    mnVSOptionsMakeTintCamera();
    mnVSOptionsMakeDecalCamera();
    mnVSOptionsMakeWallpaper();
    mnVSOptionsMakeTint();
    mnVSOptionsMakeDecal();
    mnVSOptionsMakeLabel();
    mnVSOptionsMakeHandicapOption();
    mnVSOptionsMakeTeamAttackOption();
    mnVSOptionsMakeStageSelectOption();
    mnVSOptionsMakeDamageOption();
    mnVSOptionsMakeDamageDigits();
    
    if (sMNVSOptionsIsHaveItemSwitch != FALSE)
    {
        mnVSOptionsMakeItemSwitchOption();
    }
    mnVSOptionsMakeUnderline();
    func_ovl20_80132E58();
}

// 0x80134810
syDisplaySetup dMNVSOptionsDisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x8013482C
scRuntimeInfo dMNVSOptionsGtlSetup =
{
    0x00000000,
    func_8000A5E4,
    func_8000A340,
    &ovl20_BSS_END,
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
    mnVSOptionsProcLights,
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
    mnVSOptionsProcStart
};

// 0x80134668
void mnVSOptionsStartScene(void)
{
    dMNVSOptionsDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);
    func_80007024(&dMNVSOptionsDisplaySetup);
    
    dMNVSOptionsGtlSetup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl20_BSS_END);
    syProgInit(&dMNVSOptionsGtlSetup);
}
