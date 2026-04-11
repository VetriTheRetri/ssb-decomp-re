/* Texture data for sprite Wallpaper */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: Wallpaper (160x130 ci8, 11 tiles) */
u8 dMVOpeningRun_Wallpaper_tex[] = {
    #include <MVOpeningRun/Wallpaper.ci8.inc.c>
};
