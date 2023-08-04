.include "macros.inc"

.section .data

# Data Sections
#  8018E3D0 -> 8018E480


glabel D_ovl4_8018E3D0
  .incbin "ovl4.raw.bin", 0x1310, 0x4

glabel D_ovl4_8018E3D4
  .incbin "ovl4.raw.bin", 0x1314, 0x4

glabel D_ovl4_8018E3D8
  /* 1318 10B2C8 8018E3D8 */  .4byte D_NF_80392A00
  /* 131C 10B2CC 8018E3DC */  .4byte D_NF_803B6900
  /* 1320 10B2D0 8018E3E0 */  .4byte D_NF_803DA800
  .incbin "ovl4.raw.bin", 0x1324, 0x10

glabel D_ovl4_8018E3F4
  .incbin "ovl4.raw.bin", 0x1334, 0x4
  /* 1338 10B2E8 8018E3F8 */  .4byte func_ovl4_8018D0C0
  /* 133C 10B2EC 8018E3FC */  .4byte func_800A26B8
  /* 1340 10B2F0 8018E400 */  .4byte D_NF_8018E7E0
  .incbin "ovl4.raw.bin", 0x1344, 0x28
  /* 136C 10B31C 8018E42C */  .4byte func_ovl4_8018E144
  /* 1370 10B320 8018E430 */  .4byte update_contdata
  .incbin "ovl4.raw.bin", 0x1374, 0x20
  /* 1394 10B344 8018E454 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl4.raw.bin", 0x1398, 0x28
