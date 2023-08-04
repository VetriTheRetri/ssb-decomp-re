.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x8018D0C0 -> 0x8018E160

glabel func_ovl64_8018D0C0
  /* 18BE00 8018D0C0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18BE04 8018D0C4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18BE08 8018D0C8 0C002979 */       jal func_8000A5E4
  /* 18BE0C 8018D0CC 00000000 */       nop 
  /* 18BE10 8018D0D0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18BE14 8018D0D4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18BE18 8018D0D8 03E00008 */        jr $ra
  /* 18BE1C 8018D0DC 00000000 */       nop 

glabel func_ovl64_8018D0E0
  /* 18BE20 8018D0E0 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 18BE24 8018D0E4 AFB00018 */        sw $s0, 0x18($sp)
  /* 18BE28 8018D0E8 3C108004 */       lui $s0, %hi(gOMObjCommonLinks + (0x03 * 4))
  /* 18BE2C 8018D0EC 8E1066FC */        lw $s0, %lo(gOMObjCommonLinks + (0x03 * 4))($s0)
  /* 18BE30 8018D0F0 AFBF001C */        sw $ra, 0x1c($sp)
  /* 18BE34 8018D0F4 12000006 */      beqz $s0, .L8018D110
  /* 18BE38 8018D0F8 00000000 */       nop 
  .L8018D0FC:
  /* 18BE3C 8018D0FC 0C039FDA */       jal func_ovl2_800E7F68
  /* 18BE40 8018D100 02002025 */        or $a0, $s0, $zero
  /* 18BE44 8018D104 8E100004 */        lw $s0, 4($s0)
  /* 18BE48 8018D108 1600FFFC */      bnez $s0, .L8018D0FC
  /* 18BE4C 8018D10C 00000000 */       nop 
  .L8018D110:
  /* 18BE50 8018D110 3C0F800A */       lui $t7, %hi(gpBattleState)
  /* 18BE54 8018D114 8DEF50E8 */        lw $t7, %lo(gpBattleState)($t7)
  /* 18BE58 8018D118 240E0001 */     addiu $t6, $zero, 1
  /* 18BE5C 8018D11C A1EE0011 */        sb $t6, 0x11($t7)
  /* 18BE60 8018D120 8FBF001C */        lw $ra, 0x1c($sp)
  /* 18BE64 8018D124 8FB00018 */        lw $s0, 0x18($sp)
  /* 18BE68 8018D128 27BD0020 */     addiu $sp, $sp, 0x20
  /* 18BE6C 8018D12C 03E00008 */        jr $ra
  /* 18BE70 8018D130 00000000 */       nop 

glabel func_ovl64_8018D134
  /* 18BE74 8018D134 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18BE78 8018D138 3C028004 */       lui $v0, %hi(gContInput)
  /* 18BE7C 8018D13C 3C048004 */       lui $a0, %hi(gUpdateContData)
  /* 18BE80 8018D140 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18BE84 8018D144 24845250 */     addiu $a0, $a0, %lo(gUpdateContData)
  /* 18BE88 8018D148 24425228 */     addiu $v0, $v0, %lo(gContInput)
  /* 18BE8C 8018D14C 94430002 */       lhu $v1, 2($v0) # gContInput + 2
  .L8018D150:
  /* 18BE90 8018D150 2442000A */     addiu $v0, $v0, 0xa
  /* 18BE94 8018D154 306ED000 */      andi $t6, $v1, 0xd000
  /* 18BE98 8018D158 11C0000A */      beqz $t6, .L8018D184
  /* 18BE9C 8018D15C 00000000 */       nop 
  /* 18BEA0 8018D160 3C02800A */       lui $v0, %hi(gSceneData)
  /* 18BEA4 8018D164 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 18BEA8 8018D168 904F0000 */       lbu $t7, ($v0) # gSceneData + 0
  /* 18BEAC 8018D16C 24180001 */     addiu $t8, $zero, 1
  /* 18BEB0 8018D170 A0580000 */        sb $t8, ($v0) # gSceneData + 0
  /* 18BEB4 8018D174 0C00171D */       jal func_80005C74
  /* 18BEB8 8018D178 A04F0001 */        sb $t7, 1($v0) # gSceneData + 1
  /* 18BEBC 8018D17C 10000004 */         b .L8018D190
  /* 18BEC0 8018D180 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018D184:
  /* 18BEC4 8018D184 5444FFF2 */      bnel $v0, $a0, .L8018D150
  /* 18BEC8 8018D188 94430002 */       lhu $v1, 2($v0)
  /* 18BECC 8018D18C 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018D190:
  /* 18BED0 8018D190 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18BED4 8018D194 03E00008 */        jr $ra
  /* 18BED8 8018D198 00000000 */       nop 

glabel func_ovl64_8018D19C
  /* 18BEDC 8018D19C 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 18BEE0 8018D1A0 3C0E8019 */       lui $t6, %hi(D_ovl64_8018E230)
  /* 18BEE4 8018D1A4 AFBF0024 */        sw $ra, 0x24($sp)
  /* 18BEE8 8018D1A8 25CEE230 */     addiu $t6, $t6, %lo(D_ovl64_8018E230)
  /* 18BEEC 8018D1AC 8DD80000 */        lw $t8, ($t6) # D_ovl64_8018E230 + 0
  /* 18BEF0 8018D1B0 27A7002C */     addiu $a3, $sp, 0x2c
  /* 18BEF4 8018D1B4 2419001E */     addiu $t9, $zero, 0x1e
  /* 18BEF8 8018D1B8 ACF80000 */        sw $t8, ($a3)
  /* 18BEFC 8018D1BC 24080001 */     addiu $t0, $zero, 1
  /* 18BF00 8018D1C0 AFA80014 */        sw $t0, 0x14($sp)
  /* 18BF04 8018D1C4 AFA00018 */        sw $zero, 0x18($sp)
  /* 18BF08 8018D1C8 AFB90010 */        sw $t9, 0x10($sp)
  /* 18BF0C 8018D1CC 240403FD */     addiu $a0, $zero, 0x3fd
  /* 18BF10 8018D1D0 2405000D */     addiu $a1, $zero, 0xd
  /* 18BF14 8018D1D4 0C035018 */       jal func_ovl0_800D4060
  /* 18BF18 8018D1D8 2406000A */     addiu $a2, $zero, 0xa
  /* 18BF1C 8018D1DC 8FBF0024 */        lw $ra, 0x24($sp)
  /* 18BF20 8018D1E0 27BD0030 */     addiu $sp, $sp, 0x30
  /* 18BF24 8018D1E4 03E00008 */        jr $ra
  /* 18BF28 8018D1E8 00000000 */       nop 

glabel func_ovl64_8018D1EC
  /* 18BF2C 8018D1EC 8C820024 */        lw $v0, 0x24($a0)
  /* 18BF30 8018D1F0 24010001 */     addiu $at, $zero, 1
  /* 18BF34 8018D1F4 10400005 */      beqz $v0, .L8018D20C
  /* 18BF38 8018D1F8 00000000 */       nop 
  /* 18BF3C 8018D1FC 10410003 */       beq $v0, $at, .L8018D20C
  /* 18BF40 8018D200 24010002 */     addiu $at, $zero, 2
  /* 18BF44 8018D204 54410004 */      bnel $v0, $at, .L8018D218
  /* 18BF48 8018D208 00001025 */        or $v0, $zero, $zero
  .L8018D20C:
  /* 18BF4C 8018D20C 03E00008 */        jr $ra
  /* 18BF50 8018D210 24020001 */     addiu $v0, $zero, 1

  /* 18BF54 8018D214 00001025 */        or $v0, $zero, $zero
  .L8018D218:
  /* 18BF58 8018D218 03E00008 */        jr $ra
  /* 18BF5C 8018D21C 00000000 */       nop 

glabel func_ovl64_8018D220
  /* 18BF60 8018D220 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 18BF64 8018D224 AFBF001C */        sw $ra, 0x1c($sp)
  /* 18BF68 8018D228 AFA40028 */        sw $a0, 0x28($sp)
  /* 18BF6C 8018D22C 0C006265 */       jal lbRandom_GetIntRange
  /* 18BF70 8018D230 24040006 */     addiu $a0, $zero, 6
  /* 18BF74 8018D234 AFA20020 */        sw $v0, 0x20($sp)
  /* 18BF78 8018D238 0C006265 */       jal lbRandom_GetIntRange
  /* 18BF7C 8018D23C 24040005 */     addiu $a0, $zero, 5
  /* 18BF80 8018D240 3C018019 */       lui $at, %hi(D_ovl64_8018E2E0)
  /* 18BF84 8018D244 C420E2E0 */      lwc1 $f0, %lo(D_ovl64_8018E2E0)($at)
  /* 18BF88 8018D248 8FAE0020 */        lw $t6, 0x20($sp)
  /* 18BF8C 8018D24C 3C014334 */       lui $at, (0x43340000 >> 16) # 180.0
  /* 18BF90 8018D250 44811000 */      mtc1 $at, $f2 # 180.0 to cop1
  /* 18BF94 8018D254 3C018019 */       lui $at, %hi(D_ovl64_8018E1D4)
  /* 18BF98 8018D258 000E7880 */       sll $t7, $t6, 2
  /* 18BF9C 8018D25C 002F0821 */      addu $at, $at, $t7
  /* 18BFA0 8018D260 C424E1D4 */      lwc1 $f4, %lo(D_ovl64_8018E1D4)($at)
  /* 18BFA4 8018D264 3C018019 */       lui $at, %hi(D_ovl64_8018E1EC)
  /* 18BFA8 8018D268 0002C080 */       sll $t8, $v0, 2
  /* 18BFAC 8018D26C 00380821 */      addu $at, $at, $t8
  /* 18BFB0 8018D270 46002182 */     mul.s $f6, $f4, $f0
  /* 18BFB4 8018D274 C42AE1EC */      lwc1 $f10, %lo(D_ovl64_8018E1EC)($at)
  /* 18BFB8 8018D278 8FA40028 */        lw $a0, 0x28($sp)
  /* 18BFBC 8018D27C 3C018019 */       lui $at, %hi(D_ovl64_8018E2E4)
  /* 18BFC0 8018D280 46005402 */     mul.s $f16, $f10, $f0
  /* 18BFC4 8018D284 8C990084 */        lw $t9, 0x84($a0)
  /* 18BFC8 8018D288 C424E2E4 */      lwc1 $f4, %lo(D_ovl64_8018E2E4)($at)
  /* 18BFCC 8018D28C 3C0141E0 */       lui $at, (0x41E00000 >> 16) # 28.0
  /* 18BFD0 8018D290 8F2809C8 */        lw $t0, 0x9c8($t9)
  /* 18BFD4 8018D294 46023203 */     div.s $f8, $f6, $f2
  /* 18BFD8 8018D298 44813000 */      mtc1 $at, $f6 # 28.0 to cop1
  /* 18BFDC 8018D29C 8D070090 */        lw $a3, 0x90($t0)
  /* 18BFE0 8018D2A0 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 18BFE4 8018D2A4 E7A60014 */      swc1 $f6, 0x14($sp)
  /* 18BFE8 8018D2A8 46028483 */     div.s $f18, $f16, $f2
  /* 18BFEC 8018D2AC 44054000 */      mfc1 $a1, $f8
  /* 18BFF0 8018D2B0 44069000 */      mfc1 $a2, $f18
  /* 18BFF4 8018D2B4 0C0433D1 */       jal func_ovl2_8010CF44
  /* 18BFF8 8018D2B8 00000000 */       nop 
  /* 18BFFC 8018D2BC 8FBF001C */        lw $ra, 0x1c($sp)
  /* 18C000 8018D2C0 27BD0028 */     addiu $sp, $sp, 0x28
  /* 18C004 8018D2C4 03E00008 */        jr $ra
  /* 18C008 8018D2C8 00000000 */       nop 

glabel func_ovl64_8018D2CC
  /* 18C00C 8018D2CC 3C05800A */       lui $a1, %hi(gpBattleState)
  /* 18C010 8018D2D0 24A550E8 */     addiu $a1, $a1, %lo(gpBattleState)
  /* 18C014 8018D2D4 8CAE0000 */        lw $t6, ($a1) # gpBattleState + 0
  /* 18C018 8018D2D8 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 18C01C 8018D2DC AFBF0014 */        sw $ra, 0x14($sp)
  /* 18C020 8018D2E0 8DC20078 */        lw $v0, 0x78($t6)
  /* 18C024 8018D2E4 8C440084 */        lw $a0, 0x84($v0)
  /* 18C028 8018D2E8 AFA2001C */        sw $v0, 0x1c($sp)
  /* 18C02C 8018D2EC 0C06347B */       jal func_ovl64_8018D1EC
  /* 18C030 8018D2F0 AFA40018 */        sw $a0, 0x18($sp)
  /* 18C034 8018D2F4 3C05800A */       lui $a1, %hi(gpBattleState)
  /* 18C038 8018D2F8 10400004 */      beqz $v0, .L8018D30C
  /* 18C03C 8018D2FC 24A550E8 */     addiu $a1, $a1, %lo(gpBattleState)
  /* 18C040 8018D300 3C018019 */       lui $at, %hi(D_ovl64_8018E4E0)
  /* 18C044 8018D304 10000021 */         b .L8018D38C
  /* 18C048 8018D308 AC20E4E0 */        sw $zero, %lo(D_ovl64_8018E4E0)($at)
  .L8018D30C:
  /* 18C04C 8018D30C 8CB80000 */        lw $t8, ($a1) # gpBattleState + 0
  /* 18C050 8018D310 240F0001 */     addiu $t7, $zero, 1
  /* 18C054 8018D314 8F1901D4 */        lw $t9, 0x1d4($t8)
  /* 18C058 8018D318 8F280084 */        lw $t0, 0x84($t9)
  /* 18C05C 8018D31C A10F0013 */        sb $t7, 0x13($t0)
  /* 18C060 8018D320 8CA20000 */        lw $v0, ($a1) # gpBattleState + 0
  /* 18C064 8018D324 8C4901D4 */        lw $t1, 0x1d4($v0)
  /* 18C068 8018D328 8C4B0160 */        lw $t3, 0x160($v0)
  /* 18C06C 8018D32C 8D2A0084 */        lw $t2, 0x84($t1)
  /* 18C070 8018D330 8D6C0084 */        lw $t4, 0x84($t3)
  /* 18C074 8018D334 91430013 */       lbu $v1, 0x13($t2)
  /* 18C078 8018D338 A1830013 */        sb $v1, 0x13($t4)
  /* 18C07C 8018D33C 8CAD0000 */        lw $t5, ($a1) # gpBattleState + 0
  /* 18C080 8018D340 8DAE00EC */        lw $t6, 0xec($t5)
  /* 18C084 8018D344 8DD80084 */        lw $t8, 0x84($t6)
  /* 18C088 8018D348 A3030013 */        sb $v1, 0x13($t8)
  /* 18C08C 8018D34C 0C063488 */       jal func_ovl64_8018D220
  /* 18C090 8018D350 8FA4001C */        lw $a0, 0x1c($sp)
  /* 18C094 8018D354 8FA4001C */        lw $a0, 0x1c($sp)
  /* 18C098 8018D358 0C03A466 */       jal ftCommon_SetModelPartLevelDetailAll
  /* 18C09C 8018D35C 24050001 */     addiu $a1, $zero, 1
  /* 18C0A0 8018D360 8FAF0018 */        lw $t7, 0x18($sp)
  /* 18C0A4 8018D364 24190001 */     addiu $t9, $zero, 1
  /* 18C0A8 8018D368 3C088019 */       lui $t0, %hi(D_ovl64_8018E4E8)
  /* 18C0AC 8018D36C A1F9000F */        sb $t9, 0xf($t7)
  /* 18C0B0 8018D370 8D08E4E8 */        lw $t0, %lo(D_ovl64_8018E4E8)($t0)
  /* 18C0B4 8018D374 3C018013 */       lui $at, %hi(D_ovl2_80131580)
  /* 18C0B8 8018D378 8D020074 */        lw $v0, 0x74($t0)
  /* 18C0BC 8018D37C 94490024 */       lhu $t1, 0x24($v0)
  /* 18C0C0 8018D380 312AFFFB */      andi $t2, $t1, 0xfffb
  /* 18C0C4 8018D384 A44A0024 */        sh $t2, 0x24($v0)
  /* 18C0C8 8018D388 A0201580 */        sb $zero, %lo(D_ovl2_80131580)($at)
  .L8018D38C:
  /* 18C0CC 8018D38C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18C0D0 8018D390 27BD0020 */     addiu $sp, $sp, 0x20
  /* 18C0D4 8018D394 03E00008 */        jr $ra
  /* 18C0D8 8018D398 00000000 */       nop 

  glabel jtgt_ovl64_8018D39C
  /* 18C0DC 8018D39C 3C0E800A */       lui $t6, %hi(gpBattleState)
  /* 18C0E0 8018D3A0 8DCE50E8 */        lw $t6, %lo(gpBattleState)($t6)
  /* 18C0E4 8018D3A4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18C0E8 8018D3A8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18C0EC 8018D3AC 8DCF0078 */        lw $t7, 0x78($t6)
  /* 18C0F0 8018D3B0 0C06347B */       jal func_ovl64_8018D1EC
  /* 18C0F4 8018D3B4 8DE40084 */        lw $a0, 0x84($t7)
  /* 18C0F8 8018D3B8 10400002 */      beqz $v0, .L8018D3C4
  /* 18C0FC 8018D3BC 3C018019 */       lui $at, %hi(D_ovl64_8018E4E0)
  /* 18C100 8018D3C0 AC20E4E0 */        sw $zero, %lo(D_ovl64_8018E4E0)($at)
  .L8018D3C4:
  /* 18C104 8018D3C4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18C108 8018D3C8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18C10C 8018D3CC 03E00008 */        jr $ra
  /* 18C110 8018D3D0 00000000 */       nop 

  glabel jtgt_ovl64_8018D3D4
  /* 18C114 8018D3D4 3C06800A */       lui $a2, %hi(gpBattleState)
  /* 18C118 8018D3D8 24C650E8 */     addiu $a2, $a2, %lo(gpBattleState)
  /* 18C11C 8018D3DC 8CC20000 */        lw $v0, ($a2) # gpBattleState + 0
  /* 18C120 8018D3E0 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 18C124 8018D3E4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18C128 8018D3E8 8C4800EC */        lw $t0, 0xec($v0)
  /* 18C12C 8018D3EC 3C0F8019 */       lui $t7, %hi(D_ovl64_8018E4E8)
  /* 18C130 8018D3F0 8DEFE4E8 */        lw $t7, %lo(D_ovl64_8018E4E8)($t7)
  /* 18C134 8018D3F4 8D0E0084 */        lw $t6, 0x84($t0)
  /* 18C138 8018D3F8 8C440078 */        lw $a0, 0x78($v0)
  /* 18C13C 8018D3FC 24050002 */     addiu $a1, $zero, 2
  /* 18C140 8018D400 AFAE001C */        sw $t6, 0x1c($sp)
  /* 18C144 8018D404 8DE30074 */        lw $v1, 0x74($t7)
  /* 18C148 8018D408 94780024 */       lhu $t8, 0x24($v1)
  /* 18C14C 8018D40C 37190004 */       ori $t9, $t8, 4
  /* 18C150 8018D410 A4790024 */        sh $t9, 0x24($v1)
  /* 18C154 8018D414 AFA80024 */        sw $t0, 0x24($sp)
  /* 18C158 8018D418 0C03A466 */       jal ftCommon_SetModelPartLevelDetailAll
  /* 18C15C 8018D41C AFA40020 */        sw $a0, 0x20($sp)
  /* 18C160 8018D420 8FA70020 */        lw $a3, 0x20($sp)
  /* 18C164 8018D424 24090002 */     addiu $t1, $zero, 2
  /* 18C168 8018D428 8CEA0084 */        lw $t2, 0x84($a3)
  /* 18C16C 8018D42C A149000F */        sb $t1, 0xf($t2)
  /* 18C170 8018D430 0C06347B */       jal func_ovl64_8018D1EC
  /* 18C174 8018D434 8FA4001C */        lw $a0, 0x1c($sp)
  /* 18C178 8018D438 3C06800A */       lui $a2, %hi(gpBattleState)
  /* 18C17C 8018D43C 10400004 */      beqz $v0, .L8018D450
  /* 18C180 8018D440 24C650E8 */     addiu $a2, $a2, %lo(gpBattleState)
  /* 18C184 8018D444 3C018019 */       lui $at, %hi(D_ovl64_8018E4E0)
  /* 18C188 8018D448 10000025 */         b .L8018D4E0
  /* 18C18C 8018D44C AC20E4E0 */        sw $zero, %lo(D_ovl64_8018E4E0)($at)
  .L8018D450:
  /* 18C190 8018D450 8CCC0000 */        lw $t4, ($a2) # gpBattleState + 0
  /* 18C194 8018D454 240B0009 */     addiu $t3, $zero, 9
  /* 18C198 8018D458 240F0001 */     addiu $t7, $zero, 1
  /* 18C19C 8018D45C 8D8D00EC */        lw $t5, 0xec($t4)
  /* 18C1A0 8018D460 8DAE0084 */        lw $t6, 0x84($t5)
  /* 18C1A4 8018D464 A1CB0013 */        sb $t3, 0x13($t6)
  /* 18C1A8 8018D468 8CD80000 */        lw $t8, ($a2) # gpBattleState + 0
  /* 18C1AC 8018D46C 8F1901D4 */        lw $t9, 0x1d4($t8)
  /* 18C1B0 8018D470 8F290084 */        lw $t1, 0x84($t9)
  /* 18C1B4 8018D474 A12F0013 */        sb $t7, 0x13($t1)
  /* 18C1B8 8018D478 8CC20000 */        lw $v0, ($a2) # gpBattleState + 0
  /* 18C1BC 8018D47C 8C4A01D4 */        lw $t2, 0x1d4($v0)
  /* 18C1C0 8018D480 8C4D0160 */        lw $t5, 0x160($v0)
  /* 18C1C4 8018D484 8D4C0084 */        lw $t4, 0x84($t2)
  /* 18C1C8 8018D488 8DAB0084 */        lw $t3, 0x84($t5)
  /* 18C1CC 8018D48C 91830013 */       lbu $v1, 0x13($t4)
  /* 18C1D0 8018D490 A1630013 */        sb $v1, 0x13($t3)
  /* 18C1D4 8018D494 8CCE0000 */        lw $t6, ($a2) # gpBattleState + 0
  /* 18C1D8 8018D498 8DD80078 */        lw $t8, 0x78($t6)
  /* 18C1DC 8018D49C 8F190084 */        lw $t9, 0x84($t8)
  /* 18C1E0 8018D4A0 A3230013 */        sb $v1, 0x13($t9)
  /* 18C1E4 8018D4A4 0C063488 */       jal func_ovl64_8018D220
  /* 18C1E8 8018D4A8 8FA40024 */        lw $a0, 0x24($sp)
  /* 18C1EC 8018D4AC 8FA40024 */        lw $a0, 0x24($sp)
  /* 18C1F0 8018D4B0 0C03A466 */       jal ftCommon_SetModelPartLevelDetailAll
  /* 18C1F4 8018D4B4 24050001 */     addiu $a1, $zero, 1
  /* 18C1F8 8018D4B8 8FA9001C */        lw $t1, 0x1c($sp)
  /* 18C1FC 8018D4BC 240F0001 */     addiu $t7, $zero, 1
  /* 18C200 8018D4C0 3C0A8019 */       lui $t2, %hi(D_ovl64_8018E4E8)
  /* 18C204 8018D4C4 A12F000F */        sb $t7, 0xf($t1)
  /* 18C208 8018D4C8 8D4AE4E8 */        lw $t2, %lo(D_ovl64_8018E4E8)($t2)
  /* 18C20C 8018D4CC 8D4C0074 */        lw $t4, 0x74($t2)
  /* 18C210 8018D4D0 8D820008 */        lw $v0, 8($t4)
  /* 18C214 8018D4D4 944D0024 */       lhu $t5, 0x24($v0)
  /* 18C218 8018D4D8 31ABFFFB */      andi $t3, $t5, 0xfffb
  /* 18C21C 8018D4DC A44B0024 */        sh $t3, 0x24($v0)
  .L8018D4E0:
  /* 18C220 8018D4E0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18C224 8018D4E4 27BD0028 */     addiu $sp, $sp, 0x28
  /* 18C228 8018D4E8 03E00008 */        jr $ra
  /* 18C22C 8018D4EC 00000000 */       nop 

  glabel jtgt_ovl64_8018D4F0
  /* 18C230 8018D4F0 3C0E800A */       lui $t6, %hi(gpBattleState)
  /* 18C234 8018D4F4 8DCE50E8 */        lw $t6, %lo(gpBattleState)($t6)
  /* 18C238 8018D4F8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18C23C 8018D4FC AFBF0014 */        sw $ra, 0x14($sp)
  /* 18C240 8018D500 8DCF00EC */        lw $t7, 0xec($t6)
  /* 18C244 8018D504 0C06347B */       jal func_ovl64_8018D1EC
  /* 18C248 8018D508 8DE40084 */        lw $a0, 0x84($t7)
  /* 18C24C 8018D50C 10400002 */      beqz $v0, .L8018D518
  /* 18C250 8018D510 3C018019 */       lui $at, %hi(D_ovl64_8018E4E0)
  /* 18C254 8018D514 AC20E4E0 */        sw $zero, %lo(D_ovl64_8018E4E0)($at)
  .L8018D518:
  /* 18C258 8018D518 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18C25C 8018D51C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18C260 8018D520 03E00008 */        jr $ra
  /* 18C264 8018D524 00000000 */       nop 

  glabel jtgt_ovl64_8018D528
  /* 18C268 8018D528 3C06800A */       lui $a2, %hi(gpBattleState)
  /* 18C26C 8018D52C 24C650E8 */     addiu $a2, $a2, %lo(gpBattleState)
  /* 18C270 8018D530 8CCE0000 */        lw $t6, ($a2) # gpBattleState + 0
  /* 18C274 8018D534 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 18C278 8018D538 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18C27C 8018D53C 8DCF00EC */        lw $t7, 0xec($t6)
  /* 18C280 8018D540 0C0433C8 */       jal func_ovl2_8010CF20
  /* 18C284 8018D544 AFAF001C */        sw $t7, 0x1c($sp)
  /* 18C288 8018D548 3C06800A */       lui $a2, %hi(gpBattleState)
  /* 18C28C 8018D54C 24C650E8 */     addiu $a2, $a2, %lo(gpBattleState)
  /* 18C290 8018D550 8CD90000 */        lw $t9, ($a2) # gpBattleState + 0
  /* 18C294 8018D554 8FA4001C */        lw $a0, 0x1c($sp)
  /* 18C298 8018D558 24180009 */     addiu $t8, $zero, 9
  /* 18C29C 8018D55C 8F2801D4 */        lw $t0, 0x1d4($t9)
  /* 18C2A0 8018D560 24050002 */     addiu $a1, $zero, 2
  /* 18C2A4 8018D564 8D090084 */        lw $t1, 0x84($t0)
  /* 18C2A8 8018D568 A1380013 */        sb $t8, 0x13($t1)
  /* 18C2AC 8018D56C 8CC30000 */        lw $v1, ($a2) # gpBattleState + 0
  /* 18C2B0 8018D570 8C6A01D4 */        lw $t2, 0x1d4($v1)
  /* 18C2B4 8018D574 8C6C0160 */        lw $t4, 0x160($v1)
  /* 18C2B8 8018D578 8D4B0084 */        lw $t3, 0x84($t2)
  /* 18C2BC 8018D57C 8D8D0084 */        lw $t5, 0x84($t4)
  /* 18C2C0 8018D580 91620013 */       lbu $v0, 0x13($t3)
  /* 18C2C4 8018D584 A1A20013 */        sb $v0, 0x13($t5)
  /* 18C2C8 8018D588 8C8E0084 */        lw $t6, 0x84($a0)
  /* 18C2CC 8018D58C A1C20013 */        sb $v0, 0x13($t6)
  /* 18C2D0 8018D590 8CCF0000 */        lw $t7, ($a2) # gpBattleState + 0
  /* 18C2D4 8018D594 8DF90078 */        lw $t9, 0x78($t7)
  /* 18C2D8 8018D598 8F280084 */        lw $t0, 0x84($t9)
  /* 18C2DC 8018D59C 0C03A466 */       jal ftCommon_SetModelPartLevelDetailAll
  /* 18C2E0 8018D5A0 A1020013 */        sb $v0, 0x13($t0)
  /* 18C2E4 8018D5A4 8FA9001C */        lw $t1, 0x1c($sp)
  /* 18C2E8 8018D5A8 24180002 */     addiu $t8, $zero, 2
  /* 18C2EC 8018D5AC 3C0B8019 */       lui $t3, %hi(D_ovl64_8018E4E8)
  /* 18C2F0 8018D5B0 8D2A0084 */        lw $t2, 0x84($t1)
  /* 18C2F4 8018D5B4 A158000F */        sb $t8, 0xf($t2)
  /* 18C2F8 8018D5B8 8D6BE4E8 */        lw $t3, %lo(D_ovl64_8018E4E8)($t3)
  /* 18C2FC 8018D5BC 8D6C0074 */        lw $t4, 0x74($t3)
  /* 18C300 8018D5C0 8D820008 */        lw $v0, 8($t4)
  /* 18C304 8018D5C4 944D0024 */       lhu $t5, 0x24($v0)
  /* 18C308 8018D5C8 35AE0004 */       ori $t6, $t5, 4
  /* 18C30C 8018D5CC A44E0024 */        sh $t6, 0x24($v0)
  /* 18C310 8018D5D0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18C314 8018D5D4 27BD0020 */     addiu $sp, $sp, 0x20
  /* 18C318 8018D5D8 03E00008 */        jr $ra
  /* 18C31C 8018D5DC 00000000 */       nop 

glabel func_ovl64_8018D5E0
  /* 18C320 8018D5E0 240E0001 */     addiu $t6, $zero, 1
  /* 18C324 8018D5E4 3C018013 */       lui $at, %hi(D_ovl2_80131580)
  /* 18C328 8018D5E8 03E00008 */        jr $ra
  /* 18C32C 8018D5EC A02E1580 */        sb $t6, %lo(D_ovl2_80131580)($at)

glabel func_ovl64_8018D5F0
  /* 18C330 8018D5F0 3C02800A */       lui $v0, %hi(gSceneData)
  /* 18C334 8018D5F4 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 18C338 8018D5F8 904E0000 */       lbu $t6, ($v0) # gSceneData + 0
  /* 18C33C 8018D5FC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18C340 8018D600 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18C344 8018D604 240F001B */     addiu $t7, $zero, 0x1b
  /* 18C348 8018D608 A04F0000 */        sb $t7, ($v0) # gSceneData + 0
  /* 18C34C 8018D60C 0C00171D */       jal func_80005C74
  /* 18C350 8018D610 A04E0001 */        sb $t6, 1($v0) # gSceneData + 1
  /* 18C354 8018D614 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18C358 8018D618 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18C35C 8018D61C 03E00008 */        jr $ra
  /* 18C360 8018D620 00000000 */       nop 

glabel func_ovl64_8018D624
  /* 18C364 8018D624 3C028019 */       lui $v0, %hi(D_ovl64_8018E4EC)
  /* 18C368 8018D628 8C42E4EC */        lw $v0, %lo(D_ovl64_8018E4EC)($v0)
  /* 18C36C 8018D62C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18C370 8018D630 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18C374 8018D634 944E0000 */       lhu $t6, ($v0)
  /* 18C378 8018D638 3C018019 */       lui $at, %hi(D_ovl64_8018E4E0)
  /* 18C37C 8018D63C AC2EE4E0 */        sw $t6, %lo(D_ovl64_8018E4E0)($at)
  /* 18C380 8018D640 8C430004 */        lw $v1, 4($v0)
  /* 18C384 8018D644 50600006 */      beql $v1, $zero, .L8018D660
  /* 18C388 8018D648 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18C38C 8018D64C 0060F809 */      jalr $v1
  /* 18C390 8018D650 00000000 */       nop 
  /* 18C394 8018D654 3C028019 */       lui $v0, %hi(D_ovl64_8018E4EC)
  /* 18C398 8018D658 8C42E4EC */        lw $v0, %lo(D_ovl64_8018E4EC)($v0)
  /* 18C39C 8018D65C 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018D660:
  /* 18C3A0 8018D660 244F000C */     addiu $t7, $v0, 0xc
  /* 18C3A4 8018D664 3C018019 */       lui $at, %hi(D_ovl64_8018E4EC)
  /* 18C3A8 8018D668 AC2FE4EC */        sw $t7, %lo(D_ovl64_8018E4EC)($at)
  /* 18C3AC 8018D66C 03E00008 */        jr $ra
  /* 18C3B0 8018D670 27BD0018 */     addiu $sp, $sp, 0x18

glabel func_ovl64_8018D674
  /* 18C3B4 8018D674 3C0E8019 */       lui $t6, %hi(D_ovl64_8018E4EC)
  /* 18C3B8 8018D678 8DCEE4EC */        lw $t6, %lo(D_ovl64_8018E4EC)($t6)
  /* 18C3BC 8018D67C 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 18C3C0 8018D680 AFBF001C */        sw $ra, 0x1c($sp)
  /* 18C3C4 8018D684 AFB00018 */        sw $s0, 0x18($sp)
  /* 18C3C8 8018D688 8DC20008 */        lw $v0, 8($t6)
  /* 18C3CC 8018D68C 10400003 */      beqz $v0, .L8018D69C
  /* 18C3D0 8018D690 00000000 */       nop 
  /* 18C3D4 8018D694 0040F809 */      jalr $v0
  /* 18C3D8 8018D698 00000000 */       nop 
  .L8018D69C:
  /* 18C3DC 8018D69C 3C108019 */       lui $s0, %hi(D_ovl64_8018E4E0)
  /* 18C3E0 8018D6A0 2610E4E0 */     addiu $s0, $s0, %lo(D_ovl64_8018E4E0)
  /* 18C3E4 8018D6A4 8E020000 */        lw $v0, ($s0) # D_ovl64_8018E4E0 + 0
  /* 18C3E8 8018D6A8 54400007 */      bnel $v0, $zero, .L8018D6C8
  /* 18C3EC 8018D6AC 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018D6B0:
  /* 18C3F0 8018D6B0 0C063589 */       jal func_ovl64_8018D624
  /* 18C3F4 8018D6B4 00000000 */       nop 
  /* 18C3F8 8018D6B8 8E020000 */        lw $v0, ($s0) # D_ovl64_8018E4E0 + 0
  /* 18C3FC 8018D6BC 1040FFFC */      beqz $v0, .L8018D6B0
  /* 18C400 8018D6C0 00000000 */       nop 
  /* 18C404 8018D6C4 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018D6C8:
  /* 18C408 8018D6C8 244FFFFF */     addiu $t7, $v0, -1
  /* 18C40C 8018D6CC AE0F0000 */        sw $t7, ($s0) # D_ovl64_8018E4E0 + 0
  /* 18C410 8018D6D0 8FB00018 */        lw $s0, 0x18($sp)
  /* 18C414 8018D6D4 03E00008 */        jr $ra
  /* 18C418 8018D6D8 27BD0020 */     addiu $sp, $sp, 0x20

glabel func_ovl64_8018D6DC
  /* 18C41C 8018D6DC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18C420 8018D6E0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18C424 8018D6E4 0C06344D */       jal func_ovl64_8018D134
  /* 18C428 8018D6E8 AFA40018 */        sw $a0, 0x18($sp)
  /* 18C42C 8018D6EC 0C06359D */       jal func_ovl64_8018D674
  /* 18C430 8018D6F0 00000000 */       nop 
  /* 18C434 8018D6F4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18C438 8018D6F8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18C43C 8018D6FC 03E00008 */        jr $ra
  /* 18C440 8018D700 00000000 */       nop 

glabel func_ovl64_8018D704
  /* 18C444 8018D704 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 18C448 8018D708 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18C44C 8018D70C 3C058019 */       lui $a1, %hi(func_ovl64_8018D6DC)
  /* 18C450 8018D710 24A5D6DC */     addiu $a1, $a1, %lo(func_ovl64_8018D6DC)
  /* 18C454 8018D714 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 18C458 8018D718 2406000A */     addiu $a2, $zero, 0xa
  /* 18C45C 8018D71C 0C00265A */       jal omMakeGObjCommon
  /* 18C460 8018D720 3C078000 */       lui $a3, 0x8000
  /* 18C464 8018D724 3C0E8019 */       lui $t6, %hi(D_ovl64_8018E180)
  /* 18C468 8018D728 25CEE180 */     addiu $t6, $t6, %lo(D_ovl64_8018E180)
  /* 18C46C 8018D72C 3C018019 */       lui $at, %hi(D_ovl64_8018E4EC)
  /* 18C470 8018D730 AC2EE4EC */        sw $t6, %lo(D_ovl64_8018E4EC)($at)
  /* 18C474 8018D734 3C018019 */       lui $at, %hi(D_ovl64_8018E4E0)
  /* 18C478 8018D738 AFA2001C */        sw $v0, 0x1c($sp)
  /* 18C47C 8018D73C 0C06359D */       jal func_ovl64_8018D674
  /* 18C480 8018D740 AC20E4E0 */        sw $zero, %lo(D_ovl64_8018E4E0)($at)
  /* 18C484 8018D744 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18C488 8018D748 8FA2001C */        lw $v0, 0x1c($sp)
  /* 18C48C 8018D74C 27BD0020 */     addiu $sp, $sp, 0x20
  /* 18C490 8018D750 03E00008 */        jr $ra
  /* 18C494 8018D754 00000000 */       nop 

glabel func_ovl64_8018D758
  /* 18C498 8018D758 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 18C49C 8018D75C AFBF001C */        sw $ra, 0x1c($sp)
  /* 18C4A0 8018D760 240E0008 */     addiu $t6, $zero, 8
  /* 18C4A4 8018D764 AFB00018 */        sw $s0, 0x18($sp)
  /* 18C4A8 8018D768 AFA50044 */        sw $a1, 0x44($sp)
  /* 18C4AC 8018D76C 0C006265 */       jal lbRandom_GetIntRange
  /* 18C4B0 8018D770 01C42023 */      subu $a0, $t6, $a0
  /* 18C4B4 8018D774 3C048019 */       lui $a0, %hi(D_ovl64_8018E170)
  /* 18C4B8 8018D778 3C058019 */       lui $a1, %hi(D_ovl64_8018E4F0)
  /* 18C4BC 8018D77C 3C078019 */       lui $a3, %hi(D_ovl64_8018E500)
  /* 18C4C0 8018D780 24E7E500 */     addiu $a3, $a3, %lo(D_ovl64_8018E500)
  /* 18C4C4 8018D784 24A5E4F0 */     addiu $a1, $a1, %lo(D_ovl64_8018E4F0)
  /* 18C4C8 8018D788 2484E170 */     addiu $a0, $a0, %lo(D_ovl64_8018E170)
  /* 18C4CC 8018D78C 00001825 */        or $v1, $zero, $zero
  /* 18C4D0 8018D790 2406FFFF */     addiu $a2, $zero, -1
  .L8018D794:
  /* 18C4D4 8018D794 84AF0000 */        lh $t7, ($a1) # D_ovl64_8018E4F0 + 0
  /* 18C4D8 8018D798 84900000 */        lh $s0, ($a0) # D_ovl64_8018E170 + 0
  /* 18C4DC 8018D79C 50CF0007 */      beql $a2, $t7, .L8018D7BC
  /* 18C4E0 8018D7A0 24A50002 */     addiu $a1, $a1, 2
  /* 18C4E4 8018D7A4 54430004 */      bnel $v0, $v1, .L8018D7B8
  /* 18C4E8 8018D7A8 24630001 */     addiu $v1, $v1, 1
  /* 18C4EC 8018D7AC 10000005 */         b .L8018D7C4
  /* 18C4F0 8018D7B0 A4A60000 */        sh $a2, ($a1) # D_ovl64_8018E4F0 + 0
  /* 18C4F4 8018D7B4 24630001 */     addiu $v1, $v1, 1
  .L8018D7B8:
  /* 18C4F8 8018D7B8 24A50002 */     addiu $a1, $a1, 2
  .L8018D7BC:
  /* 18C4FC 8018D7BC 14A7FFF5 */       bne $a1, $a3, .L8018D794
  /* 18C500 8018D7C0 24840002 */     addiu $a0, $a0, 2
  .L8018D7C4:
  /* 18C504 8018D7C4 0C03F1E9 */       jal func_ovl2_800FC7A4
  /* 18C508 8018D7C8 02002025 */        or $a0, $s0, $zero
  /* 18C50C 8018D7CC 10400006 */      beqz $v0, .L8018D7E8
  /* 18C510 8018D7D0 02002025 */        or $a0, $s0, $zero
  /* 18C514 8018D7D4 0C03F205 */       jal func_ovl2_800FC814
  /* 18C518 8018D7D8 27A5002C */     addiu $a1, $sp, 0x2c
  /* 18C51C 8018D7DC 8FA4002C */        lw $a0, 0x2c($sp)
  /* 18C520 8018D7E0 0C03F225 */       jal func_ovl2_800FC894
  /* 18C524 8018D7E4 8FA50044 */        lw $a1, 0x44($sp)
  .L8018D7E8:
  /* 18C528 8018D7E8 8FBF001C */        lw $ra, 0x1c($sp)
  /* 18C52C 8018D7EC 8FB00018 */        lw $s0, 0x18($sp)
  /* 18C530 8018D7F0 27BD0040 */     addiu $sp, $sp, 0x40
  /* 18C534 8018D7F4 03E00008 */        jr $ra
  /* 18C538 8018D7F8 00000000 */       nop 

glabel func_ovl64_8018D7FC
  /* 18C53C 8018D7FC AFA40000 */        sw $a0, ($sp)
  /* 18C540 8018D800 3084FFFF */      andi $a0, $a0, 0xffff
  /* 18C544 8018D804 00001025 */        or $v0, $zero, $zero
  /* 18C548 8018D808 00001825 */        or $v1, $zero, $zero
  /* 18C54C 8018D80C 24060010 */     addiu $a2, $zero, 0x10
  .L8018D810:
  /* 18C550 8018D810 308E0001 */      andi $t6, $a0, 1
  /* 18C554 8018D814 11C00002 */      beqz $t6, .L8018D820
  /* 18C558 8018D818 00802825 */        or $a1, $a0, $zero
  /* 18C55C 8018D81C 24630001 */     addiu $v1, $v1, 1
  .L8018D820:
  /* 18C560 8018D820 00052043 */       sra $a0, $a1, 1
  /* 18C564 8018D824 3085FFFF */      andi $a1, $a0, 0xffff
  /* 18C568 8018D828 30AF0001 */      andi $t7, $a1, 1
  /* 18C56C 8018D82C 11E00002 */      beqz $t7, .L8018D838
  /* 18C570 8018D830 00052043 */       sra $a0, $a1, 1
  /* 18C574 8018D834 24630001 */     addiu $v1, $v1, 1
  .L8018D838:
  /* 18C578 8018D838 3085FFFF */      andi $a1, $a0, 0xffff
  /* 18C57C 8018D83C 30B80001 */      andi $t8, $a1, 1
  /* 18C580 8018D840 13000002 */      beqz $t8, .L8018D84C
  /* 18C584 8018D844 00052043 */       sra $a0, $a1, 1
  /* 18C588 8018D848 24630001 */     addiu $v1, $v1, 1
  .L8018D84C:
  /* 18C58C 8018D84C 3085FFFF */      andi $a1, $a0, 0xffff
  /* 18C590 8018D850 30B90001 */      andi $t9, $a1, 1
  /* 18C594 8018D854 13200002 */      beqz $t9, .L8018D860
  /* 18C598 8018D858 24420004 */     addiu $v0, $v0, 4
  /* 18C59C 8018D85C 24630001 */     addiu $v1, $v1, 1
  .L8018D860:
  /* 18C5A0 8018D860 00052043 */       sra $a0, $a1, 1
  /* 18C5A4 8018D864 1446FFEA */       bne $v0, $a2, .L8018D810
  /* 18C5A8 8018D868 3084FFFF */      andi $a0, $a0, 0xffff
  /* 18C5AC 8018D86C 03E00008 */        jr $ra
  /* 18C5B0 8018D870 00601025 */        or $v0, $v1, $zero

glabel func_ovl64_8018D874
  /* 18C5B4 8018D874 AFA50004 */        sw $a1, 4($sp)
  /* 18C5B8 8018D878 30A5FFFF */      andi $a1, $a1, 0xffff
  /* 18C5BC 8018D87C AFA40000 */        sw $a0, ($sp)
  /* 18C5C0 8018D880 3082FFFF */      andi $v0, $a0, 0xffff
  /* 18C5C4 8018D884 2403FFFF */     addiu $v1, $zero, -1
  /* 18C5C8 8018D888 24C60001 */     addiu $a2, $a2, 1
  /* 18C5CC 8018D88C 24630001 */     addiu $v1, $v1, 1
  .L8018D890:
  /* 18C5D0 8018D890 240E0001 */     addiu $t6, $zero, 1
  /* 18C5D4 8018D894 006E2004 */      sllv $a0, $t6, $v1
  /* 18C5D8 8018D898 00447824 */       and $t7, $v0, $a0
  /* 18C5DC 8018D89C 11E00004 */      beqz $t7, .L8018D8B0
  /* 18C5E0 8018D8A0 00A4C024 */       and $t8, $a1, $a0
  /* 18C5E4 8018D8A4 17000002 */      bnez $t8, .L8018D8B0
  /* 18C5E8 8018D8A8 00000000 */       nop 
  /* 18C5EC 8018D8AC 24C6FFFF */     addiu $a2, $a2, -1
  .L8018D8B0:
  /* 18C5F0 8018D8B0 54C0FFF7 */      bnel $a2, $zero, .L8018D890
  /* 18C5F4 8018D8B4 24630001 */     addiu $v1, $v1, 1
  /* 18C5F8 8018D8B8 03E00008 */        jr $ra
  /* 18C5FC 8018D8BC 00601025 */        or $v0, $v1, $zero

glabel func_ovl64_8018D8C0
  /* 18C600 8018D8C0 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 18C604 8018D8C4 28810002 */      slti $at, $a0, 2
  /* 18C608 8018D8C8 10200005 */      beqz $at, .L8018D8E0
  /* 18C60C 8018D8CC AFBF0014 */        sw $ra, 0x14($sp)
  /* 18C610 8018D8D0 3C02800A */       lui $v0, %hi((gSceneData + 0xD))
  /* 18C614 8018D8D4 00441021 */      addu $v0, $v0, $a0
  /* 18C618 8018D8D8 1000001A */         b .L8018D944
  /* 18C61C 8018D8DC 90424ADD */       lbu $v0, %lo((gSceneData + 0xD))($v0)
  .L8018D8E0:
  /* 18C620 8018D8E0 3C04800A */       lui $a0, %hi((gSaveData + 0x458))
  /* 18C624 8018D8E4 94844938 */       lhu $a0, %lo((gSaveData + 0x458))($a0)
  /* 18C628 8018D8E8 3484036F */       ori $a0, $a0, 0x36f
  /* 18C62C 8018D8EC 3084FFFF */      andi $a0, $a0, 0xffff
  /* 18C630 8018D8F0 0C0635FF */       jal func_ovl64_8018D7FC
  /* 18C634 8018D8F4 A7A40026 */        sh $a0, 0x26($sp)
  /* 18C638 8018D8F8 3C048019 */       lui $a0, %hi(D_ovl64_8018E4E4)
  /* 18C63C 8018D8FC 9484E4E4 */       lhu $a0, %lo(D_ovl64_8018E4E4)($a0)
  /* 18C640 8018D900 0C0635FF */       jal func_ovl64_8018D7FC
  /* 18C644 8018D904 AFA20018 */        sw $v0, 0x18($sp)
  /* 18C648 8018D908 8FAE0018 */        lw $t6, 0x18($sp)
  /* 18C64C 8018D90C 0C006265 */       jal lbRandom_GetIntRange
  /* 18C650 8018D910 01C22023 */      subu $a0, $t6, $v0
  /* 18C654 8018D914 3C058019 */       lui $a1, %hi(D_ovl64_8018E4E4)
  /* 18C658 8018D918 94A5E4E4 */       lhu $a1, %lo(D_ovl64_8018E4E4)($a1)
  /* 18C65C 8018D91C 97A40026 */       lhu $a0, 0x26($sp)
  /* 18C660 8018D920 0C06361D */       jal func_ovl64_8018D874
  /* 18C664 8018D924 00403025 */        or $a2, $v0, $zero
  /* 18C668 8018D928 3C0F8019 */       lui $t7, %hi(D_ovl64_8018E4E4)
  /* 18C66C 8018D92C 95EFE4E4 */       lhu $t7, %lo(D_ovl64_8018E4E4)($t7)
  /* 18C670 8018D930 24180001 */     addiu $t8, $zero, 1
  /* 18C674 8018D934 0058C804 */      sllv $t9, $t8, $v0
  /* 18C678 8018D938 3C018019 */       lui $at, %hi(D_ovl64_8018E4E4)
  /* 18C67C 8018D93C 01F94025 */        or $t0, $t7, $t9
  /* 18C680 8018D940 A428E4E4 */        sh $t0, %lo(D_ovl64_8018E4E4)($at)
  .L8018D944:
  /* 18C684 8018D944 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18C688 8018D948 27BD0028 */     addiu $sp, $sp, 0x28
  /* 18C68C 8018D94C 03E00008 */        jr $ra
  /* 18C690 8018D950 00000000 */       nop 

glabel func_ovl64_8018D954
  /* 18C694 8018D954 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18C698 8018D958 28810002 */      slti $at, $a0, 2
  /* 18C69C 8018D95C 10200005 */      beqz $at, .L8018D974
  /* 18C6A0 8018D960 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18C6A4 8018D964 0C006265 */       jal lbRandom_GetIntRange
  /* 18C6A8 8018D968 2404001E */     addiu $a0, $zero, 0x1e
  /* 18C6AC 8018D96C 10000005 */         b .L8018D984
  /* 18C6B0 8018D970 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018D974:
  /* 18C6B4 8018D974 0C006265 */       jal lbRandom_GetIntRange
  /* 18C6B8 8018D978 2404003C */     addiu $a0, $zero, 0x3c
  /* 18C6BC 8018D97C 24420028 */     addiu $v0, $v0, 0x28
  /* 18C6C0 8018D980 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018D984:
  /* 18C6C4 8018D984 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18C6C8 8018D988 03E00008 */        jr $ra
  /* 18C6CC 8018D98C 00000000 */       nop 

glabel func_ovl64_8018D990
  /* 18C6D0 8018D990 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 18C6D4 8018D994 AFB20020 */        sw $s2, 0x20($sp)
  /* 18C6D8 8018D998 3C038019 */       lui $v1, %hi(D_ovl64_8018E2F0)
  /* 18C6DC 8018D99C 3C0E800A */       lui $t6, %hi(gDefaultBattleState)
  /* 18C6E0 8018D9A0 2463E2F0 */     addiu $v1, $v1, %lo(D_ovl64_8018E2F0)
  /* 18C6E4 8018D9A4 3C12800A */       lui $s2, %hi(gpBattleState)
  /* 18C6E8 8018D9A8 3C02800A */       lui $v0, %hi(gSceneData)
  /* 18C6EC 8018D9AC 25CE3FC8 */     addiu $t6, $t6, %lo(gDefaultBattleState)
  /* 18C6F0 8018D9B0 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 18C6F4 8018D9B4 265250E8 */     addiu $s2, $s2, %lo(gpBattleState)
  /* 18C6F8 8018D9B8 AFBF002C */        sw $ra, 0x2c($sp)
  /* 18C6FC 8018D9BC AFB40028 */        sw $s4, 0x28($sp)
  /* 18C700 8018D9C0 AFB30024 */        sw $s3, 0x24($sp)
  /* 18C704 8018D9C4 AFB1001C */        sw $s1, 0x1c($sp)
  /* 18C708 8018D9C8 AFB00018 */        sw $s0, 0x18($sp)
  /* 18C70C 8018D9CC 25C801EC */     addiu $t0, $t6, 0x1ec
  /* 18C710 8018D9D0 0060C825 */        or $t9, $v1, $zero
  .L8018D9D4:
  /* 18C714 8018D9D4 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 18C718 8018D9D8 25CE000C */     addiu $t6, $t6, 0xc
  /* 18C71C 8018D9DC 2739000C */     addiu $t9, $t9, 0xc
  /* 18C720 8018D9E0 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 18C724 8018D9E4 8DCFFFF8 */        lw $t7, -8($t6) # gDefaultBattleState + -8
  /* 18C728 8018D9E8 AF2FFFF8 */        sw $t7, -8($t9)
  /* 18C72C 8018D9EC 8DD8FFFC */        lw $t8, -4($t6) # gDefaultBattleState + -4
  /* 18C730 8018D9F0 15C8FFF8 */       bne $t6, $t0, .L8018D9D4
  /* 18C734 8018D9F4 AF38FFFC */        sw $t8, -4($t9)
  /* 18C738 8018D9F8 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 18C73C 8018D9FC 3C0B8019 */       lui $t3, %hi(D_ovl64_8018E168)
  /* 18C740 8018DA00 240F0001 */     addiu $t7, $zero, 1
  /* 18C744 8018DA04 AF380000 */        sw $t8, ($t9)
  /* 18C748 8018DA08 904A0040 */       lbu $t2, 0x40($v0) # gSceneData + 64
  /* 18C74C 8018DA0C 904D0040 */       lbu $t5, 0x40($v0) # gSceneData + 64
  /* 18C750 8018DA10 AE430000 */        sw $v1, ($s2) # gpBattleState + 0
  /* 18C754 8018DA14 A0600000 */        sb $zero, ($v1) # D_ovl64_8018E2F0 + 0
  /* 18C758 8018DA18 016A5821 */      addu $t3, $t3, $t2
  /* 18C75C 8018DA1C 25A80001 */     addiu $t0, $t5, 1
  /* 18C760 8018DA20 916BE168 */       lbu $t3, %lo(D_ovl64_8018E168)($t3)
  /* 18C764 8018DA24 310E00FF */      andi $t6, $t0, 0xff
  /* 18C768 8018DA28 29C10008 */      slti $at, $t6, 8
  /* 18C76C 8018DA2C A0480040 */        sb $t0, 0x40($v0) # gSceneData + 64
  /* 18C770 8018DA30 14200002 */      bnez $at, .L8018DA3C
  /* 18C774 8018DA34 A06B0001 */        sb $t3, 1($v1) # D_ovl64_8018E2F0 + 1
  /* 18C778 8018DA38 A0400040 */        sb $zero, 0x40($v0) # gSceneData + 64
  .L8018DA3C:
  /* 18C77C 8018DA3C 9059000E */       lbu $t9, 0xe($v0) # gSceneData + 14
  /* 18C780 8018DA40 9049000D */       lbu $t1, 0xd($v0) # gSceneData + 13
  /* 18C784 8018DA44 240A0001 */     addiu $t2, $zero, 1
  /* 18C788 8018DA48 032FC004 */      sllv $t8, $t7, $t9
  /* 18C78C 8018DA4C 012A5804 */      sllv $t3, $t2, $t1
  /* 18C790 8018DA50 030B6025 */        or $t4, $t8, $t3
  /* 18C794 8018DA54 3C018019 */       lui $at, %hi(D_ovl64_8018E4E4)
  /* 18C798 8018DA58 A42CE4E4 */        sh $t4, %lo(D_ovl64_8018E4E4)($at)
  /* 18C79C 8018DA5C 00008825 */        or $s1, $zero, $zero
  /* 18C7A0 8018DA60 00008025 */        or $s0, $zero, $zero
  /* 18C7A4 8018DA64 24140009 */     addiu $s4, $zero, 9
  /* 18C7A8 8018DA68 24130001 */     addiu $s3, $zero, 1
  .L8018DA6C:
  /* 18C7AC 8018DA6C 8E4D0000 */        lw $t5, ($s2) # gpBattleState + 0
  /* 18C7B0 8018DA70 02202025 */        or $a0, $s1, $zero
  /* 18C7B4 8018DA74 01B04021 */      addu $t0, $t5, $s0
  /* 18C7B8 8018DA78 0C063630 */       jal func_ovl64_8018D8C0
  /* 18C7BC 8018DA7C A1130022 */        sb $s3, 0x22($t0)
  /* 18C7C0 8018DA80 8E4E0000 */        lw $t6, ($s2) # gpBattleState + 0
  /* 18C7C4 8018DA84 02202025 */        or $a0, $s1, $zero
  /* 18C7C8 8018DA88 01D07821 */      addu $t7, $t6, $s0
  /* 18C7CC 8018DA8C A1E20023 */        sb $v0, 0x23($t7)
  /* 18C7D0 8018DA90 8E590000 */        lw $t9, ($s2) # gpBattleState + 0
  /* 18C7D4 8018DA94 03305021 */      addu $t2, $t9, $s0
  /* 18C7D8 8018DA98 0C063655 */       jal func_ovl64_8018D954
  /* 18C7DC 8018DA9C A1540020 */        sb $s4, 0x20($t2)
  /* 18C7E0 8018DAA0 8E490000 */        lw $t1, ($s2) # gpBattleState + 0
  /* 18C7E4 8018DAA4 26310001 */     addiu $s1, $s1, 1
  /* 18C7E8 8018DAA8 2A210004 */      slti $at, $s1, 4
  /* 18C7EC 8018DAAC 0130C021 */      addu $t8, $t1, $s0
  /* 18C7F0 8018DAB0 26100074 */     addiu $s0, $s0, 0x74
  /* 18C7F4 8018DAB4 1420FFED */      bnez $at, .L8018DA6C
  /* 18C7F8 8018DAB8 AF02006C */        sw $v0, 0x6c($t8)
  /* 18C7FC 8018DABC 8E4B0000 */        lw $t3, ($s2) # gpBattleState + 0
  /* 18C800 8018DAC0 240C0004 */     addiu $t4, $zero, 4
  /* 18C804 8018DAC4 3C028019 */       lui $v0, %hi(D_ovl64_8018E4F0)
  /* 18C808 8018DAC8 A1600004 */        sb $zero, 4($t3)
  /* 18C80C 8018DACC 8E4D0000 */        lw $t5, ($s2) # gpBattleState + 0
  /* 18C810 8018DAD0 3C038019 */       lui $v1, %hi(D_ovl64_8018E500)
  /* 18C814 8018DAD4 2463E500 */     addiu $v1, $v1, %lo(D_ovl64_8018E500)
  /* 18C818 8018DAD8 2442E4F0 */     addiu $v0, $v0, %lo(D_ovl64_8018E4F0)
  /* 18C81C 8018DADC A1AC0005 */        sb $t4, 5($t5)
  .L8018DAE0:
  /* 18C820 8018DAE0 24420008 */     addiu $v0, $v0, 8
  /* 18C824 8018DAE4 A440FFFA */        sh $zero, -6($v0) # D_ovl64_8018E4F0 + -6
  /* 18C828 8018DAE8 A440FFFC */        sh $zero, -4($v0) # D_ovl64_8018E4F0 + -4
  /* 18C82C 8018DAEC A440FFFE */        sh $zero, -2($v0) # D_ovl64_8018E4F0 + -2
  /* 18C830 8018DAF0 1443FFFB */       bne $v0, $v1, .L8018DAE0
  /* 18C834 8018DAF4 A440FFF8 */        sh $zero, -8($v0) # D_ovl64_8018E4F0 + -8
  /* 18C838 8018DAF8 8FBF002C */        lw $ra, 0x2c($sp)
  /* 18C83C 8018DAFC 8FB00018 */        lw $s0, 0x18($sp)
  /* 18C840 8018DB00 8FB1001C */        lw $s1, 0x1c($sp)
  /* 18C844 8018DB04 8FB20020 */        lw $s2, 0x20($sp)
  /* 18C848 8018DB08 8FB30024 */        lw $s3, 0x24($sp)
  /* 18C84C 8018DB0C 8FB40028 */        lw $s4, 0x28($sp)
  /* 18C850 8018DB10 03E00008 */        jr $ra
  /* 18C854 8018DB14 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl64_8018DB18
  /* 18C858 8018DB18 27BDFFA8 */     addiu $sp, $sp, -0x58
  /* 18C85C 8018DB1C AFB00034 */        sw $s0, 0x34($sp)
  /* 18C860 8018DB20 3C100000 */       lui $s0, %hi(D_NF_0000000C)
  /* 18C864 8018DB24 AFBF0054 */        sw $ra, 0x54($sp)
  /* 18C868 8018DB28 2610000C */     addiu $s0, $s0, %lo(D_NF_0000000C)
  /* 18C86C 8018DB2C AFB70050 */        sw $s7, 0x50($sp)
  /* 18C870 8018DB30 AFB6004C */        sw $s6, 0x4c($sp)
  /* 18C874 8018DB34 AFB50048 */        sw $s5, 0x48($sp)
  /* 18C878 8018DB38 AFB40044 */        sw $s4, 0x44($sp)
  /* 18C87C 8018DB3C AFB30040 */        sw $s3, 0x40($sp)
  /* 18C880 8018DB40 AFB2003C */        sw $s2, 0x3c($sp)
  /* 18C884 8018DB44 AFB10038 */        sw $s1, 0x38($sp)
  /* 18C888 8018DB48 F7B80028 */      sdc1 $f24, 0x28($sp)
  /* 18C88C 8018DB4C F7B60020 */      sdc1 $f22, 0x20($sp)
  /* 18C890 8018DB50 F7B40018 */      sdc1 $f20, 0x18($sp)
  /* 18C894 8018DB54 0C0336F4 */       jal rldm_bytes_needed_to_load
  /* 18C898 8018DB58 02002025 */        or $a0, $s0, $zero
  /* 18C89C 8018DB5C 00402025 */        or $a0, $v0, $zero
  /* 18C8A0 8018DB60 0C001260 */       jal hal_alloc
  /* 18C8A4 8018DB64 24050010 */     addiu $a1, $zero, 0x10
  /* 18C8A8 8018DB68 02002025 */        or $a0, $s0, $zero
  /* 18C8AC 8018DB6C 0C033722 */       jal rldm_get_file_with_external_heap
  /* 18C8B0 8018DB70 00402825 */        or $a1, $v0, $zero
  /* 18C8B4 8018DB74 3C108000 */       lui $s0, %hi(D_NF_80000074)
  /* 18C8B8 8018DB78 00409025 */        or $s2, $v0, $zero
  /* 18C8BC 8018DB7C 02003825 */        or $a3, $s0, $zero
  /* 18C8C0 8018DB80 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 18C8C4 8018DB84 00002825 */        or $a1, $zero, $zero
  /* 18C8C8 8018DB88 0C00265A */       jal omMakeGObjCommon
  /* 18C8CC 8018DB8C 2406000B */     addiu $a2, $zero, 0xb
  /* 18C8D0 8018DB90 3C018019 */       lui $at, %hi(D_ovl64_8018E4E8)
  /* 18C8D4 8018DB94 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 18C8D8 8018DB98 240EFFFF */     addiu $t6, $zero, -1
  /* 18C8DC 8018DB9C AC22E4E8 */        sw $v0, %lo(D_ovl64_8018E4E8)($at)
  /* 18C8E0 8018DBA0 00409825 */        or $s3, $v0, $zero
  /* 18C8E4 8018DBA4 AFAE0010 */        sw $t6, 0x10($sp)
  /* 18C8E8 8018DBA8 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 18C8EC 8018DBAC 00402025 */        or $a0, $v0, $zero
  /* 18C8F0 8018DBB0 24060017 */     addiu $a2, $zero, 0x17
  /* 18C8F4 8018DBB4 0C00277D */       jal func_80009DF4
  /* 18C8F8 8018DBB8 02003825 */        or $a3, $s0, $zero
  /* 18C8FC 8018DBBC 3C014248 */       lui $at, (0x42480000 >> 16) # 50.0
  /* 18C900 8018DBC0 4481C000 */      mtc1 $at, $f24 # 50.0 to cop1
  /* 18C904 8018DBC4 3C014320 */       lui $at, (0x43200000 >> 16) # 160.0
  /* 18C908 8018DBC8 4481B000 */      mtc1 $at, $f22 # 160.0 to cop1
  /* 18C90C 8018DBCC 3C013F00 */       lui $at, (0x3F000000 >> 16) # 0.5
  /* 18C910 8018DBD0 3C15800A */       lui $s5, %hi(gpBattleState)
  /* 18C914 8018DBD4 3C148019 */       lui $s4, %hi(D_ovl64_8018E200)
  /* 18C918 8018DBD8 4481A000 */      mtc1 $at, $f20 # 0.5 to cop1
  /* 18C91C 8018DBDC 2694E200 */     addiu $s4, $s4, %lo(D_ovl64_8018E200)
  /* 18C920 8018DBE0 26B550E8 */     addiu $s5, $s5, %lo(gpBattleState)
  /* 18C924 8018DBE4 00008025 */        or $s0, $zero, $zero
  /* 18C928 8018DBE8 241700E8 */     addiu $s7, $zero, 0xe8
  /* 18C92C 8018DBEC 24160205 */     addiu $s6, $zero, 0x205
  /* 18C930 8018DBF0 241100FF */     addiu $s1, $zero, 0xff
  .L8018DBF4:
  /* 18C934 8018DBF4 8EAF0000 */        lw $t7, ($s5) # gpBattleState + 0
  /* 18C938 8018DBF8 02602025 */        or $a0, $s3, $zero
  /* 18C93C 8018DBFC 01F0C021 */      addu $t8, $t7, $s0
  /* 18C940 8018DC00 93190023 */       lbu $t9, 0x23($t8)
  /* 18C944 8018DC04 00194080 */       sll $t0, $t9, 2
  /* 18C948 8018DC08 02884821 */      addu $t1, $s4, $t0
  /* 18C94C 8018DC0C 8D2A0000 */        lw $t2, ($t1)
  /* 18C950 8018DC10 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 18C954 8018DC14 01522821 */      addu $a1, $t2, $s2
  /* 18C958 8018DC18 844B0014 */        lh $t3, 0x14($v0)
  /* 18C95C 8018DC1C 844E0016 */        lh $t6, 0x16($v0)
  /* 18C960 8018DC20 26100074 */     addiu $s0, $s0, %lo(D_NF_80000074)
  /* 18C964 8018DC24 448B2000 */      mtc1 $t3, $f4
  /* 18C968 8018DC28 A0510028 */        sb $s1, 0x28($v0)
  /* 18C96C 8018DC2C A0510029 */        sb $s1, 0x29($v0)
  /* 18C970 8018DC30 468021A0 */   cvt.s.w $f6, $f4
  /* 18C974 8018DC34 A051002A */        sb $s1, 0x2a($v0)
  /* 18C978 8018DC38 A4560024 */        sh $s6, 0x24($v0)
  /* 18C97C 8018DC3C 46143202 */     mul.s $f8, $f6, $f20
  /* 18C980 8018DC40 448E3000 */      mtc1 $t6, $f6
  /* 18C984 8018DC44 4608B281 */     sub.s $f10, $f22, $f8
  /* 18C988 8018DC48 46803220 */   cvt.s.w $f8, $f6
  /* 18C98C 8018DC4C 4600540D */ trunc.w.s $f16, $f10
  /* 18C990 8018DC50 46144282 */     mul.s $f10, $f8, $f20
  /* 18C994 8018DC54 440D8000 */      mfc1 $t5, $f16
  /* 18C998 8018DC58 00000000 */       nop 
  /* 18C99C 8018DC5C 448D9000 */      mtc1 $t5, $f18
  /* 18C9A0 8018DC60 460AC401 */     sub.s $f16, $f24, $f10
  /* 18C9A4 8018DC64 46809120 */   cvt.s.w $f4, $f18
  /* 18C9A8 8018DC68 4600848D */ trunc.w.s $f18, $f16
  /* 18C9AC 8018DC6C E4440058 */      swc1 $f4, 0x58($v0)
  /* 18C9B0 8018DC70 44189000 */      mfc1 $t8, $f18
  /* 18C9B4 8018DC74 00000000 */       nop 
  /* 18C9B8 8018DC78 44982000 */      mtc1 $t8, $f4
  /* 18C9BC 8018DC7C 00000000 */       nop 
  /* 18C9C0 8018DC80 468021A0 */   cvt.s.w $f6, $f4
  /* 18C9C4 8018DC84 1617FFDB */       bne $s0, $s7, .L8018DBF4
  /* 18C9C8 8018DC88 E446005C */      swc1 $f6, 0x5c($v0)
  /* 18C9CC 8018DC8C 8FBF0054 */        lw $ra, 0x54($sp)
  /* 18C9D0 8018DC90 D7B40018 */      ldc1 $f20, 0x18($sp)
  /* 18C9D4 8018DC94 D7B60020 */      ldc1 $f22, 0x20($sp)
  /* 18C9D8 8018DC98 D7B80028 */      ldc1 $f24, 0x28($sp)
  /* 18C9DC 8018DC9C 8FB00034 */        lw $s0, 0x34($sp)
  /* 18C9E0 8018DCA0 8FB10038 */        lw $s1, 0x38($sp)
  /* 18C9E4 8018DCA4 8FB2003C */        lw $s2, 0x3c($sp)
  /* 18C9E8 8018DCA8 8FB30040 */        lw $s3, 0x40($sp)
  /* 18C9EC 8018DCAC 8FB40044 */        lw $s4, 0x44($sp)
  /* 18C9F0 8018DCB0 8FB50048 */        lw $s5, 0x48($sp)
  /* 18C9F4 8018DCB4 8FB6004C */        lw $s6, 0x4c($sp)
  /* 18C9F8 8018DCB8 8FB70050 */        lw $s7, 0x50($sp)
  /* 18C9FC 8018DCBC 03E00008 */        jr $ra
  /* 18CA00 8018DCC0 27BD0058 */     addiu $sp, $sp, 0x58

glabel func_ovl64_8018DCC4
  /* 18CA04 8018DCC4 27BDFF70 */     addiu $sp, $sp, -0x90
  /* 18CA08 8018DCC8 AFBF0034 */        sw $ra, 0x34($sp)
  /* 18CA0C 8018DCCC AFB40030 */        sw $s4, 0x30($sp)
  /* 18CA10 8018DCD0 AFB3002C */        sw $s3, 0x2c($sp)
  /* 18CA14 8018DCD4 AFB20028 */        sw $s2, 0x28($sp)
  /* 18CA18 8018DCD8 AFB10024 */        sw $s1, 0x24($sp)
  /* 18CA1C 8018DCDC 0C063664 */       jal func_ovl64_8018D990
  /* 18CA20 8018DCE0 AFB00020 */        sw $s0, 0x20($sp)
  /* 18CA24 8018DCE4 0C063830 */       jal func_ovl64_8018E0C0
  /* 18CA28 8018DCE8 00000000 */       nop 
  /* 18CA2C 8018DCEC 240E00FF */     addiu $t6, $zero, 0xff
  /* 18CA30 8018DCF0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 18CA34 8018DCF4 24040009 */     addiu $a0, $zero, 9
  /* 18CA38 8018DCF8 3C058000 */       lui $a1, 0x8000
  /* 18CA3C 8018DCFC 24060064 */     addiu $a2, $zero, 0x64
  /* 18CA40 8018DD00 0C002E7F */       jal func_8000B9FC
  /* 18CA44 8018DD04 24070001 */     addiu $a3, $zero, 1
  /* 18CA48 8018DD08 0C045624 */       jal func_ovl2_80115890
  /* 18CA4C 8018DD0C 00000000 */       nop 
  /* 18CA50 8018DD10 0C03B04C */       jal func_ovl2_800EC130
  /* 18CA54 8018DD14 00000000 */       nop 
  /* 18CA58 8018DD18 0C03F0A1 */       jal func_ovl2_800FC284
  /* 18CA5C 8018DD1C 00000000 */       nop 
  /* 18CA60 8018DD20 2404000A */     addiu $a0, $zero, 0xa
  /* 18CA64 8018DD24 2405000A */     addiu $a1, $zero, 0xa
  /* 18CA68 8018DD28 24060136 */     addiu $a2, $zero, 0x136
  /* 18CA6C 8018DD2C 0C043966 */       jal func_ovl2_8010E598
  /* 18CA70 8018DD30 240700E6 */     addiu $a3, $zero, 0xe6
  /* 18CA74 8018DD34 0C0436D5 */       jal func_ovl2_8010DB54
  /* 18CA78 8018DD38 00000000 */       nop 
  /* 18CA7C 8018DD3C 0C0412F7 */       jal func_ovl2_80104BDC
  /* 18CA80 8018DD40 00000000 */       nop 
  /* 18CA84 8018DD44 0C0436C0 */       jal func_ovl2_8010DB00
  /* 18CA88 8018DD48 00000000 */       nop 
  /* 18CA8C 8018DD4C 0C05B7A8 */       jal itManager_AllocUserData
  /* 18CA90 8018DD50 00000000 */       nop 
  /* 18CA94 8018DD54 0C041580 */       jal func_ovl2_80105600
  /* 18CA98 8018DD58 00000000 */       nop 
  /* 18CA9C 8018DD5C 24040002 */     addiu $a0, $zero, 2
  /* 18CAA0 8018DD60 0C035C65 */       jal func_ovl2_800D7194
  /* 18CAA4 8018DD64 24050004 */     addiu $a1, $zero, 4
  /* 18CAA8 8018DD68 0C05952C */       jal wpManager_AllocUserData
  /* 18CAAC 8018DD6C 00000000 */       nop 
  /* 18CAB0 8018DD70 0C03F4C0 */       jal efManager_AllocUserData
  /* 18CAB4 8018DD74 00000000 */       nop 
  /* 18CAB8 8018DD78 0C04577A */       jal func_ovl2_80115DE8
  /* 18CABC 8018DD7C 240400FF */     addiu $a0, $zero, 0xff
  /* 18CAC0 8018DD80 0C0455B9 */       jal func_ovl2_801156E4
  /* 18CAC4 8018DD84 00000000 */       nop 
  /* 18CAC8 8018DD88 0C0594F8 */       jal func_ovl3_801653E0
  /* 18CACC 8018DD8C 00000000 */       nop 
  /* 18CAD0 8018DD90 3C138004 */       lui $s3, %hi(gContInput)
  /* 18CAD4 8018DD94 3C12800A */       lui $s2, %hi(gpBattleState)
  /* 18CAD8 8018DD98 265250E8 */     addiu $s2, $s2, %lo(gpBattleState)
  /* 18CADC 8018DD9C 26735228 */     addiu $s3, $s3, %lo(gContInput)
  /* 18CAE0 8018DDA0 00008025 */        or $s0, $zero, $zero
  /* 18CAE4 8018DDA4 00008825 */        or $s1, $zero, $zero
  /* 18CAE8 8018DDA8 27B4004C */     addiu $s4, $sp, 0x4c
  .L8018DDAC:
  /* 18CAEC 8018DDAC 3C0F8011 */       lui $t7, %hi(D_ovl2_80116DD0)
  /* 18CAF0 8018DDB0 25EF6DD0 */     addiu $t7, $t7, %lo(D_ovl2_80116DD0)
  /* 18CAF4 8018DDB4 25E9003C */     addiu $t1, $t7, 0x3c
  /* 18CAF8 8018DDB8 02804025 */        or $t0, $s4, $zero
  .L8018DDBC:
  /* 18CAFC 8018DDBC 8DF90000 */        lw $t9, ($t7) # D_ovl2_80116DD0 + 0
  /* 18CB00 8018DDC0 25EF000C */     addiu $t7, $t7, 0xc
  /* 18CB04 8018DDC4 2508000C */     addiu $t0, $t0, 0xc
  /* 18CB08 8018DDC8 AD19FFF4 */        sw $t9, -0xc($t0)
  /* 18CB0C 8018DDCC 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl2_80116DD0 + -8
  /* 18CB10 8018DDD0 AD18FFF8 */        sw $t8, -8($t0)
  /* 18CB14 8018DDD4 8DF9FFFC */        lw $t9, -4($t7) # D_ovl2_80116DD0 + -4
  /* 18CB18 8018DDD8 15E9FFF8 */       bne $t7, $t1, .L8018DDBC
  /* 18CB1C 8018DDDC AD19FFFC */        sw $t9, -4($t0)
  /* 18CB20 8018DDE0 8DF90000 */        lw $t9, ($t7) # D_ovl2_80116DD0 + 0
  /* 18CB24 8018DDE4 AD190000 */        sw $t9, ($t0)
  /* 18CB28 8018DDE8 8E4A0000 */        lw $t2, ($s2) # gpBattleState + 0
  /* 18CB2C 8018DDEC 01515821 */      addu $t3, $t2, $s1
  /* 18CB30 8018DDF0 0C035E1B */       jal func_ovl2_800D786C
  /* 18CB34 8018DDF4 91640023 */       lbu $a0, 0x23($t3)
  /* 18CB38 8018DDF8 8E4C0000 */        lw $t4, ($s2) # gpBattleState + 0
  /* 18CB3C 8018DDFC 02002025 */        or $a0, $s0, $zero
  /* 18CB40 8018DE00 27A50050 */     addiu $a1, $sp, 0x50
  /* 18CB44 8018DE04 01916821 */      addu $t5, $t4, $s1
  /* 18CB48 8018DE08 91AE0023 */       lbu $t6, 0x23($t5)
  /* 18CB4C 8018DE0C 0C0635D6 */       jal func_ovl64_8018D758
  /* 18CB50 8018DE10 AFAE004C */        sw $t6, 0x4c($sp)
  /* 18CB54 8018DE14 C7A40050 */      lwc1 $f4, 0x50($sp)
  /* 18CB58 8018DE18 44803000 */      mtc1 $zero, $f6
  /* 18CB5C 8018DE1C 240F0001 */     addiu $t7, $zero, 1
  /* 18CB60 8018DE20 2409FFFF */     addiu $t1, $zero, -1
  /* 18CB64 8018DE24 4604303E */    c.le.s $f6, $f4
  /* 18CB68 8018DE28 240C0002 */     addiu $t4, $zero, 2
  /* 18CB6C 8018DE2C 240B0001 */     addiu $t3, $zero, 1
  /* 18CB70 8018DE30 45020004 */     bc1fl .L8018DE44
  /* 18CB74 8018DE34 AFAF005C */        sw $t7, 0x5c($sp)
  /* 18CB78 8018DE38 10000002 */         b .L8018DE44
  /* 18CB7C 8018DE3C AFA9005C */        sw $t1, 0x5c($sp)
  /* 18CB80 8018DE40 AFAF005C */        sw $t7, 0x5c($sp)
  .L8018DE44:
  /* 18CB84 8018DE44 8E430000 */        lw $v1, ($s2) # gpBattleState + 0
  /* 18CB88 8018DE48 00711021 */      addu $v0, $v1, $s1
  /* 18CB8C 8018DE4C 90480024 */       lbu $t0, 0x24($v0)
  /* 18CB90 8018DE50 A3B00061 */        sb $s0, 0x61($sp)
  /* 18CB94 8018DE54 A3A80060 */        sb $t0, 0x60($sp)
  /* 18CB98 8018DE58 90790005 */       lbu $t9, 5($v1)
  /* 18CB9C 8018DE5C 90780004 */       lbu $t8, 4($v1)
  /* 18CBA0 8018DE60 03195021 */      addu $t2, $t8, $t9
  /* 18CBA4 8018DE64 29410003 */      slti $at, $t2, 3
  /* 18CBA8 8018DE68 50200004 */      beql $at, $zero, .L8018DE7C
  /* 18CBAC 8018DE6C A3AC0062 */        sb $t4, 0x62($sp)
  /* 18CBB0 8018DE70 10000002 */         b .L8018DE7C
  /* 18CBB4 8018DE74 A3AB0062 */        sb $t3, 0x62($sp)
  /* 18CBB8 8018DE78 A3AC0062 */        sb $t4, 0x62($sp)
  .L8018DE7C:
  /* 18CBBC 8018DE7C 904D0026 */       lbu $t5, 0x26($v0)
  /* 18CBC0 8018DE80 A3AD0063 */        sb $t5, 0x63($sp)
  /* 18CBC4 8018DE84 904E0027 */       lbu $t6, 0x27($v0)
  /* 18CBC8 8018DE88 A3AE0064 */        sb $t6, 0x64($sp)
  /* 18CBCC 8018DE8C 90490021 */       lbu $t1, 0x21($v0)
  /* 18CBD0 8018DE90 A3A90065 */        sb $t1, 0x65($sp)
  /* 18CBD4 8018DE94 904F0020 */       lbu $t7, 0x20($v0)
  /* 18CBD8 8018DE98 A3AF0066 */        sb $t7, 0x66($sp)
  /* 18CBDC 8018DE9C 90680007 */       lbu $t0, 7($v1)
  /* 18CBE0 8018DEA0 A3A80067 */        sb $t0, 0x67($sp)
  /* 18CBE4 8018DEA4 8C58006C */        lw $t8, 0x6c($v0)
  /* 18CBE8 8018DEA8 AFB80070 */        sw $t8, 0x70($sp)
  /* 18CBEC 8018DEAC 90590022 */       lbu $t9, 0x22($v0)
  /* 18CBF0 8018DEB0 AFB30078 */        sw $s3, 0x78($sp)
  /* 18CBF4 8018DEB4 AFB90074 */        sw $t9, 0x74($sp)
  /* 18CBF8 8018DEB8 0C035E2D */       jal func_ovl2_800D78B4
  /* 18CBFC 8018DEBC 90440023 */       lbu $a0, 0x23($v0)
  /* 18CC00 8018DEC0 93AB006B */       lbu $t3, 0x6b($sp)
  /* 18CC04 8018DEC4 AFA20084 */        sw $v0, 0x84($sp)
  /* 18CC08 8018DEC8 02802025 */        or $a0, $s4, $zero
  /* 18CC0C 8018DECC 356C0080 */       ori $t4, $t3, 0x80
  /* 18CC10 8018DED0 0C035FCF */       jal ftManager_CreateFighter
  /* 18CC14 8018DED4 A3AC006B */        sb $t4, 0x6b($sp)
  /* 18CC18 8018DED8 8E4D0000 */        lw $t5, ($s2) # gpBattleState + 0
  /* 18CC1C 8018DEDC 02002025 */        or $a0, $s0, $zero
  /* 18CC20 8018DEE0 00402825 */        or $a1, $v0, $zero
  /* 18CC24 8018DEE4 01B17021 */      addu $t6, $t5, $s1
  /* 18CC28 8018DEE8 A1D00028 */        sb $s0, 0x28($t6)
  /* 18CC2C 8018DEEC 8E490000 */        lw $t1, ($s2) # gpBattleState + 0
  /* 18CC30 8018DEF0 01317821 */      addu $t7, $t1, $s1
  /* 18CC34 8018DEF4 0C039F13 */       jal ftCommon_ClearPlayerMatchStats
  /* 18CC38 8018DEF8 A1F0002A */        sb $s0, 0x2a($t7)
  /* 18CC3C 8018DEFC 26100001 */     addiu $s0, $s0, 1
  /* 18CC40 8018DF00 24010004 */     addiu $at, $zero, 4
  /* 18CC44 8018DF04 26310074 */     addiu $s1, $s1, 0x74
  /* 18CC48 8018DF08 1601FFA8 */       bne $s0, $at, .L8018DDAC
  /* 18CC4C 8018DF0C 2673000A */     addiu $s3, $s3, 0xa
  /* 18CC50 8018DF10 0C035E0B */       jal func_ovl2_800D782C
  /* 18CC54 8018DF14 00000000 */       nop 
  /* 18CC58 8018DF18 0C063438 */       jal func_ovl64_8018D0E0
  /* 18CC5C 8018DF1C 00000000 */       nop 
  /* 18CC60 8018DF20 0C0438B5 */       jal func_ovl2_8010E2D4
  /* 18CC64 8018DF24 00000000 */       nop 
  /* 18CC68 8018DF28 0C044639 */       jal func_ovl2_801118E4
  /* 18CC6C 8018DF2C 00000000 */       nop 
  /* 18CC70 8018DF30 0C043869 */       jal func_ovl2_8010E1A4
  /* 18CC74 8018DF34 00000000 */       nop 
  /* 18CC78 8018DF38 0C044510 */       jal func_ovl2_80111440
  /* 18CC7C 8018DF3C 00000000 */       nop 
  /* 18CC80 8018DF40 24080001 */     addiu $t0, $zero, 1
  /* 18CC84 8018DF44 3C018013 */       lui $at, %hi(D_ovl2_80131580)
  /* 18CC88 8018DF48 0C043771 */       jal func_ovl2_8010DDC4
  /* 18CC8C 8018DF4C A0281580 */        sb $t0, %lo(D_ovl2_80131580)($at)
  /* 18CC90 8018DF50 0C0438DD */       jal func_ovl2_8010E374
  /* 18CC94 8018DF54 00000000 */       nop 
  /* 18CC98 8018DF58 0C043926 */       jal func_ovl2_8010E498
  /* 18CC9C 8018DF5C 00000000 */       nop 
  /* 18CCA0 8018DF60 0C0446F9 */       jal func_ovl2_80111BE4
  /* 18CCA4 8018DF64 00000000 */       nop 
  /* 18CCA8 8018DF68 0C043CE8 */       jal func_ovl2_8010F3A0
  /* 18CCAC 8018DF6C 00000000 */       nop 
  /* 18CCB0 8018DF70 0C043CF0 */       jal func_ovl2_8010F3C0
  /* 18CCB4 8018DF74 00000000 */       nop 
  /* 18CCB8 8018DF78 0C0439A4 */       jal func_ovl2_8010E690
  /* 18CCBC 8018DF7C 00000000 */       nop 
  /* 18CCC0 8018DF80 0C044145 */       jal func_ovl2_80110514
  /* 18CCC4 8018DF84 00000000 */       nop 
  /* 18CCC8 8018DF88 0C0636C6 */       jal func_ovl64_8018DB18
  /* 18CCCC 8018DF8C 00000000 */       nop 
  /* 18CCD0 8018DF90 0C03F0FA */       jal func_ovl2_800FC3E8
  /* 18CCD4 8018DF94 00000000 */       nop 
  /* 18CCD8 8018DF98 0C009A70 */       jal func_800269C0
  /* 18CCDC 8018DF9C 24040272 */     addiu $a0, $zero, 0x272
  /* 18CCE0 8018DFA0 0C0635C1 */       jal func_ovl64_8018D704
  /* 18CCE4 8018DFA4 00000000 */       nop 
  /* 18CCE8 8018DFA8 8FBF0034 */        lw $ra, 0x34($sp)
  /* 18CCEC 8018DFAC 8FB00020 */        lw $s0, 0x20($sp)
  /* 18CCF0 8018DFB0 8FB10024 */        lw $s1, 0x24($sp)
  /* 18CCF4 8018DFB4 8FB20028 */        lw $s2, 0x28($sp)
  /* 18CCF8 8018DFB8 8FB3002C */        lw $s3, 0x2c($sp)
  /* 18CCFC 8018DFBC 8FB40030 */        lw $s4, 0x30($sp)
  /* 18CD00 8018DFC0 03E00008 */        jr $ra
  /* 18CD04 8018DFC4 27BD0090 */     addiu $sp, $sp, 0x90

glabel func_ovl64_8018DFC8
  /* 18CD08 8018DFC8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18CD0C 8018DFCC AFBF0014 */        sw $ra, 0x14($sp)
  /* 18CD10 8018DFD0 8C830000 */        lw $v1, ($a0)
  /* 18CD14 8018DFD4 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 18CD18 8018DFD8 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 18CD1C 8018DFDC 246E0008 */     addiu $t6, $v1, 8
  /* 18CD20 8018DFE0 AC8E0000 */        sw $t6, ($a0)
  /* 18CD24 8018DFE4 3C180002 */       lui $t8, 2
  /* 18CD28 8018DFE8 3C058013 */       lui $a1, %hi(gMapLightAngleX)
  /* 18CD2C 8018DFEC 3C068013 */       lui $a2, %hi(gMapLightAngleY)
  /* 18CD30 8018DFF0 AC780004 */        sw $t8, 4($v1)
  /* 18CD34 8018DFF4 AC6F0000 */        sw $t7, ($v1)
  /* 18CD38 8018DFF8 8CC61394 */        lw $a2, %lo(gMapLightAngleY)($a2)
  /* 18CD3C 8018DFFC 0C03F2DC */       jal func_ovl2_800FCB70
  /* 18CD40 8018E000 8CA51390 */        lw $a1, %lo(gMapLightAngleX)($a1)
  /* 18CD44 8018E004 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18CD48 8018E008 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18CD4C 8018E00C 03E00008 */        jr $ra
  /* 18CD50 8018E010 00000000 */       nop 

glabel demo_battle_entry
  /* 18CD54 8018E014 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 18CD58 8018E018 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 18CD5C 8018E01C 3C048019 */       lui $a0, %hi(D_ovl64_8018E234)
  /* 18CD60 8018E020 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 18CD64 8018E024 2484E234 */     addiu $a0, $a0, %lo(D_ovl64_8018E234)
  /* 18CD68 8018E028 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18CD6C 8018E02C 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 18CD70 8018E030 0C001C09 */       jal func_80007024
  /* 18CD74 8018E034 AC8F000C */        sw $t7, 0xc($a0) # D_ovl64_8018E234 + 12
  /* 18CD78 8018E038 3C188039 */       lui $t8, %hi(D_NF_80392A00)
  /* 18CD7C 8018E03C 3C198019 */       lui $t9, %hi(D_NF_8018E860)
  /* 18CD80 8018E040 3C048019 */       lui $a0, %hi(D_ovl64_8018E250)
  /* 18CD84 8018E044 2739E860 */     addiu $t9, $t9, %lo(D_NF_8018E860)
  /* 18CD88 8018E048 27182A00 */     addiu $t8, $t8, %lo(D_NF_80392A00)
  /* 18CD8C 8018E04C 3C098019 */       lui $t1, %hi(func_ovl64_8018DCC4)
  /* 18CD90 8018E050 2484E250 */     addiu $a0, $a0, %lo(D_ovl64_8018E250)
  /* 18CD94 8018E054 03194023 */      subu $t0, $t8, $t9
  /* 18CD98 8018E058 2529DCC4 */     addiu $t1, $t1, %lo(func_ovl64_8018DCC4)
  /* 18CD9C 8018E05C AC880010 */        sw $t0, 0x10($a0) # D_ovl64_8018E250 + 16
  /* 18CDA0 8018E060 0C0289A6 */       jal func_800A2698
  /* 18CDA4 8018E064 AC890088 */        sw $t1, 0x88($a0) # D_ovl64_8018E250 + 136
  /* 18CDA8 8018E068 0C00829D */       jal func_80020A74
  /* 18CDAC 8018E06C 00000000 */       nop 
  /* 18CDB0 8018E070 0C008356 */       jal func_80020D58
  /* 18CDB4 8018E074 00002025 */        or $a0, $zero, $zero
  /* 18CDB8 8018E078 50400006 */      beql $v0, $zero, .L8018E094
  /* 18CDBC 8018E07C 00002025 */        or $a0, $zero, $zero
  .L8018E080:
  /* 18CDC0 8018E080 0C008356 */       jal func_80020D58
  /* 18CDC4 8018E084 00002025 */        or $a0, $zero, $zero
  /* 18CDC8 8018E088 1440FFFD */      bnez $v0, .L8018E080
  /* 18CDCC 8018E08C 00000000 */       nop 
  /* 18CDD0 8018E090 00002025 */        or $a0, $zero, $zero
  .L8018E094:
  /* 18CDD4 8018E094 0C0082CE */       jal func_80020B38
  /* 18CDD8 8018E098 24057800 */     addiu $a1, $zero, 0x7800
  /* 18CDDC 8018E09C 0C0099A8 */       jal func_800266A0
  /* 18CDE0 8018E0A0 00000000 */       nop 
  /* 18CDE4 8018E0A4 0C0455FB */       jal func_ovl2_801157EC
  /* 18CDE8 8018E0A8 00000000 */       nop 
  /* 18CDEC 8018E0AC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18CDF0 8018E0B0 27BD0018 */     addiu $sp, $sp, 0x18
  /* 18CDF4 8018E0B4 03E00008 */        jr $ra
  /* 18CDF8 8018E0B8 00000000 */       nop 

  /* 18CDFC 8018E0BC 00000000 */       nop 

# Likely start of new file
glabel func_ovl64_8018E0C0
  /* 18CE00 8018E0C0 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 18CE04 8018E0C4 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 18CE08 8018E0C8 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 18CE0C 8018E0CC 3C188019 */       lui $t8, %hi(D_ovl64_8018E500)
  /* 18CE10 8018E0D0 3C088019 */       lui $t0, %hi(D_ovl64_8018E820)
  /* 18CE14 8018E0D4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 18CE18 8018E0D8 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 18CE1C 8018E0DC 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 18CE20 8018E0E0 2718E500 */     addiu $t8, $t8, %lo(D_ovl64_8018E500)
  /* 18CE24 8018E0E4 24190064 */     addiu $t9, $zero, 0x64
  /* 18CE28 8018E0E8 2508E820 */     addiu $t0, $t0, %lo(D_ovl64_8018E820)
  /* 18CE2C 8018E0EC 24090007 */     addiu $t1, $zero, 7
  /* 18CE30 8018E0F0 AFAE0020 */        sw $t6, 0x20($sp)
  /* 18CE34 8018E0F4 AFAF0024 */        sw $t7, 0x24($sp)
  /* 18CE38 8018E0F8 AFA00028 */        sw $zero, 0x28($sp)
  /* 18CE3C 8018E0FC AFA0002C */        sw $zero, 0x2c($sp)
  /* 18CE40 8018E100 AFB80030 */        sw $t8, 0x30($sp)
  /* 18CE44 8018E104 AFB90034 */        sw $t9, 0x34($sp)
  /* 18CE48 8018E108 AFA80038 */        sw $t0, 0x38($sp)
  /* 18CE4C 8018E10C AFA9003C */        sw $t1, 0x3c($sp)
  /* 18CE50 8018E110 0C0337DE */       jal rldm_initialize
  /* 18CE54 8018E114 27A40020 */     addiu $a0, $sp, 0x20
  /* 18CE58 8018E118 3C048011 */       lui $a0, %hi(D_ovl2_80116BD0)
  /* 18CE5C 8018E11C 24846BD0 */     addiu $a0, $a0, %lo(D_ovl2_80116BD0)
  /* 18CE60 8018E120 0C0337BB */       jal rldm_bytes_need_to_load
  /* 18CE64 8018E124 24050008 */     addiu $a1, $zero, 8
  /* 18CE68 8018E128 00402025 */        or $a0, $v0, $zero
  /* 18CE6C 8018E12C 0C001260 */       jal hal_alloc
  /* 18CE70 8018E130 24050010 */     addiu $a1, $zero, 0x10
  /* 18CE74 8018E134 3C048011 */       lui $a0, %hi(D_ovl2_80116BD0)
  /* 18CE78 8018E138 3C068013 */       lui $a2, %hi(D_ovl2_80130D40)
  /* 18CE7C 8018E13C 24C60D40 */     addiu $a2, $a2, %lo(D_ovl2_80130D40)
  /* 18CE80 8018E140 24846BD0 */     addiu $a0, $a0, %lo(D_ovl2_80116BD0)
  /* 18CE84 8018E144 24050008 */     addiu $a1, $zero, 8
  /* 18CE88 8018E148 0C033781 */       jal rldm_load_files_into
  /* 18CE8C 8018E14C 00403825 */        or $a3, $v0, $zero
  /* 18CE90 8018E150 8FBF0014 */        lw $ra, 0x14($sp)
  /* 18CE94 8018E154 27BD0040 */     addiu $sp, $sp, 0x40
  /* 18CE98 8018E158 03E00008 */        jr $ra
  /* 18CE9C 8018E15C 00000000 */       nop 
#
#  /* 18CEA0 8018E160 00000000 */       nop 
#  /* 18CEA4 8018E164 00000000 */       nop 
#glabel D_ovl64_8018E168   # Routine parsed as data
#  /* 18CEA8 8018E168 06030002 */     bgezl $s0, D_ovl64_8018E174
