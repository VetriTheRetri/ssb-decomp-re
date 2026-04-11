/* Texture data for sprite PowerAttack */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: PowerAttack (160x31 ci4, 2 tiles) */
u8 dSCExplainGraphics_PowerAttack_tex[] = {
    #include <SCExplainGraphics/PowerAttack.ci4.inc.c>
};
