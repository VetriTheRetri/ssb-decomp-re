/* Texture data for sprite MarioMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: MarioMarker (16x24 ci4) */
u8 dSC1PIntro_MarioMarker_tex[] = {
    #include <SC1PIntro/MarioMarker.ci4.inc.c>
};
