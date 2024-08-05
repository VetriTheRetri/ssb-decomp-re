#include <ft/fighter.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>

// Externs
extern u8 D_800A4B08;
extern s32 D_800A4AEC;
extern void *D_80044FA8_407B8;

extern void func_ovl1_803903E0();
extern void func_80007080(Vp *vp, f32 arg1, f32 arg2, f32 arg3, f32 arg4);
extern void ftRenderLightsDrawReflect(Gfx **display_list, f32 arg1, f32 arg2);
extern f32 func_ovl1_8039051C();
extern f32 func_ovl1_80390528();
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

extern intptr_t D_NF_800A5240;
extern intptr_t lGMStageClearArenaLo;                       // 801355B0
extern intptr_t lGMStageClearArenaHi;                       // 803903E0
extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_00000854;

extern intptr_t lGMStageClearSpritePlatform;                // 0x000000C0
extern intptr_t lGMStageClearSpriteTarget;                  // 0x000001D0
extern intptr_t lGMStageClearSpriteTextScore;               // 0x00000408
extern intptr_t lGMStageClearSpritePointsNSign;             // 0x00000710
extern intptr_t lGMStageClearSpriteBonusMultiplySign;       // 0x00000828
extern intptr_t lGMStageClearSpriteBonusColon;              // 0x000008D8
extern intptr_t lGMStageClearSpriteTextStage;               // 0x000009D8
extern intptr_t lGMStageClearSpriteTextMultiplySign;        // 0x00001018
extern intptr_t lGMStageClearSpriteTextGame;                // 0x00001338
extern intptr_t lGMStageClearSpriteTextClear;               // 0x00001D58
extern intptr_t lGMStageClearSpriteTextSpecialBonus;        // 0x00002060
extern intptr_t lGMStageClearSpriteTextColon;               // 0x00002120
extern intptr_t lGMStageClearSpriteTextTimer;               // 0x000025E8
extern intptr_t lGMStageClearSpriteTextDamage;              // 0x00002B48
extern intptr_t lGMStageClearSpriteBonusBorder;             // 0x0000A4B8
extern intptr_t lGMStageClearSpriteTextResult;              // 0x0000AF98
extern intptr_t lGMStageClearSpriteTextTarget;              // 0x0000B4F8
extern intptr_t sGMStageClearSpriteBonusPageArrow;          // 0x0000B6A8
extern intptr_t lGMStageClearSpriteTextShadow;              // 0x0000D1C8
extern intptr_t lGMStageClearSpriteTextBonus;               // 0x0000D340

// Bonus stat text sprites
extern intptr_t lGMStageClearSpriteBonusCheapShot;          // 0x0000D528
extern intptr_t lGMStageClearSpriteBonusStarFinish;         // 0x0000D708
extern intptr_t lGMStageClearSpriteBonusNoItem;             // 0x0000D8E8
extern intptr_t lGMStageClearSpriteBonusShieldBreaker;      // 0x0000DAC8
extern intptr_t lGMStageClearSpriteBonusJudoWarrior;        // 0x0000DCA8
extern intptr_t lGMStageClearSpriteBonusHawk;               // 0x0000DE88
extern intptr_t lGMStageClearSpriteBonusShooter;            // 0x0000E068
extern intptr_t lGMStageClearSpriteBonusHeavyDamage;        // 0x0000E248
extern intptr_t lGMStageClearSpriteBonusAllVariations;      // 0x0000E428
extern intptr_t lGMStageClearSpriteBonusItemStrike;         // 0x0000E608
extern intptr_t lGMStageClearSpriteBonusDoubleKO;           // 0x0000E7E8
extern intptr_t lGMStageClearSpriteBonusTrickster;          // 0x0000E9C8
extern intptr_t lGMStageClearSpriteBonusGiantImpact;        // 0x0000EBA8
extern intptr_t lGMStageClearSpriteBonusSpeedster;          // 0x0000ED88
extern intptr_t lGMStageClearSpriteBonusItemThrow;          // 0x0000EF68
extern intptr_t lGMStageClearSpriteBonusTripleKO;           // 0x0000F148
extern intptr_t lGMStageClearSpriteBonusLastChance;         // 0x0000F328
extern intptr_t lGMStageClearSpriteBonusPacifist;           // 0x0000F508
extern intptr_t lGMStageClearSpriteBonusPerfect;            // 0x0000F6E8
extern intptr_t lGMStageClearSpriteBonusNoMiss;             // 0x0000F8C8
extern intptr_t lGMStageClearSpriteBonusNoDamage;           // 0x0000FAA8
extern intptr_t lGMStageClearSpriteBonusFullPower;          // 0x0000FC88
extern intptr_t lGMStageClearSpriteBonusGameClear;          // 0x00014008
extern intptr_t lGMStageClearSpriteBonusNoMissClear;        // 0x00013888
extern intptr_t lGMStageClearSpriteBonusNoDamageClear;      // 0x00013A68
extern intptr_t lGMStageClearSpriteBonusSpeedKing;          // 0x00013C48
extern intptr_t lGMStageClearSpriteBonusSpeedDemon;         // 0x00013E28
extern intptr_t lGMStageClearSpriteBonusMewCatcher;         // 0x0000FE68
extern intptr_t lGMStageClearSpriteBonusStarClear;          // 0x00010048
extern intptr_t lGMStageClearSpriteBonusVegetarian;         // 0x00010228
extern intptr_t lGMStageClearSpriteBonusHeartThrob;         // 0x00010408
extern intptr_t lGMStageClearSpriteBonusThrowDown;          // 0x000105E8
extern intptr_t lGMStageClearSpriteBonusSmashMania;         // 0x000107C8
extern intptr_t lGMStageClearSpriteBonusSmashless;          // 0x000109A8
extern intptr_t lGMStageClearSpriteBonusSpecialMove;        // 0x00010B88
extern intptr_t lGMStageClearSpriteBonusSingleMove;         // 0x00010D68
extern intptr_t lGMStageClearSpriteBonusPokemonFinish;      // 0x00010F48
extern intptr_t lGMStageClearSpriteBonusBoobyTrap;          // 0x00011128
extern intptr_t lGMStageClearSpriteBonusFighterStance;      // 0x00011308
extern intptr_t lGMStageClearSpriteBonusMystic;             // 0x000114E8
extern intptr_t lGMStageClearSpriteBonusCometMystic;        // 0x000116C8
extern intptr_t lGMStageClearSpriteBonusAcidClear;          // 0x000118A8
extern intptr_t lGMStageClearSpriteBonusBumperClear;        // 0x00011A88
extern intptr_t lGMStageClearSpriteBonusTornadoClear;       // 0x00011C68
extern intptr_t lGMStageClearSpriteBonusArwingClear;        // 0x00011E48
extern intptr_t lGMStageClearSpriteBonusCounterAttack;      // 0x00012028
extern intptr_t lGMStageClearSpriteBonusMeteorSmash;        // 0x00012208
extern intptr_t lGMStageClearSpriteBonusAerial;             // 0x000123E8
extern intptr_t lGMStageClearSpriteBonusLastSecond;         // 0x000125C8
extern intptr_t lGMStageClearSpriteBonusLucky3;             // 0x000127A8
extern intptr_t lGMStageClearSpriteBonusJackpot;            // 0x00012988
extern intptr_t lGMStageClearSpriteBonusYoshiRainbow;       // 0x00012B68
extern intptr_t lGMStageClearSpriteBonusKirbyRanks;         // 0x00012D48
extern intptr_t lGMStageClearSpriteBonusBrosCalamity;       // 0x00012F28
extern intptr_t lGMStageClearSpriteBonusDKDefender;         // 0x00013108
extern intptr_t lGMStageClearSpriteBonusDKPerfect;          // 0x000132E8
extern intptr_t lGMStageClearSpriteBonusGoodFriend;         // 0x000134C8
extern intptr_t lGMStageClearSpriteBonusTrueFriend;         // 0x000136A8
extern intptr_t lGMStageClearSpriteBonusVeryEasyClear;      // 0x00014008
extern intptr_t lGMStageClearSpriteBonusEasyClear;          // 0x000141E8
extern intptr_t lGMStageClearSpriteBonusNormalClear;        // 0x000143C8
extern intptr_t lGMStageClearSpriteBonusHardClear;          // 0x000145A8
extern intptr_t lGMStageClearSpriteBonusVeryHardClear;      // 0x00014788

extern intptr_t D_NF_00020718;                              // 0x00020718
extern intptr_t D_NF_0002074C;                              // 0x0002074C

// BSS

// 801352C0
u32 D_ovl56_801352C0[3];

// 801352CC
u32 D_ovl56_801352CC;

// 801352D0
u32 D_ovl56_801352D0;

// 801352D4 - What kind of stage has been cleared
s32 sGMStageClearKind;

// 801352D8
s32 D_ovl56_801352D8;

// 801352DC
s32 sGMStageClearSecondsRemaining;

// 801352E0
s32 sGMStageClearDamageDealt;

// 801352E4
s32 sGMStageClearDifficulty;

// 801352E8
s32 sGMStageClearScoreTotal;

// 801352EC
s32 sGMStageClear1PGameStage;

// 801352F0
u32 D_ovl56_801352F0[2];

// 801352F8 - GObj of "Timer" and "Damage" scores
GObj *sGMStageClearTimerTextGObj;

// 801352FC
GObj *sGMStageClearTimerMultiplierGObj;

// 80135300
GObj *sGMStageClearDamageTextGObj;

// 80135304
GObj *sGMStageClearDamageMultiplierGObj;

// 80135308
u32 D_ovl56_80135308[2];

// 80135310 - GObj of "SCORE" text
GObj *sGMStageClearScoreTextGObj;

// 80135314 - GObj of "- BONUS -" text
GObj *sGMStageClearBonusTextGObj;

// 80135318
GObj *sGMStageClearTargetGObj;

// 8013531C
s32 D_ovl56_8013531C;

// 80135320
u32 sGMStageClearBonusMasks[3];

// 8013532C
s32 sGMStageClearBonusID;

// 80135330
s32 sGMStageClearBonusNum;

// 80135334
s32 D_ovl56_80135334;

// 80135338
sb32 sGMStageClearIsAdvance;

// 8013533C
s32 D_ovl56_8013533C;

// 80135340
u32 D_ovl56_80135340;

// 80135344
u32 D_ovl56_80135344;

// 80135348
u32 D_ovl56_80135348;

// 80135350
GObj *sGMStageClearBonusStatGObjs[10];

// 80135378 - GObjs of target or platform sprites?
GObj *sGMStageClearBonusObjectiveGObjs[10];

// 801353A0
u32 D_ovl56_801353A0;

// 801353A4
s32 sGMStageClearBonusObjectivesCleared;

// 801353A8
s32 D_ovl56_801353A8;

// 801353AC
s32 D_ovl56_801353AC;

// 801353B0
s32 D_ovl56_801353B0;

// 801353B4
s32 D_ovl56_801353B4;

// 801353B8
s32 D_ovl56_801353B8;

// 801353BC
s32 D_ovl56_801353BC;

// 801353C0
s32 D_ovl56_801353C0;

// 801353C4
s32 D_ovl56_801353C4;

// 801353C8
s32 D_ovl56_801353C8;

// 801353CC
s32 D_ovl56_801353CC;

// 801353D0
rdFileNode sGMStageClearStatusBuf[48];

// 80135550
rdFileNode sGMStageClearForceBuf[7];

// 80135588
void *sGMStageClearFiles[7];

// DATA

// 80134EE0
u32 dGMStageClearFileIDs[] = { 0x50, 0x51, 0xA4, 0xA5, 0x24, 0x97, 0x1A };

// 80134EFC
gmStageClearScore dGMStageClearBonusData[] =
{
	// Cheap Shot
	{ &lGMStageClearSpriteBonusCheapShot, -99 },

	// Star Finish
	{ &lGMStageClearSpriteBonusStarFinish, 10000 },

	// No Item
	{ &lGMStageClearSpriteBonusNoItem, 1000 },

	// Shield Breaker
	{ &lGMStageClearSpriteBonusShieldBreaker, 8000 },

	// Judo Warrior
	{ &lGMStageClearSpriteBonusJudoWarrior, 5000 },

	// Hawk
	{ &lGMStageClearSpriteBonusHawk, 18000 },

	// Shooter
	{ &lGMStageClearSpriteBonusShooter, 12000 },

	// Heavy Damage
	{ &lGMStageClearSpriteBonusHeavyDamage, 28000 },

	// All Variations
	{ &lGMStageClearSpriteBonusAllVariations, 30000 },

	// Item Strike
	{ &lGMStageClearSpriteBonusItemStrike, 20000 },

	// Double KO
	{ &lGMStageClearSpriteBonusDoubleKO, 0 },

	// Trickster
	{ &lGMStageClearSpriteBonusTrickster, 11000 },

	// Giant Impact
	{ &lGMStageClearSpriteBonusGiantImpact, 0 },

	// Speedster
	{ &lGMStageClearSpriteBonusSpeedster, 10000 },

	// Item Throw
	{ &lGMStageClearSpriteBonusItemThrow, 16000 },

	// Triple KO
	{ &lGMStageClearSpriteBonusTripleKO, 0 },

	// Last Chance
	{ &lGMStageClearSpriteBonusLastChance, 0 },

	// Pacifist
	{ &lGMStageClearSpriteBonusPacifist, 60000 },

	// Perfect
	{ &lGMStageClearSpriteBonusPerfect, 30000 },

	// No Miss
	{ &lGMStageClearSpriteBonusNoMiss, 5000 },

	// No Damage
	{ &lGMStageClearSpriteBonusNoDamage, 15000 },

	// Full Power
	{ &lGMStageClearSpriteBonusFullPower, 5000 },

	// Final Stage Clear
	{ &lGMStageClearSpriteBonusGameClear, 70000 },

	// No Miss Clear
	{ &lGMStageClearSpriteBonusNoMissClear, 70000 },

	// No Damage Clear
	{ &lGMStageClearSpriteBonusNoDamageClear, 400000 },

	// Speed King
	{ &lGMStageClearSpriteBonusSpeedKing, 40000 },

	// Speed Demon
	{ &lGMStageClearSpriteBonusSpeedDemon, 80000 },

	// Mew Catcher
	{ &lGMStageClearSpriteBonusMewCatcher, 15000 },

	// Star Clear
	{ &lGMStageClearSpriteBonusStarClear, 12000 },

	// Vegetarian
	{ &lGMStageClearSpriteBonusVegetarian, 9000 },

	// Heart Throb
	{ &lGMStageClearSpriteBonusHeartThrob, 17000 },

	// Throw Down
	{ &lGMStageClearSpriteBonusThrowDown, 2000 },

	// Smash Mania
	{ &lGMStageClearSpriteBonusSmashMania, 3500 },

	// Smashless
	{ &lGMStageClearSpriteBonusSmashless, 5000 },

	// Special Move
	{ &lGMStageClearSpriteBonusSpecialMove, 5000 },

	// Single Move
	{ &lGMStageClearSpriteBonusSingleMove, 8000 },

	// Pokemon Finish
	{ &lGMStageClearSpriteBonusPokemonFinish, 11000 },

	// Booby Trap
	{ &lGMStageClearSpriteBonusBoobyTrap, 12000 },

	// Fighter Stance
	{ &lGMStageClearSpriteBonusFighterStance, 100 },

	// Mystic
	{ &lGMStageClearSpriteBonusMystic, 7000 },

	// Comet Mystic
	{ &lGMStageClearSpriteBonusCometMystic, 10000 },

	// Acid Clear
	{ &lGMStageClearSpriteBonusAcidClear, 1500 },

	// Bumper Clear
	{ &lGMStageClearSpriteBonusBumperClear, 10000 },

	// Tornado Clear
	{ &lGMStageClearSpriteBonusTornadoClear, 3000 },

	// ARWING Clear
	{ &lGMStageClearSpriteBonusArwingClear, 4000 },

	// Counter Attack
	{ &lGMStageClearSpriteBonusCounterAttack, 0 },

	// Meteor Smash
	{ &lGMStageClearSpriteBonusMeteorSmash, 0 },

	// Aerial
	{ &lGMStageClearSpriteBonusAerial, 0 },

	// Last Second
	{ &lGMStageClearSpriteBonusLastSecond, 8000 },

	// Lucky 3
	{ &lGMStageClearSpriteBonusLucky3, 9990 },

	// Jackpot
	{ &lGMStageClearSpriteBonusJackpot, 3330 },

	// Yoshi Rainbow
	{ &lGMStageClearSpriteBonusYoshiRainbow, 50000 },

	// Kirby Ranks
	{ &lGMStageClearSpriteBonusKirbyRanks, 25000 },

	// Bros. Calamity
	{ &lGMStageClearSpriteBonusBrosCalamity, 25000 },

	// DK Defender
	{ &lGMStageClearSpriteBonusDKDefender, 10000 },

	// DK Perfect
	{ &lGMStageClearSpriteBonusDKPerfect, 50000 },

	// Good Friend
	{ &lGMStageClearSpriteBonusGoodFriend, 8000 },

	// True Friend
	{ &lGMStageClearSpriteBonusTrueFriend, 25000 }
};

// 801350D0
Lights1 dGMStageClearLights11 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);

// 801350E8
Lights1 dGMStageClearLights12 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x00);

// 80135100
gsColorRGBPair dGMStageClearDigitSpriteColors[] =
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

// 80135114
s32 dGMStageClearDigitSpriteFileArrayIDs[3] = { 0, 4, 2 };

// 80135120
intptr_t dGMStageClearDigitSpriteOffsets[10][3] =
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

// 80135198 - "No Miss" bonus multiplier
s32 dGMStageClearNoMissBonusMultiplierArray[] = { 1, 2, 3, 0, 4, 5, 6, 0, 7, 8, 9, 0, 10, 11 };

// 801351D0
intptr_t dGMStageClearDifficultySpriteOffsets[] =
{
	&lGMStageClearSpriteBonusVeryEasyClear,
	&lGMStageClearSpriteBonusEasyClear,
	&lGMStageClearSpriteBonusNormalClear,
	&lGMStageClearSpriteBonusHardClear,
	&lGMStageClearSpriteBonusVeryHardClear
};

// 801351E4
gsColorRGBPair dGMStageClearScoreDigitColors = { { 0x00, 0x00, 0x00 }, { 0xFF, 0xFF, 0x00 } };

// 801351EC
scUnkDataBounds D_ovl56_801351EC = {
	0x80392A00, 0x803B6900, 0x803DA800,
	0x00000000, 0x00000140, 0x000000F0, 0x00016A99
};

// 80135208
scRuntimeInfo D_ovl56_80135208 = {
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
sb32 gmStageClearCheckHaveTimer();

// 80131B00
void func_ovl56_80131B00(Gfx **dl)
{
	gSPSetGeometryMode(dl[0]++, G_LIGHTING);
	ftRenderLightsDrawReflect(dl, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 80131B58
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

// 80131BF8
void gmStageClearSetDigitSpriteColor(SObj *sobj, s32 file_id, gsColorRGBPair *colors_default)
{
	gsColorRGBPair colors_all[ARRAY_COUNT(dGMStageClearDigitSpriteColors)] = dGMStageClearDigitSpriteColors;
	gsColorRGBPair *colors_id = &colors_all[file_id];

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

// 80131CC4
s32 gmStageClearGetScoreDigitCount(s32 points, s32 digit_count_max)
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

// 80131D70
Sprite* gmStageClearGetScoreDigitSprite(s32 digit_kind, s32 offset_id)
{
	s32 file_array_ids[3] = dGMStageClearDigitSpriteFileArrayIDs;
	intptr_t offsets[10][3] = dGMStageClearDigitSpriteOffsets;
	return spGetSpriteFromFile(sGMStageClearFiles[file_array_ids[digit_kind]], offsets[offset_id][digit_kind]);
}

// 80131E10
void gmStageClearMakeScoreDigitSObjs(GObj *gobj, s32 points, f32 x, f32 y, gsColorRGBPair *colors, s32 offset_x, s32 file_id, s32 sub, s32 digit_count_max, sb32 is_fixed_digit_count)
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
	sobj = gcAppendSObjWithSprite(gobj, gmStageClearGetScoreDigitSprite(file_id, points % 10));

	gmStageClearSetDigitSpriteColor(sobj, file_id, colors);

	calc_x = (sub != 0) ? x - sub : x - (sobj->sprite.width + offset_x);

	sobj->pos.x = calc_x;
	sobj->pos.y = y;

	for (i = 1; i < ((is_fixed_digit_count != FALSE) ? digit_count_max : gmStageClearGetScoreDigitCount(points, digit_count_max)); i++)
	{
		digit = (func_ovl56_80131B58(10, i) != 0) ? points / func_ovl56_80131B58(10, i) : 0;

		sobj = gcAppendSObjWithSprite(gobj, gmStageClearGetScoreDigitSprite(file_id, digit % 10));

		gmStageClearSetDigitSpriteColor(sobj, file_id, colors);

		calc_x = (sub != 0) ? calc_x - sub : calc_x - (sobj->sprite.width + offset_x);

		sobj->pos.x = calc_x;
		sobj->pos.y = y;
	}
	if (is_negative != FALSE)
	{
		if (file_id == 1)
			sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[4], &lGMStageClearSpritePointsNSign));
		gmStageClearSetDigitSpriteColor(sobj, file_id, colors);

		calc_x = (sub != 0) ? calc_x - sub : calc_x - (sobj->sprite.width + offset_x);

		sobj->pos.x = calc_x;
		sobj->pos.y = y + 3.0F;
	}
}

// 801320E0
void gmStageClearTextProcRender(GObj *gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	func_ovl0_800CCF00(gobj);
	gDPPipeSync(gDisplayListHead[0]++);
}

// 8013213C
void gmStageClearMakeTextSObjs()
{
	GObj *gobj;
	SObj *sobj;

	gobj = omMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
	sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[0], &lGMStageClearSpriteTextShadow));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->sprite.red = 0x00;
	sobj->sprite.green = 0x00;
	sobj->sprite.blue = 0x00;

	sobj->pos.x = 33.0F;
	sobj->pos.y = 23.0F;

	if (sGMStageClearKind == gmStageClear_Kind_Result)
	{
		sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[0], &lGMStageClearSpriteTextResult));
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
		sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[0], &lGMStageClearSpriteTextClear));

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

		if (sGMStageClearKind == gmStageClear_Kind_Stage)
			sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[0], &lGMStageClearSpriteTextStage));
		else
			sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[0], &lGMStageClearSpriteTextGame));

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
	sGMStageClearBonusTextGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
	sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[0], &lGMStageClearSpriteTextBonus));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0x28;
	sobj->sprite.blue = 0x0A;

	sobj->pos.x = 121.0F;
	sobj->pos.y = 67.0F;
}

// 801323F8
void gmStageClearMakeScoreSObjs()
{
	GObj *gobj;
	SObj *sobj;

	sGMStageClearScoreTextGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
	sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[1], &lGMStageClearSpriteTextScore));

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

	gmStageClearMakeScoreDigitSObjs(gobj, sGMStageClearScoreTotal, 295.0F, 197.0F, NULL, 0, 2, 16, 8, TRUE);
}

// 801324FC
void gmStageClearMakeTimerTextSObjs(f32 y)
{
	GObj *gobj;
	SObj *sobj;

	sGMStageClearTimerTextGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
	sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[0], &lGMStageClearSpriteTextTimer));

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

	sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[0], &lGMStageClearSpriteTextColon));

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

	func_800269C0_275C0(nGMSoundFGMUnkClick1);
}

// 8013263C
void gmStageClearMakeTimerDigitSObjs(f32 y)
{
	GObj *gobj;
	SObj *sobj;
	f32 x;
	s32 multiplier;
	s32 unused;

	sGMStageClearTimerMultiplierGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
	sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[3], &lGMStageClearSpriteTextMultiplySign));

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

	switch (sGMStageClear1PGameStage)
	{
	case nGM1PGameStageBonus1:
	case nGM1PGameStageBonus2:
		x = 246.0F;
		multiplier = 200;
		break;

	case nGM1PGameStageBonus3:
		x = 246.0F;
		multiplier = 500;
		break;

	default:
		x = 233.0F;
		multiplier = 50;
	}
	gmStageClearMakeScoreDigitSObjs(gobj, multiplier, x, y - 1.0F, NULL, 1, 0, 0, 4, FALSE);
	gmStageClearMakeScoreDigitSObjs(gobj, sGMStageClearSecondsRemaining, 171.0F, y - 1.0F, NULL, 1, 0, 0, 3, FALSE);
}

// 801327D4
s32 gmStageClearGetAppendTotalTimeScore(f32 y)
{
	GObj *gobj;
	s32 unused;
	s32 time_score_total;
	s32 multiplier;

	sGMStageClearTimerMultiplierGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);

	switch (sGMStageClear1PGameStage)
	{
	case nGM1PGameStageBonus1:
	case nGM1PGameStageBonus2:
		multiplier = 200;
		break;

	case nGM1PGameStageBonus3:
		multiplier = 500;
		break;

	default:
		multiplier = 50;
	}
	time_score_total = sGMStageClearSecondsRemaining * multiplier;

	gmStageClearMakeScoreDigitSObjs(gobj, time_score_total, 200.0F, y - 1.0F, NULL, 1, 0, 0, 5, FALSE);
	func_800269C0_275C0(nGMSoundFGMUnkSoftPing1);

	return time_score_total;
}

// 801328CC
void gmStageClearMakeDamageTextSObjs(f32 y)
{
	GObj *gobj;
	SObj *sobj;
	s32 unused;

	sGMStageClearDamageTextGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);
	omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);

	sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[0], &lGMStageClearSpriteTextDamage));

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

	sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[0], &lGMStageClearSpriteTextColon));

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

	func_800269C0_275C0(nGMSoundFGMUnkClick1);
}

// 80132A20
void gmStageClearMakeDamageDigitSObjs(f32 y)
{
	GObj *gobj;
	SObj *sobj;
	s32 x;
	s32 unused;

	x = (sGMStageClearDamageDealt > 1000) ? 184 : 171;

	sGMStageClearDamageMultiplierGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);

	gmStageClearMakeScoreDigitSObjs(gobj, sGMStageClearDamageDealt, x, (s32)y - 1, NULL, 1, 0, 0, 4, FALSE);
	sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[3], &lGMStageClearSpriteTextMultiplySign));

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

	gmStageClearMakeScoreDigitSObjs(gobj, 10, x + 55, (s32)y - 1, NULL, 1, 0, 0, 2, TRUE);
}

// 80132BB4
s32 gmStageClearGetAppendTotalDamageScore(f32 y)
{
	GObj *gobj;
	s32 unused;
	s32 damage_score_total;

	sGMStageClearDamageMultiplierGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_LINKORDER_DEFAULT, -1);
	damage_score_total = sGMStageClearDamageDealt * 10;

	gmStageClearMakeScoreDigitSObjs(gobj, damage_score_total, 200.0F, (s32)y - 1, NULL, 1, 0, 0, 5, FALSE);
	func_800269C0_275C0(nGMSoundFGMUnkSoftPing1);

	return damage_score_total;
}

// 80132C80
void gmStageClearMakeTargetTextSObjs()
{
	GObj *gobj;
	SObj *sobj;
	s32 y1 = 94, y2 = 96;

	sGMStageClearTargetGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
	sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[0], &lGMStageClearSpriteTextTarget));

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

	sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[0], &lGMStageClearSpriteTextColon));

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

	func_800269C0_275C0(nGMSoundFGMUnkClick1);
}

// 80132DC0
void func_ovl56_80132DC0(GObj *gobj)
{
	gobj->flags = (gobj->user_data.u < D_ovl56_801352CC) ? GOBJ_FLAG_NONE : GOBJ_FLAG_NORENDER;

	if (gobj->user_data.u == D_ovl56_801352CC)
	{
		func_800269C0_275C0(nGMSoundFGMUnkSoftPing1);
		omEjectGObj(sGMStageClearScoreTextGObj);
		sGMStageClearScoreTotal += 1000;
		gmStageClearMakeScoreSObjs();
	}
}

// 80132E40
void func_ovl56_80132E40(f32 x, f32 y, s32 objective_num)
{
	GObj *gobj;
	SObj *sobj;

	sGMStageClearBonusObjectiveGObjs[objective_num] = gobj = omMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
	omAddGObjCommonProc(gobj, func_ovl56_80132DC0, 1, 1);

	gobj->user_data.u = (objective_num * 10) + D_ovl56_801352CC;

	switch (sGMStageClear1PGameStage)
	{
	case nGM1PGameStageBonus1:
		sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[5], &lGMStageClearSpriteTarget));
		break;

	case nGM1PGameStageBonus2:
		sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[5], &lGMStageClearSpritePlatform));
		break;
	}
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = x;
	sobj->pos.y = y;
}

// 80132F78
void func_ovl56_80132F78()
{
	s32 i = 0;

	if (sGMStageClearBonusObjectivesCleared > 0)
	{
		s32 x = 130;

		do
		{
			func_ovl56_80132E40(x, 93.0F, i);
			i++, x += 16;
		}
		while (i < sGMStageClearBonusObjectivesCleared);
	}
}

// 80132FF8
gmStageClearStats* gmStageClearSetupBonusStats(gmStageClearStats *bonus_setup, s32 bonus_id)
{
	gmStageClearStats bonus;

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

// 8013305C
sb32 gmStageClearCheckHaveBonusStats()
{
	s32 unused[3];
	gmStageClearStats bonus;
	s32 i = 0; while (TRUE) // WARNING: Newline memes
	{
		gmStageClearSetupBonusStats(&bonus, i);

		i++;

		if (sGMStageClearBonusMasks[bonus.bonus_array_id] & (1 << bonus.bonus_id))
			return TRUE;

		if (i == GS_BITCOUNT(sGMStageClearBonusMasks))
			return FALSE;
	}
}

// 801330F0
sb32 gmStageClearCheckGameClearBonus(s32 bonus_id)
{
	switch (bonus_id)
	{
	case GM1PGAME_BONUS_KIND_GAMECLEAR:
	case GM1PGAME_BONUS_KIND_NOMISSCLEAR:
	case GM1PGAME_BONUS_KIND_NODAMAGECLEAR:
	case GM1PGAME_BONUS_KIND_SPEEDKING:
	case GM1PGAME_BONUS_KIND_SPEEDDEMON:
		return TRUE;

	default:
		return FALSE;
	}
}

// 80133128
s32 gmStageClearGetNoMissMultiplier(s32 stage)
{
	s32 nomiss[14] = dGMStageClearNoMissBonusMultiplierArray;
	return nomiss[stage];
}

// 80133188
void gmStageClearCommonProcUpdate(GObj *gobj)
{
	if (gobj->user_data.u == D_ovl56_801352CC)
		func_800269C0_275C0(nGMSoundFGMUnkClick1);

	gobj->flags = (gobj->user_data.u < D_ovl56_801352CC) ? GOBJ_FLAG_NONE : GOBJ_FLAG_NORENDER;
}

// 801331EC
s32 gmStageClearAppendBonusStatGetPoints(s32 bonus_id, s32 bonus_num, f32 x, f32 y)
{
	GObj *gobj;
	SObj *sobj;
	s32 points;

	intptr_t offsets[5] = dGMStageClearDifficultySpriteOffsets;
	gsColorRGBPair colors = dGMStageClearScoreDigitColors;

	sGMStageClearBonusStatGObjs[bonus_num] = gobj = omMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
	omAddGObjCommonProc(gobj, gmStageClearCommonProcUpdate, 1, 1);

	gobj->user_data.u = (bonus_num * 10) + D_ovl56_801352CC;

	if (bonus_id == GM1PGAME_BONUS_KIND_GAMECLEAR)
		sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[0], offsets[sGMStageClearDifficulty]));
	else
		sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[0], dGMStageClearBonusData[bonus_id].offset));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = x;
	sobj->pos.y = y;

	if (gmStageClearCheckGameClearBonus(bonus_id) != FALSE)
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
	if (bonus_id == GM1PGAME_BONUS_KIND_NOMISS)
	{
		sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[4], &lGMStageClearSpriteBonusMultiplySign));

		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;

		sobj->pos.x = x + 40.0F;
		sobj->pos.y = y - 1.0F;

		sobj->sprite.red = 0xFF;
		sobj->sprite.green = 0xFF;
		sobj->sprite.blue = 0x00;

		gmStageClearMakeScoreDigitSObjs(gobj, gmStageClearGetNoMissMultiplier(sGMStageClear1PGameStage), (x + 40.0F) + 26.0F, y - 1.0F, &colors, 0, 1, 0, 2, FALSE);
	}
	sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[4], &lGMStageClearSpriteBonusColon));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 183.0F;
	sobj->pos.y = y;

	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0xFF;
	sobj->sprite.blue = 0x00;

	switch (bonus_id)
	{
	case GM1PGAME_BONUS_KIND_NOMISS:
		points = dGMStageClearBonusData[bonus_id].points * gmStageClearGetNoMissMultiplier(sGMStageClear1PGameStage);
		break;

	case GM1PGAME_BONUS_KIND_GAMECLEAR:
		points = dGMStageClearBonusData[bonus_id].points * (sGMStageClearDifficulty + 1);
		break;

	default:
		points = dGMStageClearBonusData[bonus_id].points;
	}
	gmStageClearMakeScoreDigitSObjs(gobj, points, 241.0F, y - 1.0F, NULL, 0, 1, 0, 6, FALSE);

	return points;
}

// 801335A0
void gmStageClearMakeBonusPageArrow()
{
	GObj *gobj;
	SObj *sobj;

	sGMStageClearBonusStatGObjs[9] = gobj = omMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
	omAddGObjCommonProc(gobj, gmStageClearCommonProcUpdate, 1, 1);

	gobj->user_data.u = D_ovl56_801352CC + 90;

	sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[0], &sGMStageClearSpriteBonusPageArrow));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 249.0F;
	sobj->pos.y = 176.0F;
}

// 80133668
sb32 gmStageClearCheckHaveBonusID(s32 bonus_id)
{
	gmStageClearStats bonus;

	while (bonus_id < GS_BITCOUNT(sGMStageClearBonusMasks))
	{
		gmStageClearSetupBonusStats(&bonus, bonus_id);

		bonus_id++;

		if (sGMStageClearBonusMasks[bonus.bonus_array_id] & (1 << bonus.bonus_id))
			return TRUE;
	}
	return FALSE;
}

// 801336F8
s32 gmStageClearUpdateGetBonusStatPointsAll()
{
	s32 unused[2];
	s32 i;
	s32 points;
	gmStageClearStats bonus;

	points = 0;

	for (i = 0; i < ARRAY_COUNT(sGMStageClearBonusStatGObjs); i++)
		sGMStageClearBonusStatGObjs[i] = NULL;

	D_ovl56_80135334 = 0;
	sGMStageClearBonusNum = 0;

	while (TRUE)
	{
		if (sGMStageClearBonusID == GS_BITCOUNT(sGMStageClearBonusMasks))
		{
			sGMStageClearIsAdvance = TRUE;
			return points;
		}
		if (sGMStageClearBonusNum == (ARRAY_COUNT(sGMStageClearBonusStatGObjs) - 1))
		{
			if (gmStageClearCheckHaveBonusID(sGMStageClearBonusID) == FALSE)
			{
				sGMStageClearIsAdvance = TRUE;
				return points;
			}
			gmStageClearMakeBonusPageArrow();
			return points;
		}
		gmStageClearSetupBonusStats(&bonus, sGMStageClearBonusID);

		if (sGMStageClearBonusMasks[bonus.bonus_array_id] & (1 << bonus.bonus_id))
		{
			points += gmStageClearAppendBonusStatGetPoints(sGMStageClearBonusID, sGMStageClearBonusNum, 80.0F, (sGMStageClearBonusNum * 11) + 86);
			sGMStageClearBonusNum++;
		}
		sGMStageClearBonusID++;
	}
}

// 801338A0
void gmStageClearMakeBonusTable()
{
	GObj *gobj;
	SObj *sobj;

	gobj = omMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

	omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
	sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[0], &lGMStageClearSpriteBonusBorder));

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

	sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[0], &lGMStageClearSpriteTextSpecialBonus));

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

// 801339C0
void gmStageClearFrameCopyBackgroundProcRender(GObj *gobj)
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


#define spGetSpriteFromFile(file, offset)\
((Sprite*) ((uintptr_t)(file) + (intptr_t)(offset)))

// 80133AC0
void gmStageClearMakeFrameCopyBackground()
{
	GObj *gobj;
	SObj *sobj;

	gobj = omMakeGObjSPAfter(0, NULL, 0x12, GOBJ_LINKORDER_DEFAULT);

	omAddGObjRenderProc(gobj, gmStageClearFrameCopyBackgroundProcRender, 0x1B, GOBJ_DLLINKORDER_DEFAULT, -1);
	sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMStageClearFiles[6], &D_NF_00020718));

	sobj->sprite.attr &= ~SP_FASTCOPY;

	sobj->pos.x = 10.0F;
	sobj->pos.y = 10.0F;
}

// 80133B48
void func_ovl56_80133B48()
{
	Camera *cam = CameraGetStruct(func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_ovl0_800CD2CC, 0x50, CAMERA_MASK_DLLINK(26), -1, 0, 1, 0, 1, 0));
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80133BE8
void func_ovl56_80133BE8()
{
	Camera *cam = CameraGetStruct(func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_ovl0_800CD2CC, 0x5A, CAMERA_MASK_DLLINK(27), -1, 0, 1, 0, 1, 0));
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80133C88
void func_ovl56_80133C88()
{
	s32 i;

	D_ovl56_801352CC = 0;
	D_ovl56_801352D0 = 0;

	sGMStageClear1PGameStage = gSceneData.spgame_stage;
	sGMStageClearDifficulty = gSaveData.spgame_difficulty;

	switch (sGMStageClear1PGameStage)
	{
	default:
		sGMStageClearKind = gmStageClear_Kind_Stage;
		break;

	case nGM1PGameStageBonus1:
	case nGM1PGameStageBonus2:
	case nGM1PGameStageBonus3:
		sGMStageClearKind = gmStageClear_Kind_Result;
		sGMStageClearBonusObjectivesCleared = gSceneData.bonus_tasks_current;
		break;

	case nGM1PGameStageBoss:
		sGMStageClearKind = gmStageClear_Kind_Game;
		break;
	}
	sGMStageClearSecondsRemaining = gSceneData.spgame_time_seconds;
	sGMStageClearDamageDealt = D_800A4B18.players[gSceneData.spgame_player].total_damage_dealt;
	sGMStageClearScoreTotal = gSceneData.spgame_score;

	sGMStageClearBonusMasks[0] = gSceneData.bonus_get_mask[0];
	sGMStageClearBonusMasks[1] = gSceneData.bonus_get_mask[1];
	sGMStageClearBonusMasks[2] = gSceneData.bonus_tasks_complete;

	D_ovl56_801352D8 = gmStageClearCheckHaveBonusStats();

	sGMStageClearBonusID = 0;
	D_ovl56_801353A0 = 0;

	for (i = 0; i < ARRAY_COUNT(sGMStageClearBonusStatGObjs); i++)
		sGMStageClearBonusStatGObjs[i] = NULL;

	for (i = 0; i < ARRAY_COUNT(sGMStageClearBonusObjectiveGObjs); i++)
		sGMStageClearBonusObjectiveGObjs[i] = NULL;

	sGMStageClearTimerTextGObj = NULL;
	sGMStageClearTimerMultiplierGObj = NULL;
	sGMStageClearTargetGObj = NULL;

	D_ovl56_80135334 = 0;
	sGMStageClearIsAdvance = FALSE;
	D_ovl56_8013533C = 0;

	if ((sGMStageClearKind == gmStageClear_Kind_Stage) || (sGMStageClearKind == gmStageClear_Kind_Game))
	{
		if (gmStageClearCheckHaveTimer() != FALSE)
		{
			D_ovl56_801353B8 = 10;
			D_ovl56_801353BC = 20;
			D_ovl56_801353C0 = 40;
			D_ovl56_801353C4 = 60;
		}
		else
		{
			D_ovl56_801353A8 = 10;
			D_ovl56_801353AC = 20;
			D_ovl56_801353B0 = 60;
			D_ovl56_801353B4 = 80;
			D_ovl56_801353B8 = 30;
			D_ovl56_801353BC = 40;
			D_ovl56_801353C0 = 100;
			D_ovl56_801353C4 = 120;
		}
	}
}

// 80133EEC
void gmStageClearUpdateTotal1PGameScore()
{
	gSceneData.spgame_score = sGMStageClearScoreTotal;
}

// 80133F00
void func_ovl56_80133F00()
{
	gmStageClearMakeScoreSObjs();
	func_800269C0_275C0(0xA8);
}

// 80133F28
sb32 gmStageClearCheckHaveTimer()
{
	if (gSceneData.spgame_time_limit == GMBATTLE_TIMELIMIT_INFINITE)
	{
		return TRUE;
	}
	else return FALSE;
}

// 80133F50
void func_ovl56_80133F50()
{
	s32 i;

	if (D_ovl56_80135340 == D_ovl56_801352CC)
	{
		for (i = 0; i < ARRAY_COUNT(sGMStageClearBonusStatGObjs); i++)
		{
			if (sGMStageClearBonusStatGObjs[i] != NULL)
				omEjectGObj(sGMStageClearBonusStatGObjs[i]);
		}
		sGMStageClearScoreTotal += gmStageClearUpdateGetBonusStatPointsAll();

		if (sGMStageClearScoreTotal < 0)
			sGMStageClearScoreTotal = 0;
		D_ovl56_80135344 = (sGMStageClearBonusNum * 10) + D_ovl56_801352CC + 20;
	}
	else if (D_ovl56_80135344 == D_ovl56_801352CC)
	{
		omEjectGObj(sGMStageClearScoreTextGObj);
		func_ovl56_80133F00();

		D_ovl56_80135334 = 1;

		if (sGMStageClearIsAdvance != FALSE)
			D_ovl56_80135348 = D_ovl56_801352CC + 20;
	}
	else if (D_ovl56_80135348 == D_ovl56_801352CC)
		D_ovl56_8013533C = 1;
}

// 8013407C
void gmStageClearUpdateGameClearScore()
{
	s32 unused;
	f32 y;

	if (gmStageClearCheckHaveTimer() == FALSE)
	{
		if (D_ovl56_801352CC == D_ovl56_801353A8)
			gmStageClearMakeTimerTextSObjs(94.0F);
		if (D_ovl56_801352CC == D_ovl56_801353AC)
			gmStageClearMakeTimerDigitSObjs(94.0F);
		if (D_ovl56_801352CC == D_ovl56_801353B0)
		{
			omEjectGObj(sGMStageClearTimerMultiplierGObj);
			sGMStageClearScoreTotal += gmStageClearGetAppendTotalTimeScore(94.0F);
		}
		if (D_ovl56_801352CC == D_ovl56_801353B4)
		{
			omEjectGObj(sGMStageClearScoreTextGObj);
			func_ovl56_80133F00();
		}
	}
	y = (gmStageClearCheckHaveTimer() == FALSE) ? 126.0F : 94.0F;

	if (D_ovl56_801352CC == D_ovl56_801353B8)
		gmStageClearMakeDamageTextSObjs(y);

	if (D_ovl56_801352CC == D_ovl56_801353BC)
		gmStageClearMakeDamageDigitSObjs(y);

	if (D_ovl56_801352CC == D_ovl56_801353C0)
	{
		omEjectGObj(sGMStageClearDamageMultiplierGObj);
		sGMStageClearScoreTotal += gmStageClearGetAppendTotalDamageScore(y);
	}
	if (D_ovl56_801352CC == D_ovl56_801353C4)
	{
		omEjectGObj(sGMStageClearScoreTextGObj);
		func_ovl56_80133F00();

		if (D_ovl56_801352D8 != 0)
		{
			D_ovl56_80135340 = D_ovl56_80135344 = D_ovl56_80135348 = D_ovl56_801352CC + 10;
		}
		else D_ovl56_8013533C = 1;
	}
	if ((D_ovl56_801352D8 != 0) && (sGMStageClearBonusTextGObj != NULL) && (D_ovl56_80135340 == D_ovl56_801352CC))
	{
		omEjectGObj(sGMStageClearBonusTextGObj);
		sGMStageClearBonusTextGObj = NULL;

		if (sGMStageClearTimerTextGObj != NULL)
		{
			omEjectGObj(sGMStageClearTimerTextGObj);
			sGMStageClearTimerTextGObj = NULL;

			omEjectGObj(sGMStageClearTimerMultiplierGObj);
			sGMStageClearTimerMultiplierGObj = NULL;
		}
		omEjectGObj(sGMStageClearDamageTextGObj);
		sGMStageClearDamageTextGObj = NULL;

		omEjectGObj(sGMStageClearDamageMultiplierGObj);
		sGMStageClearDamageMultiplierGObj = NULL;

		gmStageClearMakeBonusTable();
	}
	if (D_ovl56_801352D8 != 0)
		func_ovl56_80133F50();
}

// 80134340 - ??? Exactly the same as the function above ???
void gmStageClearUpdateStageClearScore()
{
	s32 unused;
	f32 y;

	if (gmStageClearCheckHaveTimer() == FALSE)
	{
		if (D_ovl56_801352CC == D_ovl56_801353A8)
			gmStageClearMakeTimerTextSObjs(94.0F);

		if (D_ovl56_801352CC == D_ovl56_801353AC)
			gmStageClearMakeTimerDigitSObjs(94.0F);

		if (D_ovl56_801352CC == D_ovl56_801353B0)
		{
			omEjectGObj(sGMStageClearTimerMultiplierGObj);
			sGMStageClearScoreTotal += gmStageClearGetAppendTotalTimeScore(94.0F);
		}
		if (D_ovl56_801352CC == D_ovl56_801353B4)
		{
			omEjectGObj(sGMStageClearScoreTextGObj);
			func_ovl56_80133F00();
		}
	}
	y = (gmStageClearCheckHaveTimer() == FALSE) ? 126.0F : 94.0F;

	if (D_ovl56_801352CC == D_ovl56_801353B8)
		gmStageClearMakeDamageTextSObjs(y);

	if (D_ovl56_801352CC == D_ovl56_801353BC)
		gmStageClearMakeDamageDigitSObjs(y);

	if (D_ovl56_801352CC == D_ovl56_801353C0)
	{
		omEjectGObj(sGMStageClearDamageMultiplierGObj);
		sGMStageClearScoreTotal += gmStageClearGetAppendTotalDamageScore(y);
	}
	if (D_ovl56_801352CC == D_ovl56_801353C4)
	{
		omEjectGObj(sGMStageClearScoreTextGObj);
		func_ovl56_80133F00();

		if (D_ovl56_801352D8 != 0)
			D_ovl56_80135340 = D_ovl56_80135344 = D_ovl56_80135348 = D_ovl56_801352CC + 10;
		else
			D_ovl56_8013533C = 1;
	}
	if ((D_ovl56_801352D8 != 0) && (sGMStageClearBonusTextGObj != NULL) && (D_ovl56_80135340 == D_ovl56_801352CC))
	{
		omEjectGObj(sGMStageClearBonusTextGObj);
		sGMStageClearBonusTextGObj = NULL;

		if (sGMStageClearTimerTextGObj != NULL)
		{
			omEjectGObj(sGMStageClearTimerTextGObj);
			sGMStageClearTimerTextGObj = NULL;

			omEjectGObj(sGMStageClearTimerMultiplierGObj);
			sGMStageClearTimerMultiplierGObj = NULL;
		}
		omEjectGObj(sGMStageClearDamageTextGObj);
		sGMStageClearDamageTextGObj = NULL;

		omEjectGObj(sGMStageClearDamageMultiplierGObj);
		sGMStageClearDamageMultiplierGObj = NULL;

		gmStageClearMakeBonusTable();
	}
	if (D_ovl56_801352D8 != 0)
		func_ovl56_80133F50();
}

// 80134604
void gmStageClearUpdateResultScore()
{
	s32 i;

	if (sGMStageClear1PGameStage != nGM1PGameStageBonus3)
	{
		if (D_ovl56_801352CC == 10)
			gmStageClearMakeTargetTextSObjs();
		else if (D_ovl56_801352CC == 20)
		{
			func_ovl56_80132F78();
			D_ovl56_801353A0 = (sGMStageClearBonusObjectivesCleared * 10) + D_ovl56_801352CC;
		}
	}
	else if (D_ovl56_801352CC == 10)
		D_ovl56_801353A0 = D_ovl56_801352CC;

	if (D_ovl56_801353A0 != 0)
	{
		if ((gmStageClearCheckHaveTimer() != FALSE) && (sGMStageClear1PGameStage != nGM1PGameStageBonus3))
		{
			if (D_ovl56_801353A0 == D_ovl56_801352CC)
			{
				if (D_ovl56_801352D8 != 0)
					D_ovl56_80135340 = D_ovl56_80135344 = D_ovl56_80135348 = D_ovl56_801352CC + 10;
				else
					D_ovl56_8013533C = 1;
			}
		}
		else if (D_ovl56_801352CC == (D_ovl56_801353A0 + 10))
		{
			if (sGMStageClear1PGameStage == nGM1PGameStageBonus3)
				gmStageClearMakeTimerTextSObjs(94.0F);

			else if (sGMStageClearBonusObjectivesCleared == ARRAY_COUNT(sGMStageClearBonusObjectiveGObjs))
				gmStageClearMakeTimerTextSObjs(126.0F);
		}
		else if (D_ovl56_801352CC == (D_ovl56_801353A0 + 30))
		{
			if (sGMStageClear1PGameStage == nGM1PGameStageBonus3)
				gmStageClearMakeTimerDigitSObjs(94.0F);

			else if (sGMStageClearBonusObjectivesCleared == 10)
				gmStageClearMakeTimerDigitSObjs(126.0F);
		}
		else if (D_ovl56_801352CC == (D_ovl56_801353A0 + 50))
		{
			if (sGMStageClear1PGameStage == nGM1PGameStageBonus3)
			{
				omEjectGObj(sGMStageClearTimerMultiplierGObj);
				sGMStageClearScoreTotal += gmStageClearGetAppendTotalTimeScore(94.0F);

			}
			else if (sGMStageClearBonusObjectivesCleared == ARRAY_COUNT(sGMStageClearBonusObjectiveGObjs))
			{
				omEjectGObj(sGMStageClearTimerMultiplierGObj);
				sGMStageClearScoreTotal += gmStageClearGetAppendTotalTimeScore(126.0F);
			}
		}
		else if (D_ovl56_801352CC == (D_ovl56_801353A0 + 70))
		{
			if ((sGMStageClearBonusObjectivesCleared == ARRAY_COUNT(sGMStageClearBonusObjectiveGObjs)) || (sGMStageClear1PGameStage == nGM1PGameStageBonus3))
			{
				omEjectGObj(sGMStageClearScoreTextGObj);
				func_ovl56_80133F00();
			}
			if (D_ovl56_801352D8 != 0)
				D_ovl56_80135340 = D_ovl56_80135344 = D_ovl56_80135348 = D_ovl56_801352CC + 10;
			else
				D_ovl56_8013533C = 1;
		}
	}
	if ((D_ovl56_801352D8 != 0) && (sGMStageClearBonusTextGObj != NULL) && (D_ovl56_80135340 == D_ovl56_801352CC))
	{
		omEjectGObj(sGMStageClearBonusTextGObj);
		sGMStageClearBonusTextGObj = NULL;

		if (sGMStageClearTargetGObj != NULL)
		{
			omEjectGObj(sGMStageClearTargetGObj);
			sGMStageClearTargetGObj = NULL;

			for (i = 0; i < ARRAY_COUNT(sGMStageClearBonusObjectiveGObjs); i++)
			{
				if (sGMStageClearBonusObjectiveGObjs[i] != NULL)
				{
					omEjectGObj(sGMStageClearBonusObjectiveGObjs[i]);
					sGMStageClearBonusObjectiveGObjs[i] = NULL;
				}
			}
		}
		if (sGMStageClearTimerTextGObj != NULL)
		{
			omEjectGObj(sGMStageClearTimerTextGObj);
			sGMStageClearTimerTextGObj = NULL;

			omEjectGObj(sGMStageClearTimerMultiplierGObj);
			sGMStageClearTimerMultiplierGObj = NULL;
		}
		gmStageClearMakeBonusTable();
	}
	if (D_ovl56_801352D8 != 0)
		func_ovl56_80133F50();
}

// 801349F0
void gmStageClearSceneProcUpdate(GObj *gobj)
{
	D_ovl56_801352CC++;

	if (D_ovl56_801352CC >= 10)
	{
		if (func_ovl1_8039076C(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
		{
			if (D_ovl56_8013533C != 0)
			{
				gSceneData.scene_previous = gSceneData.scene_current;
				gSceneData.scene_current = scMajor_Kind_Title;

				gmStageClearUpdateTotal1PGameScore();
				leoInitUnit_atten();
			}
			else if ((D_ovl56_80135334 != 0) && (sGMStageClearIsAdvance == FALSE))
			{
				D_ovl56_80135340 = D_ovl56_801352CC;
			}
		}
		switch (sGMStageClearKind)
		{
		case gmStageClear_Kind_Game:
			gmStageClearUpdateGameClearScore();
			break;

		case gmStageClear_Kind_Stage:
			gmStageClearUpdateStageClearScore();
			break;

		case gmStageClear_Kind_Result:
			gmStageClearUpdateResultScore();
			break;
		}
	}
}

// 80134AF4
void func_ovl56_80134AF4()
{
	s32 i, j;
	gsPixelComponent *this_pixel;
	gsPixelComponent *width_pixel;
	gsPixelComponent *other_pixel;
	s32 temp1, temp2;

	this_pixel = (uintptr_t)D_80044FA8_407B8 + 0x1914;
	other_pixel = (*(gsPixelComponent***)((uintptr_t)sGMStageClearFiles[6] + (intptr_t)&D_NF_0002074C))[2];

	for (i = 0; i < 220; i++)
	{
		width_pixel = this_pixel;

		for (j = 0; j < 75; j++)
		{
			temp1 = this_pixel->unk_framebuffer_0x0;
			temp2 = this_pixel->unk_framebuffer_0x4;

			this_pixel++;

			if (i & 1)
			{
				other_pixel->unk_framebuffer_0x0 = temp2;
				other_pixel->unk_framebuffer_0x4 = temp1;

				other_pixel++;
			}
			else
			{
				other_pixel->unk_framebuffer_0x0 = temp1;
				other_pixel->unk_framebuffer_0x4 = temp2;

				other_pixel++;
			}
		}
		this_pixel = width_pixel + 80;

		if (((i + 1) % 6) == 0)
			other_pixel++;
	}
}

// 80134CC4
void gmStageClearInitAll()
{
	s32 unused;
	rdSetup rldm_setup;

	rldm_setup.table_addr = &D_NF_001AC870;
	rldm_setup.table_files_num = &D_NF_00000854;
	rldm_setup.file_heap = NULL;
	rldm_setup.file_heap_size = 0;
	rldm_setup.status_buf = sGMStageClearStatusBuf;
	rldm_setup.status_buf_size = ARRAY_COUNT(sGMStageClearStatusBuf);
	rldm_setup.force_buf = sGMStageClearForceBuf;
	rldm_setup.force_buf_size = ARRAY_COUNT(sGMStageClearForceBuf);

	rdManagerInitSetup(&rldm_setup);
	rdManagerLoadFiles(dGMStageClearFileIDs, ARRAY_COUNT(dGMStageClearFileIDs), sGMStageClearFiles, gsMemoryAlloc(rdManagerGetAllocSize(dGMStageClearFileIDs, ARRAY_COUNT(dGMStageClearFileIDs)), 0x10));
	omMakeGObjSPAfter(0, gmStageClearSceneProcUpdate, 0, GOBJ_LINKORDER_DEFAULT);
	func_ovl56_80134AF4();
	func_8000B9FC(0, 0x80000000, 0x64, 0, 0);
	func_ovl56_80133C88();
	func_ovl56_80133B48();
	func_ovl56_80133BE8();
	gmStageClearMakeFrameCopyBackground();
	gmStageClearMakeTextSObjs();
	gmStageClearMakeScoreSObjs();

	switch (sGMStageClear1PGameStage)
	{
	case nGM1PGameStageBoss:
		auPlaySong(0, 0x1D);
		break;

	case nGM1PGameStageBonus1:
	case nGM1PGameStageBonus2:
		if (D_800A4B08 == 10)
			auPlaySong(0, 0x1C);
		else
			auPlaySong(0, 0x1E);
		break;

	case nGM1PGameStageBonus3:
		if (D_800A4AEC != 0)
			auPlaySong(0, 0x1C);
		else
			auPlaySong(0, 0x1E);
		break;

	default:
		auPlaySong(0, 0x1B);
		break;
	}
}

// 80134E84
void gmStageClearStartScene()
{
	D_ovl56_801351EC.unk_scdatabounds_0xC = ((intptr_t)&D_NF_800A5240 - 0x1900);

	func_80007024(&D_ovl56_801351EC);

	D_ovl56_80135208.arena_size = ((uintptr_t)&lGMStageClearArenaHi - (uintptr_t)&lGMStageClearArenaLo);

	gsGTLSceneInit(&D_ovl56_80135208);
}