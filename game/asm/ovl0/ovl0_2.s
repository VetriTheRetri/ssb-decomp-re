.include "macros.inc"

.section .bss

# new file 0_2
glabel D_ovl0_800D6460
    .space 4
glabel D_ovl0_800D6464
    .space 4
glabel D_ovl0_800D6468
    .space 4
glabel D_ovl0_800D646C
    .space 4
glabel D_ovl0_800D6470
    .space 4
glabel D_ovl0_800D6474
    .space 12

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Likely start of new file
glabel func_ovl0_800D3E80
  /* 04F860 800D3E80 3C03800D */       lui $v1, %hi(D_ovl0_800D6464)
  /* 04F864 800D3E84 24636464 */     addiu $v1, $v1, %lo(D_ovl0_800D6464)
  /* 04F868 800D3E88 3C0E800D */       lui $t6, %hi(D_ovl0_800D6460)
  /* 04F86C 800D3E8C 8DCE6460 */        lw $t6, %lo(D_ovl0_800D6460)($t6)
  /* 04F870 800D3E90 8C620000 */        lw $v0, ($v1) # D_ovl0_800D6464 + 0
  /* 04F874 800D3E94 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 04F878 800D3E98 AFBF0014 */        sw $ra, 0x14($sp)
  /* 04F87C 800D3E9C 004E082A */       slt $at, $v0, $t6
  /* 04F880 800D3EA0 10200002 */      beqz $at, .L800D3EAC
  /* 04F884 800D3EA4 244F0001 */     addiu $t7, $v0, 1
  /* 04F888 800D3EA8 AC6F0000 */        sw $t7, ($v1) # D_ovl0_800D6464 + 0
  .L800D3EAC:
  /* 04F88C 800D3EAC 3C03800D */       lui $v1, %hi(D_ovl0_800D6468)
  /* 04F890 800D3EB0 24636468 */     addiu $v1, $v1, %lo(D_ovl0_800D6468)
  /* 04F894 800D3EB4 8C620000 */        lw $v0, ($v1) # D_ovl0_800D6468 + 0
  /* 04F898 800D3EB8 1040000F */      beqz $v0, .L800D3EF8
  /* 04F89C 800D3EBC 2458FFFF */     addiu $t8, $v0, -1
  /* 04F8A0 800D3EC0 1700000D */      bnez $t8, .L800D3EF8
  /* 04F8A4 800D3EC4 AC780000 */        sw $t8, ($v1) # D_ovl0_800D6468 + 0
  /* 04F8A8 800D3EC8 3C02800D */       lui $v0, %hi(D_ovl0_800D6470)
  /* 04F8AC 800D3ECC 8C426470 */        lw $v0, %lo(D_ovl0_800D6470)($v0)
  /* 04F8B0 800D3ED0 24080001 */     addiu $t0, $zero, 1
  /* 04F8B4 800D3ED4 3C09800D */       lui $t1, %hi(D_ovl0_800D6474)
  /* 04F8B8 800D3ED8 10400002 */      beqz $v0, .L800D3EE4
  /* 04F8BC 800D3EDC 00000000 */       nop 
  /* 04F8C0 800D3EE0 AC480000 */        sw $t0, ($v0)
  .L800D3EE4:
  /* 04F8C4 800D3EE4 8D296474 */        lw $t1, %lo(D_ovl0_800D6474)($t1)
  /* 04F8C8 800D3EE8 51200004 */      beql $t1, $zero, .L800D3EFC
  /* 04F8CC 800D3EEC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 04F8D0 800D3EF0 0C0026A1 */       jal omEjectGObjCommon
  /* 04F8D4 800D3EF4 00000000 */       nop 
  .L800D3EF8:
  /* 04F8D8 800D3EF8 8FBF0014 */        lw $ra, 0x14($sp)
  .L800D3EFC:
  /* 04F8DC 800D3EFC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 04F8E0 800D3F00 03E00008 */        jr $ra
  /* 04F8E4 800D3F04 00000000 */       nop 

glabel func_ovl0_800D3F08
  /* 04F8E8 800D3F08 3C0E800D */       lui $t6, %hi(D_ovl0_800D6464)
  /* 04F8EC 800D3F0C 3C0F800D */       lui $t7, %hi(D_ovl0_800D6460)
  /* 04F8F0 800D3F10 8DEF6460 */        lw $t7, %lo(D_ovl0_800D6460)($t7)
  /* 04F8F4 800D3F14 8DCE6464 */        lw $t6, %lo(D_ovl0_800D6464)($t6)
  /* 04F8F8 800D3F18 3C01437F */       lui $at, (0x437F0000 >> 16) # 255.0
  /* 04F8FC 800D3F1C 448F4000 */      mtc1 $t7, $f8
  /* 04F900 800D3F20 448E2000 */      mtc1 $t6, $f4
  /* 04F904 800D3F24 44819000 */      mtc1 $at, $f18 # 255.0 to cop1
  /* 04F908 800D3F28 468042A0 */   cvt.s.w $f10, $f8
  /* 04F90C 800D3F2C 3C03800D */       lui $v1, %hi(D_ovl0_800D646C)
  /* 04F910 800D3F30 2463646C */     addiu $v1, $v1, %lo(D_ovl0_800D646C)
  /* 04F914 800D3F34 90790003 */       lbu $t9, 3($v1) # D_ovl0_800D646C + 3
  /* 04F918 800D3F38 3C0C8004 */       lui $t4, %hi(gpDisplayListHead)
  /* 04F91C 800D3F3C 468021A0 */   cvt.s.w $f6, $f4
  /* 04F920 800D3F40 AFA40000 */        sw $a0, ($sp)
  /* 04F924 800D3F44 258C65B0 */     addiu $t4, $t4, %lo(gpDisplayListHead)
  /* 04F928 800D3F48 240E00FF */     addiu $t6, $zero, 0xff
  /* 04F92C 800D3F4C 460A3403 */     div.s $f16, $f6, $f10
  /* 04F930 800D3F50 46128102 */     mul.s $f4, $f16, $f18
  /* 04F934 800D3F54 4600220D */ trunc.w.s $f8, $f4
  /* 04F938 800D3F58 44024000 */      mfc1 $v0, $f8
  /* 04F93C 800D3F5C 57200003 */      bnel $t9, $zero, .L800D3F6C
  /* 04F940 800D3F60 8D850000 */        lw $a1, ($t4) # gpDisplayListHead + 0
  /* 04F944 800D3F64 01C21023 */      subu $v0, $t6, $v0
  /* 04F948 800D3F68 8D850000 */        lw $a1, ($t4) # gpDisplayListHead + 0
  .L800D3F6C:
  /* 04F94C 800D3F6C 3C0DE700 */       lui $t5, 0xe700
  /* 04F950 800D3F70 3C19E300 */       lui $t9, (0xE3000A01 >> 16) # 3808430593
  /* 04F954 800D3F74 24AF0008 */     addiu $t7, $a1, 8
  /* 04F958 800D3F78 AD8F0000 */        sw $t7, ($t4) # gpDisplayListHead + 0
  /* 04F95C 800D3F7C ACA00004 */        sw $zero, 4($a1)
  /* 04F960 800D3F80 ACAD0000 */        sw $t5, ($a1)
  /* 04F964 800D3F84 8D850000 */        lw $a1, ($t4) # gpDisplayListHead + 0
  /* 04F968 800D3F88 37390A01 */       ori $t9, $t9, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 04F96C 800D3F8C 3C0FFA00 */       lui $t7, 0xfa00
  /* 04F970 800D3F90 24B80008 */     addiu $t8, $a1, 8
  /* 04F974 800D3F94 AD980000 */        sw $t8, ($t4) # gpDisplayListHead + 0
  /* 04F978 800D3F98 ACA00004 */        sw $zero, 4($a1)
  /* 04F97C 800D3F9C ACB90000 */        sw $t9, ($a1)
  /* 04F980 800D3FA0 8D850000 */        lw $a1, ($t4) # gpDisplayListHead + 0
  /* 04F984 800D3FA4 24AE0008 */     addiu $t6, $a1, 8
  /* 04F988 800D3FA8 AD8E0000 */        sw $t6, ($t4) # gpDisplayListHead + 0
  /* 04F98C 800D3FAC ACAF0000 */        sw $t7, ($a1)
  /* 04F990 800D3FB0 90790000 */       lbu $t9, ($v1) # D_ovl0_800D646C + 0
  /* 04F994 800D3FB4 90780001 */       lbu $t8, 1($v1) # D_ovl0_800D646C + 1
  /* 04F998 800D3FB8 00197600 */       sll $t6, $t9, 0x18
  /* 04F99C 800D3FBC 0018CC00 */       sll $t9, $t8, 0x10
  /* 04F9A0 800D3FC0 01D97825 */        or $t7, $t6, $t9
  /* 04F9A4 800D3FC4 906E0002 */       lbu $t6, 2($v1) # D_ovl0_800D646C + 2
  /* 04F9A8 800D3FC8 000ECA00 */       sll $t9, $t6, 8
  /* 04F9AC 800D3FCC 01F9C025 */        or $t8, $t7, $t9
  /* 04F9B0 800D3FD0 304E00FF */      andi $t6, $v0, 0xff
  /* 04F9B4 800D3FD4 030E7825 */        or $t7, $t8, $t6
  /* 04F9B8 800D3FD8 ACAF0004 */        sw $t7, 4($a1)
  /* 04F9BC 800D3FDC 8D850000 */        lw $a1, ($t4) # gpDisplayListHead + 0
  /* 04F9C0 800D3FE0 3C0EFFFD */       lui $t6, (0xFFFDF6FB >> 16) # 4294833915
  /* 04F9C4 800D3FE4 3C18FCFF */       lui $t8, (0xFCFFFFFF >> 16) # 4244635647
  /* 04F9C8 800D3FE8 24B90008 */     addiu $t9, $a1, 8
  /* 04F9CC 800D3FEC AD990000 */        sw $t9, ($t4) # gpDisplayListHead + 0
  /* 04F9D0 800D3FF0 3718FFFF */       ori $t8, $t8, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 04F9D4 800D3FF4 35CEF6FB */       ori $t6, $t6, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 04F9D8 800D3FF8 ACAE0004 */        sw $t6, 4($a1)
  /* 04F9DC 800D3FFC ACB80000 */        sw $t8, ($a1)
  /* 04F9E0 800D4000 8D850000 */        lw $a1, ($t4) # gpDisplayListHead + 0
  /* 04F9E4 800D4004 3C180050 */       lui $t8, (0x504340 >> 16) # 5260096
  /* 04F9E8 800D4008 3C19E200 */       lui $t9, (0xE200001C >> 16) # 3791650844
  /* 04F9EC 800D400C 24AF0008 */     addiu $t7, $a1, 8
  /* 04F9F0 800D4010 AD8F0000 */        sw $t7, ($t4) # gpDisplayListHead + 0
  /* 04F9F4 800D4014 3739001C */       ori $t9, $t9, (0xE200001C & 0xFFFF) # 3791650844
  /* 04F9F8 800D4018 37184340 */       ori $t8, $t8, (0x504340 & 0xFFFF) # 5260096
  /* 04F9FC 800D401C ACB80004 */        sw $t8, 4($a1)
  /* 04FA00 800D4020 ACB90000 */        sw $t9, ($a1)
  /* 04FA04 800D4024 8D850000 */        lw $a1, ($t4) # gpDisplayListHead + 0
  /* 04FA08 800D4028 3C190002 */       lui $t9, (0x28028 >> 16) # 163880
  /* 04FA0C 800D402C 3C0FF64D */       lui $t7, (0xF64D8398 >> 16) # 4132275096
  /* 04FA10 800D4030 24AE0008 */     addiu $t6, $a1, 8
  /* 04FA14 800D4034 AD8E0000 */        sw $t6, ($t4) # gpDisplayListHead + 0
  /* 04FA18 800D4038 35EF8398 */       ori $t7, $t7, (0xF64D8398 & 0xFFFF) # 4132275096
  /* 04FA1C 800D403C 37398028 */       ori $t9, $t9, (0x28028 & 0xFFFF) # 163880
  /* 04FA20 800D4040 ACB90004 */        sw $t9, 4($a1)
  /* 04FA24 800D4044 ACAF0000 */        sw $t7, ($a1)
  /* 04FA28 800D4048 8D850000 */        lw $a1, ($t4) # gpDisplayListHead + 0
  /* 04FA2C 800D404C 24B80008 */     addiu $t8, $a1, 8
  /* 04FA30 800D4050 AD980000 */        sw $t8, ($t4) # gpDisplayListHead + 0
  /* 04FA34 800D4054 ACA00004 */        sw $zero, 4($a1)
  /* 04FA38 800D4058 03E00008 */        jr $ra
  /* 04FA3C 800D405C ACAD0000 */        sw $t5, ($a1)

glabel func_ovl0_800D4060
  /* 04FA40 800D4060 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 04FA44 800D4064 AFBF0024 */        sw $ra, 0x24($sp)
  /* 04FA48 800D4068 AFA50034 */        sw $a1, 0x34($sp)
  /* 04FA4C 800D406C AFA60038 */        sw $a2, 0x38($sp)
  /* 04FA50 800D4070 AFA7003C */        sw $a3, 0x3c($sp)
  /* 04FA54 800D4074 3C078000 */       lui $a3, 0x8000
  /* 04FA58 800D4078 93A60037 */       lbu $a2, 0x37($sp)
  /* 04FA5C 800D407C 0C00265A */       jal omMakeGObjCommon
  /* 04FA60 800D4080 00002825 */        or $a1, $zero, $zero
  /* 04FA64 800D4084 3C05800D */       lui $a1, %hi(func_ovl0_800D3F08)
  /* 04FA68 800D4088 240E0000 */     addiu $t6, $zero, 0
  /* 04FA6C 800D408C 240F0000 */     addiu $t7, $zero, 0
  /* 04FA70 800D4090 2418FFFF */     addiu $t8, $zero, -1
  /* 04FA74 800D4094 AFA2002C */        sw $v0, 0x2c($sp)
  /* 04FA78 800D4098 AFB80018 */        sw $t8, 0x18($sp)
  /* 04FA7C 800D409C AFAF0014 */        sw $t7, 0x14($sp)
  /* 04FA80 800D40A0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 04FA84 800D40A4 24A53F08 */     addiu $a1, $a1, %lo(func_ovl0_800D3F08)
  /* 04FA88 800D40A8 00402025 */        or $a0, $v0, $zero
  /* 04FA8C 800D40AC 0C0027DD */       jal func_80009F74
  /* 04FA90 800D40B0 8FA60038 */        lw $a2, 0x38($sp)
  /* 04FA94 800D40B4 3C05800D */       lui $a1, %hi(func_ovl0_800D3E80)
  /* 04FA98 800D40B8 24A53E80 */     addiu $a1, $a1, %lo(func_ovl0_800D3E80)
  /* 04FA9C 800D40BC 8FA4002C */        lw $a0, 0x2c($sp)
  /* 04FAA0 800D40C0 24060001 */     addiu $a2, $zero, 1
  /* 04FAA4 800D40C4 0C002062 */       jal omAddGObjCommonProc
  /* 04FAA8 800D40C8 00003825 */        or $a3, $zero, $zero
  /* 04FAAC 800D40CC 8FA8003C */        lw $t0, 0x3c($sp)
  /* 04FAB0 800D40D0 8FA30040 */        lw $v1, 0x40($sp)
  /* 04FAB4 800D40D4 3C19800D */       lui $t9, %hi(D_ovl0_800D646C)
  /* 04FAB8 800D40D8 890A0000 */       lwl $t2, ($t0)
  /* 04FABC 800D40DC 990A0003 */       lwr $t2, 3($t0)
  /* 04FAC0 800D40E0 2739646C */     addiu $t9, $t9, %lo(D_ovl0_800D646C)
  /* 04FAC4 800D40E4 3C01800D */       lui $at, %hi(D_ovl0_800D6460)
  /* 04FAC8 800D40E8 AF2A0000 */        sw $t2, ($t9) # D_ovl0_800D646C + 0
  /* 04FACC 800D40EC AC236460 */        sw $v1, %lo(D_ovl0_800D6460)($at)
  /* 04FAD0 800D40F0 3C01800D */       lui $at, %hi(D_ovl0_800D6464)
  /* 04FAD4 800D40F4 AC206464 */        sw $zero, %lo(D_ovl0_800D6464)($at)
  /* 04FAD8 800D40F8 8FAC0044 */        lw $t4, 0x44($sp)
  /* 04FADC 800D40FC 3C01800D */       lui $at, %hi(D_ovl0_800D6468)
  /* 04FAE0 800D4100 246B0002 */     addiu $t3, $v1, 2
  /* 04FAE4 800D4104 AC2B6468 */        sw $t3, %lo(D_ovl0_800D6468)($at)
  /* 04FAE8 800D4108 8FBF0024 */        lw $ra, 0x24($sp)
  /* 04FAEC 800D410C 3C01800D */       lui $at, %hi(D_ovl0_800D6474)
  /* 04FAF0 800D4110 8FAD0048 */        lw $t5, 0x48($sp)
  /* 04FAF4 800D4114 AC2C6474 */        sw $t4, %lo(D_ovl0_800D6474)($at)
  /* 04FAF8 800D4118 3C01800D */       lui $at, %hi(D_ovl0_800D6470)
  /* 04FAFC 800D411C 27BD0030 */     addiu $sp, $sp, 0x30
  /* 04FB00 800D4120 03E00008 */        jr $ra
  /* 04FB04 800D4124 AC2D6470 */        sw $t5, %lo(D_ovl0_800D6470)($at)

  /* 04FB08 800D4128 00000000 */       nop 
  /* 04FB0C 800D412C 00000000 */       nop 
