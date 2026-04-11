/* Texture data for sprite BonusMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: BonusMarker (8(16)x8 ci4) */
u8 dSC1PIntro_BonusMarker_tex[] = {
    #include <SC1PIntro/BonusMarker.ci4.inc.c>
};
