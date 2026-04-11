/* Texture data for sprite PlusSymbol */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: PlusSymbol (8(16)x7 ci4) */
u8 dSCExplainGraphics_PlusSymbol_tex[] = {
    #include <SCExplainGraphics/PlusSymbol.ci4.inc.c>
};
