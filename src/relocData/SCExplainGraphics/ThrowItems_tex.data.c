/* Texture data for sprite ThrowItems */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: ThrowItems (130(144)x49 ci4, 2 tiles) */
u8 dSCExplainGraphics_ThrowItems_tex[] = {
    #include <SCExplainGraphics/ThrowItems.ci4.inc.c>
};
