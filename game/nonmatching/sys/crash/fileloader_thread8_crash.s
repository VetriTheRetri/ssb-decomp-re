.section .text
glabel fileloader_thread8_crash
  /* 023FA4 800233A4 27BDFFA8 */     addiu $sp, $sp, -0x58
  /* 023FA8 800233A8 AFB5002C */        sw $s5, 0x2c($sp)
  /* 023FAC 800233AC 3C15800A */       lui $s5, %hi(D_8009E3F0)
  /* 023FB0 800233B0 AFA40058 */        sw $a0, 0x58($sp)
  /* 023FB4 800233B4 26B5E3F0 */     addiu $s5, $s5, %lo(D_8009E3F0)
  /* 023FB8 800233B8 AFBF003C */        sw $ra, 0x3c($sp)
  /* 023FBC 800233BC AFB00018 */        sw $s0, 0x18($sp)
  /* 023FC0 800233C0 3C04800A */       lui $a0, %hi(D_8009E3E0)
  /* 023FC4 800233C4 3C06800A */       lui $a2, %hi(D_8009E3E8)
  /* 023FC8 800233C8 AFBE0038 */        sw $fp, 0x38($sp)
  /* 023FCC 800233CC AFB70034 */        sw $s7, 0x34($sp)
  /* 023FD0 800233D0 AFB60030 */        sw $s6, 0x30($sp)
  /* 023FD4 800233D4 AFB40028 */        sw $s4, 0x28($sp)
  /* 023FD8 800233D8 AFB30024 */        sw $s3, 0x24($sp)
  /* 023FDC 800233DC AFB20020 */        sw $s2, 0x20($sp)
  /* 023FE0 800233E0 AFB1001C */        sw $s1, 0x1c($sp)
  /* 023FE4 800233E4 00008025 */        or $s0, $zero, $zero
  /* 023FE8 800233E8 24C6E3E8 */     addiu $a2, $a2, %lo(D_8009E3E8)
  /* 023FEC 800233EC 2484E3E0 */     addiu $a0, $a0, %lo(D_8009E3E0)
  /* 023FF0 800233F0 02A02825 */        or $a1, $s5, $zero
  /* 023FF4 800233F4 0C000276 */       jal func_800009D8
  /* 023FF8 800233F8 24070001 */     addiu $a3, $zero, 1
  /* 023FFC 800233FC 3C178004 */       lui $s7, %hi(D_8003B6E4)
  /* 024000 80023400 3C13800A */       lui $s3, %hi(sCrashPrintCB)
  /* 024004 80023404 3C118004 */       lui $s1, %hi(sActiveCrashScreen)
  /* 024008 80023408 2631CE78 */     addiu $s1, $s1, %lo(sActiveCrashScreen)
  /* 02400C 8002340C 2673E3D8 */     addiu $s3, $s3, %lo(sCrashPrintCB)
  /* 024010 80023410 26F7B6E4 */     addiu $s7, $s7, %lo(D_8003B6E4)
  /* 024014 80023414 241E0001 */     addiu $fp, $zero, 1
  /* 024018 80023418 27B60054 */     addiu $s6, $sp, 0x54
  /* 02401C 8002341C 8FB40050 */        lw $s4, 0x50($sp)
  .L80023420:
  /* 024020 80023420 02A02025 */        or $a0, $s5, $zero
  .L80023424:
  /* 024024 80023424 02C02825 */        or $a1, $s6, $zero
  /* 024028 80023428 0C00C084 */       jal osRecvMesg
  /* 02402C 8002342C 24060001 */     addiu $a2, $zero, 1
  /* 024030 80023430 922E0000 */       lbu $t6, ($s1) # sActiveCrashScreen + 0
  /* 024034 80023434 55C0FFFB */      bnel $t6, $zero, .L80023424
  /* 024038 80023438 02A02025 */        or $a0, $s5, $zero
  /* 02403C 8002343C 8EE20000 */        lw $v0, ($s7) # D_8003B6E4 + 0
  /* 024040 80023440 56820004 */      bnel $s4, $v0, .L80023454
  /* 024044 80023444 00008025 */        or $s0, $zero, $zero
  /* 024048 80023448 10000002 */         b .L80023454
  /* 02404C 8002344C 26100001 */     addiu $s0, $s0, 1
  /* 024050 80023450 00008025 */        or $s0, $zero, $zero
  .L80023454:
  /* 024054 80023454 2A01012C */      slti $at, $s0, 0x12c
  /* 024058 80023458 1420FFF1 */      bnez $at, .L80023420
  /* 02405C 8002345C 0040A025 */        or $s4, $v0, $zero
  /* 024060 80023460 A23E0000 */        sb $fp, ($s1) # sActiveCrashScreen + 0
  /* 024064 80023464 0C00D21C */       jal osGetThreadPri
  /* 024068 80023468 00002025 */        or $a0, $zero, $zero
  /* 02406C 8002346C 00409025 */        or $s2, $v0, $zero
  /* 024070 80023470 00002025 */        or $a0, $zero, $zero
  /* 024074 80023474 0C00D1E4 */       jal osSetThreadPri
  /* 024078 80023478 240500FA */     addiu $a1, $zero, 0xfa
  /* 02407C 8002347C 00002025 */        or $a0, $zero, $zero
  /* 024080 80023480 0C008A42 */       jal wait_for_fb_or_buttons
  /* 024084 80023484 00002825 */        or $a1, $zero, $zero
  /* 024088 80023488 24042030 */     addiu $a0, $zero, 0x2030
  /* 02408C 8002348C 0C008A42 */       jal wait_for_fb_or_buttons
  /* 024090 80023490 00002825 */        or $a1, $zero, $zero
  /* 024094 80023494 00002025 */        or $a0, $zero, $zero
  /* 024098 80023498 0C008A42 */       jal wait_for_fb_or_buttons
  /* 02409C 8002349C 00002825 */        or $a1, $zero, $zero
  /* 0240A0 800234A0 24040808 */     addiu $a0, $zero, 0x808
  /* 0240A4 800234A4 0C008A42 */       jal wait_for_fb_or_buttons
  /* 0240A8 800234A8 00002825 */        or $a1, $zero, $zero
  /* 0240AC 800234AC 00002025 */        or $a0, $zero, $zero
  /* 0240B0 800234B0 0C008A42 */       jal wait_for_fb_or_buttons
  /* 0240B4 800234B4 00002825 */        or $a1, $zero, $zero
  /* 0240B8 800234B8 34048200 */       ori $a0, $zero, 0x8200
  /* 0240BC 800234BC 0C008A42 */       jal wait_for_fb_or_buttons
  /* 0240C0 800234C0 00002825 */        or $a1, $zero, $zero
  /* 0240C4 800234C4 00002025 */        or $a0, $zero, $zero
  /* 0240C8 800234C8 0C008A42 */       jal wait_for_fb_or_buttons
  /* 0240CC 800234CC 00002825 */        or $a1, $zero, $zero
  /* 0240D0 800234D0 24044100 */     addiu $a0, $zero, 0x4100
  /* 0240D4 800234D4 0C008A42 */       jal wait_for_fb_or_buttons
  /* 0240D8 800234D8 00002825 */        or $a1, $zero, $zero
  /* 0240DC 800234DC 00002025 */        or $a0, $zero, $zero
  /* 0240E0 800234E0 0C008A42 */       jal wait_for_fb_or_buttons
  /* 0240E4 800234E4 00002825 */        or $a1, $zero, $zero
  /* 0240E8 800234E8 24040404 */     addiu $a0, $zero, 0x404
  /* 0240EC 800234EC 0C008A42 */       jal wait_for_fb_or_buttons
  /* 0240F0 800234F0 00002825 */        or $a1, $zero, $zero
  /* 0240F4 800234F4 3C048004 */       lui $a0, %hi(gThread5)
  /* 0240F8 800234F8 24840CE0 */     addiu $a0, $a0, %lo(gThread5)
  /* 0240FC 800234FC 0C008A61 */       jal fb_print_thread_state
  /* 024100 80023500 24050001 */     addiu $a1, $zero, 1
  /* 024104 80023504 8E6F0000 */        lw $t7, ($s3) # sCrashPrintCB + 0
  /* 024108 80023508 00002025 */        or $a0, $zero, $zero
  /* 02410C 8002350C 51E00012 */      beql $t7, $zero, .L80023558
  /* 024110 80023510 00002025 */        or $a0, $zero, $zero
  /* 024114 80023514 0C008A42 */       jal wait_for_fb_or_buttons
  /* 024118 80023518 00002825 */        or $a1, $zero, $zero
  /* 02411C 8002351C 24042030 */     addiu $a0, $zero, 0x2030
  /* 024120 80023520 0C008A42 */       jal wait_for_fb_or_buttons
  /* 024124 80023524 00002825 */        or $a1, $zero, $zero
  /* 024128 80023528 24040019 */     addiu $a0, $zero, 0x19
  /* 02412C 8002352C 24050014 */     addiu $a1, $zero, 0x14
  /* 024130 80023530 2406010E */     addiu $a2, $zero, 0x10e
  /* 024134 80023534 0C0088FD */       jal fb_draw_black_rect
  /* 024138 80023538 240700D2 */     addiu $a3, $zero, 0xd2
  /* 02413C 8002353C 2404001E */     addiu $a0, $zero, 0x1e
  /* 024140 80023540 0C008C04 */       jal reset_crashmesg_cursor
  /* 024144 80023544 24050019 */     addiu $a1, $zero, 0x19
  /* 024148 80023548 8E790000 */        lw $t9, ($s3) # sCrashPrintCB + 0
  /* 02414C 8002354C 0320F809 */      jalr $t9
  /* 024150 80023550 00000000 */       nop 
  /* 024154 80023554 00002025 */        or $a0, $zero, $zero
  .L80023558:
  /* 024158 80023558 00002825 */        or $a1, $zero, $zero
  /* 02415C 8002355C 0C008A42 */       jal wait_for_fb_or_buttons
  /* 024160 80023560 00008025 */        or $s0, $zero, $zero
  /* 024164 80023564 24042030 */     addiu $a0, $zero, 0x2030
  /* 024168 80023568 0C008A42 */       jal wait_for_fb_or_buttons
  /* 02416C 8002356C 00002825 */        or $a1, $zero, $zero
  /* 024170 80023570 00002025 */        or $a0, $zero, $zero
  /* 024174 80023574 0C00D1E4 */       jal osSetThreadPri
  /* 024178 80023578 02402825 */        or $a1, $s2, $zero
  /* 02417C 8002357C 1000FFA8 */         b .L80023420
  /* 024180 80023580 A2200000 */        sb $zero, ($s1) # sActiveCrashScreen + 0
  /* 024184 80023584 00000000 */       nop 
  /* 024188 80023588 00000000 */       nop 
  /* 02418C 8002358C 00000000 */       nop 
# Maybe start of new file
  /* 024190 80023590 00000000 */       nop 
  /* 024194 80023594 00000000 */       nop 
  /* 024198 80023598 00000000 */       nop 
  /* 02419C 8002359C 00000000 */       nop 
# Maybe start of new file
  /* 0241A0 800235A0 8FBF003C */        lw $ra, 0x3c($sp)
  /* 0241A4 800235A4 8FB00018 */        lw $s0, 0x18($sp)
  /* 0241A8 800235A8 8FB1001C */        lw $s1, 0x1c($sp)
  /* 0241AC 800235AC 8FB20020 */        lw $s2, 0x20($sp)
  /* 0241B0 800235B0 8FB30024 */        lw $s3, 0x24($sp)
  /* 0241B4 800235B4 8FB40028 */        lw $s4, 0x28($sp)
  /* 0241B8 800235B8 8FB5002C */        lw $s5, 0x2c($sp)
  /* 0241BC 800235BC 8FB60030 */        lw $s6, 0x30($sp)
  /* 0241C0 800235C0 8FB70034 */        lw $s7, 0x34($sp)
  /* 0241C4 800235C4 8FBE0038 */        lw $fp, 0x38($sp)
  /* 0241C8 800235C8 03E00008 */        jr $ra
  /* 0241CC 800235CC 27BD0058 */     addiu $sp, $sp, 0x58

