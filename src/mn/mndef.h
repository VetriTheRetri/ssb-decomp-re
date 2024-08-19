#ifndef _MNDEF_H_
#define _MNDEF_H_

#define mnCommonCheckGetOptionButtonInput(wait, is_button, mask)\
(((wait) == 0) && ((is_button) = scSubsysControllerGetPlayerHoldButtons(mask), (is_button) != FALSE))

#define mnCommonCheckGetOptionStickInputUD(wait, stick_range, min, b)\
(((wait) == 0) && ((stick_range) = scSubsysControllerGetPlayerStickUD(min, b), (stick_range) != 0))

#define mnCommonCheckGetOptionStickInputLR(wait, stick_range, min, b)\
(((wait) == 0) && ((stick_range) = scSubsysControllerGetPlayerStickLR(min, b), (stick_range) != 0))

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
	nMNDataOptionStart,
	nMNDataOptionCharacters = nMNDataOptionStart,
	nMNDataOptionVSRecord,
	nMNDataOptionSoundTest,
	nMNDataOptionEnd = nMNDataOptionSoundTest,

	nMNDataOptionEnumMax

} mnDataOptions;

typedef enum mnOptionOptions
{
	nMNOptionOptionStart,
	nMNOptionOptionSound = nMNOptionOptionStart,
	nMNOptionOptionScreenAdjust,
	nMNOptionOptionBackupClear,
	nMNOptionOptionEnd = nMNOptionOptionBackupClear,

	nMNOptionOptionEnumMax

} mnOptionOptions;

typedef enum mnOptionTabStatus
{
	nMNOptionTabStatusNot,
	nMNOptionTabStatusHighlight,
	nMNOptionTabStatusSelected,
	nMNOptionTabStatusEnumMax

} mnOptionTabStatus;

typedef struct mnCongraFile             mnCongraFile;

#endif
