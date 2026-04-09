/* Texture data for sprite ArrowR */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: ArrowR (7(16)x11 ci4) */
u8 dMNPlayersCommon_ArrowR_tex[] = {
    #include <MNPlayersCommon/ArrowR.ci4.inc.c>
};
