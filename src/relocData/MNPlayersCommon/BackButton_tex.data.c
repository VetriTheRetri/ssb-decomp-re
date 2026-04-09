/* Texture data for sprite BackButton */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: BackButton (48x11 ci4) */
u8 dMNPlayersCommon_BackButton_tex[] = {
    #include <MNPlayersCommon/BackButton.ci4.inc.c>
};
