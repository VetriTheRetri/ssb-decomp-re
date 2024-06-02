.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80131B00 -> 0x80132640

glabel func_ovl52_80131B00
  /* 1752C0 80131B00 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 1752C4 80131B04 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1752C8 80131B08 8C830000 */        lw $v1, ($a0)
  /* 1752CC 80131B0C 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 1752D0 80131B10 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 1752D4 80131B14 246E0008 */     addiu $t6, $v1, 8
  /* 1752D8 80131B18 AC8E0000 */        sw $t6, ($a0)
  /* 1752DC 80131B1C 3C180002 */       lui $t8, 2
  /* 1752E0 80131B20 AC780004 */        sw $t8, 4($v1)
  /* 1752E4 80131B24 AC6F0000 */        sw $t7, ($v1)
  /* 1752E8 80131B28 0C0E4147 */       jal func_ovl1_8039051C
  /* 1752EC 80131B2C AFA40028 */        sw $a0, 0x28($sp)
  /* 1752F0 80131B30 0C0E414A */       jal func_ovl1_80390528
  /* 1752F4 80131B34 E7A0001C */      swc1 $f0, 0x1c($sp)
  /* 1752F8 80131B38 44060000 */      mfc1 $a2, $f0
  /* 1752FC 80131B3C 8FA40028 */        lw $a0, 0x28($sp)
  /* 175300 80131B40 0C03F2DC */       jal ftRender_Lights_DisplayLightReflect
  /* 175304 80131B44 8FA5001C */        lw $a1, 0x1c($sp)
  /* 175308 80131B48 8FBF0014 */        lw $ra, 0x14($sp)
  /* 17530C 80131B4C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 175310 80131B50 03E00008 */        jr $ra
  /* 175314 80131B54 00000000 */       nop 

glabel func_ovl52_80131B58
  /* 175318 80131B58 24010004 */     addiu $at, $zero, 4
  /* 17531C 80131B5C 10810027 */       beq $a0, $at, .L80131BFC
  /* 175320 80131B60 3C0A8013 */       lui $t2, 0x8013
  /* 175324 80131B64 24010007 */     addiu $at, $zero, 7
  /* 175328 80131B68 10810009 */       beq $a0, $at, .L80131B90
  /* 17532C 80131B6C 3C0E8013 */       lui $t6, %hi(D_ovl52_80132750)
  /* 175330 80131B70 2401000A */     addiu $at, $zero, 0xa
  /* 175334 80131B74 10810018 */       beq $a0, $at, .L80131BD8
  /* 175338 80131B78 3C088013 */       lui $t0, 0x8013
  /* 17533C 80131B7C 2401000B */     addiu $at, $zero, 0xb
  /* 175340 80131B80 1081000C */       beq $a0, $at, .L80131BB4
  /* 175344 80131B84 3C188013 */       lui $t8, 0x8013
  /* 175348 80131B88 10000025 */         b .L80131C20
  /* 17534C 80131B8C 00001025 */        or $v0, $zero, $zero
  .L80131B90:
  /* 175350 80131B90 95CE2750 */       lhu $t6, %lo(D_ovl52_80132750)($t6)
  /* 175354 80131B94 24030001 */     addiu $v1, $zero, 1
  /* 175358 80131B98 31CF0080 */      andi $t7, $t6, 0x80
  /* 17535C 80131B9C 11E00003 */      beqz $t7, .L80131BAC
  /* 175360 80131BA0 00000000 */       nop 
  /* 175364 80131BA4 03E00008 */        jr $ra
  /* 175368 80131BA8 00001025 */        or $v0, $zero, $zero

  .L80131BAC:
  /* 17536C 80131BAC 03E00008 */        jr $ra
  /* 175370 80131BB0 00601025 */        or $v0, $v1, $zero

  .L80131BB4:
  /* 175374 80131BB4 97182750 */       lhu $t8, 0x2750($t8)
  /* 175378 80131BB8 24030001 */     addiu $v1, $zero, 1
  /* 17537C 80131BBC 33190800 */      andi $t9, $t8, 0x800
  /* 175380 80131BC0 13200003 */      beqz $t9, .L80131BD0
  /* 175384 80131BC4 00000000 */       nop 
  /* 175388 80131BC8 03E00008 */        jr $ra
  /* 17538C 80131BCC 00001025 */        or $v0, $zero, $zero

  .L80131BD0:
  /* 175390 80131BD0 03E00008 */        jr $ra
  /* 175394 80131BD4 00601025 */        or $v0, $v1, $zero

  .L80131BD8:
  /* 175398 80131BD8 95082750 */       lhu $t0, 0x2750($t0)
  /* 17539C 80131BDC 24030001 */     addiu $v1, $zero, 1
  /* 1753A0 80131BE0 31090400 */      andi $t1, $t0, 0x400
  /* 1753A4 80131BE4 11200003 */      beqz $t1, .L80131BF4
  /* 1753A8 80131BE8 00000000 */       nop 
  /* 1753AC 80131BEC 03E00008 */        jr $ra
  /* 1753B0 80131BF0 00001025 */        or $v0, $zero, $zero

  .L80131BF4:
  /* 1753B4 80131BF4 03E00008 */        jr $ra
  /* 1753B8 80131BF8 00601025 */        or $v0, $v1, $zero

  .L80131BFC:
  /* 1753BC 80131BFC 954A2750 */       lhu $t2, 0x2750($t2)
  /* 1753C0 80131C00 24030001 */     addiu $v1, $zero, 1
  /* 1753C4 80131C04 314B0010 */      andi $t3, $t2, 0x10
  /* 1753C8 80131C08 11600003 */      beqz $t3, .L80131C18
  /* 1753CC 80131C0C 00000000 */       nop 
  /* 1753D0 80131C10 03E00008 */        jr $ra
  /* 1753D4 80131C14 00001025 */        or $v0, $zero, $zero

  .L80131C18:
  /* 1753D8 80131C18 03E00008 */        jr $ra
  /* 1753DC 80131C1C 00601025 */        or $v0, $v1, $zero

  .L80131C20:
  /* 1753E0 80131C20 03E00008 */        jr $ra
  /* 1753E4 80131C24 00000000 */       nop 

  /* 1753E8 80131C28 03E00008 */        jr $ra
  /* 1753EC 80131C2C 00000000 */       nop 

  /* 1753F0 80131C30 03E00008 */        jr $ra
  /* 1753F4 80131C34 00000000 */       nop 

glabel func_ovl52_80131C38
  /* 1753F8 80131C38 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 1753FC 80131C3C AFBF0024 */        sw $ra, 0x24($sp)
  /* 175400 80131C40 AFB00020 */        sw $s0, 0x20($sp)
  /* 175404 80131C44 00002025 */        or $a0, $zero, $zero
  /* 175408 80131C48 00002825 */        or $a1, $zero, $zero
  /* 17540C 80131C4C 24060013 */     addiu $a2, $zero, 0x13
  /* 175410 80131C50 0C00265A */       jal omMakeGObjSPAfter
  /* 175414 80131C54 3C078000 */       lui $a3, 0x8000
  /* 175418 80131C58 00408025 */        or $s0, $v0, $zero
  /* 17541C 80131C5C 0C04C6D6 */       jal func_ovl52_80131B58
  /* 175420 80131C60 2404000A */     addiu $a0, $zero, 0xa
  /* 175424 80131C64 1040000A */      beqz $v0, .L80131C90
  /* 175428 80131C68 02002025 */        or $a0, $s0, $zero
  /* 17542C 80131C6C 3C0E8013 */       lui $t6, %hi(D_ovl52_80132910)
  /* 175430 80131C70 8DCE2910 */        lw $t6, %lo(D_ovl52_80132910)($t6)
  /* 175434 80131C74 3C0F0002 */       lui $t7, %hi(D_NF_000203A8)
  /* 175438 80131C78 25EF03A8 */     addiu $t7, $t7, %lo(D_NF_000203A8)
  /* 17543C 80131C7C 02002025 */        or $a0, $s0, $zero
  /* 175440 80131C80 0C0024B4 */       jal omAddDObjForGObj
  /* 175444 80131C84 01CF2821 */      addu $a1, $t6, $t7
  /* 175448 80131C88 10000008 */         b .L80131CAC
  /* 17544C 80131C8C AFA20028 */        sw $v0, 0x28($sp)
  .L80131C90:
  /* 175450 80131C90 3C188013 */       lui $t8, %hi(D_ovl52_80132910)
  /* 175454 80131C94 8F182910 */        lw $t8, %lo(D_ovl52_80132910)($t8)
  /* 175458 80131C98 3C190000 */       lui $t9, %hi(D_NF_00005C28)
  /* 17545C 80131C9C 27395C28 */     addiu $t9, $t9, %lo(D_NF_00005C28)
  /* 175460 80131CA0 0C0024B4 */       jal omAddDObjForGObj
  /* 175464 80131CA4 03192821 */      addu $a1, $t8, $t9
  /* 175468 80131CA8 AFA20028 */        sw $v0, 0x28($sp)
  .L80131CAC:
  /* 17546C 80131CAC 8FA40028 */        lw $a0, 0x28($sp)
  /* 175470 80131CB0 2405001C */     addiu $a1, $zero, 0x1c
  /* 175474 80131CB4 0C002330 */       jal omAddOMMtxForDObjFixed
  /* 175478 80131CB8 00003025 */        or $a2, $zero, $zero
  /* 17547C 80131CBC 3C058001 */       lui $a1, %hi(odRenderDObjDLHead1)
  /* 175480 80131CC0 2408FFFF */     addiu $t0, $zero, -1
  /* 175484 80131CC4 AFA80010 */        sw $t0, 0x10($sp)
  /* 175488 80131CC8 24A53E8C */     addiu $a1, $a1, %lo(odRenderDObjDLHead1)
  /* 17548C 80131CCC 02002025 */        or $a0, $s0, $zero
  /* 175490 80131CD0 2406001B */     addiu $a2, $zero, 0x1b
  /* 175494 80131CD4 0C00277D */       jal omAddGObjRenderProc
  /* 175498 80131CD8 3C078000 */       lui $a3, 0x8000
  /* 17549C 80131CDC 3C098013 */       lui $t1, %hi(D_ovl52_80132910)
  /* 1754A0 80131CE0 8D292910 */        lw $t1, %lo(D_ovl52_80132910)($t1)
  /* 1754A4 80131CE4 3C0A0000 */       lui $t2, %hi(D_NF_00005E44)
  /* 1754A8 80131CE8 254A5E44 */     addiu $t2, $t2, %lo(D_NF_00005E44)
  /* 1754AC 80131CEC 8FA40028 */        lw $a0, 0x28($sp)
  /* 1754B0 80131CF0 24060000 */     addiu $a2, $zero, 0
  /* 1754B4 80131CF4 0C002F47 */       jal omAddDObjAnimAll
  /* 1754B8 80131CF8 012A2821 */      addu $a1, $t1, $t2
  /* 1754BC 80131CFC 3C058001 */       lui $a1, %hi(func_8000DF34)
  /* 1754C0 80131D00 24A5DF34 */     addiu $a1, $a1, %lo(func_8000DF34)
  /* 1754C4 80131D04 02002025 */        or $a0, $s0, $zero
  /* 1754C8 80131D08 24060001 */     addiu $a2, $zero, 1
  /* 1754CC 80131D0C 0C002062 */       jal omAddGObjCommonProc
  /* 1754D0 80131D10 24070001 */     addiu $a3, $zero, 1
  /* 1754D4 80131D14 8FBF0024 */        lw $ra, 0x24($sp)
  /* 1754D8 80131D18 8FB00020 */        lw $s0, 0x20($sp)
  /* 1754DC 80131D1C 27BD0030 */     addiu $sp, $sp, 0x30
  /* 1754E0 80131D20 03E00008 */        jr $ra
  /* 1754E4 80131D24 00000000 */       nop 

glabel func_ovl52_80131D28
  /* 1754E8 80131D28 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 1754EC 80131D2C AFBF0024 */        sw $ra, 0x24($sp)
  /* 1754F0 80131D30 AFB00020 */        sw $s0, 0x20($sp)
  /* 1754F4 80131D34 00002025 */        or $a0, $zero, $zero
  /* 1754F8 80131D38 00002825 */        or $a1, $zero, $zero
  /* 1754FC 80131D3C 24060013 */     addiu $a2, $zero, 0x13
  /* 175500 80131D40 0C00265A */       jal omMakeGObjSPAfter
  /* 175504 80131D44 3C078000 */       lui $a3, 0x8000
  /* 175508 80131D48 00408025 */        or $s0, $v0, $zero
  /* 17550C 80131D4C 0C04C6D6 */       jal func_ovl52_80131B58
  /* 175510 80131D50 24040007 */     addiu $a0, $zero, 7
  /* 175514 80131D54 1040000A */      beqz $v0, .L80131D80
  /* 175518 80131D58 02002025 */        or $a0, $s0, $zero
  /* 17551C 80131D5C 3C0E8013 */       lui $t6, %hi(D_ovl52_80132914)
  /* 175520 80131D60 8DCE2914 */        lw $t6, %lo(D_ovl52_80132914)($t6)
  /* 175524 80131D64 3C0F0003 */       lui $t7, %hi(D_NF_000355C0)
  /* 175528 80131D68 25EF55C0 */     addiu $t7, $t7, %lo(D_NF_000355C0)
  /* 17552C 80131D6C 02002025 */        or $a0, $s0, $zero
  /* 175530 80131D70 0C0024B4 */       jal omAddDObjForGObj
  /* 175534 80131D74 01CF2821 */      addu $a1, $t6, $t7
  /* 175538 80131D78 10000008 */         b .L80131D9C
  /* 17553C 80131D7C AFA20028 */        sw $v0, 0x28($sp)
  .L80131D80:
  /* 175540 80131D80 3C188013 */       lui $t8, %hi(D_ovl52_80132914)
  /* 175544 80131D84 8F182914 */        lw $t8, %lo(D_ovl52_80132914)($t8)
  /* 175548 80131D88 3C190002 */       lui $t9, %hi(D_NF_0001C238)
  /* 17554C 80131D8C 2739C238 */     addiu $t9, $t9, %lo(D_NF_0001C238)
  /* 175550 80131D90 0C0024B4 */       jal omAddDObjForGObj
  /* 175554 80131D94 03192821 */      addu $a1, $t8, $t9
  /* 175558 80131D98 AFA20028 */        sw $v0, 0x28($sp)
  .L80131D9C:
  /* 17555C 80131D9C 8FA40028 */        lw $a0, 0x28($sp)
  /* 175560 80131DA0 2405001C */     addiu $a1, $zero, 0x1c
  /* 175564 80131DA4 0C002330 */       jal omAddOMMtxForDObjFixed
  /* 175568 80131DA8 00003025 */        or $a2, $zero, $zero
  /* 17556C 80131DAC 3C058001 */       lui $a1, %hi(odRenderDObjDLHead1)
  /* 175570 80131DB0 2408FFFF */     addiu $t0, $zero, -1
  /* 175574 80131DB4 AFA80010 */        sw $t0, 0x10($sp)
  /* 175578 80131DB8 24A53E8C */     addiu $a1, $a1, %lo(odRenderDObjDLHead1)
  /* 17557C 80131DBC 02002025 */        or $a0, $s0, $zero
  /* 175580 80131DC0 2406001B */     addiu $a2, $zero, 0x1b
  /* 175584 80131DC4 0C00277D */       jal omAddGObjRenderProc
  /* 175588 80131DC8 3C078000 */       lui $a3, 0x8000
  /* 17558C 80131DCC 3C098013 */       lui $t1, %hi(D_ovl52_80132914)
  /* 175590 80131DD0 8D292914 */        lw $t1, %lo(D_ovl52_80132914)($t1)
  /* 175594 80131DD4 3C0A0002 */       lui $t2, %hi(D_NF_0001C9D4)
  /* 175598 80131DD8 254AC9D4 */     addiu $t2, $t2, %lo(D_NF_0001C9D4)
  /* 17559C 80131DDC 8FA40028 */        lw $a0, 0x28($sp)
  /* 1755A0 80131DE0 24060000 */     addiu $a2, $zero, 0
  /* 1755A4 80131DE4 0C002F47 */       jal omAddDObjAnimAll
  /* 1755A8 80131DE8 012A2821 */      addu $a1, $t1, $t2
  /* 1755AC 80131DEC 3C058001 */       lui $a1, %hi(func_8000DF34)
  /* 1755B0 80131DF0 24A5DF34 */     addiu $a1, $a1, %lo(func_8000DF34)
  /* 1755B4 80131DF4 02002025 */        or $a0, $s0, $zero
  /* 1755B8 80131DF8 24060001 */     addiu $a2, $zero, 1
  /* 1755BC 80131DFC 0C002062 */       jal omAddGObjCommonProc
  /* 1755C0 80131E00 24070001 */     addiu $a3, $zero, 1
  /* 1755C4 80131E04 8FBF0024 */        lw $ra, 0x24($sp)
  /* 1755C8 80131E08 8FB00020 */        lw $s0, 0x20($sp)
  /* 1755CC 80131E0C 27BD0030 */     addiu $sp, $sp, 0x30
  /* 1755D0 80131E10 03E00008 */        jr $ra
  /* 1755D4 80131E14 00000000 */       nop 

glabel func_ovl52_80131E18
  /* 1755D8 80131E18 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 1755DC 80131E1C AFBF0024 */        sw $ra, 0x24($sp)
  /* 1755E0 80131E20 AFB00020 */        sw $s0, 0x20($sp)
  /* 1755E4 80131E24 00002025 */        or $a0, $zero, $zero
  /* 1755E8 80131E28 00002825 */        or $a1, $zero, $zero
  /* 1755EC 80131E2C 24060013 */     addiu $a2, $zero, 0x13
  /* 1755F0 80131E30 0C00265A */       jal omMakeGObjSPAfter
  /* 1755F4 80131E34 3C078000 */       lui $a3, 0x8000
  /* 1755F8 80131E38 00408025 */        or $s0, $v0, $zero
  /* 1755FC 80131E3C 0C04C6D6 */       jal func_ovl52_80131B58
  /* 175600 80131E40 24040004 */     addiu $a0, $zero, 4
  /* 175604 80131E44 1040000A */      beqz $v0, .L80131E70
  /* 175608 80131E48 02002025 */        or $a0, $s0, $zero
  /* 17560C 80131E4C 3C0E8013 */       lui $t6, %hi(D_ovl52_80132910)
  /* 175610 80131E50 8DCE2910 */        lw $t6, %lo(D_ovl52_80132910)($t6)
  /* 175614 80131E54 3C0F0003 */       lui $t7, %hi(D_NF_00028C28)
  /* 175618 80131E58 25EF8C28 */     addiu $t7, $t7, %lo(D_NF_00028C28)
  /* 17561C 80131E5C 02002025 */        or $a0, $s0, $zero
  /* 175620 80131E60 0C0024B4 */       jal omAddDObjForGObj
  /* 175624 80131E64 01CF2821 */      addu $a1, $t6, $t7
  /* 175628 80131E68 10000008 */         b .L80131E8C
  /* 17562C 80131E6C AFA20028 */        sw $v0, 0x28($sp)
  .L80131E70:
  /* 175630 80131E70 3C188013 */       lui $t8, %hi(D_ovl52_80132910)
  /* 175634 80131E74 8F182910 */        lw $t8, %lo(D_ovl52_80132910)($t8)
  /* 175638 80131E78 3C190002 */       lui $t9, %hi(D_NF_0001C838)
  /* 17563C 80131E7C 2739C838 */     addiu $t9, $t9, %lo(D_NF_0001C838)
  /* 175640 80131E80 0C0024B4 */       jal omAddDObjForGObj
  /* 175644 80131E84 03192821 */      addu $a1, $t8, $t9
  /* 175648 80131E88 AFA20028 */        sw $v0, 0x28($sp)
  .L80131E8C:
  /* 17564C 80131E8C 8FA40028 */        lw $a0, 0x28($sp)
  /* 175650 80131E90 2405001C */     addiu $a1, $zero, 0x1c
  /* 175654 80131E94 0C002330 */       jal omAddOMMtxForDObjFixed
  /* 175658 80131E98 00003025 */        or $a2, $zero, $zero
  /* 17565C 80131E9C 3C058001 */       lui $a1, %hi(odRenderDObjDLHead1)
  /* 175660 80131EA0 2408FFFF */     addiu $t0, $zero, -1
  /* 175664 80131EA4 AFA80010 */        sw $t0, 0x10($sp)
  /* 175668 80131EA8 24A53E8C */     addiu $a1, $a1, %lo(odRenderDObjDLHead1)
  /* 17566C 80131EAC 02002025 */        or $a0, $s0, $zero
  /* 175670 80131EB0 2406001B */     addiu $a2, $zero, 0x1b
  /* 175674 80131EB4 0C00277D */       jal omAddGObjRenderProc
  /* 175678 80131EB8 3C078000 */       lui $a3, 0x8000
  /* 17567C 80131EBC 3C098013 */       lui $t1, %hi(D_ovl52_80132910)
  /* 175680 80131EC0 8D292910 */        lw $t1, %lo(D_ovl52_80132910)($t1)
  /* 175684 80131EC4 3C0A0002 */       lui $t2, %hi(D_NF_0001CE94)
  /* 175688 80131EC8 254ACE94 */     addiu $t2, $t2, %lo(D_NF_0001CE94)
  /* 17568C 80131ECC 8FA40028 */        lw $a0, 0x28($sp)
  /* 175690 80131ED0 24060000 */     addiu $a2, $zero, 0
  /* 175694 80131ED4 0C002F47 */       jal omAddDObjAnimAll
  /* 175698 80131ED8 012A2821 */      addu $a1, $t1, $t2
  /* 17569C 80131EDC 3C058001 */       lui $a1, %hi(func_8000DF34)
  /* 1756A0 80131EE0 24A5DF34 */     addiu $a1, $a1, %lo(func_8000DF34)
  /* 1756A4 80131EE4 02002025 */        or $a0, $s0, $zero
  /* 1756A8 80131EE8 24060001 */     addiu $a2, $zero, 1
  /* 1756AC 80131EEC 0C002062 */       jal omAddGObjCommonProc
  /* 1756B0 80131EF0 24070001 */     addiu $a3, $zero, 1
  /* 1756B4 80131EF4 8FBF0024 */        lw $ra, 0x24($sp)
  /* 1756B8 80131EF8 8FB00020 */        lw $s0, 0x20($sp)
  /* 1756BC 80131EFC 27BD0030 */     addiu $sp, $sp, 0x30
  /* 1756C0 80131F00 03E00008 */        jr $ra
  /* 1756C4 80131F04 00000000 */       nop 

glabel func_ovl52_80131F08
  /* 1756C8 80131F08 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 1756CC 80131F0C AFBF0024 */        sw $ra, 0x24($sp)
  /* 1756D0 80131F10 AFB00020 */        sw $s0, 0x20($sp)
  /* 1756D4 80131F14 00002025 */        or $a0, $zero, $zero
  /* 1756D8 80131F18 00002825 */        or $a1, $zero, $zero
  /* 1756DC 80131F1C 24060013 */     addiu $a2, $zero, 0x13
  /* 1756E0 80131F20 0C00265A */       jal omMakeGObjSPAfter
  /* 1756E4 80131F24 3C078000 */       lui $a3, 0x8000
  /* 1756E8 80131F28 00408025 */        or $s0, $v0, $zero
  /* 1756EC 80131F2C 0C04C6D6 */       jal func_ovl52_80131B58
  /* 1756F0 80131F30 2404000B */     addiu $a0, $zero, 0xb
  /* 1756F4 80131F34 1040000A */      beqz $v0, .L80131F60
  /* 1756F8 80131F38 02002025 */        or $a0, $s0, $zero
  /* 1756FC 80131F3C 3C0E8013 */       lui $t6, %hi(D_ovl52_80132914)
  /* 175700 80131F40 8DCE2914 */        lw $t6, %lo(D_ovl52_80132914)($t6)
  /* 175704 80131F44 3C0F0004 */       lui $t7, %hi(D_NF_0003BAF8)
  /* 175708 80131F48 25EFBAF8 */     addiu $t7, $t7, %lo(D_NF_0003BAF8)
  /* 17570C 80131F4C 02002025 */        or $a0, $s0, $zero
  /* 175710 80131F50 0C0024B4 */       jal omAddDObjForGObj
  /* 175714 80131F54 01CF2821 */      addu $a1, $t6, $t7
  /* 175718 80131F58 10000008 */         b .L80131F7C
  /* 17571C 80131F5C AFA20028 */        sw $v0, 0x28($sp)
  .L80131F60:
  /* 175720 80131F60 3C188013 */       lui $t8, %hi(D_ovl52_80132914)
  /* 175724 80131F64 8F182914 */        lw $t8, %lo(D_ovl52_80132914)($t8)
  /* 175728 80131F68 3C190003 */       lui $t9, %hi(D_NF_0002A448)
  /* 17572C 80131F6C 2739A448 */     addiu $t9, $t9, %lo(D_NF_0002A448)
  /* 175730 80131F70 0C0024B4 */       jal omAddDObjForGObj
  /* 175734 80131F74 03192821 */      addu $a1, $t8, $t9
  /* 175738 80131F78 AFA20028 */        sw $v0, 0x28($sp)
  .L80131F7C:
  /* 17573C 80131F7C 8FA40028 */        lw $a0, 0x28($sp)
  /* 175740 80131F80 2405001C */     addiu $a1, $zero, 0x1c
  /* 175744 80131F84 0C002330 */       jal omAddOMMtxForDObjFixed
  /* 175748 80131F88 00003025 */        or $a2, $zero, $zero
  /* 17574C 80131F8C 3C058001 */       lui $a1, %hi(odRenderDObjDLHead1)
  /* 175750 80131F90 2408FFFF */     addiu $t0, $zero, -1
  /* 175754 80131F94 AFA80010 */        sw $t0, 0x10($sp)
  /* 175758 80131F98 24A53E8C */     addiu $a1, $a1, %lo(odRenderDObjDLHead1)
  /* 17575C 80131F9C 02002025 */        or $a0, $s0, $zero
  /* 175760 80131FA0 2406001B */     addiu $a2, $zero, 0x1b
  /* 175764 80131FA4 0C00277D */       jal omAddGObjRenderProc
  /* 175768 80131FA8 3C078000 */       lui $a3, 0x8000
  /* 17576C 80131FAC 3C098013 */       lui $t1, %hi(D_ovl52_80132914)
  /* 175770 80131FB0 8D292914 */        lw $t1, %lo(D_ovl52_80132914)($t1)
  /* 175774 80131FB4 3C0A0003 */       lui $t2, %hi(D_NF_0002A864)
  /* 175778 80131FB8 254AA864 */     addiu $t2, $t2, %lo(D_NF_0002A864)
  /* 17577C 80131FBC 8FA40028 */        lw $a0, 0x28($sp)
  /* 175780 80131FC0 24060000 */     addiu $a2, $zero, 0
  /* 175784 80131FC4 0C002F47 */       jal omAddDObjAnimAll
  /* 175788 80131FC8 012A2821 */      addu $a1, $t1, $t2
  /* 17578C 80131FCC 3C058001 */       lui $a1, %hi(func_8000DF34)
  /* 175790 80131FD0 24A5DF34 */     addiu $a1, $a1, %lo(func_8000DF34)
  /* 175794 80131FD4 02002025 */        or $a0, $s0, $zero
  /* 175798 80131FD8 24060001 */     addiu $a2, $zero, 1
  /* 17579C 80131FDC 0C002062 */       jal omAddGObjCommonProc
  /* 1757A0 80131FE0 24070001 */     addiu $a3, $zero, 1
  /* 1757A4 80131FE4 8FBF0024 */        lw $ra, 0x24($sp)
  /* 1757A8 80131FE8 8FB00020 */        lw $s0, 0x20($sp)
  /* 1757AC 80131FEC 27BD0030 */     addiu $sp, $sp, 0x30
  /* 1757B0 80131FF0 03E00008 */        jr $ra
  /* 1757B4 80131FF4 00000000 */       nop 

glabel func_ovl52_80131FF8
  /* 1757B8 80131FF8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1757BC 80131FFC AFBF0014 */        sw $ra, 0x14($sp)
  /* 1757C0 80132000 0C04C70E */       jal func_ovl52_80131C38
  /* 1757C4 80132004 00000000 */       nop 
  /* 1757C8 80132008 0C04C74A */       jal func_ovl52_80131D28
  /* 1757CC 8013200C 00000000 */       nop 
  /* 1757D0 80132010 0C04C786 */       jal func_ovl52_80131E18
  /* 1757D4 80132014 00000000 */       nop 
  /* 1757D8 80132018 0C04C7C2 */       jal func_ovl52_80131F08
  /* 1757DC 8013201C 00000000 */       nop 
  /* 1757E0 80132020 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1757E4 80132024 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1757E8 80132028 03E00008 */        jr $ra
  /* 1757EC 8013202C 00000000 */       nop 

glabel func_ovl52_80132030
  /* 1757F0 80132030 3C028013 */       lui $v0, %hi(D_ovl52_8013274C)
  /* 1757F4 80132034 2442274C */     addiu $v0, $v0, %lo(D_ovl52_8013274C)
  /* 1757F8 80132038 8C430000 */        lw $v1, ($v0) # D_ovl52_8013274C + 0
  /* 1757FC 8013203C 3C0C8004 */       lui $t4, %hi(gDisplayListHead)
  /* 175800 80132040 AFA40000 */        sw $a0, ($sp)
  /* 175804 80132044 286100FF */      slti $at, $v1, 0xff
  /* 175808 80132048 10200007 */      beqz $at, .L80132068
  /* 17580C 8013204C 258C65B0 */     addiu $t4, $t4, %lo(gDisplayListHead)
  /* 175810 80132050 246E0028 */     addiu $t6, $v1, 0x28
  /* 175814 80132054 29C10100 */      slti $at, $t6, 0x100
  /* 175818 80132058 14200003 */      bnez $at, .L80132068
  /* 17581C 8013205C AC4E0000 */        sw $t6, ($v0) # D_ovl52_8013274C + 0
  /* 175820 80132060 241800FF */     addiu $t8, $zero, 0xff
  /* 175824 80132064 AC580000 */        sw $t8, ($v0) # D_ovl52_8013274C + 0
  .L80132068:
  /* 175828 80132068 8D840004 */        lw $a0, 4($t4) # gDisplayListHead + 4
  /* 17582C 8013206C 3C0DE700 */       lui $t5, 0xe700
  /* 175830 80132070 3C0FE300 */       lui $t7, (0xE3000A01 >> 16) # 3808430593
  /* 175834 80132074 24990008 */     addiu $t9, $a0, 8
  /* 175838 80132078 AD990004 */        sw $t9, 4($t4) # gDisplayListHead + 4
  /* 17583C 8013207C AC800004 */        sw $zero, 4($a0)
  /* 175840 80132080 AC8D0000 */        sw $t5, ($a0)
  /* 175844 80132084 8D840004 */        lw $a0, 4($t4) # gDisplayListHead + 4
  /* 175848 80132088 35EF0A01 */       ori $t7, $t7, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 17584C 8013208C 3C19FA00 */       lui $t9, 0xfa00
  /* 175850 80132090 248E0008 */     addiu $t6, $a0, 8
  /* 175854 80132094 AD8E0004 */        sw $t6, 4($t4) # gDisplayListHead + 4
  /* 175858 80132098 AC800004 */        sw $zero, 4($a0)
  /* 17585C 8013209C AC8F0000 */        sw $t7, ($a0)
  /* 175860 801320A0 8D840004 */        lw $a0, 4($t4) # gDisplayListHead + 4
  /* 175864 801320A4 24980008 */     addiu $t8, $a0, 8
  /* 175868 801320A8 AD980004 */        sw $t8, 4($t4) # gDisplayListHead + 4
  /* 17586C 801320AC AC990000 */        sw $t9, ($a0)
  /* 175870 801320B0 8C4E0000 */        lw $t6, ($v0) # D_ovl52_8013274C + 0
  /* 175874 801320B4 3C19FCFF */       lui $t9, (0xFCFFFFFF >> 16) # 4244635647
  /* 175878 801320B8 3739FFFF */       ori $t9, $t9, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 17587C 801320BC 31CF00FF */      andi $t7, $t6, 0xff
  /* 175880 801320C0 AC8F0004 */        sw $t7, 4($a0)
  /* 175884 801320C4 8D840004 */        lw $a0, 4($t4) # gDisplayListHead + 4
  /* 175888 801320C8 3C0EFFFD */       lui $t6, (0xFFFDF6FB >> 16) # 4294833915
  /* 17588C 801320CC 35CEF6FB */       ori $t6, $t6, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 175890 801320D0 24980008 */     addiu $t8, $a0, 8
  /* 175894 801320D4 AD980004 */        sw $t8, 4($t4) # gDisplayListHead + 4
  /* 175898 801320D8 AC8E0004 */        sw $t6, 4($a0)
  /* 17589C 801320DC AC990000 */        sw $t9, ($a0)
  /* 1758A0 801320E0 8D840004 */        lw $a0, 4($t4) # gDisplayListHead + 4
  /* 1758A4 801320E4 3C190050 */       lui $t9, (0x5041C8 >> 16) # 5259720
  /* 1758A8 801320E8 3C18E200 */       lui $t8, (0xE200001C >> 16) # 3791650844
  /* 1758AC 801320EC 248F0008 */     addiu $t7, $a0, 8
  /* 1758B0 801320F0 AD8F0004 */        sw $t7, 4($t4) # gDisplayListHead + 4
  /* 1758B4 801320F4 3718001C */       ori $t8, $t8, (0xE200001C & 0xFFFF) # 3791650844
  /* 1758B8 801320F8 373941C8 */       ori $t9, $t9, (0x5041C8 & 0xFFFF) # 5259720
  /* 1758BC 801320FC AC990004 */        sw $t9, 4($a0)
  /* 1758C0 80132100 AC980000 */        sw $t8, ($a0)
  /* 1758C4 80132104 8D840004 */        lw $a0, 4($t4) # gDisplayListHead + 4
  /* 1758C8 80132108 3C180002 */       lui $t8, (0x28028 >> 16) # 163880
  /* 1758CC 8013210C 3C0FF64D */       lui $t7, (0xF64D8398 >> 16) # 4132275096
  /* 1758D0 80132110 248E0008 */     addiu $t6, $a0, 8
  /* 1758D4 80132114 AD8E0004 */        sw $t6, 4($t4) # gDisplayListHead + 4
  /* 1758D8 80132118 35EF8398 */       ori $t7, $t7, (0xF64D8398 & 0xFFFF) # 4132275096
  /* 1758DC 8013211C 37188028 */       ori $t8, $t8, (0x28028 & 0xFFFF) # 163880
  /* 1758E0 80132120 AC980004 */        sw $t8, 4($a0)
  /* 1758E4 80132124 AC8F0000 */        sw $t7, ($a0)
  /* 1758E8 80132128 8D840004 */        lw $a0, 4($t4) # gDisplayListHead + 4
  /* 1758EC 8013212C 3C0FE200 */       lui $t7, (0xE200001C >> 16) # 3791650844
  /* 1758F0 80132130 3C180055 */       lui $t8, (0x552078 >> 16) # 5578872
  /* 1758F4 80132134 24990008 */     addiu $t9, $a0, 8
  /* 1758F8 80132138 AD990004 */        sw $t9, 4($t4) # gDisplayListHead + 4
  /* 1758FC 8013213C AC800004 */        sw $zero, 4($a0)
  /* 175900 80132140 AC8D0000 */        sw $t5, ($a0)
  /* 175904 80132144 8D840004 */        lw $a0, 4($t4) # gDisplayListHead + 4
  /* 175908 80132148 37182078 */       ori $t8, $t8, (0x552078 & 0xFFFF) # 5578872
  /* 17590C 8013214C 35EF001C */       ori $t7, $t7, (0xE200001C & 0xFFFF) # 3791650844
  /* 175910 80132150 248E0008 */     addiu $t6, $a0, 8
  /* 175914 80132154 AD8E0004 */        sw $t6, 4($t4) # gDisplayListHead + 4
  /* 175918 80132158 AC980004 */        sw $t8, 4($a0)
  /* 17591C 8013215C 03E00008 */        jr $ra
  /* 175920 80132160 AC8F0000 */        sw $t7, ($a0)

glabel func_ovl52_80132164
  /* 175924 80132164 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 175928 80132168 AFBF001C */        sw $ra, 0x1c($sp)
  /* 17592C 8013216C 3C018013 */       lui $at, %hi(D_ovl52_8013274C)
  /* 175930 80132170 AC20274C */        sw $zero, %lo(D_ovl52_8013274C)($at)
  /* 175934 80132174 00002025 */        or $a0, $zero, $zero
  /* 175938 80132178 00002825 */        or $a1, $zero, $zero
  /* 17593C 8013217C 24060012 */     addiu $a2, $zero, 0x12
  /* 175940 80132180 0C00265A */       jal omMakeGObjSPAfter
  /* 175944 80132184 3C078000 */       lui $a3, 0x8000
  /* 175948 80132188 3C058013 */       lui $a1, %hi(func_ovl52_80132030)
  /* 17594C 8013218C 240EFFFF */     addiu $t6, $zero, -1
  /* 175950 80132190 AFAE0010 */        sw $t6, 0x10($sp)
  /* 175954 80132194 24A52030 */     addiu $a1, $a1, %lo(func_ovl52_80132030)
  /* 175958 80132198 00402025 */        or $a0, $v0, $zero
  /* 17595C 8013219C 2406001A */     addiu $a2, $zero, 0x1a
  /* 175960 801321A0 0C00277D */       jal omAddGObjRenderProc
  /* 175964 801321A4 3C078000 */       lui $a3, 0x8000
  /* 175968 801321A8 8FBF001C */        lw $ra, 0x1c($sp)
  /* 17596C 801321AC 27BD0020 */     addiu $sp, $sp, 0x20
  /* 175970 801321B0 03E00008 */        jr $ra
  /* 175974 801321B4 00000000 */       nop 

glabel func_ovl52_801321B8
  /* 175978 801321B8 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 17597C 801321BC 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 175980 801321C0 AFBF003C */        sw $ra, 0x3c($sp)
  /* 175984 801321C4 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 175988 801321C8 240F0028 */     addiu $t7, $zero, 0x28
  /* 17598C 801321CC 24180000 */     addiu $t8, $zero, 0
  /* 175990 801321D0 3C190800 */       lui $t9, 0x800
  /* 175994 801321D4 2408FFFF */     addiu $t0, $zero, -1
  /* 175998 801321D8 24090001 */     addiu $t1, $zero, 1
  /* 17599C 801321DC 240A0001 */     addiu $t2, $zero, 1
  /* 1759A0 801321E0 240B0001 */     addiu $t3, $zero, 1
  /* 1759A4 801321E4 AFAB0030 */        sw $t3, 0x30($sp)
  /* 1759A8 801321E8 AFAA0028 */        sw $t2, 0x28($sp)
  /* 1759AC 801321EC AFA90024 */        sw $t1, 0x24($sp)
  /* 1759B0 801321F0 AFA80020 */        sw $t0, 0x20($sp)
  /* 1759B4 801321F4 AFB9001C */        sw $t9, 0x1c($sp)
  /* 1759B8 801321F8 AFB80018 */        sw $t8, 0x18($sp)
  /* 1759BC 801321FC AFAF0014 */        sw $t7, 0x14($sp)
  /* 1759C0 80132200 AFAE0010 */        sw $t6, 0x10($sp)
  /* 1759C4 80132204 AFA0002C */        sw $zero, 0x2c($sp)
  /* 1759C8 80132208 AFA00034 */        sw $zero, 0x34($sp)
  /* 1759CC 8013220C 24040401 */     addiu $a0, $zero, 0x401
  /* 1759D0 80132210 00002825 */        or $a1, $zero, $zero
  /* 1759D4 80132214 24060010 */     addiu $a2, $zero, 0x10
  /* 1759D8 80132218 0C002E4F */       jal func_8000B93C
  /* 1759DC 8013221C 3C078000 */       lui $a3, 0x8000
  /* 1759E0 80132220 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 1759E4 80132224 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 1759E8 80132228 8C430074 */        lw $v1, 0x74($v0)
  /* 1759EC 8013222C 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 1759F0 80132230 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 1759F4 80132234 44050000 */      mfc1 $a1, $f0
  /* 1759F8 80132238 44060000 */      mfc1 $a2, $f0
  /* 1759FC 8013223C 3C07439B */       lui $a3, 0x439b
  /* 175A00 80132240 24640008 */     addiu $a0, $v1, 8
  /* 175A04 80132244 AFA30040 */        sw $v1, 0x40($sp)
  /* 175A08 80132248 0C001C20 */       jal func_80007080
  /* 175A0C 8013224C E7A40010 */      swc1 $f4, 0x10($sp)
  /* 175A10 80132250 3C018013 */       lui $at, %hi(D_ovl52_80132720)
  /* 175A14 80132254 8FA30040 */        lw $v1, 0x40($sp)
  /* 175A18 80132258 C4262720 */      lwc1 $f6, %lo(D_ovl52_80132720)($at)
  /* 175A1C 8013225C 3C018013 */       lui $at, %hi(D_ovl52_80132724)
  /* 175A20 80132260 44800000 */      mtc1 $zero, $f0
  /* 175A24 80132264 E466003C */      swc1 $f6, 0x3c($v1)
  /* 175A28 80132268 C4282724 */      lwc1 $f8, %lo(D_ovl52_80132724)($at)
  /* 175A2C 8013226C 3C018013 */       lui $at, %hi(D_ovl52_80132728)
  /* 175A30 80132270 E4680040 */      swc1 $f8, 0x40($v1)
  /* 175A34 80132274 C42A2728 */      lwc1 $f10, %lo(D_ovl52_80132728)($at)
  /* 175A38 80132278 3C018013 */       lui $at, %hi(D_ovl52_8013272C)
  /* 175A3C 8013227C E46A0044 */      swc1 $f10, 0x44($v1)
  /* 175A40 80132280 C430272C */      lwc1 $f16, %lo(D_ovl52_8013272C)($at)
  /* 175A44 80132284 3C018013 */       lui $at, %hi(D_ovl52_80132730)
  /* 175A48 80132288 E4700048 */      swc1 $f16, 0x48($v1)
  /* 175A4C 8013228C C4322730 */      lwc1 $f18, %lo(D_ovl52_80132730)($at)
  /* 175A50 80132290 3C018013 */       lui $at, %hi(D_ovl52_80132734)
  /* 175A54 80132294 E472004C */      swc1 $f18, 0x4c($v1)
  /* 175A58 80132298 C4242734 */      lwc1 $f4, %lo(D_ovl52_80132734)($at)
  /* 175A5C 8013229C 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 175A60 801322A0 44813000 */      mtc1 $at, $f6 # 1.0 to cop1
  /* 175A64 801322A4 3C018013 */       lui $at, %hi(D_ovl52_80132738)
  /* 175A68 801322A8 E4600054 */      swc1 $f0, 0x54($v1)
  /* 175A6C 801322AC E460005C */      swc1 $f0, 0x5c($v1)
  /* 175A70 801322B0 E4640050 */      swc1 $f4, 0x50($v1)
  /* 175A74 801322B4 E4660058 */      swc1 $f6, 0x58($v1)
  /* 175A78 801322B8 C4282738 */      lwc1 $f8, %lo(D_ovl52_80132738)($at)
  /* 175A7C 801322BC 3C014300 */       lui $at, (0x43000000 >> 16) # 128.0
  /* 175A80 801322C0 44815000 */      mtc1 $at, $f10 # 128.0 to cop1
  /* 175A84 801322C4 3C014680 */       lui $at, (0x46800000 >> 16) # 16384.0
  /* 175A88 801322C8 44818000 */      mtc1 $at, $f16 # 16384.0 to cop1
  /* 175A8C 801322CC E4680020 */      swc1 $f8, 0x20($v1)
  /* 175A90 801322D0 E46A0028 */      swc1 $f10, 0x28($v1)
  /* 175A94 801322D4 E470002C */      swc1 $f16, 0x2c($v1)
  /* 175A98 801322D8 8FBF003C */        lw $ra, 0x3c($sp)
  /* 175A9C 801322DC 27BD0048 */     addiu $sp, $sp, 0x48
  /* 175AA0 801322E0 03E00008 */        jr $ra
  /* 175AA4 801322E4 00000000 */       nop 

glabel func_ovl52_801322E8
  /* 175AA8 801322E8 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 175AAC 801322EC 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 175AB0 801322F0 AFBF003C */        sw $ra, 0x3c($sp)
  /* 175AB4 801322F4 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 175AB8 801322F8 240F0014 */     addiu $t7, $zero, 0x14
  /* 175ABC 801322FC 24180000 */     addiu $t8, $zero, 0
  /* 175AC0 80132300 3C190400 */       lui $t9, 0x400
  /* 175AC4 80132304 2408FFFF */     addiu $t0, $zero, -1
  /* 175AC8 80132308 24090001 */     addiu $t1, $zero, 1
  /* 175ACC 8013230C 240A0001 */     addiu $t2, $zero, 1
  /* 175AD0 80132310 AFAA0030 */        sw $t2, 0x30($sp)
  /* 175AD4 80132314 AFA90028 */        sw $t1, 0x28($sp)
  /* 175AD8 80132318 AFA80020 */        sw $t0, 0x20($sp)
  /* 175ADC 8013231C AFB9001C */        sw $t9, 0x1c($sp)
  /* 175AE0 80132320 AFB80018 */        sw $t8, 0x18($sp)
  /* 175AE4 80132324 AFAF0014 */        sw $t7, 0x14($sp)
  /* 175AE8 80132328 AFAE0010 */        sw $t6, 0x10($sp)
  /* 175AEC 8013232C AFA00024 */        sw $zero, 0x24($sp)
  /* 175AF0 80132330 AFA0002C */        sw $zero, 0x2c($sp)
  /* 175AF4 80132334 AFA00034 */        sw $zero, 0x34($sp)
  /* 175AF8 80132338 24040401 */     addiu $a0, $zero, 0x401
  /* 175AFC 8013233C 00002825 */        or $a1, $zero, $zero
  /* 175B00 80132340 24060010 */     addiu $a2, $zero, 0x10
  /* 175B04 80132344 0C002E4F */       jal func_8000B93C
  /* 175B08 80132348 3C078000 */       lui $a3, 0x8000
  /* 175B0C 8013234C 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 175B10 80132350 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 175B14 80132354 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 175B18 80132358 8C430074 */        lw $v1, 0x74($v0)
  /* 175B1C 8013235C 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 175B20 80132360 44050000 */      mfc1 $a1, $f0
  /* 175B24 80132364 44060000 */      mfc1 $a2, $f0
  /* 175B28 80132368 3C07439B */       lui $a3, 0x439b
  /* 175B2C 8013236C 24640008 */     addiu $a0, $v1, 8
  /* 175B30 80132370 0C001C20 */       jal func_80007080
  /* 175B34 80132374 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 175B38 80132378 8FBF003C */        lw $ra, 0x3c($sp)
  /* 175B3C 8013237C 27BD0040 */     addiu $sp, $sp, 0x40
  /* 175B40 80132380 03E00008 */        jr $ra
  /* 175B44 80132384 00000000 */       nop 

glabel func_ovl52_80132388
  /* 175B48 80132388 3C018013 */       lui $at, %hi(D_ovl52_80132748)
  /* 175B4C 8013238C 3C0E800A */       lui $t6, %hi((gSaveData + 0x458))
  /* 175B50 80132390 95CE4938 */       lhu $t6, %lo((gSaveData + 0x458))($t6)
  /* 175B54 80132394 AC202748 */        sw $zero, %lo(D_ovl52_80132748)($at)
  /* 175B58 80132398 3C018013 */       lui $at, %hi(D_ovl52_80132750)
  /* 175B5C 8013239C 03E00008 */        jr $ra
  /* 175B60 801323A0 A42E2750 */        sh $t6, %lo(D_ovl52_80132750)($at)

glabel func_ovl52_801323A4
  /* 175B64 801323A4 3C038013 */       lui $v1, %hi(D_ovl52_80132748)
  /* 175B68 801323A8 24632748 */     addiu $v1, $v1, %lo(D_ovl52_80132748)
  /* 175B6C 801323AC 8C6E0000 */        lw $t6, ($v1) # D_ovl52_80132748 + 0
  /* 175B70 801323B0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 175B74 801323B4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 175B78 801323B8 25CF0001 */     addiu $t7, $t6, 1
  /* 175B7C 801323BC 29E1000A */      slti $at, $t7, 0xa
  /* 175B80 801323C0 AFA40018 */        sw $a0, 0x18($sp)
  /* 175B84 801323C4 1420002E */      bnez $at, .L80132480
  /* 175B88 801323C8 AC6F0000 */        sw $t7, ($v1) # D_ovl52_80132748 + 0
  /* 175B8C 801323CC 3C068013 */       lui $a2, %hi(D_ovl52_80132754)
  /* 175B90 801323D0 24C62754 */     addiu $a2, $a2, %lo(D_ovl52_80132754)
  /* 175B94 801323D4 8CC20000 */        lw $v0, ($a2) # D_ovl52_80132754 + 0
  /* 175B98 801323D8 2404FFF1 */     addiu $a0, $zero, -0xf
  /* 175B9C 801323DC 10400002 */      beqz $v0, .L801323E8
  /* 175BA0 801323E0 2459FFFF */     addiu $t9, $v0, -1
  /* 175BA4 801323E4 ACD90000 */        sw $t9, ($a2) # D_ovl52_80132754 + 0
  .L801323E8:
  /* 175BA8 801323E8 0C0E4281 */       jal func_ovl1_80390A04
  /* 175BAC 801323EC 2405000F */     addiu $a1, $zero, 0xf
  /* 175BB0 801323F0 10400006 */      beqz $v0, .L8013240C
  /* 175BB4 801323F4 2404FFF1 */     addiu $a0, $zero, -0xf
  /* 175BB8 801323F8 0C0E42B0 */       jal func_ovl1_80390AC0
  /* 175BBC 801323FC 2405000F */     addiu $a1, $zero, 0xf
  /* 175BC0 80132400 10400002 */      beqz $v0, .L8013240C
  /* 175BC4 80132404 3C018013 */       lui $at, %hi(D_ovl52_80132754)
  /* 175BC8 80132408 AC202754 */        sw $zero, %lo(D_ovl52_80132754)($at)
  .L8013240C:
  /* 175BCC 8013240C 0C0E41DB */       jal func_ovl1_8039076C
  /* 175BD0 80132410 3404D000 */       ori $a0, $zero, 0xd000
  /* 175BD4 80132414 10400007 */      beqz $v0, .L80132434
  /* 175BD8 80132418 3C03800A */       lui $v1, %hi(gSceneData)
  /* 175BDC 8013241C 24634AD0 */     addiu $v1, $v1, %lo(gSceneData)
  /* 175BE0 80132420 90680000 */       lbu $t0, ($v1) # gSceneData + 0
  /* 175BE4 80132424 24090001 */     addiu $t1, $zero, 1
  /* 175BE8 80132428 A0690000 */        sb $t1, ($v1) # gSceneData + 0
  /* 175BEC 8013242C 0C00171D */       jal func_80005C74
  /* 175BF0 80132430 A0680001 */        sb $t0, 1($v1) # gSceneData + 1
  .L80132434:
  /* 175BF4 80132434 3C028013 */       lui $v0, %hi(D_ovl52_80132748)
  /* 175BF8 80132438 8C422748 */        lw $v0, %lo(D_ovl52_80132748)($v0)
  /* 175BFC 8013243C 3C03800A */       lui $v1, %hi(gSceneData)
  /* 175C00 80132440 2401001E */     addiu $at, $zero, 0x1e
  /* 175C04 80132444 14410007 */       bne $v0, $at, .L80132464
  /* 175C08 80132448 24634AD0 */     addiu $v1, $v1, %lo(gSceneData)
  /* 175C0C 8013244C 0C04C859 */       jal func_ovl52_80132164
  /* 175C10 80132450 00000000 */       nop 
  /* 175C14 80132454 3C03800A */       lui $v1, %hi(gSceneData)
  /* 175C18 80132458 3C028013 */       lui $v0, %hi(D_ovl52_80132748)
  /* 175C1C 8013245C 8C422748 */        lw $v0, %lo(D_ovl52_80132748)($v0)
  /* 175C20 80132460 24634AD0 */     addiu $v1, $v1, %lo(gSceneData)
  .L80132464:
  /* 175C24 80132464 24010028 */     addiu $at, $zero, 0x28
  /* 175C28 80132468 14410005 */       bne $v0, $at, .L80132480
  /* 175C2C 8013246C 240B0001 */     addiu $t3, $zero, 1
  /* 175C30 80132470 906A0000 */       lbu $t2, ($v1) # gSceneData + 0
  /* 175C34 80132474 A06B0000 */        sb $t3, ($v1) # gSceneData + 0
  /* 175C38 80132478 0C00171D */       jal func_80005C74
  /* 175C3C 8013247C A06A0001 */        sb $t2, 1($v1) # gSceneData + 1
  .L80132480:
  /* 175C40 80132480 8FBF0014 */        lw $ra, 0x14($sp)
  /* 175C44 80132484 27BD0018 */     addiu $sp, $sp, 0x18
  /* 175C48 80132488 03E00008 */        jr $ra
  /* 175C4C 8013248C 00000000 */       nop 

glabel func_ovl52_80132490
  /* 175C50 80132490 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 175C54 80132494 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 175C58 80132498 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 175C5C 8013249C 3C188013 */       lui $t8, %hi(D_ovl52_80132758)
  /* 175C60 801324A0 3C088013 */       lui $t0, %hi(D_ovl52_801328D8)
  /* 175C64 801324A4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 175C68 801324A8 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 175C6C 801324AC 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 175C70 801324B0 27182758 */     addiu $t8, $t8, %lo(D_ovl52_80132758)
  /* 175C74 801324B4 24190030 */     addiu $t9, $zero, 0x30
  /* 175C78 801324B8 250828D8 */     addiu $t0, $t0, %lo(D_ovl52_801328D8)
  /* 175C7C 801324BC 24090007 */     addiu $t1, $zero, 7
  /* 175C80 801324C0 AFAE002C */        sw $t6, 0x2c($sp)
  /* 175C84 801324C4 AFAF0030 */        sw $t7, 0x30($sp)
  /* 175C88 801324C8 AFA00034 */        sw $zero, 0x34($sp)
  /* 175C8C 801324CC AFA00038 */        sw $zero, 0x38($sp)
  /* 175C90 801324D0 AFB8003C */        sw $t8, 0x3c($sp)
  /* 175C94 801324D4 AFB90040 */        sw $t9, 0x40($sp)
  /* 175C98 801324D8 AFA80044 */        sw $t0, 0x44($sp)
  /* 175C9C 801324DC AFA90048 */        sw $t1, 0x48($sp)
  /* 175CA0 801324E0 0C0337DE */       jal rdManagerInitSetup
  /* 175CA4 801324E4 27A4002C */     addiu $a0, $sp, 0x2c
  /* 175CA8 801324E8 3C048013 */       lui $a0, %hi(D_ovl52_80132640)
  /* 175CAC 801324EC 24842640 */     addiu $a0, $a0, %lo(D_ovl52_80132640)
  /* 175CB0 801324F0 0C0337BB */       jal rdManagerGetAllocSize
  /* 175CB4 801324F4 24050002 */     addiu $a1, $zero, 2
  /* 175CB8 801324F8 00402025 */        or $a0, $v0, $zero
  /* 175CBC 801324FC 0C001260 */       jal gsMemoryAlloc
  /* 175CC0 80132500 24050010 */     addiu $a1, $zero, 0x10
  /* 175CC4 80132504 3C048013 */       lui $a0, %hi(D_ovl52_80132640)
  /* 175CC8 80132508 3C068013 */       lui $a2, %hi(D_ovl52_80132910)
  /* 175CCC 8013250C 24C62910 */     addiu $a2, $a2, %lo(D_ovl52_80132910)
  /* 175CD0 80132510 24842640 */     addiu $a0, $a0, %lo(D_ovl52_80132640)
  /* 175CD4 80132514 24050002 */     addiu $a1, $zero, 2
  /* 175CD8 80132518 0C033781 */       jal rdManagerLoadFiles
  /* 175CDC 8013251C 00403825 */        or $a3, $v0, $zero
  /* 175CE0 80132520 3C058013 */       lui $a1, %hi(func_ovl52_801323A4)
  /* 175CE4 80132524 24A523A4 */     addiu $a1, $a1, %lo(func_ovl52_801323A4)
  /* 175CE8 80132528 00002025 */        or $a0, $zero, $zero
  /* 175CEC 8013252C 00003025 */        or $a2, $zero, $zero
  /* 175CF0 80132530 0C00265A */       jal omMakeGObjSPAfter
  /* 175CF4 80132534 3C078000 */       lui $a3, 0x8000
  /* 175CF8 80132538 240AFFFF */     addiu $t2, $zero, -1
  /* 175CFC 8013253C AFAA0010 */        sw $t2, 0x10($sp)
  /* 175D00 80132540 00002025 */        or $a0, $zero, $zero
  /* 175D04 80132544 3C058000 */       lui $a1, 0x8000
  /* 175D08 80132548 24060064 */     addiu $a2, $zero, 0x64
  /* 175D0C 8013254C 0C002E7F */       jal func_8000B9FC
  /* 175D10 80132550 24070003 */     addiu $a3, $zero, 3
  /* 175D14 80132554 0C04C8E2 */       jal func_ovl52_80132388
  /* 175D18 80132558 00000000 */       nop 
  /* 175D1C 8013255C 0C04C86E */       jal func_ovl52_801321B8
  /* 175D20 80132560 00000000 */       nop 
  /* 175D24 80132564 0C04C8BA */       jal func_ovl52_801322E8
  /* 175D28 80132568 00000000 */       nop 
  /* 175D2C 8013256C 0C04C7FE */       jal func_ovl52_80131FF8
  /* 175D30 80132570 00000000 */       nop 
  /* 175D34 80132574 44806000 */      mtc1 $zero, $f12
  /* 175D38 80132578 240B00FF */     addiu $t3, $zero, 0xff
  /* 175D3C 8013257C 240C00FF */     addiu $t4, $zero, 0xff
  /* 175D40 80132580 AFAC0014 */        sw $t4, 0x14($sp)
  /* 175D44 80132584 AFAB0010 */        sw $t3, 0x10($sp)
  /* 175D48 80132588 240600FF */     addiu $a2, $zero, 0xff
  /* 175D4C 8013258C 240700FF */     addiu $a3, $zero, 0xff
  /* 175D50 80132590 0C0E4138 */       jal func_ovl1_803904E0
  /* 175D54 80132594 46006386 */     mov.s $f14, $f12
  /* 175D58 80132598 0C009A70 */       jal func_800269C0
  /* 175D5C 8013259C 24040095 */     addiu $a0, $zero, 0x95
  /* 175D60 801325A0 0C009A70 */       jal func_800269C0
  /* 175D64 801325A4 240401CF */     addiu $a0, $zero, 0x1cf
  /* 175D68 801325A8 0C00024B */       jal func_8000092C
  /* 175D6C 801325AC 00000000 */       nop 
  /* 175D70 801325B0 2C41103B */     sltiu $at, $v0, 0x103b
  /* 175D74 801325B4 50200007 */      beql $at, $zero, .L801325D4
  /* 175D78 801325B8 8FBF001C */        lw $ra, 0x1c($sp)
  .L801325BC:
  /* 175D7C 801325BC 0C00024B */       jal func_8000092C
  /* 175D80 801325C0 00000000 */       nop 
  /* 175D84 801325C4 2C41103B */     sltiu $at, $v0, 0x103b
  /* 175D88 801325C8 1420FFFC */      bnez $at, .L801325BC
  /* 175D8C 801325CC 00000000 */       nop 
  /* 175D90 801325D0 8FBF001C */        lw $ra, 0x1c($sp)
  .L801325D4:
  /* 175D94 801325D4 27BD0050 */     addiu $sp, $sp, 0x50
  /* 175D98 801325D8 03E00008 */        jr $ra
  /* 175D9C 801325DC 00000000 */       nop 

glabel intro_hidden_chars_entry
  /* 175DA0 801325E0 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 175DA4 801325E4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 175DA8 801325E8 3C048013 */       lui $a0, %hi(D_ovl52_80132678)
  /* 175DAC 801325EC 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 175DB0 801325F0 24842678 */     addiu $a0, $a0, %lo(D_ovl52_80132678)
  /* 175DB4 801325F4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 175DB8 801325F8 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 175DBC 801325FC 0C001C09 */       jal func_80007024
  /* 175DC0 80132600 AC8F000C */        sw $t7, 0xc($a0) # D_ovl52_80132678 + 12
  /* 175DC4 80132604 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 175DC8 80132608 3C198013 */       lui $t9, %hi(D_NF_80132920)
  /* 175DCC 8013260C 3C048013 */       lui $a0, %hi(D_ovl52_80132694)
  /* 175DD0 80132610 27392920 */     addiu $t9, $t9, %lo(D_NF_80132920)
  /* 175DD4 80132614 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 175DD8 80132618 24842694 */     addiu $a0, $a0, %lo(D_ovl52_80132694)
  /* 175DDC 8013261C 03194023 */      subu $t0, $t8, $t9
  /* 175DE0 80132620 0C001A0F */       jal gsGTLSceneInit
  /* 175DE4 80132624 AC880010 */        sw $t0, 0x10($a0) # D_ovl52_80132694 + 16
  /* 175DE8 80132628 8FBF0014 */        lw $ra, 0x14($sp)
  /* 175DEC 8013262C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 175DF0 80132630 03E00008 */        jr $ra
  /* 175DF4 80132634 00000000 */       nop 

  /* 175DF8 80132638 00000000 */       nop 
  /* 175DFC 8013263C 00000000 */       nop 
