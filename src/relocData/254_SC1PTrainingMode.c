/* relocData file 254: SC1PTrainingMode — Training-mode menu/HUD layout
 * tables. Each block is an array of fixed-size sprite descriptors used
 * by the Training screen to position labels and option text:
 *
 *   PosSpriteArray entry (8 bytes): { s16 x, s16 y, u16 sprite_id, u16 offset }
 *   SpriteArray entry    (4 bytes): { u16 sprite_id, u16 offset }
 *
 * `sprite_id` indexes the shared sprite font/atlas; `offset` is a
 * cumulative byte offset into that atlas (advances per glyph).
 *
 * No reloc chain; pure static menu data referenced by sc1ptrainingmode.c.
 */

#include "relocdata_types.h"

typedef struct
{
	s16 x;
	s16 y;
	u16 sprite_id;
	u16 offset;
} SC1PTrainingPosSprite;

typedef struct
{
	u16 sprite_id;
	u16 offset;
} SC1PTrainingSprite;

/* @ 0x0000 — section labels at the top of the Training screen */
SC1PTrainingPosSprite dSC1PTrainingMode_DisplayLabel_PosSpriteArray[4] = {
	#include <SC1PTrainingMode/DisplayLabel_PosSpriteArray.data.inc.c>
};

/* @ 0x0020 — option-text glyph stream below the section labels */
SC1PTrainingSprite dSC1PTrainingMode_DisplayOption_SpriteArray[39] = {
	#include <SC1PTrainingMode/DisplayOption_SpriteArray.data.inc.c>
};

/* @ 0x00BC — left-column menu labels */
SC1PTrainingPosSprite dSC1PTrainingMode_MenuLabel_PosSpriteArray[10] = {
	#include <SC1PTrainingMode/MenuLabel_PosSpriteArray.data.inc.c>
};

/* @ 0x010C — additional positioned sprites (purpose TBD) */
SC1PTrainingPosSprite dSC1PTrainingMode_0x10C_PosSpriteArray[6] = {
	#include <SC1PTrainingMode/0x10C_PosSpriteArray.data.inc.c>
};

/* @ 0x013C — option-text glyph stream for the right column */
SC1PTrainingSprite dSC1PTrainingMode_MenuOption_SpriteArray[31] = {
	#include <SC1PTrainingMode/MenuOption_SpriteArray.data.inc.c>
};

/* @ 0x01B8 — positioned sprites for the bottom HUD rows */
SC1PTrainingPosSprite dSC1PTrainingMode_0x1B8_PosSpriteArray[29] = {
	#include <SC1PTrainingMode/0x1B8_PosSpriteArray.data.inc.c>
};
