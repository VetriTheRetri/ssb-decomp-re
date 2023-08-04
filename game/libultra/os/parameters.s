#include "asm_helper.h"
.set noreorder
.text
ABS(leoBootID, 0x800001a0)
ABS(osTvType, 0x80000300)
ABS(osRomType, 0x80000304)
ABS(osRomBase, 0x80000308)
ABS(osResetType, 0x8000030c)
ABS(osCicId, 0x80000310)
ABS(osVersion, 0x80000314)
ABS(osMemSize, 0x80000318)
ABS(osAppNMIBuffer, 0x8000031c)
nop; nop; nop; nop;
nop; nop; nop; nop;
nop; nop; nop; nop;
nop; nop; nop; nop;
nop; nop; nop; nop;
nop; nop; nop; nop;
 /* padding to 0x60 because for some reason it's like that */