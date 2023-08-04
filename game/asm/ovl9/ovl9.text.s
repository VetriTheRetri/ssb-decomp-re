.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80369240 -> 0x80369F60

glabel func_ovl9_80369240
  /* 1AB6B0 80369240 3C038004 */       lui $v1, %hi(D_80045470 + 8)
  /* 1AB6B4 80369244 80635478 */        lb $v1, %lo(D_80045470 + 8)($v1)
  /* 1AB6B8 80369248 3C068037 */       lui $a2, %hi(D_ovl9_80369FCC)
  /* 1AB6BC 8036924C 00001025 */        or $v0, $zero, $zero
  /* 1AB6C0 80369250 28610029 */      slti $at, $v1, 0x29
  /* 1AB6C4 80369254 14200002 */      bnez $at, .L80369260
  /* 1AB6C8 80369258 24C69FCC */     addiu $a2, $a2, %lo(D_ovl9_80369FCC)
  /* 1AB6CC 8036925C 24020100 */     addiu $v0, $zero, 0x100
  .L80369260:
  /* 1AB6D0 80369260 2861FFD8 */      slti $at, $v1, -0x28
  /* 1AB6D4 80369264 10200003 */      beqz $at, .L80369274
  /* 1AB6D8 80369268 3C038004 */       lui $v1, %hi(D_80045470 + 9)
  /* 1AB6DC 8036926C 34420200 */       ori $v0, $v0, 0x200
  /* 1AB6E0 80369270 3042FFFF */      andi $v0, $v0, 0xffff
  .L80369274:
  /* 1AB6E4 80369274 80635479 */        lb $v1, %lo(D_80045470 + 9)($v1)
  /* 1AB6E8 80369278 2419001E */     addiu $t9, $zero, 0x1e
  /* 1AB6EC 8036927C 28610029 */      slti $at, $v1, 0x29
  /* 1AB6F0 80369280 54200004 */      bnel $at, $zero, .L80369294
  /* 1AB6F4 80369284 2861FFD8 */      slti $at, $v1, -0x28
  /* 1AB6F8 80369288 34420800 */       ori $v0, $v0, 0x800
  /* 1AB6FC 8036928C 3042FFFF */      andi $v0, $v0, 0xffff
  /* 1AB700 80369290 2861FFD8 */      slti $at, $v1, -0x28
  .L80369294:
  /* 1AB704 80369294 10200003 */      beqz $at, .L803692A4
  /* 1AB708 80369298 3C038037 */       lui $v1, %hi(D_ovl9_80369FD8)
  /* 1AB70C 8036929C 34420400 */       ori $v0, $v0, 0x400
  /* 1AB710 803692A0 3042FFFF */      andi $v0, $v0, 0xffff
  .L803692A4:
  /* 1AB714 803692A4 94CE0000 */       lhu $t6, ($a2) # D_ovl9_80369FCC + 0
  /* 1AB718 803692A8 3C058037 */       lui $a1, %hi(D_ovl9_80369FD0)
  /* 1AB71C 803692AC 24A59FD0 */     addiu $a1, $a1, %lo(D_ovl9_80369FD0)
  /* 1AB720 803692B0 004E2026 */       xor $a0, $v0, $t6
  /* 1AB724 803692B4 00827824 */       and $t7, $a0, $v0
  /* 1AB728 803692B8 10800006 */      beqz $a0, .L803692D4
  /* 1AB72C 803692BC A4AF0000 */        sh $t7, ($a1) # D_ovl9_80369FD0 + 0
  /* 1AB730 803692C0 3C018037 */       lui $at, %hi(D_ovl9_80369FD4)
  /* 1AB734 803692C4 24639FD8 */     addiu $v1, $v1, %lo(D_ovl9_80369FD8)
  /* 1AB738 803692C8 A42F9FD4 */        sh $t7, %lo(D_ovl9_80369FD4)($at)
  /* 1AB73C 803692CC 1000000E */         b .L80369308
  /* 1AB740 803692D0 AC790000 */        sw $t9, ($v1) # D_ovl9_80369FD8 + 0
  .L803692D4:
  /* 1AB744 803692D4 3C038037 */       lui $v1, %hi(D_ovl9_80369FD8)
  /* 1AB748 803692D8 24639FD8 */     addiu $v1, $v1, %lo(D_ovl9_80369FD8)
  /* 1AB74C 803692DC 8C680000 */        lw $t0, ($v1) # D_ovl9_80369FD8 + 0
  /* 1AB750 803692E0 2509FFFF */     addiu $t1, $t0, -1
  /* 1AB754 803692E4 19200004 */      blez $t1, .L803692F8
  /* 1AB758 803692E8 AC690000 */        sw $t1, ($v1) # D_ovl9_80369FD8 + 0
  /* 1AB75C 803692EC 3C018037 */       lui $at, %hi(D_ovl9_80369FD4)
  /* 1AB760 803692F0 10000005 */         b .L80369308
  /* 1AB764 803692F4 A4209FD4 */        sh $zero, %lo(D_ovl9_80369FD4)($at)
  .L803692F8:
  /* 1AB768 803692F8 3C018037 */       lui $at, %hi(D_ovl9_80369FD4)
  /* 1AB76C 803692FC A4229FD4 */        sh $v0, %lo(D_ovl9_80369FD4)($at)
  /* 1AB770 80369300 240B0005 */     addiu $t3, $zero, 5
  /* 1AB774 80369304 AC6B0000 */        sw $t3, ($v1) # D_ovl9_80369FD8 + 0
  .L80369308:
  /* 1AB778 80369308 03E00008 */        jr $ra
  /* 1AB77C 8036930C A4C20000 */        sh $v0, ($a2) # D_ovl9_80369FCC + 0

glabel func_ovl9_80369310
  /* 1AB780 80369310 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 1AB784 80369314 AFA40020 */        sw $a0, 0x20($sp)
  /* 1AB788 80369318 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1AB78C 8036931C AFA50024 */        sw $a1, 0x24($sp)
  /* 1AB790 80369320 3C048037 */       lui $a0, %hi(D_ovl9_80371428)
  /* 1AB794 80369324 AFA60028 */        sw $a2, 0x28($sp)
  /* 1AB798 80369328 AFA7002C */        sw $a3, 0x2c($sp)
  /* 1AB79C 8036932C 24841428 */     addiu $a0, $a0, %lo(D_ovl9_80371428)
  /* 1AB7A0 80369330 0C0E1AF8 */       jal func_ovl8_80386BE0
  /* 1AB7A4 80369334 27A50024 */     addiu $a1, $sp, 0x24
  /* 1AB7A8 80369338 3C058037 */       lui $a1, %hi(D_ovl9_80371428)
  /* 1AB7AC 8036933C 24A51428 */     addiu $a1, $a1, %lo(D_ovl9_80371428)
  /* 1AB7B0 80369340 0C0DF758 */       jal func_ovl8_8037DD60
  /* 1AB7B4 80369344 8FA40020 */        lw $a0, 0x20($sp)
  /* 1AB7B8 80369348 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1AB7BC 8036934C 27BD0020 */     addiu $sp, $sp, 0x20
  /* 1AB7C0 80369350 03E00008 */        jr $ra
  /* 1AB7C4 80369354 00000000 */       nop 

glabel func_ovl9_80369358
  /* 1AB7C8 80369358 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 1AB7CC 8036935C AFBF001C */        sw $ra, 0x1c($sp)
  /* 1AB7D0 80369360 AFB10018 */        sw $s1, 0x18($sp)
  /* 1AB7D4 80369364 AFB00014 */        sw $s0, 0x14($sp)
  /* 1AB7D8 80369368 AFA40030 */        sw $a0, 0x30($sp)
  /* 1AB7DC 8036936C 0C0DD26F */       jal func_ovl8_803749BC
  /* 1AB7E0 80369370 AFA50034 */        sw $a1, 0x34($sp)
  /* 1AB7E4 80369374 3C118037 */       lui $s1, %hi(D_ovl9_80369F7C)
  /* 1AB7E8 80369378 26319F7C */     addiu $s1, $s1, %lo(D_ovl9_80369F7C)
  /* 1AB7EC 8036937C 00408025 */        or $s0, $v0, $zero
  /* 1AB7F0 80369380 02202825 */        or $a1, $s1, $zero
  /* 1AB7F4 80369384 0C0DD295 */       jal func_ovl8_80374A54
  /* 1AB7F8 80369388 8FA40030 */        lw $a0, 0x30($sp)
  /* 1AB7FC 8036938C 962F0006 */       lhu $t7, 6($s1) # D_ovl9_80369F7C + 6
  /* 1AB800 80369390 240E0001 */     addiu $t6, $zero, 1
  /* 1AB804 80369394 A7A00024 */        sh $zero, 0x24($sp)
  /* 1AB808 80369398 A7A00026 */        sh $zero, 0x26($sp)
  /* 1AB80C 8036939C A7AE0028 */        sh $t6, 0x28($sp)
  /* 1AB810 803693A0 02002025 */        or $a0, $s0, $zero
  /* 1AB814 803693A4 27A50024 */     addiu $a1, $sp, 0x24
  /* 1AB818 803693A8 8FA60034 */        lw $a2, 0x34($sp)
  /* 1AB81C 803693AC 24070004 */     addiu $a3, $zero, 4
  /* 1AB820 803693B0 0C0DDEBB */       jal func_ovl8_80377AEC
  /* 1AB824 803693B4 A7AF002A */        sh $t7, 0x2a($sp)
  /* 1AB828 803693B8 96380004 */       lhu $t8, 4($s1) # D_ovl9_80369F7C + 4
  /* 1AB82C 803693BC 24190001 */     addiu $t9, $zero, 1
  /* 1AB830 803693C0 A7B9002A */        sh $t9, 0x2a($sp)
  /* 1AB834 803693C4 02002025 */        or $a0, $s0, $zero
  /* 1AB838 803693C8 27A50024 */     addiu $a1, $sp, 0x24
  /* 1AB83C 803693CC 8FA60034 */        lw $a2, 0x34($sp)
  /* 1AB840 803693D0 24070004 */     addiu $a3, $zero, 4
  /* 1AB844 803693D4 0C0DDEBB */       jal func_ovl8_80377AEC
  /* 1AB848 803693D8 A7B80028 */        sh $t8, 0x28($sp)
  /* 1AB84C 803693DC 96280006 */       lhu $t0, 6($s1) # D_ovl9_80369F7C + 6
  /* 1AB850 803693E0 240A0001 */     addiu $t2, $zero, 1
  /* 1AB854 803693E4 A7AA002A */        sh $t2, 0x2a($sp)
  /* 1AB858 803693E8 2509FFFF */     addiu $t1, $t0, -1
  /* 1AB85C 803693EC A7A90026 */        sh $t1, 0x26($sp)
  /* 1AB860 803693F0 02002025 */        or $a0, $s0, $zero
  /* 1AB864 803693F4 27A50024 */     addiu $a1, $sp, 0x24
  /* 1AB868 803693F8 8FA60034 */        lw $a2, 0x34($sp)
  /* 1AB86C 803693FC 0C0DDEBB */       jal func_ovl8_80377AEC
  /* 1AB870 80369400 24070004 */     addiu $a3, $zero, 4
  /* 1AB874 80369404 962B0004 */       lhu $t3, 4($s1) # D_ovl9_80369F7C + 4
  /* 1AB878 80369408 962E0006 */       lhu $t6, 6($s1) # D_ovl9_80369F7C + 6
  /* 1AB87C 8036940C 240D0001 */     addiu $t5, $zero, 1
  /* 1AB880 80369410 256CFFFF */     addiu $t4, $t3, -1
  /* 1AB884 80369414 A7AC0024 */        sh $t4, 0x24($sp)
  /* 1AB888 80369418 A7A00026 */        sh $zero, 0x26($sp)
  /* 1AB88C 8036941C A7AD0028 */        sh $t5, 0x28($sp)
  /* 1AB890 80369420 02002025 */        or $a0, $s0, $zero
  /* 1AB894 80369424 27A50024 */     addiu $a1, $sp, 0x24
  /* 1AB898 80369428 8FA60034 */        lw $a2, 0x34($sp)
  /* 1AB89C 8036942C 24070004 */     addiu $a3, $zero, 4
  /* 1AB8A0 80369430 0C0DDEBB */       jal func_ovl8_80377AEC
  /* 1AB8A4 80369434 A7AE002A */        sh $t6, 0x2a($sp)
  /* 1AB8A8 80369438 8FBF001C */        lw $ra, 0x1c($sp)
  /* 1AB8AC 8036943C 8FB00014 */        lw $s0, 0x14($sp)
  /* 1AB8B0 80369440 8FB10018 */        lw $s1, 0x18($sp)
  /* 1AB8B4 80369444 03E00008 */        jr $ra
  /* 1AB8B8 80369448 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl9_8036944C
  /* 1AB8BC 8036944C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 1AB8C0 80369450 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1AB8C4 80369454 AFA40028 */        sw $a0, 0x28($sp)
  /* 1AB8C8 80369458 0C0DD26F */       jal func_ovl8_803749BC
  /* 1AB8CC 8036945C AFA5002C */        sw $a1, 0x2c($sp)
  /* 1AB8D0 80369460 3C058037 */       lui $a1, %hi(D_ovl9_80369F7C)
  /* 1AB8D4 80369464 AFA20024 */        sw $v0, 0x24($sp)
  /* 1AB8D8 80369468 24A59F7C */     addiu $a1, $a1, %lo(D_ovl9_80369F7C)
  /* 1AB8DC 8036946C 0C0DD295 */       jal func_ovl8_80374A54
  /* 1AB8E0 80369470 8FA40028 */        lw $a0, 0x28($sp)
  /* 1AB8E4 80369474 3C028037 */       lui $v0, %hi(D_ovl9_80369F7C)
  /* 1AB8E8 80369478 24429F7C */     addiu $v0, $v0, %lo(D_ovl9_80369F7C)
  /* 1AB8EC 8036947C 94580004 */       lhu $t8, 4($v0) # D_ovl9_80369F7C + 4
  /* 1AB8F0 80369480 94480006 */       lhu $t0, 6($v0) # D_ovl9_80369F7C + 6
  /* 1AB8F4 80369484 240E0001 */     addiu $t6, $zero, 1
  /* 1AB8F8 80369488 240F0001 */     addiu $t7, $zero, 1
  /* 1AB8FC 8036948C 2719FFFE */     addiu $t9, $t8, -2
  /* 1AB900 80369490 2509FFFE */     addiu $t1, $t0, -2
  /* 1AB904 80369494 A7AE001C */        sh $t6, 0x1c($sp)
  /* 1AB908 80369498 A7AF001E */        sh $t7, 0x1e($sp)
  /* 1AB90C 8036949C A7B90020 */        sh $t9, 0x20($sp)
  /* 1AB910 803694A0 A7A90022 */        sh $t1, 0x22($sp)
  /* 1AB914 803694A4 8FA40024 */        lw $a0, 0x24($sp)
  /* 1AB918 803694A8 27A5001C */     addiu $a1, $sp, 0x1c
  /* 1AB91C 803694AC 8FA6002C */        lw $a2, 0x2c($sp)
  /* 1AB920 803694B0 0C0DDEBB */       jal func_ovl8_80377AEC
  /* 1AB924 803694B4 24070004 */     addiu $a3, $zero, 4
  /* 1AB928 803694B8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1AB92C 803694BC 27BD0028 */     addiu $sp, $sp, 0x28
  /* 1AB930 803694C0 03E00008 */        jr $ra
  /* 1AB934 803694C4 00000000 */       nop 

glabel func_ovl9_803694C8
  /* 1AB938 803694C8 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 1AB93C 803694CC AFBF001C */        sw $ra, 0x1c($sp)
  /* 1AB940 803694D0 AFB00018 */        sw $s0, 0x18($sp)
  /* 1AB944 803694D4 8CAE0000 */        lw $t6, ($a1)
  /* 1AB948 803694D8 00A08025 */        or $s0, $a1, $zero
  /* 1AB94C 803694DC 2DC10007 */     sltiu $at, $t6, 7
  /* 1AB950 803694E0 10200042 */      beqz $at, .L803695EC
  /* 1AB954 803694E4 000E7080 */       sll $t6, $t6, 2
  /* 1AB958 803694E8 3C018037 */       lui $at, %hi(jtbl_ovl9_8036A3B4)
  /* 1AB95C 803694EC 002E0821 */      addu $at, $at, $t6
  /* 1AB960 803694F0 8C2EA3B4 */        lw $t6, %lo(jtbl_ovl9_8036A3B4)($at)
  /* 1AB964 803694F4 01C00008 */        jr $t6
  /* 1AB968 803694F8 00000000 */       nop 
  glabel jtgt_ovl9_803694FC
  /* 1AB96C 803694FC 0C0DD26F */       jal func_ovl8_803749BC
  /* 1AB970 80369500 00000000 */       nop 
  /* 1AB974 80369504 00402025 */        or $a0, $v0, $zero
  /* 1AB978 80369508 0C0DA4C4 */       jal func_ovl9_80369310
  /* 1AB97C 8036950C 8E050008 */        lw $a1, 8($s0)
  /* 1AB980 80369510 10000037 */         b .L803695F0
  /* 1AB984 80369514 8FBF001C */        lw $ra, 0x1c($sp)
  glabel jtgt_ovl9_80369518
  /* 1AB988 80369518 0C0DD26F */       jal func_ovl8_803749BC
  /* 1AB98C 8036951C 00000000 */       nop 
  /* 1AB990 80369520 8E0F000C */        lw $t7, 0xc($s0)
  /* 1AB994 80369524 00402025 */        or $a0, $v0, $zero
  /* 1AB998 80369528 8E050008 */        lw $a1, 8($s0)
  /* 1AB99C 8036952C 0C0DA4C4 */       jal func_ovl9_80369310
  /* 1AB9A0 80369530 8DE60000 */        lw $a2, ($t7)
  /* 1AB9A4 80369534 1000002E */         b .L803695F0
  /* 1AB9A8 80369538 8FBF001C */        lw $ra, 0x1c($sp)
  glabel jtgt_ovl9_8036953C
  /* 1AB9AC 8036953C 0C0DD26F */       jal func_ovl8_803749BC
  /* 1AB9B0 80369540 00000000 */       nop 
  /* 1AB9B4 80369544 8E18000C */        lw $t8, 0xc($s0)
  /* 1AB9B8 80369548 00402025 */        or $a0, $v0, $zero
  /* 1AB9BC 8036954C 8E050008 */        lw $a1, 8($s0)
  /* 1AB9C0 80369550 0C0DA4C4 */       jal func_ovl9_80369310
  /* 1AB9C4 80369554 93060000 */       lbu $a2, ($t8)
  /* 1AB9C8 80369558 10000025 */         b .L803695F0
  /* 1AB9CC 8036955C 8FBF001C */        lw $ra, 0x1c($sp)
  glabel jtgt_ovl9_80369560
  /* 1AB9D0 80369560 0C0DD26F */       jal func_ovl8_803749BC
  /* 1AB9D4 80369564 00000000 */       nop 
  /* 1AB9D8 80369568 8E19000C */        lw $t9, 0xc($s0)
  /* 1AB9DC 8036956C 00402025 */        or $a0, $v0, $zero
  /* 1AB9E0 80369570 8E050008 */        lw $a1, 8($s0)
  /* 1AB9E4 80369574 C7240000 */      lwc1 $f4, ($t9)
  /* 1AB9E8 80369578 460021A1 */   cvt.d.s $f6, $f4
  /* 1AB9EC 8036957C 44073000 */      mfc1 $a3, $f6
  /* 1AB9F0 80369580 44063800 */      mfc1 $a2, $f7
  /* 1AB9F4 80369584 0C0DA4C4 */       jal func_ovl9_80369310
  /* 1AB9F8 80369588 00000000 */       nop 
  /* 1AB9FC 8036958C 10000018 */         b .L803695F0
  /* 1ABA00 80369590 8FBF001C */        lw $ra, 0x1c($sp)
  glabel jtgt_ovl9_80369594
  /* 1ABA04 80369594 0C0DD26F */       jal func_ovl8_803749BC
  /* 1ABA08 80369598 00000000 */       nop 
  /* 1ABA0C 8036959C 8E09000C */        lw $t1, 0xc($s0)
  /* 1ABA10 803695A0 8E080008 */        lw $t0, 8($s0)
  /* 1ABA14 803695A4 00402025 */        or $a0, $v0, $zero
  /* 1ABA18 803695A8 8D2A0000 */        lw $t2, ($t1)
  /* 1ABA1C 803695AC 000A5880 */       sll $t3, $t2, 2
  /* 1ABA20 803695B0 010B6021 */      addu $t4, $t0, $t3
  /* 1ABA24 803695B4 0C0DA4C4 */       jal func_ovl9_80369310
  /* 1ABA28 803695B8 8D850000 */        lw $a1, ($t4)
  /* 1ABA2C 803695BC 1000000C */         b .L803695F0
  /* 1ABA30 803695C0 8FBF001C */        lw $ra, 0x1c($sp)
  glabel jtgt_ovl9_803695C4
  /* 1ABA34 803695C4 0C0DD26F */       jal func_ovl8_803749BC
  /* 1ABA38 803695C8 00000000 */       nop 
  /* 1ABA3C 803695CC 8E0E000C */        lw $t6, 0xc($s0)
  /* 1ABA40 803695D0 8E0D0008 */        lw $t5, 8($s0)
  /* 1ABA44 803695D4 00402025 */        or $a0, $v0, $zero
  /* 1ABA48 803695D8 91CF0000 */       lbu $t7, ($t6)
  /* 1ABA4C 803695DC 000FC080 */       sll $t8, $t7, 2
  /* 1ABA50 803695E0 01B8C821 */      addu $t9, $t5, $t8
  /* 1ABA54 803695E4 0C0DA4C4 */       jal func_ovl9_80369310
  /* 1ABA58 803695E8 8F250000 */        lw $a1, ($t9)
  .L803695EC:
  /* 1ABA5C 803695EC 8FBF001C */        lw $ra, 0x1c($sp)
  .L803695F0:
  /* 1ABA60 803695F0 8FB00018 */        lw $s0, 0x18($sp)
  /* 1ABA64 803695F4 27BD0020 */     addiu $sp, $sp, 0x20
  /* 1ABA68 803695F8 03E00008 */        jr $ra
  /* 1ABA6C 803695FC 00000000 */       nop 

glabel func_ovl9_80369600
  /* 1ABA70 80369600 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 1ABA74 80369604 AFB40028 */        sw $s4, 0x28($sp)
  /* 1ABA78 80369608 AFB1001C */        sw $s1, 0x1c($sp)
  /* 1ABA7C 8036960C 00A08825 */        or $s1, $a1, $zero
  /* 1ABA80 80369610 0080A025 */        or $s4, $a0, $zero
  /* 1ABA84 80369614 AFBF002C */        sw $ra, 0x2c($sp)
  /* 1ABA88 80369618 AFB30024 */        sw $s3, 0x24($sp)
  /* 1ABA8C 8036961C AFB20020 */        sw $s2, 0x20($sp)
  /* 1ABA90 80369620 18C0000F */      blez $a2, .L80369660
  /* 1ABA94 80369624 AFB00018 */        sw $s0, 0x18($sp)
  /* 1ABA98 80369628 000698C0 */       sll $s3, $a2, 3
  /* 1ABA9C 8036962C 02669821 */      addu $s3, $s3, $a2
  /* 1ABAA0 80369630 26730002 */     addiu $s3, $s3, 2
  /* 1ABAA4 80369634 24100002 */     addiu $s0, $zero, 2
  .L80369638:
  /* 1ABAA8 80369638 00102C00 */       sll $a1, $s0, 0x10
  /* 1ABAAC 8036963C 00052C03 */       sra $a1, $a1, 0x10
  /* 1ABAB0 80369640 0C0DF7F3 */       jal func_ovl8_8037DFCC
  /* 1ABAB4 80369644 2404000C */     addiu $a0, $zero, 0xc
  /* 1ABAB8 80369648 02802025 */        or $a0, $s4, $zero
  /* 1ABABC 8036964C 0C0DA532 */       jal func_ovl9_803694C8
  /* 1ABAC0 80369650 02202825 */        or $a1, $s1, $zero
  /* 1ABAC4 80369654 26100009 */     addiu $s0, $s0, 9
  /* 1ABAC8 80369658 1613FFF7 */       bne $s0, $s3, .L80369638
  /* 1ABACC 8036965C 2631001C */     addiu $s1, $s1, 0x1c
  .L80369660:
  /* 1ABAD0 80369660 8FBF002C */        lw $ra, 0x2c($sp)
  /* 1ABAD4 80369664 8FB00018 */        lw $s0, 0x18($sp)
  /* 1ABAD8 80369668 8FB1001C */        lw $s1, 0x1c($sp)
  /* 1ABADC 8036966C 8FB20020 */        lw $s2, 0x20($sp)
  /* 1ABAE0 80369670 8FB30024 */        lw $s3, 0x24($sp)
  /* 1ABAE4 80369674 8FB40028 */        lw $s4, 0x28($sp)
  /* 1ABAE8 80369678 03E00008 */        jr $ra
  /* 1ABAEC 8036967C 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl9_80369680
  /* 1ABAF0 80369680 00A03025 */        or $a2, $a1, $zero
  /* 1ABAF4 80369684 000528C0 */       sll $a1, $a1, 3
  /* 1ABAF8 80369688 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1ABAFC 8036968C 00A62821 */      addu $a1, $a1, $a2
  /* 1ABB00 80369690 24A50002 */     addiu $a1, $a1, 2
  /* 1ABB04 80369694 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1ABB08 80369698 AFA40018 */        sw $a0, 0x18($sp)
  /* 1ABB0C 8036969C 00052C00 */       sll $a1, $a1, 0x10
  /* 1ABB10 803696A0 00052C03 */       sra $a1, $a1, 0x10
  /* 1ABB14 803696A4 0C0DF7F3 */       jal func_ovl8_8037DFCC
  /* 1ABB18 803696A8 24040003 */     addiu $a0, $zero, 3
  /* 1ABB1C 803696AC 0C0DD26F */       jal func_ovl8_803749BC
  /* 1ABB20 803696B0 8FA40018 */        lw $a0, 0x18($sp)
  /* 1ABB24 803696B4 3C058037 */       lui $a1, %hi(D_ovl9_8036A3B0)
  /* 1ABB28 803696B8 24A5A3B0 */     addiu $a1, $a1, %lo(D_ovl9_8036A3B0)
  /* 1ABB2C 803696BC 0C0DA4C4 */       jal func_ovl9_80369310
  /* 1ABB30 803696C0 00402025 */        or $a0, $v0, $zero
  /* 1ABB34 803696C4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1ABB38 803696C8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1ABB3C 803696CC 03E00008 */        jr $ra
  /* 1ABB40 803696D0 00000000 */       nop 

glabel func_ovl9_803696D4
  /* 1ABB44 803696D4 3C028037 */       lui $v0, %hi(D_ovl9_8037141C)
  /* 1ABB48 803696D8 2442141C */     addiu $v0, $v0, %lo(D_ovl9_8037141C)
  /* 1ABB4C 803696DC 8C4E0000 */        lw $t6, ($v0) # D_ovl9_8037141C + 0
  /* 1ABB50 803696E0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1ABB54 803696E4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1ABB58 803696E8 11C00013 */      beqz $t6, .L80369738
  /* 1ABB5C 803696EC AFA40018 */        sw $a0, 0x18($sp)
  /* 1ABB60 803696F0 AC400000 */        sw $zero, ($v0) # D_ovl9_8037141C + 0
  /* 1ABB64 803696F4 3C048037 */       lui $a0, %hi(D_ovl9_80371404)
  /* 1ABB68 803696F8 3C058037 */       lui $a1, %hi(D_ovl9_80369F64)
  /* 1ABB6C 803696FC 24A59F64 */     addiu $a1, $a1, %lo(D_ovl9_80369F64)
  /* 1ABB70 80369700 0C0DA513 */       jal func_ovl9_8036944C
  /* 1ABB74 80369704 8C841404 */        lw $a0, %lo(D_ovl9_80371404)($a0)
  /* 1ABB78 80369708 3C048037 */       lui $a0, %hi(D_ovl9_80371404)
  /* 1ABB7C 8036970C 3C058037 */       lui $a1, %hi(D_ovl9_8037140C)
  /* 1ABB80 80369710 3C068037 */       lui $a2, %hi(D_ovl9_80371410)
  /* 1ABB84 80369714 8CC61410 */        lw $a2, %lo(D_ovl9_80371410)($a2)
  /* 1ABB88 80369718 8CA5140C */        lw $a1, %lo(D_ovl9_8037140C)($a1)
  /* 1ABB8C 8036971C 0C0DA580 */       jal func_ovl9_80369600
  /* 1ABB90 80369720 8C841404 */        lw $a0, %lo(D_ovl9_80371404)($a0)
  /* 1ABB94 80369724 3C048037 */       lui $a0, %hi(D_ovl9_80371404)
  /* 1ABB98 80369728 3C058037 */       lui $a1, %hi(D_ovl9_80371414)
  /* 1ABB9C 8036972C 8CA51414 */        lw $a1, %lo(D_ovl9_80371414)($a1)
  /* 1ABBA0 80369730 0C0DA5A0 */       jal func_ovl9_80369680
  /* 1ABBA4 80369734 8C841404 */        lw $a0, %lo(D_ovl9_80371404)($a0)
  .L80369738:
  /* 1ABBA8 80369738 3C198037 */       lui $t9, %hi(D_ovl9_80371418)
  /* 1ABBAC 8036973C 8F391418 */        lw $t9, %lo(D_ovl9_80371418)($t9)
  /* 1ABBB0 80369740 8FA40018 */        lw $a0, 0x18($sp)
  /* 1ABBB4 80369744 0320F809 */      jalr $t9
  /* 1ABBB8 80369748 00000000 */       nop 
  /* 1ABBBC 8036974C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1ABBC0 80369750 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1ABBC4 80369754 03E00008 */        jr $ra
  /* 1ABBC8 80369758 00000000 */       nop 

glabel func_ovl9_8036975C
  /* 1ABBCC 8036975C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1ABBD0 80369760 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1ABBD4 80369764 0C0DA490 */       jal func_ovl9_80369240
  /* 1ABBD8 80369768 AFA40018 */        sw $a0, 0x18($sp)
  /* 1ABBDC 8036976C 3C048004 */       lui $a0, %hi(D_80045470 + 4)
  /* 1ABBE0 80369770 94845474 */       lhu $a0, %lo(D_80045470 + 4)($a0)
  /* 1ABBE4 80369774 3C088037 */       lui $t0, %hi(D_ovl9_80369FD4)
  /* 1ABBE8 80369778 25089FD4 */     addiu $t0, $t0, %lo(D_ovl9_80369FD4)
  /* 1ABBEC 8036977C 308E0800 */      andi $t6, $a0, 0x800
  /* 1ABBF0 80369780 15C00004 */      bnez $t6, .L80369794
  /* 1ABBF4 80369784 308D0400 */      andi $t5, $a0, 0x400
  /* 1ABBF8 80369788 950F0000 */       lhu $t7, ($t0) # D_ovl9_80369FD4 + 0
  /* 1ABBFC 8036978C 31F80800 */      andi $t8, $t7, 0x800
  /* 1ABC00 80369790 13000011 */      beqz $t8, .L803697D8
  .L80369794:
  /* 1ABC04 80369794 3C058037 */       lui $a1, %hi(D_ovl9_80371414)
  /* 1ABC08 80369798 24A51414 */     addiu $a1, $a1, %lo(D_ovl9_80371414)
  /* 1ABC0C 8036979C 8CA20000 */        lw $v0, ($a1) # D_ovl9_80371414 + 0
  /* 1ABC10 803697A0 3C088037 */       lui $t0, %hi(D_ovl9_80369FD4)
  /* 1ABC14 803697A4 25089FD4 */     addiu $t0, $t0, %lo(D_ovl9_80369FD4)
  /* 1ABC18 803697A8 18400004 */      blez $v0, .L803697BC
  /* 1ABC1C 803697AC 3C068037 */       lui $a2, %hi(D_ovl9_8037141C)
  /* 1ABC20 803697B0 2459FFFF */     addiu $t9, $v0, -1
  /* 1ABC24 803697B4 10000005 */         b .L803697CC
  /* 1ABC28 803697B8 ACB90000 */        sw $t9, ($a1) # D_ovl9_80371414 + 0
  .L803697BC:
  /* 1ABC2C 803697BC 3C0B8037 */       lui $t3, %hi(D_ovl9_80371410)
  /* 1ABC30 803697C0 8D6B1410 */        lw $t3, %lo(D_ovl9_80371410)($t3)
  /* 1ABC34 803697C4 256CFFFF */     addiu $t4, $t3, -1
  /* 1ABC38 803697C8 ACAC0000 */        sw $t4, ($a1) # D_ovl9_80371414 + 0
  .L803697CC:
  /* 1ABC3C 803697CC 24C6141C */     addiu $a2, $a2, %lo(D_ovl9_8037141C)
  /* 1ABC40 803697D0 24070001 */     addiu $a3, $zero, 1
  /* 1ABC44 803697D4 ACC70000 */        sw $a3, ($a2) # D_ovl9_8037141C + 0
  .L803697D8:
  /* 1ABC48 803697D8 3C058037 */       lui $a1, %hi(D_ovl9_80371414)
  /* 1ABC4C 803697DC 3C068037 */       lui $a2, %hi(D_ovl9_8037141C)
  /* 1ABC50 803697E0 24C6141C */     addiu $a2, $a2, %lo(D_ovl9_8037141C)
  /* 1ABC54 803697E4 24A51414 */     addiu $a1, $a1, %lo(D_ovl9_80371414)
  /* 1ABC58 803697E8 15A00004 */      bnez $t5, .L803697FC
  /* 1ABC5C 803697EC 24070001 */     addiu $a3, $zero, 1
  /* 1ABC60 803697F0 950E0000 */       lhu $t6, ($t0) # D_ovl9_80369FD4 + 0
  /* 1ABC64 803697F4 31CF0400 */      andi $t7, $t6, 0x400
  /* 1ABC68 803697F8 11E0000C */      beqz $t7, .L8036982C
  .L803697FC:
  /* 1ABC6C 803697FC 3C188037 */       lui $t8, %hi(D_ovl9_80371410)
  /* 1ABC70 80369800 8F181410 */        lw $t8, %lo(D_ovl9_80371410)($t8)
  /* 1ABC74 80369804 8CA20000 */        lw $v0, ($a1) # D_ovl9_80371414 + 0
  /* 1ABC78 80369808 240B0001 */     addiu $t3, $zero, 1
  /* 1ABC7C 8036980C 2719FFFF */     addiu $t9, $t8, -1
  /* 1ABC80 80369810 0059182A */       slt $v1, $v0, $t9
  /* 1ABC84 80369814 10600004 */      beqz $v1, .L80369828
  /* 1ABC88 80369818 ACCB0000 */        sw $t3, ($a2) # D_ovl9_8037141C + 0
  /* 1ABC8C 8036981C 244C0001 */     addiu $t4, $v0, 1
  /* 1ABC90 80369820 10000002 */         b .L8036982C
  /* 1ABC94 80369824 ACAC0000 */        sw $t4, ($a1) # D_ovl9_80371414 + 0
  .L80369828:
  /* 1ABC98 80369828 ACA00000 */        sw $zero, ($a1) # D_ovl9_80371414 + 0
  .L8036982C:
  /* 1ABC9C 8036982C 30820200 */      andi $v0, $a0, 0x200
  /* 1ABCA0 80369830 54400006 */      bnel $v0, $zero, .L8036984C
  /* 1ABCA4 80369834 8CB80000 */        lw $t8, ($a1) # D_ovl9_80371414 + 0
  /* 1ABCA8 80369838 950D0000 */       lhu $t5, ($t0) # D_ovl9_80369FD4 + 0
  /* 1ABCAC 8036983C 31AE0200 */      andi $t6, $t5, 0x200
  /* 1ABCB0 80369840 11C00071 */      beqz $t6, jtgt_ovl9_80369A08
  /* 1ABCB4 80369844 00000000 */       nop 
  /* 1ABCB8 80369848 8CB80000 */        lw $t8, ($a1) # D_ovl9_80371414 + 0
  .L8036984C:
  /* 1ABCBC 8036984C 240A001C */     addiu $t2, $zero, 0x1c
  /* 1ABCC0 80369850 3C098037 */       lui $t1, %hi(D_ovl9_8037140C)
  /* 1ABCC4 80369854 030A0019 */     multu $t8, $t2
  /* 1ABCC8 80369858 2529140C */     addiu $t1, $t1, %lo(D_ovl9_8037140C)
  /* 1ABCCC 8036985C 8D2F0000 */        lw $t7, ($t1) # D_ovl9_8037140C + 0
  /* 1ABCD0 80369860 0000C812 */      mflo $t9
  /* 1ABCD4 80369864 01F91821 */      addu $v1, $t7, $t9
  /* 1ABCD8 80369868 8C6B0000 */        lw $t3, ($v1)
  /* 1ABCDC 8036986C 256CFFFF */     addiu $t4, $t3, -1
  /* 1ABCE0 80369870 2D810006 */     sltiu $at, $t4, 6
  /* 1ABCE4 80369874 10200064 */      beqz $at, jtgt_ovl9_80369A08
  /* 1ABCE8 80369878 000C6080 */       sll $t4, $t4, 2
  /* 1ABCEC 8036987C 3C018037 */       lui $at, %hi(D_ovl9_8036A3D0)
  /* 1ABCF0 80369880 002C0821 */      addu $at, $at, $t4
  /* 1ABCF4 80369884 8C2CA3D0 */        lw $t4, %lo(D_ovl9_8036A3D0)($at)
  /* 1ABCF8 80369888 01800008 */        jr $t4
  /* 1ABCFC 8036988C 00000000 */       nop 
  glabel jtgt_ovl9_80369890
  /* 1ABD00 80369890 8C62000C */        lw $v0, 0xc($v1)
  /* 1ABD04 80369894 C4640010 */      lwc1 $f4, 0x10($v1)
  /* 1ABD08 80369898 8C440000 */        lw $a0, ($v0)
  /* 1ABD0C 8036989C 44843000 */      mtc1 $a0, $f6
  /* 1ABD10 803698A0 248DFFFF */     addiu $t5, $a0, -1
  /* 1ABD14 803698A4 46803220 */   cvt.s.w $f8, $f6
  /* 1ABD18 803698A8 4608203C */    c.lt.s $f4, $f8
  /* 1ABD1C 803698AC 00000000 */       nop 
  /* 1ABD20 803698B0 45020004 */     bc1fl .L803698C4
  /* 1ABD24 803698B4 C46A0014 */      lwc1 $f10, 0x14($v1)
  /* 1ABD28 803698B8 10000006 */         b .L803698D4
  /* 1ABD2C 803698BC AC4D0000 */        sw $t5, ($v0)
  /* 1ABD30 803698C0 C46A0014 */      lwc1 $f10, 0x14($v1)
  .L803698C4:
  /* 1ABD34 803698C4 4600540D */ trunc.w.s $f16, $f10
  /* 1ABD38 803698C8 44188000 */      mfc1 $t8, $f16
  /* 1ABD3C 803698CC 00000000 */       nop 
  /* 1ABD40 803698D0 AC580000 */        sw $t8, ($v0)
  .L803698D4:
  /* 1ABD44 803698D4 ACC70000 */        sw $a3, ($a2) # D_ovl9_8037141C + 0
  /* 1ABD48 803698D8 3C048004 */       lui $a0, %hi(D_80045470 + 4)
  /* 1ABD4C 803698DC 1000004A */         b jtgt_ovl9_80369A08
  /* 1ABD50 803698E0 94845474 */       lhu $a0, %lo(D_80045470 + 4)($a0)
  glabel jtgt_ovl9_803698E4
  /* 1ABD54 803698E4 8C62000C */        lw $v0, 0xc($v1)
  /* 1ABD58 803698E8 C4720010 */      lwc1 $f18, 0x10($v1)
  /* 1ABD5C 803698EC 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 1ABD60 803698F0 90440000 */       lbu $a0, ($v0)
  /* 1ABD64 803698F4 240B0001 */     addiu $t3, $zero, 1
  /* 1ABD68 803698F8 44843000 */      mtc1 $a0, $f6
  /* 1ABD6C 803698FC 248FFFFF */     addiu $t7, $a0, -1
  /* 1ABD70 80369900 04810004 */      bgez $a0, .L80369914
  /* 1ABD74 80369904 46803120 */   cvt.s.w $f4, $f6
  /* 1ABD78 80369908 44814000 */      mtc1 $at, $f8 # 4294967300.0 to cop1
  /* 1ABD7C 8036990C 00000000 */       nop 
  /* 1ABD80 80369910 46082100 */     add.s $f4, $f4, $f8
  .L80369914:
  /* 1ABD84 80369914 4604903C */    c.lt.s $f18, $f4
  /* 1ABD88 80369918 3C048004 */       lui $a0, %hi(D_80045470 + 4)
  /* 1ABD8C 8036991C 45020004 */     bc1fl .L80369930
  /* 1ABD90 80369920 4459F800 */      cfc1 $t9, $31
  /* 1ABD94 80369924 10000023 */         b .L803699B4
  /* 1ABD98 80369928 A04F0000 */        sb $t7, ($v0)
  /* 1ABD9C 8036992C 4459F800 */      cfc1 $t9, $31
  .L80369930:
  /* 1ABDA0 80369930 44CBF800 */      ctc1 $t3, $31
  /* 1ABDA4 80369934 C46A0014 */      lwc1 $f10, 0x14($v1)
  /* 1ABDA8 80369938 3C014F00 */       lui $at, (0x4F000000 >> 16) # 2147483600.0
  /* 1ABDAC 8036993C 46005424 */   cvt.w.s $f16, $f10
  /* 1ABDB0 80369940 444BF800 */      cfc1 $t3, $31
  /* 1ABDB4 80369944 00000000 */       nop 
  /* 1ABDB8 80369948 316B0078 */      andi $t3, $t3, 0x78
  /* 1ABDBC 8036994C 51600013 */      beql $t3, $zero, .L8036999C
  /* 1ABDC0 80369950 440B8000 */      mfc1 $t3, $f16
  /* 1ABDC4 80369954 44818000 */      mtc1 $at, $f16 # 2147483600.0 to cop1
  /* 1ABDC8 80369958 240B0001 */     addiu $t3, $zero, 1
  /* 1ABDCC 8036995C 46105401 */     sub.s $f16, $f10, $f16
  /* 1ABDD0 80369960 44CBF800 */      ctc1 $t3, $31
  /* 1ABDD4 80369964 00000000 */       nop 
  /* 1ABDD8 80369968 46008424 */   cvt.w.s $f16, $f16
  /* 1ABDDC 8036996C 444BF800 */      cfc1 $t3, $31
  /* 1ABDE0 80369970 00000000 */       nop 
  /* 1ABDE4 80369974 316B0078 */      andi $t3, $t3, 0x78
  /* 1ABDE8 80369978 15600005 */      bnez $t3, .L80369990
  /* 1ABDEC 8036997C 00000000 */       nop 
  /* 1ABDF0 80369980 440B8000 */      mfc1 $t3, $f16
  /* 1ABDF4 80369984 3C018000 */       lui $at, 0x8000
  /* 1ABDF8 80369988 10000007 */         b .L803699A8
  /* 1ABDFC 8036998C 01615825 */        or $t3, $t3, $at
  .L80369990:
  /* 1ABE00 80369990 10000005 */         b .L803699A8
  /* 1ABE04 80369994 240BFFFF */     addiu $t3, $zero, -1
  /* 1ABE08 80369998 440B8000 */      mfc1 $t3, $f16
  .L8036999C:
  /* 1ABE0C 8036999C 00000000 */       nop 
  /* 1ABE10 803699A0 0560FFFB */      bltz $t3, .L80369990
  /* 1ABE14 803699A4 00000000 */       nop 
  .L803699A8:
  /* 1ABE18 803699A8 44D9F800 */      ctc1 $t9, $31
  /* 1ABE1C 803699AC A04B0000 */        sb $t3, ($v0)
  /* 1ABE20 803699B0 00000000 */       nop 
  .L803699B4:
  /* 1ABE24 803699B4 ACC70000 */        sw $a3, ($a2) # D_ovl9_8037141C + 0
  /* 1ABE28 803699B8 10000013 */         b jtgt_ovl9_80369A08
  /* 1ABE2C 803699BC 94845474 */       lhu $a0, %lo(D_80045470 + 4)($a0)
  glabel jtgt_ovl9_803699C0
  /* 1ABE30 803699C0 10400011 */      beqz $v0, jtgt_ovl9_80369A08
  /* 1ABE34 803699C4 00000000 */       nop 
  /* 1ABE38 803699C8 8C62000C */        lw $v0, 0xc($v1)
  /* 1ABE3C 803699CC 3C01BF80 */       lui $at, (0xBF800000 >> 16) # -1.0
  /* 1ABE40 803699D0 44814000 */      mtc1 $at, $f8 # -1.0 to cop1
  /* 1ABE44 803699D4 C4460000 */      lwc1 $f6, ($v0)
  /* 1ABE48 803699D8 C4600010 */      lwc1 $f0, 0x10($v1)
  /* 1ABE4C 803699DC 3C048004 */       lui $a0, %hi(D_80045470 + 4)
  /* 1ABE50 803699E0 46083080 */     add.s $f2, $f6, $f8
  /* 1ABE54 803699E4 4602003C */    c.lt.s $f0, $f2
  /* 1ABE58 803699E8 00000000 */       nop 
  /* 1ABE5C 803699EC 45020004 */     bc1fl .L80369A00
  /* 1ABE60 803699F0 E4400000 */      swc1 $f0, ($v0)
  /* 1ABE64 803699F4 10000002 */         b .L80369A00
  /* 1ABE68 803699F8 E4420000 */      swc1 $f2, ($v0)
  /* 1ABE6C 803699FC E4400000 */      swc1 $f0, ($v0)
  .L80369A00:
  /* 1ABE70 80369A00 ACC70000 */        sw $a3, ($a2) # D_ovl9_8037141C + 0
  /* 1ABE74 80369A04 94845474 */       lhu $a0, %lo(D_80045470 + 4)($a0)
  glabel jtgt_ovl9_80369A08
  /* 1ABE78 80369A08 3C098037 */       lui $t1, %hi(D_ovl9_8037140C)
  /* 1ABE7C 80369A0C 30820100 */      andi $v0, $a0, 0x100
  /* 1ABE80 80369A10 2529140C */     addiu $t1, $t1, %lo(D_ovl9_8037140C)
  /* 1ABE84 80369A14 14400005 */      bnez $v0, .L80369A2C
  /* 1ABE88 80369A18 240A001C */     addiu $t2, $zero, 0x1c
  /* 1ABE8C 80369A1C 950C0000 */       lhu $t4, ($t0) # D_ovl9_80369FD4 + 0
  /* 1ABE90 80369A20 318D0100 */      andi $t5, $t4, 0x100
  /* 1ABE94 80369A24 11A00069 */      beqz $t5, jtgt_ovl9_80369BCC
  /* 1ABE98 80369A28 00000000 */       nop 
  .L80369A2C:
  /* 1ABE9C 80369A2C 8CB80000 */        lw $t8, ($a1) # D_ovl9_80371414 + 0
  /* 1ABEA0 80369A30 8D2E0000 */        lw $t6, ($t1) # D_ovl9_8037140C + 0
  /* 1ABEA4 80369A34 030A0019 */     multu $t8, $t2
  /* 1ABEA8 80369A38 00007812 */      mflo $t7
  /* 1ABEAC 80369A3C 01CF1821 */      addu $v1, $t6, $t7
  /* 1ABEB0 80369A40 8C790000 */        lw $t9, ($v1)
  /* 1ABEB4 80369A44 272BFFFF */     addiu $t3, $t9, -1
  /* 1ABEB8 80369A48 2D610006 */     sltiu $at, $t3, 6
  /* 1ABEBC 80369A4C 1020005F */      beqz $at, jtgt_ovl9_80369BCC
  /* 1ABEC0 80369A50 000B5880 */       sll $t3, $t3, 2
  /* 1ABEC4 80369A54 3C018037 */       lui $at, %hi(D_ovl9_8036A3E8)
  /* 1ABEC8 80369A58 002B0821 */      addu $at, $at, $t3
  /* 1ABECC 80369A5C 8C2BA3E8 */        lw $t3, %lo(D_ovl9_8036A3E8)($at)
  /* 1ABED0 80369A60 01600008 */        jr $t3
  /* 1ABED4 80369A64 00000000 */       nop 
  glabel jtgt_ovl9_80369A68
  /* 1ABED8 80369A68 8C62000C */        lw $v0, 0xc($v1)
  /* 1ABEDC 80369A6C C46A0014 */      lwc1 $f10, 0x14($v1)
  /* 1ABEE0 80369A70 8C440000 */        lw $a0, ($v0)
  /* 1ABEE4 80369A74 44849000 */      mtc1 $a0, $f18
  /* 1ABEE8 80369A78 248C0001 */     addiu $t4, $a0, 1
  /* 1ABEEC 80369A7C 46809120 */   cvt.s.w $f4, $f18
  /* 1ABEF0 80369A80 460A203C */    c.lt.s $f4, $f10
  /* 1ABEF4 80369A84 00000000 */       nop 
  /* 1ABEF8 80369A88 45020004 */     bc1fl .L80369A9C
  /* 1ABEFC 80369A8C C4700010 */      lwc1 $f16, 0x10($v1)
  /* 1ABF00 80369A90 10000006 */         b .L80369AAC
  /* 1ABF04 80369A94 AC4C0000 */        sw $t4, ($v0)
  /* 1ABF08 80369A98 C4700010 */      lwc1 $f16, 0x10($v1)
  .L80369A9C:
  /* 1ABF0C 80369A9C 4600818D */ trunc.w.s $f6, $f16
  /* 1ABF10 80369AA0 44183000 */      mfc1 $t8, $f6
  /* 1ABF14 80369AA4 00000000 */       nop 
  /* 1ABF18 80369AA8 AC580000 */        sw $t8, ($v0)
  .L80369AAC:
  /* 1ABF1C 80369AAC 10000047 */         b jtgt_ovl9_80369BCC
  /* 1ABF20 80369AB0 ACC70000 */        sw $a3, ($a2) # D_ovl9_8037141C + 0
  glabel jtgt_ovl9_80369AB4
  /* 1ABF24 80369AB4 8C62000C */        lw $v0, 0xc($v1)
  /* 1ABF28 80369AB8 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 1ABF2C 80369ABC 24190001 */     addiu $t9, $zero, 1
  /* 1ABF30 80369AC0 90440000 */       lbu $a0, ($v0)
  /* 1ABF34 80369AC4 44844000 */      mtc1 $a0, $f8
  /* 1ABF38 80369AC8 248E0001 */     addiu $t6, $a0, 1
  /* 1ABF3C 80369ACC 04810004 */      bgez $a0, .L80369AE0
  /* 1ABF40 80369AD0 468044A0 */   cvt.s.w $f18, $f8
  /* 1ABF44 80369AD4 44812000 */      mtc1 $at, $f4 # 4294967300.0 to cop1
  /* 1ABF48 80369AD8 00000000 */       nop 
  /* 1ABF4C 80369ADC 46049480 */     add.s $f18, $f18, $f4
  .L80369AE0:
  /* 1ABF50 80369AE0 C46A0014 */      lwc1 $f10, 0x14($v1)
  /* 1ABF54 80369AE4 460A903C */    c.lt.s $f18, $f10
  /* 1ABF58 80369AE8 00000000 */       nop 
  /* 1ABF5C 80369AEC 45020004 */     bc1fl .L80369B00
  /* 1ABF60 80369AF0 444FF800 */      cfc1 $t7, $31
  /* 1ABF64 80369AF4 10000023 */         b .L80369B84
  /* 1ABF68 80369AF8 A04E0000 */        sb $t6, ($v0)
  /* 1ABF6C 80369AFC 444FF800 */      cfc1 $t7, $31
  .L80369B00:
  /* 1ABF70 80369B00 44D9F800 */      ctc1 $t9, $31
  /* 1ABF74 80369B04 C4700010 */      lwc1 $f16, 0x10($v1)
  /* 1ABF78 80369B08 3C014F00 */       lui $at, (0x4F000000 >> 16) # 2147483600.0
  /* 1ABF7C 80369B0C 460081A4 */   cvt.w.s $f6, $f16
  /* 1ABF80 80369B10 4459F800 */      cfc1 $t9, $31
  /* 1ABF84 80369B14 00000000 */       nop 
  /* 1ABF88 80369B18 33390078 */      andi $t9, $t9, 0x78
  /* 1ABF8C 80369B1C 53200013 */      beql $t9, $zero, .L80369B6C
  /* 1ABF90 80369B20 44193000 */      mfc1 $t9, $f6
  /* 1ABF94 80369B24 44813000 */      mtc1 $at, $f6 # 2147483600.0 to cop1
  /* 1ABF98 80369B28 24190001 */     addiu $t9, $zero, 1
  /* 1ABF9C 80369B2C 46068181 */     sub.s $f6, $f16, $f6
  /* 1ABFA0 80369B30 44D9F800 */      ctc1 $t9, $31
  /* 1ABFA4 80369B34 00000000 */       nop 
  /* 1ABFA8 80369B38 460031A4 */   cvt.w.s $f6, $f6
  /* 1ABFAC 80369B3C 4459F800 */      cfc1 $t9, $31
  /* 1ABFB0 80369B40 00000000 */       nop 
  /* 1ABFB4 80369B44 33390078 */      andi $t9, $t9, 0x78
  /* 1ABFB8 80369B48 17200005 */      bnez $t9, .L80369B60
  /* 1ABFBC 80369B4C 00000000 */       nop 
  /* 1ABFC0 80369B50 44193000 */      mfc1 $t9, $f6
  /* 1ABFC4 80369B54 3C018000 */       lui $at, 0x8000
  /* 1ABFC8 80369B58 10000007 */         b .L80369B78
  /* 1ABFCC 80369B5C 0321C825 */        or $t9, $t9, $at
  .L80369B60:
  /* 1ABFD0 80369B60 10000005 */         b .L80369B78
  /* 1ABFD4 80369B64 2419FFFF */     addiu $t9, $zero, -1
  /* 1ABFD8 80369B68 44193000 */      mfc1 $t9, $f6
  .L80369B6C:
  /* 1ABFDC 80369B6C 00000000 */       nop 
  /* 1ABFE0 80369B70 0720FFFB */      bltz $t9, .L80369B60
  /* 1ABFE4 80369B74 00000000 */       nop 
  .L80369B78:
  /* 1ABFE8 80369B78 44CFF800 */      ctc1 $t7, $31
  /* 1ABFEC 80369B7C A0590000 */        sb $t9, ($v0)
  /* 1ABFF0 80369B80 00000000 */       nop 
  .L80369B84:
  /* 1ABFF4 80369B84 10000011 */         b jtgt_ovl9_80369BCC
  /* 1ABFF8 80369B88 ACC70000 */        sw $a3, ($a2) # D_ovl9_8037141C + 0
  glabel jtgt_ovl9_80369B8C
  /* 1ABFFC 80369B8C 1040000F */      beqz $v0, jtgt_ovl9_80369BCC
  /* 1AC000 80369B90 00000000 */       nop 
  /* 1AC004 80369B94 8C62000C */        lw $v0, 0xc($v1)
  /* 1AC008 80369B98 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 1AC00C 80369B9C 44812000 */      mtc1 $at, $f4 # 1.0 to cop1
  /* 1AC010 80369BA0 C4480000 */      lwc1 $f8, ($v0)
  /* 1AC014 80369BA4 C4600014 */      lwc1 $f0, 0x14($v1)
  /* 1AC018 80369BA8 46044080 */     add.s $f2, $f8, $f4
  /* 1AC01C 80369BAC 4600103C */    c.lt.s $f2, $f0
  /* 1AC020 80369BB0 00000000 */       nop 
  /* 1AC024 80369BB4 45020004 */     bc1fl .L80369BC8
  /* 1AC028 80369BB8 E4400000 */      swc1 $f0, ($v0)
  /* 1AC02C 80369BBC 10000002 */         b .L80369BC8
  /* 1AC030 80369BC0 E4420000 */      swc1 $f2, ($v0)
  /* 1AC034 80369BC4 E4400000 */      swc1 $f0, ($v0)
  .L80369BC8:
  /* 1AC038 80369BC8 ACC70000 */        sw $a3, ($a2) # D_ovl9_8037141C + 0
  glabel jtgt_ovl9_80369BCC
  /* 1AC03C 80369BCC 3C028004 */       lui $v0, %hi(D_80045470 + 8)
  /* 1AC040 80369BD0 80425478 */        lb $v0, %lo(D_80045470 + 8)($v0)
  /* 1AC044 80369BD4 3C0E8004 */       lui $t6, %hi(D_80045470 + 2)
  /* 1AC048 80369BD8 04410003 */      bgez $v0, .L80369BE8
  /* 1AC04C 80369BDC 00401825 */        or $v1, $v0, $zero
  /* 1AC050 80369BE0 10000001 */         b .L80369BE8
  /* 1AC054 80369BE4 00021823 */      negu $v1, $v0
  .L80369BE8:
  /* 1AC058 80369BE8 28610015 */      slti $at, $v1, 0x15
  /* 1AC05C 80369BEC 14200028 */      bnez $at, .L80369C90
  /* 1AC060 80369BF0 00000000 */       nop 
  /* 1AC064 80369BF4 8CAC0000 */        lw $t4, ($a1) # D_ovl9_80371414 + 0
  /* 1AC068 80369BF8 8D2B0000 */        lw $t3, ($t1) # D_ovl9_8037140C + 0
  /* 1AC06C 80369BFC 24010002 */     addiu $at, $zero, 2
  /* 1AC070 80369C00 018A0019 */     multu $t4, $t2
  /* 1AC074 80369C04 00006812 */      mflo $t5
  /* 1AC078 80369C08 016D1821 */      addu $v1, $t3, $t5
  /* 1AC07C 80369C0C 8C780000 */        lw $t8, ($v1)
  /* 1AC080 80369C10 1701001F */       bne $t8, $at, .L80369C90
  /* 1AC084 80369C14 00000000 */       nop 
  /* 1AC088 80369C18 44825000 */      mtc1 $v0, $f10
  /* 1AC08C 80369C1C C4720018 */      lwc1 $f18, 0x18($v1)
  /* 1AC090 80369C20 46805420 */   cvt.s.w $f16, $f10
  /* 1AC094 80369C24 46109302 */     mul.s $f12, $f18, $f16
  /* 1AC098 80369C28 5840000E */     blezl $v0, .L80369C64
  /* 1AC09C 80369C2C 8C62000C */        lw $v0, 0xc($v1)
  /* 1AC0A0 80369C30 8C62000C */        lw $v0, 0xc($v1)
  /* 1AC0A4 80369C34 C4600014 */      lwc1 $f0, 0x14($v1)
  /* 1AC0A8 80369C38 C4460000 */      lwc1 $f6, ($v0)
  /* 1AC0AC 80369C3C 460C3080 */     add.s $f2, $f6, $f12
  /* 1AC0B0 80369C40 4600103C */    c.lt.s $f2, $f0
  /* 1AC0B4 80369C44 00000000 */       nop 
  /* 1AC0B8 80369C48 45000003 */      bc1f .L80369C58
  /* 1AC0BC 80369C4C 00000000 */       nop 
  /* 1AC0C0 80369C50 1000000E */         b .L80369C8C
  /* 1AC0C4 80369C54 E4420000 */      swc1 $f2, ($v0)
  .L80369C58:
  /* 1AC0C8 80369C58 1000000C */         b .L80369C8C
  /* 1AC0CC 80369C5C E4400000 */      swc1 $f0, ($v0)
  /* 1AC0D0 80369C60 8C62000C */        lw $v0, 0xc($v1)
  .L80369C64:
  /* 1AC0D4 80369C64 C4600010 */      lwc1 $f0, 0x10($v1)
  /* 1AC0D8 80369C68 C4480000 */      lwc1 $f8, ($v0)
  /* 1AC0DC 80369C6C 460C4080 */     add.s $f2, $f8, $f12
  /* 1AC0E0 80369C70 4602003C */    c.lt.s $f0, $f2
  /* 1AC0E4 80369C74 00000000 */       nop 
  /* 1AC0E8 80369C78 45020004 */     bc1fl .L80369C8C
  /* 1AC0EC 80369C7C E4400000 */      swc1 $f0, ($v0)
  /* 1AC0F0 80369C80 10000002 */         b .L80369C8C
  /* 1AC0F4 80369C84 E4420000 */      swc1 $f2, ($v0)
  /* 1AC0F8 80369C88 E4400000 */      swc1 $f0, ($v0)
  .L80369C8C:
  /* 1AC0FC 80369C8C ACC70000 */        sw $a3, ($a2) # D_ovl9_8037141C + 0
  .L80369C90:
  /* 1AC100 80369C90 95CE5472 */       lhu $t6, %lo(D_80045470 + 2)($t6)
  /* 1AC104 80369C94 31CF8000 */      andi $t7, $t6, 0x8000
  /* 1AC108 80369C98 11E00025 */      beqz $t7, .L80369D30
  /* 1AC10C 80369C9C 00000000 */       nop 
  /* 1AC110 80369CA0 8CA20000 */        lw $v0, ($a1) # D_ovl9_80371414 + 0
  /* 1AC114 80369CA4 8D390000 */        lw $t9, ($t1) # D_ovl9_8037140C + 0
  /* 1AC118 80369CA8 3C018037 */       lui $at, %hi(D_ovl9_80371400)
  /* 1AC11C 80369CAC 004A0019 */     multu $v0, $t2
  /* 1AC120 80369CB0 3C048037 */       lui $a0, %hi(D_ovl9_80371404)
  /* 1AC124 80369CB4 00006012 */      mflo $t4
  /* 1AC128 80369CB8 032C1821 */      addu $v1, $t9, $t4
  /* 1AC12C 80369CBC 8C6B0000 */        lw $t3, ($v1)
  /* 1AC130 80369CC0 55600013 */      bnel $t3, $zero, .L80369D10
  /* 1AC134 80369CC4 8C620004 */        lw $v0, 4($v1)
  /* 1AC138 80369CC8 AC221400 */        sw $v0, %lo(D_ovl9_80371400)($at)
  /* 1AC13C 80369CCC 0C0DD223 */       jal func_ovl8_8037488C
  /* 1AC140 80369CD0 8C841404 */        lw $a0, %lo(D_ovl9_80371404)($a0)
  /* 1AC144 80369CD4 3C0E8037 */       lui $t6, %hi(D_ovl9_80371414)
  /* 1AC148 80369CD8 8DCE1414 */        lw $t6, %lo(D_ovl9_80371414)($t6)
  /* 1AC14C 80369CDC 3C0D8037 */       lui $t5, %hi(D_ovl9_80371424)
  /* 1AC150 80369CE0 3C188037 */       lui $t8, %hi(D_ovl9_8037140C)
  /* 1AC154 80369CE4 8F18140C */        lw $t8, %lo(D_ovl9_8037140C)($t8)
  /* 1AC158 80369CE8 8DAD1424 */        lw $t5, %lo(D_ovl9_80371424)($t5)
  /* 1AC15C 80369CEC 3C018037 */       lui $at, %hi(D_ovl9_80371420)
  /* 1AC160 80369CF0 000E78C0 */       sll $t7, $t6, 3
  /* 1AC164 80369CF4 AC201420 */        sw $zero, %lo(D_ovl9_80371420)($at)
  /* 1AC168 80369CF8 01EE7823 */      subu $t7, $t7, $t6
  /* 1AC16C 80369CFC 000F7880 */       sll $t7, $t7, 2
  /* 1AC170 80369D00 3C018004 */       lui $at, %hi(D_80046640)
  /* 1AC174 80369D04 030F1821 */      addu $v1, $t8, $t7
  /* 1AC178 80369D08 AC2D6640 */        sw $t5, %lo(D_80046640)($at)
  /* 1AC17C 80369D0C 8C620004 */        lw $v0, 4($v1)
  .L80369D10:
  /* 1AC180 80369D10 10400007 */      beqz $v0, .L80369D30
  /* 1AC184 80369D14 00000000 */       nop 
  /* 1AC188 80369D18 0040F809 */      jalr $v0
  /* 1AC18C 80369D1C 00000000 */       nop 
  /* 1AC190 80369D20 3C068037 */       lui $a2, %hi(D_ovl9_8037141C)
  /* 1AC194 80369D24 24C6141C */     addiu $a2, $a2, %lo(D_ovl9_8037141C)
  /* 1AC198 80369D28 24070001 */     addiu $a3, $zero, 1
  /* 1AC19C 80369D2C ACC70000 */        sw $a3, ($a2) # D_ovl9_8037141C + 0
  .L80369D30:
  /* 1AC1A0 80369D30 3C198004 */       lui $t9, %hi(D_80045470 + 2)
  /* 1AC1A4 80369D34 97395472 */       lhu $t9, %lo(D_80045470 + 2)($t9)
  /* 1AC1A8 80369D38 3C048037 */       lui $a0, %hi(D_ovl9_80371404)
  /* 1AC1AC 80369D3C 332C4000 */      andi $t4, $t9, 0x4000
  /* 1AC1B0 80369D40 5180000A */      beql $t4, $zero, .L80369D6C
  /* 1AC1B4 80369D44 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1AC1B8 80369D48 0C0DD223 */       jal func_ovl8_8037488C
  /* 1AC1BC 80369D4C 8C841404 */        lw $a0, %lo(D_ovl9_80371404)($a0)
  /* 1AC1C0 80369D50 3C0B8037 */       lui $t3, %hi(D_ovl9_80371424)
  /* 1AC1C4 80369D54 8D6B1424 */        lw $t3, %lo(D_ovl9_80371424)($t3)
  /* 1AC1C8 80369D58 3C018037 */       lui $at, %hi(D_ovl9_80371420)
  /* 1AC1CC 80369D5C AC201420 */        sw $zero, %lo(D_ovl9_80371420)($at)
  /* 1AC1D0 80369D60 3C018004 */       lui $at, %hi(D_80046640)
  /* 1AC1D4 80369D64 AC2B6640 */        sw $t3, %lo(D_80046640)($at)
  /* 1AC1D8 80369D68 8FBF0014 */        lw $ra, 0x14($sp)
  .L80369D6C:
  /* 1AC1DC 80369D6C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1AC1E0 80369D70 03E00008 */        jr $ra
  /* 1AC1E4 80369D74 00000000 */       nop 

glabel func_ovl9_80369D78
  /* 1AC1E8 80369D78 3C088037 */       lui $t0, %hi(D_ovl9_80371420)
  /* 1AC1EC 80369D7C 25081420 */     addiu $t0, $t0, %lo(D_ovl9_80371420)
  /* 1AC1F0 80369D80 8D0E0000 */        lw $t6, ($t0) # D_ovl9_80371420 + 0
  /* 1AC1F4 80369D84 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1AC1F8 80369D88 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1AC1FC 80369D8C AFA40018 */        sw $a0, 0x18($sp)
  /* 1AC200 80369D90 15C00047 */      bnez $t6, .L80369EB0
  /* 1AC204 80369D94 AFA70024 */        sw $a3, 0x24($sp)
  /* 1AC208 80369D98 240F0001 */     addiu $t7, $zero, 1
  /* 1AC20C 80369D9C 8FA20028 */        lw $v0, 0x28($sp)
  /* 1AC210 80369DA0 AD0F0000 */        sw $t7, ($t0) # D_ovl9_80371420 + 0
  /* 1AC214 80369DA4 3C018037 */       lui $at, %hi(D_ovl9_8037140C)
  /* 1AC218 80369DA8 AC27140C */        sw $a3, %lo(D_ovl9_8037140C)($at)
  /* 1AC21C 80369DAC 3C018037 */       lui $at, %hi(D_ovl9_80371410)
  /* 1AC220 80369DB0 3C038037 */       lui $v1, %hi(D_ovl9_8037141C)
  /* 1AC224 80369DB4 AC221410 */        sw $v0, %lo(D_ovl9_80371410)($at)
  /* 1AC228 80369DB8 2463141C */     addiu $v1, $v1, %lo(D_ovl9_8037141C)
  /* 1AC22C 80369DBC AC600000 */        sw $zero, ($v1) # D_ovl9_8037141C + 0
  /* 1AC230 80369DC0 3C018037 */       lui $at, %hi(D_ovl9_80371414)
  /* 1AC234 80369DC4 AC201414 */        sw $zero, %lo(D_ovl9_80371414)($at)
  /* 1AC238 80369DC8 3C048037 */       lui $a0, %hi(D_ovl9_80369F7C)
  /* 1AC23C 80369DCC 3C018037 */       lui $at, %hi(D_ovl9_80371400)
  /* 1AC240 80369DD0 2409FFFF */     addiu $t1, $zero, -1
  /* 1AC244 80369DD4 24849F7C */     addiu $a0, $a0, %lo(D_ovl9_80369F7C)
  /* 1AC248 80369DD8 AC291400 */        sw $t1, %lo(D_ovl9_80371400)($at)
  /* 1AC24C 80369DDC 000258C0 */       sll $t3, $v0, 3
  /* 1AC250 80369DE0 8FAA0018 */        lw $t2, 0x18($sp)
  /* 1AC254 80369DE4 01625821 */      addu $t3, $t3, $v0
  /* 1AC258 80369DE8 256C0003 */     addiu $t4, $t3, 3
  /* 1AC25C 80369DEC A4850002 */        sh $a1, 2($a0) # D_ovl9_80369F7C + 2
  /* 1AC260 80369DF0 A4860004 */        sh $a2, 4($a0) # D_ovl9_80369F7C + 4
  /* 1AC264 80369DF4 A48C0006 */        sh $t4, 6($a0) # D_ovl9_80369F7C + 6
  /* 1AC268 80369DF8 0C0E0720 */       jal func_ovl8_80381C80
  /* 1AC26C 80369DFC A48A0000 */        sh $t2, ($a0) # D_ovl9_80369F7C + 0
  /* 1AC270 80369E00 3C038037 */       lui $v1, %hi(D_ovl9_80371404)
  /* 1AC274 80369E04 24631404 */     addiu $v1, $v1, %lo(D_ovl9_80371404)
  /* 1AC278 80369E08 AC620000 */        sw $v0, ($v1) # D_ovl9_80371404 + 0
  /* 1AC27C 80369E0C 0C0DD244 */       jal func_ovl8_80374910
  /* 1AC280 80369E10 00402025 */        or $a0, $v0, $zero
  /* 1AC284 80369E14 3C018037 */       lui $at, %hi(D_ovl9_80371408)
  /* 1AC288 80369E18 3C048037 */       lui $a0, %hi(D_ovl9_80371404)
  /* 1AC28C 80369E1C 3C058037 */       lui $a1, %hi(D_ovl9_80369F68)
  /* 1AC290 80369E20 AC221408 */        sw $v0, %lo(D_ovl9_80371408)($at)
  /* 1AC294 80369E24 24A59F68 */     addiu $a1, $a1, %lo(D_ovl9_80369F68)
  /* 1AC298 80369E28 0C0DA4D6 */       jal func_ovl9_80369358
  /* 1AC29C 80369E2C 8C841404 */        lw $a0, %lo(D_ovl9_80371404)($a0)
  /* 1AC2A0 80369E30 3C048037 */       lui $a0, %hi(D_ovl9_80371404)
  /* 1AC2A4 80369E34 8C841404 */        lw $a0, %lo(D_ovl9_80371404)($a0)
  /* 1AC2A8 80369E38 8FA50024 */        lw $a1, 0x24($sp)
  /* 1AC2AC 80369E3C 0C0DA580 */       jal func_ovl9_80369600
  /* 1AC2B0 80369E40 8FA60028 */        lw $a2, 0x28($sp)
  /* 1AC2B4 80369E44 3C048037 */       lui $a0, %hi(D_ovl9_80371404)
  /* 1AC2B8 80369E48 3C058037 */       lui $a1, %hi(D_ovl9_80371414)
  /* 1AC2BC 80369E4C 8CA51414 */        lw $a1, %lo(D_ovl9_80371414)($a1)
  /* 1AC2C0 80369E50 0C0DA5A0 */       jal func_ovl9_80369680
  /* 1AC2C4 80369E54 8C841404 */        lw $a0, %lo(D_ovl9_80371404)($a0)
  /* 1AC2C8 80369E58 3C038037 */       lui $v1, %hi(D_ovl9_80371408)
  /* 1AC2CC 80369E5C 24631408 */     addiu $v1, $v1, %lo(D_ovl9_80371408)
  /* 1AC2D0 80369E60 8C620000 */        lw $v0, ($v1) # D_ovl9_80371408 + 0
  /* 1AC2D4 80369E64 3C018037 */       lui $at, %hi(D_ovl9_80371418)
  /* 1AC2D8 80369E68 3C0E8037 */       lui $t6, %hi(func_ovl9_803696D4)
  /* 1AC2DC 80369E6C 8C4D002C */        lw $t5, 0x2c($v0)
  /* 1AC2E0 80369E70 25CE96D4 */     addiu $t6, $t6, %lo(func_ovl9_803696D4)
  /* 1AC2E4 80369E74 3C058037 */       lui $a1, %hi(func_ovl9_8036975C)
  /* 1AC2E8 80369E78 AC2D1418 */        sw $t5, %lo(D_ovl9_80371418)($at)
  /* 1AC2EC 80369E7C AC4E002C */        sw $t6, 0x2c($v0)
  /* 1AC2F0 80369E80 8C640000 */        lw $a0, ($v1) # D_ovl9_80371408 + 0
  /* 1AC2F4 80369E84 24A5975C */     addiu $a1, $a1, %lo(func_ovl9_8036975C)
  /* 1AC2F8 80369E88 24060001 */     addiu $a2, $zero, 1
  /* 1AC2FC 80369E8C 0C002062 */       jal omAddGObjCommonProc
  /* 1AC300 80369E90 24070001 */     addiu $a3, $zero, 1
  /* 1AC304 80369E94 3C038004 */       lui $v1, %hi(D_80046640)
  /* 1AC308 80369E98 24636640 */     addiu $v1, $v1, %lo(D_80046640)
  /* 1AC30C 80369E9C 8C6F0000 */        lw $t7, ($v1) # D_80046640 + 0
  /* 1AC310 80369EA0 3C018037 */       lui $at, %hi(D_ovl9_80371424)
  /* 1AC314 80369EA4 24180001 */     addiu $t8, $zero, 1
  /* 1AC318 80369EA8 AC2F1424 */        sw $t7, %lo(D_ovl9_80371424)($at)
  /* 1AC31C 80369EAC AC780000 */        sw $t8, ($v1) # D_80046640 + 0
  .L80369EB0:
  /* 1AC320 80369EB0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1AC324 80369EB4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1AC328 80369EB8 03E00008 */        jr $ra
  /* 1AC32C 80369EBC 00000000 */       nop 

glabel func_ovl9_80369EC0
  /* 1AC330 80369EC0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1AC334 80369EC4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1AC338 80369EC8 0C0DEEDE */       jal func_ovl8_8037BB78
  /* 1AC33C 80369ECC 00000000 */       nop 
  /* 1AC340 80369ED0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1AC344 80369ED4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1AC348 80369ED8 03E00008 */        jr $ra
  /* 1AC34C 80369EDC 00000000 */       nop 

glabel func_ovl9_80369EE0
  /* 1AC350 80369EE0 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 1AC354 80369EE4 3C0E8037 */       lui $t6, %hi(D_ovl9_8036A400)
  /* 1AC358 80369EE8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1AC35C 80369EEC 25CEA400 */     addiu $t6, $t6, %lo(D_ovl9_8036A400)
  /* 1AC360 80369EF0 240F7000 */     addiu $t7, $zero, 0x7000
  /* 1AC364 80369EF4 AFAE002C */        sw $t6, 0x2c($sp)
  /* 1AC368 80369EF8 AFAF0030 */        sw $t7, 0x30($sp)
  /* 1AC36C 80369EFC AFA00034 */        sw $zero, 0x34($sp)
  /* 1AC370 80369F00 0C0DEE63 */       jal func_ovl8_8037B98C
  /* 1AC374 80369F04 27A4002C */     addiu $a0, $sp, 0x2c
  /* 1AC378 80369F08 3C048037 */       lui $a0, %hi(D_ovl9_8036A398)
  /* 1AC37C 80369F0C 0C0DF5B5 */       jal func_ovl8_8037D6D4
  /* 1AC380 80369F10 2484A398 */     addiu $a0, $a0, %lo(D_ovl9_8036A398)
  /* 1AC384 80369F14 3C048037 */       lui $a0, %hi(D_ovl9_80369F6C)
  /* 1AC388 80369F18 0C0DF674 */       jal func_ovl8_8037D9D0
  /* 1AC38C 80369F1C 24849F6C */     addiu $a0, $a0, %lo(D_ovl9_80369F6C)
  /* 1AC390 80369F20 3C048037 */       lui $a0, %hi(D_ovl9_80369F70)
  /* 1AC394 80369F24 0C0DF66D */       jal func_ovl8_8037D9B4
  /* 1AC398 80369F28 24849F70 */     addiu $a0, $a0, %lo(D_ovl9_80369F70)
  /* 1AC39C 80369F2C 0C0DF657 */       jal func_ovl8_8037D95C
  /* 1AC3A0 80369F30 27A40018 */     addiu $a0, $sp, 0x18
  /* 1AC3A4 80369F34 24180004 */     addiu $t8, $zero, 4
  /* 1AC3A8 80369F38 AFB80018 */        sw $t8, 0x18($sp)
  /* 1AC3AC 80369F3C 0C0DF642 */       jal func_ovl8_8037D908
  /* 1AC3B0 80369F40 27A40018 */     addiu $a0, $sp, 0x18
  /* 1AC3B4 80369F44 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1AC3B8 80369F48 3C018037 */       lui $at, %hi(D_ovl9_80371420)
  /* 1AC3BC 80369F4C AC201420 */        sw $zero, %lo(D_ovl9_80371420)($at)
  /* 1AC3C0 80369F50 03E00008 */        jr $ra
  /* 1AC3C4 80369F54 27BD0038 */     addiu $sp, $sp, 0x38

  /* 1AC3C8 80369F58 00000000 */       nop 
  /* 1AC3CC 80369F5C 00000000 */       nop 

# Likely start of new file
#glabel D_ovl9_80369F60   # Routine parsed as data
#  /* 1AC3D0 80369F60 FFFFFFFF */        sd $ra, -1($ra)
#glabel D_ovl9_80369F64   # Routine parsed as data
#  /* 1AC3D4 80369F64 0000FFFF */    dsra32 $ra, $zero, 0x1f
#glabel D_ovl9_80369F68   # Routine parsed as data
#  /* 1AC3D8 80369F68 80FFFFFF */        lb $ra, -1($a3)
#glabel D_ovl9_80369F6C   # Routine parsed as data
#  /* 1AC3DC 80369F6C FFFFFFFF */        sd $ra, -1($ra)
#glabel D_ovl9_80369F70   # Routine parsed as data
#  /* 1AC3E0 80369F70 0000FFFF */    dsra32 $ra, $zero, 0x1f
#  /* 1AC3E4 80369F74 0000FFFF */    dsra32 $ra, $zero, 0x1f
#  /* 1AC3E8 80369F78 FFFFFFFF */        sd $ra, -1($ra)
#glabel D_ovl9_80369F7C   # Routine parsed as data
#  /* 1AC3EC 80369F7C 00000000 */       nop 
#  /* 1AC3F0 80369F80 00000000 */       nop 
#  /* 1AC3F4 80369F84 FFFFFFFF */        sd $ra, -1($ra)
#  /* 1AC3F8 80369F88 0000FFFF */    dsra32 $ra, $zero, 0x1f
#  /* 1AC3FC 80369F8C 00010000 */       sll $zero, $at, 0
