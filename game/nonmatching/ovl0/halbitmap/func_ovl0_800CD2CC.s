.section .text
glabel func_ovl0_800CD2CC
  /* 048CAC 800CD2CC 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 048CB0 800CD2D0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 048CB4 800CD2D4 AFA40030 */        sw $a0, 0x30($sp)
  /* 048CB8 800CD2D8 8C880074 */        lw $t0, 0x74($a0)
  /* 048CBC 800CD2DC 3C098004 */       lui $t1, %hi(gCurrScreenWidth)
  /* 048CC0 800CD2E0 8D296678 */        lw $t1, %lo(gCurrScreenWidth)($t1)
  /* 048CC4 800CD2E4 85020010 */        lh $v0, 0x10($t0)
  /* 048CC8 800CD2E8 85030008 */        lh $v1, 8($t0)
  /* 048CCC 800CD2EC 85050012 */        lh $a1, 0x12($t0)
  /* 048CD0 800CD2F0 8506000A */        lh $a2, 0xa($t0)
  /* 048CD4 800CD2F4 241F000A */     addiu $ra, $zero, 0xa
  /* 048CD8 800CD2F8 00807025 */        or $t6, $a0, $zero
  /* 048CDC 800CD2FC 04410002 */      bgez $v0, .L800CD308
  /* 048CE0 800CD300 00400821 */      addu $at, $v0, $zero
  /* 048CE4 800CD304 24410003 */     addiu $at, $v0, 3
  .L800CD308:
  /* 048CE8 800CD308 00011083 */       sra $v0, $at, 2
  /* 048CEC 800CD30C 04610002 */      bgez $v1, .L800CD318
  /* 048CF0 800CD310 00600821 */      addu $at, $v1, $zero
  /* 048CF4 800CD314 24610003 */     addiu $at, $v1, 3
  .L800CD318:
  /* 048CF8 800CD318 00011883 */       sra $v1, $at, 2
  /* 048CFC 800CD31C 00435023 */      subu $t2, $v0, $v1
  /* 048D00 800CD320 04A10002 */      bgez $a1, .L800CD32C
  /* 048D04 800CD324 00A00821 */      addu $at, $a1, $zero
  /* 048D08 800CD328 24A10003 */     addiu $at, $a1, 3
  .L800CD32C:
  /* 048D0C 800CD32C 00012883 */       sra $a1, $at, 2
  /* 048D10 800CD330 04C10002 */      bgez $a2, .L800CD33C
  /* 048D14 800CD334 00C00821 */      addu $at, $a2, $zero
  /* 048D18 800CD338 24C10003 */     addiu $at, $a2, 3
  .L800CD33C:
  /* 048D1C 800CD33C 00013083 */       sra $a2, $at, 2
  /* 048D20 800CD340 24010140 */     addiu $at, $zero, 0x140
  /* 048D24 800CD344 0121001A */       div $zero, $t1, $at
  /* 048D28 800CD348 00007812 */      mflo $t7
  /* 048D2C 800CD34C 00626021 */      addu $t4, $v1, $v0
  /* 048D30 800CD350 00A65823 */      subu $t3, $a1, $a2
  /* 048D34 800CD354 01FF0019 */     multu $t7, $ra
  /* 048D38 800CD358 00C56821 */      addu $t5, $a2, $a1
  /* 048D3C 800CD35C 3C038004 */       lui $v1, %hi(gCurrScreenHeight)
  /* 048D40 800CD360 00003812 */      mflo $a3
  /* 048D44 800CD364 0147082A */       slt $at, $t2, $a3
  /* 048D48 800CD368 10200002 */      beqz $at, .L800CD374
  /* 048D4C 800CD36C 01272023 */      subu $a0, $t1, $a3
  /* 048D50 800CD370 00E05025 */        or $t2, $a3, $zero
  .L800CD374:
  /* 048D54 800CD374 8C63667C */        lw $v1, %lo(gCurrScreenHeight)($v1)
  /* 048D58 800CD378 240100F0 */     addiu $at, $zero, 0xf0
  /* 048D5C 800CD37C 0061001A */       div $zero, $v1, $at
  /* 048D60 800CD380 0000C012 */      mflo $t8
  /* 048D64 800CD384 00000000 */       nop 
  /* 048D68 800CD388 00000000 */       nop 
  /* 048D6C 800CD38C 031F0019 */     multu $t8, $ra
  /* 048D70 800CD390 00001012 */      mflo $v0
  /* 048D74 800CD394 0162082A */       slt $at, $t3, $v0
  /* 048D78 800CD398 50200003 */      beql $at, $zero, .L800CD3A8
  /* 048D7C 800CD39C 008C082A */       slt $at, $a0, $t4
  /* 048D80 800CD3A0 00405825 */        or $t3, $v0, $zero
  /* 048D84 800CD3A4 008C082A */       slt $at, $a0, $t4
  .L800CD3A8:
  /* 048D88 800CD3A8 50200003 */      beql $at, $zero, .L800CD3B8
  /* 048D8C 800CD3AC 00622023 */      subu $a0, $v1, $v0
  /* 048D90 800CD3B0 00806025 */        or $t4, $a0, $zero
  /* 048D94 800CD3B4 00622023 */      subu $a0, $v1, $v0
  .L800CD3B8:
  /* 048D98 800CD3B8 008D082A */       slt $at, $a0, $t5
  /* 048D9C 800CD3BC 10200002 */      beqz $at, .L800CD3C8
  /* 048DA0 800CD3C0 00000000 */       nop 
  /* 048DA4 800CD3C4 00806825 */        or $t5, $a0, $zero
  .L800CD3C8:
  /* 048DA8 800CD3C8 3C048004 */       lui $a0, %hi(gpDisplayListHead)
  /* 048DAC 800CD3CC 248465B0 */     addiu $a0, $a0, %lo(gpDisplayListHead)
  /* 048DB0 800CD3D0 AFA8002C */        sw $t0, 0x2c($sp)
  /* 048DB4 800CD3D4 AFAA0024 */        sw $t2, 0x24($sp)
  /* 048DB8 800CD3D8 AFAB0020 */        sw $t3, 0x20($sp)
  /* 048DBC 800CD3DC AFAC001C */        sw $t4, 0x1c($sp)
  /* 048DC0 800CD3E0 0C033434 */       jal func_ovl0_800CD0D0
  /* 048DC4 800CD3E4 AFAD0018 */        sw $t5, 0x18($sp)
  /* 048DC8 800CD3E8 8FA40024 */        lw $a0, 0x24($sp)
  /* 048DCC 800CD3EC 8FA5001C */        lw $a1, 0x1c($sp)
  /* 048DD0 800CD3F0 8FA60020 */        lw $a2, 0x20($sp)
  /* 048DD4 800CD3F4 0C03347C */       jal func_ovl0_800CD1F0
  /* 048DD8 800CD3F8 8FA70018 */        lw $a3, 0x18($sp)
  /* 048DDC 800CD3FC 8FA8002C */        lw $t0, 0x2c($sp)
  /* 048DE0 800CD400 00002825 */        or $a1, $zero, $zero
  /* 048DE4 800CD404 8D190080 */        lw $t9, 0x80($t0)
  /* 048DE8 800CD408 332E0008 */      andi $t6, $t9, 8
  /* 048DEC 800CD40C 11C00003 */      beqz $t6, .L800CD41C
  /* 048DF0 800CD410 00000000 */       nop 
  /* 048DF4 800CD414 10000001 */         b .L800CD41C
  /* 048DF8 800CD418 24050001 */     addiu $a1, $zero, 1
  .L800CD41C:
  /* 048DFC 800CD41C 0C005EE0 */       jal func_80017B80
  /* 048E00 800CD420 8FA40030 */        lw $a0, 0x30($sp)
  /* 048E04 800CD424 3C048004 */       lui $a0, %hi(gpDisplayListHead)
  /* 048E08 800CD428 0C033485 */       jal func_ovl0_800CD214
  /* 048E0C 800CD42C 248465B0 */     addiu $a0, $a0, %lo(gpDisplayListHead)
  /* 048E10 800CD430 8FBF0014 */        lw $ra, 0x14($sp)
  /* 048E14 800CD434 27BD0030 */     addiu $sp, $sp, 0x30
  /* 048E18 800CD438 03E00008 */        jr $ra
  /* 048E1C 800CD43C 00000000 */       nop 

