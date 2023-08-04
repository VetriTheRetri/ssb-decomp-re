.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80131B00 -> 0x80134DF0

glabel func_ovl24_80131B00
  /* 12AE40 80131B00 8C830000 */        lw $v1, ($a0)
  /* 12AE44 80131B04 3C188013 */       lui $t8, %hi(D_ovl24_80134E18)
  /* 12AE48 80131B08 27184E18 */     addiu $t8, $t8, %lo(D_ovl24_80134E18)
  /* 12AE4C 80131B0C 246E0008 */     addiu $t6, $v1, 8
  /* 12AE50 80131B10 AC8E0000 */        sw $t6, ($a0)
  /* 12AE54 80131B14 3C0FDE00 */       lui $t7, 0xde00
  /* 12AE58 80131B18 AC6F0000 */        sw $t7, ($v1)
  /* 12AE5C 80131B1C 03E00008 */        jr $ra
  /* 12AE60 80131B20 AC780004 */        sw $t8, 4($v1)

glabel func_ovl24_80131B24
  /* 12AE64 80131B24 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 12AE68 80131B28 AFBF001C */        sw $ra, 0x1c($sp)
  /* 12AE6C 80131B2C 00002025 */        or $a0, $zero, $zero
  /* 12AE70 80131B30 00002825 */        or $a1, $zero, $zero
  /* 12AE74 80131B34 24060011 */     addiu $a2, $zero, 0x11
  /* 12AE78 80131B38 0C00265A */       jal omMakeGObjCommon
  /* 12AE7C 80131B3C 3C078000 */       lui $a3, 0x8000
  /* 12AE80 80131B40 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 12AE84 80131B44 240EFFFF */     addiu $t6, $zero, -1
  /* 12AE88 80131B48 AFA20024 */        sw $v0, 0x24($sp)
  /* 12AE8C 80131B4C AFAE0010 */        sw $t6, 0x10($sp)
  /* 12AE90 80131B50 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 12AE94 80131B54 00402025 */        or $a0, $v0, $zero
  /* 12AE98 80131B58 2406001A */     addiu $a2, $zero, 0x1a
  /* 12AE9C 80131B5C 0C00277D */       jal func_80009DF4
  /* 12AEA0 80131B60 3C078000 */       lui $a3, 0x8000
  /* 12AEA4 80131B64 3C0F8013 */       lui $t7, %hi(D_ovl24_80136058)
  /* 12AEA8 80131B68 8DEF6058 */        lw $t7, %lo(D_ovl24_80136058)($t7)
  /* 12AEAC 80131B6C 3C180001 */       lui $t8, %hi(D_NF_00014BF0)
  /* 12AEB0 80131B70 27184BF0 */     addiu $t8, $t8, %lo(D_NF_00014BF0)
  /* 12AEB4 80131B74 8FA40024 */        lw $a0, 0x24($sp)
  /* 12AEB8 80131B78 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12AEBC 80131B7C 01F82821 */      addu $a1, $t7, $t8
  /* 12AEC0 80131B80 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 12AEC4 80131B84 44812000 */      mtc1 $at, $f4 # 10.0 to cop1
  /* 12AEC8 80131B88 3C01426C */       lui $at, (0x426C0000 >> 16) # 59.0
  /* 12AECC 80131B8C 44813000 */      mtc1 $at, $f6 # 59.0 to cop1
  /* 12AED0 80131B90 E4440058 */      swc1 $f4, 0x58($v0)
  /* 12AED4 80131B94 E446005C */      swc1 $f6, 0x5c($v0)
  /* 12AED8 80131B98 8FBF001C */        lw $ra, 0x1c($sp)
  /* 12AEDC 80131B9C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 12AEE0 80131BA0 03E00008 */        jr $ra
  /* 12AEE4 80131BA4 00000000 */       nop 

glabel func_ovl24_80131BA8
  /* 12AEE8 80131BA8 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 12AEEC 80131BAC AFBF001C */        sw $ra, 0x1c($sp)
  /* 12AEF0 80131BB0 00002025 */        or $a0, $zero, $zero
  /* 12AEF4 80131BB4 00002825 */        or $a1, $zero, $zero
  /* 12AEF8 80131BB8 24060012 */     addiu $a2, $zero, 0x12
  /* 12AEFC 80131BBC 0C00265A */       jal omMakeGObjCommon
  /* 12AF00 80131BC0 3C078000 */       lui $a3, 0x8000
  /* 12AF04 80131BC4 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 12AF08 80131BC8 240EFFFF */     addiu $t6, $zero, -1
  /* 12AF0C 80131BCC AFA20024 */        sw $v0, 0x24($sp)
  /* 12AF10 80131BD0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 12AF14 80131BD4 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 12AF18 80131BD8 00402025 */        or $a0, $v0, $zero
  /* 12AF1C 80131BDC 2406001C */     addiu $a2, $zero, 0x1c
  /* 12AF20 80131BE0 0C00277D */       jal func_80009DF4
  /* 12AF24 80131BE4 3C078000 */       lui $a3, 0x8000
  /* 12AF28 80131BE8 3C0F8013 */       lui $t7, %hi(D_ovl24_80136058)
  /* 12AF2C 80131BEC 8DEF6058 */        lw $t7, %lo(D_ovl24_80136058)($t7)
  /* 12AF30 80131BF0 3C180001 */       lui $t8, %hi(D_NF_0000C898)
  /* 12AF34 80131BF4 2718C898 */     addiu $t8, $t8, %lo(D_NF_0000C898)
  /* 12AF38 80131BF8 8FA40024 */        lw $a0, 0x24($sp)
  /* 12AF3C 80131BFC 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12AF40 80131C00 01F82821 */      addu $a1, $t7, $t8
  /* 12AF44 80131C04 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 12AF48 80131C08 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 12AF4C 80131C0C 3C198013 */       lui $t9, %hi(D_ovl24_80136058)
  /* 12AF50 80131C10 3C080001 */       lui $t0, %hi(D_NF_0000ED00)
  /* 12AF54 80131C14 E4400058 */      swc1 $f0, 0x58($v0)
  /* 12AF58 80131C18 E440005C */      swc1 $f0, 0x5c($v0)
  /* 12AF5C 80131C1C 8F396058 */        lw $t9, %lo(D_ovl24_80136058)($t9)
  /* 12AF60 80131C20 2508ED00 */     addiu $t0, $t0, %lo(D_NF_0000ED00)
  /* 12AF64 80131C24 8FA40024 */        lw $a0, 0x24($sp)
  /* 12AF68 80131C28 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12AF6C 80131C2C 03282821 */      addu $a1, $t9, $t0
  /* 12AF70 80131C30 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 12AF74 80131C34 44812000 */      mtc1 $at, $f4 # 10.0 to cop1
  /* 12AF78 80131C38 3C014336 */       lui $at, (0x43360000 >> 16) # 182.0
  /* 12AF7C 80131C3C 44813000 */      mtc1 $at, $f6 # 182.0 to cop1
  /* 12AF80 80131C40 E4440058 */      swc1 $f4, 0x58($v0)
  /* 12AF84 80131C44 E446005C */      swc1 $f6, 0x5c($v0)
  /* 12AF88 80131C48 8FBF001C */        lw $ra, 0x1c($sp)
  /* 12AF8C 80131C4C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 12AF90 80131C50 03E00008 */        jr $ra
  /* 12AF94 80131C54 00000000 */       nop 

  /* 12AF98 80131C58 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 12AF9C 80131C5C 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 12AFA0 80131C60 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12AFA4 80131C64 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 12AFA8 80131C68 AFBF0014 */        sw $ra, 0x14($sp)
  /* 12AFAC 80131C6C 244E0008 */     addiu $t6, $v0, 8
  /* 12AFB0 80131C70 AFA40018 */        sw $a0, 0x18($sp)
  /* 12AFB4 80131C74 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 12AFB8 80131C78 3C0DE700 */       lui $t5, 0xe700
  /* 12AFBC 80131C7C AC4D0000 */        sw $t5, ($v0)
  /* 12AFC0 80131C80 AC400004 */        sw $zero, 4($v0)
  /* 12AFC4 80131C84 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12AFC8 80131C88 3C18E300 */       lui $t8, (0xE3000A01 >> 16) # 3808430593
  /* 12AFCC 80131C8C 37180A01 */       ori $t8, $t8, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 12AFD0 80131C90 244F0008 */     addiu $t7, $v0, 8
  /* 12AFD4 80131C94 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 12AFD8 80131C98 AC400004 */        sw $zero, 4($v0)
  /* 12AFDC 80131C9C AC580000 */        sw $t8, ($v0)
  /* 12AFE0 80131CA0 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12AFE4 80131CA4 3C0FFFFD */       lui $t7, (0xFFFDF6FB >> 16) # 4294833915
  /* 12AFE8 80131CA8 3C0EFCFF */       lui $t6, (0xFCFFFFFF >> 16) # 4244635647
  /* 12AFEC 80131CAC 24590008 */     addiu $t9, $v0, 8
  /* 12AFF0 80131CB0 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 12AFF4 80131CB4 35CEFFFF */       ori $t6, $t6, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 12AFF8 80131CB8 35EFF6FB */       ori $t7, $t7, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 12AFFC 80131CBC AC4F0004 */        sw $t7, 4($v0)
  /* 12B000 80131CC0 AC4E0000 */        sw $t6, ($v0)
  /* 12B004 80131CC4 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12B008 80131CC8 3C1FE200 */       lui $ra, (0xE200001C >> 16) # 3791650844
  /* 12B00C 80131CCC 3C190050 */       lui $t9, (0x5041C8 >> 16) # 5259720
  /* 12B010 80131CD0 24580008 */     addiu $t8, $v0, 8
  /* 12B014 80131CD4 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 12B018 80131CD8 37FF001C */       ori $ra, $ra, (0xE200001C & 0xFFFF) # 3791650844
  /* 12B01C 80131CDC 373941C8 */       ori $t9, $t9, (0x5041C8 & 0xFFFF) # 5259720
  /* 12B020 80131CE0 AC590004 */        sw $t9, 4($v0)
  /* 12B024 80131CE4 AC5F0000 */        sw $ra, ($v0)
  /* 12B028 80131CE8 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12B02C 80131CEC 3C0BFA00 */       lui $t3, 0xfa00
  /* 12B030 80131CF0 240F00FF */     addiu $t7, $zero, 0xff
  /* 12B034 80131CF4 244E0008 */     addiu $t6, $v0, 8
  /* 12B038 80131CF8 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 12B03C 80131CFC AC4F0004 */        sw $t7, 4($v0)
  /* 12B040 80131D00 AC4B0000 */        sw $t3, ($v0)
  /* 12B044 80131D04 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12B048 80131D08 3C0E0002 */       lui $t6, (0x28028 >> 16) # 163880
  /* 12B04C 80131D0C 3C19F64D */       lui $t9, (0xF64DC0EC >> 16) # 4132290796
  /* 12B050 80131D10 24580008 */     addiu $t8, $v0, 8
  /* 12B054 80131D14 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 12B058 80131D18 3739C0EC */       ori $t9, $t9, (0xF64DC0EC & 0xFFFF) # 4132290796
  /* 12B05C 80131D1C 35CE8028 */       ori $t6, $t6, (0x28028 & 0xFFFF) # 163880
  /* 12B060 80131D20 AC4E0004 */        sw $t6, 4($v0)
  /* 12B064 80131D24 AC590000 */        sw $t9, ($v0)
  /* 12B068 80131D28 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12B06C 80131D2C 3C190002 */       lui $t9, (0x282D8 >> 16) # 164568
  /* 12B070 80131D30 3C18F64D */       lui $t8, (0xF64DC39C >> 16) # 4132291484
  /* 12B074 80131D34 244F0008 */     addiu $t7, $v0, 8
  /* 12B078 80131D38 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 12B07C 80131D3C 3C0C8013 */       lui $t4, %hi(D_ovl24_80135C28)
  /* 12B080 80131D40 3718C39C */       ori $t8, $t8, (0xF64DC39C & 0xFFFF) # 4132291484
  /* 12B084 80131D44 373982D8 */       ori $t9, $t9, (0x282D8 & 0xFFFF) # 164568
  /* 12B088 80131D48 258C5C28 */     addiu $t4, $t4, %lo(D_ovl24_80135C28)
  /* 12B08C 80131D4C AC590004 */        sw $t9, 4($v0)
  /* 12B090 80131D50 AC580000 */        sw $t8, ($v0)
  /* 12B094 80131D54 8D8E0000 */        lw $t6, ($t4) # D_ovl24_80135C28 + 0
  /* 12B098 80131D58 3C067F7F */       lui $a2, (0x7F7F7FFF >> 16) # 2139062271
  /* 12B09C 80131D5C 34C67FFF */       ori $a2, $a2, (0x7F7F7FFF & 0xFFFF) # 2139062271
  /* 12B0A0 80131D60 29C10004 */      slti $at, $t6, 4
  /* 12B0A4 80131D64 1020000B */      beqz $at, .L80131D94
  /* 12B0A8 80131D68 3C0EF627 */       lui $t6, (0xF627009C >> 16) # 4129751196
  /* 12B0AC 80131D6C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12B0B0 80131D70 3C05FFFF */       lui $a1, (0xFFFF00FF >> 16) # 4294902015
  /* 12B0B4 80131D74 34A500FF */       ori $a1, $a1, (0xFFFF00FF & 0xFFFF) # 4294902015
  /* 12B0B8 80131D78 244F0008 */     addiu $t7, $v0, 8
  /* 12B0BC 80131D7C AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 12B0C0 80131D80 3C067F7F */       lui $a2, (0x7F7F7FFF >> 16) # 2139062271
  /* 12B0C4 80131D84 34C67FFF */       ori $a2, $a2, (0x7F7F7FFF & 0xFFFF) # 2139062271
  /* 12B0C8 80131D88 AC450004 */        sw $a1, 4($v0)
  /* 12B0CC 80131D8C 10000008 */         b .L80131DB0
  /* 12B0D0 80131D90 AC4B0000 */        sw $t3, ($v0)
  .L80131D94:
  /* 12B0D4 80131D94 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12B0D8 80131D98 3C05FFFF */       lui $a1, (0xFFFF00FF >> 16) # 4294902015
  /* 12B0DC 80131D9C 34A500FF */       ori $a1, $a1, (0xFFFF00FF & 0xFFFF) # 4294902015
  /* 12B0E0 80131DA0 24580008 */     addiu $t8, $v0, 8
  /* 12B0E4 80131DA4 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 12B0E8 80131DA8 AC460004 */        sw $a2, 4($v0)
  /* 12B0EC 80131DAC AC4B0000 */        sw $t3, ($v0)
  .L80131DB0:
  /* 12B0F0 80131DB0 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12B0F4 80131DB4 3C0F0025 */       lui $t7, (0x25007C >> 16) # 2424956
  /* 12B0F8 80131DB8 35EF007C */       ori $t7, $t7, (0x25007C & 0xFFFF) # 2424956
  /* 12B0FC 80131DBC 24590008 */     addiu $t9, $v0, 8
  /* 12B100 80131DC0 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 12B104 80131DC4 35CE009C */       ori $t6, $t6, (0xF627009C & 0xFFFF) # 4129751196
  /* 12B108 80131DC8 AC4E0000 */        sw $t6, ($v0)
  /* 12B10C 80131DCC AC4F0004 */        sw $t7, 4($v0)
  /* 12B110 80131DD0 8D980000 */        lw $t8, ($t4) # D_ovl24_80135C28 + 0
  /* 12B114 80131DD4 2B010008 */      slti $at, $t8, 8
  /* 12B118 80131DD8 10200007 */      beqz $at, .L80131DF8
  /* 12B11C 80131DDC 3C18F634 */       lui $t8, (0xF634809C >> 16) # 4130635932
  /* 12B120 80131DE0 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12B124 80131DE4 24590008 */     addiu $t9, $v0, 8
  /* 12B128 80131DE8 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 12B12C 80131DEC AC450004 */        sw $a1, 4($v0)
  /* 12B130 80131DF0 10000006 */         b .L80131E0C
  /* 12B134 80131DF4 AC4B0000 */        sw $t3, ($v0)
  .L80131DF8:
  /* 12B138 80131DF8 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12B13C 80131DFC 244E0008 */     addiu $t6, $v0, 8
  /* 12B140 80131E00 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 12B144 80131E04 AC460004 */        sw $a2, 4($v0)
  /* 12B148 80131E08 AC4B0000 */        sw $t3, ($v0)
  .L80131E0C:
  /* 12B14C 80131E0C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12B150 80131E10 3C190032 */       lui $t9, (0x32807C >> 16) # 3309692
  /* 12B154 80131E14 3739807C */       ori $t9, $t9, (0x32807C & 0xFFFF) # 3309692
  /* 12B158 80131E18 244F0008 */     addiu $t7, $v0, 8
  /* 12B15C 80131E1C AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 12B160 80131E20 3718809C */       ori $t8, $t8, (0xF634809C & 0xFFFF) # 4130635932
  /* 12B164 80131E24 AC580000 */        sw $t8, ($v0)
  /* 12B168 80131E28 AC590004 */        sw $t9, 4($v0)
  /* 12B16C 80131E2C 8D8E0000 */        lw $t6, ($t4) # D_ovl24_80135C28 + 0
  /* 12B170 80131E30 29C1000C */      slti $at, $t6, 0xc
  /* 12B174 80131E34 10200007 */      beqz $at, .L80131E54
  /* 12B178 80131E38 3C0EF642 */       lui $t6, (0xF642009C >> 16) # 4131520668
  /* 12B17C 80131E3C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12B180 80131E40 244F0008 */     addiu $t7, $v0, 8
  /* 12B184 80131E44 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 12B188 80131E48 AC450004 */        sw $a1, 4($v0)
  /* 12B18C 80131E4C 10000006 */         b .L80131E68
  /* 12B190 80131E50 AC4B0000 */        sw $t3, ($v0)
  .L80131E54:
  /* 12B194 80131E54 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12B198 80131E58 24580008 */     addiu $t8, $v0, 8
  /* 12B19C 80131E5C AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 12B1A0 80131E60 AC460004 */        sw $a2, 4($v0)
  /* 12B1A4 80131E64 AC4B0000 */        sw $t3, ($v0)
  .L80131E68:
  /* 12B1A8 80131E68 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12B1AC 80131E6C 3C0F0040 */       lui $t7, (0x40007C >> 16) # 4194428
  /* 12B1B0 80131E70 35EF007C */       ori $t7, $t7, (0x40007C & 0xFFFF) # 4194428
  /* 12B1B4 80131E74 24590008 */     addiu $t9, $v0, 8
  /* 12B1B8 80131E78 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 12B1BC 80131E7C 35CE009C */       ori $t6, $t6, (0xF642009C & 0xFFFF) # 4131520668
  /* 12B1C0 80131E80 AC4E0000 */        sw $t6, ($v0)
  /* 12B1C4 80131E84 AC4F0004 */        sw $t7, 4($v0)
  /* 12B1C8 80131E88 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12B1CC 80131E8C 3C0E0055 */       lui $t6, (0x552078 >> 16) # 5578872
  /* 12B1D0 80131E90 35CE2078 */       ori $t6, $t6, (0x552078 & 0xFFFF) # 5578872
  /* 12B1D4 80131E94 24580008 */     addiu $t8, $v0, 8
  /* 12B1D8 80131E98 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 12B1DC 80131E9C AC400004 */        sw $zero, 4($v0)
  /* 12B1E0 80131EA0 AC4D0000 */        sw $t5, ($v0)
  /* 12B1E4 80131EA4 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 12B1E8 80131EA8 24590008 */     addiu $t9, $v0, 8
  /* 12B1EC 80131EAC AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 12B1F0 80131EB0 AC5F0000 */        sw $ra, ($v0)
  /* 12B1F4 80131EB4 0C0333AB */       jal func_ovl0_800CCEAC
  /* 12B1F8 80131EB8 AC4E0004 */        sw $t6, 4($v0)
  /* 12B1FC 80131EBC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12B200 80131EC0 27BD0018 */     addiu $sp, $sp, 0x18
  /* 12B204 80131EC4 03E00008 */        jr $ra
  /* 12B208 80131EC8 00000000 */       nop 

  /* 12B20C 80131ECC 03E00008 */        jr $ra
  /* 12B210 80131ED0 00000000 */       nop 

glabel func_ovl24_80131ED4
  /* 12B214 80131ED4 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 12B218 80131ED8 AFBF001C */        sw $ra, 0x1c($sp)
  /* 12B21C 80131EDC 00002025 */        or $a0, $zero, $zero
  /* 12B220 80131EE0 00002825 */        or $a1, $zero, $zero
  /* 12B224 80131EE4 24060013 */     addiu $a2, $zero, 0x13
  /* 12B228 80131EE8 0C00265A */       jal omMakeGObjCommon
  /* 12B22C 80131EEC 3C078000 */       lui $a3, 0x8000
  /* 12B230 80131EF0 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 12B234 80131EF4 240EFFFF */     addiu $t6, $zero, -1
  /* 12B238 80131EF8 AFA20024 */        sw $v0, 0x24($sp)
  /* 12B23C 80131EFC AFAE0010 */        sw $t6, 0x10($sp)
  /* 12B240 80131F00 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 12B244 80131F04 00402025 */        or $a0, $v0, $zero
  /* 12B248 80131F08 2406001B */     addiu $a2, $zero, 0x1b
  /* 12B24C 80131F0C 0C00277D */       jal func_80009DF4
  /* 12B250 80131F10 3C078000 */       lui $a3, 0x8000
  /* 12B254 80131F14 3C0F8013 */       lui $t7, %hi(D_ovl24_80136058)
  /* 12B258 80131F18 8DEF6058 */        lw $t7, %lo(D_ovl24_80136058)($t7)
  /* 12B25C 80131F1C 3C180000 */       lui $t8, %hi(D_NF_00001F10)
  /* 12B260 80131F20 27181F10 */     addiu $t8, $t8, %lo(D_NF_00001F10)
  /* 12B264 80131F24 8FA40024 */        lw $a0, 0x24($sp)
  /* 12B268 80131F28 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12B26C 80131F2C 01F82821 */      addu $a1, $t7, $t8
  /* 12B270 80131F30 94590024 */       lhu $t9, 0x24($v0)
  /* 12B274 80131F34 3C014307 */       lui $at, (0x43070000 >> 16) # 135.0
  /* 12B278 80131F38 44812000 */      mtc1 $at, $f4 # 135.0 to cop1
  /* 12B27C 80131F3C 3C0142D0 */       lui $at, (0x42D00000 >> 16) # 104.0
  /* 12B280 80131F40 44813000 */      mtc1 $at, $f6 # 104.0 to cop1
  /* 12B284 80131F44 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 12B288 80131F48 A4490024 */        sh $t1, 0x24($v0)
  /* 12B28C 80131F4C 352A0001 */       ori $t2, $t1, 1
  /* 12B290 80131F50 A44A0024 */        sh $t2, 0x24($v0)
  /* 12B294 80131F54 E4440058 */      swc1 $f4, 0x58($v0)
  /* 12B298 80131F58 E446005C */      swc1 $f6, 0x5c($v0)
  /* 12B29C 80131F5C 8FBF001C */        lw $ra, 0x1c($sp)
  /* 12B2A0 80131F60 27BD0028 */     addiu $sp, $sp, 0x28
  /* 12B2A4 80131F64 03E00008 */        jr $ra
  /* 12B2A8 80131F68 00000000 */       nop 

glabel func_ovl24_80131F6C
  /* 12B2AC 80131F6C 24010003 */     addiu $at, $zero, 3
  /* 12B2B0 80131F70 10810005 */       beq $a0, $at, .L80131F88
  /* 12B2B4 80131F74 24010007 */     addiu $at, $zero, 7
  /* 12B2B8 80131F78 10810003 */       beq $a0, $at, .L80131F88
  /* 12B2BC 80131F7C 2401000B */     addiu $at, $zero, 0xb
  /* 12B2C0 80131F80 14810003 */       bne $a0, $at, .L80131F90
  /* 12B2C4 80131F84 24020001 */     addiu $v0, $zero, 1
  .L80131F88:
  /* 12B2C8 80131F88 03E00008 */        jr $ra
  /* 12B2CC 80131F8C 00001025 */        or $v0, $zero, $zero

  .L80131F90:
  /* 12B2D0 80131F90 03E00008 */        jr $ra
  /* 12B2D4 80131F94 00000000 */       nop 

glabel func_ovl24_80131F98
  /* 12B2D8 80131F98 27BDFF98 */     addiu $sp, $sp, -0x68
  /* 12B2DC 80131F9C 3C0F8013 */       lui $t7, %hi(D_ovl24_80134E40)
  /* 12B2E0 80131FA0 25EF4E40 */     addiu $t7, $t7, %lo(D_ovl24_80134E40)
  /* 12B2E4 80131FA4 AFBF0024 */        sw $ra, 0x24($sp)
  /* 12B2E8 80131FA8 AFB00020 */        sw $s0, 0x20($sp)
  /* 12B2EC 80131FAC AFA40068 */        sw $a0, 0x68($sp)
  /* 12B2F0 80131FB0 25E80030 */     addiu $t0, $t7, 0x30
  /* 12B2F4 80131FB4 27AE0028 */     addiu $t6, $sp, 0x28
  .L80131FB8:
  /* 12B2F8 80131FB8 8DF90000 */        lw $t9, ($t7) # D_ovl24_80134E40 + 0
  /* 12B2FC 80131FBC 25EF000C */     addiu $t7, $t7, 0xc
  /* 12B300 80131FC0 25CE000C */     addiu $t6, $t6, 0xc
  /* 12B304 80131FC4 ADD9FFF4 */        sw $t9, -0xc($t6)
  /* 12B308 80131FC8 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl24_80134E40 + -8
  /* 12B30C 80131FCC ADD8FFF8 */        sw $t8, -8($t6)
  /* 12B310 80131FD0 8DF9FFFC */        lw $t9, -4($t7) # D_ovl24_80134E40 + -4
  /* 12B314 80131FD4 15E8FFF8 */       bne $t7, $t0, .L80131FB8
  /* 12B318 80131FD8 ADD9FFFC */        sw $t9, -4($t6)
  /* 12B31C 80131FDC 8DF90000 */        lw $t9, ($t7) # D_ovl24_80134E40 + 0
  /* 12B320 80131FE0 8DF80004 */        lw $t8, 4($t7) # D_ovl24_80134E40 + 4
  /* 12B324 80131FE4 00002025 */        or $a0, $zero, $zero
  /* 12B328 80131FE8 00002825 */        or $a1, $zero, $zero
  /* 12B32C 80131FEC 24060013 */     addiu $a2, $zero, 0x13
  /* 12B330 80131FF0 3C078000 */       lui $a3, 0x8000
  /* 12B334 80131FF4 ADD90000 */        sw $t9, ($t6)
  /* 12B338 80131FF8 0C00265A */       jal omMakeGObjCommon
  /* 12B33C 80131FFC ADD80004 */        sw $t8, 4($t6)
  /* 12B340 80132000 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 12B344 80132004 2409FFFF */     addiu $t1, $zero, -1
  /* 12B348 80132008 00408025 */        or $s0, $v0, $zero
  /* 12B34C 8013200C AFA90010 */        sw $t1, 0x10($sp)
  /* 12B350 80132010 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 12B354 80132014 00402025 */        or $a0, $v0, $zero
  /* 12B358 80132018 2406001B */     addiu $a2, $zero, 0x1b
  /* 12B35C 8013201C 0C00277D */       jal func_80009DF4
  /* 12B360 80132020 3C078000 */       lui $a3, 0x8000
  /* 12B364 80132024 0C04C7DB */       jal func_ovl24_80131F6C
  /* 12B368 80132028 8FA40068 */        lw $a0, 0x68($sp)
  /* 12B36C 8013202C 14400016 */      bnez $v0, .L80132088
  /* 12B370 80132030 02002025 */        or $a0, $s0, $zero
  /* 12B374 80132034 3C0A8013 */       lui $t2, %hi(D_ovl24_80136058)
  /* 12B378 80132038 8D4A6058 */        lw $t2, %lo(D_ovl24_80136058)($t2)
  /* 12B37C 8013203C 3C0B0000 */       lui $t3, %hi(D_NF_000030F8)
  /* 12B380 80132040 256B30F8 */     addiu $t3, $t3, %lo(D_NF_000030F8)
  /* 12B384 80132044 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12B388 80132048 014B2821 */      addu $a1, $t2, $t3
  /* 12B38C 8013204C 944C0024 */       lhu $t4, 0x24($v0)
  /* 12B390 80132050 3C014170 */       lui $at, (0x41700000 >> 16) # 15.0
  /* 12B394 80132054 44812000 */      mtc1 $at, $f4 # 15.0 to cop1
  /* 12B398 80132058 3C014190 */       lui $at, (0x41900000 >> 16) # 18.0
  /* 12B39C 8013205C 44813000 */      mtc1 $at, $f6 # 18.0 to cop1
  /* 12B3A0 80132060 240300FF */     addiu $v1, $zero, 0xff
  /* 12B3A4 80132064 3188FFDF */      andi $t0, $t4, 0xffdf
  /* 12B3A8 80132068 A4480024 */        sh $t0, 0x24($v0)
  /* 12B3AC 8013206C 350F0001 */       ori $t7, $t0, 1
  /* 12B3B0 80132070 A44F0024 */        sh $t7, 0x24($v0)
  /* 12B3B4 80132074 A0430028 */        sb $v1, 0x28($v0)
  /* 12B3B8 80132078 A0430029 */        sb $v1, 0x29($v0)
  /* 12B3BC 8013207C A043002A */        sb $v1, 0x2a($v0)
  /* 12B3C0 80132080 E4440058 */      swc1 $f4, 0x58($v0)
  /* 12B3C4 80132084 E446005C */      swc1 $f6, 0x5c($v0)
  .L80132088:
  /* 12B3C8 80132088 8FAE0068 */        lw $t6, 0x68($sp)
  /* 12B3CC 8013208C 2401000D */     addiu $at, $zero, 0xd
  /* 12B3D0 80132090 02002025 */        or $a0, $s0, $zero
  /* 12B3D4 80132094 15C10015 */       bne $t6, $at, .L801320EC
  /* 12B3D8 80132098 3C188013 */       lui $t8, %hi(D_ovl24_80136058)
  /* 12B3DC 8013209C 8F186058 */        lw $t8, %lo(D_ovl24_80136058)($t8)
  /* 12B3E0 801320A0 3C190000 */       lui $t9, %hi(D_NF_00003320)
  /* 12B3E4 801320A4 27393320 */     addiu $t9, $t9, %lo(D_NF_00003320)
  /* 12B3E8 801320A8 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12B3EC 801320AC 03192821 */      addu $a1, $t8, $t9
  /* 12B3F0 801320B0 94490024 */       lhu $t1, 0x24($v0)
  /* 12B3F4 801320B4 3C014170 */       lui $at, (0x41700000 >> 16) # 15.0
  /* 12B3F8 801320B8 44814000 */      mtc1 $at, $f8 # 15.0 to cop1
  /* 12B3FC 801320BC 3C014188 */       lui $at, (0x41880000 >> 16) # 17.0
  /* 12B400 801320C0 44815000 */      mtc1 $at, $f10 # 17.0 to cop1
  /* 12B404 801320C4 240300FF */     addiu $v1, $zero, 0xff
  /* 12B408 801320C8 312BFFDF */      andi $t3, $t1, 0xffdf
  /* 12B40C 801320CC A44B0024 */        sh $t3, 0x24($v0)
  /* 12B410 801320D0 356C0001 */       ori $t4, $t3, 1
  /* 12B414 801320D4 A44C0024 */        sh $t4, 0x24($v0)
  /* 12B418 801320D8 A0430028 */        sb $v1, 0x28($v0)
  /* 12B41C 801320DC A0430029 */        sb $v1, 0x29($v0)
  /* 12B420 801320E0 A043002A */        sb $v1, 0x2a($v0)
  /* 12B424 801320E4 E4480058 */      swc1 $f8, 0x58($v0)
  /* 12B428 801320E8 E44A005C */      swc1 $f10, 0x5c($v0)
  .L801320EC:
  /* 12B42C 801320EC 3C0D8013 */       lui $t5, %hi(D_ovl24_80136058)
  /* 12B430 801320F0 8DAD6058 */        lw $t5, %lo(D_ovl24_80136058)($t5)
  /* 12B434 801320F4 3C080000 */       lui $t0, %hi(D_NF_00002E38)
  /* 12B438 801320F8 25082E38 */     addiu $t0, $t0, %lo(D_NF_00002E38)
  /* 12B43C 801320FC 02002025 */        or $a0, $s0, $zero
  /* 12B440 80132100 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12B444 80132104 01A82821 */      addu $a1, $t5, $t0
  /* 12B448 80132108 944F0024 */       lhu $t7, 0x24($v0)
  /* 12B44C 8013210C 3C0141B8 */       lui $at, (0x41B80000 >> 16) # 23.0
  /* 12B450 80132110 44818000 */      mtc1 $at, $f16 # 23.0 to cop1
  /* 12B454 80132114 3C014204 */       lui $at, (0x42040000 >> 16) # 33.0
  /* 12B458 80132118 44819000 */      mtc1 $at, $f18 # 33.0 to cop1
  /* 12B45C 8013211C 240300FF */     addiu $v1, $zero, 0xff
  /* 12B460 80132120 31F8FFDF */      andi $t8, $t7, 0xffdf
  /* 12B464 80132124 A4580024 */        sh $t8, 0x24($v0)
  /* 12B468 80132128 37190001 */       ori $t9, $t8, 1
  /* 12B46C 8013212C A4590024 */        sh $t9, 0x24($v0)
  /* 12B470 80132130 A0430028 */        sb $v1, 0x28($v0)
  /* 12B474 80132134 A0430029 */        sb $v1, 0x29($v0)
  /* 12B478 80132138 A043002A */        sb $v1, 0x2a($v0)
  /* 12B47C 8013213C E4500058 */      swc1 $f16, 0x58($v0)
  /* 12B480 80132140 E452005C */      swc1 $f18, 0x5c($v0)
  /* 12B484 80132144 8FA90068 */        lw $t1, 0x68($sp)
  /* 12B488 80132148 2401000D */     addiu $at, $zero, 0xd
  /* 12B48C 8013214C 3C0C8013 */       lui $t4, %hi(D_ovl24_80136058)
  /* 12B490 80132150 11210016 */       beq $t1, $at, .L801321AC
  /* 12B494 80132154 00095080 */       sll $t2, $t1, 2
  /* 12B498 80132158 03AA5821 */      addu $t3, $sp, $t2
  /* 12B49C 8013215C 8D6B0028 */        lw $t3, 0x28($t3)
  /* 12B4A0 80132160 8D8C6058 */        lw $t4, %lo(D_ovl24_80136058)($t4)
  /* 12B4A4 80132164 02002025 */        or $a0, $s0, $zero
  /* 12B4A8 80132168 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12B4AC 8013216C 016C2821 */      addu $a1, $t3, $t4
  /* 12B4B0 80132170 944D0024 */       lhu $t5, 0x24($v0)
  /* 12B4B4 80132174 3C0142A0 */       lui $at, (0x42A00000 >> 16) # 80.0
  /* 12B4B8 80132178 44812000 */      mtc1 $at, $f4 # 80.0 to cop1
  /* 12B4BC 8013217C 3C014204 */       lui $at, (0x42040000 >> 16) # 33.0
  /* 12B4C0 80132180 44813000 */      mtc1 $at, $f6 # 33.0 to cop1
  /* 12B4C4 80132184 240300FF */     addiu $v1, $zero, 0xff
  /* 12B4C8 80132188 31AFFFDF */      andi $t7, $t5, 0xffdf
  /* 12B4CC 8013218C A44F0024 */        sh $t7, 0x24($v0)
  /* 12B4D0 80132190 35EE0001 */       ori $t6, $t7, 1
  /* 12B4D4 80132194 A44E0024 */        sh $t6, 0x24($v0)
  /* 12B4D8 80132198 A0430028 */        sb $v1, 0x28($v0)
  /* 12B4DC 8013219C A0430029 */        sb $v1, 0x29($v0)
  /* 12B4E0 801321A0 A043002A */        sb $v1, 0x2a($v0)
  /* 12B4E4 801321A4 E4440058 */      swc1 $f4, 0x58($v0)
  /* 12B4E8 801321A8 E446005C */      swc1 $f6, 0x5c($v0)
  .L801321AC:
  /* 12B4EC 801321AC 8FBF0024 */        lw $ra, 0x24($sp)
  /* 12B4F0 801321B0 8FB00020 */        lw $s0, 0x20($sp)
  /* 12B4F4 801321B4 27BD0068 */     addiu $sp, $sp, 0x68
  /* 12B4F8 801321B8 03E00008 */        jr $ra
  /* 12B4FC 801321BC 00000000 */       nop 

glabel func_ovl24_801321C0
  /* 12B500 801321C0 27BDFF00 */     addiu $sp, $sp, -0x100
  /* 12B504 801321C4 AFB70038 */        sw $s7, 0x38($sp)
  /* 12B508 801321C8 3C0E8013 */       lui $t6, %hi(D_ovl24_80134E78)
  /* 12B50C 801321CC 27B700B8 */     addiu $s7, $sp, 0xb8
  /* 12B510 801321D0 AFB60034 */        sw $s6, 0x34($sp)
  /* 12B514 801321D4 AFB0001C */        sw $s0, 0x1c($sp)
  /* 12B518 801321D8 25CE4E78 */     addiu $t6, $t6, %lo(D_ovl24_80134E78)
  /* 12B51C 801321DC 3C108000 */       lui $s0, %hi(D_NF_80000001)
  /* 12B520 801321E0 0080B025 */        or $s6, $a0, $zero
  /* 12B524 801321E4 AFBF003C */        sw $ra, 0x3c($sp)
  /* 12B528 801321E8 AFB50030 */        sw $s5, 0x30($sp)
  /* 12B52C 801321EC AFB4002C */        sw $s4, 0x2c($sp)
  /* 12B530 801321F0 AFB30028 */        sw $s3, 0x28($sp)
  /* 12B534 801321F4 AFB20024 */        sw $s2, 0x24($sp)
  /* 12B538 801321F8 AFB10020 */        sw $s1, 0x20($sp)
  /* 12B53C 801321FC 25C8003C */     addiu $t0, $t6, 0x3c
  /* 12B540 80132200 02E0C825 */        or $t9, $s7, $zero
  .L80132204:
  /* 12B544 80132204 8DD80000 */        lw $t8, ($t6) # D_ovl24_80134E78 + 0
  /* 12B548 80132208 25CE000C */     addiu $t6, $t6, 0xc
  /* 12B54C 8013220C 2739000C */     addiu $t9, $t9, 0xc
  /* 12B550 80132210 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 12B554 80132214 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl24_80134E78 + -8
  /* 12B558 80132218 AF2FFFF8 */        sw $t7, -8($t9)
  /* 12B55C 8013221C 8DD8FFFC */        lw $t8, -4($t6) # D_ovl24_80134E78 + -4
  /* 12B560 80132220 15C8FFF8 */       bne $t6, $t0, .L80132204
  /* 12B564 80132224 AF38FFFC */        sw $t8, -4($t9)
  /* 12B568 80132228 3C0A8013 */       lui $t2, %hi(D_ovl24_80134EB4)
  /* 12B56C 8013222C 254A4EB4 */     addiu $t2, $t2, %lo(D_ovl24_80134EB4)
  /* 12B570 80132230 254D006C */     addiu $t5, $t2, 0x6c
  /* 12B574 80132234 27A90048 */     addiu $t1, $sp, 0x48
  .L80132238:
  /* 12B578 80132238 8D4C0000 */        lw $t4, ($t2) # D_ovl24_80134EB4 + 0
  /* 12B57C 8013223C 254A000C */     addiu $t2, $t2, 0xc
  /* 12B580 80132240 2529000C */     addiu $t1, $t1, 0xc
  /* 12B584 80132244 AD2CFFF4 */        sw $t4, -0xc($t1)
  /* 12B588 80132248 8D4BFFF8 */        lw $t3, -8($t2) # D_ovl24_80134EB4 + -8
  /* 12B58C 8013224C AD2BFFF8 */        sw $t3, -8($t1)
  /* 12B590 80132250 8D4CFFFC */        lw $t4, -4($t2) # D_ovl24_80134EB4 + -4
  /* 12B594 80132254 154DFFF8 */       bne $t2, $t5, .L80132238
  /* 12B598 80132258 AD2CFFFC */        sw $t4, -4($t1)
  /* 12B59C 8013225C 8D4C0000 */        lw $t4, ($t2) # D_ovl24_80134EB4 + 0
  /* 12B5A0 80132260 00002025 */        or $a0, $zero, $zero
  /* 12B5A4 80132264 00002825 */        or $a1, $zero, $zero
  /* 12B5A8 80132268 24060013 */     addiu $a2, $zero, 0x13
  /* 12B5AC 8013226C 02003825 */        or $a3, $s0, $zero
  /* 12B5B0 80132270 0C00265A */       jal omMakeGObjCommon
  /* 12B5B4 80132274 AD2C0000 */        sw $t4, ($t1)
  /* 12B5B8 80132278 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 12B5BC 8013227C 2408FFFF */     addiu $t0, $zero, -1
  /* 12B5C0 80132280 0040A825 */        or $s5, $v0, $zero
  /* 12B5C4 80132284 AFA80010 */        sw $t0, 0x10($sp)
  /* 12B5C8 80132288 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 12B5CC 8013228C 00402025 */        or $a0, $v0, $zero
  /* 12B5D0 80132290 2406001B */     addiu $a2, $zero, 0x1b
  /* 12B5D4 80132294 0C00277D */       jal func_80009DF4
  /* 12B5D8 80132298 02003825 */        or $a3, $s0, $zero
  /* 12B5DC 8013229C 3C128013 */       lui $s2, %hi(D_ovl24_80136058)
  /* 12B5E0 801322A0 26526058 */     addiu $s2, $s2, %lo(D_ovl24_80136058)
  /* 12B5E4 801322A4 00008025 */        or $s0, $zero, $zero
  /* 12B5E8 801322A8 2414000E */     addiu $s4, $zero, 0xe
  /* 12B5EC 801322AC 2413FFDF */     addiu $s3, $zero, -0x21
  /* 12B5F0 801322B0 0216082A */       slt $at, $s0, $s6
  .L801322B4:
  /* 12B5F4 801322B4 14200019 */      bnez $at, .L8013231C
  /* 12B5F8 801322B8 02A02025 */        or $a0, $s5, $zero
  /* 12B5FC 801322BC 00107080 */       sll $t6, $s0, 2
  /* 12B600 801322C0 02EEC821 */      addu $t9, $s7, $t6
  /* 12B604 801322C4 8F2F0000 */        lw $t7, ($t9)
  /* 12B608 801322C8 8E580000 */        lw $t8, ($s2) # D_ovl24_80136058 + 0
  /* 12B60C 801322CC 001068C0 */       sll $t5, $s0, 3
  /* 12B610 801322D0 27AA0048 */     addiu $t2, $sp, 0x48
  /* 12B614 801322D4 01AA8821 */      addu $s1, $t5, $t2
  /* 12B618 801322D8 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12B61C 801322DC 01F82821 */      addu $a1, $t7, $t8
  /* 12B620 801322E0 94490024 */       lhu $t1, 0x24($v0)
  /* 12B624 801322E4 01336024 */       and $t4, $t1, $s3
  /* 12B628 801322E8 A44C0024 */        sh $t4, 0x24($v0)
  /* 12B62C 801322EC 35880001 */       ori $t0, $t4, 1
  /* 12B630 801322F0 A4480024 */        sh $t0, 0x24($v0)
  /* 12B634 801322F4 8E2E0000 */        lw $t6, ($s1)
  /* 12B638 801322F8 448E2000 */      mtc1 $t6, $f4
  /* 12B63C 801322FC 00000000 */       nop 
  /* 12B640 80132300 468021A0 */   cvt.s.w $f6, $f4
  /* 12B644 80132304 E4460058 */      swc1 $f6, 0x58($v0)
  /* 12B648 80132308 8E390004 */        lw $t9, 4($s1)
  /* 12B64C 8013230C 44994000 */      mtc1 $t9, $f8
  /* 12B650 80132310 00000000 */       nop 
  /* 12B654 80132314 468042A0 */   cvt.s.w $f10, $f8
  /* 12B658 80132318 E44A005C */      swc1 $f10, 0x5c($v0)
  .L8013231C:
  /* 12B65C 8013231C 26100001 */     addiu $s0, $s0, %lo(D_NF_80000001)
  /* 12B660 80132320 5614FFE4 */      bnel $s0, $s4, .L801322B4
  /* 12B664 80132324 0216082A */       slt $at, $s0, $s6
  /* 12B668 80132328 8FBF003C */        lw $ra, 0x3c($sp)
  /* 12B66C 8013232C 8FB0001C */        lw $s0, 0x1c($sp)
  /* 12B670 80132330 8FB10020 */        lw $s1, 0x20($sp)
  /* 12B674 80132334 8FB20024 */        lw $s2, 0x24($sp)
  /* 12B678 80132338 8FB30028 */        lw $s3, 0x28($sp)
  /* 12B67C 8013233C 8FB4002C */        lw $s4, 0x2c($sp)
  /* 12B680 80132340 8FB50030 */        lw $s5, 0x30($sp)
  /* 12B684 80132344 8FB60034 */        lw $s6, 0x34($sp)
  /* 12B688 80132348 8FB70038 */        lw $s7, 0x38($sp)
  /* 12B68C 8013234C 03E00008 */        jr $ra
  /* 12B690 80132350 27BD0100 */     addiu $sp, $sp, 0x100

glabel func_ovl24_80132354
  /* 12B694 80132354 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 12B698 80132358 AFBF001C */        sw $ra, 0x1c($sp)
  /* 12B69C 8013235C AFA40028 */        sw $a0, 0x28($sp)
  /* 12B6A0 80132360 00002025 */        or $a0, $zero, $zero
  /* 12B6A4 80132364 00002825 */        or $a1, $zero, $zero
  /* 12B6A8 80132368 24060013 */     addiu $a2, $zero, 0x13
  /* 12B6AC 8013236C 0C00265A */       jal omMakeGObjCommon
  /* 12B6B0 80132370 3C078000 */       lui $a3, 0x8000
  /* 12B6B4 80132374 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 12B6B8 80132378 240EFFFF */     addiu $t6, $zero, -1
  /* 12B6BC 8013237C AFA20024 */        sw $v0, 0x24($sp)
  /* 12B6C0 80132380 AFAE0010 */        sw $t6, 0x10($sp)
  /* 12B6C4 80132384 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 12B6C8 80132388 00402025 */        or $a0, $v0, $zero
  /* 12B6CC 8013238C 2406001B */     addiu $a2, $zero, 0x1b
  /* 12B6D0 80132390 0C00277D */       jal func_80009DF4
  /* 12B6D4 80132394 3C078000 */       lui $a3, 0x8000
  /* 12B6D8 80132398 8FA20028 */        lw $v0, 0x28($sp)
  /* 12B6DC 8013239C 24010003 */     addiu $at, $zero, 3
  /* 12B6E0 801323A0 8FA40024 */        lw $a0, 0x24($sp)
  /* 12B6E4 801323A4 10410009 */       beq $v0, $at, .L801323CC
  /* 12B6E8 801323A8 3C0F8013 */       lui $t7, %hi(D_ovl24_80136058)
  /* 12B6EC 801323AC 24010007 */     addiu $at, $zero, 7
  /* 12B6F0 801323B0 1041001A */       beq $v0, $at, .L8013241C
  /* 12B6F4 801323B4 3C0B8013 */       lui $t3, 0x8013
  /* 12B6F8 801323B8 2401000B */     addiu $at, $zero, 0xb
  /* 12B6FC 801323BC 1041002B */       beq $v0, $at, .L8013246C
  /* 12B700 801323C0 3C198013 */       lui $t9, 0x8013
  /* 12B704 801323C4 1000003C */         b .L801324B8
  /* 12B708 801323C8 8FA30020 */        lw $v1, 0x20($sp)
  .L801323CC:
  /* 12B70C 801323CC 8DEF6058 */        lw $t7, %lo(D_ovl24_80136058)($t7)
  /* 12B710 801323D0 3C180000 */       lui $t8, %hi(D_NF_00003B08)
  /* 12B714 801323D4 27183B08 */     addiu $t8, $t8, %lo(D_NF_00003B08)
  /* 12B718 801323D8 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12B71C 801323DC 01F82821 */      addu $a1, $t7, $t8
  /* 12B720 801323E0 84590014 */        lh $t9, 0x14($v0)
  /* 12B724 801323E4 240900A0 */     addiu $t1, $zero, 0xa0
  /* 12B728 801323E8 00401825 */        or $v1, $v0, $zero
  /* 12B72C 801323EC 07210003 */      bgez $t9, .L801323FC
  /* 12B730 801323F0 00194043 */       sra $t0, $t9, 1
  /* 12B734 801323F4 27210001 */     addiu $at, $t9, 1
  /* 12B738 801323F8 00014043 */       sra $t0, $at, 1
  .L801323FC:
  /* 12B73C 801323FC 01285023 */      subu $t2, $t1, $t0
  /* 12B740 80132400 448A2000 */      mtc1 $t2, $f4
  /* 12B744 80132404 3C014345 */       lui $at, (0x43450000 >> 16) # 197.0
  /* 12B748 80132408 44814000 */      mtc1 $at, $f8 # 197.0 to cop1
  /* 12B74C 8013240C 468021A0 */   cvt.s.w $f6, $f4
  /* 12B750 80132410 E448005C */      swc1 $f8, 0x5c($v0)
  /* 12B754 80132414 10000028 */         b .L801324B8
  /* 12B758 80132418 E4460058 */      swc1 $f6, 0x58($v0)
  .L8013241C:
  /* 12B75C 8013241C 8D6B6058 */        lw $t3, 0x6058($t3)
  /* 12B760 80132420 3C0C0000 */       lui $t4, %hi(D_NF_00004388)
  /* 12B764 80132424 258C4388 */     addiu $t4, $t4, %lo(D_NF_00004388)
  /* 12B768 80132428 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12B76C 8013242C 016C2821 */      addu $a1, $t3, $t4
  /* 12B770 80132430 844D0014 */        lh $t5, 0x14($v0)
  /* 12B774 80132434 240F00A0 */     addiu $t7, $zero, 0xa0
  /* 12B778 80132438 00401825 */        or $v1, $v0, $zero
  /* 12B77C 8013243C 05A10003 */      bgez $t5, .L8013244C
  /* 12B780 80132440 000D7043 */       sra $t6, $t5, 1
  /* 12B784 80132444 25A10001 */     addiu $at, $t5, 1
  /* 12B788 80132448 00017043 */       sra $t6, $at, 1
  .L8013244C:
  /* 12B78C 8013244C 01EEC023 */      subu $t8, $t7, $t6
  /* 12B790 80132450 44985000 */      mtc1 $t8, $f10
  /* 12B794 80132454 3C014345 */       lui $at, (0x43450000 >> 16) # 197.0
  /* 12B798 80132458 44819000 */      mtc1 $at, $f18 # 197.0 to cop1
  /* 12B79C 8013245C 46805420 */   cvt.s.w $f16, $f10
  /* 12B7A0 80132460 E452005C */      swc1 $f18, 0x5c($v0)
  /* 12B7A4 80132464 10000014 */         b .L801324B8
  /* 12B7A8 80132468 E4500058 */      swc1 $f16, 0x58($v0)
  .L8013246C:
  /* 12B7AC 8013246C 8F396058 */        lw $t9, 0x6058($t9)
  /* 12B7B0 80132470 3C090000 */       lui $t1, %hi(D_NF_00004AC8)
  /* 12B7B4 80132474 25294AC8 */     addiu $t1, $t1, %lo(D_NF_00004AC8)
  /* 12B7B8 80132478 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12B7BC 8013247C 03292821 */      addu $a1, $t9, $t1
  /* 12B7C0 80132480 84480014 */        lh $t0, 0x14($v0)
  /* 12B7C4 80132484 240B00A0 */     addiu $t3, $zero, 0xa0
  /* 12B7C8 80132488 00401825 */        or $v1, $v0, $zero
  /* 12B7CC 8013248C 05010003 */      bgez $t0, .L8013249C
  /* 12B7D0 80132490 00085043 */       sra $t2, $t0, 1
  /* 12B7D4 80132494 25010001 */     addiu $at, $t0, 1
  /* 12B7D8 80132498 00015043 */       sra $t2, $at, 1
  .L8013249C:
  /* 12B7DC 8013249C 016A6023 */      subu $t4, $t3, $t2
  /* 12B7E0 801324A0 448C2000 */      mtc1 $t4, $f4
  /* 12B7E4 801324A4 3C014345 */       lui $at, (0x43450000 >> 16) # 197.0
  /* 12B7E8 801324A8 44814000 */      mtc1 $at, $f8 # 197.0 to cop1
  /* 12B7EC 801324AC 468021A0 */   cvt.s.w $f6, $f4
  /* 12B7F0 801324B0 E448005C */      swc1 $f8, 0x5c($v0)
  /* 12B7F4 801324B4 E4460058 */      swc1 $f6, 0x58($v0)
  .L801324B8:
  /* 12B7F8 801324B8 946D0024 */       lhu $t5, 0x24($v1)
  /* 12B7FC 801324BC 240200FF */     addiu $v0, $zero, 0xff
  /* 12B800 801324C0 A0620028 */        sb $v0, 0x28($v1)
  /* 12B804 801324C4 31AEFFDF */      andi $t6, $t5, 0xffdf
  /* 12B808 801324C8 A46E0024 */        sh $t6, 0x24($v1)
  /* 12B80C 801324CC 35D80001 */       ori $t8, $t6, 1
  /* 12B810 801324D0 A4780024 */        sh $t8, 0x24($v1)
  /* 12B814 801324D4 A0620029 */        sb $v0, 0x29($v1)
  /* 12B818 801324D8 A062002A */        sb $v0, 0x2a($v1)
  /* 12B81C 801324DC 8FBF001C */        lw $ra, 0x1c($sp)
  /* 12B820 801324E0 27BD0028 */     addiu $sp, $sp, 0x28
  /* 12B824 801324E4 03E00008 */        jr $ra
  /* 12B828 801324E8 00000000 */       nop 

glabel func_ovl24_801324EC
  /* 12B82C 801324EC 27BDFF98 */     addiu $sp, $sp, -0x68
  /* 12B830 801324F0 3C0F8013 */       lui $t7, %hi(D_ovl24_80134F24)
  /* 12B834 801324F4 25EF4F24 */     addiu $t7, $t7, %lo(D_ovl24_80134F24)
  /* 12B838 801324F8 AFBF001C */        sw $ra, 0x1c($sp)
  /* 12B83C 801324FC AFA40068 */        sw $a0, 0x68($sp)
  /* 12B840 80132500 25E8003C */     addiu $t0, $t7, 0x3c
  /* 12B844 80132504 27AE0024 */     addiu $t6, $sp, 0x24
  .L80132508:
  /* 12B848 80132508 8DF90000 */        lw $t9, ($t7) # D_ovl24_80134F24 + 0
  /* 12B84C 8013250C 25EF000C */     addiu $t7, $t7, 0xc
  /* 12B850 80132510 25CE000C */     addiu $t6, $t6, 0xc
  /* 12B854 80132514 ADD9FFF4 */        sw $t9, -0xc($t6)
  /* 12B858 80132518 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl24_80134F24 + -8
  /* 12B85C 8013251C ADD8FFF8 */        sw $t8, -8($t6)
  /* 12B860 80132520 8DF9FFFC */        lw $t9, -4($t7) # D_ovl24_80134F24 + -4
  /* 12B864 80132524 15E8FFF8 */       bne $t7, $t0, .L80132508
  /* 12B868 80132528 ADD9FFFC */        sw $t9, -4($t6)
  /* 12B86C 8013252C 00002025 */        or $a0, $zero, $zero
  /* 12B870 80132530 00002825 */        or $a1, $zero, $zero
  /* 12B874 80132534 24060013 */     addiu $a2, $zero, 0x13
  /* 12B878 80132538 0C00265A */       jal omMakeGObjCommon
  /* 12B87C 8013253C 3C078000 */       lui $a3, 0x8000
  /* 12B880 80132540 3C018013 */       lui $at, %hi(D_ovl24_80135C2C)
  /* 12B884 80132544 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 12B888 80132548 2409FFFF */     addiu $t1, $zero, -1
  /* 12B88C 8013254C AC225C2C */        sw $v0, %lo(D_ovl24_80135C2C)($at)
  /* 12B890 80132550 AFA20064 */        sw $v0, 0x64($sp)
  /* 12B894 80132554 AFA90010 */        sw $t1, 0x10($sp)
  /* 12B898 80132558 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 12B89C 8013255C 00402025 */        or $a0, $v0, $zero
  /* 12B8A0 80132560 2406001B */     addiu $a2, $zero, 0x1b
  /* 12B8A4 80132564 0C00277D */       jal func_80009DF4
  /* 12B8A8 80132568 3C078000 */       lui $a3, 0x8000
  /* 12B8AC 8013256C 3C0A8013 */       lui $t2, %hi(D_ovl24_80136058)
  /* 12B8B0 80132570 8D4A6058 */        lw $t2, %lo(D_ovl24_80136058)($t2)
  /* 12B8B4 80132574 3C0B0000 */       lui $t3, %hi(D_NF_000069F8)
  /* 12B8B8 80132578 256B69F8 */     addiu $t3, $t3, %lo(D_NF_000069F8)
  /* 12B8BC 8013257C 8FA40064 */        lw $a0, 0x64($sp)
  /* 12B8C0 80132580 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12B8C4 80132584 014B2821 */      addu $a1, $t2, $t3
  /* 12B8C8 80132588 944C0024 */       lhu $t4, 0x24($v0)
  /* 12B8CC 8013258C 8FA60068 */        lw $a2, 0x68($sp)
  /* 12B8D0 80132590 8FA40064 */        lw $a0, 0x64($sp)
  /* 12B8D4 80132594 3188FFDF */      andi $t0, $t4, 0xffdf
  /* 12B8D8 80132598 240300FF */     addiu $v1, $zero, 0xff
  /* 12B8DC 8013259C 3C078013 */       lui $a3, %hi(D_ovl24_80136058)
  /* 12B8E0 801325A0 A4480024 */        sh $t0, 0x24($v0)
  /* 12B8E4 801325A4 350F0001 */       ori $t7, $t0, 1
  /* 12B8E8 801325A8 24E76058 */     addiu $a3, $a3, %lo(D_ovl24_80136058)
  /* 12B8EC 801325AC A44F0024 */        sh $t7, 0x24($v0)
  /* 12B8F0 801325B0 A0430028 */        sb $v1, 0x28($v0)
  /* 12B8F4 801325B4 A0430029 */        sb $v1, 0x29($v0)
  /* 12B8F8 801325B8 10C00004 */      beqz $a2, .L801325CC
  /* 12B8FC 801325BC A043002A */        sb $v1, 0x2a($v0)
  /* 12B900 801325C0 24010005 */     addiu $at, $zero, 5
  /* 12B904 801325C4 14C10009 */       bne $a2, $at, .L801325EC
  /* 12B908 801325C8 00064880 */       sll $t1, $a2, 2
  .L801325CC:
  /* 12B90C 801325CC 00067080 */       sll $t6, $a2, 2
  /* 12B910 801325D0 03AEC021 */      addu $t8, $sp, $t6
  /* 12B914 801325D4 8F180024 */        lw $t8, 0x24($t8)
  /* 12B918 801325D8 8CF90004 */        lw $t9, 4($a3) # D_ovl24_80136058 + 4
  /* 12B91C 801325DC 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12B920 801325E0 03192821 */      addu $a1, $t8, $t9
  /* 12B924 801325E4 10000007 */         b .L80132604
  /* 12B928 801325E8 240300FF */     addiu $v1, $zero, 0xff
  .L801325EC:
  /* 12B92C 801325EC 03A95021 */      addu $t2, $sp, $t1
  /* 12B930 801325F0 8D4A0024 */        lw $t2, 0x24($t2)
  /* 12B934 801325F4 8CEB0000 */        lw $t3, ($a3)
  /* 12B938 801325F8 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12B93C 801325FC 014B2821 */      addu $a1, $t2, $t3
  /* 12B940 80132600 240300FF */     addiu $v1, $zero, 0xff
  .L80132604:
  /* 12B944 80132604 944C0024 */       lhu $t4, 0x24($v0)
  /* 12B948 80132608 A0430028 */        sb $v1, 0x28($v0)
  /* 12B94C 8013260C A0430029 */        sb $v1, 0x29($v0)
  /* 12B950 80132610 3188FFDF */      andi $t0, $t4, 0xffdf
  /* 12B954 80132614 A4480024 */        sh $t0, 0x24($v0)
  /* 12B958 80132618 350F0001 */       ori $t7, $t0, 1
  /* 12B95C 8013261C A44F0024 */        sh $t7, 0x24($v0)
  /* 12B960 80132620 A043002A */        sb $v1, 0x2a($v0)
  /* 12B964 80132624 8FBF001C */        lw $ra, 0x1c($sp)
  /* 12B968 80132628 27BD0068 */     addiu $sp, $sp, 0x68
  /* 12B96C 8013262C 03E00008 */        jr $ra
  /* 12B970 80132630 00000000 */       nop 

glabel func_ovl24_80132634
  /* 12B974 80132634 24010004 */     addiu $at, $zero, 4
  /* 12B978 80132638 10810005 */       beq $a0, $at, .L80132650
  /* 12B97C 8013263C 24010006 */     addiu $at, $zero, 6
  /* 12B980 80132640 10810005 */       beq $a0, $at, .L80132658
  /* 12B984 80132644 00001025 */        or $v0, $zero, $zero
  /* 12B988 80132648 10000005 */         b .L80132660
  /* 12B98C 8013264C 00000000 */       nop 
  .L80132650:
  /* 12B990 80132650 03E00008 */        jr $ra
  /* 12B994 80132654 24020001 */     addiu $v0, $zero, 1

  .L80132658:
  /* 12B998 80132658 03E00008 */        jr $ra
  /* 12B99C 8013265C 24020002 */     addiu $v0, $zero, 2

  .L80132660:
  /* 12B9A0 80132660 03E00008 */        jr $ra
  /* 12B9A4 80132664 00000000 */       nop 

glabel func_ovl24_80132668
  /* 12B9A8 80132668 27BDFFA0 */     addiu $sp, $sp, -0x60
  /* 12B9AC 8013266C 3C0F8013 */       lui $t7, %hi(D_ovl24_80134F60)
  /* 12B9B0 80132670 AFB0001C */        sw $s0, 0x1c($sp)
  /* 12B9B4 80132674 25EF4F60 */     addiu $t7, $t7, %lo(D_ovl24_80134F60)
  /* 12B9B8 80132678 3C108000 */       lui $s0, 0x8000
  /* 12B9BC 8013267C AFBF0024 */        sw $ra, 0x24($sp)
  /* 12B9C0 80132680 AFB10020 */        sw $s1, 0x20($sp)
  /* 12B9C4 80132684 AFA40060 */        sw $a0, 0x60($sp)
  /* 12B9C8 80132688 25E80030 */     addiu $t0, $t7, 0x30
  /* 12B9CC 8013268C 27AE0028 */     addiu $t6, $sp, 0x28
  .L80132690:
  /* 12B9D0 80132690 8DF90000 */        lw $t9, ($t7) # D_ovl24_80134F60 + 0
  /* 12B9D4 80132694 25EF000C */     addiu $t7, $t7, 0xc
  /* 12B9D8 80132698 25CE000C */     addiu $t6, $t6, 0xc
  /* 12B9DC 8013269C ADD9FFF4 */        sw $t9, -0xc($t6)
  /* 12B9E0 801326A0 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl24_80134F60 + -8
  /* 12B9E4 801326A4 ADD8FFF8 */        sw $t8, -8($t6)
  /* 12B9E8 801326A8 8DF9FFFC */        lw $t9, -4($t7) # D_ovl24_80134F60 + -4
  /* 12B9EC 801326AC 15E8FFF8 */       bne $t7, $t0, .L80132690
  /* 12B9F0 801326B0 ADD9FFFC */        sw $t9, -4($t6)
  /* 12B9F4 801326B4 00002025 */        or $a0, $zero, $zero
  /* 12B9F8 801326B8 00002825 */        or $a1, $zero, $zero
  /* 12B9FC 801326BC 24060013 */     addiu $a2, $zero, 0x13
  /* 12BA00 801326C0 0C00265A */       jal omMakeGObjCommon
  /* 12BA04 801326C4 02003825 */        or $a3, $s0, $zero
  /* 12BA08 801326C8 3C018013 */       lui $at, %hi(D_ovl24_80135C30)
  /* 12BA0C 801326CC 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 12BA10 801326D0 2409FFFF */     addiu $t1, $zero, -1
  /* 12BA14 801326D4 AC225C30 */        sw $v0, %lo(D_ovl24_80135C30)($at)
  /* 12BA18 801326D8 00408825 */        or $s1, $v0, $zero
  /* 12BA1C 801326DC AFA90010 */        sw $t1, 0x10($sp)
  /* 12BA20 801326E0 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 12BA24 801326E4 00402025 */        or $a0, $v0, $zero
  /* 12BA28 801326E8 2406001B */     addiu $a2, $zero, 0x1b
  /* 12BA2C 801326EC 0C00277D */       jal func_80009DF4
  /* 12BA30 801326F0 02003825 */        or $a3, $s0, $zero
  /* 12BA34 801326F4 3C0A8013 */       lui $t2, %hi(D_ovl24_80135CC8)
  /* 12BA38 801326F8 8D4A5CC8 */        lw $t2, %lo(D_ovl24_80135CC8)($t2)
  /* 12BA3C 801326FC 3C0D8013 */       lui $t5, %hi(D_ovl24_8013605C)
  /* 12BA40 80132700 8DAD605C */        lw $t5, %lo(D_ovl24_8013605C)($t5)
  /* 12BA44 80132704 000A5880 */       sll $t3, $t2, 2
  /* 12BA48 80132708 03AB6021 */      addu $t4, $sp, $t3
  /* 12BA4C 8013270C 8D8C0028 */        lw $t4, 0x28($t4)
  /* 12BA50 80132710 02202025 */        or $a0, $s1, $zero
  /* 12BA54 80132714 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12BA58 80132718 018D2821 */      addu $a1, $t4, $t5
  /* 12BA5C 8013271C 94480024 */       lhu $t0, 0x24($v0)
  /* 12BA60 80132720 241000FF */     addiu $s0, $zero, 0xff
  /* 12BA64 80132724 A0500028 */        sb $s0, 0x28($v0)
  /* 12BA68 80132728 310EFFDF */      andi $t6, $t0, 0xffdf
  /* 12BA6C 8013272C A44E0024 */        sh $t6, 0x24($v0)
  /* 12BA70 80132730 35D80001 */       ori $t8, $t6, 1
  /* 12BA74 80132734 A4580024 */        sh $t8, 0x24($v0)
  /* 12BA78 80132738 A0500029 */        sb $s0, 0x29($v0)
  /* 12BA7C 8013273C A050002A */        sb $s0, 0x2a($v0)
  /* 12BA80 80132740 0C04C98D */       jal func_ovl24_80132634
  /* 12BA84 80132744 8FA40060 */        lw $a0, 0x60($sp)
  /* 12BA88 80132748 10400037 */      beqz $v0, .L80132828
  /* 12BA8C 8013274C 02202025 */        or $a0, $s1, $zero
  /* 12BA90 80132750 3C198013 */       lui $t9, %hi(D_ovl24_80136058)
  /* 12BA94 80132754 8F396058 */        lw $t9, %lo(D_ovl24_80136058)($t9)
  /* 12BA98 80132758 3C090000 */       lui $t1, %hi(D_NF_000050E8)
  /* 12BA9C 8013275C 252950E8 */     addiu $t1, $t1, %lo(D_NF_000050E8)
  /* 12BAA0 80132760 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12BAA4 80132764 03292821 */      addu $a1, $t9, $t1
  /* 12BAA8 80132768 944A0024 */       lhu $t2, 0x24($v0)
  /* 12BAAC 8013276C A0500028 */        sb $s0, 0x28($v0)
  /* 12BAB0 80132770 A0500029 */        sb $s0, 0x29($v0)
  /* 12BAB4 80132774 314CFFDF */      andi $t4, $t2, 0xffdf
  /* 12BAB8 80132778 A44C0024 */        sh $t4, 0x24($v0)
  /* 12BABC 8013277C 358D0001 */       ori $t5, $t4, 1
  /* 12BAC0 80132780 A44D0024 */        sh $t5, 0x24($v0)
  /* 12BAC4 80132784 A050002A */        sb $s0, 0x2a($v0)
  /* 12BAC8 80132788 3C088013 */       lui $t0, %hi(D_ovl24_80135CD8)
  /* 12BACC 8013278C 8D085CD8 */        lw $t0, %lo(D_ovl24_80135CD8)($t0)
  /* 12BAD0 80132790 3C188013 */       lui $t8, %hi(D_ovl24_8013605C)
  /* 12BAD4 80132794 8F18605C */        lw $t8, %lo(D_ovl24_8013605C)($t8)
  /* 12BAD8 80132798 00087880 */       sll $t7, $t0, 2
  /* 12BADC 8013279C 03AF7021 */      addu $t6, $sp, $t7
  /* 12BAE0 801327A0 8DCE0028 */        lw $t6, 0x28($t6)
  /* 12BAE4 801327A4 02202025 */        or $a0, $s1, $zero
  /* 12BAE8 801327A8 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12BAEC 801327AC 01D82821 */      addu $a1, $t6, $t8
  /* 12BAF0 801327B0 94590024 */       lhu $t9, 0x24($v0)
  /* 12BAF4 801327B4 A0500028 */        sb $s0, 0x28($v0)
  /* 12BAF8 801327B8 A0500029 */        sb $s0, 0x29($v0)
  /* 12BAFC 801327BC 332AFFDF */      andi $t2, $t9, 0xffdf
  /* 12BB00 801327C0 A44A0024 */        sh $t2, 0x24($v0)
  /* 12BB04 801327C4 354B0001 */       ori $t3, $t2, 1
  /* 12BB08 801327C8 A44B0024 */        sh $t3, 0x24($v0)
  /* 12BB0C 801327CC A050002A */        sb $s0, 0x2a($v0)
  /* 12BB10 801327D0 0C04C98D */       jal func_ovl24_80132634
  /* 12BB14 801327D4 8FA40060 */        lw $a0, 0x60($sp)
  /* 12BB18 801327D8 24010002 */     addiu $at, $zero, 2
  /* 12BB1C 801327DC 14410012 */       bne $v0, $at, .L80132828
  /* 12BB20 801327E0 3C0C8013 */       lui $t4, %hi(D_ovl24_80135CE8)
  /* 12BB24 801327E4 8D8C5CE8 */        lw $t4, %lo(D_ovl24_80135CE8)($t4)
  /* 12BB28 801327E8 3C0F8013 */       lui $t7, %hi(D_ovl24_8013605C)
  /* 12BB2C 801327EC 8DEF605C */        lw $t7, %lo(D_ovl24_8013605C)($t7)
  /* 12BB30 801327F0 000C6880 */       sll $t5, $t4, 2
  /* 12BB34 801327F4 03AD4021 */      addu $t0, $sp, $t5
  /* 12BB38 801327F8 8D080028 */        lw $t0, 0x28($t0)
  /* 12BB3C 801327FC 02202025 */        or $a0, $s1, $zero
  /* 12BB40 80132800 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12BB44 80132804 010F2821 */      addu $a1, $t0, $t7
  /* 12BB48 80132808 944E0024 */       lhu $t6, 0x24($v0)
  /* 12BB4C 8013280C A0500028 */        sb $s0, 0x28($v0)
  /* 12BB50 80132810 A0500029 */        sb $s0, 0x29($v0)
  /* 12BB54 80132814 31D9FFDF */      andi $t9, $t6, 0xffdf
  /* 12BB58 80132818 A4590024 */        sh $t9, 0x24($v0)
  /* 12BB5C 8013281C 37290001 */       ori $t1, $t9, 1
  /* 12BB60 80132820 A4490024 */        sh $t1, 0x24($v0)
  /* 12BB64 80132824 A050002A */        sb $s0, 0x2a($v0)
  .L80132828:
  /* 12BB68 80132828 8FBF0024 */        lw $ra, 0x24($sp)
  /* 12BB6C 8013282C 8FB0001C */        lw $s0, 0x1c($sp)
  /* 12BB70 80132830 8FB10020 */        lw $s1, 0x20($sp)
  /* 12BB74 80132834 03E00008 */        jr $ra
  /* 12BB78 80132838 27BD0060 */     addiu $sp, $sp, 0x60

glabel func_ovl24_8013283C
  /* 12BB7C 8013283C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 12BB80 80132840 AFBF0014 */        sw $ra, 0x14($sp)
  /* 12BB84 80132844 0C04C98D */       jal func_ovl24_80132634
  /* 12BB88 80132848 00000000 */       nop 
  /* 12BB8C 8013284C 10400022 */      beqz $v0, .L801328D8
  /* 12BB90 80132850 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12BB94 80132854 24010001 */     addiu $at, $zero, 1
  /* 12BB98 80132858 1441000D */       bne $v0, $at, .L80132890
  /* 12BB9C 8013285C 3C0A8013 */       lui $t2, %hi(D_ovl24_80135C30)
  /* 12BBA0 80132860 3C0E8013 */       lui $t6, %hi(D_ovl24_80135C30)
  /* 12BBA4 80132864 8DCE5C30 */        lw $t6, %lo(D_ovl24_80135C30)($t6)
  /* 12BBA8 80132868 8DC30074 */        lw $v1, 0x74($t6)
  /* 12BBAC 8013286C 8C640008 */        lw $a0, 8($v1)
  /* 12BBB0 80132870 846F0014 */        lh $t7, 0x14($v1)
  /* 12BBB4 80132874 8C880008 */        lw $t0, 8($a0)
  /* 12BBB8 80132878 84980014 */        lh $t8, 0x14($a0)
  /* 12BBBC 8013287C 85090014 */        lh $t1, 0x14($t0)
  /* 12BBC0 80132880 01F8C821 */      addu $t9, $t7, $t8
  /* 12BBC4 80132884 03291021 */      addu $v0, $t9, $t1
  /* 12BBC8 80132888 10000018 */         b .L801328EC
  /* 12BBCC 8013288C 2442000A */     addiu $v0, $v0, 0xa
  .L80132890:
  /* 12BBD0 80132890 8D4A5C30 */        lw $t2, %lo(D_ovl24_80135C30)($t2)
  /* 12BBD4 80132894 8D430074 */        lw $v1, 0x74($t2)
  /* 12BBD8 80132898 8C640008 */        lw $a0, 8($v1)
  /* 12BBDC 8013289C 8C820008 */        lw $v0, 8($a0)
  /* 12BBE0 801328A0 8C4B0008 */        lw $t3, 8($v0)
  /* 12BBE4 801328A4 84460014 */        lh $a2, 0x14($v0)
  /* 12BBE8 801328A8 85670014 */        lh $a3, 0x14($t3)
  /* 12BBEC 801328AC 00E6082A */       slt $at, $a3, $a2
  /* 12BBF0 801328B0 10200003 */      beqz $at, .L801328C0
  /* 12BBF4 801328B4 00E02825 */        or $a1, $a3, $zero
  /* 12BBF8 801328B8 10000001 */         b .L801328C0
  /* 12BBFC 801328BC 00C02825 */        or $a1, $a2, $zero
  .L801328C0:
  /* 12BC00 801328C0 846C0014 */        lh $t4, 0x14($v1)
  /* 12BC04 801328C4 848D0014 */        lh $t5, 0x14($a0)
  /* 12BC08 801328C8 018D7021 */      addu $t6, $t4, $t5
  /* 12BC0C 801328CC 01C51021 */      addu $v0, $t6, $a1
  /* 12BC10 801328D0 10000006 */         b .L801328EC
  /* 12BC14 801328D4 2442000A */     addiu $v0, $v0, 0xa
  .L801328D8:
  /* 12BC18 801328D8 3C0F8013 */       lui $t7, %hi(D_ovl24_80135C30)
  /* 12BC1C 801328DC 8DEF5C30 */        lw $t7, %lo(D_ovl24_80135C30)($t7)
  /* 12BC20 801328E0 8DF80074 */        lw $t8, 0x74($t7)
  /* 12BC24 801328E4 87020014 */        lh $v0, 0x14($t8)
  /* 12BC28 801328E8 2442000A */     addiu $v0, $v0, 0xa
  .L801328EC:
  /* 12BC2C 801328EC 03E00008 */        jr $ra
  /* 12BC30 801328F0 27BD0018 */     addiu $sp, $sp, 0x18

glabel func_ovl24_801328F4
  /* 12BC34 801328F4 3C0E8013 */       lui $t6, %hi(D_ovl24_80135C2C)
  /* 12BC38 801328F8 8DCE5C2C */        lw $t6, %lo(D_ovl24_80135C2C)($t6)
  /* 12BC3C 801328FC AFA40000 */        sw $a0, ($sp)
  /* 12BC40 80132900 8DC30074 */        lw $v1, 0x74($t6)
  /* 12BC44 80132904 8C780008 */        lw $t8, 8($v1)
  /* 12BC48 80132908 846F0014 */        lh $t7, 0x14($v1)
  /* 12BC4C 8013290C 87190014 */        lh $t9, 0x14($t8)
  /* 12BC50 80132910 01F91021 */      addu $v0, $t7, $t9
  /* 12BC54 80132914 03E00008 */        jr $ra
  /* 12BC58 80132918 2442000A */     addiu $v0, $v0, 0xa

glabel func_ovl24_8013291C
  /* 12BC5C 8013291C 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 12BC60 80132920 AFBF0014 */        sw $ra, 0x14($sp)
  /* 12BC64 80132924 0C04CA0F */       jal func_ovl24_8013283C
  /* 12BC68 80132928 AFA40020 */        sw $a0, 0x20($sp)
  /* 12BC6C 8013292C AFA2001C */        sw $v0, 0x1c($sp)
  /* 12BC70 80132930 0C04CA3D */       jal func_ovl24_801328F4
  /* 12BC74 80132934 8FA40020 */        lw $a0, 0x20($sp)
  /* 12BC78 80132938 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12BC7C 8013293C 8FAE001C */        lw $t6, 0x1c($sp)
  /* 12BC80 80132940 27BD0020 */     addiu $sp, $sp, 0x20
  /* 12BC84 80132944 03E00008 */        jr $ra
  /* 12BC88 80132948 004E1021 */      addu $v0, $v0, $t6

glabel func_ovl24_8013294C
  /* 12BC8C 8013294C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 12BC90 80132950 AFBF0014 */        sw $ra, 0x14($sp)
  /* 12BC94 80132954 0C04CA47 */       jal func_ovl24_8013291C
  /* 12BC98 80132958 AFA40028 */        sw $a0, 0x28($sp)
  /* 12BC9C 8013295C 3C014344 */       lui $at, (0x43440000 >> 16) # 196.0
  /* 12BCA0 80132960 44811000 */      mtc1 $at, $f2 # 196.0 to cop1
  /* 12BCA4 80132964 04410003 */      bgez $v0, .L80132974
  /* 12BCA8 80132968 00027043 */       sra $t6, $v0, 1
  /* 12BCAC 8013296C 24410001 */     addiu $at, $v0, 1
  /* 12BCB0 80132970 00017043 */       sra $t6, $at, 1
  .L80132974:
  /* 12BCB4 80132974 240F00A0 */     addiu $t7, $zero, 0xa0
  /* 12BCB8 80132978 01EE2823 */      subu $a1, $t7, $t6
  /* 12BCBC 8013297C 44852000 */      mtc1 $a1, $f4
  /* 12BCC0 80132980 3C188013 */       lui $t8, %hi(D_ovl24_80135C30)
  /* 12BCC4 80132984 8F185C30 */        lw $t8, %lo(D_ovl24_80135C30)($t8)
  /* 12BCC8 80132988 468021A0 */   cvt.s.w $f6, $f4
  /* 12BCCC 8013298C AFA50024 */        sw $a1, 0x24($sp)
  /* 12BCD0 80132990 8F030074 */        lw $v1, 0x74($t8)
  /* 12BCD4 80132994 E462005C */      swc1 $f2, 0x5c($v1)
  /* 12BCD8 80132998 E4660058 */      swc1 $f6, 0x58($v1)
  /* 12BCDC 8013299C 8FA40028 */        lw $a0, 0x28($sp)
  /* 12BCE0 801329A0 0C04C98D */       jal func_ovl24_80132634
  /* 12BCE4 801329A4 AFA3001C */        sw $v1, 0x1c($sp)
  /* 12BCE8 801329A8 3C014344 */       lui $at, (0x43440000 >> 16) # 196.0
  /* 12BCEC 801329AC 44811000 */      mtc1 $at, $f2 # 196.0 to cop1
  /* 12BCF0 801329B0 10400031 */      beqz $v0, .L80132A78
  /* 12BCF4 801329B4 8FA3001C */        lw $v1, 0x1c($sp)
  /* 12BCF8 801329B8 84790014 */        lh $t9, 0x14($v1)
  /* 12BCFC 801329BC C4680058 */      lwc1 $f8, 0x58($v1)
  /* 12BD00 801329C0 8C680008 */        lw $t0, 8($v1)
  /* 12BD04 801329C4 44995000 */      mtc1 $t9, $f10
  /* 12BD08 801329C8 24010001 */     addiu $at, $zero, 1
  /* 12BD0C 801329CC 46805420 */   cvt.s.w $f16, $f10
  /* 12BD10 801329D0 46104480 */     add.s $f18, $f8, $f16
  /* 12BD14 801329D4 E5120058 */      swc1 $f18, 0x58($t0)
  /* 12BD18 801329D8 8C690008 */        lw $t1, 8($v1)
  /* 12BD1C 801329DC 1441000D */       bne $v0, $at, .L80132A14
  /* 12BD20 801329E0 E522005C */      swc1 $f2, 0x5c($t1)
  /* 12BD24 801329E4 8C620008 */        lw $v0, 8($v1)
  /* 12BD28 801329E8 844A0014 */        lh $t2, 0x14($v0)
  /* 12BD2C 801329EC C4440058 */      lwc1 $f4, 0x58($v0)
  /* 12BD30 801329F0 8C4B0008 */        lw $t3, 8($v0)
  /* 12BD34 801329F4 448A3000 */      mtc1 $t2, $f6
  /* 12BD38 801329F8 00000000 */       nop 
  /* 12BD3C 801329FC 468032A0 */   cvt.s.w $f10, $f6
  /* 12BD40 80132A00 460A2200 */     add.s $f8, $f4, $f10
  /* 12BD44 80132A04 E5680058 */      swc1 $f8, 0x58($t3)
  /* 12BD48 80132A08 8C4C0008 */        lw $t4, 8($v0)
  /* 12BD4C 80132A0C 1000001A */         b .L80132A78
  /* 12BD50 80132A10 E582005C */      swc1 $f2, 0x5c($t4)
  .L80132A14:
  /* 12BD54 80132A14 8C620008 */        lw $v0, 8($v1)
  /* 12BD58 80132A18 3C01433C */       lui $at, (0x433C0000 >> 16) # 188.0
  /* 12BD5C 80132A1C 44815000 */      mtc1 $at, $f10 # 188.0 to cop1
  /* 12BD60 80132A20 844D0014 */        lh $t5, 0x14($v0)
  /* 12BD64 80132A24 C4500058 */      lwc1 $f16, 0x58($v0)
  /* 12BD68 80132A28 8C4F0008 */        lw $t7, 8($v0)
  /* 12BD6C 80132A2C 448D9000 */      mtc1 $t5, $f18
  /* 12BD70 80132A30 3C01434C */       lui $at, (0x434C0000 >> 16) # 204.0
  /* 12BD74 80132A34 468091A0 */   cvt.s.w $f6, $f18
  /* 12BD78 80132A38 46068100 */     add.s $f4, $f16, $f6
  /* 12BD7C 80132A3C E5E40058 */      swc1 $f4, 0x58($t7)
  /* 12BD80 80132A40 8C4E0008 */        lw $t6, 8($v0)
  /* 12BD84 80132A44 44812000 */      mtc1 $at, $f4 # 204.0 to cop1
  /* 12BD88 80132A48 E5CA005C */      swc1 $f10, 0x5c($t6)
  /* 12BD8C 80132A4C 84580014 */        lh $t8, 0x14($v0)
  /* 12BD90 80132A50 C4480058 */      lwc1 $f8, 0x58($v0)
  /* 12BD94 80132A54 8C590008 */        lw $t9, 8($v0)
  /* 12BD98 80132A58 44989000 */      mtc1 $t8, $f18
  /* 12BD9C 80132A5C 8F280008 */        lw $t0, 8($t9)
  /* 12BDA0 80132A60 46809420 */   cvt.s.w $f16, $f18
  /* 12BDA4 80132A64 46104180 */     add.s $f6, $f8, $f16
  /* 12BDA8 80132A68 E5060058 */      swc1 $f6, 0x58($t0)
  /* 12BDAC 80132A6C 8C490008 */        lw $t1, 8($v0)
  /* 12BDB0 80132A70 8D2A0008 */        lw $t2, 8($t1)
  /* 12BDB4 80132A74 E544005C */      swc1 $f4, 0x5c($t2)
  .L80132A78:
  /* 12BDB8 80132A78 3C0B8013 */       lui $t3, %hi(D_ovl24_80135C2C)
  /* 12BDBC 80132A7C 8D6B5C2C */        lw $t3, %lo(D_ovl24_80135C2C)($t3)
  /* 12BDC0 80132A80 8FA40028 */        lw $a0, 0x28($sp)
  /* 12BDC4 80132A84 8D630074 */        lw $v1, 0x74($t3)
  /* 12BDC8 80132A88 0C04CA0F */       jal func_ovl24_8013283C
  /* 12BDCC 80132A8C AFA3001C */        sw $v1, 0x1c($sp)
  /* 12BDD0 80132A90 8FA3001C */        lw $v1, 0x1c($sp)
  /* 12BDD4 80132A94 8FAC0024 */        lw $t4, 0x24($sp)
  /* 12BDD8 80132A98 3C014344 */       lui $at, (0x43440000 >> 16) # 196.0
  /* 12BDDC 80132A9C 846F0014 */        lh $t7, 0x14($v1)
  /* 12BDE0 80132AA0 004C6821 */      addu $t5, $v0, $t4
  /* 12BDE4 80132AA4 448D5000 */      mtc1 $t5, $f10
  /* 12BDE8 80132AA8 448F9000 */      mtc1 $t7, $f18
  /* 12BDEC 80132AAC 44811000 */      mtc1 $at, $f2 # 196.0 to cop1
  /* 12BDF0 80132AB0 46805020 */   cvt.s.w $f0, $f10
  /* 12BDF4 80132AB4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 12BDF8 80132AB8 44813000 */      mtc1 $at, $f6 # 10.0 to cop1
  /* 12BDFC 80132ABC 8C6E0008 */        lw $t6, 8($v1)
  /* 12BE00 80132AC0 E462005C */      swc1 $f2, 0x5c($v1)
  /* 12BE04 80132AC4 46809220 */   cvt.s.w $f8, $f18
  /* 12BE08 80132AC8 E4600058 */      swc1 $f0, 0x58($v1)
  /* 12BE0C 80132ACC 2401000C */     addiu $at, $zero, 0xc
  /* 12BE10 80132AD0 46080400 */     add.s $f16, $f0, $f8
  /* 12BE14 80132AD4 46068100 */     add.s $f4, $f16, $f6
  /* 12BE18 80132AD8 E5C40058 */      swc1 $f4, 0x58($t6)
  /* 12BE1C 80132ADC 8FB80028 */        lw $t8, 0x28($sp)
  /* 12BE20 80132AE0 17010005 */       bne $t8, $at, .L80132AF8
  /* 12BE24 80132AE4 3C01433E */       lui $at, (0x433E0000 >> 16) # 190.0
  /* 12BE28 80132AE8 44815000 */      mtc1 $at, $f10 # 190.0 to cop1
  /* 12BE2C 80132AEC 8C790008 */        lw $t9, 8($v1)
  /* 12BE30 80132AF0 10000003 */         b .L80132B00
  /* 12BE34 80132AF4 E72A005C */      swc1 $f10, 0x5c($t9)
  .L80132AF8:
  /* 12BE38 80132AF8 8C680008 */        lw $t0, 8($v1)
  /* 12BE3C 80132AFC E502005C */      swc1 $f2, 0x5c($t0)
  .L80132B00:
  /* 12BE40 80132B00 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12BE44 80132B04 27BD0028 */     addiu $sp, $sp, 0x28
  /* 12BE48 80132B08 03E00008 */        jr $ra
  /* 12BE4C 80132B0C 00000000 */       nop 

glabel func_ovl24_80132B10
  /* 12BE50 80132B10 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 12BE54 80132B14 AFBF0014 */        sw $ra, 0x14($sp)
  /* 12BE58 80132B18 0C04C99A */       jal func_ovl24_80132668
  /* 12BE5C 80132B1C AFA40018 */        sw $a0, 0x18($sp)
  /* 12BE60 80132B20 0C04C93B */       jal func_ovl24_801324EC
  /* 12BE64 80132B24 8FA40018 */        lw $a0, 0x18($sp)
  /* 12BE68 80132B28 0C04CA53 */       jal func_ovl24_8013294C
  /* 12BE6C 80132B2C 8FA40018 */        lw $a0, 0x18($sp)
  /* 12BE70 80132B30 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12BE74 80132B34 27BD0018 */     addiu $sp, $sp, 0x18
  /* 12BE78 80132B38 03E00008 */        jr $ra
  /* 12BE7C 80132B3C 00000000 */       nop 

glabel func_ovl24_80132B40
  /* 12BE80 80132B40 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 12BE84 80132B44 AFBF0014 */        sw $ra, 0x14($sp)
  /* 12BE88 80132B48 0C04C7DB */       jal func_ovl24_80131F6C
  /* 12BE8C 80132B4C AFA40018 */        sw $a0, 0x18($sp)
  /* 12BE90 80132B50 10400005 */      beqz $v0, .L80132B68
  /* 12BE94 80132B54 8FA40018 */        lw $a0, 0x18($sp)
  /* 12BE98 80132B58 0C04CAC4 */       jal func_ovl24_80132B10
  /* 12BE9C 80132B5C 00000000 */       nop 
  /* 12BEA0 80132B60 10000004 */         b .L80132B74
  /* 12BEA4 80132B64 8FBF0014 */        lw $ra, 0x14($sp)
  .L80132B68:
  /* 12BEA8 80132B68 0C04C8D5 */       jal func_ovl24_80132354
  /* 12BEAC 80132B6C 00000000 */       nop 
  /* 12BEB0 80132B70 8FBF0014 */        lw $ra, 0x14($sp)
  .L80132B74:
  /* 12BEB4 80132B74 27BD0018 */     addiu $sp, $sp, 0x18
  /* 12BEB8 80132B78 03E00008 */        jr $ra
  /* 12BEBC 80132B7C 00000000 */       nop 

glabel func_ovl24_80132B80
  /* 12BEC0 80132B80 3C0E8013 */       lui $t6, %hi(D_ovl24_80134F90)
  /* 12BEC4 80132B84 25CE4F90 */     addiu $t6, $t6, %lo(D_ovl24_80134F90)
  /* 12BEC8 80132B88 8DD80000 */        lw $t8, ($t6) # D_ovl24_80134F90 + 0
  /* 12BECC 80132B8C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 12BED0 80132B90 27A20000 */     addiu $v0, $sp, 0
  /* 12BED4 80132B94 AC580000 */        sw $t8, ($v0)
  /* 12BED8 80132B98 8DCF0004 */        lw $t7, 4($t6) # D_ovl24_80134F90 + 4
  /* 12BEDC 80132B9C 0004C880 */       sll $t9, $a0, 2
  /* 12BEE0 80132BA0 00594021 */      addu $t0, $v0, $t9
  /* 12BEE4 80132BA4 AC4F0004 */        sw $t7, 4($v0)
  /* 12BEE8 80132BA8 8DD80008 */        lw $t8, 8($t6) # D_ovl24_80134F90 + 8
  /* 12BEEC 80132BAC AC580008 */        sw $t8, 8($v0)
  /* 12BEF0 80132BB0 8DCF000C */        lw $t7, 0xc($t6) # D_ovl24_80134F90 + 12
  /* 12BEF4 80132BB4 AC4F000C */        sw $t7, 0xc($v0)
  /* 12BEF8 80132BB8 8DD80010 */        lw $t8, 0x10($t6) # D_ovl24_80134F90 + 16
  /* 12BEFC 80132BBC AC580010 */        sw $t8, 0x10($v0)
  /* 12BF00 80132BC0 8DCF0014 */        lw $t7, 0x14($t6) # D_ovl24_80134F90 + 20
  /* 12BF04 80132BC4 AC4F0014 */        sw $t7, 0x14($v0)
  /* 12BF08 80132BC8 C5000000 */      lwc1 $f0, ($t0)
  /* 12BF0C 80132BCC 03E00008 */        jr $ra
  /* 12BF10 80132BD0 27BD0018 */     addiu $sp, $sp, 0x18

glabel func_ovl24_80132BD4
  /* 12BF14 80132BD4 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 12BF18 80132BD8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 12BF1C 80132BDC 8C820074 */        lw $v0, 0x74($a0)
  /* 12BF20 80132BE0 44801000 */      mtc1 $zero, $f2
  /* 12BF24 80132BE4 8C830084 */        lw $v1, 0x84($a0)
  /* 12BF28 80132BE8 C4440024 */      lwc1 $f4, 0x24($v0)
  /* 12BF2C 80132BEC 8C650178 */        lw $a1, 0x178($v1)
  /* 12BF30 80132BF0 4602203C */    c.lt.s $f4, $f2
  /* 12BF34 80132BF4 00A02025 */        or $a0, $a1, $zero
  /* 12BF38 80132BF8 4502000F */     bc1fl .L80132C38
  /* 12BF3C 80132BFC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12BF40 80132C00 0C04CAE0 */       jal func_ovl24_80132B80
  /* 12BF44 80132C04 AFA20018 */        sw $v0, 0x18($sp)
  /* 12BF48 80132C08 8FA20018 */        lw $v0, 0x18($sp)
  /* 12BF4C 80132C0C 44801000 */      mtc1 $zero, $f2
  /* 12BF50 80132C10 C4460024 */      lwc1 $f6, 0x24($v0)
  /* 12BF54 80132C14 46003200 */     add.s $f8, $f6, $f0
  /* 12BF58 80132C18 E4480024 */      swc1 $f8, 0x24($v0)
  /* 12BF5C 80132C1C C44A0024 */      lwc1 $f10, 0x24($v0)
  /* 12BF60 80132C20 460A103C */    c.lt.s $f2, $f10
  /* 12BF64 80132C24 00000000 */       nop 
  /* 12BF68 80132C28 45020003 */     bc1fl .L80132C38
  /* 12BF6C 80132C2C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12BF70 80132C30 E4420024 */      swc1 $f2, 0x24($v0)
  /* 12BF74 80132C34 8FBF0014 */        lw $ra, 0x14($sp)
  .L80132C38:
  /* 12BF78 80132C38 27BD0020 */     addiu $sp, $sp, 0x20
  /* 12BF7C 80132C3C 03E00008 */        jr $ra
  /* 12BF80 80132C40 00000000 */       nop 

glabel func_ovl24_80132C44
  /* 12BF84 80132C44 3C0E8013 */       lui $t6, %hi(D_ovl24_80134FA8)
  /* 12BF88 80132C48 25CE4FA8 */     addiu $t6, $t6, %lo(D_ovl24_80134FA8)
  /* 12BF8C 80132C4C 8DD80000 */        lw $t8, ($t6) # D_ovl24_80134FA8 + 0
  /* 12BF90 80132C50 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 12BF94 80132C54 27A20000 */     addiu $v0, $sp, 0
  /* 12BF98 80132C58 AC580000 */        sw $t8, ($v0)
  /* 12BF9C 80132C5C 8DCF0004 */        lw $t7, 4($t6) # D_ovl24_80134FA8 + 4
  /* 12BFA0 80132C60 0004C880 */       sll $t9, $a0, 2
  /* 12BFA4 80132C64 00594021 */      addu $t0, $v0, $t9
  /* 12BFA8 80132C68 AC4F0004 */        sw $t7, 4($v0)
  /* 12BFAC 80132C6C 8DD80008 */        lw $t8, 8($t6) # D_ovl24_80134FA8 + 8
  /* 12BFB0 80132C70 AC580008 */        sw $t8, 8($v0)
  /* 12BFB4 80132C74 8DCF000C */        lw $t7, 0xc($t6) # D_ovl24_80134FA8 + 12
  /* 12BFB8 80132C78 AC4F000C */        sw $t7, 0xc($v0)
  /* 12BFBC 80132C7C 8DD80010 */        lw $t8, 0x10($t6) # D_ovl24_80134FA8 + 16
  /* 12BFC0 80132C80 AC580010 */        sw $t8, 0x10($v0)
  /* 12BFC4 80132C84 8DCF0014 */        lw $t7, 0x14($t6) # D_ovl24_80134FA8 + 20
  /* 12BFC8 80132C88 AC4F0014 */        sw $t7, 0x14($v0)
  /* 12BFCC 80132C8C C5000000 */      lwc1 $f0, ($t0)
  /* 12BFD0 80132C90 03E00008 */        jr $ra
  /* 12BFD4 80132C94 27BD0018 */     addiu $sp, $sp, 0x18

glabel func_ovl24_80132C98
  /* 12BFD8 80132C98 27BDFF80 */     addiu $sp, $sp, -0x80
  /* 12BFDC 80132C9C AFA40080 */        sw $a0, 0x80($sp)
  /* 12BFE0 80132CA0 3C0E8011 */       lui $t6, %hi(D_ovl2_80116DD0)
  /* 12BFE4 80132CA4 27A40038 */     addiu $a0, $sp, 0x38
  /* 12BFE8 80132CA8 25CE6DD0 */     addiu $t6, $t6, %lo(D_ovl2_80116DD0)
  /* 12BFEC 80132CAC AFBF001C */        sw $ra, 0x1c($sp)
  /* 12BFF0 80132CB0 AFB00018 */        sw $s0, 0x18($sp)
  /* 12BFF4 80132CB4 AFA50084 */        sw $a1, 0x84($sp)
  /* 12BFF8 80132CB8 AFA60088 */        sw $a2, 0x88($sp)
  /* 12BFFC 80132CBC AFA7008C */        sw $a3, 0x8c($sp)
  /* 12C000 80132CC0 25C8003C */     addiu $t0, $t6, 0x3c
  /* 12C004 80132CC4 0080C825 */        or $t9, $a0, $zero
  .L80132CC8:
  /* 12C008 80132CC8 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 12C00C 80132CCC 25CE000C */     addiu $t6, $t6, 0xc
  /* 12C010 80132CD0 2739000C */     addiu $t9, $t9, 0xc
  /* 12C014 80132CD4 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 12C018 80132CD8 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl2_80116DD0 + -8
  /* 12C01C 80132CDC AF2FFFF8 */        sw $t7, -8($t9)
  /* 12C020 80132CE0 8DD8FFFC */        lw $t8, -4($t6) # D_ovl2_80116DD0 + -4
  /* 12C024 80132CE4 15C8FFF8 */       bne $t6, $t0, .L80132CC8
  /* 12C028 80132CE8 AF38FFFC */        sw $t8, -4($t9)
  /* 12C02C 80132CEC 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 12C030 80132CF0 3C0A8013 */       lui $t2, %hi(D_ovl24_80134FC0)
  /* 12C034 80132CF4 254A4FC0 */     addiu $t2, $t2, %lo(D_ovl24_80134FC0)
  /* 12C038 80132CF8 AF380000 */        sw $t8, ($t9)
  /* 12C03C 80132CFC 8D4B0004 */        lw $t3, 4($t2) # D_ovl24_80134FC0 + 4
  /* 12C040 80132D00 8D4C0000 */        lw $t4, ($t2) # D_ovl24_80134FC0 + 0
  /* 12C044 80132D04 27A90020 */     addiu $t1, $sp, 0x20
  /* 12C048 80132D08 AD2B0004 */        sw $t3, 4($t1)
  /* 12C04C 80132D0C AD2C0000 */        sw $t4, ($t1)
  /* 12C050 80132D10 8D4C0008 */        lw $t4, 8($t2) # D_ovl24_80134FC0 + 8
  /* 12C054 80132D14 8D4B000C */        lw $t3, 0xc($t2) # D_ovl24_80134FC0 + 12
  /* 12C058 80132D18 AD2C0008 */        sw $t4, 8($t1)
  /* 12C05C 80132D1C AD2B000C */        sw $t3, 0xc($t1)
  /* 12C060 80132D20 8D4B0014 */        lw $t3, 0x14($t2) # D_ovl24_80134FC0 + 20
  /* 12C064 80132D24 8D4C0010 */        lw $t4, 0x10($t2) # D_ovl24_80134FC0 + 16
  /* 12C068 80132D28 AD2B0014 */        sw $t3, 0x14($t1)
  /* 12C06C 80132D2C AD2C0010 */        sw $t4, 0x10($t1)
  /* 12C070 80132D30 8FAD0080 */        lw $t5, 0x80($sp)
  /* 12C074 80132D34 8FA80084 */        lw $t0, 0x84($sp)
  /* 12C078 80132D38 8FAE0088 */        lw $t6, 0x88($sp)
  /* 12C07C 80132D3C 8FB90090 */        lw $t9, 0x90($sp)
  /* 12C080 80132D40 AFAD0038 */        sw $t5, 0x38($sp)
  /* 12C084 80132D44 A3A8004F */        sb $t0, 0x4f($sp)
  /* 12C088 80132D48 A3AE0050 */        sb $t6, 0x50($sp)
  /* 12C08C 80132D4C 8F2F0000 */        lw $t7, ($t9)
  /* 12C090 80132D50 A3A0004D */        sb $zero, 0x4d($sp)
  /* 12C094 80132D54 0C035FCF */       jal ftManager_CreateFighter
  /* 12C098 80132D58 AFAF0070 */        sw $t7, 0x70($sp)
  /* 12C09C 80132D5C 3C050001 */       lui $a1, (0x1000D >> 16) # 65549
  /* 12C0A0 80132D60 00408025 */        or $s0, $v0, $zero
  /* 12C0A4 80132D64 34A5000D */       ori $a1, $a1, (0x1000D & 0xFFFF) # 65549
  /* 12C0A8 80132D68 0C0E4173 */       jal func_ovl1_803905CC
  /* 12C0AC 80132D6C 00402025 */        or $a0, $v0, $zero
  /* 12C0B0 80132D70 8FA3008C */        lw $v1, 0x8c($sp)
  /* 12C0B4 80132D74 8E020084 */        lw $v0, 0x84($s0)
  /* 12C0B8 80132D78 02002025 */        or $a0, $s0, $zero
  /* 12C0BC 80132D7C 0003C080 */       sll $t8, $v1, 2
  /* 12C0C0 80132D80 03B82821 */      addu $a1, $sp, $t8
  /* 12C0C4 80132D84 AC430178 */        sw $v1, 0x178($v0)
  /* 12C0C8 80132D88 90A50023 */       lbu $a1, 0x23($a1)
  /* 12C0CC 80132D8C 0C002834 */       jal om_g_move_obj_dl
  /* 12C0D0 80132D90 3C068000 */       lui $a2, 0x8000
  /* 12C0D4 80132D94 3C058013 */       lui $a1, %hi(func_ovl24_80132BD4)
  /* 12C0D8 80132D98 24A52BD4 */     addiu $a1, $a1, %lo(func_ovl24_80132BD4)
  /* 12C0DC 80132D9C 02002025 */        or $a0, $s0, $zero
  /* 12C0E0 80132DA0 24060001 */     addiu $a2, $zero, 1
  /* 12C0E4 80132DA4 0C002062 */       jal omAddGObjCommonProc
  /* 12C0E8 80132DA8 24070001 */     addiu $a3, $zero, 1
  /* 12C0EC 80132DAC 44800000 */      mtc1 $zero, $f0
  /* 12C0F0 80132DB0 8E090074 */        lw $t1, 0x74($s0)
  /* 12C0F4 80132DB4 E520001C */      swc1 $f0, 0x1c($t1)
  /* 12C0F8 80132DB8 8E0A0074 */        lw $t2, 0x74($s0)
  /* 12C0FC 80132DBC E5400020 */      swc1 $f0, 0x20($t2)
  /* 12C100 80132DC0 0C04CB11 */       jal func_ovl24_80132C44
  /* 12C104 80132DC4 8FA4008C */        lw $a0, 0x8c($sp)
  /* 12C108 80132DC8 8E0B0074 */        lw $t3, 0x74($s0)
  /* 12C10C 80132DCC 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 12C110 80132DD0 44811000 */      mtc1 $at, $f2 # 1.0 to cop1
  /* 12C114 80132DD4 E5600024 */      swc1 $f0, 0x24($t3)
  /* 12C118 80132DD8 8E0C0074 */        lw $t4, 0x74($s0)
  /* 12C11C 80132DDC E5820040 */      swc1 $f2, 0x40($t4)
  /* 12C120 80132DE0 8E0D0074 */        lw $t5, 0x74($s0)
  /* 12C124 80132DE4 E5A20044 */      swc1 $f2, 0x44($t5)
  /* 12C128 80132DE8 8E080074 */        lw $t0, 0x74($s0)
  /* 12C12C 80132DEC E5020048 */      swc1 $f2, 0x48($t0)
  /* 12C130 80132DF0 8FBF001C */        lw $ra, 0x1c($sp)
  /* 12C134 80132DF4 8FB00018 */        lw $s0, 0x18($sp)
  /* 12C138 80132DF8 27BD0080 */     addiu $sp, $sp, 0x80
  /* 12C13C 80132DFC 03E00008 */        jr $ra
  /* 12C140 80132E00 00000000 */       nop 

glabel func_ovl24_80132E04
  /* 12C144 80132E04 948E0024 */       lhu $t6, 0x24($a0)
  /* 12C148 80132E08 240800FF */     addiu $t0, $zero, 0xff
  /* 12C14C 80132E0C A0880028 */        sb $t0, 0x28($a0)
  /* 12C150 80132E10 31D8FFDF */      andi $t8, $t6, 0xffdf
  /* 12C154 80132E14 A4980024 */        sh $t8, 0x24($a0)
  /* 12C158 80132E18 37190001 */       ori $t9, $t8, 1
  /* 12C15C 80132E1C A4990024 */        sh $t9, 0x24($a0)
  /* 12C160 80132E20 A0800029 */        sb $zero, 0x29($a0)
  /* 12C164 80132E24 03E00008 */        jr $ra
  /* 12C168 80132E28 A080002A */        sb $zero, 0x2a($a0)

glabel func_ovl24_80132E2C
  /* 12C16C 80132E2C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 12C170 80132E30 AFBF001C */        sw $ra, 0x1c($sp)
  /* 12C174 80132E34 AFA40028 */        sw $a0, 0x28($sp)
  /* 12C178 80132E38 00002025 */        or $a0, $zero, $zero
  /* 12C17C 80132E3C 00002825 */        or $a1, $zero, $zero
  /* 12C180 80132E40 24060013 */     addiu $a2, $zero, 0x13
  /* 12C184 80132E44 0C00265A */       jal omMakeGObjCommon
  /* 12C188 80132E48 3C078000 */       lui $a3, 0x8000
  /* 12C18C 80132E4C 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 12C190 80132E50 240EFFFF */     addiu $t6, $zero, -1
  /* 12C194 80132E54 AFA20024 */        sw $v0, 0x24($sp)
  /* 12C198 80132E58 AFAE0010 */        sw $t6, 0x10($sp)
  /* 12C19C 80132E5C 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 12C1A0 80132E60 00402025 */        or $a0, $v0, $zero
  /* 12C1A4 80132E64 2406001B */     addiu $a2, $zero, 0x1b
  /* 12C1A8 80132E68 0C00277D */       jal func_80009DF4
  /* 12C1AC 80132E6C 3C078000 */       lui $a3, 0x8000
  /* 12C1B0 80132E70 8FAF0028 */        lw $t7, 0x28($sp)
  /* 12C1B4 80132E74 24010004 */     addiu $at, $zero, 4
  /* 12C1B8 80132E78 8FA40024 */        lw $a0, 0x24($sp)
  /* 12C1BC 80132E7C 15E10010 */       bne $t7, $at, .L80132EC0
  /* 12C1C0 80132E80 3C088013 */       lui $t0, 0x8013
  /* 12C1C4 80132E84 3C188013 */       lui $t8, %hi(D_ovl24_80136058)
  /* 12C1C8 80132E88 8F186058 */        lw $t8, %lo(D_ovl24_80136058)($t8)
  /* 12C1CC 80132E8C 3C190000 */       lui $t9, %hi(D_NF_00006B18)
  /* 12C1D0 80132E90 27396B18 */     addiu $t9, $t9, %lo(D_NF_00006B18)
  /* 12C1D4 80132E94 8FA40024 */        lw $a0, 0x24($sp)
  /* 12C1D8 80132E98 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12C1DC 80132E9C 03192821 */      addu $a1, $t8, $t9
  /* 12C1E0 80132EA0 3C0142A0 */       lui $at, (0x42A00000 >> 16) # 80.0
  /* 12C1E4 80132EA4 44810000 */      mtc1 $at, $f0 # 80.0 to cop1
  /* 12C1E8 80132EA8 00402025 */        or $a0, $v0, $zero
  /* 12C1EC 80132EAC E4400058 */      swc1 $f0, 0x58($v0)
  /* 12C1F0 80132EB0 0C04CB81 */       jal func_ovl24_80132E04
  /* 12C1F4 80132EB4 E440005C */      swc1 $f0, 0x5c($v0)
  /* 12C1F8 80132EB8 1000001E */         b .L80132F34
  /* 12C1FC 80132EBC 8FBF001C */        lw $ra, 0x1c($sp)
  .L80132EC0:
  /* 12C200 80132EC0 8D086058 */        lw $t0, 0x6058($t0)
  /* 12C204 80132EC4 3C090000 */       lui $t1, %hi(D_NF_00006C38)
  /* 12C208 80132EC8 25296C38 */     addiu $t1, $t1, %lo(D_NF_00006C38)
  /* 12C20C 80132ECC 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12C210 80132ED0 01092821 */      addu $a1, $t0, $t1
  /* 12C214 80132ED4 3C0142A0 */       lui $at, (0x42A00000 >> 16) # 80.0
  /* 12C218 80132ED8 44810000 */      mtc1 $at, $f0 # 80.0 to cop1
  /* 12C21C 80132EDC 3C01428C */       lui $at, (0x428C0000 >> 16) # 70.0
  /* 12C220 80132EE0 44812000 */      mtc1 $at, $f4 # 70.0 to cop1
  /* 12C224 80132EE4 00402025 */        or $a0, $v0, $zero
  /* 12C228 80132EE8 E4400058 */      swc1 $f0, 0x58($v0)
  /* 12C22C 80132EEC 0C04CB81 */       jal func_ovl24_80132E04
  /* 12C230 80132EF0 E444005C */      swc1 $f4, 0x5c($v0)
  /* 12C234 80132EF4 3C0A8013 */       lui $t2, %hi(D_ovl24_80136058)
  /* 12C238 80132EF8 8D4A6058 */        lw $t2, %lo(D_ovl24_80136058)($t2)
  /* 12C23C 80132EFC 3C0B0000 */       lui $t3, %hi(D_NF_00006B18)
  /* 12C240 80132F00 256B6B18 */     addiu $t3, $t3, %lo(D_NF_00006B18)
  /* 12C244 80132F04 8FA40024 */        lw $a0, 0x24($sp)
  /* 12C248 80132F08 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12C24C 80132F0C 014B2821 */      addu $a1, $t2, $t3
  /* 12C250 80132F10 3C0142B4 */       lui $at, (0x42B40000 >> 16) # 90.0
  /* 12C254 80132F14 44813000 */      mtc1 $at, $f6 # 90.0 to cop1
  /* 12C258 80132F18 3C0142C8 */       lui $at, (0x42C80000 >> 16) # 100.0
  /* 12C25C 80132F1C 44814000 */      mtc1 $at, $f8 # 100.0 to cop1
  /* 12C260 80132F20 00402025 */        or $a0, $v0, $zero
  /* 12C264 80132F24 E4460058 */      swc1 $f6, 0x58($v0)
  /* 12C268 80132F28 0C04CB81 */       jal func_ovl24_80132E04
  /* 12C26C 80132F2C E448005C */      swc1 $f8, 0x5c($v0)
  /* 12C270 80132F30 8FBF001C */        lw $ra, 0x1c($sp)
  .L80132F34:
  /* 12C274 80132F34 27BD0028 */     addiu $sp, $sp, 0x28
  /* 12C278 80132F38 03E00008 */        jr $ra
  /* 12C27C 80132F3C 00000000 */       nop 

glabel func_ovl24_80132F40
  /* 12C280 80132F40 24010004 */     addiu $at, $zero, 4
  /* 12C284 80132F44 5481000B */      bnel $a0, $at, .L80132F74
  /* 12C288 80132F48 3C0141F0 */       lui $at, 0x41f0
  /* 12C28C 80132F4C 14A00005 */      bnez $a1, .L80132F64
  /* 12C290 80132F50 3C014220 */       lui $at, 0x4220
  /* 12C294 80132F54 3C014220 */       lui $at, (0x42200000 >> 16) # 40.0
  /* 12C298 80132F58 44810000 */      mtc1 $at, $f0 # 40.0 to cop1
  /* 12C29C 80132F5C 03E00008 */        jr $ra
  /* 12C2A0 80132F60 00000000 */       nop 

  .L80132F64:
  /* 12C2A4 80132F64 44810000 */      mtc1 $at, $f0
  /* 12C2A8 80132F68 03E00008 */        jr $ra
  /* 12C2AC 80132F6C 00000000 */       nop 

  /* 12C2B0 80132F70 3C0141F0 */       lui $at, (0x41F00000 >> 16) # 30.0
  .L80132F74:
  /* 12C2B4 80132F74 44810000 */      mtc1 $at, $f0 # 30.0 to cop1
  /* 12C2B8 80132F78 00000000 */       nop 
  /* 12C2BC 80132F7C 03E00008 */        jr $ra
  /* 12C2C0 80132F80 00000000 */       nop 

glabel func_ovl24_80132F84
  /* 12C2C4 80132F84 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 12C2C8 80132F88 3C078013 */       lui $a3, %hi(D_ovl24_80135C28)
  /* 12C2CC 80132F8C 8CE75C28 */        lw $a3, %lo(D_ovl24_80135C28)($a3)
  /* 12C2D0 80132F90 AFBF0014 */        sw $ra, 0x14($sp)
  /* 12C2D4 80132F94 8C860084 */        lw $a2, 0x84($a0)
  /* 12C2D8 80132F98 24010001 */     addiu $at, $zero, 1
  /* 12C2DC 80132F9C 8C820074 */        lw $v0, 0x74($a0)
  /* 12C2E0 80132FA0 10E10009 */       beq $a3, $at, .L80132FC8
  /* 12C2E4 80132FA4 8CC50178 */        lw $a1, 0x178($a2)
  /* 12C2E8 80132FA8 24010008 */     addiu $at, $zero, 8
  /* 12C2EC 80132FAC 10E10011 */       beq $a3, $at, .L80132FF4
  /* 12C2F0 80132FB0 0005C880 */       sll $t9, $a1, 2
  /* 12C2F4 80132FB4 2401000C */     addiu $at, $zero, 0xc
  /* 12C2F8 80132FB8 50E1002E */      beql $a3, $at, .L80133074
  /* 12C2FC 80132FBC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12C300 80132FC0 10000017 */         b .L80133020
  /* 12C304 80132FC4 00E02025 */        or $a0, $a3, $zero
  .L80132FC8:
  /* 12C308 80132FC8 3C0F8013 */       lui $t7, %hi(D_ovl24_80135CF8)
  /* 12C30C 80132FCC 8DEF5CF8 */        lw $t7, %lo(D_ovl24_80135CF8)($t7)
  /* 12C310 80132FD0 00057080 */       sll $t6, $a1, 2
  /* 12C314 80132FD4 01C57023 */      subu $t6, $t6, $a1
  /* 12C318 80132FD8 01CF082A */       slt $at, $t6, $t7
  /* 12C31C 80132FDC 10200003 */      beqz $at, .L80132FEC
  /* 12C320 80132FE0 24180001 */     addiu $t8, $zero, 1
  /* 12C324 80132FE4 10000022 */         b .L80133070
  /* 12C328 80132FE8 AC80007C */        sw $zero, 0x7c($a0)
  .L80132FEC:
  /* 12C32C 80132FEC 10000020 */         b .L80133070
  /* 12C330 80132FF0 AC98007C */        sw $t8, 0x7c($a0)
  .L80132FF4:
  /* 12C334 80132FF4 3C088013 */       lui $t0, %hi(D_ovl24_80135CF8)
  /* 12C338 80132FF8 8D085CF8 */        lw $t0, %lo(D_ovl24_80135CF8)($t0)
  /* 12C33C 80132FFC 0325C821 */      addu $t9, $t9, $a1
  /* 12C340 80133000 0019C840 */       sll $t9, $t9, 1
  /* 12C344 80133004 0328082A */       slt $at, $t9, $t0
  /* 12C348 80133008 10200003 */      beqz $at, .L80133018
  /* 12C34C 8013300C 24090001 */     addiu $t1, $zero, 1
  /* 12C350 80133010 10000017 */         b .L80133070
  /* 12C354 80133014 AC80007C */        sw $zero, 0x7c($a0)
  .L80133018:
  /* 12C358 80133018 10000015 */         b .L80133070
  /* 12C35C 8013301C AC89007C */        sw $t1, 0x7c($a0)
  .L80133020:
  /* 12C360 80133020 44801000 */      mtc1 $zero, $f2
  /* 12C364 80133024 C4440024 */      lwc1 $f4, 0x24($v0)
  /* 12C368 80133028 4602203C */    c.lt.s $f4, $f2
  /* 12C36C 8013302C 00000000 */       nop 
  /* 12C370 80133030 45020010 */     bc1fl .L80133074
  /* 12C374 80133034 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12C378 80133038 8CC50008 */        lw $a1, 8($a2)
  /* 12C37C 8013303C 0C04CBD0 */       jal func_ovl24_80132F40
  /* 12C380 80133040 AFA20018 */        sw $v0, 0x18($sp)
  /* 12C384 80133044 8FA20018 */        lw $v0, 0x18($sp)
  /* 12C388 80133048 44801000 */      mtc1 $zero, $f2
  /* 12C38C 8013304C C4460024 */      lwc1 $f6, 0x24($v0)
  /* 12C390 80133050 46003200 */     add.s $f8, $f6, $f0
  /* 12C394 80133054 E4480024 */      swc1 $f8, 0x24($v0)
  /* 12C398 80133058 C44A0024 */      lwc1 $f10, 0x24($v0)
  /* 12C39C 8013305C 460A103C */    c.lt.s $f2, $f10
  /* 12C3A0 80133060 00000000 */       nop 
  /* 12C3A4 80133064 45020003 */     bc1fl .L80133074
  /* 12C3A8 80133068 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12C3AC 8013306C E4420024 */      swc1 $f2, 0x24($v0)
  .L80133070:
  /* 12C3B0 80133070 8FBF0014 */        lw $ra, 0x14($sp)
  .L80133074:
  /* 12C3B4 80133074 27BD0020 */     addiu $sp, $sp, 0x20
  /* 12C3B8 80133078 03E00008 */        jr $ra
  /* 12C3BC 8013307C 00000000 */       nop 

glabel func_ovl24_80133080
  /* 12C3C0 80133080 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 12C3C4 80133084 3C0E8013 */       lui $t6, %hi(D_ovl24_80134FD8)
  /* 12C3C8 80133088 AFBF0014 */        sw $ra, 0x14($sp)
  /* 12C3CC 8013308C 25CE4FD8 */     addiu $t6, $t6, %lo(D_ovl24_80134FD8)
  /* 12C3D0 80133090 8DD80000 */        lw $t8, ($t6) # D_ovl24_80134FD8 + 0
  /* 12C3D4 80133094 27A70028 */     addiu $a3, $sp, 0x28
  /* 12C3D8 80133098 24010008 */     addiu $at, $zero, 8
  /* 12C3DC 8013309C ACF80000 */        sw $t8, ($a3)
  /* 12C3E0 801330A0 8DCF0004 */        lw $t7, 4($t6) # D_ovl24_80134FD8 + 4
  /* 12C3E4 801330A4 ACEF0004 */        sw $t7, 4($a3)
  /* 12C3E8 801330A8 8DD80008 */        lw $t8, 8($t6) # D_ovl24_80134FD8 + 8
  /* 12C3EC 801330AC ACF80008 */        sw $t8, 8($a3)
  /* 12C3F0 801330B0 8DCF000C */        lw $t7, 0xc($t6) # D_ovl24_80134FD8 + 12
  /* 12C3F4 801330B4 ACEF000C */        sw $t7, 0xc($a3)
  /* 12C3F8 801330B8 8DD80010 */        lw $t8, 0x10($t6) # D_ovl24_80134FD8 + 16
  /* 12C3FC 801330BC ACF80010 */        sw $t8, 0x10($a3)
  /* 12C400 801330C0 8DCF0014 */        lw $t7, 0x14($t6) # D_ovl24_80134FD8 + 20
  /* 12C404 801330C4 ACEF0014 */        sw $t7, 0x14($a3)
  /* 12C408 801330C8 8DD80018 */        lw $t8, 0x18($t6) # D_ovl24_80134FD8 + 24
  /* 12C40C 801330CC ACF80018 */        sw $t8, 0x18($a3)
  /* 12C410 801330D0 8DCF001C */        lw $t7, 0x1c($t6) # D_ovl24_80134FD8 + 28
  /* 12C414 801330D4 ACEF001C */        sw $t7, 0x1c($a3)
  /* 12C418 801330D8 8C820084 */        lw $v0, 0x84($a0)
  /* 12C41C 801330DC 14A1000F */       bne $a1, $at, .L8013311C
  /* 12C420 801330E0 8C430178 */        lw $v1, 0x178($v0)
  /* 12C424 801330E4 0003C880 */       sll $t9, $v1, 2
  /* 12C428 801330E8 00F94021 */      addu $t0, $a3, $t9
  /* 12C42C 801330EC 8D060000 */        lw $a2, ($t0)
  /* 12C430 801330F0 2401000D */     addiu $at, $zero, 0xd
  /* 12C434 801330F4 24050006 */     addiu $a1, $zero, 6
  /* 12C438 801330F8 14C10006 */       bne $a2, $at, .L80133114
  /* 12C43C 801330FC 00000000 */       nop 
  /* 12C440 80133100 3C068013 */       lui $a2, %hi(D_ovl2_80130D76)
  /* 12C444 80133104 0C03A31C */       jal ftCommon_SetModelPartRenderIndex
  /* 12C448 80133108 90C60D76 */       lbu $a2, %lo(D_ovl2_80130D76)($a2)
  /* 12C44C 8013310C 10000004 */         b .L80133120
  /* 12C450 80133110 8FBF0014 */        lw $ra, 0x14($sp)
  .L80133114:
  /* 12C454 80133114 0C03A31C */       jal ftCommon_SetModelPartRenderIndex
  /* 12C458 80133118 24050006 */     addiu $a1, $zero, 6
  .L8013311C:
  /* 12C45C 8013311C 8FBF0014 */        lw $ra, 0x14($sp)
  .L80133120:
  /* 12C460 80133120 27BD0048 */     addiu $sp, $sp, 0x48
  /* 12C464 80133124 03E00008 */        jr $ra
  /* 12C468 80133128 00000000 */       nop 

glabel func_ovl24_8013312C
  /* 12C46C 8013312C 24010004 */     addiu $at, $zero, 4
  /* 12C470 80133130 5481000B */      bnel $a0, $at, .L80133160
  /* 12C474 80133134 3C01C3FA */       lui $at, 0xc3fa
  /* 12C478 80133138 14A00005 */      bnez $a1, .L80133150
  /* 12C47C 8013313C 3C01C448 */       lui $at, 0xc448
  /* 12C480 80133140 3C01C416 */       lui $at, (0xC4160000 >> 16) # -600.0
  /* 12C484 80133144 44810000 */      mtc1 $at, $f0 # -600.0 to cop1
  /* 12C488 80133148 03E00008 */        jr $ra
  /* 12C48C 8013314C 00000000 */       nop 

  .L80133150:
  /* 12C490 80133150 44810000 */      mtc1 $at, $f0
  /* 12C494 80133154 03E00008 */        jr $ra
  /* 12C498 80133158 00000000 */       nop 

  /* 12C49C 8013315C 3C01C3FA */       lui $at, (0xC3FA0000 >> 16) # -500.0
  .L80133160:
  /* 12C4A0 80133160 44810000 */      mtc1 $at, $f0 # -500.0 to cop1
  /* 12C4A4 80133164 00000000 */       nop 
  /* 12C4A8 80133168 03E00008 */        jr $ra
  /* 12C4AC 8013316C 00000000 */       nop 

glabel func_ovl24_80133170
  /* 12C4B0 80133170 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 12C4B4 80133174 AFB10020 */        sw $s1, 0x20($sp)
  /* 12C4B8 80133178 3C118004 */       lui $s1, %hi(gpDisplayListHead)
  /* 12C4BC 8013317C 263165B0 */     addiu $s1, $s1, %lo(gpDisplayListHead)
  /* 12C4C0 80133180 8E220000 */        lw $v0, ($s1) # gpDisplayListHead + 0
  /* 12C4C4 80133184 AFBF0024 */        sw $ra, 0x24($sp)
  /* 12C4C8 80133188 AFB0001C */        sw $s0, 0x1c($sp)
  /* 12C4CC 8013318C 8C8E0084 */        lw $t6, 0x84($a0)
  /* 12C4D0 80133190 244F0008 */     addiu $t7, $v0, 8
  /* 12C4D4 80133194 AE2F0000 */        sw $t7, ($s1) # gpDisplayListHead + 0
  /* 12C4D8 80133198 AFAE002C */        sw $t6, 0x2c($sp)
  /* 12C4DC 8013319C 3C18E700 */       lui $t8, 0xe700
  /* 12C4E0 801331A0 AC580000 */        sw $t8, ($v0)
  /* 12C4E4 801331A4 AC400004 */        sw $zero, 4($v0)
  /* 12C4E8 801331A8 8E220000 */        lw $v0, ($s1) # gpDisplayListHead + 0
  /* 12C4EC 801331AC 3C08E300 */       lui $t0, (0xE3000A01 >> 16) # 3808430593
  /* 12C4F0 801331B0 35080A01 */       ori $t0, $t0, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 12C4F4 801331B4 24590008 */     addiu $t9, $v0, 8
  /* 12C4F8 801331B8 AE390000 */        sw $t9, ($s1) # gpDisplayListHead + 0
  /* 12C4FC 801331BC 3C090010 */       lui $t1, 0x10
  /* 12C500 801331C0 AC490004 */        sw $t1, 4($v0)
  /* 12C504 801331C4 AC480000 */        sw $t0, ($v0)
  /* 12C508 801331C8 8E220000 */        lw $v0, ($s1) # gpDisplayListHead + 0
  /* 12C50C 801331CC 3C0BE200 */       lui $t3, (0xE200001C >> 16) # 3791650844
  /* 12C510 801331D0 3C0C0C19 */       lui $t4, (0xC192078 >> 16) # 202973304
  /* 12C514 801331D4 244A0008 */     addiu $t2, $v0, 8
  /* 12C518 801331D8 AE2A0000 */        sw $t2, ($s1) # gpDisplayListHead + 0
  /* 12C51C 801331DC 358C2078 */       ori $t4, $t4, (0xC192078 & 0xFFFF) # 202973304
  /* 12C520 801331E0 356B001C */       ori $t3, $t3, (0xE200001C & 0xFFFF) # 3791650844
  /* 12C524 801331E4 AC4B0000 */        sw $t3, ($v0)
  /* 12C528 801331E8 AC4C0004 */        sw $t4, 4($v0)
  /* 12C52C 801331EC 8E220000 */        lw $v0, ($s1) # gpDisplayListHead + 0
  /* 12C530 801331F0 3C0EFB00 */       lui $t6, 0xfb00
  /* 12C534 801331F4 240FFF00 */     addiu $t7, $zero, -0x100
  /* 12C538 801331F8 244D0008 */     addiu $t5, $v0, 8
  /* 12C53C 801331FC AE2D0000 */        sw $t5, ($s1) # gpDisplayListHead + 0
  /* 12C540 80133200 3C188013 */       lui $t8, %hi(D_ovl24_80135C28)
  /* 12C544 80133204 AC4F0004 */        sw $t7, 4($v0)
  /* 12C548 80133208 AC4E0000 */        sw $t6, ($v0)
  /* 12C54C 8013320C 8F185C28 */        lw $t8, %lo(D_ovl24_80135C28)($t8)
  /* 12C550 80133210 2401000C */     addiu $at, $zero, 0xc
  /* 12C554 80133214 00808025 */        or $s0, $a0, $zero
  /* 12C558 80133218 17010042 */       bne $t8, $at, .L80133324
  /* 12C55C 8013321C 8FB9002C */        lw $t9, 0x2c($sp)
  /* 12C560 80133220 8F220008 */        lw $v0, 8($t9)
  /* 12C564 80133224 3C038013 */       lui $v1, %hi(D_ovl24_80135CF8)
  /* 12C568 80133228 8C635CF8 */        lw $v1, %lo(D_ovl24_80135CF8)($v1)
  /* 12C56C 8013322C 00021040 */       sll $v0, $v0, 1
  /* 12C570 80133230 2448FFE4 */     addiu $t0, $v0, -0x1c
  /* 12C574 80133234 0103082A */       slt $at, $t0, $v1
  /* 12C578 80133238 50200014 */      beql $at, $zero, .L8013328C
  /* 12C57C 8013323C 244AFFF8 */     addiu $t2, $v0, -8
  /* 12C580 80133240 44800000 */      mtc1 $zero, $f0
  /* 12C584 80133244 3C050001 */       lui $a1, (0x1000E >> 16) # 65550
  /* 12C588 80133248 34A5000E */       ori $a1, $a1, (0x1000E & 0xFFFF) # 65550
  /* 12C58C 8013324C 44060000 */      mfc1 $a2, $f0
  /* 12C590 80133250 44070000 */      mfc1 $a3, $f0
  /* 12C594 80133254 0C039BC9 */       jal ftStatus_Update
  /* 12C598 80133258 AFA00010 */        sw $zero, 0x10($sp)
  /* 12C59C 8013325C 0C0037CD */       jal func_8000DF34
  /* 12C5A0 80133260 02002025 */        or $a0, $s0, $zero
  /* 12C5A4 80133264 0C002CE7 */       jal func_8000B39C
  /* 12C5A8 80133268 02002025 */        or $a0, $s0, $zero
  /* 12C5AC 8013326C 0C03CA4F */       jal func_ovl2_800F293C
  /* 12C5B0 80133270 02002025 */        or $a0, $s0, $zero
  /* 12C5B4 80133274 8FA9002C */        lw $t1, 0x2c($sp)
  /* 12C5B8 80133278 3C038013 */       lui $v1, %hi(D_ovl24_80135CF8)
  /* 12C5BC 8013327C 8C635CF8 */        lw $v1, %lo(D_ovl24_80135CF8)($v1)
  /* 12C5C0 80133280 8D220008 */        lw $v0, 8($t1)
  /* 12C5C4 80133284 00021040 */       sll $v0, $v0, 1
  /* 12C5C8 80133288 244AFFF8 */     addiu $t2, $v0, -8
  .L8013328C:
  /* 12C5CC 8013328C 0143082A */       slt $at, $t2, $v1
  /* 12C5D0 80133290 10200012 */      beqz $at, .L801332DC
  /* 12C5D4 80133294 02002025 */        or $a0, $s0, $zero
  /* 12C5D8 80133298 3C050001 */       lui $a1, (0x1000E >> 16) # 65550
  /* 12C5DC 8013329C 34A5000E */       ori $a1, $a1, (0x1000E & 0xFFFF) # 65550
  /* 12C5E0 801332A0 3C063F80 */       lui $a2, 0x3f80
  /* 12C5E4 801332A4 24070000 */     addiu $a3, $zero, 0
  /* 12C5E8 801332A8 0C039BC9 */       jal ftStatus_Update
  /* 12C5EC 801332AC AFA00010 */        sw $zero, 0x10($sp)
  /* 12C5F0 801332B0 0C0037CD */       jal func_8000DF34
  /* 12C5F4 801332B4 02002025 */        or $a0, $s0, $zero
  /* 12C5F8 801332B8 0C002CE7 */       jal func_8000B39C
  /* 12C5FC 801332BC 02002025 */        or $a0, $s0, $zero
  /* 12C600 801332C0 0C03CA4F */       jal func_ovl2_800F293C
  /* 12C604 801332C4 02002025 */        or $a0, $s0, $zero
  /* 12C608 801332C8 8FAB002C */        lw $t3, 0x2c($sp)
  /* 12C60C 801332CC 3C038013 */       lui $v1, %hi(D_ovl24_80135CF8)
  /* 12C610 801332D0 8C635CF8 */        lw $v1, %lo(D_ovl24_80135CF8)($v1)
  /* 12C614 801332D4 8D620008 */        lw $v0, 8($t3)
  /* 12C618 801332D8 00021040 */       sll $v0, $v0, 1
  .L801332DC:
  /* 12C61C 801332DC 244C000C */     addiu $t4, $v0, 0xc
  /* 12C620 801332E0 0183082A */       slt $at, $t4, $v1
  /* 12C624 801332E4 10200011 */      beqz $at, .L8013332C
  /* 12C628 801332E8 02002025 */        or $a0, $s0, $zero
  /* 12C62C 801332EC 3C050001 */       lui $a1, (0x1000E >> 16) # 65550
  /* 12C630 801332F0 34A5000E */       ori $a1, $a1, (0x1000E & 0xFFFF) # 65550
  /* 12C634 801332F4 3C064000 */       lui $a2, 0x4000
  /* 12C638 801332F8 24070000 */     addiu $a3, $zero, 0
  /* 12C63C 801332FC 0C039BC9 */       jal ftStatus_Update
  /* 12C640 80133300 AFA00010 */        sw $zero, 0x10($sp)
  /* 12C644 80133304 0C0037CD */       jal func_8000DF34
  /* 12C648 80133308 02002025 */        or $a0, $s0, $zero
  /* 12C64C 8013330C 0C002CE7 */       jal func_8000B39C
  /* 12C650 80133310 02002025 */        or $a0, $s0, $zero
  /* 12C654 80133314 0C03CA4F */       jal func_ovl2_800F293C
  /* 12C658 80133318 02002025 */        or $a0, $s0, $zero
  /* 12C65C 8013331C 10000004 */         b .L80133330
  /* 12C660 80133320 8E220000 */        lw $v0, ($s1) # gpDisplayListHead + 0
  .L80133324:
  /* 12C664 80133324 0C03CA4F */       jal func_ovl2_800F293C
  /* 12C668 80133328 02002025 */        or $a0, $s0, $zero
  .L8013332C:
  /* 12C66C 8013332C 8E220000 */        lw $v0, ($s1) # gpDisplayListHead + 0
  .L80133330:
  /* 12C670 80133330 3C0EE700 */       lui $t6, 0xe700
  /* 12C674 80133334 3C18E300 */       lui $t8, (0xE3000A01 >> 16) # 3808430593
  /* 12C678 80133338 244D0008 */     addiu $t5, $v0, 8
  /* 12C67C 8013333C AE2D0000 */        sw $t5, ($s1) # gpDisplayListHead + 0
  /* 12C680 80133340 AC400004 */        sw $zero, 4($v0)
  /* 12C684 80133344 AC4E0000 */        sw $t6, ($v0)
  /* 12C688 80133348 8E220000 */        lw $v0, ($s1) # gpDisplayListHead + 0
  /* 12C68C 8013334C 37180A01 */       ori $t8, $t8, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 12C690 80133350 3C08E200 */       lui $t0, (0xE200001C >> 16) # 3791650844
  /* 12C694 80133354 244F0008 */     addiu $t7, $v0, 8
  /* 12C698 80133358 AE2F0000 */        sw $t7, ($s1) # gpDisplayListHead + 0
  /* 12C69C 8013335C AC400004 */        sw $zero, 4($v0)
  /* 12C6A0 80133360 AC580000 */        sw $t8, ($v0)
  /* 12C6A4 80133364 8E220000 */        lw $v0, ($s1) # gpDisplayListHead + 0
  /* 12C6A8 80133368 3C090055 */       lui $t1, (0x552078 >> 16) # 5578872
  /* 12C6AC 8013336C 35292078 */       ori $t1, $t1, (0x552078 & 0xFFFF) # 5578872
  /* 12C6B0 80133370 24590008 */     addiu $t9, $v0, 8
  /* 12C6B4 80133374 AE390000 */        sw $t9, ($s1) # gpDisplayListHead + 0
  /* 12C6B8 80133378 3508001C */       ori $t0, $t0, (0xE200001C & 0xFFFF) # 3791650844
  /* 12C6BC 8013337C AC480000 */        sw $t0, ($v0)
  /* 12C6C0 80133380 AC490004 */        sw $t1, 4($v0)
  /* 12C6C4 80133384 8FBF0024 */        lw $ra, 0x24($sp)
  /* 12C6C8 80133388 8FB10020 */        lw $s1, 0x20($sp)
  /* 12C6CC 8013338C 8FB0001C */        lw $s0, 0x1c($sp)
  /* 12C6D0 80133390 03E00008 */        jr $ra
  /* 12C6D4 80133394 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl24_80133398
  /* 12C6D8 80133398 27BDFF90 */     addiu $sp, $sp, -0x70
  /* 12C6DC 8013339C 3C0F8011 */       lui $t7, %hi(D_ovl2_80116DD0)
  /* 12C6E0 801333A0 AFB10020 */        sw $s1, 0x20($sp)
  /* 12C6E4 801333A4 AFB0001C */        sw $s0, 0x1c($sp)
  /* 12C6E8 801333A8 25EF6DD0 */     addiu $t7, $t7, %lo(D_ovl2_80116DD0)
  /* 12C6EC 801333AC 00E08025 */        or $s0, $a3, $zero
  /* 12C6F0 801333B0 00A08825 */        or $s1, $a1, $zero
  /* 12C6F4 801333B4 AFBF0024 */        sw $ra, 0x24($sp)
  /* 12C6F8 801333B8 AFA60078 */        sw $a2, 0x78($sp)
  /* 12C6FC 801333BC 25E8003C */     addiu $t0, $t7, 0x3c
  /* 12C700 801333C0 27AE0028 */     addiu $t6, $sp, 0x28
  .L801333C4:
  /* 12C704 801333C4 8DF90000 */        lw $t9, ($t7) # D_ovl2_80116DD0 + 0
  /* 12C708 801333C8 25EF000C */     addiu $t7, $t7, 0xc
  /* 12C70C 801333CC 25CE000C */     addiu $t6, $t6, 0xc
  /* 12C710 801333D0 ADD9FFF4 */        sw $t9, -0xc($t6)
  /* 12C714 801333D4 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl2_80116DD0 + -8
  /* 12C718 801333D8 ADD8FFF8 */        sw $t8, -8($t6)
  /* 12C71C 801333DC 8DF9FFFC */        lw $t9, -4($t7) # D_ovl2_80116DD0 + -4
  /* 12C720 801333E0 15E8FFF8 */       bne $t7, $t0, .L801333C4
  /* 12C724 801333E4 ADD9FFFC */        sw $t9, -4($t6)
  /* 12C728 801333E8 8DF90000 */        lw $t9, ($t7) # D_ovl2_80116DD0 + 0
  /* 12C72C 801333EC 00002825 */        or $a1, $zero, $zero
  /* 12C730 801333F0 ADD90000 */        sw $t9, ($t6)
  /* 12C734 801333F4 AFA40028 */        sw $a0, 0x28($sp)
  /* 12C738 801333F8 0C03B03B */       jal func_ovl2_800EC0EC
  /* 12C73C 801333FC AFA40070 */        sw $a0, 0x70($sp)
  /* 12C740 80133400 A3A2003F */        sb $v0, 0x3f($sp)
  /* 12C744 80133404 8E090000 */        lw $t1, ($s0)
  /* 12C748 80133408 3C0A8013 */       lui $t2, %hi(func_ovl24_80133170)
  /* 12C74C 8013340C 254A3170 */     addiu $t2, $t2, %lo(func_ovl24_80133170)
  /* 12C750 80133410 240B0004 */     addiu $t3, $zero, 4
  /* 12C754 80133414 240C0004 */     addiu $t4, $zero, 4
  /* 12C758 80133418 24010001 */     addiu $at, $zero, 1
  /* 12C75C 8013341C AFAA0064 */        sw $t2, 0x64($sp)
  /* 12C760 80133420 A3A0003D */        sb $zero, 0x3d($sp)
  /* 12C764 80133424 A3AB0044 */        sb $t3, 0x44($sp)
  /* 12C768 80133428 A3AC0045 */        sb $t4, 0x45($sp)
  /* 12C76C 8013342C 12210003 */       beq $s1, $at, .L8013343C
  /* 12C770 80133430 AFA90060 */        sw $t1, 0x60($sp)
  /* 12C774 80133434 2401000C */     addiu $at, $zero, 0xc
  /* 12C778 80133438 16210002 */       bne $s1, $at, .L80133444
  .L8013343C:
  /* 12C77C 8013343C 240D0002 */     addiu $t5, $zero, 2
  /* 12C780 80133440 A3AD003E */        sb $t5, 0x3e($sp)
  .L80133444:
  /* 12C784 80133444 0C035FCF */       jal ftManager_CreateFighter
  /* 12C788 80133448 27A40028 */     addiu $a0, $sp, 0x28
  /* 12C78C 8013344C 8FA80078 */        lw $t0, 0x78($sp)
  /* 12C790 80133450 3C050001 */       lui $a1, (0x1000E >> 16) # 65550
  /* 12C794 80133454 00408025 */        or $s0, $v0, $zero
  /* 12C798 80133458 44882000 */      mtc1 $t0, $f4
  /* 12C79C 8013345C 34A5000E */       ori $a1, $a1, (0x1000E & 0xFFFF) # 65550
  /* 12C7A0 80133460 00402025 */        or $a0, $v0, $zero
  /* 12C7A4 80133464 46802120 */   cvt.s.w $f4, $f4
  /* 12C7A8 80133468 24070000 */     addiu $a3, $zero, 0
  /* 12C7AC 8013346C AFA00010 */        sw $zero, 0x10($sp)
  /* 12C7B0 80133470 44062000 */      mfc1 $a2, $f4
  /* 12C7B4 80133474 0C039BC9 */       jal ftStatus_Update
  /* 12C7B8 80133478 00000000 */       nop 
  /* 12C7BC 8013347C 0C0037CD */       jal func_8000DF34
  /* 12C7C0 80133480 02002025 */        or $a0, $s0, $zero
  /* 12C7C4 80133484 0C002CE7 */       jal func_8000B39C
  /* 12C7C8 80133488 02002025 */        or $a0, $s0, $zero
  /* 12C7CC 8013348C 8E030084 */        lw $v1, 0x84($s0)
  /* 12C7D0 80133490 8FAF0078 */        lw $t7, 0x78($sp)
  /* 12C7D4 80133494 02002025 */        or $a0, $s0, $zero
  /* 12C7D8 80133498 3C068000 */       lui $a2, 0x8000
  /* 12C7DC 8013349C AC6F0178 */        sw $t7, 0x178($v1)
  /* 12C7E0 801334A0 93A50083 */       lbu $a1, 0x83($sp)
  /* 12C7E4 801334A4 0C002834 */       jal om_g_move_obj_dl
  /* 12C7E8 801334A8 AFA30068 */        sw $v1, 0x68($sp)
  /* 12C7EC 801334AC 3C058013 */       lui $a1, %hi(func_ovl24_80132F84)
  /* 12C7F0 801334B0 24A52F84 */     addiu $a1, $a1, %lo(func_ovl24_80132F84)
  /* 12C7F4 801334B4 02002025 */        or $a0, $s0, $zero
  /* 12C7F8 801334B8 24060001 */     addiu $a2, $zero, 1
  /* 12C7FC 801334BC 0C002062 */       jal omAddGObjCommonProc
  /* 12C800 801334C0 24070001 */     addiu $a3, $zero, 1
  /* 12C804 801334C4 44801000 */      mtc1 $zero, $f2
  /* 12C808 801334C8 8E0E0074 */        lw $t6, 0x74($s0)
  /* 12C80C 801334CC 8FA30068 */        lw $v1, 0x68($sp)
  /* 12C810 801334D0 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 12C814 801334D4 E5C2001C */      swc1 $f2, 0x1c($t6)
  /* 12C818 801334D8 8E180074 */        lw $t8, 0x74($s0)
  /* 12C81C 801334DC 44810000 */      mtc1 $at, $f0 # 1.0 to cop1
  /* 12C820 801334E0 24010008 */     addiu $at, $zero, 8
  /* 12C824 801334E4 E7020020 */      swc1 $f2, 0x20($t8)
  /* 12C828 801334E8 8E190074 */        lw $t9, 0x74($s0)
  /* 12C82C 801334EC E7220024 */      swc1 $f2, 0x24($t9)
  /* 12C830 801334F0 8E090074 */        lw $t1, 0x74($s0)
  /* 12C834 801334F4 E5200040 */      swc1 $f0, 0x40($t1)
  /* 12C838 801334F8 8E0A0074 */        lw $t2, 0x74($s0)
  /* 12C83C 801334FC E5400044 */      swc1 $f0, 0x44($t2)
  /* 12C840 80133500 8E0B0074 */        lw $t3, 0x74($s0)
  /* 12C844 80133504 1221000C */       beq $s1, $at, .L80133538
  /* 12C848 80133508 E5600048 */      swc1 $f0, 0x48($t3)
  /* 12C84C 8013350C 24010001 */     addiu $at, $zero, 1
  /* 12C850 80133510 12210009 */       beq $s1, $at, .L80133538
  /* 12C854 80133514 2401000C */     addiu $at, $zero, 0xc
  /* 12C858 80133518 12210007 */       beq $s1, $at, .L80133538
  /* 12C85C 8013351C 02202025 */        or $a0, $s1, $zero
  /* 12C860 80133520 8FA50070 */        lw $a1, 0x70($sp)
  /* 12C864 80133524 0C04CC4B */       jal func_ovl24_8013312C
  /* 12C868 80133528 AFA30068 */        sw $v1, 0x68($sp)
  /* 12C86C 8013352C 8E0C0074 */        lw $t4, 0x74($s0)
  /* 12C870 80133530 8FA30068 */        lw $v1, 0x68($sp)
  /* 12C874 80133534 E5800024 */      swc1 $f0, 0x24($t4)
  .L80133538:
  /* 12C878 80133538 2401000D */     addiu $at, $zero, 0xd
  /* 12C87C 8013353C 1621000A */       bne $s1, $at, .L80133568
  /* 12C880 80133540 02001025 */        or $v0, $s0, $zero
  /* 12C884 80133544 3C01C1A0 */       lui $at, (0xC1A00000 >> 16) # -20.0
  /* 12C888 80133548 44813000 */      mtc1 $at, $f6 # -20.0 to cop1
  /* 12C88C 8013354C 90680A88 */       lbu $t0, 0xa88($v1)
  /* 12C890 80133550 3C01C1F0 */       lui $at, (0xC1F00000 >> 16) # -30.0
  /* 12C894 80133554 44814000 */      mtc1 $at, $f8 # -30.0 to cop1
  /* 12C898 80133558 350F0040 */       ori $t7, $t0, 0x40
  /* 12C89C 8013355C A06F0A88 */        sb $t7, 0xa88($v1)
  /* 12C8A0 80133560 E4660A74 */      swc1 $f6, 0xa74($v1)
  /* 12C8A4 80133564 E4680A78 */      swc1 $f8, 0xa78($v1)
  .L80133568:
  /* 12C8A8 80133568 8FBF0024 */        lw $ra, 0x24($sp)
  /* 12C8AC 8013356C 8FB0001C */        lw $s0, 0x1c($sp)
  /* 12C8B0 80133570 8FB10020 */        lw $s1, 0x20($sp)
  /* 12C8B4 80133574 03E00008 */        jr $ra
  /* 12C8B8 80133578 27BD0070 */     addiu $sp, $sp, 0x70

glabel func_ovl24_8013357C
  /* 12C8BC 8013357C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 12C8C0 80133580 AFBF001C */        sw $ra, 0x1c($sp)
  /* 12C8C4 80133584 AFA40028 */        sw $a0, 0x28($sp)
  /* 12C8C8 80133588 00002025 */        or $a0, $zero, $zero
  /* 12C8CC 8013358C 00002825 */        or $a1, $zero, $zero
  /* 12C8D0 80133590 24060011 */     addiu $a2, $zero, 0x11
  /* 12C8D4 80133594 0C00265A */       jal omMakeGObjCommon
  /* 12C8D8 80133598 3C078000 */       lui $a3, 0x8000
  /* 12C8DC 8013359C 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 12C8E0 801335A0 240EFFFF */     addiu $t6, $zero, -1
  /* 12C8E4 801335A4 AFA20024 */        sw $v0, 0x24($sp)
  /* 12C8E8 801335A8 AFAE0010 */        sw $t6, 0x10($sp)
  /* 12C8EC 801335AC 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 12C8F0 801335B0 00402025 */        or $a0, $v0, $zero
  /* 12C8F4 801335B4 2406001A */     addiu $a2, $zero, 0x1a
  /* 12C8F8 801335B8 0C00277D */       jal func_80009DF4
  /* 12C8FC 801335BC 3C078000 */       lui $a3, 0x8000
  /* 12C900 801335C0 8FA20028 */        lw $v0, 0x28($sp)
  /* 12C904 801335C4 24010003 */     addiu $at, $zero, 3
  /* 12C908 801335C8 8FA40024 */        lw $a0, 0x24($sp)
  /* 12C90C 801335CC 10410009 */       beq $v0, $at, .L801335F4
  /* 12C910 801335D0 3C0F8013 */       lui $t7, %hi(D_ovl24_80136060)
  /* 12C914 801335D4 24010007 */     addiu $at, $zero, 7
  /* 12C918 801335D8 10410017 */       beq $v0, $at, .L80133638
  /* 12C91C 801335DC 3C0B8013 */       lui $t3, 0x8013
  /* 12C920 801335E0 2401000B */     addiu $at, $zero, 0xb
  /* 12C924 801335E4 10410025 */       beq $v0, $at, .L8013367C
  /* 12C928 801335E8 3C198013 */       lui $t9, 0x8013
  /* 12C92C 801335EC 10000034 */         b .L801336C0
  /* 12C930 801335F0 8FBF001C */        lw $ra, 0x1c($sp)
  .L801335F4:
  /* 12C934 801335F4 8DEF6060 */        lw $t7, %lo(D_ovl24_80136060)($t7)
  /* 12C938 801335F8 3C180001 */       lui $t8, %hi(D_NF_0000E980)
  /* 12C93C 801335FC 2718E980 */     addiu $t8, $t8, %lo(D_NF_0000E980)
  /* 12C940 80133600 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12C944 80133604 01F82821 */      addu $a1, $t7, $t8
  /* 12C948 80133608 94590024 */       lhu $t9, 0x24($v0)
  /* 12C94C 8013360C 3C0142CE */       lui $at, (0x42CE0000 >> 16) # 103.0
  /* 12C950 80133610 44812000 */      mtc1 $at, $f4 # 103.0 to cop1
  /* 12C954 80133614 3C01427C */       lui $at, (0x427C0000 >> 16) # 63.0
  /* 12C958 80133618 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 12C95C 8013361C 44813000 */      mtc1 $at, $f6 # 63.0 to cop1
  /* 12C960 80133620 A4490024 */        sh $t1, 0x24($v0)
  /* 12C964 80133624 352A0001 */       ori $t2, $t1, 1
  /* 12C968 80133628 A44A0024 */        sh $t2, 0x24($v0)
  /* 12C96C 8013362C E4440058 */      swc1 $f4, 0x58($v0)
  /* 12C970 80133630 10000022 */         b .L801336BC
  /* 12C974 80133634 E446005C */      swc1 $f6, 0x5c($v0)
  .L80133638:
  /* 12C978 80133638 8D6B6064 */        lw $t3, 0x6064($t3)
  /* 12C97C 8013363C 3C0C0002 */       lui $t4, %hi(D_NF_00027388)
  /* 12C980 80133640 258C7388 */     addiu $t4, $t4, %lo(D_NF_00027388)
  /* 12C984 80133644 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12C988 80133648 016C2821 */      addu $a1, $t3, $t4
  /* 12C98C 8013364C 944D0024 */       lhu $t5, 0x24($v0)
  /* 12C990 80133650 3C014234 */       lui $at, (0x42340000 >> 16) # 45.0
  /* 12C994 80133654 44814000 */      mtc1 $at, $f8 # 45.0 to cop1
  /* 12C998 80133658 3C01425C */       lui $at, (0x425C0000 >> 16) # 55.0
  /* 12C99C 8013365C 31AFFFDF */      andi $t7, $t5, 0xffdf
  /* 12C9A0 80133660 44815000 */      mtc1 $at, $f10 # 55.0 to cop1
  /* 12C9A4 80133664 A44F0024 */        sh $t7, 0x24($v0)
  /* 12C9A8 80133668 35F80001 */       ori $t8, $t7, 1
  /* 12C9AC 8013366C A4580024 */        sh $t8, 0x24($v0)
  /* 12C9B0 80133670 E4480058 */      swc1 $f8, 0x58($v0)
  /* 12C9B4 80133674 10000011 */         b .L801336BC
  /* 12C9B8 80133678 E44A005C */      swc1 $f10, 0x5c($v0)
  .L8013367C:
  /* 12C9BC 8013367C 8F396060 */        lw $t9, 0x6060($t9)
  /* 12C9C0 80133680 3C080002 */       lui $t0, %hi(D_NF_0001A658)
  /* 12C9C4 80133684 2508A658 */     addiu $t0, $t0, %lo(D_NF_0001A658)
  /* 12C9C8 80133688 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 12C9CC 8013368C 03282821 */      addu $a1, $t9, $t0
  /* 12C9D0 80133690 94490024 */       lhu $t1, 0x24($v0)
  /* 12C9D4 80133694 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 12C9D8 80133698 44818000 */      mtc1 $at, $f16 # 10.0 to cop1
  /* 12C9DC 8013369C 3C01425C */       lui $at, (0x425C0000 >> 16) # 55.0
  /* 12C9E0 801336A0 44819000 */      mtc1 $at, $f18 # 55.0 to cop1
  /* 12C9E4 801336A4 312BFFDF */      andi $t3, $t1, 0xffdf
  /* 12C9E8 801336A8 A44B0024 */        sh $t3, 0x24($v0)
  /* 12C9EC 801336AC 356C0001 */       ori $t4, $t3, 1
  /* 12C9F0 801336B0 A44C0024 */        sh $t4, 0x24($v0)
  /* 12C9F4 801336B4 E4500058 */      swc1 $f16, 0x58($v0)
  /* 12C9F8 801336B8 E452005C */      swc1 $f18, 0x5c($v0)
  .L801336BC:
  /* 12C9FC 801336BC 8FBF001C */        lw $ra, 0x1c($sp)
  .L801336C0:
  /* 12CA00 801336C0 27BD0028 */     addiu $sp, $sp, 0x28
  /* 12CA04 801336C4 03E00008 */        jr $ra
  /* 12CA08 801336C8 00000000 */       nop 

glabel func_ovl24_801336CC
  /* 12CA0C 801336CC 27BDFE78 */     addiu $sp, $sp, -0x188
  /* 12CA10 801336D0 3C0E8013 */       lui $t6, %hi(D_ovl24_80134FF8)
  /* 12CA14 801336D4 27A30000 */     addiu $v1, $sp, 0
  /* 12CA18 801336D8 25CE4FF8 */     addiu $t6, $t6, %lo(D_ovl24_80134FF8)
  /* 12CA1C 801336DC 25C80180 */     addiu $t0, $t6, 0x180
  /* 12CA20 801336E0 0060C825 */        or $t9, $v1, $zero
  .L801336E4:
  /* 12CA24 801336E4 8DD80000 */        lw $t8, ($t6) # D_ovl24_80134FF8 + 0
  /* 12CA28 801336E8 25CE000C */     addiu $t6, $t6, 0xc
  /* 12CA2C 801336EC 2739000C */     addiu $t9, $t9, 0xc
  /* 12CA30 801336F0 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 12CA34 801336F4 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl24_80134FF8 + -8
  /* 12CA38 801336F8 AF2FFFF8 */        sw $t7, -8($t9)
  /* 12CA3C 801336FC 8DD8FFFC */        lw $t8, -4($t6) # D_ovl24_80134FF8 + -4
  /* 12CA40 80133700 15C8FFF8 */       bne $t6, $t0, .L801336E4
  /* 12CA44 80133704 AF38FFFC */        sw $t8, -4($t9)
  /* 12CA48 80133708 8DD80000 */        lw $t8, ($t6) # D_ovl24_80134FF8 + 0
  /* 12CA4C 8013370C 000548C0 */       sll $t1, $a1, 3
  /* 12CA50 80133710 01254823 */      subu $t1, $t1, $a1
  /* 12CA54 80133714 AF380000 */        sw $t8, ($t9)
  /* 12CA58 80133718 8DCF0004 */        lw $t7, 4($t6) # D_ovl24_80134FF8 + 4
  /* 12CA5C 8013371C 00094880 */       sll $t1, $t1, 2
  /* 12CA60 80133720 00695021 */      addu $t2, $v1, $t1
  /* 12CA64 80133724 AF2F0004 */        sw $t7, 4($t9)
  /* 12CA68 80133728 8D4C0000 */        lw $t4, ($t2)
  /* 12CA6C 8013372C 00801025 */        or $v0, $a0, $zero
  /* 12CA70 80133730 AC8C0000 */        sw $t4, ($a0)
  /* 12CA74 80133734 8D4B0004 */        lw $t3, 4($t2)
  /* 12CA78 80133738 AC8B0004 */        sw $t3, 4($a0)
  /* 12CA7C 8013373C 8D4C0008 */        lw $t4, 8($t2)
  /* 12CA80 80133740 AC8C0008 */        sw $t4, 8($a0)
  /* 12CA84 80133744 8D4B000C */        lw $t3, 0xc($t2)
  /* 12CA88 80133748 AC8B000C */        sw $t3, 0xc($a0)
  /* 12CA8C 8013374C 8D4C0010 */        lw $t4, 0x10($t2)
  /* 12CA90 80133750 AC8C0010 */        sw $t4, 0x10($a0)
  /* 12CA94 80133754 8D4B0014 */        lw $t3, 0x14($t2)
  /* 12CA98 80133758 AC8B0014 */        sw $t3, 0x14($a0)
  /* 12CA9C 8013375C 8D4C0018 */        lw $t4, 0x18($t2)
  /* 12CAA0 80133760 27BD0188 */     addiu $sp, $sp, 0x188
  /* 12CAA4 80133764 03E00008 */        jr $ra
  /* 12CAA8 80133768 AC8C0018 */        sw $t4, 0x18($a0)

glabel func_ovl24_8013376C
  /* 12CAAC 8013376C 27BDFF50 */     addiu $sp, $sp, -0xb0
  /* 12CAB0 80133770 3C0F8013 */       lui $t7, %hi(D_ovl24_80135180)
  /* 12CAB4 80133774 AFB00040 */        sw $s0, 0x40($sp)
  /* 12CAB8 80133778 25EF5180 */     addiu $t7, $t7, %lo(D_ovl24_80135180)
  /* 12CABC 8013377C 00A08025 */        or $s0, $a1, $zero
  /* 12CAC0 80133780 AFBF0044 */        sw $ra, 0x44($sp)
  /* 12CAC4 80133784 AFA400B0 */        sw $a0, 0xb0($sp)
  /* 12CAC8 80133788 25E80030 */     addiu $t0, $t7, 0x30
  /* 12CACC 8013378C 27AE0054 */     addiu $t6, $sp, 0x54
  .L80133790:
  /* 12CAD0 80133790 8DF90000 */        lw $t9, ($t7) # D_ovl24_80135180 + 0
  /* 12CAD4 80133794 25EF000C */     addiu $t7, $t7, 0xc
  /* 12CAD8 80133798 25CE000C */     addiu $t6, $t6, 0xc
  /* 12CADC 8013379C ADD9FFF4 */        sw $t9, -0xc($t6)
  /* 12CAE0 801337A0 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl24_80135180 + -8
  /* 12CAE4 801337A4 ADD8FFF8 */        sw $t8, -8($t6)
  /* 12CAE8 801337A8 8DF9FFFC */        lw $t9, -4($t7) # D_ovl24_80135180 + -4
  /* 12CAEC 801337AC 15E8FFF8 */       bne $t7, $t0, .L80133790
  /* 12CAF0 801337B0 ADD9FFFC */        sw $t9, -4($t6)
  /* 12CAF4 801337B4 8DF90000 */        lw $t9, ($t7) # D_ovl24_80135180 + 0
  /* 12CAF8 801337B8 8DF80004 */        lw $t8, 4($t7) # D_ovl24_80135180 + 4
  /* 12CAFC 801337BC 24040000 */     addiu $a0, $zero, 0
  /* 12CB00 801337C0 24050001 */     addiu $a1, $zero, 1
  /* 12CB04 801337C4 02003825 */        or $a3, $s0, $zero
  /* 12CB08 801337C8 24060000 */     addiu $a2, $zero, 0
  /* 12CB0C 801337CC ADD90000 */        sw $t9, ($t6)
  /* 12CB10 801337D0 0C00C295 */       jal __ll_lshift
  /* 12CB14 801337D4 ADD80004 */        sw $t8, 4($t6)
  /* 12CB18 801337D8 3C098001 */       lui $t1, %hi(func_80017EC0)
  /* 12CB1C 801337DC 25297EC0 */     addiu $t1, $t1, %lo(func_80017EC0)
  /* 12CB20 801337E0 240A0028 */     addiu $t2, $zero, 0x28
  /* 12CB24 801337E4 240BFFFF */     addiu $t3, $zero, -1
  /* 12CB28 801337E8 240C0001 */     addiu $t4, $zero, 1
  /* 12CB2C 801337EC 240D0001 */     addiu $t5, $zero, 1
  /* 12CB30 801337F0 AFAD0030 */        sw $t5, 0x30($sp)
  /* 12CB34 801337F4 AFAC0028 */        sw $t4, 0x28($sp)
  /* 12CB38 801337F8 AFAB0020 */        sw $t3, 0x20($sp)
  /* 12CB3C 801337FC AFAA0014 */        sw $t2, 0x14($sp)
  /* 12CB40 80133800 AFA90010 */        sw $t1, 0x10($sp)
  /* 12CB44 80133804 24040401 */     addiu $a0, $zero, 0x401
  /* 12CB48 80133808 00002825 */        or $a1, $zero, $zero
  /* 12CB4C 8013380C 24060010 */     addiu $a2, $zero, 0x10
  /* 12CB50 80133810 3C078000 */       lui $a3, 0x8000
  /* 12CB54 80133814 AFA20018 */        sw $v0, 0x18($sp)
  /* 12CB58 80133818 AFA3001C */        sw $v1, 0x1c($sp)
  /* 12CB5C 8013381C AFA00024 */        sw $zero, 0x24($sp)
  /* 12CB60 80133820 AFA0002C */        sw $zero, 0x2c($sp)
  /* 12CB64 80133824 0C002E4F */       jal func_8000B93C
  /* 12CB68 80133828 AFA00034 */        sw $zero, 0x34($sp)
  /* 12CB6C 8013382C AFA200AC */        sw $v0, 0xac($sp)
  /* 12CB70 80133830 8C440074 */        lw $a0, 0x74($v0)
  /* 12CB74 80133834 24050003 */     addiu $a1, $zero, 3
  /* 12CB78 80133838 0C00233C */       jal func_80008CF0
  /* 12CB7C 8013383C 00003025 */        or $a2, $zero, $zero
  /* 12CB80 80133840 8FA800AC */        lw $t0, 0xac($sp)
  /* 12CB84 80133844 2405000F */     addiu $a1, $zero, 0xf
  /* 12CB88 80133848 00003025 */        or $a2, $zero, $zero
  /* 12CB8C 8013384C 0C00233C */       jal func_80008CF0
  /* 12CB90 80133850 8D040074 */        lw $a0, 0x74($t0)
  /* 12CB94 80133854 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 12CB98 80133858 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 12CB9C 8013385C 8FAF00AC */        lw $t7, 0xac($sp)
  /* 12CBA0 80133860 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 12CBA4 80133864 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 12CBA8 80133868 8DF00074 */        lw $s0, 0x74($t7)
  /* 12CBAC 8013386C 44050000 */      mfc1 $a1, $f0
  /* 12CBB0 80133870 44060000 */      mfc1 $a2, $f0
  /* 12CBB4 80133874 3C07439B */       lui $a3, 0x439b
  /* 12CBB8 80133878 26040008 */     addiu $a0, $s0, 8
  /* 12CBBC 8013387C 0C001C20 */       jal func_80007080
  /* 12CBC0 80133880 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 12CBC4 80133884 8FAE00B0 */        lw $t6, 0xb0($sp)
  /* 12CBC8 80133888 3C098013 */       lui $t1, %hi(D_ovl24_80136058)
  /* 12CBCC 8013388C 8D296058 */        lw $t1, %lo(D_ovl24_80136058)($t1)
  /* 12CBD0 80133890 000EC080 */       sll $t8, $t6, 2
  /* 12CBD4 80133894 03B8C821 */      addu $t9, $sp, $t8
  /* 12CBD8 80133898 8F390054 */        lw $t9, 0x54($t9)
  /* 12CBDC 8013389C 02002025 */        or $a0, $s0, $zero
  /* 12CBE0 801338A0 24060000 */     addiu $a2, $zero, 0
  /* 12CBE4 801338A4 0C003E8F */       jal func_8000FA3C
  /* 12CBE8 801338A8 03292821 */      addu $a1, $t9, $t1
  /* 12CBEC 801338AC 0C004160 */       jal func_80010580
  /* 12CBF0 801338B0 8FA400AC */        lw $a0, 0xac($sp)
  /* 12CBF4 801338B4 8FAA00B0 */        lw $t2, 0xb0($sp)
  /* 12CBF8 801338B8 24010004 */     addiu $at, $zero, 4
  /* 12CBFC 801338BC 27A4008C */     addiu $a0, $sp, 0x8c
  /* 12CC00 801338C0 55410010 */      bnel $t2, $at, .L80133904
  /* 12CC04 801338C4 3C014300 */       lui $at, 0x4300
  /* 12CC08 801338C8 0C04CDB3 */       jal func_ovl24_801336CC
  /* 12CC0C 801338CC 8FA500B0 */        lw $a1, 0xb0($sp)
  /* 12CC10 801338D0 C7A6008C */      lwc1 $f6, 0x8c($sp)
  /* 12CC14 801338D4 E606003C */      swc1 $f6, 0x3c($s0)
  /* 12CC18 801338D8 C7A80090 */      lwc1 $f8, 0x90($sp)
  /* 12CC1C 801338DC E6080040 */      swc1 $f8, 0x40($s0)
  /* 12CC20 801338E0 C7AA0094 */      lwc1 $f10, 0x94($sp)
  /* 12CC24 801338E4 E60A0044 */      swc1 $f10, 0x44($s0)
  /* 12CC28 801338E8 C7B00098 */      lwc1 $f16, 0x98($sp)
  /* 12CC2C 801338EC E6100048 */      swc1 $f16, 0x48($s0)
  /* 12CC30 801338F0 C7B2009C */      lwc1 $f18, 0x9c($sp)
  /* 12CC34 801338F4 E612004C */      swc1 $f18, 0x4c($s0)
  /* 12CC38 801338F8 C7A400A0 */      lwc1 $f4, 0xa0($sp)
  /* 12CC3C 801338FC E6040050 */      swc1 $f4, 0x50($s0)
  /* 12CC40 80133900 3C014300 */       lui $at, (0x43000000 >> 16) # 128.0
  .L80133904:
  /* 12CC44 80133904 44813000 */      mtc1 $at, $f6 # 128.0 to cop1
  /* 12CC48 80133908 3C014680 */       lui $at, (0x46800000 >> 16) # 16384.0
  /* 12CC4C 8013390C 44814000 */      mtc1 $at, $f8 # 16384.0 to cop1
  /* 12CC50 80133910 E6060028 */      swc1 $f6, 0x28($s0)
  /* 12CC54 80133914 02001025 */        or $v0, $s0, $zero
  /* 12CC58 80133918 E608002C */      swc1 $f8, 0x2c($s0)
  /* 12CC5C 8013391C 8FBF0044 */        lw $ra, 0x44($sp)
  /* 12CC60 80133920 8FB00040 */        lw $s0, 0x40($sp)
  /* 12CC64 80133924 27BD00B0 */     addiu $sp, $sp, 0xb0
  /* 12CC68 80133928 03E00008 */        jr $ra
  /* 12CC6C 8013392C 00000000 */       nop 

glabel func_ovl24_80133930
  /* 12CC70 80133930 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 12CC74 80133934 24010004 */     addiu $at, $zero, 4
  /* 12CC78 80133938 AFBF0014 */        sw $ra, 0x14($sp)
  /* 12CC7C 8013393C AFA60020 */        sw $a2, 0x20($sp)
  /* 12CC80 80133940 10810006 */       beq $a0, $at, .L8013395C
  /* 12CC84 80133944 00A03825 */        or $a3, $a1, $zero
  /* 12CC88 80133948 24010006 */     addiu $at, $zero, 6
  /* 12CC8C 8013394C 10810021 */       beq $a0, $at, .L801339D4
  /* 12CC90 80133950 3C088013 */       lui $t0, 0x8013
  /* 12CC94 80133954 1000004B */         b .L80133A84
  /* 12CC98 80133958 3C0E8013 */       lui $t6, 0x8013
  .L8013395C:
  /* 12CC9C 8013395C 3C0E8013 */       lui $t6, %hi(D_ovl24_80135CC8)
  /* 12CCA0 80133960 8DCE5CC8 */        lw $t6, %lo(D_ovl24_80135CC8)($t6)
  /* 12CCA4 80133964 00E02025 */        or $a0, $a3, $zero
  /* 12CCA8 80133968 8FA50020 */        lw $a1, 0x20($sp)
  /* 12CCAC 8013396C 14EE000A */       bne $a3, $t6, .L80133998
  /* 12CCB0 80133970 00000000 */       nop 
  /* 12CCB4 80133974 0C03B03B */       jal func_ovl2_800EC0EC
  /* 12CCB8 80133978 AFA7001C */        sw $a3, 0x1c($sp)
  /* 12CCBC 8013397C 3C0F8013 */       lui $t7, %hi(D_ovl24_80135CCC)
  /* 12CCC0 80133980 8DEF5CCC */        lw $t7, %lo(D_ovl24_80135CCC)($t7)
  /* 12CCC4 80133984 8FA7001C */        lw $a3, 0x1c($sp)
  /* 12CCC8 80133988 144F0003 */       bne $v0, $t7, .L80133998
  /* 12CCCC 8013398C 00000000 */       nop 
  /* 12CCD0 80133990 10000049 */         b .L80133AB8
  /* 12CCD4 80133994 24020001 */     addiu $v0, $zero, 1
  .L80133998:
  /* 12CCD8 80133998 3C188013 */       lui $t8, %hi(D_ovl24_80135CD8)
  /* 12CCDC 8013399C 8F185CD8 */        lw $t8, %lo(D_ovl24_80135CD8)($t8)
  /* 12CCE0 801339A0 00E02025 */        or $a0, $a3, $zero
  /* 12CCE4 801339A4 14F80009 */       bne $a3, $t8, .L801339CC
  /* 12CCE8 801339A8 00000000 */       nop 
  /* 12CCEC 801339AC 0C03B03B */       jal func_ovl2_800EC0EC
  /* 12CCF0 801339B0 8FA50020 */        lw $a1, 0x20($sp)
  /* 12CCF4 801339B4 3C198013 */       lui $t9, %hi(D_ovl24_80135CDC)
  /* 12CCF8 801339B8 8F395CDC */        lw $t9, %lo(D_ovl24_80135CDC)($t9)
  /* 12CCFC 801339BC 14590003 */       bne $v0, $t9, .L801339CC
  /* 12CD00 801339C0 00000000 */       nop 
  /* 12CD04 801339C4 1000003C */         b .L80133AB8
  /* 12CD08 801339C8 24020001 */     addiu $v0, $zero, 1
  .L801339CC:
  /* 12CD0C 801339CC 1000003A */         b .L80133AB8
  /* 12CD10 801339D0 00001025 */        or $v0, $zero, $zero
  .L801339D4:
  /* 12CD14 801339D4 8D085CC8 */        lw $t0, 0x5cc8($t0)
  /* 12CD18 801339D8 00E02025 */        or $a0, $a3, $zero
  /* 12CD1C 801339DC 8FA50020 */        lw $a1, 0x20($sp)
  /* 12CD20 801339E0 14E8000A */       bne $a3, $t0, .L80133A0C
  /* 12CD24 801339E4 00000000 */       nop 
  /* 12CD28 801339E8 0C03B03B */       jal func_ovl2_800EC0EC
  /* 12CD2C 801339EC AFA7001C */        sw $a3, 0x1c($sp)
  /* 12CD30 801339F0 3C098013 */       lui $t1, %hi(D_ovl24_80135CCC)
  /* 12CD34 801339F4 8D295CCC */        lw $t1, %lo(D_ovl24_80135CCC)($t1)
  /* 12CD38 801339F8 8FA7001C */        lw $a3, 0x1c($sp)
  /* 12CD3C 801339FC 14490003 */       bne $v0, $t1, .L80133A0C
  /* 12CD40 80133A00 00000000 */       nop 
  /* 12CD44 80133A04 1000002C */         b .L80133AB8
  /* 12CD48 80133A08 24020001 */     addiu $v0, $zero, 1
  .L80133A0C:
  /* 12CD4C 80133A0C 3C0A8013 */       lui $t2, %hi(D_ovl24_80135CD8)
  /* 12CD50 80133A10 8D4A5CD8 */        lw $t2, %lo(D_ovl24_80135CD8)($t2)
  /* 12CD54 80133A14 00E02025 */        or $a0, $a3, $zero
  /* 12CD58 80133A18 8FA50020 */        lw $a1, 0x20($sp)
  /* 12CD5C 80133A1C 14EA000A */       bne $a3, $t2, .L80133A48
  /* 12CD60 80133A20 00000000 */       nop 
  /* 12CD64 80133A24 0C03B03B */       jal func_ovl2_800EC0EC
  /* 12CD68 80133A28 AFA7001C */        sw $a3, 0x1c($sp)
  /* 12CD6C 80133A2C 3C0B8013 */       lui $t3, %hi(D_ovl24_80135CDC)
  /* 12CD70 80133A30 8D6B5CDC */        lw $t3, %lo(D_ovl24_80135CDC)($t3)
  /* 12CD74 80133A34 8FA7001C */        lw $a3, 0x1c($sp)
  /* 12CD78 80133A38 144B0003 */       bne $v0, $t3, .L80133A48
  /* 12CD7C 80133A3C 00000000 */       nop 
  /* 12CD80 80133A40 1000001D */         b .L80133AB8
  /* 12CD84 80133A44 24020001 */     addiu $v0, $zero, 1
  .L80133A48:
  /* 12CD88 80133A48 3C0C8013 */       lui $t4, %hi(D_ovl24_80135CE8)
  /* 12CD8C 80133A4C 8D8C5CE8 */        lw $t4, %lo(D_ovl24_80135CE8)($t4)
  /* 12CD90 80133A50 00E02025 */        or $a0, $a3, $zero
  /* 12CD94 80133A54 14EC0009 */       bne $a3, $t4, .L80133A7C
  /* 12CD98 80133A58 00000000 */       nop 
  /* 12CD9C 80133A5C 0C03B03B */       jal func_ovl2_800EC0EC
  /* 12CDA0 80133A60 8FA50020 */        lw $a1, 0x20($sp)
  /* 12CDA4 80133A64 3C0D8013 */       lui $t5, %hi(D_ovl24_80135CEC)
  /* 12CDA8 80133A68 8DAD5CEC */        lw $t5, %lo(D_ovl24_80135CEC)($t5)
  /* 12CDAC 80133A6C 144D0003 */       bne $v0, $t5, .L80133A7C
  /* 12CDB0 80133A70 00000000 */       nop 
  /* 12CDB4 80133A74 10000010 */         b .L80133AB8
  /* 12CDB8 80133A78 24020001 */     addiu $v0, $zero, 1
  .L80133A7C:
  /* 12CDBC 80133A7C 1000000E */         b .L80133AB8
  /* 12CDC0 80133A80 00001025 */        or $v0, $zero, $zero
  .L80133A84:
  /* 12CDC4 80133A84 8DCE5CC8 */        lw $t6, 0x5cc8($t6)
  /* 12CDC8 80133A88 00E02025 */        or $a0, $a3, $zero
  /* 12CDCC 80133A8C 54EE000A */      bnel $a3, $t6, .L80133AB8
  /* 12CDD0 80133A90 00001025 */        or $v0, $zero, $zero
  /* 12CDD4 80133A94 0C03B03B */       jal func_ovl2_800EC0EC
  /* 12CDD8 80133A98 8FA50020 */        lw $a1, 0x20($sp)
  /* 12CDDC 80133A9C 3C0F8013 */       lui $t7, %hi(D_ovl24_80135CCC)
  /* 12CDE0 80133AA0 8DEF5CCC */        lw $t7, %lo(D_ovl24_80135CCC)($t7)
  /* 12CDE4 80133AA4 544F0004 */      bnel $v0, $t7, .L80133AB8
  /* 12CDE8 80133AA8 00001025 */        or $v0, $zero, $zero
  /* 12CDEC 80133AAC 10000002 */         b .L80133AB8
  /* 12CDF0 80133AB0 24020001 */     addiu $v0, $zero, 1
  /* 12CDF4 80133AB4 00001025 */        or $v0, $zero, $zero
  .L80133AB8:
  /* 12CDF8 80133AB8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12CDFC 80133ABC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 12CE00 80133AC0 03E00008 */        jr $ra
  /* 12CE04 80133AC4 00000000 */       nop 

glabel func_ovl24_80133AC8
  /* 12CE08 80133AC8 27BDFF68 */     addiu $sp, $sp, -0x98
  /* 12CE0C 80133ACC AFB10024 */        sw $s1, 0x24($sp)
  /* 12CE10 80133AD0 3C0E8013 */       lui $t6, %hi(D_ovl24_801351B8)
  /* 12CE14 80133AD4 27B10050 */     addiu $s1, $sp, 0x50
  /* 12CE18 80133AD8 AFB50034 */        sw $s5, 0x34($sp)
  /* 12CE1C 80133ADC 25CE51B8 */     addiu $t6, $t6, %lo(D_ovl24_801351B8)
  /* 12CE20 80133AE0 0080A825 */        or $s5, $a0, $zero
  /* 12CE24 80133AE4 AFBF003C */        sw $ra, 0x3c($sp)
  /* 12CE28 80133AE8 AFB60038 */        sw $s6, 0x38($sp)
  /* 12CE2C 80133AEC AFB40030 */        sw $s4, 0x30($sp)
  /* 12CE30 80133AF0 AFB3002C */        sw $s3, 0x2c($sp)
  /* 12CE34 80133AF4 AFB20028 */        sw $s2, 0x28($sp)
  /* 12CE38 80133AF8 AFB00020 */        sw $s0, 0x20($sp)
  /* 12CE3C 80133AFC 25C80030 */     addiu $t0, $t6, 0x30
  /* 12CE40 80133B00 0220C825 */        or $t9, $s1, $zero
  .L80133B04:
  /* 12CE44 80133B04 8DD80000 */        lw $t8, ($t6) # D_ovl24_801351B8 + 0
  /* 12CE48 80133B08 25CE000C */     addiu $t6, $t6, 0xc
  /* 12CE4C 80133B0C 2739000C */     addiu $t9, $t9, 0xc
  /* 12CE50 80133B10 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 12CE54 80133B14 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl24_801351B8 + -8
  /* 12CE58 80133B18 AF2FFFF8 */        sw $t7, -8($t9)
  /* 12CE5C 80133B1C 8DD8FFFC */        lw $t8, -4($t6) # D_ovl24_801351B8 + -4
  /* 12CE60 80133B20 15C8FFF8 */       bne $t6, $t0, .L80133B04
  /* 12CE64 80133B24 AF38FFFC */        sw $t8, -4($t9)
  /* 12CE68 80133B28 8DD80000 */        lw $t8, ($t6) # D_ovl24_801351B8 + 0
  /* 12CE6C 80133B2C 2EA1000E */     sltiu $at, $s5, 0xe
  /* 12CE70 80133B30 00154880 */       sll $t1, $s5, 2
  /* 12CE74 80133B34 AF380000 */        sw $t8, ($t9)
  /* 12CE78 80133B38 8DCF0004 */        lw $t7, 4($t6) # D_ovl24_801351B8 + 4
  /* 12CE7C 80133B3C 102000DE */      beqz $at, jtgt_ovl24_80133EB8
  /* 12CE80 80133B40 AF2F0004 */        sw $t7, 4($t9)
  /* 12CE84 80133B44 3C018013 */       lui $at, %hi(D_ovl24_80135BE0)
  /* 12CE88 80133B48 00290821 */      addu $at, $at, $t1
  /* 12CE8C 80133B4C 8C295BE0 */        lw $t1, %lo(D_ovl24_80135BE0)($at)
  /* 12CE90 80133B50 01200008 */        jr $t1
  /* 12CE94 80133B54 00000000 */       nop 
  glabel jtgt_ovl24_80133B58
  /* 12CE98 80133B58 02A02025 */        or $a0, $s5, $zero
  /* 12CE9C 80133B5C 0C04CDDB */       jal func_ovl24_8013376C
  /* 12CEA0 80133B60 24050020 */     addiu $a1, $zero, 0x20
  /* 12CEA4 80133B64 3C118013 */       lui $s1, %hi(D_ovl24_80135C3C)
  /* 12CEA8 80133B68 3C148013 */       lui $s4, %hi(D_ovl24_80135CC8)
  /* 12CEAC 80133B6C 26945CC8 */     addiu $s4, $s4, %lo(D_ovl24_80135CC8)
  /* 12CEB0 80133B70 26315C3C */     addiu $s1, $s1, %lo(D_ovl24_80135C3C)
  /* 12CEB4 80133B74 00008025 */        or $s0, $zero, $zero
  /* 12CEB8 80133B78 24160012 */     addiu $s6, $zero, 0x12
  /* 12CEBC 80133B7C 24130006 */     addiu $s3, $zero, 6
  .L80133B80:
  /* 12CEC0 80133B80 240A0020 */     addiu $t2, $zero, 0x20
  /* 12CEC4 80133B84 AFAA0010 */        sw $t2, 0x10($sp)
  /* 12CEC8 80133B88 02602025 */        or $a0, $s3, $zero
  /* 12CECC 80133B8C 02A02825 */        or $a1, $s5, $zero
  /* 12CED0 80133B90 02003025 */        or $a2, $s0, $zero
  /* 12CED4 80133B94 0C04CCE6 */       jal func_ovl24_80133398
  /* 12CED8 80133B98 02203825 */        or $a3, $s1, $zero
  /* 12CEDC 80133B9C 0213001A */       div $zero, $s0, $s3
  /* 12CEE0 80133BA0 8E8B0004 */        lw $t3, 4($s4) # D_ovl24_80135CC8 + 4
  /* 12CEE4 80133BA4 00409025 */        or $s2, $v0, $zero
  /* 12CEE8 80133BA8 16600002 */      bnez $s3, .L80133BB4
  /* 12CEEC 80133BAC 00000000 */       nop 
  /* 12CEF0 80133BB0 0007000D */     break 7
  .L80133BB4:
  /* 12CEF4 80133BB4 2401FFFF */     addiu $at, $zero, -1
  /* 12CEF8 80133BB8 16610004 */       bne $s3, $at, .L80133BCC
  /* 12CEFC 80133BBC 3C018000 */       lui $at, 0x8000
  /* 12CF00 80133BC0 16010002 */       bne $s0, $at, .L80133BCC
  /* 12CF04 80133BC4 00000000 */       nop 
  /* 12CF08 80133BC8 0006000D */     break 6
  .L80133BCC:
  /* 12CF0C 80133BCC 00002810 */      mfhi $a1
  /* 12CF10 80133BD0 02402025 */        or $a0, $s2, $zero
  /* 12CF14 80133BD4 15650009 */       bne $t3, $a1, .L80133BFC
  /* 12CF18 80133BD8 00000000 */       nop 
  /* 12CF1C 80133BDC 8E8C0000 */        lw $t4, ($s4) # D_ovl24_80135CC8 + 0
  /* 12CF20 80133BE0 24060001 */     addiu $a2, $zero, 1
  /* 12CF24 80133BE4 166C0005 */       bne $s3, $t4, .L80133BFC
  /* 12CF28 80133BE8 00000000 */       nop 
  /* 12CF2C 80133BEC 0C03A492 */       jal func_ovl2_800E9248
  /* 12CF30 80133BF0 02402025 */        or $a0, $s2, $zero
  /* 12CF34 80133BF4 10000004 */         b .L80133C08
  /* 12CF38 80133BF8 26100001 */     addiu $s0, $s0, 1
  .L80133BFC:
  /* 12CF3C 80133BFC 0C03A492 */       jal func_ovl2_800E9248
  /* 12CF40 80133C00 00003025 */        or $a2, $zero, $zero
  /* 12CF44 80133C04 26100001 */     addiu $s0, $s0, 1
  .L80133C08:
  /* 12CF48 80133C08 1616FFDD */       bne $s0, $s6, .L80133B80
  /* 12CF4C 80133C0C 26310004 */     addiu $s1, $s1, 4
  /* 12CF50 80133C10 100000AA */         b .L80133EBC
  /* 12CF54 80133C14 8FBF003C */        lw $ra, 0x3c($sp)
  glabel jtgt_ovl24_80133C18
  /* 12CF58 80133C18 02A02025 */        or $a0, $s5, $zero
  /* 12CF5C 80133C1C 0C04CDDB */       jal func_ovl24_8013376C
  /* 12CF60 80133C20 24050020 */     addiu $a1, $zero, 0x20
  /* 12CF64 80133C24 3C118013 */       lui $s1, %hi(D_ovl24_80135C3C)
  /* 12CF68 80133C28 26315C3C */     addiu $s1, $s1, %lo(D_ovl24_80135C3C)
  /* 12CF6C 80133C2C 00008025 */        or $s0, $zero, $zero
  /* 12CF70 80133C30 24130008 */     addiu $s3, $zero, 8
  .L80133C34:
  /* 12CF74 80133C34 240D0020 */     addiu $t5, $zero, 0x20
  /* 12CF78 80133C38 AFAD0010 */        sw $t5, 0x10($sp)
  /* 12CF7C 80133C3C 02602025 */        or $a0, $s3, $zero
  /* 12CF80 80133C40 02A02825 */        or $a1, $s5, $zero
  /* 12CF84 80133C44 02003025 */        or $a2, $s0, $zero
  /* 12CF88 80133C48 0C04CCE6 */       jal func_ovl24_80133398
  /* 12CF8C 80133C4C 02203825 */        or $a3, $s1, $zero
  /* 12CF90 80133C50 00409025 */        or $s2, $v0, $zero
  /* 12CF94 80133C54 00402025 */        or $a0, $v0, $zero
  /* 12CF98 80133C58 0C04CC20 */       jal func_ovl24_80133080
  /* 12CF9C 80133C5C 02A02825 */        or $a1, $s5, $zero
  /* 12CFA0 80133C60 02A02025 */        or $a0, $s5, $zero
  /* 12CFA4 80133C64 02602825 */        or $a1, $s3, $zero
  /* 12CFA8 80133C68 0C04CE4C */       jal func_ovl24_80133930
  /* 12CFAC 80133C6C 00003025 */        or $a2, $zero, $zero
  /* 12CFB0 80133C70 10400007 */      beqz $v0, .L80133C90
  /* 12CFB4 80133C74 00002025 */        or $a0, $zero, $zero
  /* 12CFB8 80133C78 0C03B03B */       jal func_ovl2_800EC0EC
  /* 12CFBC 80133C7C 24050001 */     addiu $a1, $zero, 1
  /* 12CFC0 80133C80 02402025 */        or $a0, $s2, $zero
  /* 12CFC4 80133C84 00402825 */        or $a1, $v0, $zero
  /* 12CFC8 80133C88 0C03A492 */       jal func_ovl2_800E9248
  /* 12CFCC 80133C8C 00003025 */        or $a2, $zero, $zero
  .L80133C90:
  /* 12CFD0 80133C90 26100001 */     addiu $s0, $s0, 1
  /* 12CFD4 80133C94 1613FFE7 */       bne $s0, $s3, .L80133C34
  /* 12CFD8 80133C98 26310004 */     addiu $s1, $s1, 4
  /* 12CFDC 80133C9C 10000087 */         b .L80133EBC
  /* 12CFE0 80133CA0 8FBF003C */        lw $ra, 0x3c($sp)
  glabel jtgt_ovl24_80133CA4
  /* 12CFE4 80133CA4 02A02025 */        or $a0, $s5, $zero
  /* 12CFE8 80133CA8 0C04CDDB */       jal func_ovl24_8013376C
  /* 12CFEC 80133CAC 24050020 */     addiu $a1, $zero, 0x20
  /* 12CFF0 80133CB0 3C128013 */       lui $s2, %hi(D_ovl24_80135C38)
  /* 12CFF4 80133CB4 26525C38 */     addiu $s2, $s2, %lo(D_ovl24_80135C38)
  /* 12CFF8 80133CB8 2410000E */     addiu $s0, $zero, 0xe
  /* 12CFFC 80133CBC 24160012 */     addiu $s6, $zero, 0x12
  /* 12D000 80133CC0 2413001A */     addiu $s3, $zero, 0x1a
  /* 12D004 80133CC4 24110018 */     addiu $s1, $zero, 0x18
  .L80133CC8:
  /* 12D008 80133CC8 5216000C */      beql $s0, $s6, .L80133CFC
  /* 12D00C 80133CCC 26100001 */     addiu $s0, $s0, 1
  /* 12D010 80133CD0 12110009 */       beq $s0, $s1, .L80133CF8
  /* 12D014 80133CD4 02002025 */        or $a0, $s0, $zero
  /* 12D018 80133CD8 00104080 */       sll $t0, $s0, 2
  /* 12D01C 80133CDC 02483821 */      addu $a3, $s2, $t0
  /* 12D020 80133CE0 240E0020 */     addiu $t6, $zero, 0x20
  /* 12D024 80133CE4 AFAE0010 */        sw $t6, 0x10($sp)
  /* 12D028 80133CE8 24E7FFCC */     addiu $a3, $a3, -0x34
  /* 12D02C 80133CEC 02A02825 */        or $a1, $s5, $zero
  /* 12D030 80133CF0 0C04CCE6 */       jal func_ovl24_80133398
  /* 12D034 80133CF4 00003025 */        or $a2, $zero, $zero
  .L80133CF8:
  /* 12D038 80133CF8 26100001 */     addiu $s0, $s0, 1
  .L80133CFC:
  /* 12D03C 80133CFC 1613FFF2 */       bne $s0, $s3, .L80133CC8
  /* 12D040 80133D00 00000000 */       nop 
  /* 12D044 80133D04 1000006D */         b .L80133EBC
  /* 12D048 80133D08 8FBF003C */        lw $ra, 0x3c($sp)
  glabel jtgt_ovl24_80133D0C
  /* 12D04C 80133D0C 02A02025 */        or $a0, $s5, $zero
  /* 12D050 80133D10 0C04CDDB */       jal func_ovl24_8013376C
  /* 12D054 80133D14 24050020 */     addiu $a1, $zero, 0x20
  /* 12D058 80133D18 0015C880 */       sll $t9, $s5, 2
  /* 12D05C 80133D1C 02398021 */      addu $s0, $s1, $t9
  /* 12D060 80133D20 8E040000 */        lw $a0, ($s0)
  /* 12D064 80133D24 3C078013 */       lui $a3, %hi(D_ovl24_80135C3C)
  /* 12D068 80133D28 240F0020 */     addiu $t7, $zero, 0x20
  /* 12D06C 80133D2C AFAF0010 */        sw $t7, 0x10($sp)
  /* 12D070 80133D30 24E75C3C */     addiu $a3, $a3, %lo(D_ovl24_80135C3C)
  /* 12D074 80133D34 02A02825 */        or $a1, $s5, $zero
  /* 12D078 80133D38 0C04CCE6 */       jal func_ovl24_80133398
  /* 12D07C 80133D3C 00003025 */        or $a2, $zero, $zero
  /* 12D080 80133D40 3C148013 */       lui $s4, %hi(D_ovl24_80135CC8)
  /* 12D084 80133D44 26945CC8 */     addiu $s4, $s4, %lo(D_ovl24_80135CC8)
  /* 12D088 80133D48 8E840000 */        lw $a0, ($s4) # D_ovl24_80135CC8 + 0
  /* 12D08C 80133D4C 8E180000 */        lw $t8, ($s0)
  /* 12D090 80133D50 00409025 */        or $s2, $v0, $zero
  /* 12D094 80133D54 54980059 */      bnel $a0, $t8, .L80133EBC
  /* 12D098 80133D58 8FBF003C */        lw $ra, 0x3c($sp)
  /* 12D09C 80133D5C 0C03B03B */       jal func_ovl2_800EC0EC
  /* 12D0A0 80133D60 00002825 */        or $a1, $zero, $zero
  /* 12D0A4 80133D64 8E890004 */        lw $t1, 4($s4) # D_ovl24_80135CC8 + 4
  /* 12D0A8 80133D68 00002825 */        or $a1, $zero, $zero
  /* 12D0AC 80133D6C 1449000A */       bne $v0, $t1, .L80133D98
  /* 12D0B0 80133D70 00000000 */       nop 
  /* 12D0B4 80133D74 8E840000 */        lw $a0, ($s4) # D_ovl24_80135CC8 + 0
  /* 12D0B8 80133D78 0C03B03B */       jal func_ovl2_800EC0EC
  /* 12D0BC 80133D7C 24050001 */     addiu $a1, $zero, 1
  /* 12D0C0 80133D80 02402025 */        or $a0, $s2, $zero
  /* 12D0C4 80133D84 00402825 */        or $a1, $v0, $zero
  /* 12D0C8 80133D88 0C03A492 */       jal func_ovl2_800E9248
  /* 12D0CC 80133D8C 00003025 */        or $a2, $zero, $zero
  /* 12D0D0 80133D90 1000004A */         b .L80133EBC
  /* 12D0D4 80133D94 8FBF003C */        lw $ra, 0x3c($sp)
  .L80133D98:
  /* 12D0D8 80133D98 0C03B03B */       jal func_ovl2_800EC0EC
  /* 12D0DC 80133D9C 8E840000 */        lw $a0, ($s4) # D_ovl24_80135CC8 + 0
  /* 12D0E0 80133DA0 02402025 */        or $a0, $s2, $zero
  /* 12D0E4 80133DA4 00402825 */        or $a1, $v0, $zero
  /* 12D0E8 80133DA8 0C03A492 */       jal func_ovl2_800E9248
  /* 12D0EC 80133DAC 00003025 */        or $a2, $zero, $zero
  /* 12D0F0 80133DB0 10000042 */         b .L80133EBC
  /* 12D0F4 80133DB4 8FBF003C */        lw $ra, 0x3c($sp)
  glabel jtgt_ovl24_80133DB8
  /* 12D0F8 80133DB8 02A02025 */        or $a0, $s5, $zero
  /* 12D0FC 80133DBC 0C04CDDB */       jal func_ovl24_8013376C
  /* 12D100 80133DC0 24050020 */     addiu $a1, $zero, 0x20
  /* 12D104 80133DC4 3C078013 */       lui $a3, %hi(D_ovl24_80135C44)
  /* 12D108 80133DC8 240A0020 */     addiu $t2, $zero, 0x20
  /* 12D10C 80133DCC AFAA0010 */        sw $t2, 0x10($sp)
  /* 12D110 80133DD0 24E75C44 */     addiu $a3, $a3, %lo(D_ovl24_80135C44)
  /* 12D114 80133DD4 24040002 */     addiu $a0, $zero, 2
  /* 12D118 80133DD8 02A02825 */        or $a1, $s5, $zero
  /* 12D11C 80133DDC 0C04CCE6 */       jal func_ovl24_80133398
  /* 12D120 80133DE0 00003025 */        or $a2, $zero, $zero
  /* 12D124 80133DE4 10000035 */         b .L80133EBC
  /* 12D128 80133DE8 8FBF003C */        lw $ra, 0x3c($sp)
  glabel jtgt_ovl24_80133DEC
  /* 12D12C 80133DEC 02A02025 */        or $a0, $s5, $zero
  /* 12D130 80133DF0 0C04CDDB */       jal func_ovl24_8013376C
  /* 12D134 80133DF4 24050020 */     addiu $a1, $zero, 0x20
  /* 12D138 80133DF8 3C078013 */       lui $a3, %hi(D_ovl24_80135C40)
  /* 12D13C 80133DFC 240B0020 */     addiu $t3, $zero, 0x20
  /* 12D140 80133E00 AFAB0010 */        sw $t3, 0x10($sp)
  /* 12D144 80133E04 24E75C40 */     addiu $a3, $a3, %lo(D_ovl24_80135C40)
  /* 12D148 80133E08 00002025 */        or $a0, $zero, $zero
  /* 12D14C 80133E0C 02A02825 */        or $a1, $s5, $zero
  /* 12D150 80133E10 0C04CCE6 */       jal func_ovl24_80133398
  /* 12D154 80133E14 00003025 */        or $a2, $zero, $zero
  /* 12D158 80133E18 00409025 */        or $s2, $v0, $zero
  /* 12D15C 80133E1C 02A02025 */        or $a0, $s5, $zero
  /* 12D160 80133E20 00002825 */        or $a1, $zero, $zero
  /* 12D164 80133E24 0C04CE4C */       jal func_ovl24_80133930
  /* 12D168 80133E28 00003025 */        or $a2, $zero, $zero
  /* 12D16C 80133E2C 10400007 */      beqz $v0, .L80133E4C
  /* 12D170 80133E30 00002025 */        or $a0, $zero, $zero
  /* 12D174 80133E34 0C03B03B */       jal func_ovl2_800EC0EC
  /* 12D178 80133E38 24050001 */     addiu $a1, $zero, 1
  /* 12D17C 80133E3C 02402025 */        or $a0, $s2, $zero
  /* 12D180 80133E40 00402825 */        or $a1, $v0, $zero
  /* 12D184 80133E44 0C03A492 */       jal func_ovl2_800E9248
  /* 12D188 80133E48 00003025 */        or $a2, $zero, $zero
  .L80133E4C:
  /* 12D18C 80133E4C 02A02025 */        or $a0, $s5, $zero
  /* 12D190 80133E50 0C04CDDB */       jal func_ovl24_8013376C
  /* 12D194 80133E54 24050021 */     addiu $a1, $zero, 0x21
  /* 12D198 80133E58 8C4C0080 */        lw $t4, 0x80($v0)
  /* 12D19C 80133E5C 3C078013 */       lui $a3, %hi(D_ovl24_80135C44)
  /* 12D1A0 80133E60 24080021 */     addiu $t0, $zero, 0x21
  /* 12D1A4 80133E64 358D0001 */       ori $t5, $t4, 1
  /* 12D1A8 80133E68 AC4D0080 */        sw $t5, 0x80($v0)
  /* 12D1AC 80133E6C AFA80010 */        sw $t0, 0x10($sp)
  /* 12D1B0 80133E70 24E75C44 */     addiu $a3, $a3, %lo(D_ovl24_80135C44)
  /* 12D1B4 80133E74 24040004 */     addiu $a0, $zero, 4
  /* 12D1B8 80133E78 02A02825 */        or $a1, $s5, $zero
  /* 12D1BC 80133E7C 0C04CCE6 */       jal func_ovl24_80133398
  /* 12D1C0 80133E80 00003025 */        or $a2, $zero, $zero
  /* 12D1C4 80133E84 00409025 */        or $s2, $v0, $zero
  /* 12D1C8 80133E88 02A02025 */        or $a0, $s5, $zero
  /* 12D1CC 80133E8C 24050004 */     addiu $a1, $zero, 4
  /* 12D1D0 80133E90 0C04CE4C */       jal func_ovl24_80133930
  /* 12D1D4 80133E94 00003025 */        or $a2, $zero, $zero
  /* 12D1D8 80133E98 10400007 */      beqz $v0, jtgt_ovl24_80133EB8
  /* 12D1DC 80133E9C 24040004 */     addiu $a0, $zero, 4
  /* 12D1E0 80133EA0 0C03B03B */       jal func_ovl2_800EC0EC
  /* 12D1E4 80133EA4 24050001 */     addiu $a1, $zero, 1
  /* 12D1E8 80133EA8 02402025 */        or $a0, $s2, $zero
  /* 12D1EC 80133EAC 00402825 */        or $a1, $v0, $zero
  /* 12D1F0 80133EB0 0C03A492 */       jal func_ovl2_800E9248
  /* 12D1F4 80133EB4 00003025 */        or $a2, $zero, $zero
  glabel jtgt_ovl24_80133EB8
  /* 12D1F8 80133EB8 8FBF003C */        lw $ra, 0x3c($sp)
  .L80133EBC:
  /* 12D1FC 80133EBC 8FB00020 */        lw $s0, 0x20($sp)
  /* 12D200 80133EC0 8FB10024 */        lw $s1, 0x24($sp)
  /* 12D204 80133EC4 8FB20028 */        lw $s2, 0x28($sp)
  /* 12D208 80133EC8 8FB3002C */        lw $s3, 0x2c($sp)
  /* 12D20C 80133ECC 8FB40030 */        lw $s4, 0x30($sp)
  /* 12D210 80133ED0 8FB50034 */        lw $s5, 0x34($sp)
  /* 12D214 80133ED4 8FB60038 */        lw $s6, 0x38($sp)
  /* 12D218 80133ED8 03E00008 */        jr $ra
  /* 12D21C 80133EDC 27BD0098 */     addiu $sp, $sp, 0x98

glabel func_ovl24_80133EE0
  /* 12D220 80133EE0 27BDF820 */     addiu $sp, $sp, -0x7e0
  /* 12D224 80133EE4 3C0E8013 */       lui $t6, %hi(D_ovl24_801351F0)
  /* 12D228 80133EE8 27A30000 */     addiu $v1, $sp, 0
  /* 12D22C 80133EEC 25CE51F0 */     addiu $t6, $t6, %lo(D_ovl24_801351F0)
  /* 12D230 80133EF0 25C807E0 */     addiu $t0, $t6, 0x7e0
  /* 12D234 80133EF4 0060C825 */        or $t9, $v1, $zero
  .L80133EF8:
  /* 12D238 80133EF8 8DD80000 */        lw $t8, ($t6) # D_ovl24_801351F0 + 0
  /* 12D23C 80133EFC 25CE000C */     addiu $t6, $t6, 0xc
  /* 12D240 80133F00 2739000C */     addiu $t9, $t9, 0xc
  /* 12D244 80133F04 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 12D248 80133F08 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl24_801351F0 + -8
  /* 12D24C 80133F0C AF2FFFF8 */        sw $t7, -8($t9)
  /* 12D250 80133F10 8DD8FFFC */        lw $t8, -4($t6) # D_ovl24_801351F0 + -4
  /* 12D254 80133F14 15C8FFF8 */       bne $t6, $t0, .L80133EF8
  /* 12D258 80133F18 AF38FFFC */        sw $t8, -4($t9)
  /* 12D25C 80133F1C 00054880 */       sll $t1, $a1, 2
  /* 12D260 80133F20 01254821 */      addu $t1, $t1, $a1
  /* 12D264 80133F24 00094880 */       sll $t1, $t1, 2
  /* 12D268 80133F28 01254821 */      addu $t1, $t1, $a1
  /* 12D26C 80133F2C 000658C0 */       sll $t3, $a2, 3
  /* 12D270 80133F30 01665823 */      subu $t3, $t3, $a2
  /* 12D274 80133F34 000948C0 */       sll $t1, $t1, 3
  /* 12D278 80133F38 00695021 */      addu $t2, $v1, $t1
  /* 12D27C 80133F3C 000B5880 */       sll $t3, $t3, 2
  /* 12D280 80133F40 014B6021 */      addu $t4, $t2, $t3
  /* 12D284 80133F44 8D880000 */        lw $t0, ($t4)
  /* 12D288 80133F48 00801025 */        or $v0, $a0, $zero
  /* 12D28C 80133F4C AC880000 */        sw $t0, ($a0)
  /* 12D290 80133F50 8D8D0004 */        lw $t5, 4($t4)
  /* 12D294 80133F54 AC8D0004 */        sw $t5, 4($a0)
  /* 12D298 80133F58 8D880008 */        lw $t0, 8($t4)
  /* 12D29C 80133F5C AC880008 */        sw $t0, 8($a0)
  /* 12D2A0 80133F60 8D8D000C */        lw $t5, 0xc($t4)
  /* 12D2A4 80133F64 AC8D000C */        sw $t5, 0xc($a0)
  /* 12D2A8 80133F68 8D880010 */        lw $t0, 0x10($t4)
  /* 12D2AC 80133F6C AC880010 */        sw $t0, 0x10($a0)
  /* 12D2B0 80133F70 8D8D0014 */        lw $t5, 0x14($t4)
  /* 12D2B4 80133F74 AC8D0014 */        sw $t5, 0x14($a0)
  /* 12D2B8 80133F78 8D880018 */        lw $t0, 0x18($t4)
  /* 12D2BC 80133F7C 27BD07E0 */     addiu $sp, $sp, 0x7e0
  /* 12D2C0 80133F80 03E00008 */        jr $ra
  /* 12D2C4 80133F84 AC880018 */        sw $t0, 0x18($a0)

  /* 12D2C8 80133F88 03E00008 */        jr $ra
  /* 12D2CC 80133F8C 00000000 */       nop 

glabel func_ovl24_80133F90
  /* 12D2D0 80133F90 27BDFF20 */     addiu $sp, $sp, -0xe0
  /* 12D2D4 80133F94 3C0F8013 */       lui $t7, %hi(D_ovl24_801359D0)
  /* 12D2D8 80133F98 25EF59D0 */     addiu $t7, $t7, %lo(D_ovl24_801359D0)
  /* 12D2DC 80133F9C AFBF0044 */        sw $ra, 0x44($sp)
  /* 12D2E0 80133FA0 AFB00040 */        sw $s0, 0x40($sp)
  /* 12D2E4 80133FA4 AFA400E0 */        sw $a0, 0xe0($sp)
  /* 12D2E8 80133FA8 AFA500E4 */        sw $a1, 0xe4($sp)
  /* 12D2EC 80133FAC 27A2005C */     addiu $v0, $sp, 0x5c
  /* 12D2F0 80133FB0 25E80030 */     addiu $t0, $t7, 0x30
  /* 12D2F4 80133FB4 27AE008C */     addiu $t6, $sp, 0x8c
  .L80133FB8:
  /* 12D2F8 80133FB8 8DF90000 */        lw $t9, ($t7) # D_ovl24_801359D0 + 0
  /* 12D2FC 80133FBC 25EF000C */     addiu $t7, $t7, 0xc
  /* 12D300 80133FC0 25CE000C */     addiu $t6, $t6, 0xc
  /* 12D304 80133FC4 ADD9FFF4 */        sw $t9, -0xc($t6)
  /* 12D308 80133FC8 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl24_801359D0 + -8
  /* 12D30C 80133FCC ADD8FFF8 */        sw $t8, -8($t6)
  /* 12D310 80133FD0 8DF9FFFC */        lw $t9, -4($t7) # D_ovl24_801359D0 + -4
  /* 12D314 80133FD4 15E8FFF8 */       bne $t7, $t0, .L80133FB8
  /* 12D318 80133FD8 ADD9FFFC */        sw $t9, -4($t6)
  /* 12D31C 80133FDC 3C098013 */       lui $t1, %hi(D_ovl24_80135A00)
  /* 12D320 80133FE0 25295A00 */     addiu $t1, $t1, %lo(D_ovl24_80135A00)
  /* 12D324 80133FE4 252D0030 */     addiu $t5, $t1, 0x30
  /* 12D328 80133FE8 00406025 */        or $t4, $v0, $zero
  .L80133FEC:
  /* 12D32C 80133FEC 8D2B0000 */        lw $t3, ($t1) # D_ovl24_80135A00 + 0
  /* 12D330 80133FF0 2529000C */     addiu $t1, $t1, 0xc
  /* 12D334 80133FF4 258C000C */     addiu $t4, $t4, 0xc
  /* 12D338 80133FF8 AD8BFFF4 */        sw $t3, -0xc($t4)
  /* 12D33C 80133FFC 8D2AFFF8 */        lw $t2, -8($t1) # D_ovl24_80135A00 + -8
  /* 12D340 80134000 AD8AFFF8 */        sw $t2, -8($t4)
  /* 12D344 80134004 8D2BFFFC */        lw $t3, -4($t1) # D_ovl24_80135A00 + -4
  /* 12D348 80134008 152DFFF8 */       bne $t1, $t5, .L80133FEC
  /* 12D34C 8013400C AD8BFFFC */        sw $t3, -4($t4)
  /* 12D350 80134010 8FA800E4 */        lw $t0, 0xe4($sp)
  /* 12D354 80134014 24040000 */     addiu $a0, $zero, 0
  /* 12D358 80134018 24050001 */     addiu $a1, $zero, 1
  /* 12D35C 8013401C 000878C0 */       sll $t7, $t0, 3
  /* 12D360 80134020 004F8021 */      addu $s0, $v0, $t7
  /* 12D364 80134024 8E070000 */        lw $a3, ($s0)
  /* 12D368 80134028 0C00C295 */       jal __ll_lshift
  /* 12D36C 8013402C 000737C3 */       sra $a2, $a3, 0x1f
  /* 12D370 80134030 3C188001 */       lui $t8, %hi(func_80017EC0)
  /* 12D374 80134034 27187EC0 */     addiu $t8, $t8, %lo(func_80017EC0)
  /* 12D378 80134038 AFB80010 */        sw $t8, 0x10($sp)
  /* 12D37C 8013403C 8E190004 */        lw $t9, 4($s0)
  /* 12D380 80134040 346B8400 */       ori $t3, $v1, 0x8400
  /* 12D384 80134044 3C010004 */       lui $at, 4
  /* 12D388 80134048 01614825 */        or $t1, $t3, $at
  /* 12D38C 8013404C 24180001 */     addiu $t8, $zero, 1
  /* 12D390 80134050 240FFFFF */     addiu $t7, $zero, -1
  /* 12D394 80134054 240E0001 */     addiu $t6, $zero, 1
  /* 12D398 80134058 AFAE0028 */        sw $t6, 0x28($sp)
  /* 12D39C 8013405C AFAF0020 */        sw $t7, 0x20($sp)
  /* 12D3A0 80134060 AFB80030 */        sw $t8, 0x30($sp)
  /* 12D3A4 80134064 AFA9001C */        sw $t1, 0x1c($sp)
  /* 12D3A8 80134068 AFA00034 */        sw $zero, 0x34($sp)
  /* 12D3AC 8013406C AFA0002C */        sw $zero, 0x2c($sp)
  /* 12D3B0 80134070 AFA00024 */        sw $zero, 0x24($sp)
  /* 12D3B4 80134074 AFA20018 */        sw $v0, 0x18($sp)
  /* 12D3B8 80134078 24040401 */     addiu $a0, $zero, 0x401
  /* 12D3BC 8013407C 00002825 */        or $a1, $zero, $zero
  /* 12D3C0 80134080 24060010 */     addiu $a2, $zero, 0x10
  /* 12D3C4 80134084 3C078000 */       lui $a3, 0x8000
  /* 12D3C8 80134088 0C002E4F */       jal func_8000B93C
  /* 12D3CC 8013408C AFB90014 */        sw $t9, 0x14($sp)
  /* 12D3D0 80134090 AFA200DC */        sw $v0, 0xdc($sp)
  /* 12D3D4 80134094 8C440074 */        lw $a0, 0x74($v0)
  /* 12D3D8 80134098 24050003 */     addiu $a1, $zero, 3
  /* 12D3DC 8013409C 0C00233C */       jal func_80008CF0
  /* 12D3E0 801340A0 00003025 */        or $a2, $zero, $zero
  /* 12D3E4 801340A4 8FB900DC */        lw $t9, 0xdc($sp)
  /* 12D3E8 801340A8 24050007 */     addiu $a1, $zero, 7
  /* 12D3EC 801340AC 00003025 */        or $a2, $zero, $zero
  /* 12D3F0 801340B0 0C00233C */       jal func_80008CF0
  /* 12D3F4 801340B4 8F240074 */        lw $a0, 0x74($t9)
  /* 12D3F8 801340B8 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 12D3FC 801340BC 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 12D400 801340C0 8FAC00DC */        lw $t4, 0xdc($sp)
  /* 12D404 801340C4 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 12D408 801340C8 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 12D40C 801340CC 8D900074 */        lw $s0, 0x74($t4)
  /* 12D410 801340D0 44050000 */      mfc1 $a1, $f0
  /* 12D414 801340D4 44060000 */      mfc1 $a2, $f0
  /* 12D418 801340D8 3C07439B */       lui $a3, 0x439b
  /* 12D41C 801340DC 26040008 */     addiu $a0, $s0, 8
  /* 12D420 801340E0 0C001C20 */       jal func_80007080
  /* 12D424 801340E4 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 12D428 801340E8 27A400BC */     addiu $a0, $sp, 0xbc
  /* 12D42C 801340EC 8FA500E0 */        lw $a1, 0xe0($sp)
  /* 12D430 801340F0 0C04CFB8 */       jal func_ovl24_80133EE0
  /* 12D434 801340F4 8FA600E4 */        lw $a2, 0xe4($sp)
  /* 12D438 801340F8 8FAD00E0 */        lw $t5, 0xe0($sp)
  /* 12D43C 801340FC 3C088013 */       lui $t0, %hi(D_ovl24_80136058)
  /* 12D440 80134100 8D086058 */        lw $t0, %lo(D_ovl24_80136058)($t0)
  /* 12D444 80134104 000D5080 */       sll $t2, $t5, 2
  /* 12D448 80134108 03AA5821 */      addu $t3, $sp, $t2
  /* 12D44C 8013410C 8D6B008C */        lw $t3, 0x8c($t3)
  /* 12D450 80134110 02002025 */        or $a0, $s0, $zero
  /* 12D454 80134114 24060000 */     addiu $a2, $zero, 0
  /* 12D458 80134118 0C003E8F */       jal func_8000FA3C
  /* 12D45C 8013411C 01682821 */      addu $a1, $t3, $t0
  /* 12D460 80134120 0C004160 */       jal func_80010580
  /* 12D464 80134124 8FA400DC */        lw $a0, 0xdc($sp)
  /* 12D468 80134128 C7A600BC */      lwc1 $f6, 0xbc($sp)
  /* 12D46C 8013412C 3C014300 */       lui $at, (0x43000000 >> 16) # 128.0
  /* 12D470 80134130 8E090080 */        lw $t1, 0x80($s0)
  /* 12D474 80134134 E606003C */      swc1 $f6, 0x3c($s0)
  /* 12D478 80134138 C7A800C0 */      lwc1 $f8, 0xc0($sp)
  /* 12D47C 8013413C 44813000 */      mtc1 $at, $f6 # 128.0 to cop1
  /* 12D480 80134140 3C014680 */       lui $at, (0x46800000 >> 16) # 16384.0
  /* 12D484 80134144 E6080040 */      swc1 $f8, 0x40($s0)
  /* 12D488 80134148 C7AA00C4 */      lwc1 $f10, 0xc4($sp)
  /* 12D48C 8013414C 44814000 */      mtc1 $at, $f8 # 16384.0 to cop1
  /* 12D490 80134150 352F0001 */       ori $t7, $t1, 1
  /* 12D494 80134154 E60A0044 */      swc1 $f10, 0x44($s0)
  /* 12D498 80134158 C7B000C8 */      lwc1 $f16, 0xc8($sp)
  /* 12D49C 8013415C E6100048 */      swc1 $f16, 0x48($s0)
  /* 12D4A0 80134160 C7B200CC */      lwc1 $f18, 0xcc($sp)
  /* 12D4A4 80134164 E612004C */      swc1 $f18, 0x4c($s0)
  /* 12D4A8 80134168 C7A400D0 */      lwc1 $f4, 0xd0($sp)
  /* 12D4AC 8013416C AE0F0080 */        sw $t7, 0x80($s0)
  /* 12D4B0 80134170 E6060028 */      swc1 $f6, 0x28($s0)
  /* 12D4B4 80134174 E608002C */      swc1 $f8, 0x2c($s0)
  /* 12D4B8 80134178 E6040050 */      swc1 $f4, 0x50($s0)
  /* 12D4BC 8013417C 8FBF0044 */        lw $ra, 0x44($sp)
  /* 12D4C0 80134180 8FB00040 */        lw $s0, 0x40($sp)
  /* 12D4C4 80134184 27BD00E0 */     addiu $sp, $sp, 0xe0
  /* 12D4C8 80134188 03E00008 */        jr $ra
  /* 12D4CC 8013418C 00000000 */       nop 

glabel func_ovl24_80134190
  /* 12D4D0 80134190 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 12D4D4 80134194 24010004 */     addiu $at, $zero, 4
  /* 12D4D8 80134198 AFBF001C */        sw $ra, 0x1c($sp)
  /* 12D4DC 8013419C 1081003E */       beq $a0, $at, .L80134298
  /* 12D4E0 801341A0 AFA40020 */        sw $a0, 0x20($sp)
  /* 12D4E4 801341A4 24010006 */     addiu $at, $zero, 6
  /* 12D4E8 801341A8 14810063 */       bne $a0, $at, .L80134338
  /* 12D4EC 801341AC 00002825 */        or $a1, $zero, $zero
  /* 12D4F0 801341B0 3C048013 */       lui $a0, %hi(D_ovl24_80135CE8)
  /* 12D4F4 801341B4 8C845CE8 */        lw $a0, %lo(D_ovl24_80135CE8)($a0)
  /* 12D4F8 801341B8 0C04CFE4 */       jal func_ovl24_80133F90
  /* 12D4FC 801341BC 24050005 */     addiu $a1, $zero, 5
  /* 12D500 801341C0 3C0F8013 */       lui $t7, %hi(D_ovl24_80135CE8)
  /* 12D504 801341C4 25EF5CE8 */     addiu $t7, $t7, %lo(D_ovl24_80135CE8)
  /* 12D508 801341C8 8DF90000 */        lw $t9, ($t7) # D_ovl24_80135CE8 + 0
  /* 12D50C 801341CC 3C088013 */       lui $t0, %hi(D_ovl24_80135C40)
  /* 12D510 801341D0 25085C40 */     addiu $t0, $t0, %lo(D_ovl24_80135C40)
  /* 12D514 801341D4 AFB90000 */        sw $t9, ($sp)
  /* 12D518 801341D8 8DE50004 */        lw $a1, 4($t7) # D_ovl24_80135CE8 + 4
  /* 12D51C 801341DC 8FA40000 */        lw $a0, ($sp)
  /* 12D520 801341E0 24070005 */     addiu $a3, $zero, 5
  /* 12D524 801341E4 AFA50004 */        sw $a1, 4($sp)
  /* 12D528 801341E8 8DE60008 */        lw $a2, 8($t7) # D_ovl24_80135CE8 + 8
  /* 12D52C 801341EC AFA80010 */        sw $t0, 0x10($sp)
  /* 12D530 801341F0 0C04CB26 */       jal func_ovl24_80132C98
  /* 12D534 801341F4 AFA60008 */        sw $a2, 8($sp)
  /* 12D538 801341F8 3C048013 */       lui $a0, %hi(D_ovl24_80135CD8)
  /* 12D53C 801341FC 8C845CD8 */        lw $a0, %lo(D_ovl24_80135CD8)($a0)
  /* 12D540 80134200 0C04CFE4 */       jal func_ovl24_80133F90
  /* 12D544 80134204 24050004 */     addiu $a1, $zero, 4
  /* 12D548 80134208 3C098013 */       lui $t1, %hi(D_ovl24_80135CD8)
  /* 12D54C 8013420C 25295CD8 */     addiu $t1, $t1, %lo(D_ovl24_80135CD8)
  /* 12D550 80134210 8D2B0000 */        lw $t3, ($t1) # D_ovl24_80135CD8 + 0
  /* 12D554 80134214 3C0C8013 */       lui $t4, %hi(D_ovl24_80135C3C)
  /* 12D558 80134218 258C5C3C */     addiu $t4, $t4, %lo(D_ovl24_80135C3C)
  /* 12D55C 8013421C AFAB0000 */        sw $t3, ($sp)
  /* 12D560 80134220 8D250004 */        lw $a1, 4($t1) # D_ovl24_80135CD8 + 4
  /* 12D564 80134224 8FA40000 */        lw $a0, ($sp)
  /* 12D568 80134228 24070004 */     addiu $a3, $zero, 4
  /* 12D56C 8013422C AFA50004 */        sw $a1, 4($sp)
  /* 12D570 80134230 8D260008 */        lw $a2, 8($t1) # D_ovl24_80135CD8 + 8
  /* 12D574 80134234 AFAC0010 */        sw $t4, 0x10($sp)
  /* 12D578 80134238 0C04CB26 */       jal func_ovl24_80132C98
  /* 12D57C 8013423C AFA60008 */        sw $a2, 8($sp)
  /* 12D580 80134240 3C048013 */       lui $a0, %hi(D_ovl24_80135CC8)
  /* 12D584 80134244 8C845CC8 */        lw $a0, %lo(D_ovl24_80135CC8)($a0)
  /* 12D588 80134248 0C04CFE4 */       jal func_ovl24_80133F90
  /* 12D58C 8013424C 24050003 */     addiu $a1, $zero, 3
  /* 12D590 80134250 3C0D8013 */       lui $t5, %hi(D_ovl24_80135CC8)
  /* 12D594 80134254 25AD5CC8 */     addiu $t5, $t5, %lo(D_ovl24_80135CC8)
  /* 12D598 80134258 8DAF0000 */        lw $t7, ($t5) # D_ovl24_80135CC8 + 0
  /* 12D59C 8013425C 3C188013 */       lui $t8, %hi(D_ovl24_80135C38)
  /* 12D5A0 80134260 27185C38 */     addiu $t8, $t8, %lo(D_ovl24_80135C38)
  /* 12D5A4 80134264 AFAF0000 */        sw $t7, ($sp)
  /* 12D5A8 80134268 8DA50004 */        lw $a1, 4($t5) # D_ovl24_80135CC8 + 4
  /* 12D5AC 8013426C 8FA40000 */        lw $a0, ($sp)
  /* 12D5B0 80134270 24070003 */     addiu $a3, $zero, 3
  /* 12D5B4 80134274 AFA50004 */        sw $a1, 4($sp)
  /* 12D5B8 80134278 8DA60008 */        lw $a2, 8($t5) # D_ovl24_80135CC8 + 8
  /* 12D5BC 8013427C AFB80010 */        sw $t8, 0x10($sp)
  /* 12D5C0 80134280 0C04CB26 */       jal func_ovl24_80132C98
  /* 12D5C4 80134284 AFA60008 */        sw $a2, 8($sp)
  /* 12D5C8 80134288 0C04CB8B */       jal func_ovl24_80132E2C
  /* 12D5CC 8013428C 8FA40020 */        lw $a0, 0x20($sp)
  /* 12D5D0 80134290 1000003B */         b .L80134380
  /* 12D5D4 80134294 8FBF001C */        lw $ra, 0x1c($sp)
  .L80134298:
  /* 12D5D8 80134298 3C048013 */       lui $a0, %hi(D_ovl24_80135CD8)
  /* 12D5DC 8013429C 8C845CD8 */        lw $a0, %lo(D_ovl24_80135CD8)($a0)
  /* 12D5E0 801342A0 0C04CFE4 */       jal func_ovl24_80133F90
  /* 12D5E4 801342A4 24050002 */     addiu $a1, $zero, 2
  /* 12D5E8 801342A8 3C198013 */       lui $t9, %hi(D_ovl24_80135CD8)
  /* 12D5EC 801342AC 27395CD8 */     addiu $t9, $t9, %lo(D_ovl24_80135CD8)
  /* 12D5F0 801342B0 8F290000 */        lw $t1, ($t9) # D_ovl24_80135CD8 + 0
  /* 12D5F4 801342B4 3C0A8013 */       lui $t2, %hi(D_ovl24_80135C3C)
  /* 12D5F8 801342B8 254A5C3C */     addiu $t2, $t2, %lo(D_ovl24_80135C3C)
  /* 12D5FC 801342BC AFA90000 */        sw $t1, ($sp)
  /* 12D600 801342C0 8F250004 */        lw $a1, 4($t9) # D_ovl24_80135CD8 + 4
  /* 12D604 801342C4 8FA40000 */        lw $a0, ($sp)
  /* 12D608 801342C8 24070002 */     addiu $a3, $zero, 2
  /* 12D60C 801342CC AFA50004 */        sw $a1, 4($sp)
  /* 12D610 801342D0 8F260008 */        lw $a2, 8($t9) # D_ovl24_80135CD8 + 8
  /* 12D614 801342D4 AFAA0010 */        sw $t2, 0x10($sp)
  /* 12D618 801342D8 0C04CB26 */       jal func_ovl24_80132C98
  /* 12D61C 801342DC AFA60008 */        sw $a2, 8($sp)
  /* 12D620 801342E0 3C048013 */       lui $a0, %hi(D_ovl24_80135CC8)
  /* 12D624 801342E4 8C845CC8 */        lw $a0, %lo(D_ovl24_80135CC8)($a0)
  /* 12D628 801342E8 0C04CFE4 */       jal func_ovl24_80133F90
  /* 12D62C 801342EC 24050001 */     addiu $a1, $zero, 1
  /* 12D630 801342F0 3C0B8013 */       lui $t3, %hi(D_ovl24_80135CC8)
  /* 12D634 801342F4 256B5CC8 */     addiu $t3, $t3, %lo(D_ovl24_80135CC8)
  /* 12D638 801342F8 8D6D0000 */        lw $t5, ($t3) # D_ovl24_80135CC8 + 0
  /* 12D63C 801342FC 3C0E8013 */       lui $t6, %hi(D_ovl24_80135C38)
  /* 12D640 80134300 25CE5C38 */     addiu $t6, $t6, %lo(D_ovl24_80135C38)
  /* 12D644 80134304 AFAD0000 */        sw $t5, ($sp)
  /* 12D648 80134308 8D650004 */        lw $a1, 4($t3) # D_ovl24_80135CC8 + 4
  /* 12D64C 8013430C 8FA40000 */        lw $a0, ($sp)
  /* 12D650 80134310 24070001 */     addiu $a3, $zero, 1
  /* 12D654 80134314 AFA50004 */        sw $a1, 4($sp)
  /* 12D658 80134318 8D660008 */        lw $a2, 8($t3) # D_ovl24_80135CC8 + 8
  /* 12D65C 8013431C AFAE0010 */        sw $t6, 0x10($sp)
  /* 12D660 80134320 0C04CB26 */       jal func_ovl24_80132C98
  /* 12D664 80134324 AFA60008 */        sw $a2, 8($sp)
  /* 12D668 80134328 0C04CB8B */       jal func_ovl24_80132E2C
  /* 12D66C 8013432C 8FA40020 */        lw $a0, 0x20($sp)
  /* 12D670 80134330 10000013 */         b .L80134380
  /* 12D674 80134334 8FBF001C */        lw $ra, 0x1c($sp)
  .L80134338:
  /* 12D678 80134338 3C048013 */       lui $a0, %hi(D_ovl24_80135CC8)
  /* 12D67C 8013433C 0C04CFE4 */       jal func_ovl24_80133F90
  /* 12D680 80134340 8C845CC8 */        lw $a0, %lo(D_ovl24_80135CC8)($a0)
  /* 12D684 80134344 3C0F8013 */       lui $t7, %hi(D_ovl24_80135CC8)
  /* 12D688 80134348 25EF5CC8 */     addiu $t7, $t7, %lo(D_ovl24_80135CC8)
  /* 12D68C 8013434C 8DF90000 */        lw $t9, ($t7) # D_ovl24_80135CC8 + 0
  /* 12D690 80134350 3C088013 */       lui $t0, %hi(D_ovl24_80135C38)
  /* 12D694 80134354 25085C38 */     addiu $t0, $t0, %lo(D_ovl24_80135C38)
  /* 12D698 80134358 AFB90000 */        sw $t9, ($sp)
  /* 12D69C 8013435C 8DE50004 */        lw $a1, 4($t7) # D_ovl24_80135CC8 + 4
  /* 12D6A0 80134360 8FA40000 */        lw $a0, ($sp)
  /* 12D6A4 80134364 00003825 */        or $a3, $zero, $zero
  /* 12D6A8 80134368 AFA50004 */        sw $a1, 4($sp)
  /* 12D6AC 8013436C 8DE60008 */        lw $a2, 8($t7) # D_ovl24_80135CC8 + 8
  /* 12D6B0 80134370 AFA80010 */        sw $t0, 0x10($sp)
  /* 12D6B4 80134374 0C04CB26 */       jal func_ovl24_80132C98
  /* 12D6B8 80134378 AFA60008 */        sw $a2, 8($sp)
  /* 12D6BC 8013437C 8FBF001C */        lw $ra, 0x1c($sp)
  .L80134380:
  /* 12D6C0 80134380 27BD0020 */     addiu $sp, $sp, 0x20
  /* 12D6C4 80134384 03E00008 */        jr $ra
  /* 12D6C8 80134388 00000000 */       nop 

glabel func_ovl24_8013438C
  /* 12D6CC 8013438C 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 12D6D0 80134390 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 12D6D4 80134394 AFBF003C */        sw $ra, 0x3c($sp)
  /* 12D6D8 80134398 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 12D6DC 8013439C 240F001E */     addiu $t7, $zero, 0x1e
  /* 12D6E0 801343A0 24180000 */     addiu $t8, $zero, 0
  /* 12D6E4 801343A4 3C191000 */       lui $t9, 0x1000
  /* 12D6E8 801343A8 2408FFFF */     addiu $t0, $zero, -1
  /* 12D6EC 801343AC 24090001 */     addiu $t1, $zero, 1
  /* 12D6F0 801343B0 240A0001 */     addiu $t2, $zero, 1
  /* 12D6F4 801343B4 AFAA0030 */        sw $t2, 0x30($sp)
  /* 12D6F8 801343B8 AFA90028 */        sw $t1, 0x28($sp)
  /* 12D6FC 801343BC AFA80020 */        sw $t0, 0x20($sp)
  /* 12D700 801343C0 AFB9001C */        sw $t9, 0x1c($sp)
  /* 12D704 801343C4 AFB80018 */        sw $t8, 0x18($sp)
  /* 12D708 801343C8 AFAF0014 */        sw $t7, 0x14($sp)
  /* 12D70C 801343CC AFAE0010 */        sw $t6, 0x10($sp)
  /* 12D710 801343D0 AFA00024 */        sw $zero, 0x24($sp)
  /* 12D714 801343D4 AFA0002C */        sw $zero, 0x2c($sp)
  /* 12D718 801343D8 AFA00034 */        sw $zero, 0x34($sp)
  /* 12D71C 801343DC 24040401 */     addiu $a0, $zero, 0x401
  /* 12D720 801343E0 00002825 */        or $a1, $zero, $zero
  /* 12D724 801343E4 24060010 */     addiu $a2, $zero, 0x10
  /* 12D728 801343E8 0C002E4F */       jal func_8000B93C
  /* 12D72C 801343EC 3C078000 */       lui $a3, 0x8000
  /* 12D730 801343F0 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 12D734 801343F4 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 12D738 801343F8 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 12D73C 801343FC 8C430074 */        lw $v1, 0x74($v0)
  /* 12D740 80134400 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 12D744 80134404 44050000 */      mfc1 $a1, $f0
  /* 12D748 80134408 44060000 */      mfc1 $a2, $f0
  /* 12D74C 8013440C 3C07439B */       lui $a3, 0x439b
  /* 12D750 80134410 24640008 */     addiu $a0, $v1, 8
  /* 12D754 80134414 0C001C20 */       jal func_80007080
  /* 12D758 80134418 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 12D75C 8013441C 8FBF003C */        lw $ra, 0x3c($sp)
  /* 12D760 80134420 27BD0040 */     addiu $sp, $sp, 0x40
  /* 12D764 80134424 03E00008 */        jr $ra
  /* 12D768 80134428 00000000 */       nop 

glabel func_ovl24_8013442C
  /* 12D76C 8013442C 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 12D770 80134430 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 12D774 80134434 AFBF003C */        sw $ra, 0x3c($sp)
  /* 12D778 80134438 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 12D77C 8013443C 240F0014 */     addiu $t7, $zero, 0x14
  /* 12D780 80134440 24180000 */     addiu $t8, $zero, 0
  /* 12D784 80134444 3C190800 */       lui $t9, 0x800
  /* 12D788 80134448 2408FFFF */     addiu $t0, $zero, -1
  /* 12D78C 8013444C 24090001 */     addiu $t1, $zero, 1
  /* 12D790 80134450 240A0001 */     addiu $t2, $zero, 1
  /* 12D794 80134454 AFAA0030 */        sw $t2, 0x30($sp)
  /* 12D798 80134458 AFA90028 */        sw $t1, 0x28($sp)
  /* 12D79C 8013445C AFA80020 */        sw $t0, 0x20($sp)
  /* 12D7A0 80134460 AFB9001C */        sw $t9, 0x1c($sp)
  /* 12D7A4 80134464 AFB80018 */        sw $t8, 0x18($sp)
  /* 12D7A8 80134468 AFAF0014 */        sw $t7, 0x14($sp)
  /* 12D7AC 8013446C AFAE0010 */        sw $t6, 0x10($sp)
  /* 12D7B0 80134470 AFA00024 */        sw $zero, 0x24($sp)
  /* 12D7B4 80134474 AFA0002C */        sw $zero, 0x2c($sp)
  /* 12D7B8 80134478 AFA00034 */        sw $zero, 0x34($sp)
  /* 12D7BC 8013447C 24040401 */     addiu $a0, $zero, 0x401
  /* 12D7C0 80134480 00002825 */        or $a1, $zero, $zero
  /* 12D7C4 80134484 24060010 */     addiu $a2, $zero, 0x10
  /* 12D7C8 80134488 0C002E4F */       jal func_8000B93C
  /* 12D7CC 8013448C 3C078000 */       lui $a3, 0x8000
  /* 12D7D0 80134490 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 12D7D4 80134494 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 12D7D8 80134498 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 12D7DC 8013449C 8C430074 */        lw $v1, 0x74($v0)
  /* 12D7E0 801344A0 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 12D7E4 801344A4 44050000 */      mfc1 $a1, $f0
  /* 12D7E8 801344A8 44060000 */      mfc1 $a2, $f0
  /* 12D7EC 801344AC 3C07439B */       lui $a3, 0x439b
  /* 12D7F0 801344B0 24640008 */     addiu $a0, $v1, 8
  /* 12D7F4 801344B4 0C001C20 */       jal func_80007080
  /* 12D7F8 801344B8 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 12D7FC 801344BC 8FBF003C */        lw $ra, 0x3c($sp)
  /* 12D800 801344C0 27BD0040 */     addiu $sp, $sp, 0x40
  /* 12D804 801344C4 03E00008 */        jr $ra
  /* 12D808 801344C8 00000000 */       nop 

glabel func_ovl24_801344CC
  /* 12D80C 801344CC 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 12D810 801344D0 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 12D814 801344D4 AFBF003C */        sw $ra, 0x3c($sp)
  /* 12D818 801344D8 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 12D81C 801344DC 240F0050 */     addiu $t7, $zero, 0x50
  /* 12D820 801344E0 24180000 */     addiu $t8, $zero, 0
  /* 12D824 801344E4 3C190400 */       lui $t9, 0x400
  /* 12D828 801344E8 2408FFFF */     addiu $t0, $zero, -1
  /* 12D82C 801344EC 24090001 */     addiu $t1, $zero, 1
  /* 12D830 801344F0 240A0001 */     addiu $t2, $zero, 1
  /* 12D834 801344F4 AFAA0030 */        sw $t2, 0x30($sp)
  /* 12D838 801344F8 AFA90028 */        sw $t1, 0x28($sp)
  /* 12D83C 801344FC AFA80020 */        sw $t0, 0x20($sp)
  /* 12D840 80134500 AFB9001C */        sw $t9, 0x1c($sp)
  /* 12D844 80134504 AFB80018 */        sw $t8, 0x18($sp)
  /* 12D848 80134508 AFAF0014 */        sw $t7, 0x14($sp)
  /* 12D84C 8013450C AFAE0010 */        sw $t6, 0x10($sp)
  /* 12D850 80134510 AFA00024 */        sw $zero, 0x24($sp)
  /* 12D854 80134514 AFA0002C */        sw $zero, 0x2c($sp)
  /* 12D858 80134518 AFA00034 */        sw $zero, 0x34($sp)
  /* 12D85C 8013451C 24040401 */     addiu $a0, $zero, 0x401
  /* 12D860 80134520 00002825 */        or $a1, $zero, $zero
  /* 12D864 80134524 24060010 */     addiu $a2, $zero, 0x10
  /* 12D868 80134528 0C002E4F */       jal func_8000B93C
  /* 12D86C 8013452C 3C078000 */       lui $a3, 0x8000
  /* 12D870 80134530 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 12D874 80134534 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 12D878 80134538 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 12D87C 8013453C 8C430074 */        lw $v1, 0x74($v0)
  /* 12D880 80134540 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 12D884 80134544 44050000 */      mfc1 $a1, $f0
  /* 12D888 80134548 44060000 */      mfc1 $a2, $f0
  /* 12D88C 8013454C 3C07439B */       lui $a3, 0x439b
  /* 12D890 80134550 24640008 */     addiu $a0, $v1, 8
  /* 12D894 80134554 0C001C20 */       jal func_80007080
  /* 12D898 80134558 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 12D89C 8013455C 8FBF003C */        lw $ra, 0x3c($sp)
  /* 12D8A0 80134560 27BD0040 */     addiu $sp, $sp, 0x40
  /* 12D8A4 80134564 03E00008 */        jr $ra
  /* 12D8A8 80134568 00000000 */       nop 

glabel func_ovl24_8013456C
  /* 12D8AC 8013456C 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 12D8B0 80134570 3C0E8013 */       lui $t6, %hi(D_ovl24_80135A30)
  /* 12D8B4 80134574 27A30000 */     addiu $v1, $sp, 0
  /* 12D8B8 80134578 25CE5A30 */     addiu $t6, $t6, %lo(D_ovl24_80135A30)
  /* 12D8BC 8013457C 25C80030 */     addiu $t0, $t6, 0x30
  /* 12D8C0 80134580 0060C825 */        or $t9, $v1, $zero
  .L80134584:
  /* 12D8C4 80134584 8DD80000 */        lw $t8, ($t6) # D_ovl24_80135A30 + 0
  /* 12D8C8 80134588 25CE000C */     addiu $t6, $t6, 0xc
  /* 12D8CC 8013458C 2739000C */     addiu $t9, $t9, 0xc
  /* 12D8D0 80134590 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 12D8D4 80134594 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl24_80135A30 + -8
  /* 12D8D8 80134598 AF2FFFF8 */        sw $t7, -8($t9)
  /* 12D8DC 8013459C 8DD8FFFC */        lw $t8, -4($t6) # D_ovl24_80135A30 + -4
  /* 12D8E0 801345A0 15C8FFF8 */       bne $t6, $t0, .L80134584
  /* 12D8E4 801345A4 AF38FFFC */        sw $t8, -4($t9)
  /* 12D8E8 801345A8 8DD80000 */        lw $t8, ($t6) # D_ovl24_80135A30 + 0
  /* 12D8EC 801345AC 00044880 */       sll $t1, $a0, 2
  /* 12D8F0 801345B0 00695021 */      addu $t2, $v1, $t1
  /* 12D8F4 801345B4 AF380000 */        sw $t8, ($t9)
  /* 12D8F8 801345B8 8DCF0004 */        lw $t7, 4($t6) # D_ovl24_80135A30 + 4
  /* 12D8FC 801345BC AF2F0004 */        sw $t7, 4($t9)
  /* 12D900 801345C0 8D420000 */        lw $v0, ($t2)
  /* 12D904 801345C4 03E00008 */        jr $ra
  /* 12D908 801345C8 27BD0038 */     addiu $sp, $sp, 0x38

glabel func_ovl24_801345CC
  /* 12D90C 801345CC 27BDFF48 */     addiu $sp, $sp, -0xb8
  /* 12D910 801345D0 3C0F8013 */       lui $t7, %hi(D_ovl24_80135A68)
  /* 12D914 801345D4 25EF5A68 */     addiu $t7, $t7, %lo(D_ovl24_80135A68)
  /* 12D918 801345D8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 12D91C 801345DC 27A20020 */     addiu $v0, $sp, 0x20
  /* 12D920 801345E0 25E80030 */     addiu $t0, $t7, 0x30
  /* 12D924 801345E4 27AE0088 */     addiu $t6, $sp, 0x88
  .L801345E8:
  /* 12D928 801345E8 8DF90000 */        lw $t9, ($t7) # D_ovl24_80135A68 + 0
  /* 12D92C 801345EC 25EF000C */     addiu $t7, $t7, 0xc
  /* 12D930 801345F0 25CE000C */     addiu $t6, $t6, 0xc
  /* 12D934 801345F4 ADD9FFF4 */        sw $t9, -0xc($t6)
  /* 12D938 801345F8 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl24_80135A68 + -8
  /* 12D93C 801345FC ADD8FFF8 */        sw $t8, -8($t6)
  /* 12D940 80134600 8DF9FFFC */        lw $t9, -4($t7) # D_ovl24_80135A68 + -4
  /* 12D944 80134604 15E8FFF8 */       bne $t7, $t0, .L801345E8
  /* 12D948 80134608 ADD9FFFC */        sw $t9, -4($t6)
  /* 12D94C 8013460C 3C0A8013 */       lui $t2, %hi(D_ovl24_80135A98)
  /* 12D950 80134610 254A5A98 */     addiu $t2, $t2, %lo(D_ovl24_80135A98)
  /* 12D954 80134614 254D0030 */     addiu $t5, $t2, 0x30
  /* 12D958 80134618 27A90050 */     addiu $t1, $sp, 0x50
  .L8013461C:
  /* 12D95C 8013461C 8D4C0000 */        lw $t4, ($t2) # D_ovl24_80135A98 + 0
  /* 12D960 80134620 254A000C */     addiu $t2, $t2, 0xc
  /* 12D964 80134624 2529000C */     addiu $t1, $t1, 0xc
  /* 12D968 80134628 AD2CFFF4 */        sw $t4, -0xc($t1)
  /* 12D96C 8013462C 8D4BFFF8 */        lw $t3, -8($t2) # D_ovl24_80135A98 + -8
  /* 12D970 80134630 AD2BFFF8 */        sw $t3, -8($t1)
  /* 12D974 80134634 8D4CFFFC */        lw $t4, -4($t2) # D_ovl24_80135A98 + -4
  /* 12D978 80134638 154DFFF8 */       bne $t2, $t5, .L8013461C
  /* 12D97C 8013463C AD2CFFFC */        sw $t4, -4($t1)
  /* 12D980 80134640 8D4C0000 */        lw $t4, ($t2) # D_ovl24_80135A98 + 0
  /* 12D984 80134644 8D4B0004 */        lw $t3, 4($t2) # D_ovl24_80135A98 + 4
  /* 12D988 80134648 3C088013 */       lui $t0, %hi(D_ovl24_80135AD0)
  /* 12D98C 8013464C 25085AD0 */     addiu $t0, $t0, %lo(D_ovl24_80135AD0)
  /* 12D990 80134650 25190030 */     addiu $t9, $t0, 0x30
  /* 12D994 80134654 0040C025 */        or $t8, $v0, $zero
  /* 12D998 80134658 AD2C0000 */        sw $t4, ($t1)
  /* 12D99C 8013465C AD2B0004 */        sw $t3, 4($t1)
  .L80134660:
  /* 12D9A0 80134660 8D0E0000 */        lw $t6, ($t0) # D_ovl24_80135AD0 + 0
  /* 12D9A4 80134664 2508000C */     addiu $t0, $t0, 0xc
  /* 12D9A8 80134668 2718000C */     addiu $t8, $t8, 0xc
  /* 12D9AC 8013466C AF0EFFF4 */        sw $t6, -0xc($t8)
  /* 12D9B0 80134670 8D0FFFF8 */        lw $t7, -8($t0) # D_ovl24_80135AD0 + -8
  /* 12D9B4 80134674 AF0FFFF8 */        sw $t7, -8($t8)
  /* 12D9B8 80134678 8D0EFFFC */        lw $t6, -4($t0) # D_ovl24_80135AD0 + -4
  /* 12D9BC 8013467C 1519FFF8 */       bne $t0, $t9, .L80134660
  /* 12D9C0 80134680 AF0EFFFC */        sw $t6, -4($t8)
  /* 12D9C4 80134684 3C0D8013 */       lui $t5, %hi(D_ovl24_80135CC8)
  /* 12D9C8 80134688 8DAD5CC8 */        lw $t5, %lo(D_ovl24_80135CC8)($t5)
  /* 12D9CC 8013468C 3C048013 */       lui $a0, %hi(D_ovl24_80135C28)
  /* 12D9D0 80134690 8C845C28 */        lw $a0, %lo(D_ovl24_80135C28)($a0)
  /* 12D9D4 80134694 000D5080 */       sll $t2, $t5, 2
  /* 12D9D8 80134698 004A4821 */      addu $t1, $v0, $t2
  /* 12D9DC 8013469C 8D2B0000 */        lw $t3, ($t1)
  /* 12D9E0 801346A0 256C0001 */     addiu $t4, $t3, 1
  /* 12D9E4 801346A4 0C04C7DB */       jal func_ovl24_80131F6C
  /* 12D9E8 801346A8 AFAC001C */        sw $t4, 0x1c($sp)
  /* 12D9EC 801346AC 1040003A */      beqz $v0, .L80134798
  /* 12D9F0 801346B0 3C198013 */       lui $t9, %hi(D_ovl24_80135C28)
  /* 12D9F4 801346B4 8F395C28 */        lw $t9, %lo(D_ovl24_80135C28)($t9)
  /* 12D9F8 801346B8 2401000D */     addiu $at, $zero, 0xd
  /* 12D9FC 801346BC 13210036 */       beq $t9, $at, .L80134798
  /* 12DA00 801346C0 00000000 */       nop 
  /* 12DA04 801346C4 0C00024B */       jal func_8000092C
  /* 12DA08 801346C8 00000000 */       nop 
  /* 12DA0C 801346CC 2C410002 */     sltiu $at, $v0, 2
  /* 12DA10 801346D0 1420000D */      bnez $at, .L80134708
  /* 12DA14 801346D4 3C088013 */       lui $t0, %hi(D_ovl24_80135CB8)
  /* 12DA18 801346D8 8D085CB8 */        lw $t0, %lo(D_ovl24_80135CB8)($t0)
  /* 12DA1C 801346DC 3C188013 */       lui $t8, %hi(D_ovl24_80135CC8)
  /* 12DA20 801346E0 15000009 */      bnez $t0, .L80134708
  /* 12DA24 801346E4 00000000 */       nop 
  /* 12DA28 801346E8 8F185CC8 */        lw $t8, %lo(D_ovl24_80135CC8)($t8)
  /* 12DA2C 801346EC 00187880 */       sll $t7, $t8, 2
  /* 12DA30 801346F0 03AF2021 */      addu $a0, $sp, $t7
  /* 12DA34 801346F4 0C009A70 */       jal func_800269C0
  /* 12DA38 801346F8 9484008A */       lhu $a0, 0x8a($a0)
  /* 12DA3C 801346FC 240E0001 */     addiu $t6, $zero, 1
  /* 12DA40 80134700 3C018013 */       lui $at, %hi(D_ovl24_80135CB8)
  /* 12DA44 80134704 AC2E5CB8 */        sw $t6, %lo(D_ovl24_80135CB8)($at)
  .L80134708:
  /* 12DA48 80134708 0C00024B */       jal func_8000092C
  /* 12DA4C 8013470C 00000000 */       nop 
  /* 12DA50 80134710 8FAD001C */        lw $t5, 0x1c($sp)
  /* 12DA54 80134714 3C0A8013 */       lui $t2, %hi(D_ovl24_80135CBC)
  /* 12DA58 80134718 01A2082B */      sltu $at, $t5, $v0
  /* 12DA5C 8013471C 10200009 */      beqz $at, .L80134744
  /* 12DA60 80134720 00000000 */       nop 
  /* 12DA64 80134724 8D4A5CBC */        lw $t2, %lo(D_ovl24_80135CBC)($t2)
  /* 12DA68 80134728 15400006 */      bnez $t2, .L80134744
  /* 12DA6C 8013472C 00000000 */       nop 
  /* 12DA70 80134730 0C009A70 */       jal func_800269C0
  /* 12DA74 80134734 24040214 */     addiu $a0, $zero, 0x214
  /* 12DA78 80134738 24090001 */     addiu $t1, $zero, 1
  /* 12DA7C 8013473C 3C018013 */       lui $at, %hi(D_ovl24_80135CBC)
  /* 12DA80 80134740 AC295CBC */        sw $t1, %lo(D_ovl24_80135CBC)($at)
  .L80134744:
  /* 12DA84 80134744 0C00024B */       jal func_8000092C
  /* 12DA88 80134748 00000000 */       nop 
  /* 12DA8C 8013474C 8FAB001C */        lw $t3, 0x1c($sp)
  /* 12DA90 80134750 3C198013 */       lui $t9, %hi(D_ovl24_80135CC0)
  /* 12DA94 80134754 256C003C */     addiu $t4, $t3, 0x3c
  /* 12DA98 80134758 0182082B */      sltu $at, $t4, $v0
  /* 12DA9C 8013475C 50200029 */      beql $at, $zero, .L80134804
  /* 12DAA0 80134760 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12DAA4 80134764 8F395CC0 */        lw $t9, %lo(D_ovl24_80135CC0)($t9)
  /* 12DAA8 80134768 3C088013 */       lui $t0, %hi(D_ovl24_80135C28)
  /* 12DAAC 8013476C 57200025 */      bnel $t9, $zero, .L80134804
  /* 12DAB0 80134770 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12DAB4 80134774 8D085C28 */        lw $t0, %lo(D_ovl24_80135C28)($t0)
  /* 12DAB8 80134778 0008C080 */       sll $t8, $t0, 2
  /* 12DABC 8013477C 03B82021 */      addu $a0, $sp, $t8
  /* 12DAC0 80134780 0C009A70 */       jal func_800269C0
  /* 12DAC4 80134784 94840052 */       lhu $a0, 0x52($a0)
  /* 12DAC8 80134788 240F0001 */     addiu $t7, $zero, 1
  /* 12DACC 8013478C 3C018013 */       lui $at, %hi(D_ovl24_80135CC0)
  /* 12DAD0 80134790 1000001B */         b .L80134800
  /* 12DAD4 80134794 AC2F5CC0 */        sw $t7, %lo(D_ovl24_80135CC0)($at)
  .L80134798:
  /* 12DAD8 80134798 3C0E8013 */       lui $t6, %hi(D_ovl24_80135CF8)
  /* 12DADC 8013479C 8DCE5CF8 */        lw $t6, %lo(D_ovl24_80135CF8)($t6)
  /* 12DAE0 801347A0 24010001 */     addiu $at, $zero, 1
  /* 12DAE4 801347A4 3C028013 */       lui $v0, %hi(D_ovl24_80135C28)
  /* 12DAE8 801347A8 55C10016 */      bnel $t6, $at, .L80134804
  /* 12DAEC 801347AC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12DAF0 801347B0 8C425C28 */        lw $v0, %lo(D_ovl24_80135C28)($v0)
  /* 12DAF4 801347B4 24010003 */     addiu $at, $zero, 3
  /* 12DAF8 801347B8 10410007 */       beq $v0, $at, .L801347D8
  /* 12DAFC 801347BC 24010007 */     addiu $at, $zero, 7
  /* 12DB00 801347C0 10410009 */       beq $v0, $at, .L801347E8
  /* 12DB04 801347C4 2401000B */     addiu $at, $zero, 0xb
  /* 12DB08 801347C8 1041000B */       beq $v0, $at, .L801347F8
  /* 12DB0C 801347CC 00000000 */       nop 
  /* 12DB10 801347D0 1000000C */         b .L80134804
  /* 12DB14 801347D4 8FBF0014 */        lw $ra, 0x14($sp)
  .L801347D8:
  /* 12DB18 801347D8 0C009A70 */       jal func_800269C0
  /* 12DB1C 801347DC 240401DE */     addiu $a0, $zero, 0x1de
  /* 12DB20 801347E0 10000008 */         b .L80134804
  /* 12DB24 801347E4 8FBF0014 */        lw $ra, 0x14($sp)
  .L801347E8:
  /* 12DB28 801347E8 0C009A70 */       jal func_800269C0
  /* 12DB2C 801347EC 240401DC */     addiu $a0, $zero, 0x1dc
  /* 12DB30 801347F0 10000004 */         b .L80134804
  /* 12DB34 801347F4 8FBF0014 */        lw $ra, 0x14($sp)
  .L801347F8:
  /* 12DB38 801347F8 0C009A70 */       jal func_800269C0
  /* 12DB3C 801347FC 240401EF */     addiu $a0, $zero, 0x1ef
  .L80134800:
  /* 12DB40 80134800 8FBF0014 */        lw $ra, 0x14($sp)
  .L80134804:
  /* 12DB44 80134804 27BD00B8 */     addiu $sp, $sp, 0xb8
  /* 12DB48 80134808 03E00008 */        jr $ra
  /* 12DB4C 8013480C 00000000 */       nop 

glabel func_ovl24_80134810
  /* 12DB50 80134810 3C05800A */       lui $a1, %hi(gSceneData)
  /* 12DB54 80134814 24A54AD0 */     addiu $a1, $a1, %lo(gSceneData)
  /* 12DB58 80134818 90AE0017 */       lbu $t6, 0x17($a1) # gSceneData + 23
  /* 12DB5C 8013481C 3C018013 */       lui $at, %hi(D_ovl24_80135C28)
  /* 12DB60 80134820 24080074 */     addiu $t0, $zero, 0x74
  /* 12DB64 80134824 AC2E5C28 */        sw $t6, %lo(D_ovl24_80135C28)($at)
  /* 12DB68 80134828 90AF0013 */       lbu $t7, 0x13($a1) # gSceneData + 19
  /* 12DB6C 8013482C 90AD0018 */       lbu $t5, 0x18($a1) # gSceneData + 24
  /* 12DB70 80134830 3C07800A */       lui $a3, %hi(D_800A4B18)
  /* 12DB74 80134834 01E80019 */     multu $t7, $t0
  /* 12DB78 80134838 24E74B18 */     addiu $a3, $a3, %lo(D_800A4B18)
  /* 12DB7C 8013483C 3C068013 */       lui $a2, %hi(D_ovl24_80135CC8)
  /* 12DB80 80134840 24C65CC8 */     addiu $a2, $a2, %lo(D_ovl24_80135CC8)
  /* 12DB84 80134844 3C098013 */       lui $t1, %hi(D_ovl24_80135CD8)
  /* 12DB88 80134848 25295CD8 */     addiu $t1, $t1, %lo(D_ovl24_80135CD8)
  /* 12DB8C 8013484C 3C0A8013 */       lui $t2, %hi(D_ovl24_80135CE8)
  /* 12DB90 80134850 254A5CE8 */     addiu $t2, $t2, %lo(D_ovl24_80135CE8)
  /* 12DB94 80134854 3C018013 */       lui $at, %hi(D_ovl24_80135CB8)
  /* 12DB98 80134858 0000C012 */      mflo $t8
  /* 12DB9C 8013485C 00F81021 */      addu $v0, $a3, $t8
  /* 12DBA0 80134860 904B0026 */       lbu $t3, 0x26($v0)
  /* 12DBA4 80134864 01A80019 */     multu $t5, $t0
  /* 12DBA8 80134868 904C0027 */       lbu $t4, 0x27($v0)
  /* 12DBAC 8013486C ACCB0004 */        sw $t3, 4($a2) # D_ovl24_80135CC8 + 4
  /* 12DBB0 80134870 90AB0019 */       lbu $t3, 0x19($a1) # gSceneData + 25
  /* 12DBB4 80134874 ACCC0008 */        sw $t4, 8($a2) # D_ovl24_80135CC8 + 8
  /* 12DBB8 80134878 90590023 */       lbu $t9, 0x23($v0)
  /* 12DBBC 8013487C ACD90000 */        sw $t9, ($a2) # D_ovl24_80135CC8 + 0
  /* 12DBC0 80134880 00007012 */      mflo $t6
  /* 12DBC4 80134884 00EE1821 */      addu $v1, $a3, $t6
  /* 12DBC8 80134888 906F0023 */       lbu $t7, 0x23($v1)
  /* 12DBCC 8013488C 01680019 */     multu $t3, $t0
  /* 12DBD0 80134890 90780026 */       lbu $t8, 0x26($v1)
  /* 12DBD4 80134894 AD2F0000 */        sw $t7, ($t1) # D_ovl24_80135CD8 + 0
  /* 12DBD8 80134898 90790027 */       lbu $t9, 0x27($v1)
  /* 12DBDC 8013489C AD380004 */        sw $t8, 4($t1) # D_ovl24_80135CD8 + 4
  /* 12DBE0 801348A0 AD390008 */        sw $t9, 8($t1) # D_ovl24_80135CD8 + 8
  /* 12DBE4 801348A4 00006012 */      mflo $t4
  /* 12DBE8 801348A8 00EC2021 */      addu $a0, $a3, $t4
  /* 12DBEC 801348AC 908D0023 */       lbu $t5, 0x23($a0)
  /* 12DBF0 801348B0 908E0026 */       lbu $t6, 0x26($a0)
  /* 12DBF4 801348B4 908F0027 */       lbu $t7, 0x27($a0)
  /* 12DBF8 801348B8 AD4D0000 */        sw $t5, ($t2) # D_ovl24_80135CE8 + 0
  /* 12DBFC 801348BC AD4E0004 */        sw $t6, 4($t2) # D_ovl24_80135CE8 + 4
  /* 12DC00 801348C0 AD4F0008 */        sw $t7, 8($t2) # D_ovl24_80135CE8 + 8
  /* 12DC04 801348C4 AC205CB8 */        sw $zero, %lo(D_ovl24_80135CB8)($at)
  /* 12DC08 801348C8 3C018013 */       lui $at, %hi(D_ovl24_80135CBC)
  /* 12DC0C 801348CC AC205CBC */        sw $zero, %lo(D_ovl24_80135CBC)($at)
  /* 12DC10 801348D0 3C018013 */       lui $at, %hi(D_ovl24_80135CC0)
  /* 12DC14 801348D4 AC205CC0 */        sw $zero, %lo(D_ovl24_80135CC0)($at)
  /* 12DC18 801348D8 3C018013 */       lui $at, %hi(D_ovl24_80135CF4)
  /* 12DC1C 801348DC AC205CF4 */        sw $zero, %lo(D_ovl24_80135CF4)($at)
  /* 12DC20 801348E0 3C018013 */       lui $at, %hi(D_ovl24_80135CF8)
  /* 12DC24 801348E4 03E00008 */        jr $ra
  /* 12DC28 801348E8 AC205CF8 */        sw $zero, %lo(D_ovl24_80135CF8)($at)

glabel func_ovl24_801348EC
  /* 12DC2C 801348EC 03E00008 */        jr $ra
  /* 12DC30 801348F0 00000000 */       nop 

glabel func_ovl24_801348F4
  /* 12DC34 801348F4 3C028013 */       lui $v0, %hi(D_ovl24_80135CF8)
  /* 12DC38 801348F8 24425CF8 */     addiu $v0, $v0, %lo(D_ovl24_80135CF8)
  /* 12DC3C 801348FC 8C4E0000 */        lw $t6, ($v0) # D_ovl24_80135CF8 + 0
  /* 12DC40 80134900 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 12DC44 80134904 AFBF0014 */        sw $ra, 0x14($sp)
  /* 12DC48 80134908 25CF0001 */     addiu $t7, $t6, 1
  /* 12DC4C 8013490C AFA40018 */        sw $a0, 0x18($sp)
  /* 12DC50 80134910 0C04D173 */       jal func_ovl24_801345CC
  /* 12DC54 80134914 AC4F0000 */        sw $t7, ($v0) # D_ovl24_80135CF8 + 0
  /* 12DC58 80134918 0C00024B */       jal func_8000092C
  /* 12DC5C 8013491C 00000000 */       nop 
  /* 12DC60 80134920 2C41003C */     sltiu $at, $v0, 0x3c
  /* 12DC64 80134924 54200031 */      bnel $at, $zero, .L801349EC
  /* 12DC68 80134928 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12DC6C 8013492C 0C0E41DB */       jal func_ovl1_8039076C
  /* 12DC70 80134930 3404D000 */       ori $a0, $zero, 0xd000
  /* 12DC74 80134934 1040000C */      beqz $v0, .L80134968
  /* 12DC78 80134938 00000000 */       nop 
  /* 12DC7C 8013493C 0C0099A8 */       jal func_800266A0
  /* 12DC80 80134940 00000000 */       nop 
  /* 12DC84 80134944 3C02800A */       lui $v0, %hi(gSceneData)
  /* 12DC88 80134948 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 12DC8C 8013494C 90580000 */       lbu $t8, ($v0) # gSceneData + 0
  /* 12DC90 80134950 24190001 */     addiu $t9, $zero, 1
  /* 12DC94 80134954 A0590000 */        sb $t9, ($v0) # gSceneData + 0
  /* 12DC98 80134958 0C04D23B */       jal func_ovl24_801348EC
  /* 12DC9C 8013495C A0580001 */        sb $t8, 1($v0) # gSceneData + 1
  /* 12DCA0 80134960 0C00171D */       jal func_80005C74
  /* 12DCA4 80134964 00000000 */       nop 
  .L80134968:
  /* 12DCA8 80134968 3C038013 */       lui $v1, %hi(D_ovl24_80135CF4)
  /* 12DCAC 8013496C 24635CF4 */     addiu $v1, $v1, %lo(D_ovl24_80135CF4)
  /* 12DCB0 80134970 8C620000 */        lw $v0, ($v1) # D_ovl24_80135CF4 + 0
  /* 12DCB4 80134974 2404FFE2 */     addiu $a0, $zero, -0x1e
  /* 12DCB8 80134978 10400002 */      beqz $v0, .L80134984
  /* 12DCBC 8013497C 2448FFFF */     addiu $t0, $v0, -1
  /* 12DCC0 80134980 AC680000 */        sw $t0, ($v1) # D_ovl24_80135CF4 + 0
  .L80134984:
  /* 12DCC4 80134984 0C0E4281 */       jal func_ovl1_80390A04
  /* 12DCC8 80134988 2405001E */     addiu $a1, $zero, 0x1e
  /* 12DCCC 8013498C 10400006 */      beqz $v0, .L801349A8
  /* 12DCD0 80134990 2404FFE2 */     addiu $a0, $zero, -0x1e
  /* 12DCD4 80134994 0C0E42B0 */       jal func_ovl1_80390AC0
  /* 12DCD8 80134998 2405001E */     addiu $a1, $zero, 0x1e
  /* 12DCDC 8013499C 10400002 */      beqz $v0, .L801349A8
  /* 12DCE0 801349A0 3C018013 */       lui $at, %hi(D_ovl24_80135CF4)
  /* 12DCE4 801349A4 AC205CF4 */        sw $zero, %lo(D_ovl24_80135CF4)($at)
  .L801349A8:
  /* 12DCE8 801349A8 0C00024B */       jal func_8000092C
  /* 12DCEC 801349AC 00000000 */       nop 
  /* 12DCF0 801349B0 2C410169 */     sltiu $at, $v0, 0x169
  /* 12DCF4 801349B4 5420000D */      bnel $at, $zero, .L801349EC
  /* 12DCF8 801349B8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12DCFC 801349BC 0C0099A8 */       jal func_800266A0
  /* 12DD00 801349C0 00000000 */       nop 
  /* 12DD04 801349C4 3C02800A */       lui $v0, %hi(gSceneData)
  /* 12DD08 801349C8 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 12DD0C 801349CC 90490000 */       lbu $t1, ($v0) # gSceneData + 0
  /* 12DD10 801349D0 240A0001 */     addiu $t2, $zero, 1
  /* 12DD14 801349D4 A04A0000 */        sb $t2, ($v0) # gSceneData + 0
  /* 12DD18 801349D8 0C04D23B */       jal func_ovl24_801348EC
  /* 12DD1C 801349DC A0490001 */        sb $t1, 1($v0) # gSceneData + 1
  /* 12DD20 801349E0 0C00171D */       jal func_80005C74
  /* 12DD24 801349E4 00000000 */       nop 
  /* 12DD28 801349E8 8FBF0014 */        lw $ra, 0x14($sp)
  .L801349EC:
  /* 12DD2C 801349EC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 12DD30 801349F0 03E00008 */        jr $ra
  /* 12DD34 801349F4 00000000 */       nop 

glabel func_ovl24_801349F8
  /* 12DD38 801349F8 27BDFF98 */     addiu $sp, $sp, -0x68
  /* 12DD3C 801349FC AFB10018 */        sw $s1, 0x18($sp)
  /* 12DD40 80134A00 3C0E8013 */       lui $t6, %hi(D_ovl24_80135B00)
  /* 12DD44 80134A04 27B10030 */     addiu $s1, $sp, 0x30
  /* 12DD48 80134A08 AFB00014 */        sw $s0, 0x14($sp)
  /* 12DD4C 80134A0C 25CE5B00 */     addiu $t6, $t6, %lo(D_ovl24_80135B00)
  /* 12DD50 80134A10 00808025 */        or $s0, $a0, $zero
  /* 12DD54 80134A14 AFBF0024 */        sw $ra, 0x24($sp)
  /* 12DD58 80134A18 AFB30020 */        sw $s3, 0x20($sp)
  /* 12DD5C 80134A1C AFB2001C */        sw $s2, 0x1c($sp)
  /* 12DD60 80134A20 25C80030 */     addiu $t0, $t6, 0x30
  /* 12DD64 80134A24 0220C825 */        or $t9, $s1, $zero
  .L80134A28:
  /* 12DD68 80134A28 8DD80000 */        lw $t8, ($t6) # D_ovl24_80135B00 + 0
  /* 12DD6C 80134A2C 25CE000C */     addiu $t6, $t6, 0xc
  /* 12DD70 80134A30 2739000C */     addiu $t9, $t9, 0xc
  /* 12DD74 80134A34 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 12DD78 80134A38 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl24_80135B00 + -8
  /* 12DD7C 80134A3C AF2FFFF8 */        sw $t7, -8($t9)
  /* 12DD80 80134A40 8DD8FFFC */        lw $t8, -4($t6) # D_ovl24_80135B00 + -4
  /* 12DD84 80134A44 15C8FFF8 */       bne $t6, $t0, .L80134A28
  /* 12DD88 80134A48 AF38FFFC */        sw $t8, -4($t9)
  /* 12DD8C 80134A4C 8DD80000 */        lw $t8, ($t6) # D_ovl24_80135B00 + 0
  /* 12DD90 80134A50 3C048013 */       lui $a0, %hi(D_ovl24_80135CC8)
  /* 12DD94 80134A54 AF380000 */        sw $t8, ($t9)
  /* 12DD98 80134A58 8DCF0004 */        lw $t7, 4($t6) # D_ovl24_80135B00 + 4
  /* 12DD9C 80134A5C AF2F0004 */        sw $t7, 4($t9)
  /* 12DDA0 80134A60 0C035E1B */       jal func_ovl2_800D786C
  /* 12DDA4 80134A64 8C845CC8 */        lw $a0, %lo(D_ovl24_80135CC8)($a0)
  /* 12DDA8 80134A68 24010004 */     addiu $at, $zero, 4
  /* 12DDAC 80134A6C 12010012 */       beq $s0, $at, .L80134AB8
  /* 12DDB0 80134A70 3C048013 */       lui $a0, 0x8013
  /* 12DDB4 80134A74 24010006 */     addiu $at, $zero, 6
  /* 12DDB8 80134A78 12010005 */       beq $s0, $at, .L80134A90
  /* 12DDBC 80134A7C 2401000C */     addiu $at, $zero, 0xc
  /* 12DDC0 80134A80 12010015 */       beq $s0, $at, .L80134AD8
  /* 12DDC4 80134A84 2413001A */     addiu $s3, $zero, 0x1a
  /* 12DDC8 80134A88 10000021 */         b .L80134B10
  /* 12DDCC 80134A8C 00104880 */       sll $t1, $s0, 2
  .L80134A90:
  /* 12DDD0 80134A90 3C048013 */       lui $a0, %hi(D_ovl24_80135CD8)
  /* 12DDD4 80134A94 0C035E1B */       jal func_ovl2_800D786C
  /* 12DDD8 80134A98 8C845CD8 */        lw $a0, %lo(D_ovl24_80135CD8)($a0)
  /* 12DDDC 80134A9C 3C048013 */       lui $a0, %hi(D_ovl24_80135CE8)
  /* 12DDE0 80134AA0 0C035E1B */       jal func_ovl2_800D786C
  /* 12DDE4 80134AA4 8C845CE8 */        lw $a0, %lo(D_ovl24_80135CE8)($a0)
  /* 12DDE8 80134AA8 0C035E1B */       jal func_ovl2_800D786C
  /* 12DDEC 80134AAC 24040002 */     addiu $a0, $zero, 2
  /* 12DDF0 80134AB0 1000001B */         b .L80134B20
  /* 12DDF4 80134AB4 8FBF0024 */        lw $ra, 0x24($sp)
  .L80134AB8:
  /* 12DDF8 80134AB8 0C035E1B */       jal func_ovl2_800D786C
  /* 12DDFC 80134ABC 8C845CD8 */        lw $a0, 0x5cd8($a0)
  /* 12DE00 80134AC0 0C035E1B */       jal func_ovl2_800D786C
  /* 12DE04 80134AC4 00002025 */        or $a0, $zero, $zero
  /* 12DE08 80134AC8 0C035E1B */       jal func_ovl2_800D786C
  /* 12DE0C 80134ACC 24040004 */     addiu $a0, $zero, 4
  /* 12DE10 80134AD0 10000013 */         b .L80134B20
  /* 12DE14 80134AD4 8FBF0024 */        lw $ra, 0x24($sp)
  .L80134AD8:
  /* 12DE18 80134AD8 2410000E */     addiu $s0, $zero, 0xe
  /* 12DE1C 80134ADC 24120018 */     addiu $s2, $zero, 0x18
  /* 12DE20 80134AE0 24110012 */     addiu $s1, $zero, 0x12
  .L80134AE4:
  /* 12DE24 80134AE4 52110006 */      beql $s0, $s1, .L80134B00
  /* 12DE28 80134AE8 26100001 */     addiu $s0, $s0, 1
  /* 12DE2C 80134AEC 52120004 */      beql $s0, $s2, .L80134B00
  /* 12DE30 80134AF0 26100001 */     addiu $s0, $s0, 1
  /* 12DE34 80134AF4 0C035E1B */       jal func_ovl2_800D786C
  /* 12DE38 80134AF8 02002025 */        or $a0, $s0, $zero
  /* 12DE3C 80134AFC 26100001 */     addiu $s0, $s0, 1
  .L80134B00:
  /* 12DE40 80134B00 1613FFF8 */       bne $s0, $s3, .L80134AE4
  /* 12DE44 80134B04 00000000 */       nop 
  /* 12DE48 80134B08 10000005 */         b .L80134B20
  /* 12DE4C 80134B0C 8FBF0024 */        lw $ra, 0x24($sp)
  .L80134B10:
  /* 12DE50 80134B10 02295021 */      addu $t2, $s1, $t1
  /* 12DE54 80134B14 0C035E1B */       jal func_ovl2_800D786C
  /* 12DE58 80134B18 8D440000 */        lw $a0, ($t2)
  /* 12DE5C 80134B1C 8FBF0024 */        lw $ra, 0x24($sp)
  .L80134B20:
  /* 12DE60 80134B20 8FB00014 */        lw $s0, 0x14($sp)
  /* 12DE64 80134B24 8FB10018 */        lw $s1, 0x18($sp)
  /* 12DE68 80134B28 8FB2001C */        lw $s2, 0x1c($sp)
  /* 12DE6C 80134B2C 8FB30020 */        lw $s3, 0x20($sp)
  /* 12DE70 80134B30 03E00008 */        jr $ra
  /* 12DE74 80134B34 27BD0068 */     addiu $sp, $sp, 0x68

  glabel jtgt_ovl24_80134B38
  /* 12DE78 80134B38 27BDFFA0 */     addiu $sp, $sp, -0x60
  /* 12DE7C 80134B3C 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 12DE80 80134B40 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 12DE84 80134B44 3C188013 */       lui $t8, %hi(D_ovl24_80135D38)
  /* 12DE88 80134B48 3C088013 */       lui $t0, %hi(D_ovl24_80135D00)
  /* 12DE8C 80134B4C AFBF002C */        sw $ra, 0x2c($sp)
  /* 12DE90 80134B50 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 12DE94 80134B54 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 12DE98 80134B58 27185D38 */     addiu $t8, $t8, %lo(D_ovl24_80135D38)
  /* 12DE9C 80134B5C 24190064 */     addiu $t9, $zero, 0x64
  /* 12DEA0 80134B60 25085D00 */     addiu $t0, $t0, %lo(D_ovl24_80135D00)
  /* 12DEA4 80134B64 24090007 */     addiu $t1, $zero, 7
  /* 12DEA8 80134B68 AFB20028 */        sw $s2, 0x28($sp)
  /* 12DEAC 80134B6C AFB10024 */        sw $s1, 0x24($sp)
  /* 12DEB0 80134B70 AFB00020 */        sw $s0, 0x20($sp)
  /* 12DEB4 80134B74 AFAE0040 */        sw $t6, 0x40($sp)
  /* 12DEB8 80134B78 AFAF0044 */        sw $t7, 0x44($sp)
  /* 12DEBC 80134B7C AFA00048 */        sw $zero, 0x48($sp)
  /* 12DEC0 80134B80 AFA0004C */        sw $zero, 0x4c($sp)
  /* 12DEC4 80134B84 AFB80050 */        sw $t8, 0x50($sp)
  /* 12DEC8 80134B88 AFB90054 */        sw $t9, 0x54($sp)
  /* 12DECC 80134B8C AFA80058 */        sw $t0, 0x58($sp)
  /* 12DED0 80134B90 AFA9005C */        sw $t1, 0x5c($sp)
  /* 12DED4 80134B94 0C0337DE */       jal rldm_initialize
  /* 12DED8 80134B98 27A40040 */     addiu $a0, $sp, 0x40
  /* 12DEDC 80134B9C 3C108013 */       lui $s0, %hi(D_ovl24_80134DF0)
  /* 12DEE0 80134BA0 26104DF0 */     addiu $s0, $s0, %lo(D_ovl24_80134DF0)
  /* 12DEE4 80134BA4 02002025 */        or $a0, $s0, $zero
  /* 12DEE8 80134BA8 0C0337BB */       jal rldm_bytes_need_to_load
  /* 12DEEC 80134BAC 24050004 */     addiu $a1, $zero, 4
  /* 12DEF0 80134BB0 00402025 */        or $a0, $v0, $zero
  /* 12DEF4 80134BB4 0C001260 */       jal hal_alloc
  /* 12DEF8 80134BB8 24050010 */     addiu $a1, $zero, 0x10
  /* 12DEFC 80134BBC 3C068013 */       lui $a2, %hi(D_ovl24_80136058)
  /* 12DF00 80134BC0 24C66058 */     addiu $a2, $a2, %lo(D_ovl24_80136058)
  /* 12DF04 80134BC4 02002025 */        or $a0, $s0, $zero
  /* 12DF08 80134BC8 24050004 */     addiu $a1, $zero, 4
  /* 12DF0C 80134BCC 0C033781 */       jal rldm_load_files_into
  /* 12DF10 80134BD0 00403825 */        or $a3, $v0, $zero
  /* 12DF14 80134BD4 3C108000 */       lui $s0, %hi(D_NF_80000004)
  /* 12DF18 80134BD8 3C058013 */       lui $a1, %hi(func_ovl24_801348F4)
  /* 12DF1C 80134BDC 24A548F4 */     addiu $a1, $a1, %lo(func_ovl24_801348F4)
  /* 12DF20 80134BE0 02003825 */        or $a3, $s0, $zero
  /* 12DF24 80134BE4 00002025 */        or $a0, $zero, $zero
  /* 12DF28 80134BE8 0C00265A */       jal omMakeGObjCommon
  /* 12DF2C 80134BEC 00003025 */        or $a2, $zero, $zero
  /* 12DF30 80134BF0 240A00FF */     addiu $t2, $zero, 0xff
  /* 12DF34 80134BF4 AFAA0010 */        sw $t2, 0x10($sp)
  /* 12DF38 80134BF8 00002025 */        or $a0, $zero, $zero
  /* 12DF3C 80134BFC 02002825 */        or $a1, $s0, $zero
  /* 12DF40 80134C00 24060064 */     addiu $a2, $zero, 0x64
  /* 12DF44 80134C04 0C002E7F */       jal func_8000B9FC
  /* 12DF48 80134C08 24070003 */     addiu $a3, $zero, 3
  /* 12DF4C 80134C0C 0C04D204 */       jal func_ovl24_80134810
  /* 12DF50 80134C10 00000000 */       nop 
  /* 12DF54 80134C14 0C045624 */       jal func_ovl2_80115890
  /* 12DF58 80134C18 00000000 */       nop 
  /* 12DF5C 80134C1C 0C03F4C0 */       jal efManager_AllocUserData
  /* 12DF60 80134C20 00000000 */       nop 
  /* 12DF64 80134C24 3C128013 */       lui $s2, %hi(D_ovl24_80135C28)
  /* 12DF68 80134C28 26525C28 */     addiu $s2, $s2, %lo(D_ovl24_80135C28)
  /* 12DF6C 80134C2C 0C04D15B */       jal func_ovl24_8013456C
  /* 12DF70 80134C30 8E440000 */        lw $a0, ($s2) # D_ovl24_80135C28 + 0
  /* 12DF74 80134C34 24040001 */     addiu $a0, $zero, 1
  /* 12DF78 80134C38 0C035C65 */       jal func_ovl2_800D7194
  /* 12DF7C 80134C3C 00402825 */        or $a1, $v0, $zero
  /* 12DF80 80134C40 0C04D27E */       jal func_ovl24_801349F8
  /* 12DF84 80134C44 8E440000 */        lw $a0, ($s2) # D_ovl24_80135C28 + 0
  /* 12DF88 80134C48 00008825 */        or $s1, $zero, $zero
  /* 12DF8C 80134C4C 0C04D15B */       jal func_ovl24_8013456C
  /* 12DF90 80134C50 8E440000 */        lw $a0, ($s2) # D_ovl24_80135C28 + 0
  /* 12DF94 80134C54 18400010 */      blez $v0, .L80134C98
  /* 12DF98 80134C58 3C0C8013 */       lui $t4, %hi(D_ovl24_80135C38)
  /* 12DF9C 80134C5C 258C5C38 */     addiu $t4, $t4, %lo(D_ovl24_80135C38)
  /* 12DFA0 80134C60 00115880 */       sll $t3, $s1, 2
  /* 12DFA4 80134C64 016C8021 */      addu $s0, $t3, $t4
  .L80134C68:
  /* 12DFA8 80134C68 3C048013 */       lui $a0, %hi(D_ovl2_80130D9C)
  /* 12DFAC 80134C6C 8C840D9C */        lw $a0, %lo(D_ovl2_80130D9C)($a0)
  /* 12DFB0 80134C70 0C001260 */       jal hal_alloc
  /* 12DFB4 80134C74 24050010 */     addiu $a1, $zero, 0x10
  /* 12DFB8 80134C78 26310001 */     addiu $s1, $s1, 1
  /* 12DFBC 80134C7C 26100004 */     addiu $s0, $s0, %lo(D_NF_80000004)
  /* 12DFC0 80134C80 8E440000 */        lw $a0, ($s2) # D_ovl24_80135C28 + 0
  /* 12DFC4 80134C84 0C04D15B */       jal func_ovl24_8013456C
  /* 12DFC8 80134C88 AE02FFFC */        sw $v0, -4($s0) # D_NF_80000004 + -4
  /* 12DFCC 80134C8C 0222082A */       slt $at, $s1, $v0
  /* 12DFD0 80134C90 1420FFF5 */      bnez $at, .L80134C68
  /* 12DFD4 80134C94 00000000 */       nop 
  .L80134C98:
  /* 12DFD8 80134C98 0C04D133 */       jal func_ovl24_801344CC
  /* 12DFDC 80134C9C 00000000 */       nop 
  /* 12DFE0 80134CA0 0C04D10B */       jal func_ovl24_8013442C
  /* 12DFE4 80134CA4 00000000 */       nop 
  /* 12DFE8 80134CA8 0C04D0E3 */       jal func_ovl24_8013438C
  /* 12DFEC 80134CAC 00000000 */       nop 
  /* 12DFF0 80134CB0 0C04C6C9 */       jal func_ovl24_80131B24
  /* 12DFF4 80134CB4 00000000 */       nop 
  /* 12DFF8 80134CB8 0C04C6EA */       jal func_ovl24_80131BA8
  /* 12DFFC 80134CBC 00000000 */       nop 
  /* 12E000 80134CC0 0C04C7DB */       jal func_ovl24_80131F6C
  /* 12E004 80134CC4 8E440000 */        lw $a0, ($s2) # D_ovl24_80135C28 + 0
  /* 12E008 80134CC8 10400005 */      beqz $v0, .L80134CE0
  /* 12E00C 80134CCC 00000000 */       nop 
  /* 12E010 80134CD0 0C04C7B5 */       jal func_ovl24_80131ED4
  /* 12E014 80134CD4 00000000 */       nop 
  /* 12E018 80134CD8 10000003 */         b .L80134CE8
  /* 12E01C 80134CDC 00000000 */       nop 
  .L80134CE0:
  /* 12E020 80134CE0 0C04CD5F */       jal func_ovl24_8013357C
  /* 12E024 80134CE4 8E440000 */        lw $a0, ($s2) # D_ovl24_80135C28 + 0
  .L80134CE8:
  /* 12E028 80134CE8 0C04C7E6 */       jal func_ovl24_80131F98
  /* 12E02C 80134CEC 8E440000 */        lw $a0, ($s2) # D_ovl24_80135C28 + 0
  /* 12E030 80134CF0 0C04C870 */       jal func_ovl24_801321C0
  /* 12E034 80134CF4 8E440000 */        lw $a0, ($s2) # D_ovl24_80135C28 + 0
  /* 12E038 80134CF8 0C04CAD0 */       jal func_ovl24_80132B40
  /* 12E03C 80134CFC 8E440000 */        lw $a0, ($s2) # D_ovl24_80135C28 + 0
  /* 12E040 80134D00 0C04C7DB */       jal func_ovl24_80131F6C
  /* 12E044 80134D04 8E440000 */        lw $a0, ($s2) # D_ovl24_80135C28 + 0
  /* 12E048 80134D08 50400006 */      beql $v0, $zero, .L80134D24
  /* 12E04C 80134D0C 3C01C1A0 */       lui $at, 0xc1a0
  /* 12E050 80134D10 0C04D064 */       jal func_ovl24_80134190
  /* 12E054 80134D14 8E440000 */        lw $a0, ($s2) # D_ovl24_80135C28 + 0
  /* 12E058 80134D18 0C04CEB2 */       jal func_ovl24_80133AC8
  /* 12E05C 80134D1C 8E440000 */        lw $a0, ($s2) # D_ovl24_80135C28 + 0
  /* 12E060 80134D20 3C01C1A0 */       lui $at, (0xC1A00000 >> 16) # -20.0
  .L80134D24:
  /* 12E064 80134D24 44816000 */      mtc1 $at, $f12 # -20.0 to cop1
  /* 12E068 80134D28 3C0141F0 */       lui $at, (0x41F00000 >> 16) # 30.0
  /* 12E06C 80134D2C 44817000 */      mtc1 $at, $f14 # 30.0 to cop1
  /* 12E070 80134D30 240D00FF */     addiu $t5, $zero, 0xff
  /* 12E074 80134D34 240E00FF */     addiu $t6, $zero, 0xff
  /* 12E078 80134D38 AFAE0014 */        sw $t6, 0x14($sp)
  /* 12E07C 80134D3C AFAD0010 */        sw $t5, 0x10($sp)
  /* 12E080 80134D40 240600FF */     addiu $a2, $zero, 0xff
  /* 12E084 80134D44 0C0E4138 */       jal func_ovl1_803904E0
  /* 12E088 80134D48 240700FF */     addiu $a3, $zero, 0xff
  /* 12E08C 80134D4C 8E4F0000 */        lw $t7, ($s2) # D_ovl24_80135C28 + 0
  /* 12E090 80134D50 2401000D */     addiu $at, $zero, 0xd
  /* 12E094 80134D54 24050017 */     addiu $a1, $zero, 0x17
  /* 12E098 80134D58 15E10005 */       bne $t7, $at, .L80134D70
  /* 12E09C 80134D5C 00002025 */        or $a0, $zero, $zero
  /* 12E0A0 80134D60 0C0082AD */       jal func_80020AB4
  /* 12E0A4 80134D64 00002025 */        or $a0, $zero, $zero
  /* 12E0A8 80134D68 10000003 */         b .L80134D78
  /* 12E0AC 80134D6C 00000000 */       nop 
  .L80134D70:
  /* 12E0B0 80134D70 0C0082AD */       jal func_80020AB4
  /* 12E0B4 80134D74 24050023 */     addiu $a1, $zero, 0x23
  .L80134D78:
  /* 12E0B8 80134D78 0C000248 */       jal func_80000920
  /* 12E0BC 80134D7C 00002025 */        or $a0, $zero, $zero
  /* 12E0C0 80134D80 8FBF002C */        lw $ra, 0x2c($sp)
  /* 12E0C4 80134D84 8FB00020 */        lw $s0, 0x20($sp)
  /* 12E0C8 80134D88 8FB10024 */        lw $s1, 0x24($sp)
  /* 12E0CC 80134D8C 8FB20028 */        lw $s2, 0x28($sp)
  /* 12E0D0 80134D90 03E00008 */        jr $ra
  /* 12E0D4 80134D94 27BD0060 */     addiu $sp, $sp, 0x60

glabel classic_map_entry
  /* 12E0D8 80134D98 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 12E0DC 80134D9C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 12E0E0 80134DA0 3C048013 */       lui $a0, %hi(D_ovl24_80135B38)
  /* 12E0E4 80134DA4 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 12E0E8 80134DA8 24845B38 */     addiu $a0, $a0, %lo(D_ovl24_80135B38)
  /* 12E0EC 80134DAC AFBF0014 */        sw $ra, 0x14($sp)
  /* 12E0F0 80134DB0 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 12E0F4 80134DB4 0C001C09 */       jal func_80007024
  /* 12E0F8 80134DB8 AC8F000C */        sw $t7, 0xc($a0) # D_ovl24_80135B38 + 12
  /* 12E0FC 80134DBC 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 12E100 80134DC0 3C198013 */       lui $t9, %hi(D_NF_80136070)
  /* 12E104 80134DC4 3C048013 */       lui $a0, %hi(D_ovl24_80135B54)
  /* 12E108 80134DC8 27396070 */     addiu $t9, $t9, %lo(D_NF_80136070)
  /* 12E10C 80134DCC 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 12E110 80134DD0 24845B54 */     addiu $a0, $a0, %lo(D_ovl24_80135B54)
  /* 12E114 80134DD4 03194023 */      subu $t0, $t8, $t9
  /* 12E118 80134DD8 0C0289A6 */       jal func_800A2698
  /* 12E11C 80134DDC AC880010 */        sw $t0, 0x10($a0) # D_ovl24_80135B54 + 16
  /* 12E120 80134DE0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12E124 80134DE4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 12E128 80134DE8 03E00008 */        jr $ra
  /* 12E12C 80134DEC 00000000 */       nop 
#
#glabel D_ovl24_80134DF0   # Routine parsed as data
#  /* 12E130 80134DF0 0000000B */      movn $zero, $zero, $zero
#  /* 12E134 80134DF4 0000000C */   syscall 
#  /* 12E138 80134DF8 0000000D */     break 
