/* Texture data for sprite KnockThemOff */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: KnockThemOff (200(208)x33 ci4, 2 tiles) */
u8 dSCExplainGraphics_KnockThemOff_tex[] = {
    #include <SCExplainGraphics/KnockThemOff.ci4.inc.c>
};
