.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80131B00 -> 0x801340B0

glabel func_ovl33_80131B00
  /* 15DB50 80131B00 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 15DB54 80131B04 AFBF0014 */        sw $ra, 0x14($sp)
  /* 15DB58 80131B08 8C830000 */        lw $v1, ($a0)
  /* 15DB5C 80131B0C 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 15DB60 80131B10 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 15DB64 80131B14 246E0008 */     addiu $t6, $v1, 8
  /* 15DB68 80131B18 AC8E0000 */        sw $t6, ($a0)
  /* 15DB6C 80131B1C 3C180002 */       lui $t8, 2
  /* 15DB70 80131B20 AC780004 */        sw $t8, 4($v1)
  /* 15DB74 80131B24 AC6F0000 */        sw $t7, ($v1)
  /* 15DB78 80131B28 0C0E4147 */       jal func_ovl1_8039051C
  /* 15DB7C 80131B2C AFA40028 */        sw $a0, 0x28($sp)
  /* 15DB80 80131B30 0C0E414A */       jal func_ovl1_80390528
  /* 15DB84 80131B34 E7A0001C */      swc1 $f0, 0x1c($sp)
  /* 15DB88 80131B38 44060000 */      mfc1 $a2, $f0
  /* 15DB8C 80131B3C 8FA40028 */        lw $a0, 0x28($sp)
  /* 15DB90 80131B40 0C03F2DC */       jal func_ovl2_800FCB70
  /* 15DB94 80131B44 8FA5001C */        lw $a1, 0x1c($sp)
  /* 15DB98 80131B48 8FBF0014 */        lw $ra, 0x14($sp)
  /* 15DB9C 80131B4C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 15DBA0 80131B50 03E00008 */        jr $ra
  /* 15DBA4 80131B54 00000000 */       nop 

glabel func_ovl33_80131B58
  /* 15DBA8 80131B58 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 15DBAC 80131B5C 3C0E8013 */       lui $t6, %hi(D_ovl33_80136250)
  /* 15DBB0 80131B60 27A30000 */     addiu $v1, $sp, 0
  /* 15DBB4 80131B64 25CE6250 */     addiu $t6, $t6, %lo(D_ovl33_80136250)
  /* 15DBB8 80131B68 25C80030 */     addiu $t0, $t6, 0x30
  /* 15DBBC 80131B6C 0060C825 */        or $t9, $v1, $zero
  .L80131B70:
  /* 15DBC0 80131B70 8DD80000 */        lw $t8, ($t6) # D_ovl33_80136250 + 0
  /* 15DBC4 80131B74 25CE000C */     addiu $t6, $t6, 0xc
  /* 15DBC8 80131B78 2739000C */     addiu $t9, $t9, 0xc
  /* 15DBCC 80131B7C AF38FFF4 */        sw $t8, -0xc($t9)
  /* 15DBD0 80131B80 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl33_80136250 + -8
  /* 15DBD4 80131B84 AF2FFFF8 */        sw $t7, -8($t9)
  /* 15DBD8 80131B88 8DD8FFFC */        lw $t8, -4($t6) # D_ovl33_80136250 + -4
  /* 15DBDC 80131B8C 15C8FFF8 */       bne $t6, $t0, .L80131B70
  /* 15DBE0 80131B90 AF38FFFC */        sw $t8, -4($t9)
  /* 15DBE4 80131B94 00044880 */       sll $t1, $a0, 2
  /* 15DBE8 80131B98 00695021 */      addu $t2, $v1, $t1
  /* 15DBEC 80131B9C 8D420000 */        lw $v0, ($t2)
  /* 15DBF0 80131BA0 03E00008 */        jr $ra
  /* 15DBF4 80131BA4 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl33_80131BA8
  /* 15DBF8 80131BA8 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 15DBFC 80131BAC 3C0E8013 */       lui $t6, %hi(D_ovl33_80136280)
  /* 15DC00 80131BB0 27A30000 */     addiu $v1, $sp, 0
  /* 15DC04 80131BB4 25CE6280 */     addiu $t6, $t6, %lo(D_ovl33_80136280)
  /* 15DC08 80131BB8 25C80030 */     addiu $t0, $t6, 0x30
  /* 15DC0C 80131BBC 0060C825 */        or $t9, $v1, $zero
  .L80131BC0:
  /* 15DC10 80131BC0 8DD80000 */        lw $t8, ($t6) # D_ovl33_80136280 + 0
  /* 15DC14 80131BC4 25CE000C */     addiu $t6, $t6, 0xc
  /* 15DC18 80131BC8 2739000C */     addiu $t9, $t9, 0xc
  /* 15DC1C 80131BCC AF38FFF4 */        sw $t8, -0xc($t9)
  /* 15DC20 80131BD0 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl33_80136280 + -8
  /* 15DC24 80131BD4 AF2FFFF8 */        sw $t7, -8($t9)
  /* 15DC28 80131BD8 8DD8FFFC */        lw $t8, -4($t6) # D_ovl33_80136280 + -4
  /* 15DC2C 80131BDC 15C8FFF8 */       bne $t6, $t0, .L80131BC0
  /* 15DC30 80131BE0 AF38FFFC */        sw $t8, -4($t9)
  /* 15DC34 80131BE4 00044880 */       sll $t1, $a0, 2
  /* 15DC38 80131BE8 00695021 */      addu $t2, $v1, $t1
  /* 15DC3C 80131BEC 8D420000 */        lw $v0, ($t2)
  /* 15DC40 80131BF0 03E00008 */        jr $ra
  /* 15DC44 80131BF4 27BD0030 */     addiu $sp, $sp, 0x30

  /* 15DC48 80131BF8 03E00008 */        jr $ra
  /* 15DC4C 80131BFC 00000000 */       nop 

glabel func_ovl33_80131C00
  /* 15DC50 80131C00 27BDFFA8 */     addiu $sp, $sp, -0x58
  /* 15DC54 80131C04 3C0F8013 */       lui $t7, %hi(D_ovl33_801362B0)
  /* 15DC58 80131C08 25EF62B0 */     addiu $t7, $t7, %lo(D_ovl33_801362B0)
  /* 15DC5C 80131C0C AFBF001C */        sw $ra, 0x1c($sp)
  /* 15DC60 80131C10 AFA40058 */        sw $a0, 0x58($sp)
  /* 15DC64 80131C14 25E80030 */     addiu $t0, $t7, 0x30
  /* 15DC68 80131C18 27AE0020 */     addiu $t6, $sp, 0x20
  .L80131C1C:
  /* 15DC6C 80131C1C 8DF90000 */        lw $t9, ($t7) # D_ovl33_801362B0 + 0
  /* 15DC70 80131C20 25EF000C */     addiu $t7, $t7, 0xc
  /* 15DC74 80131C24 25CE000C */     addiu $t6, $t6, 0xc
  /* 15DC78 80131C28 ADD9FFF4 */        sw $t9, -0xc($t6)
  /* 15DC7C 80131C2C 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl33_801362B0 + -8
  /* 15DC80 80131C30 ADD8FFF8 */        sw $t8, -8($t6)
  /* 15DC84 80131C34 8DF9FFFC */        lw $t9, -4($t7) # D_ovl33_801362B0 + -4
  /* 15DC88 80131C38 15E8FFF8 */       bne $t7, $t0, .L80131C1C
  /* 15DC8C 80131C3C ADD9FFFC */        sw $t9, -4($t6)
  /* 15DC90 80131C40 00002025 */        or $a0, $zero, $zero
  /* 15DC94 80131C44 00002825 */        or $a1, $zero, $zero
  /* 15DC98 80131C48 24060011 */     addiu $a2, $zero, 0x11
  /* 15DC9C 80131C4C 0C00265A */       jal omMakeGObjCommon
  /* 15DCA0 80131C50 3C078000 */       lui $a3, 0x8000
  /* 15DCA4 80131C54 3C018013 */       lui $at, %hi(D_ovl33_80136604)
  /* 15DCA8 80131C58 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 15DCAC 80131C5C 2409FFFF */     addiu $t1, $zero, -1
  /* 15DCB0 80131C60 AC226604 */        sw $v0, %lo(D_ovl33_80136604)($at)
  /* 15DCB4 80131C64 AFA20054 */        sw $v0, 0x54($sp)
  /* 15DCB8 80131C68 AFA90010 */        sw $t1, 0x10($sp)
  /* 15DCBC 80131C6C 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 15DCC0 80131C70 00402025 */        or $a0, $v0, $zero
  /* 15DCC4 80131C74 2406001A */     addiu $a2, $zero, 0x1a
  /* 15DCC8 80131C78 0C00277D */       jal func_80009DF4
  /* 15DCCC 80131C7C 3C078000 */       lui $a3, 0x8000
  /* 15DCD0 80131C80 3C0A8013 */       lui $t2, %hi(D_ovl33_80136A78)
  /* 15DCD4 80131C84 8D4A6A78 */        lw $t2, %lo(D_ovl33_80136A78)($t2)
  /* 15DCD8 80131C88 3C0B0003 */       lui $t3, %hi(D_NF_00030888)
  /* 15DCDC 80131C8C 256B0888 */     addiu $t3, $t3, %lo(D_NF_00030888)
  /* 15DCE0 80131C90 8FA40054 */        lw $a0, 0x54($sp)
  /* 15DCE4 80131C94 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 15DCE8 80131C98 014B2821 */      addu $a1, $t2, $t3
  /* 15DCEC 80131C9C 944C0024 */       lhu $t4, 0x24($v0)
  /* 15DCF0 80131CA0 3C0142FC */       lui $at, (0x42FC0000 >> 16) # 126.0
  /* 15DCF4 80131CA4 44812000 */      mtc1 $at, $f4 # 126.0 to cop1
  /* 15DCF8 80131CA8 3C014258 */       lui $at, (0x42580000 >> 16) # 54.0
  /* 15DCFC 80131CAC 44813000 */      mtc1 $at, $f6 # 54.0 to cop1
  /* 15DD00 80131CB0 3188FFDF */      andi $t0, $t4, 0xffdf
  /* 15DD04 80131CB4 A4480024 */        sh $t0, 0x24($v0)
  /* 15DD08 80131CB8 350F0001 */       ori $t7, $t0, 1
  /* 15DD0C 80131CBC A44F0024 */        sh $t7, 0x24($v0)
  /* 15DD10 80131CC0 A0400028 */        sb $zero, 0x28($v0)
  /* 15DD14 80131CC4 A0400029 */        sb $zero, 0x29($v0)
  /* 15DD18 80131CC8 A040002A */        sb $zero, 0x2a($v0)
  /* 15DD1C 80131CCC E4440058 */      swc1 $f4, 0x58($v0)
  /* 15DD20 80131CD0 E446005C */      swc1 $f6, 0x5c($v0)
  /* 15DD24 80131CD4 8FAE0058 */        lw $t6, 0x58($sp)
  /* 15DD28 80131CD8 3C098013 */       lui $t1, %hi(D_ovl33_80136A78)
  /* 15DD2C 80131CDC 8D296A78 */        lw $t1, %lo(D_ovl33_80136A78)($t1)
  /* 15DD30 80131CE0 000EC080 */       sll $t8, $t6, 2
  /* 15DD34 80131CE4 03B8C821 */      addu $t9, $sp, $t8
  /* 15DD38 80131CE8 8F390020 */        lw $t9, 0x20($t9)
  /* 15DD3C 80131CEC 8FA40054 */        lw $a0, 0x54($sp)
  /* 15DD40 80131CF0 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 15DD44 80131CF4 03292821 */      addu $a1, $t9, $t1
  /* 15DD48 80131CF8 944A0024 */       lhu $t2, 0x24($v0)
  /* 15DD4C 80131CFC 3C0142FC */       lui $at, (0x42FC0000 >> 16) # 126.0
  /* 15DD50 80131D00 44814000 */      mtc1 $at, $f8 # 126.0 to cop1
  /* 15DD54 80131D04 3C014258 */       lui $at, (0x42580000 >> 16) # 54.0
  /* 15DD58 80131D08 44815000 */      mtc1 $at, $f10 # 54.0 to cop1
  /* 15DD5C 80131D0C 240300FF */     addiu $v1, $zero, 0xff
  /* 15DD60 80131D10 314CFFDF */      andi $t4, $t2, 0xffdf
  /* 15DD64 80131D14 A44C0024 */        sh $t4, 0x24($v0)
  /* 15DD68 80131D18 358D0001 */       ori $t5, $t4, 1
  /* 15DD6C 80131D1C A44D0024 */        sh $t5, 0x24($v0)
  /* 15DD70 80131D20 A0430028 */        sb $v1, 0x28($v0)
  /* 15DD74 80131D24 A0430029 */        sb $v1, 0x29($v0)
  /* 15DD78 80131D28 A043002A */        sb $v1, 0x2a($v0)
  /* 15DD7C 80131D2C E4480058 */      swc1 $f8, 0x58($v0)
  /* 15DD80 80131D30 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 15DD84 80131D34 8FBF001C */        lw $ra, 0x1c($sp)
  /* 15DD88 80131D38 27BD0058 */     addiu $sp, $sp, 0x58
  /* 15DD8C 80131D3C 03E00008 */        jr $ra
  /* 15DD90 80131D40 00000000 */       nop 

glabel func_ovl33_80131D44
  /* 15DD94 80131D44 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 15DD98 80131D48 AFBF0024 */        sw $ra, 0x24($sp)
  /* 15DD9C 80131D4C AFB00020 */        sw $s0, 0x20($sp)
  /* 15DDA0 80131D50 00002025 */        or $a0, $zero, $zero
  /* 15DDA4 80131D54 00002825 */        or $a1, $zero, $zero
  /* 15DDA8 80131D58 24060012 */     addiu $a2, $zero, 0x12
  /* 15DDAC 80131D5C 0C00265A */       jal omMakeGObjCommon
  /* 15DDB0 80131D60 3C078000 */       lui $a3, 0x8000
  /* 15DDB4 80131D64 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 15DDB8 80131D68 240EFFFF */     addiu $t6, $zero, -1
  /* 15DDBC 80131D6C 00408025 */        or $s0, $v0, $zero
  /* 15DDC0 80131D70 AFAE0010 */        sw $t6, 0x10($sp)
  /* 15DDC4 80131D74 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 15DDC8 80131D78 00402025 */        or $a0, $v0, $zero
  /* 15DDCC 80131D7C 2406001B */     addiu $a2, $zero, 0x1b
  /* 15DDD0 80131D80 0C00277D */       jal func_80009DF4
  /* 15DDD4 80131D84 3C078000 */       lui $a3, 0x8000
  /* 15DDD8 80131D88 3C0F8013 */       lui $t7, %hi(D_ovl33_80136A7C)
  /* 15DDDC 80131D8C 8DEF6A7C */        lw $t7, %lo(D_ovl33_80136A7C)($t7)
  /* 15DDE0 80131D90 3C180000 */       lui $t8, %hi(D_NF_00000B40)
  /* 15DDE4 80131D94 27180B40 */     addiu $t8, $t8, %lo(D_NF_00000B40)
  /* 15DDE8 80131D98 02002025 */        or $a0, $s0, $zero
  /* 15DDEC 80131D9C 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 15DDF0 80131DA0 01F82821 */      addu $a1, $t7, $t8
  /* 15DDF4 80131DA4 94590024 */       lhu $t9, 0x24($v0)
  /* 15DDF8 80131DA8 3C0141B8 */       lui $at, (0x41B80000 >> 16) # 23.0
  /* 15DDFC 80131DAC 44812000 */      mtc1 $at, $f4 # 23.0 to cop1
  /* 15DE00 80131DB0 3C014188 */       lui $at, (0x41880000 >> 16) # 17.0
  /* 15DE04 80131DB4 44813000 */      mtc1 $at, $f6 # 17.0 to cop1
  /* 15DE08 80131DB8 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 15DE0C 80131DBC A4490024 */        sh $t1, 0x24($v0)
  /* 15DE10 80131DC0 352A0001 */       ori $t2, $t1, 1
  /* 15DE14 80131DC4 240B005F */     addiu $t3, $zero, 0x5f
  /* 15DE18 80131DC8 240C0058 */     addiu $t4, $zero, 0x58
  /* 15DE1C 80131DCC 240D0046 */     addiu $t5, $zero, 0x46
  /* 15DE20 80131DD0 A44A0024 */        sh $t2, 0x24($v0)
  /* 15DE24 80131DD4 A04B0028 */        sb $t3, 0x28($v0)
  /* 15DE28 80131DD8 A04C0029 */        sb $t4, 0x29($v0)
  /* 15DE2C 80131DDC A04D002A */        sb $t5, 0x2a($v0)
  /* 15DE30 80131DE0 3C0E8013 */       lui $t6, %hi(D_ovl33_80136A78)
  /* 15DE34 80131DE4 E4440058 */      swc1 $f4, 0x58($v0)
  /* 15DE38 80131DE8 E446005C */      swc1 $f6, 0x5c($v0)
  /* 15DE3C 80131DEC 8DCE6A78 */        lw $t6, %lo(D_ovl33_80136A78)($t6)
  /* 15DE40 80131DF0 3C0F0000 */       lui $t7, %hi(D_NF_00000630)
  /* 15DE44 80131DF4 25EF0630 */     addiu $t7, $t7, %lo(D_NF_00000630)
  /* 15DE48 80131DF8 02002025 */        or $a0, $s0, $zero
  /* 15DE4C 80131DFC 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 15DE50 80131E00 01CF2821 */      addu $a1, $t6, $t7
  /* 15DE54 80131E04 94580024 */       lhu $t8, 0x24($v0)
  /* 15DE58 80131E08 3C01431D */       lui $at, (0x431D0000 >> 16) # 157.0
  /* 15DE5C 80131E0C 44814000 */      mtc1 $at, $f8 # 157.0 to cop1
  /* 15DE60 80131E10 3C0141B8 */       lui $at, (0x41B80000 >> 16) # 23.0
  /* 15DE64 80131E14 44815000 */      mtc1 $at, $f10 # 23.0 to cop1
  /* 15DE68 80131E18 3308FFDF */      andi $t0, $t8, 0xffdf
  /* 15DE6C 80131E1C A4480024 */        sh $t0, 0x24($v0)
  /* 15DE70 80131E20 35090001 */       ori $t1, $t0, 1
  /* 15DE74 80131E24 240A00F2 */     addiu $t2, $zero, 0xf2
  /* 15DE78 80131E28 240B00C7 */     addiu $t3, $zero, 0xc7
  /* 15DE7C 80131E2C 240C000D */     addiu $t4, $zero, 0xd
  /* 15DE80 80131E30 A4490024 */        sh $t1, 0x24($v0)
  /* 15DE84 80131E34 A04A0028 */        sb $t2, 0x28($v0)
  /* 15DE88 80131E38 A04B0029 */        sb $t3, 0x29($v0)
  /* 15DE8C 80131E3C A04C002A */        sb $t4, 0x2a($v0)
  /* 15DE90 80131E40 A0400060 */        sb $zero, 0x60($v0)
  /* 15DE94 80131E44 A0400061 */        sb $zero, 0x61($v0)
  /* 15DE98 80131E48 A0400062 */        sb $zero, 0x62($v0)
  /* 15DE9C 80131E4C 3C0D8013 */       lui $t5, %hi(D_ovl33_80136A7C)
  /* 15DEA0 80131E50 E4480058 */      swc1 $f8, 0x58($v0)
  /* 15DEA4 80131E54 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 15DEA8 80131E58 8DAD6A7C */        lw $t5, %lo(D_ovl33_80136A7C)($t5)
  /* 15DEAC 80131E5C 3C0E0000 */       lui $t6, %hi(D_NF_00000BE0)
  /* 15DEB0 80131E60 25CE0BE0 */     addiu $t6, $t6, %lo(D_NF_00000BE0)
  /* 15DEB4 80131E64 02002025 */        or $a0, $s0, $zero
  /* 15DEB8 80131E68 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 15DEBC 80131E6C 01AE2821 */      addu $a1, $t5, $t6
  /* 15DEC0 80131E70 944F0024 */       lhu $t7, 0x24($v0)
  /* 15DEC4 80131E74 3C018013 */       lui $at, %hi(D_ovl33_801365B0)
  /* 15DEC8 80131E78 240900E3 */     addiu $t1, $zero, 0xe3
  /* 15DECC 80131E7C 31F9FFDF */      andi $t9, $t7, 0xffdf
  /* 15DED0 80131E80 A4590024 */        sh $t9, 0x24($v0)
  /* 15DED4 80131E84 37280001 */       ori $t0, $t9, 1
  /* 15DED8 80131E88 A4480024 */        sh $t0, 0x24($v0)
  /* 15DEDC 80131E8C C43065B0 */      lwc1 $f16, %lo(D_ovl33_801365B0)($at)
  /* 15DEE0 80131E90 3C014220 */       lui $at, (0x42200000 >> 16) # 40.0
  /* 15DEE4 80131E94 44819000 */      mtc1 $at, $f18 # 40.0 to cop1
  /* 15DEE8 80131E98 240A007D */     addiu $t2, $zero, 0x7d
  /* 15DEEC 80131E9C 240B000C */     addiu $t3, $zero, 0xc
  /* 15DEF0 80131EA0 A0490028 */        sb $t1, 0x28($v0)
  /* 15DEF4 80131EA4 A04A0029 */        sb $t2, 0x29($v0)
  /* 15DEF8 80131EA8 A04B002A */        sb $t3, 0x2a($v0)
  /* 15DEFC 80131EAC 3C0C8013 */       lui $t4, %hi(D_ovl33_80136A7C)
  /* 15DF00 80131EB0 E4500058 */      swc1 $f16, 0x58($v0)
  /* 15DF04 80131EB4 E452005C */      swc1 $f18, 0x5c($v0)
  /* 15DF08 80131EB8 8D8C6A7C */        lw $t4, %lo(D_ovl33_80136A7C)($t4)
  /* 15DF0C 80131EBC 3C0D0000 */       lui $t5, %hi(D_NF_00000C80)
  /* 15DF10 80131EC0 25AD0C80 */     addiu $t5, $t5, %lo(D_NF_00000C80)
  /* 15DF14 80131EC4 02002025 */        or $a0, $s0, $zero
  /* 15DF18 80131EC8 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 15DF1C 80131ECC 018D2821 */      addu $a1, $t4, $t5
  /* 15DF20 80131ED0 944E0024 */       lhu $t6, 0x24($v0)
  /* 15DF24 80131ED4 3C018013 */       lui $at, %hi(D_ovl33_801365B4)
  /* 15DF28 80131ED8 240800E3 */     addiu $t0, $zero, 0xe3
  /* 15DF2C 80131EDC 31D8FFDF */      andi $t8, $t6, 0xffdf
  /* 15DF30 80131EE0 A4580024 */        sh $t8, 0x24($v0)
  /* 15DF34 80131EE4 37190001 */       ori $t9, $t8, 1
  /* 15DF38 80131EE8 A4590024 */        sh $t9, 0x24($v0)
  /* 15DF3C 80131EEC C42465B4 */      lwc1 $f4, %lo(D_ovl33_801365B4)($at)
  /* 15DF40 80131EF0 3C014220 */       lui $at, (0x42200000 >> 16) # 40.0
  /* 15DF44 80131EF4 44813000 */      mtc1 $at, $f6 # 40.0 to cop1
  /* 15DF48 80131EF8 2409007D */     addiu $t1, $zero, 0x7d
  /* 15DF4C 80131EFC 240A000C */     addiu $t2, $zero, 0xc
  /* 15DF50 80131F00 A0480028 */        sb $t0, 0x28($v0)
  /* 15DF54 80131F04 A0490029 */        sb $t1, 0x29($v0)
  /* 15DF58 80131F08 A04A002A */        sb $t2, 0x2a($v0)
  /* 15DF5C 80131F0C E4440058 */      swc1 $f4, 0x58($v0)
  /* 15DF60 80131F10 E446005C */      swc1 $f6, 0x5c($v0)
  /* 15DF64 80131F14 8FBF0024 */        lw $ra, 0x24($sp)
  /* 15DF68 80131F18 8FB00020 */        lw $s0, 0x20($sp)
  /* 15DF6C 80131F1C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 15DF70 80131F20 03E00008 */        jr $ra
  /* 15DF74 80131F24 00000000 */       nop 

glabel func_ovl33_80131F28
  /* 15DF78 80131F28 27BDFF40 */     addiu $sp, $sp, -0xc0
  /* 15DF7C 80131F2C 3C0F8013 */       lui $t7, %hi(D_ovl33_801362E0)
  /* 15DF80 80131F30 25EF62E0 */     addiu $t7, $t7, %lo(D_ovl33_801362E0)
  /* 15DF84 80131F34 AFBF0024 */        sw $ra, 0x24($sp)
  /* 15DF88 80131F38 AFB00020 */        sw $s0, 0x20($sp)
  /* 15DF8C 80131F3C AFA400C0 */        sw $a0, 0xc0($sp)
  /* 15DF90 80131F40 25E80030 */     addiu $t0, $t7, 0x30
  /* 15DF94 80131F44 27AE008C */     addiu $t6, $sp, 0x8c
  .L80131F48:
  /* 15DF98 80131F48 8DF90000 */        lw $t9, ($t7) # D_ovl33_801362E0 + 0
  /* 15DF9C 80131F4C 25EF000C */     addiu $t7, $t7, 0xc
  /* 15DFA0 80131F50 25CE000C */     addiu $t6, $t6, 0xc
  /* 15DFA4 80131F54 ADD9FFF4 */        sw $t9, -0xc($t6)
  /* 15DFA8 80131F58 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl33_801362E0 + -8
  /* 15DFAC 80131F5C ADD8FFF8 */        sw $t8, -8($t6)
  /* 15DFB0 80131F60 8DF9FFFC */        lw $t9, -4($t7) # D_ovl33_801362E0 + -4
  /* 15DFB4 80131F64 15E8FFF8 */       bne $t7, $t0, .L80131F48
  /* 15DFB8 80131F68 ADD9FFFC */        sw $t9, -4($t6)
  /* 15DFBC 80131F6C 3C0A8013 */       lui $t2, %hi(D_ovl33_80136310)
  /* 15DFC0 80131F70 254A6310 */     addiu $t2, $t2, %lo(D_ovl33_80136310)
  /* 15DFC4 80131F74 254D0030 */     addiu $t5, $t2, 0x30
  /* 15DFC8 80131F78 27A9005C */     addiu $t1, $sp, 0x5c
  .L80131F7C:
  /* 15DFCC 80131F7C 8D4C0000 */        lw $t4, ($t2) # D_ovl33_80136310 + 0
  /* 15DFD0 80131F80 254A000C */     addiu $t2, $t2, 0xc
  /* 15DFD4 80131F84 2529000C */     addiu $t1, $t1, 0xc
  /* 15DFD8 80131F88 AD2CFFF4 */        sw $t4, -0xc($t1)
  /* 15DFDC 80131F8C 8D4BFFF8 */        lw $t3, -8($t2) # D_ovl33_80136310 + -8
  /* 15DFE0 80131F90 AD2BFFF8 */        sw $t3, -8($t1)
  /* 15DFE4 80131F94 8D4CFFFC */        lw $t4, -4($t2) # D_ovl33_80136310 + -4
  /* 15DFE8 80131F98 154DFFF8 */       bne $t2, $t5, .L80131F7C
  /* 15DFEC 80131F9C AD2CFFFC */        sw $t4, -4($t1)
  /* 15DFF0 80131FA0 3C0F8013 */       lui $t7, %hi(D_ovl33_80136340)
  /* 15DFF4 80131FA4 25EF6340 */     addiu $t7, $t7, %lo(D_ovl33_80136340)
  /* 15DFF8 80131FA8 25F90030 */     addiu $t9, $t7, 0x30
  /* 15DFFC 80131FAC 27A8002C */     addiu $t0, $sp, 0x2c
  .L80131FB0:
  /* 15E000 80131FB0 8DF80000 */        lw $t8, ($t7) # D_ovl33_80136340 + 0
  /* 15E004 80131FB4 25EF000C */     addiu $t7, $t7, 0xc
  /* 15E008 80131FB8 2508000C */     addiu $t0, $t0, 0xc
  /* 15E00C 80131FBC AD18FFF4 */        sw $t8, -0xc($t0)
  /* 15E010 80131FC0 8DEEFFF8 */        lw $t6, -8($t7) # D_ovl33_80136340 + -8
  /* 15E014 80131FC4 AD0EFFF8 */        sw $t6, -8($t0)
  /* 15E018 80131FC8 8DF8FFFC */        lw $t8, -4($t7) # D_ovl33_80136340 + -4
  /* 15E01C 80131FCC 15F9FFF8 */       bne $t7, $t9, .L80131FB0
  /* 15E020 80131FD0 AD18FFFC */        sw $t8, -4($t0)
  /* 15E024 80131FD4 00002025 */        or $a0, $zero, $zero
  /* 15E028 80131FD8 00002825 */        or $a1, $zero, $zero
  /* 15E02C 80131FDC 24060013 */     addiu $a2, $zero, 0x13
  /* 15E030 80131FE0 0C00265A */       jal omMakeGObjCommon
  /* 15E034 80131FE4 3C078000 */       lui $a3, 0x8000
  /* 15E038 80131FE8 8FA300C0 */        lw $v1, 0xc0($sp)
  /* 15E03C 80131FEC 3C018013 */       lui $at, %hi(D_ovl33_801365FC)
  /* 15E040 80131FF0 AC2265FC */        sw $v0, %lo(D_ovl33_801365FC)($at)
  /* 15E044 80131FF4 00031880 */       sll $v1, $v1, 2
  /* 15E048 80131FF8 03A36821 */      addu $t5, $sp, $v1
  /* 15E04C 80131FFC 3C0A8013 */       lui $t2, %hi(D_ovl33_80136A84)
  /* 15E050 80132000 8D4A6A84 */        lw $t2, %lo(D_ovl33_80136A84)($t2)
  /* 15E054 80132004 8DAD008C */        lw $t5, 0x8c($t5)
  /* 15E058 80132008 00408025 */        or $s0, $v0, $zero
  /* 15E05C 8013200C AFA30028 */        sw $v1, 0x28($sp)
  /* 15E060 80132010 00402025 */        or $a0, $v0, $zero
  /* 15E064 80132014 00003025 */        or $a2, $zero, $zero
  /* 15E068 80132018 0C003C48 */       jal func_8000F120
  /* 15E06C 8013201C 01AA2821 */      addu $a1, $t5, $t2
  /* 15E070 80132020 3C058001 */       lui $a1, %hi(func_80014038)
  /* 15E074 80132024 2409FFFF */     addiu $t1, $zero, -1
  /* 15E078 80132028 AFA90010 */        sw $t1, 0x10($sp)
  /* 15E07C 8013202C 24A54038 */     addiu $a1, $a1, %lo(func_80014038)
  /* 15E080 80132030 02002025 */        or $a0, $s0, $zero
  /* 15E084 80132034 2406001C */     addiu $a2, $zero, 0x1c
  /* 15E088 80132038 0C00277D */       jal func_80009DF4
  /* 15E08C 8013203C 3C078000 */       lui $a3, 0x8000
  /* 15E090 80132040 8FAB0028 */        lw $t3, 0x28($sp)
  /* 15E094 80132044 3C198013 */       lui $t9, %hi(D_ovl33_80136A84)
  /* 15E098 80132048 8F396A84 */        lw $t9, %lo(D_ovl33_80136A84)($t9)
  /* 15E09C 8013204C 03AB6021 */      addu $t4, $sp, $t3
  /* 15E0A0 80132050 8D8C005C */        lw $t4, 0x5c($t4)
  /* 15E0A4 80132054 02002025 */        or $a0, $s0, $zero
  /* 15E0A8 80132058 0C003E3D */       jal func_8000F8F4
  /* 15E0AC 8013205C 01992821 */      addu $a1, $t4, $t9
  /* 15E0B0 80132060 8FAF0028 */        lw $t7, 0x28($sp)
  /* 15E0B4 80132064 3C0E8013 */       lui $t6, %hi(D_ovl33_80136A84)
  /* 15E0B8 80132068 8DCE6A84 */        lw $t6, %lo(D_ovl33_80136A84)($t6)
  /* 15E0BC 8013206C 03AF4021 */      addu $t0, $sp, $t7
  /* 15E0C0 80132070 8D08002C */        lw $t0, 0x2c($t0)
  /* 15E0C4 80132074 02002025 */        or $a0, $s0, $zero
  /* 15E0C8 80132078 3C064080 */       lui $a2, 0x4080
  /* 15E0CC 8013207C 0C002F8A */       jal func_8000BE28
  /* 15E0D0 80132080 010E2821 */      addu $a1, $t0, $t6
  /* 15E0D4 80132084 0C0037CD */       jal func_8000DF34
  /* 15E0D8 80132088 02002025 */        or $a0, $s0, $zero
  /* 15E0DC 8013208C 3C018013 */       lui $at, %hi(D_ovl33_801365B8)
  /* 15E0E0 80132090 C42065B8 */      lwc1 $f0, %lo(D_ovl33_801365B8)($at)
  /* 15E0E4 80132094 3C01C3AF */       lui $at, (0xC3AF0000 >> 16) # -350.0
  /* 15E0E8 80132098 44812000 */      mtc1 $at, $f4 # -350.0 to cop1
  /* 15E0EC 8013209C 8E180074 */        lw $t8, 0x74($s0)
  /* 15E0F0 801320A0 3C014348 */       lui $at, (0x43480000 >> 16) # 200.0
  /* 15E0F4 801320A4 44813000 */      mtc1 $at, $f6 # 200.0 to cop1
  /* 15E0F8 801320A8 E704001C */      swc1 $f4, 0x1c($t8)
  /* 15E0FC 801320AC 8E0D0074 */        lw $t5, 0x74($s0)
  /* 15E100 801320B0 44804000 */      mtc1 $zero, $f8
  /* 15E104 801320B4 E5A60020 */      swc1 $f6, 0x20($t5)
  /* 15E108 801320B8 8E0A0074 */        lw $t2, 0x74($s0)
  /* 15E10C 801320BC E5480024 */      swc1 $f8, 0x24($t2)
  /* 15E110 801320C0 8E090074 */        lw $t1, 0x74($s0)
  /* 15E114 801320C4 E5200040 */      swc1 $f0, 0x40($t1)
  /* 15E118 801320C8 8E0B0074 */        lw $t3, 0x74($s0)
  /* 15E11C 801320CC E5600044 */      swc1 $f0, 0x44($t3)
  /* 15E120 801320D0 8FBF0024 */        lw $ra, 0x24($sp)
  /* 15E124 801320D4 8FB00020 */        lw $s0, 0x20($sp)
  /* 15E128 801320D8 27BD00C0 */     addiu $sp, $sp, 0xc0
  /* 15E12C 801320DC 03E00008 */        jr $ra
  /* 15E130 801320E0 00000000 */       nop 

glabel func_ovl33_801320E4
  /* 15E134 801320E4 27BDFF48 */     addiu $sp, $sp, -0xb8
  /* 15E138 801320E8 3C0F8013 */       lui $t7, %hi(D_ovl33_80136370)
  /* 15E13C 801320EC 25EF6370 */     addiu $t7, $t7, %lo(D_ovl33_80136370)
  /* 15E140 801320F0 AFBF001C */        sw $ra, 0x1c($sp)
  /* 15E144 801320F4 AFA400B8 */        sw $a0, 0xb8($sp)
  /* 15E148 801320F8 25E80060 */     addiu $t0, $t7, 0x60
  /* 15E14C 801320FC 27AE0050 */     addiu $t6, $sp, 0x50
  .L80132100:
  /* 15E150 80132100 8DF90000 */        lw $t9, ($t7) # D_ovl33_80136370 + 0
  /* 15E154 80132104 25EF000C */     addiu $t7, $t7, 0xc
  /* 15E158 80132108 25CE000C */     addiu $t6, $t6, 0xc
  /* 15E15C 8013210C ADD9FFF4 */        sw $t9, -0xc($t6)
  /* 15E160 80132110 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl33_80136370 + -8
  /* 15E164 80132114 ADD8FFF8 */        sw $t8, -8($t6)
  /* 15E168 80132118 8DF9FFFC */        lw $t9, -4($t7) # D_ovl33_80136370 + -4
  /* 15E16C 8013211C 15E8FFF8 */       bne $t7, $t0, .L80132100
  /* 15E170 80132120 ADD9FFFC */        sw $t9, -4($t6)
  /* 15E174 80132124 3C0A8013 */       lui $t2, %hi(D_ovl33_801363D0)
  /* 15E178 80132128 254A63D0 */     addiu $t2, $t2, %lo(D_ovl33_801363D0)
  /* 15E17C 8013212C 254D0030 */     addiu $t5, $t2, 0x30
  /* 15E180 80132130 27A90020 */     addiu $t1, $sp, 0x20
  .L80132134:
  /* 15E184 80132134 8D4C0000 */        lw $t4, ($t2) # D_ovl33_801363D0 + 0
  /* 15E188 80132138 254A000C */     addiu $t2, $t2, 0xc
  /* 15E18C 8013213C 2529000C */     addiu $t1, $t1, 0xc
  /* 15E190 80132140 AD2CFFF4 */        sw $t4, -0xc($t1)
  /* 15E194 80132144 8D4BFFF8 */        lw $t3, -8($t2) # D_ovl33_801363D0 + -8
  /* 15E198 80132148 AD2BFFF8 */        sw $t3, -8($t1)
  /* 15E19C 8013214C 8D4CFFFC */        lw $t4, -4($t2) # D_ovl33_801363D0 + -4
  /* 15E1A0 80132150 154DFFF8 */       bne $t2, $t5, .L80132134
  /* 15E1A4 80132154 AD2CFFFC */        sw $t4, -4($t1)
  /* 15E1A8 80132158 00002025 */        or $a0, $zero, $zero
  /* 15E1AC 8013215C 00002825 */        or $a1, $zero, $zero
  /* 15E1B0 80132160 24060014 */     addiu $a2, $zero, 0x14
  /* 15E1B4 80132164 0C00265A */       jal omMakeGObjCommon
  /* 15E1B8 80132168 3C078000 */       lui $a3, 0x8000
  /* 15E1BC 8013216C 3C018013 */       lui $at, %hi(D_ovl33_80136600)
  /* 15E1C0 80132170 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 15E1C4 80132174 2408FFFF */     addiu $t0, $zero, -1
  /* 15E1C8 80132178 AC226600 */        sw $v0, %lo(D_ovl33_80136600)($at)
  /* 15E1CC 8013217C AFA200B4 */        sw $v0, 0xb4($sp)
  /* 15E1D0 80132180 AFA80010 */        sw $t0, 0x10($sp)
  /* 15E1D4 80132184 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 15E1D8 80132188 00402025 */        or $a0, $v0, $zero
  /* 15E1DC 8013218C 2406001D */     addiu $a2, $zero, 0x1d
  /* 15E1E0 80132190 0C00277D */       jal func_80009DF4
  /* 15E1E4 80132194 3C078000 */       lui $a3, 0x8000
  /* 15E1E8 80132198 8FA200B8 */        lw $v0, 0xb8($sp)
  /* 15E1EC 8013219C 2401000A */     addiu $at, $zero, 0xa
  /* 15E1F0 801321A0 8FA400B4 */        lw $a0, 0xb4($sp)
  /* 15E1F4 801321A4 10410004 */       beq $v0, $at, .L801321B8
  /* 15E1F8 801321A8 3C0F8013 */       lui $t7, %hi(D_ovl33_80136A78)
  /* 15E1FC 801321AC 24010007 */     addiu $at, $zero, 7
  /* 15E200 801321B0 14410018 */       bne $v0, $at, .L80132214
  /* 15E204 801321B4 3C088013 */       lui $t0, 0x8013
  .L801321B8:
  /* 15E208 801321B8 8DEF6A78 */        lw $t7, %lo(D_ovl33_80136A78)($t7)
  /* 15E20C 801321BC 3C0E0000 */       lui $t6, %hi(D_NF_000028F0)
  /* 15E210 801321C0 25CE28F0 */     addiu $t6, $t6, %lo(D_NF_000028F0)
  /* 15E214 801321C4 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 15E218 801321C8 01EE2821 */      addu $a1, $t7, $t6
  /* 15E21C 801321CC 94580024 */       lhu $t8, 0x24($v0)
  /* 15E220 801321D0 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 15E224 801321D4 44812000 */      mtc1 $at, $f4 # 10.0 to cop1
  /* 15E228 801321D8 3C014230 */       lui $at, (0x42300000 >> 16) # 44.0
  /* 15E22C 801321DC 330DFFDF */      andi $t5, $t8, 0xffdf
  /* 15E230 801321E0 44813000 */      mtc1 $at, $f6 # 44.0 to cop1
  /* 15E234 801321E4 A44D0024 */        sh $t5, 0x24($v0)
  /* 15E238 801321E8 35AA0001 */       ori $t2, $t5, 1
  /* 15E23C 801321EC 2409007D */     addiu $t1, $zero, 0x7d
  /* 15E240 801321F0 240B0045 */     addiu $t3, $zero, 0x45
  /* 15E244 801321F4 240C0007 */     addiu $t4, $zero, 7
  /* 15E248 801321F8 A44A0024 */        sh $t2, 0x24($v0)
  /* 15E24C 801321FC A0490028 */        sb $t1, 0x28($v0)
  /* 15E250 80132200 A04B0029 */        sb $t3, 0x29($v0)
  /* 15E254 80132204 A04C002A */        sb $t4, 0x2a($v0)
  /* 15E258 80132208 E4440058 */      swc1 $f4, 0x58($v0)
  /* 15E25C 8013220C 10000018 */         b .L80132270
  /* 15E260 80132210 E446005C */      swc1 $f6, 0x5c($v0)
  .L80132214:
  /* 15E264 80132214 8D086A78 */        lw $t0, 0x6a78($t0)
  /* 15E268 80132218 3C0F0000 */       lui $t7, %hi(D_NF_00001230)
  /* 15E26C 8013221C 25EF1230 */     addiu $t7, $t7, %lo(D_NF_00001230)
  /* 15E270 80132220 8FA400B4 */        lw $a0, 0xb4($sp)
  /* 15E274 80132224 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 15E278 80132228 010F2821 */      addu $a1, $t0, $t7
  /* 15E27C 8013222C 944E0024 */       lhu $t6, 0x24($v0)
  /* 15E280 80132230 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 15E284 80132234 44814000 */      mtc1 $at, $f8 # 10.0 to cop1
  /* 15E288 80132238 3C014234 */       lui $at, (0x42340000 >> 16) # 45.0
  /* 15E28C 8013223C 44815000 */      mtc1 $at, $f10 # 45.0 to cop1
  /* 15E290 80132240 31D9FFDF */      andi $t9, $t6, 0xffdf
  /* 15E294 80132244 A4590024 */        sh $t9, 0x24($v0)
  /* 15E298 80132248 372D0001 */       ori $t5, $t9, 1
  /* 15E29C 8013224C 240A007D */     addiu $t2, $zero, 0x7d
  /* 15E2A0 80132250 24090045 */     addiu $t1, $zero, 0x45
  /* 15E2A4 80132254 240B0007 */     addiu $t3, $zero, 7
  /* 15E2A8 80132258 A44D0024 */        sh $t5, 0x24($v0)
  /* 15E2AC 8013225C A04A0028 */        sb $t2, 0x28($v0)
  /* 15E2B0 80132260 A0490029 */        sb $t1, 0x29($v0)
  /* 15E2B4 80132264 A04B002A */        sb $t3, 0x2a($v0)
  /* 15E2B8 80132268 E4480058 */      swc1 $f8, 0x58($v0)
  /* 15E2BC 8013226C E44A005C */      swc1 $f10, 0x5c($v0)
  .L80132270:
  /* 15E2C0 80132270 8FAC00B8 */        lw $t4, 0xb8($sp)
  /* 15E2C4 80132274 3C0E8013 */       lui $t6, %hi(D_ovl33_80136A78)
  /* 15E2C8 80132278 8DCE6A78 */        lw $t6, %lo(D_ovl33_80136A78)($t6)
  /* 15E2CC 8013227C 000C4080 */       sll $t0, $t4, 2
  /* 15E2D0 80132280 03A87821 */      addu $t7, $sp, $t0
  /* 15E2D4 80132284 8DEF0020 */        lw $t7, 0x20($t7)
  /* 15E2D8 80132288 8FA400B4 */        lw $a0, 0xb4($sp)
  /* 15E2DC 8013228C 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 15E2E0 80132290 01EE2821 */      addu $a1, $t7, $t6
  /* 15E2E4 80132294 94580024 */       lhu $t8, 0x24($v0)
  /* 15E2E8 80132298 27AC0050 */     addiu $t4, $sp, 0x50
  /* 15E2EC 8013229C 2408007D */     addiu $t0, $zero, 0x7d
  /* 15E2F0 801322A0 330DFFDF */      andi $t5, $t8, 0xffdf
  /* 15E2F4 801322A4 A44D0024 */        sh $t5, 0x24($v0)
  /* 15E2F8 801322A8 35AA0001 */       ori $t2, $t5, 1
  /* 15E2FC 801322AC A44A0024 */        sh $t2, 0x24($v0)
  /* 15E300 801322B0 8FA900B8 */        lw $t1, 0xb8($sp)
  /* 15E304 801322B4 240F0045 */     addiu $t7, $zero, 0x45
  /* 15E308 801322B8 240E0007 */     addiu $t6, $zero, 7
  /* 15E30C 801322BC 000958C0 */       sll $t3, $t1, 3
  /* 15E310 801322C0 016C1821 */      addu $v1, $t3, $t4
  /* 15E314 801322C4 C4700000 */      lwc1 $f16, ($v1)
  /* 15E318 801322C8 E4500058 */      swc1 $f16, 0x58($v0)
  /* 15E31C 801322CC C4720004 */      lwc1 $f18, 4($v1)
  /* 15E320 801322D0 A0480028 */        sb $t0, 0x28($v0)
  /* 15E324 801322D4 A04F0029 */        sb $t7, 0x29($v0)
  /* 15E328 801322D8 A04E002A */        sb $t6, 0x2a($v0)
  /* 15E32C 801322DC E452005C */      swc1 $f18, 0x5c($v0)
  /* 15E330 801322E0 8FBF001C */        lw $ra, 0x1c($sp)
  /* 15E334 801322E4 27BD00B8 */     addiu $sp, $sp, 0xb8
  /* 15E338 801322E8 03E00008 */        jr $ra
  /* 15E33C 801322EC 00000000 */       nop 

glabel func_ovl33_801322F0
  /* 15E340 801322F0 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 15E344 801322F4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 15E348 801322F8 00002025 */        or $a0, $zero, $zero
  /* 15E34C 801322FC 00002825 */        or $a1, $zero, $zero
  /* 15E350 80132300 24060015 */     addiu $a2, $zero, 0x15
  /* 15E354 80132304 0C00265A */       jal omMakeGObjCommon
  /* 15E358 80132308 3C078000 */       lui $a3, 0x8000
  /* 15E35C 8013230C 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 15E360 80132310 240EFFFF */     addiu $t6, $zero, -1
  /* 15E364 80132314 AFA20024 */        sw $v0, 0x24($sp)
  /* 15E368 80132318 AFAE0010 */        sw $t6, 0x10($sp)
  /* 15E36C 8013231C 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 15E370 80132320 00402025 */        or $a0, $v0, $zero
  /* 15E374 80132324 2406001E */     addiu $a2, $zero, 0x1e
  /* 15E378 80132328 0C00277D */       jal func_80009DF4
  /* 15E37C 8013232C 3C078000 */       lui $a3, 0x8000
  /* 15E380 80132330 3C0F8013 */       lui $t7, %hi(D_ovl33_80136A78)
  /* 15E384 80132334 8DEF6A78 */        lw $t7, %lo(D_ovl33_80136A78)($t7)
  /* 15E388 80132338 3C180002 */       lui $t8, %hi(D_NF_00025058)
  /* 15E38C 8013233C 27185058 */     addiu $t8, $t8, %lo(D_NF_00025058)
  /* 15E390 80132340 8FA40024 */        lw $a0, 0x24($sp)
  /* 15E394 80132344 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 15E398 80132348 01F82821 */      addu $a1, $t7, $t8
  /* 15E39C 8013234C 94590024 */       lhu $t9, 0x24($v0)
  /* 15E3A0 80132350 3C0142E8 */       lui $at, (0x42E80000 >> 16) # 116.0
  /* 15E3A4 80132354 44812000 */      mtc1 $at, $f4 # 116.0 to cop1
  /* 15E3A8 80132358 3C01432D */       lui $at, (0x432D0000 >> 16) # 173.0
  /* 15E3AC 8013235C 44813000 */      mtc1 $at, $f6 # 173.0 to cop1
  /* 15E3B0 80132360 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 15E3B4 80132364 240300CF */     addiu $v1, $zero, 0xcf
  /* 15E3B8 80132368 A4490024 */        sh $t1, 0x24($v0)
  /* 15E3BC 8013236C 352A0001 */       ori $t2, $t1, 1
  /* 15E3C0 80132370 240B00AE */     addiu $t3, $zero, 0xae
  /* 15E3C4 80132374 A44A0024 */        sh $t2, 0x24($v0)
  /* 15E3C8 80132378 A0430028 */        sb $v1, 0x28($v0)
  /* 15E3CC 8013237C A0430029 */        sb $v1, 0x29($v0)
  /* 15E3D0 80132380 A04B002A */        sb $t3, 0x2a($v0)
  /* 15E3D4 80132384 E4440058 */      swc1 $f4, 0x58($v0)
  /* 15E3D8 80132388 E446005C */      swc1 $f6, 0x5c($v0)
  /* 15E3DC 8013238C 8FBF001C */        lw $ra, 0x1c($sp)
  /* 15E3E0 80132390 27BD0028 */     addiu $sp, $sp, 0x28
  /* 15E3E4 80132394 03E00008 */        jr $ra
  /* 15E3E8 80132398 00000000 */       nop 

glabel func_ovl33_8013239C
  /* 15E3EC 8013239C 27BDFFA8 */     addiu $sp, $sp, -0x58
  /* 15E3F0 801323A0 3C0F8013 */       lui $t7, %hi(D_ovl33_80136400)
  /* 15E3F4 801323A4 25EF6400 */     addiu $t7, $t7, %lo(D_ovl33_80136400)
  /* 15E3F8 801323A8 AFBF001C */        sw $ra, 0x1c($sp)
  /* 15E3FC 801323AC AFA40058 */        sw $a0, 0x58($sp)
  /* 15E400 801323B0 25E80030 */     addiu $t0, $t7, 0x30
  /* 15E404 801323B4 27AE0020 */     addiu $t6, $sp, 0x20
  .L801323B8:
  /* 15E408 801323B8 8DF90000 */        lw $t9, ($t7) # D_ovl33_80136400 + 0
  /* 15E40C 801323BC 25EF000C */     addiu $t7, $t7, 0xc
  /* 15E410 801323C0 25CE000C */     addiu $t6, $t6, 0xc
  /* 15E414 801323C4 ADD9FFF4 */        sw $t9, -0xc($t6)
  /* 15E418 801323C8 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl33_80136400 + -8
  /* 15E41C 801323CC ADD8FFF8 */        sw $t8, -8($t6)
  /* 15E420 801323D0 8DF9FFFC */        lw $t9, -4($t7) # D_ovl33_80136400 + -4
  /* 15E424 801323D4 15E8FFF8 */       bne $t7, $t0, .L801323B8
  /* 15E428 801323D8 ADD9FFFC */        sw $t9, -4($t6)
  /* 15E42C 801323DC 00002025 */        or $a0, $zero, $zero
  /* 15E430 801323E0 00002825 */        or $a1, $zero, $zero
  /* 15E434 801323E4 24060016 */     addiu $a2, $zero, 0x16
  /* 15E438 801323E8 0C00265A */       jal omMakeGObjCommon
  /* 15E43C 801323EC 3C078000 */       lui $a3, 0x8000
  /* 15E440 801323F0 3C018013 */       lui $at, %hi(D_ovl33_80136608)
  /* 15E444 801323F4 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 15E448 801323F8 2409FFFF */     addiu $t1, $zero, -1
  /* 15E44C 801323FC AC226608 */        sw $v0, %lo(D_ovl33_80136608)($at)
  /* 15E450 80132400 AFA20054 */        sw $v0, 0x54($sp)
  /* 15E454 80132404 AFA90010 */        sw $t1, 0x10($sp)
  /* 15E458 80132408 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 15E45C 8013240C 00402025 */        or $a0, $v0, $zero
  /* 15E460 80132410 2406001F */     addiu $a2, $zero, 0x1f
  /* 15E464 80132414 0C00277D */       jal func_80009DF4
  /* 15E468 80132418 3C078000 */       lui $a3, 0x8000
  /* 15E46C 8013241C 8FAA0058 */        lw $t2, 0x58($sp)
  /* 15E470 80132420 3C0D8013 */       lui $t5, %hi(D_ovl33_80136A78)
  /* 15E474 80132424 8DAD6A78 */        lw $t5, %lo(D_ovl33_80136A78)($t5)
  /* 15E478 80132428 000A5880 */       sll $t3, $t2, 2
  /* 15E47C 8013242C 03AB6021 */      addu $t4, $sp, $t3
  /* 15E480 80132430 8D8C0020 */        lw $t4, 0x20($t4)
  /* 15E484 80132434 8FA40054 */        lw $a0, 0x54($sp)
  /* 15E488 80132438 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 15E48C 8013243C 018D2821 */      addu $a1, $t4, $t5
  /* 15E490 80132440 94480024 */       lhu $t0, 0x24($v0)
  /* 15E494 80132444 3C01430B */       lui $at, (0x430B0000 >> 16) # 139.0
  /* 15E498 80132448 44812000 */      mtc1 $at, $f4 # 139.0 to cop1
  /* 15E49C 8013244C 3C014334 */       lui $at, (0x43340000 >> 16) # 180.0
  /* 15E4A0 80132450 44813000 */      mtc1 $at, $f6 # 180.0 to cop1
  /* 15E4A4 80132454 310EFFDF */      andi $t6, $t0, 0xffdf
  /* 15E4A8 80132458 A44E0024 */        sh $t6, 0x24($v0)
  /* 15E4AC 8013245C 35D80001 */       ori $t8, $t6, 1
  /* 15E4B0 80132460 241900BC */     addiu $t9, $zero, 0xbc
  /* 15E4B4 80132464 240900BF */     addiu $t1, $zero, 0xbf
  /* 15E4B8 80132468 240A00FF */     addiu $t2, $zero, 0xff
  /* 15E4BC 8013246C A4580024 */        sh $t8, 0x24($v0)
  /* 15E4C0 80132470 A0590028 */        sb $t9, 0x28($v0)
  /* 15E4C4 80132474 A0490029 */        sb $t1, 0x29($v0)
  /* 15E4C8 80132478 A04A002A */        sb $t2, 0x2a($v0)
  /* 15E4CC 8013247C E4440058 */      swc1 $f4, 0x58($v0)
  /* 15E4D0 80132480 E446005C */      swc1 $f6, 0x5c($v0)
  /* 15E4D4 80132484 8FBF001C */        lw $ra, 0x1c($sp)
  /* 15E4D8 80132488 27BD0058 */     addiu $sp, $sp, 0x58
  /* 15E4DC 8013248C 03E00008 */        jr $ra
  /* 15E4E0 80132490 00000000 */       nop 

glabel func_ovl33_80132494
  /* 15E4E4 80132494 3C0F8039 */       lui $t7, %hi(D_ovl1_80390D90)
  /* 15E4E8 80132498 25EF0D90 */     addiu $t7, $t7, %lo(D_ovl1_80390D90)
  /* 15E4EC 8013249C 00057080 */       sll $t6, $a1, 2
  /* 15E4F0 801324A0 01CF1021 */      addu $v0, $t6, $t7
  /* 15E4F4 801324A4 C4440000 */      lwc1 $f4, ($v0)
  /* 15E4F8 801324A8 8C980074 */        lw $t8, 0x74($a0)
  /* 15E4FC 801324AC E7040040 */      swc1 $f4, 0x40($t8)
  /* 15E500 801324B0 8C990074 */        lw $t9, 0x74($a0)
  /* 15E504 801324B4 C4460000 */      lwc1 $f6, ($v0)
  /* 15E508 801324B8 E7260044 */      swc1 $f6, 0x44($t9)
  /* 15E50C 801324BC 8C880074 */        lw $t0, 0x74($a0)
  /* 15E510 801324C0 C4480000 */      lwc1 $f8, ($v0)
  /* 15E514 801324C4 03E00008 */        jr $ra
  /* 15E518 801324C8 E5080048 */      swc1 $f8, 0x48($t0)

glabel func_ovl33_801324CC
  /* 15E51C 801324CC AFA50004 */        sw $a1, 4($sp)
  /* 15E520 801324D0 44800000 */      mtc1 $zero, $f0
  /* 15E524 801324D4 8C8E0074 */        lw $t6, 0x74($a0)
  /* 15E528 801324D8 3C01C2C8 */       lui $at, (0xC2C80000 >> 16) # -100.0
  /* 15E52C 801324DC 44812000 */      mtc1 $at, $f4 # -100.0 to cop1
  /* 15E530 801324E0 E5C0001C */      swc1 $f0, 0x1c($t6)
  /* 15E534 801324E4 8C8F0074 */        lw $t7, 0x74($a0)
  /* 15E538 801324E8 E5E40020 */      swc1 $f4, 0x20($t7)
  /* 15E53C 801324EC 8C980074 */        lw $t8, 0x74($a0)
  /* 15E540 801324F0 03E00008 */        jr $ra
  /* 15E544 801324F4 E7000024 */      swc1 $f0, 0x24($t8)

  /* 15E548 801324F8 03E00008 */        jr $ra
  /* 15E54C 801324FC 00000000 */       nop 

glabel func_ovl33_80132500
  /* 15E550 80132500 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 15E554 80132504 AFA7003C */        sw $a3, 0x3c($sp)
  /* 15E558 80132508 3C0E8013 */       lui $t6, %hi(D_ovl33_80136430)
  /* 15E55C 8013250C 27A70000 */     addiu $a3, $sp, 0
  /* 15E560 80132510 25CE6430 */     addiu $t6, $t6, %lo(D_ovl33_80136430)
  /* 15E564 80132514 25C80030 */     addiu $t0, $t6, 0x30
  /* 15E568 80132518 00E0C825 */        or $t9, $a3, $zero
  .L8013251C:
  /* 15E56C 8013251C 8DD80000 */        lw $t8, ($t6) # D_ovl33_80136430 + 0
  /* 15E570 80132520 25CE000C */     addiu $t6, $t6, 0xc
  /* 15E574 80132524 2739000C */     addiu $t9, $t9, 0xc
  /* 15E578 80132528 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 15E57C 8013252C 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl33_80136430 + -8
  /* 15E580 80132530 AF2FFFF8 */        sw $t7, -8($t9)
  /* 15E584 80132534 8DD8FFFC */        lw $t8, -4($t6) # D_ovl33_80136430 + -4
  /* 15E588 80132538 15C8FFF8 */       bne $t6, $t0, .L8013251C
  /* 15E58C 8013253C AF38FFFC */        sw $t8, -4($t9)
  /* 15E590 80132540 10C00005 */      beqz $a2, .L80132558
  /* 15E594 80132544 24020001 */     addiu $v0, $zero, 1
  /* 15E598 80132548 10C20003 */       beq $a2, $v0, .L80132558
  /* 15E59C 8013254C 24010002 */     addiu $at, $zero, 2
  /* 15E5A0 80132550 54C10016 */      bnel $a2, $at, .L801325AC
  /* 15E5A4 80132554 24010008 */     addiu $at, $zero, 8
  .L80132558:
  /* 15E5A8 80132558 8FA30040 */        lw $v1, 0x40($sp)
  /* 15E5AC 8013255C 00054880 */       sll $t1, $a1, 2
  /* 15E5B0 80132560 00E95021 */      addu $t2, $a3, $t1
  /* 15E5B4 80132564 8D4B0000 */        lw $t3, ($t2)
  /* 15E5B8 80132568 00066080 */       sll $t4, $a2, 2
  /* 15E5BC 8013256C 01866023 */      subu $t4, $t4, $a2
  /* 15E5C0 80132570 00034080 */       sll $t0, $v1, 2
  /* 15E5C4 80132574 000C6140 */       sll $t4, $t4, 5
  /* 15E5C8 80132578 01034023 */      subu $t0, $t0, $v1
  /* 15E5CC 8013257C 00084080 */       sll $t0, $t0, 2
  /* 15E5D0 80132580 016C6821 */      addu $t5, $t3, $t4
  /* 15E5D4 80132584 01A87021 */      addu $t6, $t5, $t0
  /* 15E5D8 80132588 8DCF0000 */        lw $t7, ($t6) # D_ovl33_80136430 + 0
  /* 15E5DC 8013258C 00801025 */        or $v0, $a0, $zero
  /* 15E5E0 80132590 AC8F0000 */        sw $t7, ($a0)
  /* 15E5E4 80132594 8DD90004 */        lw $t9, 4($t6) # D_ovl33_80136430 + 4
  /* 15E5E8 80132598 AC990004 */        sw $t9, 4($a0)
  /* 15E5EC 8013259C 8DCF0008 */        lw $t7, 8($t6) # D_ovl33_80136430 + 8
  /* 15E5F0 801325A0 1000006F */         b .L80132760
  /* 15E5F4 801325A4 AC8F0008 */        sw $t7, 8($a0)
  /* 15E5F8 801325A8 24010008 */     addiu $at, $zero, 8
  .L801325AC:
  /* 15E5FC 801325AC 14A10023 */       bne $a1, $at, .L8013263C
  /* 15E600 801325B0 24010009 */     addiu $at, $zero, 9
  /* 15E604 801325B4 10C10003 */       beq $a2, $at, .L801325C4
  /* 15E608 801325B8 2407000A */     addiu $a3, $zero, 0xa
  /* 15E60C 801325BC 14C70010 */       bne $a2, $a3, .L80132600
  /* 15E610 801325C0 28C1001A */      slti $at, $a2, 0x1a
  .L801325C4:
  /* 15E614 801325C4 8FA30040 */        lw $v1, 0x40($sp)
  /* 15E618 801325C8 3C098013 */       lui $t1, %hi(D_ovl33_80135CD0)
  /* 15E61C 801325CC 25295CD0 */     addiu $t1, $t1, %lo(D_ovl33_80135CD0)
  /* 15E620 801325D0 0003C080 */       sll $t8, $v1, 2
  /* 15E624 801325D4 0303C023 */      subu $t8, $t8, $v1
  /* 15E628 801325D8 0018C080 */       sll $t8, $t8, 2
  /* 15E62C 801325DC 03095021 */      addu $t2, $t8, $t1
  /* 15E630 801325E0 8D4C0000 */        lw $t4, ($t2)
  /* 15E634 801325E4 00801025 */        or $v0, $a0, $zero
  /* 15E638 801325E8 AC8C0000 */        sw $t4, ($a0)
  /* 15E63C 801325EC 8D4B0004 */        lw $t3, 4($t2)
  /* 15E640 801325F0 AC8B0004 */        sw $t3, 4($a0)
  /* 15E644 801325F4 8D4C0008 */        lw $t4, 8($t2)
  /* 15E648 801325F8 10000059 */         b .L80132760
  /* 15E64C 801325FC AC8C0008 */        sw $t4, 8($a0)
  .L80132600:
  /* 15E650 80132600 1420000E */      bnez $at, .L8013263C
  /* 15E654 80132604 28C1001F */      slti $at, $a2, 0x1f
  /* 15E658 80132608 1020000C */      beqz $at, .L8013263C
  /* 15E65C 8013260C 8FA30040 */        lw $v1, 0x40($sp)
  /* 15E660 80132610 1462000A */       bne $v1, $v0, .L8013263C
  /* 15E664 80132614 3C0D8013 */       lui $t5, %hi(D_ovl33_80135D30)
  /* 15E668 80132618 25AD5D30 */     addiu $t5, $t5, %lo(D_ovl33_80135D30)
  /* 15E66C 8013261C 8DAE0000 */        lw $t6, ($t5) # D_ovl33_80135D30 + 0
  /* 15E670 80132620 00801025 */        or $v0, $a0, $zero
  /* 15E674 80132624 AC8E0000 */        sw $t6, ($a0)
  /* 15E678 80132628 8DA80004 */        lw $t0, 4($t5) # D_ovl33_80135D30 + 4
  /* 15E67C 8013262C AC880004 */        sw $t0, 4($a0)
  /* 15E680 80132630 8DAE0008 */        lw $t6, 8($t5) # D_ovl33_80135D30 + 8
  /* 15E684 80132634 1000004A */         b .L80132760
  /* 15E688 80132638 AC8E0008 */        sw $t6, 8($a0)
  .L8013263C:
  /* 15E68C 8013263C 2407000A */     addiu $a3, $zero, 0xa
  /* 15E690 80132640 14A70022 */       bne $a1, $a3, .L801326CC
  /* 15E694 80132644 8FA30040 */        lw $v1, 0x40($sp)
  /* 15E698 80132648 24010009 */     addiu $at, $zero, 9
  /* 15E69C 8013264C 10C10003 */       beq $a2, $at, .L8013265C
  /* 15E6A0 80132650 0003C880 */       sll $t9, $v1, 2
  /* 15E6A4 80132654 14C7000E */       bne $a2, $a3, .L80132690
  /* 15E6A8 80132658 28C1001A */      slti $at, $a2, 0x1a
  .L8013265C:
  /* 15E6AC 8013265C 0323C823 */      subu $t9, $t9, $v1
  /* 15E6B0 80132660 3C0F8013 */       lui $t7, %hi(D_ovl33_80135D3C)
  /* 15E6B4 80132664 25EF5D3C */     addiu $t7, $t7, %lo(D_ovl33_80135D3C)
  /* 15E6B8 80132668 0019C880 */       sll $t9, $t9, 2
  /* 15E6BC 8013266C 032FC021 */      addu $t8, $t9, $t7
  /* 15E6C0 80132670 8F0A0000 */        lw $t2, ($t8)
  /* 15E6C4 80132674 00801025 */        or $v0, $a0, $zero
  /* 15E6C8 80132678 AC8A0000 */        sw $t2, ($a0)
  /* 15E6CC 8013267C 8F090004 */        lw $t1, 4($t8)
  /* 15E6D0 80132680 AC890004 */        sw $t1, 4($a0)
  /* 15E6D4 80132684 8F0A0008 */        lw $t2, 8($t8)
  /* 15E6D8 80132688 10000035 */         b .L80132760
  /* 15E6DC 8013268C AC8A0008 */        sw $t2, 8($a0)
  .L80132690:
  /* 15E6E0 80132690 1420000E */      bnez $at, .L801326CC
  /* 15E6E4 80132694 28C1001F */      slti $at, $a2, 0x1f
  /* 15E6E8 80132698 5020000D */      beql $at, $zero, .L801326D0
  /* 15E6EC 8013269C 24010012 */     addiu $at, $zero, 0x12
  /* 15E6F0 801326A0 1462000A */       bne $v1, $v0, .L801326CC
  /* 15E6F4 801326A4 3C0B8013 */       lui $t3, %hi(D_ovl33_80135D9C)
  /* 15E6F8 801326A8 256B5D9C */     addiu $t3, $t3, %lo(D_ovl33_80135D9C)
  /* 15E6FC 801326AC 8D6D0000 */        lw $t5, ($t3) # D_ovl33_80135D9C + 0
  /* 15E700 801326B0 00801025 */        or $v0, $a0, $zero
  /* 15E704 801326B4 AC8D0000 */        sw $t5, ($a0)
  /* 15E708 801326B8 8D6C0004 */        lw $t4, 4($t3) # D_ovl33_80135D9C + 4
  /* 15E70C 801326BC AC8C0004 */        sw $t4, 4($a0)
  /* 15E710 801326C0 8D6D0008 */        lw $t5, 8($t3) # D_ovl33_80135D9C + 8
  /* 15E714 801326C4 10000026 */         b .L80132760
  /* 15E718 801326C8 AC8D0008 */        sw $t5, 8($a0)
  .L801326CC:
  /* 15E71C 801326CC 24010012 */     addiu $at, $zero, 0x12
  .L801326D0:
  /* 15E720 801326D0 14C10013 */       bne $a2, $at, .L80132720
  /* 15E724 801326D4 00065880 */       sll $t3, $a2, 2
  /* 15E728 801326D8 00054080 */       sll $t0, $a1, 2
  /* 15E72C 801326DC 00037080 */       sll $t6, $v1, 2
  /* 15E730 801326E0 01C37023 */      subu $t6, $t6, $v1
  /* 15E734 801326E4 01054023 */      subu $t0, $t0, $a1
  /* 15E738 801326E8 00084140 */       sll $t0, $t0, 5
  /* 15E73C 801326EC 000E7080 */       sll $t6, $t6, 2
  /* 15E740 801326F0 3C0F8013 */       lui $t7, %hi(D_ovl33_80135DA8)
  /* 15E744 801326F4 25EF5DA8 */     addiu $t7, $t7, %lo(D_ovl33_80135DA8)
  /* 15E748 801326F8 010EC821 */      addu $t9, $t0, $t6
  /* 15E74C 801326FC 032FC021 */      addu $t8, $t9, $t7
  /* 15E750 80132700 8F0A0000 */        lw $t2, ($t8)
  /* 15E754 80132704 00801025 */        or $v0, $a0, $zero
  /* 15E758 80132708 AC8A0000 */        sw $t2, ($a0)
  /* 15E75C 8013270C 8F090004 */        lw $t1, 4($t8)
  /* 15E760 80132710 AC890004 */        sw $t1, 4($a0)
  /* 15E764 80132714 8F0A0008 */        lw $t2, 8($t8)
  /* 15E768 80132718 10000011 */         b .L80132760
  /* 15E76C 8013271C AC8A0008 */        sw $t2, 8($a0)
  .L80132720:
  /* 15E770 80132720 00036080 */       sll $t4, $v1, 2
  /* 15E774 80132724 01836023 */      subu $t4, $t4, $v1
  /* 15E778 80132728 01665823 */      subu $t3, $t3, $a2
  /* 15E77C 8013272C 000B5940 */       sll $t3, $t3, 5
  /* 15E780 80132730 000C6080 */       sll $t4, $t4, 2
  /* 15E784 80132734 3C088013 */       lui $t0, %hi(D_ovl33_80134E30)
  /* 15E788 80132738 25084E30 */     addiu $t0, $t0, %lo(D_ovl33_80134E30)
  /* 15E78C 8013273C 016C6821 */      addu $t5, $t3, $t4
  /* 15E790 80132740 01A87021 */      addu $t6, $t5, $t0
  /* 15E794 80132744 8DCF0000 */        lw $t7, ($t6)
  /* 15E798 80132748 00801025 */        or $v0, $a0, $zero
  /* 15E79C 8013274C AC8F0000 */        sw $t7, ($a0)
  /* 15E7A0 80132750 8DD90004 */        lw $t9, 4($t6)
  /* 15E7A4 80132754 AC990004 */        sw $t9, 4($a0)
  /* 15E7A8 80132758 8DCF0008 */        lw $t7, 8($t6)
  /* 15E7AC 8013275C AC8F0008 */        sw $t7, 8($a0)
  .L80132760:
  /* 15E7B0 80132760 03E00008 */        jr $ra
  /* 15E7B4 80132764 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl33_80132768
  /* 15E7B8 80132768 44802000 */      mtc1 $zero, $f4
  /* 15E7BC 8013276C C4860078 */      lwc1 $f6, 0x78($a0)
  /* 15E7C0 80132770 00001025 */        or $v0, $zero, $zero
  /* 15E7C4 80132774 46062032 */    c.eq.s $f4, $f6
  /* 15E7C8 80132778 00000000 */       nop 
  /* 15E7CC 8013277C 45000003 */      bc1f .L8013278C
  /* 15E7D0 80132780 00000000 */       nop 
  /* 15E7D4 80132784 03E00008 */        jr $ra
  /* 15E7D8 80132788 24020001 */     addiu $v0, $zero, 1

  .L8013278C:
  /* 15E7DC 8013278C 03E00008 */        jr $ra
  /* 15E7E0 80132790 00000000 */       nop 

glabel func_ovl33_80132794
  /* 15E7E4 80132794 3C038013 */       lui $v1, %hi(D_ovl33_80136708)
  /* 15E7E8 80132798 3C048013 */       lui $a0, %hi(D_ovl33_80136714)
  /* 15E7EC 8013279C 24846714 */     addiu $a0, $a0, %lo(D_ovl33_80136714)
  /* 15E7F0 801327A0 24636708 */     addiu $v1, $v1, %lo(D_ovl33_80136708)
  /* 15E7F4 801327A4 24020027 */     addiu $v0, $zero, 0x27
  .L801327A8:
  /* 15E7F8 801327A8 24630004 */     addiu $v1, $v1, 4
  /* 15E7FC 801327AC 1464FFFE */       bne $v1, $a0, .L801327A8
  /* 15E800 801327B0 AC62FFFC */        sw $v0, -4($v1) # D_ovl33_80136708 + -4
  /* 15E804 801327B4 3C018013 */       lui $at, %hi(D_ovl33_80136714)
  /* 15E808 801327B8 03E00008 */        jr $ra
  /* 15E80C 801327BC AC206714 */        sw $zero, %lo(D_ovl33_80136714)($at)

glabel func_ovl33_801327C0
  /* 15E810 801327C0 3C038013 */       lui $v1, %hi(D_ovl33_80136708)
  /* 15E814 801327C4 3C028013 */       lui $v0, %hi(D_ovl33_80136714)
  /* 15E818 801327C8 24426714 */     addiu $v0, $v0, %lo(D_ovl33_80136714)
  /* 15E81C 801327CC 24636708 */     addiu $v1, $v1, %lo(D_ovl33_80136708)
  /* 15E820 801327D0 8C6E0000 */        lw $t6, ($v1) # D_ovl33_80136708 + 0
  .L801327D4:
  /* 15E824 801327D4 24630004 */     addiu $v1, $v1, 4
  /* 15E828 801327D8 148E0003 */       bne $a0, $t6, .L801327E8
  /* 15E82C 801327DC 00000000 */       nop 
  /* 15E830 801327E0 03E00008 */        jr $ra
  /* 15E834 801327E4 24020001 */     addiu $v0, $zero, 1

  .L801327E8:
  /* 15E838 801327E8 5462FFFA */      bnel $v1, $v0, .L801327D4
  /* 15E83C 801327EC 8C6E0000 */        lw $t6, ($v1)
  /* 15E840 801327F0 00001025 */        or $v0, $zero, $zero
  /* 15E844 801327F4 03E00008 */        jr $ra
  /* 15E848 801327F8 00000000 */       nop 

glabel func_ovl33_801327FC
  /* 15E84C 801327FC 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 15E850 80132800 AFBF001C */        sw $ra, 0x1c($sp)
  /* 15E854 80132804 AFB00018 */        sw $s0, 0x18($sp)
  .L80132808:
  /* 15E858 80132808 0C00628C */       jal lbRandom_GetTimeByteRange
  /* 15E85C 8013280C 24040027 */     addiu $a0, $zero, 0x27
  /* 15E860 80132810 00408025 */        or $s0, $v0, $zero
  /* 15E864 80132814 0C04C9F0 */       jal func_ovl33_801327C0
  /* 15E868 80132818 00402025 */        or $a0, $v0, $zero
  /* 15E86C 8013281C 1440FFFA */      bnez $v0, .L80132808
  /* 15E870 80132820 00000000 */       nop 
  /* 15E874 80132824 3C038013 */       lui $v1, %hi(D_ovl33_80136714)
  /* 15E878 80132828 24636714 */     addiu $v1, $v1, %lo(D_ovl33_80136714)
  /* 15E87C 8013282C 8C620000 */        lw $v0, ($v1) # D_ovl33_80136714 + 0
  /* 15E880 80132830 3C018013 */       lui $at, %hi(D_ovl33_80136708)
  /* 15E884 80132834 00027080 */       sll $t6, $v0, 2
  /* 15E888 80132838 002E0821 */      addu $at, $at, $t6
  /* 15E88C 8013283C AC306708 */        sw $s0, %lo(D_ovl33_80136708)($at)
  /* 15E890 80132840 28410002 */      slti $at, $v0, 2
  /* 15E894 80132844 14200003 */      bnez $at, .L80132854
  /* 15E898 80132848 244F0001 */     addiu $t7, $v0, 1
  /* 15E89C 8013284C 10000002 */         b .L80132858
  /* 15E8A0 80132850 AC600000 */        sw $zero, ($v1) # D_ovl33_80136714 + 0
  .L80132854:
  /* 15E8A4 80132854 AC6F0000 */        sw $t7, ($v1) # D_ovl33_80136714 + 0
  .L80132858:
  /* 15E8A8 80132858 8FBF001C */        lw $ra, 0x1c($sp)
  /* 15E8AC 8013285C 02001025 */        or $v0, $s0, $zero
  /* 15E8B0 80132860 8FB00018 */        lw $s0, 0x18($sp)
  /* 15E8B4 80132864 03E00008 */        jr $ra
  /* 15E8B8 80132868 27BD0020 */     addiu $sp, $sp, 0x20

glabel func_ovl33_8013286C
  /* 15E8BC 8013286C 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 15E8C0 80132870 AFA40030 */        sw $a0, 0x30($sp)
  /* 15E8C4 80132874 AFBF001C */        sw $ra, 0x1c($sp)
  /* 15E8C8 80132878 3C048013 */       lui $a0, %hi(D_ovl33_801365F8)
  /* 15E8CC 8013287C AFA50034 */        sw $a1, 0x34($sp)
  /* 15E8D0 80132880 0C04C6D6 */       jal func_ovl33_80131B58
  /* 15E8D4 80132884 8C8465F8 */        lw $a0, %lo(D_ovl33_801365F8)($a0)
  /* 15E8D8 80132888 3C0E8013 */       lui $t6, %hi(D_ovl33_801366FC)
  /* 15E8DC 8013288C 8DCE66FC */        lw $t6, %lo(D_ovl33_801366FC)($t6)
  /* 15E8E0 80132890 3C078013 */       lui $a3, %hi(D_ovl33_801366D4)
  /* 15E8E4 80132894 8CE766D4 */        lw $a3, %lo(D_ovl33_801366D4)($a3)
  /* 15E8E8 80132898 27A40024 */     addiu $a0, $sp, 0x24
  /* 15E8EC 8013289C 00402825 */        or $a1, $v0, $zero
  /* 15E8F0 801328A0 8FA60034 */        lw $a2, 0x34($sp)
  /* 15E8F4 801328A4 0C04C940 */       jal func_ovl33_80132500
  /* 15E8F8 801328A8 AFAE0010 */        sw $t6, 0x10($sp)
  /* 15E8FC 801328AC 8FAF0024 */        lw $t7, 0x24($sp)
  /* 15E900 801328B0 3C01000A */       lui $at, (0xA2C2A >> 16) # 666666
  /* 15E904 801328B4 34212C2A */       ori $at, $at, (0xA2C2A & 0xFFFF) # 666666
  /* 15E908 801328B8 15E10027 */       bne $t7, $at, .L80132958
  /* 15E90C 801328BC 8FA20030 */        lw $v0, 0x30($sp)
  /* 15E910 801328C0 3C038013 */       lui $v1, %hi(D_ovl33_80136704)
  /* 15E914 801328C4 24636704 */     addiu $v1, $v1, %lo(D_ovl33_80136704)
  /* 15E918 801328C8 8C780000 */        lw $t8, ($v1) # D_ovl33_80136704 + 0
  /* 15E91C 801328CC 8FA80028 */        lw $t0, 0x28($sp)
  /* 15E920 801328D0 27190001 */     addiu $t9, $t8, 1
  /* 15E924 801328D4 15190009 */       bne $t0, $t9, .L801328FC
  /* 15E928 801328D8 AC790000 */        sw $t9, ($v1) # D_ovl33_80136704 + 0
  /* 15E92C 801328DC 0C04C9FF */       jal func_ovl33_801327FC
  /* 15E930 801328E0 00000000 */       nop 
  /* 15E934 801328E4 3C038013 */       lui $v1, %hi(D_ovl33_80136704)
  /* 15E938 801328E8 3C018013 */       lui $at, %hi(D_ovl33_801366C4)
  /* 15E93C 801328EC AC2266C4 */        sw $v0, %lo(D_ovl33_801366C4)($at)
  /* 15E940 801328F0 24636704 */     addiu $v1, $v1, %lo(D_ovl33_80136704)
  /* 15E944 801328F4 AFA20034 */        sw $v0, 0x34($sp)
  /* 15E948 801328F8 AC600000 */        sw $zero, ($v1) # D_ovl33_80136704 + 0
  .L801328FC:
  /* 15E94C 801328FC 3C018013 */       lui $at, %hi(D_ovl33_801366FC)
  /* 15E950 80132900 3C048013 */       lui $a0, %hi(D_ovl33_801365F8)
  /* 15E954 80132904 AC2066FC */        sw $zero, %lo(D_ovl33_801366FC)($at)
  /* 15E958 80132908 0C04C6D6 */       jal func_ovl33_80131B58
  /* 15E95C 8013290C 8C8465F8 */        lw $a0, %lo(D_ovl33_801365F8)($a0)
  /* 15E960 80132910 3C0A8013 */       lui $t2, %hi(D_ovl33_801366FC)
  /* 15E964 80132914 8D4A66FC */        lw $t2, %lo(D_ovl33_801366FC)($t2)
  /* 15E968 80132918 3C078013 */       lui $a3, %hi(D_ovl33_801366D4)
  /* 15E96C 8013291C 8CE766D4 */        lw $a3, %lo(D_ovl33_801366D4)($a3)
  /* 15E970 80132920 27A40024 */     addiu $a0, $sp, 0x24
  /* 15E974 80132924 00402825 */        or $a1, $v0, $zero
  /* 15E978 80132928 8FA60034 */        lw $a2, 0x34($sp)
  /* 15E97C 8013292C 0C04C940 */       jal func_ovl33_80132500
  /* 15E980 80132930 AFAA0010 */        sw $t2, 0x10($sp)
  /* 15E984 80132934 27AB0024 */     addiu $t3, $sp, 0x24
  /* 15E988 80132938 8FA20030 */        lw $v0, 0x30($sp)
  /* 15E98C 8013293C 8D6D0000 */        lw $t5, ($t3)
  /* 15E990 80132940 AC4D0000 */        sw $t5, ($v0)
  /* 15E994 80132944 8D6C0004 */        lw $t4, 4($t3)
  /* 15E998 80132948 AC4C0004 */        sw $t4, 4($v0)
  /* 15E99C 8013294C 8D6D0008 */        lw $t5, 8($t3)
  /* 15E9A0 80132950 10000008 */         b .L80132974
  /* 15E9A4 80132954 AC4D0008 */        sw $t5, 8($v0)
  .L80132958:
  /* 15E9A8 80132958 27AE0024 */     addiu $t6, $sp, 0x24
  /* 15E9AC 8013295C 8DD80000 */        lw $t8, ($t6)
  /* 15E9B0 80132960 AC580000 */        sw $t8, ($v0)
  /* 15E9B4 80132964 8DCF0004 */        lw $t7, 4($t6)
  /* 15E9B8 80132968 AC4F0004 */        sw $t7, 4($v0)
  /* 15E9BC 8013296C 8DD80008 */        lw $t8, 8($t6)
  /* 15E9C0 80132970 AC580008 */        sw $t8, 8($v0)
  .L80132974:
  /* 15E9C4 80132974 8FBF001C */        lw $ra, 0x1c($sp)
  /* 15E9C8 80132978 27BD0030 */     addiu $sp, $sp, 0x30
  /* 15E9CC 8013297C 03E00008 */        jr $ra
  /* 15E9D0 80132980 00000000 */       nop 

glabel func_ovl33_80132984
  /* 15E9D4 80132984 3C028013 */       lui $v0, %hi(D_ovl33_801366FC)
  /* 15E9D8 80132988 244266FC */     addiu $v0, $v0, %lo(D_ovl33_801366FC)
  /* 15E9DC 8013298C 8C4E0000 */        lw $t6, ($v0) # D_ovl33_801366FC + 0
  /* 15E9E0 80132990 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 15E9E4 80132994 AFA5002C */        sw $a1, 0x2c($sp)
  /* 15E9E8 80132998 25CF0001 */     addiu $t7, $t6, 1
  /* 15E9EC 8013299C AFBF0014 */        sw $ra, 0x14($sp)
  /* 15E9F0 801329A0 AFA40028 */        sw $a0, 0x28($sp)
  /* 15E9F4 801329A4 AC4F0000 */        sw $t7, ($v0) # D_ovl33_801366FC + 0
  /* 15E9F8 801329A8 3C058013 */       lui $a1, %hi(D_ovl33_801366C4)
  /* 15E9FC 801329AC 8CA566C4 */        lw $a1, %lo(D_ovl33_801366C4)($a1)
  /* 15EA00 801329B0 0C04CA1B */       jal func_ovl33_8013286C
  /* 15EA04 801329B4 27A4001C */     addiu $a0, $sp, 0x1c
  /* 15EA08 801329B8 27B8001C */     addiu $t8, $sp, 0x1c
  /* 15EA0C 801329BC 8FA20028 */        lw $v0, 0x28($sp)
  /* 15EA10 801329C0 8F080000 */        lw $t0, ($t8)
  /* 15EA14 801329C4 AC480000 */        sw $t0, ($v0)
  /* 15EA18 801329C8 8F190004 */        lw $t9, 4($t8)
  /* 15EA1C 801329CC AC590004 */        sw $t9, 4($v0)
  /* 15EA20 801329D0 8F080008 */        lw $t0, 8($t8)
  /* 15EA24 801329D4 AC480008 */        sw $t0, 8($v0)
  /* 15EA28 801329D8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 15EA2C 801329DC 27BD0028 */     addiu $sp, $sp, 0x28
  /* 15EA30 801329E0 03E00008 */        jr $ra
  /* 15EA34 801329E4 00000000 */       nop 

glabel func_ovl33_801329E8
  /* 15EA38 801329E8 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 15EA3C 801329EC 3C188013 */       lui $t8, %hi(D_ovl33_801366CC)
  /* 15EA40 801329F0 8F1866CC */        lw $t8, %lo(D_ovl33_801366CC)($t8)
  /* 15EA44 801329F4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 15EA48 801329F8 AFA40048 */        sw $a0, 0x48($sp)
  /* 15EA4C 801329FC 8C8F0084 */        lw $t7, 0x84($a0)
  /* 15EA50 80132A00 3C038013 */       lui $v1, %hi(D_ovl33_801366C8)
  /* 15EA54 80132A04 13000049 */      beqz $t8, .L80132B2C
  /* 15EA58 80132A08 AFAF002C */        sw $t7, 0x2c($sp)
  /* 15EA5C 80132A0C 246366C8 */     addiu $v1, $v1, %lo(D_ovl33_801366C8)
  /* 15EA60 80132A10 8C620000 */        lw $v0, ($v1) # D_ovl33_801366C8 + 0
  /* 15EA64 80132A14 3C048013 */       lui $a0, %hi(D_ovl33_801365F8)
  /* 15EA68 80132A18 10400003 */      beqz $v0, .L80132A28
  /* 15EA6C 80132A1C 2459FFFF */     addiu $t9, $v0, -1
  /* 15EA70 80132A20 1000006D */         b .L80132BD8
  /* 15EA74 80132A24 AC790000 */        sw $t9, ($v1) # D_ovl33_801366C8 + 0
  .L80132A28:
  /* 15EA78 80132A28 0C04C6D6 */       jal func_ovl33_80131B58
  /* 15EA7C 80132A2C 8C8465F8 */        lw $a0, %lo(D_ovl33_801365F8)($a0)
  /* 15EA80 80132A30 27A4003C */     addiu $a0, $sp, 0x3c
  /* 15EA84 80132A34 0C04CA61 */       jal func_ovl33_80132984
  /* 15EA88 80132A38 00402825 */        or $a1, $v0, $zero
  /* 15EA8C 80132A3C 3C048013 */       lui $a0, %hi(D_ovl33_801365F8)
  /* 15EA90 80132A40 0C04C6D6 */       jal func_ovl33_80131B58
  /* 15EA94 80132A44 8C8465F8 */        lw $a0, %lo(D_ovl33_801365F8)($a0)
  /* 15EA98 80132A48 3C088013 */       lui $t0, %hi(D_ovl33_801366FC)
  /* 15EA9C 80132A4C 8D0866FC */        lw $t0, %lo(D_ovl33_801366FC)($t0)
  /* 15EAA0 80132A50 3C068013 */       lui $a2, %hi(D_ovl33_801366C4)
  /* 15EAA4 80132A54 3C078013 */       lui $a3, %hi(D_ovl33_801366D4)
  /* 15EAA8 80132A58 25090001 */     addiu $t1, $t0, 1
  /* 15EAAC 80132A5C AFA90010 */        sw $t1, 0x10($sp)
  /* 15EAB0 80132A60 8CE766D4 */        lw $a3, %lo(D_ovl33_801366D4)($a3)
  /* 15EAB4 80132A64 8CC666C4 */        lw $a2, %lo(D_ovl33_801366C4)($a2)
  /* 15EAB8 80132A68 27A40030 */     addiu $a0, $sp, 0x30
  /* 15EABC 80132A6C 0C04C940 */       jal func_ovl33_80132500
  /* 15EAC0 80132A70 00402825 */        or $a1, $v0, $zero
  /* 15EAC4 80132A74 8FAA002C */        lw $t2, 0x2c($sp)
  /* 15EAC8 80132A78 24010031 */     addiu $at, $zero, 0x31
  /* 15EACC 80132A7C 8D4B0024 */        lw $t3, 0x24($t2)
  /* 15EAD0 80132A80 55610004 */      bnel $t3, $at, .L80132A94
  /* 15EAD4 80132A84 8FAC0044 */        lw $t4, 0x44($sp)
  /* 15EAD8 80132A88 0C03A62C */       jal ftCommon_ResetColAnim
  /* 15EADC 80132A8C 8FA40048 */        lw $a0, 0x48($sp)
  /* 15EAE0 80132A90 8FAC0044 */        lw $t4, 0x44($sp)
  .L80132A94:
  /* 15EAE4 80132A94 8FA40048 */        lw $a0, 0x48($sp)
  /* 15EAE8 80132A98 8FA5003C */        lw $a1, 0x3c($sp)
  /* 15EAEC 80132A9C 24060000 */     addiu $a2, $zero, 0
  /* 15EAF0 80132AA0 3C073F80 */       lui $a3, 0x3f80
  /* 15EAF4 80132AA4 0C039BC9 */       jal ftStatus_Update
  /* 15EAF8 80132AA8 AFAC0010 */        sw $t4, 0x10($sp)
  /* 15EAFC 80132AAC 8FAD003C */        lw $t5, 0x3c($sp)
  /* 15EB00 80132AB0 3C010002 */       lui $at, (0x20031 >> 16) # 131121
  /* 15EB04 80132AB4 34210031 */       ori $at, $at, (0x20031 & 0xFFFF) # 131121
  /* 15EB08 80132AB8 15A10003 */       bne $t5, $at, .L80132AC8
  /* 15EB0C 80132ABC 8FA40048 */        lw $a0, 0x48($sp)
  /* 15EB10 80132AC0 0C03A6BD */       jal func_ovl2_800E9AF4
  /* 15EB14 80132AC4 24050003 */     addiu $a1, $zero, 3
  .L80132AC8:
  /* 15EB18 80132AC8 3C048013 */       lui $a0, %hi(D_ovl33_801366DC)
  /* 15EB1C 80132ACC 0C04CB88 */       jal func_ovl33_80132E20
  /* 15EB20 80132AD0 8C8466DC */        lw $a0, %lo(D_ovl33_801366DC)($a0)
  /* 15EB24 80132AD4 8FA20040 */        lw $v0, 0x40($sp)
  /* 15EB28 80132AD8 2401029A */     addiu $at, $zero, 0x29a
  /* 15EB2C 80132ADC 8FAE0030 */        lw $t6, 0x30($sp)
  /* 15EB30 80132AE0 1041000D */       beq $v0, $at, .L80132B18
  /* 15EB34 80132AE4 24180001 */     addiu $t8, $zero, 1
  /* 15EB38 80132AE8 3C01000A */       lui $at, (0xA2C2A >> 16) # 666666
  /* 15EB3C 80132AEC 34212C2A */       ori $at, $at, (0xA2C2A & 0xFFFF) # 666666
  /* 15EB40 80132AF0 15C10004 */       bne $t6, $at, .L80132B04
  /* 15EB44 80132AF4 244F0014 */     addiu $t7, $v0, 0x14
  /* 15EB48 80132AF8 3C018013 */       lui $at, %hi(D_ovl33_801366C8)
  /* 15EB4C 80132AFC 10000003 */         b .L80132B0C
  /* 15EB50 80132B00 AC2F66C8 */        sw $t7, %lo(D_ovl33_801366C8)($at)
  .L80132B04:
  /* 15EB54 80132B04 3C018013 */       lui $at, %hi(D_ovl33_801366C8)
  /* 15EB58 80132B08 AC2266C8 */        sw $v0, %lo(D_ovl33_801366C8)($at)
  .L80132B0C:
  /* 15EB5C 80132B0C 3C018013 */       lui $at, %hi(D_ovl33_801366CC)
  /* 15EB60 80132B10 10000031 */         b .L80132BD8
  /* 15EB64 80132B14 AC3866CC */        sw $t8, %lo(D_ovl33_801366CC)($at)
  .L80132B18:
  /* 15EB68 80132B18 3C018013 */       lui $at, %hi(D_ovl33_801366C8)
  /* 15EB6C 80132B1C AC2066C8 */        sw $zero, %lo(D_ovl33_801366C8)($at)
  /* 15EB70 80132B20 3C018013 */       lui $at, %hi(D_ovl33_801366CC)
  /* 15EB74 80132B24 1000002C */         b .L80132BD8
  /* 15EB78 80132B28 AC2066CC */        sw $zero, %lo(D_ovl33_801366CC)($at)
  .L80132B2C:
  /* 15EB7C 80132B2C 0C04C9DA */       jal func_ovl33_80132768
  /* 15EB80 80132B30 8FA40048 */        lw $a0, 0x48($sp)
  /* 15EB84 80132B34 10400028 */      beqz $v0, .L80132BD8
  /* 15EB88 80132B38 3C048013 */       lui $a0, %hi(D_ovl33_801365F8)
  /* 15EB8C 80132B3C 0C04C6D6 */       jal func_ovl33_80131B58
  /* 15EB90 80132B40 8C8465F8 */        lw $a0, %lo(D_ovl33_801365F8)($a0)
  /* 15EB94 80132B44 3C198013 */       lui $t9, %hi(D_ovl33_801366FC)
  /* 15EB98 80132B48 8F3966FC */        lw $t9, %lo(D_ovl33_801366FC)($t9)
  /* 15EB9C 80132B4C 3C068013 */       lui $a2, %hi(D_ovl33_801366C4)
  /* 15EBA0 80132B50 3C078013 */       lui $a3, %hi(D_ovl33_801366D4)
  /* 15EBA4 80132B54 8CE766D4 */        lw $a3, %lo(D_ovl33_801366D4)($a3)
  /* 15EBA8 80132B58 8CC666C4 */        lw $a2, %lo(D_ovl33_801366C4)($a2)
  /* 15EBAC 80132B5C 27A4003C */     addiu $a0, $sp, 0x3c
  /* 15EBB0 80132B60 00402825 */        or $a1, $v0, $zero
  /* 15EBB4 80132B64 0C04C940 */       jal func_ovl33_80132500
  /* 15EBB8 80132B68 AFB90010 */        sw $t9, 0x10($sp)
  /* 15EBBC 80132B6C 3C048013 */       lui $a0, %hi(D_ovl33_801365F8)
  /* 15EBC0 80132B70 0C04C6D6 */       jal func_ovl33_80131B58
  /* 15EBC4 80132B74 8C8465F8 */        lw $a0, %lo(D_ovl33_801365F8)($a0)
  /* 15EBC8 80132B78 3C088013 */       lui $t0, %hi(D_ovl33_801366FC)
  /* 15EBCC 80132B7C 8D0866FC */        lw $t0, %lo(D_ovl33_801366FC)($t0)
  /* 15EBD0 80132B80 3C068013 */       lui $a2, %hi(D_ovl33_801366C4)
  /* 15EBD4 80132B84 3C078013 */       lui $a3, %hi(D_ovl33_801366D4)
  /* 15EBD8 80132B88 25090001 */     addiu $t1, $t0, 1
  /* 15EBDC 80132B8C AFA90010 */        sw $t1, 0x10($sp)
  /* 15EBE0 80132B90 8CE766D4 */        lw $a3, %lo(D_ovl33_801366D4)($a3)
  /* 15EBE4 80132B94 8CC666C4 */        lw $a2, %lo(D_ovl33_801366C4)($a2)
  /* 15EBE8 80132B98 27A40030 */     addiu $a0, $sp, 0x30
  /* 15EBEC 80132B9C 0C04C940 */       jal func_ovl33_80132500
  /* 15EBF0 80132BA0 00402825 */        or $a1, $v0, $zero
  /* 15EBF4 80132BA4 8FAA0030 */        lw $t2, 0x30($sp)
  /* 15EBF8 80132BA8 3C01000A */       lui $at, (0xA2C2A >> 16) # 666666
  /* 15EBFC 80132BAC 34212C2A */       ori $at, $at, (0xA2C2A & 0xFFFF) # 666666
  /* 15EC00 80132BB0 15410005 */       bne $t2, $at, .L80132BC8
  /* 15EC04 80132BB4 240C0001 */     addiu $t4, $zero, 1
  /* 15EC08 80132BB8 240B0014 */     addiu $t3, $zero, 0x14
  /* 15EC0C 80132BBC 3C018013 */       lui $at, %hi(D_ovl33_801366C8)
  /* 15EC10 80132BC0 10000003 */         b .L80132BD0
  /* 15EC14 80132BC4 AC2B66C8 */        sw $t3, %lo(D_ovl33_801366C8)($at)
  .L80132BC8:
  /* 15EC18 80132BC8 3C018013 */       lui $at, %hi(D_ovl33_801366C8)
  /* 15EC1C 80132BCC AC2066C8 */        sw $zero, %lo(D_ovl33_801366C8)($at)
  .L80132BD0:
  /* 15EC20 80132BD0 3C018013 */       lui $at, %hi(D_ovl33_801366CC)
  /* 15EC24 80132BD4 AC2C66CC */        sw $t4, %lo(D_ovl33_801366CC)($at)
  .L80132BD8:
  /* 15EC28 80132BD8 3C0D8013 */       lui $t5, %hi(D_ovl33_801366D0)
  /* 15EC2C 80132BDC 8DAD66D0 */        lw $t5, %lo(D_ovl33_801366D0)($t5)
  /* 15EC30 80132BE0 8FAE0048 */        lw $t6, 0x48($sp)
  /* 15EC34 80132BE4 51A00013 */      beql $t5, $zero, .L80132C34
  /* 15EC38 80132BE8 8FBF001C */        lw $ra, 0x1c($sp)
  /* 15EC3C 80132BEC 8DC20074 */        lw $v0, 0x74($t6)
  /* 15EC40 80132BF0 3C018013 */       lui $at, %hi(D_ovl33_801365BC)
  /* 15EC44 80132BF4 C42265BC */      lwc1 $f2, %lo(D_ovl33_801365BC)($at)
  /* 15EC48 80132BF8 3C018013 */       lui $at, %hi(D_ovl33_801365C0)
  /* 15EC4C 80132BFC C42665C0 */      lwc1 $f6, %lo(D_ovl33_801365C0)($at)
  /* 15EC50 80132C00 C4440034 */      lwc1 $f4, 0x34($v0)
  /* 15EC54 80132C04 46062200 */     add.s $f8, $f4, $f6
  /* 15EC58 80132C08 E4480034 */      swc1 $f8, 0x34($v0)
  /* 15EC5C 80132C0C 8FAF0048 */        lw $t7, 0x48($sp)
  /* 15EC60 80132C10 8DE20074 */        lw $v0, 0x74($t7)
  /* 15EC64 80132C14 C4400034 */      lwc1 $f0, 0x34($v0)
  /* 15EC68 80132C18 4600103C */    c.lt.s $f2, $f0
  /* 15EC6C 80132C1C 00000000 */       nop 
  /* 15EC70 80132C20 45020004 */     bc1fl .L80132C34
  /* 15EC74 80132C24 8FBF001C */        lw $ra, 0x1c($sp)
  /* 15EC78 80132C28 46020281 */     sub.s $f10, $f0, $f2
  /* 15EC7C 80132C2C E44A0034 */      swc1 $f10, 0x34($v0)
  /* 15EC80 80132C30 8FBF001C */        lw $ra, 0x1c($sp)
  .L80132C34:
  /* 15EC84 80132C34 27BD0048 */     addiu $sp, $sp, 0x48
  /* 15EC88 80132C38 03E00008 */        jr $ra
  /* 15EC8C 80132C3C 00000000 */       nop 

glabel func_ovl33_80132C40
  /* 15EC90 80132C40 27BDFF80 */     addiu $sp, $sp, -0x80
  /* 15EC94 80132C44 AFB00020 */        sw $s0, 0x20($sp)
  /* 15EC98 80132C48 3C0E8011 */       lui $t6, %hi(D_ovl2_80116DD0)
  /* 15EC9C 80132C4C 27B00038 */     addiu $s0, $sp, 0x38
  /* 15ECA0 80132C50 25CE6DD0 */     addiu $t6, $t6, %lo(D_ovl2_80116DD0)
  /* 15ECA4 80132C54 AFBF0024 */        sw $ra, 0x24($sp)
  /* 15ECA8 80132C58 AFA40080 */        sw $a0, 0x80($sp)
  /* 15ECAC 80132C5C 25C8003C */     addiu $t0, $t6, 0x3c
  /* 15ECB0 80132C60 0200C825 */        or $t9, $s0, $zero
  .L80132C64:
  /* 15ECB4 80132C64 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 15ECB8 80132C68 25CE000C */     addiu $t6, $t6, 0xc
  /* 15ECBC 80132C6C 2739000C */     addiu $t9, $t9, 0xc
  /* 15ECC0 80132C70 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 15ECC4 80132C74 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl2_80116DD0 + -8
  /* 15ECC8 80132C78 AF2FFFF8 */        sw $t7, -8($t9)
  /* 15ECCC 80132C7C 8DD8FFFC */        lw $t8, -4($t6) # D_ovl2_80116DD0 + -4
  /* 15ECD0 80132C80 15C8FFF8 */       bne $t6, $t0, .L80132C64
  /* 15ECD4 80132C84 AF38FFFC */        sw $t8, -4($t9)
  /* 15ECD8 80132C88 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 15ECDC 80132C8C 3C048013 */       lui $a0, %hi(D_ovl33_801365F8)
  /* 15ECE0 80132C90 AF380000 */        sw $t8, ($t9)
  /* 15ECE4 80132C94 0C04C6D6 */       jal func_ovl33_80131B58
  /* 15ECE8 80132C98 8C8465F8 */        lw $a0, %lo(D_ovl33_801365F8)($a0)
  /* 15ECEC 80132C9C 3C048013 */       lui $a0, %hi(D_ovl33_801365F8)
  /* 15ECF0 80132CA0 AFA20038 */        sw $v0, 0x38($sp)
  /* 15ECF4 80132CA4 0C04C6D6 */       jal func_ovl33_80131B58
  /* 15ECF8 80132CA8 8C8465F8 */        lw $a0, %lo(D_ovl33_801365F8)($a0)
  /* 15ECFC 80132CAC 00402025 */        or $a0, $v0, $zero
  /* 15ED00 80132CB0 0C03B03B */       jal func_ovl2_800EC0EC
  /* 15ED04 80132CB4 00002825 */        or $a1, $zero, $zero
  /* 15ED08 80132CB8 3C098013 */       lui $t1, %hi(D_ovl33_801366EC)
  /* 15ED0C 80132CBC 8D2966EC */        lw $t1, %lo(D_ovl33_801366EC)($t1)
  /* 15ED10 80132CC0 A3A2004F */        sb $v0, 0x4f($sp)
  /* 15ED14 80132CC4 02002025 */        or $a0, $s0, $zero
  /* 15ED18 80132CC8 0C035FCF */       jal ftManager_CreateFighter
  /* 15ED1C 80132CCC AFA90070 */        sw $t1, 0x70($sp)
  /* 15ED20 80132CD0 3C018013 */       lui $at, %hi(D_ovl33_8013660C)
  /* 15ED24 80132CD4 3C058013 */       lui $a1, %hi(func_ovl33_801329E8)
  /* 15ED28 80132CD8 AC22660C */        sw $v0, %lo(D_ovl33_8013660C)($at)
  /* 15ED2C 80132CDC 00408025 */        or $s0, $v0, $zero
  /* 15ED30 80132CE0 24A529E8 */     addiu $a1, $a1, %lo(func_ovl33_801329E8)
  /* 15ED34 80132CE4 00402025 */        or $a0, $v0, $zero
  /* 15ED38 80132CE8 24060001 */     addiu $a2, $zero, 1
  /* 15ED3C 80132CEC 0C002062 */       jal omAddGObjCommonProc
  /* 15ED40 80132CF0 24070001 */     addiu $a3, $zero, 1
  /* 15ED44 80132CF4 8E030084 */        lw $v1, 0x84($s0)
  /* 15ED48 80132CF8 02002025 */        or $a0, $s0, $zero
  /* 15ED4C 80132CFC 906B0190 */       lbu $t3, 0x190($v1)
  /* 15ED50 80132D00 356C0008 */       ori $t4, $t3, 8
  /* 15ED54 80132D04 A06C0190 */        sb $t4, 0x190($v1)
  /* 15ED58 80132D08 0C04C925 */       jal func_ovl33_80132494
  /* 15ED5C 80132D0C 8FA50080 */        lw $a1, 0x80($sp)
  /* 15ED60 80132D10 02002025 */        or $a0, $s0, $zero
  /* 15ED64 80132D14 0C04C933 */       jal func_ovl33_801324CC
  /* 15ED68 80132D18 8FA50080 */        lw $a1, 0x80($sp)
  /* 15ED6C 80132D1C 240D0001 */     addiu $t5, $zero, 1
  /* 15ED70 80132D20 3C018013 */       lui $at, %hi(D_ovl33_801366D4)
  /* 15ED74 80132D24 0C04C9E5 */       jal func_ovl33_80132794
  /* 15ED78 80132D28 AC2D66D4 */        sw $t5, %lo(D_ovl33_801366D4)($at)
  /* 15ED7C 80132D2C 0C04C9FF */       jal func_ovl33_801327FC
  /* 15ED80 80132D30 00000000 */       nop 
  /* 15ED84 80132D34 3C038013 */       lui $v1, %hi(D_ovl33_801366C4)
  /* 15ED88 80132D38 246366C4 */     addiu $v1, $v1, %lo(D_ovl33_801366C4)
  /* 15ED8C 80132D3C AC620000 */        sw $v0, ($v1) # D_ovl33_801366C4 + 0
  /* 15ED90 80132D40 3C018013 */       lui $at, %hi(D_ovl33_801366FC)
  /* 15ED94 80132D44 AC2066FC */        sw $zero, %lo(D_ovl33_801366FC)($at)
  /* 15ED98 80132D48 3C018013 */       lui $at, %hi(D_ovl33_80136704)
  /* 15ED9C 80132D4C AC206704 */        sw $zero, %lo(D_ovl33_80136704)($at)
  /* 15EDA0 80132D50 8C650000 */        lw $a1, ($v1) # D_ovl33_801366C4 + 0
  /* 15EDA4 80132D54 0C04CA1B */       jal func_ovl33_8013286C
  /* 15EDA8 80132D58 27A4002C */     addiu $a0, $sp, 0x2c
  /* 15EDAC 80132D5C 8FA80034 */        lw $t0, 0x34($sp)
  /* 15EDB0 80132D60 02002025 */        or $a0, $s0, $zero
  /* 15EDB4 80132D64 8FA5002C */        lw $a1, 0x2c($sp)
  /* 15EDB8 80132D68 24060000 */     addiu $a2, $zero, 0
  /* 15EDBC 80132D6C 3C073F80 */       lui $a3, 0x3f80
  /* 15EDC0 80132D70 0C039BC9 */       jal ftStatus_Update
  /* 15EDC4 80132D74 AFA80010 */        sw $t0, 0x10($sp)
  /* 15EDC8 80132D78 8FA20030 */        lw $v0, 0x30($sp)
  /* 15EDCC 80132D7C 2401029A */     addiu $at, $zero, 0x29a
  /* 15EDD0 80132D80 240E0001 */     addiu $t6, $zero, 1
  /* 15EDD4 80132D84 10410006 */       beq $v0, $at, .L80132DA0
  /* 15EDD8 80132D88 3C048013 */       lui $a0, %hi(D_ovl33_801366DC)
  /* 15EDDC 80132D8C 3C018013 */       lui $at, %hi(D_ovl33_801366CC)
  /* 15EDE0 80132D90 AC2E66CC */        sw $t6, %lo(D_ovl33_801366CC)($at)
  /* 15EDE4 80132D94 3C018013 */       lui $at, %hi(D_ovl33_801366C8)
  /* 15EDE8 80132D98 10000005 */         b .L80132DB0
  /* 15EDEC 80132D9C AC2266C8 */        sw $v0, %lo(D_ovl33_801366C8)($at)
  .L80132DA0:
  /* 15EDF0 80132DA0 3C018013 */       lui $at, %hi(D_ovl33_801366CC)
  /* 15EDF4 80132DA4 AC2066CC */        sw $zero, %lo(D_ovl33_801366CC)($at)
  /* 15EDF8 80132DA8 3C018013 */       lui $at, %hi(D_ovl33_801366C8)
  /* 15EDFC 80132DAC AC2066C8 */        sw $zero, %lo(D_ovl33_801366C8)($at)
  .L80132DB0:
  /* 15EE00 80132DB0 0C04CB88 */       jal func_ovl33_80132E20
  /* 15EE04 80132DB4 8C8466DC */        lw $a0, %lo(D_ovl33_801366DC)($a0)
  /* 15EE08 80132DB8 8FBF0024 */        lw $ra, 0x24($sp)
  /* 15EE0C 80132DBC 24190001 */     addiu $t9, $zero, 1
  /* 15EE10 80132DC0 3C018013 */       lui $at, %hi(D_ovl33_801366D0)
  /* 15EE14 80132DC4 8FB00020 */        lw $s0, 0x20($sp)
  /* 15EE18 80132DC8 AC3966D0 */        sw $t9, %lo(D_ovl33_801366D0)($at)
  /* 15EE1C 80132DCC 03E00008 */        jr $ra
  /* 15EE20 80132DD0 27BD0080 */     addiu $sp, $sp, 0x80

glabel func_ovl33_80132DD4
  /* 15EE24 80132DD4 3C028013 */       lui $v0, %hi(D_ovl33_801366C4)
  /* 15EE28 80132DD8 8C4266C4 */        lw $v0, %lo(D_ovl33_801366C4)($v0)
  /* 15EE2C 80132DDC 24010001 */     addiu $at, $zero, 1
  /* 15EE30 80132DE0 10400007 */      beqz $v0, .L80132E00
  /* 15EE34 80132DE4 00000000 */       nop 
  /* 15EE38 80132DE8 10410007 */       beq $v0, $at, .L80132E08
  /* 15EE3C 80132DEC 24010002 */     addiu $at, $zero, 2
  /* 15EE40 80132DF0 10410007 */       beq $v0, $at, .L80132E10
  /* 15EE44 80132DF4 00000000 */       nop 
  /* 15EE48 80132DF8 10000007 */         b .L80132E18
  /* 15EE4C 80132DFC 24020003 */     addiu $v0, $zero, 3
  .L80132E00:
  /* 15EE50 80132E00 03E00008 */        jr $ra
  /* 15EE54 80132E04 00001025 */        or $v0, $zero, $zero

  .L80132E08:
  /* 15EE58 80132E08 03E00008 */        jr $ra
  /* 15EE5C 80132E0C 24020001 */     addiu $v0, $zero, 1

  .L80132E10:
  /* 15EE60 80132E10 03E00008 */        jr $ra
  /* 15EE64 80132E14 24020002 */     addiu $v0, $zero, 2

  .L80132E18:
  /* 15EE68 80132E18 03E00008 */        jr $ra
  /* 15EE6C 80132E1C 00000000 */       nop 

glabel func_ovl33_80132E20
  /* 15EE70 80132E20 27BDFF38 */     addiu $sp, $sp, -0xc8
  /* 15EE74 80132E24 3C0F8013 */       lui $t7, %hi(D_ovl33_80136460)
  /* 15EE78 80132E28 25EF6460 */     addiu $t7, $t7, %lo(D_ovl33_80136460)
  /* 15EE7C 80132E2C AFBF0014 */        sw $ra, 0x14($sp)
  /* 15EE80 80132E30 AFA400C8 */        sw $a0, 0xc8($sp)
  /* 15EE84 80132E34 25E80090 */     addiu $t0, $t7, 0x90
  /* 15EE88 80132E38 27AE0034 */     addiu $t6, $sp, 0x34
  .L80132E3C:
  /* 15EE8C 80132E3C 8DF90000 */        lw $t9, ($t7) # D_ovl33_80136460 + 0
  /* 15EE90 80132E40 25EF000C */     addiu $t7, $t7, 0xc
  /* 15EE94 80132E44 25CE000C */     addiu $t6, $t6, 0xc
  /* 15EE98 80132E48 ADD9FFF4 */        sw $t9, -0xc($t6)
  /* 15EE9C 80132E4C 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl33_80136460 + -8
  /* 15EEA0 80132E50 ADD8FFF8 */        sw $t8, -8($t6)
  /* 15EEA4 80132E54 8DF9FFFC */        lw $t9, -4($t7) # D_ovl33_80136460 + -4
  /* 15EEA8 80132E58 15E8FFF8 */       bne $t7, $t0, .L80132E3C
  /* 15EEAC 80132E5C ADD9FFFC */        sw $t9, -4($t6)
  /* 15EEB0 80132E60 3C0A8013 */       lui $t2, %hi(D_ovl33_801364F0)
  /* 15EEB4 80132E64 254A64F0 */     addiu $t2, $t2, %lo(D_ovl33_801364F0)
  /* 15EEB8 80132E68 8D4C0000 */        lw $t4, ($t2) # D_ovl33_801364F0 + 0
  /* 15EEBC 80132E6C 27A90028 */     addiu $t1, $sp, 0x28
  /* 15EEC0 80132E70 8D4B0004 */        lw $t3, 4($t2) # D_ovl33_801364F0 + 4
  /* 15EEC4 80132E74 AD2C0000 */        sw $t4, ($t1)
  /* 15EEC8 80132E78 8D4C0008 */        lw $t4, 8($t2) # D_ovl33_801364F0 + 8
  /* 15EECC 80132E7C AD2B0004 */        sw $t3, 4($t1)
  /* 15EED0 80132E80 0C04CB75 */       jal func_ovl33_80132DD4
  /* 15EED4 80132E84 AD2C0008 */        sw $t4, 8($t1)
  /* 15EED8 80132E88 3C048013 */       lui $a0, %hi(D_ovl33_801365F8)
  /* 15EEDC 80132E8C AFA20024 */        sw $v0, 0x24($sp)
  /* 15EEE0 80132E90 0C04C6D6 */       jal func_ovl33_80131B58
  /* 15EEE4 80132E94 8C8465F8 */        lw $a0, %lo(D_ovl33_801365F8)($a0)
  /* 15EEE8 80132E98 AFA20020 */        sw $v0, 0x20($sp)
  /* 15EEEC 80132E9C 0C002DD8 */       jal func_8000B760
  /* 15EEF0 80132EA0 8FA400C8 */        lw $a0, 0xc8($sp)
  /* 15EEF4 80132EA4 8FA20024 */        lw $v0, 0x24($sp)
  /* 15EEF8 80132EA8 24010003 */     addiu $at, $zero, 3
  /* 15EEFC 80132EAC 8FA400C8 */        lw $a0, 0xc8($sp)
  /* 15EF00 80132EB0 10410037 */       beq $v0, $at, .L80132F90
  /* 15EF04 80132EB4 00021880 */       sll $v1, $v0, 2
  /* 15EF08 80132EB8 03A36821 */      addu $t5, $sp, $v1
  /* 15EF0C 80132EBC 3C088013 */       lui $t0, %hi(D_ovl33_80136A78)
  /* 15EF10 80132EC0 8D086A78 */        lw $t0, %lo(D_ovl33_80136A78)($t0)
  /* 15EF14 80132EC4 8DAD0028 */        lw $t5, 0x28($t5)
  /* 15EF18 80132EC8 AFA3001C */        sw $v1, 0x1c($sp)
  /* 15EF1C 80132ECC 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 15EF20 80132ED0 01A82821 */      addu $a1, $t5, $t0
  /* 15EF24 80132ED4 8FA3001C */        lw $v1, 0x1c($sp)
  /* 15EF28 80132ED8 944F0024 */       lhu $t7, 0x24($v0)
  /* 15EF2C 80132EDC 3C0141C0 */       lui $at, (0x41C00000 >> 16) # 24.0
  /* 15EF30 80132EE0 44812000 */      mtc1 $at, $f4 # 24.0 to cop1
  /* 15EF34 80132EE4 3C014347 */       lui $at, (0x43470000 >> 16) # 199.0
  /* 15EF38 80132EE8 44813000 */      mtc1 $at, $f6 # 199.0 to cop1
  /* 15EF3C 80132EEC 31F8FFDF */      andi $t8, $t7, 0xffdf
  /* 15EF40 80132EF0 A4580024 */        sh $t8, 0x24($v0)
  /* 15EF44 80132EF4 37190001 */       ori $t9, $t8, 1
  /* 15EF48 80132EF8 240900E3 */     addiu $t1, $zero, 0xe3
  /* 15EF4C 80132EFC 240A007D */     addiu $t2, $zero, 0x7d
  /* 15EF50 80132F00 240B000C */     addiu $t3, $zero, 0xc
  /* 15EF54 80132F04 A4590024 */        sh $t9, 0x24($v0)
  /* 15EF58 80132F08 A0490028 */        sb $t1, 0x28($v0)
  /* 15EF5C 80132F0C A04A0029 */        sb $t2, 0x29($v0)
  /* 15EF60 80132F10 A04B002A */        sb $t3, 0x2a($v0)
  /* 15EF64 80132F14 E4440058 */      swc1 $f4, 0x58($v0)
  /* 15EF68 80132F18 E446005C */      swc1 $f6, 0x5c($v0)
  /* 15EF6C 80132F1C 8FAC0020 */        lw $t4, 0x20($sp)
  /* 15EF70 80132F20 3C0E8013 */       lui $t6, %hi(D_ovl33_80136A78)
  /* 15EF74 80132F24 8DCE6A78 */        lw $t6, %lo(D_ovl33_80136A78)($t6)
  /* 15EF78 80132F28 000C6880 */       sll $t5, $t4, 2
  /* 15EF7C 80132F2C 01AC6823 */      subu $t5, $t5, $t4
  /* 15EF80 80132F30 000D6880 */       sll $t5, $t5, 2
  /* 15EF84 80132F34 01A34021 */      addu $t0, $t5, $v1
  /* 15EF88 80132F38 03A87821 */      addu $t7, $sp, $t0
  /* 15EF8C 80132F3C 8DEF0034 */        lw $t7, 0x34($t7)
  /* 15EF90 80132F40 8FA400C8 */        lw $a0, 0xc8($sp)
  /* 15EF94 80132F44 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 15EF98 80132F48 01EE2821 */      addu $a1, $t7, $t6
  /* 15EF9C 80132F4C 94580024 */       lhu $t8, 0x24($v0)
  /* 15EFA0 80132F50 3C0141C0 */       lui $at, (0x41C00000 >> 16) # 24.0
  /* 15EFA4 80132F54 44814000 */      mtc1 $at, $f8 # 24.0 to cop1
  /* 15EFA8 80132F58 3C014352 */       lui $at, (0x43520000 >> 16) # 210.0
  /* 15EFAC 80132F5C 44815000 */      mtc1 $at, $f10 # 210.0 to cop1
  /* 15EFB0 80132F60 3309FFDF */      andi $t1, $t8, 0xffdf
  /* 15EFB4 80132F64 A4490024 */        sh $t1, 0x24($v0)
  /* 15EFB8 80132F68 352A0001 */       ori $t2, $t1, 1
  /* 15EFBC 80132F6C 240B00E3 */     addiu $t3, $zero, 0xe3
  /* 15EFC0 80132F70 240C007D */     addiu $t4, $zero, 0x7d
  /* 15EFC4 80132F74 240D000C */     addiu $t5, $zero, 0xc
  /* 15EFC8 80132F78 A44A0024 */        sh $t2, 0x24($v0)
  /* 15EFCC 80132F7C A04B0028 */        sb $t3, 0x28($v0)
  /* 15EFD0 80132F80 A04C0029 */        sb $t4, 0x29($v0)
  /* 15EFD4 80132F84 A04D002A */        sb $t5, 0x2a($v0)
  /* 15EFD8 80132F88 E4480058 */      swc1 $f8, 0x58($v0)
  /* 15EFDC 80132F8C E44A005C */      swc1 $f10, 0x5c($v0)
  .L80132F90:
  /* 15EFE0 80132F90 8FBF0014 */        lw $ra, 0x14($sp)
  /* 15EFE4 80132F94 27BD00C8 */     addiu $sp, $sp, 0xc8
  /* 15EFE8 80132F98 03E00008 */        jr $ra
  /* 15EFEC 80132F9C 00000000 */       nop 

glabel func_ovl33_80132FA0
  /* 15EFF0 80132FA0 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 15EFF4 80132FA4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 15EFF8 80132FA8 00002025 */        or $a0, $zero, $zero
  /* 15EFFC 80132FAC 00002825 */        or $a1, $zero, $zero
  /* 15F000 80132FB0 24060016 */     addiu $a2, $zero, 0x16
  /* 15F004 80132FB4 0C00265A */       jal omMakeGObjCommon
  /* 15F008 80132FB8 3C078000 */       lui $a3, 0x8000
  /* 15F00C 80132FBC 3C018013 */       lui $at, %hi(D_ovl33_801366DC)
  /* 15F010 80132FC0 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 15F014 80132FC4 240EFFFF */     addiu $t6, $zero, -1
  /* 15F018 80132FC8 AC2266DC */        sw $v0, %lo(D_ovl33_801366DC)($at)
  /* 15F01C 80132FCC AFAE0010 */        sw $t6, 0x10($sp)
  /* 15F020 80132FD0 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 15F024 80132FD4 00402025 */        or $a0, $v0, $zero
  /* 15F028 80132FD8 2406001F */     addiu $a2, $zero, 0x1f
  /* 15F02C 80132FDC 0C00277D */       jal func_80009DF4
  /* 15F030 80132FE0 3C078000 */       lui $a3, 0x8000
  /* 15F034 80132FE4 3C048013 */       lui $a0, %hi(D_ovl33_801366DC)
  /* 15F038 80132FE8 0C04CB88 */       jal func_ovl33_80132E20
  /* 15F03C 80132FEC 8C8466DC */        lw $a0, %lo(D_ovl33_801366DC)($a0)
  /* 15F040 80132FF0 8FBF001C */        lw $ra, 0x1c($sp)
  /* 15F044 80132FF4 27BD0020 */     addiu $sp, $sp, 0x20
  /* 15F048 80132FF8 03E00008 */        jr $ra
  /* 15F04C 80132FFC 00000000 */       nop 

glabel func_ovl33_80133000
  /* 15F050 80133000 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 15F054 80133004 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 15F058 80133008 AFBF003C */        sw $ra, 0x3c($sp)
  /* 15F05C 8013300C 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 15F060 80133010 240F0046 */     addiu $t7, $zero, 0x46
  /* 15F064 80133014 24180000 */     addiu $t8, $zero, 0
  /* 15F068 80133018 3C190400 */       lui $t9, 0x400
  /* 15F06C 8013301C 2408FFFF */     addiu $t0, $zero, -1
  /* 15F070 80133020 24090001 */     addiu $t1, $zero, 1
  /* 15F074 80133024 240A0001 */     addiu $t2, $zero, 1
  /* 15F078 80133028 AFAA0030 */        sw $t2, 0x30($sp)
  /* 15F07C 8013302C AFA90028 */        sw $t1, 0x28($sp)
  /* 15F080 80133030 AFA80020 */        sw $t0, 0x20($sp)
  /* 15F084 80133034 AFB9001C */        sw $t9, 0x1c($sp)
  /* 15F088 80133038 AFB80018 */        sw $t8, 0x18($sp)
  /* 15F08C 8013303C AFAF0014 */        sw $t7, 0x14($sp)
  /* 15F090 80133040 AFAE0010 */        sw $t6, 0x10($sp)
  /* 15F094 80133044 AFA00024 */        sw $zero, 0x24($sp)
  /* 15F098 80133048 AFA0002C */        sw $zero, 0x2c($sp)
  /* 15F09C 8013304C AFA00034 */        sw $zero, 0x34($sp)
  /* 15F0A0 80133050 24040401 */     addiu $a0, $zero, 0x401
  /* 15F0A4 80133054 00002825 */        or $a1, $zero, $zero
  /* 15F0A8 80133058 24060010 */     addiu $a2, $zero, 0x10
  /* 15F0AC 8013305C 0C002E4F */       jal func_8000B93C
  /* 15F0B0 80133060 3C078000 */       lui $a3, 0x8000
  /* 15F0B4 80133064 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 15F0B8 80133068 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 15F0BC 8013306C 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 15F0C0 80133070 8C430074 */        lw $v1, 0x74($v0)
  /* 15F0C4 80133074 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 15F0C8 80133078 44050000 */      mfc1 $a1, $f0
  /* 15F0CC 8013307C 44060000 */      mfc1 $a2, $f0
  /* 15F0D0 80133080 3C07439B */       lui $a3, 0x439b
  /* 15F0D4 80133084 24640008 */     addiu $a0, $v1, 8
  /* 15F0D8 80133088 0C001C20 */       jal func_80007080
  /* 15F0DC 8013308C E7A40010 */      swc1 $f4, 0x10($sp)
  /* 15F0E0 80133090 8FBF003C */        lw $ra, 0x3c($sp)
  /* 15F0E4 80133094 27BD0040 */     addiu $sp, $sp, 0x40
  /* 15F0E8 80133098 03E00008 */        jr $ra
  /* 15F0EC 8013309C 00000000 */       nop 

glabel func_ovl33_801330A0
  /* 15F0F0 801330A0 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 15F0F4 801330A4 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 15F0F8 801330A8 AFBF003C */        sw $ra, 0x3c($sp)
  /* 15F0FC 801330AC 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 15F100 801330B0 240F003C */     addiu $t7, $zero, 0x3c
  /* 15F104 801330B4 24180000 */     addiu $t8, $zero, 0
  /* 15F108 801330B8 3C190800 */       lui $t9, 0x800
  /* 15F10C 801330BC 2408FFFF */     addiu $t0, $zero, -1
  /* 15F110 801330C0 24090001 */     addiu $t1, $zero, 1
  /* 15F114 801330C4 240A0001 */     addiu $t2, $zero, 1
  /* 15F118 801330C8 AFAA0030 */        sw $t2, 0x30($sp)
  /* 15F11C 801330CC AFA90028 */        sw $t1, 0x28($sp)
  /* 15F120 801330D0 AFA80020 */        sw $t0, 0x20($sp)
  /* 15F124 801330D4 AFB9001C */        sw $t9, 0x1c($sp)
  /* 15F128 801330D8 AFB80018 */        sw $t8, 0x18($sp)
  /* 15F12C 801330DC AFAF0014 */        sw $t7, 0x14($sp)
  /* 15F130 801330E0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 15F134 801330E4 AFA00024 */        sw $zero, 0x24($sp)
  /* 15F138 801330E8 AFA0002C */        sw $zero, 0x2c($sp)
  /* 15F13C 801330EC AFA00034 */        sw $zero, 0x34($sp)
  /* 15F140 801330F0 24040401 */     addiu $a0, $zero, 0x401
  /* 15F144 801330F4 00002825 */        or $a1, $zero, $zero
  /* 15F148 801330F8 24060010 */     addiu $a2, $zero, 0x10
  /* 15F14C 801330FC 0C002E4F */       jal func_8000B93C
  /* 15F150 80133100 3C078000 */       lui $a3, 0x8000
  /* 15F154 80133104 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 15F158 80133108 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 15F15C 8013310C 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 15F160 80133110 8C430074 */        lw $v1, 0x74($v0)
  /* 15F164 80133114 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 15F168 80133118 44050000 */      mfc1 $a1, $f0
  /* 15F16C 8013311C 44060000 */      mfc1 $a2, $f0
  /* 15F170 80133120 3C07439B */       lui $a3, 0x439b
  /* 15F174 80133124 24640008 */     addiu $a0, $v1, 8
  /* 15F178 80133128 0C001C20 */       jal func_80007080
  /* 15F17C 8013312C E7A40010 */      swc1 $f4, 0x10($sp)
  /* 15F180 80133130 8FBF003C */        lw $ra, 0x3c($sp)
  /* 15F184 80133134 27BD0040 */     addiu $sp, $sp, 0x40
  /* 15F188 80133138 03E00008 */        jr $ra
  /* 15F18C 8013313C 00000000 */       nop 

glabel func_ovl33_80133140
  /* 15F190 80133140 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 15F194 80133144 3C0E8001 */       lui $t6, %hi(func_80017DBC)
  /* 15F198 80133148 AFBF003C */        sw $ra, 0x3c($sp)
  /* 15F19C 8013314C 25CE7DBC */     addiu $t6, $t6, %lo(func_80017DBC)
  /* 15F1A0 80133150 240F005A */     addiu $t7, $zero, 0x5a
  /* 15F1A4 80133154 24180000 */     addiu $t8, $zero, 0
  /* 15F1A8 80133158 3C191000 */       lui $t9, 0x1000
  /* 15F1AC 8013315C 2408FFFF */     addiu $t0, $zero, -1
  /* 15F1B0 80133160 24090001 */     addiu $t1, $zero, 1
  /* 15F1B4 80133164 240A0001 */     addiu $t2, $zero, 1
  /* 15F1B8 80133168 240B0001 */     addiu $t3, $zero, 1
  /* 15F1BC 8013316C AFAB0030 */        sw $t3, 0x30($sp)
  /* 15F1C0 80133170 AFAA0028 */        sw $t2, 0x28($sp)
  /* 15F1C4 80133174 AFA90024 */        sw $t1, 0x24($sp)
  /* 15F1C8 80133178 AFA80020 */        sw $t0, 0x20($sp)
  /* 15F1CC 8013317C AFB9001C */        sw $t9, 0x1c($sp)
  /* 15F1D0 80133180 AFB80018 */        sw $t8, 0x18($sp)
  /* 15F1D4 80133184 AFAF0014 */        sw $t7, 0x14($sp)
  /* 15F1D8 80133188 AFAE0010 */        sw $t6, 0x10($sp)
  /* 15F1DC 8013318C AFA0002C */        sw $zero, 0x2c($sp)
  /* 15F1E0 80133190 AFA00034 */        sw $zero, 0x34($sp)
  /* 15F1E4 80133194 24040401 */     addiu $a0, $zero, 0x401
  /* 15F1E8 80133198 00002825 */        or $a1, $zero, $zero
  /* 15F1EC 8013319C 24060010 */     addiu $a2, $zero, 0x10
  /* 15F1F0 801331A0 0C002E4F */       jal func_8000B93C
  /* 15F1F4 801331A4 3C078000 */       lui $a3, 0x8000
  /* 15F1F8 801331A8 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 15F1FC 801331AC 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 15F200 801331B0 8C430074 */        lw $v1, 0x74($v0)
  /* 15F204 801331B4 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 15F208 801331B8 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 15F20C 801331BC 44050000 */      mfc1 $a1, $f0
  /* 15F210 801331C0 44060000 */      mfc1 $a2, $f0
  /* 15F214 801331C4 3C07439B */       lui $a3, 0x439b
  /* 15F218 801331C8 24640008 */     addiu $a0, $v1, 8
  /* 15F21C 801331CC AFA30044 */        sw $v1, 0x44($sp)
  /* 15F220 801331D0 0C001C20 */       jal func_80007080
  /* 15F224 801331D4 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 15F228 801331D8 8FA30044 */        lw $v1, 0x44($sp)
  /* 15F22C 801331DC 44800000 */      mtc1 $zero, $f0
  /* 15F230 801331E0 3C0144E1 */       lui $at, (0x44E10000 >> 16) # 1800.0
  /* 15F234 801331E4 44813000 */      mtc1 $at, $f6 # 1800.0 to cop1
  /* 15F238 801331E8 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 15F23C 801331EC 44814000 */      mtc1 $at, $f8 # 1.0 to cop1
  /* 15F240 801331F0 E460003C */      swc1 $f0, 0x3c($v1)
  /* 15F244 801331F4 E4600040 */      swc1 $f0, 0x40($v1)
  /* 15F248 801331F8 E4600048 */      swc1 $f0, 0x48($v1)
  /* 15F24C 801331FC E460004C */      swc1 $f0, 0x4c($v1)
  /* 15F250 80133200 E4600050 */      swc1 $f0, 0x50($v1)
  /* 15F254 80133204 E4600054 */      swc1 $f0, 0x54($v1)
  /* 15F258 80133208 E460005C */      swc1 $f0, 0x5c($v1)
  /* 15F25C 8013320C E4660044 */      swc1 $f6, 0x44($v1)
  /* 15F260 80133210 E4680058 */      swc1 $f8, 0x58($v1)
  /* 15F264 80133214 8FBF003C */        lw $ra, 0x3c($sp)
  /* 15F268 80133218 27BD0048 */     addiu $sp, $sp, 0x48
  /* 15F26C 8013321C 03E00008 */        jr $ra
  /* 15F270 80133220 00000000 */       nop 

glabel func_ovl33_80133224
  /* 15F274 80133224 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 15F278 80133228 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 15F27C 8013322C AFBF003C */        sw $ra, 0x3c($sp)
  /* 15F280 80133230 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 15F284 80133234 240F0050 */     addiu $t7, $zero, 0x50
  /* 15F288 80133238 24180000 */     addiu $t8, $zero, 0
  /* 15F28C 8013323C 3C192000 */       lui $t9, 0x2000
  /* 15F290 80133240 2408FFFF */     addiu $t0, $zero, -1
  /* 15F294 80133244 24090001 */     addiu $t1, $zero, 1
  /* 15F298 80133248 240A0001 */     addiu $t2, $zero, 1
  /* 15F29C 8013324C AFAA0030 */        sw $t2, 0x30($sp)
  /* 15F2A0 80133250 AFA90028 */        sw $t1, 0x28($sp)
  /* 15F2A4 80133254 AFA80020 */        sw $t0, 0x20($sp)
  /* 15F2A8 80133258 AFB9001C */        sw $t9, 0x1c($sp)
  /* 15F2AC 8013325C AFB80018 */        sw $t8, 0x18($sp)
  /* 15F2B0 80133260 AFAF0014 */        sw $t7, 0x14($sp)
  /* 15F2B4 80133264 AFAE0010 */        sw $t6, 0x10($sp)
  /* 15F2B8 80133268 AFA00024 */        sw $zero, 0x24($sp)
  /* 15F2BC 8013326C AFA0002C */        sw $zero, 0x2c($sp)
  /* 15F2C0 80133270 AFA00034 */        sw $zero, 0x34($sp)
  /* 15F2C4 80133274 24040401 */     addiu $a0, $zero, 0x401
  /* 15F2C8 80133278 00002825 */        or $a1, $zero, $zero
  /* 15F2CC 8013327C 24060010 */     addiu $a2, $zero, 0x10
  /* 15F2D0 80133280 0C002E4F */       jal func_8000B93C
  /* 15F2D4 80133284 3C078000 */       lui $a3, 0x8000
  /* 15F2D8 80133288 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 15F2DC 8013328C 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 15F2E0 80133290 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 15F2E4 80133294 8C430074 */        lw $v1, 0x74($v0)
  /* 15F2E8 80133298 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 15F2EC 8013329C 44050000 */      mfc1 $a1, $f0
  /* 15F2F0 801332A0 44060000 */      mfc1 $a2, $f0
  /* 15F2F4 801332A4 3C07439B */       lui $a3, 0x439b
  /* 15F2F8 801332A8 24640008 */     addiu $a0, $v1, 8
  /* 15F2FC 801332AC 0C001C20 */       jal func_80007080
  /* 15F300 801332B0 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 15F304 801332B4 8FBF003C */        lw $ra, 0x3c($sp)
  /* 15F308 801332B8 27BD0040 */     addiu $sp, $sp, 0x40
  /* 15F30C 801332BC 03E00008 */        jr $ra
  /* 15F310 801332C0 00000000 */       nop 

glabel func_ovl33_801332C4
  /* 15F314 801332C4 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 15F318 801332C8 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 15F31C 801332CC AFBF003C */        sw $ra, 0x3c($sp)
  /* 15F320 801332D0 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 15F324 801332D4 240F0032 */     addiu $t7, $zero, 0x32
  /* 15F328 801332D8 24180000 */     addiu $t8, $zero, 0
  /* 15F32C 801332DC 3C194000 */       lui $t9, 0x4000
  /* 15F330 801332E0 2408FFFF */     addiu $t0, $zero, -1
  /* 15F334 801332E4 24090001 */     addiu $t1, $zero, 1
  /* 15F338 801332E8 240A0001 */     addiu $t2, $zero, 1
  /* 15F33C 801332EC AFAA0030 */        sw $t2, 0x30($sp)
  /* 15F340 801332F0 AFA90028 */        sw $t1, 0x28($sp)
  /* 15F344 801332F4 AFA80020 */        sw $t0, 0x20($sp)
  /* 15F348 801332F8 AFB9001C */        sw $t9, 0x1c($sp)
  /* 15F34C 801332FC AFB80018 */        sw $t8, 0x18($sp)
  /* 15F350 80133300 AFAF0014 */        sw $t7, 0x14($sp)
  /* 15F354 80133304 AFAE0010 */        sw $t6, 0x10($sp)
  /* 15F358 80133308 AFA00024 */        sw $zero, 0x24($sp)
  /* 15F35C 8013330C AFA0002C */        sw $zero, 0x2c($sp)
  /* 15F360 80133310 AFA00034 */        sw $zero, 0x34($sp)
  /* 15F364 80133314 24040401 */     addiu $a0, $zero, 0x401
  /* 15F368 80133318 00002825 */        or $a1, $zero, $zero
  /* 15F36C 8013331C 24060010 */     addiu $a2, $zero, 0x10
  /* 15F370 80133320 0C002E4F */       jal func_8000B93C
  /* 15F374 80133324 3C078000 */       lui $a3, 0x8000
  /* 15F378 80133328 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 15F37C 8013332C 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 15F380 80133330 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 15F384 80133334 8C430074 */        lw $v1, 0x74($v0)
  /* 15F388 80133338 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 15F38C 8013333C 44050000 */      mfc1 $a1, $f0
  /* 15F390 80133340 44060000 */      mfc1 $a2, $f0
  /* 15F394 80133344 3C07439B */       lui $a3, 0x439b
  /* 15F398 80133348 24640008 */     addiu $a0, $v1, 8
  /* 15F39C 8013334C 0C001C20 */       jal func_80007080
  /* 15F3A0 80133350 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 15F3A4 80133354 8FBF003C */        lw $ra, 0x3c($sp)
  /* 15F3A8 80133358 27BD0040 */     addiu $sp, $sp, 0x40
  /* 15F3AC 8013335C 03E00008 */        jr $ra
  /* 15F3B0 80133360 00000000 */       nop 

glabel func_ovl33_80133364
  /* 15F3B4 80133364 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 15F3B8 80133368 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 15F3BC 8013336C AFBF003C */        sw $ra, 0x3c($sp)
  /* 15F3C0 80133370 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 15F3C4 80133374 240F0028 */     addiu $t7, $zero, 0x28
  /* 15F3C8 80133378 24180000 */     addiu $t8, $zero, 0
  /* 15F3CC 8013337C 3C198000 */       lui $t9, 0x8000
  /* 15F3D0 80133380 2408FFFF */     addiu $t0, $zero, -1
  /* 15F3D4 80133384 24090001 */     addiu $t1, $zero, 1
  /* 15F3D8 80133388 240A0001 */     addiu $t2, $zero, 1
  /* 15F3DC 8013338C AFAA0030 */        sw $t2, 0x30($sp)
  /* 15F3E0 80133390 AFA90028 */        sw $t1, 0x28($sp)
  /* 15F3E4 80133394 AFA80020 */        sw $t0, 0x20($sp)
  /* 15F3E8 80133398 AFB9001C */        sw $t9, 0x1c($sp)
  /* 15F3EC 8013339C AFB80018 */        sw $t8, 0x18($sp)
  /* 15F3F0 801333A0 AFAF0014 */        sw $t7, 0x14($sp)
  /* 15F3F4 801333A4 AFAE0010 */        sw $t6, 0x10($sp)
  /* 15F3F8 801333A8 AFA00024 */        sw $zero, 0x24($sp)
  /* 15F3FC 801333AC AFA0002C */        sw $zero, 0x2c($sp)
  /* 15F400 801333B0 AFA00034 */        sw $zero, 0x34($sp)
  /* 15F404 801333B4 24040401 */     addiu $a0, $zero, 0x401
  /* 15F408 801333B8 00002825 */        or $a1, $zero, $zero
  /* 15F40C 801333BC 24060010 */     addiu $a2, $zero, 0x10
  /* 15F410 801333C0 0C002E4F */       jal func_8000B93C
  /* 15F414 801333C4 3C078000 */       lui $a3, 0x8000
  /* 15F418 801333C8 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 15F41C 801333CC 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 15F420 801333D0 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 15F424 801333D4 8C430074 */        lw $v1, 0x74($v0)
  /* 15F428 801333D8 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 15F42C 801333DC 44050000 */      mfc1 $a1, $f0
  /* 15F430 801333E0 44060000 */      mfc1 $a2, $f0
  /* 15F434 801333E4 3C07439B */       lui $a3, 0x439b
  /* 15F438 801333E8 24640008 */     addiu $a0, $v1, 8
  /* 15F43C 801333EC 0C001C20 */       jal func_80007080
  /* 15F440 801333F0 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 15F444 801333F4 8FBF003C */        lw $ra, 0x3c($sp)
  /* 15F448 801333F8 27BD0040 */     addiu $sp, $sp, 0x40
  /* 15F44C 801333FC 03E00008 */        jr $ra
  /* 15F450 80133400 00000000 */       nop 

glabel func_ovl33_80133404
  /* 15F454 80133404 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 15F458 80133408 3C0E8001 */       lui $t6, %hi(func_80017DBC)
  /* 15F45C 8013340C 3C190004 */       lui $t9, (0x48600 >> 16) # 296448
  /* 15F460 80133410 AFBF003C */        sw $ra, 0x3c($sp)
  /* 15F464 80133414 37398600 */       ori $t9, $t9, (0x48600 & 0xFFFF) # 296448
  /* 15F468 80133418 25CE7DBC */     addiu $t6, $t6, %lo(func_80017DBC)
  /* 15F46C 8013341C 240F001E */     addiu $t7, $zero, 0x1e
  /* 15F470 80133420 24180000 */     addiu $t8, $zero, 0
  /* 15F474 80133424 2409FFFF */     addiu $t1, $zero, -1
  /* 15F478 80133428 240A0001 */     addiu $t2, $zero, 1
  /* 15F47C 8013342C 240B0001 */     addiu $t3, $zero, 1
  /* 15F480 80133430 240C0001 */     addiu $t4, $zero, 1
  /* 15F484 80133434 AFAC0030 */        sw $t4, 0x30($sp)
  /* 15F488 80133438 AFAB0028 */        sw $t3, 0x28($sp)
  /* 15F48C 8013343C AFAA0024 */        sw $t2, 0x24($sp)
  /* 15F490 80133440 AFA90020 */        sw $t1, 0x20($sp)
  /* 15F494 80133444 AFB80018 */        sw $t8, 0x18($sp)
  /* 15F498 80133448 AFAF0014 */        sw $t7, 0x14($sp)
  /* 15F49C 8013344C AFAE0010 */        sw $t6, 0x10($sp)
  /* 15F4A0 80133450 AFB9001C */        sw $t9, 0x1c($sp)
  /* 15F4A4 80133454 AFA0002C */        sw $zero, 0x2c($sp)
  /* 15F4A8 80133458 AFA00034 */        sw $zero, 0x34($sp)
  /* 15F4AC 8013345C 24040401 */     addiu $a0, $zero, 0x401
  /* 15F4B0 80133460 00002825 */        or $a1, $zero, $zero
  /* 15F4B4 80133464 24060010 */     addiu $a2, $zero, 0x10
  /* 15F4B8 80133468 0C002E4F */       jal func_8000B93C
  /* 15F4BC 8013346C 3C078000 */       lui $a3, 0x8000
  /* 15F4C0 80133470 3C088013 */       lui $t0, %hi(D_ovl33_801366E0)
  /* 15F4C4 80133474 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 15F4C8 80133478 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 15F4CC 8013347C 250866E0 */     addiu $t0, $t0, %lo(D_ovl33_801366E0)
  /* 15F4D0 80133480 AD020000 */        sw $v0, ($t0) # D_ovl33_801366E0 + 0
  /* 15F4D4 80133484 8C430074 */        lw $v1, 0x74($v0)
  /* 15F4D8 80133488 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 15F4DC 8013348C 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 15F4E0 80133490 240E0001 */     addiu $t6, $zero, 1
  /* 15F4E4 80133494 44050000 */      mfc1 $a1, $f0
  /* 15F4E8 80133498 44060000 */      mfc1 $a2, $f0
  /* 15F4EC 8013349C AC6E0080 */        sw $t6, 0x80($v1)
  /* 15F4F0 801334A0 3C07439B */       lui $a3, 0x439b
  /* 15F4F4 801334A4 AFA30044 */        sw $v1, 0x44($sp)
  /* 15F4F8 801334A8 24640008 */     addiu $a0, $v1, 8
  /* 15F4FC 801334AC 0C001C20 */       jal func_80007080
  /* 15F500 801334B0 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 15F504 801334B4 8FA30044 */        lw $v1, 0x44($sp)
  /* 15F508 801334B8 44800000 */      mtc1 $zero, $f0
  /* 15F50C 801334BC 3C018013 */       lui $at, %hi(D_ovl33_801365C4)
  /* 15F510 801334C0 E460003C */      swc1 $f0, 0x3c($v1)
  /* 15F514 801334C4 E4600040 */      swc1 $f0, 0x40($v1)
  /* 15F518 801334C8 C42665C4 */      lwc1 $f6, %lo(D_ovl33_801365C4)($at)
  /* 15F51C 801334CC 3C01442F */       lui $at, (0x442F0000 >> 16) # 700.0
  /* 15F520 801334D0 44814000 */      mtc1 $at, $f8 # 700.0 to cop1
  /* 15F524 801334D4 3C0143B9 */       lui $at, (0x43B90000 >> 16) # 370.0
  /* 15F528 801334D8 44815000 */      mtc1 $at, $f10 # 370.0 to cop1
  /* 15F52C 801334DC 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 15F530 801334E0 44818000 */      mtc1 $at, $f16 # 1.0 to cop1
  /* 15F534 801334E4 E4600050 */      swc1 $f0, 0x50($v1)
  /* 15F538 801334E8 E4600054 */      swc1 $f0, 0x54($v1)
  /* 15F53C 801334EC E460005C */      swc1 $f0, 0x5c($v1)
  /* 15F540 801334F0 E4660044 */      swc1 $f6, 0x44($v1)
  /* 15F544 801334F4 E4680048 */      swc1 $f8, 0x48($v1)
  /* 15F548 801334F8 E46A004C */      swc1 $f10, 0x4c($v1)
  /* 15F54C 801334FC E4700058 */      swc1 $f16, 0x58($v1)
  /* 15F550 80133500 8FBF003C */        lw $ra, 0x3c($sp)
  /* 15F554 80133504 27BD0048 */     addiu $sp, $sp, 0x48
  /* 15F558 80133508 03E00008 */        jr $ra
  /* 15F55C 8013350C 00000000 */       nop 

glabel func_ovl33_80133510
  /* 15F560 80133510 24010004 */     addiu $at, $zero, 4
  /* 15F564 80133514 10810008 */       beq $a0, $at, .L80133538
  /* 15F568 80133518 3C0E8013 */       lui $t6, %hi(D_ovl33_80136700)
  /* 15F56C 8013351C 24010007 */     addiu $at, $zero, 7
  /* 15F570 80133520 10810005 */       beq $a0, $at, .L80133538
  /* 15F574 80133524 2401000A */     addiu $at, $zero, 0xa
  /* 15F578 80133528 10810003 */       beq $a0, $at, .L80133538
  /* 15F57C 8013352C 2401000B */     addiu $at, $zero, 0xb
  /* 15F580 80133530 1481000B */       bne $a0, $at, .L80133560
  /* 15F584 80133534 24020001 */     addiu $v0, $zero, 1
  .L80133538:
  /* 15F588 80133538 95CE6700 */       lhu $t6, %lo(D_ovl33_80136700)($t6)
  /* 15F58C 8013353C 240F0001 */     addiu $t7, $zero, 1
  /* 15F590 80133540 008FC004 */      sllv $t8, $t7, $a0
  /* 15F594 80133544 01D8C824 */       and $t9, $t6, $t8
  /* 15F598 80133548 13200003 */      beqz $t9, .L80133558
  /* 15F59C 8013354C 00000000 */       nop 
  /* 15F5A0 80133550 03E00008 */        jr $ra
  /* 15F5A4 80133554 24020001 */     addiu $v0, $zero, 1

  .L80133558:
  /* 15F5A8 80133558 03E00008 */        jr $ra
  /* 15F5AC 8013355C 00001025 */        or $v0, $zero, $zero

  .L80133560:
  /* 15F5B0 80133560 03E00008 */        jr $ra
  /* 15F5B4 80133564 00000000 */       nop 

glabel func_ovl33_80133568
  /* 15F5B8 80133568 3C018013 */       lui $at, %hi(D_ovl33_8013671C)
  /* 15F5BC 8013356C AC20671C */        sw $zero, %lo(D_ovl33_8013671C)($at)
  /* 15F5C0 80133570 3C018013 */       lui $at, %hi(D_ovl33_801365FC)
  /* 15F5C4 80133574 AC2065FC */        sw $zero, %lo(D_ovl33_801365FC)($at)
  /* 15F5C8 80133578 3C018013 */       lui $at, %hi(D_ovl33_80136600)
  /* 15F5CC 8013357C AC206600 */        sw $zero, %lo(D_ovl33_80136600)($at)
  /* 15F5D0 80133580 3C018013 */       lui $at, %hi(D_ovl33_80136604)
  /* 15F5D4 80133584 AC206604 */        sw $zero, %lo(D_ovl33_80136604)($at)
  /* 15F5D8 80133588 3C018013 */       lui $at, %hi(D_ovl33_80136608)
  /* 15F5DC 8013358C AC206608 */        sw $zero, %lo(D_ovl33_80136608)($at)
  /* 15F5E0 80133590 3C018013 */       lui $at, %hi(D_ovl33_8013660C)
  /* 15F5E4 80133594 AC20660C */        sw $zero, %lo(D_ovl33_8013660C)($at)
  /* 15F5E8 80133598 3C018013 */       lui $at, %hi(D_ovl33_801366DC)
  /* 15F5EC 8013359C AC2066DC */        sw $zero, %lo(D_ovl33_801366DC)($at)
  /* 15F5F0 801335A0 3C018013 */       lui $at, %hi(D_ovl33_801366C4)
  /* 15F5F4 801335A4 AC2066C4 */        sw $zero, %lo(D_ovl33_801366C4)($at)
  /* 15F5F8 801335A8 3C018013 */       lui $at, %hi(D_ovl33_801366C8)
  /* 15F5FC 801335AC AC2066C8 */        sw $zero, %lo(D_ovl33_801366C8)($at)
  /* 15F600 801335B0 3C018013 */       lui $at, %hi(D_ovl33_801366CC)
  /* 15F604 801335B4 AC2066CC */        sw $zero, %lo(D_ovl33_801366CC)($at)
  /* 15F608 801335B8 24020001 */     addiu $v0, $zero, 1
  /* 15F60C 801335BC 3C018013 */       lui $at, %hi(D_ovl33_801366D0)
  /* 15F610 801335C0 AC2266D0 */        sw $v0, %lo(D_ovl33_801366D0)($at)
  /* 15F614 801335C4 3C018013 */       lui $at, %hi(D_ovl33_801366D4)
  /* 15F618 801335C8 AC2266D4 */        sw $v0, %lo(D_ovl33_801366D4)($at)
  /* 15F61C 801335CC 3C05800A */       lui $a1, %hi(gSaveData)
  /* 15F620 801335D0 3C018013 */       lui $at, %hi(D_ovl33_801366FC)
  /* 15F624 801335D4 24A544E0 */     addiu $a1, $a1, %lo(gSaveData)
  /* 15F628 801335D8 AC2066FC */        sw $zero, %lo(D_ovl33_801366FC)($at)
  /* 15F62C 801335DC 94AE0458 */       lhu $t6, 0x458($a1) # gSaveData + 1112
  /* 15F630 801335E0 3C03800A */       lui $v1, %hi(gSceneData)
  /* 15F634 801335E4 3C018013 */       lui $at, %hi(D_ovl33_80136700)
  /* 15F638 801335E8 24634AD0 */     addiu $v1, $v1, %lo(gSceneData)
  /* 15F63C 801335EC A42E6700 */        sh $t6, %lo(D_ovl33_80136700)($at)
  /* 15F640 801335F0 906F0001 */       lbu $t7, 1($v1) # gSceneData + 1
  /* 15F644 801335F4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 15F648 801335F8 2401003A */     addiu $at, $zero, 0x3a
  /* 15F64C 801335FC 15E10008 */       bne $t7, $at, .L80133620
  /* 15F650 80133600 AFBF0014 */        sw $ra, 0x14($sp)
  /* 15F654 80133604 0C04C6EA */       jal func_ovl33_80131BA8
  /* 15F658 80133608 90A40456 */       lbu $a0, 0x456($a1) # gSaveData + 1110
  /* 15F65C 8013360C 3C018013 */       lui $at, %hi(D_ovl33_801365F8)
  /* 15F660 80133610 AC2265F8 */        sw $v0, %lo(D_ovl33_801365F8)($at)
  /* 15F664 80133614 3C018013 */       lui $at, %hi(D_ovl33_801366F0)
  /* 15F668 80133618 1000000E */         b .L80133654
  /* 15F66C 8013361C AC2066F0 */        sw $zero, %lo(D_ovl33_801366F0)($at)
  .L80133620:
  /* 15F670 80133620 3C018013 */       lui $at, %hi(D_ovl33_801366F0)
  /* 15F674 80133624 AC2266F0 */        sw $v0, %lo(D_ovl33_801366F0)($at)
  /* 15F678 80133628 9078000D */       lbu $t8, 0xd($v1)
  /* 15F67C 8013362C 9079000E */       lbu $t9, 0xe($v1)
  /* 15F680 80133630 3C058013 */       lui $a1, %hi(D_ovl33_801366F4)
  /* 15F684 80133634 24A566F4 */     addiu $a1, $a1, %lo(D_ovl33_801366F4)
  /* 15F688 80133638 3C018013 */       lui $at, %hi(D_ovl33_801366F8)
  /* 15F68C 8013363C ACB80000 */        sw $t8, ($a1) # D_ovl33_801366F4 + 0
  /* 15F690 80133640 AC3966F8 */        sw $t9, %lo(D_ovl33_801366F8)($at)
  /* 15F694 80133644 0C04C6EA */       jal func_ovl33_80131BA8
  /* 15F698 80133648 8CA40000 */        lw $a0, ($a1) # D_ovl33_801366F4 + 0
  /* 15F69C 8013364C 3C018013 */       lui $at, %hi(D_ovl33_801365F8)
  /* 15F6A0 80133650 AC2265F8 */        sw $v0, %lo(D_ovl33_801365F8)($at)
  .L80133654:
  /* 15F6A4 80133654 0C04C9E5 */       jal func_ovl33_80132794
  /* 15F6A8 80133658 00000000 */       nop 
  /* 15F6AC 8013365C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 15F6B0 80133660 27BD0018 */     addiu $sp, $sp, 0x18
  /* 15F6B4 80133664 03E00008 */        jr $ra
  /* 15F6B8 80133668 00000000 */       nop 

glabel func_ovl33_8013366C
  /* 15F6BC 8013366C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 15F6C0 80133670 AFBF0014 */        sw $ra, 0x14($sp)
  /* 15F6C4 80133674 3C048013 */       lui $a0, %hi(D_ovl33_801365F8)
  /* 15F6C8 80133678 0C04C6D6 */       jal func_ovl33_80131B58
  /* 15F6CC 8013367C 8C8465F8 */        lw $a0, %lo(D_ovl33_801365F8)($a0)
  /* 15F6D0 80133680 3C01800A */       lui $at, %hi((gSaveData + 0x456))
  /* 15F6D4 80133684 0C03517D */       jal lbMemory_SaveData_WriteSRAM
  /* 15F6D8 80133688 A0224936 */        sb $v0, %lo((gSaveData + 0x456))($at)
  /* 15F6DC 8013368C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 15F6E0 80133690 27BD0018 */     addiu $sp, $sp, 0x18
  /* 15F6E4 80133694 03E00008 */        jr $ra
  /* 15F6E8 80133698 00000000 */       nop 

glabel func_ovl33_8013369C
  /* 15F6EC 8013369C 3C058013 */       lui $a1, %hi(D_ovl33_801365FC)
  /* 15F6F0 801336A0 8CA565FC */        lw $a1, %lo(D_ovl33_801365FC)($a1)
  /* 15F6F4 801336A4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 15F6F8 801336A8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 15F6FC 801336AC 10A00005 */      beqz $a1, .L801336C4
  /* 15F700 801336B0 AFA40018 */        sw $a0, 0x18($sp)
  /* 15F704 801336B4 0C0026A1 */       jal omEjectGObjCommon
  /* 15F708 801336B8 00A02025 */        or $a0, $a1, $zero
  /* 15F70C 801336BC 0C04C7CA */       jal func_ovl33_80131F28
  /* 15F710 801336C0 8FA40018 */        lw $a0, 0x18($sp)
  .L801336C4:
  /* 15F714 801336C4 3C048013 */       lui $a0, %hi(D_ovl33_80136600)
  /* 15F718 801336C8 8C846600 */        lw $a0, %lo(D_ovl33_80136600)($a0)
  /* 15F71C 801336CC 10800005 */      beqz $a0, .L801336E4
  /* 15F720 801336D0 00000000 */       nop 
  /* 15F724 801336D4 0C0026A1 */       jal omEjectGObjCommon
  /* 15F728 801336D8 00000000 */       nop 
  /* 15F72C 801336DC 0C04C839 */       jal func_ovl33_801320E4
  /* 15F730 801336E0 8FA40018 */        lw $a0, 0x18($sp)
  .L801336E4:
  /* 15F734 801336E4 3C048013 */       lui $a0, %hi(D_ovl33_80136604)
  /* 15F738 801336E8 8C846604 */        lw $a0, %lo(D_ovl33_80136604)($a0)
  /* 15F73C 801336EC 10800005 */      beqz $a0, .L80133704
  /* 15F740 801336F0 00000000 */       nop 
  /* 15F744 801336F4 0C0026A1 */       jal omEjectGObjCommon
  /* 15F748 801336F8 00000000 */       nop 
  /* 15F74C 801336FC 0C04C700 */       jal func_ovl33_80131C00
  /* 15F750 80133700 8FA40018 */        lw $a0, 0x18($sp)
  .L80133704:
  /* 15F754 80133704 3C048013 */       lui $a0, %hi(D_ovl33_80136608)
  /* 15F758 80133708 8C846608 */        lw $a0, %lo(D_ovl33_80136608)($a0)
  /* 15F75C 8013370C 10800005 */      beqz $a0, .L80133724
  /* 15F760 80133710 00000000 */       nop 
  /* 15F764 80133714 0C0026A1 */       jal omEjectGObjCommon
  /* 15F768 80133718 00000000 */       nop 
  /* 15F76C 8013371C 0C04C8E7 */       jal func_ovl33_8013239C
  /* 15F770 80133720 8FA40018 */        lw $a0, 0x18($sp)
  .L80133724:
  /* 15F774 80133724 3C048013 */       lui $a0, %hi(D_ovl33_8013660C)
  /* 15F778 80133728 8C84660C */        lw $a0, %lo(D_ovl33_8013660C)($a0)
  /* 15F77C 8013372C 50800006 */      beql $a0, $zero, .L80133748
  /* 15F780 80133730 8FBF0014 */        lw $ra, 0x14($sp)
  /* 15F784 80133734 0C035E3A */       jal func_ovl2_800D78E8
  /* 15F788 80133738 00000000 */       nop 
  /* 15F78C 8013373C 0C04CB10 */       jal func_ovl33_80132C40
  /* 15F790 80133740 8FA40018 */        lw $a0, 0x18($sp)
  /* 15F794 80133744 8FBF0014 */        lw $ra, 0x14($sp)
  .L80133748:
  /* 15F798 80133748 27BD0018 */     addiu $sp, $sp, 0x18
  /* 15F79C 8013374C 03E00008 */        jr $ra
  /* 15F7A0 80133750 00000000 */       nop 

glabel func_ovl33_80133754
  /* 15F7A4 80133754 3C018013 */       lui $at, %hi(D_ovl33_801365C8)
  /* 15F7A8 80133758 44857000 */      mtc1 $a1, $f14
  /* 15F7AC 8013375C C42465C8 */      lwc1 $f4, %lo(D_ovl33_801365C8)($at)
  /* 15F7B0 80133760 3C014334 */       lui $at, (0x43340000 >> 16) # 180.0
  /* 15F7B4 80133764 44814000 */      mtc1 $at, $f8 # 180.0 to cop1
  /* 15F7B8 80133768 46047182 */     mul.s $f6, $f14, $f4
  /* 15F7BC 8013376C 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 15F7C0 80133770 F7B40018 */      sdc1 $f20, 0x18($sp)
  /* 15F7C4 80133774 AFBF0024 */        sw $ra, 0x24($sp)
  /* 15F7C8 80133778 AFB00020 */        sw $s0, 0x20($sp)
  /* 15F7CC 8013377C 00808025 */        or $s0, $a0, $zero
  /* 15F7D0 80133780 AFA60038 */        sw $a2, 0x38($sp)
  /* 15F7D4 80133784 46083503 */     div.s $f20, $f6, $f8
  /* 15F7D8 80133788 0C00C0FC */       jal __sinf
  /* 15F7DC 8013378C 4600A306 */     mov.s $f12, $f20
  /* 15F7E0 80133790 3C018013 */       lui $at, %hi(D_ovl33_801365CC)
  /* 15F7E4 80133794 C42A65CC */      lwc1 $f10, %lo(D_ovl33_801365CC)($at)
  /* 15F7E8 80133798 4600A306 */     mov.s $f12, $f20
  /* 15F7EC 8013379C 460A0402 */     mul.s $f16, $f0, $f10
  /* 15F7F0 801337A0 0C00D734 */       jal cosf
  /* 15F7F4 801337A4 E6100040 */      swc1 $f16, 0x40($s0)
  /* 15F7F8 801337A8 3C018013 */       lui $at, %hi(D_ovl33_801365D0)
  /* 15F7FC 801337AC C43265D0 */      lwc1 $f18, %lo(D_ovl33_801365D0)($at)
  /* 15F800 801337B0 3C0143B9 */       lui $at, (0x43B90000 >> 16) # 370.0
  /* 15F804 801337B4 44816000 */      mtc1 $at, $f12 # 370.0 to cop1
  /* 15F808 801337B8 46120102 */     mul.s $f4, $f0, $f18
  /* 15F80C 801337BC 44807000 */      mtc1 $zero, $f14
  /* 15F810 801337C0 0C00618F */       jal atan2f
  /* 15F814 801337C4 E6040044 */      swc1 $f4, 0x44($s0)
  /* 15F818 801337C8 46140300 */     add.s $f12, $f0, $f20
  /* 15F81C 801337CC 0C00C0FC */       jal __sinf
  /* 15F820 801337D0 E7AC002C */      swc1 $f12, 0x2c($sp)
  /* 15F824 801337D4 3C0143B9 */       lui $at, (0x43B90000 >> 16) # 370.0
  /* 15F828 801337D8 44813000 */      mtc1 $at, $f6 # 370.0 to cop1
  /* 15F82C 801337DC 00000000 */       nop 
  /* 15F830 801337E0 46060202 */     mul.s $f8, $f0, $f6
  /* 15F834 801337E4 E608004C */      swc1 $f8, 0x4c($s0)
  /* 15F838 801337E8 0C00D734 */       jal cosf
  /* 15F83C 801337EC C7AC002C */      lwc1 $f12, 0x2c($sp)
  /* 15F840 801337F0 3C0143B9 */       lui $at, (0x43B90000 >> 16) # 370.0
  /* 15F844 801337F4 44815000 */      mtc1 $at, $f10 # 370.0 to cop1
  /* 15F848 801337F8 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 15F84C 801337FC 44816000 */      mtc1 $at, $f12 # 1.0 to cop1
  /* 15F850 80133800 460A0402 */     mul.s $f16, $f0, $f10
  /* 15F854 80133804 44807000 */      mtc1 $zero, $f14
  /* 15F858 80133808 0C00618F */       jal atan2f
  /* 15F85C 8013380C E6100050 */      swc1 $f16, 0x50($s0)
  /* 15F860 80133810 46140300 */     add.s $f12, $f0, $f20
  /* 15F864 80133814 0C00C0FC */       jal __sinf
  /* 15F868 80133818 E7AC002C */      swc1 $f12, 0x2c($sp)
  /* 15F86C 8013381C E6000058 */      swc1 $f0, 0x58($s0)
  /* 15F870 80133820 0C00D734 */       jal cosf
  /* 15F874 80133824 C7AC002C */      lwc1 $f12, 0x2c($sp)
  /* 15F878 80133828 E600005C */      swc1 $f0, 0x5c($s0)
  /* 15F87C 8013382C 8FBF0024 */        lw $ra, 0x24($sp)
  /* 15F880 80133830 8FB00020 */        lw $s0, 0x20($sp)
  /* 15F884 80133834 D7B40018 */      ldc1 $f20, 0x18($sp)
  /* 15F888 80133838 03E00008 */        jr $ra
  /* 15F88C 8013383C 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl33_80133840
  /* 15F890 80133840 3C0E8013 */       lui $t6, %hi(D_ovl33_801366E0)
  /* 15F894 80133844 8DCE66E0 */        lw $t6, %lo(D_ovl33_801366E0)($t6)
  /* 15F898 80133848 44800000 */      mtc1 $zero, $f0
  /* 15F89C 8013384C 3C018013 */       lui $at, %hi(D_ovl33_801365D4)
  /* 15F8A0 80133850 8DC20074 */        lw $v0, 0x74($t6)
  /* 15F8A4 80133854 44801000 */      mtc1 $zero, $f2
  /* 15F8A8 80133858 E440003C */      swc1 $f0, 0x3c($v0)
  /* 15F8AC 8013385C E4400040 */      swc1 $f0, 0x40($v0)
  /* 15F8B0 80133860 C42465D4 */      lwc1 $f4, %lo(D_ovl33_801365D4)($at)
  /* 15F8B4 80133864 3C01442F */       lui $at, (0x442F0000 >> 16) # 700.0
  /* 15F8B8 80133868 44813000 */      mtc1 $at, $f6 # 700.0 to cop1
  /* 15F8BC 8013386C 3C0143B9 */       lui $at, (0x43B90000 >> 16) # 370.0
  /* 15F8C0 80133870 44814000 */      mtc1 $at, $f8 # 370.0 to cop1
  /* 15F8C4 80133874 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 15F8C8 80133878 44815000 */      mtc1 $at, $f10 # 1.0 to cop1
  /* 15F8CC 8013387C 3C018013 */       lui $at, %hi(D_ovl33_801366E4)
  /* 15F8D0 80133880 E4400050 */      swc1 $f0, 0x50($v0)
  /* 15F8D4 80133884 E4400054 */      swc1 $f0, 0x54($v0)
  /* 15F8D8 80133888 E440005C */      swc1 $f0, 0x5c($v0)
  /* 15F8DC 8013388C E4440044 */      swc1 $f4, 0x44($v0)
  /* 15F8E0 80133890 E4460048 */      swc1 $f6, 0x48($v0)
  /* 15F8E4 80133894 E448004C */      swc1 $f8, 0x4c($v0)
  /* 15F8E8 80133898 E44A0058 */      swc1 $f10, 0x58($v0)
  /* 15F8EC 8013389C E42266E4 */      swc1 $f2, %lo(D_ovl33_801366E4)($at)
  /* 15F8F0 801338A0 3C018013 */       lui $at, %hi(D_ovl33_801366E8)
  /* 15F8F4 801338A4 03E00008 */        jr $ra
  /* 15F8F8 801338A8 E42266E8 */      swc1 $f2, %lo(D_ovl33_801366E8)($at)

glabel func_ovl33_801338AC
  /* 15F8FC 801338AC 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 15F900 801338B0 AFBF001C */        sw $ra, 0x1c($sp)
  /* 15F904 801338B4 AFB10018 */        sw $s1, 0x18($sp)
  /* 15F908 801338B8 AFB00014 */        sw $s0, 0x14($sp)
  /* 15F90C 801338BC 0C0E41DB */       jal func_ovl1_8039076C
  /* 15F910 801338C0 34049000 */       ori $a0, $zero, 0x9000
  /* 15F914 801338C4 0C0E41DB */       jal func_ovl1_8039076C
  /* 15F918 801338C8 24044000 */     addiu $a0, $zero, 0x4000
  /* 15F91C 801338CC 10400009 */      beqz $v0, .L801338F4
  /* 15F920 801338D0 240F003A */     addiu $t7, $zero, 0x3a
  /* 15F924 801338D4 3C02800A */       lui $v0, %hi(gSceneData)
  /* 15F928 801338D8 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 15F92C 801338DC 904E0000 */       lbu $t6, ($v0) # gSceneData + 0
  /* 15F930 801338E0 A04F0000 */        sb $t7, ($v0) # gSceneData + 0
  /* 15F934 801338E4 0C04CD9B */       jal func_ovl33_8013366C
  /* 15F938 801338E8 A04E0001 */        sb $t6, 1($v0) # gSceneData + 1
  /* 15F93C 801338EC 0C00171D */       jal func_80005C74
  /* 15F940 801338F0 00000000 */       nop 
  .L801338F4:
  /* 15F944 801338F4 0C0E4201 */       jal func_ovl1_80390804
  /* 15F948 801338F8 24042000 */     addiu $a0, $zero, 0x2000
  /* 15F94C 801338FC 10400085 */      beqz $v0, .L80133B14
  /* 15F950 80133900 2444FFFF */     addiu $a0, $v0, -1
  /* 15F954 80133904 0004C080 */       sll $t8, $a0, 2
  /* 15F958 80133908 0304C021 */      addu $t8, $t8, $a0
  /* 15F95C 8013390C 3C198004 */       lui $t9, %hi(gContInput)
  /* 15F960 80133910 27395228 */     addiu $t9, $t9, %lo(gContInput)
  /* 15F964 80133914 0018C040 */       sll $t8, $t8, 1
  /* 15F968 80133918 03193821 */      addu $a3, $t8, $t9
  /* 15F96C 8013391C 80E30008 */        lb $v1, 8($a3)
  /* 15F970 80133920 3C118013 */       lui $s1, %hi(D_ovl33_801366E4)
  /* 15F974 80133924 263166E4 */     addiu $s1, $s1, %lo(D_ovl33_801366E4)
  /* 15F978 80133928 2861FFEC */      slti $at, $v1, -0x14
  /* 15F97C 8013392C 10200021 */      beqz $at, .L801339B4
  /* 15F980 80133930 00000000 */       nop 
  /* 15F984 80133934 44832000 */      mtc1 $v1, $f4
  /* 15F988 80133938 3C018013 */       lui $at, %hi(D_ovl33_801365D8)
  /* 15F98C 8013393C C42265D8 */      lwc1 $f2, %lo(D_ovl33_801365D8)($at)
  /* 15F990 80133940 468021A0 */   cvt.s.w $f6, $f4
  /* 15F994 80133944 3C014270 */       lui $at, (0x42700000 >> 16) # 60.0
  /* 15F998 80133948 44816000 */      mtc1 $at, $f12 # 60.0 to cop1
  /* 15F99C 8013394C 3C018013 */       lui $at, %hi(D_ovl33_801365DC)
  /* 15F9A0 80133950 C42A65DC */      lwc1 $f10, %lo(D_ovl33_801365DC)($at)
  /* 15F9A4 80133954 3C014334 */       lui $at, (0x43340000 >> 16) # 180.0
  /* 15F9A8 80133958 460C3203 */     div.s $f8, $f6, $f12
  /* 15F9AC 8013395C 44819000 */      mtc1 $at, $f18 # 180.0 to cop1
  /* 15F9B0 80133960 3C048013 */       lui $a0, %hi(D_ovl33_8013660C)
  /* 15F9B4 80133964 2484660C */     addiu $a0, $a0, %lo(D_ovl33_8013660C)
  /* 15F9B8 80133968 8C880000 */        lw $t0, ($a0) # D_ovl33_8013660C + 0
  /* 15F9BC 8013396C 3C018013 */       lui $at, %hi(D_ovl33_801366D0)
  /* 15F9C0 80133970 8D020074 */        lw $v0, 0x74($t0)
  /* 15F9C4 80133974 C4460034 */      lwc1 $f6, 0x34($v0)
  /* 15F9C8 80133978 460A4402 */     mul.s $f16, $f8, $f10
  /* 15F9CC 8013397C 46128103 */     div.s $f4, $f16, $f18
  /* 15F9D0 80133980 46043201 */     sub.s $f8, $f6, $f4
  /* 15F9D4 80133984 E4480034 */      swc1 $f8, 0x34($v0)
  /* 15F9D8 80133988 8C890000 */        lw $t1, ($a0) # D_ovl33_8013660C + 0
  /* 15F9DC 8013398C 8D220074 */        lw $v0, 0x74($t1)
  /* 15F9E0 80133990 C4400034 */      lwc1 $f0, 0x34($v0)
  /* 15F9E4 80133994 4600103C */    c.lt.s $f2, $f0
  /* 15F9E8 80133998 00000000 */       nop 
  /* 15F9EC 8013399C 45000003 */      bc1f .L801339AC
  /* 15F9F0 801339A0 00000000 */       nop 
  /* 15F9F4 801339A4 46020281 */     sub.s $f10, $f0, $f2
  /* 15F9F8 801339A8 E44A0034 */      swc1 $f10, 0x34($v0)
  .L801339AC:
  /* 15F9FC 801339AC AC2066D0 */        sw $zero, %lo(D_ovl33_801366D0)($at)
  /* 15FA00 801339B0 80E30008 */        lb $v1, 8($a3)
  .L801339B4:
  /* 15FA04 801339B4 3C018013 */       lui $at, %hi(D_ovl33_801365E0)
  /* 15FA08 801339B8 C42265E0 */      lwc1 $f2, %lo(D_ovl33_801365E0)($at)
  /* 15FA0C 801339BC 3C014270 */       lui $at, (0x42700000 >> 16) # 60.0
  /* 15FA10 801339C0 44816000 */      mtc1 $at, $f12 # 60.0 to cop1
  /* 15FA14 801339C4 3C048013 */       lui $a0, %hi(D_ovl33_8013660C)
  /* 15FA18 801339C8 28610015 */      slti $at, $v1, 0x15
  /* 15FA1C 801339CC 1420001A */      bnez $at, .L80133A38
  /* 15FA20 801339D0 2484660C */     addiu $a0, $a0, %lo(D_ovl33_8013660C)
  /* 15FA24 801339D4 44838000 */      mtc1 $v1, $f16
  /* 15FA28 801339D8 3C018013 */       lui $at, %hi(D_ovl33_801365E4)
  /* 15FA2C 801339DC C42465E4 */      lwc1 $f4, %lo(D_ovl33_801365E4)($at)
  /* 15FA30 801339E0 468084A0 */   cvt.s.w $f18, $f16
  /* 15FA34 801339E4 3C014334 */       lui $at, (0x43340000 >> 16) # 180.0
  /* 15FA38 801339E8 44815000 */      mtc1 $at, $f10 # 180.0 to cop1
  /* 15FA3C 801339EC 8C8A0000 */        lw $t2, ($a0) # D_ovl33_8013660C + 0
  /* 15FA40 801339F0 3C018013 */       lui $at, %hi(D_ovl33_801366D0)
  /* 15FA44 801339F4 460C9183 */     div.s $f6, $f18, $f12
  /* 15FA48 801339F8 8D420074 */        lw $v0, 0x74($t2)
  /* 15FA4C 801339FC C4520034 */      lwc1 $f18, 0x34($v0)
  /* 15FA50 80133A00 46043202 */     mul.s $f8, $f6, $f4
  /* 15FA54 80133A04 460A4403 */     div.s $f16, $f8, $f10
  /* 15FA58 80133A08 46109181 */     sub.s $f6, $f18, $f16
  /* 15FA5C 80133A0C E4460034 */      swc1 $f6, 0x34($v0)
  /* 15FA60 80133A10 8C8B0000 */        lw $t3, ($a0) # D_ovl33_8013660C + 0
  /* 15FA64 80133A14 8D620074 */        lw $v0, 0x74($t3)
  /* 15FA68 80133A18 C4400034 */      lwc1 $f0, 0x34($v0)
  /* 15FA6C 80133A1C 4600103C */    c.lt.s $f2, $f0
  /* 15FA70 80133A20 00000000 */       nop 
  /* 15FA74 80133A24 45000003 */      bc1f .L80133A34
  /* 15FA78 80133A28 00000000 */       nop 
  /* 15FA7C 80133A2C 46020101 */     sub.s $f4, $f0, $f2
  /* 15FA80 80133A30 E4440034 */      swc1 $f4, 0x34($v0)
  .L80133A34:
  /* 15FA84 80133A34 AC2066D0 */        sw $zero, %lo(D_ovl33_801366D0)($at)
  .L80133A38:
  /* 15FA88 80133A38 80F00009 */        lb $s0, 9($a3)
  /* 15FA8C 80133A3C 2A010015 */      slti $at, $s0, 0x15
  /* 15FA90 80133A40 1420001A */      bnez $at, .L80133AAC
  /* 15FA94 80133A44 3C014234 */       lui $at, (0x42340000 >> 16) # 45.0
  /* 15FA98 80133A48 44814000 */      mtc1 $at, $f8 # 45.0 to cop1
  /* 15FA9C 80133A4C C6200000 */      lwc1 $f0, ($s1) # D_ovl33_801366E4 + 0
  /* 15FAA0 80133A50 4608003C */    c.lt.s $f0, $f8
  /* 15FAA4 80133A54 00000000 */       nop 
  /* 15FAA8 80133A58 45000014 */      bc1f .L80133AAC
  /* 15FAAC 80133A5C 00000000 */       nop 
  /* 15FAB0 80133A60 44905000 */      mtc1 $s0, $f10
  /* 15FAB4 80133A64 3C0C8013 */       lui $t4, %hi(D_ovl33_801366E0)
  /* 15FAB8 80133A68 3C068013 */       lui $a2, %hi(D_ovl33_801366E8)
  /* 15FABC 80133A6C 468054A0 */   cvt.s.w $f18, $f10
  /* 15FAC0 80133A70 460C9403 */     div.s $f16, $f18, $f12
  /* 15FAC4 80133A74 46100180 */     add.s $f6, $f0, $f16
  /* 15FAC8 80133A78 E6260000 */      swc1 $f6, ($s1) # D_ovl33_801366E4 + 0
  /* 15FACC 80133A7C 8D8C66E0 */        lw $t4, %lo(D_ovl33_801366E0)($t4)
  /* 15FAD0 80133A80 8CC666E8 */        lw $a2, %lo(D_ovl33_801366E8)($a2)
  /* 15FAD4 80133A84 8E250000 */        lw $a1, ($s1) # D_ovl33_801366E4 + 0
  /* 15FAD8 80133A88 8D840074 */        lw $a0, 0x74($t4)
  /* 15FADC 80133A8C 0C04CDD5 */       jal func_ovl33_80133754
  /* 15FAE0 80133A90 AFA70024 */        sw $a3, 0x24($sp)
  /* 15FAE4 80133A94 3C018013 */       lui $at, %hi(D_ovl33_801366D0)
  /* 15FAE8 80133A98 8FA70024 */        lw $a3, 0x24($sp)
  /* 15FAEC 80133A9C AC2066D0 */        sw $zero, %lo(D_ovl33_801366D0)($at)
  /* 15FAF0 80133AA0 3C014270 */       lui $at, (0x42700000 >> 16) # 60.0
  /* 15FAF4 80133AA4 44816000 */      mtc1 $at, $f12 # 60.0 to cop1
  /* 15FAF8 80133AA8 80F00009 */        lb $s0, 9($a3)
  .L80133AAC:
  /* 15FAFC 80133AAC 3C118013 */       lui $s1, %hi(D_ovl33_801366E4)
  /* 15FB00 80133AB0 2A01FFEC */      slti $at, $s0, -0x14
  /* 15FB04 80133AB4 1020007B */      beqz $at, .L80133CA4
  /* 15FB08 80133AB8 263166E4 */     addiu $s1, $s1, %lo(D_ovl33_801366E4)
  /* 15FB0C 80133ABC 3C01C234 */       lui $at, (0xC2340000 >> 16) # -45.0
  /* 15FB10 80133AC0 44812000 */      mtc1 $at, $f4 # -45.0 to cop1
  /* 15FB14 80133AC4 C6200000 */      lwc1 $f0, ($s1) # D_ovl33_801366E4 + 0
  /* 15FB18 80133AC8 4600203C */    c.lt.s $f4, $f0
  /* 15FB1C 80133ACC 00000000 */       nop 
  /* 15FB20 80133AD0 45020075 */     bc1fl .L80133CA8
  /* 15FB24 80133AD4 8FBF001C */        lw $ra, 0x1c($sp)
  /* 15FB28 80133AD8 44904000 */      mtc1 $s0, $f8
  /* 15FB2C 80133ADC 3C0D8013 */       lui $t5, %hi(D_ovl33_801366E0)
  /* 15FB30 80133AE0 3C068013 */       lui $a2, %hi(D_ovl33_801366E8)
  /* 15FB34 80133AE4 468042A0 */   cvt.s.w $f10, $f8
  /* 15FB38 80133AE8 460C5483 */     div.s $f18, $f10, $f12
  /* 15FB3C 80133AEC 46120400 */     add.s $f16, $f0, $f18
  /* 15FB40 80133AF0 E6300000 */      swc1 $f16, ($s1) # D_ovl33_801366E4 + 0
  /* 15FB44 80133AF4 8DAD66E0 */        lw $t5, %lo(D_ovl33_801366E0)($t5)
  /* 15FB48 80133AF8 8CC666E8 */        lw $a2, %lo(D_ovl33_801366E8)($a2)
  /* 15FB4C 80133AFC 8E250000 */        lw $a1, ($s1) # D_ovl33_801366E4 + 0
  /* 15FB50 80133B00 0C04CDD5 */       jal func_ovl33_80133754
  /* 15FB54 80133B04 8DA40074 */        lw $a0, 0x74($t5)
  /* 15FB58 80133B08 3C018013 */       lui $at, %hi(D_ovl33_801366D0)
  /* 15FB5C 80133B0C 10000065 */         b .L80133CA4
  /* 15FB60 80133B10 AC2066D0 */        sw $zero, %lo(D_ovl33_801366D0)($at)
  .L80133B14:
  /* 15FB64 80133B14 3C028013 */       lui $v0, %hi(D_ovl33_80136718)
  /* 15FB68 80133B18 8C426718 */        lw $v0, %lo(D_ovl33_80136718)($v0)
  /* 15FB6C 80133B1C 14400007 */      bnez $v0, .L80133B3C
  /* 15FB70 80133B20 00000000 */       nop 
  /* 15FB74 80133B24 0C0E4201 */       jal func_ovl1_80390804
  /* 15FB78 80133B28 24040222 */     addiu $a0, $zero, 0x222
  /* 15FB7C 80133B2C 14400009 */      bnez $v0, .L80133B54
  /* 15FB80 80133B30 AFA2002C */        sw $v0, 0x2c($sp)
  /* 15FB84 80133B34 3C028013 */       lui $v0, %hi(D_ovl33_80136718)
  /* 15FB88 80133B38 8C426718 */        lw $v0, %lo(D_ovl33_80136718)($v0)
  .L80133B3C:
  /* 15FB8C 80133B3C 14400027 */      bnez $v0, .L80133BDC
  /* 15FB90 80133B40 2404FFEC */     addiu $a0, $zero, -0x14
  /* 15FB94 80133B44 0C0E4227 */       jal func_ovl1_8039089C
  /* 15FB98 80133B48 00002825 */        or $a1, $zero, $zero
  /* 15FB9C 80133B4C 10400023 */      beqz $v0, .L80133BDC
  /* 15FBA0 80133B50 AFA20030 */        sw $v0, 0x30($sp)
  .L80133B54:
  /* 15FBA4 80133B54 3C108013 */       lui $s0, %hi(D_ovl33_801365F8)
  /* 15FBA8 80133B58 261065F8 */     addiu $s0, $s0, %lo(D_ovl33_801365F8)
  /* 15FBAC 80133B5C 2411000B */     addiu $s1, $zero, 0xb
  /* 15FBB0 80133B60 8E020000 */        lw $v0, ($s0) # D_ovl33_801365F8 + 0
  .L80133B64:
  /* 15FBB4 80133B64 14400003 */      bnez $v0, .L80133B74
  /* 15FBB8 80133B68 244EFFFF */     addiu $t6, $v0, -1
  /* 15FBBC 80133B6C 10000002 */         b .L80133B78
  /* 15FBC0 80133B70 AE110000 */        sw $s1, ($s0) # D_ovl33_801365F8 + 0
  .L80133B74:
  /* 15FBC4 80133B74 AE0E0000 */        sw $t6, ($s0) # D_ovl33_801365F8 + 0
  .L80133B78:
  /* 15FBC8 80133B78 0C04C6D6 */       jal func_ovl33_80131B58
  /* 15FBCC 80133B7C 8E040000 */        lw $a0, ($s0) # D_ovl33_801365F8 + 0
  /* 15FBD0 80133B80 0C04CD44 */       jal func_ovl33_80133510
  /* 15FBD4 80133B84 00402025 */        or $a0, $v0, $zero
  /* 15FBD8 80133B88 5040FFF6 */      beql $v0, $zero, .L80133B64
  /* 15FBDC 80133B8C 8E020000 */        lw $v0, ($s0) # D_ovl33_801365F8 + 0
  /* 15FBE0 80133B90 0C04C6D6 */       jal func_ovl33_80131B58
  /* 15FBE4 80133B94 8E040000 */        lw $a0, ($s0) # D_ovl33_801365F8 + 0
  /* 15FBE8 80133B98 0C04CDA7 */       jal func_ovl33_8013369C
  /* 15FBEC 80133B9C 00402025 */        or $a0, $v0, $zero
  /* 15FBF0 80133BA0 8FAF002C */        lw $t7, 0x2c($sp)
  /* 15FBF4 80133BA4 8FB90030 */        lw $t9, 0x30($sp)
  /* 15FBF8 80133BA8 24010007 */     addiu $at, $zero, 7
  /* 15FBFC 80133BAC 11E00005 */      beqz $t7, .L80133BC4
  /* 15FC00 80133BB0 272800A0 */     addiu $t0, $t9, 0xa0
  /* 15FC04 80133BB4 2418000C */     addiu $t8, $zero, 0xc
  /* 15FC08 80133BB8 3C018013 */       lui $at, %hi(D_ovl33_80136718)
  /* 15FC0C 80133BBC 10000005 */         b .L80133BD4
  /* 15FC10 80133BC0 AC386718 */        sw $t8, %lo(D_ovl33_80136718)($at)
  .L80133BC4:
  /* 15FC14 80133BC4 0101001A */       div $zero, $t0, $at
  /* 15FC18 80133BC8 00004812 */      mflo $t1
  /* 15FC1C 80133BCC 3C018013 */       lui $at, %hi(D_ovl33_80136718)
  /* 15FC20 80133BD0 AC296718 */        sw $t1, %lo(D_ovl33_80136718)($at)
  .L80133BD4:
  /* 15FC24 80133BD4 0C04CE10 */       jal func_ovl33_80133840
  /* 15FC28 80133BD8 00000000 */       nop 
  .L80133BDC:
  /* 15FC2C 80133BDC 3C028013 */       lui $v0, %hi(D_ovl33_80136718)
  /* 15FC30 80133BE0 8C426718 */        lw $v0, %lo(D_ovl33_80136718)($v0)
  /* 15FC34 80133BE4 3C108013 */       lui $s0, %hi(D_ovl33_801365F8)
  /* 15FC38 80133BE8 261065F8 */     addiu $s0, $s0, %lo(D_ovl33_801365F8)
  /* 15FC3C 80133BEC 14400007 */      bnez $v0, .L80133C0C
  /* 15FC40 80133BF0 2411000B */     addiu $s1, $zero, 0xb
  /* 15FC44 80133BF4 0C0E4201 */       jal func_ovl1_80390804
  /* 15FC48 80133BF8 24040111 */     addiu $a0, $zero, 0x111
  /* 15FC4C 80133BFC 14400009 */      bnez $v0, .L80133C24
  /* 15FC50 80133C00 AFA2002C */        sw $v0, 0x2c($sp)
  /* 15FC54 80133C04 3C028013 */       lui $v0, %hi(D_ovl33_80136718)
  /* 15FC58 80133C08 8C426718 */        lw $v0, %lo(D_ovl33_80136718)($v0)
  .L80133C0C:
  /* 15FC5C 80133C0C 14400025 */      bnez $v0, .L80133CA4
  /* 15FC60 80133C10 24040014 */     addiu $a0, $zero, 0x14
  /* 15FC64 80133C14 0C0E4227 */       jal func_ovl1_8039089C
  /* 15FC68 80133C18 24050001 */     addiu $a1, $zero, 1
  /* 15FC6C 80133C1C 10400021 */      beqz $v0, .L80133CA4
  /* 15FC70 80133C20 AFA20030 */        sw $v0, 0x30($sp)
  .L80133C24:
  /* 15FC74 80133C24 8E020000 */        lw $v0, ($s0) # D_ovl33_801365F8 + 0
  .L80133C28:
  /* 15FC78 80133C28 16220003 */       bne $s1, $v0, .L80133C38
  /* 15FC7C 80133C2C 244A0001 */     addiu $t2, $v0, 1
  /* 15FC80 80133C30 10000002 */         b .L80133C3C
  /* 15FC84 80133C34 AE000000 */        sw $zero, ($s0) # D_ovl33_801365F8 + 0
  .L80133C38:
  /* 15FC88 80133C38 AE0A0000 */        sw $t2, ($s0) # D_ovl33_801365F8 + 0
  .L80133C3C:
  /* 15FC8C 80133C3C 0C04C6D6 */       jal func_ovl33_80131B58
  /* 15FC90 80133C40 8E040000 */        lw $a0, ($s0) # D_ovl33_801365F8 + 0
  /* 15FC94 80133C44 0C04CD44 */       jal func_ovl33_80133510
  /* 15FC98 80133C48 00402025 */        or $a0, $v0, $zero
  /* 15FC9C 80133C4C 5040FFF6 */      beql $v0, $zero, .L80133C28
  /* 15FCA0 80133C50 8E020000 */        lw $v0, ($s0) # D_ovl33_801365F8 + 0
  /* 15FCA4 80133C54 0C04C6D6 */       jal func_ovl33_80131B58
  /* 15FCA8 80133C58 8E040000 */        lw $a0, ($s0) # D_ovl33_801365F8 + 0
  /* 15FCAC 80133C5C 0C04CDA7 */       jal func_ovl33_8013369C
  /* 15FCB0 80133C60 00402025 */        or $a0, $v0, $zero
  /* 15FCB4 80133C64 8FAB002C */        lw $t3, 0x2c($sp)
  /* 15FCB8 80133C68 8FAD0030 */        lw $t5, 0x30($sp)
  /* 15FCBC 80133C6C 240E00A0 */     addiu $t6, $zero, 0xa0
  /* 15FCC0 80133C70 11600005 */      beqz $t3, .L80133C88
  /* 15FCC4 80133C74 01CD7823 */      subu $t7, $t6, $t5
  /* 15FCC8 80133C78 240C000C */     addiu $t4, $zero, 0xc
  /* 15FCCC 80133C7C 3C018013 */       lui $at, %hi(D_ovl33_80136718)
  /* 15FCD0 80133C80 10000006 */         b .L80133C9C
  /* 15FCD4 80133C84 AC2C6718 */        sw $t4, %lo(D_ovl33_80136718)($at)
  .L80133C88:
  /* 15FCD8 80133C88 24010007 */     addiu $at, $zero, 7
  /* 15FCDC 80133C8C 01E1001A */       div $zero, $t7, $at
  /* 15FCE0 80133C90 0000C012 */      mflo $t8
  /* 15FCE4 80133C94 3C018013 */       lui $at, %hi(D_ovl33_80136718)
  /* 15FCE8 80133C98 AC386718 */        sw $t8, %lo(D_ovl33_80136718)($at)
  .L80133C9C:
  /* 15FCEC 80133C9C 0C04CE10 */       jal func_ovl33_80133840
  /* 15FCF0 80133CA0 00000000 */       nop 
  .L80133CA4:
  /* 15FCF4 80133CA4 8FBF001C */        lw $ra, 0x1c($sp)
  .L80133CA8:
  /* 15FCF8 80133CA8 8FB00014 */        lw $s0, 0x14($sp)
  /* 15FCFC 80133CAC 8FB10018 */        lw $s1, 0x18($sp)
  /* 15FD00 80133CB0 03E00008 */        jr $ra
  /* 15FD04 80133CB4 27BD0038 */     addiu $sp, $sp, 0x38

glabel func_ovl33_80133CB8
  /* 15FD08 80133CB8 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 15FD0C 80133CBC AFBF001C */        sw $ra, 0x1c($sp)
  /* 15FD10 80133CC0 AFB00018 */        sw $s0, 0x18($sp)
  /* 15FD14 80133CC4 0C0E41DB */       jal func_ovl1_8039076C
  /* 15FD18 80133CC8 3404D000 */       ori $a0, $zero, 0xd000
  /* 15FD1C 80133CCC 10400008 */      beqz $v0, .L80133CF0
  /* 15FD20 80133CD0 3C10800A */       lui $s0, %hi(gSceneData)
  /* 15FD24 80133CD4 26104AD0 */     addiu $s0, $s0, %lo(gSceneData)
  /* 15FD28 80133CD8 920E0000 */       lbu $t6, ($s0) # gSceneData + 0
  /* 15FD2C 80133CDC 24020001 */     addiu $v0, $zero, 1
  /* 15FD30 80133CE0 A2020000 */        sb $v0, ($s0) # gSceneData + 0
  /* 15FD34 80133CE4 A202003F */        sb $v0, 0x3f($s0) # gSceneData + 63
  /* 15FD38 80133CE8 0C00171D */       jal func_80005C74
  /* 15FD3C 80133CEC A20E0001 */        sb $t6, 1($s0) # gSceneData + 1
  .L80133CF0:
  /* 15FD40 80133CF0 3C028013 */       lui $v0, %hi(D_ovl33_8013671C)
  /* 15FD44 80133CF4 8C42671C */        lw $v0, %lo(D_ovl33_8013671C)($v0)
  /* 15FD48 80133CF8 3C10800A */       lui $s0, %hi(gSceneData)
  /* 15FD4C 80133CFC 2401012C */     addiu $at, $zero, 0x12c
  /* 15FD50 80133D00 1441000D */       bne $v0, $at, .L80133D38
  /* 15FD54 80133D04 26104AD0 */     addiu $s0, $s0, %lo(gSceneData)
  /* 15FD58 80133D08 3C048013 */       lui $a0, %hi(D_ovl33_801366F8)
  /* 15FD5C 80133D0C 0C04C6EA */       jal func_ovl33_80131BA8
  /* 15FD60 80133D10 8C8466F8 */        lw $a0, %lo(D_ovl33_801366F8)($a0)
  /* 15FD64 80133D14 3C038013 */       lui $v1, %hi(D_ovl33_801365F8)
  /* 15FD68 80133D18 246365F8 */     addiu $v1, $v1, %lo(D_ovl33_801365F8)
  /* 15FD6C 80133D1C AC620000 */        sw $v0, ($v1) # D_ovl33_801365F8 + 0
  /* 15FD70 80133D20 0C04C6D6 */       jal func_ovl33_80131B58
  /* 15FD74 80133D24 00402025 */        or $a0, $v0, $zero
  /* 15FD78 80133D28 0C04CDA7 */       jal func_ovl33_8013369C
  /* 15FD7C 80133D2C 00402025 */        or $a0, $v0, $zero
  /* 15FD80 80133D30 3C028013 */       lui $v0, %hi(D_ovl33_8013671C)
  /* 15FD84 80133D34 8C42671C */        lw $v0, %lo(D_ovl33_8013671C)($v0)
  .L80133D38:
  /* 15FD88 80133D38 24010258 */     addiu $at, $zero, 0x258
  /* 15FD8C 80133D3C 14410005 */       bne $v0, $at, .L80133D54
  /* 15FD90 80133D40 2418003D */     addiu $t8, $zero, 0x3d
  /* 15FD94 80133D44 920F0000 */       lbu $t7, ($s0) # gSceneData + 0
  /* 15FD98 80133D48 A2180000 */        sb $t8, ($s0) # gSceneData + 0
  /* 15FD9C 80133D4C 0C00171D */       jal func_80005C74
  /* 15FDA0 80133D50 A20F0001 */        sb $t7, 1($s0) # gSceneData + 1
  .L80133D54:
  /* 15FDA4 80133D54 8FBF001C */        lw $ra, 0x1c($sp)
  /* 15FDA8 80133D58 8FB00018 */        lw $s0, 0x18($sp)
  /* 15FDAC 80133D5C 27BD0020 */     addiu $sp, $sp, 0x20
  /* 15FDB0 80133D60 03E00008 */        jr $ra
  /* 15FDB4 80133D64 00000000 */       nop 

glabel func_ovl33_80133D68
  /* 15FDB8 80133D68 3C028013 */       lui $v0, %hi(D_ovl33_8013671C)
  /* 15FDBC 80133D6C 2442671C */     addiu $v0, $v0, %lo(D_ovl33_8013671C)
  /* 15FDC0 80133D70 8C4E0000 */        lw $t6, ($v0) # D_ovl33_8013671C + 0
  /* 15FDC4 80133D74 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 15FDC8 80133D78 AFBF0014 */        sw $ra, 0x14($sp)
  /* 15FDCC 80133D7C 25CF0001 */     addiu $t7, $t6, 1
  /* 15FDD0 80133D80 29E1000A */      slti $at, $t7, 0xa
  /* 15FDD4 80133D84 AFA40018 */        sw $a0, 0x18($sp)
  /* 15FDD8 80133D88 14200023 */      bnez $at, .L80133E18
  /* 15FDDC 80133D8C AC4F0000 */        sw $t7, ($v0) # D_ovl33_8013671C + 0
  /* 15FDE0 80133D90 3C038013 */       lui $v1, %hi(D_ovl33_80136718)
  /* 15FDE4 80133D94 24636718 */     addiu $v1, $v1, %lo(D_ovl33_80136718)
  /* 15FDE8 80133D98 8C620000 */        lw $v0, ($v1) # D_ovl33_80136718 + 0
  /* 15FDEC 80133D9C 2404FFEC */     addiu $a0, $zero, -0x14
  /* 15FDF0 80133DA0 10400002 */      beqz $v0, .L80133DAC
  /* 15FDF4 80133DA4 2459FFFF */     addiu $t9, $v0, -1
  /* 15FDF8 80133DA8 AC790000 */        sw $t9, ($v1) # D_ovl33_80136718 + 0
  .L80133DAC:
  /* 15FDFC 80133DAC 0C0E4281 */       jal func_ovl1_80390A04
  /* 15FE00 80133DB0 24050014 */     addiu $a1, $zero, 0x14
  /* 15FE04 80133DB4 1040000E */      beqz $v0, .L80133DF0
  /* 15FE08 80133DB8 2404FFEC */     addiu $a0, $zero, -0x14
  /* 15FE0C 80133DBC 0C0E42B0 */       jal func_ovl1_80390AC0
  /* 15FE10 80133DC0 24050014 */     addiu $a1, $zero, 0x14
  /* 15FE14 80133DC4 1040000A */      beqz $v0, .L80133DF0
  /* 15FE18 80133DC8 00000000 */       nop 
  /* 15FE1C 80133DCC 0C0E4201 */       jal func_ovl1_80390804
  /* 15FE20 80133DD0 24040111 */     addiu $a0, $zero, 0x111
  /* 15FE24 80133DD4 14400006 */      bnez $v0, .L80133DF0
  /* 15FE28 80133DD8 00000000 */       nop 
  /* 15FE2C 80133DDC 0C0E4201 */       jal func_ovl1_80390804
  /* 15FE30 80133DE0 24040222 */     addiu $a0, $zero, 0x222
  /* 15FE34 80133DE4 14400002 */      bnez $v0, .L80133DF0
  /* 15FE38 80133DE8 3C018013 */       lui $at, %hi(D_ovl33_80136718)
  /* 15FE3C 80133DEC AC206718 */        sw $zero, %lo(D_ovl33_80136718)($at)
  .L80133DF0:
  /* 15FE40 80133DF0 3C088013 */       lui $t0, %hi(D_ovl33_801366F0)
  /* 15FE44 80133DF4 8D0866F0 */        lw $t0, %lo(D_ovl33_801366F0)($t0)
  /* 15FE48 80133DF8 15000005 */      bnez $t0, .L80133E10
  /* 15FE4C 80133DFC 00000000 */       nop 
  /* 15FE50 80133E00 0C04CE2B */       jal func_ovl33_801338AC
  /* 15FE54 80133E04 00000000 */       nop 
  /* 15FE58 80133E08 10000004 */         b .L80133E1C
  /* 15FE5C 80133E0C 8FBF0014 */        lw $ra, 0x14($sp)
  .L80133E10:
  /* 15FE60 80133E10 0C04CF2E */       jal func_ovl33_80133CB8
  /* 15FE64 80133E14 00000000 */       nop 
  .L80133E18:
  /* 15FE68 80133E18 8FBF0014 */        lw $ra, 0x14($sp)
  .L80133E1C:
  /* 15FE6C 80133E1C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 15FE70 80133E20 03E00008 */        jr $ra
  /* 15FE74 80133E24 00000000 */       nop 

glabel func_ovl33_80133E28
  /* 15FE78 80133E28 27BDFFA8 */     addiu $sp, $sp, -0x58
  /* 15FE7C 80133E2C 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 15FE80 80133E30 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 15FE84 80133E34 3C188013 */       lui $t8, %hi(D_ovl33_80136720)
  /* 15FE88 80133E38 3C088013 */       lui $t0, %hi(D_ovl33_80136A40)
  /* 15FE8C 80133E3C AFBF0024 */        sw $ra, 0x24($sp)
  /* 15FE90 80133E40 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 15FE94 80133E44 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 15FE98 80133E48 27186720 */     addiu $t8, $t8, %lo(D_ovl33_80136720)
  /* 15FE9C 80133E4C 24190064 */     addiu $t9, $zero, 0x64
  /* 15FEA0 80133E50 25086A40 */     addiu $t0, $t0, %lo(D_ovl33_80136A40)
  /* 15FEA4 80133E54 24090007 */     addiu $t1, $zero, 7
  /* 15FEA8 80133E58 AFB00020 */        sw $s0, 0x20($sp)
  /* 15FEAC 80133E5C AFAE0034 */        sw $t6, 0x34($sp)
  /* 15FEB0 80133E60 AFAF0038 */        sw $t7, 0x38($sp)
  /* 15FEB4 80133E64 AFA0003C */        sw $zero, 0x3c($sp)
  /* 15FEB8 80133E68 AFA00040 */        sw $zero, 0x40($sp)
  /* 15FEBC 80133E6C AFB80044 */        sw $t8, 0x44($sp)
  /* 15FEC0 80133E70 AFB90048 */        sw $t9, 0x48($sp)
  /* 15FEC4 80133E74 AFA8004C */        sw $t0, 0x4c($sp)
  /* 15FEC8 80133E78 AFA90050 */        sw $t1, 0x50($sp)
  /* 15FECC 80133E7C 0C0337DE */       jal rldm_initialize
  /* 15FED0 80133E80 27A40034 */     addiu $a0, $sp, 0x34
  /* 15FED4 80133E84 3C108013 */       lui $s0, %hi(D_ovl33_80136228)
  /* 15FED8 80133E88 26106228 */     addiu $s0, $s0, %lo(D_ovl33_80136228)
  /* 15FEDC 80133E8C 02002025 */        or $a0, $s0, $zero
  /* 15FEE0 80133E90 0C0337BB */       jal rldm_bytes_need_to_load
  /* 15FEE4 80133E94 24050004 */     addiu $a1, $zero, 4
  /* 15FEE8 80133E98 00402025 */        or $a0, $v0, $zero
  /* 15FEEC 80133E9C 0C001260 */       jal hal_alloc
  /* 15FEF0 80133EA0 24050010 */     addiu $a1, $zero, 0x10
  /* 15FEF4 80133EA4 3C068013 */       lui $a2, %hi(D_ovl33_80136A78)
  /* 15FEF8 80133EA8 24C66A78 */     addiu $a2, $a2, %lo(D_ovl33_80136A78)
  /* 15FEFC 80133EAC 02002025 */        or $a0, $s0, $zero
  /* 15FF00 80133EB0 24050004 */     addiu $a1, $zero, 4
  /* 15FF04 80133EB4 0C033781 */       jal rldm_load_files_into
  /* 15FF08 80133EB8 00403825 */        or $a3, $v0, $zero
  /* 15FF0C 80133EBC 3C108000 */       lui $s0, %hi(D_NF_80000001)
  /* 15FF10 80133EC0 3C058013 */       lui $a1, %hi(func_ovl33_80133D68)
  /* 15FF14 80133EC4 24A53D68 */     addiu $a1, $a1, %lo(func_ovl33_80133D68)
  /* 15FF18 80133EC8 02003825 */        or $a3, $s0, $zero
  /* 15FF1C 80133ECC 00002025 */        or $a0, $zero, $zero
  /* 15FF20 80133ED0 0C00265A */       jal omMakeGObjCommon
  /* 15FF24 80133ED4 00003025 */        or $a2, $zero, $zero
  /* 15FF28 80133ED8 240A00FF */     addiu $t2, $zero, 0xff
  /* 15FF2C 80133EDC AFAA0010 */        sw $t2, 0x10($sp)
  /* 15FF30 80133EE0 00002025 */        or $a0, $zero, $zero
  /* 15FF34 80133EE4 02002825 */        or $a1, $s0, $zero
  /* 15FF38 80133EE8 24060064 */     addiu $a2, $zero, 0x64
  /* 15FF3C 80133EEC 0C002E7F */       jal func_8000B9FC
  /* 15FF40 80133EF0 24070003 */     addiu $a3, $zero, 3
  /* 15FF44 80133EF4 0C045624 */       jal func_ovl2_80115890
  /* 15FF48 80133EF8 00000000 */       nop 
  /* 15FF4C 80133EFC 0C04CD5A */       jal func_ovl33_80133568
  /* 15FF50 80133F00 00000000 */       nop 
  /* 15FF54 80133F04 0C03F4C0 */       jal efManager_AllocUserData
  /* 15FF58 80133F08 00000000 */       nop 
  /* 15FF5C 80133F0C 24040003 */     addiu $a0, $zero, 3
  /* 15FF60 80133F10 0C035C65 */       jal func_ovl2_800D7194
  /* 15FF64 80133F14 24050001 */     addiu $a1, $zero, 1
  /* 15FF68 80133F18 00008025 */        or $s0, $zero, $zero
  .L80133F1C:
  /* 15FF6C 80133F1C 0C035E1B */       jal func_ovl2_800D786C
  /* 15FF70 80133F20 02002025 */        or $a0, $s0, $zero
  /* 15FF74 80133F24 26100001 */     addiu $s0, $s0, %lo(D_NF_80000001)
  /* 15FF78 80133F28 2401000C */     addiu $at, $zero, 0xc
  /* 15FF7C 80133F2C 1601FFFB */       bne $s0, $at, .L80133F1C
  /* 15FF80 80133F30 00000000 */       nop 
  /* 15FF84 80133F34 3C048013 */       lui $a0, %hi(D_ovl2_80130D9C)
  /* 15FF88 80133F38 8C840D9C */        lw $a0, %lo(D_ovl2_80130D9C)($a0)
  /* 15FF8C 80133F3C 0C001260 */       jal hal_alloc
  /* 15FF90 80133F40 24050010 */     addiu $a1, $zero, 0x10
  /* 15FF94 80133F44 3C018013 */       lui $at, %hi(D_ovl33_801366EC)
  /* 15FF98 80133F48 0C04CC00 */       jal func_ovl33_80133000
  /* 15FF9C 80133F4C AC2266EC */        sw $v0, %lo(D_ovl33_801366EC)($at)
  /* 15FFA0 80133F50 0C04CC28 */       jal func_ovl33_801330A0
  /* 15FFA4 80133F54 00000000 */       nop 
  /* 15FFA8 80133F58 0C04CC50 */       jal func_ovl33_80133140
  /* 15FFAC 80133F5C 00000000 */       nop 
  /* 15FFB0 80133F60 0C04CC89 */       jal func_ovl33_80133224
  /* 15FFB4 80133F64 00000000 */       nop 
  /* 15FFB8 80133F68 0C04CCB1 */       jal func_ovl33_801332C4
  /* 15FFBC 80133F6C 00000000 */       nop 
  /* 15FFC0 80133F70 0C04CCD9 */       jal func_ovl33_80133364
  /* 15FFC4 80133F74 00000000 */       nop 
  /* 15FFC8 80133F78 0C04CD01 */       jal func_ovl33_80133404
  /* 15FFCC 80133F7C 00000000 */       nop 
  /* 15FFD0 80133F80 0C04C751 */       jal func_ovl33_80131D44
  /* 15FFD4 80133F84 00000000 */       nop 
  /* 15FFD8 80133F88 0C04C8BC */       jal func_ovl33_801322F0
  /* 15FFDC 80133F8C 00000000 */       nop 
  /* 15FFE0 80133F90 3C108013 */       lui $s0, %hi(D_ovl33_801365F8)
  /* 15FFE4 80133F94 261065F8 */     addiu $s0, $s0, %lo(D_ovl33_801365F8)
  /* 15FFE8 80133F98 0C04C6D6 */       jal func_ovl33_80131B58
  /* 15FFEC 80133F9C 8E040000 */        lw $a0, ($s0) # D_ovl33_801365F8 + 0
  /* 15FFF0 80133FA0 0C04C8E7 */       jal func_ovl33_8013239C
  /* 15FFF4 80133FA4 00402025 */        or $a0, $v0, $zero
  /* 15FFF8 80133FA8 0C04C6D6 */       jal func_ovl33_80131B58
  /* 15FFFC 80133FAC 8E040000 */        lw $a0, ($s0) # D_ovl33_801365F8 + 0
  /* 160000 80133FB0 0C04C700 */       jal func_ovl33_80131C00
  /* 160004 80133FB4 00402025 */        or $a0, $v0, $zero
  /* 160008 80133FB8 0C04C6D6 */       jal func_ovl33_80131B58
  /* 16000C 80133FBC 8E040000 */        lw $a0, ($s0) # D_ovl33_801365F8 + 0
  /* 160010 80133FC0 0C04C7CA */       jal func_ovl33_80131F28
  /* 160014 80133FC4 00402025 */        or $a0, $v0, $zero
  /* 160018 80133FC8 0C04C6D6 */       jal func_ovl33_80131B58
  /* 16001C 80133FCC 8E040000 */        lw $a0, ($s0) # D_ovl33_801365F8 + 0
  /* 160020 80133FD0 0C04C839 */       jal func_ovl33_801320E4
  /* 160024 80133FD4 00402025 */        or $a0, $v0, $zero
  /* 160028 80133FD8 0C04CBE8 */       jal func_ovl33_80132FA0
  /* 16002C 80133FDC 00000000 */       nop 
  /* 160030 80133FE0 0C04C6D6 */       jal func_ovl33_80131B58
  /* 160034 80133FE4 8E040000 */        lw $a0, ($s0) # D_ovl33_801365F8 + 0
  /* 160038 80133FE8 0C04CB10 */       jal func_ovl33_80132C40
  /* 16003C 80133FEC 00402025 */        or $a0, $v0, $zero
  /* 160040 80133FF0 3C014234 */       lui $at, (0x42340000 >> 16) # 45.0
  /* 160044 80133FF4 44816000 */      mtc1 $at, $f12 # 45.0 to cop1
  /* 160048 80133FF8 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 16004C 80133FFC 44817000 */      mtc1 $at, $f14 # 10.0 to cop1
  /* 160050 80134000 240B00FF */     addiu $t3, $zero, 0xff
  /* 160054 80134004 240C00FF */     addiu $t4, $zero, 0xff
  /* 160058 80134008 AFAC0014 */        sw $t4, 0x14($sp)
  /* 16005C 8013400C AFAB0010 */        sw $t3, 0x10($sp)
  /* 160060 80134010 240600FF */     addiu $a2, $zero, 0xff
  /* 160064 80134014 0C0E4138 */       jal func_ovl1_803904E0
  /* 160068 80134018 240700FF */     addiu $a3, $zero, 0xff
  /* 16006C 8013401C 3C0D800A */       lui $t5, %hi((gSceneData + 0x1))
  /* 160070 80134020 91AD4AD1 */       lbu $t5, %lo((gSceneData + 0x1))($t5)
  /* 160074 80134024 2401003A */     addiu $at, $zero, 0x3a
  /* 160078 80134028 00002025 */        or $a0, $zero, $zero
  /* 16007C 8013402C 55A10004 */      bnel $t5, $at, .L80134040
  /* 160080 80134030 8FBF0024 */        lw $ra, 0x24($sp)
  /* 160084 80134034 0C0082AD */       jal func_80020AB4
  /* 160088 80134038 2405002B */     addiu $a1, $zero, 0x2b
  /* 16008C 8013403C 8FBF0024 */        lw $ra, 0x24($sp)
  .L80134040:
  /* 160090 80134040 8FB00020 */        lw $s0, 0x20($sp)
  /* 160094 80134044 27BD0058 */     addiu $sp, $sp, 0x58
  /* 160098 80134048 03E00008 */        jr $ra
  /* 16009C 8013404C 00000000 */       nop 

glabel char_bkg_info_entry
  /* 1600A0 80134050 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 1600A4 80134054 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1600A8 80134058 3C048013 */       lui $a0, %hi(D_ovl33_801364FC)
  /* 1600AC 8013405C 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 1600B0 80134060 248464FC */     addiu $a0, $a0, %lo(D_ovl33_801364FC)
  /* 1600B4 80134064 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1600B8 80134068 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 1600BC 8013406C 0C001C09 */       jal func_80007024
  /* 1600C0 80134070 AC8F000C */        sw $t7, 0xc($a0) # D_ovl33_801364FC + 12
  /* 1600C4 80134074 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 1600C8 80134078 3C198013 */       lui $t9, %hi(D_NF_80136A90)
  /* 1600CC 8013407C 3C048013 */       lui $a0, %hi(D_ovl33_80136518)
  /* 1600D0 80134080 27396A90 */     addiu $t9, $t9, %lo(D_NF_80136A90)
  /* 1600D4 80134084 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 1600D8 80134088 24846518 */     addiu $a0, $a0, %lo(D_ovl33_80136518)
  /* 1600DC 8013408C 03194023 */      subu $t0, $t8, $t9
  /* 1600E0 80134090 0C0289A6 */       jal func_800A2698
  /* 1600E4 80134094 AC880010 */        sw $t0, 0x10($a0) # D_ovl33_80136518 + 16
  /* 1600E8 80134098 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1600EC 8013409C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1600F0 801340A0 03E00008 */        jr $ra
  /* 1600F4 801340A4 00000000 */       nop 

  /* 1600F8 801340A8 00000000 */       nop 
  /* 1600FC 801340AC 00000000 */       nop 
