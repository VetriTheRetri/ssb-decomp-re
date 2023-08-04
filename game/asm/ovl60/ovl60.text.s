.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80131B00 -> 0x80133620

glabel func_ovl60_80131B00
  /* 11F2B0 80131B00 8C830000 */        lw $v1, ($a0)
  /* 11F2B4 80131B04 3C188013 */       lui $t8, %hi(D_ovl60_80133640)
  /* 11F2B8 80131B08 27183640 */     addiu $t8, $t8, %lo(D_ovl60_80133640)
  /* 11F2BC 80131B0C 246E0008 */     addiu $t6, $v1, 8
  /* 11F2C0 80131B10 AC8E0000 */        sw $t6, ($a0)
  /* 11F2C4 80131B14 3C0FDE00 */       lui $t7, 0xde00
  /* 11F2C8 80131B18 AC6F0000 */        sw $t7, ($v1)
  /* 11F2CC 80131B1C 03E00008 */        jr $ra
  /* 11F2D0 80131B20 AC780004 */        sw $t8, 4($v1)

glabel func_ovl60_80131B24
  /* 11F2D4 80131B24 3C0E8013 */       lui $t6, %hi(D_ovl60_80133668)
  /* 11F2D8 80131B28 25CE3668 */     addiu $t6, $t6, %lo(D_ovl60_80133668)
  /* 11F2DC 80131B2C 8DD80000 */        lw $t8, ($t6) # D_ovl60_80133668 + 0
  /* 11F2E0 80131B30 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11F2E4 80131B34 27A30020 */     addiu $v1, $sp, 0x20
  /* 11F2E8 80131B38 AC780000 */        sw $t8, ($v1)
  /* 11F2EC 80131B3C 95D80004 */       lhu $t8, 4($t6) # D_ovl60_80133668 + 4
  /* 11F2F0 80131B40 3C198013 */       lui $t9, %hi(D_ovl60_80133670)
  /* 11F2F4 80131B44 27393670 */     addiu $t9, $t9, %lo(D_ovl60_80133670)
  /* 11F2F8 80131B48 A4780004 */        sh $t8, 4($v1)
  /* 11F2FC 80131B4C 8F290000 */        lw $t1, ($t9) # D_ovl60_80133670 + 0
  /* 11F300 80131B50 27A60018 */     addiu $a2, $sp, 0x18
  /* 11F304 80131B54 3C0A8013 */       lui $t2, %hi(D_ovl60_80133678)
  /* 11F308 80131B58 ACC90000 */        sw $t1, ($a2)
  /* 11F30C 80131B5C 97290004 */       lhu $t1, 4($t9) # D_ovl60_80133670 + 4
  /* 11F310 80131B60 254A3678 */     addiu $t2, $t2, %lo(D_ovl60_80133678)
  /* 11F314 80131B64 27A70010 */     addiu $a3, $sp, 0x10
  /* 11F318 80131B68 A4C90004 */        sh $t1, 4($a2)
  /* 11F31C 80131B6C 8D4C0000 */        lw $t4, ($t2) # D_ovl60_80133678 + 0
  /* 11F320 80131B70 24010001 */     addiu $at, $zero, 1
  /* 11F324 80131B74 ACEC0000 */        sw $t4, ($a3)
  /* 11F328 80131B78 954C0004 */       lhu $t4, 4($t2) # D_ovl60_80133678 + 4
  /* 11F32C 80131B7C 10A00009 */      beqz $a1, .L80131BA4
  /* 11F330 80131B80 A4EC0004 */        sh $t4, 4($a3)
  /* 11F334 80131B84 10A10005 */       beq $a1, $at, .L80131B9C
  /* 11F338 80131B88 24010002 */     addiu $at, $zero, 2
  /* 11F33C 80131B8C 10A10007 */       beq $a1, $at, .L80131BAC
  /* 11F340 80131B90 00601025 */        or $v0, $v1, $zero
  /* 11F344 80131B94 10000005 */         b .L80131BAC
  /* 11F348 80131B98 8FA2000C */        lw $v0, 0xc($sp)
  .L80131B9C:
  /* 11F34C 80131B9C 10000003 */         b .L80131BAC
  /* 11F350 80131BA0 00C01025 */        or $v0, $a2, $zero
  .L80131BA4:
  /* 11F354 80131BA4 10000001 */         b .L80131BAC
  /* 11F358 80131BA8 00E01025 */        or $v0, $a3, $zero
  .L80131BAC:
  /* 11F35C 80131BAC 8C830074 */        lw $v1, 0x74($a0)
  /* 11F360 80131BB0 24040003 */     addiu $a0, $zero, 3
  /* 11F364 80131BB4 00002825 */        or $a1, $zero, $zero
  .L80131BB8:
  /* 11F368 80131BB8 904D0000 */       lbu $t5, ($v0)
  /* 11F36C 80131BBC 24A50001 */     addiu $a1, $a1, 1
  /* 11F370 80131BC0 A06D0060 */        sb $t5, 0x60($v1)
  /* 11F374 80131BC4 904E0001 */       lbu $t6, 1($v0)
  /* 11F378 80131BC8 A06E0061 */        sb $t6, 0x61($v1)
  /* 11F37C 80131BCC 904F0002 */       lbu $t7, 2($v0)
  /* 11F380 80131BD0 A06F0062 */        sb $t7, 0x62($v1)
  /* 11F384 80131BD4 90580003 */       lbu $t8, 3($v0)
  /* 11F388 80131BD8 A0780028 */        sb $t8, 0x28($v1)
  /* 11F38C 80131BDC 90590004 */       lbu $t9, 4($v0)
  /* 11F390 80131BE0 A0790029 */        sb $t9, 0x29($v1)
  /* 11F394 80131BE4 90480005 */       lbu $t0, 5($v0)
  /* 11F398 80131BE8 A068002A */        sb $t0, 0x2a($v1)
  /* 11F39C 80131BEC 14A4FFF2 */       bne $a1, $a0, .L80131BB8
  /* 11F3A0 80131BF0 8C630008 */        lw $v1, 8($v1)
  /* 11F3A4 80131BF4 03E00008 */        jr $ra
  /* 11F3A8 80131BF8 27BD0028 */     addiu $sp, $sp, 0x28

glabel func_ovl60_80131BFC
  /* 11F3AC 80131BFC 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11F3B0 80131C00 3C0E8013 */       lui $t6, %hi(D_ovl60_801338B0)
  /* 11F3B4 80131C04 8DCE38B0 */        lw $t6, %lo(D_ovl60_801338B0)($t6)
  /* 11F3B8 80131C08 3C0F0000 */       lui $t7, %hi(D_NF_000001E8)
  /* 11F3BC 80131C0C AFBF0014 */        sw $ra, 0x14($sp)
  /* 11F3C0 80131C10 AFA5002C */        sw $a1, 0x2c($sp)
  /* 11F3C4 80131C14 25EF01E8 */     addiu $t7, $t7, %lo(D_NF_000001E8)
  /* 11F3C8 80131C18 AFA40028 */        sw $a0, 0x28($sp)
  /* 11F3CC 80131C1C AFA60030 */        sw $a2, 0x30($sp)
  /* 11F3D0 80131C20 AFA70034 */        sw $a3, 0x34($sp)
  /* 11F3D4 80131C24 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11F3D8 80131C28 01CF2821 */      addu $a1, $t6, $t7
  /* 11F3DC 80131C2C 94580024 */       lhu $t8, 0x24($v0)
  /* 11F3E0 80131C30 3C0A8013 */       lui $t2, %hi(D_ovl60_801338B0)
  /* 11F3E4 80131C34 3C0B0000 */       lui $t3, %hi(D_NF_00000330)
  /* 11F3E8 80131C38 3308FFDF */      andi $t0, $t8, 0xffdf
  /* 11F3EC 80131C3C A4480024 */        sh $t0, 0x24($v0)
  /* 11F3F0 80131C40 35090001 */       ori $t1, $t0, 1
  /* 11F3F4 80131C44 A4490024 */        sh $t1, 0x24($v0)
  /* 11F3F8 80131C48 C7A4002C */      lwc1 $f4, 0x2c($sp)
  /* 11F3FC 80131C4C 256B0330 */     addiu $t3, $t3, %lo(D_NF_00000330)
  /* 11F400 80131C50 E4440058 */      swc1 $f4, 0x58($v0)
  /* 11F404 80131C54 C7A60030 */      lwc1 $f6, 0x30($sp)
  /* 11F408 80131C58 E446005C */      swc1 $f6, 0x5c($v0)
  /* 11F40C 80131C5C 8D4A38B0 */        lw $t2, %lo(D_ovl60_801338B0)($t2)
  /* 11F410 80131C60 8FA40028 */        lw $a0, 0x28($sp)
  /* 11F414 80131C64 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11F418 80131C68 014B2821 */      addu $a1, $t2, $t3
  /* 11F41C 80131C6C 944C0024 */       lhu $t4, 0x24($v0)
  /* 11F420 80131C70 3C014180 */       lui $at, (0x41800000 >> 16) # 16.0
  /* 11F424 80131C74 44815000 */      mtc1 $at, $f10 # 16.0 to cop1
  /* 11F428 80131C78 318EFFDF */      andi $t6, $t4, 0xffdf
  /* 11F42C 80131C7C A44E0024 */        sh $t6, 0x24($v0)
  /* 11F430 80131C80 35CF0001 */       ori $t7, $t6, 1
  /* 11F434 80131C84 A44F0024 */        sh $t7, 0x24($v0)
  /* 11F438 80131C88 C7A8002C */      lwc1 $f8, 0x2c($sp)
  /* 11F43C 80131C8C 24180004 */     addiu $t8, $zero, 4
  /* 11F440 80131C90 2419001D */     addiu $t9, $zero, 0x1d
  /* 11F444 80131C94 460A4000 */     add.s $f0, $f8, $f10
  /* 11F448 80131C98 3C088013 */       lui $t0, %hi(D_ovl60_801338B0)
  /* 11F44C 80131C9C 3C090000 */       lui $t1, %hi(D_NF_00000568)
  /* 11F450 80131CA0 25290568 */     addiu $t1, $t1, %lo(D_NF_00000568)
  /* 11F454 80131CA4 E4400058 */      swc1 $f0, 0x58($v0)
  /* 11F458 80131CA8 C7B00030 */      lwc1 $f16, 0x30($sp)
  /* 11F45C 80131CAC A0400065 */        sb $zero, 0x65($v0)
  /* 11F460 80131CB0 A0400064 */        sb $zero, 0x64($v0)
  /* 11F464 80131CB4 A0580067 */        sb $t8, 0x67($v0)
  /* 11F468 80131CB8 A0400066 */        sb $zero, 0x66($v0)
  /* 11F46C 80131CBC E450005C */      swc1 $f16, 0x5c($v0)
  /* 11F470 80131CC0 8FA30034 */        lw $v1, 0x34($sp)
  /* 11F474 80131CC4 A459006A */        sh $t9, 0x6a($v0)
  /* 11F478 80131CC8 000318C0 */       sll $v1, $v1, 3
  /* 11F47C 80131CCC A4430068 */        sh $v1, 0x68($v0)
  /* 11F480 80131CD0 8D0838B0 */        lw $t0, %lo(D_ovl60_801338B0)($t0)
  /* 11F484 80131CD4 E7A00020 */      swc1 $f0, 0x20($sp)
  /* 11F488 80131CD8 AFA3001C */        sw $v1, 0x1c($sp)
  /* 11F48C 80131CDC 8FA40028 */        lw $a0, 0x28($sp)
  /* 11F490 80131CE0 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11F494 80131CE4 01092821 */      addu $a1, $t0, $t1
  /* 11F498 80131CE8 8FA3001C */        lw $v1, 0x1c($sp)
  /* 11F49C 80131CEC C7A00020 */      lwc1 $f0, 0x20($sp)
  /* 11F4A0 80131CF0 944A0024 */       lhu $t2, 0x24($v0)
  /* 11F4A4 80131CF4 44839000 */      mtc1 $v1, $f18
  /* 11F4A8 80131CF8 314CFFDF */      andi $t4, $t2, 0xffdf
  /* 11F4AC 80131CFC 46809120 */   cvt.s.w $f4, $f18
  /* 11F4B0 80131D00 A44C0024 */        sh $t4, 0x24($v0)
  /* 11F4B4 80131D04 358D0001 */       ori $t5, $t4, 1
  /* 11F4B8 80131D08 A44D0024 */        sh $t5, 0x24($v0)
  /* 11F4BC 80131D0C 46040180 */     add.s $f6, $f0, $f4
  /* 11F4C0 80131D10 E4460058 */      swc1 $f6, 0x58($v0)
  /* 11F4C4 80131D14 C7A80030 */      lwc1 $f8, 0x30($sp)
  /* 11F4C8 80131D18 E448005C */      swc1 $f8, 0x5c($v0)
  /* 11F4CC 80131D1C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11F4D0 80131D20 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11F4D4 80131D24 03E00008 */        jr $ra
  /* 11F4D8 80131D28 00000000 */       nop 

glabel func_ovl60_80131D2C
  /* 11F4DC 80131D2C 10A0000D */      beqz $a1, .L80131D64
  /* 11F4E0 80131D30 8C820074 */        lw $v0, 0x74($a0)
  /* 11F4E4 80131D34 240300FF */     addiu $v1, $zero, 0xff
  /* 11F4E8 80131D38 8C4E0008 */        lw $t6, 8($v0)
  /* 11F4EC 80131D3C 24040032 */     addiu $a0, $zero, 0x32
  /* 11F4F0 80131D40 A0430028 */        sb $v1, 0x28($v0)
  /* 11F4F4 80131D44 A0430029 */        sb $v1, 0x29($v0)
  /* 11F4F8 80131D48 A043002A */        sb $v1, 0x2a($v0)
  /* 11F4FC 80131D4C A1C40028 */        sb $a0, 0x28($t6)
  /* 11F500 80131D50 8C4F0008 */        lw $t7, 8($v0)
  /* 11F504 80131D54 A1E40029 */        sb $a0, 0x29($t7)
  /* 11F508 80131D58 8C580008 */        lw $t8, 8($v0)
  /* 11F50C 80131D5C 03E00008 */        jr $ra
  /* 11F510 80131D60 A304002A */        sb $a0, 0x2a($t8)

  .L80131D64:
  /* 11F514 80131D64 24040032 */     addiu $a0, $zero, 0x32
  /* 11F518 80131D68 8C590008 */        lw $t9, 8($v0)
  /* 11F51C 80131D6C 240300FF */     addiu $v1, $zero, 0xff
  /* 11F520 80131D70 A0440028 */        sb $a0, 0x28($v0)
  /* 11F524 80131D74 A0440029 */        sb $a0, 0x29($v0)
  /* 11F528 80131D78 A044002A */        sb $a0, 0x2a($v0)
  /* 11F52C 80131D7C A3230028 */        sb $v1, 0x28($t9)
  /* 11F530 80131D80 8C480008 */        lw $t0, 8($v0)
  /* 11F534 80131D84 A1030029 */        sb $v1, 0x29($t0)
  /* 11F538 80131D88 8C490008 */        lw $t1, 8($v0)
  /* 11F53C 80131D8C A123002A */        sb $v1, 0x2a($t1)
  /* 11F540 80131D90 03E00008 */        jr $ra
  /* 11F544 80131D94 00000000 */       nop 

glabel func_ovl60_80131D98
  /* 11F548 80131D98 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11F54C 80131D9C AFBF0024 */        sw $ra, 0x24($sp)
  /* 11F550 80131DA0 AFB00020 */        sw $s0, 0x20($sp)
  /* 11F554 80131DA4 00002025 */        or $a0, $zero, $zero
  /* 11F558 80131DA8 00002825 */        or $a1, $zero, $zero
  /* 11F55C 80131DAC 24060004 */     addiu $a2, $zero, 4
  /* 11F560 80131DB0 0C00265A */       jal omMakeGObjCommon
  /* 11F564 80131DB4 3C078000 */       lui $a3, 0x8000
  /* 11F568 80131DB8 3C018013 */       lui $at, %hi(D_ovl60_801337C8)
  /* 11F56C 80131DBC 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 11F570 80131DC0 240EFFFF */     addiu $t6, $zero, -1
  /* 11F574 80131DC4 AC2237C8 */        sw $v0, %lo(D_ovl60_801337C8)($at)
  /* 11F578 80131DC8 00408025 */        or $s0, $v0, $zero
  /* 11F57C 80131DCC AFAE0010 */        sw $t6, 0x10($sp)
  /* 11F580 80131DD0 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 11F584 80131DD4 00402025 */        or $a0, $v0, $zero
  /* 11F588 80131DD8 24060002 */     addiu $a2, $zero, 2
  /* 11F58C 80131DDC 0C00277D */       jal func_80009DF4
  /* 11F590 80131DE0 3C078000 */       lui $a3, 0x8000
  /* 11F594 80131DE4 3C0F8013 */       lui $t7, %hi(D_ovl60_801338B4)
  /* 11F598 80131DE8 8DEF38B4 */        lw $t7, %lo(D_ovl60_801338B4)($t7)
  /* 11F59C 80131DEC 3C180000 */       lui $t8, %hi(D_NF_000071F8)
  /* 11F5A0 80131DF0 271871F8 */     addiu $t8, $t8, %lo(D_NF_000071F8)
  /* 11F5A4 80131DF4 02002025 */        or $a0, $s0, $zero
  /* 11F5A8 80131DF8 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11F5AC 80131DFC 01F82821 */      addu $a1, $t7, $t8
  /* 11F5B0 80131E00 94590024 */       lhu $t9, 0x24($v0)
  /* 11F5B4 80131E04 3C014333 */       lui $at, (0x43330000 >> 16) # 179.0
  /* 11F5B8 80131E08 44812000 */      mtc1 $at, $f4 # 179.0 to cop1
  /* 11F5BC 80131E0C 3C014240 */       lui $at, (0x42400000 >> 16) # 48.0
  /* 11F5C0 80131E10 44813000 */      mtc1 $at, $f6 # 48.0 to cop1
  /* 11F5C4 80131E14 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 11F5C8 80131E18 A4490024 */        sh $t1, 0x24($v0)
  /* 11F5CC 80131E1C 352A0001 */       ori $t2, $t1, 1
  /* 11F5D0 80131E20 A44A0024 */        sh $t2, 0x24($v0)
  /* 11F5D4 80131E24 3C0B8013 */       lui $t3, %hi(D_ovl60_801338B4)
  /* 11F5D8 80131E28 E4440058 */      swc1 $f4, 0x58($v0)
  /* 11F5DC 80131E2C E446005C */      swc1 $f6, 0x5c($v0)
  /* 11F5E0 80131E30 8D6B38B4 */        lw $t3, %lo(D_ovl60_801338B4)($t3)
  /* 11F5E4 80131E34 3C0C0000 */       lui $t4, %hi(D_NF_000073A8)
  /* 11F5E8 80131E38 258C73A8 */     addiu $t4, $t4, %lo(D_NF_000073A8)
  /* 11F5EC 80131E3C 02002025 */        or $a0, $s0, $zero
  /* 11F5F0 80131E40 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11F5F4 80131E44 016C2821 */      addu $a1, $t3, $t4
  /* 11F5F8 80131E48 944D0024 */       lhu $t5, 0x24($v0)
  /* 11F5FC 80131E4C 3C01436C */       lui $at, (0x436C0000 >> 16) # 236.0
  /* 11F600 80131E50 44814000 */      mtc1 $at, $f8 # 236.0 to cop1
  /* 11F604 80131E54 3C014240 */       lui $at, (0x42400000 >> 16) # 48.0
  /* 11F608 80131E58 44815000 */      mtc1 $at, $f10 # 48.0 to cop1
  /* 11F60C 80131E5C 31AFFFDF */      andi $t7, $t5, 0xffdf
  /* 11F610 80131E60 A44F0024 */        sh $t7, 0x24($v0)
  /* 11F614 80131E64 35F80001 */       ori $t8, $t7, 1
  /* 11F618 80131E68 A4580024 */        sh $t8, 0x24($v0)
  /* 11F61C 80131E6C 3C198013 */       lui $t9, %hi(D_ovl60_801338B0)
  /* 11F620 80131E70 E4480058 */      swc1 $f8, 0x58($v0)
  /* 11F624 80131E74 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 11F628 80131E78 8F3938B0 */        lw $t9, %lo(D_ovl60_801338B0)($t9)
  /* 11F62C 80131E7C 3C080001 */       lui $t0, %hi(D_NF_0000BA28)
  /* 11F630 80131E80 2508BA28 */     addiu $t0, $t0, %lo(D_NF_0000BA28)
  /* 11F634 80131E84 02002025 */        or $a0, $s0, $zero
  /* 11F638 80131E88 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11F63C 80131E8C 03282821 */      addu $a1, $t9, $t0
  /* 11F640 80131E90 94490024 */       lhu $t1, 0x24($v0)
  /* 11F644 80131E94 3C014365 */       lui $at, (0x43650000 >> 16) # 229.0
  /* 11F648 80131E98 44818000 */      mtc1 $at, $f16 # 229.0 to cop1
  /* 11F64C 80131E9C 3C014240 */       lui $at, (0x42400000 >> 16) # 48.0
  /* 11F650 80131EA0 44819000 */      mtc1 $at, $f18 # 48.0 to cop1
  /* 11F654 80131EA4 24030032 */     addiu $v1, $zero, 0x32
  /* 11F658 80131EA8 312BFFDF */      andi $t3, $t1, 0xffdf
  /* 11F65C 80131EAC A44B0024 */        sh $t3, 0x24($v0)
  /* 11F660 80131EB0 356C0001 */       ori $t4, $t3, 1
  /* 11F664 80131EB4 A44C0024 */        sh $t4, 0x24($v0)
  /* 11F668 80131EB8 A0430028 */        sb $v1, 0x28($v0)
  /* 11F66C 80131EBC A0430029 */        sb $v1, 0x29($v0)
  /* 11F670 80131EC0 A043002A */        sb $v1, 0x2a($v0)
  /* 11F674 80131EC4 3C058013 */       lui $a1, %hi(D_ovl60_801337BC)
  /* 11F678 80131EC8 E4500058 */      swc1 $f16, 0x58($v0)
  /* 11F67C 80131ECC E452005C */      swc1 $f18, 0x5c($v0)
  /* 11F680 80131ED0 8CA537BC */        lw $a1, %lo(D_ovl60_801337BC)($a1)
  /* 11F684 80131ED4 0C04C74B */       jal func_ovl60_80131D2C
  /* 11F688 80131ED8 02002025 */        or $a0, $s0, $zero
  /* 11F68C 80131EDC 8FBF0024 */        lw $ra, 0x24($sp)
  /* 11F690 80131EE0 8FB00020 */        lw $s0, 0x20($sp)
  /* 11F694 80131EE4 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11F698 80131EE8 03E00008 */        jr $ra
  /* 11F69C 80131EEC 00000000 */       nop 

glabel func_ovl60_80131EF0
  /* 11F6A0 80131EF0 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11F6A4 80131EF4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 11F6A8 80131EF8 00002025 */        or $a0, $zero, $zero
  /* 11F6AC 80131EFC 00002825 */        or $a1, $zero, $zero
  /* 11F6B0 80131F00 24060004 */     addiu $a2, $zero, 4
  /* 11F6B4 80131F04 0C00265A */       jal omMakeGObjCommon
  /* 11F6B8 80131F08 3C078000 */       lui $a3, 0x8000
  /* 11F6BC 80131F0C 3C018013 */       lui $at, %hi(D_ovl60_801337A0)
  /* 11F6C0 80131F10 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 11F6C4 80131F14 240EFFFF */     addiu $t6, $zero, -1
  /* 11F6C8 80131F18 AC2237A0 */        sw $v0, %lo(D_ovl60_801337A0)($at)
  /* 11F6CC 80131F1C AFA20024 */        sw $v0, 0x24($sp)
  /* 11F6D0 80131F20 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11F6D4 80131F24 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 11F6D8 80131F28 00402025 */        or $a0, $v0, $zero
  /* 11F6DC 80131F2C 24060002 */     addiu $a2, $zero, 2
  /* 11F6E0 80131F30 0C00277D */       jal func_80009DF4
  /* 11F6E4 80131F34 3C078000 */       lui $a3, 0x8000
  /* 11F6E8 80131F38 8FA40024 */        lw $a0, 0x24($sp)
  /* 11F6EC 80131F3C 3C0542E2 */       lui $a1, 0x42e2
  /* 11F6F0 80131F40 3C064228 */       lui $a2, 0x4228
  /* 11F6F4 80131F44 0C04C6FF */       jal func_ovl60_80131BFC
  /* 11F6F8 80131F48 24070011 */     addiu $a3, $zero, 0x11
  /* 11F6FC 80131F4C 3C058013 */       lui $a1, %hi(D_ovl60_801337B8)
  /* 11F700 80131F50 8CA537B8 */        lw $a1, %lo(D_ovl60_801337B8)($a1)
  /* 11F704 80131F54 8FA40024 */        lw $a0, 0x24($sp)
  /* 11F708 80131F58 0C04C6C9 */       jal func_ovl60_80131B24
  /* 11F70C 80131F5C 2CA50001 */     sltiu $a1, $a1, 1
  /* 11F710 80131F60 3C0F8013 */       lui $t7, %hi(D_ovl60_801338B4)
  /* 11F714 80131F64 8DEF38B4 */        lw $t7, %lo(D_ovl60_801338B4)($t7)
  /* 11F718 80131F68 3C180000 */       lui $t8, %hi(D_NF_00007628)
  /* 11F71C 80131F6C 27187628 */     addiu $t8, $t8, %lo(D_NF_00007628)
  /* 11F720 80131F70 8FA40024 */        lw $a0, 0x24($sp)
  /* 11F724 80131F74 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11F728 80131F78 01F82821 */      addu $a1, $t7, $t8
  /* 11F72C 80131F7C 94590024 */       lhu $t9, 0x24($v0)
  /* 11F730 80131F80 3C0142E8 */       lui $at, (0x42E80000 >> 16) # 116.0
  /* 11F734 80131F84 44812000 */      mtc1 $at, $f4 # 116.0 to cop1
  /* 11F738 80131F88 3C014238 */       lui $at, (0x42380000 >> 16) # 46.0
  /* 11F73C 80131F8C 44813000 */      mtc1 $at, $f6 # 46.0 to cop1
  /* 11F740 80131F90 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 11F744 80131F94 A4490024 */        sh $t1, 0x24($v0)
  /* 11F748 80131F98 352A0001 */       ori $t2, $t1, 1
  /* 11F74C 80131F9C A44A0024 */        sh $t2, 0x24($v0)
  /* 11F750 80131FA0 A0400028 */        sb $zero, 0x28($v0)
  /* 11F754 80131FA4 A0400029 */        sb $zero, 0x29($v0)
  /* 11F758 80131FA8 A040002A */        sb $zero, 0x2a($v0)
  /* 11F75C 80131FAC E4440058 */      swc1 $f4, 0x58($v0)
  /* 11F760 80131FB0 E446005C */      swc1 $f6, 0x5c($v0)
  /* 11F764 80131FB4 8FBF001C */        lw $ra, 0x1c($sp)
  /* 11F768 80131FB8 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11F76C 80131FBC 03E00008 */        jr $ra
  /* 11F770 80131FC0 00000000 */       nop 

glabel func_ovl60_80131FC4
  /* 11F774 80131FC4 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11F778 80131FC8 AFBF001C */        sw $ra, 0x1c($sp)
  /* 11F77C 80131FCC 00002025 */        or $a0, $zero, $zero
  /* 11F780 80131FD0 00002825 */        or $a1, $zero, $zero
  /* 11F784 80131FD4 24060004 */     addiu $a2, $zero, 4
  /* 11F788 80131FD8 0C00265A */       jal omMakeGObjCommon
  /* 11F78C 80131FDC 3C078000 */       lui $a3, 0x8000
  /* 11F790 80131FE0 3C018013 */       lui $at, %hi(D_ovl60_801337A4)
  /* 11F794 80131FE4 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 11F798 80131FE8 240EFFFF */     addiu $t6, $zero, -1
  /* 11F79C 80131FEC AC2237A4 */        sw $v0, %lo(D_ovl60_801337A4)($at)
  /* 11F7A0 80131FF0 AFA20024 */        sw $v0, 0x24($sp)
  /* 11F7A4 80131FF4 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11F7A8 80131FF8 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 11F7AC 80131FFC 00402025 */        or $a0, $v0, $zero
  /* 11F7B0 80132000 24060002 */     addiu $a2, $zero, 2
  /* 11F7B4 80132004 0C00277D */       jal func_80009DF4
  /* 11F7B8 80132008 3C078000 */       lui $a3, 0x8000
  /* 11F7BC 8013200C 8FA40024 */        lw $a0, 0x24($sp)
  /* 11F7C0 80132010 3C0542B6 */       lui $a1, 0x42b6
  /* 11F7C4 80132014 3C0642B2 */       lui $a2, 0x42b2
  /* 11F7C8 80132018 0C04C6FF */       jal func_ovl60_80131BFC
  /* 11F7CC 8013201C 24070011 */     addiu $a3, $zero, 0x11
  /* 11F7D0 80132020 3C058013 */       lui $a1, %hi(D_ovl60_801337B8)
  /* 11F7D4 80132024 8CA537B8 */        lw $a1, %lo(D_ovl60_801337B8)($a1)
  /* 11F7D8 80132028 8FA40024 */        lw $a0, 0x24($sp)
  /* 11F7DC 8013202C 38A50001 */      xori $a1, $a1, 1
  /* 11F7E0 80132030 0C04C6C9 */       jal func_ovl60_80131B24
  /* 11F7E4 80132034 2CA50001 */     sltiu $a1, $a1, 1
  /* 11F7E8 80132038 3C0F8013 */       lui $t7, %hi(D_ovl60_801338B4)
  /* 11F7EC 8013203C 8DEF38B4 */        lw $t7, %lo(D_ovl60_801338B4)($t7)
  /* 11F7F0 80132040 3C180001 */       lui $t8, %hi(D_NF_00008138)
  /* 11F7F4 80132044 27188138 */     addiu $t8, $t8, %lo(D_NF_00008138)
  /* 11F7F8 80132048 8FA40024 */        lw $a0, 0x24($sp)
  /* 11F7FC 8013204C 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11F800 80132050 01F82821 */      addu $a1, $t7, $t8
  /* 11F804 80132054 94590024 */       lhu $t9, 0x24($v0)
  /* 11F808 80132058 3C0142CE */       lui $at, (0x42CE0000 >> 16) # 103.0
  /* 11F80C 8013205C 44812000 */      mtc1 $at, $f4 # 103.0 to cop1
  /* 11F810 80132060 3C0142B8 */       lui $at, (0x42B80000 >> 16) # 92.0
  /* 11F814 80132064 44813000 */      mtc1 $at, $f6 # 92.0 to cop1
  /* 11F818 80132068 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 11F81C 8013206C A4490024 */        sh $t1, 0x24($v0)
  /* 11F820 80132070 352A0001 */       ori $t2, $t1, 1
  /* 11F824 80132074 A44A0024 */        sh $t2, 0x24($v0)
  /* 11F828 80132078 A0400028 */        sb $zero, 0x28($v0)
  /* 11F82C 8013207C A0400029 */        sb $zero, 0x29($v0)
  /* 11F830 80132080 A040002A */        sb $zero, 0x2a($v0)
  /* 11F834 80132084 E4440058 */      swc1 $f4, 0x58($v0)
  /* 11F838 80132088 E446005C */      swc1 $f6, 0x5c($v0)
  /* 11F83C 8013208C 8FBF001C */        lw $ra, 0x1c($sp)
  /* 11F840 80132090 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11F844 80132094 03E00008 */        jr $ra
  /* 11F848 80132098 00000000 */       nop 

glabel func_ovl60_8013209C
  /* 11F84C 8013209C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11F850 801320A0 AFBF001C */        sw $ra, 0x1c($sp)
  /* 11F854 801320A4 00002025 */        or $a0, $zero, $zero
  /* 11F858 801320A8 00002825 */        or $a1, $zero, $zero
  /* 11F85C 801320AC 24060004 */     addiu $a2, $zero, 4
  /* 11F860 801320B0 0C00265A */       jal omMakeGObjCommon
  /* 11F864 801320B4 3C078000 */       lui $a3, 0x8000
  /* 11F868 801320B8 3C018013 */       lui $at, %hi(D_ovl60_801337A8)
  /* 11F86C 801320BC 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 11F870 801320C0 240EFFFF */     addiu $t6, $zero, -1
  /* 11F874 801320C4 AC2237A8 */        sw $v0, %lo(D_ovl60_801337A8)($at)
  /* 11F878 801320C8 AFA20024 */        sw $v0, 0x24($sp)
  /* 11F87C 801320CC AFAE0010 */        sw $t6, 0x10($sp)
  /* 11F880 801320D0 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 11F884 801320D4 00402025 */        or $a0, $v0, $zero
  /* 11F888 801320D8 24060002 */     addiu $a2, $zero, 2
  /* 11F88C 801320DC 0C00277D */       jal func_80009DF4
  /* 11F890 801320E0 3C078000 */       lui $a3, 0x8000
  /* 11F894 801320E4 8FA40024 */        lw $a0, 0x24($sp)
  /* 11F898 801320E8 3C05428A */       lui $a1, 0x428a
  /* 11F89C 801320EC 3C064308 */       lui $a2, 0x4308
  /* 11F8A0 801320F0 0C04C6FF */       jal func_ovl60_80131BFC
  /* 11F8A4 801320F4 24070011 */     addiu $a3, $zero, 0x11
  /* 11F8A8 801320F8 3C058013 */       lui $a1, %hi(D_ovl60_801337B8)
  /* 11F8AC 801320FC 8CA537B8 */        lw $a1, %lo(D_ovl60_801337B8)($a1)
  /* 11F8B0 80132100 8FA40024 */        lw $a0, 0x24($sp)
  /* 11F8B4 80132104 38A50002 */      xori $a1, $a1, 2
  /* 11F8B8 80132108 0C04C6C9 */       jal func_ovl60_80131B24
  /* 11F8BC 8013210C 2CA50001 */     sltiu $a1, $a1, 1
  /* 11F8C0 80132110 3C0F8013 */       lui $t7, %hi(D_ovl60_801338B4)
  /* 11F8C4 80132114 8DEF38B4 */        lw $t7, %lo(D_ovl60_801338B4)($t7)
  /* 11F8C8 80132118 3C180001 */       lui $t8, %hi(D_NF_00008780)
  /* 11F8CC 8013211C 27188780 */     addiu $t8, $t8, %lo(D_NF_00008780)
  /* 11F8D0 80132120 8FA40024 */        lw $a0, 0x24($sp)
  /* 11F8D4 80132124 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11F8D8 80132128 01F82821 */      addu $a1, $t7, $t8
  /* 11F8DC 8013212C 94590024 */       lhu $t9, 0x24($v0)
  /* 11F8E0 80132130 3C0142AC */       lui $at, (0x42AC0000 >> 16) # 86.0
  /* 11F8E4 80132134 44812000 */      mtc1 $at, $f4 # 86.0 to cop1
  /* 11F8E8 80132138 3C01430C */       lui $at, (0x430C0000 >> 16) # 140.0
  /* 11F8EC 8013213C 44813000 */      mtc1 $at, $f6 # 140.0 to cop1
  /* 11F8F0 80132140 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 11F8F4 80132144 A4490024 */        sh $t1, 0x24($v0)
  /* 11F8F8 80132148 352A0001 */       ori $t2, $t1, 1
  /* 11F8FC 8013214C A44A0024 */        sh $t2, 0x24($v0)
  /* 11F900 80132150 A0400028 */        sb $zero, 0x28($v0)
  /* 11F904 80132154 A0400029 */        sb $zero, 0x29($v0)
  /* 11F908 80132158 A040002A */        sb $zero, 0x2a($v0)
  /* 11F90C 8013215C E4440058 */      swc1 $f4, 0x58($v0)
  /* 11F910 80132160 E446005C */      swc1 $f6, 0x5c($v0)
  /* 11F914 80132164 8FBF001C */        lw $ra, 0x1c($sp)
  /* 11F918 80132168 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11F91C 8013216C 03E00008 */        jr $ra
  /* 11F920 80132170 00000000 */       nop 

  /* 11F924 80132174 948E0024 */       lhu $t6, 0x24($a0)
  /* 11F928 80132178 240200FF */     addiu $v0, $zero, 0xff
  /* 11F92C 8013217C A0800060 */        sb $zero, 0x60($a0)
  /* 11F930 80132180 31D8FFDF */      andi $t8, $t6, 0xffdf
  /* 11F934 80132184 A4980024 */        sh $t8, 0x24($a0)
  /* 11F938 80132188 37190001 */       ori $t9, $t8, 1
  /* 11F93C 8013218C A4990024 */        sh $t9, 0x24($a0)
  /* 11F940 80132190 A0800061 */        sb $zero, 0x61($a0)
  /* 11F944 80132194 A0800062 */        sb $zero, 0x62($a0)
  /* 11F948 80132198 A0820028 */        sb $v0, 0x28($a0)
  /* 11F94C 8013219C A0820029 */        sb $v0, 0x29($a0)
  /* 11F950 801321A0 03E00008 */        jr $ra
  /* 11F954 801321A4 A082002A */        sb $v0, 0x2a($a0)

glabel func_ovl60_801321A8
  /* 11F958 801321A8 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 11F95C 801321AC 3C0F8013 */       lui $t7, %hi(D_ovl60_80133680)
  /* 11F960 801321B0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11F964 801321B4 25EF3680 */     addiu $t7, $t7, %lo(D_ovl60_80133680)
  /* 11F968 801321B8 8DF90000 */        lw $t9, ($t7) # D_ovl60_80133680 + 0
  /* 11F96C 801321BC 27AE003C */     addiu $t6, $sp, 0x3c
  /* 11F970 801321C0 8DF80004 */        lw $t8, 4($t7) # D_ovl60_80133680 + 4
  /* 11F974 801321C4 ADD90000 */        sw $t9, ($t6)
  /* 11F978 801321C8 8DF90008 */        lw $t9, 8($t7) # D_ovl60_80133680 + 8
  /* 11F97C 801321CC 3C098013 */       lui $t1, %hi(D_ovl60_8013368C)
  /* 11F980 801321D0 2529368C */     addiu $t1, $t1, %lo(D_ovl60_8013368C)
  /* 11F984 801321D4 ADD80004 */        sw $t8, 4($t6)
  /* 11F988 801321D8 ADD90008 */        sw $t9, 8($t6)
  /* 11F98C 801321DC 8D2A0004 */        lw $t2, 4($t1) # D_ovl60_8013368C + 4
  /* 11F990 801321E0 8D2B0000 */        lw $t3, ($t1) # D_ovl60_8013368C + 0
  /* 11F994 801321E4 27A8001C */     addiu $t0, $sp, 0x1c
  /* 11F998 801321E8 AD0A0004 */        sw $t2, 4($t0)
  /* 11F99C 801321EC AD0B0000 */        sw $t3, ($t0)
  /* 11F9A0 801321F0 8D2B0008 */        lw $t3, 8($t1) # D_ovl60_8013368C + 8
  /* 11F9A4 801321F4 8D2A000C */        lw $t2, 0xc($t1) # D_ovl60_8013368C + 12
  /* 11F9A8 801321F8 00002025 */        or $a0, $zero, $zero
  /* 11F9AC 801321FC AD0B0008 */        sw $t3, 8($t0)
  /* 11F9B0 80132200 AD0A000C */        sw $t2, 0xc($t0)
  /* 11F9B4 80132204 8D2A0014 */        lw $t2, 0x14($t1) # D_ovl60_8013368C + 20
  /* 11F9B8 80132208 8D2B0010 */        lw $t3, 0x10($t1) # D_ovl60_8013368C + 16
  /* 11F9BC 8013220C 00002825 */        or $a1, $zero, $zero
  /* 11F9C0 80132210 AD0A0014 */        sw $t2, 0x14($t0)
  /* 11F9C4 80132214 AD0B0010 */        sw $t3, 0x10($t0)
  /* 11F9C8 80132218 8D2B0018 */        lw $t3, 0x18($t1) # D_ovl60_8013368C + 24
  /* 11F9CC 8013221C 8D2A001C */        lw $t2, 0x1c($t1) # D_ovl60_8013368C + 28
  /* 11F9D0 80132220 24060005 */     addiu $a2, $zero, 5
  /* 11F9D4 80132224 3C078000 */       lui $a3, 0x8000
  /* 11F9D8 80132228 AD0B0018 */        sw $t3, 0x18($t0)
  /* 11F9DC 8013222C 0C00265A */       jal omMakeGObjCommon
  /* 11F9E0 80132230 AD0A001C */        sw $t2, 0x1c($t0)
  /* 11F9E4 80132234 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11F9E8 80132238 3C018013 */       lui $at, %hi(D_ovl60_801337D0)
  /* 11F9EC 8013223C AC2237D0 */        sw $v0, %lo(D_ovl60_801337D0)($at)
  /* 11F9F0 80132240 03E00008 */        jr $ra
  /* 11F9F4 80132244 27BD0050 */     addiu $sp, $sp, 0x50

glabel func_ovl60_80132248
  /* 11F9F8 80132248 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 11F9FC 8013224C 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 11FA00 80132250 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11FA04 80132254 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11FA08 80132258 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11FA0C 8013225C 244E0008 */     addiu $t6, $v0, 8
  /* 11FA10 80132260 AFA40018 */        sw $a0, 0x18($sp)
  /* 11FA14 80132264 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 11FA18 80132268 3C1FE700 */       lui $ra, 0xe700
  /* 11FA1C 8013226C AC5F0000 */        sw $ra, ($v0)
  /* 11FA20 80132270 AC400004 */        sw $zero, 4($v0)
  /* 11FA24 80132274 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11FA28 80132278 3C18E300 */       lui $t8, (0xE3000A01 >> 16) # 3808430593
  /* 11FA2C 8013227C 37180A01 */       ori $t8, $t8, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 11FA30 80132280 244F0008 */     addiu $t7, $v0, 8
  /* 11FA34 80132284 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 11FA38 80132288 AC400004 */        sw $zero, 4($v0)
  /* 11FA3C 8013228C AC580000 */        sw $t8, ($v0)
  /* 11FA40 80132290 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11FA44 80132294 3C0FA078 */       lui $t7, (0xA07814E6 >> 16) # 2692224230
  /* 11FA48 80132298 35EF14E6 */       ori $t7, $t7, (0xA07814E6 & 0xFFFF) # 2692224230
  /* 11FA4C 8013229C 24590008 */     addiu $t9, $v0, 8
  /* 11FA50 801322A0 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 11FA54 801322A4 3C0EFA00 */       lui $t6, 0xfa00
  /* 11FA58 801322A8 AC4E0000 */        sw $t6, ($v0)
  /* 11FA5C 801322AC AC4F0004 */        sw $t7, 4($v0)
  /* 11FA60 801322B0 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11FA64 801322B4 3C0EFFFD */       lui $t6, (0xFFFDF6FB >> 16) # 4294833915
  /* 11FA68 801322B8 3C19FCFF */       lui $t9, (0xFCFFFFFF >> 16) # 4244635647
  /* 11FA6C 801322BC 24580008 */     addiu $t8, $v0, 8
  /* 11FA70 801322C0 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 11FA74 801322C4 3739FFFF */       ori $t9, $t9, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 11FA78 801322C8 35CEF6FB */       ori $t6, $t6, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 11FA7C 801322CC AC4E0004 */        sw $t6, 4($v0)
  /* 11FA80 801322D0 AC590000 */        sw $t9, ($v0)
  /* 11FA84 801322D4 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11FA88 801322D8 3C190050 */       lui $t9, (0x5041C8 >> 16) # 5259720
  /* 11FA8C 801322DC 3C18E200 */       lui $t8, (0xE200001C >> 16) # 3791650844
  /* 11FA90 801322E0 244F0008 */     addiu $t7, $v0, 8
  /* 11FA94 801322E4 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 11FA98 801322E8 3718001C */       ori $t8, $t8, (0xE200001C & 0xFFFF) # 3791650844
  /* 11FA9C 801322EC 373941C8 */       ori $t9, $t9, (0x5041C8 & 0xFFFF) # 5259720
  /* 11FAA0 801322F0 AC590004 */        sw $t9, 4($v0)
  /* 11FAA4 801322F4 AC580000 */        sw $t8, ($v0)
  /* 11FAA8 801322F8 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11FAAC 801322FC 3C180038 */       lui $t8, (0x38423C >> 16) # 3686972
  /* 11FAB0 80132300 3C0FF64D */       lui $t7, (0xF64D8398 >> 16) # 4132275096
  /* 11FAB4 80132304 244E0008 */     addiu $t6, $v0, 8
  /* 11FAB8 80132308 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 11FABC 8013230C 35EF8398 */       ori $t7, $t7, (0xF64D8398 & 0xFFFF) # 4132275096
  /* 11FAC0 80132310 3718423C */       ori $t8, $t8, (0x38423C & 0xFFFF) # 3686972
  /* 11FAC4 80132314 AC580004 */        sw $t8, 4($v0)
  /* 11FAC8 80132318 AC4F0000 */        sw $t7, ($v0)
  /* 11FACC 8013231C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11FAD0 80132320 3C0FE200 */       lui $t7, (0xE200001C >> 16) # 3791650844
  /* 11FAD4 80132324 3C180055 */       lui $t8, (0x552078 >> 16) # 5578872
  /* 11FAD8 80132328 24590008 */     addiu $t9, $v0, 8
  /* 11FADC 8013232C AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 11FAE0 80132330 AC400004 */        sw $zero, 4($v0)
  /* 11FAE4 80132334 AC5F0000 */        sw $ra, ($v0)
  /* 11FAE8 80132338 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11FAEC 8013233C 37182078 */       ori $t8, $t8, (0x552078 & 0xFFFF) # 5578872
  /* 11FAF0 80132340 35EF001C */       ori $t7, $t7, (0xE200001C & 0xFFFF) # 3791650844
  /* 11FAF4 80132344 244E0008 */     addiu $t6, $v0, 8
  /* 11FAF8 80132348 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 11FAFC 8013234C AC580004 */        sw $t8, 4($v0)
  /* 11FB00 80132350 AC4F0000 */        sw $t7, ($v0)
  /* 11FB04 80132354 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11FB08 80132358 3C0EE300 */       lui $t6, (0xE3000A01 >> 16) # 3808430593
  /* 11FB0C 8013235C 35CE0A01 */       ori $t6, $t6, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 11FB10 80132360 24590008 */     addiu $t9, $v0, 8
  /* 11FB14 80132364 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 11FB18 80132368 AC400004 */        sw $zero, 4($v0)
  /* 11FB1C 8013236C 0C0333AB */       jal func_ovl0_800CCEAC
  /* 11FB20 80132370 AC4E0000 */        sw $t6, ($v0)
  /* 11FB24 80132374 0C0333C0 */       jal func_ovl0_800CCF00
  /* 11FB28 80132378 8FA40018 */        lw $a0, 0x18($sp)
  /* 11FB2C 8013237C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11FB30 80132380 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11FB34 80132384 03E00008 */        jr $ra
  /* 11FB38 80132388 00000000 */       nop 

glabel func_ovl60_8013238C
  /* 11FB3C 8013238C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11FB40 80132390 AFBF001C */        sw $ra, 0x1c($sp)
  /* 11FB44 80132394 00002025 */        or $a0, $zero, $zero
  /* 11FB48 80132398 00002825 */        or $a1, $zero, $zero
  /* 11FB4C 8013239C 24060003 */     addiu $a2, $zero, 3
  /* 11FB50 801323A0 0C00265A */       jal omMakeGObjCommon
  /* 11FB54 801323A4 3C078000 */       lui $a3, 0x8000
  /* 11FB58 801323A8 3C058013 */       lui $a1, %hi(func_ovl60_80132248)
  /* 11FB5C 801323AC 240EFFFF */     addiu $t6, $zero, -1
  /* 11FB60 801323B0 AFA20024 */        sw $v0, 0x24($sp)
  /* 11FB64 801323B4 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11FB68 801323B8 24A52248 */     addiu $a1, $a1, %lo(func_ovl60_80132248)
  /* 11FB6C 801323BC 00402025 */        or $a0, $v0, $zero
  /* 11FB70 801323C0 24060001 */     addiu $a2, $zero, 1
  /* 11FB74 801323C4 0C00277D */       jal func_80009DF4
  /* 11FB78 801323C8 3C078000 */       lui $a3, 0x8000
  /* 11FB7C 801323CC 3C0F8013 */       lui $t7, %hi(D_ovl60_801338B0)
  /* 11FB80 801323D0 8DEF38B0 */        lw $t7, %lo(D_ovl60_801338B0)($t7)
  /* 11FB84 801323D4 3C180000 */       lui $t8, %hi(D_NF_000031F8)
  /* 11FB88 801323D8 271831F8 */     addiu $t8, $t8, %lo(D_NF_000031F8)
  /* 11FB8C 801323DC 8FA40024 */        lw $a0, 0x24($sp)
  /* 11FB90 801323E0 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11FB94 801323E4 01F82821 */      addu $a1, $t7, $t8
  /* 11FB98 801323E8 94590024 */       lhu $t9, 0x24($v0)
  /* 11FB9C 801323EC 3C01436B */       lui $at, (0x436B0000 >> 16) # 235.0
  /* 11FBA0 801323F0 44812000 */      mtc1 $at, $f4 # 235.0 to cop1
  /* 11FBA4 801323F4 3C01431E */       lui $at, (0x431E0000 >> 16) # 158.0
  /* 11FBA8 801323F8 44813000 */      mtc1 $at, $f6 # 158.0 to cop1
  /* 11FBAC 801323FC 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 11FBB0 80132400 A4490024 */        sh $t1, 0x24($v0)
  /* 11FBB4 80132404 352A0001 */       ori $t2, $t1, 1
  /* 11FBB8 80132408 A44A0024 */        sh $t2, 0x24($v0)
  /* 11FBBC 8013240C A0400028 */        sb $zero, 0x28($v0)
  /* 11FBC0 80132410 A0400029 */        sb $zero, 0x29($v0)
  /* 11FBC4 80132414 A040002A */        sb $zero, 0x2a($v0)
  /* 11FBC8 80132418 3C0B8013 */       lui $t3, %hi(D_ovl60_801338B4)
  /* 11FBCC 8013241C E4440058 */      swc1 $f4, 0x58($v0)
  /* 11FBD0 80132420 E446005C */      swc1 $f6, 0x5c($v0)
  /* 11FBD4 80132424 8D6B38B4 */        lw $t3, %lo(D_ovl60_801338B4)($t3)
  /* 11FBD8 80132428 3C0C0001 */       lui $t4, %hi(D_NF_00009288)
  /* 11FBDC 8013242C 258C9288 */     addiu $t4, $t4, %lo(D_NF_00009288)
  /* 11FBE0 80132430 8FA40024 */        lw $a0, 0x24($sp)
  /* 11FBE4 80132434 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11FBE8 80132438 016C2821 */      addu $a1, $t3, $t4
  /* 11FBEC 8013243C 944D0024 */       lhu $t5, 0x24($v0)
  /* 11FBF0 80132440 3C014349 */       lui $at, (0x43490000 >> 16) # 201.0
  /* 11FBF4 80132444 44814000 */      mtc1 $at, $f8 # 201.0 to cop1
  /* 11FBF8 80132448 3C0142F0 */       lui $at, (0x42F00000 >> 16) # 120.0
  /* 11FBFC 8013244C 44815000 */      mtc1 $at, $f10 # 120.0 to cop1
  /* 11FC00 80132450 31AFFFDF */      andi $t7, $t5, 0xffdf
  /* 11FC04 80132454 A44F0024 */        sh $t7, 0x24($v0)
  /* 11FC08 80132458 35F80001 */       ori $t8, $t7, 1
  /* 11FC0C 8013245C A4580024 */        sh $t8, 0x24($v0)
  /* 11FC10 80132460 A0400028 */        sb $zero, 0x28($v0)
  /* 11FC14 80132464 A0400029 */        sb $zero, 0x29($v0)
  /* 11FC18 80132468 A040002A */        sb $zero, 0x2a($v0)
  /* 11FC1C 8013246C E4480058 */      swc1 $f8, 0x58($v0)
  /* 11FC20 80132470 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 11FC24 80132474 8FBF001C */        lw $ra, 0x1c($sp)
  /* 11FC28 80132478 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11FC2C 8013247C 03E00008 */        jr $ra
  /* 11FC30 80132480 00000000 */       nop 

glabel func_ovl60_80132484
  /* 11FC34 80132484 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 11FC38 80132488 AFBF0024 */        sw $ra, 0x24($sp)
  /* 11FC3C 8013248C AFB00020 */        sw $s0, 0x20($sp)
  /* 11FC40 80132490 00002025 */        or $a0, $zero, $zero
  /* 11FC44 80132494 00002825 */        or $a1, $zero, $zero
  /* 11FC48 80132498 24060002 */     addiu $a2, $zero, 2
  /* 11FC4C 8013249C 0C00265A */       jal omMakeGObjCommon
  /* 11FC50 801324A0 3C078000 */       lui $a3, 0x8000
  /* 11FC54 801324A4 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 11FC58 801324A8 240EFFFF */     addiu $t6, $zero, -1
  /* 11FC5C 801324AC 00408025 */        or $s0, $v0, $zero
  /* 11FC60 801324B0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11FC64 801324B4 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 11FC68 801324B8 00402025 */        or $a0, $v0, $zero
  /* 11FC6C 801324BC 00003025 */        or $a2, $zero, $zero
  /* 11FC70 801324C0 0C00277D */       jal func_80009DF4
  /* 11FC74 801324C4 3C078000 */       lui $a3, 0x8000
  /* 11FC78 801324C8 3C0F8013 */       lui $t7, %hi(D_ovl60_801338B0)
  /* 11FC7C 801324CC 8DEF38B0 */        lw $t7, %lo(D_ovl60_801338B0)($t7)
  /* 11FC80 801324D0 3C180002 */       lui $t8, %hi(D_NF_00018000)
  /* 11FC84 801324D4 27188000 */     addiu $t8, $t8, %lo(D_NF_00018000)
  /* 11FC88 801324D8 02002025 */        or $a0, $s0, $zero
  /* 11FC8C 801324DC 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11FC90 801324E0 01F82821 */      addu $a1, $t7, $t8
  /* 11FC94 801324E4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 11FC98 801324E8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 11FC9C 801324EC 3C198013 */       lui $t9, %hi(D_ovl60_801338B0)
  /* 11FCA0 801324F0 3C030000 */       lui $v1, %hi(D_NF_00002A30)
  /* 11FCA4 801324F4 E4400058 */      swc1 $f0, 0x58($v0)
  /* 11FCA8 801324F8 E440005C */      swc1 $f0, 0x5c($v0)
  /* 11FCAC 801324FC 8F3938B0 */        lw $t9, %lo(D_ovl60_801338B0)($t9)
  /* 11FCB0 80132500 24632A30 */     addiu $v1, $v1, %lo(D_NF_00002A30)
  /* 11FCB4 80132504 AFA3002C */        sw $v1, 0x2c($sp)
  /* 11FCB8 80132508 02002025 */        or $a0, $s0, $zero
  /* 11FCBC 8013250C 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11FCC0 80132510 03232821 */      addu $a1, $t9, $v1
  /* 11FCC4 80132514 8FA3002C */        lw $v1, 0x2c($sp)
  /* 11FCC8 80132518 94480024 */       lhu $t0, 0x24($v0)
  /* 11FCCC 8013251C 3C01430C */       lui $at, (0x430C0000 >> 16) # 140.0
  /* 11FCD0 80132520 44812000 */      mtc1 $at, $f4 # 140.0 to cop1
  /* 11FCD4 80132524 3C01430F */       lui $at, (0x430F0000 >> 16) # 143.0
  /* 11FCD8 80132528 44813000 */      mtc1 $at, $f6 # 143.0 to cop1
  /* 11FCDC 8013252C 310AFFDF */      andi $t2, $t0, 0xffdf
  /* 11FCE0 80132530 A44A0024 */        sh $t2, 0x24($v0)
  /* 11FCE4 80132534 354B0001 */       ori $t3, $t2, 1
  /* 11FCE8 80132538 240C00A0 */     addiu $t4, $zero, 0xa0
  /* 11FCEC 8013253C 240D0078 */     addiu $t5, $zero, 0x78
  /* 11FCF0 80132540 240E0014 */     addiu $t6, $zero, 0x14
  /* 11FCF4 80132544 A44B0024 */        sh $t3, 0x24($v0)
  /* 11FCF8 80132548 A04C0028 */        sb $t4, 0x28($v0)
  /* 11FCFC 8013254C A04D0029 */        sb $t5, 0x29($v0)
  /* 11FD00 80132550 A04E002A */        sb $t6, 0x2a($v0)
  /* 11FD04 80132554 3C0F8013 */       lui $t7, %hi(D_ovl60_801338B0)
  /* 11FD08 80132558 E4440058 */      swc1 $f4, 0x58($v0)
  /* 11FD0C 8013255C E446005C */      swc1 $f6, 0x5c($v0)
  /* 11FD10 80132560 8DEF38B0 */        lw $t7, %lo(D_ovl60_801338B0)($t7)
  /* 11FD14 80132564 02002025 */        or $a0, $s0, $zero
  /* 11FD18 80132568 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11FD1C 8013256C 01E32821 */      addu $a1, $t7, $v1
  /* 11FD20 80132570 94580024 */       lhu $t8, 0x24($v0)
  /* 11FD24 80132574 3C014361 */       lui $at, (0x43610000 >> 16) # 225.0
  /* 11FD28 80132578 44814000 */      mtc1 $at, $f8 # 225.0 to cop1
  /* 11FD2C 8013257C 3C014260 */       lui $at, (0x42600000 >> 16) # 56.0
  /* 11FD30 80132580 44815000 */      mtc1 $at, $f10 # 56.0 to cop1
  /* 11FD34 80132584 3308FFDF */      andi $t0, $t8, 0xffdf
  /* 11FD38 80132588 A4480024 */        sh $t0, 0x24($v0)
  /* 11FD3C 8013258C 35090001 */       ori $t1, $t0, 1
  /* 11FD40 80132590 240A00A0 */     addiu $t2, $zero, 0xa0
  /* 11FD44 80132594 240B0078 */     addiu $t3, $zero, 0x78
  /* 11FD48 80132598 240C0014 */     addiu $t4, $zero, 0x14
  /* 11FD4C 8013259C A4490024 */        sh $t1, 0x24($v0)
  /* 11FD50 801325A0 A04A0028 */        sb $t2, 0x28($v0)
  /* 11FD54 801325A4 A04B0029 */        sb $t3, 0x29($v0)
  /* 11FD58 801325A8 A04C002A */        sb $t4, 0x2a($v0)
  /* 11FD5C 801325AC 3C0D8013 */       lui $t5, %hi(D_ovl60_801338B4)
  /* 11FD60 801325B0 E4480058 */      swc1 $f8, 0x58($v0)
  /* 11FD64 801325B4 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 11FD68 801325B8 8DAD38B4 */        lw $t5, %lo(D_ovl60_801338B4)($t5)
  /* 11FD6C 801325BC 3C0E0001 */       lui $t6, %hi(D_NF_0000B958)
  /* 11FD70 801325C0 25CEB958 */     addiu $t6, $t6, %lo(D_NF_0000B958)
  /* 11FD74 801325C4 02002025 */        or $a0, $s0, $zero
  /* 11FD78 801325C8 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11FD7C 801325CC 01AE2821 */      addu $a1, $t5, $t6
  /* 11FD80 801325D0 944F0024 */       lhu $t7, 0x24($v0)
  /* 11FD84 801325D4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 11FD88 801325D8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 11FD8C 801325DC 24030099 */     addiu $v1, $zero, 0x99
  /* 11FD90 801325E0 31F9FFDF */      andi $t9, $t7, 0xffdf
  /* 11FD94 801325E4 A4590024 */        sh $t9, 0x24($v0)
  /* 11FD98 801325E8 37280001 */       ori $t0, $t9, 1
  /* 11FD9C 801325EC A4480024 */        sh $t0, 0x24($v0)
  /* 11FDA0 801325F0 A0430028 */        sb $v1, 0x28($v0)
  /* 11FDA4 801325F4 A0430029 */        sb $v1, 0x29($v0)
  /* 11FDA8 801325F8 A043002A */        sb $v1, 0x2a($v0)
  /* 11FDAC 801325FC E4400058 */      swc1 $f0, 0x58($v0)
  /* 11FDB0 80132600 E440005C */      swc1 $f0, 0x5c($v0)
  /* 11FDB4 80132604 8FBF0024 */        lw $ra, 0x24($sp)
  /* 11FDB8 80132608 8FB00020 */        lw $s0, 0x20($sp)
  /* 11FDBC 8013260C 27BD0038 */     addiu $sp, $sp, 0x38
  /* 11FDC0 80132610 03E00008 */        jr $ra
  /* 11FDC4 80132614 00000000 */       nop 

  /* 11FDC8 80132618 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 11FDCC 8013261C 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 11FDD0 80132620 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11FDD4 80132624 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11FDD8 80132628 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11FDDC 8013262C 244E0008 */     addiu $t6, $v0, 8
  /* 11FDE0 80132630 AFA40018 */        sw $a0, 0x18($sp)
  /* 11FDE4 80132634 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 11FDE8 80132638 3C1FE700 */       lui $ra, 0xe700
  /* 11FDEC 8013263C AC5F0000 */        sw $ra, ($v0)
  /* 11FDF0 80132640 AC400004 */        sw $zero, 4($v0)
  /* 11FDF4 80132644 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11FDF8 80132648 3C18E300 */       lui $t8, (0xE3000A01 >> 16) # 3808430593
  /* 11FDFC 8013264C 37180A01 */       ori $t8, $t8, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 11FE00 80132650 244F0008 */     addiu $t7, $v0, 8
  /* 11FE04 80132654 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 11FE08 80132658 AC400004 */        sw $zero, 4($v0)
  /* 11FE0C 8013265C AC580000 */        sw $t8, ($v0)
  /* 11FE10 80132660 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11FE14 80132664 3C0F664C */       lui $t7, (0x664C0C66 >> 16) # 1716259942
  /* 11FE18 80132668 35EF0C66 */       ori $t7, $t7, (0x664C0C66 & 0xFFFF) # 1716259942
  /* 11FE1C 8013266C 24590008 */     addiu $t9, $v0, 8
  /* 11FE20 80132670 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 11FE24 80132674 3C0EFA00 */       lui $t6, 0xfa00
  /* 11FE28 80132678 AC4E0000 */        sw $t6, ($v0)
  /* 11FE2C 8013267C AC4F0004 */        sw $t7, 4($v0)
  /* 11FE30 80132680 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11FE34 80132684 3C0EFFFD */       lui $t6, (0xFFFDF6FB >> 16) # 4294833915
  /* 11FE38 80132688 3C19FCFF */       lui $t9, (0xFCFFFFFF >> 16) # 4244635647
  /* 11FE3C 8013268C 24580008 */     addiu $t8, $v0, 8
  /* 11FE40 80132690 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 11FE44 80132694 3739FFFF */       ori $t9, $t9, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 11FE48 80132698 35CEF6FB */       ori $t6, $t6, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 11FE4C 8013269C AC4E0004 */        sw $t6, 4($v0)
  /* 11FE50 801326A0 AC590000 */        sw $t9, ($v0)
  /* 11FE54 801326A4 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11FE58 801326A8 3C190050 */       lui $t9, (0x5041C8 >> 16) # 5259720
  /* 11FE5C 801326AC 3C18E200 */       lui $t8, (0xE200001C >> 16) # 3791650844
  /* 11FE60 801326B0 244F0008 */     addiu $t7, $v0, 8
  /* 11FE64 801326B4 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 11FE68 801326B8 3718001C */       ori $t8, $t8, (0xE200001C & 0xFFFF) # 3791650844
  /* 11FE6C 801326BC 373941C8 */       ori $t9, $t9, (0x5041C8 & 0xFFFF) # 5259720
  /* 11FE70 801326C0 AC590004 */        sw $t9, 4($v0)
  /* 11FE74 801326C4 AC580000 */        sw $t8, ($v0)
  /* 11FE78 801326C8 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11FE7C 801326CC 3C180006 */       lui $t8, (0x6C064 >> 16) # 442468
  /* 11FE80 801326D0 3C0FF62E */       lui $t7, (0xF62E41E8 >> 16) # 4130226664
  /* 11FE84 801326D4 244E0008 */     addiu $t6, $v0, 8
  /* 11FE88 801326D8 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 11FE8C 801326DC 35EF41E8 */       ori $t7, $t7, (0xF62E41E8 & 0xFFFF) # 4130226664
  /* 11FE90 801326E0 3718C064 */       ori $t8, $t8, (0x6C064 & 0xFFFF) # 442468
  /* 11FE94 801326E4 AC580004 */        sw $t8, 4($v0)
  /* 11FE98 801326E8 AC4F0000 */        sw $t7, ($v0)
  /* 11FE9C 801326EC 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11FEA0 801326F0 3C0FE200 */       lui $t7, (0xE200001C >> 16) # 3791650844
  /* 11FEA4 801326F4 3C180055 */       lui $t8, (0x552078 >> 16) # 5578872
  /* 11FEA8 801326F8 24590008 */     addiu $t9, $v0, 8
  /* 11FEAC 801326FC AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 11FEB0 80132700 AC400004 */        sw $zero, 4($v0)
  /* 11FEB4 80132704 AC5F0000 */        sw $ra, ($v0)
  /* 11FEB8 80132708 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11FEBC 8013270C 37182078 */       ori $t8, $t8, (0x552078 & 0xFFFF) # 5578872
  /* 11FEC0 80132710 35EF001C */       ori $t7, $t7, (0xE200001C & 0xFFFF) # 3791650844
  /* 11FEC4 80132714 244E0008 */     addiu $t6, $v0, 8
  /* 11FEC8 80132718 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 11FECC 8013271C AC580004 */        sw $t8, 4($v0)
  /* 11FED0 80132720 AC4F0000 */        sw $t7, ($v0)
  /* 11FED4 80132724 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11FED8 80132728 3C0EE300 */       lui $t6, (0xE3000A01 >> 16) # 3808430593
  /* 11FEDC 8013272C 35CE0A01 */       ori $t6, $t6, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 11FEE0 80132730 24590008 */     addiu $t9, $v0, 8
  /* 11FEE4 80132734 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 11FEE8 80132738 AC400004 */        sw $zero, 4($v0)
  /* 11FEEC 8013273C 0C0333AB */       jal func_ovl0_800CCEAC
  /* 11FEF0 80132740 AC4E0000 */        sw $t6, ($v0)
  /* 11FEF4 80132744 0C0333C0 */       jal func_ovl0_800CCF00
  /* 11FEF8 80132748 8FA40018 */        lw $a0, 0x18($sp)
  /* 11FEFC 8013274C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11FF00 80132750 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11FF04 80132754 03E00008 */        jr $ra
  /* 11FF08 80132758 00000000 */       nop 

glabel func_ovl60_8013275C
  /* 11FF0C 8013275C 3C048013 */       lui $a0, %hi(D_ovl60_801337D4)
  /* 11FF10 80132760 8C8437D4 */        lw $a0, %lo(D_ovl60_801337D4)($a0)
  /* 11FF14 80132764 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11FF18 80132768 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11FF1C 8013276C 50800006 */      beql $a0, $zero, .L80132788
  /* 11FF20 80132770 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11FF24 80132774 0C0026A1 */       jal omEjectGObjCommon
  /* 11FF28 80132778 00000000 */       nop 
  /* 11FF2C 8013277C 3C018013 */       lui $at, %hi(D_ovl60_801337D4)
  /* 11FF30 80132780 AC2037D4 */        sw $zero, %lo(D_ovl60_801337D4)($at)
  /* 11FF34 80132784 8FBF0014 */        lw $ra, 0x14($sp)
  .L80132788:
  /* 11FF38 80132788 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11FF3C 8013278C 03E00008 */        jr $ra
  /* 11FF40 80132790 00000000 */       nop 

  /* 11FF44 80132794 3C0E8013 */       lui $t6, %hi(D_ovl60_801337D8)
  /* 11FF48 80132798 3C0F8013 */       lui $t7, %hi(D_ovl60_801337E4)
  /* 11FF4C 8013279C 8DEF37E4 */        lw $t7, %lo(D_ovl60_801337E4)($t7)
  /* 11FF50 801327A0 8DCE37D8 */        lw $t6, %lo(D_ovl60_801337D8)($t6)
  /* 11FF54 801327A4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11FF58 801327A8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11FF5C 801327AC 15CF0003 */       bne $t6, $t7, .L801327BC
  /* 11FF60 801327B0 AFA40018 */        sw $a0, 0x18($sp)
  /* 11FF64 801327B4 0C04C9D7 */       jal func_ovl60_8013275C
  /* 11FF68 801327B8 00000000 */       nop 
  .L801327BC:
  /* 11FF6C 801327BC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11FF70 801327C0 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11FF74 801327C4 03E00008 */        jr $ra
  /* 11FF78 801327C8 00000000 */       nop 

  /* 11FF7C 801327CC 03E00008 */        jr $ra
  /* 11FF80 801327D0 00000000 */       nop 

glabel func_ovl60_801327D4
  /* 11FF84 801327D4 27BDFF80 */     addiu $sp, $sp, -0x80
  /* 11FF88 801327D8 3C0F8013 */       lui $t7, %hi(D_ovl60_801336AC)
  /* 11FF8C 801327DC AFBF0014 */        sw $ra, 0x14($sp)
  /* 11FF90 801327E0 AFA40080 */        sw $a0, 0x80($sp)
  /* 11FF94 801327E4 25EF36AC */     addiu $t7, $t7, %lo(D_ovl60_801336AC)
  /* 11FF98 801327E8 8DF90000 */        lw $t9, ($t7) # D_ovl60_801336AC + 0
  /* 11FF9C 801327EC 8DF80004 */        lw $t8, 4($t7) # D_ovl60_801336AC + 4
  /* 11FFA0 801327F0 27AE0060 */     addiu $t6, $sp, 0x60
  /* 11FFA4 801327F4 ADD90000 */        sw $t9, ($t6)
  /* 11FFA8 801327F8 ADD80004 */        sw $t8, 4($t6)
  /* 11FFAC 801327FC 8DF8000C */        lw $t8, 0xc($t7) # D_ovl60_801336AC + 12
  /* 11FFB0 80132800 8DF90008 */        lw $t9, 8($t7) # D_ovl60_801336AC + 8
  /* 11FFB4 80132804 3C0A8013 */       lui $t2, %hi(D_ovl60_801336CC)
  /* 11FFB8 80132808 ADD8000C */        sw $t8, 0xc($t6)
  /* 11FFBC 8013280C ADD90008 */        sw $t9, 8($t6)
  /* 11FFC0 80132810 8DF90010 */        lw $t9, 0x10($t7) # D_ovl60_801336AC + 16
  /* 11FFC4 80132814 8DF80014 */        lw $t8, 0x14($t7) # D_ovl60_801336AC + 20
  /* 11FFC8 80132818 254A36CC */     addiu $t2, $t2, %lo(D_ovl60_801336CC)
  /* 11FFCC 8013281C ADD90010 */        sw $t9, 0x10($t6)
  /* 11FFD0 80132820 ADD80014 */        sw $t8, 0x14($t6)
  /* 11FFD4 80132824 8DF8001C */        lw $t8, 0x1c($t7) # D_ovl60_801336AC + 28
  /* 11FFD8 80132828 8DF90018 */        lw $t9, 0x18($t7) # D_ovl60_801336AC + 24
  /* 11FFDC 8013282C 27A90040 */     addiu $t1, $sp, 0x40
  /* 11FFE0 80132830 ADD8001C */        sw $t8, 0x1c($t6)
  /* 11FFE4 80132834 ADD90018 */        sw $t9, 0x18($t6)
  /* 11FFE8 80132838 8D4B0004 */        lw $t3, 4($t2) # D_ovl60_801336CC + 4
  /* 11FFEC 8013283C 8D4C0000 */        lw $t4, ($t2) # D_ovl60_801336CC + 0
  /* 11FFF0 80132840 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 11FFF4 80132844 AD2B0004 */        sw $t3, 4($t1)
  /* 11FFF8 80132848 AD2C0000 */        sw $t4, ($t1)
  /* 11FFFC 8013284C 8D4C0008 */        lw $t4, 8($t2) # D_ovl60_801336CC + 8
  /* 120000 80132850 8D4B000C */        lw $t3, 0xc($t2) # D_ovl60_801336CC + 12
  /* 120004 80132854 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 120008 80132858 AD2C0008 */        sw $t4, 8($t1)
  /* 12000C 8013285C AD2B000C */        sw $t3, 0xc($t1)
  /* 120010 80132860 8D4B0014 */        lw $t3, 0x14($t2) # D_ovl60_801336CC + 20
  /* 120014 80132864 8D4C0010 */        lw $t4, 0x10($t2) # D_ovl60_801336CC + 16
  /* 120018 80132868 3C0EE700 */       lui $t6, 0xe700
  /* 12001C 8013286C AD2B0014 */        sw $t3, 0x14($t1)
  /* 120020 80132870 AD2C0010 */        sw $t4, 0x10($t1)
  /* 120024 80132874 8D4C0018 */        lw $t4, 0x18($t2) # D_ovl60_801336CC + 24
  /* 120028 80132878 8D4B001C */        lw $t3, 0x1c($t2) # D_ovl60_801336CC + 28
  /* 12002C 8013287C 3C18E300 */       lui $t8, (0xE3000A01 >> 16) # 3808430593
  /* 120030 80132880 AD2C0018 */        sw $t4, 0x18($t1)
  /* 120034 80132884 AD2B001C */        sw $t3, 0x1c($t1)
  /* 120038 80132888 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12003C 8013288C 37180A01 */       ori $t8, $t8, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 120040 80132890 3C190030 */       lui $t9, 0x30
  /* 120044 80132894 244D0008 */     addiu $t5, $v0, 8
  /* 120048 80132898 AC6D0000 */        sw $t5, ($v1) # gpDisplayListHead + 0
  /* 12004C 8013289C AC4E0000 */        sw $t6, ($v0)
  /* 120050 801328A0 AC400004 */        sw $zero, 4($v0)
  /* 120054 801328A4 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 120058 801328A8 3C0AE200 */       lui $t2, (0xE200001C >> 16) # 3791650844
  /* 12005C 801328AC 354A001C */       ori $t2, $t2, (0xE200001C & 0xFFFF) # 3791650844
  /* 120060 801328B0 244F0008 */     addiu $t7, $v0, 8
  /* 120064 801328B4 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 120068 801328B8 AC580000 */        sw $t8, ($v0)
  /* 12006C 801328BC AC590004 */        sw $t9, 4($v0)
  /* 120070 801328C0 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 120074 801328C4 3C0CF700 */       lui $t4, 0xf700
  /* 120078 801328C8 2404FFFF */     addiu $a0, $zero, -1
  /* 12007C 801328CC 24490008 */     addiu $t1, $v0, 8
  /* 120080 801328D0 AC690000 */        sw $t1, ($v1) # gpDisplayListHead + 0
  /* 120084 801328D4 AC4A0000 */        sw $t2, ($v0)
  /* 120088 801328D8 AC400004 */        sw $zero, 4($v0)
  /* 12008C 801328DC 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 120090 801328E0 244B0008 */     addiu $t3, $v0, 8
  /* 120094 801328E4 AC6B0000 */        sw $t3, ($v1) # gpDisplayListHead + 0
  /* 120098 801328E8 AC4C0000 */        sw $t4, ($v0)
  /* 12009C 801328EC 0C001B5C */       jal rgba32_to_fill_color
  /* 1200A0 801328F0 AFA20030 */        sw $v0, 0x30($sp)
  /* 1200A4 801328F4 8FA80030 */        lw $t0, 0x30($sp)
  /* 1200A8 801328F8 3C0D8013 */       lui $t5, %hi(D_ovl60_801337B8)
  /* 1200AC 801328FC 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 1200B0 80132900 AD020004 */        sw $v0, 4($t0)
  /* 1200B4 80132904 8DAD37B8 */        lw $t5, %lo(D_ovl60_801337B8)($t5)
  /* 1200B8 80132908 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 1200BC 8013290C 27A70060 */     addiu $a3, $sp, 0x60
  /* 1200C0 80132910 15A0001D */      bnez $t5, .L80132988
  /* 1200C4 80132914 3C068013 */       lui $a2, %hi(D_ovl60_801337BC)
  /* 1200C8 80132918 24C637BC */     addiu $a2, $a2, %lo(D_ovl60_801337BC)
  /* 1200CC 8013291C 8CCF0000 */        lw $t7, ($a2) # D_ovl60_801337BC + 0
  /* 1200D0 80132920 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1200D4 80132924 3C01F600 */       lui $at, 0xf600
  /* 1200D8 80132928 000FC100 */       sll $t8, $t7, 4
  /* 1200DC 8013292C 00F82021 */      addu $a0, $a3, $t8
  /* 1200E0 80132930 8C99000C */        lw $t9, 0xc($a0)
  /* 1200E4 80132934 8C8C0008 */        lw $t4, 8($a0)
  /* 1200E8 80132938 244E0008 */     addiu $t6, $v0, 8
  /* 1200EC 8013293C 332903FF */      andi $t1, $t9, 0x3ff
  /* 1200F0 80132940 00095080 */       sll $t2, $t1, 2
  /* 1200F4 80132944 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 1200F8 80132948 318D03FF */      andi $t5, $t4, 0x3ff
  /* 1200FC 8013294C 000D7380 */       sll $t6, $t5, 0xe
  /* 120100 80132950 01415825 */        or $t3, $t2, $at
  /* 120104 80132954 016E7825 */        or $t7, $t3, $t6
  /* 120108 80132958 AC4F0000 */        sw $t7, ($v0)
  /* 12010C 8013295C 8CD80000 */        lw $t8, ($a2) # D_ovl60_801337BC + 0
  /* 120110 80132960 0018C900 */       sll $t9, $t8, 4
  /* 120114 80132964 00F92021 */      addu $a0, $a3, $t9
  /* 120118 80132968 8C890004 */        lw $t1, 4($a0)
  /* 12011C 8013296C 8C8D0000 */        lw $t5, ($a0)
  /* 120120 80132970 312A03FF */      andi $t2, $t1, 0x3ff
  /* 120124 80132974 31AB03FF */      andi $t3, $t5, 0x3ff
  /* 120128 80132978 000B7380 */       sll $t6, $t3, 0xe
  /* 12012C 8013297C 000A6080 */       sll $t4, $t2, 2
  /* 120130 80132980 018E7825 */        or $t7, $t4, $t6
  /* 120134 80132984 AC4F0004 */        sw $t7, 4($v0)
  .L80132988:
  /* 120138 80132988 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12013C 8013298C 3C19E700 */       lui $t9, 0xe700
  /* 120140 80132990 3C0AE200 */       lui $t2, (0xE200001C >> 16) # 3791650844
  /* 120144 80132994 24580008 */     addiu $t8, $v0, 8
  /* 120148 80132998 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 12014C 8013299C AC400004 */        sw $zero, 4($v0)
  /* 120150 801329A0 AC590000 */        sw $t9, ($v0)
  /* 120154 801329A4 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 120158 801329A8 3C0D0055 */       lui $t5, (0x552078 >> 16) # 5578872
  /* 12015C 801329AC 35AD2078 */       ori $t5, $t5, (0x552078 & 0xFFFF) # 5578872
  /* 120160 801329B0 24490008 */     addiu $t1, $v0, 8
  /* 120164 801329B4 AC690000 */        sw $t1, ($v1) # gpDisplayListHead + 0
  /* 120168 801329B8 354A001C */       ori $t2, $t2, (0xE200001C & 0xFFFF) # 3791650844
  /* 12016C 801329BC AC4A0000 */        sw $t2, ($v0)
  /* 120170 801329C0 AC4D0004 */        sw $t5, 4($v0)
  /* 120174 801329C4 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 120178 801329C8 3C0CE300 */       lui $t4, (0xE3000A01 >> 16) # 3808430593
  /* 12017C 801329CC 358C0A01 */       ori $t4, $t4, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 120180 801329D0 244B0008 */     addiu $t3, $v0, 8
  /* 120184 801329D4 AC6B0000 */        sw $t3, ($v1) # gpDisplayListHead + 0
  /* 120188 801329D8 AC400004 */        sw $zero, 4($v0)
  /* 12018C 801329DC 0C0333AB */       jal func_ovl0_800CCEAC
  /* 120190 801329E0 AC4C0000 */        sw $t4, ($v0)
  /* 120194 801329E4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 120198 801329E8 27BD0080 */     addiu $sp, $sp, 0x80
  /* 12019C 801329EC 03E00008 */        jr $ra
  /* 1201A0 801329F0 00000000 */       nop 

glabel func_ovl60_801329F4
  /* 1201A4 801329F4 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 1201A8 801329F8 AFBF001C */        sw $ra, 0x1c($sp)
  /* 1201AC 801329FC 00002025 */        or $a0, $zero, $zero
  /* 1201B0 80132A00 00002825 */        or $a1, $zero, $zero
  /* 1201B4 80132A04 24060005 */     addiu $a2, $zero, 5
  /* 1201B8 80132A08 0C00265A */       jal omMakeGObjCommon
  /* 1201BC 80132A0C 3C078000 */       lui $a3, 0x8000
  /* 1201C0 80132A10 3C058013 */       lui $a1, %hi(func_ovl60_801327D4)
  /* 1201C4 80132A14 240EFFFF */     addiu $t6, $zero, -1
  /* 1201C8 80132A18 AFAE0010 */        sw $t6, 0x10($sp)
  /* 1201CC 80132A1C 24A527D4 */     addiu $a1, $a1, %lo(func_ovl60_801327D4)
  /* 1201D0 80132A20 00402025 */        or $a0, $v0, $zero
  /* 1201D4 80132A24 24060003 */     addiu $a2, $zero, 3
  /* 1201D8 80132A28 0C00277D */       jal func_80009DF4
  /* 1201DC 80132A2C 3C078000 */       lui $a3, 0x8000
  /* 1201E0 80132A30 8FBF001C */        lw $ra, 0x1c($sp)
  /* 1201E4 80132A34 27BD0020 */     addiu $sp, $sp, 0x20
  /* 1201E8 80132A38 03E00008 */        jr $ra
  /* 1201EC 80132A3C 00000000 */       nop 

glabel func_ovl60_80132A40
  /* 1201F0 80132A40 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 1201F4 80132A44 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 1201F8 80132A48 AFBF003C */        sw $ra, 0x3c($sp)
  /* 1201FC 80132A4C 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 120200 80132A50 240F0014 */     addiu $t7, $zero, 0x14
  /* 120204 80132A54 24180000 */     addiu $t8, $zero, 0
  /* 120208 80132A58 24190008 */     addiu $t9, $zero, 8
  /* 12020C 80132A5C 2408FFFF */     addiu $t0, $zero, -1
  /* 120210 80132A60 24090001 */     addiu $t1, $zero, 1
  /* 120214 80132A64 240A0001 */     addiu $t2, $zero, 1
  /* 120218 80132A68 AFAA0030 */        sw $t2, 0x30($sp)
  /* 12021C 80132A6C AFA90028 */        sw $t1, 0x28($sp)
  /* 120220 80132A70 AFA80020 */        sw $t0, 0x20($sp)
  /* 120224 80132A74 AFB9001C */        sw $t9, 0x1c($sp)
  /* 120228 80132A78 AFB80018 */        sw $t8, 0x18($sp)
  /* 12022C 80132A7C AFAF0014 */        sw $t7, 0x14($sp)
  /* 120230 80132A80 AFAE0010 */        sw $t6, 0x10($sp)
  /* 120234 80132A84 AFA00024 */        sw $zero, 0x24($sp)
  /* 120238 80132A88 AFA0002C */        sw $zero, 0x2c($sp)
  /* 12023C 80132A8C AFA00034 */        sw $zero, 0x34($sp)
  /* 120240 80132A90 24040001 */     addiu $a0, $zero, 1
  /* 120244 80132A94 00002825 */        or $a1, $zero, $zero
  /* 120248 80132A98 24060001 */     addiu $a2, $zero, 1
  /* 12024C 80132A9C 0C002E4F */       jal func_8000B93C
  /* 120250 80132AA0 3C078000 */       lui $a3, 0x8000
  /* 120254 80132AA4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 120258 80132AA8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 12025C 80132AAC 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 120260 80132AB0 8C430074 */        lw $v1, 0x74($v0)
  /* 120264 80132AB4 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 120268 80132AB8 44050000 */      mfc1 $a1, $f0
  /* 12026C 80132ABC 44060000 */      mfc1 $a2, $f0
  /* 120270 80132AC0 3C07439B */       lui $a3, 0x439b
  /* 120274 80132AC4 24640008 */     addiu $a0, $v1, 8
  /* 120278 80132AC8 0C001C20 */       jal func_80007080
  /* 12027C 80132ACC E7A40010 */      swc1 $f4, 0x10($sp)
  /* 120280 80132AD0 8FBF003C */        lw $ra, 0x3c($sp)
  /* 120284 80132AD4 27BD0040 */     addiu $sp, $sp, 0x40
  /* 120288 80132AD8 03E00008 */        jr $ra
  /* 12028C 80132ADC 00000000 */       nop 

glabel func_ovl60_80132AE0
  /* 120290 80132AE0 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 120294 80132AE4 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 120298 80132AE8 AFBF003C */        sw $ra, 0x3c($sp)
  /* 12029C 80132AEC 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 1202A0 80132AF0 240F000A */     addiu $t7, $zero, 0xa
  /* 1202A4 80132AF4 24180000 */     addiu $t8, $zero, 0
  /* 1202A8 80132AF8 24190010 */     addiu $t9, $zero, 0x10
  /* 1202AC 80132AFC 2408FFFF */     addiu $t0, $zero, -1
  /* 1202B0 80132B00 24090001 */     addiu $t1, $zero, 1
  /* 1202B4 80132B04 240A0001 */     addiu $t2, $zero, 1
  /* 1202B8 80132B08 AFAA0030 */        sw $t2, 0x30($sp)
  /* 1202BC 80132B0C AFA90028 */        sw $t1, 0x28($sp)
  /* 1202C0 80132B10 AFA80020 */        sw $t0, 0x20($sp)
  /* 1202C4 80132B14 AFB9001C */        sw $t9, 0x1c($sp)
  /* 1202C8 80132B18 AFB80018 */        sw $t8, 0x18($sp)
  /* 1202CC 80132B1C AFAF0014 */        sw $t7, 0x14($sp)
  /* 1202D0 80132B20 AFAE0010 */        sw $t6, 0x10($sp)
  /* 1202D4 80132B24 AFA00024 */        sw $zero, 0x24($sp)
  /* 1202D8 80132B28 AFA0002C */        sw $zero, 0x2c($sp)
  /* 1202DC 80132B2C AFA00034 */        sw $zero, 0x34($sp)
  /* 1202E0 80132B30 24040001 */     addiu $a0, $zero, 1
  /* 1202E4 80132B34 00002825 */        or $a1, $zero, $zero
  /* 1202E8 80132B38 24060001 */     addiu $a2, $zero, 1
  /* 1202EC 80132B3C 0C002E4F */       jal func_8000B93C
  /* 1202F0 80132B40 3C078000 */       lui $a3, 0x8000
  /* 1202F4 80132B44 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 1202F8 80132B48 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 1202FC 80132B4C 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 120300 80132B50 8C430074 */        lw $v1, 0x74($v0)
  /* 120304 80132B54 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 120308 80132B58 44050000 */      mfc1 $a1, $f0
  /* 12030C 80132B5C 44060000 */      mfc1 $a2, $f0
  /* 120310 80132B60 3C07439B */       lui $a3, 0x439b
  /* 120314 80132B64 24640008 */     addiu $a0, $v1, 8
  /* 120318 80132B68 0C001C20 */       jal func_80007080
  /* 12031C 80132B6C E7A40010 */      swc1 $f4, 0x10($sp)
  /* 120320 80132B70 8FBF003C */        lw $ra, 0x3c($sp)
  /* 120324 80132B74 27BD0040 */     addiu $sp, $sp, 0x40
  /* 120328 80132B78 03E00008 */        jr $ra
  /* 12032C 80132B7C 00000000 */       nop 

glabel func_ovl60_80132B80
  /* 120330 80132B80 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 120334 80132B84 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 120338 80132B88 AFBF003C */        sw $ra, 0x3c($sp)
  /* 12033C 80132B8C 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 120340 80132B90 240F0028 */     addiu $t7, $zero, 0x28
  /* 120344 80132B94 24180000 */     addiu $t8, $zero, 0
  /* 120348 80132B98 24190004 */     addiu $t9, $zero, 4
  /* 12034C 80132B9C 2408FFFF */     addiu $t0, $zero, -1
  /* 120350 80132BA0 24090001 */     addiu $t1, $zero, 1
  /* 120354 80132BA4 240A0001 */     addiu $t2, $zero, 1
  /* 120358 80132BA8 AFAA0030 */        sw $t2, 0x30($sp)
  /* 12035C 80132BAC AFA90028 */        sw $t1, 0x28($sp)
  /* 120360 80132BB0 AFA80020 */        sw $t0, 0x20($sp)
  /* 120364 80132BB4 AFB9001C */        sw $t9, 0x1c($sp)
  /* 120368 80132BB8 AFB80018 */        sw $t8, 0x18($sp)
  /* 12036C 80132BBC AFAF0014 */        sw $t7, 0x14($sp)
  /* 120370 80132BC0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 120374 80132BC4 AFA00024 */        sw $zero, 0x24($sp)
  /* 120378 80132BC8 AFA0002C */        sw $zero, 0x2c($sp)
  /* 12037C 80132BCC AFA00034 */        sw $zero, 0x34($sp)
  /* 120380 80132BD0 24040001 */     addiu $a0, $zero, 1
  /* 120384 80132BD4 00002825 */        or $a1, $zero, $zero
  /* 120388 80132BD8 24060001 */     addiu $a2, $zero, 1
  /* 12038C 80132BDC 0C002E4F */       jal func_8000B93C
  /* 120390 80132BE0 3C078000 */       lui $a3, 0x8000
  /* 120394 80132BE4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 120398 80132BE8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 12039C 80132BEC 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 1203A0 80132BF0 8C430074 */        lw $v1, 0x74($v0)
  /* 1203A4 80132BF4 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 1203A8 80132BF8 44050000 */      mfc1 $a1, $f0
  /* 1203AC 80132BFC 44060000 */      mfc1 $a2, $f0
  /* 1203B0 80132C00 3C07439B */       lui $a3, 0x439b
  /* 1203B4 80132C04 24640008 */     addiu $a0, $v1, 8
  /* 1203B8 80132C08 0C001C20 */       jal func_80007080
  /* 1203BC 80132C0C E7A40010 */      swc1 $f4, 0x10($sp)
  /* 1203C0 80132C10 8FBF003C */        lw $ra, 0x3c($sp)
  /* 1203C4 80132C14 27BD0040 */     addiu $sp, $sp, 0x40
  /* 1203C8 80132C18 03E00008 */        jr $ra
  /* 1203CC 80132C1C 00000000 */       nop 

glabel func_ovl60_80132C20
  /* 1203D0 80132C20 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 1203D4 80132C24 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 1203D8 80132C28 AFBF003C */        sw $ra, 0x3c($sp)
  /* 1203DC 80132C2C 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 1203E0 80132C30 240F003C */     addiu $t7, $zero, 0x3c
  /* 1203E4 80132C34 24180000 */     addiu $t8, $zero, 0
  /* 1203E8 80132C38 24190002 */     addiu $t9, $zero, 2
  /* 1203EC 80132C3C 2408FFFF */     addiu $t0, $zero, -1
  /* 1203F0 80132C40 24090001 */     addiu $t1, $zero, 1
  /* 1203F4 80132C44 240A0001 */     addiu $t2, $zero, 1
  /* 1203F8 80132C48 AFAA0030 */        sw $t2, 0x30($sp)
  /* 1203FC 80132C4C AFA90028 */        sw $t1, 0x28($sp)
  /* 120400 80132C50 AFA80020 */        sw $t0, 0x20($sp)
  /* 120404 80132C54 AFB9001C */        sw $t9, 0x1c($sp)
  /* 120408 80132C58 AFB80018 */        sw $t8, 0x18($sp)
  /* 12040C 80132C5C AFAF0014 */        sw $t7, 0x14($sp)
  /* 120410 80132C60 AFAE0010 */        sw $t6, 0x10($sp)
  /* 120414 80132C64 AFA00024 */        sw $zero, 0x24($sp)
  /* 120418 80132C68 AFA0002C */        sw $zero, 0x2c($sp)
  /* 12041C 80132C6C AFA00034 */        sw $zero, 0x34($sp)
  /* 120420 80132C70 24040001 */     addiu $a0, $zero, 1
  /* 120424 80132C74 00002825 */        or $a1, $zero, $zero
  /* 120428 80132C78 24060001 */     addiu $a2, $zero, 1
  /* 12042C 80132C7C 0C002E4F */       jal func_8000B93C
  /* 120430 80132C80 3C078000 */       lui $a3, 0x8000
  /* 120434 80132C84 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 120438 80132C88 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 12043C 80132C8C 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 120440 80132C90 8C430074 */        lw $v1, 0x74($v0)
  /* 120444 80132C94 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 120448 80132C98 44050000 */      mfc1 $a1, $f0
  /* 12044C 80132C9C 44060000 */      mfc1 $a2, $f0
  /* 120450 80132CA0 3C07439B */       lui $a3, 0x439b
  /* 120454 80132CA4 24640008 */     addiu $a0, $v1, 8
  /* 120458 80132CA8 0C001C20 */       jal func_80007080
  /* 12045C 80132CAC E7A40010 */      swc1 $f4, 0x10($sp)
  /* 120460 80132CB0 8FBF003C */        lw $ra, 0x3c($sp)
  /* 120464 80132CB4 27BD0040 */     addiu $sp, $sp, 0x40
  /* 120468 80132CB8 03E00008 */        jr $ra
  /* 12046C 80132CBC 00000000 */       nop 

glabel func_ovl60_80132CC0
  /* 120470 80132CC0 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 120474 80132CC4 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 120478 80132CC8 AFBF003C */        sw $ra, 0x3c($sp)
  /* 12047C 80132CCC 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 120480 80132CD0 240F0050 */     addiu $t7, $zero, 0x50
  /* 120484 80132CD4 24180000 */     addiu $t8, $zero, 0
  /* 120488 80132CD8 24190001 */     addiu $t9, $zero, 1
  /* 12048C 80132CDC 2408FFFF */     addiu $t0, $zero, -1
  /* 120490 80132CE0 24090001 */     addiu $t1, $zero, 1
  /* 120494 80132CE4 240A0001 */     addiu $t2, $zero, 1
  /* 120498 80132CE8 AFAA0030 */        sw $t2, 0x30($sp)
  /* 12049C 80132CEC AFA90028 */        sw $t1, 0x28($sp)
  /* 1204A0 80132CF0 AFA80020 */        sw $t0, 0x20($sp)
  /* 1204A4 80132CF4 AFB9001C */        sw $t9, 0x1c($sp)
  /* 1204A8 80132CF8 AFB80018 */        sw $t8, 0x18($sp)
  /* 1204AC 80132CFC AFAF0014 */        sw $t7, 0x14($sp)
  /* 1204B0 80132D00 AFAE0010 */        sw $t6, 0x10($sp)
  /* 1204B4 80132D04 AFA00024 */        sw $zero, 0x24($sp)
  /* 1204B8 80132D08 AFA0002C */        sw $zero, 0x2c($sp)
  /* 1204BC 80132D0C AFA00034 */        sw $zero, 0x34($sp)
  /* 1204C0 80132D10 24040001 */     addiu $a0, $zero, 1
  /* 1204C4 80132D14 00002825 */        or $a1, $zero, $zero
  /* 1204C8 80132D18 24060001 */     addiu $a2, $zero, 1
  /* 1204CC 80132D1C 0C002E4F */       jal func_8000B93C
  /* 1204D0 80132D20 3C078000 */       lui $a3, 0x8000
  /* 1204D4 80132D24 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 1204D8 80132D28 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 1204DC 80132D2C 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 1204E0 80132D30 8C430074 */        lw $v1, 0x74($v0)
  /* 1204E4 80132D34 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 1204E8 80132D38 44050000 */      mfc1 $a1, $f0
  /* 1204EC 80132D3C 44060000 */      mfc1 $a2, $f0
  /* 1204F0 80132D40 3C07439B */       lui $a3, 0x439b
  /* 1204F4 80132D44 24640008 */     addiu $a0, $v1, 8
  /* 1204F8 80132D48 0C001C20 */       jal func_80007080
  /* 1204FC 80132D4C E7A40010 */      swc1 $f4, 0x10($sp)
  /* 120500 80132D50 8FBF003C */        lw $ra, 0x3c($sp)
  /* 120504 80132D54 27BD0040 */     addiu $sp, $sp, 0x40
  /* 120508 80132D58 03E00008 */        jr $ra
  /* 12050C 80132D5C 00000000 */       nop 

glabel func_ovl60_80132D60
  /* 120510 80132D60 3C02800A */       lui $v0, %hi((gSceneData + 0x1))
  /* 120514 80132D64 90424AD1 */       lbu $v0, %lo((gSceneData + 0x1))($v0)
  /* 120518 80132D68 2401000F */     addiu $at, $zero, 0xf
  /* 12051C 80132D6C 3C0F8004 */       lui $t7, %hi(D_8003CB24)
  /* 120520 80132D70 10410008 */       beq $v0, $at, .L80132D94
  /* 120524 80132D74 3C18800A */       lui $t8, %hi((gSaveData + 0x450))
  /* 120528 80132D78 2401002F */     addiu $at, $zero, 0x2f
  /* 12052C 80132D7C 10410009 */       beq $v0, $at, .L80132DA4
  /* 120530 80132D80 240E0002 */     addiu $t6, $zero, 2
  /* 120534 80132D84 3C018013 */       lui $at, %hi(D_ovl60_801337B8)
  /* 120538 80132D88 AC2037B8 */        sw $zero, %lo(D_ovl60_801337B8)($at)
  /* 12053C 80132D8C 10000008 */         b .L80132DB0
  /* 120540 80132D90 24020001 */     addiu $v0, $zero, 1
  .L80132D94:
  /* 120544 80132D94 24020001 */     addiu $v0, $zero, 1
  /* 120548 80132D98 3C018013 */       lui $at, %hi(D_ovl60_801337B8)
  /* 12054C 80132D9C 10000004 */         b .L80132DB0
  /* 120550 80132DA0 AC2237B8 */        sw $v0, %lo(D_ovl60_801337B8)($at)
  .L80132DA4:
  /* 120554 80132DA4 3C018013 */       lui $at, %hi(D_ovl60_801337B8)
  /* 120558 80132DA8 AC2E37B8 */        sw $t6, %lo(D_ovl60_801337B8)($at)
  /* 12055C 80132DAC 24020001 */     addiu $v0, $zero, 1
  .L80132DB0:
  /* 120560 80132DB0 8DEFCB24 */        lw $t7, %lo(D_8003CB24)($t7)
  /* 120564 80132DB4 3C018013 */       lui $at, %hi(D_ovl60_801337E0)
  /* 120568 80132DB8 AC2037E0 */        sw $zero, %lo(D_ovl60_801337E0)($at)
  /* 12056C 80132DBC 144F0004 */       bne $v0, $t7, .L80132DD0
  /* 120570 80132DC0 3C018013 */       lui $at, 0x8013
  /* 120574 80132DC4 3C018013 */       lui $at, %hi(D_ovl60_801337BC)
  /* 120578 80132DC8 10000002 */         b .L80132DD4
  /* 12057C 80132DCC AC2237BC */        sw $v0, %lo(D_ovl60_801337BC)($at)
  .L80132DD0:
  /* 120580 80132DD0 AC2037BC */        sw $zero, %lo(D_ovl60_801337BC)($at)
  .L80132DD4:
  /* 120584 80132DD4 93184930 */       lbu $t8, %lo((gSaveData + 0x450))($t8)
  /* 120588 80132DD8 3C018013 */       lui $at, %hi(D_ovl60_801337C0)
  /* 12058C 80132DDC 3C028013 */       lui $v0, %hi(D_ovl60_801337E4)
  /* 120590 80132DE0 AC3837C0 */        sw $t8, %lo(D_ovl60_801337C0)($at)
  /* 120594 80132DE4 244237E4 */     addiu $v0, $v0, %lo(D_ovl60_801337E4)
  /* 120598 80132DE8 AC400000 */        sw $zero, ($v0) # D_ovl60_801337E4 + 0
  /* 12059C 80132DEC 3C018013 */       lui $at, %hi(D_ovl60_801337D4)
  /* 1205A0 80132DF0 AC2037D4 */        sw $zero, %lo(D_ovl60_801337D4)($at)
  /* 1205A4 80132DF4 3C018013 */       lui $at, %hi(D_ovl60_801337DC)
  /* 1205A8 80132DF8 AC2037DC */        sw $zero, %lo(D_ovl60_801337DC)($at)
  /* 1205AC 80132DFC 8C590000 */        lw $t9, ($v0) # D_ovl60_801337E4 + 0
  /* 1205B0 80132E00 3C018013 */       lui $at, %hi(D_ovl60_801337E8)
  /* 1205B4 80132E04 27284650 */     addiu $t0, $t9, 0x4650
  /* 1205B8 80132E08 03E00008 */        jr $ra
  /* 1205BC 80132E0C AC2837E8 */        sw $t0, %lo(D_ovl60_801337E8)($at)

glabel func_ovl60_80132E10
  /* 1205C0 80132E10 3C0E8013 */       lui $t6, %hi(D_ovl60_801337C0)
  /* 1205C4 80132E14 8DCE37C0 */        lw $t6, %lo(D_ovl60_801337C0)($t6)
  /* 1205C8 80132E18 3C02800A */       lui $v0, %hi(gSaveData)
  /* 1205CC 80132E1C 244244E0 */     addiu $v0, $v0, %lo(gSaveData)
  /* 1205D0 80132E20 3C0F8013 */       lui $t7, %hi(D_ovl60_801337BC)
  /* 1205D4 80132E24 A04E0450 */        sb $t6, 0x450($v0) # gSaveData + 1104
  /* 1205D8 80132E28 8DEF37BC */        lw $t7, %lo(D_ovl60_801337BC)($t7)
  /* 1205DC 80132E2C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1205E0 80132E30 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1205E4 80132E34 0C03517D */       jal lbMemory_SaveData_WriteSRAM
  /* 1205E8 80132E38 A04F0451 */        sb $t7, 0x451($v0) # gSaveData + 1105
  /* 1205EC 80132E3C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1205F0 80132E40 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1205F4 80132E44 03E00008 */        jr $ra
  /* 1205F8 80132E48 00000000 */       nop 

glabel func_ovl60_80132E4C
  /* 1205FC 80132E4C 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 120600 80132E50 3C0F8013 */       lui $t7, %hi(D_ovl60_801336EC)
  /* 120604 80132E54 AFBF0014 */        sw $ra, 0x14($sp)
  /* 120608 80132E58 AFA40038 */        sw $a0, 0x38($sp)
  /* 12060C 80132E5C 25EF36EC */     addiu $t7, $t7, %lo(D_ovl60_801336EC)
  /* 120610 80132E60 8DF90000 */        lw $t9, ($t7) # D_ovl60_801336EC + 0
  /* 120614 80132E64 27AE0024 */     addiu $t6, $sp, 0x24
  /* 120618 80132E68 8DF80004 */        lw $t8, 4($t7) # D_ovl60_801336EC + 4
  /* 12061C 80132E6C ADD90000 */        sw $t9, ($t6)
  /* 120620 80132E70 8DF90008 */        lw $t9, 8($t7) # D_ovl60_801336EC + 8
  /* 120624 80132E74 3C038013 */       lui $v1, %hi(D_ovl60_801337E4)
  /* 120628 80132E78 246337E4 */     addiu $v1, $v1, %lo(D_ovl60_801337E4)
  /* 12062C 80132E7C ADD80004 */        sw $t8, 4($t6)
  /* 120630 80132E80 ADD90008 */        sw $t9, 8($t6)
  /* 120634 80132E84 8C680000 */        lw $t0, ($v1) # D_ovl60_801337E4 + 0
  /* 120638 80132E88 3C0A8013 */       lui $t2, %hi(D_ovl60_801337E8)
  /* 12063C 80132E8C 25090001 */     addiu $t1, $t0, 1
  /* 120640 80132E90 2921000A */      slti $at, $t1, 0xa
  /* 120644 80132E94 14200171 */      bnez $at, .L8013345C
  /* 120648 80132E98 AC690000 */        sw $t1, ($v1) # D_ovl60_801337E4 + 0
  /* 12064C 80132E9C 8D4A37E8 */        lw $t2, %lo(D_ovl60_801337E8)($t2)
  /* 120650 80132EA0 3C02800A */       lui $v0, %hi(gSceneData)
  /* 120654 80132EA4 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 120658 80132EA8 15490009 */       bne $t2, $t1, .L80132ED0
  /* 12065C 80132EAC 240C0001 */     addiu $t4, $zero, 1
  /* 120660 80132EB0 904B0000 */       lbu $t3, ($v0) # gSceneData + 0
  /* 120664 80132EB4 A04C0000 */        sb $t4, ($v0) # gSceneData + 0
  /* 120668 80132EB8 0C04CB84 */       jal func_ovl60_80132E10
  /* 12066C 80132EBC A04B0001 */        sb $t3, 1($v0) # gSceneData + 1
  /* 120670 80132EC0 0C00171D */       jal func_80005C74
  /* 120674 80132EC4 00000000 */       nop 
  /* 120678 80132EC8 10000165 */         b .L80133460
  /* 12067C 80132ECC 8FBF0014 */        lw $ra, 0x14($sp)
  .L80132ED0:
  /* 120680 80132ED0 0C0E42DF */       jal func_ovl1_80390B7C
  /* 120684 80132ED4 00000000 */       nop 
  /* 120688 80132ED8 3C038013 */       lui $v1, %hi(D_ovl60_801337E4)
  /* 12068C 80132EDC 14400005 */      bnez $v0, .L80132EF4
  /* 120690 80132EE0 246337E4 */     addiu $v1, $v1, %lo(D_ovl60_801337E4)
  /* 120694 80132EE4 8C6D0000 */        lw $t5, ($v1) # D_ovl60_801337E4 + 0
  /* 120698 80132EE8 3C018013 */       lui $at, %hi(D_ovl60_801337E8)
  /* 12069C 80132EEC 25AE4650 */     addiu $t6, $t5, 0x4650
  /* 1206A0 80132EF0 AC2E37E8 */        sw $t6, %lo(D_ovl60_801337E8)($at)
  .L80132EF4:
  /* 1206A4 80132EF4 3C0F8013 */       lui $t7, %hi(D_ovl60_801337DC)
  /* 1206A8 80132EF8 8DEF37DC */        lw $t7, %lo(D_ovl60_801337DC)($t7)
  /* 1206AC 80132EFC 11E00003 */      beqz $t7, .L80132F0C
  /* 1206B0 80132F00 00000000 */       nop 
  /* 1206B4 80132F04 0C00171D */       jal func_80005C74
  /* 1206B8 80132F08 00000000 */       nop 
  .L80132F0C:
  /* 1206BC 80132F0C 3C038013 */       lui $v1, %hi(D_ovl60_801337E0)
  /* 1206C0 80132F10 246337E0 */     addiu $v1, $v1, %lo(D_ovl60_801337E0)
  /* 1206C4 80132F14 8C620000 */        lw $v0, ($v1) # D_ovl60_801337E0 + 0
  /* 1206C8 80132F18 2404FFEC */     addiu $a0, $zero, -0x14
  /* 1206CC 80132F1C 10400002 */      beqz $v0, .L80132F28
  /* 1206D0 80132F20 2458FFFF */     addiu $t8, $v0, -1
  /* 1206D4 80132F24 AC780000 */        sw $t8, ($v1) # D_ovl60_801337E0 + 0
  .L80132F28:
  /* 1206D8 80132F28 0C0E4281 */       jal func_ovl1_80390A04
  /* 1206DC 80132F2C 24050014 */     addiu $a1, $zero, 0x14
  /* 1206E0 80132F30 1040000E */      beqz $v0, .L80132F6C
  /* 1206E4 80132F34 2404FFEC */     addiu $a0, $zero, -0x14
  /* 1206E8 80132F38 0C0E42B0 */       jal func_ovl1_80390AC0
  /* 1206EC 80132F3C 24050014 */     addiu $a1, $zero, 0x14
  /* 1206F0 80132F40 1040000A */      beqz $v0, .L80132F6C
  /* 1206F4 80132F44 00000000 */       nop 
  /* 1206F8 80132F48 0C0E4201 */       jal func_ovl1_80390804
  /* 1206FC 80132F4C 24040808 */     addiu $a0, $zero, 0x808
  /* 120700 80132F50 14400006 */      bnez $v0, .L80132F6C
  /* 120704 80132F54 00000000 */       nop 
  /* 120708 80132F58 0C0E4201 */       jal func_ovl1_80390804
  /* 12070C 80132F5C 24040404 */     addiu $a0, $zero, 0x404
  /* 120710 80132F60 14400002 */      bnez $v0, .L80132F6C
  /* 120714 80132F64 3C018013 */       lui $at, %hi(D_ovl60_801337E0)
  /* 120718 80132F68 AC2037E0 */        sw $zero, %lo(D_ovl60_801337E0)($at)
  .L80132F6C:
  /* 12071C 80132F6C 0C0E41DB */       jal func_ovl1_8039076C
  /* 120720 80132F70 34049000 */       ori $a0, $zero, 0x9000
  /* 120724 80132F74 10400035 */      beqz $v0, .L8013304C
  /* 120728 80132F78 3C028013 */       lui $v0, %hi(D_ovl60_801337B8)
  /* 12072C 80132F7C 8C4237B8 */        lw $v0, %lo(D_ovl60_801337B8)($v0)
  /* 120730 80132F80 24010001 */     addiu $at, $zero, 1
  /* 120734 80132F84 10410005 */       beq $v0, $at, .L80132F9C
  /* 120738 80132F88 24010002 */     addiu $at, $zero, 2
  /* 12073C 80132F8C 10410019 */       beq $v0, $at, .L80132FF4
  /* 120740 80132F90 00000000 */       nop 
  /* 120744 80132F94 1000002D */         b .L8013304C
  /* 120748 80132F98 00000000 */       nop 
  .L80132F9C:
  /* 12074C 80132F9C 0C04CB84 */       jal func_ovl60_80132E10
  /* 120750 80132FA0 00000000 */       nop 
  /* 120754 80132FA4 0C009A70 */       jal func_800269C0
  /* 120758 80132FA8 2404009E */     addiu $a0, $zero, 0x9e
  /* 12075C 80132FAC 3C198013 */       lui $t9, %hi(D_ovl60_801337B8)
  /* 120760 80132FB0 8F3937B8 */        lw $t9, %lo(D_ovl60_801337B8)($t9)
  /* 120764 80132FB4 24050002 */     addiu $a1, $zero, 2
  /* 120768 80132FB8 00194080 */       sll $t0, $t9, 2
  /* 12076C 80132FBC 03A84821 */      addu $t1, $sp, $t0
  /* 120770 80132FC0 8D290024 */        lw $t1, 0x24($t1)
  /* 120774 80132FC4 0C04C6C9 */       jal func_ovl60_80131B24
  /* 120778 80132FC8 8D240000 */        lw $a0, ($t1)
  /* 12077C 80132FCC 3C02800A */       lui $v0, %hi(gSceneData)
  /* 120780 80132FD0 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 120784 80132FD4 904A0000 */       lbu $t2, ($v0) # gSceneData + 0
  /* 120788 80132FD8 240B000F */     addiu $t3, $zero, 0xf
  /* 12078C 80132FDC A04B0000 */        sb $t3, ($v0) # gSceneData + 0
  /* 120790 80132FE0 240C0001 */     addiu $t4, $zero, 1
  /* 120794 80132FE4 3C018013 */       lui $at, %hi(D_ovl60_801337DC)
  /* 120798 80132FE8 A04A0001 */        sb $t2, 1($v0) # gSceneData + 1
  /* 12079C 80132FEC 1000011B */         b .L8013345C
  /* 1207A0 80132FF0 AC2C37DC */        sw $t4, %lo(D_ovl60_801337DC)($at)
  .L80132FF4:
  /* 1207A4 80132FF4 0C04CB84 */       jal func_ovl60_80132E10
  /* 1207A8 80132FF8 00000000 */       nop 
  /* 1207AC 80132FFC 0C009A70 */       jal func_800269C0
  /* 1207B0 80133000 2404009E */     addiu $a0, $zero, 0x9e
  /* 1207B4 80133004 3C0D8013 */       lui $t5, %hi(D_ovl60_801337B8)
  /* 1207B8 80133008 8DAD37B8 */        lw $t5, %lo(D_ovl60_801337B8)($t5)
  /* 1207BC 8013300C 24050002 */     addiu $a1, $zero, 2
  /* 1207C0 80133010 000D7080 */       sll $t6, $t5, 2
  /* 1207C4 80133014 03AE7821 */      addu $t7, $sp, $t6
  /* 1207C8 80133018 8DEF0024 */        lw $t7, 0x24($t7)
  /* 1207CC 8013301C 0C04C6C9 */       jal func_ovl60_80131B24
  /* 1207D0 80133020 8DE40000 */        lw $a0, ($t7)
  /* 1207D4 80133024 3C02800A */       lui $v0, %hi(gSceneData)
  /* 1207D8 80133028 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 1207DC 8013302C 90580000 */       lbu $t8, ($v0) # gSceneData + 0
  /* 1207E0 80133030 2419002F */     addiu $t9, $zero, 0x2f
  /* 1207E4 80133034 A0590000 */        sb $t9, ($v0) # gSceneData + 0
  /* 1207E8 80133038 24080001 */     addiu $t0, $zero, 1
  /* 1207EC 8013303C 3C018013 */       lui $at, %hi(D_ovl60_801337DC)
  /* 1207F0 80133040 A0580001 */        sb $t8, 1($v0) # gSceneData + 1
  /* 1207F4 80133044 10000105 */         b .L8013345C
  /* 1207F8 80133048 AC2837DC */        sw $t0, %lo(D_ovl60_801337DC)($at)
  .L8013304C:
  /* 1207FC 8013304C 0C0E41DB */       jal func_ovl1_8039076C
  /* 120800 80133050 24044000 */     addiu $a0, $zero, 0x4000
  /* 120804 80133054 1040000A */      beqz $v0, .L80133080
  /* 120808 80133058 00000000 */       nop 
  /* 12080C 8013305C 0C04CB84 */       jal func_ovl60_80132E10
  /* 120810 80133060 00000000 */       nop 
  /* 120814 80133064 3C02800A */       lui $v0, %hi(gSceneData)
  /* 120818 80133068 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 12081C 8013306C 90490000 */       lbu $t1, ($v0) # gSceneData + 0
  /* 120820 80133070 240A0007 */     addiu $t2, $zero, 7
  /* 120824 80133074 A04A0000 */        sb $t2, ($v0) # gSceneData + 0
  /* 120828 80133078 0C00171D */       jal func_80005C74
  /* 12082C 8013307C A0490001 */        sb $t1, 1($v0) # gSceneData + 1
  .L80133080:
  /* 120830 80133080 3C028013 */       lui $v0, %hi(D_ovl60_801337E0)
  /* 120834 80133084 8C4237E0 */        lw $v0, %lo(D_ovl60_801337E0)($v0)
  /* 120838 80133088 14400007 */      bnez $v0, .L801330A8
  /* 12083C 8013308C 00000000 */       nop 
  /* 120840 80133090 0C0E4201 */       jal func_ovl1_80390804
  /* 120844 80133094 24040808 */     addiu $a0, $zero, 0x808
  /* 120848 80133098 14400009 */      bnez $v0, .L801330C0
  /* 12084C 8013309C AFA20020 */        sw $v0, 0x20($sp)
  /* 120850 801330A0 3C028013 */       lui $v0, %hi(D_ovl60_801337E0)
  /* 120854 801330A4 8C4237E0 */        lw $v0, %lo(D_ovl60_801337E0)($v0)
  .L801330A8:
  /* 120858 801330A8 14400032 */      bnez $v0, .L80133174
  /* 12085C 801330AC 24040014 */     addiu $a0, $zero, 0x14
  /* 120860 801330B0 0C0E4254 */       jal func_ovl1_80390950
  /* 120864 801330B4 24050001 */     addiu $a1, $zero, 1
  /* 120868 801330B8 1040002E */      beqz $v0, .L80133174
  /* 12086C 801330BC AFA20030 */        sw $v0, 0x30($sp)
  .L801330C0:
  /* 120870 801330C0 0C009A70 */       jal func_800269C0
  /* 120874 801330C4 240400A4 */     addiu $a0, $zero, 0xa4
  /* 120878 801330C8 8FAB0020 */        lw $t3, 0x20($sp)
  /* 12087C 801330CC 8FAD0030 */        lw $t5, 0x30($sp)
  /* 120880 801330D0 240E00A0 */     addiu $t6, $zero, 0xa0
  /* 120884 801330D4 11600005 */      beqz $t3, .L801330EC
  /* 120888 801330D8 3C198013 */       lui $t9, %hi(D_ovl60_801337B8)
  /* 12088C 801330DC 240C000C */     addiu $t4, $zero, 0xc
  /* 120890 801330E0 3C018013 */       lui $at, %hi(D_ovl60_801337E0)
  /* 120894 801330E4 10000007 */         b .L80133104
  /* 120898 801330E8 AC2C37E0 */        sw $t4, %lo(D_ovl60_801337E0)($at)
  .L801330EC:
  /* 12089C 801330EC 01CD7823 */      subu $t7, $t6, $t5
  /* 1208A0 801330F0 24010007 */     addiu $at, $zero, 7
  /* 1208A4 801330F4 01E1001A */       div $zero, $t7, $at
  /* 1208A8 801330F8 0000C012 */      mflo $t8
  /* 1208AC 801330FC 3C018013 */       lui $at, %hi(D_ovl60_801337E0)
  /* 1208B0 80133100 AC3837E0 */        sw $t8, %lo(D_ovl60_801337E0)($at)
  .L80133104:
  /* 1208B4 80133104 8F3937B8 */        lw $t9, %lo(D_ovl60_801337B8)($t9)
  /* 1208B8 80133108 00002825 */        or $a1, $zero, $zero
  /* 1208BC 8013310C 00194080 */       sll $t0, $t9, 2
  /* 1208C0 80133110 03A84821 */      addu $t1, $sp, $t0
  /* 1208C4 80133114 8D290024 */        lw $t1, 0x24($t1)
  /* 1208C8 80133118 0C04C6C9 */       jal func_ovl60_80131B24
  /* 1208CC 8013311C 8D240000 */        lw $a0, ($t1)
  /* 1208D0 80133120 3C038013 */       lui $v1, %hi(D_ovl60_801337B8)
  /* 1208D4 80133124 246337B8 */     addiu $v1, $v1, %lo(D_ovl60_801337B8)
  /* 1208D8 80133128 8C620000 */        lw $v0, ($v1) # D_ovl60_801337B8 + 0
  /* 1208DC 8013312C 240A0002 */     addiu $t2, $zero, 2
  /* 1208E0 80133130 14400003 */      bnez $v0, .L80133140
  /* 1208E4 80133134 244BFFFF */     addiu $t3, $v0, -1
  /* 1208E8 80133138 10000002 */         b .L80133144
  /* 1208EC 8013313C AC6A0000 */        sw $t2, ($v1) # D_ovl60_801337B8 + 0
  .L80133140:
  /* 1208F0 80133140 AC6B0000 */        sw $t3, ($v1) # D_ovl60_801337B8 + 0
  .L80133144:
  /* 1208F4 80133144 8C6C0000 */        lw $t4, ($v1) # D_ovl60_801337B8 + 0
  /* 1208F8 80133148 24050001 */     addiu $a1, $zero, 1
  /* 1208FC 8013314C 000C7080 */       sll $t6, $t4, 2
  /* 120900 80133150 03AE6821 */      addu $t5, $sp, $t6
  /* 120904 80133154 8DAD0024 */        lw $t5, 0x24($t5)
  /* 120908 80133158 0C04C6C9 */       jal func_ovl60_80131B24
  /* 12090C 8013315C 8DA40000 */        lw $a0, ($t5)
  /* 120910 80133160 3C048013 */       lui $a0, %hi(D_ovl60_801337D0)
  /* 120914 80133164 0C0026A1 */       jal omEjectGObjCommon
  /* 120918 80133168 8C8437D0 */        lw $a0, %lo(D_ovl60_801337D0)($a0)
  /* 12091C 8013316C 0C04C86A */       jal func_ovl60_801321A8
  /* 120920 80133170 00000000 */       nop 
  .L80133174:
  /* 120924 80133174 3C028013 */       lui $v0, %hi(D_ovl60_801337E0)
  /* 120928 80133178 8C4237E0 */        lw $v0, %lo(D_ovl60_801337E0)($v0)
  /* 12092C 8013317C 14400007 */      bnez $v0, .L8013319C
  /* 120930 80133180 00000000 */       nop 
  /* 120934 80133184 0C0E4201 */       jal func_ovl1_80390804
  /* 120938 80133188 24040404 */     addiu $a0, $zero, 0x404
  /* 12093C 8013318C 14400009 */      bnez $v0, .L801331B4
  /* 120940 80133190 AFA20020 */        sw $v0, 0x20($sp)
  /* 120944 80133194 3C028013 */       lui $v0, %hi(D_ovl60_801337E0)
  /* 120948 80133198 8C4237E0 */        lw $v0, %lo(D_ovl60_801337E0)($v0)
  .L8013319C:
  /* 12094C 8013319C 14400039 */      bnez $v0, .L80133284
  /* 120950 801331A0 2404FFEC */     addiu $a0, $zero, -0x14
  /* 120954 801331A4 0C0E4254 */       jal func_ovl1_80390950
  /* 120958 801331A8 00002825 */        or $a1, $zero, $zero
  /* 12095C 801331AC 10400035 */      beqz $v0, .L80133284
  /* 120960 801331B0 AFA20030 */        sw $v0, 0x30($sp)
  .L801331B4:
  /* 120964 801331B4 0C009A70 */       jal func_800269C0
  /* 120968 801331B8 240400A4 */     addiu $a0, $zero, 0xa4
  /* 12096C 801331BC 8FAF0020 */        lw $t7, 0x20($sp)
  /* 120970 801331C0 3C038013 */       lui $v1, %hi(D_ovl60_801337E0)
  /* 120974 801331C4 246337E0 */     addiu $v1, $v1, %lo(D_ovl60_801337E0)
  /* 120978 801331C8 11E00003 */      beqz $t7, .L801331D8
  /* 12097C 801331CC 2418000C */     addiu $t8, $zero, 0xc
  /* 120980 801331D0 1000000A */         b .L801331FC
  /* 120984 801331D4 AC780000 */        sw $t8, ($v1) # D_ovl60_801337E0 + 0
  .L801331D8:
  /* 120988 801331D8 8FB90030 */        lw $t9, 0x30($sp)
  /* 12098C 801331DC 24010007 */     addiu $at, $zero, 7
  /* 120990 801331E0 3C038013 */       lui $v1, %hi(D_ovl60_801337E0)
  /* 120994 801331E4 272800A0 */     addiu $t0, $t9, 0xa0
  /* 120998 801331E8 0101001A */       div $zero, $t0, $at
  /* 12099C 801331EC 00004812 */      mflo $t1
  /* 1209A0 801331F0 3C018013 */       lui $at, %hi(D_ovl60_801337E0)
  /* 1209A4 801331F4 AC2937E0 */        sw $t1, %lo(D_ovl60_801337E0)($at)
  /* 1209A8 801331F8 246337E0 */     addiu $v1, $v1, %lo(D_ovl60_801337E0)
  .L801331FC:
  /* 1209AC 801331FC 3C028013 */       lui $v0, %hi(D_ovl60_801337B8)
  /* 1209B0 80133200 8C4237B8 */        lw $v0, %lo(D_ovl60_801337B8)($v0)
  /* 1209B4 80133204 24010001 */     addiu $at, $zero, 1
  /* 1209B8 80133208 14410004 */       bne $v0, $at, .L8013321C
  /* 1209BC 8013320C 00026080 */       sll $t4, $v0, 2
  /* 1209C0 80133210 8C6A0000 */        lw $t2, ($v1) # D_ovl60_801337E0 + 0
  /* 1209C4 80133214 254B0008 */     addiu $t3, $t2, 8
  /* 1209C8 80133218 AC6B0000 */        sw $t3, ($v1) # D_ovl60_801337E0 + 0
  .L8013321C:
  /* 1209CC 8013321C 03AC7021 */      addu $t6, $sp, $t4
  /* 1209D0 80133220 8DCE0024 */        lw $t6, 0x24($t6)
  /* 1209D4 80133224 00002825 */        or $a1, $zero, $zero
  /* 1209D8 80133228 0C04C6C9 */       jal func_ovl60_80131B24
  /* 1209DC 8013322C 8DC40000 */        lw $a0, ($t6)
  /* 1209E0 80133230 3C038013 */       lui $v1, %hi(D_ovl60_801337B8)
  /* 1209E4 80133234 246337B8 */     addiu $v1, $v1, %lo(D_ovl60_801337B8)
  /* 1209E8 80133238 8C620000 */        lw $v0, ($v1) # D_ovl60_801337B8 + 0
  /* 1209EC 8013323C 24010002 */     addiu $at, $zero, 2
  /* 1209F0 80133240 14410003 */       bne $v0, $at, .L80133250
  /* 1209F4 80133244 244D0001 */     addiu $t5, $v0, 1
  /* 1209F8 80133248 10000002 */         b .L80133254
  /* 1209FC 8013324C AC600000 */        sw $zero, ($v1) # D_ovl60_801337B8 + 0
  .L80133250:
  /* 120A00 80133250 AC6D0000 */        sw $t5, ($v1) # D_ovl60_801337B8 + 0
  .L80133254:
  /* 120A04 80133254 8C6F0000 */        lw $t7, ($v1) # D_ovl60_801337B8 + 0
  /* 120A08 80133258 24050001 */     addiu $a1, $zero, 1
  /* 120A0C 8013325C 000FC080 */       sll $t8, $t7, 2
  /* 120A10 80133260 03B8C821 */      addu $t9, $sp, $t8
  /* 120A14 80133264 8F390024 */        lw $t9, 0x24($t9)
  /* 120A18 80133268 0C04C6C9 */       jal func_ovl60_80131B24
  /* 120A1C 8013326C 8F240000 */        lw $a0, ($t9)
  /* 120A20 80133270 3C048013 */       lui $a0, %hi(D_ovl60_801337D0)
  /* 120A24 80133274 0C0026A1 */       jal omEjectGObjCommon
  /* 120A28 80133278 8C8437D0 */        lw $a0, %lo(D_ovl60_801337D0)($a0)
  /* 120A2C 8013327C 0C04C86A */       jal func_ovl60_801321A8
  /* 120A30 80133280 00000000 */       nop 
  .L80133284:
  /* 120A34 80133284 3C088013 */       lui $t0, %hi(D_ovl60_801337B8)
  /* 120A38 80133288 8D0837B8 */        lw $t0, %lo(D_ovl60_801337B8)($t0)
  /* 120A3C 8013328C 55000074 */      bnel $t0, $zero, .L80133460
  /* 120A40 80133290 8FBF0014 */        lw $ra, 0x14($sp)
  /* 120A44 80133294 0C0E41DB */       jal func_ovl1_8039076C
  /* 120A48 80133298 24040222 */     addiu $a0, $zero, 0x222
  /* 120A4C 8013329C 14400009 */      bnez $v0, .L801332C4
  /* 120A50 801332A0 3C098013 */       lui $t1, %hi(D_ovl60_801337E0)
  /* 120A54 801332A4 8D2937E0 */        lw $t1, %lo(D_ovl60_801337E0)($t1)
  /* 120A58 801332A8 2404FFEC */     addiu $a0, $zero, -0x14
  /* 120A5C 801332AC 15200023 */      bnez $t1, .L8013333C
  /* 120A60 801332B0 00000000 */       nop 
  /* 120A64 801332B4 0C0E4227 */       jal func_ovl1_8039089C
  /* 120A68 801332B8 00002825 */        or $a1, $zero, $zero
  /* 120A6C 801332BC 1040001F */      beqz $v0, .L8013333C
  /* 120A70 801332C0 AFA20030 */        sw $v0, 0x30($sp)
  .L801332C4:
  /* 120A74 801332C4 3C0A8013 */       lui $t2, %hi(D_ovl60_801337BC)
  /* 120A78 801332C8 8D4A37BC */        lw $t2, %lo(D_ovl60_801337BC)($t2)
  /* 120A7C 801332CC 8FAB0030 */        lw $t3, 0x30($sp)
  /* 120A80 801332D0 24010007 */     addiu $at, $zero, 7
  /* 120A84 801332D4 15400019 */      bnez $t2, .L8013333C
  /* 120A88 801332D8 256C00A0 */     addiu $t4, $t3, 0xa0
  /* 120A8C 801332DC 0181001A */       div $zero, $t4, $at
  /* 120A90 801332E0 00007012 */      mflo $t6
  /* 120A94 801332E4 AFAE0018 */        sw $t6, 0x18($sp)
  /* 120A98 801332E8 0C009A70 */       jal func_800269C0
  /* 120A9C 801332EC 240400A3 */     addiu $a0, $zero, 0xa3
  /* 120AA0 801332F0 240D0001 */     addiu $t5, $zero, 1
  /* 120AA4 801332F4 3C018013 */       lui $at, %hi(D_ovl60_801337BC)
  /* 120AA8 801332F8 3C048013 */       lui $a0, %hi(D_ovl60_801337C8)
  /* 120AAC 801332FC AC2D37BC */        sw $t5, %lo(D_ovl60_801337BC)($at)
  /* 120AB0 80133300 0C0026A1 */       jal omEjectGObjCommon
  /* 120AB4 80133304 8C8437C8 */        lw $a0, %lo(D_ovl60_801337C8)($a0)
  /* 120AB8 80133308 0C04C766 */       jal func_ovl60_80131D98
  /* 120ABC 8013330C 00000000 */       nop 
  /* 120AC0 80133310 8FAF0018 */        lw $t7, 0x18($sp)
  /* 120AC4 80133314 3C018013 */       lui $at, %hi(D_ovl60_801337E0)
  /* 120AC8 80133318 3C048013 */       lui $a0, %hi(D_ovl60_801337D0)
  /* 120ACC 8013331C 8C8437D0 */        lw $a0, %lo(D_ovl60_801337D0)($a0)
  /* 120AD0 80133320 0C0026A1 */       jal omEjectGObjCommon
  /* 120AD4 80133324 AC2F37E0 */        sw $t7, %lo(D_ovl60_801337E0)($at)
  /* 120AD8 80133328 0C04C86A */       jal func_ovl60_801321A8
  /* 120ADC 8013332C 00000000 */       nop 
  /* 120AE0 80133330 3C048013 */       lui $a0, %hi(D_ovl60_801337BC)
  /* 120AE4 80133334 0C00828D */       jal func_80020A34
  /* 120AE8 80133338 8C8437BC */        lw $a0, %lo(D_ovl60_801337BC)($a0)
  .L8013333C:
  /* 120AEC 8013333C 0C0E41DB */       jal func_ovl1_8039076C
  /* 120AF0 80133340 24040111 */     addiu $a0, $zero, 0x111
  /* 120AF4 80133344 14400009 */      bnez $v0, .L8013336C
  /* 120AF8 80133348 3C188013 */       lui $t8, %hi(D_ovl60_801337E0)
  /* 120AFC 8013334C 8F1837E0 */        lw $t8, %lo(D_ovl60_801337E0)($t8)
  /* 120B00 80133350 24040014 */     addiu $a0, $zero, 0x14
  /* 120B04 80133354 17000024 */      bnez $t8, .L801333E8
  /* 120B08 80133358 00000000 */       nop 
  /* 120B0C 8013335C 0C0E4227 */       jal func_ovl1_8039089C
  /* 120B10 80133360 24050001 */     addiu $a1, $zero, 1
  /* 120B14 80133364 10400020 */      beqz $v0, .L801333E8
  /* 120B18 80133368 AFA20030 */        sw $v0, 0x30($sp)
  .L8013336C:
  /* 120B1C 8013336C 3C198013 */       lui $t9, %hi(D_ovl60_801337BC)
  /* 120B20 80133370 8F3937BC */        lw $t9, %lo(D_ovl60_801337BC)($t9)
  /* 120B24 80133374 24010001 */     addiu $at, $zero, 1
  /* 120B28 80133378 8FA80030 */        lw $t0, 0x30($sp)
  /* 120B2C 8013337C 1721001A */       bne $t9, $at, .L801333E8
  /* 120B30 80133380 240900A0 */     addiu $t1, $zero, 0xa0
  /* 120B34 80133384 01285023 */      subu $t2, $t1, $t0
  /* 120B38 80133388 24010007 */     addiu $at, $zero, 7
  /* 120B3C 8013338C 0141001A */       div $zero, $t2, $at
  /* 120B40 80133390 00005812 */      mflo $t3
  /* 120B44 80133394 AFAB0018 */        sw $t3, 0x18($sp)
  /* 120B48 80133398 0C009A70 */       jal func_800269C0
  /* 120B4C 8013339C 240400A3 */     addiu $a0, $zero, 0xa3
  /* 120B50 801333A0 3C018013 */       lui $at, %hi(D_ovl60_801337BC)
  /* 120B54 801333A4 3C048013 */       lui $a0, %hi(D_ovl60_801337C8)
  /* 120B58 801333A8 AC2037BC */        sw $zero, %lo(D_ovl60_801337BC)($at)
  /* 120B5C 801333AC 0C0026A1 */       jal omEjectGObjCommon
  /* 120B60 801333B0 8C8437C8 */        lw $a0, %lo(D_ovl60_801337C8)($a0)
  /* 120B64 801333B4 0C04C766 */       jal func_ovl60_80131D98
  /* 120B68 801333B8 00000000 */       nop 
  /* 120B6C 801333BC 8FAC0018 */        lw $t4, 0x18($sp)
  /* 120B70 801333C0 3C018013 */       lui $at, %hi(D_ovl60_801337E0)
  /* 120B74 801333C4 3C048013 */       lui $a0, %hi(D_ovl60_801337D0)
  /* 120B78 801333C8 8C8437D0 */        lw $a0, %lo(D_ovl60_801337D0)($a0)
  /* 120B7C 801333CC 0C0026A1 */       jal omEjectGObjCommon
  /* 120B80 801333D0 AC2C37E0 */        sw $t4, %lo(D_ovl60_801337E0)($at)
  /* 120B84 801333D4 0C04C86A */       jal func_ovl60_801321A8
  /* 120B88 801333D8 00000000 */       nop 
  /* 120B8C 801333DC 3C048013 */       lui $a0, %hi(D_ovl60_801337BC)
  /* 120B90 801333E0 0C00828D */       jal func_80020A34
  /* 120B94 801333E4 8C8437BC */        lw $a0, %lo(D_ovl60_801337BC)($a0)
  .L801333E8:
  /* 120B98 801333E8 0C0E41DB */       jal func_ovl1_8039076C
  /* 120B9C 801333EC 34048000 */       ori $a0, $zero, 0x8000
  /* 120BA0 801333F0 5040001B */      beql $v0, $zero, .L80133460
  /* 120BA4 801333F4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 120BA8 801333F8 0C009A70 */       jal func_800269C0
  /* 120BAC 801333FC 240400A3 */     addiu $a0, $zero, 0xa3
  /* 120BB0 80133400 3C0E8013 */       lui $t6, %hi(D_ovl60_801337BC)
  /* 120BB4 80133404 8DCE37BC */        lw $t6, %lo(D_ovl60_801337BC)($t6)
  /* 120BB8 80133408 24010001 */     addiu $at, $zero, 1
  /* 120BBC 8013340C 240D0001 */     addiu $t5, $zero, 1
  /* 120BC0 80133410 15C10004 */       bne $t6, $at, .L80133424
  /* 120BC4 80133414 3C048013 */       lui $a0, %hi(D_ovl60_801337C8)
  /* 120BC8 80133418 3C018013 */       lui $at, %hi(D_ovl60_801337BC)
  /* 120BCC 8013341C 10000003 */         b .L8013342C
  /* 120BD0 80133420 AC2037BC */        sw $zero, %lo(D_ovl60_801337BC)($at)
  .L80133424:
  /* 120BD4 80133424 3C018013 */       lui $at, %hi(D_ovl60_801337BC)
  /* 120BD8 80133428 AC2D37BC */        sw $t5, %lo(D_ovl60_801337BC)($at)
  .L8013342C:
  /* 120BDC 8013342C 0C0026A1 */       jal omEjectGObjCommon
  /* 120BE0 80133430 8C8437C8 */        lw $a0, %lo(D_ovl60_801337C8)($a0)
  /* 120BE4 80133434 0C04C766 */       jal func_ovl60_80131D98
  /* 120BE8 80133438 00000000 */       nop 
  /* 120BEC 8013343C 3C048013 */       lui $a0, %hi(D_ovl60_801337D0)
  /* 120BF0 80133440 0C0026A1 */       jal omEjectGObjCommon
  /* 120BF4 80133444 8C8437D0 */        lw $a0, %lo(D_ovl60_801337D0)($a0)
  /* 120BF8 80133448 0C04C86A */       jal func_ovl60_801321A8
  /* 120BFC 8013344C 00000000 */       nop 
  /* 120C00 80133450 3C048013 */       lui $a0, %hi(D_ovl60_801337BC)
  /* 120C04 80133454 0C00828D */       jal func_80020A34
  /* 120C08 80133458 8C8437BC */        lw $a0, %lo(D_ovl60_801337BC)($a0)
  .L8013345C:
  /* 120C0C 8013345C 8FBF0014 */        lw $ra, 0x14($sp)
  .L80133460:
  /* 120C10 80133460 27BD0038 */     addiu $sp, $sp, 0x38
  /* 120C14 80133464 03E00008 */        jr $ra
  /* 120C18 80133468 00000000 */       nop 

  /* 120C1C 8013346C 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 120C20 80133470 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 120C24 80133474 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 120C28 80133478 3C188013 */       lui $t8, %hi(D_ovl60_801337F0)
  /* 120C2C 8013347C AFBF001C */        sw $ra, 0x1c($sp)
  /* 120C30 80133480 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 120C34 80133484 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 120C38 80133488 271837F0 */     addiu $t8, $t8, %lo(D_ovl60_801337F0)
  /* 120C3C 8013348C 24190018 */     addiu $t9, $zero, 0x18
  /* 120C40 80133490 AFAE0028 */        sw $t6, 0x28($sp)
  /* 120C44 80133494 AFAF002C */        sw $t7, 0x2c($sp)
  /* 120C48 80133498 AFA00030 */        sw $zero, 0x30($sp)
  /* 120C4C 8013349C AFA00034 */        sw $zero, 0x34($sp)
  /* 120C50 801334A0 AFB80038 */        sw $t8, 0x38($sp)
  /* 120C54 801334A4 AFB9003C */        sw $t9, 0x3c($sp)
  /* 120C58 801334A8 AFA00040 */        sw $zero, 0x40($sp)
  /* 120C5C 801334AC AFA00044 */        sw $zero, 0x44($sp)
  /* 120C60 801334B0 0C0337DE */       jal rldm_initialize
  /* 120C64 801334B4 27A40028 */     addiu $a0, $sp, 0x28
  /* 120C68 801334B8 3C048013 */       lui $a0, %hi(D_ovl60_80133620)
  /* 120C6C 801334BC 24843620 */     addiu $a0, $a0, %lo(D_ovl60_80133620)
  /* 120C70 801334C0 0C0337BB */       jal rldm_bytes_need_to_load
  /* 120C74 801334C4 24050002 */     addiu $a1, $zero, 2
  /* 120C78 801334C8 00402025 */        or $a0, $v0, $zero
  /* 120C7C 801334CC 0C001260 */       jal hal_alloc
  /* 120C80 801334D0 24050010 */     addiu $a1, $zero, 0x10
  /* 120C84 801334D4 3C048013 */       lui $a0, %hi(D_ovl60_80133620)
  /* 120C88 801334D8 3C068013 */       lui $a2, %hi(D_ovl60_801338B0)
  /* 120C8C 801334DC 24C638B0 */     addiu $a2, $a2, %lo(D_ovl60_801338B0)
  /* 120C90 801334E0 24843620 */     addiu $a0, $a0, %lo(D_ovl60_80133620)
  /* 120C94 801334E4 24050002 */     addiu $a1, $zero, 2
  /* 120C98 801334E8 0C033781 */       jal rldm_load_files_into
  /* 120C9C 801334EC 00403825 */        or $a3, $v0, $zero
  /* 120CA0 801334F0 3C058013 */       lui $a1, %hi(func_ovl60_80132E4C)
  /* 120CA4 801334F4 24A52E4C */     addiu $a1, $a1, %lo(func_ovl60_80132E4C)
  /* 120CA8 801334F8 00002025 */        or $a0, $zero, $zero
  /* 120CAC 801334FC 00003025 */        or $a2, $zero, $zero
  /* 120CB0 80133500 0C00265A */       jal omMakeGObjCommon
  /* 120CB4 80133504 3C078000 */       lui $a3, 0x8000
  /* 120CB8 80133508 00002025 */        or $a0, $zero, $zero
  /* 120CBC 8013350C 3C058000 */       lui $a1, 0x8000
  /* 120CC0 80133510 24060064 */     addiu $a2, $zero, 0x64
  /* 120CC4 80133514 00003825 */        or $a3, $zero, $zero
  /* 120CC8 80133518 0C002E7F */       jal func_8000B9FC
  /* 120CCC 8013351C AFA00010 */        sw $zero, 0x10($sp)
  /* 120CD0 80133520 0C04CB58 */       jal func_ovl60_80132D60
  /* 120CD4 80133524 00000000 */       nop 
  /* 120CD8 80133528 0C04CB30 */       jal func_ovl60_80132CC0
  /* 120CDC 8013352C 00000000 */       nop 
  /* 120CE0 80133530 0C04CB08 */       jal func_ovl60_80132C20
  /* 120CE4 80133534 00000000 */       nop 
  /* 120CE8 80133538 0C04CAE0 */       jal func_ovl60_80132B80
  /* 120CEC 8013353C 00000000 */       nop 
  /* 120CF0 80133540 0C04CA90 */       jal func_ovl60_80132A40
  /* 120CF4 80133544 00000000 */       nop 
  /* 120CF8 80133548 0C04CAB8 */       jal func_ovl60_80132AE0
  /* 120CFC 8013354C 00000000 */       nop 
  /* 120D00 80133550 0C04C921 */       jal func_ovl60_80132484
  /* 120D04 80133554 00000000 */       nop 
  /* 120D08 80133558 0C04C8E3 */       jal func_ovl60_8013238C
  /* 120D0C 8013355C 00000000 */       nop 
  /* 120D10 80133560 0C04C7BC */       jal func_ovl60_80131EF0
  /* 120D14 80133564 00000000 */       nop 
  /* 120D18 80133568 0C04C766 */       jal func_ovl60_80131D98
  /* 120D1C 8013356C 00000000 */       nop 
  /* 120D20 80133570 0C04C7F1 */       jal func_ovl60_80131FC4
  /* 120D24 80133574 00000000 */       nop 
  /* 120D28 80133578 0C04C827 */       jal func_ovl60_8013209C
  /* 120D2C 8013357C 00000000 */       nop 
  /* 120D30 80133580 0C04CA7D */       jal func_ovl60_801329F4
  /* 120D34 80133584 00000000 */       nop 
  /* 120D38 80133588 0C04C86A */       jal func_ovl60_801321A8
  /* 120D3C 8013358C 00000000 */       nop 
  /* 120D40 80133590 3C08800A */       lui $t0, %hi((gSceneData + 0x1))
  /* 120D44 80133594 91084AD1 */       lbu $t0, %lo((gSceneData + 0x1))($t0)
  /* 120D48 80133598 2401000F */     addiu $at, $zero, 0xf
  /* 120D4C 8013359C 00002025 */        or $a0, $zero, $zero
  /* 120D50 801335A0 55010004 */      bnel $t0, $at, .L801335B4
  /* 120D54 801335A4 8FBF001C */        lw $ra, 0x1c($sp)
  /* 120D58 801335A8 0C0082AD */       jal func_80020AB4
  /* 120D5C 801335AC 2405002C */     addiu $a1, $zero, 0x2c
  /* 120D60 801335B0 8FBF001C */        lw $ra, 0x1c($sp)
  .L801335B4:
  /* 120D64 801335B4 27BD0048 */     addiu $sp, $sp, 0x48
  /* 120D68 801335B8 03E00008 */        jr $ra
  /* 120D6C 801335BC 00000000 */       nop 

glabel menu_options_entry
  /* 120D70 801335C0 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 120D74 801335C4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 120D78 801335C8 3C048013 */       lui $a0, %hi(D_ovl60_801336F8)
  /* 120D7C 801335CC 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 120D80 801335D0 248436F8 */     addiu $a0, $a0, %lo(D_ovl60_801336F8)
  /* 120D84 801335D4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 120D88 801335D8 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 120D8C 801335DC 0C001C09 */       jal func_80007024
  /* 120D90 801335E0 AC8F000C */        sw $t7, 0xc($a0) # D_ovl60_801336F8 + 12
  /* 120D94 801335E4 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 120D98 801335E8 3C198013 */       lui $t9, %hi(D_NF_801338C0)
  /* 120D9C 801335EC 3C048013 */       lui $a0, %hi(D_ovl60_80133714)
  /* 120DA0 801335F0 273938C0 */     addiu $t9, $t9, %lo(D_NF_801338C0)
  /* 120DA4 801335F4 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 120DA8 801335F8 24843714 */     addiu $a0, $a0, %lo(D_ovl60_80133714)
  /* 120DAC 801335FC 03194023 */      subu $t0, $t8, $t9
  /* 120DB0 80133600 0C001A0F */       jal func_8000683C
  /* 120DB4 80133604 AC880010 */        sw $t0, 0x10($a0) # D_ovl60_80133714 + 16
  /* 120DB8 80133608 8FBF0014 */        lw $ra, 0x14($sp)
  /* 120DBC 8013360C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 120DC0 80133610 03E00008 */        jr $ra
  /* 120DC4 80133614 00000000 */       nop 

  /* 120DC8 80133618 00000000 */       nop 
  /* 120DCC 8013361C 00000000 */       nop 

# Likely start of new file
#glabel D_ovl60_80133620   # Routine parsed as data
#  /* 120DD0 80133620 00000000 */       nop 
#  /* 120DD4 80133624 00000004 */      sllv $zero, $zero, $zero
#glabel D_ovl60_80133628   # Routine parsed as data
#  /* 120DD8 80133628 20202000 */      addi $zero, $at, 0x2000
#  /* 120DDC 8013362C 20202000 */      addi $zero, $at, 0x2000
#glabel D_ovl60_80133630   # Routine parsed as data
#  /* 120DE0 80133630 FFFFFF00 */        sd $ra, -0x100($ra)
#  /* 120DE4 80133634 FFFFFF00 */        sd $ra, -0x100($ra)
