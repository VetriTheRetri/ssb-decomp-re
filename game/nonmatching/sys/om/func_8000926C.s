.section .late_rodata

glabel D_8003DD74
  /* 3D974 03E974 8003DD74 */
  .word 0xff7fffff # .float -3.4028235e38

.section .text
glabel func_8000926C
  /* 009E6C 8000926C 24020001 */     addiu $v0, $zero, 1
  /* 009E70 80009270 00027080 */       sll $t6, $v0, 2
  /* 009E74 80009274 AC80004C */        sw $zero, 0x4c($a0)
  /* 009E78 80009278 A0800054 */        sb $zero, 0x54($a0)
  /* 009E7C 8000927C A0800055 */        sb $zero, 0x55($a0)
  /* 009E80 80009280 A0800056 */        sb $zero, 0x56($a0)
  /* 009E84 80009284 AC800058 */        sw $zero, 0x58($a0)
  /* 009E88 80009288 008E1821 */      addu $v1, $a0, $t6
  /* 009E8C 8000928C AC60005C */        sw $zero, 0x5c($v1) # 5C + 4 = 60
  /* 009E90 80009290 AC600060 */        sw $zero, 0x60($v1)
  /* 009E94 80009294 AC600064 */        sw $zero, 0x64($v1)
  /* 009E98 80009298 AC600058 */        sw $zero, 0x58($v1) # 58 + 4 = 5C
  
  /* 009E9C 8000929C AC80006C */        sw $zero, 0x6c($a0)
  /* 009EA0 800092A0 AC800070 */        sw $zero, 0x70($a0)
  /* 009EA4 800092A4 3C018004 */       lui $at, %hi(D_8003DD74)
  /* 009EA8 800092A8 C424DD74 */      lwc1 $f4, %lo(D_8003DD74)($at)
  /* 009EAC 800092AC 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 009EB0 800092B0 44813000 */      mtc1 $at, $f6 # 1.0 to cop1
  /* 009EB4 800092B4 44804000 */      mtc1 $zero, $f8
  /* 009EB8 800092B8 AC800080 */        sw $zero, 0x80($a0)
  /* 009EBC 800092BC AC800084 */        sw $zero, 0x84($a0)
  /* 009EC0 800092C0 E4840074 */      swc1 $f4, 0x74($a0)
  /* 009EC4 800092C4 E4860078 */      swc1 $f6, 0x78($a0)
  /* 009EC8 800092C8 03E00008 */        jr $ra
  /* 009ECC 800092CC E488007C */      swc1 $f8, 0x7c($a0)

