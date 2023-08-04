.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80131B00 -> 0x801321E0

glabel func_ovl13_80131B00
  /* 11A340 80131B00 8C830000 */        lw $v1, ($a0)
  /* 11A344 80131B04 3C188013 */       lui $t8, %hi(D_ovl13_80132CF0)
  /* 11A348 80131B08 27182CF0 */     addiu $t8, $t8, %lo(D_ovl13_80132CF0)
  /* 11A34C 80131B0C 246E0008 */     addiu $t6, $v1, 8
  /* 11A350 80131B10 AC8E0000 */        sw $t6, ($a0)
  /* 11A354 80131B14 3C0FDE00 */       lui $t7, 0xde00
  /* 11A358 80131B18 AC6F0000 */        sw $t7, ($v1)
  /* 11A35C 80131B1C 03E00008 */        jr $ra
  /* 11A360 80131B20 AC780004 */        sw $t8, 4($v1)

glabel func_ovl13_80131B24
  /* 11A364 80131B24 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11A368 80131B28 AFB30020 */        sw $s3, 0x20($sp)
  /* 11A36C 80131B2C AFB2001C */        sw $s2, 0x1c($sp)
  /* 11A370 80131B30 AFB10018 */        sw $s1, 0x18($sp)
  /* 11A374 80131B34 AFBF0024 */        sw $ra, 0x24($sp)
  /* 11A378 80131B38 AFB00014 */        sw $s0, 0x14($sp)
  /* 11A37C 80131B3C 3C118013 */       lui $s1, %hi(D_ovl13_80132D18)
  /* 11A380 80131B40 3C128013 */       lui $s2, %hi(D_ovl13_80132D1C)
  /* 11A384 80131B44 3C138013 */       lui $s3, %hi(D_ovl13_80132D20)
  /* 11A388 80131B48 8C900074 */        lw $s0, 0x74($a0)
  /* 11A38C 80131B4C 26732D20 */     addiu $s3, $s3, %lo(D_ovl13_80132D20)
  /* 11A390 80131B50 26522D1C */     addiu $s2, $s2, %lo(D_ovl13_80132D1C)
  /* 11A394 80131B54 26312D18 */     addiu $s1, $s1, %lo(D_ovl13_80132D18)
  /* 11A398 80131B58 C6040030 */      lwc1 $f4, 0x30($s0)
  .L80131B5C:
  /* 11A39C 80131B5C C6260000 */      lwc1 $f6, ($s1) # D_ovl13_80132D18 + 0
  /* 11A3A0 80131B60 C60A0034 */      lwc1 $f10, 0x34($s0)
  /* 11A3A4 80131B64 24040001 */     addiu $a0, $zero, 1
  /* 11A3A8 80131B68 46062200 */     add.s $f8, $f4, $f6
  /* 11A3AC 80131B6C C6040038 */      lwc1 $f4, 0x38($s0)
  /* 11A3B0 80131B70 E6080030 */      swc1 $f8, 0x30($s0)
  /* 11A3B4 80131B74 C6500000 */      lwc1 $f16, ($s2) # D_ovl13_80132D1C + 0
  /* 11A3B8 80131B78 46105480 */     add.s $f18, $f10, $f16
  /* 11A3BC 80131B7C E6120034 */      swc1 $f18, 0x34($s0)
  /* 11A3C0 80131B80 C6660000 */      lwc1 $f6, ($s3) # D_ovl13_80132D20 + 0
  /* 11A3C4 80131B84 46062200 */     add.s $f8, $f4, $f6
  /* 11A3C8 80131B88 0C002C7A */       jal stop_current_process
  /* 11A3CC 80131B8C E6080038 */      swc1 $f8, 0x38($s0)
  /* 11A3D0 80131B90 1000FFF2 */         b .L80131B5C
  /* 11A3D4 80131B94 C6040030 */      lwc1 $f4, 0x30($s0)
  /* 11A3D8 80131B98 00000000 */       nop 
  /* 11A3DC 80131B9C 00000000 */       nop 
# Maybe start of new file
  /* 11A3E0 80131BA0 8FBF0024 */        lw $ra, 0x24($sp)
  /* 11A3E4 80131BA4 8FB00014 */        lw $s0, 0x14($sp)
  /* 11A3E8 80131BA8 8FB10018 */        lw $s1, 0x18($sp)
  /* 11A3EC 80131BAC 8FB2001C */        lw $s2, 0x1c($sp)
  /* 11A3F0 80131BB0 8FB30020 */        lw $s3, 0x20($sp)
  /* 11A3F4 80131BB4 03E00008 */        jr $ra
  /* 11A3F8 80131BB8 27BD0028 */     addiu $sp, $sp, 0x28

glabel func_ovl13_80131BBC
  /* 11A3FC 80131BBC 240E0001 */     addiu $t6, $zero, 1
  /* 11A400 80131BC0 3C018013 */       lui $at, %hi(D_ovl13_80133138)
  /* 11A404 80131BC4 03E00008 */        jr $ra
  /* 11A408 80131BC8 AC2E3138 */        sw $t6, %lo(D_ovl13_80133138)($at)

  /* 11A40C 80131BCC 03E00008 */        jr $ra
  /* 11A410 80131BD0 00000000 */       nop 

glabel func_ovl13_80131BD4
  /* 11A414 80131BD4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11A418 80131BD8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11A41C 80131BDC 3C058013 */       lui $a1, %hi(D_ovl13_80132D40)
  /* 11A420 80131BE0 3C068013 */       lui $a2, %hi(D_ovl13_80132D44)
  /* 11A424 80131BE4 8CC62D44 */        lw $a2, %lo(D_ovl13_80132D44)($a2)
  /* 11A428 80131BE8 8CA52D40 */        lw $a1, %lo(D_ovl13_80132D40)($a1)
  /* 11A42C 80131BEC 0C04554C */       jal func_ovl2_80115530
  /* 11A430 80131BF0 00002025 */        or $a0, $zero, $zero
  /* 11A434 80131BF4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11A438 80131BF8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11A43C 80131BFC 03E00008 */        jr $ra
  /* 11A440 80131C00 00000000 */       nop 

glabel func_ovl13_80131C04
  /* 11A444 80131C04 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11A448 80131C08 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11A44C 80131C0C 3C058013 */       lui $a1, %hi(D_ovl13_80132D40)
  /* 11A450 80131C10 8CA52D40 */        lw $a1, %lo(D_ovl13_80132D40)($a1)
  /* 11A454 80131C14 0C04558C */       jal func_ovl2_80115630
  /* 11A458 80131C18 00002025 */        or $a0, $zero, $zero
  /* 11A45C 80131C1C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11A460 80131C20 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11A464 80131C24 03E00008 */        jr $ra
  /* 11A468 80131C28 00000000 */       nop 

glabel func_ovl13_80131C2C
  /* 11A46C 80131C2C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11A470 80131C30 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11A474 80131C34 3C048013 */       lui $a0, %hi(D_ovl13_80132D30)
  /* 11A478 80131C38 0C008362 */       jal func_80020D88
  /* 11A47C 80131C3C 8C842D30 */        lw $a0, %lo(D_ovl13_80132D30)($a0)
  /* 11A480 80131C40 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11A484 80131C44 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11A488 80131C48 03E00008 */        jr $ra
  /* 11A48C 80131C4C 00000000 */       nop 

glabel func_ovl13_80131C50
  /* 11A490 80131C50 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11A494 80131C54 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11A498 80131C58 0C00838A */       jal func_80020E28
  /* 11A49C 80131C5C 00000000 */       nop 
  /* 11A4A0 80131C60 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11A4A4 80131C64 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11A4A8 80131C68 03E00008 */        jr $ra
  /* 11A4AC 80131C6C 00000000 */       nop 

glabel func_ovl13_80131C70
  /* 11A4B0 80131C70 3C0E8013 */       lui $t6, %hi(D_ovl13_80132D2C)
  /* 11A4B4 80131C74 8DCE2D2C */        lw $t6, %lo(D_ovl13_80132D2C)($t6)
  /* 11A4B8 80131C78 3C188013 */       lui $t8, %hi(D_ovl13_80132D54)
  /* 11A4BC 80131C7C 3C018013 */       lui $at, %hi(D_ovl13_80132D48)
  /* 11A4C0 80131C80 000E7880 */       sll $t7, $t6, 2
  /* 11A4C4 80131C84 030FC021 */      addu $t8, $t8, $t7
  /* 11A4C8 80131C88 8F182D54 */        lw $t8, %lo(D_ovl13_80132D54)($t8)
  /* 11A4CC 80131C8C 03E00008 */        jr $ra
  /* 11A4D0 80131C90 AC382D48 */        sw $t8, %lo(D_ovl13_80132D48)($at)

glabel func_ovl13_80131C94
  /* 11A4D4 80131C94 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11A4D8 80131C98 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11A4DC 80131C9C 0C0082C2 */       jal func_80020B08
  /* 11A4E0 80131CA0 00002025 */        or $a0, $zero, $zero
  /* 11A4E4 80131CA4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11A4E8 80131CA8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11A4EC 80131CAC 03E00008 */        jr $ra
  /* 11A4F0 80131CB0 00000000 */       nop 

glabel func_ovl13_80131CB4
  /* 11A4F4 80131CB4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11A4F8 80131CB8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11A4FC 80131CBC 0C0082C2 */       jal func_80020B08
  /* 11A500 80131CC0 00002025 */        or $a0, $zero, $zero
  /* 11A504 80131CC4 3C048013 */       lui $a0, %hi(D_ovl13_80132D38)
  /* 11A508 80131CC8 0C008290 */       jal func_80020A40
  /* 11A50C 80131CCC 8C842D38 */        lw $a0, %lo(D_ovl13_80132D38)($a0)
  /* 11A510 80131CD0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11A514 80131CD4 240E0001 */     addiu $t6, $zero, 1
  /* 11A518 80131CD8 3C018013 */       lui $at, %hi(D_ovl13_80132D3C)
  /* 11A51C 80131CDC AC2E2D3C */        sw $t6, %lo(D_ovl13_80132D3C)($at)
  /* 11A520 80131CE0 03E00008 */        jr $ra
  /* 11A524 80131CE4 27BD0018 */     addiu $sp, $sp, 0x18

glabel func_ovl13_80131CE8
  /* 11A528 80131CE8 24020001 */     addiu $v0, $zero, 1
  /* 11A52C 80131CEC 3C018013 */       lui $at, %hi(D_ovl13_80133138)
  /* 11A530 80131CF0 AC223138 */        sw $v0, %lo(D_ovl13_80133138)($at)
  /* 11A534 80131CF4 3C018013 */       lui $at, %hi(D_ovl13_8013313C)
  /* 11A538 80131CF8 03E00008 */        jr $ra
  /* 11A53C 80131CFC AC22313C */        sw $v0, %lo(D_ovl13_8013313C)($at)

glabel func_ovl13_80131D00
  /* 11A540 80131D00 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 11A544 80131D04 AFB40028 */        sw $s4, 0x28($sp)
  /* 11A548 80131D08 AFB30024 */        sw $s3, 0x24($sp)
  /* 11A54C 80131D0C AFB20020 */        sw $s2, 0x20($sp)
  /* 11A550 80131D10 AFB1001C */        sw $s1, 0x1c($sp)
  /* 11A554 80131D14 AFB00018 */        sw $s0, 0x18($sp)
  /* 11A558 80131D18 3C108013 */       lui $s0, %hi(D_ovl13_80132D4C)
  /* 11A55C 80131D1C 3C118013 */       lui $s1, %hi(D_ovl13_80132D3C)
  /* 11A560 80131D20 3C128013 */       lui $s2, %hi(D_ovl13_80132D50)
  /* 11A564 80131D24 3C138013 */       lui $s3, %hi(D_ovl13_80132D48)
  /* 11A568 80131D28 3C148013 */       lui $s4, %hi(D_ovl13_80132D34)
  /* 11A56C 80131D2C AFBF002C */        sw $ra, 0x2c($sp)
  /* 11A570 80131D30 AFA40030 */        sw $a0, 0x30($sp)
  /* 11A574 80131D34 26942D34 */     addiu $s4, $s4, %lo(D_ovl13_80132D34)
  /* 11A578 80131D38 26732D48 */     addiu $s3, $s3, %lo(D_ovl13_80132D48)
  /* 11A57C 80131D3C 26522D50 */     addiu $s2, $s2, %lo(D_ovl13_80132D50)
  /* 11A580 80131D40 26312D3C */     addiu $s1, $s1, %lo(D_ovl13_80132D3C)
  /* 11A584 80131D44 26102D4C */     addiu $s0, $s0, %lo(D_ovl13_80132D4C)
  /* 11A588 80131D48 8E2E0000 */        lw $t6, ($s1) # D_ovl13_80132D3C + 0
  .L80131D4C:
  /* 11A58C 80131D4C 51C00009 */      beql $t6, $zero, .L80131D74
  /* 11A590 80131D50 8E030000 */        lw $v1, ($s0) # D_ovl13_80132D4C + 0
  /* 11A594 80131D54 0C008412 */       jal func_80021048
  /* 11A598 80131D58 00000000 */       nop 
  /* 11A59C 80131D5C 14400004 */      bnez $v0, .L80131D70
  /* 11A5A0 80131D60 00002025 */        or $a0, $zero, $zero
  /* 11A5A4 80131D64 0C0082AD */       jal func_80020AB4
  /* 11A5A8 80131D68 8E850000 */        lw $a1, ($s4) # D_ovl13_80132D34 + 0
  /* 11A5AC 80131D6C AE200000 */        sw $zero, ($s1) # D_ovl13_80132D3C + 0
  .L80131D70:
  /* 11A5B0 80131D70 8E030000 */        lw $v1, ($s0) # D_ovl13_80132D4C + 0
  .L80131D74:
  /* 11A5B4 80131D74 50600008 */      beql $v1, $zero, .L80131D98
  /* 11A5B8 80131D78 8E620000 */        lw $v0, ($s3) # D_ovl13_80132D48 + 0
  /* 11A5BC 80131D7C 94620026 */       lhu $v0, 0x26($v1)
  /* 11A5C0 80131D80 50400005 */      beql $v0, $zero, .L80131D98
  /* 11A5C4 80131D84 8E620000 */        lw $v0, ($s3) # D_ovl13_80132D48 + 0
  /* 11A5C8 80131D88 8E4F0000 */        lw $t7, ($s2) # D_ovl13_80132D50 + 0
  /* 11A5CC 80131D8C 11E2000B */       beq $t7, $v0, .L80131DBC
  /* 11A5D0 80131D90 00000000 */       nop 
  /* 11A5D4 80131D94 8E620000 */        lw $v0, ($s3) # D_ovl13_80132D48 + 0
  .L80131D98:
  /* 11A5D8 80131D98 10400008 */      beqz $v0, .L80131DBC
  /* 11A5DC 80131D9C 00000000 */       nop 
  /* 11A5E0 80131DA0 0C009A70 */       jal func_800269C0
  /* 11A5E4 80131DA4 3044FFFF */      andi $a0, $v0, 0xffff
  /* 11A5E8 80131DA8 10400004 */      beqz $v0, .L80131DBC
  /* 11A5EC 80131DAC AE020000 */        sw $v0, ($s0) # D_ovl13_80132D4C + 0
  /* 11A5F0 80131DB0 94580026 */       lhu $t8, 0x26($v0)
  /* 11A5F4 80131DB4 AE600000 */        sw $zero, ($s3) # D_ovl13_80132D48 + 0
  /* 11A5F8 80131DB8 AE580000 */        sw $t8, ($s2) # D_ovl13_80132D50 + 0
  .L80131DBC:
  /* 11A5FC 80131DBC 0C002C7A */       jal stop_current_process
  /* 11A600 80131DC0 24040001 */     addiu $a0, $zero, 1
  /* 11A604 80131DC4 1000FFE1 */         b .L80131D4C
  /* 11A608 80131DC8 8E2E0000 */        lw $t6, ($s1) # D_ovl13_80132D3C + 0
  /* 11A60C 80131DCC 00000000 */       nop 
  /* 11A610 80131DD0 00000000 */       nop 
  /* 11A614 80131DD4 00000000 */       nop 
  /* 11A618 80131DD8 00000000 */       nop 
  /* 11A61C 80131DDC 00000000 */       nop 
# Maybe start of new file
  /* 11A620 80131DE0 8FBF002C */        lw $ra, 0x2c($sp)
  /* 11A624 80131DE4 8FB00018 */        lw $s0, 0x18($sp)
  /* 11A628 80131DE8 8FB1001C */        lw $s1, 0x1c($sp)
  /* 11A62C 80131DEC 8FB20020 */        lw $s2, 0x20($sp)
  /* 11A630 80131DF0 8FB30024 */        lw $s3, 0x24($sp)
  /* 11A634 80131DF4 8FB40028 */        lw $s4, 0x28($sp)
  /* 11A638 80131DF8 03E00008 */        jr $ra
  /* 11A63C 80131DFC 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl13_80131E00
  /* 11A640 80131E00 3C028004 */       lui $v0, %hi(D_80045470 + 2)
  /* 11A644 80131E04 94425472 */       lhu $v0, %lo(D_80045470 + 2)($v0)
  /* 11A648 80131E08 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 11A64C 80131E0C AFBF001C */        sw $ra, 0x1c($sp)
  /* 11A650 80131E10 304E1000 */      andi $t6, $v0, 0x1000
  /* 11A654 80131E14 11C0000B */      beqz $t6, .L80131E44
  /* 11A658 80131E18 AFA40020 */        sw $a0, 0x20($sp)
  /* 11A65C 80131E1C 3C078013 */       lui $a3, %hi(D_ovl13_80132DC8)
  /* 11A660 80131E20 240F000F */     addiu $t7, $zero, 0xf
  /* 11A664 80131E24 AFAF0010 */        sw $t7, 0x10($sp)
  /* 11A668 80131E28 24E72DC8 */     addiu $a3, $a3, %lo(D_ovl13_80132DC8)
  /* 11A66C 80131E2C 24040032 */     addiu $a0, $zero, 0x32
  /* 11A670 80131E30 24050032 */     addiu $a1, $zero, 0x32
  /* 11A674 80131E34 0C0DA75E */       jal func_ovl9_80369D78
  /* 11A678 80131E38 24060050 */     addiu $a2, $zero, 0x50
  /* 11A67C 80131E3C 3C028004 */       lui $v0, %hi(D_80045470 + 2)
  /* 11A680 80131E40 94425472 */       lhu $v0, %lo(D_80045470 + 2)($v0)
  .L80131E44:
  /* 11A684 80131E44 30582000 */      andi $t8, $v0, 0x2000
  /* 11A688 80131E48 13000004 */      beqz $t8, .L80131E5C
  /* 11A68C 80131E4C 00002025 */        or $a0, $zero, $zero
  /* 11A690 80131E50 3C058000 */       lui $a1, 0x8000
  /* 11A694 80131E54 0C0088DA */       jal func_80022368
  /* 11A698 80131E58 00003025 */        or $a2, $zero, $zero
  .L80131E5C:
  /* 11A69C 80131E5C 3C198013 */       lui $t9, %hi(D_ovl13_80133138)
  /* 11A6A0 80131E60 8F393138 */        lw $t9, %lo(D_ovl13_80133138)($t9)
  /* 11A6A4 80131E64 5320000B */      beql $t9, $zero, .L80131E94
  /* 11A6A8 80131E68 8FBF001C */        lw $ra, 0x1c($sp)
  /* 11A6AC 80131E6C 0C0DA7B0 */       jal func_ovl9_80369EC0
  /* 11A6B0 80131E70 00000000 */       nop 
  /* 11A6B4 80131E74 3C02800A */       lui $v0, %hi(gSceneData)
  /* 11A6B8 80131E78 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 11A6BC 80131E7C 90480000 */       lbu $t0, ($v0) # gSceneData + 0
  /* 11A6C0 80131E80 24090001 */     addiu $t1, $zero, 1
  /* 11A6C4 80131E84 A0490000 */        sb $t1, ($v0) # gSceneData + 0
  /* 11A6C8 80131E88 0C00171D */       jal func_80005C74
  /* 11A6CC 80131E8C A0480001 */        sb $t0, 1($v0) # gSceneData + 1
  /* 11A6D0 80131E90 8FBF001C */        lw $ra, 0x1c($sp)
  .L80131E94:
  /* 11A6D4 80131E94 27BD0020 */     addiu $sp, $sp, 0x20
  /* 11A6D8 80131E98 03E00008 */        jr $ra
  /* 11A6DC 80131E9C 00000000 */       nop 

glabel func_ovl13_80131EA0
  /* 11A6E0 80131EA0 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 11A6E4 80131EA4 AFA40040 */        sw $a0, 0x40($sp)
  /* 11A6E8 80131EA8 AFA50044 */        sw $a1, 0x44($sp)
  /* 11A6EC 80131EAC 8FB80044 */        lw $t8, 0x44($sp)
  /* 11A6F0 80131EB0 8FA80040 */        lw $t0, 0x40($sp)
  /* 11A6F4 80131EB4 3C0E8001 */       lui $t6, %hi(func_80013E68)
  /* 11A6F8 80131EB8 AFBF003C */        sw $ra, 0x3c($sp)
  /* 11A6FC 80131EBC 3C078000 */       lui $a3, 0x8000
  /* 11A700 80131EC0 25CE3E68 */     addiu $t6, $t6, %lo(func_80013E68)
  /* 11A704 80131EC4 3C058001 */       lui $a1, %hi(func_8000B1C4)
  /* 11A708 80131EC8 240FFFFF */     addiu $t7, $zero, -1
  /* 11A70C 80131ECC 24190001 */     addiu $t9, $zero, 1
  /* 11A710 80131ED0 24090001 */     addiu $t1, $zero, 1
  /* 11A714 80131ED4 AFA90030 */        sw $t1, 0x30($sp)
  /* 11A718 80131ED8 AFB90024 */        sw $t9, 0x24($sp)
  /* 11A71C 80131EDC AFAF001C */        sw $t7, 0x1c($sp)
  /* 11A720 80131EE0 24A5B1C4 */     addiu $a1, $a1, %lo(func_8000B1C4)
  /* 11A724 80131EE4 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11A728 80131EE8 AFA70018 */        sw $a3, 0x18($sp)
  /* 11A72C 80131EEC 3C041000 */       lui $a0, 0x1000
  /* 11A730 80131EF0 AFA00014 */        sw $zero, 0x14($sp)
  /* 11A734 80131EF4 AFA00028 */        sw $zero, 0x28($sp)
  /* 11A738 80131EF8 00003025 */        or $a2, $zero, $zero
  /* 11A73C 80131EFC AFB80020 */        sw $t8, 0x20($sp)
  /* 11A740 80131F00 0C002E09 */       jal func_8000B824
  /* 11A744 80131F04 AFA8002C */        sw $t0, 0x2c($sp)
  /* 11A748 80131F08 10400003 */      beqz $v0, .L80131F18
  /* 11A74C 80131F0C 8FBF003C */        lw $ra, 0x3c($sp)
  /* 11A750 80131F10 10000002 */         b .L80131F1C
  /* 11A754 80131F14 00401825 */        or $v1, $v0, $zero
  .L80131F18:
  /* 11A758 80131F18 00001825 */        or $v1, $zero, $zero
  .L80131F1C:
  /* 11A75C 80131F1C 00601025 */        or $v0, $v1, $zero
  /* 11A760 80131F20 03E00008 */        jr $ra
  /* 11A764 80131F24 27BD0040 */     addiu $sp, $sp, 0x40

glabel func_ovl13_80131F28
  /* 11A768 80131F28 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 11A76C 80131F2C AFA40040 */        sw $a0, 0x40($sp)
  /* 11A770 80131F30 8FAA0040 */        lw $t2, 0x40($sp)
  /* 11A774 80131F34 3C0E8001 */       lui $t6, %hi(func_80017DBC)
  /* 11A778 80131F38 AFBF003C */        sw $ra, 0x3c($sp)
  /* 11A77C 80131F3C 25CE7DBC */     addiu $t6, $t6, %lo(func_80017DBC)
  /* 11A780 80131F40 3C041000 */       lui $a0, (0x10000002 >> 16) # 268435458
  /* 11A784 80131F44 3C058001 */       lui $a1, %hi(func_8000B1C4)
  /* 11A788 80131F48 240F0032 */     addiu $t7, $zero, 0x32
  /* 11A78C 80131F4C 24180000 */     addiu $t8, $zero, 0
  /* 11A790 80131F50 24190001 */     addiu $t9, $zero, 1
  /* 11A794 80131F54 2408FFFF */     addiu $t0, $zero, -1
  /* 11A798 80131F58 24090001 */     addiu $t1, $zero, 1
  /* 11A79C 80131F5C 240B0001 */     addiu $t3, $zero, 1
  /* 11A7A0 80131F60 AFAB0030 */        sw $t3, 0x30($sp)
  /* 11A7A4 80131F64 AFA90024 */        sw $t1, 0x24($sp)
  /* 11A7A8 80131F68 AFA80020 */        sw $t0, 0x20($sp)
  /* 11A7AC 80131F6C AFB9001C */        sw $t9, 0x1c($sp)
  /* 11A7B0 80131F70 AFB80018 */        sw $t8, 0x18($sp)
  /* 11A7B4 80131F74 AFAF0014 */        sw $t7, 0x14($sp)
  /* 11A7B8 80131F78 24A5B1C4 */     addiu $a1, $a1, %lo(func_8000B1C4)
  /* 11A7BC 80131F7C 34840002 */       ori $a0, $a0, (0x10000002 & 0xFFFF) # 268435458
  /* 11A7C0 80131F80 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11A7C4 80131F84 AFA00028 */        sw $zero, 0x28($sp)
  /* 11A7C8 80131F88 AFA00034 */        sw $zero, 0x34($sp)
  /* 11A7CC 80131F8C 00003025 */        or $a2, $zero, $zero
  /* 11A7D0 80131F90 3C078000 */       lui $a3, 0x8000
  /* 11A7D4 80131F94 0C002E4F */       jal func_8000B93C
  /* 11A7D8 80131F98 AFAA002C */        sw $t2, 0x2c($sp)
  /* 11A7DC 80131F9C 14400003 */      bnez $v0, .L80131FAC
  /* 11A7E0 80131FA0 00401825 */        or $v1, $v0, $zero
  /* 11A7E4 80131FA4 10000009 */         b .L80131FCC
  /* 11A7E8 80131FA8 00001025 */        or $v0, $zero, $zero
  .L80131FAC:
  /* 11A7EC 80131FAC 3C01442F */       lui $at, (0x442F0000 >> 16) # 700.0
  /* 11A7F0 80131FB0 44812000 */      mtc1 $at, $f4 # 700.0 to cop1
  /* 11A7F4 80131FB4 8C6C0074 */        lw $t4, 0x74($v1)
  /* 11A7F8 80131FB8 240D0005 */     addiu $t5, $zero, 5
  /* 11A7FC 80131FBC 00601025 */        or $v0, $v1, $zero
  /* 11A800 80131FC0 E5840044 */      swc1 $f4, 0x44($t4)
  /* 11A804 80131FC4 8C6E0074 */        lw $t6, 0x74($v1)
  /* 11A808 80131FC8 ADCD0080 */        sw $t5, 0x80($t6)
  .L80131FCC:
  /* 11A80C 80131FCC 8FBF003C */        lw $ra, 0x3c($sp)
  /* 11A810 80131FD0 27BD0040 */     addiu $sp, $sp, 0x40
  /* 11A814 80131FD4 03E00008 */        jr $ra
  /* 11A818 80131FD8 00000000 */       nop 

glabel func_ovl13_80131FDC
  /* 11A81C 80131FDC 27BDFFA8 */     addiu $sp, $sp, -0x58
  /* 11A820 80131FE0 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 11A824 80131FE4 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 11A828 80131FE8 3C188013 */       lui $t8, %hi(D_ovl13_80133140)
  /* 11A82C 80131FEC AFBF001C */        sw $ra, 0x1c($sp)
  /* 11A830 80131FF0 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 11A834 80131FF4 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 11A838 80131FF8 27183140 */     addiu $t8, $t8, %lo(D_ovl13_80133140)
  /* 11A83C 80131FFC 24190005 */     addiu $t9, $zero, 5
  /* 11A840 80132000 AFAE0030 */        sw $t6, 0x30($sp)
  /* 11A844 80132004 AFAF0034 */        sw $t7, 0x34($sp)
  /* 11A848 80132008 AFA00038 */        sw $zero, 0x38($sp)
  /* 11A84C 8013200C AFA0003C */        sw $zero, 0x3c($sp)
  /* 11A850 80132010 AFB80040 */        sw $t8, 0x40($sp)
  /* 11A854 80132014 AFB90044 */        sw $t9, 0x44($sp)
  /* 11A858 80132018 AFA00048 */        sw $zero, 0x48($sp)
  /* 11A85C 8013201C AFA0004C */        sw $zero, 0x4c($sp)
  /* 11A860 80132020 0C0337DE */       jal rldm_initialize
  /* 11A864 80132024 27A40030 */     addiu $a0, $sp, 0x30
  /* 11A868 80132028 3C058013 */       lui $a1, %hi(func_ovl13_80131E00)
  /* 11A86C 8013202C 24A51E00 */     addiu $a1, $a1, %lo(func_ovl13_80131E00)
  /* 11A870 80132030 00002025 */        or $a0, $zero, $zero
  /* 11A874 80132034 00003025 */        or $a2, $zero, $zero
  /* 11A878 80132038 0C00265A */       jal omMakeGObjCommon
  /* 11A87C 8013203C 3C078000 */       lui $a3, 0x8000
  /* 11A880 80132040 0C006265 */       jal lbRandom_GetIntRange
  /* 11A884 80132044 24040080 */     addiu $a0, $zero, 0x80
  /* 11A888 80132048 AFA20020 */        sw $v0, 0x20($sp)
  /* 11A88C 8013204C 0C006265 */       jal lbRandom_GetIntRange
  /* 11A890 80132050 24040080 */     addiu $a0, $zero, 0x80
  /* 11A894 80132054 AFA20024 */        sw $v0, 0x24($sp)
  /* 11A898 80132058 0C006265 */       jal lbRandom_GetIntRange
  /* 11A89C 8013205C 24040080 */     addiu $a0, $zero, 0x80
  /* 11A8A0 80132060 8FA90024 */        lw $t1, 0x24($sp)
  /* 11A8A4 80132064 8FAC0020 */        lw $t4, 0x20($sp)
  /* 11A8A8 80132068 00024200 */       sll $t0, $v0, 8
  /* 11A8AC 8013206C 00095600 */       sll $t2, $t1, 0x18
  /* 11A8B0 80132070 010A5825 */        or $t3, $t0, $t2
  /* 11A8B4 80132074 000C6C00 */       sll $t5, $t4, 0x10
  /* 11A8B8 80132078 016D7025 */        or $t6, $t3, $t5
  /* 11A8BC 8013207C 35CF00FF */       ori $t7, $t6, 0xff
  /* 11A8C0 80132080 AFAF0010 */        sw $t7, 0x10($sp)
  /* 11A8C4 80132084 00002025 */        or $a0, $zero, $zero
  /* 11A8C8 80132088 3C058000 */       lui $a1, 0x8000
  /* 11A8CC 8013208C 24060064 */     addiu $a2, $zero, 0x64
  /* 11A8D0 80132090 0C002E7F */       jal func_8000B9FC
  /* 11A8D4 80132094 24070002 */     addiu $a3, $zero, 2
  /* 11A8D8 80132098 0C04C7CA */       jal func_ovl13_80131F28
  /* 11A8DC 8013209C 00002025 */        or $a0, $zero, $zero
  /* 11A8E0 801320A0 3C048013 */       lui $a0, %hi(func_ovl13_80131B24)
  /* 11A8E4 801320A4 3C058013 */       lui $a1, %hi(D_ovl13_80132B68)
  /* 11A8E8 801320A8 24A52B68 */     addiu $a1, $a1, %lo(D_ovl13_80132B68)
  /* 11A8EC 801320AC 0C04C7A8 */       jal func_ovl13_80131EA0
  /* 11A8F0 801320B0 24841B24 */     addiu $a0, $a0, %lo(func_ovl13_80131B24)
  /* 11A8F4 801320B4 0C035101 */       jal func_ovl0_800D4404
  /* 11A8F8 801320B8 00000000 */       nop 
  /* 11A8FC 801320BC 3C042000 */       lui $a0, (0x20000002 >> 16) # 536870914
  /* 11A900 801320C0 24180000 */     addiu $t8, $zero, 0
  /* 11A904 801320C4 24190002 */     addiu $t9, $zero, 2
  /* 11A908 801320C8 AFB90014 */        sw $t9, 0x14($sp)
  /* 11A90C 801320CC AFB80010 */        sw $t8, 0x10($sp)
  /* 11A910 801320D0 34840002 */       ori $a0, $a0, (0x20000002 & 0xFFFF) # 536870914
  /* 11A914 801320D4 00002825 */        or $a1, $zero, $zero
  /* 11A918 801320D8 0C03504C */       jal func_ovl0_800D4130
  /* 11A91C 801320DC 24060032 */     addiu $a2, $zero, 0x32
  /* 11A920 801320E0 3C08800D */       lui $t0, %hi(func_ovl0_800D42C8)
  /* 11A924 801320E4 250842C8 */     addiu $t0, $t0, %lo(func_ovl0_800D42C8)
  /* 11A928 801320E8 3C048013 */       lui $a0, %hi(D_ovl13_80132D84)
  /* 11A92C 801320EC 3C07800D */       lui $a3, %hi(func_ovl0_800D4248)
  /* 11A930 801320F0 24090001 */     addiu $t1, $zero, 1
  /* 11A934 801320F4 AFA90010 */        sw $t1, 0x10($sp)
  /* 11A938 801320F8 24E74248 */     addiu $a3, $a3, %lo(func_ovl0_800D4248)
  /* 11A93C 801320FC 8C842D84 */        lw $a0, %lo(D_ovl13_80132D84)($a0)
  /* 11A940 80132100 AFA80014 */        sw $t0, 0x14($sp)
  /* 11A944 80132104 3C052000 */       lui $a1, 0x2000
  /* 11A948 80132108 0C0350C3 */       jal func_ovl0_800D430C
  /* 11A94C 8013210C 00003025 */        or $a2, $zero, $zero
  /* 11A950 80132110 00402025 */        or $a0, $v0, $zero
  /* 11A954 80132114 0C002EC1 */       jal gOMObj_SetAnimPlaybackRate
  /* 11A958 80132118 3C053E80 */       lui $a1, 0x3e80
  /* 11A95C 8013211C 0C0455B9 */       jal func_ovl2_801156E4
  /* 11A960 80132120 00000000 */       nop 
  /* 11A964 80132124 0C0DA7B8 */       jal func_ovl9_80369EE0
  /* 11A968 80132128 00000000 */       nop 
  /* 11A96C 8013212C 3C048013 */       lui $a0, %hi(func_ovl13_80131D00)
  /* 11A970 80132130 24841D00 */     addiu $a0, $a0, %lo(func_ovl13_80131D00)
  /* 11A974 80132134 0C04C7A8 */       jal func_ovl13_80131EA0
  /* 11A978 80132138 00002825 */        or $a1, $zero, $zero
  /* 11A97C 8013213C 8FBF001C */        lw $ra, 0x1c($sp)
  /* 11A980 80132140 27BD0058 */     addiu $sp, $sp, 0x58
  /* 11A984 80132144 03E00008 */        jr $ra
  /* 11A988 80132148 00000000 */       nop 

glabel debug_system_entry
  /* 11A98C 8013214C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11A990 80132150 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 11A994 80132154 3C048013 */       lui $a0, %hi(D_ovl13_80132F6C)
  /* 11A998 80132158 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 11A99C 8013215C 24842F6C */     addiu $a0, $a0, %lo(D_ovl13_80132F6C)
  /* 11A9A0 80132160 AFBF0024 */        sw $ra, 0x24($sp)
  /* 11A9A4 80132164 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 11A9A8 80132168 AFB20020 */        sw $s2, 0x20($sp)
  /* 11A9AC 8013216C AFB1001C */        sw $s1, 0x1c($sp)
  /* 11A9B0 80132170 AFB00018 */        sw $s0, 0x18($sp)
  /* 11A9B4 80132174 0C001C09 */       jal func_80007024
  /* 11A9B8 80132178 AC8F000C */        sw $t7, 0xc($a0) # D_ovl13_80132F6C + 12
  /* 11A9BC 8013217C 3C188037 */       lui $t8, %hi(func_ovl9_80369240)
  /* 11A9C0 80132180 3C198013 */       lui $t9, %hi(D_NF_80133170)
  /* 11A9C4 80132184 3C118013 */       lui $s1, %hi(D_ovl13_80132F88)
  /* 11A9C8 80132188 27393170 */     addiu $t9, $t9, %lo(D_NF_80133170)
  /* 11A9CC 8013218C 27189240 */     addiu $t8, $t8, %lo(func_ovl9_80369240)
  /* 11A9D0 80132190 26312F88 */     addiu $s1, $s1, %lo(D_ovl13_80132F88)
  /* 11A9D4 80132194 03194023 */      subu $t0, $t8, $t9
  /* 11A9D8 80132198 3C128013 */       lui $s2, %hi(D_ovl13_80133138)
  /* 11A9DC 8013219C 3C108013 */       lui $s0, %hi(D_ovl13_8013313C)
  /* 11A9E0 801321A0 AE280010 */        sw $t0, 0x10($s1) # D_ovl13_80132F88 + 16
  /* 11A9E4 801321A4 2610313C */     addiu $s0, $s0, %lo(D_ovl13_8013313C)
  /* 11A9E8 801321A8 26523138 */     addiu $s2, $s2, %lo(D_ovl13_80133138)
  /* 11A9EC 801321AC AE400000 */        sw $zero, ($s2) # D_ovl13_80133138 + 0
  .L801321B0:
  /* 11A9F0 801321B0 AE000000 */        sw $zero, ($s0) # D_ovl13_8013313C + 0
  /* 11A9F4 801321B4 0C001A0F */       jal func_8000683C
  /* 11A9F8 801321B8 02202025 */        or $a0, $s1, $zero
  /* 11A9FC 801321BC 8E090000 */        lw $t1, ($s0) # D_ovl13_8013313C + 0
  /* 11AA00 801321C0 5520FFFB */      bnel $t1, $zero, .L801321B0
  /* 11AA04 801321C4 AE400000 */        sw $zero, ($s2) # D_ovl13_80133138 + 0
  /* 11AA08 801321C8 8FBF0024 */        lw $ra, 0x24($sp)
  /* 11AA0C 801321CC 8FB00018 */        lw $s0, 0x18($sp)
  /* 11AA10 801321D0 8FB1001C */        lw $s1, 0x1c($sp)
  /* 11AA14 801321D4 8FB20020 */        lw $s2, 0x20($sp)
  /* 11AA18 801321D8 03E00008 */        jr $ra
  /* 11AA1C 801321DC 27BD0028 */     addiu $sp, $sp, 0x28
#
#  /* 11AA20 801321E0 00000000 */       nop 
#  /* 11AA24 801321E4 00000000 */       nop 
#glabel D_ovl13_801321E8   # Routine parsed as data
#  /* 11AA28 801321E8 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA2C 801321EC 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA30 801321F0 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA34 801321F4 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA38 801321F8 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA3C 801321FC 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA40 80132200 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA44 80132204 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA48 80132208 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA4C 8013220C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA50 80132210 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA54 80132214 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA58 80132218 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA5C 8013221C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA60 80132220 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA64 80132224 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA68 80132228 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA6C 8013222C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA70 80132230 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA74 80132234 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA78 80132238 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA7C 8013223C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA80 80132240 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA84 80132244 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA88 80132248 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA8C 8013224C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA90 80132250 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA94 80132254 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA98 80132258 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AA9C 8013225C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAA0 80132260 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAA4 80132264 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAA8 80132268 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAAC 8013226C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAB0 80132270 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAB4 80132274 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAB8 80132278 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AABC 8013227C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAC0 80132280 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAC4 80132284 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAC8 80132288 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AACC 8013228C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAD0 80132290 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAD4 80132294 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAD8 80132298 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AADC 8013229C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAE0 801322A0 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAE4 801322A4 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAE8 801322A8 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAEC 801322AC 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAF0 801322B0 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAF4 801322B4 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAF8 801322B8 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AAFC 801322BC 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB00 801322C0 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB04 801322C4 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB08 801322C8 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB0C 801322CC 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB10 801322D0 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB14 801322D4 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB18 801322D8 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB1C 801322DC 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB20 801322E0 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB24 801322E4 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB28 801322E8 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB2C 801322EC 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB30 801322F0 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB34 801322F4 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB38 801322F8 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB3C 801322FC 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB40 80132300 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB44 80132304 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB48 80132308 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB4C 8013230C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB50 80132310 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB54 80132314 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB58 80132318 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB5C 8013231C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB60 80132320 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB64 80132324 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB68 80132328 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB6C 8013232C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB70 80132330 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB74 80132334 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB78 80132338 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB7C 8013233C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB80 80132340 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB84 80132344 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB88 80132348 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB8C 8013234C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB90 80132350 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB94 80132354 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB98 80132358 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AB9C 8013235C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABA0 80132360 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABA4 80132364 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABA8 80132368 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABAC 8013236C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABB0 80132370 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABB4 80132374 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABB8 80132378 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABBC 8013237C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABC0 80132380 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABC4 80132384 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABC8 80132388 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABCC 8013238C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABD0 80132390 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABD4 80132394 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABD8 80132398 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABDC 8013239C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABE0 801323A0 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABE4 801323A4 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABE8 801323A8 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABEC 801323AC 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABF0 801323B0 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABF4 801323B4 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABF8 801323B8 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11ABFC 801323BC 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AC00 801323C0 0885677F */         j func_NF_82159DFC # couldn't be resolved
#  /* 11AC04 801323C4 677F677F */    daddiu $ra, $k1, 0x677f
#
#  /* 11AC08 801323C8 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AC0C 801323CC 0885677F */         j func_NF_82159DFC # couldn't be resolved
#  /* 11AC10 801323D0 677F677F */    daddiu $ra, $k1, 0x677f
#
#  /* 11AC14 801323D4 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AC18 801323D8 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AC1C 801323DC 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AC20 801323E0 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AC24 801323E4 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AC28 801323E8 677F6F7F */    daddiu $ra, $k1, 0x6f7f
#  /* 11AC2C 801323EC 6F7F677F */       ldr $ra, 0x677f($k1)
#  /* 11AC30 801323F0 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AC34 801323F4 6F7F6F7F */       ldr $ra, 0x6f7f($k1)
#  /* 11AC38 801323F8 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AC3C 801323FC 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AC40 80132400 114B5F7D */       beq $t2, $t3, 0x8014a1f8 # branch target not found
#  /* 11AC44 80132404 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AC48 80132408 677F5F7D */    daddiu $ra, $k1, 0x5f7d
#  /* 11AC4C 8013240C 2B1B677F */      slti $k1, $t8, 0x677f
#  /* 11AC50 80132410 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AC54 80132414 677F6F7F */    daddiu $ra, $k1, 0x6f7f
#  /* 11AC58 80132418 6F7F6F7F */       ldr $ra, 0x6f7f($k1)
#  /* 11AC5C 8013241C 677F677F */    daddiu $ra, $k1, 0x677f
#  /* 11AC60 80132420 677F6F7F */    daddiu $ra, $k1, 0x6f7f
#  /* 11AC64 80132424 6F7F677F */       ldr $ra, 0x677f($k1)
#  /* 11AC68 80132428 677F6F7F */    daddiu $ra, $k1, 0x6f7f
#  /* 11AC6C 8013242C 54FB3C3B */      bnel $a3, $k1, 0x8014151c # branch target not found
#  /* 11AC70 80132430 33BB2BBB */      andi $k1, $sp, 0x2bbb
