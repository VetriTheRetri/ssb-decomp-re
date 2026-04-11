/* Texture data for sprite PikachuMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: PikachuMarker (16x24 ci4) */
u8 dSC1PIntro_PikachuMarker_tex[] = {
    #include <SC1PIntro/PikachuMarker.ci4.inc.c>
};
