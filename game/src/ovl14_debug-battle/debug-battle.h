#ifndef _RESULTS_H_
#define _RESULTS_H_

#include <ssb_types.h>
#include <sys/obj_renderer.h>
#include <sys/thread6.h>

// EXTERN
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay14ArenaLo;  // 0x80133130
extern intptr_t lOverlay14ArenaHi;  // 0x80369240

// DATA
// TODO!

// Stuff - where does it go?!?
typedef enum dbMenuItemKind
{
    dbMenuItemKindExitLabel,        // Label which exits menu when selected
    dbMenuItemKindNumeric,          // Number, 4 bytes
    dbMenuItemKindString = 3,       // String
    dbMenuItemKindLabel,            // Label
    dbMenuItemKindNumericByte,      // Number, 1 byte
    dbMenuItemKindStringByte        // String, 1 byte

} dbMenuItemKind;

typedef struct dbMenuItem
{
    s32 type_maybe;
    void (*proc_a)();
    void* label;
    s32 *value;
    f32 min;
    f32 max;
    s32 unknown18;
} dbMenuItem;

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

#define GetAddressFromOffset(file_ptr, offset) \
((int*)((intptr_t)(file_ptr) + (intptr_t)(offset))) \

#endif