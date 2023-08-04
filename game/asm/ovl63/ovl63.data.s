.include "macros.inc"

.section .data

# Data Sections
#  8018E6E0 -> 8018E7F0


glabel D_ovl63_8018E6E0
  .incbin "ovl63.raw.bin", 0x1620, 0x14

glabel D_ovl63_8018E6F4
  .incbin "ovl63.raw.bin", 0x1634, 0x1C

glabel D_ovl63_8018E710
  .incbin "ovl63.raw.bin", 0x1650, 0x10

glabel D_ovl63_8018E720
  .incbin "ovl63.raw.bin", 0x1660, 0x4

glabel D_ovl63_8018E724
  .incbin "ovl63.raw.bin", 0x1664, 0x4

glabel D_ovl63_8018E728
  .incbin "ovl63.raw.bin", 0x1668, 0x4

glabel D_ovl63_8018E72C
  /* 166C 18BD3C 8018E72C */  .4byte D_NF_80392A00
  /* 1670 18BD40 8018E730 */  .4byte D_NF_803B6900
  /* 1674 18BD44 8018E734 */  .4byte D_NF_803DA800
  .incbin "ovl63.raw.bin", 0x1678, 0x10

glabel D_ovl63_8018E748
  .incbin "ovl63.raw.bin", 0x1688, 0x4

glabel jtbl_ovl63_8018E74C
  /* 168C 18BD5C 8018E74C */  .4byte jtgt_ovl63_8018E568
  /* 1690 18BD60 8018E750 */  .4byte jtgt_ovl63_8018E594
  /* 1694 18BD64 8018E754 */  .4byte D_NF_8018EC00
  .incbin "ovl63.raw.bin", 0x1698, 0x28
  /* 16C0 18BD90 8018E780 */  .4byte func_ovl63_8018E51C
  /* 16C4 18BD94 8018E784 */  .4byte update_contdata
  .incbin "ovl63.raw.bin", 0x16C8, 0x20
  /* 16E8 18BDB8 8018E7A8 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl63.raw.bin", 0x16EC, 0x24
  /* 1710 18BDE0 8018E7D0 */  .4byte func_ovl63_8018E1A0
  .incbin "ovl63.raw.bin", 0x1714, 0xC

glabel D_ovl63_8018E7E0
  /* 1720 18BDF0 8018E7E0 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl63_8018E7E4
  /* 1724 18BDF4 8018E7E4 */
  .4byte 0x44bb8000 # .float 1500.0
  .incbin "ovl63.raw.bin", 0x1728, 0x8
