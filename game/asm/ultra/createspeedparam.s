.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

glabel __createSpeedParam
  /* 033110 80032510 240E0007 */     addiu $t6, $zero, 7
  /* 033114 80032514 3C01800A */       lui $at, %hi(CartRomHandle + 4)
  /* 033118 80032518 A02EF1F4 */        sb $t6, %lo(CartRomHandle + 4)($at)
  /* 03311C 8003251C 3C0FA460 */       lui $t7, %hi(PI_BSD_DOM1_LAT_REG)
  /* 033120 80032520 8DF80014 */        lw $t8, %lo(PI_BSD_DOM1_LAT_REG)($t7)
  /* 033124 80032524 3C01800A */       lui $at, %hi(CartRomHandle + 5)
  /* 033128 80032528 3C19A460 */       lui $t9, %hi(PI_BSD_DOM1_PWD_REG)
  /* 03312C 8003252C A038F1F5 */        sb $t8, %lo(CartRomHandle + 5)($at)
  /* 033130 80032530 8F280018 */        lw $t0, %lo(PI_BSD_DOM1_PWD_REG)($t9)
  /* 033134 80032534 3C01800A */       lui $at, %hi(CartRomHandle + 8)
  /* 033138 80032538 3C09A460 */       lui $t1, %hi(PI_BSD_DOM1_PGS_REG)
  /* 03313C 8003253C A028F1F8 */        sb $t0, %lo(CartRomHandle + 8)($at)
  /* 033140 80032540 8D2A001C */        lw $t2, %lo(PI_BSD_DOM1_PGS_REG)($t1)
  /* 033144 80032544 3C01800A */       lui $at, %hi(CartRomHandle + 6)
  /* 033148 80032548 3C0BA460 */       lui $t3, %hi(PI_BSD_DOM1_RLS_REG)
  /* 03314C 8003254C A02AF1F6 */        sb $t2, %lo(CartRomHandle + 6)($at)
  /* 033150 80032550 8D6C0020 */        lw $t4, %lo(PI_BSD_DOM1_RLS_REG)($t3)
  /* 033154 80032554 3C01800A */       lui $at, %hi(CartRomHandle + 7)
  /* 033158 80032558 240D0007 */     addiu $t5, $zero, 7
  /* 03315C 8003255C A02CF1F7 */        sb $t4, %lo(CartRomHandle + 7)($at)
  /* 033160 80032560 3C01800A */       lui $at, %hi(D_8009F26C)
  /* 033164 80032564 A02DF26C */        sb $t5, %lo(D_8009F26C)($at)
  /* 033168 80032568 3C0EA460 */       lui $t6, %hi(PI_BSD_DOM2_LAT_REG)
  /* 03316C 8003256C 8DCF0024 */        lw $t7, %lo(PI_BSD_DOM2_LAT_REG)($t6)
  /* 033170 80032570 3C01800A */       lui $at, %hi(D_8009F26D)
  /* 033174 80032574 3C18A460 */       lui $t8, %hi(PI_BSD_DOM2_PWD_REG)
  /* 033178 80032578 A02FF26D */        sb $t7, %lo(D_8009F26D)($at)
  /* 03317C 8003257C 8F190028 */        lw $t9, %lo(PI_BSD_DOM2_PWD_REG)($t8)
  /* 033180 80032580 3C01800A */       lui $at, %hi(D_8009F270)
  /* 033184 80032584 3C08A460 */       lui $t0, %hi(PI_BSD_DOM2_PGS_REG)
  /* 033188 80032588 A039F270 */        sb $t9, %lo(D_8009F270)($at)
  /* 03318C 8003258C 8D09002C */        lw $t1, %lo(PI_BSD_DOM2_PGS_REG)($t0)
  /* 033190 80032590 3C01800A */       lui $at, %hi(D_8009F26E)
  /* 033194 80032594 3C0AA460 */       lui $t2, %hi(PI_BSD_DOM2_RLS_REG)
  /* 033198 80032598 A029F26E */        sb $t1, %lo(D_8009F26E)($at)
  /* 03319C 8003259C 8D4B0030 */        lw $t3, %lo(PI_BSD_DOM2_RLS_REG)($t2)
  /* 0331A0 800325A0 3C01800A */       lui $at, %hi(D_8009F26F)
  /* 0331A4 800325A4 03E00008 */        jr $ra
  /* 0331A8 800325A8 A02BF26F */        sb $t3, %lo(D_8009F26F)($at)

  /* 0331AC 800325AC 00000000 */       nop 
