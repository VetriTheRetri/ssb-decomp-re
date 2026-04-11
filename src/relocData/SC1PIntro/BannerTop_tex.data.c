/* Texture data for sprite BannerTop */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: BannerTop (300(304)x59 ci8, 10 tiles) */
u8 dSC1PIntro_BannerTop_tex[] = {
    #include <SC1PIntro/BannerTop.ci8.inc.c>
};
