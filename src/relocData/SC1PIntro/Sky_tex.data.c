/* Texture data for sprite Sky */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: Sky (300(304)x155 ci4, 26 tiles) */
u8 dSC1PIntro_Sky_tex[] = {
    #include <SC1PIntro/Sky.ci4.inc.c>
};
