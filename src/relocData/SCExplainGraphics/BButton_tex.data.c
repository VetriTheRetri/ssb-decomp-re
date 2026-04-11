/* Texture data for sprite BButton */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: BButton (24x39 ci8) */
u8 dSCExplainGraphics_BButton_tex[] = {
    #include <SCExplainGraphics/BButton.ci8.inc.c>
};
