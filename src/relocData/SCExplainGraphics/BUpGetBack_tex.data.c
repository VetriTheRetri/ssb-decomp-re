/* Texture data for sprite BUpGetBack */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: BUpGetBack (162(168)x50 ci8, 5 tiles) */
u8 dSCExplainGraphics_BUpGetBack_tex[] = {
    #include <SCExplainGraphics/BUpGetBack.ci8.inc.c>
};
