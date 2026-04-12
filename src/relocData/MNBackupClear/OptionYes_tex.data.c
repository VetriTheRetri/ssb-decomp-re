/* Texture data for sprite OptionYes */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: OptionYes (48x48 ci4) */
u8 dMNBackupClear_OptionYes_tex[] = {
    #include <MNBackupClear/OptionYes.ci4.inc.c>
};
