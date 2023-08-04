.include "macros.inc"

.section .data

# Data Sections
#  800D6680 -> 800D69E0


glabel D_ovl12_800D6680
  .incbin "ovl12.raw.bin", 0x01F0, 0x4

glabel D_ovl12_800D6684
  .incbin "ovl12.raw.bin", 0x01F4, 0x4

glabel D_ovl12_800D6688
  /* 1F8 119FE8 800D6688 */  .4byte D_ovl12_800D6810
  /* 1FC 119FEC 800D668C */  .4byte D_ovl12_800D6818
  /* 200 119FF0 800D6690 */  .4byte D_ovl12_800D681C
  /* 204 119FF4 800D6694 */  .4byte D_ovl12_800D6824
  /* 208 119FF8 800D6698 */  .4byte D_ovl12_800D682C
  /* 20C 119FFC 800D669C */  .4byte D_ovl12_800D6834
  /* 210 11A000 800D66A0 */  .4byte D_ovl12_800D683C
  /* 214 11A004 800D66A4 */  .4byte D_ovl12_800D6844
  /* 218 11A008 800D66A8 */  .4byte D_ovl12_800D684C
  /* 21C 11A00C 800D66AC */  .4byte D_ovl12_800D6858
  /* 220 11A010 800D66B0 */  .4byte D_ovl12_800D6860
  /* 224 11A014 800D66B4 */  .4byte D_ovl12_800D6864
  /* 228 11A018 800D66B8 */  .4byte D_ovl12_800D686C
  /* 22C 11A01C 800D66BC */  .4byte D_ovl12_800D6874
  /* 230 11A020 800D66C0 */  .4byte D_ovl12_800D687C
  /* 234 11A024 800D66C4 */  .4byte D_ovl12_800D6884
  /* 238 11A028 800D66C8 */  .4byte D_ovl12_800D688C
  /* 23C 11A02C 800D66CC */  .4byte D_ovl12_800D6894
  /* 240 11A030 800D66D0 */  .4byte D_ovl12_800D68A0
  /* 244 11A034 800D66D4 */  .4byte D_ovl12_800D68AC
  /* 248 11A038 800D66D8 */  .4byte D_ovl12_800D68BC
  /* 24C 11A03C 800D66DC */  .4byte D_ovl12_800D68C8
  /* 250 11A040 800D66E0 */  .4byte D_ovl12_800D68D4
  /* 254 11A044 800D66E4 */  .4byte D_ovl12_800D68E0
  /* 258 11A048 800D66E8 */  .4byte D_ovl12_800D68EC
  /* 25C 11A04C 800D66EC */  .4byte D_ovl12_800D68FC
  /* 260 11A050 800D66F0 */  .4byte D_ovl12_800D6908
  /* 264 11A054 800D66F4 */  .4byte D_ovl12_800D6918
  /* 268 11A058 800D66F8 */  .4byte D_ovl12_800D6924
  /* 26C 11A05C 800D66FC */  .4byte D_ovl12_800D6930
  /* 270 11A060 800D6700 */  .4byte D_ovl12_800D693C
  /* 274 11A064 800D6704 */  .4byte D_ovl12_800D6948
  /* 278 11A068 800D6708 */  .4byte D_ovl12_800D6958
  /* 27C 11A06C 800D670C */  .4byte D_ovl12_800D6964
  /* 280 11A070 800D6710 */  .4byte D_ovl12_800D6970
  /* 284 11A074 800D6714 */  .4byte D_ovl12_800D697C
  /* 288 11A078 800D6718 */  .4byte D_ovl12_800D6988
  /* 28C 11A07C 800D671C */  .4byte D_ovl12_800D6998
  /* 290 11A080 800D6720 */  .4byte D_ovl12_800D69A4
  /* 294 11A084 800D6724 */  .4byte D_ovl12_800D69B4
  /* 298 11A088 800D6728 */  .4byte D_ovl12_800D69C0

glabel D_ovl12_800D672C
  .incbin "ovl12.raw.bin", 0x029C, 0x4
  /* 2A0 11A090 800D6730 */  .4byte func_ovl12_800D6490
  /* 2A4 11A094 800D6734 */  .4byte D_ovl12_800D69CC
  .incbin "ovl12.raw.bin", 0x02A8, 0x18
  /* 2C0 11A0B0 800D6750 */  .4byte D_ovl12_800D6688
  /* 2C4 11A0B4 800D6754 */  .4byte D_ovl12_800D6684
  .incbin "ovl12.raw.bin", 0x02C8, 0x4
  /* 2CC 11A0BC 800D675C */
  .asciz "B "
  .balign 4
  .incbin "ovl12.raw.bin", 0x02D0, 0x4

glabel D_ovl12_800D6764
  /* 2D4 11A0C4 800D6764 */  .4byte D_NF_80392A00
  /* 2D8 11A0C8 800D6768 */  .4byte D_NF_803B6900
  /* 2DC 11A0CC 800D676C */  .4byte D_NF_803DA800
  .incbin "ovl12.raw.bin", 0x02E0, 0x10

glabel D_ovl12_800D6780
  .incbin "ovl12.raw.bin", 0x02F0, 0x4
  /* 2F4 11A0E4 800D6784 */  .4byte func_8000A5E4
  /* 2F8 11A0E8 800D6788 */  .4byte func_8000A340
  /* 2FC 11A0EC 800D678C */  .4byte D_NF_800D69F0
  .incbin "ovl12.raw.bin", 0x0300, 0x2C
  /* 32C 11A11C 800D67BC */  .4byte update_contdata
  .incbin "ovl12.raw.bin", 0x0330, 0x48
  /* 378 11A168 800D6808 */  .4byte func_ovl12_800D65AC
  .incbin "ovl12.raw.bin", 0x037C, 0x4

glabel D_ovl12_800D6810
  /* 380 11A170 800D6810 */
  .asciz "Mario"
  .balign 4

glabel D_ovl12_800D6818
  /* 388 11A178 800D6818 */
  .asciz "Fox"
  .balign 4

glabel D_ovl12_800D681C
  /* 38C 11A17C 800D681C */
  .asciz "Donkey"
  .balign 4

glabel D_ovl12_800D6824
  /* 394 11A184 800D6824 */
  .asciz "Samus"
  .balign 4

glabel D_ovl12_800D682C
  /* 39C 11A18C 800D682C */
  .asciz "Link"
  .balign 4

glabel D_ovl12_800D6834
  /* 3A4 11A194 800D6834 */
  .asciz "Yoshi"
  .balign 4

glabel D_ovl12_800D683C
  /* 3AC 11A19C 800D683C */
  .asciz "Kirby"
  .balign 4

glabel D_ovl12_800D6844
  /* 3B4 11A1A4 800D6844 */
  .asciz "Pikacyu"
  .balign 4

glabel D_ovl12_800D684C
  /* 3BC 11A1AC 800D684C */
  .asciz "OldMario"
  .balign 4

glabel D_ovl12_800D6858
  /* 3C8 11A1B8 800D6858 */
  .asciz "Small"
  .balign 4

glabel D_ovl12_800D6860
  /* 3D0 11A1C0 800D6860 */
  .asciz "New"
  .balign 4

glabel D_ovl12_800D6864
  /* 3D4 11A1C4 800D6864 */
  .asciz "Explain"
  .balign 4

glabel D_ovl12_800D686C
  /* 3DC 11A1CC 800D686C */
  .asciz "SYoshi"
  .balign 4

glabel D_ovl12_800D6874
  /* 3E4 11A1D4 800D6874 */
  .asciz "Metal"
  .balign 4

glabel D_ovl12_800D687C
  /* 3EC 11A1DC 800D687C */
  .asciz "Zako"
  .balign 4

glabel D_ovl12_800D6884
  /* 3F4 11A1E4 800D6884 */
  .asciz "Bonus3"
  .balign 4

glabel D_ovl12_800D688C
  /* 3FC 11A1EC 800D688C */
  .asciz "Boss"
  .balign 4

glabel D_ovl12_800D6894
  /* 404 11A1F4 800D6894 */
  .asciz "Bonus1Mario"
  .balign 4

glabel D_ovl12_800D68A0
  /* 410 11A200 800D68A0 */
  .asciz "Bonus1Fox"
  .balign 4

glabel D_ovl12_800D68AC
  /* 41C 11A20C 800D68AC */
  .asciz "Bonus1Donkey"
  .balign 4

glabel D_ovl12_800D68BC
  /* 42C 11A21C 800D68BC */
  .asciz "Bonus1Samus"
  .balign 4

glabel D_ovl12_800D68C8
  /* 438 11A228 800D68C8 */
  .asciz "Bonus1Luigi"
  .balign 4

glabel D_ovl12_800D68D4
  /* 444 11A234 800D68D4 */
  .asciz "Bonus1Link"
  .balign 4

glabel D_ovl12_800D68E0
  /* 450 11A240 800D68E0 */
  .asciz "Bonus1Yoshi"
  .balign 4

glabel D_ovl12_800D68EC
  /* 45C 11A24C 800D68EC */
  .asciz "Bonus1Captain"
  .balign 4

glabel D_ovl12_800D68FC
  /* 46C 11A25C 800D68FC */
  .asciz "Bonus1Kirby"
  .balign 4

glabel D_ovl12_800D6908
  /* 478 11A268 800D6908 */
  .asciz "Bonus1Pikachu"
  .balign 4

glabel D_ovl12_800D6918
  /* 488 11A278 800D6918 */
  .asciz "Bonus1Purin"
  .balign 4

glabel D_ovl12_800D6924
  /* 494 11A284 800D6924 */
  .asciz "Bonus1Nes"
  .balign 4

glabel D_ovl12_800D6930
  /* 4A0 11A290 800D6930 */
  .asciz "Bonus2Mario"
  .balign 4

glabel D_ovl12_800D693C
  /* 4AC 11A29C 800D693C */
  .asciz "Bonus2Fox"
  .balign 4

glabel D_ovl12_800D6948
  /* 4B8 11A2A8 800D6948 */
  .asciz "Bonus2Donkey"
  .balign 4

glabel D_ovl12_800D6958
  /* 4C8 11A2B8 800D6958 */
  .asciz "Bonus2Samus"
  .balign 4

glabel D_ovl12_800D6964
  /* 4D4 11A2C4 800D6964 */
  .asciz "Bonus2Luigi"
  .balign 4

glabel D_ovl12_800D6970
  /* 4E0 11A2D0 800D6970 */
  .asciz "Bonus2Link"
  .balign 4

glabel D_ovl12_800D697C
  /* 4EC 11A2DC 800D697C */
  .asciz "Bonus2Yoshi"
  .balign 4

glabel D_ovl12_800D6988
  /* 4F8 11A2E8 800D6988 */
  .asciz "Bonus2Captain"
  .balign 4

glabel D_ovl12_800D6998
  /* 508 11A2F8 800D6998 */
  .asciz "Bonus2Kirby"
  .balign 4

glabel D_ovl12_800D69A4
  /* 514 11A304 800D69A4 */
  .asciz "Bonus2Pikachu"
  .balign 4

glabel D_ovl12_800D69B4
  /* 524 11A314 800D69B4 */
  .asciz "Bonus2Purin"
  .balign 4

glabel D_ovl12_800D69C0
  /* 530 11A320 800D69C0 */
  .asciz "Bonus2Nes"
  .balign 4

glabel D_ovl12_800D69CC
  /* 53C 11A32C 800D69CC */
  .asciz "Exit"
  .balign 4
  .incbin "ovl12.raw.bin", 0x0544, 0xC
