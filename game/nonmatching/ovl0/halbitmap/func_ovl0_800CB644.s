.section .text
glabel func_ovl0_800CB644
  /* 047024 800CB644 27BDFFF8 */     addiu $sp, $sp, -8
  /* 047028 800CB648 3C0E800D */       lui $t6, %hi(D_ovl0_800D5D44)
  /* 04702C 800CB64C AFA40008 */        sw $a0, 8($sp)
  /* 047030 800CB650 25CE5D44 */     addiu $t6, $t6, %lo(D_ovl0_800D5D44)
  /* 047034 800CB654 8DD80000 */        lw $t8, ($t6) # D_ovl0_800D5D44 + 0
  /* 047038 800CB658 27A30004 */     addiu $v1, $sp, 4
  /* 04703C 800CB65C 308400FF */      andi $a0, $a0, 0xff
  /* 047040 800CB660 0064C821 */      addu $t9, $v1, $a0
  /* 047044 800CB664 AC780000 */        sw $t8, ($v1)
  /* 047048 800CB668 93220000 */       lbu $v0, ($t9)
  /* 04704C 800CB66C 03E00008 */        jr $ra
  /* 047050 800CB670 27BD0008 */     addiu $sp, $sp, 8

