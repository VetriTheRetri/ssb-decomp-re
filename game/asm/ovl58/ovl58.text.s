.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80131B00 -> 0x80131F50

glabel func_ovl58_80131B00
  /* 17ECC0 80131B00 27BDFFA0 */     addiu $sp, $sp, -0x60
  /* 17ECC4 80131B04 F7B60030 */      sdc1 $f22, 0x30($sp)
  /* 17ECC8 80131B08 3C01BF1B */       lui $at, (0xBF1B0000 >> 16) # -0.60546875
  /* 17ECCC 80131B0C 4481B000 */      mtc1 $at, $f22 # -0.60546875 to cop1
  /* 17ECD0 80131B10 AFB20040 */        sw $s2, 0x40($sp)
  /* 17ECD4 80131B14 AFB00038 */        sw $s0, 0x38($sp)
  /* 17ECD8 80131B18 F7B40028 */      sdc1 $f20, 0x28($sp)
  /* 17ECDC 80131B1C 3C014282 */       lui $at, (0x42820000 >> 16) # 65.0
  /* 17ECE0 80131B20 AFBF0044 */        sw $ra, 0x44($sp)
  /* 17ECE4 80131B24 AFB1003C */        sw $s1, 0x3c($sp)
  /* 17ECE8 80131B28 4481A000 */      mtc1 $at, $f20 # 65.0 to cop1
  /* 17ECEC 80131B2C 8C910074 */        lw $s1, 0x74($a0)
  /* 17ECF0 80131B30 00008025 */        or $s0, $zero, $zero
  /* 17ECF4 80131B34 24120010 */     addiu $s2, $zero, 0x10
  /* 17ECF8 80131B38 02507023 */      subu $t6, $s2, $s0
  .L80131B3C:
  /* 17ECFC 80131B3C 448E2000 */      mtc1 $t6, $f4
  /* 17ED00 80131B40 24040001 */     addiu $a0, $zero, 1
  /* 17ED04 80131B44 46802020 */   cvt.s.w $f0, $f4
  /* 17ED08 80131B48 4600B182 */     mul.s $f6, $f22, $f0
  /* 17ED0C 80131B4C 00000000 */       nop 
  /* 17ED10 80131B50 46003202 */     mul.s $f8, $f6, $f0
  /* 17ED14 80131B54 4608A281 */     sub.s $f10, $f20, $f8
  /* 17ED18 80131B58 0C002C7A */       jal stop_current_process
  /* 17ED1C 80131B5C E62A005C */      swc1 $f10, 0x5c($s1)
  /* 17ED20 80131B60 26100001 */     addiu $s0, $s0, 1
  /* 17ED24 80131B64 2A010010 */      slti $at, $s0, 0x10
  /* 17ED28 80131B68 5420FFF4 */      bnel $at, $zero, .L80131B3C
  /* 17ED2C 80131B6C 02507023 */      subu $t6, $s2, $s0
  /* 17ED30 80131B70 E634005C */      swc1 $f20, 0x5c($s1)
  /* 17ED34 80131B74 00008025 */        or $s0, $zero, $zero
  .L80131B78:
  /* 17ED38 80131B78 0C002C7A */       jal stop_current_process
  /* 17ED3C 80131B7C 24040001 */     addiu $a0, $zero, 1
  /* 17ED40 80131B80 26100001 */     addiu $s0, $s0, 1
  /* 17ED44 80131B84 2A010018 */      slti $at, $s0, 0x18
  /* 17ED48 80131B88 1420FFFB */      bnez $at, .L80131B78
  /* 17ED4C 80131B8C 00000000 */       nop 
  /* 17ED50 80131B90 3C0F8013 */       lui $t7, %hi(D_ovl58_80131F50)
  /* 17ED54 80131B94 25EF1F50 */     addiu $t7, $t7, %lo(D_ovl58_80131F50)
  /* 17ED58 80131B98 8DF90000 */        lw $t9, ($t7) # D_ovl58_80131F50 + 0
  /* 17ED5C 80131B9C 27A70050 */     addiu $a3, $sp, 0x50
  /* 17ED60 80131BA0 2408000A */     addiu $t0, $zero, 0xa
  /* 17ED64 80131BA4 ACF90000 */        sw $t9, ($a3)
  /* 17ED68 80131BA8 AFA00018 */        sw $zero, 0x18($sp)
  /* 17ED6C 80131BAC AFA00014 */        sw $zero, 0x14($sp)
  /* 17ED70 80131BB0 AFA80010 */        sw $t0, 0x10($sp)
  /* 17ED74 80131BB4 240403FD */     addiu $a0, $zero, 0x3fd
  /* 17ED78 80131BB8 2405000D */     addiu $a1, $zero, 0xd
  /* 17ED7C 80131BBC 0C035018 */       jal func_ovl0_800D4060
  /* 17ED80 80131BC0 2406000A */     addiu $a2, $zero, 0xa
  /* 17ED84 80131BC4 00008025 */        or $s0, $zero, $zero
  /* 17ED88 80131BC8 2411000D */     addiu $s1, $zero, 0xd
  .L80131BCC:
  /* 17ED8C 80131BCC 0C002C7A */       jal stop_current_process
  /* 17ED90 80131BD0 24040001 */     addiu $a0, $zero, 1
  /* 17ED94 80131BD4 26100001 */     addiu $s0, $s0, 1
  /* 17ED98 80131BD8 1611FFFC */       bne $s0, $s1, .L80131BCC
  /* 17ED9C 80131BDC 00000000 */       nop 
  /* 17EDA0 80131BE0 24090001 */     addiu $t1, $zero, 1
  /* 17EDA4 80131BE4 3C018013 */       lui $at, %hi(D_ovl58_80132074)
  /* 17EDA8 80131BE8 AC292074 */        sw $t1, %lo(D_ovl58_80132074)($at)
  .L80131BEC:
  /* 17EDAC 80131BEC 0C002C7A */       jal stop_current_process
  /* 17EDB0 80131BF0 24040001 */     addiu $a0, $zero, 1
  /* 17EDB4 80131BF4 1000FFFD */         b .L80131BEC
  /* 17EDB8 80131BF8 00000000 */       nop 
  /* 17EDBC 80131BFC 00000000 */       nop 
# Maybe start of new file
  /* 17EDC0 80131C00 8FBF0044 */        lw $ra, 0x44($sp)
  /* 17EDC4 80131C04 D7B40028 */      ldc1 $f20, 0x28($sp)
  /* 17EDC8 80131C08 D7B60030 */      ldc1 $f22, 0x30($sp)
  /* 17EDCC 80131C0C 8FB00038 */        lw $s0, 0x38($sp)
  /* 17EDD0 80131C10 8FB1003C */        lw $s1, 0x3c($sp)
  /* 17EDD4 80131C14 8FB20040 */        lw $s2, 0x40($sp)
  /* 17EDD8 80131C18 03E00008 */        jr $ra
  /* 17EDDC 80131C1C 27BD0060 */     addiu $sp, $sp, 0x60

glabel func_ovl58_80131C20
  /* 17EDE0 80131C20 3C038013 */       lui $v1, %hi(D_ovl58_80132070)
  /* 17EDE4 80131C24 24632070 */     addiu $v1, $v1, %lo(D_ovl58_80132070)
  /* 17EDE8 80131C28 8C620000 */        lw $v0, ($v1) # D_ovl58_80132070 + 0
  /* 17EDEC 80131C2C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 17EDF0 80131C30 AFBF0014 */        sw $ra, 0x14($sp)
  /* 17EDF4 80131C34 10400004 */      beqz $v0, .L80131C48
  /* 17EDF8 80131C38 AFA40018 */        sw $a0, 0x18($sp)
  /* 17EDFC 80131C3C 244EFFFF */     addiu $t6, $v0, -1
  /* 17EE00 80131C40 AC6E0000 */        sw $t6, ($v1) # D_ovl58_80132070 + 0
  /* 17EE04 80131C44 01C01025 */        or $v0, $t6, $zero
  .L80131C48:
  /* 17EE08 80131C48 1440000D */      bnez $v0, .L80131C80
  /* 17EE0C 80131C4C 00000000 */       nop 
  /* 17EE10 80131C50 0C0E41DB */       jal func_ovl1_8039076C
  /* 17EE14 80131C54 3404D000 */       ori $a0, $zero, 0xd000
  /* 17EE18 80131C58 10400009 */      beqz $v0, .L80131C80
  /* 17EE1C 80131C5C 24180001 */     addiu $t8, $zero, 1
  /* 17EE20 80131C60 3C02800A */       lui $v0, %hi(gSceneData)
  /* 17EE24 80131C64 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 17EE28 80131C68 904F0000 */       lbu $t7, ($v0) # gSceneData + 0
  /* 17EE2C 80131C6C A0580000 */        sb $t8, ($v0) # gSceneData + 0
  /* 17EE30 80131C70 0C00171D */       jal func_80005C74
  /* 17EE34 80131C74 A04F0001 */        sb $t7, 1($v0) # gSceneData + 1
  /* 17EE38 80131C78 1000000C */         b .L80131CAC
  /* 17EE3C 80131C7C 8FBF0014 */        lw $ra, 0x14($sp)
  .L80131C80:
  /* 17EE40 80131C80 3C198013 */       lui $t9, %hi(D_ovl58_80132074)
  /* 17EE44 80131C84 8F392074 */        lw $t9, %lo(D_ovl58_80132074)($t9)
  /* 17EE48 80131C88 3C02800A */       lui $v0, %hi(gSceneData)
  /* 17EE4C 80131C8C 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 17EE50 80131C90 13200005 */      beqz $t9, .L80131CA8
  /* 17EE54 80131C94 2409001C */     addiu $t1, $zero, 0x1c
  /* 17EE58 80131C98 90480000 */       lbu $t0, ($v0) # gSceneData + 0
  /* 17EE5C 80131C9C A0490000 */        sb $t1, ($v0) # gSceneData + 0
  /* 17EE60 80131CA0 0C00171D */       jal func_80005C74
  /* 17EE64 80131CA4 A0480001 */        sb $t0, 1($v0) # gSceneData + 1
  .L80131CA8:
  /* 17EE68 80131CA8 8FBF0014 */        lw $ra, 0x14($sp)
  .L80131CAC:
  /* 17EE6C 80131CAC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 17EE70 80131CB0 03E00008 */        jr $ra
  /* 17EE74 80131CB4 00000000 */       nop 

  /* 17EE78 80131CB8 27BDFF80 */     addiu $sp, $sp, -0x80
  /* 17EE7C 80131CBC 240E0008 */     addiu $t6, $zero, 8
  /* 17EE80 80131CC0 3C018013 */       lui $at, %hi(D_ovl58_80132070)
  /* 17EE84 80131CC4 AC2E2070 */        sw $t6, %lo(D_ovl58_80132070)($at)
  /* 17EE88 80131CC8 3C0F001B */       lui $t7, %hi(D_NF_001AC870)
  /* 17EE8C 80131CCC 3C180000 */       lui $t8, %hi(D_NF_00000854)
  /* 17EE90 80131CD0 3C198013 */       lui $t9, %hi(D_ovl58_80132048)
  /* 17EE94 80131CD4 AFBF003C */        sw $ra, 0x3c($sp)
  /* 17EE98 80131CD8 3C018013 */       lui $at, %hi(D_ovl58_80132074)
  /* 17EE9C 80131CDC 25EFC870 */     addiu $t7, $t7, %lo(D_NF_001AC870)
  /* 17EEA0 80131CE0 27180854 */     addiu $t8, $t8, %lo(D_NF_00000854)
  /* 17EEA4 80131CE4 27392048 */     addiu $t9, $t9, %lo(D_ovl58_80132048)
  /* 17EEA8 80131CE8 24080005 */     addiu $t0, $zero, 5
  /* 17EEAC 80131CEC AC202074 */        sw $zero, %lo(D_ovl58_80132074)($at)
  /* 17EEB0 80131CF0 AFAF0060 */        sw $t7, 0x60($sp)
  /* 17EEB4 80131CF4 AFB80064 */        sw $t8, 0x64($sp)
  /* 17EEB8 80131CF8 AFA00068 */        sw $zero, 0x68($sp)
  /* 17EEBC 80131CFC AFA0006C */        sw $zero, 0x6c($sp)
  /* 17EEC0 80131D00 AFB90070 */        sw $t9, 0x70($sp)
  /* 17EEC4 80131D04 AFA80074 */        sw $t0, 0x74($sp)
  /* 17EEC8 80131D08 AFA00078 */        sw $zero, 0x78($sp)
  /* 17EECC 80131D0C AFA0007C */        sw $zero, 0x7c($sp)
  /* 17EED0 80131D10 0C0337DE */       jal rldm_initialize
  /* 17EED4 80131D14 27A40060 */     addiu $a0, $sp, 0x60
  /* 17EED8 80131D18 3C058013 */       lui $a1, %hi(func_ovl58_80131C20)
  /* 17EEDC 80131D1C 24A51C20 */     addiu $a1, $a1, %lo(func_ovl58_80131C20)
  /* 17EEE0 80131D20 00002025 */        or $a0, $zero, $zero
  /* 17EEE4 80131D24 00003025 */        or $a2, $zero, $zero
  /* 17EEE8 80131D28 0C00265A */       jal omMakeGObjCommon
  /* 17EEEC 80131D2C 3C078000 */       lui $a3, 0x8000
  /* 17EEF0 80131D30 240900FF */     addiu $t1, $zero, 0xff
  /* 17EEF4 80131D34 AFA90010 */        sw $t1, 0x10($sp)
  /* 17EEF8 80131D38 00002025 */        or $a0, $zero, $zero
  /* 17EEFC 80131D3C 3C058000 */       lui $a1, 0x8000
  /* 17EF00 80131D40 24060064 */     addiu $a2, $zero, 0x64
  /* 17EF04 80131D44 0C002E7F */       jal func_8000B9FC
  /* 17EF08 80131D48 24070002 */     addiu $a3, $zero, 2
  /* 17EF0C 80131D4C 3C0A800D */       lui $t2, %hi(func_ovl0_800CD2CC)
  /* 17EF10 80131D50 254AD2CC */     addiu $t2, $t2, %lo(func_ovl0_800CD2CC)
  /* 17EF14 80131D54 240B0050 */     addiu $t3, $zero, 0x50
  /* 17EF18 80131D58 240C0000 */     addiu $t4, $zero, 0
  /* 17EF1C 80131D5C 240D0001 */     addiu $t5, $zero, 1
  /* 17EF20 80131D60 240EFFFF */     addiu $t6, $zero, -1
  /* 17EF24 80131D64 240F0001 */     addiu $t7, $zero, 1
  /* 17EF28 80131D68 24180001 */     addiu $t8, $zero, 1
  /* 17EF2C 80131D6C AFB80030 */        sw $t8, 0x30($sp)
  /* 17EF30 80131D70 AFAF0028 */        sw $t7, 0x28($sp)
  /* 17EF34 80131D74 AFAE0020 */        sw $t6, 0x20($sp)
  /* 17EF38 80131D78 AFAD001C */        sw $t5, 0x1c($sp)
  /* 17EF3C 80131D7C AFAC0018 */        sw $t4, 0x18($sp)
  /* 17EF40 80131D80 AFAB0014 */        sw $t3, 0x14($sp)
  /* 17EF44 80131D84 AFAA0010 */        sw $t2, 0x10($sp)
  /* 17EF48 80131D88 240403EB */     addiu $a0, $zero, 0x3eb
  /* 17EF4C 80131D8C 00002825 */        or $a1, $zero, $zero
  /* 17EF50 80131D90 24060009 */     addiu $a2, $zero, 9
  /* 17EF54 80131D94 3C078000 */       lui $a3, 0x8000
  /* 17EF58 80131D98 AFA00024 */        sw $zero, 0x24($sp)
  /* 17EF5C 80131D9C AFA0002C */        sw $zero, 0x2c($sp)
  /* 17EF60 80131DA0 0C002E4F */       jal func_8000B93C
  /* 17EF64 80131DA4 AFA00034 */        sw $zero, 0x34($sp)
  /* 17EF68 80131DA8 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 17EF6C 80131DAC 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 17EF70 80131DB0 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 17EF74 80131DB4 8C430074 */        lw $v1, 0x74($v0)
  /* 17EF78 80131DB8 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 17EF7C 80131DBC 44050000 */      mfc1 $a1, $f0
  /* 17EF80 80131DC0 44060000 */      mfc1 $a2, $f0
  /* 17EF84 80131DC4 3C07439B */       lui $a3, 0x439b
  /* 17EF88 80131DC8 24640008 */     addiu $a0, $v1, 8
  /* 17EF8C 80131DCC 0C001C20 */       jal func_80007080
  /* 17EF90 80131DD0 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 17EF94 80131DD4 240403F0 */     addiu $a0, $zero, 0x3f0
  /* 17EF98 80131DD8 00002825 */        or $a1, $zero, $zero
  /* 17EF9C 80131DDC 2406000D */     addiu $a2, $zero, 0xd
  /* 17EFA0 80131DE0 0C00265A */       jal omMakeGObjCommon
  /* 17EFA4 80131DE4 3C078000 */       lui $a3, 0x8000
  /* 17EFA8 80131DE8 3C058013 */       lui $a1, %hi(func_ovl58_80131B00)
  /* 17EFAC 80131DEC AFA20058 */        sw $v0, 0x58($sp)
  /* 17EFB0 80131DF0 24A51B00 */     addiu $a1, $a1, %lo(func_ovl58_80131B00)
  /* 17EFB4 80131DF4 00402025 */        or $a0, $v0, $zero
  /* 17EFB8 80131DF8 00003025 */        or $a2, $zero, $zero
  /* 17EFBC 80131DFC 0C002062 */       jal omAddGObjCommonProc
  /* 17EFC0 80131E00 24070001 */     addiu $a3, $zero, 1
  /* 17EFC4 80131E04 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 17EFC8 80131E08 2419FFFF */     addiu $t9, $zero, -1
  /* 17EFCC 80131E0C AFB90010 */        sw $t9, 0x10($sp)
  /* 17EFD0 80131E10 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 17EFD4 80131E14 8FA40058 */        lw $a0, 0x58($sp)
  /* 17EFD8 80131E18 00003025 */        or $a2, $zero, $zero
  /* 17EFDC 80131E1C 0C00277D */       jal func_80009DF4
  /* 17EFE0 80131E20 3C078000 */       lui $a3, 0x8000
  /* 17EFE4 80131E24 3C040000 */       lui $a0, %hi(D_NF_000000C2)
  /* 17EFE8 80131E28 248400C2 */     addiu $a0, $a0, %lo(D_NF_000000C2)
  /* 17EFEC 80131E2C 0C0336F4 */       jal rldm_bytes_needed_to_load
  /* 17EFF0 80131E30 AFA40040 */        sw $a0, 0x40($sp)
  /* 17EFF4 80131E34 00402025 */        or $a0, $v0, $zero
  /* 17EFF8 80131E38 0C001260 */       jal hal_alloc
  /* 17EFFC 80131E3C 24050010 */     addiu $a1, $zero, 0x10
  /* 17F000 80131E40 8FA40040 */        lw $a0, 0x40($sp)
  /* 17F004 80131E44 0C033722 */       jal rldm_get_file_with_external_heap
  /* 17F008 80131E48 00402825 */        or $a1, $v0, $zero
  /* 17F00C 80131E4C 3C080000 */       lui $t0, %hi(D_NF_000073C0)
  /* 17F010 80131E50 250873C0 */     addiu $t0, $t0, %lo(D_NF_000073C0)
  /* 17F014 80131E54 00482821 */      addu $a1, $v0, $t0
  /* 17F018 80131E58 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 17F01C 80131E5C 8FA40058 */        lw $a0, 0x58($sp)
  /* 17F020 80131E60 3C0142C0 */       lui $at, (0x42C00000 >> 16) # 96.0
  /* 17F024 80131E64 44813000 */      mtc1 $at, $f6 # 96.0 to cop1
  /* 17F028 80131E68 94490024 */       lhu $t1, 0x24($v0)
  /* 17F02C 80131E6C 3C01435C */       lui $at, (0x435C0000 >> 16) # 220.0
  /* 17F030 80131E70 44814000 */      mtc1 $at, $f8 # 220.0 to cop1
  /* 17F034 80131E74 3C0B8013 */       lui $t3, %hi(D_ovl58_80131F54)
  /* 17F038 80131E78 312AFFDF */      andi $t2, $t1, 0xffdf
  /* 17F03C 80131E7C A44A0024 */        sh $t2, 0x24($v0)
  /* 17F040 80131E80 256B1F54 */     addiu $t3, $t3, %lo(D_ovl58_80131F54)
  /* 17F044 80131E84 E4460058 */      swc1 $f6, 0x58($v0)
  /* 17F048 80131E88 E448005C */      swc1 $f8, 0x5c($v0)
  /* 17F04C 80131E8C 8D6D0000 */        lw $t5, ($t3) # D_ovl58_80131F54 + 0
  /* 17F050 80131E90 27A7004C */     addiu $a3, $sp, 0x4c
  /* 17F054 80131E94 240E0010 */     addiu $t6, $zero, 0x10
  /* 17F058 80131E98 ACED0000 */        sw $t5, ($a3)
  /* 17F05C 80131E9C 240F0001 */     addiu $t7, $zero, 1
  /* 17F060 80131EA0 AFAF0014 */        sw $t7, 0x14($sp)
  /* 17F064 80131EA4 AFA00018 */        sw $zero, 0x18($sp)
  /* 17F068 80131EA8 AFAE0010 */        sw $t6, 0x10($sp)
  /* 17F06C 80131EAC 240403FD */     addiu $a0, $zero, 0x3fd
  /* 17F070 80131EB0 2405000D */     addiu $a1, $zero, 0xd
  /* 17F074 80131EB4 0C035018 */       jal func_ovl0_800D4060
  /* 17F078 80131EB8 2406000A */     addiu $a2, $zero, 0xa
  /* 17F07C 80131EBC 8FBF003C */        lw $ra, 0x3c($sp)
  /* 17F080 80131EC0 27BD0080 */     addiu $sp, $sp, 0x80
  /* 17F084 80131EC4 03E00008 */        jr $ra
  /* 17F088 80131EC8 00000000 */       nop 

glabel func_ovl58_80131ECC
  /* 17F08C 80131ECC 8C830000 */        lw $v1, ($a0)
  /* 17F090 80131ED0 3C188013 */       lui $t8, %hi(D_ovl58_80131F70)
  /* 17F094 80131ED4 27181F70 */     addiu $t8, $t8, %lo(D_ovl58_80131F70)
  /* 17F098 80131ED8 246E0008 */     addiu $t6, $v1, 8
  /* 17F09C 80131EDC AC8E0000 */        sw $t6, ($a0)
  /* 17F0A0 80131EE0 3C0FDE00 */       lui $t7, 0xde00
  /* 17F0A4 80131EE4 AC6F0000 */        sw $t7, ($v1)
  /* 17F0A8 80131EE8 03E00008 */        jr $ra
  /* 17F0AC 80131EEC AC780004 */        sw $t8, 4($v1)

glabel overlay_set27_entry
  /* 17F0B0 80131EF0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 17F0B4 80131EF4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 17F0B8 80131EF8 0C00829D */       jal func_80020A74
  /* 17F0BC 80131EFC 00000000 */       nop 
  /* 17F0C0 80131F00 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 17F0C4 80131F04 3C048013 */       lui $a0, %hi(D_ovl58_80131F98)
  /* 17F0C8 80131F08 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 17F0CC 80131F0C 24841F98 */     addiu $a0, $a0, %lo(D_ovl58_80131F98)
  /* 17F0D0 80131F10 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 17F0D4 80131F14 0C001C09 */       jal func_80007024
  /* 17F0D8 80131F18 AC8F000C */        sw $t7, 0xc($a0) # D_ovl58_80131F98 + 12
  /* 17F0DC 80131F1C 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 17F0E0 80131F20 3C198013 */       lui $t9, %hi(D_NF_80132080)
  /* 17F0E4 80131F24 3C048013 */       lui $a0, %hi(D_ovl58_80131FB4)
  /* 17F0E8 80131F28 27392080 */     addiu $t9, $t9, %lo(D_NF_80132080)
  /* 17F0EC 80131F2C 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 17F0F0 80131F30 24841FB4 */     addiu $a0, $a0, %lo(D_ovl58_80131FB4)
  /* 17F0F4 80131F34 03194023 */      subu $t0, $t8, $t9
  /* 17F0F8 80131F38 0C001A0F */       jal func_8000683C
  /* 17F0FC 80131F3C AC880010 */        sw $t0, 0x10($a0) # D_ovl58_80131FB4 + 16
  /* 17F100 80131F40 8FBF0014 */        lw $ra, 0x14($sp)
  /* 17F104 80131F44 27BD0018 */     addiu $sp, $sp, 0x18
  /* 17F108 80131F48 03E00008 */        jr $ra
  /* 17F10C 80131F4C 00000000 */       nop 
#
#glabel D_ovl58_80131F50   # Routine parsed as data
#  /* 17F110 80131F50 000000FF */    dsra32 $zero, $zero, 3
#glabel D_ovl58_80131F54   # Routine parsed as data
#  /* 17F114 80131F54 00000000 */       nop 
#glabel D_ovl58_80131F58   # Routine parsed as data
#  /* 17F118 80131F58 20202000 */      addi $zero, $at, 0x2000
#  /* 17F11C 80131F5C 20202000 */      addi $zero, $at, 0x2000
#glabel D_ovl58_80131F60   # Routine parsed as data
#  /* 17F120 80131F60 FFFFFF00 */        sd $ra, -0x100($ra)
#  /* 17F124 80131F64 FFFFFF00 */        sd $ra, -0x100($ra)
#  /* 17F128 80131F68 0A323200 */         j func_NF_88C8C800 # couldn't be resolved
#  /* 17F12C 80131F6C 00000000 */       nop 
#
#glabel D_ovl58_80131F70   # Routine parsed as data
#  /* 17F130 80131F70 D9FFFFFF */   bbit032 $t7, 0x1f, 0x80131f70 # branch target not found
#  /* 17F134 80131F74 00020000 */       sll $zero, $v0, 0
#  /* 17F138 80131F78 DB020000 */   bbit032 $t8, 2, 0x80131f7c # branch target not found
#  /* 17F13C 80131F7C 00000018 */      mult $zero, $zero
#  /* 17F140 80131F80 DC08060A */        ld $t0, 0x60a($zero)
#  /* 17F144 80131F84 80131F60 */        lb $s3, 0x1f60($zero)
#  /* 17F148 80131F88 DC08090A */        ld $t0, 0x90a($zero)
#  /* 17F14C 80131F8C 80131F58 */        lb $s3, 0x1f58($zero)
#  /* 17F150 80131F90 DF000000 */        ld $zero, ($t8)
#  /* 17F154 80131F94 00000000 */       nop 
#glabel D_ovl58_80131F98   # Routine parsed as data
#  /* 17F158 80131F98 80392A00 */        lb $t9, 0x2a00($at)
#  /* 17F15C 80131F9C 803B6900 */        lb $k1, 0x6900($at)
#  /* 17F160 80131FA0 803DA800 */        lb $sp, -0x5800($at)
#  /* 17F164 80131FA4 00000000 */       nop 
#  /* 17F168 80131FA8 00000140 */     pause 
#  /* 17F16C 80131FAC 000000F0 */       tge $zero, $zero, 3
