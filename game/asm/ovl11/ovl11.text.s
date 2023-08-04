.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x800D6490 -> 0x800D6700

glabel func_ovl11_800D6490
  /* 119AC0 800D6490 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 119AC4 800D6494 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 119AC8 800D6498 AFBF003C */        sw $ra, 0x3c($sp)
  /* 119ACC 800D649C 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 119AD0 800D64A0 240F0064 */     addiu $t7, $zero, 0x64
  /* 119AD4 800D64A4 24180000 */     addiu $t8, $zero, 0
  /* 119AD8 800D64A8 24190001 */     addiu $t9, $zero, 1
  /* 119ADC 800D64AC 2408FFFF */     addiu $t0, $zero, -1
  /* 119AE0 800D64B0 24090001 */     addiu $t1, $zero, 1
  /* 119AE4 800D64B4 240A0001 */     addiu $t2, $zero, 1
  /* 119AE8 800D64B8 AFAA0030 */        sw $t2, 0x30($sp)
  /* 119AEC 800D64BC AFA90028 */        sw $t1, 0x28($sp)
  /* 119AF0 800D64C0 AFA80020 */        sw $t0, 0x20($sp)
  /* 119AF4 800D64C4 AFB9001C */        sw $t9, 0x1c($sp)
  /* 119AF8 800D64C8 AFB80018 */        sw $t8, 0x18($sp)
  /* 119AFC 800D64CC AFAF0014 */        sw $t7, 0x14($sp)
  /* 119B00 800D64D0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 119B04 800D64D4 AFA00024 */        sw $zero, 0x24($sp)
  /* 119B08 800D64D8 AFA0002C */        sw $zero, 0x2c($sp)
  /* 119B0C 800D64DC AFA00034 */        sw $zero, 0x34($sp)
  /* 119B10 800D64E0 240403E8 */     addiu $a0, $zero, 0x3e8
  /* 119B14 800D64E4 00002825 */        or $a1, $zero, $zero
  /* 119B18 800D64E8 00003025 */        or $a2, $zero, $zero
  /* 119B1C 800D64EC 0C002E4F */       jal func_8000B93C
  /* 119B20 800D64F0 3C078000 */       lui $a3, 0x8000
  /* 119B24 800D64F4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 119B28 800D64F8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 119B2C 800D64FC AFA20044 */        sw $v0, 0x44($sp)
  /* 119B30 800D6500 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 119B34 800D6504 8C430074 */        lw $v1, 0x74($v0)
  /* 119B38 800D6508 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 119B3C 800D650C 44050000 */      mfc1 $a1, $f0
  /* 119B40 800D6510 44060000 */      mfc1 $a2, $f0
  /* 119B44 800D6514 3C07439B */       lui $a3, 0x439b
  /* 119B48 800D6518 24640008 */     addiu $a0, $v1, 8
  /* 119B4C 800D651C 0C001C20 */       jal func_80007080
  /* 119B50 800D6520 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 119B54 800D6524 8FBF003C */        lw $ra, 0x3c($sp)
  /* 119B58 800D6528 8FA20044 */        lw $v0, 0x44($sp)
  /* 119B5C 800D652C 27BD0048 */     addiu $sp, $sp, 0x48
  /* 119B60 800D6530 03E00008 */        jr $ra
  /* 119B64 800D6534 00000000 */       nop 

glabel func_ovl11_800D6538
  /* 119B68 800D6538 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 119B6C 800D653C AFBF001C */        sw $ra, 0x1c($sp)
  /* 119B70 800D6540 240403E9 */     addiu $a0, $zero, 0x3e9
  /* 119B74 800D6544 00002825 */        or $a1, $zero, $zero
  /* 119B78 800D6548 24060001 */     addiu $a2, $zero, 1
  /* 119B7C 800D654C 0C00265A */       jal omMakeGObjCommon
  /* 119B80 800D6550 3C078000 */       lui $a3, 0x8000
  /* 119B84 800D6554 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 119B88 800D6558 240EFFFF */     addiu $t6, $zero, -1
  /* 119B8C 800D655C AFA20024 */        sw $v0, 0x24($sp)
  /* 119B90 800D6560 AFAE0010 */        sw $t6, 0x10($sp)
  /* 119B94 800D6564 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 119B98 800D6568 00402025 */        or $a0, $v0, $zero
  /* 119B9C 800D656C 00003025 */        or $a2, $zero, $zero
  /* 119BA0 800D6570 0C00277D */       jal func_80009DF4
  /* 119BA4 800D6574 3C078000 */       lui $a3, 0x8000
  /* 119BA8 800D6578 3C0F800D */       lui $t7, %hi(D_ovl11_800D67D0)
  /* 119BAC 800D657C 8DEF67D0 */        lw $t7, %lo(D_ovl11_800D67D0)($t7)
  /* 119BB0 800D6580 3C180001 */       lui $t8, %hi(D_NF_00008460)
  /* 119BB4 800D6584 27188460 */     addiu $t8, $t8, %lo(D_NF_00008460)
  /* 119BB8 800D6588 8FA40024 */        lw $a0, 0x24($sp)
  /* 119BBC 800D658C 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 119BC0 800D6590 01F82821 */      addu $a1, $t7, $t8
  /* 119BC4 800D6594 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 119BC8 800D6598 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 119BCC 800D659C 00000000 */       nop 
  /* 119BD0 800D65A0 E4400058 */      swc1 $f0, 0x58($v0)
  /* 119BD4 800D65A4 E440005C */      swc1 $f0, 0x5c($v0)
  /* 119BD8 800D65A8 8FBF001C */        lw $ra, 0x1c($sp)
  /* 119BDC 800D65AC 27BD0028 */     addiu $sp, $sp, 0x28
  /* 119BE0 800D65B0 03E00008 */        jr $ra
  /* 119BE4 800D65B4 00000000 */       nop 

glabel func_ovl11_800D65B8
  /* 119BE8 800D65B8 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 119BEC 800D65BC AFBF001C */        sw $ra, 0x1c($sp)
  /* 119BF0 800D65C0 0C035998 */       jal func_ovl11_800D6660
  /* 119BF4 800D65C4 00000000 */       nop 
  /* 119BF8 800D65C8 240E00FF */     addiu $t6, $zero, 0xff
  /* 119BFC 800D65CC AFAE0010 */        sw $t6, 0x10($sp)
  /* 119C00 800D65D0 00002025 */        or $a0, $zero, $zero
  /* 119C04 800D65D4 3C058000 */       lui $a1, 0x8000
  /* 119C08 800D65D8 24060064 */     addiu $a2, $zero, 0x64
  /* 119C0C 800D65DC 0C002E7F */       jal func_8000B9FC
  /* 119C10 800D65E0 00003825 */        or $a3, $zero, $zero
  /* 119C14 800D65E4 0C035924 */       jal func_ovl11_800D6490
  /* 119C18 800D65E8 00000000 */       nop 
  /* 119C1C 800D65EC 0C03594E */       jal func_ovl11_800D6538
  /* 119C20 800D65F0 00000000 */       nop 
  /* 119C24 800D65F4 8FBF001C */        lw $ra, 0x1c($sp)
  /* 119C28 800D65F8 27BD0020 */     addiu $sp, $sp, 0x20
  /* 119C2C 800D65FC 03E00008 */        jr $ra
  /* 119C30 800D6600 00000000 */       nop 

glabel n64_logo_entry
  /* 119C34 800D6604 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 119C38 800D6608 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 119C3C 800D660C 3C04800D */       lui $a0, %hi(D_ovl11_800D6700)
  /* 119C40 800D6610 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 119C44 800D6614 24846700 */     addiu $a0, $a0, %lo(D_ovl11_800D6700)
  /* 119C48 800D6618 AFBF0014 */        sw $ra, 0x14($sp)
  /* 119C4C 800D661C 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 119C50 800D6620 0C001C09 */       jal func_80007024
  /* 119C54 800D6624 AC8F000C */        sw $t7, 0xc($a0) # D_ovl11_800D6700 + 12
  /* 119C58 800D6628 3C188039 */       lui $t8, %hi(D_NF_80392A00)
  /* 119C5C 800D662C 3C19800D */       lui $t9, %hi(D_NF_800D6B30)
  /* 119C60 800D6630 3C04800D */       lui $a0, %hi(D_ovl11_800D671C)
  /* 119C64 800D6634 27396B30 */     addiu $t9, $t9, %lo(D_NF_800D6B30)
  /* 119C68 800D6638 27182A00 */     addiu $t8, $t8, %lo(D_NF_80392A00)
  /* 119C6C 800D663C 2484671C */     addiu $a0, $a0, %lo(D_ovl11_800D671C)
  /* 119C70 800D6640 03194023 */      subu $t0, $t8, $t9
  /* 119C74 800D6644 0C001A0F */       jal func_8000683C
  /* 119C78 800D6648 AC880010 */        sw $t0, 0x10($a0) # D_ovl11_800D671C + 16
  /* 119C7C 800D664C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 119C80 800D6650 27BD0018 */     addiu $sp, $sp, 0x18
  /* 119C84 800D6654 03E00008 */        jr $ra
  /* 119C88 800D6658 00000000 */       nop 

  /* 119C8C 800D665C 00000000 */       nop 

# Likely start of new file
glabel func_ovl11_800D6660
  /* 119C90 800D6660 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 119C94 800D6664 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 119C98 800D6668 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 119C9C 800D666C 3C18800D */       lui $t8, %hi(D_ovl11_800D67D8)
  /* 119CA0 800D6670 3C08800D */       lui $t0, %hi(D_ovl11_800D6AF8)
  /* 119CA4 800D6674 AFBF0014 */        sw $ra, 0x14($sp)
  /* 119CA8 800D6678 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 119CAC 800D667C 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 119CB0 800D6680 271867D8 */     addiu $t8, $t8, %lo(D_ovl11_800D67D8)
  /* 119CB4 800D6684 24190064 */     addiu $t9, $zero, 0x64
  /* 119CB8 800D6688 25086AF8 */     addiu $t0, $t0, %lo(D_ovl11_800D6AF8)
  /* 119CBC 800D668C 24090007 */     addiu $t1, $zero, 7
  /* 119CC0 800D6690 AFAE0020 */        sw $t6, 0x20($sp)
  /* 119CC4 800D6694 AFAF0024 */        sw $t7, 0x24($sp)
  /* 119CC8 800D6698 AFA00028 */        sw $zero, 0x28($sp)
  /* 119CCC 800D669C AFA0002C */        sw $zero, 0x2c($sp)
  /* 119CD0 800D66A0 AFB80030 */        sw $t8, 0x30($sp)
  /* 119CD4 800D66A4 AFB90034 */        sw $t9, 0x34($sp)
  /* 119CD8 800D66A8 AFA80038 */        sw $t0, 0x38($sp)
  /* 119CDC 800D66AC AFA9003C */        sw $t1, 0x3c($sp)
  /* 119CE0 800D66B0 0C0337DE */       jal rldm_initialize
  /* 119CE4 800D66B4 27A40020 */     addiu $a0, $sp, 0x20
  /* 119CE8 800D66B8 3C04800D */       lui $a0, %hi(D_ovl11_800D67B0)
  /* 119CEC 800D66BC 248467B0 */     addiu $a0, $a0, %lo(D_ovl11_800D67B0)
  /* 119CF0 800D66C0 0C0337BB */       jal rldm_bytes_need_to_load
  /* 119CF4 800D66C4 24050001 */     addiu $a1, $zero, 1
  /* 119CF8 800D66C8 00402025 */        or $a0, $v0, $zero
  /* 119CFC 800D66CC 0C001260 */       jal hal_alloc
  /* 119D00 800D66D0 24050010 */     addiu $a1, $zero, 0x10
  /* 119D04 800D66D4 3C04800D */       lui $a0, %hi(D_ovl11_800D67B0)
  /* 119D08 800D66D8 3C06800D */       lui $a2, %hi(D_ovl11_800D67D0)
  /* 119D0C 800D66DC 24C667D0 */     addiu $a2, $a2, %lo(D_ovl11_800D67D0)
  /* 119D10 800D66E0 248467B0 */     addiu $a0, $a0, %lo(D_ovl11_800D67B0)
  /* 119D14 800D66E4 24050001 */     addiu $a1, $zero, 1
  /* 119D18 800D66E8 0C033781 */       jal rldm_load_files_into
  /* 119D1C 800D66EC 00403825 */        or $a3, $v0, $zero
  /* 119D20 800D66F0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 119D24 800D66F4 27BD0040 */     addiu $sp, $sp, 0x40
  /* 119D28 800D66F8 03E00008 */        jr $ra
  /* 119D2C 800D66FC 00000000 */       nop 
#
#glabel D_ovl11_800D6700   # Routine parsed as data
#  /* 119D30 800D6700 80392A00 */        lb $t9, 0x2a00($at)
#  /* 119D34 800D6704 803B6900 */        lb $k1, 0x6900($at)
#  /* 119D38 800D6708 803DA800 */        lb $sp, -0x5800($at)
#  /* 119D3C 800D670C 00000000 */       nop 
#  /* 119D40 800D6710 00000140 */     pause 
#  /* 119D44 800D6714 000000F0 */       tge $zero, $zero, 3
