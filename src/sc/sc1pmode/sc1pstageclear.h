#ifndef _SC1PSTAGECLEAR_H_
#define _SC1PSTAGECLEAR_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <PR/sp.h>
#include <sc/scdef.h>

// Digit sprites used for timer and damage points
extern intptr_t lSC1PStageClearTimerDamageDigit0;	      	// 0x0000B808
extern intptr_t lSC1PStageClearTimerDamageDigit1;			// 0x0000B968
extern intptr_t lSC1PStageClearTimerDamageDigit2;			// 0x0000BAC8
extern intptr_t lSC1PStageClearTimerDamageDigit3;			// 0x0000BC28
extern intptr_t lSC1PStageClearTimerDamageDigit4;			// 0x0000BD88
extern intptr_t lSC1PStageClearTimerDamageDigit5;			// 0x0000BEE8
extern intptr_t lSC1PStageClearTimerDamageDigit6;			// 0x0000C048
extern intptr_t lSC1PStageClearTimerDamageDigit7;			// 0x0000C1A8
extern intptr_t lSC1PStageClearTimerDamageDigit8;			// 0x0000C308
extern intptr_t lSC1PStageClearTimerDamageDigit9;			// 0x0000C468

// Digit sprites used for bonus stat points
extern intptr_t lSC1PStageClearBonusStatDigit0;				// 0x00000068
extern intptr_t lSC1PStageClearBonusStatDigit1;				// 0x00000118
extern intptr_t lSC1PStageClearBonusStatDigit2;				// 0x000001C8
extern intptr_t lSC1PStageClearBonusStatDigit3;				// 0x00000278
extern intptr_t lSC1PStageClearBonusStatDigit4;				// 0x00000328
extern intptr_t lSC1PStageClearBonusStatDigit5;				// 0x000003D8
extern intptr_t lSC1PStageClearBonusStatDigit6;				// 0x00000488
extern intptr_t lSC1PStageClearBonusStatDigit7;				// 0x00000538
extern intptr_t lSC1PStageClearBonusStatDigit8;				// 0x000005E8
extern intptr_t lSC1PStageClearBonusStatDigit9;				// 0x00000698

// Digit sprites uesd for total score points
extern intptr_t lSC1PStageClearScoreDigit0;					// 0x00000148
extern intptr_t lSC1PStageClearScoreDigit1;					// 0x000002D8
extern intptr_t lSC1PStageClearScoreDigit2;					// 0x00000500
extern intptr_t lSC1PStageClearScoreDigit3;					// 0x00000698
extern intptr_t lSC1PStageClearScoreDigit4;					// 0x000008C0
extern intptr_t lSC1PStageClearScoreDigit5;					// 0x00000A58
extern intptr_t lSC1PStageClearScoreDigit6;					// 0x00000C80
extern intptr_t lSC1PStageClearScoreDigit7;					// 0x00000E18
extern intptr_t lSC1PStageClearScoreDigit8;					// 0x00001040
extern intptr_t lSC1PStageClearScoreDigit9;					// 0x00001270

extern intptr_t lSC1PStageClearPlatform;            	    // 0x000000C0
extern intptr_t lSC1PStageClearTarget;                      // 0x000001D0
extern intptr_t lSC1PStageClearTextScore;                   // 0x00000408
extern intptr_t lSC1PStageClearPointsNSign;                 // 0x00000710
extern intptr_t lSC1PStageClearBonusMultiplySign;           // 0x00000828
extern intptr_t lSC1PStageClearBonusColon;                  // 0x000008D8
extern intptr_t lSC1PStageClearTextStage;                   // 0x000009D8
extern intptr_t lSC1PStageClearTextMultiplySign;            // 0x00001018
extern intptr_t lSC1PStageClearTextGame;                    // 0x00001338
extern intptr_t lSC1PStageClearTextClear;                   // 0x00001D58
extern intptr_t lSC1PStageClearTextSpecialBonus;            // 0x00002060
extern intptr_t lSC1PStageClearTextColon;                   // 0x00002120
extern intptr_t lSC1PStageClearTextTimer;                   // 0x000025E8
extern intptr_t lSC1PStageClearTextDamage;                  // 0x00002B48
extern intptr_t lSC1PStageClearBonusBorder;                 // 0x0000A4B8
extern intptr_t lSC1PStageClearTextResult;                  // 0x0000AF98
extern intptr_t lSC1PStageClearTextTarget;                  // 0x0000B4F8
extern intptr_t sSC1PStageClearSpriteBonusPageArrow;        // 0x0000B6A8
extern intptr_t lSC1PStageClearTextShadow;                  // 0x0000D1C8
extern intptr_t lSC1PStageClearTextBonus;                   // 0x0000D340

// Bonus stat text sprites
extern intptr_t lSC1PStageClearBonusCheapShot;              // 0x0000D528
extern intptr_t lSC1PStageClearBonusStarFinish;             // 0x0000D708
extern intptr_t lSC1PStageClearBonusNoItem;                 // 0x0000D8E8
extern intptr_t lSC1PStageClearBonusShieldBreaker;          // 0x0000DAC8
extern intptr_t lSC1PStageClearBonusJudoWarrior;            // 0x0000DCA8
extern intptr_t lSC1PStageClearBonusHawk;                   // 0x0000DE88
extern intptr_t lSC1PStageClearBonusShooter;                // 0x0000E068
extern intptr_t lSC1PStageClearBonusHeavyDamage;            // 0x0000E248
extern intptr_t lSC1PStageClearBonusAllVariations;          // 0x0000E428
extern intptr_t lSC1PStageClearBonusItemStrike;             // 0x0000E608
extern intptr_t lSC1PStageClearBonusDoubleKO;               // 0x0000E7E8
extern intptr_t lSC1PStageClearBonusTrickster;              // 0x0000E9C8
extern intptr_t lSC1PStageClearBonusGiantImpact;            // 0x0000EBA8
extern intptr_t lSC1PStageClearBonusSpeedster;              // 0x0000ED88
extern intptr_t lSC1PStageClearBonusItemThrow;              // 0x0000EF68
extern intptr_t lSC1PStageClearBonusTripleKO;               // 0x0000F148
extern intptr_t lSC1PStageClearBonusLastChance;             // 0x0000F328
extern intptr_t lSC1PStageClearBonusPacifist;               // 0x0000F508
extern intptr_t lSC1PStageClearBonusPerfect;                // 0x0000F6E8
extern intptr_t lSC1PStageClearBonusNoMiss;                 // 0x0000F8C8
extern intptr_t lSC1PStageClearBonusNoDamage;               // 0x0000FAA8
extern intptr_t lSC1PStageClearBonusFullPower;              // 0x0000FC88
extern intptr_t lSC1PStageClearBonusGameClear;              // 0x00014008
extern intptr_t lSC1PStageClearBonusNoMissClear;            // 0x00013888
extern intptr_t lSC1PStageClearBonusNoDamageClear;          // 0x00013A68
extern intptr_t lSC1PStageClearBonusSpeedKing;              // 0x00013C48
extern intptr_t lSC1PStageClearBonusSpeedDemon;             // 0x00013E28
extern intptr_t lSC1PStageClearBonusMewCatcher;             // 0x0000FE68
extern intptr_t lSC1PStageClearBonusStarClear;              // 0x00010048
extern intptr_t lSC1PStageClearBonusVegetarian;             // 0x00010228
extern intptr_t lSC1PStageClearBonusHeartThrob;             // 0x00010408
extern intptr_t lSC1PStageClearBonusThrowDown;              // 0x000105E8
extern intptr_t lSC1PStageClearBonusSmashMania;             // 0x000107C8
extern intptr_t lSC1PStageClearBonusSmashless;              // 0x000109A8
extern intptr_t lSC1PStageClearBonusSpecialMove;            // 0x00010B88
extern intptr_t lSC1PStageClearBonusSingleMove;             // 0x00010D68
extern intptr_t lSC1PStageClearBonusPokemonFinish;          // 0x00010F48
extern intptr_t lSC1PStageClearBonusBoobyTrap;              // 0x00011128
extern intptr_t lSC1PStageClearBonusFighterStance;          // 0x00011308
extern intptr_t lSC1PStageClearBonusMystic;                 // 0x000114E8
extern intptr_t lSC1PStageClearBonusCometMystic;            // 0x000116C8
extern intptr_t lSC1PStageClearBonusAcidClear;              // 0x000118A8
extern intptr_t lSC1PStageClearBonusBumperClear;            // 0x00011A88
extern intptr_t lSC1PStageClearBonusTornadoClear;           // 0x00011C68
extern intptr_t lSC1PStageClearBonusArwingClear;            // 0x00011E48
extern intptr_t lSC1PStageClearBonusCounterAttack;          // 0x00012028
extern intptr_t lSC1PStageClearBonusMeteorSmash;            // 0x00012208
extern intptr_t lSC1PStageClearBonusAerial;                 // 0x000123E8
extern intptr_t lSC1PStageClearBonusLastSecond;             // 0x000125C8
extern intptr_t lSC1PStageClearBonusLucky3;                 // 0x000127A8
extern intptr_t lSC1PStageClearBonusJackpot;                // 0x00012988
extern intptr_t lSC1PStageClearBonusYoshiRainbow;           // 0x00012B68
extern intptr_t lSC1PStageClearBonusKirbyRanks;             // 0x00012D48
extern intptr_t lSC1PStageClearBonusBrosCalamity;           // 0x00012F28
extern intptr_t lSC1PStageClearBonusDKDefender;             // 0x00013108
extern intptr_t lSC1PStageClearBonusDKPerfect;              // 0x000132E8
extern intptr_t lSC1PStageClearBonusGoodFriend;             // 0x000134C8
extern intptr_t lSC1PStageClearBonusTrueFriend;             // 0x000136A8
extern intptr_t lSC1PStageClearBonusVeryEasyClear;          // 0x00014008
extern intptr_t lSC1PStageClearBonusEasyClear;              // 0x000141E8
extern intptr_t lSC1PStageClearBonusNormalClear;            // 0x000143C8
extern intptr_t lSC1PStageClearBonusHardClear;              // 0x000145A8
extern intptr_t lSC1PStageClearBonusVeryHardClear;        	// 0x00014788

extern void sc1PStageClearProcLights(Gfx **dls);
extern s32 sc1PStageClearGetPowerOf(s32 base, s32 exp);
extern void sc1PStageClearSetDigitSpriteColors(SObj *sobj, s32 digit_kind, syColorRGBPair *colors_default);
extern s32 sc1PStageClearGetScoreDigitCount(s32 points, s32 digit_count_max);
extern Sprite* sc1PStageClearGetScoreDigitSprite(s32 digit_kind, s32 digit);
extern void sc1PStageClearMakeScoreDigits
(
	GObj *gobj,
	s32 points,
	f32 x,
	f32 y,
	syColorRGBPair *colors,
	s32 offset_x,
	s32 digit_kind,
	s32 sub,
	s32 digit_count_max,
	sb32 is_fixed_digit_count
);
extern void sc1PStageClearTextProcDisplay(GObj *gobj);
extern void sc1PStageClearMakeTextSObjs(void);
extern void sc1PStageClearMakeScoreSObjs(void);
extern void sc1PStageClearMakeTimerTextSObjs(f32 y);
extern void sc1PStageClearMakeTimerDigits(f32 y);
extern s32 sc1PStageClearGetAppendTotalTimeScore(f32 y);
extern void sc1PStageClearMakeDamageTextSObjs(f32 y);
extern void sc1PStageClearMakeDamageDigits(f32 y);
extern s32 sc1PStageClearGetAppendTotalDamageScore(f32 y);
extern void sc1PStageClearMakeTargetTextSObjs(void);
extern void func_ovl56_80132DC0(GObj *gobj);
extern void func_ovl56_80132E40(f32 x, f32 y, s32 objective_num);
extern void func_ovl56_80132F78(void);
extern sc1PStageClearStats* sc1PStageClearSetupBonusStats(sc1PStageClearStats *bonus_setup, s32 bonus_id);
extern sb32 sc1PStageClearCheckHaveBonusStats(void);
extern sb32 sc1PStageClearCheckGameClearBonus(s32 bonus_id);
extern s32 sc1PStageClearGetNoMissMultiplier(s32 stage);
extern void sc1PStageClearCommonProcUpdate(GObj *gobj);
extern s32 sc1PStageClearGetAppendBonusStatPoints(s32 bonus_id, s32 bonus_num, f32 x, f32 y);
extern void sc1PStageClearMakeBonusPageArrow(void);
extern sb32 sc1PStageClearCheckHaveBonusStatID(s32 bonus_id);
extern s32 sc1PStageClearGetUpdateBonusStatPointsAll(void);
extern void sc1PStageClearMakeBonusTable(void);
extern void sc1PStageClearFramebufWallpaperProcDisplay(GObj *gobj);
extern void sc1PStageClearMakeFramebufWallpaper(void);
extern void sc1PStageClearMakeLink26Camera(void);
extern void sc1PStageClearMakeLink27Camera(void);
extern void sc1PStageClearInitVars(void);
extern void sc1PStageClearUpdateTotal1PGameScore(void);
extern void sc1PStageClearUpdateBonusScore(void);
extern sb32 sc1PStageClearCheckHaveTimer(void);
extern void sc1PStageUpdateBonusStatAll(void);
extern void sc1PStageClearUpdateGameClearScore(void);
extern void sc1PStageClearUpdateStageClearScore(void);
extern void sc1PStageClearUpdateResultScore(void);
extern void sc1PStageClearProcRun(GObj *gobj);
extern void sc1PStageClearCopyFramebufToWallpaper(void);
extern void sc1PStageClearProcStart(void);

#endif
