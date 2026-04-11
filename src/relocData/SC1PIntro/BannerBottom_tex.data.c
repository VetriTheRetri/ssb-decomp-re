/* Texture data for sprite BannerBottom */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: BannerBottom (300(304)x59 ci4, 10 tiles) */
u8 dSC1PIntro_BannerBottom_tex[] = {
    #include <SC1PIntro/BannerBottom.ci4.inc.c>
};
