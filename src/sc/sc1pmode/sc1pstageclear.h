#ifndef _SC1PSTAGECLEAR_H_
#define _SC1PSTAGECLEAR_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <PR/sp.h>
#include <sc/scdef.h>

extern void sc1PStageClearFuncLights(Gfx **dls);
extern s32 sc1PStageClearGetPowerOf(s32 base, s32 exp);
extern void sc1PStageClearSetDigitSpriteColors(SObj *sobj, s32 digit_kind, SYColorRGBPair *colors_base);
extern s32 sc1PStageClearGetScoreDigitCount(s32 points, s32 digit_count_max);
extern Sprite* sc1PStageClearGetScoreDigitSprite(s32 digit_kind, s32 digit);
extern void sc1PStageClearMakeScoreDigits
(
	GObj *gobj,
	s32 points,
	f32 x,
	f32 y,
	SYColorRGBPair *colors,
	s32 offset_x,
	s32 digit_kind,
	s32 sub,
	s32 digit_count_max,
	sb32 is_fixed_digit_count
);
extern void sc1PStageClearTextProcDisplay(GObj *gobj);
extern void sc1PStageClearMakeTextSObjs();
extern void sc1PStageClearMakeScoreSObjs();
extern void sc1PStageClearMakeTimerTextSObjs(f32 y);
extern void sc1PStageClearMakeTimerDigits(f32 y);
extern s32 sc1PStageClearGetAppendTotalTimeScore(f32 y);
extern void sc1PStageClearMakeDamageTextSObjs(f32 y);
extern void sc1PStageClearMakeDamageDigits(f32 y);
extern s32 sc1PStageClearGetAppendTotalDamageScore(f32 y);
extern void sc1PStageClearMakeTargetTextSObjs();
extern void func_ovl56_80132DC0(GObj *gobj);
extern void func_ovl56_80132E40(f32 x, f32 y, s32 objective_num);
extern void func_ovl56_80132F78();
extern SC1PStageClearStats* sc1PStageClearSetupBonusStats(SC1PStageClearStats *bonus_setup, s32 bonus_id);
extern sb32 sc1PStageClearCheckHaveBonusStats();
extern sb32 sc1PStageClearCheckGameClearBonus(s32 bonus_id);
extern s32 sc1PStageClearGetNoMissMultiplier(s32 stage);
extern void sc1PStageClearCommonProcUpdate(GObj *gobj);
extern s32 sc1PStageClearGetAppendBonusStatPoints(s32 bonus_id, s32 bonus_num, f32 x, f32 y);
extern void sc1PStageClearMakeBonusPageArrow();
extern sb32 sc1PStageClearCheckHaveBonusStatID(s32 bonus_id);
extern s32 sc1PStageClearGetUpdateBonusStatPointsAll();
extern void sc1PStageClearMakeBonusTable();
extern void sc1PStageClearWallpaperProcDisplay(GObj *gobj);
extern void sc1PStageClearMakeWallpaper();
extern void sc1PStageClearMakeTextCamera();
extern void sc1PStageClearMakeWallpaperCamera();
extern void sc1PStageClearInitVars();
extern void sc1PStageClearUpdateTotal1PGameScore();
extern void sc1PStageClearUpdateBonusScore();
extern sb32 sc1PStageClearCheckNoTimer();
extern void sc1PStageUpdateBonusStatAll();
extern void sc1PStageClearUpdateGameClearScore();
extern void sc1PStageClearUpdateStageClearScore();
extern void sc1PStageClearUpdateResultScore();
extern void sc1PStageClearFuncRun(GObj *gobj);
extern void sc1PStageClearCopyFramebufToWallpaper();
extern void sc1PStageClearFuncStart();
extern void sc1PStageClearStartScene();

#endif
