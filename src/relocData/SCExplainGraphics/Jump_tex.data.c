/* Texture data for sprite Jump */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: Jump (170(176)x33 ci4, 2 tiles) */
u8 dSCExplainGraphics_Jump_tex[] = {
    #include <SCExplainGraphics/Jump.ci4.inc.c>
};
