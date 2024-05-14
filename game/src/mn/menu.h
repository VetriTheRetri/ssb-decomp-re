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

extern intptr_t lMNSoundTestMusicTextSprite;            // 0x00000438
extern intptr_t lMNSoundTestAButtonSprite;              // 0x00000958
extern intptr_t lMNSoundTestSoundTextSprite;            // 0x000009C0
extern intptr_t lMNSoundTestBButtonSprite;              // 0x00000A88
extern intptr_t lMNSoundTestDataTextSprite;             // 0x00000B40
extern intptr_t lMNSoundTestVoiceTextSprite;            // 0x00000E48
extern intptr_t lMNSoundTestOptionRoundCorner;          // 0x00001138
extern intptr_t lMNSoundTestBFunctionTextSprite;        // 0x00001208
extern intptr_t lMNSoundTestStartFunctionTextSprite;    // 0x00001348
extern intptr_t lMNSoundTestAFunctionTextSprite;        // 0x00001450
extern intptr_t lMNSoundTestHeaderTextSprite;           // 0x00001BB8
extern intptr_t lMNSoundTestStartButtonSprite;          // 0x00001D50
extern intptr_t lMNSoundTestRightArrowSprite;           // 0x0000DD90
extern intptr_t lMNSoundTestLeftArrowSprite;            // 0x0000DE30

extern intptr_t D_NF_000001E8;							// 0x000001E8
extern intptr_t D_NF_00000330;							// 0x00000330
extern intptr_t D_NF_00000568;							// 0x00000568
extern intptr_t lMNDataCharacterOptionSprite;			// 0x000014E0
extern intptr_t lMNDataVSRecordOptionSprite;			// 0x00001900
extern intptr_t lMNDataSoundTestOptionSprite;			// 0x00001D20
extern intptr_t lMNDataHeaderTextSprite;				// 0x000023A8
extern intptr_t lMNCommonPaperTearSprite;				// 0x00002A30
extern intptr_t lMNCommonSmashLogoSprite;				// 0x000031F8
extern intptr_t lMNDataNotebookSprite;					// 0x00004A78

extern intptr_t lMNOptionMonoTextSprite;				// 0x000071F8
extern intptr_t lMNOptionStereoTextSprite;				// 0x000073A8
extern intptr_t lMNOptionSoundTextSprite;				// 0x00007628
extern intptr_t lMNOptionScreenAdjustTextSprite;		// 0x00008138
extern intptr_t lMNOptionBackupClearTextSprite;			// 0x00008780
extern intptr_t lMNOptionHeaderTextSprite;				// 0x00009288
extern intptr_t lMNOptionKnobSprite;					// 0x0000B958
extern intptr_t lMNOptionSoundSlashSprite;				// 0x0000BA28

extern intptr_t lMNCommonCircleSprite;					// 0x00018000

#endif