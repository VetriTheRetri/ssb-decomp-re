/* Texture data for sprite BossMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: BossMarker (16x16 ci4) */
u8 dSC1PIntro_BossMarker_tex[] = {
    #include <SC1PIntro/BossMarker.ci4.inc.c>
};
