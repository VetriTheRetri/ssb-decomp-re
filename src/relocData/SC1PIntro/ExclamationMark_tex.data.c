/* Texture data for sprite ExclamationMark */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: ExclamationMark (8(16)x16 ci4) */
u8 dSC1PIntro_ExclamationMark_tex[] = {
    #include <SC1PIntro/ExclamationMark.ci4.inc.c>
};
