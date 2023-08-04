.section .text
glabel load_and_reloc_file
  /* 049234 800CD854 27BDFF88 */     addiu $sp, $sp, -0x78
  /* 049238 800CD858 AFB1001C */        sw $s1, 0x1c($sp)
  /* 04923C 800CD85C 3C11800D */       lui $s1, %hi(sCurrentEntry)
  /* 049240 800CD860 26316334 */     addiu $s1, $s1, %lo(sCurrentEntry)
  /* 049244 800CD864 8E2E0000 */        lw $t6, ($s1) # sCurrentEntry + 0
  /* 049248 800CD868 AFBF003C */        sw $ra, 0x3c($sp)
  /* 04924C 800CD86C AFBE0038 */        sw $fp, 0x38($sp)
  /* 049250 800CD870 AFB70034 */        sw $s7, 0x34($sp)
  /* 049254 800CD874 AFB60030 */        sw $s6, 0x30($sp)
  /* 049258 800CD878 AFB5002C */        sw $s5, 0x2c($sp)
  /* 04925C 800CD87C AFB40028 */        sw $s4, 0x28($sp)
  /* 049260 800CD880 AFB30024 */        sw $s3, 0x24($sp)
  /* 049264 800CD884 AFB20020 */        sw $s2, 0x20($sp)
  /* 049268 800CD888 AFB00018 */        sw $s0, 0x18($sp)
  /* 04926C 800CD88C 8DC20000 */        lw $v0, ($t6)
  /* 049270 800CD890 3C0F800D */       lui $t7, %hi((sInternalBuf + 8))
  /* 049274 800CD894 3C017FFF */       lui $at, (0x7FFFFFFF >> 16) # 2147483647
  /* 049278 800CD898 8DEF62E8 */        lw $t7, %lo((sInternalBuf + 8))($t7)
  /* 04927C 800CD89C 3421FFFF */       ori $at, $at, (0x7FFFFFFF & 0xFFFF) # 2147483647
  /* 049280 800CD8A0 0041C024 */       and $t8, $v0, $at
  /* 049284 800CD8A4 0002CFC2 */       srl $t9, $v0, 0x1f
  /* 049288 800CD8A8 00808025 */        or $s0, $a0, $zero
  /* 04928C 800CD8AC 00E09025 */        or $s2, $a3, $zero
  /* 049290 800CD8B0 00A0A825 */        or $s5, $a1, $zero
  /* 049294 800CD8B4 13200005 */      beqz $t9, .L800CD8CC
  /* 049298 800CD8B8 01F8A021 */      addu $s4, $t7, $t8
  /* 04929C 800CD8BC 0C000DA4 */       jal dma_vpk_read
  /* 0492A0 800CD8C0 02802025 */        or $a0, $s4, $zero
  /* 0492A4 800CD8C4 10000005 */         b .L800CD8DC
  /* 0492A8 800CD8C8 24170002 */     addiu $s7, $zero, 2
  .L800CD8CC:
  /* 0492AC 800CD8CC 02802025 */        or $a0, $s4, $zero
  /* 0492B0 800CD8D0 0C000B28 */       jal dma_rom_read
  /* 0492B4 800CD8D4 02A02825 */        or $a1, $s5, $zero
  /* 0492B8 800CD8D8 24170002 */     addiu $s7, $zero, 2
  .L800CD8DC:
  /* 0492BC 800CD8DC 16570006 */       bne $s2, $s7, .L800CD8F8
  /* 0492C0 800CD8E0 02002025 */        or $a0, $s0, $zero
  /* 0492C4 800CD8E4 02002025 */        or $a0, $s0, $zero
  /* 0492C8 800CD8E8 0C0335E6 */       jal add_to_force_status_buffer
  /* 0492CC 800CD8EC 02A02825 */        or $a1, $s5, $zero
  /* 0492D0 800CD8F0 10000004 */         b .L800CD904
  /* 0492D4 800CD8F4 8E220000 */        lw $v0, ($s1) # sCurrentEntry + 0
  .L800CD8F8:
  /* 0492D8 800CD8F8 0C0335C7 */       jal add_to_status_buffer
  /* 0492DC 800CD8FC 02A02825 */        or $a1, $s5, $zero
  /* 0492E0 800CD900 8E220000 */        lw $v0, ($s1) # sCurrentEntry + 0
  .L800CD904:
  /* 0492E4 800CD904 03A08025 */        or $s0, $sp, $zero
  /* 0492E8 800CD908 3416FFFF */       ori $s6, $zero, 0xffff
  /* 0492EC 800CD90C 94440004 */       lhu $a0, 4($v0)
  /* 0492F0 800CD910 26100063 */     addiu $s0, $s0, 0x63
  /* 0492F4 800CD914 2401FFF0 */     addiu $at, $zero, -0x10
  /* 0492F8 800CD918 12C4000B */       beq $s6, $a0, .L800CD948
  /* 0492FC 800CD91C 02018024 */       and $s0, $s0, $at
  .L800CD920:
  /* 049300 800CD920 00044080 */       sll $t0, $a0, 2
  /* 049304 800CD924 02A81821 */      addu $v1, $s5, $t0
  /* 049308 800CD928 94690002 */       lhu $t1, 2($v1)
  /* 04930C 800CD92C 94640000 */       lhu $a0, ($v1)
  /* 049310 800CD930 00095080 */       sll $t2, $t1, 2
  /* 049314 800CD934 01555821 */      addu $t3, $t2, $s5
  /* 049318 800CD938 16C4FFF9 */       bne $s6, $a0, .L800CD920
  /* 04931C 800CD93C AC6B0000 */        sw $t3, ($v1)
  /* 049320 800CD940 3C02800D */       lui $v0, %hi(sCurrentEntry)
  /* 049324 800CD944 8C426334 */        lw $v0, %lo(sCurrentEntry)($v0)
  .L800CD948:
  /* 049328 800CD948 944C0006 */       lhu $t4, 6($v0)
  /* 04932C 800CD94C 94430008 */       lhu $v1, 8($v0)
  /* 049330 800CD950 241E0001 */     addiu $fp, $zero, 1
  /* 049334 800CD954 000C6880 */       sll $t5, $t4, 2
  /* 049338 800CD958 12C3002B */       beq $s6, $v1, .L800CDA08
  /* 04933C 800CD95C 028DA021 */      addu $s4, $s4, $t5
  .L800CD960:
  /* 049340 800CD960 00037080 */       sll $t6, $v1, 2
  /* 049344 800CD964 02AE8821 */      addu $s1, $s5, $t6
  /* 049348 800CD968 96330000 */       lhu $s3, ($s1) # sCurrentEntry + 0
  /* 04934C 800CD96C 02802025 */        or $a0, $s4, $zero
  /* 049350 800CD970 02002825 */        or $a1, $s0, $zero
  /* 049354 800CD974 0C000B28 */       jal dma_rom_read
  /* 049358 800CD978 24060002 */     addiu $a2, $zero, 2
  /* 04935C 800CD97C 16570005 */       bne $s2, $s7, .L800CD994
  /* 049360 800CD980 00000000 */       nop 
  /* 049364 800CD984 0C0335A6 */       jal find_file_in_force_buf
  /* 049368 800CD988 96040000 */       lhu $a0, ($s0)
  /* 04936C 800CD98C 10000003 */         b .L800CD99C
  /* 049370 800CD990 00000000 */       nop 
  .L800CD994:
  /* 049374 800CD994 0C033588 */       jal find_file_in_status_buf
  /* 049378 800CD998 96040000 */       lhu $a0, ($s0)
  .L800CD99C:
  /* 04937C 800CD99C 54400014 */      bnel $v0, $zero, .L800CD9F0
  /* 049380 800CD9A0 962F0002 */       lhu $t7, 2($s1) # sCurrentEntry + 2
  /* 049384 800CD9A4 12400007 */      beqz $s2, .L800CD9C4
  /* 049388 800CD9A8 00000000 */       nop 
  /* 04938C 800CD9AC 125E0009 */       beq $s2, $fp, .L800CD9D4
  /* 049390 800CD9B0 00000000 */       nop 
  /* 049394 800CD9B4 1257000B */       beq $s2, $s7, .L800CD9E4
  /* 049398 800CD9B8 00000000 */       nop 
  /* 04939C 800CD9BC 1000000C */         b .L800CD9F0
  /* 0493A0 800CD9C0 962F0002 */       lhu $t7, 2($s1) # sCurrentEntry + 2
  .L800CD9C4: #0
  /* 0493A4 800CD9C4 0C033703 */       jal get_file_external_status
  /* 0493A8 800CD9C8 96040000 */       lhu $a0, ($s0)
  /* 0493AC 800CD9CC 10000008 */         b .L800CD9F0
  /* 0493B0 800CD9D0 962F0002 */       lhu $t7, 2($s1) # sCurrentEntry + 2
  .L800CD9D4: # 1
  /* 0493B4 800CD9D4 0C03372B */       jal get_file_internal_buffer
  /* 0493B8 800CD9D8 96040000 */       lhu $a0, ($s0)
  /* 0493BC 800CD9DC 10000004 */         b .L800CD9F0
  /* 0493C0 800CD9E0 962F0002 */       lhu $t7, 2($s1) # sCurrentEntry + 2
  .L800CD9E4: # 2
  /* 0493C4 800CD9E4 0C033757 */       jal get_file_external_force
  /* 0493C8 800CD9E8 96040000 */       lhu $a0, ($s0)
  /* 0493CC 800CD9EC 962F0002 */       lhu $t7, 2($s1) # sCurrentEntry + 2
  .L800CD9F0:
  /* 0493D0 800CD9F0 26940002 */     addiu $s4, $s4, 2
  /* 0493D4 800CD9F4 02601825 */        or $v1, $s3, $zero
  /* 0493D8 800CD9F8 000FC080 */       sll $t8, $t7, 2
  /* 0493DC 800CD9FC 0302C821 */      addu $t9, $t8, $v0
  /* 0493E0 800CDA00 16D3FFD7 */       bne $s6, $s3, .L800CD960
  /* 0493E4 800CDA04 AE390000 */        sw $t9, ($s1) # sCurrentEntry + 0
  .L800CDA08:
  /* 0493E8 800CDA08 8FBF003C */        lw $ra, 0x3c($sp)
  /* 0493EC 800CDA0C 8FB00018 */        lw $s0, 0x18($sp)
  /* 0493F0 800CDA10 8FB1001C */        lw $s1, 0x1c($sp)
  /* 0493F4 800CDA14 8FB20020 */        lw $s2, 0x20($sp)
  /* 0493F8 800CDA18 8FB30024 */        lw $s3, 0x24($sp)
  /* 0493FC 800CDA1C 8FB40028 */        lw $s4, 0x28($sp)
  /* 049400 800CDA20 8FB5002C */        lw $s5, 0x2c($sp)
  /* 049404 800CDA24 8FB60030 */        lw $s6, 0x30($sp)
  /* 049408 800CDA28 8FB70034 */        lw $s7, 0x34($sp)
  /* 04940C 800CDA2C 8FBE0038 */        lw $fp, 0x38($sp)
  /* 049410 800CDA30 03E00008 */        jr $ra
  /* 049414 800CDA34 27BD0078 */     addiu $sp, $sp, 0x78

