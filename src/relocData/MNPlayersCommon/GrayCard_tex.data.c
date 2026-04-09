/* Texture data for sprite GrayCard */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: GrayCard (66(80)x92 ci4, 2 tiles) */
u8 dMNPlayersCommon_GrayCard_tex[] = {
    #include <MNPlayersCommon/GrayCard.ci4.inc.c>
};
