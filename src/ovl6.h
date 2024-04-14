#ifndef _OVL6_H_
#define _OVL6_H_

void omAddDObjAnimAll(DObj*, ATrack*, f32);
void func_ovl0_800C88AC(DObj*, void*, void*, f32);		 /* extern */
void func_ovl0_800C9228(DObj*, void*);					 /* extern */
void func_ovl0_800C8758(DObj*, void*, f32);				 /* extern */
void func_ovl2_8010CFA8(GObj*, f32, f32, f32, f32, f32); /* extern */
void func_ovl0_800CCF00(GObj*);
void itManager_AllocUserData();
void wpManager_AllocUserData();
void ftPublicity_SetPlayerPublicReact();
void lbMemory_SaveData_WriteSRAM(gmBattleState*);
void ftRender_Lights_DisplayLightReflect(Gfx**, f32, f32);
void func_ovl2_801157EC();
void func_ovl6_8018ED70();

typedef struct grBonusDesc
{
	intptr_t o_main;
	intptr_t o_dobjdesc;
	intptr_t o_anim;

} grBonusDesc;

scUnkDataBounds D_ovl6_8018F080;
scRuntimeInfo D_ovl6_8018F09C;

// 0x8018EEC4
s32 unused8018EEC4 = 0;

// 0x8018EEC4
grBonus1Targets scBonusGame_Bonus1_TargetOffsets[/* */] =
{
    // Bonus1Mario
    {
        0x1EB0,
        0x2150,
        0x2360
    },

    // Bonus1Fox
    {
        0x2068,
        0x24B0,
        0x26C0
    },

    // Bonus1Donkey
    {
        0x1F20,
        0x2250,
        0x2460
    },

    // Bonus1Samus
    {
        0x1868,
        0x1B30,
        0x1D40
    },

    // Bonus1Luigi
    {
        0x1BA0,
        0x2020,
        0x2230
    },

    // Bonus1Link
    {
        0x2378,
        0x2770,
        0x2980
    },

    // Bonus1Yoshi
    {
        0x2D68,
        0x3290,
        0x34A0
    },

    // Bonus1Captain
    {
        0x1888,
        0x1B70,
        0x1D80
    },

    // Bonus1Kirby
    {
        0x2150,
        0x2510,
        0x2720
    },

    // Bonus1Pikachu
    {
        0x2658,
        0x2A70,
        0x2C80
    },

    // Bonus1Purin
    {
        0x1FF8,
        0x23A0,
        0x25B0
    },

    // Bonus1Ness
    {
        0x2940,
        0x2E60,
        0x3070
    }
};


// 8018EF54
grBonus2Bumpers scBonusGame_Bonus2_BumperOffsets[/* */] = {
	// Mario
	{ 0x0000, 0x0000 },

	// Fox
	{ 0xE160, 0xE350 },

	// Donkey or Samus (??)
	{ 0x0000, 0x0000 },

	// Luigi
	{ 0x2910, 0x29C0 },

	// Link
	{ 0x0000, 0x0000 },

	// Yoshi
	{ 0x0000, 0x0000 },

	// Captain
	{ 0x0000, 0x0000 },

    // Donkey or Samus (??)
    { 0x0000, 0x0000 },

	// Kirby
	{ 0x3920, 0x3A60 },

	// Pikachu
	{ 0x0000, 0x0000 },

	// Purin
	{ 0x4FE0, 0x5120 },

	// Ness
	{ 0x3FE0, 0x4090 }
};

// 8018EFB4
grBonus2Nodes scBonusGame_Bonus2_PlatformOffsets[/* */] = {
	// Narrow
	{ 0x3DA8, 0x3E60, 0x3720, 0x3F00 },

	// Medium
	{ 0x45D8, 0x4690, 0x3F70, 0x4730 },

	// Wide
	{ 0x4E08, 0x4EC0, 0x47A0, 0x4F70 }
};

// 8018EFE4
grBonus2Unk D_ovl6_8018EFE4[/* */] = { { 0x5520, 0x55D0 }, { 0x5B80, 0x5C30 }, { 0x61E0, 0x6290 } };

// 0x8018EFFC - last one is apparently 0.554000020027F but precision is lost
f32 scBonusGame_Timer_UnitLengths[/* */] = { I_MIN_TO_FRAMES(10), I_MIN_TO_FRAMES(1),	   I_SEC_TO_FRAMES(10),
											 I_SEC_TO_FRAMES(1),  I_SEC_TO_FRAMES(1) / 10, 277.0F / 500.0F };

// 8018F014
s32 scBonusGame_Timer_DigitPositions[/* */] = {
	/* 0 */ 207,
	/* 1 */ 222,
	/* 2 */ 240,
	/* 3 */ 255,
	/* 4 */ 273,
	/* 5 */ 288
};

// 8018F02C
s32 scBonusGame_Player_InterfacePositions[/* */] = { 55, 55, 55, 55 };

// 8018F03C
Unk800D4060 D_ovl6_8018F03C = { 0 };

// 8018F3A0
u8 gBonusTimerDigits[6];

// 8018F3A8
sb32 gIsBonusGameTimeUp;

extern ftCreateDesc dFtDefaultFighterDesc; // ovl2 80116DD0
extern intptr_t D_NF_00000088;
extern intptr_t D_NF_00000097;
extern intptr_t D_NF_000000C0;
extern intptr_t D_NF_000000FD;
extern intptr_t D_NF_00000138;
extern intptr_t D_NF_000001D0;
extern intptr_t D_NF_00001140;
extern intptr_t D_NF_00001238;
extern uintptr_t D_NF_800A5240;
extern uintptr_t lOverlay6ArenaLo; // 0x8018F710
extern uintptr_t lOverlay6ArenaHi; // 0x80392A00
extern void* D_ovl6_8018F1A0[];

extern void* gCommonSpriteFiles[/* */];
extern intptr_t ifTimer_Digits_SpriteOffsets[/* */];
extern void* D_ovl2_801313F4;
extern grStruct gGroundStruct;
extern gmBattleState gDefaultBattleState;
extern gmBattleState gBonusBattleState;
extern grBonusDesc D_ovl6_8018EEC4[];
extern GObj* gOMObjCommonLinks[OM_COMMON_MAX_LINKS];

#endif