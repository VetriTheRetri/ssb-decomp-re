#include <ft/fighter.h>
#include <sc/scene.h>
#include <sys/system_00.h>
#include <ovl0/reloc_data_mgr.h>

extern void func_80007080(Vp *vp, f32 arg1, f32 arg2, f32 arg3, f32 arg4);
extern void func_ovl0_800CD2CC();
extern GObj* func_8000B93C(
	u32 id,
	void (*arg1)(GObj *),
	s32 link,
	u32 arg3,
	void (*arg4)(GObj *),
	u32 arg5,
	s64 arg7,
	s32 arg8,
	s32 arg9,
	s32 arg10,
	void *arg11,
	u32 arg12,
	s32 arg13);

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern void *D_80044FA8_407B8;

extern intptr_t lSC1PStageClearSpritePlatform;            	// 0x000000C0
extern intptr_t lSC1PStageClearSpriteTarget;                // 0x000001D0
extern intptr_t lSC1PStageClearSpriteTextScore;             // 0x00000408
extern intptr_t lSC1PStageClearSpritePointsNSign;           // 0x00000710
extern intptr_t lSC1PStageClearSpriteBonusMultiplySign;     // 0x00000828
extern intptr_t lSC1PStageClearSpriteBonusColon;            // 0x000008D8
extern intptr_t lSC1PStageClearSpriteTextStage;             // 0x000009D8
extern intptr_t lSC1PStageClearSpriteTextMultiplySign;      // 0x00001018
extern intptr_t lSC1PStageClearSpriteTextGame;              // 0x00001338
extern intptr_t lSC1PStageClearSpriteTextClear;             // 0x00001D58
extern intptr_t lSC1PStageClearSpriteTextSpecialBonus;      // 0x00002060
extern intptr_t lSC1PStageClearSpriteTextColon;             // 0x00002120
extern intptr_t lSC1PStageClearSpriteTextTimer;             // 0x000025E8
extern intptr_t lSC1PStageClearSpriteTextDamage;            // 0x00002B48
extern intptr_t lSC1PStageClearSpriteBonusBorder;           // 0x0000A4B8
extern intptr_t lSC1PStageClearSpriteTextResult;            // 0x0000AF98
extern intptr_t lSC1PStageClearSpriteTextTarget;            // 0x0000B4F8
extern intptr_t sSC1PStageClearSpriteBonusPageArrow;        	// 0x0000B6A8
extern intptr_t lSC1PStageClearSpriteTextShadow;            // 0x0000D1C8
extern intptr_t lSC1PStageClearSpriteTextBonus;             // 0x0000D340

// Bonus stat text sprites
extern intptr_t lSC1PStageClearSpriteBonusCheapShot;        // 0x0000D528
extern intptr_t lSC1PStageClearSpriteBonusStarFinish;       // 0x0000D708
extern intptr_t lSC1PStageClearSpriteBonusNoItem;           // 0x0000D8E8
extern intptr_t lSC1PStageClearSpriteBonusShieldBreaker;    // 0x0000DAC8
extern intptr_t lSC1PStageClearSpriteBonusJudoWarrior;      // 0x0000DCA8
extern intptr_t lSC1PStageClearSpriteBonusHawk;             // 0x0000DE88
extern intptr_t lSC1PStageClearSpriteBonusShooter;          // 0x0000E068
extern intptr_t lSC1PStageClearSpriteBonusHeavyDamage;      // 0x0000E248
extern intptr_t lSC1PStageClearSpriteBonusAllVariations;    // 0x0000E428
extern intptr_t lSC1PStageClearSpriteBonusItemStrike;       // 0x0000E608
extern intptr_t lSC1PStageClearSpriteBonusDoubleKO;         // 0x0000E7E8
extern intptr_t lSC1PStageClearSpriteBonusTrickster;        // 0x0000E9C8
extern intptr_t lSC1PStageClearSpriteBonusGiantImpact;      // 0x0000EBA8
extern intptr_t lSC1PStageClearSpriteBonusSpeedster;        // 0x0000ED88
extern intptr_t lSC1PStageClearSpriteBonusItemThrow;        // 0x0000EF68
extern intptr_t lSC1PStageClearSpriteBonusTripleKO;         // 0x0000F148
extern intptr_t lSC1PStageClearSpriteBonusLastChance;       // 0x0000F328
extern intptr_t lSC1PStageClearSpriteBonusPacifist;         // 0x0000F508
extern intptr_t lSC1PStageClearSpriteBonusPerfect;          // 0x0000F6E8
extern intptr_t lSC1PStageClearSpriteBonusNoMiss;           // 0x0000F8C8
extern intptr_t lSC1PStageClearSpriteBonusNoDamage;         // 0x0000FAA8
extern intptr_t lSC1PStageClearSpriteBonusFullPower;        // 0x0000FC88
extern intptr_t lSC1PStageClearSpriteBonusGameClear;        // 0x00014008
extern intptr_t lSC1PStageClearSpriteBonusNoMissClear;      // 0x00013888
extern intptr_t lSC1PStageClearSpriteBonusNoDamageClear;    // 0x00013A68
extern intptr_t lSC1PStageClearSpriteBonusSpeedKing;        // 0x00013C48
extern intptr_t lSC1PStageClearSpriteBonusSpeedDemon;       // 0x00013E28
extern intptr_t lSC1PStageClearSpriteBonusMewCatcher;       // 0x0000FE68
extern intptr_t lSC1PStageClearSpriteBonusStarClear;        // 0x00010048
extern intptr_t lSC1PStageClearSpriteBonusVegetarian;       // 0x00010228
extern intptr_t lSC1PStageClearSpriteBonusHeartThrob;       // 0x00010408
extern intptr_t lSC1PStageClearSpriteBonusThrowDown;        // 0x000105E8
extern intptr_t lSC1PStageClearSpriteBonusSmashMania;       // 0x000107C8
extern intptr_t lSC1PStageClearSpriteBonusSmashless;        // 0x000109A8
extern intptr_t lSC1PStageClearSpriteBonusSpecialMove;      // 0x00010B88
extern intptr_t lSC1PStageClearSpriteBonusSingleMove;       // 0x00010D68
extern intptr_t lSC1PStageClearSpriteBonusPokemonFinish;    // 0x00010F48
extern intptr_t lSC1PStageClearSpriteBonusBoobyTrap;        // 0x00011128
extern intptr_t lSC1PStageClearSpriteBonusFighterStance;    // 0x00011308
extern intptr_t lSC1PStageClearSpriteBonusMystic;           // 0x000114E8
extern intptr_t lSC1PStageClearSpriteBonusCometMystic;      // 0x000116C8
extern intptr_t lSC1PStageClearSpriteBonusAcidClear;        // 0x000118A8
extern intptr_t lSC1PStageClearSpriteBonusBumperClear;      // 0x00011A88
extern intptr_t lSC1PStageClearSpriteBonusTornadoClear;     // 0x00011C68
extern intptr_t lSC1PStageClearSpriteBonusArwingClear;      // 0x00011E48
extern intptr_t lSC1PStageClearSpriteBonusCounterAttack;    // 0x00012028
extern intptr_t lSC1PStageClearSpriteBonusMeteorSmash;      // 0x00012208
extern intptr_t lSC1PStageClearSpriteBonusAerial;           // 0x000123E8
extern intptr_t lSC1PStageClearSpriteBonusLastSecond;       // 0x000125C8
extern intptr_t lSC1PStageClearSpriteBonusLucky3;           // 0x000127A8
extern intptr_t lSC1PStageClearSpriteBonusJackpot;          // 0x00012988
extern intptr_t lSC1PStageClearSpriteBonusYoshiRainbow;     // 0x00012B68
extern intptr_t lSC1PStageClearSpriteBonusKirbyRanks;       // 0x00012D48
extern intptr_t lSC1PStageClearSpriteBonusBrosCalamity;     // 0x00012F28
extern intptr_t lSC1PStageClearSpriteBonusDKDefender;       // 0x00013108
extern intptr_t lSC1PStageClearSpriteBonusDKPerfect;        // 0x000132E8
extern intptr_t lSC1PStageClearSpriteBonusGoodFriend;       // 0x000134C8
extern intptr_t lSC1PStageClearSpriteBonusTrueFriend;       // 0x000136A8
extern intptr_t lSC1PStageClearSpriteBonusVeryEasyClear;    // 0x00014008
extern intptr_t lSC1PStageClearSpriteBonusEasyClear;        // 0x000141E8
extern intptr_t lSC1PStageClearSpriteBonusNormalClear;      // 0x000143C8
extern intptr_t lSC1PStageClearSpriteBonusHardClear;        // 0x000145A8
extern intptr_t lSC1PStageClearSpriteBonusVeryHardClear;    // 0x00014788

extern intptr_t lGRWallpaperTraining0Sprite;                // 0x00020718
extern intptr_t lGRWallpaperTraining0BitmapPointer;        	// 0x0002074C - pointer to bitmap in wallpaper sprite

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x801352C0
u32 sSC1PStageClearPad0x801352C0[3];

// 0x801352CC
u32 sSC1PStageClearTotalTimeTics;

// 0x801352D0 - Set once, never used
u32 sSC1PStageClearUnused0x801352D0;

// 0x801352D4 - What kind of stage has been cleared
s32 sSC1PStageClearKind;

// 0x801352D8 - Whether player earned any special bonuses
sb32 sSC1PStageClearIsHaveBonusStats;

// 0x801352DC
s32 sSC1PStageClearSecondsRemain;

// 0x801352E0
s32 sSC1PStageClearDamageDealt;

// 0x801352E4
s32 sSC1PStageClearDifficulty;

// 0x801352E8
s32 sSC1PStageClearScoreTotal;

// 0x801352EC - Stage that the player just cleared / failed
s32 sSC1PStageClear1PGameStage;

// 0x801352F0
s32 sSC1PStageClearPad0x801352F0[2];

// 0x801352F8 - GObj of "Timer" and "Damage" scores
GObj *sSC1PStageClearTimerTextGObj;

// 0x801352FC
GObj *sSC1PStageClearTimerMultiplierGObj;

// 0x80135300
GObj *sSC1PStageClearDamageTextGObj;

// 0x80135304
GObj *sSC1PStageClearDamageMultiplierGObj;

// 0x80135308
s32 sSC1PStageClearPad0x80135308[2];

// 0x80135310 - GObj of "SCORE" text
GObj *sSC1PStageClearScoreTextGObj;

// 0x80135314 - GObj of "- BONUS -" text
GObj *sSC1PStageClearBonusTextGObj;

// 0x80135318
GObj *sSC1PStageClearTargetGObj;

// 0x8013531C
s32 sSC1PStageClearPad0x8013531C;

// 0x80135320
u32 sSC1PStageClearBonusFlags[3];

// 0x8013532C
s32 sSC1PStageClearBonusID;

// 0x80135330
s32 sSC1PStageClearBonusNum;

// 0x80135334
s32 sSC1PStageClearIsSetCommonAdvanceTic;

// 0x80135338
sb32 sSC1PStageClearIsAdvance;

// 0x8013533C
s32 sSC1PStageClearIsAllowProceedNext;

// 0x80135340
u32 sSC1PStageClearCommonAdvanceTic;

// 0x80135344
u32 sSC1PStageClearBonusShowNextTic;

// 0x80135348
u32 sSC1PStageClearBonusAdvanceTic;

// 0x80135350
GObj *sSC1PStageClearBonusStatGObjs[10];

// 0x80135378 - GObjs of target or platform sprites?
GObj *sSC1PStageClearBonusObjectiveGObjs[10];

// 0x801353A0
u32 sSC1PStageClearBaseIntervalTic;

// 0x801353A4
s32 sSC1PStageClearBonusObjectivesCleared;

// 0x801353A8
s32 sSC1PStageClearTimerTextTic;

// 0x801353AC
s32 sSC1PStageClearTimerDigitTic;

// 0x801353B0
s32 sSC1PStageClearTimerMultiplierTic;

// 0x801353B4
s32 sSC1PStageClearTimerEjectTic;

// 0x801353B8
s32 sSC1PStageClearDamageTextTic;

// 0x801353BC
s32 sSC1PStageClearDamageDigitTic;

// 0x801353C0
s32 sSC1PStageClearDamageMultiplierTic;

// 0x801353C4
s32 sSC1PStageClearDamageEjectTic;

// 0x801353C8
s32 sSC1PStageClearPad0x801353C8[2];

// 0x801353D0
rdFileNode sSC1PStageClearStatusBuf[48];

// 0x80135550
rdFileNode sSC1PStageClearForceBuf[7];

// 0x80135588
void *sSC1PStageClearFiles[7];

// DATA

// 0x80134EE0
u32 dGMStageClearFileIDs[/* */] = { 0x50, 0x51, 0xA4, 0xA5, 0x24, 0x97, 0x1A };

// 0x80134EFC
sc1PStageClearScore dGMStageClearBonusData[/* */] =
{
	// Cheap Shot
	{ &lSC1PStageClearSpriteBonusCheapShot, -99 },

	// Star Finish
	{ &lSC1PStageClearSpriteBonusStarFinish, 10000 },

	// No Item
	{ &lSC1PStageClearSpriteBonusNoItem, 1000 },

	// Shield Breaker
	{ &lSC1PStageClearSpriteBonusShieldBreaker, 8000 },

	// Judo Warrior
	{ &lSC1PStageClearSpriteBonusJudoWarrior, 5000 },

	// Hawk
	{ &lSC1PStageClearSpriteBonusHawk, 18000 },

	// Shooter
	{ &lSC1PStageClearSpriteBonusShooter, 12000 },

	// Heavy Damage
	{ &lSC1PStageClearSpriteBonusHeavyDamage, 28000 },

	// All Variations
	{ &lSC1PStageClearSpriteBonusAllVariations, 30000 },

	// Item Strike
	{ &lSC1PStageClearSpriteBonusItemStrike, 20000 },

	// Double KO
	{ &lSC1PStageClearSpriteBonusDoubleKO, 0 },

	// Trickster
	{ &lSC1PStageClearSpriteBonusTrickster, 11000 },

	// Giant Impact
	{ &lSC1PStageClearSpriteBonusGiantImpact, 0 },

	// Speedster
	{ &lSC1PStageClearSpriteBonusSpeedster, 10000 },

	// Item Throw
	{ &lSC1PStageClearSpriteBonusItemThrow, 16000 },

	// Triple KO
	{ &lSC1PStageClearSpriteBonusTripleKO, 0 },

	// Last Chance
	{ &lSC1PStageClearSpriteBonusLastChance, 0 },

	// Pacifist
	{ &lSC1PStageClearSpriteBonusPacifist, 60000 },

	// Perfect
	{ &lSC1PStageClearSpriteBonusPerfect, 30000 },

	// No Miss
	{ &lSC1PStageClearSpriteBonusNoMiss, 5000 },

	// No Damage
	{ &lSC1PStageClearSpriteBonusNoDamage, 15000 },

	// Full Power
	{ &lSC1PStageClearSpriteBonusFullPower, 5000 },

	// Final Stage Clear
	{ &lSC1PStageClearSpriteBonusGameClear, 70000 },

	// No Miss Clear
	{ &lSC1PStageClearSpriteBonusNoMissClear, 70000 },

	// No Damage Clear
	{ &lSC1PStageClearSpriteBonusNoDamageClear, 400000 },

	// Speed King
	{ &lSC1PStageClearSpriteBonusSpeedKing, 40000 },

	// Speed Demon
	{ &lSC1PStageClearSpriteBonusSpeedDemon, 80000 },

	// Mew Catcher
	{ &lSC1PStageClearSpriteBonusMewCatcher, 15000 },

	// Star Clear
	{ &lSC1PStageClearSpriteBonusStarClear, 12000 },

	// Vegetarian
	{ &lSC1PStageClearSpriteBonusVegetarian, 9000 },

	// Heart Throb
	{ &lSC1PStageClearSpriteBonusHeartThrob, 17000 },

	// Throw Down
	{ &lSC1PStageClearSpriteBonusThrowDown, 2000 },

	// Smash Mania
	{ &lSC1PStageClearSpriteBonusSmashMania, 3500 },

	// Smashless
	{ &lSC1PStageClearSpriteBonusSmashless, 5000 },

	// Special Move
	{ &lSC1PStageClearSpriteBonusSpecialMove, 5000 },

	// Single Move
	{ &lSC1PStageClearSpriteBonusSingleMove, 8000 },

	// Pokemon Finish
	{ &lSC1PStageClearSpriteBonusPokemonFinish, 11000 },

	// Booby Trap
	{ &lSC1PStageClearSpriteBonusBoobyTrap, 12000 },

	// Fighter Stance
	{ &lSC1PStageClearSpriteBonusFighterStance, 100 },

	// Mystic
	{ &lSC1PStageClearSpriteBonusMystic, 7000 },

	// Comet Mystic
	{ &lSC1PStageClearSpriteBonusCometMystic, 10000 },

	// Acid Clear
	{ &lSC1PStageClearSpriteBonusAcidClear, 1500 },

	// Bumper Clear
	{ &lSC1PStageClearSpriteBonusBumperClear, 10000 },

	// Tornado Clear
	{ &lSC1PStageClearSpriteBonusTornadoClear, 3000 },

	// ARWING Clear
	{ &lSC1PStageClearSpriteBonusArwingClear, 4000 },

	// Counter Attack
	{ &lSC1PStageClearSpriteBonusCounterAttack, 0 },

	// Meteor Smash
	{ &lSC1PStageClearSpriteBonusMeteorSmash, 0 },

	// Aerial
	{ &lSC1PStageClearSpriteBonusAerial, 0 },

	// Last Second
	{ &lSC1PStageClearSpriteBonusLastSecond, 8000 },

	// Lucky 3
	{ &lSC1PStageClearSpriteBonusLucky3, 9990 },

	// Jackpot
	{ &lSC1PStageClearSpriteBonusJackpot, 3330 },

	// Yoshi Rainbow
	{ &lSC1PStageClearSpriteBonusYoshiRainbow, 50000 },

	// Kirby Ranks
	{ &lSC1PStageClearSpriteBonusKirbyRanks, 25000 },

	// Bros. Calamity
	{ &lSC1PStageClearSpriteBonusBrosCalamity, 25000 },

	// DK Defender
	{ &lSC1PStageClearSpriteBonusDKDefender, 10000 },

	// DK Perfect
	{ &lSC1PStageClearSpriteBonusDKPerfect, 50000 },

	// Good Friend
	{ &lSC1PStageClearSpriteBonusGoodFriend, 8000 },

	// True Friend
	{ &lSC1PStageClearSpriteBonusTrueFriend, 25000 }
};

// 0x801350D0
Lights1 dGMStageClearLights11 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);

// 0x801350E8
Lights1 dGMStageClearLights12 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x00);

// 0x80135100
syColorRGBPair dGMStageClearDigitSpriteColors[/* */] =
{
	{
		{ 0x00, 0x00, 0x00 },
		{ 0xC8, 0xCB, 0xD3 }
	},

	{
		{ 0x00, 0x00, 0x00 },
		{ 0xFF, 0xFF, 0xFF }
	},

	{
		{ 0x00, 0x00, 0x00 },
		{ 0xFF, 0xEC, 0x00 }
	}
};


// Three different sets of digit sprites on the Stage Clear screen

// 0x80135114
s32 dGMStageClearDigitSpriteFileArrayIDs[/* */] = { 0, 4, 2 };

// 0x80135120
intptr_t dGMStageClearDigitSpriteOffsets[/* */][3] =
{
	{ 0xB808, 0x68, 0x148 },
	{ 0xB968, 0x118, 0x2D8 },
	{ 0xBAC8, 0x1C8, 0x500 },
	{ 0xBC28, 0x278, 0x698 },
	{ 0xBD88, 0x328, 0x8C0 },
	{ 0xBEE8, 0x3D8, 0xA58 },
	{ 0xC048, 0x488, 0xC80 },
	{ 0xC1A8, 0x538, 0xE18 },
	{ 0xC308, 0x5E8, 0x1040 },
	{ 0xC468, 0x698, 0x1270 }
};

// 0x80135198 - "No Miss" bonus multiplier
s32 dGMStageClearNoMissBonusMultiplierArray[/* */] = { 1, 2, 3, 0, 4, 5, 6, 0, 7, 8, 9, 0, 10, 11 };

// 0x801351D0
intptr_t dGMStageClearDifficultySpriteOffsets[/* */] =
{
	&lSC1PStageClearSpriteBonusVeryEasyClear,
	&lSC1PStageClearSpriteBonusEasyClear,
	&lSC1PStageClearSpriteBonusNormalClear,
	&lSC1PStageClearSpriteBonusHardClear,
	&lSC1PStageClearSpriteBonusVeryHardClear
};

// 0x801351E4
syColorRGBPair dGMStageClearScoreDigitColors = { { 0x00, 0x00, 0x00 }, { 0xFF, 0xFF, 0x00 } };

// 0x801351EC
syDisplaySetup dGM1PStageClearDisplaySetup = {
	0x80392A00, 0x803B6900, 0x803DA800,
	0x00000000, 0x00000140, 0x000000F0, 0x00016A99
};

// 0x80135208
scRuntimeInfo dGM1PStageClearGtlSetup = {
	0x00000000, 0x8000A5E4, 0x8000A340, 0x801355B0,
	0x00000000, 0x00000001, 0x00000002, 0x00004E20,
	0x00001000, 0x00000000, 0x00000000, 0x00008000,
	0x00020000, 0x0000C000, 0x80131B00, 0x80004310,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800D5CAC, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090, 0x80134CC4
};

// Forward declarations
sb32 sc1PStageClearCheckHaveTimer();

// 0x80131B00
void func_ovl56_80131B00(Gfx **dl)
{
	gSPSetGeometryMode(dl[0]++, G_LIGHTING);
	ftRenderLightsDrawReflect(dl, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
s32 func_ovl56_80131B58(s32 arg0, s32 arg1)
{
	s32 var_v1 = arg0;
	s32 var_v0;

	if (arg1 == 0)
		return 1;

	var_v0 = arg1;

	while (var_v0 > 1)
	{
		var_v0--;
		var_v1 *= arg0;
	}
	return var_v1;
}

// 0x80131BF8
void sc1PStageClearSetDigitSpriteColor(SObj *sobj, s32 file_id, syColorRGBPair *colors_default)
{
	syColorRGBPair colors_all[ARRAY_COUNT(dGMStageClearDigitSpriteColors)] = dGMStageClearDigitSpriteColors;
	syColorRGBPair *colors_id = &colors_all[file_id];

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	if (colors_default == NULL)
	{
		sobj->shadow_color.r = colors_id->prim.r;
		sobj->shadow_color.g = colors_id->prim.g;
		sobj->shadow_color.b = colors_id->prim.b;
		sobj->sprite.red     = colors_id->env.r;
		sobj->sprite.green   = colors_id->env.g;
		sobj->sprite.blue    = colors_id->env.b;
	}
	else
	{
		sobj->shadow_color.r = colors_default->prim.r;
		sobj->shadow_color.g = colors_default->prim.g;
		sobj->shadow_color.b = colors_default->prim.b;
		sobj->sprite.red     = colors_default->env.r;
		sobj->sprite.green   = colors_default->env.g;
		sobj->sprite.blue    = colors_default->env.b;
	}
}

// 0x80131CC4
s32 sc1PStageClearGetScoreDigitCount(s32 points, s32 digit_count_max)
{
	s32 digit_count_current = digit_count_max;

	while (digit_count_current > 0)
	{
		s32 digit = (func_ovl56_80131B58(10, digit_count_current - 1) != 0) ? points / func_ovl56_80131B58(10, digit_count_current - 1) : 0;

		if (digit != 0)
			return digit_count_current;
		else
			digit_count_current--;
	}
	return 0;
}

// 0x80131D70
Sprite* sc1PStageClearGetScoreDigitSprite(s32 digit_kind, s32 offset_id)
{
	s32 file_array_ids[3] = dGMStageClearDigitSpriteFileArrayIDs;
	intptr_t offsets[10][3] = dGMStageClearDigitSpriteOffsets;
	return gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[file_array_ids[digit_kind]], offsets[offset_id][digit_kind]);
}

// 0x80131E10
void sc1PStageClearMakeScoreDigitSObjs(GObj *gobj, s32 points, f32 x, f32 y, syColorRGBPair *colors, s32 offset_x, s32 file_id, s32 sub, s32 digit_count_max, sb32 is_fixed_digit_count)
{
	SObj *sobj;
	f32 calc_x;
	s32 i;
	sb32 is_negative;
	s32 digit;

	is_negative = FALSE;

	if (points < 0)
	{
		if ((file_id == 2) || (file_id == 0))
			points = 0;
		else
		{
			points = -points;
			is_negative = TRUE;
		}
	}
	sobj = gcAppendSObjWithSprite(gobj, sc1PStageClearGetScoreDigitSprite(file_id, points % 10));

	sc1PStageClearSetDigitSpriteColor(sobj, file_id, colors);

	calc_x = (sub != 0) ? x - sub : x - (sobj->sprite.width + offset_x);

	sobj->pos.x = calc_x;
	sobj->pos.y = y;

	for (i = 1; i < ((is_fixed_digit_count != FALSE) ? digit_count_max : sc1PStageClearGetScoreDigitCount(points, digit_count_max)); i++)
	{
		digit = (func_ovl56_80131B58(10, i) != 0) ? points / func_ovl56_80131B58(10, i) : 0;

		sobj = gcAppendSObjWithSprite(gobj, sc1PStageClearGetScoreDigitSprite(file_id, digit % 10));

		sc1PStageClearSetDigitSpriteColor(sobj, file_id, colors);

		calc_x = (sub != 0) ? calc_x - sub : calc_x - (sobj->sprite.width + offset_x);

		sobj->pos.x = calc_x;
		sobj->pos.y = y;
	}
	if (is_negative != FALSE)
	{
		if (file_id == 1)
			sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[4], &lSC1PStageClearSpritePointsNSign));
		sc1PStageClearSetDigitSpriteColor(sobj, file_id, colors);

		calc_x = (sub != 0) ? calc_x - sub : calc_x - (sobj->sprite.width + offset_x);

		sobj->pos.x = calc_x;
		sobj->pos.y = y + 3.0F;
	}
}

// 0x801320E0
void sc1PStageClearTextProcRender(GObj *gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	func_ovl0_800CCF00(gobj);
	gDPPipeSync(gDisplayListHead[0]++);
}

// 0x8013213C
void sc1PStageClearMakeTextSObjs()
{
	GObj *gobj;
	SObj *sobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
	sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearSpriteTextShadow));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->sprite.red = 0x00;
	sobj->sprite.green = 0x00;
	sobj->sprite.blue = 0x00;

	sobj->pos.x = 33.0F;
	sobj->pos.y = 23.0F;

	if (sSC1PStageClearKind == nSC1PStageClearKindResult)
	{
		sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearSpriteTextResult));
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;

		sobj->shadow_color.r = 0xFF;
		sobj->shadow_color.g = 0x00;
		sobj->shadow_color.b = 0x00;

		sobj->sprite.red = 0xFF;
		sobj->sprite.green = 0xC8;
		sobj->sprite.blue = 0x00;

		sobj->pos.x = 104.0F;
		sobj->pos.y = 24.0F;
	}
	else
	{
		sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearSpriteTextClear));

		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;

		sobj->shadow_color.r = 0xFF;
		sobj->shadow_color.g = 0x00;
		sobj->shadow_color.b = 0x00;

		sobj->sprite.red = 0xFF;
		sobj->sprite.green = 0xC8;
		sobj->sprite.blue = 0x00;

		sobj->pos.x = 166.0F;
		sobj->pos.y = 24.0F;

		if (sSC1PStageClearKind == nSC1PStageClearKindStage)
			sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearSpriteTextStage));
		else
			sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearSpriteTextGame));

		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;

		sobj->shadow_color.r = 0xFF;
		sobj->shadow_color.g = 0x00;
		sobj->shadow_color.b = 0x00;

		sobj->sprite.red = 0xFF;
		sobj->sprite.green = 0xC8;
		sobj->sprite.blue = 0x00;

		sobj->pos.x = 53.0F;
		sobj->pos.y = 24.0F;
	}
	sSC1PStageClearBonusTextGObj = gobj = gcMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
	sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearSpriteTextBonus));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0x28;
	sobj->sprite.blue = 0x0A;

	sobj->pos.x = 121.0F;
	sobj->pos.y = 67.0F;
}

// 0x801323F8
void sc1PStageClearMakeScoreSObjs()
{
	GObj *gobj;
	SObj *sobj;

	sSC1PStageClearScoreTextGObj = gobj = gcMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
	sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[1], &lSC1PStageClearSpriteTextScore));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->shadow_color.r = 0xFF;
	sobj->shadow_color.g = 0x00;
	sobj->shadow_color.b = 0x00;

	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0xC8;
	sobj->sprite.blue = 0x00;

	sobj->pos.x = 90.0F;
	sobj->pos.y = 200.0F;

	sc1PStageClearMakeScoreDigitSObjs(gobj, sSC1PStageClearScoreTotal, 295.0F, 197.0F, NULL, 0, 2, 16, 8, TRUE);
}

// 0x801324FC
void sc1PStageClearMakeTimerTextSObjs(f32 y)
{
	GObj *gobj;
	SObj *sobj;

	sSC1PStageClearTimerTextGObj = gobj = gcMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
	sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearSpriteTextTimer));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 42.0F;
	sobj->pos.y = y;

	sobj->shadow_color.r = 0x00;
	sobj->shadow_color.g = 0x00;
	sobj->shadow_color.b = 0x00;

	sobj->sprite.red = 0xB7;
	sobj->sprite.green = 0xE4;
	sobj->sprite.blue = 0xFF;

	sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearSpriteTextColon));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 118.0F;
	sobj->pos.y = y + 1.0F;

	sobj->shadow_color.r = 0x00;
	sobj->shadow_color.g = 0x00;
	sobj->shadow_color.b = 0x00;

	sobj->sprite.red = 0xB7;
	sobj->sprite.green = 0xE4;
	sobj->sprite.blue = 0xFF;

	func_800269C0_275C0(nSYAudioFGMStageClearScoreDisplay);
}

// 0x8013263C
void sc1PStageClearMakeTimerDigitSObjs(f32 y)
{
	GObj *gobj;
	SObj *sobj;
	f32 x;
	s32 multiplier;
	s32 unused;

	sSC1PStageClearTimerMultiplierGObj = gobj = gcMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
	sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[3], &lSC1PStageClearSpriteTextMultiplySign));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 181.0F;
	sobj->pos.y = y + 2.0F;

	sobj->shadow_color.r = 0x00;
	sobj->shadow_color.g = 0x00;
	sobj->shadow_color.b = 0x00;

	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0xFF;
	sobj->sprite.blue = 0xFF;

	switch (sSC1PStageClear1PGameStage)
	{
	case nSC1PGameStageBonus1:
	case nSC1PGameStageBonus2:
		x = 246.0F;
		multiplier = 200;
		break;

	case nSC1PGameStageBonus3:
		x = 246.0F;
		multiplier = 500;
		break;

	default:
		x = 233.0F;
		multiplier = 50;
	}
	sc1PStageClearMakeScoreDigitSObjs(gobj, multiplier, x, y - 1.0F, NULL, 1, 0, 0, 4, FALSE);
	sc1PStageClearMakeScoreDigitSObjs(gobj, sSC1PStageClearSecondsRemain, 171.0F, y - 1.0F, NULL, 1, 0, 0, 3, FALSE);
}

// 0x801327D4
s32 sc1PStageClearGetAppendTotalTimeScore(f32 y)
{
	GObj *gobj;
	s32 unused;
	s32 time_score_total;
	s32 multiplier;

	sSC1PStageClearTimerMultiplierGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcRender, 26, GOBJ_DLLINKORDER_DEFAULT, -1);

	switch (sSC1PStageClear1PGameStage)
	{
	case nSC1PGameStageBonus1:
	case nSC1PGameStageBonus2:
		multiplier = 200;
		break;

	case nSC1PGameStageBonus3:
		multiplier = 500;
		break;

	default:
		multiplier = 50;
	}
	time_score_total = sSC1PStageClearSecondsRemain * multiplier;

	sc1PStageClearMakeScoreDigitSObjs(gobj, time_score_total, 200.0F, y - 1.0F, NULL, 1, 0, 0, 5, FALSE);
	func_800269C0_275C0(nSYAudioFGMStageClearScoreRegister);

	return time_score_total;
}

// 0x801328CC
void sc1PStageClearMakeDamageTextSObjs(f32 y)
{
	GObj *gobj;
	SObj *sobj;
	s32 unused;

	sSC1PStageClearDamageTextGObj = gobj = gcMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);
	gcAddGObjDisplay(gobj, sc1PStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);

	sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearSpriteTextDamage));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 42.0F;
	sobj->pos.y = (s32)y;

	sobj->shadow_color.r = 0x00;
	sobj->shadow_color.g = 0x00;
	sobj->shadow_color.b = 0x00;

	sobj->sprite.red = 0xB7;
	sobj->sprite.green = 0xE4;
	sobj->sprite.blue = 0xFF;

	sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearSpriteTextColon));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 118.0F;
	sobj->pos.y = (s32)y + 2;

	sobj->shadow_color.r = 0x00;
	sobj->shadow_color.g = 0x00;
	sobj->shadow_color.b = 0x00;

	sobj->sprite.red = 0xB7;
	sobj->sprite.green = 0xE4;
	sobj->sprite.blue = 0xFF;

	func_800269C0_275C0(nSYAudioFGMStageClearScoreDisplay);
}

// 0x80132A20
void sc1PStageClearMakeDamageDigitSObjs(f32 y)
{
	GObj *gobj;
	SObj *sobj;
	s32 x;
	s32 unused;

	x = (sSC1PStageClearDamageDealt > 1000) ? 184 : 171;

	sSC1PStageClearDamageMultiplierGObj = gobj = gcMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);

	sc1PStageClearMakeScoreDigitSObjs(gobj, sSC1PStageClearDamageDealt, x, (s32)y - 1, NULL, 1, 0, 0, 4, FALSE);
	sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[3], &lSC1PStageClearSpriteTextMultiplySign));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = x + 10;
	sobj->pos.y = (s32)y + 2;

	sobj->shadow_color.r = 0x00;
	sobj->shadow_color.g = 0x00;
	sobj->shadow_color.b = 0x00;

	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0xFF;
	sobj->sprite.blue = 0xFF;

	sc1PStageClearMakeScoreDigitSObjs(gobj, 10, x + 55, (s32)y - 1, NULL, 1, 0, 0, 2, TRUE);
}

// 0x80132BB4
s32 sc1PStageClearGetAppendTotalDamageScore(f32 y)
{
	GObj *gobj;
	s32 unused;
	s32 damage_score_total;

	sSC1PStageClearDamageMultiplierGObj = gobj = gcMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcRender, 0x1A, GOBJ_LINKORDER_DEFAULT, -1);
	damage_score_total = sSC1PStageClearDamageDealt * 10;

	sc1PStageClearMakeScoreDigitSObjs(gobj, damage_score_total, 200.0F, (s32)y - 1, NULL, 1, 0, 0, 5, FALSE);
	func_800269C0_275C0(nSYAudioFGMStageClearScoreRegister);

	return damage_score_total;
}

// 0x80132C80
void sc1PStageClearMakeTargetTextSObjs()
{
	GObj *gobj;
	SObj *sobj;
	s32 y1 = 94, y2 = 96;

	sSC1PStageClearTargetGObj = gobj = gcMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
	sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearSpriteTextTarget));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 42.0F;
	sobj->pos.y = y1;

	sobj->shadow_color.r = 0x00;
	sobj->shadow_color.g = 0x00;
	sobj->shadow_color.b = 0x00;

	sobj->sprite.red = 0xB7;
	sobj->sprite.green = 0xE4;
	sobj->sprite.blue = 0xFF;

	sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearSpriteTextColon));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 118.0F;
	sobj->pos.y = y2;

	sobj->shadow_color.r = 0x00;
	sobj->shadow_color.g = 0x00;
	sobj->shadow_color.b = 0x00;

	sobj->sprite.red = 0xB7;
	sobj->sprite.green = 0xE4;
	sobj->sprite.blue = 0xFF;

	func_800269C0_275C0(nSYAudioFGMStageClearScoreDisplay);
}

// 0x80132DC0
void func_ovl56_80132DC0(GObj *gobj)
{
	gobj->flags = (gobj->user_data.u < sSC1PStageClearTotalTimeTics) ? GOBJ_FLAG_NONE : GOBJ_FLAG_NORENDER;

	if (gobj->user_data.u == sSC1PStageClearTotalTimeTics)
	{
		func_800269C0_275C0(nSYAudioFGMStageClearScoreRegister);
		gcEjectGObj(sSC1PStageClearScoreTextGObj);
		sSC1PStageClearScoreTotal += 1000;
		sc1PStageClearMakeScoreSObjs();
	}
}

// 0x80132E40
void func_ovl56_80132E40(f32 x, f32 y, s32 objective_num)
{
	GObj *gobj;
	SObj *sobj;

	sSC1PStageClearBonusObjectiveGObjs[objective_num] = gobj = gcMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
	gcAddGObjProcess(gobj, func_ovl56_80132DC0, 1, 1);

	gobj->user_data.u = (objective_num * 10) + sSC1PStageClearTotalTimeTics;

	switch (sSC1PStageClear1PGameStage)
	{
	case nSC1PGameStageBonus1:
		sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[5], &lSC1PStageClearSpriteTarget));
		break;

	case nSC1PGameStageBonus2:
		sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[5], &lSC1PStageClearSpritePlatform));
		break;
	}
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = x;
	sobj->pos.y = y;
}

// 0x80132F78
void func_ovl56_80132F78()
{
	s32 i = 0;

	if (sSC1PStageClearBonusObjectivesCleared > 0)
	{
		s32 x = 130;

		do
		{
			func_ovl56_80132E40(x, 93.0F, i);
			i++, x += 16;
		}
		while (i < sSC1PStageClearBonusObjectivesCleared);
	}
}

// 0x80132FF8
sc1PStageClearStats* sc1PStageClearSetupBonusStats(sc1PStageClearStats *bonus_setup, s32 bonus_id)
{
	sc1PStageClearStats bonus;

	if (bonus_id < 32)
	{
		bonus.bonus_array_id = 0;
		bonus.bonus_id = bonus_id;
	}
	else if (bonus_id < 64)
	{
		bonus.bonus_array_id = 1;
		bonus.bonus_id = bonus_id - 32;
	}
	else
	{
		bonus.bonus_array_id = 2;
		bonus.bonus_id = bonus_id - 64;
	}
	*bonus_setup = bonus;

	return bonus_setup;
}

// 0x8013305C
sb32 sc1PStageClearCheckHaveBonusStats()
{
	s32 unused[3];
	sc1PStageClearStats bonus;
	s32 i = 0; while (TRUE) // WARNING: Newline memes
	{
		sc1PStageClearSetupBonusStats(&bonus, i);

		i++;

		if (sSC1PStageClearBonusFlags[bonus.bonus_array_id] & (1 << bonus.bonus_id))
			return TRUE;

		if (i == GS_BITCOUNT(sSC1PStageClearBonusFlags))
			return FALSE;
	}
}

// 0x801330F0
sb32 sc1PStageClearCheckGameClearBonus(s32 bonus_id)
{
	switch (bonus_id)
	{
	case nSC1PGameBonusGameClear:
	case nSC1PGameBonusNoMissClear:
	case nSC1PGameBonusNoDamageClear:
	case nSC1PGameBonusSpeedKing:
	case nSC1PGameBonusSpeedDemon:
		return TRUE;

	default:
		return FALSE;
	}
}

// 0x80133128
s32 sc1PStageClearGetNoMissMultiplier(s32 stage)
{
	s32 nomiss[14] = dGMStageClearNoMissBonusMultiplierArray;
	return nomiss[stage];
}

// 0x80133188
void sc1PStageClearCommonProcUpdate(GObj *gobj)
{
	if (gobj->user_data.u == sSC1PStageClearTotalTimeTics)
		func_800269C0_275C0(nSYAudioFGMStageClearScoreDisplay);

	gobj->flags = (gobj->user_data.u < sSC1PStageClearTotalTimeTics) ? GOBJ_FLAG_NONE : GOBJ_FLAG_NORENDER;
}

// 0x801331EC
s32 sc1PStageClearAppendBonusStatGetPoints(s32 bonus_id, s32 bonus_num, f32 x, f32 y)
{
	GObj *gobj;
	SObj *sobj;
	s32 points;

	intptr_t offsets[5] = dGMStageClearDifficultySpriteOffsets;
	syColorRGBPair colors = dGMStageClearScoreDigitColors;

	sSC1PStageClearBonusStatGObjs[bonus_num] = gobj = gcMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
	gcAddGObjProcess(gobj, sc1PStageClearCommonProcUpdate, 1, 1);

	gobj->user_data.u = (bonus_num * 10) + sSC1PStageClearTotalTimeTics;

	if (bonus_id == nSC1PGameBonusGameClear)
		sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], offsets[sSC1PStageClearDifficulty]));
	else
		sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], dGMStageClearBonusData[bonus_id].offset));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = x;
	sobj->pos.y = y;

	if (sc1PStageClearCheckGameClearBonus(bonus_id) != FALSE)
	{
		sobj->sprite.red = 0xFF;
		sobj->sprite.green = 0x00;
		sobj->sprite.blue = 0x00;
	}
	else
	{
		sobj->sprite.red = 0xFF;
		sobj->sprite.green = 0xFF;
		sobj->sprite.blue = 0x00;
	}
	if (bonus_id == nSC1PGameBonusNoMiss)
	{
		sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[4], &lSC1PStageClearSpriteBonusMultiplySign));

		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;

		sobj->pos.x = x + 40.0F;
		sobj->pos.y = y - 1.0F;

		sobj->sprite.red = 0xFF;
		sobj->sprite.green = 0xFF;
		sobj->sprite.blue = 0x00;

		sc1PStageClearMakeScoreDigitSObjs(gobj, sc1PStageClearGetNoMissMultiplier(sSC1PStageClear1PGameStage), (x + 40.0F) + 26.0F, y - 1.0F, &colors, 0, 1, 0, 2, FALSE);
	}
	sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[4], &lSC1PStageClearSpriteBonusColon));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 183.0F;
	sobj->pos.y = y;

	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0xFF;
	sobj->sprite.blue = 0x00;

	switch (bonus_id)
	{
	case nSC1PGameBonusNoMiss:
		points = dGMStageClearBonusData[bonus_id].points * sc1PStageClearGetNoMissMultiplier(sSC1PStageClear1PGameStage);
		break;

	case nSC1PGameBonusGameClear:
		points = dGMStageClearBonusData[bonus_id].points * (sSC1PStageClearDifficulty + 1);
		break;

	default:
		points = dGMStageClearBonusData[bonus_id].points;
	}
	sc1PStageClearMakeScoreDigitSObjs(gobj, points, 241.0F, y - 1.0F, NULL, 0, 1, 0, 6, FALSE);

	return points;
}

// 0x801335A0
void sc1PStageClearMakeBonusPageArrow()
{
	GObj *gobj;
	SObj *sobj;

	sSC1PStageClearBonusStatGObjs[9] = gobj = gcMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
	gcAddGObjProcess(gobj, sc1PStageClearCommonProcUpdate, 1, 1);

	gobj->user_data.u = sSC1PStageClearTotalTimeTics + 90;

	sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &sSC1PStageClearSpriteBonusPageArrow));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 249.0F;
	sobj->pos.y = 176.0F;
}

// 0x80133668
sb32 sc1PStageClearCheckHaveBonusID(s32 bonus_id)
{
	sc1PStageClearStats bonus;

	while (bonus_id < GS_BITCOUNT(sSC1PStageClearBonusFlags))
	{
		sc1PStageClearSetupBonusStats(&bonus, bonus_id);

		bonus_id++;

		if (sSC1PStageClearBonusFlags[bonus.bonus_array_id] & (1 << bonus.bonus_id))
			return TRUE;
	}
	return FALSE;
}

// 0x801336F8
s32 sc1PStageClearUpdateGetBonusStatPointsAll()
{
	s32 unused[2];
	s32 i;
	s32 points;
	sc1PStageClearStats bonus;

	points = 0;

	for (i = 0; i < ARRAY_COUNT(sSC1PStageClearBonusStatGObjs); i++)
		sSC1PStageClearBonusStatGObjs[i] = NULL;

	sSC1PStageClearIsSetCommonAdvanceTic = 0;
	sSC1PStageClearBonusNum = 0;

	while (TRUE)
	{
		if (sSC1PStageClearBonusID == GS_BITCOUNT(sSC1PStageClearBonusFlags))
		{
			sSC1PStageClearIsAdvance = TRUE;
			return points;
		}
		if (sSC1PStageClearBonusNum == (ARRAY_COUNT(sSC1PStageClearBonusStatGObjs) - 1))
		{
			if (sc1PStageClearCheckHaveBonusID(sSC1PStageClearBonusID) == FALSE)
			{
				sSC1PStageClearIsAdvance = TRUE;
				return points;
			}
			sc1PStageClearMakeBonusPageArrow();
			return points;
		}
		sc1PStageClearSetupBonusStats(&bonus, sSC1PStageClearBonusID);

		if (sSC1PStageClearBonusFlags[bonus.bonus_array_id] & (1 << bonus.bonus_id))
		{
			points += sc1PStageClearAppendBonusStatGetPoints(sSC1PStageClearBonusID, sSC1PStageClearBonusNum, 80.0F, (sSC1PStageClearBonusNum * 11) + 86);
			sSC1PStageClearBonusNum++;
		}
		sSC1PStageClearBonusID++;
	}
}

// 0x801338A0
void sc1PStageClearMakeBonusTable()
{
	GObj *gobj;
	SObj *sobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
	sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearSpriteBonusBorder));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->shadow_color.r = 0x00;
	sobj->shadow_color.g = 0x00;
	sobj->shadow_color.b = 0x00;

	sobj->sprite.red = 0xFA;
	sobj->sprite.green = 0xE2;
	sobj->sprite.blue = 0xB5;

	sobj->pos.x = 52.0F;
	sobj->pos.y = 62.0F;

	sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearSpriteTextSpecialBonus));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->shadow_color.r = 0xFF;
	sobj->shadow_color.g = 0xFF;
	sobj->shadow_color.b = 0x00;

	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0xFF;
	sobj->sprite.blue = 0xFF;

	sobj->pos.x = 91.0F;
	sobj->pos.y = 72.0F;
}

// 0x801339C0
void sc1PStageClearFrameCopyBackgroundProcRender(GObj *gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x80, 0x80, 0x80, 0xFF);
	gDPSetCombineMode(gDisplayListHead[0]++, G_CC_MODULATEI_PRIM, G_CC_MODULATEI_PRIM);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_OPA_SURF, G_RM_OPA_SURF2);
	func_ovl0_800CCF74(gobj);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80133AC0
void sc1PStageClearMakeFrameCopyBackground(void)
{
	GObj *gobj;
	SObj *sobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearFrameCopyBackgroundProcRender, 27, GOBJ_DLLINKORDER_DEFAULT, -1);
	sobj = gcAppendSObjWithSprite
	(
		gobj,
		gcGetDataFromFile
		(
			Sprite*,
			sSC1PStageClearFiles[6],
			&lGRWallpaperTraining0Sprite
		)
	);
	sobj->sprite.attr &= ~SP_FASTCOPY;

	sobj->pos.x = 10.0F;
	sobj->pos.y = 10.0F;
}

// 0x80133B48
void func_ovl56_80133B48()
{
	Camera *cam = CameraGetStruct(func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_ovl0_800CD2CC, 0x50, CAMERA_MASK_DLLINK(26), -1, 0, 1, 0, 1, 0));
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133BE8
void func_ovl56_80133BE8()
{
	Camera *cam = CameraGetStruct(func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_ovl0_800CD2CC, 0x5A, CAMERA_MASK_DLLINK(27), -1, 0, 1, 0, 1, 0));
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133C88
void func_ovl56_80133C88(void)
{
	s32 i;

	sSC1PStageClearTotalTimeTics = 0;
	sSC1PStageClearUnused0x801352D0 = 0;

	sSC1PStageClear1PGameStage = gSceneData.spgame_stage;
	sSC1PStageClearDifficulty = gSaveData.spgame_difficulty;

	switch (sSC1PStageClear1PGameStage)
	{
	default:
		sSC1PStageClearKind = nSC1PStageClearKindStage;
		break;

	case nSC1PGameStageBonus1:
	case nSC1PGameStageBonus2:
	case nSC1PGameStageBonus3:
		sSC1PStageClearKind = nSC1PStageClearKindResult;
		sSC1PStageClearBonusObjectivesCleared = gSceneData.bonus_tasks_current;
		break;

	case nSC1PGameStageBoss:
		sSC1PStageClearKind = nSC1PStageClearKindGame;
		break;
	}
	sSC1PStageClearSecondsRemain = gSceneData.spgame_time_seconds;
	sSC1PStageClearDamageDealt = gSCManager1PGameBattleState.players[gSceneData.spgame_player].total_damage_dealt;
	sSC1PStageClearScoreTotal = gSceneData.spgame_score;

	sSC1PStageClearBonusFlags[0] = gSceneData.bonus_get_mask[0];
	sSC1PStageClearBonusFlags[1] = gSceneData.bonus_get_mask[1];
	sSC1PStageClearBonusFlags[2] = gSceneData.bonus_get_mask[2];

	sSC1PStageClearIsHaveBonusStats = sc1PStageClearCheckHaveBonusStats();

	sSC1PStageClearBonusID = 0;
	sSC1PStageClearBaseIntervalTic = 0;

	for (i = 0; i < ARRAY_COUNT(sSC1PStageClearBonusStatGObjs); i++)
	{
		sSC1PStageClearBonusStatGObjs[i] = NULL;
	}
	for (i = 0; i < ARRAY_COUNT(sSC1PStageClearBonusObjectiveGObjs); i++)
	{
		sSC1PStageClearBonusObjectiveGObjs[i] = NULL;
	}
	sSC1PStageClearTimerTextGObj = NULL;
	sSC1PStageClearTimerMultiplierGObj = NULL;
	sSC1PStageClearTargetGObj = NULL;

	sSC1PStageClearIsSetCommonAdvanceTic = 0;
	sSC1PStageClearIsAdvance = FALSE;
	sSC1PStageClearIsAllowProceedNext = 0;

	if ((sSC1PStageClearKind == nSC1PStageClearKindStage) || (sSC1PStageClearKind == nSC1PStageClearKindGame))
	{
		if (sc1PStageClearCheckHaveTimer() != FALSE)
		{
			sSC1PStageClearDamageTextTic = 10;
			sSC1PStageClearDamageDigitTic = 20;
			sSC1PStageClearDamageMultiplierTic = 40;
			sSC1PStageClearDamageEjectTic = 60;
		}
		else
		{
			sSC1PStageClearTimerTextTic = 10;
			sSC1PStageClearTimerDigitTic = 20;
			sSC1PStageClearTimerMultiplierTic = 60;
			sSC1PStageClearTimerEjectTic = 80;
			sSC1PStageClearDamageTextTic = 30;
			sSC1PStageClearDamageDigitTic = 40;
			sSC1PStageClearDamageMultiplierTic = 100;
			sSC1PStageClearDamageEjectTic = 120;
		}
	}
}

// 0x80133EEC
void sc1PStageClearUpdateTotal1PGameScore()
{
	gSceneData.spgame_score = sSC1PStageClearScoreTotal;
}

// 0x80133F00
void func_ovl56_80133F00()
{
	sc1PStageClearMakeScoreSObjs();
	func_800269C0_275C0(nSYAudioFGMUnkMetallic2);
}

// 0x80133F28
sb32 sc1PStageClearCheckHaveTimer()
{
	if (gSceneData.spgame_time_limit == SCBATTLE_TIMELIMIT_INFINITE)
	{
		return TRUE;
	}
	else return FALSE;
}

// 0x80133F50
void func_ovl56_80133F50(void)
{
	s32 i;

	if (sSC1PStageClearCommonAdvanceTic == sSC1PStageClearTotalTimeTics)
	{
		for (i = 0; i < ARRAY_COUNT(sSC1PStageClearBonusStatGObjs); i++)
		{
			if (sSC1PStageClearBonusStatGObjs[i] != NULL)
			{
				gcEjectGObj(sSC1PStageClearBonusStatGObjs[i]);
			}
		}
		sSC1PStageClearScoreTotal += sc1PStageClearUpdateGetBonusStatPointsAll();

		if (sSC1PStageClearScoreTotal < 0)
		{
			sSC1PStageClearScoreTotal = 0;
		}
		sSC1PStageClearBonusShowNextTic = (sSC1PStageClearBonusNum * 10) + sSC1PStageClearTotalTimeTics + 20;
	}
	else if (sSC1PStageClearBonusShowNextTic == sSC1PStageClearTotalTimeTics)
	{
		gcEjectGObj(sSC1PStageClearScoreTextGObj);
		func_ovl56_80133F00();

		sSC1PStageClearIsSetCommonAdvanceTic = TRUE;

		if (sSC1PStageClearIsAdvance != FALSE)
		{
			sSC1PStageClearBonusAdvanceTic = sSC1PStageClearTotalTimeTics + 20;
		}
	}
	else if (sSC1PStageClearBonusAdvanceTic == sSC1PStageClearTotalTimeTics)
	{
		sSC1PStageClearIsAllowProceedNext = TRUE;
	}
}

// 0x8013407C
void sc1PStageClearUpdateGameClearScore()
{
	s32 unused;
	f32 y;

	if (sc1PStageClearCheckHaveTimer() == FALSE)
	{
		if (sSC1PStageClearTotalTimeTics == sSC1PStageClearTimerTextTic)
		{
			sc1PStageClearMakeTimerTextSObjs(94.0F);
		}
		if (sSC1PStageClearTotalTimeTics == sSC1PStageClearTimerDigitTic)
		{
			sc1PStageClearMakeTimerDigitSObjs(94.0F);
		}
		if (sSC1PStageClearTotalTimeTics == sSC1PStageClearTimerMultiplierTic)
		{
			gcEjectGObj(sSC1PStageClearTimerMultiplierGObj);
			sSC1PStageClearScoreTotal += sc1PStageClearGetAppendTotalTimeScore(94.0F);
		}
		if (sSC1PStageClearTotalTimeTics == sSC1PStageClearTimerEjectTic)
		{
			gcEjectGObj(sSC1PStageClearScoreTextGObj);
			func_ovl56_80133F00();
		}
	}
	y = (sc1PStageClearCheckHaveTimer() == FALSE) ? 126.0F : 94.0F;

	if (sSC1PStageClearTotalTimeTics == sSC1PStageClearDamageTextTic)
	{
		sc1PStageClearMakeDamageTextSObjs(y);
	}
	if (sSC1PStageClearTotalTimeTics == sSC1PStageClearDamageDigitTic)
	{
		sc1PStageClearMakeDamageDigitSObjs(y);
	}
	if (sSC1PStageClearTotalTimeTics == sSC1PStageClearDamageMultiplierTic)
	{
		gcEjectGObj(sSC1PStageClearDamageMultiplierGObj);
		sSC1PStageClearScoreTotal += sc1PStageClearGetAppendTotalDamageScore(y);
	}
	if (sSC1PStageClearTotalTimeTics == sSC1PStageClearDamageEjectTic)
	{
		gcEjectGObj(sSC1PStageClearScoreTextGObj);
		func_ovl56_80133F00();

		if (sSC1PStageClearIsHaveBonusStats != FALSE)
		{
			sSC1PStageClearCommonAdvanceTic =
			sSC1PStageClearBonusShowNextTic =
			sSC1PStageClearBonusAdvanceTic 	= sSC1PStageClearTotalTimeTics + 10;
		}
		else sSC1PStageClearIsAllowProceedNext = TRUE;
	}
	if
	(
		(sSC1PStageClearIsHaveBonusStats != FALSE) 	&&
		(sSC1PStageClearBonusTextGObj != NULL) 		&&
		(sSC1PStageClearCommonAdvanceTic == sSC1PStageClearTotalTimeTics)
	)
	{
		gcEjectGObj(sSC1PStageClearBonusTextGObj);
		sSC1PStageClearBonusTextGObj = NULL;

		if (sSC1PStageClearTimerTextGObj != NULL)
		{
			gcEjectGObj(sSC1PStageClearTimerTextGObj);
			sSC1PStageClearTimerTextGObj = NULL;

			gcEjectGObj(sSC1PStageClearTimerMultiplierGObj);
			sSC1PStageClearTimerMultiplierGObj = NULL;
		}
		gcEjectGObj(sSC1PStageClearDamageTextGObj);
		sSC1PStageClearDamageTextGObj = NULL;

		gcEjectGObj(sSC1PStageClearDamageMultiplierGObj);
		sSC1PStageClearDamageMultiplierGObj = NULL;

		sc1PStageClearMakeBonusTable();
	}
	if (sSC1PStageClearIsHaveBonusStats != FALSE)
	{
		func_ovl56_80133F50();
	}
}

// 0x80134340 - ??? Exactly the same as the function above ???
void sc1PStageClearUpdateStageClearScore(void)
{
	s32 unused;
	f32 y;

	if (sc1PStageClearCheckHaveTimer() == FALSE)
	{
		if (sSC1PStageClearTotalTimeTics == sSC1PStageClearTimerTextTic)
			sc1PStageClearMakeTimerTextSObjs(94.0F);

		if (sSC1PStageClearTotalTimeTics == sSC1PStageClearTimerDigitTic)
			sc1PStageClearMakeTimerDigitSObjs(94.0F);

		if (sSC1PStageClearTotalTimeTics == sSC1PStageClearTimerMultiplierTic)
		{
			gcEjectGObj(sSC1PStageClearTimerMultiplierGObj);
			sSC1PStageClearScoreTotal += sc1PStageClearGetAppendTotalTimeScore(94.0F);
		}
		if (sSC1PStageClearTotalTimeTics == sSC1PStageClearTimerEjectTic)
		{
			gcEjectGObj(sSC1PStageClearScoreTextGObj);
			func_ovl56_80133F00();
		}
	}
	y = (sc1PStageClearCheckHaveTimer() == FALSE) ? 126.0F : 94.0F;

	if (sSC1PStageClearTotalTimeTics == sSC1PStageClearDamageTextTic)
	{
		sc1PStageClearMakeDamageTextSObjs(y);
	}
	if (sSC1PStageClearTotalTimeTics == sSC1PStageClearDamageDigitTic)
	{
		sc1PStageClearMakeDamageDigitSObjs(y);
	}
	if (sSC1PStageClearTotalTimeTics == sSC1PStageClearDamageMultiplierTic)
	{
		gcEjectGObj(sSC1PStageClearDamageMultiplierGObj);
		sSC1PStageClearScoreTotal += sc1PStageClearGetAppendTotalDamageScore(y);
	}
	if (sSC1PStageClearTotalTimeTics == sSC1PStageClearDamageEjectTic)
	{
		gcEjectGObj(sSC1PStageClearScoreTextGObj);
		func_ovl56_80133F00();

		if (sSC1PStageClearIsHaveBonusStats != FALSE)
		{
			sSC1PStageClearCommonAdvanceTic =
			sSC1PStageClearBonusShowNextTic =
			sSC1PStageClearBonusAdvanceTic 	= sSC1PStageClearTotalTimeTics + 10;
		}
		else sSC1PStageClearIsAllowProceedNext = TRUE;
	}
	if
	(
		(sSC1PStageClearIsHaveBonusStats != FALSE)	&&
		(sSC1PStageClearBonusTextGObj != NULL) 		&& 
		(sSC1PStageClearCommonAdvanceTic == sSC1PStageClearTotalTimeTics)
	)
	{
		gcEjectGObj(sSC1PStageClearBonusTextGObj);
		sSC1PStageClearBonusTextGObj = NULL;

		if (sSC1PStageClearTimerTextGObj != NULL)
		{
			gcEjectGObj(sSC1PStageClearTimerTextGObj);
			sSC1PStageClearTimerTextGObj = NULL;

			gcEjectGObj(sSC1PStageClearTimerMultiplierGObj);
			sSC1PStageClearTimerMultiplierGObj = NULL;
		}
		gcEjectGObj(sSC1PStageClearDamageTextGObj);
		sSC1PStageClearDamageTextGObj = NULL;

		gcEjectGObj(sSC1PStageClearDamageMultiplierGObj);
		sSC1PStageClearDamageMultiplierGObj = NULL;

		sc1PStageClearMakeBonusTable();
	}
	if (sSC1PStageClearIsHaveBonusStats != FALSE)
	{
		func_ovl56_80133F50();
	}
}

// 0x80134604
void sc1PStageClearUpdateResultScore()
{
	s32 i;

	if (sSC1PStageClear1PGameStage != nSC1PGameStageBonus3)
	{
		if (sSC1PStageClearTotalTimeTics == 10)
			sc1PStageClearMakeTargetTextSObjs();
		else if (sSC1PStageClearTotalTimeTics == 20)
		{
			func_ovl56_80132F78();
			sSC1PStageClearBaseIntervalTic = (sSC1PStageClearBonusObjectivesCleared * 10) + sSC1PStageClearTotalTimeTics;
		}
	}
	else if (sSC1PStageClearTotalTimeTics == 10)
		sSC1PStageClearBaseIntervalTic = sSC1PStageClearTotalTimeTics;

	if (sSC1PStageClearBaseIntervalTic != 0)
	{
		if ((sc1PStageClearCheckHaveTimer() != FALSE) && (sSC1PStageClear1PGameStage != nSC1PGameStageBonus3))
		{
			if (sSC1PStageClearBaseIntervalTic == sSC1PStageClearTotalTimeTics)
			{
				if (sSC1PStageClearIsHaveBonusStats != FALSE)
					sSC1PStageClearCommonAdvanceTic = sSC1PStageClearBonusShowNextTic = sSC1PStageClearBonusAdvanceTic = sSC1PStageClearTotalTimeTics + 10;
				else
					sSC1PStageClearIsAllowProceedNext = 1;
			}
		}
		else if (sSC1PStageClearTotalTimeTics == (sSC1PStageClearBaseIntervalTic + 10))
		{
			if (sSC1PStageClear1PGameStage == nSC1PGameStageBonus3)
				sc1PStageClearMakeTimerTextSObjs(94.0F);

			else if (sSC1PStageClearBonusObjectivesCleared == ARRAY_COUNT(sSC1PStageClearBonusObjectiveGObjs))
				sc1PStageClearMakeTimerTextSObjs(126.0F);
		}
		else if (sSC1PStageClearTotalTimeTics == (sSC1PStageClearBaseIntervalTic + 30))
		{
			if (sSC1PStageClear1PGameStage == nSC1PGameStageBonus3)
				sc1PStageClearMakeTimerDigitSObjs(94.0F);

			else if (sSC1PStageClearBonusObjectivesCleared == 10)
				sc1PStageClearMakeTimerDigitSObjs(126.0F);
		}
		else if (sSC1PStageClearTotalTimeTics == (sSC1PStageClearBaseIntervalTic + 50))
		{
			if (sSC1PStageClear1PGameStage == nSC1PGameStageBonus3)
			{
				gcEjectGObj(sSC1PStageClearTimerMultiplierGObj);
				sSC1PStageClearScoreTotal += sc1PStageClearGetAppendTotalTimeScore(94.0F);

			}
			else if (sSC1PStageClearBonusObjectivesCleared == ARRAY_COUNT(sSC1PStageClearBonusObjectiveGObjs))
			{
				gcEjectGObj(sSC1PStageClearTimerMultiplierGObj);
				sSC1PStageClearScoreTotal += sc1PStageClearGetAppendTotalTimeScore(126.0F);
			}
		}
		else if (sSC1PStageClearTotalTimeTics == (sSC1PStageClearBaseIntervalTic + 70))
		{
			if ((sSC1PStageClearBonusObjectivesCleared == ARRAY_COUNT(sSC1PStageClearBonusObjectiveGObjs)) || (sSC1PStageClear1PGameStage == nSC1PGameStageBonus3))
			{
				gcEjectGObj(sSC1PStageClearScoreTextGObj);
				func_ovl56_80133F00();
			}
			if (sSC1PStageClearIsHaveBonusStats != 0)
			{
				sSC1PStageClearCommonAdvanceTic = sSC1PStageClearBonusShowNextTic = sSC1PStageClearBonusAdvanceTic = sSC1PStageClearTotalTimeTics + 10;
			}
			else sSC1PStageClearIsAllowProceedNext = TRUE;
		}
	}
	if ((sSC1PStageClearIsHaveBonusStats != 0) && (sSC1PStageClearBonusTextGObj != NULL) && (sSC1PStageClearCommonAdvanceTic == sSC1PStageClearTotalTimeTics))
	{
		gcEjectGObj(sSC1PStageClearBonusTextGObj);
		sSC1PStageClearBonusTextGObj = NULL;

		if (sSC1PStageClearTargetGObj != NULL)
		{
			gcEjectGObj(sSC1PStageClearTargetGObj);
			sSC1PStageClearTargetGObj = NULL;

			for (i = 0; i < ARRAY_COUNT(sSC1PStageClearBonusObjectiveGObjs); i++)
			{
				if (sSC1PStageClearBonusObjectiveGObjs[i] != NULL)
				{
					gcEjectGObj(sSC1PStageClearBonusObjectiveGObjs[i]);
					sSC1PStageClearBonusObjectiveGObjs[i] = NULL;
				}
			}
		}
		if (sSC1PStageClearTimerTextGObj != NULL)
		{
			gcEjectGObj(sSC1PStageClearTimerTextGObj);
			sSC1PStageClearTimerTextGObj = NULL;

			gcEjectGObj(sSC1PStageClearTimerMultiplierGObj);
			sSC1PStageClearTimerMultiplierGObj = NULL;
		}
		sc1PStageClearMakeBonusTable();
	}
	if (sSC1PStageClearIsHaveBonusStats != 0)
		func_ovl56_80133F50();
}

// 0x801349F0
void sc1PStageClearProcRun(GObj *gobj)
{
	sSC1PStageClearTotalTimeTics++;

	if (sSC1PStageClearTotalTimeTics >= 10)
	{
		if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
		{
			if (sSC1PStageClearIsAllowProceedNext != 0)
			{
				gSceneData.scene_previous = gSceneData.scene_current;
				gSceneData.scene_current = nSCKindTitle;

				sc1PStageClearUpdateTotal1PGameScore();
				
				leoInitUnit_atten();
			}
			else if ((sSC1PStageClearIsSetCommonAdvanceTic != FALSE) && (sSC1PStageClearIsAdvance == FALSE))
			{
				sSC1PStageClearCommonAdvanceTic = sSC1PStageClearTotalTimeTics;
			}
		}
		switch (sSC1PStageClearKind)
		{
		case nSC1PStageClearKindGame:
			sc1PStageClearUpdateGameClearScore();
			break;

		case nSC1PStageClearKindStage:
			sc1PStageClearUpdateStageClearScore();
			break;

		case nSC1PStageClearKindResult:
			sc1PStageClearUpdateResultScore();
			break;
		}
	}
}

// 0x80134AF4
void sc1PStageClearCopyFramebufToWallpaper(void)
{
	s32 i, j;
	// syPixelPair holds four 16-bit pixels, or two 32-bit pixels
	syPixelPair *framebuf_pixels;
	syPixelPair *row_pixels;
	syPixelPair *wallpaper_pixels;
	u32 chunk0, chunk1;

	// D_80044FA8_407B8 = framebuf0; start farther in, skipping border
	framebuf_pixels = (syPixelPair*)
	(
		(uintptr_t)D_80044FA8_407B8 		+ 
		SYDISPLAY_BORDER_SIZE(320, 10, u16) + 
		SYDISPLAY_BORDER_SIZE(1, 10, u16)
	);
	wallpaper_pixels = (syPixelPair*)
	(
		*gcGetDataFromFile
		(
			Bitmap**,
			sSC1PStageClearFiles[6],
			&lGRWallpaperTraining0BitmapPointer
		)
	)->buf;

	for (i = 0; i < 220; i++)
	{
		row_pixels = framebuf_pixels;

		for (j = 0; j < 75; j++)
		{
			chunk0 = framebuf_pixels->chunk0;
			chunk1 = framebuf_pixels->chunk1;

			framebuf_pixels++;

			if (i & 1)
			{
				wallpaper_pixels->chunk0 = chunk1;
				wallpaper_pixels->chunk1 = chunk0;

				wallpaper_pixels++;
			}
			else
			{
				wallpaper_pixels->chunk0 = chunk0;
				wallpaper_pixels->chunk1 = chunk1;

				wallpaper_pixels++;
			}
		}
		framebuf_pixels = row_pixels + 80;

		if (((i + 1) % 6) == 0)
		{
			wallpaper_pixels++;
		}
	}
}

// 0x80134CC4
void sc1PStageClearInitAll(void)
{
	s32 unused;
	rdSetup rd_setup;

	rd_setup.table_addr = (uintptr_t)&lRDManagerTableAddr;
	rd_setup.table_files_num = (uintptr_t)&lRDManagerTableFilesNum;
	rd_setup.file_heap = NULL;
	rd_setup.file_heap_size = 0;
	rd_setup.status_buf = sSC1PStageClearStatusBuf;
	rd_setup.status_buf_size = ARRAY_COUNT(sSC1PStageClearStatusBuf);
	rd_setup.force_buf = sSC1PStageClearForceBuf;
	rd_setup.force_buf_size = ARRAY_COUNT(sSC1PStageClearForceBuf);

	rdManagerInitSetup(&rd_setup);
	rdManagerLoadFiles(dGMStageClearFileIDs, ARRAY_COUNT(dGMStageClearFileIDs), sSC1PStageClearFiles, gsMemoryAlloc(rdManagerGetAllocSize(dGMStageClearFileIDs, ARRAY_COUNT(dGMStageClearFileIDs)), 0x10));
	gcMakeGObjSPAfter(0, sc1PStageClearProcRun, 0, GOBJ_LINKORDER_DEFAULT);
	sc1PStageClearCopyFramebufToWallpaper();
	func_8000B9FC(0, 0x80000000, 0x64, 0, 0);
	func_ovl56_80133C88();
	func_ovl56_80133B48();
	func_ovl56_80133BE8();
	sc1PStageClearMakeFrameCopyBackground();
	sc1PStageClearMakeTextSObjs();
	sc1PStageClearMakeScoreSObjs();

	switch (sSC1PStageClear1PGameStage)
	{
	case nSC1PGameStageBoss:
		auPlaySong(0, nSYAudioBGM1PGameClear);
		break;

	case nSC1PGameStageBonus1:
	case nSC1PGameStageBonus2:
		if (gSceneData.bonus_tasks_current == 10)
			auPlaySong(0, nSYAudioBGM1PBonusGameClear);
		else
			auPlaySong(0, nSYAudioBGM1PBonusGameFailure);
		break;

	case nSC1PGameStageBonus3:
		if (gSceneData.spgame_time_seconds != 0)
			auPlaySong(0, nSYAudioBGM1PBonusGameClear);
		else
			auPlaySong(0, nSYAudioBGM1PBonusGameFailure);
		break;

	default:
		auPlaySong(0, nSYAudioBGM1PStageClear);
		break;
	}
}

// 0x80134E84
void sc1PStageClearStartScene()
{
	dGM1PStageClearDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);

	func_80007024(&dGM1PStageClearDisplaySetup);

	dGM1PStageClearGtlSetup.arena_size = (size_t) ((uintptr_t)&ovl1_TEXT_START - (uintptr_t)&ovl56_BSS_END);

	gsGTLSceneInit(&dGM1PStageClearGtlSetup);
}
