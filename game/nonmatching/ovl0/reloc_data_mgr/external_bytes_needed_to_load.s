.section .rodata

glabel D_ovl0_800D5F50
  /* E710 051930 800D5F50 */
  .asciz "Relocatable Data Manager: External Data is over %d!!\n"
  .balign 4

.section .text
glabel external_bytes_needed_to_load
  /* 049418 800CDA38 27BDFF98 */     addiu $sp, $sp, -0x68
  /* 04941C 800CDA3C AFBF0024 */        sw $ra, 0x24($sp)
  /* 049420 800CDA40 AFB10018 */        sw $s1, 0x18($sp)
  /* 049424 800CDA44 00808825 */        or $s1, $a0, $zero
  /* 049428 800CDA48 AFB30020 */        sw $s3, 0x20($sp)
  /* 04942C 800CDA4C AFB2001C */        sw $s2, 0x1c($sp)
  /* 049430 800CDA50 0C033588 */       jal find_file_in_status_buf
  /* 049434 800CDA54 AFB00014 */        sw $s0, 0x14($sp)
  /* 049438 800CDA58 10400003 */      beqz $v0, .L800CDA68
  /* 04943C 800CDA5C 3C07800D */       lui $a3, %hi(sExternalFileIdLen)
  /* 049440 800CDA60 10000054 */         b .L800CDBB4
  /* 049444 800CDA64 00001025 */        or $v0, $zero, $zero
  .L800CDA68:
  /* 049448 800CDA68 24E76340 */     addiu $a3, $a3, %lo(sExternalFileIdLen)
  /* 04944C 800CDA6C 8CE40000 */        lw $a0, ($a3) # sExternalFileIdLen + 0
  /* 049450 800CDA70 00001025 */        or $v0, $zero, $zero
  /* 049454 800CDA74 3C03800D */       lui $v1, %hi(sExternalFileIds)
  /* 049458 800CDA78 1880000B */      blez $a0, .L800CDAA8
  /* 04945C 800CDA7C 3C05800D */       lui $a1, %hi(sExternalFileIdCapacity)
  /* 049460 800CDA80 8C63633C */        lw $v1, %lo(sExternalFileIds)($v1)
  .L800CDA84:
  /* 049464 800CDA84 8C6E0000 */        lw $t6, ($v1)
  /* 049468 800CDA88 24420001 */     addiu $v0, $v0, 1
  /* 04946C 800CDA8C 0044082A */       slt $at, $v0, $a0
  /* 049470 800CDA90 162E0003 */       bne $s1, $t6, .L800CDAA0
  /* 049474 800CDA94 00000000 */       nop 
  /* 049478 800CDA98 10000046 */         b .L800CDBB4
  /* 04947C 800CDA9C 00001025 */        or $v0, $zero, $zero
  .L800CDAA0:
  /* 049480 800CDAA0 1420FFF8 */      bnez $at, .L800CDA84
  /* 049484 800CDAA4 24630004 */     addiu $v1, $v1, 4
  .L800CDAA8:
  /* 049488 800CDAA8 8CA56344 */        lw $a1, %lo(sExternalFileIdCapacity)($a1)
  /* 04948C 800CDAAC 3C10800D */       lui $s0, %hi(D_ovl0_800D5F50)
  /* 049490 800CDAB0 26105F50 */     addiu $s0, $s0, %lo(D_ovl0_800D5F50)
  /* 049494 800CDAB4 0085082A */       slt $at, $a0, $a1
  /* 049498 800CDAB8 14200008 */      bnez $at, .L800CDADC
  /* 04949C 800CDABC 00000000 */       nop 
  .L800CDAC0:
  /* 0494A0 800CDAC0 0C008D89 */       jal fatal_printf
  /* 0494A4 800CDAC4 02002025 */        or $a0, $s0, $zero
  /* 0494A8 800CDAC8 0C028C10 */       jal scnmgr_crash_print_gobj_state
  /* 0494AC 800CDACC 00000000 */       nop 
  /* 0494B0 800CDAD0 3C05800D */       lui $a1, %hi(sExternalFileIdCapacity)
  /* 0494B4 800CDAD4 1000FFFA */         b .L800CDAC0
  /* 0494B8 800CDAD8 8CA56344 */        lw $a1, %lo(sExternalFileIdCapacity)($a1)
  .L800CDADC:
  /* 0494BC 800CDADC 0C033605 */       jal dma_table_entry
  /* 0494C0 800CDAE0 02202025 */        or $a0, $s1, $zero
  /* 0494C4 800CDAE4 3C07800D */       lui $a3, %hi(sExternalFileIdLen)
  /* 0494C8 800CDAE8 3C08800D */       lui $t0, %hi(sCurrentEntry)
  /* 0494CC 800CDAEC 25086334 */     addiu $t0, $t0, %lo(sCurrentEntry)
  /* 0494D0 800CDAF0 24E76340 */     addiu $a3, $a3, %lo(sExternalFileIdLen)
  /* 0494D4 800CDAF4 8D020000 */        lw $v0, ($t0) # sCurrentEntry + 0
  /* 0494D8 800CDAF8 8CF80000 */        lw $t8, ($a3) # sExternalFileIdLen + 0
  /* 0494DC 800CDAFC 3C0F800D */       lui $t7, %hi(sExternalFileIds)
  /* 0494E0 800CDB00 8DEF633C */        lw $t7, %lo(sExternalFileIds)($t7)
  /* 0494E4 800CDB04 0018C880 */       sll $t9, $t8, 2
  /* 0494E8 800CDB08 9452000A */       lhu $s2, 0xa($v0)
  /* 0494EC 800CDB0C 94450006 */       lhu $a1, 6($v0) #compressed size
  /* 0494F0 800CDB10 01F94821 */      addu $t1, $t7, $t9
  /* 0494F4 800CDB14 AD310000 */        sw $s1, ($t1) # store new fileid
  /* 0494F8 800CDB18 8CEA0000 */        lw $t2, ($a3) # sExternalFileIdLen + 0
  /* 0494FC 800CDB1C 8D0C0000 */        lw $t4, ($t0) # sCurrentEntry + 0
  /* 049500 800CDB20 3C18800D */       lui $t8, %hi(sNextEntry)
  /* 049504 800CDB24 254B0001 */     addiu $t3, $t2, 1
  /* 049508 800CDB28 ACEB0000 */        sw $t3, ($a3) # sExternalFileIdLen + 0
  /* 04950C 800CDB2C 8F186338 */        lw $t8, %lo(sNextEntry)($t8)
  /* 049510 800CDB30 00129080 */       sll $s2, $s2, 2
  /* 049514 800CDB34 2652000F */     addiu $s2, $s2, 0xf
  /* 049518 800CDB38 2401FFF0 */     addiu $at, $zero, -0x10
  /* 04951C 800CDB3C 8D8D0000 */        lw $t5, ($t4) # entry->dataOffset
  /* 049520 800CDB40 02419024 */       and $s2, $s2, $at
  /* 049524 800CDB44 3C03800D */       lui $v1, %hi(sInternalBuf + 8)
  /* 049528 800CDB48 8C6362E8 */        lw $v1, %lo(sInternalBuf + 8)($v1)
  /* 04952C 800CDB4C 8F0F0000 */        lw $t7, ($t8)
  /* 049530 800CDB50 3C017FFF */       lui $at, (0x7FFFFFFF >> 16) # 2147483647
  /* 049534 800CDB54 3421FFFF */       ori $at, $at, (0x7FFFFFFF & 0xFFFF) # 2147483647
  /* 049538 800CDB58 01A17024 */       and $t6, $t5, $at
  /* 04953C 800CDB5C 00052880 */       sll $a1, $a1, 2
  /* 049540 800CDB60 006E3021 */      addu $a2, $v1, $t6
  /* 049544 800CDB64 01E1C824 */       and $t9, $t7, $at
  /* 049548 800CDB68 00C58021 */      addu $s0, $a2, $a1
  /* 04954C 800CDB6C 00799821 */      addu $s3, $v1, $t9
  /* 049550 800CDB70 0213082B */      sltu $at, $s0, $s3
  /* 049554 800CDB74 1020000E */      beqz $at, .L800CDBB0
  /* 049558 800CDB78 03A08825 */        or $s1, $sp, $zero
  /* 04955C 800CDB7C 2631004B */     addiu $s1, $s1, 0x4b
  /* 049560 800CDB80 2401FFF0 */     addiu $at, $zero, -0x10
  /* 049564 800CDB84 02218824 */       and $s1, $s1, $at
  .L800CDB88:
  /* 049568 800CDB88 02002025 */        or $a0, $s0, $zero
  /* 04956C 800CDB8C 02202825 */        or $a1, $s1, $zero
  /* 049570 800CDB90 0C000B28 */       jal dma_rom_read
  /* 049574 800CDB94 24060002 */     addiu $a2, $zero, 2
  /* 049578 800CDB98 0C03368E */       jal external_bytes_needed_to_load
  /* 04957C 800CDB9C 96240000 */       lhu $a0, ($s1)
  /* 049580 800CDBA0 26100002 */     addiu $s0, $s0, 2
  /* 049584 800CDBA4 0213082B */      sltu $at, $s0, $s3
  /* 049588 800CDBA8 1420FFF7 */      bnez $at, .L800CDB88
  /* 04958C 800CDBAC 02429021 */      addu $s2, $s2, $v0
  .L800CDBB0:
  /* 049590 800CDBB0 02401025 */        or $v0, $s2, $zero
  .L800CDBB4:
  /* 049594 800CDBB4 8FBF0024 */        lw $ra, 0x24($sp)
  /* 049598 800CDBB8 8FB00014 */        lw $s0, 0x14($sp)
  /* 04959C 800CDBBC 8FB10018 */        lw $s1, 0x18($sp)
  /* 0495A0 800CDBC0 8FB2001C */        lw $s2, 0x1c($sp)
  /* 0495A4 800CDBC4 8FB30020 */        lw $s3, 0x20($sp)
  /* 0495A8 800CDBC8 03E00008 */        jr $ra
  /* 0495AC 800CDBCC 27BD0068 */     addiu $sp, $sp, 0x68

