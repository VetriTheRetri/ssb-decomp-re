#ifndef _MNVSRESULTS_H_
#define _MNVSRESULTS_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern u32 lMNVSResultsFileID;						// 0x00000022

extern intptr_t lMNVSResults1PArrowSprite;			// 0x000049E8
extern intptr_t lMNVSResults2PArrowSprite;			// 0x00004B08
extern intptr_t lMNVSResults3PArrowSprite;			// 0x00004C28
extern intptr_t lMNVSResults4PArrowSprite;			// 0x00004D48
extern intptr_t lMNVSResultsLabelTKOSprite;         // file 0x022 image offset for TKO texture
extern intptr_t lMNVSResultsLabePlaceSprite;        // file 0x022 image offset for Place texture
extern intptr_t lMNVSResultsLabePointsSprite;       // file 0x022 image offset for Pts texture
extern intptr_t lMNVSResultsLabelKOsSprite;         // file 0x022 image offset for KOs texture
extern intptr_t lMNVSResultsWallpaperSprite;        // file 0x022 image offset for background image
extern intptr_t lMNVSResultsWinnerSprite;           // file 0x022 image offset for 1st place icon

extern void mnVSResultsFuncLights(Gfx **dls);
extern s32 mnVSResultsGetPlayerCount(void);
extern void mnVSResultsSaveBackup(void);
extern sb32 mnVSResultsCheckExit(void);
extern void mnVSResultsAnnounceWinner(void);
extern s32 mnVSResultsGetPresentCount(void);
extern s32 mnVSResultsGetPresentLowerCount(s32 player);
extern s32 mnVSResultsGetPlacePlayer(s32 place);
extern s32 mnVSResultsGetPlayerDistanceID(s32 player);
extern s32 mnVSResultsGetWinPlayer(void);
extern u8 mnVSResultsGetWinTeam(void);
extern void mnVSResultsEmblemProcUpdate(GObj *gobj);
extern void mnVSResultsMakeEmblem(void);
extern void mnVSResultsWallpaperProcDisplay(GObj *gobj);
extern void mnVSResultsMakeWallpaper(void);
extern s32 mnVSResultsGetPlace(s32 player);
extern s32 mnVSResultsGetFighterKind(s32 player);
extern void mnVSResultsSetFighterKindAll(void);
extern void mnVSResultsSetFighterPosition(GObj* fighter_gobj, s32 player, s32 place);
extern void mnVSResultsFaceWinner(GObj *fighter_gobj, s32 player, s32 place);
extern s32 mnVSResultsGetStatusWin(s32 fkind);
extern s32 mnVSResultsGetStatusLose(s32 fkind);
extern void mnVSResultsSetFighterStatus(GObj *fighter_gobj, s32 player);
extern s32 mnVSResultsGetPlayerCountPlace(s32 place);
extern s32 mnVSResultsGetPlayerCountAhead(s32 player);
extern s32 mnVSResultsGetSpot(s32 player);
extern void mnVSResultsSetFighterScale(GObj *fighter_gobj, s32 player, s32 fkind, s32 place);
extern void mnVSResultsMakeFighter(s32 player);
extern void mnVSResultsSetPlayerTagPosition(GObj *gobj, s32 player);
extern void mnVSResultsMakePlayerTag(s32 player, s32 color_id);
extern void mnVSResultsMakePlayerTagCamera(void);
extern s32 mnVSResultsGetCharacterID(char c);
extern void mnVSResultsMakeString(const char *str, f32 x, f32 y, s32 color_id, f32 scale);
extern void mnVSResultsMakeWinnerText(s32 winner);
extern s32 mnVSResultGetWinFighterKind(void);
extern void mnVSResultMakeFighterName(void);
extern void mnVSResultMakeTeamName(void);
extern void mnVSResultMakeNoContestText(void);
extern void mnVSResultsMakeResultsText(void);
extern void mnVSResultsMakeResultsTextCamera(void);
extern s32 mnVSResultsGetHundredsDigit(s32 number);
extern s32 mnVSResultsGetTensDigit(s32 number);
extern s32 mnVSResultsGetOnesDigit(s32 number);
extern void mnVSResultsSetNumberColor(SObj *sobj, s32 color_id);
extern SObj* mnVSResultsMakeDigit(GObj *gobj, s32 digit, s32 color_id);
extern SObj* mnVSResultsMakePlaceNumber(GObj *gobj, s32 player, s32 place, s32 color_id);
extern SObj* mnVSResultsMakeNumber(GObj *gobj, f32 x, f32 y, s32 number, s32 color_id);
extern void mnVSResultsTintProcDisplay(GObj *gobj);
extern void mnVSResultsMakeTint(void);
extern void mnVSResultsMakeTintCamera(void);
extern void mnVSResultsWallpaperTintProcDisplay(GObj *gobj);
extern void mnVSResultsMakeWallpaperTint(void);
extern void mnVSResultsMakeWallpaperTintCamera(void);
extern void mnVSResultsWallpaperTint2ProcDisplay(GObj *gobj);
extern void mnVSResultsMakeWallpaperTint2(void);
extern void mnVSResultsMakeWallpaperTint2Camera(void);
extern f32 mnVSResultsGetColumnX(s32 player);
extern s32 mnVSResultsGetNumberColorID(s32 player);
extern void mnVSResultsSetPlayerArrowColors(SObj *sobj);
extern void mnVSResultsMakeHeader(void);
extern s32 mnVSResultsGetKOs(s32 player);
extern void mnVSResultsMakeKOs(s32 y);
extern s32 mnVSResultsGetTKO(s32 player);
extern void mnVSResultsMakeTKO(s32 y);
extern void mnVSResultsBarProcDisplay(GObj *gobj);
extern void mnVSResultsMakeBar(s32 y);
extern s32 mnVSResultsGetPoints(s32 player);
extern void mnVSResultsMakePointsRow(void);
extern void mnVSResultsSetPlacePosition(SObj *sobj, s32 player, s32 place, f32 y);
extern s32 mnVSResultsGetDisplayPlace(s32 player);
extern void mnVSResultsMakePlaceRow(s32 y);
extern void mnVSResultsDrawResultsTimeRoyal(GObj *gobj);
extern void mnVSResultsDrawResultsStockRoyal(GObj *gobj);
extern void mnVSResultsDrawResultsTimeTeam(GObj *gobj);
extern void mnVSResultsDrawResultsStockTeam(GObj *gobj);
extern void mnVSResultsDrawResultsNoContest(GObj *gobj);
extern u8 mnVSResultsCheckTeamBattle(void);
extern void mnVSResultsLabelProcDisplay(GObj *gobj);
extern void mnVSResultsMakeLabel(void);
extern void mnVSResultsMakeHeaderCamera(void);
extern void mnVSResultsMakeEmblemCamera(void);
extern void mnVSResultsMakeFighterCamera(void);
extern void mnVSResultsSetKOs(void);
extern void mnVSResultsSetTKO(void);
extern void mnVSResultsSetPoints(void);
extern s32 mnVSResultsGetPointsDirect(s32 player);
extern void mnVSResultsOrderResults(MNVSResultsScore *results, s32 players_num);
extern void mnVSResultsSetRoyalPlace(void);
extern s32 mnVSResultsGetTeamTotalPoints(s32 team);
extern void mnVSResultsSetTeamPlace(s32 team, s32 place);
extern s32 mnVSResultsGetTeamFirstPlayer(s32 team);
extern void mnVSResultsSetTeamPlaceAll(void);
extern void mnVSResultsSetPlaceTime(void);
extern void mnVSResultsSetPlaceStock(void);
extern void mnVSResultsInitRankings(void);
extern void mnVSResultsSetIsPresent(void);
extern void mnVSResultsInitFighter(s32 player);
extern void mnVSResultsInitFightersAll(void);
extern void mnVSResultsInitVars(void);
extern void mnVSResultsAudioThreadUpdate(GObj *gobj);
extern void mnVSResultsMakeAudioThread(void);
extern void func_ovl31_80137898(GObj *gobj);
extern void func_ovl31_80137938(void);
extern void func_ovl31_8013797C(void);
extern s32 mnVSResultsGetManCount(void);
extern s32 mnVSResultsGetBestMan(void);
extern s32 mnVSResultsGetBestManExcept(s32 player);
extern s32 mnVSResultsGetWorstMan(void);
extern void mnVSResultsSetAutoHandicaps(s32 best, s32 worst);
extern void mnVSResultsUpdateAutoHandicap(void);
extern void mnVSResultsPlayWinBGM(void);
extern void mnVSResultsMakeConfetti(void);
extern void mnVSResultsProcRun(GObj *gobj);
extern void mnVSResultsFuncStart(void);
extern void mnVSResultsStartScene(void);

#endif
