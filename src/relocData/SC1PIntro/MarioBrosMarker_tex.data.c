/* Texture data for sprite MarioBrosMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: MarioBrosMarker (16x24 ci4) */
u8 dSC1PIntro_MarioBrosMarker_tex[] = {
    #include <SC1PIntro/MarioBrosMarker.ci4.inc.c>
};
