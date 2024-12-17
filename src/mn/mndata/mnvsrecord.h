#ifndef _MNVSRECORD_H_
#define _MNVSRECORD_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern u32 lMNVSRecordMainFileID;						// 0x0000001F
extern u32 lMNVSRecordFontsFileID;						// 0x00000021

extern intptr_t lMNVSRecordMainDigit0Sprite;			// 0x000002F0
extern intptr_t lMNVSRecordMainDigit1Sprite;			// 0x00000390
extern intptr_t lMNVSRecordMainDigit2Sprite;			// 0x00000430
extern intptr_t lMNVSRecordMainDigit3Sprite;			// 0x000004D0
extern intptr_t lMNVSRecordMainDigit4Sprite;			// 0x00000570
extern intptr_t lMNVSRecordMainDigit5Sprite;			// 0x00000610
extern intptr_t lMNVSRecordMainDigit6Sprite;			// 0x000006B0
extern intptr_t lMNVSRecordMainDigit7Sprite;			// 0x00000750
extern intptr_t lMNVSRecordMainDigit8Sprite;			// 0x000007F0
extern intptr_t lMNVSRecordMainDigit9Sprite;			// 0x00000890

extern intptr_t lMNVSRecordFontsLetterASprite;			// 0x00000040
extern intptr_t lMNVSRecordFontsLetterBSprite;			// 0x000000D0
extern intptr_t lMNVSRecordFontsLetterCSprite;			// 0x00000160
extern intptr_t lMNVSRecordFontsLetterDSprite;			// 0x000001F0
extern intptr_t lMNVSRecordFontsLetterESprite;			// 0x00000280
extern intptr_t lMNVSRecordFontsLetterFSprite;			// 0x00000310
extern intptr_t lMNVSRecordFontsLetterGSprite;			// 0x000003A0
extern intptr_t lMNVSRecordFontsLetterHSprite;			// 0x00000430
extern intptr_t lMNVSRecordFontsLetterISprite;			// 0x000004C0
extern intptr_t lMNVSRecordFontsLetterJSprite;			// 0x00000550
extern intptr_t lMNVSRecordFontsLetterKSprite;			// 0x000005E0
extern intptr_t lMNVSRecordFontsLetterLSprite;			// 0x00000670
extern intptr_t lMNVSRecordFontsLetterMSprite;			// 0x00000700
extern intptr_t lMNVSRecordFontsLetterNSprite;			// 0x00000790
extern intptr_t lMNVSRecordFontsLetterOSprite;			// 0x00000820
extern intptr_t lMNVSRecordFontsLetterPSprite;			// 0x000008B0
extern intptr_t lMNVSRecordFontsLetterQSprite;			// 0x00000940
extern intptr_t lMNVSRecordFontsLetterRSprite;			// 0x000009D0
extern intptr_t lMNVSRecordFontsLetterSSprite;			// 0x00000A60
extern intptr_t lMNVSRecordFontsLetterTSprite;			// 0x00000AF0
extern intptr_t lMNVSRecordFontsLetterUSprite;			// 0x00000B80
extern intptr_t lMNVSRecordFontsLetterVSprite;			// 0x00000C10
extern intptr_t lMNVSRecordFontsLetterWSprite;			// 0x00000CA0
extern intptr_t lMNVSRecordFontsLetterXSprite;			// 0x00000D30
extern intptr_t lMNVSRecordFontsLetterYSprite;			// 0x00000DC0
extern intptr_t lMNVSRecordFontsLetterZSprite;			// 0x00000E50
extern intptr_t lMNVSRecordFontsSymbolApostropheSprite;	// 0x00000ED0
extern intptr_t lMNVSRecordFontsSymbolPercentSprite;	// 0x00000F60
extern intptr_t lMNVSRecordFontsSymbolPeriodSprite;		// 0x00000FD0

extern intptr_t lMNVSRecordMainMarioIconBWSprite;		// 0x00001918
extern intptr_t lMNVSRecordMainFoxIconBWSprite;			// 0x00001A98
extern intptr_t lMNVSRecordMainDonkeyIconBWSprite;		// 0x00001CA8
extern intptr_t lMNVSRecordMainSamusIconBWSprite;		// 0x00001E88
extern intptr_t lMNVSRecordMainLuigiIconBWSprite;		// 0x00002008
extern intptr_t lMNVSRecordMainLinkIconBWSprite;		// 0x00002370
extern intptr_t lMNVSRecordMainYoshiIconBWSprite;		// 0x00002178
extern intptr_t lMNVSRecordMainCaptainIconBWSprite;		// 0x00002540
extern intptr_t lMNVSRecordMainKirbyIconBWSprite;		// 0x00002930
extern intptr_t lMNVSRecordMainPikachuIconBWSprite;		// 0x00002B30
extern intptr_t lMNVSRecordMainPurinIconBWSprite;		// 0x000027C8
extern intptr_t lMNVSRecordMainNessIconBWSprite;		// 0x00002698

extern intptr_t lMNVSRecordMainMarioIconColorSprite;	// 0x00002D18
extern intptr_t lMNVSRecordMainFoxIconColorSprite;		// 0x00002EF8
extern intptr_t lMNVSRecordMainDonkeyIconColorSprite;	// 0x00003198
extern intptr_t lMNVSRecordMainSamusIconColorSprite;	// 0x00003438
extern intptr_t lMNVSRecordMainLuigiIconColorSprite;	// 0x00003618
extern intptr_t lMNVSRecordMainLinkIconColorSprite;		// 0x00003A38
extern intptr_t lMNVSRecordMainYoshiIconColorSprite;	// 0x000037F8
extern intptr_t lMNVSRecordMainCaptainIconColorSprite;	// 0x00003CD8
extern intptr_t lMNVSRecordMainKirbyIconColorSprite;	// 0x00004308
extern intptr_t lMNVSRecordMainPikachuIconColorSprite;	// 0x000045A8
extern intptr_t lMNVSRecordMainPurinIconColorSprite;	// 0x00004098
extern intptr_t lMNVSRecordMainNessIconColorSprite;		// 0x00003EB8

extern intptr_t lMNVSRecordMainLabelWinPercentSprite;	// 0x00000A08
extern intptr_t lMNVSRecordMainLabelKOsSprite;			// 0x00000AF8
extern intptr_t lMNVSRecordMainLabelTKOSprite;			// 0x00000BE8
extern intptr_t lMNVSRecordMainLabelSDPercentSprite;	// 0x00000CD8
extern intptr_t lMNVSRecordMainLabelTimeSprite;			// 0x00000E10
extern intptr_t lMNVSRecordMainLabelUsePercentSprite;	// 0x00000F08
extern intptr_t lMNVSRecordMainLabelAvgSprite;			// 0x00001008
extern intptr_t lMNVSRecordMainLabelKOdSprite;			// 0x00001140

extern intptr_t lMNVSRecordMainQuestionSprite;          // 0x00000070
extern intptr_t lMNVSRecordMainLabelTotalSprite;        // 0x00000258
extern intptr_t lMNVSRecordMainSymbolPointSprite;       // 0x00000910
extern intptr_t lMNVSRecordMainSymbolSlashSprite;       // 0x000011D0
extern intptr_t lMNVSRecordMainBattleScoreSprite;       // 0x000015D0
extern intptr_t lMNVSRecordMainDownArrowsSprite;        // 0x00001668
extern intptr_t lMNVSRecordMainSideArrowsSprite;        // 0x000017A8
extern intptr_t lMNVSRecordMainPortraitWallpaperSprite; // 0x00004D30
extern intptr_t lMNVSRecordMainLabelSprite;				// 0x00005428
extern intptr_t lMNVSRecordMainSymbolColonSprite;       // 0x000054C0

extern void mnVSRecordFuncLights(Gfx **dls);
extern s32 mnVSRecordGetFighterKindByIndex(s32 index);
extern s32 mnVSRecordGetKOs(s32 fkind);
extern s32 mnVSRecordGetTKO(s32 fkind);
extern s32 mnVSRecordGetTotalTKO(void);
extern f32 mnVSRecordGetWinPercent(s32 fkind);
extern s32 mnVSRecordGetPowerOf(s32 base, s32 exp);
extern void mnVSRecordSetSpriteColors(SObj *sobj, u32 *colors);
extern s32 mnVSRecordGetDigitCount(s32 number, s32 digit_count_max);
extern void mnVSRecordMakeDigits
(
    GObj *gobj,
    s32 number,
    f32 x,
    f32 y,
    u32 *colors,
    sb32 is_show_tenths,
    sb32 is_wide,
    s32 digit_count_max,
    sb32 is_fixed_digit_count
);
extern s32 mnVSRecordGetCharacterID(u8 c);
extern f32 mnVSRecordGetCharacterSpacing(const char *str, s32 c);
extern void mnVSRecordMakeString(GObj *gobj, const char *str, f32 x, f32 y, u32 *color);
extern sb32 mnVSRecordCheckHaveFighterKind(s32 fkind);
extern void mnVSRecordMakeLabels(void);
extern void mnVSRecordSubtitleProcUpdate(GObj *gobj);
extern void mnVSRecordMakeSubtitle(void);
extern void mnVSRecordPortraitArrowsProcUpdate(GObj *gobj);
extern void mnVSRecordMakePortraitStatsArrows(void);
extern void mnVSRecordResortArrowsProcUpdate(GObj *gobj);
extern void mnVSRecordMakeResortArrows(void);
extern void mnVSRecordColumnArrowsProcUpdate(GObj *gobj);
extern void mnVSRecordMakeColumnArrows(void);
extern void mnVSRecordDrawBattleScoreGrid(void);
extern void mnVSRecordDrawRankingGrid(s32 first_column);
extern void mnVSRecordDrawIndivGrid(void);
extern void mnVSRecordTableGridFuncDisplay(GObj *gobj);
extern void mnVSRecordMakeStatsGrid(void);
extern void mnVSRecordSetIconPositionForColumn(SObj *sobj, s32 column);
extern SObj* mnVSRecordMakeLockedIcon(GObj *gobj);
extern void mnVSRecordMakeColumnIcons(GObj *gobj);
extern void mnVSRecordSetRowIconPosition(SObj *sobj, s32 row);
extern void mnVSRecordMakeRowIcons(GObj *gobj);
extern s32 mnVSRecordGetRanking(s32 fkind);
extern void mnVSRecordMakePortraitStats(GObj *gobj, s32 fkind);
extern void mnVSRecordSortData(s32 stats_kind);
extern GObj* mnVSRecordMakeBattleScoreTableValues(void);
extern GObj* mnVSRecordMakeBattleScoreTableHeaders(void);
extern void mnVSRecordRankingHighlightFuncDisplay(GObj *gobj);
extern void mnVSRecordMakeRankingHighlight(void);
extern f32 mnVSRecordGetAvg(s32 fkind);
extern s32 mnVSRecordGetGamesPlayedSum(void);
extern f32 mnVSRecordGetUsePercent(s32 fkind);
extern f32 mnVSRecordGetSDPercent(s32 fkind);
extern GObj* mnVSRecordMakeRankingTableValues(s32 column);
extern GObj* mnVSRecordMakeRankingTableHeaders(s32 column);
extern f32 mnVSRecordGetWinPercentAgainst(s32 this_fkind, s32 against_fkind);
extern f32 mnVSRecordGetAvgAgainst(s32 this_fkind, s32 against_fkind);
extern GObj* mnVSRecordMakeIndivTableValues(void);
extern GObj* mnVSRecordMakeIndivPortraitAll(void);
extern void mnVSRecordMakeStats(s32 stats_kind);
extern void mnVSRecordMakeTableValuesCamera(void);
extern void mnVSRecordMakeTableHeadersCamera(void);
extern void mnVSRecordMakeTableGridCamera(void);
extern void mnVSRecordMakeRankingHighlightCamera(void);
extern void mnVSRecordMakeLabelsCamera(void);
extern void mnVSRecordInitVars(void);
extern void mnVSRecordRedrawStats(s32 stats_kind);
extern void mnVSRecordFuncRun(GObj *gobj);
extern void mnVSRecordFuncStart(void);
extern void mnVSRecordStartScene(void);

#endif
