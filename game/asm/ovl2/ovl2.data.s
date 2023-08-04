.include "macros.inc"

.section .data

# Data Sections
#  80116BD0 -> 80130D40


glabel D_ovl2_80116BD0
  .incbin "ovl2.raw.bin", 0x40740, 0x20

glabel D_ovl2_80116BF0
  .incbin "ovl2.raw.bin", 0x40760, 0x8
  /* 40768 0923F8 80116BF8 */  .4byte func_ovl1_803903E0
  /* 4076C 0923FC 80116BFC */  .4byte func_ovl1_803903E0
  /* 40770 092400 80116C00 */  .4byte D_ovl1_80390BE0
  /* 40774 092404 80116C04 */  .4byte D_ovl1_80390BE0
  /* 40778 092408 80116C08 */  .4byte D_ovl1_803929D0
  /* 4077C 09240C 80116C0C */  .4byte D_ovl1_803929D0
  /* 40780 092410 80116C10 */  .4byte D_NF_80392A00

glabel D_ovl2_80116C14
  .incbin "ovl2.raw.bin", 0x40784, 0x8
  /* 4078C 09241C 80116C1C */  .4byte D_unkmulti_80131B00
  /* 40790 092420 80116C20 */  .4byte D_unkmulti_80131B00
  /* 40794 092424 80116C24 */  .4byte D_ovl24_80134DF0
  /* 40798 092428 80116C28 */  .4byte D_ovl24_80134DF0
  /* 4079C 09242C 80116C2C */  .4byte D_unkmulti_80135C20
  /* 407A0 092430 80116C30 */  .4byte D_unkmulti_80135C20
  /* 407A4 092434 80116C34 */  .4byte D_unkmulti_80136070

glabel D_ovl2_80116C38
  .incbin "ovl2.raw.bin", 0x407A8, 0x8
  /* 407B0 092440 80116C40 */  .4byte D_unkmulti_80131B00
  /* 407B4 092444 80116C44 */  .4byte D_unkmulti_80131B00
  /* 407B8 092448 80116C48 */  .4byte D_ovl56_80134EE0
  /* 407BC 09244C 80116C4C */  .4byte D_ovl56_80134EE0
  /* 407C0 092450 80116C50 */  .4byte D_unkmulti_801352C0
  /* 407C4 092454 80116C54 */  .4byte D_unkmulti_801352C0
  /* 407C8 092458 80116C58 */  .4byte D_unkmulti_801355B0

glabel D_ovl2_80116C5C
  .incbin "ovl2.raw.bin", 0x407CC, 0x8
  /* 407D4 092464 80116C64 */  .4byte D_unkmulti_80131B00
  /* 407D8 092468 80116C68 */  .4byte D_unkmulti_80131B00
  /* 407DC 09246C 80116C6C */  .4byte D_ovl23_80132370
  /* 407E0 092470 80116C70 */  .4byte D_ovl23_80132370
  /* 407E4 092474 80116C74 */  .4byte D_unkmulti_80132480
  /* 407E8 092478 80116C78 */  .4byte D_unkmulti_80132480
  /* 407EC 09247C 80116C7C */  .4byte D_unkmulti_80132800

glabel D_ovl2_80116C80
  .incbin "ovl2.raw.bin", 0x407F0, 0x8
  /* 407F8 092488 80116C88 */  .4byte D_unkmulti_80131B00
  /* 407FC 09248C 80116C8C */  .4byte D_unkmulti_80131B00
  /* 40800 092490 80116C90 */  .4byte D_multiple_80132AD0
  /* 40804 092494 80116C94 */  .4byte D_multiple_80132AD0
  /* 40808 092498 80116C98 */  .4byte D_ovl14_80132BC0
  /* 4080C 09249C 80116C9C */  .4byte D_ovl14_80132BC0
  /* 40810 0924A0 80116CA0 */  .4byte D_unkmulti_80132F80

glabel D_ovl2_80116CA4
  .incbin "ovl2.raw.bin", 0x40814, 0x8
  /* 4081C 0924AC 80116CAC */  .4byte D_unkmulti_80131B00
  /* 40820 0924B0 80116CB0 */  .4byte D_unkmulti_80131B00
  /* 40824 0924B4 80116CB4 */  .4byte D_ovl22_80132500
  /* 40828 0924B8 80116CB8 */  .4byte D_ovl22_80132500
  /* 4082C 0924BC 80116CBC */  .4byte D_unkmulti_80132650
  /* 40830 0924C0 80116CC0 */  .4byte D_unkmulti_80132650
  /* 40834 0924C4 80116CC4 */  .4byte D_unkmulti_80132990

glabel D_ovl2_80116CC8
  .incbin "ovl2.raw.bin", 0x40838, 0x8
  /* 40840 0924D0 80116CD0 */  .4byte D_unkmulti_80131B00
  /* 40844 0924D4 80116CD4 */  .4byte D_unkmulti_80131B00
  /* 40848 0924D8 80116CD8 */  .4byte D_unkmulti_80132100
  /* 4084C 0924DC 80116CDC */  .4byte D_unkmulti_80132100
  /* 40850 0924E0 80116CE0 */  .4byte D_unkmulti_801322B0
  /* 40854 0924E4 80116CE4 */  .4byte D_unkmulti_801322B0
  /* 40858 0924E8 80116CE8 */  .4byte D_unkmulti_80132300

glabel D_ovl2_80116CEC
  .incbin "ovl2.raw.bin", 0x4085C, 0x8
  /* 40864 0924F4 80116CF4 */  .4byte D_unkmulti_80131B00
  /* 40868 0924F8 80116CF8 */  .4byte D_unkmulti_80131B00
  /* 4086C 0924FC 80116CFC */  .4byte D_unkmulti_80135260
  /* 40870 092500 80116D00 */  .4byte D_unkmulti_80135260
  /* 40874 092504 80116D04 */  .4byte D_unkmulti_8013A7D0
  /* 40878 092508 80116D08 */  .4byte D_unkmulti_8013A7D0
  /* 4087C 09250C 80116D0C */  .4byte D_unkmulti_8013AA60

glabel D_ovl2_80116D10
  .incbin "ovl2.raw.bin", 0x40880, 0x8
  /* 40888 092518 80116D18 */  .4byte D_unkmulti_8018D0C0
  /* 4088C 09251C 80116D1C */  .4byte D_unkmulti_8018D0C0
  /* 40890 092520 80116D20 */  .4byte D_ovl65_80192800
  /* 40894 092524 80116D24 */  .4byte D_ovl65_80192800
  /* 40898 092528 80116D28 */  .4byte D_ovl65_80192FA0
  /* 4089C 09252C 80116D2C */  .4byte D_ovl65_80192FA0
  /* 408A0 092530 80116D30 */  .4byte D_NF_80193900

glabel D_ovl2_80116D34
  .incbin "ovl2.raw.bin", 0x408A4, 0x8
  /* 408AC 09253C 80116D3C */  .4byte D_unkmulti_80131B00
  /* 408B0 092540 80116D40 */  .4byte D_unkmulti_80131B00
  /* 408B4 092544 80116D44 */  .4byte D_ovl3_80186660
  /* 408B8 092548 80116D48 */  .4byte D_ovl3_80186660
  /* 408BC 09254C 80116D4C */  .4byte D_ovl3_8018CF80
  /* 408C0 092550 80116D50 */  .4byte D_ovl3_8018CF80
  /* 408C4 092554 80116D54 */  .4byte D_unkmulti_8018D0C0

glabel D_ovl2_80116D58
  .incbin "ovl2.raw.bin", 0x408C8, 0x8
  /* 408D0 092560 80116D60 */  .4byte D_unkmulti_8018D0C0
  /* 408D4 092564 80116D64 */  .4byte D_unkmulti_8018D0C0
  /* 408D8 092568 80116D68 */  .4byte D_unkmulti_8018EEC0
  /* 408DC 09256C 80116D6C */  .4byte D_unkmulti_8018EEC0
  /* 408E0 092570 80116D70 */  .4byte D_ovl6_8018F1A0

glabel D_ovl2_80116D74
  /* 408E4 092574 80116D74 */  .4byte D_ovl6_8018F1A0
  /* 408E8 092578 80116D78 */  .4byte D_unkmulti_8018F710

glabel D_ovl2_80116D7C
  .incbin "ovl2.raw.bin", 0x408EC, 0x8

glabel D_ovl2_80116D84
  /* 408F4 092584 80116D84 */  .4byte D_unkmulti_80131B00
  /* 408F8 092588 80116D88 */  .4byte D_unkmulti_80131B00
  /* 408FC 09258C 80116D8C */  .4byte D_ovl55_80134160
  /* 40900 092590 80116D90 */  .4byte D_ovl55_80134160
  /* 40904 092594 80116D94 */  .4byte D_ovl33_801342F0
  /* 40908 092598 80116D98 */  .4byte D_ovl33_801342F0
  /* 4090C 09259C 80116D9C */  .4byte D_unkmulti_80134540

glabel D_ovl2_80116DA0
  .incbin "ovl2.raw.bin", 0x40910, 0x30

glabel D_ovl2_80116DD0
  .incbin "ovl2.raw.bin", 0x40940, 0x30
  /* 40970 092600 80116E00 */  .4byte 0x80004000
  .incbin "ovl2.raw.bin", 0x40974, 0x8
  /* 4097C 09260C 80116E0C */  .4byte func_ovl2_800F293C

glabel Fighter_FileData_ContainerList
  /* 40980 092610 80116E10 */  .4byte D_ovl2_80117810
  /* 40984 092614 80116E14 */  .4byte D_ovl2_801196F4
  /* 40988 092618 80116E18 */  .4byte D_ovl2_8011AC8C
  /* 4098C 09261C 80116E1C */  .4byte D_ovl2_8011CC78
  /* 40990 092620 80116E20 */  .4byte D_ovl2_8011E0A0
  /* 40994 092624 80116E24 */  .4byte D_ovl2_8011F520
  /* 40998 092628 80116E28 */  .4byte D_ovl2_801209D0
  /* 4099C 09262C 80116E2C */  .4byte D_ovl2_80121E98
  /* 409A0 092630 80116E30 */  .4byte D_ovl2_80123680
  /* 409A4 092634 80116E34 */  .4byte D_ovl2_80124CE4
  /* 409A8 092638 80116E38 */  .4byte D_ovl2_8012617C

glabel D_ovl2_80116E3C
  /* 409AC 09263C 80116E3C */  .4byte D_ovl2_801276A0
  /* 409B0 092640 80116E40 */  .4byte D_ovl2_80128C7C
  /* 409B4 092644 80116E44 */  .4byte D_ovl2_80118220

glabel D_ovl2_80116E48
  /* 409B8 092648 80116E48 */  .4byte D_ovl2_80118C30
  /* 409BC 09264C 80116E4C */  .4byte D_ovl2_8011A1B4
  /* 409C0 092650 80116E50 */  .4byte D_ovl2_8011B76C
  /* 409C4 092654 80116E54 */  .4byte D_ovl2_8011D698
  /* 409C8 092658 80116E58 */  .4byte D_ovl2_8011EAB0
  /* 409CC 09265C 80116E5C */  .4byte D_ovl2_8011FF90
  /* 409D0 092660 80116E60 */  .4byte D_ovl2_80121410
  /* 409D4 092664 80116E64 */  .4byte D_ovl2_80122918
  /* 409D8 092668 80116E68 */  .4byte D_ovl2_8012427C
  /* 409DC 09266C 80116E6C */  .4byte D_ovl2_8012572C
  /* 409E0 092670 80116E70 */  .4byte D_ovl2_80126BCC
  /* 409E4 092674 80116E74 */  .4byte D_ovl2_80128170

glabel D_ovl2_80116E78
  /* 409E8 092678 80116E78 */  .4byte D_ovl2_8011C24C

glabel D_ovl2_80116E7C
  .incbin "ovl2.raw.bin", 0x409EC, 0x4

glabel D_ovl2_80116E80
  .incbin "ovl2.raw.bin", 0x409F0, 0xA4
  /* 40A94 092724 80116F24 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40A98, 0x248
  /* 40CE0 092970 80117170 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40CE4, 0x8
  /* 40CEC 09297C 8011717C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40CF0, 0x8
  /* 40CF8 092988 80117188 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40CFC, 0x8
  /* 40D04 092994 80117194 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40D08, 0x8
  /* 40D10 0929A0 801171A0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40D14, 0x8
  /* 40D1C 0929AC 801171AC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40D20, 0x38
  /* 40D58 0929E8 801171E8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40D5C, 0x8
  /* 40D64 0929F4 801171F4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40D68, 0x8
  /* 40D70 092A00 80117200 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40D74, 0x8
  /* 40D7C 092A0C 8011720C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40D80, 0x8
  /* 40D88 092A18 80117218 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40D8C, 0x8
  /* 40D94 092A24 80117224 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40D98, 0x8
  /* 40DA0 092A30 80117230 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40DA4, 0x8
  /* 40DAC 092A3C 8011723C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40DB0, 0x8
  /* 40DB8 092A48 80117248 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40DBC, 0x8
  /* 40DC4 092A54 80117254 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40DC8, 0x8
  /* 40DD0 092A60 80117260 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40DD4, 0x8
  /* 40DDC 092A6C 8011726C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40DE0, 0x8
  /* 40DE8 092A78 80117278 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40DEC, 0x8
  /* 40DF4 092A84 80117284 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40DF8, 0x8
  /* 40E00 092A90 80117290 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40E04, 0x8
  /* 40E0C 092A9C 8011729C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40E10, 0x2C
  /* 40E3C 092ACC 801172CC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40E40, 0x11C
  /* 40F5C 092BEC 801173EC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40F60, 0x2C
  /* 40F8C 092C1C 8011741C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40F90, 0x2C
  /* 40FBC 092C4C 8011744C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40FC0, 0x2C
  /* 40FEC 092C7C 8011747C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x40FF0, 0x68
  /* 41058 092CE8 801174E8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4105C, 0x8
  /* 41064 092CF4 801174F4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x41068, 0x164
  /* 411CC 092E5C 8011765C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x411D0, 0x50
  /* 41220 092EB0 801176B0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x41224, 0x14
  /* 41238 092EC8 801176C8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4123C, 0x11C
  /* 41358 092FE8 801177E8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4135C, 0x8
  /* 41364 092FF4 801177F4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x41368, 0x18

glabel D_ovl2_80117810
  .incbin "ovl2.raw.bin", 0x41380, 0x28
  /* 413A8 093038 80117838 */  .4byte D_ovl2_80130E30
  /* 413AC 09303C 8011783C */  .4byte D_ovl2_80130E34
  .incbin "ovl2.raw.bin", 0x413B0, 0x4
  /* 413B4 093044 80117844 */  .4byte D_ovl2_80130E38
  .incbin "ovl2.raw.bin", 0x413B8, 0x4
  /* 413BC 09304C 8011784C */  .4byte D_ovl2_80130E3C
  /* 413C0 093050 80117850 */  .4byte D_ovl2_80130E40
  /* 413C4 093054 80117854 */  .4byte D_ovl2_80130E44
  .incbin "ovl2.raw.bin", 0x413C8, 0x4
  /* 413CC 09305C 8011785C */  .4byte D_ovl2_80130E48
  .incbin "ovl2.raw.bin", 0x413D0, 0x14
  /* 413E4 093074 80117874 */  .4byte D_ovl2_80116E80
  /* 413E8 093078 80117878 */  .4byte D_ovl1_80390EA0
  .incbin "ovl2.raw.bin", 0x413EC, 0x4
  /* 413F0 093080 80117880 */  .4byte D_ovl1_80390F84
  .incbin "ovl2.raw.bin", 0x413F4, 0xC

glabel D_ovl2_80117890
  .incbin "ovl2.raw.bin", 0x41400, 0x990

glabel D_ovl2_80118220
  .incbin "ovl2.raw.bin", 0x41D90, 0x28
  /* 41DB8 093A48 80118248 */  .4byte D_ovl2_80130E50
  /* 41DBC 093A4C 8011824C */  .4byte D_ovl2_80130E54
  /* 41DC0 093A50 80118250 */  .4byte D_ovl2_80130E58
  /* 41DC4 093A54 80118254 */  .4byte D_ovl2_80130E5C
  .incbin "ovl2.raw.bin", 0x41DC8, 0x4
  /* 41DCC 093A5C 8011825C */  .4byte D_ovl2_80130E60
  /* 41DD0 093A60 80118260 */  .4byte D_ovl2_80130E64
  /* 41DD4 093A64 80118264 */  .4byte D_ovl2_80130E68
  .incbin "ovl2.raw.bin", 0x41DD8, 0x4
  /* 41DDC 093A6C 8011826C */  .4byte D_ovl2_80130E6C
  .incbin "ovl2.raw.bin", 0x41DE0, 0x14
  /* 41DF4 093A84 80118284 */  .4byte D_ovl2_80117890
  /* 41DF8 093A88 80118288 */  .4byte D_ovl1_80390F90
  .incbin "ovl2.raw.bin", 0x41DFC, 0x4
  /* 41E00 093A90 80118290 */  .4byte D_ovl1_80391044
  .incbin "ovl2.raw.bin", 0x41E04, 0xC

glabel D_ovl2_801182A0
  .incbin "ovl2.raw.bin", 0x41E10, 0x990

glabel D_ovl2_80118C30
  .incbin "ovl2.raw.bin", 0x427A0, 0x28
  /* 427C8 094458 80118C58 */  .4byte D_ovl2_80130E70
  .incbin "ovl2.raw.bin", 0x427CC, 0x4
  /* 427D0 094460 80118C60 */  .4byte D_ovl2_80130E74
  /* 427D4 094464 80118C64 */  .4byte D_ovl2_80130E78
  .incbin "ovl2.raw.bin", 0x427D8, 0x14
  /* 427EC 09447C 80118C7C */  .4byte D_ovl2_80130E7C
  .incbin "ovl2.raw.bin", 0x427F0, 0x14
  /* 42804 094494 80118C94 */  .4byte D_ovl2_801182A0
  /* 42808 094498 80118C98 */  .4byte D_ovl1_80391050
  .incbin "ovl2.raw.bin", 0x4280C, 0x4
  /* 42810 0944A0 80118CA0 */  .4byte D_ovl1_80391104
  .incbin "ovl2.raw.bin", 0x42814, 0xC

glabel D_ovl2_80118CB0
  .incbin "ovl2.raw.bin", 0x42820, 0xA4
  /* 428C4 094554 80118D54 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x428C8, 0x248
  /* 42B10 0947A0 80118FA0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42B14, 0x8
  /* 42B1C 0947AC 80118FAC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42B20, 0x8
  /* 42B28 0947B8 80118FB8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42B2C, 0x8
  /* 42B34 0947C4 80118FC4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42B38, 0x8
  /* 42B40 0947D0 80118FD0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42B44, 0x8
  /* 42B4C 0947DC 80118FDC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42B50, 0x38
  /* 42B88 094818 80119018 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42B8C, 0x8
  /* 42B94 094824 80119024 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42B98, 0x8
  /* 42BA0 094830 80119030 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42BA4, 0x8
  /* 42BAC 09483C 8011903C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42BB0, 0x8
  /* 42BB8 094848 80119048 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42BBC, 0x8
  /* 42BC4 094854 80119054 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42BC8, 0x8
  /* 42BD0 094860 80119060 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42BD4, 0x8
  /* 42BDC 09486C 8011906C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42BE0, 0x8
  /* 42BE8 094878 80119078 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42BEC, 0x8
  /* 42BF4 094884 80119084 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42BF8, 0x8
  /* 42C00 094890 80119090 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42C04, 0x8
  /* 42C0C 09489C 8011909C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42C10, 0x8
  /* 42C18 0948A8 801190A8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42C1C, 0x8
  /* 42C24 0948B4 801190B4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42C28, 0x8
  /* 42C30 0948C0 801190C0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42C34, 0x8
  /* 42C3C 0948CC 801190CC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42C40, 0x2C
  /* 42C6C 0948FC 801190FC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42C70, 0x11C
  /* 42D8C 094A1C 8011921C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42D90, 0x2C
  /* 42DBC 094A4C 8011924C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42DC0, 0x2C
  /* 42DEC 094A7C 8011927C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42DF0, 0x2C
  /* 42E1C 094AAC 801192AC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42E20, 0x68
  /* 42E88 094B18 80119318 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42E8C, 0x8
  /* 42E94 094B24 80119324 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42E98, 0x8C
  /* 42F24 094BB4 801193B4 */
  .asciz "P"
  .balign 4
  .incbin "ovl2.raw.bin", 0x42F28, 0xD4
  /* 42FFC 094C8C 8011948C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x43000, 0x8C
  /* 4308C 094D1C 8011951C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x43090, 0x11C
  /* 431AC 094E3C 8011963C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x431B0, 0x14
  /* 431C4 094E54 80119654 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x431C8, 0x14
  /* 431DC 094E6C 8011966C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x431E0, 0x14
  /* 431F4 094E84 80119684 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x431F8, 0x8
  /* 43200 094E90 80119690 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x43204, 0x60

glabel D_ovl2_801196F4
  .incbin "ovl2.raw.bin", 0x43264, 0x28
  /* 4328C 094F1C 8011971C */  .4byte D_ovl2_80130E90
  /* 43290 094F20 80119720 */  .4byte D_ovl2_80130E94
  .incbin "ovl2.raw.bin", 0x43294, 0x4
  /* 43298 094F28 80119728 */  .4byte D_ovl2_80130E98
  .incbin "ovl2.raw.bin", 0x4329C, 0x4
  /* 432A0 094F30 80119730 */  .4byte D_ovl2_80130E9C
  /* 432A4 094F34 80119734 */  .4byte D_ovl2_80130EA0
  /* 432A8 094F38 80119738 */  .4byte D_ovl2_80130EA4
  /* 432AC 094F3C 8011973C */  .4byte D_ovl2_80130EA8
  /* 432B0 094F40 80119740 */  .4byte D_ovl2_80130EAC
  .incbin "ovl2.raw.bin", 0x432B4, 0x14
  /* 432C8 094F58 80119758 */  .4byte D_ovl2_80118CB0
  /* 432CC 094F5C 8011975C */  .4byte D_ovl1_80391154
  .incbin "ovl2.raw.bin", 0x432D0, 0x4
  /* 432D4 094F64 80119764 */  .4byte D_ovl1_80391274
  .incbin "ovl2.raw.bin", 0x432D8, 0x8

glabel D_ovl2_80119770
  .incbin "ovl2.raw.bin", 0x432E0, 0xA44

glabel D_ovl2_8011A1B4
  .incbin "ovl2.raw.bin", 0x43D24, 0x28
  /* 43D4C 0959DC 8011A1DC */  .4byte D_ovl2_80130EB0
  .incbin "ovl2.raw.bin", 0x43D50, 0x4
  /* 43D54 0959E4 8011A1E4 */  .4byte D_ovl2_80130EB4
  /* 43D58 0959E8 8011A1E8 */  .4byte D_ovl2_80130EB8
  .incbin "ovl2.raw.bin", 0x43D5C, 0x14
  /* 43D70 095A00 8011A200 */  .4byte D_ovl2_80130EBC
  .incbin "ovl2.raw.bin", 0x43D74, 0x14
  /* 43D88 095A18 8011A218 */  .4byte D_ovl2_80119770
  /* 43D8C 095A1C 8011A21C */  .4byte D_ovl1_80391280
  .incbin "ovl2.raw.bin", 0x43D90, 0x4
  /* 43D94 095A24 8011A224 */  .4byte D_ovl1_80391334
  .incbin "ovl2.raw.bin", 0x43D98, 0x8

glabel D_ovl2_8011A230
  .incbin "ovl2.raw.bin", 0x43DA0, 0xA4
  /* 43E44 095AD4 8011A2D4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x43E48, 0x248
  /* 44090 095D20 8011A520 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x44094, 0x8
  /* 4409C 095D2C 8011A52C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x440A0, 0x8
  /* 440A8 095D38 8011A538 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x440AC, 0x8
  /* 440B4 095D44 8011A544 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x440B8, 0x8
  /* 440C0 095D50 8011A550 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x440C4, 0x8
  /* 440CC 095D5C 8011A55C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x440D0, 0x38
  /* 44108 095D98 8011A598 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4410C, 0x8
  /* 44114 095DA4 8011A5A4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x44118, 0x8
  /* 44120 095DB0 8011A5B0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x44124, 0x8
  /* 4412C 095DBC 8011A5BC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x44130, 0x8
  /* 44138 095DC8 8011A5C8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4413C, 0x8
  /* 44144 095DD4 8011A5D4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x44148, 0x8
  /* 44150 095DE0 8011A5E0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x44154, 0x8
  /* 4415C 095DEC 8011A5EC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x44160, 0x8
  /* 44168 095DF8 8011A5F8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4416C, 0x8
  /* 44174 095E04 8011A604 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x44178, 0x8
  /* 44180 095E10 8011A610 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x44184, 0x8
  /* 4418C 095E1C 8011A61C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x44190, 0x8
  /* 44198 095E28 8011A628 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4419C, 0x8
  /* 441A4 095E34 8011A634 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x441A8, 0x8
  /* 441B0 095E40 8011A640 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x441B4, 0x8
  /* 441BC 095E4C 8011A64C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x441C0, 0x2C
  /* 441EC 095E7C 8011A67C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x441F0, 0x11C
  /* 4430C 095F9C 8011A79C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x44310, 0x2C
  /* 4433C 095FCC 8011A7CC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x44340, 0x2C
  /* 4436C 095FFC 8011A7FC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x44370, 0x2C
  /* 4439C 09602C 8011A82C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x443A0, 0x68
  /* 44408 096098 8011A898 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4440C, 0x8
  /* 44414 0960A4 8011A8A4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x44418, 0x164
  /* 4457C 09620C 8011AA0C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x44580, 0x27C

glabel D_ovl2_8011AC8C
  .incbin "ovl2.raw.bin", 0x447FC, 0x28
  /* 44824 0964B4 8011ACB4 */  .4byte D_ovl2_80130ED0
  /* 44828 0964B8 8011ACB8 */  .4byte D_ovl2_80130ED4
  .incbin "ovl2.raw.bin", 0x4482C, 0x4
  /* 44830 0964C0 8011ACC0 */  .4byte D_ovl2_80130ED8
  .incbin "ovl2.raw.bin", 0x44834, 0x8
  /* 4483C 0964CC 8011ACCC */  .4byte D_ovl2_80130EDC
  .incbin "ovl2.raw.bin", 0x44840, 0x8
  /* 44848 0964D8 8011ACD8 */  .4byte D_ovl2_80130EE0
  .incbin "ovl2.raw.bin", 0x4484C, 0x14
  /* 44860 0964F0 8011ACF0 */  .4byte D_ovl2_8011A230
  /* 44864 0964F4 8011ACF4 */  .4byte D_ovl1_8039135C
  .incbin "ovl2.raw.bin", 0x44868, 0x4
  /* 4486C 0964FC 8011ACFC */  .4byte D_ovl1_80391410
  .incbin "ovl2.raw.bin", 0x44870, 0x10

glabel D_ovl2_8011AD10
  .incbin "ovl2.raw.bin", 0x44880, 0xA5C

glabel D_ovl2_8011B76C
  .incbin "ovl2.raw.bin", 0x452DC, 0x28
  /* 45304 096F94 8011B794 */  .4byte D_ovl2_80130EF0
  .incbin "ovl2.raw.bin", 0x45308, 0x4
  /* 4530C 096F9C 8011B79C */  .4byte D_ovl2_80130EF4
  /* 45310 096FA0 8011B7A0 */  .4byte D_ovl2_80130EF8
  .incbin "ovl2.raw.bin", 0x45314, 0x14
  /* 45328 096FB8 8011B7B8 */  .4byte D_ovl2_80130EFC
  .incbin "ovl2.raw.bin", 0x4532C, 0x14
  /* 45340 096FD0 8011B7D0 */  .4byte D_ovl2_8011AD10
  /* 45344 096FD4 8011B7D4 */  .4byte D_ovl1_80391420
  .incbin "ovl2.raw.bin", 0x45348, 0x4
  /* 4534C 096FDC 8011B7DC */  .4byte D_ovl1_803914D4
  .incbin "ovl2.raw.bin", 0x45350, 0x10

glabel D_ovl2_8011B7F0
  .incbin "ovl2.raw.bin", 0x45360, 0xA5C

glabel D_ovl2_8011C24C
  .incbin "ovl2.raw.bin", 0x45DBC, 0x28
  /* 45DE4 097A74 8011C274 */  .4byte D_ovl2_80130F10
  .incbin "ovl2.raw.bin", 0x45DE8, 0x4
  /* 45DEC 097A7C 8011C27C */  .4byte D_ovl2_80130F14
  /* 45DF0 097A80 8011C280 */  .4byte D_ovl2_80130F18
  .incbin "ovl2.raw.bin", 0x45DF4, 0x8
  /* 45DFC 097A8C 8011C28C */  .4byte D_ovl2_80130F1C
  .incbin "ovl2.raw.bin", 0x45E00, 0x8
  /* 45E08 097A98 8011C298 */  .4byte D_ovl2_80130F20
  .incbin "ovl2.raw.bin", 0x45E0C, 0x14
  /* 45E20 097AB0 8011C2B0 */  .4byte D_ovl2_8011B7F0
  /* 45E24 097AB4 8011C2B4 */  .4byte D_ovl1_803914E0
  .incbin "ovl2.raw.bin", 0x45E28, 0x4
  /* 45E2C 097ABC 8011C2BC */  .4byte D_ovl1_803914EC
  .incbin "ovl2.raw.bin", 0x45E30, 0x10

glabel D_ovl2_8011C2D0
  .incbin "ovl2.raw.bin", 0x45E40, 0xA4
  /* 45EE4 097B74 8011C374 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x45EE8, 0x248
  /* 46130 097DC0 8011C5C0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x46134, 0x8
  /* 4613C 097DCC 8011C5CC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x46140, 0x8
  /* 46148 097DD8 8011C5D8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4614C, 0x8
  /* 46154 097DE4 8011C5E4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x46158, 0x8
  /* 46160 097DF0 8011C5F0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x46164, 0x8
  /* 4616C 097DFC 8011C5FC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x46170, 0x38
  /* 461A8 097E38 8011C638 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x461AC, 0x8
  /* 461B4 097E44 8011C644 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x461B8, 0x8
  /* 461C0 097E50 8011C650 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x461C4, 0x8
  /* 461CC 097E5C 8011C65C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x461D0, 0x8
  /* 461D8 097E68 8011C668 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x461DC, 0x8
  /* 461E4 097E74 8011C674 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x461E8, 0x8
  /* 461F0 097E80 8011C680 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x461F4, 0x8
  /* 461FC 097E8C 8011C68C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x46200, 0x8
  /* 46208 097E98 8011C698 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4620C, 0x8
  /* 46214 097EA4 8011C6A4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x46218, 0x8
  /* 46220 097EB0 8011C6B0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x46224, 0x8
  /* 4622C 097EBC 8011C6BC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x46230, 0x8
  /* 46238 097EC8 8011C6C8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4623C, 0x8
  /* 46244 097ED4 8011C6D4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x46248, 0x8
  /* 46250 097EE0 8011C6E0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x46254, 0x8
  /* 4625C 097EEC 8011C6EC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x46260, 0x2C
  /* 4628C 097F1C 8011C71C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x46290, 0x11C
  /* 463AC 09803C 8011C83C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x463B0, 0x2C
  /* 463DC 09806C 8011C86C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x463E0, 0x2C
  /* 4640C 09809C 8011C89C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x46410, 0x2C
  /* 4643C 0980CC 8011C8CC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x46440, 0x68
  /* 464A8 098138 8011C938 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x464AC, 0x8
  /* 464B4 098144 8011C944 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x464B8, 0x164
  /* 4661C 0982AC 8011CAAC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x46620, 0x1A0
  /* 467C0 098450 8011CC50 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x467C4, 0x8
  /* 467CC 09845C 8011CC5C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x467D0, 0x18

glabel D_ovl2_8011CC78
  .incbin "ovl2.raw.bin", 0x467E8, 0x28
  /* 46810 0984A0 8011CCA0 */  .4byte D_ovl2_80130F30
  /* 46814 0984A4 8011CCA4 */  .4byte D_ovl2_80130F34
  .incbin "ovl2.raw.bin", 0x46818, 0x4
  /* 4681C 0984AC 8011CCAC */  .4byte D_ovl2_80130F38
  .incbin "ovl2.raw.bin", 0x46820, 0x4
  /* 46824 0984B4 8011CCB4 */  .4byte D_ovl2_80130F3C
  /* 46828 0984B8 8011CCB8 */  .4byte D_ovl2_80130F40
  /* 4682C 0984BC 8011CCBC */  .4byte D_ovl2_80130F44
  .incbin "ovl2.raw.bin", 0x46830, 0x4
  /* 46834 0984C4 8011CCC4 */  .4byte D_ovl2_80130F48
  .incbin "ovl2.raw.bin", 0x46838, 0x14
  /* 4684C 0984DC 8011CCDC */  .4byte D_ovl2_8011C2D0
  /* 46850 0984E0 8011CCE0 */  .4byte D_ovl1_80391580
  .incbin "ovl2.raw.bin", 0x46854, 0x4
  /* 46858 0984E8 8011CCE8 */  .4byte D_ovl1_80391634
  .incbin "ovl2.raw.bin", 0x4685C, 0x4

glabel D_ovl2_8011CCF0
  .incbin "ovl2.raw.bin", 0x46860, 0x9A8

glabel D_ovl2_8011D698
  .incbin "ovl2.raw.bin", 0x47208, 0x28
  /* 47230 098EC0 8011D6C0 */  .4byte D_ovl2_80130F50
  .incbin "ovl2.raw.bin", 0x47234, 0x4
  /* 47238 098EC8 8011D6C8 */  .4byte D_ovl2_80130F54
  /* 4723C 098ECC 8011D6CC */  .4byte D_ovl2_80130F58
  .incbin "ovl2.raw.bin", 0x47240, 0x14
  /* 47254 098EE4 8011D6E4 */  .4byte D_ovl2_80130F5C
  .incbin "ovl2.raw.bin", 0x47258, 0x14
  /* 4726C 098EFC 8011D6FC */  .4byte D_ovl2_8011CCF0
  /* 47270 098F00 8011D700 */  .4byte D_ovl1_80391640
  .incbin "ovl2.raw.bin", 0x47274, 0x4
  /* 47278 098F08 8011D708 */  .4byte D_ovl1_803916F4
  .incbin "ovl2.raw.bin", 0x4727C, 0x4

glabel D_ovl2_8011D710
  .incbin "ovl2.raw.bin", 0x47280, 0xA4
  /* 47324 098FB4 8011D7B4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47328, 0x248
  /* 47570 099200 8011DA00 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47574, 0x8
  /* 4757C 09920C 8011DA0C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47580, 0x8
  /* 47588 099218 8011DA18 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4758C, 0x8
  /* 47594 099224 8011DA24 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47598, 0x8
  /* 475A0 099230 8011DA30 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x475A4, 0x8
  /* 475AC 09923C 8011DA3C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x475B0, 0x38
  /* 475E8 099278 8011DA78 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x475EC, 0x8
  /* 475F4 099284 8011DA84 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x475F8, 0x8
  /* 47600 099290 8011DA90 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47604, 0x8
  /* 4760C 09929C 8011DA9C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47610, 0x8
  /* 47618 0992A8 8011DAA8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4761C, 0x8
  /* 47624 0992B4 8011DAB4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47628, 0x8
  /* 47630 0992C0 8011DAC0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47634, 0x8
  /* 4763C 0992CC 8011DACC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47640, 0x8
  /* 47648 0992D8 8011DAD8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4764C, 0x8
  /* 47654 0992E4 8011DAE4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47658, 0x8
  /* 47660 0992F0 8011DAF0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47664, 0x8
  /* 4766C 0992FC 8011DAFC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47670, 0x8
  /* 47678 099308 8011DB08 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4767C, 0x8
  /* 47684 099314 8011DB14 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47688, 0x8
  /* 47690 099320 8011DB20 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47694, 0x8
  /* 4769C 09932C 8011DB2C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x476A0, 0x2C
  /* 476CC 09935C 8011DB5C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x476D0, 0x11C
  /* 477EC 09947C 8011DC7C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x477F0, 0x2C
  /* 4781C 0994AC 8011DCAC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47820, 0x2C
  /* 4784C 0994DC 8011DCDC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47850, 0x2C
  /* 4787C 09950C 8011DD0C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47880, 0x68
  /* 478E8 099578 8011DD78 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x478EC, 0x8
  /* 478F4 099584 8011DD84 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x478F8, 0x164
  /* 47A5C 0996EC 8011DEEC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47A60, 0x50
  /* 47AB0 099740 8011DF40 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47AB4, 0x134
  /* 47BE8 099878 8011E078 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47BEC, 0x8
  /* 47BF4 099884 8011E084 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x47BF8, 0x18

glabel D_ovl2_8011E0A0
  .incbin "ovl2.raw.bin", 0x47C10, 0x28
  /* 47C38 0998C8 8011E0C8 */  .4byte D_ovl2_80130F70
  /* 47C3C 0998CC 8011E0CC */  .4byte D_ovl2_80130F74
  .incbin "ovl2.raw.bin", 0x47C40, 0x4
  /* 47C44 0998D4 8011E0D4 */  .4byte D_ovl2_80130F78
  .incbin "ovl2.raw.bin", 0x47C48, 0x4
  /* 47C4C 0998DC 8011E0DC */  .4byte D_ovl2_80130F7C
  /* 47C50 0998E0 8011E0E0 */  .4byte D_ovl2_80130F80
  /* 47C54 0998E4 8011E0E4 */  .4byte D_ovl2_80130F84
  .incbin "ovl2.raw.bin", 0x47C58, 0x4
  /* 47C5C 0998EC 8011E0EC */  .4byte D_ovl2_80130F88
  .incbin "ovl2.raw.bin", 0x47C60, 0x14
  /* 47C74 099904 8011E104 */  .4byte D_ovl2_8011D710
  /* 47C78 099908 8011E108 */  .4byte D_ovl1_803917BC
  .incbin "ovl2.raw.bin", 0x47C7C, 0x4
  /* 47C80 099910 8011E110 */  .4byte D_ovl1_80391870
  .incbin "ovl2.raw.bin", 0x47C84, 0xC

glabel D_ovl2_8011E120
  .incbin "ovl2.raw.bin", 0x47C90, 0x990

glabel D_ovl2_8011EAB0
  .incbin "ovl2.raw.bin", 0x48620, 0x28
  /* 48648 09A2D8 8011EAD8 */  .4byte D_ovl2_80130F90
  .incbin "ovl2.raw.bin", 0x4864C, 0x4
  /* 48650 09A2E0 8011EAE0 */  .4byte D_ovl2_80130F94
  /* 48654 09A2E4 8011EAE4 */  .4byte D_ovl2_80130F98
  .incbin "ovl2.raw.bin", 0x48658, 0x14
  /* 4866C 09A2FC 8011EAFC */  .4byte D_ovl2_80130F9C
  .incbin "ovl2.raw.bin", 0x48670, 0x14
  /* 48684 09A314 8011EB14 */  .4byte D_ovl2_8011E120
  /* 48688 09A318 8011EB18 */  .4byte D_ovl1_80391880
  .incbin "ovl2.raw.bin", 0x4868C, 0x4
  /* 48690 09A320 8011EB20 */  .4byte D_ovl1_8039188C
  .incbin "ovl2.raw.bin", 0x48694, 0xC

glabel D_ovl2_8011EB30
  .incbin "ovl2.raw.bin", 0x486A0, 0xA4
  /* 48744 09A3D4 8011EBD4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48748, 0x248
  /* 48990 09A620 8011EE20 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48994, 0x8
  /* 4899C 09A62C 8011EE2C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x489A0, 0x8
  /* 489A8 09A638 8011EE38 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x489AC, 0x8
  /* 489B4 09A644 8011EE44 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x489B8, 0x8
  /* 489C0 09A650 8011EE50 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x489C4, 0x8
  /* 489CC 09A65C 8011EE5C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x489D0, 0x38
  /* 48A08 09A698 8011EE98 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48A0C, 0x8
  /* 48A14 09A6A4 8011EEA4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48A18, 0x8
  /* 48A20 09A6B0 8011EEB0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48A24, 0x8
  /* 48A2C 09A6BC 8011EEBC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48A30, 0x8
  /* 48A38 09A6C8 8011EEC8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48A3C, 0x8
  /* 48A44 09A6D4 8011EED4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48A48, 0x8
  /* 48A50 09A6E0 8011EEE0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48A54, 0x8
  /* 48A5C 09A6EC 8011EEEC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48A60, 0x8
  /* 48A68 09A6F8 8011EEF8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48A6C, 0x8
  /* 48A74 09A704 8011EF04 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48A78, 0x8
  /* 48A80 09A710 8011EF10 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48A84, 0x8
  /* 48A8C 09A71C 8011EF1C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48A90, 0x8
  /* 48A98 09A728 8011EF28 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48A9C, 0x8
  /* 48AA4 09A734 8011EF34 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48AA8, 0x8
  /* 48AB0 09A740 8011EF40 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48AB4, 0x8
  /* 48ABC 09A74C 8011EF4C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48AC0, 0x2C
  /* 48AEC 09A77C 8011EF7C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48AF0, 0x11C
  /* 48C0C 09A89C 8011F09C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48C10, 0x2C
  /* 48C3C 09A8CC 8011F0CC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48C40, 0x2C
  /* 48C6C 09A8FC 8011F0FC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48C70, 0x2C
  /* 48C9C 09A92C 8011F12C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48CA0, 0x68
  /* 48D08 09A998 8011F198 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48D0C, 0x8
  /* 48D14 09A9A4 8011F1A4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48D18, 0x164
  /* 48E7C 09AB0C 8011F30C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x48E80, 0x210

glabel D_ovl2_8011F520
  .incbin "ovl2.raw.bin", 0x49090, 0x28
  /* 490B8 09AD48 8011F548 */  .4byte D_ovl2_80130FB0
  /* 490BC 09AD4C 8011F54C */  .4byte D_ovl2_80130FB4
  .incbin "ovl2.raw.bin", 0x490C0, 0x4
  /* 490C4 09AD54 8011F554 */  .4byte D_ovl2_80130FB8
  .incbin "ovl2.raw.bin", 0x490C8, 0x4
  /* 490CC 09AD5C 8011F55C */  .4byte D_ovl2_80130FBC
  /* 490D0 09AD60 8011F560 */  .4byte D_ovl2_80130FC0
  /* 490D4 09AD64 8011F564 */  .4byte D_ovl2_80130FC4
  .incbin "ovl2.raw.bin", 0x490D8, 0x4
  /* 490DC 09AD6C 8011F56C */  .4byte D_ovl2_80130FC8
  .incbin "ovl2.raw.bin", 0x490E0, 0x14
  /* 490F4 09AD84 8011F584 */  .4byte D_ovl2_8011EB30
  /* 490F8 09AD88 8011F588 */  .4byte D_ovl1_80391A00
  .incbin "ovl2.raw.bin", 0x490FC, 0x4
  /* 49100 09AD90 8011F590 */  .4byte D_ovl1_80391AC0
  .incbin "ovl2.raw.bin", 0x49104, 0xC

glabel D_ovl2_8011F5A0
  .incbin "ovl2.raw.bin", 0x49110, 0x9F0

glabel D_ovl2_8011FF90
  .incbin "ovl2.raw.bin", 0x49B00, 0x28
  /* 49B28 09B7B8 8011FFB8 */  .4byte D_ovl2_80130FD0
  .incbin "ovl2.raw.bin", 0x49B2C, 0x4
  /* 49B30 09B7C0 8011FFC0 */  .4byte D_ovl2_80130FD4
  /* 49B34 09B7C4 8011FFC4 */  .4byte D_ovl2_80130FD8
  .incbin "ovl2.raw.bin", 0x49B38, 0x14
  /* 49B4C 09B7DC 8011FFDC */  .4byte D_ovl2_80130FDC
  .incbin "ovl2.raw.bin", 0x49B50, 0x14
  /* 49B64 09B7F4 8011FFF4 */  .4byte D_ovl2_8011F5A0
  /* 49B68 09B7F8 8011FFF8 */  .4byte D_ovl1_80391AD0
  .incbin "ovl2.raw.bin", 0x49B6C, 0x4
  /* 49B70 09B800 80120000 */  .4byte D_ovl1_80391B84
  .incbin "ovl2.raw.bin", 0x49B74, 0xC

glabel D_ovl2_80120010
  .incbin "ovl2.raw.bin", 0x49B80, 0xA4
  /* 49C24 09B8B4 801200B4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x49C28, 0x248
  /* 49E70 09BB00 80120300 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x49E74, 0x8
  /* 49E7C 09BB0C 8012030C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x49E80, 0x8
  /* 49E88 09BB18 80120318 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x49E8C, 0x8
  /* 49E94 09BB24 80120324 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x49E98, 0x8
  /* 49EA0 09BB30 80120330 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x49EA4, 0x8
  /* 49EAC 09BB3C 8012033C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x49EB0, 0x11C
  /* 49FCC 09BC5C 8012045C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x49FD0, 0x218
  /* 4A1E8 09BE78 80120678 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4A1EC, 0x8
  /* 4A1F4 09BE84 80120684 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4A1F8, 0x164
  /* 4A35C 09BFEC 801207EC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4A360, 0x17C
  /* 4A4DC 09C16C 8012096C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4A4E0, 0x14
  /* 4A4F4 09C184 80120984 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4A4F8, 0x48

glabel D_ovl2_801209D0
  .incbin "ovl2.raw.bin", 0x4A540, 0x28
  /* 4A568 09C1F8 801209F8 */  .4byte D_ovl2_80130FF0
  /* 4A56C 09C1FC 801209FC */  .4byte D_ovl2_80130FF4
  .incbin "ovl2.raw.bin", 0x4A570, 0x4
  /* 4A574 09C204 80120A04 */  .4byte D_ovl2_80130FF8
  .incbin "ovl2.raw.bin", 0x4A578, 0x8
  /* 4A580 09C210 80120A10 */  .4byte D_ovl2_80130FFC
  /* 4A584 09C214 80120A14 */  .4byte D_ovl2_80131000
  .incbin "ovl2.raw.bin", 0x4A588, 0x4
  /* 4A58C 09C21C 80120A1C */  .4byte D_ovl2_80131004
  .incbin "ovl2.raw.bin", 0x4A590, 0x14
  /* 4A5A4 09C234 80120A34 */  .4byte D_ovl2_80120010
  /* 4A5A8 09C238 80120A38 */  .4byte D_ovl1_80391CA0
  .incbin "ovl2.raw.bin", 0x4A5AC, 0x4
  /* 4A5B0 09C240 80120A40 */  .4byte D_ovl1_80391D84
  .incbin "ovl2.raw.bin", 0x4A5B4, 0xC

glabel D_ovl2_80120A50
  .incbin "ovl2.raw.bin", 0x4A5C0, 0x9C0

glabel D_ovl2_80121410
  .incbin "ovl2.raw.bin", 0x4AF80, 0x28
  /* 4AFA8 09CC38 80121438 */  .4byte D_ovl2_80131010
  .incbin "ovl2.raw.bin", 0x4AFAC, 0x4
  /* 4AFB0 09CC40 80121440 */  .4byte D_ovl2_80131014
  /* 4AFB4 09CC44 80121444 */  .4byte D_ovl2_80131018
  .incbin "ovl2.raw.bin", 0x4AFB8, 0x14
  /* 4AFCC 09CC5C 8012145C */  .4byte D_ovl2_8013101C
  .incbin "ovl2.raw.bin", 0x4AFD0, 0x14
  /* 4AFE4 09CC74 80121474 */  .4byte D_ovl2_80120A50
  /* 4AFE8 09CC78 80121478 */  .4byte D_ovl1_80391D90
  .incbin "ovl2.raw.bin", 0x4AFEC, 0x4
  /* 4AFF0 09CC80 80121480 */  .4byte D_ovl1_80391E44
  .incbin "ovl2.raw.bin", 0x4AFF4, 0xC

glabel D_ovl2_80121490
  .incbin "ovl2.raw.bin", 0x4B000, 0xA4
  /* 4B0A4 09CD34 80121534 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B0A8, 0x248
  /* 4B2F0 09CF80 80121780 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B2F4, 0x8
  /* 4B2FC 09CF8C 8012178C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B300, 0x8
  /* 4B308 09CF98 80121798 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B30C, 0x8
  /* 4B314 09CFA4 801217A4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B318, 0x8
  /* 4B320 09CFB0 801217B0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B324, 0x8
  /* 4B32C 09CFBC 801217BC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B330, 0x38
  /* 4B368 09CFF8 801217F8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B36C, 0x8
  /* 4B374 09D004 80121804 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B378, 0x8
  /* 4B380 09D010 80121810 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B384, 0x8
  /* 4B38C 09D01C 8012181C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B390, 0x8
  /* 4B398 09D028 80121828 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B39C, 0x8
  /* 4B3A4 09D034 80121834 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B3A8, 0x8
  /* 4B3B0 09D040 80121840 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B3B4, 0x8
  /* 4B3BC 09D04C 8012184C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B3C0, 0x8
  /* 4B3C8 09D058 80121858 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B3CC, 0x8
  /* 4B3D4 09D064 80121864 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B3D8, 0x8
  /* 4B3E0 09D070 80121870 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B3E4, 0x8
  /* 4B3EC 09D07C 8012187C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B3F0, 0x8
  /* 4B3F8 09D088 80121888 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B3FC, 0x8
  /* 4B404 09D094 80121894 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B408, 0x8
  /* 4B410 09D0A0 801218A0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B414, 0x8
  /* 4B41C 09D0AC 801218AC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B420, 0x2C
  /* 4B44C 09D0DC 801218DC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B450, 0x11C
  /* 4B56C 09D1FC 801219FC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B570, 0x2C
  /* 4B59C 09D22C 80121A2C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B5A0, 0x2C
  /* 4B5CC 09D25C 80121A5C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B5D0, 0x2C
  /* 4B5FC 09D28C 80121A8C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B600, 0x68
  /* 4B668 09D2F8 80121AF8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B66C, 0x8
  /* 4B674 09D304 80121B04 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B678, 0x164
  /* 4B7DC 09D46C 80121C6C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B7E0, 0x74
  /* 4B854 09D4E4 80121CE4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B858, 0x14
  /* 4B86C 09D4FC 80121CFC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B870, 0x14
  /* 4B884 09D514 80121D14 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B888, 0x8
  /* 4B890 09D520 80121D20 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B894, 0x98
  /* 4B92C 09D5BC 80121DBC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B930, 0x8
  /* 4B938 09D5C8 80121DC8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B93C, 0x8
  /* 4B944 09D5D4 80121DD4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B948, 0x8
  /* 4B950 09D5E0 80121DE0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B954, 0x38
  /* 4B98C 09D61C 80121E1C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B990, 0x14
  /* 4B9A4 09D634 80121E34 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B9A8, 0x8
  /* 4B9B0 09D640 80121E40 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B9B4, 0x8
  /* 4B9BC 09D64C 80121E4C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B9C0, 0x8
  /* 4B9C8 09D658 80121E58 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B9CC, 0x8
  /* 4B9D4 09D664 80121E64 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B9D8, 0x8
  /* 4B9E0 09D670 80121E70 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B9E4, 0x14
  /* 4B9F8 09D688 80121E88 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4B9FC, 0x8
  /* 4BA04 09D694 80121E94 */
  .asciz "@"
  .balign 4

glabel D_ovl2_80121E98
  .incbin "ovl2.raw.bin", 0x4BA08, 0x28
  /* 4BA30 09D6C0 80121EC0 */  .4byte D_ovl2_80131030
  /* 4BA34 09D6C4 80121EC4 */  .4byte D_ovl2_80131034
  .incbin "ovl2.raw.bin", 0x4BA38, 0x4
  /* 4BA3C 09D6CC 80121ECC */  .4byte D_ovl2_80131038
  .incbin "ovl2.raw.bin", 0x4BA40, 0x8
  /* 4BA48 09D6D8 80121ED8 */  .4byte D_ovl2_8013103C
  /* 4BA4C 09D6DC 80121EDC */  .4byte D_ovl2_80131040
  .incbin "ovl2.raw.bin", 0x4BA50, 0x4
  /* 4BA54 09D6E4 80121EE4 */  .4byte D_ovl2_80131044
  .incbin "ovl2.raw.bin", 0x4BA58, 0x14
  /* 4BA6C 09D6FC 80121EFC */  .4byte D_ovl2_80121490
  /* 4BA70 09D700 80121F00 */  .4byte D_ovl1_80391E90
  .incbin "ovl2.raw.bin", 0x4BA74, 0x4
  /* 4BA78 09D708 80121F08 */  .4byte D_ovl1_80391F44
  .incbin "ovl2.raw.bin", 0x4BA7C, 0x4

glabel D_ovl2_80121F10
  .incbin "ovl2.raw.bin", 0x4BA80, 0xA08

glabel D_ovl2_80122918
  .incbin "ovl2.raw.bin", 0x4C488, 0x28
  /* 4C4B0 09E140 80122940 */  .4byte D_ovl2_80131050
  .incbin "ovl2.raw.bin", 0x4C4B4, 0x4
  /* 4C4B8 09E148 80122948 */  .4byte D_ovl2_80131054
  /* 4C4BC 09E14C 8012294C */  .4byte D_ovl2_80131058
  .incbin "ovl2.raw.bin", 0x4C4C0, 0x14
  /* 4C4D4 09E164 80122964 */  .4byte D_ovl2_8013105C
  .incbin "ovl2.raw.bin", 0x4C4D8, 0x14
  /* 4C4EC 09E17C 8012297C */  .4byte D_ovl2_80121F10
  /* 4C4F0 09E180 80122980 */  .4byte D_ovl1_80391F50
  .incbin "ovl2.raw.bin", 0x4C4F4, 0x4
  /* 4C4F8 09E188 80122988 */  .4byte D_ovl1_80392004
  .incbin "ovl2.raw.bin", 0x4C4FC, 0x4

glabel D_ovl2_80122990
  .incbin "ovl2.raw.bin", 0x4C500, 0xA4
  /* 4C5A4 09E234 80122A34 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C5A8, 0x248
  /* 4C7F0 09E480 80122C80 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C7F4, 0x8
  /* 4C7FC 09E48C 80122C8C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C800, 0x8
  /* 4C808 09E498 80122C98 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C80C, 0x8
  /* 4C814 09E4A4 80122CA4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C818, 0x8
  /* 4C820 09E4B0 80122CB0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C824, 0x8
  /* 4C82C 09E4BC 80122CBC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C830, 0x38
  /* 4C868 09E4F8 80122CF8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C86C, 0x8
  /* 4C874 09E504 80122D04 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C878, 0x8
  /* 4C880 09E510 80122D10 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C884, 0x8
  /* 4C88C 09E51C 80122D1C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C890, 0x8
  /* 4C898 09E528 80122D28 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C89C, 0x8
  /* 4C8A4 09E534 80122D34 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C8A8, 0x8
  /* 4C8B0 09E540 80122D40 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C8B4, 0x8
  /* 4C8BC 09E54C 80122D4C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C8C0, 0x8
  /* 4C8C8 09E558 80122D58 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C8CC, 0x8
  /* 4C8D4 09E564 80122D64 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C8D8, 0x8
  /* 4C8E0 09E570 80122D70 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C8E4, 0x8
  /* 4C8EC 09E57C 80122D7C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C8F0, 0x20
  /* 4C910 09E5A0 80122DA0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C914, 0x8
  /* 4C91C 09E5AC 80122DAC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C920, 0x2C
  /* 4C94C 09E5DC 80122DDC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4C950, 0x110
  /* 4CA60 09E6F0 80122EF0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4CA64, 0x8
  /* 4CA6C 09E6FC 80122EFC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4CA70, 0x20
  /* 4CA90 09E720 80122F20 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4CA94, 0x8
  /* 4CA9C 09E72C 80122F2C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4CAA0, 0x20
  /* 4CAC0 09E750 80122F50 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4CAC4, 0x8
  /* 4CACC 09E75C 80122F5C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4CAD0, 0x20
  /* 4CAF0 09E780 80122F80 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4CAF4, 0x8
  /* 4CAFC 09E78C 80122F8C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4CB00, 0x68
  /* 4CB68 09E7F8 80122FF8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4CB6C, 0x8
  /* 4CB74 09E804 80123004 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4CB78, 0x8C
  /* 4CC04 09E894 80123094 */
  .asciz "P"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4CC08, 0xD4
  /* 4CCDC 09E96C 8012316C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4CCE0, 0x8C
  /* 4CD6C 09E9FC 801231FC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4CD70, 0x11C
  /* 4CE8C 09EB1C 8012331C */
  .asciz "P"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4CE90, 0x8
  /* 4CE98 09EB28 80123328 */
  .asciz "P"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4CE9C, 0x8
  /* 4CEA4 09EB34 80123334 */
  .asciz "P"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4CEA8, 0x134
  /* 4CFDC 09EC6C 8012346C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4CFE0, 0x8
  /* 4CFE8 09EC78 80123478 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4CFEC, 0x8
  /* 4CFF4 09EC84 80123484 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4CFF8, 0x8
  /* 4D000 09EC90 80123490 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4D004, 0x8
  /* 4D00C 09EC9C 8012349C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4D010, 0x8
  /* 4D018 09ECA8 801234A8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4D01C, 0x8
  /* 4D024 09ECB4 801234B4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4D028, 0x8
  /* 4D030 09ECC0 801234C0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4D034, 0x8
  /* 4D03C 09ECCC 801234CC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4D040, 0x8
  /* 4D048 09ECD8 801234D8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4D04C, 0x8
  /* 4D054 09ECE4 801234E4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4D058, 0x14
  /* 4D06C 09ECFC 801234FC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4D070, 0x38
  /* 4D0A8 09ED38 80123538 */
  .asciz "L"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4D0AC, 0x5C
  /* 4D108 09ED98 80123598 */
  .asciz "L"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4D10C, 0x74
  /* 4D180 09EE10 80123610 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4D184, 0x14
  /* 4D198 09EE28 80123628 */
  .asciz "P"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4D19C, 0x54

glabel D_ovl2_80123680
  .incbin "ovl2.raw.bin", 0x4D1F0, 0x28
  /* 4D218 09EEA8 801236A8 */  .4byte D_ovl2_80131070
  /* 4D21C 09EEAC 801236AC */  .4byte D_ovl2_80131074
  .incbin "ovl2.raw.bin", 0x4D220, 0x4
  /* 4D224 09EEB4 801236B4 */  .4byte D_ovl2_80131078
  .incbin "ovl2.raw.bin", 0x4D228, 0x8
  /* 4D230 09EEC0 801236C0 */  .4byte D_ovl2_8013107C
  .incbin "ovl2.raw.bin", 0x4D234, 0x8
  /* 4D23C 09EECC 801236CC */  .4byte D_ovl2_80131080
  .incbin "ovl2.raw.bin", 0x4D240, 0x14
  /* 4D254 09EEE4 801236E4 */  .4byte D_ovl2_80122990
  /* 4D258 09EEE8 801236E8 */  .4byte D_ovl1_803920B4
  .incbin "ovl2.raw.bin", 0x4D25C, 0x4
  /* 4D260 09EEF0 801236F0 */  .4byte D_ovl1_80392174
  .incbin "ovl2.raw.bin", 0x4D264, 0xC

glabel D_ovl2_80123700
  .incbin "ovl2.raw.bin", 0x4D270, 0xA70
  /* 4DCE0 09F970 80124170 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4DCE4, 0x108

glabel D_ovl2_8012427C
  .incbin "ovl2.raw.bin", 0x4DDEC, 0x28
  /* 4DE14 09FAA4 801242A4 */  .4byte D_ovl2_80131090
  .incbin "ovl2.raw.bin", 0x4DE18, 0x4
  /* 4DE1C 09FAAC 801242AC */  .4byte D_ovl2_80131094
  /* 4DE20 09FAB0 801242B0 */  .4byte D_ovl2_80131098
  .incbin "ovl2.raw.bin", 0x4DE24, 0x14
  /* 4DE38 09FAC8 801242C8 */  .4byte D_ovl2_8013109C
  .incbin "ovl2.raw.bin", 0x4DE3C, 0x14
  /* 4DE50 09FAE0 801242E0 */  .4byte D_ovl2_80123700
  /* 4DE54 09FAE4 801242E4 */  .4byte D_ovl1_80392180
  .incbin "ovl2.raw.bin", 0x4DE58, 0x4
  /* 4DE5C 09FAEC 801242EC */  .4byte D_ovl1_80392234
  .incbin "ovl2.raw.bin", 0x4DE60, 0x10

glabel D_ovl2_80124300
  .incbin "ovl2.raw.bin", 0x4DE70, 0xA4
  /* 4DF14 09FBA4 801243A4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4DF18, 0x248
  /* 4E160 09FDF0 801245F0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E164, 0x8
  /* 4E16C 09FDFC 801245FC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E170, 0x8
  /* 4E178 09FE08 80124608 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E17C, 0x8
  /* 4E184 09FE14 80124614 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E188, 0x8
  /* 4E190 09FE20 80124620 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E194, 0x8
  /* 4E19C 09FE2C 8012462C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E1A0, 0x38
  /* 4E1D8 09FE68 80124668 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E1DC, 0x8
  /* 4E1E4 09FE74 80124674 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E1E8, 0x8
  /* 4E1F0 09FE80 80124680 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E1F4, 0x8
  /* 4E1FC 09FE8C 8012468C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E200, 0x8
  /* 4E208 09FE98 80124698 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E20C, 0x8
  /* 4E214 09FEA4 801246A4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E218, 0x8
  /* 4E220 09FEB0 801246B0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E224, 0x8
  /* 4E22C 09FEBC 801246BC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E230, 0x8
  /* 4E238 09FEC8 801246C8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E23C, 0x8
  /* 4E244 09FED4 801246D4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E248, 0x8
  /* 4E250 09FEE0 801246E0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E254, 0x8
  /* 4E25C 09FEEC 801246EC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E260, 0x8
  /* 4E268 09FEF8 801246F8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E26C, 0x8
  /* 4E274 09FF04 80124704 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E278, 0x8
  /* 4E280 09FF10 80124710 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E284, 0x8
  /* 4E28C 09FF1C 8012471C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E290, 0x2C
  /* 4E2BC 09FF4C 8012474C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E2C0, 0x11C
  /* 4E3DC 0A006C 8012486C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E3E0, 0x2C
  /* 4E40C 0A009C 8012489C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E410, 0x2C
  /* 4E43C 0A00CC 801248CC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E440, 0x2C
  /* 4E46C 0A00FC 801248FC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E470, 0x68
  /* 4E4D8 0A0168 80124968 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E4DC, 0x8
  /* 4E4E4 0A0174 80124974 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E4E8, 0x164
  /* 4E64C 0A02DC 80124ADC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4E650, 0x204

glabel D_ovl2_80124CE4
  .incbin "ovl2.raw.bin", 0x4E854, 0x28
  /* 4E87C 0A050C 80124D0C */  .4byte D_ovl2_801310B0
  /* 4E880 0A0510 80124D10 */  .4byte D_ovl2_801310B4
  .incbin "ovl2.raw.bin", 0x4E884, 0x4
  /* 4E888 0A0518 80124D18 */  .4byte D_ovl2_801310B8
  .incbin "ovl2.raw.bin", 0x4E88C, 0x4
  /* 4E890 0A0520 80124D20 */  .4byte D_ovl2_801310BC
  /* 4E894 0A0524 80124D24 */  .4byte D_ovl2_801310C0
  /* 4E898 0A0528 80124D28 */  .4byte D_ovl2_801310C4
  .incbin "ovl2.raw.bin", 0x4E89C, 0x4
  /* 4E8A0 0A0530 80124D30 */  .4byte D_ovl2_801310C8
  .incbin "ovl2.raw.bin", 0x4E8A4, 0x14
  /* 4E8B8 0A0548 80124D48 */  .4byte D_ovl2_80124300
  /* 4E8BC 0A054C 80124D4C */  .4byte D_ovl1_803922F0
  .incbin "ovl2.raw.bin", 0x4E8C0, 0x4
  /* 4E8C4 0A0554 80124D54 */  .4byte D_ovl1_803923B0
  .incbin "ovl2.raw.bin", 0x4E8C8, 0x8

glabel D_ovl2_80124D60
  .incbin "ovl2.raw.bin", 0x4E8D0, 0x9CC

glabel D_ovl2_8012572C
  .incbin "ovl2.raw.bin", 0x4F29C, 0x28
  /* 4F2C4 0A0F54 80125754 */  .4byte D_ovl2_801310D0
  .incbin "ovl2.raw.bin", 0x4F2C8, 0x4
  /* 4F2CC 0A0F5C 8012575C */  .4byte D_ovl2_801310D4
  /* 4F2D0 0A0F60 80125760 */  .4byte D_ovl2_801310D8
  .incbin "ovl2.raw.bin", 0x4F2D4, 0x8
  /* 4F2DC 0A0F6C 8012576C */  .4byte D_ovl2_801310DC
  .incbin "ovl2.raw.bin", 0x4F2E0, 0x8
  /* 4F2E8 0A0F78 80125778 */  .4byte D_ovl2_801310E0
  .incbin "ovl2.raw.bin", 0x4F2EC, 0x14
  /* 4F300 0A0F90 80125790 */  .4byte D_ovl2_80124D60
  /* 4F304 0A0F94 80125794 */  .4byte D_ovl1_803923C0
  .incbin "ovl2.raw.bin", 0x4F308, 0x4
  /* 4F30C 0A0F9C 8012579C */  .4byte D_ovl1_80392474
  .incbin "ovl2.raw.bin", 0x4F310, 0x10

glabel D_ovl2_801257B0
  .incbin "ovl2.raw.bin", 0x4F320, 0xA4
  /* 4F3C4 0A1054 80125854 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F3C8, 0x248
  /* 4F610 0A12A0 80125AA0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F614, 0x8
  /* 4F61C 0A12AC 80125AAC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F620, 0x8
  /* 4F628 0A12B8 80125AB8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F62C, 0x8
  /* 4F634 0A12C4 80125AC4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F638, 0x8
  /* 4F640 0A12D0 80125AD0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F644, 0x8
  /* 4F64C 0A12DC 80125ADC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F650, 0x38
  /* 4F688 0A1318 80125B18 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F68C, 0x8
  /* 4F694 0A1324 80125B24 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F698, 0x8
  /* 4F6A0 0A1330 80125B30 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F6A4, 0x8
  /* 4F6AC 0A133C 80125B3C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F6B0, 0x8
  /* 4F6B8 0A1348 80125B48 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F6BC, 0x8
  /* 4F6C4 0A1354 80125B54 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F6C8, 0x8
  /* 4F6D0 0A1360 80125B60 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F6D4, 0x8
  /* 4F6DC 0A136C 80125B6C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F6E0, 0x8
  /* 4F6E8 0A1378 80125B78 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F6EC, 0x8
  /* 4F6F4 0A1384 80125B84 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F6F8, 0x8
  /* 4F700 0A1390 80125B90 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F704, 0x8
  /* 4F70C 0A139C 80125B9C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F710, 0x20
  /* 4F730 0A13C0 80125BC0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F734, 0x8
  /* 4F73C 0A13CC 80125BCC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F740, 0x2C
  /* 4F76C 0A13FC 80125BFC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F770, 0x110
  /* 4F880 0A1510 80125D10 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F884, 0x8
  /* 4F88C 0A151C 80125D1C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F890, 0x20
  /* 4F8B0 0A1540 80125D40 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F8B4, 0x8
  /* 4F8BC 0A154C 80125D4C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F8C0, 0x20
  /* 4F8E0 0A1570 80125D70 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F8E4, 0x8
  /* 4F8EC 0A157C 80125D7C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F8F0, 0x20
  /* 4F910 0A15A0 80125DA0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F914, 0x8
  /* 4F91C 0A15AC 80125DAC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F920, 0x68
  /* 4F988 0A1618 80125E18 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F98C, 0x8
  /* 4F994 0A1624 80125E24 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4F998, 0x8C
  /* 4FA24 0A16B4 80125EB4 */
  .asciz "P"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4FA28, 0xD4
  /* 4FAFC 0A178C 80125F8C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4FB00, 0x8C
  /* 4FB8C 0A181C 8012601C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4FB90, 0x20
  /* 4FBB0 0A1840 80126040 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4FBB4, 0x110
  /* 4FCC4 0A1954 80126154 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x4FCC8, 0x24

glabel D_ovl2_8012617C
  .incbin "ovl2.raw.bin", 0x4FCEC, 0x28
  /* 4FD14 0A19A4 801261A4 */  .4byte D_ovl2_801310F0
  /* 4FD18 0A19A8 801261A8 */  .4byte D_ovl2_801310F4
  .incbin "ovl2.raw.bin", 0x4FD1C, 0x4
  /* 4FD20 0A19B0 801261B0 */  .4byte D_ovl2_801310F8
  .incbin "ovl2.raw.bin", 0x4FD24, 0x8
  /* 4FD2C 0A19BC 801261BC */  .4byte D_ovl2_801310FC
  .incbin "ovl2.raw.bin", 0x4FD30, 0x8
  /* 4FD38 0A19C8 801261C8 */  .4byte D_ovl2_80131100
  .incbin "ovl2.raw.bin", 0x4FD3C, 0x14
  /* 4FD50 0A19E0 801261E0 */  .4byte D_ovl2_801257B0
  /* 4FD54 0A19E4 801261E4 */  .4byte D_ovl1_803925A0
  .incbin "ovl2.raw.bin", 0x4FD58, 0x4
  /* 4FD5C 0A19EC 801261EC */  .4byte D_ovl1_80392654
  .incbin "ovl2.raw.bin", 0x4FD60, 0x10

glabel D_ovl2_80126200
  .incbin "ovl2.raw.bin", 0x4FD70, 0x9CC

glabel D_ovl2_80126BCC
  .incbin "ovl2.raw.bin", 0x5073C, 0x28
  /* 50764 0A23F4 80126BF4 */  .4byte D_ovl2_80131110
  .incbin "ovl2.raw.bin", 0x50768, 0x4
  /* 5076C 0A23FC 80126BFC */  .4byte D_ovl2_80131114
  /* 50770 0A2400 80126C00 */  .4byte D_ovl2_80131118
  .incbin "ovl2.raw.bin", 0x50774, 0x14
  /* 50788 0A2418 80126C18 */  .4byte D_ovl2_8013111C
  .incbin "ovl2.raw.bin", 0x5078C, 0x14
  /* 507A0 0A2430 80126C30 */  .4byte D_ovl2_80126200
  /* 507A4 0A2434 80126C34 */  .4byte D_ovl1_80392660
  .incbin "ovl2.raw.bin", 0x507A8, 0x4
  /* 507AC 0A243C 80126C3C */  .4byte D_ovl1_8039266C
  .incbin "ovl2.raw.bin", 0x507B0, 0x10

glabel D_ovl2_80126C50
  .incbin "ovl2.raw.bin", 0x507C0, 0xA4
  /* 50864 0A24F4 80126CF4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50868, 0x38
  /* 508A0 0A2530 80126D30 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x508A4, 0x8
  /* 508AC 0A253C 80126D3C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x508B0, 0x200
  /* 50AB0 0A2740 80126F40 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50AB4, 0x8
  /* 50ABC 0A274C 80126F4C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50AC0, 0x8
  /* 50AC8 0A2758 80126F58 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50ACC, 0x8
  /* 50AD4 0A2764 80126F64 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50AD8, 0x8
  /* 50AE0 0A2770 80126F70 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50AE4, 0x8
  /* 50AEC 0A277C 80126F7C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50AF0, 0x38
  /* 50B28 0A27B8 80126FB8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50B2C, 0x8
  /* 50B34 0A27C4 80126FC4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50B38, 0x8
  /* 50B40 0A27D0 80126FD0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50B44, 0x8
  /* 50B4C 0A27DC 80126FDC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50B50, 0x8
  /* 50B58 0A27E8 80126FE8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50B5C, 0x8
  /* 50B64 0A27F4 80126FF4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50B68, 0x8
  /* 50B70 0A2800 80127000 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50B74, 0x8
  /* 50B7C 0A280C 8012700C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50B80, 0x8
  /* 50B88 0A2818 80127018 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50B8C, 0x8
  /* 50B94 0A2824 80127024 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50B98, 0x8
  /* 50BA0 0A2830 80127030 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50BA4, 0x8
  /* 50BAC 0A283C 8012703C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50BB0, 0x8
  /* 50BB8 0A2848 80127048 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50BBC, 0x8
  /* 50BC4 0A2854 80127054 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50BC8, 0x8
  /* 50BD0 0A2860 80127060 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50BD4, 0x8
  /* 50BDC 0A286C 8012706C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50BE0, 0x2C
  /* 50C0C 0A289C 8012709C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50C10, 0x11C
  /* 50D2C 0A29BC 801271BC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50D30, 0x2C
  /* 50D5C 0A29EC 801271EC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50D60, 0x2C
  /* 50D8C 0A2A1C 8012721C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50D90, 0x2C
  /* 50DBC 0A2A4C 8012724C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50DC0, 0x68
  /* 50E28 0A2AB8 801272B8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50E2C, 0x8
  /* 50E34 0A2AC4 801272C4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50E38, 0x164
  /* 50F9C 0A2C2C 8012742C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50FA0, 0x8
  /* 50FA8 0A2C38 80127438 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50FAC, 0x14
  /* 50FC0 0A2C50 80127450 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50FC4, 0x14
  /* 50FD8 0A2C68 80127468 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x50FDC, 0x234

glabel D_ovl2_801276A0
  .incbin "ovl2.raw.bin", 0x51210, 0x28
  /* 51238 0A2EC8 801276C8 */  .4byte D_ovl2_80131130
  /* 5123C 0A2ECC 801276CC */  .4byte D_ovl2_80131134
  .incbin "ovl2.raw.bin", 0x51240, 0x4
  /* 51244 0A2ED4 801276D4 */  .4byte D_ovl2_80131138
  .incbin "ovl2.raw.bin", 0x51248, 0x4
  /* 5124C 0A2EDC 801276DC */  .4byte D_ovl2_8013113C
  /* 51250 0A2EE0 801276E0 */  .4byte D_ovl2_80131140
  /* 51254 0A2EE4 801276E4 */  .4byte D_ovl2_80131144
  .incbin "ovl2.raw.bin", 0x51258, 0x4
  /* 5125C 0A2EEC 801276EC */  .4byte D_ovl2_80131148
  .incbin "ovl2.raw.bin", 0x51260, 0x14
  /* 51274 0A2F04 80127704 */  .4byte D_ovl2_80126C50
  /* 51278 0A2F08 80127708 */  .4byte D_ovl1_80392760
  .incbin "ovl2.raw.bin", 0x5127C, 0x4
  /* 51280 0A2F10 80127710 */  .4byte D_ovl1_80392814
  .incbin "ovl2.raw.bin", 0x51284, 0xC

glabel D_ovl2_80127720
  .incbin "ovl2.raw.bin", 0x51290, 0xA50

glabel D_ovl2_80128170
  .incbin "ovl2.raw.bin", 0x51CE0, 0x28
  /* 51D08 0A3998 80128198 */  .4byte D_ovl2_80131150
  .incbin "ovl2.raw.bin", 0x51D0C, 0x4
  /* 51D10 0A39A0 801281A0 */  .4byte D_ovl2_80131154
  /* 51D14 0A39A4 801281A4 */  .4byte D_ovl2_80131158
  .incbin "ovl2.raw.bin", 0x51D18, 0x14
  /* 51D2C 0A39BC 801281BC */  .4byte D_ovl2_8013115C
  .incbin "ovl2.raw.bin", 0x51D30, 0x14
  /* 51D44 0A39D4 801281D4 */  .4byte D_ovl2_80127720
  /* 51D48 0A39D8 801281D8 */  .4byte D_ovl1_80392820
  .incbin "ovl2.raw.bin", 0x51D4C, 0x4
  /* 51D50 0A39E0 801281E0 */  .4byte D_ovl1_803928D4
  .incbin "ovl2.raw.bin", 0x51D54, 0xC

glabel D_ovl2_801281F0
  .incbin "ovl2.raw.bin", 0x51D60, 0x938
  /* 52698 0A4328 80128B28 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x5269C, 0x8
  /* 526A4 0A4334 80128B34 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x526A8, 0x5C
  /* 52704 0A4394 80128B94 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x52708, 0x8
  /* 52710 0A43A0 80128BA0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x52714, 0x8
  /* 5271C 0A43AC 80128BAC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x52720, 0x8
  /* 52728 0A43B8 80128BB8 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x5272C, 0x8
  /* 52734 0A43C4 80128BC4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x52738, 0x8
  /* 52740 0A43D0 80128BD0 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x52744, 0x8
  /* 5274C 0A43DC 80128BDC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x52750, 0x14
  /* 52764 0A43F4 80128BF4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x52768, 0x8
  /* 52770 0A4400 80128C00 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x52774, 0x8
  /* 5277C 0A440C 80128C0C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x52780, 0x14
  /* 52794 0A4424 80128C24 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x52798, 0x54

glabel D_ovl2_80128C7C
  .incbin "ovl2.raw.bin", 0x527EC, 0x28
  /* 52814 0A44A4 80128CA4 */  .4byte D_ovl2_80131170
  /* 52818 0A44A8 80128CA8 */  .4byte D_ovl2_80131174
  .incbin "ovl2.raw.bin", 0x5281C, 0x4
  /* 52820 0A44B0 80128CB0 */  .4byte D_ovl2_80131178
  .incbin "ovl2.raw.bin", 0x52824, 0x14
  /* 52838 0A44C8 80128CC8 */  .4byte D_ovl2_8013117C
  .incbin "ovl2.raw.bin", 0x5283C, 0x14
  /* 52850 0A44E0 80128CE0 */  .4byte D_ovl2_801281F0
  /* 52854 0A44E4 80128CE4 */  .4byte D_ovl1_803928E8
  .incbin "ovl2.raw.bin", 0x52858, 0x4
  /* 5285C 0A44EC 80128CEC */  .4byte D_ovl1_803929C0
  .incbin "ovl2.raw.bin", 0x52860, 0x10

glabel D_ovl2_80128D00
  .incbin "ovl2.raw.bin", 0x52870, 0x30

glabel D_ovl2_80128D30
  .incbin "ovl2.raw.bin", 0x528A0, 0x1C

glabel D_ovl2_80128D4C
  .incbin "ovl2.raw.bin", 0x528BC, 0x1C

glabel D_ovl2_80128D68
  .incbin "ovl2.raw.bin", 0x528D8, 0x1C

glabel D_ovl2_80128D84
  .incbin "ovl2.raw.bin", 0x528F4, 0x1C

glabel D_ovl2_80128DA0
  .incbin "ovl2.raw.bin", 0x52910, 0x1C

glabel D_ovl2_80128DBC
  .incbin "ovl2.raw.bin", 0x5292C, 0x1C

glabel D_ovl2_80128DD8
  .incbin "ovl2.raw.bin", 0x52948, 0x4
  /* 5294C 0A45DC 80128DDC */  .4byte D_unkmulti_8013C0EC
  .incbin "ovl2.raw.bin", 0x52950, 0x10
  /* 52960 0A45F0 80128DF0 */  .4byte D_unkmulti_8013C0EC
  .incbin "ovl2.raw.bin", 0x52964, 0x10
  /* 52974 0A4604 80128E04 */  .4byte ftCommon_DeadUpStar_ProcUpdate
  .incbin "ovl2.raw.bin", 0x52978, 0x10
  /* 52988 0A4618 80128E18 */  .4byte ftCommon_DeadUpFall_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5298C, 0x10
  /* 5299C 0A462C 80128E2C */  .4byte ftCommon_Sleep_ProcUpdate
  .incbin "ovl2.raw.bin", 0x529A0, 0x20

glabel D_ovl2_80128E50
  .incbin "ovl2.raw.bin", 0x529C0, 0x4
  /* 529C4 0A4654 80128E54 */  .4byte ftCommon_Entry_ProcUpdate
  .incbin "ovl2.raw.bin", 0x529C8, 0x10
  /* 529D8 0A4668 80128E68 */  .4byte ftCommon_RebirthDown_ProcUpdate
  .incbin "ovl2.raw.bin", 0x529DC, 0x8
  /* 529E4 0A4674 80128E74 */  .4byte ftCommon_RebirthCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x529E8, 0x4
  /* 529EC 0A467C 80128E7C */  .4byte ftCommon_RebirthStand_ProcUpdate
  .incbin "ovl2.raw.bin", 0x529F0, 0x8
  /* 529F8 0A4688 80128E88 */  .4byte ftCommon_RebirthCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x529FC, 0x4
  /* 52A00 0A4690 80128E90 */  .4byte ftCommon_RebirthWait_ProcUpdate
  /* 52A04 0A4694 80128E94 */  .4byte ftCommon_RebirthWait_ProcInterrupt
  .incbin "ovl2.raw.bin", 0x52A08, 0x4
  /* 52A0C 0A469C 80128E9C */  .4byte ftCommon_RebirthCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x52A10, 0x8
  /* 52A18 0A46A8 80128EA8 */  .4byte ftCommon_Wait_ProcInterrupt

glabel jtbl_ovl2_80128EAC
  /* 52A1C 0A46AC 80128EAC */  .4byte func_ovl2_800D8BB4
  /* 52A20 0A46B0 80128EB0 */  .4byte jtgt_ovl2_800DDEE8
  .incbin "ovl2.raw.bin", 0x52A24, 0x8
  /* 52A2C 0A46BC 80128EBC */  .4byte ftCommon_Walk_ProcInterrupt
  /* 52A30 0A46C0 80128EC0 */  .4byte ftCommon_Walk_ProcPhysics
  /* 52A34 0A46C4 80128EC4 */  .4byte jtgt_ovl2_800DDEE8
  .incbin "ovl2.raw.bin", 0x52A38, 0x8
  /* 52A40 0A46D0 80128ED0 */  .4byte ftCommon_Walk_ProcInterrupt
  /* 52A44 0A46D4 80128ED4 */  .4byte ftCommon_Walk_ProcPhysics
  /* 52A48 0A46D8 80128ED8 */  .4byte jtgt_ovl2_800DDEE8
  .incbin "ovl2.raw.bin", 0x52A4C, 0x8
  /* 52A54 0A46E4 80128EE4 */  .4byte ftCommon_Walk_ProcInterrupt
  /* 52A58 0A46E8 80128EE8 */  .4byte ftCommon_Walk_ProcPhysics
  /* 52A5C 0A46EC 80128EEC */  .4byte jtgt_ovl2_800DDEE8
  .incbin "ovl2.raw.bin", 0x52A60, 0x18
  /* 52A78 0A4708 80128F08 */  .4byte ftCommon_Dash_ProcUpdate
  /* 52A7C 0A470C 80128F0C */  .4byte ftCommon_Dash_ProcInterrupt
  /* 52A80 0A4710 80128F10 */  .4byte ftCommon_Dash_ProcPhysics
  /* 52A84 0A4714 80128F14 */  .4byte ftCommon_Dash_ProcMap
  .incbin "ovl2.raw.bin", 0x52A88, 0x8
  /* 52A90 0A4720 80128F20 */  .4byte ftCommon_Run_ProcInterrupt

glabel jtbl_ovl2_80128F24
  /* 52A94 0A4724 80128F24 */  .4byte jtgt_ovl2_800D8B94
  /* 52A98 0A4728 80128F28 */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x52A9C, 0x4
  /* 52AA0 0A4730 80128F30 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  /* 52AA4 0A4734 80128F34 */  .4byte ftCommon_RunBrake_ProcInterrupt
  /* 52AA8 0A4738 80128F38 */  .4byte ftCommon_RunBrake_ProcPhysics
  /* 52AAC 0A473C 80128F3C */  .4byte jtgt_ovl2_800DDEE8
  .incbin "ovl2.raw.bin", 0x52AB0, 0x4
  /* 52AB4 0A4744 80128F44 */  .4byte ftCommon_Turn_ProcUpdate
  /* 52AB8 0A4748 80128F48 */  .4byte ftCommon_Turn_ProcInterrupt

glabel jtbl_ovl2_80128F4C
  /* 52ABC 0A474C 80128F4C */  .4byte func_ovl2_800D8BB4
  /* 52AC0 0A4750 80128F50 */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x52AC4, 0x4
  /* 52AC8 0A4758 80128F58 */  .4byte ftCommon_TurnRun_ProcUpdate
  /* 52ACC 0A475C 80128F5C */  .4byte ftCommon_TurnRun_ProcInterrupt

glabel jtbl_ovl2_80128F60
  /* 52AD0 0A4760 80128F60 */  .4byte func_ovl2_800D8C14
  /* 52AD4 0A4764 80128F64 */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x52AD8, 0x4
  /* 52ADC 0A476C 80128F6C */  .4byte ftCommon_KneeBend_ProcUpdate
  /* 52AE0 0A4770 80128F70 */  .4byte ftCommon_KneeBend_ProcInterrupt

glabel jtbl_ovl2_80128F74
  /* 52AE4 0A4774 80128F74 */  .4byte func_ovl2_800D8BB4
  /* 52AE8 0A4778 80128F78 */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x52AEC, 0x4
  /* 52AF0 0A4780 80128F80 */  .4byte ftCommon_KneeBend_ProcUpdate
  /* 52AF4 0A4784 80128F84 */  .4byte ftCommon_KneeBend_ProcInterrupt

glabel jtbl_ovl2_80128F88
  /* 52AF8 0A4788 80128F88 */  .4byte func_ovl2_800D8BB4
  /* 52AFC 0A478C 80128F8C */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x52B00, 0x4
  /* 52B04 0A4794 80128F94 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  /* 52B08 0A4798 80128F98 */  .4byte func_ovl3_8013F660

glabel jtbl_ovl2_80128F9C
  /* 52B0C 0A479C 80128F9C */  .4byte jtgt_ovl2_800D9160
  /* 52B10 0A47A0 80128FA0 */  .4byte jtgt_ovl2_800DE99C
  .incbin "ovl2.raw.bin", 0x52B14, 0x4
  /* 52B18 0A47A8 80128FA8 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  /* 52B1C 0A47AC 80128FAC */  .4byte func_ovl3_8013F660

glabel jtbl_ovl2_80128FB0
  /* 52B20 0A47B0 80128FB0 */  .4byte jtgt_ovl2_800D9160
  /* 52B24 0A47B4 80128FB4 */  .4byte jtgt_ovl2_800DE99C
  .incbin "ovl2.raw.bin", 0x52B28, 0x4
  /* 52B2C 0A47BC 80128FBC */  .4byte ftCommon_JumpAerial_ProcUpdate
  /* 52B30 0A47C0 80128FC0 */  .4byte ftCommon_JumpAerial_ProcInterrupt

glabel jtbl_ovl2_80128FC4
  /* 52B34 0A47C4 80128FC4 */  .4byte jtgt_ovl2_800D9160
  /* 52B38 0A47C8 80128FC8 */  .4byte jtgt_ovl2_800DE99C
  .incbin "ovl2.raw.bin", 0x52B3C, 0x4
  /* 52B40 0A47D0 80128FD0 */  .4byte ftCommon_JumpAerial_ProcUpdate
  /* 52B44 0A47D4 80128FD4 */  .4byte ftCommon_JumpAerial_ProcInterrupt

glabel jtbl_ovl2_80128FD8
  /* 52B48 0A47D8 80128FD8 */  .4byte jtgt_ovl2_800D9160
  /* 52B4C 0A47DC 80128FDC */  .4byte jtgt_ovl2_800DE99C
  .incbin "ovl2.raw.bin", 0x52B50, 0x8
  /* 52B58 0A47E8 80128FE8 */  .4byte ftCommon_Fall_ProcInterrupt

glabel jtbl_ovl2_80128FEC
  /* 52B5C 0A47EC 80128FEC */  .4byte jtgt_ovl2_800D9160
  /* 52B60 0A47F0 80128FF0 */  .4byte jtgt_ovl2_800DE99C
  .incbin "ovl2.raw.bin", 0x52B64, 0x8
  /* 52B6C 0A47FC 80128FFC */  .4byte ftCommon_Fall_ProcInterrupt

glabel jtbl_ovl2_80129000
  /* 52B70 0A4800 80129000 */  .4byte jtgt_ovl2_800D9160
  /* 52B74 0A4804 80129004 */  .4byte jtgt_ovl2_800DE99C
  .incbin "ovl2.raw.bin", 0x52B78, 0x4
  /* 52B7C 0A480C 8012900C */  .4byte ftCommon_Squat_ProcUpdate
  /* 52B80 0A4810 80129010 */  .4byte ftCommon_Squat_ProcInterrupt

glabel jtbl_ovl2_80129014
  /* 52B84 0A4814 80129014 */  .4byte func_ovl2_800D8BB4
  /* 52B88 0A4818 80129018 */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x52B8C, 0x4
  /* 52B90 0A4820 80129020 */  .4byte ftCommon_SquatWait_ProcUpdate
  /* 52B94 0A4824 80129024 */  .4byte ftCommon_SquatWait_ProcInterrupt

glabel jtbl_ovl2_80129028
  /* 52B98 0A4828 80129028 */  .4byte func_ovl2_800D8BB4
  /* 52B9C 0A482C 8012902C */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x52BA0, 0x4
  /* 52BA4 0A4834 80129034 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  /* 52BA8 0A4838 80129038 */  .4byte ftCommon_SquatRv_ProcInterrupt

glabel jtbl_ovl2_8012903C
  /* 52BAC 0A483C 8012903C */  .4byte func_ovl2_800D8BB4
  /* 52BB0 0A4840 80129040 */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x52BB4, 0x4
  /* 52BB8 0A4848 80129048 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  /* 52BBC 0A484C 8012904C */  .4byte ftCommon_Landing_ProcInterrupt

glabel jtbl_ovl2_80129050
  /* 52BC0 0A4850 80129050 */  .4byte func_ovl2_800D8BB4
  /* 52BC4 0A4854 80129054 */  .4byte jtgt_ovl2_800DDEE8
  .incbin "ovl2.raw.bin", 0x52BC8, 0x4
  /* 52BCC 0A485C 8012905C */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  /* 52BD0 0A4860 80129060 */  .4byte ftCommon_Landing_ProcInterrupt

glabel jtbl_ovl2_80129064
  /* 52BD4 0A4864 80129064 */  .4byte func_ovl2_800D8BB4
  /* 52BD8 0A4868 80129068 */  .4byte jtgt_ovl2_800DDEE8
  .incbin "ovl2.raw.bin", 0x52BDC, 0x4
  /* 52BE0 0A4870 80129070 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  /* 52BE4 0A4874 80129074 */  .4byte ftCommon_Pass_ProcInterrupt

glabel jtbl_ovl2_80129078
  /* 52BE8 0A4878 80129078 */  .4byte jtgt_ovl2_800D9160
  /* 52BEC 0A487C 8012907C */  .4byte jtgt_ovl2_800DE99C
  .incbin "ovl2.raw.bin", 0x52BF0, 0x4
  /* 52BF4 0A4884 80129084 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  /* 52BF8 0A4888 80129088 */  .4byte ftCommon_Pass_ProcInterrupt

glabel jtbl_ovl2_8012908C
  /* 52BFC 0A488C 8012908C */  .4byte jtgt_ovl2_800D9160
  /* 52C00 0A4890 80129090 */  .4byte jtgt_ovl2_800DE99C
  .incbin "ovl2.raw.bin", 0x52C04, 0x8
  /* 52C0C 0A489C 8012909C */  .4byte ftCommon_Ottotto_ProcInterrupt
  .incbin "ovl2.raw.bin", 0x52C10, 0x4
  /* 52C14 0A48A4 801290A4 */  .4byte ftCommon_Ottotto_ProcMap
  .incbin "ovl2.raw.bin", 0x52C18, 0x4
  /* 52C1C 0A48AC 801290AC */  .4byte ftCommon_Ottotto_ProcUpdate
  /* 52C20 0A48B0 801290B0 */  .4byte ftCommon_Ottotto_ProcInterrupt
  .incbin "ovl2.raw.bin", 0x52C24, 0x4
  /* 52C28 0A48B8 801290B8 */  .4byte ftCommon_Ottotto_ProcMap
  .incbin "ovl2.raw.bin", 0x52C2C, 0x4
  /* 52C30 0A48C0 801290C0 */  .4byte ftCommon_DamageCommon_ProcUpdate
  /* 52C34 0A48C4 801290C4 */  .4byte ftCommon_DamageCommon_ProcInterrupt
  /* 52C38 0A48C8 801290C8 */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 52C3C 0A48CC 801290CC */  .4byte func_ovl2_800DEDF0
  .incbin "ovl2.raw.bin", 0x52C40, 0x4
  /* 52C44 0A48D4 801290D4 */  .4byte ftCommon_DamageCommon_ProcUpdate
  /* 52C48 0A48D8 801290D8 */  .4byte ftCommon_DamageCommon_ProcInterrupt
  /* 52C4C 0A48DC 801290DC */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 52C50 0A48E0 801290E0 */  .4byte func_ovl2_800DEDF0
  .incbin "ovl2.raw.bin", 0x52C54, 0x4
  /* 52C58 0A48E8 801290E8 */  .4byte ftCommon_DamageCommon_ProcUpdate
  /* 52C5C 0A48EC 801290EC */  .4byte ftCommon_DamageCommon_ProcInterrupt
  /* 52C60 0A48F0 801290F0 */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 52C64 0A48F4 801290F4 */  .4byte func_ovl2_800DEDF0
  .incbin "ovl2.raw.bin", 0x52C68, 0x4
  /* 52C6C 0A48FC 801290FC */  .4byte ftCommon_DamageCommon_ProcUpdate
  /* 52C70 0A4900 80129100 */  .4byte ftCommon_DamageCommon_ProcInterrupt
  /* 52C74 0A4904 80129104 */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 52C78 0A4908 80129108 */  .4byte func_ovl2_800DEDF0
  .incbin "ovl2.raw.bin", 0x52C7C, 0x4
  /* 52C80 0A4910 80129110 */  .4byte ftCommon_DamageCommon_ProcUpdate
  /* 52C84 0A4914 80129114 */  .4byte ftCommon_DamageCommon_ProcInterrupt
  /* 52C88 0A4918 80129118 */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 52C8C 0A491C 8012911C */  .4byte func_ovl2_800DEDF0
  /* 52C90 0A4920 80129120 */
  .asciz "\t"
  .balign 4
  /* 52C94 0A4924 80129124 */  .4byte ftCommon_DamageCommon_ProcUpdate
  /* 52C98 0A4928 80129128 */  .4byte ftCommon_DamageCommon_ProcInterrupt
  /* 52C9C 0A492C 8012912C */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 52CA0 0A4930 80129130 */  .4byte func_ovl2_800DEDF0
  /* 52CA4 0A4934 80129134 */
  .asciz "\t@"
  .balign 4
  /* 52CA8 0A4938 80129138 */  .4byte ftCommon_DamageCommon_ProcUpdate
  /* 52CAC 0A493C 8012913C */  .4byte ftCommon_DamageCommon_ProcInterrupt
  /* 52CB0 0A4940 80129140 */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 52CB4 0A4944 80129144 */  .4byte func_ovl2_800DEDF0
  .incbin "ovl2.raw.bin", 0x52CB8, 0x4
  /* 52CBC 0A494C 8012914C */  .4byte ftCommon_DamageCommon_ProcUpdate
  /* 52CC0 0A4950 80129150 */  .4byte ftCommon_DamageCommon_ProcInterrupt
  /* 52CC4 0A4954 80129154 */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 52CC8 0A4958 80129158 */  .4byte func_ovl2_800DEDF0
  .incbin "ovl2.raw.bin", 0x52CCC, 0x4
  /* 52CD0 0A4960 80129160 */  .4byte ftCommon_DamageCommon_ProcUpdate
  /* 52CD4 0A4964 80129164 */  .4byte ftCommon_DamageCommon_ProcInterrupt
  /* 52CD8 0A4968 80129168 */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 52CDC 0A496C 8012916C */  .4byte func_ovl2_800DEDF0
  /* 52CE0 0A4970 80129170 */
  .asciz "\n"
  .balign 4
  /* 52CE4 0A4974 80129174 */  .4byte ftCommon_DamageCommon_ProcUpdate
  /* 52CE8 0A4978 80129178 */  .4byte ftCommon_DamageCommon_ProcInterrupt
  /* 52CEC 0A497C 8012917C */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 52CF0 0A4980 80129180 */  .4byte func_ovl2_800DEDF0
  /* 52CF4 0A4984 80129184 */
  .asciz "\n@"
  .balign 4
  /* 52CF8 0A4988 80129188 */  .4byte ftCommon_DamageCommon_ProcUpdate
  /* 52CFC 0A498C 8012918C */  .4byte ftCommon_DamageCommon_ProcInterrupt
  /* 52D00 0A4990 80129190 */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 52D04 0A4994 80129194 */  .4byte func_ovl2_800DEDF0
  .incbin "ovl2.raw.bin", 0x52D08, 0x4
  /* 52D0C 0A499C 8012919C */  .4byte ftCommon_DamageCommon_ProcUpdate
  /* 52D10 0A49A0 801291A0 */  .4byte ftCommon_DamageCommon_ProcInterrupt
  /* 52D14 0A49A4 801291A4 */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 52D18 0A49A8 801291A8 */  .4byte func_ovl2_800DEDF0
  .incbin "ovl2.raw.bin", 0x52D1C, 0x4
  /* 52D20 0A49B0 801291B0 */  .4byte ftCommon_DamageCommon_ProcUpdate
  /* 52D24 0A49B4 801291B4 */  .4byte ftCommon_DamageCommon_ProcInterrupt
  /* 52D28 0A49B8 801291B8 */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 52D2C 0A49BC 801291BC */  .4byte func_ovl2_800DEDF0
  .incbin "ovl2.raw.bin", 0x52D30, 0x4
  /* 52D34 0A49C4 801291C4 */  .4byte ftCommon_DamageAirCommon_ProcUpdate
  /* 52D38 0A49C8 801291C8 */  .4byte ftCommon_DamageAirCommon_ProcInterrupt
  /* 52D3C 0A49CC 801291CC */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 52D40 0A49D0 801291D0 */  .4byte ftCommon_DamageAirCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x52D44, 0x4
  /* 52D48 0A49D8 801291D8 */  .4byte ftCommon_DamageAirCommon_ProcUpdate
  /* 52D4C 0A49DC 801291DC */  .4byte ftCommon_DamageAirCommon_ProcInterrupt
  /* 52D50 0A49E0 801291E0 */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 52D54 0A49E4 801291E4 */  .4byte ftCommon_DamageAirCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x52D58, 0x4
  /* 52D5C 0A49EC 801291EC */  .4byte ftCommon_DamageAirCommon_ProcUpdate
  /* 52D60 0A49F0 801291F0 */  .4byte ftCommon_DamageAirCommon_ProcInterrupt
  /* 52D64 0A49F4 801291F4 */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 52D68 0A49F8 801291F8 */  .4byte ftCommon_DamageAirCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x52D6C, 0x4
  /* 52D70 0A4A00 80129200 */  .4byte ftCommon_DamageAirCommon_ProcUpdate
  /* 52D74 0A4A04 80129204 */  .4byte ftCommon_DamageAirCommon_ProcInterrupt
  /* 52D78 0A4A08 80129208 */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 52D7C 0A4A0C 8012920C */  .4byte ftCommon_DamageAirCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x52D80, 0x4
  /* 52D84 0A4A14 80129214 */  .4byte ftCommon_DamageAirCommon_ProcUpdate
  /* 52D88 0A4A18 80129218 */  .4byte ftCommon_DamageAirCommon_ProcInterrupt
  /* 52D8C 0A4A1C 8012921C */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 52D90 0A4A20 80129220 */  .4byte ftCommon_DamageAirCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x52D94, 0x4
  /* 52D98 0A4A28 80129228 */  .4byte ftCommon_DamageAirCommon_ProcUpdate
  /* 52D9C 0A4A2C 8012922C */  .4byte ftCommon_DamageAirCommon_ProcInterrupt
  /* 52DA0 0A4A30 80129230 */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 52DA4 0A4A34 80129234 */  .4byte ftCommon_DamageAirCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x52DA8, 0x4
  /* 52DAC 0A4A3C 8012923C */  .4byte ftCommon_WallDamage_ProcUpdate
  /* 52DB0 0A4A40 80129240 */  .4byte ftCommon_DamageAirCommon_ProcInterrupt
  /* 52DB4 0A4A44 80129244 */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 52DB8 0A4A48 80129248 */  .4byte ftCommon_DamageAirCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x52DBC, 0x8
  /* 52DC4 0A4A54 80129254 */  .4byte ftCommon_DamageFall_ProcInterrupt
  /* 52DC8 0A4A58 80129258 */  .4byte jtgt_ovl2_800D9160
  /* 52DCC 0A4A5C 8012925C */  .4byte ftCommon_DamageFall_ProcMap
  .incbin "ovl2.raw.bin", 0x52DD0, 0x8
  /* 52DD8 0A4A68 80129268 */  .4byte ftCommon_FallSpecial_ProcInterrupt
  /* 52DDC 0A4A6C 8012926C */  .4byte ftCommon_FallSpecial_ProcPhysics
  /* 52DE0 0A4A70 80129270 */  .4byte ftCommon_FallSpecial_ProcMap
  /* 52DE4 0A4A74 80129274 */
  .asciz "\r"
  .balign 4
  /* 52DE8 0A4A78 80129278 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  /* 52DEC 0A4A7C 8012927C */  .4byte ftCommon_Landing_ProcInterrupt

glabel jtbl_ovl2_80129280
  /* 52DF0 0A4A80 80129280 */  .4byte func_ovl2_800D8BB4
  /* 52DF4 0A4A84 80129284 */  .4byte jtgt_ovl2_800DDEE8
  /* 52DF8 0A4A88 80129288 */
  .asciz "\r@"
  .balign 4
  /* 52DFC 0A4A8C 8012928C */  .4byte ftCommon_Twister_ProcUpdate
  .incbin "ovl2.raw.bin", 0x52E00, 0x4
  /* 52E04 0A4A94 80129294 */  .4byte ftCommon_Twister_ProcPhysics
  /* 52E08 0A4A98 80129298 */  .4byte func_ovl2_800DE958
  .incbin "ovl2.raw.bin", 0x52E0C, 0x4
  /* 52E10 0A4AA0 801292A0 */  .4byte ftCommon_TaruCann_ProcUpdate
  /* 52E14 0A4AA4 801292A4 */  .4byte ftCommon_TaruCann_ProcInterrupt
  /* 52E18 0A4AA8 801292A8 */  .4byte ftCommon_TaruCann_ProcPhysics
  /* 52E1C 0A4AAC 801292AC */  .4byte func_ovl2_800DE958
  .incbin "ovl2.raw.bin", 0x52E20, 0x4
  /* 52E24 0A4AB4 801292B4 */  .4byte ftCommon_DokanStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x52E28, 0x4
  /* 52E2C 0A4ABC 801292BC */  .4byte ftCommon_DokanStart_ProcPhysics
  /* 52E30 0A4AC0 801292C0 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x52E34, 0x4
  /* 52E38 0A4AC8 801292C8 */  .4byte ftCommon_DokanWait_ProcUpdate
  .incbin "ovl2.raw.bin", 0x52E3C, 0x8
  /* 52E44 0A4AD4 801292D4 */  .4byte ftCommon_DokanWait_ProcMap
  .incbin "ovl2.raw.bin", 0x52E48, 0x4
  /* 52E4C 0A4ADC 801292DC */  .4byte ftCommon_DokanEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x52E50, 0x8
  /* 52E58 0A4AE8 801292E8 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x52E5C, 0x4
  /* 52E60 0A4AF0 801292F0 */  .4byte ftCommon_DokanEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x52E64, 0x8
  /* 52E6C 0A4AFC 801292FC */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x52E70, 0x4
  /* 52E74 0A4B04 80129304 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x52E78, 0x8
  /* 52E80 0A4B10 80129310 */  .4byte jtgt_ovl2_800DE99C
  .incbin "ovl2.raw.bin", 0x52E84, 0x4
  /* 52E88 0A4B18 80129318 */  .4byte ftCommon_DownBounce_ProcUpdate
  .incbin "ovl2.raw.bin", 0x52E8C, 0x4

glabel jtbl_ovl2_80129320
  /* 52E90 0A4B20 80129320 */  .4byte func_ovl2_800D8BB4
  /* 52E94 0A4B24 80129324 */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x52E98, 0x4
  /* 52E9C 0A4B2C 8012932C */  .4byte ftCommon_DownBounce_ProcUpdate
  .incbin "ovl2.raw.bin", 0x52EA0, 0x4

glabel jtbl_ovl2_80129334
  /* 52EA4 0A4B34 80129334 */  .4byte func_ovl2_800D8BB4
  /* 52EA8 0A4B38 80129338 */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x52EAC, 0x4
  /* 52EB0 0A4B40 80129340 */  .4byte ftCommon_DownWait_ProcUpdate
  /* 52EB4 0A4B44 80129344 */  .4byte ftCommon_DownWait_ProcInterrupt

glabel jtbl_ovl2_80129348
  /* 52EB8 0A4B48 80129348 */  .4byte func_ovl2_800D8BB4
  /* 52EBC 0A4B4C 8012934C */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x52EC0, 0x4
  /* 52EC4 0A4B54 80129354 */  .4byte ftCommon_DownWait_ProcUpdate
  /* 52EC8 0A4B58 80129358 */  .4byte ftCommon_DownWait_ProcInterrupt

glabel jtbl_ovl2_8012935C
  /* 52ECC 0A4B5C 8012935C */  .4byte func_ovl2_800D8BB4
  /* 52ED0 0A4B60 80129360 */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x52ED4, 0x4
  /* 52ED8 0A4B68 80129368 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  /* 52EDC 0A4B6C 8012936C */  .4byte ftCommon_DownStand_ProcInterrupt

glabel jtbl_ovl2_80129370
  /* 52EE0 0A4B70 80129370 */  .4byte func_ovl2_800D8BB4
  /* 52EE4 0A4B74 80129374 */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x52EE8, 0x4
  /* 52EEC 0A4B7C 8012937C */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  /* 52EF0 0A4B80 80129380 */  .4byte ftCommon_DownStand_ProcInterrupt

glabel jtbl_ovl2_80129384
  /* 52EF4 0A4B84 80129384 */  .4byte func_ovl2_800D8BB4
  /* 52EF8 0A4B88 80129388 */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x52EFC, 0x4
  /* 52F00 0A4B90 80129390 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x52F04, 0x4

glabel jtbl_ovl2_80129398
  /* 52F08 0A4B98 80129398 */  .4byte func_ovl2_800D8C14
  /* 52F0C 0A4B9C 8012939C */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x52F10, 0x4
  /* 52F14 0A4BA4 801293A4 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x52F18, 0x4

glabel jtbl_ovl2_801293AC
  /* 52F1C 0A4BAC 801293AC */  .4byte func_ovl2_800D8C14
  /* 52F20 0A4BB0 801293B0 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x52F24, 0x4
  /* 52F28 0A4BB8 801293B8 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x52F2C, 0x4

glabel jtbl_ovl2_801293C0
  /* 52F30 0A4BC0 801293C0 */  .4byte func_ovl2_800D8C14
  /* 52F34 0A4BC4 801293C4 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x52F38, 0x4
  /* 52F3C 0A4BCC 801293CC */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x52F40, 0x4

glabel jtbl_ovl2_801293D4
  /* 52F44 0A4BD4 801293D4 */  .4byte func_ovl2_800D8C14
  /* 52F48 0A4BD8 801293D8 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x52F4C, 0x4
  /* 52F50 0A4BE0 801293E0 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x52F54, 0x4

glabel jtbl_ovl2_801293E8
  /* 52F58 0A4BE8 801293E8 */  .4byte func_ovl2_800D8C14
  /* 52F5C 0A4BEC 801293EC */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x52F60, 0x4
  /* 52F64 0A4BF4 801293F4 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x52F68, 0x4

glabel jtbl_ovl2_801293FC
  /* 52F6C 0A4BFC 801293FC */  .4byte func_ovl2_800D8C14
  /* 52F70 0A4C00 80129400 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x52F74, 0x4
  /* 52F78 0A4C08 80129408 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x52F7C, 0x4

glabel jtbl_ovl2_80129410
  /* 52F80 0A4C10 80129410 */  .4byte func_ovl2_800D8BB4
  /* 52F84 0A4C14 80129414 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x52F88, 0x4
  /* 52F8C 0A4C1C 8012941C */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x52F90, 0x4

glabel jtbl_ovl2_80129424
  /* 52F94 0A4C24 80129424 */  .4byte func_ovl2_800D8BB4
  /* 52F98 0A4C28 80129428 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x52F9C, 0x4
  /* 52FA0 0A4C30 80129430 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x52FA4, 0x4

glabel jtbl_ovl2_80129438
  /* 52FA8 0A4C38 80129438 */  .4byte func_ovl2_800D8BB4
  /* 52FAC 0A4C3C 8012943C */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x52FB0, 0x4
  /* 52FB4 0A4C44 80129444 */  .4byte ftCommon_ReboundWait_ProcUpdate
  .incbin "ovl2.raw.bin", 0x52FB8, 0x4

glabel jtbl_ovl2_8012944C
  /* 52FBC 0A4C4C 8012944C */  .4byte func_ovl2_800D8BB4
  /* 52FC0 0A4C50 80129450 */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x52FC4, 0x4
  /* 52FC8 0A4C58 80129458 */  .4byte ftCommon_Rebound_ProcUpdate
  .incbin "ovl2.raw.bin", 0x52FCC, 0x4

glabel jtbl_ovl2_80129460
  /* 52FD0 0A4C60 80129460 */  .4byte func_ovl2_800D8BB4
  /* 52FD4 0A4C64 80129464 */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x52FD8, 0x4
  /* 52FDC 0A4C6C 8012946C */  .4byte ftCommon_CliffCatch_ProcUpdate
  .incbin "ovl2.raw.bin", 0x52FE0, 0x4
  /* 52FE4 0A4C74 80129474 */  .4byte ftCommon_CliffCommon_ProcPhysics
  /* 52FE8 0A4C78 80129478 */  .4byte ftCommon_CliffCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x52FEC, 0x8
  /* 52FF4 0A4C84 80129484 */  .4byte ftCommon_CliffWait_ProcInterrupt
  /* 52FF8 0A4C88 80129488 */  .4byte ftCommon_CliffCommon_ProcPhysics
  /* 52FFC 0A4C8C 8012948C */  .4byte ftCommon_CliffCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x53000, 0x4
  /* 53004 0A4C94 80129494 */  .4byte ftCommon_CliffQuick_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53008, 0x4
  /* 5300C 0A4C9C 8012949C */  .4byte ftCommon_CliffCommon_ProcPhysics
  /* 53010 0A4CA0 801294A0 */  .4byte ftCommon_CliffCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x53014, 0x4
  /* 53018 0A4CA8 801294A8 */  .4byte ftCommon_CliffClimbQuick1_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5301C, 0x4
  /* 53020 0A4CB0 801294B0 */  .4byte ftCommon_CliffCommon_ProcPhysics
  /* 53024 0A4CB4 801294B4 */  .4byte ftCommon_CliffCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x53028, 0x4
  /* 5302C 0A4CBC 801294BC */  .4byte ftCommon_CliffCommon2_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53030, 0x4
  /* 53034 0A4CC4 801294C4 */  .4byte ftCommon_CliffCommon2_ProcPhysics
  /* 53038 0A4CC8 801294C8 */  .4byte ftCommon_CliffClimbCommon2_ProcMap
  .incbin "ovl2.raw.bin", 0x5303C, 0x4
  /* 53040 0A4CD0 801294D0 */  .4byte ftCommon_CliffSlow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53044, 0x4
  /* 53048 0A4CD8 801294D8 */  .4byte ftCommon_CliffCommon_ProcPhysics
  /* 5304C 0A4CDC 801294DC */  .4byte ftCommon_CliffCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x53050, 0x4
  /* 53054 0A4CE4 801294E4 */  .4byte ftCommon_CliffClimbSlow1_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53058, 0x4
  /* 5305C 0A4CEC 801294EC */  .4byte ftCommon_CliffCommon_ProcPhysics
  /* 53060 0A4CF0 801294F0 */  .4byte ftCommon_CliffCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x53064, 0x4
  /* 53068 0A4CF8 801294F8 */  .4byte ftCommon_CliffCommon2_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5306C, 0x4
  /* 53070 0A4D00 80129500 */  .4byte ftCommon_CliffCommon2_ProcPhysics
  /* 53074 0A4D04 80129504 */  .4byte ftCommon_CliffClimbCommon2_ProcMap
  .incbin "ovl2.raw.bin", 0x53078, 0x4
  /* 5307C 0A4D0C 8012950C */  .4byte ftCommon_CliffAttackQuick1_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53080, 0x4
  /* 53084 0A4D14 80129514 */  .4byte ftCommon_CliffCommon_ProcPhysics
  /* 53088 0A4D18 80129518 */  .4byte ftCommon_CliffCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x5308C, 0x4
  /* 53090 0A4D20 80129520 */  .4byte ftCommon_CliffCommon2_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53094, 0x4
  /* 53098 0A4D28 80129528 */  .4byte ftCommon_CliffCommon2_ProcPhysics
  /* 5309C 0A4D2C 8012952C */  .4byte ftCommon_CliffAttackEscape2_ProcMap
  .incbin "ovl2.raw.bin", 0x530A0, 0x4
  /* 530A4 0A4D34 80129534 */  .4byte ftCommon_CliffAttackSlow1_ProcUpdate
  .incbin "ovl2.raw.bin", 0x530A8, 0x4
  /* 530AC 0A4D3C 8012953C */  .4byte ftCommon_CliffCommon_ProcPhysics
  /* 530B0 0A4D40 80129540 */  .4byte ftCommon_CliffCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x530B4, 0x4
  /* 530B8 0A4D48 80129548 */  .4byte ftCommon_CliffCommon2_ProcUpdate
  .incbin "ovl2.raw.bin", 0x530BC, 0x4
  /* 530C0 0A4D50 80129550 */  .4byte ftCommon_CliffCommon2_ProcPhysics
  /* 530C4 0A4D54 80129554 */  .4byte ftCommon_CliffAttackEscape2_ProcMap
  .incbin "ovl2.raw.bin", 0x530C8, 0x4
  /* 530CC 0A4D5C 8012955C */  .4byte ftCommon_CliffEscapeQuick1_ProcUpdate
  .incbin "ovl2.raw.bin", 0x530D0, 0x4
  /* 530D4 0A4D64 80129564 */  .4byte ftCommon_CliffCommon_ProcPhysics
  /* 530D8 0A4D68 80129568 */  .4byte ftCommon_CliffCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x530DC, 0x4
  /* 530E0 0A4D70 80129570 */  .4byte ftCommon_CliffCommon2_ProcUpdate
  .incbin "ovl2.raw.bin", 0x530E4, 0x4
  /* 530E8 0A4D78 80129578 */  .4byte ftCommon_CliffCommon2_ProcPhysics
  /* 530EC 0A4D7C 8012957C */  .4byte ftCommon_CliffAttackEscape2_ProcMap
  .incbin "ovl2.raw.bin", 0x530F0, 0x4
  /* 530F4 0A4D84 80129584 */  .4byte ftCommon_CliffEscapeSlow1_ProcUpdate
  .incbin "ovl2.raw.bin", 0x530F8, 0x4
  /* 530FC 0A4D8C 8012958C */  .4byte ftCommon_CliffCommon_ProcPhysics
  /* 53100 0A4D90 80129590 */  .4byte ftCommon_CliffCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x53104, 0x4
  /* 53108 0A4D98 80129598 */  .4byte ftCommon_CliffCommon2_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5310C, 0x4
  /* 53110 0A4DA0 801295A0 */  .4byte ftCommon_CliffCommon2_ProcPhysics
  /* 53114 0A4DA4 801295A4 */  .4byte ftCommon_CliffAttackEscape2_ProcMap
  .incbin "ovl2.raw.bin", 0x53118, 0x4
  /* 5311C 0A4DAC 801295AC */  .4byte ftCommon_Get_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53120, 0x4
  /* 53124 0A4DB4 801295B4 */  .4byte func_ovl2_800D8BB4
  /* 53128 0A4DB8 801295B8 */  .4byte ftCommon_LightGet_ProcMap
  .incbin "ovl2.raw.bin", 0x5312C, 0x4
  /* 53130 0A4DC0 801295C0 */  .4byte ftCommon_Get_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53134, 0x4
  /* 53138 0A4DC8 801295C8 */  .4byte func_ovl2_800D8BB4
  /* 5313C 0A4DCC 801295CC */  .4byte ftCommon_HeavyGet_ProcMap
  .incbin "ovl2.raw.bin", 0x53140, 0x8
  /* 53148 0A4DD8 801295D8 */  .4byte ftCommon_LiftWait_ProcInterrupt
  /* 5314C 0A4DDC 801295DC */  .4byte func_ovl2_800D8BB4
  /* 53150 0A4DE0 801295E0 */  .4byte ftCommon_HeavyGet_ProcMap
  .incbin "ovl2.raw.bin", 0x53154, 0x4
  /* 53158 0A4DE8 801295E8 */  .4byte ftCommon_LiftTurn_ProcUpdate
  /* 5315C 0A4DEC 801295EC */  .4byte ftCommon_LiftTurn_ProcInterrupt
  /* 53160 0A4DF0 801295F0 */  .4byte func_ovl2_800D8BB4
  /* 53164 0A4DF4 801295F4 */  .4byte ftCommon_HeavyGet_ProcMap
  .incbin "ovl2.raw.bin", 0x53168, 0x4
  /* 5316C 0A4DFC 801295FC */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53170, 0x4

glabel jtbl_ovl2_80129604
  /* 53174 0A4E04 80129604 */  .4byte func_ovl2_800D8BB4
  /* 53178 0A4E08 80129608 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x5317C, 0x4
  /* 53180 0A4E10 80129610 */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53184, 0x4

glabel jtbl_ovl2_80129618
  /* 53188 0A4E18 80129618 */  .4byte func_ovl2_800D8C14
  /* 5318C 0A4E1C 8012961C */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53190, 0x4
  /* 53194 0A4E24 80129624 */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53198, 0x4

glabel jtbl_ovl2_8012962C
  /* 5319C 0A4E2C 8012962C */  .4byte func_ovl2_800D8BB4
  /* 531A0 0A4E30 80129630 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x531A4, 0x4
  /* 531A8 0A4E38 80129638 */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x531AC, 0x4

glabel jtbl_ovl2_80129640
  /* 531B0 0A4E40 80129640 */  .4byte func_ovl2_800D8BB4
  /* 531B4 0A4E44 80129644 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x531B8, 0x4
  /* 531BC 0A4E4C 8012964C */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x531C0, 0x4

glabel jtbl_ovl2_80129654
  /* 531C4 0A4E54 80129654 */  .4byte func_ovl2_800D8BB4
  /* 531C8 0A4E58 80129658 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x531CC, 0x4
  /* 531D0 0A4E60 80129660 */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x531D4, 0x4

glabel jtbl_ovl2_80129668
  /* 531D8 0A4E68 80129668 */  .4byte func_ovl2_800D8BB4
  /* 531DC 0A4E6C 8012966C */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x531E0, 0x4
  /* 531E4 0A4E74 80129674 */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x531E8, 0x4

glabel jtbl_ovl2_8012967C
  /* 531EC 0A4E7C 8012967C */  .4byte func_ovl2_800D8BB4
  /* 531F0 0A4E80 80129680 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x531F4, 0x4
  /* 531F8 0A4E88 80129688 */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x531FC, 0x4

glabel jtbl_ovl2_80129690
  /* 53200 0A4E90 80129690 */  .4byte func_ovl2_800D8BB4
  /* 53204 0A4E94 80129694 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53208, 0x4
  /* 5320C 0A4E9C 8012969C */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53210, 0x4

glabel jtbl_ovl2_801296A4
  /* 53214 0A4EA4 801296A4 */  .4byte func_ovl2_800D8BB4
  /* 53218 0A4EA8 801296A8 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x5321C, 0x4
  /* 53220 0A4EB0 801296B0 */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53224, 0x4

glabel jtbl_ovl2_801296B8
  /* 53228 0A4EB8 801296B8 */  .4byte func_ovl2_800D8BB4
  /* 5322C 0A4EBC 801296BC */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53230, 0x4
  /* 53234 0A4EC4 801296C4 */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53238, 0x4

glabel jtbl_ovl2_801296CC
  /* 5323C 0A4ECC 801296CC */  .4byte jtgt_ovl2_800D90E0
  /* 53240 0A4ED0 801296D0 */  .4byte jtgt_ovl2_800DE934
  .incbin "ovl2.raw.bin", 0x53244, 0x4
  /* 53248 0A4ED8 801296D8 */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5324C, 0x4

glabel jtbl_ovl2_801296E0
  /* 53250 0A4EE0 801296E0 */  .4byte jtgt_ovl2_800D90E0
  /* 53254 0A4EE4 801296E4 */  .4byte jtgt_ovl2_800DE934
  .incbin "ovl2.raw.bin", 0x53258, 0x4
  /* 5325C 0A4EEC 801296EC */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53260, 0x4

glabel jtbl_ovl2_801296F4
  /* 53264 0A4EF4 801296F4 */  .4byte jtgt_ovl2_800D90E0
  /* 53268 0A4EF8 801296F8 */  .4byte jtgt_ovl2_800DE934
  .incbin "ovl2.raw.bin", 0x5326C, 0x4
  /* 53270 0A4F00 80129700 */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53274, 0x4

glabel jtbl_ovl2_80129708
  /* 53278 0A4F08 80129708 */  .4byte jtgt_ovl2_800D90E0
  /* 5327C 0A4F0C 8012970C */  .4byte jtgt_ovl2_800DE934
  .incbin "ovl2.raw.bin", 0x53280, 0x4
  /* 53284 0A4F14 80129714 */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53288, 0x4

glabel jtbl_ovl2_8012971C
  /* 5328C 0A4F1C 8012971C */  .4byte jtgt_ovl2_800D90E0
  /* 53290 0A4F20 80129720 */  .4byte jtgt_ovl2_800DE934
  .incbin "ovl2.raw.bin", 0x53294, 0x4
  /* 53298 0A4F28 80129728 */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5329C, 0x4

glabel jtbl_ovl2_80129730
  /* 532A0 0A4F30 80129730 */  .4byte jtgt_ovl2_800D90E0
  /* 532A4 0A4F34 80129734 */  .4byte jtgt_ovl2_800DE934
  .incbin "ovl2.raw.bin", 0x532A8, 0x4
  /* 532AC 0A4F3C 8012973C */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x532B0, 0x4

glabel jtbl_ovl2_80129744
  /* 532B4 0A4F44 80129744 */  .4byte jtgt_ovl2_800D90E0
  /* 532B8 0A4F48 80129748 */  .4byte jtgt_ovl2_800DE934
  .incbin "ovl2.raw.bin", 0x532BC, 0x4
  /* 532C0 0A4F50 80129750 */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x532C4, 0x4

glabel jtbl_ovl2_80129758
  /* 532C8 0A4F58 80129758 */  .4byte jtgt_ovl2_800D90E0
  /* 532CC 0A4F5C 8012975C */  .4byte jtgt_ovl2_800DE934
  .incbin "ovl2.raw.bin", 0x532D0, 0x4
  /* 532D4 0A4F64 80129764 */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x532D8, 0x4
  /* 532DC 0A4F6C 8012976C */  .4byte func_ovl2_800D8BB4
  /* 532E0 0A4F70 80129770 */  .4byte ftCommon_HeavyThrow_ProcMap
  .incbin "ovl2.raw.bin", 0x532E4, 0x4
  /* 532E8 0A4F78 80129778 */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x532EC, 0x4
  /* 532F0 0A4F80 80129780 */  .4byte func_ovl2_800D8BB4
  /* 532F4 0A4F84 80129784 */  .4byte ftCommon_HeavyThrow_ProcMap
  .incbin "ovl2.raw.bin", 0x532F8, 0x4
  /* 532FC 0A4F8C 8012978C */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53300, 0x4
  /* 53304 0A4F94 80129794 */  .4byte func_ovl2_800D8BB4
  /* 53308 0A4F98 80129798 */  .4byte ftCommon_HeavyThrow_ProcMap
  .incbin "ovl2.raw.bin", 0x5330C, 0x4
  /* 53310 0A4FA0 801297A0 */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53314, 0x4
  /* 53318 0A4FA8 801297A8 */  .4byte func_ovl2_800D8BB4
  /* 5331C 0A4FAC 801297AC */  .4byte ftCommon_HeavyThrow_ProcMap
  .incbin "ovl2.raw.bin", 0x53320, 0x4
  /* 53324 0A4FB4 801297B4 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x53328, 0x4

glabel jtbl_ovl2_801297BC
  /* 5332C 0A4FBC 801297BC */  .4byte func_ovl2_800D8BB4
  /* 53330 0A4FC0 801297C0 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53334, 0x4
  /* 53338 0A4FC8 801297C8 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x5333C, 0x4

glabel jtbl_ovl2_801297D0
  /* 53340 0A4FD0 801297D0 */  .4byte func_ovl2_800D8BB4
  /* 53344 0A4FD4 801297D4 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53348, 0x4
  /* 5334C 0A4FDC 801297DC */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x53350, 0x4

glabel jtbl_ovl2_801297E4
  /* 53354 0A4FE4 801297E4 */  .4byte jtgt_ovl2_800D8CCC
  /* 53358 0A4FE8 801297E8 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x5335C, 0x4
  /* 53360 0A4FF0 801297F0 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x53364, 0x4

glabel jtbl_ovl2_801297F8
  /* 53368 0A4FF8 801297F8 */  .4byte func_ovl2_800D8C14
  /* 5336C 0A4FFC 801297FC */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53370, 0x4
  /* 53374 0A5004 80129804 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x53378, 0x4

glabel jtbl_ovl2_8012980C
  /* 5337C 0A500C 8012980C */  .4byte func_ovl2_800D8BB4
  /* 53380 0A5010 80129810 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53384, 0x4
  /* 53388 0A5018 80129818 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x5338C, 0x4

glabel jtbl_ovl2_80129820
  /* 53390 0A5020 80129820 */  .4byte func_ovl2_800D8BB4
  /* 53394 0A5024 80129824 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53398, 0x4
  /* 5339C 0A502C 8012982C */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x533A0, 0x4

glabel jtbl_ovl2_80129834
  /* 533A4 0A5034 80129834 */  .4byte jtgt_ovl2_800D8CCC
  /* 533A8 0A5038 80129838 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x533AC, 0x4
  /* 533B0 0A5040 80129840 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x533B4, 0x4

glabel jtbl_ovl2_80129848
  /* 533B8 0A5048 80129848 */  .4byte func_ovl2_800D8C14
  /* 533BC 0A504C 8012984C */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x533C0, 0x4
  /* 533C4 0A5054 80129854 */  .4byte ftCommon_HarisenSwing_ProcUpdate
  .incbin "ovl2.raw.bin", 0x533C8, 0x4

glabel jtbl_ovl2_8012985C
  /* 533CC 0A505C 8012985C */  .4byte func_ovl2_800D8BB4
  /* 533D0 0A5060 80129860 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x533D4, 0x4
  /* 533D8 0A5068 80129868 */  .4byte ftCommon_HarisenSwing_ProcUpdate
  .incbin "ovl2.raw.bin", 0x533DC, 0x4

glabel jtbl_ovl2_80129870
  /* 533E0 0A5070 80129870 */  .4byte func_ovl2_800D8BB4
  /* 533E4 0A5074 80129874 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x533E8, 0x4
  /* 533EC 0A507C 8012987C */  .4byte ftCommon_HarisenSwing_ProcUpdate
  .incbin "ovl2.raw.bin", 0x533F0, 0x4

glabel jtbl_ovl2_80129884
  /* 533F4 0A5084 80129884 */  .4byte jtgt_ovl2_800D8CCC
  /* 533F8 0A5088 80129888 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x533FC, 0x4
  /* 53400 0A5090 80129890 */  .4byte ftCommon_HarisenSwing_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53404, 0x4

glabel jtbl_ovl2_80129898
  /* 53408 0A5098 80129898 */  .4byte func_ovl2_800D8C14
  /* 5340C 0A509C 8012989C */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53410, 0x4
  /* 53414 0A50A4 801298A4 */  .4byte ftCommon_StarRodSwing_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53418, 0x4

glabel jtbl_ovl2_801298AC
  /* 5341C 0A50AC 801298AC */  .4byte func_ovl2_800D8BB4
  /* 53420 0A50B0 801298B0 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53424, 0x4
  /* 53428 0A50B8 801298B8 */  .4byte ftCommon_StarRodSwing_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5342C, 0x4

glabel jtbl_ovl2_801298C0
  /* 53430 0A50C0 801298C0 */  .4byte func_ovl2_800D8BB4
  /* 53434 0A50C4 801298C4 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53438, 0x4
  /* 5343C 0A50CC 801298CC */  .4byte ftCommon_StarRodSwing_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53440, 0x4

glabel jtbl_ovl2_801298D4
  /* 53444 0A50D4 801298D4 */  .4byte jtgt_ovl2_800D8CCC
  /* 53448 0A50D8 801298D8 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x5344C, 0x4
  /* 53450 0A50E0 801298E0 */  .4byte ftCommon_StarRodSwing_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53454, 0x4

glabel jtbl_ovl2_801298E8
  /* 53458 0A50E8 801298E8 */  .4byte func_ovl2_800D8C14
  /* 5345C 0A50EC 801298EC */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53460, 0x4
  /* 53464 0A50F4 801298F4 */  .4byte ftCommon_LGunShoot_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53468, 0x4
  /* 5346C 0A50FC 801298FC */  .4byte func_ovl2_800D8BB4
  /* 53470 0A5100 80129900 */  .4byte ftCommon_LGunShoot_ProcMap
  .incbin "ovl2.raw.bin", 0x53474, 0x4
  /* 53478 0A5108 80129908 */  .4byte ftCommon_LGunShoot_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5347C, 0x4
  /* 53480 0A5110 80129910 */  .4byte jtgt_ovl2_800D90E0
  /* 53484 0A5114 80129914 */  .4byte ftCommon_LGunShootAir_ProcMap
  .incbin "ovl2.raw.bin", 0x53488, 0x4
  /* 5348C 0A511C 8012991C */  .4byte ftCommon_FireFlowerShoot_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53490, 0x4
  /* 53494 0A5124 80129924 */  .4byte func_ovl2_800D8BB4
  /* 53498 0A5128 80129928 */  .4byte ftCommon_FireFlowerShoot_ProcMap
  .incbin "ovl2.raw.bin", 0x5349C, 0x4
  /* 534A0 0A5130 80129930 */  .4byte ftCommon_FireFlowerShoot_ProcUpdate
  .incbin "ovl2.raw.bin", 0x534A4, 0x4
  /* 534A8 0A5138 80129938 */  .4byte jtgt_ovl2_800D90E0
  /* 534AC 0A513C 8012993C */  .4byte ftCommon_FireFlowerShootAir_ProcMap
  .incbin "ovl2.raw.bin", 0x534B0, 0x8

glabel jtbl_ovl2_80129948
  /* 534B8 0A5148 80129948 */  .4byte ftCommon_HammerProcInterrupt
  /* 534BC 0A514C 8012994C */  .4byte func_ovl2_800D8BB4
  /* 534C0 0A5150 80129950 */  .4byte ftCommon_HammerCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x534C4, 0x8
  /* 534CC 0A515C 8012995C */  .4byte ftCommon_HammerWalk_ProcInterrupt
  /* 534D0 0A5160 80129960 */  .4byte ftCommon_Walk_ProcPhysics
  /* 534D4 0A5164 80129964 */  .4byte ftCommon_HammerCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x534D8, 0x4
  /* 534DC 0A516C 8012996C */  .4byte ftCommon_HammerTurn_ProcUpdate
  /* 534E0 0A5170 80129970 */  .4byte ftCommon_HammerTurn_ProcInterrupt

glabel jtbl_ovl2_80129974
  /* 534E4 0A5174 80129974 */  .4byte func_ovl2_800D8BB4
  /* 534E8 0A5178 80129978 */  .4byte ftCommon_HammerCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x534EC, 0x4
  /* 534F0 0A5180 80129980 */  .4byte ftCommon_HammerKneeBend_ProcUpdate
  /* 534F4 0A5184 80129984 */  .4byte ftCommon_HammerKneeBend_ProcInterrupt

glabel jtbl_ovl2_80129988
  /* 534F8 0A5188 80129988 */  .4byte func_ovl2_800D8BB4
  /* 534FC 0A518C 8012998C */  .4byte ftCommon_HammerCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x53500, 0x8
  /* 53508 0A5198 80129998 */  .4byte ftCommon_HammerFall_ProcInterrupt
  /* 5350C 0A519C 8012999C */  .4byte jtgt_ovl2_800D9160
  /* 53510 0A51A0 801299A0 */  .4byte ftCommon_HammerFall_ProcMap
  .incbin "ovl2.raw.bin", 0x53514, 0x4
  /* 53518 0A51A8 801299A8 */  .4byte ftCommon_HammerLanding_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5351C, 0x4

glabel jtbl_ovl2_801299B0
  /* 53520 0A51B0 801299B0 */  .4byte func_ovl2_800D8BB4
  /* 53524 0A51B4 801299B4 */  .4byte ftCommon_HammerCommon_ProcMap
  .incbin "ovl2.raw.bin", 0x53528, 0x4
  /* 5352C 0A51BC 801299BC */  .4byte func_ovl3_80148A88
  /* 53530 0A51C0 801299C0 */  .4byte func_ovl3_80148B84

glabel jtbl_ovl2_801299C4
  /* 53534 0A51C4 801299C4 */  .4byte func_ovl2_800D8BB4
  /* 53538 0A51C8 801299C8 */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x5353C, 0x4
  /* 53540 0A51D0 801299D0 */  .4byte func_ovl3_80148D4C
  /* 53544 0A51D4 801299D4 */  .4byte func_ovl3_80148B84

glabel jtbl_ovl2_801299D8
  /* 53548 0A51D8 801299D8 */  .4byte func_ovl2_800D8BB4
  /* 5354C 0A51DC 801299DC */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x53550, 0x4
  /* 53554 0A51E4 801299E4 */  .4byte ftCommon_GuardOn_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53558, 0x4

glabel jtbl_ovl2_801299EC
  /* 5355C 0A51EC 801299EC */  .4byte func_ovl2_800D8BB4
  /* 53560 0A51F0 801299F0 */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x53564, 0x4
  /* 53568 0A51F8 801299F8 */  .4byte ftCommon_GuardSetOff_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5356C, 0x4

glabel jtbl_ovl2_80129A00
  /* 53570 0A5200 80129A00 */  .4byte func_ovl2_800D8BB4
  /* 53574 0A5204 80129A04 */  .4byte jtgt_ovl2_800DDEC4
  /* 53578 0A5208 80129A08 */
  .asciz "\""
  .balign 4
  /* 5357C 0A520C 80129A0C */  .4byte ftCommon_Escape_ProcUpdate
  /* 53580 0A5210 80129A10 */  .4byte ftCommon_Escape_ProcInterrupt

glabel jtbl_ovl2_80129A14
  /* 53584 0A5214 80129A14 */  .4byte func_ovl2_800D8C14
  /* 53588 0A5218 80129A18 */  .4byte func_ovl2_800DDF44
  /* 5358C 0A521C 80129A1C */
  .asciz "\"@"
  .balign 4
  /* 53590 0A5220 80129A20 */  .4byte ftCommon_Escape_ProcUpdate
  /* 53594 0A5224 80129A24 */  .4byte ftCommon_Escape_ProcInterrupt

glabel jtbl_ovl2_80129A28
  /* 53598 0A5228 80129A28 */  .4byte func_ovl2_800D8C14
  /* 5359C 0A522C 80129A2C */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x535A0, 0x4
  /* 535A4 0A5234 80129A34 */  .4byte ftCommon_ShieldBreakFly_ProcUpdate
  .incbin "ovl2.raw.bin", 0x535A8, 0x4
  /* 535AC 0A523C 80129A3C */  .4byte func_ovl2_800D91EC
  /* 535B0 0A5240 80129A40 */  .4byte ftCommon_ShieldBreakFly_ProcMap
  .incbin "ovl2.raw.bin", 0x535B4, 0xC
  /* 535C0 0A5250 80129A50 */  .4byte func_ovl2_800D91EC
  /* 535C4 0A5254 80129A54 */  .4byte ftCommon_ShieldBreakFall_ProcMap
  /* 535C8 0A5258 80129A58 */
  .asciz "#"
  .balign 4
  /* 535CC 0A525C 80129A5C */  .4byte ftCommon_ShieldBreakDown_ProcUpdate
  .incbin "ovl2.raw.bin", 0x535D0, 0x4

glabel jtbl_ovl2_80129A64
  /* 535D4 0A5264 80129A64 */  .4byte func_ovl2_800D8BB4
  /* 535D8 0A5268 80129A68 */  .4byte jtgt_ovl2_800DDEC4
  /* 535DC 0A526C 80129A6C */
  .asciz "#@"
  .balign 4
  /* 535E0 0A5270 80129A70 */  .4byte ftCommon_ShieldBreakDown_ProcUpdate
  .incbin "ovl2.raw.bin", 0x535E4, 0x4

glabel jtbl_ovl2_80129A78
  /* 535E8 0A5278 80129A78 */  .4byte func_ovl2_800D8BB4
  /* 535EC 0A527C 80129A7C */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x535F0, 0x4
  /* 535F4 0A5284 80129A84 */  .4byte ftCommon_ShieldBreakStand_ProcUpdate
  .incbin "ovl2.raw.bin", 0x535F8, 0x4

glabel jtbl_ovl2_80129A8C
  /* 535FC 0A528C 80129A8C */  .4byte func_ovl2_800D8BB4
  /* 53600 0A5290 80129A90 */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x53604, 0x4
  /* 53608 0A5298 80129A98 */  .4byte ftCommon_ShieldBreakStand_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5360C, 0x4

glabel jtbl_ovl2_80129AA0
  /* 53610 0A52A0 80129AA0 */  .4byte func_ovl2_800D8BB4
  /* 53614 0A52A4 80129AA4 */  .4byte jtgt_ovl2_800DDEC4
  /* 53618 0A52A8 80129AA8 */
  .asciz "$"
  .balign 4
  /* 5361C 0A52AC 80129AAC */  .4byte ftCommon_FuraFura_ProcInterrupt
  .incbin "ovl2.raw.bin", 0x53620, 0x4

glabel jtbl_ovl2_80129AB4
  /* 53624 0A52B4 80129AB4 */  .4byte func_ovl2_800D8BB4
  /* 53628 0A52B8 80129AB8 */  .4byte jtgt_ovl2_800DDEC4
  /* 5362C 0A52BC 80129ABC */
  .asciz "$@"
  .balign 4
  /* 53630 0A52C0 80129AC0 */  .4byte ftCommon_FuraSleep_ProcInterrupt
  .incbin "ovl2.raw.bin", 0x53634, 0x4

glabel jtbl_ovl2_80129AC8
  /* 53638 0A52C8 80129AC8 */  .4byte func_ovl2_800D8BB4
  /* 5363C 0A52CC 80129ACC */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x53640, 0x4
  /* 53644 0A52D4 80129AD4 */  .4byte ftCommon_Catch_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53648, 0x4
  /* 5364C 0A52DC 80129ADC */  .4byte func_ovl2_800D8BB4
  /* 53650 0A52E0 80129AE0 */  .4byte ftCommon_Catch_ProcMap
  .incbin "ovl2.raw.bin", 0x53654, 0x4
  /* 53658 0A52E8 80129AE8 */  .4byte ftCommon_CatchPull_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5365C, 0x4
  /* 53660 0A52F0 80129AF0 */  .4byte func_ovl2_800D8BB4
  /* 53664 0A52F4 80129AF4 */  .4byte ftCommon_Catch_ProcMap
  .incbin "ovl2.raw.bin", 0x53668, 0x8
  /* 53670 0A5300 80129B00 */  .4byte ftCommon_CatchWait_ProcUpdate
  /* 53674 0A5304 80129B04 */  .4byte func_ovl2_800D8BB4
  /* 53678 0A5308 80129B08 */  .4byte ftCommon_Catch_ProcMap
  .incbin "ovl2.raw.bin", 0x5367C, 0x4
  /* 53680 0A5310 80129B10 */  .4byte ftCommon_Throw_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53684, 0x4
  /* 53688 0A5318 80129B18 */  .4byte jtgt_ovl2_800D8CCC
  /* 5368C 0A531C 80129B1C */  .4byte ftCommon_Catch_ProcMap
  .incbin "ovl2.raw.bin", 0x53690, 0x4
  /* 53694 0A5324 80129B24 */  .4byte ftCommon_Throw_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53698, 0x4
  /* 5369C 0A532C 80129B2C */  .4byte jtgt_ovl2_800D8CCC
  /* 536A0 0A5330 80129B30 */  .4byte ftCommon_Catch_ProcMap
  .incbin "ovl2.raw.bin", 0x536A4, 0xC
  /* 536B0 0A5340 80129B40 */  .4byte ftCommon_Capture_ProcPhysics
  /* 536B4 0A5344 80129B44 */  .4byte ftCommon_CapturePulled_ProcMap
  .incbin "ovl2.raw.bin", 0x536B8, 0xC
  /* 536C4 0A5354 80129B54 */  .4byte ftCommon_Capture_ProcPhysics
  /* 536C8 0A5358 80129B58 */  .4byte ftCommon_CaptureWait_ProcMap
  .incbin "ovl2.raw.bin", 0x536CC, 0xC
  /* 536D8 0A5368 80129B68 */  .4byte ftCommon_CaptureKirby_ProcPhysics
  /* 536DC 0A536C 80129B6C */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x536E0, 0x8
  /* 536E8 0A5378 80129B78 */  .4byte ftCommon_CaptureWaitKirby_ProcInterrupt
  .incbin "ovl2.raw.bin", 0x536EC, 0x4
  /* 536F0 0A5380 80129B80 */  .4byte ftCommon_CaptureWaitKirby_ProcMap
  .incbin "ovl2.raw.bin", 0x536F4, 0x4
  /* 536F8 0A5388 80129B88 */  .4byte ftCommon_ThrownKirbyStar_ProcUpdate
  .incbin "ovl2.raw.bin", 0x536FC, 0x4
  /* 53700 0A5390 80129B90 */  .4byte ftCommon_ThrownKirbyStar_ProcPhysics
  /* 53704 0A5394 80129B94 */  .4byte ftCommon_ThrownStar_ProcMap
  /* 53708 0A5398 80129B98 */
  .asciz "&"
  .balign 4
  /* 5370C 0A539C 80129B9C */  .4byte ftCommon_ThrownCopyStar_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53710, 0x4
  /* 53714 0A53A4 80129BA4 */  .4byte ftCommon_ThrownCopyStar_ProcPhysics
  /* 53718 0A53A8 80129BA8 */  .4byte ftCommon_ThrownStar_ProcMap
  .incbin "ovl2.raw.bin", 0x5371C, 0xC
  /* 53728 0A53B8 80129BB8 */  .4byte ftCommon_CaptureYoshi_ProcPhysics
  /* 5372C 0A53BC 80129BBC */  .4byte func_ovl2_800DE348
  /* 53730 0A53C0 80129BC0 */
  .asciz "&@"
  .balign 4
  /* 53734 0A53C4 80129BC4 */  .4byte ftCommon_YoshiEgg_ProcUpdate
  /* 53738 0A53C8 80129BC8 */  .4byte ftCommon_YoshiEgg_ProcInterrupt
  /* 5373C 0A53CC 80129BCC */  .4byte ftCommon_YoshiEgg_ProcPhysics
  /* 53740 0A53D0 80129BD0 */  .4byte ftCommon_YoshiEgg_ProcMap
  .incbin "ovl2.raw.bin", 0x53744, 0xC
  /* 53750 0A53E0 80129BE0 */  .4byte ftCommon_CaptureCaptain_ProcPhysics
  /* 53754 0A53E4 80129BE4 */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x53758, 0x14
  /* 5376C 0A53FC 80129BFC */
  .asciz "\'"
  .balign 4
  /* 53770 0A5400 80129C00 */  .4byte ftCommon_Thrown_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53774, 0x4
  /* 53778 0A5408 80129C08 */  .4byte ftCommon_Thrown_ProcPhysics
  /* 5377C 0A540C 80129C0C */  .4byte ftCommon_Thrown_ProcMap
  /* 53780 0A5410 80129C10 */
  .asciz "\'@"
  .balign 4
  /* 53784 0A5414 80129C14 */  .4byte ftCommon_Thrown_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53788, 0x4
  /* 5378C 0A541C 80129C1C */  .4byte ftCommon_Thrown_ProcPhysics
  /* 53790 0A5420 80129C20 */  .4byte ftCommon_Thrown_ProcMap
  .incbin "ovl2.raw.bin", 0x53794, 0x4
  /* 53798 0A5428 80129C28 */  .4byte ftCommon_Thrown_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5379C, 0x4
  /* 537A0 0A5430 80129C30 */  .4byte ftCommon_Thrown_ProcPhysics
  /* 537A4 0A5434 80129C34 */  .4byte ftCommon_Thrown_ProcMap
  .incbin "ovl2.raw.bin", 0x537A8, 0x8
  /* 537B0 0A5440 80129C40 */  .4byte ftCommon_Trap_ProcInterrupt
  /* 537B4 0A5444 80129C44 */  .4byte ftCommon_Thrown_ProcPhysics
  /* 537B8 0A5448 80129C48 */  .4byte ftCommon_Thrown_ProcMap
  /* 537BC 0A544C 80129C4C */
  .asciz "("
  .balign 4
  .incbin "ovl2.raw.bin", 0x537C0, 0x8
  /* 537C8 0A5458 80129C58 */  .4byte ftCommon_Thrown_ProcPhysics
  /* 537CC 0A545C 80129C5C */  .4byte ftCommon_Thrown_ProcMap
  /* 537D0 0A5460 80129C60 */
  .asciz "(@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x537D4, 0x8
  /* 537DC 0A546C 80129C6C */  .4byte ftCommon_Thrown_ProcPhysics
  /* 537E0 0A5470 80129C70 */  .4byte ftCommon_Thrown_ProcMap
  .incbin "ovl2.raw.bin", 0x537E4, 0xC
  /* 537F0 0A5480 80129C80 */  .4byte ftCommon_Thrown_ProcPhysics
  /* 537F4 0A5484 80129C84 */  .4byte ftCommon_Thrown_ProcMap
  .incbin "ovl2.raw.bin", 0x537F8, 0xC
  /* 53804 0A5494 80129C94 */  .4byte ftCommon_Thrown_ProcPhysics
  /* 53808 0A5498 80129C98 */  .4byte ftCommon_Thrown_ProcMap
  /* 5380C 0A549C 80129C9C */
  .asciz ")"
  .balign 4
  /* 53810 0A54A0 80129CA0 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  /* 53814 0A54A4 80129CA4 */  .4byte ftCommon_Appeal_ProcInterrupt

glabel jtbl_ovl2_80129CA8
  /* 53818 0A54A8 80129CA8 */  .4byte func_ovl2_800D8BB4
  /* 5381C 0A54AC 80129CAC */  .4byte jtgt_ovl2_800DDEE8
  .incbin "ovl2.raw.bin", 0x53820, 0x4
  /* 53824 0A54B4 80129CB4 */  .4byte ftCommon_Attack11_ProcUpdate
  /* 53828 0A54B8 80129CB8 */  .4byte ftCommon_Attack11_ProcInterrupt

glabel jtbl_ovl2_80129CBC
  /* 5382C 0A54BC 80129CBC */  .4byte func_ovl2_800D8BB4
  /* 53830 0A54C0 80129CC0 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53834, 0x4
  /* 53838 0A54C8 80129CC8 */  .4byte ftCommon_Attack12_ProcUpdate
  /* 5383C 0A54CC 80129CCC */  .4byte ftCommon_Attack12_ProcInterrupt

glabel jtbl_ovl2_80129CD0
  /* 53840 0A54D0 80129CD0 */  .4byte func_ovl2_800D8BB4
  /* 53844 0A54D4 80129CD4 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53848, 0x4
  /* 5384C 0A54DC 80129CDC */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x53850, 0x4

glabel jtbl_ovl2_80129CE4
  /* 53854 0A54E4 80129CE4 */  .4byte func_ovl2_800D8C14
  /* 53858 0A54E8 80129CE8 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x5385C, 0x4
  /* 53860 0A54F0 80129CF0 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x53864, 0x4

glabel jtbl_ovl2_80129CF8
  /* 53868 0A54F8 80129CF8 */  .4byte jtgt_ovl2_800D8CCC
  /* 5386C 0A54FC 80129CFC */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53870, 0x4
  /* 53874 0A5504 80129D04 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x53878, 0x4

glabel jtbl_ovl2_80129D0C
  /* 5387C 0A550C 80129D0C */  .4byte jtgt_ovl2_800D8CCC
  /* 53880 0A5510 80129D10 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53884, 0x4
  /* 53888 0A5518 80129D18 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x5388C, 0x4

glabel jtbl_ovl2_80129D20
  /* 53890 0A5520 80129D20 */  .4byte jtgt_ovl2_800D8CCC
  /* 53894 0A5524 80129D24 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53898, 0x4
  /* 5389C 0A552C 80129D2C */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x538A0, 0x4

glabel jtbl_ovl2_80129D34
  /* 538A4 0A5534 80129D34 */  .4byte jtgt_ovl2_800D8CCC
  /* 538A8 0A5538 80129D38 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x538AC, 0x4
  /* 538B0 0A5540 80129D40 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x538B4, 0x4

glabel jtbl_ovl2_80129D48
  /* 538B8 0A5548 80129D48 */  .4byte jtgt_ovl2_800D8CCC
  /* 538BC 0A554C 80129D4C */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x538C0, 0x4
  /* 538C4 0A5554 80129D54 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x538C8, 0x4

glabel jtbl_ovl2_80129D5C
  /* 538CC 0A555C 80129D5C */  .4byte func_ovl2_800D8BB4
  /* 538D0 0A5560 80129D60 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x538D4, 0x4
  /* 538D8 0A5568 80129D68 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x538DC, 0x4

glabel jtbl_ovl2_80129D70
  /* 538E0 0A5570 80129D70 */  .4byte jtgt_ovl2_800D8CCC
  /* 538E4 0A5574 80129D74 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x538E8, 0x4
  /* 538EC 0A557C 80129D7C */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x538F0, 0x4

glabel jtbl_ovl2_80129D84
  /* 538F4 0A5584 80129D84 */  .4byte func_ovl2_800D8BB4
  /* 538F8 0A5588 80129D88 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x538FC, 0x4
  /* 53900 0A5590 80129D90 */  .4byte ftCommon_AttackLw3_ProcUpdate
  /* 53904 0A5594 80129D94 */  .4byte ftCommon_AttackLw3_ProcInterrupt

glabel jtbl_ovl2_80129D98
  /* 53908 0A5598 80129D98 */  .4byte jtgt_ovl2_800D8CCC
  /* 5390C 0A559C 80129D9C */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53910, 0x4
  /* 53914 0A55A4 80129DA4 */  .4byte ftCommon_AttackS4_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53918, 0x4

glabel jtbl_ovl2_80129DAC
  /* 5391C 0A55AC 80129DAC */  .4byte jtgt_ovl2_800D8CCC
  /* 53920 0A55B0 80129DB0 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53924, 0x4
  /* 53928 0A55B8 80129DB8 */  .4byte ftCommon_AttackS4_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5392C, 0x4

glabel jtbl_ovl2_80129DC0
  /* 53930 0A55C0 80129DC0 */  .4byte jtgt_ovl2_800D8CCC
  /* 53934 0A55C4 80129DC4 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53938, 0x4
  /* 5393C 0A55CC 80129DCC */  .4byte ftCommon_AttackS4_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53940, 0x4

glabel jtbl_ovl2_80129DD4
  /* 53944 0A55D4 80129DD4 */  .4byte jtgt_ovl2_800D8CCC
  /* 53948 0A55D8 80129DD8 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x5394C, 0x4
  /* 53950 0A55E0 80129DE0 */  .4byte ftCommon_AttackS4_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53954, 0x4

glabel jtbl_ovl2_80129DE8
  /* 53958 0A55E8 80129DE8 */  .4byte jtgt_ovl2_800D8CCC
  /* 5395C 0A55EC 80129DEC */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53960, 0x4
  /* 53964 0A55F4 80129DF4 */  .4byte ftCommon_AttackS4_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53968, 0x4

glabel jtbl_ovl2_80129DFC
  /* 5396C 0A55FC 80129DFC */  .4byte jtgt_ovl2_800D8CCC
  /* 53970 0A5600 80129E00 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53974, 0x4
  /* 53978 0A5608 80129E08 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x5397C, 0x4

glabel jtbl_ovl2_80129E10
  /* 53980 0A5610 80129E10 */  .4byte jtgt_ovl2_800D8CCC
  /* 53984 0A5614 80129E14 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53988, 0x4
  /* 5398C 0A561C 80129E1C */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x53990, 0x4

glabel jtbl_ovl2_80129E24
  /* 53994 0A5624 80129E24 */  .4byte func_ovl2_800D8BB4
  /* 53998 0A5628 80129E28 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x5399C, 0x4
  /* 539A0 0A5630 80129E30 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x539A4, 0x4
  /* 539A8 0A5638 80129E38 */  .4byte jtgt_ovl2_800D90E0
  /* 539AC 0A563C 80129E3C */  .4byte ftCommon_AttackAir_ProcMap
  .incbin "ovl2.raw.bin", 0x539B0, 0x4
  /* 539B4 0A5644 80129E44 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x539B8, 0x4
  /* 539BC 0A564C 80129E4C */  .4byte jtgt_ovl2_800D90E0
  /* 539C0 0A5650 80129E50 */  .4byte ftCommon_AttackAir_ProcMap
  .incbin "ovl2.raw.bin", 0x539C4, 0x4
  /* 539C8 0A5658 80129E58 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x539CC, 0x4
  /* 539D0 0A5660 80129E60 */  .4byte jtgt_ovl2_800D90E0
  /* 539D4 0A5664 80129E64 */  .4byte ftCommon_AttackAir_ProcMap
  .incbin "ovl2.raw.bin", 0x539D8, 0x4
  /* 539DC 0A566C 80129E6C */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x539E0, 0x4
  /* 539E4 0A5674 80129E74 */  .4byte jtgt_ovl2_800D90E0
  /* 539E8 0A5678 80129E78 */  .4byte ftCommon_AttackAir_ProcMap
  .incbin "ovl2.raw.bin", 0x539EC, 0x4
  /* 539F0 0A5680 80129E80 */  .4byte ftCommon_AttackAirLw_ProcUpdate
  .incbin "ovl2.raw.bin", 0x539F4, 0x4
  /* 539F8 0A5688 80129E88 */  .4byte jtgt_ovl2_800D90E0
  /* 539FC 0A568C 80129E8C */  .4byte ftCommon_AttackAir_ProcMap
  .incbin "ovl2.raw.bin", 0x53A00, 0x4
  /* 53A04 0A5694 80129E94 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x53A08, 0x4

glabel jtbl_ovl2_80129E9C
  /* 53A0C 0A569C 80129E9C */  .4byte func_ovl2_800D8BB4
  /* 53A10 0A56A0 80129EA0 */  .4byte jtgt_ovl2_800DDEE8
  .incbin "ovl2.raw.bin", 0x53A14, 0x4
  /* 53A18 0A56A8 80129EA8 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x53A1C, 0x4

glabel jtbl_ovl2_80129EB0
  /* 53A20 0A56B0 80129EB0 */  .4byte func_ovl2_800D8BB4
  /* 53A24 0A56B4 80129EB4 */  .4byte jtgt_ovl2_800DDEE8
  .incbin "ovl2.raw.bin", 0x53A28, 0x4
  /* 53A2C 0A56BC 80129EBC */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x53A30, 0x4

glabel jtbl_ovl2_80129EC4
  /* 53A34 0A56C4 80129EC4 */  .4byte func_ovl2_800D8BB4
  /* 53A38 0A56C8 80129EC8 */  .4byte jtgt_ovl2_800DDEE8
  .incbin "ovl2.raw.bin", 0x53A3C, 0x4
  /* 53A40 0A56D0 80129ED0 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x53A44, 0x4

glabel jtbl_ovl2_80129ED8
  /* 53A48 0A56D8 80129ED8 */  .4byte func_ovl2_800D8BB4
  /* 53A4C 0A56DC 80129EDC */  .4byte jtgt_ovl2_800DDEE8
  .incbin "ovl2.raw.bin", 0x53A50, 0x4
  /* 53A54 0A56E4 80129EE4 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x53A58, 0x4

glabel jtbl_ovl2_80129EEC
  /* 53A5C 0A56EC 80129EEC */  .4byte func_ovl2_800D8BB4
  /* 53A60 0A56F0 80129EF0 */  .4byte jtgt_ovl2_800DDEE8
  .incbin "ovl2.raw.bin", 0x53A64, 0x4
  /* 53A68 0A56F8 80129EF8 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x53A6C, 0x4

glabel jtbl_ovl2_80129F00
  /* 53A70 0A5700 80129F00 */  .4byte func_ovl2_800D8BB4
  /* 53A74 0A5704 80129F04 */  .4byte jtgt_ovl2_800DDEE8

glabel D_ovl2_80129F08
  .incbin "ovl2.raw.bin", 0x53A78, 0x4
  /* 53A7C 0A570C 80129F0C */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x53A80, 0x4

glabel jtbl_ovl2_80129F14
  /* 53A84 0A5714 80129F14 */  .4byte func_ovl2_800D8BB4
  /* 53A88 0A5718 80129F18 */  .4byte func_ovl2_800DDF44
  /* 53A8C 0A571C 80129F1C */
  .asciz "1"
  .balign 4
  /* 53A90 0A5720 80129F20 */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53A94, 0x4
  /* 53A98 0A5728 80129F28 */  .4byte ftCommon_Appear_ProcPhysics
  /* 53A9C 0A572C 80129F2C */  .4byte func_ovl2_800DE348
  /* 53AA0 0A5730 80129F30 */
  .asciz "1@"
  .balign 4
  /* 53AA4 0A5734 80129F34 */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53AA8, 0x4
  /* 53AAC 0A573C 80129F3C */  .4byte ftCommon_Appear_ProcPhysics
  /* 53AB0 0A5740 80129F40 */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x53AB4, 0x4
  /* 53AB8 0A5748 80129F48 */  .4byte ftMario_SpecialN_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53ABC, 0x4
  /* 53AC0 0A5750 80129F50 */  .4byte func_ovl2_800D8BB4
  /* 53AC4 0A5754 80129F54 */  .4byte ftMario_SpecialN_ProcMap
  .incbin "ovl2.raw.bin", 0x53AC8, 0x4
  /* 53ACC 0A575C 80129F5C */  .4byte ftMario_SpecialN_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53AD0, 0x4
  /* 53AD4 0A5764 80129F64 */  .4byte jtgt_ovl2_800D90E0
  /* 53AD8 0A5768 80129F68 */  .4byte ftMario_SpecialAirN_ProcMap
  .incbin "ovl2.raw.bin", 0x53ADC, 0x4
  /* 53AE0 0A5770 80129F70 */  .4byte ftMario_SpecialHi_ProcUpdate
  /* 53AE4 0A5774 80129F74 */  .4byte ftMario_SpecialHi_ProcInterrupt
  /* 53AE8 0A5778 80129F78 */  .4byte ftMario_SpecialHi_ProcPhysics
  /* 53AEC 0A577C 80129F7C */  .4byte ftMario_SpecialHi_ProcMap
  .incbin "ovl2.raw.bin", 0x53AF0, 0x4
  /* 53AF4 0A5784 80129F84 */  .4byte ftMario_SpecialHi_ProcUpdate
  /* 53AF8 0A5788 80129F88 */  .4byte ftMario_SpecialHi_ProcInterrupt
  /* 53AFC 0A578C 80129F8C */  .4byte ftMario_SpecialHi_ProcPhysics
  /* 53B00 0A5790 80129F90 */  .4byte ftMario_SpecialHi_ProcMap
  .incbin "ovl2.raw.bin", 0x53B04, 0x4
  /* 53B08 0A5798 80129F98 */  .4byte ftMario_SpecialLw_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53B0C, 0x4
  /* 53B10 0A57A0 80129FA0 */  .4byte ftMario_SpecialLw_ProcPhysics
  /* 53B14 0A57A4 80129FA4 */  .4byte ftMario_SpecialLw_ProcMap
  .incbin "ovl2.raw.bin", 0x53B18, 0x4
  /* 53B1C 0A57AC 80129FAC */  .4byte ftMario_SpecialAirLw_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53B20, 0x4
  /* 53B24 0A57B4 80129FB4 */  .4byte ftMario_SpecialAirLw_ProcPhysics
  /* 53B28 0A57B8 80129FB8 */  .4byte ftMario_SpecialAirLw_ProcMap

glabel D_ovl2_80129FBC
  .incbin "ovl2.raw.bin", 0x53B2C, 0x4
  /* 53B30 0A57C0 80129FC0 */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53B34, 0x4
  /* 53B38 0A57C8 80129FC8 */  .4byte ftCommon_Appear_ProcPhysics
  /* 53B3C 0A57CC 80129FCC */  .4byte func_ovl2_800DE348
  /* 53B40 0A57D0 80129FD0 */
  .asciz "1"
  .balign 4
  /* 53B44 0A57D4 80129FD4 */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53B48, 0x4
  /* 53B4C 0A57DC 80129FDC */  .4byte ftCommon_Appear_ProcPhysics
  /* 53B50 0A57E0 80129FE0 */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x53B54, 0x4
  /* 53B58 0A57E8 80129FE8 */  .4byte ftDonkey_SpecialNStart_ProcUpdate
  /* 53B5C 0A57EC 80129FEC */  .4byte ftDonkey_SpecialNStart_ProcInterrupt
  /* 53B60 0A57F0 80129FF0 */  .4byte func_ovl2_800D8BB4
  /* 53B64 0A57F4 80129FF4 */  .4byte ftDonkey_SpecialNStart_ProcMap
  .incbin "ovl2.raw.bin", 0x53B68, 0x4
  /* 53B6C 0A57FC 80129FFC */  .4byte ftDonkey_SpecialAirNStart_ProcUpdate
  /* 53B70 0A5800 8012A000 */  .4byte ftDonkey_SpecialNStart_ProcInterrupt
  /* 53B74 0A5804 8012A004 */  .4byte func_ovl2_800D91EC
  /* 53B78 0A5808 8012A008 */  .4byte ftDonkey_SpecialAirNStart_ProcMap
  .incbin "ovl2.raw.bin", 0x53B7C, 0x4
  /* 53B80 0A5810 8012A010 */  .4byte ftDonkey_SpecialNLoop_ProcUpdate
  /* 53B84 0A5814 8012A014 */  .4byte ftDonkey_SpecialNLoop_ProcInterrupt
  /* 53B88 0A5818 8012A018 */  .4byte func_ovl2_800D8BB4
  /* 53B8C 0A581C 8012A01C */  .4byte ftDonkey_SpecialNLoop_ProcMap
  .incbin "ovl2.raw.bin", 0x53B90, 0x4
  /* 53B94 0A5824 8012A024 */  .4byte ftDonkey_SpecialNLoop_ProcUpdate
  /* 53B98 0A5828 8012A028 */  .4byte ftDonkey_SpecialNLoop_ProcInterrupt
  /* 53B9C 0A582C 8012A02C */  .4byte func_ovl2_800D91EC
  /* 53BA0 0A5830 8012A030 */  .4byte ftDonkey_SpecialAirNLoop_ProcMap
  .incbin "ovl2.raw.bin", 0x53BA4, 0x4
  /* 53BA8 0A5838 8012A038 */  .4byte ftDonkey_SpecialNEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53BAC, 0x4

glabel jtbl_ovl2_8012A040
  /* 53BB0 0A5840 8012A040 */  .4byte func_ovl2_800D8BB4
  /* 53BB4 0A5844 8012A044 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53BB8, 0x4
  /* 53BBC 0A584C 8012A04C */  .4byte ftDonkey_SpecialNEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53BC0, 0x4
  /* 53BC4 0A5854 8012A054 */  .4byte func_ovl2_800D91EC
  /* 53BC8 0A5858 8012A058 */  .4byte ftDonkey_SpecialAirNEnd_ProcMap
  .incbin "ovl2.raw.bin", 0x53BCC, 0x4
  /* 53BD0 0A5860 8012A060 */  .4byte ftDonkey_SpecialNEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53BD4, 0x4

glabel jtbl_ovl2_8012A068
  /* 53BD8 0A5868 8012A068 */  .4byte func_ovl2_800D8BB4
  /* 53BDC 0A586C 8012A06C */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53BE0, 0x4
  /* 53BE4 0A5874 8012A074 */  .4byte ftDonkey_SpecialNEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53BE8, 0x4
  /* 53BEC 0A587C 8012A07C */  .4byte func_ovl2_800D91EC
  /* 53BF0 0A5880 8012A080 */  .4byte ftDonkey_SpecialAirNEnd_ProcMap
  .incbin "ovl2.raw.bin", 0x53BF4, 0x4
  /* 53BF8 0A5888 8012A088 */  .4byte ftDonkey_SpecialHi_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53BFC, 0x4
  /* 53C00 0A5890 8012A090 */  .4byte ftDonkey_SpecialHi_ProcPhysics
  /* 53C04 0A5894 8012A094 */  .4byte ftDonkey_SpecialHi_ProcMap
  .incbin "ovl2.raw.bin", 0x53C08, 0x4
  /* 53C0C 0A589C 8012A09C */  .4byte ftDonkey_SpecialAirHi_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53C10, 0x4
  /* 53C14 0A58A4 8012A0A4 */  .4byte ftDonkey_SpecialAirHi_ProcPhysics
  /* 53C18 0A58A8 8012A0A8 */  .4byte ftDonkey_SpecialAirHi_ProcMap
  .incbin "ovl2.raw.bin", 0x53C1C, 0x4
  /* 53C20 0A58B0 8012A0B0 */  .4byte ftDonkey_SpecialLwStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53C24, 0x4

glabel jtbl_ovl2_8012A0B8
  /* 53C28 0A58B8 8012A0B8 */  .4byte func_ovl2_800D8BB4
  /* 53C2C 0A58BC 8012A0BC */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53C30, 0x4
  /* 53C34 0A58C4 8012A0C4 */  .4byte ftDonkey_SpecialLwLoop_ProcUpdate
  /* 53C38 0A58C8 8012A0C8 */  .4byte ftDonkey_SpecialLwLoop_ProcInterrupt

glabel jtbl_ovl2_8012A0CC
  /* 53C3C 0A58CC 8012A0CC */  .4byte func_ovl2_800D8BB4
  /* 53C40 0A58D0 8012A0D0 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53C44, 0x4
  /* 53C48 0A58D8 8012A0D8 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x53C4C, 0x4

glabel jtbl_ovl2_8012A0E0
  /* 53C50 0A58E0 8012A0E0 */  .4byte func_ovl2_800D8BB4
  /* 53C54 0A58E4 8012A0E4 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53C58, 0x8
  /* 53C60 0A58F0 8012A0F0 */  .4byte ftDonkey_ThrowFWait_ProcInterrupt
  /* 53C64 0A58F4 8012A0F4 */  .4byte func_ovl2_800D8BB4
  /* 53C68 0A58F8 8012A0F8 */  .4byte ftDonkey_ThrowFWait_ProcMap
  .incbin "ovl2.raw.bin", 0x53C6C, 0x8
  /* 53C74 0A5904 8012A104 */  .4byte ftDonkey_ThrowFWalk_ProcInterrupt
  /* 53C78 0A5908 8012A108 */  .4byte ftCommon_Walk_ProcPhysics
  /* 53C7C 0A590C 8012A10C */  .4byte ftDonkey_ThrowFWait_ProcMap
  .incbin "ovl2.raw.bin", 0x53C80, 0x8
  /* 53C88 0A5918 8012A118 */  .4byte ftDonkey_ThrowFWalk_ProcInterrupt
  /* 53C8C 0A591C 8012A11C */  .4byte ftCommon_Walk_ProcPhysics
  /* 53C90 0A5920 8012A120 */  .4byte ftDonkey_ThrowFWait_ProcMap
  .incbin "ovl2.raw.bin", 0x53C94, 0x8
  /* 53C9C 0A592C 8012A12C */  .4byte ftDonkey_ThrowFWalk_ProcInterrupt
  /* 53CA0 0A5930 8012A130 */  .4byte ftCommon_Walk_ProcPhysics
  /* 53CA4 0A5934 8012A134 */  .4byte ftDonkey_ThrowFWait_ProcMap
  .incbin "ovl2.raw.bin", 0x53CA8, 0x4
  /* 53CAC 0A593C 8012A13C */  .4byte ftDonkey_ThrowFTurn_ProcUpdate
  /* 53CB0 0A5940 8012A140 */  .4byte ftDonkey_ThrowFTurn_ProcInterrupt
  /* 53CB4 0A5944 8012A144 */  .4byte func_ovl2_800D8BB4
  /* 53CB8 0A5948 8012A148 */  .4byte ftDonkey_ThrowFWait_ProcMap
  .incbin "ovl2.raw.bin", 0x53CBC, 0x4
  /* 53CC0 0A5950 8012A150 */  .4byte ftDonkey_ThrowFKneeBend_ProcUpdate
  /* 53CC4 0A5954 8012A154 */  .4byte ftDonkey_ThrowFKneeBend_ProcInterrupt
  /* 53CC8 0A5958 8012A158 */  .4byte func_ovl2_800D8BB4
  /* 53CCC 0A595C 8012A15C */  .4byte ftDonkey_ThrowFWait_ProcMap
  .incbin "ovl2.raw.bin", 0x53CD0, 0x8
  /* 53CD8 0A5968 8012A168 */  .4byte ftDonkey_ThrowFFall_ProcInterrupt
  /* 53CDC 0A596C 8012A16C */  .4byte jtgt_ovl2_800D9160
  /* 53CE0 0A5970 8012A170 */  .4byte ftDonkey_ThrowFFall_ProcMap
  .incbin "ovl2.raw.bin", 0x53CE4, 0x4
  /* 53CE8 0A5978 8012A178 */  .4byte ftDonkey_ThrowFLanding_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53CEC, 0x4
  /* 53CF0 0A5980 8012A180 */  .4byte func_ovl2_800D8BB4
  /* 53CF4 0A5984 8012A184 */  .4byte ftDonkey_ThrowFWait_ProcMap
  .incbin "ovl2.raw.bin", 0x53CF8, 0x4
  /* 53CFC 0A598C 8012A18C */  .4byte ftDonkey_ThrowFDamage_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53D00, 0x4
  /* 53D04 0A5994 8012A194 */  .4byte ftCommon_DamageCommon_ProcPhysics
  /* 53D08 0A5998 8012A198 */  .4byte func_ovl2_800DEDF0
  .incbin "ovl2.raw.bin", 0x53D0C, 0x4
  /* 53D10 0A59A0 8012A1A0 */  .4byte ftDonkey_ThrowFF_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53D14, 0x4
  /* 53D18 0A59A8 8012A1A8 */  .4byte func_ovl2_800D8BB4
  /* 53D1C 0A59AC 8012A1AC */  .4byte ftDonkey_ThrowFF_ProcMap
  .incbin "ovl2.raw.bin", 0x53D20, 0x4
  /* 53D24 0A59B4 8012A1B4 */  .4byte ftDonkey_ThrowFF_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53D28, 0x4
  /* 53D2C 0A59BC 8012A1BC */  .4byte jtgt_ovl2_800D90E0
  /* 53D30 0A59C0 8012A1C0 */  .4byte ftDonkey_ThrowAirFF_ProcMap
  .incbin "ovl2.raw.bin", 0x53D34, 0x4
  /* 53D38 0A59C8 8012A1C8 */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53D3C, 0x4
  /* 53D40 0A59D0 8012A1D0 */  .4byte ftCommon_ItemThrow_ProcPhysics
  /* 53D44 0A59D4 8012A1D4 */  .4byte func_ovl2_800DEDF0
  .incbin "ovl2.raw.bin", 0x53D48, 0x4
  /* 53D4C 0A59DC 8012A1DC */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53D50, 0x4
  /* 53D54 0A59E4 8012A1E4 */  .4byte ftCommon_ItemThrow_ProcPhysics
  /* 53D58 0A59E8 8012A1E8 */  .4byte func_ovl2_800DEDF0
  .incbin "ovl2.raw.bin", 0x53D5C, 0x4
  /* 53D60 0A59F0 8012A1F0 */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53D64, 0x4
  /* 53D68 0A59F8 8012A1F8 */  .4byte ftCommon_ItemThrow_ProcPhysics
  /* 53D6C 0A59FC 8012A1FC */  .4byte func_ovl2_800DEDF0
  .incbin "ovl2.raw.bin", 0x53D70, 0x4
  /* 53D74 0A5A04 8012A204 */  .4byte ftCommon_ItemThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53D78, 0x4
  /* 53D7C 0A5A0C 8012A20C */  .4byte ftCommon_ItemThrow_ProcPhysics
  /* 53D80 0A5A10 8012A210 */  .4byte func_ovl2_800DEDF0

glabel D_ovl2_8012A214
  .incbin "ovl2.raw.bin", 0x53D84, 0x4
  /* 53D88 0A5A18 8012A218 */  .4byte ftCommon_Attack100Start_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53D8C, 0x4

glabel jtbl_ovl2_8012A220
  /* 53D90 0A5A20 8012A220 */  .4byte func_ovl2_800D8BB4
  /* 53D94 0A5A24 8012A224 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53D98, 0x4
  /* 53D9C 0A5A2C 8012A22C */  .4byte ftCommon_Attack100Loop_ProcUpdate
  /* 53DA0 0A5A30 8012A230 */  .4byte ftCommon_Attack100Loop_ProcInterrupt

glabel jtbl_ovl2_8012A234
  /* 53DA4 0A5A34 8012A234 */  .4byte func_ovl2_800D8BB4
  /* 53DA8 0A5A38 8012A238 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53DAC, 0x4
  /* 53DB0 0A5A40 8012A240 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x53DB4, 0x4

glabel jtbl_ovl2_8012A248
  /* 53DB8 0A5A48 8012A248 */  .4byte func_ovl2_800D8BB4
  /* 53DBC 0A5A4C 8012A24C */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53DC0, 0x4
  /* 53DC4 0A5A54 8012A254 */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53DC8, 0x4
  /* 53DCC 0A5A5C 8012A25C */  .4byte ftCommon_Appear_ProcPhysics
  /* 53DD0 0A5A60 8012A260 */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x53DD4, 0x4
  /* 53DD8 0A5A68 8012A268 */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53DDC, 0x4
  /* 53DE0 0A5A70 8012A270 */  .4byte ftCommon_Appear_ProcPhysics
  /* 53DE4 0A5A74 8012A274 */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x53DE8, 0x4
  /* 53DEC 0A5A7C 8012A27C */  .4byte ftFox_SpecialN_ProcUpdate
  /* 53DF0 0A5A80 8012A280 */  .4byte ftFox_SpecialN_ProcInterrupt

glabel jtbl_ovl2_8012A284
  /* 53DF4 0A5A84 8012A284 */  .4byte func_ovl2_800D8BB4
  /* 53DF8 0A5A88 8012A288 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53DFC, 0x4
  /* 53E00 0A5A90 8012A290 */  .4byte ftFox_SpecialN_ProcUpdate
  /* 53E04 0A5A94 8012A294 */  .4byte ftFox_SpecialN_ProcInterrupt

glabel jtbl_ovl2_8012A298
  /* 53E08 0A5A98 8012A298 */  .4byte jtgt_ovl2_800D90E0
  /* 53E0C 0A5A9C 8012A29C */  .4byte jtgt_ovl2_800DE934
  .incbin "ovl2.raw.bin", 0x53E10, 0x4
  /* 53E14 0A5AA4 8012A2A4 */  .4byte ftFox_SpecialHiStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53E18, 0x4
  /* 53E1C 0A5AAC 8012A2AC */  .4byte func_ovl2_800D8BB4
  /* 53E20 0A5AB0 8012A2B0 */  .4byte ftFox_SpecialHiStart_ProcMap
  .incbin "ovl2.raw.bin", 0x53E24, 0x4
  /* 53E28 0A5AB8 8012A2B8 */  .4byte ftFox_SpecialAirHiStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53E2C, 0x4
  /* 53E30 0A5AC0 8012A2C0 */  .4byte ftFox_SpecialAirHiStart_ProcPhysics
  /* 53E34 0A5AC4 8012A2C4 */  .4byte ftFox_SpecialAirHiStart_ProcMap
  .incbin "ovl2.raw.bin", 0x53E38, 0x4
  /* 53E3C 0A5ACC 8012A2CC */  .4byte ftFox_SpecialHiHold_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53E40, 0x4
  /* 53E44 0A5AD4 8012A2D4 */  .4byte func_ovl2_800D8BB4
  /* 53E48 0A5AD8 8012A2D8 */  .4byte ftFox_SpecialHiHold_ProcMap
  .incbin "ovl2.raw.bin", 0x53E4C, 0x4
  /* 53E50 0A5AE0 8012A2E0 */  .4byte ftFox_SpecialHiHold_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53E54, 0x4
  /* 53E58 0A5AE8 8012A2E8 */  .4byte ftFox_SpecialAirHiStart_ProcPhysics
  /* 53E5C 0A5AEC 8012A2EC */  .4byte ftFox_SpecialAirHiHold_ProcMap
  .incbin "ovl2.raw.bin", 0x53E60, 0x4
  /* 53E64 0A5AF4 8012A2F4 */  .4byte ftFox_SpecialHi_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53E68, 0x4
  /* 53E6C 0A5AFC 8012A2FC */  .4byte ftFox_SpecialHi_ProcPhysics
  /* 53E70 0A5B00 8012A300 */  .4byte ftFox_SpecialHi_ProcMap
  .incbin "ovl2.raw.bin", 0x53E74, 0x4
  /* 53E78 0A5B08 8012A308 */  .4byte ftFox_SpecialHi_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53E7C, 0x4
  /* 53E80 0A5B10 8012A310 */  .4byte ftFox_SpecialAirHi_ProcPhysics
  /* 53E84 0A5B14 8012A314 */  .4byte ftFox_SpecialAirHi_ProcMap
  .incbin "ovl2.raw.bin", 0x53E88, 0x4
  /* 53E8C 0A5B1C 8012A31C */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x53E90, 0x4
  /* 53E94 0A5B24 8012A324 */  .4byte ftFox_SpecialHiEnd_ProcPhysics
  /* 53E98 0A5B28 8012A328 */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x53E9C, 0x4
  /* 53EA0 0A5B30 8012A330 */  .4byte ftFox_SpecialAirHiEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53EA4, 0x4
  /* 53EA8 0A5B38 8012A338 */  .4byte jtgt_ovl2_800D90E0
  /* 53EAC 0A5B3C 8012A33C */  .4byte ftFox_SpecialHiEnd_ProcMap
  .incbin "ovl2.raw.bin", 0x53EB0, 0x4
  /* 53EB4 0A5B44 8012A344 */  .4byte ftFox_SpecialHiBound_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53EB8, 0x4
  /* 53EBC 0A5B4C 8012A34C */  .4byte ftFox_SpecialHiBound_ProcPhysics
  /* 53EC0 0A5B50 8012A350 */  .4byte ftFox_SpecialHiBound_ProcMap
  .incbin "ovl2.raw.bin", 0x53EC4, 0x4
  /* 53EC8 0A5B58 8012A358 */  .4byte ftFox_SpecialLwStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53ECC, 0x4

glabel jtbl_ovl2_8012A360
  /* 53ED0 0A5B60 8012A360 */  .4byte func_ovl2_800D8BB4
  /* 53ED4 0A5B64 8012A364 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53ED8, 0x4
  /* 53EDC 0A5B6C 8012A36C */  .4byte ftFox_SpecialLwHit_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53EE0, 0x4

glabel jtbl_ovl2_8012A374
  /* 53EE4 0A5B74 8012A374 */  .4byte func_ovl2_800D8BB4
  /* 53EE8 0A5B78 8012A378 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53EEC, 0x4
  /* 53EF0 0A5B80 8012A380 */  .4byte ftFox_SpecialLwEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53EF4, 0x4

glabel jtbl_ovl2_8012A388
  /* 53EF8 0A5B88 8012A388 */  .4byte func_ovl2_800D8BB4
  /* 53EFC 0A5B8C 8012A38C */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53F00, 0x4
  /* 53F04 0A5B94 8012A394 */  .4byte ftFox_SpecialLwLoop_ProcUpdate
  /* 53F08 0A5B98 8012A398 */  .4byte ftFox_SpecialLwLoop_ProcInterrupt

glabel jtbl_ovl2_8012A39C
  /* 53F0C 0A5B9C 8012A39C */  .4byte func_ovl2_800D8BB4
  /* 53F10 0A5BA0 8012A3A0 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53F14, 0x4
  /* 53F18 0A5BA8 8012A3A8 */  .4byte ftFox_SpecialLwTurn_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53F1C, 0x4

glabel jtbl_ovl2_8012A3B0
  /* 53F20 0A5BB0 8012A3B0 */  .4byte func_ovl2_800D8BB4
  /* 53F24 0A5BB4 8012A3B4 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x53F28, 0x4
  /* 53F2C 0A5BBC 8012A3BC */  .4byte ftFox_SpecialLwStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53F30, 0x4
  /* 53F34 0A5BC4 8012A3C4 */  .4byte ftFox_SpecialLwCommon_ProcPhysics
  /* 53F38 0A5BC8 8012A3C8 */  .4byte jtgt_ovl2_800DE934
  .incbin "ovl2.raw.bin", 0x53F3C, 0x4
  /* 53F40 0A5BD0 8012A3D0 */  .4byte ftFox_SpecialLwHit_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53F44, 0x4
  /* 53F48 0A5BD8 8012A3D8 */  .4byte ftFox_SpecialLwCommon_ProcPhysics
  /* 53F4C 0A5BDC 8012A3DC */  .4byte jtgt_ovl2_800DE934
  .incbin "ovl2.raw.bin", 0x53F50, 0x4
  /* 53F54 0A5BE4 8012A3E4 */  .4byte ftFox_SpecialLwEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53F58, 0x4
  /* 53F5C 0A5BEC 8012A3EC */  .4byte ftFox_SpecialLwCommon_ProcPhysics
  /* 53F60 0A5BF0 8012A3F0 */  .4byte jtgt_ovl2_800DE934
  .incbin "ovl2.raw.bin", 0x53F64, 0x4
  /* 53F68 0A5BF8 8012A3F8 */  .4byte ftFox_SpecialLwLoop_ProcUpdate
  /* 53F6C 0A5BFC 8012A3FC */  .4byte ftFox_SpecialLwLoop_ProcInterrupt
  /* 53F70 0A5C00 8012A400 */  .4byte ftFox_SpecialLwCommon_ProcPhysics
  /* 53F74 0A5C04 8012A404 */  .4byte jtgt_ovl2_800DE934
  .incbin "ovl2.raw.bin", 0x53F78, 0x4
  /* 53F7C 0A5C0C 8012A40C */  .4byte ftFox_SpecialLwTurn_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53F80, 0x4
  /* 53F84 0A5C14 8012A414 */  .4byte ftFox_SpecialLwCommon_ProcPhysics
  /* 53F88 0A5C18 8012A418 */  .4byte jtgt_ovl2_800DE934

glabel D_ovl2_8012A41C
  .incbin "ovl2.raw.bin", 0x53F8C, 0x4
  /* 53F90 0A5C20 8012A420 */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53F94, 0x4
  /* 53F98 0A5C28 8012A428 */  .4byte ftCommon_Appear_ProcPhysics
  /* 53F9C 0A5C2C 8012A42C */  .4byte func_ovl2_800DE348
  /* 53FA0 0A5C30 8012A430 */
  .asciz "1"
  .balign 4
  /* 53FA4 0A5C34 8012A434 */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53FA8, 0x4
  /* 53FAC 0A5C3C 8012A43C */  .4byte ftCommon_Appear_ProcPhysics
  /* 53FB0 0A5C40 8012A440 */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x53FB4, 0x4
  /* 53FB8 0A5C48 8012A448 */  .4byte ftSamus_SpecialNStart_ProcUpdate
  /* 53FBC 0A5C4C 8012A44C */  .4byte ftSamus_SpecialNStart_ProcInterrupt
  /* 53FC0 0A5C50 8012A450 */  .4byte func_ovl2_800D8BB4
  /* 53FC4 0A5C54 8012A454 */  .4byte ftSamus_SpecialNStart_ProcMap
  .incbin "ovl2.raw.bin", 0x53FC8, 0x4
  /* 53FCC 0A5C5C 8012A45C */  .4byte ftSamus_SpecialNLoop_ProcUpdate
  /* 53FD0 0A5C60 8012A460 */  .4byte ftSamus_SpecialNLoop_ProcInterrupt
  /* 53FD4 0A5C64 8012A464 */  .4byte func_ovl2_800D8BB4
  /* 53FD8 0A5C68 8012A468 */  .4byte ftSamus_SpecialNLoop_ProcMap
  .incbin "ovl2.raw.bin", 0x53FDC, 0x4
  /* 53FE0 0A5C70 8012A470 */  .4byte ftSamus_SpecialNEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53FE4, 0x4
  /* 53FE8 0A5C78 8012A478 */  .4byte func_ovl2_800D8BB4
  /* 53FEC 0A5C7C 8012A47C */  .4byte ftSamus_SpecialNEnd_ProcMap
  .incbin "ovl2.raw.bin", 0x53FF0, 0x4
  /* 53FF4 0A5C84 8012A484 */  .4byte ftSamus_SpecialNStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x53FF8, 0x4
  /* 53FFC 0A5C8C 8012A48C */  .4byte jtgt_ovl2_800D90E0
  /* 54000 0A5C90 8012A490 */  .4byte ftSamus_SpecialAirNStart_ProcMap
  .incbin "ovl2.raw.bin", 0x54004, 0x4
  /* 54008 0A5C98 8012A498 */  .4byte ftSamus_SpecialNEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5400C, 0x4
  /* 54010 0A5CA0 8012A4A0 */  .4byte func_ovl2_800D91EC
  /* 54014 0A5CA4 8012A4A4 */  .4byte ftSamus_SpecialAirNEnd_ProcMap
  .incbin "ovl2.raw.bin", 0x54018, 0x4
  /* 5401C 0A5CAC 8012A4AC */  .4byte ftSamus_SpecialHi_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54020, 0x4
  /* 54024 0A5CB4 8012A4B4 */  .4byte ftSamus_SpecialHi_ProcPhysics
  /* 54028 0A5CB8 8012A4B8 */  .4byte ftSamus_SpecialHi_ProcMap
  .incbin "ovl2.raw.bin", 0x5402C, 0x4
  /* 54030 0A5CC0 8012A4C0 */  .4byte ftSamus_SpecialHi_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54034, 0x4
  /* 54038 0A5CC8 8012A4C8 */  .4byte ftSamus_SpecialAirHi_ProcPhysics
  /* 5403C 0A5CCC 8012A4CC */  .4byte ftSamus_SpecialHi_ProcMap
  .incbin "ovl2.raw.bin", 0x54040, 0x4
  /* 54044 0A5CD4 8012A4D4 */  .4byte ftSamus_SpecialLw_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54048, 0x4
  /* 5404C 0A5CDC 8012A4DC */  .4byte ftSamus_SpecialLw_ProcPhysics
  /* 54050 0A5CE0 8012A4E0 */  .4byte ftSamus_SpecialLw_ProcMap
  .incbin "ovl2.raw.bin", 0x54054, 0x4
  /* 54058 0A5CE8 8012A4E8 */  .4byte ftSamus_SpecialAirLw_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5405C, 0x4
  /* 54060 0A5CF0 8012A4F0 */  .4byte ftSamus_SpecialAirLw_ProcPhysics
  /* 54064 0A5CF4 8012A4F4 */  .4byte ftSamus_SpecialAirLw_ProcMap

glabel D_ovl2_8012A4F8
  .incbin "ovl2.raw.bin", 0x54068, 0x4
  /* 5406C 0A5CFC 8012A4FC */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x54070, 0x4

glabel jtbl_ovl2_8012A504
  /* 54074 0A5D04 8012A504 */  .4byte func_ovl2_800D8BB4
  /* 54078 0A5D08 8012A508 */  .4byte func_ovl2_800DDF44
  /* 5407C 0A5D0C 8012A50C */
  .asciz "1"
  .balign 4
  /* 54080 0A5D10 8012A510 */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54084, 0x4
  /* 54088 0A5D18 8012A518 */  .4byte ftCommon_Appear_ProcPhysics
  /* 5408C 0A5D1C 8012A51C */  .4byte func_ovl2_800DE348
  /* 54090 0A5D20 8012A520 */
  .asciz "1@"
  .balign 4
  /* 54094 0A5D24 8012A524 */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54098, 0x4
  /* 5409C 0A5D2C 8012A52C */  .4byte ftCommon_Appear_ProcPhysics
  /* 540A0 0A5D30 8012A530 */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x540A4, 0x4
  /* 540A8 0A5D38 8012A538 */  .4byte ftMario_SpecialN_ProcUpdate
  .incbin "ovl2.raw.bin", 0x540AC, 0x4
  /* 540B0 0A5D40 8012A540 */  .4byte func_ovl2_800D8BB4
  /* 540B4 0A5D44 8012A544 */  .4byte ftMario_SpecialN_ProcMap
  .incbin "ovl2.raw.bin", 0x540B8, 0x4
  /* 540BC 0A5D4C 8012A54C */  .4byte ftMario_SpecialN_ProcUpdate
  .incbin "ovl2.raw.bin", 0x540C0, 0x4
  /* 540C4 0A5D54 8012A554 */  .4byte jtgt_ovl2_800D90E0
  /* 540C8 0A5D58 8012A558 */  .4byte ftMario_SpecialAirN_ProcMap
  .incbin "ovl2.raw.bin", 0x540CC, 0x4
  /* 540D0 0A5D60 8012A560 */  .4byte ftMario_SpecialHi_ProcUpdate
  /* 540D4 0A5D64 8012A564 */  .4byte ftMario_SpecialHi_ProcInterrupt
  /* 540D8 0A5D68 8012A568 */  .4byte ftMario_SpecialHi_ProcPhysics
  /* 540DC 0A5D6C 8012A56C */  .4byte ftMario_SpecialHi_ProcMap
  .incbin "ovl2.raw.bin", 0x540E0, 0x4
  /* 540E4 0A5D74 8012A574 */  .4byte ftMario_SpecialHi_ProcUpdate
  /* 540E8 0A5D78 8012A578 */  .4byte ftMario_SpecialHi_ProcInterrupt
  /* 540EC 0A5D7C 8012A57C */  .4byte ftMario_SpecialHi_ProcPhysics
  /* 540F0 0A5D80 8012A580 */  .4byte ftMario_SpecialHi_ProcMap
  .incbin "ovl2.raw.bin", 0x540F4, 0x4
  /* 540F8 0A5D88 8012A588 */  .4byte ftMario_SpecialLw_ProcUpdate
  .incbin "ovl2.raw.bin", 0x540FC, 0x4
  /* 54100 0A5D90 8012A590 */  .4byte ftMario_SpecialLw_ProcPhysics
  /* 54104 0A5D94 8012A594 */  .4byte ftMario_SpecialLw_ProcMap
  .incbin "ovl2.raw.bin", 0x54108, 0x4
  /* 5410C 0A5D9C 8012A59C */  .4byte ftMario_SpecialAirLw_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54110, 0x4
  /* 54114 0A5DA4 8012A5A4 */  .4byte ftMario_SpecialAirLw_ProcPhysics
  /* 54118 0A5DA8 8012A5A8 */  .4byte ftMario_SpecialAirLw_ProcMap

glabel D_ovl2_8012A5AC
  .incbin "ovl2.raw.bin", 0x5411C, 0x4
  /* 54120 0A5DB0 8012A5B0 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x54124, 0x4

glabel jtbl_ovl2_8012A5B8
  /* 54128 0A5DB8 8012A5B8 */  .4byte func_ovl2_800D8BB4
  /* 5412C 0A5DBC 8012A5BC */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x54130, 0x4
  /* 54134 0A5DC4 8012A5C4 */  .4byte ftCommon_Attack100Start_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54138, 0x4

glabel jtbl_ovl2_8012A5CC
  /* 5413C 0A5DCC 8012A5CC */  .4byte func_ovl2_800D8BB4
  /* 54140 0A5DD0 8012A5D0 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x54144, 0x4
  /* 54148 0A5DD8 8012A5D8 */  .4byte ftCommon_Attack100Loop_ProcUpdate
  /* 5414C 0A5DDC 8012A5DC */  .4byte ftCommon_Attack100Loop_ProcInterrupt

glabel jtbl_ovl2_8012A5E0
  /* 54150 0A5DE0 8012A5E0 */  .4byte func_ovl2_800D8BB4
  /* 54154 0A5DE4 8012A5E4 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x54158, 0x4
  /* 5415C 0A5DEC 8012A5EC */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x54160, 0x4

glabel jtbl_ovl2_8012A5F4
  /* 54164 0A5DF4 8012A5F4 */  .4byte func_ovl2_800D8BB4
  /* 54168 0A5DF8 8012A5F8 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x5416C, 0x4
  /* 54170 0A5E00 8012A600 */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54174, 0x4
  /* 54178 0A5E08 8012A608 */  .4byte ftCommon_Appear_ProcPhysics
  /* 5417C 0A5E0C 8012A60C */  .4byte func_ovl2_800DE348
  /* 54180 0A5E10 8012A610 */
  .asciz "2"
  .balign 4
  /* 54184 0A5E14 8012A614 */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54188, 0x4
  /* 5418C 0A5E1C 8012A61C */  .4byte ftCommon_Appear_ProcPhysics
  /* 54190 0A5E20 8012A620 */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x54194, 0x4
  /* 54198 0A5E28 8012A628 */  .4byte ftLink_SpecialHi_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5419C, 0x4
  /* 541A0 0A5E30 8012A630 */  .4byte ftLink_SpecialHi_ProcPhysics
  /* 541A4 0A5E34 8012A634 */  .4byte ftLink_SpecialHi_ProcMap
  .incbin "ovl2.raw.bin", 0x541A8, 0x4
  /* 541AC 0A5E3C 8012A63C */  .4byte ftLink_SpecialHiEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x541B0, 0x4
  /* 541B4 0A5E44 8012A644 */  .4byte func_ovl2_800D8BB4
  /* 541B8 0A5E48 8012A648 */  .4byte ftLink_SpecialHiEnd_ProcMap
  .incbin "ovl2.raw.bin", 0x541BC, 0x4
  /* 541C0 0A5E50 8012A650 */  .4byte ftLink_SpecialAirHiEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x541C4, 0x4
  /* 541C8 0A5E58 8012A658 */  .4byte ftLink_SpecialAirHi_ProcPhysics
  /* 541CC 0A5E5C 8012A65C */  .4byte ftLink_SpecialAirHiEnd_ProcMap
  .incbin "ovl2.raw.bin", 0x541D0, 0x4
  /* 541D4 0A5E64 8012A664 */  .4byte ftLink_SpecialN_ProcUpdate
  .incbin "ovl2.raw.bin", 0x541D8, 0x4
  /* 541DC 0A5E6C 8012A66C */  .4byte func_ovl2_800D8BB4
  /* 541E0 0A5E70 8012A670 */  .4byte ftLink_SpecialN_ProcMap
  .incbin "ovl2.raw.bin", 0x541E4, 0x4
  /* 541E8 0A5E78 8012A678 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x541EC, 0x4

glabel jtbl_ovl2_8012A680
  /* 541F0 0A5E80 8012A680 */  .4byte func_ovl2_800D8BB4
  /* 541F4 0A5E84 8012A684 */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x541F8, 0x4
  /* 541FC 0A5E8C 8012A68C */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x54200, 0x4
  /* 54204 0A5E94 8012A694 */  .4byte func_ovl2_800D8BB4
  /* 54208 0A5E98 8012A698 */  .4byte ftLink_SpecialNEmpty_ProcMap
  .incbin "ovl2.raw.bin", 0x5420C, 0x4
  /* 54210 0A5EA0 8012A6A0 */  .4byte ftLink_SpecialAirN_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54214, 0x4
  /* 54218 0A5EA8 8012A6A8 */  .4byte func_ovl2_800D91EC
  /* 5421C 0A5EAC 8012A6AC */  .4byte ftLink_SpecialAirN_ProcMap
  .incbin "ovl2.raw.bin", 0x54220, 0x4
  /* 54224 0A5EB4 8012A6B4 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x54228, 0x4

glabel jtbl_ovl2_8012A6BC
  /* 5422C 0A5EBC 8012A6BC */  .4byte func_ovl2_800D91EC
  /* 54230 0A5EC0 8012A6C0 */  .4byte jtgt_ovl2_800DE934
  .incbin "ovl2.raw.bin", 0x54234, 0x4
  /* 54238 0A5EC8 8012A6C8 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x5423C, 0x4
  /* 54240 0A5ED0 8012A6D0 */  .4byte func_ovl2_800D91EC
  /* 54244 0A5ED4 8012A6D4 */  .4byte ftLink_SpecialAirNEmpty_ProcMap
  .incbin "ovl2.raw.bin", 0x54248, 0x4
  /* 5424C 0A5EDC 8012A6DC */  .4byte ftLink_SpecialLw_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54250, 0x4
  /* 54254 0A5EE4 8012A6E4 */  .4byte func_ovl2_800D8BB4
  /* 54258 0A5EE8 8012A6E8 */  .4byte ftLink_SpecialLw_ProcMap
  .incbin "ovl2.raw.bin", 0x5425C, 0x4
  /* 54260 0A5EF0 8012A6F0 */  .4byte ftLink_SpecialAirLw_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54264, 0x4
  /* 54268 0A5EF8 8012A6F8 */  .4byte func_ovl2_800D91EC
  /* 5426C 0A5EFC 8012A6FC */  .4byte ftLink_SpecialAirLw_ProcMap

glabel D_ovl2_8012A700
  .incbin "ovl2.raw.bin", 0x54270, 0x4
  /* 54274 0A5F04 8012A704 */  .4byte ftCommon_Attack100Start_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54278, 0x4

glabel jtbl_ovl2_8012A70C
  /* 5427C 0A5F0C 8012A70C */  .4byte func_ovl2_800D8BB4
  /* 54280 0A5F10 8012A710 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x54284, 0x4
  /* 54288 0A5F18 8012A718 */  .4byte ftCommon_Attack100Loop_ProcUpdate
  /* 5428C 0A5F1C 8012A71C */  .4byte ftCommon_Attack100Loop_ProcInterrupt

glabel jtbl_ovl2_8012A720
  /* 54290 0A5F20 8012A720 */  .4byte func_ovl2_800D8BB4
  /* 54294 0A5F24 8012A724 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x54298, 0x4
  /* 5429C 0A5F2C 8012A72C */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x542A0, 0x4

glabel jtbl_ovl2_8012A734
  /* 542A4 0A5F34 8012A734 */  .4byte func_ovl2_800D8BB4
  /* 542A8 0A5F38 8012A738 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x542AC, 0x4
  /* 542B0 0A5F40 8012A740 */  .4byte ftCommon_JumpAerial_ProcUpdate
  /* 542B4 0A5F44 8012A744 */  .4byte ftCommon_JumpAerial_ProcInterrupt
  /* 542B8 0A5F48 8012A748 */  .4byte ftCommon_JumpAerial_ProcPhysics
  /* 542BC 0A5F4C 8012A74C */  .4byte func_ovl2_800DE978
  .incbin "ovl2.raw.bin", 0x542C0, 0x4
  /* 542C4 0A5F54 8012A754 */  .4byte ftCommon_JumpAerial_ProcUpdate
  /* 542C8 0A5F58 8012A758 */  .4byte ftCommon_JumpAerial_ProcInterrupt
  /* 542CC 0A5F5C 8012A75C */  .4byte ftCommon_JumpAerial_ProcPhysics
  /* 542D0 0A5F60 8012A760 */  .4byte func_ovl2_800DE978
  /* 542D4 0A5F64 8012A764 */
  .asciz "2"
  .balign 4
  /* 542D8 0A5F68 8012A768 */  .4byte ftCommon_JumpAerial_ProcUpdate
  /* 542DC 0A5F6C 8012A76C */  .4byte ftCommon_JumpAerial_ProcInterrupt
  /* 542E0 0A5F70 8012A770 */  .4byte ftCommon_JumpAerial_ProcPhysics
  /* 542E4 0A5F74 8012A774 */  .4byte func_ovl2_800DE978
  /* 542E8 0A5F78 8012A778 */
  .asciz "2@"
  .balign 4
  /* 542EC 0A5F7C 8012A77C */  .4byte ftCommon_JumpAerial_ProcUpdate
  /* 542F0 0A5F80 8012A780 */  .4byte ftCommon_JumpAerial_ProcInterrupt
  /* 542F4 0A5F84 8012A784 */  .4byte ftCommon_JumpAerial_ProcPhysics
  /* 542F8 0A5F88 8012A788 */  .4byte func_ovl2_800DE978
  .incbin "ovl2.raw.bin", 0x542FC, 0x4
  /* 54300 0A5F90 8012A790 */  .4byte ftCommon_JumpAerial_ProcUpdate
  /* 54304 0A5F94 8012A794 */  .4byte ftCommon_JumpAerial_ProcInterrupt
  /* 54308 0A5F98 8012A798 */  .4byte ftCommon_JumpAerial_ProcPhysics
  /* 5430C 0A5F9C 8012A79C */  .4byte func_ovl2_800DE978
  .incbin "ovl2.raw.bin", 0x54310, 0x4
  /* 54314 0A5FA4 8012A7A4 */  .4byte ftKirby_ThrowF_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54318, 0x4
  /* 5431C 0A5FAC 8012A7AC */  .4byte func_ovl2_800D93E4
  /* 54320 0A5FB0 8012A7B0 */  .4byte ftKirby_ThrowF_ProcMap
  .incbin "ovl2.raw.bin", 0x54324, 0x10
  /* 54334 0A5FC4 8012A7C4 */  .4byte ftKirby_ThrowF_ProcMap
  .incbin "ovl2.raw.bin", 0x54338, 0x4
  /* 5433C 0A5FCC 8012A7CC */  .4byte ftCommon_Throw_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54340, 0x4
  /* 54344 0A5FD4 8012A7D4 */  .4byte ftKirby_ThrowFLanding_ProcPhysics
  /* 54348 0A5FD8 8012A7D8 */  .4byte ftKirby_ThrowFLanding_ProcMap
  .incbin "ovl2.raw.bin", 0x5434C, 0x4
  /* 54350 0A5FE0 8012A7E0 */  .4byte ftKirby_CopyMario_SpecialN_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54354, 0x4
  /* 54358 0A5FE8 8012A7E8 */  .4byte func_ovl2_800D8BB4
  /* 5435C 0A5FEC 8012A7EC */  .4byte ftKirby_CopyMario_SpecialN_ProcMap
  .incbin "ovl2.raw.bin", 0x54360, 0x4
  /* 54364 0A5FF4 8012A7F4 */  .4byte ftKirby_CopyMario_SpecialN_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54368, 0x4
  /* 5436C 0A5FFC 8012A7FC */  .4byte jtgt_ovl2_800D90E0
  /* 54370 0A6000 8012A800 */  .4byte ftKirby_CopyMario_SpecialAirN_ProcMap
  .incbin "ovl2.raw.bin", 0x54374, 0x4
  /* 54378 0A6008 8012A808 */  .4byte ftKirby_CopyMario_SpecialN_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5437C, 0x4
  /* 54380 0A6010 8012A810 */  .4byte func_ovl2_800D8BB4
  /* 54384 0A6014 8012A814 */  .4byte ftKirby_CopyMario_SpecialN_ProcMap
  .incbin "ovl2.raw.bin", 0x54388, 0x4
  /* 5438C 0A601C 8012A81C */  .4byte ftKirby_CopyMario_SpecialN_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54390, 0x4
  /* 54394 0A6024 8012A824 */  .4byte jtgt_ovl2_800D90E0
  /* 54398 0A6028 8012A828 */  .4byte ftKirby_CopyMario_SpecialAirN_ProcMap
  .incbin "ovl2.raw.bin", 0x5439C, 0x4
  /* 543A0 0A6030 8012A830 */  .4byte ftKirby_CopyFox_SpecialN_ProcUpdate
  /* 543A4 0A6034 8012A834 */  .4byte ftKirby_CopyFox_SpecialN_ProcInterrupt

glabel jtbl_ovl2_8012A838
  /* 543A8 0A6038 8012A838 */  .4byte func_ovl2_800D8BB4
  /* 543AC 0A603C 8012A83C */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x543B0, 0x4
  /* 543B4 0A6044 8012A844 */  .4byte ftKirby_CopyFox_SpecialN_ProcUpdate
  /* 543B8 0A6048 8012A848 */  .4byte ftKirby_CopyFox_SpecialN_ProcInterrupt

glabel jtbl_ovl2_8012A84C
  /* 543BC 0A604C 8012A84C */  .4byte jtgt_ovl2_800D90E0
  /* 543C0 0A6050 8012A850 */  .4byte jtgt_ovl2_800DE934
  .incbin "ovl2.raw.bin", 0x543C4, 0x4
  /* 543C8 0A6058 8012A858 */  .4byte func_ovl3_80156F54
  /* 543CC 0A605C 8012A85C */  .4byte ftKirby_CopySamus_SpecialNStart_ProcUpdate
  /* 543D0 0A6060 8012A860 */  .4byte func_ovl2_800D8BB4
  /* 543D4 0A6064 8012A864 */  .4byte ftKirby_CopySamus_SpecialNStart_ProcMap
  .incbin "ovl2.raw.bin", 0x543D8, 0x4
  /* 543DC 0A606C 8012A86C */  .4byte ftKirby_CopySamus_SpecialNLoop_ProcUpdate
  /* 543E0 0A6070 8012A870 */  .4byte ftKirby_CopySamus_SpecialNLoop_ProcInterrupt
  /* 543E4 0A6074 8012A874 */  .4byte func_ovl2_800D8BB4
  /* 543E8 0A6078 8012A878 */  .4byte ftKirby_CopySamus_SpecialNLoop_ProcMap
  .incbin "ovl2.raw.bin", 0x543EC, 0x4
  /* 543F0 0A6080 8012A880 */  .4byte ftKirby_CopySamus_SpecialNEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x543F4, 0x4
  /* 543F8 0A6088 8012A888 */  .4byte func_ovl2_800D8BB4
  /* 543FC 0A608C 8012A88C */  .4byte ftKirby_CopySamus_SpecialNEnd_ProcMap
  .incbin "ovl2.raw.bin", 0x54400, 0x4
  /* 54404 0A6094 8012A894 */  .4byte func_ovl3_80156F54
  .incbin "ovl2.raw.bin", 0x54408, 0x4
  /* 5440C 0A609C 8012A89C */  .4byte jtgt_ovl2_800D90E0
  /* 54410 0A60A0 8012A8A0 */  .4byte ftKirby_CopySamus_SpecialAirNStart_ProcMap
  .incbin "ovl2.raw.bin", 0x54414, 0x4
  /* 54418 0A60A8 8012A8A8 */  .4byte ftKirby_CopySamus_SpecialNEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5441C, 0x4
  /* 54420 0A60B0 8012A8B0 */  .4byte func_ovl2_800D91EC
  /* 54424 0A60B4 8012A8B4 */  .4byte ftKirby_CopySamus_SpecialAirNEnd_ProcMap
  .incbin "ovl2.raw.bin", 0x54428, 0x4
  /* 5442C 0A60BC 8012A8BC */  .4byte ftKirby_CopyDonkey_SpecialNStart_ProcUpdate
  /* 54430 0A60C0 8012A8C0 */  .4byte ftKirby_CopyDonkey_SpecialNStart_ProcInterrupt
  /* 54434 0A60C4 8012A8C4 */  .4byte func_ovl2_800D8BB4
  /* 54438 0A60C8 8012A8C8 */  .4byte ftKirby_CopyDonkey_SpecialNStart_ProcMap
  .incbin "ovl2.raw.bin", 0x5443C, 0x4
  /* 54440 0A60D0 8012A8D0 */  .4byte ftKirby_CopyDonkey_SpecialAirNStart_ProcUpdate
  /* 54444 0A60D4 8012A8D4 */  .4byte ftKirby_CopyDonkey_SpecialNStart_ProcInterrupt
  /* 54448 0A60D8 8012A8D8 */  .4byte func_ovl2_800D91EC
  /* 5444C 0A60DC 8012A8DC */  .4byte ftKirby_CopyDonkey_SpecialAirNStart_ProcMap
  .incbin "ovl2.raw.bin", 0x54450, 0x4
  /* 54454 0A60E4 8012A8E4 */  .4byte ftKirby_CopyDonkey_SpecialNLoop_ProcUpdate
  /* 54458 0A60E8 8012A8E8 */  .4byte ftKirby_CopyDonkey_SpecialNLoop_ProcInterrupt
  /* 5445C 0A60EC 8012A8EC */  .4byte func_ovl2_800D8BB4
  /* 54460 0A60F0 8012A8F0 */  .4byte ftKirby_CopyDonkey_SpecialNLoop_ProcMap
  .incbin "ovl2.raw.bin", 0x54464, 0x4
  /* 54468 0A60F8 8012A8F8 */  .4byte ftKirby_CopyDonkey_SpecialNLoop_ProcUpdate
  /* 5446C 0A60FC 8012A8FC */  .4byte ftKirby_CopyDonkey_SpecialNLoop_ProcInterrupt
  /* 54470 0A6100 8012A900 */  .4byte func_ovl2_800D91EC
  /* 54474 0A6104 8012A904 */  .4byte ftKirby_CopyDonkey_SpecialAirNLoop_ProcMap
  .incbin "ovl2.raw.bin", 0x54478, 0x4
  /* 5447C 0A610C 8012A90C */  .4byte ftKirby_CopyDonkey_SpecialNEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54480, 0x4

glabel jtbl_ovl2_8012A914
  /* 54484 0A6114 8012A914 */  .4byte func_ovl2_800D8BB4
  /* 54488 0A6118 8012A918 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x5448C, 0x4
  /* 54490 0A6120 8012A920 */  .4byte ftKirby_CopyDonkey_SpecialNEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54494, 0x4
  /* 54498 0A6128 8012A928 */  .4byte func_ovl2_800D91EC
  /* 5449C 0A612C 8012A92C */  .4byte ftKirby_CopyDonkey_SpecialAirNEnd_ProcMap
  .incbin "ovl2.raw.bin", 0x544A0, 0x4
  /* 544A4 0A6134 8012A934 */  .4byte ftKirby_CopyDonkey_SpecialNEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x544A8, 0x4

glabel jtbl_ovl2_8012A93C
  /* 544AC 0A613C 8012A93C */  .4byte func_ovl2_800D8BB4
  /* 544B0 0A6140 8012A940 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x544B4, 0x4
  /* 544B8 0A6148 8012A948 */  .4byte ftKirby_CopyDonkey_SpecialNEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x544BC, 0x4
  /* 544C0 0A6150 8012A950 */  .4byte func_ovl2_800D91EC
  /* 544C4 0A6154 8012A954 */  .4byte ftKirby_CopyDonkey_SpecialAirNEnd_ProcMap
  /* 544C8 0A6158 8012A958 */
  .asciz "8@"
  .balign 4
  /* 544CC 0A615C 8012A95C */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x544D0, 0x4
  /* 544D4 0A6164 8012A964 */  .4byte ftCommon_Appear_ProcPhysics
  /* 544D8 0A6168 8012A968 */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x544DC, 0x4
  /* 544E0 0A6170 8012A970 */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x544E4, 0x4
  /* 544E8 0A6178 8012A978 */  .4byte ftCommon_Appear_ProcPhysics
  /* 544EC 0A617C 8012A97C */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x544F0, 0x4
  /* 544F4 0A6184 8012A984 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x544F8, 0x4
  /* 544FC 0A618C 8012A98C */  .4byte func_ovl2_800D8BB4
  /* 54500 0A6190 8012A990 */  .4byte ftKirby_CopyPikachu_SpecialN_ProcMap
  .incbin "ovl2.raw.bin", 0x54504, 0x4
  /* 54508 0A6198 8012A998 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x5450C, 0x4
  /* 54510 0A61A0 8012A9A0 */  .4byte func_ovl2_800D91EC
  /* 54514 0A61A4 8012A9A4 */  .4byte ftKirby_CopyPikachu_SpecialAirN_ProcMap
  .incbin "ovl2.raw.bin", 0x54518, 0x4
  /* 5451C 0A61AC 8012A9AC */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x54520, 0x4
  /* 54524 0A61B4 8012A9B4 */  .4byte func_ovl2_800D8BB4
  /* 54528 0A61B8 8012A9B8 */  .4byte ftKirby_CopyNess_SpecialN_ProcMap
  .incbin "ovl2.raw.bin", 0x5452C, 0x4
  /* 54530 0A61C0 8012A9C0 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x54534, 0x4
  /* 54538 0A61C8 8012A9C8 */  .4byte func_ovl2_800D91EC
  /* 5453C 0A61CC 8012A9CC */  .4byte ftKirby_CopyNess_SpecialAirN_ProcMap
  .incbin "ovl2.raw.bin", 0x54540, 0x4
  /* 54544 0A61D4 8012A9D4 */  .4byte ftKirby_SpecialHi_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54548, 0x4
  /* 5454C 0A61DC 8012A9DC */  .4byte ftKirby_SpecialHi_ProcPhysics
  /* 54550 0A61E0 8012A9E0 */  .4byte ftKirby_SpecialHi_ProcMap
  .incbin "ovl2.raw.bin", 0x54554, 0x4
  /* 54558 0A61E8 8012A9E8 */  .4byte ftKirby_SpecialHiLanding_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5455C, 0x4
  /* 54560 0A61F0 8012A9F0 */  .4byte ftKirby_SpecialHiLanding_ProcPhysics
  /* 54564 0A61F4 8012A9F4 */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x54568, 0x4
  /* 5456C 0A61FC 8012A9FC */  .4byte ftKirby_SpecialHi_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54570, 0x4
  /* 54574 0A6204 8012AA04 */  .4byte ftKirby_SpecialAirHi_ProcPhysics
  /* 54578 0A6208 8012AA08 */  .4byte ftKirby_SpecialHi_ProcMap
  .incbin "ovl2.raw.bin", 0x5457C, 0xC
  /* 54588 0A6218 8012AA18 */  .4byte ftKirby_SpecialAirHiFall_ProcPhysics
  /* 5458C 0A621C 8012AA1C */  .4byte ftKirby_SpecialAirHiFall_ProcMap
  .incbin "ovl2.raw.bin", 0x54590, 0x4
  /* 54594 0A6224 8012AA24 */  .4byte ftKirby_SpecialLwStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54598, 0x8
  /* 545A0 0A6230 8012AA30 */  .4byte ftKirby_SpecialLwStart_ProcMap
  .incbin "ovl2.raw.bin", 0x545A4, 0x4
  /* 545A8 0A6238 8012AA38 */  .4byte ftKirby_SpecialLwUnk_ProcUpdate
  .incbin "ovl2.raw.bin", 0x545AC, 0x4
  /* 545B0 0A6240 8012AA40 */  .4byte func_ovl2_800D8BB4
  /* 545B4 0A6244 8012AA44 */  .4byte ftKirby_SpecialLwUnk_ProcMap
  .incbin "ovl2.raw.bin", 0x545B8, 0x4
  /* 545BC 0A624C 8012AA4C */  .4byte ftKirby_SpecialLwHold_ProcUpdate
  .incbin "ovl2.raw.bin", 0x545C0, 0x4
  /* 545C4 0A6254 8012AA54 */  .4byte ftKirby_SpecialLwHold_ProcPhysics
  /* 545C8 0A6258 8012AA58 */  .4byte ftKirby_SpecialLwHold_ProcMap
  .incbin "ovl2.raw.bin", 0x545CC, 0x4
  /* 545D0 0A6260 8012AA60 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x545D4, 0x4

glabel jtbl_ovl2_8012AA68
  /* 545D8 0A6268 8012AA68 */  .4byte func_ovl2_800D93E4
  /* 545DC 0A626C 8012AA6C */  .4byte jtgt_ovl2_800DE934
  .incbin "ovl2.raw.bin", 0x545E0, 0x4
  /* 545E4 0A6274 8012AA74 */  .4byte ftKirby_SpecialAirLwStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x545E8, 0x8
  /* 545F0 0A6280 8012AA80 */  .4byte ftKirby_SpecialAirLwStart_ProcMap
  .incbin "ovl2.raw.bin", 0x545F4, 0x4
  /* 545F8 0A6288 8012AA88 */  .4byte ftKirby_SpecialAirLwHold_ProcUpdate
  .incbin "ovl2.raw.bin", 0x545FC, 0x8
  /* 54604 0A6294 8012AA94 */  .4byte ftKirby_SpecialAirLwHold_ProcMap
  .incbin "ovl2.raw.bin", 0x54608, 0x4
  /* 5460C 0A629C 8012AA9C */  .4byte ftKirby_SpecialLwHold_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54610, 0x4
  /* 54614 0A62A4 8012AAA4 */  .4byte ftKirby_SpecialLwHold_ProcPhysics
  /* 54618 0A62A8 8012AAA8 */  .4byte ftKirby_SpecialLwHold_ProcMap
  .incbin "ovl2.raw.bin", 0x5461C, 0x4
  /* 54620 0A62B0 8012AAB0 */  .4byte ftKirby_SpecialAirLwFall_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54624, 0x8
  /* 5462C 0A62BC 8012AABC */  .4byte ftKirby_SpecialAirLwHold_ProcMap
  .incbin "ovl2.raw.bin", 0x54630, 0x4
  /* 54634 0A62C4 8012AAC4 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x54638, 0x4

glabel jtbl_ovl2_8012AACC
  /* 5463C 0A62CC 8012AACC */  .4byte func_ovl2_800D93E4
  /* 54640 0A62D0 8012AAD0 */  .4byte jtgt_ovl2_800DE934
  .incbin "ovl2.raw.bin", 0x54644, 0x4
  /* 54648 0A62D8 8012AAD8 */  .4byte ftKirby_SpecialNStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5464C, 0x4
  /* 54650 0A62E0 8012AAE0 */  .4byte func_ovl2_800D8BB4
  /* 54654 0A62E4 8012AAE4 */  .4byte ftKirby_SpecialNStart_ProcMap
  .incbin "ovl2.raw.bin", 0x54658, 0x4
  /* 5465C 0A62EC 8012AAEC */  .4byte ftKirby_SpecialNLoop_ProcUpdate
  /* 54660 0A62F0 8012AAF0 */  .4byte ftKirby_SpecialNLoop_ProcInterrupt
  /* 54664 0A62F4 8012AAF4 */  .4byte func_ovl2_800D8BB4
  /* 54668 0A62F8 8012AAF8 */  .4byte ftKirby_SpecialNLoop_ProcMap
  .incbin "ovl2.raw.bin", 0x5466C, 0x4
  /* 54670 0A6300 8012AB00 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x54674, 0x4
  /* 54678 0A6308 8012AB08 */  .4byte func_ovl2_800D8BB4
  /* 5467C 0A630C 8012AB0C */  .4byte ftKirby_SpecialNEnd_ProcMap
  .incbin "ovl2.raw.bin", 0x54680, 0x4
  /* 54684 0A6314 8012AB14 */  .4byte ftKirby_SpecialNCatch_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54688, 0x4
  /* 5468C 0A631C 8012AB1C */  .4byte func_ovl2_800D8BB4
  /* 54690 0A6320 8012AB20 */  .4byte ftKirby_SpecialNCatch_ProcMap
  .incbin "ovl2.raw.bin", 0x54694, 0x4
  /* 54698 0A6328 8012AB28 */  .4byte ftKirby_SpecialNEat_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5469C, 0x4
  /* 546A0 0A6330 8012AB30 */  .4byte func_ovl2_800D8BB4
  /* 546A4 0A6334 8012AB34 */  .4byte ftKirby_SpecialNEat_ProcMap
  .incbin "ovl2.raw.bin", 0x546A8, 0x4
  /* 546AC 0A633C 8012AB3C */  .4byte ftKirby_SpecialNThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x546B0, 0x4
  /* 546B4 0A6344 8012AB44 */  .4byte func_ovl2_800D8C14
  /* 546B8 0A6348 8012AB48 */  .4byte ftKirby_SpecialNThrow_ProcMap
  .incbin "ovl2.raw.bin", 0x546BC, 0x8
  /* 546C4 0A6354 8012AB54 */  .4byte ftKirby_SpecialNWait_ProcInterrupt
  /* 546C8 0A6358 8012AB58 */  .4byte func_ovl2_800D8BB4
  /* 546CC 0A635C 8012AB5C */  .4byte ftKirby_SpecialNWait_ProcMap
  .incbin "ovl2.raw.bin", 0x546D0, 0x4
  /* 546D4 0A6364 8012AB64 */  .4byte ftKirby_SpecialNTurn_ProcUpdate
  .incbin "ovl2.raw.bin", 0x546D8, 0x4
  /* 546DC 0A636C 8012AB6C */  .4byte func_ovl2_800D8BB4
  /* 546E0 0A6370 8012AB70 */  .4byte ftKirby_SpecialNTurn_ProcMap
  .incbin "ovl2.raw.bin", 0x546E4, 0x4
  /* 546E8 0A6378 8012AB78 */  .4byte ftKirby_SpecialNCopy_ProcUpdate
  .incbin "ovl2.raw.bin", 0x546EC, 0x4
  /* 546F0 0A6380 8012AB80 */  .4byte func_ovl2_800D8BB4
  /* 546F4 0A6384 8012AB84 */  .4byte ftKirby_SpecialNCopy_ProcMap
  .incbin "ovl2.raw.bin", 0x546F8, 0x4
  /* 546FC 0A638C 8012AB8C */  .4byte ftKirby_SpecialAirNStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54700, 0x4
  /* 54704 0A6394 8012AB94 */  .4byte func_ovl2_800D91EC
  /* 54708 0A6398 8012AB98 */  .4byte ftKirby_SpecialAirNStart_ProcMap
  .incbin "ovl2.raw.bin", 0x5470C, 0x4
  /* 54710 0A63A0 8012ABA0 */  .4byte ftKirby_SpecialNLoop_ProcUpdate
  /* 54714 0A63A4 8012ABA4 */  .4byte ftKirby_SpecialAirNLoop_ProcInterrupt
  /* 54718 0A63A8 8012ABA8 */  .4byte func_ovl2_800D91EC
  /* 5471C 0A63AC 8012ABAC */  .4byte ftKirby_SpecialAirNLoop_ProcMap
  .incbin "ovl2.raw.bin", 0x54720, 0x4
  /* 54724 0A63B4 8012ABB4 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x54728, 0x4
  /* 5472C 0A63BC 8012ABBC */  .4byte func_ovl2_800D91EC
  /* 54730 0A63C0 8012ABC0 */  .4byte ftKirby_SpecialAirNEnd_ProcMap
  .incbin "ovl2.raw.bin", 0x54734, 0x4
  /* 54738 0A63C8 8012ABC8 */  .4byte ftKirby_SpecialNCatch_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5473C, 0x4
  /* 54740 0A63D0 8012ABD0 */  .4byte func_ovl2_800D91EC
  /* 54744 0A63D4 8012ABD4 */  .4byte ftKirby_SpecialAirNCatch_ProcMap
  .incbin "ovl2.raw.bin", 0x54748, 0x4
  /* 5474C 0A63DC 8012ABDC */  .4byte ftKirby_SpecialNEat_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54750, 0x4
  /* 54754 0A63E4 8012ABE4 */  .4byte func_ovl2_800D91EC
  /* 54758 0A63E8 8012ABE8 */  .4byte ftKirby_SpecialAirNEat_ProcMap
  .incbin "ovl2.raw.bin", 0x5475C, 0x4
  /* 54760 0A63F0 8012ABF0 */  .4byte ftKirby_SpecialAirNThrow_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54764, 0x4
  /* 54768 0A63F8 8012ABF8 */  .4byte func_ovl2_800D93E4
  /* 5476C 0A63FC 8012ABFC */  .4byte ftKirby_SpecialAirNThrow_ProcMap
  .incbin "ovl2.raw.bin", 0x54770, 0x8
  /* 54778 0A6408 8012AC08 */  .4byte ftKirby_SpecialAirNWait_ProcInterrupt
  /* 5477C 0A640C 8012AC0C */  .4byte ftKirby_SpecialAirNWait_ProcPhysics
  /* 54780 0A6410 8012AC10 */  .4byte ftKirby_SpecialAirNWait_ProcMap
  .incbin "ovl2.raw.bin", 0x54784, 0x4
  /* 54788 0A6418 8012AC18 */  .4byte ftKirby_SpecialAirNTurn_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5478C, 0x4
  /* 54790 0A6420 8012AC20 */  .4byte ftKirby_SpecialAirNWait_ProcPhysics
  /* 54794 0A6424 8012AC24 */  .4byte ftKirby_SpecialAirNTurn_ProcMap
  .incbin "ovl2.raw.bin", 0x54798, 0x4
  /* 5479C 0A642C 8012AC2C */  .4byte ftKirby_SpecialAirNCopy_ProcUpdate
  .incbin "ovl2.raw.bin", 0x547A0, 0x4
  /* 547A4 0A6434 8012AC34 */  .4byte func_ovl2_800D91EC
  /* 547A8 0A6438 8012AC38 */  .4byte ftKirby_SpecialAirNCopy_ProcMap
  .incbin "ovl2.raw.bin", 0x547AC, 0x4
  /* 547B0 0A6440 8012AC40 */  .4byte ftKirby_CopyLink_SpecialN_ProcUpdate
  .incbin "ovl2.raw.bin", 0x547B4, 0x4
  /* 547B8 0A6448 8012AC48 */  .4byte func_ovl2_800D8BB4
  /* 547BC 0A644C 8012AC4C */  .4byte ftKirby_CopyLink_SpecialN_ProcMap
  .incbin "ovl2.raw.bin", 0x547C0, 0x4
  /* 547C4 0A6454 8012AC54 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x547C8, 0x4

glabel jtbl_ovl2_8012AC5C
  /* 547CC 0A645C 8012AC5C */  .4byte func_ovl2_800D8BB4
  /* 547D0 0A6460 8012AC60 */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x547D4, 0x4
  /* 547D8 0A6468 8012AC68 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x547DC, 0x4
  /* 547E0 0A6470 8012AC70 */  .4byte func_ovl2_800D8BB4
  /* 547E4 0A6474 8012AC74 */  .4byte ftKirby_CopyLink_SpecialNEmpty_ProcMap
  .incbin "ovl2.raw.bin", 0x547E8, 0x4
  /* 547EC 0A647C 8012AC7C */  .4byte ftKirby_CopyLink_SpecialAirN_ProcUpdate
  .incbin "ovl2.raw.bin", 0x547F0, 0x4
  /* 547F4 0A6484 8012AC84 */  .4byte func_ovl2_800D91EC
  /* 547F8 0A6488 8012AC88 */  .4byte ftKirby_CopyLink_SpecialAirN_ProcMap
  .incbin "ovl2.raw.bin", 0x547FC, 0x4
  /* 54800 0A6490 8012AC90 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x54804, 0x4

glabel jtbl_ovl2_8012AC98
  /* 54808 0A6498 8012AC98 */  .4byte func_ovl2_800D91EC
  /* 5480C 0A649C 8012AC9C */  .4byte jtgt_ovl2_800DE934
  .incbin "ovl2.raw.bin", 0x54810, 0x4
  /* 54814 0A64A4 8012ACA4 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x54818, 0x4
  /* 5481C 0A64AC 8012ACAC */  .4byte func_ovl2_800D91EC
  /* 54820 0A64B0 8012ACB0 */  .4byte ftKirby_CopyLink_SpecialAirNEmpty_ProcMap
  .incbin "ovl2.raw.bin", 0x54824, 0x4
  /* 54828 0A64B8 8012ACB8 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x5482C, 0x4
  /* 54830 0A64C0 8012ACC0 */  .4byte func_ovl2_800D8C14
  /* 54834 0A64C4 8012ACC4 */  .4byte ftKirby_CopyPurin_SpecialN_ProcMap
  .incbin "ovl2.raw.bin", 0x54838, 0x4
  /* 5483C 0A64CC 8012ACCC */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x54840, 0x4
  /* 54844 0A64D4 8012ACD4 */  .4byte ftKirby_CopyPurin_SpecialAirN_ProcPhysics
  /* 54848 0A64D8 8012ACD8 */  .4byte ftKirby_CopyPurin_SpecialAirN_ProcMap
  .incbin "ovl2.raw.bin", 0x5484C, 0x4
  /* 54850 0A64E0 8012ACE0 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x54854, 0x4
  /* 54858 0A64E8 8012ACE8 */  .4byte ftKirby_CopyCaptain_SpecialN_ProcPhysics
  /* 5485C 0A64EC 8012ACEC */  .4byte ftKirby_CopyCaptain_SpecialN_ProcMap
  .incbin "ovl2.raw.bin", 0x54860, 0x4
  /* 54864 0A64F4 8012ACF4 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x54868, 0x4
  /* 5486C 0A64FC 8012ACFC */  .4byte ftKirby_CopyCaptain_SpecialAirN_ProcPhysics
  /* 54870 0A6500 8012AD00 */  .4byte ftKirby_CopyCaptain_SpecialAirN_ProcMap
  .incbin "ovl2.raw.bin", 0x54874, 0x4
  /* 54878 0A6508 8012AD08 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x5487C, 0x4
  /* 54880 0A6510 8012AD10 */  .4byte func_ovl2_800D8BB4
  /* 54884 0A6514 8012AD14 */  .4byte ftKirby_CopyYoshi_SpecialN_ProcMap
  .incbin "ovl2.raw.bin", 0x54888, 0x4
  /* 5488C 0A651C 8012AD1C */  .4byte ftKirby_CopyYoshi_SpecialNCatch_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54890, 0x4
  /* 54894 0A6524 8012AD24 */  .4byte func_ovl2_800D8BB4
  /* 54898 0A6528 8012AD28 */  .4byte ftKirby_CopyYoshi_SpecialNCatch_ProcMap
  .incbin "ovl2.raw.bin", 0x5489C, 0x4
  /* 548A0 0A6530 8012AD30 */  .4byte ftKirby_CopyYoshi_SpecialNRelease_ProcUpdate
  .incbin "ovl2.raw.bin", 0x548A4, 0x4
  /* 548A8 0A6538 8012AD38 */  .4byte func_ovl2_800D8BB4
  /* 548AC 0A653C 8012AD3C */  .4byte ftKirby_CopyYoshi_SpecialNRelease_ProcMap
  .incbin "ovl2.raw.bin", 0x548B0, 0x4
  /* 548B4 0A6544 8012AD44 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x548B8, 0x4
  /* 548BC 0A654C 8012AD4C */  .4byte func_ovl2_800D91EC
  /* 548C0 0A6550 8012AD50 */  .4byte ftKirby_CopyYoshi_SpecialAirN_ProcMap
  .incbin "ovl2.raw.bin", 0x548C4, 0x4
  /* 548C8 0A6558 8012AD58 */  .4byte ftKirby_CopyYoshi_SpecialAirNCatch_ProcUpdate
  .incbin "ovl2.raw.bin", 0x548CC, 0x4
  /* 548D0 0A6560 8012AD60 */  .4byte func_ovl2_800D91EC
  /* 548D4 0A6564 8012AD64 */  .4byte ftKirby_CopyYoshi_SpecialAirNCatch_ProcMap
  .incbin "ovl2.raw.bin", 0x548D8, 0x4
  /* 548DC 0A656C 8012AD6C */  .4byte ftKirby_CopyYoshi_SpecialAirNRelease_ProcUpdate
  .incbin "ovl2.raw.bin", 0x548E0, 0x4
  /* 548E4 0A6574 8012AD74 */  .4byte func_ovl2_800D91EC
  /* 548E8 0A6578 8012AD78 */  .4byte ftKirby_CopyYoshi_SpecialAirNRelease_ProcMap

glabel D_ovl2_8012AD7C
  .incbin "ovl2.raw.bin", 0x548EC, 0x4
  /* 548F0 0A6580 8012AD80 */  .4byte ftCommon_Attack13_ProcUpdate
  /* 548F4 0A6584 8012AD84 */  .4byte ftCommon_Attack13_ProcInterrupt

glabel jtbl_ovl2_8012AD88
  /* 548F8 0A6588 8012AD88 */  .4byte func_ovl2_800D8C14
  /* 548FC 0A658C 8012AD8C */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x54900, 0x4
  /* 54904 0A6594 8012AD94 */  .4byte ftCommon_Attack100Start_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54908, 0x4

glabel jtbl_ovl2_8012AD9C
  /* 5490C 0A659C 8012AD9C */  .4byte func_ovl2_800D8C14
  /* 54910 0A65A0 8012ADA0 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x54914, 0x4
  /* 54918 0A65A8 8012ADA8 */  .4byte ftCommon_Attack100Loop_ProcUpdate
  /* 5491C 0A65AC 8012ADAC */  .4byte ftCommon_Attack100Loop_ProcInterrupt

glabel jtbl_ovl2_8012ADB0
  /* 54920 0A65B0 8012ADB0 */  .4byte func_ovl2_800D8C14
  /* 54924 0A65B4 8012ADB4 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x54928, 0x4
  /* 5492C 0A65BC 8012ADBC */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x54930, 0x4

glabel jtbl_ovl2_8012ADC4
  /* 54934 0A65C4 8012ADC4 */  .4byte func_ovl2_800D8C14
  /* 54938 0A65C8 8012ADC8 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x5493C, 0x4
  /* 54940 0A65D0 8012ADD0 */  .4byte ftCaptain_AppearStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54944, 0x4
  /* 54948 0A65D8 8012ADD8 */  .4byte ftCommon_Appear_ProcPhysics
  /* 5494C 0A65DC 8012ADDC */  .4byte func_ovl2_800DE348
  /* 54950 0A65E0 8012ADE0 */
  .asciz "2"
  .balign 4
  /* 54954 0A65E4 8012ADE4 */  .4byte ftCaptain_AppearStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54958, 0x4
  /* 5495C 0A65EC 8012ADEC */  .4byte ftCommon_Appear_ProcPhysics
  /* 54960 0A65F0 8012ADF0 */  .4byte func_ovl2_800DE348
  /* 54964 0A65F4 8012ADF4 */
  .asciz "2@"
  .balign 4
  /* 54968 0A65F8 8012ADF8 */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5496C, 0x4
  /* 54970 0A6600 8012AE00 */  .4byte ftCommon_Appear_ProcPhysics
  /* 54974 0A6604 8012AE04 */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x54978, 0x4
  /* 5497C 0A660C 8012AE0C */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54980, 0x4
  /* 54984 0A6614 8012AE14 */  .4byte ftCommon_Appear_ProcPhysics
  /* 54988 0A6618 8012AE18 */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x5498C, 0x4
  /* 54990 0A6620 8012AE20 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x54994, 0x4
  /* 54998 0A6628 8012AE28 */  .4byte ftCaptain_SpecialN_ProcPhysics
  /* 5499C 0A662C 8012AE2C */  .4byte ftCaptain_SpecialN_ProcMap
  .incbin "ovl2.raw.bin", 0x549A0, 0x4
  /* 549A4 0A6634 8012AE34 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x549A8, 0x4
  /* 549AC 0A663C 8012AE3C */  .4byte ftCaptain_SpecialAirN_ProcPhysics
  /* 549B0 0A6640 8012AE40 */  .4byte ftCaptain_SpecialAirN_ProcMap
  .incbin "ovl2.raw.bin", 0x549B4, 0x4
  /* 549B8 0A6648 8012AE48 */  .4byte ftCaptain_SpecialLw_ProcUpdate
  .incbin "ovl2.raw.bin", 0x549BC, 0x4
  /* 549C0 0A6650 8012AE50 */  .4byte ftCaptain_SpecialLw_ProcPhysics
  /* 549C4 0A6654 8012AE54 */  .4byte ftCaptain_SpecialLw_ProcMap
  .incbin "ovl2.raw.bin", 0x549C8, 0x4
  /* 549CC 0A665C 8012AE5C */  .4byte ftCaptain_SpecialLw_ProcUpdate
  .incbin "ovl2.raw.bin", 0x549D0, 0x4
  /* 549D4 0A6664 8012AE64 */  .4byte ftCaptain_SpecialLw_ProcPhysics
  /* 549D8 0A6668 8012AE68 */  .4byte ftCaptain_SpecialLwAir_ProcMap
  .incbin "ovl2.raw.bin", 0x549DC, 0x4
  /* 549E0 0A6670 8012AE70 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x549E4, 0x4
  /* 549E8 0A6678 8012AE78 */  .4byte ftCaptain_SpecialLwLanding_ProcPhysics
  /* 549EC 0A667C 8012AE7C */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x549F0, 0x4
  /* 549F4 0A6684 8012AE84 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x549F8, 0x4
  /* 549FC 0A668C 8012AE8C */  .4byte ftCaptain_SpecialAirLw_ProcPhysics
  /* 54A00 0A6690 8012AE90 */  .4byte ftCaptain_SpecialLwLanding_ProcMap
  .incbin "ovl2.raw.bin", 0x54A04, 0x4
  /* 54A08 0A6698 8012AE98 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x54A0C, 0x4
  /* 54A10 0A66A0 8012AEA0 */  .4byte ftCaptain_SpecialLwBound_ProcPhysics
  /* 54A14 0A66A4 8012AEA4 */  .4byte jtgt_ovl2_800DE934
  .incbin "ovl2.raw.bin", 0x54A18, 0x4
  /* 54A1C 0A66AC 8012AEAC */  .4byte ftCaptain_SpecialHi_ProcUpdate
  /* 54A20 0A66B0 8012AEB0 */  .4byte ftCaptain_SpecialHi_ProcInterrupt
  /* 54A24 0A66B4 8012AEB4 */  .4byte ftCaptain_SpecialHi_ProcPhysics
  /* 54A28 0A66B8 8012AEB8 */  .4byte ftCaptain_SpecialHi_ProcMap
  .incbin "ovl2.raw.bin", 0x54A2C, 0x4
  /* 54A30 0A66C0 8012AEC0 */  .4byte ftCaptain_SpecialHiCatch_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54A34, 0x4
  /* 54A38 0A66C8 8012AEC8 */  .4byte ftCaptain_SpecialHiCatch_ProcPhysics
  /* 54A3C 0A66CC 8012AECC */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x54A40, 0x4
  /* 54A44 0A66D4 8012AED4 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x54A48, 0x4

glabel jtbl_ovl2_8012AEDC
  /* 54A4C 0A66DC 8012AEDC */  .4byte func_ovl2_800D93E4
  /* 54A50 0A66E0 8012AEE0 */  .4byte jtgt_ovl2_800DE934
  .incbin "ovl2.raw.bin", 0x54A54, 0x4
  /* 54A58 0A66E8 8012AEE8 */  .4byte ftCaptain_SpecialHi_ProcUpdate
  /* 54A5C 0A66EC 8012AEEC */  .4byte ftCaptain_SpecialHi_ProcInterrupt
  /* 54A60 0A66F0 8012AEF0 */  .4byte ftCaptain_SpecialHi_ProcPhysics
  /* 54A64 0A66F4 8012AEF4 */  .4byte ftCaptain_SpecialHi_ProcMap

glabel D_ovl2_8012AEF8
  .incbin "ovl2.raw.bin", 0x54A68, 0x4
  /* 54A6C 0A66FC 8012AEFC */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54A70, 0x4
  /* 54A74 0A6704 8012AF04 */  .4byte ftCommon_Appear_ProcPhysics
  /* 54A78 0A6708 8012AF08 */  .4byte func_ovl2_800DE348
  /* 54A7C 0A670C 8012AF0C */
  .asciz "1"
  .balign 4
  /* 54A80 0A6710 8012AF10 */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54A84, 0x4
  /* 54A88 0A6718 8012AF18 */  .4byte ftCommon_Appear_ProcPhysics
  /* 54A8C 0A671C 8012AF1C */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x54A90, 0x4
  /* 54A94 0A6724 8012AF24 */  .4byte ftYoshi_SpecialHi_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54A98, 0x4
  /* 54A9C 0A672C 8012AF2C */  .4byte ftYoshi_SpecialHi_ProcPhysics
  /* 54AA0 0A6730 8012AF30 */  .4byte ftYoshi_SpecialHi_ProcMap
  .incbin "ovl2.raw.bin", 0x54AA4, 0x4
  /* 54AA8 0A6738 8012AF38 */  .4byte ftYoshi_SpecialAirHi_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54AAC, 0x4
  /* 54AB0 0A6740 8012AF40 */  .4byte ftYoshi_SpecialAirHi_ProcPhysics
  /* 54AB4 0A6744 8012AF44 */  .4byte ftYoshi_SpecialAirHi_ProcMap
  .incbin "ovl2.raw.bin", 0x54AB8, 0x4
  /* 54ABC 0A674C 8012AF4C */  .4byte ftYoshi_SpecialLw_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54AC0, 0x4
  /* 54AC4 0A6754 8012AF54 */  .4byte func_ovl2_800D93E4
  /* 54AC8 0A6758 8012AF58 */  .4byte ftYoshi_SpecialLw_ProcMap
  .incbin "ovl2.raw.bin", 0x54ACC, 0x4
  /* 54AD0 0A6760 8012AF60 */  .4byte ftYoshi_SpecialLwLanding_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54AD4, 0x4

glabel jtbl_ovl2_8012AF68
  /* 54AD8 0A6768 8012AF68 */  .4byte func_ovl2_800D8BB4
  /* 54ADC 0A676C 8012AF6C */  .4byte jtgt_ovl2_800DDEC4
  .incbin "ovl2.raw.bin", 0x54AE0, 0x4
  /* 54AE4 0A6774 8012AF74 */  .4byte ftYoshi_SpecialLw_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54AE8, 0x4
  /* 54AEC 0A677C 8012AF7C */  .4byte func_ovl2_800D93E4
  /* 54AF0 0A6780 8012AF80 */  .4byte ftYoshi_SpecialLw_ProcMap
  .incbin "ovl2.raw.bin", 0x54AF4, 0xC
  /* 54B00 0A6790 8012AF90 */  .4byte ftYoshi_SpecialAirLwLoop_ProcPhysics
  /* 54B04 0A6794 8012AF94 */  .4byte ftYoshi_SpecialAirLwLoop_ProcMap
  .incbin "ovl2.raw.bin", 0x54B08, 0x4
  /* 54B0C 0A679C 8012AF9C */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x54B10, 0x4
  /* 54B14 0A67A4 8012AFA4 */  .4byte func_ovl2_800D8BB4
  /* 54B18 0A67A8 8012AFA8 */  .4byte ftYoshi_SpecialN_ProcMap
  .incbin "ovl2.raw.bin", 0x54B1C, 0x4
  /* 54B20 0A67B0 8012AFB0 */  .4byte ftYoshi_SpecialNCatch_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54B24, 0x4
  /* 54B28 0A67B8 8012AFB8 */  .4byte func_ovl2_800D8BB4
  /* 54B2C 0A67BC 8012AFBC */  .4byte ftYoshi_SpecialNCatch_ProcMap
  .incbin "ovl2.raw.bin", 0x54B30, 0x4
  /* 54B34 0A67C4 8012AFC4 */  .4byte ftYoshi_SpecialNRelease_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54B38, 0x4
  /* 54B3C 0A67CC 8012AFCC */  .4byte func_ovl2_800D8BB4
  /* 54B40 0A67D0 8012AFD0 */  .4byte ftYoshi_SpecialNRelease_ProcMap
  .incbin "ovl2.raw.bin", 0x54B44, 0x4
  /* 54B48 0A67D8 8012AFD8 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x54B4C, 0x4
  /* 54B50 0A67E0 8012AFE0 */  .4byte func_ovl2_800D91EC
  /* 54B54 0A67E4 8012AFE4 */  .4byte ftYoshi_SpecialAirN_ProcMap
  .incbin "ovl2.raw.bin", 0x54B58, 0x4
  /* 54B5C 0A67EC 8012AFEC */  .4byte ftYoshi_SpecialAirNCatch_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54B60, 0x4
  /* 54B64 0A67F4 8012AFF4 */  .4byte func_ovl2_800D91EC
  /* 54B68 0A67F8 8012AFF8 */  .4byte ftYoshi_SpecialAirNCatch_ProcMap
  .incbin "ovl2.raw.bin", 0x54B6C, 0x4
  /* 54B70 0A6800 8012B000 */  .4byte ftYoshi_SpecialAirNRelease_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54B74, 0x4
  /* 54B78 0A6808 8012B008 */  .4byte func_ovl2_800D91EC
  /* 54B7C 0A680C 8012B00C */  .4byte ftYoshi_SpecialAirNRelease_ProcMap

glabel D_ovl2_8012B010
  .incbin "ovl2.raw.bin", 0x54B80, 0x4
  /* 54B84 0A6814 8012B014 */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54B88, 0x4
  /* 54B8C 0A681C 8012B01C */  .4byte ftCommon_Appear_ProcPhysics
  /* 54B90 0A6820 8012B020 */  .4byte func_ovl2_800DE348
  /* 54B94 0A6824 8012B024 */
  .asciz "1"
  .balign 4
  /* 54B98 0A6828 8012B028 */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54B9C, 0x4
  /* 54BA0 0A6830 8012B030 */  .4byte ftCommon_Appear_ProcPhysics
  /* 54BA4 0A6834 8012B034 */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x54BA8, 0x4
  /* 54BAC 0A683C 8012B03C */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x54BB0, 0x4
  /* 54BB4 0A6844 8012B044 */  .4byte func_ovl2_800D8BB4
  /* 54BB8 0A6848 8012B048 */  .4byte ftPikachu_SpecialN_ProcMap
  .incbin "ovl2.raw.bin", 0x54BBC, 0x4
  /* 54BC0 0A6850 8012B050 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x54BC4, 0x4
  /* 54BC8 0A6858 8012B058 */  .4byte func_ovl2_800D91EC
  /* 54BCC 0A685C 8012B05C */  .4byte ftPikachu_SpecialAirN_ProcMap
  .incbin "ovl2.raw.bin", 0x54BD0, 0x4
  /* 54BD4 0A6864 8012B064 */  .4byte ftPikachu_SpecialLwStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54BD8, 0x4
  /* 54BDC 0A686C 8012B06C */  .4byte func_ovl2_800D8BB4
  /* 54BE0 0A6870 8012B070 */  .4byte ftPikachu_SpecialLwStart_ProcMap
  .incbin "ovl2.raw.bin", 0x54BE4, 0x4
  /* 54BE8 0A6878 8012B078 */  .4byte ftPikachu_SpecialLwLoop_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54BEC, 0x4
  /* 54BF0 0A6880 8012B080 */  .4byte func_ovl2_800D8BB4
  /* 54BF4 0A6884 8012B084 */  .4byte ftPikachu_SpecialLwLoop_ProcMap
  .incbin "ovl2.raw.bin", 0x54BF8, 0x4
  /* 54BFC 0A688C 8012B08C */  .4byte ftPikachu_SpecialLwHit_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54C00, 0x4
  /* 54C04 0A6894 8012B094 */  .4byte func_ovl2_800D8BB4
  /* 54C08 0A6898 8012B098 */  .4byte ftPikachu_SpecialLwHit_ProcMap
  .incbin "ovl2.raw.bin", 0x54C0C, 0x4
  /* 54C10 0A68A0 8012B0A0 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x54C14, 0x4
  /* 54C18 0A68A8 8012B0A8 */  .4byte func_ovl2_800D8BB4
  /* 54C1C 0A68AC 8012B0AC */  .4byte ftPikachu_SpecialLwEnd_ProcMap
  .incbin "ovl2.raw.bin", 0x54C20, 0x4
  /* 54C24 0A68B4 8012B0B4 */  .4byte ftPikachu_SpecialAirLwStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54C28, 0x4
  /* 54C2C 0A68BC 8012B0BC */  .4byte func_ovl2_800D91EC
  /* 54C30 0A68C0 8012B0C0 */  .4byte ftPikachu_SpecialAirLwStart_ProcMap
  .incbin "ovl2.raw.bin", 0x54C34, 0x4
  /* 54C38 0A68C8 8012B0C8 */  .4byte ftPikachu_SpecialAirLwLoop_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54C3C, 0x4
  /* 54C40 0A68D0 8012B0D0 */  .4byte func_ovl2_800D91EC
  /* 54C44 0A68D4 8012B0D4 */  .4byte ftPikachu_SpecialAirLwLoop_ProcMap
  .incbin "ovl2.raw.bin", 0x54C48, 0x4
  /* 54C4C 0A68DC 8012B0DC */  .4byte ftPikachu_SpecialAirLwHit_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54C50, 0x4
  /* 54C54 0A68E4 8012B0E4 */  .4byte ftPikachu_SpecialLwHit_ProcPhysics
  /* 54C58 0A68E8 8012B0E8 */  .4byte ftPikachu_SpecialAirLwHit_ProcMap
  .incbin "ovl2.raw.bin", 0x54C5C, 0x4
  /* 54C60 0A68F0 8012B0F0 */  .4byte ftPikachu_SpecialAirLwEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54C64, 0x4
  /* 54C68 0A68F8 8012B0F8 */  .4byte func_ovl2_800D91EC
  /* 54C6C 0A68FC 8012B0FC */  .4byte ftPikachu_SpecialAirLwEnd_ProcMap
  .incbin "ovl2.raw.bin", 0x54C70, 0x4
  /* 54C74 0A6904 8012B104 */  .4byte ftPikachu_SpecialHiStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54C78, 0x4
  /* 54C7C 0A690C 8012B10C */  .4byte func_ovl2_800D8BB4
  /* 54C80 0A6910 8012B110 */  .4byte ftPikachu_SpecialHiStart_ProcMap
  .incbin "ovl2.raw.bin", 0x54C84, 0x4
  /* 54C88 0A6918 8012B118 */  .4byte ftPikachu_SpecialHi_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54C8C, 0x4
  /* 54C90 0A6920 8012B120 */  .4byte ftPikachu_SpecialHi_ProcPhysics
  /* 54C94 0A6924 8012B124 */  .4byte ftPikachu_SpecialHi_ProcMap
  .incbin "ovl2.raw.bin", 0x54C98, 0x4
  /* 54C9C 0A692C 8012B12C */  .4byte ftPikachu_SpecialHiEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54CA0, 0x4
  /* 54CA4 0A6934 8012B134 */  .4byte ftPikachu_SpecialHiEnd_ProcPhysics
  /* 54CA8 0A6938 8012B138 */  .4byte ftPikachu_SpecialHiEnd_ProcMap
  .incbin "ovl2.raw.bin", 0x54CAC, 0x4
  /* 54CB0 0A6940 8012B140 */  .4byte ftPikachu_SpecialAirHiStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54CB4, 0x4
  /* 54CB8 0A6948 8012B148 */  .4byte ftPikachu_SpecialAirHiStart_ProcPhysics
  /* 54CBC 0A694C 8012B14C */  .4byte ftPikachu_SpecialAirHiStart_ProcMap
  .incbin "ovl2.raw.bin", 0x54CC0, 0x4
  /* 54CC4 0A6954 8012B154 */  .4byte ftPikachu_SpecialAirHi_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54CC8, 0x4
  /* 54CCC 0A695C 8012B15C */  .4byte ftPikachu_SpecialAirHi_ProcPhysics
  /* 54CD0 0A6960 8012B160 */  .4byte ftPikachu_SpecialAirHi_ProcMap
  .incbin "ovl2.raw.bin", 0x54CD4, 0x4
  /* 54CD8 0A6968 8012B168 */  .4byte ftPikachu_SpecialAirHiEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54CDC, 0x4
  /* 54CE0 0A6970 8012B170 */  .4byte ftPikachu_SpecialAirHiEnd_ProcPhysics
  /* 54CE4 0A6974 8012B174 */  .4byte ftPikachu_SpecialAirHiEnd_ProcMap

glabel D_ovl2_8012B178
  .incbin "ovl2.raw.bin", 0x54CE8, 0x4
  /* 54CEC 0A697C 8012B17C */  .4byte ftCommon_Attack100Start_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54CF0, 0x4

glabel jtbl_ovl2_8012B184
  /* 54CF4 0A6984 8012B184 */  .4byte func_ovl2_800D8BB4
  /* 54CF8 0A6988 8012B188 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x54CFC, 0x4
  /* 54D00 0A6990 8012B190 */  .4byte ftCommon_Attack100Loop_ProcUpdate
  /* 54D04 0A6994 8012B194 */  .4byte ftCommon_Attack100Loop_ProcInterrupt

glabel jtbl_ovl2_8012B198
  /* 54D08 0A6998 8012B198 */  .4byte func_ovl2_800D8BB4
  /* 54D0C 0A699C 8012B19C */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x54D10, 0x4
  /* 54D14 0A69A4 8012B1A4 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x54D18, 0x4

glabel jtbl_ovl2_8012B1AC
  /* 54D1C 0A69AC 8012B1AC */  .4byte func_ovl2_800D8BB4
  /* 54D20 0A69B0 8012B1B0 */  .4byte func_ovl2_800DDF44
  .incbin "ovl2.raw.bin", 0x54D24, 0x4
  /* 54D28 0A69B8 8012B1B8 */  .4byte ftCommon_JumpAerial_ProcUpdate
  /* 54D2C 0A69BC 8012B1BC */  .4byte ftCommon_JumpAerial_ProcInterrupt
  /* 54D30 0A69C0 8012B1C0 */  .4byte ftCommon_JumpAerial_ProcPhysics
  /* 54D34 0A69C4 8012B1C4 */  .4byte func_ovl2_800DE978
  .incbin "ovl2.raw.bin", 0x54D38, 0x4
  /* 54D3C 0A69CC 8012B1CC */  .4byte ftCommon_JumpAerial_ProcUpdate
  /* 54D40 0A69D0 8012B1D0 */  .4byte ftCommon_JumpAerial_ProcInterrupt
  /* 54D44 0A69D4 8012B1D4 */  .4byte ftCommon_JumpAerial_ProcPhysics
  /* 54D48 0A69D8 8012B1D8 */  .4byte func_ovl2_800DE978
  /* 54D4C 0A69DC 8012B1DC */
  .asciz "2"
  .balign 4
  /* 54D50 0A69E0 8012B1E0 */  .4byte ftCommon_JumpAerial_ProcUpdate
  /* 54D54 0A69E4 8012B1E4 */  .4byte ftCommon_JumpAerial_ProcInterrupt
  /* 54D58 0A69E8 8012B1E8 */  .4byte ftCommon_JumpAerial_ProcPhysics
  /* 54D5C 0A69EC 8012B1EC */  .4byte func_ovl2_800DE978
  /* 54D60 0A69F0 8012B1F0 */
  .asciz "2@"
  .balign 4
  /* 54D64 0A69F4 8012B1F4 */  .4byte ftCommon_JumpAerial_ProcUpdate
  /* 54D68 0A69F8 8012B1F8 */  .4byte ftCommon_JumpAerial_ProcInterrupt
  /* 54D6C 0A69FC 8012B1FC */  .4byte ftCommon_JumpAerial_ProcPhysics
  /* 54D70 0A6A00 8012B200 */  .4byte func_ovl2_800DE978
  .incbin "ovl2.raw.bin", 0x54D74, 0x4
  /* 54D78 0A6A08 8012B208 */  .4byte ftCommon_JumpAerial_ProcUpdate
  /* 54D7C 0A6A0C 8012B20C */  .4byte ftCommon_JumpAerial_ProcInterrupt
  /* 54D80 0A6A10 8012B210 */  .4byte ftCommon_JumpAerial_ProcPhysics
  /* 54D84 0A6A14 8012B214 */  .4byte func_ovl2_800DE978
  .incbin "ovl2.raw.bin", 0x54D88, 0x4
  /* 54D8C 0A6A1C 8012B21C */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54D90, 0x4
  /* 54D94 0A6A24 8012B224 */  .4byte ftCommon_Appear_ProcPhysics
  /* 54D98 0A6A28 8012B228 */  .4byte func_ovl2_800DE348
  /* 54D9C 0A6A2C 8012B22C */
  .asciz "3"
  .balign 4
  /* 54DA0 0A6A30 8012B230 */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54DA4, 0x4
  /* 54DA8 0A6A38 8012B238 */  .4byte ftCommon_Appear_ProcPhysics
  /* 54DAC 0A6A3C 8012B23C */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x54DB0, 0x4
  /* 54DB4 0A6A44 8012B244 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x54DB8, 0x4
  /* 54DBC 0A6A4C 8012B24C */  .4byte func_ovl2_800D8C14
  /* 54DC0 0A6A50 8012B250 */  .4byte ftPurin_SpecialN_ProcMap
  .incbin "ovl2.raw.bin", 0x54DC4, 0x4
  /* 54DC8 0A6A58 8012B258 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x54DCC, 0x4
  /* 54DD0 0A6A60 8012B260 */  .4byte ftPurin_SpecialAirN_ProcPhysics
  /* 54DD4 0A6A64 8012B264 */  .4byte ftPurin_SpecialAirN_ProcMap
  .incbin "ovl2.raw.bin", 0x54DD8, 0x4
  /* 54DDC 0A6A6C 8012B26C */  .4byte ftPurin_SpecialHi_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54DE0, 0x4
  /* 54DE4 0A6A74 8012B274 */  .4byte func_ovl2_800D8BB4
  /* 54DE8 0A6A78 8012B278 */  .4byte ftPurin_SpecialHi_ProcMap
  .incbin "ovl2.raw.bin", 0x54DEC, 0x4
  /* 54DF0 0A6A80 8012B280 */  .4byte ftPurin_SpecialHi_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54DF4, 0x4
  /* 54DF8 0A6A88 8012B288 */  .4byte func_ovl2_800D91EC
  /* 54DFC 0A6A8C 8012B28C */  .4byte ftPurin_SpecialAirHi_ProcMap
  .incbin "ovl2.raw.bin", 0x54E00, 0x4
  /* 54E04 0A6A94 8012B294 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x54E08, 0x4
  /* 54E0C 0A6A9C 8012B29C */  .4byte func_ovl2_800D8BB4
  /* 54E10 0A6AA0 8012B2A0 */  .4byte ftPurin_SpecialLw_ProcMap
  .incbin "ovl2.raw.bin", 0x54E14, 0x4
  /* 54E18 0A6AA8 8012B2A8 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x54E1C, 0x4
  /* 54E20 0A6AB0 8012B2B0 */  .4byte func_ovl2_800D91EC
  /* 54E24 0A6AB4 8012B2B4 */  .4byte ftPurin_SpecialAirLw_ProcMap

glabel D_ovl2_8012B2B8
  .incbin "ovl2.raw.bin", 0x54E28, 0x4
  /* 54E2C 0A6ABC 8012B2BC */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x54E30, 0x4

glabel jtbl_ovl2_8012B2C4
  /* 54E34 0A6AC4 8012B2C4 */  .4byte func_ovl2_800D8BB4
  /* 54E38 0A6AC8 8012B2C8 */  .4byte func_ovl2_800DDF44
  /* 54E3C 0A6ACC 8012B2CC */
  .asciz "1"
  .balign 4
  /* 54E40 0A6AD0 8012B2D0 */  .4byte ftNess_AppearStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54E44, 0x4
  /* 54E48 0A6AD8 8012B2D8 */  .4byte ftCommon_Appear_ProcPhysics
  /* 54E4C 0A6ADC 8012B2DC */  .4byte func_ovl2_800DE348
  /* 54E50 0A6AE0 8012B2E0 */
  .asciz "1@"
  .balign 4
  /* 54E54 0A6AE4 8012B2E4 */  .4byte ftNess_AppearStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54E58, 0x4
  /* 54E5C 0A6AEC 8012B2EC */  .4byte ftCommon_Appear_ProcPhysics
  /* 54E60 0A6AF0 8012B2F0 */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x54E64, 0x4
  /* 54E68 0A6AF8 8012B2F8 */  .4byte ftNess_AppearWait_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54E6C, 0x4
  /* 54E70 0A6B00 8012B300 */  .4byte ftCommon_Appear_ProcPhysics
  /* 54E74 0A6B04 8012B304 */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x54E78, 0x4
  /* 54E7C 0A6B0C 8012B30C */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54E80, 0x4
  /* 54E84 0A6B14 8012B314 */  .4byte ftCommon_Appear_ProcPhysics
  /* 54E88 0A6B18 8012B318 */  .4byte func_ovl2_800DE348
  /* 54E8C 0A6B1C 8012B31C */
  .asciz "2"
  .balign 4
  /* 54E90 0A6B20 8012B320 */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54E94, 0x4
  /* 54E98 0A6B28 8012B328 */  .4byte ftCommon_Appear_ProcPhysics
  /* 54E9C 0A6B2C 8012B32C */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x54EA0, 0x4
  /* 54EA4 0A6B34 8012B334 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x54EA8, 0x4
  /* 54EAC 0A6B3C 8012B33C */  .4byte func_ovl2_800D8BB4
  /* 54EB0 0A6B40 8012B340 */  .4byte ftNess_SpecialN_ProcMap
  .incbin "ovl2.raw.bin", 0x54EB4, 0x4
  /* 54EB8 0A6B48 8012B348 */  .4byte ftCommon_IfAnimEnd_SetStatusFall
  .incbin "ovl2.raw.bin", 0x54EBC, 0x4
  /* 54EC0 0A6B50 8012B350 */  .4byte func_ovl2_800D91EC
  /* 54EC4 0A6B54 8012B354 */  .4byte ftNess_SpecialAirN_ProcMap
  .incbin "ovl2.raw.bin", 0x54EC8, 0x4
  /* 54ECC 0A6B5C 8012B35C */  .4byte ftNess_SpecialHiStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54ED0, 0x4
  /* 54ED4 0A6B64 8012B364 */  .4byte ftNess_SpecialHi_ProcPhysics
  /* 54ED8 0A6B68 8012B368 */  .4byte ftNess_SpecialHiStart_ProcMap
  .incbin "ovl2.raw.bin", 0x54EDC, 0x4
  /* 54EE0 0A6B70 8012B370 */  .4byte ftNess_SpecialHiHold_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54EE4, 0x4
  /* 54EE8 0A6B78 8012B378 */  .4byte func_ovl2_800D8BB4
  /* 54EEC 0A6B7C 8012B37C */  .4byte ftNess_SpecialHiHold_ProcMap
  .incbin "ovl2.raw.bin", 0x54EF0, 0x4
  /* 54EF4 0A6B84 8012B384 */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x54EF8, 0x4
  /* 54EFC 0A6B8C 8012B38C */  .4byte func_ovl2_800D8BB4
  /* 54F00 0A6B90 8012B390 */  .4byte ftNess_SpecialHiEnd_ProcMap
  .incbin "ovl2.raw.bin", 0x54F04, 0x4
  /* 54F08 0A6B98 8012B398 */  .4byte ftNess_Jibaku_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54F0C, 0x4
  /* 54F10 0A6BA0 8012B3A0 */  .4byte ftNess_Jibaku_ProcPhysics
  /* 54F14 0A6BA4 8012B3A4 */  .4byte ftNess_Jibaku_ProcMap
  .incbin "ovl2.raw.bin", 0x54F18, 0x4
  /* 54F1C 0A6BAC 8012B3AC */  .4byte ftNess_SpecialAirHiStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54F20, 0x4
  /* 54F24 0A6BB4 8012B3B4 */  .4byte ftNess_SpecialAirHi_ProcPhysics
  /* 54F28 0A6BB8 8012B3B8 */  .4byte ftNess_SpecialAirHiStart_ProcMap
  .incbin "ovl2.raw.bin", 0x54F2C, 0x4
  /* 54F30 0A6BC0 8012B3C0 */  .4byte ftNess_SpecialAirHiHold_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54F34, 0x4
  /* 54F38 0A6BC8 8012B3C8 */  .4byte ftNess_SpecialAirHi_ProcPhysics
  /* 54F3C 0A6BCC 8012B3CC */  .4byte ftNess_SpecialAirHiHold_ProcMap
  .incbin "ovl2.raw.bin", 0x54F40, 0x4
  /* 54F44 0A6BD4 8012B3D4 */  .4byte ftNess_SpecialAirHiEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54F48, 0x4
  /* 54F4C 0A6BDC 8012B3DC */  .4byte ftNess_SpecialAirHi_ProcPhysics
  /* 54F50 0A6BE0 8012B3E0 */  .4byte ftNess_SpecialAirHiEnd_ProcMap
  .incbin "ovl2.raw.bin", 0x54F54, 0x4
  /* 54F58 0A6BE8 8012B3E8 */  .4byte ftNess_SpecialAirHiBound_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54F5C, 0x4
  /* 54F60 0A6BF0 8012B3F0 */  .4byte func_ovl2_800D91EC
  /* 54F64 0A6BF4 8012B3F4 */  .4byte ftNess_SpecialAirHiBound_ProcMap
  .incbin "ovl2.raw.bin", 0x54F68, 0x4
  /* 54F6C 0A6BFC 8012B3FC */  .4byte ftNess_JibakuAir_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54F70, 0x4
  /* 54F74 0A6C04 8012B404 */  .4byte ftNess_JibakuAir_ProcPhysics
  /* 54F78 0A6C08 8012B408 */  .4byte ftNess_JibakuAir_ProcMap
  .incbin "ovl2.raw.bin", 0x54F7C, 0x4
  /* 54F80 0A6C10 8012B410 */  .4byte ftNess_SpecialLwStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54F84, 0x4
  /* 54F88 0A6C18 8012B418 */  .4byte ftNess_SpecialLw_ProcPhysics
  /* 54F8C 0A6C1C 8012B41C */  .4byte ftNess_SpecialLwStart_ProcMap
  .incbin "ovl2.raw.bin", 0x54F90, 0x4
  /* 54F94 0A6C24 8012B424 */  .4byte ftNess_SpecialLwHold_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54F98, 0x4
  /* 54F9C 0A6C2C 8012B42C */  .4byte func_ovl2_800D8BB4
  /* 54FA0 0A6C30 8012B430 */  .4byte ftNess_SpecialLwHold_ProcMap
  .incbin "ovl2.raw.bin", 0x54FA4, 0x4
  /* 54FA8 0A6C38 8012B438 */  .4byte ftNess_SpecialLwHit_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54FAC, 0x4
  /* 54FB0 0A6C40 8012B440 */  .4byte func_ovl2_800D8BB4
  /* 54FB4 0A6C44 8012B444 */  .4byte ftNess_SpecialLwHit_ProcMap
  .incbin "ovl2.raw.bin", 0x54FB8, 0x4
  /* 54FBC 0A6C4C 8012B44C */  .4byte ftCommon_IfAnimEnd_SetStatusWait
  .incbin "ovl2.raw.bin", 0x54FC0, 0x4
  /* 54FC4 0A6C54 8012B454 */  .4byte func_ovl2_800D8BB4
  /* 54FC8 0A6C58 8012B458 */  .4byte ftNess_SpecialLwEnd_ProcMap
  .incbin "ovl2.raw.bin", 0x54FCC, 0x4
  /* 54FD0 0A6C60 8012B460 */  .4byte ftNess_SpecialAirLwStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54FD4, 0x4
  /* 54FD8 0A6C68 8012B468 */  .4byte ftNess_SpecialAirLw_ProcPhysics
  /* 54FDC 0A6C6C 8012B46C */  .4byte ftNess_SpecialAirLwStart_ProcMap
  .incbin "ovl2.raw.bin", 0x54FE0, 0x4
  /* 54FE4 0A6C74 8012B474 */  .4byte ftNess_SpecialAirLwHold_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54FE8, 0x4
  /* 54FEC 0A6C7C 8012B47C */  .4byte ftNess_SpecialAirLw_ProcPhysics
  /* 54FF0 0A6C80 8012B480 */  .4byte ftNess_SpecialAirLwHold_ProcMap
  .incbin "ovl2.raw.bin", 0x54FF4, 0x4
  /* 54FF8 0A6C88 8012B488 */  .4byte ftNess_SpecialAirLwHit_ProcUpdate
  .incbin "ovl2.raw.bin", 0x54FFC, 0x4
  /* 55000 0A6C90 8012B490 */  .4byte ftNess_SpecialAirLw_ProcPhysics
  /* 55004 0A6C94 8012B494 */  .4byte ftNess_SpecialAirLwHit_ProcMap
  .incbin "ovl2.raw.bin", 0x55008, 0x4
  /* 5500C 0A6C9C 8012B49C */  .4byte ftNess_SpecialAirLwEnd_ProcUpdate
  .incbin "ovl2.raw.bin", 0x55010, 0x4
  /* 55014 0A6CA4 8012B4A4 */  .4byte ftNess_SpecialAirLw_ProcPhysics
  /* 55018 0A6CA8 8012B4A8 */  .4byte ftNess_SpecialAirLwEnd_ProcMap

glabel D_ovl2_8012B4AC
  .incbin "ovl2.raw.bin", 0x5501C, 0x8
  /* 55024 0A6CB4 8012B4B4 */  .4byte ftMasterHand_Unk_ProcInterrupt
  .incbin "ovl2.raw.bin", 0x55028, 0x4
  /* 5502C 0A6CBC 8012B4BC */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x55030, 0x8
  /* 55038 0A6CC8 8012B4C8 */  .4byte ftMasterHand_Wait_ProcInterrupt
  /* 5503C 0A6CCC 8012B4CC */  .4byte ftMasterHand_Wait_ProcPhysics
  /* 55040 0A6CD0 8012B4D0 */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x55044, 0xC
  /* 55050 0A6CE0 8012B4E0 */  .4byte ftMasterHand_Move_ProcPhysics
  /* 55054 0A6CE4 8012B4E4 */  .4byte ftMasterHand_Move_ProcMap
  /* 55058 0A6CE8 8012B4E8 */
  .asciz "1"
  .balign 4
  /* 5505C 0A6CEC 8012B4EC */  .4byte ftMasterHand_Hippataku_ProcUpdate
  .incbin "ovl2.raw.bin", 0x55060, 0x4

glabel jtbl_ovl2_8012B4F4
  /* 55064 0A6CF4 8012B4F4 */  .4byte func_ovl2_800D93E4
  /* 55068 0A6CF8 8012B4F8 */  .4byte func_ovl2_800DE348
  /* 5506C 0A6CFC 8012B4FC */
  .asciz "1@"
  .balign 4
  /* 55070 0A6D00 8012B500 */  .4byte ftMasterHand_Harau_ProcUpdate
  .incbin "ovl2.raw.bin", 0x55074, 0x4
  /* 55078 0A6D08 8012B508 */  .4byte ftMasterHand_Harau_ProcPhysics
  /* 5507C 0A6D0C 8012B50C */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x55080, 0x4
  /* 55084 0A6D14 8012B514 */  .4byte ftMasterHand_Okuhikouki1_ProcUpdate
  .incbin "ovl2.raw.bin", 0x55088, 0x4

glabel jtbl_ovl2_8012B51C
  /* 5508C 0A6D1C 8012B51C */  .4byte func_ovl2_800D93E4
  /* 55090 0A6D20 8012B520 */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x55094, 0x4
  /* 55098 0A6D28 8012B528 */  .4byte ftMasterHand_Okuhikouki2_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5509C, 0x4
  /* 550A0 0A6D30 8012B530 */  .4byte ftMasterHand_Okuhikouki2_ProcPhysics
  /* 550A4 0A6D34 8012B534 */  .4byte func_ovl2_800DE348
  /* 550A8 0A6D38 8012B538 */
  .asciz "2"
  .balign 4
  /* 550AC 0A6D3C 8012B53C */  .4byte ftMasterHand_Okuhikouki3_ProcUpdate
  .incbin "ovl2.raw.bin", 0x550B0, 0x4

glabel jtbl_ovl2_8012B544
  /* 550B4 0A6D44 8012B544 */  .4byte func_ovl2_800D93E4
  /* 550B8 0A6D48 8012B548 */  .4byte func_ovl2_800DE348
  /* 550BC 0A6D4C 8012B54C */
  .asciz "2@"
  .balign 4
  /* 550C0 0A6D50 8012B550 */  .4byte ftMasterHand_Walk_ProcUpdate
  .incbin "ovl2.raw.bin", 0x550C4, 0x18
  /* 550DC 0A6D6C 8012B56C */  .4byte ftMasterHand_WalkLoop_ProcPhysics
  /* 550E0 0A6D70 8012B570 */  .4byte ftMasterHand_WalkLoop_ProcMap
  .incbin "ovl2.raw.bin", 0x550E4, 0x4
  /* 550E8 0A6D78 8012B578 */  .4byte ftMasterHand_WalkWait_ProcUpdate
  .incbin "ovl2.raw.bin", 0x550EC, 0x8
  /* 550F4 0A6D84 8012B584 */  .4byte func_ovl2_800DE348
  /* 550F8 0A6D88 8012B588 */
  .asciz "3"
  .balign 4
  /* 550FC 0A6D8C 8012B58C */  .4byte ftMasterHand_WalkShoot_ProcUpdate
  .incbin "ovl2.raw.bin", 0x55100, 0x8
  /* 55108 0A6D98 8012B598 */  .4byte func_ovl2_800DE348
  /* 5510C 0A6D9C 8012B59C */
  .asciz "3@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x55110, 0x8
  /* 55118 0A6DA8 8012B5A8 */  .4byte ftMasterHand_GootsubuUp_ProcPhysics
  /* 5511C 0A6DAC 8012B5AC */  .4byte ftMasterHand_GootsubuUp_ProcMap
  .incbin "ovl2.raw.bin", 0x55120, 0xC
  /* 5512C 0A6DBC 8012B5BC */  .4byte ftMasterHand_GootsubuWait_ProcPhysics
  /* 55130 0A6DC0 8012B5C0 */  .4byte ftMasterHand_GootsubuWait_ProcMap
  .incbin "ovl2.raw.bin", 0x55134, 0x4
  /* 55138 0A6DC8 8012B5C8 */  .4byte ftMasterHand_GootsubuDown_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5513C, 0x4

glabel jtbl_ovl2_8012B5D0
  /* 55140 0A6DD0 8012B5D0 */  .4byte func_ovl2_800D93E4
  /* 55144 0A6DD4 8012B5D4 */  .4byte func_ovl2_800DE348
  /* 55148 0A6DD8 8012B5D8 */
  .asciz "4"
  .balign 4
  .incbin "ovl2.raw.bin", 0x5514C, 0xC
  /* 55158 0A6DE8 8012B5E8 */  .4byte ftMasterHand_GootsubuLanding_ProcMap
  /* 5515C 0A6DEC 8012B5EC */
  .asciz "4@"
  .balign 4
  /* 55160 0A6DF0 8012B5F0 */  .4byte ftMasterHand_Tsutsuku1_ProcUpdate
  .incbin "ovl2.raw.bin", 0x55164, 0x4

glabel jtbl_ovl2_8012B5F8
  /* 55168 0A6DF8 8012B5F8 */  .4byte func_ovl2_800D93E4
  /* 5516C 0A6DFC 8012B5FC */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x55170, 0x4
  /* 55174 0A6E04 8012B604 */  .4byte ftMasterHand_Tsutsuku3_ProcUpdate
  .incbin "ovl2.raw.bin", 0x55178, 0x4

glabel jtbl_ovl2_8012B60C
  /* 5517C 0A6E0C 8012B60C */  .4byte func_ovl2_800D93E4
  /* 55180 0A6E10 8012B610 */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x55184, 0xC
  /* 55190 0A6E20 8012B620 */  .4byte ftMasterHand_Tsutsuku2_ProcPhysi
  /* 55194 0A6E24 8012B624 */  .4byte func_ovl2_800DE348
  /* 55198 0A6E28 8012B628 */
  .asciz "5"
  .balign 4
  /* 5519C 0A6E2C 8012B62C */  .4byte ftMasterHand_Drill_ProcUpdate
  .incbin "ovl2.raw.bin", 0x551A0, 0x4
  /* 551A4 0A6E34 8012B634 */  .4byte ftMasterHand_Drill_ProcPhysics
  /* 551A8 0A6E38 8012B638 */  .4byte ftMasterHand_Drill_ProcMap
  /* 551AC 0A6E3C 8012B63C */
  .asciz "5@"
  .balign 4
  /* 551B0 0A6E40 8012B640 */  .4byte ftMasterHand_Okukouki_ProcUpdate
  .incbin "ovl2.raw.bin", 0x551B4, 0x4

glabel jtbl_ovl2_8012B648
  /* 551B8 0A6E48 8012B648 */  .4byte func_ovl2_800D93E4
  /* 551BC 0A6E4C 8012B64C */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x551C0, 0x4
  /* 551C4 0A6E54 8012B654 */  .4byte ftMasterHand_Yubideppou1_ProcUpdate
  .incbin "ovl2.raw.bin", 0x551C8, 0x4

glabel jtbl_ovl2_8012B65C
  /* 551CC 0A6E5C 8012B65C */  .4byte func_ovl2_800D93E4
  /* 551D0 0A6E60 8012B660 */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x551D4, 0x4
  /* 551D8 0A6E68 8012B668 */  .4byte ftMasterHand_Yubideppou3_ProcUpdate
  .incbin "ovl2.raw.bin", 0x551DC, 0x4
  /* 551E0 0A6E70 8012B670 */  .4byte ftMasterHand_Yubideppou3_ProcPhysics
  /* 551E4 0A6E74 8012B674 */  .4byte func_ovl2_800DE348
  /* 551E8 0A6E78 8012B678 */
  .asciz "6"
  .balign 4
  .incbin "ovl2.raw.bin", 0x551EC, 0x8
  /* 551F4 0A6E84 8012B684 */  .4byte ftMasterHand_Yubideppou2_ProcPhysics
  /* 551F8 0A6E88 8012B688 */  .4byte func_ovl2_800DE348
  /* 551FC 0A6E8C 8012B68C */
  .asciz "6@"
  .balign 4
  /* 55200 0A6E90 8012B690 */  .4byte ftMasterHand_Okupunch1_ProcUpdate
  .incbin "ovl2.raw.bin", 0x55204, 0x4

glabel jtbl_ovl2_8012B698
  /* 55208 0A6E98 8012B698 */  .4byte jtgt_ovl2_800D9414
  /* 5520C 0A6E9C 8012B69C */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x55210, 0x4
  /* 55214 0A6EA4 8012B6A4 */  .4byte ftMasterHand_Okupunch2_ProcUpdate
  .incbin "ovl2.raw.bin", 0x55218, 0x4
  /* 5521C 0A6EAC 8012B6AC */  .4byte ftMasterHand_Okupunch2_ProcPhysics
  /* 55220 0A6EB0 8012B6B0 */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x55224, 0x4
  /* 55228 0A6EB8 8012B6B8 */  .4byte ftMasterHand_Okupunch3_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5522C, 0x4

glabel jtbl_ovl2_8012B6C0
  /* 55230 0A6EC0 8012B6C0 */  .4byte jtgt_ovl2_800D9414
  /* 55234 0A6EC4 8012B6C4 */  .4byte func_ovl2_800DE348
  /* 55238 0A6EC8 8012B6C8 */
  .asciz "7"
  .balign 4
  /* 5523C 0A6ECC 8012B6CC */  .4byte ftMasterHand_Okutsubushi_ProcUpdate
  .incbin "ovl2.raw.bin", 0x55240, 0x4
  /* 55244 0A6ED4 8012B6D4 */  .4byte ftMasterHand_Okutsubushi_ProcPhysics
  /* 55248 0A6ED8 8012B6D8 */  .4byte func_ovl2_800DE348
  /* 5524C 0A6EDC 8012B6DC */
  .asciz "6@"
  .balign 4
  /* 55250 0A6EE0 8012B6E0 */  .4byte ftMasterHand_OkutsubushiStart_ProcUpdate
  .incbin "ovl2.raw.bin", 0x55254, 0x4

glabel jtbl_ovl2_8012B6E8
  /* 55258 0A6EE8 8012B6E8 */  .4byte jtgt_ovl2_800D9414
  /* 5525C 0A6EEC 8012B6EC */  .4byte func_ovl2_800DE348
  /* 55260 0A6EF0 8012B6F0 */
  .asciz "7@"
  .balign 4
  /* 55264 0A6EF4 8012B6F4 */  .4byte ftMasterHand_Dead1_ProcUpdate
  .incbin "ovl2.raw.bin", 0x55268, 0x18
  /* 55280 0A6F10 8012B710 */  .4byte ftMasterHand_Dead2_ProcPhysics
  /* 55284 0A6F14 8012B714 */  .4byte func_ovl2_800DE348
  .incbin "ovl2.raw.bin", 0x55288, 0x4
  /* 5528C 0A6F1C 8012B71C */  .4byte ftMasterHand_Dead1_ProcUpdate
  .incbin "ovl2.raw.bin", 0x55290, 0xC
  /* 5529C 0A6F2C 8012B72C */
  .asciz "8"
  .balign 4
  /* 552A0 0A6F30 8012B730 */  .4byte ftCommon_Appear_ProcUpdate
  .incbin "ovl2.raw.bin", 0x552A4, 0x4
  /* 552A8 0A6F38 8012B738 */  .4byte ftMasterHand_Appear_ProcPhysics
  /* 552AC 0A6F3C 8012B73C */  .4byte func_ovl2_800DE348

glabel D_ovl2_8012B740
  /* 552B0 0A6F40 8012B740 */  .4byte D_ovl2_80129F08
  /* 552B4 0A6F44 8012B744 */  .4byte D_ovl2_8012A214
  /* 552B8 0A6F48 8012B748 */  .4byte D_ovl2_80129FBC
  /* 552BC 0A6F4C 8012B74C */  .4byte D_ovl2_8012A41C
  /* 552C0 0A6F50 8012B750 */  .4byte D_ovl2_8012A4F8
  /* 552C4 0A6F54 8012B754 */  .4byte D_ovl2_8012A5AC
  /* 552C8 0A6F58 8012B758 */  .4byte D_ovl2_8012AEF8
  /* 552CC 0A6F5C 8012B75C */  .4byte D_ovl2_8012AD7C
  /* 552D0 0A6F60 8012B760 */  .4byte D_ovl2_8012A700
  /* 552D4 0A6F64 8012B764 */  .4byte D_ovl2_8012B010
  /* 552D8 0A6F68 8012B768 */  .4byte D_ovl2_8012B178
  /* 552DC 0A6F6C 8012B76C */  .4byte D_ovl2_8012B2B8
  /* 552E0 0A6F70 8012B770 */  .4byte D_ovl2_8012B4AC
  /* 552E4 0A6F74 8012B774 */  .4byte D_ovl2_80129F08
  /* 552E8 0A6F78 8012B778 */  .4byte D_ovl2_80129F08
  /* 552EC 0A6F7C 8012B77C */  .4byte D_ovl2_8012A214
  /* 552F0 0A6F80 8012B780 */  .4byte D_ovl2_80129FBC
  /* 552F4 0A6F84 8012B784 */  .4byte D_ovl2_8012A41C
  /* 552F8 0A6F88 8012B788 */  .4byte D_ovl2_8012A4F8
  /* 552FC 0A6F8C 8012B78C */  .4byte D_ovl2_8012A5AC
  /* 55300 0A6F90 8012B790 */  .4byte D_ovl2_8012AEF8
  /* 55304 0A6F94 8012B794 */  .4byte D_ovl2_8012AD7C
  /* 55308 0A6F98 8012B798 */  .4byte D_ovl2_8012A700
  /* 5530C 0A6F9C 8012B79C */  .4byte D_ovl2_8012B010
  /* 55310 0A6FA0 8012B7A0 */  .4byte D_ovl2_8012B178
  /* 55314 0A6FA4 8012B7A4 */  .4byte D_ovl2_8012B2B8
  /* 55318 0A6FA8 8012B7A8 */  .4byte D_ovl2_80129FBC
  .incbin "ovl2.raw.bin", 0x5531C, 0x4

glabel ftCommon_ShuffleFrameIndexMax
  .incbin "ovl2.raw.bin", 0x55320, 0x4

glabel Fighter_ColAnimIndex_Skeleton
  .incbin "ovl2.raw.bin", 0x55324, 0x6C

glabel gmCommon_DamageStaleTable
  /* 55390 0A7020 8012B820 */
  .4byte 0x3f400000 # .float 0.75
  .incbin "ovl2.raw.bin", 0x55394, 0xC

glabel D_ovl2_8012B830
  .incbin "ovl2.raw.bin", 0x553A0, 0x4

glabel D_ovl2_8012B834
  .incbin "ovl2.raw.bin", 0x553A4, 0x3

glabel D_ovl2_8012B837
  .incbin "ovl2.raw.bin", 0x553A7, 0xD9

glabel D_ovl2_8012B910
  /* 55480 0A7110 8012B910 */
  .asciz ";"
  .balign 4
  .incbin "ovl2.raw.bin", 0x55484, 0xC
  /* 55490 0A7120 8012B920 */
  .asciz ";"
  .balign 4
  /* 55494 0A7124 8012B924 */
  .asciz "="
  .balign 4
  /* 55498 0A7128 8012B928 */
  .asciz "9"
  .balign 4
  .incbin "ovl2.raw.bin", 0x5549C, 0x4

glabel D_ovl2_8012B930
  .incbin "ovl2.raw.bin", 0x554A0, 0x1C
  /* 554BC 0A714C 8012B94C */
  .asciz "BH"
  .balign 4
  .incbin "ovl2.raw.bin", 0x554C0, 0x8
  /* 554C8 0A7158 8012B958 */
  .asciz "Ap"
  .balign 4
  .incbin "ovl2.raw.bin", 0x554CC, 0x1C

glabel D_ovl2_8012B978
  .incbin "ovl2.raw.bin", 0x554E8, 0x200

glabel D_ovl2_8012BB78
  .incbin "ovl2.raw.bin", 0x556E8, 0x180

glabel D_ovl2_8012BCF8
  .incbin "ovl2.raw.bin", 0x55868, 0x180

glabel D_ovl2_8012BE78
  .incbin "ovl2.raw.bin", 0x559E8, 0x40

glabel D_ovl2_8012BEB8
  .incbin "ovl2.raw.bin", 0x55A28, 0x40

glabel D_ovl2_8012BEF8
  .incbin "ovl2.raw.bin", 0x55A68, 0x40

glabel D_ovl2_8012BF38
  .incbin "ovl2.raw.bin", 0x55AA8, 0x40

glabel D_ovl2_8012BF78
  .incbin "ovl2.raw.bin", 0x55AE8, 0x40

glabel D_ovl2_8012BFB8
  .incbin "ovl2.raw.bin", 0x55B28, 0x40

glabel D_ovl2_8012BFF8
  .incbin "ovl2.raw.bin", 0x55B68, 0x30

glabel D_ovl2_8012C028
  .incbin "ovl2.raw.bin", 0x55B98, 0x30

glabel gDisplayListHurtboxCuboid
  .incbin "ovl2.raw.bin", 0x55BC8, 0x1C
  /* 55BE4 0A7874 8012C074 */
  .asciz "@@@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x55BE8, 0x4
  /* 55BEC 0A787C 8012C07C */
  .asciz "@@@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x55BF0, 0x24
  /* 55C14 0A78A4 8012C0A4 */  .4byte D_ovl2_8012B978
  .incbin "ovl2.raw.bin", 0x55C18, 0x2C
  /* 55C44 0A78D4 8012C0D4 */  .4byte D_ovl2_8012BB78
  .incbin "ovl2.raw.bin", 0x55C48, 0x50

glabel gDisplayListHitboxEdge
  .incbin "ovl2.raw.bin", 0x55C98, 0x1C
  /* 55CB4 0A7944 8012C144 */  .4byte D_ovl2_8012BCF8
  .incbin "ovl2.raw.bin", 0x55CB8, 0x18

glabel gDisplayListHitboxBlend
  .incbin "ovl2.raw.bin", 0x55CD0, 0x3C
  /* 55D0C 0A799C 8012C19C */  .4byte D_ovl2_8012B978
  .incbin "ovl2.raw.bin", 0x55D10, 0x5C
  /* 55D6C 0A79FC 8012C1FC */  .4byte D_ovl2_8012BE78
  .incbin "ovl2.raw.bin", 0x55D70, 0x24
  /* 55D94 0A7A24 8012C224 */  .4byte D_ovl2_8012BEB8
  .incbin "ovl2.raw.bin", 0x55D98, 0x24
  /* 55DBC 0A7A4C 8012C24C */  .4byte D_ovl2_8012BEF8
  .incbin "ovl2.raw.bin", 0x55DC0, 0x24
  /* 55DE4 0A7A74 8012C274 */  .4byte D_ovl2_8012BF38
  .incbin "ovl2.raw.bin", 0x55DE8, 0x24
  /* 55E0C 0A7A9C 8012C29C */  .4byte D_ovl2_8012BF78
  .incbin "ovl2.raw.bin", 0x55E10, 0x24
  /* 55E34 0A7AC4 8012C2C4 */  .4byte D_ovl2_8012BFB8
  .incbin "ovl2.raw.bin", 0x55E38, 0x48

glabel gDisplayListHitboxCube
  .incbin "ovl2.raw.bin", 0x55E80, 0x3C
  /* 55EBC 0A7B4C 8012C34C */  .4byte D_ovl2_8012B978
  .incbin "ovl2.raw.bin", 0x55EC0, 0x2C
  /* 55EEC 0A7B7C 8012C37C */  .4byte D_ovl2_8012BE78
  .incbin "ovl2.raw.bin", 0x55EF0, 0x58

glabel gDisplayListMapCollisionBottom
  .incbin "ovl2.raw.bin", 0x55F48, 0x3C
  /* 55F84 0A7C14 8012C414 */  .4byte D_ovl2_8012B978
  .incbin "ovl2.raw.bin", 0x55F88, 0x2C
  /* 55FB4 0A7C44 8012C444 */  .4byte D_ovl2_8012BFF8
  .incbin "ovl2.raw.bin", 0x55FB8, 0x10

glabel gDisplayListMapCollisionTop
  .incbin "ovl2.raw.bin", 0x55FC8, 0xC
  /* 55FD4 0A7C64 8012C464 */  .4byte D_ovl2_8012C028
  .incbin "ovl2.raw.bin", 0x55FD8, 0x28

glabel D_ovl2_8012C490
  .incbin "ovl2.raw.bin", 0x56000, 0x20

glabel D_ovl2_8012C4B0
  .incbin "ovl2.raw.bin", 0x56020, 0x18

glabel D_ovl2_8012C4C8
  .incbin "ovl2.raw.bin", 0x56038, 0x4

glabel D_ovl2_8012C4CC
  .incbin "ovl2.raw.bin", 0x5603C, 0x4

glabel D_ovl2_8012C4D0
  .incbin "ovl2.raw.bin", 0x56040, 0x4

glabel D_ovl2_8012C4D4
  .incbin "ovl2.raw.bin", 0x56044, 0xC

glabel D_ovl2_8012C4E0
  /* 56050 0A7CE0 8012C4E0 */
  .4byte 0x40800000 # .float 4.0
  /* 56054 0A7CE4 8012C4E4 */
  .asciz "@@"
  .balign 4
  /* 56058 0A7CE8 8012C4E8 */
  .asciz "@@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x5605C, 0x4
  /* 56060 0A7CF0 8012C4F0 */
  .asciz "@"
  .balign 4
  /* 56064 0A7CF4 8012C4F4 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56068, 0x28

glabel D_ovl2_8012C520
  .incbin "ovl2.raw.bin", 0x56090, 0x16C
  /* 561FC 0A7E8C 8012C68C */
  .asciz "B4"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56200, 0x10
  /* 56210 0A7EA0 8012C6A0 */
  .asciz "Ez"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56214, 0x20
  /* 56234 0A7EC4 8012C6C4 */
  .asciz "B4"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56238, 0x48
  /* 56280 0A7F10 8012C710 */
  .asciz "Ez"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56284, 0x20
  /* 562A4 0A7F34 8012C734 */
  .asciz "B4"
  .balign 4
  .incbin "ovl2.raw.bin", 0x562A8, 0x34
  /* 562DC 0A7F6C 8012C76C */
  .asciz "B4"
  .balign 4
  .incbin "ovl2.raw.bin", 0x562E0, 0x34
  /* 56314 0A7FA4 8012C7A4 */
  .asciz "B4"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56318, 0x34
  /* 5634C 0A7FDC 8012C7DC */
  .asciz "B4"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56350, 0x34
  /* 56384 0A8014 8012C814 */
  .asciz "B4"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56388, 0x18

glabel ftDamage_HandicapDesc
  .incbin "ovl2.raw.bin", 0x563A0, 0x10

glabel Fighter_ItemSwing_Desc
  .incbin "ovl2.raw.bin", 0x563B0, 0x8
  /* 563B8 0A8048 8012C848 */
  .asciz "?@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x563BC, 0x2C
  /* 563E8 0A8078 8012C878 */
  .asciz "?"
  .balign 4
  .incbin "ovl2.raw.bin", 0x563EC, 0x1C
  /* 56408 0A8098 8012C898 */
  .asciz "?333@ "
  .balign 4
  /* 56410 0A80A0 8012C8A0 */
  .asciz "?@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56414, 0x38
  /* 5644C 0A80DC 8012C8DC */
  .asciz "@ "
  .balign 4
  .incbin "ovl2.raw.bin", 0x56450, 0xC
  /* 5645C 0A80EC 8012C8EC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56460, 0x80

glabel Fighter_DownBounce_Sound
  .incbin "ovl2.raw.bin", 0x564E0, 0x38

glabel D_ovl2_8012C9A8
  .incbin "ovl2.raw.bin", 0x56518, 0x38

glabel Fighter_ItemThrow_Desc
  .incbin "ovl2.raw.bin", 0x56550, 0x78
  /* 565C8 0A8258 8012CA58 */
  .asciz "2"
  .balign 4
  /* 565CC 0A825C 8012CA5C */
  .asciz "2"
  .balign 4
  /* 565D0 0A8260 8012CA60 */
  .asciz "2"
  .balign 4
  .incbin "ovl2.raw.bin", 0x565D4, 0x14

glabel gDefaultShadowColor
  .incbin "ovl2.raw.bin", 0x565E8, 0x4

glabel gTeamShadowColors
  .incbin "ovl2.raw.bin", 0x565EC, 0x14

glabel D_ovl2_8012CA90
  /* 56600 0A8290 8012CA90 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56604, 0xC
  /* 56610 0A82A0 8012CAA0 */  .4byte D_ovl2_8012CA90

glabel D_ovl2_8012CAA4
  /* 56614 0A82A4 8012CAA4 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x56618, 0x4

glabel D_ovl2_8012CAAC
  /* 5661C 0A82AC 8012CAAC */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56620, 0x10
  /* 56630 0A82C0 8012CAC0 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x56634, 0x8
  /* 5663C 0A82CC 8012CACC */  .4byte D_ovl2_8012CAAC

glabel D_ovl2_8012CAD0
  /* 56640 0A82D0 8012CAD0 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56644, 0x10
  /* 56654 0A82E4 8012CAE4 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x56658, 0x8
  /* 56660 0A82F0 8012CAF0 */  .4byte D_ovl2_8012CAD0

glabel D_ovl2_8012CAF4
  .incbin "ovl2.raw.bin", 0x56664, 0x4
  /* 56668 0A82F8 8012CAF8 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x5666C, 0x4
  /* 56670 0A8300 8012CB00 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56674, 0x14
  /* 56688 0A8318 8012CB18 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x5668C, 0x4

glabel D_ovl2_8012CB20
  .incbin "ovl2.raw.bin", 0x56690, 0x14
  /* 566A4 0A8334 8012CB34 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x566A8, 0x14
  /* 566BC 0A834C 8012CB4C */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x566C0, 0xC
  /* 566CC 0A835C 8012CB5C */  .4byte D_ovl2_8012CB20

glabel D_ovl2_8012CB60
  /* 566D0 0A8360 8012CB60 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x566D4, 0x8
  /* 566DC 0A836C 8012CB6C */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x566E0, 0x8
  /* 566E8 0A8378 8012CB78 */  .4byte D_ovl2_8012CB60

glabel D_ovl2_8012CB7C
  .incbin "ovl2.raw.bin", 0x566EC, 0x4

glabel D_ovl2_8012CB80
  .incbin "ovl2.raw.bin", 0x566F0, 0xC
  /* 566FC 0A838C 8012CB8C */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56700, 0xC

glabel D_ovl2_8012CB9C
  /* 5670C 0A839C 8012CB9C */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56710, 0x18
  /* 56728 0A83B8 8012CBB8 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x5672C, 0x1C
  /* 56748 0A83D8 8012CBD8 */  .4byte D_ovl2_8012CB9C

glabel D_ovl2_8012CBDC
  /* 5674C 0A83DC 8012CBDC */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56750, 0x14
  /* 56764 0A83F4 8012CBF4 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x56768, 0x14
  /* 5677C 0A840C 8012CC0C */  .4byte D_ovl2_8012CBDC

glabel D_ovl2_8012CC10
  .incbin "ovl2.raw.bin", 0x56780, 0x4
  /* 56784 0A8414 8012CC14 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56788, 0x24
  /* 567AC 0A843C 8012CC3C */  .4byte D_ovl2_8012CC10

glabel D_ovl2_8012CC40
  /* 567B0 0A8440 8012CC40 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x567B4, 0x8
  /* 567BC 0A844C 8012CC4C */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x567C0, 0xC

glabel D_ovl2_8012CC5C
  .incbin "ovl2.raw.bin", 0x567CC, 0x4
  /* 567D0 0A8460 8012CC60 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x567D4, 0x8
  /* 567DC 0A846C 8012CC6C */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x567E0, 0x10

glabel D_ovl2_8012CC80
  .incbin "ovl2.raw.bin", 0x567F0, 0x18
  /* 56808 0A8498 8012CC98 */  .4byte D_ovl2_8012CC40
  .incbin "ovl2.raw.bin", 0x5680C, 0x1C
  /* 56828 0A84B8 8012CCB8 */  .4byte D_ovl2_8012CC5C
  .incbin "ovl2.raw.bin", 0x5682C, 0x8

glabel D_ovl2_8012CCC4
  .incbin "ovl2.raw.bin", 0x56834, 0x18
  /* 5684C 0A84DC 8012CCDC */  .4byte D_ovl2_8012CC40
  .incbin "ovl2.raw.bin", 0x56850, 0x1C
  /* 5686C 0A84FC 8012CCFC */  .4byte D_ovl2_8012CC5C
  .incbin "ovl2.raw.bin", 0x56870, 0x8

glabel D_ovl2_8012CD08
  .incbin "ovl2.raw.bin", 0x56878, 0x18
  /* 56890 0A8520 8012CD20 */  .4byte D_ovl2_8012CC40
  .incbin "ovl2.raw.bin", 0x56894, 0x1C
  /* 568B0 0A8540 8012CD40 */  .4byte D_ovl2_8012CC5C
  .incbin "ovl2.raw.bin", 0x568B4, 0x8

glabel D_ovl2_8012CD4C
  .incbin "ovl2.raw.bin", 0x568BC, 0x18
  /* 568D4 0A8564 8012CD64 */  .4byte D_ovl2_8012CC40
  .incbin "ovl2.raw.bin", 0x568D8, 0x1C
  /* 568F4 0A8584 8012CD84 */  .4byte D_ovl2_8012CC5C
  .incbin "ovl2.raw.bin", 0x568F8, 0x8

glabel D_ovl2_8012CD90
  .incbin "ovl2.raw.bin", 0x56900, 0x4
  /* 56904 0A8594 8012CD94 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56908, 0x8
  /* 56910 0A85A0 8012CDA0 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56914, 0x10

glabel D_ovl2_8012CDB4
  .incbin "ovl2.raw.bin", 0x56924, 0x18
  /* 5693C 0A85CC 8012CDCC */  .4byte D_ovl2_8012CD90
  .incbin "ovl2.raw.bin", 0x56940, 0x8

glabel D_ovl2_8012CDD8
  .incbin "ovl2.raw.bin", 0x56948, 0x18
  /* 56960 0A85F0 8012CDF0 */  .4byte D_ovl2_8012CD90
  .incbin "ovl2.raw.bin", 0x56964, 0x8

glabel D_ovl2_8012CDFC
  .incbin "ovl2.raw.bin", 0x5696C, 0x18
  /* 56984 0A8614 8012CE14 */  .4byte D_ovl2_8012CD90
  .incbin "ovl2.raw.bin", 0x56988, 0x8

glabel D_ovl2_8012CE20
  .incbin "ovl2.raw.bin", 0x56990, 0x18
  /* 569A8 0A8638 8012CE38 */  .4byte D_ovl2_8012CD90
  .incbin "ovl2.raw.bin", 0x569AC, 0x8

glabel D_ovl2_8012CE44
  .incbin "ovl2.raw.bin", 0x569B4, 0x4
  /* 569B8 0A8648 8012CE48 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x569BC, 0x8
  /* 569C4 0A8654 8012CE54 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x569C8, 0x8
  /* 569D0 0A8660 8012CE60 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x569D4, 0xC

glabel D_ovl2_8012CE70
  .incbin "ovl2.raw.bin", 0x569E0, 0x18
  /* 569F8 0A8688 8012CE88 */  .4byte D_ovl2_8012CE44
  .incbin "ovl2.raw.bin", 0x569FC, 0x1C
  /* 56A18 0A86A8 8012CEA8 */  .4byte D_ovl2_8012CD90
  .incbin "ovl2.raw.bin", 0x56A1C, 0x8

glabel D_ovl2_8012CEB4
  .incbin "ovl2.raw.bin", 0x56A24, 0x18
  /* 56A3C 0A86CC 8012CECC */  .4byte D_ovl2_8012CE44
  .incbin "ovl2.raw.bin", 0x56A40, 0x1C
  /* 56A5C 0A86EC 8012CEEC */  .4byte D_ovl2_8012CD90
  .incbin "ovl2.raw.bin", 0x56A60, 0x8

glabel D_ovl2_8012CEF8
  .incbin "ovl2.raw.bin", 0x56A68, 0x18
  /* 56A80 0A8710 8012CF10 */  .4byte D_ovl2_8012CE44
  .incbin "ovl2.raw.bin", 0x56A84, 0x1C
  /* 56AA0 0A8730 8012CF30 */  .4byte D_ovl2_8012CD90
  .incbin "ovl2.raw.bin", 0x56AA4, 0x8

glabel D_ovl2_8012CF3C
  .incbin "ovl2.raw.bin", 0x56AAC, 0x18
  /* 56AC4 0A8754 8012CF54 */  .4byte D_ovl2_8012CE44
  .incbin "ovl2.raw.bin", 0x56AC8, 0x1C
  /* 56AE4 0A8774 8012CF74 */  .4byte D_ovl2_8012CD90
  .incbin "ovl2.raw.bin", 0x56AE8, 0x8

glabel D_ovl2_8012CF80
  .incbin "ovl2.raw.bin", 0x56AF0, 0x4
  /* 56AF4 0A8784 8012CF84 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56AF8, 0x8
  /* 56B00 0A8790 8012CF90 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x56B04, 0x8
  /* 56B0C 0A879C 8012CF9C */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x56B10, 0xC

glabel D_ovl2_8012CFAC
  .incbin "ovl2.raw.bin", 0x56B1C, 0x18
  /* 56B34 0A87C4 8012CFC4 */  .4byte D_ovl2_8012CF80
  .incbin "ovl2.raw.bin", 0x56B38, 0x1C
  /* 56B54 0A87E4 8012CFE4 */  .4byte D_ovl2_8012CD90
  .incbin "ovl2.raw.bin", 0x56B58, 0x8

glabel D_ovl2_8012CFF0
  .incbin "ovl2.raw.bin", 0x56B60, 0x18
  /* 56B78 0A8808 8012D008 */  .4byte D_ovl2_8012CF80
  .incbin "ovl2.raw.bin", 0x56B7C, 0x1C
  /* 56B98 0A8828 8012D028 */  .4byte D_ovl2_8012CD90
  .incbin "ovl2.raw.bin", 0x56B9C, 0x8

glabel D_ovl2_8012D034
  .incbin "ovl2.raw.bin", 0x56BA4, 0x18
  /* 56BBC 0A884C 8012D04C */  .4byte D_ovl2_8012CF80
  .incbin "ovl2.raw.bin", 0x56BC0, 0x1C
  /* 56BDC 0A886C 8012D06C */  .4byte D_ovl2_8012CD90
  .incbin "ovl2.raw.bin", 0x56BE0, 0x8

glabel D_ovl2_8012D078
  .incbin "ovl2.raw.bin", 0x56BE8, 0x18
  /* 56C00 0A8890 8012D090 */  .4byte D_ovl2_8012CF80
  .incbin "ovl2.raw.bin", 0x56C04, 0x1C
  /* 56C20 0A88B0 8012D0B0 */  .4byte D_ovl2_8012CD90
  .incbin "ovl2.raw.bin", 0x56C24, 0x8

glabel D_ovl2_8012D0BC
  .incbin "ovl2.raw.bin", 0x56C2C, 0x4
  /* 56C30 0A88C0 8012D0C0 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56C34, 0xC
  /* 56C40 0A88D0 8012D0D0 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x56C44, 0x8
  /* 56C4C 0A88DC 8012D0DC */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x56C50, 0xC

glabel D_ovl2_8012D0EC
  .incbin "ovl2.raw.bin", 0x56C5C, 0x18
  /* 56C74 0A8904 8012D104 */  .4byte D_ovl2_8012D0BC
  .incbin "ovl2.raw.bin", 0x56C78, 0x1C
  /* 56C94 0A8924 8012D124 */  .4byte D_ovl2_8012CD90
  .incbin "ovl2.raw.bin", 0x56C98, 0x8

glabel D_ovl2_8012D130
  .incbin "ovl2.raw.bin", 0x56CA0, 0x18
  /* 56CB8 0A8948 8012D148 */  .4byte D_ovl2_8012D0BC
  .incbin "ovl2.raw.bin", 0x56CBC, 0x1C
  /* 56CD8 0A8968 8012D168 */  .4byte D_ovl2_8012CD90
  .incbin "ovl2.raw.bin", 0x56CDC, 0x8

glabel D_ovl2_8012D174
  .incbin "ovl2.raw.bin", 0x56CE4, 0x18
  /* 56CFC 0A898C 8012D18C */  .4byte D_ovl2_8012D0BC
  .incbin "ovl2.raw.bin", 0x56D00, 0x1C
  /* 56D1C 0A89AC 8012D1AC */  .4byte D_ovl2_8012CD90
  .incbin "ovl2.raw.bin", 0x56D20, 0x8

glabel D_ovl2_8012D1B8
  .incbin "ovl2.raw.bin", 0x56D28, 0x18
  /* 56D40 0A89D0 8012D1D0 */  .4byte D_ovl2_8012D0BC
  .incbin "ovl2.raw.bin", 0x56D44, 0x1C
  /* 56D60 0A89F0 8012D1F0 */  .4byte D_ovl2_8012CD90
  .incbin "ovl2.raw.bin", 0x56D64, 0x8

glabel D_ovl2_8012D1FC
  /* 56D6C 0A89FC 8012D1FC */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56D70, 0x8
  /* 56D78 0A8A08 8012D208 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56D7C, 0xC

glabel D_ovl2_8012D218
  .incbin "ovl2.raw.bin", 0x56D88, 0x4

glabel D_ovl2_8012D21C
  .incbin "ovl2.raw.bin", 0x56D8C, 0x4

glabel D_ovl2_8012D220
  .incbin "ovl2.raw.bin", 0x56D90, 0x4

glabel D_ovl2_8012D224
  /* 56D94 0A8A24 8012D224 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56D98, 0x14
  /* 56DAC 0A8A3C 8012D23C */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x56DB0, 0x8
  /* 56DB8 0A8A48 8012D248 */  .4byte D_ovl2_8012D224

glabel D_ovl2_8012D24C
  /* 56DBC 0A8A4C 8012D24C */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56DC0, 0x24
  /* 56DE4 0A8A74 8012D274 */  .4byte D_ovl2_8012D24C

glabel D_ovl2_8012D278
  /* 56DE8 0A8A78 8012D278 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56DEC, 0x1C
  /* 56E08 0A8A98 8012D298 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x56E0C, 0x8
  /* 56E14 0A8AA4 8012D2A4 */  .4byte D_ovl2_8012D278

glabel D_ovl2_8012D2A8
  .incbin "ovl2.raw.bin", 0x56E18, 0x4
  /* 56E1C 0A8AAC 8012D2AC */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56E20, 0x8
  /* 56E28 0A8AB8 8012D2B8 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56E2C, 0x8
  /* 56E34 0A8AC4 8012D2C4 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x56E38, 0x4
  /* 56E3C 0A8ACC 8012D2CC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56E40, 0x4

glabel D_ovl2_8012D2D4
  /* 56E44 0A8AD4 8012D2D4 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56E48, 0x18
  /* 56E60 0A8AF0 8012D2F0 */
  .asciz "PPP"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56E64, 0x14
  /* 56E78 0A8B08 8012D308 */  .4byte D_ovl2_8012D2D4
  .incbin "ovl2.raw.bin", 0x56E7C, 0x4

glabel D_ovl2_8012D310
  /* 56E80 0A8B10 8012D310 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56E84, 0x8
  /* 56E8C 0A8B1C 8012D31C */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56E90, 0x8
  /* 56E98 0A8B28 8012D328 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56E9C, 0xC

glabel D_ovl2_8012D338
  /* 56EA8 0A8B38 8012D338 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56EAC, 0x14
  /* 56EC0 0A8B50 8012D350 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x56EC4, 0x8

glabel D_ovl2_8012D35C
  .incbin "ovl2.raw.bin", 0x56ECC, 0x4

glabel D_ovl2_8012D360
  /* 56ED0 0A8B60 8012D360 */
  .asciz "<\t`"
  .balign 4
  /* 56ED4 0A8B64 8012D364 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56ED8, 0x8
  /* 56EE0 0A8B70 8012D370 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x56EE4, 0x4
  /* 56EE8 0A8B78 8012D378 */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56EEC, 0x4

glabel D_ovl2_8012D380
  /* 56EF0 0A8B80 8012D380 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56EF4, 0x8
  /* 56EFC 0A8B8C 8012D38C */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56F00, 0x8
  /* 56F08 0A8B98 8012D398 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56F0C, 0x8
  /* 56F14 0A8BA4 8012D3A4 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x56F18, 0x8
  /* 56F20 0A8BB0 8012D3B0 */  .4byte D_ovl2_8012D380
  .incbin "ovl2.raw.bin", 0x56F24, 0x4

glabel D_ovl2_8012D3B8
  .incbin "ovl2.raw.bin", 0x56F28, 0x4
  /* 56F2C 0A8BBC 8012D3BC */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56F30, 0x8
  /* 56F38 0A8BC8 8012D3C8 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x56F3C, 0x8
  /* 56F44 0A8BD4 8012D3D4 */  .4byte D_ovl2_8012D3B8

glabel D_ovl2_8012D3D8
  .incbin "ovl2.raw.bin", 0x56F48, 0x8
  /* 56F50 0A8BE0 8012D3E0 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56F54, 0x8
  /* 56F5C 0A8BEC 8012D3EC */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56F60, 0x8
  /* 56F68 0A8BF8 8012D3F8 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x56F6C, 0xC
  /* 56F78 0A8C08 8012D408 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56F7C, 0x8
  /* 56F84 0A8C14 8012D414 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56F88, 0x8
  /* 56F90 0A8C20 8012D420 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x56F94, 0x8

glabel D_ovl2_8012D42C
  /* 56F9C 0A8C2C 8012D42C */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56FA0, 0x8
  /* 56FA8 0A8C38 8012D438 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56FAC, 0x8
  /* 56FB4 0A8C44 8012D444 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x56FB8, 0x8
  /* 56FC0 0A8C50 8012D450 */  .4byte D_ovl2_8012D42C

glabel D_ovl2_8012D454
  /* 56FC4 0A8C54 8012D454 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56FC8, 0x20
  /* 56FE8 0A8C78 8012D478 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x56FEC, 0x4

glabel D_ovl2_8012D480
  .incbin "ovl2.raw.bin", 0x56FF0, 0x4
  /* 56FF4 0A8C84 8012D484 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x56FF8, 0x8
  /* 57000 0A8C90 8012D490 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57004, 0x1C
  /* 57020 0A8CB0 8012D4B0 */  .4byte D_ovl2_8012D480

glabel D_ovl2_8012D4B4
  .incbin "ovl2.raw.bin", 0x57024, 0x8
  /* 5702C 0A8CBC 8012D4BC */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57030, 0x8
  /* 57038 0A8CC8 8012D4C8 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x5703C, 0xC
  /* 57048 0A8CD8 8012D4D8 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x5704C, 0x20
  /* 5706C 0A8CFC 8012D4FC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57070, 0x4

glabel D_ovl2_8012D504
  /* 57074 0A8D04 8012D504 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57078, 0x20
  /* 57098 0A8D28 8012D528 */  .4byte D_ovl2_8012D504

glabel D_ovl2_8012D52C
  /* 5709C 0A8D2C 8012D52C */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x570A0, 0x20
  /* 570C0 0A8D50 8012D550 */  .4byte D_ovl2_8012D52C

glabel D_ovl2_8012D554
  /* 570C4 0A8D54 8012D554 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x570C8, 0x20
  /* 570E8 0A8D78 8012D578 */  .4byte D_ovl2_8012D554

glabel D_ovl2_8012D57C
  .incbin "ovl2.raw.bin", 0x570EC, 0x4
  /* 570F0 0A8D80 8012D580 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x570F4, 0x8
  /* 570FC 0A8D8C 8012D58C */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57100, 0x8
  /* 57108 0A8D98 8012D598 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x5710C, 0x8
  /* 57114 0A8DA4 8012D5A4 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57118, 0x8
  /* 57120 0A8DB0 8012D5B0 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57124, 0x8
  /* 5712C 0A8DBC 8012D5BC */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57130, 0x8
  /* 57138 0A8DC8 8012D5C8 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x5713C, 0x8
  /* 57144 0A8DD4 8012D5D4 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57148, 0x8
  /* 57150 0A8DE0 8012D5E0 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57154, 0x8
  /* 5715C 0A8DEC 8012D5EC */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57160, 0x8

glabel D_ovl2_8012D5F8
  .incbin "ovl2.raw.bin", 0x57168, 0x4
  /* 5716C 0A8DFC 8012D5FC */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57170, 0x8
  /* 57178 0A8E08 8012D608 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x5717C, 0x8
  /* 57184 0A8E14 8012D614 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57188, 0x8
  /* 57190 0A8E20 8012D620 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57194, 0x8
  /* 5719C 0A8E2C 8012D62C */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x571A0, 0x8
  /* 571A8 0A8E38 8012D638 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x571AC, 0x8
  /* 571B4 0A8E44 8012D644 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x571B8, 0x8
  /* 571C0 0A8E50 8012D650 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x571C4, 0x8
  /* 571CC 0A8E5C 8012D65C */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x571D0, 0x8
  /* 571D8 0A8E68 8012D668 */
  .asciz "$"
  .balign 4
  /* 571DC 0A8E6C 8012D66C */
  .asciz "P<(\n"
  .balign 4

glabel D_ovl2_8012D674
  .incbin "ovl2.raw.bin", 0x571E4, 0x4
  /* 571E8 0A8E78 8012D678 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x571EC, 0x2C
  /* 57218 0A8EA8 8012D6A8 */  .4byte D_ovl2_8012D674

glabel D_ovl2_8012D6AC
  .incbin "ovl2.raw.bin", 0x5721C, 0x4

glabel D_ovl2_8012D6B0
  /* 57220 0A8EB0 8012D6B0 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57224, 0x8
  /* 5722C 0A8EBC 8012D6BC */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57230, 0xC
  /* 5723C 0A8ECC 8012D6CC */  .4byte D_ovl2_8012D6B0

glabel D_ovl2_8012D6D0
  .incbin "ovl2.raw.bin", 0x57240, 0x18
  /* 57258 0A8EE8 8012D6E8 */  .4byte D_ovl2_8012D6D0

glabel D_ovl2_8012D6EC
  .incbin "ovl2.raw.bin", 0x5725C, 0x8
  /* 57264 0A8EF4 8012D6F4 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57268, 0x8
  /* 57270 0A8F00 8012D700 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57274, 0x8
  /* 5727C 0A8F0C 8012D70C */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x57280, 0x20
  /* 572A0 0A8F30 8012D730 */  .4byte D_ovl2_8012D6EC

glabel D_ovl2_8012D734
  .incbin "ovl2.raw.bin", 0x572A4, 0x8
  /* 572AC 0A8F3C 8012D73C */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x572B0, 0x8
  /* 572B8 0A8F48 8012D748 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x572BC, 0x8
  /* 572C4 0A8F54 8012D754 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x572C8, 0x30
  /* 572F8 0A8F88 8012D788 */  .4byte D_ovl2_8012D734

glabel D_ovl2_8012D78C
  /* 572FC 0A8F8C 8012D78C */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57300, 0x8
  /* 57308 0A8F98 8012D798 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x5730C, 0x8
  /* 57314 0A8FA4 8012D7A4 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x57318, 0x8
  /* 57320 0A8FB0 8012D7B0 */  .4byte D_ovl2_8012D78C

glabel D_ovl2_8012D7B4
  .incbin "ovl2.raw.bin", 0x57324, 0x4
  /* 57328 0A8FB8 8012D7B8 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x5732C, 0x8
  /* 57334 0A8FC4 8012D7C4 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57338, 0x8
  /* 57340 0A8FD0 8012D7D0 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x57344, 0xC

glabel D_ovl2_8012D7E0
  /* 57350 0A8FE0 8012D7E0 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57354, 0x8
  /* 5735C 0A8FEC 8012D7EC */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57360, 0xC
  /* 5736C 0A8FFC 8012D7FC */  .4byte D_ovl2_8012D7E0

glabel D_ovl2_8012D800
  .incbin "ovl2.raw.bin", 0x57370, 0x4
  /* 57374 0A9004 8012D804 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57378, 0x8
  /* 57380 0A9010 8012D810 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57384, 0x8
  /* 5738C 0A901C 8012D81C */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57390, 0x8
  /* 57398 0A9028 8012D828 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x5739C, 0x8

glabel D_ovl2_8012D834
  .incbin "ovl2.raw.bin", 0x573A4, 0x4
  /* 573A8 0A9038 8012D838 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x573AC, 0x8
  /* 573B4 0A9044 8012D844 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x573B8, 0x20
  /* 573D8 0A9068 8012D868 */  .4byte D_ovl2_8012D834

glabel D_ovl2_8012D86C
  /* 573DC 0A906C 8012D86C */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x573E0, 0x28
  /* 57408 0A9098 8012D898 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x5740C, 0x2C
  /* 57438 0A90C8 8012D8C8 */  .4byte D_ovl2_8012D86C

glabel D_ovl2_8012D8CC
  /* 5743C 0A90CC 8012D8CC */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57440, 0x14
  /* 57454 0A90E4 8012D8E4 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x57458, 0x4

glabel D_ovl2_8012D8EC
  /* 5745C 0A90EC 8012D8EC */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57460, 0xC
  /* 5746C 0A90FC 8012D8FC */  .4byte D_ovl2_8012D8EC
  .incbin "ovl2.raw.bin", 0x57470, 0x4

glabel D_ovl2_8012D904
  .incbin "ovl2.raw.bin", 0x57474, 0x18
  /* 5748C 0A911C 8012D91C */  .4byte D_ovl2_8012D904

glabel D_ovl2_8012D920
  .incbin "ovl2.raw.bin", 0x57490, 0x18
  /* 574A8 0A9138 8012D938 */  .4byte D_ovl2_8012D920
  .incbin "ovl2.raw.bin", 0x574AC, 0x4

glabel D_ovl2_8012D940
  .incbin "ovl2.raw.bin", 0x574B0, 0x4
  /* 574B4 0A9144 8012D944 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x574B8, 0x10
  /* 574C8 0A9158 8012D958 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x574CC, 0xC

glabel D_ovl2_8012D968
  .incbin "ovl2.raw.bin", 0x574D8, 0x4
  /* 574DC 0A916C 8012D96C */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x574E0, 0x4
  /* 574E4 0A9174 8012D974 */
  .asciz ","
  .balign 4
  .incbin "ovl2.raw.bin", 0x574E8, 0x8
  /* 574F0 0A9180 8012D980 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x574F4, 0x10
  /* 57504 0A9194 8012D994 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x57508, 0x8

glabel D_ovl2_8012D9A0
  /* 57510 0A91A0 8012D9A0 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57514, 0xC
  /* 57520 0A91B0 8012D9B0 */  .4byte D_ovl2_8012D9A0
  .incbin "ovl2.raw.bin", 0x57524, 0x4

glabel D_ovl2_8012D9B8
  /* 57528 0A91B8 8012D9B8 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x5752C, 0x8
  /* 57534 0A91C4 8012D9C4 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57538, 0x8
  /* 57540 0A91D0 8012D9D0 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x57544, 0x8
  /* 5754C 0A91DC 8012D9DC */  .4byte D_ovl2_8012D9B8

glabel D_ovl2_8012D9E0
  /* 57550 0A91E0 8012D9E0 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57554, 0x7C
  /* 575D0 0A9260 8012DA60 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x575D4, 0x8
  /* 575DC 0A926C 8012DA6C */  .4byte D_ovl2_8012D9E0

glabel D_ovl2_8012DA70
  .incbin "ovl2.raw.bin", 0x575E0, 0x18
  /* 575F8 0A9288 8012DA88 */  .4byte D_ovl2_8012DA70

glabel D_ovl2_8012DA8C
  .incbin "ovl2.raw.bin", 0x575FC, 0x14
  /* 57610 0A92A0 8012DAA0 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57614, 0x8
  /* 5761C 0A92AC 8012DAAC */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57620, 0x8
  /* 57628 0A92B8 8012DAB8 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x5762C, 0x8
  /* 57634 0A92C4 8012DAC4 */  .4byte D_ovl2_8012DA8C

glabel D_ovl2_8012DAC8
  /* 57638 0A92C8 8012DAC8 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x5763C, 0x10
  /* 5764C 0A92DC 8012DADC */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57650, 0x14
  /* 57664 0A92F4 8012DAF4 */  .4byte D_ovl2_8012DAC8

glabel D_ovl2_8012DAF8
  /* 57668 0A92F8 8012DAF8 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x5766C, 0x8
  /* 57674 0A9304 8012DB04 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57678, 0xC
  /* 57684 0A9314 8012DB14 */  .4byte D_ovl2_8012DAF8

glabel D_ovl2_8012DB18
  /* 57688 0A9318 8012DB18 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x5768C, 0x10
  /* 5769C 0A932C 8012DB2C */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x576A0, 0x14
  /* 576B4 0A9344 8012DB44 */  .4byte D_ovl2_8012DB18

glabel D_ovl2_8012DB48
  /* 576B8 0A9348 8012DB48 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x576BC, 0x1C
  /* 576D8 0A9368 8012DB68 */
  .asciz " "
  .balign 4
  .incbin "ovl2.raw.bin", 0x576DC, 0x4

glabel D_ovl2_8012DB70
  /* 576E0 0A9370 8012DB70 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x576E4, 0x14

glabel D_ovl2_8012DB88
  /* 576F8 0A9388 8012DB88 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x576FC, 0x14

glabel D_ovl2_8012DBA0
  /* 57710 0A93A0 8012DBA0 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57714, 0x14

glabel D_ovl2_8012DBB8
  /* 57728 0A93B8 8012DBB8 */
  .asciz "$"
  .balign 4
  .incbin "ovl2.raw.bin", 0x5772C, 0x14

glabel caColorAnimDesc
  .incbin "ovl2.raw.bin", 0x57740, 0x5

glabel D_ovl2_8012DBD5
  .incbin "ovl2.raw.bin", 0x57745, 0x3
  /* 57748 0A93D8 8012DBD8 */  .4byte D_ovl2_8012CA90
  .incbin "ovl2.raw.bin", 0x5774C, 0x4
  /* 57750 0A93E0 8012DBE0 */  .4byte D_ovl2_8012CAA4
  .incbin "ovl2.raw.bin", 0x57754, 0x4
  /* 57758 0A93E8 8012DBE8 */  .4byte D_ovl2_8012CAAC
  .incbin "ovl2.raw.bin", 0x5775C, 0x4
  /* 57760 0A93F0 8012DBF0 */  .4byte D_ovl2_8012CAD0
  .incbin "ovl2.raw.bin", 0x57764, 0x4
  /* 57768 0A93F8 8012DBF8 */  .4byte D_ovl2_8012CAF4
  /* 5776C 0A93FC 8012DBFC */
  .asciz "d"
  .balign 4
  /* 57770 0A9400 8012DC00 */  .4byte D_ovl2_8012CB20
  /* 57774 0A9404 8012DC04 */
  .asciz "\n"
  .balign 4
  /* 57778 0A9408 8012DC08 */  .4byte D_ovl2_8012CB60
  .incbin "ovl2.raw.bin", 0x5777C, 0x4
  /* 57780 0A9410 8012DC10 */  .4byte D_ovl2_8012CB7C
  .incbin "ovl2.raw.bin", 0x57784, 0x4
  /* 57788 0A9418 8012DC18 */  .4byte D_ovl2_8012CB9C
  .incbin "ovl2.raw.bin", 0x5778C, 0x4
  /* 57790 0A9420 8012DC20 */  .4byte D_ovl2_8012CBDC
  .incbin "ovl2.raw.bin", 0x57794, 0x4
  /* 57798 0A9428 8012DC28 */  .4byte D_ovl2_8012CC10
  .incbin "ovl2.raw.bin", 0x5779C, 0x4
  /* 577A0 0A9430 8012DC30 */  .4byte D_ovl2_8012CC80
  /* 577A4 0A9434 8012DC34 */
  .asciz "d"
  .balign 4
  /* 577A8 0A9438 8012DC38 */  .4byte D_ovl2_8012CCC4
  /* 577AC 0A943C 8012DC3C */
  .asciz "d"
  .balign 4
  /* 577B0 0A9440 8012DC40 */  .4byte D_ovl2_8012CD08
  /* 577B4 0A9444 8012DC44 */
  .asciz "d"
  .balign 4
  /* 577B8 0A9448 8012DC48 */  .4byte D_ovl2_8012CD4C
  /* 577BC 0A944C 8012DC4C */
  .asciz "d"
  .balign 4
  /* 577C0 0A9450 8012DC50 */  .4byte D_ovl2_8012CDB4
  /* 577C4 0A9454 8012DC54 */
  .asciz "d"
  .balign 4
  /* 577C8 0A9458 8012DC58 */  .4byte D_ovl2_8012CDD8
  /* 577CC 0A945C 8012DC5C */
  .asciz "d"
  .balign 4
  /* 577D0 0A9460 8012DC60 */  .4byte D_ovl2_8012CDFC
  /* 577D4 0A9464 8012DC64 */
  .asciz "d"
  .balign 4
  /* 577D8 0A9468 8012DC68 */  .4byte D_ovl2_8012CE20
  /* 577DC 0A946C 8012DC6C */
  .asciz "d"
  .balign 4
  /* 577E0 0A9470 8012DC70 */  .4byte D_ovl2_8012CE70
  /* 577E4 0A9474 8012DC74 */
  .asciz "d"
  .balign 4
  /* 577E8 0A9478 8012DC78 */  .4byte D_ovl2_8012CEB4
  /* 577EC 0A947C 8012DC7C */
  .asciz "d"
  .balign 4
  /* 577F0 0A9480 8012DC80 */  .4byte D_ovl2_8012CEF8
  /* 577F4 0A9484 8012DC84 */
  .asciz "d"
  .balign 4
  /* 577F8 0A9488 8012DC88 */  .4byte D_ovl2_8012CF3C
  /* 577FC 0A948C 8012DC8C */
  .asciz "d"
  .balign 4
  /* 57800 0A9490 8012DC90 */  .4byte D_ovl2_8012D0EC
  /* 57804 0A9494 8012DC94 */
  .asciz "d"
  .balign 4
  /* 57808 0A9498 8012DC98 */  .4byte D_ovl2_8012D130
  /* 5780C 0A949C 8012DC9C */
  .asciz "d"
  .balign 4
  /* 57810 0A94A0 8012DCA0 */  .4byte D_ovl2_8012D174
  /* 57814 0A94A4 8012DCA4 */
  .asciz "d"
  .balign 4
  /* 57818 0A94A8 8012DCA8 */  .4byte D_ovl2_8012D1B8
  /* 5781C 0A94AC 8012DCAC */
  .asciz "d"
  .balign 4
  /* 57820 0A94B0 8012DCB0 */  .4byte D_ovl2_8012CFAC
  /* 57824 0A94B4 8012DCB4 */
  .asciz "d"
  .balign 4
  /* 57828 0A94B8 8012DCB8 */  .4byte D_ovl2_8012CFF0
  /* 5782C 0A94BC 8012DCBC */
  .asciz "d"
  .balign 4
  /* 57830 0A94C0 8012DCC0 */  .4byte D_ovl2_8012D034
  /* 57834 0A94C4 8012DCC4 */
  .asciz "d"
  .balign 4
  /* 57838 0A94C8 8012DCC8 */  .4byte D_ovl2_8012D078
  /* 5783C 0A94CC 8012DCCC */
  .asciz "d"
  .balign 4
  /* 57840 0A94D0 8012DCD0 */  .4byte D_ovl2_8012D1FC
  /* 57844 0A94D4 8012DCD4 */
  .asciz "d"
  .balign 4
  /* 57848 0A94D8 8012DCD8 */  .4byte D_ovl2_8012D218
  /* 5784C 0A94DC 8012DCDC */
  .asciz "d"
  .balign 4
  /* 57850 0A94E0 8012DCE0 */  .4byte D_ovl2_8012D21C
  /* 57854 0A94E4 8012DCE4 */
  .asciz "d"
  .balign 4
  /* 57858 0A94E8 8012DCE8 */  .4byte D_ovl2_8012D220
  /* 5785C 0A94EC 8012DCEC */
  .asciz "d"
  .balign 4
  /* 57860 0A94F0 8012DCF0 */  .4byte D_ovl2_8012D224
  .incbin "ovl2.raw.bin", 0x57864, 0x4
  /* 57868 0A94F8 8012DCF8 */  .4byte D_ovl2_8012D24C
  .incbin "ovl2.raw.bin", 0x5786C, 0x4
  /* 57870 0A9500 8012DD00 */  .4byte D_ovl2_8012D278
  .incbin "ovl2.raw.bin", 0x57874, 0x4
  /* 57878 0A9508 8012DD08 */  .4byte D_ovl2_8012D2A8
  .incbin "ovl2.raw.bin", 0x5787C, 0x4
  /* 57880 0A9510 8012DD10 */  .4byte D_ovl2_8012D2D4
  .incbin "ovl2.raw.bin", 0x57884, 0x4
  /* 57888 0A9518 8012DD18 */  .4byte D_ovl2_8012D3B8
  .incbin "ovl2.raw.bin", 0x5788C, 0x4
  /* 57890 0A9520 8012DD20 */  .4byte D_ovl2_8012D3D8
  .incbin "ovl2.raw.bin", 0x57894, 0x4
  /* 57898 0A9528 8012DD28 */  .4byte D_ovl2_8012D454
  .incbin "ovl2.raw.bin", 0x5789C, 0x4
  /* 578A0 0A9530 8012DD30 */  .4byte D_ovl2_8012D480
  .incbin "ovl2.raw.bin", 0x578A4, 0x4
  /* 578A8 0A9538 8012DD38 */  .4byte D_ovl2_8012D380
  .incbin "ovl2.raw.bin", 0x578AC, 0x4
  /* 578B0 0A9540 8012DD40 */  .4byte D_ovl2_8012D35C
  .incbin "ovl2.raw.bin", 0x578B4, 0x4
  /* 578B8 0A9548 8012DD48 */  .4byte D_ovl2_8012D360
  .incbin "ovl2.raw.bin", 0x578BC, 0x4
  /* 578C0 0A9550 8012DD50 */  .4byte D_ovl2_8012D310
  .incbin "ovl2.raw.bin", 0x578C4, 0x4
  /* 578C8 0A9558 8012DD58 */  .4byte D_ovl2_8012D338
  .incbin "ovl2.raw.bin", 0x578CC, 0x4
  /* 578D0 0A9560 8012DD60 */  .4byte D_ovl2_8012D4B4
  .incbin "ovl2.raw.bin", 0x578D4, 0x4
  /* 578D8 0A9568 8012DD68 */  .4byte D_ovl2_8012D504
  .incbin "ovl2.raw.bin", 0x578DC, 0x4
  /* 578E0 0A9570 8012DD70 */  .4byte D_ovl2_8012D52C
  .incbin "ovl2.raw.bin", 0x578E4, 0x4
  /* 578E8 0A9578 8012DD78 */  .4byte D_ovl2_8012D554
  .incbin "ovl2.raw.bin", 0x578EC, 0x4
  /* 578F0 0A9580 8012DD80 */  .4byte D_ovl2_8012D57C
  .incbin "ovl2.raw.bin", 0x578F4, 0x4
  /* 578F8 0A9588 8012DD88 */  .4byte D_ovl2_8012D5F8
  .incbin "ovl2.raw.bin", 0x578FC, 0x4
  /* 57900 0A9590 8012DD90 */  .4byte D_ovl2_8012D674
  .incbin "ovl2.raw.bin", 0x57904, 0x4
  /* 57908 0A9598 8012DD98 */  .4byte D_ovl2_8012D6AC
  .incbin "ovl2.raw.bin", 0x5790C, 0x4
  /* 57910 0A95A0 8012DDA0 */  .4byte D_ovl2_8012D6D0
  .incbin "ovl2.raw.bin", 0x57914, 0x4
  /* 57918 0A95A8 8012DDA8 */  .4byte D_ovl2_8012D6EC
  .incbin "ovl2.raw.bin", 0x5791C, 0x4
  /* 57920 0A95B0 8012DDB0 */  .4byte D_ovl2_8012D734
  .incbin "ovl2.raw.bin", 0x57924, 0x4
  /* 57928 0A95B8 8012DDB8 */  .4byte D_ovl2_8012D78C
  .incbin "ovl2.raw.bin", 0x5792C, 0x4
  /* 57930 0A95C0 8012DDC0 */  .4byte D_ovl2_8012D7B4
  .incbin "ovl2.raw.bin", 0x57934, 0x4
  /* 57938 0A95C8 8012DDC8 */  .4byte D_ovl2_8012D7E0
  .incbin "ovl2.raw.bin", 0x5793C, 0x4
  /* 57940 0A95D0 8012DDD0 */  .4byte D_ovl2_8012D800
  .incbin "ovl2.raw.bin", 0x57944, 0x4
  /* 57948 0A95D8 8012DDD8 */  .4byte D_ovl2_8012D834
  .incbin "ovl2.raw.bin", 0x5794C, 0x4
  /* 57950 0A95E0 8012DDE0 */  .4byte D_ovl2_8012D86C
  .incbin "ovl2.raw.bin", 0x57954, 0x4
  /* 57958 0A95E8 8012DDE8 */  .4byte D_ovl2_8012D8CC
  .incbin "ovl2.raw.bin", 0x5795C, 0x4
  /* 57960 0A95F0 8012DDF0 */  .4byte D_ovl2_8012D8EC
  .incbin "ovl2.raw.bin", 0x57964, 0x4
  /* 57968 0A95F8 8012DDF8 */  .4byte D_ovl2_8012D904
  .incbin "ovl2.raw.bin", 0x5796C, 0x4
  /* 57970 0A9600 8012DE00 */  .4byte D_ovl2_8012D920
  .incbin "ovl2.raw.bin", 0x57974, 0x4
  /* 57978 0A9608 8012DE08 */  .4byte D_ovl2_8012D940
  .incbin "ovl2.raw.bin", 0x5797C, 0x4
  /* 57980 0A9610 8012DE10 */  .4byte D_ovl2_8012D968
  .incbin "ovl2.raw.bin", 0x57984, 0x4
  /* 57988 0A9618 8012DE18 */  .4byte D_ovl2_8012D9B8
  .incbin "ovl2.raw.bin", 0x5798C, 0x4
  /* 57990 0A9620 8012DE20 */  .4byte D_ovl2_8012D9E0
  /* 57994 0A9624 8012DE24 */
  .asciz "d"
  .balign 4
  /* 57998 0A9628 8012DE28 */  .4byte D_ovl2_8012DA70
  .incbin "ovl2.raw.bin", 0x5799C, 0x4
  /* 579A0 0A9630 8012DE30 */  .4byte D_ovl2_8012DA8C
  .incbin "ovl2.raw.bin", 0x579A4, 0x4
  /* 579A8 0A9638 8012DE38 */  .4byte D_ovl2_8012DAC8
  .incbin "ovl2.raw.bin", 0x579AC, 0x4
  /* 579B0 0A9640 8012DE40 */  .4byte D_ovl2_8012DAF8
  .incbin "ovl2.raw.bin", 0x579B4, 0x4
  /* 579B8 0A9648 8012DE48 */  .4byte D_ovl2_8012DB18
  .incbin "ovl2.raw.bin", 0x579BC, 0x4
  /* 579C0 0A9650 8012DE50 */  .4byte D_ovl2_8012D9A0
  .incbin "ovl2.raw.bin", 0x579C4, 0x4
  /* 579C8 0A9658 8012DE58 */  .4byte D_ovl2_8012DB48
  .incbin "ovl2.raw.bin", 0x579CC, 0x4
  /* 579D0 0A9660 8012DE60 */  .4byte D_ovl2_8012DB70
  .incbin "ovl2.raw.bin", 0x579D4, 0x4
  /* 579D8 0A9668 8012DE68 */  .4byte D_ovl2_8012DB88
  .incbin "ovl2.raw.bin", 0x579DC, 0x4
  /* 579E0 0A9670 8012DE70 */  .4byte D_ovl2_8012DBA0
  .incbin "ovl2.raw.bin", 0x579E4, 0x4
  /* 579E8 0A9678 8012DE78 */  .4byte D_ovl2_8012DBB8
  .incbin "ovl2.raw.bin", 0x579EC, 0xC

glabel efParticle_DamageSpawnSparks_Angles
  /* 579F8 0A9688 8012DE88 */
  .4byte 0xc1900000 # .float -18.0
  .incbin "ovl2.raw.bin", 0x579FC, 0x8

glabel efParticle_DamageSpawnMDust_Angles
  /* 57A04 0A9694 8012DE94 */
  .4byte 0xc1900000 # .float -18.0

glabel efParticle_DamageNormalHeavy_Color1R
  .incbin "ovl2.raw.bin", 0x57A08, 0x8

glabel efParticle_DamageNormalHeavy_Color1G
  .incbin "ovl2.raw.bin", 0x57A10, 0x8

glabel efParticle_DamageNormalHeavy_Color1B
  .incbin "ovl2.raw.bin", 0x57A18, 0x8

glabel efParticle_DamageNormalHeavy_Color2R
  .incbin "ovl2.raw.bin", 0x57A20, 0x8

glabel efParticle_DamageNormalHeavy_Color2G
  .incbin "ovl2.raw.bin", 0x57A28, 0x8

glabel efParticle_DamageNormalHeavy_Color2B
  .incbin "ovl2.raw.bin", 0x57A30, 0x8

glabel efParticle_ImpactSW_PrimColorR
  .incbin "ovl2.raw.bin", 0x57A38, 0x8

glabel efParticle_ImpactSW_PrimColorG
  .incbin "ovl2.raw.bin", 0x57A40, 0x8

glabel efParticle_ImpactSW_PrimColorB
  .incbin "ovl2.raw.bin", 0x57A48, 0x8

glabel efParticle_ImpactSW_EnvColorR
  .incbin "ovl2.raw.bin", 0x57A50, 0x8

glabel efParticle_ImpactSW_EnvColorG
  .incbin "ovl2.raw.bin", 0x57A58, 0x8

glabel efParticle_ImpactSW_EnvColorB
  .incbin "ovl2.raw.bin", 0x57A60, 0x8

glabel D_ovl2_8012DEF8
  .incbin "ovl2.raw.bin", 0x57A68, 0x4

glabel D_ovl2_8012DEFC
  .incbin "ovl2.raw.bin", 0x57A6C, 0x4

glabel D_ovl2_8012DF00
  .incbin "ovl2.raw.bin", 0x57A70, 0x4

glabel D_ovl2_8012DF04
  .incbin "ovl2.raw.bin", 0x57A74, 0x4

glabel D_ovl2_8012DF08
  .incbin "ovl2.raw.bin", 0x57A78, 0x4

glabel D_ovl2_8012DF0C
  .incbin "ovl2.raw.bin", 0x57A7C, 0x4

glabel D_ovl2_8012DF10
  /* 57A80 0A9710 8012DF10 */
  .4byte 0x000000 # .float 0.0
  .incbin "ovl2.raw.bin", 0x57A84, 0x4
  /* 57A88 0A9718 8012DF18 */
  .asciz "C4"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57A8C, 0x4

glabel D_ovl2_8012DF20
  .incbin "ovl2.raw.bin", 0x57A90, 0x4

glabel D_ovl2_8012DF24
  .incbin "ovl2.raw.bin", 0x57A94, 0x4
  /* 57A98 0A9728 8012DF28 */  .4byte D_ovl2_801313B0
  .incbin "ovl2.raw.bin", 0x57A9C, 0x8
  /* 57AA4 0A9734 8012DF34 */  .4byte func_ovl2_800FD568
  /* 57AA8 0A9738 8012DF38 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x57AAC, 0x10

glabel D_ovl2_8012DF4C
  .incbin "ovl2.raw.bin", 0x57ABC, 0x4
  /* 57AC0 0A9750 8012DF50 */  .4byte D_ovl2_801313B4
  /* 57AC4 0A9754 8012DF54 */
  .asciz "(E"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57AC8, 0x4
  /* 57ACC 0A975C 8012DF5C */  .4byte func_ovl2_800FE260
  /* 57AD0 0A9760 8012DF60 */  .4byte func_ovl0_800CB4B0
  .incbin "ovl2.raw.bin", 0x57AD4, 0x10

glabel D_ovl2_8012DF74
  .incbin "ovl2.raw.bin", 0x57AE4, 0x4
  /* 57AE8 0A9778 8012DF78 */  .4byte D_ovl2_801313B0
  .incbin "ovl2.raw.bin", 0x57AEC, 0x8
  /* 57AF4 0A9784 8012DF84 */  .4byte efParticle_DamageFlyOrbs_ProcUpdate
  /* 57AF8 0A9788 8012DF88 */  .4byte func_ovl0_800CB4B0
  .incbin "ovl2.raw.bin", 0x57AFC, 0x10

glabel D_ovl2_8012DF9C
  .incbin "ovl2.raw.bin", 0x57B0C, 0x4
  /* 57B10 0A97A0 8012DFA0 */  .4byte D_ovl2_801313B0
  .incbin "ovl2.raw.bin", 0x57B14, 0x8
  /* 57B1C 0A97AC 8012DFAC */  .4byte efParticle_DamageSpawnOrbs_ProcUpdate
  .incbin "ovl2.raw.bin", 0x57B20, 0x14

glabel D_ovl2_8012DFC4
  .incbin "ovl2.raw.bin", 0x57B34, 0x4
  /* 57B38 0A97C8 8012DFC8 */  .4byte D_ovl2_801313B0
  .incbin "ovl2.raw.bin", 0x57B3C, 0x8

glabel jtbl_ovl2_8012DFD4
  /* 57B44 0A97D4 8012DFD4 */  .4byte efParticle_ImpactSW_ProcUpdate
  /* 57B48 0A97D8 8012DFD8 */  .4byte efParticle_ImpactSW_ProcRender
  .incbin "ovl2.raw.bin", 0x57B4C, 0x10

glabel D_ovl2_8012DFEC
  .incbin "ovl2.raw.bin", 0x57B5C, 0x4
  /* 57B60 0A97F0 8012DFF0 */  .4byte D_ovl2_801313B0
  .incbin "ovl2.raw.bin", 0x57B64, 0x8
  /* 57B6C 0A97FC 8012DFFC */  .4byte efParticle_StarRodSpark_ProcUpdate
  /* 57B70 0A9800 8012E000 */  .4byte func_ovl0_800CB4B0
  .incbin "ovl2.raw.bin", 0x57B74, 0x10

glabel D_ovl2_8012E014
  .incbin "ovl2.raw.bin", 0x57B84, 0x4
  /* 57B88 0A9818 8012E018 */  .4byte D_ovl2_801313B0
  .incbin "ovl2.raw.bin", 0x57B8C, 0x8
  /* 57B94 0A9824 8012E024 */  .4byte efParticle_DamageFlySparks_ProcUpdate
  /* 57B98 0A9828 8012E028 */  .4byte func_ovl0_800CB4B0
  .incbin "ovl2.raw.bin", 0x57B9C, 0x10

glabel D_ovl2_8012E03C
  .incbin "ovl2.raw.bin", 0x57BAC, 0x4
  /* 57BB0 0A9840 8012E040 */  .4byte D_ovl2_801313B0
  .incbin "ovl2.raw.bin", 0x57BB4, 0x8
  /* 57BBC 0A984C 8012E04C */  .4byte efParticle_DamageSpawnSparks_ProcUpdate
  .incbin "ovl2.raw.bin", 0x57BC0, 0x14

glabel D_ovl2_8012E064
  .incbin "ovl2.raw.bin", 0x57BD4, 0x4
  /* 57BD8 0A9868 8012E068 */  .4byte D_ovl2_801313B0
  .incbin "ovl2.raw.bin", 0x57BDC, 0x8
  /* 57BE4 0A9874 8012E074 */  .4byte efParticle_DamageFlySparks_ProcUpdate
  /* 57BE8 0A9878 8012E078 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x57BEC, 0x10

glabel D_ovl2_8012E08C
  .incbin "ovl2.raw.bin", 0x57BFC, 0x4
  /* 57C00 0A9890 8012E090 */  .4byte D_ovl2_801313B0
  .incbin "ovl2.raw.bin", 0x57C04, 0x8
  /* 57C0C 0A989C 8012E09C */  .4byte efParticle_DamageSpawnMDust_ProcUpdate
  .incbin "ovl2.raw.bin", 0x57C10, 0x14

glabel D_ovl2_8012E0B4
  .incbin "ovl2.raw.bin", 0x57C24, 0x4
  /* 57C28 0A98B8 8012E0B8 */  .4byte D_ovl2_801313B4
  .incbin "ovl2.raw.bin", 0x57C2C, 0x8
  /* 57C34 0A98C4 8012E0C4 */  .4byte func_ovl2_800FD568
  /* 57C38 0A98C8 8012E0C8 */  .4byte func_ovl0_800CB4B0
  .incbin "ovl2.raw.bin", 0x57C3C, 0x10

glabel D_ovl2_8012E0DC
  .incbin "ovl2.raw.bin", 0x57C4C, 0x10

glabel D_ovl2_8012E0EC
  .incbin "ovl2.raw.bin", 0x57C5C, 0x4
  /* 57C60 0A98F0 8012E0F0 */  .4byte D_ovl2_80130EA0
  .incbin "ovl2.raw.bin", 0x57C64, 0x4
  /* 57C68 0A98F8 8012E0F8 */
  .asciz ","
  .balign 4
  /* 57C6C 0A98FC 8012E0FC */  .4byte efParticle_Reflector_ProcUpdate
  /* 57C70 0A9900 8012E100 */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x57C74, 0x10

glabel efParticle_Shield_GfxColors
  .incbin "ovl2.raw.bin", 0x57C84, 0x20

glabel D_ovl2_8012E134
  .incbin "ovl2.raw.bin", 0x57CA4, 0x4
  /* 57CA8 0A9938 8012E138 */  .4byte D_ovl2_80130D98
  .incbin "ovl2.raw.bin", 0x57CAC, 0x8

glabel jtbl_ovl2_8012E144
  /* 57CB4 0A9944 8012E144 */  .4byte jtgt_ovl2_80101008
  /* 57CB8 0A9948 8012E148 */  .4byte efParticle_Shield_ProcUpdate
  .incbin "ovl2.raw.bin", 0x57CBC, 0x10

glabel D_ovl2_8012E15C
  .incbin "ovl2.raw.bin", 0x57CCC, 0x4
  /* 57CD0 0A9960 8012E160 */  .4byte D_ovl2_80130FF8
  /* 57CD4 0A9964 8012E164 */
  .asciz "P,"
  .balign 4
  .incbin "ovl2.raw.bin", 0x57CD8, 0x4

glabel jtbl_ovl2_8012E16C
  /* 57CDC 0A996C 8012E16C */  .4byte jtgt_ovl2_80101008
  /* 57CE0 0A9970 8012E170 */  .4byte efParticle_YoshiShield_ProcUpdate
  .incbin "ovl2.raw.bin", 0x57CE4, 0x10

glabel D_ovl2_8012E184
  .incbin "ovl2.raw.bin", 0x57CF4, 0x4
  /* 57CF8 0A9988 8012E188 */  .4byte D_ovl2_801313B4
  .incbin "ovl2.raw.bin", 0x57CFC, 0x8
  /* 57D04 0A9994 8012E194 */  .4byte func_ovl2_800FD568
  /* 57D08 0A9998 8012E198 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x57D0C, 0x10

glabel D_ovl2_8012E1AC
  .incbin "ovl2.raw.bin", 0x57D1C, 0x4
  /* 57D20 0A99B0 8012E1B0 */  .4byte D_ovl2_801313B4
  .incbin "ovl2.raw.bin", 0x57D24, 0x8
  /* 57D2C 0A99BC 8012E1BC */  .4byte func_ovl2_800FD568
  /* 57D30 0A99C0 8012E1C0 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x57D34, 0x10

glabel D_ovl2_8012E1D4
  .incbin "ovl2.raw.bin", 0x57D44, 0x4
  /* 57D48 0A99D8 8012E1D8 */  .4byte D_ovl2_801310C0
  .incbin "ovl2.raw.bin", 0x57D4C, 0x8
  /* 57D54 0A99E4 8012E1E4 */  .4byte func_ovl2_801017E8
  /* 57D58 0A99E8 8012E1E8 */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x57D5C, 0x10

glabel D_ovl2_8012E1FC
  .incbin "ovl2.raw.bin", 0x57D6C, 0x4
  /* 57D70 0A9A00 8012E200 */  .4byte D_ovl2_801310C0
  .incbin "ovl2.raw.bin", 0x57D74, 0x8
  /* 57D7C 0A9A0C 8012E20C */  .4byte func_ovl2_800FD568
  /* 57D80 0A9A10 8012E210 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x57D84, 0x10

glabel D_ovl2_8012E224
  .incbin "ovl2.raw.bin", 0x57D94, 0x4
  /* 57D98 0A9A28 8012E228 */  .4byte D_ovl2_801310B8
  .incbin "ovl2.raw.bin", 0x57D9C, 0x8

glabel jtbl_ovl2_8012E234
  /* 57DA4 0A9A34 8012E234 */  .4byte jtgt_ovl2_80101A08
  /* 57DA8 0A9A38 8012E238 */  .4byte jtgt_ovl2_80101AA8
  .incbin "ovl2.raw.bin", 0x57DAC, 0x10

glabel D_ovl2_8012E24C
  .incbin "ovl2.raw.bin", 0x57DBC, 0x4
  /* 57DC0 0A9A50 8012E250 */  .4byte D_ovl2_801310C4
  .incbin "ovl2.raw.bin", 0x57DC4, 0x8
  /* 57DCC 0A9A5C 8012E25C */  .4byte func_ovl2_800FD568
  /* 57DD0 0A9A60 8012E260 */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x57DD4, 0x10

glabel D_ovl2_8012E274
  .incbin "ovl2.raw.bin", 0x57DE4, 0x4
  /* 57DE8 0A9A78 8012E278 */  .4byte D_ovl2_8013107C
  .incbin "ovl2.raw.bin", 0x57DEC, 0x8
  /* 57DF4 0A9A84 8012E284 */  .4byte func_ovl2_80101CA0
  /* 57DF8 0A9A88 8012E288 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x57DFC, 0x10

glabel D_ovl2_8012E29C
  .incbin "ovl2.raw.bin", 0x57E0C, 0x4
  /* 57E10 0A9AA0 8012E2A0 */  .4byte D_ovl2_80130F40
  .incbin "ovl2.raw.bin", 0x57E14, 0x8
  /* 57E1C 0A9AAC 8012E2AC */  .4byte func_8000DF34
  /* 57E20 0A9AB0 8012E2B0 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x57E24, 0x10

glabel D_ovl2_8012E2C4
  .incbin "ovl2.raw.bin", 0x57E34, 0x4
  /* 57E38 0A9AC8 8012E2C8 */  .4byte D_ovl2_8013103C
  .incbin "ovl2.raw.bin", 0x57E3C, 0x8
  /* 57E44 0A9AD4 8012E2D4 */  .4byte func_ovl2_800FD5D8
  /* 57E48 0A9AD8 8012E2D8 */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x57E4C, 0x10

glabel D_ovl2_8012E2EC
  .incbin "ovl2.raw.bin", 0x57E5C, 0x4
  /* 57E60 0A9AF0 8012E2F0 */  .4byte D_ovl2_80131040
  .incbin "ovl2.raw.bin", 0x57E64, 0x8
  /* 57E6C 0A9AFC 8012E2FC */  .4byte func_ovl2_800FD5D8
  /* 57E70 0A9B00 8012E300 */  .4byte func_ovl0_800CB4B0
  .incbin "ovl2.raw.bin", 0x57E74, 0x10

glabel D_ovl2_8012E314
  .incbin "ovl2.raw.bin", 0x57E84, 0x4
  /* 57E88 0A9B18 8012E318 */  .4byte D_ovl2_801310FC
  .incbin "ovl2.raw.bin", 0x57E8C, 0x8
  /* 57E94 0A9B24 8012E324 */  .4byte func_ovl2_800FD568
  /* 57E98 0A9B28 8012E328 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x57E9C, 0x10

glabel D_ovl2_8012E33C
  .incbin "ovl2.raw.bin", 0x57EAC, 0x4
  /* 57EB0 0A9B40 8012E340 */  .4byte D_ovl2_801313B4
  .incbin "ovl2.raw.bin", 0x57EB4, 0x8
  /* 57EBC 0A9B4C 8012E34C */  .4byte func_ovl2_800FD568
  /* 57EC0 0A9B50 8012E350 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x57EC4, 0x10

glabel D_ovl2_8012E364
  .incbin "ovl2.raw.bin", 0x57ED4, 0x8

glabel D_ovl2_8012E36C
  .incbin "ovl2.raw.bin", 0x57EDC, 0x10

glabel D_ovl2_8012E37C
  .incbin "ovl2.raw.bin", 0x57EEC, 0x4
  /* 57EF0 0A9B80 8012E380 */  .4byte D_ovl2_8013107C
  .incbin "ovl2.raw.bin", 0x57EF4, 0x8
  /* 57EFC 0A9B8C 8012E38C */  .4byte func_ovl2_800FD5D8
  /* 57F00 0A9B90 8012E390 */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x57F04, 0x10

glabel D_ovl2_8012E3A4
  .incbin "ovl2.raw.bin", 0x57F14, 0x4
  /* 57F18 0A9BA8 8012E3A8 */  .4byte D_ovl2_8013107C
  .incbin "ovl2.raw.bin", 0x57F1C, 0x8
  /* 57F24 0A9BB4 8012E3B4 */  .4byte func_ovl2_800FD5D8
  /* 57F28 0A9BB8 8012E3B8 */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x57F2C, 0x10

glabel D_ovl2_8012E3CC
  .incbin "ovl2.raw.bin", 0x57F3C, 0x4
  /* 57F40 0A9BD0 8012E3D0 */  .4byte D_ovl2_8013107C
  .incbin "ovl2.raw.bin", 0x57F44, 0x8
  /* 57F4C 0A9BDC 8012E3DC */  .4byte func_ovl2_800FD5D8
  /* 57F50 0A9BE0 8012E3E0 */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x57F54, 0x10

glabel D_ovl2_8012E3F4
  .incbin "ovl2.raw.bin", 0x57F64, 0x4
  /* 57F68 0A9BF8 8012E3F8 */  .4byte D_ovl2_8013107C
  .incbin "ovl2.raw.bin", 0x57F6C, 0x8
  /* 57F74 0A9C04 8012E404 */  .4byte func_ovl2_800FD5D8
  /* 57F78 0A9C08 8012E408 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x57F7C, 0x10

glabel D_ovl2_8012E41C
  .incbin "ovl2.raw.bin", 0x57F8C, 0x4
  /* 57F90 0A9C20 8012E420 */  .4byte D_ovl2_80131140
  .incbin "ovl2.raw.bin", 0x57F94, 0x4
  /* 57F98 0A9C28 8012E428 */
  .asciz "."
  .balign 4
  /* 57F9C 0A9C2C 8012E42C */  .4byte func_8000DF34
  /* 57FA0 0A9C30 8012E430 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x57FA4, 0x10

glabel D_ovl2_8012E444
  .incbin "ovl2.raw.bin", 0x57FB4, 0x4
  /* 57FB8 0A9C48 8012E448 */  .4byte D_ovl2_80131138
  .incbin "ovl2.raw.bin", 0x57FBC, 0x8

glabel jtbl_ovl2_8012E454
  /* 57FC4 0A9C54 8012E454 */  .4byte func_ovl2_80102630
  /* 57FC8 0A9C58 8012E458 */  .4byte jtgt_ovl2_80102768
  .incbin "ovl2.raw.bin", 0x57FCC, 0x10

glabel D_ovl2_8012E46C
  .incbin "ovl2.raw.bin", 0x57FDC, 0x4
  /* 57FE0 0A9C70 8012E470 */  .4byte D_ovl2_80131138
  .incbin "ovl2.raw.bin", 0x57FE4, 0x8

glabel jtbl_ovl2_8012E47C
  /* 57FEC 0A9C7C 8012E47C */  .4byte func_ovl2_801028C0
  /* 57FF0 0A9C80 8012E480 */  .4byte jtgt_ovl2_80102768
  .incbin "ovl2.raw.bin", 0x57FF4, 0x10

glabel D_ovl2_8012E494
  .incbin "ovl2.raw.bin", 0x58004, 0x4
  /* 58008 0A9C98 8012E498 */  .4byte D_ovl2_80131138
  .incbin "ovl2.raw.bin", 0x5800C, 0x4
  /* 58010 0A9CA0 8012E4A0 */
  .asciz "."
  .balign 4
  /* 58014 0A9CA4 8012E4A4 */  .4byte func_8000DF34
  /* 58018 0A9CA8 8012E4A8 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x5801C, 0x10

glabel D_ovl2_8012E4BC
  .incbin "ovl2.raw.bin", 0x5802C, 0x4
  /* 58030 0A9CC0 8012E4C0 */  .4byte D_ovl2_801313B4
  .incbin "ovl2.raw.bin", 0x58034, 0x8
  /* 5803C 0A9CCC 8012E4CC */  .4byte func_ovl2_800FD568
  /* 58040 0A9CD0 8012E4D0 */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x58044, 0x10

glabel D_ovl2_8012E4E4
  .incbin "ovl2.raw.bin", 0x58054, 0x4
  /* 58058 0A9CE8 8012E4E8 */  .4byte D_ovl2_80130FC0
  .incbin "ovl2.raw.bin", 0x5805C, 0x8
  /* 58064 0A9CF4 8012E4F4 */  .4byte func_8000DF34
  /* 58068 0A9CF8 8012E4F8 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x5806C, 0x10

glabel D_ovl2_8012E50C
  .incbin "ovl2.raw.bin", 0x5807C, 0x4
  /* 58080 0A9D10 8012E510 */  .4byte D_ovl2_80130FC0
  .incbin "ovl2.raw.bin", 0x58084, 0x8
  /* 5808C 0A9D1C 8012E51C */  .4byte func_8000DF34
  /* 58090 0A9D20 8012E520 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x58094, 0x10

glabel D_ovl2_8012E534
  .incbin "ovl2.raw.bin", 0x580A4, 0x4
  /* 580A8 0A9D38 8012E538 */  .4byte D_ovl2_8013107C
  .incbin "ovl2.raw.bin", 0x580AC, 0x8
  /* 580B4 0A9D44 8012E544 */  .4byte func_ovl2_800FD568
  /* 580B8 0A9D48 8012E548 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x580BC, 0x10

glabel D_ovl2_8012E55C
  .incbin "ovl2.raw.bin", 0x580CC, 0x4
  /* 580D0 0A9D60 8012E560 */  .4byte D_ovl2_801313B8
  .incbin "ovl2.raw.bin", 0x580D4, 0x8
  /* 580DC 0A9D6C 8012E56C */  .4byte func_ovl2_800FD568
  /* 580E0 0A9D70 8012E570 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x580E4, 0x10

glabel D_ovl2_8012E584
  .incbin "ovl2.raw.bin", 0x580F4, 0x4
  /* 580F8 0A9D88 8012E588 */  .4byte gpItemFileData
  .incbin "ovl2.raw.bin", 0x580FC, 0x8
  /* 58104 0A9D94 8012E594 */  .4byte func_ovl2_80102C84
  /* 58108 0A9D98 8012E598 */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x5810C, 0x10

glabel D_ovl2_8012E5AC
  .incbin "ovl2.raw.bin", 0x5811C, 0x4
  /* 58120 0A9DB0 8012E5B0 */  .4byte D_ovl2_80130FFC
  .incbin "ovl2.raw.bin", 0x58124, 0x8
  /* 5812C 0A9DBC 8012E5BC */  .4byte func_ovl2_800FD568
  /* 58130 0A9DC0 8012E5C0 */  .4byte func_ovl0_800CB4B0
  .incbin "ovl2.raw.bin", 0x58134, 0x10

glabel D_ovl2_8012E5D4
  .incbin "ovl2.raw.bin", 0x58144, 0x8

glabel D_ovl2_8012E5DC
  .incbin "ovl2.raw.bin", 0x5814C, 0x4
  /* 58150 0A9DE0 8012E5E0 */  .4byte D_ovl2_80131000
  .incbin "ovl2.raw.bin", 0x58154, 0x8
  /* 5815C 0A9DEC 8012E5EC */  .4byte func_ovl2_80102FE4
  /* 58160 0A9DF0 8012E5F0 */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x58164, 0x10

glabel D_ovl2_8012E604
  .incbin "ovl2.raw.bin", 0x58174, 0x4
  /* 58178 0A9E08 8012E608 */  .4byte D_ovl2_80130FF8
  /* 5817C 0A9E0C 8012E60C */
  .asciz "PJ."
  .balign 4
  .incbin "ovl2.raw.bin", 0x58180, 0x8
  /* 58188 0A9E18 8012E618 */  .4byte efParticle_YoshiShield_ProcUpdate
  .incbin "ovl2.raw.bin", 0x5818C, 0x10

glabel D_ovl2_8012E62C
  .incbin "ovl2.raw.bin", 0x5819C, 0x4
  /* 581A0 0A9E30 8012E630 */  .4byte D_ovl2_80130FC0
  .incbin "ovl2.raw.bin", 0x581A4, 0x8
  /* 581AC 0A9E3C 8012E63C */  .4byte func_ovl2_800FD568
  /* 581B0 0A9E40 8012E640 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x581B4, 0x10

glabel D_ovl2_8012E654
  .incbin "ovl2.raw.bin", 0x581C4, 0x4
  /* 581C8 0A9E58 8012E658 */  .4byte D_ovl2_80130EDC
  .incbin "ovl2.raw.bin", 0x581CC, 0x8
  /* 581D4 0A9E64 8012E664 */  .4byte func_ovl2_800FD568
  /* 581D8 0A9E68 8012E668 */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x581DC, 0x10

glabel D_ovl2_8012E67C
  .incbin "ovl2.raw.bin", 0x581EC, 0x4
  /* 581F0 0A9E80 8012E680 */  .4byte D_ovl2_80130F40
  .incbin "ovl2.raw.bin", 0x581F4, 0x8
  /* 581FC 0A9E8C 8012E68C */  .4byte func_ovl2_800FD568
  /* 58200 0A9E90 8012E690 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x58204, 0x10

glabel D_ovl2_8012E6A4
  .incbin "ovl2.raw.bin", 0x58214, 0x4
  /* 58218 0A9EA8 8012E6A8 */  .4byte D_ovl2_8013103C
  .incbin "ovl2.raw.bin", 0x5821C, 0x8
  /* 58224 0A9EB4 8012E6B4 */  .4byte func_ovl2_801034D0
  /* 58228 0A9EB8 8012E6B8 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x5822C, 0x10

glabel D_ovl2_8012E6CC
  .incbin "ovl2.raw.bin", 0x5823C, 0x4

glabel D_ovl2_8012E6D0
  /* 58240 0A9ED0 8012E6D0 */  .4byte D_ovl2_80130E40
  .incbin "ovl2.raw.bin", 0x58244, 0x8
  /* 5824C 0A9EDC 8012E6DC */  .4byte func_ovl2_800FD568
  /* 58250 0A9EE0 8012E6E0 */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x58254, 0x10

glabel D_ovl2_8012E6F4
  .incbin "ovl2.raw.bin", 0x58264, 0x4
  /* 58268 0A9EF8 8012E6F8 */  .4byte D_ovl2_80130EA4
  .incbin "ovl2.raw.bin", 0x5826C, 0x8
  /* 58274 0A9F04 8012E704 */  .4byte func_ovl2_80103780
  /* 58278 0A9F08 8012E708 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x5827C, 0x10

glabel D_ovl2_8012E71C
  /* 5828C 0A9F1C 8012E71C */
  .asciz "@AB"
  .balign 4

glabel D_ovl2_8012E720
  .incbin "ovl2.raw.bin", 0x58290, 0x4
  /* 58294 0A9F24 8012E724 */  .4byte gpItemFileData
  .incbin "ovl2.raw.bin", 0x58298, 0x4
  /* 5829C 0A9F2C 8012E72C */
  .asciz "."
  .balign 4
  /* 582A0 0A9F30 8012E730 */  .4byte func_ovl2_80103B28
  /* 582A4 0A9F34 8012E734 */  .4byte func_ovl0_800CB4B0
  .incbin "ovl2.raw.bin", 0x582A8, 0x10

glabel D_ovl2_8012E748
  .incbin "ovl2.raw.bin", 0x582B8, 0x4
  /* 582BC 0A9F4C 8012E74C */  .4byte gpItemFileData
  .incbin "ovl2.raw.bin", 0x582C0, 0x4
  /* 582C4 0A9F54 8012E754 */
  .asciz "."
  .balign 4
  /* 582C8 0A9F58 8012E758 */  .4byte func_ovl2_80103DF8
  /* 582CC 0A9F5C 8012E75C */  .4byte func_ovl0_800CB4B0
  .incbin "ovl2.raw.bin", 0x582D0, 0x10

glabel D_ovl2_8012E770
  .incbin "ovl2.raw.bin", 0x582E0, 0x4
  /* 582E4 0A9F74 8012E774 */  .4byte D_ovl2_801313B8
  .incbin "ovl2.raw.bin", 0x582E8, 0x8
  /* 582F0 0A9F80 8012E780 */  .4byte func_8000DF34
  /* 582F4 0A9F84 8012E784 */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x582F8, 0x10

glabel D_ovl2_8012E798
  .incbin "ovl2.raw.bin", 0x58308, 0x4
  /* 5830C 0A9F9C 8012E79C */  .4byte D_ovl2_801313B8
  .incbin "ovl2.raw.bin", 0x58310, 0x8
  /* 58318 0A9FA8 8012E7A8 */  .4byte func_ovl2_800FD568
  /* 5831C 0A9FAC 8012E7AC */  .4byte func_80014768
  .incbin "ovl2.raw.bin", 0x58320, 0x10

glabel D_ovl2_8012E7C0
  .incbin "ovl2.raw.bin", 0x58330, 0x40

glabel jtbl_ovl2_8012E800
  /* 58370 0AA000 8012E800 */  .4byte func_ovl2_80104D90
  /* 58374 0AA004 8012E804 */  .4byte jtgt_ovl2_80104E70
  .incbin "ovl2.raw.bin", 0x58378, 0x4
  /* 5837C 0AA00C 8012E80C */  .4byte func_8000DF34

glabel jtbl_ovl2_8012E810
  /* 58380 0AA010 8012E810 */  .4byte jtgt_ovl2_80104FD8
  /* 58384 0AA014 8012E814 */  .4byte jtgt_ovl2_80105088
  .incbin "ovl2.raw.bin", 0x58388, 0x4

glabel jtbl_ovl2_8012E81C
  /* 5838C 0AA01C 8012E81C */  .4byte jtgt_ovl2_800FBAD0
  /* 58390 0AA020 8012E820 */  .4byte jtgt_ovl2_80105154
  /* 58394 0AA024 8012E824 */  .4byte jtgt_ovl2_801051D0
  /* 58398 0AA028 8012E828 */
  .asciz "\r"
  .balign 4
  /* 5839C 0AA02C 8012E82C */  .4byte func_8000DF34

glabel jtbl_ovl2_8012E830
  /* 583A0 0AA030 8012E830 */  .4byte func_ovl2_80105290
  /* 583A4 0AA034 8012E834 */  .4byte jtgt_ovl2_8010530C
  .incbin "ovl2.raw.bin", 0x583A8, 0x4
  /* 583AC 0AA03C 8012E83C */  .4byte func_8000DF34

glabel jtbl_ovl2_8012E840
  /* 583B0 0AA040 8012E840 */  .4byte jtgt_ovl2_8010B4AC
  /* 583B4 0AA044 8012E844 */  .4byte jtgt_ovl2_80107FCC
  /* 583B8 0AA048 8012E848 */  .4byte jtgt_ovl2_80109FB4
  /* 583BC 0AA04C 8012E84C */  .4byte jtgt_ovl2_80108448
  /* 583C0 0AA050 8012E850 */  .4byte jtgt_ovl2_8010AB20
  /* 583C4 0AA054 8012E854 */  .4byte jtgt_ovl2_80108C80
  /* 583C8 0AA058 8012E858 */  .4byte jtgt_ovl2_801066D4
  /* 583CC 0AA05C 8012E85C */  .4byte jtgt_ovl2_8010B2EC
  /* 583D0 0AA060 8012E860 */  .4byte jtgt_ovl2_80109C0C
  .incbin "ovl2.raw.bin", 0x583D4, 0xC

glabel D_ovl2_8012E870
  .incbin "ovl2.raw.bin", 0x583E0, 0x20

glabel D_ovl2_8012E890
  .incbin "ovl2.raw.bin", 0x58400, 0x40

glabel D_ovl2_8012E8D0
  .incbin "ovl2.raw.bin", 0x58440, 0x18

glabel D_ovl2_8012E8E8
  .incbin "ovl2.raw.bin", 0x58458, 0x18

glabel D_ovl2_8012E900
  .incbin "ovl2.raw.bin", 0x58470, 0x20

glabel D_ovl2_8012E920
  .incbin "ovl2.raw.bin", 0x58490, 0x20

glabel D_ovl2_8012E940
  .incbin "ovl2.raw.bin", 0x584B0, 0x20

glabel D_ovl2_8012E960
  .incbin "ovl2.raw.bin", 0x584D0, 0x18

glabel D_ovl2_8012E978
  .incbin "ovl2.raw.bin", 0x584E8, 0x4
  /* 584EC 0AA17C 8012E97C */
  .asciz "#("
  .balign 4

glabel D_ovl2_8012E980
  .incbin "ovl2.raw.bin", 0x584F0, 0x8

glabel D_ovl2_8012E988
  .incbin "ovl2.raw.bin", 0x584F8, 0x38

glabel D_ovl2_8012E9C0
  .incbin "ovl2.raw.bin", 0x58530, 0xC

glabel D_ovl2_8012E9CC
  .incbin "ovl2.raw.bin", 0x5853C, 0x24

glabel D_ovl2_8012E9F0
  .incbin "ovl2.raw.bin", 0x58560, 0x8
  /* 58568 0AA1F8 8012E9F8 */  .4byte D_ovl2_80131428
  .incbin "ovl2.raw.bin", 0x5856C, 0xC

glabel jtbl_ovl2_8012EA08
  /* 58578 0AA208 8012EA08 */  .4byte jtgt_ovl2_80107030
  /* 5857C 0AA20C 8012EA0C */  .4byte jtgt_ovl2_80107074
  /* 58580 0AA210 8012EA10 */  .4byte jtgt_ovl2_80107074
  /* 58584 0AA214 8012EA14 */  .4byte jtgt_ovl2_80107238
  /* 58588 0AA218 8012EA18 */  .4byte jtgt_ovl2_80107074
  /* 5858C 0AA21C 8012EA1C */  .4byte jtgt_ovl2_801072C0
  /* 58590 0AA220 8012EA20 */  .4byte jtgt_ovl2_80107074

glabel D_ovl2_8012EA24
  .incbin "ovl2.raw.bin", 0x58594, 0x8
  /* 5859C 0AA22C 8012EA2C */  .4byte D_ovl2_80131428
  .incbin "ovl2.raw.bin", 0x585A0, 0xC

glabel jtbl_ovl2_8012EA3C
  /* 585AC 0AA23C 8012EA3C */  .4byte jtgt_ovl2_801075E0
  /* 585B0 0AA240 8012EA40 */  .4byte jtgt_ovl2_80107670
  /* 585B4 0AA244 8012EA44 */  .4byte jtgt_ovl2_80107670
  /* 585B8 0AA248 8012EA48 */  .4byte jtgt_ovl2_80107670
  /* 585BC 0AA24C 8012EA4C */  .4byte jtgt_ovl2_80107670
  /* 585C0 0AA250 8012EA50 */  .4byte jtgt_ovl2_80107670
  /* 585C4 0AA254 8012EA54 */  .4byte jtgt_ovl2_801076B0
  .incbin "ovl2.raw.bin", 0x585C8, 0x8

glabel D_ovl2_8012EA60
  .incbin "ovl2.raw.bin", 0x585D0, 0x8

glabel D_ovl2_8012EA68
  /* 585D8 0AA268 8012EA68 */
  .4byte 0xc5610000 # .float -3600.0
  .incbin "ovl2.raw.bin", 0x585DC, 0x68
  /* 58644 0AA2D4 8012EAD4 */
  .asciz "DH"
  .balign 4
  .incbin "ovl2.raw.bin", 0x58648, 0x44

glabel D_ovl2_8012EB1C
  /* 5868C 0AA31C 8012EB1C */
  .4byte 0xc53b8000 # .float -3000.0

glabel D_ovl2_8012EB20
  .incbin "ovl2.raw.bin", 0x58690, 0x8

glabel D_ovl2_8012EB28
  .incbin "ovl2.raw.bin", 0x58698, 0x8

glabel D_ovl2_8012EB30
  .incbin "ovl2.raw.bin", 0x586A0, 0x4

glabel D_ovl2_8012EB34
  .incbin "ovl2.raw.bin", 0x586A4, 0x1

glabel D_ovl2_8012EB35
  .incbin "ovl2.raw.bin", 0x586A5, 0x1

glabel D_ovl2_8012EB36
  .incbin "ovl2.raw.bin", 0x586A6, 0x2

glabel D_ovl2_8012EB38
  .incbin "ovl2.raw.bin", 0x586A8, 0x10

glabel D_ovl2_8012EB48
  .incbin "ovl2.raw.bin", 0x586B8, 0x8

glabel D_ovl2_8012EB50
  .incbin "ovl2.raw.bin", 0x586C0, 0x10

glabel grYamabuki_MonsterFlag_Prev
  .incbin "ovl2.raw.bin", 0x586D0, 0x4

glabel D_ovl2_8012EB64
  .incbin "ovl2.raw.bin", 0x586D4, 0xC

glabel D_ovl2_8012EB70
  .incbin "ovl2.raw.bin", 0x586E0, 0x1C

glabel D_ovl2_8012EB8C
  .incbin "ovl2.raw.bin", 0x586FC, 0x28

glabel jtbl_ovl2_8012EBB4
  /* 58724 0AA3B4 8012EBB4 */  .4byte jtgt_ovl2_8010C734
  /* 58728 0AA3B8 8012EBB8 */  .4byte jtgt_ovl2_8010CAE0
  /* 5872C 0AA3BC 8012EBBC */  .4byte jtgt_ovl2_8010CC74
  /* 58730 0AA3C0 8012EBC0 */  .4byte jtgt_ovl2_8010CB48
  /* 58734 0AA3C4 8012EBC4 */  .4byte jtgt_ovl2_8010CCC0
  /* 58738 0AA3C8 8012EBC8 */  .4byte jtgt_ovl2_8010CDAC
  /* 5873C 0AA3CC 8012EBCC */  .4byte jtgt_ovl2_8010C8C4

glabel D_ovl2_8012EBD0
  /* 58740 0AA3D0 8012EBD0 */
  .4byte 0x000000 # .float 0.0
  .incbin "ovl2.raw.bin", 0x58744, 0x1C

glabel D_ovl2_8012EBF0
  .incbin "ovl2.raw.bin", 0x58760, 0x30

glabel D_ovl2_8012EC20
  .incbin "ovl2.raw.bin", 0x58790, 0x8

glabel D_ovl2_8012EC28
  .incbin "ovl2.raw.bin", 0x58798, 0x8

glabel D_ovl2_8012EC30
  .incbin "ovl2.raw.bin", 0x587A0, 0x4

glabel D_ovl2_8012EC34
  .incbin "ovl2.raw.bin", 0x587A4, 0x4

glabel D_ovl2_8012EC38
  .incbin "ovl2.raw.bin", 0x587A8, 0x10

glabel D_ovl2_8012EC48
  .incbin "ovl2.raw.bin", 0x587B8, 0x10

glabel D_ovl2_8012EC58
  .incbin "ovl2.raw.bin", 0x587C8, 0x10

glabel D_ovl2_8012EC68
  .incbin "ovl2.raw.bin", 0x587D8, 0x10

glabel D_ovl2_8012EC78
  .incbin "ovl2.raw.bin", 0x587E8, 0x10

glabel D_ovl2_8012EC88
  .incbin "ovl2.raw.bin", 0x587F8, 0x10

glabel D_ovl2_8012EC98
  .incbin "ovl2.raw.bin", 0x58808, 0x10

glabel D_ovl2_8012ECA8
  .incbin "ovl2.raw.bin", 0x58818, 0xC

glabel D_ovl2_8012ECB4
  .incbin "ovl2.raw.bin", 0x58824, 0xC

glabel D_ovl2_8012ECC0
  .incbin "ovl2.raw.bin", 0x58830, 0xC

glabel D_ovl2_8012ECCC
  .incbin "ovl2.raw.bin", 0x5883C, 0x1

glabel D_ovl2_8012ECCD
  .incbin "ovl2.raw.bin", 0x5883D, 0x3

glabel D_ovl2_8012ECD0
  .incbin "ovl2.raw.bin", 0x58840, 0x1

glabel D_ovl2_8012ECD1
  .incbin "ovl2.raw.bin", 0x58841, 0x3

glabel D_ovl2_8012ECD4
  .incbin "ovl2.raw.bin", 0x58844, 0x1

glabel D_ovl2_8012ECD5
  .incbin "ovl2.raw.bin", 0x58845, 0x3

glabel D_ovl2_8012ECD8
  .incbin "ovl2.raw.bin", 0x58848, 0x1

glabel D_ovl2_8012ECD9
  .incbin "ovl2.raw.bin", 0x58849, 0x3

glabel D_ovl2_8012ECDC
  .incbin "ovl2.raw.bin", 0x5884C, 0x1

glabel D_ovl2_8012ECDD
  .incbin "ovl2.raw.bin", 0x5884D, 0x3

glabel D_ovl2_8012ECE0
  .incbin "ovl2.raw.bin", 0x58850, 0x1

glabel D_ovl2_8012ECE1
  .incbin "ovl2.raw.bin", 0x58851, 0x3

glabel D_ovl2_8012ECE4
  .incbin "ovl2.raw.bin", 0x58854, 0x5C

glabel D_ovl2_8012ED40
  .incbin "ovl2.raw.bin", 0x588B0, 0x24

glabel D_ovl2_8012ED64
  .incbin "ovl2.raw.bin", 0x588D4, 0x18

glabel D_ovl2_8012ED7C
  .incbin "ovl2.raw.bin", 0x588EC, 0x60

glabel D_ovl2_8012EDDC
  .incbin "ovl2.raw.bin", 0x5894C, 0x8

glabel D_ovl2_8012EDE4
  .incbin "ovl2.raw.bin", 0x58954, 0x30

glabel D_ovl2_8012EE14
  .incbin "ovl2.raw.bin", 0x58984, 0x38

glabel D_ovl2_8012EE4C
  .incbin "ovl2.raw.bin", 0x589BC, 0x4

glabel D_ovl2_8012EE50
  .incbin "ovl2.raw.bin", 0x589C0, 0x4

glabel D_ovl2_8012EE54
  .incbin "ovl2.raw.bin", 0x589C4, 0x10

glabel D_ovl2_8012EE64
  .incbin "ovl2.raw.bin", 0x589D4, 0x30

glabel D_ovl2_8012EE94
  .incbin "ovl2.raw.bin", 0x58A04, 0x4

glabel D_ovl2_8012EE98
  .incbin "ovl2.raw.bin", 0x58A08, 0x30

glabel D_ovl2_8012EEC8
  .incbin "ovl2.raw.bin", 0x58A38, 0x4

glabel D_ovl2_8012EECC
  .incbin "ovl2.raw.bin", 0x58A3C, 0x4

glabel D_ovl2_8012EED0
  .incbin "ovl2.raw.bin", 0x58A40, 0x4

glabel D_ovl2_8012EED4
  .incbin "ovl2.raw.bin", 0x58A44, 0x20

glabel D_ovl2_8012EEF4
  .incbin "ovl2.raw.bin", 0x58A64, 0x4

glabel D_ovl2_8012EEF8
  .incbin "ovl2.raw.bin", 0x58A68, 0x40

glabel D_ovl2_8012EF38
  .incbin "ovl2.raw.bin", 0x58AA8, 0x8

glabel D_ovl2_8012EF40
  .incbin "ovl2.raw.bin", 0x58AB0, 0x8

glabel D_ovl2_8012EF48
  .incbin "ovl2.raw.bin", 0x58AB8, 0xC

glabel D_ovl2_8012EF54
  .incbin "ovl2.raw.bin", 0x58AC4, 0x10

glabel D_ovl2_8012EF64
  .incbin "ovl2.raw.bin", 0x58AD4, 0x8

glabel D_ovl2_8012EF6C
  .incbin "ovl2.raw.bin", 0x58ADC, 0x8

glabel D_ovl2_8012EF74
  .incbin "ovl2.raw.bin", 0x58AE4, 0x8

glabel D_ovl2_8012EF7C
  .incbin "ovl2.raw.bin", 0x58AEC, 0x8

glabel D_ovl2_8012EF84
  .incbin "ovl2.raw.bin", 0x58AF4, 0x8

glabel D_ovl2_8012EF8C
  .incbin "ovl2.raw.bin", 0x58AFC, 0x8

glabel D_ovl2_8012EF94
  .incbin "ovl2.raw.bin", 0x58B04, 0x8

glabel D_ovl2_8012EF9C
  .incbin "ovl2.raw.bin", 0x58B0C, 0x8

glabel D_ovl2_8012EFA4
  .incbin "ovl2.raw.bin", 0x58B14, 0x8

glabel D_ovl2_8012EFAC
  .incbin "ovl2.raw.bin", 0x58B1C, 0x18

glabel D_ovl2_8012EFC4
  .incbin "ovl2.raw.bin", 0x58B34, 0x2C
  /* 58B60 0AA7F0 8012EFF0 */
  .asciz "0"
  .balign 4
  .incbin "ovl2.raw.bin", 0x58B64, 0xC
  /* 58B70 0AA800 8012F000 */
  .asciz "!!"
  .balign 4
  .incbin "ovl2.raw.bin", 0x58B74, 0xC
  /* 58B80 0AA810 8012F010 */
  .asciz "!!"
  .balign 4
  .incbin "ovl2.raw.bin", 0x58B84, 0x7C
  /* 58C00 0AA890 8012F090 */
  .asciz "!!"
  .balign 4
  .incbin "ovl2.raw.bin", 0x58C04, 0x10

glabel D_ovl2_8012F0A4
  .incbin "ovl2.raw.bin", 0x58C14, 0x4

glabel D_ovl2_8012F0A8
  .incbin "ovl2.raw.bin", 0x58C18, 0x4

glabel D_ovl2_8012F0AC
  .incbin "ovl2.raw.bin", 0x58C1C, 0x4

glabel D_ovl2_8012F0B0
  .incbin "ovl2.raw.bin", 0x58C20, 0x44

glabel D_ovl2_8012F0F4
  .incbin "ovl2.raw.bin", 0x58C64, 0x38

glabel D_ovl2_8012F12C
  .incbin "ovl2.raw.bin", 0x58C9C, 0x8

glabel D_ovl2_8012F134
  .incbin "ovl2.raw.bin", 0x58CA4, 0x48

glabel D_ovl2_8012F17C
  .incbin "ovl2.raw.bin", 0x58CEC, 0x8

glabel D_ovl2_8012F184
  .incbin "ovl2.raw.bin", 0x58CF4, 0x1C

glabel D_ovl2_8012F1A0
  /* 58D10 0AA9A0 8012F1A0 */
  .asciz "?@"
  .balign 4

glabel D_ovl2_8012F1A4
  .incbin "ovl2.raw.bin", 0x58D14, 0xC

glabel D_ovl2_8012F1B0
  .incbin "ovl2.raw.bin", 0x58D20, 0xC

glabel D_ovl2_8012F1BC
  .incbin "ovl2.raw.bin", 0x58D2C, 0xC

glabel D_ovl2_8012F1C8
  .incbin "ovl2.raw.bin", 0x58D38, 0x4

glabel D_ovl2_8012F1CC
  .incbin "ovl2.raw.bin", 0x58D3C, 0xC

glabel D_ovl2_8012F1D8
  .incbin "ovl2.raw.bin", 0x58D48, 0x4

glabel D_ovl2_8012F1DC
  .incbin "ovl2.raw.bin", 0x58D4C, 0xC

glabel D_ovl2_8012F1E8
  .incbin "ovl2.raw.bin", 0x58D58, 0xC

glabel D_ovl2_8012F1F4
  .incbin "ovl2.raw.bin", 0x58D64, 0x4

glabel D_ovl2_8012F1F8
  .incbin "ovl2.raw.bin", 0x58D68, 0x8

glabel D_ovl2_8012F200
  /* 58D70 0AAA00 8012F200 */  .4byte D_ovl2_8012F1A0
  /* 58D74 0AAA04 8012F204 */  .4byte D_ovl2_8012F1A4
  /* 58D78 0AAA08 8012F208 */  .4byte D_ovl2_8012F1B0
  /* 58D7C 0AAA0C 8012F20C */  .4byte D_ovl2_8012F1BC
  /* 58D80 0AAA10 8012F210 */  .4byte D_ovl2_8012F1C8
  /* 58D84 0AAA14 8012F214 */  .4byte D_ovl2_8012F1CC
  /* 58D88 0AAA18 8012F218 */  .4byte D_ovl2_8012F1D8
  /* 58D8C 0AAA1C 8012F21C */  .4byte D_ovl2_8012F1DC
  /* 58D90 0AAA20 8012F220 */  .4byte D_ovl2_8012F1E8
  /* 58D94 0AAA24 8012F224 */  .4byte D_ovl2_8012F1F4
  /* 58D98 0AAA28 8012F228 */  .4byte D_ovl2_8012F1F8

glabel D_ovl2_8012F22C
  .incbin "ovl2.raw.bin", 0x58D9C, 0x14

glabel D_ovl2_8012F240
  /* 58DB0 0AAA40 8012F240 */
  .asciz "Ez"
  .balign 4
  .incbin "ovl2.raw.bin", 0x58DB4, 0x24
  /* 58DD8 0AAA68 8012F268 */  .4byte func_ovl2_80115F5C
  /* 58DDC 0AAA6C 8012F26C */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x58DE0, 0x10
  /* 58DF0 0AAA80 8012F280 */
  .asciz "Ez"
  .balign 4
  .incbin "ovl2.raw.bin", 0x58DF4, 0x24
  /* 58E18 0AAAA8 8012F2A8 */  .4byte func_ovl2_80115F5C
  /* 58E1C 0AAAAC 8012F2AC */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x58E20, 0x10

glabel D_ovl2_8012F2C0
  /* 58E30 0AAAC0 8012F2C0 */
  .asciz "Ez"
  .balign 4
  .incbin "ovl2.raw.bin", 0x58E34, 0x24
  /* 58E58 0AAAE8 8012F2E8 */  .4byte func_ovl2_80115F5C
  /* 58E5C 0AAAEC 8012F2EC */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x58E60, 0x10

glabel D_ovl2_8012F300
  .incbin "ovl2.raw.bin", 0x58E70, 0x14
  /* 58E84 0AAB14 8012F314 */  .4byte func_ovl2_801161A0
  .incbin "ovl2.raw.bin", 0x58E88, 0x10
  /* 58E98 0AAB28 8012F328 */  .4byte func_ovl2_801160E8
  /* 58E9C 0AAB2C 8012F32C */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x58EA0, 0x38
  /* 58ED8 0AAB68 8012F368 */  .4byte func_ovl2_80115F5C
  /* 58EDC 0AAB6C 8012F36C */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x58EE0, 0x38
  /* 58F18 0AABA8 8012F3A8 */  .4byte func_ovl2_80115F5C
  /* 58F1C 0AABAC 8012F3AC */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x58F20, 0x10
  /* 58F30 0AABC0 8012F3C0 */
  .asciz "Ez"
  .balign 4
  .incbin "ovl2.raw.bin", 0x58F34, 0x24
  /* 58F58 0AABE8 8012F3E8 */  .4byte func_ovl2_80115F5C
  /* 58F5C 0AABEC 8012F3EC */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x58F60, 0x10
  /* 58F70 0AAC00 8012F400 */
  .asciz "Ez"
  .balign 4
  .incbin "ovl2.raw.bin", 0x58F74, 0x24
  /* 58F98 0AAC28 8012F428 */  .4byte func_ovl2_80115F5C
  /* 58F9C 0AAC2C 8012F42C */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x58FA0, 0x10

glabel D_ovl2_8012F440
  /* 58FB0 0AAC40 8012F440 */
  .asciz "Ez"
  .balign 4
  /* 58FB4 0AAC44 8012F444 */
  .asciz "Dz"
  .balign 4
  .incbin "ovl2.raw.bin", 0x58FB8, 0x4
  /* 58FBC 0AAC4C 8012F44C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x58FC0, 0x18
  /* 58FD8 0AAC68 8012F468 */  .4byte func_ovl2_80115F5C
  /* 58FDC 0AAC6C 8012F46C */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x58FE0, 0x1C
  /* 58FFC 0AAC8C 8012F48C */
  .asciz "@@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x59000, 0x18
  /* 59018 0AACA8 8012F4A8 */  .4byte func_ovl2_80115F5C
  /* 5901C 0AACAC 8012F4AC */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x59020, 0x10

glabel D_ovl2_8012F4C0
  .incbin "ovl2.raw.bin", 0x59030, 0xC
  /* 5903C 0AACCC 8012F4CC */
  .asciz "@@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x59040, 0x18
  /* 59058 0AACE8 8012F4E8 */  .4byte func_ovl2_80115F5C
  /* 5905C 0AACEC 8012F4EC */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x59060, 0x1C
  /* 5907C 0AAD0C 8012F50C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x59080, 0x18
  /* 59098 0AAD28 8012F528 */  .4byte func_ovl2_80116090
  /* 5909C 0AAD2C 8012F52C */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x590A0, 0x1C
  /* 590BC 0AAD4C 8012F54C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x590C0, 0x18
  /* 590D8 0AAD68 8012F568 */  .4byte func_ovl2_80116090
  /* 590DC 0AAD6C 8012F56C */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x590E0, 0x1C
  /* 590FC 0AAD8C 8012F58C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x59100, 0x18
  /* 59118 0AADA8 8012F5A8 */  .4byte func_ovl2_80115F5C
  /* 5911C 0AADAC 8012F5AC */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x59120, 0x1C
  /* 5913C 0AADCC 8012F5CC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x59140, 0x18
  /* 59158 0AADE8 8012F5E8 */  .4byte func_ovl2_80115F5C
  /* 5915C 0AADEC 8012F5EC */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x59160, 0x1C
  /* 5917C 0AAE0C 8012F60C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x59180, 0x18
  /* 59198 0AAE28 8012F628 */  .4byte func_ovl2_80115F5C
  /* 5919C 0AAE2C 8012F62C */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x591A0, 0x10

glabel D_ovl2_8012F640
  .incbin "ovl2.raw.bin", 0x591B0, 0x28
  /* 591D8 0AAE68 8012F668 */  .4byte func_ovl2_80115F5C
  /* 591DC 0AAE6C 8012F66C */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x591E0, 0x38
  /* 59218 0AAEA8 8012F6A8 */  .4byte func_ovl2_80115F5C
  /* 5921C 0AAEAC 8012F6AC */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x59220, 0x14
  /* 59234 0AAEC4 8012F6C4 */
  .asciz "Dz"
  .balign 4
  .incbin "ovl2.raw.bin", 0x59238, 0x4
  /* 5923C 0AAECC 8012F6CC */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x59240, 0x18
  /* 59258 0AAEE8 8012F6E8 */  .4byte func_ovl2_80115F5C
  /* 5925C 0AAEEC 8012F6EC */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x59260, 0x14
  /* 59274 0AAF04 8012F704 */
  .asciz "Dz"
  .balign 4
  .incbin "ovl2.raw.bin", 0x59278, 0x4
  /* 5927C 0AAF0C 8012F70C */
  .asciz "@@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x59280, 0x18
  /* 59298 0AAF28 8012F728 */  .4byte func_ovl2_80115F5C
  /* 5929C 0AAF2C 8012F72C */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x592A0, 0x10

glabel D_ovl2_8012F740
  .incbin "ovl2.raw.bin", 0x592B0, 0x28
  /* 592D8 0AAF68 8012F768 */  .4byte func_ovl2_80115F5C
  /* 592DC 0AAF6C 8012F76C */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x592E0, 0x14
  /* 592F4 0AAF84 8012F784 */
  .asciz "Dz"
  .balign 4
  .incbin "ovl2.raw.bin", 0x592F8, 0x4
  /* 592FC 0AAF8C 8012F78C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x59300, 0x18
  /* 59318 0AAFA8 8012F7A8 */  .4byte func_ovl2_80115F5C
  /* 5931C 0AAFAC 8012F7AC */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x59320, 0x38
  /* 59358 0AAFE8 8012F7E8 */  .4byte func_ovl2_80115F5C
  /* 5935C 0AAFEC 8012F7EC */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x59360, 0x14
  /* 59374 0AB004 8012F804 */
  .asciz "Dz"
  .balign 4
  .incbin "ovl2.raw.bin", 0x59378, 0x4
  /* 5937C 0AB00C 8012F80C */
  .asciz "@"
  .balign 4
  .incbin "ovl2.raw.bin", 0x59380, 0x18
  /* 59398 0AB028 8012F828 */  .4byte func_ovl2_80115F5C
  /* 5939C 0AB02C 8012F82C */  .4byte func_80014038
  .incbin "ovl2.raw.bin", 0x593A0, 0x10

glabel D_ovl2_8012F840
  .incbin "ovl2.raw.bin", 0x593B0, 0x4

glabel D_ovl2_8012F844
  /* 593B4 0AB044 8012F844 */  .4byte D_ovl2_8012F8C0
  .incbin "ovl2.raw.bin", 0x593B8, 0x4
  /* 593BC 0AB04C 8012F84C */  .4byte D_ovl2_8012F240
  .incbin "ovl2.raw.bin", 0x593C0, 0x4
  /* 593C4 0AB054 8012F854 */  .4byte D_ovl2_8012F914
  .incbin "ovl2.raw.bin", 0x593C8, 0x4
  /* 593CC 0AB05C 8012F85C */  .4byte D_ovl2_8012F300
  .incbin "ovl2.raw.bin", 0x593D0, 0x4
  /* 593D4 0AB064 8012F864 */  .4byte D_ovl2_8012F8D8
  .incbin "ovl2.raw.bin", 0x593D8, 0x4
  /* 593DC 0AB06C 8012F86C */  .4byte D_ovl2_8012F2C0
  .incbin "ovl2.raw.bin", 0x593E0, 0x4
  /* 593E4 0AB074 8012F874 */  .4byte D_ovl2_8012F8F0
  .incbin "ovl2.raw.bin", 0x593E8, 0x4
  /* 593EC 0AB07C 8012F87C */  .4byte D_ovl2_8012F440
  .incbin "ovl2.raw.bin", 0x593F0, 0x14
  /* 59404 0AB094 8012F894 */  .4byte D_ovl2_8012F968
  .incbin "ovl2.raw.bin", 0x59408, 0x4
  /* 5940C 0AB09C 8012F89C */  .4byte D_ovl2_8012F4C0
  .incbin "ovl2.raw.bin", 0x59410, 0x4
  /* 59414 0AB0A4 8012F8A4 */  .4byte D_ovl2_8012F9BC
  .incbin "ovl2.raw.bin", 0x59418, 0x4
  /* 5941C 0AB0AC 8012F8AC */  .4byte D_ovl2_8012F640
  .incbin "ovl2.raw.bin", 0x59420, 0x4
  /* 59424 0AB0B4 8012F8B4 */  .4byte D_ovl2_8012FA04
  .incbin "ovl2.raw.bin", 0x59428, 0x4
  /* 5942C 0AB0BC 8012F8BC */  .4byte D_ovl2_8012F740

glabel D_ovl2_8012F8C0
  .incbin "ovl2.raw.bin", 0x59430, 0x18

glabel D_ovl2_8012F8D8
  .incbin "ovl2.raw.bin", 0x59448, 0x18

glabel D_ovl2_8012F8F0
  .incbin "ovl2.raw.bin", 0x59460, 0x24

glabel D_ovl2_8012F914
  .incbin "ovl2.raw.bin", 0x59484, 0x54

glabel D_ovl2_8012F968
  .incbin "ovl2.raw.bin", 0x594D8, 0x54

glabel D_ovl2_8012F9BC
  .incbin "ovl2.raw.bin", 0x5952C, 0x48

glabel D_ovl2_8012FA04
  .incbin "ovl2.raw.bin", 0x59574, 0x38
  /* 595AC 0AB23C 8012FA3C */
  .asciz "\n"
  .balign 4
  .incbin "ovl2.raw.bin", 0x595B0, 0x10

glabel D_ovl2_8012FA50
  /* 595C0 0AB250 8012FA50 */
  .asciz "couldn\'t get Fighter struct.\n"
  .balign 4

glabel D_ovl2_8012FA70
  /* 595E0 0AB270 8012FA70 */
  .asciz "couldn\'t get FighterParts struct.\n"
  .balign 4

glabel jtbl_ovl2_8012FA94
  /* 59604 0AB294 8012FA94 */  .4byte jtgt_ovl2_800D7DCC
  /* 59608 0AB298 8012FA98 */  .4byte jtgt_ovl2_800D7F0C
  /* 5960C 0AB29C 8012FA9C */  .4byte jtgt_ovl2_800D7DE4
  /* 59610 0AB2A0 8012FAA0 */  .4byte jtgt_ovl2_800D7DEC
  /* 59614 0AB2A4 8012FAA4 */  .4byte jtgt_ovl2_800D7DF8
  /* 59618 0AB2A8 8012FAA8 */  .4byte jtgt_ovl2_800D7E8C
  /* 5961C 0AB2AC 8012FAAC */  .4byte jtgt_ovl2_800D7F0C
  /* 59620 0AB2B0 8012FAB0 */  .4byte jtgt_ovl2_800D7E00
  /* 59624 0AB2B4 8012FAB4 */  .4byte jtgt_ovl2_800D7E08
  /* 59628 0AB2B8 8012FAB8 */  .4byte jtgt_ovl2_800D7F0C
  /* 5962C 0AB2BC 8012FABC */  .4byte jtgt_ovl2_800D7EB8
  /* 59630 0AB2C0 8012FAC0 */  .4byte jtgt_ovl2_800D7F0C
  /* 59634 0AB2C4 8012FAC4 */  .4byte jtgt_ovl2_800D7EC0
  /* 59638 0AB2C8 8012FAC8 */  .4byte jtgt_ovl2_800D7DBC
  /* 5963C 0AB2CC 8012FACC */  .4byte jtgt_ovl2_800D7DCC
  /* 59640 0AB2D0 8012FAD0 */  .4byte jtgt_ovl2_800D7F0C
  /* 59644 0AB2D4 8012FAD4 */  .4byte jtgt_ovl2_800D7DE4
  /* 59648 0AB2D8 8012FAD8 */  .4byte jtgt_ovl2_800D7DEC
  /* 5964C 0AB2DC 8012FADC */  .4byte jtgt_ovl2_800D7DF8
  /* 59650 0AB2E0 8012FAE0 */  .4byte jtgt_ovl2_800D7E8C
  /* 59654 0AB2E4 8012FAE4 */  .4byte jtgt_ovl2_800D7F0C
  /* 59658 0AB2E8 8012FAE8 */  .4byte jtgt_ovl2_800D7E00
  /* 5965C 0AB2EC 8012FAEC */  .4byte jtgt_ovl2_800D7E08
  /* 59660 0AB2F0 8012FAF0 */  .4byte jtgt_ovl2_800D7F0C
  /* 59664 0AB2F4 8012FAF4 */  .4byte jtgt_ovl2_800D7EB8
  /* 59668 0AB2F8 8012FAF8 */  .4byte jtgt_ovl2_800D7F0C
  /* 5966C 0AB2FC 8012FAFC */  .4byte jtgt_ovl2_800D7DD4

glabel D_ovl2_8012FB00
  /* 59670 0AB300 8012FB00 */
  .4byte 0x38d1b717 # .float 0.0001

glabel jtbl_ovl2_8012FB04
  /* 59674 0AB304 8012FB04 */  .4byte jtgt_ovl2_800DE428
  /* 59678 0AB308 8012FB08 */  .4byte jtgt_ovl2_800DE44C
  /* 5967C 0AB30C 8012FB0C */  .4byte jtgt_ovl2_800DE44C
  /* 59680 0AB310 8012FB10 */  .4byte jtgt_ovl2_800DE430
  /* 59684 0AB314 8012FB14 */  .4byte jtgt_ovl2_800DE438
  /* 59688 0AB318 8012FB18 */  .4byte jtgt_ovl2_800DE44C
  /* 5968C 0AB31C 8012FB1C */  .4byte jtgt_ovl2_800DE44C
  /* 59690 0AB320 8012FB20 */  .4byte jtgt_ovl2_800DE440
  /* 59694 0AB324 8012FB24 */  .4byte jtgt_ovl2_800DE44C
  /* 59698 0AB328 8012FB28 */  .4byte jtgt_ovl2_800DE44C
  /* 5969C 0AB32C 8012FB2C */  .4byte jtgt_ovl2_800DE448
  /* 596A0 0AB330 8012FB30 */  .4byte jtgt_ovl2_800DE44C
  /* 596A4 0AB334 8012FB34 */  .4byte jtgt_ovl2_800DE44C
  /* 596A8 0AB338 8012FB38 */  .4byte jtgt_ovl2_800DE428
  /* 596AC 0AB33C 8012FB3C */  .4byte jtgt_ovl2_800DE428
  /* 596B0 0AB340 8012FB40 */  .4byte jtgt_ovl2_800DE44C
  /* 596B4 0AB344 8012FB44 */  .4byte jtgt_ovl2_800DE44C
  /* 596B8 0AB348 8012FB48 */  .4byte jtgt_ovl2_800DE430
  /* 596BC 0AB34C 8012FB4C */  .4byte jtgt_ovl2_800DE438
  /* 596C0 0AB350 8012FB50 */  .4byte jtgt_ovl2_800DE44C
  /* 596C4 0AB354 8012FB54 */  .4byte jtgt_ovl2_800DE44C
  /* 596C8 0AB358 8012FB58 */  .4byte jtgt_ovl2_800DE440
  /* 596CC 0AB35C 8012FB5C */  .4byte jtgt_ovl2_800DE44C
  /* 596D0 0AB360 8012FB60 */  .4byte jtgt_ovl2_800DE44C
  /* 596D4 0AB364 8012FB64 */  .4byte jtgt_ovl2_800DE448

glabel D_ovl2_8012FB68
  /* 596D8 0AB368 8012FB68 */
  .4byte 0x3ff5be0b # .float 1.9198622

glabel D_ovl2_8012FB6C
  /* 596DC 0AB36C 8012FB6C */
  .4byte 0x3ff5be0b # .float 1.9198622

glabel D_ovl2_8012FB70
  /* 596E0 0AB370 8012FB70 */
  .4byte 0x3ff5be0b # .float 1.9198622

glabel D_ovl2_8012FB74
  /* 596E4 0AB374 8012FB74 */
  .4byte 0x3ff5be0b # .float 1.9198622
  .incbin "ovl2.raw.bin", 0x596E8, 0x8

glabel jtbl_ovl2_8012FB80
  /* 596F0 0AB380 8012FB80 */  .4byte jtgt_ovl2_800DF130
  /* 596F4 0AB384 8012FB84 */  .4byte jtgt_ovl2_800DF138
  /* 596F8 0AB388 8012FB88 */  .4byte jtgt_ovl2_800DF180
  /* 596FC 0AB38C 8012FB8C */  .4byte jtgt_ovl2_800DF1CC
  /* 59700 0AB390 8012FB90 */  .4byte jtgt_ovl2_800DF1CC
  /* 59704 0AB394 8012FB94 */  .4byte jtgt_ovl2_800DF778
  /* 59708 0AB398 8012FB98 */  .4byte jtgt_ovl2_800DF7AC
  /* 5970C 0AB39C 8012FB9C */  .4byte jtgt_ovl2_800DF590
  /* 59710 0AB3A0 8012FBA0 */  .4byte jtgt_ovl2_800DF614
  /* 59714 0AB3A4 8012FBA4 */  .4byte jtgt_ovl2_800DF698
  /* 59718 0AB3A8 8012FBA8 */  .4byte jtgt_ovl2_800DF700
  /* 5971C 0AB3AC 8012FBAC */  .4byte jtgt_ovl2_800DF74C
  /* 59720 0AB3B0 8012FBB0 */  .4byte jtgt_ovl2_800DF7C4
  /* 59724 0AB3B4 8012FBB4 */  .4byte jtgt_ovl2_800DFE6C
  /* 59728 0AB3B8 8012FBB8 */  .4byte jtgt_ovl2_800DF848
  /* 5972C 0AB3BC 8012FBBC */  .4byte jtgt_ovl2_800DF894
  /* 59730 0AB3C0 8012FBC0 */  .4byte jtgt_ovl2_800DF8E4
  /* 59734 0AB3C4 8012FBC4 */  .4byte jtgt_ovl2_800DF8FC
  /* 59738 0AB3C8 8012FBC8 */  .4byte jtgt_ovl2_800DF960
  /* 5973C 0AB3CC 8012FBCC */  .4byte jtgt_ovl2_800DF7E8
  /* 59740 0AB3D0 8012FBD0 */  .4byte jtgt_ovl2_800DF9C4
  /* 59744 0AB3D4 8012FBD4 */  .4byte jtgt_ovl2_800E00C4
  /* 59748 0AB3D8 8012FBD8 */  .4byte jtgt_ovl2_800E00EC
  /* 5974C 0AB3DC 8012FBDC */  .4byte jtgt_ovl2_800E0114
  /* 59750 0AB3E0 8012FBE0 */  .4byte jtgt_ovl2_800E013C
  /* 59754 0AB3E4 8012FBE4 */  .4byte jtgt_ovl2_800DFA14
  /* 59758 0AB3E8 8012FBE8 */  .4byte jtgt_ovl2_800DFA58
  /* 5975C 0AB3EC 8012FBEC */  .4byte jtgt_ovl2_800DFBDC
  /* 59760 0AB3F0 8012FBF0 */  .4byte jtgt_ovl2_800DFC08
  /* 59764 0AB3F4 8012FBF4 */  .4byte jtgt_ovl2_800DFC50
  /* 59768 0AB3F8 8012FBF8 */  .4byte jtgt_ovl2_800DFC7C
  /* 5976C 0AB3FC 8012FBFC */  .4byte jtgt_ovl2_800DFC94
  /* 59770 0AB400 8012FC00 */  .4byte jtgt_ovl2_800DFD7C
  /* 59774 0AB404 8012FC04 */  .4byte jtgt_ovl2_800DFDDC
  /* 59778 0AB408 8012FC08 */  .4byte jtgt_ovl2_800DFE30
  /* 5977C 0AB40C 8012FC0C */  .4byte jtgt_ovl2_800DFF24
  /* 59780 0AB410 8012FC10 */  .4byte jtgt_ovl2_800DFF44
  /* 59784 0AB414 8012FC14 */  .4byte jtgt_ovl2_800DFFB4
  /* 59788 0AB418 8012FC18 */  .4byte jtgt_ovl2_800DFA9C
  /* 5978C 0AB41C 8012FC1C */  .4byte jtgt_ovl2_800DFA9C
  /* 59790 0AB420 8012FC20 */  .4byte jtgt_ovl2_800DFFD0
  /* 59794 0AB424 8012FC24 */  .4byte jtgt_ovl2_800E0014
  /* 59798 0AB428 8012FC28 */  .4byte jtgt_ovl2_800E002C
  /* 5979C 0AB42C 8012FC2C */  .4byte jtgt_ovl2_800E0044
  /* 597A0 0AB430 8012FC30 */  .4byte jtgt_ovl2_800E0078
  /* 597A4 0AB434 8012FC34 */  .4byte jtgt_ovl2_800E00AC
  /* 597A8 0AB438 8012FC38 */  .4byte jtgt_ovl2_800DFF5C
  /* 597AC 0AB43C 8012FC3C */  .4byte jtgt_ovl2_800E0164
  /* 597B0 0AB440 8012FC40 */  .4byte jtgt_ovl2_800E01C0
  /* 597B4 0AB444 8012FC44 */  .4byte jtgt_ovl2_800E0220
  /* 597B8 0AB448 8012FC48 */  .4byte jtgt_ovl2_800E025C
  /* 597BC 0AB44C 8012FC4C */  .4byte jtgt_ovl2_800E01F0

glabel D_ovl2_8012FC50
  /* 597C0 0AB450 8012FC50 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_8012FC54
  /* 597C4 0AB454 8012FC54 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_8012FC58
  /* 597C8 0AB458 8012FC58 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel jtbl_ovl2_8012FC5C
  /* 597CC 0AB45C 8012FC5C */  .4byte jtgt_ovl2_800E058C
  /* 597D0 0AB460 8012FC60 */  .4byte jtgt_ovl2_800E058C
  /* 597D4 0AB464 8012FC64 */  .4byte jtgt_ovl2_800E0574
  /* 597D8 0AB468 8012FC68 */  .4byte jtgt_ovl2_800E0574
  /* 597DC 0AB46C 8012FC6C */  .4byte jtgt_ovl2_800E0598
  /* 597E0 0AB470 8012FC70 */  .4byte jtgt_ovl2_800E0574
  /* 597E4 0AB474 8012FC74 */  .4byte jtgt_ovl2_800E0574
  /* 597E8 0AB478 8012FC78 */  .4byte jtgt_ovl2_800E0574
  /* 597EC 0AB47C 8012FC7C */  .4byte jtgt_ovl2_800E0574
  /* 597F0 0AB480 8012FC80 */  .4byte jtgt_ovl2_800E05A4
  /* 597F4 0AB484 8012FC84 */  .4byte jtgt_ovl2_800E05A4
  /* 597F8 0AB488 8012FC88 */  .4byte jtgt_ovl2_800E0574
  /* 597FC 0AB48C 8012FC8C */  .4byte jtgt_ovl2_800E0574
  /* 59800 0AB490 8012FC90 */  .4byte jtgt_ovl2_800E0574
  /* 59804 0AB494 8012FC94 */  .4byte jtgt_ovl2_800E0574
  /* 59808 0AB498 8012FC98 */  .4byte jtgt_ovl2_800E0574
  /* 5980C 0AB49C 8012FC9C */  .4byte jtgt_ovl2_800E0574
  /* 59810 0AB4A0 8012FCA0 */  .4byte jtgt_ovl2_800E0574
  /* 59814 0AB4A4 8012FCA4 */  .4byte jtgt_ovl2_800E0574
  /* 59818 0AB4A8 8012FCA8 */  .4byte jtgt_ovl2_800E0574
  /* 5981C 0AB4AC 8012FCAC */  .4byte jtgt_ovl2_800E0574
  /* 59820 0AB4B0 8012FCB0 */  .4byte jtgt_ovl2_800E05A4
  /* 59824 0AB4B4 8012FCB4 */  .4byte jtgt_ovl2_800E0574
  /* 59828 0AB4B8 8012FCB8 */  .4byte jtgt_ovl2_800E0574
  /* 5982C 0AB4BC 8012FCBC */  .4byte jtgt_ovl2_800E05A4
  /* 59830 0AB4C0 8012FCC0 */  .4byte jtgt_ovl2_800E05A4
  /* 59834 0AB4C4 8012FCC4 */  .4byte jtgt_ovl2_800E05A4
  /* 59838 0AB4C8 8012FCC8 */  .4byte jtgt_ovl2_800E05A4
  /* 5983C 0AB4CC 8012FCCC */  .4byte jtgt_ovl2_800E05A4
  /* 59840 0AB4D0 8012FCD0 */  .4byte jtgt_ovl2_800E05A4
  /* 59844 0AB4D4 8012FCD4 */  .4byte jtgt_ovl2_800E05A4
  /* 59848 0AB4D8 8012FCD8 */  .4byte jtgt_ovl2_800E05A4
  /* 5984C 0AB4DC 8012FCDC */  .4byte jtgt_ovl2_800E05A4
  /* 59850 0AB4E0 8012FCE0 */  .4byte jtgt_ovl2_800E05A4
  /* 59854 0AB4E4 8012FCE4 */  .4byte jtgt_ovl2_800E05A4
  /* 59858 0AB4E8 8012FCE8 */  .4byte jtgt_ovl2_800E0580
  /* 5985C 0AB4EC 8012FCEC */  .4byte jtgt_ovl2_800E0580
  /* 59860 0AB4F0 8012FCF0 */  .4byte jtgt_ovl2_800E05A4
  /* 59864 0AB4F4 8012FCF4 */  .4byte jtgt_ovl2_800E05A4
  /* 59868 0AB4F8 8012FCF8 */  .4byte jtgt_ovl2_800E05A4
  /* 5986C 0AB4FC 8012FCFC */  .4byte jtgt_ovl2_800E05A4
  /* 59870 0AB500 8012FD00 */  .4byte jtgt_ovl2_800E0574
  /* 59874 0AB504 8012FD04 */  .4byte jtgt_ovl2_800E0574
  /* 59878 0AB508 8012FD08 */  .4byte jtgt_ovl2_800E05A4
  /* 5987C 0AB50C 8012FD0C */  .4byte jtgt_ovl2_800E05A4
  /* 59880 0AB510 8012FD10 */  .4byte jtgt_ovl2_800E05A4
  /* 59884 0AB514 8012FD14 */  .4byte jtgt_ovl2_800E0574
  /* 59888 0AB518 8012FD18 */  .4byte jtgt_ovl2_800E0574
  /* 5988C 0AB51C 8012FD1C */  .4byte jtgt_ovl2_800E0574

glabel D_ovl2_8012FD20
  /* 59890 0AB520 8012FD20 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel jtbl_ovl2_8012FD24
  /* 59894 0AB524 8012FD24 */  .4byte jtgt_ovl2_800E0754
  /* 59898 0AB528 8012FD28 */  .4byte jtgt_ovl2_800E0754
  /* 5989C 0AB52C 8012FD2C */  .4byte jtgt_ovl2_800E0754
  /* 598A0 0AB530 8012FD30 */  .4byte jtgt_ovl2_800E076C
  /* 598A4 0AB534 8012FD34 */  .4byte jtgt_ovl2_800E076C
  /* 598A8 0AB538 8012FD38 */  .4byte jtgt_ovl2_800E0790
  /* 598AC 0AB53C 8012FD3C */  .4byte jtgt_ovl2_800E0790
  /* 598B0 0AB540 8012FD40 */  .4byte jtgt_ovl2_800E0778
  /* 598B4 0AB544 8012FD44 */  .4byte jtgt_ovl2_800E0790
  /* 598B8 0AB548 8012FD48 */  .4byte jtgt_ovl2_800E0790
  /* 598BC 0AB54C 8012FD4C */  .4byte jtgt_ovl2_800E0790
  /* 598C0 0AB550 8012FD50 */  .4byte jtgt_ovl2_800E0790
  /* 598C4 0AB554 8012FD54 */  .4byte jtgt_ovl2_800E0778
  /* 598C8 0AB558 8012FD58 */  .4byte jtgt_ovl2_800E0754
  /* 598CC 0AB55C 8012FD5C */  .4byte jtgt_ovl2_800E0790
  /* 598D0 0AB560 8012FD60 */  .4byte jtgt_ovl2_800E0790
  /* 598D4 0AB564 8012FD64 */  .4byte jtgt_ovl2_800E0790
  /* 598D8 0AB568 8012FD68 */  .4byte jtgt_ovl2_800E0790
  /* 598DC 0AB56C 8012FD6C */  .4byte jtgt_ovl2_800E0790
  /* 598E0 0AB570 8012FD70 */  .4byte jtgt_ovl2_800E0790
  /* 598E4 0AB574 8012FD74 */  .4byte jtgt_ovl2_800E0790
  /* 598E8 0AB578 8012FD78 */  .4byte jtgt_ovl2_800E0790
  /* 598EC 0AB57C 8012FD7C */  .4byte jtgt_ovl2_800E0790
  /* 598F0 0AB580 8012FD80 */  .4byte jtgt_ovl2_800E0790
  /* 598F4 0AB584 8012FD84 */  .4byte jtgt_ovl2_800E0790
  /* 598F8 0AB588 8012FD88 */  .4byte jtgt_ovl2_800E0790
  /* 598FC 0AB58C 8012FD8C */  .4byte jtgt_ovl2_800E0790
  /* 59900 0AB590 8012FD90 */  .4byte jtgt_ovl2_800E0790
  /* 59904 0AB594 8012FD94 */  .4byte jtgt_ovl2_800E0790
  /* 59908 0AB598 8012FD98 */  .4byte jtgt_ovl2_800E0790
  /* 5990C 0AB59C 8012FD9C */  .4byte jtgt_ovl2_800E0790
  /* 59910 0AB5A0 8012FDA0 */  .4byte jtgt_ovl2_800E0784
  /* 59914 0AB5A4 8012FDA4 */  .4byte jtgt_ovl2_800E0754
  /* 59918 0AB5A8 8012FDA8 */  .4byte jtgt_ovl2_800E0754
  /* 5991C 0AB5AC 8012FDAC */  .4byte jtgt_ovl2_800E0754
  /* 59920 0AB5B0 8012FDB0 */  .4byte jtgt_ovl2_800E0754
  /* 59924 0AB5B4 8012FDB4 */  .4byte jtgt_ovl2_800E0754
  /* 59928 0AB5B8 8012FDB8 */  .4byte jtgt_ovl2_800E0754
  /* 5992C 0AB5BC 8012FDBC */  .4byte jtgt_ovl2_800E0754
  /* 59930 0AB5C0 8012FDC0 */  .4byte jtgt_ovl2_800E0754
  /* 59934 0AB5C4 8012FDC4 */  .4byte jtgt_ovl2_800E0790
  /* 59938 0AB5C8 8012FDC8 */  .4byte jtgt_ovl2_800E0790
  /* 5993C 0AB5CC 8012FDCC */  .4byte jtgt_ovl2_800E0790
  /* 59940 0AB5D0 8012FDD0 */  .4byte jtgt_ovl2_800E0790
  /* 59944 0AB5D4 8012FDD4 */  .4byte jtgt_ovl2_800E0790
  /* 59948 0AB5D8 8012FDD8 */  .4byte jtgt_ovl2_800E0790
  /* 5994C 0AB5DC 8012FDDC */  .4byte jtgt_ovl2_800E0778

glabel D_ovl2_8012FDE0
  /* 59950 0AB5E0 8012FDE0 */  .4byte jtgt_ovl2_800E0934
  /* 59954 0AB5E4 8012FDE4 */  .4byte jtgt_ovl2_800E097C
  /* 59958 0AB5E8 8012FDE8 */  .4byte jtgt_ovl2_800E099C
  /* 5995C 0AB5EC 8012FDEC */  .4byte jtgt_ovl2_800E09B8
  /* 59960 0AB5F0 8012FDF0 */  .4byte jtgt_ovl2_800E0A1C
  /* 59964 0AB5F4 8012FDF4 */  .4byte jtgt_ovl2_800E0A74
  /* 59968 0AB5F8 8012FDF8 */  .4byte jtgt_ovl2_800E0AB0
  /* 5996C 0AB5FC 8012FDFC */  .4byte jtgt_ovl2_800E0AD8
  /* 59970 0AB600 8012FE00 */  .4byte jtgt_ovl2_800E0B14
  /* 59974 0AB604 8012FE04 */  .4byte jtgt_ovl2_800E0B6C
  /* 59978 0AB608 8012FE08 */  .4byte jtgt_ovl2_800E0C40
  /* 5997C 0AB60C 8012FE0C */  .4byte jtgt_ovl2_800E0BD4
  /* 59980 0AB610 8012FE10 */  .4byte jtgt_ovl2_800E0D68
  /* 59984 0AB614 8012FE14 */  .4byte jtgt_ovl2_800E0E90
  /* 59988 0AB618 8012FE18 */  .4byte jtgt_ovl2_800E0E90
  /* 5998C 0AB61C 8012FE1C */  .4byte jtgt_ovl2_800E0FC4
  /* 59990 0AB620 8012FE20 */  .4byte jtgt_ovl2_800E1020
  /* 59994 0AB624 8012FE24 */  .4byte jtgt_ovl2_800E1040
  /* 59998 0AB628 8012FE28 */  .4byte jtgt_ovl2_800E107C

glabel D_ovl2_8012FE2C
  /* 5999C 0AB62C 8012FE2C */
  .4byte 0x3fd9999a # .float 1.7

glabel D_ovl2_8012FE30
  /* 599A0 0AB630 8012FE30 */
  .4byte 0x3fd9999a # .float 1.7

glabel D_ovl2_8012FE34
  /* 599A4 0AB634 8012FE34 */
  .4byte 0x3fcf5c29 # .float 1.62

glabel jtbl_ovl2_8012FE38
  /* 599A8 0AB638 8012FE38 */  .4byte jtgt_ovl2_800E3D5C
  /* 599AC 0AB63C 8012FE3C */  .4byte jtgt_ovl2_800E3D74
  /* 599B0 0AB640 8012FE40 */  .4byte jtgt_ovl2_800E3DC0
  /* 599B4 0AB644 8012FE44 */  .4byte jtgt_ovl2_800E3DC0
  /* 599B8 0AB648 8012FE48 */  .4byte jtgt_ovl2_800E3D98
  /* 599BC 0AB64C 8012FE4C */  .4byte jtgt_ovl2_800E3D98
  /* 599C0 0AB650 8012FE50 */  .4byte jtgt_ovl2_800E3D98
  /* 599C4 0AB654 8012FE54 */  .4byte jtgt_ovl2_800E3D98
  /* 599C8 0AB658 8012FE58 */  .4byte jtgt_ovl2_800E3D98
  /* 599CC 0AB65C 8012FE5C */  .4byte jtgt_ovl2_800E3D98

glabel D_ovl2_8012FE60
  /* 599D0 0AB660 8012FE60 */
  .4byte 0x40490fdb # .float 3.1415927

glabel jtbl_ovl2_8012FE64
  /* 599D4 0AB664 8012FE64 */  .4byte jtgt_ovl2_800E5C94
  /* 599D8 0AB668 8012FE68 */  .4byte jtgt_ovl2_800E5CA8
  /* 599DC 0AB66C 8012FE6C */  .4byte jtgt_ovl2_800E5CBC
  /* 599E0 0AB670 8012FE70 */  .4byte jtgt_ovl2_800E5CD0
  /* 599E4 0AB674 8012FE74 */  .4byte jtgt_ovl2_800E5CE4
  /* 599E8 0AB678 8012FE78 */  .4byte jtgt_ovl2_800E5D0C
  /* 599EC 0AB67C 8012FE7C */  .4byte jtgt_ovl2_800E5D0C
  /* 599F0 0AB680 8012FE80 */  .4byte jtgt_ovl2_800E5D0C
  /* 599F4 0AB684 8012FE84 */  .4byte jtgt_ovl2_800E5CF8

glabel D_ovl2_8012FE88
  /* 599F8 0AB688 8012FE88 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_8012FE8C
  /* 599FC 0AB68C 8012FE8C */
  .4byte 0x3f2aaaab # .float 0.6666667

glabel D_ovl2_8012FE90
  /* 59A00 0AB690 8012FE90 */
  .4byte 0x3fc90fdb # .float 1.5707964
  .incbin "ovl2.raw.bin", 0x59A04, 0xC

glabel D_ovl2_8012FEA0
  /* 59A10 0AB6A0 8012FEA0 */
  .4byte 0x3fa66666 # .float 1.3

glabel D_ovl2_8012FEA4
  /* 59A14 0AB6A4 8012FEA4 */
  .4byte 0xfeaaaaaa # .float -1.1342745e38
  .incbin "ovl2.raw.bin", 0x59A18, 0x4

glabel jtbl_ovl2_8012FEAC
  /* 59A1C 0AB6AC 8012FEAC */  .4byte jtgt_ovl2_800E996C
  /* 59A20 0AB6B0 8012FEB0 */  .4byte jtgt_ovl2_800E9994
  /* 59A24 0AB6B4 8012FEB4 */  .4byte jtgt_ovl2_800E9A60
  /* 59A28 0AB6B8 8012FEB8 */  .4byte jtgt_ovl2_800E9A60
  /* 59A2C 0AB6BC 8012FEBC */  .4byte jtgt_ovl2_800E9A60
  /* 59A30 0AB6C0 8012FEC0 */  .4byte jtgt_ovl2_800E9A60
  /* 59A34 0AB6C4 8012FEC4 */  .4byte jtgt_ovl2_800E99BC
  /* 59A38 0AB6C8 8012FEC8 */  .4byte jtgt_ovl2_800E9A60
  /* 59A3C 0AB6CC 8012FECC */  .4byte jtgt_ovl2_800E9A60
  /* 59A40 0AB6D0 8012FED0 */  .4byte jtgt_ovl2_800E9A40
  /* 59A44 0AB6D4 8012FED4 */  .4byte jtgt_ovl2_800E9A60
  /* 59A48 0AB6D8 8012FED8 */  .4byte jtgt_ovl2_800E9A60
  /* 59A4C 0AB6DC 8012FEDC */  .4byte jtgt_ovl2_800E9A60
  /* 59A50 0AB6E0 8012FEE0 */  .4byte jtgt_ovl2_800E9A60
  /* 59A54 0AB6E4 8012FEE4 */  .4byte jtgt_ovl2_800E996C
  /* 59A58 0AB6E8 8012FEE8 */  .4byte jtgt_ovl2_800E9994
  /* 59A5C 0AB6EC 8012FEEC */  .4byte jtgt_ovl2_800E9A60
  /* 59A60 0AB6F0 8012FEF0 */  .4byte jtgt_ovl2_800E9A60
  /* 59A64 0AB6F4 8012FEF4 */  .4byte jtgt_ovl2_800E9A60
  /* 59A68 0AB6F8 8012FEF8 */  .4byte jtgt_ovl2_800E9A60
  /* 59A6C 0AB6FC 8012FEFC */  .4byte jtgt_ovl2_800E9A60
  /* 59A70 0AB700 8012FF00 */  .4byte jtgt_ovl2_800E9A60
  /* 59A74 0AB704 8012FF04 */  .4byte jtgt_ovl2_800E9A60
  /* 59A78 0AB708 8012FF08 */  .4byte jtgt_ovl2_800E9A40
  /* 59A7C 0AB70C 8012FF0C */  .4byte jtgt_ovl2_800E996C

glabel D_ovl2_8012FF10
  /* 59A80 0AB710 8012FF10 */
  .4byte 0x3c23d70a # .float 0.01

glabel D_ovl2_8012FF14
  /* 59A84 0AB714 8012FF14 */
  .4byte 0x3d4ccccd # .float 0.05

glabel D_ovl2_8012FF18
  /* 59A88 0AB718 8012FF18 */
  .4byte 0x3fb33333 # .float 1.4

glabel D_ovl2_8012FF1C
  /* 59A8C 0AB71C 8012FF1C */
  .4byte 0x3c23d70a # .float 0.01

glabel D_ovl2_8012FF20
  /* 59A90 0AB720 8012FF20 */
  .4byte 0x3d4ccccd # .float 0.05

glabel D_ovl2_8012FF24
  /* 59A94 0AB724 8012FF24 */
  .4byte 0x3dcccccd # .float 0.1

glabel D_ovl2_8012FF28
  /* 59A98 0AB728 8012FF28 */
  .4byte 0x3fb33333 # .float 1.4

glabel D_ovl2_8012FF2C
  /* 59A9C 0AB72C 8012FF2C */
  .4byte 0x451c4000 # .float 2500.0

glabel D_ovl2_8012FF30
  /* 59AA0 0AB730 8012FF30 */
  .4byte 0x3d4ccccd # .float 0.05

glabel D_ovl2_8012FF34
  /* 59AA4 0AB734 8012FF34 */
  .4byte 0x3fb33333 # .float 1.4

glabel D_ovl2_8012FF38
  /* 59AA8 0AB738 8012FF38 */
  .4byte 0x3c23d70a # .float 0.01

glabel D_ovl2_8012FF3C
  /* 59AAC 0AB73C 8012FF3C */
  .4byte 0x3d4ccccd # .float 0.05

glabel D_ovl2_8012FF40
  /* 59AB0 0AB740 8012FF40 */
  .4byte 0x3dcccccd # .float 0.1

glabel D_ovl2_8012FF44
  /* 59AB4 0AB744 8012FF44 */
  .4byte 0x3fb33333 # .float 1.4

glabel D_ovl2_8012FF48
  /* 59AB8 0AB748 8012FF48 */
  .4byte 0x3c23d70a # .float 0.01

glabel D_ovl2_8012FF4C
  /* 59ABC 0AB74C 8012FF4C */
  .4byte 0x451c4000 # .float 2500.0

glabel D_ovl2_8012FF50
  /* 59AC0 0AB750 8012FF50 */
  .4byte 0x3eaaaaab # .float 0.33333334

glabel D_ovl2_8012FF54
  /* 59AC4 0AB754 8012FF54 */
  .4byte 0x3f2aaaab # .float 0.6666667

glabel D_ovl2_8012FF58
  /* 59AC8 0AB758 8012FF58 */
  .4byte 0x3f7fbe77 # .float 0.999

glabel D_ovl2_8012FF5C
  /* 59ACC 0AB75C 8012FF5C */
  .4byte 0x3f7fbe77 # .float 0.999

glabel D_ovl2_8012FF60
  /* 59AD0 0AB760 8012FF60 */
  .4byte 0x3f7fbe77 # .float 0.999

glabel jtbl_ovl2_8012FF64
  /* 59AD4 0AB764 8012FF64 */  .4byte jtgt_ovl2_800EAEBC
  /* 59AD8 0AB768 8012FF68 */  .4byte jtgt_ovl2_800EB388
  /* 59ADC 0AB76C 8012FF6C */  .4byte jtgt_ovl2_800EB388
  /* 59AE0 0AB770 8012FF70 */  .4byte jtgt_ovl2_800EB388
  /* 59AE4 0AB774 8012FF74 */  .4byte jtgt_ovl2_800EB388
  /* 59AE8 0AB778 8012FF78 */  .4byte jtgt_ovl2_800EB388
  /* 59AEC 0AB77C 8012FF7C */  .4byte jtgt_ovl2_800EAEE8
  /* 59AF0 0AB780 8012FF80 */  .4byte jtgt_ovl2_800EAF08
  /* 59AF4 0AB784 8012FF84 */  .4byte jtgt_ovl2_800EAF24
  /* 59AF8 0AB788 8012FF88 */  .4byte jtgt_ovl2_800EB388
  /* 59AFC 0AB78C 8012FF8C */  .4byte jtgt_ovl2_800EAF40
  /* 59B00 0AB790 8012FF90 */  .4byte jtgt_ovl2_800EAF5C
  /* 59B04 0AB794 8012FF94 */  .4byte jtgt_ovl2_800EAF74
  /* 59B08 0AB798 8012FF98 */  .4byte jtgt_ovl2_800EAF8C
  /* 59B0C 0AB79C 8012FF9C */  .4byte jtgt_ovl2_800EAFA4
  /* 59B10 0AB7A0 8012FFA0 */  .4byte jtgt_ovl2_800EAFC0
  /* 59B14 0AB7A4 8012FFA4 */  .4byte jtgt_ovl2_800EAFD4
  /* 59B18 0AB7A8 8012FFA8 */  .4byte jtgt_ovl2_800EAFEC
  /* 59B1C 0AB7AC 8012FFAC */  .4byte jtgt_ovl2_800EB050
  /* 59B20 0AB7B0 8012FFB0 */  .4byte jtgt_ovl2_800EB064
  /* 59B24 0AB7B4 8012FFB4 */  .4byte jtgt_ovl2_800EB07C
  /* 59B28 0AB7B8 8012FFB8 */  .4byte jtgt_ovl2_800EB094
  /* 59B2C 0AB7BC 8012FFBC */  .4byte jtgt_ovl2_800EB0A4
  /* 59B30 0AB7C0 8012FFC0 */  .4byte jtgt_ovl2_800EB108
  /* 59B34 0AB7C4 8012FFC4 */  .4byte jtgt_ovl2_800EB120
  /* 59B38 0AB7C8 8012FFC8 */  .4byte jtgt_ovl2_800EB134
  /* 59B3C 0AB7CC 8012FFCC */  .4byte jtgt_ovl2_800EB14C
  /* 59B40 0AB7D0 8012FFD0 */  .4byte jtgt_ovl2_800EB160
  /* 59B44 0AB7D4 8012FFD4 */  .4byte jtgt_ovl2_800EB178
  /* 59B48 0AB7D8 8012FFD8 */  .4byte jtgt_ovl2_800EB188
  /* 59B4C 0AB7DC 8012FFDC */  .4byte jtgt_ovl2_800EB198
  /* 59B50 0AB7E0 8012FFE0 */  .4byte jtgt_ovl2_800EB1A8
  /* 59B54 0AB7E4 8012FFE4 */  .4byte jtgt_ovl2_800EB1BC
  /* 59B58 0AB7E8 8012FFE8 */  .4byte jtgt_ovl2_800EB1E0
  /* 59B5C 0AB7EC 8012FFEC */  .4byte jtgt_ovl2_800EB204
  /* 59B60 0AB7F0 8012FFF0 */  .4byte jtgt_ovl2_800EB388
  /* 59B64 0AB7F4 8012FFF4 */  .4byte jtgt_ovl2_800EB388
  /* 59B68 0AB7F8 8012FFF8 */  .4byte jtgt_ovl2_800EB378
  /* 59B6C 0AB7FC 8012FFFC */  .4byte jtgt_ovl2_800EB388
  /* 59B70 0AB800 80130000 */  .4byte jtgt_ovl2_800EB388
  /* 59B74 0AB804 80130004 */  .4byte jtgt_ovl2_800EB268
  /* 59B78 0AB808 80130008 */  .4byte jtgt_ovl2_800EB228
  /* 59B7C 0AB80C 8013000C */  .4byte jtgt_ovl2_800EB238
  /* 59B80 0AB810 80130010 */  .4byte jtgt_ovl2_800EB248
  /* 59B84 0AB814 80130014 */  .4byte jtgt_ovl2_800EB258
  /* 59B88 0AB818 80130018 */  .4byte jtgt_ovl2_800EB388
  /* 59B8C 0AB81C 8013001C */  .4byte jtgt_ovl2_800EB314
  /* 59B90 0AB820 80130020 */  .4byte jtgt_ovl2_800EB288
  /* 59B94 0AB824 80130024 */  .4byte jtgt_ovl2_800EB388
  /* 59B98 0AB828 80130028 */  .4byte jtgt_ovl2_800EB388
  /* 59B9C 0AB82C 8013002C */  .4byte jtgt_ovl2_800EB388
  /* 59BA0 0AB830 80130030 */  .4byte jtgt_ovl2_800EB388
  /* 59BA4 0AB834 80130034 */  .4byte jtgt_ovl2_800EB388
  /* 59BA8 0AB838 80130038 */  .4byte jtgt_ovl2_800EB388
  /* 59BAC 0AB83C 8013003C */  .4byte jtgt_ovl2_800EB278
  /* 59BB0 0AB840 80130040 */  .4byte jtgt_ovl2_800EB388
  /* 59BB4 0AB844 80130044 */  .4byte jtgt_ovl2_800EB388
  /* 59BB8 0AB848 80130048 */  .4byte jtgt_ovl2_800EB388
  /* 59BBC 0AB84C 8013004C */  .4byte jtgt_ovl2_800EB388
  /* 59BC0 0AB850 80130050 */  .4byte jtgt_ovl2_800EB388
  /* 59BC4 0AB854 80130054 */  .4byte jtgt_ovl2_800EB388
  /* 59BC8 0AB858 80130058 */  .4byte jtgt_ovl2_800EB388
  /* 59BCC 0AB85C 8013005C */  .4byte jtgt_ovl2_800EB388
  /* 59BD0 0AB860 80130060 */  .4byte jtgt_ovl2_800EB388
  /* 59BD4 0AB864 80130064 */  .4byte jtgt_ovl2_800EB388
  /* 59BD8 0AB868 80130068 */  .4byte jtgt_ovl2_800EB388
  /* 59BDC 0AB86C 8013006C */  .4byte jtgt_ovl2_800EB388
  /* 59BE0 0AB870 80130070 */  .4byte jtgt_ovl2_800EB388
  /* 59BE4 0AB874 80130074 */  .4byte jtgt_ovl2_800EB388
  /* 59BE8 0AB878 80130078 */  .4byte jtgt_ovl2_800EB388
  /* 59BEC 0AB87C 8013007C */  .4byte jtgt_ovl2_800EB2C4
  /* 59BF0 0AB880 80130080 */  .4byte jtgt_ovl2_800EB2D4
  /* 59BF4 0AB884 80130084 */  .4byte jtgt_ovl2_800EB388
  /* 59BF8 0AB888 80130088 */  .4byte jtgt_ovl2_800EB29C
  /* 59BFC 0AB88C 8013008C */  .4byte jtgt_ovl2_800EB304
  /* 59C00 0AB890 80130090 */  .4byte jtgt_ovl2_800EB388
  /* 59C04 0AB894 80130094 */  .4byte jtgt_ovl2_800EB2E4
  /* 59C08 0AB898 80130098 */  .4byte jtgt_ovl2_800EB2F4
  /* 59C0C 0AB89C 8013009C */  .4byte jtgt_ovl2_800EB388
  /* 59C10 0AB8A0 801300A0 */  .4byte jtgt_ovl2_800EB388
  /* 59C14 0AB8A4 801300A4 */  .4byte jtgt_ovl2_800EB388
  /* 59C18 0AB8A8 801300A8 */  .4byte jtgt_ovl2_800EB388
  /* 59C1C 0AB8AC 801300AC */  .4byte jtgt_ovl2_800EB388
  /* 59C20 0AB8B0 801300B0 */  .4byte jtgt_ovl2_800EB388
  /* 59C24 0AB8B4 801300B4 */  .4byte jtgt_ovl2_800EB388
  /* 59C28 0AB8B8 801300B8 */  .4byte jtgt_ovl2_800EB388
  /* 59C2C 0AB8BC 801300BC */  .4byte jtgt_ovl2_800EB388
  /* 59C30 0AB8C0 801300C0 */  .4byte jtgt_ovl2_800EB350
  /* 59C34 0AB8C4 801300C4 */  .4byte jtgt_ovl2_800EB388
  /* 59C38 0AB8C8 801300C8 */  .4byte jtgt_ovl2_800EB388
  /* 59C3C 0AB8CC 801300CC */  .4byte jtgt_ovl2_800EB328
  /* 59C40 0AB8D0 801300D0 */  .4byte jtgt_ovl2_800EB33C

glabel D_ovl2_801300D4
  /* 59C44 0AB8D4 801300D4 */
  .4byte 0x3dcccccd # .float 0.1

glabel D_ovl2_801300D8
  /* 59C48 0AB8D8 801300D8 */
  .4byte 0xbdcccccd # .float -0.1

glabel D_ovl2_801300DC
  /* 59C4C 0AB8DC 801300DC */
  .4byte 0x39d1b717 # .float 0.0004

glabel D_ovl2_801300E0
  /* 59C50 0AB8E0 801300E0 */
  .4byte 0x39d1b717 # .float 0.0004

glabel D_ovl2_801300E4
  /* 59C54 0AB8E4 801300E4 */
  .4byte 0x322bcc77 # .float 1e-8

glabel D_ovl2_801300E8
  /* 59C58 0AB8E8 801300E8 */
  .4byte 0x322bcc77 # .float 1e-8

glabel D_ovl2_801300EC
  /* 59C5C 0AB8EC 801300EC */
  .4byte 0x3fc90fdb # .float 1.5707964
  .incbin "ovl2.raw.bin", 0x59C60, 0x10

glabel jtbl_ovl2_80130100
  /* 59C70 0AB900 80130100 */  .4byte jtgt_ovl2_800EC1E0
  /* 59C74 0AB904 80130104 */  .4byte jtgt_ovl2_800EC1E0
  /* 59C78 0AB908 80130108 */  .4byte jtgt_ovl2_800EC1E0
  /* 59C7C 0AB90C 8013010C */  .4byte jtgt_ovl2_800EC200
  /* 59C80 0AB910 80130110 */  .4byte jtgt_ovl2_800EC1E8
  /* 59C84 0AB914 80130114 */  .4byte jtgt_ovl2_800EC1E8
  /* 59C88 0AB918 80130118 */  .4byte jtgt_ovl2_800EC1E8
  /* 59C8C 0AB91C 8013011C */  .4byte jtgt_ovl2_800EC1F4
  /* 59C90 0AB920 80130120 */  .4byte jtgt_ovl2_800EC1F4
  /* 59C94 0AB924 80130124 */  .4byte jtgt_ovl2_800EC1F4

glabel D_ovl2_80130128
  /* 59C98 0AB928 80130128 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl2_8013012C
  /* 59C9C 0AB92C 8013012C */
  .4byte 0xfeffffff # .float -1.7014117e38

glabel D_ovl2_80130130
  /* 59CA0 0AB930 80130130 */
  .4byte 0xfeaaaaaa # .float -1.1342745e38

glabel jtbl_ovl2_80130134
  /* 59CA4 0AB934 80130134 */  .4byte jtgt_ovl2_800ECB68
  /* 59CA8 0AB938 80130138 */  .4byte jtgt_ovl2_800EC86C
  /* 59CAC 0AB93C 8013013C */  .4byte jtgt_ovl2_800EC538
  /* 59CB0 0AB940 80130140 */  .4byte jtgt_ovl2_800EC538
  /* 59CB4 0AB944 80130144 */  .4byte jtgt_ovl2_800EC674
  /* 59CB8 0AB948 80130148 */  .4byte jtgt_ovl2_800EC674
  /* 59CBC 0AB94C 8013014C */  .4byte jtgt_ovl2_800EC7D0
  /* 59CC0 0AB950 80130150 */  .4byte jtgt_ovl2_800EC3FC
  /* 59CC4 0AB954 80130154 */  .4byte jtgt_ovl2_800EC3FC
  /* 59CC8 0AB958 80130158 */  .4byte jtgt_ovl2_800EC8BC
  /* 59CCC 0AB95C 8013015C */  .4byte jtgt_ovl2_800EC8BC
  /* 59CD0 0AB960 80130160 */  .4byte jtgt_ovl2_800ECA54
  /* 59CD4 0AB964 80130164 */  .4byte jtgt_ovl2_800ECB08
  /* 59CD8 0AB968 80130168 */  .4byte jtgt_ovl2_800EC9E0
  /* 59CDC 0AB96C 8013016C */  .4byte jtgt_ovl2_800ECBF0

glabel D_ovl2_80130170
  /* 59CE0 0AB970 80130170 */
  .4byte 0xfeaaaaaa # .float -1.1342745e38
  .incbin "ovl2.raw.bin", 0x59CE4, 0xC

glabel D_ovl2_80130180
  /* 59CF0 0AB980 80130180 */
  .asciz "zero div x in gcSetMatrixNcs()\n"
  .balign 4

glabel D_ovl2_801301A0
  /* 59D10 0AB9A0 801301A0 */
  .asciz "zero div y in gcSetMatrixNcs()\n"
  .balign 4

glabel D_ovl2_801301C0
  /* 59D30 0AB9C0 801301C0 */
  .asciz "zero div z in gcSetMatrixNcs()\n"
  .balign 4

glabel D_ovl2_801301E0
  /* 59D50 0AB9E0 801301E0 */
  .asciz "zero div in gcSetInvMatrix()\n"
  .balign 4

glabel D_ovl2_80130200
  /* 59D70 0ABA00 80130200 */
  .asciz "zero div 1 in gcColSphere()\n"
  .balign 4

glabel D_ovl2_80130220
  /* 59D90 0ABA20 80130220 */
  .asciz "zero div 2 in gcColSphere()\n"
  .balign 4

glabel D_ovl2_80130240
  /* 59DB0 0ABA40 80130240 */
  .4byte 0x3fc90fdb # .float 1.5707964
  .incbin "ovl2.raw.bin", 0x59DB4, 0x4

glabel D_ovl2_80130248
  /* 59DB8 0ABA48 80130248 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_8013024C
  /* 59DBC 0ABA4C 8013024C */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_80130250
  /* 59DC0 0ABA50 80130250 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_80130254
  /* 59DC4 0ABA54 80130254 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_80130258
  /* 59DC8 0ABA58 80130258 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_8013025C
  /* 59DCC 0ABA5C 8013025C */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_80130260
  /* 59DD0 0ABA60 80130260 */
  .4byte 0x3f060a92 # .float 0.5235988

glabel D_ovl2_80130264
  /* 59DD4 0ABA64 80130264 */
  .4byte 0x3f060a92 # .float 0.5235988

glabel D_ovl2_80130268
  /* 59DD8 0ABA68 80130268 */
  .4byte 0x40490fdb # .float 3.1415927
  .incbin "ovl2.raw.bin", 0x59DDC, 0x4

glabel D_ovl2_80130270
  /* 59DE0 0ABA70 80130270 */
  .asciz "mpGetUUCommon() id = %d\n"
  .balign 4

glabel D_ovl2_8013028C
  /* 59DFC 0ABA8C 8013028C */
  .asciz "mpGetUUCommon() no collsion\n"
  .balign 4

glabel D_ovl2_801302AC
  /* 59E1C 0ABAAC 801302AC */
  .asciz "same vtx x error mpGetUUCommon\n"
  .balign 4

glabel D_ovl2_801302CC
  /* 59E3C 0ABACC 801302CC */
  .asciz "mpGetLRCommon() id = %d\n"
  .balign 4

glabel D_ovl2_801302E8
  /* 59E58 0ABAE8 801302E8 */
  .asciz "mpGetLRCommon() no collision\n"
  .balign 4

glabel D_ovl2_80130308
  /* 59E78 0ABB08 80130308 */
  .asciz "same vtx y error mpGetLRCommon\n"
  .balign 4

glabel D_ovl2_80130328
  /* 59E98 0ABB28 80130328 */
  .asciz "mpGetLREdge() id = %d\n"
  .balign 4

glabel D_ovl2_80130340
  /* 59EB0 0ABB40 80130340 */
  .asciz "mpGetLREdge() no collision\n"
  .balign 4

glabel D_ovl2_8013035C
  /* 59ECC 0ABB5C 8013035C */
  .asciz "mpGetUDEdge() id = %d\n"
  .balign 4

glabel D_ovl2_80130374
  /* 59EE4 0ABB74 80130374 */
  .asciz "mpGetUDEdge() no collision\n"
  .balign 4

glabel D_ovl2_80130390
  /* 59F00 0ABB90 80130390 */
  .asciz "mpGetNbVertex() id = %d\n"
  .balign 4

glabel D_ovl2_801303AC
  /* 59F1C 0ABBAC 801303AC */
  .asciz "mpGetNbVertex() no collision\n"
  .balign 4

glabel D_ovl2_801303CC
  /* 59F3C 0ABBCC 801303CC */
  .asciz "mpGetVertex() id = %d\n"
  .balign 4

glabel D_ovl2_801303E4
  /* 59F54 0ABBE4 801303E4 */
  .asciz "mpGetVertex() no collision\n"
  .balign 4

glabel D_ovl2_80130400
  /* 59F70 0ABC00 80130400 */
  .asciz "mpGetSpeedId() id = %d\n"
  .balign 4

glabel D_ovl2_80130418
  /* 59F88 0ABC18 80130418 */
  .asciz "mpGetSpeedId() no collision\n"
  .balign 4

glabel D_ovl2_80130438
  /* 59FA8 0ABC38 80130438 */
  .asciz "mpGetKindId() id = %d\n"
  .balign 4

glabel D_ovl2_80130450
  /* 59FC0 0ABC50 80130450 */
  .asciz "mpGetKindId() no collision\n"
  .balign 4

glabel D_ovl2_8013046C
  /* 59FDC 0ABC6C 8013046C */
  .asciz "mpGetEdgeUnderRId() id = %d\n"
  .balign 4

glabel D_ovl2_8013048C
  /* 59FFC 0ABC8C 8013048C */
  .asciz "mpGetEdgeUnderRId() no collision\n"
  .balign 4

glabel D_ovl2_801304B0
  /* 5A020 0ABCB0 801304B0 */
  .asciz "mpGetEdgeUnderLId() id = %d\n"
  .balign 4

glabel D_ovl2_801304D0
  /* 5A040 0ABCD0 801304D0 */
  .asciz "mpGetEdgeUnderLId() no collision\n"
  .balign 4

glabel D_ovl2_801304F4
  /* 5A064 0ABCF4 801304F4 */
  .asciz "mpGetEdgeUpperRId() id = %d\n"
  .balign 4

glabel D_ovl2_80130514
  /* 5A084 0ABD14 80130514 */
  .asciz "mpGetEdgeUpperRId() no collision\n"
  .balign 4

glabel D_ovl2_80130538
  /* 5A0A8 0ABD38 80130538 */
  .asciz "mpGetEdgeUpperLId() id = %d\n"
  .balign 4

glabel D_ovl2_80130558
  /* 5A0C8 0ABD58 80130558 */
  .asciz "mpGetEdgeUpperLId() no collision\n"
  .balign 4

glabel D_ovl2_8013057C
  /* 5A0EC 0ABD7C 8013057C */
  .asciz "mpGetEdgeRightUId() id = %d\n"
  .balign 4

glabel D_ovl2_8013059C
  /* 5A10C 0ABD9C 8013059C */
  .asciz "mpGetEdgeRightUId() no collision\n"
  .balign 4

glabel D_ovl2_801305C0
  /* 5A130 0ABDC0 801305C0 */
  .asciz "mpGetEdgeRightDId() id = %d\n"
  .balign 4

glabel D_ovl2_801305E0
  /* 5A150 0ABDE0 801305E0 */
  .asciz "mpGetEdgeRightDId() no collision\n"
  .balign 4

glabel D_ovl2_80130604
  /* 5A174 0ABE04 80130604 */
  .asciz "mpGetEdgeLeftUId() id = %d\n"
  .balign 4

glabel D_ovl2_80130620
  /* 5A190 0ABE20 80130620 */
  .asciz "mpGetEdgeLeftUId() no collision\n"
  .balign 4

glabel D_ovl2_80130644
  /* 5A1B4 0ABE44 80130644 */
  .asciz "mpGetEdgeLeftDId() id = %d\n"
  .balign 4

glabel D_ovl2_80130660
  /* 5A1D0 0ABE60 80130660 */
  .asciz "mpGetEdgeLeftDId() no collision\n"
  .balign 4

glabel D_ovl2_80130684
  /* 5A1F4 0ABE84 80130684 */
  .asciz "not found cll data!\n"
  .balign 4

glabel D_ovl2_8013069C
  /* 5A20C 0ABE9C 8013069C */
  .asciz "mpSetYakumonoPosId() id = %d\n"
  .balign 4

glabel D_ovl2_801306BC
  /* 5A22C 0ABEBC 801306BC */
  .asciz "mpSetYakumonoOnId() id = %d\n"
  .balign 4

glabel D_ovl2_801306DC
  /* 5A24C 0ABEDC 801306DC */
  .asciz "mpSetYakumonoOffId() id = %d\n"
  .balign 4

glabel D_ovl2_801306FC
  /* 5A26C 0ABEFC 801306FC */
  .asciz "mpGetExistCollisionId() id = %d\n"
  .balign 4

glabel D_ovl2_80130720
  /* 5A290 0ABF20 80130720 */
  .asciz "mpSetDObjNoId() id = %d\n"
  .balign 4

glabel D_ovl2_8013073C
  /* 5A2AC 0ABF3C 8013073C */
  .asciz "mpGetCllFloatId() id = %d\n"
  .balign 4

glabel D_ovl2_80130758
  /* 5A2C8 0ABF58 80130758 */
  .asciz "mpGetAttrId() id = %d\n"
  .balign 4

glabel D_ovl2_80130770
  /* 5A2E0 0ABF70 80130770 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130774
  /* 5A2E4 0ABF74 80130774 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130778
  /* 5A2E8 0ABF78 80130778 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_8013077C
  /* 5A2EC 0ABF7C 8013077C */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130780
  /* 5A2F0 0ABF80 80130780 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130784
  /* 5A2F4 0ABF84 80130784 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130788
  /* 5A2F8 0ABF88 80130788 */
  .4byte 0xba83126f # .float -0.001

glabel D_ovl2_8013078C
  /* 5A2FC 0ABF8C 8013078C */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130790
  /* 5A300 0ABF90 80130790 */
  .4byte 0xba83126f # .float -0.001

glabel D_ovl2_80130794
  /* 5A304 0ABF94 80130794 */
  .4byte 0xba83126f # .float -0.001

glabel D_ovl2_80130798
  /* 5A308 0ABF98 80130798 */
  .4byte 0x3f8020c5 # .float 1.001

glabel D_ovl2_8013079C
  /* 5A30C 0ABF9C 8013079C */
  .4byte 0xba83126f # .float -0.001

glabel D_ovl2_801307A0
  /* 5A310 0ABFA0 801307A0 */
  .4byte 0x3f8020c5 # .float 1.001

glabel D_ovl2_801307A4
  /* 5A314 0ABFA4 801307A4 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_801307A8
  /* 5A318 0ABFA8 801307A8 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801307AC
  /* 5A31C 0ABFAC 801307AC */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801307B0
  /* 5A320 0ABFB0 801307B0 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801307B4
  /* 5A324 0ABFB4 801307B4 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801307B8
  /* 5A328 0ABFB8 801307B8 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_801307BC
  /* 5A32C 0ABFBC 801307BC */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_801307C0
  /* 5A330 0ABFC0 801307C0 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801307C4
  /* 5A334 0ABFC4 801307C4 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801307C8
  /* 5A338 0ABFC8 801307C8 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801307CC
  /* 5A33C 0ABFCC 801307CC */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_801307D0
  /* 5A340 0ABFD0 801307D0 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801307D4
  /* 5A344 0ABFD4 801307D4 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801307D8
  /* 5A348 0ABFD8 801307D8 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801307DC
  /* 5A34C 0ABFDC 801307DC */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801307E0
  /* 5A350 0ABFE0 801307E0 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801307E4
  /* 5A354 0ABFE4 801307E4 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801307E8
  /* 5A358 0ABFE8 801307E8 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801307EC
  /* 5A35C 0ABFEC 801307EC */
  .4byte 0xba83126f # .float -0.001

glabel D_ovl2_801307F0
  /* 5A360 0ABFF0 801307F0 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801307F4
  /* 5A364 0ABFF4 801307F4 */
  .4byte 0xba83126f # .float -0.001

glabel D_ovl2_801307F8
  /* 5A368 0ABFF8 801307F8 */
  .4byte 0x3f8020c5 # .float 1.001

glabel D_ovl2_801307FC
  /* 5A36C 0ABFFC 801307FC */
  .4byte 0xba83126f # .float -0.001

glabel D_ovl2_80130800
  /* 5A370 0AC000 80130800 */
  .4byte 0x3f8020c5 # .float 1.001

glabel D_ovl2_80130804
  /* 5A374 0AC004 80130804 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_80130808
  /* 5A378 0AC008 80130808 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_8013080C
  /* 5A37C 0AC00C 8013080C */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130810
  /* 5A380 0AC010 80130810 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130814
  /* 5A384 0AC014 80130814 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130818
  /* 5A388 0AC018 80130818 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_8013081C
  /* 5A38C 0AC01C 8013081C */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_80130820
  /* 5A390 0AC020 80130820 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130824
  /* 5A394 0AC024 80130824 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130828
  /* 5A398 0AC028 80130828 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_8013082C
  /* 5A39C 0AC02C 8013082C */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_80130830
  /* 5A3A0 0AC030 80130830 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_80130834
  /* 5A3A4 0AC034 80130834 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130838
  /* 5A3A8 0AC038 80130838 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_8013083C
  /* 5A3AC 0AC03C 8013083C */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130840
  /* 5A3B0 0AC040 80130840 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130844
  /* 5A3B4 0AC044 80130844 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_80130848
  /* 5A3B8 0AC048 80130848 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_8013084C
  /* 5A3BC 0AC04C 8013084C */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130850
  /* 5A3C0 0AC050 80130850 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130854
  /* 5A3C4 0AC054 80130854 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130858
  /* 5A3C8 0AC058 80130858 */
  .4byte 0xba83126f # .float -0.001

glabel D_ovl2_8013085C
  /* 5A3CC 0AC05C 8013085C */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130860
  /* 5A3D0 0AC060 80130860 */
  .4byte 0xba83126f # .float -0.001

glabel D_ovl2_80130864
  /* 5A3D4 0AC064 80130864 */
  .4byte 0xba83126f # .float -0.001

glabel D_ovl2_80130868
  /* 5A3D8 0AC068 80130868 */
  .4byte 0x3f8020c5 # .float 1.001

glabel D_ovl2_8013086C
  /* 5A3DC 0AC06C 8013086C */
  .4byte 0xba83126f # .float -0.001

glabel D_ovl2_80130870
  /* 5A3E0 0AC070 80130870 */
  .4byte 0x3f8020c5 # .float 1.001

glabel D_ovl2_80130874
  /* 5A3E4 0AC074 80130874 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_80130878
  /* 5A3E8 0AC078 80130878 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_8013087C
  /* 5A3EC 0AC07C 8013087C */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130880
  /* 5A3F0 0AC080 80130880 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130884
  /* 5A3F4 0AC084 80130884 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_80130888
  /* 5A3F8 0AC088 80130888 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_8013088C
  /* 5A3FC 0AC08C 8013088C */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130890
  /* 5A400 0AC090 80130890 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_80130894
  /* 5A404 0AC094 80130894 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_80130898
  /* 5A408 0AC098 80130898 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_8013089C
  /* 5A40C 0AC09C 8013089C */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801308A0
  /* 5A410 0AC0A0 801308A0 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801308A4
  /* 5A414 0AC0A4 801308A4 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_801308A8
  /* 5A418 0AC0A8 801308A8 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801308AC
  /* 5A41C 0AC0AC 801308AC */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801308B0
  /* 5A420 0AC0B0 801308B0 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801308B4
  /* 5A424 0AC0B4 801308B4 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801308B8
  /* 5A428 0AC0B8 801308B8 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801308BC
  /* 5A42C 0AC0BC 801308BC */
  .4byte 0xba83126f # .float -0.001

glabel D_ovl2_801308C0
  /* 5A430 0AC0C0 801308C0 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801308C4
  /* 5A434 0AC0C4 801308C4 */
  .4byte 0xba83126f # .float -0.001

glabel D_ovl2_801308C8
  /* 5A438 0AC0C8 801308C8 */
  .4byte 0x3f8020c5 # .float 1.001

glabel D_ovl2_801308CC
  /* 5A43C 0AC0CC 801308CC */
  .4byte 0xba83126f # .float -0.001

glabel D_ovl2_801308D0
  /* 5A440 0AC0D0 801308D0 */
  .4byte 0x3f8020c5 # .float 1.001

glabel D_ovl2_801308D4
  /* 5A444 0AC0D4 801308D4 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_801308D8
  /* 5A448 0AC0D8 801308D8 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801308DC
  /* 5A44C 0AC0DC 801308DC */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801308E0
  /* 5A450 0AC0E0 801308E0 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801308E4
  /* 5A454 0AC0E4 801308E4 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_801308E8
  /* 5A458 0AC0E8 801308E8 */
  .4byte 0x3a83126f # .float 0.001

glabel D_ovl2_801308EC
  /* 5A45C 0AC0EC 801308EC */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_801308F0
  /* 5A460 0AC0F0 801308F0 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_801308F4
  /* 5A464 0AC0F4 801308F4 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_801308F8
  /* 5A468 0AC0F8 801308F8 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_801308FC
  /* 5A46C 0AC0FC 801308FC */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_80130900
  /* 5A470 0AC100 80130900 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_80130904
  /* 5A474 0AC104 80130904 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl2_80130908
  /* 5A478 0AC108 80130908 */
  .4byte 0x7f7fffff # .float 3.4028235e38
  .incbin "ovl2.raw.bin", 0x5A47C, 0x4

glabel D_ovl2_80130910
  /* 5A480 0AC110 80130910 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_80130914
  /* 5A484 0AC114 80130914 */
  .4byte 0x40490fdb # .float 3.1415927
  .incbin "ovl2.raw.bin", 0x5A488, 0x8

glabel D_ovl2_80130920
  /* 5A490 0AC120 80130920 */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl2_80130924
  /* 5A494 0AC124 80130924 */
  .4byte 0xbd4ccccd # .float -0.05

glabel D_ovl2_80130928
  /* 5A498 0AC128 80130928 */
  .4byte 0x3e051eb8 # .float 0.13

glabel D_ovl2_8013092C
  /* 5A49C 0AC12C 8013092C */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl2_80130930
  /* 5A4A0 0AC130 80130930 */
  .4byte 0xbd4ccccd # .float -0.05

glabel D_ovl2_80130934
  /* 5A4A4 0AC134 80130934 */
  .4byte 0x3e19999a # .float 0.15

glabel D_ovl2_80130938
  /* 5A4A8 0AC138 80130938 */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl2_8013093C
  /* 5A4AC 0AC13C 8013093C */
  .4byte 0xbd4ccccd # .float -0.05

glabel D_ovl2_80130940
  /* 5A4B0 0AC140 80130940 */
  .4byte 0x3e19999a # .float 0.15

glabel D_ovl2_80130944
  /* 5A4B4 0AC144 80130944 */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl2_80130948
  /* 5A4B8 0AC148 80130948 */
  .4byte 0xbda3d70a # .float -0.08

glabel D_ovl2_8013094C
  /* 5A4BC 0AC14C 8013094C */
  .4byte 0x3e19999a # .float 0.15

glabel D_ovl2_80130950
  /* 5A4C0 0AC150 80130950 */
  .4byte 0xbda3d70a # .float -0.08

glabel D_ovl2_80130954
  /* 5A4C4 0AC154 80130954 */
  .4byte 0x3e3851ec # .float 0.18

glabel D_ovl2_80130958
  /* 5A4C8 0AC158 80130958 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl2_8013095C
  /* 5A4CC 0AC15C 8013095C */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl2_80130960
  /* 5A4D0 0AC160 80130960 */
  .4byte 0x3f490fdb # .float 0.7853982

glabel D_ovl2_80130964
  /* 5A4D4 0AC164 80130964 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl2_80130968
  /* 5A4D8 0AC168 80130968 */
  .4byte 0x3f490fdb # .float 0.7853982

glabel D_ovl2_8013096C
  /* 5A4DC 0AC16C 8013096C */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl2_80130970
  /* 5A4E0 0AC170 80130970 */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl2_80130974
  /* 5A4E4 0AC174 80130974 */
  .4byte 0x421d8000 # .float 39.375

glabel D_ovl2_80130978
  /* 5A4E8 0AC178 80130978 */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl2_8013097C
  /* 5A4EC 0AC17C 8013097C */
  .4byte 0x3f060a92 # .float 0.5235988

glabel D_ovl2_80130980
  /* 5A4F0 0AC180 80130980 */
  .4byte 0xbe860a92 # .float -0.2617994

glabel D_ovl2_80130984
  /* 5A4F4 0AC184 80130984 */
  .4byte 0x3de38e39 # .float 0.11111111

glabel D_ovl2_80130988
  /* 5A4F8 0AC188 80130988 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_8013098C
  /* 5A4FC 0AC18C 8013098C */
  .4byte 0x3fd9999a # .float 1.7

glabel D_ovl2_80130990
  /* 5A500 0AC190 80130990 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_80130994
  /* 5A504 0AC194 80130994 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_80130998
  /* 5A508 0AC198 80130998 */
  .4byte 0x3f860a92 # .float 1.0471976

glabel D_ovl2_8013099C
  /* 5A50C 0AC19C 8013099C */
  .4byte 0xbf060a92 # .float -0.5235988

glabel D_ovl2_801309A0
  /* 5A510 0AC1A0 801309A0 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl2_801309A4
  /* 5A514 0AC1A4 801309A4 */
  .4byte 0x4138ba2f # .float 11.545455

glabel D_ovl2_801309A8
  /* 5A518 0AC1A8 801309A8 */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl2_801309AC
  /* 5A51C 0AC1AC 801309AC */
  .4byte 0xbecccccd # .float -0.4

glabel D_ovl2_801309B0
  /* 5A520 0AC1B0 801309B0 */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl2_801309B4
  /* 5A524 0AC1B4 801309B4 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_801309B8
  /* 5A528 0AC1B8 801309B8 */
  .4byte 0x3b83126f # .float 0.004

glabel D_ovl2_801309BC
  /* 5A52C 0AC1BC 801309BC */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl2_801309C0
  /* 5A530 0AC1C0 801309C0 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_801309C4
  /* 5A534 0AC1C4 801309C4 */
  .4byte 0x3b83126f # .float 0.004

glabel D_ovl2_801309C8
  /* 5A538 0AC1C8 801309C8 */
  .4byte 0x45cb2000 # .float 6500.0

glabel D_ovl2_801309CC
  /* 5A53C 0AC1CC 801309CC */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl2_801309D0
  /* 5A540 0AC1D0 801309D0 */
  .4byte 0xbd4ccccd # .float -0.05

glabel D_ovl2_801309D4
  /* 5A544 0AC1D4 801309D4 */
  .4byte 0x3e19999a # .float 0.15

glabel D_ovl2_801309D8
  /* 5A548 0AC1D8 801309D8 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_801309DC
  /* 5A54C 0AC1DC 801309DC */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_801309E0
  /* 5A550 0AC1E0 801309E0 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_801309E4
  /* 5A554 0AC1E4 801309E4 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_801309E8
  /* 5A558 0AC1E8 801309E8 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl2_801309EC
  /* 5A55C 0AC1EC 801309EC */
  .4byte 0x3f860a92 # .float 1.0471976

glabel D_ovl2_801309F0
  /* 5A560 0AC1F0 801309F0 */
  .4byte 0xbfc90fdb # .float -1.5707964

glabel D_ovl2_801309F4
  /* 5A564 0AC1F4 801309F4 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_801309F8
  /* 5A568 0AC1F8 801309F8 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_801309FC
  /* 5A56C 0AC1FC 801309FC */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl2_80130A00
  /* 5A570 0AC200 80130A00 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl2_80130A04
  /* 5A574 0AC204 80130A04 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl2_80130A08
  /* 5A578 0AC208 80130A08 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl2_80130A0C
  /* 5A57C 0AC20C 80130A0C */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl2_80130A10
  /* 5A580 0AC210 80130A10 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl2_80130A14
  /* 5A584 0AC214 80130A14 */
  .4byte 0x3f060a92 # .float 0.5235988

glabel D_ovl2_80130A18
  /* 5A588 0AC218 80130A18 */
  .4byte 0x406a9280 # .float 3.6651917

glabel D_ovl2_80130A1C
  /* 5A58C 0AC21C 80130A1C */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_80130A20
  /* 5A590 0AC220 80130A20 */
  .4byte 0x3e32b8c3 # .float 0.17453294

glabel D_ovl2_80130A24
  /* 5A594 0AC224 80130A24 */
  .4byte 0x3e32b8c3 # .float 0.17453294

glabel D_ovl2_80130A28
  /* 5A598 0AC228 80130A28 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl2_80130A2C
  /* 5A59C 0AC22C 80130A2C */
  .4byte 0xbfc90fdb # .float -1.5707964

glabel D_ovl2_80130A30
  /* 5A5A0 0AC230 80130A30 */
  .4byte 0x3f808312 # .float 1.004

glabel D_ovl2_80130A34
  /* 5A5A4 0AC234 80130A34 */
  .4byte 0x469c4000 # .float 20000.0

glabel D_ovl2_80130A38
  /* 5A5A8 0AC238 80130A38 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_80130A3C
  /* 5A5AC 0AC23C 80130A3C */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_80130A40
  /* 5A5B0 0AC240 80130A40 */
  .4byte 0x3f808312 # .float 1.004

glabel D_ovl2_80130A44
  /* 5A5B4 0AC244 80130A44 */
  .4byte 0x3f808312 # .float 1.004

glabel D_ovl2_80130A48
  /* 5A5B8 0AC248 80130A48 */
  .4byte 0x469c4000 # .float 20000.0

glabel D_ovl2_80130A4C
  /* 5A5BC 0AC24C 80130A4C */
  .4byte 0x461c4000 # .float 10000.0

glabel jtbl_ovl2_80130A50
  /* 5A5C0 0AC250 80130A50 */  .4byte jtgt_ovl2_80104C64
  /* 5A5C4 0AC254 80130A54 */  .4byte jtgt_ovl2_80104C9C
  /* 5A5C8 0AC258 80130A58 */  .4byte jtgt_ovl2_80104C9C
  /* 5A5CC 0AC25C 80130A5C */  .4byte jtgt_ovl2_80104C9C
  /* 5A5D0 0AC260 80130A60 */  .4byte jtgt_ovl2_80104C54
  /* 5A5D4 0AC264 80130A64 */  .4byte jtgt_ovl2_80104C9C
  /* 5A5D8 0AC268 80130A68 */  .4byte jtgt_ovl2_80104C9C
  /* 5A5DC 0AC26C 80130A6C */  .4byte jtgt_ovl2_80104C9C
  /* 5A5E0 0AC270 80130A70 */  .4byte jtgt_ovl2_80104C9C
  /* 5A5E4 0AC274 80130A74 */  .4byte jtgt_ovl2_80104C9C
  /* 5A5E8 0AC278 80130A78 */  .4byte jtgt_ovl2_80104C9C
  /* 5A5EC 0AC27C 80130A7C */  .4byte jtgt_ovl2_80104C54
  /* 5A5F0 0AC280 80130A80 */  .4byte jtgt_ovl2_80104C9C
  /* 5A5F4 0AC284 80130A84 */  .4byte jtgt_ovl2_80104C9C
  /* 5A5F8 0AC288 80130A88 */  .4byte jtgt_ovl2_80104C74
  /* 5A5FC 0AC28C 80130A8C */  .4byte jtgt_ovl2_80104C84

glabel D_ovl2_80130A90
  /* 5A600 0AC290 80130A90 */
  .4byte 0xc4034000 # .float -525.0

glabel D_ovl2_80130A94
  /* 5A604 0AC294 80130A94 */
  .4byte 0x450e3000 # .float 2275.0

glabel D_ovl2_80130A98
  /* 5A608 0AC298 80130A98 */
  .4byte 0xc5115000 # .float -2325.0

glabel D_ovl2_80130A9C
  /* 5A60C 0AC29C 80130A9C */
  .4byte 0xc4034000 # .float -525.0

glabel D_ovl2_80130AA0
  /* 5A610 0AC2A0 80130AA0 */
  .4byte 0x3a1d4952 # .float 0.0006

glabel jtbl_ovl2_80130AA4
  /* 5A614 0AC2A4 80130AA4 */  .4byte jtgt_ovl2_80105F24
  /* 5A618 0AC2A8 80130AA8 */  .4byte jtgt_ovl2_80105F34
  /* 5A61C 0AC2AC 80130AAC */  .4byte jtgt_ovl2_80105F44
  /* 5A620 0AC2B0 80130AB0 */  .4byte jtgt_ovl2_80105F54
  /* 5A624 0AC2B4 80130AB4 */  .4byte jtgt_ovl2_80105F64
  /* 5A628 0AC2B8 80130AB8 */  .4byte jtgt_ovl2_80105F74

glabel D_ovl2_80130ABC
  /* 5A62C 0AC2BC 80130ABC */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_80130AC0
  /* 5A630 0AC2C0 80130AC0 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl2_80130AC4
  /* 5A634 0AC2C4 80130AC4 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl2_80130AC8
  /* 5A638 0AC2C8 80130AC8 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl2_80130ACC
  /* 5A63C 0AC2CC 80130ACC */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl2_80130AD0
  /* 5A640 0AC2D0 80130AD0 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl2_80130AD4
  /* 5A644 0AC2D4 80130AD4 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl2_80130AD8
  /* 5A648 0AC2D8 80130AD8 */
  .4byte 0x3fc90fdb # .float 1.5707964
  .incbin "ovl2.raw.bin", 0x5A64C, 0x4

glabel D_ovl2_80130AE0
  /* 5A650 0AC2E0 80130AE0 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl2_80130AE4
  /* 5A654 0AC2E4 80130AE4 */
  .4byte 0x440d8000 # .float 566.0

glabel D_ovl2_80130AE8
  /* 5A658 0AC2E8 80130AE8 */
  .4byte 0x440d8000 # .float 566.0

glabel D_ovl2_80130AEC
  /* 5A65C 0AC2EC 80130AEC */
  .4byte 0x44268000 # .float 666.0

glabel D_ovl2_80130AF0
  /* 5A660 0AC2F0 80130AF0 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl2_80130AF4
  /* 5A664 0AC2F4 80130AF4 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl2_80130AF8
  /* 5A668 0AC2F8 80130AF8 */
  .4byte 0xff7fffff # .float -3.4028235e38
  .incbin "ovl2.raw.bin", 0x5A66C, 0x4

glabel D_ovl2_80130B00
  /* 5A670 0AC300 80130B00 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl2_80130B04
  /* 5A674 0AC304 80130B04 */
  .4byte 0xc43b8000 # .float -750.0
  .incbin "ovl2.raw.bin", 0x5A678, 0x8

glabel D_ovl2_80130B10
  /* 5A680 0AC310 80130B10 */
  .asciz "PowerBlock positions are error!\n"
  .balign 4

glabel D_ovl2_80130B34
  /* 5A6A4 0AC334 80130B34 */
  .4byte 0x3fb33333 # .float 1.4

glabel D_ovl2_80130B38
  /* 5A6A8 0AC338 80130B38 */
  .4byte 0x3f6e147b # .float 0.93

glabel D_ovl2_80130B3C
  /* 5A6AC 0AC33C 80130B3C */
  .4byte 0x3f666666 # .float 0.9

glabel D_ovl2_80130B40
  /* 5A6B0 0AC340 80130B40 */
  .4byte 0x3f666666 # .float 0.9

glabel D_ovl2_80130B44
  /* 5A6B4 0AC344 80130B44 */
  .4byte 0x44898000 # .float 1100.0

glabel D_ovl2_80130B48
  /* 5A6B8 0AC348 80130B48 */
  .4byte 0xc4898000 # .float -1100.0

glabel D_ovl2_80130B4C
  /* 5A6BC 0AC34C 80130B4C */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl2_80130B50
  /* 5A6C0 0AC350 80130B50 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl2_80130B54
  /* 5A6C4 0AC354 80130B54 */
  .4byte 0x44898000 # .float 1100.0
  .incbin "ovl2.raw.bin", 0x5A6C8, 0x8

glabel D_ovl2_80130B60
  /* 5A6D0 0AC360 80130B60 */
  .4byte 0x3d8f5c29 # .float 0.07

glabel D_ovl2_80130B64
  /* 5A6D4 0AC364 80130B64 */
  .4byte 0xbd8f5c29 # .float -0.07
  .incbin "ovl2.raw.bin", 0x5A6D8, 0x8

glabel D_ovl2_80130B70
  /* 5A6E0 0AC370 80130B70 */
  .asciz "Twister positions are error!\n"
  .balign 4

glabel jtbl_ovl2_80130B90
  /* 5A700 0AC390 80130B90 */  .4byte jtgt_ovl2_8010A950
  /* 5A704 0AC394 80130B94 */  .4byte jtgt_ovl2_8010A960
  /* 5A708 0AC398 80130B98 */  .4byte jtgt_ovl2_8010A970
  /* 5A70C 0AC39C 80130B9C */  .4byte jtgt_ovl2_8010A980
  /* 5A710 0AC3A0 80130BA0 */  .4byte jtgt_ovl2_8010A990
  /* 5A714 0AC3A4 80130BA4 */  .4byte jtgt_ovl2_8010A9A0
  /* 5A718 0AC3A8 80130BA8 */  .4byte jtgt_ovl2_8010A9B0
  .incbin "ovl2.raw.bin", 0x5A71C, 0x4

glabel D_ovl2_80130BB0
  /* 5A720 0AC3B0 80130BB0 */
  .asciz "Too many barrels!\n"
  .balign 4
  .incbin "ovl2.raw.bin", 0x5A734, 0xC

glabel D_ovl2_80130BD0
  /* 5A740 0AC3D0 80130BD0 */
  .asciz "Player Num is Over for Camera!\n"
  .balign 4

glabel D_ovl2_80130BF0
  /* 5A760 0AC3F0 80130BF0 */
  .4byte 0x3d8bac71 # .float 0.0682

glabel D_ovl2_80130BF4
  /* 5A764 0AC3F4 80130BF4 */
  .4byte 0x3d8bac71 # .float 0.0682

glabel D_ovl2_80130BF8
  /* 5A768 0AC3F8 80130BF8 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_80130BFC
  /* 5A76C 0AC3FC 80130BFC */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_80130C00
  /* 5A770 0AC400 80130C00 */
  .4byte 0x451c4000 # .float 2500.0

glabel D_ovl2_80130C04
  /* 5A774 0AC404 80130C04 */
  .4byte 0x46ea6000 # .float 30000.0

glabel D_ovl2_80130C08
  /* 5A778 0AC408 80130C08 */
  .4byte 0x3db2b8c3 # .float 0.08726647

glabel D_ovl2_80130C0C
  /* 5A77C 0AC40C 80130C0C */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_80130C10
  /* 5A780 0AC410 80130C10 */
  .4byte 0xbdfa35de # .float -0.122173056

glabel D_ovl2_80130C14
  /* 5A784 0AC414 80130C14 */
  .4byte 0x3e9c61ab # .float 0.30543265

glabel D_ovl2_80130C18
  /* 5A788 0AC418 80130C18 */
  .4byte 0xbe9c61ab # .float -0.30543265

glabel D_ovl2_80130C1C
  /* 5A78C 0AC41C 80130C1C */
  .4byte 0x466a6000 # .float 15000.0

glabel D_ovl2_80130C20
  /* 5A790 0AC420 80130C20 */
  .4byte 0x3dcccccd # .float 0.1

glabel D_ovl2_80130C24
  /* 5A794 0AC424 80130C24 */
  .4byte 0x3d4ccccd # .float 0.05
  /* 5A798 0AC428 80130C28 */
  .asciz "FK "
  .balign 4

glabel D_ovl2_80130C2C
  /* 5A79C 0AC42C 80130C2C */
  .4byte 0x3d4ccccd # .float 0.05

glabel D_ovl2_80130C30
  /* 5A7A0 0AC430 80130C30 */
  .4byte 0x3d4ccccd # .float 0.05

glabel D_ovl2_80130C34
  /* 5A7A4 0AC434 80130C34 */
  .4byte 0x3dcccccd # .float 0.1

glabel D_ovl2_80130C38
  /* 5A7A8 0AC438 80130C38 */
  .4byte 0x3d99999a # .float 0.075

glabel D_ovl2_80130C3C
  /* 5A7AC 0AC43C 80130C3C */
  .4byte 0x3dcccccd # .float 0.1

glabel D_ovl2_80130C40
  /* 5A7B0 0AC440 80130C40 */
  .4byte 0x453b8000 # .float 3000.0

glabel D_ovl2_80130C44
  /* 5A7B4 0AC444 80130C44 */
  .4byte 0x3dcccccd # .float 0.1

glabel D_ovl2_80130C48
  /* 5A7B8 0AC448 80130C48 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl2_80130C4C
  /* 5A7BC 0AC44C 80130C4C */
  .4byte 0x3dcccccd # .float 0.1

glabel D_ovl2_80130C50
  /* 5A7C0 0AC450 80130C50 */
  .4byte 0x461c4000 # .float 10000.0
  .incbin "ovl2.raw.bin", 0x5A7C4, 0xC

glabel D_ovl2_80130C60
  /* 5A7D0 0AC460 80130C60 */
  .4byte 0x3d4ccccd # .float 0.05

glabel D_ovl2_80130C64
  /* 5A7D4 0AC464 80130C64 */
  .4byte 0x3f851eb8 # .float 1.04

glabel D_ovl2_80130C68
  /* 5A7D8 0AC468 80130C68 */
  .4byte 0x3f851eb8 # .float 1.04

glabel D_ovl2_80130C6C
  /* 5A7DC 0AC46C 80130C6C */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl2_80130C70
  /* 5A7E0 0AC470 80130C70 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_80130C74
  /* 5A7E4 0AC474 80130C74 */
  .4byte 0x45bb8000 # .float 6000.0

glabel D_ovl2_80130C78
  /* 5A7E8 0AC478 80130C78 */
  .4byte 0x3f622222 # .float 0.8833333

glabel D_ovl2_80130C7C
  /* 5A7EC 0AC47C 80130C7C */
  .4byte 0x3f622222 # .float 0.8833333

glabel D_ovl2_80130C80
  /* 5A7F0 0AC480 80130C80 */
  .4byte 0x3e4ccccd # .float 0.2

glabel D_ovl2_80130C84
  /* 5A7F4 0AC484 80130C84 */
  .4byte 0xbf622222 # .float -0.8833333

glabel D_ovl2_80130C88
  /* 5A7F8 0AC488 80130C88 */
  .4byte 0xbf622222 # .float -0.8833333

glabel D_ovl2_80130C8C
  /* 5A7FC 0AC48C 80130C8C */
  .4byte 0x3dcccccd # .float 0.1

glabel D_ovl2_80130C90
  /* 5A800 0AC490 80130C90 */
  .4byte 0x3dcccccd # .float 0.1

glabel D_ovl2_80130C94
  /* 5A804 0AC494 80130C94 */
  .4byte 0x3f5f66f3 # .float 0.87266463

glabel D_ovl2_80130C98
  /* 5A808 0AC498 80130C98 */
  .4byte 0x39ae9681 # .float 0.000333

glabel D_ovl2_80130C9C
  /* 5A80C 0AC49C 80130C9C */
  .4byte 0xbf5f66f3 # .float -0.87266463

glabel D_ovl2_80130CA0
  /* 5A810 0AC4A0 80130CA0 */
  .4byte 0x3eb2b8c3 # .float 0.34906587

glabel D_ovl2_80130CA4
  /* 5A814 0AC4A4 80130CA4 */
  .4byte 0x39ae9681 # .float 0.000333

glabel D_ovl2_80130CA8
  /* 5A818 0AC4A8 80130CA8 */
  .4byte 0xbeb2b8c3 # .float -0.34906587

glabel D_ovl2_80130CAC
  /* 5A81C 0AC4AC 80130CAC */
  .4byte 0x3dcccccd # .float 0.1

glabel jtbl_ovl2_80130CB0
  /* 5A820 0AC4B0 80130CB0 */  .4byte jtgt_ovl2_801148E0
  /* 5A824 0AC4B4 80130CB4 */  .4byte jtgt_ovl2_801148F0
  /* 5A828 0AC4B8 80130CB8 */  .4byte jtgt_ovl2_80114900
  /* 5A82C 0AC4BC 80130CBC */  .4byte jtgt_ovl2_80114910
  /* 5A830 0AC4C0 80130CC0 */  .4byte jtgt_ovl2_80114940
  /* 5A834 0AC4C4 80130CC4 */  .4byte jtgt_ovl2_80114920
  /* 5A838 0AC4C8 80130CC8 */  .4byte jtgt_ovl2_80114928
  /* 5A83C 0AC4CC 80130CCC */  .4byte jtgt_ovl2_80114938

glabel D_ovl2_80130CD0
  /* 5A840 0AC4D0 80130CD0 */  .4byte jtgt_ovl2_80114E98
  /* 5A844 0AC4D4 80130CD4 */  .4byte jtgt_ovl2_80114EB4
  /* 5A848 0AC4D8 80130CD8 */  .4byte jtgt_ovl2_80114EE8
  /* 5A84C 0AC4DC 80130CDC */  .4byte jtgt_ovl2_80114F1C
  /* 5A850 0AC4E0 80130CE0 */  .4byte jtgt_ovl2_80114F38

glabel D_ovl2_80130CE4
  /* 5A854 0AC4E4 80130CE4 */  .4byte jtgt_ovl2_80114FDC
  /* 5A858 0AC4E8 80130CE8 */  .4byte jtgt_ovl2_80114FF8
  /* 5A85C 0AC4EC 80130CEC */  .4byte jtgt_ovl2_80115014
  /* 5A860 0AC4F0 80130CF0 */  .4byte jtgt_ovl2_80115030
  /* 5A864 0AC4F4 80130CF4 */  .4byte jtgt_ovl2_8011504C

glabel D_ovl2_80130CF8
  /* 5A868 0AC4F8 80130CF8 */  .4byte jtgt_ovl2_8011512C
  /* 5A86C 0AC4FC 80130CFC */  .4byte jtgt_ovl2_80115134
  /* 5A870 0AC500 80130D00 */  .4byte jtgt_ovl2_80115134
  /* 5A874 0AC504 80130D04 */  .4byte jtgt_ovl2_8011513C
  /* 5A878 0AC508 80130D08 */  .4byte jtgt_ovl2_80115144
  .incbin "ovl2.raw.bin", 0x5A87C, 0x4

glabel D_ovl2_80130D10
  /* 5A880 0AC510 80130D10 */
  .asciz "Particle Bank is over\n"
  .balign 4
  .incbin "ovl2.raw.bin", 0x5A898, 0x8

glabel D_ovl2_80130D30
  /* 5A8A0 0AC530 80130D30 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl2_80130D34
  /* 5A8A4 0AC534 80130D34 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl2_80130D38
  /* 5A8A8 0AC538 80130D38 */
  .4byte 0x40490fdb # .float 3.1415927
  .incbin "ovl2.raw.bin", 0x5A8AC, 0x4
