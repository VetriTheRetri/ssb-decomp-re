.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

glabel osContStartReadData
  /* 032B70 80031F70 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 032B74 80031F74 AFBF0014 */        sw $ra, 0x14($sp)
  /* 032B78 80031F78 0C00C69C */       jal __osSiGetAccess
  /* 032B7C 80031F7C AFA40020 */        sw $a0, 0x20($sp)
  /* 032B80 80031F80 3C0E800A */       lui $t6, %hi(__osContLastCmd)
  /* 032B84 80031F84 91CEEFE0 */       lbu $t6, %lo(__osContLastCmd)($t6)
  /* 032B88 80031F88 24010001 */     addiu $at, $zero, 1
  /* 032B8C 80031F8C 11C1000B */       beq $t6, $at, .L80031FBC
  /* 032B90 80031F90 00000000 */       nop 
  /* 032B94 80031F94 0C00C820 */       jal __osPackReadData
  /* 032B98 80031F98 00000000 */       nop 
  /* 032B9C 80031F9C 3C05800A */       lui $a1, %hi(__osContPifRam)
  /* 032BA0 80031FA0 24A5EFA0 */     addiu $a1, $a1, %lo(__osContPifRam)
  /* 032BA4 80031FA4 0C00C9D8 */       jal __osSiRawStartDma
  /* 032BA8 80031FA8 24040001 */     addiu $a0, $zero, 1
  /* 032BAC 80031FAC 8FA40020 */        lw $a0, 0x20($sp)
  /* 032BB0 80031FB0 00002825 */        or $a1, $zero, $zero
  /* 032BB4 80031FB4 0C00C084 */       jal osRecvMesg
  /* 032BB8 80031FB8 24060001 */     addiu $a2, $zero, 1
  .L80031FBC:
  /* 032BBC 80031FBC 3C05800A */       lui $a1, %hi(__osContPifRam)
  /* 032BC0 80031FC0 24A5EFA0 */     addiu $a1, $a1, %lo(__osContPifRam)
  /* 032BC4 80031FC4 0C00C9D8 */       jal __osSiRawStartDma
  /* 032BC8 80031FC8 00002025 */        or $a0, $zero, $zero
  /* 032BCC 80031FCC 240F0001 */     addiu $t7, $zero, 1
  /* 032BD0 80031FD0 3C01800A */       lui $at, %hi(__osContLastCmd)
  /* 032BD4 80031FD4 AFA2001C */        sw $v0, 0x1c($sp)
  /* 032BD8 80031FD8 0C00C6AD */       jal __osSiRelAccess
  /* 032BDC 80031FDC A02FEFE0 */        sb $t7, %lo(__osContLastCmd)($at)
  /* 032BE0 80031FE0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 032BE4 80031FE4 8FA2001C */        lw $v0, 0x1c($sp)
  /* 032BE8 80031FE8 27BD0020 */     addiu $sp, $sp, 0x20
  /* 032BEC 80031FEC 03E00008 */        jr $ra
  /* 032BF0 80031FF0 00000000 */       nop 

#func_80031FF4
glabel osContGetReadData
  /* 032BF4 80031FF4 3C05800A */       lui $a1, %hi(__osMaxControllers)
  /* 032BF8 80031FF8 24A5EFE1 */     addiu $a1, $a1, %lo(__osMaxControllers)
  /* 032BFC 80031FFC 90AE0000 */       lbu $t6, ($a1) # __osMaxControllers + 0
  /* 032C00 80032000 3C02800A */       lui $v0, %hi(__osContPifRam)
  /* 032C04 80032004 27BDFFF0 */     addiu $sp, $sp, -0x10
  /* 032C08 80032008 2442EFA0 */     addiu $v0, $v0, %lo(__osContPifRam)
  /* 032C0C 8003200C 19C0001A */      blez $t6, .L80032078
  /* 032C10 80032010 00001825 */        or $v1, $zero, $zero
  /* 032C14 80032014 27A60004 */     addiu $a2, $sp, 4
  .L80032018:
  /* 032C18 80032018 88410000 */       lwl $at, ($v0) # __osContPifRam + 0
  /* 032C1C 8003201C 98410003 */       lwr $at, 3($v0) # __osContPifRam + 3
  /* 032C20 80032020 ACC10000 */        sw $at, ($a2)
  /* 032C24 80032024 88580004 */       lwl $t8, 4($v0) # __osContPifRam + 4
  /* 032C28 80032028 98580007 */       lwr $t8, 7($v0) # __osContPifRam + 7
  /* 032C2C 8003202C ACD80004 */        sw $t8, 4($a2)
  /* 032C30 80032030 93B90006 */       lbu $t9, 6($sp)
  /* 032C34 80032034 332800C0 */      andi $t0, $t9, 0xc0
  /* 032C38 80032038 00084903 */       sra $t1, $t0, 4
  /* 032C3C 8003203C 312A00FF */      andi $t2, $t1, 0xff
  /* 032C40 80032040 15400007 */      bnez $t2, .L80032060
  /* 032C44 80032044 A0890004 */        sb $t1, 4($a0)
  /* 032C48 80032048 97AB0008 */       lhu $t3, 8($sp)
  /* 032C4C 8003204C A48B0000 */        sh $t3, ($a0)
  /* 032C50 80032050 83AC000A */        lb $t4, 0xa($sp)
  /* 032C54 80032054 A08C0002 */        sb $t4, 2($a0)
  /* 032C58 80032058 83AD000B */        lb $t5, 0xb($sp)
  /* 032C5C 8003205C A08D0003 */        sb $t5, 3($a0)
  .L80032060:
  /* 032C60 80032060 90AE0000 */       lbu $t6, ($a1) # __osMaxControllers + 0
  /* 032C64 80032064 24630001 */     addiu $v1, $v1, 1
  /* 032C68 80032068 24420008 */     addiu $v0, $v0, 8
  /* 032C6C 8003206C 006E082A */       slt $at, $v1, $t6
  /* 032C70 80032070 1420FFE9 */      bnez $at, .L80032018
  /* 032C74 80032074 24840006 */     addiu $a0, $a0, 6
  .L80032078:
  /* 032C78 80032078 03E00008 */        jr $ra
  /* 032C7C 8003207C 27BD0010 */     addiu $sp, $sp, 0x10

#func_80032080
glabel __osPackReadData
  /* 032C80 80032080 3C05800A */       lui $a1, %hi(__osContPifRam)
  /* 032C84 80032084 24A5EFA0 */     addiu $a1, $a1, %lo(__osContPifRam)
  /* 032C88 80032088 3C04800A */       lui $a0, %hi(__osContPifRam)
  /* 032C8C 8003208C 3C03800A */       lui $v1, %hi(__osContPifRam + 0x3C)
  /* 032C90 80032090 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 032C94 80032094 00A01025 */        or $v0, $a1, $zero
  /* 032C98 80032098 2463EFDC */     addiu $v1, $v1, %lo(__osContPifRam + 0x3C)
  /* 032C9C 8003209C 2484EFA0 */     addiu $a0, $a0, %lo(__osContPifRam)
  .L800320A0:
  /* 032CA0 800320A0 24840004 */     addiu $a0, $a0, 4
  /* 032CA4 800320A4 0083082B */      sltu $at, $a0, $v1
  /* 032CA8 800320A8 1420FFFD */      bnez $at, .L800320A0
  /* 032CAC 800320AC AC80FFFC */        sw $zero, -4($a0) # __osContPifRam + -4
  /* 032CB0 800320B0 3C04800A */       lui $a0, %hi(__osMaxControllers)
  /* 032CB4 800320B4 2484EFE1 */     addiu $a0, $a0, %lo(__osMaxControllers)
  /* 032CB8 800320B8 908C0000 */       lbu $t4, ($a0) # __osMaxControllers + 0
  /* 032CBC 800320BC 240E0001 */     addiu $t6, $zero, 1
  /* 032CC0 800320C0 240F00FF */     addiu $t7, $zero, 0xff
  /* 032CC4 800320C4 24180001 */     addiu $t8, $zero, 1
  /* 032CC8 800320C8 24190004 */     addiu $t9, $zero, 4
  /* 032CCC 800320CC 24080001 */     addiu $t0, $zero, 1
  /* 032CD0 800320D0 3409FFFF */       ori $t1, $zero, 0xffff
  /* 032CD4 800320D4 240AFFFF */     addiu $t2, $zero, -1
  /* 032CD8 800320D8 240BFFFF */     addiu $t3, $zero, -1
  /* 032CDC 800320DC ACAE003C */        sw $t6, 0x3c($a1) # __osContPifRam + 60
  /* 032CE0 800320E0 A3AF000C */        sb $t7, 0xc($sp)
  /* 032CE4 800320E4 A3B8000D */        sb $t8, 0xd($sp)
  /* 032CE8 800320E8 A3B9000E */        sb $t9, 0xe($sp)
  /* 032CEC 800320EC A3A8000F */        sb $t0, 0xf($sp)
  /* 032CF0 800320F0 A7A90010 */        sh $t1, 0x10($sp)
  /* 032CF4 800320F4 A3AA0012 */        sb $t2, 0x12($sp)
  /* 032CF8 800320F8 A3AB0013 */        sb $t3, 0x13($sp)
  /* 032CFC 800320FC 1980000E */      blez $t4, .L80032138
  /* 032D00 80032100 00001825 */        or $v1, $zero, $zero
  /* 032D04 80032104 27A5000C */     addiu $a1, $sp, 0xc
  /* 032D08 80032108 8CA10000 */        lw $at, ($a1) # __osContPifRam + 0
  .L8003210C:
  /* 032D0C 8003210C 24630001 */     addiu $v1, $v1, 1
  /* 032D10 80032110 24420008 */     addiu $v0, $v0, 8
  /* 032D14 80032114 A841FFF8 */       swl $at, -8($v0)
  /* 032D18 80032118 B841FFFB */       swr $at, -5($v0)
  /* 032D1C 8003211C 8CAE0004 */        lw $t6, 4($a1) # __osContPifRam + 4
  /* 032D20 80032120 A84EFFFC */       swl $t6, -4($v0)
  /* 032D24 80032124 B84EFFFF */       swr $t6, -1($v0)
  /* 032D28 80032128 908F0000 */       lbu $t7, ($a0) # __osMaxControllers + 0
  /* 032D2C 8003212C 006F082A */       slt $at, $v1, $t7
  /* 032D30 80032130 5420FFF6 */      bnel $at, $zero, .L8003210C
  /* 032D34 80032134 8CA10000 */        lw $at, ($a1) # __osContPifRam + 0
  .L80032138:
  /* 032D38 80032138 241800FE */     addiu $t8, $zero, 0xfe
  /* 032D3C 8003213C A0580000 */        sb $t8, ($v0)
  /* 032D40 80032140 03E00008 */        jr $ra
  /* 032D44 80032144 27BD0018 */     addiu $sp, $sp, 0x18

  /* 032D48 80032148 00000000 */       nop 
  /* 032D4C 8003214C 00000000 */       nop 
