/* Texture data for sprite UseItems */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: UseItems (162(176)x14 ci4) */
u8 dSCExplainGraphics_UseItems_tex[] = {
    #include <SCExplainGraphics/UseItems.ci4.inc.c>
};
