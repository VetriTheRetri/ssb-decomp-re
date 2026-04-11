/* Texture data for sprite SamusMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: SamusMarker (16x24 ci4) */
u8 dSC1PIntro_SamusMarker_tex[] = {
    #include <SC1PIntro/SamusMarker.ci4.inc.c>
};
