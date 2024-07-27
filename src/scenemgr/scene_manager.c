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
#include <sys/objdef.h>
#include <sys/objtypes.h>

#include <macros.h>

#include <PR/mbi.h>
#include <PR/ultratypes.h>

extern intptr_t D_NF_80392A00; // _ovl1SegNoloadEnd
extern s32 D_8003B874_3C474;
extern GObj* D_80046A54;
extern GObj* D_80046A5C_40A7C;

// BSS
u8 D_800A44D0[16];
gmBackupInfo gSaveData;
// current screen info
gmSceneInfo gSceneData;
gmBattleState D_800A4B18;
gmBattleState gTransferBattleState;
gmBattleState D_800A4EF8;
// pointer to battle settings, probably has to be moved here from battle.h
gmSceneInfo* _gBattleState;
u32 D_800A50EC;
u8 D_800A50F0[8];
u8 D_800A50F8[324];
u32 D_800A523C;


// Forward declarations
extern void smProcPrintGObjStatus();

// DATA
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
gmBackupInfo gDefaultSaveData = {
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
		{0, 0}}}}, 1, 1, 0, 0, 0, 0, 0, 1, 2, {
		{0, 0, 0, 0, 0x34BC0, 0, 0x34BC0, 0, 0},
		{0, 0, 0, 0, 0x34BC0, 0, 0x34BC0, 0, 0},
		{0, 0, 0, 0, 0x34BC0, 0, 0x34BC0, 0, 0},
		{0, 0, 0, 0, 0x34BC0, 0, 0x34BC0, 0, 0},
		{0, 0, 0, 0, 0x34BC0, 0, 0x34BC0, 0, 0},
		{0, 0, 0, 0, 0x34BC0, 0, 0x34BC0, 0, 0},
		{0, 0, 0, 0, 0x34BC0, 0, 0x34BC0, 0, 0},
		{0, 0, 0, 0, 0x34BC0, 0, 0x34BC0, 0, 0},
		{0, 0, 0, 0, 0x34BC0, 0, 0x34BC0, 0, 0},
		{0, 0, 0, 0, 0x34BC0, 0, 0x34BC0, 0, 0},
		{0, 0, 0, 0, 0x34BC0, 0, 0x34BC0, 0, 0},
		{0, 0, 0, 0, 0x34BC0, 0, 0x34BC0, 0, 0}}, 0, 0, 0, 0, 0, 0x02, 0x9a, 0, 0, 0
};

gmSceneInfo gDefaultSceneData = {
	0x1B, 0x1B, 0x07,
	{0x07, 0x07, 0x07, 0x07, 0x07, 0x07},
	0x04, 0x00,
	{0x00, 0x1C},
	{0x1C, 0x1C},
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x05, 0x00,
	{0x00, 0x00, 0x00},
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	{0x00000000, 0x00000000},
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
 };

gmBattleState gDefaultBattleState = {
	0, 0, 0, TIMESTOCK_TIME_ON,
	0, 0, 3, 2,
	HANDICAP_MODE_OFF, FALSE, 1, 100,
	0xFFFFFFFF,
	1, 0, 0, 0,
	0, 0,
	3,
	1, 0,
	{
		{
			3, 9, PLAYER_NOT_PRESENT, 0x1C,
			0, 0, 0,
			0, 0, 1, 0,
			// rest is zero
		},
		{
			3, 9, PLAYER_NOT_PRESENT, 0x1C,
			0, 0, 0,
			0, 0, 1, 1,
			// rest is zero
		},
		{
			3, 9, PLAYER_NOT_PRESENT, 0x1C,
			1, 0, 0,
			0, 0, 1, 2,
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

u32 D_800A41B8 = 0;
u32 D_800A41BC = 0;

char D_800A41C0[] = "Mar 16 1999 18:26:57";


void n64_logo_entry();
void title_screen_entry();
void debug_sss_entry();
void debug_system_entry();
void debug_battle_entry();
void debug_falls_entry();
void debug_button_test_entry();
void menu_main_entry();
void menu_1p_entry();
void mnOptionStartScene();
void mnDataStartScene();
void menu_vs_entry();
void options_vs_entry();
void overlay_set11_entry();
void overlay_set12_entry();
void overlay_set13_entry();
void classic_map_entry();
void screen_adjust_entry();
void vs_css_entry();
void mnStageStartScene();
void scBattleRoyalStartScene();
void overlay_set23_entry();
void func_ovl2_800D67DC();
void scManager_BonusGame_InitScene();
void scManager_TrainingMode_InitScene();
void vs_results_entry();
void vs_records_entry();
void char_bkg_info_entry();
void mnN64StartScene();
void intro_firstscene_entry();
void mvPortraitsStartScene();
void intro_focus_mario_entry();
void intro_focus_dk_entry();
void intro_focus_samus_entry();
void intro_focus_fox_entry();
void intro_focus_link_entry();
void intro_focus_yoshi_entry();
void intro_focus_pikachu_entry();
void intro_focus_kirby_entry();
void intro_chars_running_entry();
void intro_yoshi_nest_entry();
void intro_link_hill_entry();
void intro_mario_vs_kirby_entry();
void intro_pika_pokeball_entry();
void intro_sex_kicks_entry();
void intro_great_fox_entry();
void mvOpeningDKVsSamusStartScene();
void intro_hidden_chars_entry();
void classic_css_entry();
void training_css_entry();
void bonus_css_entry();
void bonus_css_entry();
void menu_backup_clear_entry();
void mvEndingStartScene();
void gmContinueStartScene();
void gmStageClearStartScene();
void gmCreditsStartScene();
void mnCongraStartScene();
void mnSoundTestStartScene();
void scExplainStartScene();
void scAutoDemoStartScene();

// 800A1980
void start_scene_manager(u32 set)
{
	u16* csr;
	uintptr_t end;
	gmBattleState sp220;
	gmBattleState sp30;

	set_contstatus_delay(60);
	gsSetCrashPrintFunction(smProcPrintGObjStatus);
	gsStartRmonThread5Hang();
	gsLoadOverlay(&D_800A3070[0]);
	gsLoadOverlay(&D_800A3070[2]);
	gsLoadOverlay(&D_800A3070[1]);

	gSaveData  = gDefaultSaveData;
	gSceneData = gDefaultSceneData;
	sp30       = gDefaultBattleState;
	D_800A4EF8 = sp30;
	sp220      = sp30;
	gTransferBattleState = sp220;
	D_800A4B18 = sp220;

	ftManagerSetupFileSize();
	D_8003CB6D = 72;

	func_8002102C();
	while (func_8002103C()) { }

	auSetReverbType(6);
	while (func_80021048()) { }

	lbMemory_SaveData_CheckSaveDataValid();
	func_ovl0_800D46F4();

	// it needs to be something like this to match
	// csr = (void *)_ovl1SegNoloadEnd; // 0x80392A00
	csr = (u16*) &D_NF_80392A00;//(void *)_ovl1SegNoloadEnd; // 0x80392A00
	end = 0x80400000;
	while ((uintptr_t)csr < end)
		*(csr++) = GPACK_RGBA5551(0, 0, 0, 1);

	if (D_800451A0 == 0)
		gSceneData.scene_current = 0;

	while (TRUE)
	{
		switch (gSceneData.scene_current) {
			case 0:
				gsLoadOverlay(&D_800A3070[11]);
				n64_logo_entry();
				break;
			case 1:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[10]);
				gsLoadOverlay(&D_800A3070[8]);
				gsLoadOverlay(&D_800A3070[9]);
				title_screen_entry();
				break;
			case 2:
				gsLoadOverlay(&D_800A3070[12]);
				gsLoadOverlay(&D_800A3070[8]);
				gsLoadOverlay(&D_800A3070[9]);
				debug_sss_entry();
				break;
			case 3:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[13]);
				gsLoadOverlay(&D_800A3070[8]);
				gsLoadOverlay(&D_800A3070[9]);
				debug_system_entry();
				break;
			case 4:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[14]);
				gsLoadOverlay(&D_800A3070[8]);
				gsLoadOverlay(&D_800A3070[9]);
				debug_battle_entry();
				break;
			case 5:
				gsLoadOverlay(&D_800A3070[15]);
				debug_falls_entry();
				break;
			case 6:
				gsLoadOverlay(&D_800A3070[16]);
				debug_button_test_entry();
				break;
			case 7:
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[17]);
				menu_main_entry();
				break;
			case 8:
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[18]);
				menu_1p_entry();
				break;
			case 57:
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[60]);
				mnOptionStartScene();
				break;
			case 58:
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[61]);
				mnDataStartScene();
				break;
			case 9:
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[19]);
				menu_vs_entry();
				break;
			case 10:
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[20]);
				options_vs_entry();
				break;
			case 11:
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[21]);
				overlay_set11_entry();
				break;
			case 12:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[22]);
				overlay_set12_entry();
				break;
			case 13:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[23]);
				overlay_set13_entry();
				break;
			case 14:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[24]);
				classic_map_entry();
				break;
			case 15:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[25]);
				screen_adjust_entry();
				break;
			case 16:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[26]);
				vs_css_entry();
				break;
			case 21:
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[30]);
				mnStageStartScene();
				break;
			case 22:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[3]);
				gsLoadOverlay(&D_800A3070[4]);
				scBattleRoyalStartScene();
				break;
			case 23:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[3]);
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[5]);
				overlay_set23_entry();
				break;
			case 52: 
				func_ovl2_800D67DC();
				break;
			case 53:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[3]);
				gsLoadOverlay(&D_800A3070[6]);
				scManager_BonusGame_InitScene();
				break;
			case 54:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[3]);
				gsLoadOverlay(&D_800A3070[7]);
				scManager_TrainingMode_InitScene();
				break;
			case 24:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[31]);
				vs_results_entry();
				break;
			case 25:
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[32]);
				vs_records_entry();
				break;
			case 26:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[33]);
				char_bkg_info_entry();
				break;
			case 27:
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[58]);
				mnN64StartScene();
				break;
			case 28:
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[34]);
				intro_firstscene_entry();
				break;
			case 29:
				gsLoadOverlay(&D_800A3070[35]);
				mvPortraitsStartScene();
				break;
			case 30:
				gsLoadOverlay(&D_800A3070[3]);
				gsLoadOverlay(&D_800A3070[36]);
				intro_focus_mario_entry();
				break;
			case 31:
				gsLoadOverlay(&D_800A3070[37]);
				intro_focus_dk_entry();
				break;
			case 32:
				gsLoadOverlay(&D_800A3070[38]);
				intro_focus_samus_entry();
				break;
			case 33:
				gsLoadOverlay(&D_800A3070[39]);
				intro_focus_fox_entry();
				break;
			case 34:
				gsLoadOverlay(&D_800A3070[40]);
				intro_focus_link_entry();
				break;
			case 35:
				gsLoadOverlay(&D_800A3070[41]);
				intro_focus_yoshi_entry();
				break;
			case 36:
				gsLoadOverlay(&D_800A3070[42]);
				intro_focus_pikachu_entry();
				break;
			case 37:
				gsLoadOverlay(&D_800A3070[43]);
				intro_focus_kirby_entry();
				break;
			case 38:
				gsLoadOverlay(&D_800A3070[44]);
				intro_chars_running_entry();
				break;
			case 39:
				gsLoadOverlay(&D_800A3070[45]);
				intro_yoshi_nest_entry();
				break;
			case 40:
				gsLoadOverlay(&D_800A3070[46]);
				intro_link_hill_entry();
				break;
			case 41:
				gsLoadOverlay(&D_800A3070[47]);
				intro_mario_vs_kirby_entry();
				break;
			case 42:
				gsLoadOverlay(&D_800A3070[48]);
				intro_pika_pokeball_entry();
				break;
			case 43:
				gsLoadOverlay(&D_800A3070[49]);
				intro_sex_kicks_entry();
				break;
			case 44:
				gsLoadOverlay(&D_800A3070[50]);
				intro_great_fox_entry();
				break;
			case 45:
				gsLoadOverlay(&D_800A3070[3]);
				gsLoadOverlay(&D_800A3070[51]);
				mvOpeningDKVsSamusStartScene();
				break;
			case 46:
				gsLoadOverlay(&D_800A3070[52]);
				intro_hidden_chars_entry();
				break;
			case 17:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[27]);
				classic_css_entry();
				break;
			case 18:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[28]);
				training_css_entry();
				break;
			case 19:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[29]);
				bonus_css_entry();
				break;
			case 20:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[29]);
				bonus_css_entry();
				break;
			case 47:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[53]);
				menu_backup_clear_entry();
				break;
			case 48:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[54]);
				mvEndingStartScene();
				break;
			case 49:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[55]);
				gmContinueStartScene();
				break;
			case 50:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[56]);
				gmStageClearStartScene();
				break;
			case 51:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[56]);
				gmStageClearStartScene();
				break;
			case 56:
				gsLoadOverlay(&D_800A3070[59]);
				gmCreditsStartScene();
				break;
			case 55:
				gsLoadOverlay(&D_800A3070[57]);
				mnCongraStartScene();
				break;
			case 59:
				gsLoadOverlay(&D_800A3070[1]);
				gsLoadOverlay(&D_800A3070[62]);
				mnSoundTestStartScene();
				break;
			case 60:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[3]);
				gsLoadOverlay(&D_800A3070[63]);
				scExplainStartScene();
				break;
			case 61:
				gsLoadOverlay(&D_800A3070[2]);
				gsLoadOverlay(&D_800A3070[3]);
				gsLoadOverlay(&D_800A3070[64]);
				scAutoDemoStartScene();
				break;
		}
	}
}

// 800A2698
void func_800A2698(gsGTLSetupDesc *arg) // set up gtl and om systems
{
	gsGTLSceneInit(arg);
}

// 800A26B8
void func_800A26B8()
{
	func_8000A340();
}

// 800A26D8
void func_800A26D8(GObj* arg0)
{
	s32 width; // sp74
	UNUSED s32 spPad70;
	s32 barY = 203; // sp6C

	func_80016338(gDisplayListHead, arg0->obj, 0);
	gDPPipeSync((*gDisplayListHead)++);
	gDPSetCycleType((*gDisplayListHead)++, G_CYC_FILL);
	gDPSetRenderMode((*gDisplayListHead)++, G_RM_NOOP, G_RM_NOOP2);
	width = ((D_ovl0_800D6448 / 112.0f) * 256.0f);
	if (width < 0)
		width = 0;
	if (width > 256)
		width = 256;
	gDPSetFillColor((*gDisplayListHead)++, gsGetFillColor(0x0000FFFF));
	gDPFillRectangle((*gDisplayListHead)++, 30, barY, width + 30, barY + 1);

	barY += 2;
	gDPPipeSync((*gDisplayListHead)++);
	width = ((D_ovl0_800D644A / 24.0f) * 256.0f);
	if (width < 0)
		width = 0;
	if (width > 256)
		width = 256;
	gDPSetFillColor((*gDisplayListHead)++, gsGetFillColor(0xFF4000FF));
	gDPFillRectangle((*gDisplayListHead)++, 30, barY, width + 30, barY + 1);

	barY += 2;
	gDPPipeSync((*gDisplayListHead)++);
	width = ((D_ovl0_800D644C / 80.0f) * 256.0f);
	if (width < 0)
		width = 0;
	if (width > 256)
		width = 256;
	gDPSetFillColor((*gDisplayListHead)++, gsGetFillColor(0xFFFFFFFF));
	gDPFillRectangle((*gDisplayListHead)++, 30, barY, width + 30, barY + 1);
	gDPPipeSync((*gDisplayListHead)++);
	// this needs to be in its own block to match. macro?
	// could explain the double sync
	{
		uintptr_t freeSpace; // sp38
		freeSpace = (uintptr_t)gGeneralHeap.end - (uintptr_t)gGeneralHeap.ptr;

		gDPSetFillColor((*gDisplayListHead)++, gsGetFillColor(0xFFFFFFFF));
		func_800218E0(0x14, 0x14, freeSpace, 7, 1);
		gDPPipeSync((*gDisplayListHead)++);
	}
	gDPPipeSync((*gDisplayListHead)++);
	gDPSetCycleType((*gDisplayListHead)++, G_CYC_1CYCLE);
	gDPSetRenderMode((*gDisplayListHead)++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 800A2B18
GObj* func_800A2B18(s32 link, u32 arg1, s32 arg2)
{
	if (find_gobj_with_id(0xEFFFFFFF) != NULL)
		return NULL;

	return func_8000B93C(0xEFFFFFFF, NULL, link, arg1, func_800A26D8, arg2, 0, 0, 0, 0, 0, 0, 0);
}

// 800A2BA8
void unref_800A2BA8(s32 link, u32 arg1, s32 arg2) // set_up_debug_objs ? something like that
{
	GObj* com;

	com = find_gobj_with_id(0xFFFFFFFE);
	if (com != NULL)
		omEjectGObj(com);
	else
		func_80022368(link, arg1, arg2);

	com = find_gobj_with_id(0xEFFFFFFF);
	if (com != NULL)
		omEjectGObj(com);
	else
		func_800A2B18(link, arg1, arg2);
}

// 800A2C30
void crash_inspect_gobj(GObj* obj)
{
	gsDebugPrintF("gobj id:%d:", obj->gobj_id);
	switch (obj->gobj_id) {
		case 0x3E8:
		{
			FighterInfo* f = (FighterInfo *) obj->user_data.p;

			gsDebugPrintF("fighter\n");
			gsDebugPrintF("kind:%d, player:%d, pkind:%d\n", f->kind, f->player, f->pkind);
			gsDebugPrintF("stat:%d, mstat:%d\n", f->stat, f->mstat);
			gsDebugPrintF("ga:%d\n", f->ga);
			break;
		}
		case 0x3F4:
		{
			WeaponInfo* w = (WeaponInfo *) obj->user_data.p;

			gsDebugPrintF("weapon\n");
			gsDebugPrintF("kind:%d, player:%d\n", w->kind, w->player);
			gsDebugPrintF("atk stat:%d\n", w->attackStat);
			gsDebugPrintF("ga:%d\n", w->ga);
			break;
		}
		case 0x3F5:
		{
			ItemInfo* i = (ItemInfo *) obj->user_data.p;

			gsDebugPrintF("item\n");
			gsDebugPrintF("kind:%d, player:%d\n", i->kind, i->player);
			gsDebugPrintF("atk stat:%d\n", i->attackStat);
			gsDebugPrintF("ga:%d\n", i->ga);
			gsDebugPrintF("proc update:%x\n", i->procUpdate);
			gsDebugPrintF("proc map:%x\n", i->procMap);
			gsDebugPrintF("proc hit:%x\n", i->procHit);
			gsDebugPrintF("proc shield:%x\n", i->procShield);
			gsDebugPrintF("proc hop:%x\n", i->procHop);
			gsDebugPrintF("proc setoff:%x\n", i->procSetoff);
			gsDebugPrintF("proc reflector:%x\n", i->procReflector);
			gsDebugPrintF("proc damage:%x\n", i->procDamage);
			break;
		}
		case 0x3F3:
		{
			EffectInfo* e = (EffectInfo *) obj->user_data.p;

			if ((uintptr_t)e >= 0x80000000 && (uintptr_t)e < 0x80800000) {
				gsDebugPrintF("effect\n");
				gsDebugPrintF("fgobj:%x", e->fgObj);
				gsDebugPrintF("proc func:%x\n", e->procFunc);
			} else {
				gsDebugPrintF("\n");
			}
			break;
		}
		default:
		{
			gsDebugPrintF("\n");
			break;
		}
	}
}

// 800A2E84
void smProcPrintGObjStatus()
{
	switch (D_8003B874_3C474)
	{
		case 0:
		{
			gsDebugPrintF("SYS\n");
			break;
		}
		case 1:
		{
			gsDebugPrintF("BF\n");
			if (D_80046A54 != NULL)
			{
				gsDebugPrintF("addr:%x\n", D_80046A54->proc_run);
				crash_inspect_gobj(D_80046A54);
			}
			break;
		}
		case 2:
		{
			gsDebugPrintF("GP\n");
			if (D_80046A54 != NULL)
			{
				if (D_80046A60 != NULL)
				{
					switch (D_80046A60->kind)
					{
						case 0:
							gsDebugPrintF("thread:%x\n", D_80046A60->gobjthread->osthread.context.pc);
							break;
						case 1:
							gsDebugPrintF("func:%x\n", D_80046A60->proc_thread);
							break;
					}
				}
				crash_inspect_gobj(D_80046A54);
			}
			break;
		}
		case 3:
		{
			gsDebugPrintF("DFC\n");
			if (gOMObjCurrentRendering != NULL)
			{
				gsDebugPrintF("addr:%x\n", gOMObjCurrentRendering->proc_render);
				crash_inspect_gobj(gOMObjCurrentRendering);
			}
			break;
		}
		case 4:
		{
			gsDebugPrintF("DFO\n");
			if (gOMObjCurrentRendering != NULL)
				gsDebugPrintF("cam addr:%x\n", gOMObjCurrentRendering->proc_render);
			if (D_80046A5C_40A7C != NULL)
			{
				gsDebugPrintF("disp addr:%x\n", D_80046A5C_40A7C->proc_render);
				crash_inspect_gobj(D_80046A5C_40A7C);
			}
			break;
		}
	}
}

// 800A3040
void smRunPrintGObjStatus()
{
	gsFatalRunPrintFunction(smProcPrintGObjStatus);
}
