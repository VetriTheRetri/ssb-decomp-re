#include <ft/fighter.h>
#include <sc/scene.h>
#include <sys/system_00.h>
#include <sys/thread6.h>
#include <lb/library.h>

extern void func_80007080(Vp *vp, f32 arg1, f32 arg2, f32 arg3, f32 arg4);



// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern void *D_80044FA8_407B8;

extern uintptr_t D_NF_00000050;								// 0x00000050
extern uintptr_t D_NF_00000051;								// 0x00000051
extern uintptr_t D_NF_000000A4;								// 0x000000A4
extern uintptr_t D_NF_000000A5;								// 0x000000A5
extern uintptr_t D_NF_00000024;								// 0x00000024
extern uintptr_t D_NF_00000097;								// 0x00000097
extern uintptr_t D_NF_0000001A;								// 0x0000001A

extern intptr_t lGRWallpaperTraining0Sprite;                // 0x00020718

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
lbFileNode sSC1PStageClearStatusBuf[48];

// 0x80135550
lbFileNode sSC1PStageClearForceBuf[7];

// 0x80135588
void *sSC1PStageClearFiles[7];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80134EE0
u32 dSC1PStageClearFileIDs[/* */] = 
{
	&D_NF_00000050,
	&D_NF_00000051,
	&D_NF_000000A4,
	&D_NF_000000A5,
	&D_NF_00000024,
	&D_NF_00000097,
	&D_NF_0000001A
};

// 0x80134EFC
sc1PStageClearScore dSC1PStageClearBonusData[/* */] =
{
	// Cheap Shot
	{ &lSC1PStageClearBonusCheapShot, -99 },

	// Star Finish
	{ &lSC1PStageClearBonusStarFinish, 10000 },

	// No Item
	{ &lSC1PStageClearBonusNoItem, 1000 },

	// Shield Breaker
	{ &lSC1PStageClearBonusShieldBreaker, 8000 },

	// Judo Warrior
	{ &lSC1PStageClearBonusJudoWarrior, 5000 },

	// Hawk
	{ &lSC1PStageClearBonusHawk, 18000 },

	// Shooter
	{ &lSC1PStageClearBonusShooter, 12000 },

	// Heavy Damage
	{ &lSC1PStageClearBonusHeavyDamage, 28000 },

	// All Variations
	{ &lSC1PStageClearBonusAllVariations, 30000 },

	// Item Strike
	{ &lSC1PStageClearBonusItemStrike, 20000 },

	// Double KO
	{ &lSC1PStageClearBonusDoubleKO, 0 },

	// Trickster
	{ &lSC1PStageClearBonusTrickster, 11000 },

	// Giant Impact
	{ &lSC1PStageClearBonusGiantImpact, 0 },

	// Speedster
	{ &lSC1PStageClearBonusSpeedster, 10000 },

	// Item Throw
	{ &lSC1PStageClearBonusItemThrow, 16000 },

	// Triple KO
	{ &lSC1PStageClearBonusTripleKO, 0 },

	// Last Chance
	{ &lSC1PStageClearBonusLastChance, 0 },

	// Pacifist
	{ &lSC1PStageClearBonusPacifist, 60000 },

	// Perfect
	{ &lSC1PStageClearBonusPerfect, 30000 },

	// No Miss
	{ &lSC1PStageClearBonusNoMiss, 5000 },

	// No Damage
	{ &lSC1PStageClearBonusNoDamage, 15000 },

	// Full Power
	{ &lSC1PStageClearBonusFullPower, 5000 },

	// Final Stage Clear
	{ &lSC1PStageClearBonusGameClear, 70000 },

	// No Miss Clear
	{ &lSC1PStageClearBonusNoMissClear, 70000 },

	// No Damage Clear
	{ &lSC1PStageClearBonusNoDamageClear, 400000 },

	// Speed King
	{ &lSC1PStageClearBonusSpeedKing, 40000 },

	// Speed Demon
	{ &lSC1PStageClearBonusSpeedDemon, 80000 },

	// Mew Catcher
	{ &lSC1PStageClearBonusMewCatcher, 15000 },

	// Star Clear
	{ &lSC1PStageClearBonusStarClear, 12000 },

	// Vegetarian
	{ &lSC1PStageClearBonusVegetarian, 9000 },

	// Heart Throb
	{ &lSC1PStageClearBonusHeartThrob, 17000 },

	// Throw Down
	{ &lSC1PStageClearBonusThrowDown, 2000 },

	// Smash Mania
	{ &lSC1PStageClearBonusSmashMania, 3500 },

	// Smashless
	{ &lSC1PStageClearBonusSmashless, 5000 },

	// Special Move
	{ &lSC1PStageClearBonusSpecialMove, 5000 },

	// Single Move
	{ &lSC1PStageClearBonusSingleMove, 8000 },

	// Pokemon Finish
	{ &lSC1PStageClearBonusPokemonFinish, 11000 },

	// Booby Trap
	{ &lSC1PStageClearBonusBoobyTrap, 12000 },

	// Fighter Stance
	{ &lSC1PStageClearBonusFighterStance, 100 },

	// Mystic
	{ &lSC1PStageClearBonusMystic, 7000 },

	// Comet Mystic
	{ &lSC1PStageClearBonusCometMystic, 10000 },

	// Acid Clear
	{ &lSC1PStageClearBonusAcidClear, 1500 },

	// Bumper Clear
	{ &lSC1PStageClearBonusBumperClear, 10000 },

	// Tornado Clear
	{ &lSC1PStageClearBonusTornadoClear, 3000 },

	// ARWING Clear
	{ &lSC1PStageClearBonusArwingClear, 4000 },

	// Counter Attack
	{ &lSC1PStageClearBonusCounterAttack, 0 },

	// Meteor Smash
	{ &lSC1PStageClearBonusMeteorSmash, 0 },

	// Aerial
	{ &lSC1PStageClearBonusAerial, 0 },

	// Last Second
	{ &lSC1PStageClearBonusLastSecond, 8000 },

	// Lucky 3
	{ &lSC1PStageClearBonusLucky3, 9990 },

	// Jackpot
	{ &lSC1PStageClearBonusJackpot, 3330 },

	// Yoshi Rainbow
	{ &lSC1PStageClearBonusYoshiRainbow, 50000 },

	// Kirby Ranks
	{ &lSC1PStageClearBonusKirbyRanks, 25000 },

	// Bros. Calamity
	{ &lSC1PStageClearBonusBrosCalamity, 25000 },

	// DK Defender
	{ &lSC1PStageClearBonusDKDefender, 10000 },

	// DK Perfect
	{ &lSC1PStageClearBonusDKPerfect, 50000 },

	// Good Friend
	{ &lSC1PStageClearBonusGoodFriend, 8000 },

	// True Friend
	{ &lSC1PStageClearBonusTrueFriend, 25000 }
};

// 0x801350D0
Lights1 dSC1PStageClearLights11 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);

// 0x801350E8
Lights1 dSC1PStageClearLights12 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x00);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void sc1PStageClearProcLights(Gfx **dls)
{
	gSPSetGeometryMode(dls[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
s32 sc1PStageClearGetPowerOf(s32 base, s32 exp)
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
void sc1PStageClearSetDigitSpriteColor(SObj *sobj, s32 digit_kind, syColorRGBPair *colors_default)
{
	// 0x80135100
	syColorRGBPair colors_all[/* */] =
	{
		// Damage / Timer digits
		{
			{ 0x00, 0x00, 0x00 },
			{ 0xC8, 0xCB, 0xD3 }
		},

		// Bonus stat digits
		{
			{ 0x00, 0x00, 0x00 },
			{ 0xFF, 0xFF, 0xFF }
		},

		// Score digits
		{
			{ 0x00, 0x00, 0x00 },
			{ 0xFF, 0xEC, 0x00 }
		}
	};
	syColorRGBPair *colors_id = &colors_all[digit_kind];

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	if (colors_default == NULL)
	{
		sobj->env_color.r = colors_id->prim.r;
		sobj->env_color.g = colors_id->prim.g;
		sobj->env_color.b = colors_id->prim.b;
		sobj->sprite.red     = colors_id->env.r;
		sobj->sprite.green   = colors_id->env.g;
		sobj->sprite.blue    = colors_id->env.b;
	}
	else
	{
		sobj->env_color.r = colors_default->prim.r;
		sobj->env_color.g = colors_default->prim.g;
		sobj->env_color.b = colors_default->prim.b;
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
		s32 digit = (sc1PStageClearGetPowerOf(10, digit_count_current - 1) != 0) ? points / sc1PStageClearGetPowerOf(10, digit_count_current - 1) : 0;

		if (digit != 0)
		{
			return digit_count_current;
		}
		else digit_count_current--;
	}
	return 0;
}

// 0x80131D70
Sprite* sc1PStageClearGetScoreDigitSprite(s32 digit_kind, s32 digit)
{
	// 0x80135114
	s32 file_array_ids[/* */] = { 0, 4, 2 };

	// 0x80135120
	intptr_t offsets[/* */][3] =
	{
		{ &lSC1PStageClearTimerDamageDigit0, &lSC1PStageClearBonusStatDigit0, &lSC1PStageClearScoreDigit0 },
		{ &lSC1PStageClearTimerDamageDigit1, &lSC1PStageClearBonusStatDigit1, &lSC1PStageClearScoreDigit1 },
		{ &lSC1PStageClearTimerDamageDigit2, &lSC1PStageClearBonusStatDigit2, &lSC1PStageClearScoreDigit2 },
		{ &lSC1PStageClearTimerDamageDigit3, &lSC1PStageClearBonusStatDigit3, &lSC1PStageClearScoreDigit3 },
		{ &lSC1PStageClearTimerDamageDigit4, &lSC1PStageClearBonusStatDigit4, &lSC1PStageClearScoreDigit4 },
		{ &lSC1PStageClearTimerDamageDigit5, &lSC1PStageClearBonusStatDigit5, &lSC1PStageClearScoreDigit5 },
		{ &lSC1PStageClearTimerDamageDigit6, &lSC1PStageClearBonusStatDigit6, &lSC1PStageClearScoreDigit6 },
		{ &lSC1PStageClearTimerDamageDigit7, &lSC1PStageClearBonusStatDigit7, &lSC1PStageClearScoreDigit7 },
		{ &lSC1PStageClearTimerDamageDigit8, &lSC1PStageClearBonusStatDigit8, &lSC1PStageClearScoreDigit8 },
		{ &lSC1PStageClearTimerDamageDigit9, &lSC1PStageClearBonusStatDigit9, &lSC1PStageClearScoreDigit9 }
	};

	return gcGetDataFromFile
	(
		Sprite*,
		sSC1PStageClearFiles[file_array_ids[digit_kind]],
		offsets[digit][digit_kind]
	);
}

// 0x80131E10
void sc1PStageClearMakeScoreDigitSObjs
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
)
{
	SObj *sobj;
	f32 calc_x;
	s32 i;
	sb32 is_negative;
	s32 digit;

	is_negative = FALSE;

	if (points < 0)
	{
		if ((digit_kind == 2) || (digit_kind == 0))
		{
			points = 0;
		}
		else
		{
			points = -points;
			is_negative = TRUE;
		}
	}
	sobj = lbCommonMakeSObjForGObj(gobj, sc1PStageClearGetScoreDigitSprite(digit_kind, points % 10));

	sc1PStageClearSetDigitSpriteColor(sobj, digit_kind, colors);

	calc_x = (sub != 0) ? x - sub : x - (sobj->sprite.width + offset_x);

	sobj->pos.x = calc_x;
	sobj->pos.y = y;

	for (i = 1; i < ((is_fixed_digit_count != FALSE) ? digit_count_max : sc1PStageClearGetScoreDigitCount(points, digit_count_max)); i++)
	{
		digit = (sc1PStageClearGetPowerOf(10, i) != 0) ? points / sc1PStageClearGetPowerOf(10, i) : 0;

		sobj = lbCommonMakeSObjForGObj(gobj, sc1PStageClearGetScoreDigitSprite(digit_kind, digit % 10));

		sc1PStageClearSetDigitSpriteColor(sobj, digit_kind, colors);

		calc_x = (sub != 0) ? calc_x - sub : calc_x - (sobj->sprite.width + offset_x);

		sobj->pos.x = calc_x;
		sobj->pos.y = y;
	}
	if (is_negative != FALSE)
	{
		if (digit_kind == 1)
		{
			sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[4], &lSC1PStageClearPointsNSign));
		}
		sc1PStageClearSetDigitSpriteColor(sobj, digit_kind, colors);

		calc_x = (sub != 0) ? calc_x - sub : calc_x - (sobj->sprite.width + offset_x);

		sobj->pos.x = calc_x;
		sobj->pos.y = y + 3.0F;
	}
}

// 0x801320E0
void sc1PStageClearTextProcDraw(GObj *gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	lbCommonDrawSObjAttr(gobj);
	gDPPipeSync(gDisplayListHead[0]++);
}

// 0x8013213C
void sc1PStageClearMakeTextSObjs(void)
{
	GObj *gobj;
	SObj *sobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcDraw, 26, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
	sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearTextShadow));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->sprite.red = 0x00;
	sobj->sprite.green = 0x00;
	sobj->sprite.blue = 0x00;

	sobj->pos.x = 33.0F;
	sobj->pos.y = 23.0F;

	if (sSC1PStageClearKind == nSC1PStageClearKindResult)
	{
		sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearTextResult));
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;

		sobj->env_color.r = 0xFF;
		sobj->env_color.g = 0x00;
		sobj->env_color.b = 0x00;

		sobj->sprite.red = 0xFF;
		sobj->sprite.green = 0xC8;
		sobj->sprite.blue = 0x00;

		sobj->pos.x = 104.0F;
		sobj->pos.y = 24.0F;
	}
	else
	{
		sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearTextClear));

		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;

		sobj->env_color.r = 0xFF;
		sobj->env_color.g = 0x00;
		sobj->env_color.b = 0x00;

		sobj->sprite.red = 0xFF;
		sobj->sprite.green = 0xC8;
		sobj->sprite.blue = 0x00;

		sobj->pos.x = 166.0F;
		sobj->pos.y = 24.0F;

		if (sSC1PStageClearKind == nSC1PStageClearKindStage)
		{
			sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearTextStage));
		}
		else sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearTextGame));

		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;

		sobj->env_color.r = 0xFF;
		sobj->env_color.g = 0x00;
		sobj->env_color.b = 0x00;

		sobj->sprite.red = 0xFF;
		sobj->sprite.green = 0xC8;
		sobj->sprite.blue = 0x00;

		sobj->pos.x = 53.0F;
		sobj->pos.y = 24.0F;
	}
	sSC1PStageClearBonusTextGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcDraw, 26, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
	sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearTextBonus));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0x28;
	sobj->sprite.blue = 0x0A;

	sobj->pos.x = 121.0F;
	sobj->pos.y = 67.0F;
}

// 0x801323F8
void sc1PStageClearMakeScoreSObjs(void)
{
	GObj *gobj;
	SObj *sobj;

	sSC1PStageClearScoreTextGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcDraw, 26, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
	sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[1], &lSC1PStageClearTextScore));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->env_color.r = 0xFF;
	sobj->env_color.g = 0x00;
	sobj->env_color.b = 0x00;

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

	sSC1PStageClearTimerTextGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcDraw, 26, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
	sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearTextTimer));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 42.0F;
	sobj->pos.y = y;

	sobj->env_color.r = 0x00;
	sobj->env_color.g = 0x00;
	sobj->env_color.b = 0x00;

	sobj->sprite.red = 0xB7;
	sobj->sprite.green = 0xE4;
	sobj->sprite.blue = 0xFF;

	sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearTextColon));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 118.0F;
	sobj->pos.y = y + 1.0F;

	sobj->env_color.r = 0x00;
	sobj->env_color.g = 0x00;
	sobj->env_color.b = 0x00;

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

	sSC1PStageClearTimerMultiplierGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcDraw, 26, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
	sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[3], &lSC1PStageClearTextMultiplySign));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 181.0F;
	sobj->pos.y = y + 2.0F;

	sobj->env_color.r = 0x00;
	sobj->env_color.g = 0x00;
	sobj->env_color.b = 0x00;

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

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcDraw, 26, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);

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

	sSC1PStageClearDamageTextGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);
	gcAddGObjDisplay(gobj, sc1PStageClearTextProcDraw, 26, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);

	sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearTextDamage));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 42.0F;
	sobj->pos.y = (s32)y;

	sobj->env_color.r = 0x00;
	sobj->env_color.g = 0x00;
	sobj->env_color.b = 0x00;

	sobj->sprite.red = 0xB7;
	sobj->sprite.green = 0xE4;
	sobj->sprite.blue = 0xFF;

	sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearTextColon));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 118.0F;
	sobj->pos.y = (s32)y + 2;

	sobj->env_color.r = 0x00;
	sobj->env_color.g = 0x00;
	sobj->env_color.b = 0x00;

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

	sSC1PStageClearDamageMultiplierGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcDraw, 26, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);

	sc1PStageClearMakeScoreDigitSObjs(gobj, sSC1PStageClearDamageDealt, x, (s32)y - 1, NULL, 1, 0, 0, 4, FALSE);
	sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[3], &lSC1PStageClearTextMultiplySign));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = x + 10;
	sobj->pos.y = (s32)y + 2;

	sobj->env_color.r = 0x00;
	sobj->env_color.g = 0x00;
	sobj->env_color.b = 0x00;

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

	sSC1PStageClearDamageMultiplierGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcDraw, 26, GOBJ_LINKORDER_DEFAULT, -1);
	damage_score_total = sSC1PStageClearDamageDealt * 10;

	sc1PStageClearMakeScoreDigitSObjs(gobj, damage_score_total, 200.0F, (s32)y - 1, NULL, 1, 0, 0, 5, FALSE);
	func_800269C0_275C0(nSYAudioFGMStageClearScoreRegister);

	return damage_score_total;
}

// 0x80132C80
void sc1PStageClearMakeTargetTextSObjs(void)
{
	GObj *gobj;
	SObj *sobj;
	s32 y1 = 94, y2 = 96;

	sSC1PStageClearTargetGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcDraw, 26, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
	sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearTextTarget));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 42.0F;
	sobj->pos.y = y1;

	sobj->env_color.r = 0x00;
	sobj->env_color.g = 0x00;
	sobj->env_color.b = 0x00;

	sobj->sprite.red = 0xB7;
	sobj->sprite.green = 0xE4;
	sobj->sprite.blue = 0xFF;

	sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearTextColon));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 118.0F;
	sobj->pos.y = y2;

	sobj->env_color.r = 0x00;
	sobj->env_color.g = 0x00;
	sobj->env_color.b = 0x00;

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

	sSC1PStageClearBonusObjectiveGObjs[objective_num] = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcDraw, 26, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
	gcAddGObjProcess(gobj, func_ovl56_80132DC0, nOMObjProcessKindProc, 1);

	gobj->user_data.u = (objective_num * 10) + sSC1PStageClearTotalTimeTics;

	switch (sSC1PStageClear1PGameStage)
	{
	case nSC1PGameStageBonus1:
		sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[5], &lSC1PStageClearTarget));
		break;

	case nSC1PGameStageBonus2:
		sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[5], &lSC1PStageClearPlatform));
		break;
	}
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = x;
	sobj->pos.y = y;
}

// 0x80132F78
void func_ovl56_80132F78(void)
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
sb32 sc1PStageClearCheckHaveBonusStats(void)
{
	s32 unused[3];
	sc1PStageClearStats bonus;
	s32 i = 0; while (TRUE) // WARNING: Newline memes
	{
		sc1PStageClearSetupBonusStats(&bonus, i);

		i++;

		if (sSC1PStageClearBonusFlags[bonus.bonus_array_id] & (1 << bonus.bonus_id))
		{
			return TRUE;
		}
		if (i == GS_BITCOUNT(sSC1PStageClearBonusFlags))
		{
			return FALSE;
		}
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
	// 0x80135198 - "No Miss" bonus multiplier
	s32 nomiss[/* */] = { 1, 2, 3, 0, 4, 5, 6, 0, 7, 8, 9, 0, 10, 11 };

	return nomiss[stage];
}

// 0x80133188
void sc1PStageClearCommonProcUpdate(GObj *gobj)
{
	if (gobj->user_data.u == sSC1PStageClearTotalTimeTics)
	{
		func_800269C0_275C0(nSYAudioFGMStageClearScoreDisplay);
	}
	gobj->flags = (gobj->user_data.u < sSC1PStageClearTotalTimeTics) ? GOBJ_FLAG_NONE : GOBJ_FLAG_NORENDER;
}

// 0x801331EC
s32 sc1PStageClearGetAppendBonusStatPoints(s32 bonus_id, s32 bonus_num, f32 x, f32 y)
{
	GObj *gobj;
	SObj *sobj;
	s32 points;

	// 0x801351D0
	intptr_t offsets[/* */] =
	{
		&lSC1PStageClearBonusVeryEasyClear,
		&lSC1PStageClearBonusEasyClear,
		&lSC1PStageClearBonusNormalClear,
		&lSC1PStageClearBonusHardClear,
		&lSC1PStageClearBonusVeryHardClear
	};

	// 0x801351E4
	syColorRGBPair colors = { { 0x00, 0x00, 0x00 }, { 0xFF, 0xFF, 0x00 } };

	sSC1PStageClearBonusStatGObjs[bonus_num] = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcDraw, 26, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
	gcAddGObjProcess(gobj, sc1PStageClearCommonProcUpdate, nOMObjProcessKindProc, 1);

	gobj->user_data.u = (bonus_num * 10) + sSC1PStageClearTotalTimeTics;

	if (bonus_id == nSC1PGameBonusGameClear)
	{
		sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], offsets[sSC1PStageClearDifficulty]));
	}
	else sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], dSC1PStageClearBonusData[bonus_id].offset));

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
		sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[4], &lSC1PStageClearBonusMultiplySign));

		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;

		sobj->pos.x = x + 40.0F;
		sobj->pos.y = y - 1.0F;

		sobj->sprite.red = 0xFF;
		sobj->sprite.green = 0xFF;
		sobj->sprite.blue = 0x00;

		sc1PStageClearMakeScoreDigitSObjs(gobj, sc1PStageClearGetNoMissMultiplier(sSC1PStageClear1PGameStage), (x + 40.0F) + 26.0F, y - 1.0F, &colors, 0, 1, 0, 2, FALSE);
	}
	sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[4], &lSC1PStageClearBonusColon));

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
		points = dSC1PStageClearBonusData[bonus_id].points * sc1PStageClearGetNoMissMultiplier(sSC1PStageClear1PGameStage);
		break;

	case nSC1PGameBonusGameClear:
		points = dSC1PStageClearBonusData[bonus_id].points * (sSC1PStageClearDifficulty + 1);
		break;

	default:
		points = dSC1PStageClearBonusData[bonus_id].points;
	}
	sc1PStageClearMakeScoreDigitSObjs(gobj, points, 241.0F, y - 1.0F, NULL, 0, 1, 0, 6, FALSE);

	return points;
}

// 0x801335A0
void sc1PStageClearMakeBonusPageArrow(void)
{
	GObj *gobj;
	SObj *sobj;

	sSC1PStageClearBonusStatGObjs[9] = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcDraw, 26, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
	gcAddGObjProcess(gobj, sc1PStageClearCommonProcUpdate, nOMObjProcessKindProc, 1);

	gobj->user_data.u = sSC1PStageClearTotalTimeTics + 90;

	sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &sSC1PStageClearSpriteBonusPageArrow));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 249.0F;
	sobj->pos.y = 176.0F;
}

// 0x80133668
sb32 sc1PStageClearCheckHaveBonusStatID(s32 bonus_id)
{
	sc1PStageClearStats bonus;

	while (bonus_id < GS_BITCOUNT(sSC1PStageClearBonusFlags))
	{
		sc1PStageClearSetupBonusStats(&bonus, bonus_id);

		bonus_id++;

		if (sSC1PStageClearBonusFlags[bonus.bonus_array_id] & (1 << bonus.bonus_id))
		{
			return TRUE;
		}
	}
	return FALSE;
}

// 0x801336F8
s32 sc1PStageClearGetUpdateBonusStatPointsAll(void)
{
	s32 unused[2];
	s32 i;
	s32 points;
	sc1PStageClearStats bonus;

	points = 0;

	for (i = 0; i < ARRAY_COUNT(sSC1PStageClearBonusStatGObjs); i++)
	{
		sSC1PStageClearBonusStatGObjs[i] = NULL;
	}
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
			if (sc1PStageClearCheckHaveBonusStatID(sSC1PStageClearBonusID) == FALSE)
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
			points += sc1PStageClearGetAppendBonusStatPoints(sSC1PStageClearBonusID, sSC1PStageClearBonusNum, 80.0F, (sSC1PStageClearBonusNum * 11) + 86);
			sSC1PStageClearBonusNum++;
		}
		sSC1PStageClearBonusID++;
	}
}

// 0x801338A0
void sc1PStageClearMakeBonusTable(void)
{
	GObj *gobj;
	SObj *sobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearTextProcDraw, 26, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
	sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearBonusBorder));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->env_color.r = 0x00;
	sobj->env_color.g = 0x00;
	sobj->env_color.b = 0x00;

	sobj->sprite.red = 0xFA;
	sobj->sprite.green = 0xE2;
	sobj->sprite.blue = 0xB5;

	sobj->pos.x = 52.0F;
	sobj->pos.y = 62.0F;

	sobj = lbCommonMakeSObjForGObj(gobj, gcGetDataFromFile(Sprite*, sSC1PStageClearFiles[0], &lSC1PStageClearTextSpecialBonus));

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->env_color.r = 0xFF;
	sobj->env_color.g = 0xFF;
	sobj->env_color.b = 0x00;

	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0xFF;
	sobj->sprite.blue = 0xFF;

	sobj->pos.x = 91.0F;
	sobj->pos.y = 72.0F;
}

// 0x801339C0
void sc1PStageClearFramebufWallpaperProcDraw(GObj *gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x80, 0x80, 0x80, 0xFF);
	gDPSetCombineMode(gDisplayListHead[0]++, G_CC_MODULATEI_PRIM, G_CC_MODULATEI_PRIM);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_OPA_SURF, G_RM_OPA_SURF2);
	lbCommonDrawSObjNoAttr(gobj);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80133AC0
void sc1PStageClearMakeFramebufWallpaper(void)
{
	GObj *gobj;
	SObj *sobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjDisplay(gobj, sc1PStageClearFramebufWallpaperProcDraw, 27, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
	sobj = lbCommonMakeSObjForGObj
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
void sc1PStageClearMakeLink26Camera(void)
{
	Camera *cam = CameraGetStruct
	(
		gcMakeCameraGObj
		(
			nOMObjCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_LINKORDER_DEFAULT,
			lbCommonScissorSpriteCamera,
			80,
			CAMERA_MASK_DLLINK(26),
			-1,
			0,
			1,
			NULL,
			1,
			0
		)
	);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133BE8
void sc1PStageClearMakeLink27Camera(void)
{
	Camera *cam = CameraGetStruct
	(
		gcMakeCameraGObj
		(
			nOMObjCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_LINKORDER_DEFAULT,
			lbCommonScissorSpriteCamera,
			90,
			CAMERA_MASK_DLLINK(27),
			-1,
			0,
			1,
			NULL,
			1,
			0
		)
	);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133C88
void sc1PStageClearInitVars(void)
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
void sc1PStageClearUpdateTotal1PGameScore(void)
{
	gSceneData.spgame_score = sSC1PStageClearScoreTotal;
}

// 0x80133F00
void sc1PStageClearUpdateBonusScore(void)
{
	sc1PStageClearMakeScoreSObjs();
	func_800269C0_275C0(nSYAudioFGMScoreDisplayBonus);
}

// 0x80133F28
sb32 sc1PStageClearCheckHaveTimer(void)
{
	if (gSceneData.spgame_time_limit == SCBATTLE_TIMELIMIT_INFINITE)
	{
		return TRUE;
	}
	else return FALSE;
}

// 0x80133F50
void sc1PStageUpdateBonusStatAll(void)
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
		sSC1PStageClearScoreTotal += sc1PStageClearGetUpdateBonusStatPointsAll();

		if (sSC1PStageClearScoreTotal < 0)
		{
			sSC1PStageClearScoreTotal = 0;
		}
		sSC1PStageClearBonusShowNextTic = (sSC1PStageClearBonusNum * 10) + sSC1PStageClearTotalTimeTics + 20;
	}
	else if (sSC1PStageClearBonusShowNextTic == sSC1PStageClearTotalTimeTics)
	{
		gcEjectGObj(sSC1PStageClearScoreTextGObj);
		sc1PStageClearUpdateBonusScore();

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
void sc1PStageClearUpdateGameClearScore(void)
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
			sc1PStageClearUpdateBonusScore();
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
		sc1PStageClearUpdateBonusScore();

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
		sc1PStageUpdateBonusStatAll();
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
			sc1PStageClearUpdateBonusScore();
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
		sc1PStageClearUpdateBonusScore();

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
		sc1PStageUpdateBonusStatAll();
	}
}

// 0x80134604
void sc1PStageClearUpdateResultScore(void)
{
	s32 i;

	if (sSC1PStageClear1PGameStage != nSC1PGameStageBonus3)
	{
		if (sSC1PStageClearTotalTimeTics == 10)
		{
			sc1PStageClearMakeTargetTextSObjs();
		}
		else if (sSC1PStageClearTotalTimeTics == 20)
		{
			func_ovl56_80132F78();
			sSC1PStageClearBaseIntervalTic = (sSC1PStageClearBonusObjectivesCleared * 10) + sSC1PStageClearTotalTimeTics;
		}
	}
	else if (sSC1PStageClearTotalTimeTics == 10)
	{
		sSC1PStageClearBaseIntervalTic = sSC1PStageClearTotalTimeTics;
	}
	if (sSC1PStageClearBaseIntervalTic != 0)
	{
		if ((sc1PStageClearCheckHaveTimer() != FALSE) && (sSC1PStageClear1PGameStage != nSC1PGameStageBonus3))
		{
			if (sSC1PStageClearBaseIntervalTic == sSC1PStageClearTotalTimeTics)
			{
				if (sSC1PStageClearIsHaveBonusStats != FALSE)
				{
					sSC1PStageClearCommonAdvanceTic =
					sSC1PStageClearBonusShowNextTic =
					sSC1PStageClearBonusAdvanceTic  = sSC1PStageClearTotalTimeTics + 10;
				}
				else sSC1PStageClearIsAllowProceedNext = TRUE;
			}
		}
		else if (sSC1PStageClearTotalTimeTics == (sSC1PStageClearBaseIntervalTic + 10))
		{
			if (sSC1PStageClear1PGameStage == nSC1PGameStageBonus3)
			{
				sc1PStageClearMakeTimerTextSObjs(94.0F);
			}
			else if (sSC1PStageClearBonusObjectivesCleared == ARRAY_COUNT(sSC1PStageClearBonusObjectiveGObjs))
			{
				sc1PStageClearMakeTimerTextSObjs(126.0F);
			}		
		}
		else if (sSC1PStageClearTotalTimeTics == (sSC1PStageClearBaseIntervalTic + 30))
		{
			if (sSC1PStageClear1PGameStage == nSC1PGameStageBonus3)
			{
				sc1PStageClearMakeTimerDigitSObjs(94.0F);
			}
			else if (sSC1PStageClearBonusObjectivesCleared == 10)
			{
				sc1PStageClearMakeTimerDigitSObjs(126.0F);
			}
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
			if
			(
				(sSC1PStageClearBonusObjectivesCleared == ARRAY_COUNT(sSC1PStageClearBonusObjectiveGObjs)) || 
				(sSC1PStageClear1PGameStage == nSC1PGameStageBonus3)
			)
			{
				gcEjectGObj(sSC1PStageClearScoreTextGObj);
				sc1PStageClearUpdateBonusScore();
			}
			if (sSC1PStageClearIsHaveBonusStats != FALSE)
			{
				sSC1PStageClearCommonAdvanceTic =
				sSC1PStageClearBonusShowNextTic =
				sSC1PStageClearBonusAdvanceTic  = sSC1PStageClearTotalTimeTics + 10;
			}
			else sSC1PStageClearIsAllowProceedNext = TRUE;
		}
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
	if (sSC1PStageClearIsHaveBonusStats != FALSE)
	{
		sc1PStageUpdateBonusStatAll();
	}
}

// 0x801349F0
void sc1PStageClearProcRun(GObj *gobj)
{
	sSC1PStageClearTotalTimeTics++;

	if (sSC1PStageClearTotalTimeTics >= 10)
	{
		if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
		{
			if (sSC1PStageClearIsAllowProceedNext != FALSE)
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
	wallpaper_pixels = (syPixelPair*)gcGetDataFromFile
	(
		Sprite*,
		sSC1PStageClearFiles[6],
		&lGRWallpaperTraining0Sprite
	)->bitmap->buf;

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
void sc1PStageClearProcStart(void)
{
	s32 unused;
	lbRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buf = sSC1PStageClearStatusBuf;
	rl_setup.status_buf_size = ARRAY_COUNT(sSC1PStageClearStatusBuf);
	rl_setup.force_buf = sSC1PStageClearForceBuf;
	rl_setup.force_buf_size = ARRAY_COUNT(sSC1PStageClearForceBuf);

	lbRelocInitSetup(&rl_setup);
	lbRelocGetLoadFilesNum
	(
		dSC1PStageClearFileIDs,
		ARRAY_COUNT(dSC1PStageClearFileIDs),
		sSC1PStageClearFiles,
		gsMemoryAlloc
		(
			lbRelocGetAllocSize
			(
				dSC1PStageClearFileIDs,
				ARRAY_COUNT(dSC1PStageClearFileIDs)
			),
			0x10
		)
	);
	gcMakeGObjSPAfter(0, sc1PStageClearProcRun, 0, GOBJ_LINKORDER_DEFAULT);
	sc1PStageClearCopyFramebufToWallpaper();
	gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0, GPACK_RGBA8888(0x00, 0x00, 0x00, 0x00));
	sc1PStageClearInitVars();
	sc1PStageClearMakeLink26Camera();
	sc1PStageClearMakeLink27Camera();
	sc1PStageClearMakeFramebufWallpaper();
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
		{
			auPlaySong(0, nSYAudioBGM1PBonusGameClear);
		}
		else auPlaySong(0, nSYAudioBGM1PBonusGameFailure);
		break;

	case nSC1PGameStageBonus3:
		if (gSceneData.spgame_time_seconds != 0)
		{
			auPlaySong(0, nSYAudioBGM1PBonusGameClear);
		}
		else auPlaySong(0, nSYAudioBGM1PBonusGameFailure);
		break;

	default:
		auPlaySong(0, nSYAudioBGM1PStageClear);
		break;
	}
}

// 0x801351EC
syDisplaySetup dGM1PStageClearDisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x80135208
scRuntimeInfo dGM1PStageClearGtlSetup =
{
	0x00000000,
	func_8000A5E4,
	func_8000A340,
	&ovl56_BSS_END,
	0x00000000,
	0x00000001,
	0x00000002,
	0x00004E20,
	0x00001000,
	0x00000000,
	0x00000000,
	0x00008000,
	0x00020000,
	0x0000C000,
	sc1PStageClearProcLights,
	update_contdata,
	0x00000000,
	0x00000600,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000088,
	0x00000000,
	0x800D5CAC,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000088,
	0x00000000,
	0x0000006C,
	0x00000000,
	0x00000090,
	sc1PStageClearProcStart
};

// 0x80134E84
void sc1PStageClearStartScene(void)
{
	dGM1PStageClearDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);

	func_80007024(&dGM1PStageClearDisplaySetup);

	dGM1PStageClearGtlSetup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl56_BSS_END);

	gsGTLSceneInit(&dGM1PStageClearGtlSetup);
}
