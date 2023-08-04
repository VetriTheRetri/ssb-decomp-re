.section .late_rodata

glabel D_8003E3B8
  /* 3DFB8 03EFB8 8003E3B8 */
  .word 0x4422f983 # .float 651.8986

.section .text
glabel hal_rotate_rpy
  /* 01CB20 8001BF20 3C018004 */       lui $at, %hi(D_8003E3B8)
  /* 01CB24 8001BF24 C420E3B8 */      lwc1 $f0, %lo(D_8003E3B8)($at)
  /* 01CB28 8001BF28 44856000 */      mtc1 $a1, $f12
  /* 01CB2C 8001BF2C 44867000 */      mtc1 $a2, $f14
  /* 01CB30 8001BF30 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 01CB34 8001BF34 46006102 */     mul.s $f4, $f12, $f0
  /* 01CB38 8001BF38 AFA70044 */        sw $a3, 0x44($sp)
  /* 01CB3C 8001BF3C C7B00044 */      lwc1 $f16, 0x44($sp)
  /* 01CB40 8001BF40 46007202 */     mul.s $f8, $f14, $f0
  /* 01CB44 8001BF44 3C0C8004 */       lui $t4, %hi(gSinTable)
  /* 01CB48 8001BF48 258CB950 */     addiu $t4, $t4, %lo(gSinTable)
  /* 01CB4C 8001BF4C 46008482 */     mul.s $f18, $f16, $f0
  /* 01CB50 8001BF50 AFB00004 */        sw $s0, 4($sp)
  /* 01CB54 8001BF54 4600218D */ trunc.w.s $f6, $f4
  /* 01CB58 8001BF58 4600428D */ trunc.w.s $f10, $f8
  /* 01CB5C 8001BF5C 44033000 */      mfc1 $v1, $f6
  /* 01CB60 8001BF60 4600910D */ trunc.w.s $f4, $f18
  /* 01CB64 8001BF64 30630FFF */      andi $v1, $v1, 0xfff
  /* 01CB68 8001BF68 3066FFFF */      andi $a2, $v1, 0xffff
  /* 01CB6C 8001BF6C 30CF07FF */      andi $t7, $a2, 0x7ff
  /* 01CB70 8001BF70 000FC040 */       sll $t8, $t7, 1
  /* 01CB74 8001BF74 0198C821 */      addu $t9, $t4, $t8
  /* 01CB78 8001BF78 30CE0800 */      andi $t6, $a2, 0x800
  /* 01CB7C 8001BF7C 44035000 */      mfc1 $v1, $f10
  /* 01CB80 8001BF80 44092000 */      mfc1 $t1, $f4
  /* 01CB84 8001BF84 11C00002 */      beqz $t6, .L8001BF90
  /* 01CB88 8001BF88 97270000 */       lhu $a3, ($t9)
  /* 01CB8C 8001BF8C 00073823 */      negu $a3, $a3
  .L8001BF90:
  /* 01CB90 8001BF90 24C20400 */     addiu $v0, $a2, 0x400
  /* 01CB94 8001BF94 304F07FF */      andi $t7, $v0, 0x7ff
  /* 01CB98 8001BF98 000FC040 */       sll $t8, $t7, 1
  /* 01CB9C 8001BF9C 0198C821 */      addu $t9, $t4, $t8
  /* 01CBA0 8001BFA0 304E0800 */      andi $t6, $v0, 0x800
  /* 01CBA4 8001BFA4 11C00002 */      beqz $t6, .L8001BFB0
  /* 01CBA8 8001BFA8 97250000 */       lhu $a1, ($t9)
  /* 01CBAC 8001BFAC 00052823 */      negu $a1, $a1
  .L8001BFB0:
  /* 01CBB0 8001BFB0 30630FFF */      andi $v1, $v1, 0xfff
  /* 01CBB4 8001BFB4 3068FFFF */      andi $t0, $v1, 0xffff
  /* 01CBB8 8001BFB8 311807FF */      andi $t8, $t0, 0x7ff
  /* 01CBBC 8001BFBC 0018C840 */       sll $t9, $t8, 1
  /* 01CBC0 8001BFC0 01997021 */      addu $t6, $t4, $t9
  /* 01CBC4 8001BFC4 310F0800 */      andi $t7, $t0, 0x800
  /* 01CBC8 8001BFC8 11E00002 */      beqz $t7, .L8001BFD4
  /* 01CBCC 8001BFCC 95C60000 */       lhu $a2, ($t6)
  /* 01CBD0 8001BFD0 00063023 */      negu $a2, $a2
  .L8001BFD4:
  /* 01CBD4 8001BFD4 25020400 */     addiu $v0, $t0, 0x400
  /* 01CBD8 8001BFD8 305807FF */      andi $t8, $v0, 0x7ff
  /* 01CBDC 8001BFDC 0018C840 */       sll $t9, $t8, 1
  /* 01CBE0 8001BFE0 01997021 */      addu $t6, $t4, $t9
  /* 01CBE4 8001BFE4 304F0800 */      andi $t7, $v0, 0x800
  /* 01CBE8 8001BFE8 11E00002 */      beqz $t7, .L8001BFF4
  /* 01CBEC 8001BFEC 95C30000 */       lhu $v1, ($t6)
  /* 01CBF0 8001BFF0 00031823 */      negu $v1, $v1
  .L8001BFF4:
  /* 01CBF4 8001BFF4 31290FFF */      andi $t1, $t1, 0xfff
  /* 01CBF8 8001BFF8 312AFFFF */      andi $t2, $t1, 0xffff
  /* 01CBFC 8001BFFC 315907FF */      andi $t9, $t2, 0x7ff
  /* 01CC00 8001C000 00197040 */       sll $t6, $t9, 1
  /* 01CC04 8001C004 018E7821 */      addu $t7, $t4, $t6
  /* 01CC08 8001C008 31580800 */      andi $t8, $t2, 0x800
  /* 01CC0C 8001C00C 13000002 */      beqz $t8, .L8001C018
  /* 01CC10 8001C010 95E20000 */       lhu $v0, ($t7)
  /* 01CC14 8001C014 00021023 */      negu $v0, $v0
  .L8001C018:
  /* 01CC18 8001C018 25480400 */     addiu $t0, $t2, 0x400
  /* 01CC1C 8001C01C 311907FF */      andi $t9, $t0, 0x7ff
  /* 01CC20 8001C020 00197040 */       sll $t6, $t9, 1
  /* 01CC24 8001C024 018E7821 */      addu $t7, $t4, $t6
  /* 01CC28 8001C028 31180800 */      andi $t8, $t0, 0x800
  /* 01CC2C 8001C02C 13000002 */      beqz $t8, .L8001C038
  /* 01CC30 8001C030 95EB0000 */       lhu $t3, ($t7)
  /* 01CC34 8001C034 000B5823 */      negu $t3, $t3
  .L8001C038:
  /* 01CC38 8001C038 006B0019 */     multu $v1, $t3
  /* 01CC3C 8001C03C 3C10FFFF */       lui $s0, 0xffff
  /* 01CC40 8001C040 00065023 */      negu $t2, $a2
  /* 01CC44 8001C044 000A5040 */       sll $t2, $t2, 1
  /* 01CC48 8001C048 00004012 */      mflo $t0
  /* 01CC4C 8001C04C 00084383 */       sra $t0, $t0, 0xe
  /* 01CC50 8001C050 0110C824 */       and $t9, $t0, $s0
  /* 01CC54 8001C054 00620019 */     multu $v1, $v0
  /* 01CC58 8001C058 0008C400 */       sll $t8, $t0, 0x10
  /* 01CC5C 8001C05C 00004812 */      mflo $t1
  /* 01CC60 8001C060 00094B83 */       sra $t1, $t1, 0xe
  /* 01CC64 8001C064 00097402 */       srl $t6, $t1, 0x10
  /* 01CC68 8001C068 00E60019 */     multu $a3, $a2
  /* 01CC6C 8001C06C 032E7825 */        or $t7, $t9, $t6
  /* 01CC70 8001C070 3139FFFF */      andi $t9, $t1, 0xffff
  /* 01CC74 8001C074 03197025 */        or $t6, $t8, $t9
  /* 01CC78 8001C078 AC8F0000 */        sw $t7, ($a0)
  /* 01CC7C 8001C07C 01507824 */       and $t7, $t2, $s0
  /* 01CC80 8001C080 AC8F0004 */        sw $t7, 4($a0)
  /* 01CC84 8001C084 AC8E0020 */        sw $t6, 0x20($a0)
  /* 01CC88 8001C088 000AC400 */       sll $t8, $t2, 0x10
  /* 01CC8C 8001C08C AC980024 */        sw $t8, 0x24($a0)
  /* 01CC90 8001C090 00006012 */      mflo $t4
  /* 01CC94 8001C094 000C63C3 */       sra $t4, $t4, 0xf
  /* 01CC98 8001C098 00000000 */       nop 
  /* 01CC9C 8001C09C 018B0019 */     multu $t4, $t3
  /* 01CCA0 8001C0A0 0000C812 */      mflo $t9
  /* 01CCA4 8001C0A4 00197383 */       sra $t6, $t9, 0xe
  /* 01CCA8 8001C0A8 00000000 */       nop 
  /* 01CCAC 8001C0AC 00A20019 */     multu $a1, $v0
  /* 01CCB0 8001C0B0 00007812 */      mflo $t7
  /* 01CCB4 8001C0B4 000FC383 */       sra $t8, $t7, 0xe
  /* 01CCB8 8001C0B8 01D86823 */      subu $t5, $t6, $t8
  /* 01CCBC 8001C0BC 01820019 */     multu $t4, $v0
  /* 01CCC0 8001C0C0 0000C812 */      mflo $t9
  /* 01CCC4 8001C0C4 00197B83 */       sra $t7, $t9, 0xe
  /* 01CCC8 8001C0C8 00000000 */       nop 
  /* 01CCCC 8001C0CC 00AB0019 */     multu $a1, $t3
  /* 01CCD0 8001C0D0 00007012 */      mflo $t6
  /* 01CCD4 8001C0D4 000EC383 */       sra $t8, $t6, 0xe
  /* 01CCD8 8001C0D8 01F8C821 */      addu $t9, $t7, $t8
  /* 01CCDC 8001C0DC 00E30019 */     multu $a3, $v1
  /* 01CCE0 8001C0E0 00197402 */       srl $t6, $t9, 0x10
  /* 01CCE4 8001C0E4 01B07824 */       and $t7, $t5, $s0
  /* 01CCE8 8001C0E8 01EEC025 */        or $t8, $t7, $t6
  /* 01CCEC 8001C0EC AFB90008 */        sw $t9, 8($sp)
  /* 01CCF0 8001C0F0 AC980008 */        sw $t8, 8($a0)
  /* 01CCF4 8001C0F4 8FAF0008 */        lw $t7, 8($sp)
  /* 01CCF8 8001C0F8 000DCC00 */       sll $t9, $t5, 0x10
  /* 01CCFC 8001C0FC AC800018 */        sw $zero, 0x18($a0)
  /* 01CD00 8001C100 31EEFFFF */      andi $t6, $t7, 0xffff
  /* 01CD04 8001C104 00004012 */      mflo $t0
  /* 01CD08 8001C108 032EC025 */        or $t8, $t9, $t6
  /* 01CD0C 8001C10C 00084383 */       sra $t0, $t0, 0xe
  /* 01CD10 8001C110 00A60019 */     multu $a1, $a2
  /* 01CD14 8001C114 01107824 */       and $t7, $t0, $s0
  /* 01CD18 8001C118 AC8F000C */        sw $t7, 0xc($a0)
  /* 01CD1C 8001C11C AC980028 */        sw $t8, 0x28($a0)
  /* 01CD20 8001C120 0008CC00 */       sll $t9, $t0, 0x10
  /* 01CD24 8001C124 AC99002C */        sw $t9, 0x2c($a0)
  /* 01CD28 8001C128 AC800038 */        sw $zero, 0x38($a0)
  /* 01CD2C 8001C12C AC80003C */        sw $zero, 0x3c($a0)
  /* 01CD30 8001C130 00004812 */      mflo $t1
  /* 01CD34 8001C134 00094BC3 */       sra $t1, $t1, 0xf
  /* 01CD38 8001C138 00000000 */       nop 
  /* 01CD3C 8001C13C 012B0019 */     multu $t1, $t3
  /* 01CD40 8001C140 00007012 */      mflo $t6
  /* 01CD44 8001C144 000EC383 */       sra $t8, $t6, 0xe
  /* 01CD48 8001C148 00000000 */       nop 
  /* 01CD4C 8001C14C 00E20019 */     multu $a3, $v0
  /* 01CD50 8001C150 00007812 */      mflo $t7
  /* 01CD54 8001C154 000FCB83 */       sra $t9, $t7, 0xe
  /* 01CD58 8001C158 03196021 */      addu $t4, $t8, $t9
  /* 01CD5C 8001C15C 01220019 */     multu $t1, $v0
  /* 01CD60 8001C160 00007012 */      mflo $t6
  /* 01CD64 8001C164 000E7B83 */       sra $t7, $t6, 0xe
  /* 01CD68 8001C168 01907024 */       and $t6, $t4, $s0
  /* 01CD6C 8001C16C 00EB0019 */     multu $a3, $t3
  /* 01CD70 8001C170 0000C012 */      mflo $t8
  /* 01CD74 8001C174 0018CB83 */       sra $t9, $t8, 0xe
  /* 01CD78 8001C178 01F95023 */      subu $t2, $t7, $t9
  /* 01CD7C 8001C17C 00A30019 */     multu $a1, $v1
  /* 01CD80 8001C180 000AC402 */       srl $t8, $t2, 0x10
  /* 01CD84 8001C184 01D87825 */        or $t7, $t6, $t8
  /* 01CD88 8001C188 314EFFFF */      andi $t6, $t2, 0xffff
  /* 01CD8C 8001C18C 000CCC00 */       sll $t9, $t4, 0x10
  /* 01CD90 8001C190 032EC025 */        or $t8, $t9, $t6
  /* 01CD94 8001C194 AC8F0010 */        sw $t7, 0x10($a0)
  /* 01CD98 8001C198 240E0001 */     addiu $t6, $zero, 1
  /* 01CD9C 8001C19C AC980030 */        sw $t8, 0x30($a0)
  /* 01CDA0 8001C1A0 AC8E001C */        sw $t6, 0x1c($a0)
  /* 01CDA4 8001C1A4 00001012 */      mflo $v0
  /* 01CDA8 8001C1A8 00021383 */       sra $v0, $v0, 0xe
  /* 01CDAC 8001C1AC 00507824 */       and $t7, $v0, $s0
  /* 01CDB0 8001C1B0 0002CC00 */       sll $t9, $v0, 0x10
  /* 01CDB4 8001C1B4 AC8F0014 */        sw $t7, 0x14($a0)
  /* 01CDB8 8001C1B8 AC990034 */        sw $t9, 0x34($a0)
  /* 01CDBC 8001C1BC 8FB00004 */        lw $s0, 4($sp)
  /* 01CDC0 8001C1C0 03E00008 */        jr $ra
  /* 01CDC4 8001C1C4 27BD0038 */     addiu $sp, $sp, 0x38

