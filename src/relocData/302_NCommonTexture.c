/* relocData file 302: NCommonTexture — palette + 32×32 CI4 texture pool
 * loaded by the N-variant (low-poly) fighter rendering path.
 *
 * Layout:
 *   0x000-0x007  PAD(8)
 *   0x008-0x027  16-color RGBA5551 palette
 *   0x028-0x02F  PAD(8)
 *   0x030-0x22F  512 bytes of CI4 texture pixels (32×32)
 *
 * No intern or extern chain entries; this file is pure data. Loaded by
 * the low-poly fighter rendering pipeline as a shared texture/palette
 * pool.
 */

#include "relocdata_types.h"

PAD(8);

/* @ 0x0008, 32 bytes — 16-color RGBA5551 palette */
u16 dNCommonTexture_palette[16] = {
	#include <NCommonTexture/palette.data.inc.c>
};

PAD(8);

/* @ 0x0030, 512 bytes — CI4 texture (32×32) */
u8 dNCommonTexture_Tex[0x200] = {
	#include <NCommonTexture/Tex.tex.inc.c>
};
