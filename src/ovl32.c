#include <db/debug.h>
#include <ft/fighter.h>
#include <sc/scene.h>
#include <sys/video.h>
#include <lb/library.h>

#include "ovl32.h"

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
extern intptr_t lMNDataCommonArrowLeftSprite;
extern intptr_t lMNDataCommonArrowRightSprite;

extern void syRdpSetViewport(void*, f32, f32, f32, f32);


// Forward declarations
s32 mnVSRecordIsUnlocked(s32 fkind);
s32 mnVSRecordGetCharIndex(u8);
f32 mnVSRecordGetUsePercentage(s32 fkind);
f32 mnVSRecordGetAverage(s32 fkind);
f32 mnVSRecordGetSDPercentage(s32 fkind);
f32 mnVSRecordGetWinPercentageAgainst(s32 fkind, s32 fkind_opponent);


// DATA
// 0x80136630
s32 dMNVSRecordRankingColumnWidths[7] = {

	33, 33, 33, 33, 46, 35, 34
};

// 0x8013664C
u32 D_ovl32_8013664C[4] = {

	0x1f, 0x20, 0x13, 0x21
};

// 0x80136660
Lights1 dMNVSRecordLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x80136678
Gfx dMNVSRecordDisplayList[] = {

	gsSPSetGeometryMode(G_LIGHTING),
	gsSPSetLights1(dMNVSRecordLights1),
	gsSPEndDisplayList()
};


// BSS
// 0x80136C10
s32 D_ovl32_80136C10[2];

// 0x80136C18
s32 gMNVSRecordStatsKind;

// 0x80136C1C
sb32 gMNVSRecordRedrawSubtitle;

// 0x80136C20
GObj* gMNVSRecordTableHeadersGObj;

// 0x80136C24
GObj* gMNVSRecordTableValuesGObj;

// 0x80136C28
s32 gMNVSRecordBattleScoreFighterKindOrder[12];

// 0x80136C58
s32 gMNVSRecordRankingFighterKindOrder[12];

// 0x80136C88
s32 gMNVSRecordIndividualFighterKindOrder[12];

// 0x80136CB8
s32 gMNVSRecordCurrentIndex;

// 0x80136CBC
u16 gMNVSRecordUnlockedMask;

// 0x80136CC0
s32 gMNVSRecordFirstColumn;

// 0x80136CC4
s32 gMNVSRecordChangeWait;

// 0x80136CC8
u32 D_ovl32_80136CC8[6];

// 0x80136CE0
u32 D_ovl32_80136CE0[42]; // unknown

// 0x80136D88
void *gMNVSRecordFiles[4];

// 0x80131B00
void mnVSRecordSetLighting(Gfx **display_list)
{
	gSPDisplayList(display_list[0]++, dMNVSRecordDisplayList);
}

// 0x80131B24
s32 mnVSRecordGetFighterKindByIndex(s32 index)
{
	s32 FTKinds[12] = {

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
	return FTKinds[index];
}

// 0x80131B74
s32 mnVSRecordGetKOs(s32 fkind)
{
	s32 i;
	s32 total_kos = 0;

	for (i = 0; i < 12; i++)
	{
		if (mnVSRecordIsUnlocked(i))
			total_kos += gSCManagerBackupData.vs_records[fkind].ko_count[i];
	}
	return total_kos;
}

// 0x80131C0C
s32 mnVSRecordGetTKOs(s32 fkind)
{
	s32 i;
	s32 total_tkos = 0;

	for (i = 0; i < 12; i++)
	{
		if (mnVSRecordIsUnlocked(i))
			total_tkos += gSCManagerBackupData.vs_records[i].ko_count[fkind];
	}

	if (gSCManagerBackupData.vs_records[fkind].selfdestructs + total_tkos > 9999)
		return 9999;

	return gSCManagerBackupData.vs_records[fkind].selfdestructs + total_tkos;
}

// 0x80131CD4
s32 mnVSRecordGetTotalTKOs()
{
	s32 i;
	s32 total_tkos = 0;

	for (i = 0; i < 12; i++)
	{
		if (mnVSRecordIsUnlocked(i))
			total_tkos += mnVSRecordGetTKOs(i);
	}

	return total_tkos;
}

// 0x80131D38
f32 mnVSRecordGetWinPercentage(s32 fkind)
{
	f32 kos = mnVSRecordGetKOs(fkind);
	f32 tkos = mnVSRecordGetTotalTKOs();

	return ((tkos != 0.0f) ? kos / tkos : 0.0f) * 100.0f;
}

// 0x80131DA0
s32 mnVSRecordPow(s32 num, s32 pow)
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

// 0x80131E40
void mnVSRecordSetTextureColors(SObj* sobj, u32 colors[])
{
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->envcolor.r = (u8) colors[0];
	sobj->envcolor.g = (u8) colors[1];
	sobj->envcolor.b = (u8) colors[2];
	sobj->sprite.red = (u8) colors[3];
	sobj->sprite.green = (u8) colors[4];
	sobj->sprite.blue = (u8) colors[5];
}

// 0x80131E88
s32 mnVSRecordGetNumberOfDigits(s32 num, s32 maxDigits)
{
	s32 numDigits;

	for (numDigits = maxDigits; numDigits > 0; numDigits--)
	{
		if (mnVSRecordPow(10, numDigits - 1) != 0 ? num / mnVSRecordPow(10, numDigits - 1) : 0 != 0)
			return numDigits;
	}

	return 0;
}

// 0x80131F34
void mnVSRecordCreateNumber(GObj* number_gobj, s32 num, f32 x, f32 y, s32 colors[], sb32 showTenths, sb32 wide, s32 maxDigits, sb32 pad)
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

		number_sobj = lbCommonMakeSObjForGObj(number_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[0], number_offsets[decimal]));
		mnVSRecordSetTextureColors(number_sobj, colors);

		if (wide)
			left_x -= 5.0f;
		else
			left_x -= 4.0f;

		number_sobj->pos.x = left_x;
		number_sobj->pos.y = y;

		number_sobj = lbCommonMakeSObjForGObj(number_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[0], &FILE_01F_DECIMAL_POINT_IMAGE_OFFSET));
		mnVSRecordSetTextureColors(number_sobj, colors);

		if (wide)
			left_x -= 3.0f;
		else
			left_x -= 2.0f;

		number_sobj->pos.x = left_x;
		number_sobj->pos.y = y + 4.0f;
	}

	number_sobj = lbCommonMakeSObjForGObj(number_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[0], number_offsets[num % 10]));
	mnVSRecordSetTextureColors(number_sobj, colors);

	if (wide)
		left_x -= 5.0f;
	else
		left_x -= 4.0f;

	number_sobj->pos.x = left_x;
	number_sobj->pos.y = y;

	for
	(
		place = 1, numDigits = (pad) ? maxDigits : mnVSRecordGetNumberOfDigits(num, maxDigits);
		place < numDigits;
		place++, numDigits = (pad) ? maxDigits : mnVSRecordGetNumberOfDigits(num, maxDigits)
	)
	{
		digit = (mnVSRecordPow(10, place) != 0) ? num / mnVSRecordPow(10, place) : 0;

		number_sobj = lbCommonMakeSObjForGObj(number_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[0], number_offsets[digit % 10]));
		mnVSRecordSetTextureColors(number_sobj, colors);

		if (wide)
			left_x -= 5.0f;
		else
			left_x -= 4.0f;

		number_sobj->pos.x = left_x;
		number_sobj->pos.y = y;
	}
}

// 0x8013232C
s32 mnVSRecordGetCharIndex(char chr)
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

// 0x801323A4
f32 mnVSRecordGetChrSpacing(const char *s, s32 c)
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

// 0x801324C8
void mnVSRecordDrawString(GObj* gobj, const char *str, f32 x, f32 y, s32 color[3])
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
			chr_sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[3], chrOffsets[mnVSRecordGetCharIndex(str[i])]));
			chr_sobj->pos.x = start_x;

			start_x += chr_sobj->sprite.width + mnVSRecordGetChrSpacing(str, i);

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

// 0x801326EC
s32 mnVSRecordIsUnlocked(s32 fkind)
{
	switch (fkind)
	{
		case nFTKindNess:
			return (gMNVSRecordUnlockedMask & LBBACKUP_MASK_FIGHTER(nFTKindNess)) ? TRUE : FALSE;
		case nFTKindPurin:
			return (gMNVSRecordUnlockedMask & LBBACKUP_MASK_FIGHTER(nFTKindPurin)) ? TRUE : FALSE;
		case nFTKindCaptain:
			return (gMNVSRecordUnlockedMask & LBBACKUP_MASK_FIGHTER(nFTKindCaptain)) ? TRUE : FALSE;
		case nFTKindLuigi:
			return (gMNVSRecordUnlockedMask & LBBACKUP_MASK_FIGHTER(nFTKindLuigi)) ? TRUE : FALSE;
		default:
			return TRUE;
	}
}

// 0x801327B8
void mnVSRecordCreateTitle()
{
	GObj* title_gobj;
	SObj* title_sobj;

	title_gobj = gcMakeGObjSPAfter(0, 0, 2, 0x80000000);
	gcAddGObjDisplay(title_gobj, lbCommonDrawSObjAttr, 1, GOBJ_PRIORITY_DEFAULT, ~0);

	title_sobj = lbCommonMakeSObjForGObj(title_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[1], &FILE_020_DATA_HEADER_IMAGE_OFFSET));
	title_sobj->sprite.attr &= ~SP_FASTCOPY;
	title_sobj->sprite.attr |= SP_TRANSPARENT;
	title_sobj->sprite.red = 0x5F;
	title_sobj->sprite.green = 0x58;
	title_sobj->sprite.blue = 0x46;
	title_sobj->pos.x = 24.0f;
	title_sobj->pos.y = 17.0f;

	title_sobj = lbCommonMakeSObjForGObj(title_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[0], &FILE_01F_VS_RECORD_IMAGE_OFFSET));
	title_sobj->sprite.attr &= ~SP_FASTCOPY;
	title_sobj->sprite.attr |= SP_TRANSPARENT;
	title_sobj->envcolor.r = 0;
	title_sobj->envcolor.g = 0;
	title_sobj->envcolor.b = 0;
	title_sobj->sprite.red = 0xF2;
	title_sobj->sprite.green = 0xC7;
	title_sobj->sprite.blue = 0xD;
	title_sobj->pos.x = 99.0f;
	title_sobj->pos.y = 23.0f;
}

// 0x801328D4
void mnVSRecordRenderSubtitle(GObj* subtitle_gobj)
{
	SObj* subtitle_sobj;
	intptr_t offsets[4] = {

		&FILE_01F_SUBTITLE_BATTLE_SCORE_IMAGE_OFFSET, 0x1458, 0x1318, 0
	};

	if (gMNVSRecordRedrawSubtitle)
	{
		gcRemoveSObjAll(subtitle_gobj);

		subtitle_sobj = lbCommonMakeSObjForGObj(subtitle_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[0], offsets[gMNVSRecordStatsKind]));
		subtitle_sobj->sprite.attr &= ~SP_FASTCOPY;
		subtitle_sobj->sprite.attr |= SP_TRANSPARENT;
		subtitle_sobj->sprite.red = 0;
		subtitle_sobj->sprite.green = 0;
		subtitle_sobj->sprite.blue = 0;
		subtitle_sobj->pos.x = 222.0f;
		subtitle_sobj->pos.y = 28.0f;
	}
}

// 0x80132994
void mnVSRecordCreateSubtitle()
{
	GObj* subtitle_gobj;
	SObj* subtitle_sobj;

	subtitle_gobj = gcMakeGObjSPAfter(0, 0, 2, 0x80000000);
	gcAddGObjDisplay(subtitle_gobj, lbCommonDrawSObjAttr, 1, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(subtitle_gobj, mnVSRecordRenderSubtitle, 1, 1);

	subtitle_sobj = lbCommonMakeSObjForGObj(subtitle_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[0], &FILE_01F_SUBTITLE_BATTLE_SCORE_IMAGE_OFFSET));
	subtitle_sobj->sprite.attr &= ~SP_FASTCOPY;
	subtitle_sobj->sprite.attr |= SP_TRANSPARENT;
	subtitle_sobj->sprite.red = 0;
	subtitle_sobj->sprite.green = 0;
	subtitle_sobj->sprite.blue = 0;
	subtitle_sobj->pos.x = 222.0f;
	subtitle_sobj->pos.y = 28.0f;
}

// 0x80132A50
void mnVSRecordUpdatePortraitArrowsDisplay(GObj* portrait_arrows_gobj)
{
	portrait_arrows_gobj->flags = (gMNVSRecordStatsKind == vsRecordsKindIndividual) ? 0 : 1;
}

// 0x80132A7C
void mnVSRecordCreatePortraitAndStatsArrows()
{
	GObj* portrait_arrows_gobj;
	SObj* portrait_arrows_sobj;

	portrait_arrows_gobj = gcMakeGObjSPAfter(0, 0, 2, 0x80000000);
	gcAddGObjDisplay(portrait_arrows_gobj, lbCommonDrawSObjAttr, 1, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(portrait_arrows_gobj, mnVSRecordUpdatePortraitArrowsDisplay, 1, 1);

	// left arrow
	portrait_arrows_sobj = lbCommonMakeSObjForGObj(portrait_arrows_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[1], &lMNDataCommonArrowLeftSprite));
	portrait_arrows_sobj->sprite.attr &= ~SP_FASTCOPY;
	portrait_arrows_sobj->sprite.attr |= SP_TRANSPARENT;
	portrait_arrows_sobj->sprite.red = 0xE3;
	portrait_arrows_sobj->sprite.green = 0x7D;
	portrait_arrows_sobj->sprite.blue = 0xC;
	portrait_arrows_sobj->pos.x = 40.0f;
	portrait_arrows_sobj->pos.y = 78.0f;

	// right arrow
	portrait_arrows_sobj = lbCommonMakeSObjForGObj(portrait_arrows_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[1], &lMNDataCommonArrowRightSprite));
	portrait_arrows_sobj->sprite.attr &= ~SP_FASTCOPY;
	portrait_arrows_sobj->sprite.attr |= SP_TRANSPARENT;
	portrait_arrows_sobj->sprite.red = 0xE3;
	portrait_arrows_sobj->sprite.green = 0x7D;
	portrait_arrows_sobj->sprite.blue = 0xC;
	portrait_arrows_sobj->pos.x = 105.0f;
	portrait_arrows_sobj->pos.y = 78.0f;
}

// 0x80132BA4
void mnVSRecordUpdateResortArrowsDisplay(GObj* resort_arrows_gobj)
{
	resort_arrows_gobj->flags = ((gMNVSRecordStatsKind == vsRecordsKindBattleScore) || (gMNVSRecordStatsKind == vsRecordsKindRanking)) ? 0 : 1;
}

// 0x80132BD4
void mnVSRecordCreateResortArrows()
{
	GObj* resort_arrows_gobj;
	SObj* resort_arrows_sobj;

	resort_arrows_gobj = gcMakeGObjSPAfter(0, 0, 2, 0x80000000);
	gcAddGObjDisplay(resort_arrows_gobj, lbCommonDrawSObjAttr, 1, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(resort_arrows_gobj, mnVSRecordUpdateResortArrowsDisplay, 1, 1);

	resort_arrows_sobj = lbCommonMakeSObjForGObj(resort_arrows_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[0], &FILE_01F_DOUBLE_DOWN_ARROW_IMAGE_OFFSET));
	resort_arrows_sobj->sprite.attr &= ~SP_FASTCOPY;
	resort_arrows_sobj->sprite.attr |= SP_TRANSPARENT;
	resort_arrows_sobj->pos.x = 281.0f;
	resort_arrows_sobj->pos.y = 39.0f;
	resort_arrows_sobj->sprite.red = 0xE3;
	resort_arrows_sobj->sprite.green = 0x7D;
	resort_arrows_sobj->sprite.blue = 0xC;
}

// 0x80132C9C
void mnVSRecordUpdateColumnArrowsDisplay(GObj* column_arrows_gobj)
{
	column_arrows_gobj->flags = (gMNVSRecordStatsKind == vsRecordsKindRanking) ? 0 : 1;
}

// 0x80132CC8
void mnVSRecordCreateColumnArrows()
{
	GObj* column_arrows_gobj;
	SObj* column_arrows_sobj;

	column_arrows_gobj = gcMakeGObjSPAfter(0, 0, 2, 0x80000000);
	gcAddGObjDisplay(column_arrows_gobj, lbCommonDrawSObjAttr, 1, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(column_arrows_gobj, mnVSRecordUpdateColumnArrowsDisplay, 1, 1);

	column_arrows_sobj = lbCommonMakeSObjForGObj(column_arrows_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[0], &FILE_01F_LEFT_AND_RIGHT_ARROW_IMAGE_OFFSET));
	column_arrows_sobj->sprite.attr &= ~SP_FASTCOPY;
	column_arrows_sobj->sprite.attr |= SP_TRANSPARENT;
	column_arrows_sobj->sprite.red = 0xE3;
	column_arrows_sobj->sprite.green = 0x7D;
	column_arrows_sobj->sprite.blue = 0xC;
	column_arrows_sobj->pos.x = 25.0f;
	column_arrows_sobj->pos.y = 47.0f;
}

// 0x80132D90
void mnVSRecordRenderBattleScoreGrid()
{
	s32 i;

	for (i = 0; i < 14; i++)
		gDPFillRectangle(gSYTaskmanDLHeads[0]++, 24, 48 + i * 13, 295, 48 + i * 13);

	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 24, 48, 24, 217);

	for (i = 0; i < 14; i += 1)
	{
		if (i == 13)
		{
			gDPFillRectangle(gSYTaskmanDLHeads[0]++, i * 18 + 61, 48, i * 18 + 61, 217);
		}
		else
			gDPFillRectangle(gSYTaskmanDLHeads[0]++, i * 18 + 48, 48, i * 18 + 48, 217);
	}
}

// 0x80132EE4
void mnVSRecordRenderRankingGrid(s32 first_column)
{
	s32 x;
	s32 indexes[ARRAY_COUNT(dMNVSRecordRankingColumnWidths)];
	s32 i;

	for (i = 0; i < ARRAY_COUNT(indexes); i++)
	{
		if (first_column >= ARRAY_COUNT(dMNVSRecordRankingColumnWidths))
			first_column -= ARRAY_COUNT(dMNVSRecordRankingColumnWidths);

		indexes[i] = first_column++;
	}
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 24, 46, 295, 46);

	for (i = 0; i < 13; i++)
		gDPFillRectangle(gSYTaskmanDLHeads[0]++, 24, 61 + i * 13, 295, 61 + i * 13);

	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 24, 46, 24, 217);

	x = 48;

	for(i = 0; i < ARRAY_COUNT(indexes) + 1; i++)
	{
		gDPFillRectangle(gSYTaskmanDLHeads[0]++, x, 46, x, 217);

		if (i < ARRAY_COUNT(indexes))
			x += dMNVSRecordRankingColumnWidths[indexes[i]];
	}
}

// 0x801330FC
void mnVSRecordRenderIndividualGrid()
{
	s32 i;

	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 26, 144, 293, 144);

	for (i = 0; i < 5; i++)
		gDPFillRectangle(gSYTaskmanDLHeads[0]++, 26, 157 + i * 12, 293, 157 + i * 12);

	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 26, 144, 26, 205);

	for (i = 0; i < 13; i++)
		gDPFillRectangle(gSYTaskmanDLHeads[0]++, 65 + i * 19, 144, 65 + i * 19, 205);
}

// 0x8013328C
void mnVSRecordRenderTableGrid(GObj* table_border_gobj)
{
	s32 unused;

	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_FILL);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_NOOP, G_RM_NOOP2);
	gDPSetFillColor(gSYTaskmanDLHeads[0]++, syVideoGetFillColor(0x62626AFF));

	switch (gMNVSRecordStatsKind)
	{
		case vsRecordsKindBattleScore:
			mnVSRecordRenderBattleScoreGrid();
			break;
		case vsRecordsKindRanking:
			mnVSRecordRenderRankingGrid(gMNVSRecordFirstColumn);
			break;
		case vsRecordsKindIndividual:
			mnVSRecordRenderIndividualGrid();
			break;
	}

	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);

	lbCommonClearExternSpriteParams();
}

// 0x801333EC
void mnVSRecordCreateStatsGrid()
{
	GObj* table_border_gobj = gcMakeGObjSPAfter(0, 0, 2, 0x80000000);
	gcAddGObjDisplay(table_border_gobj, mnVSRecordRenderTableGrid, 3, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x80133438
void mnVSRecordSetIconPositionForColumn(SObj* icon_sobj, s32 column)
{
	f32 x;
	f32 y;
	s32 fkind;
	s32 col_width;
	Vec2f offsets[12] = {

		{ 1.0f, -5.0f }, { 1.0f, -6.0f }, { 0.0f, -6.0f }, { 0.0f, -4.0f },
		{ 1.0f, -6.0f }, { 0.0f, -5.0f }, { 1.0f, -5.0f }, { 0.0f, -3.0f },
		{ 0.0f,  1.0f }, { 0.0f, -5.0f }, { 0.0f, -1.0f }, { 0.0f, -2.0f }
	};

	switch (gMNVSRecordStatsKind)
	{
		case vsRecordsKindBattleScore:
			col_width = 18;
			x = 49.0f;
			y = 49.0f;
			fkind = gMNVSRecordBattleScoreFighterKindOrder[column];
			break;
		case vsRecordsKindIndividual:
			col_width = 19;
			x = 66.0f;
			y = 145.0f;
			fkind = gMNVSRecordIndividualFighterKindOrder[column];
			break;
	}

	if (mnVSRecordIsUnlocked(fkind))
	{
		icon_sobj->pos.x = x + (col_width * column) + offsets[fkind].x;
		icon_sobj->pos.y = y + offsets[fkind].y;
	}
	else {
		icon_sobj->pos.x = x + (col_width * column) + 5.0f;
		icon_sobj->pos.y = y;
	}
}

// 0x801335A0
SObj* mnVSRecordCreateLockedIcon(GObj* icon_gobj)
{
	SObj* icon_sobj;

	icon_sobj = lbCommonMakeSObjForGObj(icon_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[0], &FILE_01F_QUESTION_MARK_IMAGE_OFFSET));
	icon_sobj->sprite.attr &= ~SP_FASTCOPY;
	icon_sobj->sprite.attr |= SP_TRANSPARENT;
	icon_sobj->sprite.red = 0x8A;
	icon_sobj->sprite.green = 0x88;
	icon_sobj->sprite.blue = 0x92;

	return icon_sobj;
}

// 0x801335FC
void mnVSRecordCreateColumnIcons(s32 icon_gobj)
{
	intptr_t offsets[12] = {

		0x1918, 0x1A98, 0x1CA8, 0x1E88,
		0x2008, 0x2370, 0x2178, 0x2540,
		0x2930, 0x2B30, 0x27C8, 0x2698
	};
	s32 i;
	SObj* icon_sobj;
	s32* fkinds;

	switch (gMNVSRecordStatsKind)
	{
		case vsRecordsKindBattleScore:
			fkinds = &gMNVSRecordBattleScoreFighterKindOrder;
			break;
		case vsRecordsKindIndividual:
			fkinds = &gMNVSRecordIndividualFighterKindOrder;
			break;
	}

	for (i = 0; i < ARRAY_COUNT(offsets); i++)
	{
		if (mnVSRecordIsUnlocked(fkinds[i]))
		{
			icon_sobj = lbCommonMakeSObjForGObj(icon_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[0], offsets[fkinds[i]]));
			icon_sobj->sprite.attr &= ~SP_FASTCOPY;
			icon_sobj->sprite.attr |= SP_TRANSPARENT;
		}
		else
			icon_sobj = mnVSRecordCreateLockedIcon(icon_gobj);

		mnVSRecordSetIconPositionForColumn(icon_sobj, i);
	}
}

// 0x80133740
void mnVSRecordSetIconPositionForRow(SObj* icon_sobj, s32 row)
{
	f32 x = 25.0f;
	f32 y = 62.0f;
	s32 fkind;
	Vec2f offsets[12] = {

		{ 5.0f, 0.0f }, { 5.0f, 0.0f }, { 0.0f, 0.0f }, { 0.0f, 0.0f },
		{ 3.0f, 0.0f }, { 5.0f, 0.0f }, { 5.0f, 0.0f }, { 1.0f, 0.0f },
		{ 0.0f, 1.0f }, { 0.0f, 0.0f }, { 4.0f, 0.0f }, { 3.0f, 0.0f }
	};

	switch (gMNVSRecordStatsKind)
	{
		case vsRecordsKindBattleScore:
			fkind = gMNVSRecordBattleScoreFighterKindOrder[row];
			break;
		case vsRecordsKindRanking:
			fkind = gMNVSRecordRankingFighterKindOrder[row];
			break;
	}

	if (mnVSRecordIsUnlocked(fkind))
	{
		icon_sobj->pos.x = x + offsets[fkind].x;
		icon_sobj->pos.y = y + (row * 13) + offsets[fkind].y;
	}
	else
	{
		icon_sobj->pos.x = x + 8.0f;
		icon_sobj->pos.y = y + (row * 13);
	}
}

// 0x8013388C
void mnVSRecordCreateRowIcons(GObj* icon_gobj)
{
	intptr_t offsets[12] = {

		0x2D18, 0x2EF8, 0x3198, 0x3438,
		0x3618, 0x3A38, 0x37F8, 0x3CD8,
		0x4308, 0x45A8, 0x4098, 0x3EB8
	};
	s32 i;
	SObj* icon_sobj;
	s32* fkinds;
	s32 foo;

	switch (gMNVSRecordStatsKind)
	{
		case vsRecordsKindBattleScore:
			fkinds = &gMNVSRecordBattleScoreFighterKindOrder;
			break;
		case vsRecordsKindRanking:
			fkinds = &gMNVSRecordRankingFighterKindOrder;
			break;
	}

	for (i = 0; i < ARRAY_COUNT(offsets); i++)
	{
		if (mnVSRecordIsUnlocked(fkinds[i]))
		{
			icon_sobj = lbCommonMakeSObjForGObj(icon_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[0], offsets[fkinds[i]]));
			icon_sobj->sprite.attr &= ~SP_FASTCOPY;
			icon_sobj->sprite.attr |= SP_TRANSPARENT;
		}
		else
			icon_sobj = mnVSRecordCreateLockedIcon(icon_gobj);

		mnVSRecordSetIconPositionForRow(icon_sobj, i);
	}
}

// 0x801339D0
s32 mnVSRecordGetRanking(s32 fkind)
{
	s32 fkinds_ordered[12];
	s32 rank[12];
	s32 current_order;
	s32 i;
	f64 stats[12];
	s32 foo, bar;

	for (i = 0; i < 12; i++)
		fkinds_ordered[i] = mnVSRecordGetFighterKindByIndex(i);

	for (i = 0; i < 12; i++)
		stats[i] = mnVSRecordGetWinPercentage(i);

	for (i = 0; i < 12; i++)
	{
		s32 j;

		for (j = i + 1; j < 12; j++)
		{
			if ((mnVSRecordIsUnlocked(fkinds_ordered[i]) == FALSE) ||
				(stats[fkinds_ordered[i]] < stats[fkinds_ordered[j]]) &&
				(mnVSRecordIsUnlocked(fkinds_ordered[j])))
			{
				s32 prev = fkinds_ordered[i];
				fkinds_ordered[i] = fkinds_ordered[j];
				fkinds_ordered[j] = prev;
			}
		}
	}

	current_order = 1;

	for (i = 0; i < 12; i++)
	{
		rank[fkinds_ordered[i]] = current_order;

		if (i != 11 && stats[fkinds_ordered[i]] != stats[fkinds_ordered[i + 1]])
			current_order  = i + 2;
	}

	return rank[fkind];
}

// 0x80133C60
void mnVSRecordCreatePortraitAndStats(GObj* individual_stats_gobj, s32 fkind)
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

	sobj = lbCommonMakeSObjForGObj(individual_stats_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[0], &FILE_01F_PORTRAIT_BACKGROUND_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->pos.x = 52.0f;
	sobj->pos.y = 55.0f;

	sobj = lbCommonMakeSObjForGObj(individual_stats_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[2], offsets[fkind]));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->pos.x = 57.0f;
	sobj->pos.y = 60.0f;

	mnVSRecordDrawString(individual_stats_gobj, "RANKING", 150, 60, color);
	mnVSRecordCreateNumber(individual_stats_gobj, 12, 265, 58, colors, FALSE, TRUE, 2, FALSE);

	sobj = lbCommonMakeSObjForGObj(individual_stats_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[0], &FILE_01F_SLASH_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->pos.x = 251.0f;
	sobj->pos.y = 59.0f;
	sobj->sprite.red = color[0];
	sobj->sprite.green = color[1];
	sobj->sprite.blue = color[2];

	mnVSRecordCreateNumber(individual_stats_gobj, mnVSRecordGetRanking(fkind), 250, 58, colors, FALSE, TRUE, 2, FALSE);

	mnVSRecordDrawString(individual_stats_gobj, "USED %", 150, 68, color);
	mnVSRecordCreateNumber(individual_stats_gobj, mnVSRecordGetUsePercentage(fkind) * 10, 265, 66, colors, TRUE, TRUE, 3, FALSE);

	mnVSRecordDrawString(individual_stats_gobj, "ATTACK 3TOTAL", 149, 78, color);
	mnVSRecordCreateNumber(individual_stats_gobj, gSCManagerBackupData.vs_records[fkind].damage_dealt, 265, 76, colors, FALSE, TRUE, 6, FALSE);

	mnVSRecordDrawString(individual_stats_gobj, "DAMAGE TOTAL", 150, 86, color);
	mnVSRecordCreateNumber(individual_stats_gobj, gSCManagerBackupData.vs_records[fkind].damage_taken, 265, 84, colors, FALSE, TRUE, 6, FALSE);
}

// 0x80133FE8
void mnVSRecordSortData(s32 stats_kind)
{
	s32 fkinds_ordered[12];
	f64 stats[12];
	s32 i;

	for (i = 0; i < 12; i++)
		fkinds_ordered[i] = mnVSRecordGetFighterKindByIndex(i);

	switch (stats_kind)
	{
		case vsRecordsKindBattleScore:
			for (i = 0; i < 12; i++)
				stats[i] = mnVSRecordGetKOs(i);
			break;
		case vsRecordsKindRanking:
			for (i = 0; i < 12; i++)
			{
				switch (gMNVSRecordFirstColumn) {
					case vsRecordsRankingColumnKindWinPercentage:
						stats[i] = mnVSRecordGetWinPercentage(i);
						break;
					case vsRecordsRankingColumnKindKOs:
						stats[i] = mnVSRecordGetKOs(i);
						break;
					case vsRecordsRankingColumnKindTKOs:
						stats[i] = mnVSRecordGetTKOs(i);
						break;
					case vsRecordsRankingColumnKindSDPercentage:
						stats[i] = mnVSRecordGetSDPercentage(i);
						break;
					case vsRecordsRankingColumnKindTime:
						stats[i] = gSCManagerBackupData.vs_records[i].time_used;
						break;
					case vsRecordsRankingColumnKindUsePercentage:
						stats[i] = mnVSRecordGetUsePercentage(i);
						break;
					case vsRecordsRankingColumnKindAverage:
						stats[i] = mnVSRecordGetAverage(i);
						break;
				}
			}
			break;
		case vsRecordsKindIndividual:
			for (i = 0; i < 12; i++)
				stats[i] = mnVSRecordGetWinPercentageAgainst(gMNVSRecordRankingFighterKindOrder[gMNVSRecordCurrentIndex], i);
			break;
	}

	for (i = 0; i < 12; i++)
	{
		s32 j;

		for (j = i + 1; j < 12; j++)
		{
			if ((mnVSRecordIsUnlocked(fkinds_ordered[i]) == FALSE) ||
				(stats[fkinds_ordered[i]] < stats[fkinds_ordered[j]]) &&
				(mnVSRecordIsUnlocked(fkinds_ordered[j])))
			{
				s32 prev = fkinds_ordered[i];
				fkinds_ordered[i] = fkinds_ordered[j];
				fkinds_ordered[j] = prev;
			}
		}
	}

	switch (stats_kind)
	{
		case vsRecordsKindBattleScore:
			for (i = 0; i < 12; i++)
				gMNVSRecordBattleScoreFighterKindOrder[i] = fkinds_ordered[i];
			break;
		case vsRecordsKindRanking:
			for (i = 0; i < 12; i++)
				gMNVSRecordRankingFighterKindOrder[i] = fkinds_ordered[i];
			break;
		case vsRecordsKindIndividual:
			for (i = 0; i < 12; i++)
				gMNVSRecordIndividualFighterKindOrder[i] = fkinds_ordered[i];
			break;
		default:
			break;
	}
}

// 0x801343E0
GObj* mnVSRecordCreateBattleScoreTableValues()
{
	f32 x, y;
	s32 colors[6] = {

		0x0, 0x0, 0x0, 0xE5, 0xD1, 0x99
	};
	GObj* values_gobj;
	s32 i, j;

	values_gobj = gcMakeGObjSPAfter(0, 0, 6, 0x80000000);
	gcAddGObjDisplay(values_gobj, lbCommonDrawSObjAttr, 5, GOBJ_PRIORITY_DEFAULT, ~0);

	for (i = 0; i < 12; i++)
	{
		x = 66.0f;
		y = (i * 13);

		if (mnVSRecordIsUnlocked(gMNVSRecordBattleScoreFighterKindOrder[i]))
		{
			for (j = 0; j < 12; j++)
			{
				if (mnVSRecordIsUnlocked(gMNVSRecordBattleScoreFighterKindOrder[j]))
				{
					mnVSRecordCreateNumber(values_gobj, gSCManagerBackupData.vs_records[gMNVSRecordBattleScoreFighterKindOrder[i]].ko_count[gMNVSRecordBattleScoreFighterKindOrder[j]], x + (j * 0x12), y + 65.0f, colors, FALSE, FALSE, 4, FALSE);
				}
			}

			mnVSRecordCreateNumber(values_gobj, mnVSRecordGetKOs(gMNVSRecordBattleScoreFighterKindOrder[i]), x + 216.0f + 10.0f, y + 65.0f, colors, FALSE, FALSE, 6, FALSE);
		}
	}

	return values_gobj;
}

// 0x80134610
s32 mnVSRecordCreateBattleScoreTableHeaders()
{
	GObj* headers_gobj;
	SObj* headers_sobj;

	headers_gobj = gcMakeGObjSPAfter(0, 0, 5, 0x80000000);
	gcAddGObjDisplay(headers_gobj, lbCommonDrawSObjAttr, 4, GOBJ_PRIORITY_DEFAULT, ~0);

	headers_sobj = lbCommonMakeSObjForGObj(headers_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[0], &FILE_01F_TOTAL_TEXTURE_IMAGE_OFFSET));
	headers_sobj->sprite.attr &= ~SP_FASTCOPY;
	headers_sobj->sprite.attr |= SP_TRANSPARENT;
	headers_sobj->sprite.red = 0x8A;
	headers_sobj->sprite.green = 0x88;
	headers_sobj->sprite.blue = 0x92;
	headers_sobj->pos.x = 264.0f;
	headers_sobj->pos.y = 50.0f;

	mnVSRecordCreateRowIcons(headers_gobj);
	mnVSRecordCreateColumnIcons(headers_gobj);

	return headers_gobj;
}

// 0x801346D8
void mnVSRecordRenderRankingRowHighlight(GObj* row_highlight_gobj)
{
	if (gMNVSRecordStatsKind == vsRecordsKindRanking)
	{
		gDPPipeSync(gSYTaskmanDLHeads[0]++);
		gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
		gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 39, 0, 255, 255);
		gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
		gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
		gDPFillRectangle(gSYTaskmanDLHeads[0]++, 24, 62 + (gMNVSRecordCurrentIndex * 13), 295, 74 + (gMNVSRecordCurrentIndex * 13));
		gDPPipeSync(gSYTaskmanDLHeads[0]++);
		gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
		gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);

		lbCommonClearExternSpriteParams();
	}
}

// 0x80134868
void mnVSRecordCreateRankingRowHighlight()
{
	GObj* row_highlight_gobj = gcMakeGObjSPAfter(0, 0, 3, 0x80000000);
	gcAddGObjDisplay(row_highlight_gobj, mnVSRecordRenderRankingRowHighlight, 2, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x801348B4
f32 mnVSRecordGetAverage(s32 fkind)
{
	if (gSCManagerBackupData.vs_records[fkind].games_played != 0)
		return (f32) gSCManagerBackupData.vs_records[fkind].player_count_tally / gSCManagerBackupData.vs_records[fkind].games_played;
	else
		return 0.0f;
}

// 0x80134934
s32 mnVSRecordGetGamesPlayedSum()
{
	s32 i;
	s32 total_games_played = 0;

	for (i = 0; i < 12; i++)
		total_games_played += gSCManagerBackupData.vs_records[i].games_played;

	return total_games_played;
}

// 0x80134978
f32 mnVSRecordGetUsePercentage(s32 fkind)
{
	f32 use_percentage;

	if (mnVSRecordGetGamesPlayedSum() != 0.0f)
		use_percentage = gSCManagerBackupData.vs_records[fkind].games_played / (f32) mnVSRecordGetGamesPlayedSum();
	else
		use_percentage = 0.0f;

	return use_percentage * 100.0f;
}

// 0x80134A1C
f32 mnVSRecordGetSDPercentage(s32 fkind)
{
	f32 sd_percentage;
	f32 total_kos = mnVSRecordGetTKOs(fkind);
	f32 selfdestructs = gSCManagerBackupData.vs_records[fkind].selfdestructs;

	if (total_kos != 0.0f)
		sd_percentage = selfdestructs / total_kos;
	else
		sd_percentage = 0.0f;

	return sd_percentage * 100.0f;
}

// 0x80134AA8
GObj* mnVSRecordCreateRankingTableValues(s32 column)
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
	gcAddGObjDisplay(table_values_gobj, lbCommonDrawSObjAttr, 5, GOBJ_PRIORITY_DEFAULT, ~0);

	for (i = 0; i < 12; i++)
	{
		if (mnVSRecordIsUnlocked(gMNVSRecordRankingFighterKindOrder[i]))
		{
			x = 0x30;
			y = (i * 13) + 65.0f;

			for (j = 0; j < ARRAY_COUNT(col_widths); j++)
			{
				switch (column_order[j])
				{
					SObj* table_values_sobj;

					case vsRecordsRankingColumnKindWinPercentage:
						mnVSRecordCreateNumber(table_values_gobj, mnVSRecordGetWinPercentage(gMNVSRecordRankingFighterKindOrder[i]) * 10.0f, col_widths[column_order[j]] + x, y, colors, TRUE, FALSE, 3, FALSE);
						break;
					case vsRecordsRankingColumnKindKOs:
						mnVSRecordCreateNumber(table_values_gobj, mnVSRecordGetKOs(gMNVSRecordRankingFighterKindOrder[i]), col_widths[column_order[j]] + x, y, colors, FALSE, FALSE, 6, FALSE);
						break;
					case vsRecordsRankingColumnKindTKOs:
						mnVSRecordCreateNumber(table_values_gobj, mnVSRecordGetTKOs(gMNVSRecordRankingFighterKindOrder[i]), col_widths[column_order[j]] + x, y, colors, FALSE, FALSE, 6, FALSE);
						break;
					case vsRecordsRankingColumnKindSDPercentage:
						mnVSRecordCreateNumber(table_values_gobj, mnVSRecordGetSDPercentage(gMNVSRecordRankingFighterKindOrder[i]) * 10.0f, col_widths[column_order[j]] + x, y, colors, TRUE, FALSE, 3, FALSE);
						break;
					case vsRecordsRankingColumnKindTime:
						mnVSRecordCreateNumber(table_values_gobj, (gSCManagerBackupData.vs_records[gMNVSRecordRankingFighterKindOrder[i]].time_used % 3600) / 60, col_widths[column_order[j]] + x, y, colors, FALSE, FALSE, 2, TRUE);

						table_values_sobj = lbCommonMakeSObjForGObj(table_values_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[0], &FILE_01F_COLON_IMAGE_OFFSET));
						mnVSRecordSetTextureColors(table_values_sobj, colors);

						table_values_sobj->pos.x = col_widths[column_order[j]] + x - 11;
						table_values_sobj->pos.y = y;

						mnVSRecordCreateNumber(table_values_gobj, gSCManagerBackupData.vs_records[gMNVSRecordRankingFighterKindOrder[i]].time_used / 3600, col_widths[column_order[j]] + x - 13, y, colors, FALSE, FALSE, 3, FALSE);
						break;
					case vsRecordsRankingColumnKindUsePercentage:
						mnVSRecordCreateNumber(table_values_gobj, mnVSRecordGetUsePercentage(gMNVSRecordRankingFighterKindOrder[i]) * 10.0f, col_widths[column_order[j]] + x, y, colors, TRUE, FALSE, 3, FALSE);
						break;
					case vsRecordsRankingColumnKindAverage:
						mnVSRecordCreateNumber(table_values_gobj, mnVSRecordGetAverage(gMNVSRecordRankingFighterKindOrder[i]) * 10.0f, col_widths[column_order[j]] + x - 15, y, colors, TRUE, FALSE, 1, FALSE);
						break;
				}

				x += dMNVSRecordRankingColumnWidths[column_order[j]];
			}
		}
	}

	return table_values_gobj;
}

// 0x80135108
GObj* mnVSRecordCreateRankingTableHeaders(s32 column)
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
	gcAddGObjDisplay(table_headers_gobj, lbCommonDrawSObjAttr, 4, GOBJ_PRIORITY_DEFAULT, ~0);

	x = 0x30;
	for (i = 0; i < ARRAY_COUNT(offsets); i++)
	{
		table_headers_sobj = lbCommonMakeSObjForGObj(table_headers_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[0], offsets[column_order[i]]));
		table_headers_sobj->sprite.attr &= ~SP_FASTCOPY;
		table_headers_sobj->sprite.attr |= SP_TRANSPARENT;
		table_headers_sobj->pos.x = x_padding[column_order[i]] + x;
		table_headers_sobj->pos.y = 49.0f;
		table_headers_sobj->sprite.red = 0x8A;
		table_headers_sobj->sprite.green = 0x88;
		table_headers_sobj->sprite.blue = 0x92;

		x += dMNVSRecordRankingColumnWidths[column_order[i]];
	}

	mnVSRecordCreateRowIcons(table_headers_gobj);
	return table_headers_gobj;
}

// 0x8013531C
f32 mnVSRecordGetWinPercentageAgainst(s32 fkind, s32 fkind_opponent)
{
	f32 kos_for = gSCManagerBackupData.vs_records[fkind].ko_count[fkind_opponent];
	f32 total_kos = kos_for + gSCManagerBackupData.vs_records[fkind_opponent].ko_count[fkind];
	f32 ko_percentage;

	if (total_kos != 0.0f)
		ko_percentage = kos_for / total_kos;
	else
		ko_percentage = 0.0f;

	return ko_percentage * 100.0f;
}

// 0x801353F4
f32 mnVSRecordGetAverageAgainst(s32 fkind, s32 fkind_opponent)
{
	if (gSCManagerBackupData.vs_records[fkind].played_against[fkind_opponent] != 0)
		return (f32) gSCManagerBackupData.vs_records[fkind].player_count_tallies[fkind_opponent] / gSCManagerBackupData.vs_records[fkind].played_against[fkind_opponent];
	else
		return 0.0f;
}

// 0x8013547C - Unused?
void func_ovl32_8013547C() {}

// 0x80135484
s32 mnVSRecordCreateIndividualTableValues()
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
	gcAddGObjDisplay(table_values_gobj, lbCommonDrawSObjAttr, 5, GOBJ_PRIORITY_DEFAULT, ~0);

	for (i = 0; i < 12; i++)
	{
		if (mnVSRecordIsUnlocked(gMNVSRecordRankingFighterKindOrder[i]))
		{
			x = (i * 19) + 84.0f;
			mnVSRecordCreateNumber(table_values_gobj, mnVSRecordGetWinPercentageAgainst(gMNVSRecordRankingFighterKindOrder[gMNVSRecordCurrentIndex], gMNVSRecordIndividualFighterKindOrder[i]) * 10.0f, x, y[0], colors, TRUE, FALSE, 3, FALSE);
			mnVSRecordCreateNumber(table_values_gobj, gSCManagerBackupData.vs_records[gMNVSRecordRankingFighterKindOrder[gMNVSRecordCurrentIndex]].ko_count[gMNVSRecordIndividualFighterKindOrder[i]], x, y[1], colors, FALSE, FALSE, 4, FALSE);
			mnVSRecordCreateNumber(table_values_gobj, gSCManagerBackupData.vs_records[gMNVSRecordIndividualFighterKindOrder[i]].ko_count[gMNVSRecordRankingFighterKindOrder[gMNVSRecordCurrentIndex]], x, y[2], colors, FALSE, FALSE, 4, FALSE);
			mnVSRecordCreateNumber(table_values_gobj, mnVSRecordGetAverageAgainst(gMNVSRecordRankingFighterKindOrder[gMNVSRecordCurrentIndex], gMNVSRecordIndividualFighterKindOrder[i]) * 10.0f, x, y[3], colors, TRUE, FALSE, 3, FALSE);
		}
	}

	return table_values_gobj;
}

// 0x80135784
s32 mnVSRecordCreateIndividualPortraitStatsAndTableHeaders()
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
	gcAddGObjDisplay(individual_stats_gobj, lbCommonDrawSObjAttr, 4, GOBJ_PRIORITY_DEFAULT, ~0);

	for (i = 0; i < 4; i++)
	{
		individual_stats_sobj = lbCommonMakeSObjForGObj(individual_stats_gobj, lbRelocGetFileData(void*, gMNVSRecordFiles[0], offsets[i]));
		individual_stats_sobj->sprite.attr &= ~SP_FASTCOPY;
		individual_stats_sobj->sprite.attr |= SP_TRANSPARENT;
		individual_stats_sobj->pos.x = positions[i].x;
		individual_stats_sobj->pos.y = positions[i].y;
		individual_stats_sobj->sprite.red = 0x8A;
		individual_stats_sobj->sprite.green = 0x88;
		individual_stats_sobj->sprite.blue = 0x92;
	}

	mnVSRecordCreateColumnIcons(individual_stats_gobj);
	mnVSRecordCreatePortraitAndStats(individual_stats_gobj, gMNVSRecordRankingFighterKindOrder[gMNVSRecordCurrentIndex]);

	return individual_stats_gobj;
}

// 0x80135934
void mnVSRecordCreateStats(s32 stats_kind)
{
	switch (stats_kind)
	{
		case vsRecordsKindBattleScore:
			mnVSRecordSortData(stats_kind);

			gMNVSRecordTableHeadersGObj = mnVSRecordCreateBattleScoreTableHeaders();
			gMNVSRecordTableValuesGObj = mnVSRecordCreateBattleScoreTableValues();
			break;
		case vsRecordsKindRanking:
			mnVSRecordSortData(stats_kind);

			gMNVSRecordTableHeadersGObj = mnVSRecordCreateRankingTableHeaders(gMNVSRecordFirstColumn);
			gMNVSRecordTableValuesGObj = mnVSRecordCreateRankingTableValues(gMNVSRecordFirstColumn);
			break;
		case vsRecordsKindIndividual:
			mnVSRecordSortData(stats_kind);

			gMNVSRecordTableHeadersGObj = mnVSRecordCreateIndividualPortraitStatsAndTableHeaders();
			gMNVSRecordTableValuesGObj = mnVSRecordCreateIndividualTableValues();
			break;
	}
}

// 0x801359EC
void mnVSRecordCreateTableValuesSYRdpViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(1, NULL, 1, GOBJ_PRIORITY_DEFAULT, lbCommonDrawSprite, 0x28, 0x00000020, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135A8C
void mnVSRecordCreateTableHeadersSYRdpViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(1, NULL, 1, GOBJ_PRIORITY_DEFAULT, lbCommonDrawSprite, 0x14, 0x00000010, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135B2C
void mnVSRecordCreateTableGridViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(1, NULL, 1, GOBJ_PRIORITY_DEFAULT, lbCommonDrawSprite, 0x3C, 0x00000008, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135BCC
void mnVSRecordCreateRankingRowHighlightViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(1, NULL, 1, GOBJ_PRIORITY_DEFAULT, lbCommonDrawSprite, 0x46, 0x00000004, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135C6C
void mnVSRecordCreateTitleViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(1, NULL, 1, GOBJ_PRIORITY_DEFAULT, lbCommonDrawSprite, 0x50, 0x00000002, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135D0C
void mnVSRecordInitVars()
{
	gMNVSRecordStatsKind = vsRecordsKindBattleScore;
	gMNVSRecordRedrawSubtitle = FALSE;
	gMNVSRecordCurrentIndex = 0;
	gMNVSRecordChangeWait = 0;
	gMNVSRecordUnlockedMask = gSCManagerBackupData.fighter_mask;
	gMNVSRecordFirstColumn = vsRecordsRankingColumnKindWinPercentage;
}

// 0x80135D48
void mnVSRecordRedrawStats(s32 stats_kind)
{
	if (gMNVSRecordTableHeadersGObj != NULL)
		gcEjectGObj(gMNVSRecordTableHeadersGObj);

	if (gMNVSRecordTableValuesGObj != NULL)
		gcEjectGObj(gMNVSRecordTableValuesGObj);

	mnVSRecordCreateStats(stats_kind);
}

// 0x80135D98
void mnVSRecordMain(GObj* arg0)
{
	s32 unused;
	s32 stick_range;
	s32 is_button;

	if (gMNVSRecordChangeWait != 0)
	{
		gMNVSRecordChangeWait--;
	}

	if
	(
		(gMNVSRecordStatsKind == vsRecordsKindIndividual) &&
		(scSubsysControllerGetPlayerStickInRangeLR(-0x14, 0x14)) &&
		(scSubsysControllerGetPlayerStickInRangeUD(-0x14, 0x14)) &&
		(scSubsysControllerGetPlayerHoldButtons(R_JPAD | U_JPAD | R_TRIG | R_CBUTTONS | U_CBUTTONS) == FALSE) &&
		(scSubsysControllerGetPlayerHoldButtons(L_JPAD | D_JPAD | L_TRIG | L_CBUTTONS | D_CBUTTONS) == FALSE)
	)
	{
		gMNVSRecordChangeWait = 0;
	}

	if (gMNVSRecordRedrawSubtitle)
	{
		gMNVSRecordRedrawSubtitle = FALSE;
	}

	if (scSubsysControllerGetPlayerTapButtons(B_BUTTON))
	{
		if (gMNVSRecordStatsKind == vsRecordsKindBattleScore)
		{
			gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
			gSCManagerSceneData.scene_curr =  0x3AU;

			syTaskmanSetLoadScene();
		}
		else
		{
			func_800269C0_275C0(nSYAudioFGMBurnS);

			gMNVSRecordStatsKind--;
			gMNVSRecordRedrawSubtitle = TRUE;

			mnVSRecordRedrawStats(gMNVSRecordStatsKind);
		}
	}

	if
	(
		((scSubsysControllerGetPlayerTapButtons(A_BUTTON)) ||
		(scSubsysControllerGetPlayerTapButtons(START_BUTTON))) &&
		(gMNVSRecordStatsKind < 2)
	)
	{
		func_800269C0_275C0(nSYAudioFGMBurnS);

		gMNVSRecordStatsKind++;
		gMNVSRecordRedrawSubtitle = TRUE;

		mnVSRecordRedrawStats(gMNVSRecordStatsKind);
	}

	if (gMNVSRecordStatsKind == vsRecordsKindRanking)
	{
		if
		(
			mnCommonCheckGetOptionButtonInput(gMNVSRecordChangeWait, is_button, U_JPAD | U_CBUTTONS) ||
			mnCommonCheckGetOptionStickInputUD(gMNVSRecordChangeWait, stick_range, 20, 1)
		)
		{
			func_800269C0_275C0(nSYAudioFGMFoxFoot);

			if (gMNVSRecordCurrentIndex == 0)
			{
				gMNVSRecordCurrentIndex = 11;
			}
			else
				gMNVSRecordCurrentIndex--;

			while (mnVSRecordIsUnlocked(gMNVSRecordRankingFighterKindOrder[gMNVSRecordCurrentIndex]) == FALSE)
			{
				if (gMNVSRecordCurrentIndex == 0)
				{
					gMNVSRecordCurrentIndex = 11;
				}
				else
					gMNVSRecordCurrentIndex--;
			}

			mnCommonSetOptionChangeWaitP(gMNVSRecordChangeWait, is_button, stick_range, 7);
		}

		if
		(
			mnCommonCheckGetOptionButtonInput(gMNVSRecordChangeWait, is_button, D_JPAD | D_CBUTTONS) ||
			mnCommonCheckGetOptionStickInputUD(gMNVSRecordChangeWait, stick_range, -20, 0)
		)
		{
			func_800269C0_275C0(nSYAudioFGMFoxFoot);

			if (gMNVSRecordCurrentIndex == 11)
			{
				gMNVSRecordCurrentIndex = 0;
			}
			else
				gMNVSRecordCurrentIndex++;

			while (mnVSRecordIsUnlocked(gMNVSRecordRankingFighterKindOrder[gMNVSRecordCurrentIndex]) == FALSE)
			{
				if (gMNVSRecordCurrentIndex == 11)
				{
					gMNVSRecordCurrentIndex = 0;
				}
				else
					gMNVSRecordCurrentIndex++;
			}

			mnCommonSetOptionChangeWaitN(gMNVSRecordChangeWait, is_button, stick_range, 7);
		}

		if
		(
			mnCommonCheckGetOptionButtonInput(gMNVSRecordChangeWait, is_button, R_JPAD | R_TRIG | R_CBUTTONS) ||
			mnCommonCheckGetOptionStickInputLR(gMNVSRecordChangeWait, stick_range, 20, 1)
		)
		{
			func_800269C0_275C0(nSYAudioFGMFoxFoot);

			if (gMNVSRecordFirstColumn == vsRecordsRankingColumnKindWinPercentage)
			{
				gMNVSRecordFirstColumn = vsRecordsRankingColumnKindAverage;
			}
			else
				gMNVSRecordFirstColumn--;

			gMNVSRecordRedrawSubtitle = TRUE;

			mnVSRecordRedrawStats(gMNVSRecordStatsKind);

			mnCommonSetOptionChangeWaitP(gMNVSRecordChangeWait, is_button, stick_range, 7);
		}

		if
		(
			mnCommonCheckGetOptionButtonInput(gMNVSRecordChangeWait, is_button, L_JPAD | L_TRIG | L_CBUTTONS) ||
			mnCommonCheckGetOptionStickInputLR(gMNVSRecordChangeWait, stick_range, -20, 0)
		)
		{
			func_800269C0_275C0(nSYAudioFGMFoxFoot);

			if (gMNVSRecordFirstColumn == vsRecordsRankingColumnKindAverage)
			{
				gMNVSRecordFirstColumn = vsRecordsRankingColumnKindWinPercentage;
			}
			else
				gMNVSRecordFirstColumn++;

			gMNVSRecordRedrawSubtitle = TRUE;

			mnVSRecordRedrawStats(gMNVSRecordStatsKind);

			mnCommonSetOptionChangeWaitN(gMNVSRecordChangeWait, is_button, stick_range, 7);
		}
	}

	if (gMNVSRecordStatsKind == vsRecordsKindIndividual)
	{
		if
		(
			mnCommonCheckGetOptionButtonInput(gMNVSRecordChangeWait, is_button, R_JPAD | R_TRIG | R_CBUTTONS) ||
			mnCommonCheckGetOptionStickInputLR(gMNVSRecordChangeWait, stick_range, 20, 1)
		)
		{
			func_800269C0_275C0(nSYAudioFGMFoxFoot);

			if (gMNVSRecordCurrentIndex == 11)
				gMNVSRecordCurrentIndex = 0;
			else
				gMNVSRecordCurrentIndex++;

			while (mnVSRecordIsUnlocked(gMNVSRecordRankingFighterKindOrder[gMNVSRecordCurrentIndex]) == FALSE)
			{
				if (gMNVSRecordCurrentIndex == 11)
					gMNVSRecordCurrentIndex = 0;
				else
					gMNVSRecordCurrentIndex++;
			}

			mnVSRecordRedrawStats(gMNVSRecordStatsKind);

			if (is_button)
				gMNVSRecordChangeWait = 12;
			else
				gMNVSRecordChangeWait = mnCommonGetOptionChangeWaitP(20, 7);
		}

		if
		(
			mnCommonCheckGetOptionButtonInput(gMNVSRecordChangeWait, is_button, L_JPAD | L_TRIG | L_CBUTTONS) ||
			mnCommonCheckGetOptionStickInputLR(gMNVSRecordChangeWait, stick_range, -20, 0)
		)
		{
			func_800269C0_275C0(nSYAudioFGMFoxFoot);

			if (gMNVSRecordCurrentIndex == 0)
				gMNVSRecordCurrentIndex = 11;
			else
				gMNVSRecordCurrentIndex--;

			while (mnVSRecordIsUnlocked(gMNVSRecordRankingFighterKindOrder[gMNVSRecordCurrentIndex]) == FALSE)
			{
				if (gMNVSRecordCurrentIndex == 0)
					gMNVSRecordCurrentIndex = 11;
				else
					gMNVSRecordCurrentIndex--;
			}

			mnVSRecordRedrawStats(gMNVSRecordStatsKind);

			if (is_button)
				gMNVSRecordChangeWait = 12;
			else
				gMNVSRecordChangeWait = mnCommonGetOptionChangeWaitN(-20, 7);
		}
	}
}

// 0x80136488
void mnVSRecordInit()
{
	LBRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = (LBFileNode*) &D_ovl32_80136CC8;
	rl_setup.status_buffer_size = 0x18;
	rl_setup.force_status_buffer = 0;
	rl_setup.force_status_buffer_size = 0;
	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern(D_ovl32_8013664C, ARRAY_COUNT(D_ovl32_8013664C), gMNVSRecordFiles, syTaskmanMalloc(lbRelocGetAllocSize(D_ovl32_8013664C, ARRAY_COUNT(D_ovl32_8013664C)), 0x10U));

	gcMakeGObjSPAfter(0, mnVSRecordMain, 0, 0x80000000);
	gcMakeDefaultCameraGObj(0, GOBJ_PRIORITY_DEFAULT, 100, COBJ_FLAG_FILLCOLOR, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));

	mnVSRecordInitVars();
	mnVSRecordCreateTitleViewport();
	mnVSRecordCreateRankingRowHighlightViewport();
	mnVSRecordCreateTableGridViewport();
	mnVSRecordCreateTableHeadersSYRdpViewport();
	mnVSRecordCreateTableValuesSYRdpViewport();
	mnVSRecordCreateTitle();
	mnVSRecordCreateSubtitle();
	mnVSRecordCreatePortraitAndStatsArrows();
	mnVSRecordCreateResortArrows();
	mnVSRecordCreateColumnArrows();
	mnVSRecordCreateStatsGrid();
	mnVSRecordCreateStats(gMNVSRecordStatsKind);
	mnVSRecordCreateRankingRowHighlight();

	auPlaySong(0, nSYAudioBGMData);
}

// 0x801369CC
SYVideoSetup D_ovl32_801369CC = {

	&gSYFramebufferSets[0],
	&gSYFramebufferSets[1],
	&gSYFramebufferSets[2],
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99
};

// 0x801369E8
scRuntimeInfo D_ovl32_801369E8 = {

	0x00000000, 0x8000A5E4,
	gcDrawAll, &lOverlay32ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x0000EA60, 0x00000000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000C000,
	mnVSRecordSetLighting, syControllerFuncRead,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mnVSRecordInit,
};

// 0x801365D0
void vs_records_entry()
{
	D_ovl32_801369CC.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&D_ovl32_801369CC);
	D_ovl32_801369E8.arena_size = (u32) ((uintptr_t)&lOverlay32ArenaHi - (uintptr_t)&lOverlay32ArenaLo);
	syTaskmanRun(&D_ovl32_801369E8);
}