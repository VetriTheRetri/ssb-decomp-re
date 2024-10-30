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

typedef enum MNTitleLayout
{
    nMNTitleLayoutOpening,      // logo animation intro
    nMNTitleLayoutAnimate,      // Super Smash Bros. animation
    nMNTitleLayoutFinal         // final layout

} MNTitleLayout;

typedef enum MNTitleSpriteKind
{
    nMNTitleSpriteKindDropShadow,
    nMNTitleSpriteKindSmash,
    nMNTitleSpriteKindSuper,
    nMNTitleSpriteKindBros,
    nMNTitleSpriteKindTM,
    nMNTitleSpriteKindFooter,
    nMNTitleSpriteKindHeader,
    nMNTitleSpriteKindPressStart,
    nMNTitleSpriteKindLogo,
    nMNTitleSpriteKindTM2

} MNTitleSpriteKind;

typedef enum MNSoundTestOptions
{
	nMNSoundTestOptionStart,
	nMNSoundTestOptionMusic = nMNSoundTestOptionStart,
	nMNSoundTestOptionSound,
	nMNSoundTestOptionVoice,
	nMNSoundTestOptionEnd = nMNSoundTestOptionVoice,

	nMNSoundTestOptionEnumMax

} MNSoundTestOptions;

typedef enum MNDataOptions
{
	nMNDataOptionStart,
	nMNDataOptionCharacters = nMNDataOptionStart,
	nMNDataOptionVSRecord,
	nMNDataOptionSoundTest,
	nMNDataOptionEnd = nMNDataOptionSoundTest,

	nMNDataOptionEnumMax

} MNDataOptions;

typedef enum MNOptionOptions
{
	nMNOptionOptionStart,
	nMNOptionOptionSound = nMNOptionOptionStart,
	nMNOptionOptionScreenAdjust,
	nMNOptionOptionBackupClear,
	nMNOptionOptionEnd = nMNOptionOptionBackupClear,

	nMNOptionOptionEnumMax

} MNOptionOptions;

typedef enum MNBackupClearOptions
{
	nMNBackupClearOptionStart,
	nMNBackupClearOptionNewcomers = nMNBackupClearOptionStart,
	nMNBackupClearOption1PHighScore,
	nMNBackupClearOptionBonusStageTime,
	nMNBackupClearOptionVSRecord,
	nMNBackupClearOptionPrize,
	nMNBackupClearOptionAllDataClear,
	nMNBackupClearOptionEnd = nMNBackupClearOptionAllDataClear,

	nMNBackupClearOptionEnumMax

} MNBackupClearOptions;

typedef enum MNVSModeOptions
{
    nMNVSModeOptionStart,           // VS Start
    nMNVSModeOptionRule,            // Rule
    nMNVSModeOptionTimeStock,       // Time/Stock
    nMNVSModeOptionOptions,         // VS Options
	nMNVSModeOptionEnumMax

} MNVSModeOptions;

typedef enum MNVSModeRule
{
    nMNVSModeRuleTime,            // Time
    nMNVSModeRuleStock,           // Stock
    nMNVSModeRuleTimeTeam,        // Time Team
    nMNVSModeRuleStockTeam,       // Stock Team

} MNVSModeRule;

typedef enum MNVSModeInputDirection
{
    nMNVSModeInputDirectionNone,  // None
    nMNVSModeInputDirectionUp,    // Up
    nMNVSModeInputDirectionDown,  // Down
    nMNVSModeInputDirectionLeft,  // Left
    nMNVSModeInputDirectionRight  // Right

} MNVSModeInputDirection;

typedef enum MNVSOptionsOptions
{
	nMNVSOptionsOptionStart,
	nMNVSOptionsOptionHandicap = nMNVSOptionsOptionStart,
	nMNVSOptionsOptionTeamAttack,
	nMNVSOptionsOptionStageSelect,
	nMNVSOptionsOptionDamage,
	nMNVSOptionsOptionItemSwitch,
	nMNVSOptionsOptionEnd = nMNVSOptionsOptionItemSwitch,

	nMNVSOptionsOptionEnumMax

} MNVSOptionsOptions;

typedef enum MNModeSelectOptions
{
	nMNModeSelectOptionStart,
	nMNModeSelectOption1PMode = nMNModeSelectOptionStart,
	nMNModeSelectOptionVSMode,
	nMNModeSelectOptionOption,
	nMNModeSelectOptionData,
	nMNModeSelectOptionEnd = nMNModeSelectOptionData,

	nMNModeSelectOptionEnumMax

} MNModeSelectOptions;

typedef enum MN1PModeOptions
{
	nMN1PModeOptionStart,
	nMN1PModeOption1PGame = nMN1PModeOptionStart,
	nMN1PModeOptionTrainingMode,
	nMN1PModeOptionBonus1Practice,
	nMN1PModeOptionBonus2Practice,
	nMN1PModeOptionEnd = nMN1PModeOptionBonus2Practice,
	
	nMN1PModeOptionEnumMax

} MN1PModeOptions;

typedef enum MNOptionTabStatus
{
	nMNOptionTabStatusNot,
	nMNOptionTabStatusHighlight,
	nMNOptionTabStatusSelected,
	nMNOptionTabStatusEnumMax

} MNOptionTabStatus;

typedef enum MNOptionTabOnOff
{
	nMNOptionTabStatusOff,
	nMNOptionTabStatusOn

} MNOptionTabOnOff;

typedef struct MNTitleSpriteDesc	MNTitleSpriteDesc;
typedef struct MNCongraPicture		MNCongraPicture;

#endif
