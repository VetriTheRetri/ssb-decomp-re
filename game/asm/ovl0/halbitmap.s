.include "macros.inc"

# data
.section .data

# Float Table (sin?)
#glabel D_ovl0_800D4CA0
#  /* D460 050680 800D4CA0 */
#  .4byte 0x000000 # .float 0.0
#  .incbin "ovl0.raw.bin", 0xD464, 0xFF8

# final entry of table from above
#glabel D_ovl0_800D5C9C
#  /* E45C 05167C 800D5C9C */
#  .4byte 0x3f800000 # .float 1.0

# glabel D_ovl0_800D5CA0
#   .incbin "ovl0.raw.bin", 0xE460, 0xC

# # function pointers table?
# glabel jtbl_ovl0_800D5CAC
#   /* E46C 05168C 800D5CAC */  .4byte jtgt_ovl0_800C96EC
#   /* E470 051690 800D5CB0 */  .4byte jtgt_ovl0_800C96EC
#   /* E474 051694 800D5CB4 */  .4byte jtgt_ovl0_800C9714
#   /* E478 051698 800D5CB8 */  .4byte jtgt_ovl0_800C9714
#   /* E47C 05169C 800D5CBC */  .4byte jtgt_ovl0_800CA024
#   /* E480 0516A0 800D5CC0 */  .4byte jtgt_ovl0_800CA024
#   /* E484 0516A4 800D5CC4 */  .4byte jtgt_ovl0_800CA144
#   /* E488 0516A8 800D5CC8 */  .4byte jtgt_ovl0_800CA144
#   /* E48C 0516AC 800D5CCC */  .4byte jtgt_ovl0_800CA194
#   /* E490 0516B0 800D5CD0 */  .4byte jtgt_ovl0_800CA194
#   /* E494 0516B4 800D5CD4 */  .4byte jtgt_ovl0_800CA5C8
#   /* E498 0516B8 800D5CD8 */  .4byte jtgt_ovl0_800CA5C8
#   /* E49C 0516BC 800D5CDC */  .4byte jtgt_ovl0_800CAB48
#   /* E4A0 0516C0 800D5CE0 */  .4byte jtgt_ovl0_800CAB48
#   /* E4A4 0516C4 800D5CE4 */  .4byte jtgt_ovl0_800CB140
#   /* E4A8 0516C8 800D5CE8 */  .4byte jtgt_ovl0_800CB140
#   /* E4AC 0516CC 800D5CEC */  .4byte jtgt_ovl0_800CB2F0
#   /* E4B0 0516D0 800D5CF0 */  .4byte jtgt_ovl0_800CB2F0
#   /* E4B4 0516D4 800D5CF4 */  .4byte jtgt_ovl0_800C973C
#   /* E4B8 0516D8 800D5CF8 */  .4byte jtgt_ovl0_800C973C
#   /* E4BC 0516DC 800D5CFC */  .4byte func_ovl2_8010D250
#   /* E4C0 0516E0 800D5D00 */  .4byte func_ovl2_8010D428
#   /* E4C4 0516E4 800D5D04 */  .4byte func_ovl2_8010DE48
#   .incbin "ovl0.raw.bin", 0xE4C8, 0x4
#   /* E4CC 0516EC 800D5D0C */  .4byte func_ovl2_8010E00C
#   .incbin "ovl0.raw.bin", 0xE4D0, 0x4

# glabel jtbl_ovl0_800D5D14
#   /* E4D4 0516F4 800D5D14 */  .4byte jtgt_ovl0_800C994C
#   /* E4D8 0516F8 800D5D18 */  .4byte jtgt_ovl0_800C994C
#   /* E4DC 0516FC 800D5D1C */  .4byte jtgt_ovl0_800C99CC
#   /* E4E0 051700 800D5D20 */  .4byte jtgt_ovl0_800C99CC
#   /* E4E4 051704 800D5D24 */  .4byte jtgt_ovl0_800C9F30
#   /* E4E8 051708 800D5D28 */  .4byte jtgt_ovl0_800C9F30
#   /* E4EC 05170C 800D5D2C */  .4byte jtgt_ovl0_800C9F70
#   /* E4F0 051710 800D5D30 */  .4byte jtgt_ovl0_800C9F70
#   /* E4F4 051714 800D5D34 */  .4byte func_ovl2_80106904
#   /* E4F8 051718 800D5D38 */  .4byte func_ovl2_80106904
#   /* E4FC 05171C 800D5D3C */  .4byte func_ovl2_8010E00C
#   /* E500 051720 800D5D40 */  .4byte func_ovl2_8010E10C

# glabel D_ovl0_800D5D44
#   .incbin "ovl0.raw.bin", 0xE504, 0xC
