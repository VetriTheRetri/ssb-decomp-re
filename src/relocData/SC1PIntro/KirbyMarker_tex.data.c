/* Texture data for sprite KirbyMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: KirbyMarker (16x24 ci4) */
u8 dSC1PIntro_KirbyMarker_tex[] = {
    #include <SC1PIntro/KirbyMarker.ci4.inc.c>
};
