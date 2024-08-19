#ifndef _RESULTS_H_
#define _RESULTS_H_

#include <ssb_types.h>
#include <sys/objdraw.h>

#define gmSaveChrMask(kind) (1 << (kind))

#define mnCommonCheckGetOptionButtonInput(wait, is_button, mask) (((wait) == 0) && ((is_button) = scSubsysControllerGetPlayerHoldButtons(mask), (is_button) != FALSE))
#define mnCommonCheckGetOptionStickInputUD(wait, stick_range, min, b) (((wait) == 0) && ((stick_range) = scSubsysControllerGetPlayerStickUD(min, b), (stick_range) != 0))
#define mnCommonCheckGetOptionStickInputLR(wait, stick_range, min, b) (((wait) == 0) && ((stick_range) = scSubsysControllerGetPlayerStickLR(min, b), (stick_range) != 0))
#define mnCommonGetOptionChangeWaitP(stick_range, div) ((160 - (stick_range)) / (div))
#define mnCommonGetOptionChangeWaitN(stick_range, div) (((stick_range) + 160) / (div))
#define mnCommonSetOptionChangeWaitP(wait, is_button, stick_range, div) ((wait) = (((is_button) != FALSE) ? (12) : mnCommonGetOptionChangeWaitP(stick_range, div)))
#define mnCommonSetOptionChangeWaitN(wait, is_button, stick_range, div) ((wait) = (((is_button) != FALSE) ? (12) : mnCommonGetOptionChangeWaitN(stick_range, div)))

// EXTERN
      // 0x800A5240
extern intptr_t lOverlay32ArenaLo;  // 0x80136DA0
extern intptr_t lOverlay32ArenaHi;  // 0x803903E0

// Stuff - where does it go?!?
typedef enum vsRecordsKind
{
	vsRecordsKindBattleScore,     // BattleScore
	vsRecordsKindRanking,         // Ranking
	vsRecordsKindIndividual       // Individual

} vsRecordsKind;

typedef enum vsRecordsRankingColumnKind
{
	vsRecordsRankingColumnKindWinPercentage,    // Win %
	vsRecordsRankingColumnKindKOs,              // KOs
	vsRecordsRankingColumnKindTKOs,             // TKOs
	vsRecordsRankingColumnKindSDPercentage,     // SD %
	vsRecordsRankingColumnKindTime,             // Time
	vsRecordsRankingColumnKindUsePercentage,    // Use %
	vsRecordsRankingColumnKindAverage           // Avg
} vsRecordsRankingColumnKind;

#endif