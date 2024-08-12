#ifndef _BATTLE_H_
#define _BATTLE_H_

#include <ssb_types.h>
#include <sys/obj.h>
#include <PR/gu.h>

#include "gmmisc.h"
#include "gmscript.h"
#include "gmfunctions.h"

#define GMCOMMON_CHAR_NUM_PLAYABLE 12

#define gmBackupChrMask(kind) (1 << (kind))
#define gmBackupMapMask(kind) (1 << (kind))

#define GMBACKUP_CHARACTER_MASK_ALL	\
(									 	\
	gmBackupChrMask(nFTKindMario) 	|	\
	gmBackupChrMask(nFTKindFox) 	|	\
	gmBackupChrMask(nFTKindDonkey)	|	\
	gmBackupChrMask(nFTKindSamus) 	|	\
	gmBackupChrMask(nFTKindLuigi) 	|	\
	gmBackupChrMask(nFTKindLink) 	|	\
	gmBackupChrMask(nFTKindYoshi) 	|	\
	gmBackupChrMask(nFTKindCaptain) |	\
	gmBackupChrMask(nFTKindKirby)	|	\
	gmBackupChrMask(nFTKindPikachu) |	\
	gmBackupChrMask(nFTKindPurin) 	|	\
	gmBackupChrMask(nFTKindNess)		\
)

#define GMBACKUP_CHARACTER_MASK_UNLOCK	\
(										\
	gmBackupChrMask(nFTKindNess) 	|	\
	gmBackupChrMask(nFTKindPurin) 	|	\
	gmBackupChrMask(nFTKindCaptain) | 	\
	gmBackupChrMask(nFTKindLuigi)		\
)

#define GMBACKUP_CHARACTER_MASK_STARTER (GMBACKUP_CHARACTER_MASK_ALL & ~GMBACKUP_CHARACTER_MASK_UNLOCK)

typedef enum gmBackupUnlock
{
	nGMBackupUnlockLuigi,	 	// Luigi
	nGMBackupUnlockNess,		// Ness
	nGMBackupUnlockCaptain,	 	// Captain Falcon
	nGMBackupUnlockPurin,	 	// Jigglypuff
	nGMBackupUnlockInishie,	 	// Mushroom Kingdom
	nGMBackupUnlockSoundTest, 	// Sound Test menu
	nGMBackupUnlockItemSwitch, 	// Item Switch menu
	nGMBackupUnlockEnumMax

} gmBackupUnlock;

#define GMBACKUP_UNLOCK_MASK_LUIGI (1 << nGMBackupUnlockLuigi)
#define GMBACKUP_UNLOCK_MASK_NESS (1 << nGMBackupUnlockNess)
#define GMBACKUP_UNLOCK_MASK_CAPTAIN (1 << nGMBackupUnlockCaptain)
#define GMBACKUP_UNLOCK_MASK_PURIN (1 << nGMBackupUnlockPurin)
#define GMBACKUP_UNLOCK_MASK_INISHIE (1 << nGMBackupUnlockInishie)
#define GMBACKUP_UNLOCK_MASK_SOUNDTEST (1 << nGMBackupUnlockSoundTest)
#define GMBACKUP_UNLOCK_MASK_ITEMSWITCH (1 << nGMBackupUnlockItemSwitch)

#define GMBACKUP_UNLOCK_MASK_ALL 		\
(										\
	GMBACKUP_UNLOCK_MASK_ITEMSWITCH | 	\
	GMBACKUP_UNLOCK_MASK_SOUNDTEST 	| 	\
	GMBACKUP_UNLOCK_MASK_INISHIE   	|	\
	GMBACKUP_UNLOCK_MASK_PURIN 		| 	\
	GMBACKUP_UNLOCK_MASK_CAPTAIN 	| 	\
	GMBACKUP_UNLOCK_MASK_NESS 		| 	\
	GMBACKUP_UNLOCK_MASK_LUIGI			\
)

#define GMBACKUP_UNLOCK_MASK_NEWCOMERS (GMBACKUP_UNLOCK_MASK_LUIGI | GMBACKUP_UNLOCK_MASK_PURIN | GMBACKUP_UNLOCK_MASK_CAPTAIN | GMBACKUP_UNLOCK_MASK_NESS)
#define GMBACKUP_UNLOCK_MASK_PRIZE (GMBACKUP_UNLOCK_MASK_ALL & ~GMBACKUP_UNLOCK_MASK_NEWCOMERS)

#define GMBACKUP_GROUND_MASK_ALL 		\
(										\
	gmBackupMapMask(nGRKindCastle) 	| 	\
	gmBackupMapMask(nGRKindSector) 	|	\
	gmBackupMapMask(nGRKindJungle) 	|	\
	gmBackupMapMask(nGRKindZebes) 	|	\
	gmBackupMapMask(nGRKindHyrule) 	|	\
	gmBackupMapMask(nGRKindYoster) 	|	\
	gmBackupMapMask(nGRKindPupupu) 	| 	\
	gmBackupMapMask(nGRKindYamabuki)	\
)

typedef enum gmBackupProtectPenalty
{
	nGMBackupErrorRandomKnockback,
	nGMBackupErrorHalfStickRange,
	nGMBackupError1PGameMario,
	nGMBackupErrorBattleCastle

} gmBackupProtectPenalty;

#define GMBACKUP_ERROR_RANDOMKNOCKBACK (1 << nGMBackupErrorRandomKnockback)		// 0x1 - Random knockback between 0.1 (?) and 1.0 x 200u
#define GMBACKUP_ERROR_HALFSTICKRANGE  (1 << nGMBackupErrorHalfStickRange)		// 0x2 - Halves control stick input range
#define GMBACKUP_ERROR_1PGAMEMARIO 	(1 << nGMBackupError1PGameMario) 			// 0x4 - Forces Mario in 1P Game
#define GMBACKUP_ERROR_VSMODECASTLE (1 << nGMBackupErrorBattleCastle) 			// 0x8 - Forces Peach's Castle in VS Mode

typedef struct gmBackupVSRecord
{
	/* 0x00 */ u16 ko_count[GMCOMMON_CHAR_NUM_PLAYABLE];
	/* 0x18 */ u32 time_used; //< in seconds
	/* 0x1C */ u32 damage_dealt;
	/* 0x20 */ u32 damage_taken;
	/* 0x24 */ u16 unk;
	/* 0x26 */ u16 self_destructs;
	/* 0x28 */ u16 games_played;
	/* 0x2A */ u16 player_count_tally;
	/* 0x2C */ u16 player_count_tallies[GMCOMMON_CHAR_NUM_PLAYABLE];
	/* 0x44 */ u16 played_against[GMCOMMON_CHAR_NUM_PLAYABLE];

} gmBackupVSRecord; // size == 0x5C

typedef struct gmBackup1PRecord
{
	u32 spgame_hiscore;
	u32 spgame_continues;
	u32 spgame_bonuses;
	u8 spgame_best_difficulty;
	u32 bonus1_time;	  // Break the Targets high score
	u8 bonus1_task_count; // Targets broken
	u32 bonus2_time;	  // Board the Platforms high score
	u8 bonus2_task_count; // Platforms boarded
	u8 spgame_complete;	  // Whether character has completed 1P Game or not

} gmBackup1PRecord;

// is this the saved data structure?
typedef struct gmBackupInfo
{
	gmBackupVSRecord vs_records[GMCOMMON_CHAR_NUM_PLAYABLE];
	ub8 is_allow_screenflash; 	// Toggle for enabling white screen flash when,
							  	// for example, a character takes too much
							  	// damage. Leftover from unused "background
							  	// flash" option? It is always toggled ON, even
							  	// after clearing the save data.
	ub8 sound_mono_or_stereo; 
	s16 unk452;
	s16 unk454;
	u8 unk456;
	u8 unlock_mask;
	u16 character_mask; 		// Mask of unlocked characters?
	u8 spgame_difficulty;
	u8 spgame_stock_count;
	gmBackup1PRecord spgame_records[GMCOMMON_CHAR_NUM_PLAYABLE];
	u16 unlock_task_inishie;   	// Records mask of unique stages played in VS mode
	u8 unlock_task_itemswitch; 	// Records number of VS games played for Item
							   	// Switch unlock
	u16 vsgame_total;		   	// Total amount of VS games played?
	u8 error_flags;		   		// Some kind of anti-piracy measure??? 0x1 results in
							   	// random knockback velocity, 0x2 halves stick range, 0x4
							   	// forces Mario in 1P game, 0x8 forces Peach's Castle
	u8 unk5E3;
	u8 unk5E4;
	u8 unk5E5;
	u8 unk5E6;
	u8 unk5E7;
	s32 checksum; 				// Checksum of save data

} gmBackupInfo; // size == 0x5EC

extern gmBackupInfo gSaveData, gDefaultSaveData;

#endif
