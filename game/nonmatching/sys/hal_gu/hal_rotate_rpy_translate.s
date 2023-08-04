.section .late_rodata

glabel D_8003E3BC
  /* 3DFBC 03EFBC 8003E3BC */
  .word 0x4422f983 # .float 651.8986

.section .text
glabel hal_rotate_rpy_translate
  /* 01CE1C 8001C21C 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 01CE20 8001C220 3C018004 */       lui $at, %hi(D_8003E3BC)
  /* 01CE24 8001C224 C420E3BC */      lwc1 $f0, %lo(D_8003E3BC)($at)
  /* 01CE28 8001C228 C7A40048 */      lwc1 $f4, 0x48($sp)
  /* 01CE2C 8001C22C C7AA004C */      lwc1 $f10, 0x4c($sp)
  /* 01CE30 8001C230 44866000 */      mtc1 $a2, $f12
  /* 01CE34 8001C234 46002182 */     mul.s $f6, $f4, $f0
  /* 01CE38 8001C238 C7A40050 */      lwc1 $f4, 0x50($sp)
  /* 01CE3C 8001C23C 3C0C8004 */       lui $t4, %hi(gSinTable)
  /* 01CE40 8001C240 46005402 */     mul.s $f16, $f10, $f0
  /* 01CE44 8001C244 258CB950 */     addiu $t4, $t4, %lo(gSinTable)
  /* 01CE48 8001C248 AFA70044 */        sw $a3, 0x44($sp)
  /* 01CE4C 8001C24C 44857000 */      mtc1 $a1, $f14
  /* 01CE50 8001C250 AFB00004 */        sw $s0, 4($sp)
  /* 01CE54 8001C254 4600320D */ trunc.w.s $f8, $f6
  /* 01CE58 8001C258 46002182 */     mul.s $f6, $f4, $f0
  /* 01CE5C 8001C25C 44034000 */      mfc1 $v1, $f8
  /* 01CE60 8001C260 4600848D */ trunc.w.s $f18, $f16
  /* 01CE64 8001C264 30630FFF */      andi $v1, $v1, 0xfff
  /* 01CE68 8001C268 3066FFFF */      andi $a2, $v1, 0xffff
  /* 01CE6C 8001C26C 4600320D */ trunc.w.s $f8, $f6
  /* 01CE70 8001C270 30CF07FF */      andi $t7, $a2, 0x7ff
  /* 01CE74 8001C274 000FC040 */       sll $t8, $t7, 1
  /* 01CE78 8001C278 0198C821 */      addu $t9, $t4, $t8
  /* 01CE7C 8001C27C 30CE0800 */      andi $t6, $a2, 0x800
  /* 01CE80 8001C280 44039000 */      mfc1 $v1, $f18
  /* 01CE84 8001C284 44094000 */      mfc1 $t1, $f8
  /* 01CE88 8001C288 11C00002 */      beqz $t6, .L8001C294
  /* 01CE8C 8001C28C 97270000 */       lhu $a3, ($t9)
  /* 01CE90 8001C290 00073823 */      negu $a3, $a3
  .L8001C294:
  /* 01CE94 8001C294 24C20400 */     addiu $v0, $a2, 0x400
  /* 01CE98 8001C298 304F07FF */      andi $t7, $v0, 0x7ff
  /* 01CE9C 8001C29C 000FC040 */       sll $t8, $t7, 1
  /* 01CEA0 8001C2A0 0198C821 */      addu $t9, $t4, $t8
  /* 01CEA4 8001C2A4 304E0800 */      andi $t6, $v0, 0x800
  /* 01CEA8 8001C2A8 11C00002 */      beqz $t6, .L8001C2B4
  /* 01CEAC 8001C2AC 97250000 */       lhu $a1, ($t9)
  /* 01CEB0 8001C2B0 00052823 */      negu $a1, $a1
  .L8001C2B4:
  /* 01CEB4 8001C2B4 30630FFF */      andi $v1, $v1, 0xfff
  /* 01CEB8 8001C2B8 3068FFFF */      andi $t0, $v1, 0xffff
  /* 01CEBC 8001C2BC 311807FF */      andi $t8, $t0, 0x7ff
  /* 01CEC0 8001C2C0 0018C840 */       sll $t9, $t8, 1
  /* 01CEC4 8001C2C4 01997021 */      addu $t6, $t4, $t9
  /* 01CEC8 8001C2C8 310F0800 */      andi $t7, $t0, 0x800
  /* 01CECC 8001C2CC 11E00002 */      beqz $t7, .L8001C2D8
  /* 01CED0 8001C2D0 95C60000 */       lhu $a2, ($t6)
  /* 01CED4 8001C2D4 00063023 */      negu $a2, $a2
  .L8001C2D8:
  /* 01CED8 8001C2D8 25020400 */     addiu $v0, $t0, 0x400
  /* 01CEDC 8001C2DC 305807FF */      andi $t8, $v0, 0x7ff
  /* 01CEE0 8001C2E0 0018C840 */       sll $t9, $t8, 1
  /* 01CEE4 8001C2E4 01997021 */      addu $t6, $t4, $t9
  /* 01CEE8 8001C2E8 304F0800 */      andi $t7, $v0, 0x800
  /* 01CEEC 8001C2EC 11E00002 */      beqz $t7, .L8001C2F8
  /* 01CEF0 8001C2F0 95C30000 */       lhu $v1, ($t6)
  /* 01CEF4 8001C2F4 00031823 */      negu $v1, $v1
  .L8001C2F8:
  /* 01CEF8 8001C2F8 31290FFF */      andi $t1, $t1, 0xfff
  /* 01CEFC 8001C2FC 312AFFFF */      andi $t2, $t1, 0xffff
  /* 01CF00 8001C300 315907FF */      andi $t9, $t2, 0x7ff
  /* 01CF04 8001C304 00197040 */       sll $t6, $t9, 1
  /* 01CF08 8001C308 018E7821 */      addu $t7, $t4, $t6
  /* 01CF0C 8001C30C 31580800 */      andi $t8, $t2, 0x800
  /* 01CF10 8001C310 13000002 */      beqz $t8, .L8001C31C
  /* 01CF14 8001C314 95E20000 */       lhu $v0, ($t7)
  /* 01CF18 8001C318 00021023 */      negu $v0, $v0
  .L8001C31C:
  /* 01CF1C 8001C31C 25480400 */     addiu $t0, $t2, 0x400
  /* 01CF20 8001C320 311907FF */      andi $t9, $t0, 0x7ff
  /* 01CF24 8001C324 00197040 */       sll $t6, $t9, 1
  /* 01CF28 8001C328 018E7821 */      addu $t7, $t4, $t6
  /* 01CF2C 8001C32C 31180800 */      andi $t8, $t0, 0x800
  /* 01CF30 8001C330 13000002 */      beqz $t8, .L8001C33C
  /* 01CF34 8001C334 95EB0000 */       lhu $t3, ($t7)
  /* 01CF38 8001C338 000B5823 */      negu $t3, $t3
  .L8001C33C:
  /* 01CF3C 8001C33C 006B0019 */     multu $v1, $t3
  /* 01CF40 8001C340 3C10FFFF */       lui $s0, 0xffff
  /* 01CF44 8001C344 00065023 */      negu $t2, $a2
  /* 01CF48 8001C348 000A5040 */       sll $t2, $t2, 1
  /* 01CF4C 8001C34C 3C014780 */       lui $at, (0x47800000 >> 16) # 65536.0
  /* 01CF50 8001C350 44810000 */      mtc1 $at, $f0 # 65536.0 to cop1
  /* 01CF54 8001C354 00000000 */       nop 
  /* 01CF58 8001C358 46007282 */     mul.s $f10, $f14, $f0
  /* 01CF5C 8001C35C 00004012 */      mflo $t0
  /* 01CF60 8001C360 00084383 */       sra $t0, $t0, 0xe
  /* 01CF64 8001C364 0110C824 */       and $t9, $t0, $s0
  /* 01CF68 8001C368 00620019 */     multu $v1, $v0
  /* 01CF6C 8001C36C 0008C400 */       sll $t8, $t0, 0x10
  /* 01CF70 8001C370 46006482 */     mul.s $f18, $f12, $f0
  /* 01CF74 8001C374 4600540D */ trunc.w.s $f16, $f10
  /* 01CF78 8001C378 4600910D */ trunc.w.s $f4, $f18
  /* 01CF7C 8001C37C 00004812 */      mflo $t1
  /* 01CF80 8001C380 00094B83 */       sra $t1, $t1, 0xe
  /* 01CF84 8001C384 00097402 */       srl $t6, $t1, 0x10
  /* 01CF88 8001C388 00E60019 */     multu $a3, $a2
  /* 01CF8C 8001C38C 032E7825 */        or $t7, $t9, $t6
  /* 01CF90 8001C390 3139FFFF */      andi $t9, $t1, 0xffff
  /* 01CF94 8001C394 03197025 */        or $t6, $t8, $t9
  /* 01CF98 8001C398 AC8F0000 */        sw $t7, ($a0)
  /* 01CF9C 8001C39C 01507824 */       and $t7, $t2, $s0
  /* 01CFA0 8001C3A0 AC8F0004 */        sw $t7, 4($a0)
  /* 01CFA4 8001C3A4 AC8E0020 */        sw $t6, 0x20($a0)
  /* 01CFA8 8001C3A8 000AC400 */       sll $t8, $t2, 0x10
  /* 01CFAC 8001C3AC AC980024 */        sw $t8, 0x24($a0)
  /* 01CFB0 8001C3B0 00006012 */      mflo $t4
  /* 01CFB4 8001C3B4 000C63C3 */       sra $t4, $t4, 0xf
  /* 01CFB8 8001C3B8 00000000 */       nop 
  /* 01CFBC 8001C3BC 018B0019 */     multu $t4, $t3
  /* 01CFC0 8001C3C0 0000C812 */      mflo $t9
  /* 01CFC4 8001C3C4 00197383 */       sra $t6, $t9, 0xe
  /* 01CFC8 8001C3C8 00000000 */       nop 
  /* 01CFCC 8001C3CC 00A20019 */     multu $a1, $v0
  /* 01CFD0 8001C3D0 00007812 */      mflo $t7
  /* 01CFD4 8001C3D4 000FC383 */       sra $t8, $t7, 0xe
  /* 01CFD8 8001C3D8 01D86823 */      subu $t5, $t6, $t8
  /* 01CFDC 8001C3DC 01820019 */     multu $t4, $v0
  /* 01CFE0 8001C3E0 0000C812 */      mflo $t9
  /* 01CFE4 8001C3E4 00197B83 */       sra $t7, $t9, 0xe
  /* 01CFE8 8001C3E8 00000000 */       nop 
  /* 01CFEC 8001C3EC 00AB0019 */     multu $a1, $t3
  /* 01CFF0 8001C3F0 00007012 */      mflo $t6
  /* 01CFF4 8001C3F4 000EC383 */       sra $t8, $t6, 0xe
  /* 01CFF8 8001C3F8 01F8C821 */      addu $t9, $t7, $t8
  /* 01CFFC 8001C3FC 00E30019 */     multu $a3, $v1
  /* 01D000 8001C400 00197402 */       srl $t6, $t9, 0x10
  /* 01D004 8001C404 01B07824 */       and $t7, $t5, $s0
  /* 01D008 8001C408 01EEC025 */        or $t8, $t7, $t6
  /* 01D00C 8001C40C AFB90008 */        sw $t9, 8($sp)
  /* 01D010 8001C410 AC980008 */        sw $t8, 8($a0)
  /* 01D014 8001C414 8FAF0008 */        lw $t7, 8($sp)
  /* 01D018 8001C418 000DCC00 */       sll $t9, $t5, 0x10
  /* 01D01C 8001C41C 31EEFFFF */      andi $t6, $t7, 0xffff
  /* 01D020 8001C420 00004012 */      mflo $t0
  /* 01D024 8001C424 032EC025 */        or $t8, $t9, $t6
  /* 01D028 8001C428 00084383 */       sra $t0, $t0, 0xe
  /* 01D02C 8001C42C 00A60019 */     multu $a1, $a2
  /* 01D030 8001C430 01107824 */       and $t7, $t0, $s0
  /* 01D034 8001C434 AC8F000C */        sw $t7, 0xc($a0)
  /* 01D038 8001C438 AC980028 */        sw $t8, 0x28($a0)
  /* 01D03C 8001C43C 0008CC00 */       sll $t9, $t0, 0x10
  /* 01D040 8001C440 AC99002C */        sw $t9, 0x2c($a0)
  /* 01D044 8001C444 44062000 */      mfc1 $a2, $f4
  /* 01D048 8001C448 00004812 */      mflo $t1
  /* 01D04C 8001C44C 00094BC3 */       sra $t1, $t1, 0xf
  /* 01D050 8001C450 00000000 */       nop 
  /* 01D054 8001C454 012B0019 */     multu $t1, $t3
  /* 01D058 8001C458 00007012 */      mflo $t6
  /* 01D05C 8001C45C 000EC383 */       sra $t8, $t6, 0xe
  /* 01D060 8001C460 00000000 */       nop 
  /* 01D064 8001C464 00E20019 */     multu $a3, $v0
  /* 01D068 8001C468 00007812 */      mflo $t7
  /* 01D06C 8001C46C 000FCB83 */       sra $t9, $t7, 0xe
  /* 01D070 8001C470 03196021 */      addu $t4, $t8, $t9
  /* 01D074 8001C474 01220019 */     multu $t1, $v0
  /* 01D078 8001C478 00007012 */      mflo $t6
  /* 01D07C 8001C47C 000E7B83 */       sra $t7, $t6, 0xe
  /* 01D080 8001C480 01907024 */       and $t6, $t4, $s0
  /* 01D084 8001C484 00EB0019 */     multu $a3, $t3
  /* 01D088 8001C488 44078000 */      mfc1 $a3, $f16
  /* 01D08C 8001C48C 0000C012 */      mflo $t8
  /* 01D090 8001C490 0018CB83 */       sra $t9, $t8, 0xe
  /* 01D094 8001C494 01F95023 */      subu $t2, $t7, $t9
  /* 01D098 8001C498 00A30019 */     multu $a1, $v1
  /* 01D09C 8001C49C 000AC402 */       srl $t8, $t2, 0x10
  /* 01D0A0 8001C4A0 01D87825 */        or $t7, $t6, $t8
  /* 01D0A4 8001C4A4 314EFFFF */      andi $t6, $t2, 0xffff
  /* 01D0A8 8001C4A8 000CCC00 */       sll $t9, $t4, 0x10
  /* 01D0AC 8001C4AC AC8F0010 */        sw $t7, 0x10($a0)
  /* 01D0B0 8001C4B0 032EC025 */        or $t8, $t9, $t6
  /* 01D0B4 8001C4B4 AC980030 */        sw $t8, 0x30($a0)
  /* 01D0B8 8001C4B8 0007C400 */       sll $t8, $a3, 0x10
  /* 01D0BC 8001C4BC 00001012 */      mflo $v0
  /* 01D0C0 8001C4C0 00021383 */       sra $v0, $v0, 0xe
  /* 01D0C4 8001C4C4 00507824 */       and $t7, $v0, $s0
  /* 01D0C8 8001C4C8 0002CC00 */       sll $t9, $v0, 0x10
  /* 01D0CC 8001C4CC AC8F0014 */        sw $t7, 0x14($a0)
  /* 01D0D0 8001C4D0 AC990034 */        sw $t9, 0x34($a0)
  /* 01D0D4 8001C4D4 0006CC02 */       srl $t9, $a2, 0x10
  /* 01D0D8 8001C4D8 00F07824 */       and $t7, $a3, $s0
  /* 01D0DC 8001C4DC 01F97025 */        or $t6, $t7, $t9
  /* 01D0E0 8001C4E0 30CFFFFF */      andi $t7, $a2, 0xffff
  /* 01D0E4 8001C4E4 030FC825 */        or $t9, $t8, $t7
  /* 01D0E8 8001C4E8 AC8E0018 */        sw $t6, 0x18($a0)
  /* 01D0EC 8001C4EC AC990038 */        sw $t9, 0x38($a0)
  /* 01D0F0 8001C4F0 C7A60044 */      lwc1 $f6, 0x44($sp)
  /* 01D0F4 8001C4F4 46003202 */     mul.s $f8, $f6, $f0
  /* 01D0F8 8001C4F8 4600428D */ trunc.w.s $f10, $f8
  /* 01D0FC 8001C4FC 44085000 */      mfc1 $t0, $f10
  /* 01D100 8001C500 00000000 */       nop 
  /* 01D104 8001C504 0110C024 */       and $t8, $t0, $s0
  /* 01D108 8001C508 370F0001 */       ori $t7, $t8, 1
  /* 01D10C 8001C50C 0008CC00 */       sll $t9, $t0, 0x10
  /* 01D110 8001C510 AC8F001C */        sw $t7, 0x1c($a0)
  /* 01D114 8001C514 AC99003C */        sw $t9, 0x3c($a0)
  /* 01D118 8001C518 8FB00004 */        lw $s0, 4($sp)
  /* 01D11C 8001C51C 03E00008 */        jr $ra
  /* 01D120 8001C520 27BD0038 */     addiu $sp, $sp, 0x38

