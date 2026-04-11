/* Texture data for sprite FoxMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: FoxMarker (16x24 ci4) */
u8 dSC1PIntro_FoxMarker_tex[] = {
    #include <SC1PIntro/FoxMarker.ci4.inc.c>
};
