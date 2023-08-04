.section .rodata

glabel D_ovl0_800D5E40
  /* E600 051820 800D5E40 */
  .asciz "drawBitMap: no bitmap data!\n"
  .balign 4

.section .text
glabel func_ovl0_800CB7D4
  /* 0471B4 800CB7D4 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 0471B8 800CB7D8 AFBF001C */        sw $ra, 0x1c($sp)
  /* 0471BC 800CB7DC AFB10018 */        sw $s1, 0x18($sp)
  /* 0471C0 800CB7E0 AFB00014 */        sw $s0, 0x14($sp)
  /* 0471C4 800CB7E4 AFA40038 */        sw $a0, 0x38($sp)
  /* 0471C8 800CB7E8 AFA60040 */        sw $a2, 0x40($sp)
  /* 0471CC 800CB7EC 8CE80008 */        lw $t0, 8($a3)
  /* 0471D0 800CB7F0 00A08025 */        or $s0, $a1, $zero
  /* 0471D4 800CB7F4 00E08825 */        or $s1, $a3, $zero
  /* 0471D8 800CB7F8 15000008 */      bnez $t0, .L800CB81C
  /* 0471DC 800CB7FC 8FA60054 */        lw $a2, 0x54($sp)
  .L800CB800:
  /* 0471E0 800CB800 3C04800D */       lui $a0, %hi(D_ovl0_800D5E40)
  /* 0471E4 800CB804 0C008D89 */       jal fatal_printf
  /* 0471E8 800CB808 24845E40 */     addiu $a0, $a0, %lo(D_ovl0_800D5E40)
  /* 0471EC 800CB80C 0C028C10 */       jal scnmgr_crash_print_gobj_state
  /* 0471F0 800CB810 00000000 */       nop 
  /* 0471F4 800CB814 1000FFFA */         b .L800CB800
  /* 0471F8 800CB818 00000000 */       nop 
  .L800CB81C:
  /* 0471FC 800CB81C 3C04800D */       lui $a0, %hi(D_ovl0_800D62C8)
  /* 047200 800CB820 8C8462C8 */        lw $a0, %lo(D_ovl0_800D62C8)($a0)
  /* 047204 800CB824 8FAE0040 */        lw $t6, 0x40($sp)
  /* 047208 800CB828 8FB80038 */        lw $t8, 0x38($sp)
  /* 04720C 800CB82C 00C4082A */       slt $at, $a2, $a0
  /* 047210 800CB830 54200235 */      bnel $at, $zero, .L800CC108
  /* 047214 800CB834 8FBF001C */        lw $ra, 0x1c($sp)
  /* 047218 800CB838 95C30014 */       lhu $v1, 0x14($t6)
  /* 04721C 800CB83C 8FA70058 */        lw $a3, 0x58($sp)
  /* 047220 800CB840 8FA9005C */        lw $t1, 0x5c($sp)
  /* 047224 800CB844 306F0020 */      andi $t7, $v1, 0x20
  /* 047228 800CB848 11E00002 */      beqz $t7, .L800CB854
  /* 04722C 800CB84C 30790080 */      andi $t9, $v1, 0x80
  /* 047230 800CB850 24C6FFFF */     addiu $a2, $a2, -1
  .L800CB854:
  /* 047234 800CB854 13200005 */      beqz $t9, .L800CB86C
  /* 047238 800CB858 8F020000 */        lw $v0, ($t8)
  /* 04723C 800CB85C 24E70010 */     addiu $a3, $a3, 0x10
  /* 047240 800CB860 25290010 */     addiu $t1, $t1, 0x10
  /* 047244 800CB864 AFA9005C */        sw $t1, 0x5c($sp)
  /* 047248 800CB868 AFA70058 */        sw $a3, 0x58($sp)
  .L800CB86C:
  /* 04724C 800CB86C 3C03800D */       lui $v1, %hi(D_ovl0_800D62C4)
  /* 047250 800CB870 8FA50048 */        lw $a1, 0x48($sp)
  /* 047254 800CB874 8C6362C4 */        lw $v1, %lo(D_ovl0_800D62C4)($v1)
  /* 047258 800CB878 8FA70058 */        lw $a3, 0x58($sp)
  /* 04725C 800CB87C 8FA9005C */        lw $t1, 0x5c($sp)
  /* 047260 800CB880 00A3082A */       slt $at, $a1, $v1
  /* 047264 800CB884 862A0000 */        lh $t2, ($s1)
  /* 047268 800CB888 1020000B */      beqz $at, .L800CB8B8
  /* 04726C 800CB88C 862B000C */        lh $t3, 0xc($s1)
  /* 047270 800CB890 8FB80060 */        lw $t8, 0x60($sp)
  /* 047274 800CB894 00657823 */      subu $t7, $v1, $a1
  /* 047278 800CB898 00037080 */       sll $t6, $v1, 2
  /* 04727C 800CB89C 01F80019 */     multu $t7, $t8
  /* 047280 800CB8A0 AFAE002C */        sw $t6, 0x2c($sp)
  /* 047284 800CB8A4 0000C812 */      mflo $t9
  /* 047288 800CB8A8 00197143 */       sra $t6, $t9, 5
  /* 04728C 800CB8AC 01C77821 */      addu $t7, $t6, $a3
  /* 047290 800CB8B0 10000004 */         b .L800CB8C4
  /* 047294 800CB8B4 AFAF0034 */        sw $t7, 0x34($sp)
  .L800CB8B8:
  /* 047298 800CB8B8 0005C080 */       sll $t8, $a1, 2
  /* 04729C 800CB8BC AFB8002C */        sw $t8, 0x2c($sp)
  /* 0472A0 800CB8C0 AFA70034 */        sw $a3, 0x34($sp)
  .L800CB8C4:
  /* 0472A4 800CB8C4 8FA3004C */        lw $v1, 0x4c($sp)
  /* 0472A8 800CB8C8 0064082A */       slt $at, $v1, $a0
  /* 0472AC 800CB8CC 1020000B */      beqz $at, .L800CB8FC
  /* 0472B0 800CB8D0 00037880 */       sll $t7, $v1, 2
  /* 0472B4 800CB8D4 8FAF0064 */        lw $t7, 0x64($sp)
  /* 0472B8 800CB8D8 00837023 */      subu $t6, $a0, $v1
  /* 0472BC 800CB8DC 0004C880 */       sll $t9, $a0, 2
  /* 0472C0 800CB8E0 01CF0019 */     multu $t6, $t7
  /* 0472C4 800CB8E4 AFB90028 */        sw $t9, 0x28($sp)
  /* 0472C8 800CB8E8 0000C012 */      mflo $t8
  /* 0472CC 800CB8EC 0018C943 */       sra $t9, $t8, 5
  /* 0472D0 800CB8F0 03297021 */      addu $t6, $t9, $t1
  /* 0472D4 800CB8F4 10000003 */         b .L800CB904
  /* 0472D8 800CB8F8 AFAE0030 */        sw $t6, 0x30($sp)
  .L800CB8FC:
  /* 0472DC 800CB8FC AFAF0028 */        sw $t7, 0x28($sp)
  /* 0472E0 800CB900 AFA90030 */        sw $t1, 0x30($sp)
  .L800CB904:
  /* 0472E4 800CB904 3C03800D */       lui $v1, %hi(D_ovl0_800D62BC)
  /* 0472E8 800CB908 8FA40050 */        lw $a0, 0x50($sp)
  /* 0472EC 800CB90C 8C6362BC */        lw $v1, %lo(D_ovl0_800D62BC)($v1)
  /* 0472F0 800CB910 0006C880 */       sll $t9, $a2, 2
  /* 0472F4 800CB914 3C0E800D */       lui $t6, %hi(D_ovl0_800D62B4)
  /* 0472F8 800CB918 0083082A */       slt $at, $a0, $v1
  /* 0472FC 800CB91C 14200003 */      bnez $at, .L800CB92C
  /* 047300 800CB920 0004F880 */       sll $ra, $a0, 2
  /* 047304 800CB924 10000001 */         b .L800CB92C
  /* 047308 800CB928 0003F880 */       sll $ra, $v1, 2
  .L800CB92C:
  /* 04730C 800CB92C 3C03800D */       lui $v1, %hi(D_ovl0_800D62C0)
  /* 047310 800CB930 8C6362C0 */        lw $v1, %lo(D_ovl0_800D62C0)($v1)
  /* 047314 800CB934 00C3082A */       slt $at, $a2, $v1
  /* 047318 800CB938 14200003 */      bnez $at, .L800CB948
  /* 04731C 800CB93C 0003C080 */       sll $t8, $v1, 2
  /* 047320 800CB940 10000002 */         b .L800CB94C
  /* 047324 800CB944 AFB80020 */        sw $t8, 0x20($sp)
  .L800CB948:
  /* 047328 800CB948 AFB90020 */        sw $t9, 0x20($sp)
  .L800CB94C:
  /* 04732C 800CB94C 8DCE62B4 */        lw $t6, %lo(D_ovl0_800D62B4)($t6)
  /* 047330 800CB950 8FAF0040 */        lw $t7, 0x40($sp)
  /* 047334 800CB954 51C801C4 */      beql $t6, $t0, .L800CC068
  /* 047338 800CB958 8FB80020 */        lw $t8, 0x20($sp)
  /* 04733C 800CB95C 91E30031 */       lbu $v1, 0x31($t7)
  /* 047340 800CB960 8FA90040 */        lw $t1, 0x40($sp)
  /* 047344 800CB964 3C01FD00 */       lui $at, 0xfd00
  /* 047348 800CB968 5060000D */      beql $v1, $zero, .L800CB9A0
  /* 04734C 800CB96C 91380030 */       lbu $t8, 0x30($t1)
  /* 047350 800CB970 24010001 */     addiu $at, $zero, 1
  /* 047354 800CB974 10610079 */       beq $v1, $at, .L800CBB5C
  /* 047358 800CB978 8FA90040 */        lw $t1, 0x40($sp)
  /* 04735C 800CB97C 24010002 */     addiu $at, $zero, 2
  /* 047360 800CB980 106100E8 */       beq $v1, $at, .L800CBD24
  /* 047364 800CB984 8FA90040 */        lw $t1, 0x40($sp)
  /* 047368 800CB988 24010003 */     addiu $at, $zero, 3
  /* 04736C 800CB98C 10610155 */       beq $v1, $at, .L800CBEE4
  /* 047370 800CB990 3C0C0700 */       lui $t4, 0x700
  /* 047374 800CB994 100001B1 */         b .L800CC05C
  /* 047378 800CB998 00000000 */       nop 
  /* 04737C 800CB99C 91380030 */       lbu $t8, 0x30($t1)
  .L800CB9A0:
  /* 047380 800CB9A0 3C080010 */       lui $t0, 0x10
  /* 047384 800CB9A4 00401825 */        or $v1, $v0, $zero
  /* 047388 800CB9A8 33190007 */      andi $t9, $t8, 7
  /* 04738C 800CB9AC 00197540 */       sll $t6, $t9, 0x15
  /* 047390 800CB9B0 01C17825 */        or $t7, $t6, $at
  /* 047394 800CB9B4 01E8C025 */        or $t8, $t7, $t0
  /* 047398 800CB9B8 AC780000 */        sw $t8, ($v1)
  /* 04739C 800CB9BC 8E390008 */        lw $t9, 8($s1)
  /* 0473A0 800CB9C0 3C0DF500 */       lui $t5, 0xf500
  /* 0473A4 800CB9C4 24420008 */     addiu $v0, $v0, 8
  /* 0473A8 800CB9C8 AC790004 */        sw $t9, 4($v1)
  /* 0473AC 800CB9CC 912E0030 */       lbu $t6, 0x30($t1)
  /* 0473B0 800CB9D0 00402025 */        or $a0, $v0, $zero
  /* 0473B4 800CB9D4 3C0C0700 */       lui $t4, 0x700
  /* 0473B8 800CB9D8 31CF0007 */      andi $t7, $t6, 7
  /* 0473BC 800CB9DC 000FC540 */       sll $t8, $t7, 0x15
  /* 0473C0 800CB9E0 030DC825 */        or $t9, $t8, $t5
  /* 0473C4 800CB9E4 03287025 */        or $t6, $t9, $t0
  /* 0473C8 800CB9E8 AC8E0000 */        sw $t6, ($a0)
  /* 0473CC 800CB9EC 920F0064 */       lbu $t7, 0x64($s0)
  /* 0473D0 800CB9F0 24420008 */     addiu $v0, $v0, 8
  /* 0473D4 800CB9F4 00402825 */        or $a1, $v0, $zero
  /* 0473D8 800CB9F8 31F80003 */      andi $t8, $t7, 3
  /* 0473DC 800CB9FC 920F0066 */       lbu $t7, 0x66($s0)
  /* 0473E0 800CBA00 0018CC80 */       sll $t9, $t8, 0x12
  /* 0473E4 800CBA04 032C7025 */        or $t6, $t9, $t4
  /* 0473E8 800CBA08 31F8000F */      andi $t8, $t7, 0xf
  /* 0473EC 800CBA0C 0018CB80 */       sll $t9, $t8, 0xe
  /* 0473F0 800CBA10 92180065 */       lbu $t8, 0x65($s0)
  /* 0473F4 800CBA14 01D97825 */        or $t7, $t6, $t9
  /* 0473F8 800CBA18 24420008 */     addiu $v0, $v0, 8
  /* 0473FC 800CBA1C 330E0003 */      andi $t6, $t8, 3
  /* 047400 800CBA20 000ECA00 */       sll $t9, $t6, 8
  /* 047404 800CBA24 920E0067 */       lbu $t6, 0x67($s0)
  /* 047408 800CBA28 01F9C025 */        or $t8, $t7, $t9
  /* 04740C 800CBA2C 00403825 */        or $a3, $v0, $zero
  /* 047410 800CBA30 31CF000F */      andi $t7, $t6, 0xf
  /* 047414 800CBA34 000FC900 */       sll $t9, $t7, 4
  /* 047418 800CBA38 03197025 */        or $t6, $t8, $t9
  /* 04741C 800CBA3C AC8E0004 */        sw $t6, 4($a0)
  /* 047420 800CBA40 3C0FE600 */       lui $t7, 0xe600
  /* 047424 800CBA44 ACAF0000 */        sw $t7, ($a1)
  /* 047428 800CBA48 ACA00004 */        sw $zero, 4($a1)
  /* 04742C 800CBA4C 3C18F300 */       lui $t8, 0xf300
  /* 047430 800CBA50 ACF80000 */        sw $t8, ($a3)
  /* 047434 800CBA54 86390002 */        lh $t9, 2($s1)
  /* 047438 800CBA58 24420008 */     addiu $v0, $v0, 8
  /* 04743C 800CBA5C 240307FF */     addiu $v1, $zero, 0x7ff
  /* 047440 800CBA60 032B0019 */     multu $t9, $t3
  /* 047444 800CBA64 3C19E700 */       lui $t9, 0xe700
  /* 047448 800CBA68 00002012 */      mflo $a0
  /* 04744C 800CBA6C 24840003 */     addiu $a0, $a0, 3
  /* 047450 800CBA70 00042083 */       sra $a0, $a0, 2
  /* 047454 800CBA74 2484FFFF */     addiu $a0, $a0, -1
  /* 047458 800CBA78 288107FF */      slti $at, $a0, 0x7ff
  /* 04745C 800CBA7C 10200003 */      beqz $at, .L800CBA8C
  /* 047460 800CBA80 00000000 */       nop 
  /* 047464 800CBA84 10000001 */         b .L800CBA8C
  /* 047468 800CBA88 00801825 */        or $v1, $a0, $zero
  .L800CBA8C:
  /* 04746C 800CBA8C 306E0FFF */      andi $t6, $v1, 0xfff
  /* 047470 800CBA90 000E7B00 */       sll $t7, $t6, 0xc
  /* 047474 800CBA94 01ECC025 */        or $t8, $t7, $t4
  /* 047478 800CBA98 ACF80004 */        sw $t8, 4($a3)
  /* 04747C 800CBA9C 00402025 */        or $a0, $v0, $zero
  /* 047480 800CBAA0 AC990000 */        sw $t9, ($a0)
  /* 047484 800CBAA4 AC800004 */        sw $zero, 4($a0)
  /* 047488 800CBAA8 912E0030 */       lbu $t6, 0x30($t1)
  /* 04748C 800CBAAC 24420008 */     addiu $v0, $v0, 8
  /* 047490 800CBAB0 00402825 */        or $a1, $v0, $zero
  /* 047494 800CBAB4 31CF0007 */      andi $t7, $t6, 7
  /* 047498 800CBAB8 000FC540 */       sll $t8, $t7, 0x15
  /* 04749C 800CBABC 000A7043 */       sra $t6, $t2, 1
  /* 0474A0 800CBAC0 25CF0007 */     addiu $t7, $t6, 7
  /* 0474A4 800CBAC4 030DC825 */        or $t9, $t8, $t5
  /* 0474A8 800CBAC8 000FC0C3 */       sra $t8, $t7, 3
  /* 0474AC 800CBACC 330E01FF */      andi $t6, $t8, 0x1ff
  /* 0474B0 800CBAD0 000E7A40 */       sll $t7, $t6, 9
  /* 0474B4 800CBAD4 032FC025 */        or $t8, $t9, $t7
  /* 0474B8 800CBAD8 ACB80000 */        sw $t8, ($a1)
  /* 0474BC 800CBADC 920E0064 */       lbu $t6, 0x64($s0)
  /* 0474C0 800CBAE0 92180066 */       lbu $t8, 0x66($s0)
  /* 0474C4 800CBAE4 24420008 */     addiu $v0, $v0, 8
  /* 0474C8 800CBAE8 31D90003 */      andi $t9, $t6, 3
  /* 0474CC 800CBAEC 00197C80 */       sll $t7, $t9, 0x12
  /* 0474D0 800CBAF0 330E000F */      andi $t6, $t8, 0xf
  /* 0474D4 800CBAF4 000ECB80 */       sll $t9, $t6, 0xe
  /* 0474D8 800CBAF8 920E0065 */       lbu $t6, 0x65($s0)
  /* 0474DC 800CBAFC 01F9C025 */        or $t8, $t7, $t9
  /* 0474E0 800CBB00 00403025 */        or $a2, $v0, $zero
  /* 0474E4 800CBB04 31CF0003 */      andi $t7, $t6, 3
  /* 0474E8 800CBB08 000FCA00 */       sll $t9, $t7, 8
  /* 0474EC 800CBB0C 920F0067 */       lbu $t7, 0x67($s0)
  /* 0474F0 800CBB10 03197025 */        or $t6, $t8, $t9
  /* 0474F4 800CBB14 24420008 */     addiu $v0, $v0, 8
  /* 0474F8 800CBB18 31F8000F */      andi $t8, $t7, 0xf
  /* 0474FC 800CBB1C 0018C900 */       sll $t9, $t8, 4
  /* 047500 800CBB20 01D97825 */        or $t7, $t6, $t9
  /* 047504 800CBB24 254EFFFF */     addiu $t6, $t2, -1
  /* 047508 800CBB28 ACAF0004 */        sw $t7, 4($a1)
  /* 04750C 800CBB2C 000EC880 */       sll $t9, $t6, 2
  /* 047510 800CBB30 332F0FFF */      andi $t7, $t9, 0xfff
  /* 047514 800CBB34 3C18F200 */       lui $t8, 0xf200
  /* 047518 800CBB38 ACD80000 */        sw $t8, ($a2)
  /* 04751C 800CBB3C 256EFFFF */     addiu $t6, $t3, -1
  /* 047520 800CBB40 000EC880 */       sll $t9, $t6, 2
  /* 047524 800CBB44 000FC300 */       sll $t8, $t7, 0xc
  /* 047528 800CBB48 332F0FFF */      andi $t7, $t9, 0xfff
  /* 04752C 800CBB4C 030F7025 */        or $t6, $t8, $t7
  /* 047530 800CBB50 ACCE0004 */        sw $t6, 4($a2)
  /* 047534 800CBB54 10000141 */         b .L800CC05C
  /* 047538 800CBB58 8E280008 */        lw $t0, 8($s1)
  .L800CBB5C:
  /* 04753C 800CBB5C 91390030 */       lbu $t9, 0x30($t1)
  /* 047540 800CBB60 3C01FD00 */       lui $at, 0xfd00
  /* 047544 800CBB64 3C080010 */       lui $t0, 0x10
  /* 047548 800CBB68 33380007 */      andi $t8, $t9, 7
  /* 04754C 800CBB6C 00187D40 */       sll $t7, $t8, 0x15
  /* 047550 800CBB70 01E17025 */        or $t6, $t7, $at
  /* 047554 800CBB74 01C8C825 */        or $t9, $t6, $t0
  /* 047558 800CBB78 00401825 */        or $v1, $v0, $zero
  /* 04755C 800CBB7C AC790000 */        sw $t9, ($v1)
  /* 047560 800CBB80 8E380008 */        lw $t8, 8($s1)
  /* 047564 800CBB84 3C0DF500 */       lui $t5, 0xf500
  /* 047568 800CBB88 24420008 */     addiu $v0, $v0, 8
  /* 04756C 800CBB8C AC780004 */        sw $t8, 4($v1)
  /* 047570 800CBB90 912F0030 */       lbu $t7, 0x30($t1)
  /* 047574 800CBB94 00402025 */        or $a0, $v0, $zero
  /* 047578 800CBB98 3C0C0700 */       lui $t4, 0x700
  /* 04757C 800CBB9C 31EE0007 */      andi $t6, $t7, 7
  /* 047580 800CBBA0 000ECD40 */       sll $t9, $t6, 0x15
  /* 047584 800CBBA4 032DC025 */        or $t8, $t9, $t5
  /* 047588 800CBBA8 03087825 */        or $t7, $t8, $t0
  /* 04758C 800CBBAC AC8F0000 */        sw $t7, ($a0)
  /* 047590 800CBBB0 920E0064 */       lbu $t6, 0x64($s0)
  /* 047594 800CBBB4 24420008 */     addiu $v0, $v0, 8
  /* 047598 800CBBB8 00402825 */        or $a1, $v0, $zero
  /* 04759C 800CBBBC 31D90003 */      andi $t9, $t6, 3
  /* 0475A0 800CBBC0 920E0066 */       lbu $t6, 0x66($s0)
  /* 0475A4 800CBBC4 0019C480 */       sll $t8, $t9, 0x12
  /* 0475A8 800CBBC8 030C7825 */        or $t7, $t8, $t4
  /* 0475AC 800CBBCC 31D9000F */      andi $t9, $t6, 0xf
  /* 0475B0 800CBBD0 0019C380 */       sll $t8, $t9, 0xe
  /* 0475B4 800CBBD4 92190065 */       lbu $t9, 0x65($s0)
  /* 0475B8 800CBBD8 01F87025 */        or $t6, $t7, $t8
  /* 0475BC 800CBBDC 24420008 */     addiu $v0, $v0, 8
  /* 0475C0 800CBBE0 332F0003 */      andi $t7, $t9, 3
  /* 0475C4 800CBBE4 000FC200 */       sll $t8, $t7, 8
  /* 0475C8 800CBBE8 920F0067 */       lbu $t7, 0x67($s0)
  /* 0475CC 800CBBEC 01D8C825 */        or $t9, $t6, $t8
  /* 0475D0 800CBBF0 00403825 */        or $a3, $v0, $zero
  /* 0475D4 800CBBF4 31EE000F */      andi $t6, $t7, 0xf
  /* 0475D8 800CBBF8 000EC100 */       sll $t8, $t6, 4
  /* 0475DC 800CBBFC 03387825 */        or $t7, $t9, $t8
  /* 0475E0 800CBC00 AC8F0004 */        sw $t7, 4($a0)
  /* 0475E4 800CBC04 3C0EE600 */       lui $t6, 0xe600
  /* 0475E8 800CBC08 ACAE0000 */        sw $t6, ($a1)
  /* 0475EC 800CBC0C ACA00004 */        sw $zero, 4($a1)
  /* 0475F0 800CBC10 3C19F300 */       lui $t9, 0xf300
  /* 0475F4 800CBC14 ACF90000 */        sw $t9, ($a3)
  /* 0475F8 800CBC18 86380002 */        lh $t8, 2($s1)
  /* 0475FC 800CBC1C 24420008 */     addiu $v0, $v0, 8
  /* 047600 800CBC20 240307FF */     addiu $v1, $zero, 0x7ff
  /* 047604 800CBC24 030B0019 */     multu $t8, $t3
  /* 047608 800CBC28 3C18E700 */       lui $t8, 0xe700
  /* 04760C 800CBC2C 00002012 */      mflo $a0
  /* 047610 800CBC30 24840001 */     addiu $a0, $a0, 1
  /* 047614 800CBC34 00042043 */       sra $a0, $a0, 1
  /* 047618 800CBC38 2484FFFF */     addiu $a0, $a0, -1
  /* 04761C 800CBC3C 288107FF */      slti $at, $a0, 0x7ff
  /* 047620 800CBC40 10200003 */      beqz $at, .L800CBC50
  /* 047624 800CBC44 00000000 */       nop 
  /* 047628 800CBC48 10000001 */         b .L800CBC50
  /* 04762C 800CBC4C 00801825 */        or $v1, $a0, $zero
  .L800CBC50:
  /* 047630 800CBC50 306F0FFF */      andi $t7, $v1, 0xfff
  /* 047634 800CBC54 000F7300 */       sll $t6, $t7, 0xc
  /* 047638 800CBC58 01CCC825 */        or $t9, $t6, $t4
  /* 04763C 800CBC5C ACF90004 */        sw $t9, 4($a3)
  /* 047640 800CBC60 00402025 */        or $a0, $v0, $zero
  /* 047644 800CBC64 AC980000 */        sw $t8, ($a0)
  /* 047648 800CBC68 AC800004 */        sw $zero, 4($a0)
  /* 04764C 800CBC6C 912F0030 */       lbu $t7, 0x30($t1)
  /* 047650 800CBC70 3C010008 */       lui $at, 8
  /* 047654 800CBC74 24420008 */     addiu $v0, $v0, 8
  /* 047658 800CBC78 31EE0007 */      andi $t6, $t7, 7
  /* 04765C 800CBC7C 000ECD40 */       sll $t9, $t6, 0x15
  /* 047660 800CBC80 032DC025 */        or $t8, $t9, $t5
  /* 047664 800CBC84 254E0007 */     addiu $t6, $t2, 7
  /* 047668 800CBC88 000EC8C3 */       sra $t9, $t6, 3
  /* 04766C 800CBC8C 03017825 */        or $t7, $t8, $at
  /* 047670 800CBC90 333801FF */      andi $t8, $t9, 0x1ff
  /* 047674 800CBC94 00187240 */       sll $t6, $t8, 9
  /* 047678 800CBC98 01EEC825 */        or $t9, $t7, $t6
  /* 04767C 800CBC9C 00402825 */        or $a1, $v0, $zero
  /* 047680 800CBCA0 ACB90000 */        sw $t9, ($a1)
  /* 047684 800CBCA4 92180064 */       lbu $t8, 0x64($s0)
  /* 047688 800CBCA8 92190066 */       lbu $t9, 0x66($s0)
  /* 04768C 800CBCAC 24420008 */     addiu $v0, $v0, 8
  /* 047690 800CBCB0 330F0003 */      andi $t7, $t8, 3
  /* 047694 800CBCB4 000F7480 */       sll $t6, $t7, 0x12
  /* 047698 800CBCB8 3338000F */      andi $t8, $t9, 0xf
  /* 04769C 800CBCBC 00187B80 */       sll $t7, $t8, 0xe
  /* 0476A0 800CBCC0 92180065 */       lbu $t8, 0x65($s0)
  /* 0476A4 800CBCC4 01CFC825 */        or $t9, $t6, $t7
  /* 0476A8 800CBCC8 00403025 */        or $a2, $v0, $zero
  /* 0476AC 800CBCCC 330E0003 */      andi $t6, $t8, 3
  /* 0476B0 800CBCD0 000E7A00 */       sll $t7, $t6, 8
  /* 0476B4 800CBCD4 920E0067 */       lbu $t6, 0x67($s0)
  /* 0476B8 800CBCD8 032FC025 */        or $t8, $t9, $t7
  /* 0476BC 800CBCDC 24420008 */     addiu $v0, $v0, 8
  /* 0476C0 800CBCE0 31D9000F */      andi $t9, $t6, 0xf
  /* 0476C4 800CBCE4 00197900 */       sll $t7, $t9, 4
  /* 0476C8 800CBCE8 030F7025 */        or $t6, $t8, $t7
  /* 0476CC 800CBCEC 2558FFFF */     addiu $t8, $t2, -1
  /* 0476D0 800CBCF0 ACAE0004 */        sw $t6, 4($a1)
  /* 0476D4 800CBCF4 00187880 */       sll $t7, $t8, 2
  /* 0476D8 800CBCF8 31EE0FFF */      andi $t6, $t7, 0xfff
  /* 0476DC 800CBCFC 3C19F200 */       lui $t9, 0xf200
  /* 0476E0 800CBD00 ACD90000 */        sw $t9, ($a2)
  /* 0476E4 800CBD04 2578FFFF */     addiu $t8, $t3, -1
  /* 0476E8 800CBD08 00187880 */       sll $t7, $t8, 2
  /* 0476EC 800CBD0C 000ECB00 */       sll $t9, $t6, 0xc
  /* 0476F0 800CBD10 31EE0FFF */      andi $t6, $t7, 0xfff
  /* 0476F4 800CBD14 032EC025 */        or $t8, $t9, $t6
  /* 0476F8 800CBD18 ACD80004 */        sw $t8, 4($a2)
  /* 0476FC 800CBD1C 100000CF */         b .L800CC05C
  /* 047700 800CBD20 8E280008 */        lw $t0, 8($s1)
  .L800CBD24:
  /* 047704 800CBD24 912F0030 */       lbu $t7, 0x30($t1)
  /* 047708 800CBD28 3C01FD00 */       lui $at, 0xfd00
  /* 04770C 800CBD2C 3C080010 */       lui $t0, 0x10
  /* 047710 800CBD30 31F90007 */      andi $t9, $t7, 7
  /* 047714 800CBD34 00197540 */       sll $t6, $t9, 0x15
  /* 047718 800CBD38 01C1C025 */        or $t8, $t6, $at
  /* 04771C 800CBD3C 03087825 */        or $t7, $t8, $t0
  /* 047720 800CBD40 00401825 */        or $v1, $v0, $zero
  /* 047724 800CBD44 AC6F0000 */        sw $t7, ($v1)
  /* 047728 800CBD48 8E390008 */        lw $t9, 8($s1)
  /* 04772C 800CBD4C 3C0DF500 */       lui $t5, 0xf500
  /* 047730 800CBD50 24420008 */     addiu $v0, $v0, 8
  /* 047734 800CBD54 AC790004 */        sw $t9, 4($v1)
  /* 047738 800CBD58 912E0030 */       lbu $t6, 0x30($t1)
  /* 04773C 800CBD5C 00402025 */        or $a0, $v0, $zero
  /* 047740 800CBD60 3C0C0700 */       lui $t4, 0x700
  /* 047744 800CBD64 31D80007 */      andi $t8, $t6, 7
  /* 047748 800CBD68 00187D40 */       sll $t7, $t8, 0x15
  /* 04774C 800CBD6C 01EDC825 */        or $t9, $t7, $t5
  /* 047750 800CBD70 03287025 */        or $t6, $t9, $t0
  /* 047754 800CBD74 AC8E0000 */        sw $t6, ($a0)
  /* 047758 800CBD78 92180064 */       lbu $t8, 0x64($s0)
  /* 04775C 800CBD7C 24420008 */     addiu $v0, $v0, 8
  /* 047760 800CBD80 00402825 */        or $a1, $v0, $zero
  /* 047764 800CBD84 330F0003 */      andi $t7, $t8, 3
  /* 047768 800CBD88 92180066 */       lbu $t8, 0x66($s0)
  /* 04776C 800CBD8C 000FCC80 */       sll $t9, $t7, 0x12
  /* 047770 800CBD90 032C7025 */        or $t6, $t9, $t4
  /* 047774 800CBD94 330F000F */      andi $t7, $t8, 0xf
  /* 047778 800CBD98 000FCB80 */       sll $t9, $t7, 0xe
  /* 04777C 800CBD9C 920F0065 */       lbu $t7, 0x65($s0)
  /* 047780 800CBDA0 01D9C025 */        or $t8, $t6, $t9
  /* 047784 800CBDA4 24420008 */     addiu $v0, $v0, 8
  /* 047788 800CBDA8 31EE0003 */      andi $t6, $t7, 3
  /* 04778C 800CBDAC 000ECA00 */       sll $t9, $t6, 8
  /* 047790 800CBDB0 920E0067 */       lbu $t6, 0x67($s0)
  /* 047794 800CBDB4 03197825 */        or $t7, $t8, $t9
  /* 047798 800CBDB8 00403825 */        or $a3, $v0, $zero
  /* 04779C 800CBDBC 31D8000F */      andi $t8, $t6, 0xf
  /* 0477A0 800CBDC0 0018C900 */       sll $t9, $t8, 4
  /* 0477A4 800CBDC4 01F97025 */        or $t6, $t7, $t9
  /* 0477A8 800CBDC8 AC8E0004 */        sw $t6, 4($a0)
  /* 0477AC 800CBDCC 3C18E600 */       lui $t8, 0xe600
  /* 0477B0 800CBDD0 ACB80000 */        sw $t8, ($a1)
  /* 0477B4 800CBDD4 ACA00004 */        sw $zero, 4($a1)
  /* 0477B8 800CBDD8 3C0FF300 */       lui $t7, 0xf300
  /* 0477BC 800CBDDC ACEF0000 */        sw $t7, ($a3)
  /* 0477C0 800CBDE0 86390002 */        lh $t9, 2($s1)
  /* 0477C4 800CBDE4 24420008 */     addiu $v0, $v0, 8
  /* 0477C8 800CBDE8 240307FF */     addiu $v1, $zero, 0x7ff
  /* 0477CC 800CBDEC 032B0019 */     multu $t9, $t3
  /* 0477D0 800CBDF0 3C19E700 */       lui $t9, 0xe700
  /* 0477D4 800CBDF4 00002012 */      mflo $a0
  /* 0477D8 800CBDF8 2484FFFF */     addiu $a0, $a0, -1
  /* 0477DC 800CBDFC 288107FF */      slti $at, $a0, 0x7ff
  /* 0477E0 800CBE00 10200003 */      beqz $at, .L800CBE10
  /* 0477E4 800CBE04 00000000 */       nop 
  /* 0477E8 800CBE08 10000001 */         b .L800CBE10
  /* 0477EC 800CBE0C 00801825 */        or $v1, $a0, $zero
  .L800CBE10:
  /* 0477F0 800CBE10 306E0FFF */      andi $t6, $v1, 0xfff
  /* 0477F4 800CBE14 000EC300 */       sll $t8, $t6, 0xc
  /* 0477F8 800CBE18 030C7825 */        or $t7, $t8, $t4
  /* 0477FC 800CBE1C ACEF0004 */        sw $t7, 4($a3)
  /* 047800 800CBE20 00402025 */        or $a0, $v0, $zero
  /* 047804 800CBE24 AC990000 */        sw $t9, ($a0)
  /* 047808 800CBE28 AC800004 */        sw $zero, 4($a0)
  /* 04780C 800CBE2C 912E0030 */       lbu $t6, 0x30($t1)
  /* 047810 800CBE30 24420008 */     addiu $v0, $v0, 8
  /* 047814 800CBE34 00402825 */        or $a1, $v0, $zero
  /* 047818 800CBE38 31D80007 */      andi $t8, $t6, 7
  /* 04781C 800CBE3C 00187D40 */       sll $t7, $t8, 0x15
  /* 047820 800CBE40 01EDC825 */        or $t9, $t7, $t5
  /* 047824 800CBE44 000AC040 */       sll $t8, $t2, 1
  /* 047828 800CBE48 270F0007 */     addiu $t7, $t8, 7
  /* 04782C 800CBE4C 03287025 */        or $t6, $t9, $t0
  /* 047830 800CBE50 000FC8C3 */       sra $t9, $t7, 3
  /* 047834 800CBE54 333801FF */      andi $t8, $t9, 0x1ff
  /* 047838 800CBE58 00187A40 */       sll $t7, $t8, 9
  /* 04783C 800CBE5C 01CFC825 */        or $t9, $t6, $t7
  /* 047840 800CBE60 ACB90000 */        sw $t9, ($a1)
  /* 047844 800CBE64 92180064 */       lbu $t8, 0x64($s0)
  /* 047848 800CBE68 92190066 */       lbu $t9, 0x66($s0)
  /* 04784C 800CBE6C 24420008 */     addiu $v0, $v0, 8
  /* 047850 800CBE70 330E0003 */      andi $t6, $t8, 3
  /* 047854 800CBE74 000E7C80 */       sll $t7, $t6, 0x12
  /* 047858 800CBE78 3338000F */      andi $t8, $t9, 0xf
  /* 04785C 800CBE7C 00187380 */       sll $t6, $t8, 0xe
  /* 047860 800CBE80 92180065 */       lbu $t8, 0x65($s0)
  /* 047864 800CBE84 01EEC825 */        or $t9, $t7, $t6
  /* 047868 800CBE88 00403025 */        or $a2, $v0, $zero
  /* 04786C 800CBE8C 330F0003 */      andi $t7, $t8, 3
  /* 047870 800CBE90 000F7200 */       sll $t6, $t7, 8
  /* 047874 800CBE94 920F0067 */       lbu $t7, 0x67($s0)
  /* 047878 800CBE98 032EC025 */        or $t8, $t9, $t6
  /* 04787C 800CBE9C 24420008 */     addiu $v0, $v0, 8
  /* 047880 800CBEA0 31F9000F */      andi $t9, $t7, 0xf
  /* 047884 800CBEA4 00197100 */       sll $t6, $t9, 4
  /* 047888 800CBEA8 030E7825 */        or $t7, $t8, $t6
  /* 04788C 800CBEAC 2558FFFF */     addiu $t8, $t2, -1
  /* 047890 800CBEB0 ACAF0004 */        sw $t7, 4($a1)
  /* 047894 800CBEB4 00187080 */       sll $t6, $t8, 2
  /* 047898 800CBEB8 31CF0FFF */      andi $t7, $t6, 0xfff
  /* 04789C 800CBEBC 3C19F200 */       lui $t9, 0xf200
  /* 0478A0 800CBEC0 ACD90000 */        sw $t9, ($a2)
  /* 0478A4 800CBEC4 2578FFFF */     addiu $t8, $t3, -1
  /* 0478A8 800CBEC8 00187080 */       sll $t6, $t8, 2
  /* 0478AC 800CBECC 000FCB00 */       sll $t9, $t7, 0xc
  /* 0478B0 800CBED0 31CF0FFF */      andi $t7, $t6, 0xfff
  /* 0478B4 800CBED4 032FC025 */        or $t8, $t9, $t7
  /* 0478B8 800CBED8 ACD80004 */        sw $t8, 4($a2)
  /* 0478BC 800CBEDC 1000005F */         b .L800CC05C
  /* 0478C0 800CBEE0 8E280008 */        lw $t0, 8($s1)
  .L800CBEE4:
  /* 0478C4 800CBEE4 00401825 */        or $v1, $v0, $zero
  /* 0478C8 800CBEE8 3C0EFD18 */       lui $t6, 0xfd18
  /* 0478CC 800CBEEC AC6E0000 */        sw $t6, ($v1)
  /* 0478D0 800CBEF0 8E390008 */        lw $t9, 8($s1)
  /* 0478D4 800CBEF4 24420008 */     addiu $v0, $v0, 8
  /* 0478D8 800CBEF8 3C08F518 */       lui $t0, 0xf518
  /* 0478DC 800CBEFC 00402025 */        or $a0, $v0, $zero
  /* 0478E0 800CBF00 AC790004 */        sw $t9, 4($v1)
  /* 0478E4 800CBF04 AC880000 */        sw $t0, ($a0)
  /* 0478E8 800CBF08 920F0064 */       lbu $t7, 0x64($s0)
  /* 0478EC 800CBF0C 24420008 */     addiu $v0, $v0, 8
  /* 0478F0 800CBF10 00402825 */        or $a1, $v0, $zero
  /* 0478F4 800CBF14 31F80003 */      andi $t8, $t7, 3
  /* 0478F8 800CBF18 920F0066 */       lbu $t7, 0x66($s0)
  /* 0478FC 800CBF1C 00187480 */       sll $t6, $t8, 0x12
  /* 047900 800CBF20 01CCC825 */        or $t9, $t6, $t4
  /* 047904 800CBF24 31F8000F */      andi $t8, $t7, 0xf
  /* 047908 800CBF28 00187380 */       sll $t6, $t8, 0xe
  /* 04790C 800CBF2C 92180065 */       lbu $t8, 0x65($s0)
  /* 047910 800CBF30 032E7825 */        or $t7, $t9, $t6
  /* 047914 800CBF34 24420008 */     addiu $v0, $v0, 8
  /* 047918 800CBF38 33190003 */      andi $t9, $t8, 3
  /* 04791C 800CBF3C 00197200 */       sll $t6, $t9, 8
  /* 047920 800CBF40 92190067 */       lbu $t9, 0x67($s0)
  /* 047924 800CBF44 01EEC025 */        or $t8, $t7, $t6
  /* 047928 800CBF48 00403825 */        or $a3, $v0, $zero
  /* 04792C 800CBF4C 332F000F */      andi $t7, $t9, 0xf
  /* 047930 800CBF50 000F7100 */       sll $t6, $t7, 4
  /* 047934 800CBF54 030EC825 */        or $t9, $t8, $t6
  /* 047938 800CBF58 AC990004 */        sw $t9, 4($a0)
  /* 04793C 800CBF5C 3C0FE600 */       lui $t7, 0xe600
  /* 047940 800CBF60 ACAF0000 */        sw $t7, ($a1)
  /* 047944 800CBF64 ACA00004 */        sw $zero, 4($a1)
  /* 047948 800CBF68 3C18F300 */       lui $t8, 0xf300
  /* 04794C 800CBF6C ACF80000 */        sw $t8, ($a3)
  /* 047950 800CBF70 862E0002 */        lh $t6, 2($s1)
  /* 047954 800CBF74 24420008 */     addiu $v0, $v0, 8
  /* 047958 800CBF78 240307FF */     addiu $v1, $zero, 0x7ff
  /* 04795C 800CBF7C 01CB0019 */     multu $t6, $t3
  /* 047960 800CBF80 3C0EE700 */       lui $t6, 0xe700
  /* 047964 800CBF84 00002012 */      mflo $a0
  /* 047968 800CBF88 2484FFFF */     addiu $a0, $a0, -1
  /* 04796C 800CBF8C 288107FF */      slti $at, $a0, 0x7ff
  /* 047970 800CBF90 10200003 */      beqz $at, .L800CBFA0
  /* 047974 800CBF94 00000000 */       nop 
  /* 047978 800CBF98 10000001 */         b .L800CBFA0
  /* 04797C 800CBF9C 00801825 */        or $v1, $a0, $zero
  .L800CBFA0:
  /* 047980 800CBFA0 30790FFF */      andi $t9, $v1, 0xfff
  /* 047984 800CBFA4 00197B00 */       sll $t7, $t9, 0xc
  /* 047988 800CBFA8 01ECC025 */        or $t8, $t7, $t4
  /* 04798C 800CBFAC ACF80004 */        sw $t8, 4($a3)
  /* 047990 800CBFB0 000AC840 */       sll $t9, $t2, 1
  /* 047994 800CBFB4 00402025 */        or $a0, $v0, $zero
  /* 047998 800CBFB8 272F0007 */     addiu $t7, $t9, 7
  /* 04799C 800CBFBC AC8E0000 */        sw $t6, ($a0)
  /* 0479A0 800CBFC0 000FC0C3 */       sra $t8, $t7, 3
  /* 0479A4 800CBFC4 330E01FF */      andi $t6, $t8, 0x1ff
  /* 0479A8 800CBFC8 24420008 */     addiu $v0, $v0, 8
  /* 0479AC 800CBFCC 000ECA40 */       sll $t9, $t6, 9
  /* 0479B0 800CBFD0 AC800004 */        sw $zero, 4($a0)
  /* 0479B4 800CBFD4 03287825 */        or $t7, $t9, $t0
  /* 0479B8 800CBFD8 00402825 */        or $a1, $v0, $zero
  /* 0479BC 800CBFDC ACAF0000 */        sw $t7, ($a1)
  /* 0479C0 800CBFE0 92180064 */       lbu $t8, 0x64($s0)
  /* 0479C4 800CBFE4 920F0066 */       lbu $t7, 0x66($s0)
  /* 0479C8 800CBFE8 24420008 */     addiu $v0, $v0, 8
  /* 0479CC 800CBFEC 330E0003 */      andi $t6, $t8, 3
  /* 0479D0 800CBFF0 000ECC80 */       sll $t9, $t6, 0x12
  /* 0479D4 800CBFF4 31F8000F */      andi $t8, $t7, 0xf
  /* 0479D8 800CBFF8 00187380 */       sll $t6, $t8, 0xe
  /* 0479DC 800CBFFC 92180065 */       lbu $t8, 0x65($s0)
  /* 0479E0 800CC000 032E7825 */        or $t7, $t9, $t6
  /* 0479E4 800CC004 00403025 */        or $a2, $v0, $zero
  /* 0479E8 800CC008 33190003 */      andi $t9, $t8, 3
  /* 0479EC 800CC00C 00197200 */       sll $t6, $t9, 8
  /* 0479F0 800CC010 92190067 */       lbu $t9, 0x67($s0)
  /* 0479F4 800CC014 01EEC025 */        or $t8, $t7, $t6
  /* 0479F8 800CC018 24420008 */     addiu $v0, $v0, 8
  /* 0479FC 800CC01C 332F000F */      andi $t7, $t9, 0xf
  /* 047A00 800CC020 000F7100 */       sll $t6, $t7, 4
  /* 047A04 800CC024 030EC825 */        or $t9, $t8, $t6
  /* 047A08 800CC028 2558FFFF */     addiu $t8, $t2, -1
  /* 047A0C 800CC02C ACB90004 */        sw $t9, 4($a1)
  /* 047A10 800CC030 00187080 */       sll $t6, $t8, 2
  /* 047A14 800CC034 31D90FFF */      andi $t9, $t6, 0xfff
  /* 047A18 800CC038 3C0FF200 */       lui $t7, 0xf200
  /* 047A1C 800CC03C ACCF0000 */        sw $t7, ($a2)
  /* 047A20 800CC040 2578FFFF */     addiu $t8, $t3, -1
  /* 047A24 800CC044 00187080 */       sll $t6, $t8, 2
  /* 047A28 800CC048 00197B00 */       sll $t7, $t9, 0xc
  /* 047A2C 800CC04C 31D90FFF */      andi $t9, $t6, 0xfff
  /* 047A30 800CC050 01F9C025 */        or $t8, $t7, $t9
  /* 047A34 800CC054 ACD80004 */        sw $t8, 4($a2)
  /* 047A38 800CC058 8E280008 */        lw $t0, 8($s1)
  .L800CC05C:
  /* 047A3C 800CC05C 3C01800D */       lui $at, %hi(D_ovl0_800D62B4)
  /* 047A40 800CC060 AC2862B4 */        sw $t0, %lo(D_ovl0_800D62B4)($at)
  /* 047A44 800CC064 8FB80020 */        lw $t8, 0x20($sp)
  .L800CC068:
  /* 047A48 800CC068 33EE0FFF */      andi $t6, $ra, 0xfff
  /* 047A4C 800CC06C 000E7B00 */       sll $t7, $t6, 0xc
  /* 047A50 800CC070 3C01E400 */       lui $at, 0xe400
  /* 047A54 800CC074 01E1C825 */        or $t9, $t7, $at
  /* 047A58 800CC078 330E0FFF */      andi $t6, $t8, 0xfff
  /* 047A5C 800CC07C 032E7825 */        or $t7, $t9, $t6
  /* 047A60 800CC080 AC4F0000 */        sw $t7, ($v0)
  /* 047A64 800CC084 8FB8002C */        lw $t8, 0x2c($sp)
  /* 047A68 800CC088 8FAF0028 */        lw $t7, 0x28($sp)
  /* 047A6C 800CC08C 24440008 */     addiu $a0, $v0, 8
  /* 047A70 800CC090 33190FFF */      andi $t9, $t8, 0xfff
  /* 047A74 800CC094 00197300 */       sll $t6, $t9, 0xc
  /* 047A78 800CC098 31F80FFF */      andi $t8, $t7, 0xfff
  /* 047A7C 800CC09C 01D8C825 */        or $t9, $t6, $t8
  /* 047A80 800CC0A0 AC590004 */        sw $t9, 4($v0)
  /* 047A84 800CC0A4 3C0FE100 */       lui $t7, 0xe100
  /* 047A88 800CC0A8 AC8F0000 */        sw $t7, ($a0)
  /* 047A8C 800CC0AC 8FAF0030 */        lw $t7, 0x30($sp)
  /* 047A90 800CC0B0 8FB80034 */        lw $t8, 0x34($sp)
  /* 047A94 800CC0B4 24850008 */     addiu $a1, $a0, 8
  /* 047A98 800CC0B8 31EEFFFF */      andi $t6, $t7, 0xffff
  /* 047A9C 800CC0BC 0018CC00 */       sll $t9, $t8, 0x10
  /* 047AA0 800CC0C0 032EC025 */        or $t8, $t9, $t6
  /* 047AA4 800CC0C4 AC980004 */        sw $t8, 4($a0)
  /* 047AA8 800CC0C8 3C0FF100 */       lui $t7, 0xf100
  /* 047AAC 800CC0CC ACAF0000 */        sw $t7, ($a1)
  /* 047AB0 800CC0D0 8FAF0064 */        lw $t7, 0x64($sp)
  /* 047AB4 800CC0D4 8FAE0060 */        lw $t6, 0x60($sp)
  /* 047AB8 800CC0D8 24A30008 */     addiu $v1, $a1, 8
  /* 047ABC 800CC0DC 31F9FFFF */      andi $t9, $t7, 0xffff
  /* 047AC0 800CC0E0 000EC400 */       sll $t8, $t6, 0x10
  /* 047AC4 800CC0E4 03197025 */        or $t6, $t8, $t9
  /* 047AC8 800CC0E8 ACAE0004 */        sw $t6, 4($a1)
  /* 047ACC 800CC0EC 3C0FE700 */       lui $t7, 0xe700
  /* 047AD0 800CC0F0 AC6F0000 */        sw $t7, ($v1)
  /* 047AD4 800CC0F4 AC600004 */        sw $zero, 4($v1)
  /* 047AD8 800CC0F8 8FB80038 */        lw $t8, 0x38($sp)
  /* 047ADC 800CC0FC 24620008 */     addiu $v0, $v1, 8
  /* 047AE0 800CC100 AF020000 */        sw $v0, ($t8)
  /* 047AE4 800CC104 8FBF001C */        lw $ra, 0x1c($sp)
  .L800CC108:
  /* 047AE8 800CC108 8FB00014 */        lw $s0, 0x14($sp)
  /* 047AEC 800CC10C 8FB10018 */        lw $s1, 0x18($sp)
  /* 047AF0 800CC110 03E00008 */        jr $ra
  /* 047AF4 800CC114 27BD0038 */     addiu $sp, $sp, 0x38

