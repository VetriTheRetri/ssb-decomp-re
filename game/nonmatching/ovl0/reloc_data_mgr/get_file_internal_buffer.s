.section .rodata

glabel D_ovl0_800D5F88
  /* E748 051968 800D5F88 */
  .asciz "Relocatable Data Manager: Buffer is full !!\n"
  .balign 4

.section .text
glabel get_file_internal_buffer
  /* 04968C 800CDCAC 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 049690 800CDCB0 AFBF001C */        sw $ra, 0x1c($sp)
  /* 049694 800CDCB4 AFB00018 */        sw $s0, 0x18($sp)
  /* 049698 800CDCB8 0C033588 */       jal find_file_in_status_buf
  /* 04969C 800CDCBC AFA40020 */        sw $a0, 0x20($sp)
  /* 0496A0 800CDCC0 10400003 */      beqz $v0, .L800CDCD0
  /* 0496A4 800CDCC4 3C10800D */       lui $s0, %hi((sInternalBuf + 0x10))
  /* 0496A8 800CDCC8 10000020 */         b .L800CDD4C
  /* 0496AC 800CDCCC 8FBF001C */        lw $ra, 0x1c($sp)
  .L800CDCD0:
  /* 0496B0 800CDCD0 8E1062F0 */        lw $s0, %lo((sInternalBuf + 0x10))($s0)
  /* 0496B4 800CDCD4 2401FFF0 */     addiu $at, $zero, -0x10
  /* 0496B8 800CDCD8 8FA40020 */        lw $a0, 0x20($sp)
  /* 0496BC 800CDCDC 2610000F */     addiu $s0, $s0, 0xf
  /* 0496C0 800CDCE0 0C033605 */       jal dma_table_entry
  /* 0496C4 800CDCE4 02018024 */       and $s0, $s0, $at
  /* 0496C8 800CDCE8 3C0E800D */       lui $t6, %hi(sCurrentEntry)
  /* 0496CC 800CDCEC 8DCE6334 */        lw $t6, %lo(sCurrentEntry)($t6)
  /* 0496D0 800CDCF0 3C03800D */       lui $v1, %hi(sInternalBuf)
  /* 0496D4 800CDCF4 246362E0 */     addiu $v1, $v1, %lo(sInternalBuf)
  /* 0496D8 800CDCF8 95C6000A */       lhu $a2, 0xa($t6)
  /* 0496DC 800CDCFC 8C6F0014 */        lw $t7, 0x14($v1) # sInternalBuf + 20
  /* 0496E0 800CDD00 02002825 */        or $a1, $s0, $zero
  /* 0496E4 800CDD04 00063080 */       sll $a2, $a2, 2
  /* 0496E8 800CDD08 02061021 */      addu $v0, $s0, $a2
  /* 0496EC 800CDD0C 01E2082B */      sltu $at, $t7, $v0
  /* 0496F0 800CDD10 10200009 */      beqz $at, .L800CDD38
  /* 0496F4 800CDD14 24070001 */     addiu $a3, $zero, 1
  /* 0496F8 800CDD18 3C10800D */       lui $s0, %hi(D_ovl0_800D5F88)
  /* 0496FC 800CDD1C 26105F88 */     addiu $s0, $s0, %lo(D_ovl0_800D5F88)
  .L800CDD20:
  /* 049700 800CDD20 0C008D89 */       jal fatal_printf
  /* 049704 800CDD24 02002025 */        or $a0, $s0, $zero
  /* 049708 800CDD28 0C028C10 */       jal scnmgr_crash_print_gobj_state
  /* 04970C 800CDD2C 00000000 */       nop 
  /* 049710 800CDD30 1000FFFB */         b .L800CDD20
  /* 049714 800CDD34 00000000 */       nop 
  .L800CDD38:
  /* 049718 800CDD38 AC620010 */        sw $v0, 0x10($v1)
  /* 04971C 800CDD3C 0C033615 */       jal load_and_reloc_file
  /* 049720 800CDD40 8FA40020 */        lw $a0, 0x20($sp)
  /* 049724 800CDD44 02001025 */        or $v0, $s0, $zero
  /* 049728 800CDD48 8FBF001C */        lw $ra, 0x1c($sp)
  .L800CDD4C:
  /* 04972C 800CDD4C 8FB00018 */        lw $s0, 0x18($sp)
  /* 049730 800CDD50 27BD0020 */     addiu $sp, $sp, 0x20
  /* 049734 800CDD54 03E00008 */        jr $ra
  /* 049738 800CDD58 00000000 */       nop 

