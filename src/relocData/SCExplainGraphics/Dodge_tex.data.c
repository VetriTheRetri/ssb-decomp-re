/* Texture data for sprite Dodge */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: Dodge (182(192)x14 ci4) */
u8 dSCExplainGraphics_Dodge_tex[] = {
    #include <SCExplainGraphics/Dodge.ci4.inc.c>
};
