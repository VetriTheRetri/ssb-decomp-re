/* Texture data for sprite ArrowL */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: ArrowL (7(16)x11 ci4) */
u8 dMNPlayersCommon_ArrowL_tex[] = {
    #include <MNPlayersCommon/ArrowL.ci4.inc.c>
};
