#ifndef _MENU_H_
#define _MENU_H_

#include <PR/os.h>
#include <PR/sp.h>

#include "mndef.h"
#include "mntypes.h"

#define mnCommonCheckGetOptionButtonInput(wait, is_button, mask)\
(((wait) == 0) && ((is_button) = func_ovl1_80390804(mask), (is_button) != FALSE))

#define mnCommonCheckGetOptionStickInputUD(wait, stick_range, min, b)\
(((wait) == 0) && ((stick_range) = func_ovl1_80390950(min, b), (stick_range) != 0))

#define mnCommonCheckGetOptionStickInputLR(wait, stick_range, min, b)\
(((wait) == 0) && ((stick_range) = func_ovl1_8039089C(min, b), (stick_range) != 0))

#define mnCommonGetOptionChangeWaitP(stick_range, div) ((160 - (stick_range)) / (div))

#define mnCommonGetOptionChangeWaitN(stick_range, div) (((stick_range) + 160) / (div))

#define mnCommonSetOptionChangeWaitP(wait, is_button, stick_range, div)\
((wait) = (((is_button) != FALSE) ? (12) : mnCommonGetOptionChangeWaitP(stick_range, div)))

#define mnCommonSetOptionChangeWaitN(wait, is_button, stick_range, div)\
((wait) = (((is_button) != FALSE) ? (12) : mnCommonGetOptionChangeWaitN(stick_range, div)))

extern intptr_t lMnSoundTestMusicTextSprite;            // 0x00000438
extern intptr_t lMnSoundTestAButtonSprite;              // 0x00000958
extern intptr_t lMnSoundTestSoundTextSprite;            // 0x000009C0
extern intptr_t lMnSoundTestBButtonSprite;              // 0x00000A88
extern intptr_t lMnSoundTestDataTextSprite;             // 0x00000B40
extern intptr_t lMnSoundTestVoiceTextSprite;            // 0x00000E48
extern intptr_t lMnSoundTestOptionRoundCorner;          // 0x00001138
extern intptr_t lMnSoundTestBFunctionTextSprite;        // 0x00001208
extern intptr_t lMnSoundTestStartFunctionTextSprite;    // 0x00001348
extern intptr_t lMnSoundTestAFunctionTextSprite;        // 0x00001450
extern intptr_t lMnSoundTestHeaderTextSprite;           // 0x00001BB8
extern intptr_t lMnSoundTestStartButtonSprite;          // 0x00001D50
extern intptr_t lMnSoundTestRightArrowSprite;           // 0x0000DD90
extern intptr_t lMnSoundTestLeftArrowSprite;            // 0x0000DE30

extern intptr_t D_NF_000001E8;							// 0x000001E8
extern intptr_t D_NF_00000330;							// 0x00000330
extern intptr_t D_NF_00000568;							// 0x00000568
extern intptr_t lMnDataCharacterOptionSprite;			// 0x000014E0
extern intptr_t lMnDataVSRecordOptionSprite;			// 0x00001900
extern intptr_t lMnDataSoundTestOptionSprite;			// 0x00001D20
extern intptr_t lMnDataHeaderTextSprite;				// 0x000023A8
extern intptr_t lMnCommonPaperTearSprite;				// 0x00002A30
extern intptr_t lMnCommonSmashLogoSprite;				// 0x000031F8
extern intptr_t lMnDataNotebookSprite;					// 0x00004A78

extern intptr_t lMnOptionMonoTextSprite;				// 0x000071F8
extern intptr_t lMnOptionStereoTextSprite;				// 0x000073A8
extern intptr_t lMnOptionSoundTextSprite;				// 0x00007628
extern intptr_t lMnOptionScreenAdjustTextSprite;		// 0x00008138
extern intptr_t lMnOptionBackupClearTextSprite;			// 0x00008780
extern intptr_t lMnOptionHeaderTextSprite;				// 0x00009288
extern intptr_t lMnOptionKnobSprite;					// 0x0000B958
extern intptr_t lMnOptionSoundSlashSprite;				// 0x0000BA28

extern intptr_t lMnCommonCircleSprite;					// 0x00018000

#endif