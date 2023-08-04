.include "macros.inc"

.section .data

glabel D_ovl0_800D5D60
  .incbin "ovl0.raw.bin", 0xE520, 0xB0

.section .rodata
# late rodate
glabel D_ovl0_800D62A0
  /* EA60 051C80 800D62A0 */
  .4byte 0x3fae8ba3 # .float 1.3636364

glabel D_ovl0_800D62A4
  /* EA64 051C84 800D62A4 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl0_800D62A8
  /* EA68 051C88 800D62A8 */
  .4byte 0x44898000 # .float 1100.0
  .incbin "ovl0.raw.bin", 0xEA6C, 0x4


.section .bss

# new file 0_3
glabel D_ovl0_unref800D6480
    .space 4
glabel D_ovl0_800D6484
    .space 4
glabel D_ovl0_800D6488
    .space 8


# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Likely start of new file
glabel func_ovl0_800D4130
  /* 04FB10 800D4130 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 04FB14 800D4134 AFB00028 */        sw $s0, 0x28($sp)
  /* 04FB18 800D4138 00A08025 */        or $s0, $a1, $zero
  /* 04FB1C 800D413C AFBF002C */        sw $ra, 0x2c($sp)
  /* 04FB20 800D4140 AFA60040 */        sw $a2, 0x40($sp)
  /* 04FB24 800D4144 320600FF */      andi $a2, $s0, 0xff
  /* 04FB28 800D4148 00002825 */        or $a1, $zero, $zero
  /* 04FB2C 800D414C 0C00265A */       jal omMakeGObjCommon
  /* 04FB30 800D4150 3C078000 */       lui $a3, 0x8000
  /* 04FB34 800D4154 8FAE0048 */        lw $t6, 0x48($sp)
  /* 04FB38 800D4158 8FAF004C */        lw $t7, 0x4c($sp)
  /* 04FB3C 800D415C 3C058001 */       lui $a1, %hi(func_80017DBC)
  /* 04FB40 800D4160 2418FFFF */     addiu $t8, $zero, -1
  /* 04FB44 800D4164 AFA20034 */        sw $v0, 0x34($sp)
  /* 04FB48 800D4168 AFB80018 */        sw $t8, 0x18($sp)
  /* 04FB4C 800D416C 24A57DBC */     addiu $a1, $a1, %lo(func_80017DBC)
  /* 04FB50 800D4170 00402025 */        or $a0, $v0, $zero
  /* 04FB54 800D4174 8FA60040 */        lw $a2, 0x40($sp)
  /* 04FB58 800D4178 AFAE0010 */        sw $t6, 0x10($sp)
  /* 04FB5C 800D417C 0C0027DD */       jal func_80009F74
  /* 04FB60 800D4180 AFAF0014 */        sw $t7, 0x14($sp)
  /* 04FB64 800D4184 0C0025D8 */       jal func_80009760
  /* 04FB68 800D4188 8FA40034 */        lw $a0, 0x34($sp)
  /* 04FB6C 800D418C 00408025 */        or $s0, $v0, $zero
  /* 04FB70 800D4190 00402025 */        or $a0, $v0, $zero
  /* 04FB74 800D4194 24050003 */     addiu $a1, $zero, 3
  /* 04FB78 800D4198 0C00233C */       jal func_80008CF0
  /* 04FB7C 800D419C 24060001 */     addiu $a2, $zero, 1
  /* 04FB80 800D41A0 02002025 */        or $a0, $s0, $zero
  /* 04FB84 800D41A4 24050006 */     addiu $a1, $zero, 6
  /* 04FB88 800D41A8 0C00233C */       jal func_80008CF0
  /* 04FB8C 800D41AC 24060001 */     addiu $a2, $zero, 1
  /* 04FB90 800D41B0 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 04FB94 800D41B4 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 04FB98 800D41B8 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 04FB9C 800D41BC 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 04FBA0 800D41C0 44050000 */      mfc1 $a1, $f0
  /* 04FBA4 800D41C4 44060000 */      mfc1 $a2, $f0
  /* 04FBA8 800D41C8 26040008 */     addiu $a0, $s0, 8
  /* 04FBAC 800D41CC 3C07439B */       lui $a3, 0x439b
  /* 04FBB0 800D41D0 0C001C20 */       jal func_80007080
  /* 04FBB4 800D41D4 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 04FBB8 800D41D8 3C014234 */       lui $at, (0x42340000 >> 16) # 45.0
  /* 04FBBC 800D41DC 44810000 */      mtc1 $at, $f0 # 45.0 to cop1
  /* 04FBC0 800D41E0 3C01800D */       lui $at, %hi(D_ovl0_800D62A0)
  /* 04FBC4 800D41E4 C42662A0 */      lwc1 $f6, %lo(D_ovl0_800D62A0)($at)
  /* 04FBC8 800D41E8 3C013F00 */       lui $at, (0x3F000000 >> 16) # 0.5
  /* 04FBCC 800D41EC 44814000 */      mtc1 $at, $f8 # 0.5 to cop1
  /* 04FBD0 800D41F0 3C01800D */       lui $at, %hi(D_ovl0_800D62A4)
  /* 04FBD4 800D41F4 E6000020 */      swc1 $f0, 0x20($s0)
  /* 04FBD8 800D41F8 46080282 */     mul.s $f10, $f0, $f8
  /* 04FBDC 800D41FC E6060024 */      swc1 $f6, 0x24($s0)
  /* 04FBE0 800D4200 C43062A4 */      lwc1 $f16, %lo(D_ovl0_800D62A4)($at)
  /* 04FBE4 800D4204 3C014334 */       lui $at, (0x43340000 >> 16) # 180.0
  /* 04FBE8 800D4208 44812000 */      mtc1 $at, $f4 # 180.0 to cop1
  /* 04FBEC 800D420C 46105482 */     mul.s $f18, $f10, $f16
  /* 04FBF0 800D4210 0C006138 */       jal tanf
  /* 04FBF4 800D4214 46049303 */     div.s $f12, $f18, $f4
  /* 04FBF8 800D4218 3C01800D */       lui $at, %hi(D_ovl0_800D62A8)
  /* 04FBFC 800D421C C42662A8 */      lwc1 $f6, %lo(D_ovl0_800D62A8)($at)
  /* 04FC00 800D4220 8E190080 */        lw $t9, 0x80($s0)
  /* 04FC04 800D4224 46003203 */     div.s $f8, $f6, $f0
  /* 04FC08 800D4228 37280005 */       ori $t0, $t9, 5
  /* 04FC0C 800D422C AE080080 */        sw $t0, 0x80($s0)
  /* 04FC10 800D4230 E6080044 */      swc1 $f8, 0x44($s0)
  /* 04FC14 800D4234 8FBF002C */        lw $ra, 0x2c($sp)
  /* 04FC18 800D4238 8FB00028 */        lw $s0, 0x28($sp)
  /* 04FC1C 800D423C 8FA20034 */        lw $v0, 0x34($sp)
  /* 04FC20 800D4240 03E00008 */        jr $ra
  /* 04FC24 800D4244 27BD0038 */     addiu $sp, $sp, 0x38

glabel func_ovl0_800D4248
  /* 04FC28 800D4248 3C068004 */       lui $a2, %hi(gpDisplayListHead)
  /* 04FC2C 800D424C 24C665B0 */     addiu $a2, $a2, %lo(gpDisplayListHead)
  /* 04FC30 800D4250 8CC20000 */        lw $v0, ($a2) # gpDisplayListHead + 0
  /* 04FC34 800D4254 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 04FC38 800D4258 AFBF0014 */        sw $ra, 0x14($sp)
  /* 04FC3C 800D425C 244E0008 */     addiu $t6, $v0, 8
  /* 04FC40 800D4260 ACCE0000 */        sw $t6, ($a2) # gpDisplayListHead + 0
  /* 04FC44 800D4264 3C0FE700 */       lui $t7, 0xe700
  /* 04FC48 800D4268 AC4F0000 */        sw $t7, ($v0)
  /* 04FC4C 800D426C AC400004 */        sw $zero, 4($v0)
  /* 04FC50 800D4270 8CC20000 */        lw $v0, ($a2) # gpDisplayListHead + 0
  /* 04FC54 800D4274 3C19DB06 */       lui $t9, (0xDB060004 >> 16) # 3674603524
  /* 04FC58 800D4278 37390004 */       ori $t9, $t9, (0xDB060004 & 0xFFFF) # 3674603524
  /* 04FC5C 800D427C 24580008 */     addiu $t8, $v0, 8
  /* 04FC60 800D4280 ACD80000 */        sw $t8, ($a2) # gpDisplayListHead + 0
  /* 04FC64 800D4284 3C08800D */       lui $t0, %hi(D_ovl0_800D6488)
  /* 04FC68 800D4288 AC590000 */        sw $t9, ($v0)
  /* 04FC6C 800D428C 8D086488 */        lw $t0, %lo(D_ovl0_800D6488)($t0)
  /* 04FC70 800D4290 0C00500E */       jal func_80014038
  /* 04FC74 800D4294 AC480004 */        sw $t0, 4($v0)
  /* 04FC78 800D4298 3C068004 */       lui $a2, %hi(gpDisplayListHead)
  /* 04FC7C 800D429C 24C665B0 */     addiu $a2, $a2, %lo(gpDisplayListHead)
  /* 04FC80 800D42A0 8CC20000 */        lw $v0, ($a2) # gpDisplayListHead + 0
  /* 04FC84 800D42A4 3C0AE700 */       lui $t2, 0xe700
  /* 04FC88 800D42A8 24490008 */     addiu $t1, $v0, 8
  /* 04FC8C 800D42AC ACC90000 */        sw $t1, ($a2) # gpDisplayListHead + 0
  /* 04FC90 800D42B0 AC400004 */        sw $zero, 4($v0)
  /* 04FC94 800D42B4 AC4A0000 */        sw $t2, ($v0)
  /* 04FC98 800D42B8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 04FC9C 800D42BC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 04FCA0 800D42C0 03E00008 */        jr $ra
  /* 04FCA4 800D42C4 00000000 */       nop 

glabel func_ovl0_800D42C8
  /* 04FCA8 800D42C8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 04FCAC 800D42CC AFBF0014 */        sw $ra, 0x14($sp)
  /* 04FCB0 800D42D0 0C0037CD */       jal func_8000DF34
  /* 04FCB4 800D42D4 AFA40018 */        sw $a0, 0x18($sp)
  /* 04FCB8 800D42D8 8FA40018 */        lw $a0, 0x18($sp)
  /* 04FCBC 800D42DC 44802000 */      mtc1 $zero, $f4
  /* 04FCC0 800D42E0 C4860078 */      lwc1 $f6, 0x78($a0)
  /* 04FCC4 800D42E4 4604303E */    c.le.s $f6, $f4
  /* 04FCC8 800D42E8 00000000 */       nop 
  /* 04FCCC 800D42EC 45020004 */     bc1fl .L800D4300
  /* 04FCD0 800D42F0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 04FCD4 800D42F4 0C0026A1 */       jal omEjectGObjCommon
  /* 04FCD8 800D42F8 00000000 */       nop 
  /* 04FCDC 800D42FC 8FBF0014 */        lw $ra, 0x14($sp)
  .L800D4300:
  /* 04FCE0 800D4300 27BD0018 */     addiu $sp, $sp, 0x18
  /* 04FCE4 800D4304 03E00008 */        jr $ra
  /* 04FCE8 800D4308 00000000 */       nop 

glabel func_ovl0_800D430C
  /* 04FCEC 800D430C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 04FCF0 800D4310 3C0F800D */       lui $t7, %hi(D_ovl0_800D5D60)
  /* 04FCF4 800D4314 AFB0001C */        sw $s0, 0x1c($sp)
  /* 04FCF8 800D4318 AFA5002C */        sw $a1, 0x2c($sp)
  /* 04FCFC 800D431C 25EF5D60 */     addiu $t7, $t7, %lo(D_ovl0_800D5D60)
  /* 04FD00 800D4320 00047100 */       sll $t6, $a0, 4
  /* 04FD04 800D4324 AFBF0024 */        sw $ra, 0x24($sp)
  /* 04FD08 800D4328 01CF8021 */      addu $s0, $t6, $t7
  /* 04FD0C 800D432C 3C05800D */       lui $a1, %hi(D_ovl0_800D6484)
  /* 04FD10 800D4330 AFB10020 */        sw $s1, 0x20($sp)
  /* 04FD14 800D4334 AFA60030 */        sw $a2, 0x30($sp)
  /* 04FD18 800D4338 AFA70034 */        sw $a3, 0x34($sp)
  /* 04FD1C 800D433C 8CA56484 */        lw $a1, %lo(D_ovl0_800D6484)($a1)
  /* 04FD20 800D4340 0C033722 */       jal rldm_get_file_with_external_heap
  /* 04FD24 800D4344 8E040000 */        lw $a0, ($s0)
  /* 04FD28 800D4348 8FA4002C */        lw $a0, 0x2c($sp)
  /* 04FD2C 800D434C 00002825 */        or $a1, $zero, $zero
  /* 04FD30 800D4350 93A60033 */       lbu $a2, 0x33($sp)
  /* 04FD34 800D4354 0C00265A */       jal omMakeGObjCommon
  /* 04FD38 800D4358 3C078000 */       lui $a3, 0x8000
  /* 04FD3C 800D435C 8E18000C */        lw $t8, 0xc($s0)
  /* 04FD40 800D4360 2419FFFF */     addiu $t9, $zero, -1
  /* 04FD44 800D4364 00408825 */        or $s1, $v0, $zero
  /* 04FD48 800D4368 AC580084 */        sw $t8, 0x84($v0)
  /* 04FD4C 800D436C AFB90010 */        sw $t9, 0x10($sp)
  /* 04FD50 800D4370 93A6003B */       lbu $a2, 0x3b($sp)
  /* 04FD54 800D4374 8FA50034 */        lw $a1, 0x34($sp)
  /* 04FD58 800D4378 00402025 */        or $a0, $v0, $zero
  /* 04FD5C 800D437C 0C00277D */       jal func_80009DF4
  /* 04FD60 800D4380 3C078000 */       lui $a3, 0x8000
  /* 04FD64 800D4384 3C09800D */       lui $t1, %hi(D_ovl0_800D6484)
  /* 04FD68 800D4388 8D296484 */        lw $t1, %lo(D_ovl0_800D6484)($t1)
  /* 04FD6C 800D438C 8E080004 */        lw $t0, 4($s0)
  /* 04FD70 800D4390 02202025 */        or $a0, $s1, $zero
  /* 04FD74 800D4394 00003025 */        or $a2, $zero, $zero
  /* 04FD78 800D4398 2407001C */     addiu $a3, $zero, 0x1c
  /* 04FD7C 800D439C AFA00010 */        sw $zero, 0x10($sp)
  /* 04FD80 800D43A0 AFA00014 */        sw $zero, 0x14($sp)
  /* 04FD84 800D43A4 0C003D64 */       jal func_8000F590
  /* 04FD88 800D43A8 01092821 */      addu $a1, $t0, $t1
  /* 04FD8C 800D43AC 8E020008 */        lw $v0, 8($s0)
  /* 04FD90 800D43B0 02202025 */        or $a0, $s1, $zero
  /* 04FD94 800D43B4 3C0A800D */       lui $t2, %hi(D_ovl0_800D6484)
  /* 04FD98 800D43B8 50400008 */      beql $v0, $zero, .L800D43DC
  /* 04FD9C 800D43BC 02202025 */        or $a0, $s1, $zero
  /* 04FDA0 800D43C0 8D4A6484 */        lw $t2, %lo(D_ovl0_800D6484)($t2)
  /* 04FDA4 800D43C4 24060000 */     addiu $a2, $zero, 0
  /* 04FDA8 800D43C8 0C002F63 */       jal func_8000BD8C
  /* 04FDAC 800D43CC 004A2821 */      addu $a1, $v0, $t2
  /* 04FDB0 800D43D0 0C0037CD */       jal func_8000DF34
  /* 04FDB4 800D43D4 02202025 */        or $a0, $s1, $zero
  /* 04FDB8 800D43D8 02202025 */        or $a0, $s1, $zero
  .L800D43DC:
  /* 04FDBC 800D43DC 8FA5003C */        lw $a1, 0x3c($sp)
  /* 04FDC0 800D43E0 24060001 */     addiu $a2, $zero, 1
  /* 04FDC4 800D43E4 0C002062 */       jal omAddGObjCommonProc
  /* 04FDC8 800D43E8 24070001 */     addiu $a3, $zero, 1
  /* 04FDCC 800D43EC 8FBF0024 */        lw $ra, 0x24($sp)
  /* 04FDD0 800D43F0 02201025 */        or $v0, $s1, $zero
  /* 04FDD4 800D43F4 8FB10020 */        lw $s1, 0x20($sp)
  /* 04FDD8 800D43F8 8FB0001C */        lw $s0, 0x1c($sp)
  /* 04FDDC 800D43FC 03E00008 */        jr $ra
  /* 04FDE0 800D4400 27BD0028 */     addiu $sp, $sp, 0x28

glabel func_ovl0_800D4404
  /* 04FDE4 800D4404 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 04FDE8 800D4408 AFB20020 */        sw $s2, 0x20($sp)
  /* 04FDEC 800D440C AFB00018 */        sw $s0, 0x18($sp)
  /* 04FDF0 800D4410 AFB1001C */        sw $s1, 0x1c($sp)
  /* 04FDF4 800D4414 3C10800D */       lui $s0, %hi(D_ovl0_800D5D60)
  /* 04FDF8 800D4418 3C12800D */       lui $s2, %hi(D_ovl0_800D5D60 + 0xB0)
  /* 04FDFC 800D441C AFBF0024 */        sw $ra, 0x24($sp)
  /* 04FE00 800D4420 00008825 */        or $s1, $zero, $zero
  /* 04FE04 800D4424 26525E10 */     addiu $s2, $s2, %lo(D_ovl0_800D5D60 + 0xB0)
  /* 04FE08 800D4428 26105D60 */     addiu $s0, $s0, %lo(D_ovl0_800D5D60)
  .L800D442C:
  /* 04FE0C 800D442C 0C0336F4 */       jal rldm_bytes_needed_to_load
  /* 04FE10 800D4430 8E040000 */        lw $a0, ($s0) # D_ovl0_800D5D60 + 0
  /* 04FE14 800D4434 0222082B */      sltu $at, $s1, $v0
  /* 04FE18 800D4438 10200002 */      beqz $at, .L800D4444
  /* 04FE1C 800D443C 26100010 */     addiu $s0, $s0, 0x10
  /* 04FE20 800D4440 00408825 */        or $s1, $v0, $zero
  .L800D4444:
  /* 04FE24 800D4444 0212082B */      sltu $at, $s0, $s2
  /* 04FE28 800D4448 1420FFF8 */      bnez $at, .L800D442C
  /* 04FE2C 800D444C 00000000 */       nop 
  /* 04FE30 800D4450 02202025 */        or $a0, $s1, $zero
  /* 04FE34 800D4454 0C001260 */       jal hal_alloc
  /* 04FE38 800D4458 24050010 */     addiu $a1, $zero, 0x10
  /* 04FE3C 800D445C 3C01800D */       lui $at, %hi(D_ovl0_800D6484)
  /* 04FE40 800D4460 3C040002 */       lui $a0, (0x203A0 >> 16) # 132000
  /* 04FE44 800D4464 AC226484 */        sw $v0, %lo(D_ovl0_800D6484)($at)
  /* 04FE48 800D4468 348403A0 */       ori $a0, $a0, (0x203A0 & 0xFFFF) # 132000
  /* 04FE4C 800D446C 0C001260 */       jal hal_alloc
  /* 04FE50 800D4470 24050010 */     addiu $a1, $zero, 0x10
  /* 04FE54 800D4474 3C05800D */       lui $a1, %hi(D_ovl0_800D6488)
  /* 04FE58 800D4478 24A56488 */     addiu $a1, $a1, %lo(D_ovl0_800D6488)
  /* 04FE5C 800D447C ACA20000 */        sw $v0, ($a1) # D_ovl0_800D6488 + 0
  /* 04FE60 800D4480 3C038004 */       lui $v1, %hi(D_80044FA8)
  /* 04FE64 800D4484 8C634FA8 */        lw $v1, %lo(D_80044FA8)($v1)
  /* 04FE68 800D4488 3C010002 */       lui $at, (0x23F14 >> 16) # 147220
  /* 04FE6C 800D448C 34213F14 */       ori $at, $at, (0x23F14 & 0xFFFF) # 147220
  /* 04FE70 800D4490 00402025 */        or $a0, $v0, $zero
  /* 04FE74 800D4494 24050096 */     addiu $a1, $zero, 0x96
  /* 04FE78 800D4498 00003025 */        or $a2, $zero, $zero
  /* 04FE7C 800D449C 240700DC */     addiu $a3, $zero, 0xdc
  /* 04FE80 800D44A0 00611821 */      addu $v1, $v1, $at
  .L800D44A4:
  /* 04FE84 800D44A4 8C6E0000 */        lw $t6, ($v1)
  /* 04FE88 800D44A8 24C60001 */     addiu $a2, $a2, 1
  /* 04FE8C 800D44AC 24840008 */     addiu $a0, $a0, 8
  /* 04FE90 800D44B0 AC8EFFF8 */        sw $t6, -8($a0)
  /* 04FE94 800D44B4 8C6F0004 */        lw $t7, 4($v1)
  /* 04FE98 800D44B8 24630008 */     addiu $v1, $v1, 8
  /* 04FE9C 800D44BC 24020002 */     addiu $v0, $zero, 2
  /* 04FEA0 800D44C0 AC8FFFFC */        sw $t7, -4($a0)
  .L800D44C4:
  /* 04FEA4 800D44C4 8C780000 */        lw $t8, ($v1)
  /* 04FEA8 800D44C8 24420004 */     addiu $v0, $v0, 4
  /* 04FEAC 800D44CC 24840010 */     addiu $a0, $a0, 0x10
  /* 04FEB0 800D44D0 AC98FFF0 */        sw $t8, -0x10($a0)
  /* 04FEB4 800D44D4 8C790004 */        lw $t9, 4($v1)
  /* 04FEB8 800D44D8 24630010 */     addiu $v1, $v1, 0x10
  /* 04FEBC 800D44DC AC99FFF4 */        sw $t9, -0xc($a0)
  /* 04FEC0 800D44E0 8C68FFF8 */        lw $t0, -8($v1)
  /* 04FEC4 800D44E4 AC88FFF8 */        sw $t0, -8($a0)
  /* 04FEC8 800D44E8 8C69FFFC */        lw $t1, -4($v1)
  /* 04FECC 800D44EC 1445FFF5 */       bne $v0, $a1, .L800D44C4
  /* 04FED0 800D44F0 AC89FFFC */        sw $t1, -4($a0)
  /* 04FED4 800D44F4 14C7FFEB */       bne $a2, $a3, .L800D44A4
  /* 04FED8 800D44F8 2463FB28 */     addiu $v1, $v1, -0x4d8
  /* 04FEDC 800D44FC 8FBF0024 */        lw $ra, 0x24($sp)
  /* 04FEE0 800D4500 8FB00018 */        lw $s0, 0x18($sp)
  /* 04FEE4 800D4504 8FB1001C */        lw $s1, 0x1c($sp)
  /* 04FEE8 800D4508 8FB20020 */        lw $s2, 0x20($sp)
  /* 04FEEC 800D450C 03E00008 */        jr $ra
  /* 04FEF0 800D4510 27BD0028 */     addiu $sp, $sp, 0x28

  /* 04FEF4 800D4514 00000000 */       nop 
  /* 04FEF8 800D4518 00000000 */       nop 
  /* 04FEFC 800D451C 00000000 */       nop 
