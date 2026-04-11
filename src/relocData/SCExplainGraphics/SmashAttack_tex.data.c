/* Texture data for sprite SmashAttack */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: SmashAttack (132(144)x33 ci4, 2 tiles) */
u8 dSCExplainGraphics_SmashAttack_tex[] = {
    #include <SCExplainGraphics/SmashAttack.ci4.inc.c>
};
