/* Texture data for sprite AButton */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: AButton (24x39 ci8) */
u8 dSCExplainGraphics_AButton_tex[] = {
    #include <SCExplainGraphics/AButton.ci8.inc.c>
};
