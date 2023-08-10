#ifndef _HAL_INPUT_H_
#define _HAL_INPUT_H_

#include <macros.h>
#include <ssb_types.h>

#include <PR/mbi.h>
#include <PR/ultratypes.h>

// Might be temporary, don't know where else to put these

#define GCONTROLLER_RANGE_MAX_I 80                                 // Maximum control stick range in integer
#define GCONTROLLER_RANGE_MAX_F ((float)GCONTROLLER_RANGE_MAX_I)  // Maximum control stick range in float

#define HAL_BUTTON_C_RIGHT (1 << 0)		// 0x1
#define HAL_BUTTON_C_LEFT (1 << 1)		// 0x2
#define HAL_BUTTON_C_DOWN (1 << 2)		// 0x4
#define HAL_BUTTON_C_UP (1 << 3)		// 0x8
#define HAL_BUTTON_R (1 << 4)			// 0x10
#define HAL_BUTTON_L (1 << 5)			// 0x20
#define HAL_BUTTON_UNK1 (1 << 6)		// 0x40
#define HAL_BUTTON_UNK2 (1 << 7)		// 0x80
#define HAL_BUTTON_D_RIGHT (1 << 8)		// 0x100
#define HAL_BUTTON_D_LEFT (1 << 9)		// 0x200
#define HAL_BUTTON_D_DOWN (1 << 10)		// 0x400
#define HAL_BUTTON_D_UP (1 << 11)		// 0x800
#define HAL_BUTTON_START (1 << 12)		// 0x1000
#define HAL_BUTTON_Z (1 << 13)			// 0x2000
#define HAL_BUTTON_B (1 << 14)			// 0x4000
#define HAL_BUTTON_A (1 << 15)			// 0x8000

#endif 