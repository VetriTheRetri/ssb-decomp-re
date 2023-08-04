.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80131B00 -> 0x80133080

glabel func_ovl18_80131B00
  /* 11DC10 80131B00 8C830000 */        lw $v1, ($a0)
  /* 11DC14 80131B04 3C188013 */       lui $t8, %hi(D_ovl18_801330A0)
  /* 11DC18 80131B08 271830A0 */     addiu $t8, $t8, %lo(D_ovl18_801330A0)
  /* 11DC1C 80131B0C 246E0008 */     addiu $t6, $v1, 8
  /* 11DC20 80131B10 AC8E0000 */        sw $t6, ($a0)
  /* 11DC24 80131B14 3C0FDE00 */       lui $t7, 0xde00
  /* 11DC28 80131B18 AC6F0000 */        sw $t7, ($v1)
  /* 11DC2C 80131B1C 03E00008 */        jr $ra
  /* 11DC30 80131B20 AC780004 */        sw $t8, 4($v1)

glabel func_ovl18_80131B24
  /* 11DC34 80131B24 3C0E8013 */       lui $t6, %hi(D_ovl18_801330C8)
  /* 11DC38 80131B28 25CE30C8 */     addiu $t6, $t6, %lo(D_ovl18_801330C8)
  /* 11DC3C 80131B2C 8DD80000 */        lw $t8, ($t6) # D_ovl18_801330C8 + 0
  /* 11DC40 80131B30 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 11DC44 80131B34 27A30030 */     addiu $v1, $sp, 0x30
  /* 11DC48 80131B38 AC780000 */        sw $t8, ($v1)
  /* 11DC4C 80131B3C 95D80004 */       lhu $t8, 4($t6) # D_ovl18_801330C8 + 4
  /* 11DC50 80131B40 3C198013 */       lui $t9, %hi(D_ovl18_801330D0)
  /* 11DC54 80131B44 273930D0 */     addiu $t9, $t9, %lo(D_ovl18_801330D0)
  /* 11DC58 80131B48 A4780004 */        sh $t8, 4($v1)
  /* 11DC5C 80131B4C 8F2B0000 */        lw $t3, ($t9) # D_ovl18_801330D0 + 0
  /* 11DC60 80131B50 27A80028 */     addiu $t0, $sp, 0x28
  /* 11DC64 80131B54 3C0C8013 */       lui $t4, %hi(D_ovl18_801330D8)
  /* 11DC68 80131B58 AD0B0000 */        sw $t3, ($t0)
  /* 11DC6C 80131B5C 972B0004 */       lhu $t3, 4($t9) # D_ovl18_801330D0 + 4
  /* 11DC70 80131B60 258C30D8 */     addiu $t4, $t4, %lo(D_ovl18_801330D8)
  /* 11DC74 80131B64 27A90020 */     addiu $t1, $sp, 0x20
  /* 11DC78 80131B68 A50B0004 */        sh $t3, 4($t0)
  /* 11DC7C 80131B6C 8D8E0000 */        lw $t6, ($t4) # D_ovl18_801330D8 + 0
  /* 11DC80 80131B70 00803825 */        or $a3, $a0, $zero
  /* 11DC84 80131B74 24010001 */     addiu $at, $zero, 1
  /* 11DC88 80131B78 AD2E0000 */        sw $t6, ($t1)
  /* 11DC8C 80131B7C 958E0004 */       lhu $t6, 4($t4) # D_ovl18_801330D8 + 4
  /* 11DC90 80131B80 10A00009 */      beqz $a1, .L80131BA8
  /* 11DC94 80131B84 A52E0004 */        sh $t6, 4($t1)
  /* 11DC98 80131B88 10A10005 */       beq $a1, $at, .L80131BA0
  /* 11DC9C 80131B8C 24010002 */     addiu $at, $zero, 2
  /* 11DCA0 80131B90 10A10007 */       beq $a1, $at, .L80131BB0
  /* 11DCA4 80131B94 00601025 */        or $v0, $v1, $zero
  /* 11DCA8 80131B98 10000005 */         b .L80131BB0
  /* 11DCAC 80131B9C 8FA2001C */        lw $v0, 0x1c($sp)
  .L80131BA0:
  /* 11DCB0 80131BA0 10000003 */         b .L80131BB0
  /* 11DCB4 80131BA4 01001025 */        or $v0, $t0, $zero
  .L80131BA8:
  /* 11DCB8 80131BA8 10000001 */         b .L80131BB0
  /* 11DCBC 80131BAC 01201025 */        or $v0, $t1, $zero
  .L80131BB0:
  /* 11DCC0 80131BB0 10C00004 */      beqz $a2, .L80131BC4
  /* 11DCC4 80131BB4 00002825 */        or $a1, $zero, $zero
  /* 11DCC8 80131BB8 24010001 */     addiu $at, $zero, 1
  /* 11DCCC 80131BBC 14C10003 */       bne $a2, $at, .L80131BCC
  /* 11DCD0 80131BC0 24030001 */     addiu $v1, $zero, 1
  .L80131BC4:
  /* 11DCD4 80131BC4 10000001 */         b .L80131BCC
  /* 11DCD8 80131BC8 24030003 */     addiu $v1, $zero, 3
  .L80131BCC:
  /* 11DCDC 80131BCC 1860004B */      blez $v1, .L80131CFC
  /* 11DCE0 80131BD0 8CE40074 */        lw $a0, 0x74($a3)
  /* 11DCE4 80131BD4 30670003 */      andi $a3, $v1, 3
  /* 11DCE8 80131BD8 10E00012 */      beqz $a3, .L80131C24
  /* 11DCEC 80131BDC 00E03025 */        or $a2, $a3, $zero
  .L80131BE0:
  /* 11DCF0 80131BE0 904F0000 */       lbu $t7, ($v0)
  /* 11DCF4 80131BE4 24A50001 */     addiu $a1, $a1, 1
  /* 11DCF8 80131BE8 A08F0060 */        sb $t7, 0x60($a0)
  /* 11DCFC 80131BEC 90580001 */       lbu $t8, 1($v0)
  /* 11DD00 80131BF0 A0980061 */        sb $t8, 0x61($a0)
  /* 11DD04 80131BF4 90590002 */       lbu $t9, 2($v0)
  /* 11DD08 80131BF8 A0990062 */        sb $t9, 0x62($a0)
  /* 11DD0C 80131BFC 904A0003 */       lbu $t2, 3($v0)
  /* 11DD10 80131C00 A08A0028 */        sb $t2, 0x28($a0)
  /* 11DD14 80131C04 904B0004 */       lbu $t3, 4($v0)
  /* 11DD18 80131C08 A08B0029 */        sb $t3, 0x29($a0)
  /* 11DD1C 80131C0C 904C0005 */       lbu $t4, 5($v0)
  /* 11DD20 80131C10 A08C002A */        sb $t4, 0x2a($a0)
  /* 11DD24 80131C14 14C5FFF2 */       bne $a2, $a1, .L80131BE0
  /* 11DD28 80131C18 8C840008 */        lw $a0, 8($a0)
  /* 11DD2C 80131C1C 10A30037 */       beq $a1, $v1, .L80131CFC
  /* 11DD30 80131C20 00000000 */       nop 
  .L80131C24:
  /* 11DD34 80131C24 904D0000 */       lbu $t5, ($v0)
  /* 11DD38 80131C28 24A50004 */     addiu $a1, $a1, 4
  /* 11DD3C 80131C2C A08D0060 */        sb $t5, 0x60($a0)
  /* 11DD40 80131C30 904E0001 */       lbu $t6, 1($v0)
  /* 11DD44 80131C34 A08E0061 */        sb $t6, 0x61($a0)
  /* 11DD48 80131C38 904F0002 */       lbu $t7, 2($v0)
  /* 11DD4C 80131C3C A08F0062 */        sb $t7, 0x62($a0)
  /* 11DD50 80131C40 90580003 */       lbu $t8, 3($v0)
  /* 11DD54 80131C44 A0980028 */        sb $t8, 0x28($a0)
  /* 11DD58 80131C48 90590004 */       lbu $t9, 4($v0)
  /* 11DD5C 80131C4C A0990029 */        sb $t9, 0x29($a0)
  /* 11DD60 80131C50 904A0005 */       lbu $t2, 5($v0)
  /* 11DD64 80131C54 A08A002A */        sb $t2, 0x2a($a0)
  /* 11DD68 80131C58 904B0000 */       lbu $t3, ($v0)
  /* 11DD6C 80131C5C 8C840008 */        lw $a0, 8($a0)
  /* 11DD70 80131C60 A08B0060 */        sb $t3, 0x60($a0)
  /* 11DD74 80131C64 904C0001 */       lbu $t4, 1($v0)
  /* 11DD78 80131C68 A08C0061 */        sb $t4, 0x61($a0)
  /* 11DD7C 80131C6C 904D0002 */       lbu $t5, 2($v0)
  /* 11DD80 80131C70 A08D0062 */        sb $t5, 0x62($a0)
  /* 11DD84 80131C74 904E0003 */       lbu $t6, 3($v0)
  /* 11DD88 80131C78 A08E0028 */        sb $t6, 0x28($a0)
  /* 11DD8C 80131C7C 904F0004 */       lbu $t7, 4($v0)
  /* 11DD90 80131C80 A08F0029 */        sb $t7, 0x29($a0)
  /* 11DD94 80131C84 90580005 */       lbu $t8, 5($v0)
  /* 11DD98 80131C88 A098002A */        sb $t8, 0x2a($a0)
  /* 11DD9C 80131C8C 90590000 */       lbu $t9, ($v0)
  /* 11DDA0 80131C90 8C840008 */        lw $a0, 8($a0)
  /* 11DDA4 80131C94 A0990060 */        sb $t9, 0x60($a0)
  /* 11DDA8 80131C98 904A0001 */       lbu $t2, 1($v0)
  /* 11DDAC 80131C9C A08A0061 */        sb $t2, 0x61($a0)
  /* 11DDB0 80131CA0 904B0002 */       lbu $t3, 2($v0)
  /* 11DDB4 80131CA4 A08B0062 */        sb $t3, 0x62($a0)
  /* 11DDB8 80131CA8 904C0003 */       lbu $t4, 3($v0)
  /* 11DDBC 80131CAC A08C0028 */        sb $t4, 0x28($a0)
  /* 11DDC0 80131CB0 904D0004 */       lbu $t5, 4($v0)
  /* 11DDC4 80131CB4 A08D0029 */        sb $t5, 0x29($a0)
  /* 11DDC8 80131CB8 904E0005 */       lbu $t6, 5($v0)
  /* 11DDCC 80131CBC A08E002A */        sb $t6, 0x2a($a0)
  /* 11DDD0 80131CC0 904F0000 */       lbu $t7, ($v0)
  /* 11DDD4 80131CC4 8C840008 */        lw $a0, 8($a0)
  /* 11DDD8 80131CC8 A08F0060 */        sb $t7, 0x60($a0)
  /* 11DDDC 80131CCC 90580001 */       lbu $t8, 1($v0)
  /* 11DDE0 80131CD0 A0980061 */        sb $t8, 0x61($a0)
  /* 11DDE4 80131CD4 90590002 */       lbu $t9, 2($v0)
  /* 11DDE8 80131CD8 A0990062 */        sb $t9, 0x62($a0)
  /* 11DDEC 80131CDC 904A0003 */       lbu $t2, 3($v0)
  /* 11DDF0 80131CE0 A08A0028 */        sb $t2, 0x28($a0)
  /* 11DDF4 80131CE4 904B0004 */       lbu $t3, 4($v0)
  /* 11DDF8 80131CE8 A08B0029 */        sb $t3, 0x29($a0)
  /* 11DDFC 80131CEC 904C0005 */       lbu $t4, 5($v0)
  /* 11DE00 80131CF0 A08C002A */        sb $t4, 0x2a($a0)
  /* 11DE04 80131CF4 14A3FFCB */       bne $a1, $v1, .L80131C24
  /* 11DE08 80131CF8 8C840008 */        lw $a0, 8($a0)
  .L80131CFC:
  /* 11DE0C 80131CFC 03E00008 */        jr $ra
  /* 11DE10 80131D00 27BD0038 */     addiu $sp, $sp, 0x38

glabel func_ovl18_80131D04
  /* 11DE14 80131D04 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11DE18 80131D08 3C0E8013 */       lui $t6, %hi(D_ovl18_80133290)
  /* 11DE1C 80131D0C 8DCE3290 */        lw $t6, %lo(D_ovl18_80133290)($t6)
  /* 11DE20 80131D10 3C0F0000 */       lui $t7, %hi(D_NF_000001E8)
  /* 11DE24 80131D14 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11DE28 80131D18 AFA5002C */        sw $a1, 0x2c($sp)
  /* 11DE2C 80131D1C 25EF01E8 */     addiu $t7, $t7, %lo(D_NF_000001E8)
  /* 11DE30 80131D20 AFA40028 */        sw $a0, 0x28($sp)
  /* 11DE34 80131D24 AFA60030 */        sw $a2, 0x30($sp)
  /* 11DE38 80131D28 AFA70034 */        sw $a3, 0x34($sp)
  /* 11DE3C 80131D2C 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11DE40 80131D30 01CF2821 */      addu $a1, $t6, $t7
  /* 11DE44 80131D34 94580024 */       lhu $t8, 0x24($v0)
  /* 11DE48 80131D38 3C0A8013 */       lui $t2, %hi(D_ovl18_80133290)
  /* 11DE4C 80131D3C 3C0B0000 */       lui $t3, %hi(D_NF_00000330)
  /* 11DE50 80131D40 3308FFDF */      andi $t0, $t8, 0xffdf
  /* 11DE54 80131D44 A4480024 */        sh $t0, 0x24($v0)
  /* 11DE58 80131D48 35090001 */       ori $t1, $t0, 1
  /* 11DE5C 80131D4C A4490024 */        sh $t1, 0x24($v0)
  /* 11DE60 80131D50 C7A4002C */      lwc1 $f4, 0x2c($sp)
  /* 11DE64 80131D54 256B0330 */     addiu $t3, $t3, %lo(D_NF_00000330)
  /* 11DE68 80131D58 E4440058 */      swc1 $f4, 0x58($v0)
  /* 11DE6C 80131D5C C7A60030 */      lwc1 $f6, 0x30($sp)
  /* 11DE70 80131D60 E446005C */      swc1 $f6, 0x5c($v0)
  /* 11DE74 80131D64 8D4A3290 */        lw $t2, %lo(D_ovl18_80133290)($t2)
  /* 11DE78 80131D68 8FA40028 */        lw $a0, 0x28($sp)
  /* 11DE7C 80131D6C 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11DE80 80131D70 014B2821 */      addu $a1, $t2, $t3
  /* 11DE84 80131D74 944C0024 */       lhu $t4, 0x24($v0)
  /* 11DE88 80131D78 3C014180 */       lui $at, (0x41800000 >> 16) # 16.0
  /* 11DE8C 80131D7C 44815000 */      mtc1 $at, $f10 # 16.0 to cop1
  /* 11DE90 80131D80 318EFFDF */      andi $t6, $t4, 0xffdf
  /* 11DE94 80131D84 A44E0024 */        sh $t6, 0x24($v0)
  /* 11DE98 80131D88 35CF0001 */       ori $t7, $t6, 1
  /* 11DE9C 80131D8C A44F0024 */        sh $t7, 0x24($v0)
  /* 11DEA0 80131D90 C7A8002C */      lwc1 $f8, 0x2c($sp)
  /* 11DEA4 80131D94 24180004 */     addiu $t8, $zero, 4
  /* 11DEA8 80131D98 2419001D */     addiu $t9, $zero, 0x1d
  /* 11DEAC 80131D9C 460A4000 */     add.s $f0, $f8, $f10
  /* 11DEB0 80131DA0 3C088013 */       lui $t0, %hi(D_ovl18_80133290)
  /* 11DEB4 80131DA4 3C090000 */       lui $t1, %hi(D_NF_00000568)
  /* 11DEB8 80131DA8 25290568 */     addiu $t1, $t1, %lo(D_NF_00000568)
  /* 11DEBC 80131DAC E4400058 */      swc1 $f0, 0x58($v0)
  /* 11DEC0 80131DB0 C7B00030 */      lwc1 $f16, 0x30($sp)
  /* 11DEC4 80131DB4 A0400065 */        sb $zero, 0x65($v0)
  /* 11DEC8 80131DB8 A0400064 */        sb $zero, 0x64($v0)
  /* 11DECC 80131DBC A0580067 */        sb $t8, 0x67($v0)
  /* 11DED0 80131DC0 A0400066 */        sb $zero, 0x66($v0)
  /* 11DED4 80131DC4 E450005C */      swc1 $f16, 0x5c($v0)
  /* 11DED8 80131DC8 8FA30034 */        lw $v1, 0x34($sp)
  /* 11DEDC 80131DCC A459006A */        sh $t9, 0x6a($v0)
  /* 11DEE0 80131DD0 000318C0 */       sll $v1, $v1, 3
  /* 11DEE4 80131DD4 A4430068 */        sh $v1, 0x68($v0)
  /* 11DEE8 80131DD8 8D083290 */        lw $t0, %lo(D_ovl18_80133290)($t0)
  /* 11DEEC 80131DDC E7A00020 */      swc1 $f0, 0x20($sp)
  /* 11DEF0 80131DE0 AFA3001C */        sw $v1, 0x1c($sp)
  /* 11DEF4 80131DE4 8FA40028 */        lw $a0, 0x28($sp)
  /* 11DEF8 80131DE8 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11DEFC 80131DEC 01092821 */      addu $a1, $t0, $t1
  /* 11DF00 80131DF0 8FA3001C */        lw $v1, 0x1c($sp)
  /* 11DF04 80131DF4 C7A00020 */      lwc1 $f0, 0x20($sp)
  /* 11DF08 80131DF8 944A0024 */       lhu $t2, 0x24($v0)
  /* 11DF0C 80131DFC 44839000 */      mtc1 $v1, $f18
  /* 11DF10 80131E00 314CFFDF */      andi $t4, $t2, 0xffdf
  /* 11DF14 80131E04 46809120 */   cvt.s.w $f4, $f18
  /* 11DF18 80131E08 A44C0024 */        sh $t4, 0x24($v0)
  /* 11DF1C 80131E0C 358D0001 */       ori $t5, $t4, 1
  /* 11DF20 80131E10 A44D0024 */        sh $t5, 0x24($v0)
  /* 11DF24 80131E14 46040180 */     add.s $f6, $f0, $f4
  /* 11DF28 80131E18 E4460058 */      swc1 $f6, 0x58($v0)
  /* 11DF2C 80131E1C C7A80030 */      lwc1 $f8, 0x30($sp)
  /* 11DF30 80131E20 E448005C */      swc1 $f8, 0x5c($v0)
  /* 11DF34 80131E24 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11DF38 80131E28 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11DF3C 80131E2C 03E00008 */        jr $ra
  /* 11DF40 80131E30 00000000 */       nop 

glabel func_ovl18_80131E34
  /* 11DF44 80131E34 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11DF48 80131E38 AFBF001C */        sw $ra, 0x1c($sp)
  /* 11DF4C 80131E3C 00002025 */        or $a0, $zero, $zero
  /* 11DF50 80131E40 00002825 */        or $a1, $zero, $zero
  /* 11DF54 80131E44 24060004 */     addiu $a2, $zero, 4
  /* 11DF58 80131E48 0C00265A */       jal omMakeGObjCommon
  /* 11DF5C 80131E4C 3C078000 */       lui $a3, 0x8000
  /* 11DF60 80131E50 3C018013 */       lui $at, %hi(D_ovl18_801331A0)
  /* 11DF64 80131E54 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 11DF68 80131E58 240EFFFF */     addiu $t6, $zero, -1
  /* 11DF6C 80131E5C AC2231A0 */        sw $v0, %lo(D_ovl18_801331A0)($at)
  /* 11DF70 80131E60 AFA20024 */        sw $v0, 0x24($sp)
  /* 11DF74 80131E64 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11DF78 80131E68 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 11DF7C 80131E6C 00402025 */        or $a0, $v0, $zero
  /* 11DF80 80131E70 24060002 */     addiu $a2, $zero, 2
  /* 11DF84 80131E74 0C00277D */       jal func_80009DF4
  /* 11DF88 80131E78 3C078000 */       lui $a3, 0x8000
  /* 11DF8C 80131E7C 8FA40024 */        lw $a0, 0x24($sp)
  /* 11DF90 80131E80 3C0542F8 */       lui $a1, 0x42f8
  /* 11DF94 80131E84 3C064228 */       lui $a2, 0x4228
  /* 11DF98 80131E88 0C04C741 */       jal func_ovl18_80131D04
  /* 11DF9C 80131E8C 24070010 */     addiu $a3, $zero, 0x10
  /* 11DFA0 80131E90 3C058013 */       lui $a1, %hi(D_ovl18_801331B8)
  /* 11DFA4 80131E94 8CA531B8 */        lw $a1, %lo(D_ovl18_801331B8)($a1)
  /* 11DFA8 80131E98 8FA40024 */        lw $a0, 0x24($sp)
  /* 11DFAC 80131E9C 00003025 */        or $a2, $zero, $zero
  /* 11DFB0 80131EA0 0C04C6C9 */       jal func_ovl18_80131B24
  /* 11DFB4 80131EA4 2CA50001 */     sltiu $a1, $a1, 1
  /* 11DFB8 80131EA8 3C0F8013 */       lui $t7, %hi(D_ovl18_80133294)
  /* 11DFBC 80131EAC 8DEF3294 */        lw $t7, %lo(D_ovl18_80133294)($t7)
  /* 11DFC0 80131EB0 3C180000 */       lui $t8, %hi(D_NF_00002A28)
  /* 11DFC4 80131EB4 27182A28 */     addiu $t8, $t8, %lo(D_NF_00002A28)
  /* 11DFC8 80131EB8 8FA40024 */        lw $a0, 0x24($sp)
  /* 11DFCC 80131EBC 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11DFD0 80131EC0 01F82821 */      addu $a1, $t7, $t8
  /* 11DFD4 80131EC4 94590024 */       lhu $t9, 0x24($v0)
  /* 11DFD8 80131EC8 3C014321 */       lui $at, (0x43210000 >> 16) # 161.0
  /* 11DFDC 80131ECC 44812000 */      mtc1 $at, $f4 # 161.0 to cop1
  /* 11DFE0 80131ED0 3C014238 */       lui $at, (0x42380000 >> 16) # 46.0
  /* 11DFE4 80131ED4 44813000 */      mtc1 $at, $f6 # 46.0 to cop1
  /* 11DFE8 80131ED8 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 11DFEC 80131EDC A4490024 */        sh $t1, 0x24($v0)
  /* 11DFF0 80131EE0 352A0001 */       ori $t2, $t1, 1
  /* 11DFF4 80131EE4 A44A0024 */        sh $t2, 0x24($v0)
  /* 11DFF8 80131EE8 A0400028 */        sb $zero, 0x28($v0)
  /* 11DFFC 80131EEC A0400029 */        sb $zero, 0x29($v0)
  /* 11E000 80131EF0 A040002A */        sb $zero, 0x2a($v0)
  /* 11E004 80131EF4 E4440058 */      swc1 $f4, 0x58($v0)
  /* 11E008 80131EF8 E446005C */      swc1 $f6, 0x5c($v0)
  /* 11E00C 80131EFC 8FBF001C */        lw $ra, 0x1c($sp)
  /* 11E010 80131F00 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11E014 80131F04 03E00008 */        jr $ra
  /* 11E018 80131F08 00000000 */       nop 

glabel func_ovl18_80131F0C
  /* 11E01C 80131F0C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11E020 80131F10 AFBF001C */        sw $ra, 0x1c($sp)
  /* 11E024 80131F14 00002025 */        or $a0, $zero, $zero
  /* 11E028 80131F18 00002825 */        or $a1, $zero, $zero
  /* 11E02C 80131F1C 24060004 */     addiu $a2, $zero, 4
  /* 11E030 80131F20 0C00265A */       jal omMakeGObjCommon
  /* 11E034 80131F24 3C078000 */       lui $a3, 0x8000
  /* 11E038 80131F28 3C018013 */       lui $at, %hi(D_ovl18_801331A4)
  /* 11E03C 80131F2C 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 11E040 80131F30 240EFFFF */     addiu $t6, $zero, -1
  /* 11E044 80131F34 AC2231A4 */        sw $v0, %lo(D_ovl18_801331A4)($at)
  /* 11E048 80131F38 AFA20024 */        sw $v0, 0x24($sp)
  /* 11E04C 80131F3C AFAE0010 */        sw $t6, 0x10($sp)
  /* 11E050 80131F40 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 11E054 80131F44 00402025 */        or $a0, $v0, $zero
  /* 11E058 80131F48 24060002 */     addiu $a2, $zero, 2
  /* 11E05C 80131F4C 0C00277D */       jal func_80009DF4
  /* 11E060 80131F50 3C078000 */       lui $a3, 0x8000
  /* 11E064 80131F54 8FA40024 */        lw $a0, 0x24($sp)
  /* 11E068 80131F58 3C0542C6 */       lui $a1, 0x42c6
  /* 11E06C 80131F5C 3C0642A8 */       lui $a2, 0x42a8
  /* 11E070 80131F60 0C04C741 */       jal func_ovl18_80131D04
  /* 11E074 80131F64 24070010 */     addiu $a3, $zero, 0x10
  /* 11E078 80131F68 3C058013 */       lui $a1, %hi(D_ovl18_801331B8)
  /* 11E07C 80131F6C 8CA531B8 */        lw $a1, %lo(D_ovl18_801331B8)($a1)
  /* 11E080 80131F70 8FA40024 */        lw $a0, 0x24($sp)
  /* 11E084 80131F74 24060001 */     addiu $a2, $zero, 1
  /* 11E088 80131F78 38A50001 */      xori $a1, $a1, 1
  /* 11E08C 80131F7C 0C04C6C9 */       jal func_ovl18_80131B24
  /* 11E090 80131F80 2CA50001 */     sltiu $a1, $a1, 1
  /* 11E094 80131F84 3C0F8013 */       lui $t7, %hi(D_ovl18_80133294)
  /* 11E098 80131F88 8DEF3294 */        lw $t7, %lo(D_ovl18_80133294)($t7)
  /* 11E09C 80131F8C 3C180000 */       lui $t8, %hi(D_NF_00005AC8)
  /* 11E0A0 80131F90 27185AC8 */     addiu $t8, $t8, %lo(D_NF_00005AC8)
  /* 11E0A4 80131F94 8FA40024 */        lw $a0, 0x24($sp)
  /* 11E0A8 80131F98 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11E0AC 80131F9C 01F82821 */      addu $a1, $t7, $t8
  /* 11E0B0 80131FA0 94590024 */       lhu $t9, 0x24($v0)
  /* 11E0B4 80131FA4 3C0142D6 */       lui $at, (0x42D60000 >> 16) # 107.0
  /* 11E0B8 80131FA8 44812000 */      mtc1 $at, $f4 # 107.0 to cop1
  /* 11E0BC 80131FAC 3C0142AE */       lui $at, (0x42AE0000 >> 16) # 87.0
  /* 11E0C0 80131FB0 44813000 */      mtc1 $at, $f6 # 87.0 to cop1
  /* 11E0C4 80131FB4 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 11E0C8 80131FB8 A4490024 */        sh $t1, 0x24($v0)
  /* 11E0CC 80131FBC 352A0001 */       ori $t2, $t1, 1
  /* 11E0D0 80131FC0 A44A0024 */        sh $t2, 0x24($v0)
  /* 11E0D4 80131FC4 A0400028 */        sb $zero, 0x28($v0)
  /* 11E0D8 80131FC8 A0400029 */        sb $zero, 0x29($v0)
  /* 11E0DC 80131FCC A040002A */        sb $zero, 0x2a($v0)
  /* 11E0E0 80131FD0 E4440058 */      swc1 $f4, 0x58($v0)
  /* 11E0E4 80131FD4 E446005C */      swc1 $f6, 0x5c($v0)
  /* 11E0E8 80131FD8 8FBF001C */        lw $ra, 0x1c($sp)
  /* 11E0EC 80131FDC 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11E0F0 80131FE0 03E00008 */        jr $ra
  /* 11E0F4 80131FE4 00000000 */       nop 

glabel func_ovl18_80131FE8
  /* 11E0F8 80131FE8 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11E0FC 80131FEC AFBF001C */        sw $ra, 0x1c($sp)
  /* 11E100 80131FF0 00002025 */        or $a0, $zero, $zero
  /* 11E104 80131FF4 00002825 */        or $a1, $zero, $zero
  /* 11E108 80131FF8 24060004 */     addiu $a2, $zero, 4
  /* 11E10C 80131FFC 0C00265A */       jal omMakeGObjCommon
  /* 11E110 80132000 3C078000 */       lui $a3, 0x8000
  /* 11E114 80132004 3C018013 */       lui $at, %hi(D_ovl18_801331A8)
  /* 11E118 80132008 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 11E11C 8013200C 240EFFFF */     addiu $t6, $zero, -1
  /* 11E120 80132010 AC2231A8 */        sw $v0, %lo(D_ovl18_801331A8)($at)
  /* 11E124 80132014 AFA20024 */        sw $v0, 0x24($sp)
  /* 11E128 80132018 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11E12C 8013201C 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 11E130 80132020 00402025 */        or $a0, $v0, $zero
  /* 11E134 80132024 24060002 */     addiu $a2, $zero, 2
  /* 11E138 80132028 0C00277D */       jal func_80009DF4
  /* 11E13C 8013202C 3C078000 */       lui $a3, 0x8000
  /* 11E140 80132030 3C0F8013 */       lui $t7, %hi(D_ovl18_80133294)
  /* 11E144 80132034 8DEF3294 */        lw $t7, %lo(D_ovl18_80133294)($t7)
  /* 11E148 80132038 3C180000 */       lui $t8, %hi(D_NF_00001108)
  /* 11E14C 8013203C 27181108 */     addiu $t8, $t8, %lo(D_NF_00001108)
  /* 11E150 80132040 8FA40024 */        lw $a0, 0x24($sp)
  /* 11E154 80132044 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11E158 80132048 01F82821 */      addu $a1, $t7, $t8
  /* 11E15C 8013204C 94590024 */       lhu $t9, 0x24($v0)
  /* 11E160 80132050 3C01429C */       lui $at, (0x429C0000 >> 16) # 78.0
  /* 11E164 80132054 44812000 */      mtc1 $at, $f4 # 78.0 to cop1
  /* 11E168 80132058 3C0142FC */       lui $at, (0x42FC0000 >> 16) # 126.0
  /* 11E16C 8013205C 44813000 */      mtc1 $at, $f6 # 126.0 to cop1
  /* 11E170 80132060 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 11E174 80132064 A4490024 */        sh $t1, 0x24($v0)
  /* 11E178 80132068 352A0001 */       ori $t2, $t1, 1
  /* 11E17C 8013206C A44A0024 */        sh $t2, 0x24($v0)
  /* 11E180 80132070 3C058013 */       lui $a1, %hi(D_ovl18_801331B8)
  /* 11E184 80132074 E4440058 */      swc1 $f4, 0x58($v0)
  /* 11E188 80132078 E446005C */      swc1 $f6, 0x5c($v0)
  /* 11E18C 8013207C 8CA531B8 */        lw $a1, %lo(D_ovl18_801331B8)($a1)
  /* 11E190 80132080 8FA40024 */        lw $a0, 0x24($sp)
  /* 11E194 80132084 24060002 */     addiu $a2, $zero, 2
  /* 11E198 80132088 38A50002 */      xori $a1, $a1, 2
  /* 11E19C 8013208C 0C04C6C9 */       jal func_ovl18_80131B24
  /* 11E1A0 80132090 2CA50001 */     sltiu $a1, $a1, 1
  /* 11E1A4 80132094 3C0B8013 */       lui $t3, %hi(D_ovl18_80133294)
  /* 11E1A8 80132098 8D6B3294 */        lw $t3, %lo(D_ovl18_80133294)($t3)
  /* 11E1AC 8013209C 3C0C0000 */       lui $t4, %hi(D_NF_00005F28)
  /* 11E1B0 801320A0 258C5F28 */     addiu $t4, $t4, %lo(D_NF_00005F28)
  /* 11E1B4 801320A4 8FA40024 */        lw $a0, 0x24($sp)
  /* 11E1B8 801320A8 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11E1BC 801320AC 016C2821 */      addu $a1, $t3, $t4
  /* 11E1C0 801320B0 944D0024 */       lhu $t5, 0x24($v0)
  /* 11E1C4 801320B4 3C0142C2 */       lui $at, (0x42C20000 >> 16) # 97.0
  /* 11E1C8 801320B8 44814000 */      mtc1 $at, $f8 # 97.0 to cop1
  /* 11E1CC 801320BC 3C0142FE */       lui $at, (0x42FE0000 >> 16) # 127.0
  /* 11E1D0 801320C0 44815000 */      mtc1 $at, $f10 # 127.0 to cop1
  /* 11E1D4 801320C4 31AFFFDF */      andi $t7, $t5, 0xffdf
  /* 11E1D8 801320C8 A44F0024 */        sh $t7, 0x24($v0)
  /* 11E1DC 801320CC 35F80001 */       ori $t8, $t7, 1
  /* 11E1E0 801320D0 A4580024 */        sh $t8, 0x24($v0)
  /* 11E1E4 801320D4 A0400028 */        sb $zero, 0x28($v0)
  /* 11E1E8 801320D8 A0400029 */        sb $zero, 0x29($v0)
  /* 11E1EC 801320DC A040002A */        sb $zero, 0x2a($v0)
  /* 11E1F0 801320E0 E4480058 */      swc1 $f8, 0x58($v0)
  /* 11E1F4 801320E4 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 11E1F8 801320E8 8FBF001C */        lw $ra, 0x1c($sp)
  /* 11E1FC 801320EC 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11E200 801320F0 03E00008 */        jr $ra
  /* 11E204 801320F4 00000000 */       nop 

glabel func_ovl18_801320F8
  /* 11E208 801320F8 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11E20C 801320FC AFBF001C */        sw $ra, 0x1c($sp)
  /* 11E210 80132100 00002025 */        or $a0, $zero, $zero
  /* 11E214 80132104 00002825 */        or $a1, $zero, $zero
  /* 11E218 80132108 24060004 */     addiu $a2, $zero, 4
  /* 11E21C 8013210C 0C00265A */       jal omMakeGObjCommon
  /* 11E220 80132110 3C078000 */       lui $a3, 0x8000
  /* 11E224 80132114 3C018013 */       lui $at, %hi(D_ovl18_801331AC)
  /* 11E228 80132118 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 11E22C 8013211C 240EFFFF */     addiu $t6, $zero, -1
  /* 11E230 80132120 AC2231AC */        sw $v0, %lo(D_ovl18_801331AC)($at)
  /* 11E234 80132124 AFA20024 */        sw $v0, 0x24($sp)
  /* 11E238 80132128 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11E23C 8013212C 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 11E240 80132130 00402025 */        or $a0, $v0, $zero
  /* 11E244 80132134 24060002 */     addiu $a2, $zero, 2
  /* 11E248 80132138 0C00277D */       jal func_80009DF4
  /* 11E24C 8013213C 3C078000 */       lui $a3, 0x8000
  /* 11E250 80132140 3C0F8013 */       lui $t7, %hi(D_ovl18_80133294)
  /* 11E254 80132144 8DEF3294 */        lw $t7, %lo(D_ovl18_80133294)($t7)
  /* 11E258 80132148 3C180000 */       lui $t8, %hi(D_NF_00001108)
  /* 11E25C 8013214C 27181108 */     addiu $t8, $t8, %lo(D_NF_00001108)
  /* 11E260 80132150 8FA40024 */        lw $a0, 0x24($sp)
  /* 11E264 80132154 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11E268 80132158 01F82821 */      addu $a1, $t7, $t8
  /* 11E26C 8013215C 94590024 */       lhu $t9, 0x24($v0)
  /* 11E270 80132160 3C014286 */       lui $at, (0x42860000 >> 16) # 67.0
  /* 11E274 80132164 44812000 */      mtc1 $at, $f4 # 67.0 to cop1
  /* 11E278 80132168 3C014314 */       lui $at, (0x43140000 >> 16) # 148.0
  /* 11E27C 8013216C 44813000 */      mtc1 $at, $f6 # 148.0 to cop1
  /* 11E280 80132170 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 11E284 80132174 A4490024 */        sh $t1, 0x24($v0)
  /* 11E288 80132178 352A0001 */       ori $t2, $t1, 1
  /* 11E28C 8013217C A44A0024 */        sh $t2, 0x24($v0)
  /* 11E290 80132180 3C058013 */       lui $a1, %hi(D_ovl18_801331B8)
  /* 11E294 80132184 E4440058 */      swc1 $f4, 0x58($v0)
  /* 11E298 80132188 E446005C */      swc1 $f6, 0x5c($v0)
  /* 11E29C 8013218C 8CA531B8 */        lw $a1, %lo(D_ovl18_801331B8)($a1)
  /* 11E2A0 80132190 8FA40024 */        lw $a0, 0x24($sp)
  /* 11E2A4 80132194 24060003 */     addiu $a2, $zero, 3
  /* 11E2A8 80132198 38A50003 */      xori $a1, $a1, 3
  /* 11E2AC 8013219C 0C04C6C9 */       jal func_ovl18_80131B24
  /* 11E2B0 801321A0 2CA50001 */     sltiu $a1, $a1, 1
  /* 11E2B4 801321A4 3C0B8013 */       lui $t3, %hi(D_ovl18_80133294)
  /* 11E2B8 801321A8 8D6B3294 */        lw $t3, %lo(D_ovl18_80133294)($t3)
  /* 11E2BC 801321AC 3C0C0000 */       lui $t4, %hi(D_NF_00006388)
  /* 11E2C0 801321B0 258C6388 */     addiu $t4, $t4, %lo(D_NF_00006388)
  /* 11E2C4 801321B4 8FA40024 */        lw $a0, 0x24($sp)
  /* 11E2C8 801321B8 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11E2CC 801321BC 016C2821 */      addu $a1, $t3, $t4
  /* 11E2D0 801321C0 944D0024 */       lhu $t5, 0x24($v0)
  /* 11E2D4 801321C4 3C0142AC */       lui $at, (0x42AC0000 >> 16) # 86.0
  /* 11E2D8 801321C8 44814000 */      mtc1 $at, $f8 # 86.0 to cop1
  /* 11E2DC 801321CC 3C014315 */       lui $at, (0x43150000 >> 16) # 149.0
  /* 11E2E0 801321D0 44815000 */      mtc1 $at, $f10 # 149.0 to cop1
  /* 11E2E4 801321D4 31AFFFDF */      andi $t7, $t5, 0xffdf
  /* 11E2E8 801321D8 A44F0024 */        sh $t7, 0x24($v0)
  /* 11E2EC 801321DC 35F80001 */       ori $t8, $t7, 1
  /* 11E2F0 801321E0 A4580024 */        sh $t8, 0x24($v0)
  /* 11E2F4 801321E4 A0400028 */        sb $zero, 0x28($v0)
  /* 11E2F8 801321E8 A0400029 */        sb $zero, 0x29($v0)
  /* 11E2FC 801321EC A040002A */        sb $zero, 0x2a($v0)
  /* 11E300 801321F0 E4480058 */      swc1 $f8, 0x58($v0)
  /* 11E304 801321F4 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 11E308 801321F8 8FBF001C */        lw $ra, 0x1c($sp)
  /* 11E30C 801321FC 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11E310 80132200 03E00008 */        jr $ra
  /* 11E314 80132204 00000000 */       nop 

  /* 11E318 80132208 948E0024 */       lhu $t6, 0x24($a0)
  /* 11E31C 8013220C 240200FF */     addiu $v0, $zero, 0xff
  /* 11E320 80132210 A0800060 */        sb $zero, 0x60($a0)
  /* 11E324 80132214 31D8FFDF */      andi $t8, $t6, 0xffdf
  /* 11E328 80132218 A4980024 */        sh $t8, 0x24($a0)
  /* 11E32C 8013221C 37190001 */       ori $t9, $t8, 1
  /* 11E330 80132220 A4990024 */        sh $t9, 0x24($a0)
  /* 11E334 80132224 A0800061 */        sb $zero, 0x61($a0)
  /* 11E338 80132228 A0800062 */        sb $zero, 0x62($a0)
  /* 11E33C 8013222C A0820028 */        sb $v0, 0x28($a0)
  /* 11E340 80132230 A0820029 */        sb $v0, 0x29($a0)
  /* 11E344 80132234 03E00008 */        jr $ra
  /* 11E348 80132238 A082002A */        sb $v0, 0x2a($a0)

glabel func_ovl18_8013223C
  /* 11E34C 8013223C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11E350 80132240 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11E354 80132244 00002025 */        or $a0, $zero, $zero
  /* 11E358 80132248 00002825 */        or $a1, $zero, $zero
  /* 11E35C 8013224C 24060005 */     addiu $a2, $zero, 5
  /* 11E360 80132250 0C00265A */       jal omMakeGObjCommon
  /* 11E364 80132254 3C078000 */       lui $a3, 0x8000
  /* 11E368 80132258 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11E36C 8013225C 3C018013 */       lui $at, %hi(D_ovl18_801331BC)
  /* 11E370 80132260 AC2231BC */        sw $v0, %lo(D_ovl18_801331BC)($at)
  /* 11E374 80132264 03E00008 */        jr $ra
  /* 11E378 80132268 27BD0018 */     addiu $sp, $sp, 0x18

glabel func_ovl18_8013226C
  /* 11E37C 8013226C 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 11E380 80132270 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 11E384 80132274 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11E388 80132278 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11E38C 8013227C AFBF0014 */        sw $ra, 0x14($sp)
  /* 11E390 80132280 244E0008 */     addiu $t6, $v0, 8
  /* 11E394 80132284 AFA40018 */        sw $a0, 0x18($sp)
  /* 11E398 80132288 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 11E39C 8013228C 3C1FE700 */       lui $ra, 0xe700
  /* 11E3A0 80132290 AC5F0000 */        sw $ra, ($v0)
  /* 11E3A4 80132294 AC400004 */        sw $zero, 4($v0)
  /* 11E3A8 80132298 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11E3AC 8013229C 3C18E300 */       lui $t8, (0xE3000A01 >> 16) # 3808430593
  /* 11E3B0 801322A0 37180A01 */       ori $t8, $t8, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 11E3B4 801322A4 244F0008 */     addiu $t7, $v0, 8
  /* 11E3B8 801322A8 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 11E3BC 801322AC AC400004 */        sw $zero, 4($v0)
  /* 11E3C0 801322B0 AC580000 */        sw $t8, ($v0)
  /* 11E3C4 801322B4 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11E3C8 801322B8 3C0FA078 */       lui $t7, (0xA07814E6 >> 16) # 2692224230
  /* 11E3CC 801322BC 35EF14E6 */       ori $t7, $t7, (0xA07814E6 & 0xFFFF) # 2692224230
  /* 11E3D0 801322C0 24590008 */     addiu $t9, $v0, 8
  /* 11E3D4 801322C4 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 11E3D8 801322C8 3C0EFA00 */       lui $t6, 0xfa00
  /* 11E3DC 801322CC AC4E0000 */        sw $t6, ($v0)
  /* 11E3E0 801322D0 AC4F0004 */        sw $t7, 4($v0)
  /* 11E3E4 801322D4 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11E3E8 801322D8 3C0EFFFD */       lui $t6, (0xFFFDF6FB >> 16) # 4294833915
  /* 11E3EC 801322DC 3C19FCFF */       lui $t9, (0xFCFFFFFF >> 16) # 4244635647
  /* 11E3F0 801322E0 24580008 */     addiu $t8, $v0, 8
  /* 11E3F4 801322E4 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 11E3F8 801322E8 3739FFFF */       ori $t9, $t9, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 11E3FC 801322EC 35CEF6FB */       ori $t6, $t6, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 11E400 801322F0 AC4E0004 */        sw $t6, 4($v0)
  /* 11E404 801322F4 AC590000 */        sw $t9, ($v0)
  /* 11E408 801322F8 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11E40C 801322FC 3C190050 */       lui $t9, (0x5041C8 >> 16) # 5259720
  /* 11E410 80132300 3C18E200 */       lui $t8, (0xE200001C >> 16) # 3791650844
  /* 11E414 80132304 244F0008 */     addiu $t7, $v0, 8
  /* 11E418 80132308 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 11E41C 8013230C 3718001C */       ori $t8, $t8, (0xE200001C & 0xFFFF) # 3791650844
  /* 11E420 80132310 373941C8 */       ori $t9, $t9, (0x5041C8 & 0xFFFF) # 5259720
  /* 11E424 80132314 AC590004 */        sw $t9, 4($v0)
  /* 11E428 80132318 AC580000 */        sw $t8, ($v0)
  /* 11E42C 8013231C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11E430 80132320 3C180038 */       lui $t8, (0x38423C >> 16) # 3686972
  /* 11E434 80132324 3C0FF64D */       lui $t7, (0xF64D8398 >> 16) # 4132275096
  /* 11E438 80132328 244E0008 */     addiu $t6, $v0, 8
  /* 11E43C 8013232C AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 11E440 80132330 35EF8398 */       ori $t7, $t7, (0xF64D8398 & 0xFFFF) # 4132275096
  /* 11E444 80132334 3718423C */       ori $t8, $t8, (0x38423C & 0xFFFF) # 3686972
  /* 11E448 80132338 AC580004 */        sw $t8, 4($v0)
  /* 11E44C 8013233C AC4F0000 */        sw $t7, ($v0)
  /* 11E450 80132340 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11E454 80132344 3C0FE200 */       lui $t7, (0xE200001C >> 16) # 3791650844
  /* 11E458 80132348 3C180055 */       lui $t8, (0x552078 >> 16) # 5578872
  /* 11E45C 8013234C 24590008 */     addiu $t9, $v0, 8
  /* 11E460 80132350 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 11E464 80132354 AC400004 */        sw $zero, 4($v0)
  /* 11E468 80132358 AC5F0000 */        sw $ra, ($v0)
  /* 11E46C 8013235C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11E470 80132360 37182078 */       ori $t8, $t8, (0x552078 & 0xFFFF) # 5578872
  /* 11E474 80132364 35EF001C */       ori $t7, $t7, (0xE200001C & 0xFFFF) # 3791650844
  /* 11E478 80132368 244E0008 */     addiu $t6, $v0, 8
  /* 11E47C 8013236C AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 11E480 80132370 AC580004 */        sw $t8, 4($v0)
  /* 11E484 80132374 AC4F0000 */        sw $t7, ($v0)
  /* 11E488 80132378 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11E48C 8013237C 3C0EE300 */       lui $t6, (0xE3000A01 >> 16) # 3808430593
  /* 11E490 80132380 35CE0A01 */       ori $t6, $t6, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 11E494 80132384 24590008 */     addiu $t9, $v0, 8
  /* 11E498 80132388 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 11E49C 8013238C AC400004 */        sw $zero, 4($v0)
  /* 11E4A0 80132390 0C0333AB */       jal func_ovl0_800CCEAC
  /* 11E4A4 80132394 AC4E0000 */        sw $t6, ($v0)
  /* 11E4A8 80132398 0C0333C0 */       jal func_ovl0_800CCF00
  /* 11E4AC 8013239C 8FA40018 */        lw $a0, 0x18($sp)
  /* 11E4B0 801323A0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11E4B4 801323A4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11E4B8 801323A8 03E00008 */        jr $ra
  /* 11E4BC 801323AC 00000000 */       nop 

glabel func_ovl18_801323B0
  /* 11E4C0 801323B0 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11E4C4 801323B4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 11E4C8 801323B8 00002025 */        or $a0, $zero, $zero
  /* 11E4CC 801323BC 00002825 */        or $a1, $zero, $zero
  /* 11E4D0 801323C0 24060003 */     addiu $a2, $zero, 3
  /* 11E4D4 801323C4 0C00265A */       jal omMakeGObjCommon
  /* 11E4D8 801323C8 3C078000 */       lui $a3, 0x8000
  /* 11E4DC 801323CC 3C058013 */       lui $a1, %hi(func_ovl18_8013226C)
  /* 11E4E0 801323D0 240EFFFF */     addiu $t6, $zero, -1
  /* 11E4E4 801323D4 AFA20024 */        sw $v0, 0x24($sp)
  /* 11E4E8 801323D8 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11E4EC 801323DC 24A5226C */     addiu $a1, $a1, %lo(func_ovl18_8013226C)
  /* 11E4F0 801323E0 00402025 */        or $a0, $v0, $zero
  /* 11E4F4 801323E4 24060001 */     addiu $a2, $zero, 1
  /* 11E4F8 801323E8 0C00277D */       jal func_80009DF4
  /* 11E4FC 801323EC 3C078000 */       lui $a3, 0x8000
  /* 11E500 801323F0 3C0F8013 */       lui $t7, %hi(D_ovl18_80133290)
  /* 11E504 801323F4 8DEF3290 */        lw $t7, %lo(D_ovl18_80133290)($t7)
  /* 11E508 801323F8 3C180000 */       lui $t8, %hi(D_NF_000031F8)
  /* 11E50C 801323FC 271831F8 */     addiu $t8, $t8, %lo(D_NF_000031F8)
  /* 11E510 80132400 8FA40024 */        lw $a0, 0x24($sp)
  /* 11E514 80132404 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11E518 80132408 01F82821 */      addu $a1, $t7, $t8
  /* 11E51C 8013240C 94590024 */       lhu $t9, 0x24($v0)
  /* 11E520 80132410 3C01436B */       lui $at, (0x436B0000 >> 16) # 235.0
  /* 11E524 80132414 44812000 */      mtc1 $at, $f4 # 235.0 to cop1
  /* 11E528 80132418 3C01431E */       lui $at, (0x431E0000 >> 16) # 158.0
  /* 11E52C 8013241C 44813000 */      mtc1 $at, $f6 # 158.0 to cop1
  /* 11E530 80132420 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 11E534 80132424 A4490024 */        sh $t1, 0x24($v0)
  /* 11E538 80132428 352A0001 */       ori $t2, $t1, 1
  /* 11E53C 8013242C A44A0024 */        sh $t2, 0x24($v0)
  /* 11E540 80132430 A0400028 */        sb $zero, 0x28($v0)
  /* 11E544 80132434 A0400029 */        sb $zero, 0x29($v0)
  /* 11E548 80132438 A040002A */        sb $zero, 0x2a($v0)
  /* 11E54C 8013243C 3C0B8013 */       lui $t3, %hi(D_ovl18_80133294)
  /* 11E550 80132440 E4440058 */      swc1 $f4, 0x58($v0)
  /* 11E554 80132444 E446005C */      swc1 $f6, 0x5c($v0)
  /* 11E558 80132448 8D6B3294 */        lw $t3, %lo(D_ovl18_80133294)($t3)
  /* 11E55C 8013244C 3C0C0000 */       lui $t4, %hi(D_NF_00005338)
  /* 11E560 80132450 258C5338 */     addiu $t4, $t4, %lo(D_NF_00005338)
  /* 11E564 80132454 8FA40024 */        lw $a0, 0x24($sp)
  /* 11E568 80132458 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11E56C 8013245C 016C2821 */      addu $a1, $t3, $t4
  /* 11E570 80132460 944D0024 */       lhu $t5, 0x24($v0)
  /* 11E574 80132464 3C014321 */       lui $at, (0x43210000 >> 16) # 161.0
  /* 11E578 80132468 44814000 */      mtc1 $at, $f8 # 161.0 to cop1
  /* 11E57C 8013246C 3C014342 */       lui $at, (0x43420000 >> 16) # 194.0
  /* 11E580 80132470 44815000 */      mtc1 $at, $f10 # 194.0 to cop1
  /* 11E584 80132474 31AFFFDF */      andi $t7, $t5, 0xffdf
  /* 11E588 80132478 A44F0024 */        sh $t7, 0x24($v0)
  /* 11E58C 8013247C 35F80001 */       ori $t8, $t7, 1
  /* 11E590 80132480 A4580024 */        sh $t8, 0x24($v0)
  /* 11E594 80132484 A0400028 */        sb $zero, 0x28($v0)
  /* 11E598 80132488 A0400029 */        sb $zero, 0x29($v0)
  /* 11E59C 8013248C A040002A */        sb $zero, 0x2a($v0)
  /* 11E5A0 80132490 3C198013 */       lui $t9, %hi(D_ovl18_80133290)
  /* 11E5A4 80132494 E4480058 */      swc1 $f8, 0x58($v0)
  /* 11E5A8 80132498 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 11E5AC 8013249C 8F393290 */        lw $t9, %lo(D_ovl18_80133290)($t9)
  /* 11E5B0 801324A0 3C080001 */       lui $t0, %hi(D_NF_0000D240)
  /* 11E5B4 801324A4 2508D240 */     addiu $t0, $t0, %lo(D_NF_0000D240)
  /* 11E5B8 801324A8 8FA40024 */        lw $a0, 0x24($sp)
  /* 11E5BC 801324AC 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11E5C0 801324B0 03282821 */      addu $a1, $t9, $t0
  /* 11E5C4 801324B4 94490024 */       lhu $t1, 0x24($v0)
  /* 11E5C8 801324B8 3C01433C */       lui $at, (0x433C0000 >> 16) # 188.0
  /* 11E5CC 801324BC 44818000 */      mtc1 $at, $f16 # 188.0 to cop1
  /* 11E5D0 801324C0 3C0142B0 */       lui $at, (0x42B00000 >> 16) # 88.0
  /* 11E5D4 801324C4 44819000 */      mtc1 $at, $f18 # 88.0 to cop1
  /* 11E5D8 801324C8 312BFFDF */      andi $t3, $t1, 0xffdf
  /* 11E5DC 801324CC A44B0024 */        sh $t3, 0x24($v0)
  /* 11E5E0 801324D0 356C0001 */       ori $t4, $t3, 1
  /* 11E5E4 801324D4 A44C0024 */        sh $t4, 0x24($v0)
  /* 11E5E8 801324D8 A0400028 */        sb $zero, 0x28($v0)
  /* 11E5EC 801324DC A0400029 */        sb $zero, 0x29($v0)
  /* 11E5F0 801324E0 A040002A */        sb $zero, 0x2a($v0)
  /* 11E5F4 801324E4 E4500058 */      swc1 $f16, 0x58($v0)
  /* 11E5F8 801324E8 E452005C */      swc1 $f18, 0x5c($v0)
  /* 11E5FC 801324EC 8FBF001C */        lw $ra, 0x1c($sp)
  /* 11E600 801324F0 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11E604 801324F4 03E00008 */        jr $ra
  /* 11E608 801324F8 00000000 */       nop 

glabel func_ovl18_801324FC
  /* 11E60C 801324FC 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 11E610 80132500 AFBF0024 */        sw $ra, 0x24($sp)
  /* 11E614 80132504 AFB00020 */        sw $s0, 0x20($sp)
  /* 11E618 80132508 00002025 */        or $a0, $zero, $zero
  /* 11E61C 8013250C 00002825 */        or $a1, $zero, $zero
  /* 11E620 80132510 24060002 */     addiu $a2, $zero, 2
  /* 11E624 80132514 0C00265A */       jal omMakeGObjCommon
  /* 11E628 80132518 3C078000 */       lui $a3, 0x8000
  /* 11E62C 8013251C 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 11E630 80132520 240EFFFF */     addiu $t6, $zero, -1
  /* 11E634 80132524 00408025 */        or $s0, $v0, $zero
  /* 11E638 80132528 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11E63C 8013252C 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 11E640 80132530 00402025 */        or $a0, $v0, $zero
  /* 11E644 80132534 00003025 */        or $a2, $zero, $zero
  /* 11E648 80132538 0C00277D */       jal func_80009DF4
  /* 11E64C 8013253C 3C078000 */       lui $a3, 0x8000
  /* 11E650 80132540 3C0F8013 */       lui $t7, %hi(D_ovl18_80133290)
  /* 11E654 80132544 8DEF3290 */        lw $t7, %lo(D_ovl18_80133290)($t7)
  /* 11E658 80132548 3C180002 */       lui $t8, %hi(D_NF_00018000)
  /* 11E65C 8013254C 27188000 */     addiu $t8, $t8, %lo(D_NF_00018000)
  /* 11E660 80132550 02002025 */        or $a0, $s0, $zero
  /* 11E664 80132554 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11E668 80132558 01F82821 */      addu $a1, $t7, $t8
  /* 11E66C 8013255C 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 11E670 80132560 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 11E674 80132564 3C198013 */       lui $t9, %hi(D_ovl18_80133290)
  /* 11E678 80132568 3C030000 */       lui $v1, %hi(D_NF_00002A30)
  /* 11E67C 8013256C E4400058 */      swc1 $f0, 0x58($v0)
  /* 11E680 80132570 E440005C */      swc1 $f0, 0x5c($v0)
  /* 11E684 80132574 8F393290 */        lw $t9, %lo(D_ovl18_80133290)($t9)
  /* 11E688 80132578 24632A30 */     addiu $v1, $v1, %lo(D_NF_00002A30)
  /* 11E68C 8013257C AFA3002C */        sw $v1, 0x2c($sp)
  /* 11E690 80132580 02002025 */        or $a0, $s0, $zero
  /* 11E694 80132584 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11E698 80132588 03232821 */      addu $a1, $t9, $v1
  /* 11E69C 8013258C 8FA3002C */        lw $v1, 0x2c($sp)
  /* 11E6A0 80132590 94480024 */       lhu $t0, 0x24($v0)
  /* 11E6A4 80132594 3C01430C */       lui $at, (0x430C0000 >> 16) # 140.0
  /* 11E6A8 80132598 44812000 */      mtc1 $at, $f4 # 140.0 to cop1
  /* 11E6AC 8013259C 3C01430F */       lui $at, (0x430F0000 >> 16) # 143.0
  /* 11E6B0 801325A0 44813000 */      mtc1 $at, $f6 # 143.0 to cop1
  /* 11E6B4 801325A4 310AFFDF */      andi $t2, $t0, 0xffdf
  /* 11E6B8 801325A8 A44A0024 */        sh $t2, 0x24($v0)
  /* 11E6BC 801325AC 354B0001 */       ori $t3, $t2, 1
  /* 11E6C0 801325B0 240C00A0 */     addiu $t4, $zero, 0xa0
  /* 11E6C4 801325B4 240D0078 */     addiu $t5, $zero, 0x78
  /* 11E6C8 801325B8 240E0014 */     addiu $t6, $zero, 0x14
  /* 11E6CC 801325BC A44B0024 */        sh $t3, 0x24($v0)
  /* 11E6D0 801325C0 A04C0028 */        sb $t4, 0x28($v0)
  /* 11E6D4 801325C4 A04D0029 */        sb $t5, 0x29($v0)
  /* 11E6D8 801325C8 A04E002A */        sb $t6, 0x2a($v0)
  /* 11E6DC 801325CC 3C0F8013 */       lui $t7, %hi(D_ovl18_80133290)
  /* 11E6E0 801325D0 E4440058 */      swc1 $f4, 0x58($v0)
  /* 11E6E4 801325D4 E446005C */      swc1 $f6, 0x5c($v0)
  /* 11E6E8 801325D8 8DEF3290 */        lw $t7, %lo(D_ovl18_80133290)($t7)
  /* 11E6EC 801325DC 02002025 */        or $a0, $s0, $zero
  /* 11E6F0 801325E0 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11E6F4 801325E4 01E32821 */      addu $a1, $t7, $v1
  /* 11E6F8 801325E8 94580024 */       lhu $t8, 0x24($v0)
  /* 11E6FC 801325EC 3C014361 */       lui $at, (0x43610000 >> 16) # 225.0
  /* 11E700 801325F0 44814000 */      mtc1 $at, $f8 # 225.0 to cop1
  /* 11E704 801325F4 3C014260 */       lui $at, (0x42600000 >> 16) # 56.0
  /* 11E708 801325F8 44815000 */      mtc1 $at, $f10 # 56.0 to cop1
  /* 11E70C 801325FC 3308FFDF */      andi $t0, $t8, 0xffdf
  /* 11E710 80132600 A4480024 */        sh $t0, 0x24($v0)
  /* 11E714 80132604 35090001 */       ori $t1, $t0, 1
  /* 11E718 80132608 240A00A0 */     addiu $t2, $zero, 0xa0
  /* 11E71C 8013260C 240B0078 */     addiu $t3, $zero, 0x78
  /* 11E720 80132610 240C0014 */     addiu $t4, $zero, 0x14
  /* 11E724 80132614 A4490024 */        sh $t1, 0x24($v0)
  /* 11E728 80132618 A04A0028 */        sb $t2, 0x28($v0)
  /* 11E72C 8013261C A04B0029 */        sb $t3, 0x29($v0)
  /* 11E730 80132620 A04C002A */        sb $t4, 0x2a($v0)
  /* 11E734 80132624 3C0D8013 */       lui $t5, %hi(D_ovl18_80133294)
  /* 11E738 80132628 E4480058 */      swc1 $f8, 0x58($v0)
  /* 11E73C 8013262C E44A005C */      swc1 $f10, 0x5c($v0)
  /* 11E740 80132630 8DAD3294 */        lw $t5, %lo(D_ovl18_80133294)($t5)
  /* 11E744 80132634 3C0E0000 */       lui $t6, %hi(D_NF_000050F8)
  /* 11E748 80132638 25CE50F8 */     addiu $t6, $t6, %lo(D_NF_000050F8)
  /* 11E74C 8013263C 02002025 */        or $a0, $s0, $zero
  /* 11E750 80132640 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11E754 80132644 01AE2821 */      addu $a1, $t5, $t6
  /* 11E758 80132648 944F0024 */       lhu $t7, 0x24($v0)
  /* 11E75C 8013264C 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 11E760 80132650 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 11E764 80132654 24030099 */     addiu $v1, $zero, 0x99
  /* 11E768 80132658 31F9FFDF */      andi $t9, $t7, 0xffdf
  /* 11E76C 8013265C A4590024 */        sh $t9, 0x24($v0)
  /* 11E770 80132660 37280001 */       ori $t0, $t9, 1
  /* 11E774 80132664 A4480024 */        sh $t0, 0x24($v0)
  /* 11E778 80132668 A0430028 */        sb $v1, 0x28($v0)
  /* 11E77C 8013266C A0430029 */        sb $v1, 0x29($v0)
  /* 11E780 80132670 A043002A */        sb $v1, 0x2a($v0)
  /* 11E784 80132674 E4400058 */      swc1 $f0, 0x58($v0)
  /* 11E788 80132678 E440005C */      swc1 $f0, 0x5c($v0)
  /* 11E78C 8013267C 8FBF0024 */        lw $ra, 0x24($sp)
  /* 11E790 80132680 8FB00020 */        lw $s0, 0x20($sp)
  /* 11E794 80132684 27BD0038 */     addiu $sp, $sp, 0x38
  /* 11E798 80132688 03E00008 */        jr $ra
  /* 11E79C 8013268C 00000000 */       nop 

glabel func_ovl18_80132690
  /* 11E7A0 80132690 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 11E7A4 80132694 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 11E7A8 80132698 AFBF003C */        sw $ra, 0x3c($sp)
  /* 11E7AC 8013269C 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 11E7B0 801326A0 240F0014 */     addiu $t7, $zero, 0x14
  /* 11E7B4 801326A4 24180000 */     addiu $t8, $zero, 0
  /* 11E7B8 801326A8 24190008 */     addiu $t9, $zero, 8
  /* 11E7BC 801326AC 2408FFFF */     addiu $t0, $zero, -1
  /* 11E7C0 801326B0 24090001 */     addiu $t1, $zero, 1
  /* 11E7C4 801326B4 240A0001 */     addiu $t2, $zero, 1
  /* 11E7C8 801326B8 AFAA0030 */        sw $t2, 0x30($sp)
  /* 11E7CC 801326BC AFA90028 */        sw $t1, 0x28($sp)
  /* 11E7D0 801326C0 AFA80020 */        sw $t0, 0x20($sp)
  /* 11E7D4 801326C4 AFB9001C */        sw $t9, 0x1c($sp)
  /* 11E7D8 801326C8 AFB80018 */        sw $t8, 0x18($sp)
  /* 11E7DC 801326CC AFAF0014 */        sw $t7, 0x14($sp)
  /* 11E7E0 801326D0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11E7E4 801326D4 AFA00024 */        sw $zero, 0x24($sp)
  /* 11E7E8 801326D8 AFA0002C */        sw $zero, 0x2c($sp)
  /* 11E7EC 801326DC AFA00034 */        sw $zero, 0x34($sp)
  /* 11E7F0 801326E0 24040001 */     addiu $a0, $zero, 1
  /* 11E7F4 801326E4 00002825 */        or $a1, $zero, $zero
  /* 11E7F8 801326E8 24060001 */     addiu $a2, $zero, 1
  /* 11E7FC 801326EC 0C002E4F */       jal func_8000B93C
  /* 11E800 801326F0 3C078000 */       lui $a3, 0x8000
  /* 11E804 801326F4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 11E808 801326F8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 11E80C 801326FC 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 11E810 80132700 8C430074 */        lw $v1, 0x74($v0)
  /* 11E814 80132704 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 11E818 80132708 44050000 */      mfc1 $a1, $f0
  /* 11E81C 8013270C 44060000 */      mfc1 $a2, $f0
  /* 11E820 80132710 3C07439B */       lui $a3, 0x439b
  /* 11E824 80132714 24640008 */     addiu $a0, $v1, 8
  /* 11E828 80132718 0C001C20 */       jal func_80007080
  /* 11E82C 8013271C E7A40010 */      swc1 $f4, 0x10($sp)
  /* 11E830 80132720 8FBF003C */        lw $ra, 0x3c($sp)
  /* 11E834 80132724 27BD0040 */     addiu $sp, $sp, 0x40
  /* 11E838 80132728 03E00008 */        jr $ra
  /* 11E83C 8013272C 00000000 */       nop 

glabel func_ovl18_80132730
  /* 11E840 80132730 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 11E844 80132734 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 11E848 80132738 AFBF003C */        sw $ra, 0x3c($sp)
  /* 11E84C 8013273C 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 11E850 80132740 240F0028 */     addiu $t7, $zero, 0x28
  /* 11E854 80132744 24180000 */     addiu $t8, $zero, 0
  /* 11E858 80132748 24190004 */     addiu $t9, $zero, 4
  /* 11E85C 8013274C 2408FFFF */     addiu $t0, $zero, -1
  /* 11E860 80132750 24090001 */     addiu $t1, $zero, 1
  /* 11E864 80132754 240A0001 */     addiu $t2, $zero, 1
  /* 11E868 80132758 AFAA0030 */        sw $t2, 0x30($sp)
  /* 11E86C 8013275C AFA90028 */        sw $t1, 0x28($sp)
  /* 11E870 80132760 AFA80020 */        sw $t0, 0x20($sp)
  /* 11E874 80132764 AFB9001C */        sw $t9, 0x1c($sp)
  /* 11E878 80132768 AFB80018 */        sw $t8, 0x18($sp)
  /* 11E87C 8013276C AFAF0014 */        sw $t7, 0x14($sp)
  /* 11E880 80132770 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11E884 80132774 AFA00024 */        sw $zero, 0x24($sp)
  /* 11E888 80132778 AFA0002C */        sw $zero, 0x2c($sp)
  /* 11E88C 8013277C AFA00034 */        sw $zero, 0x34($sp)
  /* 11E890 80132780 24040001 */     addiu $a0, $zero, 1
  /* 11E894 80132784 00002825 */        or $a1, $zero, $zero
  /* 11E898 80132788 24060001 */     addiu $a2, $zero, 1
  /* 11E89C 8013278C 0C002E4F */       jal func_8000B93C
  /* 11E8A0 80132790 3C078000 */       lui $a3, 0x8000
  /* 11E8A4 80132794 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 11E8A8 80132798 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 11E8AC 8013279C 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 11E8B0 801327A0 8C430074 */        lw $v1, 0x74($v0)
  /* 11E8B4 801327A4 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 11E8B8 801327A8 44050000 */      mfc1 $a1, $f0
  /* 11E8BC 801327AC 44060000 */      mfc1 $a2, $f0
  /* 11E8C0 801327B0 3C07439B */       lui $a3, 0x439b
  /* 11E8C4 801327B4 24640008 */     addiu $a0, $v1, 8
  /* 11E8C8 801327B8 0C001C20 */       jal func_80007080
  /* 11E8CC 801327BC E7A40010 */      swc1 $f4, 0x10($sp)
  /* 11E8D0 801327C0 8FBF003C */        lw $ra, 0x3c($sp)
  /* 11E8D4 801327C4 27BD0040 */     addiu $sp, $sp, 0x40
  /* 11E8D8 801327C8 03E00008 */        jr $ra
  /* 11E8DC 801327CC 00000000 */       nop 

glabel func_ovl18_801327D0
  /* 11E8E0 801327D0 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 11E8E4 801327D4 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 11E8E8 801327D8 AFBF003C */        sw $ra, 0x3c($sp)
  /* 11E8EC 801327DC 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 11E8F0 801327E0 240F003C */     addiu $t7, $zero, 0x3c
  /* 11E8F4 801327E4 24180000 */     addiu $t8, $zero, 0
  /* 11E8F8 801327E8 24190002 */     addiu $t9, $zero, 2
  /* 11E8FC 801327EC 2408FFFF */     addiu $t0, $zero, -1
  /* 11E900 801327F0 24090001 */     addiu $t1, $zero, 1
  /* 11E904 801327F4 240A0001 */     addiu $t2, $zero, 1
  /* 11E908 801327F8 AFAA0030 */        sw $t2, 0x30($sp)
  /* 11E90C 801327FC AFA90028 */        sw $t1, 0x28($sp)
  /* 11E910 80132800 AFA80020 */        sw $t0, 0x20($sp)
  /* 11E914 80132804 AFB9001C */        sw $t9, 0x1c($sp)
  /* 11E918 80132808 AFB80018 */        sw $t8, 0x18($sp)
  /* 11E91C 8013280C AFAF0014 */        sw $t7, 0x14($sp)
  /* 11E920 80132810 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11E924 80132814 AFA00024 */        sw $zero, 0x24($sp)
  /* 11E928 80132818 AFA0002C */        sw $zero, 0x2c($sp)
  /* 11E92C 8013281C AFA00034 */        sw $zero, 0x34($sp)
  /* 11E930 80132820 24040001 */     addiu $a0, $zero, 1
  /* 11E934 80132824 00002825 */        or $a1, $zero, $zero
  /* 11E938 80132828 24060001 */     addiu $a2, $zero, 1
  /* 11E93C 8013282C 0C002E4F */       jal func_8000B93C
  /* 11E940 80132830 3C078000 */       lui $a3, 0x8000
  /* 11E944 80132834 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 11E948 80132838 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 11E94C 8013283C 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 11E950 80132840 8C430074 */        lw $v1, 0x74($v0)
  /* 11E954 80132844 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 11E958 80132848 44050000 */      mfc1 $a1, $f0
  /* 11E95C 8013284C 44060000 */      mfc1 $a2, $f0
  /* 11E960 80132850 3C07439B */       lui $a3, 0x439b
  /* 11E964 80132854 24640008 */     addiu $a0, $v1, 8
  /* 11E968 80132858 0C001C20 */       jal func_80007080
  /* 11E96C 8013285C E7A40010 */      swc1 $f4, 0x10($sp)
  /* 11E970 80132860 8FBF003C */        lw $ra, 0x3c($sp)
  /* 11E974 80132864 27BD0040 */     addiu $sp, $sp, 0x40
  /* 11E978 80132868 03E00008 */        jr $ra
  /* 11E97C 8013286C 00000000 */       nop 

glabel func_ovl18_80132870
  /* 11E980 80132870 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 11E984 80132874 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 11E988 80132878 AFBF003C */        sw $ra, 0x3c($sp)
  /* 11E98C 8013287C 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 11E990 80132880 240F0050 */     addiu $t7, $zero, 0x50
  /* 11E994 80132884 24180000 */     addiu $t8, $zero, 0
  /* 11E998 80132888 24190001 */     addiu $t9, $zero, 1
  /* 11E99C 8013288C 2408FFFF */     addiu $t0, $zero, -1
  /* 11E9A0 80132890 24090001 */     addiu $t1, $zero, 1
  /* 11E9A4 80132894 240A0001 */     addiu $t2, $zero, 1
  /* 11E9A8 80132898 AFAA0030 */        sw $t2, 0x30($sp)
  /* 11E9AC 8013289C AFA90028 */        sw $t1, 0x28($sp)
  /* 11E9B0 801328A0 AFA80020 */        sw $t0, 0x20($sp)
  /* 11E9B4 801328A4 AFB9001C */        sw $t9, 0x1c($sp)
  /* 11E9B8 801328A8 AFB80018 */        sw $t8, 0x18($sp)
  /* 11E9BC 801328AC AFAF0014 */        sw $t7, 0x14($sp)
  /* 11E9C0 801328B0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11E9C4 801328B4 AFA00024 */        sw $zero, 0x24($sp)
  /* 11E9C8 801328B8 AFA0002C */        sw $zero, 0x2c($sp)
  /* 11E9CC 801328BC AFA00034 */        sw $zero, 0x34($sp)
  /* 11E9D0 801328C0 24040001 */     addiu $a0, $zero, 1
  /* 11E9D4 801328C4 00002825 */        or $a1, $zero, $zero
  /* 11E9D8 801328C8 24060001 */     addiu $a2, $zero, 1
  /* 11E9DC 801328CC 0C002E4F */       jal func_8000B93C
  /* 11E9E0 801328D0 3C078000 */       lui $a3, 0x8000
  /* 11E9E4 801328D4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 11E9E8 801328D8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 11E9EC 801328DC 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 11E9F0 801328E0 8C430074 */        lw $v1, 0x74($v0)
  /* 11E9F4 801328E4 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 11E9F8 801328E8 44050000 */      mfc1 $a1, $f0
  /* 11E9FC 801328EC 44060000 */      mfc1 $a2, $f0
  /* 11EA00 801328F0 3C07439B */       lui $a3, 0x439b
  /* 11EA04 801328F4 24640008 */     addiu $a0, $v1, 8
  /* 11EA08 801328F8 0C001C20 */       jal func_80007080
  /* 11EA0C 801328FC E7A40010 */      swc1 $f4, 0x10($sp)
  /* 11EA10 80132900 8FBF003C */        lw $ra, 0x3c($sp)
  /* 11EA14 80132904 27BD0040 */     addiu $sp, $sp, 0x40
  /* 11EA18 80132908 03E00008 */        jr $ra
  /* 11EA1C 8013290C 00000000 */       nop 

glabel func_ovl18_80132910
  /* 11EA20 80132910 3C02800A */       lui $v0, %hi((gSceneData + 0x1))
  /* 11EA24 80132914 90424AD1 */       lbu $v0, %lo((gSceneData + 0x1))($v0)
  /* 11EA28 80132918 24010011 */     addiu $at, $zero, 0x11
  /* 11EA2C 8013291C 1041000B */       beq $v0, $at, .L8013294C
  /* 11EA30 80132920 24010012 */     addiu $at, $zero, 0x12
  /* 11EA34 80132924 1041000C */       beq $v0, $at, .L80132958
  /* 11EA38 80132928 240E0001 */     addiu $t6, $zero, 1
  /* 11EA3C 8013292C 24010013 */     addiu $at, $zero, 0x13
  /* 11EA40 80132930 1041000C */       beq $v0, $at, .L80132964
  /* 11EA44 80132934 240F0002 */     addiu $t7, $zero, 2
  /* 11EA48 80132938 24010014 */     addiu $at, $zero, 0x14
  /* 11EA4C 8013293C 1041000C */       beq $v0, $at, .L80132970
  /* 11EA50 80132940 24180003 */     addiu $t8, $zero, 3
  /* 11EA54 80132944 1000000C */         b .L80132978
  /* 11EA58 80132948 00000000 */       nop 
  .L8013294C:
  /* 11EA5C 8013294C 3C018013 */       lui $at, %hi(D_ovl18_801331B8)
  /* 11EA60 80132950 10000009 */         b .L80132978
  /* 11EA64 80132954 AC2031B8 */        sw $zero, %lo(D_ovl18_801331B8)($at)
  .L80132958:
  /* 11EA68 80132958 3C018013 */       lui $at, %hi(D_ovl18_801331B8)
  /* 11EA6C 8013295C 10000006 */         b .L80132978
  /* 11EA70 80132960 AC2E31B8 */        sw $t6, %lo(D_ovl18_801331B8)($at)
  .L80132964:
  /* 11EA74 80132964 3C018013 */       lui $at, %hi(D_ovl18_801331B8)
  /* 11EA78 80132968 10000003 */         b .L80132978
  /* 11EA7C 8013296C AC2F31B8 */        sw $t7, %lo(D_ovl18_801331B8)($at)
  .L80132970:
  /* 11EA80 80132970 3C018013 */       lui $at, %hi(D_ovl18_801331B8)
  /* 11EA84 80132974 AC3831B8 */        sw $t8, %lo(D_ovl18_801331B8)($at)
  .L80132978:
  /* 11EA88 80132978 3C018013 */       lui $at, %hi(D_ovl18_801331C4)
  /* 11EA8C 8013297C 3C028013 */       lui $v0, %hi(D_ovl18_801331C8)
  /* 11EA90 80132980 AC2031C4 */        sw $zero, %lo(D_ovl18_801331C4)($at)
  /* 11EA94 80132984 244231C8 */     addiu $v0, $v0, %lo(D_ovl18_801331C8)
  /* 11EA98 80132988 AC400000 */        sw $zero, ($v0) # D_ovl18_801331C8 + 0
  /* 11EA9C 8013298C 3C018013 */       lui $at, %hi(D_ovl18_801331C0)
  /* 11EAA0 80132990 AC2031C0 */        sw $zero, %lo(D_ovl18_801331C0)($at)
  /* 11EAA4 80132994 8C590000 */        lw $t9, ($v0) # D_ovl18_801331C8 + 0
  /* 11EAA8 80132998 3C018013 */       lui $at, %hi(D_ovl18_801331CC)
  /* 11EAAC 8013299C 27284650 */     addiu $t0, $t9, 0x4650
  /* 11EAB0 801329A0 03E00008 */        jr $ra
  /* 11EAB4 801329A4 AC2831CC */        sw $t0, %lo(D_ovl18_801331CC)($at)

glabel func_ovl18_801329A8
  /* 11EAB8 801329A8 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 11EABC 801329AC 3C0F8013 */       lui $t7, %hi(D_ovl18_801330E0)
  /* 11EAC0 801329B0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11EAC4 801329B4 AFA40040 */        sw $a0, 0x40($sp)
  /* 11EAC8 801329B8 25EF30E0 */     addiu $t7, $t7, %lo(D_ovl18_801330E0)
  /* 11EACC 801329BC 8DF90000 */        lw $t9, ($t7) # D_ovl18_801330E0 + 0
  /* 11EAD0 801329C0 8DF80004 */        lw $t8, 4($t7) # D_ovl18_801330E0 + 4
  /* 11EAD4 801329C4 27AE002C */     addiu $t6, $sp, 0x2c
  /* 11EAD8 801329C8 ADD90000 */        sw $t9, ($t6)
  /* 11EADC 801329CC ADD80004 */        sw $t8, 4($t6)
  /* 11EAE0 801329D0 8DF8000C */        lw $t8, 0xc($t7) # D_ovl18_801330E0 + 12
  /* 11EAE4 801329D4 8DF90008 */        lw $t9, 8($t7) # D_ovl18_801330E0 + 8
  /* 11EAE8 801329D8 3C038013 */       lui $v1, %hi(D_ovl18_801331C8)
  /* 11EAEC 801329DC 246331C8 */     addiu $v1, $v1, %lo(D_ovl18_801331C8)
  /* 11EAF0 801329E0 ADD8000C */        sw $t8, 0xc($t6)
  /* 11EAF4 801329E4 ADD90008 */        sw $t9, 8($t6)
  /* 11EAF8 801329E8 8C680000 */        lw $t0, ($v1) # D_ovl18_801331C8 + 0
  /* 11EAFC 801329EC 3C0A8013 */       lui $t2, %hi(D_ovl18_801331CC)
  /* 11EB00 801329F0 25090001 */     addiu $t1, $t0, 1
  /* 11EB04 801329F4 2921000A */      slti $at, $t1, 0xa
  /* 11EB08 801329F8 14200124 */      bnez $at, .L80132E8C
  /* 11EB0C 801329FC AC690000 */        sw $t1, ($v1) # D_ovl18_801331C8 + 0
  /* 11EB10 80132A00 8D4A31CC */        lw $t2, %lo(D_ovl18_801331CC)($t2)
  /* 11EB14 80132A04 3C02800A */       lui $v0, %hi(gSceneData)
  /* 11EB18 80132A08 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 11EB1C 80132A0C 15490007 */       bne $t2, $t1, .L80132A2C
  /* 11EB20 80132A10 240C0001 */     addiu $t4, $zero, 1
  /* 11EB24 80132A14 904B0000 */       lbu $t3, ($v0) # gSceneData + 0
  /* 11EB28 80132A18 A04C0000 */        sb $t4, ($v0) # gSceneData + 0
  /* 11EB2C 80132A1C 0C00171D */       jal func_80005C74
  /* 11EB30 80132A20 A04B0001 */        sb $t3, 1($v0) # gSceneData + 1
  /* 11EB34 80132A24 1000011A */         b .L80132E90
  /* 11EB38 80132A28 8FBF0014 */        lw $ra, 0x14($sp)
  .L80132A2C:
  /* 11EB3C 80132A2C 0C0E42DF */       jal func_ovl1_80390B7C
  /* 11EB40 80132A30 00000000 */       nop 
  /* 11EB44 80132A34 3C038013 */       lui $v1, %hi(D_ovl18_801331C8)
  /* 11EB48 80132A38 14400005 */      bnez $v0, .L80132A50
  /* 11EB4C 80132A3C 246331C8 */     addiu $v1, $v1, %lo(D_ovl18_801331C8)
  /* 11EB50 80132A40 8C6D0000 */        lw $t5, ($v1) # D_ovl18_801331C8 + 0
  /* 11EB54 80132A44 3C018013 */       lui $at, %hi(D_ovl18_801331CC)
  /* 11EB58 80132A48 25AE4650 */     addiu $t6, $t5, 0x4650
  /* 11EB5C 80132A4C AC2E31CC */        sw $t6, %lo(D_ovl18_801331CC)($at)
  .L80132A50:
  /* 11EB60 80132A50 3C0F8013 */       lui $t7, %hi(D_ovl18_801331C0)
  /* 11EB64 80132A54 8DEF31C0 */        lw $t7, %lo(D_ovl18_801331C0)($t7)
  /* 11EB68 80132A58 11E00003 */      beqz $t7, .L80132A68
  /* 11EB6C 80132A5C 00000000 */       nop 
  /* 11EB70 80132A60 0C00171D */       jal func_80005C74
  /* 11EB74 80132A64 00000000 */       nop 
  .L80132A68:
  /* 11EB78 80132A68 3C038013 */       lui $v1, %hi(D_ovl18_801331C4)
  /* 11EB7C 80132A6C 246331C4 */     addiu $v1, $v1, %lo(D_ovl18_801331C4)
  /* 11EB80 80132A70 8C620000 */        lw $v0, ($v1) # D_ovl18_801331C4 + 0
  /* 11EB84 80132A74 2404FFEC */     addiu $a0, $zero, -0x14
  /* 11EB88 80132A78 10400002 */      beqz $v0, .L80132A84
  /* 11EB8C 80132A7C 2458FFFF */     addiu $t8, $v0, -1
  /* 11EB90 80132A80 AC780000 */        sw $t8, ($v1) # D_ovl18_801331C4 + 0
  .L80132A84:
  /* 11EB94 80132A84 0C0E4281 */       jal func_ovl1_80390A04
  /* 11EB98 80132A88 24050014 */     addiu $a1, $zero, 0x14
  /* 11EB9C 80132A8C 1040000E */      beqz $v0, .L80132AC8
  /* 11EBA0 80132A90 2404FFEC */     addiu $a0, $zero, -0x14
  /* 11EBA4 80132A94 0C0E42B0 */       jal func_ovl1_80390AC0
  /* 11EBA8 80132A98 24050014 */     addiu $a1, $zero, 0x14
  /* 11EBAC 80132A9C 1040000A */      beqz $v0, .L80132AC8
  /* 11EBB0 80132AA0 00000000 */       nop 
  /* 11EBB4 80132AA4 0C0E4201 */       jal func_ovl1_80390804
  /* 11EBB8 80132AA8 24040808 */     addiu $a0, $zero, 0x808
  /* 11EBBC 80132AAC 14400006 */      bnez $v0, .L80132AC8
  /* 11EBC0 80132AB0 00000000 */       nop 
  /* 11EBC4 80132AB4 0C0E4201 */       jal func_ovl1_80390804
  /* 11EBC8 80132AB8 24040404 */     addiu $a0, $zero, 0x404
  /* 11EBCC 80132ABC 14400002 */      bnez $v0, .L80132AC8
  /* 11EBD0 80132AC0 3C018013 */       lui $at, %hi(D_ovl18_801331C4)
  /* 11EBD4 80132AC4 AC2031C4 */        sw $zero, %lo(D_ovl18_801331C4)($at)
  .L80132AC8:
  /* 11EBD8 80132AC8 0C0E41DB */       jal func_ovl1_8039076C
  /* 11EBDC 80132ACC 34049000 */       ori $a0, $zero, 0x9000
  /* 11EBE0 80132AD0 1040005E */      beqz $v0, .L80132C4C
  /* 11EBE4 80132AD4 AFA20024 */        sw $v0, 0x24($sp)
  /* 11EBE8 80132AD8 3C028013 */       lui $v0, %hi(D_ovl18_801331B8)
  /* 11EBEC 80132ADC 8C4231B8 */        lw $v0, %lo(D_ovl18_801331B8)($v0)
  /* 11EBF0 80132AE0 24010001 */     addiu $at, $zero, 1
  /* 11EBF4 80132AE4 10400009 */      beqz $v0, .L80132B0C
  /* 11EBF8 80132AE8 00000000 */       nop 
  /* 11EBFC 80132AEC 1041001B */       beq $v0, $at, .L80132B5C
  /* 11EC00 80132AF0 24010002 */     addiu $at, $zero, 2
  /* 11EC04 80132AF4 1041002D */       beq $v0, $at, .L80132BAC
  /* 11EC08 80132AF8 24010003 */     addiu $at, $zero, 3
  /* 11EC0C 80132AFC 1041003F */       beq $v0, $at, .L80132BFC
  /* 11EC10 80132B00 00000000 */       nop 
  /* 11EC14 80132B04 10000051 */         b .L80132C4C
  /* 11EC18 80132B08 00000000 */       nop 
  .L80132B0C:
  /* 11EC1C 80132B0C 0C009A70 */       jal func_800269C0
  /* 11EC20 80132B10 2404009E */     addiu $a0, $zero, 0x9e
  /* 11EC24 80132B14 3C048013 */       lui $a0, %hi(D_ovl18_801331A0)
  /* 11EC28 80132B18 8C8431A0 */        lw $a0, %lo(D_ovl18_801331A0)($a0)
  /* 11EC2C 80132B1C 24050002 */     addiu $a1, $zero, 2
  /* 11EC30 80132B20 0C04C6C9 */       jal func_ovl18_80131B24
  /* 11EC34 80132B24 00003025 */        or $a2, $zero, $zero
  /* 11EC38 80132B28 3C02800A */       lui $v0, %hi(gSceneData)
  /* 11EC3C 80132B2C 8FA90024 */        lw $t1, 0x24($sp)
  /* 11EC40 80132B30 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 11EC44 80132B34 90590000 */       lbu $t9, ($v0) # gSceneData + 0
  /* 11EC48 80132B38 24080011 */     addiu $t0, $zero, 0x11
  /* 11EC4C 80132B3C 252AFFFF */     addiu $t2, $t1, -1
  /* 11EC50 80132B40 A0480000 */        sb $t0, ($v0) # gSceneData + 0
  /* 11EC54 80132B44 A04A0013 */        sb $t2, 0x13($v0) # gSceneData + 19
  /* 11EC58 80132B48 240B0001 */     addiu $t3, $zero, 1
  /* 11EC5C 80132B4C 3C018013 */       lui $at, %hi(D_ovl18_801331C0)
  /* 11EC60 80132B50 A0590001 */        sb $t9, 1($v0) # gSceneData + 1
  /* 11EC64 80132B54 100000CD */         b .L80132E8C
  /* 11EC68 80132B58 AC2B31C0 */        sw $t3, %lo(D_ovl18_801331C0)($at)
  .L80132B5C:
  /* 11EC6C 80132B5C 0C009A70 */       jal func_800269C0
  /* 11EC70 80132B60 2404009E */     addiu $a0, $zero, 0x9e
  /* 11EC74 80132B64 3C048013 */       lui $a0, %hi(D_ovl18_801331A4)
  /* 11EC78 80132B68 8C8431A4 */        lw $a0, %lo(D_ovl18_801331A4)($a0)
  /* 11EC7C 80132B6C 24050002 */     addiu $a1, $zero, 2
  /* 11EC80 80132B70 0C04C6C9 */       jal func_ovl18_80131B24
  /* 11EC84 80132B74 24060001 */     addiu $a2, $zero, 1
  /* 11EC88 80132B78 3C02800A */       lui $v0, %hi(gSceneData)
  /* 11EC8C 80132B7C 8FAE0024 */        lw $t6, 0x24($sp)
  /* 11EC90 80132B80 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 11EC94 80132B84 904C0000 */       lbu $t4, ($v0) # gSceneData + 0
  /* 11EC98 80132B88 240D0012 */     addiu $t5, $zero, 0x12
  /* 11EC9C 80132B8C 25CFFFFF */     addiu $t7, $t6, -1
  /* 11ECA0 80132B90 A04D0000 */        sb $t5, ($v0) # gSceneData + 0
  /* 11ECA4 80132B94 A04F0013 */        sb $t7, 0x13($v0) # gSceneData + 19
  /* 11ECA8 80132B98 24180001 */     addiu $t8, $zero, 1
  /* 11ECAC 80132B9C 3C018013 */       lui $at, %hi(D_ovl18_801331C0)
  /* 11ECB0 80132BA0 A04C0001 */        sb $t4, 1($v0) # gSceneData + 1
  /* 11ECB4 80132BA4 100000B9 */         b .L80132E8C
  /* 11ECB8 80132BA8 AC3831C0 */        sw $t8, %lo(D_ovl18_801331C0)($at)
  .L80132BAC:
  /* 11ECBC 80132BAC 0C009A70 */       jal func_800269C0
  /* 11ECC0 80132BB0 2404009E */     addiu $a0, $zero, 0x9e
  /* 11ECC4 80132BB4 3C048013 */       lui $a0, %hi(D_ovl18_801331A8)
  /* 11ECC8 80132BB8 8C8431A8 */        lw $a0, %lo(D_ovl18_801331A8)($a0)
  /* 11ECCC 80132BBC 24050002 */     addiu $a1, $zero, 2
  /* 11ECD0 80132BC0 0C04C6C9 */       jal func_ovl18_80131B24
  /* 11ECD4 80132BC4 24060002 */     addiu $a2, $zero, 2
  /* 11ECD8 80132BC8 3C02800A */       lui $v0, %hi(gSceneData)
  /* 11ECDC 80132BCC 8FA90024 */        lw $t1, 0x24($sp)
  /* 11ECE0 80132BD0 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 11ECE4 80132BD4 90590000 */       lbu $t9, ($v0) # gSceneData + 0
  /* 11ECE8 80132BD8 24080013 */     addiu $t0, $zero, 0x13
  /* 11ECEC 80132BDC 252AFFFF */     addiu $t2, $t1, -1
  /* 11ECF0 80132BE0 A0480000 */        sb $t0, ($v0) # gSceneData + 0
  /* 11ECF4 80132BE4 A04A0013 */        sb $t2, 0x13($v0) # gSceneData + 19
  /* 11ECF8 80132BE8 240B0001 */     addiu $t3, $zero, 1
  /* 11ECFC 80132BEC 3C018013 */       lui $at, %hi(D_ovl18_801331C0)
  /* 11ED00 80132BF0 A0590001 */        sb $t9, 1($v0) # gSceneData + 1
  /* 11ED04 80132BF4 100000A5 */         b .L80132E8C
  /* 11ED08 80132BF8 AC2B31C0 */        sw $t3, %lo(D_ovl18_801331C0)($at)
  .L80132BFC:
  /* 11ED0C 80132BFC 0C009A70 */       jal func_800269C0
  /* 11ED10 80132C00 2404009E */     addiu $a0, $zero, 0x9e
  /* 11ED14 80132C04 3C048013 */       lui $a0, %hi(D_ovl18_801331AC)
  /* 11ED18 80132C08 8C8431AC */        lw $a0, %lo(D_ovl18_801331AC)($a0)
  /* 11ED1C 80132C0C 24050002 */     addiu $a1, $zero, 2
  /* 11ED20 80132C10 0C04C6C9 */       jal func_ovl18_80131B24
  /* 11ED24 80132C14 24060003 */     addiu $a2, $zero, 3
  /* 11ED28 80132C18 3C02800A */       lui $v0, %hi(gSceneData)
  /* 11ED2C 80132C1C 8FAE0024 */        lw $t6, 0x24($sp)
  /* 11ED30 80132C20 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 11ED34 80132C24 904C0000 */       lbu $t4, ($v0) # gSceneData + 0
  /* 11ED38 80132C28 240D0014 */     addiu $t5, $zero, 0x14
  /* 11ED3C 80132C2C 25CFFFFF */     addiu $t7, $t6, -1
  /* 11ED40 80132C30 A04D0000 */        sb $t5, ($v0) # gSceneData + 0
  /* 11ED44 80132C34 A04F0013 */        sb $t7, 0x13($v0) # gSceneData + 19
  /* 11ED48 80132C38 24180001 */     addiu $t8, $zero, 1
  /* 11ED4C 80132C3C 3C018013 */       lui $at, %hi(D_ovl18_801331C0)
  /* 11ED50 80132C40 A04C0001 */        sb $t4, 1($v0) # gSceneData + 1
  /* 11ED54 80132C44 10000091 */         b .L80132E8C
  /* 11ED58 80132C48 AC3831C0 */        sw $t8, %lo(D_ovl18_801331C0)($at)
  .L80132C4C:
  /* 11ED5C 80132C4C 0C0E41DB */       jal func_ovl1_8039076C
  /* 11ED60 80132C50 24044000 */     addiu $a0, $zero, 0x4000
  /* 11ED64 80132C54 10400007 */      beqz $v0, .L80132C74
  /* 11ED68 80132C58 3C02800A */       lui $v0, %hi(gSceneData)
  /* 11ED6C 80132C5C 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 11ED70 80132C60 90590000 */       lbu $t9, ($v0) # gSceneData + 0
  /* 11ED74 80132C64 24080007 */     addiu $t0, $zero, 7
  /* 11ED78 80132C68 A0480000 */        sb $t0, ($v0) # gSceneData + 0
  /* 11ED7C 80132C6C 0C00171D */       jal func_80005C74
  /* 11ED80 80132C70 A0590001 */        sb $t9, 1($v0) # gSceneData + 1
  .L80132C74:
  /* 11ED84 80132C74 3C028013 */       lui $v0, %hi(D_ovl18_801331C4)
  /* 11ED88 80132C78 8C4231C4 */        lw $v0, %lo(D_ovl18_801331C4)($v0)
  /* 11ED8C 80132C7C 14400007 */      bnez $v0, .L80132C9C
  /* 11ED90 80132C80 00000000 */       nop 
  /* 11ED94 80132C84 0C0E4201 */       jal func_ovl1_80390804
  /* 11ED98 80132C88 24040808 */     addiu $a0, $zero, 0x808
  /* 11ED9C 80132C8C 14400009 */      bnez $v0, .L80132CB4
  /* 11EDA0 80132C90 AFA20020 */        sw $v0, 0x20($sp)
  /* 11EDA4 80132C94 3C028013 */       lui $v0, %hi(D_ovl18_801331C4)
  /* 11EDA8 80132C98 8C4231C4 */        lw $v0, %lo(D_ovl18_801331C4)($v0)
  .L80132C9C:
  /* 11EDAC 80132C9C 14400038 */      bnez $v0, .L80132D80
  /* 11EDB0 80132CA0 24040014 */     addiu $a0, $zero, 0x14
  /* 11EDB4 80132CA4 0C0E4254 */       jal func_ovl1_80390950
  /* 11EDB8 80132CA8 24050001 */     addiu $a1, $zero, 1
  /* 11EDBC 80132CAC 10400034 */      beqz $v0, .L80132D80
  /* 11EDC0 80132CB0 AFA20028 */        sw $v0, 0x28($sp)
  .L80132CB4:
  /* 11EDC4 80132CB4 0C009A70 */       jal func_800269C0
  /* 11EDC8 80132CB8 240400A4 */     addiu $a0, $zero, 0xa4
  /* 11EDCC 80132CBC 8FA90020 */        lw $t1, 0x20($sp)
  /* 11EDD0 80132CC0 8FAB0028 */        lw $t3, 0x28($sp)
  /* 11EDD4 80132CC4 240C00A0 */     addiu $t4, $zero, 0xa0
  /* 11EDD8 80132CC8 11200005 */      beqz $t1, .L80132CE0
  /* 11EDDC 80132CCC 3C068013 */       lui $a2, %hi(D_ovl18_801331B8)
  /* 11EDE0 80132CD0 240A000C */     addiu $t2, $zero, 0xc
  /* 11EDE4 80132CD4 3C018013 */       lui $at, %hi(D_ovl18_801331C4)
  /* 11EDE8 80132CD8 10000007 */         b .L80132CF8
  /* 11EDEC 80132CDC AC2A31C4 */        sw $t2, %lo(D_ovl18_801331C4)($at)
  .L80132CE0:
  /* 11EDF0 80132CE0 018B6823 */      subu $t5, $t4, $t3
  /* 11EDF4 80132CE4 24010007 */     addiu $at, $zero, 7
  /* 11EDF8 80132CE8 01A1001A */       div $zero, $t5, $at
  /* 11EDFC 80132CEC 00007012 */      mflo $t6
  /* 11EE00 80132CF0 3C018013 */       lui $at, %hi(D_ovl18_801331C4)
  /* 11EE04 80132CF4 AC2E31C4 */        sw $t6, %lo(D_ovl18_801331C4)($at)
  .L80132CF8:
  /* 11EE08 80132CF8 8CC631B8 */        lw $a2, %lo(D_ovl18_801331B8)($a2)
  /* 11EE0C 80132CFC 00002825 */        or $a1, $zero, $zero
  /* 11EE10 80132D00 00067880 */       sll $t7, $a2, 2
  /* 11EE14 80132D04 03AFC021 */      addu $t8, $sp, $t7
  /* 11EE18 80132D08 8F18002C */        lw $t8, 0x2c($t8)
  /* 11EE1C 80132D0C 0C04C6C9 */       jal func_ovl18_80131B24
  /* 11EE20 80132D10 8F040000 */        lw $a0, ($t8)
  /* 11EE24 80132D14 3C028013 */       lui $v0, %hi(D_ovl18_801331B8)
  /* 11EE28 80132D18 244231B8 */     addiu $v0, $v0, %lo(D_ovl18_801331B8)
  /* 11EE2C 80132D1C 8C460000 */        lw $a2, ($v0) # D_ovl18_801331B8 + 0
  /* 11EE30 80132D20 24190003 */     addiu $t9, $zero, 3
  /* 11EE34 80132D24 3C098013 */       lui $t1, %hi(D_ovl18_801331C4)
  /* 11EE38 80132D28 14C00003 */      bnez $a2, .L80132D38
  /* 11EE3C 80132D2C 24C8FFFF */     addiu $t0, $a2, -1
  /* 11EE40 80132D30 10000002 */         b .L80132D3C
  /* 11EE44 80132D34 AC590000 */        sw $t9, ($v0) # D_ovl18_801331B8 + 0
  .L80132D38:
  /* 11EE48 80132D38 AC480000 */        sw $t0, ($v0) # D_ovl18_801331B8 + 0
  .L80132D3C:
  /* 11EE4C 80132D3C 8C460000 */        lw $a2, ($v0) # D_ovl18_801331B8 + 0
  /* 11EE50 80132D40 14C00005 */      bnez $a2, .L80132D58
  /* 11EE54 80132D44 00066080 */       sll $t4, $a2, 2
  /* 11EE58 80132D48 8D2931C4 */        lw $t1, %lo(D_ovl18_801331C4)($t1)
  /* 11EE5C 80132D4C 3C018013 */       lui $at, %hi(D_ovl18_801331C4)
  /* 11EE60 80132D50 252A0008 */     addiu $t2, $t1, 8
  /* 11EE64 80132D54 AC2A31C4 */        sw $t2, %lo(D_ovl18_801331C4)($at)
  .L80132D58:
  /* 11EE68 80132D58 03AC5821 */      addu $t3, $sp, $t4
  /* 11EE6C 80132D5C 8D6B002C */        lw $t3, 0x2c($t3)
  /* 11EE70 80132D60 24050001 */     addiu $a1, $zero, 1
  /* 11EE74 80132D64 0C04C6C9 */       jal func_ovl18_80131B24
  /* 11EE78 80132D68 8D640000 */        lw $a0, ($t3)
  /* 11EE7C 80132D6C 3C048013 */       lui $a0, %hi(D_ovl18_801331BC)
  /* 11EE80 80132D70 0C0026A1 */       jal omEjectGObjCommon
  /* 11EE84 80132D74 8C8431BC */        lw $a0, %lo(D_ovl18_801331BC)($a0)
  /* 11EE88 80132D78 0C04C88F */       jal func_ovl18_8013223C
  /* 11EE8C 80132D7C 00000000 */       nop 
  .L80132D80:
  /* 11EE90 80132D80 3C028013 */       lui $v0, %hi(D_ovl18_801331C4)
  /* 11EE94 80132D84 8C4231C4 */        lw $v0, %lo(D_ovl18_801331C4)($v0)
  /* 11EE98 80132D88 14400007 */      bnez $v0, .L80132DA8
  /* 11EE9C 80132D8C 00000000 */       nop 
  /* 11EEA0 80132D90 0C0E4201 */       jal func_ovl1_80390804
  /* 11EEA4 80132D94 24040404 */     addiu $a0, $zero, 0x404
  /* 11EEA8 80132D98 14400009 */      bnez $v0, .L80132DC0
  /* 11EEAC 80132D9C AFA20020 */        sw $v0, 0x20($sp)
  /* 11EEB0 80132DA0 3C028013 */       lui $v0, %hi(D_ovl18_801331C4)
  /* 11EEB4 80132DA4 8C4231C4 */        lw $v0, %lo(D_ovl18_801331C4)($v0)
  .L80132DA8:
  /* 11EEB8 80132DA8 14400038 */      bnez $v0, .L80132E8C
  /* 11EEBC 80132DAC 2404FFEC */     addiu $a0, $zero, -0x14
  /* 11EEC0 80132DB0 0C0E4254 */       jal func_ovl1_80390950
  /* 11EEC4 80132DB4 00002825 */        or $a1, $zero, $zero
  /* 11EEC8 80132DB8 10400034 */      beqz $v0, .L80132E8C
  /* 11EECC 80132DBC AFA20028 */        sw $v0, 0x28($sp)
  .L80132DC0:
  /* 11EED0 80132DC0 0C009A70 */       jal func_800269C0
  /* 11EED4 80132DC4 240400A4 */     addiu $a0, $zero, 0xa4
  /* 11EED8 80132DC8 8FAD0020 */        lw $t5, 0x20($sp)
  /* 11EEDC 80132DCC 8FAF0028 */        lw $t7, 0x28($sp)
  /* 11EEE0 80132DD0 3C068013 */       lui $a2, %hi(D_ovl18_801331B8)
  /* 11EEE4 80132DD4 11A00005 */      beqz $t5, .L80132DEC
  /* 11EEE8 80132DD8 25F800A0 */     addiu $t8, $t7, 0xa0
  /* 11EEEC 80132DDC 240E000C */     addiu $t6, $zero, 0xc
  /* 11EEF0 80132DE0 3C018013 */       lui $at, %hi(D_ovl18_801331C4)
  /* 11EEF4 80132DE4 10000006 */         b .L80132E00
  /* 11EEF8 80132DE8 AC2E31C4 */        sw $t6, %lo(D_ovl18_801331C4)($at)
  .L80132DEC:
  /* 11EEFC 80132DEC 24010007 */     addiu $at, $zero, 7
  /* 11EF00 80132DF0 0301001A */       div $zero, $t8, $at
  /* 11EF04 80132DF4 0000C812 */      mflo $t9
  /* 11EF08 80132DF8 3C018013 */       lui $at, %hi(D_ovl18_801331C4)
  /* 11EF0C 80132DFC AC3931C4 */        sw $t9, %lo(D_ovl18_801331C4)($at)
  .L80132E00:
  /* 11EF10 80132E00 8CC631B8 */        lw $a2, %lo(D_ovl18_801331B8)($a2)
  /* 11EF14 80132E04 00002825 */        or $a1, $zero, $zero
  /* 11EF18 80132E08 00064080 */       sll $t0, $a2, 2
  /* 11EF1C 80132E0C 03A84821 */      addu $t1, $sp, $t0
  /* 11EF20 80132E10 8D29002C */        lw $t1, 0x2c($t1)
  /* 11EF24 80132E14 0C04C6C9 */       jal func_ovl18_80131B24
  /* 11EF28 80132E18 8D240000 */        lw $a0, ($t1)
  /* 11EF2C 80132E1C 3C028013 */       lui $v0, %hi(D_ovl18_801331B8)
  /* 11EF30 80132E20 244231B8 */     addiu $v0, $v0, %lo(D_ovl18_801331B8)
  /* 11EF34 80132E24 8C460000 */        lw $a2, ($v0) # D_ovl18_801331B8 + 0
  /* 11EF38 80132E28 24010003 */     addiu $at, $zero, 3
  /* 11EF3C 80132E2C 3C0C8013 */       lui $t4, %hi(D_ovl18_801331C4)
  /* 11EF40 80132E30 14C10003 */       bne $a2, $at, .L80132E40
  /* 11EF44 80132E34 24CA0001 */     addiu $t2, $a2, 1
  /* 11EF48 80132E38 10000002 */         b .L80132E44
  /* 11EF4C 80132E3C AC400000 */        sw $zero, ($v0) # D_ovl18_801331B8 + 0
  .L80132E40:
  /* 11EF50 80132E40 AC4A0000 */        sw $t2, ($v0) # D_ovl18_801331B8 + 0
  .L80132E44:
  /* 11EF54 80132E44 8C460000 */        lw $a2, ($v0) # D_ovl18_801331B8 + 0
  /* 11EF58 80132E48 24010003 */     addiu $at, $zero, 3
  /* 11EF5C 80132E4C 14C10005 */       bne $a2, $at, .L80132E64
  /* 11EF60 80132E50 00066880 */       sll $t5, $a2, 2
  /* 11EF64 80132E54 8D8C31C4 */        lw $t4, %lo(D_ovl18_801331C4)($t4)
  /* 11EF68 80132E58 3C018013 */       lui $at, %hi(D_ovl18_801331C4)
  /* 11EF6C 80132E5C 258B0008 */     addiu $t3, $t4, 8
  /* 11EF70 80132E60 AC2B31C4 */        sw $t3, %lo(D_ovl18_801331C4)($at)
  .L80132E64:
  /* 11EF74 80132E64 03AD7021 */      addu $t6, $sp, $t5
  /* 11EF78 80132E68 8DCE002C */        lw $t6, 0x2c($t6)
  /* 11EF7C 80132E6C 24050001 */     addiu $a1, $zero, 1
  /* 11EF80 80132E70 0C04C6C9 */       jal func_ovl18_80131B24
  /* 11EF84 80132E74 8DC40000 */        lw $a0, ($t6)
  /* 11EF88 80132E78 3C048013 */       lui $a0, %hi(D_ovl18_801331BC)
  /* 11EF8C 80132E7C 0C0026A1 */       jal omEjectGObjCommon
  /* 11EF90 80132E80 8C8431BC */        lw $a0, %lo(D_ovl18_801331BC)($a0)
  /* 11EF94 80132E84 0C04C88F */       jal func_ovl18_8013223C
  /* 11EF98 80132E88 00000000 */       nop 
  .L80132E8C:
  /* 11EF9C 80132E8C 8FBF0014 */        lw $ra, 0x14($sp)
  .L80132E90:
  /* 11EFA0 80132E90 27BD0040 */     addiu $sp, $sp, 0x40
  /* 11EFA4 80132E94 03E00008 */        jr $ra
  /* 11EFA8 80132E98 00000000 */       nop 

glabel func_ovl18_80132E9C
  /* 11EFAC 80132E9C 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 11EFB0 80132EA0 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 11EFB4 80132EA4 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 11EFB8 80132EA8 3C188013 */       lui $t8, %hi(D_ovl18_801331D0)
  /* 11EFBC 80132EAC AFBF001C */        sw $ra, 0x1c($sp)
  /* 11EFC0 80132EB0 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 11EFC4 80132EB4 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 11EFC8 80132EB8 271831D0 */     addiu $t8, $t8, %lo(D_ovl18_801331D0)
  /* 11EFCC 80132EBC 24190018 */     addiu $t9, $zero, 0x18
  /* 11EFD0 80132EC0 AFAE0030 */        sw $t6, 0x30($sp)
  /* 11EFD4 80132EC4 AFAF0034 */        sw $t7, 0x34($sp)
  /* 11EFD8 80132EC8 AFA00038 */        sw $zero, 0x38($sp)
  /* 11EFDC 80132ECC AFA0003C */        sw $zero, 0x3c($sp)
  /* 11EFE0 80132ED0 AFB80040 */        sw $t8, 0x40($sp)
  /* 11EFE4 80132ED4 AFB90044 */        sw $t9, 0x44($sp)
  /* 11EFE8 80132ED8 AFA00048 */        sw $zero, 0x48($sp)
  /* 11EFEC 80132EDC AFA0004C */        sw $zero, 0x4c($sp)
  /* 11EFF0 80132EE0 0C0337DE */       jal rldm_initialize
  /* 11EFF4 80132EE4 27A40030 */     addiu $a0, $sp, 0x30
  /* 11EFF8 80132EE8 3C03800A */       lui $v1, %hi(gSaveData)
  /* 11EFFC 80132EEC 246344E0 */     addiu $v1, $v1, %lo(gSaveData)
  /* 11F000 80132EF0 906205E2 */       lbu $v0, 0x5e2($v1) # gSaveData + 1506
  /* 11F004 80132EF4 3C048013 */       lui $a0, %hi(D_ovl18_80133080)
  /* 11F008 80132EF8 24843080 */     addiu $a0, $a0, %lo(D_ovl18_80133080)
  /* 11F00C 80132EFC 30480002 */      andi $t0, $v0, 2
  /* 11F010 80132F00 1500000B */      bnez $t0, .L80132F30
  /* 11F014 80132F04 00000000 */       nop 
  /* 11F018 80132F08 906905E3 */       lbu $t1, 0x5e3($v1) # gSaveData + 1507
  /* 11F01C 80132F0C 3C0A8004 */       lui $t2, %hi(gSPDmemOkay)
  /* 11F020 80132F10 2921002B */      slti $at, $t1, 0x2b
  /* 11F024 80132F14 14200006 */      bnez $at, .L80132F30
  /* 11F028 80132F18 00000000 */       nop 
  /* 11F02C 80132F1C 914A4D41 */       lbu $t2, %lo(gSPDmemOkay)($t2)
  /* 11F030 80132F20 344B0002 */       ori $t3, $v0, 2
  /* 11F034 80132F24 15400002 */      bnez $t2, .L80132F30
  /* 11F038 80132F28 00000000 */       nop 
  /* 11F03C 80132F2C A06B05E2 */        sb $t3, 0x5e2($v1) # gSaveData + 1506
  .L80132F30:
  /* 11F040 80132F30 0C0337BB */       jal rldm_bytes_need_to_load
  /* 11F044 80132F34 24050002 */     addiu $a1, $zero, 2
  /* 11F048 80132F38 00402025 */        or $a0, $v0, $zero
  /* 11F04C 80132F3C 0C001260 */       jal hal_alloc
  /* 11F050 80132F40 24050010 */     addiu $a1, $zero, 0x10
  /* 11F054 80132F44 3C048013 */       lui $a0, %hi(D_ovl18_80133080)
  /* 11F058 80132F48 3C068013 */       lui $a2, %hi(D_ovl18_80133290)
  /* 11F05C 80132F4C 24C63290 */     addiu $a2, $a2, %lo(D_ovl18_80133290)
  /* 11F060 80132F50 24843080 */     addiu $a0, $a0, %lo(D_ovl18_80133080)
  /* 11F064 80132F54 24050002 */     addiu $a1, $zero, 2
  /* 11F068 80132F58 0C033781 */       jal rldm_load_files_into
  /* 11F06C 80132F5C 00403825 */        or $a3, $v0, $zero
  /* 11F070 80132F60 3C058013 */       lui $a1, %hi(func_ovl18_801329A8)
  /* 11F074 80132F64 24A529A8 */     addiu $a1, $a1, %lo(func_ovl18_801329A8)
  /* 11F078 80132F68 00002025 */        or $a0, $zero, $zero
  /* 11F07C 80132F6C 00003025 */        or $a2, $zero, $zero
  /* 11F080 80132F70 0C00265A */       jal omMakeGObjCommon
  /* 11F084 80132F74 3C078000 */       lui $a3, 0x8000
  /* 11F088 80132F78 00002025 */        or $a0, $zero, $zero
  /* 11F08C 80132F7C 3C058000 */       lui $a1, 0x8000
  /* 11F090 80132F80 24060064 */     addiu $a2, $zero, 0x64
  /* 11F094 80132F84 00003825 */        or $a3, $zero, $zero
  /* 11F098 80132F88 0C002E7F */       jal func_8000B9FC
  /* 11F09C 80132F8C AFA00010 */        sw $zero, 0x10($sp)
  /* 11F0A0 80132F90 0C04CA44 */       jal func_ovl18_80132910
  /* 11F0A4 80132F94 00000000 */       nop 
  /* 11F0A8 80132F98 0C04CA1C */       jal func_ovl18_80132870
  /* 11F0AC 80132F9C 00000000 */       nop 
  /* 11F0B0 80132FA0 0C04C9F4 */       jal func_ovl18_801327D0
  /* 11F0B4 80132FA4 00000000 */       nop 
  /* 11F0B8 80132FA8 0C04C9CC */       jal func_ovl18_80132730
  /* 11F0BC 80132FAC 00000000 */       nop 
  /* 11F0C0 80132FB0 0C04C9A4 */       jal func_ovl18_80132690
  /* 11F0C4 80132FB4 00000000 */       nop 
  /* 11F0C8 80132FB8 0C04C93F */       jal func_ovl18_801324FC
  /* 11F0CC 80132FBC 00000000 */       nop 
  /* 11F0D0 80132FC0 0C04C8EC */       jal func_ovl18_801323B0
  /* 11F0D4 80132FC4 00000000 */       nop 
  /* 11F0D8 80132FC8 0C04C78D */       jal func_ovl18_80131E34
  /* 11F0DC 80132FCC 00000000 */       nop 
  /* 11F0E0 80132FD0 0C04C7C3 */       jal func_ovl18_80131F0C
  /* 11F0E4 80132FD4 00000000 */       nop 
  /* 11F0E8 80132FD8 0C04C7FA */       jal func_ovl18_80131FE8
  /* 11F0EC 80132FDC 00000000 */       nop 
  /* 11F0F0 80132FE0 0C04C83E */       jal func_ovl18_801320F8
  /* 11F0F4 80132FE4 00000000 */       nop 
  /* 11F0F8 80132FE8 0C04C88F */       jal func_ovl18_8013223C
  /* 11F0FC 80132FEC 00000000 */       nop 
  /* 11F100 80132FF0 3C0C800A */       lui $t4, %hi((gSceneData + 0x1))
  /* 11F104 80132FF4 918C4AD1 */       lbu $t4, %lo((gSceneData + 0x1))($t4)
  /* 11F108 80132FF8 24010007 */     addiu $at, $zero, 7
  /* 11F10C 80132FFC 00002025 */        or $a0, $zero, $zero
  /* 11F110 80133000 51810004 */      beql $t4, $at, .L80133014
  /* 11F114 80133004 8FBF001C */        lw $ra, 0x1c($sp)
  /* 11F118 80133008 0C0082AD */       jal func_80020AB4
  /* 11F11C 8013300C 2405002C */     addiu $a1, $zero, 0x2c
  /* 11F120 80133010 8FBF001C */        lw $ra, 0x1c($sp)
  .L80133014:
  /* 11F124 80133014 27BD0050 */     addiu $sp, $sp, 0x50
  /* 11F128 80133018 03E00008 */        jr $ra
  /* 11F12C 8013301C 00000000 */       nop 

glabel menu_1p_entry
  /* 11F130 80133020 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 11F134 80133024 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11F138 80133028 3C048013 */       lui $a0, %hi(D_ovl18_801330F0)
  /* 11F13C 8013302C 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 11F140 80133030 248430F0 */     addiu $a0, $a0, %lo(D_ovl18_801330F0)
  /* 11F144 80133034 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11F148 80133038 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 11F14C 8013303C 0C001C09 */       jal func_80007024
  /* 11F150 80133040 AC8F000C */        sw $t7, 0xc($a0) # D_ovl18_801330F0 + 12
  /* 11F154 80133044 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 11F158 80133048 3C198013 */       lui $t9, %hi(D_NF_801332A0)
  /* 11F15C 8013304C 3C048013 */       lui $a0, %hi(D_ovl18_8013310C)
  /* 11F160 80133050 273932A0 */     addiu $t9, $t9, %lo(D_NF_801332A0)
  /* 11F164 80133054 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 11F168 80133058 2484310C */     addiu $a0, $a0, %lo(D_ovl18_8013310C)
  /* 11F16C 8013305C 03194023 */      subu $t0, $t8, $t9
  /* 11F170 80133060 0C001A0F */       jal func_8000683C
  /* 11F174 80133064 AC880010 */        sw $t0, 0x10($a0) # D_ovl18_8013310C + 16
  /* 11F178 80133068 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11F17C 8013306C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11F180 80133070 03E00008 */        jr $ra
  /* 11F184 80133074 00000000 */       nop 

  /* 11F188 80133078 00000000 */       nop 
  /* 11F18C 8013307C 00000000 */       nop 

# Likely start of new file
#glabel D_ovl18_80133080   # Routine parsed as data
#  /* 11F190 80133080 00000000 */       nop 
#  /* 11F194 80133084 00000002 */       srl $zero, $zero, 0
#glabel D_ovl18_80133088   # Routine parsed as data
#  /* 11F198 80133088 20202000 */      addi $zero, $at, 0x2000
#  /* 11F19C 8013308C 20202000 */      addi $zero, $at, 0x2000
#glabel D_ovl18_80133090   # Routine parsed as data
#  /* 11F1A0 80133090 FFFFFF00 */        sd $ra, -0x100($ra)
#  /* 11F1A4 80133094 FFFFFF00 */        sd $ra, -0x100($ra)
