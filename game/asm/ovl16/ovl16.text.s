.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x800D6490 -> 0x800D7010

glabel func_ovl16_800D6490
  /* 18D030 800D6490 8C830000 */        lw $v1, ($a0)
  /* 18D034 800D6494 3C18800D */       lui $t8, %hi(D_ovl16_800D7030)
  /* 18D038 800D6498 27187030 */     addiu $t8, $t8, %lo(D_ovl16_800D7030)
  /* 18D03C 800D649C 246E0008 */     addiu $t6, $v1, 8
  /* 18D040 800D64A0 AC8E0000 */        sw $t6, ($a0)
  /* 18D044 800D64A4 3C0FDE00 */       lui $t7, 0xde00
  /* 18D048 800D64A8 AC6F0000 */        sw $t7, ($v1)
  /* 18D04C 800D64AC 03E00008 */        jr $ra
  /* 18D050 800D64B0 AC780004 */        sw $t8, 4($v1)

  /* 18D054 800D64B4 03E00008 */        jr $ra
  /* 18D058 800D64B8 00000000 */       nop 

  /* 18D05C 800D64BC 03E00008 */        jr $ra
  /* 18D060 800D64C0 00000000 */       nop 

glabel func_ovl16_800D64C4
  /* 18D064 800D64C4 3C028004 */       lui $v0, %hi(D_80045470)
  /* 18D068 800D64C8 94425470 */       lhu $v0, %lo(D_80045470)($v0)
  /* 18D06C 800D64CC 3C03800D */       lui $v1, %hi(D_ovl16_800D716C)
  /* 18D070 800D64D0 2463716C */     addiu $v1, $v1, %lo(D_ovl16_800D716C)
  /* 18D074 800D64D4 304E0200 */      andi $t6, $v0, 0x200
  /* 18D078 800D64D8 11C00006 */      beqz $t6, .L800D64F4
  /* 18D07C 800D64DC 304F0100 */      andi $t7, $v0, 0x100
  /* 18D080 800D64E0 3C01800D */       lui $at, %hi(D_ovl16_800D7100)
  /* 18D084 800D64E4 C4267100 */      lwc1 $f6, %lo(D_ovl16_800D7100)($at)
  /* 18D088 800D64E8 C4640000 */      lwc1 $f4, ($v1) # D_ovl16_800D716C + 0
  /* 18D08C 800D64EC 46062201 */     sub.s $f8, $f4, $f6
  /* 18D090 800D64F0 E4680000 */      swc1 $f8, ($v1) # D_ovl16_800D716C + 0
  .L800D64F4:
  /* 18D094 800D64F4 3C03800D */       lui $v1, %hi(D_ovl16_800D716C)
  /* 18D098 800D64F8 11E00006 */      beqz $t7, .L800D6514
  /* 18D09C 800D64FC 2463716C */     addiu $v1, $v1, %lo(D_ovl16_800D716C)
  /* 18D0A0 800D6500 3C01800D */       lui $at, %hi(D_ovl16_800D7104)
  /* 18D0A4 800D6504 C4307104 */      lwc1 $f16, %lo(D_ovl16_800D7104)($at)
  /* 18D0A8 800D6508 C46A0000 */      lwc1 $f10, ($v1) # D_ovl16_800D716C + 0
  /* 18D0AC 800D650C 46105480 */     add.s $f18, $f10, $f16
  /* 18D0B0 800D6510 E4720000 */      swc1 $f18, ($v1) # D_ovl16_800D716C + 0
  .L800D6514:
  /* 18D0B4 800D6514 30588000 */      andi $t8, $v0, 0x8000
  /* 18D0B8 800D6518 5300000C */      beql $t8, $zero, .L800D654C
  /* 18D0BC 800D651C C4700000 */      lwc1 $f16, ($v1) # D_ovl16_800D716C + 0
  /* 18D0C0 800D6520 C4640000 */      lwc1 $f4, ($v1) # D_ovl16_800D716C + 0
  /* 18D0C4 800D6524 8C890074 */        lw $t1, 0x74($a0)
  /* 18D0C8 800D6528 4600218D */ trunc.w.s $f6, $f4
  /* 18D0CC 800D652C 44083000 */      mfc1 $t0, $f6
  /* 18D0D0 800D6530 00000000 */       nop 
  /* 18D0D4 800D6534 44884000 */      mtc1 $t0, $f8
  /* 18D0D8 800D6538 00000000 */       nop 
  /* 18D0DC 800D653C 468042A0 */   cvt.s.w $f10, $f8
  /* 18D0E0 800D6540 03E00008 */        jr $ra
  /* 18D0E4 800D6544 E52A0058 */      swc1 $f10, 0x58($t1)

  /* 18D0E8 800D6548 C4700000 */      lwc1 $f16, ($v1)
  .L800D654C:
  /* 18D0EC 800D654C 8C8A0074 */        lw $t2, 0x74($a0)
  /* 18D0F0 800D6550 E5500058 */      swc1 $f16, 0x58($t2)
  /* 18D0F4 800D6554 03E00008 */        jr $ra
  /* 18D0F8 800D6558 00000000 */       nop 

glabel func_ovl16_800D655C
  /* 18D0FC 800D655C 3C028004 */       lui $v0, %hi(D_80045470 + 2)
  /* 18D100 800D6560 94425472 */       lhu $v0, %lo(D_80045470 + 2)($v0)
  /* 18D104 800D6564 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18D108 800D6568 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18D10C 800D656C 304E1000 */      andi $t6, $v0, 0x1000
  /* 18D110 800D6570 11C0000A */      beqz $t6, .L800D659C
  /* 18D114 800D6574 AFA40018 */        sw $a0, 0x18($sp)
  /* 18D118 800D6578 3C02800A */       lui $v0, %hi(gSceneData)
  /* 18D11C 800D657C 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 18D120 800D6580 904F0000 */       lbu $t7, ($v0) # gSceneData + 0
  /* 18D124 800D6584 24180001 */     addiu $t8, $zero, 1
  /* 18D128 800D6588 A0580000 */        sb $t8, ($v0) # gSceneData + 0
  /* 18D12C 800D658C 0C00171D */       jal func_80005C74
  /* 18D130 800D6590 A04F0001 */        sb $t7, 1($v0) # gSceneData + 1
  /* 18D134 800D6594 3C028004 */       lui $v0, %hi(D_80045470 + 2)
  /* 18D138 800D6598 94425472 */       lhu $v0, %lo(D_80045470 + 2)($v0)
  .L800D659C:
  /* 18D13C 800D659C 30592000 */      andi $t9, $v0, 0x2000
  /* 18D140 800D65A0 13200004 */      beqz $t9, .L800D65B4
  /* 18D144 800D65A4 2404001F */     addiu $a0, $zero, 0x1f
  /* 18D148 800D65A8 3C058000 */       lui $a1, 0x8000
  /* 18D14C 800D65AC 0C0088DA */       jal func_80022368
  /* 18D150 800D65B0 00003025 */        or $a2, $zero, $zero
  .L800D65B4:
  /* 18D154 800D65B4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18D158 800D65B8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18D15C 800D65BC 03E00008 */        jr $ra
  /* 18D160 800D65C0 00000000 */       nop 

glabel func_ovl16_800D65C4
  /* 18D164 800D65C4 27BDFF70 */     addiu $sp, $sp, -0x90
  /* 18D168 800D65C8 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 18D16C 800D65CC 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 18D170 800D65D0 3C18800D */       lui $t8, %hi(D_ovl16_800D7118)
  /* 18D174 800D65D4 AFBF004C */        sw $ra, 0x4c($sp)
  /* 18D178 800D65D8 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 18D17C 800D65DC 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 18D180 800D65E0 27187118 */     addiu $t8, $t8, %lo(D_ovl16_800D7118)
  /* 18D184 800D65E4 2419000A */     addiu $t9, $zero, 0xa
  /* 18D188 800D65E8 AFB30048 */        sw $s3, 0x48($sp)
  /* 18D18C 800D65EC AFB20044 */        sw $s2, 0x44($sp)
  /* 18D190 800D65F0 AFB10040 */        sw $s1, 0x40($sp)
  /* 18D194 800D65F4 AFB0003C */        sw $s0, 0x3c($sp)
  /* 18D198 800D65F8 AFAE0068 */        sw $t6, 0x68($sp)
  /* 18D19C 800D65FC AFAF006C */        sw $t7, 0x6c($sp)
  /* 18D1A0 800D6600 AFA00070 */        sw $zero, 0x70($sp)
  /* 18D1A4 800D6604 AFA00074 */        sw $zero, 0x74($sp)
  /* 18D1A8 800D6608 AFB80078 */        sw $t8, 0x78($sp)
  /* 18D1AC 800D660C AFB9007C */        sw $t9, 0x7c($sp)
  /* 18D1B0 800D6610 AFA00080 */        sw $zero, 0x80($sp)
  /* 18D1B4 800D6614 AFA00084 */        sw $zero, 0x84($sp)
  /* 18D1B8 800D6618 0C0337DE */       jal rldm_initialize
  /* 18D1BC 800D661C 27A40068 */     addiu $a0, $sp, 0x68
  /* 18D1C0 800D6620 3C10800D */       lui $s0, %hi(D_ovl16_800D7010)
  /* 18D1C4 800D6624 26107010 */     addiu $s0, $s0, %lo(D_ovl16_800D7010)
  /* 18D1C8 800D6628 02002025 */        or $a0, $s0, $zero
  /* 18D1CC 800D662C 0C0337BB */       jal rldm_bytes_need_to_load
  /* 18D1D0 800D6630 24050001 */     addiu $a1, $zero, 1
  /* 18D1D4 800D6634 00402025 */        or $a0, $v0, $zero
  /* 18D1D8 800D6638 0C001260 */       jal hal_alloc
  /* 18D1DC 800D663C 24050010 */     addiu $a1, $zero, 0x10
  /* 18D1E0 800D6640 3C13800D */       lui $s3, %hi(D_ovl16_800D7168)
  /* 18D1E4 800D6644 26737168 */     addiu $s3, $s3, %lo(D_ovl16_800D7168)
  /* 18D1E8 800D6648 02603025 */        or $a2, $s3, $zero
  /* 18D1EC 800D664C 02002025 */        or $a0, $s0, $zero
  /* 18D1F0 800D6650 24050001 */     addiu $a1, $zero, 1
  /* 18D1F4 800D6654 0C033781 */       jal rldm_load_files_into
  /* 18D1F8 800D6658 00403825 */        or $a3, $v0, $zero
  /* 18D1FC 800D665C 3C118000 */       lui $s1, 0x8000
  /* 18D200 800D6660 3C05800D */       lui $a1, %hi(func_ovl16_800D655C)
  /* 18D204 800D6664 24A5655C */     addiu $a1, $a1, %lo(func_ovl16_800D655C)
  /* 18D208 800D6668 02203825 */        or $a3, $s1, $zero
  /* 18D20C 800D666C 00002025 */        or $a0, $zero, $zero
  /* 18D210 800D6670 0C00265A */       jal omMakeGObjCommon
  /* 18D214 800D6674 00003025 */        or $a2, $zero, $zero
  /* 18D218 800D6678 240800FF */     addiu $t0, $zero, 0xff
  /* 18D21C 800D667C AFA80010 */        sw $t0, 0x10($sp)
  /* 18D220 800D6680 24040001 */     addiu $a0, $zero, 1
  /* 18D224 800D6684 02202825 */        or $a1, $s1, $zero
  /* 18D228 800D6688 24060064 */     addiu $a2, $zero, 0x64
  /* 18D22C 800D668C 0C002E7F */       jal func_8000B9FC
  /* 18D230 800D6690 24070003 */     addiu $a3, $zero, 3
  /* 18D234 800D6694 3C09800D */       lui $t1, %hi(func_ovl0_800CD2CC)
  /* 18D238 800D6698 2529D2CC */     addiu $t1, $t1, %lo(func_ovl0_800CD2CC)
  /* 18D23C 800D669C 240A0032 */     addiu $t2, $zero, 0x32
  /* 18D240 800D66A0 240C0000 */     addiu $t4, $zero, 0
  /* 18D244 800D66A4 240D0002 */     addiu $t5, $zero, 2
  /* 18D248 800D66A8 240BFFFF */     addiu $t3, $zero, -1
  /* 18D24C 800D66AC 240E0001 */     addiu $t6, $zero, 1
  /* 18D250 800D66B0 240F0001 */     addiu $t7, $zero, 1
  /* 18D254 800D66B4 AFAF0030 */        sw $t7, 0x30($sp)
  /* 18D258 800D66B8 AFAE0028 */        sw $t6, 0x28($sp)
  /* 18D25C 800D66BC AFAB0020 */        sw $t3, 0x20($sp)
  /* 18D260 800D66C0 AFAD001C */        sw $t5, 0x1c($sp)
  /* 18D264 800D66C4 AFAC0018 */        sw $t4, 0x18($sp)
  /* 18D268 800D66C8 AFAA0014 */        sw $t2, 0x14($sp)
  /* 18D26C 800D66CC AFA90010 */        sw $t1, 0x10($sp)
  /* 18D270 800D66D0 24040001 */     addiu $a0, $zero, 1
  /* 18D274 800D66D4 00002825 */        or $a1, $zero, $zero
  /* 18D278 800D66D8 24060001 */     addiu $a2, $zero, 1
  /* 18D27C 800D66DC 02203825 */        or $a3, $s1, $zero
  /* 18D280 800D66E0 AFA00024 */        sw $zero, 0x24($sp)
  /* 18D284 800D66E4 AFA0002C */        sw $zero, 0x2c($sp)
  /* 18D288 800D66E8 0C002E4F */       jal func_8000B93C
  /* 18D28C 800D66EC AFA00034 */        sw $zero, 0x34($sp)
  /* 18D290 800D66F0 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 18D294 800D66F4 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 18D298 800D66F8 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 18D29C 800D66FC 8C430074 */        lw $v1, 0x74($v0)
  /* 18D2A0 800D6700 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 18D2A4 800D6704 44050000 */      mfc1 $a1, $f0
  /* 18D2A8 800D6708 44060000 */      mfc1 $a2, $f0
  /* 18D2AC 800D670C 3C07439B */       lui $a3, 0x439b
  /* 18D2B0 800D6710 24640008 */     addiu $a0, $v1, 8
  /* 18D2B4 800D6714 0C001C20 */       jal func_80007080
  /* 18D2B8 800D6718 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 18D2BC 800D671C 3C188001 */       lui $t8, %hi(func_80017DBC)
  /* 18D2C0 800D6720 27187DBC */     addiu $t8, $t8, %lo(func_80017DBC)
  /* 18D2C4 800D6724 2419001E */     addiu $t9, $zero, 0x1e
  /* 18D2C8 800D6728 24080000 */     addiu $t0, $zero, 0
  /* 18D2CC 800D672C 24090004 */     addiu $t1, $zero, 4
  /* 18D2D0 800D6730 240AFFFF */     addiu $t2, $zero, -1
  /* 18D2D4 800D6734 240C0001 */     addiu $t4, $zero, 1
  /* 18D2D8 800D6738 240D0001 */     addiu $t5, $zero, 1
  /* 18D2DC 800D673C 240B0001 */     addiu $t3, $zero, 1
  /* 18D2E0 800D6740 AFAB0030 */        sw $t3, 0x30($sp)
  /* 18D2E4 800D6744 AFAD0028 */        sw $t5, 0x28($sp)
  /* 18D2E8 800D6748 AFAC0024 */        sw $t4, 0x24($sp)
  /* 18D2EC 800D674C AFAA0020 */        sw $t2, 0x20($sp)
  /* 18D2F0 800D6750 AFA9001C */        sw $t1, 0x1c($sp)
  /* 18D2F4 800D6754 AFA80018 */        sw $t0, 0x18($sp)
  /* 18D2F8 800D6758 AFB90014 */        sw $t9, 0x14($sp)
  /* 18D2FC 800D675C AFB80010 */        sw $t8, 0x10($sp)
  /* 18D300 800D6760 24040001 */     addiu $a0, $zero, 1
  /* 18D304 800D6764 00002825 */        or $a1, $zero, $zero
  /* 18D308 800D6768 24060001 */     addiu $a2, $zero, 1
  /* 18D30C 800D676C 02203825 */        or $a3, $s1, $zero
  /* 18D310 800D6770 AFA0002C */        sw $zero, 0x2c($sp)
  /* 18D314 800D6774 0C002E4F */       jal func_8000B93C
  /* 18D318 800D6778 AFA00034 */        sw $zero, 0x34($sp)
  /* 18D31C 800D677C 44800000 */      mtc1 $zero, $f0
  /* 18D320 800D6780 8C430074 */        lw $v1, 0x74($v0)
  /* 18D324 800D6784 3C01800D */       lui $at, %hi(D_ovl16_800D7108)
  /* 18D328 800D6788 3C190000 */       lui $t9, %hi(D_NF_00004728)
  /* 18D32C 800D678C E460003C */      swc1 $f0, 0x3c($v1)
  /* 18D330 800D6790 E4600040 */      swc1 $f0, 0x40($v1)
  /* 18D334 800D6794 C4267108 */      lwc1 $f6, %lo(D_ovl16_800D7108)($at)
  /* 18D338 800D6798 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 18D33C 800D679C 44814000 */      mtc1 $at, $f8 # 1.0 to cop1
  /* 18D340 800D67A0 E4600048 */      swc1 $f0, 0x48($v1)
  /* 18D344 800D67A4 E460004C */      swc1 $f0, 0x4c($v1)
  /* 18D348 800D67A8 E4600050 */      swc1 $f0, 0x50($v1)
  /* 18D34C 800D67AC E4600054 */      swc1 $f0, 0x54($v1)
  /* 18D350 800D67B0 E460005C */      swc1 $f0, 0x5c($v1)
  /* 18D354 800D67B4 E4660044 */      swc1 $f6, 0x44($v1)
  /* 18D358 800D67B8 E4680058 */      swc1 $f8, 0x58($v1)
  /* 18D35C 800D67BC 8E780000 */        lw $t8, ($s3) # D_ovl16_800D7168 + 0
  /* 18D360 800D67C0 27394728 */     addiu $t9, $t9, %lo(D_NF_00004728)
  /* 18D364 800D67C4 3C12800D */       lui $s2, %hi(func_ovl0_800CCF00)
  /* 18D368 800D67C8 2652CF00 */     addiu $s2, $s2, %lo(func_ovl0_800CCF00)
  /* 18D36C 800D67CC 240E0001 */     addiu $t6, $zero, 1
  /* 18D370 800D67D0 240FFFFF */     addiu $t7, $zero, -1
  /* 18D374 800D67D4 24090001 */     addiu $t1, $zero, 1
  /* 18D378 800D67D8 240A0001 */     addiu $t2, $zero, 1
  /* 18D37C 800D67DC 03194021 */      addu $t0, $t8, $t9
  /* 18D380 800D67E0 AFA80020 */        sw $t0, 0x20($sp)
  /* 18D384 800D67E4 AFAA002C */        sw $t2, 0x2c($sp)
  /* 18D388 800D67E8 AFA90024 */        sw $t1, 0x24($sp)
  /* 18D38C 800D67EC AFAF001C */        sw $t7, 0x1c($sp)
  /* 18D390 800D67F0 AFAE0014 */        sw $t6, 0x14($sp)
  /* 18D394 800D67F4 AFB20010 */        sw $s2, 0x10($sp)
  /* 18D398 800D67F8 AFA00028 */        sw $zero, 0x28($sp)
  /* 18D39C 800D67FC AFB10018 */        sw $s1, 0x18($sp)
  /* 18D3A0 800D6800 00002025 */        or $a0, $zero, $zero
  /* 18D3A4 800D6804 00002825 */        or $a1, $zero, $zero
  /* 18D3A8 800D6808 00003025 */        or $a2, $zero, $zero
  /* 18D3AC 800D680C 0C002E2F */       jal func_8000B8BC
  /* 18D3B0 800D6810 02203825 */        or $a3, $s1, $zero
  /* 18D3B4 800D6814 3C0141C8 */       lui $at, (0x41C80000 >> 16) # 25.0
  /* 18D3B8 800D6818 44815000 */      mtc1 $at, $f10 # 25.0 to cop1
  /* 18D3BC 800D681C 8C4C0074 */        lw $t4, 0x74($v0)
  /* 18D3C0 800D6820 3C014210 */       lui $at, (0x42100000 >> 16) # 36.0
  /* 18D3C4 800D6824 44818000 */      mtc1 $at, $f16 # 36.0 to cop1
  /* 18D3C8 800D6828 E58A0058 */      swc1 $f10, 0x58($t4)
  /* 18D3CC 800D682C 8C4D0074 */        lw $t5, 0x74($v0)
  /* 18D3D0 800D6830 3C180000 */       lui $t8, %hi(D_NF_00006978)
  /* 18D3D4 800D6834 27186978 */     addiu $t8, $t8, %lo(D_NF_00006978)
  /* 18D3D8 800D6838 E5B0005C */      swc1 $f16, 0x5c($t5)
  /* 18D3DC 800D683C 8E6F0000 */        lw $t7, ($s3) # D_ovl16_800D7168 + 0
  /* 18D3E0 800D6840 240B0001 */     addiu $t3, $zero, 1
  /* 18D3E4 800D6844 240EFFFF */     addiu $t6, $zero, -1
  /* 18D3E8 800D6848 24080001 */     addiu $t0, $zero, 1
  /* 18D3EC 800D684C 24090001 */     addiu $t1, $zero, 1
  /* 18D3F0 800D6850 01F8C821 */      addu $t9, $t7, $t8
  /* 18D3F4 800D6854 AFB90020 */        sw $t9, 0x20($sp)
  /* 18D3F8 800D6858 AFA9002C */        sw $t1, 0x2c($sp)
  /* 18D3FC 800D685C AFA80024 */        sw $t0, 0x24($sp)
  /* 18D400 800D6860 AFAE001C */        sw $t6, 0x1c($sp)
  /* 18D404 800D6864 AFAB0014 */        sw $t3, 0x14($sp)
  /* 18D408 800D6868 AFA00028 */        sw $zero, 0x28($sp)
  /* 18D40C 800D686C AFB10018 */        sw $s1, 0x18($sp)
  /* 18D410 800D6870 AFB20010 */        sw $s2, 0x10($sp)
  /* 18D414 800D6874 00002025 */        or $a0, $zero, $zero
  /* 18D418 800D6878 00002825 */        or $a1, $zero, $zero
  /* 18D41C 800D687C 00003025 */        or $a2, $zero, $zero
  /* 18D420 800D6880 0C002E2F */       jal func_8000B8BC
  /* 18D424 800D6884 02203825 */        or $a3, $s1, $zero
  /* 18D428 800D6888 3C01428C */       lui $at, (0x428C0000 >> 16) # 70.0
  /* 18D42C 800D688C 44819000 */      mtc1 $at, $f18 # 70.0 to cop1
  /* 18D430 800D6890 8C4A0074 */        lw $t2, 0x74($v0)
  /* 18D434 800D6894 3C014210 */       lui $at, (0x42100000 >> 16) # 36.0
  /* 18D438 800D6898 44812000 */      mtc1 $at, $f4 # 36.0 to cop1
  /* 18D43C 800D689C E5520058 */      swc1 $f18, 0x58($t2)
  /* 18D440 800D68A0 8C4C0074 */        lw $t4, 0x74($v0)
  /* 18D444 800D68A4 3C0F0001 */       lui $t7, %hi(D_NF_00008BC8)
  /* 18D448 800D68A8 25EF8BC8 */     addiu $t7, $t7, %lo(D_NF_00008BC8)
  /* 18D44C 800D68AC E584005C */      swc1 $f4, 0x5c($t4)
  /* 18D450 800D68B0 8E6E0000 */        lw $t6, ($s3) # D_ovl16_800D7168 + 0
  /* 18D454 800D68B4 240D0001 */     addiu $t5, $zero, 1
  /* 18D458 800D68B8 240BFFFF */     addiu $t3, $zero, -1
  /* 18D45C 800D68BC 24190001 */     addiu $t9, $zero, 1
  /* 18D460 800D68C0 24080001 */     addiu $t0, $zero, 1
  /* 18D464 800D68C4 01CFC021 */      addu $t8, $t6, $t7
  /* 18D468 800D68C8 AFB80020 */        sw $t8, 0x20($sp)
  /* 18D46C 800D68CC AFA8002C */        sw $t0, 0x2c($sp)
  /* 18D470 800D68D0 AFB90024 */        sw $t9, 0x24($sp)
  /* 18D474 800D68D4 AFAB001C */        sw $t3, 0x1c($sp)
  /* 18D478 800D68D8 AFAD0014 */        sw $t5, 0x14($sp)
  /* 18D47C 800D68DC AFA00028 */        sw $zero, 0x28($sp)
  /* 18D480 800D68E0 AFB10018 */        sw $s1, 0x18($sp)
  /* 18D484 800D68E4 AFB20010 */        sw $s2, 0x10($sp)
  /* 18D488 800D68E8 00002025 */        or $a0, $zero, $zero
  /* 18D48C 800D68EC 00002825 */        or $a1, $zero, $zero
  /* 18D490 800D68F0 00003025 */        or $a2, $zero, $zero
  /* 18D494 800D68F4 0C002E2F */       jal func_8000B8BC
  /* 18D498 800D68F8 02203825 */        or $a3, $s1, $zero
  /* 18D49C 800D68FC 3C0142E6 */       lui $at, (0x42E60000 >> 16) # 115.0
  /* 18D4A0 800D6900 44813000 */      mtc1 $at, $f6 # 115.0 to cop1
  /* 18D4A4 800D6904 8C490074 */        lw $t1, 0x74($v0)
  /* 18D4A8 800D6908 3C014210 */       lui $at, (0x42100000 >> 16) # 36.0
  /* 18D4AC 800D690C 44814000 */      mtc1 $at, $f8 # 36.0 to cop1
  /* 18D4B0 800D6910 E5260058 */      swc1 $f6, 0x58($t1)
  /* 18D4B4 800D6914 8C4A0074 */        lw $t2, 0x74($v0)
  /* 18D4B8 800D6918 3C0E0001 */       lui $t6, %hi(D_NF_0000AE18)
  /* 18D4BC 800D691C 25CEAE18 */     addiu $t6, $t6, %lo(D_NF_0000AE18)
  /* 18D4C0 800D6920 E548005C */      swc1 $f8, 0x5c($t2)
  /* 18D4C4 800D6924 8E6B0000 */        lw $t3, ($s3) # D_ovl16_800D7168 + 0
  /* 18D4C8 800D6928 240C0001 */     addiu $t4, $zero, 1
  /* 18D4CC 800D692C 240DFFFF */     addiu $t5, $zero, -1
  /* 18D4D0 800D6930 24180001 */     addiu $t8, $zero, 1
  /* 18D4D4 800D6934 24190001 */     addiu $t9, $zero, 1
  /* 18D4D8 800D6938 016E7821 */      addu $t7, $t3, $t6
  /* 18D4DC 800D693C AFAF0020 */        sw $t7, 0x20($sp)
  /* 18D4E0 800D6940 AFB9002C */        sw $t9, 0x2c($sp)
  /* 18D4E4 800D6944 AFB80024 */        sw $t8, 0x24($sp)
  /* 18D4E8 800D6948 AFAD001C */        sw $t5, 0x1c($sp)
  /* 18D4EC 800D694C AFAC0014 */        sw $t4, 0x14($sp)
  /* 18D4F0 800D6950 AFA00028 */        sw $zero, 0x28($sp)
  /* 18D4F4 800D6954 AFB10018 */        sw $s1, 0x18($sp)
  /* 18D4F8 800D6958 AFB20010 */        sw $s2, 0x10($sp)
  /* 18D4FC 800D695C 00002025 */        or $a0, $zero, $zero
  /* 18D500 800D6960 00002825 */        or $a1, $zero, $zero
  /* 18D504 800D6964 00003025 */        or $a2, $zero, $zero
  /* 18D508 800D6968 0C002E2F */       jal func_8000B8BC
  /* 18D50C 800D696C 02203825 */        or $a3, $s1, $zero
  /* 18D510 800D6970 3C014320 */       lui $at, (0x43200000 >> 16) # 160.0
  /* 18D514 800D6974 44815000 */      mtc1 $at, $f10 # 160.0 to cop1
  /* 18D518 800D6978 8C480074 */        lw $t0, 0x74($v0)
  /* 18D51C 800D697C 3C014210 */       lui $at, (0x42100000 >> 16) # 36.0
  /* 18D520 800D6980 44818000 */      mtc1 $at, $f16 # 36.0 to cop1
  /* 18D524 800D6984 E50A0058 */      swc1 $f10, 0x58($t0)
  /* 18D528 800D6988 8C490074 */        lw $t1, 0x74($v0)
  /* 18D52C 800D698C 3C0B0001 */       lui $t3, %hi(D_NF_0000D068)
  /* 18D530 800D6990 256BD068 */     addiu $t3, $t3, %lo(D_NF_0000D068)
  /* 18D534 800D6994 E530005C */      swc1 $f16, 0x5c($t1)
  /* 18D538 800D6998 8E6D0000 */        lw $t5, ($s3) # D_ovl16_800D7168 + 0
  /* 18D53C 800D699C 240A0001 */     addiu $t2, $zero, 1
  /* 18D540 800D69A0 240CFFFF */     addiu $t4, $zero, -1
  /* 18D544 800D69A4 240F0001 */     addiu $t7, $zero, 1
  /* 18D548 800D69A8 24180001 */     addiu $t8, $zero, 1
  /* 18D54C 800D69AC 01AB7021 */      addu $t6, $t5, $t3
  /* 18D550 800D69B0 AFAE0020 */        sw $t6, 0x20($sp)
  /* 18D554 800D69B4 AFB8002C */        sw $t8, 0x2c($sp)
  /* 18D558 800D69B8 AFAF0024 */        sw $t7, 0x24($sp)
  /* 18D55C 800D69BC AFAC001C */        sw $t4, 0x1c($sp)
  /* 18D560 800D69C0 AFAA0014 */        sw $t2, 0x14($sp)
  /* 18D564 800D69C4 AFA00028 */        sw $zero, 0x28($sp)
  /* 18D568 800D69C8 AFB10018 */        sw $s1, 0x18($sp)
  /* 18D56C 800D69CC AFB20010 */        sw $s2, 0x10($sp)
  /* 18D570 800D69D0 00002025 */        or $a0, $zero, $zero
  /* 18D574 800D69D4 00002825 */        or $a1, $zero, $zero
  /* 18D578 800D69D8 00003025 */        or $a2, $zero, $zero
  /* 18D57C 800D69DC 0C002E2F */       jal func_8000B8BC
  /* 18D580 800D69E0 02203825 */        or $a3, $s1, $zero
  /* 18D584 800D69E4 3C01434D */       lui $at, (0x434D0000 >> 16) # 205.0
  /* 18D588 800D69E8 44819000 */      mtc1 $at, $f18 # 205.0 to cop1
  /* 18D58C 800D69EC 8C590074 */        lw $t9, 0x74($v0)
  /* 18D590 800D69F0 3C014210 */       lui $at, (0x42100000 >> 16) # 36.0
  /* 18D594 800D69F4 44812000 */      mtc1 $at, $f4 # 36.0 to cop1
  /* 18D598 800D69F8 E7320058 */      swc1 $f18, 0x58($t9)
  /* 18D59C 800D69FC 8C480074 */        lw $t0, 0x74($v0)
  /* 18D5A0 800D6A00 3C0D0001 */       lui $t5, %hi(D_NF_0000F2B8)
  /* 18D5A4 800D6A04 25ADF2B8 */     addiu $t5, $t5, %lo(D_NF_0000F2B8)
  /* 18D5A8 800D6A08 E504005C */      swc1 $f4, 0x5c($t0)
  /* 18D5AC 800D6A0C 8E6C0000 */        lw $t4, ($s3) # D_ovl16_800D7168 + 0
  /* 18D5B0 800D6A10 24090001 */     addiu $t1, $zero, 1
  /* 18D5B4 800D6A14 240AFFFF */     addiu $t2, $zero, -1
  /* 18D5B8 800D6A18 240E0001 */     addiu $t6, $zero, 1
  /* 18D5BC 800D6A1C 240F0001 */     addiu $t7, $zero, 1
  /* 18D5C0 800D6A20 018D5821 */      addu $t3, $t4, $t5
  /* 18D5C4 800D6A24 AFAB0020 */        sw $t3, 0x20($sp)
  /* 18D5C8 800D6A28 AFAF002C */        sw $t7, 0x2c($sp)
  /* 18D5CC 800D6A2C AFAE0024 */        sw $t6, 0x24($sp)
  /* 18D5D0 800D6A30 AFAA001C */        sw $t2, 0x1c($sp)
  /* 18D5D4 800D6A34 AFA90014 */        sw $t1, 0x14($sp)
  /* 18D5D8 800D6A38 AFA00028 */        sw $zero, 0x28($sp)
  /* 18D5DC 800D6A3C AFB10018 */        sw $s1, 0x18($sp)
  /* 18D5E0 800D6A40 AFB20010 */        sw $s2, 0x10($sp)
  /* 18D5E4 800D6A44 00002025 */        or $a0, $zero, $zero
  /* 18D5E8 800D6A48 00002825 */        or $a1, $zero, $zero
  /* 18D5EC 800D6A4C 00003025 */        or $a2, $zero, $zero
  /* 18D5F0 800D6A50 0C002E2F */       jal func_8000B8BC
  /* 18D5F4 800D6A54 02203825 */        or $a3, $s1, $zero
  /* 18D5F8 800D6A58 3C01437A */       lui $at, (0x437A0000 >> 16) # 250.0
  /* 18D5FC 800D6A5C 44813000 */      mtc1 $at, $f6 # 250.0 to cop1
  /* 18D600 800D6A60 8C580074 */        lw $t8, 0x74($v0)
  /* 18D604 800D6A64 3C014210 */       lui $at, (0x42100000 >> 16) # 36.0
  /* 18D608 800D6A68 44814000 */      mtc1 $at, $f8 # 36.0 to cop1
  /* 18D60C 800D6A6C E7060058 */      swc1 $f6, 0x58($t8)
  /* 18D610 800D6A70 8C590074 */        lw $t9, 0x74($v0)
  /* 18D614 800D6A74 3C0C0001 */       lui $t4, %hi(D_NF_00011508)
  /* 18D618 800D6A78 258C1508 */     addiu $t4, $t4, %lo(D_NF_00011508)
  /* 18D61C 800D6A7C E728005C */      swc1 $f8, 0x5c($t9)
  /* 18D620 800D6A80 8E6A0000 */        lw $t2, ($s3) # D_ovl16_800D7168 + 0
  /* 18D624 800D6A84 24080001 */     addiu $t0, $zero, 1
  /* 18D628 800D6A88 2409FFFF */     addiu $t1, $zero, -1
  /* 18D62C 800D6A8C 240B0001 */     addiu $t3, $zero, 1
  /* 18D630 800D6A90 240E0001 */     addiu $t6, $zero, 1
  /* 18D634 800D6A94 014C6821 */      addu $t5, $t2, $t4
  /* 18D638 800D6A98 AFAD0020 */        sw $t5, 0x20($sp)
  /* 18D63C 800D6A9C AFAE002C */        sw $t6, 0x2c($sp)
  /* 18D640 800D6AA0 AFAB0024 */        sw $t3, 0x24($sp)
  /* 18D644 800D6AA4 AFA9001C */        sw $t1, 0x1c($sp)
  /* 18D648 800D6AA8 AFA80014 */        sw $t0, 0x14($sp)
  /* 18D64C 800D6AAC AFA00028 */        sw $zero, 0x28($sp)
  /* 18D650 800D6AB0 AFB10018 */        sw $s1, 0x18($sp)
  /* 18D654 800D6AB4 AFB20010 */        sw $s2, 0x10($sp)
  /* 18D658 800D6AB8 00002025 */        or $a0, $zero, $zero
  /* 18D65C 800D6ABC 00002825 */        or $a1, $zero, $zero
  /* 18D660 800D6AC0 00003025 */        or $a2, $zero, $zero
  /* 18D664 800D6AC4 0C002E2F */       jal func_8000B8BC
  /* 18D668 800D6AC8 02203825 */        or $a3, $s1, $zero
  /* 18D66C 800D6ACC 3C0141C8 */       lui $at, (0x41C80000 >> 16) # 25.0
  /* 18D670 800D6AD0 44815000 */      mtc1 $at, $f10 # 25.0 to cop1
  /* 18D674 800D6AD4 8C4F0074 */        lw $t7, 0x74($v0)
  /* 18D678 800D6AD8 3C01429E */       lui $at, (0x429E0000 >> 16) # 79.0
  /* 18D67C 800D6ADC 44818000 */      mtc1 $at, $f16 # 79.0 to cop1
  /* 18D680 800D6AE0 E5EA0058 */      swc1 $f10, 0x58($t7)
  /* 18D684 800D6AE4 8C580074 */        lw $t8, 0x74($v0)
  /* 18D688 800D6AE8 3C0A0001 */       lui $t2, %hi(D_NF_00013758)
  /* 18D68C 800D6AEC 254A3758 */     addiu $t2, $t2, %lo(D_NF_00013758)
  /* 18D690 800D6AF0 E710005C */      swc1 $f16, 0x5c($t8)
  /* 18D694 800D6AF4 8E690000 */        lw $t1, ($s3) # D_ovl16_800D7168 + 0
  /* 18D698 800D6AF8 24190001 */     addiu $t9, $zero, 1
  /* 18D69C 800D6AFC 2408FFFF */     addiu $t0, $zero, -1
  /* 18D6A0 800D6B00 240D0001 */     addiu $t5, $zero, 1
  /* 18D6A4 800D6B04 240B0001 */     addiu $t3, $zero, 1
  /* 18D6A8 800D6B08 012A6021 */      addu $t4, $t1, $t2
  /* 18D6AC 800D6B0C AFAC0020 */        sw $t4, 0x20($sp)
  /* 18D6B0 800D6B10 AFAB002C */        sw $t3, 0x2c($sp)
  /* 18D6B4 800D6B14 AFAD0024 */        sw $t5, 0x24($sp)
  /* 18D6B8 800D6B18 AFA8001C */        sw $t0, 0x1c($sp)
  /* 18D6BC 800D6B1C AFB90014 */        sw $t9, 0x14($sp)
  /* 18D6C0 800D6B20 AFA00028 */        sw $zero, 0x28($sp)
  /* 18D6C4 800D6B24 AFB10018 */        sw $s1, 0x18($sp)
  /* 18D6C8 800D6B28 AFB20010 */        sw $s2, 0x10($sp)
  /* 18D6CC 800D6B2C 00002025 */        or $a0, $zero, $zero
  /* 18D6D0 800D6B30 00002825 */        or $a1, $zero, $zero
  /* 18D6D4 800D6B34 00003025 */        or $a2, $zero, $zero
  /* 18D6D8 800D6B38 0C002E2F */       jal func_8000B8BC
  /* 18D6DC 800D6B3C 02203825 */        or $a3, $s1, $zero
  /* 18D6E0 800D6B40 3C01428C */       lui $at, (0x428C0000 >> 16) # 70.0
  /* 18D6E4 800D6B44 44819000 */      mtc1 $at, $f18 # 70.0 to cop1
  /* 18D6E8 800D6B48 8C4E0074 */        lw $t6, 0x74($v0)
  /* 18D6EC 800D6B4C 3C01429E */       lui $at, (0x429E0000 >> 16) # 79.0
  /* 18D6F0 800D6B50 44812000 */      mtc1 $at, $f4 # 79.0 to cop1
  /* 18D6F4 800D6B54 E5D20058 */      swc1 $f18, 0x58($t6)
  /* 18D6F8 800D6B58 8C4F0074 */        lw $t7, 0x74($v0)
  /* 18D6FC 800D6B5C 3C090001 */       lui $t1, %hi(D_NF_000159A8)
  /* 18D700 800D6B60 252959A8 */     addiu $t1, $t1, %lo(D_NF_000159A8)
  /* 18D704 800D6B64 E5E4005C */      swc1 $f4, 0x5c($t7)
  /* 18D708 800D6B68 8E680000 */        lw $t0, ($s3) # D_ovl16_800D7168 + 0
  /* 18D70C 800D6B6C 24180001 */     addiu $t8, $zero, 1
  /* 18D710 800D6B70 2419FFFF */     addiu $t9, $zero, -1
  /* 18D714 800D6B74 240C0001 */     addiu $t4, $zero, 1
  /* 18D718 800D6B78 240D0001 */     addiu $t5, $zero, 1
  /* 18D71C 800D6B7C 01095021 */      addu $t2, $t0, $t1
  /* 18D720 800D6B80 AFAA0020 */        sw $t2, 0x20($sp)
  /* 18D724 800D6B84 AFAD002C */        sw $t5, 0x2c($sp)
  /* 18D728 800D6B88 AFAC0024 */        sw $t4, 0x24($sp)
  /* 18D72C 800D6B8C AFB9001C */        sw $t9, 0x1c($sp)
  /* 18D730 800D6B90 AFB80014 */        sw $t8, 0x14($sp)
  /* 18D734 800D6B94 AFA00028 */        sw $zero, 0x28($sp)
  /* 18D738 800D6B98 AFB10018 */        sw $s1, 0x18($sp)
  /* 18D73C 800D6B9C AFB20010 */        sw $s2, 0x10($sp)
  /* 18D740 800D6BA0 00002025 */        or $a0, $zero, $zero
  /* 18D744 800D6BA4 00002825 */        or $a1, $zero, $zero
  /* 18D748 800D6BA8 00003025 */        or $a2, $zero, $zero
  /* 18D74C 800D6BAC 0C002E2F */       jal func_8000B8BC
  /* 18D750 800D6BB0 02203825 */        or $a3, $s1, $zero
  /* 18D754 800D6BB4 3C0142E6 */       lui $at, (0x42E60000 >> 16) # 115.0
  /* 18D758 800D6BB8 44813000 */      mtc1 $at, $f6 # 115.0 to cop1
  /* 18D75C 800D6BBC 8C4B0074 */        lw $t3, 0x74($v0)
  /* 18D760 800D6BC0 3C01429E */       lui $at, (0x429E0000 >> 16) # 79.0
  /* 18D764 800D6BC4 44814000 */      mtc1 $at, $f8 # 79.0 to cop1
  /* 18D768 800D6BC8 E5660058 */      swc1 $f6, 0x58($t3)
  /* 18D76C 800D6BCC 8C4E0074 */        lw $t6, 0x74($v0)
  /* 18D770 800D6BD0 3C080000 */       lui $t0, %hi(D_NF_00001838)
  /* 18D774 800D6BD4 25081838 */     addiu $t0, $t0, %lo(D_NF_00001838)
  /* 18D778 800D6BD8 E5C8005C */      swc1 $f8, 0x5c($t6)
  /* 18D77C 800D6BDC 8E790000 */        lw $t9, ($s3) # D_ovl16_800D7168 + 0
  /* 18D780 800D6BE0 240F0001 */     addiu $t7, $zero, 1
  /* 18D784 800D6BE4 2418FFFF */     addiu $t8, $zero, -1
  /* 18D788 800D6BE8 240A0001 */     addiu $t2, $zero, 1
  /* 18D78C 800D6BEC 240C0001 */     addiu $t4, $zero, 1
  /* 18D790 800D6BF0 03284821 */      addu $t1, $t9, $t0
  /* 18D794 800D6BF4 AFA90020 */        sw $t1, 0x20($sp)
  /* 18D798 800D6BF8 AFAC002C */        sw $t4, 0x2c($sp)
  /* 18D79C 800D6BFC AFAA0024 */        sw $t2, 0x24($sp)
  /* 18D7A0 800D6C00 AFB8001C */        sw $t8, 0x1c($sp)
  /* 18D7A4 800D6C04 AFAF0014 */        sw $t7, 0x14($sp)
  /* 18D7A8 800D6C08 AFA00028 */        sw $zero, 0x28($sp)
  /* 18D7AC 800D6C0C AFB10018 */        sw $s1, 0x18($sp)
  /* 18D7B0 800D6C10 AFB20010 */        sw $s2, 0x10($sp)
  /* 18D7B4 800D6C14 00002025 */        or $a0, $zero, $zero
  /* 18D7B8 800D6C18 00002825 */        or $a1, $zero, $zero
  /* 18D7BC 800D6C1C 00003025 */        or $a2, $zero, $zero
  /* 18D7C0 800D6C20 0C002E2F */       jal func_8000B8BC
  /* 18D7C4 800D6C24 02203825 */        or $a3, $s1, $zero
  /* 18D7C8 800D6C28 3C0141D8 */       lui $at, (0x41D80000 >> 16) # 27.0
  /* 18D7CC 800D6C2C 44815000 */      mtc1 $at, $f10 # 27.0 to cop1
  /* 18D7D0 800D6C30 8C4D0074 */        lw $t5, 0x74($v0)
  /* 18D7D4 800D6C34 3C014358 */       lui $at, (0x43580000 >> 16) # 216.0
  /* 18D7D8 800D6C38 44818000 */      mtc1 $at, $f16 # 216.0 to cop1
  /* 18D7DC 800D6C3C E5AA0058 */      swc1 $f10, 0x58($t5)
  /* 18D7E0 800D6C40 8C4B0074 */        lw $t3, 0x74($v0)
  /* 18D7E4 800D6C44 3C0C0000 */       lui $t4, %hi(D_NF_00002358)
  /* 18D7E8 800D6C48 258C2358 */     addiu $t4, $t4, %lo(D_NF_00002358)
  /* 18D7EC 800D6C4C E570005C */      swc1 $f16, 0x5c($t3)
  /* 18D7F0 800D6C50 8C500074 */        lw $s0, 0x74($v0)
  /* 18D7F4 800D6C54 240B0001 */     addiu $t3, $zero, 1
  /* 18D7F8 800D6C58 24080001 */     addiu $t0, $zero, 1
  /* 18D7FC 800D6C5C 960E0024 */       lhu $t6, 0x24($s0)
  /* 18D800 800D6C60 2409FFFF */     addiu $t1, $zero, -1
  /* 18D804 800D6C64 00002025 */        or $a0, $zero, $zero
  /* 18D808 800D6C68 31CFFFDF */      andi $t7, $t6, 0xffdf
  /* 18D80C 800D6C6C A60F0024 */        sh $t7, 0x24($s0)
  /* 18D810 800D6C70 8C500074 */        lw $s0, 0x74($v0)
  /* 18D814 800D6C74 240E0001 */     addiu $t6, $zero, 1
  /* 18D818 800D6C78 00002825 */        or $a1, $zero, $zero
  /* 18D81C 800D6C7C 96180024 */       lhu $t8, 0x24($s0)
  /* 18D820 800D6C80 00003025 */        or $a2, $zero, $zero
  /* 18D824 800D6C84 02203825 */        or $a3, $s1, $zero
  /* 18D828 800D6C88 37190001 */       ori $t9, $t8, 1
  /* 18D82C 800D6C8C A6190024 */        sh $t9, 0x24($s0)
  /* 18D830 800D6C90 8E6A0000 */        lw $t2, ($s3) # D_ovl16_800D7168 + 0
  /* 18D834 800D6C94 AFAE002C */        sw $t6, 0x2c($sp)
  /* 18D838 800D6C98 AFA00028 */        sw $zero, 0x28($sp)
  /* 18D83C 800D6C9C 014C6821 */      addu $t5, $t2, $t4
  /* 18D840 800D6CA0 AFAD0020 */        sw $t5, 0x20($sp)
  /* 18D844 800D6CA4 AFAB0024 */        sw $t3, 0x24($sp)
  /* 18D848 800D6CA8 AFA9001C */        sw $t1, 0x1c($sp)
  /* 18D84C 800D6CAC AFB10018 */        sw $s1, 0x18($sp)
  /* 18D850 800D6CB0 AFA80014 */        sw $t0, 0x14($sp)
  /* 18D854 800D6CB4 0C002E2F */       jal func_8000B8BC
  /* 18D858 800D6CB8 AFB20010 */        sw $s2, 0x10($sp)
  /* 18D85C 800D6CBC 3C0142BE */       lui $at, (0x42BE0000 >> 16) # 95.0
  /* 18D860 800D6CC0 44819000 */      mtc1 $at, $f18 # 95.0 to cop1
  /* 18D864 800D6CC4 8C4F0074 */        lw $t7, 0x74($v0)
  /* 18D868 800D6CC8 3C014358 */       lui $at, (0x43580000 >> 16) # 216.0
  /* 18D86C 800D6CCC 44812000 */      mtc1 $at, $f4 # 216.0 to cop1
  /* 18D870 800D6CD0 E5F20058 */      swc1 $f18, 0x58($t7)
  /* 18D874 800D6CD4 8C580074 */        lw $t8, 0x74($v0)
  /* 18D878 800D6CD8 3C0E0000 */       lui $t6, %hi(D_NF_000032F8)
  /* 18D87C 800D6CDC 25CE32F8 */     addiu $t6, $t6, %lo(D_NF_000032F8)
  /* 18D880 800D6CE0 E704005C */      swc1 $f4, 0x5c($t8)
  /* 18D884 800D6CE4 8C500074 */        lw $s0, 0x74($v0)
  /* 18D888 800D6CE8 24180001 */     addiu $t8, $zero, 1
  /* 18D88C 800D6CEC 240C0001 */     addiu $t4, $zero, 1
  /* 18D890 800D6CF0 96190024 */       lhu $t9, 0x24($s0)
  /* 18D894 800D6CF4 240DFFFF */     addiu $t5, $zero, -1
  /* 18D898 800D6CF8 00002025 */        or $a0, $zero, $zero
  /* 18D89C 800D6CFC 3328FFDF */      andi $t0, $t9, 0xffdf
  /* 18D8A0 800D6D00 A6080024 */        sh $t0, 0x24($s0)
  /* 18D8A4 800D6D04 8C500074 */        lw $s0, 0x74($v0)
  /* 18D8A8 800D6D08 24190001 */     addiu $t9, $zero, 1
  /* 18D8AC 800D6D0C 00002825 */        or $a1, $zero, $zero
  /* 18D8B0 800D6D10 96090024 */       lhu $t1, 0x24($s0)
  /* 18D8B4 800D6D14 00003025 */        or $a2, $zero, $zero
  /* 18D8B8 800D6D18 02203825 */        or $a3, $s1, $zero
  /* 18D8BC 800D6D1C 352A0001 */       ori $t2, $t1, 1
  /* 18D8C0 800D6D20 A60A0024 */        sh $t2, 0x24($s0)
  /* 18D8C4 800D6D24 8E6B0000 */        lw $t3, ($s3) # D_ovl16_800D7168 + 0
  /* 18D8C8 800D6D28 AFB9002C */        sw $t9, 0x2c($sp)
  /* 18D8CC 800D6D2C AFA00028 */        sw $zero, 0x28($sp)
  /* 18D8D0 800D6D30 016E7821 */      addu $t7, $t3, $t6
  /* 18D8D4 800D6D34 AFAF0020 */        sw $t7, 0x20($sp)
  /* 18D8D8 800D6D38 AFB80024 */        sw $t8, 0x24($sp)
  /* 18D8DC 800D6D3C AFAD001C */        sw $t5, 0x1c($sp)
  /* 18D8E0 800D6D40 AFB10018 */        sw $s1, 0x18($sp)
  /* 18D8E4 800D6D44 AFAC0014 */        sw $t4, 0x14($sp)
  /* 18D8E8 800D6D48 0C002E2F */       jal func_8000B8BC
  /* 18D8EC 800D6D4C AFB20010 */        sw $s2, 0x10($sp)
  /* 18D8F0 800D6D50 3C014323 */       lui $at, (0x43230000 >> 16) # 163.0
  /* 18D8F4 800D6D54 44813000 */      mtc1 $at, $f6 # 163.0 to cop1
  /* 18D8F8 800D6D58 8C480074 */        lw $t0, 0x74($v0)
  /* 18D8FC 800D6D5C 3C014358 */       lui $at, (0x43580000 >> 16) # 216.0
  /* 18D900 800D6D60 44814000 */      mtc1 $at, $f8 # 216.0 to cop1
  /* 18D904 800D6D64 E5060058 */      swc1 $f6, 0x58($t0)
  /* 18D908 800D6D68 8C490074 */        lw $t1, 0x74($v0)
  /* 18D90C 800D6D6C 3C190000 */       lui $t9, %hi(D_NF_00001B18)
  /* 18D910 800D6D70 27391B18 */     addiu $t9, $t9, %lo(D_NF_00001B18)
  /* 18D914 800D6D74 E528005C */      swc1 $f8, 0x5c($t1)
  /* 18D918 800D6D78 8C500074 */        lw $s0, 0x74($v0)
  /* 18D91C 800D6D7C 24090001 */     addiu $t1, $zero, 1
  /* 18D920 800D6D80 240E0001 */     addiu $t6, $zero, 1
  /* 18D924 800D6D84 960A0024 */       lhu $t2, 0x24($s0)
  /* 18D928 800D6D88 240FFFFF */     addiu $t7, $zero, -1
  /* 18D92C 800D6D8C 00002025 */        or $a0, $zero, $zero
  /* 18D930 800D6D90 314CFFDF */      andi $t4, $t2, 0xffdf
  /* 18D934 800D6D94 A60C0024 */        sh $t4, 0x24($s0)
  /* 18D938 800D6D98 8C500074 */        lw $s0, 0x74($v0)
  /* 18D93C 800D6D9C 240A0001 */     addiu $t2, $zero, 1
  /* 18D940 800D6DA0 00002825 */        or $a1, $zero, $zero
  /* 18D944 800D6DA4 960D0024 */       lhu $t5, 0x24($s0)
  /* 18D948 800D6DA8 00003025 */        or $a2, $zero, $zero
  /* 18D94C 800D6DAC 02203825 */        or $a3, $s1, $zero
  /* 18D950 800D6DB0 35AB0001 */       ori $t3, $t5, 1
  /* 18D954 800D6DB4 A60B0024 */        sh $t3, 0x24($s0)
  /* 18D958 800D6DB8 8E780000 */        lw $t8, ($s3) # D_ovl16_800D7168 + 0
  /* 18D95C 800D6DBC AFAA002C */        sw $t2, 0x2c($sp)
  /* 18D960 800D6DC0 AFA00028 */        sw $zero, 0x28($sp)
  /* 18D964 800D6DC4 03194021 */      addu $t0, $t8, $t9
  /* 18D968 800D6DC8 AFA80020 */        sw $t0, 0x20($sp)
  /* 18D96C 800D6DCC AFA90024 */        sw $t1, 0x24($sp)
  /* 18D970 800D6DD0 AFAF001C */        sw $t7, 0x1c($sp)
  /* 18D974 800D6DD4 AFB10018 */        sw $s1, 0x18($sp)
  /* 18D978 800D6DD8 AFAE0014 */        sw $t6, 0x14($sp)
  /* 18D97C 800D6DDC 0C002E2F */       jal func_8000B8BC
  /* 18D980 800D6DE0 AFB20010 */        sw $s2, 0x10($sp)
  /* 18D984 800D6DE4 3C014367 */       lui $at, (0x43670000 >> 16) # 231.0
  /* 18D988 800D6DE8 44815000 */      mtc1 $at, $f10 # 231.0 to cop1
  /* 18D98C 800D6DEC 8C4C0074 */        lw $t4, 0x74($v0)
  /* 18D990 800D6DF0 3C014358 */       lui $at, (0x43580000 >> 16) # 216.0
  /* 18D994 800D6DF4 44818000 */      mtc1 $at, $f16 # 216.0 to cop1
  /* 18D998 800D6DF8 E58A0058 */      swc1 $f10, 0x58($t4)
  /* 18D99C 800D6DFC 8C4D0074 */        lw $t5, 0x74($v0)
  /* 18D9A0 800D6E00 3C0A0000 */       lui $t2, %hi(D_NF_000048B0)
  /* 18D9A4 800D6E04 254A48B0 */     addiu $t2, $t2, %lo(D_NF_000048B0)
  /* 18D9A8 800D6E08 E5B0005C */      swc1 $f16, 0x5c($t5)
  /* 18D9AC 800D6E0C 8C500074 */        lw $s0, 0x74($v0)
  /* 18D9B0 800D6E10 240D0001 */     addiu $t5, $zero, 1
  /* 18D9B4 800D6E14 24190001 */     addiu $t9, $zero, 1
  /* 18D9B8 800D6E18 960B0024 */       lhu $t3, 0x24($s0)
  /* 18D9BC 800D6E1C 2408FFFF */     addiu $t0, $zero, -1
  /* 18D9C0 800D6E20 00002025 */        or $a0, $zero, $zero
  /* 18D9C4 800D6E24 316EFFDF */      andi $t6, $t3, 0xffdf
  /* 18D9C8 800D6E28 A60E0024 */        sh $t6, 0x24($s0)
  /* 18D9CC 800D6E2C 8C500074 */        lw $s0, 0x74($v0)
  /* 18D9D0 800D6E30 3C0B800D */       lui $t3, %hi(func_ovl16_800D64C4)
  /* 18D9D4 800D6E34 256B64C4 */     addiu $t3, $t3, %lo(func_ovl16_800D64C4)
  /* 18D9D8 800D6E38 960F0024 */       lhu $t7, 0x24($s0)
  /* 18D9DC 800D6E3C 240E0001 */     addiu $t6, $zero, 1
  /* 18D9E0 800D6E40 00002825 */        or $a1, $zero, $zero
  /* 18D9E4 800D6E44 35F80001 */       ori $t8, $t7, 1
  /* 18D9E8 800D6E48 A6180024 */        sh $t8, 0x24($s0)
  /* 18D9EC 800D6E4C 8E690000 */        lw $t1, ($s3) # D_ovl16_800D7168 + 0
  /* 18D9F0 800D6E50 AFAE002C */        sw $t6, 0x2c($sp)
  /* 18D9F4 800D6E54 AFAB0028 */        sw $t3, 0x28($sp)
  /* 18D9F8 800D6E58 012A6021 */      addu $t4, $t1, $t2
  /* 18D9FC 800D6E5C AFAC0020 */        sw $t4, 0x20($sp)
  /* 18DA00 800D6E60 AFAD0024 */        sw $t5, 0x24($sp)
  /* 18DA04 800D6E64 AFA8001C */        sw $t0, 0x1c($sp)
  /* 18DA08 800D6E68 AFB10018 */        sw $s1, 0x18($sp)
  /* 18DA0C 800D6E6C AFB90014 */        sw $t9, 0x14($sp)
  /* 18DA10 800D6E70 AFB20010 */        sw $s2, 0x10($sp)
  /* 18DA14 800D6E74 00003025 */        or $a2, $zero, $zero
  /* 18DA18 800D6E78 0C002E2F */       jal func_8000B8BC
  /* 18DA1C 800D6E7C 02203825 */        or $a3, $s1, $zero
  /* 18DA20 800D6E80 3C014311 */       lui $at, (0x43110000 >> 16) # 145.0
  /* 18DA24 800D6E84 44819000 */      mtc1 $at, $f18 # 145.0 to cop1
  /* 18DA28 800D6E88 3C03800D */       lui $v1, %hi(D_ovl16_800D716C)
  /* 18DA2C 800D6E8C 2463716C */     addiu $v1, $v1, %lo(D_ovl16_800D716C)
  /* 18DA30 800D6E90 E4720000 */      swc1 $f18, ($v1) # D_ovl16_800D716C + 0
  /* 18DA34 800D6E94 8C4F0074 */        lw $t7, 0x74($v0)
  /* 18DA38 800D6E98 C4640000 */      lwc1 $f4, ($v1) # D_ovl16_800D716C + 0
  /* 18DA3C 800D6E9C 3C0141A0 */       lui $at, (0x41A00000 >> 16) # 20.0
  /* 18DA40 800D6EA0 44813000 */      mtc1 $at, $f6 # 20.0 to cop1
  /* 18DA44 800D6EA4 E5E40058 */      swc1 $f4, 0x58($t7)
  /* 18DA48 800D6EA8 8C580074 */        lw $t8, 0x74($v0)
  /* 18DA4C 800D6EAC 3C0D0000 */       lui $t5, %hi(D_NF_00003EF0)
  /* 18DA50 800D6EB0 25AD3EF0 */     addiu $t5, $t5, %lo(D_NF_00003EF0)
  /* 18DA54 800D6EB4 E706005C */      swc1 $f6, 0x5c($t8)
  /* 18DA58 800D6EB8 8C500074 */        lw $s0, 0x74($v0)
  /* 18DA5C 800D6EBC 240F0001 */     addiu $t7, $zero, 1
  /* 18DA60 800D6EC0 24090001 */     addiu $t1, $zero, 1
  /* 18DA64 800D6EC4 96190024 */       lhu $t9, 0x24($s0)
  /* 18DA68 800D6EC8 240AFFFF */     addiu $t2, $zero, -1
  /* 18DA6C 800D6ECC 240E0001 */     addiu $t6, $zero, 1
  /* 18DA70 800D6ED0 3328FFDF */      andi $t0, $t9, 0xffdf
  /* 18DA74 800D6ED4 A6080024 */        sh $t0, 0x24($s0)
  /* 18DA78 800D6ED8 8E6C0000 */        lw $t4, ($s3) # D_ovl16_800D7168 + 0
  /* 18DA7C 800D6EDC AFAF002C */        sw $t7, 0x2c($sp)
  /* 18DA80 800D6EE0 AFA00028 */        sw $zero, 0x28($sp)
  /* 18DA84 800D6EE4 018D5821 */      addu $t3, $t4, $t5
  /* 18DA88 800D6EE8 AFAB0020 */        sw $t3, 0x20($sp)
  /* 18DA8C 800D6EEC AFAE0024 */        sw $t6, 0x24($sp)
  /* 18DA90 800D6EF0 AFAA001C */        sw $t2, 0x1c($sp)
  /* 18DA94 800D6EF4 AFB10018 */        sw $s1, 0x18($sp)
  /* 18DA98 800D6EF8 AFA90014 */        sw $t1, 0x14($sp)
  /* 18DA9C 800D6EFC AFB20010 */        sw $s2, 0x10($sp)
  /* 18DAA0 800D6F00 00002025 */        or $a0, $zero, $zero
  /* 18DAA4 800D6F04 00002825 */        or $a1, $zero, $zero
  /* 18DAA8 800D6F08 00003025 */        or $a2, $zero, $zero
  /* 18DAAC 800D6F0C 0C002E2F */       jal func_8000B8BC
  /* 18DAB0 800D6F10 02203825 */        or $a3, $s1, $zero
  /* 18DAB4 800D6F14 3C014336 */       lui $at, (0x43360000 >> 16) # 182.0
  /* 18DAB8 800D6F18 44814000 */      mtc1 $at, $f8 # 182.0 to cop1
  /* 18DABC 800D6F1C 8C580074 */        lw $t8, 0x74($v0)
  /* 18DAC0 800D6F20 3C0141B8 */       lui $at, (0x41B80000 >> 16) # 23.0
  /* 18DAC4 800D6F24 44815000 */      mtc1 $at, $f10 # 23.0 to cop1
  /* 18DAC8 800D6F28 E7080058 */      swc1 $f8, 0x58($t8)
  /* 18DACC 800D6F2C 8C590074 */        lw $t9, 0x74($v0)
  /* 18DAD0 800D6F30 24080032 */     addiu $t0, $zero, 0x32
  /* 18DAD4 800D6F34 240A001C */     addiu $t2, $zero, 0x1c
  /* 18DAD8 800D6F38 E72A005C */      swc1 $f10, 0x5c($t9)
  /* 18DADC 800D6F3C 8C490074 */        lw $t1, 0x74($v0)
  /* 18DAE0 800D6F40 240D000E */     addiu $t5, $zero, 0xe
  /* 18DAE4 800D6F44 240300FF */     addiu $v1, $zero, 0xff
  /* 18DAE8 800D6F48 A1280060 */        sb $t0, 0x60($t1)
  /* 18DAEC 800D6F4C 8C4C0074 */        lw $t4, 0x74($v0)
  /* 18DAF0 800D6F50 A18A0061 */        sb $t2, 0x61($t4)
  /* 18DAF4 800D6F54 8C4B0074 */        lw $t3, 0x74($v0)
  /* 18DAF8 800D6F58 A16D0062 */        sb $t5, 0x62($t3)
  /* 18DAFC 800D6F5C 8C4E0074 */        lw $t6, 0x74($v0)
  /* 18DB00 800D6F60 A1C30028 */        sb $v1, 0x28($t6)
  /* 18DB04 800D6F64 8C4F0074 */        lw $t7, 0x74($v0)
  /* 18DB08 800D6F68 A1E30029 */        sb $v1, 0x29($t7)
  /* 18DB0C 800D6F6C 8C580074 */        lw $t8, 0x74($v0)
  /* 18DB10 800D6F70 A303002A */        sb $v1, 0x2a($t8)
  /* 18DB14 800D6F74 8C500074 */        lw $s0, 0x74($v0)
  /* 18DB18 800D6F78 96190024 */       lhu $t9, 0x24($s0)
  /* 18DB1C 800D6F7C 3328FFDF */      andi $t0, $t9, 0xffdf
  /* 18DB20 800D6F80 A6080024 */        sh $t0, 0x24($s0)
  /* 18DB24 800D6F84 8C500074 */        lw $s0, 0x74($v0)
  /* 18DB28 800D6F88 96090024 */       lhu $t1, 0x24($s0)
  /* 18DB2C 800D6F8C 352A0001 */       ori $t2, $t1, 1
  /* 18DB30 800D6F90 A60A0024 */        sh $t2, 0x24($s0)
  /* 18DB34 800D6F94 8FBF004C */        lw $ra, 0x4c($sp)
  /* 18DB38 800D6F98 8FB30048 */        lw $s3, 0x48($sp)
  /* 18DB3C 800D6F9C 8FB20044 */        lw $s2, 0x44($sp)
  /* 18DB40 800D6FA0 8FB10040 */        lw $s1, 0x40($sp)
  /* 18DB44 800D6FA4 8FB0003C */        lw $s0, 0x3c($sp)
  /* 18DB48 800D6FA8 03E00008 */        jr $ra
  /* 18DB4C 800D6FAC 27BD0090 */     addiu $sp, $sp, 0x90

glabel debug_button_test_entry
  /* 18DB50 800D6FB0 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 18DB54 800D6FB4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18DB58 800D6FB8 3C04800D */       lui $a0, %hi(D_ovl16_800D7058)
  /* 18DB5C 800D6FBC 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 18DB60 800D6FC0 24847058 */     addiu $a0, $a0, %lo(D_ovl16_800D7058)
  /* 18DB64 800D6FC4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18DB68 800D6FC8 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 18DB6C 800D6FCC 0C001C09 */       jal func_80007024
  /* 18DB70 800D6FD0 AC8F000C */        sw $t7, 0xc($a0) # D_ovl16_800D7058 + 12
  /* 18DB74 800D6FD4 3C188039 */       lui $t8, %hi(D_NF_80392A00)
  /* 18DB78 800D6FD8 3C19800D */       lui $t9, %hi(D_NF_800D7170)
  /* 18DB7C 800D6FDC 3C04800D */       lui $a0, %hi(D_ovl16_800D7074)
  /* 18DB80 800D6FE0 27397170 */     addiu $t9, $t9, %lo(D_NF_800D7170)
  /* 18DB84 800D6FE4 27182A00 */     addiu $t8, $t8, %lo(D_NF_80392A00)
  /* 18DB88 800D6FE8 24847074 */     addiu $a0, $a0, %lo(D_ovl16_800D7074)
  /* 18DB8C 800D6FEC 03194023 */      subu $t0, $t8, $t9
  /* 18DB90 800D6FF0 0C001A0F */       jal func_8000683C
  /* 18DB94 800D6FF4 AC880010 */        sw $t0, 0x10($a0) # D_ovl16_800D7074 + 16
  /* 18DB98 800D6FF8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18DB9C 800D6FFC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18DBA0 800D7000 03E00008 */        jr $ra
  /* 18DBA4 800D7004 00000000 */       nop 

  /* 18DBA8 800D7008 00000000 */       nop 
  /* 18DBAC 800D700C 00000000 */       nop 

# Likely start of new file
#glabel D_ovl16_800D7010   # Routine parsed as data
#  /* 18DBB0 800D7010 00000011 */      mthi $zero
#  /* 18DBB4 800D7014 00000000 */       nop 
#glabel D_ovl16_800D7018   # Routine parsed as data
#  /* 18DBB8 800D7018 20202000 */      addi $zero, $at, 0x2000
#  /* 18DBBC 800D701C 20202000 */      addi $zero, $at, 0x2000
#glabel D_ovl16_800D7020   # Routine parsed as data
#  /* 18DBC0 800D7020 FFFFFF00 */        sd $ra, -0x100($ra)
#  /* 18DBC4 800D7024 FFFFFF00 */        sd $ra, -0x100($ra)
#  /* 18DBC8 800D7028 00001400 */       sll $v0, $zero, 0x10
#  /* 18DBCC 800D702C 00000000 */       nop 
#glabel D_ovl16_800D7030   # Routine parsed as data
#  /* 18DBD0 800D7030 D9FFFFFF */   bbit032 $t7, 0x1f, 0x800d7030 # branch target not found
#  /* 18DBD4 800D7034 00020000 */       sll $zero, $v0, 0
#  /* 18DBD8 800D7038 DB020000 */   bbit032 $t8, 2, 0x800d703c # branch target not found
#  /* 18DBDC 800D703C 00000018 */      mult $zero, $zero
#  /* 18DBE0 800D7040 DC08060A */        ld $t0, 0x60a($zero)
#  /* 18DBE4 800D7044 800D7020 */        lb $t5, 0x7020($zero)
#  /* 18DBE8 800D7048 DC08090A */        ld $t0, 0x90a($zero)
#  /* 18DBEC 800D704C 800D7018 */        lb $t5, 0x7018($zero)
#  /* 18DBF0 800D7050 DF000000 */        ld $zero, ($t8)
#  /* 18DBF4 800D7054 00000000 */       nop 
#glabel D_ovl16_800D7058   # Routine parsed as data
#  /* 18DBF8 800D7058 80392A00 */        lb $t9, 0x2a00($at)
#  /* 18DBFC 800D705C 803B6900 */        lb $k1, 0x6900($at)
#  /* 18DC00 800D7060 803DA800 */        lb $sp, -0x5800($at)
#  /* 18DC04 800D7064 00000000 */       nop 
#  /* 18DC08 800D7068 00000140 */     pause 
#  /* 18DC0C 800D706C 000000F0 */       tge $zero, $zero, 3
