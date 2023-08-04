.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80131B00 -> 0x80132370

glabel func_ovl23_80131B00
  /* 12A4C0 80131B00 8C830000 */        lw $v1, ($a0)
  /* 12A4C4 80131B04 3C188013 */       lui $t8, %hi(D_ovl23_80132390)
  /* 12A4C8 80131B08 27182390 */     addiu $t8, $t8, %lo(D_ovl23_80132390)
  /* 12A4CC 80131B0C 246E0008 */     addiu $t6, $v1, 8
  /* 12A4D0 80131B10 AC8E0000 */        sw $t6, ($a0)
  /* 12A4D4 80131B14 3C0FDE00 */       lui $t7, 0xde00
  /* 12A4D8 80131B18 AC6F0000 */        sw $t7, ($v1)
  /* 12A4DC 80131B1C 03E00008 */        jr $ra
  /* 12A4E0 80131B20 AC780004 */        sw $t8, 4($v1)

glabel func_ovl23_80131B24
  /* 12A4E4 80131B24 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 12A4E8 80131B28 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 12A4EC 80131B2C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12A4F0 80131B30 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 12A4F4 80131B34 AFBF0014 */        sw $ra, 0x14($sp)
  /* 12A4F8 80131B38 244E0008 */     addiu $t6, $v0, 8
  /* 12A4FC 80131B3C AFA40018 */        sw $a0, 0x18($sp)
  /* 12A500 80131B40 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 12A504 80131B44 3C0DE700 */       lui $t5, 0xe700
  /* 12A508 80131B48 AC4D0000 */        sw $t5, ($v0)
  /* 12A50C 80131B4C AC400004 */        sw $zero, 4($v0)
  /* 12A510 80131B50 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12A514 80131B54 3C18E300 */       lui $t8, (0xE3000A01 >> 16) # 3808430593
  /* 12A518 80131B58 37180A01 */       ori $t8, $t8, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 12A51C 80131B5C 244F0008 */     addiu $t7, $v0, 8
  /* 12A520 80131B60 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 12A524 80131B64 AC400004 */        sw $zero, 4($v0)
  /* 12A528 80131B68 AC580000 */        sw $t8, ($v0)
  /* 12A52C 80131B6C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12A530 80131B70 240F3BFF */     addiu $t7, $zero, 0x3bff
  /* 12A534 80131B74 3C0EFA00 */       lui $t6, 0xfa00
  /* 12A538 80131B78 24590008 */     addiu $t9, $v0, 8
  /* 12A53C 80131B7C AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 12A540 80131B80 AC4F0004 */        sw $t7, 4($v0)
  /* 12A544 80131B84 AC4E0000 */        sw $t6, ($v0)
  /* 12A548 80131B88 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12A54C 80131B8C 3C0EFFFD */       lui $t6, (0xFFFDF6FB >> 16) # 4294833915
  /* 12A550 80131B90 3C19FCFF */       lui $t9, (0xFCFFFFFF >> 16) # 4244635647
  /* 12A554 80131B94 24580008 */     addiu $t8, $v0, 8
  /* 12A558 80131B98 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 12A55C 80131B9C 3739FFFF */       ori $t9, $t9, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 12A560 80131BA0 35CEF6FB */       ori $t6, $t6, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 12A564 80131BA4 AC4E0004 */        sw $t6, 4($v0)
  /* 12A568 80131BA8 AC590000 */        sw $t9, ($v0)
  /* 12A56C 80131BAC 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12A570 80131BB0 3C1FE200 */       lui $ra, (0xE200001C >> 16) # 3791650844
  /* 12A574 80131BB4 3C180050 */       lui $t8, (0x5041C8 >> 16) # 5259720
  /* 12A578 80131BB8 244F0008 */     addiu $t7, $v0, 8
  /* 12A57C 80131BBC AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 12A580 80131BC0 37FF001C */       ori $ra, $ra, (0xE200001C & 0xFFFF) # 3791650844
  /* 12A584 80131BC4 371841C8 */       ori $t8, $t8, (0x5041C8 & 0xFFFF) # 5259720
  /* 12A588 80131BC8 AC580004 */        sw $t8, 4($v0)
  /* 12A58C 80131BCC AC5F0000 */        sw $ra, ($v0)
  /* 12A590 80131BD0 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12A594 80131BD4 3C0F0033 */       lui $t7, (0x33C170 >> 16) # 3391856
  /* 12A598 80131BD8 3C0EF647 */       lui $t6, (0xF647C360 >> 16) # 4131898208
  /* 12A59C 80131BDC 24590008 */     addiu $t9, $v0, 8
  /* 12A5A0 80131BE0 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 12A5A4 80131BE4 35CEC360 */       ori $t6, $t6, (0xF647C360 & 0xFFFF) # 4131898208
  /* 12A5A8 80131BE8 35EFC170 */       ori $t7, $t7, (0x33C170 & 0xFFFF) # 3391856
  /* 12A5AC 80131BEC AC4F0004 */        sw $t7, 4($v0)
  /* 12A5B0 80131BF0 AC4E0000 */        sw $t6, ($v0)
  /* 12A5B4 80131BF4 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12A5B8 80131BF8 3C0E0055 */       lui $t6, (0x552078 >> 16) # 5578872
  /* 12A5BC 80131BFC 35CE2078 */       ori $t6, $t6, (0x552078 & 0xFFFF) # 5578872
  /* 12A5C0 80131C00 24580008 */     addiu $t8, $v0, 8
  /* 12A5C4 80131C04 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 12A5C8 80131C08 AC400004 */        sw $zero, 4($v0)
  /* 12A5CC 80131C0C AC4D0000 */        sw $t5, ($v0)
  /* 12A5D0 80131C10 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12A5D4 80131C14 24590008 */     addiu $t9, $v0, 8
  /* 12A5D8 80131C18 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 12A5DC 80131C1C AC5F0000 */        sw $ra, ($v0)
  /* 12A5E0 80131C20 0C0333AB */       jal func_ovl0_800CCEAC
  /* 12A5E4 80131C24 AC4E0004 */        sw $t6, 4($v0)
  /* 12A5E8 80131C28 0C0333C0 */       jal func_ovl0_800CCF00
  /* 12A5EC 80131C2C 8FA40018 */        lw $a0, 0x18($sp)
  /* 12A5F0 80131C30 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12A5F4 80131C34 27BD0018 */     addiu $sp, $sp, 0x18
  /* 12A5F8 80131C38 03E00008 */        jr $ra
  /* 12A5FC 80131C3C 00000000 */       nop 

glabel func_ovl23_80131C40
  /* 12A600 80131C40 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 12A604 80131C44 AFBF0024 */        sw $ra, 0x24($sp)
  /* 12A608 80131C48 AFB00020 */        sw $s0, 0x20($sp)
  /* 12A60C 80131C4C 00002025 */        or $a0, $zero, $zero
  /* 12A610 80131C50 00002825 */        or $a1, $zero, $zero
  /* 12A614 80131C54 24060002 */     addiu $a2, $zero, 2
  /* 12A618 80131C58 0C00265A */       jal omMakeGObjCommon
  /* 12A61C 80131C5C 3C078000 */       lui $a3, 0x8000
  /* 12A620 80131C60 3C058013 */       lui $a1, %hi(func_ovl23_80131B24)
  /* 12A624 80131C64 240EFFFF */     addiu $t6, $zero, -1
  /* 12A628 80131C68 00408025 */        or $s0, $v0, $zero
  /* 12A62C 80131C6C AFAE0010 */        sw $t6, 0x10($sp)
  /* 12A630 80131C70 24A51B24 */     addiu $a1, $a1, %lo(func_ovl23_80131B24)
  /* 12A634 80131C74 00402025 */        or $a0, $v0, $zero
  /* 12A638 80131C78 00003025 */        or $a2, $zero, $zero
  /* 12A63C 80131C7C 0C00277D */       jal func_80009DF4
  /* 12A640 80131C80 3C078000 */       lui $a3, 0x8000
  /* 12A644 80131C84 3C0F8013 */       lui $t7, %hi(D_ovl23_801327F8)
  /* 12A648 80131C88 8DEF27F8 */        lw $t7, %lo(D_ovl23_801327F8)($t7)
  /* 12A64C 80131C8C 3C180000 */       lui $t8, %hi(D_NF_00000DB0)
  /* 12A650 80131C90 27180DB0 */     addiu $t8, $t8, %lo(D_NF_00000DB0)
  /* 12A654 80131C94 02002025 */        or $a0, $s0, $zero
  /* 12A658 80131C98 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12A65C 80131C9C 01F82821 */      addu $a1, $t7, $t8
  /* 12A660 80131CA0 94590024 */       lhu $t9, 0x24($v0)
  /* 12A664 80131CA4 3C01430B */       lui $at, (0x430B0000 >> 16) # 139.0
  /* 12A668 80131CA8 44812000 */      mtc1 $at, $f4 # 139.0 to cop1
  /* 12A66C 80131CAC 3C0141B0 */       lui $at, (0x41B00000 >> 16) # 22.0
  /* 12A670 80131CB0 44813000 */      mtc1 $at, $f6 # 22.0 to cop1
  /* 12A674 80131CB4 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 12A678 80131CB8 A4490024 */        sh $t1, 0x24($v0)
  /* 12A67C 80131CBC 352A0001 */       ori $t2, $t1, 1
  /* 12A680 80131CC0 A44A0024 */        sh $t2, 0x24($v0)
  /* 12A684 80131CC4 3C0B8013 */       lui $t3, %hi(D_ovl23_801327F8)
  /* 12A688 80131CC8 E4440058 */      swc1 $f4, 0x58($v0)
  /* 12A68C 80131CCC E446005C */      swc1 $f6, 0x5c($v0)
  /* 12A690 80131CD0 8D6B27F8 */        lw $t3, %lo(D_ovl23_801327F8)($t3)
  /* 12A694 80131CD4 3C0C0000 */       lui $t4, %hi(D_NF_00000968)
  /* 12A698 80131CD8 258C0968 */     addiu $t4, $t4, %lo(D_NF_00000968)
  /* 12A69C 80131CDC 02002025 */        or $a0, $s0, $zero
  /* 12A6A0 80131CE0 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12A6A4 80131CE4 016C2821 */      addu $a1, $t3, $t4
  /* 12A6A8 80131CE8 944D0024 */       lhu $t5, 0x24($v0)
  /* 12A6AC 80131CEC 3C0142C8 */       lui $at, (0x42C80000 >> 16) # 100.0
  /* 12A6B0 80131CF0 44814000 */      mtc1 $at, $f8 # 100.0 to cop1
  /* 12A6B4 80131CF4 3C01427C */       lui $at, (0x427C0000 >> 16) # 63.0
  /* 12A6B8 80131CF8 44815000 */      mtc1 $at, $f10 # 63.0 to cop1
  /* 12A6BC 80131CFC 31AFFFDF */      andi $t7, $t5, 0xffdf
  /* 12A6C0 80131D00 A44F0024 */        sh $t7, 0x24($v0)
  /* 12A6C4 80131D04 35F80001 */       ori $t8, $t7, 1
  /* 12A6C8 80131D08 241900D5 */     addiu $t9, $zero, 0xd5
  /* 12A6CC 80131D0C 24080027 */     addiu $t0, $zero, 0x27
  /* 12A6D0 80131D10 A4580024 */        sh $t8, 0x24($v0)
  /* 12A6D4 80131D14 A0590028 */        sb $t9, 0x28($v0)
  /* 12A6D8 80131D18 A0400029 */        sb $zero, 0x29($v0)
  /* 12A6DC 80131D1C A048002A */        sb $t0, 0x2a($v0)
  /* 12A6E0 80131D20 3C098013 */       lui $t1, %hi(D_ovl23_801327F8)
  /* 12A6E4 80131D24 E4480058 */      swc1 $f8, 0x58($v0)
  /* 12A6E8 80131D28 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 12A6EC 80131D2C 8D2927F8 */        lw $t1, %lo(D_ovl23_801327F8)($t1)
  /* 12A6F0 80131D30 3C0A0000 */       lui $t2, %hi(D_NF_000001F8)
  /* 12A6F4 80131D34 254A01F8 */     addiu $t2, $t2, %lo(D_NF_000001F8)
  /* 12A6F8 80131D38 02002025 */        or $a0, $s0, $zero
  /* 12A6FC 80131D3C 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12A700 80131D40 012A2821 */      addu $a1, $t1, $t2
  /* 12A704 80131D44 944B0024 */       lhu $t3, 0x24($v0)
  /* 12A708 80131D48 3C01425C */       lui $at, (0x425C0000 >> 16) # 55.0
  /* 12A70C 80131D4C 44818000 */      mtc1 $at, $f16 # 55.0 to cop1
  /* 12A710 80131D50 3C0142FE */       lui $at, (0x42FE0000 >> 16) # 127.0
  /* 12A714 80131D54 44819000 */      mtc1 $at, $f18 # 127.0 to cop1
  /* 12A718 80131D58 316DFFDF */      andi $t5, $t3, 0xffdf
  /* 12A71C 80131D5C A44D0024 */        sh $t5, 0x24($v0)
  /* 12A720 80131D60 35AE0001 */       ori $t6, $t5, 1
  /* 12A724 80131D64 240F00FF */     addiu $t7, $zero, 0xff
  /* 12A728 80131D68 241800A8 */     addiu $t8, $zero, 0xa8
  /* 12A72C 80131D6C A44E0024 */        sh $t6, 0x24($v0)
  /* 12A730 80131D70 A04F0028 */        sb $t7, 0x28($v0)
  /* 12A734 80131D74 A0580029 */        sb $t8, 0x29($v0)
  /* 12A738 80131D78 A040002A */        sb $zero, 0x2a($v0)
  /* 12A73C 80131D7C 3C198013 */       lui $t9, %hi(D_ovl23_801327F8)
  /* 12A740 80131D80 E4500058 */      swc1 $f16, 0x58($v0)
  /* 12A744 80131D84 E452005C */      swc1 $f18, 0x5c($v0)
  /* 12A748 80131D88 8F3927F8 */        lw $t9, %lo(D_ovl23_801327F8)($t9)
  /* 12A74C 80131D8C 3C080000 */       lui $t0, %hi(D_NF_00000488)
  /* 12A750 80131D90 25080488 */     addiu $t0, $t0, %lo(D_NF_00000488)
  /* 12A754 80131D94 02002025 */        or $a0, $s0, $zero
  /* 12A758 80131D98 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12A75C 80131D9C 03282821 */      addu $a1, $t9, $t0
  /* 12A760 80131DA0 94490024 */       lhu $t1, 0x24($v0)
  /* 12A764 80131DA4 3C01425C */       lui $at, (0x425C0000 >> 16) # 55.0
  /* 12A768 80131DA8 44812000 */      mtc1 $at, $f4 # 55.0 to cop1
  /* 12A76C 80131DAC 3C014315 */       lui $at, (0x43150000 >> 16) # 149.0
  /* 12A770 80131DB0 44813000 */      mtc1 $at, $f6 # 149.0 to cop1
  /* 12A774 80131DB4 312BFFDF */      andi $t3, $t1, 0xffdf
  /* 12A778 80131DB8 A44B0024 */        sh $t3, 0x24($v0)
  /* 12A77C 80131DBC 356C0001 */       ori $t4, $t3, 1
  /* 12A780 80131DC0 240D00FF */     addiu $t5, $zero, 0xff
  /* 12A784 80131DC4 240E00A8 */     addiu $t6, $zero, 0xa8
  /* 12A788 80131DC8 A44C0024 */        sh $t4, 0x24($v0)
  /* 12A78C 80131DCC A04D0028 */        sb $t5, 0x28($v0)
  /* 12A790 80131DD0 A04E0029 */        sb $t6, 0x29($v0)
  /* 12A794 80131DD4 A040002A */        sb $zero, 0x2a($v0)
  /* 12A798 80131DD8 E4440058 */      swc1 $f4, 0x58($v0)
  /* 12A79C 80131DDC E446005C */      swc1 $f6, 0x5c($v0)
  /* 12A7A0 80131DE0 8FBF0024 */        lw $ra, 0x24($sp)
  /* 12A7A4 80131DE4 8FB00020 */        lw $s0, 0x20($sp)
  /* 12A7A8 80131DE8 27BD0028 */     addiu $sp, $sp, 0x28
  /* 12A7AC 80131DEC 03E00008 */        jr $ra
  /* 12A7B0 80131DF0 00000000 */       nop 

glabel func_ovl23_80131DF4
  /* 12A7B4 80131DF4 8C820074 */        lw $v0, 0x74($a0)
  /* 12A7B8 80131DF8 3C018013 */       lui $at, %hi(D_ovl23_80132460)
  /* 12A7BC 80131DFC C4222460 */      lwc1 $f2, %lo(D_ovl23_80132460)($at)
  /* 12A7C0 80131E00 3C018013 */       lui $at, %hi(D_ovl23_80132464)
  /* 12A7C4 80131E04 C4262464 */      lwc1 $f6, %lo(D_ovl23_80132464)($at)
  /* 12A7C8 80131E08 C4440034 */      lwc1 $f4, 0x34($v0)
  /* 12A7CC 80131E0C 46062200 */     add.s $f8, $f4, $f6
  /* 12A7D0 80131E10 E4480034 */      swc1 $f8, 0x34($v0)
  /* 12A7D4 80131E14 8C820074 */        lw $v0, 0x74($a0)
  /* 12A7D8 80131E18 C4400034 */      lwc1 $f0, 0x34($v0)
  /* 12A7DC 80131E1C 4600103C */    c.lt.s $f2, $f0
  /* 12A7E0 80131E20 00000000 */       nop 
  /* 12A7E4 80131E24 45000003 */      bc1f .L80131E34
  /* 12A7E8 80131E28 00000000 */       nop 
  /* 12A7EC 80131E2C 46020281 */     sub.s $f10, $f0, $f2
  /* 12A7F0 80131E30 E44A0034 */      swc1 $f10, 0x34($v0)
  .L80131E34:
  /* 12A7F4 80131E34 03E00008 */        jr $ra
  /* 12A7F8 80131E38 00000000 */       nop 

glabel func_ovl23_80131E3C
  /* 12A7FC 80131E3C 27BDFF98 */     addiu $sp, $sp, -0x68
  /* 12A800 80131E40 AFB00018 */        sw $s0, 0x18($sp)
  /* 12A804 80131E44 3C0E8011 */       lui $t6, %hi(D_ovl2_80116DD0)
  /* 12A808 80131E48 27B00024 */     addiu $s0, $sp, 0x24
  /* 12A80C 80131E4C 25CE6DD0 */     addiu $t6, $t6, %lo(D_ovl2_80116DD0)
  /* 12A810 80131E50 AFBF001C */        sw $ra, 0x1c($sp)
  /* 12A814 80131E54 25C8003C */     addiu $t0, $t6, 0x3c
  /* 12A818 80131E58 0200C825 */        or $t9, $s0, $zero
  .L80131E5C:
  /* 12A81C 80131E5C 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 12A820 80131E60 25CE000C */     addiu $t6, $t6, 0xc
  /* 12A824 80131E64 2739000C */     addiu $t9, $t9, 0xc
  /* 12A828 80131E68 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 12A82C 80131E6C 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl2_80116DD0 + -8
  /* 12A830 80131E70 AF2FFFF8 */        sw $t7, -8($t9)
  /* 12A834 80131E74 8DD8FFFC */        lw $t8, -4($t6) # D_ovl2_80116DD0 + -4
  /* 12A838 80131E78 15C8FFF8 */       bne $t6, $t0, .L80131E5C
  /* 12A83C 80131E7C AF38FFFC */        sw $t8, -4($t9)
  /* 12A840 80131E80 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 12A844 80131E84 00002825 */        or $a1, $zero, $zero
  /* 12A848 80131E88 AF380000 */        sw $t8, ($t9)
  /* 12A84C 80131E8C AFA40024 */        sw $a0, 0x24($sp)
  /* 12A850 80131E90 0C03B03B */       jal func_ovl2_800EC0EC
  /* 12A854 80131E94 AFA40068 */        sw $a0, 0x68($sp)
  /* 12A858 80131E98 3C098013 */       lui $t1, %hi(D_ovl23_8013248C)
  /* 12A85C 80131E9C 8D29248C */        lw $t1, %lo(D_ovl23_8013248C)($t1)
  /* 12A860 80131EA0 A3A2003B */        sb $v0, 0x3b($sp)
  /* 12A864 80131EA4 A3A00039 */        sb $zero, 0x39($sp)
  /* 12A868 80131EA8 02002025 */        or $a0, $s0, $zero
  /* 12A86C 80131EAC 0C035FCF */       jal ftManager_CreateFighter
  /* 12A870 80131EB0 AFA9005C */        sw $t1, 0x5c($sp)
  /* 12A874 80131EB4 3C058013 */       lui $a1, %hi(func_ovl23_80131DF4)
  /* 12A878 80131EB8 00408025 */        or $s0, $v0, $zero
  /* 12A87C 80131EBC 24A51DF4 */     addiu $a1, $a1, %lo(func_ovl23_80131DF4)
  /* 12A880 80131EC0 00402025 */        or $a0, $v0, $zero
  /* 12A884 80131EC4 24060001 */     addiu $a2, $zero, 1
  /* 12A888 80131EC8 0C002062 */       jal omAddGObjCommonProc
  /* 12A88C 80131ECC 24070001 */     addiu $a3, $zero, 1
  /* 12A890 80131ED0 3C018013 */       lui $at, %hi(D_ovl23_80132468)
  /* 12A894 80131ED4 C4242468 */      lwc1 $f4, %lo(D_ovl23_80132468)($at)
  /* 12A898 80131ED8 8E0A0074 */        lw $t2, 0x74($s0)
  /* 12A89C 80131EDC 3C018013 */       lui $at, %hi(D_ovl23_8013246C)
  /* 12A8A0 80131EE0 44804000 */      mtc1 $zero, $f8
  /* 12A8A4 80131EE4 E544001C */      swc1 $f4, 0x1c($t2)
  /* 12A8A8 80131EE8 8E0B0074 */        lw $t3, 0x74($s0)
  /* 12A8AC 80131EEC C426246C */      lwc1 $f6, %lo(D_ovl23_8013246C)($at)
  /* 12A8B0 80131EF0 3C0E8039 */       lui $t6, %hi(D_ovl1_80390D90)
  /* 12A8B4 80131EF4 25CE0D90 */     addiu $t6, $t6, %lo(D_ovl1_80390D90)
  /* 12A8B8 80131EF8 E5660020 */      swc1 $f6, 0x20($t3)
  /* 12A8BC 80131EFC 8E0C0074 */        lw $t4, 0x74($s0)
  /* 12A8C0 80131F00 02002025 */        or $a0, $s0, $zero
  /* 12A8C4 80131F04 24050050 */     addiu $a1, $zero, 0x50
  /* 12A8C8 80131F08 E5880024 */      swc1 $f8, 0x24($t4)
  /* 12A8CC 80131F0C 8FAD0068 */        lw $t5, 0x68($sp)
  /* 12A8D0 80131F10 8E190074 */        lw $t9, 0x74($s0)
  /* 12A8D4 80131F14 00003025 */        or $a2, $zero, $zero
  /* 12A8D8 80131F18 000D4080 */       sll $t0, $t5, 2
  /* 12A8DC 80131F1C 010E1821 */      addu $v1, $t0, $t6
  /* 12A8E0 80131F20 C46A0000 */      lwc1 $f10, ($v1)
  /* 12A8E4 80131F24 E72A0040 */      swc1 $f10, 0x40($t9)
  /* 12A8E8 80131F28 8E0F0074 */        lw $t7, 0x74($s0)
  /* 12A8EC 80131F2C C4700000 */      lwc1 $f16, ($v1)
  /* 12A8F0 80131F30 E5F00044 */      swc1 $f16, 0x44($t7)
  /* 12A8F4 80131F34 8E180074 */        lw $t8, 0x74($s0)
  /* 12A8F8 80131F38 C4720000 */      lwc1 $f18, ($v1)
  /* 12A8FC 80131F3C 0C03A605 */       jal ftColor_CheckSetColAnimIndex
  /* 12A900 80131F40 E7120048 */      swc1 $f18, 0x48($t8)
  /* 12A904 80131F44 8FBF001C */        lw $ra, 0x1c($sp)
  /* 12A908 80131F48 8FB00018 */        lw $s0, 0x18($sp)
  /* 12A90C 80131F4C 27BD0068 */     addiu $sp, $sp, 0x68
  /* 12A910 80131F50 03E00008 */        jr $ra
  /* 12A914 80131F54 00000000 */       nop 

glabel func_ovl23_80131F58
  /* 12A918 80131F58 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 12A91C 80131F5C 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 12A920 80131F60 3C190004 */       lui $t9, (0x48600 >> 16) # 296448
  /* 12A924 80131F64 AFBF003C */        sw $ra, 0x3c($sp)
  /* 12A928 80131F68 37398600 */       ori $t9, $t9, (0x48600 & 0xFFFF) # 296448
  /* 12A92C 80131F6C 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 12A930 80131F70 240F0028 */     addiu $t7, $zero, 0x28
  /* 12A934 80131F74 24180000 */     addiu $t8, $zero, 0
  /* 12A938 80131F78 2408FFFF */     addiu $t0, $zero, -1
  /* 12A93C 80131F7C 24090001 */     addiu $t1, $zero, 1
  /* 12A940 80131F80 240A0001 */     addiu $t2, $zero, 1
  /* 12A944 80131F84 240B0001 */     addiu $t3, $zero, 1
  /* 12A948 80131F88 AFAB0030 */        sw $t3, 0x30($sp)
  /* 12A94C 80131F8C AFAA0028 */        sw $t2, 0x28($sp)
  /* 12A950 80131F90 AFA90024 */        sw $t1, 0x24($sp)
  /* 12A954 80131F94 AFA80020 */        sw $t0, 0x20($sp)
  /* 12A958 80131F98 AFB80018 */        sw $t8, 0x18($sp)
  /* 12A95C 80131F9C AFAF0014 */        sw $t7, 0x14($sp)
  /* 12A960 80131FA0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 12A964 80131FA4 AFB9001C */        sw $t9, 0x1c($sp)
  /* 12A968 80131FA8 AFA0002C */        sw $zero, 0x2c($sp)
  /* 12A96C 80131FAC AFA00034 */        sw $zero, 0x34($sp)
  /* 12A970 80131FB0 24040001 */     addiu $a0, $zero, 1
  /* 12A974 80131FB4 00002825 */        or $a1, $zero, $zero
  /* 12A978 80131FB8 24060001 */     addiu $a2, $zero, 1
  /* 12A97C 80131FBC 0C002E4F */       jal func_8000B93C
  /* 12A980 80131FC0 3C078000 */       lui $a3, 0x8000
  /* 12A984 80131FC4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 12A988 80131FC8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 12A98C 80131FCC 8C430074 */        lw $v1, 0x74($v0)
  /* 12A990 80131FD0 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 12A994 80131FD4 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 12A998 80131FD8 44050000 */      mfc1 $a1, $f0
  /* 12A99C 80131FDC 44060000 */      mfc1 $a2, $f0
  /* 12A9A0 80131FE0 3C07439B */       lui $a3, 0x439b
  /* 12A9A4 80131FE4 24640008 */     addiu $a0, $v1, 8
  /* 12A9A8 80131FE8 AFA30044 */        sw $v1, 0x44($sp)
  /* 12A9AC 80131FEC 0C001C20 */       jal func_80007080
  /* 12A9B0 80131FF0 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 12A9B4 80131FF4 8FA30044 */        lw $v1, 0x44($sp)
  /* 12A9B8 80131FF8 44800000 */      mtc1 $zero, $f0
  /* 12A9BC 80131FFC 3C018013 */       lui $at, %hi(D_ovl23_80132470)
  /* 12A9C0 80132000 E460003C */      swc1 $f0, 0x3c($v1)
  /* 12A9C4 80132004 E4600040 */      swc1 $f0, 0x40($v1)
  /* 12A9C8 80132008 C4262470 */      lwc1 $f6, %lo(D_ovl23_80132470)($at)
  /* 12A9CC 8013200C 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 12A9D0 80132010 44814000 */      mtc1 $at, $f8 # 1.0 to cop1
  /* 12A9D4 80132014 E4600048 */      swc1 $f0, 0x48($v1)
  /* 12A9D8 80132018 E460004C */      swc1 $f0, 0x4c($v1)
  /* 12A9DC 8013201C E4600050 */      swc1 $f0, 0x50($v1)
  /* 12A9E0 80132020 E4600054 */      swc1 $f0, 0x54($v1)
  /* 12A9E4 80132024 E460005C */      swc1 $f0, 0x5c($v1)
  /* 12A9E8 80132028 E4660044 */      swc1 $f6, 0x44($v1)
  /* 12A9EC 8013202C E4680058 */      swc1 $f8, 0x58($v1)
  /* 12A9F0 80132030 8FBF003C */        lw $ra, 0x3c($sp)
  /* 12A9F4 80132034 27BD0048 */     addiu $sp, $sp, 0x48
  /* 12A9F8 80132038 03E00008 */        jr $ra
  /* 12A9FC 8013203C 00000000 */       nop 

glabel func_ovl23_80132040
  /* 12AA00 80132040 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 12AA04 80132044 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 12AA08 80132048 AFBF003C */        sw $ra, 0x3c($sp)
  /* 12AA0C 8013204C 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 12AA10 80132050 240F0046 */     addiu $t7, $zero, 0x46
  /* 12AA14 80132054 24180000 */     addiu $t8, $zero, 0
  /* 12AA18 80132058 24190001 */     addiu $t9, $zero, 1
  /* 12AA1C 8013205C 2408FFFF */     addiu $t0, $zero, -1
  /* 12AA20 80132060 24090001 */     addiu $t1, $zero, 1
  /* 12AA24 80132064 240A0001 */     addiu $t2, $zero, 1
  /* 12AA28 80132068 AFAA0030 */        sw $t2, 0x30($sp)
  /* 12AA2C 8013206C AFA90028 */        sw $t1, 0x28($sp)
  /* 12AA30 80132070 AFA80020 */        sw $t0, 0x20($sp)
  /* 12AA34 80132074 AFB9001C */        sw $t9, 0x1c($sp)
  /* 12AA38 80132078 AFB80018 */        sw $t8, 0x18($sp)
  /* 12AA3C 8013207C AFAF0014 */        sw $t7, 0x14($sp)
  /* 12AA40 80132080 AFAE0010 */        sw $t6, 0x10($sp)
  /* 12AA44 80132084 AFA00024 */        sw $zero, 0x24($sp)
  /* 12AA48 80132088 AFA0002C */        sw $zero, 0x2c($sp)
  /* 12AA4C 8013208C AFA00034 */        sw $zero, 0x34($sp)
  /* 12AA50 80132090 24040001 */     addiu $a0, $zero, 1
  /* 12AA54 80132094 00002825 */        or $a1, $zero, $zero
  /* 12AA58 80132098 24060001 */     addiu $a2, $zero, 1
  /* 12AA5C 8013209C 0C002E4F */       jal func_8000B93C
  /* 12AA60 801320A0 3C078000 */       lui $a3, 0x8000
  /* 12AA64 801320A4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 12AA68 801320A8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 12AA6C 801320AC 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 12AA70 801320B0 8C430074 */        lw $v1, 0x74($v0)
  /* 12AA74 801320B4 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 12AA78 801320B8 44050000 */      mfc1 $a1, $f0
  /* 12AA7C 801320BC 44060000 */      mfc1 $a2, $f0
  /* 12AA80 801320C0 3C07439B */       lui $a3, 0x439b
  /* 12AA84 801320C4 24640008 */     addiu $a0, $v1, 8
  /* 12AA88 801320C8 0C001C20 */       jal func_80007080
  /* 12AA8C 801320CC E7A40010 */      swc1 $f4, 0x10($sp)
  /* 12AA90 801320D0 8FBF003C */        lw $ra, 0x3c($sp)
  /* 12AA94 801320D4 27BD0040 */     addiu $sp, $sp, 0x40
  /* 12AA98 801320D8 03E00008 */        jr $ra
  /* 12AA9C 801320DC 00000000 */       nop 

glabel func_ovl23_801320E0
  /* 12AAA0 801320E0 3C0E800A */       lui $t6, %hi((gSceneData + 0x9))
  /* 12AAA4 801320E4 91CE4AD9 */       lbu $t6, %lo((gSceneData + 0x9))($t6)
  /* 12AAA8 801320E8 44802000 */      mtc1 $zero, $f4
  /* 12AAAC 801320EC 3C018013 */       lui $at, %hi(D_ovl23_80132488)
  /* 12AAB0 801320F0 AC2E2488 */        sw $t6, %lo(D_ovl23_80132488)($at)
  /* 12AAB4 801320F4 3C018013 */       lui $at, %hi(D_ovl23_80132490)
  /* 12AAB8 801320F8 E4242490 */      swc1 $f4, %lo(D_ovl23_80132490)($at)
  /* 12AABC 801320FC 3C018013 */       lui $at, %hi(D_ovl23_80132494)
  /* 12AAC0 80132100 AC202494 */        sw $zero, %lo(D_ovl23_80132494)($at)
  /* 12AAC4 80132104 3C018013 */       lui $at, %hi(D_ovl23_80132498)
  /* 12AAC8 80132108 03E00008 */        jr $ra
  /* 12AACC 8013210C AC202498 */        sw $zero, %lo(D_ovl23_80132498)($at)

glabel func_ovl23_80132110
  /* 12AAD0 80132110 03E00008 */        jr $ra
  /* 12AAD4 80132114 00000000 */       nop 

glabel func_ovl23_80132118
  /* 12AAD8 80132118 3C028013 */       lui $v0, %hi(D_ovl23_80132498)
  /* 12AADC 8013211C 24422498 */     addiu $v0, $v0, %lo(D_ovl23_80132498)
  /* 12AAE0 80132120 8C4E0000 */        lw $t6, ($v0) # D_ovl23_80132498 + 0
  /* 12AAE4 80132124 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 12AAE8 80132128 AFBF0014 */        sw $ra, 0x14($sp)
  /* 12AAEC 8013212C 25CF0001 */     addiu $t7, $t6, 1
  /* 12AAF0 80132130 29E10078 */      slti $at, $t7, 0x78
  /* 12AAF4 80132134 AFA40018 */        sw $a0, 0x18($sp)
  /* 12AAF8 80132138 1420001D */      bnez $at, .L801321B0
  /* 12AAFC 8013213C AC4F0000 */        sw $t7, ($v0) # D_ovl23_80132498 + 0
  /* 12AB00 80132140 3C038013 */       lui $v1, %hi(D_ovl23_80132494)
  /* 12AB04 80132144 24632494 */     addiu $v1, $v1, %lo(D_ovl23_80132494)
  /* 12AB08 80132148 8C620000 */        lw $v0, ($v1) # D_ovl23_80132494 + 0
  /* 12AB0C 8013214C 2404FFE2 */     addiu $a0, $zero, -0x1e
  /* 12AB10 80132150 10400002 */      beqz $v0, .L8013215C
  /* 12AB14 80132154 2459FFFF */     addiu $t9, $v0, -1
  /* 12AB18 80132158 AC790000 */        sw $t9, ($v1) # D_ovl23_80132494 + 0
  .L8013215C:
  /* 12AB1C 8013215C 0C0E4281 */       jal func_ovl1_80390A04
  /* 12AB20 80132160 2405001E */     addiu $a1, $zero, 0x1e
  /* 12AB24 80132164 10400006 */      beqz $v0, .L80132180
  /* 12AB28 80132168 2404FFE2 */     addiu $a0, $zero, -0x1e
  /* 12AB2C 8013216C 0C0E42B0 */       jal func_ovl1_80390AC0
  /* 12AB30 80132170 2405001E */     addiu $a1, $zero, 0x1e
  /* 12AB34 80132174 10400002 */      beqz $v0, .L80132180
  /* 12AB38 80132178 3C018013 */       lui $at, %hi(D_ovl23_80132494)
  /* 12AB3C 8013217C AC202494 */        sw $zero, %lo(D_ovl23_80132494)($at)
  .L80132180:
  /* 12AB40 80132180 0C0E41DB */       jal func_ovl1_8039076C
  /* 12AB44 80132184 3404D000 */       ori $a0, $zero, 0xd000
  /* 12AB48 80132188 10400009 */      beqz $v0, .L801321B0
  /* 12AB4C 8013218C 24090001 */     addiu $t1, $zero, 1
  /* 12AB50 80132190 3C02800A */       lui $v0, %hi(gSceneData)
  /* 12AB54 80132194 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 12AB58 80132198 90480000 */       lbu $t0, ($v0) # gSceneData + 0
  /* 12AB5C 8013219C A0490000 */        sb $t1, ($v0) # gSceneData + 0
  /* 12AB60 801321A0 0C04C844 */       jal func_ovl23_80132110
  /* 12AB64 801321A4 A0480001 */        sb $t0, 1($v0) # gSceneData + 1
  /* 12AB68 801321A8 0C00171D */       jal func_80005C74
  /* 12AB6C 801321AC 00000000 */       nop 
  .L801321B0:
  /* 12AB70 801321B0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12AB74 801321B4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 12AB78 801321B8 03E00008 */        jr $ra
  /* 12AB7C 801321BC 00000000 */       nop 

glabel func_ovl23_801321C0
  /* 12AB80 801321C0 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 12AB84 801321C4 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 12AB88 801321C8 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 12AB8C 801321CC 3C188013 */       lui $t8, %hi(D_ovl23_801324D8)
  /* 12AB90 801321D0 3C088013 */       lui $t0, %hi(D_ovl23_801324A0)
  /* 12AB94 801321D4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 12AB98 801321D8 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 12AB9C 801321DC 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 12ABA0 801321E0 271824D8 */     addiu $t8, $t8, %lo(D_ovl23_801324D8)
  /* 12ABA4 801321E4 24190064 */     addiu $t9, $zero, 0x64
  /* 12ABA8 801321E8 250824A0 */     addiu $t0, $t0, %lo(D_ovl23_801324A0)
  /* 12ABAC 801321EC 24090007 */     addiu $t1, $zero, 7
  /* 12ABB0 801321F0 AFAE0030 */        sw $t6, 0x30($sp)
  /* 12ABB4 801321F4 AFAF0034 */        sw $t7, 0x34($sp)
  /* 12ABB8 801321F8 AFA00038 */        sw $zero, 0x38($sp)
  /* 12ABBC 801321FC AFA0003C */        sw $zero, 0x3c($sp)
  /* 12ABC0 80132200 AFB80040 */        sw $t8, 0x40($sp)
  /* 12ABC4 80132204 AFB90044 */        sw $t9, 0x44($sp)
  /* 12ABC8 80132208 AFA80048 */        sw $t0, 0x48($sp)
  /* 12ABCC 8013220C AFA9004C */        sw $t1, 0x4c($sp)
  /* 12ABD0 80132210 0C0337DE */       jal rldm_initialize
  /* 12ABD4 80132214 27A40030 */     addiu $a0, $sp, 0x30
  /* 12ABD8 80132218 3C048013 */       lui $a0, %hi(D_ovl23_80132370)
  /* 12ABDC 8013221C 24842370 */     addiu $a0, $a0, %lo(D_ovl23_80132370)
  /* 12ABE0 80132220 0C0337BB */       jal rldm_bytes_need_to_load
  /* 12ABE4 80132224 24050001 */     addiu $a1, $zero, 1
  /* 12ABE8 80132228 00402025 */        or $a0, $v0, $zero
  /* 12ABEC 8013222C 0C001260 */       jal hal_alloc
  /* 12ABF0 80132230 24050010 */     addiu $a1, $zero, 0x10
  /* 12ABF4 80132234 3C048013 */       lui $a0, %hi(D_ovl23_80132370)
  /* 12ABF8 80132238 3C068013 */       lui $a2, %hi(D_ovl23_801327F8)
  /* 12ABFC 8013223C 24C627F8 */     addiu $a2, $a2, %lo(D_ovl23_801327F8)
  /* 12AC00 80132240 24842370 */     addiu $a0, $a0, %lo(D_ovl23_80132370)
  /* 12AC04 80132244 24050001 */     addiu $a1, $zero, 1
  /* 12AC08 80132248 0C033781 */       jal rldm_load_files_into
  /* 12AC0C 8013224C 00403825 */        or $a3, $v0, $zero
  /* 12AC10 80132250 3C058013 */       lui $a1, %hi(func_ovl23_80132118)
  /* 12AC14 80132254 24A52118 */     addiu $a1, $a1, %lo(func_ovl23_80132118)
  /* 12AC18 80132258 00002025 */        or $a0, $zero, $zero
  /* 12AC1C 8013225C 00003025 */        or $a2, $zero, $zero
  /* 12AC20 80132260 0C00265A */       jal omMakeGObjCommon
  /* 12AC24 80132264 3C078000 */       lui $a3, 0x8000
  /* 12AC28 80132268 240A00FF */     addiu $t2, $zero, 0xff
  /* 12AC2C 8013226C AFAA0010 */        sw $t2, 0x10($sp)
  /* 12AC30 80132270 00002025 */        or $a0, $zero, $zero
  /* 12AC34 80132274 3C058000 */       lui $a1, 0x8000
  /* 12AC38 80132278 24060064 */     addiu $a2, $zero, 0x64
  /* 12AC3C 8013227C 0C002E7F */       jal func_8000B9FC
  /* 12AC40 80132280 24070003 */     addiu $a3, $zero, 3
  /* 12AC44 80132284 0C04C838 */       jal func_ovl23_801320E0
  /* 12AC48 80132288 00000000 */       nop 
  /* 12AC4C 8013228C 0C045624 */       jal func_ovl2_80115890
  /* 12AC50 80132290 00000000 */       nop 
  /* 12AC54 80132294 0C03F4C0 */       jal efManager_AllocUserData
  /* 12AC58 80132298 00000000 */       nop 
  /* 12AC5C 8013229C 24040001 */     addiu $a0, $zero, 1
  /* 12AC60 801322A0 0C035C65 */       jal func_ovl2_800D7194
  /* 12AC64 801322A4 24050001 */     addiu $a1, $zero, 1
  /* 12AC68 801322A8 3C048013 */       lui $a0, %hi(D_ovl23_80132488)
  /* 12AC6C 801322AC 0C035E1B */       jal func_ovl2_800D786C
  /* 12AC70 801322B0 8C842488 */        lw $a0, %lo(D_ovl23_80132488)($a0)
  /* 12AC74 801322B4 3C048013 */       lui $a0, %hi(D_ovl2_80130D9C)
  /* 12AC78 801322B8 8C840D9C */        lw $a0, %lo(D_ovl2_80130D9C)($a0)
  /* 12AC7C 801322BC 0C001260 */       jal hal_alloc
  /* 12AC80 801322C0 24050010 */     addiu $a1, $zero, 0x10
  /* 12AC84 801322C4 3C018013 */       lui $at, %hi(D_ovl23_8013248C)
  /* 12AC88 801322C8 0C04C810 */       jal func_ovl23_80132040
  /* 12AC8C 801322CC AC22248C */        sw $v0, %lo(D_ovl23_8013248C)($at)
  /* 12AC90 801322D0 0C04C7D6 */       jal func_ovl23_80131F58
  /* 12AC94 801322D4 00000000 */       nop 
  /* 12AC98 801322D8 0C04C710 */       jal func_ovl23_80131C40
  /* 12AC9C 801322DC 00000000 */       nop 
  /* 12ACA0 801322E0 3C048013 */       lui $a0, %hi(D_ovl23_80132488)
  /* 12ACA4 801322E4 0C04C78F */       jal func_ovl23_80131E3C
  /* 12ACA8 801322E8 8C842488 */        lw $a0, %lo(D_ovl23_80132488)($a0)
  /* 12ACAC 801322EC 00002025 */        or $a0, $zero, $zero
  /* 12ACB0 801322F0 0C0082AD */       jal func_80020AB4
  /* 12ACB4 801322F4 24050029 */     addiu $a1, $zero, 0x29
  /* 12ACB8 801322F8 0C009A70 */       jal func_800269C0
  /* 12ACBC 801322FC 2404000C */     addiu $a0, $zero, 0xc
  /* 12ACC0 80132300 8FBF001C */        lw $ra, 0x1c($sp)
  /* 12ACC4 80132304 27BD0050 */     addiu $sp, $sp, 0x50
  /* 12ACC8 80132308 03E00008 */        jr $ra
  /* 12ACCC 8013230C 00000000 */       nop 

glabel overlay_set13_entry
  /* 12ACD0 80132310 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 12ACD4 80132314 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 12ACD8 80132318 3C048013 */       lui $a0, %hi(D_ovl23_801323B8)
  /* 12ACDC 8013231C 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 12ACE0 80132320 248423B8 */     addiu $a0, $a0, %lo(D_ovl23_801323B8)
  /* 12ACE4 80132324 AFBF0014 */        sw $ra, 0x14($sp)
  /* 12ACE8 80132328 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 12ACEC 8013232C 0C001C09 */       jal func_80007024
  /* 12ACF0 80132330 AC8F000C */        sw $t7, 0xc($a0) # D_ovl23_801323B8 + 12
  /* 12ACF4 80132334 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 12ACF8 80132338 3C198013 */       lui $t9, %hi(D_NF_80132800)
  /* 12ACFC 8013233C 3C048013 */       lui $a0, %hi(D_ovl23_801323D4)
  /* 12AD00 80132340 27392800 */     addiu $t9, $t9, %lo(D_NF_80132800)
  /* 12AD04 80132344 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 12AD08 80132348 248423D4 */     addiu $a0, $a0, %lo(D_ovl23_801323D4)
  /* 12AD0C 8013234C 03194023 */      subu $t0, $t8, $t9
  /* 12AD10 80132350 0C001A0F */       jal func_8000683C
  /* 12AD14 80132354 AC880010 */        sw $t0, 0x10($a0) # D_ovl23_801323D4 + 16
  /* 12AD18 80132358 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12AD1C 8013235C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 12AD20 80132360 03E00008 */        jr $ra
  /* 12AD24 80132364 00000000 */       nop 

  /* 12AD28 80132368 00000000 */       nop 
  /* 12AD2C 8013236C 00000000 */       nop 

# Likely start of new file
#glabel D_ovl23_80132370   # Routine parsed as data
#  /* 12AD30 80132370 0000000A */      movz $zero, $zero, $zero
#  /* 12AD34 80132374 00000000 */       nop 
#glabel D_ovl23_80132378   # Routine parsed as data
#  /* 12AD38 80132378 20202000 */      addi $zero, $at, 0x2000
#  /* 12AD3C 8013237C 20202000 */      addi $zero, $at, 0x2000
#glabel D_ovl23_80132380   # Routine parsed as data
#  /* 12AD40 80132380 FFFFFF00 */        sd $ra, -0x100($ra)
#  /* 12AD44 80132384 FFFFFF00 */        sd $ra, -0x100($ra)
