/* Texture data for sprite TapTheStick */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: TapTheStick (264(272)x53 ci4, 4 tiles) */
u8 dSCExplainGraphics_TapTheStick_tex[] = {
    #include <SCExplainGraphics/TapTheStick.ci4.inc.c>
};
