#ifndef _RESULTS_H_
#define _RESULTS_H_

#include <ssb_types.h>
#include <sys/obj_renderer.h>

// EXTERN
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay19ArenaLo;  // 0x80134A50
extern intptr_t lOverlay19ArenaHi;  // 0x803903E0

// DATA
// TODO!

// Stuff - where does it go?!?
typedef enum mnButtonStatus
{
    nMNButtonStatusDefault,         // default
    nMNButtonStatusHighlighted,     // currently highlighted
    nMNButtonStatusSelected         // selected

} mnButtonStatus;

typedef enum mnButtonVS
{
    nMNButtonVSStart,           // VS Start
    nMNButtonVSRule,            // Rule
    nMNButtonVSTimeStock,       // Time/Stock
    nMNButtonVSOptions          // VS Options

} mnButtonVS;

typedef enum mnRule
{
    nMNRuleTime,            // Time
    nMNRuleStock,           // Stock
    nMNRuleTimeTeam,        // Time Team
    nMNRuleStockTeam,       // Stock Team

} mnRule;

typedef enum mnInputDirection
{
    nMNInputDirectionNone,  // None
    nMNInputDirectionUp,    // Up
    nMNInputDirectionDown,  // Down
    nMNInputDirectionLeft,  // Left
    nMNInputDirectionRight  // Right

} mnInputDirection;

#define GetAddressFromOffset(file_ptr, offset) \
((int*)((intptr_t)(file_ptr) + (intptr_t)(offset))) \

#endif