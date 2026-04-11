/* Texture data for sprite SpecialMoves */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: SpecialMoves (168x51 ci8, 6 tiles) */
u8 dSCExplainGraphics_SpecialMoves_tex[] = {
    #include <SCExplainGraphics/SpecialMoves.ci8.inc.c>
};
