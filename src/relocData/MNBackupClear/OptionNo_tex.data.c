/* Texture data for sprite OptionNo */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */

#include "relocdata_types.h"

/* Texture: OptionNo (48x48 ci4) */
u8 dMNBackupClear_OptionNo_tex[] = {
    #include <MNBackupClear/OptionNo.ci4.inc.c>
};
