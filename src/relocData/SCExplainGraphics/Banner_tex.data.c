/* Texture data for sprite Banner */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: Banner (300(304)x88 ci8, 15 tiles) */
u8 dSCExplainGraphics_Banner_tex[] = {
    #include <SCExplainGraphics/Banner.ci8.inc.c>
};
