/* Texture data for sprite YoshiMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: YoshiMarker (16x24 ci4) */
u8 dSC1PIntro_YoshiMarker_tex[] = {
    #include <SC1PIntro/YoshiMarker.ci4.inc.c>
};
