/* Texture data for sprite GrabItems */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: GrabItems (148(160)x14 ci4) */
u8 dSCExplainGraphics_GrabItems_tex[] = {
    #include <SCExplainGraphics/GrabItems.ci4.inc.c>
};
