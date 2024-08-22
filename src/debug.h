#ifndef _DEBUG_H_
#define _DEBUG_H_

#include <ssb_types.h>
#include <sys/objdraw.h>
#include <sys/thread6.h>

typedef enum dbMenuItemKind
{
	dbMenuItemKindExitLabel,        // Label which exits menu when selected
	dbMenuItemKindNumeric,          // Number, 4 bytes
	dbMenuItemKindDouble,           // Double
	dbMenuItemKindString,           // String
	dbMenuItemKindLabel,            // Label
	dbMenuItemKindNumericByte,      // Number, 1 byte
	dbMenuItemKindStringByte        // String, 1 byte

} dbMenuItemKind;


typedef struct dbMenuItem
{
	s32 type;
	void (*proc_a)();
	char* label;
	union {
		s32 *s;
		u32 *w;
		u8 *b;
		f32 *f;
		void **p;
	} value;
	f32 min;
	f32 max;
	f32 unknown18;

} dbMenuItem;

typedef struct dbMenuPosition
{
	s16 x;
	s16 y;
	u16 w;
	u16 h;

} dbMenuPosition;

typedef struct dbFighter
{
	u8 ft_kind;
	u8 costume_index;
	GObj* fighter_gobj;

} dbFighter;

typedef enum dbBattleScene
{
	dbBattleSceneVsMode,
	dbBattleScene1PMode,
	dbBattleSceneStaffroll,
	dbBattleSceneExplain,
	dbBattleSceneAutoDemo,
	dbBattleSceneCongra

} dbBattleScene;

typedef struct dbUnk80369EE0_1
{
	void *unk_80369EE0_1_0x0;
	u32 unk_80369EE0_1_0x4;
	u32 unk_80369EE0_1_0x8;

} dbUnk80369EE0_1;

#define gmSaveChrMask(kind) (1 << (kind))

#endif