#include "common.h"
#include "scene_manager.h"

#include <ovl0/halsprite.h>
#include <ovl0/ovl0.h>
#include "ovl2/ovl2.h"
#include "scenemgr/entries.h"
#include <sys/crash.h>
#include <sys/dma.h>
#include <sys/gtl.h>
#include <sys/hal_audio.h>
#include <sys/objdraw.h>
#include <sys/system_00.h>
#include <sys/system_03_1.h>
#include <sys/system_04.h>
#include <sys/thread6.h>
#include <gm/battle.h>

#include <macros.h>

#include <PR/mbi.h>
#include <PR/ultratypes.h>


// BSS
u8 D_800A44D0[16];
gmSaveInfo gSaveData;
// current screen info
gmSceneInfo gSceneData;
gmBattleState D_800A4B18;
gmBattleState gTransferBattleState;
gmBattleState D_800A4EF8;
// pointer to battle settings, probably has to be moved here from battle.h
// gmSceneInfo *gBattleState;
u32 D_800A50EC;
u8 D_800A50F0[8];
u8 D_800A50F8[324];
u32 D_800A523C;


// Forward declarations
extern void start_scene_manager(u32);
extern void smProcPrintGObjStatus(void);

// DATA
u32 unkSceneManager_800A3060 = 0;
u32 unkSceneManager_800A3064 = 0;
u32 unkSceneManager_800A3068 = 0;
u32 unkSceneManager_800A306C = 0;


gsOverlay D_800A3070[65] = {
	GENERATE_OVERLAY_SECTION_DATA(0),
	GENERATE_OVERLAY_SECTION_DATA(1),
	GENERATE_OVERLAY_SECTION_DATA(2),
	GENERATE_OVERLAY_SECTION_DATA(3),
	GENERATE_OVERLAY_SECTION_DATA(4),
	GENERATE_OVERLAY_SECTION_DATA(5),
	GENERATE_OVERLAY_SECTION_DATA(6),
	GENERATE_OVERLAY_SECTION_DATA(7),
	GENERATE_OVERLAY_SECTION_DATA(8),
	GENERATE_OVERLAY_SECTION_DATA(9),
	GENERATE_OVERLAY_SECTION_DATA(10),
	GENERATE_OVERLAY_SECTION_DATA(11),
	GENERATE_OVERLAY_SECTION_DATA(12),
	GENERATE_OVERLAY_SECTION_DATA(13),
	GENERATE_OVERLAY_SECTION_DATA(14),
	GENERATE_OVERLAY_SECTION_DATA(15),
	GENERATE_OVERLAY_SECTION_DATA(16),
	GENERATE_OVERLAY_SECTION_DATA(17),
	GENERATE_OVERLAY_SECTION_DATA(18),
	GENERATE_OVERLAY_SECTION_DATA(19),
	GENERATE_OVERLAY_SECTION_DATA(20),
	GENERATE_OVERLAY_SECTION_DATA(21),
	GENERATE_OVERLAY_SECTION_DATA(22),
	GENERATE_OVERLAY_SECTION_DATA(23),
	GENERATE_OVERLAY_SECTION_DATA(24),
	GENERATE_OVERLAY_SECTION_DATA(25),
	GENERATE_OVERLAY_SECTION_DATA(26),
	GENERATE_OVERLAY_SECTION_DATA(27),
	GENERATE_OVERLAY_SECTION_DATA(28),
	GENERATE_OVERLAY_SECTION_DATA(29),
	GENERATE_OVERLAY_SECTION_DATA(30),
	GENERATE_OVERLAY_SECTION_DATA(31),
	GENERATE_OVERLAY_SECTION_DATA(32),
	GENERATE_OVERLAY_SECTION_DATA(33),
	GENERATE_OVERLAY_SECTION_DATA(34),
	GENERATE_OVERLAY_SECTION_DATA(35),
	GENERATE_OVERLAY_SECTION_DATA(36),
	GENERATE_OVERLAY_SECTION_DATA(37),
	GENERATE_OVERLAY_SECTION_DATA(38),
	GENERATE_OVERLAY_SECTION_DATA(39),
	GENERATE_OVERLAY_SECTION_DATA(40),
	GENERATE_OVERLAY_SECTION_DATA(41),
	GENERATE_OVERLAY_SECTION_DATA(42),
	GENERATE_OVERLAY_SECTION_DATA(43),
	GENERATE_OVERLAY_SECTION_DATA(44),
	GENERATE_OVERLAY_SECTION_DATA(45),
	GENERATE_OVERLAY_SECTION_DATA(46),
	GENERATE_OVERLAY_SECTION_DATA(47),
	GENERATE_OVERLAY_SECTION_DATA(48),
	GENERATE_OVERLAY_SECTION_DATA(49),
	GENERATE_OVERLAY_SECTION_DATA(50),
	GENERATE_OVERLAY_SECTION_DATA(51),
	GENERATE_OVERLAY_SECTION_DATA(52),
	GENERATE_OVERLAY_SECTION_DATA(53),
	GENERATE_OVERLAY_SECTION_DATA(54),
	GENERATE_OVERLAY_SECTION_DATA(55),
	GENERATE_OVERLAY_SECTION_DATA(56),
	GENERATE_OVERLAY_SECTION_DATA(57),
	GENERATE_OVERLAY_SECTION_DATA(58),
	GENERATE_OVERLAY_SECTION_DATA(59),
	GENERATE_OVERLAY_SECTION_DATA(60),
	GENERATE_OVERLAY_SECTION_DATA(61),
	GENERATE_OVERLAY_SECTION_DATA(62),
	GENERATE_OVERLAY_SECTION_DATA(63),
	GENERATE_OVERLAY_SECTION_DATA(64)
};

// gDefaultSaveData is the only non matching in .data
gmSaveInfo gDefaultSaveData = {
	{{{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0, {
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0}}}}, 0, 0, 0, 0, 0, 0, 0, 0, 0, {
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0xC0, 0, 0}}, 0, 0, 0, 0, 0, 0x02, 0x9a, 0, 0, 0
};

gmSceneInfo gDefaultSceneData = {
	0x1B, 0x1B, 0x07,
	{0x07, 0x07, 0x07, 0x07, 0x07, 0x07},
	0x04, 0x00,
	{0x00, 0x1C, 0x1C, 0x1C},
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x05, 0x00,
	{0x00, 0x00, 0x00},
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	{0x00000000, 0x00000000},
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
 };

// clang-format off
/*
gmBattleState gDefaultBattleState = {
	0, 0, 0, TIMESTOCK_TIME_ON,
	0, 0, 3, 2,
	HANDICAP_MODE_OFF, FALSE, 1, 100,
	0xFFFFFFFF,
	1, 0,
	0,
	0,
	ITEM_RATE_MIDDLE, 0x80, 0,
	0, 0,
	{
		{
			3, 9, PLAYER_NOT_PRESENT, 0x1C,
			0, 0, 0,
			1, 0x00, 0x00,
			// rest is zero
		},
		{
			3, 9, PLAYER_NOT_PRESENT, 0x1C,
			0, 0, 0,
			1, 0x00, 0x10,
			// rest is zero
		},
		{
			3, 9, PLAYER_NOT_PRESENT, 0x1C,
			1, 0, 0,
			1, 0x00, 0x20,
			// rest is zero
		},
		{
			3, 9, PLAYER_NOT_PRESENT, 0x1C,
			1, 0, 0,
			0, 0, 1, 3,
			// rest is zero
		},
	}
};
*/
// clang-format on


#pragma GLOBAL_ASM("asm/nonmatchings/scenemgr/scene_manager/start_scene_manager.s")

// set up gtl and om systems
void func_800A2698(struct gsGTLSetupDesc *arg) {
	gsGTLSceneInit(arg);
}

void func_800A26B8(void) {
	func_8000A340();
}

void func_800A26D8(struct GObjCommon *arg0);
#pragma GLOBAL_ASM("asm/nonmatchings/scenemgr/scene_manager/func_800A26D8.s")

struct GObjCommon *func_800A2B18(s32 link, u32 arg1, s32 arg2) {
	if (find_gobj_with_id(0xEFFFFFFF) != NULL) { return NULL; }

	return func_8000B93C(0xEFFFFFFF, NULL, link, arg1, func_800A26D8, arg2, 0, 0, 0, 0, 0, 0, 0);
}

// set_up_debug_objs ? something like that
void unref_800A2BA8(s32 link, u32 arg1, s32 arg2) {
	struct GObjCommon *com;

	com = find_gobj_with_id(0xFFFFFFFE);
	if (com != NULL) {
		omEjectGObj(com);
	} else {
		func_80022368(link, arg1, arg2);
	}

	com = find_gobj_with_id(0xEFFFFFFF);
	if (com != NULL) {
		omEjectGObj(com);
	} else {
		func_800A2B18(link, arg1, arg2);
	}
}

#pragma GLOBAL_ASM("asm/nonmatchings/scenemgr/scene_manager/crash_inspect_gobj.s")

#pragma GLOBAL_ASM("asm/nonmatchings/scenemgr/scene_manager/smProcPrintGObjStatus.s")

#pragma GLOBAL_ASM("asm/nonmatchings/scenemgr/scene_manager/smRunPrintGObjStatus.s")
