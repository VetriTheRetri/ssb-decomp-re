.include "macros.inc"

.section .data

# Data Sections
#  800D7010 -> 800D7110


glabel D_ovl16_800D7010
  .incbin "ovl16.raw.bin", 0x0B80, 0x8

glabel D_ovl16_800D7018
  /* B88 18DBB8 800D7018 */
  .asciz "   "
  .balign 4
  /* B8C 18DBBC 800D701C */
  .asciz "   "
  .balign 4

glabel D_ovl16_800D7020
  .incbin "ovl16.raw.bin", 0x0B90, 0x10

glabel D_ovl16_800D7030
  .incbin "ovl16.raw.bin", 0x0BA0, 0x14
  /* BB4 18DBE4 800D7044 */  .4byte D_ovl16_800D7020
  .incbin "ovl16.raw.bin", 0x0BB8, 0x4
  /* BBC 18DBEC 800D704C */  .4byte D_ovl16_800D7018
  .incbin "ovl16.raw.bin", 0x0BC0, 0x8

glabel D_ovl16_800D7058
  /* BC8 18DBF8 800D7058 */  .4byte D_NF_80392A00
  /* BCC 18DBFC 800D705C */  .4byte D_NF_803B6900
  /* BD0 18DC00 800D7060 */  .4byte D_NF_803DA800
  .incbin "ovl16.raw.bin", 0x0BD4, 0x10

glabel D_ovl16_800D7074
  .incbin "ovl16.raw.bin", 0x0BE4, 0x4
  /* BE8 18DC18 800D7078 */  .4byte func_8000A5E4
  /* BEC 18DC1C 800D707C */  .4byte func_8000A340
  /* BF0 18DC20 800D7080 */  .4byte D_NF_800D7170
  .incbin "ovl16.raw.bin", 0x0BF4, 0x28
  /* C1C 18DC4C 800D70AC */  .4byte func_ovl16_800D6490
  /* C20 18DC50 800D70B0 */  .4byte update_contdata
  .incbin "ovl16.raw.bin", 0x0C24, 0x48
  /* C6C 18DC9C 800D70FC */  .4byte func_ovl16_800D65C4

glabel D_ovl16_800D7100
  /* C70 18DCA0 800D7100 */
  .4byte 0x3dcccccd # .float 0.1

glabel D_ovl16_800D7104
  /* C74 18DCA4 800D7104 */
  .4byte 0x3dcccccd # .float 0.1

glabel D_ovl16_800D7108
  /* C78 18DCA8 800D7108 */
  .4byte 0x453b8000 # .float 3000.0
  .incbin "ovl16.raw.bin", 0x0C7C, 0x4
