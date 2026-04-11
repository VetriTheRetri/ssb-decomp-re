/* Texture data for sprite LinkMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: LinkMarker (16x24 ci4) */
u8 dSC1PIntro_LinkMarker_tex[] = {
    #include <SC1PIntro/LinkMarker.ci4.inc.c>
};
