/* Texture data for sprite Attack */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: Attack (100(112)x14 ci4) */
u8 dSCExplainGraphics_Attack_tex[] = {
    #include <SCExplainGraphics/Attack.ci4.inc.c>
};
