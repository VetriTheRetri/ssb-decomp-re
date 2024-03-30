.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80131B00 -> 0x801323A0

glabel func_ovl48_80131B00
  /* 1721E0 80131B00 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 1721E4 80131B04 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1721E8 80131B08 8C830000 */        lw $v1, ($a0)
  /* 1721EC 80131B0C 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 1721F0 80131B10 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 1721F4 80131B14 246E0008 */     addiu $t6, $v1, 8
  /* 1721F8 80131B18 AC8E0000 */        sw $t6, ($a0)
  /* 1721FC 80131B1C 3C180002 */       lui $t8, 2
  /* 172200 80131B20 AC780004 */        sw $t8, 4($v1)
  /* 172204 80131B24 AC6F0000 */        sw $t7, ($v1)
  /* 172208 80131B28 0C0E4147 */       jal func_ovl1_8039051C
  /* 17220C 80131B2C AFA40028 */        sw $a0, 0x28($sp)
  /* 172210 80131B30 0C0E414A */       jal func_ovl1_80390528
  /* 172214 80131B34 E7A0001C */      swc1 $f0, 0x1c($sp)
  /* 172218 80131B38 44060000 */      mfc1 $a2, $f0
  /* 17221C 80131B3C 8FA40028 */        lw $a0, 0x28($sp)
  /* 172220 80131B40 0C03F2DC */       jal ftRender_Lights_DisplayLightReflect
  /* 172224 80131B44 8FA5001C */        lw $a1, 0x1c($sp)
  /* 172228 80131B48 8FBF0014 */        lw $ra, 0x14($sp)
  /* 17222C 80131B4C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 172230 80131B50 03E00008 */        jr $ra
  /* 172234 80131B54 00000000 */       nop 

glabel func_ovl48_80131B58
  /* 172238 80131B58 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 17223C 80131B5C AFBF001C */        sw $ra, 0x1c($sp)
  /* 172240 80131B60 00002025 */        or $a0, $zero, $zero
  /* 172244 80131B64 00002825 */        or $a1, $zero, $zero
  /* 172248 80131B68 24060014 */     addiu $a2, $zero, 0x14
  /* 17224C 80131B6C 0C00265A */       jal omMakeGObjCommon
  /* 172250 80131B70 3C078000 */       lui $a3, 0x8000
  /* 172254 80131B74 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 172258 80131B78 240EFFFF */     addiu $t6, $zero, -1
  /* 17225C 80131B7C AFA20024 */        sw $v0, 0x24($sp)
  /* 172260 80131B80 AFAE0010 */        sw $t6, 0x10($sp)
  /* 172264 80131B84 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 172268 80131B88 00402025 */        or $a0, $v0, $zero
  /* 17226C 80131B8C 2406001C */     addiu $a2, $zero, 0x1c
  /* 172270 80131B90 0C00277D */       jal omAddGObjRenderProc
  /* 172274 80131B94 3C078000 */       lui $a3, 0x8000
  /* 172278 80131B98 3C0F8013 */       lui $t7, %hi(D_ovl48_80132658)
  /* 17227C 80131B9C 8DEF2658 */        lw $t7, %lo(D_ovl48_80132658)($t7)
  /* 172280 80131BA0 3C180004 */       lui $t8, %hi(D_NF_0003EE58)
  /* 172284 80131BA4 2718EE58 */     addiu $t8, $t8, %lo(D_NF_0003EE58)
  /* 172288 80131BA8 8FA40024 */        lw $a0, 0x24($sp)
  /* 17228C 80131BAC 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 172290 80131BB0 01F82821 */      addu $a1, $t7, $t8
  /* 172294 80131BB4 44800000 */      mtc1 $zero, $f0
  /* 172298 80131BB8 00000000 */       nop 
  /* 17229C 80131BBC E4400058 */      swc1 $f0, 0x58($v0)
  /* 1722A0 80131BC0 E440005C */      swc1 $f0, 0x5c($v0)
  /* 1722A4 80131BC4 8FBF001C */        lw $ra, 0x1c($sp)
  /* 1722A8 80131BC8 27BD0028 */     addiu $sp, $sp, 0x28
  /* 1722AC 80131BCC 03E00008 */        jr $ra
  /* 1722B0 80131BD0 00000000 */       nop 

glabel func_ovl48_80131BD4
  /* 1722B4 80131BD4 27BDFFA0 */     addiu $sp, $sp, -0x60
  /* 1722B8 80131BD8 3C0F8011 */       lui $t7, %hi(dFtDefaultFighterDesc)
  /* 1722BC 80131BDC 25EF6DD0 */     addiu $t7, $t7, %lo(dFtDefaultFighterDesc)
  /* 1722C0 80131BE0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1722C4 80131BE4 25E8003C */     addiu $t0, $t7, 0x3c
  /* 1722C8 80131BE8 27AE001C */     addiu $t6, $sp, 0x1c
  .L80131BEC:
  /* 1722CC 80131BEC 8DF90000 */        lw $t9, ($t7) # dFtDefaultFighterDesc + 0
  /* 1722D0 80131BF0 25EF000C */     addiu $t7, $t7, 0xc
  /* 1722D4 80131BF4 25CE000C */     addiu $t6, $t6, 0xc
  /* 1722D8 80131BF8 ADD9FFF4 */        sw $t9, -0xc($t6)
  /* 1722DC 80131BFC 8DF8FFF8 */        lw $t8, -8($t7) # dFtDefaultFighterDesc + -8
  /* 1722E0 80131C00 ADD8FFF8 */        sw $t8, -8($t6)
  /* 1722E4 80131C04 8DF9FFFC */        lw $t9, -4($t7) # dFtDefaultFighterDesc + -4
  /* 1722E8 80131C08 15E8FFF8 */       bne $t7, $t0, .L80131BEC
  /* 1722EC 80131C0C ADD9FFFC */        sw $t9, -4($t6)
  /* 1722F0 80131C10 8DF90000 */        lw $t9, ($t7) # dFtDefaultFighterDesc + 0
  /* 1722F4 80131C14 24090009 */     addiu $t1, $zero, 9
  /* 1722F8 80131C18 24040009 */     addiu $a0, $zero, 9
  /* 1722FC 80131C1C ADD90000 */        sw $t9, ($t6)
  /* 172300 80131C20 AFA9001C */        sw $t1, 0x1c($sp)
  /* 172304 80131C24 0C03B03B */       jal ftCostume_GetIndexFFA
  /* 172308 80131C28 00002825 */        or $a1, $zero, $zero
  /* 17230C 80131C2C 44800000 */      mtc1 $zero, $f0
  /* 172310 80131C30 3C0A8013 */       lui $t2, %hi(D_ovl48_80132488)
  /* 172314 80131C34 8D4A2488 */        lw $t2, %lo(D_ovl48_80132488)($t2)
  /* 172318 80131C38 A3A20033 */        sb $v0, 0x33($sp)
  /* 17231C 80131C3C 27A4001C */     addiu $a0, $sp, 0x1c
  /* 172320 80131C40 E7A00020 */      swc1 $f0, 0x20($sp)
  /* 172324 80131C44 E7A00024 */      swc1 $f0, 0x24($sp)
  /* 172328 80131C48 E7A00028 */      swc1 $f0, 0x28($sp)
  /* 17232C 80131C4C 0C035FCF */       jal ftManager_MakeFighter
  /* 172330 80131C50 AFAA0054 */        sw $t2, 0x54($sp)
  /* 172334 80131C54 3C018013 */       lui $at, %hi(D_ovl48_80132494)
  /* 172338 80131C58 3C050001 */       lui $a1, (0x1000F >> 16) # 65551
  /* 17233C 80131C5C AC222494 */        sw $v0, %lo(D_ovl48_80132494)($at)
  /* 172340 80131C60 34A5000F */       ori $a1, $a1, (0x1000F & 0xFFFF) # 65551
  /* 172344 80131C64 00402025 */        or $a0, $v0, $zero
  /* 172348 80131C68 0C0E4173 */       jal func_ovl1_803905CC
  /* 17234C 80131C6C AFA2005C */        sw $v0, 0x5c($sp)
  /* 172350 80131C70 8FA3005C */        lw $v1, 0x5c($sp)
  /* 172354 80131C74 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 172358 80131C78 44810000 */      mtc1 $at, $f0 # 1.0 to cop1
  /* 17235C 80131C7C 8C6B0074 */        lw $t3, 0x74($v1)
  /* 172360 80131C80 E5600040 */      swc1 $f0, 0x40($t3)
  /* 172364 80131C84 8C6C0074 */        lw $t4, 0x74($v1)
  /* 172368 80131C88 E5800044 */      swc1 $f0, 0x44($t4)
  /* 17236C 80131C8C 8C6D0074 */        lw $t5, 0x74($v1)
  /* 172370 80131C90 E5A00048 */      swc1 $f0, 0x48($t5)
  /* 172374 80131C94 8FBF0014 */        lw $ra, 0x14($sp)
  /* 172378 80131C98 27BD0060 */     addiu $sp, $sp, 0x60
  /* 17237C 80131C9C 03E00008 */        jr $ra
  /* 172380 80131CA0 00000000 */       nop 

glabel func_ovl48_80131CA4
  /* 172384 80131CA4 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 172388 80131CA8 AFBF0024 */        sw $ra, 0x24($sp)
  /* 17238C 80131CAC AFB00020 */        sw $s0, 0x20($sp)
  /* 172390 80131CB0 00002025 */        or $a0, $zero, $zero
  /* 172394 80131CB4 00002825 */        or $a1, $zero, $zero
  /* 172398 80131CB8 24060011 */     addiu $a2, $zero, 0x11
  /* 17239C 80131CBC 0C00265A */       jal omMakeGObjCommon
  /* 1723A0 80131CC0 3C078000 */       lui $a3, 0x8000
  /* 1723A4 80131CC4 3C0E8013 */       lui $t6, %hi(D_ovl48_80132658)
  /* 1723A8 80131CC8 8DCE2658 */        lw $t6, %lo(D_ovl48_80132658)($t6)
  /* 1723AC 80131CCC 3C0F0001 */       lui $t7, %hi(D_NF_00009548)
  /* 1723B0 80131CD0 25EF9548 */     addiu $t7, $t7, %lo(D_NF_00009548)
  /* 1723B4 80131CD4 00408025 */        or $s0, $v0, $zero
  /* 1723B8 80131CD8 00402025 */        or $a0, $v0, $zero
  /* 1723BC 80131CDC 00003025 */        or $a2, $zero, $zero
  /* 1723C0 80131CE0 2407001C */     addiu $a3, $zero, 0x1c
  /* 1723C4 80131CE4 AFA00010 */        sw $zero, 0x10($sp)
  /* 1723C8 80131CE8 AFA00014 */        sw $zero, 0x14($sp)
  /* 1723CC 80131CEC 0C003D64 */       jal func_8000F590
  /* 1723D0 80131CF0 01CF2821 */      addu $a1, $t6, $t7
  /* 1723D4 80131CF4 3C058001 */       lui $a1, %hi(odRenderDObjTreeForGObj)
  /* 1723D8 80131CF8 2418FFFF */     addiu $t8, $zero, -1
  /* 1723DC 80131CFC AFB80010 */        sw $t8, 0x10($sp)
  /* 1723E0 80131D00 24A54038 */     addiu $a1, $a1, %lo(odRenderDObjTreeForGObj)
  /* 1723E4 80131D04 02002025 */        or $a0, $s0, $zero
  /* 1723E8 80131D08 2406001B */     addiu $a2, $zero, 0x1b
  /* 1723EC 80131D0C 0C00277D */       jal omAddGObjRenderProc
  /* 1723F0 80131D10 3C078000 */       lui $a3, 0x8000
  /* 1723F4 80131D14 44800000 */      mtc1 $zero, $f0
  /* 1723F8 80131D18 8E190074 */        lw $t9, 0x74($s0)
  /* 1723FC 80131D1C 3C0A8013 */       lui $t2, %hi(D_ovl48_80132658)
  /* 172400 80131D20 3C0B0001 */       lui $t3, %hi(D_NF_000098C0)
  /* 172404 80131D24 E720001C */      swc1 $f0, 0x1c($t9)
  /* 172408 80131D28 8E080074 */        lw $t0, 0x74($s0)
  /* 17240C 80131D2C 256B98C0 */     addiu $t3, $t3, %lo(D_NF_000098C0)
  /* 172410 80131D30 44060000 */      mfc1 $a2, $f0
  /* 172414 80131D34 E5000020 */      swc1 $f0, 0x20($t0)
  /* 172418 80131D38 8E090074 */        lw $t1, 0x74($s0)
  /* 17241C 80131D3C 02002025 */        or $a0, $s0, $zero
  /* 172420 80131D40 E5200024 */      swc1 $f0, 0x24($t1)
  /* 172424 80131D44 8D4A2658 */        lw $t2, %lo(D_ovl48_80132658)($t2)
  /* 172428 80131D48 0C002F63 */       jal func_8000BD8C
  /* 17242C 80131D4C 014B2821 */      addu $a1, $t2, $t3
  /* 172430 80131D50 3C058001 */       lui $a1, %hi(func_8000DF34)
  /* 172434 80131D54 24A5DF34 */     addiu $a1, $a1, %lo(func_8000DF34)
  /* 172438 80131D58 02002025 */        or $a0, $s0, $zero
  /* 17243C 80131D5C 24060001 */     addiu $a2, $zero, 1
  /* 172440 80131D60 0C002062 */       jal omAddGObjCommonProc
  /* 172444 80131D64 24070001 */     addiu $a3, $zero, 1
  /* 172448 80131D68 8FBF0024 */        lw $ra, 0x24($sp)
  /* 17244C 80131D6C 8FB00020 */        lw $s0, 0x20($sp)
  /* 172450 80131D70 27BD0028 */     addiu $sp, $sp, 0x28
  /* 172454 80131D74 03E00008 */        jr $ra
  /* 172458 80131D78 00000000 */       nop 

glabel func_ovl48_80131D7C
  /* 17245C 80131D7C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 172460 80131D80 AFBF0024 */        sw $ra, 0x24($sp)
  /* 172464 80131D84 AFB00020 */        sw $s0, 0x20($sp)
  /* 172468 80131D88 00002025 */        or $a0, $zero, $zero
  /* 17246C 80131D8C 00002825 */        or $a1, $zero, $zero
  /* 172470 80131D90 24060011 */     addiu $a2, $zero, 0x11
  /* 172474 80131D94 0C00265A */       jal omMakeGObjCommon
  /* 172478 80131D98 3C078000 */       lui $a3, 0x8000
  /* 17247C 80131D9C 3C0E8013 */       lui $t6, %hi(D_ovl48_80132658)
  /* 172480 80131DA0 8DCE2658 */        lw $t6, %lo(D_ovl48_80132658)($t6)
  /* 172484 80131DA4 3C0F0001 */       lui $t7, %hi(D_NF_0000B2B0)
  /* 172488 80131DA8 25EFB2B0 */     addiu $t7, $t7, %lo(D_NF_0000B2B0)
  /* 17248C 80131DAC 00408025 */        or $s0, $v0, $zero
  /* 172490 80131DB0 00402025 */        or $a0, $v0, $zero
  /* 172494 80131DB4 00003025 */        or $a2, $zero, $zero
  /* 172498 80131DB8 2407001C */     addiu $a3, $zero, 0x1c
  /* 17249C 80131DBC AFA00010 */        sw $zero, 0x10($sp)
  /* 1724A0 80131DC0 AFA00014 */        sw $zero, 0x14($sp)
  /* 1724A4 80131DC4 0C003D64 */       jal func_8000F590
  /* 1724A8 80131DC8 01CF2821 */      addu $a1, $t6, $t7
  /* 1724AC 80131DCC 3C058001 */       lui $a1, %hi(odRenderDObjTreeDLLinksForGObj)
  /* 1724B0 80131DD0 2418FFFF */     addiu $t8, $zero, -1
  /* 1724B4 80131DD4 AFB80010 */        sw $t8, 0x10($sp)
  /* 1724B8 80131DD8 24A54768 */     addiu $a1, $a1, %lo(odRenderDObjTreeDLLinksForGObj)
  /* 1724BC 80131DDC 02002025 */        or $a0, $s0, $zero
  /* 1724C0 80131DE0 2406001B */     addiu $a2, $zero, 0x1b
  /* 1724C4 80131DE4 0C00277D */       jal omAddGObjRenderProc
  /* 1724C8 80131DE8 3C078000 */       lui $a3, 0x8000
  /* 1724CC 80131DEC 44800000 */      mtc1 $zero, $f0
  /* 1724D0 80131DF0 8E190074 */        lw $t9, 0x74($s0)
  /* 1724D4 80131DF4 3C0A8013 */       lui $t2, %hi(D_ovl48_80132658)
  /* 1724D8 80131DF8 3C0B0001 */       lui $t3, %hi(D_NF_0000B390)
  /* 1724DC 80131DFC E720001C */      swc1 $f0, 0x1c($t9)
  /* 1724E0 80131E00 8E080074 */        lw $t0, 0x74($s0)
  /* 1724E4 80131E04 256BB390 */     addiu $t3, $t3, %lo(D_NF_0000B390)
  /* 1724E8 80131E08 44060000 */      mfc1 $a2, $f0
  /* 1724EC 80131E0C E5000020 */      swc1 $f0, 0x20($t0)
  /* 1724F0 80131E10 8E090074 */        lw $t1, 0x74($s0)
  /* 1724F4 80131E14 02002025 */        or $a0, $s0, $zero
  /* 1724F8 80131E18 E5200024 */      swc1 $f0, 0x24($t1)
  /* 1724FC 80131E1C 8D4A2658 */        lw $t2, %lo(D_ovl48_80132658)($t2)
  /* 172500 80131E20 0C002F63 */       jal func_8000BD8C
  /* 172504 80131E24 014B2821 */      addu $a1, $t2, $t3
  /* 172508 80131E28 3C058001 */       lui $a1, %hi(func_8000DF34)
  /* 17250C 80131E2C 24A5DF34 */     addiu $a1, $a1, %lo(func_8000DF34)
  /* 172510 80131E30 02002025 */        or $a0, $s0, $zero
  /* 172514 80131E34 24060001 */     addiu $a2, $zero, 1
  /* 172518 80131E38 0C002062 */       jal omAddGObjCommonProc
  /* 17251C 80131E3C 24070001 */     addiu $a3, $zero, 1
  /* 172520 80131E40 8FBF0024 */        lw $ra, 0x24($sp)
  /* 172524 80131E44 8FB00020 */        lw $s0, 0x20($sp)
  /* 172528 80131E48 27BD0028 */     addiu $sp, $sp, 0x28
  /* 17252C 80131E4C 03E00008 */        jr $ra
  /* 172530 80131E50 00000000 */       nop 

glabel func_ovl48_80131E54
  /* 172534 80131E54 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 172538 80131E58 AFBF0024 */        sw $ra, 0x24($sp)
  /* 17253C 80131E5C AFB00020 */        sw $s0, 0x20($sp)
  /* 172540 80131E60 00002025 */        or $a0, $zero, $zero
  /* 172544 80131E64 00002825 */        or $a1, $zero, $zero
  /* 172548 80131E68 24060011 */     addiu $a2, $zero, 0x11
  /* 17254C 80131E6C 0C00265A */       jal omMakeGObjCommon
  /* 172550 80131E70 3C078000 */       lui $a3, 0x8000
  /* 172554 80131E74 3C0E8013 */       lui $t6, %hi(D_ovl48_80132658)
  /* 172558 80131E78 8DCE2658 */        lw $t6, %lo(D_ovl48_80132658)($t6)
  /* 17255C 80131E7C 3C0F0001 */       lui $t7, %hi(D_NF_0000C9E0)
  /* 172560 80131E80 25EFC9E0 */     addiu $t7, $t7, %lo(D_NF_0000C9E0)
  /* 172564 80131E84 00408025 */        or $s0, $v0, $zero
  /* 172568 80131E88 00402025 */        or $a0, $v0, $zero
  /* 17256C 80131E8C 00003025 */        or $a2, $zero, $zero
  /* 172570 80131E90 2407001C */     addiu $a3, $zero, 0x1c
  /* 172574 80131E94 AFA00010 */        sw $zero, 0x10($sp)
  /* 172578 80131E98 AFA00014 */        sw $zero, 0x14($sp)
  /* 17257C 80131E9C 0C003D64 */       jal func_8000F590
  /* 172580 80131EA0 01CF2821 */      addu $a1, $t6, $t7
  /* 172584 80131EA4 3C058001 */       lui $a1, %hi(odRenderDObjTreeDLLinksForGObj)
  /* 172588 80131EA8 2418FFFF */     addiu $t8, $zero, -1
  /* 17258C 80131EAC AFB80010 */        sw $t8, 0x10($sp)
  /* 172590 80131EB0 24A54768 */     addiu $a1, $a1, %lo(odRenderDObjTreeDLLinksForGObj)
  /* 172594 80131EB4 02002025 */        or $a0, $s0, $zero
  /* 172598 80131EB8 2406001B */     addiu $a2, $zero, 0x1b
  /* 17259C 80131EBC 0C00277D */       jal omAddGObjRenderProc
  /* 1725A0 80131EC0 3C078000 */       lui $a3, 0x8000
  /* 1725A4 80131EC4 44800000 */      mtc1 $zero, $f0
  /* 1725A8 80131EC8 8E190074 */        lw $t9, 0x74($s0)
  /* 1725AC 80131ECC 3C0A8013 */       lui $t2, %hi(D_ovl48_80132658)
  /* 1725B0 80131ED0 3C0B0001 */       lui $t3, %hi(D_NF_0000CAC0)
  /* 1725B4 80131ED4 E720001C */      swc1 $f0, 0x1c($t9)
  /* 1725B8 80131ED8 8E080074 */        lw $t0, 0x74($s0)
  /* 1725BC 80131EDC 256BCAC0 */     addiu $t3, $t3, %lo(D_NF_0000CAC0)
  /* 1725C0 80131EE0 44060000 */      mfc1 $a2, $f0
  /* 1725C4 80131EE4 E5000020 */      swc1 $f0, 0x20($t0)
  /* 1725C8 80131EE8 8E090074 */        lw $t1, 0x74($s0)
  /* 1725CC 80131EEC 02002025 */        or $a0, $s0, $zero
  /* 1725D0 80131EF0 E5200024 */      swc1 $f0, 0x24($t1)
  /* 1725D4 80131EF4 8D4A2658 */        lw $t2, %lo(D_ovl48_80132658)($t2)
  /* 1725D8 80131EF8 0C002F63 */       jal func_8000BD8C
  /* 1725DC 80131EFC 014B2821 */      addu $a1, $t2, $t3
  /* 1725E0 80131F00 3C058001 */       lui $a1, %hi(func_8000DF34)
  /* 1725E4 80131F04 24A5DF34 */     addiu $a1, $a1, %lo(func_8000DF34)
  /* 1725E8 80131F08 02002025 */        or $a0, $s0, $zero
  /* 1725EC 80131F0C 24060001 */     addiu $a2, $zero, 1
  /* 1725F0 80131F10 0C002062 */       jal omAddGObjCommonProc
  /* 1725F4 80131F14 24070001 */     addiu $a3, $zero, 1
  /* 1725F8 80131F18 8FBF0024 */        lw $ra, 0x24($sp)
  /* 1725FC 80131F1C 8FB00020 */        lw $s0, 0x20($sp)
  /* 172600 80131F20 27BD0028 */     addiu $sp, $sp, 0x28
  /* 172604 80131F24 03E00008 */        jr $ra
  /* 172608 80131F28 00000000 */       nop 

glabel func_ovl48_80131F2C
  /* 17260C 80131F2C 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 172610 80131F30 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 172614 80131F34 3C190800 */       lui $t9, (0x8000200 >> 16) # 134218240
  /* 172618 80131F38 AFBF0044 */        sw $ra, 0x44($sp)
  /* 17261C 80131F3C 37390200 */       ori $t9, $t9, (0x8000200 & 0xFFFF) # 134218240
  /* 172620 80131F40 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 172624 80131F44 240F0050 */     addiu $t7, $zero, 0x50
  /* 172628 80131F48 24180000 */     addiu $t8, $zero, 0
  /* 17262C 80131F4C 2408FFFF */     addiu $t0, $zero, -1
  /* 172630 80131F50 24090001 */     addiu $t1, $zero, 1
  /* 172634 80131F54 240A0001 */     addiu $t2, $zero, 1
  /* 172638 80131F58 240B0001 */     addiu $t3, $zero, 1
  /* 17263C 80131F5C AFB00040 */        sw $s0, 0x40($sp)
  /* 172640 80131F60 AFAB0030 */        sw $t3, 0x30($sp)
  /* 172644 80131F64 AFAA0028 */        sw $t2, 0x28($sp)
  /* 172648 80131F68 AFA90024 */        sw $t1, 0x24($sp)
  /* 17264C 80131F6C AFA80020 */        sw $t0, 0x20($sp)
  /* 172650 80131F70 AFB80018 */        sw $t8, 0x18($sp)
  /* 172654 80131F74 AFAF0014 */        sw $t7, 0x14($sp)
  /* 172658 80131F78 AFAE0010 */        sw $t6, 0x10($sp)
  /* 17265C 80131F7C AFB9001C */        sw $t9, 0x1c($sp)
  /* 172660 80131F80 AFA0002C */        sw $zero, 0x2c($sp)
  /* 172664 80131F84 AFA00034 */        sw $zero, 0x34($sp)
  /* 172668 80131F88 24040401 */     addiu $a0, $zero, 0x401
  /* 17266C 80131F8C 00002825 */        or $a1, $zero, $zero
  /* 172670 80131F90 24060010 */     addiu $a2, $zero, 0x10
  /* 172674 80131F94 0C002E4F */       jal func_8000B93C
  /* 172678 80131F98 3C078000 */       lui $a3, 0x8000
  /* 17267C 80131F9C 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 172680 80131FA0 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 172684 80131FA4 AFA2004C */        sw $v0, 0x4c($sp)
  /* 172688 80131FA8 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 17268C 80131FAC 8C500074 */        lw $s0, 0x74($v0)
  /* 172690 80131FB0 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 172694 80131FB4 44050000 */      mfc1 $a1, $f0
  /* 172698 80131FB8 44060000 */      mfc1 $a2, $f0
  /* 17269C 80131FBC 3C07439B */       lui $a3, 0x439b
  /* 1726A0 80131FC0 26040008 */     addiu $a0, $s0, 8
  /* 1726A4 80131FC4 0C001C20 */       jal func_80007080
  /* 1726A8 80131FC8 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 1726AC 80131FCC 3C014300 */       lui $at, (0x43000000 >> 16) # 128.0
  /* 1726B0 80131FD0 44813000 */      mtc1 $at, $f6 # 128.0 to cop1
  /* 1726B4 80131FD4 3C014680 */       lui $at, (0x46800000 >> 16) # 16384.0
  /* 1726B8 80131FD8 44814000 */      mtc1 $at, $f8 # 16384.0 to cop1
  /* 1726BC 80131FDC 3C0C8013 */       lui $t4, %hi(D_ovl48_80132658)
  /* 1726C0 80131FE0 E6060028 */      swc1 $f6, 0x28($s0)
  /* 1726C4 80131FE4 E608002C */      swc1 $f8, 0x2c($s0)
  /* 1726C8 80131FE8 8D8C2658 */        lw $t4, %lo(D_ovl48_80132658)($t4)
  /* 1726CC 80131FEC 3C0D0001 */       lui $t5, %hi(D_NF_0000D330)
  /* 1726D0 80131FF0 25ADD330 */     addiu $t5, $t5, %lo(D_NF_0000D330)
  /* 1726D4 80131FF4 02002025 */        or $a0, $s0, $zero
  /* 1726D8 80131FF8 24060000 */     addiu $a2, $zero, 0
  /* 1726DC 80131FFC 0C003E8F */       jal func_8000FA3C
  /* 1726E0 80132000 018D2821 */      addu $a1, $t4, $t5
  /* 1726E4 80132004 3C058001 */       lui $a1, %hi(func_80010580)
  /* 1726E8 80132008 24A50580 */     addiu $a1, $a1, %lo(func_80010580)
  /* 1726EC 8013200C 8FA4004C */        lw $a0, 0x4c($sp)
  /* 1726F0 80132010 24060001 */     addiu $a2, $zero, 1
  /* 1726F4 80132014 0C002062 */       jal omAddGObjCommonProc
  /* 1726F8 80132018 24070001 */     addiu $a3, $zero, 1
  /* 1726FC 8013201C 8FBF0044 */        lw $ra, 0x44($sp)
  /* 172700 80132020 8FB00040 */        lw $s0, 0x40($sp)
  /* 172704 80132024 27BD0050 */     addiu $sp, $sp, 0x50
  /* 172708 80132028 03E00008 */        jr $ra
  /* 17270C 8013202C 00000000 */       nop 

glabel func_ovl48_80132030
  /* 172710 80132030 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 172714 80132034 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 172718 80132038 AFBF003C */        sw $ra, 0x3c($sp)
  /* 17271C 8013203C 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 172720 80132040 240F005A */     addiu $t7, $zero, 0x5a
  /* 172724 80132044 24180000 */     addiu $t8, $zero, 0
  /* 172728 80132048 3C191000 */       lui $t9, 0x1000
  /* 17272C 8013204C 2408FFFF */     addiu $t0, $zero, -1
  /* 172730 80132050 24090001 */     addiu $t1, $zero, 1
  /* 172734 80132054 240A0001 */     addiu $t2, $zero, 1
  /* 172738 80132058 AFAA0030 */        sw $t2, 0x30($sp)
  /* 17273C 8013205C AFA90028 */        sw $t1, 0x28($sp)
  /* 172740 80132060 AFA80020 */        sw $t0, 0x20($sp)
  /* 172744 80132064 AFB9001C */        sw $t9, 0x1c($sp)
  /* 172748 80132068 AFB80018 */        sw $t8, 0x18($sp)
  /* 17274C 8013206C AFAF0014 */        sw $t7, 0x14($sp)
  /* 172750 80132070 AFAE0010 */        sw $t6, 0x10($sp)
  /* 172754 80132074 AFA00024 */        sw $zero, 0x24($sp)
  /* 172758 80132078 AFA0002C */        sw $zero, 0x2c($sp)
  /* 17275C 8013207C AFA00034 */        sw $zero, 0x34($sp)
  /* 172760 80132080 24040401 */     addiu $a0, $zero, 0x401
  /* 172764 80132084 00002825 */        or $a1, $zero, $zero
  /* 172768 80132088 24060010 */     addiu $a2, $zero, 0x10
  /* 17276C 8013208C 0C002E4F */       jal func_8000B93C
  /* 172770 80132090 3C078000 */       lui $a3, 0x8000
  /* 172774 80132094 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 172778 80132098 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 17277C 8013209C 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 172780 801320A0 8C430074 */        lw $v1, 0x74($v0)
  /* 172784 801320A4 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 172788 801320A8 44050000 */      mfc1 $a1, $f0
  /* 17278C 801320AC 44060000 */      mfc1 $a2, $f0
  /* 172790 801320B0 3C07439B */       lui $a3, 0x439b
  /* 172794 801320B4 24640008 */     addiu $a0, $v1, 8
  /* 172798 801320B8 0C001C20 */       jal func_80007080
  /* 17279C 801320BC E7A40010 */      swc1 $f4, 0x10($sp)
  /* 1727A0 801320C0 8FBF003C */        lw $ra, 0x3c($sp)
  /* 1727A4 801320C4 27BD0040 */     addiu $sp, $sp, 0x40
  /* 1727A8 801320C8 03E00008 */        jr $ra
  /* 1727AC 801320CC 00000000 */       nop 

glabel func_ovl48_801320D0
  /* 1727B0 801320D0 3C018013 */       lui $at, %hi(D_ovl48_8013248C)
  /* 1727B4 801320D4 03E00008 */        jr $ra
  /* 1727B8 801320D8 AC20248C */        sw $zero, %lo(D_ovl48_8013248C)($at)

glabel func_ovl48_801320DC
  /* 1727BC 801320DC 3C038013 */       lui $v1, %hi(D_ovl48_8013248C)
  /* 1727C0 801320E0 2463248C */     addiu $v1, $v1, %lo(D_ovl48_8013248C)
  /* 1727C4 801320E4 8C6E0000 */        lw $t6, ($v1) # D_ovl48_8013248C + 0
  /* 1727C8 801320E8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1727CC 801320EC AFBF0014 */        sw $ra, 0x14($sp)
  /* 1727D0 801320F0 25CF0001 */     addiu $t7, $t6, 1
  /* 1727D4 801320F4 29E1000A */      slti $at, $t7, 0xa
  /* 1727D8 801320F8 AFA40018 */        sw $a0, 0x18($sp)
  /* 1727DC 801320FC 14200026 */      bnez $at, .L80132198
  /* 1727E0 80132100 AC6F0000 */        sw $t7, ($v1) # D_ovl48_8013248C + 0
  /* 1727E4 80132104 3C068013 */       lui $a2, %hi(D_ovl48_8013249C)
  /* 1727E8 80132108 24C6249C */     addiu $a2, $a2, %lo(D_ovl48_8013249C)
  /* 1727EC 8013210C 8CC20000 */        lw $v0, ($a2) # D_ovl48_8013249C + 0
  /* 1727F0 80132110 2404FFF1 */     addiu $a0, $zero, -0xf
  /* 1727F4 80132114 10400002 */      beqz $v0, .L80132120
  /* 1727F8 80132118 2459FFFF */     addiu $t9, $v0, -1
  /* 1727FC 8013211C ACD90000 */        sw $t9, ($a2) # D_ovl48_8013249C + 0
  .L80132120:
  /* 172800 80132120 0C0E4281 */       jal func_ovl1_80390A04
  /* 172804 80132124 2405000F */     addiu $a1, $zero, 0xf
  /* 172808 80132128 10400006 */      beqz $v0, .L80132144
  /* 17280C 8013212C 2404FFF1 */     addiu $a0, $zero, -0xf
  /* 172810 80132130 0C0E42B0 */       jal func_ovl1_80390AC0
  /* 172814 80132134 2405000F */     addiu $a1, $zero, 0xf
  /* 172818 80132138 10400002 */      beqz $v0, .L80132144
  /* 17281C 8013213C 3C018013 */       lui $at, %hi(D_ovl48_8013249C)
  /* 172820 80132140 AC20249C */        sw $zero, %lo(D_ovl48_8013249C)($at)
  .L80132144:
  /* 172824 80132144 0C0E41DB */       jal func_ovl1_8039076C
  /* 172828 80132148 3404D000 */       ori $a0, $zero, 0xd000
  /* 17282C 8013214C 10400007 */      beqz $v0, .L8013216C
  /* 172830 80132150 24090001 */     addiu $t1, $zero, 1
  /* 172834 80132154 3C02800A */       lui $v0, %hi(gSceneData)
  /* 172838 80132158 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 17283C 8013215C 90480000 */       lbu $t0, ($v0) # gSceneData + 0
  /* 172840 80132160 A0490000 */        sb $t1, ($v0) # gSceneData + 0
  /* 172844 80132164 0C00171D */       jal func_80005C74
  /* 172848 80132168 A0480001 */        sb $t0, 1($v0) # gSceneData + 1
  .L8013216C:
  /* 17284C 8013216C 3C0A8013 */       lui $t2, %hi(D_ovl48_8013248C)
  /* 172850 80132170 8D4A248C */        lw $t2, %lo(D_ovl48_8013248C)($t2)
  /* 172854 80132174 3C02800A */       lui $v0, %hi(gSceneData)
  /* 172858 80132178 240100A0 */     addiu $at, $zero, 0xa0
  /* 17285C 8013217C 15410006 */       bne $t2, $at, .L80132198
  /* 172860 80132180 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 172864 80132184 904B0000 */       lbu $t3, ($v0) # gSceneData + 0
  /* 172868 80132188 240C002D */     addiu $t4, $zero, 0x2d
  /* 17286C 8013218C A04C0000 */        sb $t4, ($v0) # gSceneData + 0
  /* 172870 80132190 0C00171D */       jal func_80005C74
  /* 172874 80132194 A04B0001 */        sb $t3, 1($v0) # gSceneData + 1
  .L80132198:
  /* 172878 80132198 8FBF0014 */        lw $ra, 0x14($sp)
  /* 17287C 8013219C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 172880 801321A0 03E00008 */        jr $ra
  /* 172884 801321A4 00000000 */       nop 

  /* 172888 801321A8 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 17288C 801321AC 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 172890 801321B0 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 172894 801321B4 3C188013 */       lui $t8, %hi(D_ovl48_801324A0)
  /* 172898 801321B8 3C088013 */       lui $t0, %hi(D_ovl48_80132620)
  /* 17289C 801321BC AFBF001C */        sw $ra, 0x1c($sp)
  /* 1728A0 801321C0 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 1728A4 801321C4 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 1728A8 801321C8 271824A0 */     addiu $t8, $t8, %lo(D_ovl48_801324A0)
  /* 1728AC 801321CC 24190030 */     addiu $t9, $zero, 0x30
  /* 1728B0 801321D0 25082620 */     addiu $t0, $t0, %lo(D_ovl48_80132620)
  /* 1728B4 801321D4 24090007 */     addiu $t1, $zero, 7
  /* 1728B8 801321D8 AFAE002C */        sw $t6, 0x2c($sp)
  /* 1728BC 801321DC AFAF0030 */        sw $t7, 0x30($sp)
  /* 1728C0 801321E0 AFA00034 */        sw $zero, 0x34($sp)
  /* 1728C4 801321E4 AFA00038 */        sw $zero, 0x38($sp)
  /* 1728C8 801321E8 AFB8003C */        sw $t8, 0x3c($sp)
  /* 1728CC 801321EC AFB90040 */        sw $t9, 0x40($sp)
  /* 1728D0 801321F0 AFA80044 */        sw $t0, 0x44($sp)
  /* 1728D4 801321F4 AFA90048 */        sw $t1, 0x48($sp)
  /* 1728D8 801321F8 0C0337DE */       jal rdManagerInitSetup
  /* 1728DC 801321FC 27A4002C */     addiu $a0, $sp, 0x2c
  /* 1728E0 80132200 3C048013 */       lui $a0, %hi(D_ovl48_801323A0)
  /* 1728E4 80132204 248423A0 */     addiu $a0, $a0, %lo(D_ovl48_801323A0)
  /* 1728E8 80132208 0C0337BB */       jal rdManagerGetAllocSize
  /* 1728EC 8013220C 24050001 */     addiu $a1, $zero, 1
  /* 1728F0 80132210 00402025 */        or $a0, $v0, $zero
  /* 1728F4 80132214 0C001260 */       jal hlMemoryAlloc
  /* 1728F8 80132218 24050010 */     addiu $a1, $zero, 0x10
  /* 1728FC 8013221C 3C048013 */       lui $a0, %hi(D_ovl48_801323A0)
  /* 172900 80132220 3C068013 */       lui $a2, %hi(D_ovl48_80132658)
  /* 172904 80132224 24C62658 */     addiu $a2, $a2, %lo(D_ovl48_80132658)
  /* 172908 80132228 248423A0 */     addiu $a0, $a0, %lo(D_ovl48_801323A0)
  /* 17290C 8013222C 24050001 */     addiu $a1, $zero, 1
  /* 172910 80132230 0C033781 */       jal rdManagerLoadFiles
  /* 172914 80132234 00403825 */        or $a3, $v0, $zero
  /* 172918 80132238 3C058013 */       lui $a1, %hi(func_ovl48_801320DC)
  /* 17291C 8013223C 24A520DC */     addiu $a1, $a1, %lo(func_ovl48_801320DC)
  /* 172920 80132240 00002025 */        or $a0, $zero, $zero
  /* 172924 80132244 00003025 */        or $a2, $zero, $zero
  /* 172928 80132248 0C00265A */       jal omMakeGObjCommon
  /* 17292C 8013224C 3C078000 */       lui $a3, 0x8000
  /* 172930 80132250 240A00FF */     addiu $t2, $zero, 0xff
  /* 172934 80132254 AFAA0010 */        sw $t2, 0x10($sp)
  /* 172938 80132258 00002025 */        or $a0, $zero, $zero
  /* 17293C 8013225C 3C058000 */       lui $a1, 0x8000
  /* 172940 80132260 24060064 */     addiu $a2, $zero, 0x64
  /* 172944 80132264 0C002E7F */       jal func_8000B9FC
  /* 172948 80132268 24070003 */     addiu $a3, $zero, 3
  /* 17294C 8013226C 0C045624 */       jal func_ovl2_80115890
  /* 172950 80132270 00000000 */       nop 
  /* 172954 80132274 0C04C834 */       jal func_ovl48_801320D0
  /* 172958 80132278 00000000 */       nop 
  /* 17295C 8013227C 0C03F4C0 */       jal efManager_AllocUserData
  /* 172960 80132280 00000000 */       nop 
  /* 172964 80132284 24040001 */     addiu $a0, $zero, 1
  /* 172968 80132288 0C035C65 */       jal ftManager_AllocFighterData
  /* 17296C 8013228C 24050001 */     addiu $a1, $zero, 1
  /* 172970 80132290 0C035E1B */       jal ftManager_SetFileDataKind
  /* 172974 80132294 24040009 */     addiu $a0, $zero, 9
  /* 172978 80132298 3C048013 */       lui $a0, %hi(D_ovl2_80130D9C)
  /* 17297C 8013229C 8C840D9C */        lw $a0, %lo(D_ovl2_80130D9C)($a0)
  /* 172980 801322A0 0C001260 */       jal hlMemoryAlloc
  /* 172984 801322A4 24050010 */     addiu $a1, $zero, 0x10
  /* 172988 801322A8 3C018013 */       lui $at, %hi(D_ovl48_80132488)
  /* 17298C 801322AC 0C04C7CB */       jal func_ovl48_80131F2C
  /* 172990 801322B0 AC222488 */        sw $v0, %lo(D_ovl48_80132488)($at)
  /* 172994 801322B4 0C04C80C */       jal func_ovl48_80132030
  /* 172998 801322B8 00000000 */       nop 
  /* 17299C 801322BC 0C04C6D6 */       jal func_ovl48_80131B58
  /* 1729A0 801322C0 00000000 */       nop 
  /* 1729A4 801322C4 0C04C6F5 */       jal func_ovl48_80131BD4
  /* 1729A8 801322C8 00000000 */       nop 
  /* 1729AC 801322CC 0C04C729 */       jal func_ovl48_80131CA4
  /* 1729B0 801322D0 00000000 */       nop 
  /* 1729B4 801322D4 0C04C75F */       jal func_ovl48_80131D7C
  /* 1729B8 801322D8 00000000 */       nop 
  /* 1729BC 801322DC 0C04C795 */       jal func_ovl48_80131E54
  /* 1729C0 801322E0 00000000 */       nop 
  /* 1729C4 801322E4 3C014234 */       lui $at, (0x42340000 >> 16) # 45.0
  /* 1729C8 801322E8 44816000 */      mtc1 $at, $f12 # 45.0 to cop1
  /* 1729CC 801322EC 240B00FF */     addiu $t3, $zero, 0xff
  /* 1729D0 801322F0 240C00FF */     addiu $t4, $zero, 0xff
  /* 1729D4 801322F4 AFAC0014 */        sw $t4, 0x14($sp)
  /* 1729D8 801322F8 AFAB0010 */        sw $t3, 0x10($sp)
  /* 1729DC 801322FC 240600FF */     addiu $a2, $zero, 0xff
  /* 1729E0 80132300 240700FF */     addiu $a3, $zero, 0xff
  /* 1729E4 80132304 0C0E4138 */       jal func_ovl1_803904E0
  /* 1729E8 80132308 46006386 */     mov.s $f14, $f12
  /* 1729EC 8013230C 0C00024B */       jal func_8000092C
  /* 1729F0 80132310 00000000 */       nop 
  /* 1729F4 80132314 2C410A82 */     sltiu $at, $v0, 0xa82
  /* 1729F8 80132318 50200007 */      beql $at, $zero, .L80132338
  /* 1729FC 8013231C 8FBF001C */        lw $ra, 0x1c($sp)
  .L80132320:
  /* 172A00 80132320 0C00024B */       jal func_8000092C
  /* 172A04 80132324 00000000 */       nop 
  /* 172A08 80132328 2C410A82 */     sltiu $at, $v0, 0xa82
  /* 172A0C 8013232C 1420FFFC */      bnez $at, .L80132320
  /* 172A10 80132330 00000000 */       nop 
  /* 172A14 80132334 8FBF001C */        lw $ra, 0x1c($sp)
  .L80132338:
  /* 172A18 80132338 27BD0050 */     addiu $sp, $sp, 0x50
  /* 172A1C 8013233C 03E00008 */        jr $ra
  /* 172A20 80132340 00000000 */       nop 

glabel intro_pika_pokeball_entry
  /* 172A24 80132344 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 172A28 80132348 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 172A2C 8013234C 3C048013 */       lui $a0, %hi(D_ovl48_801323D8)
  /* 172A30 80132350 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 172A34 80132354 248423D8 */     addiu $a0, $a0, %lo(D_ovl48_801323D8)
  /* 172A38 80132358 AFBF0014 */        sw $ra, 0x14($sp)
  /* 172A3C 8013235C 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 172A40 80132360 0C001C09 */       jal func_80007024
  /* 172A44 80132364 AC8F000C */        sw $t7, 0xc($a0) # D_ovl48_801323D8 + 12
  /* 172A48 80132368 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 172A4C 8013236C 3C198013 */       lui $t9, %hi(D_NF_80132660)
  /* 172A50 80132370 3C048013 */       lui $a0, %hi(D_ovl48_801323F4)
  /* 172A54 80132374 27392660 */     addiu $t9, $t9, %lo(D_NF_80132660)
  /* 172A58 80132378 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 172A5C 8013237C 248423F4 */     addiu $a0, $a0, %lo(D_ovl48_801323F4)
  /* 172A60 80132380 03194023 */      subu $t0, $t8, $t9
  /* 172A64 80132384 0C001A0F */       jal func_8000683C
  /* 172A68 80132388 AC880010 */        sw $t0, 0x10($a0) # D_ovl48_801323F4 + 16
  /* 172A6C 8013238C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 172A70 80132390 27BD0018 */     addiu $sp, $sp, 0x18
  /* 172A74 80132394 03E00008 */        jr $ra
  /* 172A78 80132398 00000000 */       nop 

  /* 172A7C 8013239C 00000000 */       nop 
