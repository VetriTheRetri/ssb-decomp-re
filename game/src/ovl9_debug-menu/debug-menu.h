#ifndef _RESULTS_H_
#define _RESULTS_H_

#include <ssb_types.h>
#include <sys/obj_renderer.h>
#include <sys/thread6.h>

// EXTERN
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay15ArenaLo;  // 0x800D6A00
extern intptr_t lOverlay15ArenaHi;  // 0x80392A00

// DATA
// TODO!

// Stuff - where does it go?!?
typedef enum dbMenuItemKind
{
    nDBMenuItemKindExitLabel,        // Label which exits menu when selected
    nDBMenuItemKindNumeric,          // Number, 4 bytes
    nDBMenuItemKindDouble,           // Double
    nDBMenuItemKindString,           // String
    nDBMenuItemKindLabel,            // Label
    nDBMenuItemKindNumericByte,      // Number, 1 byte
    nDBMenuItemKindStringByte        // String, 1 byte

} dbMenuItemKind;

typedef struct dbMenuItem
{
    s32 type;
    void (*proc_a)();
    void* label;
    union {
        s32 *s;
        u8 *b;
        f32 *f;
        void **p;
    } value;
    f32 min;
    f32 max;
    s32 unknown18;
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

#define GetAddressFromOffset(file_ptr, offset) \
((int*)((intptr_t)(file_ptr) + (intptr_t)(offset))) \

#endif