#ifndef _OVL6_H_
#define _OVL6_H_

void omAddDObjAnimAll(DObj*, ATrack*, f32);
void func_ovl0_800C88AC(DObj*, void*, void*, f32);		 /* extern */
void func_ovl0_800C9228(DObj*, void*);					 /* extern */
void func_ovl0_800C8758(DObj*, void*, f32);				 /* extern */
void func_ovl2_8010CFA8(GObj*, f32, f32, f32, f32, f32); /* extern */
void func_ovl0_800CCF00(GObj*);

typedef struct grBonusDesc
{
	intptr_t o_main;
	intptr_t o_dobjdesc;
	intptr_t o_anim;

} grBonusDesc;

// 0x8018EF54
grBonus2Bumpers scBonusGame_Bonus2_BumperOffsets[/* */] = {
	// Mario
	{ 0x0000, 0x0000 },

	// Fox
	{ 0xE160, 0xE350 },

	// Donkey
	{ 0x0000, 0x0000 },

	// Samus
	{ 0x0000, 0x0000 },

	// Luigi
	{ 0x2910, 0x29C0 },

	// Link
	{ 0x0000, 0x0000 },

	// Yoshi
	{ 0x0000, 0x0000 },

	// Captain
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

// 0x8018EFB4
grBonus2Nodes scBonusGame_Bonus2_PlatformOffsets[/* */] = {
	// Narrow
	{ 0x3DA8, 0x3E60, 0x3720, 0x3F00 },

	// Medium
	{ 0x45D8, 0x4690, 0x3F70, 0x4730 },

	// Wide
	{ 0x4E08, 0x4EC0, 0x47A0, 0x4F70 },

	// Unk1
	{ 0x5520, 0x55D0, 0x5B80, 0x5C30 }
};

// 0x8018EFE4
grBonus2Unk D_ovl6_8018EFE4[/* */] = { { 0x5520, 0x55D0 }, { 0x5B80, 0x5C30 }, { 0x61E0, 0x6290 } };

// 0x8018EFFC - last one is apparently 0.554000020027F but precision is lost
f32 scBonusGame_Timer_UnitLengths[/* */] = { I_MIN_TO_FRAMES(10), I_MIN_TO_FRAMES(1),	   I_SEC_TO_FRAMES(10),
											 I_SEC_TO_FRAMES(1),  I_SEC_TO_FRAMES(1) / 10, 277.0F / 500.0F };

// 0x8018F014
s32 scBonusGame_Timer_DigitPositions[/* */] = {
	/* 0 */ 207,
	/* 1 */ 222,
	/* 2 */ 240,
	/* 3 */ 255,
	/* 4 */ 273,
	/* 5 */ 288
};

// 0x8018F02C
s32 scBonusGame_Player_InterfacePositions[/* */] = { 55, 55, 55, 55 };

// 0x8018F03C
Unk800D4060 D_ovl6_8018F03C = { 0 };

// 0x8018F3A0
u8 gBonusTimerDigits[6];

// 0x8018F3A8
sb32 gIsBonusGameTimeUp;

extern s32 D_NF_00000088;
extern intptr_t D_NF_000000C0;
extern intptr_t D_NF_00000097;
extern intptr_t D_NF_000000FD;
extern intptr_t D_NF_00000138;
extern intptr_t D_NF_000001D0;
extern intptr_t D_NF_00001140;
extern intptr_t D_NF_00001238;
extern void* D_ovl6_8018F1A0[];
extern void* gCommonSpriteFiles[/* */];
extern intptr_t ifTimer_Digits_SpriteOffsets[/* */];
extern void* D_ovl2_801313F4;
extern grStruct gGroundStruct;
extern gmMatchInfo gDefaultBattleState;
extern gmMatchInfo gBonusBattleState;
extern grBonusDesc D_ovl6_8018EEC4[];
extern GObj* gOMObjCommonLinks[OM_COMMON_MAX_LINKS];

#endif