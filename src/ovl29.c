#include <ft/fighter.h>
#include <if/interface.h>
#include <mn/menu.h>
#include <sc/scene.h>
#include <sys/video.h>

#include "character_select.h"

// Externs

extern f32 dSCSubsysDemoFighterScales[12]; // dSCSubsysDemoFighterScales

// Offsets
extern intptr_t FILE_011_START_IMAGE_OFFSET; // Press Start's "Start" texture
extern intptr_t FILE_011_PRESS_IMAGE_OFFSET; // Press Start's "Press" texture
extern intptr_t FILE_011_READY_TO_FIGHT_IMAGE_OFFSET; // Ready to Fight banner text
extern intptr_t FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET; // Ready to Fight banner bg
extern intptr_t FILE_011_BACK_IMAGE_OFFSET; // file 0x011 image offset for
extern intptr_t FILE_012_BREAK_THE_TARGETS_TITLE_IMAGE_OFFSET; // file 0x012 image offset for Break The Targets title
extern intptr_t FILE_012_BOARD_THE_PLATFORMS_TITLE_IMAGE_OFFSET; // file 0x012 image offset for Board the Platforms title
extern intptr_t FILE_013_XBOX_IMAGE_OFFSET; // file 0x013 image offset
extern intptr_t FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET; // file 0x013 image offset for portrait question mark image
extern intptr_t FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET; // file 0x013 image offset for portrait bg (fire) image
extern intptr_t lMNSelectCommonWallpaperSprite; // file 0x015 image offset for background tile
extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_1; // AObj? for white circle
extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_2; // DObjDesc for white circle
extern intptr_t FILE_017_BEST_TIME_LABEL_IMAGE_OFFSET;
extern intptr_t FILE_017_TOTAL_BEST_TIME_LABEL_IMAGE_OFFSET;
extern intptr_t FILE_017_TARGETS_LABEL_IMAGE_OFFSET;
extern intptr_t FILE_017_PLATFORMS_LABEL_IMAGE_OFFSET;
extern intptr_t FILE_017_APOSTROPHE_IMAGE_OFFSET;
extern intptr_t FILE_017_DOUBLE_QUOTE_IMAGE_OFFSET;
extern intptr_t FILE_017_PANEL_IMAGE_OFFSET;
extern intptr_t FILE_013_WHITE_SQUARE;
extern intptr_t FILE_011_CURSOR_POINTER_IMAGE_OFFSET;

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

// Forward declarations
void mn1PBonusPlayersSetSceneData();
sb32 mn1PBonusPlayersCheckBonusCompleteAll();
void mn1PBonusPlayersMakePortraitFlash(s32 player);
void mn1PBonusPlayersUpdateCursorPlacementDLLinks(s32 player);
s32 mn1PBonusPlayersGetForcePuckFighterKind();
void mn1PBonusPlayersAnnounceFighter(s32 player, s32 panel_id);
void mn1PBonusPlayersUpdateCursorGrabDLLinks(s32 player, s32 puck_id);
void mn1PBonusPlayersUpdateCursor(GObj *gobj, s32 player, s32 cursor_state);

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80136F50
u32 dMN1PBonusPlayersFileIDs[/* */] =
{
	&lMNPlayersCommonFileID,
	&lFTEmblemSpritesFileID,
	&lMNSelectCommonFileID,
	&lMNPlayersGameModesFileID,
	&lMNPlayersPortraitsFileID,
	0x17,
	0x18,
	&lFTStocksZakoFileID,
	&lMNCommonFontsFileID,
	&lIFCommonDigitsFileID,
	0x16
};

// 0x80136F7C
Lights1 dMN1PBonusPlayersLights11 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);

// 0x80136F94
Lights1 dMN1PBonusPlayersLights12 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0xEC, 0x00);

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80137640
s32 sMN1PBonusPlayersPad0x80137640[2];

// 0x80137648
MNPlayersSlotBonus sMN1PBonusPlayersSlot;

// 0x801376D0
s32 sMN1PBonusPlayersPad0x801376D0;

// 0x801376D4 - set but never used
s32 sMN1PBonusPlayersUnknown0x801376D4;

// 0x801376D8
s32 sMN1PBonusPlayersDevicesConnected[GMCOMMON_PLAYERS_MAX];

// 0x801376E8 - timer after selecting character before auto-starting
s32 sMN1PBonusPlayersStartWait;

// 0x801376EC
sb32 sMN1PBonusPlayersIsSelected;

// 0x801376F0
sb32 sMN1PBonusPlayersIsTeamBattle;

// 0x801376F4
s32 sMN1PBonusPlayersGameRules;

// 0x801376F8
s32 sMN1PBonusPlayersManPlayer;

// 0x801376FC
GObj *sMN1PBonusPlayersHiScoreGObj;

// 0x80137700
s32 sMN1PBonusPlayersPad0x80137700[4];

// 0x80137710
void *sMN1PBonusPlayersFigatreeHeap;

// 0x80137714 0 = BTT; 1 = BTP
s32 sMN1PBonusPlayersBonusKind;

// 0x80137718 - title and back button
GObj *sMN1PBonusPlayersTitleGObj;

// 0x8013771C - total time highscore
GObj *sMN1PBonusPlayersTotalTimeGObj;

// 0x80137720 - flag indicating which unlockable fighters are available
u16 sMN1PBonusPlayersFighterMask;

// 0x80137724 - frames elapsed
s32 sMN1PBonusPlayersTotalTimeTics;

// 0x80137728 - frames to wait until exiting
s32 sMN1PBonusPlayersReturnTic;

// 0x8013772C - looping timer that helps determine blink rate of Press Start (and Ready to Fight?)
s32 sMN1PBonusPlayersReadyBlinkWait;

// 0x80137730
s32 D_ovl29_80137730[180];

// 0x80137A00
LBFileNode sMN1PBonusPlayersForceStatusBuffer[7];

// 0x80137A38
LBFileNode sMN1PBonusPlayersStatusBuffer[120];

// 0x80137DF8
void *sMN1PBonusPlayersFiles[ARRAY_COUNT(dMN1PBonusPlayersFileIDs)];

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mn1PBonusPlayersFuncLights(Gfx **dls)
{
	gSPSetGeometryMode(dls[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
s32 mn1PBonusPlayersGetPowerOf(s32 base, s32 exp)
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
void mn1PBonusPlayersSetTextureColors(SObj *sobj, u32 *colors)
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
s32 mn1PBonusPlayersGetNumberDigitCount(s32 num, s32 digit_count_max)
{
    s32 digit_count_curr = digit_count_max;

    while (digit_count_curr > 0)
    {
        s32 digit = (mn1PContinueGetPowerOf(10, digit_count_curr - 1) != 0) ? num / mn1PContinueGetPowerOf(10, digit_count_curr - 1) : 0;

        if (digit != 0)
        {
            return digit_count_curr;
        }
        else digit_count_curr--;
    }
    return 0;
}

// 0x80131CEC
void mn1PBonusPlayersMakeNumber(GObj *gobj, s32 number, f32 x, f32 y, u32 *colors, s32 digit_count_max, sb32 is_fixed_digit_count)
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
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[9], offsets[number % 10]));
	mn1PBonusPlayersSetTextureColors(sobj, colors);
	left_x -= 8;
	sobj->pos.x = left_x;
	sobj->pos.y = y;

	for (i = 1; i < ((is_fixed_digit_count != FALSE) ? digit_count_max : mn1PBonusPlayersGetNumberDigitCount(number, digit_count_max)); i++)
	{
		digit = (mn1PBonusPlayersGetPowerOf(10, i) != 0) ? number / mn1PBonusPlayersGetPowerOf(10, i) : 0;

		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[9], offsets[digit % 10]));
		mn1PBonusPlayersSetTextureColors(sobj, colors);
		left_x -= 8;
		sobj->pos.x = left_x;
		sobj->pos.y = y;
	}
}

// 0x80136FD8
intptr_t dMN1PBonusPlayersFontOffsets[/* */] =
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

// 0x8013704C
f32 dMN1PBonusPlayersFontWidths[/* */] =
{
	5.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 3.0F, 4.0F, 4.0F, 4.0F, 5.0F, 5.0F, 4.0F,
	4.0F, 5.0F, 4.0F, 4.0F, 5.0F, 4.0F, 5.0F, 5.0F, 5.0F, 5.0F, 4.0F, 2.0F, 7.0F, 3.0F
};

// 0x80131F5C - Unused?
void func_ovl29_80131F5C(void)
{
	return;
}

// 0x80131F64 - Unused?
void func_ovl29_80131F64(void)
{
	return;
}

// 0x80131F6C - Unused?
void func_ovl29_80131F6C(void)
{
	return;
}

// 0x80131F74
void mn1PBonusPlayersSelectFighterPuck(s32 player, s32 select_button)
{
	s32 held_player = sMN1PBonusPlayersSlot.held_player;
	s32 costume = ftParamGetCostumeCommonID(sMN1PBonusPlayersSlot.fkind, select_button);

	ftParamInitAllParts(sMN1PBonusPlayersSlot.player, costume, 0);

	sMN1PBonusPlayersSlot.costume = costume;
	sMN1PBonusPlayersSlot.is_selected = TRUE;
	sMN1PBonusPlayersSlot.holder_player = GMCOMMON_PLAYERS_MAX;
	sMN1PBonusPlayersSlot.cursor_state = mnCursorStateNotHoldingPuck;

	mn1PBonusPlayersUpdateCursor(sMN1PBonusPlayersSlot.cursor, player, sMN1PBonusPlayersSlot.cursor_state);

	sMN1PBonusPlayersSlot.held_player = -1;
	sMN1PBonusPlayersSlot.is_fighter_selected = TRUE;

	mn1PBonusPlayersUpdateCursorPlacementDLLinks(held_player);
	mn1PBonusPlayersAnnounceFighter(player, held_player);
	mn1PBonusPlayersMakePortraitFlash(held_player);

	sMN1PBonusPlayersStartWait = 140;
	sMN1PBonusPlayersIsSelected = TRUE;
}

// 0x80132030
f32 mn1PBonusPlayersGetNextPortraitX(s32 portrait, f32 current_pos_x)
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

// 0x80132144 - bruh
sb32 mn1PBonusPlayersCheckFighterCrossed(s32 fkind)
{
	return FALSE;
}

// 0x80132150
void mn1PBonusPlayersPortraitProcUpdate(GObj *gobj)
{
	f32 new_pos_x = mn1PBonusPlayersGetNextPortraitX(gobj->user_data.s, SObjGetStruct(gobj)->pos.x);

	if (new_pos_x != -1.0F)
	{
		SObjGetStruct(gobj)->pos.x = new_pos_x;

		if (SObjGetStruct(gobj)->next != NULL)
		{
			SObjGetStruct(gobj)->next->pos.x = SObjGetStruct(gobj)->pos.x + 4.0F;
		}
	}
}

// 0x801321CC
void mn1PBonusPlayersSetPortraitWallpaperPosition(SObj *sobj, s32 portrait)
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

// 0x80132228
void mn1PBonusPlayersPortraitAddCross(GObj *gobj, s32 portrait)
{
	SObj *sobj = SObjGetStruct(gobj);
	f32 x = sobj->pos.x;
	f32 y = sobj->pos.y;

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[4], &FILE_013_XBOX_IMAGE_OFFSET));

	sobj->pos.x = x + 4.0F;
	sobj->pos.y = y + 12.0F;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0x00;
	sobj->sprite.blue = 0x00;
}

// 0x801322BC
sb32 mn1PBonusPlayersCheckFighterLocked(s32 fkind)
{
	switch (fkind)
	{
	case nFTKindNess:
		return (sMN1PBonusPlayersFighterMask & (1 << nFTKindNess)) ? FALSE : TRUE;

	case nFTKindPurin:
		return (sMN1PBonusPlayersFighterMask & (1 << nFTKindPurin)) ? FALSE : TRUE;

	case nFTKindCaptain:
		return (sMN1PBonusPlayersFighterMask & (1 << nFTKindCaptain)) ? FALSE : TRUE;

	case nFTKindLuigi:
		return (sMN1PBonusPlayersFighterMask & (1 << nFTKindLuigi)) ? FALSE : TRUE;

	default:
		return FALSE;
	}
}

// 0x80137180
s32 dMN1PBonusPlayersUnkown0x80137180[/* */] =
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

// 0x80132388 - Unused?
void func_ovl29_80132388(void)
{
	return;
}

// 0x80132390
s32 mn1PBonusPlayersGetFighterKind(s32 portrait)
{
	s32 fkinds[/* */] =
	{
		nFTKindLuigi, nFTKindMario, nFTKindDonkey, nFTKindLink, nFTKindSamus,   nFTKindCaptain,
		nFTKindNess,  nFTKindYoshi, nFTKindKirby,  nFTKindFox,  nFTKindPikachu, nFTKindPurin
	};

	return fkinds[portrait];
}

// 0x801323E0
s32 mn1PBonusPlayersGetPortrait(s32 fkind)
{
	s32 portraits[/* */] =
	{
		1, 9, 2, 4, 0, 3,
		7, 5, 8, 10, 11, 6
	};

	return portraits[fkind];
}

// 0x80132430
void mn1PBonusPlayersPortraitProcDisplay(GObj *gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x30, 0x30, 0x30, 0xFF);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, NOISE, TEXEL0, PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0, NOISE, TEXEL0, PRIMITIVE, TEXEL0,  0, 0, 0, TEXEL0);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	lbCommonDrawSObjNoAttr(gobj);
}

// 0x801324F0
void mn1PBonusPlayersMakeShadowPortrait(s32 portrait)
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

	// portrait bg (fire)
	gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 27, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mn1PBonusPlayersPortraitProcUpdate, nGCProcessKindFunc, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[4], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
	sobj->pos.x = (((portrait >= 6) ? portrait - 6 : portrait) * 45) + 25;
	sobj->pos.y = (((portrait >= 6) ? 1 : 0) * 43) + 36;

	mn1PBonusPlayersSetPortraitWallpaperPosition(sobj, portrait);
	gobj->user_data.s = portrait;

	// portrait
	gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, mn1PBonusPlayersPortraitProcDisplay, 27, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mn1PBonusPlayersPortraitProcUpdate, nGCProcessKindFunc, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[4], offsets[mn1PBonusPlayersGetFighterKind(portrait)]));
	sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
	sobj->sprite.attr = sobj->sprite.attr| SP_TRANSPARENT;

	gobj->user_data.s = portrait;
	mn1PBonusPlayersSetPortraitWallpaperPosition(sobj, portrait);

	// question mark
	gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 27, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mn1PBonusPlayersPortraitProcUpdate, nGCProcessKindFunc, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[4], &FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->envcolor.r = 0x5B;
	sobj->envcolor.g = 0x41;
	sobj->envcolor.b = 0x33;
	sobj->sprite.red = 0xC4;
	sobj->sprite.green = 0xB9;
	sobj->sprite.blue = 0xA9;

	gobj->user_data.s = portrait;
	mn1PBonusPlayersSetPortraitWallpaperPosition(sobj, portrait);
}

// 0x80132798
void mn1PBonusPlayersMakePortrait(s32 portrait)
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

	// if locked, render locked portrait instead
	if (mn1PBonusPlayersCheckFighterLocked(mn1PBonusPlayersGetFighterKind(portrait)) != FALSE)
	{
		mn1PBonusPlayersMakeShadowPortrait(portrait);
	}
	else
	{
		// portrait bg (fire)
		wallpaper_gobj = gcMakeGObjSPAfter(0, NULL, 25, GOBJ_PRIORITY_DEFAULT);
		gcAddGObjDisplay(wallpaper_gobj, lbCommonDrawSObjAttr, 32, GOBJ_PRIORITY_DEFAULT, ~0);
		wallpaper_gobj->user_data.p = portrait;
		gcAddGObjProcess(wallpaper_gobj, mn1PBonusPlayersPortraitProcUpdate, nGCProcessKindFunc, 1);

		sobj = lbCommonMakeSObjForGObj(wallpaper_gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[4], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
		sobj->pos.x = (((portrait >= 6) ? portrait - 6 : portrait) * 45) + 25;
		sobj->pos.y = (((portrait >= 6) ? 1 : 0) * 43) + 36;

		mn1PBonusPlayersSetPortraitWallpaperPosition(sobj, portrait);

		// portrait
		portrait_gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
		gcAddGObjDisplay(portrait_gobj, lbCommonDrawSObjAttr, 27, GOBJ_PRIORITY_DEFAULT, ~0);
		gcAddGObjProcess(portrait_gobj, mn1PBonusPlayersPortraitProcUpdate, nGCProcessKindFunc, 1);

		sobj = lbCommonMakeSObjForGObj(portrait_gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[4], offsets[mn1PBonusPlayersGetFighterKind(portrait)]));
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;
		sobj->pos.x = (((portrait >= 6) ? portrait - 6 : portrait) * 45) + 25;
		sobj->pos.y = (((portrait >= 6) ? 1 : 0) * 43) + 36;
		portrait_gobj->user_data.s = portrait;

		// this conditionally draws a big red box with an X in it, but this check always fails
		if (mn1PBonusPlayersCheckFighterCrossed(mn1PBonusPlayersGetFighterKind(portrait)) != FALSE)
		{
			mn1PBonusPlayersPortraitAddCross(portrait_gobj, portrait);
		}
		mn1PBonusPlayersSetPortraitWallpaperPosition(sobj, portrait);
	}
}

// 0x80132A58
void mn1PBonusPlayersMakePortraitAll(void)
{
	s32 portrait;

	for (portrait = nFTKindPlayableStart; portrait <= nFTKindPlayableEnd; portrait++)
	{
		mn1PBonusPlayersMakePortrait(portrait);
	}
}

// 0x80132A98
void mn1PBonusPlayersMakeNameAndEmblem(GObj *gobj, s32 player, s32 fkind)
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

		// logo
		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[1], emblem_offsets[fkind]));
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;
		sobj->sprite.red = 0x00;
		sobj->sprite.green = 0x00;
		sobj->sprite.blue = 0x00;
		sobj->pos.x = 68.0F;
		sobj->pos.y = 144.0F;

		// name
		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[0], name_offsets[fkind]));
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;
		sobj->pos.x = 66.0F;
		sobj->pos.y = 202.0F;
	}
}

// 0x80132C14
void mn1PBonusPlayersMakePortraitCamera(void)
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

// 0x80132CB4
void mn1PBonusPlayersMakePortraitWallpaperCamera(void)
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

// 0x80132D54
void mn1PBonusPlayersMakePortraitFlashCamera(void)
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

// 0x80132DF4
void mn1PBonusPlayersMakeGateCamera(void)
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

// 0x80132E94
void mn1PBonusPlayersSetGateLUT(GObj *gobj, s32 player)
{
	SObj *sobj;

	intptr_t offsets[/* */] =
	{
		&lMNPlayersCommonGate1PLUT, &lMNPlayersCommonGate2PLUT,
		&lMNPlayersCommonGate3PLUT, &lMNPlayersCommonGate4PLUT
	};

	sobj = SObjGetStruct(gobj);
	sobj->sprite.LUT = lbRelocGetFileData(int*, sMN1PBonusPlayersFiles[0], offsets[player]);
}

// 0x80132EEC
void mn1PBonusPlayersMakeGate(s32 player)
{
	GObj *gobj;
	SObj *sobj;

	intptr_t offsets[/* */] =
	{
		&lMNPlayersCommonGate1PSprite, &lMNPlayersCommonGate2PSprite,
		&lMNPlayersCommonGate3PSprite, &lMNPlayersCommonGate4PSprite
	};
	f32 pos_x[/* */] =
	{
		8.0F, 5.0F, 5.0F, 5.0F
	};

	// create panel
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
			sMN1PBonusPlayersFiles[5],
			&FILE_017_PANEL_IMAGE_OFFSET
		),
		nGCProcessKindFunc,
		NULL,
		1
	);
	SObjGetStruct(gobj)->pos.x = 58.0F;
	SObjGetStruct(gobj)->pos.y = 127.0F;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;

	sMN1PBonusPlayersSlot.panel = gobj;

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[0], offsets[player]));
	sobj->pos.x = pos_x[player] + 58.0F;
	sobj->pos.y = 132.0F;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0x00;
	sobj->sprite.green = 0x00;
	sobj->sprite.blue = 0x00;

	mn1PBonusPlayersSetGateLUT(gobj, player);

	// name/logo
	gobj = gcMakeGObjSPAfter(0, NULL, 22, GOBJ_PRIORITY_DEFAULT);
	sMN1PBonusPlayersSlot.name_logo_gobj = gobj;
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 28, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x80137354
intptr_t dMN1PBonusPlayersDigitOffsets[/* */] =
{
	&lMNPlayersCommonDigit0Sprite,
	&lMNPlayersCommonDigit1Sprite,
	&lMNPlayersCommonDigit2Sprite,
	&lMNPlayersCommonDigit3Sprite,
	&lMNPlayersCommonDigit4Sprite,
	&lMNPlayersCommonDigit5Sprite,
	&lMNPlayersCommonDigit6Sprite,
	&lMNPlayersCommonDigit7Sprite,
	&lMNPlayersCommonDigit8Sprite,
	&lMNPlayersCommonDigit9Sprite
};

// 0x80138A5C
f32 dMN1PBonusPlayersDigitWidths[/* */] =
{
	8.0F, 6.0F, 9.0F, 8.0F, 8.0F,
	9.0F, 8.0F, 8.0F, 8.0F, 9.0F
};

// 0x801330C4 - Unused?
void func_ovl29_801330C4(void)
{
	return;
}

// 0x801330CC
void mn1PBonusPlayersMakeWallpaper(void)
{
	GObj *gobj;
	SObj *sobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 26, GOBJ_PRIORITY_DEFAULT, ~0);
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[2], &lMNSelectCommonWallpaperSprite));
	sobj->cms = G_TX_WRAP;
	sobj->cmt = G_TX_WRAP;
	sobj->masks = 6;
	sobj->maskt = 5;
	sobj->lrs = 300;
	sobj->lrt = 220;
	sobj->pos.x = 10.0F;
	sobj->pos.y = 10.0F;
}

// 0x80133170
void mn1PBonusPlayersMakeWallpaperCamera(void)
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
			80,
			COBJ_MASK_DLLINK(26),
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

// 0x80133210 - Unused?
void func_ovl29_80133210(void)
{
	return;
}

// 0x80133218
void mn1PBonusPlayersMakeLabels(void)
{
	GObj *gobj;
	SObj *sobj;

	sMN1PBonusPlayersTitleGObj = gobj = gcMakeGObjSPAfter(0, NULL, 23, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 34, GOBJ_PRIORITY_DEFAULT, ~0);

	if (sMN1PBonusPlayersBonusKind == mn1PBonusPlayersTypeBTT)
	{
		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[3], &FILE_012_BREAK_THE_TARGETS_TITLE_IMAGE_OFFSET));
	}
	else sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[3], &FILE_012_BOARD_THE_PLATFORMS_TITLE_IMAGE_OFFSET));
	
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->pos.x = 27.0F;
	sobj->pos.y = 24.0F;
	sobj->sprite.red = 0xE3;
	sobj->sprite.green = 0xAC;
	sobj->sprite.blue = 0x04;

	if (sMN1PBonusPlayersBonusKind == mn1PBonusPlayersTypeBTT)
	{
		func_800269C0_275C0(nSYAudioVoiceAnnounceBreakTheTargets);
	}
	else func_800269C0_275C0(nSYAudioVoiceAnnounceBoardThePlatforms);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[0], &FILE_011_BACK_IMAGE_OFFSET));
	sobj->pos.x = 244.0F;
	sobj->pos.y = 23.0F;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
}

// 0x80133370
void mn1PBonusPlayersMakeLabelsCamera(void)
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
			70,
			COBJ_MASK_DLLINK(34),
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

// 0x80133410
u32 mn1PBonusPlayersGetBestTime(s32 fkind)
{
	if (sMN1PBonusPlayersBonusKind == 0)
	{
		u32 time = gSCManagerBackupData.spgame_records[fkind].bonus1_time;

		if (time > I_HRS_TO_TICS(1) - 1)
		{
			return I_HRS_TO_TICS(1) - 1;
		}
		else return time;
	}
	else
	{
		u32 time = gSCManagerBackupData.spgame_records[fkind].bonus2_time;

		if (time > I_HRS_TO_TICS(1) - 1)
		{
			return I_HRS_TO_TICS(1) - 1;
		}
		else return time;
	}
}

// 0x80133488
s32 mn1PBonusPlayersGetMins(s32 tics)
{
	return tics / TIME_MIN;
}

// 0x8013349C
s32 mn1PBonusPlayersGetSec(s32 tics)
{
	return (tics % TIME_MIN) / TIME_SEC;
}

// 0x801334C0
s32 mn1PBonusPlayersGetCSec(s32 tics)
{
	s32 seconds = tics % TIME_MIN;
	s32 tenths = (seconds % TIME_SEC) / 6 * 10;
	s32 hundredths = (seconds % 6) / 0.554F;

	return tenths + hundredths;
}

// 0x80133570
s32 mn1PBonusPlayersGetTotalMins(void)
{
	s32 i;
	s32 sum = 0;

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		if (mn1PBonusPlayersCheckFighterLocked(i) == FALSE)
		{
			sum += mn1PBonusPlayersGetMins(mn1PBonusPlayersGetBestTime(i));
		}
	}
	return sum;
}

// 0x801335DC
s32 mn1PBonusPlayersGetTotalSec(void)
{
	s32 i;
	s32 sum = 0;

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		if (mn1PBonusPlayersCheckFighterLocked(i) == FALSE)
		{
			sum += mn1PBonusPlayersGetSec(mn1PBonusPlayersGetBestTime(i));
		}
	}
	return sum;
}

// 0x80133648
s32 mn1PBonusPlayersGetTotalCSec(void)
{
	s32 i;
	s32 sum = 0;

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		if (mn1PBonusPlayersCheckFighterLocked(i) == FALSE)
		{
			sum += mn1PBonusPlayersGetCSec(mn1PBonusPlayersGetBestTime(i));
		}
	}
	return sum;
}

// 0x801336B4
void mn1PBonusPlayersMakeBestTime(void)
{
	GObj *gobj;
	SObj *sobj;
	s32 unused[2];
	u32 colors1[/* */] = { 0xC5, 0xB6, 0xA7 };
	u32 colors2[/* */] = { 0x00, 0x00, 0x00, 0x7E, 0x7C, 0x77 };
	u32 best_time;
	s32 fkind = mn1PBonusPlayersGetForcePuckFighterKind();

	if (sMN1PBonusPlayersHiScoreGObj != NULL)
	{
		gcEjectGObj(sMN1PBonusPlayersHiScoreGObj);
		sMN1PBonusPlayersHiScoreGObj = NULL;
	}
	if (fkind != nFTKindNull)
	{
		best_time = mn1PBonusPlayersGetBestTime(fkind);

		sMN1PBonusPlayersHiScoreGObj = gobj = gcMakeGObjSPAfter(0, NULL, 23, GOBJ_PRIORITY_DEFAULT);
		gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 26, GOBJ_PRIORITY_DEFAULT, ~0);

		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[5], &FILE_017_BEST_TIME_LABEL_IMAGE_OFFSET));
		sobj->pos.x = 177.0F;
		sobj->pos.y = 198.0F;
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;
		sobj->sprite.red = 0x7E;
		sobj->sprite.green = 0x7C;
		sobj->sprite.blue = 0x77;

		mn1PBonusPlayersMakeNumber(gobj, mn1PBonusPlayersGetMins(best_time), 237.0F, 195.0F, colors2, 2, TRUE);

		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[5], &FILE_017_APOSTROPHE_IMAGE_OFFSET));
		sobj->pos.x = 239.0F;
		sobj->pos.y = 195.0F;
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;
		sobj->envcolor.r = 0x00;
		sobj->envcolor.g = 0x00;
		sobj->envcolor.b = 0x00;
		sobj->sprite.red = 0x7E;
		sobj->sprite.green = 0x7C;
		sobj->sprite.blue = 0x77;

		mn1PBonusPlayersMakeNumber(gobj, mn1PBonusPlayersGetSec(best_time), 259.0F, 195.0F, colors2, 2, TRUE);

		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[5], &FILE_017_DOUBLE_QUOTE_IMAGE_OFFSET));
		sobj->pos.x = 261.0F;
		sobj->pos.y = 195.0F;
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;
		sobj->envcolor.r = 0x00;
		sobj->envcolor.g = 0x00;
		sobj->envcolor.b = 0x00;
		sobj->sprite.red = 0x7E;
		sobj->sprite.green = 0x7C;
		sobj->sprite.blue = 0x77;

		mn1PBonusPlayersMakeNumber(gobj, mn1PBonusPlayersGetCSec(best_time), 283.0F, 195.0F, colors2, 2, TRUE);
	}
}

// 0x80133990
u8 mn1PBonusPlayersGetBestTaskCount(s32 fkind)
{
	if (sMN1PBonusPlayersBonusKind == 0)
	{
		return gSCManagerBackupData.spgame_records[fkind].bonus1_task_count;
	}
	else return gSCManagerBackupData.spgame_records[fkind].bonus2_task_count;
}

// 0x801339C8
void mn1PBonusPlayersMakeBestTaskCount(void)
{
	GObj *gobj;
	SObj *sobj;
	s32 unused[2];
	u32 colors1[/* */] = { 0xC5, 0xB6, 0xA7 };
	u32 colors2[/* */] = { 0x00, 0x00, 0x00, 0x7E, 0x7C, 0x77 };
	s32 fkind = mn1PBonusPlayersGetForcePuckFighterKind();

	if (sMN1PBonusPlayersHiScoreGObj != NULL)
	{
		gcEjectGObj(sMN1PBonusPlayersHiScoreGObj);
		sMN1PBonusPlayersHiScoreGObj = NULL;
	}
	if (fkind != nFTKindNull)
	{
		sMN1PBonusPlayersHiScoreGObj = gobj = gcMakeGObjSPAfter(0, NULL, 23, GOBJ_PRIORITY_DEFAULT);
		gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 26, GOBJ_PRIORITY_DEFAULT, ~0);

		if (sMN1PBonusPlayersBonusKind == 0)
		{
			sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[5], &FILE_017_TARGETS_LABEL_IMAGE_OFFSET));
		}
		else sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[5], &FILE_017_PLATFORMS_LABEL_IMAGE_OFFSET));
		
		sobj->pos.x = 235.0F;
		sobj->pos.y = 195.0F;
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;
		sobj->sprite.red = 0x7E;
		sobj->sprite.green = 0x7C;
		sobj->sprite.blue = 0x77;

		mn1PBonusPlayersMakeNumber(gobj, mn1PBonusPlayersGetBestTaskCount(fkind), 225.0F, 194.0F, colors2, 2, TRUE);
	}
}

// 0x80133B7C
sb32 mn1PBonusPlayersCheckBonusComplete(s32 fkind)
{
	u8 count;

	if (sMN1PBonusPlayersBonusKind == 0)
	{
		count = gSCManagerBackupData.spgame_records[fkind].bonus1_task_count;
	}
	else count = gSCManagerBackupData.spgame_records[fkind].bonus2_task_count;

	if (count == SCBATTLE_BONUSGAME_TASK_MAX)
	{
		return TRUE;
	}
	else return FALSE;
}

// 0x80133BCC
void mn1PBonusPlayersMakeHiScore(void)
{
	if (mn1PBonusPlayersCheckBonusComplete(mn1PBonusPlayersGetForcePuckFighterKind()))
	{
		mn1PBonusPlayersMakeBestTime();
	}
	else mn1PBonusPlayersMakeBestTaskCount();
}

// 0x80133C14 - Unused?
void func_ovl29_80133C14(void)
{
	return;
}

// 0x80133C1C
void mn1PBonusPlayersMakeTotalTime(void)
{
	GObj *gobj;
	SObj *sobj;
	s32 unused[2];
	u32 colors1[/* */] = { 0xC5, 0xB6, 0xA7 };
	u32 colors2[/* */] = { 0x00, 0x00, 0x00, 0x7E, 0x7C, 0x77 };
	s32 centiseconds;
	s32 remainder;
	s32 seconds;

	sMN1PBonusPlayersTotalTimeGObj = gobj = gcMakeGObjSPAfter(0, NULL, 23, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 26, GOBJ_PRIORITY_DEFAULT, ~0);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[5], &FILE_017_TOTAL_BEST_TIME_LABEL_IMAGE_OFFSET));
	sobj->pos.x = 142.0F;
	sobj->pos.y = 209.0F;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0x7E;
	sobj->sprite.green = 0x7C;
	sobj->sprite.blue = 0x77;

	centiseconds = mn1PBonusPlayersGetTotalCSec();
	remainder = centiseconds / 100;
	mn1PBonusPlayersMakeNumber(gobj, centiseconds % 100, 283.0F, 206.0F, colors2, 2, TRUE);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[5], &FILE_017_DOUBLE_QUOTE_IMAGE_OFFSET));
	sobj->pos.x = 261.0F;
	sobj->pos.y = 206.0F;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->envcolor.r = 0x00;
	sobj->envcolor.g = 0x00;
	sobj->envcolor.b = 0x00;
	sobj->sprite.red = 0x7E;
	sobj->sprite.green = 0x7C;
	sobj->sprite.blue = 0x77;

	seconds = mn1PBonusPlayersGetTotalSec() + remainder;
	remainder = seconds / TIME_SEC;
	seconds %= TIME_SEC;
	mn1PBonusPlayersMakeNumber(gobj, seconds, 259.0F, 206.0F, colors2, 2, TRUE);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[5], &FILE_017_APOSTROPHE_IMAGE_OFFSET));
	sobj->pos.x = 239.0F;
	sobj->pos.y = 206.0F;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->envcolor.r = 0x00;
	sobj->envcolor.g = 0x00;
	sobj->envcolor.b = 0x00;
	sobj->sprite.red = 0x7E;
	sobj->sprite.green = 0x7C;
	sobj->sprite.blue = 0x77;

	mn1PBonusPlayersMakeNumber(gobj, mn1PBonusPlayersGetTotalMins() + remainder, 237.0F, 206.0F, colors2, 3, TRUE);
}

// 0x80133F4C - Unused?
void func_ovl29_80133F4C(void)
{
	return;
}

// 0x80133F54 - Unused?
void func_ovl29_80133F54(void)
{
	return;
}

// 0x80133F5C
s32 mn1PBonusPlayersGetCostume(s32 fkind, s32 select_button)
{
	ftParamGetCostumeCommonID(fkind, ftParamGetCostumeCommonID(fkind, select_button));
}

// 0x80133F88
s32 mn1PBonusPlayersGetStatusSelected(s32 fkind)
{
	switch (fkind)
	{
	case nFTKindFox:
	case nFTKindSamus:	
		return nFTDemoStatusWin4;

	case nFTKindDonkey:
	case nFTKindLuigi:
	case nFTKindLink:
	case nFTKindCaptain:
		return nFTDemoStatusWin1;

	case nFTKindYoshi:
	case nFTKindPurin:
	case nFTKindNess:
		return nFTDemoStatusWin2;
		
	case nFTKindMario:
	case nFTKindKirby:
		return nFTDemoStatusWin3;
		
	default:
		return nFTDemoStatusWin1;
	}
}

// 0x80133FE8
void mn1PBonusPlayersFighterProcUpdate(GObj *fighter_gobj)
{
	FTStruct* fp = ftGetStruct(fighter_gobj);
	s32 player = fp->player;

	if (sMN1PBonusPlayersSlot.is_fighter_selected == 1)
	{
		if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y < F_CLC_DTOR32(0.1F))
		{
			if (sMN1PBonusPlayersSlot.is_status_selected == FALSE)
			{
				scSubsysFighterSetStatus(sMN1PBonusPlayersSlot.player, mn1PBonusPlayersGetStatusSelected(sMN1PBonusPlayersSlot.fkind));

				sMN1PBonusPlayersSlot.is_status_selected = TRUE;
			}
		}
		else
		{
			DObjGetStruct(fighter_gobj)->rotate.vec.f.y += F_CST_DTOR32(20.0F);

			if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > F_CLC_DTOR32(360.0F))
			{
				DObjGetStruct(fighter_gobj)->rotate.vec.f.y = 0.0F;

				scSubsysFighterSetStatus(sMN1PBonusPlayersSlot.player, mn1PBonusPlayersGetStatusSelected(sMN1PBonusPlayersSlot.fkind));

				sMN1PBonusPlayersSlot.is_status_selected = TRUE;
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

// 0x80134108
void mn1PBonusPlayersMakeFighter(GObj *fighter_gobj, s32 player, s32 fkind)
{
	f32 rot_y;
	FTDesc desc = dFTManagerDefaultFighterDesc;

	if (fkind != nFTKindNull)
	{
		if (fighter_gobj != NULL)
		{
			rot_y = DObjGetStruct(fighter_gobj)->rotate.vec.f.y;
			ftManagerDestroyFighter(fighter_gobj);
		}
		else rot_y = F_CST_DTOR32(0.0F);

		desc.fkind = fkind;
		sMN1PBonusPlayersSlot.costume = desc.costume = mn1PBonusPlayersGetCostume(fkind, 0);
		desc.figatree_heap = sMN1PBonusPlayersFigatreeHeap;
		desc.player = player;
		sMN1PBonusPlayersSlot.player = fighter_gobj = ftManagerMakeFighter(&desc);

		gcAddGObjProcess(fighter_gobj, mn1PBonusPlayersFighterProcUpdate, nGCProcessKindFunc, 1);

		DObjGetStruct(fighter_gobj)->translate.vec.f.x = -700.0F;
		DObjGetStruct(fighter_gobj)->translate.vec.f.y = -850.0F;

		DObjGetStruct(fighter_gobj)->rotate.vec.f.y = rot_y;

		DObjGetStruct(fighter_gobj)->scale.vec.f.x = dSCSubsysDemoFighterScales[fkind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.y = dSCSubsysDemoFighterScales[fkind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.z = dSCSubsysDemoFighterScales[fkind];
	}
}

// 0x80134274
void mn1PBonusPlayersMakeFighterCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			nGCCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_PRIORITY_DEFAULT,
			func_80017EC0,
			20,
			COBJ_MASK_DLLINK(18) | COBJ_MASK_DLLINK(15) |
			COBJ_MASK_DLLINK(10) | COBJ_MASK_DLLINK(9),
			~0,
			TRUE,
			nGCProcessKindFunc,
			NULL,
			1,
			FALSE
		)
	);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	cobj->vec.eye.x = 0.0F;
	cobj->vec.eye.y = 0.0F;
	cobj->vec.eye.z = 5000.0F;

	cobj->flags = COBJ_FLAG_DLBUFFERS;

	cobj->vec.at.x = 0.0F;
	cobj->vec.at.y = 0.0F;
	cobj->vec.at.z = 0.0F;

	cobj->vec.up.x = 0.0F;
	cobj->vec.up.z = 0.0F;
	cobj->vec.up.y = 1.0F;
}

// 0x80134364
void mn1PBonusPlayersUpdateCursor(GObj *gobj, s32 player, s32 cursor_state)
{
	SObj *sobj;
	f32 start_pos_x, start_pos_y;
	SYColorRGBPair colors[/* */] =
	{
		{ { 0xE0, 0x15, 0x15 }, { 0x5B, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0xFB }, { 0x00, 0x00, 0x52 } },
		{ { 0xCA, 0x94, 0x08 }, { 0x62, 0x3C, 0x00 } },
		{ { 0x00, 0x91, 0x00 }, { 0x00, 0x4F, 0x00 } }
	};
	intptr_t num_offsets[/* */] =
	{
		&lMNPlayersCommonCursorNum1PSprite,
		&lMNPlayersCommonCursorNum2PSprite,
		&lMNPlayersCommonCursorNum3PSprite,
		&lMNPlayersCommonCursorNum4PSprite
	};
	intptr_t cursor_offsets[/* */] =
	{
		&lMNPlayersCommonCursorPointSprite,
		&lMNPlayersCommonCursorGrabSprite,
		&lMNPlayersCommonCursorHoverSprite
	};
	Vec2i cursor_pos[/* */] =
	{
		{ 7, 15 },
		{ 9, 10 },
		{ 9, 15 }
	};

	start_pos_x = SObjGetStruct(gobj)->pos.x;
	start_pos_y = SObjGetStruct(gobj)->pos.y;

	gcRemoveSObjAll(gobj);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[0], cursor_offsets[cursor_state]));
	sobj->pos.x = start_pos_x;
	sobj->pos.y = start_pos_y;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[0], num_offsets[player]));
	sobj->pos.x = SObjGetPrev(sobj)->pos.x + cursor_pos[cursor_state].x;
	sobj->pos.y = SObjGetPrev(sobj)->pos.y + cursor_pos[cursor_state].y;

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->sprite.red = colors[player].prim.r;
	sobj->sprite.green = colors[player].prim.g;
	sobj->sprite.blue = colors[player].prim.b;

	sobj->envcolor.r = colors[player].env.r;
	sobj->envcolor.g = colors[player].env.g;
	sobj->envcolor.b = colors[player].env.b;
}

// 0x80134574 - Unused?
void mn1PBonusPlayersCheckPickerRightArrowPress(void)
{
	return;
}

// 0x8013457C - Unused?
void mn1PBonusPlayersCheckPickerLeftArrowPress(void)
{
	return;
}

// 0x80134584
sb32 mn1PBonusPlayersCheckBackInRange(GObj *gobj)
{
	f32 pos_x, pos_y;
	sb32 is_in_range;
	SObj *sobj;

	sobj = SObjGetStruct(gobj);

	pos_y = sobj->pos.y + 3.0F;

	is_in_range = ((pos_y < 13.0F) || (pos_y > 34.0F)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		return FALSE;
	}
	pos_x = sobj->pos.x + 20.0F;

	is_in_range = ((pos_x >= 244.0F) && (pos_x <= 292.0F)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		return TRUE;
	}
	else return FALSE;
}

// 0x8013464C
sb32 mn1PBonusPlayersCheckPuckInRange(GObj *gobj, s32 cursor_player, s32 player)
{
	f32 pos_x, pos_y;
	sb32 is_in_range;
	SObj *cursor_sobj = SObjGetStruct(gobj);
	SObj *puck_sobj = SObjGetStruct(sMN1PBonusPlayersSlot.puck);

	pos_x = cursor_sobj->pos.x + 25.0F;
	is_in_range = ((pos_x >= puck_sobj->pos.x) && (pos_x <= puck_sobj->pos.x + 26.0F)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		pos_y = cursor_sobj->pos.y + 3.0F;
		is_in_range = ((pos_y >= puck_sobj->pos.y) && (pos_y <= puck_sobj->pos.y + 24.0F)) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			return TRUE;
		}
	}
	return FALSE;
}

// 0x80134724
void mn1PBonusPlayersResetPlayer(s32 player)
{
	sMN1PBonusPlayersSlot.is_selected = FALSE;
	sMN1PBonusPlayersSlot.fkind = nFTKindNull;
	sMN1PBonusPlayersSlot.holder_player = player;
	sMN1PBonusPlayersSlot.held_player = player;
	sMN1PBonusPlayersSlot.is_fighter_selected = FALSE;

	mn1PBonusPlayersUpdateCursorGrabDLLinks(player, player);

	sMN1PBonusPlayersSlot.is_cursor_adjusting = FALSE;
}

// 0x8013476C
void mn1PBonusPlayersUpdateFighter(s32 player)
{
	sb32 is_skip_fighter = FALSE;

	if ((sMN1PBonusPlayersSlot.fkind == nFTKindNull) && (sMN1PBonusPlayersSlot.is_selected == FALSE))
	{
		sMN1PBonusPlayersSlot.player->flags = GOBJ_FLAG_HIDDEN;
		mn1PBonusPlayersMakeHiScore();
		is_skip_fighter = TRUE;
	}
	if (is_skip_fighter == FALSE)
	{
		mn1PBonusPlayersMakeFighter(sMN1PBonusPlayersSlot.player, player, sMN1PBonusPlayersSlot.fkind);
		mn1PBonusPlayersMakeHiScore();
		sMN1PBonusPlayersSlot.player->flags = GOBJ_FLAG_NONE;
		sMN1PBonusPlayersSlot.is_status_selected = FALSE;
	}
}

// 0x801347F0 - Unused?
void func_ovl29_801347F0(void)
{
	return;
}

// 0x801347F8
void mn1PBonusPlayersUpdateNameAndLogo(s32 player)
{
	if ((sMN1PBonusPlayersSlot.fkind == nFTKindNull) && (sMN1PBonusPlayersSlot.is_selected == FALSE))
	{
		sMN1PBonusPlayersSlot.name_logo_gobj->flags = GOBJ_FLAG_HIDDEN;
	}
	else
	{
		sMN1PBonusPlayersSlot.name_logo_gobj->flags = GOBJ_FLAG_NONE;
		mn1PBonusPlayersMakeNameAndEmblem(sMN1PBonusPlayersSlot.name_logo_gobj, player, sMN1PBonusPlayersSlot.fkind);
	}
}

// 0x80134858
void mn1PBonusPlayersDestroyPortraitFlash(s32 player)
{
	GObj *gobj = sMN1PBonusPlayersSlot.flash;

	if (gobj != NULL)
	{
		sMN1PBonusPlayersSlot.flash = NULL;
		gcEjectGObj(gobj);
	}
}

// 0x80134890
void mn1PBonusPlayersPortraitFlashThreadUpdate(GObj *gobj)
{
	s32 length = 16;
	s32 wait_tics = 1;

	while (TRUE)
	{
		length--, wait_tics--;

		if (length == 0)
		{
			mn1PBonusPlayersDestroyPortraitFlash(gobj->user_data.p);
		}
		if (wait_tics == 0)
		{
			wait_tics = 1;
			gobj->flags = (gobj->flags == GOBJ_FLAG_HIDDEN) ? GOBJ_FLAG_NONE : GOBJ_FLAG_HIDDEN;
		}
		gcStopCurrentGObjThread(1);
	}
}

// 0x8013491C
void mn1PBonusPlayersMakePortraitFlash(s32 player)
{
	GObj *gobj;
	SObj *sobj;
	s32 portrait = mn1PBonusPlayersGetPortrait(sMN1PBonusPlayersSlot.fkind);

	mn1PBonusPlayersDestroyPortraitFlash(player);

	sMN1PBonusPlayersSlot.flash = gobj = gcMakeGObjSPAfter(0, NULL, 26, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 33, GOBJ_PRIORITY_DEFAULT, ~0);
	gobj->user_data.p = player;
	gcAddGObjProcess(gobj, mn1PBonusPlayersPortraitFlashThreadUpdate, nGCProcessKindThread, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMN1PBonusPlayersFiles[4], &FILE_013_WHITE_SQUARE));
	sobj->pos.x = ((portrait >= 6 ? portrait - 6 : portrait) * 45) + 26;
	sobj->pos.y = ((portrait >= 6 ? 1 : 0) * 43) + 37;
}

// 0x80134A50
void mn1PBonusPlayersAnnounceFighter(s32 player, s32 slot)
{
	u16 announcer_names[/* */] =
	{
		nSYAudioVoiceAnnounceMario,
		nSYAudioVoiceAnnounceFox,
		nSYAudioVoiceAnnounceDonkey,
		nSYAudioVoiceAnnounceSamus,
		nSYAudioVoiceAnnounceLuigi,
		nSYAudioVoiceAnnounceLink,
		nSYAudioVoiceAnnounceYoshi,
		nSYAudioVoiceAnnounceCaptain,
		nSYAudioVoiceAnnounceKirby,
		nSYAudioVoiceAnnouncePikachu,
		nSYAudioVoiceAnnouncePurin,
		nSYAudioVoiceAnnounceNess
	};

	if (sMN1PBonusPlayersSlot.p_sfx != NULL)
	{
		if ((sMN1PBonusPlayersSlot.p_sfx->sfx_id != 0) && (sMN1PBonusPlayersSlot.p_sfx->sfx_id == sMN1PBonusPlayersSlot.sfx_id))
		{
			func_80026738_27338(sMN1PBonusPlayersSlot.p_sfx);
		}
	}
	func_800269C0_275C0(nSYAudioFGMMarioDash);

	sMN1PBonusPlayersSlot.p_sfx = func_800269C0_275C0(announcer_names[sMN1PBonusPlayersSlot.fkind]);

	if (sMN1PBonusPlayersSlot.p_sfx != NULL)
	{
		sMN1PBonusPlayersSlot.sfx_id = sMN1PBonusPlayersSlot.p_sfx->sfx_id;
	}
}

// 0x80134B1C - Unused?
void func_ovl29_80134B1C(void)
{
	return;
}

// 0x80134B24
sb32 mn1PBonusPlayersCheckSelectFighter(GObj *gobj, s32 player, s32 unused, s32 select_button)
{
	if (sMN1PBonusPlayersSlot.cursor_state != mnCursorStateHoldingPuck)
	{
		return FALSE;
	}
	else if (sMN1PBonusPlayersSlot.fkind != nFTKindNull)
	{
		mn1PBonusPlayersSelectFighterPuck(player, select_button);
		sMN1PBonusPlayersSlot.recall_end_tic = sMN1PBonusPlayersTotalTimeTics + 30;
		func_800269C0_275C0(nSYAudioFGMStageSelect);
		return TRUE;
	}
	else func_800269C0_275C0(nSYAudioFGMMenuDenied);

	return FALSE;
}

// 0x80134BB0
void mn1PBonusPlayersUpdateCursorGrabDLLinks(s32 player, s32 puck)
{
	// Display orders for cursors on puck pickup
	s32 dl_links[4] = { 6, 4, 2, 0 };

	gcMoveGObjDL(sMN1PBonusPlayersSlot.puck, 30, dl_links[player] + 1);
}

// 0x80134C1C
void mn1PBonusPlayersUpdateCursorPlacementDLLinks(s32 player)
{
	// Display orders for cursors not holding pucks on puck placement
	s32 dl_links[/* */] = { 3, 2, 1, 0 };

	gcMoveGObjDL(sMN1PBonusPlayersSlot.puck, 31, dl_links[player]);
}

// 0x80134C80
void mn1PBonusPlayersSetCursorPuckOffset(s32 player)
{
	sMN1PBonusPlayersSlot.cursor_pickup_x = SObjGetStruct(sMN1PBonusPlayersSlot.puck)->pos.x - 11.0F;
	sMN1PBonusPlayersSlot.cursor_pickup_y = SObjGetStruct(sMN1PBonusPlayersSlot.puck)->pos.y - -14.0F;
}

// 0x80134CC4
void mn1PBonusPlayersSetCursorGrab(s32 player)
{
	sMN1PBonusPlayersSlot.holder_player = player;
	sMN1PBonusPlayersSlot.is_selected = FALSE;
	sMN1PBonusPlayersSlot.cursor_state = mnCursorStateHoldingPuck;
	sMN1PBonusPlayersSlot.held_player = player;
	sMN1PBonusPlayersSlot.is_fighter_selected = FALSE;

	mn1PBonusPlayersUpdateFighter(player);
	mn1PBonusPlayersUpdateCursorGrabDLLinks(player, player);
	mn1PBonusPlayersSetCursorPuckOffset(player);
	mn1PBonusPlayersUpdateCursor(sMN1PBonusPlayersSlot.cursor, player, sMN1PBonusPlayersSlot.cursor_state);

	sMN1PBonusPlayersSlot.is_cursor_adjusting = TRUE;

	func_800269C0_275C0(nSYAudioFGMSamusDash);

	mn1PBonusPlayersDestroyPortraitFlash(player);
	mn1PBonusPlayersUpdateNameAndLogo(player);
}

// 0x80134D54
sb32 mn1PBonusPlayersCheckCursorPuckGrab(GObj *gobj, s32 player)
{
	MNPlayersSlotBonus *pslot = &sMN1PBonusPlayersSlot;

	if (sMN1PBonusPlayersTotalTimeTics < sMN1PBonusPlayersSlot.recall_end_tic)
	{
		return FALSE;
	}
	else if (sMN1PBonusPlayersSlot.cursor_state != mnCursorStateNotHoldingPuck)
	{
		return FALSE;
	}
	else if ((sMN1PBonusPlayersSlot.holder_player == GMCOMMON_PLAYERS_MAX) && (mn1PBonusPlayersCheckPuckInRange(gobj, player, player) != FALSE))
	{
		sMN1PBonusPlayersSlot.holder_player = player;
		sMN1PBonusPlayersSlot.is_selected = FALSE;
		sMN1PBonusPlayersSlot.cursor_state = mnCursorStateHoldingPuck;
		pslot->held_player = player;
		sMN1PBonusPlayersSlot.is_fighter_selected = FALSE;

		mn1PBonusPlayersUpdateFighter(player);
		mn1PBonusPlayersUpdateCursorGrabDLLinks(player, player);
		mn1PBonusPlayersSetCursorPuckOffset(player);
		mn1PBonusPlayersUpdateCursor(gobj, player, sMN1PBonusPlayersSlot.cursor_state);

		sMN1PBonusPlayersSlot.is_cursor_adjusting = TRUE;

		func_800269C0_275C0(nSYAudioFGMSamusDash);
		mn1PBonusPlayersDestroyPortraitFlash(player);
		mn1PBonusPlayersUpdateNameAndLogo(player);

		return TRUE;
	}
	else return FALSE;
}

// 0x80134E50
s32 mn1PBonusPlayersGetForcePuckFighterKind(void)
{
	SObj *sobj = SObjGetStruct(sMN1PBonusPlayersSlot.puck);
	s32 pos_x = (s32) sobj->pos.x + 13;
	s32 pos_y = (s32) sobj->pos.y + 12;
	s32 fkind;
	sb32 is_in_range = ((pos_y > 35) && (pos_y < 79)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		is_in_range = ((pos_x > 24) && (pos_x < 295)) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			return mn1PBonusPlayersGetFighterKind((pos_x - 25) / 45);
		}
	}
	is_in_range = ((pos_y > 78) && (pos_y < 122)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		is_in_range = ((pos_x > 24) && (pos_x < 295)) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			return mn1PBonusPlayersGetFighterKind(((pos_x - 25) / 45) + 6);
		}
	}
	return nFTKindNull;
}

// 0x80134F6C
s32 mn1PBonusPlayersGetPuckFighterKind(s32 player)
{
	SObj *sobj = SObjGetStruct(sMN1PBonusPlayersSlot.puck);
	s32 pos_x = (s32) sobj->pos.x + 13;
	s32 pos_y = (s32) sobj->pos.y + 12;
	s32 fkind;
	sb32 is_in_range = ((pos_y > 35) && (pos_y < 79)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		is_in_range = ((pos_x > 24) && (pos_x < 295)) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			fkind = mn1PBonusPlayersGetFighterKind((pos_x - 25) / 45);

			if ((mn1PBonusPlayersCheckFighterCrossed(fkind) != FALSE) || (mn1PBonusPlayersCheckFighterLocked(fkind) != FALSE))
			{
				return nFTKindNull;
			}
			else return fkind;
		}
	}
	is_in_range = ((pos_y > 78) && (pos_y < 122)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		is_in_range = ((pos_x > 24) && (pos_x < 295)) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			fkind = mn1PBonusPlayersGetFighterKind(((pos_x - 25) / 45) + 6);

			if ((mn1PBonusPlayersCheckFighterCrossed(fkind) != FALSE) || (mn1PBonusPlayersCheckFighterLocked(fkind) != FALSE))
			{
				return nFTKindNull;
			}
			else return fkind;
		}
	}
	return nFTKindNull;
}

// 0x801350E4
void mn1PBonusPlayersAdjustCursor(GObj *gobj, s32 player)
{
	SYController *controller;
	Vec2i pos[/* */] =
	{
		{ 7, 15 },
		{ 9, 10 },
		{ 9, 15 }
	};
	f32 delta;
	sb32 is_in_range;

	if (sMN1PBonusPlayersSlot.is_cursor_adjusting != FALSE)
	{
		delta = (sMN1PBonusPlayersSlot.cursor_pickup_x - SObjGetStruct(sMN1PBonusPlayersSlot.cursor)->pos.x) / 5.0F;
		is_in_range = ((delta >= -1.0F) && (delta <= 1.0F)) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			SObjGetStruct(sMN1PBonusPlayersSlot.cursor)->pos.x = sMN1PBonusPlayersSlot.cursor_pickup_x;
		}
		else SObjGetStruct(sMN1PBonusPlayersSlot.cursor)->pos.x += delta;

		delta = (sMN1PBonusPlayersSlot.cursor_pickup_y - SObjGetStruct(sMN1PBonusPlayersSlot.cursor)->pos.y) / 5.0F;
		is_in_range = ((delta >= -1.0F) && (delta <= 1.0F)) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			SObjGetStruct(sMN1PBonusPlayersSlot.cursor)->pos.y = sMN1PBonusPlayersSlot.cursor_pickup_y;
		}
		else SObjGetStruct(sMN1PBonusPlayersSlot.cursor)->pos.y += delta;

		if
		(
			(SObjGetStruct(sMN1PBonusPlayersSlot.cursor)->pos.x == sMN1PBonusPlayersSlot.cursor_pickup_x) &&
			(SObjGetStruct(sMN1PBonusPlayersSlot.cursor)->pos.y == sMN1PBonusPlayersSlot.cursor_pickup_y)
		)
		{
			sMN1PBonusPlayersSlot.is_cursor_adjusting = FALSE;
		}
		SObjGetStruct(gobj)->next->pos.x = SObjGetStruct(gobj)->pos.x + pos[sMN1PBonusPlayersSlot.cursor_state].x;
		SObjGetStruct(gobj)->next->pos.y = SObjGetStruct(gobj)->pos.y + pos[sMN1PBonusPlayersSlot.cursor_state].y;
	}
	else if (sMN1PBonusPlayersSlot.is_recalling == FALSE)
	{
		controller = &gSYControllerDevices[player];
		is_in_range = ((controller->stick_range.x < -8) || (controller->stick_range.x > 8)) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			delta = (controller->stick_range.x / 20.0F) + SObjGetStruct(gobj)->pos.x;
			is_in_range = ((delta >= 0.0F) && (delta <= 280.0F)) ? TRUE : FALSE;

			if (is_in_range != FALSE)
			{
				SObjGetStruct(gobj)->pos.x = delta;
				SObjGetStruct(gobj)->next->pos.x = SObjGetStruct(gobj)->pos.x + pos[sMN1PBonusPlayersSlot.cursor_state].x;
			}
		}
		controller = &gSYControllerDevices[player];
		is_in_range = ((controller->stick_range.y < -8) || (controller->stick_range.y > 8)) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			delta = (controller->stick_range.y / -20.0F) + SObjGetStruct(gobj)->pos.y;
			is_in_range = ((delta >= 10.0F) && (delta <= 205.0F)) ? TRUE : FALSE;

			if (is_in_range != FALSE)
			{
				SObjGetStruct(gobj)->pos.y = delta;
				SObjGetStruct(gobj)->next->pos.y = SObjGetStruct(gobj)->pos.y + pos[sMN1PBonusPlayersSlot.cursor_state].y;
			}
		}
	}
}

// 0x8013545C
void mn1PBonusPlayersSyncCursorDisplay(GObj *gobj, s32 player)
{
	s32 i;

	if ((SObjGetStruct(gobj)->pos.y > 124.0F) || (SObjGetStruct(gobj)->pos.y < 38.0F))
	{
		if (sMN1PBonusPlayersSlot.cursor_state != mnCursorStatePointer)
		{
			mn1PBonusPlayersUpdateCursor(gobj, player, mnCursorStatePointer);
			sMN1PBonusPlayersSlot.cursor_state = mnCursorStatePointer;
		}
	}
	else if (sMN1PBonusPlayersSlot.held_player == -1)
	{
		if (sMN1PBonusPlayersSlot.cursor_state != mnCursorStateNotHoldingPuck)
		{
			mn1PBonusPlayersUpdateCursor(gobj, player, mnCursorStateNotHoldingPuck);
			sMN1PBonusPlayersSlot.cursor_state = mnCursorStateNotHoldingPuck;
		}
	}
	else if (sMN1PBonusPlayersSlot.cursor_state != mnCursorStateHoldingPuck)
	{
		mn1PBonusPlayersUpdateCursor(gobj, player, mnCursorStateHoldingPuck);
		sMN1PBonusPlayersSlot.cursor_state = mnCursorStateHoldingPuck;
	}
	if ((sMN1PBonusPlayersSlot.cursor_state == mnCursorStatePointer) && (sMN1PBonusPlayersSlot.is_selected != FALSE))
	{
		for (i = 0; i < GMCOMMON_PLAYERS_MAX; i++)
		{
			if ((sMN1PBonusPlayersSlot.is_selected == TRUE) && (mn1PBonusPlayersCheckPuckInRange(gobj, player, i) != FALSE))
			{
				mn1PBonusPlayersUpdateCursor(gobj, player, mnCursorStateNotHoldingPuck);
				sMN1PBonusPlayersSlot.cursor_state = mnCursorStateNotHoldingPuck;
				break;
			}
		}
	}
}

// 0x801355E0
void mn1PBonusPlayersSyncShadeAndCostume(GObj *gobj, s32 select_button)
{
	s32 costume = ftParamGetCostumeCommonID(sMN1PBonusPlayersSlot.fkind, select_button);

	ftParamInitAllParts(sMN1PBonusPlayersSlot.player, costume, 0);

	sMN1PBonusPlayersSlot.costume = costume;

	func_800269C0_275C0(nSYAudioFGMMenuScroll2);
}

// 0x80135634
sb32 mn1PBonusPlayersCheckManFighterSelected(s32 unused)
{
	if (sMN1PBonusPlayersSlot.is_selected != FALSE)
	{
		return TRUE;
	}
	else return FALSE;
}

// 0x8013565C
void mn1PBonusPlayersRecallPuck(s32 player)
{
	sMN1PBonusPlayersSlot.is_fighter_selected = FALSE;
	sMN1PBonusPlayersSlot.is_selected = FALSE;
	sMN1PBonusPlayersSlot.is_recalling = TRUE;
	sMN1PBonusPlayersSlot.recall_tics = 0;
	sMN1PBonusPlayersSlot.recall_start_x = SObjGetStruct(sMN1PBonusPlayersSlot.puck)->pos.x;
	sMN1PBonusPlayersSlot.recall_start_y = SObjGetStruct(sMN1PBonusPlayersSlot.puck)->pos.y;

	sMN1PBonusPlayersSlot.recall_end_x = SObjGetStruct(sMN1PBonusPlayersSlot.cursor)->pos.x + 20.0F;

	if (sMN1PBonusPlayersSlot.recall_end_x > 280.0F)
	{
		sMN1PBonusPlayersSlot.recall_end_x = 280.0F;
	}
	sMN1PBonusPlayersSlot.recall_end_y = SObjGetStruct(sMN1PBonusPlayersSlot.cursor)->pos.y + -15.0F;

	if (sMN1PBonusPlayersSlot.recall_end_y < 10.0F)
	{
		sMN1PBonusPlayersSlot.recall_end_y = 10.0F;
	}
	if (sMN1PBonusPlayersSlot.recall_end_y < sMN1PBonusPlayersSlot.recall_start_y)
	{
		sMN1PBonusPlayersSlot.recall_mid_y = sMN1PBonusPlayersSlot.recall_end_y - 20.0F;
	}
	else sMN1PBonusPlayersSlot.recall_mid_y = sMN1PBonusPlayersSlot.recall_start_y - 20.0F;
}

// 0x80135740
void mn1PBonusPlayersBackTo1PMode(void)
{
	if (sMN1PBonusPlayersBonusKind == 0)
	{
		gSCManagerSceneData.scene_prev = nSCKind1PBonus1Players;
	}
	else gSCManagerSceneData.scene_prev = nSCKind1PBonus2Players;

	gSCManagerSceneData.scene_curr = nSCKind1PMode;

	mn1PBonusPlayersSetSceneData();
	syAudioStopSongAll();
	func_800266A0_272A0();
	syTaskmanSetLoadScene();
}

// 0x801357AC
void mn1PBonusPlayersDetectBack(s32 player)
{
	SYController *controller = &gSYControllerDevices[player];

	if ((sMN1PBonusPlayersTotalTimeTics >= 10) && (controller->button_tap & B_BUTTON))
	{
		mn1PBonusPlayersBackTo1PMode();
	}
}

// 0x80135800
sb32 mn1PBonusPlayersCheckGameModeInRange(GObj *gobj)
{
	f32 pos_x, pos_y;
	sb32 is_in_range;
	SObj *sobj;

	sobj = SObjGetStruct(gobj);

	pos_x = sobj->pos.x + 20.0F;
	is_in_range = ((pos_x >= 27.0F) && (pos_x <= 207.0F)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		pos_y = sobj->pos.y + 3.0F;
		is_in_range = ((pos_y >= 14.0F) && (pos_y <= 35.0F)) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			return TRUE;
		}
	}
	return FALSE;
}

// 0x801358C4
void mn1PBonusPlayersPressGameMode(void)
{
	if (sMN1PBonusPlayersBonusKind == 0)
	{
		sMN1PBonusPlayersBonusKind = 1;
	}
	else sMN1PBonusPlayersBonusKind = 0;

	gcEjectGObj(sMN1PBonusPlayersTitleGObj);
	mn1PBonusPlayersMakeLabels();
	mn1PBonusPlayersMakeHiScore();

	if (sMN1PBonusPlayersTotalTimeGObj != NULL)
	{
		gcEjectGObj(sMN1PBonusPlayersTotalTimeGObj);
		sMN1PBonusPlayersTotalTimeGObj = NULL;
	}
	if (mn1PBonusPlayersCheckBonusCompleteAll() != FALSE)
	{
		mn1PBonusPlayersMakeTotalTime();
	}
}

// 0x80135950
void mn1PBonusPlayersCursorProcUpdate(GObj *gobj)
{
	s32 player = gobj->user_data.s;
	SYController *controller = &gSYControllerDevices[player];
	MNPlayersSlotBonus *pslot;
	s32 unused[3];

	mn1PBonusPlayersAdjustCursor(gobj, player);

	if
	(
		(controller->button_tap & A_BUTTON) &&
		(mn1PBonusPlayersCheckSelectFighter(gobj, player, sMN1PBonusPlayersSlot.held_player, 0) == FALSE) &&
		(mn1PBonusPlayersCheckCursorPuckGrab(gobj, player) == FALSE)
	)
	{
		if (mn1PBonusPlayersCheckGameModeInRange(gobj) != FALSE)
		{
			mn1PBonusPlayersPressGameMode();
		}
		else if (mn1PBonusPlayersCheckBackInRange(gobj) != FALSE)
		{
			mn1PBonusPlayersBackTo1PMode();
			func_800269C0_275C0(nSYAudioFGMMenuScroll2);
		}
	}
	if
	(
		(controller->button_tap & U_CBUTTONS) &&
		(mn1PBonusPlayersCheckSelectFighter(gobj, player, sMN1PBonusPlayersSlot.held_player, 0) == FALSE) &&
		(sMN1PBonusPlayersSlot.is_fighter_selected != FALSE)
	)
	{
		mn1PBonusPlayersSyncShadeAndCostume(player, 0);
	}
	if
	(
		(controller->button_tap & R_CBUTTONS) &&
		(mn1PBonusPlayersCheckSelectFighter(gobj, player, sMN1PBonusPlayersSlot.held_player, 1) == FALSE) &&
		(sMN1PBonusPlayersSlot.is_fighter_selected != FALSE)
	)
	{
		mn1PBonusPlayersSyncShadeAndCostume(player, 1);
	}
	if
	(
		(controller->button_tap & D_CBUTTONS) &&
		(mn1PBonusPlayersCheckSelectFighter(gobj, player, sMN1PBonusPlayersSlot.held_player, 2) == FALSE) &&
		(sMN1PBonusPlayersSlot.is_fighter_selected != FALSE)
	)
	{
		mn1PBonusPlayersSyncShadeAndCostume(player, 2);
	}
	if
	(
		(controller->button_tap & L_CBUTTONS) &&
		(mn1PBonusPlayersCheckSelectFighter(gobj, player, sMN1PBonusPlayersSlot.held_player, 3) == FALSE) &&
		(sMN1PBonusPlayersSlot.is_fighter_selected != FALSE)
	)
	{
		mn1PBonusPlayersSyncShadeAndCostume(player, 3);
	}
	if ((controller->button_tap & B_BUTTON) && (mn1PBonusPlayersCheckManFighterSelected(player) != FALSE))
	{
		mn1PBonusPlayersRecallPuck(player);
	}
	if (sMN1PBonusPlayersSlot.is_recalling == FALSE)
	{
		mn1PBonusPlayersDetectBack(player);
	}
	if (sMN1PBonusPlayersSlot.is_recalling == FALSE)
	{
		mn1PBonusPlayersSyncCursorDisplay(gobj, player);
	}
}

// 0x801374AC
s32 dMN1PBonusPlayersPuckSpriteOffsets[/* */] =
{
	&lMNPlayersCommon1PPuckSprite,
	&lMNPlayersCommon2PPuckSprite,
	&lMNPlayersCommon3PPuckSprite,
	&lMNPlayersCommon4PPuckSprite,
	&lMNPlayersCommonCPPuckSprite
};

// 0x80135BA4 - Unused?
void func_ovl29_80135BA4(void)
{
	return;
}

// 0x80135BAC - Unused?
void func_ovl29_80135BAC(void)
{
	return;
}

// 0x80135BB4
void mn1PBonusPlayersMovePuck(s32 player)
{
	SObjGetStruct(sMN1PBonusPlayersSlot.puck)->pos.x += sMN1PBonusPlayersSlot.puck_vel_x;
	SObjGetStruct(sMN1PBonusPlayersSlot.puck)->pos.y += sMN1PBonusPlayersSlot.puck_vel_y;
}

// 0x80135BF4
void mn1PBonusPlayersSyncPuckAndFighter(GObj *gobj)
{
	s32 fkind;
	s32 player = gobj->user_data.s;

	if
	(
		(sMN1PBonusPlayersSlot.cursor_state != mnCursorStatePointer) ||
		(sMN1PBonusPlayersSlot.is_selected == TRUE) ||
		(sMN1PBonusPlayersSlot.is_recalling == TRUE)
	)
	{
		gobj->flags = GOBJ_FLAG_NONE;
	}
	else gobj->flags = GOBJ_FLAG_HIDDEN;

	if
	(
		(sMN1PBonusPlayersSlot.is_selected == FALSE) &&
		(sMN1PBonusPlayersSlot.holder_player != GMCOMMON_PLAYERS_MAX)
	)
	{
		if (sMN1PBonusPlayersSlot.is_cursor_adjusting == FALSE)
		{
			SObjGetStruct(gobj)->pos.x = SObjGetStruct(sMN1PBonusPlayersSlot.cursor)->pos.x + 11.0F;
			SObjGetStruct(gobj)->pos.y = SObjGetStruct(sMN1PBonusPlayersSlot.cursor)->pos.y + -14.0F;
		}
	}
	else mn1PBonusPlayersMovePuck(player);

	fkind = mn1PBonusPlayersGetPuckFighterKind(player);

	if ((sMN1PBonusPlayersSlot.is_selected == FALSE) && (fkind != sMN1PBonusPlayersSlot.fkind))
	{
		sMN1PBonusPlayersSlot.fkind = fkind;

		mn1PBonusPlayersUpdateFighter(player);
		mn1PBonusPlayersUpdateNameAndLogo(player);
	}
	mn1PBonusPlayersMakeHiScore();
}

// 0x80135D08
void mn1PBonusPlayersCreateReadyToFightViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0xA, 0x800000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135DA8
void mn1PBonusPlayersMakeCursorViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0xD, 0x40000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135E48
void mn1PBonusPlayersCreateDroppedPuckViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0xF, GOBJ_PRIORITY_DEFAULT, ~0, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135EE8
void mn1PBonusPlayersMakeCursor(s32 player)
{
	GObj *gobj;
	s32 unused;

	// ???
	intptr_t unused_offsets[/* */] =
	{
		&lMNPlayersCommonCursorNum1PSprite,
		&lMNPlayersCommonCursorNum2PSprite,
		&lMNPlayersCommonCursorNum3PSprite,
		&lMNPlayersCommonCursorNum4PSprite
	};
	s32 dl_links[/* */] = { 6, 4, 2, 0 };

	gobj = lbCommonMakeSpriteGObj
	(
		0,
		NULL,
		19,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSObjAttr,
		30,
		dl_links[player],
		~0,
		lbRelocGetFileData
		(
			Sprite*,
			sMN1PBonusPlayersFiles[0],
			&FILE_011_CURSOR_POINTER_IMAGE_OFFSET
		),
		nGCProcessKindFunc,
		mn1PBonusPlayersCursorProcUpdate,
		2
	);
	gobj->user_data.s = player;
	sMN1PBonusPlayersSlot.cursor = gobj;
	SObjGetStruct(gobj)->pos.x = 80.0F;
	SObjGetStruct(gobj)->pos.y = 170.0F;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;

	mn1PBonusPlayersUpdateCursor(gobj, player, 0);
	sMN1PBonusPlayersSlot.is_selected = FALSE;
}

// 0x80136034
void mn1PBonusPlayersMakePuck(s32 player)
{
	GObj *gobj;
	s32 unused;

	intptr_t offsets[/* */] =
	{
		&lMNPlayersCommon1PPuckSprite,
		&lMNPlayersCommon2PPuckSprite,
		&lMNPlayersCommon3PPuckSprite,
		&lMNPlayersCommon4PPuckSprite
	};

	// Display orders for pucks on initial load
	s32 dl_links[/* */] = { 3, 2, 1, 0 };

	gobj = lbCommonMakeSpriteGObj
	(
		0,
		NULL,
		20,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSObjAttr,
		31,
		dl_links[player],
		~0,
		lbRelocGetFileData
		(
			Sprite*,
			sMN1PBonusPlayersFiles[0],
			offsets[player]
		),
		nGCProcessKindFunc,
		mn1PBonusPlayersSyncPuckAndFighter,
		1
	);
	gobj->user_data.s = player;
	sMN1PBonusPlayersSlot.puck = gobj;

	SObjGetStruct(gobj)->pos.x = 51.0F;
	SObjGetStruct(gobj)->pos.y = 161.0F;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;

	if (sMN1PBonusPlayersDevicesConnected[player] != -1)
	{
		sMN1PBonusPlayersSlot.holder_player = player;
	}
	else sMN1PBonusPlayersSlot.holder_player = GMCOMMON_PLAYERS_MAX;
}

// 0x801361A4 - Unused?
void func_ovl29_801361A4() {}

// 0x801361AC
void mn1PBonusPlayersAutopositionPuckFromPortraitEdges(GObj *gobj)
{
	s32 portrait = mn1PBonusPlayersGetPortrait(sMN1PBonusPlayersSlot.fkind);
	f32 portrait_edge_x = ((portrait >= 6) ? portrait - 6 : portrait) * 45 + 25;
	f32 portrait_edge_y = ((portrait >= 6) ? 1 : 0) * 43 + 36;
	f32 new_pos_x = SObjGetStruct(sMN1PBonusPlayersSlot.puck)->pos.x + sMN1PBonusPlayersSlot.puck_vel_x + 13.0F;
	f32 new_pos_y = SObjGetStruct(sMN1PBonusPlayersSlot.puck)->pos.y + sMN1PBonusPlayersSlot.puck_vel_y + 12.0F;

	if (new_pos_x < (portrait_edge_x + 5.0F))
	{
		sMN1PBonusPlayersSlot.puck_vel_x = ((portrait_edge_x + 5.0F) - new_pos_x) / 10.0F;
	}
	if (((portrait_edge_x + 45.0F) - 5.0F) < new_pos_x)
	{
		sMN1PBonusPlayersSlot.puck_vel_x = ((new_pos_x - ((portrait_edge_x + 45.0F) - 5.0F)) * -1.0F) / 10.0F;
	}
	if (new_pos_y < (portrait_edge_y + 5.0F))
	{
		sMN1PBonusPlayersSlot.puck_vel_y = ((portrait_edge_y + 5.0F) - new_pos_y) / 10.0F;
	}
	if (((portrait_edge_y + 43.0F) - 5.0F) < new_pos_y)
	{
		sMN1PBonusPlayersSlot.puck_vel_y = ((new_pos_y - ((portrait_edge_y + 43.0F) - 5.0F)) * -1.0F) / 10.0F;
	}
}

// 0x8013635C
void mn1PBonusPlayersAutopositionPlacedPuck(s32 player)
{
	mn1PBonusPlayersAutopositionPuckFromPortraitEdges(player);
}

// 0x8013637C
void mn1PBonusPlayersAutopositionRecalledPuck(s32 player)
{
	f32 new_y_velocity, new_x_velocity;

	sMN1PBonusPlayersSlot.recall_tics += 1;

	if (sMN1PBonusPlayersSlot.recall_tics < 11)
	{
		new_x_velocity = (sMN1PBonusPlayersSlot.recall_end_x - sMN1PBonusPlayersSlot.recall_start_x) / 10.0F;

		if (sMN1PBonusPlayersSlot.recall_tics < 6)
		{
			new_y_velocity = (sMN1PBonusPlayersSlot.recall_mid_y - sMN1PBonusPlayersSlot.recall_start_y) / 5.0F;
		}
		else
		{
			new_y_velocity = (sMN1PBonusPlayersSlot.recall_end_y - sMN1PBonusPlayersSlot.recall_mid_y) / 5.0F;
		}

		sMN1PBonusPlayersSlot.puck_vel_x = new_x_velocity;
		sMN1PBonusPlayersSlot.puck_vel_y = new_y_velocity;
	}
	else if (sMN1PBonusPlayersSlot.recall_tics == 11)
	{
		mn1PBonusPlayersSetCursorGrab(player);

		sMN1PBonusPlayersSlot.puck_vel_x = 0.0F;
		sMN1PBonusPlayersSlot.puck_vel_y = 0.0F;
	}

	if (sMN1PBonusPlayersSlot.recall_tics == 30)
		sMN1PBonusPlayersSlot.is_recalling = FALSE;
}

// 0x80136450
void mn1PBonusPlayersAutopositionPuck(GObj *gobj)
{
	if (sMN1PBonusPlayersSlot.is_recalling != FALSE)
	{
		mn1PBonusPlayersAutopositionRecalledPuck(sMN1PBonusPlayersManPlayer);
	}
	if (sMN1PBonusPlayersSlot.is_selected != FALSE)
	{
		mn1PBonusPlayersAutopositionPlacedPuck(0);
	}
}

// 0x8013649C
void mn1PBonusPlayersMakePuckAutopositionRoutine()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x18U, 0x80000000U), mn1PBonusPlayersAutopositionPuck, 1, 1);
}

// 0x801364E0
void mn1PBonusPlayersSyncWhiteCircleSizeAndDisplay(GObj *white_circle_gobj)
{
	f32 sizes[12] = {

		1.5, 1.5, 2.0F, 1.5, 1.5, 1.5,
		1.5, 1.5, 1.5, 1.5, 1.5, 1.5
	};

	if ((sMN1PBonusPlayersSlot.is_fighter_selected == FALSE) && (sMN1PBonusPlayersSlot.fkind != nFTKindNull))
	{
		white_circle_gobj->flags = (white_circle_gobj->flags == GOBJ_FLAG_HIDDEN) ? GOBJ_FLAG_NONE : GOBJ_FLAG_HIDDEN;

		DObjGetStruct(white_circle_gobj)->scale.vec.f.x = sizes[sMN1PBonusPlayersSlot.fkind];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[sMN1PBonusPlayersSlot.fkind];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[sMN1PBonusPlayersSlot.fkind];
	}
	else white_circle_gobj->flags = GOBJ_FLAG_HIDDEN;
}

// 0x801365B8
void mn1PBonusPlayersCreateWhiteCircles()
{
	GObj *white_circle_gobj;

	white_circle_gobj = gcMakeGObjSPAfter(0U, NULL, 0x15U, 0x80000000U);

	gcSetupCommonDObjs(white_circle_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[10], &FILE_016_WHITE_CIRCLE_OFFSET_2), 0);

	gcAddGObjDisplay(white_circle_gobj, gcDrawDObjTreeDLLinksForGObj, 9U, GOBJ_PRIORITY_DEFAULT, ~0);

	gcAddMObjAll(white_circle_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[10], &FILE_016_WHITE_CIRCLE_OFFSET_1));

	gcAddGObjProcess(white_circle_gobj, mn1PBonusPlayersSyncWhiteCircleSizeAndDisplay, 1, 1);

	gcPlayAnimAll(white_circle_gobj);

	DObjGetStruct(white_circle_gobj)->translate.vec.f.x = -700.0F;
	DObjGetStruct(white_circle_gobj)->translate.vec.f.y = -850.0F;
	DObjGetStruct(white_circle_gobj)->translate.vec.f.z = 0.0F;
}

// 0x80136698
void mn1PBonusPlayersBlinkIfReadyToFight(GObj *gobj)
{
	if (sMN1PBonusPlayersIsSelected)
	{
		sMN1PBonusPlayersReadyBlinkWait += 1;

		if (sMN1PBonusPlayersReadyBlinkWait == 0x28)
			sMN1PBonusPlayersReadyBlinkWait = 0;

		gobj->flags = (sMN1PBonusPlayersReadyBlinkWait < 0x1E) ? 0 : 1;
	}
	else
	{
		gobj->flags = 1;
		sMN1PBonusPlayersReadyBlinkWait = 0;
	}
}

// 0x80136704
void mn1PBonusPlayersCreateReadyToFightObjects()
{
	GObj *gobj;
	SObj *sobj;

	// Ready to Fight banner
	gobj = gcMakeGObjSPAfter(0U, NULL, 0x1CU, 0x80000000U);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0x23U, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mn1PBonusPlayersBlinkIfReadyToFight, 1, 1);

	// Ready to Fight banner bg
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[0], &FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET));
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
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[0], &FILE_011_READY_TO_FIGHT_IMAGE_OFFSET));
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
	gcAddGObjProcess(gobj, mn1PBonusPlayersBlinkIfReadyToFight, 1, 1);

	// "Press"
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[0], &FILE_011_PRESS_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xD6;
	sobj->sprite.green = 0xDD;
	sobj->sprite.blue = 0xC6;
	sobj->pos.x = 133.0F;
	sobj->pos.y = 219.0F;

	// "Start"
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[0], &FILE_011_START_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0x56;
	sobj->sprite.blue = 0x92;
	sobj->pos.x = 162.0F;
	sobj->pos.y = 219.0F;
}

// 0x80136980 - Unused?
void func_ovl29_80136980(void)
{
	return;
}

// 0x80136988 - Unused?
void func_ovl29_80136988(void)
{
	return;
}

// 0x80136990 - Unused?
void func_ovl29_80136990(void)
{
	return;
}

// 0x80136998
void mn1PBonusPlayersSetSceneData(void)
{
	gSCManagerSceneData.player = sMN1PBonusPlayersManPlayer;
	gSCManagerSceneData.bonus_fkind = sMN1PBonusPlayersSlot.fkind;
	gSCManagerSceneData.bonus_costume = sMN1PBonusPlayersSlot.costume;
}

// 0x801369C8 - Unused?
void func_ovl29_801369C8(void)
{
	return;
}

// 0x801369D0
void mn1PBonusPlayersProcRun(GObj *gobj)
{
	sMN1PBonusPlayersTotalTimeTics++;

	if (sMN1PBonusPlayersTotalTimeTics == sMN1PBonusPlayersReturnTic)
	{
		gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
		gSCManagerSceneData.scene_curr = nSCKindTitle;

		mn1PBonusPlayersSetSceneData();
		syTaskmanSetLoadScene();

		return;
	}
	if (scSubsysControllerCheckNoInputAll() == FALSE)
	{
		sMN1PBonusPlayersReturnTic = sMN1PBonusPlayersTotalTimeTics + I_MIN_TO_TICS(5);
	}
	if ((sMN1PBonusPlayersIsSelected != FALSE) && (sMN1PBonusPlayersSlot.is_fighter_selected == FALSE))
	{
		sMN1PBonusPlayersIsSelected = FALSE;
	}
	if ((sMN1PBonusPlayersIsSelected != FALSE) && ((--sMN1PBonusPlayersStartWait == 0) || (gSYControllerDevices[sMN1PBonusPlayersManPlayer].button_tap & START_BUTTON)))
	{
		if (sMN1PBonusPlayersBonusKind == 0)
		{
			gSCManagerSceneData.scene_prev = nSCKind1PBonus1Players;
		}
		else gSCManagerSceneData.scene_prev = nSCKind1PBonus2Players;

		gSCManagerSceneData.scene_curr = nSCKind1PBonusStage;

		mn1PBonusPlayersSetSceneData();
		syTaskmanSetLoadScene();
	}
}

// 0x80136B14 - Unused?
void func_ovl29_80136B14(void)
{
	return;
}

// 0x80136B1C - Unused?
void func_ovl29_80136B1C(void)
{
	return;
}

// 0x80136B24
void mn1PBonusPlayersInitPlayer(void)
{
	sMN1PBonusPlayersSlot.held_player = -1;
	sMN1PBonusPlayersSlot.flash = NULL;
	sMN1PBonusPlayersSlot.p_sfx = NULL;
	sMN1PBonusPlayersSlot.sfx_id = 0;
	sMN1PBonusPlayersSlot.is_selected = FALSE;
	sMN1PBonusPlayersSlot.is_recalling = FALSE;
	sMN1PBonusPlayersSlot.fkind = nFTKindNull;
}

// 0x80136B54
void mn1PBonusPlayersInitVars(void)
{
	sMN1PBonusPlayersTotalTimeTics = 0;
	sMN1PBonusPlayersReturnTic = sMN1PBonusPlayersTotalTimeTics + I_MIN_TO_TICS(5);
	sMN1PBonusPlayersUnknown0x801376D4 = 5;
	sMN1PBonusPlayersIsSelected = FALSE;
	sMN1PBonusPlayersManPlayer = gSCManagerSceneData.player;
	sMN1PBonusPlayersTotalTimeGObj = NULL;
	sMN1PBonusPlayersIsTeamBattle = gSCManager1PGameBattleState.is_team_battle;
	sMN1PBonusPlayersGameRules = gSCManager1PGameBattleState.game_rules;

	mn1PBonusPlayersInitPlayer();

	sMN1PBonusPlayersSlot.recall_end_tic = 0;
	sMN1PBonusPlayersFighterMask = gSCManagerBackupData.fighter_mask;

	if (gSCManagerSceneData.scene_curr == nSCKind1PBonus1Players)
	{
		sMN1PBonusPlayersBonusKind = 0;
	}
	else sMN1PBonusPlayersBonusKind = 1;
}

// 0x80136C14
void mn1PBonusPlayersInitPanel(s32 player)
{
	if (sMN1PBonusPlayersDevicesConnected[player] != -1)
	{
		mn1PBonusPlayersMakeCursor(player);
	}
	else sMN1PBonusPlayersSlot.cursor = NULL;

	mn1PBonusPlayersMakePuck(player);
	mn1PBonusPlayersMakeGate(player);
	mn1PBonusPlayersResetPlayer(player);
}

// 0x80136C80 - Unused?
void func_ovl29_80136C80(void)
{
	return;
}

// 0x80136C88
sb32 mn1PBonusPlayersCheckBonusCompleteAll(void)
{
	s32 i;

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		if (mn1PBonusPlayersCheckBonusComplete(i) == FALSE)
		{
			return FALSE;
		}
	}
	return TRUE;
}

// 0x80136CD8
void mn1PBonusPlayersFuncStart(void)
{
	s32 unused1[2];
	LBRelocSetup rl_setup;
	s32 unused2;
	s32 i, j;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = sMN1PBonusPlayersStatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(sMN1PBonusPlayersStatusBuffer);
	rl_setup.force_status_buffer = sMN1PBonusPlayersForceStatusBuffer;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(sMN1PBonusPlayersForceStatusBuffer);

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern
	(
		dMN1PBonusPlayersFileIDs,
		ARRAY_COUNT(dMN1PBonusPlayersFileIDs),
		sMN1PBonusPlayersFiles,
		syTaskmanMalloc
		(
			lbRelocGetAllocSize
			(
				dMN1PBonusPlayersFileIDs,
				ARRAY_COUNT(dMN1PBonusPlayersFileIDs)
			),
			0x10
		)
	);
	gcMakeGObjSPAfter(nGCCommonKindPlayerSelect, mn1PBonusPlayersProcRun, nGCCommonLinkIDPlayerSelect, GOBJ_PRIORITY_DEFAULT);
	gcMakeDefaultCameraGObj(16, GOBJ_PRIORITY_DEFAULT, 100, COBJ_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0x00));
	efParticleInitAll();
	efManagerInitEffects();
	ftManagerAllocFighter(FTDATA_FLAG_SUBMOTION, 1);

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		ftManagerSetupFilesAllKind(i);
	}
	sMN1PBonusPlayersFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);

	mn1PBonusPlayersInitVars();
	mn1PBonusPlayersMakePortraitCamera();
	mn1PBonusPlayersMakeCursorViewport();
	mn1PBonusPlayersCreateDroppedPuckViewport();
	mn1PBonusPlayersMakeGateCamera();
	mn1PBonusPlayersMakeFighterCamera();
	mn1PBonusPlayersMakePortraitWallpaperCamera();
	mn1PBonusPlayersMakePortraitFlashCamera();
	mn1PBonusPlayersMakeWallpaperCamera();
	mn1PBonusPlayersMakeLabelsCamera();
	mn1PBonusPlayersCreateReadyToFightViewport();
	mn1PBonusPlayersMakeWallpaper();
	mn1PBonusPlayersMakePortraitAll();
	mn1PBonusPlayersInitPanel(sMN1PBonusPlayersManPlayer);
	mn1PBonusPlayersMakeLabels();

	if (mn1PBonusPlayersCheckBonusCompleteAll())
	{
		mn1PBonusPlayersMakeTotalTime();
	}
	mn1PBonusPlayersMakePuckAutopositionRoutine();
	mn1PBonusPlayersCreateWhiteCircles();
	mn1PBonusPlayersCreateReadyToFightObjects();
	scSubsysFighterSetLightParams(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

	if (gSCManagerSceneData.scene_prev != nSCKindMaps)
	{
		syAudioPlaySong(0, nSYAudioBGMBattleSelect);
	}
}

// 0x80137530
SYVideoSetup dMN1PBonusPlayersVideoSetup = SYVIDEO_SETUP_DEFAULT();

// 0x8013754C
SYTaskmanSetup dMN1PBonusPlayersTaskmanSetup =
{
    // Task Manager Buffer Setup
    {
        0,                          // ???
        gcRunAll,              		// Update function
        gcDrawAll,        			// Frame draw function
        &ovl29_BSS_END,             // Allocatable memory pool start
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
        mn1PBonusPlayersFuncLights, // Pre-render function
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
    
    mn1PBonusPlayersFuncStart      	// Task start function
};

// 0x80136EF4
void mn1PBonusPlayersStartScene(void)
{
	dMN1PBonusPlayersVideoSetup.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&dMN1PBonusPlayersVideoSetup);

	dMN1PBonusPlayersTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl29_BSS_END);
	syTaskmanRun(&dMN1PBonusPlayersTaskmanSetup);
}
