.include "macros.inc"

.section .bss

#glabel D_8009F040
#    .space 432
#unref_D_8009F1E0:
#    .space 4

glabel CartRomHandle
    .space 4
glabel D_8009F1F4
    .space 1
glabel D_8009F1F5
    .space 1
glabel D_8009F1F6
    .space 1
glabel D_8009F1F7
    .space 1
glabel D_8009F1F8
    .space 112

glabel LeoDiskHandle
    .space 4
glabel D_8009F26C
    .space 1
glabel D_8009F26D
    .space 1
glabel D_8009F26E
    .space 1
glabel D_8009F26F
    .space 1
glabel D_8009F270
    .space 112
