.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Likely start of new file
glabel lbMemory_SaveData_CreateChecksum
  /* 04FF00 800D4520 00001825 */        or $v1, $zero, $zero
  /* 04FF04 800D4524 00801025 */        or $v0, $a0, $zero
  /* 04FF08 800D4528 00002825 */        or $a1, $zero, $zero
  /* 04FF0C 800D452C 240605E8 */     addiu $a2, $zero, 0x5e8
  /* 04FF10 800D4530 904E0000 */       lbu $t6, ($v0)
  .L800D4534:
  /* 04FF14 800D4534 24AF0001 */     addiu $t7, $a1, 1
  /* 04FF18 800D4538 90590001 */       lbu $t9, 1($v0)
  /* 04FF1C 800D453C 01CF0019 */     multu $t6, $t7
  /* 04FF20 800D4540 24A80002 */     addiu $t0, $a1, 2
  /* 04FF24 800D4544 904A0002 */       lbu $t2, 2($v0)
  /* 04FF28 800D4548 24AB0003 */     addiu $t3, $a1, 3
  /* 04FF2C 800D454C 904D0003 */       lbu $t5, 3($v0)
  /* 04FF30 800D4550 24A40004 */     addiu $a0, $a1, 4
  /* 04FF34 800D4554 00802825 */        or $a1, $a0, $zero
  /* 04FF38 800D4558 24420004 */     addiu $v0, $v0, 4
  /* 04FF3C 800D455C 0000C012 */      mflo $t8
  /* 04FF40 800D4560 00781821 */      addu $v1, $v1, $t8
  /* 04FF44 800D4564 00000000 */       nop 
  /* 04FF48 800D4568 03280019 */     multu $t9, $t0
  /* 04FF4C 800D456C 00004812 */      mflo $t1
  /* 04FF50 800D4570 00691821 */      addu $v1, $v1, $t1
  /* 04FF54 800D4574 00000000 */       nop 
  /* 04FF58 800D4578 014B0019 */     multu $t2, $t3
  /* 04FF5C 800D457C 00006012 */      mflo $t4
  /* 04FF60 800D4580 006C1821 */      addu $v1, $v1, $t4
  /* 04FF64 800D4584 00000000 */       nop 
  /* 04FF68 800D4588 01A40019 */     multu $t5, $a0
  /* 04FF6C 800D458C 00007012 */      mflo $t6
  /* 04FF70 800D4590 006E1821 */      addu $v1, $v1, $t6
  /* 04FF74 800D4594 5486FFE7 */      bnel $a0, $a2, .L800D4534
  /* 04FF78 800D4598 904E0000 */       lbu $t6, ($v0)
  /* 04FF7C 800D459C 03E00008 */        jr $ra
  /* 04FF80 800D45A0 00601025 */        or $v0, $v1, $zero

glabel lbMemory_SaveData_CheckHashValid
  /* 04FF84 800D45A4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 04FF88 800D45A8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 04FF8C 800D45AC 3C04800A */       lui $a0, %hi(gSaveData)
  /* 04FF90 800D45B0 0C035148 */       jal lbMemory_SaveData_CreateChecksum
  /* 04FF94 800D45B4 248444E0 */     addiu $a0, $a0, %lo(gSaveData)
  /* 04FF98 800D45B8 3C03800A */       lui $v1, %hi(gSaveData)
  /* 04FF9C 800D45BC 246344E0 */     addiu $v1, $v1, %lo(gSaveData)
  /* 04FFA0 800D45C0 8C6E05E8 */        lw $t6, 0x5e8($v1) # gSaveData + 1512
  /* 04FFA4 800D45C4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 04FFA8 800D45C8 544E0008 */      bnel $v0, $t6, .L800D45EC
  /* 04FFAC 800D45CC 00001025 */        or $v0, $zero, $zero
  /* 04FFB0 800D45D0 946F05E4 */       lhu $t7, 0x5e4($v1) # gSaveData + 1508
  /* 04FFB4 800D45D4 2401029A */     addiu $at, $zero, 0x29a
  /* 04FFB8 800D45D8 55E10004 */      bnel $t7, $at, .L800D45EC
  /* 04FFBC 800D45DC 00001025 */        or $v0, $zero, $zero
  /* 04FFC0 800D45E0 10000002 */         b .L800D45EC
  /* 04FFC4 800D45E4 24020001 */     addiu $v0, $zero, 1
  /* 04FFC8 800D45E8 00001025 */        or $v0, $zero, $zero
  .L800D45EC:
  /* 04FFCC 800D45EC 03E00008 */        jr $ra
  /* 04FFD0 800D45F0 27BD0018 */     addiu $sp, $sp, 0x18

glabel lbMemory_SaveData_WriteSRAM
  /* 04FFD4 800D45F4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 04FFD8 800D45F8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 04FFDC 800D45FC 3C04800A */       lui $a0, %hi(gSaveData)
  /* 04FFE0 800D4600 0C035148 */       jal lbMemory_SaveData_CreateChecksum
  /* 04FFE4 800D4604 248444E0 */     addiu $a0, $a0, %lo(gSaveData)
  /* 04FFE8 800D4608 3C04800A */       lui $a0, %hi(gSaveData)
  /* 04FFEC 800D460C 248444E0 */     addiu $a0, $a0, %lo(gSaveData)
  /* 04FFF0 800D4610 AC8205E8 */        sw $v0, 0x5e8($a0) # gSaveData + 1512
  /* 04FFF4 800D4614 00002825 */        or $a1, $zero, $zero
  /* 04FFF8 800D4618 0C000B78 */       jal dma_sram_write
  /* 04FFFC 800D461C 240605EC */     addiu $a2, $zero, 0x5ec
  /* 050000 800D4620 3C04800A */       lui $a0, %hi(gSaveData)
  /* 050004 800D4624 248444E0 */     addiu $a0, $a0, %lo(gSaveData)
  /* 050008 800D4628 240505F0 */     addiu $a1, $zero, 0x5f0
  /* 05000C 800D462C 0C000B78 */       jal dma_sram_write
  /* 050010 800D4630 240605EC */     addiu $a2, $zero, 0x5ec
  /* 050014 800D4634 8FBF0014 */        lw $ra, 0x14($sp)
  /* 050018 800D4638 27BD0018 */     addiu $sp, $sp, 0x18
  /* 05001C 800D463C 03E00008 */        jr $ra
  /* 050020 800D4640 00000000 */       nop 

glabel lbMemory_SaveData_CheckSaveDataValid
  /* 050024 800D4644 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 050028 800D4648 AFBF0014 */        sw $ra, 0x14($sp)
  /* 05002C 800D464C 3C05800A */       lui $a1, %hi(gSaveData)
  /* 050030 800D4650 24A544E0 */     addiu $a1, $a1, %lo(gSaveData)
  /* 050034 800D4654 00002025 */        or $a0, $zero, $zero
  /* 050038 800D4658 0C000B69 */       jal dma_sram_read
  /* 05003C 800D465C 240605EC */     addiu $a2, $zero, 0x5ec
  /* 050040 800D4660 0C035169 */       jal lbMemory_SaveData_CheckHashValid
  /* 050044 800D4664 00000000 */       nop 
  /* 050048 800D4668 1440001D */      bnez $v0, .L800D46E0
  /* 05004C 800D466C 240405F0 */     addiu $a0, $zero, 0x5f0
  /* 050050 800D4670 3C05800A */       lui $a1, %hi(gSaveData)
  /* 050054 800D4674 24A544E0 */     addiu $a1, $a1, %lo(gSaveData)
  /* 050058 800D4678 0C000B69 */       jal dma_sram_read
  /* 05005C 800D467C 240605EC */     addiu $a2, $zero, 0x5ec
  /* 050060 800D4680 0C035169 */       jal lbMemory_SaveData_CheckHashValid
  /* 050064 800D4684 00000000 */       nop 
  /* 050068 800D4688 14400013 */      bnez $v0, .L800D46D8
  /* 05006C 800D468C 3C0E800A */       lui $t6, %hi(gSaveData)
  /* 050070 800D4690 3C0F800A */       lui $t7, %hi(gDefaultSaveData)
  /* 050074 800D4694 25EF3994 */     addiu $t7, $t7, %lo(gDefaultSaveData)
  /* 050078 800D4698 25E805E8 */     addiu $t0, $t7, 0x5e8
  /* 05007C 800D469C 25CE44E0 */     addiu $t6, $t6, %lo(gSaveData)
  .L800D46A0:
  /* 050080 800D46A0 8DF90000 */        lw $t9, ($t7) # gDefaultSaveData + 0
  /* 050084 800D46A4 25EF000C */     addiu $t7, $t7, 0xc
  /* 050088 800D46A8 25CE000C */     addiu $t6, $t6, 0xc
  /* 05008C 800D46AC ADD9FFF4 */        sw $t9, -0xc($t6) # gSaveData + -12
  /* 050090 800D46B0 8DF8FFF8 */        lw $t8, -8($t7) # gDefaultSaveData + -8
  /* 050094 800D46B4 ADD8FFF8 */        sw $t8, -8($t6) # gSaveData + -8
  /* 050098 800D46B8 8DF9FFFC */        lw $t9, -4($t7) # gDefaultSaveData + -4
  /* 05009C 800D46BC 15E8FFF8 */       bne $t7, $t0, .L800D46A0
  /* 0500A0 800D46C0 ADD9FFFC */        sw $t9, -4($t6) # gSaveData + -4
  /* 0500A4 800D46C4 8DF90000 */        lw $t9, ($t7) # gDefaultSaveData + 0
  /* 0500A8 800D46C8 0C03517D */       jal lbMemory_SaveData_WriteSRAM
  /* 0500AC 800D46CC ADD90000 */        sw $t9, ($t6) # gSaveData + 0
  /* 0500B0 800D46D0 10000004 */         b .L800D46E4
  /* 0500B4 800D46D4 00001025 */        or $v0, $zero, $zero
  .L800D46D8:
  /* 0500B8 800D46D8 0C03517D */       jal lbMemory_SaveData_WriteSRAM
  /* 0500BC 800D46DC 00000000 */       nop 
  .L800D46E0:
  /* 0500C0 800D46E0 24020001 */     addiu $v0, $zero, 1
  .L800D46E4:
  /* 0500C4 800D46E4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 0500C8 800D46E8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 0500CC 800D46EC 03E00008 */        jr $ra
  /* 0500D0 800D46F0 00000000 */       nop 

glabel func_ovl0_800D46F4
  /* 0500D4 800D46F4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 0500D8 800D46F8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 0500DC 800D46FC 3C04800A */       lui $a0, %hi((gSaveData + 0x451))
  /* 0500E0 800D4700 0C00828D */       jal func_80020A34
  /* 0500E4 800D4704 90844931 */       lbu $a0, %lo((gSaveData + 0x451))($a0)
  /* 0500E8 800D4708 3C02800A */       lui $v0, %hi(gSaveData)
  /* 0500EC 800D470C 244244E0 */     addiu $v0, $v0, %lo(gSaveData)
  /* 0500F0 800D4710 84440452 */        lh $a0, 0x452($v0) # gSaveData + 1106
  /* 0500F4 800D4714 84460454 */        lh $a2, 0x454($v0) # gSaveData + 1108
  /* 0500F8 800D4718 00042C00 */       sll $a1, $a0, 0x10
  /* 0500FC 800D471C 00063C00 */       sll $a3, $a2, 0x10
  /* 050100 800D4720 00073C03 */       sra $a3, $a3, 0x10
  /* 050104 800D4724 0C001BA5 */       jal func_80006E94
  /* 050108 800D4728 00052C03 */       sra $a1, $a1, 0x10
  /* 05010C 800D472C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 050110 800D4730 27BD0018 */     addiu $sp, $sp, 0x18
  /* 050114 800D4734 03E00008 */        jr $ra
  /* 050118 800D4738 00000000 */       nop 

glabel func_ovl0_800D473C
  /* 05011C 800D473C 3C03800A */       lui $v1, %hi(gSaveData)
  /* 050120 800D4740 246344E0 */     addiu $v1, $v1, %lo(gSaveData)
  /* 050124 800D4744 94620458 */       lhu $v0, 0x458($v1) # gSaveData + 1112
  /* 050128 800D4748 906E0456 */       lbu $t6, 0x456($v1) # gSaveData + 1110
  /* 05012C 800D474C 240F0001 */     addiu $t7, $zero, 1
  /* 050130 800D4750 3442036F */       ori $v0, $v0, 0x36f
  /* 050134 800D4754 01CFC004 */      sllv $t8, $t7, $t6
  /* 050138 800D4758 0058C824 */       and $t9, $v0, $t8
  /* 05013C 800D475C 17200004 */      bnez $t9, .L800D4770
  /* 050140 800D4760 3C04800A */       lui $a0, %hi(gSceneData)
  /* 050144 800D4764 3C08800A */       lui $t0, %hi((gDefaultSaveData + 0x456))
  /* 050148 800D4768 91083DEA */       lbu $t0, %lo((gDefaultSaveData + 0x456))($t0)
  /* 05014C 800D476C A0680456 */        sb $t0, 0x456($v1) # gSaveData + 1110
  .L800D4770:
  /* 050150 800D4770 24844AD0 */     addiu $a0, $a0, %lo(gSceneData)
  /* 050154 800D4774 90890014 */       lbu $t1, 0x14($a0) # gSceneData + 20
  /* 050158 800D4778 240A0001 */     addiu $t2, $zero, 1
  /* 05015C 800D477C 2405001C */     addiu $a1, $zero, 0x1c
  /* 050160 800D4780 012A5804 */      sllv $t3, $t2, $t1
  /* 050164 800D4784 004B6024 */       and $t4, $v0, $t3
  /* 050168 800D4788 15800002 */      bnez $t4, .L800D4794
  /* 05016C 800D478C 3C0B800A */       lui $t3, %hi((D_800A4D08 + 0x23))
  /* 050170 800D4790 A0850014 */        sb $a1, 0x14($a0) # gSceneData + 20
  .L800D4794:
  /* 050174 800D4794 908D003B */       lbu $t5, 0x3b($a0) # gSceneData + 59
  /* 050178 800D4798 240F0001 */     addiu $t7, $zero, 1
  /* 05017C 800D479C 2405001C */     addiu $a1, $zero, 0x1c
  /* 050180 800D47A0 01AF7004 */      sllv $t6, $t7, $t5
  /* 050184 800D47A4 004EC024 */       and $t8, $v0, $t6
  /* 050188 800D47A8 17000002 */      bnez $t8, .L800D47B4
  /* 05018C 800D47AC 240E001C */     addiu $t6, $zero, 0x1c
  /* 050190 800D47B0 A085003B */        sb $a1, 0x3b($a0) # gSceneData + 59
  .L800D47B4:
  /* 050194 800D47B4 9099003D */       lbu $t9, 0x3d($a0) # gSceneData + 61
  /* 050198 800D47B8 24080001 */     addiu $t0, $zero, 1
  /* 05019C 800D47BC 3C18800A */       lui $t8, %hi((D_800A4D08 + 0x97))
  /* 0501A0 800D47C0 03285004 */      sllv $t2, $t0, $t9
  /* 0501A4 800D47C4 004A4824 */       and $t1, $v0, $t2
  /* 0501A8 800D47C8 15200002 */      bnez $t1, .L800D47D4
  /* 0501AC 800D47CC 3C01800A */       lui $at, %hi((D_800A4D08 + 0x23))
  /* 0501B0 800D47D0 A085003D */        sb $a1, 0x3d($a0) # gSceneData + 61
  .L800D47D4:
  /* 0501B4 800D47D4 916B4D2B */       lbu $t3, %lo((D_800A4D08 + 0x23))($t3)
  /* 0501B8 800D47D8 240C0001 */     addiu $t4, $zero, 1
  /* 0501BC 800D47DC 2409001C */     addiu $t1, $zero, 0x1c
  /* 0501C0 800D47E0 016C7804 */      sllv $t7, $t4, $t3
  /* 0501C4 800D47E4 01E26824 */       and $t5, $t7, $v0
  /* 0501C8 800D47E8 15A00004 */      bnez $t5, .L800D47FC
  /* 0501CC 800D47EC 3C0C800A */       lui $t4, %hi((D_800A4D08 + 0x10B))
  /* 0501D0 800D47F0 A02E4D2B */        sb $t6, %lo((D_800A4D08 + 0x23))($at)
  /* 0501D4 800D47F4 3C01800A */       lui $at, %hi((D_800A4D08 + 0x22))
  /* 0501D8 800D47F8 A0204D2A */        sb $zero, %lo((D_800A4D08 + 0x22))($at)
  .L800D47FC:
  /* 0501DC 800D47FC 93184D9F */       lbu $t8, %lo((D_800A4D08 + 0x97))($t8)
  /* 0501E0 800D4800 24080001 */     addiu $t0, $zero, 1
  /* 0501E4 800D4804 3C01800A */       lui $at, %hi((D_800A4D08 + 0x97))
  /* 0501E8 800D4808 0308C804 */      sllv $t9, $t0, $t8
  /* 0501EC 800D480C 03225024 */       and $t2, $t9, $v0
  /* 0501F0 800D4810 15400004 */      bnez $t2, .L800D4824
  /* 0501F4 800D4814 3C08800A */       lui $t0, %hi((D_800A4D08 + 0x17F))
  /* 0501F8 800D4818 A0294D9F */        sb $t1, %lo((D_800A4D08 + 0x97))($at)
  /* 0501FC 800D481C 3C01800A */       lui $at, %hi((D_800A4D08 + 0x96))
  /* 050200 800D4820 A0204D9E */        sb $zero, %lo((D_800A4D08 + 0x96))($at)
  .L800D4824:
  /* 050204 800D4824 918C4E13 */       lbu $t4, %lo((D_800A4D08 + 0x10B))($t4)
  /* 050208 800D4828 240B0001 */     addiu $t3, $zero, 1
  /* 05020C 800D482C 240E001C */     addiu $t6, $zero, 0x1c
  /* 050210 800D4830 018B7804 */      sllv $t7, $t3, $t4
  /* 050214 800D4834 01E26824 */       and $t5, $t7, $v0
  /* 050218 800D4838 15A00004 */      bnez $t5, .L800D484C
  /* 05021C 800D483C 3C01800A */       lui $at, %hi((D_800A4D08 + 0x10B))
  /* 050220 800D4840 A02E4E13 */        sb $t6, %lo((D_800A4D08 + 0x10B))($at)
  /* 050224 800D4844 3C01800A */       lui $at, %hi((D_800A4D08 + 0x10A))
  /* 050228 800D4848 A0204E12 */        sb $zero, %lo((D_800A4D08 + 0x10A))($at)
  .L800D484C:
  /* 05022C 800D484C 91084E87 */       lbu $t0, %lo((D_800A4D08 + 0x17F))($t0)
  /* 050230 800D4850 24180001 */     addiu $t8, $zero, 1
  /* 050234 800D4854 2409001C */     addiu $t1, $zero, 0x1c
  /* 050238 800D4858 0118C804 */      sllv $t9, $t8, $t0
  /* 05023C 800D485C 03225024 */       and $t2, $t9, $v0
  /* 050240 800D4860 15400004 */      bnez $t2, .L800D4874
  /* 050244 800D4864 3C01800A */       lui $at, %hi((D_800A4D08 + 0x17F))
  /* 050248 800D4868 A0294E87 */        sb $t1, %lo((D_800A4D08 + 0x17F))($at)
  /* 05024C 800D486C 3C01800A */       lui $at, %hi((D_800A4D08 + 0x17E))
  /* 050250 800D4870 A0204E86 */        sb $zero, %lo((D_800A4D08 + 0x17E))($at)
  .L800D4874:
  /* 050254 800D4874 90620457 */       lbu $v0, 0x457($v1) # gSaveData + 1111
  /* 050258 800D4878 304B0010 */      andi $t3, $v0, 0x10
  /* 05025C 800D487C 1560000D */      bnez $t3, .L800D48B4
  /* 050260 800D4880 30580040 */      andi $t8, $v0, 0x40
  /* 050264 800D4884 908C0041 */       lbu $t4, 0x41($a0) # gSceneData + 65
  /* 050268 800D4888 24030008 */     addiu $v1, $zero, 8
  /* 05026C 800D488C 3C0F800A */       lui $t7, %hi((D_800A3F80 + 0x41))
  /* 050270 800D4890 146C0003 */       bne $v1, $t4, .L800D48A0
  /* 050274 800D4894 3C0E800A */       lui $t6, %hi((D_800A3F80 + 0x42))
  /* 050278 800D4898 91EF3FC1 */       lbu $t7, %lo((D_800A3F80 + 0x41))($t7)
  /* 05027C 800D489C A08F0041 */        sb $t7, 0x41($a0) # gSceneData + 65
  .L800D48A0:
  /* 050280 800D48A0 908D0042 */       lbu $t5, 0x42($a0) # gSceneData + 66
  /* 050284 800D48A4 146D0003 */       bne $v1, $t5, .L800D48B4
  /* 050288 800D48A8 00000000 */       nop 
  /* 05028C 800D48AC 91CE3FC2 */       lbu $t6, %lo((D_800A3F80 + 0x42))($t6)
  /* 050290 800D48B0 A08E0042 */        sb $t6, 0x42($a0) # gSceneData + 66
  .L800D48B4:
  /* 050294 800D48B4 17000008 */      bnez $t8, .L800D48D8
  /* 050298 800D48B8 3C02800A */       lui $v0, %hi(D_800A4D08)
  /* 05029C 800D48BC 3C03800A */       lui $v1, %hi(gDefaultBattleState)
  /* 0502A0 800D48C0 24633FC8 */     addiu $v1, $v1, %lo(gDefaultBattleState)
  /* 0502A4 800D48C4 8C68000C */        lw $t0, 0xc($v1) # gDefaultBattleState + 12
  /* 0502A8 800D48C8 9079001C */       lbu $t9, 0x1c($v1) # gDefaultBattleState + 28
  /* 0502AC 800D48CC 24424D08 */     addiu $v0, $v0, %lo(D_800A4D08)
  /* 0502B0 800D48D0 AC48000C */        sw $t0, 0xc($v0) # D_800A4D08 + 12
  /* 0502B4 800D48D4 A059001C */        sb $t9, 0x1c($v0) # D_800A4D08 + 28
  .L800D48D8:
  /* 0502B8 800D48D8 03E00008 */        jr $ra
  /* 0502BC 800D48DC 00000000 */       nop 

glabel lbMemory_SaveData_BackupClearNewcomers
  /* 0502C0 800D48E0 3C02800A */       lui $v0, %hi(gSaveData)
  /* 0502C4 800D48E4 244244E0 */     addiu $v0, $v0, %lo(gSaveData)
  /* 0502C8 800D48E8 904E0457 */       lbu $t6, 0x457($v0) # gSaveData + 1111
  /* 0502CC 800D48EC 3C03800A */       lui $v1, %hi(gDefaultSaveData)
  /* 0502D0 800D48F0 24633994 */     addiu $v1, $v1, %lo(gDefaultSaveData)
  /* 0502D4 800D48F4 90790457 */       lbu $t9, 0x457($v1) # gDefaultSaveData + 1111
  /* 0502D8 800D48F8 31D8FFF0 */      andi $t8, $t6, 0xfff0
  /* 0502DC 800D48FC 94690458 */       lhu $t1, 0x458($v1) # gDefaultSaveData + 1112
  /* 0502E0 800D4900 A0580457 */        sb $t8, 0x457($v0) # gSaveData + 1111
  /* 0502E4 800D4904 03194025 */        or $t0, $t8, $t9
  /* 0502E8 800D4908 A0480457 */        sb $t0, 0x457($v0) # gSaveData + 1111
  /* 0502EC 800D490C 03E00008 */        jr $ra
  /* 0502F0 800D4910 A4490458 */        sh $t1, 0x458($v0) # gSaveData + 1112

glabel lbMemory_SaveData_BackupClear1PHighScore
  /* 0502F4 800D4914 3C03800A */       lui $v1, %hi(gSaveData)
  /* 0502F8 800D4918 3C04800A */       lui $a0, %hi(gDefaultSaveData)
  /* 0502FC 800D491C 3C02800A */       lui $v0, %hi((gDefaultSaveData + 0x180))
  /* 050300 800D4920 24423B14 */     addiu $v0, $v0, %lo((gDefaultSaveData + 0x180))
  /* 050304 800D4924 24843994 */     addiu $a0, $a0, %lo(gDefaultSaveData)
  /* 050308 800D4928 246344E0 */     addiu $v1, $v1, %lo(gSaveData)
  .L800D492C:
  /* 05030C 800D492C 8C89047C */        lw $t1, 0x47c($a0) # gDefaultSaveData + 1148
  /* 050310 800D4930 8C8A0480 */        lw $t2, 0x480($a0) # gDefaultSaveData + 1152
  /* 050314 800D4934 8C8B0484 */        lw $t3, 0x484($a0) # gDefaultSaveData + 1156
  /* 050318 800D4938 908C0488 */       lbu $t4, 0x488($a0) # gDefaultSaveData + 1160
  /* 05031C 800D493C 908D0499 */       lbu $t5, 0x499($a0) # gDefaultSaveData + 1177
  /* 050320 800D4940 8C8E045C */        lw $t6, 0x45c($a0) # gDefaultSaveData + 1116
  /* 050324 800D4944 8C8F0460 */        lw $t7, 0x460($a0) # gDefaultSaveData + 1120
  /* 050328 800D4948 8C980464 */        lw $t8, 0x464($a0) # gDefaultSaveData + 1124
  /* 05032C 800D494C 90990468 */       lbu $t9, 0x468($a0) # gDefaultSaveData + 1128
  /* 050330 800D4950 90880479 */       lbu $t0, 0x479($a0) # gDefaultSaveData + 1145
  /* 050334 800D4954 AC69047C */        sw $t1, 0x47c($v1) # gSaveData + 1148
  /* 050338 800D4958 AC6A0480 */        sw $t2, 0x480($v1) # gSaveData + 1152
  /* 05033C 800D495C AC6B0484 */        sw $t3, 0x484($v1) # gSaveData + 1156
  /* 050340 800D4960 A06C0488 */        sb $t4, 0x488($v1) # gSaveData + 1160
  /* 050344 800D4964 A06D0499 */        sb $t5, 0x499($v1) # gSaveData + 1177
  /* 050348 800D4968 AC6E045C */        sw $t6, 0x45c($v1) # gSaveData + 1116
  /* 05034C 800D496C AC6F0460 */        sw $t7, 0x460($v1) # gSaveData + 1120
  /* 050350 800D4970 AC780464 */        sw $t8, 0x464($v1) # gSaveData + 1124
  /* 050354 800D4974 A0790468 */        sb $t9, 0x468($v1) # gSaveData + 1128
  /* 050358 800D4978 A0680479 */        sb $t0, 0x479($v1) # gSaveData + 1145
  /* 05035C 800D497C 908804B9 */       lbu $t0, 0x4b9($a0) # gDefaultSaveData + 1209
  /* 050360 800D4980 909904A8 */       lbu $t9, 0x4a8($a0) # gDefaultSaveData + 1192
  /* 050364 800D4984 8C9804A4 */        lw $t8, 0x4a4($a0) # gDefaultSaveData + 1188
  /* 050368 800D4988 8C8F04A0 */        lw $t7, 0x4a0($a0) # gDefaultSaveData + 1184
  /* 05036C 800D498C 8C8E049C */        lw $t6, 0x49c($a0) # gDefaultSaveData + 1180
  /* 050370 800D4990 908D04D9 */       lbu $t5, 0x4d9($a0) # gDefaultSaveData + 1241
  /* 050374 800D4994 908C04C8 */       lbu $t4, 0x4c8($a0) # gDefaultSaveData + 1224
  /* 050378 800D4998 8C8B04C4 */        lw $t3, 0x4c4($a0) # gDefaultSaveData + 1220
  /* 05037C 800D499C 8C8A04C0 */        lw $t2, 0x4c0($a0) # gDefaultSaveData + 1216
  /* 050380 800D49A0 8C8904BC */        lw $t1, 0x4bc($a0) # gDefaultSaveData + 1212
  /* 050384 800D49A4 24840080 */     addiu $a0, $a0, 0x80
  /* 050388 800D49A8 24630080 */     addiu $v1, $v1, 0x80
  /* 05038C 800D49AC A0680439 */        sb $t0, 0x439($v1) # gSaveData + 1081
  /* 050390 800D49B0 A0790428 */        sb $t9, 0x428($v1) # gSaveData + 1064
  /* 050394 800D49B4 AC780424 */        sw $t8, 0x424($v1) # gSaveData + 1060
  /* 050398 800D49B8 AC6F0420 */        sw $t7, 0x420($v1) # gSaveData + 1056
  /* 05039C 800D49BC AC6E041C */        sw $t6, 0x41c($v1) # gSaveData + 1052
  /* 0503A0 800D49C0 A06D0459 */        sb $t5, 0x459($v1) # gSaveData + 1113
  /* 0503A4 800D49C4 A06C0448 */        sb $t4, 0x448($v1) # gSaveData + 1096
  /* 0503A8 800D49C8 AC6B0444 */        sw $t3, 0x444($v1) # gSaveData + 1092
  /* 0503AC 800D49CC AC6A0440 */        sw $t2, 0x440($v1) # gSaveData + 1088
  /* 0503B0 800D49D0 1482FFD6 */       bne $a0, $v0, .L800D492C
  /* 0503B4 800D49D4 AC69043C */        sw $t1, 0x43c($v1) # gSaveData + 1084
  /* 0503B8 800D49D8 03E00008 */        jr $ra
  /* 0503BC 800D49DC 00000000 */       nop 

glabel lbMemory_SaveData_BackupClearVSRecord
  /* 0503C0 800D49E0 3C03800A */       lui $v1, %hi(gSaveData)
  /* 0503C4 800D49E4 3C04800A */       lui $a0, %hi(gDefaultSaveData)
  /* 0503C8 800D49E8 3C05800A */       lui $a1, %hi((gSaveData + 0x5C))
  /* 0503CC 800D49EC 3C06800A */       lui $a2, %hi((gDefaultSaveData + 0x5c))
  /* 0503D0 800D49F0 3C07800A */       lui $a3, %hi((gSaveData + 0xB8))
  /* 0503D4 800D49F4 3C08800A */       lui $t0, %hi((gDefaultSaveData + 0xB8))
  /* 0503D8 800D49F8 3C09800A */       lui $t1, %hi((gSaveData + 0x114))
  /* 0503DC 800D49FC 3C0A800A */       lui $t2, %hi((gDefaultSaveData + 0x114))
  /* 0503E0 800D4A00 3C02800A */       lui $v0, %hi((gDefaultSaveData + 0x564))
  /* 0503E4 800D4A04 24423EF8 */     addiu $v0, $v0, %lo((gDefaultSaveData + 0x564))
  /* 0503E8 800D4A08 254A3AA8 */     addiu $t2, $t2, %lo((gDefaultSaveData + 0x114))
  /* 0503EC 800D4A0C 252945F4 */     addiu $t1, $t1, %lo((gSaveData + 0x114))
  /* 0503F0 800D4A10 25083A4C */     addiu $t0, $t0, %lo((gDefaultSaveData + 0xB8))
  /* 0503F4 800D4A14 24E74598 */     addiu $a3, $a3, %lo((gSaveData + 0xB8))
  /* 0503F8 800D4A18 24C639F0 */     addiu $a2, $a2, %lo((gDefaultSaveData + 0x5c))
  /* 0503FC 800D4A1C 24A5453C */     addiu $a1, $a1, %lo((gSaveData + 0x5C))
  /* 050400 800D4A20 24843994 */     addiu $a0, $a0, %lo(gDefaultSaveData)
  /* 050404 800D4A24 246344E0 */     addiu $v1, $v1, %lo(gSaveData)
  .L800D4A28:
  /* 050408 800D4A28 0080C025 */        or $t8, $a0, $zero
  /* 05040C 800D4A2C 0060C825 */        or $t9, $v1, $zero
  /* 050410 800D4A30 248B0054 */     addiu $t3, $a0, 0x54
  .L800D4A34:
  /* 050414 800D4A34 8F0F0000 */        lw $t7, ($t8)
  /* 050418 800D4A38 2718000C */     addiu $t8, $t8, 0xc
  /* 05041C 800D4A3C 2739000C */     addiu $t9, $t9, 0xc
  /* 050420 800D4A40 AF2FFFF4 */        sw $t7, -0xc($t9)
  /* 050424 800D4A44 8F0EFFF8 */        lw $t6, -8($t8)
  /* 050428 800D4A48 AF2EFFF8 */        sw $t6, -8($t9)
  /* 05042C 800D4A4C 8F0FFFFC */        lw $t7, -4($t8)
  /* 050430 800D4A50 170BFFF8 */       bne $t8, $t3, .L800D4A34
  /* 050434 800D4A54 AF2FFFFC */        sw $t7, -4($t9)
  /* 050438 800D4A58 8F0F0000 */        lw $t7, ($t8)
  /* 05043C 800D4A5C 00C05825 */        or $t3, $a2, $zero
  /* 050440 800D4A60 24630170 */     addiu $v1, $v1, 0x170
  /* 050444 800D4A64 AF2F0000 */        sw $t7, ($t9)
  /* 050448 800D4A68 8F0E0004 */        lw $t6, 4($t8)
  /* 05044C 800D4A6C 00A0C025 */        or $t8, $a1, $zero
  /* 050450 800D4A70 24840170 */     addiu $a0, $a0, 0x170
  /* 050454 800D4A74 AF2E0004 */        sw $t6, 4($t9)
  /* 050458 800D4A78 24D90054 */     addiu $t9, $a2, 0x54
  .L800D4A7C:
  /* 05045C 800D4A7C 8D6D0000 */        lw $t5, ($t3)
  /* 050460 800D4A80 256B000C */     addiu $t3, $t3, 0xc
  /* 050464 800D4A84 2718000C */     addiu $t8, $t8, 0xc
  /* 050468 800D4A88 AF0DFFF4 */        sw $t5, -0xc($t8)
  /* 05046C 800D4A8C 8D6CFFF8 */        lw $t4, -8($t3)
  /* 050470 800D4A90 AF0CFFF8 */        sw $t4, -8($t8)
  /* 050474 800D4A94 8D6DFFFC */        lw $t5, -4($t3)
  /* 050478 800D4A98 1579FFF8 */       bne $t3, $t9, .L800D4A7C
  /* 05047C 800D4A9C AF0DFFFC */        sw $t5, -4($t8)
  /* 050480 800D4AA0 8D6D0000 */        lw $t5, ($t3)
  /* 050484 800D4AA4 0100C825 */        or $t9, $t0, $zero
  /* 050488 800D4AA8 24A50170 */     addiu $a1, $a1, 0x170
  /* 05048C 800D4AAC AF0D0000 */        sw $t5, ($t8)
  /* 050490 800D4AB0 8D6C0004 */        lw $t4, 4($t3)
  /* 050494 800D4AB4 00E05825 */        or $t3, $a3, $zero
  /* 050498 800D4AB8 24C60170 */     addiu $a2, $a2, 0x170
  /* 05049C 800D4ABC AF0C0004 */        sw $t4, 4($t8)
  /* 0504A0 800D4AC0 25180054 */     addiu $t8, $t0, 0x54
  .L800D4AC4:
  /* 0504A4 800D4AC4 8F2F0000 */        lw $t7, ($t9)
  /* 0504A8 800D4AC8 2739000C */     addiu $t9, $t9, 0xc
  /* 0504AC 800D4ACC 256B000C */     addiu $t3, $t3, 0xc
  /* 0504B0 800D4AD0 AD6FFFF4 */        sw $t7, -0xc($t3)
  /* 0504B4 800D4AD4 8F2EFFF8 */        lw $t6, -8($t9)
  /* 0504B8 800D4AD8 AD6EFFF8 */        sw $t6, -8($t3)
  /* 0504BC 800D4ADC 8F2FFFFC */        lw $t7, -4($t9)
  /* 0504C0 800D4AE0 1738FFF8 */       bne $t9, $t8, .L800D4AC4
  /* 0504C4 800D4AE4 AD6FFFFC */        sw $t7, -4($t3)
  /* 0504C8 800D4AE8 8F2F0000 */        lw $t7, ($t9)
  /* 0504CC 800D4AEC 0140C025 */        or $t8, $t2, $zero
  /* 0504D0 800D4AF0 24E70170 */     addiu $a3, $a3, 0x170
  /* 0504D4 800D4AF4 AD6F0000 */        sw $t7, ($t3)
  /* 0504D8 800D4AF8 8F2E0004 */        lw $t6, 4($t9)
  /* 0504DC 800D4AFC 0120C825 */        or $t9, $t1, $zero
  /* 0504E0 800D4B00 AD6E0004 */        sw $t6, 4($t3)
  /* 0504E4 800D4B04 254B0054 */     addiu $t3, $t2, 0x54
  .L800D4B08:
  /* 0504E8 800D4B08 8F0D0000 */        lw $t5, ($t8)
  /* 0504EC 800D4B0C 2718000C */     addiu $t8, $t8, 0xc
  /* 0504F0 800D4B10 2739000C */     addiu $t9, $t9, 0xc
  /* 0504F4 800D4B14 AF2DFFF4 */        sw $t5, -0xc($t9)
  /* 0504F8 800D4B18 8F0CFFF8 */        lw $t4, -8($t8)
  /* 0504FC 800D4B1C AF2CFFF8 */        sw $t4, -8($t9)
  /* 050500 800D4B20 8F0DFFFC */        lw $t5, -4($t8)
  /* 050504 800D4B24 170BFFF8 */       bne $t8, $t3, .L800D4B08
  /* 050508 800D4B28 AF2DFFFC */        sw $t5, -4($t9)
  /* 05050C 800D4B2C 8F0D0000 */        lw $t5, ($t8)
  /* 050510 800D4B30 254A0170 */     addiu $t2, $t2, 0x170
  /* 050514 800D4B34 25080170 */     addiu $t0, $t0, 0x170
  /* 050518 800D4B38 AF2D0000 */        sw $t5, ($t9)
  /* 05051C 800D4B3C 8F0C0004 */        lw $t4, 4($t8)
  /* 050520 800D4B40 25290170 */     addiu $t1, $t1, 0x170
  /* 050524 800D4B44 1542FFB8 */       bne $t2, $v0, .L800D4A28
  /* 050528 800D4B48 AF2C0004 */        sw $t4, 4($t9)
  /* 05052C 800D4B4C 3C0E800A */       lui $t6, %hi((gDefaultSaveData + 0x5e0))
  /* 050530 800D4B50 95CE3F74 */       lhu $t6, %lo((gDefaultSaveData + 0x5e0))($t6)
  /* 050534 800D4B54 3C01800A */       lui $at, %hi((gSaveData + 0x5e0))
  /* 050538 800D4B58 03E00008 */        jr $ra
  /* 05053C 800D4B5C A42E4AC0 */        sh $t6, %lo((gSaveData + 0x5e0))($at)

glabel lbMemory_SaveData_BackupClearBonusStageTime
  /* 050540 800D4B60 3C03800A */       lui $v1, %hi(gSaveData)
  /* 050544 800D4B64 3C04800A */       lui $a0, %hi(gDefaultSaveData)
  /* 050548 800D4B68 3C02800A */       lui $v0, %hi((gDefaultSaveData + 0x180))
  /* 05054C 800D4B6C 24423B14 */     addiu $v0, $v0, %lo((gDefaultSaveData + 0x180))
  /* 050550 800D4B70 24843994 */     addiu $a0, $a0, %lo(gDefaultSaveData)
  /* 050554 800D4B74 246344E0 */     addiu $v1, $v1, %lo(gSaveData)
  .L800D4B78:
  /* 050558 800D4B78 8C88048C */        lw $t0, 0x48c($a0) # gDefaultSaveData + 1164
  /* 05055C 800D4B7C 90890490 */       lbu $t1, 0x490($a0) # gDefaultSaveData + 1168
  /* 050560 800D4B80 8C8E046C */        lw $t6, 0x46c($a0) # gDefaultSaveData + 1132
  /* 050564 800D4B84 908F0470 */       lbu $t7, 0x470($a0) # gDefaultSaveData + 1136
  /* 050568 800D4B88 8C980474 */        lw $t8, 0x474($a0) # gDefaultSaveData + 1140
  /* 05056C 800D4B8C 90990478 */       lbu $t9, 0x478($a0) # gDefaultSaveData + 1144
  /* 050570 800D4B90 AC68048C */        sw $t0, 0x48c($v1) # gSaveData + 1164
  /* 050574 800D4B94 A0690490 */        sb $t1, 0x490($v1) # gSaveData + 1168
  /* 050578 800D4B98 AC6E046C */        sw $t6, 0x46c($v1) # gSaveData + 1132
  /* 05057C 800D4B9C A06F0470 */        sb $t7, 0x470($v1) # gSaveData + 1136
  /* 050580 800D4BA0 AC780474 */        sw $t8, 0x474($v1) # gSaveData + 1140
  /* 050584 800D4BA4 A0790478 */        sb $t9, 0x478($v1) # gSaveData + 1144
  /* 050588 800D4BA8 909904D0 */       lbu $t9, 0x4d0($a0) # gDefaultSaveData + 1232
  /* 05058C 800D4BAC 8C9804CC */        lw $t8, 0x4cc($a0) # gDefaultSaveData + 1228
  /* 050590 800D4BB0 908F04B8 */       lbu $t7, 0x4b8($a0) # gDefaultSaveData + 1208
  /* 050594 800D4BB4 8C8E04B4 */        lw $t6, 0x4b4($a0) # gDefaultSaveData + 1204
  /* 050598 800D4BB8 908904D8 */       lbu $t1, 0x4d8($a0) # gDefaultSaveData + 1240
  /* 05059C 800D4BBC 8C8804D4 */        lw $t0, 0x4d4($a0) # gDefaultSaveData + 1236
  /* 0505A0 800D4BC0 8C8A0494 */        lw $t2, 0x494($a0) # gDefaultSaveData + 1172
  /* 0505A4 800D4BC4 908B0498 */       lbu $t3, 0x498($a0) # gDefaultSaveData + 1176
  /* 0505A8 800D4BC8 8C8C04AC */        lw $t4, 0x4ac($a0) # gDefaultSaveData + 1196
  /* 0505AC 800D4BCC 908D04B0 */       lbu $t5, 0x4b0($a0) # gDefaultSaveData + 1200
  /* 0505B0 800D4BD0 24840080 */     addiu $a0, $a0, 0x80
  /* 0505B4 800D4BD4 24630080 */     addiu $v1, $v1, 0x80
  /* 0505B8 800D4BD8 A0790450 */        sb $t9, 0x450($v1) # gSaveData + 1104
  /* 0505BC 800D4BDC AC78044C */        sw $t8, 0x44c($v1) # gSaveData + 1100
  /* 0505C0 800D4BE0 A06F0438 */        sb $t7, 0x438($v1) # gSaveData + 1080
  /* 0505C4 800D4BE4 AC6E0434 */        sw $t6, 0x434($v1) # gSaveData + 1076
  /* 0505C8 800D4BE8 A0690458 */        sb $t1, 0x458($v1) # gSaveData + 1112
  /* 0505CC 800D4BEC AC680454 */        sw $t0, 0x454($v1) # gSaveData + 1108
  /* 0505D0 800D4BF0 AC6A0414 */        sw $t2, 0x414($v1) # gSaveData + 1044
  /* 0505D4 800D4BF4 A06B0418 */        sb $t3, 0x418($v1) # gSaveData + 1048
  /* 0505D8 800D4BF8 AC6C042C */        sw $t4, 0x42c($v1) # gSaveData + 1068
  /* 0505DC 800D4BFC 1482FFDE */       bne $a0, $v0, .L800D4B78
  /* 0505E0 800D4C00 A06D0430 */        sb $t5, 0x430($v1) # gSaveData + 1072
  /* 0505E4 800D4C04 03E00008 */        jr $ra
  /* 0505E8 800D4C08 00000000 */       nop 

glabel lbMemory_SaveData_BackupClearPrize
  /* 0505EC 800D4C0C 3C02800A */       lui $v0, %hi(gSaveData)
  /* 0505F0 800D4C10 244244E0 */     addiu $v0, $v0, %lo(gSaveData)
  /* 0505F4 800D4C14 904E0457 */       lbu $t6, 0x457($v0) # gSaveData + 1111
  /* 0505F8 800D4C18 3C03800A */       lui $v1, %hi(gDefaultSaveData)
  /* 0505FC 800D4C1C 24633994 */     addiu $v1, $v1, %lo(gDefaultSaveData)
  /* 050600 800D4C20 90790457 */       lbu $t9, 0x457($v1) # gDefaultSaveData + 1111
  /* 050604 800D4C24 31D8FF8F */      andi $t8, $t6, 0xff8f
  /* 050608 800D4C28 946905DC */       lhu $t1, 0x5dc($v1) # gDefaultSaveData + 1500
  /* 05060C 800D4C2C 906A05DE */       lbu $t2, 0x5de($v1) # gDefaultSaveData + 1502
  /* 050610 800D4C30 A0580457 */        sb $t8, 0x457($v0) # gSaveData + 1111
  /* 050614 800D4C34 03194025 */        or $t0, $t8, $t9
  /* 050618 800D4C38 A0480457 */        sb $t0, 0x457($v0) # gSaveData + 1111
  /* 05061C 800D4C3C A44905DC */        sh $t1, 0x5dc($v0) # gSaveData + 1500
  /* 050620 800D4C40 03E00008 */        jr $ra
  /* 050624 800D4C44 A04A05DE */        sb $t2, 0x5de($v0) # gSaveData + 1502

glabel lbMemory_SaveData_BackupClearAllData
  /* 050628 800D4C48 3C0F800A */       lui $t7, %hi(gDefaultSaveData)
  /* 05062C 800D4C4C 25EF3994 */     addiu $t7, $t7, %lo(gDefaultSaveData)
  /* 050630 800D4C50 3C0E800A */       lui $t6, %hi(gSaveData)
  /* 050634 800D4C54 25CE44E0 */     addiu $t6, $t6, %lo(gSaveData)
  /* 050638 800D4C58 25E805E8 */     addiu $t0, $t7, 0x5e8
  .L800D4C5C:
  /* 05063C 800D4C5C 8DF90000 */        lw $t9, ($t7) # gDefaultSaveData + 0
  /* 050640 800D4C60 25EF000C */     addiu $t7, $t7, 0xc
  /* 050644 800D4C64 25CE000C */     addiu $t6, $t6, 0xc
  /* 050648 800D4C68 ADD9FFF4 */        sw $t9, -0xc($t6) # gSaveData + -12
  /* 05064C 800D4C6C 8DF8FFF8 */        lw $t8, -8($t7) # gDefaultSaveData + -8
  /* 050650 800D4C70 ADD8FFF8 */        sw $t8, -8($t6) # gSaveData + -8
  /* 050654 800D4C74 8DF9FFFC */        lw $t9, -4($t7) # gDefaultSaveData + -4
  /* 050658 800D4C78 15E8FFF8 */       bne $t7, $t0, .L800D4C5C
  /* 05065C 800D4C7C ADD9FFFC */        sw $t9, -4($t6) # gSaveData + -4
  /* 050660 800D4C80 8DF90000 */        lw $t9, ($t7) # gDefaultSaveData + 0
  /* 050664 800D4C84 03E00008 */        jr $ra
  /* 050668 800D4C88 ADD90000 */        sw $t9, ($t6) # gSaveData + 0

  /* 05066C 800D4C8C 03E00008 */        jr $ra
  /* 050670 800D4C90 00000000 */       nop 

  /* 050674 800D4C94 00000000 */       nop 
  /* 050678 800D4C98 00000000 */       nop 
  /* 05067C 800D4C9C 00000000 */       nop 
