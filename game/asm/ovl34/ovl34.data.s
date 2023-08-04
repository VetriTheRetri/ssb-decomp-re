.include "macros.inc"

.section .data

# Data Sections
#  80134A20 -> 80134CD0


glabel D_ovl34_80134A20
  .incbin "ovl34.raw.bin", 0x2F20, 0x20
  /* 2F40 165580 80134A40 */
  .asciz "   "
  .balign 4
  /* 2F44 165584 80134A44 */
  .asciz "   "
  .balign 4
  .incbin "ovl34.raw.bin", 0x2F48, 0x10
  /* 2F58 165598 80134A58 */
  .asciz "   "
  .balign 4
  /* 2F5C 16559C 80134A5C */
  .asciz "   "
  .balign 4
  .incbin "ovl34.raw.bin", 0x2F60, 0x10

glabel D_ovl34_80134A70
  .incbin "ovl34.raw.bin", 0x2F70, 0x90

glabel D_ovl34_80134B00
  .incbin "ovl34.raw.bin", 0x3000, 0x90

glabel D_ovl34_80134B90
  .incbin "ovl34.raw.bin", 0x3090, 0x20

glabel D_ovl34_80134BB0
  .incbin "ovl34.raw.bin", 0x30B0, 0x20

glabel D_ovl34_80134BD0
  /* 30D0 165710 80134BD0 */  .4byte D_NF_80392A00
  /* 30D4 165714 80134BD4 */  .4byte D_NF_803B6900
  /* 30D8 165718 80134BD8 */  .4byte D_NF_803DA800
  .incbin "ovl34.raw.bin", 0x30DC, 0x10

glabel D_ovl34_80134BEC
  .incbin "ovl34.raw.bin", 0x30EC, 0x4
  /* 30F0 165730 80134BF0 */  .4byte func_8000A5E4
  /* 30F4 165734 80134BF4 */  .4byte func_800A26B8
  /* 30F8 165738 80134BF8 */  .4byte D_NF_801350D0
  .incbin "ovl34.raw.bin", 0x30FC, 0x28
  /* 3124 165764 80134C24 */  .4byte func_ovl34_80131B00
  /* 3128 165768 80134C28 */  .4byte update_contdata
  .incbin "ovl34.raw.bin", 0x312C, 0x20
  /* 314C 16578C 80134C4C */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl34.raw.bin", 0x3150, 0x24
  /* 3174 1657B4 80134C74 */  .4byte func_ovl34_80134788
  .incbin "ovl34.raw.bin", 0x3178, 0x8

glabel D_ovl34_80134C80
  /* 3180 1657C0 80134C80 */
  .4byte 0x445a14cc # .float 872.32495

glabel D_ovl34_80134C84
  /* 3184 1657C4 80134C84 */
  .4byte 0x457c6dd3 # .float 4038.864

glabel D_ovl34_80134C88
  /* 3188 1657C8 80134C88 */
  .4byte 0xc593f4cd # .float -4734.6

glabel D_ovl34_80134C8C
  /* 318C 1657CC 80134C8C */
  .4byte 0x466a6000 # .float 15000.0

glabel D_ovl34_80134C90
  /* 3190 1657D0 80134C90 */
  .4byte 0x4114c9ef # .float 9.2993

glabel D_ovl34_80134C94
  /* 3194 1657D4 80134C94 */
  .4byte 0x4572863b # .float 3880.3894

glabel D_ovl34_80134C98
  /* 3198 1657D8 80134C98 */
  .4byte 0x457edfb5 # .float 4077.9817

glabel D_ovl34_80134C9C
  /* 319C 1657DC 80134C9C */
  .4byte 0x3f7dd81f # .float 0.991579

glabel D_ovl34_80134CA0
  /* 31A0 1657E0 80134CA0 */
  .4byte 0x453b3ae7 # .float 2995.6814

glabel D_ovl34_80134CA4
  /* 31A4 1657E4 80134CA4 */
  .4byte 0xc3c27a0a # .float -388.95343

glabel D_ovl34_80134CA8
  /* 31A8 1657E8 80134CA8 */
  .4byte 0x4194db85 # .float 18.607187

glabel D_ovl34_80134CAC
  /* 31AC 1657EC 80134CAC */
  .4byte 0xc481fc2e # .float -1039.8806

glabel D_ovl34_80134CB0
  /* 31B0 1657F0 80134CB0 */
  .4byte 0x4547f373 # .float 3199.2156

glabel D_ovl34_80134CB4
  /* 31B4 1657F4 80134CB4 */
  .4byte 0xc49a6567 # .float -1235.1688

glabel D_ovl34_80134CB8
  /* 31B8 1657F8 80134CB8 */
  .4byte 0xc4914d1d # .float -1162.4098

glabel D_ovl34_80134CBC
  /* 31BC 1657FC 80134CBC */
  .4byte 0x4504fd31 # .float 2127.8245

glabel D_ovl34_80134CC0
  /* 31C0 165800 80134CC0 */
  .4byte 0xc570d12c # .float -3853.0732

glabel D_ovl34_80134CC4
  /* 31C4 165804 80134CC4 */
  .4byte 0x413fb75c # .float 11.982265

glabel D_ovl34_80134CC8
  /* 31C8 165808 80134CC8 */
  .4byte 0x421e3e9f # .float 39.561153
  .incbin "ovl34.raw.bin", 0x31CC, 0x4
