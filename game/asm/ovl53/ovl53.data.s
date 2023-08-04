.include "macros.inc"

.section .data

# Data Sections
#  80132E80 -> 801330A0


glabel D_ovl53_80132E80
  .incbin "ovl53.raw.bin", 0x1380, 0x30

glabel D_ovl53_80132EB0
  /* 13B0 1772B0 80132EB0 */
  .asciz "   "
  .balign 4
  /* 13B4 1772B4 80132EB4 */
  .asciz "   "
  .balign 4

glabel D_ovl53_80132EB8
  .incbin "ovl53.raw.bin", 0x13B8, 0x8
  /* 13C0 1772C0 80132EC0 */
  .asciz "<<<"
  .balign 4
  .incbin "ovl53.raw.bin", 0x13C4, 0x4

glabel D_ovl53_80132EC8
  .incbin "ovl53.raw.bin", 0x13C8, 0x14
  /* 13DC 1772DC 80132EDC */  .4byte D_ovl53_80132EB8
  .incbin "ovl53.raw.bin", 0x13E0, 0x4
  /* 13E4 1772E4 80132EE4 */  .4byte D_ovl53_80132EB0
  .incbin "ovl53.raw.bin", 0x13E8, 0x8

glabel D_ovl53_80132EF0
  .incbin "ovl53.raw.bin", 0x13F0, 0x18

glabel D_ovl53_80132F08
  .incbin "ovl53.raw.bin", 0x1408, 0x4
  /* 140C 17730C 80132F0C */
  .asciz "CE"
  .balign 4
  .incbin "ovl53.raw.bin", 0x1410, 0x4
  /* 1414 177314 80132F14 */
  .asciz "CE"
  .balign 4
  .incbin "ovl53.raw.bin", 0x1418, 0x4
  /* 141C 17731C 80132F1C */
  .asciz "CE"
  .balign 4
  .incbin "ovl53.raw.bin", 0x1420, 0x4
  /* 1424 177324 80132F24 */
  .asciz "CE"
  .balign 4
  .incbin "ovl53.raw.bin", 0x1428, 0x4
  /* 142C 17732C 80132F2C */
  .asciz "CE"
  .balign 4
  .incbin "ovl53.raw.bin", 0x1430, 0x4
  /* 1434 177334 80132F34 */
  .asciz "CE"
  .balign 4

glabel D_ovl53_80132F38
  .incbin "ovl53.raw.bin", 0x1438, 0x4

glabel D_ovl53_80132F3C
  .incbin "ovl53.raw.bin", 0x143C, 0x4

glabel D_ovl53_80132F40
  /* 1440 177340 80132F40 */  .4byte D_ovl53_801330A0
  /* 1444 177344 80132F44 */  .4byte D_ovl53_801330A4
  /* 1448 177348 80132F48 */  .4byte D_ovl53_801330A8
  /* 144C 17734C 80132F4C */  .4byte D_ovl53_801330AC
  /* 1450 177350 80132F50 */  .4byte D_ovl53_801330B0
  /* 1454 177354 80132F54 */  .4byte D_ovl53_801330B4

glabel D_ovl53_80132F58
  .incbin "ovl53.raw.bin", 0x1458, 0x18

glabel D_ovl53_80132F70
  .incbin "ovl53.raw.bin", 0x1470, 0x4
  /* 1474 177374 80132F74 */
  .asciz "BX"
  .balign 4
  .incbin "ovl53.raw.bin", 0x1478, 0x1C
  /* 1494 177394 80132F94 */
  .asciz "C\""
  .balign 4
  .incbin "ovl53.raw.bin", 0x1498, 0x4
  /* 149C 17739C 80132F9C */
  .asciz "C="
  .balign 4

glabel D_ovl53_80132FA0
  /* 14A0 1773A0 80132FA0 */  .4byte D_ovl53_801330A0
  /* 14A4 1773A4 80132FA4 */  .4byte D_ovl53_801330A4
  /* 14A8 1773A8 80132FA8 */  .4byte D_ovl53_801330A8
  /* 14AC 1773AC 80132FAC */  .4byte D_ovl53_801330AC
  /* 14B0 1773B0 80132FB0 */  .4byte D_ovl53_801330B0
  /* 14B4 1773B4 80132FB4 */  .4byte D_ovl53_801330B4
  /* 14B8 1773B8 80132FB8 */
  .asciz "CA"
  .balign 4
  .incbin "ovl53.raw.bin", 0x14BC, 0xC

glabel D_ovl53_80132FC8
  /* 14C8 1773C8 80132FC8 */  .4byte D_NF_80392A00
  /* 14CC 1773CC 80132FCC */  .4byte D_NF_803B6900
  /* 14D0 1773D0 80132FD0 */  .4byte D_NF_803DA800
  .incbin "ovl53.raw.bin", 0x14D4, 0x10

glabel D_ovl53_80132FE4
  .incbin "ovl53.raw.bin", 0x14E4, 0x4
  /* 14E8 1773E8 80132FE8 */  .4byte func_8000A5E4
  /* 14EC 1773EC 80132FEC */  .4byte func_8000A340
  /* 14F0 1773F0 80132FF0 */  .4byte D_NF_801331C0
  .incbin "ovl53.raw.bin", 0x14F4, 0x28
  /* 151C 17741C 8013301C */  .4byte func_ovl53_80131B00
  /* 1520 177420 80133020 */  .4byte update_contdata
  .incbin "ovl53.raw.bin", 0x1524, 0x48

glabel jtbl_ovl53_8013306C
  /* 156C 17746C 8013306C */  .4byte jtgt_ovl53_80132D34

glabel D_ovl53_80133070
  /* 1570 177470 80133070 */  .4byte jtgt_ovl53_80132544
  /* 1574 177474 80133074 */  .4byte jtgt_ovl53_80132554
  /* 1578 177478 80133078 */  .4byte jtgt_ovl53_80132574
  /* 157C 17747C 8013307C */  .4byte jtgt_ovl53_80132564
  /* 1580 177480 80133080 */  .4byte jtgt_ovl53_80132584
  /* 1584 177484 80133084 */  .4byte jtgt_ovl53_80132594

glabel D_ovl53_80133088
  /* 1588 177488 80133088 */  .4byte jtgt_ovl53_8013264C
  /* 158C 17748C 8013308C */  .4byte jtgt_ovl53_8013264C
  /* 1590 177490 80133090 */  .4byte jtgt_ovl53_8013264C
  /* 1594 177494 80133094 */  .4byte jtgt_ovl53_8013264C
  /* 1598 177498 80133098 */  .4byte jtgt_ovl53_8013264C
  /* 159C 17749C 8013309C */  .4byte jtgt_ovl53_8013264C
