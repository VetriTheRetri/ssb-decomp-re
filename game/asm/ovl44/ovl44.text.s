.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80131B00 -> 0x801325D0

glabel func_ovl44_80131B00
  /* 16F130 80131B00 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 16F134 80131B04 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16F138 80131B08 8C830000 */        lw $v1, ($a0)
  /* 16F13C 80131B0C 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 16F140 80131B10 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 16F144 80131B14 246E0008 */     addiu $t6, $v1, 8
  /* 16F148 80131B18 AC8E0000 */        sw $t6, ($a0)
  /* 16F14C 80131B1C 3C180002 */       lui $t8, 2
  /* 16F150 80131B20 AC780004 */        sw $t8, 4($v1)
  /* 16F154 80131B24 AC6F0000 */        sw $t7, ($v1)
  /* 16F158 80131B28 0C0E4147 */       jal func_ovl1_8039051C
  /* 16F15C 80131B2C AFA40028 */        sw $a0, 0x28($sp)
  /* 16F160 80131B30 0C0E414A */       jal func_ovl1_80390528
  /* 16F164 80131B34 E7A0001C */      swc1 $f0, 0x1c($sp)
  /* 16F168 80131B38 44060000 */      mfc1 $a2, $f0
  /* 16F16C 80131B3C 8FA40028 */        lw $a0, 0x28($sp)
  /* 16F170 80131B40 0C03F2DC */       jal func_ovl2_800FCB70
  /* 16F174 80131B44 8FA5001C */        lw $a1, 0x1c($sp)
  /* 16F178 80131B48 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16F17C 80131B4C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 16F180 80131B50 03E00008 */        jr $ra
  /* 16F184 80131B54 00000000 */       nop 

glabel func_ovl44_80131B58
  /* 16F188 80131B58 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 16F18C 80131B5C AFBF0014 */        sw $ra, 0x14($sp)
  /* 16F190 80131B60 8C820084 */        lw $v0, 0x84($a0)
  /* 16F194 80131B64 AFA40020 */        sw $a0, 0x20($sp)
  /* 16F198 80131B68 0C0037CD */       jal func_8000DF34
  /* 16F19C 80131B6C AFA2001C */        sw $v0, 0x1c($sp)
  /* 16F1A0 80131B70 8FA40020 */        lw $a0, 0x20($sp)
  /* 16F1A4 80131B74 8FA2001C */        lw $v0, 0x1c($sp)
  /* 16F1A8 80131B78 8C8E0074 */        lw $t6, 0x74($a0)
  /* 16F1AC 80131B7C 8C4F0074 */        lw $t7, 0x74($v0)
  /* 16F1B0 80131B80 C5C4001C */      lwc1 $f4, 0x1c($t6)
  /* 16F1B4 80131B84 E5E4001C */      swc1 $f4, 0x1c($t7)
  /* 16F1B8 80131B88 8C980074 */        lw $t8, 0x74($a0)
  /* 16F1BC 80131B8C 8C590074 */        lw $t9, 0x74($v0)
  /* 16F1C0 80131B90 C7060020 */      lwc1 $f6, 0x20($t8)
  /* 16F1C4 80131B94 E7260020 */      swc1 $f6, 0x20($t9)
  /* 16F1C8 80131B98 8C880074 */        lw $t0, 0x74($a0)
  /* 16F1CC 80131B9C 8C490074 */        lw $t1, 0x74($v0)
  /* 16F1D0 80131BA0 C5080024 */      lwc1 $f8, 0x24($t0)
  /* 16F1D4 80131BA4 E5280024 */      swc1 $f8, 0x24($t1)
  /* 16F1D8 80131BA8 8C8A0074 */        lw $t2, 0x74($a0)
  /* 16F1DC 80131BAC 8C4B0074 */        lw $t3, 0x74($v0)
  /* 16F1E0 80131BB0 C54A0030 */      lwc1 $f10, 0x30($t2)
  /* 16F1E4 80131BB4 E56A0030 */      swc1 $f10, 0x30($t3)
  /* 16F1E8 80131BB8 8C8C0074 */        lw $t4, 0x74($a0)
  /* 16F1EC 80131BBC 8C4D0074 */        lw $t5, 0x74($v0)
  /* 16F1F0 80131BC0 C5900034 */      lwc1 $f16, 0x34($t4)
  /* 16F1F4 80131BC4 E5B00034 */      swc1 $f16, 0x34($t5)
  /* 16F1F8 80131BC8 8C8E0074 */        lw $t6, 0x74($a0)
  /* 16F1FC 80131BCC 8C4F0074 */        lw $t7, 0x74($v0)
  /* 16F200 80131BD0 C5D20038 */      lwc1 $f18, 0x38($t6)
  /* 16F204 80131BD4 E5F20038 */      swc1 $f18, 0x38($t7)
  /* 16F208 80131BD8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16F20C 80131BDC 27BD0020 */     addiu $sp, $sp, 0x20
  /* 16F210 80131BE0 03E00008 */        jr $ra
  /* 16F214 80131BE4 00000000 */       nop 

glabel func_ovl44_80131BE8
  /* 16F218 80131BE8 27BDFF18 */     addiu $sp, $sp, -0xe8
  /* 16F21C 80131BEC 3C0F8013 */       lui $t7, %hi(D_ovl44_80132610)
  /* 16F220 80131BF0 AFBF0044 */        sw $ra, 0x44($sp)
  /* 16F224 80131BF4 AFBE0040 */        sw $fp, 0x40($sp)
  /* 16F228 80131BF8 AFB7003C */        sw $s7, 0x3c($sp)
  /* 16F22C 80131BFC AFB60038 */        sw $s6, 0x38($sp)
  /* 16F230 80131C00 AFB50034 */        sw $s5, 0x34($sp)
  /* 16F234 80131C04 AFB40030 */        sw $s4, 0x30($sp)
  /* 16F238 80131C08 AFB3002C */        sw $s3, 0x2c($sp)
  /* 16F23C 80131C0C AFB20028 */        sw $s2, 0x28($sp)
  /* 16F240 80131C10 AFB10024 */        sw $s1, 0x24($sp)
  /* 16F244 80131C14 AFB00020 */        sw $s0, 0x20($sp)
  /* 16F248 80131C18 F7B40018 */      sdc1 $f20, 0x18($sp)
  /* 16F24C 80131C1C 25EF2610 */     addiu $t7, $t7, %lo(D_ovl44_80132610)
  /* 16F250 80131C20 8DF90000 */        lw $t9, ($t7) # D_ovl44_80132610 + 0
  /* 16F254 80131C24 8DF80004 */        lw $t8, 4($t7) # D_ovl44_80132610 + 4
  /* 16F258 80131C28 27AE00B8 */     addiu $t6, $sp, 0xb8
  /* 16F25C 80131C2C ADD90000 */        sw $t9, ($t6)
  /* 16F260 80131C30 ADD80004 */        sw $t8, 4($t6)
  /* 16F264 80131C34 8DF8000C */        lw $t8, 0xc($t7) # D_ovl44_80132610 + 12
  /* 16F268 80131C38 8DF90008 */        lw $t9, 8($t7) # D_ovl44_80132610 + 8
  /* 16F26C 80131C3C 3C098013 */       lui $t1, %hi(D_ovl44_80132630)
  /* 16F270 80131C40 ADD8000C */        sw $t8, 0xc($t6)
  /* 16F274 80131C44 ADD90008 */        sw $t9, 8($t6)
  /* 16F278 80131C48 8DF90010 */        lw $t9, 0x10($t7) # D_ovl44_80132610 + 16
  /* 16F27C 80131C4C 8DF80014 */        lw $t8, 0x14($t7) # D_ovl44_80132610 + 20
  /* 16F280 80131C50 25292630 */     addiu $t1, $t1, %lo(D_ovl44_80132630)
  /* 16F284 80131C54 ADD90010 */        sw $t9, 0x10($t6)
  /* 16F288 80131C58 ADD80014 */        sw $t8, 0x14($t6)
  /* 16F28C 80131C5C 8DF8001C */        lw $t8, 0x1c($t7) # D_ovl44_80132610 + 28
  /* 16F290 80131C60 8DF90018 */        lw $t9, 0x18($t7) # D_ovl44_80132610 + 24
  /* 16F294 80131C64 27A80098 */     addiu $t0, $sp, 0x98
  /* 16F298 80131C68 ADD8001C */        sw $t8, 0x1c($t6)
  /* 16F29C 80131C6C ADD90018 */        sw $t9, 0x18($t6)
  /* 16F2A0 80131C70 8D2A0004 */        lw $t2, 4($t1) # D_ovl44_80132630 + 4
  /* 16F2A4 80131C74 8D2B0000 */        lw $t3, ($t1) # D_ovl44_80132630 + 0
  /* 16F2A8 80131C78 3C148013 */       lui $s4, %hi(D_ovl44_80132718)
  /* 16F2AC 80131C7C AD0A0004 */        sw $t2, 4($t0)
  /* 16F2B0 80131C80 AD0B0000 */        sw $t3, ($t0)
  /* 16F2B4 80131C84 8D2B0008 */        lw $t3, 8($t1) # D_ovl44_80132630 + 8
  /* 16F2B8 80131C88 8D2A000C */        lw $t2, 0xc($t1) # D_ovl44_80132630 + 12
  /* 16F2BC 80131C8C 3C168013 */       lui $s6, %hi(func_ovl44_80131B58)
  /* 16F2C0 80131C90 AD0B0008 */        sw $t3, 8($t0)
  /* 16F2C4 80131C94 AD0A000C */        sw $t2, 0xc($t0)
  /* 16F2C8 80131C98 8D2A0014 */        lw $t2, 0x14($t1) # D_ovl44_80132630 + 20
  /* 16F2CC 80131C9C 8D2B0010 */        lw $t3, 0x10($t1) # D_ovl44_80132630 + 16
  /* 16F2D0 80131CA0 3C178011 */       lui $s7, %hi(D_ovl2_80116DD0)
  /* 16F2D4 80131CA4 AD0A0014 */        sw $t2, 0x14($t0)
  /* 16F2D8 80131CA8 AD0B0010 */        sw $t3, 0x10($t0)
  /* 16F2DC 80131CAC 8D2B0018 */        lw $t3, 0x18($t1) # D_ovl44_80132630 + 24
  /* 16F2E0 80131CB0 8D2A001C */        lw $t2, 0x1c($t1) # D_ovl44_80132630 + 28
  /* 16F2E4 80131CB4 4480A000 */      mtc1 $zero, $f20
  /* 16F2E8 80131CB8 26F76DD0 */     addiu $s7, $s7, %lo(D_ovl2_80116DD0)
  /* 16F2EC 80131CBC 26D61B58 */     addiu $s6, $s6, %lo(func_ovl44_80131B58)
  /* 16F2F0 80131CC0 26942718 */     addiu $s4, $s4, %lo(D_ovl44_80132718)
  /* 16F2F4 80131CC4 27B100B8 */     addiu $s1, $sp, 0xb8
  /* 16F2F8 80131CC8 27B20098 */     addiu $s2, $sp, 0x98
  /* 16F2FC 80131CCC 27B50058 */     addiu $s5, $sp, 0x58
  /* 16F300 80131CD0 241E0005 */     addiu $fp, $zero, 5
  /* 16F304 80131CD4 AD0B0018 */        sw $t3, 0x18($t0)
  /* 16F308 80131CD8 AD0A001C */        sw $t2, 0x1c($t0)
  .L80131CDC:
  /* 16F30C 80131CDC 02E07025 */        or $t6, $s7, $zero
  /* 16F310 80131CE0 02A07825 */        or $t7, $s5, $zero
  /* 16F314 80131CE4 26F8003C */     addiu $t8, $s7, 0x3c
  .L80131CE8:
  /* 16F318 80131CE8 8DCD0000 */        lw $t5, ($t6)
  /* 16F31C 80131CEC 25CE000C */     addiu $t6, $t6, 0xc
  /* 16F320 80131CF0 25EF000C */     addiu $t7, $t7, 0xc
  /* 16F324 80131CF4 ADEDFFF4 */        sw $t5, -0xc($t7) # D_ovl44_80132610 + -12
  /* 16F328 80131CF8 8DCCFFF8 */        lw $t4, -8($t6)
  /* 16F32C 80131CFC ADECFFF8 */        sw $t4, -8($t7) # D_ovl44_80132610 + -8
  /* 16F330 80131D00 8DCDFFFC */        lw $t5, -4($t6)
  /* 16F334 80131D04 15D8FFF8 */       bne $t6, $t8, .L80131CE8
  /* 16F338 80131D08 ADEDFFFC */        sw $t5, -4($t7) # D_ovl44_80132610 + -4
  /* 16F33C 80131D0C 8DCD0000 */        lw $t5, ($t6)
  /* 16F340 80131D10 00002825 */        or $a1, $zero, $zero
  /* 16F344 80131D14 ADED0000 */        sw $t5, ($t7) # D_ovl44_80132610 + 0
  /* 16F348 80131D18 8E240000 */        lw $a0, ($s1)
  /* 16F34C 80131D1C 0C03B03B */       jal func_ovl2_800EC0EC
  /* 16F350 80131D20 AFA40058 */        sw $a0, 0x58($sp)
  /* 16F354 80131D24 8E990000 */        lw $t9, ($s4) # D_ovl44_80132718 + 0
  /* 16F358 80131D28 A3A2006F */        sb $v0, 0x6f($sp)
  /* 16F35C 80131D2C E7B4005C */      swc1 $f20, 0x5c($sp)
  /* 16F360 80131D30 E7B40060 */      swc1 $f20, 0x60($sp)
  /* 16F364 80131D34 E7B40064 */      swc1 $f20, 0x64($sp)
  /* 16F368 80131D38 02A02025 */        or $a0, $s5, $zero
  /* 16F36C 80131D3C 0C035FCF */       jal ftManager_CreateFighter
  /* 16F370 80131D40 AFB90090 */        sw $t9, 0x90($sp)
  /* 16F374 80131D44 8E280000 */        lw $t0, ($s1)
  /* 16F378 80131D48 00408025 */        or $s0, $v0, $zero
  /* 16F37C 80131D4C 00409825 */        or $s3, $v0, $zero
  /* 16F380 80131D50 17C80003 */       bne $fp, $t0, .L80131D60
  /* 16F384 80131D54 02002025 */        or $a0, $s0, $zero
  /* 16F388 80131D58 3C018013 */       lui $at, %hi(D_ovl44_80132738)
  /* 16F38C 80131D5C AC222738 */        sw $v0, %lo(D_ovl44_80132738)($at)
  .L80131D60:
  /* 16F390 80131D60 3C050001 */       lui $a1, (0x10006 >> 16) # 65542
  /* 16F394 80131D64 0C0E4173 */       jal func_ovl1_803905CC
  /* 16F398 80131D68 34A50006 */       ori $a1, $a1, (0x10006 & 0xFFFF) # 65542
  /* 16F39C 80131D6C 00002025 */        or $a0, $zero, $zero
  /* 16F3A0 80131D70 00002825 */        or $a1, $zero, $zero
  /* 16F3A4 80131D74 24060011 */     addiu $a2, $zero, 0x11
  /* 16F3A8 80131D78 0C00265A */       jal omMakeGObjCommon
  /* 16F3AC 80131D7C 3C078000 */       lui $a3, 0x8000
  /* 16F3B0 80131D80 00408025 */        or $s0, $v0, $zero
  /* 16F3B4 80131D84 AC530084 */        sw $s3, 0x84($v0)
  /* 16F3B8 80131D88 00402025 */        or $a0, $v0, $zero
  /* 16F3BC 80131D8C 0C0024B4 */       jal func_800092D0
  /* 16F3C0 80131D90 00002825 */        or $a1, $zero, $zero
  /* 16F3C4 80131D94 00409825 */        or $s3, $v0, $zero
  /* 16F3C8 80131D98 00402025 */        or $a0, $v0, $zero
  /* 16F3CC 80131D9C 2405001C */     addiu $a1, $zero, 0x1c
  /* 16F3D0 80131DA0 0C002330 */       jal func_80008CC0
  /* 16F3D4 80131DA4 00003025 */        or $a2, $zero, $zero
  /* 16F3D8 80131DA8 3C0A8013 */       lui $t2, %hi(D_ovl44_80132AA0)
  /* 16F3DC 80131DAC 8D4A2AA0 */        lw $t2, %lo(D_ovl44_80132AA0)($t2)
  /* 16F3E0 80131DB0 8E490000 */        lw $t1, ($s2)
  /* 16F3E4 80131DB4 4406A000 */      mfc1 $a2, $f20
  /* 16F3E8 80131DB8 02602025 */        or $a0, $s3, $zero
  /* 16F3EC 80131DBC 0C002F47 */       jal func_8000BD1C
  /* 16F3F0 80131DC0 012A2821 */      addu $a1, $t1, $t2
  /* 16F3F4 80131DC4 02002025 */        or $a0, $s0, $zero
  /* 16F3F8 80131DC8 02C02825 */        or $a1, $s6, $zero
  /* 16F3FC 80131DCC 24060001 */     addiu $a2, $zero, 1
  /* 16F400 80131DD0 0C002062 */       jal omAddGObjCommonProc
  /* 16F404 80131DD4 24070001 */     addiu $a3, $zero, 1
  /* 16F408 80131DD8 0C0037CD */       jal func_8000DF34
  /* 16F40C 80131DDC 02002025 */        or $a0, $s0, $zero
  /* 16F410 80131DE0 26520004 */     addiu $s2, $s2, 4
  /* 16F414 80131DE4 27AB00B8 */     addiu $t3, $sp, 0xb8
  /* 16F418 80131DE8 26310004 */     addiu $s1, $s1, 4
  /* 16F41C 80131DEC 164BFFBB */       bne $s2, $t3, .L80131CDC
  /* 16F420 80131DF0 26940004 */     addiu $s4, $s4, 4
  /* 16F424 80131DF4 8FBF0044 */        lw $ra, 0x44($sp)
  /* 16F428 80131DF8 D7B40018 */      ldc1 $f20, 0x18($sp)
  /* 16F42C 80131DFC 8FB00020 */        lw $s0, 0x20($sp)
  /* 16F430 80131E00 8FB10024 */        lw $s1, 0x24($sp)
  /* 16F434 80131E04 8FB20028 */        lw $s2, 0x28($sp)
  /* 16F438 80131E08 8FB3002C */        lw $s3, 0x2c($sp)
  /* 16F43C 80131E0C 8FB40030 */        lw $s4, 0x30($sp)
  /* 16F440 80131E10 8FB50034 */        lw $s5, 0x34($sp)
  /* 16F444 80131E14 8FB60038 */        lw $s6, 0x38($sp)
  /* 16F448 80131E18 8FB7003C */        lw $s7, 0x3c($sp)
  /* 16F44C 80131E1C 8FBE0040 */        lw $fp, 0x40($sp)
  /* 16F450 80131E20 03E00008 */        jr $ra
  /* 16F454 80131E24 27BD00E8 */     addiu $sp, $sp, 0xe8

glabel func_ovl44_80131E28
  /* 16F458 80131E28 8C820074 */        lw $v0, 0x74($a0)
  /* 16F45C 80131E2C 3C0141F0 */       lui $at, (0x41F00000 >> 16) # 30.0
  /* 16F460 80131E30 44813000 */      mtc1 $at, $f6 # 30.0 to cop1
  /* 16F464 80131E34 C4440058 */      lwc1 $f4, 0x58($v0)
  /* 16F468 80131E38 44805000 */      mtc1 $zero, $f10
  /* 16F46C 80131E3C 3C01C3A0 */       lui $at, 0xc3a0
  /* 16F470 80131E40 46062200 */     add.s $f8, $f4, $f6
  /* 16F474 80131E44 E4480058 */      swc1 $f8, 0x58($v0)
  /* 16F478 80131E48 C4400058 */      lwc1 $f0, 0x58($v0)
  /* 16F47C 80131E4C 4600503C */    c.lt.s $f10, $f0
  /* 16F480 80131E50 00000000 */       nop 
  /* 16F484 80131E54 45020007 */     bc1fl .L80131E74
  /* 16F488 80131E58 3C0143A0 */       lui $at, (0x43A00000 >> 16) # 320.0
  /* 16F48C 80131E5C 44818000 */      mtc1 $at, $f16 # 320.0 to cop1
  /* 16F490 80131E60 00000000 */       nop 
  /* 16F494 80131E64 46100480 */     add.s $f18, $f0, $f16
  /* 16F498 80131E68 E4520058 */      swc1 $f18, 0x58($v0)
  /* 16F49C 80131E6C C4400058 */      lwc1 $f0, 0x58($v0)
  /* 16F4A0 80131E70 3C0143A0 */       lui $at, (0x43A00000 >> 16) # 320.0
  .L80131E74:
  /* 16F4A4 80131E74 44812000 */      mtc1 $at, $f4 # 320.0 to cop1
  /* 16F4A8 80131E78 8C4E0008 */        lw $t6, 8($v0)
  /* 16F4AC 80131E7C 46040180 */     add.s $f6, $f0, $f4
  /* 16F4B0 80131E80 03E00008 */        jr $ra
  /* 16F4B4 80131E84 E5C60058 */      swc1 $f6, 0x58($t6)

glabel func_ovl44_80131E88
  /* 16F4B8 80131E88 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 16F4BC 80131E8C AFBF001C */        sw $ra, 0x1c($sp)
  /* 16F4C0 80131E90 00002025 */        or $a0, $zero, $zero
  /* 16F4C4 80131E94 00002825 */        or $a1, $zero, $zero
  /* 16F4C8 80131E98 24060011 */     addiu $a2, $zero, 0x11
  /* 16F4CC 80131E9C 0C00265A */       jal omMakeGObjCommon
  /* 16F4D0 80131EA0 3C078000 */       lui $a3, 0x8000
  /* 16F4D4 80131EA4 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 16F4D8 80131EA8 240EFFFF */     addiu $t6, $zero, -1
  /* 16F4DC 80131EAC AFA2002C */        sw $v0, 0x2c($sp)
  /* 16F4E0 80131EB0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16F4E4 80131EB4 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 16F4E8 80131EB8 00402025 */        or $a0, $v0, $zero
  /* 16F4EC 80131EBC 2406001C */     addiu $a2, $zero, 0x1c
  /* 16F4F0 80131EC0 0C00277D */       jal func_80009DF4
  /* 16F4F4 80131EC4 3C078000 */       lui $a3, 0x8000
  /* 16F4F8 80131EC8 3C0F8013 */       lui $t7, %hi(D_ovl44_80132AA0)
  /* 16F4FC 80131ECC 8DEF2AA0 */        lw $t7, %lo(D_ovl44_80132AA0)($t7)
  /* 16F500 80131ED0 3C030000 */       lui $v1, %hi(D_NF_000058A0)
  /* 16F504 80131ED4 246358A0 */     addiu $v1, $v1, %lo(D_NF_000058A0)
  /* 16F508 80131ED8 AFA30020 */        sw $v1, 0x20($sp)
  /* 16F50C 80131EDC 8FA4002C */        lw $a0, 0x2c($sp)
  /* 16F510 80131EE0 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 16F514 80131EE4 01E32821 */      addu $a1, $t7, $v1
  /* 16F518 80131EE8 3C014000 */       lui $at, (0x40000000 >> 16) # 2.0
  /* 16F51C 80131EEC 44810000 */      mtc1 $at, $f0 # 2.0 to cop1
  /* 16F520 80131EF0 8FA30020 */        lw $v1, 0x20($sp)
  /* 16F524 80131EF4 94580024 */       lhu $t8, 0x24($v0)
  /* 16F528 80131EF8 3C01C3A0 */       lui $at, (0xC3A00000 >> 16) # -320.0
  /* 16F52C 80131EFC 44812000 */      mtc1 $at, $f4 # -320.0 to cop1
  /* 16F530 80131F00 44803000 */      mtc1 $zero, $f6
  /* 16F534 80131F04 3319FFDF */      andi $t9, $t8, 0xffdf
  /* 16F538 80131F08 A4590024 */        sh $t9, 0x24($v0)
  /* 16F53C 80131F0C 3C088013 */       lui $t0, %hi(D_ovl44_80132AA0)
  /* 16F540 80131F10 E4400018 */      swc1 $f0, 0x18($v0)
  /* 16F544 80131F14 E440001C */      swc1 $f0, 0x1c($v0)
  /* 16F548 80131F18 E4440058 */      swc1 $f4, 0x58($v0)
  /* 16F54C 80131F1C E446005C */      swc1 $f6, 0x5c($v0)
  /* 16F550 80131F20 8D082AA0 */        lw $t0, %lo(D_ovl44_80132AA0)($t0)
  /* 16F554 80131F24 8FA4002C */        lw $a0, 0x2c($sp)
  /* 16F558 80131F28 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 16F55C 80131F2C 01032821 */      addu $a1, $t0, $v1
  /* 16F560 80131F30 3C014000 */       lui $at, (0x40000000 >> 16) # 2.0
  /* 16F564 80131F34 44810000 */      mtc1 $at, $f0 # 2.0 to cop1
  /* 16F568 80131F38 44801000 */      mtc1 $zero, $f2
  /* 16F56C 80131F3C 94490024 */       lhu $t1, 0x24($v0)
  /* 16F570 80131F40 3C058013 */       lui $a1, %hi(func_ovl44_80131E28)
  /* 16F574 80131F44 E4400018 */      swc1 $f0, 0x18($v0)
  /* 16F578 80131F48 312AFFDF */      andi $t2, $t1, 0xffdf
  /* 16F57C 80131F4C A44A0024 */        sh $t2, 0x24($v0)
  /* 16F580 80131F50 E440001C */      swc1 $f0, 0x1c($v0)
  /* 16F584 80131F54 E4420058 */      swc1 $f2, 0x58($v0)
  /* 16F588 80131F58 E442005C */      swc1 $f2, 0x5c($v0)
  /* 16F58C 80131F5C 8FA4002C */        lw $a0, 0x2c($sp)
  /* 16F590 80131F60 24A51E28 */     addiu $a1, $a1, %lo(func_ovl44_80131E28)
  /* 16F594 80131F64 24060001 */     addiu $a2, $zero, 1
  /* 16F598 80131F68 0C002062 */       jal omAddGObjCommonProc
  /* 16F59C 80131F6C 24070001 */     addiu $a3, $zero, 1
  /* 16F5A0 80131F70 8FBF001C */        lw $ra, 0x1c($sp)
  /* 16F5A4 80131F74 27BD0030 */     addiu $sp, $sp, 0x30
  /* 16F5A8 80131F78 03E00008 */        jr $ra
  /* 16F5AC 80131F7C 00000000 */       nop 

glabel func_ovl44_80131F80
  /* 16F5B0 80131F80 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 16F5B4 80131F84 AFBF0024 */        sw $ra, 0x24($sp)
  /* 16F5B8 80131F88 AFB00020 */        sw $s0, 0x20($sp)
  /* 16F5BC 80131F8C 00002025 */        or $a0, $zero, $zero
  /* 16F5C0 80131F90 00002825 */        or $a1, $zero, $zero
  /* 16F5C4 80131F94 24060013 */     addiu $a2, $zero, 0x13
  /* 16F5C8 80131F98 0C00265A */       jal omMakeGObjCommon
  /* 16F5CC 80131F9C 3C078000 */       lui $a3, 0x8000
  /* 16F5D0 80131FA0 3C0E8013 */       lui $t6, %hi(D_ovl44_80132AA8)
  /* 16F5D4 80131FA4 8DCE2AA8 */        lw $t6, %lo(D_ovl44_80132AA8)($t6)
  /* 16F5D8 80131FA8 3C0F0000 */       lui $t7, %hi(D_NF_000035F8)
  /* 16F5DC 80131FAC 25EF35F8 */     addiu $t7, $t7, %lo(D_NF_000035F8)
  /* 16F5E0 80131FB0 00408025 */        or $s0, $v0, $zero
  /* 16F5E4 80131FB4 00402025 */        or $a0, $v0, $zero
  /* 16F5E8 80131FB8 00003025 */        or $a2, $zero, $zero
  /* 16F5EC 80131FBC 0C003C48 */       jal func_8000F120
  /* 16F5F0 80131FC0 01CF2821 */      addu $a1, $t6, $t7
  /* 16F5F4 80131FC4 3C058001 */       lui $a1, %hi(func_80014038)
  /* 16F5F8 80131FC8 2418FFFF */     addiu $t8, $zero, -1
  /* 16F5FC 80131FCC AFB80010 */        sw $t8, 0x10($sp)
  /* 16F600 80131FD0 24A54038 */     addiu $a1, $a1, %lo(func_80014038)
  /* 16F604 80131FD4 02002025 */        or $a0, $s0, $zero
  /* 16F608 80131FD8 24060006 */     addiu $a2, $zero, 6
  /* 16F60C 80131FDC 0C00277D */       jal func_80009DF4
  /* 16F610 80131FE0 3C078000 */       lui $a3, 0x8000
  /* 16F614 80131FE4 3C018013 */       lui $at, %hi(D_ovl44_80132700)
  /* 16F618 80131FE8 C4202700 */      lwc1 $f0, %lo(D_ovl44_80132700)($at)
  /* 16F61C 80131FEC 3C014470 */       lui $at, (0x44700000 >> 16) # 960.0
  /* 16F620 80131FF0 44812000 */      mtc1 $at, $f4 # 960.0 to cop1
  /* 16F624 80131FF4 8E190074 */        lw $t9, 0x74($s0)
  /* 16F628 80131FF8 3C0143B4 */       lui $at, (0x43B40000 >> 16) # 360.0
  /* 16F62C 80131FFC 44813000 */      mtc1 $at, $f6 # 360.0 to cop1
  /* 16F630 80132000 E724001C */      swc1 $f4, 0x1c($t9)
  /* 16F634 80132004 8E080074 */        lw $t0, 0x74($s0)
  /* 16F638 80132008 3C01C158 */       lui $at, (0xC1580000 >> 16) # -13.5
  /* 16F63C 8013200C 44814000 */      mtc1 $at, $f8 # -13.5 to cop1
  /* 16F640 80132010 E5060020 */      swc1 $f6, 0x20($t0)
  /* 16F644 80132014 8E090074 */        lw $t1, 0x74($s0)
  /* 16F648 80132018 3C018013 */       lui $at, %hi(D_ovl44_80132704)
  /* 16F64C 8013201C 3C0E8013 */       lui $t6, %hi(D_ovl44_80132AA8)
  /* 16F650 80132020 E5280024 */      swc1 $f8, 0x24($t1)
  /* 16F654 80132024 8E0A0074 */        lw $t2, 0x74($s0)
  /* 16F658 80132028 C42A2704 */      lwc1 $f10, %lo(D_ovl44_80132704)($at)
  /* 16F65C 8013202C 3C0F0000 */       lui $t7, %hi(D_NF_00002AA8)
  /* 16F660 80132030 25EF2AA8 */     addiu $t7, $t7, %lo(D_NF_00002AA8)
  /* 16F664 80132034 E54A0034 */      swc1 $f10, 0x34($t2)
  /* 16F668 80132038 8E0B0074 */        lw $t3, 0x74($s0)
  /* 16F66C 8013203C 02002025 */        or $a0, $s0, $zero
  /* 16F670 80132040 E5600040 */      swc1 $f0, 0x40($t3)
  /* 16F674 80132044 8E0C0074 */        lw $t4, 0x74($s0)
  /* 16F678 80132048 E5800044 */      swc1 $f0, 0x44($t4)
  /* 16F67C 8013204C 8E0D0074 */        lw $t5, 0x74($s0)
  /* 16F680 80132050 E5A00048 */      swc1 $f0, 0x48($t5)
  /* 16F684 80132054 8DCE2AA8 */        lw $t6, %lo(D_ovl44_80132AA8)($t6)
  /* 16F688 80132058 0C003E3D */       jal func_8000F8F4
  /* 16F68C 8013205C 01CF2821 */      addu $a1, $t6, $t7
  /* 16F690 80132060 3C188013 */       lui $t8, %hi(D_ovl44_80132AA8)
  /* 16F694 80132064 8F182AA8 */        lw $t8, %lo(D_ovl44_80132AA8)($t8)
  /* 16F698 80132068 3C190000 */       lui $t9, %hi(D_NF_00003700)
  /* 16F69C 8013206C 27393700 */     addiu $t9, $t9, %lo(D_NF_00003700)
  /* 16F6A0 80132070 02002025 */        or $a0, $s0, $zero
  /* 16F6A4 80132074 24060000 */     addiu $a2, $zero, 0
  /* 16F6A8 80132078 0C002F8A */       jal func_8000BE28
  /* 16F6AC 8013207C 03192821 */      addu $a1, $t8, $t9
  /* 16F6B0 80132080 3C058001 */       lui $a1, %hi(func_8000DF34)
  /* 16F6B4 80132084 24A5DF34 */     addiu $a1, $a1, %lo(func_8000DF34)
  /* 16F6B8 80132088 02002025 */        or $a0, $s0, $zero
  /* 16F6BC 8013208C 24060001 */     addiu $a2, $zero, 1
  /* 16F6C0 80132090 0C002062 */       jal omAddGObjCommonProc
  /* 16F6C4 80132094 24070001 */     addiu $a3, $zero, 1
  /* 16F6C8 80132098 0C0037CD */       jal func_8000DF34
  /* 16F6CC 8013209C 02002025 */        or $a0, $s0, $zero
  /* 16F6D0 801320A0 8FBF0024 */        lw $ra, 0x24($sp)
  /* 16F6D4 801320A4 8FB00020 */        lw $s0, 0x20($sp)
  /* 16F6D8 801320A8 27BD0028 */     addiu $sp, $sp, 0x28
  /* 16F6DC 801320AC 03E00008 */        jr $ra
  /* 16F6E0 801320B0 00000000 */       nop 

glabel func_ovl44_801320B4
  /* 16F6E4 801320B4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 16F6E8 801320B8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 16F6EC 801320BC 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 16F6F0 801320C0 AFBF001C */        sw $ra, 0x1c($sp)
  /* 16F6F4 801320C4 AFA40028 */        sw $a0, 0x28($sp)
  /* 16F6F8 801320C8 8C820074 */        lw $v0, 0x74($a0)
  /* 16F6FC 801320CC 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 16F700 801320D0 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 16F704 801320D4 44050000 */      mfc1 $a1, $f0
  /* 16F708 801320D8 44060000 */      mfc1 $a2, $f0
  /* 16F70C 801320DC 3C07439B */       lui $a3, 0x439b
  /* 16F710 801320E0 24440008 */     addiu $a0, $v0, 8
  /* 16F714 801320E4 AFA20024 */        sw $v0, 0x24($sp)
  /* 16F718 801320E8 0C001C20 */       jal func_80007080
  /* 16F71C 801320EC E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16F720 801320F0 3C0F8013 */       lui $t7, %hi(D_ovl44_80132AA4)
  /* 16F724 801320F4 8DEF2AA4 */        lw $t7, %lo(D_ovl44_80132AA4)($t7)
  /* 16F728 801320F8 3C180000 */       lui $t8, %hi(D_NF_00000000)
  /* 16F72C 801320FC 27180000 */     addiu $t8, $t8, %lo(D_NF_00000000)
  /* 16F730 80132100 8FA40024 */        lw $a0, 0x24($sp)
  /* 16F734 80132104 24060000 */     addiu $a2, $zero, 0
  /* 16F738 80132108 0C003E8F */       jal func_8000FA3C
  /* 16F73C 8013210C 01F82821 */      addu $a1, $t7, $t8
  /* 16F740 80132110 3C058001 */       lui $a1, %hi(func_80010580)
  /* 16F744 80132114 24A50580 */     addiu $a1, $a1, %lo(func_80010580)
  /* 16F748 80132118 8FA40028 */        lw $a0, 0x28($sp)
  /* 16F74C 8013211C 24060001 */     addiu $a2, $zero, 1
  /* 16F750 80132120 0C002062 */       jal omAddGObjCommonProc
  /* 16F754 80132124 24070001 */     addiu $a3, $zero, 1
  /* 16F758 80132128 8FBF001C */        lw $ra, 0x1c($sp)
  /* 16F75C 8013212C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 16F760 80132130 03E00008 */        jr $ra
  /* 16F764 80132134 00000000 */       nop 

glabel func_ovl44_80132138
  /* 16F768 80132138 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 16F76C 8013213C 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 16F770 80132140 3C190004 */       lui $t9, (0x48640 >> 16) # 296512
  /* 16F774 80132144 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16F778 80132148 37398640 */       ori $t9, $t9, (0x48640 & 0xFFFF) # 296512
  /* 16F77C 8013214C 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 16F780 80132150 240F003C */     addiu $t7, $zero, 0x3c
  /* 16F784 80132154 24180000 */     addiu $t8, $zero, 0
  /* 16F788 80132158 2408FFFF */     addiu $t0, $zero, -1
  /* 16F78C 8013215C 24090001 */     addiu $t1, $zero, 1
  /* 16F790 80132160 240A0001 */     addiu $t2, $zero, 1
  /* 16F794 80132164 240B0001 */     addiu $t3, $zero, 1
  /* 16F798 80132168 AFAB0030 */        sw $t3, 0x30($sp)
  /* 16F79C 8013216C AFAA0028 */        sw $t2, 0x28($sp)
  /* 16F7A0 80132170 AFA90024 */        sw $t1, 0x24($sp)
  /* 16F7A4 80132174 AFA80020 */        sw $t0, 0x20($sp)
  /* 16F7A8 80132178 AFB80018 */        sw $t8, 0x18($sp)
  /* 16F7AC 8013217C AFAF0014 */        sw $t7, 0x14($sp)
  /* 16F7B0 80132180 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16F7B4 80132184 AFB9001C */        sw $t9, 0x1c($sp)
  /* 16F7B8 80132188 AFA0002C */        sw $zero, 0x2c($sp)
  /* 16F7BC 8013218C AFA00034 */        sw $zero, 0x34($sp)
  /* 16F7C0 80132190 24040401 */     addiu $a0, $zero, 0x401
  /* 16F7C4 80132194 00002825 */        or $a1, $zero, $zero
  /* 16F7C8 80132198 24060010 */     addiu $a2, $zero, 0x10
  /* 16F7CC 8013219C 0C002E4F */       jal func_8000B93C
  /* 16F7D0 801321A0 3C078000 */       lui $a3, 0x8000
  /* 16F7D4 801321A4 0C04C82D */       jal func_ovl44_801320B4
  /* 16F7D8 801321A8 00402025 */        or $a0, $v0, $zero
  /* 16F7DC 801321AC 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16F7E0 801321B0 27BD0040 */     addiu $sp, $sp, 0x40
  /* 16F7E4 801321B4 03E00008 */        jr $ra
  /* 16F7E8 801321B8 00000000 */       nop 

glabel func_ovl44_801321BC
  /* 16F7EC 801321BC 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 16F7F0 801321C0 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 16F7F4 801321C4 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16F7F8 801321C8 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 16F7FC 801321CC 240F0050 */     addiu $t7, $zero, 0x50
  /* 16F800 801321D0 24180000 */     addiu $t8, $zero, 0
  /* 16F804 801321D4 3C191000 */       lui $t9, 0x1000
  /* 16F808 801321D8 2408FFFF */     addiu $t0, $zero, -1
  /* 16F80C 801321DC 24090001 */     addiu $t1, $zero, 1
  /* 16F810 801321E0 240A0001 */     addiu $t2, $zero, 1
  /* 16F814 801321E4 AFAA0030 */        sw $t2, 0x30($sp)
  /* 16F818 801321E8 AFA90028 */        sw $t1, 0x28($sp)
  /* 16F81C 801321EC AFA80020 */        sw $t0, 0x20($sp)
  /* 16F820 801321F0 AFB9001C */        sw $t9, 0x1c($sp)
  /* 16F824 801321F4 AFB80018 */        sw $t8, 0x18($sp)
  /* 16F828 801321F8 AFAF0014 */        sw $t7, 0x14($sp)
  /* 16F82C 801321FC AFAE0010 */        sw $t6, 0x10($sp)
  /* 16F830 80132200 AFA00024 */        sw $zero, 0x24($sp)
  /* 16F834 80132204 AFA0002C */        sw $zero, 0x2c($sp)
  /* 16F838 80132208 AFA00034 */        sw $zero, 0x34($sp)
  /* 16F83C 8013220C 24040401 */     addiu $a0, $zero, 0x401
  /* 16F840 80132210 00002825 */        or $a1, $zero, $zero
  /* 16F844 80132214 24060010 */     addiu $a2, $zero, 0x10
  /* 16F848 80132218 0C002E4F */       jal func_8000B93C
  /* 16F84C 8013221C 3C078000 */       lui $a3, 0x8000
  /* 16F850 80132220 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 16F854 80132224 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 16F858 80132228 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 16F85C 8013222C 8C430074 */        lw $v1, 0x74($v0)
  /* 16F860 80132230 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 16F864 80132234 44050000 */      mfc1 $a1, $f0
  /* 16F868 80132238 44060000 */      mfc1 $a2, $f0
  /* 16F86C 8013223C 3C07439B */       lui $a3, 0x439b
  /* 16F870 80132240 24640008 */     addiu $a0, $v1, 8
  /* 16F874 80132244 0C001C20 */       jal func_80007080
  /* 16F878 80132248 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16F87C 8013224C 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16F880 80132250 27BD0040 */     addiu $sp, $sp, 0x40
  /* 16F884 80132254 03E00008 */        jr $ra
  /* 16F888 80132258 00000000 */       nop 

glabel func_ovl44_8013225C
  /* 16F88C 8013225C 3C018013 */       lui $at, %hi(D_ovl44_8013273C)
  /* 16F890 80132260 03E00008 */        jr $ra
  /* 16F894 80132264 AC20273C */        sw $zero, %lo(D_ovl44_8013273C)($at)

glabel func_ovl44_80132268
  /* 16F898 80132268 3C038013 */       lui $v1, %hi(D_ovl44_8013273C)
  /* 16F89C 8013226C 2463273C */     addiu $v1, $v1, %lo(D_ovl44_8013273C)
  /* 16F8A0 80132270 8C6E0000 */        lw $t6, ($v1) # D_ovl44_8013273C + 0
  /* 16F8A4 80132274 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 16F8A8 80132278 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16F8AC 8013227C 25CF0001 */     addiu $t7, $t6, 1
  /* 16F8B0 80132280 29E1000A */      slti $at, $t7, 0xa
  /* 16F8B4 80132284 AFA40018 */        sw $a0, 0x18($sp)
  /* 16F8B8 80132288 14200038 */      bnez $at, .L8013236C
  /* 16F8BC 8013228C AC6F0000 */        sw $t7, ($v1) # D_ovl44_8013273C + 0
  /* 16F8C0 80132290 3C068013 */       lui $a2, %hi(D_ovl44_80132740)
  /* 16F8C4 80132294 24C62740 */     addiu $a2, $a2, %lo(D_ovl44_80132740)
  /* 16F8C8 80132298 8CC20000 */        lw $v0, ($a2) # D_ovl44_80132740 + 0
  /* 16F8CC 8013229C 2404FFF1 */     addiu $a0, $zero, -0xf
  /* 16F8D0 801322A0 10400002 */      beqz $v0, .L801322AC
  /* 16F8D4 801322A4 2459FFFF */     addiu $t9, $v0, -1
  /* 16F8D8 801322A8 ACD90000 */        sw $t9, ($a2) # D_ovl44_80132740 + 0
  .L801322AC:
  /* 16F8DC 801322AC 0C0E4281 */       jal func_ovl1_80390A04
  /* 16F8E0 801322B0 2405000F */     addiu $a1, $zero, 0xf
  /* 16F8E4 801322B4 10400006 */      beqz $v0, .L801322D0
  /* 16F8E8 801322B8 2404FFF1 */     addiu $a0, $zero, -0xf
  /* 16F8EC 801322BC 0C0E42B0 */       jal func_ovl1_80390AC0
  /* 16F8F0 801322C0 2405000F */     addiu $a1, $zero, 0xf
  /* 16F8F4 801322C4 10400002 */      beqz $v0, .L801322D0
  /* 16F8F8 801322C8 3C018013 */       lui $at, %hi(D_ovl44_80132740)
  /* 16F8FC 801322CC AC202740 */        sw $zero, %lo(D_ovl44_80132740)($at)
  .L801322D0:
  /* 16F900 801322D0 0C0E41DB */       jal func_ovl1_8039076C
  /* 16F904 801322D4 3404D000 */       ori $a0, $zero, 0xd000
  /* 16F908 801322D8 10400007 */      beqz $v0, .L801322F8
  /* 16F90C 801322DC 24090001 */     addiu $t1, $zero, 1
  /* 16F910 801322E0 3C02800A */       lui $v0, %hi(gSceneData)
  /* 16F914 801322E4 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 16F918 801322E8 90480000 */       lbu $t0, ($v0) # gSceneData + 0
  /* 16F91C 801322EC A0490000 */        sb $t1, ($v0) # gSceneData + 0
  /* 16F920 801322F0 0C00171D */       jal func_80005C74
  /* 16F924 801322F4 A0480001 */        sb $t0, 1($v0) # gSceneData + 1
  .L801322F8:
  /* 16F928 801322F8 3C038013 */       lui $v1, %hi(D_ovl44_8013273C)
  /* 16F92C 801322FC 8C63273C */        lw $v1, %lo(D_ovl44_8013273C)($v1)
  /* 16F930 80132300 2401002D */     addiu $at, $zero, 0x2d
  /* 16F934 80132304 3C048013 */       lui $a0, %hi(D_ovl44_80132738)
  /* 16F938 80132308 14610006 */       bne $v1, $at, .L80132324
  /* 16F93C 8013230C 3C050001 */       lui $a1, (0x10007 >> 16) # 65543
  /* 16F940 80132310 8C842738 */        lw $a0, %lo(D_ovl44_80132738)($a0)
  /* 16F944 80132314 0C0E4173 */       jal func_ovl1_803905CC
  /* 16F948 80132318 34A50007 */       ori $a1, $a1, (0x10007 & 0xFFFF) # 65543
  /* 16F94C 8013231C 3C038013 */       lui $v1, %hi(D_ovl44_8013273C)
  /* 16F950 80132320 8C63273C */        lw $v1, %lo(D_ovl44_8013273C)($v1)
  .L80132324:
  /* 16F954 80132324 240100BE */     addiu $at, $zero, 0xbe
  /* 16F958 80132328 54610008 */      bnel $v1, $at, .L8013234C
  /* 16F95C 8013232C 240100DC */     addiu $at, $zero, 0xdc
  /* 16F960 80132330 0C04C7E0 */       jal func_ovl44_80131F80
  /* 16F964 80132334 00000000 */       nop 
  /* 16F968 80132338 0C009A70 */       jal func_800269C0
  /* 16F96C 8013233C 24040001 */     addiu $a0, $zero, 1
  /* 16F970 80132340 3C038013 */       lui $v1, %hi(D_ovl44_8013273C)
  /* 16F974 80132344 8C63273C */        lw $v1, %lo(D_ovl44_8013273C)($v1)
  /* 16F978 80132348 240100DC */     addiu $at, $zero, 0xdc
  .L8013234C:
  /* 16F97C 8013234C 14610007 */       bne $v1, $at, .L8013236C
  /* 16F980 80132350 3C02800A */       lui $v0, %hi(gSceneData)
  /* 16F984 80132354 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 16F988 80132358 904A0000 */       lbu $t2, ($v0) # gSceneData + 0
  /* 16F98C 8013235C 240B0028 */     addiu $t3, $zero, 0x28
  /* 16F990 80132360 A04B0000 */        sb $t3, ($v0) # gSceneData + 0
  /* 16F994 80132364 0C00171D */       jal func_80005C74
  /* 16F998 80132368 A04A0001 */        sb $t2, 1($v0) # gSceneData + 1
  .L8013236C:
  /* 16F99C 8013236C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16F9A0 80132370 27BD0018 */     addiu $sp, $sp, 0x18
  /* 16F9A4 80132374 03E00008 */        jr $ra
  /* 16F9A8 80132378 00000000 */       nop 

glabel func_ovl44_8013237C
  /* 16F9AC 8013237C 27BDFFA0 */     addiu $sp, $sp, -0x60
  /* 16F9B0 80132380 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 16F9B4 80132384 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 16F9B8 80132388 3C188013 */       lui $t8, %hi(D_ovl44_80132748)
  /* 16F9BC 8013238C 3C088013 */       lui $t0, %hi(D_ovl44_80132A68)
  /* 16F9C0 80132390 AFBF002C */        sw $ra, 0x2c($sp)
  /* 16F9C4 80132394 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 16F9C8 80132398 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 16F9CC 8013239C 27182748 */     addiu $t8, $t8, %lo(D_ovl44_80132748)
  /* 16F9D0 801323A0 24190064 */     addiu $t9, $zero, 0x64
  /* 16F9D4 801323A4 25082A68 */     addiu $t0, $t0, %lo(D_ovl44_80132A68)
  /* 16F9D8 801323A8 24090007 */     addiu $t1, $zero, 7
  /* 16F9DC 801323AC AFB20028 */        sw $s2, 0x28($sp)
  /* 16F9E0 801323B0 AFB10024 */        sw $s1, 0x24($sp)
  /* 16F9E4 801323B4 AFB00020 */        sw $s0, 0x20($sp)
  /* 16F9E8 801323B8 AFAE003C */        sw $t6, 0x3c($sp)
  /* 16F9EC 801323BC AFAF0040 */        sw $t7, 0x40($sp)
  /* 16F9F0 801323C0 AFA00044 */        sw $zero, 0x44($sp)
  /* 16F9F4 801323C4 AFA00048 */        sw $zero, 0x48($sp)
  /* 16F9F8 801323C8 AFB8004C */        sw $t8, 0x4c($sp)
  /* 16F9FC 801323CC AFB90050 */        sw $t9, 0x50($sp)
  /* 16FA00 801323D0 AFA80054 */        sw $t0, 0x54($sp)
  /* 16FA04 801323D4 AFA90058 */        sw $t1, 0x58($sp)
  /* 16FA08 801323D8 0C0337DE */       jal rldm_initialize
  /* 16FA0C 801323DC 27A4003C */     addiu $a0, $sp, 0x3c
  /* 16FA10 801323E0 3C108013 */       lui $s0, %hi(D_ovl44_801325D0)
  /* 16FA14 801323E4 261025D0 */     addiu $s0, $s0, %lo(D_ovl44_801325D0)
  /* 16FA18 801323E8 02002025 */        or $a0, $s0, $zero
  /* 16FA1C 801323EC 0C0337BB */       jal rldm_bytes_need_to_load
  /* 16FA20 801323F0 24050003 */     addiu $a1, $zero, 3
  /* 16FA24 801323F4 00402025 */        or $a0, $v0, $zero
  /* 16FA28 801323F8 0C001260 */       jal hal_alloc
  /* 16FA2C 801323FC 24050010 */     addiu $a1, $zero, 0x10
  /* 16FA30 80132400 3C068013 */       lui $a2, %hi(D_ovl44_80132AA0)
  /* 16FA34 80132404 24C62AA0 */     addiu $a2, $a2, %lo(D_ovl44_80132AA0)
  /* 16FA38 80132408 02002025 */        or $a0, $s0, $zero
  /* 16FA3C 8013240C 24050003 */     addiu $a1, $zero, 3
  /* 16FA40 80132410 0C033781 */       jal rldm_load_files_into
  /* 16FA44 80132414 00403825 */        or $a3, $v0, $zero
  /* 16FA48 80132418 3C108000 */       lui $s0, 0x8000
  /* 16FA4C 8013241C 3C058013 */       lui $a1, %hi(func_ovl44_80132268)
  /* 16FA50 80132420 24A52268 */     addiu $a1, $a1, %lo(func_ovl44_80132268)
  /* 16FA54 80132424 02003825 */        or $a3, $s0, $zero
  /* 16FA58 80132428 00002025 */        or $a0, $zero, $zero
  /* 16FA5C 8013242C 0C00265A */       jal omMakeGObjCommon
  /* 16FA60 80132430 00003025 */        or $a2, $zero, $zero
  /* 16FA64 80132434 00002025 */        or $a0, $zero, $zero
  /* 16FA68 80132438 02002825 */        or $a1, $s0, $zero
  /* 16FA6C 8013243C 24060064 */     addiu $a2, $zero, 0x64
  /* 16FA70 80132440 24070001 */     addiu $a3, $zero, 1
  /* 16FA74 80132444 0C002E7F */       jal func_8000B9FC
  /* 16FA78 80132448 AFA00010 */        sw $zero, 0x10($sp)
  /* 16FA7C 8013244C 0C045624 */       jal func_ovl2_80115890
  /* 16FA80 80132450 00000000 */       nop 
  /* 16FA84 80132454 0C04C897 */       jal func_ovl44_8013225C
  /* 16FA88 80132458 00000000 */       nop 
  /* 16FA8C 8013245C 0C03F4C0 */       jal efManager_AllocUserData
  /* 16FA90 80132460 00000000 */       nop 
  /* 16FA94 80132464 24040001 */     addiu $a0, $zero, 1
  /* 16FA98 80132468 0C035C65 */       jal func_ovl2_800D7194
  /* 16FA9C 8013246C 24050008 */     addiu $a1, $zero, 8
  /* 16FAA0 80132470 0C035E1B */       jal func_ovl2_800D786C
  /* 16FAA4 80132474 00002025 */        or $a0, $zero, $zero
  /* 16FAA8 80132478 0C035E1B */       jal func_ovl2_800D786C
  /* 16FAAC 8013247C 24040001 */     addiu $a0, $zero, 1
  /* 16FAB0 80132480 0C035E1B */       jal func_ovl2_800D786C
  /* 16FAB4 80132484 24040002 */     addiu $a0, $zero, 2
  /* 16FAB8 80132488 0C035E1B */       jal func_ovl2_800D786C
  /* 16FABC 8013248C 24040003 */     addiu $a0, $zero, 3
  /* 16FAC0 80132490 0C035E1B */       jal func_ovl2_800D786C
  /* 16FAC4 80132494 24040005 */     addiu $a0, $zero, 5
  /* 16FAC8 80132498 0C035E1B */       jal func_ovl2_800D786C
  /* 16FACC 8013249C 24040006 */     addiu $a0, $zero, 6
  /* 16FAD0 801324A0 0C035E1B */       jal func_ovl2_800D786C
  /* 16FAD4 801324A4 24040008 */     addiu $a0, $zero, 8
  /* 16FAD8 801324A8 0C035E1B */       jal func_ovl2_800D786C
  /* 16FADC 801324AC 24040009 */     addiu $a0, $zero, 9
  /* 16FAE0 801324B0 3C108013 */       lui $s0, %hi(D_ovl44_80132718)
  /* 16FAE4 801324B4 3C128013 */       lui $s2, %hi(D_ovl44_80132738)
  /* 16FAE8 801324B8 3C118013 */       lui $s1, %hi(D_ovl2_80130D9C)
  /* 16FAEC 801324BC 26310D9C */     addiu $s1, $s1, %lo(D_ovl2_80130D9C)
  /* 16FAF0 801324C0 26522738 */     addiu $s2, $s2, %lo(D_ovl44_80132738)
  /* 16FAF4 801324C4 26102718 */     addiu $s0, $s0, %lo(D_ovl44_80132718)
  .L801324C8:
  /* 16FAF8 801324C8 8E240000 */        lw $a0, ($s1) # D_ovl2_80130D9C + 0
  /* 16FAFC 801324CC 0C001260 */       jal hal_alloc
  /* 16FB00 801324D0 24050010 */     addiu $a1, $zero, 0x10
  /* 16FB04 801324D4 26100004 */     addiu $s0, $s0, 4
  /* 16FB08 801324D8 1612FFFB */       bne $s0, $s2, .L801324C8
  /* 16FB0C 801324DC AE02FFFC */        sw $v0, -4($s0) # D_ovl44_80132718 + -4
  /* 16FB10 801324E0 0C04C84E */       jal func_ovl44_80132138
  /* 16FB14 801324E4 00000000 */       nop 
  /* 16FB18 801324E8 0C04C86F */       jal func_ovl44_801321BC
  /* 16FB1C 801324EC 00000000 */       nop 
  /* 16FB20 801324F0 0C04C7A2 */       jal func_ovl44_80131E88
  /* 16FB24 801324F4 00000000 */       nop 
  /* 16FB28 801324F8 0C04C6FA */       jal func_ovl44_80131BE8
  /* 16FB2C 801324FC 00000000 */       nop 
  /* 16FB30 80132500 3C014234 */       lui $at, (0x42340000 >> 16) # 45.0
  /* 16FB34 80132504 44816000 */      mtc1 $at, $f12 # 45.0 to cop1
  /* 16FB38 80132508 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 16FB3C 8013250C 44817000 */      mtc1 $at, $f14 # 10.0 to cop1
  /* 16FB40 80132510 240A00FF */     addiu $t2, $zero, 0xff
  /* 16FB44 80132514 240B00FF */     addiu $t3, $zero, 0xff
  /* 16FB48 80132518 AFAB0014 */        sw $t3, 0x14($sp)
  /* 16FB4C 8013251C AFAA0010 */        sw $t2, 0x10($sp)
  /* 16FB50 80132520 240600FF */     addiu $a2, $zero, 0xff
  /* 16FB54 80132524 0C0E4138 */       jal func_ovl1_803904E0
  /* 16FB58 80132528 240700FF */     addiu $a3, $zero, 0xff
  /* 16FB5C 8013252C 0C00024B */       jal func_8000092C
  /* 16FB60 80132530 00000000 */       nop 
  /* 16FB64 80132534 2C4108CA */     sltiu $at, $v0, 0x8ca
  /* 16FB68 80132538 50200007 */      beql $at, $zero, .L80132558
  /* 16FB6C 8013253C 8FBF002C */        lw $ra, 0x2c($sp)
  .L80132540:
  /* 16FB70 80132540 0C00024B */       jal func_8000092C
  /* 16FB74 80132544 00000000 */       nop 
  /* 16FB78 80132548 2C4108CA */     sltiu $at, $v0, 0x8ca
  /* 16FB7C 8013254C 1420FFFC */      bnez $at, .L80132540
  /* 16FB80 80132550 00000000 */       nop 
  /* 16FB84 80132554 8FBF002C */        lw $ra, 0x2c($sp)
  .L80132558:
  /* 16FB88 80132558 8FB00020 */        lw $s0, 0x20($sp)
  /* 16FB8C 8013255C 8FB10024 */        lw $s1, 0x24($sp)
  /* 16FB90 80132560 8FB20028 */        lw $s2, 0x28($sp)
  /* 16FB94 80132564 03E00008 */        jr $ra
  /* 16FB98 80132568 27BD0060 */     addiu $sp, $sp, 0x60

glabel intro_chars_running_entry
  /* 16FB9C 8013256C 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 16FBA0 80132570 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 16FBA4 80132574 3C048013 */       lui $a0, %hi(D_ovl44_80132650)
  /* 16FBA8 80132578 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 16FBAC 8013257C 24842650 */     addiu $a0, $a0, %lo(D_ovl44_80132650)
  /* 16FBB0 80132580 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16FBB4 80132584 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 16FBB8 80132588 0C001C09 */       jal func_80007024
  /* 16FBBC 8013258C AC8F000C */        sw $t7, 0xc($a0) # D_ovl44_80132650 + 12
  /* 16FBC0 80132590 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 16FBC4 80132594 3C198013 */       lui $t9, %hi(D_NF_80132AB0)
  /* 16FBC8 80132598 3C048013 */       lui $a0, %hi(D_ovl44_8013266C)
  /* 16FBCC 8013259C 27392AB0 */     addiu $t9, $t9, %lo(D_NF_80132AB0)
  /* 16FBD0 801325A0 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 16FBD4 801325A4 2484266C */     addiu $a0, $a0, %lo(D_ovl44_8013266C)
  /* 16FBD8 801325A8 03194023 */      subu $t0, $t8, $t9
  /* 16FBDC 801325AC 0C001A0F */       jal func_8000683C
  /* 16FBE0 801325B0 AC880010 */        sw $t0, 0x10($a0) # D_ovl44_8013266C + 16
  /* 16FBE4 801325B4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16FBE8 801325B8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 16FBEC 801325BC 03E00008 */        jr $ra
  /* 16FBF0 801325C0 00000000 */       nop 

  /* 16FBF4 801325C4 00000000 */       nop 
  /* 16FBF8 801325C8 00000000 */       nop 
  /* 16FBFC 801325CC 00000000 */       nop 
