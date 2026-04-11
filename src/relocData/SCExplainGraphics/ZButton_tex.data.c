/* Texture data for sprite ZButton */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: ZButton (24x39 ci8) */
u8 dSCExplainGraphics_ZButton_tex[] = {
    #include <SCExplainGraphics/ZButton.ci8.inc.c>
};
