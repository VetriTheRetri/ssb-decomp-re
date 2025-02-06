#include <ft/fighter.h>
#include <if/interface.h>
#include <mn/menu.h>
#include <sc/scene.h>
#include <sys/video.h>

// Offsets
extern intptr_t FILE_011_INFINITY_IMAGE_OFFSET; // file 0x011 image offset for infinity symbol
extern intptr_t FILE_011_PICKER_TIME_IMAGE_OFFSET; // file 0x011 image offset for Time picker texture
extern intptr_t FILE_017_1_PLAYER_GAME_TITLE_IMAGE_OFFSET;
extern intptr_t FILE_017_PARENTHESIS_R_IMAGE_OFFSET;
extern intptr_t FILE_017_PARENTHESIS_L_IMAGE_OFFSET;
extern intptr_t FILE_017_LEVEL_IMAGE_OFFSET;
extern intptr_t FILE_017_STOCK_IMAGE_OFFSET;
extern intptr_t FILE_017_STOCK_LEVEL_OUTLINE_IMAGE_OFFSET;
extern intptr_t FILE_017_SMASH_LOGO_IMAGE_OFFSET;
extern intptr_t FILE_017_OPTION_IMAGE_OFFSET;
extern intptr_t FILE_011_CURSOR_POINTER_IMAGE_OFFSET;

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

// Forward declarations
void mnPlayers1PGameUpdateCursor(GObj* cursor_gobj, s32 player, s32 cursor_status);
void mnPlayers1PGameAnnounceFighter(s32 player, s32 panel_id);
s32 mnPlayers1PGameGetForcePuckFighterKind();
void mnPlayers1PGameUpdateCursorPlacementDLLinks(s32 player);
void mnPlayers1PGameDrawStock(s32 stock, s32 fkind);
void mnPlayers1PGameMakePortraitFlash(s32 player);
void mnPlayers1PGameUpdateNameAndEmblem(s32 player);
s32 mnPlayers1PGameGetPrevTimerValue(s32 arg0);
s32 mnPlayers1PGameGetNextTimerValue(s32 arg0);
sb32 mnPlayers1PGameCheckReady();
void mnPlayers1PGameSetSceneData();

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x801385B0
s32 dMNPlayers1PGameUnknown0x801385B0[/* */] =
{
	0x000080C7, 0x914B4001, 0x30017085, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x000031A1, 0x39E52119, 0x2113211D, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00008BC1, 0x9C0341C1, 0x31417B41, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00001AC7, 0x230901C1, 0x09431245, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000
};

// 0x80138630
u32 dMNPlayers1PGameFileIDs[/* */] =
{
	&lMNPlayersCommonFileID,
	&lFTEmblemSpritesFileID,
	&lMNSelectCommonFileID,
	&lMNPlayersGameModesFileID, 
	&lMNPlayersPortraitsFileID,
	&lMNPlayers1PModeFileID,
	&lMNPlayersDifficultyFileID,
	&lFTStocksZakoFileID,
	&lMNCommonFontsFileID,
	&lIFCommonDigitsFileID,
	&lMNPlayersSpotlightFileID
};

// 0x80138660
Lights1 dMNPlayers1PGameLights11 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);

// 0x80138678
Lights1 dMNPlayers1PGameLights12 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0xEC, 0x00);

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80138EE0
s32 sMNPlayers1PGamePad0x80138EE0[2];

// 0x80138EE8
MNPlayersSlot1PGame sMNPlayers1PGameSlot;

// 0x80138F70
GObj *sMNPlayers1PGameTimeGObj; // stock/time picker

// 0x80138F74
s32 sMNPlayers1PGameTotalTimeTics; // frames elapsed on CSS

// 0x80138F78 frames to wait until exiting the CSS
s32 sMNPlayers1PGameReturnTic;

// 0x80138F7C looping timer that helps determine blink rate of Press Start (and Ready to Fight?)
s32 sMNPlayers1PGameReadyBlinkWait;

// 0x80138F80
s32 sMNPlayers1PGameTimeSetting;

// 0x80138F80
s32 sMNPlayers1PGamePad0x80138F80[4];

// 0x80138F98
s32 sMNPlayers1PGameStartProceedWait;

// 0x80138F9C
sb32 sMNPlayers1PGameIsStart;

// 0x80138FA0
sb32 sMNPlayers1PGameIsTeamBattle;

// 0x80138FA4
s32 sMNPlayers1PGameRule;

// 0x80138FA8
s32 sMNPlayers1PGameManPlayer;

// 0x80138FAC
GObj *sMNPlayers1PGameHiScoreGObj;

// 0x80138FB0
GObj *sMNPlayers1PGameBonusesGObj;

// 0x80138FB4 level
s32 sMNPlayers1PGameLevelValue;

// 0x80138FB8 stocks
s32 sMNPlayers1PGameStockValue;

// 0x80138FBC
GObj *sMNPlayers1PGameLevelGObj;

// 0x80138FC0
GObj *sMNPlayers1PGameStockGObj;

// 0x80138FC4
void *sMNPlayers1PGameFigatreeHeap;

// 0x80138FC8 flag indicating which bonus chars are available
u16 sMNPlayers1PGameFighterMask;

// 0x80138FCC
s32 sMNPlayers1PGameFighterKind;

// 0x80138FD0
s32 sMNPlayers1PGameCostume;

// 0x80138FD8
s32 sMNPlayers1PGamePad0x80138FD8[180];

// 0x801392A8
LBFileNode sMNPlayers1PGameForceStatusBuffer[7];

// 0x801392E0
LBFileNode sMNPlayers1PGameStatusBuffer[120];

// 0x801396A0
void *sMNPlayers1PGameFiles[ARRAY_COUNT(dMNPlayers1PGameFileIDs)];

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mnPlayers1PGameFuncLights(Gfx **dls)
{
	gSPSetGeometryMode(dls[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
s32 mnPlayers1PGameGetPowerOf(s32 base, s32 exp)
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

// 0x80131BF8
void mnPlayers1PGameSetDigitColors(SObj *sobj, u32 *colors)
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

// 0x80131C40
s32 mnPlayers1PGameGetNumberDigitCount(s32 num, s32 digit_count_max)
{
    s32 digit_count_curr = digit_count_max;

    while (digit_count_curr > 0)
    {
        s32 digit = (mnPlayers1PGameGetPowerOf(10, digit_count_curr - 1) != 0) ? num / mnPlayers1PGameGetPowerOf(10, digit_count_curr - 1) : 0;

        if (digit != 0)
        {
            return digit_count_curr;
        }
        else digit_count_curr--;
    }
    return 0;
}

// 0x80131CEC
void mnPlayers1PGameMakeNumber(GObj *gobj, s32 number, f32 x, f32 y, u32 *colors, s32 digit_count_max, sb32 is_fixed_digit_count)
{
	intptr_t offsets[/* */] =
	{
		&lIFCommonDigit0, &lIFCommonDigit1,
		&lIFCommonDigit2, &lIFCommonDigit3,
		&lIFCommonDigit4, &lIFCommonDigit5,
		&lIFCommonDigit6, &lIFCommonDigit7,
		&lIFCommonDigit8, &lIFCommonDigit9
	};
	SObj *sobj;
	f32 left_x = x;
	s32 i;
	s32 unused;
	s32 digit;

	if (number < 0)
	{
		number = 0;
	}
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PGameFiles[9], offsets[number % 10]));
	mnPlayers1PGameSetDigitColors(sobj, colors);
	left_x -= 8;
	sobj->pos.x = left_x;
	sobj->pos.y = y;

	for (i = 1; i < ((is_fixed_digit_count != FALSE) ? digit_count_max : mnPlayers1PGameGetNumberDigitCount(number, digit_count_max)); i++)
	{
		digit = (mnPlayers1PGameGetPowerOf(10, i) != 0) ? number / mnPlayers1PGameGetPowerOf(10, i) : 0;

		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PGameFiles[9], offsets[digit % 10]));
		mnPlayers1PGameSetDigitColors(sobj, colors);
		left_x -= 8;
		sobj->pos.x = left_x;
		sobj->pos.y = y;
	}
}

// 0x80131F5C
s32 mnPlayers1PGameGetCharacterID(const char c)
{
	switch (c)
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
		if ((c < 'A') || (c > 'Z'))
		{
			return 0x1D;
		}
		else return c - 'A';
	}
}

// 0x80131FD4
f32 mnPlayers1PGameGetCharacterSpacing(const char *str, s32 c)
{
	switch (str[c])
	{
	case 'A':
		switch (str[c + 1])
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
		switch(str[c + 1])
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
		switch(str[c + 1])
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
		switch(str[c + 1])
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
void mnPlayers1PGameMakeString(GObj *gobj, const char *str, f32 x, f32 y, u32 *color)
{
	intptr_t offsets[/* */] =
	{
		&lMNCommonFontsLetterASprite, &lMNCommonFontsLetterBSprite,
		&lMNCommonFontsLetterCSprite, &lMNCommonFontsLetterDSprite,
		&lMNCommonFontsLetterESprite, &lMNCommonFontsLetterFSprite,
		&lMNCommonFontsLetterGSprite, &lMNCommonFontsLetterHSprite,
		&lMNCommonFontsLetterISprite, &lMNCommonFontsLetterJSprite,
		&lMNCommonFontsLetterKSprite, &lMNCommonFontsLetterLSprite,
		&lMNCommonFontsLetterMSprite, &lMNCommonFontsLetterNSprite,
		&lMNCommonFontsLetterOSprite, &lMNCommonFontsLetterPSprite,
		&lMNCommonFontsLetterQSprite, &lMNCommonFontsLetterRSprite,
		&lMNCommonFontsLetterSSprite, &lMNCommonFontsLetterTSprite,
		&lMNCommonFontsLetterUSprite, &lMNCommonFontsLetterVSprite,
		&lMNCommonFontsLetterWSprite, &lMNCommonFontsLetterXSprite,
		&lMNCommonFontsLetterYSprite, &lMNCommonFontsLetterZSprite,

		&lMNCommonFontsSymbolApostropheSprite,
		&lMNCommonFontsSymbolPercentSprite,
		&lMNCommonFontsSymbolPeriodSprite
	};
	f32 widths[/* */] =
	{
		5.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 3.0F, 4.0F, 4.0F, 4.0F, 5.0F, 5.0F, 4.0F,
		4.0F, 5.0F, 4.0F, 4.0F, 5.0F, 4.0F, 5.0F, 5.0F, 5.0F, 5.0F, 4.0F, 2.0F, 7.0F, 3.0F
	};
	SObj *sobj;
	f32 current_x = x;
	s32 i;
	sb32 is_number;

	for (i = 0; str[i] != 0; i++)
	{
		is_number = ((str[i] >= '0') && (str[i] <= '9')) ? TRUE : FALSE;

		if ((is_number != FALSE) || (str[i] == ' '))
		{
			if (str[i] == ' ')
			{
				current_x += 3.0F;
			}
			else current_x += str[i] - '0';
		}
		else
		{
			sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PGameFiles[8], offsets[mnPlayers1PGameGetCharacterID(str[i])]));
			sobj->pos.x = current_x;

			current_x += widths[mnPlayers1PGameGetCharacterID(str[i])] + mnPlayers1PGameGetCharacterSpacing(str, i);

			switch (str[i])
			{
			case '\'':
				sobj->pos.y = y - 1.0F;
				break;
				
			case '.':
				sobj->pos.y = y + 4.0F;
				break;
				
			default:
				sobj->pos.y = y;
				break;
			}
			sobj->sprite.attr &= ~SP_FASTCOPY;
			sobj->sprite.attr |= SP_TRANSPARENT;
			sobj->sprite.red = color[0];
			sobj->sprite.green = color[1];
			sobj->sprite.blue = color[2];
		}
	}
}

// 0x80132384
void mnPlayers1PGameSelectFighterPuck(s32 player, s32 select_button)
{
	s32 held_player = sMNPlayers1PGameSlot.held_player;
	s32 costume = ftParamGetCostumeCommonID(sMNPlayers1PGameSlot.fkind, select_button);

	ftParamInitAllParts(sMNPlayers1PGameSlot.player, costume, 0);

	sMNPlayers1PGameSlot.costume = costume;
	sMNPlayers1PGameSlot.is_selected = TRUE;
	sMNPlayers1PGameSlot.holder_player = GMCOMMON_PLAYERS_MAX;
	sMNPlayers1PGameSlot.cursor_status = nMNPlayersCursorStatusHover;

	mnPlayers1PGameUpdateCursor(sMNPlayers1PGameSlot.cursor, player, sMNPlayers1PGameSlot.cursor_status);

	sMNPlayers1PGameSlot.held_player = -1;
	sMNPlayers1PGameSlot.is_fighter_selected = TRUE;

	mnPlayers1PGameUpdateCursorPlacementDLLinks(held_player);
	mnPlayers1PGameAnnounceFighter(player, held_player);
	mnPlayers1PGameMakePortraitFlash(held_player);
	mnPlayers1PGameDrawStock(sMNPlayers1PGameStockValue, sMNPlayers1PGameSlot.fkind);
}

// 0x8013243C
f32 mnPlayers1PGameGetNextPortraitX(s32 portrait, f32 current_pos_x)
{
	f32 portrait_pos_x[/* */] =
	{
		25.0F, 70.0F, 115.0F, 160.0F, 205.0F, 250.0F,
		25.0F, 70.0F, 115.0F, 160.0F, 205.0F, 250.0F
	};

	f32	portrait_vel[/* */] =
	{
		1.9F, 3.9F, 7.8F, -7.8F, -3.8F, -1.8F,
		1.8F, 3.8F, 7.8F, -7.8F, -3.8F, -1.8F
	};

	if (current_pos_x == portrait_pos_x[portrait])
	{
		return -1.0F;
	}
	else if (portrait_pos_x[portrait] < current_pos_x)
	{
		return ((current_pos_x + portrait_vel[portrait]) <= portrait_pos_x[portrait]) ? 
		portrait_pos_x[portrait] :
		current_pos_x + portrait_vel[portrait];
	}
	else return (current_pos_x + portrait_vel[portrait]) >= portrait_pos_x[portrait] ?
	portrait_pos_x[portrait] :
	current_pos_x + portrait_vel[portrait];
}

// 0x80132550
sb32 mnPlayers1PGameCheckFighterCrossed(s32 fkind)
{
	return FALSE;
}

// 0x8013255C
void mnPlayers1PGamePortraitProcUpdate(GObj *portrait_gobj)
{
	f32 new_pos_x = mnPlayers1PGameGetNextPortraitX(portrait_gobj->user_data.s, SObjGetStruct(portrait_gobj)->pos.x);

	if (new_pos_x != -1.0F)
	{
		SObjGetStruct(portrait_gobj)->pos.x = new_pos_x;

		if (SObjGetStruct(portrait_gobj)->next != NULL)
		{
			SObjGetStruct(portrait_gobj)->next->pos.x = SObjGetStruct(portrait_gobj)->pos.x + 4.0F;
		}
	}
}

// 0x801325D8
void mnPlayers1PGameSetPortraitWallpaperPosition(SObj *sobj, s32 portrait)
{
	Vec2f pos[/* */] =
	{
		{ -35.0F, 36.0F }, { -35.0F, 36.0F },
		{ -35.0F, 36.0F }, { 310.0F, 36.0F },
		{ 310.0F, 36.0F }, { 310.0F, 36.0F },
		{ -35.0F, 79.0F }, { -35.0F, 79.0F },
		{ -35.0F, 79.0F }, { 310.0F, 79.0F },
		{ 310.0F, 79.0F }, { 310.0F, 79.0F }
	};

	sobj->pos.x = pos[portrait].x;
	sobj->pos.y = pos[portrait].y;
}

// 0x80132634
void mnPlayers1PGamePortraitAddCross(GObj *gobj, s32 portrait)
{
	SObj *sobj = SObjGetStruct(gobj);
	f32 x = sobj->pos.x;
	f32 y = sobj->pos.y;

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PGameFiles[4], &lMNPlayersPortraitsCrossSprite));

	sobj->pos.x = x + 4.0F;
	sobj->pos.y = y + 12.0F;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0x00;
	sobj->sprite.blue = 0x00;
}

// 0x801326C8
sb32 mnPlayers1PGameCheckFighterLocked(s32 fkind)
{
	switch (fkind)
	{
	case nFTKindNess:
		return (sMNPlayers1PGameFighterMask & (1 << nFTKindNess)) ? FALSE : TRUE;

	case nFTKindPurin:
		return (sMNPlayers1PGameFighterMask & (1 << nFTKindPurin)) ? FALSE : TRUE;

	case nFTKindCaptain:
		return (sMNPlayers1PGameFighterMask & (1 << nFTKindCaptain)) ? FALSE : TRUE;

	case nFTKindLuigi:
		return (sMNPlayers1PGameFighterMask & (1 << nFTKindLuigi)) ? FALSE : TRUE;

	default:
		return FALSE;
	}
}

// 0x80138860
s32 dMNPlayers1PGameUnknown0x80138860[/* */] =
{
	0xC55252C5,
	0xA6524294,
	0x595252C5,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000
};

// 0x80132794 - Unused?
void func_ovl27_80132794(void)
{
	return;
}

// 0x8013279C
s32 mnPlayers1PGameGetFighterKind(s32 portrait)
{
	s32 fkinds[/* */] =
	{
		nFTKindLuigi, nFTKindMario, nFTKindDonkey, nFTKindLink, nFTKindSamus,   nFTKindCaptain,
		nFTKindNess,  nFTKindYoshi, nFTKindKirby,  nFTKindFox,  nFTKindPikachu, nFTKindPurin
	};

	return fkinds[portrait];
}

// 0x801327EC
s32 mnPlayers1PGameGetPortrait(s32 fkind)
{
	s32 portraits[/* */] =
	{
		1, 9, 2, 4, 0, 3,
		7, 5, 8, 10, 11, 6
	};

	return portraits[fkind];
}

// 0x8013283C
void mnPlayers1PGamePortraitProcDisplay(GObj *gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x30, 0x30, 0x30, 0xFF);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, NOISE, TEXEL0, PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0, NOISE, TEXEL0, PRIMITIVE, TEXEL0,  0, 0, 0, TEXEL0);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

	lbCommonDrawSObjNoAttr(gobj);
}

// 0x801328FC
void mnPlayers1PGameMakePortraitShadow(s32 portrait)
{
	GObj *gobj;
	SObj *sobj;
	intptr_t offsets[/* */] =
	{
		0x0, 									0x0,
		0x0, 									0x0,
		&lMNPlayersPortraitsLuigiShadowSprite, 	0x0,
		0x0, 									&lMNPlayersPortraitsCaptainShadowSprite,
		0x0, 									0x0,
		&lMNPlayersPortraitsPurinShadowSprite, 	&lMNPlayersPortraitsNessShadowSprite
	};

	gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 27, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnPlayers1PGamePortraitProcUpdate, nGCProcessKindFunc, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PGameFiles[4], &lMNPlayersPortraitsWallpaperSprite));
	sobj->pos.x = (((portrait >= 6) ? portrait - 6 : portrait) * 45) + 25;
	sobj->pos.y = (((portrait >= 6) ? 1 : 0) * 43) + 36;

	mnPlayers1PGameSetPortraitWallpaperPosition(sobj, portrait);
	gobj->user_data.s = portrait;

	gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, mnPlayers1PGamePortraitProcDisplay, 27, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnPlayers1PGamePortraitProcUpdate, nGCProcessKindFunc, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PGameFiles[4], offsets[mnPlayers1PGameGetFighterKind(portrait)]));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	gobj->user_data.s = portrait;
	mnPlayers1PGameSetPortraitWallpaperPosition(sobj, portrait);

	gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 27, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnPlayers1PGamePortraitProcUpdate, nGCProcessKindFunc, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PGameFiles[4], &lMNPlayersPortraitsQuestionSprite));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->envcolor.r = 0x5B;
	sobj->envcolor.g = 0x41;
	sobj->envcolor.b = 0x33;
	sobj->sprite.red = 0xC4;
	sobj->sprite.green = 0xB9;
	sobj->sprite.blue = 0xA9;

	gobj->user_data.s = portrait;
	mnPlayers1PGameSetPortraitWallpaperPosition(sobj, portrait);
}

// 0x80132BA4
void mnPlayers1PGameMakePortrait(s32 portrait)
{
	GObj *portrait_gobj, *wallpaper_gobj;
	SObj *sobj;
	intptr_t offsets[/* */] =
	{
		&lMNPlayersPortraitsMarioSprite,	&lMNPlayersPortraitsFoxSprite,
		&lMNPlayersPortraitsDonkeySprite,	&lMNPlayersPortraitsSamusSprite,
		&lMNPlayersPortraitsLuigiSprite,	&lMNPlayersPortraitsLinkSprite,
		&lMNPlayersPortraitsYoshiSprite,	&lMNPlayersPortraitsCaptainSprite,
		&lMNPlayersPortraitsKirbySprite,	&lMNPlayersPortraitsPikachuSprite,
		&lMNPlayersPortraitsPurinSprite,	&lMNPlayersPortraitsNessSprite
	};

	if (mnPlayers1PGameCheckFighterLocked(mnPlayers1PGameGetFighterKind(portrait)) != FALSE)
	{
		mnPlayers1PGameMakePortraitShadow(portrait);
	}
	else
	{
		wallpaper_gobj = gcMakeGObjSPAfter(0, NULL, 25, GOBJ_PRIORITY_DEFAULT);
		gcAddGObjDisplay(wallpaper_gobj, lbCommonDrawSObjAttr, 32, GOBJ_PRIORITY_DEFAULT, ~0);
		wallpaper_gobj->user_data.s = portrait;
		gcAddGObjProcess(wallpaper_gobj, mnPlayers1PGamePortraitProcUpdate, nGCProcessKindFunc, 1);

		sobj = lbCommonMakeSObjForGObj(wallpaper_gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PGameFiles[4], &lMNPlayersPortraitsWallpaperSprite));

		mnPlayers1PGameSetPortraitWallpaperPosition(sobj, portrait);

		portrait_gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
		gcAddGObjDisplay(portrait_gobj, lbCommonDrawSObjAttr, 27, GOBJ_PRIORITY_DEFAULT, ~0);
		gcAddGObjProcess(portrait_gobj, mnPlayers1PGamePortraitProcUpdate, nGCProcessKindFunc, 1);

		sobj = lbCommonMakeSObjForGObj(portrait_gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PGameFiles[4], offsets[mnPlayers1PGameGetFighterKind(portrait)]));
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;
		portrait_gobj->user_data.s = portrait;

		if (mnPlayers1PGameCheckFighterCrossed(mnPlayers1PGameGetFighterKind(portrait)) != FALSE)
		{
			mnPlayers1PGamePortraitAddCross(portrait_gobj, portrait);
		}
		mnPlayers1PGameSetPortraitWallpaperPosition(sobj, portrait);
	}
}

// 0x80132D60
void mnPlayers1PGameMakePortraitAll(void)
{
	s32 i;

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		mnPlayers1PGameMakePortrait(i);
	}
}

// 0x80132DA0
void mnPlayers1PGameMakeNameAndEmblem(GObj *gobj, s32 player, s32 fkind)
{
	SObj *sobj;
	Vec2f pos[/* */] =
	{
		{ 13.0F, 28.0F }, {  6.0F, 25.0F },
		{  5.0F, 25.0F }, { 13.0F, 25.0F },
		{ 13.0F, 28.0F }, { 13.0F, 28.0F },
		{ 16.0F, 25.0F }, {  4.0F, 25.0F },
		{ 13.0F, 25.0F }, { 13.0F, 25.0F },
		{ 13.0F, 25.0F }, { 13.0F, 25.0F }
	};
	intptr_t emblem_offsets[/* */] =
	{
		&lFTEmblemSpritesMarioSprite,		&lFTEmblemSpritesFoxSprite,
		&lFTEmblemSpritesDonkeySprite, 		&lFTEmblemSpritesMetroidSprite,
		&lFTEmblemSpritesMarioSprite,		&lFTEmblemSpritesZeldaSprite,
		&lFTEmblemSpritesYoshiSprite,		&lFTEmblemSpritesFZeroSprite,
		&lFTEmblemSpritesKirbySprite, 		&lFTEmblemSpritesPMonstersSprite,
		&lFTEmblemSpritesPMonstersSprite,	&lFTEmblemSpritesMotherSprite
	};
	intptr_t name_offsets[/* */] =
	{
		&lMNPlayersCommonMarioNameSprite,	&lMNPlayersCommonFoxNameSprite,
		&lMNPlayersCommonDonkeyNameSprite,	&lMNPlayersCommonSamusNameSprite,
		&lMNPlayersCommonLuigiNameSprite,	&lMNPlayersCommonLinkNameSprite,
		&lMNPlayersCommonYoshiNameSprite,	&lMNPlayersCommonCaptainNameSprite,
		&lMNPlayersCommonKirbyNameSprite,	&lMNPlayersCommonPikachuNameSprite,
		&lMNPlayersCommonPurinNameSprite,	&lMNPlayersCommonNessNameSprite
	};

	if (fkind != nFTKindNull)
	{
		gcRemoveSObjAll(gobj);

		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PGameFiles[1], emblem_offsets[fkind]));
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;
		sobj->sprite.red = 0x00;
		sobj->sprite.green = 0x00;
		sobj->sprite.blue = 0x00;
		sobj->pos.x = 35.0F;
		sobj->pos.y = 144.0F;

		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PGameFiles[0], name_offsets[fkind]));
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;
		sobj->pos.x = 33.0F;
		sobj->pos.y = 202.0F;
	}
}

// 0x80132F1C
void mnPlayers1PGameMakePortraitCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			nGCCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			40,
			COBJ_MASK_DLLINK(27),
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

// 0x80132FBC
void mnPlayers1PGameMakePortraitWallpaperCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			nGCCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			60,
			COBJ_MASK_DLLINK(32),
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

// 0x8013305C
void mnPlayers1PGameMakePortraitFlashCamera()
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			nGCCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			50,
			COBJ_MASK_DLLINK(33),
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

// 0x801330FC
void mnPlayers1PGameMakePlayerKindCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			nGCCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			30,
			COBJ_MASK_DLLINK(28),
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

// 0x8013319C
void mnPlayers1PGameSetGateLUT(GObj *gobj, s32 player)
{
	SObj *sobj;

	intptr_t offsets[/* */] =
	{
		&lMNPlayersCommonGate1PLUT, &lMNPlayersCommonGate2PLUT,
		&lMNPlayersCommonGate3PLUT, &lMNPlayersCommonGate4PLUT
	};

	sobj = SObjGetStruct(gobj);
	sobj->sprite.LUT = lbRelocGetFileData(int*, sMNPlayers1PGameFiles[0], offsets[player]);
}

// 0x801331F4
void mnPlayers1PGameMakeGate(s32 player)
{
	GObj *gobj;
	SObj *sobj;

	intptr_t offsets[/* */] =
	{
		&lMNPlayersCommonGate1PSprite, &lMNPlayersCommonGate2PSprite,
		&lMNPlayersCommonGate3PSprite, &lMNPlayersCommonGate4PSprite
	};
	f32 pos_x[/* */] = { 8.0F, 5.0F, 5.0F, 5.0F };

	gobj = lbCommonMakeSpriteGObj
	(
		0,
		NULL,
		22,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSObjAttr,
		28,
		GOBJ_PRIORITY_DEFAULT,
		~0,
		lbRelocGetFileData
		(
			Sprite*,
			sMNPlayers1PGameFiles[5],
			&lMNPlayers1PModeGateWallpaperSprite
		),
		nGCProcessKindFunc,
		NULL,
		1
	);
	SObjGetStruct(gobj)->pos.x = 25.0F;
	SObjGetStruct(gobj)->pos.y = 127.0F;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;

	sMNPlayers1PGameSlot.panel = gobj;

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PGameFiles[0], offsets[player]));
	sobj->pos.x = pos_x[player] + 25.0F;
	sobj->pos.y = 132.0F;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0x00;
	sobj->sprite.green = 0x00;
	sobj->sprite.blue = 0x00;

	mnPlayers1PGameSetGateLUT(gobj, player);

	gobj = gcMakeGObjSPAfter(0, NULL, 22, GOBJ_PRIORITY_DEFAULT);
	sMNPlayers1PGameSlot.name_logo_gobj = gobj;
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 28, GOBJ_PRIORITY_DEFAULT, ~0);

	mnPlayers1PGameUpdateNameAndEmblem(player);
}

// 0x801333D4
void mnPlayers1PGameMakeTimeNumber(GObj *number_gobj, s32 num, f32 x, f32 y, u32 *colors, s32 maxDigits, sb32 pad)
{
	intptr_t number_offsets[10] = {

		0x5388, 0x5440, 0x5558, 0x5668, 0x5778,
		0x5888, 0x5998, 0x5AA8, 0x5BB8, 0x5CC8
	};
	f32 widths[10] = {

		8.0, 6.0, 9.0, 8.0, 8.0,
		9.0, 8.0, 8.0, 8.0, 9.0
	};
	SObj* number_sobj;
	f32 left_x = x;
	s32 place;
	s32 numDigits;
	s32 digit;

	if (num < 0)
		num = 0;

	number_sobj = lbCommonMakeSObjForGObj(number_gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PGameFiles[0], number_offsets[num % 10]));
	mnPlayers1PGameSetDigitColors(number_sobj, colors);
	left_x -= widths[num % 10];
	number_sobj->pos.x = left_x;
	number_sobj->pos.y = y;

	for
	(
		place = 1, numDigits = (pad) ? maxDigits : mnPlayers1PGameGetNumberDigitCount(num, maxDigits);
		place < numDigits;
		place++, numDigits = (pad) ? maxDigits : mnPlayers1PGameGetNumberDigitCount(num, maxDigits)
	)
	{
		digit = (mnPlayers1PGameGetPowerOf(10, place) != 0) ? num / mnPlayers1PGameGetPowerOf(10, place) : 0;

		number_sobj = lbCommonMakeSObjForGObj(number_gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PGameFiles[0], number_offsets[digit % 10]));
		mnPlayers1PGameSetDigitColors(number_sobj, colors);
		left_x -= widths[digit % 10];
		number_sobj->pos.x = left_x;
		number_sobj->pos.y = y;
	}
}

// 0x80133680
void mnPlayers1PGameDrawTimerValue(s32 num)
{
	u32 colors[/* */] =
	{
		0x32, 0x1C, 0x0E,
		0xFF, 0xFF, 0xFF
	};
	SObj* infinity_sobj;

	while (SObjGetStruct(sMNPlayers1PGameTimeGObj)->next != NULL)
	{
		gcEjectSObj(SObjGetStruct(sMNPlayers1PGameTimeGObj)->next);
	}
	if (num == 100)
	{
		infinity_sobj = lbCommonMakeSObjForGObj(sMNPlayers1PGameTimeGObj, lbRelocGetFileData(Sprite*, sMNPlayers1PGameFiles[0], &FILE_011_INFINITY_IMAGE_OFFSET));
		infinity_sobj->pos.x = 194.0F;
		infinity_sobj->pos.y = 24.0F;
		infinity_sobj->envcolor.r = colors[0];
		infinity_sobj->envcolor.g = colors[1];
		infinity_sobj->envcolor.b = colors[2];
		infinity_sobj->sprite.red = colors[3];
		infinity_sobj->sprite.green = colors[4];
		infinity_sobj->sprite.blue = colors[5];
		infinity_sobj->sprite.attr &= ~SP_FASTCOPY;
		infinity_sobj->sprite.attr |= SP_TRANSPARENT;
		return;
	}
	if (num < 10)
	{
		mnPlayers1PGameMakeTimeNumber(sMNPlayers1PGameTimeGObj, num, 205.0F, 23.0F, colors, 2, FALSE);
	}
	else mnPlayers1PGameMakeTimeNumber(sMNPlayers1PGameTimeGObj, num, 209.0F, 23.0F, colors, 2, FALSE);
}

// 0x80133804
void mnPlayers1PGameDrawTimerPicker(s32 num)
{
	GObj* picker_gobj;

	if (sMNPlayers1PGameTimeGObj != NULL)
		gcEjectGObj(sMNPlayers1PGameTimeGObj);

	picker_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x17, 0x80000000, lbCommonDrawSObjAttr, 0x1A, GOBJ_PRIORITY_DEFAULT, ~0, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[0], &FILE_011_PICKER_TIME_IMAGE_OFFSET), 1, NULL, 1);
	sMNPlayers1PGameTimeGObj = picker_gobj;

	SObjGetStruct(picker_gobj)->pos.x = 140.0F;
	SObjGetStruct(picker_gobj)->pos.y = 22.0F;
	SObjGetStruct(picker_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(picker_gobj)->sprite.attr |= SP_TRANSPARENT;

	mnPlayers1PGameDrawTimerValue(sMNPlayers1PGameTimeSetting);
}

// 0x801338EC
void mnPlayers1PGameMakeWallpaper()
{
	GObj* background_gobj;
	SObj* background_sobj;

	background_gobj = gcMakeGObjSPAfter(0U, NULL, 0x11U, 0x80000000U);
	gcAddGObjDisplay(background_gobj, lbCommonDrawSObjAttr, 0x1AU, GOBJ_PRIORITY_DEFAULT, ~0);
	background_sobj = lbCommonMakeSObjForGObj(background_gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[2], &lMNSelectCommonWallpaperSprite));
	background_sobj->cms = G_TX_WRAP;
	background_sobj->cmt = G_TX_WRAP;
	background_sobj->masks = 6;
	background_sobj->maskt = 5;
	background_sobj->lrs = 300;
	background_sobj->lrt = 220;
	background_sobj->pos.x = 10.0F;
	background_sobj->pos.y = 10.0F;
}

// 0x80133990
void mnPlayers1PGameMakeWallpaperCamera()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x50, 0x4000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133A30
void mnPlayers1PGameRenderOptionsSection(GObj* options_gobj)
{
	// Draw the rectangle behind the Option image
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 87, 96, 136, 255);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 157, 136, 320, 141);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);

	lbCommonClearExternSpriteParams();
	lbCommonDrawSObjAttr(options_gobj);
}

// 0x80133B74
SObj* mnPlayers1PGameGetArrowSObj(GObj* arrow_gobj, s32 direction)
{
	SObj* second_arrow_sobj;
	SObj* first_arrow_sobj;

	first_arrow_sobj = SObjGetStruct(arrow_gobj);
	if (first_arrow_sobj != NULL)
	{
		if (direction == first_arrow_sobj->user_data.s)
			return first_arrow_sobj;

		second_arrow_sobj = SObjGetNext(first_arrow_sobj);
		if ((second_arrow_sobj != NULL) && (direction == second_arrow_sobj->user_data.s))
			return second_arrow_sobj;
	}
	return NULL;
}

// 0x80133BC0
void mnPlayers1PGameSyncAndBlinkLevelArrows(GObj* arrow_gobj)
{
	SObj* arrow_sobj;
	s32 player = arrow_gobj->user_data.s;
	s32 blink_duration = 10;

	while (TRUE)
	{
		blink_duration--;

		if (blink_duration == 0)
		{
			blink_duration = 10;
			arrow_gobj->flags = arrow_gobj->flags == 1 ? 0 : 1;
		}

		if (sMNPlayers1PGameLevelValue == 0)
		{
			arrow_sobj = mnPlayers1PGameGetArrowSObj(arrow_gobj, 0);

			if (arrow_sobj != NULL)
				gcEjectSObj(arrow_sobj);
		}
		else if (mnPlayers1PGameGetArrowSObj(arrow_gobj, 0) == NULL)
		{
			arrow_sobj = lbCommonMakeSObjForGObj(arrow_gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[0], &lMNPlayersCommonArrowLeftSprite));
			arrow_sobj->pos.x = 194.0F;
			arrow_sobj->pos.y = 158.0F;
			arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
			arrow_sobj->sprite.attr |= SP_TRANSPARENT;
			arrow_sobj->user_data.s = 0;
		}

		if (sMNPlayers1PGameLevelValue == 4)
		{
			arrow_sobj = mnPlayers1PGameGetArrowSObj(arrow_gobj, 1);

			if (arrow_sobj != NULL)
				gcEjectSObj(arrow_sobj);
		}
		else if (mnPlayers1PGameGetArrowSObj(arrow_gobj, 1) == NULL)
		{
			arrow_sobj = lbCommonMakeSObjForGObj(arrow_gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[0], &lMNPlayersCommonArrowRightSprite));
			arrow_sobj->pos.x = 269.0F;
			arrow_sobj->pos.y = 158.0F;
			arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
			arrow_sobj->sprite.attr |= SP_TRANSPARENT;
			arrow_sobj->user_data.s = 1;
		}
		gcStopCurrentGObjThread(1);
	}
}

// 0x80133D9C
void sMNPlayers1PGameDrawLevel(s32 level)
{
	GObj* level_gobj;
	SObj* level_sobj;
	intptr_t offsets[5] = {

		0x438, 0x098, 0x2D8, 0x178, 0x598
	};
	Vec2f positions[5] = {

		{ 204.0, 159.0 },
		{ 219.0, 159.0 },
		{ 209.0, 159.0 },
		{ 219.0, 159.0 },
		{ 205.0, 159.0 }
	};
	SYColorRGB colors[/* */] =
	{
		{ 0x41, 0x6F, 0xE4 },
		{ 0x8D, 0xBB, 0x5A },
		{ 0xE4, 0xBE, 0x41 },
		{ 0xE4, 0x78, 0x41 },
		{ 0xE4, 0x41, 0x41 }
	};

	if (sMNPlayers1PGameLevelGObj != NULL)
		gcEjectGObj(sMNPlayers1PGameLevelGObj);

	sMNPlayers1PGameLevelGObj = level_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
	gcAddGObjDisplay(level_gobj, lbCommonDrawSObjAttr, 0x22U, GOBJ_PRIORITY_DEFAULT, ~0);

	level_sobj = lbCommonMakeSObjForGObj(level_gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PGameFiles[6], offsets[level]));
	level_sobj->sprite.attr &= ~SP_FASTCOPY;
	level_sobj->sprite.attr |= SP_TRANSPARENT;
	level_sobj->pos.x = positions[level].x;
	level_sobj->pos.y = positions[level].y;
	level_sobj->sprite.red = colors[level].r;
	level_sobj->sprite.green = colors[level].g;
	level_sobj->sprite.blue = colors[level].b;
}

// 0x80133F30
void mnPlayers1PGameCreateLevelAndArrows()
{
	GObj* arrows_gobj;

	arrows_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
	gcAddGObjDisplay(arrows_gobj, lbCommonDrawSObjAttr, 0x22U, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(arrows_gobj, mnPlayers1PGameSyncAndBlinkLevelArrows, 0, 1);
	sMNPlayers1PGameDrawLevel(sMNPlayers1PGameLevelValue);
}

// 0x80133FA4
void mnPlayers1PGameSyncAndBlinkStockArrows(GObj* arrow_gobj)
{
	SObj* arrow_sobj;
	s32 player = arrow_gobj->user_data.s;
	s32 blink_duration = 10;

	while (TRUE)
	{
		blink_duration--;

		if (blink_duration == 0)
		{
			blink_duration = 10;
			arrow_gobj->flags = arrow_gobj->flags == 1 ? 0 : 1;
		}

		if (sMNPlayers1PGameStockValue == 0)
		{
			arrow_sobj = mnPlayers1PGameGetArrowSObj(arrow_gobj, 0);

			if (arrow_sobj != NULL)
				gcEjectSObj(arrow_sobj);
		}
		else if (mnPlayers1PGameGetArrowSObj(arrow_gobj, 0) == NULL)
		{
			arrow_sobj = lbCommonMakeSObjForGObj(arrow_gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PGameFiles[0], &lMNPlayersCommonArrowLeftSprite));
			arrow_sobj->pos.x = 194.0F;
			arrow_sobj->pos.y = 178.0F;
			arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
			arrow_sobj->sprite.attr |= SP_TRANSPARENT;
			arrow_sobj->user_data.s = 0;
		}

		if (sMNPlayers1PGameStockValue == 4)
		{
			arrow_sobj = mnPlayers1PGameGetArrowSObj(arrow_gobj, 1);

			if (arrow_sobj != NULL)
				gcEjectSObj(arrow_sobj);
		}
		else if (mnPlayers1PGameGetArrowSObj(arrow_gobj, 1) == NULL)
		{
			arrow_sobj = lbCommonMakeSObjForGObj(arrow_gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PGameFiles[0], &lMNPlayersCommonArrowRightSprite));
			arrow_sobj->pos.x = 269.0F;
			arrow_sobj->pos.y = 178.0F;
			arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
			arrow_sobj->sprite.attr |= SP_TRANSPARENT;
			arrow_sobj->user_data.s = 1;
		}
		gcStopCurrentGObjThread(1);
	}
}

// 0x8013419C
void mnPlayers1PGameDrawStock(s32 stock, s32 fkind)
{
	GObj* stock_gobj;
	SObj* icon_sobj;
	FTStruct* ft_struct;

	if (sMNPlayers1PGameStockGObj != NULL)
		gcEjectGObj(sMNPlayers1PGameStockGObj);

	sMNPlayers1PGameStockGObj = stock_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
	gcAddGObjDisplay(stock_gobj, lbCommonDrawSObjAttr, 0x22U, GOBJ_PRIORITY_DEFAULT, ~0);

	for (stock += 1; stock > 0; stock--)
	{
		if (fkind == nFTKindNull)
		{
			icon_sobj = lbCommonMakeSObjForGObj(stock_gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PGameFiles[7], &lFTStocksZakoSprite));
			icon_sobj->pos.y = 179.0F;
		}
		else
		{
			ft_struct = sMNPlayers1PGameSlot.player->user_data.p;
			icon_sobj = lbCommonMakeSObjForGObj(stock_gobj, ft_struct->attr->sprites->stock_sprite);
			icon_sobj->sprite.LUT = ft_struct->attr->sprites->stock_luts[ft_struct->costume];
			icon_sobj->pos.y = 178.0F;
		}

		icon_sobj->pos.x = (stock - 1) * 12 + 207.0F;
		icon_sobj->sprite.attr &= ~SP_FASTCOPY;
		icon_sobj->sprite.attr |= SP_TRANSPARENT;
	}
}

// 0x8013434C
void mnPlayers1PGameCreateStockAndArrows()
{
	GObj* arrows_gobj;

	arrows_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
	gcAddGObjDisplay(arrows_gobj, lbCommonDrawSObjAttr, 0x22U, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(arrows_gobj, mnPlayers1PGameSyncAndBlinkStockArrows, 0, 1);
	mnPlayers1PGameDrawStock(sMNPlayers1PGameStockValue, sMNPlayers1PGameSlot.fkind);
}

// 0x801343C8
void mnPlayers1PGameDrawPickerOptionsTitleAndBack()
{
	GObj* picker_gobj;
	SObj* picker_sobj;

	picker_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x17, 0x80000000, mnPlayers1PGameRenderOptionsSection, 0x22, GOBJ_PRIORITY_DEFAULT, ~0, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[5], &FILE_017_1_PLAYER_GAME_TITLE_IMAGE_OFFSET), 1, NULL, 1);
	SObjGetStruct(picker_gobj)->pos.x = 27.0F;
	SObjGetStruct(picker_gobj)->pos.y = 24.0F;
	SObjGetStruct(picker_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(picker_gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(picker_gobj)->sprite.red = 0xE3;
	SObjGetStruct(picker_gobj)->sprite.green = 0xAC;
	SObjGetStruct(picker_gobj)->sprite.blue = 4;

	mnPlayers1PGameDrawTimerPicker(sMNPlayers1PGameTimeSetting);

	// Back image
	picker_sobj = lbCommonMakeSObjForGObj(picker_gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[0], &lMNPlayersCommonBackSprite));
	picker_sobj->sprite.attr &= ~SP_FASTCOPY;
	picker_sobj->sprite.attr |= SP_TRANSPARENT;
	picker_sobj->pos.x = 244.0F;
	picker_sobj->pos.y = 23.0F;

	// Option texture
	picker_sobj = lbCommonMakeSObjForGObj(picker_gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[5], &FILE_017_OPTION_IMAGE_OFFSET));
	picker_sobj->sprite.attr &= ~SP_FASTCOPY;
	picker_sobj->sprite.attr |= SP_TRANSPARENT;
	picker_sobj->envcolor.r = 0;
	picker_sobj->envcolor.g = 0;
	picker_sobj->envcolor.b = 0;
	picker_sobj->sprite.red = 0xAF;
	picker_sobj->sprite.green = 0xB1;
	picker_sobj->sprite.blue = 0xCC;
	picker_sobj->pos.x = 180.0F;
	picker_sobj->pos.y = 129.0F;

	// Level/Stock outline texture (mirrored vertically)
	picker_sobj = lbCommonMakeSObjForGObj(picker_gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[5], &FILE_017_STOCK_LEVEL_OUTLINE_IMAGE_OFFSET));
	picker_sobj->sprite.attr &= ~SP_FASTCOPY;
	picker_sobj->sprite.attr |= SP_TRANSPARENT;
	picker_sobj->sprite.red = 0x57;
	picker_sobj->sprite.green = 0x60;
	picker_sobj->sprite.blue = 0x88;
	picker_sobj->cms = G_TX_WRAP;
	picker_sobj->cmt = G_TX_MIRROR;
	picker_sobj->masks = 0;
	picker_sobj->maskt = 5;
	picker_sobj->lrs = 0xB8;
	picker_sobj->lrt = 0x40;
	picker_sobj->pos.x = 128.0F;
	picker_sobj->pos.y = 141.0F;

	// Level label
	picker_sobj = lbCommonMakeSObjForGObj(picker_gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[5], &FILE_017_LEVEL_IMAGE_OFFSET));
	picker_sobj->sprite.attr &= ~SP_FASTCOPY;
	picker_sobj->sprite.attr |= SP_TRANSPARENT;
	picker_sobj->sprite.red = 0xC5;
	picker_sobj->sprite.green = 0xB6;
	picker_sobj->sprite.blue = 0xA7;
	picker_sobj->pos.x = 145.0F;
	picker_sobj->pos.y = 159.0F;

	// Stock label
	picker_sobj = lbCommonMakeSObjForGObj(picker_gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[5], &FILE_017_STOCK_IMAGE_OFFSET));
	picker_sobj->sprite.attr &= ~SP_FASTCOPY;
	picker_sobj->sprite.attr |= SP_TRANSPARENT;
	picker_sobj->sprite.red = 0xC5;
	picker_sobj->sprite.green = 0xB6;
	picker_sobj->sprite.blue = 0xA7;
	picker_sobj->pos.x = 144.0F;
	picker_sobj->pos.y = 179.0F;
}

// 0x801346B8
void mnPlayers1PGameCreateTitleOptionsAndBackViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x46, 0x400000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80134758
u32 mnPlayers1PGameGetHighscore(s32 fkind)
{
	return gSCManagerBackupData.spgame_records[fkind].spgame_hiscore;
}

// 0x8013476C
void mnPlayers1PGameDrawHighscore()
{
	GObj* highscore_gobj;
	s32 foo, bar;
	SObj* difficulty_sobj;

	u32 text_color[/* */] = { 0x7E, 0x7C, 0x77 };
	u32 number_color[/* */] = { 0x00, 0x00, 0x00, 0x7E, 0x7C, 0x77 };
	SYColorRGB colors[/* */] =
	{
		{ 0x41, 0x6F, 0xE4 },
		{ 0x8D, 0xBB, 0x5A },
		{ 0xE4, 0xBE, 0x41 },
		{ 0xE4, 0x78, 0x41 },
		{ 0xE4, 0x41, 0x41 }
	};
	s32 best_difficulty;
	s32 fkind = mnPlayers1PGameGetForcePuckFighterKind();

	if (sMNPlayers1PGameHiScoreGObj != NULL)
	{
		gcEjectGObj(sMNPlayers1PGameHiScoreGObj);
		sMNPlayers1PGameHiScoreGObj = NULL;
	}

	if (fkind != nFTKindNull)
	{
		sMNPlayers1PGameHiScoreGObj = highscore_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
		gcAddGObjDisplay(highscore_gobj, lbCommonDrawSObjAttr, 0x1AU, GOBJ_PRIORITY_DEFAULT, ~0);

		mnPlayers1PGameMakeString(highscore_gobj, "HIGH SCORE", 142.0F, 201.0F, text_color);
		mnPlayers1PGameMakeNumber(highscore_gobj, mnPlayers1PGameGetHighscore(fkind), 256.0F, 198.0F, number_color, 8, 1);

		best_difficulty = gSCManagerBackupData.spgame_records[fkind].spgame_best_difficulty;

		if (best_difficulty != 0)
		{
			difficulty_sobj = lbCommonMakeSObjForGObj(highscore_gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[5], &FILE_017_SMASH_LOGO_IMAGE_OFFSET));
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
s32 mnPlayers1PGameGetBonuses(s32 fkind)
{
	return gSCManagerBackupData.spgame_records[fkind].spgame_bonuses;
}

// 0x8013497C
void mnPlayers1PGameDrawBonuses()
{
	GObj* bonuses_gobj;
	s32 foo, bar;
	SObj* parenthesis_sobj;
	u32 number_color[/* */] = { 0x00, 0x00, 0x00, 0x40, 0x6F, 0xCD };
	s32 fkind = mnPlayers1PGameGetForcePuckFighterKind();

	if (sMNPlayers1PGameBonusesGObj != NULL)
	{
		gcEjectGObj(sMNPlayers1PGameBonusesGObj);
		sMNPlayers1PGameBonusesGObj = NULL;
	}

	if (fkind != nFTKindNull)
	{
		sMNPlayers1PGameBonusesGObj = bonuses_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
		gcAddGObjDisplay(bonuses_gobj, lbCommonDrawSObjAttr, 0x1AU, GOBJ_PRIORITY_DEFAULT, ~0);

		parenthesis_sobj = lbCommonMakeSObjForGObj(bonuses_gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[5], &FILE_017_PARENTHESIS_L_IMAGE_OFFSET));
		parenthesis_sobj->sprite.attr &= ~SP_FASTCOPY;
		parenthesis_sobj->sprite.attr |= SP_TRANSPARENT;
		parenthesis_sobj->pos.x = 258.0F;
		parenthesis_sobj->pos.y = 199.0F;
		parenthesis_sobj->sprite.red = 0x40;
		parenthesis_sobj->sprite.green = 0x6F;
		parenthesis_sobj->sprite.blue = 0xCD;

		parenthesis_sobj = lbCommonMakeSObjForGObj(bonuses_gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[5], &FILE_017_PARENTHESIS_R_IMAGE_OFFSET));
		parenthesis_sobj->sprite.attr &= ~SP_FASTCOPY;
		parenthesis_sobj->sprite.attr |= SP_TRANSPARENT;
		parenthesis_sobj->pos.x = 286.0F;
		parenthesis_sobj->pos.y = 199.0F;
		parenthesis_sobj->sprite.red = 0x40;
		parenthesis_sobj->sprite.green = 0x6F;
		parenthesis_sobj->sprite.blue = 0xCD;

		mnPlayers1PGameMakeNumber(bonuses_gobj, mnPlayers1PGameGetBonuses(fkind), 285.0F, 198.0F, number_color, 3, 1);
	}
}

// 0x80134B3C
void mnPlayers1PGameDrawHighscoreAndBonuses()
{
	mnPlayers1PGameDrawHighscore();
	mnPlayers1PGameDrawBonuses();
}

// 0x80134B64
s32 mnPlayers1PGameGetTotalHighscore()
{
	s32 i;
	s32 sum = 0;

	for (i = 0; i < 12; i++)
		sum += mnPlayers1PGameGetHighscore(i);

	return sum;
}

// 0x80134BB4
void mnPlayers1PGameDrawTotalHighscore()
{
	GObj* total_gobj;
	s32 unused[3];
	u32 text_color[/* */] = { 0x7E, 0x7C, 0x77 };
	u32 number_color[/* */] = { 0x00, 0x00, 0x00, 0x7E, 0x7C, 0x77 };

	total_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
	gcAddGObjDisplay(total_gobj, lbCommonDrawSObjAttr, 0x1AU, GOBJ_PRIORITY_DEFAULT, ~0);
	mnPlayers1PGameMakeString(total_gobj, "TOTAL HIGH SCORE", 109.0F, 211.0F, text_color);
	mnPlayers1PGameMakeNumber(total_gobj, mnPlayers1PGameGetTotalHighscore(), 256.0F, 208.0F, number_color, 9, 1);
}

// 0x80134CB8
s32 mnPlayers1PGameGetTotalBonuses()
{
	s32 i;
	s32 sum = 0;

	for (i = 0; i < 12; i++)
		sum += mnPlayers1PGameGetBonuses(i);

	return sum;
}

// 0x80134D08
void mnPlayers1PGameDrawTotalBonuses()
{
	GObj *bonuses_gobj;
	s32 unused[2];
	SObj *parenthesis_sobj;
	u32 number_color[/* */] = { 0x00, 0x00, 0x00, 0x40, 0x6F, 0xCD };

	bonuses_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
	gcAddGObjDisplay(bonuses_gobj, lbCommonDrawSObjAttr, 0x1AU, GOBJ_PRIORITY_DEFAULT, ~0);

	parenthesis_sobj = lbCommonMakeSObjForGObj(bonuses_gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[5], &FILE_017_PARENTHESIS_L_IMAGE_OFFSET));
	parenthesis_sobj->sprite.attr &= ~SP_FASTCOPY;
	parenthesis_sobj->sprite.attr |= SP_TRANSPARENT;
	parenthesis_sobj->pos.x = 258.0F;
	parenthesis_sobj->pos.y = 209.0F;
	parenthesis_sobj->sprite.red = 0x40;
	parenthesis_sobj->sprite.green = 0x6F;
	parenthesis_sobj->sprite.blue = 0xCD;

	parenthesis_sobj = lbCommonMakeSObjForGObj(bonuses_gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[5], &FILE_017_PARENTHESIS_R_IMAGE_OFFSET));
	parenthesis_sobj->sprite.attr &= ~SP_FASTCOPY;
	parenthesis_sobj->sprite.attr |= SP_TRANSPARENT;
	parenthesis_sobj->pos.x = 286.0F;
	parenthesis_sobj->pos.y = 209.0F;
	parenthesis_sobj->sprite.red = 0x40;
	parenthesis_sobj->sprite.green = 0x6F;
	parenthesis_sobj->sprite.blue = 0xCD;

	mnPlayers1PGameMakeNumber(bonuses_gobj, mnPlayers1PGameGetTotalBonuses(), 285.0F, 208.0F, number_color, 3, 1);
}

// 0x80134E88
void mnPlayers1PGameDrawTotalHighscoreAndBonuses()
{
	mnPlayers1PGameDrawTotalHighscore();
	mnPlayers1PGameDrawTotalBonuses();
}

// 0x80134EB0 - Unused?
void func_ovl27_80134EB0() {}

// 0x80134EB8 - Unused?
void func_ovl27_80134EB8() {}

// 0x80134EC0
s32 mnPlayers1PGameGetFreeCostume(s32 fkind, s32 select_button)
{
	return ftParamGetCostumeCommonID(fkind, select_button);
}

// 0x80134EE0
s32 mnPlayers1PGameGetStatusSelected(s32 fkind)
{
	switch (fkind)
	{
		case nFTKindFox:
		case nFTKindSamus:
			return 0x10004;
		case nFTKindDonkey:
		case nFTKindLuigi:
		case nFTKindLink:
		case nFTKindCaptain:
			return 0x10001;
		case nFTKindYoshi:
		case nFTKindPurin:
		case nFTKindNess:
			return 0x10002;
		case nFTKindMario:
		case nFTKindKirby:
			return 0x10003;
		default:
			return 0x10001;
	}
}

// 0x80134F40
void mnPlayers1PGameFighterProcUpdate(GObj *fighter_gobj)
{
	FTStruct *fp = ftGetStruct(fighter_gobj);
	s32 player = fp->player;

	if (sMNPlayers1PGameSlot.is_fighter_selected == TRUE)
	{
		if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y < F_CLC_DTOR32(0.1F))
		{
			if (sMNPlayers1PGameSlot.is_status_selected == FALSE)
			{
				scSubsysFighterSetStatus(sMNPlayers1PGameSlot.player, mnPlayers1PGameGetStatusSelected(sMNPlayers1PGameSlot.fkind));

				sMNPlayers1PGameSlot.is_status_selected = TRUE;
			}
		}
		else
		{
			DObjGetStruct(fighter_gobj)->rotate.vec.f.y += F_CST_DTOR32(20.0F);

			if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > F_CLC_DTOR32(360.0F))
			{
				DObjGetStruct(fighter_gobj)->rotate.vec.f.y = 0.0F;

				scSubsysFighterSetStatus(sMNPlayers1PGameSlot.player, mnPlayers1PGameGetStatusSelected(sMNPlayers1PGameSlot.fkind));

				sMNPlayers1PGameSlot.is_status_selected = TRUE;
			}
		}
	}
	else
	{
		DObjGetStruct(fighter_gobj)->rotate.vec.f.y += F_CST_DTOR32(2.0F);

		if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > F_CST_DTOR32(360.0F))
		{
			DObjGetStruct(fighter_gobj)->rotate.vec.f.y -= F_CST_DTOR32(360.0F);
		}
	}
}

// 0x80135060
void mnPlayers1PGameMakeFighter(GObj* fighter_gobj, s32 player, s32 fkind, s32 costume)
{
	f32 initial_y_rotation;
	FTDesc desc = dFTManagerDefaultFighterDesc;

	if (fkind != nFTKindNull)
	{
		if (fighter_gobj != NULL)
		{
			initial_y_rotation = DObjGetStruct(fighter_gobj)->rotate.vec.f.y;
			ftManagerDestroyFighter(fighter_gobj);
		}
		else
			initial_y_rotation = 0.0F;

		desc.fkind = fkind;
		sMNPlayers1PGameSlot.costume = desc.costume = costume;
		desc.shade = 0;
		desc.figatree_heap = sMNPlayers1PGameFigatreeHeap;
		desc.player = player;
		sMNPlayers1PGameSlot.player = fighter_gobj = ftManagerMakeFighter(&desc);

		gcAddGObjProcess(fighter_gobj, mnPlayers1PGameFighterProcUpdate, 1, 1);

		DObjGetStruct(fighter_gobj)->translate.vec.f.x = -1100.0F;
		DObjGetStruct(fighter_gobj)->translate.vec.f.y = -850.0F;

		DObjGetStruct(fighter_gobj)->rotate.vec.f.y = initial_y_rotation;

		DObjGetStruct(fighter_gobj)->scale.vec.f.x = dSCSubsysFighterScales[fkind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.y = dSCSubsysFighterScales[fkind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.z = dSCSubsysFighterScales[fkind];
	}
}

// 0x801351CC
void mnPlayers1PGameMakeFighterCamera()
{
	CObj *cobj = CObjGetStruct((GObj*)gcMakeCameraGObj(0x401U, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x48600, -1, 1, 1, 0, 1, 0));
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	cobj->vec.eye.x = 0.0F;
	cobj->vec.eye.y = 0.0F;
	cobj->vec.eye.z = 5000.0F;
	cobj->flags = 4;
	cobj->vec.at.x = 0.0F;
	cobj->vec.at.y = 0.0F;
	cobj->vec.at.z = 0.0F;
	cobj->vec.up.x = 0.0F;
	cobj->vec.up.z = 0.0F;
	cobj->vec.up.y = 1.0F;
}

// 0x801352BC
void mnPlayers1PGameUpdateCursor(GObj* cursor_gobj, s32 player, s32 cursor_status)
{
	SObj* cursor_sobj;
	f32 current_x, current_y;
	SYColorRGBPair type_colors[4] = {

		{ { 0xE0, 0x15, 0x15 }, { 0x5B, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0xFB }, { 0x00, 0x00, 0x52 } },
		{ { 0xCA, 0x94, 0x08 }, { 0x62, 0x3C, 0x00 } },
		{ { 0x00, 0x91, 0x00 }, { 0x00, 0x4F, 0x00 } }
	};
	intptr_t type_offsets[4] = {

		0x8268, 0x8368, 0x8468, 0x8568
	};
	intptr_t cursor_offsets[3] = {

		0x6F88, 0x76E8, 0x8168
	};
	Vec2i type_positions[3] = {

		{ 0x7, 0xF },
		{ 0x9, 0xA },
		{ 0x9, 0xF }
	};

	current_x = SObjGetStruct(cursor_gobj)->pos.x;
	current_y = SObjGetStruct(cursor_gobj)->pos.y;

	gcRemoveSObjAll(cursor_gobj);

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[0], cursor_offsets[cursor_status]));
	cursor_sobj->pos.x = current_x;
	cursor_sobj->pos.y = current_y;
	cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
	cursor_sobj->sprite.attr |= SP_TRANSPARENT;

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[0], type_offsets[player]));
	cursor_sobj->pos.x = SObjGetPrev(cursor_sobj)->pos.x + type_positions[cursor_status].x;
	cursor_sobj->pos.y = SObjGetPrev(cursor_sobj)->pos.y + type_positions[cursor_status].y;
	cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
	cursor_sobj->sprite.attr |= SP_TRANSPARENT;
	cursor_sobj->sprite.red = type_colors[player].prim.r;
	cursor_sobj->sprite.green = type_colors[player].prim.g;
	cursor_sobj->sprite.blue = type_colors[player].prim.b;
	cursor_sobj->envcolor.r = type_colors[player].env.r;
	cursor_sobj->envcolor.g = type_colors[player].env.g;
	cursor_sobj->envcolor.b = type_colors[player].env.b;
}

// 0x801354CC
sb32 mnPlayers1PGameCheckPickerRightArrowPress(GObj* cursor_gobj)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_y = cursor_sobj->pos.y + 3.0F;

	range_check = (current_y < 12.0F) || (current_y > 35.0F) ? TRUE : FALSE;
	if (range_check)
		return FALSE;

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= 210.0F) && (current_x <= 230.0F) ? TRUE : FALSE;
	if (range_check)
		return TRUE;

	return FALSE;
}

// 0x80135594
sb32 mnPlayers1PGameCheckPickerLeftArrowPress(GObj* cursor_gobj)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_y = cursor_sobj->pos.y + 3.0F;

	range_check = (current_y < 12.0F) || (current_y > 35.0F) ? TRUE : FALSE;
	if (range_check)
		return FALSE;

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= 140.0F) && (current_x <= 160.0F) ? TRUE : FALSE;
	if (range_check)
		return TRUE;

	return FALSE;
}

// 0x8013565C
sb32 mnPlayers1PGameCheckBackInRange(GObj* cursor_gobj)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_y = cursor_sobj->pos.y + 3.0F;

	range_check = (current_y < 13.0F) || (current_y > 34.0F) ? TRUE : FALSE;
	if (range_check)
		return FALSE;

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= 244.0F) && (current_x <= 292.0F) ? TRUE : FALSE;
	if (range_check)
		return TRUE;

	return FALSE;
}

// 0x80135724
sb32 mnPlayers1PGameCheckPuckInRange(GObj* cursor_gobj, s32 cursor_player, s32 player)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj = SObjGetStruct(cursor_gobj);
	SObj* puck_sobj = SObjGetStruct(sMNPlayers1PGameSlot.puck);

	current_x = cursor_sobj->pos.x + 25.0F;

	range_check = (current_x >= puck_sobj->pos.x) && (current_x <= puck_sobj->pos.x + 26.0F) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= puck_sobj->pos.y) && (current_y <= puck_sobj->pos.y + 24.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 0x801357FC - Unused?
void func_ovl27_801357FC() {}

// 0x80135804
void mnPlayers1PGameUpdateFighter(s32 player)
{
	s32 var_v0 = 0;

	if ((sMNPlayers1PGameSlot.fkind == nFTKindNull) && !sMNPlayers1PGameSlot.is_selected)
	{
		sMNPlayers1PGameSlot.player->flags = 1;
		mnPlayers1PGameDrawStock(sMNPlayers1PGameStockValue, sMNPlayers1PGameSlot.fkind);
		mnPlayers1PGameDrawHighscoreAndBonuses();
		var_v0 = 1;
	}

	if (var_v0 == 0)
	{
		mnPlayers1PGameMakeFighter(sMNPlayers1PGameSlot.player, player, sMNPlayers1PGameSlot.fkind, mnPlayers1PGameGetFreeCostume(sMNPlayers1PGameSlot.fkind, 0));
		mnPlayers1PGameDrawStock(sMNPlayers1PGameStockValue, sMNPlayers1PGameSlot.fkind);
		mnPlayers1PGameDrawHighscoreAndBonuses();
		sMNPlayers1PGameSlot.player->flags = 0;
		sMNPlayers1PGameSlot.is_status_selected = FALSE;
	}
}

// 0x801358BC - Unused?
void func_ovl27_801358BC() {}

// 0x801358C4
void mnPlayers1PGameUpdateNameAndEmblem(s32 player)
{
	if ((sMNPlayers1PGameSlot.fkind == nFTKindNull) && !sMNPlayers1PGameSlot.is_selected)
	{
		sMNPlayers1PGameSlot.name_logo_gobj->flags = 1;
	}
	else
	{
		sMNPlayers1PGameSlot.name_logo_gobj->flags = 0;
		mnPlayers1PGameMakeNameAndEmblem(sMNPlayers1PGameSlot.name_logo_gobj, player, sMNPlayers1PGameSlot.fkind);
	}
}

// 0x80135924
void mnPlayers1PGameDestroyPortraitFlash(s32 player)
{
	GObj* flash_gobj;

	flash_gobj = sMNPlayers1PGameSlot.flash;
	if (flash_gobj != NULL)
	{
		sMNPlayers1PGameSlot.flash = NULL;
		gcEjectGObj(flash_gobj);
	}
}

// 0x8013595C
void mnPlayers1PGamePortraitFlash(GObj* flash_gobj)
{
	s32 duration = 16;
	s32 frames_to_wait = 1;

	while (TRUE)
	{
		duration--, frames_to_wait--;

		if (duration == 0)
			mnPlayers1PGameDestroyPortraitFlash(flash_gobj->user_data.p);

		if (frames_to_wait == 0)
		{
			frames_to_wait = 1;
			flash_gobj->flags = (flash_gobj->flags == 1) ? 0 : 1;
		}

		gcStopCurrentGObjThread(1);
	}
}

// 0x801359FC
void mnPlayers1PGameMakePortraitFlash(s32 player)
{
	GObj* flash_gobj;
	SObj* flash_sobj;
	s32 portrait = mnPlayers1PGameGetPortrait(sMNPlayers1PGameSlot.fkind);

	mnPlayers1PGameDestroyPortraitFlash(player);

	sMNPlayers1PGameSlot.flash = flash_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1AU, 0x80000000U);
	gcAddGObjDisplay(flash_gobj, lbCommonDrawSObjAttr, 0x21U, GOBJ_PRIORITY_DEFAULT, ~0);
	flash_gobj->user_data.p = player;
	gcAddGObjProcess(flash_gobj, mnPlayers1PGamePortraitFlash, 0, 1);

	flash_sobj = lbCommonMakeSObjForGObj(flash_gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[4], &lMNPlayersPortraitsFlashSprite));
	flash_sobj->pos.x = (f32) (((portrait >= 6 ? portrait - 6 : portrait) * 45) + 26);
	flash_sobj->pos.y = (f32) (((portrait >= 6 ? 1 : 0) * 43) + 37);
}

// 0x80135B30
void mnPlayers1PGameAnnounceFighter(s32 player, s32 panel_id)
{
	u16 announcer_fgms[12] = {

		0x01F3, 0x01E6,
		0x01E3, 0x0201,
		0x01F2, 0x01F1,
		0x0217, 0x01E5,
		0x01F0, 0x01FB,
		0x01FC, 0x01F5
	};

	if (sMNPlayers1PGameSlot.p_sfx != NULL)
	{
		if ((sMNPlayers1PGameSlot.p_sfx->sfx_id != 0) && (sMNPlayers1PGameSlot.p_sfx->sfx_id == sMNPlayers1PGameSlot.sfx_id))
			func_80026738_27338(sMNPlayers1PGameSlot.p_sfx);
	}

	func_800269C0_275C0(0x79U);

	sMNPlayers1PGameSlot.p_sfx = func_800269C0_275C0(announcer_fgms[sMNPlayers1PGameSlot.fkind]);

	if (sMNPlayers1PGameSlot.p_sfx != NULL)
		sMNPlayers1PGameSlot.sfx_id = sMNPlayers1PGameSlot.p_sfx->sfx_id;
}

// 0x80135BFC - Unused?
void func_ovl27_80135BFC() {}

// 0x80135C04
sb32 mnPlayers1PGameSelectChar(GObj* cursor_gobj, s32 player, s32 arg2, s32 select_button)
{
	if (sMNPlayers1PGameSlot.cursor_status != nMNPlayersCursorStatusGrab)
		return FALSE;

	if (sMNPlayers1PGameSlot.fkind != nFTKindNull)
	{
		mnPlayers1PGameSelectFighterPuck(player, select_button);
		sMNPlayers1PGameSlot.recall_end_tic = sMNPlayers1PGameTotalTimeTics + 0x1E;
		return TRUE;
	}

	func_800269C0_275C0(0xA5U);
	return FALSE;
}

// 0x80135C88
void mnPlayers1PGameUpdateCursorGrabDLLinks(s32 player, s32 puck_id)
{
	s32 display_orders[4] = {

		6, 4, 2, 0
	};
	gcMoveGObjDL(sMNPlayers1PGameSlot.puck, 0x1E, display_orders[player] + 1);
}

// 0x80135CF4
void mnPlayers1PGameUpdateCursorPlacementDLLinks(s32 player)
{
	s32 unheld_orders[4] = {

		3, 2, 1, 0
	};
	gcMoveGObjDL(sMNPlayers1PGameSlot.puck, 0x1F, unheld_orders[player]);
}

// 0x80135D58
void mnPlayers1PGameSetCursorPuckOffset(s32 player)
{
	sMNPlayers1PGameSlot.cursor_pickup_x = SObjGetStruct(sMNPlayers1PGameSlot.puck)->pos.x - 11.0F;
	sMNPlayers1PGameSlot.cursor_pickup_y = SObjGetStruct(sMNPlayers1PGameSlot.puck)->pos.y - -14.0F;
}

// 0x80135D9C
void mnPlayers1PGameSetCursorGrab(s32 player)
{
	sMNPlayers1PGameSlot.holder_player = player;
	sMNPlayers1PGameSlot.is_selected = FALSE;
	sMNPlayers1PGameSlot.cursor_status = nMNPlayersCursorStatusGrab;
	sMNPlayers1PGameSlot.held_player = player;
	sMNPlayers1PGameSlot.is_fighter_selected = FALSE;

	mnPlayers1PGameUpdateFighter(player);
	mnPlayers1PGameUpdateCursorGrabDLLinks(player, player);
	mnPlayers1PGameSetCursorPuckOffset(player);
	mnPlayers1PGameUpdateCursor(sMNPlayers1PGameSlot.cursor, player, sMNPlayers1PGameSlot.cursor_status);

	sMNPlayers1PGameSlot.is_cursor_adjusting = TRUE;

	func_800269C0_275C0(0x7FU);

	mnPlayers1PGameDestroyPortraitFlash(player);
	mnPlayers1PGameUpdateNameAndEmblem(player);
}

// 0x80135E2C
sb32 mnPlayers1PGameCheckCursorPuckGrab(GObj* cursor_gobj, s32 player)
{
	MNPlayersSlot1PGame* pslot = &sMNPlayers1PGameSlot;

	if ((sMNPlayers1PGameTotalTimeTics < sMNPlayers1PGameSlot.recall_end_tic) || (sMNPlayers1PGameSlot.is_recalling))
		return FALSE;

	else if (sMNPlayers1PGameSlot.cursor_status != nMNPlayersCursorStatusHover)
		return FALSE;

	if ((sMNPlayers1PGameSlot.holder_player == 4) && (mnPlayers1PGameCheckPuckInRange(cursor_gobj, player, player)))
	{
		sMNPlayers1PGameSlot.holder_player = player;
		sMNPlayers1PGameSlot.is_selected = FALSE;
		sMNPlayers1PGameSlot.cursor_status = nMNPlayersCursorStatusGrab;
		pslot->held_player = player;
		sMNPlayers1PGameSlot.is_fighter_selected = FALSE;

		mnPlayers1PGameUpdateFighter(player);
		mnPlayers1PGameUpdateCursorGrabDLLinks(player, player);
		mnPlayers1PGameSetCursorPuckOffset(player);
		mnPlayers1PGameUpdateCursor(cursor_gobj, player, sMNPlayers1PGameSlot.cursor_status);

		sMNPlayers1PGameSlot.is_cursor_adjusting = TRUE;

		func_800269C0_275C0(0x7FU);
		mnPlayers1PGameDestroyPortraitFlash(player);
		mnPlayers1PGameUpdateNameAndEmblem(player);

		return TRUE;
	}

	return FALSE;
}

// 0x80135F34
s32 mnPlayers1PGameGetForcePuckFighterKind()
{
	SObj* puck_sobj = SObjGetStruct(sMNPlayers1PGameSlot.puck);
	s32 current_y = (s32) puck_sobj->pos.x + 13;
	s32 current_x = (s32) puck_sobj->pos.y + 12;
	s32 fkind;
	sb32 is_within_bounds;

	is_within_bounds = (current_x >= 36) && (current_x < 79) ? TRUE : FALSE;

	if (is_within_bounds)
	{
		is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

		if (is_within_bounds)
			return mnPlayers1PGameGetFighterKind((s32) (current_y - 25) / 45);
	}

	is_within_bounds = (current_x >= 79) && (current_x < 122) ? TRUE : FALSE;

	if (is_within_bounds)
	{
		is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

		if (is_within_bounds)
			return mnPlayers1PGameGetFighterKind(((s32) (current_y - 25) / 45) + 6);
	}
	return nFTKindNull;
}

// 0x80136050
s32 mnPlayers1PGameGetPuckFighterKind(s32 player)
{
	SObj* puck_sobj = SObjGetStruct(sMNPlayers1PGameSlot.puck);
	s32 current_y = (s32) puck_sobj->pos.x + 13;
	s32 current_x = (s32) puck_sobj->pos.y + 12;
	s32 fkind;
	sb32 is_within_bounds;

	is_within_bounds = (current_x >= 36) && (current_x < 79) ? TRUE : FALSE;

	if (is_within_bounds)
	{
		is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

		if (is_within_bounds)
		{
			fkind = mnPlayers1PGameGetFighterKind((s32) (current_y - 25) / 45);

			if ((mnPlayers1PGameCheckFighterCrossed(fkind)) || (mnPlayers1PGameCheckFighterLocked(fkind)))
				return nFTKindNull;

			return fkind;
		}
	}

	is_within_bounds = (current_x >= 79) && (current_x < 122) ? TRUE : FALSE;

	if (is_within_bounds)
	{
		is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

		if (is_within_bounds)
		{
			fkind = mnPlayers1PGameGetFighterKind(((s32) (current_y - 25) / 45) + 6);

			if ((mnPlayers1PGameCheckFighterCrossed(fkind)) || (mnPlayers1PGameCheckFighterLocked(fkind)))
				return nFTKindNull;

			return fkind;
		}
	}
	return nFTKindNull;
}

// 0x801361C8
void mnPlayers1PGameAdjustCursor(GObj* cursor_gobj, s32 player)
{
	SYController* controller;
	Vec2i coords[3] = {

		{ 0x7, 0xF },
		{ 0x9, 0xA },
		{ 0x9, 0xF }
	};
	f32 delta;
	sb32 is_within_bounds;

	if (sMNPlayers1PGameSlot.is_cursor_adjusting)
	{
		delta = (sMNPlayers1PGameSlot.cursor_pickup_x - SObjGetStruct(sMNPlayers1PGameSlot.cursor)->pos.x) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(sMNPlayers1PGameSlot.cursor)->pos.x = sMNPlayers1PGameSlot.cursor_pickup_x;
		else
			SObjGetStruct(sMNPlayers1PGameSlot.cursor)->pos.x += delta;

		delta = (sMNPlayers1PGameSlot.cursor_pickup_y - SObjGetStruct(sMNPlayers1PGameSlot.cursor)->pos.y) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(sMNPlayers1PGameSlot.cursor)->pos.y = sMNPlayers1PGameSlot.cursor_pickup_y;
		else
			SObjGetStruct(sMNPlayers1PGameSlot.cursor)->pos.y += delta;

		if ((SObjGetStruct(sMNPlayers1PGameSlot.cursor)->pos.x == sMNPlayers1PGameSlot.cursor_pickup_x) && (SObjGetStruct(sMNPlayers1PGameSlot.cursor)->pos.y == sMNPlayers1PGameSlot.cursor_pickup_y))
		{
			sMNPlayers1PGameSlot.is_cursor_adjusting = FALSE;
		}

		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = (f32) ((f32) coords[sMNPlayers1PGameSlot.cursor_status].x + SObjGetStruct(cursor_gobj)->pos.x);
		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = (f32) ((f32) coords[sMNPlayers1PGameSlot.cursor_status].y + SObjGetStruct(cursor_gobj)->pos.y);
	}
	else if (!sMNPlayers1PGameSlot.is_recalling)
	{
		controller = &gSYControllerDevices[player];
		is_within_bounds = (controller->stick_range.x < -8) || (controller->stick_range.x >= 9) ? TRUE : FALSE;

		if (is_within_bounds != 0)
		{
			delta = ((f32) controller->stick_range.x / 20.0F) + SObjGetStruct(cursor_gobj)->pos.x;

			is_within_bounds = (delta >= 0.0F) && (delta <= 280.0F) ? TRUE : FALSE;

			if (is_within_bounds != 0)
			{
				SObjGetStruct(cursor_gobj)->pos.x = delta;
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = SObjGetStruct(cursor_gobj)->pos.x + coords[sMNPlayers1PGameSlot.cursor_status].x;
			}
		}

		controller = &gSYControllerDevices[player];
		is_within_bounds = (controller->stick_range.y < -8) || (controller->stick_range.y >= 9) ? TRUE : FALSE;

		if (is_within_bounds != 0)
		{
			delta = ((f32) controller->stick_range.y / -20.0F) + SObjGetStruct(cursor_gobj)->pos.y;

			is_within_bounds = (delta >= 10.0F) && (delta <= 205.0F) ? TRUE : FALSE;

			if (is_within_bounds != 0)
			{
				SObjGetStruct(cursor_gobj)->pos.y = delta;
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = SObjGetStruct(cursor_gobj)->pos.y + coords[sMNPlayers1PGameSlot.cursor_status].y;
			}
		}
	}
}

// 0x80136540
void mnPlayers1PGameUpdateCursorDisplay(GObj* cursor_gobj, s32 player)
{
	s32 i;

	if (SObjGetStruct(cursor_gobj)->pos.y > 124.0F || SObjGetStruct(cursor_gobj)->pos.y < 38.0F)
	{
		if (sMNPlayers1PGameSlot.cursor_status != nMNPlayersCursorStatusPointer)
		{
			mnPlayers1PGameUpdateCursor(cursor_gobj, player, nMNPlayersCursorStatusPointer);
			sMNPlayers1PGameSlot.cursor_status = nMNPlayersCursorStatusPointer;
		}
	}
	else
	{
		if (sMNPlayers1PGameSlot.held_player == -1)
		{
			if (sMNPlayers1PGameSlot.cursor_status != nMNPlayersCursorStatusHover)
			{
				mnPlayers1PGameUpdateCursor(cursor_gobj, player, nMNPlayersCursorStatusHover);
				sMNPlayers1PGameSlot.cursor_status = nMNPlayersCursorStatusHover;
			}
		}
		else
		{
			if (sMNPlayers1PGameSlot.cursor_status != nMNPlayersCursorStatusGrab)
			{
				mnPlayers1PGameUpdateCursor(cursor_gobj, player, nMNPlayersCursorStatusGrab);
				sMNPlayers1PGameSlot.cursor_status = nMNPlayersCursorStatusGrab;
			}
		}
	}

	if (sMNPlayers1PGameSlot.cursor_status == nMNPlayersCursorStatusPointer && sMNPlayers1PGameSlot.is_selected)
	{
		for (i = 0; i < 4; i++)
		{
			if (sMNPlayers1PGameSlot.is_selected == 1 && mnPlayers1PGameCheckPuckInRange(cursor_gobj, player, i))
			{
				mnPlayers1PGameUpdateCursor(cursor_gobj, player, nMNPlayersCursorStatusHover);
				sMNPlayers1PGameSlot.cursor_status = nMNPlayersCursorStatusHover;
				return;
			}
		}
	}
}

// 0x801366C4
sb32 mnPlayers1PGameCheckLevelRightArrowPress(GObj* cursor_gobj)
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
sb32 mnPlayers1PGameCheckLevelLeftArrowPress(GObj* cursor_gobj)
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
sb32 mnPlayers1PGameCheckAnyLevelArrowPress(GObj* cursor_gobj)
{
	if (mnPlayers1PGameCheckLevelRightArrowPress(cursor_gobj))
	{
		if (sMNPlayers1PGameLevelValue < 4)
		{
			func_800269C0_275C0(0xA4U);

			sMNPlayers1PGameDrawLevel(++sMNPlayers1PGameLevelValue);
		}
		return TRUE;
	}
	if (mnPlayers1PGameCheckLevelLeftArrowPress(cursor_gobj))
	{
		if (sMNPlayers1PGameLevelValue > 0)
		{
			func_800269C0_275C0(0xA4U);

			sMNPlayers1PGameDrawLevel(--sMNPlayers1PGameLevelValue);
		}
		return TRUE;
	}
	return FALSE;
}

// 0x801368FC
sb32 mnPlayers1PGameCheckStockRightArrowPress(GObj* cursor_gobj)
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
sb32 mnPlayers1PGameCheckStockLeftArrowPress(GObj* cursor_gobj)
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
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 0x80136A84
sb32 mnPlayers1PGameCheckAnyStockArrowPress(GObj* cursor_gobj)
{
	if (mnPlayers1PGameCheckStockRightArrowPress(cursor_gobj))
	{
		if (sMNPlayers1PGameStockValue < 4)
		{
			func_800269C0_275C0(0xA4U);

			mnPlayers1PGameDrawStock(++sMNPlayers1PGameStockValue, sMNPlayers1PGameSlot.fkind);
		}
		return TRUE;
	}
	if (mnPlayers1PGameCheckStockLeftArrowPress(cursor_gobj))
	{
		if (sMNPlayers1PGameStockValue > 0)
		{
			func_800269C0_275C0(0xA4U);

			mnPlayers1PGameDrawStock(--sMNPlayers1PGameStockValue, sMNPlayers1PGameSlot.fkind);
		}
		return TRUE;
	}
	return FALSE;
}

// 0x80136B44
void mnPlayers1PGameCostumeSync(s32 arg0, s32 select_button)
{
	s32 costume = ftParamGetCostumeCommonID(sMNPlayers1PGameSlot.fkind, select_button);

	ftParamInitAllParts(sMNPlayers1PGameSlot.player, costume, 0);

	sMNPlayers1PGameSlot.costume = costume;

	mnPlayers1PGameDrawStock(sMNPlayers1PGameStockValue, sMNPlayers1PGameSlot.fkind);

	func_800269C0_275C0(0xA4U);
}

// 0x80136BAC
sb32 mnPlayers1PGameCheckManFighterSelected(s32 arg0)
{
	if (sMNPlayers1PGameSlot.is_selected)
	{
		return TRUE;
	}
	return FALSE;
}

// 0x80136BD4
void mnPlayers1PGameRecallPuck(s32 player)
{
	sMNPlayers1PGameSlot.is_fighter_selected = FALSE;
	sMNPlayers1PGameSlot.is_selected = FALSE;
	sMNPlayers1PGameSlot.is_recalling = TRUE;
	sMNPlayers1PGameSlot.recall_tics = 0;
	sMNPlayers1PGameSlot.recall_start_x = SObjGetStruct(sMNPlayers1PGameSlot.puck)->pos.x;
	sMNPlayers1PGameSlot.recall_start_y = SObjGetStruct(sMNPlayers1PGameSlot.puck)->pos.y;

	sMNPlayers1PGameSlot.recall_end_x = SObjGetStruct(sMNPlayers1PGameSlot.cursor)->pos.x + 20.0F;

	if (sMNPlayers1PGameSlot.recall_end_x > 280.0F)
	{
		sMNPlayers1PGameSlot.recall_end_x = 280.0F;
	}

	sMNPlayers1PGameSlot.recall_end_y = SObjGetStruct(sMNPlayers1PGameSlot.cursor)->pos.y + -15.0F;

	if (sMNPlayers1PGameSlot.recall_end_y < 10.0F)
	{
		sMNPlayers1PGameSlot.recall_end_y = 10.0F;
	}

	if (sMNPlayers1PGameSlot.recall_end_y < sMNPlayers1PGameSlot.recall_start_y)
	{
		sMNPlayers1PGameSlot.recall_mid_y = sMNPlayers1PGameSlot.recall_end_y - 20.0F;
	}
	else
	{
		sMNPlayers1PGameSlot.recall_mid_y = sMNPlayers1PGameSlot.recall_start_y - 20.0F;
	}
}

// 0x80136CB8
void mnPlayers1PGameBackTo1PMode()
{
	gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
	gSCManagerSceneData.scene_curr = nSCKind1PMode;

	mnPlayers1PGameSetSceneData();
	syAudioStopSongAll();
	func_800266A0_272A0();
	syTaskmanSetLoadScene();
}

// 0x80136D04
void mnPlayers1PGameDetectBack(s32 player)
{
	SYController* controller = &gSYControllerDevices[player];

	if ((sMNPlayers1PGameTotalTimeTics >= 10) && (controller->button_tap & B_BUTTON))
	{
		mnPlayers1PGameBackTo1PMode();
	}
}


// 0x80136D58
void mnPlayers1PGameCursorProcUpdate(GObj* cursor_gobj)
{
	SYController* controller = &gSYControllerDevices[cursor_gobj->user_data.s];
	MNPlayersSlot1PGame* pslot;
	s32 foo, bar, baz;
	s32 player = cursor_gobj->user_data.s;

	mnPlayers1PGameAdjustCursor(cursor_gobj, player);

	if ((gSYControllerDevices[player].button_tap & A_BUTTON)
		&& (!mnPlayers1PGameSelectChar(cursor_gobj, player, sMNPlayers1PGameSlot.held_player, 0))
		&& (!mnPlayers1PGameCheckCursorPuckGrab(cursor_gobj, player)))
	{
		if (mnPlayers1PGameCheckPickerRightArrowPress(cursor_gobj))
		{
			sMNPlayers1PGameTimeSetting = mnPlayers1PGameGetNextTimerValue(sMNPlayers1PGameTimeSetting);
			mnPlayers1PGameDrawTimerPicker(sMNPlayers1PGameTimeSetting);
			func_800269C0_275C0(0xA4U);
		}
		else if (mnPlayers1PGameCheckPickerLeftArrowPress(cursor_gobj))
		{
			sMNPlayers1PGameTimeSetting = mnPlayers1PGameGetPrevTimerValue(sMNPlayers1PGameTimeSetting);
			mnPlayers1PGameDrawTimerPicker(sMNPlayers1PGameTimeSetting);
			func_800269C0_275C0(0xA4U);
		}
		else if (mnPlayers1PGameCheckBackInRange(cursor_gobj))
		{
				mnPlayers1PGameBackTo1PMode();
				func_800269C0_275C0(0xA4U);
		}
		else if (!mnPlayers1PGameCheckAnyLevelArrowPress(cursor_gobj))
		{
			mnPlayers1PGameCheckAnyStockArrowPress(cursor_gobj);
		}
	}

	if ((gSYControllerDevices[player].button_tap & U_CBUTTONS)
		&& (!mnPlayers1PGameSelectChar(cursor_gobj, player, sMNPlayers1PGameSlot.held_player, 0))
		&& (sMNPlayers1PGameSlot.is_fighter_selected))
	{
		mnPlayers1PGameCostumeSync(player, 0);
	}
	if ((gSYControllerDevices[player].button_tap & R_CBUTTONS)
		&& (!mnPlayers1PGameSelectChar(cursor_gobj, player, sMNPlayers1PGameSlot.held_player, 1))
		&& (sMNPlayers1PGameSlot.is_fighter_selected))
	{
		mnPlayers1PGameCostumeSync(player, 1);
	}
	if ((gSYControllerDevices[player].button_tap & D_CBUTTONS)
		&& (!mnPlayers1PGameSelectChar(cursor_gobj, player, sMNPlayers1PGameSlot.held_player, 2))
		&& (sMNPlayers1PGameSlot.is_fighter_selected))
	{
		mnPlayers1PGameCostumeSync(player, 2);
	}
	if ((gSYControllerDevices[player].button_tap & L_CBUTTONS)
		&& (!mnPlayers1PGameSelectChar(cursor_gobj, player, sMNPlayers1PGameSlot.held_player, 3))
		&& (sMNPlayers1PGameSlot.is_fighter_selected))
	{
		mnPlayers1PGameCostumeSync(player, 3);
	}

	if ((gSYControllerDevices[player].button_tap & B_BUTTON) && (mnPlayers1PGameCheckManFighterSelected(player)))
	{
		mnPlayers1PGameRecallPuck(player);
	}
	if (!sMNPlayers1PGameSlot.is_recalling)
	{
		mnPlayers1PGameDetectBack(player);
	}
	if (!sMNPlayers1PGameSlot.is_recalling)
	{
		mnPlayers1PGameUpdateCursorDisplay(cursor_gobj, player);
	}
}

// 0x80138C0C
s32 D_ovl27_80138C0C[] = {

	0x00009048,
	0x00009B28,
	0x0000A608,
	0x0000B0E8,
	0x0000BBC8
};

// 0x8013702C - Unused?
void func_ovl27_8013702C() {}

// 0x80137034
void mnPlayers1PGameCenterPuckInPortrait(GObj* puck_gobj, s32 fkind)
{
	s32 portrait = mnPlayers1PGameGetPortrait(fkind);

	if (portrait >= 6)
	{
		SObjGetStruct(puck_gobj)->pos.x = (portrait * 45) - (6 * 45) + 36;
		SObjGetStruct(puck_gobj)->pos.y = 89.0F;
	}
	else
	{
		SObjGetStruct(puck_gobj)->pos.x = (portrait * 45) + 36;
		SObjGetStruct(puck_gobj)->pos.y = 46.0F;
	}
}

// 0x801370E4 - Unused?
void func_ovl27_801370E4() {}

// 0x801370EC
void mnPlayers1PGameMovePuck(s32 player)
{
	SObjGetStruct(sMNPlayers1PGameSlot.puck)->pos.x += sMNPlayers1PGameSlot.puck_vel_x;
	SObjGetStruct(sMNPlayers1PGameSlot.puck)->pos.y += sMNPlayers1PGameSlot.puck_vel_y;
}

// 0x8013712C
void mnPlayers1PGamePuckProcUpdate(GObj* puck_gobj)
{
	s32 fkind;
	s32 player = puck_gobj->user_data.s;

	if (sMNPlayers1PGameTotalTimeTics < 0x1E)
	{
		puck_gobj->flags = 1;
	}
	else
	{
		if ((sMNPlayers1PGameSlot.cursor_status != nMNPlayersCursorStatusPointer)
			|| (sMNPlayers1PGameSlot.is_selected == TRUE)
			|| (sMNPlayers1PGameSlot.is_recalling == TRUE))
		{
			puck_gobj->flags = 0;
		}
		else
		{
			puck_gobj->flags = 1;
		}
	}

	if ((!sMNPlayers1PGameSlot.is_selected)
		&& (sMNPlayers1PGameSlot.holder_player != 4)) {
		if (!sMNPlayers1PGameSlot.is_cursor_adjusting) {
			SObjGetStruct(puck_gobj)->pos.x = (f32) (SObjGetStruct(sMNPlayers1PGameSlot.cursor)->pos.x + 11.0F);
			SObjGetStruct(puck_gobj)->pos.y = (f32) (SObjGetStruct(sMNPlayers1PGameSlot.cursor)->pos.y + -14.0F);
		}
	}
	else
		mnPlayers1PGameMovePuck(player);

	fkind = mnPlayers1PGameGetPuckFighterKind(player);

	if ((!sMNPlayers1PGameSlot.is_selected)
		&& (fkind != sMNPlayers1PGameSlot.fkind))
	{
		sMNPlayers1PGameSlot.fkind = fkind;

		mnPlayers1PGameUpdateFighter(player);
		mnPlayers1PGameUpdateNameAndEmblem(player);
	}
	mnPlayers1PGameDrawHighscoreAndBonuses();
}

// 0x80137268
void mnPlayers1PGameMakeCursorCamera()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0xD, 0x40000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80137308
void mnPlayers1PGameMakePuckCamera()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0xF, GOBJ_PRIORITY_DEFAULT, ~0, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801373A8
void mnPlayers1PGameMakeReadyCamera()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0xA, 0x800000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80137448
void mnPlayers1PGameMakeCursor(s32 player)
{
	GObj* cursor_gobj;
	s32 unused;
	intptr_t cursor_type_offsets_unused[4] = {

		0x8268,
		0x8368,
		0x8468,
		0x8568
	};
	s32 cursor_starting_display_orders[4] = {

		6, 4, 2, 0
	};

	cursor_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x13, 0x80000000, lbCommonDrawSObjAttr, 0x1E, cursor_starting_display_orders[player], -1, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[0], &FILE_011_CURSOR_POINTER_IMAGE_OFFSET), 1, mnPlayers1PGameCursorProcUpdate, 2);

	cursor_gobj->user_data.s = player;
	sMNPlayers1PGameSlot.cursor = cursor_gobj;
	SObjGetStruct(cursor_gobj)->pos.x = 60.0F;
	SObjGetStruct(cursor_gobj)->pos.y = 170.0F;
	SObjGetStruct(cursor_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(cursor_gobj)->sprite.attr |= SP_TRANSPARENT;

	mnPlayers1PGameUpdateCursor(cursor_gobj, player, 0);
}

// 0x80137590
void mnPlayers1PGameMakePuck(s32 player)
{
	GObj* puck_gobj;
	MNPlayersSlot1PGame* pslot;

	// puck offsets not including cpu
	intptr_t offsets[4] = {

		0x9048,
		0x9B28,
		0xA608,
		0xB0E8
	};
	// display orders for pucks on initial load
	s32 orders1[4] = {

		3, 2, 1, 0
	};
	s32 foo;

	puck_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x14, 0x80000000, lbCommonDrawSObjAttr, 0x1F, orders1[player], -1, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[0], offsets[player]), 1, mnPlayers1PGamePuckProcUpdate, 1);

	puck_gobj->user_data.s = player;
	sMNPlayers1PGameSlot.puck = puck_gobj;

	if (sMNPlayers1PGameSlot.fkind == nFTKindNull)
	{
		SObjGetStruct(puck_gobj)->pos.x = 51.0F;
		SObjGetStruct(puck_gobj)->pos.y = 161.0F;
	}
	else
		mnPlayers1PGameCenterPuckInPortrait(puck_gobj, sMNPlayers1PGameSlot.fkind);

	SObjGetStruct(puck_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(puck_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 0x801376F0 - Unused?
void func_ovl27_801376F0() {}

// 0x801376F8
void mnPlayers1PGamePuckAdjustPortraitEdge(s32 player)
{
	s32 portrait = mnPlayers1PGameGetPortrait(sMNPlayers1PGameSlot.fkind);
	f32 portrait_edge_x = ((portrait >= 6) ? portrait - 6 : portrait) * 45 + 25;
	f32 portrait_edge_y = ((portrait >= 6) ? 1 : 0) * 43 + 36;
	f32 new_pos_x = SObjGetStruct(sMNPlayers1PGameSlot.puck)->pos.x + sMNPlayers1PGameSlot.puck_vel_x + 13.0F;
	f32 new_pos_y = SObjGetStruct(sMNPlayers1PGameSlot.puck)->pos.y + sMNPlayers1PGameSlot.puck_vel_y + 12.0F;

	if (new_pos_x < (portrait_edge_x + 5.0F))
	{
		sMNPlayers1PGameSlot.puck_vel_x = ((portrait_edge_x + 5.0F) - new_pos_x) / 10.0F;
	}
	if (((portrait_edge_x + 45.0F) - 5.0F) < new_pos_x)
	{
		sMNPlayers1PGameSlot.puck_vel_x = ((new_pos_x - ((portrait_edge_x + 45.0F) - 5.0F)) * -1.0F) / 10.0F;
	}
	if (new_pos_y < (portrait_edge_y + 5.0F))
	{
		sMNPlayers1PGameSlot.puck_vel_y = ((portrait_edge_y + 5.0F) - new_pos_y) / 10.0F;
	}
	if (((portrait_edge_y + 43.0F) - 5.0F) < new_pos_y)
	{
		sMNPlayers1PGameSlot.puck_vel_y = ((new_pos_y - ((portrait_edge_y + 43.0F) - 5.0F)) * -1.0F) / 10.0F;
	}
}

// 0x801378A8
void mnPlayers1PGamePuckAdjustPlaced(s32 player)
{
	mnPlayers1PGamePuckAdjustPortraitEdge(player);
}

// 0x801378C8
void mnPlayers1PGamePuckAdjustRecall(s32 player)
{
	f32 new_y_velocity, new_x_velocity;

	sMNPlayers1PGameSlot.recall_tics += 1;

	if (sMNPlayers1PGameSlot.recall_tics < 11)
	{
		new_x_velocity = (sMNPlayers1PGameSlot.recall_end_x - sMNPlayers1PGameSlot.recall_start_x) / 10.0F;

		if (sMNPlayers1PGameSlot.recall_tics < 6)
		{
			new_y_velocity = (sMNPlayers1PGameSlot.recall_mid_y - sMNPlayers1PGameSlot.recall_start_y) / 5.0F;
		}
		else
		{
			new_y_velocity = (sMNPlayers1PGameSlot.recall_end_y - sMNPlayers1PGameSlot.recall_mid_y) / 5.0F;
		}

		sMNPlayers1PGameSlot.puck_vel_x = new_x_velocity;
		sMNPlayers1PGameSlot.puck_vel_y = new_y_velocity;
	}
	else if (sMNPlayers1PGameSlot.recall_tics == 11)
	{
		mnPlayers1PGameSetCursorGrab(player);

		sMNPlayers1PGameSlot.puck_vel_x = 0.0F;
		sMNPlayers1PGameSlot.puck_vel_y = 0.0F;
	}

	if (sMNPlayers1PGameSlot.recall_tics == 30)
		sMNPlayers1PGameSlot.is_recalling = FALSE;
}

// 0x8013799C
void mnPlayers1PGamePuckAdjustProcUpdate(GObj *gobj)
{
	if (sMNPlayers1PGameSlot.is_recalling != FALSE)
	{
		mnPlayers1PGamePuckAdjustRecall(sMNPlayers1PGameManPlayer);
	}
	if (sMNPlayers1PGameSlot.is_selected != FALSE)
	{
		mnPlayers1PGamePuckAdjustPlaced(0);
	}
}

// 0x801379E8
void mnPlayers1PGameMakePuckAdjust(void)
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0, NULL, 24, GOBJ_PRIORITY_DEFAULT), mnPlayers1PGamePuckAdjustProcUpdate, nGCProcessKindFunc, 1);
}

// 0x80137A2C
void mnPlayers1PGameSpotlightProcUpdate(GObj* white_circle_gobj)
{
	f32 sizes[12] = {

		1.5, 1.5, 2.0, 1.5, 1.5, 1.5,
		1.5, 1.5, 1.5, 1.5, 1.5, 1.5
	};

	if ((sMNPlayers1PGameSlot.is_fighter_selected == 0) && (sMNPlayers1PGameSlot.fkind != nFTKindNull))
	{
		white_circle_gobj->flags = (white_circle_gobj->flags == 1) ? 0 : 1;

		DObjGetStruct(white_circle_gobj)->scale.vec.f.x = sizes[sMNPlayers1PGameSlot.fkind];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[sMNPlayers1PGameSlot.fkind];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[sMNPlayers1PGameSlot.fkind];
	}
	else
		white_circle_gobj->flags = 1;
}

// 0x80137B04
void mnPlayers1PGameMakeSpotlight()
{
	GObj* white_circle_gobj;

	white_circle_gobj = gcMakeGObjSPAfter(0U, NULL, 0x15U, 0x80000000U);

	gcSetupCommonDObjs(white_circle_gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[10], &lMNPlayersSpotlightDObjDesc), 0);

	gcAddGObjDisplay(white_circle_gobj, gcDrawDObjTreeDLLinksForGObj, 9U, GOBJ_PRIORITY_DEFAULT, ~0);

	gcAddMObjAll(white_circle_gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[10], &lMNPlayersSpotlightMObjSub));

	gcAddGObjProcess(white_circle_gobj, mnPlayers1PGameSpotlightProcUpdate, 1, 1);

	gcPlayAnimAll(white_circle_gobj);

	DObjGetStruct(white_circle_gobj)->translate.vec.f.x = -1100.0F;
	DObjGetStruct(white_circle_gobj)->translate.vec.f.y = -850.0F;
	DObjGetStruct(white_circle_gobj)->translate.vec.f.z = 0.0F;
}

// 0x80137BE4
void mnPlayers1PGameReadyProcUpdate(GObj* gobj)
{
	if (mnPlayers1PGameCheckReady())
	{
		sMNPlayers1PGameReadyBlinkWait++;

		if (sMNPlayers1PGameReadyBlinkWait == 40)
		{
			sMNPlayers1PGameReadyBlinkWait = 0;
		}

		gobj->flags = (sMNPlayers1PGameReadyBlinkWait < 30) ? GOBJ_FLAG_NONE : GOBJ_FLAG_HIDDEN;
	}
	else
	{
		gobj->flags = GOBJ_FLAG_HIDDEN;
		sMNPlayers1PGameReadyBlinkWait = 0;
	}
}

// 0x80137C64
void mnPlayers1PGameMakeReady()
{
	GObj* gobj;
	SObj* sobj;

	// Ready to Fight banner
	gobj = gcMakeGObjSPAfter(0U, NULL, 0x1CU, 0x80000000U);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0x23U, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnPlayers1PGameReadyProcUpdate, 1, 1);

	// Ready to Fight banner bg
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[0], &lMNPlayersCommonReadyBannerSprite));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->envcolor.r = 0;
	sobj->envcolor.g = 0;
	sobj->envcolor.b = 0;
	sobj->sprite.red = 0xF4;
	sobj->sprite.green = 0x56;
	sobj->sprite.blue = 0x7F;
	sobj->cms = 0;
	sobj->cmt = 0;
	sobj->masks = 3;
	sobj->maskt = 0;
	sobj->lrs = 0x140;
	sobj->lrt = 0x11;
	sobj->pos.x = 0.0F;
	sobj->pos.y = 71.0F;

	// Ready to Fight banner text
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[0], &lMNPlayersCommonReadySprite));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->envcolor.r = 0xFF;
	sobj->envcolor.g = 0xCA;
	sobj->envcolor.b = 0x13;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0xFF;
	sobj->sprite.blue = 0x9D;
	sobj->pos.x = 50.0F;
	sobj->pos.y = 76.0F;

	// Press Start indicator
	gobj = gcMakeGObjSPAfter(0U, NULL, 0x16U, 0x80000000U);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0x1CU, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnPlayers1PGameReadyProcUpdate, 1, 1);

	// "Press"
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[0], &lMNPlayersCommonPressSprite));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xD6;
	sobj->sprite.green = 0xDD;
	sobj->sprite.blue = 0xC6;
	sobj->pos.x = 133.0F;
	sobj->pos.y = 219.0F;

	// "Start"
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMNPlayers1PGameFiles[0], &lMNPlayersCommonStartSprite));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0x56;
	sobj->sprite.blue = 0x92;
	sobj->pos.x = 162.0F;
	sobj->pos.y = 219.0F;
}

// 0x80137EE0 - Unused?
void func_ovl27_80137EE0() {}

// 0x80137EE8 - Unused?
void func_ovl27_80137EE8() {}

// 0x80137EF0
sb32 mnPlayers1PGameCheckReady()
{
	sb32 is_ready = TRUE;

	if (!sMNPlayers1PGameSlot.is_fighter_selected)
		is_ready = FALSE;

	return is_ready;
}

// 0x80137F10
void mnPlayers1PGameSetSceneData()
{
	gSCManagerSceneData.spgame_time_limit = sMNPlayers1PGameTimeSetting;
	gSCManagerSceneData.player = sMNPlayers1PGameManPlayer;
	gSCManagerBackupData.spgame_difficulty = sMNPlayers1PGameLevelValue;
	gSCManagerSceneData.spgame_stage = 0;
	gSCManagerBackupData.spgame_stock_count = sMNPlayers1PGameStockValue;

	if (sMNPlayers1PGameSlot.is_fighter_selected != 0)
		gSCManagerSceneData.fkind = sMNPlayers1PGameSlot.fkind;
	else
		gSCManagerSceneData.fkind = nFTKindNull;

	gSCManagerSceneData.costume = sMNPlayers1PGameSlot.costume;

	lbBackupWrite();
}

// 0x80137F9C
void mnPlayers1PGamePauseSlotProcesses()
{
	if (sMNPlayers1PGameSlot.cursor != NULL)
		gcPauseGObjProcess(sMNPlayers1PGameSlot.cursor->gobjproc_head);
}

// 0x80137FCC
void mnPlayers1PGameProcRun(GObj *gobj)
{
	sMNPlayers1PGameTotalTimeTics++;

	if (sMNPlayers1PGameTotalTimeTics == sMNPlayers1PGameReturnTic)
	{
		gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
		gSCManagerSceneData.scene_curr = nSCKindTitle;

		mnPlayers1PGameSetSceneData();
		syTaskmanSetLoadScene();
		return;
	}
	if (scSubsysControllerCheckNoInputAll() == FALSE)
	{
		sMNPlayers1PGameReturnTic = sMNPlayers1PGameTotalTimeTics + I_MIN_TO_TICS(5);
	}
	if (sMNPlayers1PGameIsStart != FALSE)
	{
		sMNPlayers1PGameStartProceedWait--;

		if (sMNPlayers1PGameStartProceedWait == 0)
		{
			gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
			gSCManagerSceneData.scene_curr = nSCKind1PGame;

			mnPlayers1PGameSetSceneData();
			syTaskmanSetLoadScene();
		}
	}
	else if ((scSubsysControllerGetPlayerTapButtons(START_BUTTON)) && (sMNPlayers1PGameTotalTimeTics > 60))
	{
		if (mnPlayers1PGameCheckReady() != FALSE)
		{
			func_800269C0_275C0(nSYAudioVoicePublicCheer);

			sMNPlayers1PGameStartProceedWait = 30;
			sMNPlayers1PGameIsStart = TRUE;

			mnPlayers1PGamePauseSlotProcesses();
		}
		else func_800269C0_275C0(nSYAudioFGMMenuDenied);
	}
}

// 0x80138118
s32 mnPlayers1PGameGetNextTimerValue(s32 arg0)
{
	return (arg0 == 5) ? 0x64 : 5;
}

// 0x80138134
s32 mnPlayers1PGameGetPrevTimerValue(s32 arg0)
{
	return (arg0 == 5) ? 0x64 : 5;
}

// 0x80138150
void mnPlayers1PGameInitPlayer(s32 player)
{
	sMNPlayers1PGameSlot.flash = NULL;
	sMNPlayers1PGameSlot.p_sfx = NULL;
	sMNPlayers1PGameSlot.sfx_id = 0;
	sMNPlayers1PGameSlot.player = NULL;
	sMNPlayers1PGameSlot.fkind = gSCManagerSceneData.fkind;
	sMNPlayers1PGameSlot.costume = gSCManagerSceneData.costume;

	if (sMNPlayers1PGameSlot.fkind == nFTKindNull)
	{
		sMNPlayers1PGameSlot.holder_player = player;
		sMNPlayers1PGameSlot.held_player = player;
		sMNPlayers1PGameSlot.is_fighter_selected = FALSE;
		sMNPlayers1PGameSlot.is_selected = FALSE;
		sMNPlayers1PGameSlot.is_recalling = FALSE;
		sMNPlayers1PGameSlot.is_cursor_adjusting = FALSE;
	}
	else
	{
		sMNPlayers1PGameSlot.holder_player = 4;
		sMNPlayers1PGameSlot.held_player = -1;
		sMNPlayers1PGameSlot.is_fighter_selected = TRUE;
		sMNPlayers1PGameSlot.is_selected = TRUE;
		sMNPlayers1PGameSlot.is_recalling = FALSE;
		sMNPlayers1PGameSlot.is_cursor_adjusting = FALSE;
	}
}

// 0x801381D0 - Unused?
void func_ovl27_801381D0() {}

// 0x801381D8
void mnPlayers1PGameLoadMatchInfo()
{
	sMNPlayers1PGameTotalTimeTics = 0;
	sMNPlayers1PGameReturnTic = sMNPlayers1PGameTotalTimeTics + I_MIN_TO_TICS(5);
	sMNPlayers1PGameIsStart = FALSE;
	sMNPlayers1PGameTimeSetting = gSCManagerSceneData.spgame_time_limit;
	sMNPlayers1PGameManPlayer = gSCManagerSceneData.player;
	sMNPlayers1PGameLevelValue = gSCManagerBackupData.spgame_difficulty;
	sMNPlayers1PGameStockValue = gSCManagerBackupData.spgame_stock_count;
	sMNPlayers1PGameFighterKind = gSCManagerSceneData.fkind;
	sMNPlayers1PGameCostume = gSCManagerSceneData.costume;
	sMNPlayers1PGameHiScoreGObj = NULL;
	sMNPlayers1PGameBonusesGObj = NULL;
	sMNPlayers1PGameLevelGObj = NULL;
	sMNPlayers1PGameStockGObj = NULL;
	sMNPlayers1PGameIsTeamBattle = gSCManager1PGameBattleState.is_team_battle;
	sMNPlayers1PGameRule = gSCManager1PGameBattleState.game_rules;

	mnPlayers1PGameInitPlayer(sMNPlayers1PGameManPlayer);

	sMNPlayers1PGameSlot.recall_end_tic = 0;
	sMNPlayers1PGameFighterMask = gSCManagerBackupData.fighter_mask;
}

// 0x801382C8
void mnPlayers1PGameInitSlot(s32 player)
{
	mnPlayers1PGameMakeCursor(player);
	mnPlayers1PGameMakePuck(player);
	mnPlayers1PGameMakeGate(player);

	if ((sMNPlayers1PGameSlot.is_selected) && (sMNPlayers1PGameSlot.fkind != nFTKindNull))
	{
		mnPlayers1PGameMakeFighter(sMNPlayers1PGameSlot.player, player, sMNPlayers1PGameSlot.fkind, sMNPlayers1PGameSlot.costume);
		mnPlayers1PGameDrawHighscoreAndBonuses();
	}
}

// 0x80138334
void mnPlayers1PGameFuncStart(void)
{
	s32 unused1[2];
	LBRelocSetup rl_setup;
	s32 unused2;
	s32 i, j;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = sMNPlayers1PGameStatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(sMNPlayers1PGameStatusBuffer);
	rl_setup.force_status_buffer = sMNPlayers1PGameForceStatusBuffer;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(sMNPlayers1PGameForceStatusBuffer);

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern
	(
		dMNPlayers1PGameFileIDs,
		ARRAY_COUNT(dMNPlayers1PGameFileIDs),
		sMNPlayers1PGameFiles,
		syTaskmanMalloc
		(
			lbRelocGetAllocSize
			(
				dMNPlayers1PGameFileIDs,
				ARRAY_COUNT(dMNPlayers1PGameFileIDs)
			),
			0x10
		)
	);

	gcMakeGObjSPAfter(0x400U, &mnPlayers1PGameProcRun, 0xFU, 0x80000000U);
	gcMakeDefaultCameraGObj(0x10, 0x80000000U, 0x64, 1, 0);
	efParticleInitAll();
	efManagerInitEffects();
	ftManagerAllocFighter(FTDATA_FLAG_SUBMOTION, 1);

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		ftManagerSetupFilesAllKind(i);
	}
	sMNPlayers1PGameFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);

	mnPlayers1PGameLoadMatchInfo();
	mnPlayers1PGameMakePortraitCamera();
	mnPlayers1PGameMakeCursorCamera();
	mnPlayers1PGameMakePuckCamera();
	mnPlayers1PGameMakePlayerKindCamera();
	mnPlayers1PGameMakeFighterCamera();
	mnPlayers1PGameMakePortraitWallpaperCamera();
	mnPlayers1PGameMakePortraitFlashCamera();
	mnPlayers1PGameMakeWallpaperCamera();
	mnPlayers1PGameCreateTitleOptionsAndBackViewport();
	mnPlayers1PGameMakeReadyCamera();
	mnPlayers1PGameMakeWallpaper();
	mnPlayers1PGameMakePortraitAll();
	mnPlayers1PGameInitSlot(sMNPlayers1PGameManPlayer);
	mnPlayers1PGameDrawPickerOptionsTitleAndBack();
	mnPlayers1PGameDrawTotalHighscoreAndBonuses();
	mnPlayers1PGameCreateLevelAndArrows();
	mnPlayers1PGameCreateStockAndArrows();
	mnPlayers1PGameMakePuckAdjust();
	mnPlayers1PGameMakeSpotlight();
	mnPlayers1PGameMakeReady();
	scSubsysFighterSetLightParams(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

	if (gSCManagerSceneData.scene_prev != nSCKindMaps)
	{
		syAudioPlaySong(0, nSYAudioBGMBattleSelect);
	}
	func_800269C0_275C0(nSYAudioVoiceAnnounceSelectPlayer);
}

// 0x80138C90
SYVideoSetup dMN1PPlayersVideoSetup = SYVIDEO_SETUP_DEFAULT();

// 0x80138CAC
SYTaskmanSetup dMN1PPlayersTaskmanSetup =
{
    // Task Manager Buffer Setup
    {
        0,                          // ???
        gcRunAll,              		// Update function
        gcDrawAll,          		// Frame draw function
        &ovl27_BSS_END,             // Allocatable memory pool start
        0,                          // Allocatable memory pool size
        1,                          // ???
        2,                          // Number of contexts?
        sizeof(Gfx) * 2375,         // Display List Buffer 0 Size
        sizeof(Gfx) * 64,          	// Display List Buffer 1 Size
        0,                          // Display List Buffer 2 Size
        0,                          // Display List Buffer 3 Size
        0x8000,                     // Graphics Heap Size
        2,                          // ???
        0x8000,                     // RDP Output Buffer Size
        mnPlayers1PGameFuncLights,  // Pre-render function
        syControllerFuncRead,       // Controller I/O function
    },

    0,                              // Number of GObjThreads
    sizeof(u64) * 32,              	// Thread stack size
    0,                              // Number of thread stacks
    0,                              // ???
    0,                              // Number of GObjProcesses
    0,                              // Number of GObjs
    sizeof(GObj),                   // GObj size
    0,                              // Number of XObjs
    dLBCommonFuncMatrixList,        // Matrix function list
    NULL,                           // DObjVec eject function
    0,                              // Number of AObjs
    0,                              // Number of MObjs
    0,                              // Number of DObjs
    sizeof(DObj),                   // DObj size
    0,                              // Number of SObjs
    sizeof(SObj),                   // SObj size
    0,                              // Number of CObjs
    sizeof(CObj),                 	// CObj size
    
    mnPlayers1PGameFuncStart        // Task start function
};

// 0x80138558
void mnPlayers1PGameGamePlayersStartScene(void)
{
	dMN1PPlayersVideoSetup.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&dMN1PPlayersVideoSetup);

	dMN1PPlayersTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl27_BSS_END);
	syTaskmanRun(&dMN1PPlayersTaskmanSetup);
}
