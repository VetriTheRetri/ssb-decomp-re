#ifndef _MNDEF_H_
#define _MNDEF_H_

#define mnCommonCheckGetOptionButtonInput(wait, is_button, mask)\
(((wait) == 0) && ((is_button) = scSubsysControllerGetFirstHoldButtons(mask), (is_button) != FALSE))

#define mnCommonCheckGetOptionStickInputUD(wait, stick_range, min, b)\
(((wait) == 0) && ((stick_range) = scSubsysControllerGetFirstStickUD(min, b), (stick_range) != 0))

#define mnCommonCheckGetOptionStickInputLR(wait, stick_range, min, b)\
(((wait) == 0) && ((stick_range) = scSubsysControllerGetFirstStickLR(min, b), (stick_range) != 0))

#define mnCommonGetOptionChangeWaitP(stick_range, div) ((160 - (stick_range)) / (div))

#define mnCommonGetOptionChangeWaitN(stick_range, div) (((stick_range) + 160) / (div))

#define mnCommonSetOptionChangeWaitP(wait, is_button, stick_range, div)\
((wait) = (((is_button) != FALSE) ? (12) : mnCommonGetOptionChangeWaitP(stick_range, div)))

#define mnCommonSetOptionChangeWaitN(wait, is_button, stick_range, div)\
((wait) = (((is_button) != FALSE) ? (12) : mnCommonGetOptionChangeWaitN(stick_range, div)))

typedef enum mnSoundTestOptions
{
	nMNSoundTestOptionStart,
	nMNSoundTestOptionMusic = nMNSoundTestOptionStart,
	nMNSoundTestOptionSound,
	nMNSoundTestOptionVoice,
	nMNSoundTestOptionEnd = nMNSoundTestOptionVoice,

	nMNSoundTestOptionEnumMax

} mnSoundTestOptions;

typedef enum mnDataOptions
{
	mnData_Option_Start,
	mnData_Option_Characters = mnData_Option_Start,
	mnData_Option_VSRecord,
	mnData_Option_SoundTest,
	mnData_Option_End = mnData_Option_SoundTest,

	mnData_Option_EnumMax

} mnDataOptions;

typedef enum mnOptionOptions
{
	mnOption_Option_Start,
	mnOption_Option_Sound = mnOption_Option_Start,
	mnOption_Option_ScreenAdjust,
	mnOption_Option_BackupClear,
	mnOption_Option_End = mnOption_Option_BackupClear,

	mnOption_Option_EnumMax

} mnOptionOptions;

typedef enum mnOptionTabStatus
{
	mnOptionTab_Status_Not,
	mnOptionTab_Status_Highlight,
	mnOptionTab_Status_Selected,
	mnOptionTab_Status_EnumMax

} mnOptionTabStatus;

typedef struct mnCongraFile             mnCongraFile;

#endif
