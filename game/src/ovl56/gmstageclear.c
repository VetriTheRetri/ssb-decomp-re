#include <ft/fighter.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>

// EXTERN

extern u8 D_800A4B08;
extern s32 D_800A4AEC;
extern void *D_80044FA8;
extern void func_ovl1_803903E0();

extern intptr_t D_NF_800A5240;
extern intptr_t lGmStageClearArenaLo;                       // 0x801355B0
extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_00000854;

extern intptr_t lGmStageClearSpritePlatform;                // 0x000000C0
extern intptr_t lGmStageClearSpriteTarget;                  // 0x000001D0
extern intptr_t lGmStageClearSpriteTextScore;               // 0x00000408
extern intptr_t lGmStageClearSpritePointsNSign;             // 0x00000710
extern intptr_t lGmStageClearSpriteBonusMultiplySign;       // 0x00000828
extern intptr_t lGmStageClearSpriteBonusColon;              // 0x000008D8
extern intptr_t lGmStageClearSpriteTextStage;               // 0x000009D8
extern intptr_t lGmStageClearSpriteTextMultiplySign;        // 0x00001018
extern intptr_t lGmStageClearSpriteTextGame;                // 0x00001338
extern intptr_t lGmStageClearSpriteTextClear;               // 0x00001D58
extern intptr_t lGmStageClearSpriteTextSpecialBonus;        // 0x00002060
extern intptr_t lGmStageClearSpriteTextColon;               // 0x00002120
extern intptr_t lGmStageClearSpriteTextTimer;               // 0x000025E8
extern intptr_t lGmStageClearSpriteTextDamage;              // 0x00002B48
extern intptr_t lGmStageClearSpriteBonusBorder;             // 0x0000A4B8
extern intptr_t lGmStageClearSpriteTextResult;              // 0x0000AF98
extern intptr_t lGmStageClearSpriteTextTarget;              // 0x0000B4F8
extern intptr_t sGmStageClearSpriteBonusPageArrow;          // 0x0000B6A8
extern intptr_t lGmStageClearSpriteTextShadow;              // 0x0000D1C8
extern intptr_t lGmStageClearSpriteTextBonus;               // 0x0000D340

// Bonus stat text sprites
extern intptr_t lGmStageClearSpriteBonusCheapShot;          // 0x0000D528
extern intptr_t lGmStageClearSpriteBonusStarFinish;         // 0x0000D708
extern intptr_t lGmStageClearSpriteBonusNoItem;             // 0x0000D8E8
extern intptr_t lGmStageClearSpriteBonusShieldBreaker;      // 0x0000DAC8
extern intptr_t lGmStageClearSpriteBonusJudoWarrior;        // 0x0000DCA8
extern intptr_t lGmStageClearSpriteBonusHawk;               // 0x0000DE88
extern intptr_t lGmStageClearSpriteBonusShooter;            // 0x0000E068
extern intptr_t lGmStageClearSpriteBonusHeavyDamage;        // 0x0000E248
extern intptr_t lGmStageClearSpriteBonusAllVariations;      // 0x0000E428
extern intptr_t lGmStageClearSpriteBonusItemStrike;         // 0x0000E608
extern intptr_t lGmStageClearSpriteBonusDoubleKO;           // 0x0000E7E8
extern intptr_t lGmStageClearSpriteBonusTrickster;          // 0x0000E9C8
extern intptr_t lGmStageClearSpriteBonusGiantImpact;        // 0x0000EBA8
extern intptr_t lGmStageClearSpriteBonusSpeedster;          // 0x0000ED88
extern intptr_t lGmStageClearSpriteBonusItemThrow;          // 0x0000EF68
extern intptr_t lGmStageClearSpriteBonusTripleKO;           // 0x0000F148
extern intptr_t lGmStageClearSpriteBonusLastChance;         // 0x0000F328
extern intptr_t lGmStageClearSpriteBonusPacifist;           // 0x0000F508
extern intptr_t lGmStageClearSpriteBonusPerfect;            // 0x0000F6E8
extern intptr_t lGmStageClearSpriteBonusNoMiss;             // 0x0000F8C8
extern intptr_t lGmStageClearSpriteBonusNoDamage;           // 0x0000FAA8
extern intptr_t lGmStageClearSpriteBonusFullPower;          // 0x0000FC88
extern intptr_t lGmStageClearSpriteBonusGameClear;          // 0x00014008
extern intptr_t lGmStageClearSpriteBonusNoMissClear;        // 0x00013888
extern intptr_t lGmStageClearSpriteBonusNoDamageClear;      // 0x00013A68
extern intptr_t lGmStageClearSpriteBonusSpeedKing;          // 0x00013C48
extern intptr_t lGmStageClearSpriteBonusSpeedDemon;         // 0x00013E28
extern intptr_t lGmStageClearSpriteBonusMewCatcher;         // 0x0000FE68
extern intptr_t lGmStageClearSpriteBonusStarClear;          // 0x00010048
extern intptr_t lGmStageClearSpriteBonusVegetarian;         // 0x00010228
extern intptr_t lGmStageClearSpriteBonusHeartThrob;         // 0x00010408
extern intptr_t lGmStageClearSpriteBonusThrowDown;          // 0x000105E8
extern intptr_t lGmStageClearSpriteBonusSmashMania;         // 0x000107C8
extern intptr_t lGmStageClearSpriteBonusSmashless;          // 0x000109A8
extern intptr_t lGmStageClearSpriteBonusSpecialMove;        // 0x00010B88
extern intptr_t lGmStageClearSpriteBonusSingleMove;         // 0x00010D68
extern intptr_t lGmStageClearSpriteBonusPokemonFinish;      // 0x00010F48
extern intptr_t lGmStageClearSpriteBonusBoobyTrap;          // 0x00011128
extern intptr_t lGmStageClearSpriteBonusFighterStance;      // 0x00011308
extern intptr_t lGmStageClearSpriteBonusMystic;             // 0x000114E8
extern intptr_t lGmStageClearSpriteBonusCometMystic;        // 0x000116C8
extern intptr_t lGmStageClearSpriteBonusAcidClear;          // 0x000118A8
extern intptr_t lGmStageClearSpriteBonusBumperClear;        // 0x00011A88
extern intptr_t lGmStageClearSpriteBonusTornadoClear;       // 0x00011C68
extern intptr_t lGmStageClearSpriteBonusArwingClear;        // 0x00011E48
extern intptr_t lGmStageClearSpriteBonusCounterAttack;      // 0x00012028
extern intptr_t lGmStageClearSpriteBonusMeteorSmash;        // 0x00012208
extern intptr_t lGmStageClearSpriteBonusAerial;             // 0x000123E8
extern intptr_t lGmStageClearSpriteBonusLastSecond;         // 0x000125C8 
extern intptr_t lGmStageClearSpriteBonusLucky3;             // 0x000127A8 
extern intptr_t lGmStageClearSpriteBonusJackpot;            // 0x00012988 
extern intptr_t lGmStageClearSpriteBonusYoshiRainbow;       // 0x00012B68 
extern intptr_t lGmStageClearSpriteBonusKirbyRanks;         // 0x00012D48 
extern intptr_t lGmStageClearSpriteBonusBrosCalamity;       // 0x00012F28 
extern intptr_t lGmStageClearSpriteBonusDKDefender;         // 0x00013108 
extern intptr_t lGmStageClearSpriteBonusDKPerfect;          // 0x000132E8 
extern intptr_t lGmStageClearSpriteBonusGoodFriend;         // 0x000134C8 
extern intptr_t lGmStageClearSpriteBonusTrueFriend;         // 0x000136A8
extern intptr_t lGmStageClearSpriteBonusVeryEasyClear;      // 0x00014008
extern intptr_t lGmStageClearSpriteBonusEasyClear;          // 0x000141E8
extern intptr_t lGmStageClearSpriteBonusNormalClear;        // 0x000143C8
extern intptr_t lGmStageClearSpriteBonusHardClear;          // 0x000145A8
extern intptr_t lGmStageClearSpriteBonusVeryHardClear;      // 0x00014788

extern intptr_t D_NF_00020718;                              // 0x00020718
extern intptr_t D_NF_0002074C;                              // 0x0002074C

// GLOBAL / STATIC

// 0x801352CC
u32 D_ovl56_801352CC;

// 0x801352D4 - What kind of stage has been cleared
s32 sGmStageClearKind;

// 0x801352D8
s32 D_ovl56_801352D8;

// 0x801352DC
s32 sGmStageClearSecondsRemaining;

// 0x801352E0
s32 sGmStageClearDamageDealt;

// 0x801352E4
s32 sGmStageClearDifficulty;

// 0x801352E8
s32 sGmStageClearScoreTotal;

// 0x801352EC
s32 sGmStageClear1PGameStage;

// 0x801352F8 - GObj of "Timer" and "Damage" scores
GObj *sGmStageClearTimerTextGObj;

// 0x801352FC
GObj *sGmStageClearTimerMultiplierGObj;

// 0x80135300
GObj *sGmStageClearDamageTextGObj;

// 0x80135304
GObj *sGmStageClearDamageMultiplierGObj;

// 0x80135310 - GObj of "SCORE" text
GObj *sGmStageClearScoreTextGObj;

// 0x80135314 - GObj of "- BONUS -" text
GObj *sGmStageClearBonusTextGObj;

// 0x80135318
GObj *sGmStageClearTargetGObj;

// 0x80135320
u32 sGmStageClearBonusMasks[3];

// 0x8013532C
s32 sGmStageClearBonusID;

// 0x80135330
s32 sGmStageClearBonusNum;

// 0x80135334
s32 D_ovl56_80135334;

// 0x80135338
sb32 sGmStageClearIsAdvance;

// 0x8013533C
s32 D_ovl56_8013533C;

// 0x80135340
u32 D_ovl56_80135340;

// 0x80135344
u32 D_ovl56_80135344;

// 0x80135348
u32 D_ovl56_80135348;

// 0x80135350
GObj *sGmStageClearBonusStatGObjs[10];

// 0x80135378 - GObjs of target or platform sprites?
GObj *sGmStageClearBonusObjectiveGObjs[10];

// 0x801353A0
u32 D_ovl56_801353A0;

// 0x801353A4
s32 sGmStageClearBonusObjectivesCleared;

// 0x801353A8
s32 D_ovl56_801353A8;

// 0x801353AC
s32 D_ovl56_801353AC;

// 0x801353B0
s32 D_ovl56_801353B0;

// 0x801353B4
s32 D_ovl56_801353B4;

// 0x801353B8
s32 D_ovl56_801353B8;

// 0x801353BC
s32 D_ovl56_801353BC;

// 0x801353C0
s32 D_ovl56_801353C0;

// 0x801353C4
s32 D_ovl56_801353C4;

// 0x801353D0
rdFileNode sGmStageClearStatusBuf[48];

// 0x80135550
rdFileNode sGmStageClearForceBuf[7];

// 0x80135588
void *sGmStageClearFiles[7];

// DATA

// 0x80134EE0
u32 dGmStageClearFileIDs[/* */] = { 0x50, 0x51, 0xA4, 0xA5, 0x24, 0x97, 0x1A };

// 0x80134EFC
gmStageClearScore dGmStageClearBonusData[/* */] =
{
    // Cheap Shot
    { &lGmStageClearSpriteBonusCheapShot, -99 },

    // Star Finish
    { &lGmStageClearSpriteBonusStarFinish, 10000 },

    // No Item
    { &lGmStageClearSpriteBonusNoItem, 1000 },

    // Shield Breaker
    { &lGmStageClearSpriteBonusShieldBreaker, 8000 },

    // Judo Warrior
    { &lGmStageClearSpriteBonusJudoWarrior, 5000 },

    // Hawk
    { &lGmStageClearSpriteBonusHawk, 18000 },

    // Shooter
    { &lGmStageClearSpriteBonusShooter, 12000 },

    // Heavy Damage
    { &lGmStageClearSpriteBonusHeavyDamage, 28000 },

    // All Variations
    { &lGmStageClearSpriteBonusAllVariations, 30000 },

    // Item Strike
    { &lGmStageClearSpriteBonusItemStrike, 20000 },

    // Double KO
    { &lGmStageClearSpriteBonusDoubleKO, 0 },

    // Trickster
    { &lGmStageClearSpriteBonusTrickster, 11000 },

    // Giant Impact
    { &lGmStageClearSpriteBonusGiantImpact, 0 },

    // Speedster
    { &lGmStageClearSpriteBonusSpeedster, 10000 },

    // Item Throw
    { &lGmStageClearSpriteBonusItemThrow, 16000 },

    // Triple KO
    { &lGmStageClearSpriteBonusTripleKO, 0 },

    // Last Chance
    { &lGmStageClearSpriteBonusLastChance, 0 },

    // Pacifist
    { &lGmStageClearSpriteBonusPacifist, 60000 },

    // Perfect
    { &lGmStageClearSpriteBonusPerfect, 30000 },

    // No Miss
    { &lGmStageClearSpriteBonusNoMiss, 5000 },

    // No Damage
    { &lGmStageClearSpriteBonusNoDamage, 15000 },

    // Full Power
    { &lGmStageClearSpriteBonusFullPower, 5000 },

    // Final Stage Clear
    { &lGmStageClearSpriteBonusGameClear, 70000 },

    // No Miss Clear
    { &lGmStageClearSpriteBonusNoMissClear, 70000 },

    // No Damage Clear
    { &lGmStageClearSpriteBonusNoDamageClear, 400000 },

    // Speed King
    { &lGmStageClearSpriteBonusSpeedKing, 40000 },

    // Speed Demon
    { &lGmStageClearSpriteBonusSpeedDemon, 80000 },

    // Mew Catcher
    { &lGmStageClearSpriteBonusMewCatcher, 15000 },

    // Star Clear
    { &lGmStageClearSpriteBonusStarClear, 12000 },

    // Vegetarian
    { &lGmStageClearSpriteBonusVegetarian, 9000 },

    // Heart Throb
    { &lGmStageClearSpriteBonusHeartThrob, 17000 },

    // Throw Down
    { &lGmStageClearSpriteBonusThrowDown, 2000 },

    // Smash Mania
    { &lGmStageClearSpriteBonusSmashMania, 3500 },

    // Smashless
    { &lGmStageClearSpriteBonusSmashless, 5000 },

    // Special Move
    { &lGmStageClearSpriteBonusSpecialMove, 5000 },

    // Single Move
    { &lGmStageClearSpriteBonusSingleMove, 8000 },

    // Pok�mon Finish
    { &lGmStageClearSpriteBonusPokemonFinish, 11000 },

    // Booby Trap
    { &lGmStageClearSpriteBonusBoobyTrap, 12000 },

    // Fighter Stance
    { &lGmStageClearSpriteBonusFighterStance, 100 },

    // Mystic
    { &lGmStageClearSpriteBonusMystic, 7000 },

    // Comet Mystic
    { &lGmStageClearSpriteBonusCometMystic, 10000 },

    // Acid Clear
    { &lGmStageClearSpriteBonusAcidClear, 1500 },

    // Bumper Clear
    { &lGmStageClearSpriteBonusBumperClear, 10000 },

    // Tornado Clear
    { &lGmStageClearSpriteBonusTornadoClear, 3000 },

    // ARWING Clear
    { &lGmStageClearSpriteBonusArwingClear, 4000 },

    // Counter Attack
    { &lGmStageClearSpriteBonusCounterAttack, 0 },

    // Meteor Smash
    { &lGmStageClearSpriteBonusMeteorSmash, 0 },

    // Aerial
    { &lGmStageClearSpriteBonusAerial, 0 },

    // Last Second
    { &lGmStageClearSpriteBonusLastSecond, 8000 },

    // Lucky 3
    { &lGmStageClearSpriteBonusLucky3, 9990 },

    // Jackpot
    { &lGmStageClearSpriteBonusJackpot, 3330 },

    // Yoshi Rainbow
    { &lGmStageClearSpriteBonusYoshiRainbow, 50000 },

    // Kirby Ranks
    { &lGmStageClearSpriteBonusKirbyRanks, 25000 },

    // Bros. Calamity
    { &lGmStageClearSpriteBonusBrosCalamity, 25000 },

    // DK Defender
    { &lGmStageClearSpriteBonusDKDefender, 10000 },

    // DK Perfect
    { &lGmStageClearSpriteBonusDKPerfect, 50000 },

    // Good Friend
    { &lGmStageClearSpriteBonusGoodFriend, 8000 },

    // True Friend
    { &lGmStageClearSpriteBonusTrueFriend, 25000 }
};

// 0x80135100
gsColorRGBPair dGmStageClearDigitSpriteColors[/* */] =
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

// 0x80131B00
void func_ovl56_80131B00(Gfx **dl)
{
    gSPSetGeometryMode(dl[0]++, G_LIGHTING);

    ftRender_Lights_DisplayLightReflect(dl, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B58
s32 func_ovl56_80131B58(s32 arg0, s32 arg1)
{
    s32 var_v1 = arg0;
    s32 var_v0;

    if (arg1 == 0)
    {
        return 1;
    }
    var_v0 = arg1;

    while (var_v0 > 1)
    {
        var_v0--;
        var_v1 *= arg0;
    }
    return var_v1;
}

// 0x80131BF8
void gmStageClearSetDigitSpriteColor(SObj *sobj, s32 file_id, gsColorRGBPair *colors_default)
{
    gsColorRGBPair colors_all[ARRAY_COUNT(dGmStageClearDigitSpriteColors)] = dGmStageClearDigitSpriteColors;
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

// 0x80131CC4
s32 gmStageClearGetDigitCount(s32 points, s32 digit_count_max)
{
    s32 digit_count_current = digit_count_max;

    while (digit_count_current > 0)
    {
        s32 digit = (func_ovl56_80131B58(10, digit_count_current - 1) != 0) ? points / func_ovl56_80131B58(10, digit_count_current - 1) : 0;

        if (digit != 0)
        {
            return digit_count_current;
        }
        else digit_count_current--;
    }
    return 0;
}

// 0x80131D70
Sprite* gmStageClearGetSprite(s32 file_id, s32 offset_id)
{
    // Three different sets of digit sprites on the Stage Clear screen
    s32 files[3] = { 0, 4, 2 };
    intptr_t offsets[10][3] =
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
    return spGetSpriteFromFile(sGmStageClearFiles[files[file_id]], offsets[offset_id][file_id]);
}

// 0x80131E10
void gmStageClearMakeDigitSObjs(GObj *gobj, s32 points, f32 x, f32 y, gsColorRGBPair *colors, s32 offset_x, s32 file_id, s32 sub, s32 digit_count_max, sb32 is_fixed_digit_count)
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
        {
            points = 0;
        }
        else
        {
            points = -points;
            is_negative = TRUE;
        }
    }
    sobj = gcAppendSObjWithSprite(gobj, gmStageClearGetSprite(file_id, points % 10));

    gmStageClearSetDigitSpriteColor(sobj, file_id, colors);

    calc_x = (sub != 0) ? x - sub : x - (sobj->sprite.width + offset_x);

    sobj->pos.x = calc_x;
    sobj->pos.y = y;

    for (i = 1; i < ((is_fixed_digit_count != FALSE) ? digit_count_max : gmStageClearGetDigitCount(points, digit_count_max)); i++)
    {
        digit = (func_ovl56_80131B58(10, i) != 0) ? points / func_ovl56_80131B58(10, i) : 0;

        sobj = gcAppendSObjWithSprite(gobj, gmStageClearGetSprite(file_id, digit % 10));

        gmStageClearSetDigitSpriteColor(sobj, file_id, colors);

        calc_x = (sub != 0) ? calc_x - sub : calc_x - (sobj->sprite.width + offset_x);

        sobj->pos.x = calc_x;
        sobj->pos.y = y;
    }
    if (is_negative != FALSE)
    {
        if (file_id == 1)
        {
            sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[4], &lGmStageClearSpritePointsNSign));
        }
        gmStageClearSetDigitSpriteColor(sobj, file_id, colors);

        calc_x = (sub != 0) ? calc_x - sub : calc_x - (sobj->sprite.width + offset_x);

        sobj->pos.x = calc_x;
        sobj->pos.y = y + 3.0F;
    }
}

// 0x801320E0
void gmStageClearTextProcRender(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    func_ovl0_800CCF00(gobj);

    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x8013213C
void gmStageClearMakeTextSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[0], &lGmStageClearSpriteTextShadow));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;

    sobj->pos.x = 33.0F;
    sobj->pos.y = 23.0F;

    if (sGmStageClearKind == gmStageClear_Kind_Result)
    {
        sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[0], &lGmStageClearSpriteTextResult));
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
        sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[0], &lGmStageClearSpriteTextClear));

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

        if (sGmStageClearKind == gmStageClear_Kind_Stage)
        {
            sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[0], &lGmStageClearSpriteTextStage));
        }
        else sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[0], &lGmStageClearSpriteTextGame));

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
    sGmStageClearBonusTextGObj = gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[0], &lGmStageClearSpriteTextBonus));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0x28;
    sobj->sprite.blue = 0x0A;

    sobj->pos.x = 121.0F;
    sobj->pos.y = 67.0F;
}

// 0x801323F8
void gmStageClearMakeScoreSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    sGmStageClearScoreTextGObj = gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[1], &lGmStageClearSpriteTextScore));

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

    gmStageClearMakeDigitSObjs(gobj, sGmStageClearScoreTotal, 295.0F, 197.0F, NULL, 0, 2, 16, 8, TRUE);
}

// 0x801324FC
void gmStageClearMakeTimerTextSObjs(f32 y)
{
    GObj *gobj;
    SObj *sobj;

    sGmStageClearTimerTextGObj = gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[0], &lGmStageClearSpriteTextTimer));

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

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[0], &lGmStageClearSpriteTextColon));

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

    func_800269C0(alSound_SFX_StageClearScoreDisplay);
}

// 0x8013263C
void gmStageClearMakeTimerDigitSObjs(f32 y)
{
    GObj *gobj;
    SObj *sobj;
    f32 x;
    s32 multiplier;
    s32 unused;

    sGmStageClearTimerMultiplierGObj = gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[3], &lGmStageClearSpriteTextMultiplySign));

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

    switch (sGmStageClear1PGameStage)
    {
    case gm1PGame_Stage_Bonus1:
    case gm1PGame_Stage_Bonus2:
        x = 246.0F;
        multiplier = 200;
        break;

    case gm1PGame_Stage_Bonus3:
        x = 246.0F;
        multiplier = 500;
        break;

    default:
        x = 233.0F;
        multiplier = 50;
    }
    gmStageClearMakeDigitSObjs(gobj, multiplier, x, y - 1.0F, NULL, 1, 0, 0, 4, FALSE);
    gmStageClearMakeDigitSObjs(gobj, sGmStageClearSecondsRemaining, 171.0F, y - 1.0F, NULL, 1, 0, 0, 3, FALSE);
}

// 0x801327D4
s32 gmStageClearGetAppendTotalTimeScore(f32 y)
{
    GObj *gobj;
    s32 unused;
    s32 time_score_total;
    s32 multiplier;

    sGmStageClearTimerMultiplierGObj = gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);

    switch (sGmStageClear1PGameStage)
    {
    case gm1PGame_Stage_Bonus1:
    case gm1PGame_Stage_Bonus2:
        multiplier = 200;
        break;

    case gm1PGame_Stage_Bonus3:
        multiplier = 500;
        break;

    default:
        multiplier = 50;
    }
    time_score_total = sGmStageClearSecondsRemaining * multiplier;

    gmStageClearMakeDigitSObjs(gobj, time_score_total, 200.0F, y - 1.0F, NULL, 1, 0, 0, 5, FALSE);
    func_800269C0(alSound_SFX_StageClearScoreRegister);

    return time_score_total;
}

// 0x801328CC
void gmStageClearMakeDamageTextSObjs(f32 y)
{
    GObj *gobj;
    SObj *sobj;
    s32 unused;

    sGmStageClearDamageTextGObj = gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);
    omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[0], &lGmStageClearSpriteTextDamage));

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

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[0], &lGmStageClearSpriteTextColon));

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

    func_800269C0(alSound_SFX_StageClearScoreDisplay);
}

// 0x80132A20
void gmStageClearMakeDamageDigitSObjs(f32 y)
{
    GObj *gobj;
    SObj *sobj;
    s32 x;
    s32 unused;

    x = (sGmStageClearDamageDealt > 1000) ? 184 : 171;

    sGmStageClearDamageMultiplierGObj = gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);

    gmStageClearMakeDigitSObjs(gobj, sGmStageClearDamageDealt, x, (s32)y - 1, NULL, 1, 0, 0, 4, FALSE);
    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[3], &lGmStageClearSpriteTextMultiplySign));

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

    gmStageClearMakeDigitSObjs(gobj, 10, x + 55, (s32)y - 1, NULL, 1, 0, 0, 2, TRUE);
}

// 0x80132BB4
s32 gmStageClearGetAppendTotalDamageScore(f32 y)
{
    GObj *gobj;
    s32 unused;
    s32 damage_score_total;

    sGmStageClearDamageMultiplierGObj = gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_LINKORDER_DEFAULT, -1);
    damage_score_total = sGmStageClearDamageDealt * 10;

    gmStageClearMakeDigitSObjs(gobj, damage_score_total, 200.0F, (s32)y - 1, NULL, 1, 0, 0, 5, FALSE);
    func_800269C0(alSound_SFX_StageClearScoreRegister);

    return damage_score_total;
}

// 0x80132C80
void gmStageClearMakeTargetTextSObjs(void)
{
    GObj *gobj;
    SObj *sobj;
    s32 y1 = 94, y2 = 96;

    sGmStageClearTargetGObj = gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[0], &lGmStageClearSpriteTextTarget));

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

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[0], &lGmStageClearSpriteTextColon));

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

    func_800269C0(alSound_SFX_StageClearScoreDisplay);
}

// 0x80132DC0
void func_ovl56_80132DC0(GObj *gobj)
{
    gobj->flags = (gobj->user_data.u < D_ovl56_801352CC) ? GOBJ_FLAG_NONE : GOBJ_FLAG_NORENDER;

    if (gobj->user_data.u == D_ovl56_801352CC)
    {
        func_800269C0(alSound_SFX_StageClearScoreRegister);

        omEjectGObjCommon(sGmStageClearScoreTextGObj);

        sGmStageClearScoreTotal += 1000;

        gmStageClearMakeScoreSObjs();
    }
}

// 0x80132E40
void func_ovl56_80132E40(f32 x, f32 y, s32 objective_num)
{
    GObj *gobj;
    SObj *sobj;

    sGmStageClearBonusObjectiveGObjs[objective_num] = gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
    omAddGObjCommonProc(gobj, func_ovl56_80132DC0, 1, 1);

    gobj->user_data.u = (objective_num * 10) + D_ovl56_801352CC;

    switch (sGmStageClear1PGameStage)
    {
    case gm1PGame_Stage_Bonus1:
        sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[5], &lGmStageClearSpriteTarget));
        break;

    case gm1PGame_Stage_Bonus2:
        sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[5], &lGmStageClearSpritePlatform));
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

    if (sGmStageClearBonusObjectivesCleared > 0)
    {
        s32 x = 130;

        do
        {
            func_ovl56_80132E40(x, 93.0F, i);

            i++, x += 16;
        } 
        while (i < sGmStageClearBonusObjectivesCleared);
    }
}

// 0x80132FF8
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

// 0x8013305C
sb32 gmStageClearCheckHaveBonusStats(void)
{
    s32 unused[3];
    gmStageClearStats bonus;
    s32 i = 0; while (TRUE) // WARNING: Newline memes
    {
        gmStageClearSetupBonusStats(&bonus, i);

        i++;

        if (sGmStageClearBonusMasks[bonus.bonus_array_id] & (1 << bonus.bonus_id))
        {
            return TRUE;
        }
        if (i == GS_BITCOUNT(sGmStageClearBonusMasks))
        {
            return FALSE;
        }
    }
}

// 0x801330F0
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

// 0x80133128
s32 gmStageClearGetNoMissMultiplier(s32 stage)
{
    // 0x80135198 - "No Miss" bonus multiplier
    s32 nomiss[/* */] = { 1, 2, 3, 0, 4, 5, 6, 0, 7, 8, 9, 0, 10, 11 };

    return nomiss[stage];
}

// 0x80133188
void gmStageClearCommonProcUpdate(GObj *gobj)
{
    if (gobj->user_data.u == D_ovl56_801352CC)
    {
        func_800269C0(alSound_SFX_StageClearScoreDisplay);
    }
    gobj->flags = (gobj->user_data.u < D_ovl56_801352CC) ? GOBJ_FLAG_NONE : GOBJ_FLAG_NORENDER;
}

// 0x801331EC
s32 gmStageClearAppendBonusStatGetPoints(s32 bonus_id, s32 bonus_num, f32 x, f32 y)
{
    GObj *gobj;
    SObj *sobj;
    s32 points;

    // 0x801351D0
    intptr_t offsets[/* */] = 
    { 
        &lGmStageClearSpriteBonusVeryEasyClear,
        &lGmStageClearSpriteBonusEasyClear,
        &lGmStageClearSpriteBonusNormalClear,
        &lGmStageClearSpriteBonusHardClear,
        &lGmStageClearSpriteBonusVeryHardClear
    }; 

    // 0x801351E4
    gsColorRGBPair colors = { { 0x00, 0x00, 0x00 }, { 0xFF, 0xFF, 0x00 } };

    sGmStageClearBonusStatGObjs[bonus_num] = gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
    omAddGObjCommonProc(gobj, gmStageClearCommonProcUpdate, 1, 1);

    gobj->user_data.u = (bonus_num * 10) + D_ovl56_801352CC;

    if (bonus_id == GM1PGAME_BONUS_KIND_GAMECLEAR)
    {
        sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[0], offsets[sGmStageClearDifficulty]));
    }
    else sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[0], dGmStageClearBonusData[bonus_id].offset));

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
        sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[4], &lGmStageClearSpriteBonusMultiplySign));

        sobj->sprite.attr &= ~SP_FASTCOPY;
        sobj->sprite.attr |= SP_TRANSPARENT;

        sobj->pos.x = x + 40.0F;
        sobj->pos.y = y - 1.0F;

        sobj->sprite.red = 0xFF;
        sobj->sprite.green = 0xFF;
        sobj->sprite.blue = 0x00;

        gmStageClearMakeDigitSObjs(gobj, gmStageClearGetNoMissMultiplier(sGmStageClear1PGameStage), (x + 40.0F) + 26.0F, y - 1.0F, &colors, 0, 1, 0, 2, FALSE);
    }
    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[4], &lGmStageClearSpriteBonusColon));

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
        points = dGmStageClearBonusData[bonus_id].points * gmStageClearGetNoMissMultiplier(sGmStageClear1PGameStage);
        break;

    case GM1PGAME_BONUS_KIND_GAMECLEAR:
        points = dGmStageClearBonusData[bonus_id].points * (sGmStageClearDifficulty + 1);
        break;

    default:
        points = dGmStageClearBonusData[bonus_id].points;
    }
    gmStageClearMakeDigitSObjs(gobj, points, 241.0F, y - 1.0F, NULL, 0, 1, 0, 6, FALSE);

    return points;
}

// 0x801335A0
void gmStageClearMakeBonusPageArrow(void)
{
    GObj *gobj;
    SObj *sobj;

    sGmStageClearBonusStatGObjs[9] = gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
    omAddGObjCommonProc(gobj, gmStageClearCommonProcUpdate, 1, 1);

    gobj->user_data.u = D_ovl56_801352CC + 90;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[0], &sGmStageClearSpriteBonusPageArrow));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = 249.0F;
    sobj->pos.y = 176.0F;
}

// 0x80133668
sb32 gmStageClearCheckHaveBonusID(s32 bonus_id)
{
    gmStageClearStats bonus;

    while (bonus_id < GS_BITCOUNT(sGmStageClearBonusMasks))
    {
        gmStageClearSetupBonusStats(&bonus, bonus_id);

        bonus_id++;

        if (sGmStageClearBonusMasks[bonus.bonus_array_id] & (1 << bonus.bonus_id))
        {
            return TRUE;
        }
    }
    return FALSE;
}

// 0x801336F8
s32 gmStageClearUpdateGetBonusStatPointsAll(void)
{
    s32 unused[2];
    s32 i;
    s32 points;
    gmStageClearStats bonus;

    points = 0;

    for (i = 0; i < ARRAY_COUNT(sGmStageClearBonusStatGObjs); i++)
    {
        sGmStageClearBonusStatGObjs[i] = NULL;
    }
    D_ovl56_80135334 = 0;
    sGmStageClearBonusNum = 0;

    while (TRUE)
    {
        if (sGmStageClearBonusID == GS_BITCOUNT(sGmStageClearBonusMasks))
        {
            sGmStageClearIsAdvance = TRUE;

            return points;
        }
        if (sGmStageClearBonusNum == (ARRAY_COUNT(sGmStageClearBonusStatGObjs) - 1))
        {
            if (gmStageClearCheckHaveBonusID(sGmStageClearBonusID) == FALSE)
            {
                sGmStageClearIsAdvance = TRUE;

                return points;
            }
            gmStageClearMakeBonusPageArrow();

            return points;
        }
        gmStageClearSetupBonusStats(&bonus, sGmStageClearBonusID);

        if (sGmStageClearBonusMasks[bonus.bonus_array_id] & (1 << bonus.bonus_id))
        {
            points += gmStageClearAppendBonusStatGetPoints(sGmStageClearBonusID, sGmStageClearBonusNum, 80.0F, (sGmStageClearBonusNum * 11) + 86);

            sGmStageClearBonusNum++;
        }
        sGmStageClearBonusID++;
    }
}

// 0x801338A0
void gmStageClearMakeBonusTable(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gobj, gmStageClearTextProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[0], &lGmStageClearSpriteBonusBorder));

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

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[0], &lGmStageClearSpriteTextSpecialBonus));

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

// 0x80133AC0
void gmStageClearMakeFrameCopyBackground(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = omMakeGObjCommon(0, NULL, 0x12, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gobj, gmStageClearFrameCopyBackgroundProcRender, 0x1B, GOBJ_DLLINKORDER_DEFAULT, -1);
    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGmStageClearFiles[6], &D_NF_00020718));

    sobj->sprite.attr &= ~SP_FASTCOPY;

    sobj->pos.x = 10.0F;
    sobj->pos.y = 10.0F;
}

// 0x80133B48
void func_ovl56_80133B48(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_ovl0_800CD2CC, 0x50, CAMERA_MASK_DLLINK(26), -1, 0, 1, 0, 1, 0));

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133BE8
void func_ovl56_80133BE8(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_ovl0_800CD2CC, 0x5A, CAMERA_MASK_DLLINK(27), -1, 0, 1, 0, 1, 0));

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

void func_ovl56_80133C88(void)
{
    s32 i;

    D_ovl56_801352CC = 0;
    D_ovl56_801352D0 = 0;

    sGmStageClear1PGameStage = gSceneData.spgame_stage;
    sGmStageClearDifficulty = gSaveData.spgame_difficulty;

    switch (sGmStageClear1PGameStage)
    {
    default:
        sGmStageClearKind = gmStageClear_Kind_Stage;
        break;

    case gm1PGame_Stage_Bonus1:
    case gm1PGame_Stage_Bonus2:
    case gm1PGame_Stage_Bonus3:
        sGmStageClearKind = gmStageClear_Kind_Result;
        sGmStageClearBonusObjectivesCleared = gSceneData.bonus_tasks_current;
        break;

    case gm1PGame_Stage_Boss:
        sGmStageClearKind = gmStageClear_Kind_Game;
        break;
    }
    sGmStageClearSecondsRemaining = gSceneData.spgame_time_seconds;
    sGmStageClearDamageDealt = D_800A4B18.player_block[gSceneData.spgame_player].total_damage_dealt;
    sGmStageClearScoreTotal = gSceneData.spgame_score;

    sGmStageClearBonusMasks[0] = gSceneData.bonus_get_mask[0];
    sGmStageClearBonusMasks[1] = gSceneData.bonus_get_mask[1];
    sGmStageClearBonusMasks[2] = gSceneData.bonus_tasks_complete;

    D_ovl56_801352D8 = gmStageClearCheckHaveBonusStats(&sGmStageClear1PGameStage);

    sGmStageClearBonusID = 0;
    D_ovl56_801353A0 = 0;

    for (i = 0; i < ARRAY_COUNT(sGmStageClearBonusStatGObjs); i++)
    {
        sGmStageClearBonusStatGObjs[i] = NULL;
    }
    for (i = 0; i < ARRAY_COUNT(sGmStageClearBonusObjectiveGObjs); i++)
    {
        sGmStageClearBonusObjectiveGObjs[i] = NULL;
    }
    sGmStageClearTimerTextGObj = NULL;
    sGmStageClearTimerMultiplierGObj = NULL;
    sGmStageClearTargetGObj = NULL;

    D_ovl56_80135334 = 0;
    sGmStageClearIsAdvance = FALSE;
    D_ovl56_8013533C = 0;

    if ((sGmStageClearKind == gmStageClear_Kind_Stage) || (sGmStageClearKind == gmStageClear_Kind_Game))
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

// 0x80133EEC
void gmStageClearUpdateTotal1PGameScore(void)
{
    gSceneData.spgame_score = sGmStageClearScoreTotal;
}

// 0x80133F00
void func_ovl56_80133F00(void)
{
    gmStageClearMakeScoreSObjs();
    func_800269C0(0xA8);
}

// 0x80133F28
sb32 gmStageClearCheckHaveTimer(void)
{
    if (gSceneData.spgame_time_limit == GMMATCH_TIMELIMIT_INFINITE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80133F50
void func_ovl56_80133F50(void)
{
    s32 i;

    if (D_ovl56_80135340 == D_ovl56_801352CC)
    {
        for (i = 0; i < ARRAY_COUNT(sGmStageClearBonusStatGObjs); i++)
        {
            if (sGmStageClearBonusStatGObjs[i] != NULL)
            {
                omEjectGObjCommon(sGmStageClearBonusStatGObjs[i]);
            }
        }
        sGmStageClearScoreTotal += gmStageClearUpdateGetBonusStatPointsAll();

        if (sGmStageClearScoreTotal < 0)
        {
            sGmStageClearScoreTotal = 0;
        }
        D_ovl56_80135344 = (sGmStageClearBonusNum * 10) + D_ovl56_801352CC + 20;
    }
    else if (D_ovl56_80135344 == D_ovl56_801352CC)
    {
        omEjectGObjCommon(sGmStageClearScoreTextGObj);
        func_ovl56_80133F00();

        D_ovl56_80135334 = 1;

        if (sGmStageClearIsAdvance != FALSE)
        {
            D_ovl56_80135348 = D_ovl56_801352CC + 20;
        }
    }
    else if (D_ovl56_80135348 == D_ovl56_801352CC)
    {
        D_ovl56_8013533C = 1;
    }
}

// 0x8013407C
void gmStageClearUpdateGameClearScore(void)
{
    s32 unused;
    f32 y;

    if (gmStageClearCheckHaveTimer() == FALSE)
    {
        if (D_ovl56_801352CC == D_ovl56_801353A8)
        {
            gmStageClearMakeTimerTextSObjs(94.0F);
        }
        if (D_ovl56_801352CC == D_ovl56_801353AC)
        {
            gmStageClearMakeTimerDigitSObjs(94.0F);
        }
        if (D_ovl56_801352CC == D_ovl56_801353B0)
        {
            omEjectGObjCommon(sGmStageClearTimerMultiplierGObj);
            sGmStageClearScoreTotal += gmStageClearGetAppendTotalTimeScore(94.0F);
        }
        if (D_ovl56_801352CC == D_ovl56_801353B4)
        {
            omEjectGObjCommon(sGmStageClearScoreTextGObj);
            func_ovl56_80133F00();
        }
    }
    y = (gmStageClearCheckHaveTimer() == FALSE) ? 126.0F : 94.0F;

    if (D_ovl56_801352CC == D_ovl56_801353B8)
    {
        gmStageClearMakeDamageTextSObjs(y);
    }
    if (D_ovl56_801352CC == D_ovl56_801353BC)
    {
        gmStageClearMakeDamageDigitSObjs(y);
    }
    if (D_ovl56_801352CC == D_ovl56_801353C0)
    {
        omEjectGObjCommon(sGmStageClearDamageMultiplierGObj);
        sGmStageClearScoreTotal += gmStageClearGetAppendTotalDamageScore(y);
    }
    if (D_ovl56_801352CC == D_ovl56_801353C4)
    {
        omEjectGObjCommon(sGmStageClearScoreTextGObj);
        func_ovl56_80133F00();

        if (D_ovl56_801352D8 != 0)
        {
            D_ovl56_80135340 = D_ovl56_80135344 = D_ovl56_80135348 = D_ovl56_801352CC + 10;
        }
        else D_ovl56_8013533C = 1;
    }
    if ((D_ovl56_801352D8 != 0) && (sGmStageClearBonusTextGObj != NULL) && (D_ovl56_80135340 == D_ovl56_801352CC))
    {
        omEjectGObjCommon(sGmStageClearBonusTextGObj);
        sGmStageClearBonusTextGObj = NULL;

        if (sGmStageClearTimerTextGObj != NULL)
        {
            omEjectGObjCommon(sGmStageClearTimerTextGObj);
            sGmStageClearTimerTextGObj = NULL;

            omEjectGObjCommon(sGmStageClearTimerMultiplierGObj);
            sGmStageClearTimerMultiplierGObj = NULL;
        }
        omEjectGObjCommon(sGmStageClearDamageTextGObj);
        sGmStageClearDamageTextGObj = NULL;

        omEjectGObjCommon(sGmStageClearDamageMultiplierGObj);
        sGmStageClearDamageMultiplierGObj = NULL;

        gmStageClearMakeBonusTable();
    }
    if (D_ovl56_801352D8 != 0)
    {
        func_ovl56_80133F50();
    }
}

// 0x80134340 - ??? Exactly the same as the function above ???
void gmStageClearUpdateStageClearScore(void)
{
    s32 unused;
    f32 y;

    if (gmStageClearCheckHaveTimer() == FALSE)
    {
        if (D_ovl56_801352CC == D_ovl56_801353A8)
        {
            gmStageClearMakeTimerTextSObjs(94.0F);
        }
        if (D_ovl56_801352CC == D_ovl56_801353AC)
        {
            gmStageClearMakeTimerDigitSObjs(94.0F);
        }
        if (D_ovl56_801352CC == D_ovl56_801353B0)
        {
            omEjectGObjCommon(sGmStageClearTimerMultiplierGObj);
            sGmStageClearScoreTotal += gmStageClearGetAppendTotalTimeScore(94.0F);
        }
        if (D_ovl56_801352CC == D_ovl56_801353B4)
        {
            omEjectGObjCommon(sGmStageClearScoreTextGObj);
            func_ovl56_80133F00();
        }
    }
    y = (gmStageClearCheckHaveTimer() == FALSE) ? 126.0F : 94.0F;

    if (D_ovl56_801352CC == D_ovl56_801353B8)
    {
        gmStageClearMakeDamageTextSObjs(y);
    }
    if (D_ovl56_801352CC == D_ovl56_801353BC)
    {
        gmStageClearMakeDamageDigitSObjs(y);
    }
    if (D_ovl56_801352CC == D_ovl56_801353C0)
    {
        omEjectGObjCommon(sGmStageClearDamageMultiplierGObj);
        sGmStageClearScoreTotal += gmStageClearGetAppendTotalDamageScore(y);
    }
    if (D_ovl56_801352CC == D_ovl56_801353C4)
    {
        omEjectGObjCommon(sGmStageClearScoreTextGObj);
        func_ovl56_80133F00();

        if (D_ovl56_801352D8 != 0)
        {
            D_ovl56_80135340 = D_ovl56_80135344 = D_ovl56_80135348 = D_ovl56_801352CC + 10;
        }
        else D_ovl56_8013533C = 1;
    }
    if ((D_ovl56_801352D8 != 0) && (sGmStageClearBonusTextGObj != NULL) && (D_ovl56_80135340 == D_ovl56_801352CC))
    {
        omEjectGObjCommon(sGmStageClearBonusTextGObj);
        sGmStageClearBonusTextGObj = NULL;

        if (sGmStageClearTimerTextGObj != NULL)
        {
            omEjectGObjCommon(sGmStageClearTimerTextGObj);
            sGmStageClearTimerTextGObj = NULL;

            omEjectGObjCommon(sGmStageClearTimerMultiplierGObj);
            sGmStageClearTimerMultiplierGObj = NULL;
        }
        omEjectGObjCommon(sGmStageClearDamageTextGObj);
        sGmStageClearDamageTextGObj = NULL;

        omEjectGObjCommon(sGmStageClearDamageMultiplierGObj);
        sGmStageClearDamageMultiplierGObj = NULL;

        gmStageClearMakeBonusTable();
    }
    if (D_ovl56_801352D8 != 0)
    {
        func_ovl56_80133F50();
    }
}

// 0x80134604
void gmStageClearUpdateResultScore(void)
{
    s32 i;

    if (sGmStageClear1PGameStage != gm1PGame_Stage_Bonus3)
    {
        if (D_ovl56_801352CC == 10)
        {
            gmStageClearMakeTargetTextSObjs();
        }
        else if (D_ovl56_801352CC == 20)
        {
            func_ovl56_80132F78();
            D_ovl56_801353A0 = (sGmStageClearBonusObjectivesCleared * 10) + D_ovl56_801352CC;
        }
    }
    else if (D_ovl56_801352CC == 10)
    {
        D_ovl56_801353A0 = D_ovl56_801352CC;
    }
    if (D_ovl56_801353A0 != 0)
    {
        if ((gmStageClearCheckHaveTimer() != FALSE) && (sGmStageClear1PGameStage != gm1PGame_Stage_Bonus3))
        {
            if (D_ovl56_801353A0 == D_ovl56_801352CC)
            {
                if (D_ovl56_801352D8 != 0)
                {
                    D_ovl56_80135340 = D_ovl56_80135344 = D_ovl56_80135348 = D_ovl56_801352CC + 10;
                }
                else D_ovl56_8013533C = 1;
            }
        }
        else if (D_ovl56_801352CC == (D_ovl56_801353A0 + 10))
        {
            if (sGmStageClear1PGameStage == gm1PGame_Stage_Bonus3)
            {
                gmStageClearMakeTimerTextSObjs(94.0F);
            }
            else if (sGmStageClearBonusObjectivesCleared == ARRAY_COUNT(sGmStageClearBonusObjectiveGObjs))
            {
                gmStageClearMakeTimerTextSObjs(126.0F);
            }
        }
        else if (D_ovl56_801352CC == (D_ovl56_801353A0 + 30))
        {
            if (sGmStageClear1PGameStage == gm1PGame_Stage_Bonus3)
            {
                gmStageClearMakeTimerDigitSObjs(94.0F);
            }
            else if (sGmStageClearBonusObjectivesCleared == 10)
            {
                gmStageClearMakeTimerDigitSObjs(126.0F);
            }
        }
        else if (D_ovl56_801352CC == (D_ovl56_801353A0 + 50))
        {
            if (sGmStageClear1PGameStage == gm1PGame_Stage_Bonus3)
            {
                omEjectGObjCommon(sGmStageClearTimerMultiplierGObj);
                sGmStageClearScoreTotal += gmStageClearGetAppendTotalTimeScore(94.0F);

            }
            else if (sGmStageClearBonusObjectivesCleared == ARRAY_COUNT(sGmStageClearBonusObjectiveGObjs))
            {
                omEjectGObjCommon(sGmStageClearTimerMultiplierGObj);
                sGmStageClearScoreTotal += gmStageClearGetAppendTotalTimeScore(126.0F);
            }
        }
        else if (D_ovl56_801352CC == (D_ovl56_801353A0 + 70))
        {
            if ((sGmStageClearBonusObjectivesCleared == ARRAY_COUNT(sGmStageClearBonusObjectiveGObjs)) || (sGmStageClear1PGameStage == gm1PGame_Stage_Bonus3))
            {
                omEjectGObjCommon(sGmStageClearScoreTextGObj);
                func_ovl56_80133F00();
            }
            if (D_ovl56_801352D8 != 0)
            {
                D_ovl56_80135340 = D_ovl56_80135344 = D_ovl56_80135348 = D_ovl56_801352CC + 10;
            }
            else D_ovl56_8013533C = 1;
        }
    }
    if ((D_ovl56_801352D8 != 0) && (sGmStageClearBonusTextGObj != NULL) && (D_ovl56_80135340 == D_ovl56_801352CC))
    {
        omEjectGObjCommon(sGmStageClearBonusTextGObj);
        sGmStageClearBonusTextGObj = NULL;

        if (sGmStageClearTargetGObj != NULL)
        {
            omEjectGObjCommon(sGmStageClearTargetGObj);
            sGmStageClearTargetGObj = NULL;

            for (i = 0; i < ARRAY_COUNT(sGmStageClearBonusObjectiveGObjs); i++)
            {
                if (sGmStageClearBonusObjectiveGObjs[i] != NULL)
                {
                    omEjectGObjCommon(sGmStageClearBonusObjectiveGObjs[i]);
                    sGmStageClearBonusObjectiveGObjs[i] = NULL;
                }
            }
        }
        if (sGmStageClearTimerTextGObj != NULL)
        {
            omEjectGObjCommon(sGmStageClearTimerTextGObj);
            sGmStageClearTimerTextGObj = NULL;

            omEjectGObjCommon(sGmStageClearTimerMultiplierGObj);
            sGmStageClearTimerMultiplierGObj = NULL;
        }
        gmStageClearMakeBonusTable();
    }
    if (D_ovl56_801352D8 != 0)
    {
        func_ovl56_80133F50();
    }
}

// 0x801349F0
void func_ovl56_801349F0(GObj *gobj)
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
                func_80005C74();
            }
            else if ((D_ovl56_80135334 != 0) && (sGmStageClearIsAdvance == FALSE))
            {
                D_ovl56_80135340 = D_ovl56_801352CC;
            }
        }
        switch (sGmStageClearKind)
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

// 0x80134AF4
void func_ovl56_80134AF4(void)
{
    s32 i, j;
    gsPixelComponent *this_pixel;
    gsPixelComponent *width_pixel;
    gsPixelComponent *other_pixel;
    s32 temp1, temp2;

    this_pixel = (uintptr_t)D_80044FA8 + 0x1914;
    other_pixel = (*(gsPixelComponent***)((uintptr_t)sGmStageClearFiles[6] + (intptr_t)&D_NF_0002074C))[2];

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
        {
            other_pixel++;
        }
    }
}

// 0x80134CC4
void func_ovl56_80134CC4(void)
{
    s32 unused;
    rdSetup rldm_setup;

    rldm_setup.tableRomAddr = &D_NF_001AC870;
    rldm_setup.tableFileCount = &D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = sGmStageClearStatusBuf;
    rldm_setup.statusBufSize = ARRAY_COUNT(sGmStageClearStatusBuf);
    rldm_setup.forceBuf = sGmStageClearForceBuf;
    rldm_setup.forceBufSize = ARRAY_COUNT(sGmStageClearForceBuf);

    rdManagerInitSetup(&rldm_setup);
    rdManagerLoadFiles(dGmStageClearFileIDs, ARRAY_COUNT(dGmStageClearFileIDs), sGmStageClearFiles, gsMemoryAlloc(rdManagerGetAllocSize(dGmStageClearFileIDs, ARRAY_COUNT(dGmStageClearFileIDs)), 0x10));
    omMakeGObjCommon(0, func_ovl56_801349F0, 0, GOBJ_LINKORDER_DEFAULT);
    func_ovl56_80134AF4();
    func_8000B9FC(0, 0x80000000, 0x64, 0, 0);
    func_ovl56_80133C88();
    func_ovl56_80133B48();
    func_ovl56_80133BE8();
    gmStageClearMakeFrameCopyBackground();
    gmStageClearMakeTextSObjs();
    gmStageClearMakeScoreSObjs();

    switch (sGmStageClear1PGameStage)
    {
    case gm1PGame_Stage_Boss:
        func_80020AB4(0, 0x1D);
        break;

    case gm1PGame_Stage_Bonus1:
    case gm1PGame_Stage_Bonus2:
        if (D_800A4B08 == 10)
        {
            func_80020AB4(0, 0x1C);
        }
        else func_80020AB4(0, 0x1E);
        break;

    case gm1PGame_Stage_Bonus3:
        if (D_800A4AEC != 0)
        {
            func_80020AB4(0, 0x1C);
        }
        else func_80020AB4(0, 0x1E);
        break;

    default:
        func_80020AB4(0, 0x1B);
        break;
    }
}

// 0x801351EC
scUnkDataBounds D_ovl56_801351EC;

// 0x80135208
scRuntimeInfo D_ovl56_80135208;

// 80134E84
void gmStageClearStartScene(void)
{
    D_ovl56_801351EC.unk_scdatabounds_0xC = ((intptr_t)&D_NF_800A5240 - 0x1900);

    func_80007024(&D_ovl56_801351EC);

    D_ovl56_80135208.arena_size = ((uintptr_t)&func_ovl1_803903E0 - (uintptr_t)&lGmStageClearArenaLo);

    func_8000683C(&D_ovl56_80135208);
}