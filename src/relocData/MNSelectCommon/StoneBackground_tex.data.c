/* Texture data for sprite StoneBackground */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: StoneBackground (64x32 ci4) */
u8 dMNSelectCommon_StoneBackground_tex[] = {
    #include <MNSelectCommon/StoneBackground.ci4.inc.c>
};
