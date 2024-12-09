#ifndef _MNVSRECORD_H_
#define _MNVSRECORD_H_

#include <ssb_types.h>
#include <sys/objdisplay.h>

#define mnCommonCheckGetOptionButtonInput(wait, is_button, mask) (((wait) == 0) && ((is_button) = scSubsysControllerGetPlayerHoldButtons(mask), (is_button) != FALSE))
#define mnCommonCheckGetOptionStickInputUD(wait, stick_range, min, b) (((wait) == 0) && ((stick_range) = scSubsysControllerGetPlayerStickUD(min, b), (stick_range) != 0))
#define mnCommonCheckGetOptionStickInputLR(wait, stick_range, min, b) (((wait) == 0) && ((stick_range) = scSubsysControllerGetPlayerStickLR(min, b), (stick_range) != 0))
#define mnCommonGetOptionChangeWaitP(stick_range, div) ((160 - (stick_range)) / (div))
#define mnCommonGetOptionChangeWaitN(stick_range, div) (((stick_range) + 160) / (div))
#define mnCommonSetOptionChangeWaitP(wait, is_button, stick_range, div) ((wait) = (((is_button) != FALSE) ? (12) : mnCommonGetOptionChangeWaitP(stick_range, div)))
#define mnCommonSetOptionChangeWaitN(wait, is_button, stick_range, div) ((wait) = (((is_button) != FALSE) ? (12) : mnCommonGetOptionChangeWaitN(stick_range, div)))

// Stuff - where does it go?!?
typedef enum MNVSRecordKind
{
	nMNVSRecordKindStart,	
	nMNVSRecordKindBattleScore = nMNVSRecordKindStart,	// BattleScore
	nMNVSRecordKindRanking,         					// Ranking
	nMNVSRecordKindIndiv,       						// Individual
	nMNVSRecordKindEnd = nMNVSRecordKindIndiv,
	nMNVSRecordKindEnumCount

} MNVSRecordKind;

typedef enum vsRecordsRankingColumnKind
{
	vsRecordsRankingColumnKindWinPercent,    	// Win %
	vsRecordsRankingColumnKindKOs,              // KOs
	vsRecordsRankingColumnKindTKOs,             // TKOs
	vsRecordsRankingColumnKindSDPercent,     	// SD %
	vsRecordsRankingColumnKindTime,             // Time
	vsRecordsRankingColumnKindUsePercent,   	// Use %
	vsRecordsRankingColumnKindAverage           // Avg

} vsRecordsRankingColumnKind;

#endif