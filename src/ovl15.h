#ifndef _RESULTS_H_
#define _RESULTS_H_

#include <ssb_types.h>
#include <sys/objdraw.h>
#include <sys/thread6.h>

// Stuff - where does it go?!?
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
    void* label;
    union {
        u32 *w;
        u8 *b;
        f32 *f;
        void **p;
    } value;
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

#endif