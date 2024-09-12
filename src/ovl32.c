#include <debug.h>
#include <ft/fighter.h>
#include <sc/scene.h>
#include <sys/system_00.h>
#include <ovl0/reloc_data_mgr.h>

#include "ovl32.h"

// Externs
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

// Offsets
extern intptr_t FILE_01F_QUESTION_MARK_IMAGE_OFFSET;
extern intptr_t FILE_01F_TOTAL_TEXTURE_IMAGE_OFFSET;
extern intptr_t FILE_01F_DECIMAL_POINT_IMAGE_OFFSET;
extern intptr_t FILE_01F_SLASH_IMAGE_OFFSET;
extern intptr_t FILE_01F_SUBTITLE_BATTLE_SCORE_IMAGE_OFFSET;
extern intptr_t FILE_01F_DOUBLE_DOWN_ARROW_IMAGE_OFFSET;
extern intptr_t FILE_01F_LEFT_AND_RIGHT_ARROW_IMAGE_OFFSET;
extern intptr_t FILE_01F_PORTRAIT_BACKGROUND_IMAGE_OFFSET;
extern intptr_t FILE_01F_VS_RECORD_IMAGE_OFFSET;
extern intptr_t FILE_01F_COLON_IMAGE_OFFSET;
extern intptr_t FILE_020_DATA_HEADER_IMAGE_OFFSET;
extern intptr_t FILE_020_ARROW_LEFT_IMAGE_OFFSET;
extern intptr_t FILE_020_ARROW_RIGHT_IMAGE_OFFSET;

extern void func_80007080(void*, f32, f32, f32, f32);


// Forward declarations
s32 mnVsRecordsIsUnlocked(s32 ft_kind);
s32 mnVsRecordsGetCharIndex(u8);
f32 mnVsRecordsGetUsePercentage(s32 ft_kind);
f32 mnVsRecordsGetAverage(s32 ft_kind);
f32 mnVsRecordsGetSDPercentage(s32 ft_kind);
f32 mnVsRecordsGetWinPercentageAgainst(s32 ft_kind, s32 ft_kind_opponent);


// DATA
// 80136630
s32 dMNVsRecordsRankingColumnWidths[7] = {

	33, 33, 33, 33, 46, 35, 34
};

// 8013664C
rdFileID D_ovl32_8013664C[4] = {

	0x1f, 0x20, 0x13, 0x21
};

// 80136660
Lights1 dMNVsRecordsLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 80136678
Gfx dMNVsRecordsDisplayList[] = {

	gsSPSetGeometryMode(G_LIGHTING),
	gsSPSetLights1(dMNVsRecordsLights1),
	gsSPEndDisplayList()
};


// BSS
// 80136C10
s32 D_ovl32_80136C10[2];

// 80136C18
s32 gMNVsRecordsStatsKind;

// 80136C1C
sb32 gMNVsRecordsRedrawSubtitle;

// 80136C20
GObj* gMNVsRecordsTableHeadersGObj;

// 80136C24
GObj* gMNVsRecordsTableValuesGObj;

// 80136C28
s32 gMNVsRecordsBattleScoreFtKindOrder[12];

// 80136C58
s32 gMNVsRecordsRankingFtKindOrder[12];

// 80136C88
s32 gMNVsRecordsIndividualFtKindOrder[12];

// 80136CB8
s32 gMNVsRecordsCurrentIndex;

// 80136CBC
u16 gMNVsRecordsUnlockedMask;

// 80136CC0
s32 gMNVsRecordsFirstColumn;

// 80136CC4
s32 gMNVsRecordsChangeWait;

// 80136CC8
u32 D_ovl32_80136CC8[6];

// 80136CE0
u32 D_ovl32_80136CE0[42]; // unknown

// 80136D88
s32 gMNVsRecordsFilesArray[4];


// 80131B00
void mnVsRecordsSetLighting(Gfx **display_list)
{
	gSPDisplayList(display_list[0]++, dMNVsRecordsDisplayList);
}

// 80131B24
s32 mnVsRecordsGetFtKindByIndex(s32 index)
{
	s32 ftKinds[12] = {

		nFTKindMario,
		nFTKindDonkey,
		nFTKindLink,
		nFTKindSamus,
		nFTKindYoshi,
		nFTKindKirby,
		nFTKindFox,
		nFTKindPikachu,
		nFTKindLuigi,
		nFTKindCaptain,
		nFTKindNess,
		nFTKindPurin
	};
	return ftKinds[index];
}

// 80131B74
s32 mnVsRecordsGetKOs(s32 ft_kind)
{
	s32 i;
	s32 total_kos = 0;

	for (i = 0; i < 12; i++)
	{
		if (mnVsRecordsIsUnlocked(i))
			total_kos += gSaveData.vs_records[ft_kind].ko_count[i];
	}
	return total_kos;
}

// 80131C0C
s32 mnVsRecordsGetTKOs(s32 ft_kind)
{
	s32 i;
	s32 total_tkos = 0;

	for (i = 0; i < 12; i++)
	{
		if (mnVsRecordsIsUnlocked(i))
			total_tkos += gSaveData.vs_records[i].ko_count[ft_kind];
	}

	if (gSaveData.vs_records[ft_kind].self_destructs + total_tkos > 9999)
		return 9999;

	return gSaveData.vs_records[ft_kind].self_destructs + total_tkos;
}

// 80131CD4
s32 mnVsRecordsGetTotalTKOs()
{
	s32 i;
	s32 total_tkos = 0;

	for (i = 0; i < 12; i++)
	{
		if (mnVsRecordsIsUnlocked(i))
			total_tkos += mnVsRecordsGetTKOs(i);
	}

	return total_tkos;
}

// 80131D38
f32 mnVsRecordsGetWinPercentage(s32 ft_kind)
{
	f32 kos = mnVsRecordsGetKOs(ft_kind);
	f32 tkos = mnVsRecordsGetTotalTKOs();

	return ((tkos != 0.0f) ? kos / tkos : 0.0f) * 100.0f;
}

// 80131DA0
s32 mnVsRecordsPow(s32 num, s32 pow)
{
	if (pow == 0)
		return 1;
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

// 80131E40
void mnVsRecordsSetTextureColors(SObj* sobj, u32 colors[])
{
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->env_color.r = (u8) colors[0];
	sobj->env_color.g = (u8) colors[1];
	sobj->env_color.b = (u8) colors[2];
	sobj->sprite.red = (u8) colors[3];
	sobj->sprite.green = (u8) colors[4];
	sobj->sprite.blue = (u8) colors[5];
}

// 80131E88
s32 mnVsRecordsGetNumberOfDigits(s32 num, s32 maxDigits)
{
	s32 numDigits;

	for (numDigits = maxDigits; numDigits > 0; numDigits--)
	{
		if (mnVsRecordsPow(10, numDigits - 1) != 0 ? num / mnVsRecordsPow(10, numDigits - 1) : 0 != 0)
			return numDigits;
	}

	return 0;
}

// 80131F34
void mnVsRecordsCreateNumber(GObj* number_gobj, s32 num, f32 x, f32 y, s32 colors[], sb32 showTenths, sb32 wide, s32 maxDigits, sb32 pad)
{
	intptr_t number_offsets[10] = {

		0x2F0, 0x390, 0x430, 0x4D0, 0x570,
		0x610, 0x6B0, 0x750, 0x7F0, 0x890
	};
	SObj* number_sobj;
	f32 left_x = x;
	s32 place;
	s32 numDigits;
	s32 digit;

	if (num < 0) num = 0;

	if (showTenths && num == 1000)
	{
		showTenths = FALSE;
		num = num / 10;
	}

	if (showTenths)
	{
		s32 decimal = num % 10;
		num = num / 10;

		number_sobj = lbCommonMakeSObjForGObj(number_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], number_offsets[decimal]));
		mnVsRecordsSetTextureColors(number_sobj, colors);

		if (wide)
			left_x -= 5.0f;
		else
			left_x -= 4.0f;

		number_sobj->pos.x = left_x;
		number_sobj->pos.y = y;

		number_sobj = lbCommonMakeSObjForGObj(number_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], &FILE_01F_DECIMAL_POINT_IMAGE_OFFSET));
		mnVsRecordsSetTextureColors(number_sobj, colors);

		if (wide)
			left_x -= 3.0f;
		else
			left_x -= 2.0f;

		number_sobj->pos.x = left_x;
		number_sobj->pos.y = y + 4.0f;
	}

	number_sobj = lbCommonMakeSObjForGObj(number_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], number_offsets[num % 10]));
	mnVsRecordsSetTextureColors(number_sobj, colors);

	if (wide)
		left_x -= 5.0f;
	else
		left_x -= 4.0f;

	number_sobj->pos.x = left_x;
	number_sobj->pos.y = y;

	for
	(
		place = 1, numDigits = (pad) ? maxDigits : mnVsRecordsGetNumberOfDigits(num, maxDigits);
		place < numDigits;
		place++, numDigits = (pad) ? maxDigits : mnVsRecordsGetNumberOfDigits(num, maxDigits)
	)
	{
		digit = (mnVsRecordsPow(10, place) != 0) ? num / mnVsRecordsPow(10, place) : 0;

		number_sobj = lbCommonMakeSObjForGObj(number_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], number_offsets[digit % 10]));
		mnVsRecordsSetTextureColors(number_sobj, colors);

		if (wide)
			left_x -= 5.0f;
		else
			left_x -= 4.0f;

		number_sobj->pos.x = left_x;
		number_sobj->pos.y = y;
	}
}

// 8013232C
s32 mnVsRecordsGetCharIndex(char chr)
{
	switch (chr)
	{
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
				return 0x1D;
			else
				return chr - 'A';
	}
}

// 801323A4
f32 mnVsRecordsGetChrSpacing(const char *s, s32 c)
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

// 801324C8
void mnVsRecordsDrawString(GObj* gobj, const char *str, f32 x, f32 y, s32 color[3])
{
	intptr_t chrOffsets[29] = {

		0x040, 0x0D0, 0x160, 0x1F0, 0x280, 0x310,
		0x3A0, 0x430, 0x4C0, 0x550, 0x5E0, 0x670,
		0x700, 0x790, 0x820, 0x8B0, 0x940, 0x9D0,
		0xA60, 0xAF0, 0xB80, 0xC10, 0xCA0, 0xD30,
		0xDC0, 0xE50, 0xED0, 0xF60, 0xFD0
	};
	SObj* chr_sobj;
	f32 start_x = x;
	s32 i;

	for (i = 0; str[i] != 0; i++)
	{
		if (((((str[i] >= '0') && (str[i] <= '9')) ? TRUE : FALSE)) || (str[i] == ' '))
		{
			if (str[i] == ' ')
				start_x += 4.0f;
			else
				start_x += str[i] - '0';
		}
		else
		{
			chr_sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[3], chrOffsets[mnVsRecordsGetCharIndex(str[i])]));
			chr_sobj->pos.x = start_x;

			start_x += chr_sobj->sprite.width + mnVsRecordsGetChrSpacing(str, i);

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

// 801326EC
s32 mnVsRecordsIsUnlocked(s32 ft_kind)
{
	switch (ft_kind)
	{
		case nFTKindNess:
			return (gMNVsRecordsUnlockedMask & gmSaveChrMask(nFTKindNess)) ? TRUE : FALSE;
		case nFTKindPurin:
			return (gMNVsRecordsUnlockedMask & gmSaveChrMask(nFTKindPurin)) ? TRUE : FALSE;
		case nFTKindCaptain:
			return (gMNVsRecordsUnlockedMask & gmSaveChrMask(nFTKindCaptain)) ? TRUE : FALSE;
		case nFTKindLuigi:
			return (gMNVsRecordsUnlockedMask & gmSaveChrMask(nFTKindLuigi)) ? TRUE : FALSE;
		default:
			return TRUE;
	}
}

// 801327B8
void mnVsRecordsCreateTitle()
{
	GObj* title_gobj;
	SObj* title_sobj;

	title_gobj = gcMakeGObjSPAfter(0, 0, 2, 0x80000000);
	gcAddGObjDisplay(title_gobj, lbCommonDrawSObjAttr, 1, 0x80000000, -1);

	title_sobj = lbCommonMakeSObjForGObj(title_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[1], &FILE_020_DATA_HEADER_IMAGE_OFFSET));
	title_sobj->sprite.attr &= ~SP_FASTCOPY;
	title_sobj->sprite.attr |= SP_TRANSPARENT;
	title_sobj->sprite.red = 0x5F;
	title_sobj->sprite.green = 0x58;
	title_sobj->sprite.blue = 0x46;
	title_sobj->pos.x = 24.0f;
	title_sobj->pos.y = 17.0f;

	title_sobj = lbCommonMakeSObjForGObj(title_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], &FILE_01F_VS_RECORD_IMAGE_OFFSET));
	title_sobj->sprite.attr &= ~SP_FASTCOPY;
	title_sobj->sprite.attr |= SP_TRANSPARENT;
	title_sobj->env_color.r = 0;
	title_sobj->env_color.g = 0;
	title_sobj->env_color.b = 0;
	title_sobj->sprite.red = 0xF2;
	title_sobj->sprite.green = 0xC7;
	title_sobj->sprite.blue = 0xD;
	title_sobj->pos.x = 99.0f;
	title_sobj->pos.y = 23.0f;
}

// 801328D4
void mnVsRecordsRenderSubtitle(GObj* subtitle_gobj)
{
	SObj* subtitle_sobj;
	intptr_t offsets[4] = {

		&FILE_01F_SUBTITLE_BATTLE_SCORE_IMAGE_OFFSET, 0x1458, 0x1318, 0
	};

	if (gMNVsRecordsRedrawSubtitle)
	{
		gcRemoveSObjAll(subtitle_gobj);

		subtitle_sobj = lbCommonMakeSObjForGObj(subtitle_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], offsets[gMNVsRecordsStatsKind]));
		subtitle_sobj->sprite.attr &= ~SP_FASTCOPY;
		subtitle_sobj->sprite.attr |= SP_TRANSPARENT;
		subtitle_sobj->sprite.red = 0;
		subtitle_sobj->sprite.green = 0;
		subtitle_sobj->sprite.blue = 0;
		subtitle_sobj->pos.x = 222.0f;
		subtitle_sobj->pos.y = 28.0f;
	}
}

// 80132994
void mnVsRecordsCreateSubtitle()
{
	GObj* subtitle_gobj;
	SObj* subtitle_sobj;

	subtitle_gobj = gcMakeGObjSPAfter(0, 0, 2, 0x80000000);
	gcAddGObjDisplay(subtitle_gobj, lbCommonDrawSObjAttr, 1, 0x80000000, -1);
	gcAddGObjProcess(subtitle_gobj, mnVsRecordsRenderSubtitle, 1, 1);

	subtitle_sobj = lbCommonMakeSObjForGObj(subtitle_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], &FILE_01F_SUBTITLE_BATTLE_SCORE_IMAGE_OFFSET));
	subtitle_sobj->sprite.attr &= ~SP_FASTCOPY;
	subtitle_sobj->sprite.attr |= SP_TRANSPARENT;
	subtitle_sobj->sprite.red = 0;
	subtitle_sobj->sprite.green = 0;
	subtitle_sobj->sprite.blue = 0;
	subtitle_sobj->pos.x = 222.0f;
	subtitle_sobj->pos.y = 28.0f;
}

// 80132A50
void mnVsRecordsUpdatePortraitArrowsDisplay(GObj* portrait_arrows_gobj)
{
	portrait_arrows_gobj->flags = (gMNVsRecordsStatsKind == vsRecordsKindIndividual) ? 0 : 1;
}

// 80132A7C
void mnVsRecordsCreatePortraitAndStatsArrows()
{
	GObj* portrait_arrows_gobj;
	SObj* portrait_arrows_sobj;

	portrait_arrows_gobj = gcMakeGObjSPAfter(0, 0, 2, 0x80000000);
	gcAddGObjDisplay(portrait_arrows_gobj, lbCommonDrawSObjAttr, 1, 0x80000000, -1);
	gcAddGObjProcess(portrait_arrows_gobj, mnVsRecordsUpdatePortraitArrowsDisplay, 1, 1);

	// left arrow
	portrait_arrows_sobj = lbCommonMakeSObjForGObj(portrait_arrows_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[1], &FILE_020_ARROW_LEFT_IMAGE_OFFSET));
	portrait_arrows_sobj->sprite.attr &= ~SP_FASTCOPY;
	portrait_arrows_sobj->sprite.attr |= SP_TRANSPARENT;
	portrait_arrows_sobj->sprite.red = 0xE3;
	portrait_arrows_sobj->sprite.green = 0x7D;
	portrait_arrows_sobj->sprite.blue = 0xC;
	portrait_arrows_sobj->pos.x = 40.0f;
	portrait_arrows_sobj->pos.y = 78.0f;

	// right arrow
	portrait_arrows_sobj = lbCommonMakeSObjForGObj(portrait_arrows_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[1], &FILE_020_ARROW_RIGHT_IMAGE_OFFSET));
	portrait_arrows_sobj->sprite.attr &= ~SP_FASTCOPY;
	portrait_arrows_sobj->sprite.attr |= SP_TRANSPARENT;
	portrait_arrows_sobj->sprite.red = 0xE3;
	portrait_arrows_sobj->sprite.green = 0x7D;
	portrait_arrows_sobj->sprite.blue = 0xC;
	portrait_arrows_sobj->pos.x = 105.0f;
	portrait_arrows_sobj->pos.y = 78.0f;
}

// 80132BA4
void mnVsRecordsUpdateResortArrowsDisplay(GObj* resort_arrows_gobj)
{
	resort_arrows_gobj->flags = ((gMNVsRecordsStatsKind == vsRecordsKindBattleScore) || (gMNVsRecordsStatsKind == vsRecordsKindRanking)) ? 0 : 1;
}

// 80132BD4
void mnVsRecordsCreateResortArrows()
{
	GObj* resort_arrows_gobj;
	SObj* resort_arrows_sobj;

	resort_arrows_gobj = gcMakeGObjSPAfter(0, 0, 2, 0x80000000);
	gcAddGObjDisplay(resort_arrows_gobj, lbCommonDrawSObjAttr, 1, 0x80000000, -1);
	gcAddGObjProcess(resort_arrows_gobj, mnVsRecordsUpdateResortArrowsDisplay, 1, 1);

	resort_arrows_sobj = lbCommonMakeSObjForGObj(resort_arrows_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], &FILE_01F_DOUBLE_DOWN_ARROW_IMAGE_OFFSET));
	resort_arrows_sobj->sprite.attr &= ~SP_FASTCOPY;
	resort_arrows_sobj->sprite.attr |= SP_TRANSPARENT;
	resort_arrows_sobj->pos.x = 281.0f;
	resort_arrows_sobj->pos.y = 39.0f;
	resort_arrows_sobj->sprite.red = 0xE3;
	resort_arrows_sobj->sprite.green = 0x7D;
	resort_arrows_sobj->sprite.blue = 0xC;
}

// 80132C9C
void mnVsRecordsUpdateColumnArrowsDisplay(GObj* column_arrows_gobj)
{
	column_arrows_gobj->flags = (gMNVsRecordsStatsKind == vsRecordsKindRanking) ? 0 : 1;
}

// 80132CC8
void mnVsRecordsCreateColumnArrows()
{
	GObj* column_arrows_gobj;
	SObj* column_arrows_sobj;

	column_arrows_gobj = gcMakeGObjSPAfter(0, 0, 2, 0x80000000);
	gcAddGObjDisplay(column_arrows_gobj, lbCommonDrawSObjAttr, 1, 0x80000000, -1);
	gcAddGObjProcess(column_arrows_gobj, mnVsRecordsUpdateColumnArrowsDisplay, 1, 1);

	column_arrows_sobj = lbCommonMakeSObjForGObj(column_arrows_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], &FILE_01F_LEFT_AND_RIGHT_ARROW_IMAGE_OFFSET));
	column_arrows_sobj->sprite.attr &= ~SP_FASTCOPY;
	column_arrows_sobj->sprite.attr |= SP_TRANSPARENT;
	column_arrows_sobj->sprite.red = 0xE3;
	column_arrows_sobj->sprite.green = 0x7D;
	column_arrows_sobj->sprite.blue = 0xC;
	column_arrows_sobj->pos.x = 25.0f;
	column_arrows_sobj->pos.y = 47.0f;
}

// 80132D90
void mnVsRecordsRenderBattleScoreGrid()
{
	s32 i;

	for (i = 0; i < 14; i++)
		gDPFillRectangle(gDisplayListHead[0]++, 24, 48 + i * 13, 295, 48 + i * 13);

	gDPFillRectangle(gDisplayListHead[0]++, 24, 48, 24, 217);

	for (i = 0; i < 14; i += 1)
	{
		if (i == 13)
		{
			gDPFillRectangle(gDisplayListHead[0]++, i * 18 + 61, 48, i * 18 + 61, 217);
		}
		else
			gDPFillRectangle(gDisplayListHead[0]++, i * 18 + 48, 48, i * 18 + 48, 217);
	}
}

// 80132EE4
void mnVsRecordsRenderRankingGrid(s32 first_column)
{
	s32 x;
	s32 indexes[ARRAY_COUNT(dMNVsRecordsRankingColumnWidths)];
	s32 i;

	for (i = 0; i < ARRAY_COUNT(indexes); i++)
	{
		if (first_column >= ARRAY_COUNT(dMNVsRecordsRankingColumnWidths))
			first_column -= ARRAY_COUNT(dMNVsRecordsRankingColumnWidths);

		indexes[i] = first_column++;
	}
	gDPFillRectangle(gDisplayListHead[0]++, 24, 46, 295, 46);

	for (i = 0; i < 13; i++)
		gDPFillRectangle(gDisplayListHead[0]++, 24, 61 + i * 13, 295, 61 + i * 13);

	gDPFillRectangle(gDisplayListHead[0]++, 24, 46, 24, 217);

	x = 48;

	for(i = 0; i < ARRAY_COUNT(indexes) + 1; i++)
	{
		gDPFillRectangle(gDisplayListHead[0]++, x, 46, x, 217);

		if (i < ARRAY_COUNT(indexes))
			x += dMNVsRecordsRankingColumnWidths[indexes[i]];
	}
}

// 801330FC
void mnVsRecordsRenderIndividualGrid()
{
	s32 i;

	gDPFillRectangle(gDisplayListHead[0]++, 26, 144, 293, 144);

	for (i = 0; i < 5; i++)
		gDPFillRectangle(gDisplayListHead[0]++, 26, 157 + i * 12, 293, 157 + i * 12);

	gDPFillRectangle(gDisplayListHead[0]++, 26, 144, 26, 205);

	for (i = 0; i < 13; i++)
		gDPFillRectangle(gDisplayListHead[0]++, 65 + i * 19, 144, 65 + i * 19, 205);
}

// 8013328C
void mnVsRecordsRenderTableGrid(GObj* table_border_gobj)
{
	s32 unused;

	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
	gDPSetFillColor(gDisplayListHead[0]++, syDisplayGetFillColor(0x62626AFF));

	switch (gMNVsRecordsStatsKind)
	{
		case vsRecordsKindBattleScore:
			mnVsRecordsRenderBattleScoreGrid();
			break;
		case vsRecordsKindRanking:
			mnVsRecordsRenderRankingGrid(gMNVsRecordsFirstColumn);
			break;
		case vsRecordsKindIndividual:
			mnVsRecordsRenderIndividualGrid();
			break;
	}

	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);

	lbCommonClearExternSpriteParams();
}

// 801333EC
void mnVsRecordsCreateStatsGrid()
{
	GObj* table_border_gobj = gcMakeGObjSPAfter(0, 0, 2, 0x80000000);
	gcAddGObjDisplay(table_border_gobj, mnVsRecordsRenderTableGrid, 3, 0x80000000, -1);
}

// 80133438
void mnVsRecordsSetIconPositionForColumn(SObj* icon_sobj, s32 column)
{
	f32 x;
	f32 y;
	s32 ft_kind;
	s32 col_width;
	Vec2f offsets[12] = {

		{ 1.0f, -5.0f }, { 1.0f, -6.0f }, { 0.0f, -6.0f }, { 0.0f, -4.0f },
		{ 1.0f, -6.0f }, { 0.0f, -5.0f }, { 1.0f, -5.0f }, { 0.0f, -3.0f },
		{ 0.0f,  1.0f }, { 0.0f, -5.0f }, { 0.0f, -1.0f }, { 0.0f, -2.0f }
	};

	switch (gMNVsRecordsStatsKind)
	{
		case vsRecordsKindBattleScore:
			col_width = 18;
			x = 49.0f;
			y = 49.0f;
			ft_kind = gMNVsRecordsBattleScoreFtKindOrder[column];
			break;
		case vsRecordsKindIndividual:
			col_width = 19;
			x = 66.0f;
			y = 145.0f;
			ft_kind = gMNVsRecordsIndividualFtKindOrder[column];
			break;
	}

	if (mnVsRecordsIsUnlocked(ft_kind))
	{
		icon_sobj->pos.x = x + (col_width * column) + offsets[ft_kind].x;
		icon_sobj->pos.y = y + offsets[ft_kind].y;
	}
	else {
		icon_sobj->pos.x = x + (col_width * column) + 5.0f;
		icon_sobj->pos.y = y;
	}
}

// 801335A0
SObj* mnVsRecordsCreateLockedIcon(GObj* icon_gobj)
{
	SObj* icon_sobj;

	icon_sobj = lbCommonMakeSObjForGObj(icon_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], &FILE_01F_QUESTION_MARK_IMAGE_OFFSET));
	icon_sobj->sprite.attr &= ~SP_FASTCOPY;
	icon_sobj->sprite.attr |= SP_TRANSPARENT;
	icon_sobj->sprite.red = 0x8A;
	icon_sobj->sprite.green = 0x88;
	icon_sobj->sprite.blue = 0x92;

	return icon_sobj;
}

// 801335FC
void mnVsRecordsCreateColumnIcons(s32 icon_gobj)
{
	intptr_t offsets[12] = {

		0x1918, 0x1A98, 0x1CA8, 0x1E88,
		0x2008, 0x2370, 0x2178, 0x2540,
		0x2930, 0x2B30, 0x27C8, 0x2698
	};
	s32 i;
	SObj* icon_sobj;
	s32* ft_kinds;

	switch (gMNVsRecordsStatsKind)
	{
		case vsRecordsKindBattleScore:
			ft_kinds = &gMNVsRecordsBattleScoreFtKindOrder;
			break;
		case vsRecordsKindIndividual:
			ft_kinds = &gMNVsRecordsIndividualFtKindOrder;
			break;
	}

	for (i = 0; i < ARRAY_COUNT(offsets); i++)
	{
		if (mnVsRecordsIsUnlocked(ft_kinds[i]))
		{
			icon_sobj = lbCommonMakeSObjForGObj(icon_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], offsets[ft_kinds[i]]));
			icon_sobj->sprite.attr &= ~SP_FASTCOPY;
			icon_sobj->sprite.attr |= SP_TRANSPARENT;
		}
		else
			icon_sobj = mnVsRecordsCreateLockedIcon(icon_gobj);

		mnVsRecordsSetIconPositionForColumn(icon_sobj, i);
	}
}

// 80133740
void mnVsRecordsSetIconPositionForRow(SObj* icon_sobj, s32 row)
{
	f32 x = 25.0f;
	f32 y = 62.0f;
	s32 ft_kind;
	Vec2f offsets[12] = {

		{ 5.0f, 0.0f }, { 5.0f, 0.0f }, { 0.0f, 0.0f }, { 0.0f, 0.0f },
		{ 3.0f, 0.0f }, { 5.0f, 0.0f }, { 5.0f, 0.0f }, { 1.0f, 0.0f },
		{ 0.0f, 1.0f }, { 0.0f, 0.0f }, { 4.0f, 0.0f }, { 3.0f, 0.0f }
	};

	switch (gMNVsRecordsStatsKind)
	{
		case vsRecordsKindBattleScore:
			ft_kind = gMNVsRecordsBattleScoreFtKindOrder[row];
			break;
		case vsRecordsKindRanking:
			ft_kind = gMNVsRecordsRankingFtKindOrder[row];
			break;
	}

	if (mnVsRecordsIsUnlocked(ft_kind))
	{
		icon_sobj->pos.x = x + offsets[ft_kind].x;
		icon_sobj->pos.y = y + (row * 13) + offsets[ft_kind].y;
	}
	else
	{
		icon_sobj->pos.x = x + 8.0f;
		icon_sobj->pos.y = y + (row * 13);
	}
}

// 8013388C
void mnVsRecordsCreateRowIcons(GObj* icon_gobj)
{
	intptr_t offsets[12] = {

		0x2D18, 0x2EF8, 0x3198, 0x3438,
		0x3618, 0x3A38, 0x37F8, 0x3CD8,
		0x4308, 0x45A8, 0x4098, 0x3EB8
	};
	s32 i;
	SObj* icon_sobj;
	s32* ft_kinds;
	s32 foo;

	switch (gMNVsRecordsStatsKind)
	{
		case vsRecordsKindBattleScore:
			ft_kinds = &gMNVsRecordsBattleScoreFtKindOrder;
			break;
		case vsRecordsKindRanking:
			ft_kinds = &gMNVsRecordsRankingFtKindOrder;
			break;
	}

	for (i = 0; i < ARRAY_COUNT(offsets); i++)
	{
		if (mnVsRecordsIsUnlocked(ft_kinds[i]))
		{
			icon_sobj = lbCommonMakeSObjForGObj(icon_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], offsets[ft_kinds[i]]));
			icon_sobj->sprite.attr &= ~SP_FASTCOPY;
			icon_sobj->sprite.attr |= SP_TRANSPARENT;
		}
		else
			icon_sobj = mnVsRecordsCreateLockedIcon(icon_gobj);

		mnVsRecordsSetIconPositionForRow(icon_sobj, i);
	}
}

// 801339D0
s32 mnVsRecordsGetRanking(s32 ft_kind)
{
	s32 ft_kinds_ordered[12];
	s32 rank[12];
	s32 current_order;
	s32 i;
	f64 stats[12];
	s32 foo, bar;

	for (i = 0; i < 12; i++)
		ft_kinds_ordered[i] = mnVsRecordsGetFtKindByIndex(i);

	for (i = 0; i < 12; i++)
		stats[i] = mnVsRecordsGetWinPercentage(i);

	for (i = 0; i < 12; i++)
	{
		s32 j;

		for (j = i + 1; j < 12; j++)
		{
			if ((mnVsRecordsIsUnlocked(ft_kinds_ordered[i]) == FALSE) ||
				(stats[ft_kinds_ordered[i]] < stats[ft_kinds_ordered[j]]) &&
				(mnVsRecordsIsUnlocked(ft_kinds_ordered[j])))
			{
				s32 prev = ft_kinds_ordered[i];
				ft_kinds_ordered[i] = ft_kinds_ordered[j];
				ft_kinds_ordered[j] = prev;
			}
		}
	}

	current_order = 1;

	for (i = 0; i < 12; i++)
	{
		rank[ft_kinds_ordered[i]] = current_order;

		if (i != 11 && stats[ft_kinds_ordered[i]] != stats[ft_kinds_ordered[i + 1]])
			current_order  = i + 2;
	}

	return rank[ft_kind];
}

// 80133C60
void mnVsRecordsCreatePortraitAndStats(GObj* individual_stats_gobj, s32 ft_kind)
{
	SObj* sobj;
	intptr_t offsets[12] = {

		0x4728, 0x0D068, 0x08BC8, 0x0AE18,
		0x6978, 0x11508, 0x13758, 0x19E48,
		0xF2B8, 0x159A8, 0x1C098, 0x17BF8
	};
	s32 color[3] = {

		0x8A, 0x88, 0x92
	};
	s32 colors[6] = {

		0x0, 0x0, 0x0, 0x8A, 0x88, 0x92
	};

	sobj = lbCommonMakeSObjForGObj(individual_stats_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], &FILE_01F_PORTRAIT_BACKGROUND_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->pos.x = 52.0f;
	sobj->pos.y = 55.0f;

	sobj = lbCommonMakeSObjForGObj(individual_stats_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[2], offsets[ft_kind]));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->pos.x = 57.0f;
	sobj->pos.y = 60.0f;

	mnVsRecordsDrawString(individual_stats_gobj, "RANKING", 150, 60, color);
	mnVsRecordsCreateNumber(individual_stats_gobj, 12, 265, 58, colors, FALSE, TRUE, 2, FALSE);

	sobj = lbCommonMakeSObjForGObj(individual_stats_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], &FILE_01F_SLASH_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->pos.x = 251.0f;
	sobj->pos.y = 59.0f;
	sobj->sprite.red = color[0];
	sobj->sprite.green = color[1];
	sobj->sprite.blue = color[2];

	mnVsRecordsCreateNumber(individual_stats_gobj, mnVsRecordsGetRanking(ft_kind), 250, 58, colors, FALSE, TRUE, 2, FALSE);

	mnVsRecordsDrawString(individual_stats_gobj, "USED %", 150, 68, color);
	mnVsRecordsCreateNumber(individual_stats_gobj, mnVsRecordsGetUsePercentage(ft_kind) * 10, 265, 66, colors, TRUE, TRUE, 3, FALSE);

	mnVsRecordsDrawString(individual_stats_gobj, "ATTACK 3TOTAL", 149, 78, color);
	mnVsRecordsCreateNumber(individual_stats_gobj, gSaveData.vs_records[ft_kind].damage_dealt, 265, 76, colors, FALSE, TRUE, 6, FALSE);

	mnVsRecordsDrawString(individual_stats_gobj, "DAMAGE TOTAL", 150, 86, color);
	mnVsRecordsCreateNumber(individual_stats_gobj, gSaveData.vs_records[ft_kind].damage_taken, 265, 84, colors, FALSE, TRUE, 6, FALSE);
}

// 80133FE8
void mnVsRecordsSortData(s32 stats_kind)
{
	s32 ft_kinds_ordered[12];
	f64 stats[12];
	s32 i;

	for (i = 0; i < 12; i++)
		ft_kinds_ordered[i] = mnVsRecordsGetFtKindByIndex(i);

	switch (stats_kind)
	{
		case vsRecordsKindBattleScore:
			for (i = 0; i < 12; i++)
				stats[i] = mnVsRecordsGetKOs(i);
			break;
		case vsRecordsKindRanking:
			for (i = 0; i < 12; i++)
			{
				switch (gMNVsRecordsFirstColumn) {
					case vsRecordsRankingColumnKindWinPercentage:
						stats[i] = mnVsRecordsGetWinPercentage(i);
						break;
					case vsRecordsRankingColumnKindKOs:
						stats[i] = mnVsRecordsGetKOs(i);
						break;
					case vsRecordsRankingColumnKindTKOs:
						stats[i] = mnVsRecordsGetTKOs(i);
						break;
					case vsRecordsRankingColumnKindSDPercentage:
						stats[i] = mnVsRecordsGetSDPercentage(i);
						break;
					case vsRecordsRankingColumnKindTime:
						stats[i] = gSaveData.vs_records[i].time_used;
						break;
					case vsRecordsRankingColumnKindUsePercentage:
						stats[i] = mnVsRecordsGetUsePercentage(i);
						break;
					case vsRecordsRankingColumnKindAverage:
						stats[i] = mnVsRecordsGetAverage(i);
						break;
				}
			}
			break;
		case vsRecordsKindIndividual:
			for (i = 0; i < 12; i++)
				stats[i] = mnVsRecordsGetWinPercentageAgainst(gMNVsRecordsRankingFtKindOrder[gMNVsRecordsCurrentIndex], i);
			break;
	}

	for (i = 0; i < 12; i++)
	{
		s32 j;

		for (j = i + 1; j < 12; j++)
		{
			if ((mnVsRecordsIsUnlocked(ft_kinds_ordered[i]) == FALSE) ||
				(stats[ft_kinds_ordered[i]] < stats[ft_kinds_ordered[j]]) &&
				(mnVsRecordsIsUnlocked(ft_kinds_ordered[j])))
			{
				s32 prev = ft_kinds_ordered[i];
				ft_kinds_ordered[i] = ft_kinds_ordered[j];
				ft_kinds_ordered[j] = prev;
			}
		}
	}

	switch (stats_kind)
	{
		case vsRecordsKindBattleScore:
			for (i = 0; i < 12; i++)
				gMNVsRecordsBattleScoreFtKindOrder[i] = ft_kinds_ordered[i];
			break;
		case vsRecordsKindRanking:
			for (i = 0; i < 12; i++)
				gMNVsRecordsRankingFtKindOrder[i] = ft_kinds_ordered[i];
			break;
		case vsRecordsKindIndividual:
			for (i = 0; i < 12; i++)
				gMNVsRecordsIndividualFtKindOrder[i] = ft_kinds_ordered[i];
			break;
		default:
			break;
	}
}

// 801343E0
GObj* mnVsRecordsCreateBattleScoreTableValues()
{
	f32 x, y;
	s32 colors[6] = {

		0x0, 0x0, 0x0, 0xE5, 0xD1, 0x99
	};
	GObj* values_gobj;
	s32 i, j;

	values_gobj = gcMakeGObjSPAfter(0, 0, 6, 0x80000000);
	gcAddGObjDisplay(values_gobj, lbCommonDrawSObjAttr, 5, 0x80000000, -1);

	for (i = 0; i < 12; i++)
	{
		x = 66.0f;
		y = (i * 13);

		if (mnVsRecordsIsUnlocked(gMNVsRecordsBattleScoreFtKindOrder[i]))
		{
			for (j = 0; j < 12; j++)
			{
				if (mnVsRecordsIsUnlocked(gMNVsRecordsBattleScoreFtKindOrder[j]))
				{
					mnVsRecordsCreateNumber(values_gobj, gSaveData.vs_records[gMNVsRecordsBattleScoreFtKindOrder[i]].ko_count[gMNVsRecordsBattleScoreFtKindOrder[j]], x + (j * 0x12), y + 65.0f, colors, FALSE, FALSE, 4, FALSE);
				}
			}

			mnVsRecordsCreateNumber(values_gobj, mnVsRecordsGetKOs(gMNVsRecordsBattleScoreFtKindOrder[i]), x + 216.0f + 10.0f, y + 65.0f, colors, FALSE, FALSE, 6, FALSE);
		}
	}

	return values_gobj;
}

// 80134610
s32 mnVsRecordsCreateBattleScoreTableHeaders()
{
	GObj* headers_gobj;
	SObj* headers_sobj;

	headers_gobj = gcMakeGObjSPAfter(0, 0, 5, 0x80000000);
	gcAddGObjDisplay(headers_gobj, lbCommonDrawSObjAttr, 4, 0x80000000, -1);

	headers_sobj = lbCommonMakeSObjForGObj(headers_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], &FILE_01F_TOTAL_TEXTURE_IMAGE_OFFSET));
	headers_sobj->sprite.attr &= ~SP_FASTCOPY;
	headers_sobj->sprite.attr |= SP_TRANSPARENT;
	headers_sobj->sprite.red = 0x8A;
	headers_sobj->sprite.green = 0x88;
	headers_sobj->sprite.blue = 0x92;
	headers_sobj->pos.x = 264.0f;
	headers_sobj->pos.y = 50.0f;

	mnVsRecordsCreateRowIcons(headers_gobj);
	mnVsRecordsCreateColumnIcons(headers_gobj);

	return headers_gobj;
}

// 801346D8
void mnVsRecordsRenderRankingRowHighlight(GObj* row_highlight_gobj)
{
	if (gMNVsRecordsStatsKind == vsRecordsKindRanking)
	{
		gDPPipeSync(gDisplayListHead[0]++);
		gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
		gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 39, 0, 255, 255);
		gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
		gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
		gDPFillRectangle(gDisplayListHead[0]++, 24, 62 + (gMNVsRecordsCurrentIndex * 13), 295, 74 + (gMNVsRecordsCurrentIndex * 13));
		gDPPipeSync(gDisplayListHead[0]++);
		gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
		gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);

		lbCommonClearExternSpriteParams();
	}
}

// 80134868
void mnVsRecordsCreateRankingRowHighlight()
{
	GObj* row_highlight_gobj = gcMakeGObjSPAfter(0, 0, 3, 0x80000000);
	gcAddGObjDisplay(row_highlight_gobj, mnVsRecordsRenderRankingRowHighlight, 2, 0x80000000, -1);
}

// 801348B4
f32 mnVsRecordsGetAverage(s32 ft_kind)
{
	if (gSaveData.vs_records[ft_kind].games_played != 0)
		return (f32) gSaveData.vs_records[ft_kind].player_count_tally / gSaveData.vs_records[ft_kind].games_played;
	else
		return 0.0f;
}

// 80134934
s32 mnVsRecordsGetGamesPlayedSum()
{
	s32 i;
	s32 total_games_played = 0;

	for (i = 0; i < 12; i++)
		total_games_played += gSaveData.vs_records[i].games_played;

	return total_games_played;
}

// 80134978
f32 mnVsRecordsGetUsePercentage(s32 ft_kind)
{
	f32 use_percentage;

	if (mnVsRecordsGetGamesPlayedSum() != 0.0f)
		use_percentage = gSaveData.vs_records[ft_kind].games_played / (f32) mnVsRecordsGetGamesPlayedSum();
	else
		use_percentage = 0.0f;

	return use_percentage * 100.0f;
}

// 80134A1C
f32 mnVsRecordsGetSDPercentage(s32 ft_kind)
{
	f32 sd_percentage;
	f32 total_kos = mnVsRecordsGetTKOs(ft_kind);
	f32 self_destructs = gSaveData.vs_records[ft_kind].self_destructs;

	if (total_kos != 0.0f)
		sd_percentage = self_destructs / total_kos;
	else
		sd_percentage = 0.0f;

	return sd_percentage * 100.0f;
}

// 80134AA8
GObj* mnVsRecordsCreateRankingTableValues(s32 column)
{
	s32 col_widths[7] = {

		27, 30, 30, 23, 35, 27, 39
	};
	GObj* table_values_gobj;
	s32 colors[6] = {

		0x0, 0x0, 0x0, 0xE5, 0xD1, 0x99
	};
	s32 i;
	s32 j;
	s32 column_order[7];
	s32 x;
	f32 y;

	for (i = 0; i < ARRAY_COUNT(col_widths); i++)
	{
		if (column >= ARRAY_COUNT(col_widths))
			column -= ARRAY_COUNT(col_widths);

		column_order[i] = column++;
	}

	table_values_gobj = gcMakeGObjSPAfter(0, 0, 6, 0x80000000);
	gcAddGObjDisplay(table_values_gobj, lbCommonDrawSObjAttr, 5, 0x80000000, -1);

	for (i = 0; i < 12; i++)
	{
		if (mnVsRecordsIsUnlocked(gMNVsRecordsRankingFtKindOrder[i]))
		{
			x = 0x30;
			y = (i * 13) + 65.0f;

			for (j = 0; j < ARRAY_COUNT(col_widths); j++)
			{
				switch (column_order[j])
				{
					SObj* table_values_sobj;

					case vsRecordsRankingColumnKindWinPercentage:
						mnVsRecordsCreateNumber(table_values_gobj, mnVsRecordsGetWinPercentage(gMNVsRecordsRankingFtKindOrder[i]) * 10.0f, col_widths[column_order[j]] + x, y, colors, TRUE, FALSE, 3, FALSE);
						break;
					case vsRecordsRankingColumnKindKOs:
						mnVsRecordsCreateNumber(table_values_gobj, mnVsRecordsGetKOs(gMNVsRecordsRankingFtKindOrder[i]), col_widths[column_order[j]] + x, y, colors, FALSE, FALSE, 6, FALSE);
						break;
					case vsRecordsRankingColumnKindTKOs:
						mnVsRecordsCreateNumber(table_values_gobj, mnVsRecordsGetTKOs(gMNVsRecordsRankingFtKindOrder[i]), col_widths[column_order[j]] + x, y, colors, FALSE, FALSE, 6, FALSE);
						break;
					case vsRecordsRankingColumnKindSDPercentage:
						mnVsRecordsCreateNumber(table_values_gobj, mnVsRecordsGetSDPercentage(gMNVsRecordsRankingFtKindOrder[i]) * 10.0f, col_widths[column_order[j]] + x, y, colors, TRUE, FALSE, 3, FALSE);
						break;
					case vsRecordsRankingColumnKindTime:
						mnVsRecordsCreateNumber(table_values_gobj, (gSaveData.vs_records[gMNVsRecordsRankingFtKindOrder[i]].time_used % 3600) / 60, col_widths[column_order[j]] + x, y, colors, FALSE, FALSE, 2, TRUE);

						table_values_sobj = lbCommonMakeSObjForGObj(table_values_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], &FILE_01F_COLON_IMAGE_OFFSET));
						mnVsRecordsSetTextureColors(table_values_sobj, colors);

						table_values_sobj->pos.x = col_widths[column_order[j]] + x - 11;
						table_values_sobj->pos.y = y;

						mnVsRecordsCreateNumber(table_values_gobj, gSaveData.vs_records[gMNVsRecordsRankingFtKindOrder[i]].time_used / 3600, col_widths[column_order[j]] + x - 13, y, colors, FALSE, FALSE, 3, FALSE);
						break;
					case vsRecordsRankingColumnKindUsePercentage:
						mnVsRecordsCreateNumber(table_values_gobj, mnVsRecordsGetUsePercentage(gMNVsRecordsRankingFtKindOrder[i]) * 10.0f, col_widths[column_order[j]] + x, y, colors, TRUE, FALSE, 3, FALSE);
						break;
					case vsRecordsRankingColumnKindAverage:
						mnVsRecordsCreateNumber(table_values_gobj, mnVsRecordsGetAverage(gMNVsRecordsRankingFtKindOrder[i]) * 10.0f, col_widths[column_order[j]] + x - 15, y, colors, TRUE, FALSE, 1, FALSE);
						break;
				}

				x += dMNVsRecordsRankingColumnWidths[column_order[j]];
			}
		}
	}

	return table_values_gobj;
}

// 80135108
GObj* mnVsRecordsCreateRankingTableHeaders(s32 column)
{
	GObj* table_headers_gobj;
	SObj* table_headers_sobj;
	intptr_t offsets[7] = {

		0xA08, 0xAF8, 0xBE8, 0xCD8, 0xE10, 0xF08, 0x1008
	};
	s32 x_padding[7] = {

		2, 2, 2, 4, 4, 3, 1
	};
	s32 column_order[7];
	s32 i;
	s32 j;
	s32 x;
	f32 y;

	for (i = 0; i < ARRAY_COUNT(offsets); i++)
	{
		if (column >= ARRAY_COUNT(offsets))
			column -= ARRAY_COUNT(offsets);

		column_order[i] = column++;
	}

	table_headers_gobj = gcMakeGObjSPAfter(0, 0, 5, 0x80000000);
	gcAddGObjDisplay(table_headers_gobj, lbCommonDrawSObjAttr, 4, 0x80000000, -1);

	x = 0x30;
	for (i = 0; i < ARRAY_COUNT(offsets); i++)
	{
		table_headers_sobj = lbCommonMakeSObjForGObj(table_headers_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], offsets[column_order[i]]));
		table_headers_sobj->sprite.attr &= ~SP_FASTCOPY;
		table_headers_sobj->sprite.attr |= SP_TRANSPARENT;
		table_headers_sobj->pos.x = x_padding[column_order[i]] + x;
		table_headers_sobj->pos.y = 49.0f;
		table_headers_sobj->sprite.red = 0x8A;
		table_headers_sobj->sprite.green = 0x88;
		table_headers_sobj->sprite.blue = 0x92;

		x += dMNVsRecordsRankingColumnWidths[column_order[i]];
	}

	mnVsRecordsCreateRowIcons(table_headers_gobj);
	return table_headers_gobj;
}

// 8013531C
f32 mnVsRecordsGetWinPercentageAgainst(s32 ft_kind, s32 ft_kind_opponent)
{
	f32 kos_for = gSaveData.vs_records[ft_kind].ko_count[ft_kind_opponent];
	f32 total_kos = kos_for + gSaveData.vs_records[ft_kind_opponent].ko_count[ft_kind];
	f32 ko_percentage;

	if (total_kos != 0.0f)
		ko_percentage = kos_for / total_kos;
	else
		ko_percentage = 0.0f;

	return ko_percentage * 100.0f;
}

// 801353F4
f32 mnVsRecordsGetAverageAgainst(s32 ft_kind, s32 ft_kind_opponent)
{
	if (gSaveData.vs_records[ft_kind].played_against[ft_kind_opponent] != 0)
		return (f32) gSaveData.vs_records[ft_kind].player_count_tallies[ft_kind_opponent] / gSaveData.vs_records[ft_kind].played_against[ft_kind_opponent];
	else
		return 0.0f;
}

// 8013547C - Unused?
void func_ovl32_8013547C() {}

// 80135484
s32 mnVsRecordsCreateIndividualTableValues()
{
	GObj* table_values_gobj;
	f32 y[4] = {

		160.0f, 172.0f, 184.0f, 196.0f
	};
	s32 colors[6] = {

		0x0, 0x0, 0x0, 0xE5, 0xD1, 0x99
	};
	s32 i;
	f32 x;
	s32 unused, unused2;

	table_values_gobj = gcMakeGObjSPAfter(0, 0, 6, 0x80000000);
	gcAddGObjDisplay(table_values_gobj, lbCommonDrawSObjAttr, 5, 0x80000000, -1);

	for (i = 0; i < 12; i++)
	{
		if (mnVsRecordsIsUnlocked(gMNVsRecordsRankingFtKindOrder[i]))
		{
			x = (i * 19) + 84.0f;
			mnVsRecordsCreateNumber(table_values_gobj, mnVsRecordsGetWinPercentageAgainst(gMNVsRecordsRankingFtKindOrder[gMNVsRecordsCurrentIndex], gMNVsRecordsIndividualFtKindOrder[i]) * 10.0f, x, y[0], colors, TRUE, FALSE, 3, FALSE);
			mnVsRecordsCreateNumber(table_values_gobj, gSaveData.vs_records[gMNVsRecordsRankingFtKindOrder[gMNVsRecordsCurrentIndex]].ko_count[gMNVsRecordsIndividualFtKindOrder[i]], x, y[1], colors, FALSE, FALSE, 4, FALSE);
			mnVsRecordsCreateNumber(table_values_gobj, gSaveData.vs_records[gMNVsRecordsIndividualFtKindOrder[i]].ko_count[gMNVsRecordsRankingFtKindOrder[gMNVsRecordsCurrentIndex]], x, y[2], colors, FALSE, FALSE, 4, FALSE);
			mnVsRecordsCreateNumber(table_values_gobj, mnVsRecordsGetAverageAgainst(gMNVsRecordsRankingFtKindOrder[gMNVsRecordsCurrentIndex], gMNVsRecordsIndividualFtKindOrder[i]) * 10.0f, x, y[3], colors, TRUE, FALSE, 3, FALSE);
		}
	}

	return table_values_gobj;
}

// 80135784
s32 mnVsRecordsCreateIndividualPortraitStatsAndTableHeaders()
{
	GObj* individual_stats_gobj;
	SObj* individual_stats_sobj;
	intptr_t offsets[4] = {

		0xA08, 0xAF8, 0x1140, 0x1008
	};
	Vec2f positions[4] = {

		{ 29.0f, 159.0f },
		{ 28.0f, 171.0f },
		{ 25.0f, 183.0f },
		{ 26.0f, 195.0f }
	};
	s32 i;

	individual_stats_gobj = gcMakeGObjSPAfter(0, 0, 5, 0x80000000);
	gcAddGObjDisplay(individual_stats_gobj, lbCommonDrawSObjAttr, 4, 0x80000000, -1);

	for (i = 0; i < 4; i++)
	{
		individual_stats_sobj = lbCommonMakeSObjForGObj(individual_stats_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], offsets[i]));
		individual_stats_sobj->sprite.attr &= ~SP_FASTCOPY;
		individual_stats_sobj->sprite.attr |= SP_TRANSPARENT;
		individual_stats_sobj->pos.x = positions[i].x;
		individual_stats_sobj->pos.y = positions[i].y;
		individual_stats_sobj->sprite.red = 0x8A;
		individual_stats_sobj->sprite.green = 0x88;
		individual_stats_sobj->sprite.blue = 0x92;
	}

	mnVsRecordsCreateColumnIcons(individual_stats_gobj);
	mnVsRecordsCreatePortraitAndStats(individual_stats_gobj, gMNVsRecordsRankingFtKindOrder[gMNVsRecordsCurrentIndex]);

	return individual_stats_gobj;
}

// 80135934
void mnVsRecordsCreateStats(s32 stats_kind)
{
	switch (stats_kind)
	{
		case vsRecordsKindBattleScore:
			mnVsRecordsSortData(stats_kind);

			gMNVsRecordsTableHeadersGObj = mnVsRecordsCreateBattleScoreTableHeaders();
			gMNVsRecordsTableValuesGObj = mnVsRecordsCreateBattleScoreTableValues();
			break;
		case vsRecordsKindRanking:
			mnVsRecordsSortData(stats_kind);

			gMNVsRecordsTableHeadersGObj = mnVsRecordsCreateRankingTableHeaders(gMNVsRecordsFirstColumn);
			gMNVsRecordsTableValuesGObj = mnVsRecordsCreateRankingTableValues(gMNVsRecordsFirstColumn);
			break;
		case vsRecordsKindIndividual:
			mnVsRecordsSortData(stats_kind);

			gMNVsRecordsTableHeadersGObj = mnVsRecordsCreateIndividualPortraitStatsAndTableHeaders();
			gMNVsRecordsTableValuesGObj = mnVsRecordsCreateIndividualTableValues();
			break;
	}
}

// 801359EC
void mnVsRecordsCreateTableValuesViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(1, NULL, 1, GOBJ_LINKORDER_DEFAULT, lbCommonScissorSpriteCamera, 0x28, 0x00000020, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80135A8C
void mnVsRecordsCreateTableHeadersViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(1, NULL, 1, GOBJ_LINKORDER_DEFAULT, lbCommonScissorSpriteCamera, 0x14, 0x00000010, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80135B2C
void mnVsRecordsCreateTableGridViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(1, NULL, 1, GOBJ_LINKORDER_DEFAULT, lbCommonScissorSpriteCamera, 0x3C, 0x00000008, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80135BCC
void mnVsRecordsCreateRankingRowHighlightViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(1, NULL, 1, GOBJ_LINKORDER_DEFAULT, lbCommonScissorSpriteCamera, 0x46, 0x00000004, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80135C6C
void mnVsRecordsCreateTitleViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(1, NULL, 1, GOBJ_LINKORDER_DEFAULT, lbCommonScissorSpriteCamera, 0x50, 0x00000002, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80135D0C
void mnVsRecordsInitVars()
{
	gMNVsRecordsStatsKind = vsRecordsKindBattleScore;
	gMNVsRecordsRedrawSubtitle = FALSE;
	gMNVsRecordsCurrentIndex = 0;
	gMNVsRecordsChangeWait = 0;
	gMNVsRecordsUnlockedMask = gSaveData.character_mask;
	gMNVsRecordsFirstColumn = vsRecordsRankingColumnKindWinPercentage;
}

// 80135D48
void mnVsRecordsRedrawStats(s32 stats_kind)
{
	if (gMNVsRecordsTableHeadersGObj != NULL)
		gcEjectGObj(gMNVsRecordsTableHeadersGObj);

	if (gMNVsRecordsTableValuesGObj != NULL)
		gcEjectGObj(gMNVsRecordsTableValuesGObj);

	mnVsRecordsCreateStats(stats_kind);
}

// 80135D98
void mnVsRecordsMain(GObj* arg0)
{
	s32 unused;
	s32 stick_range;
	s32 is_button;

	if (gMNVsRecordsChangeWait != 0)
	{
		gMNVsRecordsChangeWait--;
	}

	if
	(
		(gMNVsRecordsStatsKind == vsRecordsKindIndividual) &&
		(scSubsysControllerGetPlayerStickInRangeLR(-0x14, 0x14)) &&
		(scSubsysControllerGetPlayerStickInRangeUD(-0x14, 0x14)) &&
		(scSubsysControllerGetPlayerHoldButtons(R_JPAD | U_JPAD | R_TRIG | R_CBUTTONS | U_CBUTTONS) == FALSE) &&
		(scSubsysControllerGetPlayerHoldButtons(L_JPAD | D_JPAD | L_TRIG | L_CBUTTONS | D_CBUTTONS) == FALSE)
	)
	{
		gMNVsRecordsChangeWait = 0;
	}

	if (gMNVsRecordsRedrawSubtitle)
	{
		gMNVsRecordsRedrawSubtitle = FALSE;
	}

	if (scSubsysControllerGetPlayerTapButtons(B_BUTTON))
	{
		if (gMNVsRecordsStatsKind == vsRecordsKindBattleScore)
		{
			gSceneData.scene_previous = gSceneData.scene_current;
			gSceneData.scene_current =  0x3AU;

			leoInitUnit_atten();
		}
		else
		{
			func_800269C0_275C0(nSYAudioFGMBurnS);

			gMNVsRecordsStatsKind--;
			gMNVsRecordsRedrawSubtitle = TRUE;

			mnVsRecordsRedrawStats(gMNVsRecordsStatsKind);
		}
	}

	if
	(
		((scSubsysControllerGetPlayerTapButtons(A_BUTTON)) ||
		(scSubsysControllerGetPlayerTapButtons(START_BUTTON))) &&
		(gMNVsRecordsStatsKind < 2)
	)
	{
		func_800269C0_275C0(nSYAudioFGMBurnS);

		gMNVsRecordsStatsKind++;
		gMNVsRecordsRedrawSubtitle = TRUE;

		mnVsRecordsRedrawStats(gMNVsRecordsStatsKind);
	}

	if (gMNVsRecordsStatsKind == vsRecordsKindRanking)
	{
		if
		(
			mnCommonCheckGetOptionButtonInput(gMNVsRecordsChangeWait, is_button, U_JPAD | U_CBUTTONS) ||
			mnCommonCheckGetOptionStickInputUD(gMNVsRecordsChangeWait, stick_range, 20, 1)
		)
		{
			func_800269C0_275C0(nSYAudioFGMFoxFoot);

			if (gMNVsRecordsCurrentIndex == 0)
			{
				gMNVsRecordsCurrentIndex = 11;
			}
			else
				gMNVsRecordsCurrentIndex--;

			while (mnVsRecordsIsUnlocked(gMNVsRecordsRankingFtKindOrder[gMNVsRecordsCurrentIndex]) == FALSE)
			{
				if (gMNVsRecordsCurrentIndex == 0)
				{
					gMNVsRecordsCurrentIndex = 11;
				}
				else
					gMNVsRecordsCurrentIndex--;
			}

			mnCommonSetOptionChangeWaitP(gMNVsRecordsChangeWait, is_button, stick_range, 7);
		}

		if
		(
			mnCommonCheckGetOptionButtonInput(gMNVsRecordsChangeWait, is_button, D_JPAD | D_CBUTTONS) ||
			mnCommonCheckGetOptionStickInputUD(gMNVsRecordsChangeWait, stick_range, -20, 0)
		)
		{
			func_800269C0_275C0(nSYAudioFGMFoxFoot);

			if (gMNVsRecordsCurrentIndex == 11)
			{
				gMNVsRecordsCurrentIndex = 0;
			}
			else
				gMNVsRecordsCurrentIndex++;

			while (mnVsRecordsIsUnlocked(gMNVsRecordsRankingFtKindOrder[gMNVsRecordsCurrentIndex]) == FALSE)
			{
				if (gMNVsRecordsCurrentIndex == 11)
				{
					gMNVsRecordsCurrentIndex = 0;
				}
				else
					gMNVsRecordsCurrentIndex++;
			}

			mnCommonSetOptionChangeWaitN(gMNVsRecordsChangeWait, is_button, stick_range, 7);
		}

		if
		(
			mnCommonCheckGetOptionButtonInput(gMNVsRecordsChangeWait, is_button, R_JPAD | R_TRIG | R_CBUTTONS) ||
			mnCommonCheckGetOptionStickInputLR(gMNVsRecordsChangeWait, stick_range, 20, 1)
		)
		{
			func_800269C0_275C0(nSYAudioFGMFoxFoot);

			if (gMNVsRecordsFirstColumn == vsRecordsRankingColumnKindWinPercentage)
			{
				gMNVsRecordsFirstColumn = vsRecordsRankingColumnKindAverage;
			}
			else
				gMNVsRecordsFirstColumn--;

			gMNVsRecordsRedrawSubtitle = TRUE;

			mnVsRecordsRedrawStats(gMNVsRecordsStatsKind);

			mnCommonSetOptionChangeWaitP(gMNVsRecordsChangeWait, is_button, stick_range, 7);
		}

		if
		(
			mnCommonCheckGetOptionButtonInput(gMNVsRecordsChangeWait, is_button, L_JPAD | L_TRIG | L_CBUTTONS) ||
			mnCommonCheckGetOptionStickInputLR(gMNVsRecordsChangeWait, stick_range, -20, 0)
		)
		{
			func_800269C0_275C0(nSYAudioFGMFoxFoot);

			if (gMNVsRecordsFirstColumn == vsRecordsRankingColumnKindAverage)
			{
				gMNVsRecordsFirstColumn = vsRecordsRankingColumnKindWinPercentage;
			}
			else
				gMNVsRecordsFirstColumn++;

			gMNVsRecordsRedrawSubtitle = TRUE;

			mnVsRecordsRedrawStats(gMNVsRecordsStatsKind);

			mnCommonSetOptionChangeWaitN(gMNVsRecordsChangeWait, is_button, stick_range, 7);
		}
	}

	if (gMNVsRecordsStatsKind == vsRecordsKindIndividual)
	{
		if
		(
			mnCommonCheckGetOptionButtonInput(gMNVsRecordsChangeWait, is_button, R_JPAD | R_TRIG | R_CBUTTONS) ||
			mnCommonCheckGetOptionStickInputLR(gMNVsRecordsChangeWait, stick_range, 20, 1)
		)
		{
			func_800269C0_275C0(nSYAudioFGMFoxFoot);

			if (gMNVsRecordsCurrentIndex == 11)
				gMNVsRecordsCurrentIndex = 0;
			else
				gMNVsRecordsCurrentIndex++;

			while (mnVsRecordsIsUnlocked(gMNVsRecordsRankingFtKindOrder[gMNVsRecordsCurrentIndex]) == FALSE)
			{
				if (gMNVsRecordsCurrentIndex == 11)
					gMNVsRecordsCurrentIndex = 0;
				else
					gMNVsRecordsCurrentIndex++;
			}

			mnVsRecordsRedrawStats(gMNVsRecordsStatsKind);

			if (is_button)
				gMNVsRecordsChangeWait = 12;
			else
				gMNVsRecordsChangeWait = mnCommonGetOptionChangeWaitP(20, 7);
		}

		if
		(
			mnCommonCheckGetOptionButtonInput(gMNVsRecordsChangeWait, is_button, L_JPAD | L_TRIG | L_CBUTTONS) ||
			mnCommonCheckGetOptionStickInputLR(gMNVsRecordsChangeWait, stick_range, -20, 0)
		)
		{
			func_800269C0_275C0(nSYAudioFGMFoxFoot);

			if (gMNVsRecordsCurrentIndex == 0)
				gMNVsRecordsCurrentIndex = 11;
			else
				gMNVsRecordsCurrentIndex--;

			while (mnVsRecordsIsUnlocked(gMNVsRecordsRankingFtKindOrder[gMNVsRecordsCurrentIndex]) == FALSE)
			{
				if (gMNVsRecordsCurrentIndex == 0)
					gMNVsRecordsCurrentIndex = 11;
				else
					gMNVsRecordsCurrentIndex--;
			}

			mnVsRecordsRedrawStats(gMNVsRecordsStatsKind);

			if (is_button)
				gMNVsRecordsChangeWait = 12;
			else
				gMNVsRecordsChangeWait = mnCommonGetOptionChangeWaitN(-20, 7);
		}
	}
}

// 80136488
void mnVsRecordsInit()
{
	rdSetup rldmSetup;

	rldmSetup.table_addr = &D_NF_001AC870;
	rldmSetup.table_files_num = &D_NF_00000854;
	rldmSetup.file_heap = NULL;
	rldmSetup.file_heap_size = 0;
	rldmSetup.status_buf = (rdFileNode*) &D_ovl32_80136CC8;
	rldmSetup.status_buf_size = 0x18;
	rldmSetup.force_buf = 0;
	rldmSetup.force_buf_size = 0;
	rdManagerInitSetup(&rldmSetup);
	rdManagerLoadFiles(D_ovl32_8013664C, ARRAY_COUNT(D_ovl32_8013664C), gMNVsRecordsFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl32_8013664C, ARRAY_COUNT(D_ovl32_8013664C)), 0x10U));

	gcMakeGObjSPAfter(0, mnVsRecordsMain, 0, 0x80000000);
	gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0x2, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));

	mnVsRecordsInitVars();
	mnVsRecordsCreateTitleViewport();
	mnVsRecordsCreateRankingRowHighlightViewport();
	mnVsRecordsCreateTableGridViewport();
	mnVsRecordsCreateTableHeadersViewport();
	mnVsRecordsCreateTableValuesViewport();
	mnVsRecordsCreateTitle();
	mnVsRecordsCreateSubtitle();
	mnVsRecordsCreatePortraitAndStatsArrows();
	mnVsRecordsCreateResortArrows();
	mnVsRecordsCreateColumnArrows();
	mnVsRecordsCreateStatsGrid();
	mnVsRecordsCreateStats(gMNVsRecordsStatsKind);
	mnVsRecordsCreateRankingRowHighlight();

	auPlaySong(0, nSYAudioBGMData);
}

// 801369CC
syDisplaySetup D_ovl32_801369CC = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99
};

// 801369E8
scRuntimeInfo D_ovl32_801369E8 = {

	0x00000000, 0x8000A5E4,
	func_8000A340, &lOverlay32ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x0000EA60, 0x00000000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000C000,
	mnVsRecordsSetLighting, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mnVsRecordsInit,
};

// 801365D0
void vs_records_entry()
{
	D_ovl32_801369CC.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl32_801369CC);
	D_ovl32_801369E8.arena_size = (u32) ((uintptr_t)&lOverlay32ArenaHi - (uintptr_t)&lOverlay32ArenaLo);
	gsGTLSceneInit(&D_ovl32_801369E8);
}