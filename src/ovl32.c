#include <ft/fighter.h>
#include <sc/scene.h>
#include <mn/menu.h>
#include <sys/video.h>

#include "ovl32.h"

#define mnVSRecordCheckGetOptionButtonInput(is_button, mask) \
mnCommonCheckGetOptionButtonInput(sMNVSRecordChangeWait, is_button, mask)

#define mnVSRecordCheckGetOptionStickInputUD(stick_range, min, b) \
mnCommonCheckGetOptionStickInputUD(sMNVSRecordChangeWait, stick_range, min, b)

#define mnVSRecordCheckGetOptionStickInputLR(stick_range, min, b) \
mnCommonCheckGetOptionStickInputLR(sMNVSRecordChangeWait, stick_range, min, b)

#define mnVSRecordSetOptionChangeWaitP(is_button, stick_range, div) \
mnCommonSetOptionChangeWaitP(sMNVSRecordChangeWait, is_button, stick_range, div)

#define mnVSRecordSetOptionChangeWaitN(is_button, stick_range, div) \
mnCommonSetOptionChangeWaitN(sMNVSRecordChangeWait, is_button, stick_range, div)

// Offsets

extern intptr_t lMNVSRecordDigit0Sprite;			// 0x000002F0
extern intptr_t lMNVSRecordDigit1Sprite;			// 0x00000390
extern intptr_t lMNVSRecordDigit2Sprite;			// 0x00000430
extern intptr_t lMNVSRecordDigit3Sprite;			// 0x000004D0
extern intptr_t lMNVSRecordDigit4Sprite;			// 0x00000570
extern intptr_t lMNVSRecordDigit5Sprite;			// 0x00000610
extern intptr_t lMNVSRecordDigit6Sprite;			// 0x000006B0
extern intptr_t lMNVSRecordDigit7Sprite;			// 0x00000750
extern intptr_t lMNVSRecordDigit8Sprite;			// 0x000007F0
extern intptr_t lMNVSRecordDigit9Sprite;			// 0x00000890

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

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

// Forward declarations
s32 mnVSRecordCheckHaveFighterKind(s32 fkind);
s32 mnVSRecordGetCharIndex(u8);
f32 mnVSRecordGetUsePercent(s32 fkind);
f32 mnVSRecordGetAverage(s32 fkind);
f32 mnVSRecordGetSelfDestructsPercent(s32 fkind);
f32 mnVSRecordGetWinPercentAgainst(s32 fkind, s32 against_fkind);

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80136630
s32 dMNVSRecordRankingColumnWidths[/* */] = { 33, 33, 33, 33, 46, 35, 34 };

// 0x8013664C
u32 dMNVSRecordFileIDs[/* */] = { 0x1F, &lMNDataCommonFileID, 0x13, 0x21 };

// 0x80136660
Lights1 dMNVSRecordLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x80136678
Gfx dMNVSRecordDisplayList[/* */] =
{
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPSetLights1(dMNVSRecordLights1),
	gsSPEndDisplayList()
};

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80136C10
s32 sMNVSRecordPad0x80136C10[2];

// 0x80136C18
s32 sMNVSRecordStatsKind;

// 0x80136C1C
sb32 sMNVSRecordIsChangeSubtitle;

// 0x80136C20
GObj *sMNVSRecordTableHeadersGObj;

// 0x80136C24
GObj *sMNVSRecordTableValuesGObj;

// 0x80136C28 - VS Mode scores character order
s32 sMNVSRecordBattleScoreFighterKinds[(nFTKindPlayableEnd - nFTKindPlayableStart) + 1];

// 0x80136C58 - Ranking character order
s32 sMNVSRecordRankingFighterKindOrder[(nFTKindPlayableEnd - nFTKindPlayableStart) + 1];

// 0x80136C88 - Individual character order
s32 sMNVSRecordIndivFighterKinds[(nFTKindPlayableEnd - nFTKindPlayableStart) + 1];

// 0x80136CB8
s32 sMNVSRecordCurrentIndex;

// 0x80136CBC
u16 sMNVSRecordFighterMask;

// 0x80136CC0
s32 sMNVSRecordFirstColumn;

// 0x80136CC4
s32 sMNVSRecordChangeWait;

// 0x80136CC8
LBFileNode sMNVSRecordStatusBuffer[24];

// 0x80136D88
void *sMNVSRecordFiles[ARRAY_COUNT(dMNVSRecordFileIDs)];

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mnVSRecordFuncLights(Gfx **dls)
{
	gSPDisplayList(dls[0]++, dMNVSRecordDisplayList);
}

// 0x80131B24
s32 mnVSRecordGetFighterKindByIndex(s32 index)
{
	s32 fkinds[/* */] =
	{
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
	return fkinds[index];
}

// 0x80131B74
s32 mnVSRecordGetKOs(s32 fkind)
{
	s32 i;
	s32 total_kos = 0;

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		if (mnVSRecordCheckHaveFighterKind(i) != FALSE)
		{
			total_kos += gSCManagerBackupData.vs_records[fkind].ko_count[i];
		}
	}
	return total_kos;
}

// 0x80131C0C
s32 mnVSRecordGetTKOs(s32 fkind)
{
	s32 i;
	s32 total_tkos = 0;

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		if (mnVSRecordCheckHaveFighterKind(i))
		{
			total_tkos += gSCManagerBackupData.vs_records[i].ko_count[fkind];
		}
	}
	if ((gSCManagerBackupData.vs_records[fkind].selfdestructs + total_tkos) > 9999)
	{
		return 9999;
	}
	else return gSCManagerBackupData.vs_records[fkind].selfdestructs + total_tkos;
}

// 0x80131CD4
s32 mnVSRecordGetTotalTKOs(void)
{
	s32 i;
	s32 total_tkos = 0;

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		if (mnVSRecordCheckHaveFighterKind(i))
		{
			total_tkos += mnVSRecordGetTKOs(i);
		}
	}

	return total_tkos;
}

// 0x80131D38
f32 mnVSRecordGetWinPercent(s32 fkind)
{
	f32 kos = mnVSRecordGetKOs(fkind);
	f32 tkos = mnVSRecordGetTotalTKOs();

	return ((tkos != 0.0F) ? kos / tkos : 0.0F) * 100.0F;
}

// 0x80131DA0
s32 mnVSRecordGetPowerOf(s32 base, s32 exp)
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

// 0x80131E40
void mnVSRecordSetTextureColors(SObj* sobj, u32 *colors)
{
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->envcolor.r = colors[0];
	sobj->envcolor.g = colors[1];
	sobj->envcolor.b = colors[2];

	sobj->sprite.red = colors[3];
	sobj->sprite.green = colors[4];
	sobj->sprite.blue = colors[5];
}

// 0x80131E88
s32 mnVSRecordGetDigitCount(s32 number, s32 digit_count_max)
{
	s32 digit_count_curr = digit_count_max;

	while (digit_count_curr > 0)
	{
		s32 digit = (mnVSRecordGetPowerOf(10, digit_count_curr - 1) != 0) ? number / mnVSRecordGetPowerOf(10, digit_count_curr - 1) : 0;

		if (digit != 0)
		{
			return digit_count_curr;
		}
		else digit_count_curr--;
	}
	return 0;
}

// 0x80131F34
void mnVSRecordMakeDigits(GObj *gobj, s32 number, f32 x, f32 y, u32 *colors, sb32 is_show_tenths, sb32 is_wide, s32 digit_count_max, sb32 is_fixed_digit_count)
{
	intptr_t offsets[/* */] =
	{
		&lMNVSRecordDigit0Sprite, &lMNVSRecordDigit1Sprite,
		&lMNVSRecordDigit2Sprite, &lMNVSRecordDigit3Sprite,
		&lMNVSRecordDigit4Sprite, &lMNVSRecordDigit5Sprite,
		&lMNVSRecordDigit6Sprite, &lMNVSRecordDigit7Sprite,
		&lMNVSRecordDigit8Sprite, &lMNVSRecordDigit9Sprite
	};
	SObj *sobj;
	f32 calc_x = x;
	s32 i;
	s32 digit;

	if (number < 0)
	{
		number = 0;
	}
	if ((is_show_tenths != FALSE) && (number == 1000))
	{
		is_show_tenths = FALSE;
		number = number / 10;
	}

	if (is_show_tenths != FALSE)
	{
		s32 decimal = number % 10;
		number = number / 10;

		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[0], offsets[decimal]));
		mnVSRecordSetTextureColors(sobj, colors);

		if (is_wide != FALSE)
		{
			calc_x -= 5.0F;
		}
		else calc_x -= 4.0F;

		sobj->pos.x = calc_x;
		sobj->pos.y = y;

		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[0], &FILE_01F_DECIMAL_POINT_IMAGE_OFFSET));
		mnVSRecordSetTextureColors(sobj, colors);

		if (is_wide != FALSE)
		{
			calc_x -= 3.0F;
		}
		else calc_x -= 2.0F;

		sobj->pos.x = calc_x;
		sobj->pos.y = y + 4.0F;
	}

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[0], offsets[number % 10]));
	mnVSRecordSetTextureColors(sobj, colors);

	if (is_wide != FALSE)
	{
		calc_x -= 5.0F;
	}
	else calc_x -= 4.0F;

	sobj->pos.x = calc_x;
	sobj->pos.y = y;

	for (i = 1; i < ((is_fixed_digit_count != FALSE) ? digit_count_max : mnVSRecordGetDigitCount(number, digit_count_max)); i++)
	{
		digit = (mnVSRecordGetPowerOf(10, i) != 0) ? number / mnVSRecordGetPowerOf(10, i) : 0;

		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[0], offsets[digit % 10]));
		mnVSRecordSetTextureColors(sobj, colors);

		if (is_wide != FALSE)
		{
			calc_x -= 5.0F;
		}
		else calc_x -= 4.0F;

		sobj->pos.x = calc_x;
		sobj->pos.y = y;
	}
}

// 0x8013232C
s32 mnVSRecordGetCharIndex(u8 chr)
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
void mnVSRecordDrawString(GObj* gobj, const char *str, f32 x, f32 y, u32 *color)
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
				start_x += 4.0F;
			else
				start_x += str[i] - '0';
		}
		else
		{
			chr_sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMNVSRecordFiles[3], chrOffsets[mnVSRecordGetCharIndex(str[i])]));
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
sb32 mnVSRecordCheckHaveFighterKind(s32 fkind)
{
	switch (fkind)
	{
	case nFTKindNess:
		return (sMNVSRecordFighterMask & LBBACKUP_MASK_FIGHTER(nFTKindNess)) ? TRUE : FALSE;

	case nFTKindPurin:
		return (sMNVSRecordFighterMask & LBBACKUP_MASK_FIGHTER(nFTKindPurin)) ? TRUE : FALSE;

	case nFTKindCaptain:
		return (sMNVSRecordFighterMask & LBBACKUP_MASK_FIGHTER(nFTKindCaptain)) ? TRUE : FALSE;
		
	case nFTKindLuigi:
		return (sMNVSRecordFighterMask & LBBACKUP_MASK_FIGHTER(nFTKindLuigi)) ? TRUE : FALSE;
		
	default:
		return TRUE;
	}
}

// 0x801327B8
void mnVSRecordMakeLabels(void)
{
	GObj *gobj;
	SObj *sobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 2, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, GOBJ_PRIORITY_DEFAULT, ~0);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[1], &FILE_020_DATA_HEADER_IMAGE_OFFSET));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->sprite.red = 0x5F;
	sobj->sprite.green = 0x58;
	sobj->sprite.blue = 0x46;

	sobj->pos.x = 24.0F;
	sobj->pos.y = 17.0F;

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[0], &FILE_01F_VS_RECORD_IMAGE_OFFSET));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->envcolor.r = 0x00;
	sobj->envcolor.g = 0x00;
	sobj->envcolor.b = 0x00;

	sobj->sprite.red = 0xF2;
	sobj->sprite.green = 0xC7;
	sobj->sprite.blue = 0x0D;

	sobj->pos.x = 99.0F;
	sobj->pos.y = 23.0F;
}

// 0x801328D4
void mnVSRecordSubtitleProcUpdate(GObj *gobj)
{
	SObj *sobj;
	intptr_t offsets[/* */] =
	{
		&FILE_01F_SUBTITLE_BATTLE_SCORE_IMAGE_OFFSET,
		0x1458,
		0x1318,
		0x0
	};

	if (sMNVSRecordIsChangeSubtitle != FALSE)
	{
		gcRemoveSObjAll(gobj);

		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[0], offsets[sMNVSRecordStatsKind]));

		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;

		sobj->sprite.red = 0x00;
		sobj->sprite.green = 0x00;
		sobj->sprite.blue = 0x00;

		sobj->pos.x = 222.0F;
		sobj->pos.y = 28.0F;
	}
}

// 0x80132994
void mnVSRecordMakeSubtitle(void)
{
	GObj *gobj;
	SObj *sobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 2, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnVSRecordSubtitleProcUpdate, nGCProcessKindFunc, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[0], &FILE_01F_SUBTITLE_BATTLE_SCORE_IMAGE_OFFSET));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->sprite.red = 0x00;
	sobj->sprite.green = 0x00;
	sobj->sprite.blue = 0x00;

	sobj->pos.x = 222.0F;
	sobj->pos.y = 28.0F;
}

// 0x80132A50
void mnVSRecordPortraitArrowsProcUpdate(GObj *gobj)
{
	gobj->flags = (sMNVSRecordStatsKind == nMNVSRecordKindIndiv) ? GOBJ_FLAG_NONE : GOBJ_FLAG_HIDDEN;
}

// 0x80132A7C
void mnVSRecordMakePortraitStatsArrows(void)
{
	GObj *gobj;
	SObj *sobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 2, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnVSRecordPortraitArrowsProcUpdate, nGCProcessKindFunc, 1);

	// left arrow
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[1], &lMNDataCommonArrowLeftSprite));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->sprite.red = 0xE3;
	sobj->sprite.green = 0x7D;
	sobj->sprite.blue = 0x0C;

	sobj->pos.x = 40.0F;
	sobj->pos.y = 78.0F;

	// right arrow
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[1], &lMNDataCommonArrowRightSprite));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->sprite.red = 0xE3;
	sobj->sprite.green = 0x7D;
	sobj->sprite.blue = 0x0C;

	sobj->pos.x = 105.0F;
	sobj->pos.y = 78.0F;
}

// 0x80132BA4
void mnVSRecordResortArrowsProcUpdate(GObj *gobj)
{
	gobj->flags =
	(
		(sMNVSRecordStatsKind == nMNVSRecordKindBattleScore) ||
		(sMNVSRecordStatsKind == nMNVSRecordKindRanking)
	)
	? GOBJ_FLAG_NONE : GOBJ_FLAG_HIDDEN;
}

// 0x80132BD4
void mnVSRecordMakeResortArrows(void)
{
	GObj *gobj;
	SObj *sobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 2, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnVSRecordResortArrowsProcUpdate, nGCProcessKindFunc, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[0], &FILE_01F_DOUBLE_DOWN_ARROW_IMAGE_OFFSET));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 281.0F;
	sobj->pos.y = 39.0F;

	sobj->sprite.red = 0xE3;
	sobj->sprite.green = 0x7D;
	sobj->sprite.blue = 0xC;
}

// 0x80132C9C
void mnVSRecordColumnArrowsProcUpdate(GObj *gobj)
{
	gobj->flags = (sMNVSRecordStatsKind == nMNVSRecordKindRanking) ? GOBJ_FLAG_NONE : GOBJ_FLAG_HIDDEN;
}

// 0x80132CC8
void mnVSRecordMakeColumnArrows(void)
{
	GObj *gobj;
	SObj *sobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 2, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnVSRecordColumnArrowsProcUpdate, nGCProcessKindFunc, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[0], &FILE_01F_LEFT_AND_RIGHT_ARROW_IMAGE_OFFSET));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->sprite.red = 0xE3;
	sobj->sprite.green = 0x7D;
	sobj->sprite.blue = 0x0C;

	sobj->pos.x = 25.0F;
	sobj->pos.y = 47.0F;
}

// 0x80132D90
void mnVSRecordDrawBattleScoreGrid(void)
{
	s32 i;

	for (i = 0; i < 14; i++)
	{
		gDPFillRectangle(gSYTaskmanDLHeads[0]++, 24, 48 + i * 13, 295, 48 + i * 13);
	}
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 24, 48, 24, 217);

	for (i = 0; i < 14; i++)
	{
		if (i == 13)
		{
			gDPFillRectangle(gSYTaskmanDLHeads[0]++, i * 18 + 61, 48, i * 18 + 61, 217);
		}
		else gDPFillRectangle(gSYTaskmanDLHeads[0]++, i * 18 + 48, 48, i * 18 + 48, 217);
	}
}

// 0x80132EE4
void mnVSRecordDrawRankingGrid(s32 first_column)
{
	s32 x;
	s32 ids[ARRAY_COUNT(dMNVSRecordRankingColumnWidths)];
	s32 i;

	for (i = 0; i < ARRAY_COUNT(ids); i++)
	{
		if (first_column >= ARRAY_COUNT(dMNVSRecordRankingColumnWidths))
		{
			first_column -= ARRAY_COUNT(dMNVSRecordRankingColumnWidths);
		}
		ids[i] = first_column++;
	}
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 24, 46, 295, 46);

	for (i = 0; i < 13; i++)
	{
		gDPFillRectangle(gSYTaskmanDLHeads[0]++, 24, 61 + i * 13, 295, 61 + i * 13);
	}
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 24, 46, 24, 217);

	x = 48;

	for(i = 0; i < ARRAY_COUNT(ids) + 1; i++)
	{
		gDPFillRectangle(gSYTaskmanDLHeads[0]++, x, 46, x, 217);

		if (i < ARRAY_COUNT(ids))
		{
			x += dMNVSRecordRankingColumnWidths[ids[i]];
		}
	}
}

// 0x801330FC
void mnVSRecordDrawIndividualGrid(void)
{
	s32 i;

	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 26, 144, 293, 144);

	for (i = 0; i < 5; i++)
	{
		gDPFillRectangle(gSYTaskmanDLHeads[0]++, 26, 157 + i * 12, 293, 157 + i * 12);
	}
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 26, 144, 26, 205);

	for (i = 0; i < 13; i++)
	{
		gDPFillRectangle(gSYTaskmanDLHeads[0]++, 65 + i * 19, 144, 65 + i * 19, 205);
	}
}

// 0x8013328C
void mnVSRecordTableGridFuncDisplay(GObj *gobj)
{
	s32 unused;

	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_FILL);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_NOOP, G_RM_NOOP2);
	gDPSetFillColor(gSYTaskmanDLHeads[0]++, syVideoGetFillColor(GPACK_RGBA8888(0x62, 0x62, 0x6A, 0xFF)));

	switch (sMNVSRecordStatsKind)
	{
	case nMNVSRecordKindBattleScore:
		mnVSRecordDrawBattleScoreGrid();
		break;
	
	case nMNVSRecordKindRanking:
		mnVSRecordDrawRankingGrid(sMNVSRecordFirstColumn);
		break;
		
	case nMNVSRecordKindIndiv:
		mnVSRecordDrawIndividualGrid();
		break;
	}
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);

	lbCommonClearExternSpriteParams();
}

// 0x801333EC
void mnVSRecordMakeStatsGrid(void)
{
	GObj *gobj = gcMakeGObjSPAfter(0, NULL, 2, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, mnVSRecordTableGridFuncDisplay, 3, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x80133438
void mnVSRecordSetIconPositionForColumn(SObj *sobj, s32 column)
{
	f32 x;
	f32 y;
	s32 fkind;
	s32 col_width;
	Vec2f offsets[/* */] =
	{
		{ 1.0F, -5.0F }, { 1.0F, -6.0F },
		{ 0.0F, -6.0F }, { 0.0F, -4.0F },
		{ 1.0F, -6.0F }, { 0.0F, -5.0F },
		{ 1.0F, -5.0F }, { 0.0F, -3.0F },
		{ 0.0F,  1.0F }, { 0.0F, -5.0F },
		{ 0.0F, -1.0F }, { 0.0F, -2.0F }
	};

	switch (sMNVSRecordStatsKind)
	{
	case nMNVSRecordKindBattleScore:
		col_width = 18;
		x = 49.0F;
		y = 49.0F;
		fkind = sMNVSRecordBattleScoreFighterKinds[column];
		break;

	case nMNVSRecordKindIndiv:
		col_width = 19;
		x = 66.0F;
		y = 145.0F;
		fkind = sMNVSRecordIndivFighterKinds[column];
		break;
	}
	if (mnVSRecordCheckHaveFighterKind(fkind))
	{
		sobj->pos.x = x + (col_width * column) + offsets[fkind].x;
		sobj->pos.y = y + offsets[fkind].y;
	}
	else
	{
		sobj->pos.x = x + (col_width * column) + 5.0F;
		sobj->pos.y = y;
	}
}

// 0x801335A0
SObj* mnVSRecordMakeLockedIcon(GObj *gobj)
{
	SObj* sobj;

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[0], &FILE_01F_QUESTION_MARK_IMAGE_OFFSET));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->sprite.red = 0x8A;
	sobj->sprite.green = 0x88;
	sobj->sprite.blue = 0x92;

	return sobj;
}

// 0x801335FC
void mnVSRecordMakeColumnIcons(GObj *gobj)
{
	intptr_t offsets[/* */] =
	{
		0x1918, 0x1A98, 0x1CA8, 0x1E88,
		0x2008, 0x2370, 0x2178, 0x2540,
		0x2930, 0x2B30, 0x27C8, 0x2698
	};
	s32 i;
	SObj *sobj;
	s32 *fkinds;

	switch (sMNVSRecordStatsKind)
	{
	case nMNVSRecordKindBattleScore:
		fkinds = sMNVSRecordBattleScoreFighterKinds;
		break;

	case nMNVSRecordKindIndiv:
		fkinds = sMNVSRecordIndivFighterKinds;
		break;
	}
	for (i = 0; i < ARRAY_COUNT(offsets); i++)
	{
		if (mnVSRecordCheckHaveFighterKind(fkinds[i]) != FALSE)
		{
			sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[0], offsets[fkinds[i]]));

			sobj->sprite.attr &= ~SP_FASTCOPY;
			sobj->sprite.attr |= SP_TRANSPARENT;
		}
		else sobj = mnVSRecordMakeLockedIcon(gobj);

		mnVSRecordSetIconPositionForColumn(sobj, i);
	}
}

// 0x80133740
void mnVSRecordSetRowIconPosition(SObj *sobj, s32 row)
{
	f32 x = 25.0F;
	f32 y = 62.0F;
	s32 fkind;
	Vec2f offsets[/* */] =
	{
		{ 5.0F, 0.0F }, { 5.0F, 0.0F },
		{ 0.0F, 0.0F }, { 0.0F, 0.0F },
		{ 3.0F, 0.0F }, { 5.0F, 0.0F },
		{ 5.0F, 0.0F }, { 1.0F, 0.0F },
		{ 0.0F, 1.0F }, { 0.0F, 0.0F },
		{ 4.0F, 0.0F }, { 3.0F, 0.0F }
	};

	switch (sMNVSRecordStatsKind)
	{
	case nMNVSRecordKindBattleScore:
		fkind = sMNVSRecordBattleScoreFighterKinds[row];
		break;
		
	case nMNVSRecordKindRanking:
		fkind = sMNVSRecordRankingFighterKindOrder[row];
		break;
	}
	if (mnVSRecordCheckHaveFighterKind(fkind) != FALSE)
	{
		sobj->pos.x = x + offsets[fkind].x;
		sobj->pos.y = y + (row * 13) + offsets[fkind].y;
	}
	else
	{
		sobj->pos.x = x + 8.0F;
		sobj->pos.y = y + (row * 13);
	}
}

// 0x8013388C
void mnVSRecordMakeRowIcons(GObj *gobj)
{
	intptr_t offsets[/* */] =
	{
		0x2D18, 0x2EF8, 0x3198, 0x3438,
		0x3618, 0x3A38, 0x37F8, 0x3CD8,
		0x4308, 0x45A8, 0x4098, 0x3EB8
	};
	s32 i;
	SObj *sobj;
	s32 *fkinds;
	s32 unused;

	switch (sMNVSRecordStatsKind)
	{
	case nMNVSRecordKindBattleScore:
		fkinds = sMNVSRecordBattleScoreFighterKinds;
		break;
	
	case nMNVSRecordKindRanking:
		fkinds = sMNVSRecordRankingFighterKindOrder;
		break;
	}
	for (i = 0; i < ARRAY_COUNT(offsets); i++)
	{
		if (mnVSRecordCheckHaveFighterKind(fkinds[i]) != FALSE)
		{
			sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[0], offsets[fkinds[i]]));

			sobj->sprite.attr &= ~SP_FASTCOPY;
			sobj->sprite.attr |= SP_TRANSPARENT;
		}
		else sobj = mnVSRecordMakeLockedIcon(gobj);

		mnVSRecordSetRowIconPosition(sobj, i);
	}
}

// 0x801339D0
s32 mnVSRecordGetRanking(s32 fkind)
{
	s32 fkinds[(nFTKindPlayableEnd - nFTKindPlayableStart) + 1];
	s32 rank[(nFTKindPlayableEnd - nFTKindPlayableStart) + 1];
	s32 current_order;
	s32 i;
	f64 stats[(nFTKindPlayableEnd - nFTKindPlayableStart) + 1];
	s32 unused[2];

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		fkinds[i] = mnVSRecordGetFighterKindByIndex(i);
	}
	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		stats[i] = mnVSRecordGetWinPercent(i);
	}
	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		s32 j;

		for (j = i + 1; j <= nFTKindPlayableEnd; j++)
		{
			if
			(
				(mnVSRecordCheckHaveFighterKind(fkinds[i]) == FALSE) ||
				(stats[fkinds[i]] < stats[fkinds[j]]) &&
				(mnVSRecordCheckHaveFighterKind(fkinds[j]) != FALSE)
			)
			{
				s32 prev = fkinds[i];

				fkinds[i] = fkinds[j];
				fkinds[j] = prev;
			}
		}
	}
	current_order = 1;

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		rank[fkinds[i]] = current_order;

		if ((i != nFTKindPlayableEnd) && (stats[fkinds[i]] != stats[fkinds[i + 1]]))
		{
			current_order = i + 2;
		}
	}
	return rank[fkind];
}

// 0x80133C60
void mnVSRecordMakePortraitStats(GObj* gobj, s32 fkind)
{
	SObj* sobj;
	intptr_t offsets[/* */] =
	{
		0x4728, 0x0D068, 0x08BC8, 0x0AE18,
		0x6978, 0x11508, 0x13758, 0x19E48,
		0xF2B8, 0x159A8, 0x1C098, 0x17BF8
	};
	u32 string_colors[/* */] = { 0x8A, 0x88, 0x92 };
	u32 digit_colors[/* */] = { 0x00, 0x00, 0x00, 0x8A, 0x88, 0x92 };

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[0], &FILE_01F_PORTRAIT_BACKGROUND_IMAGE_OFFSET));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 52.0F;
	sobj->pos.y = 55.0F;

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[2], offsets[fkind]));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 57.0F;
	sobj->pos.y = 60.0F;

	mnVSRecordDrawString(gobj, "RANKING", 150, 60, string_colors);
	mnVSRecordMakeDigits(gobj, 12, 265, 58, digit_colors, FALSE, TRUE, 2, FALSE);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[0], &FILE_01F_SLASH_IMAGE_OFFSET));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 251.0F;
	sobj->pos.y = 59.0F;

	sobj->sprite.red = string_colors[0];
	sobj->sprite.green = string_colors[1];
	sobj->sprite.blue = string_colors[2];

	mnVSRecordMakeDigits(gobj, mnVSRecordGetRanking(fkind), 250, 58, digit_colors, FALSE, TRUE, 2, FALSE);

	mnVSRecordDrawString(gobj, "USED %", 150, 68, string_colors);
	mnVSRecordMakeDigits(gobj, mnVSRecordGetUsePercent(fkind) * 10, 265, 66, digit_colors, TRUE, TRUE, 3, FALSE);

	mnVSRecordDrawString(gobj, "ATTACK 3TOTAL", 149, 78, string_colors);
	mnVSRecordMakeDigits(gobj, gSCManagerBackupData.vs_records[fkind].damage_given, 265, 76, digit_colors, FALSE, TRUE, 6, FALSE);

	mnVSRecordDrawString(gobj, "DAMAGE TOTAL", 150, 86, string_colors);
	mnVSRecordMakeDigits(gobj, gSCManagerBackupData.vs_records[fkind].damage_taken, 265, 84, digit_colors, FALSE, TRUE, 6, FALSE);
}

// 0x80133FE8
void mnVSRecordSortData(s32 stats_kind)
{
	s32 fkinds[(nFTKindPlayableEnd - nFTKindPlayableStart) + 1];
	f64 stats[(nFTKindPlayableEnd - nFTKindPlayableStart) + 1];
	s32 i;

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		fkinds[i] = mnVSRecordGetFighterKindByIndex(i);
	}
	switch (stats_kind)
	{
	case nMNVSRecordKindBattleScore:
		for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
		{
			stats[i] = mnVSRecordGetKOs(i);
		}
		break;

		case nMNVSRecordKindRanking:
			for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
			{
				switch (sMNVSRecordFirstColumn)
				{
				case vsRecordsRankingColumnKindWinPercent:
					stats[i] = mnVSRecordGetWinPercent(i);
					break;

				case vsRecordsRankingColumnKindKOs:
					stats[i] = mnVSRecordGetKOs(i);
					break;
					
				case vsRecordsRankingColumnKindTKOs:
					stats[i] = mnVSRecordGetTKOs(i);
					break;
				
				case vsRecordsRankingColumnKindSDPercent:
					stats[i] = mnVSRecordGetSelfDestructsPercent(i);
					break;
				
				case vsRecordsRankingColumnKindTime:
					stats[i] = gSCManagerBackupData.vs_records[i].time_used;
					break;
					
				case vsRecordsRankingColumnKindUsePercent:
					stats[i] = mnVSRecordGetUsePercent(i);
					break;
					
				case vsRecordsRankingColumnKindAverage:
					stats[i] = mnVSRecordGetAverage(i);
					break;
				}
			}
			break;

	case nMNVSRecordKindIndiv:
		for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
		{
			stats[i] = mnVSRecordGetWinPercentAgainst(sMNVSRecordRankingFighterKindOrder[sMNVSRecordCurrentIndex], i);
		}
		break;
	}
	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		s32 j;

		for (j = i + 1; j <= nFTKindPlayableEnd; j++)
		{
			if
			(
				(mnVSRecordCheckHaveFighterKind(fkinds[i]) == FALSE) ||
				(stats[fkinds[i]] < stats[fkinds[j]]) &&
				(mnVSRecordCheckHaveFighterKind(fkinds[j]) != FALSE)
			)
			{
				s32 prev = fkinds[i];

				fkinds[i] = fkinds[j];
				fkinds[j] = prev;
			}
		}
	}
	switch (stats_kind)
	{
	case nMNVSRecordKindBattleScore:
		for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
		{
			sMNVSRecordBattleScoreFighterKinds[i] = fkinds[i];
		}
		break;

	case nMNVSRecordKindRanking:
		for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
		{
			sMNVSRecordRankingFighterKindOrder[i] = fkinds[i];
		}
		break;
		
	case nMNVSRecordKindIndiv:
		for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
		{
			sMNVSRecordIndivFighterKinds[i] = fkinds[i];
		}
		break;
		
	default:
		break;
	}
}

// 0x801343E0
GObj* mnVSRecordMakeBattleScoreTableValues()
{
	f32 x, y;
	u32 colors[/* */] = { 0x00, 0x00, 0x00, 0xE5, 0xD1, 0x99 };
	GObj* gobj;
	s32 i, j;

	gobj = gcMakeGObjSPAfter(0, NULL, 6, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 5, GOBJ_PRIORITY_DEFAULT, ~0);

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		x = 66.0F;
		y = (i * 13);

		if (mnVSRecordCheckHaveFighterKind(sMNVSRecordBattleScoreFighterKinds[i]))
		{
			for (j = nFTKindPlayableStart; j <= nFTKindPlayableEnd; j++)
			{
				if (mnVSRecordCheckHaveFighterKind(sMNVSRecordBattleScoreFighterKinds[j]))
				{
					mnVSRecordMakeDigits
					(
						gobj,
						gSCManagerBackupData.vs_records[sMNVSRecordBattleScoreFighterKinds[i]].ko_count[sMNVSRecordBattleScoreFighterKinds[j]],
						x + (j * 18),
						y + 65.0F,
						colors,
						FALSE,
						FALSE,
						4,
						FALSE
					);
				}
			}
			mnVSRecordMakeDigits(gobj, mnVSRecordGetKOs(sMNVSRecordBattleScoreFighterKinds[i]), x + 216.0F + 10.0F, y + 65.0F, colors, FALSE, FALSE, 6, FALSE);
		}
	}
	return gobj;
}

// 0x80134610
GObj* mnVSRecordMakeBattleScoreTableHeaders(void)
{
	GObj *gobj;
	SObj *sobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 5, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 4, GOBJ_PRIORITY_DEFAULT, ~0);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[0], &FILE_01F_TOTAL_TEXTURE_IMAGE_OFFSET));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->sprite.red = 0x8A;
	sobj->sprite.green = 0x88;
	sobj->sprite.blue = 0x92;

	sobj->pos.x = 264.0F;
	sobj->pos.y = 50.0F;

	mnVSRecordMakeRowIcons(gobj);
	mnVSRecordMakeColumnIcons(gobj);

	return gobj;
}

// 0x801346D8
void mnVSRecordRankingHighlightFuncDisplay(GObj *gobj)
{
	if (sMNVSRecordStatsKind == nMNVSRecordKindRanking)
	{
		gDPPipeSync(gSYTaskmanDLHeads[0]++);
		gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
		gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x27, 0x00, 0xFF, 0xFF);
		gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
		gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
		gDPFillRectangle(gSYTaskmanDLHeads[0]++, 24, 62 + (sMNVSRecordCurrentIndex * 13), 295, 74 + (sMNVSRecordCurrentIndex * 13));
		gDPPipeSync(gSYTaskmanDLHeads[0]++);
		gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
		gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);

		lbCommonClearExternSpriteParams();
	}
}

// 0x80134868
void mnVSRecordMakeRankingHighlight(void)
{
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, NULL, 3, GOBJ_PRIORITY_DEFAULT), mnVSRecordRankingHighlightFuncDisplay, 2, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x801348B4
f32 mnVSRecordGetAverage(s32 fkind)
{
	if (gSCManagerBackupData.vs_records[fkind].games_played != 0)
	{
		return (f32) gSCManagerBackupData.vs_records[fkind].player_count_tally / gSCManagerBackupData.vs_records[fkind].games_played;
	}
	else return 0.0F;
}

// 0x80134934
s32 mnVSRecordGetGamesPlayedSum(void)
{
	s32 i;
	s32 total = 0;

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		total += gSCManagerBackupData.vs_records[i].games_played;
	}
	return total;
}

// 0x80134978
f32 mnVSRecordGetUsePercent(s32 fkind)
{
	f32 use_percent;

	if (mnVSRecordGetGamesPlayedSum() != 0.0F)
	{
		use_percent = gSCManagerBackupData.vs_records[fkind].games_played / (f32) mnVSRecordGetGamesPlayedSum();
	}
	else use_percent = 0.0F;

	return use_percent * 100.0F;
}

// 0x80134A1C
f32 mnVSRecordGetSelfDestructsPercent(s32 fkind)
{
	f32 selfdestruct_percent;
	f32 total_tkos = mnVSRecordGetTKOs(fkind);
	f32 selfdestructs = gSCManagerBackupData.vs_records[fkind].selfdestructs;

	if (total_tkos != 0.0F)
	{
		selfdestruct_percent = selfdestructs / total_tkos;
	}
	else selfdestruct_percent = 0.0F;

	return selfdestruct_percent * 100.0F;
}

// 0x80134AA8
GObj* mnVSRecordMakeRankingTableValues(s32 column)
{
	s32 col_widths[/* */] = { 27, 30, 30, 23, 35, 27, 39 };
	GObj *gobj;
	u32 colors[/* */] = { 0x00, 0x00, 0x00, 0xE5, 0xD1, 0x99 };
	s32 i;
	s32 j;
	s32 column_order[ARRAY_COUNT(col_widths)];
	s32 x;
	f32 y;

	for (i = 0; i < (ARRAY_COUNT(col_widths) + ARRAY_COUNT(column_order)) / 2; i++)
	{
		if (column >= ARRAY_COUNT(col_widths))
		{
			column -= ARRAY_COUNT(col_widths);
		}
		column_order[i] = column++;
	}

	gobj = gcMakeGObjSPAfter(0, NULL, 6, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 5, GOBJ_PRIORITY_DEFAULT, ~0);

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		if (mnVSRecordCheckHaveFighterKind(sMNVSRecordRankingFighterKindOrder[i]))
		{
			x = 48;
			y = (i * 13) + 65.0F;

			for (j = 0; j < (ARRAY_COUNT(col_widths) + ARRAY_COUNT(column_order)) / 2; j++)
			{
				SObj *sobj;

				switch (column_order[j])
				{
				case vsRecordsRankingColumnKindWinPercent:
					mnVSRecordMakeDigits
					(
						gobj, mnVSRecordGetWinPercent(sMNVSRecordRankingFighterKindOrder[i]) * 10.0F,
						col_widths[column_order[j]] + x,
						y,
						colors,
						TRUE,
						FALSE,
						3,
						FALSE
					);
					break;
					
				case vsRecordsRankingColumnKindKOs:
					mnVSRecordMakeDigits
					(
						gobj,
						mnVSRecordGetKOs(sMNVSRecordRankingFighterKindOrder[i]),
						col_widths[column_order[j]] + x,
						y,
						colors,
						FALSE,
						FALSE,
						6,
						FALSE
					);
					break;
					
				case vsRecordsRankingColumnKindTKOs:
					mnVSRecordMakeDigits
					(
						gobj,
						mnVSRecordGetTKOs(sMNVSRecordRankingFighterKindOrder[i]),
						col_widths[column_order[j]] + x,
						y,
						colors,
						FALSE,
						FALSE,
						6,
						FALSE
					);
					break;
					
				case vsRecordsRankingColumnKindSDPercent:
					mnVSRecordMakeDigits
					(
						gobj,
						mnVSRecordGetSelfDestructsPercent(sMNVSRecordRankingFighterKindOrder[i]) * 10.0F,
						col_widths[column_order[j]] + x,
						y,
						colors,
						TRUE,
						FALSE,
						3,
						FALSE
					);
					break;
					
				case vsRecordsRankingColumnKindTime:
					mnVSRecordMakeDigits
					(
						gobj,
						(gSCManagerBackupData.vs_records[sMNVSRecordRankingFighterKindOrder[i]].time_used % 3600) / 60,
						col_widths[column_order[j]] + x,
						y,
						colors,
						FALSE,
						FALSE,
						2,
						TRUE
					);
					sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[0], &FILE_01F_COLON_IMAGE_OFFSET));
					mnVSRecordSetTextureColors(sobj, colors);

					sobj->pos.x = col_widths[column_order[j]] + x - 11;
					sobj->pos.y = y;

					mnVSRecordMakeDigits
					(
						gobj,
						gSCManagerBackupData.vs_records[sMNVSRecordRankingFighterKindOrder[i]].time_used / 3600,
						col_widths[column_order[j]] + x - 13,
						y,
						colors,
						FALSE,
						FALSE,
						3,
						FALSE
					);
					break;

				case vsRecordsRankingColumnKindUsePercent:
					mnVSRecordMakeDigits
					(
						gobj,
						mnVSRecordGetUsePercent(sMNVSRecordRankingFighterKindOrder[i]) * 10.0F,
						col_widths[column_order[j]] + x,
						y,
						colors,
						TRUE,
						FALSE,
						3,
						FALSE
					);
					break;

				case vsRecordsRankingColumnKindAverage:
					mnVSRecordMakeDigits
					(
						gobj,
						mnVSRecordGetAverage(sMNVSRecordRankingFighterKindOrder[i]) * 10.0F,
						col_widths[column_order[j]] + x - 15,
						y,
						colors,
						TRUE,
						FALSE,
						1,
						FALSE
					);
					break;
				}
				x += dMNVSRecordRankingColumnWidths[column_order[j]];
			}
		}
	}
	return gobj;
}

// 0x80135108
GObj* mnVSRecordMakeRankingTableHeaders(s32 column)
{
	GObj* gobj;
	SObj* sobj;
	intptr_t offsets[/* */] =
	{
		0xA08, 0xAF8, 0xBE8, 0xCD8, 0xE10, 0xF08, 0x1008
	};
	s32 x_padding[/* */] = { 2, 2, 2, 4, 4, 3, 1 };
	s32 column_order[(ARRAY_COUNT(offsets) + ARRAY_COUNT(x_padding)) / 2];
	s32 i, j;
	s32 x;
	f32 y;

	for (i = 0; i < ARRAY_COUNT(column_order); i++)
	{
		if (column >= ARRAY_COUNT(column_order))
		{
			column -= ARRAY_COUNT(column_order);
		}
		column_order[i] = column++;
	}
	gobj = gcMakeGObjSPAfter(0, NULL, 5, GOBJ_PRIORITY_DEFAULT);

	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 4, GOBJ_PRIORITY_DEFAULT, ~0);

	x = 48;

	for (i = 0; i < ARRAY_COUNT(column_order); i++)
	{
		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[0], offsets[column_order[i]]));

		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;

		sobj->pos.x = x_padding[column_order[i]] + x;
		sobj->pos.y = 49.0F;

		sobj->sprite.red = 0x8A;
		sobj->sprite.green = 0x88;
		sobj->sprite.blue = 0x92;

		x += dMNVSRecordRankingColumnWidths[column_order[i]];
	}
	mnVSRecordMakeRowIcons(gobj);

	return gobj;
}

// 0x8013531C
f32 mnVSRecordGetWinPercentAgainst(s32 this_fkind, s32 against_fkind)
{
	f32 kos_for = gSCManagerBackupData.vs_records[this_fkind].ko_count[against_fkind];
	f32 total_kos = kos_for + gSCManagerBackupData.vs_records[against_fkind].ko_count[this_fkind];
	f32 ko_percent;

	if (total_kos != 0.0F)
	{
		ko_percent = kos_for / total_kos;
	}
	else ko_percent = 0.0F;

	return ko_percent * 100.0F;
}

// 0x801353F4
f32 mnVSRecordGetAverageAgainst(s32 this_fkind, s32 against_fkind)
{
	if (gSCManagerBackupData.vs_records[this_fkind].played_against[against_fkind] != 0)
	{
		return (f32) gSCManagerBackupData.vs_records[this_fkind].player_count_tallies[against_fkind] /
						   gSCManagerBackupData.vs_records[this_fkind].played_against[against_fkind];
	}
	else return 0.0F;
}

// 0x8013547C - Unused?
void func_ovl32_8013547C(void)
{
	return;
}

// 0x80135484
GObj* mnVSRecordMakeIndivTableValues(void)
{
	GObj *gobj;
	f32 y[/* */] = { 160.0F, 172.0F, 184.0F, 196.0F };
	u32 colors[/* */] = { 0x00, 0x00, 0x00, 0xE5, 0xD1, 0x99 };
	s32 i;
	f32 x;
	s32 unused[2];

	gobj = gcMakeGObjSPAfter(0, NULL, 6, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 5, GOBJ_PRIORITY_DEFAULT, ~0);

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		if (mnVSRecordCheckHaveFighterKind(sMNVSRecordRankingFighterKindOrder[i]))
		{
			x = (i * 19) + 84.0F;
			mnVSRecordMakeDigits
			(
				gobj,
				mnVSRecordGetWinPercentAgainst(sMNVSRecordRankingFighterKindOrder[sMNVSRecordCurrentIndex], sMNVSRecordIndivFighterKinds[i]) * 10.0F,
				x,
				y[0],
				colors,
				TRUE,
				FALSE,
				3,
				FALSE
			);
			mnVSRecordMakeDigits
			(
				gobj,
				gSCManagerBackupData.vs_records[sMNVSRecordRankingFighterKindOrder[sMNVSRecordCurrentIndex]].ko_count[sMNVSRecordIndivFighterKinds[i]],
				x,
				y[1],
				colors,
				FALSE,
				FALSE,
				4,
				FALSE
			);
			mnVSRecordMakeDigits
			(
				gobj,
				gSCManagerBackupData.vs_records[sMNVSRecordIndivFighterKinds[i]].ko_count[sMNVSRecordRankingFighterKindOrder[sMNVSRecordCurrentIndex]],
				x,
				y[2],
				colors,
				FALSE,
				FALSE,
				4,
				FALSE
			);
			mnVSRecordMakeDigits
			(
				gobj,
				mnVSRecordGetAverageAgainst(sMNVSRecordRankingFighterKindOrder[sMNVSRecordCurrentIndex], sMNVSRecordIndivFighterKinds[i]) * 10.0F,
				x,
				y[3],
				colors,
				TRUE,
				FALSE,
				3,
				FALSE
			);
		}
	}
	return gobj;
}

// 0x80135784
GObj* mnVSRecordMakeIndivPortraitAll(void)
{
	GObj *gobj;
	SObj *sobj;
	intptr_t offsets[/* */] =
	{
		0xA08,
		0xAF8,
		0x1140,
		0x1008
	};
	Vec2f positions[/* */] =
	{

		{ 29.0F, 159.0F },
		{ 28.0F, 171.0F },
		{ 25.0F, 183.0F },
		{ 26.0F, 195.0F }
	};
	s32 i;

	gobj = gcMakeGObjSPAfter(0, NULL, 5, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 4, GOBJ_PRIORITY_DEFAULT, ~0);

	for (i = 0; i < (ARRAY_COUNT(offsets) + ARRAY_COUNT(positions)) / 2; i++)
	{
		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSRecordFiles[0], offsets[i]));

		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;

		sobj->pos.x = positions[i].x;
		sobj->pos.y = positions[i].y;

		sobj->sprite.red = 0x8A;
		sobj->sprite.green = 0x88;
		sobj->sprite.blue = 0x92;
	}

	mnVSRecordMakeColumnIcons(gobj);
	mnVSRecordMakePortraitStats(gobj, sMNVSRecordRankingFighterKindOrder[sMNVSRecordCurrentIndex]);

	return gobj;
}

// 0x80135934
void mnVSRecordMakeStats(s32 stats_kind)
{
	switch (stats_kind)
	{
	case nMNVSRecordKindBattleScore:
		mnVSRecordSortData(stats_kind);

		sMNVSRecordTableHeadersGObj = mnVSRecordMakeBattleScoreTableHeaders();
		sMNVSRecordTableValuesGObj = mnVSRecordMakeBattleScoreTableValues();
		break;
		
	case nMNVSRecordKindRanking:
		mnVSRecordSortData(stats_kind);

		sMNVSRecordTableHeadersGObj = mnVSRecordMakeRankingTableHeaders(sMNVSRecordFirstColumn);
		sMNVSRecordTableValuesGObj = mnVSRecordMakeRankingTableValues(sMNVSRecordFirstColumn);
		break;
	
	case nMNVSRecordKindIndiv:
		mnVSRecordSortData(stats_kind);

		sMNVSRecordTableHeadersGObj = mnVSRecordMakeIndivPortraitAll();
		sMNVSRecordTableValuesGObj = mnVSRecordMakeIndivTableValues();
		break;
	}
}

// 0x801359EC
void mnVSRecordMakeTableValuesCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			1,
			NULL,
			1,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			40,
			COBJ_MASK_DLLINK(5),
			~0,
			FALSE,
			nGCProcessKindFunc,
			NULL,
			1,
			FALSE
		)
	);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135A8C
void mnVSRecordMakeTableHeadersCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			1,
			NULL,
			1,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			20,
			COBJ_MASK_DLLINK(4),
			~0,
			FALSE,
			nGCProcessKindFunc,
			NULL,
			1,
			FALSE
		)
	);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135B2C
void mnVSRecordMakeTableGridCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			1,
			NULL,
			1,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			60,
			COBJ_MASK_DLLINK(3),
			~0,
			FALSE,
			nGCProcessKindFunc,
			NULL,
			1,
			FALSE
		)
	);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135BCC
void mnVSRecordMakeRankingHighlightCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			1,
			NULL,
			1,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			70,
			COBJ_MASK_DLLINK(2),
			~0,
			FALSE,
			nGCProcessKindFunc,
			NULL,
			1,
			FALSE
		)
	);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135C6C
void mnVSRecordMakeLabelsCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			1,
			NULL,
			1,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			80,
			COBJ_MASK_DLLINK(1),
			~0,
			FALSE,
			nGCProcessKindFunc,
			NULL,
			1,
			FALSE
		)
	);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135D0C
void mnVSRecordInitVars(void)
{
	sMNVSRecordStatsKind = nMNVSRecordKindBattleScore;
	sMNVSRecordIsChangeSubtitle = FALSE;
	sMNVSRecordCurrentIndex = 0;
	sMNVSRecordChangeWait = 0;
	sMNVSRecordFighterMask = gSCManagerBackupData.fighter_mask;
	sMNVSRecordFirstColumn = vsRecordsRankingColumnKindWinPercent;
}

// 0x80135D48
void mnVSRecordRedrawStats(s32 stats_kind)
{
	if (sMNVSRecordTableHeadersGObj != NULL)
	{
		gcEjectGObj(sMNVSRecordTableHeadersGObj);
	}
	if (sMNVSRecordTableValuesGObj != NULL)
	{
		gcEjectGObj(sMNVSRecordTableValuesGObj);
	}
	mnVSRecordMakeStats(stats_kind);
}

// 0x80135D98
void mnVSRecordFuncRun(GObj *gobj)
{
	s32 unused;
	s32 stick_range;
	s32 is_button;

	if (sMNVSRecordChangeWait != 0)
	{
		sMNVSRecordChangeWait--;
	}
	if
	(
		(sMNVSRecordStatsKind == nMNVSRecordKindIndiv) &&
		(scSubsysControllerGetPlayerStickInRangeLR(-20, 20)) &&
		(scSubsysControllerGetPlayerStickInRangeUD(-20, 20)) &&
		(scSubsysControllerGetPlayerHoldButtons(R_JPAD | U_JPAD | R_TRIG | R_CBUTTONS | U_CBUTTONS) == FALSE) &&
		(scSubsysControllerGetPlayerHoldButtons(L_JPAD | D_JPAD | L_TRIG | L_CBUTTONS | D_CBUTTONS) == FALSE)
	)
	{
		sMNVSRecordChangeWait = 0;
	}
	if (sMNVSRecordIsChangeSubtitle)
	{
		sMNVSRecordIsChangeSubtitle = FALSE;
	}
	if (scSubsysControllerGetPlayerTapButtons(B_BUTTON))
	{
		if (sMNVSRecordStatsKind == nMNVSRecordKindBattleScore)
		{
			gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
			gSCManagerSceneData.scene_curr = nSCKindData;

			syTaskmanSetLoadScene();
		}
		else
		{
			func_800269C0_275C0(nSYAudioFGMBurnS);

			sMNVSRecordStatsKind--;
			sMNVSRecordIsChangeSubtitle = TRUE;

			mnVSRecordRedrawStats(sMNVSRecordStatsKind);
		}
	}
	if
	(
		(
			(scSubsysControllerGetPlayerTapButtons(A_BUTTON)) ||
			(scSubsysControllerGetPlayerTapButtons(START_BUTTON))
		)
		&&
		(sMNVSRecordStatsKind < nMNVSRecordKindEnd)
	)
	{
		func_800269C0_275C0(nSYAudioFGMBurnS);

		sMNVSRecordStatsKind++;
		sMNVSRecordIsChangeSubtitle = TRUE;

		mnVSRecordRedrawStats(sMNVSRecordStatsKind);
	}
	if (sMNVSRecordStatsKind == nMNVSRecordKindRanking)
	{
		if
		(
			mnVSRecordCheckGetOptionButtonInput(is_button, U_JPAD | U_CBUTTONS) ||
			mnVSRecordCheckGetOptionStickInputUD(stick_range, 20, 1)
		)
		{
			func_800269C0_275C0(nSYAudioFGMFoxFoot);

			if (sMNVSRecordCurrentIndex == nFTKindPlayableStart)
			{
				sMNVSRecordCurrentIndex = nFTKindPlayableEnd;
			}
			else sMNVSRecordCurrentIndex--;

			while (mnVSRecordCheckHaveFighterKind(sMNVSRecordRankingFighterKindOrder[sMNVSRecordCurrentIndex]) == FALSE)
			{
				if (sMNVSRecordCurrentIndex == nFTKindPlayableStart)
				{
					sMNVSRecordCurrentIndex = nFTKindPlayableEnd;
				}
				else sMNVSRecordCurrentIndex--;
			}

			mnVSRecordSetOptionChangeWaitP(is_button, stick_range, 7);
		}
		if
		(
			mnVSRecordCheckGetOptionButtonInput(is_button, D_JPAD | D_CBUTTONS) ||
			mnVSRecordCheckGetOptionStickInputUD(stick_range, -20, 0)
		)
		{
			func_800269C0_275C0(nSYAudioFGMFoxFoot);

			if (sMNVSRecordCurrentIndex == nFTKindPlayableEnd)
			{
				sMNVSRecordCurrentIndex = nFTKindPlayableStart;
			}
			else sMNVSRecordCurrentIndex++;

			while (mnVSRecordCheckHaveFighterKind(sMNVSRecordRankingFighterKindOrder[sMNVSRecordCurrentIndex]) == FALSE)
			{
				if (sMNVSRecordCurrentIndex == nFTKindPlayableEnd)
				{
					sMNVSRecordCurrentIndex = nFTKindPlayableStart;
				}
				else sMNVSRecordCurrentIndex++;
			}
			mnVSRecordSetOptionChangeWaitN(is_button, stick_range, 7);
		}
		if
		(
			mnVSRecordCheckGetOptionButtonInput(is_button, R_JPAD | R_TRIG | R_CBUTTONS) ||
			mnVSRecordCheckGetOptionStickInputLR(stick_range, 20, 1)
		)
		{
			func_800269C0_275C0(nSYAudioFGMFoxFoot);

			if (sMNVSRecordFirstColumn == vsRecordsRankingColumnKindWinPercent)
			{
				sMNVSRecordFirstColumn = vsRecordsRankingColumnKindAverage;
			}
			else sMNVSRecordFirstColumn--;

			sMNVSRecordIsChangeSubtitle = TRUE;

			mnVSRecordRedrawStats(sMNVSRecordStatsKind);

			mnVSRecordSetOptionChangeWaitP(is_button, stick_range, 7);
		}
		if
		(
			mnVSRecordCheckGetOptionButtonInput(is_button, L_JPAD | L_TRIG | L_CBUTTONS) ||
			mnVSRecordCheckGetOptionStickInputLR(stick_range, -20, 0)
		)
		{
			func_800269C0_275C0(nSYAudioFGMFoxFoot);

			if (sMNVSRecordFirstColumn == vsRecordsRankingColumnKindAverage)
			{
				sMNVSRecordFirstColumn = vsRecordsRankingColumnKindWinPercent;
			}
			else sMNVSRecordFirstColumn++;

			sMNVSRecordIsChangeSubtitle = TRUE;

			mnVSRecordRedrawStats(sMNVSRecordStatsKind);

			mnVSRecordSetOptionChangeWaitN(is_button, stick_range, 7);
		}
	}
	if (sMNVSRecordStatsKind == nMNVSRecordKindIndiv)
	{
		if
		(
			mnVSRecordCheckGetOptionButtonInput(is_button, R_JPAD | R_TRIG | R_CBUTTONS) ||
			mnVSRecordCheckGetOptionStickInputLR(stick_range, 20, 1)
		)
		{
			func_800269C0_275C0(nSYAudioFGMFoxFoot);

			if (sMNVSRecordCurrentIndex == nFTKindPlayableEnd)
			{
				sMNVSRecordCurrentIndex = nFTKindPlayableStart;
			}
			else sMNVSRecordCurrentIndex++;

			while (mnVSRecordCheckHaveFighterKind(sMNVSRecordRankingFighterKindOrder[sMNVSRecordCurrentIndex]) == FALSE)
			{
				if (sMNVSRecordCurrentIndex == nFTKindPlayableEnd)
				{
					sMNVSRecordCurrentIndex = nFTKindPlayableStart;
				}
				else sMNVSRecordCurrentIndex++;
			}
			mnVSRecordRedrawStats(sMNVSRecordStatsKind);

			if (is_button)
			{
				sMNVSRecordChangeWait = 12;
			}
			else sMNVSRecordChangeWait = mnCommonGetOptionChangeWaitP(20, 7);
		}
		if
		(
			mnVSRecordCheckGetOptionButtonInput(is_button, L_JPAD | L_TRIG | L_CBUTTONS) ||
			mnVSRecordCheckGetOptionStickInputLR(stick_range, -20, 0)
		)
		{
			func_800269C0_275C0(nSYAudioFGMFoxFoot);

			if (sMNVSRecordCurrentIndex == nFTKindPlayableStart)
			{
				sMNVSRecordCurrentIndex = nFTKindPlayableEnd;
			}
			else sMNVSRecordCurrentIndex--;

			while (mnVSRecordCheckHaveFighterKind(sMNVSRecordRankingFighterKindOrder[sMNVSRecordCurrentIndex]) == FALSE)
			{
				if (sMNVSRecordCurrentIndex == nFTKindPlayableStart)
				{
					sMNVSRecordCurrentIndex = nFTKindPlayableEnd;
				}
				else sMNVSRecordCurrentIndex--;
			}
			mnVSRecordRedrawStats(sMNVSRecordStatsKind);

			if (is_button != FALSE)
			{
				sMNVSRecordChangeWait = 12;
			}
			else sMNVSRecordChangeWait = mnCommonGetOptionChangeWaitN(-20, 7);
		}
	}
}

// 0x80136488
void mnVSRecordFuncStart(void)
{
	LBRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = sMNVSRecordStatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(sMNVSRecordStatusBuffer);
	rl_setup.force_status_buffer = NULL;
	rl_setup.force_status_buffer_size = 0;

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern
	(
		dMNVSRecordFileIDs,
		ARRAY_COUNT(dMNVSRecordFileIDs),
		sMNVSRecordFiles,
		syTaskmanMalloc
		(
			lbRelocGetAllocSize
			(
				dMNVSRecordFileIDs,
				ARRAY_COUNT(dMNVSRecordFileIDs)
			),
			0x10
		)
	);
	gcMakeGObjSPAfter(0, mnVSRecordFuncRun, 0, GOBJ_PRIORITY_DEFAULT);
	gcMakeDefaultCameraGObj(0, GOBJ_PRIORITY_DEFAULT, 100, COBJ_FLAG_FILLCOLOR, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));

	mnVSRecordInitVars();
	mnVSRecordMakeLabelsCamera();
	mnVSRecordMakeRankingHighlightCamera();
	mnVSRecordMakeTableGridCamera();
	mnVSRecordMakeTableHeadersCamera();
	mnVSRecordMakeTableValuesCamera();
	mnVSRecordMakeLabels();
	mnVSRecordMakeSubtitle();
	mnVSRecordMakePortraitStatsArrows();
	mnVSRecordMakeResortArrows();
	mnVSRecordMakeColumnArrows();
	mnVSRecordMakeStatsGrid();
	mnVSRecordMakeStats(sMNVSRecordStatsKind);
	mnVSRecordMakeRankingHighlight();

	auPlaySong(0, nSYAudioBGMData);
}

// 0x801369CC
SYVideoSetup dMNVSRecordVideoSetup = SYVIDEO_SETUP_DEFAULT();

// 0x801369E8
SYTaskmanSetup dMNVSRecordTaskmanSetup =
{
    // Task Manager Buffer Setup
    {
        0,                          // ???
        gcRunAll,              		// Update function
        gcDrawAll,          		// Frame draw function
        &ovl32_BSS_END,             // Allocatable memory pool start
        0,                          // Allocatable memory pool size
        1,                          // ???
        2,                          // Number of contexts?
        sizeof(Gfx) * 7500,         // Display List Buffer 0 Size
        0,          				// Display List Buffer 1 Size
        0,                          // Display List Buffer 2 Size
        0,                          // Display List Buffer 3 Size
        0x8000,                     // Graphics Heap Size
        2,                          // ???
        0xC000,                     // RDP Output Buffer Size
        mnVSRecordFuncLights,   	// Pre-render function
        syControllerFuncRead,       // Controller I/O function
    },

    0,                              // Number of GObjThreads
    sizeof(u64) * 192,              // Thread stack size
    0,                              // Number of thread stacks
    0,                              // ???
    0,                              // Number of GObjProcesses
    0,                              // Number of GObjs
    sizeof(GObj),                   // GObj size
    0,                              // Number of XObjs
    NULL,      						// Matrix function list
    NULL,                           // DObjVec eject function
    0,                              // Number of AObjs
    0,                              // Number of MObjs
    0,                              // Number of DObjs
    sizeof(DObj),                   // DObj size
    0,                              // Number of SObjs
    sizeof(SObj),                   // SObj size
    0,                              // Number of Cameras
    sizeof(CObj),                 	// CObj size
    
    mnVSRecordFuncStart         	// Task start function
};

// 0x801365D0
void mnVSRecordStartScene(void)
{
	dMNVSRecordVideoSetup.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&dMNVSRecordVideoSetup);

	dMNVSRecordTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl32_BSS_END);
	syTaskmanRun(&dMNVSRecordTaskmanSetup);
}
