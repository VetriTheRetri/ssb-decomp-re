/* Texture data for sprite Stock */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: Stock (8(16)x10 ci4) */
u8 dYoshiModel_Stock_tex[] = {
    #include <YoshiModel/Stock.ci4.inc.c>
};
