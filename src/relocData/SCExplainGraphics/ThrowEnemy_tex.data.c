/* Texture data for sprite ThrowEnemy */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: ThrowEnemy (146(160)x31 ci4, 2 tiles) */
u8 dSCExplainGraphics_ThrowEnemy_tex[] = {
    #include <SCExplainGraphics/ThrowEnemy.ci4.inc.c>
};
