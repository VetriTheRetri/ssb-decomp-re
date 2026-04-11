/* Texture data for sprite DKMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: DKMarker (16x24 ci4) */
u8 dSC1PIntro_DKMarker_tex[] = {
    #include <SC1PIntro/DKMarker.ci4.inc.c>
};
