/* Texture data for sprite MidairJump */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: MidairJump (156(160)x33 ci4, 2 tiles) */
u8 dSCExplainGraphics_MidairJump_tex[] = {
    #include <SCExplainGraphics/MidairJump.ci4.inc.c>
};
