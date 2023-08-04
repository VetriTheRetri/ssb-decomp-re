.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x8018D0C0 -> 0x8018E6E0

glabel func_ovl63_8018D0C0
  /* 18A6D0 8018D0C0 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 18A6D4 8018D0C4 3C040000 */       lui $a0, %hi(D_NF_000000C6)
  /* 18A6D8 8018D0C8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18A6DC 8018D0CC 248400C6 */     addiu $a0, $a0, %lo(D_NF_000000C6)
  /* 18A6E0 8018D0D0 0C0336F4 */       jal rldm_bytes_needed_to_load
  /* 18A6E4 8018D0D4 AFA4001C */        sw $a0, 0x1c($sp)
  /* 18A6E8 8018D0D8 00402025 */        or $a0, $v0, $zero
  /* 18A6EC 8018D0DC 0C001260 */       jal hal_alloc
  /* 18A6F0 8018D0E0 24050010 */     addiu $a1, $zero, 0x10
  /* 18A6F4 8018D0E4 8FA4001C */        lw $a0, 0x1c($sp)
  /* 18A6F8 8018D0E8 0C033722 */       jal rldm_get_file_with_external_heap
  /* 18A6FC 8018D0EC 00402825 */        or $a1, $v0, $zero
  /* 18A700 8018D0F0 3C040000 */       lui $a0, %hi(D_NF_000000FC)
  /* 18A704 8018D0F4 3C018019 */       lui $at, %hi(D_ovl63_8018E9E0)
  /* 18A708 8018D0F8 248400FC */     addiu $a0, $a0, %lo(D_NF_000000FC)
  /* 18A70C 8018D0FC AC22E9E0 */        sw $v0, %lo(D_ovl63_8018E9E0)($at)
  /* 18A710 8018D100 0C0336F4 */       jal rldm_bytes_needed_to_load
  /* 18A714 8018D104 AFA4001C */        sw $a0, 0x1c($sp)
  /* 18A718 8018D108 00402025 */        or $a0, $v0, $zero
  /* 18A71C 8018D10C 0C001260 */       jal hal_alloc
  /* 18A720 8018D110 24050010 */     addiu $a1, $zero, 0x10
  /* 18A724 8018D114 8FA4001C */        lw $a0, 0x1c($sp)
  /* 18A728 8018D118 0C033722 */       jal rldm_get_file_with_external_heap
  /* 18A72C 8018D11C 00402825 */        or $a1, $v0, $zero
  /* 18A730 8018D120 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18A734 8018D124 3C038019 */       lui $v1, %hi(D_ovl63_8018E9E4)
  /* 18A738 8018D128 3C0F0000 */       lui $t7, %hi(D_NF_00001404)
  /* 18A73C 8018D12C 2463E9E4 */     addiu $v1, $v1, %lo(D_ovl63_8018E9E4)
  /* 18A740 8018D130 25EF1404 */     addiu $t7, $t7, %lo(D_NF_00001404)
  /* 18A744 8018D134 AC620000 */        sw $v0, ($v1) # D_ovl63_8018E9E4 + 0
  /* 18A748 8018D138 004FC021 */      addu $t8, $v0, $t7
  /* 18A74C 8018D13C 3C018019 */       lui $at, %hi(D_ovl63_8018E9E8)
  /* 18A750 8018D140 AC38E9E8 */        sw $t8, %lo(D_ovl63_8018E9E8)($at)
  /* 18A754 8018D144 03E00008 */        jr $ra
  /* 18A758 8018D148 27BD0028 */     addiu $sp, $sp, 0x28

glabel func_ovl63_8018D14C
  /* 18A75C 8018D14C 3C028019 */       lui $v0, %hi(D_ovl63_8018E7F0)
  /* 18A760 8018D150 3C0E800A */       lui $t6, %hi(gDefaultBattleState)
  /* 18A764 8018D154 2442E7F0 */     addiu $v0, $v0, %lo(D_ovl63_8018E7F0)
  /* 18A768 8018D158 3C03800A */       lui $v1, %hi(gpBattleState)
  /* 18A76C 8018D15C 25CE3FC8 */     addiu $t6, $t6, %lo(gDefaultBattleState)
  /* 18A770 8018D160 246350E8 */     addiu $v1, $v1, %lo(gpBattleState)
  /* 18A774 8018D164 24040005 */     addiu $a0, $zero, 5
  /* 18A778 8018D168 25C801EC */     addiu $t0, $t6, 0x1ec
  /* 18A77C 8018D16C 0040C825 */        or $t9, $v0, $zero
  .L8018D170:
  /* 18A780 8018D170 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 18A784 8018D174 25CE000C */     addiu $t6, $t6, 0xc
  /* 18A788 8018D178 2739000C */     addiu $t9, $t9, 0xc
  /* 18A78C 8018D17C AF38FFF4 */        sw $t8, -0xc($t9)
  /* 18A790 8018D180 8DCFFFF8 */        lw $t7, -8($t6) # gDefaultBattleState + -8
  /* 18A794 8018D184 AF2FFFF8 */        sw $t7, -8($t9)
  /* 18A798 8018D188 8DD8FFFC */        lw $t8, -4($t6) # gDefaultBattleState + -4
  /* 18A79C 8018D18C 15C8FFF8 */       bne $t6, $t0, .L8018D170
  /* 18A7A0 8018D190 AF38FFFC */        sw $t8, -4($t9)
  /* 18A7A4 8018D194 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 18A7A8 8018D198 24090003 */     addiu $t1, $zero, 3
  /* 18A7AC 8018D19C 240B000B */     addiu $t3, $zero, 0xb
  /* 18A7B0 8018D1A0 AF380000 */        sw $t8, ($t9)
  /* 18A7B4 8018D1A4 240D0002 */     addiu $t5, $zero, 2
  /* 18A7B8 8018D1A8 240F0004 */     addiu $t7, $zero, 4
  /* 18A7BC 8018D1AC AC620000 */        sw $v0, ($v1) # gpBattleState + 0
  /* 18A7C0 8018D1B0 A0490000 */        sb $t1, ($v0) # D_ovl63_8018E7F0 + 0
  /* 18A7C4 8018D1B4 A04B0001 */        sb $t3, 1($v0) # D_ovl63_8018E7F0 + 1
  /* 18A7C8 8018D1B8 A04D0004 */        sb $t5, 4($v0) # D_ovl63_8018E7F0 + 4
  /* 18A7CC 8018D1BC A0400005 */        sb $zero, 5($v0) # D_ovl63_8018E7F0 + 5
  /* 18A7D0 8018D1C0 A0400023 */        sb $zero, 0x23($v0) # D_ovl63_8018E7F0 + 35
  /* 18A7D4 8018D1C4 A04F0097 */        sb $t7, 0x97($v0) # D_ovl63_8018E7F0 + 151
  /* 18A7D8 8018D1C8 A0440022 */        sb $a0, 0x22($v0) # D_ovl63_8018E7F0 + 34
  /* 18A7DC 8018D1CC 03E00008 */        jr $ra
  /* 18A7E0 8018D1D0 A0440096 */        sb $a0, 0x96($v0) # D_ovl63_8018E7F0 + 150

glabel func_ovl63_8018D1D4
  /* 18A7E4 8018D1D4 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 18A7E8 8018D1D8 AFB00014 */        sw $s0, 0x14($sp)
  /* 18A7EC 8018D1DC 3C108004 */       lui $s0, %hi(gOMObjCommonLinks + (0x03 * 4))
  /* 18A7F0 8018D1E0 8E1066FC */        lw $s0, %lo(gOMObjCommonLinks + (0x03 * 4))($s0)
  /* 18A7F4 8018D1E4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 18A7F8 8018D1E8 AFB10018 */        sw $s1, 0x18($sp)
  /* 18A7FC 8018D1EC 1200000D */      beqz $s0, .L8018D224
  /* 18A800 8018D1F0 00000000 */       nop 
  /* 18A804 8018D1F4 8E110084 */        lw $s1, 0x84($s0)
  .L8018D1F8:
  /* 18A808 8018D1F8 0C04F6F8 */       jal ftCommon_Appear_SetStatus
  /* 18A80C 8018D1FC 02002025 */        or $a0, $s0, $zero
  /* 18A810 8018D200 0C039FDA */       jal func_ovl2_800E7F68
  /* 18A814 8018D204 02002025 */        or $a0, $s0, $zero
  /* 18A818 8018D208 922E0191 */       lbu $t6, 0x191($s1)
  /* 18A81C 8018D20C 31CFFFF0 */      andi $t7, $t6, 0xfff0
  /* 18A820 8018D210 35F80004 */       ori $t8, $t7, 4
  /* 18A824 8018D214 A2380191 */        sb $t8, 0x191($s1)
  /* 18A828 8018D218 8E100004 */        lw $s0, 4($s0)
  /* 18A82C 8018D21C 5600FFF6 */      bnel $s0, $zero, .L8018D1F8
  /* 18A830 8018D220 8E110084 */        lw $s1, 0x84($s0)
  .L8018D224:
  /* 18A834 8018D224 3C08800A */       lui $t0, %hi(gpBattleState)
  /* 18A838 8018D228 8D0850E8 */        lw $t0, %lo(gpBattleState)($t0)
  /* 18A83C 8018D22C 24190001 */     addiu $t9, $zero, 1
  /* 18A840 8018D230 A1190011 */        sb $t9, 0x11($t0)
  /* 18A844 8018D234 8FBF001C */        lw $ra, 0x1c($sp)
  /* 18A848 8018D238 8FB10018 */        lw $s1, 0x18($sp)
  /* 18A84C 8018D23C 8FB00014 */        lw $s0, 0x14($sp)
  /* 18A850 8018D240 03E00008 */        jr $ra
  /* 18A854 8018D244 27BD0020 */     addiu $sp, $sp, 0x20

glabel func_ovl63_8018D248
  /* 18A858 8018D248 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 18A85C 8018D24C AFBF001C */        sw $ra, 0x1c($sp)
  /* 18A860 8018D250 240E00FF */     addiu $t6, $zero, 0xff
  /* 18A864 8018D254 AFAE0010 */        sw $t6, 0x10($sp)
  /* 18A868 8018D258 24040009 */     addiu $a0, $zero, 9
  /* 18A86C 8018D25C 3C058000 */       lui $a1, 0x8000
  /* 18A870 8018D260 24060064 */     addiu $a2, $zero, 0x64
  /* 18A874 8018D264 0C002E7F */       jal func_8000B9FC
  /* 18A878 8018D268 24070001 */     addiu $a3, $zero, 1
  /* 18A87C 8018D26C 3C038013 */       lui $v1, %hi(D_ovl2_801314B0)
  /* 18A880 8018D270 246314B0 */     addiu $v1, $v1, %lo(D_ovl2_801314B0)
  /* 18A884 8018D274 8C6F0020 */        lw $t7, 0x20($v1) # D_ovl2_801314B0 + 32
  /* 18A888 8018D278 8C780024 */        lw $t8, 0x24($v1) # D_ovl2_801314B0 + 36
  /* 18A88C 8018D27C 8C790028 */        lw $t9, 0x28($v1) # D_ovl2_801314B0 + 40
  /* 18A890 8018D280 8C69002C */        lw $t1, 0x2c($v1) # D_ovl2_801314B0 + 44
  /* 18A894 8018D284 448F2000 */      mtc1 $t7, $f4
  /* 18A898 8018D288 44983000 */      mtc1 $t8, $f6
  /* 18A89C 8018D28C 44994000 */      mtc1 $t9, $f8
  /* 18A8A0 8018D290 44895000 */      mtc1 $t1, $f10
  /* 18A8A4 8018D294 46802120 */   cvt.s.w $f4, $f4
  /* 18A8A8 8018D298 8C480074 */        lw $t0, 0x74($v0)
  /* 18A8AC 8018D29C 25040008 */     addiu $a0, $t0, 8
  /* 18A8B0 8018D2A0 468031A0 */   cvt.s.w $f6, $f6
  /* 18A8B4 8018D2A4 44052000 */      mfc1 $a1, $f4
  /* 18A8B8 8018D2A8 46804220 */   cvt.s.w $f8, $f8
  /* 18A8BC 8018D2AC 44063000 */      mfc1 $a2, $f6
  /* 18A8C0 8018D2B0 46805420 */   cvt.s.w $f16, $f10
  /* 18A8C4 8018D2B4 44074000 */      mfc1 $a3, $f8
  /* 18A8C8 8018D2B8 0C001C20 */       jal func_80007080
  /* 18A8CC 8018D2BC E7B00010 */      swc1 $f16, 0x10($sp)
  /* 18A8D0 8018D2C0 8FBF001C */        lw $ra, 0x1c($sp)
  /* 18A8D4 8018D2C4 27BD0020 */     addiu $sp, $sp, 0x20
  /* 18A8D8 8018D2C8 03E00008 */        jr $ra
  /* 18A8DC 8018D2CC 00000000 */       nop 

glabel func_ovl63_8018D2D0
  /* 18A8E0 8018D2D0 3C058004 */       lui $a1, %hi(gpDisplayListHead)
  /* 18A8E4 8018D2D4 24A565B0 */     addiu $a1, $a1, %lo(gpDisplayListHead)
  /* 18A8E8 8018D2D8 8CA30000 */        lw $v1, ($a1) # gpDisplayListHead + 0
  /* 18A8EC 8018D2DC 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 18A8F0 8018D2E0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18A8F4 8018D2E4 246E0008 */     addiu $t6, $v1, 8
  /* 18A8F8 8018D2E8 AFA40030 */        sw $a0, 0x30($sp)
  /* 18A8FC 8018D2EC ACAE0000 */        sw $t6, ($a1) # gpDisplayListHead + 0
  /* 18A900 8018D2F0 3C0FE700 */       lui $t7, 0xe700
  /* 18A904 8018D2F4 AC6F0000 */        sw $t7, ($v1)
  /* 18A908 8018D2F8 AC600004 */        sw $zero, 4($v1)
  /* 18A90C 8018D2FC 8CA30000 */        lw $v1, ($a1) # gpDisplayListHead + 0
  /* 18A910 8018D300 3C19ED02 */       lui $t9, (0xED028280 >> 16) # 3976364672
  /* 18A914 8018D304 3C0A004D */       lui $t2, (0x4D8398 >> 16) # 5079960
  /* 18A918 8018D308 24780008 */     addiu $t8, $v1, 8
  /* 18A91C 8018D30C ACB80000 */        sw $t8, ($a1) # gpDisplayListHead + 0
  /* 18A920 8018D310 354A8398 */       ori $t2, $t2, (0x4D8398 & 0xFFFF) # 5079960
  /* 18A924 8018D314 37398280 */       ori $t9, $t9, (0xED028280 & 0xFFFF) # 3976364672
  /* 18A928 8018D318 AC790000 */        sw $t9, ($v1)
  /* 18A92C 8018D31C AC6A0004 */        sw $t2, 4($v1)
  /* 18A930 8018D320 8CA30000 */        lw $v1, ($a1) # gpDisplayListHead + 0
  /* 18A934 8018D324 3C0CE300 */       lui $t4, (0xE3000A01 >> 16) # 3808430593
  /* 18A938 8018D328 358C0A01 */       ori $t4, $t4, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 18A93C 8018D32C 246B0008 */     addiu $t3, $v1, 8
  /* 18A940 8018D330 ACAB0000 */        sw $t3, ($a1) # gpDisplayListHead + 0
  /* 18A944 8018D334 3C0D0030 */       lui $t5, 0x30
  /* 18A948 8018D338 AC6D0004 */        sw $t5, 4($v1)
  /* 18A94C 8018D33C AC6C0000 */        sw $t4, ($v1)
  /* 18A950 8018D340 8CA30000 */        lw $v1, ($a1) # gpDisplayListHead + 0
  /* 18A954 8018D344 3C0FE200 */       lui $t7, (0xE200001C >> 16) # 3791650844
  /* 18A958 8018D348 35EF001C */       ori $t7, $t7, (0xE200001C & 0xFFFF) # 3791650844
  /* 18A95C 8018D34C 246E0008 */     addiu $t6, $v1, 8
  /* 18A960 8018D350 ACAE0000 */        sw $t6, ($a1) # gpDisplayListHead + 0
  /* 18A964 8018D354 AC6F0000 */        sw $t7, ($v1)
  /* 18A968 8018D358 AC600004 */        sw $zero, 4($v1)
  /* 18A96C 8018D35C 8CA30000 */        lw $v1, ($a1) # gpDisplayListHead + 0
  /* 18A970 8018D360 3C19F700 */       lui $t9, 0xf700
  /* 18A974 8018D364 240400FF */     addiu $a0, $zero, 0xff
  /* 18A978 8018D368 24780008 */     addiu $t8, $v1, 8
  /* 18A97C 8018D36C ACB80000 */        sw $t8, ($a1) # gpDisplayListHead + 0
  /* 18A980 8018D370 AC790000 */        sw $t9, ($v1)
  /* 18A984 8018D374 0C001B5C */       jal rgba32_to_fill_color
  /* 18A988 8018D378 AFA3001C */        sw $v1, 0x1c($sp)
  /* 18A98C 8018D37C 8FA9001C */        lw $t1, 0x1c($sp)
  /* 18A990 8018D380 3C058004 */       lui $a1, %hi(gpDisplayListHead)
  /* 18A994 8018D384 24A565B0 */     addiu $a1, $a1, %lo(gpDisplayListHead)
  /* 18A998 8018D388 AD220004 */        sw $v0, 4($t1)
  /* 18A99C 8018D38C 8CA30000 */        lw $v1, ($a1) # gpDisplayListHead + 0
  /* 18A9A0 8018D390 3C0BF64D */       lui $t3, (0xF64D8398 >> 16) # 4132275096
  /* 18A9A4 8018D394 3C0C0002 */       lui $t4, (0x28280 >> 16) # 164480
  /* 18A9A8 8018D398 246A0008 */     addiu $t2, $v1, 8
  /* 18A9AC 8018D39C ACAA0000 */        sw $t2, ($a1) # gpDisplayListHead + 0
  /* 18A9B0 8018D3A0 358C8280 */       ori $t4, $t4, (0x28280 & 0xFFFF) # 164480
  /* 18A9B4 8018D3A4 356B8398 */       ori $t3, $t3, (0xF64D8398 & 0xFFFF) # 4132275096
  /* 18A9B8 8018D3A8 AC6B0000 */        sw $t3, ($v1)
  /* 18A9BC 8018D3AC AC6C0004 */        sw $t4, 4($v1)
  /* 18A9C0 8018D3B0 8CA30000 */        lw $v1, ($a1) # gpDisplayListHead + 0
  /* 18A9C4 8018D3B4 3C0EE700 */       lui $t6, 0xe700
  /* 18A9C8 8018D3B8 246D0008 */     addiu $t5, $v1, 8
  /* 18A9CC 8018D3BC ACAD0000 */        sw $t5, ($a1) # gpDisplayListHead + 0
  /* 18A9D0 8018D3C0 AC600004 */        sw $zero, 4($v1)
  /* 18A9D4 8018D3C4 AC6E0000 */        sw $t6, ($v1)
  /* 18A9D8 8018D3C8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18A9DC 8018D3CC 27BD0030 */     addiu $sp, $sp, 0x30
  /* 18A9E0 8018D3D0 03E00008 */        jr $ra
  /* 18A9E4 8018D3D4 00000000 */       nop 

glabel func_ovl63_8018D3D8
  /* 18A9E8 8018D3D8 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 18A9EC 8018D3DC 3C0E8019 */       lui $t6, %hi(func_ovl63_8018D2D0)
  /* 18A9F0 8018D3E0 AFBF003C */        sw $ra, 0x3c($sp)
  /* 18A9F4 8018D3E4 25CED2D0 */     addiu $t6, $t6, %lo(func_ovl63_8018D2D0)
  /* 18A9F8 8018D3E8 240F000F */     addiu $t7, $zero, 0xf
  /* 18A9FC 8018D3EC 24180000 */     addiu $t8, $zero, 0
  /* 18AA00 8018D3F0 24190000 */     addiu $t9, $zero, 0
  /* 18AA04 8018D3F4 AFB9001C */        sw $t9, 0x1c($sp)
  /* 18AA08 8018D3F8 AFB80018 */        sw $t8, 0x18($sp)
  /* 18AA0C 8018D3FC AFAF0014 */        sw $t7, 0x14($sp)
  /* 18AA10 8018D400 AFAE0010 */        sw $t6, 0x10($sp)
  /* 18AA14 8018D404 AFA00020 */        sw $zero, 0x20($sp)
  /* 18AA18 8018D408 AFA00024 */        sw $zero, 0x24($sp)
  /* 18AA1C 8018D40C AFA00028 */        sw $zero, 0x28($sp)
  /* 18AA20 8018D410 AFA0002C */        sw $zero, 0x2c($sp)
  /* 18AA24 8018D414 AFA00030 */        sw $zero, 0x30($sp)
  /* 18AA28 8018D418 AFA00034 */        sw $zero, 0x34($sp)
  /* 18AA2C 8018D41C 240403EC */     addiu $a0, $zero, 0x3ec
  /* 18AA30 8018D420 00002825 */        or $a1, $zero, $zero
  /* 18AA34 8018D424 24060009 */     addiu $a2, $zero, 9
  /* 18AA38 8018D428 0C002E4F */       jal func_8000B93C
  /* 18AA3C 8018D42C 3C078000 */       lui $a3, 0x8000
  /* 18AA40 8018D430 8FBF003C */        lw $ra, 0x3c($sp)
  /* 18AA44 8018D434 27BD0040 */     addiu $sp, $sp, 0x40
  /* 18AA48 8018D438 03E00008 */        jr $ra
  /* 18AA4C 8018D43C 00000000 */       nop 

glabel func_ovl63_8018D440
  /* 18AA50 8018D440 3C028013 */       lui $v0, %hi(D_ovl2_80131580)
  /* 18AA54 8018D444 3C0E8019 */       lui $t6, %hi(D_ovl63_8018E6E0)
  /* 18AA58 8018D448 24421580 */     addiu $v0, $v0, %lo(D_ovl2_80131580)
  /* 18AA5C 8018D44C 25CEE6E0 */     addiu $t6, $t6, %lo(D_ovl63_8018E6E0)
  /* 18AA60 8018D450 240F0096 */     addiu $t7, $zero, 0x96
  /* 18AA64 8018D454 AC4E0008 */        sw $t6, 8($v0) # D_ovl2_80131580 + 8
  /* 18AA68 8018D458 03E00008 */        jr $ra
  /* 18AA6C 8018D45C A44F000C */        sh $t7, 0xc($v0) # D_ovl2_80131580 + 12

glabel func_ovl63_8018D460
  /* 18AA70 8018D460 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 18AA74 8018D464 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 18AA78 8018D468 AFBF003C */        sw $ra, 0x3c($sp)
  /* 18AA7C 8018D46C 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 18AA80 8018D470 240F000F */     addiu $t7, $zero, 0xf
  /* 18AA84 8018D474 24180000 */     addiu $t8, $zero, 0
  /* 18AA88 8018D478 3C190400 */       lui $t9, 0x400
  /* 18AA8C 8018D47C 2408FFFF */     addiu $t0, $zero, -1
  /* 18AA90 8018D480 24090001 */     addiu $t1, $zero, 1
  /* 18AA94 8018D484 240A0001 */     addiu $t2, $zero, 1
  /* 18AA98 8018D488 AFAA0030 */        sw $t2, 0x30($sp)
  /* 18AA9C 8018D48C AFA90028 */        sw $t1, 0x28($sp)
  /* 18AAA0 8018D490 AFA80020 */        sw $t0, 0x20($sp)
  /* 18AAA4 8018D494 AFB9001C */        sw $t9, 0x1c($sp)
  /* 18AAA8 8018D498 AFB80018 */        sw $t8, 0x18($sp)
  /* 18AAAC 8018D49C AFAF0014 */        sw $t7, 0x14($sp)
  /* 18AAB0 8018D4A0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 18AAB4 8018D4A4 AFA00024 */        sw $zero, 0x24($sp)
  /* 18AAB8 8018D4A8 AFA0002C */        sw $zero, 0x2c($sp)
  /* 18AABC 8018D4AC AFA00034 */        sw $zero, 0x34($sp)
  /* 18AAC0 8018D4B0 240403EC */     addiu $a0, $zero, 0x3ec
  /* 18AAC4 8018D4B4 00002825 */        or $a1, $zero, $zero
  /* 18AAC8 8018D4B8 24060009 */     addiu $a2, $zero, 9
  /* 18AACC 8018D4BC 0C002E4F */       jal func_8000B93C
  /* 18AAD0 8018D4C0 3C078000 */       lui $a3, 0x8000
  /* 18AAD4 8018D4C4 AFA20044 */        sw $v0, 0x44($sp)
  /* 18AAD8 8018D4C8 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 18AADC 8018D4CC 8C430074 */        lw $v1, 0x74($v0)
  /* 18AAE0 8018D4D0 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 18AAE4 8018D4D4 3C054120 */       lui $a1, 0x4120
  /* 18AAE8 8018D4D8 3C064320 */       lui $a2, 0x4320
  /* 18AAEC 8018D4DC 3C07439B */       lui $a3, 0x439b
  /* 18AAF0 8018D4E0 24640008 */     addiu $a0, $v1, 8
  /* 18AAF4 8018D4E4 0C001C20 */       jal func_80007080
  /* 18AAF8 8018D4E8 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 18AAFC 8018D4EC 8FBF003C */        lw $ra, 0x3c($sp)
  /* 18AB00 8018D4F0 8FA20044 */        lw $v0, 0x44($sp)
  /* 18AB04 8018D4F4 27BD0048 */     addiu $sp, $sp, 0x48
  /* 18AB08 8018D4F8 03E00008 */        jr $ra
  /* 18AB0C 8018D4FC 00000000 */       nop 

glabel func_ovl63_8018D500
  /* 18AB10 8018D500 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 18AB14 8018D504 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 18AB18 8018D508 AFBF0044 */        sw $ra, 0x44($sp)
  /* 18AB1C 8018D50C 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 18AB20 8018D510 240F000F */     addiu $t7, $zero, 0xf
  /* 18AB24 8018D514 24180000 */     addiu $t8, $zero, 0
  /* 18AB28 8018D518 3C190800 */       lui $t9, 0x800
  /* 18AB2C 8018D51C 2408FFFF */     addiu $t0, $zero, -1
  /* 18AB30 8018D520 24090001 */     addiu $t1, $zero, 1
  /* 18AB34 8018D524 240A0001 */     addiu $t2, $zero, 1
  /* 18AB38 8018D528 AFB00040 */        sw $s0, 0x40($sp)
  /* 18AB3C 8018D52C AFAA0030 */        sw $t2, 0x30($sp)
  /* 18AB40 8018D530 AFA90028 */        sw $t1, 0x28($sp)
  /* 18AB44 8018D534 AFA80020 */        sw $t0, 0x20($sp)
  /* 18AB48 8018D538 AFB9001C */        sw $t9, 0x1c($sp)
  /* 18AB4C 8018D53C AFB80018 */        sw $t8, 0x18($sp)
  /* 18AB50 8018D540 AFAF0014 */        sw $t7, 0x14($sp)
  /* 18AB54 8018D544 AFAE0010 */        sw $t6, 0x10($sp)
  /* 18AB58 8018D548 AFA00024 */        sw $zero, 0x24($sp)
  /* 18AB5C 8018D54C AFA0002C */        sw $zero, 0x2c($sp)
  /* 18AB60 8018D550 AFA00034 */        sw $zero, 0x34($sp)
  /* 18AB64 8018D554 240403EC */     addiu $a0, $zero, 0x3ec
  /* 18AB68 8018D558 00002825 */        or $a1, $zero, $zero
  /* 18AB6C 8018D55C 24060009 */     addiu $a2, $zero, 9
  /* 18AB70 8018D560 0C002E4F */       jal func_8000B93C
  /* 18AB74 8018D564 3C078000 */       lui $a3, 0x8000
  /* 18AB78 8018D568 AFA2004C */        sw $v0, 0x4c($sp)
  /* 18AB7C 8018D56C 8C500074 */        lw $s0, 0x74($v0)
  /* 18AB80 8018D570 24050005 */     addiu $a1, $zero, 5
  /* 18AB84 8018D574 24060001 */     addiu $a2, $zero, 1
  /* 18AB88 8018D578 0C00233C */       jal func_80008CF0
  /* 18AB8C 8018D57C 02002025 */        or $a0, $s0, $zero
  /* 18AB90 8018D580 02002025 */        or $a0, $s0, $zero
  /* 18AB94 8018D584 24050006 */     addiu $a1, $zero, 6
  /* 18AB98 8018D588 0C00233C */       jal func_80008CF0
  /* 18AB9C 8018D58C 24060001 */     addiu $a2, $zero, 1
  /* 18ABA0 8018D590 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 18ABA4 8018D594 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 18ABA8 8018D598 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 18ABAC 8018D59C 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 18ABB0 8018D5A0 44050000 */      mfc1 $a1, $f0
  /* 18ABB4 8018D5A4 44060000 */      mfc1 $a2, $f0
  /* 18ABB8 8018D5A8 26040008 */     addiu $a0, $s0, 8
  /* 18ABBC 8018D5AC 3C07439B */       lui $a3, 0x439b
  /* 18ABC0 8018D5B0 0C001C20 */       jal func_80007080
  /* 18ABC4 8018D5B4 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 18ABC8 8018D5B8 3C01C316 */       lui $at, (0xC3160000 >> 16) # -150.0
  /* 18ABCC 8018D5BC 44813000 */      mtc1 $at, $f6 # -150.0 to cop1
  /* 18ABD0 8018D5C0 3C014316 */       lui $at, (0x43160000 >> 16) # 150.0
  /* 18ABD4 8018D5C4 44814000 */      mtc1 $at, $f8 # 150.0 to cop1
  /* 18ABD8 8018D5C8 3C01C2DC */       lui $at, (0xC2DC0000 >> 16) # -110.0
  /* 18ABDC 8018D5CC 44815000 */      mtc1 $at, $f10 # -110.0 to cop1
  /* 18ABE0 8018D5D0 3C0142DC */       lui $at, (0x42DC0000 >> 16) # 110.0
  /* 18ABE4 8018D5D4 44818000 */      mtc1 $at, $f16 # 110.0 to cop1
  /* 18ABE8 8018D5D8 E606001C */      swc1 $f6, 0x1c($s0)
  /* 18ABEC 8018D5DC E6080020 */      swc1 $f8, 0x20($s0)
  /* 18ABF0 8018D5E0 E60A0024 */      swc1 $f10, 0x24($s0)
  /* 18ABF4 8018D5E4 E6100028 */      swc1 $f16, 0x28($s0)
  /* 18ABF8 8018D5E8 8FBF0044 */        lw $ra, 0x44($sp)
  /* 18ABFC 8018D5EC 8FB00040 */        lw $s0, 0x40($sp)
  /* 18AC00 8018D5F0 8FA2004C */        lw $v0, 0x4c($sp)
  /* 18AC04 8018D5F4 03E00008 */        jr $ra
  /* 18AC08 8018D5F8 27BD0050 */     addiu $sp, $sp, 0x50

glabel func_ovl63_8018D5FC
  /* 18AC0C 8018D5FC 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 18AC10 8018D600 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 18AC14 8018D604 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 18AC18 8018D608 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18AC1C 8018D60C AFBF0014 */        sw $ra, 0x14($sp)
  /* 18AC20 8018D610 244E0008 */     addiu $t6, $v0, 8
  /* 18AC24 8018D614 AC6E0004 */        sw $t6, 4($v1) # gpDisplayListHead + 4
  /* 18AC28 8018D618 3C0FE700 */       lui $t7, 0xe700
  /* 18AC2C 8018D61C AC4F0000 */        sw $t7, ($v0)
  /* 18AC30 8018D620 AC400004 */        sw $zero, 4($v0)
  /* 18AC34 8018D624 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 18AC38 8018D628 3C19D9FF */       lui $t9, (0xD9FFFFFE >> 16) # 3657433086
  /* 18AC3C 8018D62C 3739FFFE */       ori $t9, $t9, (0xD9FFFFFE & 0xFFFF) # 3657433086
  /* 18AC40 8018D630 24580008 */     addiu $t8, $v0, 8
  /* 18AC44 8018D634 AC780004 */        sw $t8, 4($v1) # gpDisplayListHead + 4
  /* 18AC48 8018D638 AC400004 */        sw $zero, 4($v0)
  /* 18AC4C 8018D63C AC590000 */        sw $t9, ($v0)
  /* 18AC50 8018D640 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 18AC54 8018D644 3C09E200 */       lui $t1, (0xE200001C >> 16) # 3791650844
  /* 18AC58 8018D648 3C0A0050 */       lui $t2, (0x5041C8 >> 16) # 5259720
  /* 18AC5C 8018D64C 24480008 */     addiu $t0, $v0, 8
  /* 18AC60 8018D650 AC680004 */        sw $t0, 4($v1) # gpDisplayListHead + 4
  /* 18AC64 8018D654 354A41C8 */       ori $t2, $t2, (0x5041C8 & 0xFFFF) # 5259720
  /* 18AC68 8018D658 3529001C */       ori $t1, $t1, (0xE200001C & 0xFFFF) # 3791650844
  /* 18AC6C 8018D65C AC490000 */        sw $t1, ($v0)
  /* 18AC70 8018D660 0C0051DA */       jal func_80014768
  /* 18AC74 8018D664 AC4A0004 */        sw $t2, 4($v0)
  /* 18AC78 8018D668 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 18AC7C 8018D66C 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 18AC80 8018D670 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 18AC84 8018D674 3C0CE700 */       lui $t4, 0xe700
  /* 18AC88 8018D678 3C0ED9FF */       lui $t6, (0xD9FFFFFF >> 16) # 3657433087
  /* 18AC8C 8018D67C 244B0008 */     addiu $t3, $v0, 8
  /* 18AC90 8018D680 AC6B0004 */        sw $t3, 4($v1) # gpDisplayListHead + 4
  /* 18AC94 8018D684 AC400004 */        sw $zero, 4($v0)
  /* 18AC98 8018D688 AC4C0000 */        sw $t4, ($v0)
  /* 18AC9C 8018D68C 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 18ACA0 8018D690 35CEFFFF */       ori $t6, $t6, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 18ACA4 8018D694 240F0001 */     addiu $t7, $zero, 1
  /* 18ACA8 8018D698 244D0008 */     addiu $t5, $v0, 8
  /* 18ACAC 8018D69C AC6D0004 */        sw $t5, 4($v1) # gpDisplayListHead + 4
  /* 18ACB0 8018D6A0 AC4F0004 */        sw $t7, 4($v0)
  /* 18ACB4 8018D6A4 AC4E0000 */        sw $t6, ($v0)
  /* 18ACB8 8018D6A8 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 18ACBC 8018D6AC 3C19E200 */       lui $t9, (0xE200001C >> 16) # 3791650844
  /* 18ACC0 8018D6B0 3C080050 */       lui $t0, (0x5049D8 >> 16) # 5261784
  /* 18ACC4 8018D6B4 24580008 */     addiu $t8, $v0, 8
  /* 18ACC8 8018D6B8 AC780004 */        sw $t8, 4($v1) # gpDisplayListHead + 4
  /* 18ACCC 8018D6BC 350849D8 */       ori $t0, $t0, (0x5049D8 & 0xFFFF) # 5261784
  /* 18ACD0 8018D6C0 3739001C */       ori $t9, $t9, (0xE200001C & 0xFFFF) # 3791650844
  /* 18ACD4 8018D6C4 AC590000 */        sw $t9, ($v0)
  /* 18ACD8 8018D6C8 AC480004 */        sw $t0, 4($v0)
  /* 18ACDC 8018D6CC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18ACE0 8018D6D0 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18ACE4 8018D6D4 03E00008 */        jr $ra
  /* 18ACE8 8018D6D8 00000000 */       nop 

glabel func_ovl63_8018D6DC
  /* 18ACEC 8018D6DC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18ACF0 8018D6E0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18ACF4 8018D6E4 0C0037CD */       jal func_8000DF34
  /* 18ACF8 8018D6E8 AFA40018 */        sw $a0, 0x18($sp)
  /* 18ACFC 8018D6EC 8FAE0018 */        lw $t6, 0x18($sp)
  /* 18AD00 8018D6F0 3C014170 */       lui $at, (0x41700000 >> 16) # 15.0
  /* 18AD04 8018D6F4 44812000 */      mtc1 $at, $f4 # 15.0 to cop1
  /* 18AD08 8018D6F8 8DCF0074 */        lw $t7, 0x74($t6)
  /* 18AD0C 8018D6FC 3C028019 */       lui $v0, %hi(D_ovl63_8018EA21)
  /* 18AD10 8018D700 8DF80080 */        lw $t8, 0x80($t7)
  /* 18AD14 8018D704 C70600A0 */      lwc1 $f6, 0xa0($t8)
  /* 18AD18 8018D708 46062032 */    c.eq.s $f4, $f6
  /* 18AD1C 8018D70C 00000000 */       nop 
  /* 18AD20 8018D710 4502000A */     bc1fl .L8018D73C
  /* 18AD24 8018D714 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18AD28 8018D718 9042EA21 */       lbu $v0, %lo(D_ovl63_8018EA21)($v0)
  /* 18AD2C 8018D71C 24010004 */     addiu $at, $zero, 4
  /* 18AD30 8018D720 10410003 */       beq $v0, $at, .L8018D730
  /* 18AD34 8018D724 24010006 */     addiu $at, $zero, 6
  /* 18AD38 8018D728 54410004 */      bnel $v0, $at, .L8018D73C
  /* 18AD3C 8018D72C 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018D730:
  /* 18AD40 8018D730 0C06363A */       jal func_ovl63_8018D8E8
  /* 18AD44 8018D734 00000000 */       nop 
  /* 18AD48 8018D738 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018D73C:
  /* 18AD4C 8018D73C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18AD50 8018D740 03E00008 */        jr $ra
  /* 18AD54 8018D744 00000000 */       nop 

glabel func_ovl63_8018D748
  /* 18AD58 8018D748 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 18AD5C 8018D74C AFBF0024 */        sw $ra, 0x24($sp)
  /* 18AD60 8018D750 AFB00020 */        sw $s0, 0x20($sp)
  /* 18AD64 8018D754 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 18AD68 8018D758 00002825 */        or $a1, $zero, $zero
  /* 18AD6C 8018D75C 2406000B */     addiu $a2, $zero, 0xb
  /* 18AD70 8018D760 0C00265A */       jal omMakeGObjCommon
  /* 18AD74 8018D764 3C078000 */       lui $a3, 0x8000
  /* 18AD78 8018D768 3C058019 */       lui $a1, %hi(func_ovl63_8018D5FC)
  /* 18AD7C 8018D76C 240EFFFF */     addiu $t6, $zero, -1
  /* 18AD80 8018D770 00408025 */        or $s0, $v0, $zero
  /* 18AD84 8018D774 AFAE0010 */        sw $t6, 0x10($sp)
  /* 18AD88 8018D778 24A5D5FC */     addiu $a1, $a1, %lo(func_ovl63_8018D5FC)
  /* 18AD8C 8018D77C 00402025 */        or $a0, $v0, $zero
  /* 18AD90 8018D780 2406001B */     addiu $a2, $zero, 0x1b
  /* 18AD94 8018D784 0C00277D */       jal func_80009DF4
  /* 18AD98 8018D788 3C078000 */       lui $a3, 0x8000
  /* 18AD9C 8018D78C 3C0F8019 */       lui $t7, %hi(D_ovl63_8018E9E0)
  /* 18ADA0 8018D790 8DEFE9E0 */        lw $t7, %lo(D_ovl63_8018E9E0)($t7)
  /* 18ADA4 8018D794 3C180000 */       lui $t8, %hi(D_NF_00005300)
  /* 18ADA8 8018D798 27185300 */     addiu $t8, $t8, %lo(D_NF_00005300)
  /* 18ADAC 8018D79C 02002025 */        or $a0, $s0, $zero
  /* 18ADB0 8018D7A0 00003025 */        or $a2, $zero, $zero
  /* 18ADB4 8018D7A4 24070012 */     addiu $a3, $zero, 0x12
  /* 18ADB8 8018D7A8 AFA00010 */        sw $zero, 0x10($sp)
  /* 18ADBC 8018D7AC AFA00014 */        sw $zero, 0x14($sp)
  /* 18ADC0 8018D7B0 0C003D64 */       jal func_8000F590
  /* 18ADC4 8018D7B4 01F82821 */      addu $a1, $t7, $t8
  /* 18ADC8 8018D7B8 3C198019 */       lui $t9, %hi(D_ovl63_8018E9E0)
  /* 18ADCC 8018D7BC 8F39E9E0 */        lw $t9, %lo(D_ovl63_8018E9E0)($t9)
  /* 18ADD0 8018D7C0 3C080000 */       lui $t0, %hi(D_NF_00005028)
  /* 18ADD4 8018D7C4 25085028 */     addiu $t0, $t0, %lo(D_NF_00005028)
  /* 18ADD8 8018D7C8 02002025 */        or $a0, $s0, $zero
  /* 18ADDC 8018D7CC 0C003E3D */       jal func_8000F8F4
  /* 18ADE0 8018D7D0 03282821 */      addu $a1, $t9, $t0
  /* 18ADE4 8018D7D4 3C058019 */       lui $a1, %hi(func_ovl63_8018D6DC)
  /* 18ADE8 8018D7D8 24A5D6DC */     addiu $a1, $a1, %lo(func_ovl63_8018D6DC)
  /* 18ADEC 8018D7DC 02002025 */        or $a0, $s0, $zero
  /* 18ADF0 8018D7E0 24060001 */     addiu $a2, $zero, 1
  /* 18ADF4 8018D7E4 0C002062 */       jal omAddGObjCommonProc
  /* 18ADF8 8018D7E8 24070005 */     addiu $a3, $zero, 5
  /* 18ADFC 8018D7EC 24090001 */     addiu $t1, $zero, 1
  /* 18AE00 8018D7F0 AE09007C */        sw $t1, 0x7c($s0)
  /* 18AE04 8018D7F4 8FBF0024 */        lw $ra, 0x24($sp)
  /* 18AE08 8018D7F8 02001025 */        or $v0, $s0, $zero
  /* 18AE0C 8018D7FC 8FB00020 */        lw $s0, 0x20($sp)
  /* 18AE10 8018D800 03E00008 */        jr $ra
  /* 18AE14 8018D804 27BD0028 */     addiu $sp, $sp, 0x28

glabel func_ovl63_8018D808
  /* 18AE18 8018D808 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 18AE1C 8018D80C 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 18AE20 8018D810 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 18AE24 8018D814 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18AE28 8018D818 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18AE2C 8018D81C 244E0008 */     addiu $t6, $v0, 8
  /* 18AE30 8018D820 AC6E0004 */        sw $t6, 4($v1) # gpDisplayListHead + 4
  /* 18AE34 8018D824 3C0FE700 */       lui $t7, 0xe700
  /* 18AE38 8018D828 AC4F0000 */        sw $t7, ($v0)
  /* 18AE3C 8018D82C AC400004 */        sw $zero, 4($v0)
  /* 18AE40 8018D830 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 18AE44 8018D834 3C19D9FF */       lui $t9, (0xD9FFFFFE >> 16) # 3657433086
  /* 18AE48 8018D838 3739FFFE */       ori $t9, $t9, (0xD9FFFFFE & 0xFFFF) # 3657433086
  /* 18AE4C 8018D83C 24580008 */     addiu $t8, $v0, 8
  /* 18AE50 8018D840 AC780004 */        sw $t8, 4($v1) # gpDisplayListHead + 4
  /* 18AE54 8018D844 AC400004 */        sw $zero, 4($v0)
  /* 18AE58 8018D848 AC590000 */        sw $t9, ($v0)
  /* 18AE5C 8018D84C 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 18AE60 8018D850 3C09E200 */       lui $t1, (0xE200001C >> 16) # 3791650844
  /* 18AE64 8018D854 3C0A0050 */       lui $t2, (0x5041C8 >> 16) # 5259720
  /* 18AE68 8018D858 24480008 */     addiu $t0, $v0, 8
  /* 18AE6C 8018D85C AC680004 */        sw $t0, 4($v1) # gpDisplayListHead + 4
  /* 18AE70 8018D860 354A41C8 */       ori $t2, $t2, (0x5041C8 & 0xFFFF) # 5259720
  /* 18AE74 8018D864 3529001C */       ori $t1, $t1, (0xE200001C & 0xFFFF) # 3791650844
  /* 18AE78 8018D868 AC490000 */        sw $t1, ($v0)
  /* 18AE7C 8018D86C 0C004FA3 */       jal func_80013E8C
  /* 18AE80 8018D870 AC4A0004 */        sw $t2, 4($v0)
  /* 18AE84 8018D874 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 18AE88 8018D878 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 18AE8C 8018D87C 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 18AE90 8018D880 3C0CE700 */       lui $t4, 0xe700
  /* 18AE94 8018D884 3C0ED9FF */       lui $t6, (0xD9FFFFFF >> 16) # 3657433087
  /* 18AE98 8018D888 244B0008 */     addiu $t3, $v0, 8
  /* 18AE9C 8018D88C AC6B0004 */        sw $t3, 4($v1) # gpDisplayListHead + 4
  /* 18AEA0 8018D890 AC400004 */        sw $zero, 4($v0)
  /* 18AEA4 8018D894 AC4C0000 */        sw $t4, ($v0)
  /* 18AEA8 8018D898 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 18AEAC 8018D89C 35CEFFFF */       ori $t6, $t6, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 18AEB0 8018D8A0 240F0001 */     addiu $t7, $zero, 1
  /* 18AEB4 8018D8A4 244D0008 */     addiu $t5, $v0, 8
  /* 18AEB8 8018D8A8 AC6D0004 */        sw $t5, 4($v1) # gpDisplayListHead + 4
  /* 18AEBC 8018D8AC AC4F0004 */        sw $t7, 4($v0)
  /* 18AEC0 8018D8B0 AC4E0000 */        sw $t6, ($v0)
  /* 18AEC4 8018D8B4 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 18AEC8 8018D8B8 3C19E200 */       lui $t9, (0xE200001C >> 16) # 3791650844
  /* 18AECC 8018D8BC 3C080050 */       lui $t0, (0x5049D8 >> 16) # 5261784
  /* 18AED0 8018D8C0 24580008 */     addiu $t8, $v0, 8
  /* 18AED4 8018D8C4 AC780004 */        sw $t8, 4($v1) # gpDisplayListHead + 4
  /* 18AED8 8018D8C8 350849D8 */       ori $t0, $t0, (0x5049D8 & 0xFFFF) # 5261784
  /* 18AEDC 8018D8CC 3739001C */       ori $t9, $t9, (0xE200001C & 0xFFFF) # 3791650844
  /* 18AEE0 8018D8D0 AC590000 */        sw $t9, ($v0)
  /* 18AEE4 8018D8D4 AC480004 */        sw $t0, 4($v0)
  /* 18AEE8 8018D8D8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18AEEC 8018D8DC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18AEF0 8018D8E0 03E00008 */        jr $ra
  /* 18AEF4 8018D8E4 00000000 */       nop 

glabel func_ovl63_8018D8E8
  /* 18AEF8 8018D8E8 3C048019 */       lui $a0, %hi(D_ovl63_8018E9F0)
  /* 18AEFC 8018D8EC 2484E9F0 */     addiu $a0, $a0, %lo(D_ovl63_8018E9F0)
  /* 18AF00 8018D8F0 8C8E0004 */        lw $t6, 4($a0) # D_ovl63_8018E9F0 + 4
  /* 18AF04 8018D8F4 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 18AF08 8018D8F8 AFB00018 */        sw $s0, 0x18($sp)
  /* 18AF0C 8018D8FC 908F0031 */       lbu $t7, 0x31($a0) # D_ovl63_8018E9F0 + 49
  /* 18AF10 8018D900 AFBF001C */        sw $ra, 0x1c($sp)
  /* 18AF14 8018D904 8C900008 */        lw $s0, 8($a0) # D_ovl63_8018E9F0 + 8
  /* 18AF18 8018D908 8DC30074 */        lw $v1, 0x74($t6)
  /* 18AF1C 8018D90C 24010004 */     addiu $at, $zero, 4
  /* 18AF20 8018D910 8E020074 */        lw $v0, 0x74($s0)
  /* 18AF24 8018D914 15E1000C */       bne $t7, $at, .L8018D948
  /* 18AF28 8018D918 2463001C */     addiu $v1, $v1, 0x1c
  /* 18AF2C 8018D91C 3C0140A0 */       lui $at, (0x40A00000 >> 16) # 5.0
  /* 18AF30 8018D920 44813000 */      mtc1 $at, $f6 # 5.0 to cop1
  /* 18AF34 8018D924 C4640000 */      lwc1 $f4, ($v1)
  /* 18AF38 8018D928 3C014170 */       lui $at, (0x41700000 >> 16) # 15.0
  /* 18AF3C 8018D92C 44818000 */      mtc1 $at, $f16 # 15.0 to cop1
  /* 18AF40 8018D930 46062200 */     add.s $f8, $f4, $f6
  /* 18AF44 8018D934 E448001C */      swc1 $f8, 0x1c($v0)
  /* 18AF48 8018D938 C46A0004 */      lwc1 $f10, 4($v1)
  /* 18AF4C 8018D93C 46105480 */     add.s $f18, $f10, $f16
  /* 18AF50 8018D940 1000000B */         b .L8018D970
  /* 18AF54 8018D944 E4520020 */      swc1 $f18, 0x20($v0)
  .L8018D948:
  /* 18AF58 8018D948 3C014170 */       lui $at, (0x41700000 >> 16) # 15.0
  /* 18AF5C 8018D94C 44813000 */      mtc1 $at, $f6 # 15.0 to cop1
  /* 18AF60 8018D950 C4640000 */      lwc1 $f4, ($v1)
  /* 18AF64 8018D954 3C0140A0 */       lui $at, (0x40A00000 >> 16) # 5.0
  /* 18AF68 8018D958 44818000 */      mtc1 $at, $f16 # 5.0 to cop1
  /* 18AF6C 8018D95C 46062200 */     add.s $f8, $f4, $f6
  /* 18AF70 8018D960 E448001C */      swc1 $f8, 0x1c($v0)
  /* 18AF74 8018D964 C46A0004 */      lwc1 $f10, 4($v1)
  /* 18AF78 8018D968 46105480 */     add.s $f18, $f10, $f16
  /* 18AF7C 8018D96C E4520020 */      swc1 $f18, 0x20($v0)
  .L8018D970:
  /* 18AF80 8018D970 3C188019 */       lui $t8, %hi(D_ovl63_8018E9E0)
  /* 18AF84 8018D974 8F18E9E0 */        lw $t8, %lo(D_ovl63_8018E9E0)($t8)
  /* 18AF88 8018D978 3C190000 */       lui $t9, %hi(D_NF_00005C20)
  /* 18AF8C 8018D97C 27395C20 */     addiu $t9, $t9, %lo(D_NF_00005C20)
  /* 18AF90 8018D980 02002025 */        or $a0, $s0, $zero
  /* 18AF94 8018D984 00002825 */        or $a1, $zero, $zero
  /* 18AF98 8018D988 24070000 */     addiu $a3, $zero, 0
  /* 18AF9C 8018D98C 0C002FB6 */       jal func_8000BED8
  /* 18AFA0 8018D990 03193021 */      addu $a2, $t8, $t9
  /* 18AFA4 8018D994 0C0037CD */       jal func_8000DF34
  /* 18AFA8 8018D998 02002025 */        or $a0, $s0, $zero
  /* 18AFAC 8018D99C AE00007C */        sw $zero, 0x7c($s0)
  /* 18AFB0 8018D9A0 8FBF001C */        lw $ra, 0x1c($sp)
  /* 18AFB4 8018D9A4 8FB00018 */        lw $s0, 0x18($sp)
  /* 18AFB8 8018D9A8 27BD0020 */     addiu $sp, $sp, 0x20
  /* 18AFBC 8018D9AC 03E00008 */        jr $ra
  /* 18AFC0 8018D9B0 00000000 */       nop 

glabel func_ovl63_8018D9B4
  /* 18AFC4 8018D9B4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18AFC8 8018D9B8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18AFCC 8018D9BC 0C0037CD */       jal func_8000DF34
  /* 18AFD0 8018D9C0 AFA40018 */        sw $a0, 0x18($sp)
  /* 18AFD4 8018D9C4 8FA40018 */        lw $a0, 0x18($sp)
  /* 18AFD8 8018D9C8 3C018019 */       lui $at, %hi(D_ovl63_8018E7E0)
  /* 18AFDC 8018D9CC C424E7E0 */      lwc1 $f4, %lo(D_ovl63_8018E7E0)($at)
  /* 18AFE0 8018D9D0 8C8E0074 */        lw $t6, 0x74($a0)
  /* 18AFE4 8018D9D4 24180001 */     addiu $t8, $zero, 1
  /* 18AFE8 8018D9D8 8DCF0080 */        lw $t7, 0x80($t6)
  /* 18AFEC 8018D9DC C5E60098 */      lwc1 $f6, 0x98($t7)
  /* 18AFF0 8018D9E0 46062032 */    c.eq.s $f4, $f6
  /* 18AFF4 8018D9E4 00000000 */       nop 
  /* 18AFF8 8018D9E8 45020003 */     bc1fl .L8018D9F8
  /* 18AFFC 8018D9EC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18B000 8018D9F0 AC98007C */        sw $t8, 0x7c($a0)
  /* 18B004 8018D9F4 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018D9F8:
  /* 18B008 8018D9F8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18B00C 8018D9FC 03E00008 */        jr $ra
  /* 18B010 8018DA00 00000000 */       nop 

glabel func_ovl63_8018DA04
  /* 18B014 8018DA04 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 18B018 8018DA08 AFBF0024 */        sw $ra, 0x24($sp)
  /* 18B01C 8018DA0C AFB00020 */        sw $s0, 0x20($sp)
  /* 18B020 8018DA10 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 18B024 8018DA14 00002825 */        or $a1, $zero, $zero
  /* 18B028 8018DA18 2406000B */     addiu $a2, $zero, 0xb
  /* 18B02C 8018DA1C 0C00265A */       jal omMakeGObjCommon
  /* 18B030 8018DA20 3C078000 */       lui $a3, 0x8000
  /* 18B034 8018DA24 3C058019 */       lui $a1, %hi(func_ovl63_8018D808)
  /* 18B038 8018DA28 240EFFFF */     addiu $t6, $zero, -1
  /* 18B03C 8018DA2C 00408025 */        or $s0, $v0, $zero
  /* 18B040 8018DA30 AFAE0010 */        sw $t6, 0x10($sp)
  /* 18B044 8018DA34 24A5D808 */     addiu $a1, $a1, %lo(func_ovl63_8018D808)
  /* 18B048 8018DA38 00402025 */        or $a0, $v0, $zero
  /* 18B04C 8018DA3C 2406001B */     addiu $a2, $zero, 0x1b
  /* 18B050 8018DA40 0C00277D */       jal func_80009DF4
  /* 18B054 8018DA44 3C078000 */       lui $a3, 0x8000
  /* 18B058 8018DA48 3C0F8019 */       lui $t7, %hi(D_ovl63_8018E9E0)
  /* 18B05C 8018DA4C 8DEFE9E0 */        lw $t7, %lo(D_ovl63_8018E9E0)($t7)
  /* 18B060 8018DA50 3C180000 */       lui $t8, %hi(D_NF_00005B68)
  /* 18B064 8018DA54 27185B68 */     addiu $t8, $t8, %lo(D_NF_00005B68)
  /* 18B068 8018DA58 02002025 */        or $a0, $s0, $zero
  /* 18B06C 8018DA5C 0C0024B4 */       jal func_800092D0
  /* 18B070 8018DA60 01F82821 */      addu $a1, $t7, $t8
  /* 18B074 8018DA64 8E040074 */        lw $a0, 0x74($s0)
  /* 18B078 8018DA68 24050012 */     addiu $a1, $zero, 0x12
  /* 18B07C 8018DA6C 0C002330 */       jal func_80008CC0
  /* 18B080 8018DA70 00003025 */        or $a2, $zero, $zero
  /* 18B084 8018DA74 3C198019 */       lui $t9, %hi(D_ovl63_8018E9E0)
  /* 18B088 8018DA78 8F39E9E0 */        lw $t9, %lo(D_ovl63_8018E9E0)($t9)
  /* 18B08C 8018DA7C 3C080000 */       lui $t0, %hi(D_NF_00005A98)
  /* 18B090 8018DA80 25085A98 */     addiu $t0, $t0, %lo(D_NF_00005A98)
  /* 18B094 8018DA84 02002025 */        or $a0, $s0, $zero
  /* 18B098 8018DA88 0C003E3D */       jal func_8000F8F4
  /* 18B09C 8018DA8C 03282821 */      addu $a1, $t9, $t0
  /* 18B0A0 8018DA90 3C058019 */       lui $a1, %hi(func_ovl63_8018D9B4)
  /* 18B0A4 8018DA94 24A5D9B4 */     addiu $a1, $a1, %lo(func_ovl63_8018D9B4)
  /* 18B0A8 8018DA98 02002025 */        or $a0, $s0, $zero
  /* 18B0AC 8018DA9C 24060001 */     addiu $a2, $zero, 1
  /* 18B0B0 8018DAA0 0C002062 */       jal omAddGObjCommonProc
  /* 18B0B4 8018DAA4 24070005 */     addiu $a3, $zero, 5
  /* 18B0B8 8018DAA8 24090001 */     addiu $t1, $zero, 1
  /* 18B0BC 8018DAAC AE09007C */        sw $t1, 0x7c($s0)
  /* 18B0C0 8018DAB0 8FBF0024 */        lw $ra, 0x24($sp)
  /* 18B0C4 8018DAB4 02001025 */        or $v0, $s0, $zero
  /* 18B0C8 8018DAB8 3C018019 */       lui $at, %hi(D_ovl63_8018EA21)
  /* 18B0CC 8018DABC 8FB00020 */        lw $s0, 0x20($sp)
  /* 18B0D0 8018DAC0 A020EA21 */        sb $zero, %lo(D_ovl63_8018EA21)($at)
  /* 18B0D4 8018DAC4 03E00008 */        jr $ra
  /* 18B0D8 8018DAC8 27BD0028 */     addiu $sp, $sp, 0x28

glabel func_ovl63_8018DACC
  /* 18B0DC 8018DACC 3C058019 */       lui $a1, %hi(D_ovl63_8018E9E8)
  /* 18B0E0 8018DAD0 24A5E9E8 */     addiu $a1, $a1, %lo(D_ovl63_8018E9E8)
  /* 18B0E4 8018DAD4 8CA30000 */        lw $v1, ($a1) # D_ovl63_8018E9E8 + 0
  /* 18B0E8 8018DAD8 3C048019 */       lui $a0, %hi(D_ovl63_8018E9FC)
  /* 18B0EC 8018DADC 24010001 */     addiu $at, $zero, 1
  /* 18B0F0 8018DAE0 90620027 */       lbu $v0, 0x27($v1)
  /* 18B0F4 8018DAE4 8C84E9FC */        lw $a0, %lo(D_ovl63_8018E9FC)($a0)
  /* 18B0F8 8018DAE8 54410013 */      bnel $v0, $at, .L8018DB38
  /* 18B0FC 8018DAEC 240A0001 */     addiu $t2, $zero, 1
  /* 18B100 8018DAF0 946E000C */       lhu $t6, 0xc($v1)
  /* 18B104 8018DAF4 8C820074 */        lw $v0, 0x74($a0)
  /* 18B108 8018DAF8 2408FFD8 */     addiu $t0, $zero, -0x28
  /* 18B10C 8018DAFC 25CFFF6A */     addiu $t7, $t6, -0x96
  /* 18B110 8018DB00 448F2000 */      mtc1 $t7, $f4
  /* 18B114 8018DB04 00000000 */       nop 
  /* 18B118 8018DB08 468021A0 */   cvt.s.w $f6, $f4
  /* 18B11C 8018DB0C E446001C */      swc1 $f6, 0x1c($v0)
  /* 18B120 8018DB10 8CB80000 */        lw $t8, ($a1) # D_ovl63_8018E9E8 + 0
  /* 18B124 8018DB14 9319000E */       lbu $t9, 0xe($t8)
  /* 18B128 8018DB18 01194823 */      subu $t1, $t0, $t9
  /* 18B12C 8018DB1C 44894000 */      mtc1 $t1, $f8
  /* 18B130 8018DB20 00000000 */       nop 
  /* 18B134 8018DB24 468042A0 */   cvt.s.w $f10, $f8
  /* 18B138 8018DB28 E44A0020 */      swc1 $f10, 0x20($v0)
  /* 18B13C 8018DB2C 03E00008 */        jr $ra
  /* 18B140 8018DB30 AC80007C */        sw $zero, 0x7c($a0)

  /* 18B144 8018DB34 240A0001 */     addiu $t2, $zero, 1
  .L8018DB38:
  /* 18B148 8018DB38 AC8A007C */        sw $t2, 0x7c($a0)
  /* 18B14C 8018DB3C 03E00008 */        jr $ra
  /* 18B150 8018DB40 00000000 */       nop 

glabel func_ovl63_8018DB44
  /* 18B154 8018DB44 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 18B158 8018DB48 AFBF0024 */        sw $ra, 0x24($sp)
  /* 18B15C 8018DB4C AFB00020 */        sw $s0, 0x20($sp)
  /* 18B160 8018DB50 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 18B164 8018DB54 00002825 */        or $a1, $zero, $zero
  /* 18B168 8018DB58 2406000B */     addiu $a2, $zero, 0xb
  /* 18B16C 8018DB5C 0C00265A */       jal omMakeGObjCommon
  /* 18B170 8018DB60 3C078000 */       lui $a3, 0x8000
  /* 18B174 8018DB64 3C058019 */       lui $a1, %hi(func_ovl63_8018D808)
  /* 18B178 8018DB68 240EFFFF */     addiu $t6, $zero, -1
  /* 18B17C 8018DB6C 00408025 */        or $s0, $v0, $zero
  /* 18B180 8018DB70 AFAE0010 */        sw $t6, 0x10($sp)
  /* 18B184 8018DB74 24A5D808 */     addiu $a1, $a1, %lo(func_ovl63_8018D808)
  /* 18B188 8018DB78 00402025 */        or $a0, $v0, $zero
  /* 18B18C 8018DB7C 2406001B */     addiu $a2, $zero, 0x1b
  /* 18B190 8018DB80 0C00277D */       jal func_80009DF4
  /* 18B194 8018DB84 3C078000 */       lui $a3, 0x8000
  /* 18B198 8018DB88 3C0F8019 */       lui $t7, %hi(D_ovl63_8018E9E0)
  /* 18B19C 8018DB8C 8DEFE9E0 */        lw $t7, %lo(D_ovl63_8018E9E0)($t7)
  /* 18B1A0 8018DB90 3C180000 */       lui $t8, %hi(D_NF_00005E40)
  /* 18B1A4 8018DB94 27185E40 */     addiu $t8, $t8, %lo(D_NF_00005E40)
  /* 18B1A8 8018DB98 02002025 */        or $a0, $s0, $zero
  /* 18B1AC 8018DB9C 0C0024B4 */       jal func_800092D0
  /* 18B1B0 8018DBA0 01F82821 */      addu $a1, $t7, $t8
  /* 18B1B4 8018DBA4 8E040074 */        lw $a0, 0x74($s0)
  /* 18B1B8 8018DBA8 24050012 */     addiu $a1, $zero, 0x12
  /* 18B1BC 8018DBAC 0C002330 */       jal func_80008CC0
  /* 18B1C0 8018DBB0 00003025 */        or $a2, $zero, $zero
  /* 18B1C4 8018DBB4 24190001 */     addiu $t9, $zero, 1
  /* 18B1C8 8018DBB8 AE19007C */        sw $t9, 0x7c($s0)
  /* 18B1CC 8018DBBC 8FBF0024 */        lw $ra, 0x24($sp)
  /* 18B1D0 8018DBC0 02001025 */        or $v0, $s0, $zero
  /* 18B1D4 8018DBC4 8FB00020 */        lw $s0, 0x20($sp)
  /* 18B1D8 8018DBC8 03E00008 */        jr $ra
  /* 18B1DC 8018DBCC 27BD0028 */     addiu $sp, $sp, 0x28

glabel func_ovl63_8018DBD0
  /* 18B1E0 8018DBD0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18B1E4 8018DBD4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18B1E8 8018DBD8 0C0635D2 */       jal func_ovl63_8018D748
  /* 18B1EC 8018DBDC 00000000 */       nop 
  /* 18B1F0 8018DBE0 3C018019 */       lui $at, %hi(D_ovl63_8018E9F4)
  /* 18B1F4 8018DBE4 0C063681 */       jal func_ovl63_8018DA04
  /* 18B1F8 8018DBE8 AC22E9F4 */        sw $v0, %lo(D_ovl63_8018E9F4)($at)
  /* 18B1FC 8018DBEC 3C018019 */       lui $at, %hi(D_ovl63_8018E9F8)
  /* 18B200 8018DBF0 0C0636D1 */       jal func_ovl63_8018DB44
  /* 18B204 8018DBF4 AC22E9F8 */        sw $v0, %lo(D_ovl63_8018E9F8)($at)
  /* 18B208 8018DBF8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18B20C 8018DBFC 3C018019 */       lui $at, %hi(D_ovl63_8018E9FC)
  /* 18B210 8018DC00 AC22E9FC */        sw $v0, %lo(D_ovl63_8018E9FC)($at)
  /* 18B214 8018DC04 03E00008 */        jr $ra
  /* 18B218 8018DC08 27BD0018 */     addiu $sp, $sp, 0x18

glabel func_ovl63_8018DC0C
  /* 18B21C 8018DC0C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 18B220 8018DC10 AFBF001C */        sw $ra, 0x1c($sp)
  /* 18B224 8018DC14 AFA40028 */        sw $a0, 0x28($sp)
  /* 18B228 8018DC18 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 18B22C 8018DC1C 00002825 */        or $a1, $zero, $zero
  /* 18B230 8018DC20 2406000B */     addiu $a2, $zero, 0xb
  /* 18B234 8018DC24 0C00265A */       jal omMakeGObjCommon
  /* 18B238 8018DC28 3C078000 */       lui $a3, 0x8000
  /* 18B23C 8018DC2C 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 18B240 8018DC30 240EFFFF */     addiu $t6, $zero, -1
  /* 18B244 8018DC34 AFA20024 */        sw $v0, 0x24($sp)
  /* 18B248 8018DC38 AFAE0010 */        sw $t6, 0x10($sp)
  /* 18B24C 8018DC3C 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 18B250 8018DC40 00402025 */        or $a0, $v0, $zero
  /* 18B254 8018DC44 2406001A */     addiu $a2, $zero, 0x1a
  /* 18B258 8018DC48 0C00277D */       jal func_80009DF4
  /* 18B25C 8018DC4C 3C078000 */       lui $a3, 0x8000
  /* 18B260 8018DC50 3C0F8019 */       lui $t7, %hi(D_ovl63_8018E9E0)
  /* 18B264 8018DC54 8DEFE9E0 */        lw $t7, %lo(D_ovl63_8018E9E0)($t7)
  /* 18B268 8018DC58 8FB80028 */        lw $t8, 0x28($sp)
  /* 18B26C 8018DC5C 8FA40024 */        lw $a0, 0x24($sp)
  /* 18B270 8018DC60 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 18B274 8018DC64 01F82821 */      addu $a1, $t7, $t8
  /* 18B278 8018DC68 94590024 */       lhu $t9, 0x24($v0)
  /* 18B27C 8018DC6C 37280004 */       ori $t0, $t9, 4
  /* 18B280 8018DC70 A4480024 */        sh $t0, 0x24($v0)
  /* 18B284 8018DC74 8FBF001C */        lw $ra, 0x1c($sp)
  /* 18B288 8018DC78 27BD0028 */     addiu $sp, $sp, 0x28
  /* 18B28C 8018DC7C 03E00008 */        jr $ra
  /* 18B290 8018DC80 00000000 */       nop 

glabel func_ovl63_8018DC84
  /* 18B294 8018DC84 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 18B298 8018DC88 AFBF001C */        sw $ra, 0x1c($sp)
  /* 18B29C 8018DC8C 3C040001 */       lui $a0, %hi(D_NF_00011F60)
  /* 18B2A0 8018DC90 AFB00018 */        sw $s0, 0x18($sp)
  /* 18B2A4 8018DC94 0C063703 */       jal func_ovl63_8018DC0C
  /* 18B2A8 8018DC98 24841F60 */     addiu $a0, $a0, %lo(D_NF_00011F60)
  /* 18B2AC 8018DC9C 3C108019 */       lui $s0, %hi(D_ovl63_8018E9F0)
  /* 18B2B0 8018DCA0 2610E9F0 */     addiu $s0, $s0, %lo(D_ovl63_8018E9F0)
  /* 18B2B4 8018DCA4 3C040002 */       lui $a0, %hi(D_NF_0001D338)
  /* 18B2B8 8018DCA8 AE020000 */        sw $v0, ($s0) # D_ovl63_8018E9F0 + 0
  /* 18B2BC 8018DCAC 0C063703 */       jal func_ovl63_8018DC0C
  /* 18B2C0 8018DCB0 2484D338 */     addiu $a0, $a0, %lo(D_NF_0001D338)
  /* 18B2C4 8018DCB4 3C040002 */       lui $a0, %hi(D_NF_0001D948)
  /* 18B2C8 8018DCB8 AE020010 */        sw $v0, 0x10($s0) # D_ovl63_8018E9F0 + 16
  /* 18B2CC 8018DCBC 0C063703 */       jal func_ovl63_8018DC0C
  /* 18B2D0 8018DCC0 2484D948 */     addiu $a0, $a0, %lo(D_NF_0001D948)
  /* 18B2D4 8018DCC4 3C040002 */       lui $a0, %hi(D_NF_0001DF58)
  /* 18B2D8 8018DCC8 AE020014 */        sw $v0, 0x14($s0) # D_ovl63_8018E9F0 + 20
  /* 18B2DC 8018DCCC 0C063703 */       jal func_ovl63_8018DC0C
  /* 18B2E0 8018DCD0 2484DF58 */     addiu $a0, $a0, %lo(D_NF_0001DF58)
  /* 18B2E4 8018DCD4 3C040001 */       lui $a0, %hi(D_NF_00009628)
  /* 18B2E8 8018DCD8 AE020018 */        sw $v0, 0x18($s0) # D_ovl63_8018E9F0 + 24
  /* 18B2EC 8018DCDC 0C063703 */       jal func_ovl63_8018DC0C
  /* 18B2F0 8018DCE0 24849628 */     addiu $a0, $a0, %lo(D_NF_00009628)
  /* 18B2F4 8018DCE4 3C040002 */       lui $a0, %hi(D_NF_0001E018)
  /* 18B2F8 8018DCE8 2484E018 */     addiu $a0, $a0, %lo(D_NF_0001E018)
  /* 18B2FC 8018DCEC AE02001C */        sw $v0, 0x1c($s0) # D_ovl63_8018E9F0 + 28
  /* 18B300 8018DCF0 0C063703 */       jal func_ovl63_8018DC0C
  /* 18B304 8018DCF4 AFA40024 */        sw $a0, 0x24($sp)
  /* 18B308 8018DCF8 8FA40024 */        lw $a0, 0x24($sp)
  /* 18B30C 8018DCFC 0C063703 */       jal func_ovl63_8018DC0C
  /* 18B310 8018DD00 AE020020 */        sw $v0, 0x20($s0) # D_ovl63_8018E9F0 + 32
  /* 18B314 8018DD04 8FBF001C */        lw $ra, 0x1c($sp)
  /* 18B318 8018DD08 AE020024 */        sw $v0, 0x24($s0) # D_ovl63_8018E9F0 + 36
  /* 18B31C 8018DD0C 8FB00018 */        lw $s0, 0x18($sp)
  /* 18B320 8018DD10 03E00008 */        jr $ra
  /* 18B324 8018DD14 27BD0028 */     addiu $sp, $sp, 0x28

glabel func_ovl63_8018DD18
  /* 18B328 8018DD18 3C038019 */       lui $v1, %hi(D_ovl63_8018E9E8)
  /* 18B32C 8018DD1C 2463E9E8 */     addiu $v1, $v1, %lo(D_ovl63_8018E9E8)
  /* 18B330 8018DD20 8C6F0000 */        lw $t7, ($v1) # D_ovl63_8018E9E8 + 0
  /* 18B334 8018DD24 3C028019 */       lui $v0, %hi(D_ovl63_8018E9F0)
  /* 18B338 8018DD28 2442E9F0 */     addiu $v0, $v0, %lo(D_ovl63_8018E9F0)
  /* 18B33C 8018DD2C 8DF80008 */        lw $t8, 8($t7)
  /* 18B340 8018DD30 8C4E0000 */        lw $t6, ($v0) # D_ovl63_8018E9F0 + 0
  /* 18B344 8018DD34 2709003C */     addiu $t1, $t8, 0x3c
  .L8018DD38:
  /* 18B348 8018DD38 8F080000 */        lw $t0, ($t8)
  /* 18B34C 8018DD3C 2718000C */     addiu $t8, $t8, 0xc
  /* 18B350 8018DD40 25CE000C */     addiu $t6, $t6, 0xc
  /* 18B354 8018DD44 ADC80004 */        sw $t0, 4($t6)
  /* 18B358 8018DD48 8F19FFF8 */        lw $t9, -8($t8)
  /* 18B35C 8018DD4C ADD90008 */        sw $t9, 8($t6)
  /* 18B360 8018DD50 8F08FFFC */        lw $t0, -4($t8)
  /* 18B364 8018DD54 1709FFF8 */       bne $t8, $t1, .L8018DD38
  /* 18B368 8018DD58 ADC8000C */        sw $t0, 0xc($t6)
  /* 18B36C 8018DD5C 8F080000 */        lw $t0, ($t8)
  /* 18B370 8018DD60 ADC80010 */        sw $t0, 0x10($t6)
  /* 18B374 8018DD64 8F190004 */        lw $t9, 4($t8)
  /* 18B378 8018DD68 ADD90014 */        sw $t9, 0x14($t6)
  /* 18B37C 8018DD6C 8C6A0000 */        lw $t2, ($v1) # D_ovl63_8018E9E8 + 0
  /* 18B380 8018DD70 8C4D0000 */        lw $t5, ($v0) # D_ovl63_8018E9F0 + 0
  /* 18B384 8018DD74 24190201 */     addiu $t9, $zero, 0x201
  /* 18B388 8018DD78 914B0004 */       lbu $t3, 4($t2)
  /* 18B38C 8018DD7C 256C000A */     addiu $t4, $t3, 0xa
  /* 18B390 8018DD80 448C2000 */      mtc1 $t4, $f4
  /* 18B394 8018DD84 00000000 */       nop 
  /* 18B398 8018DD88 468021A0 */   cvt.s.w $f6, $f4
  /* 18B39C 8018DD8C E5A60058 */      swc1 $f6, 0x58($t5)
  /* 18B3A0 8018DD90 8C6F0000 */        lw $t7, ($v1) # D_ovl63_8018E9E8 + 0
  /* 18B3A4 8018DD94 8C4E0000 */        lw $t6, ($v0) # D_ovl63_8018E9F0 + 0
  /* 18B3A8 8018DD98 91E90005 */       lbu $t1, 5($t7)
  /* 18B3AC 8018DD9C 253800A0 */     addiu $t8, $t1, 0xa0
  /* 18B3B0 8018DDA0 44984000 */      mtc1 $t8, $f8
  /* 18B3B4 8018DDA4 00000000 */       nop 
  /* 18B3B8 8018DDA8 468042A0 */   cvt.s.w $f10, $f8
  /* 18B3BC 8018DDAC E5CA005C */      swc1 $f10, 0x5c($t6)
  /* 18B3C0 8018DDB0 8C480000 */        lw $t0, ($v0) # D_ovl63_8018E9F0 + 0
  /* 18B3C4 8018DDB4 03E00008 */        jr $ra
  /* 18B3C8 8018DDB8 A5190024 */        sh $t9, 0x24($t0)

glabel func_ovl63_8018DDBC
  /* 18B3CC 8018DDBC 3C068019 */       lui $a2, %hi(D_ovl63_8018E9E8)
  /* 18B3D0 8018DDC0 24C6E9E8 */     addiu $a2, $a2, %lo(D_ovl63_8018E9E8)
  /* 18B3D4 8018DDC4 8CC50000 */        lw $a1, ($a2) # D_ovl63_8018E9E8 + 0
  /* 18B3D8 8018DDC8 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 18B3DC 8018DDCC AFBF0014 */        sw $ra, 0x14($sp)
  /* 18B3E0 8018DDD0 90A3000F */       lbu $v1, 0xf($a1)
  /* 18B3E4 8018DDD4 3C048019 */       lui $a0, %hi(D_ovl63_8018E9F4)
  /* 18B3E8 8018DDD8 8C84E9F4 */        lw $a0, %lo(D_ovl63_8018E9F4)($a0)
  /* 18B3EC 8018DDDC 14600004 */      bnez $v1, .L8018DDF0
  /* 18B3F0 8018DDE0 24070000 */     addiu $a3, $zero, 0
  /* 18B3F4 8018DDE4 240E0001 */     addiu $t6, $zero, 1
  /* 18B3F8 8018DDE8 10000028 */         b .L8018DE8C
  /* 18B3FC 8018DDEC AC8E007C */        sw $t6, 0x7c($a0)
  .L8018DDF0:
  /* 18B400 8018DDF0 94AF000C */       lhu $t7, 0xc($a1)
  /* 18B404 8018DDF4 8C820074 */        lw $v0, 0x74($a0)
  /* 18B408 8018DDF8 2409FFD8 */     addiu $t1, $zero, -0x28
  /* 18B40C 8018DDFC 25F8FF6A */     addiu $t8, $t7, -0x96
  /* 18B410 8018DE00 44982000 */      mtc1 $t8, $f4
  /* 18B414 8018DE04 24010002 */     addiu $at, $zero, 2
  /* 18B418 8018DE08 0003C080 */       sll $t8, $v1, 2
  /* 18B41C 8018DE0C 468021A0 */   cvt.s.w $f6, $f4
  /* 18B420 8018DE10 00002825 */        or $a1, $zero, $zero
  /* 18B424 8018DE14 E446001C */      swc1 $f6, 0x1c($v0)
  /* 18B428 8018DE18 8CD90000 */        lw $t9, ($a2) # D_ovl63_8018E9E8 + 0
  /* 18B42C 8018DE1C 9328000E */       lbu $t0, 0xe($t9)
  /* 18B430 8018DE20 3C198019 */       lui $t9, %hi(D_ovl63_8018E6F4)
  /* 18B434 8018DE24 0338C821 */      addu $t9, $t9, $t8
  /* 18B438 8018DE28 01285023 */      subu $t2, $t1, $t0
  /* 18B43C 8018DE2C 448A4000 */      mtc1 $t2, $f8
  /* 18B440 8018DE30 3C098019 */       lui $t1, %hi(D_ovl63_8018E9E0)
  /* 18B444 8018DE34 468042A0 */   cvt.s.w $f10, $f8
  /* 18B448 8018DE38 14610005 */       bne $v1, $at, .L8018DE50
  /* 18B44C 8018DE3C E44A0020 */      swc1 $f10, 0x20($v0)
  /* 18B450 8018DE40 8C8B0074 */        lw $t3, 0x74($a0)
  /* 18B454 8018DE44 8D6C0010 */        lw $t4, 0x10($t3)
  /* 18B458 8018DE48 10000005 */         b .L8018DE60
  /* 18B45C 8018DE4C A1800054 */        sb $zero, 0x54($t4)
  .L8018DE50:
  /* 18B460 8018DE50 8C8E0074 */        lw $t6, 0x74($a0)
  /* 18B464 8018DE54 240D0002 */     addiu $t5, $zero, 2
  /* 18B468 8018DE58 8DCF0010 */        lw $t7, 0x10($t6)
  /* 18B46C 8018DE5C A1ED0054 */        sb $t5, 0x54($t7)
  .L8018DE60:
  /* 18B470 8018DE60 8F39E6F4 */        lw $t9, %lo(D_ovl63_8018E6F4)($t9)
  /* 18B474 8018DE64 8D29E9E0 */        lw $t1, %lo(D_ovl63_8018E9E0)($t1)
  /* 18B478 8018DE68 AFA3001C */        sw $v1, 0x1c($sp)
  /* 18B47C 8018DE6C AFA40018 */        sw $a0, 0x18($sp)
  /* 18B480 8018DE70 0C002FB6 */       jal func_8000BED8
  /* 18B484 8018DE74 03293021 */      addu $a2, $t9, $t1
  /* 18B488 8018DE78 0C0037CD */       jal func_8000DF34
  /* 18B48C 8018DE7C 8FA40018 */        lw $a0, 0x18($sp)
  /* 18B490 8018DE80 8FA40018 */        lw $a0, 0x18($sp)
  /* 18B494 8018DE84 8FA3001C */        lw $v1, 0x1c($sp)
  /* 18B498 8018DE88 AC80007C */        sw $zero, 0x7c($a0)
  .L8018DE8C:
  /* 18B49C 8018DE8C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18B4A0 8018DE90 3C018019 */       lui $at, %hi(D_ovl63_8018EA21)
  /* 18B4A4 8018DE94 A023EA21 */        sb $v1, %lo(D_ovl63_8018EA21)($at)
  /* 18B4A8 8018DE98 03E00008 */        jr $ra
  /* 18B4AC 8018DE9C 27BD0020 */     addiu $sp, $sp, 0x20

glabel func_ovl63_8018DEA0
  /* 18B4B0 8018DEA0 3C0F8019 */       lui $t7, %hi(D_ovl63_8018E9F8)
  /* 18B4B4 8018DEA4 8DEFE9F8 */        lw $t7, %lo(D_ovl63_8018E9F8)($t7)
  /* 18B4B8 8018DEA8 240E0001 */     addiu $t6, $zero, 1
  /* 18B4BC 8018DEAC 03E00008 */        jr $ra
  /* 18B4C0 8018DEB0 ADEE007C */        sw $t6, 0x7c($t7)

glabel func_ovl63_8018DEB4
  /* 18B4C4 8018DEB4 908E0003 */       lbu $t6, 3($a0)
  /* 18B4C8 8018DEB8 24010001 */     addiu $at, $zero, 1
  /* 18B4CC 8018DEBC 55C10012 */      bnel $t6, $at, .L8018DF08
  /* 18B4D0 8018DEC0 94AB0024 */       lhu $t3, 0x24($a1)
  /* 18B4D4 8018DEC4 94AF0024 */       lhu $t7, 0x24($a1)
  /* 18B4D8 8018DEC8 31F8FFFB */      andi $t8, $t7, 0xfffb
  /* 18B4DC 8018DECC A4B80024 */        sh $t8, 0x24($a1)
  /* 18B4E0 8018DED0 94990000 */       lhu $t9, ($a0)
  /* 18B4E4 8018DED4 2728000A */     addiu $t0, $t9, 0xa
  /* 18B4E8 8018DED8 44882000 */      mtc1 $t0, $f4
  /* 18B4EC 8018DEDC 00000000 */       nop 
  /* 18B4F0 8018DEE0 468021A0 */   cvt.s.w $f6, $f4
  /* 18B4F4 8018DEE4 E4A60058 */      swc1 $f6, 0x58($a1)
  /* 18B4F8 8018DEE8 90890002 */       lbu $t1, 2($a0)
  /* 18B4FC 8018DEEC 252A00A0 */     addiu $t2, $t1, 0xa0
  /* 18B500 8018DEF0 448A4000 */      mtc1 $t2, $f8
  /* 18B504 8018DEF4 00000000 */       nop 
  /* 18B508 8018DEF8 468042A0 */   cvt.s.w $f10, $f8
  /* 18B50C 8018DEFC 03E00008 */        jr $ra
  /* 18B510 8018DF00 E4AA005C */      swc1 $f10, 0x5c($a1)

  /* 18B514 8018DF04 94AB0024 */       lhu $t3, 0x24($a1)
  .L8018DF08:
  /* 18B518 8018DF08 356C0004 */       ori $t4, $t3, 4
  /* 18B51C 8018DF0C A4AC0024 */        sh $t4, 0x24($a1)
  /* 18B520 8018DF10 03E00008 */        jr $ra
  /* 18B524 8018DF14 00000000 */       nop 

glabel func_ovl63_8018DF18
  /* 18B528 8018DF18 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18B52C 8018DF1C 3C028004 */       lui $v0, %hi(gContInput)
  /* 18B530 8018DF20 3C048004 */       lui $a0, %hi(gUpdateContData)
  /* 18B534 8018DF24 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18B538 8018DF28 24845250 */     addiu $a0, $a0, %lo(gUpdateContData)
  /* 18B53C 8018DF2C 24425228 */     addiu $v0, $v0, %lo(gContInput)
  /* 18B540 8018DF30 94430002 */       lhu $v1, 2($v0) # gContInput + 2
  .L8018DF34:
  /* 18B544 8018DF34 2442000A */     addiu $v0, $v0, 0xa
  /* 18B548 8018DF38 306ED000 */      andi $t6, $v1, 0xd000
  /* 18B54C 8018DF3C 11C0000A */      beqz $t6, .L8018DF68
  /* 18B550 8018DF40 00000000 */       nop 
  /* 18B554 8018DF44 3C02800A */       lui $v0, %hi(gSceneData)
  /* 18B558 8018DF48 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 18B55C 8018DF4C 904F0000 */       lbu $t7, ($v0) # gSceneData + 0
  /* 18B560 8018DF50 24180001 */     addiu $t8, $zero, 1
  /* 18B564 8018DF54 A0580000 */        sb $t8, ($v0) # gSceneData + 0
  /* 18B568 8018DF58 0C00171D */       jal func_80005C74
  /* 18B56C 8018DF5C A04F0001 */        sb $t7, 1($v0) # gSceneData + 1
  /* 18B570 8018DF60 10000004 */         b .L8018DF74
  /* 18B574 8018DF64 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018DF68:
  /* 18B578 8018DF68 5444FFF2 */      bnel $v0, $a0, .L8018DF34
  /* 18B57C 8018DF6C 94430002 */       lhu $v1, 2($v0)
  /* 18B580 8018DF70 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018DF74:
  /* 18B584 8018DF74 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18B588 8018DF78 03E00008 */        jr $ra
  /* 18B58C 8018DF7C 00000000 */       nop 

glabel func_ovl63_8018DF80
  /* 18B590 8018DF80 3C0E8019 */       lui $t6, %hi(D_ovl63_8018EA1C)
  /* 18B594 8018DF84 8DCEEA1C */        lw $t6, %lo(D_ovl63_8018EA1C)($t6)
  /* 18B598 8018DF88 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 18B59C 8018DF8C 24010010 */     addiu $at, $zero, 0x10
  /* 18B5A0 8018DF90 15C10015 */       bne $t6, $at, .L8018DFE8
  /* 18B5A4 8018DF94 AFBF001C */        sw $ra, 0x1c($sp)
  /* 18B5A8 8018DF98 3C01C4AF */       lui $at, (0xC4AF0000 >> 16) # -1400.0
  /* 18B5AC 8018DF9C 44812000 */      mtc1 $at, $f4 # -1400.0 to cop1
  /* 18B5B0 8018DFA0 3C018019 */       lui $at, %hi(D_ovl63_8018E7E4)
  /* 18B5B4 8018DFA4 44800000 */      mtc1 $zero, $f0
  /* 18B5B8 8018DFA8 C426E7E4 */      lwc1 $f6, %lo(D_ovl63_8018E7E4)($at)
  /* 18B5BC 8018DFAC 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 18B5C0 8018DFB0 44814000 */      mtc1 $at, $f8 # 10.0 to cop1
  /* 18B5C4 8018DFB4 240F0004 */     addiu $t7, $zero, 4
  /* 18B5C8 8018DFB8 AFAF0010 */        sw $t7, 0x10($sp)
  /* 18B5CC 8018DFBC 00002025 */        or $a0, $zero, $zero
  /* 18B5D0 8018DFC0 2405000C */     addiu $a1, $zero, 0xc
  /* 18B5D4 8018DFC4 27A6002C */     addiu $a2, $sp, 0x2c
  /* 18B5D8 8018DFC8 27A70020 */     addiu $a3, $sp, 0x20
  /* 18B5DC 8018DFCC E7A4002C */      swc1 $f4, 0x2c($sp)
  /* 18B5E0 8018DFD0 E7A60030 */      swc1 $f6, 0x30($sp)
  /* 18B5E4 8018DFD4 E7A00034 */      swc1 $f0, 0x34($sp)
  /* 18B5E8 8018DFD8 E7A00028 */      swc1 $f0, 0x28($sp)
  /* 18B5EC 8018DFDC E7A00020 */      swc1 $f0, 0x20($sp)
  /* 18B5F0 8018DFE0 0C05BA9E */       jal itManager_MakeItemSetupCommon
  /* 18B5F4 8018DFE4 E7A80024 */      swc1 $f8, 0x24($sp)
  .L8018DFE8:
  /* 18B5F8 8018DFE8 8FBF001C */        lw $ra, 0x1c($sp)
  /* 18B5FC 8018DFEC 27BD0038 */     addiu $sp, $sp, 0x38
  /* 18B600 8018DFF0 03E00008 */        jr $ra
  /* 18B604 8018DFF4 00000000 */       nop 

glabel func_ovl63_8018DFF8
  /* 18B608 8018DFF8 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 18B60C 8018DFFC AFB10018 */        sw $s1, 0x18($sp)
  /* 18B610 8018E000 3C118019 */       lui $s1, %hi(D_ovl63_8018E9F0)
  /* 18B614 8018E004 2631E9F0 */     addiu $s1, $s1, %lo(D_ovl63_8018E9F0)
  /* 18B618 8018E008 8E230028 */        lw $v1, 0x28($s1) # D_ovl63_8018E9F0 + 40
  /* 18B61C 8018E00C AFBF001C */        sw $ra, 0x1c($sp)
  /* 18B620 8018E010 AFB00014 */        sw $s0, 0x14($sp)
  /* 18B624 8018E014 54600039 */      bnel $v1, $zero, .L8018E0FC
  /* 18B628 8018E018 246BFFFF */     addiu $t3, $v1, -1
  /* 18B62C 8018E01C 0C0637E0 */       jal func_ovl63_8018DF80
  /* 18B630 8018E020 00000000 */       nop 
  /* 18B634 8018E024 8E2E002C */        lw $t6, 0x2c($s1) # D_ovl63_8018E9F0 + 44
  /* 18B638 8018E028 25CF0001 */     addiu $t7, $t6, 1
  /* 18B63C 8018E02C 29E10017 */      slti $at, $t7, 0x17
  /* 18B640 8018E030 1420000A */      bnez $at, .L8018E05C
  /* 18B644 8018E034 AE2F002C */        sw $t7, 0x2c($s1) # D_ovl63_8018E9F0 + 44
  /* 18B648 8018E038 3C02800A */       lui $v0, %hi(gSceneData)
  /* 18B64C 8018E03C 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 18B650 8018E040 90590000 */       lbu $t9, ($v0) # gSceneData + 0
  /* 18B654 8018E044 2408001A */     addiu $t0, $zero, 0x1a
  /* 18B658 8018E048 A0480000 */        sb $t0, ($v0) # gSceneData + 0
  /* 18B65C 8018E04C 0C00171D */       jal func_80005C74
  /* 18B660 8018E050 A0590001 */        sb $t9, 1($v0) # gSceneData + 1
  /* 18B664 8018E054 1000002B */         b .L8018E104
  /* 18B668 8018E058 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018E05C:
  /* 18B66C 8018E05C 0C063746 */       jal func_ovl63_8018DD18
  /* 18B670 8018E060 00000000 */       nop 
  /* 18B674 8018E064 0C06376F */       jal func_ovl63_8018DDBC
  /* 18B678 8018E068 00000000 */       nop 
  /* 18B67C 8018E06C 0C0637A8 */       jal func_ovl63_8018DEA0
  /* 18B680 8018E070 00000000 */       nop 
  /* 18B684 8018E074 0C0636B3 */       jal func_ovl63_8018DACC
  /* 18B688 8018E078 00000000 */       nop 
  /* 18B68C 8018E07C 3C108019 */       lui $s0, %hi(D_ovl63_8018E9E8)
  /* 18B690 8018E080 2610E9E8 */     addiu $s0, $s0, %lo(D_ovl63_8018E9E8)
  /* 18B694 8018E084 8E040000 */        lw $a0, ($s0) # D_ovl63_8018E9E8 + 0
  /* 18B698 8018E088 8E250010 */        lw $a1, 0x10($s1) # D_ovl63_8018E9F0 + 16
  /* 18B69C 8018E08C 0C0637AD */       jal func_ovl63_8018DEB4
  /* 18B6A0 8018E090 24840010 */     addiu $a0, $a0, 0x10
  /* 18B6A4 8018E094 8E040000 */        lw $a0, ($s0) # D_ovl63_8018E9E8 + 0
  /* 18B6A8 8018E098 8E250014 */        lw $a1, 0x14($s1) # D_ovl63_8018E9F0 + 20
  /* 18B6AC 8018E09C 0C0637AD */       jal func_ovl63_8018DEB4
  /* 18B6B0 8018E0A0 24840014 */     addiu $a0, $a0, 0x14
  /* 18B6B4 8018E0A4 8E040000 */        lw $a0, ($s0) # D_ovl63_8018E9E8 + 0
  /* 18B6B8 8018E0A8 8E250018 */        lw $a1, 0x18($s1) # D_ovl63_8018E9F0 + 24
  /* 18B6BC 8018E0AC 0C0637AD */       jal func_ovl63_8018DEB4
  /* 18B6C0 8018E0B0 24840018 */     addiu $a0, $a0, 0x18
  /* 18B6C4 8018E0B4 8E040000 */        lw $a0, ($s0) # D_ovl63_8018E9E8 + 0
  /* 18B6C8 8018E0B8 8E25001C */        lw $a1, 0x1c($s1) # D_ovl63_8018E9F0 + 28
  /* 18B6CC 8018E0BC 0C0637AD */       jal func_ovl63_8018DEB4
  /* 18B6D0 8018E0C0 2484001C */     addiu $a0, $a0, 0x1c
  /* 18B6D4 8018E0C4 8E040000 */        lw $a0, ($s0) # D_ovl63_8018E9E8 + 0
  /* 18B6D8 8018E0C8 8E250020 */        lw $a1, 0x20($s1) # D_ovl63_8018E9F0 + 32
  /* 18B6DC 8018E0CC 0C0637AD */       jal func_ovl63_8018DEB4
  /* 18B6E0 8018E0D0 24840020 */     addiu $a0, $a0, 0x20
  /* 18B6E4 8018E0D4 8E040000 */        lw $a0, ($s0) # D_ovl63_8018E9E8 + 0
  /* 18B6E8 8018E0D8 8E250024 */        lw $a1, 0x24($s1) # D_ovl63_8018E9F0 + 36
  /* 18B6EC 8018E0DC 0C0637AD */       jal func_ovl63_8018DEB4
  /* 18B6F0 8018E0E0 24840028 */     addiu $a0, $a0, 0x28
  /* 18B6F4 8018E0E4 8E020000 */        lw $v0, ($s0) # D_ovl63_8018E9E8 + 0
  /* 18B6F8 8018E0E8 94430000 */       lhu $v1, ($v0)
  /* 18B6FC 8018E0EC 244A002C */     addiu $t2, $v0, 0x2c
  /* 18B700 8018E0F0 AE0A0000 */        sw $t2, ($s0) # D_ovl63_8018E9E8 + 0
  /* 18B704 8018E0F4 AE230028 */        sw $v1, 0x28($s1) # D_ovl63_8018E9F0 + 40
  /* 18B708 8018E0F8 246BFFFF */     addiu $t3, $v1, -1
  .L8018E0FC:
  /* 18B70C 8018E0FC AE2B0028 */        sw $t3, 0x28($s1) # D_ovl63_8018E9F0 + 40
  /* 18B710 8018E100 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018E104:
  /* 18B714 8018E104 8FB00014 */        lw $s0, 0x14($sp)
  /* 18B718 8018E108 8FB10018 */        lw $s1, 0x18($sp)
  /* 18B71C 8018E10C 03E00008 */        jr $ra
  /* 18B720 8018E110 27BD0020 */     addiu $sp, $sp, 0x20

glabel func_ovl63_8018E114
  /* 18B724 8018E114 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18B728 8018E118 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18B72C 8018E11C 0C0637C6 */       jal func_ovl63_8018DF18
  /* 18B730 8018E120 AFA40018 */        sw $a0, 0x18($sp)
  /* 18B734 8018E124 0C0637FE */       jal func_ovl63_8018DFF8
  /* 18B738 8018E128 00000000 */       nop 
  /* 18B73C 8018E12C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18B740 8018E130 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18B744 8018E134 03E00008 */        jr $ra
  /* 18B748 8018E138 00000000 */       nop 

glabel func_ovl63_8018E13C
  /* 18B74C 8018E13C 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 18B750 8018E140 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18B754 8018E144 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 18B758 8018E148 00002825 */        or $a1, $zero, $zero
  /* 18B75C 8018E14C 2406000B */     addiu $a2, $zero, 0xb
  /* 18B760 8018E150 0C00265A */       jal omMakeGObjCommon
  /* 18B764 8018E154 3C078000 */       lui $a3, 0x8000
  /* 18B768 8018E158 3C058019 */       lui $a1, %hi(func_ovl63_8018E114)
  /* 18B76C 8018E15C AFA2001C */        sw $v0, 0x1c($sp)
  /* 18B770 8018E160 24A5E114 */     addiu $a1, $a1, %lo(func_ovl63_8018E114)
  /* 18B774 8018E164 00402025 */        or $a0, $v0, $zero
  /* 18B778 8018E168 24060001 */     addiu $a2, $zero, 1
  /* 18B77C 8018E16C 0C002062 */       jal omAddGObjCommonProc
  /* 18B780 8018E170 24070005 */     addiu $a3, $zero, 5
  /* 18B784 8018E174 3C038019 */       lui $v1, %hi(D_ovl63_8018E9F0)
  /* 18B788 8018E178 2463E9F0 */     addiu $v1, $v1, %lo(D_ovl63_8018E9F0)
  /* 18B78C 8018E17C AC600028 */        sw $zero, 0x28($v1) # D_ovl63_8018E9F0 + 40
  /* 18B790 8018E180 AC60002C */        sw $zero, 0x2c($v1) # D_ovl63_8018E9F0 + 44
  /* 18B794 8018E184 0C063845 */       jal func_ovl63_8018E114
  /* 18B798 8018E188 8FA4001C */        lw $a0, 0x1c($sp)
  /* 18B79C 8018E18C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18B7A0 8018E190 8FA2001C */        lw $v0, 0x1c($sp)
  /* 18B7A4 8018E194 27BD0020 */     addiu $sp, $sp, 0x20
  /* 18B7A8 8018E198 03E00008 */        jr $ra
  /* 18B7AC 8018E19C 00000000 */       nop 

glabel func_ovl63_8018E1A0
  /* 18B7B0 8018E1A0 27BDFF50 */     addiu $sp, $sp, -0xb0
  /* 18B7B4 8018E1A4 AFBF003C */        sw $ra, 0x3c($sp)
  /* 18B7B8 8018E1A8 AFB50038 */        sw $s5, 0x38($sp)
  /* 18B7BC 8018E1AC AFB40034 */        sw $s4, 0x34($sp)
  /* 18B7C0 8018E1B0 AFB30030 */        sw $s3, 0x30($sp)
  /* 18B7C4 8018E1B4 AFB2002C */        sw $s2, 0x2c($sp)
  /* 18B7C8 8018E1B8 AFB10028 */        sw $s1, 0x28($sp)
  /* 18B7CC 8018E1BC 0C063453 */       jal func_ovl63_8018D14C
  /* 18B7D0 8018E1C0 AFB00024 */        sw $s0, 0x24($sp)
  /* 18B7D4 8018E1C4 0C063990 */       jal func_ovl63_8018E640
  /* 18B7D8 8018E1C8 00000000 */       nop 
  /* 18B7DC 8018E1CC 0C063430 */       jal func_ovl63_8018D0C0
  /* 18B7E0 8018E1D0 00000000 */       nop 
  /* 18B7E4 8018E1D4 2404000A */     addiu $a0, $zero, 0xa
  /* 18B7E8 8018E1D8 2405000A */     addiu $a1, $zero, 0xa
  /* 18B7EC 8018E1DC 24060136 */     addiu $a2, $zero, 0x136
  /* 18B7F0 8018E1E0 0C043966 */       jal func_ovl2_8010E598
  /* 18B7F4 8018E1E4 240700A0 */     addiu $a3, $zero, 0xa0
  /* 18B7F8 8018E1E8 0C063492 */       jal func_ovl63_8018D248
  /* 18B7FC 8018E1EC 00000000 */       nop 
  /* 18B800 8018E1F0 0C045624 */       jal func_ovl2_80115890
  /* 18B804 8018E1F4 00000000 */       nop 
  /* 18B808 8018E1F8 0C03B04C */       jal func_ovl2_800EC130
  /* 18B80C 8018E1FC 00000000 */       nop 
  /* 18B810 8018E200 0C03F0A1 */       jal func_ovl2_800FC284
  /* 18B814 8018E204 00000000 */       nop 
  /* 18B818 8018E208 0C0436D5 */       jal func_ovl2_8010DB54
  /* 18B81C 8018E20C 00000000 */       nop 
  /* 18B820 8018E210 0C0412F7 */       jal func_ovl2_80104BDC
  /* 18B824 8018E214 00000000 */       nop 
  /* 18B828 8018E218 0C0436C0 */       jal func_ovl2_8010DB00
  /* 18B82C 8018E21C 00000000 */       nop 
  /* 18B830 8018E220 0C05B7A8 */       jal itManager_AllocUserData
  /* 18B834 8018E224 00000000 */       nop 
  /* 18B838 8018E228 0C041580 */       jal func_ovl2_80105600
  /* 18B83C 8018E22C 00000000 */       nop 
  /* 18B840 8018E230 24040002 */     addiu $a0, $zero, 2
  /* 18B844 8018E234 0C035C65 */       jal func_ovl2_800D7194
  /* 18B848 8018E238 24050002 */     addiu $a1, $zero, 2
  /* 18B84C 8018E23C 0C05952C */       jal wpManager_AllocUserData
  /* 18B850 8018E240 00000000 */       nop 
  /* 18B854 8018E244 0C03F4C0 */       jal efManager_AllocUserData
  /* 18B858 8018E248 00000000 */       nop 
  /* 18B85C 8018E24C 0C04577A */       jal func_ovl2_80115DE8
  /* 18B860 8018E250 240400FF */     addiu $a0, $zero, 0xff
  /* 18B864 8018E254 0C0455B9 */       jal func_ovl2_801156E4
  /* 18B868 8018E258 00000000 */       nop 
  /* 18B86C 8018E25C 0C0594F8 */       jal func_ovl3_801653E0
  /* 18B870 8018E260 00000000 */       nop 
  /* 18B874 8018E264 3C13800A */       lui $s3, %hi(gpBattleState)
  /* 18B878 8018E268 267350E8 */     addiu $s3, $s3, %lo(gpBattleState)
  /* 18B87C 8018E26C 00008025 */        or $s0, $zero, $zero
  /* 18B880 8018E270 00008825 */        or $s1, $zero, $zero
  /* 18B884 8018E274 27B5005C */     addiu $s5, $sp, 0x5c
  .L8018E278:
  /* 18B888 8018E278 3C0E8011 */       lui $t6, %hi(D_ovl2_80116DD0)
  /* 18B88C 8018E27C 25CE6DD0 */     addiu $t6, $t6, %lo(D_ovl2_80116DD0)
  /* 18B890 8018E280 25C8003C */     addiu $t0, $t6, 0x3c
  /* 18B894 8018E284 02A0C825 */        or $t9, $s5, $zero
  .L8018E288:
  /* 18B898 8018E288 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 18B89C 8018E28C 25CE000C */     addiu $t6, $t6, 0xc
  /* 18B8A0 8018E290 2739000C */     addiu $t9, $t9, 0xc
  /* 18B8A4 8018E294 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 18B8A8 8018E298 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl2_80116DD0 + -8
  /* 18B8AC 8018E29C AF2FFFF8 */        sw $t7, -8($t9)
  /* 18B8B0 8018E2A0 8DD8FFFC */        lw $t8, -4($t6) # D_ovl2_80116DD0 + -4
  /* 18B8B4 8018E2A4 15C8FFF8 */       bne $t6, $t0, .L8018E288
  /* 18B8B8 8018E2A8 AF38FFFC */        sw $t8, -4($t9)
  /* 18B8BC 8018E2AC 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 18B8C0 8018E2B0 00105880 */       sll $t3, $s0, 2
  /* 18B8C4 8018E2B4 01705821 */      addu $t3, $t3, $s0
  /* 18B8C8 8018E2B8 AF380000 */        sw $t8, ($t9)
  /* 18B8CC 8018E2BC 8E690000 */        lw $t1, ($s3) # gpBattleState + 0
  /* 18B8D0 8018E2C0 3C0C8004 */       lui $t4, %hi(gContInput)
  /* 18B8D4 8018E2C4 24010002 */     addiu $at, $zero, 2
  /* 18B8D8 8018E2C8 01311021 */      addu $v0, $t1, $s1
  /* 18B8DC 8018E2CC 904A0022 */       lbu $t2, 0x22($v0)
  /* 18B8E0 8018E2D0 258C5228 */     addiu $t4, $t4, %lo(gContInput)
  /* 18B8E4 8018E2D4 000B5840 */       sll $t3, $t3, 1
  /* 18B8E8 8018E2D8 11410049 */       beq $t2, $at, .L8018E400
  /* 18B8EC 8018E2DC 016C9021 */      addu $s2, $t3, $t4
  /* 18B8F0 8018E2E0 3C088019 */       lui $t0, %hi(D_ovl63_8018E710)
  /* 18B8F4 8018E2E4 2508E710 */     addiu $t0, $t0, %lo(D_ovl63_8018E710)
  /* 18B8F8 8018E2E8 00106880 */       sll $t5, $s0, 2
  /* 18B8FC 8018E2EC 01A8A021 */      addu $s4, $t5, $t0
  /* 18B900 8018E2F0 0C035E1B */       jal func_ovl2_800D786C
  /* 18B904 8018E2F4 90440023 */       lbu $a0, 0x23($v0)
  /* 18B908 8018E2F8 8E6E0000 */        lw $t6, ($s3) # gpBattleState + 0
  /* 18B90C 8018E2FC 02002025 */        or $a0, $s0, $zero
  /* 18B910 8018E300 27A50060 */     addiu $a1, $sp, 0x60
  /* 18B914 8018E304 01D1C821 */      addu $t9, $t6, $s1
  /* 18B918 8018E308 932F0023 */       lbu $t7, 0x23($t9)
  /* 18B91C 8018E30C 0C03EBD9 */       jal func_ovl2_800FAF64
  /* 18B920 8018E310 AFAF005C */        sw $t7, 0x5c($sp)
  /* 18B924 8018E314 C7A40060 */      lwc1 $f4, 0x60($sp)
  /* 18B928 8018E318 44803000 */      mtc1 $zero, $f6
  /* 18B92C 8018E31C 24090001 */     addiu $t1, $zero, 1
  /* 18B930 8018E320 2418FFFF */     addiu $t8, $zero, -1
  /* 18B934 8018E324 4604303E */    c.le.s $f6, $f4
  /* 18B938 8018E328 240E0002 */     addiu $t6, $zero, 2
  /* 18B93C 8018E32C 24080001 */     addiu $t0, $zero, 1
  /* 18B940 8018E330 45020004 */     bc1fl .L8018E344
  /* 18B944 8018E334 AFA9006C */        sw $t1, 0x6c($sp)
  /* 18B948 8018E338 10000002 */         b .L8018E344
  /* 18B94C 8018E33C AFB8006C */        sw $t8, 0x6c($sp)
  /* 18B950 8018E340 AFA9006C */        sw $t1, 0x6c($sp)
  .L8018E344:
  /* 18B954 8018E344 8E630000 */        lw $v1, ($s3) # gpBattleState + 0
  /* 18B958 8018E348 00711021 */      addu $v0, $v1, $s1
  /* 18B95C 8018E34C 904A0024 */       lbu $t2, 0x24($v0)
  /* 18B960 8018E350 A3B00071 */        sb $s0, 0x71($sp)
  /* 18B964 8018E354 A3AA0070 */        sb $t2, 0x70($sp)
  /* 18B968 8018E358 906C0005 */       lbu $t4, 5($v1)
  /* 18B96C 8018E35C 906B0004 */       lbu $t3, 4($v1)
  /* 18B970 8018E360 016C6821 */      addu $t5, $t3, $t4
  /* 18B974 8018E364 29A10003 */      slti $at, $t5, 3
  /* 18B978 8018E368 50200004 */      beql $at, $zero, .L8018E37C
  /* 18B97C 8018E36C A3AE0072 */        sb $t6, 0x72($sp)
  /* 18B980 8018E370 10000002 */         b .L8018E37C
  /* 18B984 8018E374 A3A80072 */        sb $t0, 0x72($sp)
  /* 18B988 8018E378 A3AE0072 */        sb $t6, 0x72($sp)
  .L8018E37C:
  /* 18B98C 8018E37C 90590026 */       lbu $t9, 0x26($v0)
  /* 18B990 8018E380 A3B90073 */        sb $t9, 0x73($sp)
  /* 18B994 8018E384 904F0021 */       lbu $t7, 0x21($v0)
  /* 18B998 8018E388 A3AF0075 */        sb $t7, 0x75($sp)
  /* 18B99C 8018E38C 90580020 */       lbu $t8, 0x20($v0)
  /* 18B9A0 8018E390 A3B80076 */        sb $t8, 0x76($sp)
  /* 18B9A4 8018E394 90690007 */       lbu $t1, 7($v1)
  /* 18B9A8 8018E398 AFA00080 */        sw $zero, 0x80($sp)
  /* 18B9AC 8018E39C A3A90077 */        sb $t1, 0x77($sp)
  /* 18B9B0 8018E3A0 904A0022 */       lbu $t2, 0x22($v0)
  /* 18B9B4 8018E3A4 AFB20088 */        sw $s2, 0x88($sp)
  /* 18B9B8 8018E3A8 AFAA0084 */        sw $t2, 0x84($sp)
  /* 18B9BC 8018E3AC 0C035E2D */       jal func_ovl2_800D78B4
  /* 18B9C0 8018E3B0 90440023 */       lbu $a0, 0x23($v0)
  /* 18B9C4 8018E3B4 AFA20094 */        sw $v0, 0x94($sp)
  /* 18B9C8 8018E3B8 0C035FCF */       jal ftManager_CreateFighter
  /* 18B9CC 8018E3BC 02A02025 */        or $a0, $s5, $zero
  /* 18B9D0 8018E3C0 8E6B0000 */        lw $t3, ($s3) # gpBattleState + 0
  /* 18B9D4 8018E3C4 00409025 */        or $s2, $v0, $zero
  /* 18B9D8 8018E3C8 02002025 */        or $a0, $s0, $zero
  /* 18B9DC 8018E3CC 01716021 */      addu $t4, $t3, $s1
  /* 18B9E0 8018E3D0 A1900028 */        sb $s0, 0x28($t4)
  /* 18B9E4 8018E3D4 8E6D0000 */        lw $t5, ($s3) # gpBattleState + 0
  /* 18B9E8 8018E3D8 00402825 */        or $a1, $v0, $zero
  /* 18B9EC 8018E3DC 01B14021 */      addu $t0, $t5, $s1
  /* 18B9F0 8018E3E0 0C039F13 */       jal ftCommon_ClearPlayerMatchStats
  /* 18B9F4 8018E3E4 A110002A */        sb $s0, 0x2a($t0)
  /* 18B9F8 8018E3E8 3C198019 */       lui $t9, %hi(D_ovl63_8018E9E4)
  /* 18B9FC 8018E3EC 8F39E9E4 */        lw $t9, %lo(D_ovl63_8018E9E4)($t9)
  /* 18BA00 8018E3F0 8E8E0000 */        lw $t6, ($s4)
  /* 18BA04 8018E3F4 02402025 */        or $a0, $s2, $zero
  /* 18BA08 8018E3F8 0C03A6CC */       jal ftCommon_SetHowToPlayInputSeq
  /* 18BA0C 8018E3FC 01D92821 */      addu $a1, $t6, $t9
  .L8018E400:
  /* 18BA10 8018E400 26100001 */     addiu $s0, $s0, 1
  /* 18BA14 8018E404 24010004 */     addiu $at, $zero, 4
  /* 18BA18 8018E408 1601FF9B */       bne $s0, $at, .L8018E278
  /* 18BA1C 8018E40C 26310074 */     addiu $s1, $s1, 0x74
  /* 18BA20 8018E410 0C063475 */       jal func_ovl63_8018D1D4
  /* 18BA24 8018E414 00000000 */       nop 
  /* 18BA28 8018E418 0C0438B5 */       jal func_ovl2_8010E2D4
  /* 18BA2C 8018E41C 00000000 */       nop 
  /* 18BA30 8018E420 0C044639 */       jal func_ovl2_801118E4
  /* 18BA34 8018E424 00000000 */       nop 
  /* 18BA38 8018E428 0C043869 */       jal func_ovl2_8010E1A4
  /* 18BA3C 8018E42C 00000000 */       nop 
  /* 18BA40 8018E430 0C044510 */       jal func_ovl2_80111440
  /* 18BA44 8018E434 00000000 */       nop 
  /* 18BA48 8018E438 240F0001 */     addiu $t7, $zero, 1
  /* 18BA4C 8018E43C 3C018013 */       lui $at, %hi(D_ovl2_80131580)
  /* 18BA50 8018E440 0C043771 */       jal func_ovl2_8010DDC4
  /* 18BA54 8018E444 A02F1580 */        sb $t7, %lo(D_ovl2_80131580)($at)
  /* 18BA58 8018E448 0C0438DD */       jal func_ovl2_8010E374
  /* 18BA5C 8018E44C 00000000 */       nop 
  /* 18BA60 8018E450 0C043926 */       jal func_ovl2_8010E498
  /* 18BA64 8018E454 00000000 */       nop 
  /* 18BA68 8018E458 0C0446F9 */       jal func_ovl2_80111BE4
  /* 18BA6C 8018E45C 00000000 */       nop 
  /* 18BA70 8018E460 0C063510 */       jal func_ovl63_8018D440
  /* 18BA74 8018E464 00000000 */       nop 
  /* 18BA78 8018E468 0C043CF0 */       jal func_ovl2_8010F3C0
  /* 18BA7C 8018E46C 00000000 */       nop 
  /* 18BA80 8018E470 0C0439A4 */       jal func_ovl2_8010E690
  /* 18BA84 8018E474 00000000 */       nop 
  /* 18BA88 8018E478 0C044145 */       jal func_ovl2_80110514
  /* 18BA8C 8018E47C 00000000 */       nop 
  /* 18BA90 8018E480 0C0634F6 */       jal func_ovl63_8018D3D8
  /* 18BA94 8018E484 00000000 */       nop 
  /* 18BA98 8018E488 0C063518 */       jal func_ovl63_8018D460
  /* 18BA9C 8018E48C 00000000 */       nop 
  /* 18BAA0 8018E490 0C063540 */       jal func_ovl63_8018D500
  /* 18BAA4 8018E494 00000000 */       nop 
  /* 18BAA8 8018E498 0C0636F4 */       jal func_ovl63_8018DBD0
  /* 18BAAC 8018E49C 00000000 */       nop 
  /* 18BAB0 8018E4A0 0C063721 */       jal func_ovl63_8018DC84
  /* 18BAB4 8018E4A4 00000000 */       nop 
  /* 18BAB8 8018E4A8 0C06384F */       jal func_ovl63_8018E13C
  /* 18BABC 8018E4AC 00000000 */       nop 
  /* 18BAC0 8018E4B0 0C03F0FA */       jal func_ovl2_800FC3E8
  /* 18BAC4 8018E4B4 00000000 */       nop 
  /* 18BAC8 8018E4B8 0C009A70 */       jal func_800269C0
  /* 18BACC 8018E4BC 240401EE */     addiu $a0, $zero, 0x1ee
  /* 18BAD0 8018E4C0 3C188019 */       lui $t8, %hi(D_ovl63_8018E720)
  /* 18BAD4 8018E4C4 2718E720 */     addiu $t8, $t8, %lo(D_ovl63_8018E720)
  /* 18BAD8 8018E4C8 8F0A0000 */        lw $t2, ($t8) # D_ovl63_8018E720 + 0
  /* 18BADC 8018E4CC 27A70058 */     addiu $a3, $sp, 0x58
  /* 18BAE0 8018E4D0 240B000C */     addiu $t3, $zero, 0xc
  /* 18BAE4 8018E4D4 ACEA0000 */        sw $t2, ($a3)
  /* 18BAE8 8018E4D8 240C0001 */     addiu $t4, $zero, 1
  /* 18BAEC 8018E4DC AFAC0014 */        sw $t4, 0x14($sp)
  /* 18BAF0 8018E4E0 AFA00018 */        sw $zero, 0x18($sp)
  /* 18BAF4 8018E4E4 AFAB0010 */        sw $t3, 0x10($sp)
  /* 18BAF8 8018E4E8 240403FD */     addiu $a0, $zero, 0x3fd
  /* 18BAFC 8018E4EC 2405000D */     addiu $a1, $zero, 0xd
  /* 18BB00 8018E4F0 0C035018 */       jal func_ovl0_800D4060
  /* 18BB04 8018E4F4 2406000A */     addiu $a2, $zero, 0xa
  /* 18BB08 8018E4F8 8FBF003C */        lw $ra, 0x3c($sp)
  /* 18BB0C 8018E4FC 8FB00024 */        lw $s0, 0x24($sp)
  /* 18BB10 8018E500 8FB10028 */        lw $s1, 0x28($sp)
  /* 18BB14 8018E504 8FB2002C */        lw $s2, 0x2c($sp)
  /* 18BB18 8018E508 8FB30030 */        lw $s3, 0x30($sp)
  /* 18BB1C 8018E50C 8FB40034 */        lw $s4, 0x34($sp)
  /* 18BB20 8018E510 8FB50038 */        lw $s5, 0x38($sp)
  /* 18BB24 8018E514 03E00008 */        jr $ra
  /* 18BB28 8018E518 27BD00B0 */     addiu $sp, $sp, 0xb0

glabel func_ovl63_8018E51C
  /* 18BB2C 8018E51C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18BB30 8018E520 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18BB34 8018E524 8C830000 */        lw $v1, ($a0)
  /* 18BB38 8018E528 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 18BB3C 8018E52C 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 18BB40 8018E530 246E0008 */     addiu $t6, $v1, 8
  /* 18BB44 8018E534 AC8E0000 */        sw $t6, ($a0)
  /* 18BB48 8018E538 3C180002 */       lui $t8, 2
  /* 18BB4C 8018E53C 3C058013 */       lui $a1, %hi(gMapLightAngleX)
  /* 18BB50 8018E540 3C068013 */       lui $a2, %hi(gMapLightAngleY)
  /* 18BB54 8018E544 AC780004 */        sw $t8, 4($v1)
  /* 18BB58 8018E548 AC6F0000 */        sw $t7, ($v1)
  /* 18BB5C 8018E54C 8CC61394 */        lw $a2, %lo(gMapLightAngleY)($a2)
  /* 18BB60 8018E550 0C03F2DC */       jal func_ovl2_800FCB70
  /* 18BB64 8018E554 8CA51390 */        lw $a1, %lo(gMapLightAngleX)($a1)
  /* 18BB68 8018E558 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18BB6C 8018E55C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18BB70 8018E560 03E00008 */        jr $ra
  /* 18BB74 8018E564 00000000 */       nop 

  glabel jtgt_ovl63_8018E568
  /* 18BB78 8018E568 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18BB7C 8018E56C AFBF0014 */        sw $ra, 0x14($sp)
  /* 18BB80 8018E570 3C048019 */       lui $a0, %hi(D_ovl63_8018E724)
  /* 18BB84 8018E574 0C00623A */       jal set_lcg_seed_ptr
  /* 18BB88 8018E578 2484E724 */     addiu $a0, $a0, %lo(D_ovl63_8018E724)
  /* 18BB8C 8018E57C 0C002979 */       jal func_8000A5E4
  /* 18BB90 8018E580 00000000 */       nop 
  /* 18BB94 8018E584 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18BB98 8018E588 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18BB9C 8018E58C 03E00008 */        jr $ra
  /* 18BBA0 8018E590 00000000 */       nop 

  glabel jtgt_ovl63_8018E594
  /* 18BBA4 8018E594 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18BBA8 8018E598 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18BBAC 8018E59C 3C048019 */       lui $a0, %hi(D_ovl63_8018E728)
  /* 18BBB0 8018E5A0 0C00623A */       jal set_lcg_seed_ptr
  /* 18BBB4 8018E5A4 2484E728 */     addiu $a0, $a0, %lo(D_ovl63_8018E728)
  /* 18BBB8 8018E5A8 0C0289AE */       jal func_800A26B8
  /* 18BBBC 8018E5AC 00000000 */       nop 
  /* 18BBC0 8018E5B0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18BBC4 8018E5B4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18BBC8 8018E5B8 03E00008 */        jr $ra
  /* 18BBCC 8018E5BC 00000000 */       nop 

glabel how_to_play_entry
  /* 18BBD0 8018E5C0 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 18BBD4 8018E5C4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18BBD8 8018E5C8 3C048019 */       lui $a0, %hi(D_ovl63_8018E72C)
  /* 18BBDC 8018E5CC 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 18BBE0 8018E5D0 2484E72C */     addiu $a0, $a0, %lo(D_ovl63_8018E72C)
  /* 18BBE4 8018E5D4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18BBE8 8018E5D8 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 18BBEC 8018E5DC 0C001C09 */       jal func_80007024
  /* 18BBF0 8018E5E0 AC8F000C */        sw $t7, 0xc($a0) # D_ovl63_8018E72C + 12
  /* 18BBF4 8018E5E4 3C048019 */       lui $a0, %hi(D_ovl63_8018E724)
  /* 18BBF8 8018E5E8 0C00623A */       jal set_lcg_seed_ptr
  /* 18BBFC 8018E5EC 2484E724 */     addiu $a0, $a0, %lo(D_ovl63_8018E724)
  /* 18BC00 8018E5F0 3C188039 */       lui $t8, %hi(D_NF_80392A00)
  /* 18BC04 8018E5F4 3C198019 */       lui $t9, %hi(D_NF_8018EC00)
  /* 18BC08 8018E5F8 3C048019 */       lui $a0, %hi(D_ovl63_8018E748)
  /* 18BC0C 8018E5FC 2739EC00 */     addiu $t9, $t9, %lo(D_NF_8018EC00)
  /* 18BC10 8018E600 27182A00 */     addiu $t8, $t8, %lo(D_NF_80392A00)
  /* 18BC14 8018E604 3C098019 */       lui $t1, %hi(func_ovl63_8018E1A0)
  /* 18BC18 8018E608 2484E748 */     addiu $a0, $a0, %lo(D_ovl63_8018E748)
  /* 18BC1C 8018E60C 03194023 */      subu $t0, $t8, $t9
  /* 18BC20 8018E610 2529E1A0 */     addiu $t1, $t1, %lo(func_ovl63_8018E1A0)
  /* 18BC24 8018E614 AC880010 */        sw $t0, 0x10($a0) # D_ovl63_8018E748 + 16
  /* 18BC28 8018E618 0C0289A6 */       jal func_800A2698
  /* 18BC2C 8018E61C AC890088 */        sw $t1, 0x88($a0) # D_ovl63_8018E748 + 136
  /* 18BC30 8018E620 0C0455FB */       jal func_ovl2_801157EC
  /* 18BC34 8018E624 00000000 */       nop 
  /* 18BC38 8018E628 0C00623A */       jal set_lcg_seed_ptr
  /* 18BC3C 8018E62C 00002025 */        or $a0, $zero, $zero
  /* 18BC40 8018E630 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18BC44 8018E634 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18BC48 8018E638 03E00008 */        jr $ra
  /* 18BC4C 8018E63C 00000000 */       nop 

glabel func_ovl63_8018E640
  /* 18BC50 8018E640 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 18BC54 8018E644 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 18BC58 8018E648 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 18BC5C 8018E64C 3C188019 */       lui $t8, %hi(D_ovl63_8018EA30)
  /* 18BC60 8018E650 3C088019 */       lui $t0, %hi(D_ovl63_8018EBC0)
  /* 18BC64 8018E654 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18BC68 8018E658 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 18BC6C 8018E65C 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 18BC70 8018E660 2718EA30 */     addiu $t8, $t8, %lo(D_ovl63_8018EA30)
  /* 18BC74 8018E664 24190032 */     addiu $t9, $zero, 0x32
  /* 18BC78 8018E668 2508EBC0 */     addiu $t0, $t0, %lo(D_ovl63_8018EBC0)
  /* 18BC7C 8018E66C 24090007 */     addiu $t1, $zero, 7
  /* 18BC80 8018E670 AFAE0020 */        sw $t6, 0x20($sp)
  /* 18BC84 8018E674 AFAF0024 */        sw $t7, 0x24($sp)
  /* 18BC88 8018E678 AFA00028 */        sw $zero, 0x28($sp)
  /* 18BC8C 8018E67C AFA0002C */        sw $zero, 0x2c($sp)
  /* 18BC90 8018E680 AFB80030 */        sw $t8, 0x30($sp)
  /* 18BC94 8018E684 AFB90034 */        sw $t9, 0x34($sp)
  /* 18BC98 8018E688 AFA80038 */        sw $t0, 0x38($sp)
  /* 18BC9C 8018E68C AFA9003C */        sw $t1, 0x3c($sp)
  /* 18BCA0 8018E690 0C0337DE */       jal rldm_initialize
  /* 18BCA4 8018E694 27A40020 */     addiu $a0, $sp, 0x20
  /* 18BCA8 8018E698 3C048011 */       lui $a0, %hi(D_ovl2_80116BD0)
  /* 18BCAC 8018E69C 24846BD0 */     addiu $a0, $a0, %lo(D_ovl2_80116BD0)
  /* 18BCB0 8018E6A0 0C0337BB */       jal rldm_bytes_need_to_load
  /* 18BCB4 8018E6A4 24050008 */     addiu $a1, $zero, 8
  /* 18BCB8 8018E6A8 00402025 */        or $a0, $v0, $zero
  /* 18BCBC 8018E6AC 0C001260 */       jal hal_alloc
  /* 18BCC0 8018E6B0 24050010 */     addiu $a1, $zero, 0x10
  /* 18BCC4 8018E6B4 3C048011 */       lui $a0, %hi(D_ovl2_80116BD0)
  /* 18BCC8 8018E6B8 3C068013 */       lui $a2, %hi(D_ovl2_80130D40)
  /* 18BCCC 8018E6BC 24C60D40 */     addiu $a2, $a2, %lo(D_ovl2_80130D40)
  /* 18BCD0 8018E6C0 24846BD0 */     addiu $a0, $a0, %lo(D_ovl2_80116BD0)
  /* 18BCD4 8018E6C4 24050008 */     addiu $a1, $zero, 8
  /* 18BCD8 8018E6C8 0C033781 */       jal rldm_load_files_into
  /* 18BCDC 8018E6CC 00403825 */        or $a3, $v0, $zero
  /* 18BCE0 8018E6D0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18BCE4 8018E6D4 27BD0040 */     addiu $sp, $sp, 0x40
  /* 18BCE8 8018E6D8 03E00008 */        jr $ra
  /* 18BCEC 8018E6DC 00000000 */       nop 
