.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

glabel osEPiRawWriteIo
  /* 0387B0 80037BB0 3C03A460 */       lui $v1, (0xA4600010 >> 16) # 2757754896
  /* 0387B4 80037BB4 34630010 */       ori $v1, $v1, (0xA4600010 & 0xFFFF) # 2757754896
  /* 0387B8 80037BB8 8C620000 */        lw $v0, ($v1) # PI_STATUS_REG + 0
  /* 0387BC 80037BBC 00A03825 */        or $a3, $a1, $zero
  /* 0387C0 80037BC0 304E0003 */      andi $t6, $v0, 3
  /* 0387C4 80037BC4 51C00006 */      beql $t6, $zero, .L80037BE0
  /* 0387C8 80037BC8 90820009 */       lbu $v0, 9($a0)
  /* 0387CC 80037BCC 8C620000 */        lw $v0, ($v1) # PI_STATUS_REG + 0
  .L80037BD0:
  /* 0387D0 80037BD0 304F0003 */      andi $t7, $v0, 3
  /* 0387D4 80037BD4 55E0FFFE */      bnel $t7, $zero, .L80037BD0
  /* 0387D8 80037BD8 8C620000 */        lw $v0, ($v1) # PI_STATUS_REG + 0
  /* 0387DC 80037BDC 90820009 */       lbu $v0, 9($a0)
  .L80037BE0:
  /* 0387E0 80037BE0 3C038004 */       lui $v1, %hi(__osCurrentHandle)
  /* 0387E4 80037BE4 90990004 */       lbu $t9, 4($a0)
  /* 0387E8 80037BE8 0002C080 */       sll $t8, $v0, 2
  /* 0387EC 80037BEC 00781821 */      addu $v1, $v1, $t8
  /* 0387F0 80037BF0 8C63D430 */        lw $v1, %lo(__osCurrentHandle)($v1)
  /* 0387F4 80037BF4 90680004 */       lbu $t0, 4($v1)
  /* 0387F8 80037BF8 5328003D */      beql $t9, $t0, .L80037CF0
  /* 0387FC 80037BFC 8C8A000C */        lw $t2, 0xc($a0)
  /* 038800 80037C00 14400019 */      bnez $v0, .L80037C68
  /* 038804 80037C04 00602825 */        or $a1, $v1, $zero
  /* 038808 80037C08 90820005 */       lbu $v0, 5($a0)
  /* 03880C 80037C0C 90690005 */       lbu $t1, 5($v1)
  /* 038810 80037C10 3C0AA460 */       lui $t2, %hi(PI_BSD_DOM1_LAT_REG)
  /* 038814 80037C14 3C0CA460 */       lui $t4, %hi(PI_BSD_DOM1_PGS_REG)
  /* 038818 80037C18 10490002 */       beq $v0, $t1, .L80037C24
  /* 03881C 80037C1C 3C0EA460 */       lui $t6, %hi(PI_BSD_DOM1_RLS_REG)
  /* 038820 80037C20 AD420014 */        sw $v0, %lo(PI_BSD_DOM1_LAT_REG)($t2)
  .L80037C24:
  /* 038824 80037C24 90820006 */       lbu $v0, 6($a0)
  /* 038828 80037C28 90AB0006 */       lbu $t3, 6($a1)
  /* 03882C 80037C2C 3C18A460 */       lui $t8, %hi(PI_BSD_DOM1_PWD_REG)
  /* 038830 80037C30 504B0003 */      beql $v0, $t3, .L80037C40
  /* 038834 80037C34 90820007 */       lbu $v0, 7($a0)
  /* 038838 80037C38 AD82001C */        sw $v0, %lo(PI_BSD_DOM1_PGS_REG)($t4)
  /* 03883C 80037C3C 90820007 */       lbu $v0, 7($a0)
  .L80037C40:
  /* 038840 80037C40 90AD0007 */       lbu $t5, 7($a1)
  /* 038844 80037C44 504D0003 */      beql $v0, $t5, .L80037C54
  /* 038848 80037C48 90820008 */       lbu $v0, 8($a0)
  /* 03884C 80037C4C ADC20020 */        sw $v0, %lo(PI_BSD_DOM1_RLS_REG)($t6)
  /* 038850 80037C50 90820008 */       lbu $v0, 8($a0)
  .L80037C54:
  /* 038854 80037C54 90AF0008 */       lbu $t7, 8($a1)
  /* 038858 80037C58 504F001B */      beql $v0, $t7, .L80037CC8
  /* 03885C 80037C5C 908F0004 */       lbu $t7, 4($a0)
  /* 038860 80037C60 10000018 */         b .L80037CC4
  /* 038864 80037C64 AF020018 */        sw $v0, %lo(PI_BSD_DOM1_PWD_REG)($t8)
  .L80037C68:
  /* 038868 80037C68 90820005 */       lbu $v0, 5($a0)
  /* 03886C 80037C6C 90B90005 */       lbu $t9, 5($a1)
  /* 038870 80037C70 3C08A460 */       lui $t0, %hi(PI_BSD_DOM2_LAT_REG)
  /* 038874 80037C74 3C0AA460 */       lui $t2, %hi(PI_BSD_DOM2_PGS_REG)
  /* 038878 80037C78 10590002 */       beq $v0, $t9, .L80037C84
  /* 03887C 80037C7C 3C0CA460 */       lui $t4, %hi(PI_DRAM_ADDR_REG)
  /* 038880 80037C80 AD020024 */        sw $v0, %lo(PI_BSD_DOM2_LAT_REG)($t0)
  .L80037C84:
  /* 038884 80037C84 90820006 */       lbu $v0, 6($a0)
  /* 038888 80037C88 90A90006 */       lbu $t1, 6($a1)
  /* 03888C 80037C8C 3C0EA460 */       lui $t6, %hi(PI_BSD_DOM2_PWD_REG)
  /* 038890 80037C90 50490003 */      beql $v0, $t1, .L80037CA0
  /* 038894 80037C94 90820007 */       lbu $v0, 7($a0)
  /* 038898 80037C98 AD42002C */        sw $v0, %lo(PI_BSD_DOM2_PGS_REG)($t2)
  /* 03889C 80037C9C 90820007 */       lbu $v0, 7($a0)
  .L80037CA0:
  /* 0388A0 80037CA0 90AB0007 */       lbu $t3, 7($a1)
  /* 0388A4 80037CA4 504B0003 */      beql $v0, $t3, .L80037CB4
  /* 0388A8 80037CA8 90820008 */       lbu $v0, 8($a0)
  /* 0388AC 80037CAC AD820030 */        sw $v0, %lo(PI_BSD_DOM2_RLS_REG)($t4)
  /* 0388B0 80037CB0 90820008 */       lbu $v0, 8($a0)
  .L80037CB4:
  /* 0388B4 80037CB4 90AD0008 */       lbu $t5, 8($a1)
  /* 0388B8 80037CB8 504D0003 */      beql $v0, $t5, .L80037CC8
  /* 0388BC 80037CBC 908F0004 */       lbu $t7, 4($a0)
  /* 0388C0 80037CC0 ADC20028 */        sw $v0, %lo(PI_BSD_DOM2_PWD_REG)($t6)
  .L80037CC4:
  /* 0388C4 80037CC4 908F0004 */       lbu $t7, 4($a0)
  .L80037CC8:
  /* 0388C8 80037CC8 A0AF0004 */        sb $t7, 4($a1)
  /* 0388CC 80037CCC 90980005 */       lbu $t8, 5($a0)
  /* 0388D0 80037CD0 A0B80005 */        sb $t8, 5($a1)
  /* 0388D4 80037CD4 90990006 */       lbu $t9, 6($a0)
  /* 0388D8 80037CD8 A0B90006 */        sb $t9, 6($a1)
  /* 0388DC 80037CDC 90880007 */       lbu $t0, 7($a0)
  /* 0388E0 80037CE0 A0A80007 */        sb $t0, 7($a1)
  /* 0388E4 80037CE4 90890008 */       lbu $t1, 8($a0)
  /* 0388E8 80037CE8 A0A90008 */        sb $t1, 8($a1)
  /* 0388EC 80037CEC 8C8A000C */        lw $t2, 0xc($a0)
  .L80037CF0:
  /* 0388F0 80037CF0 3C01A000 */       lui $at, 0xa000
  /* 0388F4 80037CF4 00001025 */        or $v0, $zero, $zero
  /* 0388F8 80037CF8 01475825 */        or $t3, $t2, $a3
  /* 0388FC 80037CFC 01616025 */        or $t4, $t3, $at
  /* 038900 80037D00 03E00008 */        jr $ra
  /* 038904 80037D04 AD860000 */        sw $a2, %lo(PI_DRAM_ADDR_REG)($t4)

  /* 038908 80037D08 00000000 */       nop 
  /* 03890C 80037D0C 00000000 */       nop 

