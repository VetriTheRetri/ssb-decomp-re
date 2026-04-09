/* Texture data for sprite RedCard */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: RedCard (66(80)x92 ci4, 2 tiles) */
u8 dMNPlayersCommon_RedCard_tex[] = {
    #include <MNPlayersCommon/RedCard.ci4.inc.c>
};
