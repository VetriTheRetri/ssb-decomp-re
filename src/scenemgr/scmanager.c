#include "common.h"
#include "scene_manager.h"
#include <sys/obj.h>
#include <ft/fighter.h>
#include <wp/weapon.h>
#include <it/item.h>
#include <lb/lbparticle.h>
#include "scenemgr/entries.h"
#include <sys/error.h>
#include <sys/dma.h>
#include <sys/taskman.h>
#include <sys/hal_audio.h>
#include <sys/video.h>
#include <sc/sctypes.h> // Temporarily, until ovl defines are fixed
#include <sys/thread6.h>

// BSS
u8 D_800A44D0[16];
lbBackupData gSaveData;
// current screen info
scCommonData gSceneData;
scBattleState gSCManager1PGameBattleState;
scBattleState gTransferBattleState;
scBattleState D_800A4EF8;
// pointer to battle settings, probably has to be moved here from battle.h
scBattleState *_gBattleState;
u32 D_800A50EC;
u8 D_800A50F0[8];
u8 D_800A50F8[324];
u32 D_800A523C;

// Forward declarations
extern void scManagerProcPrintGObjStatus();

// DATA
syOverlay D_800A3070[65] = {
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

lbBackupData gDefaultSaveData = {
	{{{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0, 0,
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		}}, 1, 1, 0, 0, 0, 0, 0, 1, 2, {
		{0, 0, 0, 0, I_MIN_TO_TICS(60), 0, I_MIN_TO_TICS(60), 0, 0},
		{0, 0, 0, 0, I_MIN_TO_TICS(60), 0, I_MIN_TO_TICS(60), 0, 0},
		{0, 0, 0, 0, I_MIN_TO_TICS(60), 0, I_MIN_TO_TICS(60), 0, 0},
		{0, 0, 0, 0, I_MIN_TO_TICS(60), 0, I_MIN_TO_TICS(60), 0, 0},
		{0, 0, 0, 0, I_MIN_TO_TICS(60), 0, I_MIN_TO_TICS(60), 0, 0},
		{0, 0, 0, 0, I_MIN_TO_TICS(60), 0, I_MIN_TO_TICS(60), 0, 0},
		{0, 0, 0, 0, I_MIN_TO_TICS(60), 0, I_MIN_TO_TICS(60), 0, 0},
		{0, 0, 0, 0, I_MIN_TO_TICS(60), 0, I_MIN_TO_TICS(60), 0, 0},
		{0, 0, 0, 0, I_MIN_TO_TICS(60), 0, I_MIN_TO_TICS(60), 0, 0},
		{0, 0, 0, 0, I_MIN_TO_TICS(60), 0, I_MIN_TO_TICS(60), 0, 0},
		{0, 0, 0, 0, I_MIN_TO_TICS(60), 0, I_MIN_TO_TICS(60), 0, 0},
		{0, 0, 0, 0, I_MIN_TO_TICS(60), 0, I_MIN_TO_TICS(60), 0, 0}}, 0, 0, 0, 0, 0, 0x029a, 0, 0, 0
};

scCommonData gDefaultSceneData =
{
	0x1B, 0x1B,
	{ nLBBackupUnlockEnumMax, nLBBackupUnlockEnumMax },
	{ nLBBackupUnlockEnumMax, nLBBackupUnlockEnumMax, nLBBackupUnlockEnumMax, nLBBackupUnlockEnumMax, nLBBackupUnlockEnumMax },
	0x04, 0x00,
	0x001C,
	{0x1C, 0x1C},
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x05, 0x00,
	{0x00, 0x00},
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	{0x00000000, 0x00000000, 0x00000000},
	0x00, 0x1C, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
 };

scBattleState gDefaultBattleState = {
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

// 0x800A41B8
s32 dSCManagerPad0x800A41B8[/* */] = { 0, 0 };

// 0x800A41C0 (.rodata) - use { __DATE__ " " __TIME__ } in a real setting
char dSCManagerBuildDate[/* */] = { "Mar 16 1999 18:26:57" };

void mnNoControllerStartScene();
void mnTitleStartScene();
void dbStageSelectStartScene();
void dbCubeStartScene();
void dbBattleStartScene();
void dbFallsStartScene();
void mnUnusedFightersStartScene();
void mnModeSelectStartScene();
void mn1PModeStartScene();
void mnOptionStartScene();
void mnDataStartScene();
void mnVSModeStartScene();
void mnVSOptionsStartScene();
void mnVSItemSwitchStartScene();
void mnMessageStartScene();
void sc1PChallengerStartScene();
void sc1PStageCardStartScene();
void mnScreenAdjustStartScene();
void vs_css_entry();
void mnStageStartScene();
void scVSBattleStartScene();
void overlay_set23_entry();
void sc1PManagerUpdateScene();
void sc1PBonusGameStartScene();
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
void mvOpeningKirbyStartScene();
void mvOpeningRunStartScene();
void mvOpeningYosterStartScene();
void mvOpeningCliffStartScene();
void mvOpeningStandoffStartScene();
void mvOpeningYamabukiStartScene();
void mvOpeningClashStartScene();
void mvOpeningSectorStartScene();
void mvOpeningJungleStartScene();
void mvOpeningNewcomersStartScene();
void classic_css_entry();
void training_css_entry();
void bonus_css_entry();
void bonus_css_entry();
void mnBackupClearStartScene();
void mvEndingStartScene();
void sc1PContinueStartScene();
void sc1PStageClearStartScene();
void gmStaffrollStartScene();
void mnCongraStartScene();
void mnSoundTestStartScene();
void scExplainStartScene();
void scAutoDemoStartScene();

// 0x800A1980
void start_scene_manager(u32 set)
{
	u16* csr;
	uintptr_t end;
	scBattleState sp220;
	scBattleState sp30;

	set_contstatus_delay(60);
	syErrorSetFuncPrint(scManagerProcPrintGObjStatus);
	syErrorStartRmonThread5Hang();
	syDmaLoadOverlay(&D_800A3070[0]);
	syDmaLoadOverlay(&D_800A3070[2]);
	syDmaLoadOverlay(&D_800A3070[1]);

	gSaveData  = gDefaultSaveData;
	gSceneData = gDefaultSceneData;
	sp30       = gDefaultBattleState;
	D_800A4EF8 = sp30;
	sp220      = sp30;
	gTransferBattleState = sp220;
	gSCManager1PGameBattleState = sp220;

	ftManagerSetupFileSize();
	D_8003CB6D = 72;

	func_8002102C();
	while (func_8002103C()) { }

	auSetReverbType(6);
	while (func_80021048()) { }

	lbBackupIsSramValid();
	lbBackupApplyOptions();

	// it needs to be something like this to match
	// csr = (void *)_ovl1SegNoloadEnd; // 0x80392A00
	csr = gSCSubsysFramebuffer0;//(void *)_ovl1SegNoloadEnd; // 0x80392A00
	end = 0x80400000;
	while ((uintptr_t)csr < end)
		*(csr++) = GPACK_RGBA5551(0x00, 0x00, 0x00, 0x01);

	if (gNumControllers == 0)
		gSceneData.scene_current = 0;

	while (TRUE)
	{
		switch (gSceneData.scene_current) {
			case 0:
				syDmaLoadOverlay(&D_800A3070[11]);
				mnNoControllerStartScene();
				break;
			case 1:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[10]);
				syDmaLoadOverlay(&D_800A3070[8]);
				syDmaLoadOverlay(&D_800A3070[9]);
				mnTitleStartScene();
				break;
			case 2:
				syDmaLoadOverlay(&D_800A3070[12]);
				syDmaLoadOverlay(&D_800A3070[8]);
				syDmaLoadOverlay(&D_800A3070[9]);
				dbStageSelectStartScene();
				break;
			case 3:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[13]);
				syDmaLoadOverlay(&D_800A3070[8]);
				syDmaLoadOverlay(&D_800A3070[9]);
				dbCubeStartScene();
				break;
			case 4:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[14]);
				syDmaLoadOverlay(&D_800A3070[8]);
				syDmaLoadOverlay(&D_800A3070[9]);
				dbBattleStartScene();
				break;
			case 5:
				syDmaLoadOverlay(&D_800A3070[15]);
				dbFallsStartScene();
				break;
			case 6:
				syDmaLoadOverlay(&D_800A3070[16]);
				mnUnusedFightersStartScene();
				break;
			case 7:
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[17]);
				mnModeSelectStartScene();
				break;
			case 8:
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[18]);
				mn1PModeStartScene();
				break;
			case 57:
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[60]);
				mnOptionStartScene();
				break;
			case 58:
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[61]);
				mnDataStartScene();
				break;
			case 9:
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[19]);
				mnVSModeStartScene();
				break;
			case 10:
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[20]);
				mnVSOptionsStartScene();
				break;
			case 11:
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[21]);
				mnVSItemSwitchStartScene();
				break;
			case 12:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[22]);
				mnMessageStartScene();
				break;
			case 13:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[23]);
				sc1PChallengerStartScene();
				break;
			case 14:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[24]);
				sc1PStageCardStartScene();
				break;
			case 15:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[25]);
				mnScreenAdjustStartScene();
				break;
			case 16:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[26]);
				vs_css_entry();
				break;
			case 21:
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[30]);
				mnStageStartScene();
				break;
			case 22:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[3]);
				syDmaLoadOverlay(&D_800A3070[4]);
				scVSBattleStartScene();
				break;
			case 23:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[3]);
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[5]);
				overlay_set23_entry();
				break;
			case 52:
				sc1PManagerUpdateScene();
				break;
			case 53:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[3]);
				syDmaLoadOverlay(&D_800A3070[6]);
				sc1PBonusGameStartScene();
				break;
			case 54:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[3]);
				syDmaLoadOverlay(&D_800A3070[7]);
				scManager_TrainingMode_InitScene();
				break;
			case 24:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[31]);
				vs_results_entry();
				break;
			case 25:
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[32]);
				vs_records_entry();
				break;
			case 26:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[33]);
				char_bkg_info_entry();
				break;
			case 27:
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[58]);
				mnN64StartScene();
				break;
			case 28:
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[34]);
				intro_firstscene_entry();
				break;
			case 29:
				syDmaLoadOverlay(&D_800A3070[35]);
				mvPortraitsStartScene();
				break;
			case 30:
				syDmaLoadOverlay(&D_800A3070[3]);
				syDmaLoadOverlay(&D_800A3070[36]);
				intro_focus_mario_entry();
				break;
			case 31:
				syDmaLoadOverlay(&D_800A3070[37]);
				intro_focus_dk_entry();
				break;
			case 32:
				syDmaLoadOverlay(&D_800A3070[38]);
				intro_focus_samus_entry();
				break;
			case 33:
				syDmaLoadOverlay(&D_800A3070[39]);
				intro_focus_fox_entry();
				break;
			case 34:
				syDmaLoadOverlay(&D_800A3070[40]);
				intro_focus_link_entry();
				break;
			case 35:
				syDmaLoadOverlay(&D_800A3070[41]);
				intro_focus_yoshi_entry();
				break;
			case 36:
				syDmaLoadOverlay(&D_800A3070[42]);
				intro_focus_pikachu_entry();
				break;
			case 37:
				syDmaLoadOverlay(&D_800A3070[43]);
				mvOpeningKirbyStartScene();
				break;
			case 38:
				syDmaLoadOverlay(&D_800A3070[44]);
				mvOpeningRunStartScene();
				break;
			case 39:
				syDmaLoadOverlay(&D_800A3070[45]);
				mvOpeningYosterStartScene();
				break;
			case 40:
				syDmaLoadOverlay(&D_800A3070[46]);
				mvOpeningCliffStartScene();
				break;
			case 41:
				syDmaLoadOverlay(&D_800A3070[47]);
				mvOpeningStandoffStartScene();
				break;
			case 42:
				syDmaLoadOverlay(&D_800A3070[48]);
				mvOpeningYamabukiStartScene();
				break;
			case 43:
				syDmaLoadOverlay(&D_800A3070[49]);
				mvOpeningClashStartScene();
				break;
			case 44:
				syDmaLoadOverlay(&D_800A3070[50]);
				mvOpeningSectorStartScene();
				break;
			case 45:
				syDmaLoadOverlay(&D_800A3070[3]);
				syDmaLoadOverlay(&D_800A3070[51]);
				mvOpeningJungleStartScene();
				break;
			case 46:
				syDmaLoadOverlay(&D_800A3070[52]);
				mvOpeningNewcomersStartScene();
				break;
			case 17:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[27]);
				classic_css_entry();
				break;
			case 18:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[28]);
				training_css_entry();
				break;
			case 19:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[29]);
				bonus_css_entry();
				break;
			case 20:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[29]);
				bonus_css_entry();
				break;
			case 47:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[53]);
				mnBackupClearStartScene();
				break;
			case 48:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[54]);
				mvEndingStartScene();
				break;
			case 49:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[55]);
				sc1PContinueStartScene();
				break;
			case 50:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[56]);
				sc1PStageClearStartScene();
				break;
			case 51:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[56]);
				sc1PStageClearStartScene();
				break;
			case 56:
				syDmaLoadOverlay(&D_800A3070[59]);
				gmStaffrollStartScene();
				break;
			case 55:
				syDmaLoadOverlay(&D_800A3070[57]);
				mnCongraStartScene();
				break;
			case 59:
				syDmaLoadOverlay(&D_800A3070[1]);
				syDmaLoadOverlay(&D_800A3070[62]);
				mnSoundTestStartScene();
				break;
			case 60:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[3]);
				syDmaLoadOverlay(&D_800A3070[63]);
				scExplainStartScene();
				break;
			case 61:
				syDmaLoadOverlay(&D_800A3070[2]);
				syDmaLoadOverlay(&D_800A3070[3]);
				syDmaLoadOverlay(&D_800A3070[64]);
				scAutoDemoStartScene();
				break;
		}
	}
}

// 0x800A2698
void func_800A2698(syTaskmanSetup *arg) // set up gtl and om systems
{
	syTaskmanInit(arg);
}

// 0x800A26B8
void func_800A26B8()
{
	func_8000A340();
}

extern D_ovl0_800D6448;

// 0x800A26D8
void func_800A26D8(GObj* arg0)
{
	s32 width; // sp74
	UNUSED s32 spPad70;
	s32 barY = 203; // sp6C

	func_80016338(gSYTaskmanDLHeads, arg0->obj, 0);
	gDPPipeSync((*gSYTaskmanDLHeads)++);
	gDPSetCycleType((*gSYTaskmanDLHeads)++, G_CYC_FILL);
	gDPSetRenderMode((*gSYTaskmanDLHeads)++, G_RM_NOOP, G_RM_NOOP2);
	width = ((gLBParticleStructsUsedNum / 112.0f) * 256.0f);
	if (width < 0)
		width = 0;
	if (width > 256)
		width = 256;
	gDPSetFillColor((*gSYTaskmanDLHeads)++, syVideoGetFillColor(GPACK_RGBA8888(0x00, 0x00, 0xFF, 0xFF)));
	gDPFillRectangle((*gSYTaskmanDLHeads)++, 30, barY, width + 30, barY + 1);

	barY += 2;
	gDPPipeSync((*gSYTaskmanDLHeads)++);
	width = ((gLBParticleGeneratorsUsedNum / 24.0f) * 256.0f);
	if (width < 0)
		width = 0;
	if (width > 256)
		width = 256;
	gDPSetFillColor((*gSYTaskmanDLHeads)++, syVideoGetFillColor(GPACK_RGBA8888(0xFF, 0x40, 0x00, 0xFF)));
	gDPFillRectangle((*gSYTaskmanDLHeads)++, 30, barY, width + 30, barY + 1);

	barY += 2;
	gDPPipeSync((*gSYTaskmanDLHeads)++);
	width = ((gLBParticleTransformsUsedNum / 80.0f) * 256.0f);
	if (width < 0)
		width = 0;
	if (width > 256)
		width = 256;
	gDPSetFillColor((*gSYTaskmanDLHeads)++, syVideoGetFillColor(GPACK_RGBA8888(0xFF, 0xFF, 0xFF, 0xFF)));
	gDPFillRectangle((*gSYTaskmanDLHeads)++, 30, barY, width + 30, barY + 1);
	gDPPipeSync((*gSYTaskmanDLHeads)++);
	// this needs to be in its own block to match. macro?
	// could explain the double sync
	{
		size_t freeSpace = (uintptr_t)gSYTaskmanGeneralHeap.end - (uintptr_t)gSYTaskmanGeneralHeap.ptr;

		gDPSetFillColor((*gSYTaskmanDLHeads)++, syVideoGetFillColor(GPACK_RGBA8888(0xFF, 0xFF, 0xFF, 0xFF)));
		func_800218E0(0x14, 0x14, freeSpace, 7, 1);
		gDPPipeSync((*gSYTaskmanDLHeads)++);
	}
	gDPPipeSync((*gSYTaskmanDLHeads)++);
	gDPSetCycleType((*gSYTaskmanDLHeads)++, G_CYC_1CYCLE);
	gDPSetRenderMode((*gSYTaskmanDLHeads)++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x800A2B18
GObj* func_800A2B18(s32 link, u32 arg1, s32 arg2)
{
	if (gcFindGObjByID(0xEFFFFFFF) != NULL)
		return NULL;

	return gcMakeCameraGObj(0xEFFFFFFF, NULL, link, arg1, func_800A26D8, arg2, 0, 0, 0, 0, 0, 0, 0);
}

// 0x800A2BA8
void unref_800A2BA8(s32 link, u32 arg1, s32 arg2) // set_up_debug_objs ? something like that
{
	GObj* com;

	com = gcFindGObjByID(0xFFFFFFFE);
	if (com != NULL)
		gcEjectGObj(com);
	else
		func_80022368(link, arg1, arg2);

	com = gcFindGObjByID(0xEFFFFFFF);
	if (com != NULL)
		gcEjectGObj(com);
	else
		func_800A2B18(link, arg1, arg2);
}

// 0x800A2C30
void scManagerInspectGObj(GObj *gobj)
{
    ftStruct *fp;
    wpStruct *wp;
    itStruct *ip;
    efStruct *ep;

    syErrorDebugPrintf("gobj id:%d:", gobj->gobj_id);

    switch (gobj->gobj_id)
    {
    case nGCCommonKindFighter:
        fp = ftGetStruct(gobj);

        syErrorDebugPrintf("fighter\n");
        syErrorDebugPrintf("kind:%d, player:%d, pkind:%d\n", fp->ft_kind, fp->player, fp->status_info.pl_kind);
        syErrorDebugPrintf("stat:%d, mstat:%d\n", fp->status_info.status_id, fp->status_info.motion_id);
        syErrorDebugPrintf("ga:%d\n", fp->ga);
        break;

    case nGCCommonKindWeapon:
        wp = wpGetStruct(gobj);

        syErrorDebugPrintf("weapon\n");
        syErrorDebugPrintf("kind:%d, player:%d\n", wp->wp_kind, wp->player);
        syErrorDebugPrintf("atk stat:%d\n", wp->weapon_hit.update_state);
        syErrorDebugPrintf("ga:%d\n", wp->ga);
        break;

    case nGCCommonKindItem:
        ip = itGetStruct(gobj);

        syErrorDebugPrintf("item\n");
        syErrorDebugPrintf("kind:%d, player:%d\n", ip->it_kind, ip->player);
        syErrorDebugPrintf("atk stat:%d\n", ip->item_hit.update_state);
        syErrorDebugPrintf("ga:%d\n", ip->ga);
        syErrorDebugPrintf("proc update:%x\n", ip->proc_update);
        syErrorDebugPrintf("proc map:%x\n", ip->proc_map);
        syErrorDebugPrintf("proc hit:%x\n", ip->proc_hit);
        syErrorDebugPrintf("proc shield:%x\n", ip->proc_shield);
        syErrorDebugPrintf("proc hop:%x\n", ip->proc_hop);
        syErrorDebugPrintf("proc setoff:%x\n", ip->proc_setoff);
        syErrorDebugPrintf("proc reflector:%x\n", ip->proc_reflector);
        syErrorDebugPrintf("proc damage:%x\n", ip->proc_damage);
        break;

    case nGCCommonKindEffect:
        ep = efGetStruct(gobj);

        // Check if address is within base RDRAM + expansion pak bounds
        if (((uintptr_t)ep >= 0x80000000) && ((uintptr_t)ep < 0x80800000))
        {
            syErrorDebugPrintf("effect\n");
            syErrorDebugPrintf("fgobj:%x", ep->fighter_gobj);
            syErrorDebugPrintf("proc func:%x\n", ep->proc_update);
        }
        else syErrorDebugPrintf("\n");
        break;

    default:
        syErrorDebugPrintf("\n");
        break;
    }
}

// 0x800A2E84
void scManagerProcPrintGObjStatus()
{
	switch (dGCCurrentStatus)
	{
	case nGCStatusSystem:
		syErrorDebugPrintf("SYS\n");
		break;

	case nGCStatusRunning:
		syErrorDebugPrintf("BF\n");

		if (gGCCurrentCommon != NULL)
		{
			syErrorDebugPrintf("addr:%x\n", gGCCurrentCommon->func_run);
			scManagerInspectGObj(gGCCurrentCommon);
		}
		break;

	case nGCStatusProcessing:
		syErrorDebugPrintf("GP\n");

		if (gGCCurrentCommon != NULL)
		{
			if (gGCCurrentProcess != NULL)
			{
				switch (gGCCurrentProcess->kind)
				{
				case nGCProcessKindThread:
					syErrorDebugPrintf("thread:%x\n", gGCCurrentProcess->gobjthread->thread.context.pc);
					break;

				case nGCProcessKindProc:
					syErrorDebugPrintf("func:%x\n", gGCCurrentProcess->proc_thread);
					break;
				}
			}
			scManagerInspectGObj(gGCCurrentCommon);
		}
		break;

	case nGCStatusCapturing:
		syErrorDebugPrintf("DFC\n");

		if (gGCCurrentCamera != NULL)
		{
			syErrorDebugPrintf("addr:%x\n", gGCCurrentCamera->func_display);
			scManagerInspectGObj(gGCCurrentCamera);
		}
		break;
		
	case nGCStatusDisplaying:
		syErrorDebugPrintf("DFO\n");

		if (gGCCurrentCamera != NULL)
		{
			syErrorDebugPrintf("cam addr:%x\n", gGCCurrentCamera->func_display);
		}
		if (gGCCurrentDisplay != NULL)
		{
			syErrorDebugPrintf("disp addr:%x\n", gGCCurrentDisplay->func_display);
			scManagerInspectGObj(gGCCurrentDisplay);
		}
		break;
	}
}

// 0x800A3040
void scManagerRunPrintGObjStatus()
{
	syErrorRunFuncPrint(scManagerProcPrintGObjStatus);
}
