#ifndef _MNVSRECORD_H_
#define _MNVSRECORD_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern void mnVSRecordFuncLights(Gfx **dls);
extern s32 mnVSRecordGetFighterKindByIndex(s32 index);
extern s32 mnVSRecordGetKOs(s32 fkind);
extern s32 mnVSRecordGetTKO(s32 fkind);
extern s32 mnVSRecordGetTotalTKO();
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
extern s32 mnVSRecordGetCharacterID(const char c);
extern f32 mnVSRecordGetCharacterSpacing(const char *str, s32 c);
extern void mnVSRecordMakeString(GObj *gobj, const char *str, f32 x, f32 y, u32 *color);
extern sb32 mnVSRecordCheckHaveFighterKind(s32 fkind);
extern void mnVSRecordMakeLabels();
extern void mnVSRecordSubtitleProcUpdate(GObj *gobj);
extern void mnVSRecordMakeSubtitle();
extern void mnVSRecordPortraitArrowsProcUpdate(GObj *gobj);
extern void mnVSRecordMakePortraitStatsArrows();
extern void mnVSRecordResortArrowsProcUpdate(GObj *gobj);
extern void mnVSRecordMakeResortArrows();
extern void mnVSRecordColumnArrowsProcUpdate(GObj *gobj);
extern void mnVSRecordMakeColumnArrows();
extern void mnVSRecordDrawBattleScoreGrid();
extern void mnVSRecordDrawRankingGrid(s32 first_column);
extern void mnVSRecordDrawIndivGrid();
extern void mnVSRecordTableGridProcDisplay(GObj *gobj);
extern void mnVSRecordMakeStatsGrid();
extern void mnVSRecordSetIconPositionForColumn(SObj *sobj, s32 column);
extern SObj* mnVSRecordMakeLockedIcon(GObj *gobj);
extern void mnVSRecordMakeColumnIcons(GObj *gobj);
extern void mnVSRecordSetRowIconPosition(SObj *sobj, s32 row);
extern void mnVSRecordMakeRowIcons(GObj *gobj);
extern s32 mnVSRecordGetRanking(s32 fkind);
extern void mnVSRecordMakePortraitStats(GObj *gobj, s32 fkind);
extern void mnVSRecordSortData(s32 stats_kind);
extern GObj* mnVSRecordMakeBattleScoreTableValues();
extern GObj* mnVSRecordMakeBattleScoreTableHeaders();
extern void mnVSRecordRankingHighlightProcDisplay(GObj *gobj);
extern void mnVSRecordMakeRankingHighlight();
extern f32 mnVSRecordGetAvg(s32 fkind);
extern s32 mnVSRecordGetGamesPlayedSum();
extern f32 mnVSRecordGetUsePercent(s32 fkind);
extern f32 mnVSRecordGetSDPercent(s32 fkind);
extern GObj* mnVSRecordMakeRankingTableValues(s32 column);
extern GObj* mnVSRecordMakeRankingTableHeaders(s32 column);
extern f32 mnVSRecordGetWinPercentAgainst(s32 this_fkind, s32 against_fkind);
extern f32 mnVSRecordGetAvgAgainst(s32 this_fkind, s32 against_fkind);
extern GObj* mnVSRecordMakeIndivTableValues();
extern GObj* mnVSRecordMakeIndivPortraitAll();
extern void mnVSRecordMakeStats(s32 stats_kind);
extern void mnVSRecordMakeTableValuesCamera();
extern void mnVSRecordMakeTableHeadersCamera();
extern void mnVSRecordMakeTableGridCamera();
extern void mnVSRecordMakeRankingHighlightCamera();
extern void mnVSRecordMakeLabelsCamera();
extern void mnVSRecordInitVars();
extern void mnVSRecordRedrawStats(s32 stats_kind);
extern void mnVSRecordFuncRun(GObj *gobj);
extern void mnVSRecordFuncStart();
extern void mnVSRecordStartScene();

#endif
