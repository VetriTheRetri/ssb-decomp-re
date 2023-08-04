.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80131B00 -> 0x80132690

glabel func_ovl14_80131B00
  /* 11B970 80131B00 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11B974 80131B04 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11B978 80131B08 8C830000 */        lw $v1, ($a0)
  /* 11B97C 80131B0C 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 11B980 80131B10 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 11B984 80131B14 246E0008 */     addiu $t6, $v1, 8
  /* 11B988 80131B18 AC8E0000 */        sw $t6, ($a0)
  /* 11B98C 80131B1C 3C180002 */       lui $t8, 2
  /* 11B990 80131B20 AC780004 */        sw $t8, 4($v1)
  /* 11B994 80131B24 AC6F0000 */        sw $t7, ($v1)
  /* 11B998 80131B28 0C0E4147 */       jal func_ovl1_8039051C
  /* 11B99C 80131B2C AFA40028 */        sw $a0, 0x28($sp)
  /* 11B9A0 80131B30 0C0E414A */       jal func_ovl1_80390528
  /* 11B9A4 80131B34 E7A0001C */      swc1 $f0, 0x1c($sp)
  /* 11B9A8 80131B38 44060000 */      mfc1 $a2, $f0
  /* 11B9AC 80131B3C 8FA40028 */        lw $a0, 0x28($sp)
  /* 11B9B0 80131B40 0C03F2DC */       jal func_ovl2_800FCB70
  /* 11B9B4 80131B44 8FA5001C */        lw $a1, 0x1c($sp)
  /* 11B9B8 80131B48 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11B9BC 80131B4C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11B9C0 80131B50 03E00008 */        jr $ra
  /* 11B9C4 80131B54 00000000 */       nop 

glabel func_ovl14_80131B58
  /* 11B9C8 80131B58 24060001 */     addiu $a2, $zero, 1
  /* 11B9CC 80131B5C 3C07800A */       lui $a3, %hi(D_800A4D08)
  /* 11B9D0 80131B60 3C018013 */       lui $at, %hi(D_ovl14_80132690)
  /* 11B9D4 80131B64 24E74D08 */     addiu $a3, $a3, %lo(D_800A4D08)
  /* 11B9D8 80131B68 AC262690 */        sw $a2, %lo(D_ovl14_80132690)($at)
  /* 11B9DC 80131B6C 300200FF */      andi $v0, $zero, 0xff
  /* 11B9E0 80131B70 A0E20004 */        sb $v0, 4($a3) # D_800A4D08 + 4
  /* 11B9E4 80131B74 A0E00005 */        sb $zero, 5($a3) # D_800A4D08 + 5
  /* 11B9E8 80131B78 3C04800A */       lui $a0, %hi((D_800A4D08 + 0x22))
  /* 11B9EC 80131B7C 90844D2A */       lbu $a0, %lo((D_800A4D08 + 0x22))($a0)
  /* 11B9F0 80131B80 3C03800A */       lui $v1, %hi((D_800A4D08 + 0x96))
  /* 11B9F4 80131B84 3C01800A */       lui $at, %hi((D_800A4D08 + 0x24))
  /* 11B9F8 80131B88 50800006 */      beql $a0, $zero, .L80131BA4
  /* 11B9FC 80131B8C 90EE0004 */       lbu $t6, 4($a3) # D_800A4D08 + 4
  /* 11BA00 80131B90 10860007 */       beq $a0, $a2, .L80131BB0
  /* 11BA04 80131B94 24580001 */     addiu $t8, $v0, 1
  /* 11BA08 80131B98 10000006 */         b .L80131BB4
  /* 11BA0C 80131B9C 00000000 */       nop 
  /* 11BA10 80131BA0 90EE0004 */       lbu $t6, 4($a3) # D_800A4D08 + 4
  .L80131BA4:
  /* 11BA14 80131BA4 25CF0001 */     addiu $t7, $t6, 1
  /* 11BA18 80131BA8 10000002 */         b .L80131BB4
  /* 11BA1C 80131BAC A0EF0004 */        sb $t7, 4($a3) # D_800A4D08 + 4
  .L80131BB0:
  /* 11BA20 80131BB0 A0F80005 */        sb $t8, 5($a3) # D_800A4D08 + 5
  .L80131BB4:
  /* 11BA24 80131BB4 A0204D2C */        sb $zero, %lo((D_800A4D08 + 0x24))($at)
  /* 11BA28 80131BB8 3C01800A */       lui $at, %hi((D_800A4D08 + 0x28))
  /* 11BA2C 80131BBC A0204D30 */        sb $zero, %lo((D_800A4D08 + 0x28))($at)
  /* 11BA30 80131BC0 3C01800A */       lui $at, %hi((D_800A4D08 + 0x2A))
  /* 11BA34 80131BC4 A0204D32 */        sb $zero, %lo((D_800A4D08 + 0x2A))($at)
  /* 11BA38 80131BC8 90634D9E */       lbu $v1, %lo((D_800A4D08 + 0x96))($v1)
  /* 11BA3C 80131BCC 3C01800A */       lui $at, %hi((D_800A4D08 + 0x98))
  /* 11BA40 80131BD0 240F0002 */     addiu $t7, $zero, 2
  /* 11BA44 80131BD4 10600005 */      beqz $v1, .L80131BEC
  /* 11BA48 80131BD8 24180002 */     addiu $t8, $zero, 2
  /* 11BA4C 80131BDC 50660008 */      beql $v1, $a2, .L80131C00
  /* 11BA50 80131BE0 90E90005 */       lbu $t1, 5($a3) # D_800A4D08 + 5
  /* 11BA54 80131BE4 10000008 */         b .L80131C08
  /* 11BA58 80131BE8 00000000 */       nop 
  .L80131BEC:
  /* 11BA5C 80131BEC 90F90004 */       lbu $t9, 4($a3) # D_800A4D08 + 4
  /* 11BA60 80131BF0 27280001 */     addiu $t0, $t9, 1
  /* 11BA64 80131BF4 10000004 */         b .L80131C08
  /* 11BA68 80131BF8 A0E80004 */        sb $t0, 4($a3) # D_800A4D08 + 4
  /* 11BA6C 80131BFC 90E90005 */       lbu $t1, 5($a3) # D_800A4D08 + 5
  .L80131C00:
  /* 11BA70 80131C00 252A0001 */     addiu $t2, $t1, 1
  /* 11BA74 80131C04 A0EA0005 */        sb $t2, 5($a3) # D_800A4D08 + 5
  .L80131C08:
  /* 11BA78 80131C08 A0264DA0 */        sb $a2, %lo((D_800A4D08 + 0x98))($at)
  /* 11BA7C 80131C0C 3C01800A */       lui $at, %hi((D_800A4D08 + 0x9C))
  /* 11BA80 80131C10 A0264DA4 */        sb $a2, %lo((D_800A4D08 + 0x9C))($at)
  /* 11BA84 80131C14 3C01800A */       lui $at, %hi((D_800A4D08 + 0x9E))
  /* 11BA88 80131C18 A0264DA6 */        sb $a2, %lo((D_800A4D08 + 0x9E))($at)
  /* 11BA8C 80131C1C 3C03800A */       lui $v1, %hi((D_800A4D08 + 0x10A))
  /* 11BA90 80131C20 90634E12 */       lbu $v1, %lo((D_800A4D08 + 0x10A))($v1)
  /* 11BA94 80131C24 3C01800A */       lui $at, %hi((D_800A4D08 + 0x10C))
  /* 11BA98 80131C28 24190002 */     addiu $t9, $zero, 2
  /* 11BA9C 80131C2C 50600006 */      beql $v1, $zero, .L80131C48
  /* 11BAA0 80131C30 90EB0004 */       lbu $t3, 4($a3) # D_800A4D08 + 4
  /* 11BAA4 80131C34 50660008 */      beql $v1, $a2, .L80131C58
  /* 11BAA8 80131C38 90ED0005 */       lbu $t5, 5($a3) # D_800A4D08 + 5
  /* 11BAAC 80131C3C 10000008 */         b .L80131C60
  /* 11BAB0 80131C40 00000000 */       nop 
  /* 11BAB4 80131C44 90EB0004 */       lbu $t3, 4($a3) # D_800A4D08 + 4
  .L80131C48:
  /* 11BAB8 80131C48 256C0001 */     addiu $t4, $t3, 1
  /* 11BABC 80131C4C 10000004 */         b .L80131C60
  /* 11BAC0 80131C50 A0EC0004 */        sb $t4, 4($a3) # D_800A4D08 + 4
  /* 11BAC4 80131C54 90ED0005 */       lbu $t5, 5($a3) # D_800A4D08 + 5
  .L80131C58:
  /* 11BAC8 80131C58 25AE0001 */     addiu $t6, $t5, 1
  /* 11BACC 80131C5C A0EE0005 */        sb $t6, 5($a3) # D_800A4D08 + 5
  .L80131C60:
  /* 11BAD0 80131C60 A02F4E14 */        sb $t7, %lo((D_800A4D08 + 0x10C))($at)
  /* 11BAD4 80131C64 3C01800A */       lui $at, %hi((D_800A4D08 + 0x110))
  /* 11BAD8 80131C68 A0384E18 */        sb $t8, %lo((D_800A4D08 + 0x110))($at)
  /* 11BADC 80131C6C 3C01800A */       lui $at, %hi((D_800A4D08 + 0x112))
  /* 11BAE0 80131C70 A0394E1A */        sb $t9, %lo((D_800A4D08 + 0x112))($at)
  /* 11BAE4 80131C74 3C03800A */       lui $v1, %hi((D_800A4D08 + 0x17E))
  /* 11BAE8 80131C78 90634E86 */       lbu $v1, %lo((D_800A4D08 + 0x17E))($v1)
  /* 11BAEC 80131C7C 3C01800A */       lui $at, %hi((D_800A4D08 + 0x180))
  /* 11BAF0 80131C80 240C0003 */     addiu $t4, $zero, 3
  /* 11BAF4 80131C84 10600005 */      beqz $v1, .L80131C9C
  /* 11BAF8 80131C88 240D0003 */     addiu $t5, $zero, 3
  /* 11BAFC 80131C8C 50660008 */      beql $v1, $a2, .L80131CB0
  /* 11BB00 80131C90 90EA0005 */       lbu $t2, 5($a3) # D_800A4D08 + 5
  /* 11BB04 80131C94 10000008 */         b .L80131CB8
  /* 11BB08 80131C98 00000000 */       nop 
  .L80131C9C:
  /* 11BB0C 80131C9C 90E80004 */       lbu $t0, 4($a3) # D_800A4D08 + 4
  /* 11BB10 80131CA0 25090001 */     addiu $t1, $t0, 1
  /* 11BB14 80131CA4 10000004 */         b .L80131CB8
  /* 11BB18 80131CA8 A0E90004 */        sb $t1, 4($a3) # D_800A4D08 + 4
  /* 11BB1C 80131CAC 90EA0005 */       lbu $t2, 5($a3) # D_800A4D08 + 5
  .L80131CB0:
  /* 11BB20 80131CB0 254B0001 */     addiu $t3, $t2, 1
  /* 11BB24 80131CB4 A0EB0005 */        sb $t3, 5($a3) # D_800A4D08 + 5
  .L80131CB8:
  /* 11BB28 80131CB8 A02C4E88 */        sb $t4, %lo((D_800A4D08 + 0x180))($at)
  /* 11BB2C 80131CBC 3C01800A */       lui $at, %hi((D_800A4D08 + 0x184))
  /* 11BB30 80131CC0 A02D4E8C */        sb $t5, %lo((D_800A4D08 + 0x184))($at)
  /* 11BB34 80131CC4 3C01800A */       lui $at, %hi((D_800A4D08 + 0x186))
  /* 11BB38 80131CC8 240E0003 */     addiu $t6, $zero, 3
  /* 11BB3C 80131CCC A02E4E8E */        sb $t6, %lo((D_800A4D08 + 0x186))($at)
  /* 11BB40 80131CD0 03E00008 */        jr $ra
  /* 11BB44 80131CD4 A0E00002 */        sb $zero, 2($a3) # D_800A4D08 + 2

glabel func_ovl14_80131CD8
  /* 11BB48 80131CD8 000470C0 */       sll $t6, $a0, 3
  /* 11BB4C 80131CDC 01C47023 */      subu $t6, $t6, $a0
  /* 11BB50 80131CE0 000E7080 */       sll $t6, $t6, 2
  /* 11BB54 80131CE4 01C47021 */      addu $t6, $t6, $a0
  /* 11BB58 80131CE8 3C0F800A */       lui $t7, %hi(D_800A4D08)
  /* 11BB5C 80131CEC 25EF4D08 */     addiu $t7, $t7, %lo(D_800A4D08)
  /* 11BB60 80131CF0 000E7080 */       sll $t6, $t6, 2
  /* 11BB64 80131CF4 3C08800A */       lui $t0, %hi(D_800A4D08)
  /* 11BB68 80131CF8 25084D08 */     addiu $t0, $t0, %lo(D_800A4D08)
  /* 11BB6C 80131CFC 01CF3021 */      addu $a2, $t6, $t7
  /* 11BB70 80131D00 00001825 */        or $v1, $zero, $zero
  /* 11BB74 80131D04 00001025 */        or $v0, $zero, $zero
  /* 11BB78 80131D08 24090074 */     addiu $t1, $zero, 0x74
  /* 11BB7C 80131D0C 24070004 */     addiu $a3, $zero, 4
  .L80131D10:
  /* 11BB80 80131D10 50440013 */      beql $v0, $a0, .L80131D60
  /* 11BB84 80131D14 24420001 */     addiu $v0, $v0, 1
  .L80131D18:
  /* 11BB88 80131D18 00490019 */     multu $v0, $t1
  /* 11BB8C 80131D1C 90CA0023 */       lbu $t2, 0x23($a2)
  /* 11BB90 80131D20 0000C012 */      mflo $t8
  /* 11BB94 80131D24 01182821 */      addu $a1, $t0, $t8
  /* 11BB98 80131D28 90B90023 */       lbu $t9, 0x23($a1)
  /* 11BB9C 80131D2C 572A000C */      bnel $t9, $t2, .L80131D60
  /* 11BBA0 80131D30 24420001 */     addiu $v0, $v0, 1
  /* 11BBA4 80131D34 90AB0026 */       lbu $t3, 0x26($a1)
  /* 11BBA8 80131D38 90CC0026 */       lbu $t4, 0x26($a2)
  /* 11BBAC 80131D3C 556C0008 */      bnel $t3, $t4, .L80131D60
  /* 11BBB0 80131D40 24420001 */     addiu $v0, $v0, 1
  /* 11BBB4 80131D44 90AD0027 */       lbu $t5, 0x27($a1)
  /* 11BBB8 80131D48 546D0005 */      bnel $v1, $t5, .L80131D60
  /* 11BBBC 80131D4C 24420001 */     addiu $v0, $v0, 1
  /* 11BBC0 80131D50 24630001 */     addiu $v1, $v1, 1
  /* 11BBC4 80131D54 1404FFF0 */       bne $zero, $a0, .L80131D18
  /* 11BBC8 80131D58 00001025 */        or $v0, $zero, $zero
  /* 11BBCC 80131D5C 24420001 */     addiu $v0, $v0, 1
  .L80131D60:
  /* 11BBD0 80131D60 1447FFEB */       bne $v0, $a3, .L80131D10
  /* 11BBD4 80131D64 00000000 */       nop 
  /* 11BBD8 80131D68 A0C30027 */        sb $v1, 0x27($a2)
  /* 11BBDC 80131D6C 03E00008 */        jr $ra
  /* 11BBE0 80131D70 00601025 */        or $v0, $v1, $zero

glabel func_ovl14_80131D74
  /* 11BBE4 80131D74 AFA40000 */        sw $a0, ($sp)
  /* 11BBE8 80131D78 3084FFFF */      andi $a0, $a0, 0xffff
  /* 11BBEC 80131D7C 00001025 */        or $v0, $zero, $zero
  /* 11BBF0 80131D80 00001825 */        or $v1, $zero, $zero
  /* 11BBF4 80131D84 24060010 */     addiu $a2, $zero, 0x10
  .L80131D88:
  /* 11BBF8 80131D88 308E0001 */      andi $t6, $a0, 1
  /* 11BBFC 80131D8C 11C00002 */      beqz $t6, .L80131D98
  /* 11BC00 80131D90 00802825 */        or $a1, $a0, $zero
  /* 11BC04 80131D94 24630001 */     addiu $v1, $v1, 1
  .L80131D98:
  /* 11BC08 80131D98 00052043 */       sra $a0, $a1, 1
  /* 11BC0C 80131D9C 3085FFFF */      andi $a1, $a0, 0xffff
  /* 11BC10 80131DA0 30AF0001 */      andi $t7, $a1, 1
  /* 11BC14 80131DA4 11E00002 */      beqz $t7, .L80131DB0
  /* 11BC18 80131DA8 00052043 */       sra $a0, $a1, 1
  /* 11BC1C 80131DAC 24630001 */     addiu $v1, $v1, 1
  .L80131DB0:
  /* 11BC20 80131DB0 3085FFFF */      andi $a1, $a0, 0xffff
  /* 11BC24 80131DB4 30B80001 */      andi $t8, $a1, 1
  /* 11BC28 80131DB8 13000002 */      beqz $t8, .L80131DC4
  /* 11BC2C 80131DBC 00052043 */       sra $a0, $a1, 1
  /* 11BC30 80131DC0 24630001 */     addiu $v1, $v1, 1
  .L80131DC4:
  /* 11BC34 80131DC4 3085FFFF */      andi $a1, $a0, 0xffff
  /* 11BC38 80131DC8 30B90001 */      andi $t9, $a1, 1
  /* 11BC3C 80131DCC 13200002 */      beqz $t9, .L80131DD8
  /* 11BC40 80131DD0 24420004 */     addiu $v0, $v0, 4
  /* 11BC44 80131DD4 24630001 */     addiu $v1, $v1, 1
  .L80131DD8:
  /* 11BC48 80131DD8 00052043 */       sra $a0, $a1, 1
  /* 11BC4C 80131DDC 1446FFEA */       bne $v0, $a2, .L80131D88
  /* 11BC50 80131DE0 3084FFFF */      andi $a0, $a0, 0xffff
  /* 11BC54 80131DE4 03E00008 */        jr $ra
  /* 11BC58 80131DE8 00601025 */        or $v0, $v1, $zero

glabel func_ovl14_80131DEC
  /* 11BC5C 80131DEC AFA50004 */        sw $a1, 4($sp)
  /* 11BC60 80131DF0 30A5FFFF */      andi $a1, $a1, 0xffff
  /* 11BC64 80131DF4 AFA40000 */        sw $a0, ($sp)
  /* 11BC68 80131DF8 3082FFFF */      andi $v0, $a0, 0xffff
  /* 11BC6C 80131DFC 2403FFFF */     addiu $v1, $zero, -1
  /* 11BC70 80131E00 24C60001 */     addiu $a2, $a2, 1
  /* 11BC74 80131E04 24630001 */     addiu $v1, $v1, 1
  .L80131E08:
  /* 11BC78 80131E08 240E0001 */     addiu $t6, $zero, 1
  /* 11BC7C 80131E0C 006E2004 */      sllv $a0, $t6, $v1
  /* 11BC80 80131E10 00447824 */       and $t7, $v0, $a0
  /* 11BC84 80131E14 11E00004 */      beqz $t7, .L80131E28
  /* 11BC88 80131E18 00A4C024 */       and $t8, $a1, $a0
  /* 11BC8C 80131E1C 17000002 */      bnez $t8, .L80131E28
  /* 11BC90 80131E20 00000000 */       nop 
  /* 11BC94 80131E24 24C6FFFF */     addiu $a2, $a2, -1
  .L80131E28:
  /* 11BC98 80131E28 54C0FFF7 */      bnel $a2, $zero, .L80131E08
  /* 11BC9C 80131E2C 24630001 */     addiu $v1, $v1, 1
  /* 11BCA0 80131E30 03E00008 */        jr $ra
  /* 11BCA4 80131E34 00601025 */        or $v0, $v1, $zero

glabel func_ovl14_80131E38
  /* 11BCA8 80131E38 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 11BCAC 80131E3C AFB10018 */        sw $s1, 0x18($sp)
  /* 11BCB0 80131E40 AFB00014 */        sw $s0, 0x14($sp)
  /* 11BCB4 80131E44 3C11800A */       lui $s1, %hi((gSaveData + 0x458))
  /* 11BCB8 80131E48 96314938 */       lhu $s1, %lo((gSaveData + 0x458))($s1)
  /* 11BCBC 80131E4C 3C10800A */       lui $s0, %hi(gSceneData)
  /* 11BCC0 80131E50 26104AD0 */     addiu $s0, $s0, %lo(gSceneData)
  /* 11BCC4 80131E54 960E000A */       lhu $t6, 0xa($s0) # gSceneData + 10
  /* 11BCC8 80131E58 3631036F */       ori $s1, $s1, 0x36f
  /* 11BCCC 80131E5C 3231FFFF */      andi $s1, $s1, 0xffff
  /* 11BCD0 80131E60 15D10002 */       bne $t6, $s1, .L80131E6C
  /* 11BCD4 80131E64 AFBF001C */        sw $ra, 0x1c($sp)
  /* 11BCD8 80131E68 A600000A */        sh $zero, 0xa($s0) # gSceneData + 10
  .L80131E6C:
  /* 11BCDC 80131E6C 0C04C75D */       jal func_ovl14_80131D74
  /* 11BCE0 80131E70 3224FFFF */      andi $a0, $s1, 0xffff
  /* 11BCE4 80131E74 AFA20024 */        sw $v0, 0x24($sp)
  /* 11BCE8 80131E78 0C04C75D */       jal func_ovl14_80131D74
  /* 11BCEC 80131E7C 9604000A */       lhu $a0, 0xa($s0) # gSceneData + 10
  /* 11BCF0 80131E80 8FAF0024 */        lw $t7, 0x24($sp)
  /* 11BCF4 80131E84 0C006265 */       jal lbRandom_GetIntRange
  /* 11BCF8 80131E88 01E22023 */      subu $a0, $t7, $v0
  /* 11BCFC 80131E8C 3224FFFF */      andi $a0, $s1, 0xffff
  /* 11BD00 80131E90 9605000A */       lhu $a1, 0xa($s0) # gSceneData + 10
  /* 11BD04 80131E94 0C04C77B */       jal func_ovl14_80131DEC
  /* 11BD08 80131E98 00403025 */        or $a2, $v0, $zero
  /* 11BD0C 80131E9C 9603000A */       lhu $v1, 0xa($s0) # gSceneData + 10
  /* 11BD10 80131EA0 A202000D */        sb $v0, 0xd($s0) # gSceneData + 13
  /* 11BD14 80131EA4 54600003 */      bnel $v1, $zero, .L80131EB4
  /* 11BD18 80131EA8 9219000D */       lbu $t9, 0xd($s0) # gSceneData + 13
  /* 11BD1C 80131EAC A202000C */        sb $v0, 0xc($s0) # gSceneData + 12
  /* 11BD20 80131EB0 9219000D */       lbu $t9, 0xd($s0) # gSceneData + 13
  .L80131EB4:
  /* 11BD24 80131EB4 24080001 */     addiu $t0, $zero, 1
  /* 11BD28 80131EB8 3224FFFF */      andi $a0, $s1, 0xffff
  /* 11BD2C 80131EBC 03284804 */      sllv $t1, $t0, $t9
  /* 11BD30 80131EC0 00695025 */        or $t2, $v1, $t1
  /* 11BD34 80131EC4 0C04C75D */       jal func_ovl14_80131D74
  /* 11BD38 80131EC8 A60A000A */        sh $t2, 0xa($s0) # gSceneData + 10
  /* 11BD3C 80131ECC AFA20024 */        sw $v0, 0x24($sp)
  /* 11BD40 80131ED0 0C04C75D */       jal func_ovl14_80131D74
  /* 11BD44 80131ED4 9604000A */       lhu $a0, 0xa($s0) # gSceneData + 10
  /* 11BD48 80131ED8 8FAB0024 */        lw $t3, 0x24($sp)
  /* 11BD4C 80131EDC 01622023 */      subu $a0, $t3, $v0
  /* 11BD50 80131EE0 14800004 */      bnez $a0, .L80131EF4
  /* 11BD54 80131EE4 00000000 */       nop 
  /* 11BD58 80131EE8 920C000C */       lbu $t4, 0xc($s0) # gSceneData + 12
  /* 11BD5C 80131EEC 1000000E */         b .L80131F28
  /* 11BD60 80131EF0 A20C000E */        sb $t4, 0xe($s0) # gSceneData + 14
  .L80131EF4:
  /* 11BD64 80131EF4 0C006265 */       jal lbRandom_GetIntRange
  /* 11BD68 80131EF8 00000000 */       nop 
  /* 11BD6C 80131EFC 3224FFFF */      andi $a0, $s1, 0xffff
  /* 11BD70 80131F00 9605000A */       lhu $a1, 0xa($s0) # gSceneData + 10
  /* 11BD74 80131F04 0C04C77B */       jal func_ovl14_80131DEC
  /* 11BD78 80131F08 00403025 */        or $a2, $v0, $zero
  /* 11BD7C 80131F0C 960D000A */       lhu $t5, 0xa($s0) # gSceneData + 10
  /* 11BD80 80131F10 304E00FF */      andi $t6, $v0, 0xff
  /* 11BD84 80131F14 240F0001 */     addiu $t7, $zero, 1
  /* 11BD88 80131F18 01CFC004 */      sllv $t8, $t7, $t6
  /* 11BD8C 80131F1C 01B84025 */        or $t0, $t5, $t8
  /* 11BD90 80131F20 A202000E */        sb $v0, 0xe($s0) # gSceneData + 14
  /* 11BD94 80131F24 A608000A */        sh $t0, 0xa($s0) # gSceneData + 10
  .L80131F28:
  /* 11BD98 80131F28 8FBF001C */        lw $ra, 0x1c($sp)
  /* 11BD9C 80131F2C 8FB00014 */        lw $s0, 0x14($sp)
  /* 11BDA0 80131F30 8FB10018 */        lw $s1, 0x18($sp)
  /* 11BDA4 80131F34 03E00008 */        jr $ra
  /* 11BDA8 80131F38 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl14_80131F3C
  /* 11BDAC 80131F3C 27BDFF68 */     addiu $sp, $sp, -0x98
  /* 11BDB0 80131F40 3C0E8004 */       lui $t6, %hi(D_80045470 + 2)
  /* 11BDB4 80131F44 95CE5472 */       lhu $t6, %lo(D_80045470 + 2)($t6)
  /* 11BDB8 80131F48 AFBF0034 */        sw $ra, 0x34($sp)
  /* 11BDBC 80131F4C AFB40030 */        sw $s4, 0x30($sp)
  /* 11BDC0 80131F50 31CF1000 */      andi $t7, $t6, 0x1000
  /* 11BDC4 80131F54 AFB3002C */        sw $s3, 0x2c($sp)
  /* 11BDC8 80131F58 AFB20028 */        sw $s2, 0x28($sp)
  /* 11BDCC 80131F5C AFB10024 */        sw $s1, 0x24($sp)
  /* 11BDD0 80131F60 AFB00020 */        sw $s0, 0x20($sp)
  /* 11BDD4 80131F64 11E00010 */      beqz $t7, .L80131FA8
  /* 11BDD8 80131F68 AFA40098 */        sw $a0, 0x98($sp)
  /* 11BDDC 80131F6C 3C188037 */       lui $t8, %hi(D_ovl9_80371420)
  /* 11BDE0 80131F70 8F181420 */        lw $t8, %lo(D_ovl9_80371420)($t8)
  /* 11BDE4 80131F74 2404001E */     addiu $a0, $zero, 0x1e
  /* 11BDE8 80131F78 24050014 */     addiu $a1, $zero, 0x14
  /* 11BDEC 80131F7C 13000005 */      beqz $t8, .L80131F94
  /* 11BDF0 80131F80 24060055 */     addiu $a2, $zero, 0x55
  /* 11BDF4 80131F84 0C04C6D6 */       jal func_ovl14_80131B58
  /* 11BDF8 80131F88 00000000 */       nop 
  /* 11BDFC 80131F8C 10000006 */         b .L80131FA8
  /* 11BE00 80131F90 00000000 */       nop 
  .L80131F94:
  /* 11BE04 80131F94 3C078013 */       lui $a3, %hi(D_ovl14_80132780)
  /* 11BE08 80131F98 2419000F */     addiu $t9, $zero, 0xf
  /* 11BE0C 80131F9C AFB90010 */        sw $t9, 0x10($sp)
  /* 11BE10 80131FA0 0C0DA75E */       jal func_ovl9_80369D78
  /* 11BE14 80131FA4 24E72780 */     addiu $a3, $a3, %lo(D_ovl14_80132780)
  .L80131FA8:
  /* 11BE18 80131FA8 3C10800A */       lui $s0, %hi(D_800A4D08)
  /* 11BE1C 80131FAC 3C118013 */       lui $s1, %hi(D_ovl14_80133110)
  /* 11BE20 80131FB0 26313110 */     addiu $s1, $s1, %lo(D_ovl14_80133110)
  /* 11BE24 80131FB4 26104D08 */     addiu $s0, $s0, %lo(D_800A4D08)
  /* 11BE28 80131FB8 00009025 */        or $s2, $zero, $zero
  /* 11BE2C 80131FBC 27B40048 */     addiu $s4, $sp, 0x48
  .L80131FC0:
  /* 11BE30 80131FC0 92080023 */       lbu $t0, 0x23($s0) # D_800A4D08 + 35
  /* 11BE34 80131FC4 92290000 */       lbu $t1, ($s1) # D_ovl14_80133110 + 0
  /* 11BE38 80131FC8 3C0A8011 */       lui $t2, %hi(D_ovl2_80116DD0)
  /* 11BE3C 80131FCC 254A6DD0 */     addiu $t2, $t2, %lo(D_ovl2_80116DD0)
  /* 11BE40 80131FD0 11090031 */       beq $t0, $t1, .L80132098
  /* 11BE44 80131FD4 02806825 */        or $t5, $s4, $zero
  /* 11BE48 80131FD8 254E003C */     addiu $t6, $t2, 0x3c
  .L80131FDC:
  /* 11BE4C 80131FDC 8D4C0000 */        lw $t4, ($t2) # D_ovl2_80116DD0 + 0
  /* 11BE50 80131FE0 254A000C */     addiu $t2, $t2, 0xc
  /* 11BE54 80131FE4 25AD000C */     addiu $t5, $t5, 0xc
  /* 11BE58 80131FE8 ADACFFF4 */        sw $t4, -0xc($t5)
  /* 11BE5C 80131FEC 8D4BFFF8 */        lw $t3, -8($t2) # D_ovl2_80116DD0 + -8
  /* 11BE60 80131FF0 ADABFFF8 */        sw $t3, -8($t5)
  /* 11BE64 80131FF4 8D4CFFFC */        lw $t4, -4($t2) # D_ovl2_80116DD0 + -4
  /* 11BE68 80131FF8 154EFFF8 */       bne $t2, $t6, .L80131FDC
  /* 11BE6C 80131FFC ADACFFFC */        sw $t4, -4($t5)
  /* 11BE70 80132000 8D4C0000 */        lw $t4, ($t2) # D_ovl2_80116DD0 + 0
  /* 11BE74 80132004 ADAC0000 */        sw $t4, ($t5)
  /* 11BE78 80132008 8E240004 */        lw $a0, 4($s1) # D_ovl14_80133110 + 4
  /* 11BE7C 8013200C 8C820084 */        lw $v0, 0x84($a0)
  /* 11BE80 80132010 0C035E3A */       jal func_ovl2_800D78E8
  /* 11BE84 80132014 8C5309D0 */        lw $s3, 0x9d0($v0)
  /* 11BE88 80132018 44922000 */      mtc1 $s2, $f4
  /* 11BE8C 8013201C 3C0143C8 */       lui $at, (0x43C80000 >> 16) # 400.0
  /* 11BE90 80132020 44814000 */      mtc1 $at, $f8 # 400.0 to cop1
  /* 11BE94 80132024 468021A0 */   cvt.s.w $f6, $f4
  /* 11BE98 80132028 3C014416 */       lui $at, (0x44160000 >> 16) # 600.0
  /* 11BE9C 8013202C 44818000 */      mtc1 $at, $f16 # 600.0 to cop1
  /* 11BEA0 80132030 92040023 */       lbu $a0, 0x23($s0) # D_800A4D08 + 35
  /* 11BEA4 80132034 46083282 */     mul.s $f10, $f6, $f8
  /* 11BEA8 80132038 AFA40048 */        sw $a0, 0x48($sp)
  /* 11BEAC 8013203C 46105481 */     sub.s $f18, $f10, $f16
  /* 11BEB0 80132040 0C03B047 */       jal func_ovl2_800EC11C
  /* 11BEB4 80132044 E7B2004C */      swc1 $f18, 0x4c($sp)
  /* 11BEB8 80132048 92030026 */       lbu $v1, 0x26($s0) # D_800A4D08 + 38
  /* 11BEBC 8013204C 0043082A */       slt $at, $v0, $v1
  /* 11BEC0 80132050 50200006 */      beql $at, $zero, .L8013206C
  /* 11BEC4 80132054 A3A3005F */        sb $v1, 0x5f($sp)
  /* 11BEC8 80132058 0C03B047 */       jal func_ovl2_800EC11C
  /* 11BECC 8013205C 92040023 */       lbu $a0, 0x23($s0) # D_800A4D08 + 35
  /* 11BED0 80132060 A2020026 */        sb $v0, 0x26($s0) # D_800A4D08 + 38
  /* 11BED4 80132064 304300FF */      andi $v1, $v0, 0xff
  /* 11BED8 80132068 A3A3005F */        sb $v1, 0x5f($sp)
  .L8013206C:
  /* 11BEDC 8013206C 0C04C736 */       jal func_ovl14_80131CD8
  /* 11BEE0 80132070 02402025 */        or $a0, $s2, $zero
  /* 11BEE4 80132074 A3A20060 */        sb $v0, 0x60($sp)
  /* 11BEE8 80132078 AFB30080 */        sw $s3, 0x80($sp)
  /* 11BEEC 8013207C 0C035FCF */       jal ftManager_CreateFighter
  /* 11BEF0 80132080 02802025 */        or $a0, $s4, $zero
  /* 11BEF4 80132084 920F0023 */       lbu $t7, 0x23($s0) # D_800A4D08 + 35
  /* 11BEF8 80132088 92180026 */       lbu $t8, 0x26($s0) # D_800A4D08 + 38
  /* 11BEFC 8013208C AE220004 */        sw $v0, 4($s1) # D_ovl14_80133110 + 4
  /* 11BF00 80132090 A22F0000 */        sb $t7, ($s1) # D_ovl14_80133110 + 0
  /* 11BF04 80132094 A2380001 */        sb $t8, 1($s1) # D_ovl14_80133110 + 1
  .L80132098:
  /* 11BF08 80132098 92190026 */       lbu $t9, 0x26($s0) # D_800A4D08 + 38
  /* 11BF0C 8013209C 92280001 */       lbu $t0, 1($s1) # D_ovl14_80133110 + 1
  /* 11BF10 801320A0 5328000A */      beql $t9, $t0, .L801320CC
  /* 11BF14 801320A4 26520001 */     addiu $s2, $s2, 1
  /* 11BF18 801320A8 0C04C736 */       jal func_ovl14_80131CD8
  /* 11BF1C 801320AC 02402025 */        or $a0, $s2, $zero
  /* 11BF20 801320B0 8E240004 */        lw $a0, 4($s1) # D_ovl14_80133110 + 4
  /* 11BF24 801320B4 92050026 */       lbu $a1, 0x26($s0) # D_800A4D08 + 38
  /* 11BF28 801320B8 0C03A492 */       jal func_ovl2_800E9248
  /* 11BF2C 801320BC 92060027 */       lbu $a2, 0x27($s0) # D_800A4D08 + 39
  /* 11BF30 801320C0 92090026 */       lbu $t1, 0x26($s0) # D_800A4D08 + 38
  /* 11BF34 801320C4 A2290001 */        sb $t1, 1($s1) # D_ovl14_80133110 + 1
  /* 11BF38 801320C8 26520001 */     addiu $s2, $s2, 1
  .L801320CC:
  /* 11BF3C 801320CC 24010004 */     addiu $at, $zero, 4
  /* 11BF40 801320D0 26100074 */     addiu $s0, $s0, 0x74
  /* 11BF44 801320D4 1641FFBA */       bne $s2, $at, .L80131FC0
  /* 11BF48 801320D8 26310008 */     addiu $s1, $s1, 8
  /* 11BF4C 801320DC 3C028004 */       lui $v0, %hi(D_80045470 + 2)
  /* 11BF50 801320E0 94425472 */       lhu $v0, %lo(D_80045470 + 2)($v0)
  /* 11BF54 801320E4 3C108013 */       lui $s0, %hi(D_ovl14_80132698)
  /* 11BF58 801320E8 26102698 */     addiu $s0, $s0, %lo(D_ovl14_80132698)
  /* 11BF5C 801320EC 304E0008 */      andi $t6, $v0, 8
  /* 11BF60 801320F0 11C00009 */      beqz $t6, .L80132118
  /* 11BF64 801320F4 00000000 */       nop 
  /* 11BF68 801320F8 8E050000 */        lw $a1, ($s0) # D_ovl14_80132698 + 0
  /* 11BF6C 801320FC 3C048013 */       lui $a0, %hi(D_ovl14_8013311C)
  /* 11BF70 80132100 8C84311C */        lw $a0, %lo(D_ovl14_8013311C)($a0)
  /* 11BF74 80132104 24AA0001 */     addiu $t2, $a1, 1
  /* 11BF78 80132108 0C0E4173 */       jal func_ovl1_803905CC
  /* 11BF7C 8013210C AE0A0000 */        sw $t2, ($s0) # D_ovl14_80132698 + 0
  /* 11BF80 80132110 3C028004 */       lui $v0, %hi(D_80045470 + 2)
  /* 11BF84 80132114 94425472 */       lhu $v0, %lo(D_80045470 + 2)($v0)
  .L80132118:
  /* 11BF88 80132118 3C108013 */       lui $s0, %hi(D_ovl14_80132698)
  /* 11BF8C 8013211C 304D0004 */      andi $t5, $v0, 4
  /* 11BF90 80132120 11A00007 */      beqz $t5, .L80132140
  /* 11BF94 80132124 26102698 */     addiu $s0, $s0, %lo(D_ovl14_80132698)
  /* 11BF98 80132128 8E050000 */        lw $a1, ($s0) # D_ovl14_80132698 + 0
  /* 11BF9C 8013212C 3C048013 */       lui $a0, %hi(D_ovl14_8013311C)
  /* 11BFA0 80132130 8C84311C */        lw $a0, %lo(D_ovl14_8013311C)($a0)
  /* 11BFA4 80132134 24ABFFFF */     addiu $t3, $a1, -1
  /* 11BFA8 80132138 0C0E4173 */       jal func_ovl1_803905CC
  /* 11BFAC 8013213C AE0B0000 */        sw $t3, ($s0) # D_ovl14_80132698 + 0
  .L80132140:
  /* 11BFB0 80132140 3C0C8013 */       lui $t4, %hi(D_ovl14_80132690)
  /* 11BFB4 80132144 8D8C2690 */        lw $t4, %lo(D_ovl14_80132690)($t4)
  /* 11BFB8 80132148 51800034 */      beql $t4, $zero, .L8013221C
  /* 11BFBC 8013214C 8FBF0034 */        lw $ra, 0x34($sp)
  /* 11BFC0 80132150 0C0DA7B0 */       jal func_ovl9_80369EC0
  /* 11BFC4 80132154 00000000 */       nop 
  /* 11BFC8 80132158 3C10800A */       lui $s0, %hi(gSceneData)
  /* 11BFCC 8013215C 26104AD0 */     addiu $s0, $s0, %lo(gSceneData)
  /* 11BFD0 80132160 920F0000 */       lbu $t7, ($s0) # gSceneData + 0
  /* 11BFD4 80132164 3C188013 */       lui $t8, %hi(D_ovl14_80132694)
  /* 11BFD8 80132168 A20F0001 */        sb $t7, 1($s0) # gSceneData + 1
  /* 11BFDC 8013216C 93182694 */       lbu $t8, %lo(D_ovl14_80132694)($t8)
  /* 11BFE0 80132170 2F010006 */     sltiu $at, $t8, 6
  /* 11BFE4 80132174 10200026 */      beqz $at, .L80132210
  /* 11BFE8 80132178 0018C080 */       sll $t8, $t8, 2
  /* 11BFEC 8013217C 3C018013 */       lui $at, %hi(jtbl_ovl14_80132C04)
  /* 11BFF0 80132180 00380821 */      addu $at, $at, $t8
  /* 11BFF4 80132184 8C382C04 */        lw $t8, %lo(jtbl_ovl14_80132C04)($at)
  /* 11BFF8 80132188 03000008 */        jr $t8
  /* 11BFFC 8013218C 00000000 */       nop 
  glabel jtgt_ovl14_80132190
  /* 11C000 80132190 24190002 */     addiu $t9, $zero, 2
  /* 11C004 80132194 1000001E */         b .L80132210
  /* 11C008 80132198 A2190000 */        sb $t9, ($s0) # gSceneData + 0
  glabel jtgt_ovl14_8013219C
  /* 11C00C 8013219C 3C02800A */       lui $v0, %hi(D_800A4D08)
  /* 11C010 801321A0 24424D08 */     addiu $v0, $v0, %lo(D_800A4D08)
  /* 11C014 801321A4 90490023 */       lbu $t1, 0x23($v0) # D_800A4D08 + 35
  /* 11C018 801321A8 904E0026 */       lbu $t6, 0x26($v0) # D_800A4D08 + 38
  /* 11C01C 801321AC 24080034 */     addiu $t0, $zero, 0x34
  /* 11C020 801321B0 A2080000 */        sb $t0, ($s0) # gSceneData + 0
  /* 11C024 801321B4 A2000013 */        sb $zero, 0x13($s0) # gSceneData + 19
  /* 11C028 801321B8 A2090014 */        sb $t1, 0x14($s0) # gSceneData + 20
  /* 11C02C 801321BC 10000014 */         b .L80132210
  /* 11C030 801321C0 A20E0015 */        sb $t6, 0x15($s0) # gSceneData + 21
  glabel jtgt_ovl14_801321C4
  /* 11C034 801321C4 240A0038 */     addiu $t2, $zero, 0x38
  /* 11C038 801321C8 10000011 */         b .L80132210
  /* 11C03C 801321CC A20A0000 */        sb $t2, ($s0) # gSceneData + 0
  glabel jtgt_ovl14_801321D0
  /* 11C040 801321D0 3C02800A */       lui $v0, %hi(D_800A4D08)
  /* 11C044 801321D4 24424D08 */     addiu $v0, $v0, %lo(D_800A4D08)
  /* 11C048 801321D8 240D003C */     addiu $t5, $zero, 0x3c
  /* 11C04C 801321DC A20D0000 */        sb $t5, ($s0) # gSceneData + 0
  /* 11C050 801321E0 1000000B */         b .L80132210
  /* 11C054 801321E4 A0400002 */        sb $zero, 2($v0) # D_800A4D08 + 2
  glabel jtgt_ovl14_801321E8
  /* 11C058 801321E8 0C04C78E */       jal func_ovl14_80131E38
  /* 11C05C 801321EC 00000000 */       nop 
  /* 11C060 801321F0 3C02800A */       lui $v0, %hi(D_800A4D08)
  /* 11C064 801321F4 24424D08 */     addiu $v0, $v0, %lo(D_800A4D08)
  /* 11C068 801321F8 240B003D */     addiu $t3, $zero, 0x3d
  /* 11C06C 801321FC A20B0000 */        sb $t3, ($s0) # gSceneData + 0
  /* 11C070 80132200 10000003 */         b .L80132210
  /* 11C074 80132204 A0400002 */        sb $zero, 2($v0) # D_800A4D08 + 2
  glabel jtgt_ovl14_80132208
  /* 11C078 80132208 240C0037 */     addiu $t4, $zero, 0x37
  /* 11C07C 8013220C A20C0000 */        sb $t4, ($s0) # gSceneData + 0
  .L80132210:
  /* 11C080 80132210 0C00171D */       jal func_80005C74
  /* 11C084 80132214 00000000 */       nop 
  /* 11C088 80132218 8FBF0034 */        lw $ra, 0x34($sp)
  .L8013221C:
  /* 11C08C 8013221C 8FB00020 */        lw $s0, 0x20($sp)
  /* 11C090 80132220 8FB10024 */        lw $s1, 0x24($sp)
  /* 11C094 80132224 8FB20028 */        lw $s2, 0x28($sp)
  /* 11C098 80132228 8FB3002C */        lw $s3, 0x2c($sp)
  /* 11C09C 8013222C 8FB40030 */        lw $s4, 0x30($sp)
  /* 11C0A0 80132230 03E00008 */        jr $ra
  /* 11C0A4 80132234 27BD0098 */     addiu $sp, $sp, 0x98

glabel func_ovl14_80132238
  /* 11C0A8 80132238 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11C0AC 8013223C AFB30020 */        sw $s3, 0x20($sp)
  /* 11C0B0 80132240 AFB10018 */        sw $s1, 0x18($sp)
  /* 11C0B4 80132244 AFB00014 */        sw $s0, 0x14($sp)
  /* 11C0B8 80132248 AFB2001C */        sw $s2, 0x1c($sp)
  /* 11C0BC 8013224C 3C10800A */       lui $s0, %hi(D_800A4D08)
  /* 11C0C0 80132250 3C118013 */       lui $s1, %hi(D_ovl14_80133110)
  /* 11C0C4 80132254 3C138013 */       lui $s3, %hi(D_NF_80133130)
  /* 11C0C8 80132258 AFBF0024 */        sw $ra, 0x24($sp)
  /* 11C0CC 8013225C AFA40028 */        sw $a0, 0x28($sp)
  /* 11C0D0 80132260 26733130 */     addiu $s3, $s3, %lo(D_NF_80133130)
  /* 11C0D4 80132264 26313110 */     addiu $s1, $s1, %lo(D_ovl14_80133110)
  /* 11C0D8 80132268 26104D08 */     addiu $s0, $s0, %lo(D_800A4D08)
  /* 11C0DC 8013226C 2412000A */     addiu $s2, $zero, 0xa
  .L80132270:
  /* 11C0E0 80132270 92020026 */       lbu $v0, 0x26($s0) # D_800A4D08 + 38
  /* 11C0E4 80132274 922E0001 */       lbu $t6, 1($s1) # D_ovl14_80133110 + 1
  /* 11C0E8 80132278 504E000F */      beql $v0, $t6, .L801322B8
  /* 11C0EC 8013227C 26310008 */     addiu $s1, $s1, 8
  /* 11C0F0 80132280 16420005 */       bne $s2, $v0, .L80132298
  /* 11C0F4 80132284 00000000 */       nop 
  /* 11C0F8 80132288 0C03B047 */       jal func_ovl2_800EC11C
  /* 11C0FC 8013228C 92040023 */       lbu $a0, 0x23($s0) # D_800A4D08 + 35
  /* 11C100 80132290 10000008 */         b .L801322B4
  /* 11C104 80132294 A2020026 */        sb $v0, 0x26($s0) # D_800A4D08 + 38
  .L80132298:
  /* 11C108 80132298 0C03B047 */       jal func_ovl2_800EC11C
  /* 11C10C 8013229C 92040023 */       lbu $a0, 0x23($s0) # D_800A4D08 + 35
  /* 11C110 801322A0 920F0026 */       lbu $t7, 0x26($s0) # D_800A4D08 + 38
  /* 11C114 801322A4 004F082A */       slt $at, $v0, $t7
  /* 11C118 801322A8 50200003 */      beql $at, $zero, .L801322B8
  /* 11C11C 801322AC 26310008 */     addiu $s1, $s1, 8
  /* 11C120 801322B0 A2000026 */        sb $zero, 0x26($s0) # D_800A4D08 + 38
  .L801322B4:
  /* 11C124 801322B4 26310008 */     addiu $s1, $s1, 8
  .L801322B8:
  /* 11C128 801322B8 1633FFED */       bne $s1, $s3, .L80132270
  /* 11C12C 801322BC 26100074 */     addiu $s0, $s0, 0x74
  /* 11C130 801322C0 8FBF0024 */        lw $ra, 0x24($sp)
  /* 11C134 801322C4 8FB00014 */        lw $s0, 0x14($sp)
  /* 11C138 801322C8 8FB10018 */        lw $s1, 0x18($sp)
  /* 11C13C 801322CC 8FB2001C */        lw $s2, 0x1c($sp)
  /* 11C140 801322D0 8FB30020 */        lw $s3, 0x20($sp)
  /* 11C144 801322D4 03E00008 */        jr $ra
  /* 11C148 801322D8 27BD0028 */     addiu $sp, $sp, 0x28

glabel func_ovl14_801322DC
  /* 11C14C 801322DC 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 11C150 801322E0 AFA40040 */        sw $a0, 0x40($sp)
  /* 11C154 801322E4 8FAA0040 */        lw $t2, 0x40($sp)
  /* 11C158 801322E8 3C0E8001 */       lui $t6, %hi(func_80017DBC)
  /* 11C15C 801322EC 3C190004 */       lui $t9, (0x48600 >> 16) # 296448
  /* 11C160 801322F0 AFBF003C */        sw $ra, 0x3c($sp)
  /* 11C164 801322F4 37398600 */       ori $t9, $t9, (0x48600 & 0xFFFF) # 296448
  /* 11C168 801322F8 25CE7DBC */     addiu $t6, $t6, %lo(func_80017DBC)
  /* 11C16C 801322FC 3C058001 */       lui $a1, %hi(func_8000B1C4)
  /* 11C170 80132300 240F0032 */     addiu $t7, $zero, 0x32
  /* 11C174 80132304 24180000 */     addiu $t8, $zero, 0
  /* 11C178 80132308 2408FFFF */     addiu $t0, $zero, -1
  /* 11C17C 8013230C 24090001 */     addiu $t1, $zero, 1
  /* 11C180 80132310 240B0001 */     addiu $t3, $zero, 1
  /* 11C184 80132314 AFAB0030 */        sw $t3, 0x30($sp)
  /* 11C188 80132318 AFA90024 */        sw $t1, 0x24($sp)
  /* 11C18C 8013231C AFA80020 */        sw $t0, 0x20($sp)
  /* 11C190 80132320 AFB80018 */        sw $t8, 0x18($sp)
  /* 11C194 80132324 AFAF0014 */        sw $t7, 0x14($sp)
  /* 11C198 80132328 24A5B1C4 */     addiu $a1, $a1, %lo(func_8000B1C4)
  /* 11C19C 8013232C AFAE0010 */        sw $t6, 0x10($sp)
  /* 11C1A0 80132330 AFB9001C */        sw $t9, 0x1c($sp)
  /* 11C1A4 80132334 24040400 */     addiu $a0, $zero, 0x400
  /* 11C1A8 80132338 AFA00028 */        sw $zero, 0x28($sp)
  /* 11C1AC 8013233C AFA00034 */        sw $zero, 0x34($sp)
  /* 11C1B0 80132340 2406000F */     addiu $a2, $zero, 0xf
  /* 11C1B4 80132344 3C078000 */       lui $a3, 0x8000
  /* 11C1B8 80132348 0C002E4F */       jal func_8000B93C
  /* 11C1BC 8013234C AFAA002C */        sw $t2, 0x2c($sp)
  /* 11C1C0 80132350 14400003 */      bnez $v0, .L80132360
  /* 11C1C4 80132354 00402025 */        or $a0, $v0, $zero
  /* 11C1C8 80132358 1000000C */         b .L8013238C
  /* 11C1CC 8013235C 00001025 */        or $v0, $zero, $zero
  .L80132360:
  /* 11C1D0 80132360 8C830074 */        lw $v1, 0x74($a0)
  /* 11C1D4 80132364 3C014416 */       lui $at, (0x44160000 >> 16) # 600.0
  /* 11C1D8 80132368 44810000 */      mtc1 $at, $f0 # 600.0 to cop1
  /* 11C1DC 8013236C 240C0005 */     addiu $t4, $zero, 5
  /* 11C1E0 80132370 3C018013 */       lui $at, %hi(D_ovl14_80132C1C)
  /* 11C1E4 80132374 AC6C0080 */        sw $t4, 0x80($v1)
  /* 11C1E8 80132378 E460004C */      swc1 $f0, 0x4c($v1)
  /* 11C1EC 8013237C C4242C1C */      lwc1 $f4, %lo(D_ovl14_80132C1C)($at)
  /* 11C1F0 80132380 00801025 */        or $v0, $a0, $zero
  /* 11C1F4 80132384 E4600040 */      swc1 $f0, 0x40($v1)
  /* 11C1F8 80132388 E4640044 */      swc1 $f4, 0x44($v1)
  .L8013238C:
  /* 11C1FC 8013238C 8FBF003C */        lw $ra, 0x3c($sp)
  /* 11C200 80132390 27BD0040 */     addiu $sp, $sp, 0x40
  /* 11C204 80132394 03E00008 */        jr $ra
  /* 11C208 80132398 00000000 */       nop 

glabel func_ovl14_8013239C
  /* 11C20C 8013239C 27BDFF40 */     addiu $sp, $sp, -0xc0
  /* 11C210 801323A0 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 11C214 801323A4 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 11C218 801323A8 3C188013 */       lui $t8, %hi(D_ovl14_80132C28)
  /* 11C21C 801323AC 3C088013 */       lui $t0, %hi(D_ovl14_801330D8)
  /* 11C220 801323B0 AFBF004C */        sw $ra, 0x4c($sp)
  /* 11C224 801323B4 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 11C228 801323B8 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 11C22C 801323BC 27182C28 */     addiu $t8, $t8, %lo(D_ovl14_80132C28)
  /* 11C230 801323C0 24190096 */     addiu $t9, $zero, 0x96
  /* 11C234 801323C4 250830D8 */     addiu $t0, $t0, %lo(D_ovl14_801330D8)
  /* 11C238 801323C8 24090007 */     addiu $t1, $zero, 7
  /* 11C23C 801323CC AFB60048 */        sw $s6, 0x48($sp)
  /* 11C240 801323D0 AFB50044 */        sw $s5, 0x44($sp)
  /* 11C244 801323D4 AFB40040 */        sw $s4, 0x40($sp)
  /* 11C248 801323D8 AFB3003C */        sw $s3, 0x3c($sp)
  /* 11C24C 801323DC AFB20038 */        sw $s2, 0x38($sp)
  /* 11C250 801323E0 AFB10034 */        sw $s1, 0x34($sp)
  /* 11C254 801323E4 AFB00030 */        sw $s0, 0x30($sp)
  /* 11C258 801323E8 F7B60028 */      sdc1 $f22, 0x28($sp)
  /* 11C25C 801323EC F7B40020 */      sdc1 $f20, 0x20($sp)
  /* 11C260 801323F0 AFAE009C */        sw $t6, 0x9c($sp)
  /* 11C264 801323F4 AFAF00A0 */        sw $t7, 0xa0($sp)
  /* 11C268 801323F8 AFA000A4 */        sw $zero, 0xa4($sp)
  /* 11C26C 801323FC AFA000A8 */        sw $zero, 0xa8($sp)
  /* 11C270 80132400 AFB800AC */        sw $t8, 0xac($sp)
  /* 11C274 80132404 AFB900B0 */        sw $t9, 0xb0($sp)
  /* 11C278 80132408 AFA800B4 */        sw $t0, 0xb4($sp)
  /* 11C27C 8013240C AFA900B8 */        sw $t1, 0xb8($sp)
  /* 11C280 80132410 0C0337DE */       jal rldm_initialize
  /* 11C284 80132414 27A4009C */     addiu $a0, $sp, 0x9c
  /* 11C288 80132418 3C108000 */       lui $s0, %hi(D_NF_80000001)
  /* 11C28C 8013241C 3C058013 */       lui $a1, %hi(func_ovl14_80131F3C)
  /* 11C290 80132420 24A51F3C */     addiu $a1, $a1, %lo(func_ovl14_80131F3C)
  /* 11C294 80132424 02003825 */        or $a3, $s0, $zero
  /* 11C298 80132428 00002025 */        or $a0, $zero, $zero
  /* 11C29C 8013242C 0C00265A */       jal omMakeGObjCommon
  /* 11C2A0 80132430 2406000F */     addiu $a2, $zero, 0xf
  /* 11C2A4 80132434 3C058013 */       lui $a1, %hi(func_ovl14_80132238)
  /* 11C2A8 80132438 24A52238 */     addiu $a1, $a1, %lo(func_ovl14_80132238)
  /* 11C2AC 8013243C 00402025 */        or $a0, $v0, $zero
  /* 11C2B0 80132440 24060001 */     addiu $a2, $zero, 1
  /* 11C2B4 80132444 0C002062 */       jal omAddGObjCommonProc
  /* 11C2B8 80132448 00003825 */        or $a3, $zero, $zero
  /* 11C2BC 8013244C 240A00FF */     addiu $t2, $zero, 0xff
  /* 11C2C0 80132450 AFAA0010 */        sw $t2, 0x10($sp)
  /* 11C2C4 80132454 2404000F */     addiu $a0, $zero, 0xf
  /* 11C2C8 80132458 02002825 */        or $a1, $s0, $zero
  /* 11C2CC 8013245C 24060064 */     addiu $a2, $zero, 0x64
  /* 11C2D0 80132460 0C002E7F */       jal func_8000B9FC
  /* 11C2D4 80132464 24070002 */     addiu $a3, $zero, 2
  /* 11C2D8 80132468 0C045624 */       jal func_ovl2_80115890
  /* 11C2DC 8013246C 00000000 */       nop 
  /* 11C2E0 80132470 0C04C8B7 */       jal func_ovl14_801322DC
  /* 11C2E4 80132474 00002025 */        or $a0, $zero, $zero
  /* 11C2E8 80132478 0C03F4C0 */       jal efManager_AllocUserData
  /* 11C2EC 8013247C 00000000 */       nop 
  /* 11C2F0 80132480 24040003 */     addiu $a0, $zero, 3
  /* 11C2F4 80132484 0C035C65 */       jal func_ovl2_800D7194
  /* 11C2F8 80132488 24050004 */     addiu $a1, $zero, 4
  /* 11C2FC 8013248C 00008025 */        or $s0, $zero, $zero
  .L80132490:
  /* 11C300 80132490 0C035E1B */       jal func_ovl2_800D786C
  /* 11C304 80132494 02002025 */        or $a0, $s0, $zero
  /* 11C308 80132498 26100001 */     addiu $s0, $s0, %lo(D_NF_80000001)
  /* 11C30C 8013249C 2A01001B */      slti $at, $s0, 0x1b
  /* 11C310 801324A0 1420FFFB */      bnez $at, .L80132490
  /* 11C314 801324A4 00000000 */       nop 
  /* 11C318 801324A8 3C11800A */       lui $s1, %hi(D_800A4D08)
  /* 11C31C 801324AC 3C028013 */       lui $v0, %hi(D_ovl14_80132924)
  /* 11C320 801324B0 24422924 */     addiu $v0, $v0, %lo(D_ovl14_80132924)
  /* 11C324 801324B4 26314D08 */     addiu $s1, $s1, %lo(D_800A4D08)
  /* 11C328 801324B8 00008025 */        or $s0, $zero, $zero
  .L801324BC:
  /* 11C32C 801324BC A2300024 */        sb $s0, 0x24($s1) # D_800A4D08 + 36
  /* 11C330 801324C0 8C4B0000 */        lw $t3, ($v0) # D_ovl14_80132924 + 0
  /* 11C334 801324C4 26100001 */     addiu $s0, $s0, 1
  /* 11C338 801324C8 2A010004 */      slti $at, $s0, 4
  /* 11C33C 801324CC 26310074 */     addiu $s1, $s1, 0x74
  /* 11C340 801324D0 24420004 */     addiu $v0, $v0, 4
  /* 11C344 801324D4 A220FFAE */        sb $zero, -0x52($s1) # D_800A4D08 + -82
  /* 11C348 801324D8 A220FFB3 */        sb $zero, -0x4d($s1) # D_800A4D08 + -77
  /* 11C34C 801324DC 1420FFF7 */      bnez $at, .L801324BC
  /* 11C350 801324E0 A22BFFAF */        sb $t3, -0x51($s1) # D_800A4D08 + -81
  /* 11C354 801324E4 3C014416 */       lui $at, (0x44160000 >> 16) # 600.0
  /* 11C358 801324E8 4481B000 */      mtc1 $at, $f22 # 600.0 to cop1
  /* 11C35C 801324EC 3C0143C8 */       lui $at, (0x43C80000 >> 16) # 400.0
  /* 11C360 801324F0 3C11800A */       lui $s1, %hi(D_800A4D08)
  /* 11C364 801324F4 3C128013 */       lui $s2, %hi(D_ovl14_80133110)
  /* 11C368 801324F8 3C158013 */       lui $s5, %hi(D_ovl2_80130D9C)
  /* 11C36C 801324FC 3C148011 */       lui $s4, %hi(D_ovl2_80116DD0)
  /* 11C370 80132500 4481A000 */      mtc1 $at, $f20 # 400.0 to cop1
  /* 11C374 80132504 26946DD0 */     addiu $s4, $s4, %lo(D_ovl2_80116DD0)
  /* 11C378 80132508 26B50D9C */     addiu $s5, $s5, %lo(D_ovl2_80130D9C)
  /* 11C37C 8013250C 26523110 */     addiu $s2, $s2, %lo(D_ovl14_80133110)
  /* 11C380 80132510 26314D08 */     addiu $s1, $s1, %lo(D_800A4D08)
  /* 11C384 80132514 00008025 */        or $s0, $zero, $zero
  /* 11C388 80132518 24160004 */     addiu $s6, $zero, 4
  /* 11C38C 8013251C 27B30058 */     addiu $s3, $sp, 0x58
  .L80132520:
  /* 11C390 80132520 02807025 */        or $t6, $s4, $zero
  /* 11C394 80132524 02607825 */        or $t7, $s3, $zero
  /* 11C398 80132528 2698003C */     addiu $t8, $s4, 0x3c
  .L8013252C:
  /* 11C39C 8013252C 8DCD0000 */        lw $t5, ($t6)
  /* 11C3A0 80132530 25CE000C */     addiu $t6, $t6, 0xc
  /* 11C3A4 80132534 25EF000C */     addiu $t7, $t7, 0xc
  /* 11C3A8 80132538 ADEDFFF4 */        sw $t5, -0xc($t7)
  /* 11C3AC 8013253C 8DCCFFF8 */        lw $t4, -8($t6)
  /* 11C3B0 80132540 ADECFFF8 */        sw $t4, -8($t7)
  /* 11C3B4 80132544 8DCDFFFC */        lw $t5, -4($t6)
  /* 11C3B8 80132548 15D8FFF8 */       bne $t6, $t8, .L8013252C
  /* 11C3BC 8013254C ADEDFFFC */        sw $t5, -4($t7)
  /* 11C3C0 80132550 44902000 */      mtc1 $s0, $f4 # -1e-45 to cop1
  /* 11C3C4 80132554 8DCD0000 */        lw $t5, ($t6)
  /* 11C3C8 80132558 24050010 */     addiu $a1, $zero, 0x10
  /* 11C3CC 8013255C 468021A0 */   cvt.s.w $f6, $f4
  /* 11C3D0 80132560 ADED0000 */        sw $t5, ($t7)
  /* 11C3D4 80132564 92390023 */       lbu $t9, 0x23($s1) # D_800A4D08 + 35
  /* 11C3D8 80132568 92280026 */       lbu $t0, 0x26($s1) # D_800A4D08 + 38
  /* 11C3DC 8013256C 8EA40000 */        lw $a0, ($s5) # D_ovl2_80130D9C + 0
  /* 11C3E0 80132570 AFB90058 */        sw $t9, 0x58($sp)
  /* 11C3E4 80132574 46143202 */     mul.s $f8, $f6, $f20
  /* 11C3E8 80132578 A3A8006F */        sb $t0, 0x6f($sp)
  /* 11C3EC 8013257C 46164281 */     sub.s $f10, $f8, $f22
  /* 11C3F0 80132580 0C001260 */       jal hal_alloc
  /* 11C3F4 80132584 E7AA005C */      swc1 $f10, 0x5c($sp)
  /* 11C3F8 80132588 AFA20090 */        sw $v0, 0x90($sp)
  /* 11C3FC 8013258C 0C035FCF */       jal ftManager_CreateFighter
  /* 11C400 80132590 02602025 */        or $a0, $s3, $zero
  /* 11C404 80132594 92290023 */       lbu $t1, 0x23($s1) # D_800A4D08 + 35
  /* 11C408 80132598 922A0026 */       lbu $t2, 0x26($s1) # D_800A4D08 + 38
  /* 11C40C 8013259C 26100001 */     addiu $s0, $s0, 1
  /* 11C410 801325A0 26310074 */     addiu $s1, $s1, 0x74
  /* 11C414 801325A4 26520008 */     addiu $s2, $s2, 8
  /* 11C418 801325A8 AE42FFFC */        sw $v0, -4($s2) # D_ovl14_80133110 + -4
  /* 11C41C 801325AC A249FFF8 */        sb $t1, -8($s2) # D_ovl14_80133110 + -8
  /* 11C420 801325B0 1616FFDB */       bne $s0, $s6, .L80132520
  /* 11C424 801325B4 A24AFFF9 */        sb $t2, -7($s2) # D_ovl14_80133110 + -7
  /* 11C428 801325B8 0C0DA7B8 */       jal func_ovl9_80369EE0
  /* 11C42C 801325BC 00000000 */       nop 
  /* 11C430 801325C0 3C078013 */       lui $a3, %hi(D_ovl14_80132780)
  /* 11C434 801325C4 240B000F */     addiu $t3, $zero, 0xf
  /* 11C438 801325C8 AFAB0010 */        sw $t3, 0x10($sp)
  /* 11C43C 801325CC 24E72780 */     addiu $a3, $a3, %lo(D_ovl14_80132780)
  /* 11C440 801325D0 2404001E */     addiu $a0, $zero, 0x1e
  /* 11C444 801325D4 24050014 */     addiu $a1, $zero, 0x14
  /* 11C448 801325D8 0C0DA75E */       jal func_ovl9_80369D78
  /* 11C44C 801325DC 24060055 */     addiu $a2, $zero, 0x55
  /* 11C450 801325E0 3C014234 */       lui $at, (0x42340000 >> 16) # 45.0
  /* 11C454 801325E4 44816000 */      mtc1 $at, $f12 # 45.0 to cop1
  /* 11C458 801325E8 241800FF */     addiu $t8, $zero, 0xff
  /* 11C45C 801325EC 240E00FF */     addiu $t6, $zero, 0xff
  /* 11C460 801325F0 AFAE0014 */        sw $t6, 0x14($sp)
  /* 11C464 801325F4 AFB80010 */        sw $t8, 0x10($sp)
  /* 11C468 801325F8 240600FF */     addiu $a2, $zero, 0xff
  /* 11C46C 801325FC 240700FF */     addiu $a3, $zero, 0xff
  /* 11C470 80132600 0C0E4138 */       jal func_ovl1_803904E0
  /* 11C474 80132604 46006386 */     mov.s $f14, $f12
  /* 11C478 80132608 8FBF004C */        lw $ra, 0x4c($sp)
  /* 11C47C 8013260C D7B40020 */      ldc1 $f20, 0x20($sp)
  /* 11C480 80132610 D7B60028 */      ldc1 $f22, 0x28($sp)
  /* 11C484 80132614 8FB00030 */        lw $s0, 0x30($sp)
  /* 11C488 80132618 8FB10034 */        lw $s1, 0x34($sp)
  /* 11C48C 8013261C 8FB20038 */        lw $s2, 0x38($sp)
  /* 11C490 80132620 8FB3003C */        lw $s3, 0x3c($sp)
  /* 11C494 80132624 8FB40040 */        lw $s4, 0x40($sp)
  /* 11C498 80132628 8FB50044 */        lw $s5, 0x44($sp)
  /* 11C49C 8013262C 8FB60048 */        lw $s6, 0x48($sp)
  /* 11C4A0 80132630 03E00008 */        jr $ra
  /* 11C4A4 80132634 27BD00C0 */     addiu $sp, $sp, 0xc0

glabel debug_battle_entry
  /* 11C4A8 80132638 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 11C4AC 8013263C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11C4B0 80132640 3C048013 */       lui $a0, %hi(D_ovl14_80132934)
  /* 11C4B4 80132644 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 11C4B8 80132648 24842934 */     addiu $a0, $a0, %lo(D_ovl14_80132934)
  /* 11C4BC 8013264C AFBF0014 */        sw $ra, 0x14($sp)
  /* 11C4C0 80132650 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 11C4C4 80132654 0C001C09 */       jal func_80007024
  /* 11C4C8 80132658 AC8F000C */        sw $t7, 0xc($a0) # D_ovl14_80132934 + 12
  /* 11C4CC 8013265C 3C188037 */       lui $t8, %hi(func_ovl9_80369240)
  /* 11C4D0 80132660 3C198013 */       lui $t9, %hi(D_NF_80133130)
  /* 11C4D4 80132664 3C048013 */       lui $a0, %hi(D_ovl14_80132950)
  /* 11C4D8 80132668 27393130 */     addiu $t9, $t9, %lo(D_NF_80133130)
  /* 11C4DC 8013266C 27189240 */     addiu $t8, $t8, %lo(func_ovl9_80369240)
  /* 11C4E0 80132670 24842950 */     addiu $a0, $a0, %lo(D_ovl14_80132950)
  /* 11C4E4 80132674 03194023 */      subu $t0, $t8, $t9
  /* 11C4E8 80132678 0C001A0F */       jal func_8000683C
  /* 11C4EC 8013267C AC880010 */        sw $t0, 0x10($a0) # D_ovl14_80132950 + 16
  /* 11C4F0 80132680 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11C4F4 80132684 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11C4F8 80132688 03E00008 */        jr $ra
  /* 11C4FC 8013268C 00000000 */       nop 
#
#glabel D_ovl14_80132690   # Routine parsed as data
#  /* 11C500 80132690 00000000 */       nop 
#glabel D_ovl14_80132694   # Routine parsed as data
#  /* 11C504 80132694 00000000 */       nop 
#glabel D_ovl14_80132698   # Routine parsed as data
#  /* 11C508 80132698 0002000A */      movz $zero, $zero, $v0
#glabel D_ovl14_8013269C   # Routine parsed as data
#  /* 11C50C 8013269C 801329E0 */        lb $s3, 0x29e0($zero)
#  /* 11C510 801326A0 801329E8 */        lb $s3, 0x29e8($zero)
#  /* 11C514 801326A4 801329F0 */        lb $s3, 0x29f0($zero)
#  /* 11C518 801326A8 801329F8 */        lb $s3, 0x29f8($zero)
#  /* 11C51C 801326AC 80132A00 */        lb $s3, 0x2a00($zero)
#  /* 11C520 801326B0 80132A08 */        lb $s3, 0x2a08($zero)
#  /* 11C524 801326B4 80132A10 */        lb $s3, 0x2a10($zero)
#  /* 11C528 801326B8 80132A18 */        lb $s3, 0x2a18($zero)
#  /* 11C52C 801326BC 80132A24 */        lb $s3, 0x2a24($zero)
#  /* 11C530 801326C0 80132A2C */        lb $s3, 0x2a2c($zero)
#  /* 11C534 801326C4 80132A38 */        lb $s3, 0x2a38($zero)
#  /* 11C538 801326C8 80132A40 */        lb $s3, 0x2a40($zero)
#  /* 11C53C 801326CC 80132A48 */        lb $s3, 0x2a48($zero)
#  /* 11C540 801326D0 80132A50 */        lb $s3, 0x2a50($zero)
#  /* 11C544 801326D4 80132A58 */        lb $s3, 0x2a58($zero)
#  /* 11C548 801326D8 80132A60 */        lb $s3, 0x2a60($zero)
#  /* 11C54C 801326DC 80132A68 */        lb $s3, 0x2a68($zero)
#  /* 11C550 801326E0 80132A74 */        lb $s3, 0x2a74($zero)
#  /* 11C554 801326E4 80132A7C */        lb $s3, 0x2a7c($zero)
#  /* 11C558 801326E8 80132A84 */        lb $s3, 0x2a84($zero)
#  /* 11C55C 801326EC 80132A8C */        lb $s3, 0x2a8c($zero)
#  /* 11C560 801326F0 80132A94 */        lb $s3, 0x2a94($zero)
#  /* 11C564 801326F4 80132AA0 */        lb $s3, 0x2aa0($zero)
#  /* 11C568 801326F8 80132AA8 */        lb $s3, 0x2aa8($zero)
#  /* 11C56C 801326FC 80132AB4 */        lb $s3, 0x2ab4($zero)
#  /* 11C570 80132700 80132ABC */        lb $s3, 0x2abc($zero)
#  /* 11C574 80132704 80132AC4 */        lb $s3, 0x2ac4($zero)
#glabel D_ovl14_80132708   # Routine parsed as data
#  /* 11C578 80132708 80132AD0 */        lb $s3, 0x2ad0($zero)
#  /* 11C57C 8013270C 80132AD4 */        lb $s3, 0x2ad4($zero)
#  /* 11C580 80132710 80132AD8 */        lb $s3, 0x2ad8($zero)
#  /* 11C584 80132714 80132ADC */        lb $s3, 0x2adc($zero)
#  /* 11C588 80132718 80132AE4 */        lb $s3, 0x2ae4($zero)
#  /* 11C58C 8013271C 80132AE8 */        lb $s3, 0x2ae8($zero)
#glabel D_ovl14_80132720   # Routine parsed as data
#  /* 11C590 80132720 80132AF0 */        lb $s3, 0x2af0($zero)
#  /* 11C594 80132724 80132AF8 */        lb $s3, 0x2af8($zero)
#  /* 11C598 80132728 80132B00 */        lb $s3, 0x2b00($zero)
#  /* 11C59C 8013272C 80132B0C */        lb $s3, 0x2b0c($zero)
#  /* 11C5A0 80132730 80132B14 */        lb $s3, 0x2b14($zero)
#  /* 11C5A4 80132734 80132B20 */        lb $s3, 0x2b20($zero)
#glabel D_ovl14_80132738   # Routine parsed as data
#  /* 11C5A8 80132738 80132B28 */        lb $s3, 0x2b28($zero)
#  /* 11C5AC 8013273C 80132B30 */        lb $s3, 0x2b30($zero)
#  /* 11C5B0 80132740 80132B38 */        lb $s3, 0x2b38($zero)
#  /* 11C5B4 80132744 80132B40 */        lb $s3, 0x2b40($zero)
#  /* 11C5B8 80132748 80132B4C */        lb $s3, 0x2b4c($zero)
#  /* 11C5BC 8013274C 80132B58 */        lb $s3, 0x2b58($zero)
#  /* 11C5C0 80132750 80132B64 */        lb $s3, 0x2b64($zero)
#  /* 11C5C4 80132754 80132B70 */        lb $s3, 0x2b70($zero)
#  /* 11C5C8 80132758 80132B7C */        lb $s3, 0x2b7c($zero)
#  /* 11C5CC 8013275C 80132B84 */        lb $s3, 0x2b84($zero)
#  /* 11C5D0 80132760 80132B8C */        lb $s3, 0x2b8c($zero)
#  /* 11C5D4 80132764 80132B94 */        lb $s3, 0x2b94($zero)
#  /* 11C5D8 80132768 80132BA0 */        lb $s3, 0x2ba0($zero)
#  /* 11C5DC 8013276C 80132BA8 */        lb $s3, 0x2ba8($zero)
#  /* 11C5E0 80132770 80132BB0 */        lb $s3, 0x2bb0($zero)
#  /* 11C5E4 80132774 80132BB8 */        lb $s3, 0x2bb8($zero)
#  /* 11C5E8 80132778 80132BC0 */        lb $s3, 0x2bc0($zero)
#  /* 11C5EC 8013277C 80132BC8 */        lb $s3, 0x2bc8($zero)
#glabel D_ovl14_80132780   # Routine parsed as data
#  /* 11C5F0 80132780 00000006 */      srlv $zero, $zero, $zero
#  /* 11C5F4 80132784 80131B58 */        lb $s3, 0x1b58($zero)
#  /* 11C5F8 80132788 80132720 */        lb $s3, 0x2720($zero)
#  /* 11C5FC 8013278C 80132694 */        lb $s3, 0x2694($zero)
#  /* 11C600 80132790 00000000 */       nop 
#  /* 11C604 80132794 40A00000 */     dmtc0 $zero, $zero, 0
#  /* 11C608 80132798 00000000 */       nop 
#  /* 11C60C 8013279C 00000005 */       lsa $zero, $zero, $zero, 1
#  /* 11C610 801327A0 00000000 */       nop 
#  /* 11C614 801327A4 80132BD4 */        lb $s3, 0x2bd4($zero)
#  /* 11C618 801327A8 800A4D0E */        lb $t2, 0x4d0e($zero)
