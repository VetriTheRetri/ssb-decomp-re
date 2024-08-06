#ifndef _RESULTS_H_
#define _RESULTS_H_

#include <ssb_types.h>
#include <sys/obj_renderer.h>

// EXTERN
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay32ArenaLo;  // 0x80136DA0
extern intptr_t lOverlay32ArenaHi;  // 0x803903E0

// DATA
// TODO!

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

#define GetAddressFromOffset(file_ptr, offset) \
((int*)((intptr_t)(file_ptr) + (intptr_t)(offset))) \

#endif