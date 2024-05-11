.section .text
glabel odRenderDObjTreeMultiList
  /* 016120 80015520 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 016124 80015524 AFBF002C */        sw $ra, 0x2c($sp)
  /* 016128 80015528 AFB40028 */        sw $s4, 0x28($sp)
  /* 01612C 8001552C AFB30024 */        sw $s3, 0x24($sp)
  /* 016130 80015530 AFB20020 */        sw $s2, 0x20($sp)
  /* 016134 80015534 AFB1001C */        sw $s1, 0x1c($sp)
  /* 016138 80015538 AFB00018 */        sw $s0, 0x18($sp)
  /* 01613C 8001553C 908E0054 */       lbu $t6, 0x54($a0)
  /* 016140 80015540 00809825 */        or $s3, $a0, $zero
  /* 016144 80015544 0000A025 */        or $s4, $zero, $zero
  /* 016148 80015548 31CF0002 */      andi $t7, $t6, 2
  /* 01614C 8001554C 15E000B1 */      bnez $t7, .L80015814
  /* 016150 80015550 3C128004 */       lui $s2, %hi(D_800470B0)
  /* 016154 80015554 3C018004 */       lui $at, %hi(gSpriteLayerScale)
  /* 016158 80015558 C4246FA4 */      lwc1 $f4, %lo(gSpriteLayerScale)($at)
  /* 01615C 8001555C 265270B0 */     addiu $s2, $s2, %lo(D_800470B0)
  /* 016160 80015560 8E580000 */        lw $t8, ($s2) # D_800470B0 + 0
  /* 016164 80015564 E7A40034 */      swc1 $f4, 0x34($sp)
  /* 016168 80015568 8C860050 */        lw $a2, 0x50($a0)
  /* 01616C 8001556C 02402025 */        or $a0, $s2, $zero
  /* 016170 80015570 02602825 */        or $a1, $s3, $zero
  /* 016174 80015574 AFB80040 */        sw $t8, 0x40($sp)
  /* 016178 80015578 0C00435C */       jal odRenderDObjMain
  /* 01617C 8001557C AFA60044 */        sw $a2, 0x44($sp)
  /* 016180 80015580 8FA60044 */        lw $a2, 0x44($sp)
  /* 016184 80015584 00405825 */        or $t3, $v0, $zero
  /* 016188 80015588 50C00064 */      beql $a2, $zero, .L8001571C
  /* 01618C 8001558C 8E640010 */        lw $a0, 0x10($s3)
  /* 016190 80015590 92790054 */       lbu $t9, 0x54($s3)
  /* 016194 80015594 332D0001 */      andi $t5, $t9, 1
  /* 016198 80015598 55A00060 */      bnel $t5, $zero, .L8001571C
  /* 01619C 8001559C 8E640010 */        lw $a0, 0x10($s3)
  /* 0161A0 800155A0 8CC50000 */        lw $a1, ($a2)
  /* 0161A4 800155A4 24010004 */     addiu $at, $zero, 4
  /* 0161A8 800155A8 3C118004 */       lui $s1, %hi(gDisplayListHead)
  /* 0161AC 800155AC 10A1005A */       beq $a1, $at, .L80015718
  /* 0161B0 800155B0 263165B0 */     addiu $s1, $s1, %lo(gDisplayListHead)
  /* 0161B4 800155B4 3C078004 */       lui $a3, %hi(D_800470B8)
  /* 0161B8 800155B8 24E770B8 */     addiu $a3, $a3, %lo(D_800470B8)
  /* 0161BC 800155BC 3C08DE00 */       lui $t0, 0xde00
  /* 0161C0 800155C0 8CCE0008 */        lw $t6, 8($a2)
  .L800155C4:
  /* 0161C4 800155C4 51C00050 */      beql $t6, $zero, .L80015708
  /* 0161C8 800155C8 8CC5000C */        lw $a1, 0xc($a2)
  /* 0161CC 800155CC 8CCF0004 */        lw $t7, 4($a2)
  /* 0161D0 800155D0 0005C080 */       sll $t8, $a1, 2
  /* 0161D4 800155D4 02381821 */      addu $v1, $s1, $t8
  /* 0161D8 800155D8 51E00009 */      beql $t7, $zero, .L80015600
  /* 0161DC 800155DC 00058080 */       sll $s0, $a1, 2
  /* 0161E0 800155E0 8C620000 */        lw $v0, ($v1)
  /* 0161E4 800155E4 24590008 */     addiu $t9, $v0, 8
  /* 0161E8 800155E8 AC790000 */        sw $t9, ($v1)
  /* 0161EC 800155EC AC480000 */        sw $t0, ($v0)
  /* 0161F0 800155F0 8CCD0004 */        lw $t5, 4($a2)
  /* 0161F4 800155F4 AC4D0004 */        sw $t5, 4($v0)
  /* 0161F8 800155F8 8CC50000 */        lw $a1, ($a2)
  /* 0161FC 800155FC 00058080 */       sll $s0, $a1, 2
  .L80015600:
  /* 016200 80015600 00F07021 */      addu $t6, $a3, $s0
  /* 016204 80015604 8DC40000 */        lw $a0, ($t6)
  /* 016208 80015608 8E4F0000 */        lw $t7, ($s2) # D_800470B0 + 0
  /* 01620C 8001560C 11E40019 */       beq $t7, $a0, .L80015674
  /* 016210 80015610 0230C021 */      addu $t8, $s1, $s0
  .L80015614:
  /* 016214 80015614 8F190000 */        lw $t9, ($t8)
  /* 016218 80015618 8C8E0000 */        lw $t6, ($a0)
  /* 01621C 8001561C AF2E0000 */        sw $t6, ($t9)
  /* 016220 80015620 8C8D0004 */        lw $t5, 4($a0)
  /* 016224 80015624 AF2D0004 */        sw $t5, 4($t9)
  /* 016228 80015628 8CCF0000 */        lw $t7, ($a2)
  /* 01622C 8001562C 000FC080 */       sll $t8, $t7, 2
  /* 016230 80015630 02381821 */      addu $v1, $s1, $t8
  /* 016234 80015634 8C790000 */        lw $t9, ($v1)
  /* 016238 80015638 272D0008 */     addiu $t5, $t9, 8
  /* 01623C 8001563C AC6D0000 */        sw $t5, ($v1)
  /* 016240 80015640 8CCE0000 */        lw $t6, ($a2)
  /* 016244 80015644 000E7880 */       sll $t7, $t6, 2
  /* 016248 80015648 00EF1021 */      addu $v0, $a3, $t7
  /* 01624C 8001564C 8C580000 */        lw $t8, ($v0)
  /* 016250 80015650 8E4E0000 */        lw $t6, ($s2) # D_800470B0 + 0
  /* 016254 80015654 27190008 */     addiu $t9, $t8, 8
  /* 016258 80015658 AC590000 */        sw $t9, ($v0)
  /* 01625C 8001565C 8CD00000 */        lw $s0, ($a2)
  /* 016260 80015660 00108080 */       sll $s0, $s0, 2
  /* 016264 80015664 00F06821 */      addu $t5, $a3, $s0
  /* 016268 80015668 8DA40000 */        lw $a0, ($t5)
  /* 01626C 8001566C 55C4FFE9 */      bnel $t6, $a0, .L80015614
  /* 016270 80015670 0230C021 */      addu $t8, $s1, $s0
  .L80015674:
  /* 016274 80015674 8E6F0080 */        lw $t7, 0x80($s3)
  /* 016278 80015678 51E0001C */      beql $t7, $zero, .L800156EC
  /* 01627C 8001567C 02301821 */      addu $v1, $s1, $s0
  /* 016280 80015680 16800010 */      bnez $s4, .L800156C4
  /* 016284 80015684 02301821 */      addu $v1, $s1, $s0
  /* 016288 80015688 3C148004 */       lui $s4, %hi(gGraphicsHeap + 12)
  /* 01628C 8001568C 8E9465E4 */        lw $s4, %lo(gGraphicsHeap + 12)($s4)
  /* 016290 80015690 02602025 */        or $a0, $s3, $zero
  /* 016294 80015694 02302821 */      addu $a1, $s1, $s0
  /* 016298 80015698 AFA60044 */        sw $a2, 0x44($sp)
  /* 01629C 8001569C 0C004B64 */       jal odRenderMObjForDObj
  /* 0162A0 800156A0 AFAB0048 */        sw $t3, 0x48($sp)
  /* 0162A4 800156A4 8FA60044 */        lw $a2, 0x44($sp)
  /* 0162A8 800156A8 3C078004 */       lui $a3, %hi(D_800470B8)
  /* 0162AC 800156AC 24E770B8 */     addiu $a3, $a3, %lo(D_800470B8)
  /* 0162B0 800156B0 8CD00000 */        lw $s0, ($a2)
  /* 0162B4 800156B4 3C08DE00 */       lui $t0, 0xde00
  /* 0162B8 800156B8 8FAB0048 */        lw $t3, 0x48($sp)
  /* 0162BC 800156BC 1000000A */         b .L800156E8
  /* 0162C0 800156C0 00108080 */       sll $s0, $s0, 2
  .L800156C4:
  /* 0162C4 800156C4 8C620000 */        lw $v0, ($v1)
  /* 0162C8 800156C8 3C19DB06 */       lui $t9, (0xDB060038 >> 16) # 3674603576
  /* 0162CC 800156CC 37390038 */       ori $t9, $t9, (0xDB060038 & 0xFFFF) # 3674603576
  /* 0162D0 800156D0 24580008 */     addiu $t8, $v0, 8
  /* 0162D4 800156D4 AC780000 */        sw $t8, ($v1)
  /* 0162D8 800156D8 AC540004 */        sw $s4, 4($v0)
  /* 0162DC 800156DC AC590000 */        sw $t9, ($v0)
  /* 0162E0 800156E0 8CD00000 */        lw $s0, ($a2)
  /* 0162E4 800156E4 00108080 */       sll $s0, $s0, 2
  .L800156E8:
  /* 0162E8 800156E8 02301821 */      addu $v1, $s1, $s0
  .L800156EC:
  /* 0162EC 800156EC 8C620000 */        lw $v0, ($v1)
  /* 0162F0 800156F0 244D0008 */     addiu $t5, $v0, 8
  /* 0162F4 800156F4 AC6D0000 */        sw $t5, ($v1)
  /* 0162F8 800156F8 AC480000 */        sw $t0, ($v0)
  /* 0162FC 800156FC 8CCE0008 */        lw $t6, 8($a2)
  /* 016300 80015700 AC4E0004 */        sw $t6, 4($v0)
  /* 016304 80015704 8CC5000C */        lw $a1, 0xc($a2)
  .L80015708:
  /* 016308 80015708 24010004 */     addiu $at, $zero, 4
  /* 01630C 8001570C 24C6000C */     addiu $a2, $a2, 0xc
  /* 016310 80015710 54A1FFAC */      bnel $a1, $at, .L800155C4
  /* 016314 80015714 8CCE0008 */        lw $t6, 8($a2)
  .L80015718:
  /* 016318 80015718 8E640010 */        lw $a0, 0x10($s3)
  .L8001571C:
  /* 01631C 8001571C 3C118004 */       lui $s1, %hi(gDisplayListHead)
  /* 016320 80015720 263165B0 */     addiu $s1, $s1, %lo(gDisplayListHead)
  /* 016324 80015724 50800005 */      beql $a0, $zero, .L8001573C
  /* 016328 80015728 8FAF0040 */        lw $t7, 0x40($sp)
  /* 01632C 8001572C 0C005548 */       jal odRenderDObjTreeMultiList
  /* 016330 80015730 AFAB0048 */        sw $t3, 0x48($sp)
  /* 016334 80015734 8FAB0048 */        lw $t3, 0x48($sp)
  /* 016338 80015738 8FAF0040 */        lw $t7, 0x40($sp)
  .L8001573C:
  /* 01633C 8001573C 3C068004 */       lui $a2, %hi(D_800470B8)
  /* 016340 80015740 3C0C8004 */       lui $t4, %hi(D_800470C8)
  /* 016344 80015744 3C09D838 */       lui $t1, (0xD8380002 >> 16) # 3627548674
  /* 016348 80015748 35290002 */       ori $t1, $t1, (0xD8380002 & 0xFFFF) # 3627548674
  /* 01634C 8001574C 258C70C8 */     addiu $t4, $t4, %lo(D_800470C8)
  /* 016350 80015750 24C670B8 */     addiu $a2, $a2, %lo(D_800470B8)
  /* 016354 80015754 00003825 */        or $a3, $zero, $zero
  /* 016358 80015758 240A0040 */     addiu $t2, $zero, 0x40
  /* 01635C 8001575C 24080001 */     addiu $t0, $zero, 1
  /* 016360 80015760 AE4F0000 */        sw $t7, ($s2) # D_800470B0 + 0
  .L80015764:
  /* 016364 80015764 8E450000 */        lw $a1, ($s2) # D_800470B0 + 0
  /* 016368 80015768 8CD80000 */        lw $t8, ($a2) # D_800470B8 + 0
  /* 01636C 8001576C 00B8082B */      sltu $at, $a1, $t8
  /* 016370 80015770 50200011 */      beql $at, $zero, .L800157B8
  /* 016374 80015774 8CCF0004 */        lw $t7, 4($a2) # D_800470B8 + 4
  /* 016378 80015778 1160000E */      beqz $t3, .L800157B4
  /* 01637C 8001577C ACC50000 */        sw $a1, ($a2) # D_800470B8 + 0
  /* 016380 80015780 8E790014 */        lw $t9, 0x14($s3)
  /* 016384 80015784 02271821 */      addu $v1, $s1, $a3
  /* 016388 80015788 51190005 */      beql $t0, $t9, .L800157A0
  /* 01638C 8001578C 8C640000 */        lw $a0, ($v1)
  /* 016390 80015790 8E6D0008 */        lw $t5, 8($s3)
  /* 016394 80015794 51A00008 */      beql $t5, $zero, .L800157B8
  /* 016398 80015798 8CCF0004 */        lw $t7, 4($a2) # D_800470B8 + 4
  /* 01639C 8001579C 8C640000 */        lw $a0, ($v1)
  .L800157A0:
  /* 0163A0 800157A0 248E0008 */     addiu $t6, $a0, 8
  /* 0163A4 800157A4 AC6E0000 */        sw $t6, ($v1)
  /* 0163A8 800157A8 AC8A0004 */        sw $t2, 4($a0)
  /* 0163AC 800157AC AC890000 */        sw $t1, ($a0)
  /* 0163B0 800157B0 8E450000 */        lw $a1, ($s2) # D_800470B0 + 0
  .L800157B4:
  /* 0163B4 800157B4 8CCF0004 */        lw $t7, 4($a2) # D_800470B8 + 4
  .L800157B8:
  /* 0163B8 800157B8 00AF082B */      sltu $at, $a1, $t7
  /* 0163BC 800157BC 50200010 */      beql $at, $zero, .L80015800
  /* 0163C0 800157C0 24C60008 */     addiu $a2, $a2, 8
  /* 0163C4 800157C4 1160000D */      beqz $t3, .L800157FC
  /* 0163C8 800157C8 ACC50004 */        sw $a1, 4($a2) # D_800470B8 + 4
  /* 0163CC 800157CC 8E780014 */        lw $t8, 0x14($s3)
  /* 0163D0 800157D0 02271821 */      addu $v1, $s1, $a3
  /* 0163D4 800157D4 51180005 */      beql $t0, $t8, .L800157EC
  /* 0163D8 800157D8 8C640004 */        lw $a0, 4($v1)
  /* 0163DC 800157DC 8E790008 */        lw $t9, 8($s3)
  /* 0163E0 800157E0 53200007 */      beql $t9, $zero, .L80015800
  /* 0163E4 800157E4 24C60008 */     addiu $a2, $a2, 8
  /* 0163E8 800157E8 8C640004 */        lw $a0, 4($v1)
  .L800157EC:
  /* 0163EC 800157EC 248D0008 */     addiu $t5, $a0, 8
  /* 0163F0 800157F0 AC6D0004 */        sw $t5, 4($v1)
  /* 0163F4 800157F4 AC8A0004 */        sw $t2, 4($a0)
  /* 0163F8 800157F8 AC890000 */        sw $t1, ($a0)
  .L800157FC:
  /* 0163FC 800157FC 24C60008 */     addiu $a2, $a2, 8
  .L80015800:
  /* 016400 80015800 14CCFFD8 */       bne $a2, $t4, .L80015764
  /* 016404 80015804 24E70008 */     addiu $a3, $a3, 8
  /* 016408 80015808 C7A60034 */      lwc1 $f6, 0x34($sp)
  /* 01640C 8001580C 3C018004 */       lui $at, %hi(gSpriteLayerScale)
  /* 016410 80015810 E4266FA4 */      swc1 $f6, %lo(gSpriteLayerScale)($at)
  .L80015814:
  /* 016414 80015814 8E6E000C */        lw $t6, 0xc($s3)
  /* 016418 80015818 55C0000A */      bnel $t6, $zero, .L80015844
  /* 01641C 8001581C 8FBF002C */        lw $ra, 0x2c($sp)
  /* 016420 80015820 8E700008 */        lw $s0, 8($s3)
  /* 016424 80015824 52000007 */      beql $s0, $zero, .L80015844
  /* 016428 80015828 8FBF002C */        lw $ra, 0x2c($sp)
  .L8001582C:
  /* 01642C 8001582C 0C005548 */       jal odRenderDObjTreeMultiList
  /* 016430 80015830 02002025 */        or $a0, $s0, $zero
  /* 016434 80015834 8E100008 */        lw $s0, 8($s0)
  /* 016438 80015838 1600FFFC */      bnez $s0, .L8001582C
  /* 01643C 8001583C 00000000 */       nop 
  /* 016440 80015840 8FBF002C */        lw $ra, 0x2c($sp)
  .L80015844:
  /* 016444 80015844 8FB00018 */        lw $s0, 0x18($sp)
  /* 016448 80015848 8FB1001C */        lw $s1, 0x1c($sp)
  /* 01644C 8001584C 8FB20020 */        lw $s2, 0x20($sp)
  /* 016450 80015850 8FB30024 */        lw $s3, 0x24($sp)
  /* 016454 80015854 8FB40028 */        lw $s4, 0x28($sp)
  /* 016458 80015858 03E00008 */        jr $ra
  /* 01645C 8001585C 27BD0050 */     addiu $sp, $sp, 0x50
