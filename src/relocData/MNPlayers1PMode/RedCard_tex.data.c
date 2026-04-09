/* Texture data for sprite RedCard */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: RedCard (82(96)x95 ci4, 5 tiles) */
u8 dMNPlayers1PMode_RedCard_tex[] = {
    #include <MNPlayers1PMode/RedCard.ci4.inc.c>
};
