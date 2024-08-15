#ifndef _RESULTS_H_
#define _RESULTS_H_

#include <ssb_types.h>
#include <sys/obj_renderer.h>
#include <sys/thread6.h>

// EXTERN
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay13ArenaLo;  // 0x80133170
extern intptr_t lOverlay13ArenaHi;  // 0x80369240

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

#define GetAddressFromOffset(file_ptr, offset) \
((int*)((intptr_t)(file_ptr) + (intptr_t)(offset))) \

#endif