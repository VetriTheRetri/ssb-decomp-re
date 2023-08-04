.include "macros.inc"

.section .data

# Data Sections
#  80387CA0 -> 8038EE60


glabel D_ovl8_80387CA0
  .incbin "ovl8.raw.bin", 0x16840, 0x8

glabel D_ovl8_80387CA8
  .incbin "ovl8.raw.bin", 0x16848, 0x200

glabel D_ovl8_80387EA8
  .incbin "ovl8.raw.bin", 0x16A48, 0x8
  /* 16A50 1A4700 80387EB0 */  .4byte D_ovl8_80387CA8
  .incbin "ovl8.raw.bin", 0x16A54, 0x4

glabel D_ovl8_80387EB8
  .incbin "ovl8.raw.bin", 0x16A58, 0x34
  /* 16A8C 1A473C 80387EEC */  .4byte D_ovl8_80387EA8
  /* 16A90 1A4740 80387EF0 */  .4byte D_ovl8_8038EE90
  .incbin "ovl8.raw.bin", 0x16A94, 0xC

glabel D_ovl8_80387F00
  /* 16AA0 1A4750 80387F00 */
  .asciz "1"
  .balign 4

glabel D_ovl8_80387F04
  /* 16AA4 1A4754 80387F04 */
  .asciz "2"
  .balign 4

glabel D_ovl8_80387F08
  /* 16AA8 1A4758 80387F08 */
  .asciz "3"
  .balign 4

glabel D_ovl8_80387F0C
  /* 16AAC 1A475C 80387F0C */
  .asciz "4"
  .balign 4

glabel D_ovl8_80387F10
  /* 16AB0 1A4760 80387F10 */
  .asciz "5"
  .balign 4

glabel D_ovl8_80387F14
  /* 16AB4 1A4764 80387F14 */
  .asciz "6"
  .balign 4

glabel D_ovl8_80387F18
  /* 16AB8 1A4768 80387F18 */
  .asciz "7"
  .balign 4

glabel D_ovl8_80387F1C
  /* 16ABC 1A476C 80387F1C */
  .asciz "8"
  .balign 4

glabel D_ovl8_80387F20
  /* 16AC0 1A4770 80387F20 */
  .asciz "9"
  .balign 4

glabel D_ovl8_80387F24
  /* 16AC4 1A4774 80387F24 */
  .asciz "0"
  .balign 4

glabel D_ovl8_80387F28
  /* 16AC8 1A4778 80387F28 */
  .asciz "."
  .balign 4

glabel D_ovl8_80387F2C
  /* 16ACC 1A477C 80387F2C */
  .asciz "OK"
  .balign 4

glabel D_ovl8_80387F30
  /* 16AD0 1A4780 80387F30 */
  .asciz "No"
  .balign 4

glabel D_ovl8_80387F34
  /* 16AD4 1A4784 80387F34 */
  .asciz "B"
  .balign 4

glabel D_ovl8_80387F38
  /* 16AD8 1A4788 80387F38 */
  .asciz "Caption"
  .balign 4

glabel D_ovl8_80387F40
  .incbin "ovl8.raw.bin", 0x16AE0, 0x14
  /* 16AF4 1A47A4 80387F54 */
  .asciz "KyPd"
  .balign 4
  .incbin "ovl8.raw.bin", 0x16AFC, 0x30
  /* 16B2C 1A47DC 80387F8C */  .4byte D_ovl8_80387F00
  .incbin "ovl8.raw.bin", 0x16B30, 0x24
  /* 16B54 1A4804 80387FB4 */  .4byte D_ovl8_80387F04
  .incbin "ovl8.raw.bin", 0x16B58, 0x24
  /* 16B7C 1A482C 80387FDC */  .4byte D_ovl8_80387F08
  .incbin "ovl8.raw.bin", 0x16B80, 0x24
  /* 16BA4 1A4854 80388004 */  .4byte D_ovl8_80387F0C
  .incbin "ovl8.raw.bin", 0x16BA8, 0x24
  /* 16BCC 1A487C 8038802C */  .4byte D_ovl8_80387F10
  .incbin "ovl8.raw.bin", 0x16BD0, 0x24
  /* 16BF4 1A48A4 80388054 */  .4byte D_ovl8_80387F14
  .incbin "ovl8.raw.bin", 0x16BF8, 0x24
  /* 16C1C 1A48CC 8038807C */  .4byte D_ovl8_80387F18
  .incbin "ovl8.raw.bin", 0x16C20, 0x24
  /* 16C44 1A48F4 803880A4 */  .4byte D_ovl8_80387F1C
  .incbin "ovl8.raw.bin", 0x16C48, 0x24
  /* 16C6C 1A491C 803880CC */  .4byte D_ovl8_80387F20
  .incbin "ovl8.raw.bin", 0x16C70, 0x24
  /* 16C94 1A4944 803880F4 */  .4byte D_ovl8_80387F24
  .incbin "ovl8.raw.bin", 0x16C98, 0x24
  /* 16CBC 1A496C 8038811C */  .4byte D_ovl8_80387F28
  .incbin "ovl8.raw.bin", 0x16CC0, 0x24
  /* 16CE4 1A4994 80388144 */  .4byte D_ovl8_80387F2C
  .incbin "ovl8.raw.bin", 0x16CE8, 0x24
  /* 16D0C 1A49BC 8038816C */  .4byte D_ovl8_80387F30
  .incbin "ovl8.raw.bin", 0x16D10, 0x24
  /* 16D34 1A49E4 80388194 */  .4byte D_ovl8_80387F34
  .incbin "ovl8.raw.bin", 0x16D38, 0x24
  /* 16D5C 1A4A0C 803881BC */  .4byte D_ovl8_80387F38
  .incbin "ovl8.raw.bin", 0x16D60, 0x28

glabel D_ovl8_803881E8
  /* 16D88 1A4A38 803881E8 */
  .asciz "A"
  .balign 4

glabel D_ovl8_803881EC
  /* 16D8C 1A4A3C 803881EC */
  .asciz "B"
  .balign 4

glabel D_ovl8_803881F0
  /* 16D90 1A4A40 803881F0 */
  .asciz "C"
  .balign 4

glabel D_ovl8_803881F4
  /* 16D94 1A4A44 803881F4 */
  .asciz "D"
  .balign 4

glabel D_ovl8_803881F8
  /* 16D98 1A4A48 803881F8 */
  .asciz "E"
  .balign 4

glabel D_ovl8_803881FC
  /* 16D9C 1A4A4C 803881FC */
  .asciz "F"
  .balign 4

glabel D_ovl8_80388200
  /* 16DA0 1A4A50 80388200 */
  .asciz "G"
  .balign 4

glabel D_ovl8_80388204
  /* 16DA4 1A4A54 80388204 */
  .asciz "Q"
  .balign 4

glabel D_ovl8_80388208
  /* 16DA8 1A4A58 80388208 */
  .asciz "W"
  .balign 4

glabel D_ovl8_8038820C
  /* 16DAC 1A4A5C 8038820C */
  .asciz "R"
  .balign 4

glabel D_ovl8_80388210
  /* 16DB0 1A4A60 80388210 */
  .asciz "T"
  .balign 4

glabel D_ovl8_80388214
  /* 16DB4 1A4A64 80388214 */
  .asciz "Y"
  .balign 4

glabel D_ovl8_80388218
  /* 16DB8 1A4A68 80388218 */
  .asciz "U"
  .balign 4

glabel D_ovl8_8038821C
  /* 16DBC 1A4A6C 8038821C */
  .asciz "I"
  .balign 4

glabel D_ovl8_80388220
  /* 16DC0 1A4A70 80388220 */
  .asciz "O"
  .balign 4

glabel D_ovl8_80388224
  /* 16DC4 1A4A74 80388224 */
  .asciz "P"
  .balign 4

glabel D_ovl8_80388228
  /* 16DC8 1A4A78 80388228 */
  .asciz "S"
  .balign 4

glabel D_ovl8_8038822C
  /* 16DCC 1A4A7C 8038822C */
  .asciz "H"
  .balign 4

glabel D_ovl8_80388230
  /* 16DD0 1A4A80 80388230 */
  .asciz "J"
  .balign 4

glabel D_ovl8_80388234
  /* 16DD4 1A4A84 80388234 */
  .asciz "K"
  .balign 4

glabel D_ovl8_80388238
  /* 16DD8 1A4A88 80388238 */
  .asciz "L"
  .balign 4

glabel D_ovl8_8038823C
  /* 16DDC 1A4A8C 8038823C */
  .asciz "Z"
  .balign 4

glabel D_ovl8_80388240
  /* 16DE0 1A4A90 80388240 */
  .asciz "X"
  .balign 4

glabel D_ovl8_80388244
  /* 16DE4 1A4A94 80388244 */
  .asciz "V"
  .balign 4

glabel D_ovl8_80388248
  /* 16DE8 1A4A98 80388248 */
  .asciz "N"
  .balign 4

glabel D_ovl8_8038824C
  /* 16DEC 1A4A9C 8038824C */
  .asciz "M"
  .balign 4

glabel D_ovl8_80388250
  /* 16DF0 1A4AA0 80388250 */
  .asciz "1"
  .balign 4

glabel D_ovl8_80388254
  /* 16DF4 1A4AA4 80388254 */
  .asciz "2"
  .balign 4

glabel D_ovl8_80388258
  /* 16DF8 1A4AA8 80388258 */
  .asciz "3"
  .balign 4

glabel D_ovl8_8038825C
  /* 16DFC 1A4AAC 8038825C */
  .asciz "4"
  .balign 4

glabel D_ovl8_80388260
  /* 16E00 1A4AB0 80388260 */
  .asciz "5"
  .balign 4

glabel D_ovl8_80388264
  /* 16E04 1A4AB4 80388264 */
  .asciz "6"
  .balign 4

glabel D_ovl8_80388268
  /* 16E08 1A4AB8 80388268 */
  .asciz "7"
  .balign 4

glabel D_ovl8_8038826C
  /* 16E0C 1A4ABC 8038826C */
  .asciz "8"
  .balign 4

glabel D_ovl8_80388270
  /* 16E10 1A4AC0 80388270 */
  .asciz "9"
  .balign 4

glabel D_ovl8_80388274
  /* 16E14 1A4AC4 80388274 */
  .asciz "0"
  .balign 4

glabel D_ovl8_80388278
  /* 16E18 1A4AC8 80388278 */
  .asciz "SPACE"
  .balign 4

glabel D_ovl8_80388280
  /* 16E20 1A4AD0 80388280 */
  .asciz "OK"
  .balign 4

glabel D_ovl8_80388284
  /* 16E24 1A4AD4 80388284 */
  .asciz "DEL"
  .balign 4

glabel D_ovl8_80388288
  /* 16E28 1A4AD8 80388288 */
  .asciz "No"
  .balign 4

glabel D_ovl8_8038828C
  /* 16E2C 1A4ADC 8038828C */
  .asciz "Caption"
  .balign 4

glabel D_ovl8_80388294
  /* 16E34 1A4AE4 80388294 */
  .asciz "."
  .balign 4

glabel D_ovl8_80388298
  .incbin "ovl8.raw.bin", 0x16E38, 0x14
  /* 16E4C 1A4AFC 803882AC */
  .asciz "KyWn"
  .balign 4
  .incbin "ovl8.raw.bin", 0x16E54, 0x30
  /* 16E84 1A4B34 803882E4 */  .4byte D_ovl8_803881E8
  .incbin "ovl8.raw.bin", 0x16E88, 0x24
  /* 16EAC 1A4B5C 8038830C */  .4byte D_ovl8_803881EC
  .incbin "ovl8.raw.bin", 0x16EB0, 0x24
  /* 16ED4 1A4B84 80388334 */  .4byte D_ovl8_803881F0
  .incbin "ovl8.raw.bin", 0x16ED8, 0x24
  /* 16EFC 1A4BAC 8038835C */  .4byte D_ovl8_803881F4
  .incbin "ovl8.raw.bin", 0x16F00, 0x24
  /* 16F24 1A4BD4 80388384 */  .4byte D_ovl8_803881F8
  .incbin "ovl8.raw.bin", 0x16F28, 0x24
  /* 16F4C 1A4BFC 803883AC */  .4byte D_ovl8_803881FC
  .incbin "ovl8.raw.bin", 0x16F50, 0x24
  /* 16F74 1A4C24 803883D4 */  .4byte D_ovl8_80388200
  .incbin "ovl8.raw.bin", 0x16F78, 0x24
  /* 16F9C 1A4C4C 803883FC */  .4byte D_ovl8_80388204
  .incbin "ovl8.raw.bin", 0x16FA0, 0x24
  /* 16FC4 1A4C74 80388424 */  .4byte D_ovl8_80388208
  .incbin "ovl8.raw.bin", 0x16FC8, 0x24
  /* 16FEC 1A4C9C 8038844C */  .4byte D_ovl8_8038820C
  .incbin "ovl8.raw.bin", 0x16FF0, 0x24
  /* 17014 1A4CC4 80388474 */  .4byte D_ovl8_80388210
  .incbin "ovl8.raw.bin", 0x17018, 0x24
  /* 1703C 1A4CEC 8038849C */  .4byte D_ovl8_80388214
  .incbin "ovl8.raw.bin", 0x17040, 0x24
  /* 17064 1A4D14 803884C4 */  .4byte D_ovl8_80388218
  .incbin "ovl8.raw.bin", 0x17068, 0x24
  /* 1708C 1A4D3C 803884EC */  .4byte D_ovl8_8038821C
  .incbin "ovl8.raw.bin", 0x17090, 0x24
  /* 170B4 1A4D64 80388514 */  .4byte D_ovl8_80388220
  .incbin "ovl8.raw.bin", 0x170B8, 0x24
  /* 170DC 1A4D8C 8038853C */  .4byte D_ovl8_80388224
  .incbin "ovl8.raw.bin", 0x170E0, 0x24
  /* 17104 1A4DB4 80388564 */  .4byte D_ovl8_80388228
  .incbin "ovl8.raw.bin", 0x17108, 0x24
  /* 1712C 1A4DDC 8038858C */  .4byte D_ovl8_8038822C
  .incbin "ovl8.raw.bin", 0x17130, 0x24
  /* 17154 1A4E04 803885B4 */  .4byte D_ovl8_80388230
  .incbin "ovl8.raw.bin", 0x17158, 0x24
  /* 1717C 1A4E2C 803885DC */  .4byte D_ovl8_80388234
  .incbin "ovl8.raw.bin", 0x17180, 0x24
  /* 171A4 1A4E54 80388604 */  .4byte D_ovl8_80388238
  .incbin "ovl8.raw.bin", 0x171A8, 0x24
  /* 171CC 1A4E7C 8038862C */  .4byte D_ovl8_8038823C
  .incbin "ovl8.raw.bin", 0x171D0, 0x24
  /* 171F4 1A4EA4 80388654 */  .4byte D_ovl8_80388240
  .incbin "ovl8.raw.bin", 0x171F8, 0x24
  /* 1721C 1A4ECC 8038867C */  .4byte D_ovl8_80388244
  .incbin "ovl8.raw.bin", 0x17220, 0x24
  /* 17244 1A4EF4 803886A4 */  .4byte D_ovl8_80388248
  .incbin "ovl8.raw.bin", 0x17248, 0x24
  /* 1726C 1A4F1C 803886CC */  .4byte D_ovl8_8038824C
  .incbin "ovl8.raw.bin", 0x17270, 0x24
  /* 17294 1A4F44 803886F4 */  .4byte D_ovl8_80388250
  .incbin "ovl8.raw.bin", 0x17298, 0x24
  /* 172BC 1A4F6C 8038871C */  .4byte D_ovl8_80388254
  .incbin "ovl8.raw.bin", 0x172C0, 0x24
  /* 172E4 1A4F94 80388744 */  .4byte D_ovl8_80388258
  .incbin "ovl8.raw.bin", 0x172E8, 0x24
  /* 1730C 1A4FBC 8038876C */  .4byte D_ovl8_8038825C
  .incbin "ovl8.raw.bin", 0x17310, 0x24
  /* 17334 1A4FE4 80388794 */  .4byte D_ovl8_80388260
  .incbin "ovl8.raw.bin", 0x17338, 0x24
  /* 1735C 1A500C 803887BC */  .4byte D_ovl8_80388264
  .incbin "ovl8.raw.bin", 0x17360, 0x24
  /* 17384 1A5034 803887E4 */  .4byte D_ovl8_80388268
  .incbin "ovl8.raw.bin", 0x17388, 0x24
  /* 173AC 1A505C 8038880C */  .4byte D_ovl8_8038826C
  .incbin "ovl8.raw.bin", 0x173B0, 0x24
  /* 173D4 1A5084 80388834 */  .4byte D_ovl8_80388270
  .incbin "ovl8.raw.bin", 0x173D8, 0x24
  /* 173FC 1A50AC 8038885C */  .4byte D_ovl8_80388274
  .incbin "ovl8.raw.bin", 0x17400, 0x24
  /* 17424 1A50D4 80388884 */  .4byte D_ovl8_80388278
  .incbin "ovl8.raw.bin", 0x17428, 0x24
  /* 1744C 1A50FC 803888AC */  .4byte D_ovl8_80388280
  .incbin "ovl8.raw.bin", 0x17450, 0x24
  /* 17474 1A5124 803888D4 */  .4byte D_ovl8_80388284
  .incbin "ovl8.raw.bin", 0x17478, 0x24
  /* 1749C 1A514C 803888FC */  .4byte D_ovl8_80388288
  .incbin "ovl8.raw.bin", 0x174A0, 0x24
  /* 174C4 1A5174 80388924 */  .4byte D_ovl8_8038828C
  .incbin "ovl8.raw.bin", 0x174C8, 0x24
  /* 174EC 1A519C 8038894C */  .4byte D_ovl8_80388294
  .incbin "ovl8.raw.bin", 0x174F0, 0x30

glabel D_ovl8_80388980
  .incbin "ovl8.raw.bin", 0x17520, 0xC
  /* 1752C 1A51DC 8038898C */  .4byte func_ovl8_803718C4
  .incbin "ovl8.raw.bin", 0x17530, 0x4
  /* 17534 1A51E4 80388994 */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x17538, 0x4
  /* 1753C 1A51EC 8038899C */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x17540, 0x4
  /* 17544 1A51F4 803889A4 */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x17548, 0x4
  /* 1754C 1A51FC 803889AC */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x17550, 0x4
  /* 17554 1A5204 803889B4 */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x17558, 0x4
  /* 1755C 1A520C 803889BC */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x17560, 0x4
  /* 17564 1A5214 803889C4 */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x17568, 0x4
  /* 1756C 1A521C 803889CC */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x17570, 0x4
  /* 17574 1A5224 803889D4 */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x17578, 0x4
  /* 1757C 1A522C 803889DC */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x17580, 0x4
  /* 17584 1A5234 803889E4 */  .4byte func_ovl8_80371ABC
  .incbin "ovl8.raw.bin", 0x17588, 0x4
  /* 1758C 1A523C 803889EC */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x17590, 0x4
  /* 17594 1A5244 803889F4 */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x17598, 0x4
  /* 1759C 1A524C 803889FC */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x175A0, 0x4
  /* 175A4 1A5254 80388A04 */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x175A8, 0x4
  /* 175AC 1A525C 80388A0C */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x175B0, 0x4
  /* 175B4 1A5264 80388A14 */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x175B8, 0x4
  /* 175BC 1A526C 80388A1C */  .4byte func_ovl8_80371C1C
  .incbin "ovl8.raw.bin", 0x175C0, 0x4
  /* 175C4 1A5274 80388A24 */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x175C8, 0x4
  /* 175CC 1A527C 80388A2C */  .4byte func_ovl8_80371C50
  .incbin "ovl8.raw.bin", 0x175D0, 0x4
  /* 175D4 1A5284 80388A34 */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x175D8, 0x4
  /* 175DC 1A528C 80388A3C */  .4byte func_ovl8_80371CB8
  .incbin "ovl8.raw.bin", 0x175E0, 0x4
  /* 175E4 1A5294 80388A44 */  .4byte func_ovl8_80371D00
  .incbin "ovl8.raw.bin", 0x175E8, 0x4
  /* 175EC 1A529C 80388A4C */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x175F0, 0x4
  /* 175F4 1A52A4 80388A54 */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x175F8, 0x4
  /* 175FC 1A52AC 80388A5C */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x17600, 0x4
  /* 17604 1A52B4 80388A64 */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x17608, 0x4
  /* 1760C 1A52BC 80388A6C */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x17610, 0x4
  /* 17614 1A52C4 80388A74 */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x17618, 0x4
  /* 1761C 1A52CC 80388A7C */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x17620, 0x4
  /* 17624 1A52D4 80388A84 */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x17628, 0x4
  /* 1762C 1A52DC 80388A8C */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x17630, 0x4
  /* 17634 1A52E4 80388A94 */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x17638, 0x4
  /* 1763C 1A52EC 80388A9C */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x17640, 0x4
  /* 17644 1A52F4 80388AA4 */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x17648, 0x4
  /* 1764C 1A52FC 80388AAC */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x17650, 0x4
  /* 17654 1A5304 80388AB4 */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x17658, 0x4
  /* 1765C 1A530C 80388ABC */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x17660, 0x4
  /* 17664 1A5314 80388AC4 */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x17668, 0x4
  /* 1766C 1A531C 80388ACC */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x17670, 0x10

glabel D_ovl8_80388AE0
  .incbin "ovl8.raw.bin", 0x17680, 0xC
  /* 1768C 1A533C 80388AEC */  .4byte func_ovl8_803720D4
  .incbin "ovl8.raw.bin", 0x17690, 0x4
  /* 17694 1A5344 80388AF4 */  .4byte func_ovl8_8037217C
  .incbin "ovl8.raw.bin", 0x17698, 0x4
  /* 1769C 1A534C 80388AFC */  .4byte func_ovl8_803721E8
  .incbin "ovl8.raw.bin", 0x176A0, 0x4
  /* 176A4 1A5354 80388B04 */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x176A8, 0x4
  /* 176AC 1A535C 80388B0C */  .4byte func_ovl8_80372250
  .incbin "ovl8.raw.bin", 0x176B0, 0x4
  /* 176B4 1A5364 80388B14 */  .4byte func_ovl8_803722A0
  .incbin "ovl8.raw.bin", 0x176B8, 0x4
  /* 176BC 1A536C 80388B1C */  .4byte func_ovl8_803722F0
  .incbin "ovl8.raw.bin", 0x176C0, 0x4
  /* 176C4 1A5374 80388B24 */  .4byte func_ovl8_80372348
  .incbin "ovl8.raw.bin", 0x176C8, 0x4
  /* 176CC 1A537C 80388B2C */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x176D0, 0x4
  /* 176D4 1A5384 80388B34 */  .4byte func_ovl8_80372360
  .incbin "ovl8.raw.bin", 0x176D8, 0x8

glabel D_ovl8_80388B40
  .incbin "ovl8.raw.bin", 0x176E0, 0xC
  /* 176EC 1A539C 80388B4C */  .4byte func_ovl8_803720D4
  .incbin "ovl8.raw.bin", 0x176F0, 0x4
  /* 176F4 1A53A4 80388B54 */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x176F8, 0x4
  /* 176FC 1A53AC 80388B5C */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x17700, 0x4
  /* 17704 1A53B4 80388B64 */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x17708, 0x4
  /* 1770C 1A53BC 80388B6C */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x17710, 0x4
  /* 17714 1A53C4 80388B74 */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x17718, 0x4
  /* 1771C 1A53CC 80388B7C */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x17720, 0x4
  /* 17724 1A53D4 80388B84 */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x17728, 0x4
  /* 1772C 1A53DC 80388B8C */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x17730, 0x4
  /* 17734 1A53E4 80388B94 */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x17738, 0x4
  /* 1773C 1A53EC 80388B9C */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x17740, 0x4
  /* 17744 1A53F4 80388BA4 */  .4byte func_ovl8_8037217C
  .incbin "ovl8.raw.bin", 0x17748, 0x4
  /* 1774C 1A53FC 80388BAC */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x17750, 0x4
  /* 17754 1A5404 80388BB4 */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x17758, 0x4
  /* 1775C 1A540C 80388BBC */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x17760, 0x4
  /* 17764 1A5414 80388BC4 */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x17768, 0x4
  /* 1776C 1A541C 80388BCC */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x17770, 0x4
  /* 17774 1A5424 80388BD4 */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x17778, 0x4
  /* 1777C 1A542C 80388BDC */  .4byte func_ovl8_80371C1C
  .incbin "ovl8.raw.bin", 0x17780, 0x4
  /* 17784 1A5434 80388BE4 */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x17788, 0x4
  /* 1778C 1A543C 80388BEC */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x17790, 0x4
  /* 17794 1A5444 80388BF4 */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x17798, 0x4
  /* 1779C 1A544C 80388BFC */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x177A0, 0x4
  /* 177A4 1A5454 80388C04 */  .4byte func_ovl8_80371D00
  .incbin "ovl8.raw.bin", 0x177A8, 0x4
  /* 177AC 1A545C 80388C0C */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x177B0, 0x4
  /* 177B4 1A5464 80388C14 */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x177B8, 0x4
  /* 177BC 1A546C 80388C1C */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x177C0, 0x4
  /* 177C4 1A5474 80388C24 */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x177C8, 0x4
  /* 177CC 1A547C 80388C2C */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x177D0, 0x4
  /* 177D4 1A5484 80388C34 */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x177D8, 0x4
  /* 177DC 1A548C 80388C3C */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x177E0, 0x4
  /* 177E4 1A5494 80388C44 */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x177E8, 0x4
  /* 177EC 1A549C 80388C4C */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x177F0, 0x4
  /* 177F4 1A54A4 80388C54 */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x177F8, 0x4
  /* 177FC 1A54AC 80388C5C */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x17800, 0x4
  /* 17804 1A54B4 80388C64 */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x17808, 0x4
  /* 1780C 1A54BC 80388C6C */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x17810, 0x4
  /* 17814 1A54C4 80388C74 */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x17818, 0x4
  /* 1781C 1A54CC 80388C7C */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x17820, 0x4
  /* 17824 1A54D4 80388C84 */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x17828, 0x4
  /* 1782C 1A54DC 80388C8C */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x17830, 0x8

glabel D_ovl8_80388C98
  .incbin "ovl8.raw.bin", 0x17838, 0x8

glabel D_ovl8_80388CA0
  .incbin "ovl8.raw.bin", 0x17840, 0xC
  /* 1784C 1A54FC 80388CAC */  .4byte func_ovl8_80372554
  .incbin "ovl8.raw.bin", 0x17850, 0x4
  /* 17854 1A5504 80388CB4 */  .4byte func_ovl8_803725DC
  .incbin "ovl8.raw.bin", 0x17858, 0x4
  /* 1785C 1A550C 80388CBC */  .4byte func_ovl8_803721E8
  .incbin "ovl8.raw.bin", 0x17860, 0x4
  /* 17864 1A5514 80388CC4 */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x17868, 0x4
  /* 1786C 1A551C 80388CCC */  .4byte func_ovl8_80372250
  .incbin "ovl8.raw.bin", 0x17870, 0x4
  /* 17874 1A5524 80388CD4 */  .4byte func_ovl8_803722A0
  .incbin "ovl8.raw.bin", 0x17878, 0x4
  /* 1787C 1A552C 80388CDC */  .4byte func_ovl8_803722F0
  .incbin "ovl8.raw.bin", 0x17880, 0x4
  /* 17884 1A5534 80388CE4 */  .4byte func_ovl8_80372348
  .incbin "ovl8.raw.bin", 0x17888, 0x4
  /* 1788C 1A553C 80388CEC */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x17890, 0x4
  /* 17894 1A5544 80388CF4 */  .4byte func_ovl8_80372360
  .incbin "ovl8.raw.bin", 0x17898, 0x4
  /* 1789C 1A554C 80388CFC */  .4byte func_ovl8_803726CC
  .incbin "ovl8.raw.bin", 0x178A0, 0x8

glabel D_ovl8_80388D08
  .incbin "ovl8.raw.bin", 0x178A8, 0xC
  /* 178B4 1A5564 80388D14 */  .4byte func_ovl8_80372554
  .incbin "ovl8.raw.bin", 0x178B8, 0x4
  /* 178BC 1A556C 80388D1C */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x178C0, 0x4
  /* 178C4 1A5574 80388D24 */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x178C8, 0x4
  /* 178CC 1A557C 80388D2C */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x178D0, 0x4
  /* 178D4 1A5584 80388D34 */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x178D8, 0x4
  /* 178DC 1A558C 80388D3C */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x178E0, 0x4
  /* 178E4 1A5594 80388D44 */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x178E8, 0x4
  /* 178EC 1A559C 80388D4C */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x178F0, 0x4
  /* 178F4 1A55A4 80388D54 */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x178F8, 0x4
  /* 178FC 1A55AC 80388D5C */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x17900, 0x4
  /* 17904 1A55B4 80388D64 */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x17908, 0x4
  /* 1790C 1A55BC 80388D6C */  .4byte func_ovl8_803725DC
  .incbin "ovl8.raw.bin", 0x17910, 0x4
  /* 17914 1A55C4 80388D74 */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x17918, 0x4
  /* 1791C 1A55CC 80388D7C */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x17920, 0x4
  /* 17924 1A55D4 80388D84 */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x17928, 0x4
  /* 1792C 1A55DC 80388D8C */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x17930, 0x4
  /* 17934 1A55E4 80388D94 */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x17938, 0x4
  /* 1793C 1A55EC 80388D9C */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x17940, 0x4
  /* 17944 1A55F4 80388DA4 */  .4byte func_ovl8_80371C1C
  .incbin "ovl8.raw.bin", 0x17948, 0x4
  /* 1794C 1A55FC 80388DAC */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x17950, 0x4
  /* 17954 1A5604 80388DB4 */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x17958, 0x4
  /* 1795C 1A560C 80388DBC */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x17960, 0x4
  /* 17964 1A5614 80388DC4 */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x17968, 0x4
  /* 1796C 1A561C 80388DCC */  .4byte func_ovl8_80371D00
  .incbin "ovl8.raw.bin", 0x17970, 0x4
  /* 17974 1A5624 80388DD4 */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x17978, 0x4
  /* 1797C 1A562C 80388DDC */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x17980, 0x4
  /* 17984 1A5634 80388DE4 */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x17988, 0x4
  /* 1798C 1A563C 80388DEC */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x17990, 0x4
  /* 17994 1A5644 80388DF4 */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x17998, 0x4
  /* 1799C 1A564C 80388DFC */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x179A0, 0x4
  /* 179A4 1A5654 80388E04 */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x179A8, 0x4
  /* 179AC 1A565C 80388E0C */  .4byte func_ovl8_803726CC
  .incbin "ovl8.raw.bin", 0x179B0, 0x4
  /* 179B4 1A5664 80388E14 */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x179B8, 0x4
  /* 179BC 1A566C 80388E1C */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x179C0, 0x4
  /* 179C4 1A5674 80388E24 */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x179C8, 0x4
  /* 179CC 1A567C 80388E2C */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x179D0, 0x4
  /* 179D4 1A5684 80388E34 */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x179D8, 0x4
  /* 179DC 1A568C 80388E3C */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x179E0, 0x4
  /* 179E4 1A5694 80388E44 */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x179E8, 0x4
  /* 179EC 1A569C 80388E4C */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x179F0, 0x4
  /* 179F4 1A56A4 80388E54 */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x179F8, 0x8

glabel D_ovl8_80388E60
  .incbin "ovl8.raw.bin", 0x17A00, 0xC
  /* 17A0C 1A56BC 80388E6C */  .4byte func_ovl8_8037295C
  .incbin "ovl8.raw.bin", 0x17A10, 0x4
  /* 17A14 1A56C4 80388E74 */  .4byte func_ovl8_80372B40
  .incbin "ovl8.raw.bin", 0x17A18, 0x4
  /* 17A1C 1A56CC 80388E7C */  .4byte func_ovl8_80375528
  .incbin "ovl8.raw.bin", 0x17A20, 0x4
  /* 17A24 1A56D4 80388E84 */  .4byte func_ovl8_803755C4
  .incbin "ovl8.raw.bin", 0x17A28, 0x4
  /* 17A2C 1A56DC 80388E8C */  .4byte func_ovl8_80375864
  .incbin "ovl8.raw.bin", 0x17A30, 0x4
  /* 17A34 1A56E4 80388E94 */  .4byte func_ovl8_80372A3C
  .incbin "ovl8.raw.bin", 0x17A38, 0x4
  /* 17A3C 1A56EC 80388E9C */  .4byte func_ovl8_80372A48
  .incbin "ovl8.raw.bin", 0x17A40, 0x4
  /* 17A44 1A56F4 80388EA4 */  .4byte func_ovl8_80372A94
  .incbin "ovl8.raw.bin", 0x17A48, 0x4
  /* 17A4C 1A56FC 80388EAC */  .4byte func_ovl8_80372B6C
  .incbin "ovl8.raw.bin", 0x17A50, 0x4
  /* 17A54 1A5704 80388EB4 */  .4byte func_ovl8_80372D18
  .incbin "ovl8.raw.bin", 0x17A58, 0x4
  /* 17A5C 1A570C 80388EBC */  .4byte func_ovl8_80372D70
  .incbin "ovl8.raw.bin", 0x17A60, 0x4
  /* 17A64 1A5714 80388EC4 */  .4byte func_ovl8_80372DC8
  .incbin "ovl8.raw.bin", 0x17A68, 0x4
  /* 17A6C 1A571C 80388ECC */  .4byte func_ovl8_80372DD8
  .incbin "ovl8.raw.bin", 0x17A70, 0x4
  /* 17A74 1A5724 80388ED4 */  .4byte func_ovl8_80372DE8
  .incbin "ovl8.raw.bin", 0x17A78, 0x4
  /* 17A7C 1A572C 80388EDC */  .4byte func_ovl8_80372E40
  .incbin "ovl8.raw.bin", 0x17A80, 0x4
  /* 17A84 1A5734 80388EE4 */  .4byte func_ovl8_80372FEC
  .incbin "ovl8.raw.bin", 0x17A88, 0x4
  /* 17A8C 1A573C 80388EEC */  .4byte func_ovl8_80373044
  .incbin "ovl8.raw.bin", 0x17A90, 0x4
  /* 17A94 1A5744 80388EF4 */  .4byte func_ovl8_803730DC
  .incbin "ovl8.raw.bin", 0x17A98, 0x4
  /* 17A9C 1A574C 80388EFC */  .4byte func_ovl8_80373118
  .incbin "ovl8.raw.bin", 0x17AA0, 0x4
  /* 17AA4 1A5754 80388F04 */  .4byte func_ovl8_80373138
  .incbin "ovl8.raw.bin", 0x17AA8, 0x4
  /* 17AAC 1A575C 80388F0C */  .4byte func_ovl8_803732B0
  .incbin "ovl8.raw.bin", 0x17AB0, 0x8

glabel D_ovl8_80388F18
  .incbin "ovl8.raw.bin", 0x17AB8, 0xC
  /* 17AC4 1A5774 80388F24 */  .4byte func_ovl8_8037295C
  .incbin "ovl8.raw.bin", 0x17AC8, 0x4
  /* 17ACC 1A577C 80388F2C */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x17AD0, 0x4
  /* 17AD4 1A5784 80388F34 */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x17AD8, 0x4
  /* 17ADC 1A578C 80388F3C */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x17AE0, 0x4
  /* 17AE4 1A5794 80388F44 */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x17AE8, 0x4
  /* 17AEC 1A579C 80388F4C */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x17AF0, 0x4
  /* 17AF4 1A57A4 80388F54 */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x17AF8, 0x4
  /* 17AFC 1A57AC 80388F5C */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x17B00, 0x4
  /* 17B04 1A57B4 80388F64 */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x17B08, 0x4
  /* 17B0C 1A57BC 80388F6C */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x17B10, 0x4
  /* 17B14 1A57C4 80388F74 */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x17B18, 0x4
  /* 17B1C 1A57CC 80388F7C */  .4byte func_ovl8_80372B40
  .incbin "ovl8.raw.bin", 0x17B20, 0x4
  /* 17B24 1A57D4 80388F84 */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x17B28, 0x4
  /* 17B2C 1A57DC 80388F8C */  .4byte func_ovl8_80372A94
  .incbin "ovl8.raw.bin", 0x17B30, 0x4
  /* 17B34 1A57E4 80388F94 */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x17B38, 0x4
  /* 17B3C 1A57EC 80388F9C */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x17B40, 0x4
  /* 17B44 1A57F4 80388FA4 */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x17B48, 0x4
  /* 17B4C 1A57FC 80388FAC */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x17B50, 0x4
  /* 17B54 1A5804 80388FB4 */  .4byte func_ovl8_80372B6C
  .incbin "ovl8.raw.bin", 0x17B58, 0x4
  /* 17B5C 1A580C 80388FBC */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x17B60, 0x4
  /* 17B64 1A5814 80388FC4 */  .4byte func_ovl8_80371C50
  .incbin "ovl8.raw.bin", 0x17B68, 0x4
  /* 17B6C 1A581C 80388FCC */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x17B70, 0x4
  /* 17B74 1A5824 80388FD4 */  .4byte func_ovl8_80371CB8
  .incbin "ovl8.raw.bin", 0x17B78, 0x4
  /* 17B7C 1A582C 80388FDC */  .4byte func_ovl8_80371D00
  .incbin "ovl8.raw.bin", 0x17B80, 0x4
  /* 17B84 1A5834 80388FE4 */  .4byte func_ovl8_80372D70
  .incbin "ovl8.raw.bin", 0x17B88, 0x4
  /* 17B8C 1A583C 80388FEC */  .4byte func_ovl8_80372DC8
  .incbin "ovl8.raw.bin", 0x17B90, 0x4
  /* 17B94 1A5844 80388FF4 */  .4byte func_ovl8_80372D18
  .incbin "ovl8.raw.bin", 0x17B98, 0x4
  /* 17B9C 1A584C 80388FFC */  .4byte func_ovl8_80372DD8
  .incbin "ovl8.raw.bin", 0x17BA0, 0x4
  /* 17BA4 1A5854 80389004 */  .4byte func_ovl8_80373118
  .incbin "ovl8.raw.bin", 0x17BA8, 0x4
  /* 17BAC 1A585C 8038900C */  .4byte func_ovl8_80373138
  .incbin "ovl8.raw.bin", 0x17BB0, 0x4
  /* 17BB4 1A5864 80389014 */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x17BB8, 0x4
  /* 17BBC 1A586C 8038901C */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x17BC0, 0x4
  /* 17BC4 1A5874 80389024 */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x17BC8, 0x4
  /* 17BCC 1A587C 8038902C */  .4byte func_ovl8_80372DE8
  .incbin "ovl8.raw.bin", 0x17BD0, 0x4
  /* 17BD4 1A5884 80389034 */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x17BD8, 0x4
  /* 17BDC 1A588C 8038903C */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x17BE0, 0x4
  /* 17BE4 1A5894 80389044 */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x17BE8, 0x4
  /* 17BEC 1A589C 8038904C */  .4byte func_ovl8_803732B0
  .incbin "ovl8.raw.bin", 0x17BF0, 0x4
  /* 17BF4 1A58A4 80389054 */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x17BF8, 0x4
  /* 17BFC 1A58AC 8038905C */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x17C00, 0x4
  /* 17C04 1A58B4 80389064 */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x17C08, 0x8

glabel D_ovl8_80389070
  .incbin "ovl8.raw.bin", 0x17C10, 0xC
  /* 17C1C 1A58CC 8038907C */  .4byte func_ovl8_8037295C
  .incbin "ovl8.raw.bin", 0x17C20, 0x4
  /* 17C24 1A58D4 80389084 */  .4byte func_ovl8_803730DC
  .incbin "ovl8.raw.bin", 0x17C28, 0x4
  /* 17C2C 1A58DC 8038908C */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x17C30, 0x10

glabel D_ovl8_803890A0
  .incbin "ovl8.raw.bin", 0x17C40, 0xC
  /* 17C4C 1A58FC 803890AC */  .4byte func_ovl8_8037354C
  .incbin "ovl8.raw.bin", 0x17C50, 0x4
  /* 17C54 1A5904 803890B4 */  .4byte func_ovl8_80373640
  .incbin "ovl8.raw.bin", 0x17C58, 0x4
  /* 17C5C 1A590C 803890BC */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x17C60, 0x4
  /* 17C64 1A5914 803890C4 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x17C68, 0x4
  /* 17C6C 1A591C 803890CC */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x17C70, 0x4
  /* 17C74 1A5924 803890D4 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x17C78, 0x4
  /* 17C7C 1A592C 803890DC */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x17C80, 0x4
  /* 17C84 1A5934 803890E4 */  .4byte func_ovl8_80373694
  .incbin "ovl8.raw.bin", 0x17C88, 0x4
  /* 17C8C 1A593C 803890EC */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x17C90, 0x4
  /* 17C94 1A5944 803890F4 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x17C98, 0x4
  /* 17C9C 1A594C 803890FC */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x17CA0, 0x4
  /* 17CA4 1A5954 80389104 */  .4byte func_ovl8_80373828
  .incbin "ovl8.raw.bin", 0x17CA8, 0x4
  /* 17CAC 1A595C 8038910C */  .4byte func_ovl8_8037383C
  .incbin "ovl8.raw.bin", 0x17CB0, 0x4
  /* 17CB4 1A5964 80389114 */  .4byte func_ovl8_80373930
  .incbin "ovl8.raw.bin", 0x17CB8, 0x4
  /* 17CBC 1A596C 8038911C */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x17CC0, 0x4
  /* 17CC4 1A5974 80389124 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x17CC8, 0x4
  /* 17CCC 1A597C 8038912C */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x17CD0, 0x4
  /* 17CD4 1A5984 80389134 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x17CD8, 0x4
  /* 17CDC 1A598C 8038913C */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x17CE0, 0x4
  /* 17CE4 1A5994 80389144 */  .4byte func_ovl8_80373AC4
  .incbin "ovl8.raw.bin", 0x17CE8, 0x4
  /* 17CEC 1A599C 8038914C */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x17CF0, 0x4
  /* 17CF4 1A59A4 80389154 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x17CF8, 0x4
  /* 17CFC 1A59AC 8038915C */  .4byte func_ovl8_80373BC0
  .incbin "ovl8.raw.bin", 0x17D00, 0x4
  /* 17D04 1A59B4 80389164 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x17D08, 0x8

glabel D_ovl8_80389170
  .incbin "ovl8.raw.bin", 0x17D10, 0xC
  /* 17D1C 1A59CC 8038917C */  .4byte func_ovl8_8037354C
  .incbin "ovl8.raw.bin", 0x17D20, 0x4
  /* 17D24 1A59D4 80389184 */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x17D28, 0x4
  /* 17D2C 1A59DC 8038918C */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x17D30, 0x4
  /* 17D34 1A59E4 80389194 */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x17D38, 0x4
  /* 17D3C 1A59EC 8038919C */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x17D40, 0x4
  /* 17D44 1A59F4 803891A4 */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x17D48, 0x4
  /* 17D4C 1A59FC 803891AC */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x17D50, 0x4
  /* 17D54 1A5A04 803891B4 */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x17D58, 0x4
  /* 17D5C 1A5A0C 803891BC */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x17D60, 0x4
  /* 17D64 1A5A14 803891C4 */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x17D68, 0x4
  /* 17D6C 1A5A1C 803891CC */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x17D70, 0x4
  /* 17D74 1A5A24 803891D4 */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x17D78, 0x4
  /* 17D7C 1A5A2C 803891DC */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x17D80, 0x4
  /* 17D84 1A5A34 803891E4 */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x17D88, 0x4
  /* 17D8C 1A5A3C 803891EC */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x17D90, 0x4
  /* 17D94 1A5A44 803891F4 */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x17D98, 0x4
  /* 17D9C 1A5A4C 803891FC */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x17DA0, 0x4
  /* 17DA4 1A5A54 80389204 */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x17DA8, 0x4
  /* 17DAC 1A5A5C 8038920C */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x17DB0, 0x4
  /* 17DB4 1A5A64 80389214 */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x17DB8, 0x4
  /* 17DBC 1A5A6C 8038921C */  .4byte func_ovl8_80371C50
  .incbin "ovl8.raw.bin", 0x17DC0, 0x4
  /* 17DC4 1A5A74 80389224 */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x17DC8, 0x4
  /* 17DCC 1A5A7C 8038922C */  .4byte func_ovl8_80371CB8
  .incbin "ovl8.raw.bin", 0x17DD0, 0x4
  /* 17DD4 1A5A84 80389234 */  .4byte func_ovl8_80373640
  .incbin "ovl8.raw.bin", 0x17DD8, 0x4
  /* 17DDC 1A5A8C 8038923C */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x17DE0, 0x4
  /* 17DE4 1A5A94 80389244 */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x17DE8, 0x4
  /* 17DEC 1A5A9C 8038924C */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x17DF0, 0x4
  /* 17DF4 1A5AA4 80389254 */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x17DF8, 0x4
  /* 17DFC 1A5AAC 8038925C */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x17E00, 0x4
  /* 17E04 1A5AB4 80389264 */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x17E08, 0x4
  /* 17E0C 1A5ABC 8038926C */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x17E10, 0x4
  /* 17E14 1A5AC4 80389274 */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x17E18, 0x4
  /* 17E1C 1A5ACC 8038927C */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x17E20, 0x4
  /* 17E24 1A5AD4 80389284 */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x17E28, 0x4
  /* 17E2C 1A5ADC 8038928C */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x17E30, 0x4
  /* 17E34 1A5AE4 80389294 */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x17E38, 0x4
  /* 17E3C 1A5AEC 8038929C */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x17E40, 0x4
  /* 17E44 1A5AF4 803892A4 */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x17E48, 0x4
  /* 17E4C 1A5AFC 803892AC */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x17E50, 0x4
  /* 17E54 1A5B04 803892B4 */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x17E58, 0x4
  /* 17E5C 1A5B0C 803892BC */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x17E60, 0x8

glabel D_ovl8_803892C8
  .incbin "ovl8.raw.bin", 0x17E68, 0xC
  /* 17E74 1A5B24 803892D4 */  .4byte func_ovl8_8037354C
  .incbin "ovl8.raw.bin", 0x17E78, 0x4
  /* 17E7C 1A5B2C 803892DC */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x17E80, 0x4
  /* 17E84 1A5B34 803892E4 */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x17E88, 0x8

glabel D_ovl8_803892F0
  .incbin "ovl8.raw.bin", 0x17E90, 0xC
  /* 17E9C 1A5B4C 803892FC */  .4byte func_ovl8_80373D88
  .incbin "ovl8.raw.bin", 0x17EA0, 0x4
  /* 17EA4 1A5B54 80389304 */  .4byte func_ovl8_80373640
  .incbin "ovl8.raw.bin", 0x17EA8, 0x4
  /* 17EAC 1A5B5C 8038930C */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x17EB0, 0x4
  /* 17EB4 1A5B64 80389314 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x17EB8, 0x4
  /* 17EBC 1A5B6C 8038931C */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x17EC0, 0x4
  /* 17EC4 1A5B74 80389324 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x17EC8, 0x4
  /* 17ECC 1A5B7C 8038932C */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x17ED0, 0x4
  /* 17ED4 1A5B84 80389334 */  .4byte func_ovl8_80373694
  .incbin "ovl8.raw.bin", 0x17ED8, 0x4
  /* 17EDC 1A5B8C 8038933C */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x17EE0, 0x4
  /* 17EE4 1A5B94 80389344 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x17EE8, 0x4
  /* 17EEC 1A5B9C 8038934C */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x17EF0, 0x4
  /* 17EF4 1A5BA4 80389354 */  .4byte func_ovl8_80373E24
  .incbin "ovl8.raw.bin", 0x17EF8, 0x4
  /* 17EFC 1A5BAC 8038935C */  .4byte func_ovl8_80373EA8
  .incbin "ovl8.raw.bin", 0x17F00, 0x4
  /* 17F04 1A5BB4 80389364 */  .4byte func_ovl8_80373930
  .incbin "ovl8.raw.bin", 0x17F08, 0x4
  /* 17F0C 1A5BBC 8038936C */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x17F10, 0x4
  /* 17F14 1A5BC4 80389374 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x17F18, 0x4
  /* 17F1C 1A5BCC 8038937C */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x17F20, 0x4
  /* 17F24 1A5BD4 80389384 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x17F28, 0x4
  /* 17F2C 1A5BDC 8038938C */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x17F30, 0x4
  /* 17F34 1A5BE4 80389394 */  .4byte func_ovl8_80373AC4
  .incbin "ovl8.raw.bin", 0x17F38, 0x4
  /* 17F3C 1A5BEC 8038939C */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x17F40, 0x4
  /* 17F44 1A5BF4 803893A4 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x17F48, 0x4
  /* 17F4C 1A5BFC 803893AC */  .4byte func_ovl8_803743D8
  .incbin "ovl8.raw.bin", 0x17F50, 0x4
  /* 17F54 1A5C04 803893B4 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x17F58, 0x4
  /* 17F5C 1A5C0C 803893BC */  .4byte func_ovl8_803743C0
  .incbin "ovl8.raw.bin", 0x17F60, 0x8

glabel D_ovl8_803893C8
  .incbin "ovl8.raw.bin", 0x17F68, 0xC
  /* 17F74 1A5C24 803893D4 */  .4byte func_ovl8_80373D88
  .incbin "ovl8.raw.bin", 0x17F78, 0x4
  /* 17F7C 1A5C2C 803893DC */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x17F80, 0x4
  /* 17F84 1A5C34 803893E4 */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x17F88, 0x4
  /* 17F8C 1A5C3C 803893EC */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x17F90, 0x4
  /* 17F94 1A5C44 803893F4 */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x17F98, 0x4
  /* 17F9C 1A5C4C 803893FC */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x17FA0, 0x4
  /* 17FA4 1A5C54 80389404 */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x17FA8, 0x4
  /* 17FAC 1A5C5C 8038940C */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x17FB0, 0x4
  /* 17FB4 1A5C64 80389414 */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x17FB8, 0x4
  /* 17FBC 1A5C6C 8038941C */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x17FC0, 0x4
  /* 17FC4 1A5C74 80389424 */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x17FC8, 0x4
  /* 17FCC 1A5C7C 8038942C */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x17FD0, 0x4
  /* 17FD4 1A5C84 80389434 */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x17FD8, 0x4
  /* 17FDC 1A5C8C 8038943C */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x17FE0, 0x4
  /* 17FE4 1A5C94 80389444 */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x17FE8, 0x4
  /* 17FEC 1A5C9C 8038944C */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x17FF0, 0x4
  /* 17FF4 1A5CA4 80389454 */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x17FF8, 0x4
  /* 17FFC 1A5CAC 8038945C */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x18000, 0x4
  /* 18004 1A5CB4 80389464 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x18008, 0x4
  /* 1800C 1A5CBC 8038946C */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x18010, 0x4
  /* 18014 1A5CC4 80389474 */  .4byte func_ovl8_80371C50
  .incbin "ovl8.raw.bin", 0x18018, 0x4
  /* 1801C 1A5CCC 8038947C */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x18020, 0x4
  /* 18024 1A5CD4 80389484 */  .4byte func_ovl8_80371CB8
  .incbin "ovl8.raw.bin", 0x18028, 0x4
  /* 1802C 1A5CDC 8038948C */  .4byte func_ovl8_80373640
  .incbin "ovl8.raw.bin", 0x18030, 0x4
  /* 18034 1A5CE4 80389494 */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x18038, 0x4
  /* 1803C 1A5CEC 8038949C */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x18040, 0x4
  /* 18044 1A5CF4 803894A4 */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x18048, 0x4
  /* 1804C 1A5CFC 803894AC */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x18050, 0x4
  /* 18054 1A5D04 803894B4 */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x18058, 0x4
  /* 1805C 1A5D0C 803894BC */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x18060, 0x4
  /* 18064 1A5D14 803894C4 */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x18068, 0x4
  /* 1806C 1A5D1C 803894CC */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x18070, 0x4
  /* 18074 1A5D24 803894D4 */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x18078, 0x4
  /* 1807C 1A5D2C 803894DC */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x18080, 0x4
  /* 18084 1A5D34 803894E4 */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x18088, 0x4
  /* 1808C 1A5D3C 803894EC */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x18090, 0x4
  /* 18094 1A5D44 803894F4 */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x18098, 0x4
  /* 1809C 1A5D4C 803894FC */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x180A0, 0x4
  /* 180A4 1A5D54 80389504 */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x180A8, 0x4
  /* 180AC 1A5D5C 8038950C */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x180B0, 0x4
  /* 180B4 1A5D64 80389514 */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x180B8, 0x8

glabel D_ovl8_80389520
  .incbin "ovl8.raw.bin", 0x180C0, 0xC
  /* 180CC 1A5D7C 8038952C */  .4byte func_ovl8_80373D88
  .incbin "ovl8.raw.bin", 0x180D0, 0x4
  /* 180D4 1A5D84 80389534 */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x180D8, 0x4
  /* 180DC 1A5D8C 8038953C */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x180E0, 0x10

glabel D_ovl8_80389550
  .incbin "ovl8.raw.bin", 0x180F0, 0x30

glabel D_ovl8_80389580
  .incbin "ovl8.raw.bin", 0x18120, 0x4
  /* 18124 1A5DD4 80389584 */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x18128, 0x10

glabel D_ovl8_80389598
  .incbin "ovl8.raw.bin", 0x18138, 0x4
  /* 1813C 1A5DEC 8038959C */  .4byte 0x80018000 # .4byte func_80018000
  .incbin "ovl8.raw.bin", 0x18140, 0x4
  /* 18144 1A5DF4 803895A4 */  .4byte 0x80008001 # Warning: missing label
  /* 18148 1A5DF8 803895A8 */  .4byte 0x80008001 # Warning: missing label
  .incbin "ovl8.raw.bin", 0x1814C, 0x4
  /* 18150 1A5E00 803895B0 */  .4byte 0x80018000 # .4byte func_80018000
  /* 18154 1A5E04 803895B4 */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x18158, 0x4
  /* 1815C 1A5E0C 803895BC */  .4byte 0x80008000
  /* 18160 1A5E10 803895C0 */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x18164, 0x10

glabel D_ovl8_803895D4
  .incbin "ovl8.raw.bin", 0x18174, 0x4
  /* 18178 1A5E28 803895D8 */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x1817C, 0x4
  /* 18180 1A5E30 803895E0 */  .4byte 0x80010000
  /* 18184 1A5E34 803895E4 */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x18188, 0x10

glabel D_ovl8_803895F8
  .incbin "ovl8.raw.bin", 0x18198, 0x4
  /* 1819C 1A5E4C 803895FC */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x181A0, 0x1C

glabel D_ovl8_8038961C
  .incbin "ovl8.raw.bin", 0x181BC, 0x4
  /* 181C0 1A5E70 80389620 */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x181C4, 0x10

glabel D_ovl8_80389634
  .incbin "ovl8.raw.bin", 0x181D4, 0x3C

glabel D_ovl8_80389670
  .incbin "ovl8.raw.bin", 0x18210, 0xC
  /* 1821C 1A5ECC 8038967C */  .4byte func_ovl8_80375270
  .incbin "ovl8.raw.bin", 0x18220, 0x4
  /* 18224 1A5ED4 80389684 */  .4byte func_ovl8_80375354
  .incbin "ovl8.raw.bin", 0x18228, 0x4
  /* 1822C 1A5EDC 8038968C */  .4byte func_ovl8_80375528
  .incbin "ovl8.raw.bin", 0x18230, 0x4
  /* 18234 1A5EE4 80389694 */  .4byte func_ovl8_803755C4
  .incbin "ovl8.raw.bin", 0x18238, 0x4
  /* 1823C 1A5EEC 8038969C */  .4byte func_ovl8_80375864
  .incbin "ovl8.raw.bin", 0x18240, 0x8

glabel D_ovl8_803896A8
  .incbin "ovl8.raw.bin", 0x18248, 0xC
  /* 18254 1A5F04 803896B4 */  .4byte func_ovl8_80375270
  .incbin "ovl8.raw.bin", 0x18258, 0x4
  /* 1825C 1A5F0C 803896BC */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x18260, 0x4
  /* 18264 1A5F14 803896C4 */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x18268, 0x4
  /* 1826C 1A5F1C 803896CC */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x18270, 0x4
  /* 18274 1A5F24 803896D4 */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x18278, 0x4
  /* 1827C 1A5F2C 803896DC */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x18280, 0x4
  /* 18284 1A5F34 803896E4 */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x18288, 0x4
  /* 1828C 1A5F3C 803896EC */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x18290, 0x4
  /* 18294 1A5F44 803896F4 */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x18298, 0x4
  /* 1829C 1A5F4C 803896FC */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x182A0, 0x4
  /* 182A4 1A5F54 80389704 */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x182A8, 0x4
  /* 182AC 1A5F5C 8038970C */  .4byte func_ovl8_80375354
  .incbin "ovl8.raw.bin", 0x182B0, 0x4
  /* 182B4 1A5F64 80389714 */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x182B8, 0x4
  /* 182BC 1A5F6C 8038971C */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x182C0, 0x4
  /* 182C4 1A5F74 80389724 */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x182C8, 0x4
  /* 182CC 1A5F7C 8038972C */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x182D0, 0x4
  /* 182D4 1A5F84 80389734 */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x182D8, 0x4
  /* 182DC 1A5F8C 8038973C */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x182E0, 0x4
  /* 182E4 1A5F94 80389744 */  .4byte func_ovl8_80371C1C
  .incbin "ovl8.raw.bin", 0x182E8, 0x4
  /* 182EC 1A5F9C 8038974C */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x182F0, 0x4
  /* 182F4 1A5FA4 80389754 */  .4byte func_ovl8_80371C50
  .incbin "ovl8.raw.bin", 0x182F8, 0x4
  /* 182FC 1A5FAC 8038975C */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x18300, 0x4
  /* 18304 1A5FB4 80389764 */  .4byte func_ovl8_80371CB8
  .incbin "ovl8.raw.bin", 0x18308, 0x4
  /* 1830C 1A5FBC 8038976C */  .4byte func_ovl8_80371D00
  .incbin "ovl8.raw.bin", 0x18310, 0x4
  /* 18314 1A5FC4 80389774 */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x18318, 0x4
  /* 1831C 1A5FCC 8038977C */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x18320, 0x4
  /* 18324 1A5FD4 80389784 */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x18328, 0x4
  /* 1832C 1A5FDC 8038978C */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x18330, 0x4
  /* 18334 1A5FE4 80389794 */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x18338, 0x4
  /* 1833C 1A5FEC 8038979C */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x18340, 0x4
  /* 18344 1A5FF4 803897A4 */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x18348, 0x4
  /* 1834C 1A5FFC 803897AC */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x18350, 0x4
  /* 18354 1A6004 803897B4 */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x18358, 0x4
  /* 1835C 1A600C 803897BC */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x18360, 0x4
  /* 18364 1A6014 803897C4 */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x18368, 0x4
  /* 1836C 1A601C 803897CC */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x18370, 0x4
  /* 18374 1A6024 803897D4 */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x18378, 0x4
  /* 1837C 1A602C 803897DC */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x18380, 0x4
  /* 18384 1A6034 803897E4 */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x18388, 0x4
  /* 1838C 1A603C 803897EC */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x18390, 0x4
  /* 18394 1A6044 803897F4 */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x18398, 0x8

glabel D_ovl8_80389800
  .incbin "ovl8.raw.bin", 0x183A0, 0xC
  /* 183AC 1A605C 8038980C */  .4byte func_ovl8_80375270
  .incbin "ovl8.raw.bin", 0x183B0, 0x4
  /* 183B4 1A6064 80389814 */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x183B8, 0x4
  /* 183BC 1A606C 8038981C */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x183C0, 0x10

glabel D_ovl8_80389830
  .incbin "ovl8.raw.bin", 0x183D0, 0xC
  /* 183DC 1A608C 8038983C */  .4byte func_ovl8_80375B04
  .incbin "ovl8.raw.bin", 0x183E0, 0x4
  /* 183E4 1A6094 80389844 */  .4byte func_ovl8_8037217C
  .incbin "ovl8.raw.bin", 0x183E8, 0x4
  /* 183EC 1A609C 8038984C */  .4byte func_ovl8_803721E8
  .incbin "ovl8.raw.bin", 0x183F0, 0x4
  /* 183F4 1A60A4 80389854 */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x183F8, 0x4
  /* 183FC 1A60AC 8038985C */  .4byte func_ovl8_80372250
  .incbin "ovl8.raw.bin", 0x18400, 0x4
  /* 18404 1A60B4 80389864 */  .4byte func_ovl8_803722A0
  .incbin "ovl8.raw.bin", 0x18408, 0x4
  /* 1840C 1A60BC 8038986C */  .4byte func_ovl8_803722F0
  .incbin "ovl8.raw.bin", 0x18410, 0x4
  /* 18414 1A60C4 80389874 */  .4byte func_ovl8_80372348
  .incbin "ovl8.raw.bin", 0x18418, 0x4
  /* 1841C 1A60CC 8038987C */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x18420, 0x4
  /* 18424 1A60D4 80389884 */  .4byte func_ovl8_80372360
  .incbin "ovl8.raw.bin", 0x18428, 0x4
  /* 1842C 1A60DC 8038988C */  .4byte func_ovl8_80375BEC
  .incbin "ovl8.raw.bin", 0x18430, 0x8

glabel D_ovl8_80389898
  .incbin "ovl8.raw.bin", 0x18438, 0xC
  /* 18444 1A60F4 803898A4 */  .4byte func_ovl8_80375B04
  .incbin "ovl8.raw.bin", 0x18448, 0x4
  /* 1844C 1A60FC 803898AC */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x18450, 0x4
  /* 18454 1A6104 803898B4 */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x18458, 0x4
  /* 1845C 1A610C 803898BC */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x18460, 0x4
  /* 18464 1A6114 803898C4 */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x18468, 0x4
  /* 1846C 1A611C 803898CC */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x18470, 0x4
  /* 18474 1A6124 803898D4 */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x18478, 0x4
  /* 1847C 1A612C 803898DC */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x18480, 0x4
  /* 18484 1A6134 803898E4 */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x18488, 0x4
  /* 1848C 1A613C 803898EC */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x18490, 0x4
  /* 18494 1A6144 803898F4 */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x18498, 0x4
  /* 1849C 1A614C 803898FC */  .4byte func_ovl8_8037217C
  .incbin "ovl8.raw.bin", 0x184A0, 0x4
  /* 184A4 1A6154 80389904 */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x184A8, 0x4
  /* 184AC 1A615C 8038990C */  .4byte func_ovl8_80375BEC
  .incbin "ovl8.raw.bin", 0x184B0, 0x4
  /* 184B4 1A6164 80389914 */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x184B8, 0x4
  /* 184BC 1A616C 8038991C */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x184C0, 0x4
  /* 184C4 1A6174 80389924 */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x184C8, 0x4
  /* 184CC 1A617C 8038992C */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x184D0, 0x4
  /* 184D4 1A6184 80389934 */  .4byte func_ovl8_80371C1C
  .incbin "ovl8.raw.bin", 0x184D8, 0x4
  /* 184DC 1A618C 8038993C */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x184E0, 0x4
  /* 184E4 1A6194 80389944 */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x184E8, 0x4
  /* 184EC 1A619C 8038994C */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x184F0, 0x4
  /* 184F4 1A61A4 80389954 */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x184F8, 0x4
  /* 184FC 1A61AC 8038995C */  .4byte func_ovl8_80371D00
  .incbin "ovl8.raw.bin", 0x18500, 0x4
  /* 18504 1A61B4 80389964 */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x18508, 0x4
  /* 1850C 1A61BC 8038996C */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x18510, 0x4
  /* 18514 1A61C4 80389974 */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x18518, 0x4
  /* 1851C 1A61CC 8038997C */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x18520, 0x4
  /* 18524 1A61D4 80389984 */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x18528, 0x4
  /* 1852C 1A61DC 8038998C */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x18530, 0x4
  /* 18534 1A61E4 80389994 */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x18538, 0x4
  /* 1853C 1A61EC 8038999C */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x18540, 0x4
  /* 18544 1A61F4 803899A4 */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x18548, 0x4
  /* 1854C 1A61FC 803899AC */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x18550, 0x4
  /* 18554 1A6204 803899B4 */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x18558, 0x4
  /* 1855C 1A620C 803899BC */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x18560, 0x4
  /* 18564 1A6214 803899C4 */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x18568, 0x4
  /* 1856C 1A621C 803899CC */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x18570, 0x4
  /* 18574 1A6224 803899D4 */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x18578, 0x4
  /* 1857C 1A622C 803899DC */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x18580, 0x4
  /* 18584 1A6234 803899E4 */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x18588, 0x8

glabel D_ovl8_803899F0
  .incbin "ovl8.raw.bin", 0x18590, 0xC
  /* 1859C 1A624C 803899FC */  .4byte func_ovl8_803761F4
  .incbin "ovl8.raw.bin", 0x185A0, 0x4
  /* 185A4 1A6254 80389A04 */  .4byte func_ovl8_803762B4
  .incbin "ovl8.raw.bin", 0x185A8, 0x4
  /* 185AC 1A625C 80389A0C */  .4byte func_ovl8_80375528
  .incbin "ovl8.raw.bin", 0x185B0, 0x4
  /* 185B4 1A6264 80389A14 */  .4byte func_ovl8_803755C4
  .incbin "ovl8.raw.bin", 0x185B8, 0x4
  /* 185BC 1A626C 80389A1C */  .4byte func_ovl8_80375864
  .incbin "ovl8.raw.bin", 0x185C0, 0x4
  /* 185C4 1A6274 80389A24 */  .4byte func_ovl8_803762AC
  .incbin "ovl8.raw.bin", 0x185C8, 0x4
  /* 185CC 1A627C 80389A2C */  .4byte func_ovl8_80372A48
  .incbin "ovl8.raw.bin", 0x185D0, 0x4
  /* 185D4 1A6284 80389A34 */  .4byte func_ovl8_80372A94
  .incbin "ovl8.raw.bin", 0x185D8, 0x4
  /* 185DC 1A628C 80389A3C */  .4byte func_ovl8_803764C8
  .incbin "ovl8.raw.bin", 0x185E0, 0x4
  /* 185E4 1A6294 80389A44 */  .4byte func_ovl8_80372D18
  .incbin "ovl8.raw.bin", 0x185E8, 0x4
  /* 185EC 1A629C 80389A4C */  .4byte func_ovl8_80372D70
  .incbin "ovl8.raw.bin", 0x185F0, 0x4
  /* 185F4 1A62A4 80389A54 */  .4byte func_ovl8_80372DC8
  .incbin "ovl8.raw.bin", 0x185F8, 0x4
  /* 185FC 1A62AC 80389A5C */  .4byte func_ovl8_80372DD8
  .incbin "ovl8.raw.bin", 0x18600, 0x4
  /* 18604 1A62B4 80389A64 */  .4byte func_ovl8_80372DE8
  .incbin "ovl8.raw.bin", 0x18608, 0x4
  /* 1860C 1A62BC 80389A6C */  .4byte func_ovl8_80372E40
  .incbin "ovl8.raw.bin", 0x18610, 0x4
  /* 18614 1A62C4 80389A74 */  .4byte func_ovl8_80372FEC
  .incbin "ovl8.raw.bin", 0x18618, 0x4
  /* 1861C 1A62CC 80389A7C */  .4byte func_ovl8_80373044
  .incbin "ovl8.raw.bin", 0x18620, 0x4
  /* 18624 1A62D4 80389A84 */  .4byte func_ovl8_803730DC
  .incbin "ovl8.raw.bin", 0x18628, 0x4
  /* 1862C 1A62DC 80389A8C */  .4byte func_ovl8_80373118
  .incbin "ovl8.raw.bin", 0x18630, 0x4
  /* 18634 1A62E4 80389A94 */  .4byte func_ovl8_80373138
  .incbin "ovl8.raw.bin", 0x18638, 0x4
  /* 1863C 1A62EC 80389A9C */  .4byte func_ovl8_803732B0
  .incbin "ovl8.raw.bin", 0x18640, 0x8

glabel D_ovl8_80389AA8
  .incbin "ovl8.raw.bin", 0x18648, 0xC
  /* 18654 1A6304 80389AB4 */  .4byte func_ovl8_803761F4
  .incbin "ovl8.raw.bin", 0x18658, 0x4
  /* 1865C 1A630C 80389ABC */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x18660, 0x4
  /* 18664 1A6314 80389AC4 */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x18668, 0x4
  /* 1866C 1A631C 80389ACC */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x18670, 0x4
  /* 18674 1A6324 80389AD4 */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x18678, 0x4
  /* 1867C 1A632C 80389ADC */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x18680, 0x4
  /* 18684 1A6334 80389AE4 */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x18688, 0x4
  /* 1868C 1A633C 80389AEC */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x18690, 0x4
  /* 18694 1A6344 80389AF4 */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x18698, 0x4
  /* 1869C 1A634C 80389AFC */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x186A0, 0x4
  /* 186A4 1A6354 80389B04 */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x186A8, 0x4
  /* 186AC 1A635C 80389B0C */  .4byte func_ovl8_803762B4
  .incbin "ovl8.raw.bin", 0x186B0, 0x4
  /* 186B4 1A6364 80389B14 */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x186B8, 0x4
  /* 186BC 1A636C 80389B1C */  .4byte func_ovl8_80372A94
  .incbin "ovl8.raw.bin", 0x186C0, 0x4
  /* 186C4 1A6374 80389B24 */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x186C8, 0x4
  /* 186CC 1A637C 80389B2C */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x186D0, 0x4
  /* 186D4 1A6384 80389B34 */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x186D8, 0x4
  /* 186DC 1A638C 80389B3C */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x186E0, 0x4
  /* 186E4 1A6394 80389B44 */  .4byte func_ovl8_803764C8
  .incbin "ovl8.raw.bin", 0x186E8, 0x4
  /* 186EC 1A639C 80389B4C */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x186F0, 0x4
  /* 186F4 1A63A4 80389B54 */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x186F8, 0x4
  /* 186FC 1A63AC 80389B5C */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x18700, 0x4
  /* 18704 1A63B4 80389B64 */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x18708, 0x4
  /* 1870C 1A63BC 80389B6C */  .4byte func_ovl8_80371D00
  .incbin "ovl8.raw.bin", 0x18710, 0x4
  /* 18714 1A63C4 80389B74 */  .4byte func_ovl8_80372D70
  .incbin "ovl8.raw.bin", 0x18718, 0x4
  /* 1871C 1A63CC 80389B7C */  .4byte func_ovl8_80372DC8
  .incbin "ovl8.raw.bin", 0x18720, 0x4
  /* 18724 1A63D4 80389B84 */  .4byte func_ovl8_80372D18
  .incbin "ovl8.raw.bin", 0x18728, 0x4
  /* 1872C 1A63DC 80389B8C */  .4byte func_ovl8_80372DD8
  .incbin "ovl8.raw.bin", 0x18730, 0x4
  /* 18734 1A63E4 80389B94 */  .4byte func_ovl8_80373118
  .incbin "ovl8.raw.bin", 0x18738, 0x4
  /* 1873C 1A63EC 80389B9C */  .4byte func_ovl8_80373138
  .incbin "ovl8.raw.bin", 0x18740, 0x4
  /* 18744 1A63F4 80389BA4 */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x18748, 0x4
  /* 1874C 1A63FC 80389BAC */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x18750, 0x4
  /* 18754 1A6404 80389BB4 */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x18758, 0x4
  /* 1875C 1A640C 80389BBC */  .4byte func_ovl8_80372DE8
  .incbin "ovl8.raw.bin", 0x18760, 0x4
  /* 18764 1A6414 80389BC4 */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x18768, 0x4
  /* 1876C 1A641C 80389BCC */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x18770, 0x4
  /* 18774 1A6424 80389BD4 */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x18778, 0x4
  /* 1877C 1A642C 80389BDC */  .4byte func_ovl8_803732B0
  .incbin "ovl8.raw.bin", 0x18780, 0x4
  /* 18784 1A6434 80389BE4 */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x18788, 0x4
  /* 1878C 1A643C 80389BEC */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x18790, 0x4
  /* 18794 1A6444 80389BF4 */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x18798, 0x8

glabel D_ovl8_80389C00
  .incbin "ovl8.raw.bin", 0x187A0, 0xC
  /* 187AC 1A645C 80389C0C */  .4byte func_ovl8_803761F4
  .incbin "ovl8.raw.bin", 0x187B0, 0x4
  /* 187B4 1A6464 80389C14 */  .4byte func_ovl8_803730DC
  .incbin "ovl8.raw.bin", 0x187B8, 0x4
  /* 187BC 1A646C 80389C1C */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x187C0, 0x8

glabel D_ovl8_80389C28
  .incbin "ovl8.raw.bin", 0x187C8, 0xC
  /* 187D4 1A6484 80389C34 */  .4byte func_ovl8_803761F4
  .incbin "ovl8.raw.bin", 0x187D8, 0x4
  /* 187DC 1A648C 80389C3C */  .4byte func_ovl8_803762B4
  .incbin "ovl8.raw.bin", 0x187E0, 0x4
  /* 187E4 1A6494 80389C44 */  .4byte func_ovl8_803721E8
  .incbin "ovl8.raw.bin", 0x187E8, 0x4
  /* 187EC 1A649C 80389C4C */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x187F0, 0x4
  /* 187F4 1A64A4 80389C54 */  .4byte func_ovl8_80372250
  .incbin "ovl8.raw.bin", 0x187F8, 0x4
  /* 187FC 1A64AC 80389C5C */  .4byte func_ovl8_803722A0
  .incbin "ovl8.raw.bin", 0x18800, 0x4
  /* 18804 1A64B4 80389C64 */  .4byte func_ovl8_803722F0
  .incbin "ovl8.raw.bin", 0x18808, 0x4
  /* 1880C 1A64BC 80389C6C */  .4byte func_ovl8_80372348
  .incbin "ovl8.raw.bin", 0x18810, 0x4
  /* 18814 1A64C4 80389C74 */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x18818, 0x4
  /* 1881C 1A64CC 80389C7C */  .4byte func_ovl8_80372360
  .incbin "ovl8.raw.bin", 0x18820, 0x10

glabel D_ovl8_80389C90
  .incbin "ovl8.raw.bin", 0x18830, 0xC
  /* 1883C 1A64EC 80389C9C */  .4byte func_ovl8_803768E0
  .incbin "ovl8.raw.bin", 0x18840, 0x4
  /* 18844 1A64F4 80389CA4 */  .4byte func_ovl8_80376A04
  .incbin "ovl8.raw.bin", 0x18848, 0x4
  /* 1884C 1A64FC 80389CAC */  .4byte func_ovl8_80375528
  .incbin "ovl8.raw.bin", 0x18850, 0x4
  /* 18854 1A6504 80389CB4 */  .4byte func_ovl8_803755C4
  .incbin "ovl8.raw.bin", 0x18858, 0x4
  /* 1885C 1A650C 80389CBC */  .4byte func_ovl8_80375864
  .incbin "ovl8.raw.bin", 0x18860, 0x4
  /* 18864 1A6514 80389CC4 */  .4byte func_ovl8_803769AC
  .incbin "ovl8.raw.bin", 0x18868, 0x4
  /* 1886C 1A651C 80389CCC */  .4byte func_ovl8_803769B4
  .incbin "ovl8.raw.bin", 0x18870, 0x4
  /* 18874 1A6524 80389CD4 */  .4byte func_ovl8_80372A94
  .incbin "ovl8.raw.bin", 0x18878, 0x4
  /* 1887C 1A652C 80389CDC */  .4byte func_ovl8_803769D4
  .incbin "ovl8.raw.bin", 0x18880, 0x4
  /* 18884 1A6534 80389CE4 */  .4byte func_ovl8_80372D18
  .incbin "ovl8.raw.bin", 0x18888, 0x4
  /* 1888C 1A653C 80389CEC */  .4byte func_ovl8_80372D70
  .incbin "ovl8.raw.bin", 0x18890, 0x4
  /* 18894 1A6544 80389CF4 */  .4byte func_ovl8_80376A48
  .incbin "ovl8.raw.bin", 0x18898, 0x4
  /* 1889C 1A654C 80389CFC */  .4byte func_ovl8_80376AA4
  .incbin "ovl8.raw.bin", 0x188A0, 0x4
  /* 188A4 1A6554 80389D04 */  .4byte func_ovl8_80372DE8
  .incbin "ovl8.raw.bin", 0x188A8, 0x4
  /* 188AC 1A655C 80389D0C */  .4byte func_ovl8_80372E40
  .incbin "ovl8.raw.bin", 0x188B0, 0x4
  /* 188B4 1A6564 80389D14 */  .4byte func_ovl8_80376ADC
  .incbin "ovl8.raw.bin", 0x188B8, 0x4
  /* 188BC 1A656C 80389D1C */  .4byte func_ovl8_80373044
  .incbin "ovl8.raw.bin", 0x188C0, 0x4
  /* 188C4 1A6574 80389D24 */  .4byte func_ovl8_803730DC
  .incbin "ovl8.raw.bin", 0x188C8, 0x4
  /* 188CC 1A657C 80389D2C */  .4byte func_ovl8_80373118
  .incbin "ovl8.raw.bin", 0x188D0, 0x4
  /* 188D4 1A6584 80389D34 */  .4byte func_ovl8_80373138
  .incbin "ovl8.raw.bin", 0x188D8, 0x4
  /* 188DC 1A658C 80389D3C */  .4byte func_ovl8_803732B0
  .incbin "ovl8.raw.bin", 0x188E0, 0x8

glabel D_ovl8_80389D48
  .incbin "ovl8.raw.bin", 0x188E8, 0xC
  /* 188F4 1A65A4 80389D54 */  .4byte func_ovl8_803768E0
  .incbin "ovl8.raw.bin", 0x188F8, 0x4
  /* 188FC 1A65AC 80389D5C */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x18900, 0x4
  /* 18904 1A65B4 80389D64 */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x18908, 0x4
  /* 1890C 1A65BC 80389D6C */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x18910, 0x4
  /* 18914 1A65C4 80389D74 */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x18918, 0x4
  /* 1891C 1A65CC 80389D7C */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x18920, 0x4
  /* 18924 1A65D4 80389D84 */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x18928, 0x4
  /* 1892C 1A65DC 80389D8C */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x18930, 0x4
  /* 18934 1A65E4 80389D94 */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x18938, 0x4
  /* 1893C 1A65EC 80389D9C */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x18940, 0x4
  /* 18944 1A65F4 80389DA4 */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x18948, 0x4
  /* 1894C 1A65FC 80389DAC */  .4byte func_ovl8_80376A04
  .incbin "ovl8.raw.bin", 0x18950, 0x4
  /* 18954 1A6604 80389DB4 */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x18958, 0x4
  /* 1895C 1A660C 80389DBC */  .4byte func_ovl8_80372A94
  .incbin "ovl8.raw.bin", 0x18960, 0x4
  /* 18964 1A6614 80389DC4 */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x18968, 0x4
  /* 1896C 1A661C 80389DCC */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x18970, 0x4
  /* 18974 1A6624 80389DD4 */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x18978, 0x4
  /* 1897C 1A662C 80389DDC */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x18980, 0x4
  /* 18984 1A6634 80389DE4 */  .4byte func_ovl8_803769D4
  .incbin "ovl8.raw.bin", 0x18988, 0x4
  /* 1898C 1A663C 80389DEC */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x18990, 0x4
  /* 18994 1A6644 80389DF4 */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x18998, 0x4
  /* 1899C 1A664C 80389DFC */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x189A0, 0x4
  /* 189A4 1A6654 80389E04 */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x189A8, 0x4
  /* 189AC 1A665C 80389E0C */  .4byte func_ovl8_80371D00
  .incbin "ovl8.raw.bin", 0x189B0, 0x4
  /* 189B4 1A6664 80389E14 */  .4byte func_ovl8_80372D70
  .incbin "ovl8.raw.bin", 0x189B8, 0x4
  /* 189BC 1A666C 80389E1C */  .4byte func_ovl8_80376A48
  .incbin "ovl8.raw.bin", 0x189C0, 0x4
  /* 189C4 1A6674 80389E24 */  .4byte func_ovl8_80372D18
  .incbin "ovl8.raw.bin", 0x189C8, 0x4
  /* 189CC 1A667C 80389E2C */  .4byte func_ovl8_80376AA4
  .incbin "ovl8.raw.bin", 0x189D0, 0x4
  /* 189D4 1A6684 80389E34 */  .4byte func_ovl8_80373118
  .incbin "ovl8.raw.bin", 0x189D8, 0x4
  /* 189DC 1A668C 80389E3C */  .4byte func_ovl8_80373138
  .incbin "ovl8.raw.bin", 0x189E0, 0x4
  /* 189E4 1A6694 80389E44 */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x189E8, 0x4
  /* 189EC 1A669C 80389E4C */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x189F0, 0x4
  /* 189F4 1A66A4 80389E54 */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x189F8, 0x4
  /* 189FC 1A66AC 80389E5C */  .4byte func_ovl8_80372DE8
  .incbin "ovl8.raw.bin", 0x18A00, 0x4
  /* 18A04 1A66B4 80389E64 */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x18A08, 0x4
  /* 18A0C 1A66BC 80389E6C */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x18A10, 0x4
  /* 18A14 1A66C4 80389E74 */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x18A18, 0x4
  /* 18A1C 1A66CC 80389E7C */  .4byte func_ovl8_803732B0
  .incbin "ovl8.raw.bin", 0x18A20, 0x4
  /* 18A24 1A66D4 80389E84 */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x18A28, 0x4
  /* 18A2C 1A66DC 80389E8C */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x18A30, 0x4
  /* 18A34 1A66E4 80389E94 */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x18A38, 0x8

glabel D_ovl8_80389EA0
  .incbin "ovl8.raw.bin", 0x18A40, 0xC
  /* 18A4C 1A66FC 80389EAC */  .4byte func_ovl8_803768E0
  .incbin "ovl8.raw.bin", 0x18A50, 0x4
  /* 18A54 1A6704 80389EB4 */  .4byte func_ovl8_803730DC
  .incbin "ovl8.raw.bin", 0x18A58, 0x4
  /* 18A5C 1A670C 80389EBC */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x18A60, 0x8

glabel D_ovl8_80389EC8
  .incbin "ovl8.raw.bin", 0x18A68, 0xC
  /* 18A74 1A6724 80389ED4 */  .4byte func_ovl8_803768E0
  .incbin "ovl8.raw.bin", 0x18A78, 0x4
  /* 18A7C 1A672C 80389EDC */  .4byte func_ovl8_80376A04
  .incbin "ovl8.raw.bin", 0x18A80, 0x4
  /* 18A84 1A6734 80389EE4 */  .4byte func_ovl8_803721E8
  .incbin "ovl8.raw.bin", 0x18A88, 0x4
  /* 18A8C 1A673C 80389EEC */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x18A90, 0x4
  /* 18A94 1A6744 80389EF4 */  .4byte func_ovl8_80372250
  .incbin "ovl8.raw.bin", 0x18A98, 0x4
  /* 18A9C 1A674C 80389EFC */  .4byte func_ovl8_803722A0
  .incbin "ovl8.raw.bin", 0x18AA0, 0x4
  /* 18AA4 1A6754 80389F04 */  .4byte func_ovl8_803722F0
  .incbin "ovl8.raw.bin", 0x18AA8, 0x4
  /* 18AAC 1A675C 80389F0C */  .4byte func_ovl8_80372348
  .incbin "ovl8.raw.bin", 0x18AB0, 0x4
  /* 18AB4 1A6764 80389F14 */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x18AB8, 0x4
  /* 18ABC 1A676C 80389F1C */  .4byte func_ovl8_80372360
  .incbin "ovl8.raw.bin", 0x18AC0, 0x10

glabel D_ovl8_80389F30
  .incbin "ovl8.raw.bin", 0x18AD0, 0x4

glabel D_ovl8_80389F34
  .incbin "ovl8.raw.bin", 0x18AD4, 0x4

glabel D_ovl8_80389F38
  .incbin "ovl8.raw.bin", 0x18AD8, 0x4

glabel D_ovl8_80389F3C
  .incbin "ovl8.raw.bin", 0x18ADC, 0x4

glabel D_ovl8_80389F40
  .incbin "ovl8.raw.bin", 0x18AE0, 0x4

glabel D_ovl8_80389F44
  .incbin "ovl8.raw.bin", 0x18AE4, 0x4

glabel D_ovl8_80389F48
  .incbin "ovl8.raw.bin", 0x18AE8, 0x4

glabel D_ovl8_80389F4C
  .incbin "ovl8.raw.bin", 0x18AEC, 0x4

glabel D_ovl8_80389F50
  .incbin "ovl8.raw.bin", 0x18AF0, 0xC

glabel D_ovl8_80389F5C
  .incbin "ovl8.raw.bin", 0x18AFC, 0x4

glabel D_ovl8_80389F60
  .incbin "ovl8.raw.bin", 0x18B00, 0x4

glabel D_ovl8_80389F64
  .incbin "ovl8.raw.bin", 0x18B04, 0x4

glabel D_ovl8_80389F68
  .incbin "ovl8.raw.bin", 0x18B08, 0x8

glabel D_ovl8_80389F70
  .incbin "ovl8.raw.bin", 0x18B10, 0x44

glabel D_ovl8_80389FB4
  .incbin "ovl8.raw.bin", 0x18B54, 0x4
  /* 18B58 1A6808 80389FB8 */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x18B5C, 0x8
  /* 18B64 1A6814 80389FC4 */  .4byte 0x80010000
  .incbin "ovl8.raw.bin", 0x18B68, 0x10
  /* 18B78 1A6828 80389FD8 */  .4byte 0x80010002 # Warning: missing label
  /* 18B7C 1A682C 80389FDC */  .4byte 0x80018001 # Warning: missing label
  .incbin "ovl8.raw.bin", 0x18B80, 0x8
  /* 18B88 1A6838 80389FE8 */  .4byte 0x80018001 # Warning: missing label
  .incbin "ovl8.raw.bin", 0x18B8C, 0x8
  /* 18B94 1A6844 80389FF4 */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x18B98, 0x8
  /* 18BA0 1A6850 8038A000 */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x18BA4, 0x10
  /* 18BB4 1A6864 8038A014 */  .4byte 0x80010001 # Warning: missing label
  /* 18BB8 1A6868 8038A018 */  .4byte 0x80010001 # Warning: missing label
  .incbin "ovl8.raw.bin", 0x18BBC, 0x38
  /* 18BF4 1A68A4 8038A054 */  .4byte 0x80028002 # Warning: missing label
  .incbin "ovl8.raw.bin", 0x18BF8, 0x10

glabel D_ovl8_8038A068
  .incbin "ovl8.raw.bin", 0x18C08, 0x4
  /* 18C0C 1A68BC 8038A06C */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x18C10, 0x8
  /* 18C18 1A68C8 8038A078 */  .4byte func_80020000
  .incbin "ovl8.raw.bin", 0x18C1C, 0x14
  /* 18C30 1A68E0 8038A090 */  .4byte 0x80020001 # Warning: missing label
  .incbin "ovl8.raw.bin", 0x18C34, 0x10
  /* 18C44 1A68F4 8038A0A4 */  .4byte 0x80010000
  /* 18C48 1A68F8 8038A0A8 */  .4byte 0x80010000
  .incbin "ovl8.raw.bin", 0x18C4C, 0x1C
  /* 18C68 1A6918 8038A0C8 */  .4byte 0x80010001 # Warning: missing label
  /* 18C6C 1A691C 8038A0CC */  .4byte 0x80010001 # Warning: missing label
  .incbin "ovl8.raw.bin", 0x18C70, 0x20
  /* 18C90 1A6940 8038A0F0 */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x18C94, 0x8
  /* 18C9C 1A694C 8038A0FC */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x18CA0, 0x8
  /* 18CA8 1A6958 8038A108 */  .4byte 0x80028002 # Warning: missing label
  .incbin "ovl8.raw.bin", 0x18CAC, 0x10

glabel D_ovl8_8038A11C
  .incbin "ovl8.raw.bin", 0x18CBC, 0x28

glabel D_ovl8_8038A144
  .incbin "ovl8.raw.bin", 0x18CE4, 0x2C

glabel D_ovl8_8038A170
  .incbin "ovl8.raw.bin", 0x18D10, 0xC
  /* 18D1C 1A69CC 8038A17C */  .4byte func_ovl8_8037C30C
  .incbin "ovl8.raw.bin", 0x18D20, 0x4
  /* 18D24 1A69D4 8038A184 */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x18D28, 0x4
  /* 18D2C 1A69DC 8038A18C */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x18D30, 0x10

glabel D_ovl8_8038A1A0
  .incbin "ovl8.raw.bin", 0x18D40, 0xC
  /* 18D4C 1A69FC 8038A1AC */  .4byte func_ovl8_8037C440
  .incbin "ovl8.raw.bin", 0x18D50, 0x8

glabel D_ovl8_8038A1B8
  .incbin "ovl8.raw.bin", 0x18D58, 0x4

glabel D_ovl8_8038A1BC
  .incbin "ovl8.raw.bin", 0x18D5C, 0x4

glabel D_ovl8_8038A1C0
  .incbin "ovl8.raw.bin", 0x18D60, 0x4

glabel D_ovl8_8038A1C4
  .incbin "ovl8.raw.bin", 0x18D64, 0x4

glabel D_ovl8_8038A1C8
  .incbin "ovl8.raw.bin", 0x18D68, 0x8

glabel D_ovl8_8038A1D0
  .incbin "ovl8.raw.bin", 0x18D70, 0xC
  /* 18D7C 1A6A2C 8038A1DC */  .4byte func_ovl8_8037C92C
  .incbin "ovl8.raw.bin", 0x18D80, 0x4
  /* 18D84 1A6A34 8038A1E4 */  .4byte func_ovl8_80373640
  .incbin "ovl8.raw.bin", 0x18D88, 0x4
  /* 18D8C 1A6A3C 8038A1EC */  .4byte func_ovl8_8037C9E4
  .incbin "ovl8.raw.bin", 0x18D90, 0x4
  /* 18D94 1A6A44 8038A1F4 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x18D98, 0x4
  /* 18D9C 1A6A4C 8038A1FC */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x18DA0, 0x4
  /* 18DA4 1A6A54 8038A204 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x18DA8, 0x4
  /* 18DAC 1A6A5C 8038A20C */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x18DB0, 0x4
  /* 18DB4 1A6A64 8038A214 */  .4byte func_ovl8_80373694
  .incbin "ovl8.raw.bin", 0x18DB8, 0x4
  /* 18DBC 1A6A6C 8038A21C */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x18DC0, 0x4
  /* 18DC4 1A6A74 8038A224 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x18DC8, 0x4
  /* 18DCC 1A6A7C 8038A22C */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x18DD0, 0x4
  /* 18DD4 1A6A84 8038A234 */  .4byte func_ovl8_80373E24
  .incbin "ovl8.raw.bin", 0x18DD8, 0x4
  /* 18DDC 1A6A8C 8038A23C */  .4byte func_ovl8_80373EA8
  .incbin "ovl8.raw.bin", 0x18DE0, 0x4
  /* 18DE4 1A6A94 8038A244 */  .4byte func_ovl8_80373930
  .incbin "ovl8.raw.bin", 0x18DE8, 0x4
  /* 18DEC 1A6A9C 8038A24C */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x18DF0, 0x4
  /* 18DF4 1A6AA4 8038A254 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x18DF8, 0x4
  /* 18DFC 1A6AAC 8038A25C */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x18E00, 0x4
  /* 18E04 1A6AB4 8038A264 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x18E08, 0x4
  /* 18E0C 1A6ABC 8038A26C */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x18E10, 0x4
  /* 18E14 1A6AC4 8038A274 */  .4byte func_ovl8_80373AC4
  .incbin "ovl8.raw.bin", 0x18E18, 0x4
  /* 18E1C 1A6ACC 8038A27C */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x18E20, 0x4
  /* 18E24 1A6AD4 8038A284 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x18E28, 0x4
  /* 18E2C 1A6ADC 8038A28C */  .4byte func_ovl8_803743D8
  .incbin "ovl8.raw.bin", 0x18E30, 0x4
  /* 18E34 1A6AE4 8038A294 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x18E38, 0x4
  /* 18E3C 1A6AEC 8038A29C */  .4byte func_ovl8_803743C0
  .incbin "ovl8.raw.bin", 0x18E40, 0x4
  /* 18E44 1A6AF4 8038A2A4 */  .4byte func_ovl8_8037CA48
  .incbin "ovl8.raw.bin", 0x18E48, 0x8

glabel D_ovl8_8038A2B0
  .incbin "ovl8.raw.bin", 0x18E50, 0xC
  /* 18E5C 1A6B0C 8038A2BC */  .4byte func_ovl8_8037C92C
  .incbin "ovl8.raw.bin", 0x18E60, 0x4
  /* 18E64 1A6B14 8038A2C4 */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x18E68, 0x4
  /* 18E6C 1A6B1C 8038A2CC */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x18E70, 0x4
  /* 18E74 1A6B24 8038A2D4 */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x18E78, 0x4
  /* 18E7C 1A6B2C 8038A2DC */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x18E80, 0x4
  /* 18E84 1A6B34 8038A2E4 */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x18E88, 0x4
  /* 18E8C 1A6B3C 8038A2EC */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x18E90, 0x4
  /* 18E94 1A6B44 8038A2F4 */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x18E98, 0x4
  /* 18E9C 1A6B4C 8038A2FC */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x18EA0, 0x4
  /* 18EA4 1A6B54 8038A304 */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x18EA8, 0x4
  /* 18EAC 1A6B5C 8038A30C */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x18EB0, 0x4
  /* 18EB4 1A6B64 8038A314 */  .4byte func_ovl8_8037C9E4
  .incbin "ovl8.raw.bin", 0x18EB8, 0x4
  /* 18EBC 1A6B6C 8038A31C */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x18EC0, 0x4
  /* 18EC4 1A6B74 8038A324 */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x18EC8, 0x4
  /* 18ECC 1A6B7C 8038A32C */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x18ED0, 0x4
  /* 18ED4 1A6B84 8038A334 */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x18ED8, 0x4
  /* 18EDC 1A6B8C 8038A33C */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x18EE0, 0x4
  /* 18EE4 1A6B94 8038A344 */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x18EE8, 0x4
  /* 18EEC 1A6B9C 8038A34C */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x18EF0, 0x4
  /* 18EF4 1A6BA4 8038A354 */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x18EF8, 0x4
  /* 18EFC 1A6BAC 8038A35C */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x18F00, 0x4
  /* 18F04 1A6BB4 8038A364 */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x18F08, 0x4
  /* 18F0C 1A6BBC 8038A36C */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x18F10, 0x4
  /* 18F14 1A6BC4 8038A374 */  .4byte func_ovl8_80373640
  .incbin "ovl8.raw.bin", 0x18F18, 0x4
  /* 18F1C 1A6BCC 8038A37C */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x18F20, 0x4
  /* 18F24 1A6BD4 8038A384 */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x18F28, 0x4
  /* 18F2C 1A6BDC 8038A38C */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x18F30, 0x4
  /* 18F34 1A6BE4 8038A394 */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x18F38, 0x4
  /* 18F3C 1A6BEC 8038A39C */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x18F40, 0x4
  /* 18F44 1A6BF4 8038A3A4 */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x18F48, 0x4
  /* 18F4C 1A6BFC 8038A3AC */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x18F50, 0x4
  /* 18F54 1A6C04 8038A3B4 */  .4byte func_ovl8_803726CC
  .incbin "ovl8.raw.bin", 0x18F58, 0x4
  /* 18F5C 1A6C0C 8038A3BC */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x18F60, 0x4
  /* 18F64 1A6C14 8038A3C4 */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x18F68, 0x4
  /* 18F6C 1A6C1C 8038A3CC */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x18F70, 0x4
  /* 18F74 1A6C24 8038A3D4 */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x18F78, 0x4
  /* 18F7C 1A6C2C 8038A3DC */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x18F80, 0x4
  /* 18F84 1A6C34 8038A3E4 */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x18F88, 0x4
  /* 18F8C 1A6C3C 8038A3EC */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x18F90, 0x4
  /* 18F94 1A6C44 8038A3F4 */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x18F98, 0x4
  /* 18F9C 1A6C4C 8038A3FC */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x18FA0, 0x8

glabel D_ovl8_8038A408
  .incbin "ovl8.raw.bin", 0x18FA8, 0xC
  /* 18FB4 1A6C64 8038A414 */  .4byte func_ovl8_8037C92C
  .incbin "ovl8.raw.bin", 0x18FB8, 0x4
  /* 18FBC 1A6C6C 8038A41C */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x18FC0, 0x4
  /* 18FC4 1A6C74 8038A424 */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x18FC8, 0x8

glabel D_ovl8_8038A430
  .incbin "ovl8.raw.bin", 0x18FD0, 0xC
  /* 18FDC 1A6C8C 8038A43C */  .4byte func_ovl8_8037C92C
  .incbin "ovl8.raw.bin", 0x18FE0, 0x4
  /* 18FE4 1A6C94 8038A444 */  .4byte func_ovl8_8037C9E4
  .incbin "ovl8.raw.bin", 0x18FE8, 0x4
  /* 18FEC 1A6C9C 8038A44C */  .4byte func_ovl8_803721E8
  .incbin "ovl8.raw.bin", 0x18FF0, 0x4
  /* 18FF4 1A6CA4 8038A454 */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x18FF8, 0x4
  /* 18FFC 1A6CAC 8038A45C */  .4byte func_ovl8_80372250
  .incbin "ovl8.raw.bin", 0x19000, 0x4
  /* 19004 1A6CB4 8038A464 */  .4byte func_ovl8_803722A0
  .incbin "ovl8.raw.bin", 0x19008, 0x4
  /* 1900C 1A6CBC 8038A46C */  .4byte func_ovl8_803722F0
  .incbin "ovl8.raw.bin", 0x19010, 0x4
  /* 19014 1A6CC4 8038A474 */  .4byte func_ovl8_80372348
  .incbin "ovl8.raw.bin", 0x19018, 0x4
  /* 1901C 1A6CCC 8038A47C */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x19020, 0x4
  /* 19024 1A6CD4 8038A484 */  .4byte func_ovl8_80372360
  .incbin "ovl8.raw.bin", 0x19028, 0x4
  /* 1902C 1A6CDC 8038A48C */  .4byte func_ovl8_803726CC
  .incbin "ovl8.raw.bin", 0x19030, 0x10

glabel D_ovl8_8038A4A0
  .incbin "ovl8.raw.bin", 0x19040, 0xC
  /* 1904C 1A6CFC 8038A4AC */  .4byte func_ovl8_8037CCC8
  .incbin "ovl8.raw.bin", 0x19050, 0x4
  /* 19054 1A6D04 8038A4B4 */  .4byte func_ovl8_8037CD64
  .incbin "ovl8.raw.bin", 0x19058, 0x4
  /* 1905C 1A6D0C 8038A4BC */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x19060, 0x4
  /* 19064 1A6D14 8038A4C4 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x19068, 0x4
  /* 1906C 1A6D1C 8038A4CC */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x19070, 0x4
  /* 19074 1A6D24 8038A4D4 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x19078, 0x4
  /* 1907C 1A6D2C 8038A4DC */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x19080, 0x4
  /* 19084 1A6D34 8038A4E4 */  .4byte func_ovl8_80373694
  .incbin "ovl8.raw.bin", 0x19088, 0x4
  /* 1908C 1A6D3C 8038A4EC */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x19090, 0x4
  /* 19094 1A6D44 8038A4F4 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x19098, 0x4
  /* 1909C 1A6D4C 8038A4FC */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x190A0, 0x4
  /* 190A4 1A6D54 8038A504 */  .4byte func_ovl8_80373E24
  .incbin "ovl8.raw.bin", 0x190A8, 0x4
  /* 190AC 1A6D5C 8038A50C */  .4byte func_ovl8_80373EA8
  .incbin "ovl8.raw.bin", 0x190B0, 0x4
  /* 190B4 1A6D64 8038A514 */  .4byte func_ovl8_80373930
  .incbin "ovl8.raw.bin", 0x190B8, 0x4
  /* 190BC 1A6D6C 8038A51C */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x190C0, 0x4
  /* 190C4 1A6D74 8038A524 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x190C8, 0x4
  /* 190CC 1A6D7C 8038A52C */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x190D0, 0x4
  /* 190D4 1A6D84 8038A534 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x190D8, 0x4
  /* 190DC 1A6D8C 8038A53C */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x190E0, 0x4
  /* 190E4 1A6D94 8038A544 */  .4byte func_ovl8_80373AC4
  .incbin "ovl8.raw.bin", 0x190E8, 0x4
  /* 190EC 1A6D9C 8038A54C */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x190F0, 0x4
  /* 190F4 1A6DA4 8038A554 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x190F8, 0x4
  /* 190FC 1A6DAC 8038A55C */  .4byte func_ovl8_803743D8
  .incbin "ovl8.raw.bin", 0x19100, 0x4
  /* 19104 1A6DB4 8038A564 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x19108, 0x4
  /* 1910C 1A6DBC 8038A56C */  .4byte func_ovl8_803743C0
  .incbin "ovl8.raw.bin", 0x19110, 0x8

glabel D_ovl8_8038A578
  .incbin "ovl8.raw.bin", 0x19118, 0xC
  /* 19124 1A6DD4 8038A584 */  .4byte func_ovl8_8037CCC8
  .incbin "ovl8.raw.bin", 0x19128, 0x4
  /* 1912C 1A6DDC 8038A58C */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x19130, 0x4
  /* 19134 1A6DE4 8038A594 */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x19138, 0x4
  /* 1913C 1A6DEC 8038A59C */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x19140, 0x4
  /* 19144 1A6DF4 8038A5A4 */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x19148, 0x4
  /* 1914C 1A6DFC 8038A5AC */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x19150, 0x4
  /* 19154 1A6E04 8038A5B4 */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x19158, 0x4
  /* 1915C 1A6E0C 8038A5BC */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x19160, 0x4
  /* 19164 1A6E14 8038A5C4 */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x19168, 0x4
  /* 1916C 1A6E1C 8038A5CC */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x19170, 0x4
  /* 19174 1A6E24 8038A5D4 */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x19178, 0x4
  /* 1917C 1A6E2C 8038A5DC */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x19180, 0x4
  /* 19184 1A6E34 8038A5E4 */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x19188, 0x4
  /* 1918C 1A6E3C 8038A5EC */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x19190, 0x4
  /* 19194 1A6E44 8038A5F4 */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x19198, 0x4
  /* 1919C 1A6E4C 8038A5FC */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x191A0, 0x4
  /* 191A4 1A6E54 8038A604 */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x191A8, 0x4
  /* 191AC 1A6E5C 8038A60C */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x191B0, 0x4
  /* 191B4 1A6E64 8038A614 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x191B8, 0x4
  /* 191BC 1A6E6C 8038A61C */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x191C0, 0x4
  /* 191C4 1A6E74 8038A624 */  .4byte func_ovl8_80371C50
  .incbin "ovl8.raw.bin", 0x191C8, 0x4
  /* 191CC 1A6E7C 8038A62C */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x191D0, 0x4
  /* 191D4 1A6E84 8038A634 */  .4byte func_ovl8_80371CB8
  .incbin "ovl8.raw.bin", 0x191D8, 0x4
  /* 191DC 1A6E8C 8038A63C */  .4byte func_ovl8_8037CD64
  .incbin "ovl8.raw.bin", 0x191E0, 0x4
  /* 191E4 1A6E94 8038A644 */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x191E8, 0x4
  /* 191EC 1A6E9C 8038A64C */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x191F0, 0x4
  /* 191F4 1A6EA4 8038A654 */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x191F8, 0x4
  /* 191FC 1A6EAC 8038A65C */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x19200, 0x4
  /* 19204 1A6EB4 8038A664 */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x19208, 0x4
  /* 1920C 1A6EBC 8038A66C */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x19210, 0x4
  /* 19214 1A6EC4 8038A674 */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x19218, 0x4
  /* 1921C 1A6ECC 8038A67C */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x19220, 0x4
  /* 19224 1A6ED4 8038A684 */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x19228, 0x4
  /* 1922C 1A6EDC 8038A68C */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x19230, 0x4
  /* 19234 1A6EE4 8038A694 */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x19238, 0x4
  /* 1923C 1A6EEC 8038A69C */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x19240, 0x4
  /* 19244 1A6EF4 8038A6A4 */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x19248, 0x4
  /* 1924C 1A6EFC 8038A6AC */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x19250, 0x4
  /* 19254 1A6F04 8038A6B4 */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x19258, 0x4
  /* 1925C 1A6F0C 8038A6BC */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x19260, 0x4
  /* 19264 1A6F14 8038A6C4 */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x19268, 0x8

glabel D_ovl8_8038A6D0
  .incbin "ovl8.raw.bin", 0x19270, 0xC
  /* 1927C 1A6F2C 8038A6DC */  .4byte func_ovl8_8037CCC8
  .incbin "ovl8.raw.bin", 0x19280, 0x4
  /* 19284 1A6F34 8038A6E4 */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x19288, 0x4
  /* 1928C 1A6F3C 8038A6EC */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x19290, 0x10

glabel D_ovl8_8038A700
  .incbin "ovl8.raw.bin", 0x192A0, 0xC
  /* 192AC 1A6F5C 8038A70C */  .4byte func_ovl8_8037CEE8
  .incbin "ovl8.raw.bin", 0x192B0, 0x4
  /* 192B4 1A6F64 8038A714 */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x192B8, 0x4
  /* 192BC 1A6F6C 8038A71C */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x192C0, 0x4
  /* 192C4 1A6F74 8038A724 */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x192C8, 0x4
  /* 192CC 1A6F7C 8038A72C */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x192D0, 0x4
  /* 192D4 1A6F84 8038A734 */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x192D8, 0x4
  /* 192DC 1A6F8C 8038A73C */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x192E0, 0x4
  /* 192E4 1A6F94 8038A744 */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x192E8, 0x4
  /* 192EC 1A6F9C 8038A74C */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x192F0, 0x4
  /* 192F4 1A6FA4 8038A754 */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x192F8, 0x4
  /* 192FC 1A6FAC 8038A75C */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x19300, 0x4
  /* 19304 1A6FB4 8038A764 */  .4byte func_ovl8_80371ABC
  .incbin "ovl8.raw.bin", 0x19308, 0x4
  /* 1930C 1A6FBC 8038A76C */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x19310, 0x4
  /* 19314 1A6FC4 8038A774 */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x19318, 0x4
  /* 1931C 1A6FCC 8038A77C */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x19320, 0x4
  /* 19324 1A6FD4 8038A784 */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x19328, 0x4
  /* 1932C 1A6FDC 8038A78C */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x19330, 0x4
  /* 19334 1A6FE4 8038A794 */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x19338, 0x4
  /* 1933C 1A6FEC 8038A79C */  .4byte func_ovl8_80371C1C
  .incbin "ovl8.raw.bin", 0x19340, 0x4
  /* 19344 1A6FF4 8038A7A4 */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x19348, 0x4
  /* 1934C 1A6FFC 8038A7AC */  .4byte func_ovl8_80371C50
  .incbin "ovl8.raw.bin", 0x19350, 0x4
  /* 19354 1A7004 8038A7B4 */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x19358, 0x4
  /* 1935C 1A700C 8038A7BC */  .4byte func_ovl8_80371CB8
  .incbin "ovl8.raw.bin", 0x19360, 0x4
  /* 19364 1A7014 8038A7C4 */  .4byte func_ovl8_80371D00
  .incbin "ovl8.raw.bin", 0x19368, 0x4
  /* 1936C 1A701C 8038A7CC */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x19370, 0x4
  /* 19374 1A7024 8038A7D4 */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x19378, 0x4
  /* 1937C 1A702C 8038A7DC */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x19380, 0x4
  /* 19384 1A7034 8038A7E4 */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x19388, 0x4
  /* 1938C 1A703C 8038A7EC */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x19390, 0x4
  /* 19394 1A7044 8038A7F4 */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x19398, 0x4
  /* 1939C 1A704C 8038A7FC */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x193A0, 0x4
  /* 193A4 1A7054 8038A804 */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x193A8, 0x4
  /* 193AC 1A705C 8038A80C */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x193B0, 0x4
  /* 193B4 1A7064 8038A814 */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x193B8, 0x4
  /* 193BC 1A706C 8038A81C */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x193C0, 0x4
  /* 193C4 1A7074 8038A824 */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x193C8, 0x4
  /* 193CC 1A707C 8038A82C */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x193D0, 0x4
  /* 193D4 1A7084 8038A834 */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x193D8, 0x4
  /* 193DC 1A708C 8038A83C */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x193E0, 0x4
  /* 193E4 1A7094 8038A844 */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x193E8, 0x4
  /* 193EC 1A709C 8038A84C */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x193F0, 0x10

glabel D_ovl8_8038A860
  .incbin "ovl8.raw.bin", 0x19400, 0x4

glabel D_ovl8_8038A864
  .incbin "ovl8.raw.bin", 0x19404, 0x4

glabel D_ovl8_8038A868
  .incbin "ovl8.raw.bin", 0x19408, 0x4

glabel D_ovl8_8038A86C
  .incbin "ovl8.raw.bin", 0x1940C, 0x4

glabel D_ovl8_8038A870
  .incbin "ovl8.raw.bin", 0x19410, 0x4

glabel D_ovl8_8038A874
  .incbin "ovl8.raw.bin", 0x19414, 0x4

glabel D_ovl8_8038A878
  .incbin "ovl8.raw.bin", 0x19418, 0x4

glabel D_ovl8_8038A87C
  .incbin "ovl8.raw.bin", 0x1941C, 0x4

glabel D_ovl8_8038A880
  .incbin "ovl8.raw.bin", 0x19420, 0x4

glabel D_ovl8_8038A884
  .incbin "ovl8.raw.bin", 0x19424, 0xC

glabel D_ovl8_8038A890
  .incbin "ovl8.raw.bin", 0x19430, 0x4

glabel D_ovl8_8038A894
  .incbin "ovl8.raw.bin", 0x19434, 0xC

glabel D_ovl8_8038A8A0
  .incbin "ovl8.raw.bin", 0x19440, 0xC
  /* 1944C 1A70FC 8038A8AC */  .4byte func_ovl8_8037EB00
  .incbin "ovl8.raw.bin", 0x19450, 0x4
  /* 19454 1A7104 8038A8B4 */  .4byte func_ovl8_8037EBC8
  .incbin "ovl8.raw.bin", 0x19458, 0x4
  /* 1945C 1A710C 8038A8BC */  .4byte func_ovl8_8037C9E4
  .incbin "ovl8.raw.bin", 0x19460, 0x4
  /* 19464 1A7114 8038A8C4 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x19468, 0x4
  /* 1946C 1A711C 8038A8CC */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x19470, 0x4
  /* 19474 1A7124 8038A8D4 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x19478, 0x4
  /* 1947C 1A712C 8038A8DC */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x19480, 0x4
  /* 19484 1A7134 8038A8E4 */  .4byte func_ovl8_80373694
  .incbin "ovl8.raw.bin", 0x19488, 0x4
  /* 1948C 1A713C 8038A8EC */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x19490, 0x4
  /* 19494 1A7144 8038A8F4 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x19498, 0x4
  /* 1949C 1A714C 8038A8FC */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x194A0, 0x4
  /* 194A4 1A7154 8038A904 */  .4byte func_ovl8_80373E24
  .incbin "ovl8.raw.bin", 0x194A8, 0x4
  /* 194AC 1A715C 8038A90C */  .4byte func_ovl8_80373EA8
  .incbin "ovl8.raw.bin", 0x194B0, 0x4
  /* 194B4 1A7164 8038A914 */  .4byte func_ovl8_80373930
  .incbin "ovl8.raw.bin", 0x194B8, 0x4
  /* 194BC 1A716C 8038A91C */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x194C0, 0x4
  /* 194C4 1A7174 8038A924 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x194C8, 0x4
  /* 194CC 1A717C 8038A92C */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x194D0, 0x4
  /* 194D4 1A7184 8038A934 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x194D8, 0x4
  /* 194DC 1A718C 8038A93C */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x194E0, 0x4
  /* 194E4 1A7194 8038A944 */  .4byte func_ovl8_80373AC4
  .incbin "ovl8.raw.bin", 0x194E8, 0x4
  /* 194EC 1A719C 8038A94C */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x194F0, 0x4
  /* 194F4 1A71A4 8038A954 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x194F8, 0x4
  /* 194FC 1A71AC 8038A95C */  .4byte func_ovl8_803743D8
  .incbin "ovl8.raw.bin", 0x19500, 0x4
  /* 19504 1A71B4 8038A964 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x19508, 0x4
  /* 1950C 1A71BC 8038A96C */  .4byte func_ovl8_803743C0
  .incbin "ovl8.raw.bin", 0x19510, 0x4
  /* 19514 1A71C4 8038A974 */  .4byte func_ovl8_8037CA48
  .incbin "ovl8.raw.bin", 0x19518, 0x8

glabel D_ovl8_8038A980
  .incbin "ovl8.raw.bin", 0x19520, 0xC
  /* 1952C 1A71DC 8038A98C */  .4byte func_ovl8_8037EB00
  .incbin "ovl8.raw.bin", 0x19530, 0x4
  /* 19534 1A71E4 8038A994 */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x19538, 0x4
  /* 1953C 1A71EC 8038A99C */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x19540, 0x4
  /* 19544 1A71F4 8038A9A4 */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x19548, 0x4
  /* 1954C 1A71FC 8038A9AC */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x19550, 0x4
  /* 19554 1A7204 8038A9B4 */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x19558, 0x4
  /* 1955C 1A720C 8038A9BC */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x19560, 0x4
  /* 19564 1A7214 8038A9C4 */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x19568, 0x4
  /* 1956C 1A721C 8038A9CC */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x19570, 0x4
  /* 19574 1A7224 8038A9D4 */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x19578, 0x4
  /* 1957C 1A722C 8038A9DC */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x19580, 0x4
  /* 19584 1A7234 8038A9E4 */  .4byte func_ovl8_8037C9E4
  .incbin "ovl8.raw.bin", 0x19588, 0x4
  /* 1958C 1A723C 8038A9EC */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x19590, 0x4
  /* 19594 1A7244 8038A9F4 */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x19598, 0x4
  /* 1959C 1A724C 8038A9FC */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x195A0, 0x4
  /* 195A4 1A7254 8038AA04 */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x195A8, 0x4
  /* 195AC 1A725C 8038AA0C */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x195B0, 0x4
  /* 195B4 1A7264 8038AA14 */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x195B8, 0x4
  /* 195BC 1A726C 8038AA1C */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x195C0, 0x4
  /* 195C4 1A7274 8038AA24 */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x195C8, 0x4
  /* 195CC 1A727C 8038AA2C */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x195D0, 0x4
  /* 195D4 1A7284 8038AA34 */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x195D8, 0x4
  /* 195DC 1A728C 8038AA3C */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x195E0, 0x4
  /* 195E4 1A7294 8038AA44 */  .4byte func_ovl8_8037EBC8
  .incbin "ovl8.raw.bin", 0x195E8, 0x4
  /* 195EC 1A729C 8038AA4C */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x195F0, 0x4
  /* 195F4 1A72A4 8038AA54 */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x195F8, 0x4
  /* 195FC 1A72AC 8038AA5C */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x19600, 0x4
  /* 19604 1A72B4 8038AA64 */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x19608, 0x4
  /* 1960C 1A72BC 8038AA6C */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x19610, 0x4
  /* 19614 1A72C4 8038AA74 */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x19618, 0x4
  /* 1961C 1A72CC 8038AA7C */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x19620, 0x4
  /* 19624 1A72D4 8038AA84 */  .4byte func_ovl8_803726CC
  .incbin "ovl8.raw.bin", 0x19628, 0x4
  /* 1962C 1A72DC 8038AA8C */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x19630, 0x4
  /* 19634 1A72E4 8038AA94 */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x19638, 0x4
  /* 1963C 1A72EC 8038AA9C */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x19640, 0x4
  /* 19644 1A72F4 8038AAA4 */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x19648, 0x4
  /* 1964C 1A72FC 8038AAAC */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x19650, 0x4
  /* 19654 1A7304 8038AAB4 */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x19658, 0x4
  /* 1965C 1A730C 8038AABC */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x19660, 0x4
  /* 19664 1A7314 8038AAC4 */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x19668, 0x4
  /* 1966C 1A731C 8038AACC */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x19670, 0x8

glabel D_ovl8_8038AAD8
  .incbin "ovl8.raw.bin", 0x19678, 0xC
  /* 19684 1A7334 8038AAE4 */  .4byte func_ovl8_8037EB00
  .incbin "ovl8.raw.bin", 0x19688, 0x4
  /* 1968C 1A733C 8038AAEC */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x19690, 0x4
  /* 19694 1A7344 8038AAF4 */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x19698, 0x8

glabel D_ovl8_8038AB00
  .incbin "ovl8.raw.bin", 0x196A0, 0xC
  /* 196AC 1A735C 8038AB0C */  .4byte func_ovl8_8037EB00
  .incbin "ovl8.raw.bin", 0x196B0, 0x4
  /* 196B4 1A7364 8038AB14 */  .4byte func_ovl8_8037C9E4
  .incbin "ovl8.raw.bin", 0x196B8, 0x4
  /* 196BC 1A736C 8038AB1C */  .4byte func_ovl8_803721E8
  .incbin "ovl8.raw.bin", 0x196C0, 0x4
  /* 196C4 1A7374 8038AB24 */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x196C8, 0x4
  /* 196CC 1A737C 8038AB2C */  .4byte func_ovl8_80372250
  .incbin "ovl8.raw.bin", 0x196D0, 0x4
  /* 196D4 1A7384 8038AB34 */  .4byte func_ovl8_803722A0
  .incbin "ovl8.raw.bin", 0x196D8, 0x4
  /* 196DC 1A738C 8038AB3C */  .4byte func_ovl8_803722F0
  .incbin "ovl8.raw.bin", 0x196E0, 0x4
  /* 196E4 1A7394 8038AB44 */  .4byte func_ovl8_80372348
  .incbin "ovl8.raw.bin", 0x196E8, 0x4
  /* 196EC 1A739C 8038AB4C */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x196F0, 0x4
  /* 196F4 1A73A4 8038AB54 */  .4byte func_ovl8_80372360
  .incbin "ovl8.raw.bin", 0x196F8, 0x4
  /* 196FC 1A73AC 8038AB5C */  .4byte func_ovl8_803726CC
  .incbin "ovl8.raw.bin", 0x19700, 0x10

glabel D_ovl8_8038AB70
  .incbin "ovl8.raw.bin", 0x19710, 0xC
  /* 1971C 1A73CC 8038AB7C */  .4byte func_ovl8_8037F260
  .incbin "ovl8.raw.bin", 0x19720, 0x4
  /* 19724 1A73D4 8038AB84 */  .4byte func_ovl8_8037F030
  .incbin "ovl8.raw.bin", 0x19728, 0x4
  /* 1972C 1A73DC 8038AB8C */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x19730, 0x4
  /* 19734 1A73E4 8038AB94 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x19738, 0x4
  /* 1973C 1A73EC 8038AB9C */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x19740, 0x4
  /* 19744 1A73F4 8038ABA4 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x19748, 0x4
  /* 1974C 1A73FC 8038ABAC */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x19750, 0x4
  /* 19754 1A7404 8038ABB4 */  .4byte func_ovl8_80373694
  .incbin "ovl8.raw.bin", 0x19758, 0x4
  /* 1975C 1A740C 8038ABBC */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x19760, 0x4
  /* 19764 1A7414 8038ABC4 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x19768, 0x4
  /* 1976C 1A741C 8038ABCC */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x19770, 0x4
  /* 19774 1A7424 8038ABD4 */  .4byte func_ovl8_80373E24
  .incbin "ovl8.raw.bin", 0x19778, 0x4
  /* 1977C 1A742C 8038ABDC */  .4byte func_ovl8_80373EA8
  .incbin "ovl8.raw.bin", 0x19780, 0x4
  /* 19784 1A7434 8038ABE4 */  .4byte func_ovl8_80373930
  .incbin "ovl8.raw.bin", 0x19788, 0x4
  /* 1978C 1A743C 8038ABEC */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x19790, 0x4
  /* 19794 1A7444 8038ABF4 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x19798, 0x4
  /* 1979C 1A744C 8038ABFC */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x197A0, 0x4
  /* 197A4 1A7454 8038AC04 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x197A8, 0x4
  /* 197AC 1A745C 8038AC0C */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x197B0, 0x4
  /* 197B4 1A7464 8038AC14 */  .4byte func_ovl8_80373AC4
  .incbin "ovl8.raw.bin", 0x197B8, 0x4
  /* 197BC 1A746C 8038AC1C */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x197C0, 0x4
  /* 197C4 1A7474 8038AC24 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x197C8, 0x4
  /* 197CC 1A747C 8038AC2C */  .4byte func_ovl8_803743D8
  .incbin "ovl8.raw.bin", 0x197D0, 0x4
  /* 197D4 1A7484 8038AC34 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x197D8, 0x4
  /* 197DC 1A748C 8038AC3C */  .4byte func_ovl8_803743C0
  .incbin "ovl8.raw.bin", 0x197E0, 0x8

glabel D_ovl8_8038AC48
  .incbin "ovl8.raw.bin", 0x197E8, 0xC
  /* 197F4 1A74A4 8038AC54 */  .4byte func_ovl8_8037F260
  .incbin "ovl8.raw.bin", 0x197F8, 0x4
  /* 197FC 1A74AC 8038AC5C */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x19800, 0x4
  /* 19804 1A74B4 8038AC64 */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x19808, 0x4
  /* 1980C 1A74BC 8038AC6C */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x19810, 0x4
  /* 19814 1A74C4 8038AC74 */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x19818, 0x4
  /* 1981C 1A74CC 8038AC7C */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x19820, 0x4
  /* 19824 1A74D4 8038AC84 */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x19828, 0x4
  /* 1982C 1A74DC 8038AC8C */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x19830, 0x4
  /* 19834 1A74E4 8038AC94 */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x19838, 0x4
  /* 1983C 1A74EC 8038AC9C */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x19840, 0x4
  /* 19844 1A74F4 8038ACA4 */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x19848, 0x4
  /* 1984C 1A74FC 8038ACAC */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x19850, 0x4
  /* 19854 1A7504 8038ACB4 */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x19858, 0x4
  /* 1985C 1A750C 8038ACBC */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x19860, 0x4
  /* 19864 1A7514 8038ACC4 */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x19868, 0x4
  /* 1986C 1A751C 8038ACCC */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x19870, 0x4
  /* 19874 1A7524 8038ACD4 */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x19878, 0x4
  /* 1987C 1A752C 8038ACDC */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x19880, 0x4
  /* 19884 1A7534 8038ACE4 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x19888, 0x4
  /* 1988C 1A753C 8038ACEC */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x19890, 0x4
  /* 19894 1A7544 8038ACF4 */  .4byte func_ovl8_80371C50
  .incbin "ovl8.raw.bin", 0x19898, 0x4
  /* 1989C 1A754C 8038ACFC */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x198A0, 0x4
  /* 198A4 1A7554 8038AD04 */  .4byte func_ovl8_80371CB8
  .incbin "ovl8.raw.bin", 0x198A8, 0x4
  /* 198AC 1A755C 8038AD0C */  .4byte func_ovl8_8037F030
  .incbin "ovl8.raw.bin", 0x198B0, 0x4
  /* 198B4 1A7564 8038AD14 */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x198B8, 0x4
  /* 198BC 1A756C 8038AD1C */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x198C0, 0x4
  /* 198C4 1A7574 8038AD24 */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x198C8, 0x4
  /* 198CC 1A757C 8038AD2C */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x198D0, 0x4
  /* 198D4 1A7584 8038AD34 */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x198D8, 0x4
  /* 198DC 1A758C 8038AD3C */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x198E0, 0x4
  /* 198E4 1A7594 8038AD44 */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x198E8, 0x4
  /* 198EC 1A759C 8038AD4C */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x198F0, 0x4
  /* 198F4 1A75A4 8038AD54 */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x198F8, 0x4
  /* 198FC 1A75AC 8038AD5C */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x19900, 0x4
  /* 19904 1A75B4 8038AD64 */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x19908, 0x4
  /* 1990C 1A75BC 8038AD6C */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x19910, 0x4
  /* 19914 1A75C4 8038AD74 */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x19918, 0x4
  /* 1991C 1A75CC 8038AD7C */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x19920, 0x4
  /* 19924 1A75D4 8038AD84 */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x19928, 0x4
  /* 1992C 1A75DC 8038AD8C */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x19930, 0x4
  /* 19934 1A75E4 8038AD94 */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x19938, 0x8

glabel D_ovl8_8038ADA0
  .incbin "ovl8.raw.bin", 0x19940, 0xC
  /* 1994C 1A75FC 8038ADAC */  .4byte func_ovl8_8037F260
  .incbin "ovl8.raw.bin", 0x19950, 0x4
  /* 19954 1A7604 8038ADB4 */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x19958, 0x4
  /* 1995C 1A760C 8038ADBC */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x19960, 0x10

glabel D_ovl8_8038ADD0
  .incbin "ovl8.raw.bin", 0x19970, 0x4
  /* 19974 1A7624 8038ADD4 */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x19978, 0x8
  /* 19980 1A7630 8038ADE0 */  .4byte 0x80010000
  .incbin "ovl8.raw.bin", 0x19984, 0x10
  /* 19994 1A7644 8038ADF4 */  .4byte 0x80010002 # Warning: missing label
  /* 19998 1A7648 8038ADF8 */  .4byte 0x80018001 # Warning: missing label
  .incbin "ovl8.raw.bin", 0x1999C, 0x8
  /* 199A4 1A7654 8038AE04 */  .4byte 0x80018001 # Warning: missing label
  .incbin "ovl8.raw.bin", 0x199A8, 0x8
  /* 199B0 1A7660 8038AE10 */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x199B4, 0x8
  /* 199BC 1A766C 8038AE1C */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x199C0, 0x10
  /* 199D0 1A7680 8038AE30 */  .4byte 0x80010001 # Warning: missing label
  /* 199D4 1A7684 8038AE34 */  .4byte 0x80010001 # Warning: missing label
  .incbin "ovl8.raw.bin", 0x199D8, 0x38
  /* 19A10 1A76C0 8038AE70 */  .4byte 0x80028002 # Warning: missing label
  .incbin "ovl8.raw.bin", 0x19A14, 0x10

glabel D_ovl8_8038AE84
  .incbin "ovl8.raw.bin", 0x19A24, 0x4
  /* 19A28 1A76D8 8038AE88 */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x19A2C, 0x8
  /* 19A34 1A76E4 8038AE94 */  .4byte func_80020000
  .incbin "ovl8.raw.bin", 0x19A38, 0x14
  /* 19A4C 1A76FC 8038AEAC */  .4byte 0x80020001 # Warning: missing label
  .incbin "ovl8.raw.bin", 0x19A50, 0x10
  /* 19A60 1A7710 8038AEC0 */  .4byte 0x80010000
  /* 19A64 1A7714 8038AEC4 */  .4byte 0x80010000
  .incbin "ovl8.raw.bin", 0x19A68, 0x1C
  /* 19A84 1A7734 8038AEE4 */  .4byte 0x80010001 # Warning: missing label
  /* 19A88 1A7738 8038AEE8 */  .4byte 0x80010001 # Warning: missing label
  .incbin "ovl8.raw.bin", 0x19A8C, 0x20
  /* 19AAC 1A775C 8038AF0C */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x19AB0, 0x8
  /* 19AB8 1A7768 8038AF18 */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x19ABC, 0x8
  /* 19AC4 1A7774 8038AF24 */  .4byte 0x80028002 # Warning: missing label
  .incbin "ovl8.raw.bin", 0x19AC8, 0x10

glabel D_ovl8_8038AF38
  .incbin "ovl8.raw.bin", 0x19AD8, 0xC
  /* 19AE4 1A7794 8038AF44 */  .4byte func_ovl8_8037F4F4
  .incbin "ovl8.raw.bin", 0x19AE8, 0x4
  /* 19AEC 1A779C 8038AF4C */  .4byte func_ovl8_8037F590
  .incbin "ovl8.raw.bin", 0x19AF0, 0x4
  /* 19AF4 1A77A4 8038AF54 */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x19AF8, 0x4
  /* 19AFC 1A77AC 8038AF5C */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x19B00, 0x4
  /* 19B04 1A77B4 8038AF64 */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x19B08, 0x4
  /* 19B0C 1A77BC 8038AF6C */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x19B10, 0x4
  /* 19B14 1A77C4 8038AF74 */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x19B18, 0x4
  /* 19B1C 1A77CC 8038AF7C */  .4byte func_ovl8_80373694
  .incbin "ovl8.raw.bin", 0x19B20, 0x4
  /* 19B24 1A77D4 8038AF84 */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x19B28, 0x4
  /* 19B2C 1A77DC 8038AF8C */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x19B30, 0x4
  /* 19B34 1A77E4 8038AF94 */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x19B38, 0x4
  /* 19B3C 1A77EC 8038AF9C */  .4byte func_ovl8_8037F80C
  .incbin "ovl8.raw.bin", 0x19B40, 0x4
  /* 19B44 1A77F4 8038AFA4 */  .4byte func_ovl8_8037383C
  .incbin "ovl8.raw.bin", 0x19B48, 0x4
  /* 19B4C 1A77FC 8038AFAC */  .4byte func_ovl8_80373930
  .incbin "ovl8.raw.bin", 0x19B50, 0x4
  /* 19B54 1A7804 8038AFB4 */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x19B58, 0x4
  /* 19B5C 1A780C 8038AFBC */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x19B60, 0x4
  /* 19B64 1A7814 8038AFC4 */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x19B68, 0x4
  /* 19B6C 1A781C 8038AFCC */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x19B70, 0x4
  /* 19B74 1A7824 8038AFD4 */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x19B78, 0x4
  /* 19B7C 1A782C 8038AFDC */  .4byte func_ovl8_8037F784
  .incbin "ovl8.raw.bin", 0x19B80, 0x4
  /* 19B84 1A7834 8038AFE4 */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x19B88, 0x4
  /* 19B8C 1A783C 8038AFEC */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x19B90, 0x4
  /* 19B94 1A7844 8038AFF4 */  .4byte func_ovl8_80373BC0
  .incbin "ovl8.raw.bin", 0x19B98, 0x4
  /* 19B9C 1A784C 8038AFFC */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x19BA0, 0x4
  /* 19BA4 1A7854 8038B004 */  .4byte func_ovl8_8037F654
  .incbin "ovl8.raw.bin", 0x19BA8, 0x4
  /* 19BAC 1A785C 8038B00C */  .4byte func_ovl8_8037F668
  .incbin "ovl8.raw.bin", 0x19BB0, 0x8

glabel D_ovl8_8038B018
  .incbin "ovl8.raw.bin", 0x19BB8, 0xC
  /* 19BC4 1A7874 8038B024 */  .4byte func_ovl8_8037F4F4
  .incbin "ovl8.raw.bin", 0x19BC8, 0x4
  /* 19BCC 1A787C 8038B02C */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x19BD0, 0x4
  /* 19BD4 1A7884 8038B034 */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x19BD8, 0x4
  /* 19BDC 1A788C 8038B03C */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x19BE0, 0x4
  /* 19BE4 1A7894 8038B044 */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x19BE8, 0x4
  /* 19BEC 1A789C 8038B04C */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x19BF0, 0x4
  /* 19BF4 1A78A4 8038B054 */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x19BF8, 0x4
  /* 19BFC 1A78AC 8038B05C */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x19C00, 0x4
  /* 19C04 1A78B4 8038B064 */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x19C08, 0x4
  /* 19C0C 1A78BC 8038B06C */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x19C10, 0x4
  /* 19C14 1A78C4 8038B074 */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x19C18, 0x4
  /* 19C1C 1A78CC 8038B07C */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x19C20, 0x4
  /* 19C24 1A78D4 8038B084 */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x19C28, 0x4
  /* 19C2C 1A78DC 8038B08C */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x19C30, 0x4
  /* 19C34 1A78E4 8038B094 */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x19C38, 0x4
  /* 19C3C 1A78EC 8038B09C */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x19C40, 0x4
  /* 19C44 1A78F4 8038B0A4 */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x19C48, 0x4
  /* 19C4C 1A78FC 8038B0AC */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x19C50, 0x4
  /* 19C54 1A7904 8038B0B4 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x19C58, 0x4
  /* 19C5C 1A790C 8038B0BC */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x19C60, 0x4
  /* 19C64 1A7914 8038B0C4 */  .4byte func_ovl8_80371C50
  .incbin "ovl8.raw.bin", 0x19C68, 0x4
  /* 19C6C 1A791C 8038B0CC */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x19C70, 0x4
  /* 19C74 1A7924 8038B0D4 */  .4byte func_ovl8_80371CB8
  .incbin "ovl8.raw.bin", 0x19C78, 0x4
  /* 19C7C 1A792C 8038B0DC */  .4byte func_ovl8_8037F590
  .incbin "ovl8.raw.bin", 0x19C80, 0x4
  /* 19C84 1A7934 8038B0E4 */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x19C88, 0x4
  /* 19C8C 1A793C 8038B0EC */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x19C90, 0x4
  /* 19C94 1A7944 8038B0F4 */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x19C98, 0x4
  /* 19C9C 1A794C 8038B0FC */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x19CA0, 0x4
  /* 19CA4 1A7954 8038B104 */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x19CA8, 0x4
  /* 19CAC 1A795C 8038B10C */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x19CB0, 0x4
  /* 19CB4 1A7964 8038B114 */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x19CB8, 0x4
  /* 19CBC 1A796C 8038B11C */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x19CC0, 0x4
  /* 19CC4 1A7974 8038B124 */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x19CC8, 0x4
  /* 19CCC 1A797C 8038B12C */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x19CD0, 0x4
  /* 19CD4 1A7984 8038B134 */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x19CD8, 0x4
  /* 19CDC 1A798C 8038B13C */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x19CE0, 0x4
  /* 19CE4 1A7994 8038B144 */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x19CE8, 0x4
  /* 19CEC 1A799C 8038B14C */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x19CF0, 0x4
  /* 19CF4 1A79A4 8038B154 */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x19CF8, 0x4
  /* 19CFC 1A79AC 8038B15C */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x19D00, 0x4
  /* 19D04 1A79B4 8038B164 */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x19D08, 0x8

glabel D_ovl8_8038B170
  .incbin "ovl8.raw.bin", 0x19D10, 0xC
  /* 19D1C 1A79CC 8038B17C */  .4byte func_ovl8_8037F4F4
  .incbin "ovl8.raw.bin", 0x19D20, 0x4
  /* 19D24 1A79D4 8038B184 */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x19D28, 0x4
  /* 19D2C 1A79DC 8038B18C */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x19D30, 0x10

glabel D_ovl8_8038B1A0
  .incbin "ovl8.raw.bin", 0x19D40, 0xC
  /* 19D4C 1A79FC 8038B1AC */  .4byte func_ovl8_8037FE28
  .incbin "ovl8.raw.bin", 0x19D50, 0x4
  /* 19D54 1A7A04 8038B1B4 */  .4byte func_ovl8_8037F590
  .incbin "ovl8.raw.bin", 0x19D58, 0x4
  /* 19D5C 1A7A0C 8038B1BC */  .4byte func_ovl8_8037FEF4
  .incbin "ovl8.raw.bin", 0x19D60, 0x4
  /* 19D64 1A7A14 8038B1C4 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x19D68, 0x4
  /* 19D6C 1A7A1C 8038B1CC */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x19D70, 0x4
  /* 19D74 1A7A24 8038B1D4 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x19D78, 0x4
  /* 19D7C 1A7A2C 8038B1DC */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x19D80, 0x4
  /* 19D84 1A7A34 8038B1E4 */  .4byte func_ovl8_80373694
  .incbin "ovl8.raw.bin", 0x19D88, 0x4
  /* 19D8C 1A7A3C 8038B1EC */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x19D90, 0x4
  /* 19D94 1A7A44 8038B1F4 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x19D98, 0x4
  /* 19D9C 1A7A4C 8038B1FC */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x19DA0, 0x4
  /* 19DA4 1A7A54 8038B204 */  .4byte func_ovl8_8037F80C
  .incbin "ovl8.raw.bin", 0x19DA8, 0x4
  /* 19DAC 1A7A5C 8038B20C */  .4byte func_ovl8_8037383C
  .incbin "ovl8.raw.bin", 0x19DB0, 0x4
  /* 19DB4 1A7A64 8038B214 */  .4byte func_ovl8_80373930
  .incbin "ovl8.raw.bin", 0x19DB8, 0x4
  /* 19DBC 1A7A6C 8038B21C */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x19DC0, 0x4
  /* 19DC4 1A7A74 8038B224 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x19DC8, 0x4
  /* 19DCC 1A7A7C 8038B22C */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x19DD0, 0x4
  /* 19DD4 1A7A84 8038B234 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x19DD8, 0x4
  /* 19DDC 1A7A8C 8038B23C */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x19DE0, 0x4
  /* 19DE4 1A7A94 8038B244 */  .4byte func_ovl8_8037F784
  .incbin "ovl8.raw.bin", 0x19DE8, 0x4
  /* 19DEC 1A7A9C 8038B24C */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x19DF0, 0x4
  /* 19DF4 1A7AA4 8038B254 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x19DF8, 0x4
  /* 19DFC 1A7AAC 8038B25C */  .4byte func_ovl8_80373BC0
  .incbin "ovl8.raw.bin", 0x19E00, 0x4
  /* 19E04 1A7AB4 8038B264 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x19E08, 0x4
  /* 19E0C 1A7ABC 8038B26C */  .4byte func_ovl8_8037F654
  .incbin "ovl8.raw.bin", 0x19E10, 0x4
  /* 19E14 1A7AC4 8038B274 */  .4byte func_ovl8_8037F668
  .incbin "ovl8.raw.bin", 0x19E18, 0x4
  /* 19E1C 1A7ACC 8038B27C */  .4byte func_ovl8_8037FF14
  .incbin "ovl8.raw.bin", 0x19E20, 0x8

glabel D_ovl8_8038B288
  .incbin "ovl8.raw.bin", 0x19E28, 0xC
  /* 19E34 1A7AE4 8038B294 */  .4byte func_ovl8_8037FE28
  .incbin "ovl8.raw.bin", 0x19E38, 0x4
  /* 19E3C 1A7AEC 8038B29C */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x19E40, 0x4
  /* 19E44 1A7AF4 8038B2A4 */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x19E48, 0x4
  /* 19E4C 1A7AFC 8038B2AC */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x19E50, 0x4
  /* 19E54 1A7B04 8038B2B4 */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x19E58, 0x4
  /* 19E5C 1A7B0C 8038B2BC */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x19E60, 0x4
  /* 19E64 1A7B14 8038B2C4 */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x19E68, 0x4
  /* 19E6C 1A7B1C 8038B2CC */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x19E70, 0x4
  /* 19E74 1A7B24 8038B2D4 */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x19E78, 0x4
  /* 19E7C 1A7B2C 8038B2DC */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x19E80, 0x4
  /* 19E84 1A7B34 8038B2E4 */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x19E88, 0x4
  /* 19E8C 1A7B3C 8038B2EC */  .4byte func_ovl8_8037FEF4
  .incbin "ovl8.raw.bin", 0x19E90, 0x4
  /* 19E94 1A7B44 8038B2F4 */  .4byte func_ovl8_8037FF14
  .incbin "ovl8.raw.bin", 0x19E98, 0x4
  /* 19E9C 1A7B4C 8038B2FC */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x19EA0, 0x4
  /* 19EA4 1A7B54 8038B304 */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x19EA8, 0x4
  /* 19EAC 1A7B5C 8038B30C */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x19EB0, 0x4
  /* 19EB4 1A7B64 8038B314 */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x19EB8, 0x4
  /* 19EBC 1A7B6C 8038B31C */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x19EC0, 0x4
  /* 19EC4 1A7B74 8038B324 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x19EC8, 0x4
  /* 19ECC 1A7B7C 8038B32C */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x19ED0, 0x4
  /* 19ED4 1A7B84 8038B334 */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x19ED8, 0x4
  /* 19EDC 1A7B8C 8038B33C */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x19EE0, 0x4
  /* 19EE4 1A7B94 8038B344 */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x19EE8, 0x4
  /* 19EEC 1A7B9C 8038B34C */  .4byte func_ovl8_8037F590
  .incbin "ovl8.raw.bin", 0x19EF0, 0x4
  /* 19EF4 1A7BA4 8038B354 */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x19EF8, 0x4
  /* 19EFC 1A7BAC 8038B35C */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x19F00, 0x4
  /* 19F04 1A7BB4 8038B364 */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x19F08, 0x4
  /* 19F0C 1A7BBC 8038B36C */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x19F10, 0x4
  /* 19F14 1A7BC4 8038B374 */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x19F18, 0x4
  /* 19F1C 1A7BCC 8038B37C */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x19F20, 0x4
  /* 19F24 1A7BD4 8038B384 */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x19F28, 0x4
  /* 19F2C 1A7BDC 8038B38C */  .4byte func_ovl8_803726CC
  .incbin "ovl8.raw.bin", 0x19F30, 0x4
  /* 19F34 1A7BE4 8038B394 */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x19F38, 0x4
  /* 19F3C 1A7BEC 8038B39C */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x19F40, 0x4
  /* 19F44 1A7BF4 8038B3A4 */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x19F48, 0x4
  /* 19F4C 1A7BFC 8038B3AC */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x19F50, 0x4
  /* 19F54 1A7C04 8038B3B4 */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x19F58, 0x4
  /* 19F5C 1A7C0C 8038B3BC */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x19F60, 0x4
  /* 19F64 1A7C14 8038B3C4 */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x19F68, 0x4
  /* 19F6C 1A7C1C 8038B3CC */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x19F70, 0x4
  /* 19F74 1A7C24 8038B3D4 */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x19F78, 0x8

glabel D_ovl8_8038B3E0
  .incbin "ovl8.raw.bin", 0x19F80, 0xC
  /* 19F8C 1A7C3C 8038B3EC */  .4byte func_ovl8_8037FE28
  .incbin "ovl8.raw.bin", 0x19F90, 0x4
  /* 19F94 1A7C44 8038B3F4 */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x19F98, 0x4
  /* 19F9C 1A7C4C 8038B3FC */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x19FA0, 0x8

glabel D_ovl8_8038B408
  .incbin "ovl8.raw.bin", 0x19FA8, 0xC
  /* 19FB4 1A7C64 8038B414 */  .4byte func_ovl8_8037FE28
  .incbin "ovl8.raw.bin", 0x19FB8, 0x4
  /* 19FBC 1A7C6C 8038B41C */  .4byte func_ovl8_8037FEF4
  .incbin "ovl8.raw.bin", 0x19FC0, 0x4
  /* 19FC4 1A7C74 8038B424 */  .4byte func_ovl8_803721E8
  .incbin "ovl8.raw.bin", 0x19FC8, 0x4
  /* 19FCC 1A7C7C 8038B42C */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x19FD0, 0x4
  /* 19FD4 1A7C84 8038B434 */  .4byte func_ovl8_80372250
  .incbin "ovl8.raw.bin", 0x19FD8, 0x4
  /* 19FDC 1A7C8C 8038B43C */  .4byte func_ovl8_803722A0
  .incbin "ovl8.raw.bin", 0x19FE0, 0x4
  /* 19FE4 1A7C94 8038B444 */  .4byte func_ovl8_803722F0
  .incbin "ovl8.raw.bin", 0x19FE8, 0x4
  /* 19FEC 1A7C9C 8038B44C */  .4byte func_ovl8_80372348
  .incbin "ovl8.raw.bin", 0x19FF0, 0x4
  /* 19FF4 1A7CA4 8038B454 */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x19FF8, 0x4
  /* 19FFC 1A7CAC 8038B45C */  .4byte func_ovl8_80372360
  .incbin "ovl8.raw.bin", 0x1A000, 0x4
  /* 1A004 1A7CB4 8038B464 */  .4byte func_ovl8_803726CC
  .incbin "ovl8.raw.bin", 0x1A008, 0x8

glabel D_ovl8_8038B470
  .incbin "ovl8.raw.bin", 0x1A010, 0xC
  /* 1A01C 1A7CCC 8038B47C */  .4byte func_ovl8_8038011C
  .incbin "ovl8.raw.bin", 0x1A020, 0x4
  /* 1A024 1A7CD4 8038B484 */  .4byte func_ovl8_80376A04
  .incbin "ovl8.raw.bin", 0x1A028, 0x4
  /* 1A02C 1A7CDC 8038B48C */  .4byte func_ovl8_80375528
  .incbin "ovl8.raw.bin", 0x1A030, 0x4
  /* 1A034 1A7CE4 8038B494 */  .4byte func_ovl8_803755C4
  .incbin "ovl8.raw.bin", 0x1A038, 0x4
  /* 1A03C 1A7CEC 8038B49C */  .4byte func_ovl8_80375864
  .incbin "ovl8.raw.bin", 0x1A040, 0x4
  /* 1A044 1A7CF4 8038B4A4 */  .4byte func_ovl8_803769AC
  .incbin "ovl8.raw.bin", 0x1A048, 0x4
  /* 1A04C 1A7CFC 8038B4AC */  .4byte func_ovl8_803769B4
  .incbin "ovl8.raw.bin", 0x1A050, 0x4
  /* 1A054 1A7D04 8038B4B4 */  .4byte func_ovl8_80372A94
  .incbin "ovl8.raw.bin", 0x1A058, 0x4
  /* 1A05C 1A7D0C 8038B4BC */  .4byte func_ovl8_803806B0
  .incbin "ovl8.raw.bin", 0x1A060, 0x4
  /* 1A064 1A7D14 8038B4C4 */  .4byte func_ovl8_80372D18
  .incbin "ovl8.raw.bin", 0x1A068, 0x4
  /* 1A06C 1A7D1C 8038B4CC */  .4byte func_ovl8_80372D70
  .incbin "ovl8.raw.bin", 0x1A070, 0x4
  /* 1A074 1A7D24 8038B4D4 */  .4byte func_ovl8_80376A48
  .incbin "ovl8.raw.bin", 0x1A078, 0x4
  /* 1A07C 1A7D2C 8038B4DC */  .4byte func_ovl8_80376AA4
  .incbin "ovl8.raw.bin", 0x1A080, 0x4
  /* 1A084 1A7D34 8038B4E4 */  .4byte func_ovl8_80372DE8
  .incbin "ovl8.raw.bin", 0x1A088, 0x4
  /* 1A08C 1A7D3C 8038B4EC */  .4byte func_ovl8_80372E40
  .incbin "ovl8.raw.bin", 0x1A090, 0x4
  /* 1A094 1A7D44 8038B4F4 */  .4byte func_ovl8_80376ADC
  .incbin "ovl8.raw.bin", 0x1A098, 0x4
  /* 1A09C 1A7D4C 8038B4FC */  .4byte func_ovl8_80373044
  .incbin "ovl8.raw.bin", 0x1A0A0, 0x4
  /* 1A0A4 1A7D54 8038B504 */  .4byte func_ovl8_803730DC
  .incbin "ovl8.raw.bin", 0x1A0A8, 0x4
  /* 1A0AC 1A7D5C 8038B50C */  .4byte func_ovl8_80373118
  .incbin "ovl8.raw.bin", 0x1A0B0, 0x4
  /* 1A0B4 1A7D64 8038B514 */  .4byte func_ovl8_80373138
  .incbin "ovl8.raw.bin", 0x1A0B8, 0x4
  /* 1A0BC 1A7D6C 8038B51C */  .4byte func_ovl8_803732B0
  .incbin "ovl8.raw.bin", 0x1A0C0, 0x4
  /* 1A0C4 1A7D74 8038B524 */  .4byte func_ovl8_803801DC
  .incbin "ovl8.raw.bin", 0x1A0C8, 0x4
  /* 1A0CC 1A7D7C 8038B52C */  .4byte func_ovl8_8038045C
  .incbin "ovl8.raw.bin", 0x1A0D0, 0x4
  /* 1A0D4 1A7D84 8038B534 */  .4byte func_ovl8_803806C0
  .incbin "ovl8.raw.bin", 0x1A0D8, 0x8

glabel D_ovl8_8038B540
  .incbin "ovl8.raw.bin", 0x1A0E0, 0xC
  /* 1A0EC 1A7D9C 8038B54C */  .4byte func_ovl8_8038011C
  .incbin "ovl8.raw.bin", 0x1A0F0, 0x4
  /* 1A0F4 1A7DA4 8038B554 */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x1A0F8, 0x4
  /* 1A0FC 1A7DAC 8038B55C */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x1A100, 0x4
  /* 1A104 1A7DB4 8038B564 */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x1A108, 0x4
  /* 1A10C 1A7DBC 8038B56C */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x1A110, 0x4
  /* 1A114 1A7DC4 8038B574 */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x1A118, 0x4
  /* 1A11C 1A7DCC 8038B57C */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x1A120, 0x4
  /* 1A124 1A7DD4 8038B584 */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x1A128, 0x4
  /* 1A12C 1A7DDC 8038B58C */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x1A130, 0x4
  /* 1A134 1A7DE4 8038B594 */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x1A138, 0x4
  /* 1A13C 1A7DEC 8038B59C */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x1A140, 0x4
  /* 1A144 1A7DF4 8038B5A4 */  .4byte func_ovl8_80376A04
  .incbin "ovl8.raw.bin", 0x1A148, 0x4
  /* 1A14C 1A7DFC 8038B5AC */  .4byte func_ovl8_803801DC
  .incbin "ovl8.raw.bin", 0x1A150, 0x4
  /* 1A154 1A7E04 8038B5B4 */  .4byte func_ovl8_80372A94
  .incbin "ovl8.raw.bin", 0x1A158, 0x4
  /* 1A15C 1A7E0C 8038B5BC */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x1A160, 0x4
  /* 1A164 1A7E14 8038B5C4 */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x1A168, 0x4
  /* 1A16C 1A7E1C 8038B5CC */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x1A170, 0x4
  /* 1A174 1A7E24 8038B5D4 */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x1A178, 0x4
  /* 1A17C 1A7E2C 8038B5DC */  .4byte func_ovl8_803806B0
  .incbin "ovl8.raw.bin", 0x1A180, 0x4
  /* 1A184 1A7E34 8038B5E4 */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x1A188, 0x4
  /* 1A18C 1A7E3C 8038B5EC */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x1A190, 0x4
  /* 1A194 1A7E44 8038B5F4 */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x1A198, 0x4
  /* 1A19C 1A7E4C 8038B5FC */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x1A1A0, 0x4
  /* 1A1A4 1A7E54 8038B604 */  .4byte func_ovl8_8038045C
  .incbin "ovl8.raw.bin", 0x1A1A8, 0x4
  /* 1A1AC 1A7E5C 8038B60C */  .4byte func_ovl8_80372D70
  .incbin "ovl8.raw.bin", 0x1A1B0, 0x4
  /* 1A1B4 1A7E64 8038B614 */  .4byte func_ovl8_80376A48
  .incbin "ovl8.raw.bin", 0x1A1B8, 0x4
  /* 1A1BC 1A7E6C 8038B61C */  .4byte func_ovl8_80372D18
  .incbin "ovl8.raw.bin", 0x1A1C0, 0x4
  /* 1A1C4 1A7E74 8038B624 */  .4byte func_ovl8_80376AA4
  .incbin "ovl8.raw.bin", 0x1A1C8, 0x4
  /* 1A1CC 1A7E7C 8038B62C */  .4byte func_ovl8_80373118
  .incbin "ovl8.raw.bin", 0x1A1D0, 0x4
  /* 1A1D4 1A7E84 8038B634 */  .4byte func_ovl8_80373138
  .incbin "ovl8.raw.bin", 0x1A1D8, 0x4
  /* 1A1DC 1A7E8C 8038B63C */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x1A1E0, 0x4
  /* 1A1E4 1A7E94 8038B644 */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x1A1E8, 0x4
  /* 1A1EC 1A7E9C 8038B64C */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x1A1F0, 0x4
  /* 1A1F4 1A7EA4 8038B654 */  .4byte func_ovl8_80372DE8
  .incbin "ovl8.raw.bin", 0x1A1F8, 0x4
  /* 1A1FC 1A7EAC 8038B65C */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x1A200, 0x4
  /* 1A204 1A7EB4 8038B664 */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x1A208, 0x4
  /* 1A20C 1A7EBC 8038B66C */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x1A210, 0x4
  /* 1A214 1A7EC4 8038B674 */  .4byte func_ovl8_803732B0
  .incbin "ovl8.raw.bin", 0x1A218, 0x4
  /* 1A21C 1A7ECC 8038B67C */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x1A220, 0x4
  /* 1A224 1A7ED4 8038B684 */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x1A228, 0x4
  /* 1A22C 1A7EDC 8038B68C */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x1A230, 0x8

glabel D_ovl8_8038B698
  .incbin "ovl8.raw.bin", 0x1A238, 0xC
  /* 1A244 1A7EF4 8038B6A4 */  .4byte func_ovl8_8038011C
  .incbin "ovl8.raw.bin", 0x1A248, 0x4
  /* 1A24C 1A7EFC 8038B6AC */  .4byte func_ovl8_803730DC
  .incbin "ovl8.raw.bin", 0x1A250, 0x4
  /* 1A254 1A7F04 8038B6B4 */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x1A258, 0x8

glabel D_ovl8_8038B6C0
  .incbin "ovl8.raw.bin", 0x1A260, 0xC
  /* 1A26C 1A7F1C 8038B6CC */  .4byte func_ovl8_8038011C
  .incbin "ovl8.raw.bin", 0x1A270, 0x4
  /* 1A274 1A7F24 8038B6D4 */  .4byte func_ovl8_80376A04
  .incbin "ovl8.raw.bin", 0x1A278, 0x4
  /* 1A27C 1A7F2C 8038B6DC */  .4byte func_ovl8_803721E8
  .incbin "ovl8.raw.bin", 0x1A280, 0x4
  /* 1A284 1A7F34 8038B6E4 */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x1A288, 0x4
  /* 1A28C 1A7F3C 8038B6EC */  .4byte func_ovl8_80372250
  .incbin "ovl8.raw.bin", 0x1A290, 0x4
  /* 1A294 1A7F44 8038B6F4 */  .4byte func_ovl8_803722A0
  .incbin "ovl8.raw.bin", 0x1A298, 0x4
  /* 1A29C 1A7F4C 8038B6FC */  .4byte func_ovl8_803722F0
  .incbin "ovl8.raw.bin", 0x1A2A0, 0x4
  /* 1A2A4 1A7F54 8038B704 */  .4byte func_ovl8_80372348
  .incbin "ovl8.raw.bin", 0x1A2A8, 0x4
  /* 1A2AC 1A7F5C 8038B70C */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x1A2B0, 0x4
  /* 1A2B4 1A7F64 8038B714 */  .4byte func_ovl8_80372360
  .incbin "ovl8.raw.bin", 0x1A2B8, 0x8

glabel D_ovl8_8038B720
  .incbin "ovl8.raw.bin", 0x1A2C0, 0xC
  /* 1A2CC 1A7F7C 8038B72C */  .4byte func_ovl8_80380E14
  .incbin "ovl8.raw.bin", 0x1A2D0, 0x4
  /* 1A2D4 1A7F84 8038B734 */  .4byte func_ovl8_80376A04
  .incbin "ovl8.raw.bin", 0x1A2D8, 0x4
  /* 1A2DC 1A7F8C 8038B73C */  .4byte func_ovl8_80375528
  .incbin "ovl8.raw.bin", 0x1A2E0, 0x4
  /* 1A2E4 1A7F94 8038B744 */  .4byte func_ovl8_803755C4
  .incbin "ovl8.raw.bin", 0x1A2E8, 0x4
  /* 1A2EC 1A7F9C 8038B74C */  .4byte func_ovl8_80375864
  .incbin "ovl8.raw.bin", 0x1A2F0, 0x4
  /* 1A2F4 1A7FA4 8038B754 */  .4byte func_ovl8_803769AC
  .incbin "ovl8.raw.bin", 0x1A2F8, 0x4
  /* 1A2FC 1A7FAC 8038B75C */  .4byte func_ovl8_803769B4
  .incbin "ovl8.raw.bin", 0x1A300, 0x4
  /* 1A304 1A7FB4 8038B764 */  .4byte func_ovl8_80372A94
  .incbin "ovl8.raw.bin", 0x1A308, 0x4
  /* 1A30C 1A7FBC 8038B76C */  .4byte func_ovl8_803806B0
  .incbin "ovl8.raw.bin", 0x1A310, 0x4
  /* 1A314 1A7FC4 8038B774 */  .4byte func_ovl8_80372D18
  .incbin "ovl8.raw.bin", 0x1A318, 0x4
  /* 1A31C 1A7FCC 8038B77C */  .4byte func_ovl8_80372D70
  .incbin "ovl8.raw.bin", 0x1A320, 0x4
  /* 1A324 1A7FD4 8038B784 */  .4byte func_ovl8_80376A48
  .incbin "ovl8.raw.bin", 0x1A328, 0x4
  /* 1A32C 1A7FDC 8038B78C */  .4byte func_ovl8_80376AA4
  .incbin "ovl8.raw.bin", 0x1A330, 0x4
  /* 1A334 1A7FE4 8038B794 */  .4byte func_ovl8_80372DE8
  .incbin "ovl8.raw.bin", 0x1A338, 0x4
  /* 1A33C 1A7FEC 8038B79C */  .4byte func_ovl8_80372E40
  .incbin "ovl8.raw.bin", 0x1A340, 0x4
  /* 1A344 1A7FF4 8038B7A4 */  .4byte func_ovl8_80376ADC
  .incbin "ovl8.raw.bin", 0x1A348, 0x4
  /* 1A34C 1A7FFC 8038B7AC */  .4byte func_ovl8_80373044
  .incbin "ovl8.raw.bin", 0x1A350, 0x4
  /* 1A354 1A8004 8038B7B4 */  .4byte func_ovl8_803730DC
  .incbin "ovl8.raw.bin", 0x1A358, 0x4
  /* 1A35C 1A800C 8038B7BC */  .4byte func_ovl8_80373118
  .incbin "ovl8.raw.bin", 0x1A360, 0x4
  /* 1A364 1A8014 8038B7C4 */  .4byte func_ovl8_80373138
  .incbin "ovl8.raw.bin", 0x1A368, 0x4
  /* 1A36C 1A801C 8038B7CC */  .4byte func_ovl8_803732B0
  .incbin "ovl8.raw.bin", 0x1A370, 0x4
  /* 1A374 1A8024 8038B7D4 */  .4byte func_ovl8_803801DC
  .incbin "ovl8.raw.bin", 0x1A378, 0x4
  /* 1A37C 1A802C 8038B7DC */  .4byte func_ovl8_80380C30
  .incbin "ovl8.raw.bin", 0x1A380, 0x4
  /* 1A384 1A8034 8038B7E4 */  .4byte func_ovl8_80380DD8
  .incbin "ovl8.raw.bin", 0x1A388, 0x8

glabel D_ovl8_8038B7F0
  .incbin "ovl8.raw.bin", 0x1A390, 0xC
  /* 1A39C 1A804C 8038B7FC */  .4byte func_ovl8_80380E14
  .incbin "ovl8.raw.bin", 0x1A3A0, 0x4
  /* 1A3A4 1A8054 8038B804 */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x1A3A8, 0x4
  /* 1A3AC 1A805C 8038B80C */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x1A3B0, 0x4
  /* 1A3B4 1A8064 8038B814 */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x1A3B8, 0x4
  /* 1A3BC 1A806C 8038B81C */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x1A3C0, 0x4
  /* 1A3C4 1A8074 8038B824 */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x1A3C8, 0x4
  /* 1A3CC 1A807C 8038B82C */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x1A3D0, 0x4
  /* 1A3D4 1A8084 8038B834 */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x1A3D8, 0x4
  /* 1A3DC 1A808C 8038B83C */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x1A3E0, 0x4
  /* 1A3E4 1A8094 8038B844 */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x1A3E8, 0x4
  /* 1A3EC 1A809C 8038B84C */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x1A3F0, 0x4
  /* 1A3F4 1A80A4 8038B854 */  .4byte func_ovl8_80376A04
  .incbin "ovl8.raw.bin", 0x1A3F8, 0x4
  /* 1A3FC 1A80AC 8038B85C */  .4byte func_ovl8_803801DC
  .incbin "ovl8.raw.bin", 0x1A400, 0x4
  /* 1A404 1A80B4 8038B864 */  .4byte func_ovl8_80372A94
  .incbin "ovl8.raw.bin", 0x1A408, 0x4
  /* 1A40C 1A80BC 8038B86C */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x1A410, 0x4
  /* 1A414 1A80C4 8038B874 */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x1A418, 0x4
  /* 1A41C 1A80CC 8038B87C */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x1A420, 0x4
  /* 1A424 1A80D4 8038B884 */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x1A428, 0x4
  /* 1A42C 1A80DC 8038B88C */  .4byte func_ovl8_803806B0
  .incbin "ovl8.raw.bin", 0x1A430, 0x4
  /* 1A434 1A80E4 8038B894 */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x1A438, 0x4
  /* 1A43C 1A80EC 8038B89C */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x1A440, 0x4
  /* 1A444 1A80F4 8038B8A4 */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x1A448, 0x4
  /* 1A44C 1A80FC 8038B8AC */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x1A450, 0x4
  /* 1A454 1A8104 8038B8B4 */  .4byte func_ovl8_80380C30
  .incbin "ovl8.raw.bin", 0x1A458, 0x4
  /* 1A45C 1A810C 8038B8BC */  .4byte func_ovl8_80372D70
  .incbin "ovl8.raw.bin", 0x1A460, 0x4
  /* 1A464 1A8114 8038B8C4 */  .4byte func_ovl8_80376A48
  .incbin "ovl8.raw.bin", 0x1A468, 0x4
  /* 1A46C 1A811C 8038B8CC */  .4byte func_ovl8_80372D18
  .incbin "ovl8.raw.bin", 0x1A470, 0x4
  /* 1A474 1A8124 8038B8D4 */  .4byte func_ovl8_80376AA4
  .incbin "ovl8.raw.bin", 0x1A478, 0x4
  /* 1A47C 1A812C 8038B8DC */  .4byte func_ovl8_80373118
  .incbin "ovl8.raw.bin", 0x1A480, 0x4
  /* 1A484 1A8134 8038B8E4 */  .4byte func_ovl8_80373138
  .incbin "ovl8.raw.bin", 0x1A488, 0x4
  /* 1A48C 1A813C 8038B8EC */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x1A490, 0x4
  /* 1A494 1A8144 8038B8F4 */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x1A498, 0x4
  /* 1A49C 1A814C 8038B8FC */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x1A4A0, 0x4
  /* 1A4A4 1A8154 8038B904 */  .4byte func_ovl8_80372DE8
  .incbin "ovl8.raw.bin", 0x1A4A8, 0x4
  /* 1A4AC 1A815C 8038B90C */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x1A4B0, 0x4
  /* 1A4B4 1A8164 8038B914 */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x1A4B8, 0x4
  /* 1A4BC 1A816C 8038B91C */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x1A4C0, 0x4
  /* 1A4C4 1A8174 8038B924 */  .4byte func_ovl8_803732B0
  .incbin "ovl8.raw.bin", 0x1A4C8, 0x4
  /* 1A4CC 1A817C 8038B92C */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x1A4D0, 0x4
  /* 1A4D4 1A8184 8038B934 */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x1A4D8, 0x4
  /* 1A4DC 1A818C 8038B93C */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x1A4E0, 0x8

glabel D_ovl8_8038B948
  .incbin "ovl8.raw.bin", 0x1A4E8, 0xC
  /* 1A4F4 1A81A4 8038B954 */  .4byte func_ovl8_80380E14
  .incbin "ovl8.raw.bin", 0x1A4F8, 0x4
  /* 1A4FC 1A81AC 8038B95C */  .4byte func_ovl8_803730DC
  .incbin "ovl8.raw.bin", 0x1A500, 0x4
  /* 1A504 1A81B4 8038B964 */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x1A508, 0x8

glabel D_ovl8_8038B970
  .incbin "ovl8.raw.bin", 0x1A510, 0xC
  /* 1A51C 1A81CC 8038B97C */  .4byte func_ovl8_80380E14
  .incbin "ovl8.raw.bin", 0x1A520, 0x4
  /* 1A524 1A81D4 8038B984 */  .4byte func_ovl8_80376A04
  .incbin "ovl8.raw.bin", 0x1A528, 0x4
  /* 1A52C 1A81DC 8038B98C */  .4byte func_ovl8_803721E8
  .incbin "ovl8.raw.bin", 0x1A530, 0x4
  /* 1A534 1A81E4 8038B994 */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x1A538, 0x4
  /* 1A53C 1A81EC 8038B99C */  .4byte func_ovl8_80372250
  .incbin "ovl8.raw.bin", 0x1A540, 0x4
  /* 1A544 1A81F4 8038B9A4 */  .4byte func_ovl8_803722A0
  .incbin "ovl8.raw.bin", 0x1A548, 0x4
  /* 1A54C 1A81FC 8038B9AC */  .4byte func_ovl8_803722F0
  .incbin "ovl8.raw.bin", 0x1A550, 0x4
  /* 1A554 1A8204 8038B9B4 */  .4byte func_ovl8_80372348
  .incbin "ovl8.raw.bin", 0x1A558, 0x4
  /* 1A55C 1A820C 8038B9BC */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x1A560, 0x4
  /* 1A564 1A8214 8038B9C4 */  .4byte func_ovl8_80372360
  .incbin "ovl8.raw.bin", 0x1A568, 0x8

glabel D_ovl8_8038B9D0
  .incbin "ovl8.raw.bin", 0x1A570, 0xC
  /* 1A57C 1A822C 8038B9DC */  .4byte func_ovl8_80381090
  .incbin "ovl8.raw.bin", 0x1A580, 0x4
  /* 1A584 1A8234 8038B9E4 */  .4byte func_ovl8_8037F590
  .incbin "ovl8.raw.bin", 0x1A588, 0x4
  /* 1A58C 1A823C 8038B9EC */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x1A590, 0x4
  /* 1A594 1A8244 8038B9F4 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1A598, 0x4
  /* 1A59C 1A824C 8038B9FC */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x1A5A0, 0x4
  /* 1A5A4 1A8254 8038BA04 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x1A5A8, 0x4
  /* 1A5AC 1A825C 8038BA0C */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x1A5B0, 0x4
  /* 1A5B4 1A8264 8038BA14 */  .4byte func_ovl8_80373694
  .incbin "ovl8.raw.bin", 0x1A5B8, 0x4
  /* 1A5BC 1A826C 8038BA1C */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x1A5C0, 0x4
  /* 1A5C4 1A8274 8038BA24 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x1A5C8, 0x4
  /* 1A5CC 1A827C 8038BA2C */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x1A5D0, 0x4
  /* 1A5D4 1A8284 8038BA34 */  .4byte func_ovl8_8037F80C
  .incbin "ovl8.raw.bin", 0x1A5D8, 0x4
  /* 1A5DC 1A828C 8038BA3C */  .4byte func_ovl8_8037383C
  .incbin "ovl8.raw.bin", 0x1A5E0, 0x4
  /* 1A5E4 1A8294 8038BA44 */  .4byte func_ovl8_80373930
  .incbin "ovl8.raw.bin", 0x1A5E8, 0x4
  /* 1A5EC 1A829C 8038BA4C */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x1A5F0, 0x4
  /* 1A5F4 1A82A4 8038BA54 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x1A5F8, 0x4
  /* 1A5FC 1A82AC 8038BA5C */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x1A600, 0x4
  /* 1A604 1A82B4 8038BA64 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x1A608, 0x4
  /* 1A60C 1A82BC 8038BA6C */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x1A610, 0x4
  /* 1A614 1A82C4 8038BA74 */  .4byte func_ovl8_8037F784
  .incbin "ovl8.raw.bin", 0x1A618, 0x4
  /* 1A61C 1A82CC 8038BA7C */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x1A620, 0x4
  /* 1A624 1A82D4 8038BA84 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x1A628, 0x4
  /* 1A62C 1A82DC 8038BA8C */  .4byte func_ovl8_80373BC0
  .incbin "ovl8.raw.bin", 0x1A630, 0x4
  /* 1A634 1A82E4 8038BA94 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x1A638, 0x4
  /* 1A63C 1A82EC 8038BA9C */  .4byte func_ovl8_8037F654
  .incbin "ovl8.raw.bin", 0x1A640, 0x4
  /* 1A644 1A82F4 8038BAA4 */  .4byte func_ovl8_8037F668
  .incbin "ovl8.raw.bin", 0x1A648, 0x8

glabel D_ovl8_8038BAB0
  .incbin "ovl8.raw.bin", 0x1A650, 0xC
  /* 1A65C 1A830C 8038BABC */  .4byte func_ovl8_80381090
  .incbin "ovl8.raw.bin", 0x1A660, 0x4
  /* 1A664 1A8314 8038BAC4 */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x1A668, 0x4
  /* 1A66C 1A831C 8038BACC */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x1A670, 0x4
  /* 1A674 1A8324 8038BAD4 */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x1A678, 0x4
  /* 1A67C 1A832C 8038BADC */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x1A680, 0x4
  /* 1A684 1A8334 8038BAE4 */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x1A688, 0x4
  /* 1A68C 1A833C 8038BAEC */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x1A690, 0x4
  /* 1A694 1A8344 8038BAF4 */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x1A698, 0x4
  /* 1A69C 1A834C 8038BAFC */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x1A6A0, 0x4
  /* 1A6A4 1A8354 8038BB04 */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x1A6A8, 0x4
  /* 1A6AC 1A835C 8038BB0C */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x1A6B0, 0x4
  /* 1A6B4 1A8364 8038BB14 */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x1A6B8, 0x4
  /* 1A6BC 1A836C 8038BB1C */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x1A6C0, 0x4
  /* 1A6C4 1A8374 8038BB24 */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x1A6C8, 0x4
  /* 1A6CC 1A837C 8038BB2C */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x1A6D0, 0x4
  /* 1A6D4 1A8384 8038BB34 */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x1A6D8, 0x4
  /* 1A6DC 1A838C 8038BB3C */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x1A6E0, 0x4
  /* 1A6E4 1A8394 8038BB44 */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x1A6E8, 0x4
  /* 1A6EC 1A839C 8038BB4C */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1A6F0, 0x4
  /* 1A6F4 1A83A4 8038BB54 */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x1A6F8, 0x4
  /* 1A6FC 1A83AC 8038BB5C */  .4byte func_ovl8_80371C50
  .incbin "ovl8.raw.bin", 0x1A700, 0x4
  /* 1A704 1A83B4 8038BB64 */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x1A708, 0x4
  /* 1A70C 1A83BC 8038BB6C */  .4byte func_ovl8_80371CB8
  .incbin "ovl8.raw.bin", 0x1A710, 0x4
  /* 1A714 1A83C4 8038BB74 */  .4byte func_ovl8_8037F590
  .incbin "ovl8.raw.bin", 0x1A718, 0x4
  /* 1A71C 1A83CC 8038BB7C */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x1A720, 0x4
  /* 1A724 1A83D4 8038BB84 */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x1A728, 0x4
  /* 1A72C 1A83DC 8038BB8C */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x1A730, 0x4
  /* 1A734 1A83E4 8038BB94 */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x1A738, 0x4
  /* 1A73C 1A83EC 8038BB9C */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x1A740, 0x4
  /* 1A744 1A83F4 8038BBA4 */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x1A748, 0x4
  /* 1A74C 1A83FC 8038BBAC */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x1A750, 0x4
  /* 1A754 1A8404 8038BBB4 */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x1A758, 0x4
  /* 1A75C 1A840C 8038BBBC */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x1A760, 0x4
  /* 1A764 1A8414 8038BBC4 */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x1A768, 0x4
  /* 1A76C 1A841C 8038BBCC */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x1A770, 0x4
  /* 1A774 1A8424 8038BBD4 */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x1A778, 0x4
  /* 1A77C 1A842C 8038BBDC */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x1A780, 0x4
  /* 1A784 1A8434 8038BBE4 */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x1A788, 0x4
  /* 1A78C 1A843C 8038BBEC */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x1A790, 0x4
  /* 1A794 1A8444 8038BBF4 */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x1A798, 0x4
  /* 1A79C 1A844C 8038BBFC */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x1A7A0, 0x8

glabel D_ovl8_8038BC08
  .incbin "ovl8.raw.bin", 0x1A7A8, 0xC
  /* 1A7B4 1A8464 8038BC14 */  .4byte func_ovl8_80381090
  .incbin "ovl8.raw.bin", 0x1A7B8, 0x4
  /* 1A7BC 1A846C 8038BC1C */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x1A7C0, 0x4
  /* 1A7C4 1A8474 8038BC24 */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x1A7C8, 0x8

glabel D_ovl8_8038BC30
  /* 1A7D0 1A8480 8038BC30 */
  .asciz "---"
  .balign 4

glabel D_ovl8_8038BC34
  .incbin "ovl8.raw.bin", 0x1A7D4, 0xC
  /* 1A7E0 1A8490 8038BC40 */  .4byte func_ovl8_8038120C
  .incbin "ovl8.raw.bin", 0x1A7E4, 0x4
  /* 1A7E8 1A8498 8038BC48 */  .4byte func_ovl8_8038125C
  .incbin "ovl8.raw.bin", 0x1A7EC, 0x4
  /* 1A7F0 1A84A0 8038BC50 */  .4byte func_ovl8_80381274
  .incbin "ovl8.raw.bin", 0x1A7F4, 0x4
  /* 1A7F8 1A84A8 8038BC58 */  .4byte func_ovl8_803812BC
  .incbin "ovl8.raw.bin", 0x1A7FC, 0x4
  /* 1A800 1A84B0 8038BC60 */  .4byte func_ovl8_80381308
  .incbin "ovl8.raw.bin", 0x1A804, 0x4
  /* 1A808 1A84B8 8038BC68 */  .4byte func_ovl8_80381710
  .incbin "ovl8.raw.bin", 0x1A80C, 0x4
  /* 1A810 1A84C0 8038BC70 */  .4byte func_ovl8_803817C0
  .incbin "ovl8.raw.bin", 0x1A814, 0x4
  /* 1A818 1A84C8 8038BC78 */  .4byte func_ovl8_8038185C
  .incbin "ovl8.raw.bin", 0x1A81C, 0x4
  /* 1A820 1A84D0 8038BC80 */  .4byte func_ovl8_80381908
  .incbin "ovl8.raw.bin", 0x1A824, 0x8

glabel D_ovl8_8038BC8C
  .incbin "ovl8.raw.bin", 0x1A82C, 0xC
  /* 1A838 1A84E8 8038BC98 */  .4byte func_ovl8_80381B10
  .incbin "ovl8.raw.bin", 0x1A83C, 0x4
  /* 1A840 1A84F0 8038BCA0 */  .4byte func_ovl8_80381A58
  .incbin "ovl8.raw.bin", 0x1A844, 0x4
  /* 1A848 1A84F8 8038BCA8 */  .4byte func_ovl8_803819F4
  .incbin "ovl8.raw.bin", 0x1A84C, 0x4
  /* 1A850 1A8500 8038BCB0 */  .4byte func_ovl8_80381A88
  .incbin "ovl8.raw.bin", 0x1A854, 0x4
  /* 1A858 1A8508 8038BCB8 */  .4byte func_ovl8_80381308
  .incbin "ovl8.raw.bin", 0x1A85C, 0x4
  /* 1A860 1A8510 8038BCC0 */  .4byte func_ovl8_80381AF0
  .incbin "ovl8.raw.bin", 0x1A864, 0x4
  /* 1A868 1A8518 8038BCC8 */  .4byte func_ovl8_80381B04
  .incbin "ovl8.raw.bin", 0x1A86C, 0x4
  /* 1A870 1A8520 8038BCD0 */  .4byte func_ovl8_8038185C
  .incbin "ovl8.raw.bin", 0x1A874, 0x4
  /* 1A878 1A8528 8038BCD8 */  .4byte func_ovl8_80381908
  .incbin "ovl8.raw.bin", 0x1A87C, 0x8

glabel D_ovl8_8038BCE4
  .incbin "ovl8.raw.bin", 0x1A884, 0x8

glabel D_ovl8_8038BCEC
  .incbin "ovl8.raw.bin", 0x1A88C, 0x4

glabel D_ovl8_8038BCF0
  .incbin "ovl8.raw.bin", 0x1A890, 0x4

glabel D_ovl8_8038BCF4
  .incbin "ovl8.raw.bin", 0x1A894, 0x4
  /* 1A898 1A8548 8038BCF8 */
  .asciz "POPM"
  .balign 4
  .incbin "ovl8.raw.bin", 0x1A8A0, 0x10

glabel D_ovl8_8038BD10
  .incbin "ovl8.raw.bin", 0x1A8B0, 0x10

glabel D_ovl8_8038BD20
  .incbin "ovl8.raw.bin", 0x1A8C0, 0xC
  /* 1A8CC 1A857C 8038BD2C */  .4byte func_ovl8_80382224
  .incbin "ovl8.raw.bin", 0x1A8D0, 0x4
  /* 1A8D4 1A8584 8038BD34 */  .4byte func_ovl8_80382354
  .incbin "ovl8.raw.bin", 0x1A8D8, 0x4
  /* 1A8DC 1A858C 8038BD3C */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x1A8E0, 0x4
  /* 1A8E4 1A8594 8038BD44 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1A8E8, 0x4
  /* 1A8EC 1A859C 8038BD4C */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x1A8F0, 0x4
  /* 1A8F4 1A85A4 8038BD54 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x1A8F8, 0x4
  /* 1A8FC 1A85AC 8038BD5C */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x1A900, 0x4
  /* 1A904 1A85B4 8038BD64 */  .4byte func_ovl8_80373694
  .incbin "ovl8.raw.bin", 0x1A908, 0x4
  /* 1A90C 1A85BC 8038BD6C */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x1A910, 0x4
  /* 1A914 1A85C4 8038BD74 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x1A918, 0x4
  /* 1A91C 1A85CC 8038BD7C */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x1A920, 0x4
  /* 1A924 1A85D4 8038BD84 */  .4byte func_ovl8_80373828
  .incbin "ovl8.raw.bin", 0x1A928, 0x4
  /* 1A92C 1A85DC 8038BD8C */  .4byte func_ovl8_8037383C
  .incbin "ovl8.raw.bin", 0x1A930, 0x4
  /* 1A934 1A85E4 8038BD94 */  .4byte func_ovl8_803822D8
  .incbin "ovl8.raw.bin", 0x1A938, 0x4
  /* 1A93C 1A85EC 8038BD9C */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x1A940, 0x4
  /* 1A944 1A85F4 8038BDA4 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x1A948, 0x4
  /* 1A94C 1A85FC 8038BDAC */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x1A950, 0x4
  /* 1A954 1A8604 8038BDB4 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x1A958, 0x4
  /* 1A95C 1A860C 8038BDBC */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x1A960, 0x4
  /* 1A964 1A8614 8038BDC4 */  .4byte func_ovl8_80373AC4
  .incbin "ovl8.raw.bin", 0x1A968, 0x4
  /* 1A96C 1A861C 8038BDCC */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x1A970, 0x4
  /* 1A974 1A8624 8038BDD4 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x1A978, 0x4
  /* 1A97C 1A862C 8038BDDC */  .4byte func_ovl8_80373BC0
  .incbin "ovl8.raw.bin", 0x1A980, 0x4
  /* 1A984 1A8634 8038BDE4 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x1A988, 0x8

glabel D_ovl8_8038BDF0
  .incbin "ovl8.raw.bin", 0x1A990, 0xC
  /* 1A99C 1A864C 8038BDFC */  .4byte func_ovl8_80382224
  .incbin "ovl8.raw.bin", 0x1A9A0, 0x4
  /* 1A9A4 1A8654 8038BE04 */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x1A9A8, 0x4
  /* 1A9AC 1A865C 8038BE0C */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x1A9B0, 0x4
  /* 1A9B4 1A8664 8038BE14 */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x1A9B8, 0x4
  /* 1A9BC 1A866C 8038BE1C */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x1A9C0, 0x4
  /* 1A9C4 1A8674 8038BE24 */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x1A9C8, 0x4
  /* 1A9CC 1A867C 8038BE2C */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x1A9D0, 0x4
  /* 1A9D4 1A8684 8038BE34 */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x1A9D8, 0x4
  /* 1A9DC 1A868C 8038BE3C */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x1A9E0, 0x4
  /* 1A9E4 1A8694 8038BE44 */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x1A9E8, 0x4
  /* 1A9EC 1A869C 8038BE4C */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x1A9F0, 0x4
  /* 1A9F4 1A86A4 8038BE54 */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x1A9F8, 0x4
  /* 1A9FC 1A86AC 8038BE5C */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x1AA00, 0x4
  /* 1AA04 1A86B4 8038BE64 */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x1AA08, 0x4
  /* 1AA0C 1A86BC 8038BE6C */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x1AA10, 0x4
  /* 1AA14 1A86C4 8038BE74 */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x1AA18, 0x4
  /* 1AA1C 1A86CC 8038BE7C */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x1AA20, 0x4
  /* 1AA24 1A86D4 8038BE84 */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x1AA28, 0x4
  /* 1AA2C 1A86DC 8038BE8C */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1AA30, 0x4
  /* 1AA34 1A86E4 8038BE94 */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x1AA38, 0x4
  /* 1AA3C 1A86EC 8038BE9C */  .4byte func_ovl8_80371C50
  .incbin "ovl8.raw.bin", 0x1AA40, 0x4
  /* 1AA44 1A86F4 8038BEA4 */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x1AA48, 0x4
  /* 1AA4C 1A86FC 8038BEAC */  .4byte func_ovl8_80371CB8
  .incbin "ovl8.raw.bin", 0x1AA50, 0x4
  /* 1AA54 1A8704 8038BEB4 */  .4byte func_ovl8_80382354
  .incbin "ovl8.raw.bin", 0x1AA58, 0x4
  /* 1AA5C 1A870C 8038BEBC */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x1AA60, 0x4
  /* 1AA64 1A8714 8038BEC4 */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x1AA68, 0x4
  /* 1AA6C 1A871C 8038BECC */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x1AA70, 0x4
  /* 1AA74 1A8724 8038BED4 */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x1AA78, 0x4
  /* 1AA7C 1A872C 8038BEDC */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x1AA80, 0x4
  /* 1AA84 1A8734 8038BEE4 */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x1AA88, 0x4
  /* 1AA8C 1A873C 8038BEEC */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x1AA90, 0x4
  /* 1AA94 1A8744 8038BEF4 */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x1AA98, 0x4
  /* 1AA9C 1A874C 8038BEFC */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x1AAA0, 0x4
  /* 1AAA4 1A8754 8038BF04 */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x1AAA8, 0x4
  /* 1AAAC 1A875C 8038BF0C */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x1AAB0, 0x4
  /* 1AAB4 1A8764 8038BF14 */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x1AAB8, 0x4
  /* 1AABC 1A876C 8038BF1C */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x1AAC0, 0x4
  /* 1AAC4 1A8774 8038BF24 */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x1AAC8, 0x4
  /* 1AACC 1A877C 8038BF2C */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x1AAD0, 0x4
  /* 1AAD4 1A8784 8038BF34 */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x1AAD8, 0x4
  /* 1AADC 1A878C 8038BF3C */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x1AAE0, 0x8

glabel D_ovl8_8038BF48
  .incbin "ovl8.raw.bin", 0x1AAE8, 0xC
  /* 1AAF4 1A87A4 8038BF54 */  .4byte func_ovl8_80382224
  .incbin "ovl8.raw.bin", 0x1AAF8, 0x4
  /* 1AAFC 1A87AC 8038BF5C */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x1AB00, 0x4
  /* 1AB04 1A87B4 8038BF64 */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x1AB08, 0x8

glabel D_ovl8_8038BF70
  .incbin "ovl8.raw.bin", 0x1AB10, 0xC
  /* 1AB1C 1A87CC 8038BF7C */  .4byte func_ovl8_80382670
  .incbin "ovl8.raw.bin", 0x1AB20, 0x4
  /* 1AB24 1A87D4 8038BF84 */  .4byte func_ovl8_80382354
  .incbin "ovl8.raw.bin", 0x1AB28, 0x4
  /* 1AB2C 1A87DC 8038BF8C */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x1AB30, 0x4
  /* 1AB34 1A87E4 8038BF94 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1AB38, 0x4
  /* 1AB3C 1A87EC 8038BF9C */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x1AB40, 0x4
  /* 1AB44 1A87F4 8038BFA4 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x1AB48, 0x4
  /* 1AB4C 1A87FC 8038BFAC */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x1AB50, 0x4
  /* 1AB54 1A8804 8038BFB4 */  .4byte func_ovl8_80373694
  .incbin "ovl8.raw.bin", 0x1AB58, 0x4
  /* 1AB5C 1A880C 8038BFBC */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x1AB60, 0x4
  /* 1AB64 1A8814 8038BFC4 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x1AB68, 0x4
  /* 1AB6C 1A881C 8038BFCC */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x1AB70, 0x4
  /* 1AB74 1A8824 8038BFD4 */  .4byte func_ovl8_80373828
  .incbin "ovl8.raw.bin", 0x1AB78, 0x4
  /* 1AB7C 1A882C 8038BFDC */  .4byte func_ovl8_8037383C
  .incbin "ovl8.raw.bin", 0x1AB80, 0x4
  /* 1AB84 1A8834 8038BFE4 */  .4byte func_ovl8_803822D8
  .incbin "ovl8.raw.bin", 0x1AB88, 0x4
  /* 1AB8C 1A883C 8038BFEC */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x1AB90, 0x4
  /* 1AB94 1A8844 8038BFF4 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x1AB98, 0x4
  /* 1AB9C 1A884C 8038BFFC */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x1ABA0, 0x4
  /* 1ABA4 1A8854 8038C004 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x1ABA8, 0x4
  /* 1ABAC 1A885C 8038C00C */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x1ABB0, 0x4
  /* 1ABB4 1A8864 8038C014 */  .4byte func_ovl8_80373AC4
  .incbin "ovl8.raw.bin", 0x1ABB8, 0x4
  /* 1ABBC 1A886C 8038C01C */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x1ABC0, 0x4
  /* 1ABC4 1A8874 8038C024 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x1ABC8, 0x4
  /* 1ABCC 1A887C 8038C02C */  .4byte func_ovl8_80373BC0
  .incbin "ovl8.raw.bin", 0x1ABD0, 0x4
  /* 1ABD4 1A8884 8038C034 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x1ABD8, 0x8

glabel D_ovl8_8038C040
  .incbin "ovl8.raw.bin", 0x1ABE0, 0xC
  /* 1ABEC 1A889C 8038C04C */  .4byte func_ovl8_80382670
  .incbin "ovl8.raw.bin", 0x1ABF0, 0x4
  /* 1ABF4 1A88A4 8038C054 */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x1ABF8, 0x4
  /* 1ABFC 1A88AC 8038C05C */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x1AC00, 0x4
  /* 1AC04 1A88B4 8038C064 */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x1AC08, 0x4
  /* 1AC0C 1A88BC 8038C06C */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x1AC10, 0x4
  /* 1AC14 1A88C4 8038C074 */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x1AC18, 0x4
  /* 1AC1C 1A88CC 8038C07C */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x1AC20, 0x4
  /* 1AC24 1A88D4 8038C084 */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x1AC28, 0x4
  /* 1AC2C 1A88DC 8038C08C */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x1AC30, 0x4
  /* 1AC34 1A88E4 8038C094 */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x1AC38, 0x4
  /* 1AC3C 1A88EC 8038C09C */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x1AC40, 0x4
  /* 1AC44 1A88F4 8038C0A4 */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x1AC48, 0x4
  /* 1AC4C 1A88FC 8038C0AC */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x1AC50, 0x4
  /* 1AC54 1A8904 8038C0B4 */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x1AC58, 0x4
  /* 1AC5C 1A890C 8038C0BC */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x1AC60, 0x4
  /* 1AC64 1A8914 8038C0C4 */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x1AC68, 0x4
  /* 1AC6C 1A891C 8038C0CC */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x1AC70, 0x4
  /* 1AC74 1A8924 8038C0D4 */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x1AC78, 0x4
  /* 1AC7C 1A892C 8038C0DC */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1AC80, 0x4
  /* 1AC84 1A8934 8038C0E4 */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x1AC88, 0x4
  /* 1AC8C 1A893C 8038C0EC */  .4byte func_ovl8_80371C50
  .incbin "ovl8.raw.bin", 0x1AC90, 0x4
  /* 1AC94 1A8944 8038C0F4 */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x1AC98, 0x4
  /* 1AC9C 1A894C 8038C0FC */  .4byte func_ovl8_80371CB8
  .incbin "ovl8.raw.bin", 0x1ACA0, 0x4
  /* 1ACA4 1A8954 8038C104 */  .4byte func_ovl8_80382354
  .incbin "ovl8.raw.bin", 0x1ACA8, 0x4
  /* 1ACAC 1A895C 8038C10C */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x1ACB0, 0x4
  /* 1ACB4 1A8964 8038C114 */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x1ACB8, 0x4
  /* 1ACBC 1A896C 8038C11C */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x1ACC0, 0x4
  /* 1ACC4 1A8974 8038C124 */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x1ACC8, 0x4
  /* 1ACCC 1A897C 8038C12C */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x1ACD0, 0x4
  /* 1ACD4 1A8984 8038C134 */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x1ACD8, 0x4
  /* 1ACDC 1A898C 8038C13C */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x1ACE0, 0x4
  /* 1ACE4 1A8994 8038C144 */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x1ACE8, 0x4
  /* 1ACEC 1A899C 8038C14C */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x1ACF0, 0x4
  /* 1ACF4 1A89A4 8038C154 */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x1ACF8, 0x4
  /* 1ACFC 1A89AC 8038C15C */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x1AD00, 0x4
  /* 1AD04 1A89B4 8038C164 */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x1AD08, 0x4
  /* 1AD0C 1A89BC 8038C16C */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x1AD10, 0x4
  /* 1AD14 1A89C4 8038C174 */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x1AD18, 0x4
  /* 1AD1C 1A89CC 8038C17C */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x1AD20, 0x4
  /* 1AD24 1A89D4 8038C184 */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x1AD28, 0x4
  /* 1AD2C 1A89DC 8038C18C */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x1AD30, 0x8

glabel D_ovl8_8038C198
  .incbin "ovl8.raw.bin", 0x1AD38, 0xC
  /* 1AD44 1A89F4 8038C1A4 */  .4byte func_ovl8_80382670
  .incbin "ovl8.raw.bin", 0x1AD48, 0x4
  /* 1AD4C 1A89FC 8038C1AC */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x1AD50, 0x4
  /* 1AD54 1A8A04 8038C1B4 */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x1AD58, 0x8

glabel D_ovl8_8038C1C0
  .incbin "ovl8.raw.bin", 0x1AD60, 0xC
  /* 1AD6C 1A8A1C 8038C1CC */  .4byte func_ovl8_8038295C
  .incbin "ovl8.raw.bin", 0x1AD70, 0x4
  /* 1AD74 1A8A24 8038C1D4 */  .4byte func_ovl8_80382A20
  .incbin "ovl8.raw.bin", 0x1AD78, 0x4
  /* 1AD7C 1A8A2C 8038C1DC */  .4byte func_ovl8_8037C9E4
  .incbin "ovl8.raw.bin", 0x1AD80, 0x4
  /* 1AD84 1A8A34 8038C1E4 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1AD88, 0x4
  /* 1AD8C 1A8A3C 8038C1EC */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x1AD90, 0x4
  /* 1AD94 1A8A44 8038C1F4 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x1AD98, 0x4
  /* 1AD9C 1A8A4C 8038C1FC */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x1ADA0, 0x4
  /* 1ADA4 1A8A54 8038C204 */  .4byte func_ovl8_80382AA0
  .incbin "ovl8.raw.bin", 0x1ADA8, 0x4
  /* 1ADAC 1A8A5C 8038C20C */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x1ADB0, 0x4
  /* 1ADB4 1A8A64 8038C214 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x1ADB8, 0x4
  /* 1ADBC 1A8A6C 8038C21C */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x1ADC0, 0x4
  /* 1ADC4 1A8A74 8038C224 */  .4byte func_ovl8_80382A80
  .incbin "ovl8.raw.bin", 0x1ADC8, 0x4
  /* 1ADCC 1A8A7C 8038C22C */  .4byte func_ovl8_80373EA8
  .incbin "ovl8.raw.bin", 0x1ADD0, 0x4
  /* 1ADD4 1A8A84 8038C234 */  .4byte func_ovl8_80373930
  .incbin "ovl8.raw.bin", 0x1ADD8, 0x4
  /* 1ADDC 1A8A8C 8038C23C */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x1ADE0, 0x4
  /* 1ADE4 1A8A94 8038C244 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x1ADE8, 0x4
  /* 1ADEC 1A8A9C 8038C24C */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x1ADF0, 0x4
  /* 1ADF4 1A8AA4 8038C254 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x1ADF8, 0x4
  /* 1ADFC 1A8AAC 8038C25C */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x1AE00, 0x4
  /* 1AE04 1A8AB4 8038C264 */  .4byte func_ovl8_80373AC4
  .incbin "ovl8.raw.bin", 0x1AE08, 0x4
  /* 1AE0C 1A8ABC 8038C26C */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x1AE10, 0x4
  /* 1AE14 1A8AC4 8038C274 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x1AE18, 0x4
  /* 1AE1C 1A8ACC 8038C27C */  .4byte func_ovl8_803743D8
  .incbin "ovl8.raw.bin", 0x1AE20, 0x4
  /* 1AE24 1A8AD4 8038C284 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x1AE28, 0x4
  /* 1AE2C 1A8ADC 8038C28C */  .4byte func_ovl8_803743C0
  .incbin "ovl8.raw.bin", 0x1AE30, 0x4
  /* 1AE34 1A8AE4 8038C294 */  .4byte func_ovl8_8037CA48
  .incbin "ovl8.raw.bin", 0x1AE38, 0x8

glabel D_ovl8_8038C2A0
  .incbin "ovl8.raw.bin", 0x1AE40, 0xC
  /* 1AE4C 1A8AFC 8038C2AC */  .4byte func_ovl8_8038295C
  .incbin "ovl8.raw.bin", 0x1AE50, 0x4
  /* 1AE54 1A8B04 8038C2B4 */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x1AE58, 0x4
  /* 1AE5C 1A8B0C 8038C2BC */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x1AE60, 0x4
  /* 1AE64 1A8B14 8038C2C4 */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x1AE68, 0x4
  /* 1AE6C 1A8B1C 8038C2CC */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x1AE70, 0x4
  /* 1AE74 1A8B24 8038C2D4 */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x1AE78, 0x4
  /* 1AE7C 1A8B2C 8038C2DC */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x1AE80, 0x4
  /* 1AE84 1A8B34 8038C2E4 */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x1AE88, 0x4
  /* 1AE8C 1A8B3C 8038C2EC */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x1AE90, 0x4
  /* 1AE94 1A8B44 8038C2F4 */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x1AE98, 0x4
  /* 1AE9C 1A8B4C 8038C2FC */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x1AEA0, 0x4
  /* 1AEA4 1A8B54 8038C304 */  .4byte func_ovl8_8037C9E4
  .incbin "ovl8.raw.bin", 0x1AEA8, 0x4
  /* 1AEAC 1A8B5C 8038C30C */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x1AEB0, 0x4
  /* 1AEB4 1A8B64 8038C314 */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x1AEB8, 0x4
  /* 1AEBC 1A8B6C 8038C31C */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x1AEC0, 0x4
  /* 1AEC4 1A8B74 8038C324 */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x1AEC8, 0x4
  /* 1AECC 1A8B7C 8038C32C */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x1AED0, 0x4
  /* 1AED4 1A8B84 8038C334 */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x1AED8, 0x4
  /* 1AEDC 1A8B8C 8038C33C */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1AEE0, 0x4
  /* 1AEE4 1A8B94 8038C344 */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x1AEE8, 0x4
  /* 1AEEC 1A8B9C 8038C34C */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x1AEF0, 0x4
  /* 1AEF4 1A8BA4 8038C354 */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x1AEF8, 0x4
  /* 1AEFC 1A8BAC 8038C35C */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x1AF00, 0x4
  /* 1AF04 1A8BB4 8038C364 */  .4byte func_ovl8_80382A20
  .incbin "ovl8.raw.bin", 0x1AF08, 0x4
  /* 1AF0C 1A8BBC 8038C36C */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x1AF10, 0x4
  /* 1AF14 1A8BC4 8038C374 */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x1AF18, 0x4
  /* 1AF1C 1A8BCC 8038C37C */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x1AF20, 0x4
  /* 1AF24 1A8BD4 8038C384 */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x1AF28, 0x4
  /* 1AF2C 1A8BDC 8038C38C */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x1AF30, 0x4
  /* 1AF34 1A8BE4 8038C394 */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x1AF38, 0x4
  /* 1AF3C 1A8BEC 8038C39C */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x1AF40, 0x4
  /* 1AF44 1A8BF4 8038C3A4 */  .4byte func_ovl8_803726CC
  .incbin "ovl8.raw.bin", 0x1AF48, 0x4
  /* 1AF4C 1A8BFC 8038C3AC */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x1AF50, 0x4
  /* 1AF54 1A8C04 8038C3B4 */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x1AF58, 0x4
  /* 1AF5C 1A8C0C 8038C3BC */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x1AF60, 0x4
  /* 1AF64 1A8C14 8038C3C4 */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x1AF68, 0x4
  /* 1AF6C 1A8C1C 8038C3CC */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x1AF70, 0x4
  /* 1AF74 1A8C24 8038C3D4 */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x1AF78, 0x4
  /* 1AF7C 1A8C2C 8038C3DC */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x1AF80, 0x4
  /* 1AF84 1A8C34 8038C3E4 */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x1AF88, 0x4
  /* 1AF8C 1A8C3C 8038C3EC */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x1AF90, 0x8

glabel D_ovl8_8038C3F8
  .incbin "ovl8.raw.bin", 0x1AF98, 0xC
  /* 1AFA4 1A8C54 8038C404 */  .4byte func_ovl8_8038295C
  .incbin "ovl8.raw.bin", 0x1AFA8, 0x4
  /* 1AFAC 1A8C5C 8038C40C */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x1AFB0, 0x4
  /* 1AFB4 1A8C64 8038C414 */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x1AFB8, 0x8

glabel D_ovl8_8038C420
  .incbin "ovl8.raw.bin", 0x1AFC0, 0xC
  /* 1AFCC 1A8C7C 8038C42C */  .4byte func_ovl8_8038295C
  .incbin "ovl8.raw.bin", 0x1AFD0, 0x4
  /* 1AFD4 1A8C84 8038C434 */  .4byte func_ovl8_8037C9E4
  .incbin "ovl8.raw.bin", 0x1AFD8, 0x4
  /* 1AFDC 1A8C8C 8038C43C */  .4byte func_ovl8_803721E8
  .incbin "ovl8.raw.bin", 0x1AFE0, 0x4
  /* 1AFE4 1A8C94 8038C444 */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x1AFE8, 0x4
  /* 1AFEC 1A8C9C 8038C44C */  .4byte func_ovl8_80372250
  .incbin "ovl8.raw.bin", 0x1AFF0, 0x4
  /* 1AFF4 1A8CA4 8038C454 */  .4byte func_ovl8_803722A0
  .incbin "ovl8.raw.bin", 0x1AFF8, 0x4
  /* 1AFFC 1A8CAC 8038C45C */  .4byte func_ovl8_803722F0
  .incbin "ovl8.raw.bin", 0x1B000, 0x4
  /* 1B004 1A8CB4 8038C464 */  .4byte func_ovl8_80372348
  .incbin "ovl8.raw.bin", 0x1B008, 0x4
  /* 1B00C 1A8CBC 8038C46C */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x1B010, 0x4
  /* 1B014 1A8CC4 8038C474 */  .4byte func_ovl8_80372360
  .incbin "ovl8.raw.bin", 0x1B018, 0x4
  /* 1B01C 1A8CCC 8038C47C */  .4byte func_ovl8_803726CC
  .incbin "ovl8.raw.bin", 0x1B020, 0x8

glabel D_ovl8_8038C488
  .incbin "ovl8.raw.bin", 0x1B028, 0xC
  /* 1B034 1A8CE4 8038C494 */  .4byte func_ovl8_8038295C
  .incbin "ovl8.raw.bin", 0x1B038, 0x4
  /* 1B03C 1A8CEC 8038C49C */  .4byte func_ovl8_8038125C
  .incbin "ovl8.raw.bin", 0x1B040, 0x4
  /* 1B044 1A8CF4 8038C4A4 */  .4byte func_ovl8_80381274
  .incbin "ovl8.raw.bin", 0x1B048, 0x4
  /* 1B04C 1A8CFC 8038C4AC */  .4byte func_ovl8_803812BC
  .incbin "ovl8.raw.bin", 0x1B050, 0x4
  /* 1B054 1A8D04 8038C4B4 */  .4byte func_ovl8_80381308
  .incbin "ovl8.raw.bin", 0x1B058, 0x4
  /* 1B05C 1A8D0C 8038C4BC */  .4byte func_ovl8_80381710
  .incbin "ovl8.raw.bin", 0x1B060, 0x4
  /* 1B064 1A8D14 8038C4C4 */  .4byte func_ovl8_803817C0
  .incbin "ovl8.raw.bin", 0x1B068, 0x4
  /* 1B06C 1A8D1C 8038C4CC */  .4byte func_ovl8_8038185C
  .incbin "ovl8.raw.bin", 0x1B070, 0x4
  /* 1B074 1A8D24 8038C4D4 */  .4byte func_ovl8_80381908
  .incbin "ovl8.raw.bin", 0x1B078, 0x8

glabel D_ovl8_8038C4E0
  .incbin "ovl8.raw.bin", 0x1B080, 0xC
  /* 1B08C 1A8D3C 8038C4EC */  .4byte func_ovl8_80382C24
  .incbin "ovl8.raw.bin", 0x1B090, 0x4
  /* 1B094 1A8D44 8038C4F4 */  .4byte func_ovl8_80382CDC
  .incbin "ovl8.raw.bin", 0x1B098, 0x4
  /* 1B09C 1A8D4C 8038C4FC */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x1B0A0, 0x4
  /* 1B0A4 1A8D54 8038C504 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1B0A8, 0x4
  /* 1B0AC 1A8D5C 8038C50C */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x1B0B0, 0x4
  /* 1B0B4 1A8D64 8038C514 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x1B0B8, 0x4
  /* 1B0BC 1A8D6C 8038C51C */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x1B0C0, 0x4
  /* 1B0C4 1A8D74 8038C524 */  .4byte func_ovl8_80382D50
  .incbin "ovl8.raw.bin", 0x1B0C8, 0x4
  /* 1B0CC 1A8D7C 8038C52C */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x1B0D0, 0x4
  /* 1B0D4 1A8D84 8038C534 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x1B0D8, 0x4
  /* 1B0DC 1A8D8C 8038C53C */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x1B0E0, 0x4
  /* 1B0E4 1A8D94 8038C544 */  .4byte func_ovl8_80382D30
  .incbin "ovl8.raw.bin", 0x1B0E8, 0x4
  /* 1B0EC 1A8D9C 8038C54C */  .4byte func_ovl8_80373EA8
  .incbin "ovl8.raw.bin", 0x1B0F0, 0x4
  /* 1B0F4 1A8DA4 8038C554 */  .4byte func_ovl8_80373930
  .incbin "ovl8.raw.bin", 0x1B0F8, 0x4
  /* 1B0FC 1A8DAC 8038C55C */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x1B100, 0x4
  /* 1B104 1A8DB4 8038C564 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x1B108, 0x4
  /* 1B10C 1A8DBC 8038C56C */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x1B110, 0x4
  /* 1B114 1A8DC4 8038C574 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x1B118, 0x4
  /* 1B11C 1A8DCC 8038C57C */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x1B120, 0x4
  /* 1B124 1A8DD4 8038C584 */  .4byte func_ovl8_80373AC4
  .incbin "ovl8.raw.bin", 0x1B128, 0x4
  /* 1B12C 1A8DDC 8038C58C */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x1B130, 0x4
  /* 1B134 1A8DE4 8038C594 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x1B138, 0x4
  /* 1B13C 1A8DEC 8038C59C */  .4byte func_ovl8_803743D8
  .incbin "ovl8.raw.bin", 0x1B140, 0x4
  /* 1B144 1A8DF4 8038C5A4 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x1B148, 0x4
  /* 1B14C 1A8DFC 8038C5AC */  .4byte func_ovl8_803743C0
  .incbin "ovl8.raw.bin", 0x1B150, 0x8

glabel D_ovl8_8038C5B8
  .incbin "ovl8.raw.bin", 0x1B158, 0xC
  /* 1B164 1A8E14 8038C5C4 */  .4byte func_ovl8_80382C24
  .incbin "ovl8.raw.bin", 0x1B168, 0x4
  /* 1B16C 1A8E1C 8038C5CC */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x1B170, 0x4
  /* 1B174 1A8E24 8038C5D4 */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x1B178, 0x4
  /* 1B17C 1A8E2C 8038C5DC */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x1B180, 0x4
  /* 1B184 1A8E34 8038C5E4 */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x1B188, 0x4
  /* 1B18C 1A8E3C 8038C5EC */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x1B190, 0x4
  /* 1B194 1A8E44 8038C5F4 */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x1B198, 0x4
  /* 1B19C 1A8E4C 8038C5FC */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x1B1A0, 0x4
  /* 1B1A4 1A8E54 8038C604 */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x1B1A8, 0x4
  /* 1B1AC 1A8E5C 8038C60C */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x1B1B0, 0x4
  /* 1B1B4 1A8E64 8038C614 */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x1B1B8, 0x4
  /* 1B1BC 1A8E6C 8038C61C */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x1B1C0, 0x4
  /* 1B1C4 1A8E74 8038C624 */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x1B1C8, 0x4
  /* 1B1CC 1A8E7C 8038C62C */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x1B1D0, 0x4
  /* 1B1D4 1A8E84 8038C634 */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x1B1D8, 0x4
  /* 1B1DC 1A8E8C 8038C63C */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x1B1E0, 0x4
  /* 1B1E4 1A8E94 8038C644 */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x1B1E8, 0x4
  /* 1B1EC 1A8E9C 8038C64C */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x1B1F0, 0x4
  /* 1B1F4 1A8EA4 8038C654 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1B1F8, 0x4
  /* 1B1FC 1A8EAC 8038C65C */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x1B200, 0x4
  /* 1B204 1A8EB4 8038C664 */  .4byte func_ovl8_80371C50
  .incbin "ovl8.raw.bin", 0x1B208, 0x4
  /* 1B20C 1A8EBC 8038C66C */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x1B210, 0x4
  /* 1B214 1A8EC4 8038C674 */  .4byte func_ovl8_80371CB8
  .incbin "ovl8.raw.bin", 0x1B218, 0x4
  /* 1B21C 1A8ECC 8038C67C */  .4byte func_ovl8_80382CDC
  .incbin "ovl8.raw.bin", 0x1B220, 0x4
  /* 1B224 1A8ED4 8038C684 */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x1B228, 0x4
  /* 1B22C 1A8EDC 8038C68C */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x1B230, 0x4
  /* 1B234 1A8EE4 8038C694 */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x1B238, 0x4
  /* 1B23C 1A8EEC 8038C69C */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x1B240, 0x4
  /* 1B244 1A8EF4 8038C6A4 */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x1B248, 0x4
  /* 1B24C 1A8EFC 8038C6AC */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x1B250, 0x4
  /* 1B254 1A8F04 8038C6B4 */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x1B258, 0x4
  /* 1B25C 1A8F0C 8038C6BC */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x1B260, 0x4
  /* 1B264 1A8F14 8038C6C4 */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x1B268, 0x4
  /* 1B26C 1A8F1C 8038C6CC */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x1B270, 0x4
  /* 1B274 1A8F24 8038C6D4 */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x1B278, 0x4
  /* 1B27C 1A8F2C 8038C6DC */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x1B280, 0x4
  /* 1B284 1A8F34 8038C6E4 */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x1B288, 0x4
  /* 1B28C 1A8F3C 8038C6EC */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x1B290, 0x4
  /* 1B294 1A8F44 8038C6F4 */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x1B298, 0x4
  /* 1B29C 1A8F4C 8038C6FC */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x1B2A0, 0x4
  /* 1B2A4 1A8F54 8038C704 */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x1B2A8, 0x8

glabel D_ovl8_8038C710
  .incbin "ovl8.raw.bin", 0x1B2B0, 0xC
  /* 1B2BC 1A8F6C 8038C71C */  .4byte func_ovl8_80382C24
  .incbin "ovl8.raw.bin", 0x1B2C0, 0x4
  /* 1B2C4 1A8F74 8038C724 */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x1B2C8, 0x4
  /* 1B2CC 1A8F7C 8038C72C */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x1B2D0, 0x8

glabel D_ovl8_8038C738
  .incbin "ovl8.raw.bin", 0x1B2D8, 0xC
  /* 1B2E4 1A8F94 8038C744 */  .4byte func_ovl8_80382C24
  .incbin "ovl8.raw.bin", 0x1B2E8, 0x4
  /* 1B2EC 1A8F9C 8038C74C */  .4byte func_ovl8_8038125C
  .incbin "ovl8.raw.bin", 0x1B2F0, 0x4
  /* 1B2F4 1A8FA4 8038C754 */  .4byte func_ovl8_80381274
  .incbin "ovl8.raw.bin", 0x1B2F8, 0x4
  /* 1B2FC 1A8FAC 8038C75C */  .4byte func_ovl8_803812BC
  .incbin "ovl8.raw.bin", 0x1B300, 0x4
  /* 1B304 1A8FB4 8038C764 */  .4byte func_ovl8_80381308
  .incbin "ovl8.raw.bin", 0x1B308, 0x4
  /* 1B30C 1A8FBC 8038C76C */  .4byte func_ovl8_80381710
  .incbin "ovl8.raw.bin", 0x1B310, 0x4
  /* 1B314 1A8FC4 8038C774 */  .4byte func_ovl8_803817C0
  .incbin "ovl8.raw.bin", 0x1B318, 0x4
  /* 1B31C 1A8FCC 8038C77C */  .4byte func_ovl8_8038185C
  .incbin "ovl8.raw.bin", 0x1B320, 0x4
  /* 1B324 1A8FD4 8038C784 */  .4byte func_ovl8_80381908
  .incbin "ovl8.raw.bin", 0x1B328, 0x8

glabel D_ovl8_8038C790
  .incbin "ovl8.raw.bin", 0x1B330, 0xC
  /* 1B33C 1A8FEC 8038C79C */  .4byte func_ovl8_80382F70
  .incbin "ovl8.raw.bin", 0x1B340, 0x4
  /* 1B344 1A8FF4 8038C7A4 */  .4byte func_ovl8_80373640
  .incbin "ovl8.raw.bin", 0x1B348, 0x4
  /* 1B34C 1A8FFC 8038C7AC */  .4byte func_ovl8_8038300C
  .incbin "ovl8.raw.bin", 0x1B350, 0x4
  /* 1B354 1A9004 8038C7B4 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1B358, 0x4
  /* 1B35C 1A900C 8038C7BC */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x1B360, 0x4
  /* 1B364 1A9014 8038C7C4 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x1B368, 0x4
  /* 1B36C 1A901C 8038C7CC */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x1B370, 0x4
  /* 1B374 1A9024 8038C7D4 */  .4byte func_ovl8_80373694
  .incbin "ovl8.raw.bin", 0x1B378, 0x4
  /* 1B37C 1A902C 8038C7DC */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x1B380, 0x4
  /* 1B384 1A9034 8038C7E4 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x1B388, 0x4
  /* 1B38C 1A903C 8038C7EC */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x1B390, 0x4
  /* 1B394 1A9044 8038C7F4 */  .4byte func_ovl8_80373E24
  .incbin "ovl8.raw.bin", 0x1B398, 0x4
  /* 1B39C 1A904C 8038C7FC */  .4byte func_ovl8_80373EA8
  .incbin "ovl8.raw.bin", 0x1B3A0, 0x4
  /* 1B3A4 1A9054 8038C804 */  .4byte func_ovl8_80373930
  .incbin "ovl8.raw.bin", 0x1B3A8, 0x4
  /* 1B3AC 1A905C 8038C80C */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x1B3B0, 0x4
  /* 1B3B4 1A9064 8038C814 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x1B3B8, 0x4
  /* 1B3BC 1A906C 8038C81C */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x1B3C0, 0x4
  /* 1B3C4 1A9074 8038C824 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x1B3C8, 0x4
  /* 1B3CC 1A907C 8038C82C */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x1B3D0, 0x4
  /* 1B3D4 1A9084 8038C834 */  .4byte func_ovl8_80373AC4
  .incbin "ovl8.raw.bin", 0x1B3D8, 0x4
  /* 1B3DC 1A908C 8038C83C */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x1B3E0, 0x4
  /* 1B3E4 1A9094 8038C844 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x1B3E8, 0x4
  /* 1B3EC 1A909C 8038C84C */  .4byte func_ovl8_803743D8
  .incbin "ovl8.raw.bin", 0x1B3F0, 0x4
  /* 1B3F4 1A90A4 8038C854 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x1B3F8, 0x4
  /* 1B3FC 1A90AC 8038C85C */  .4byte func_ovl8_803743C0
  .incbin "ovl8.raw.bin", 0x1B400, 0x4
  /* 1B404 1A90B4 8038C864 */  .4byte func_ovl8_80383014
  .incbin "ovl8.raw.bin", 0x1B408, 0x4
  /* 1B40C 1A90BC 8038C86C */  .4byte func_ovl8_803831C8
  .incbin "ovl8.raw.bin", 0x1B410, 0x4
  /* 1B414 1A90C4 8038C874 */  .4byte func_ovl8_803832A4
  .incbin "ovl8.raw.bin", 0x1B418, 0x4
  /* 1B41C 1A90CC 8038C87C */  .4byte func_ovl8_80383300
  .incbin "ovl8.raw.bin", 0x1B420, 0x4
  /* 1B424 1A90D4 8038C884 */  .4byte func_ovl8_80383344
  .incbin "ovl8.raw.bin", 0x1B428, 0x8

glabel D_ovl8_8038C890
  .incbin "ovl8.raw.bin", 0x1B430, 0xC
  /* 1B43C 1A90EC 8038C89C */  .4byte func_ovl8_80382F70
  .incbin "ovl8.raw.bin", 0x1B440, 0x4
  /* 1B444 1A90F4 8038C8A4 */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x1B448, 0x4
  /* 1B44C 1A90FC 8038C8AC */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x1B450, 0x4
  /* 1B454 1A9104 8038C8B4 */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x1B458, 0x4
  /* 1B45C 1A910C 8038C8BC */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x1B460, 0x4
  /* 1B464 1A9114 8038C8C4 */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x1B468, 0x4
  /* 1B46C 1A911C 8038C8CC */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x1B470, 0x4
  /* 1B474 1A9124 8038C8D4 */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x1B478, 0x4
  /* 1B47C 1A912C 8038C8DC */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x1B480, 0x4
  /* 1B484 1A9134 8038C8E4 */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x1B488, 0x4
  /* 1B48C 1A913C 8038C8EC */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x1B490, 0x4
  /* 1B494 1A9144 8038C8F4 */  .4byte func_ovl8_8038300C
  .incbin "ovl8.raw.bin", 0x1B498, 0x4
  /* 1B49C 1A914C 8038C8FC */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x1B4A0, 0x4
  /* 1B4A4 1A9154 8038C904 */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x1B4A8, 0x4
  /* 1B4AC 1A915C 8038C90C */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x1B4B0, 0x4
  /* 1B4B4 1A9164 8038C914 */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x1B4B8, 0x4
  /* 1B4BC 1A916C 8038C91C */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x1B4C0, 0x4
  /* 1B4C4 1A9174 8038C924 */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x1B4C8, 0x4
  /* 1B4CC 1A917C 8038C92C */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1B4D0, 0x4
  /* 1B4D4 1A9184 8038C934 */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x1B4D8, 0x4
  /* 1B4DC 1A918C 8038C93C */  .4byte func_ovl8_80371C50
  .incbin "ovl8.raw.bin", 0x1B4E0, 0x4
  /* 1B4E4 1A9194 8038C944 */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x1B4E8, 0x4
  /* 1B4EC 1A919C 8038C94C */  .4byte func_ovl8_80371CB8
  .incbin "ovl8.raw.bin", 0x1B4F0, 0x4
  /* 1B4F4 1A91A4 8038C954 */  .4byte func_ovl8_80373640
  .incbin "ovl8.raw.bin", 0x1B4F8, 0x4
  /* 1B4FC 1A91AC 8038C95C */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x1B500, 0x4
  /* 1B504 1A91B4 8038C964 */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x1B508, 0x4
  /* 1B50C 1A91BC 8038C96C */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x1B510, 0x4
  /* 1B514 1A91C4 8038C974 */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x1B518, 0x4
  /* 1B51C 1A91CC 8038C97C */  .4byte func_ovl8_80383300
  .incbin "ovl8.raw.bin", 0x1B520, 0x4
  /* 1B524 1A91D4 8038C984 */  .4byte func_ovl8_80383344
  .incbin "ovl8.raw.bin", 0x1B528, 0x4
  /* 1B52C 1A91DC 8038C98C */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x1B530, 0x4
  /* 1B534 1A91E4 8038C994 */  .4byte func_ovl8_803831C8
  .incbin "ovl8.raw.bin", 0x1B538, 0x4
  /* 1B53C 1A91EC 8038C99C */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x1B540, 0x4
  /* 1B544 1A91F4 8038C9A4 */  .4byte func_ovl8_803832A4
  .incbin "ovl8.raw.bin", 0x1B548, 0x4
  /* 1B54C 1A91FC 8038C9AC */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x1B550, 0x4
  /* 1B554 1A9204 8038C9B4 */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x1B558, 0x4
  /* 1B55C 1A920C 8038C9BC */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x1B560, 0x4
  /* 1B564 1A9214 8038C9C4 */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x1B568, 0x4
  /* 1B56C 1A921C 8038C9CC */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x1B570, 0x4
  /* 1B574 1A9224 8038C9D4 */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x1B578, 0x4
  /* 1B57C 1A922C 8038C9DC */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x1B580, 0x8

glabel D_ovl8_8038C9E8
  .incbin "ovl8.raw.bin", 0x1B588, 0xC
  /* 1B594 1A9244 8038C9F4 */  .4byte func_ovl8_80382F70
  .incbin "ovl8.raw.bin", 0x1B598, 0x4
  /* 1B59C 1A924C 8038C9FC */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x1B5A0, 0x4
  /* 1B5A4 1A9254 8038CA04 */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x1B5A8, 0x8

glabel D_ovl8_8038CA10
  .incbin "ovl8.raw.bin", 0x1B5B0, 0xC
  /* 1B5BC 1A926C 8038CA1C */  .4byte func_ovl8_80383510
  .incbin "ovl8.raw.bin", 0x1B5C0, 0x4
  /* 1B5C4 1A9274 8038CA24 */  .4byte func_ovl8_80383BC4
  .incbin "ovl8.raw.bin", 0x1B5C8, 0x4
  /* 1B5CC 1A927C 8038CA2C */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x1B5D0, 0x4
  /* 1B5D4 1A9284 8038CA34 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1B5D8, 0x4
  /* 1B5DC 1A928C 8038CA3C */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x1B5E0, 0x4
  /* 1B5E4 1A9294 8038CA44 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x1B5E8, 0x4
  /* 1B5EC 1A929C 8038CA4C */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x1B5F0, 0x4
  /* 1B5F4 1A92A4 8038CA54 */  .4byte func_ovl8_80373694
  .incbin "ovl8.raw.bin", 0x1B5F8, 0x4
  /* 1B5FC 1A92AC 8038CA5C */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x1B600, 0x4
  /* 1B604 1A92B4 8038CA64 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x1B608, 0x4
  /* 1B60C 1A92BC 8038CA6C */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x1B610, 0x4
  /* 1B614 1A92C4 8038CA74 */  .4byte func_ovl8_80384000
  .incbin "ovl8.raw.bin", 0x1B618, 0x4
  /* 1B61C 1A92CC 8038CA7C */  .4byte func_ovl8_8037383C
  .incbin "ovl8.raw.bin", 0x1B620, 0x4
  /* 1B624 1A92D4 8038CA84 */  .4byte func_ovl8_80373930
  .incbin "ovl8.raw.bin", 0x1B628, 0x4
  /* 1B62C 1A92DC 8038CA8C */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x1B630, 0x4
  /* 1B634 1A92E4 8038CA94 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x1B638, 0x4
  /* 1B63C 1A92EC 8038CA9C */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x1B640, 0x4
  /* 1B644 1A92F4 8038CAA4 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x1B648, 0x4
  /* 1B64C 1A92FC 8038CAAC */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x1B650, 0x4
  /* 1B654 1A9304 8038CAB4 */  .4byte func_ovl8_80383FC8
  .incbin "ovl8.raw.bin", 0x1B658, 0x4
  /* 1B65C 1A930C 8038CABC */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x1B660, 0x4
  /* 1B664 1A9314 8038CAC4 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x1B668, 0x4
  /* 1B66C 1A931C 8038CACC */  .4byte func_ovl8_80373BC0
  .incbin "ovl8.raw.bin", 0x1B670, 0x4
  /* 1B674 1A9324 8038CAD4 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x1B678, 0x4
  /* 1B67C 1A932C 8038CADC */  .4byte func_ovl8_803835C4
  .incbin "ovl8.raw.bin", 0x1B680, 0x4
  /* 1B684 1A9334 8038CAE4 */  .4byte func_ovl8_80383618
  .incbin "ovl8.raw.bin", 0x1B688, 0x4
  /* 1B68C 1A933C 8038CAEC */  .4byte func_ovl8_803836D4
  .incbin "ovl8.raw.bin", 0x1B690, 0x4
  /* 1B694 1A9344 8038CAF4 */  .4byte func_ovl8_8038374C
  .incbin "ovl8.raw.bin", 0x1B698, 0x4
  /* 1B69C 1A934C 8038CAFC */  .4byte func_ovl8_803837F0
  .incbin "ovl8.raw.bin", 0x1B6A0, 0x4
  /* 1B6A4 1A9354 8038CB04 */  .4byte func_ovl8_8038388C
  .incbin "ovl8.raw.bin", 0x1B6A8, 0x4
  /* 1B6AC 1A935C 8038CB0C */  .4byte func_ovl8_803838B8
  .incbin "ovl8.raw.bin", 0x1B6B0, 0x4
  /* 1B6B4 1A9364 8038CB14 */  .4byte func_ovl8_803838E0
  .incbin "ovl8.raw.bin", 0x1B6B8, 0x4
  /* 1B6BC 1A936C 8038CB1C */  .4byte func_ovl8_803839D0
  .incbin "ovl8.raw.bin", 0x1B6C0, 0x4
  /* 1B6C4 1A9374 8038CB24 */  .4byte func_ovl8_80383A78
  .incbin "ovl8.raw.bin", 0x1B6C8, 0x4
  /* 1B6CC 1A937C 8038CB2C */  .4byte func_ovl8_80383A80
  .incbin "ovl8.raw.bin", 0x1B6D0, 0x4
  /* 1B6D4 1A9384 8038CB34 */  .4byte func_ovl8_80383D4C
  .incbin "ovl8.raw.bin", 0x1B6D8, 0x4
  /* 1B6DC 1A938C 8038CB3C */  .4byte func_ovl8_80383DD4
  .incbin "ovl8.raw.bin", 0x1B6E0, 0x4
  /* 1B6E4 1A9394 8038CB44 */  .4byte func_ovl8_80383E98
  .incbin "ovl8.raw.bin", 0x1B6E8, 0x4
  /* 1B6EC 1A939C 8038CB4C */  .4byte func_ovl8_80383F74
  .incbin "ovl8.raw.bin", 0x1B6F0, 0x8

glabel D_ovl8_8038CB58
  .incbin "ovl8.raw.bin", 0x1B6F8, 0xC
  /* 1B704 1A93B4 8038CB64 */  .4byte func_ovl8_80383510
  .incbin "ovl8.raw.bin", 0x1B708, 0x4
  /* 1B70C 1A93BC 8038CB6C */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x1B710, 0x4
  /* 1B714 1A93C4 8038CB74 */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x1B718, 0x4
  /* 1B71C 1A93CC 8038CB7C */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x1B720, 0x4
  /* 1B724 1A93D4 8038CB84 */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x1B728, 0x4
  /* 1B72C 1A93DC 8038CB8C */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x1B730, 0x4
  /* 1B734 1A93E4 8038CB94 */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x1B738, 0x4
  /* 1B73C 1A93EC 8038CB9C */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x1B740, 0x4
  /* 1B744 1A93F4 8038CBA4 */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x1B748, 0x4
  /* 1B74C 1A93FC 8038CBAC */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x1B750, 0x4
  /* 1B754 1A9404 8038CBB4 */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x1B758, 0x4
  /* 1B75C 1A940C 8038CBBC */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x1B760, 0x4
  /* 1B764 1A9414 8038CBC4 */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x1B768, 0x4
  /* 1B76C 1A941C 8038CBCC */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x1B770, 0x4
  /* 1B774 1A9424 8038CBD4 */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x1B778, 0x4
  /* 1B77C 1A942C 8038CBDC */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x1B780, 0x4
  /* 1B784 1A9434 8038CBE4 */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x1B788, 0x4
  /* 1B78C 1A943C 8038CBEC */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x1B790, 0x4
  /* 1B794 1A9444 8038CBF4 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1B798, 0x4
  /* 1B79C 1A944C 8038CBFC */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x1B7A0, 0x4
  /* 1B7A4 1A9454 8038CC04 */  .4byte func_ovl8_80371C50
  .incbin "ovl8.raw.bin", 0x1B7A8, 0x4
  /* 1B7AC 1A945C 8038CC0C */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x1B7B0, 0x4
  /* 1B7B4 1A9464 8038CC14 */  .4byte func_ovl8_80371CB8
  .incbin "ovl8.raw.bin", 0x1B7B8, 0x4
  /* 1B7BC 1A946C 8038CC1C */  .4byte func_ovl8_80383BC4
  .incbin "ovl8.raw.bin", 0x1B7C0, 0x4
  /* 1B7C4 1A9474 8038CC24 */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x1B7C8, 0x4
  /* 1B7CC 1A947C 8038CC2C */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x1B7D0, 0x4
  /* 1B7D4 1A9484 8038CC34 */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x1B7D8, 0x4
  /* 1B7DC 1A948C 8038CC3C */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x1B7E0, 0x4
  /* 1B7E4 1A9494 8038CC44 */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x1B7E8, 0x4
  /* 1B7EC 1A949C 8038CC4C */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x1B7F0, 0x4
  /* 1B7F4 1A94A4 8038CC54 */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x1B7F8, 0x4
  /* 1B7FC 1A94AC 8038CC5C */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x1B800, 0x4
  /* 1B804 1A94B4 8038CC64 */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x1B808, 0x4
  /* 1B80C 1A94BC 8038CC6C */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x1B810, 0x4
  /* 1B814 1A94C4 8038CC74 */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x1B818, 0x4
  /* 1B81C 1A94CC 8038CC7C */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x1B820, 0x4
  /* 1B824 1A94D4 8038CC84 */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x1B828, 0x4
  /* 1B82C 1A94DC 8038CC8C */  .4byte func_ovl8_80383D4C
  .incbin "ovl8.raw.bin", 0x1B830, 0x4
  /* 1B834 1A94E4 8038CC94 */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x1B838, 0x4
  /* 1B83C 1A94EC 8038CC9C */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x1B840, 0x4
  /* 1B844 1A94F4 8038CCA4 */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x1B848, 0x8

glabel D_ovl8_8038CCB0
  .incbin "ovl8.raw.bin", 0x1B850, 0xC
  /* 1B85C 1A950C 8038CCBC */  .4byte func_ovl8_80383510
  .incbin "ovl8.raw.bin", 0x1B860, 0x4
  /* 1B864 1A9514 8038CCC4 */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x1B868, 0x4
  /* 1B86C 1A951C 8038CCCC */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x1B870, 0x8

glabel D_ovl8_8038CCD8
  .incbin "ovl8.raw.bin", 0x1B878, 0x4
  /* 1B87C 1A952C 8038CCDC */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x1B880, 0x8
  /* 1B888 1A9538 8038CCE8 */  .4byte func_80020000
  .incbin "ovl8.raw.bin", 0x1B88C, 0x14
  /* 1B8A0 1A9550 8038CD00 */  .4byte 0x80020001 # Warning: missing label
  .incbin "ovl8.raw.bin", 0x1B8A4, 0x10
  /* 1B8B4 1A9564 8038CD14 */  .4byte 0x80010000
  /* 1B8B8 1A9568 8038CD18 */  .4byte 0x80010000
  .incbin "ovl8.raw.bin", 0x1B8BC, 0x1C
  /* 1B8D8 1A9588 8038CD38 */  .4byte 0x80010001 # Warning: missing label
  /* 1B8DC 1A958C 8038CD3C */  .4byte 0x80010001 # Warning: missing label
  .incbin "ovl8.raw.bin", 0x1B8E0, 0x20
  /* 1B900 1A95B0 8038CD60 */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x1B904, 0x8
  /* 1B90C 1A95BC 8038CD6C */  .4byte 0x80008000
  .incbin "ovl8.raw.bin", 0x1B910, 0x8
  /* 1B918 1A95C8 8038CD78 */  .4byte 0x80028002 # Warning: missing label
  .incbin "ovl8.raw.bin", 0x1B91C, 0x10

glabel D_ovl8_8038CD8C
  .incbin "ovl8.raw.bin", 0x1B92C, 0x4

glabel D_ovl8_8038CD90
  .incbin "ovl8.raw.bin", 0x1B930, 0xC
  /* 1B93C 1A95EC 8038CD9C */  .4byte func_ovl8_80384340
  .incbin "ovl8.raw.bin", 0x1B940, 0x4
  /* 1B944 1A95F4 8038CDA4 */  .4byte func_ovl8_80383BC4
  .incbin "ovl8.raw.bin", 0x1B948, 0x4
  /* 1B94C 1A95FC 8038CDAC */  .4byte func_ovl8_8038440C
  .incbin "ovl8.raw.bin", 0x1B950, 0x4
  /* 1B954 1A9604 8038CDB4 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1B958, 0x4
  /* 1B95C 1A960C 8038CDBC */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x1B960, 0x4
  /* 1B964 1A9614 8038CDC4 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x1B968, 0x4
  /* 1B96C 1A961C 8038CDCC */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x1B970, 0x4
  /* 1B974 1A9624 8038CDD4 */  .4byte func_ovl8_80373694
  .incbin "ovl8.raw.bin", 0x1B978, 0x4
  /* 1B97C 1A962C 8038CDDC */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x1B980, 0x4
  /* 1B984 1A9634 8038CDE4 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x1B988, 0x4
  /* 1B98C 1A963C 8038CDEC */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x1B990, 0x4
  /* 1B994 1A9644 8038CDF4 */  .4byte func_ovl8_80384000
  .incbin "ovl8.raw.bin", 0x1B998, 0x4
  /* 1B99C 1A964C 8038CDFC */  .4byte func_ovl8_8037383C
  .incbin "ovl8.raw.bin", 0x1B9A0, 0x4
  /* 1B9A4 1A9654 8038CE04 */  .4byte func_ovl8_80373930
  .incbin "ovl8.raw.bin", 0x1B9A8, 0x4
  /* 1B9AC 1A965C 8038CE0C */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x1B9B0, 0x4
  /* 1B9B4 1A9664 8038CE14 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x1B9B8, 0x4
  /* 1B9BC 1A966C 8038CE1C */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x1B9C0, 0x4
  /* 1B9C4 1A9674 8038CE24 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x1B9C8, 0x4
  /* 1B9CC 1A967C 8038CE2C */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x1B9D0, 0x4
  /* 1B9D4 1A9684 8038CE34 */  .4byte func_ovl8_80383FC8
  .incbin "ovl8.raw.bin", 0x1B9D8, 0x4
  /* 1B9DC 1A968C 8038CE3C */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x1B9E0, 0x4
  /* 1B9E4 1A9694 8038CE44 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x1B9E8, 0x4
  /* 1B9EC 1A969C 8038CE4C */  .4byte func_ovl8_80373BC0
  .incbin "ovl8.raw.bin", 0x1B9F0, 0x4
  /* 1B9F4 1A96A4 8038CE54 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x1B9F8, 0x4
  /* 1B9FC 1A96AC 8038CE5C */  .4byte func_ovl8_803835C4
  .incbin "ovl8.raw.bin", 0x1BA00, 0x4
  /* 1BA04 1A96B4 8038CE64 */  .4byte func_ovl8_80383618
  .incbin "ovl8.raw.bin", 0x1BA08, 0x4
  /* 1BA0C 1A96BC 8038CE6C */  .4byte func_ovl8_803836D4
  .incbin "ovl8.raw.bin", 0x1BA10, 0x4
  /* 1BA14 1A96C4 8038CE74 */  .4byte func_ovl8_8038374C
  .incbin "ovl8.raw.bin", 0x1BA18, 0x4
  /* 1BA1C 1A96CC 8038CE7C */  .4byte func_ovl8_803837F0
  .incbin "ovl8.raw.bin", 0x1BA20, 0x4
  /* 1BA24 1A96D4 8038CE84 */  .4byte func_ovl8_8038388C
  .incbin "ovl8.raw.bin", 0x1BA28, 0x4
  /* 1BA2C 1A96DC 8038CE8C */  .4byte func_ovl8_803838B8
  .incbin "ovl8.raw.bin", 0x1BA30, 0x4
  /* 1BA34 1A96E4 8038CE94 */  .4byte func_ovl8_803838E0
  .incbin "ovl8.raw.bin", 0x1BA38, 0x4
  /* 1BA3C 1A96EC 8038CE9C */  .4byte func_ovl8_803839D0
  .incbin "ovl8.raw.bin", 0x1BA40, 0x4
  /* 1BA44 1A96F4 8038CEA4 */  .4byte func_ovl8_80383A78
  .incbin "ovl8.raw.bin", 0x1BA48, 0x4
  /* 1BA4C 1A96FC 8038CEAC */  .4byte func_ovl8_80383A80
  .incbin "ovl8.raw.bin", 0x1BA50, 0x4
  /* 1BA54 1A9704 8038CEB4 */  .4byte func_ovl8_80383D4C
  .incbin "ovl8.raw.bin", 0x1BA58, 0x4
  /* 1BA5C 1A970C 8038CEBC */  .4byte func_ovl8_80383DD4
  .incbin "ovl8.raw.bin", 0x1BA60, 0x4
  /* 1BA64 1A9714 8038CEC4 */  .4byte func_ovl8_80383E98
  .incbin "ovl8.raw.bin", 0x1BA68, 0x4
  /* 1BA6C 1A971C 8038CECC */  .4byte func_ovl8_80383F74
  .incbin "ovl8.raw.bin", 0x1BA70, 0x4
  /* 1BA74 1A9724 8038CED4 */  .4byte func_ovl8_8038442C
  .incbin "ovl8.raw.bin", 0x1BA78, 0x8

glabel D_ovl8_8038CEE0
  .incbin "ovl8.raw.bin", 0x1BA80, 0xC
  /* 1BA8C 1A973C 8038CEEC */  .4byte func_ovl8_80384340
  .incbin "ovl8.raw.bin", 0x1BA90, 0x4
  /* 1BA94 1A9744 8038CEF4 */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x1BA98, 0x4
  /* 1BA9C 1A974C 8038CEFC */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x1BAA0, 0x4
  /* 1BAA4 1A9754 8038CF04 */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x1BAA8, 0x4
  /* 1BAAC 1A975C 8038CF0C */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x1BAB0, 0x4
  /* 1BAB4 1A9764 8038CF14 */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x1BAB8, 0x4
  /* 1BABC 1A976C 8038CF1C */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x1BAC0, 0x4
  /* 1BAC4 1A9774 8038CF24 */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x1BAC8, 0x4
  /* 1BACC 1A977C 8038CF2C */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x1BAD0, 0x4
  /* 1BAD4 1A9784 8038CF34 */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x1BAD8, 0x4
  /* 1BADC 1A978C 8038CF3C */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x1BAE0, 0x4
  /* 1BAE4 1A9794 8038CF44 */  .4byte func_ovl8_8038440C
  .incbin "ovl8.raw.bin", 0x1BAE8, 0x4
  /* 1BAEC 1A979C 8038CF4C */  .4byte func_ovl8_8038442C
  .incbin "ovl8.raw.bin", 0x1BAF0, 0x4
  /* 1BAF4 1A97A4 8038CF54 */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x1BAF8, 0x4
  /* 1BAFC 1A97AC 8038CF5C */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x1BB00, 0x4
  /* 1BB04 1A97B4 8038CF64 */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x1BB08, 0x4
  /* 1BB0C 1A97BC 8038CF6C */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x1BB10, 0x4
  /* 1BB14 1A97C4 8038CF74 */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x1BB18, 0x4
  /* 1BB1C 1A97CC 8038CF7C */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1BB20, 0x4
  /* 1BB24 1A97D4 8038CF84 */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x1BB28, 0x4
  /* 1BB2C 1A97DC 8038CF8C */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x1BB30, 0x4
  /* 1BB34 1A97E4 8038CF94 */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x1BB38, 0x4
  /* 1BB3C 1A97EC 8038CF9C */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x1BB40, 0x4
  /* 1BB44 1A97F4 8038CFA4 */  .4byte func_ovl8_80383BC4
  .incbin "ovl8.raw.bin", 0x1BB48, 0x4
  /* 1BB4C 1A97FC 8038CFAC */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x1BB50, 0x4
  /* 1BB54 1A9804 8038CFB4 */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x1BB58, 0x4
  /* 1BB5C 1A980C 8038CFBC */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x1BB60, 0x4
  /* 1BB64 1A9814 8038CFC4 */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x1BB68, 0x4
  /* 1BB6C 1A981C 8038CFCC */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x1BB70, 0x4
  /* 1BB74 1A9824 8038CFD4 */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x1BB78, 0x4
  /* 1BB7C 1A982C 8038CFDC */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x1BB80, 0x4
  /* 1BB84 1A9834 8038CFE4 */  .4byte func_ovl8_803726CC
  .incbin "ovl8.raw.bin", 0x1BB88, 0x4
  /* 1BB8C 1A983C 8038CFEC */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x1BB90, 0x4
  /* 1BB94 1A9844 8038CFF4 */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x1BB98, 0x4
  /* 1BB9C 1A984C 8038CFFC */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x1BBA0, 0x4
  /* 1BBA4 1A9854 8038D004 */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x1BBA8, 0x4
  /* 1BBAC 1A985C 8038D00C */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x1BBB0, 0x4
  /* 1BBB4 1A9864 8038D014 */  .4byte func_ovl8_80383D4C
  .incbin "ovl8.raw.bin", 0x1BBB8, 0x4
  /* 1BBBC 1A986C 8038D01C */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x1BBC0, 0x4
  /* 1BBC4 1A9874 8038D024 */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x1BBC8, 0x4
  /* 1BBCC 1A987C 8038D02C */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x1BBD0, 0x8

glabel D_ovl8_8038D038
  .incbin "ovl8.raw.bin", 0x1BBD8, 0xC
  /* 1BBE4 1A9894 8038D044 */  .4byte func_ovl8_80384340
  .incbin "ovl8.raw.bin", 0x1BBE8, 0x4
  /* 1BBEC 1A989C 8038D04C */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x1BBF0, 0x4
  /* 1BBF4 1A98A4 8038D054 */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x1BBF8, 0x8

glabel D_ovl8_8038D060
  .incbin "ovl8.raw.bin", 0x1BC00, 0xC
  /* 1BC0C 1A98BC 8038D06C */  .4byte func_ovl8_80384340
  .incbin "ovl8.raw.bin", 0x1BC10, 0x4
  /* 1BC14 1A98C4 8038D074 */  .4byte func_ovl8_8038440C
  .incbin "ovl8.raw.bin", 0x1BC18, 0x4
  /* 1BC1C 1A98CC 8038D07C */  .4byte func_ovl8_803721E8
  .incbin "ovl8.raw.bin", 0x1BC20, 0x4
  /* 1BC24 1A98D4 8038D084 */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x1BC28, 0x4
  /* 1BC2C 1A98DC 8038D08C */  .4byte func_ovl8_80372250
  .incbin "ovl8.raw.bin", 0x1BC30, 0x4
  /* 1BC34 1A98E4 8038D094 */  .4byte func_ovl8_803722A0
  .incbin "ovl8.raw.bin", 0x1BC38, 0x4
  /* 1BC3C 1A98EC 8038D09C */  .4byte func_ovl8_803722F0
  .incbin "ovl8.raw.bin", 0x1BC40, 0x4
  /* 1BC44 1A98F4 8038D0A4 */  .4byte func_ovl8_80372348
  .incbin "ovl8.raw.bin", 0x1BC48, 0x4
  /* 1BC4C 1A98FC 8038D0AC */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x1BC50, 0x4
  /* 1BC54 1A9904 8038D0B4 */  .4byte func_ovl8_80372360
  .incbin "ovl8.raw.bin", 0x1BC58, 0x4
  /* 1BC5C 1A990C 8038D0BC */  .4byte func_ovl8_803726CC
  .incbin "ovl8.raw.bin", 0x1BC60, 0x10

glabel D_ovl8_8038D0D0
  .incbin "ovl8.raw.bin", 0x1BC70, 0xC
  /* 1BC7C 1A992C 8038D0DC */  .4byte func_ovl8_80384654
  .incbin "ovl8.raw.bin", 0x1BC80, 0x4
  /* 1BC84 1A9934 8038D0E4 */  .4byte func_ovl8_80383BC4
  .incbin "ovl8.raw.bin", 0x1BC88, 0x4
  /* 1BC8C 1A993C 8038D0EC */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x1BC90, 0x4
  /* 1BC94 1A9944 8038D0F4 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1BC98, 0x4
  /* 1BC9C 1A994C 8038D0FC */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x1BCA0, 0x4
  /* 1BCA4 1A9954 8038D104 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x1BCA8, 0x4
  /* 1BCAC 1A995C 8038D10C */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x1BCB0, 0x4
  /* 1BCB4 1A9964 8038D114 */  .4byte func_ovl8_80373694
  .incbin "ovl8.raw.bin", 0x1BCB8, 0x4
  /* 1BCBC 1A996C 8038D11C */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x1BCC0, 0x4
  /* 1BCC4 1A9974 8038D124 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x1BCC8, 0x4
  /* 1BCCC 1A997C 8038D12C */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x1BCD0, 0x4
  /* 1BCD4 1A9984 8038D134 */  .4byte func_ovl8_80384000
  .incbin "ovl8.raw.bin", 0x1BCD8, 0x4
  /* 1BCDC 1A998C 8038D13C */  .4byte func_ovl8_8037383C
  .incbin "ovl8.raw.bin", 0x1BCE0, 0x4
  /* 1BCE4 1A9994 8038D144 */  .4byte func_ovl8_80373930
  .incbin "ovl8.raw.bin", 0x1BCE8, 0x4
  /* 1BCEC 1A999C 8038D14C */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x1BCF0, 0x4
  /* 1BCF4 1A99A4 8038D154 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x1BCF8, 0x4
  /* 1BCFC 1A99AC 8038D15C */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x1BD00, 0x4
  /* 1BD04 1A99B4 8038D164 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x1BD08, 0x4
  /* 1BD0C 1A99BC 8038D16C */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x1BD10, 0x4
  /* 1BD14 1A99C4 8038D174 */  .4byte func_ovl8_80383FC8
  .incbin "ovl8.raw.bin", 0x1BD18, 0x4
  /* 1BD1C 1A99CC 8038D17C */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x1BD20, 0x4
  /* 1BD24 1A99D4 8038D184 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x1BD28, 0x4
  /* 1BD2C 1A99DC 8038D18C */  .4byte func_ovl8_80373BC0
  .incbin "ovl8.raw.bin", 0x1BD30, 0x4
  /* 1BD34 1A99E4 8038D194 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x1BD38, 0x4
  /* 1BD3C 1A99EC 8038D19C */  .4byte func_ovl8_803835C4
  .incbin "ovl8.raw.bin", 0x1BD40, 0x4
  /* 1BD44 1A99F4 8038D1A4 */  .4byte func_ovl8_80383618
  .incbin "ovl8.raw.bin", 0x1BD48, 0x4
  /* 1BD4C 1A99FC 8038D1AC */  .4byte func_ovl8_803836D4
  .incbin "ovl8.raw.bin", 0x1BD50, 0x4
  /* 1BD54 1A9A04 8038D1B4 */  .4byte func_ovl8_8038374C
  .incbin "ovl8.raw.bin", 0x1BD58, 0x4
  /* 1BD5C 1A9A0C 8038D1BC */  .4byte func_ovl8_803837F0
  .incbin "ovl8.raw.bin", 0x1BD60, 0x4
  /* 1BD64 1A9A14 8038D1C4 */  .4byte func_ovl8_8038388C
  .incbin "ovl8.raw.bin", 0x1BD68, 0x4
  /* 1BD6C 1A9A1C 8038D1CC */  .4byte func_ovl8_803838B8
  .incbin "ovl8.raw.bin", 0x1BD70, 0x4
  /* 1BD74 1A9A24 8038D1D4 */  .4byte func_ovl8_803838E0
  .incbin "ovl8.raw.bin", 0x1BD78, 0x4
  /* 1BD7C 1A9A2C 8038D1DC */  .4byte func_ovl8_803839D0
  .incbin "ovl8.raw.bin", 0x1BD80, 0x4
  /* 1BD84 1A9A34 8038D1E4 */  .4byte func_ovl8_80383A78
  .incbin "ovl8.raw.bin", 0x1BD88, 0x4
  /* 1BD8C 1A9A3C 8038D1EC */  .4byte func_ovl8_80383A80
  .incbin "ovl8.raw.bin", 0x1BD90, 0x4
  /* 1BD94 1A9A44 8038D1F4 */  .4byte func_ovl8_80383D4C
  .incbin "ovl8.raw.bin", 0x1BD98, 0x4
  /* 1BD9C 1A9A4C 8038D1FC */  .4byte func_ovl8_80383DD4
  .incbin "ovl8.raw.bin", 0x1BDA0, 0x4
  /* 1BDA4 1A9A54 8038D204 */  .4byte func_ovl8_80383E98
  .incbin "ovl8.raw.bin", 0x1BDA8, 0x4
  /* 1BDAC 1A9A5C 8038D20C */  .4byte func_ovl8_80383F74
  .incbin "ovl8.raw.bin", 0x1BDB0, 0x8

glabel D_ovl8_8038D218
  .incbin "ovl8.raw.bin", 0x1BDB8, 0xC
  /* 1BDC4 1A9A74 8038D224 */  .4byte func_ovl8_80384654
  .incbin "ovl8.raw.bin", 0x1BDC8, 0x4
  /* 1BDCC 1A9A7C 8038D22C */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x1BDD0, 0x4
  /* 1BDD4 1A9A84 8038D234 */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x1BDD8, 0x4
  /* 1BDDC 1A9A8C 8038D23C */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x1BDE0, 0x4
  /* 1BDE4 1A9A94 8038D244 */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x1BDE8, 0x4
  /* 1BDEC 1A9A9C 8038D24C */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x1BDF0, 0x4
  /* 1BDF4 1A9AA4 8038D254 */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x1BDF8, 0x4
  /* 1BDFC 1A9AAC 8038D25C */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x1BE00, 0x4
  /* 1BE04 1A9AB4 8038D264 */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x1BE08, 0x4
  /* 1BE0C 1A9ABC 8038D26C */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x1BE10, 0x4
  /* 1BE14 1A9AC4 8038D274 */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x1BE18, 0x4
  /* 1BE1C 1A9ACC 8038D27C */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x1BE20, 0x4
  /* 1BE24 1A9AD4 8038D284 */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x1BE28, 0x4
  /* 1BE2C 1A9ADC 8038D28C */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x1BE30, 0x4
  /* 1BE34 1A9AE4 8038D294 */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x1BE38, 0x4
  /* 1BE3C 1A9AEC 8038D29C */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x1BE40, 0x4
  /* 1BE44 1A9AF4 8038D2A4 */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x1BE48, 0x4
  /* 1BE4C 1A9AFC 8038D2AC */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x1BE50, 0x4
  /* 1BE54 1A9B04 8038D2B4 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1BE58, 0x4
  /* 1BE5C 1A9B0C 8038D2BC */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x1BE60, 0x4
  /* 1BE64 1A9B14 8038D2C4 */  .4byte func_ovl8_80371C50
  .incbin "ovl8.raw.bin", 0x1BE68, 0x4
  /* 1BE6C 1A9B1C 8038D2CC */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x1BE70, 0x4
  /* 1BE74 1A9B24 8038D2D4 */  .4byte func_ovl8_80371CB8
  .incbin "ovl8.raw.bin", 0x1BE78, 0x4
  /* 1BE7C 1A9B2C 8038D2DC */  .4byte func_ovl8_80383BC4
  .incbin "ovl8.raw.bin", 0x1BE80, 0x4
  /* 1BE84 1A9B34 8038D2E4 */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x1BE88, 0x4
  /* 1BE8C 1A9B3C 8038D2EC */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x1BE90, 0x4
  /* 1BE94 1A9B44 8038D2F4 */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x1BE98, 0x4
  /* 1BE9C 1A9B4C 8038D2FC */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x1BEA0, 0x4
  /* 1BEA4 1A9B54 8038D304 */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x1BEA8, 0x4
  /* 1BEAC 1A9B5C 8038D30C */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x1BEB0, 0x4
  /* 1BEB4 1A9B64 8038D314 */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x1BEB8, 0x4
  /* 1BEBC 1A9B6C 8038D31C */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x1BEC0, 0x4
  /* 1BEC4 1A9B74 8038D324 */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x1BEC8, 0x4
  /* 1BECC 1A9B7C 8038D32C */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x1BED0, 0x4
  /* 1BED4 1A9B84 8038D334 */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x1BED8, 0x4
  /* 1BEDC 1A9B8C 8038D33C */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x1BEE0, 0x4
  /* 1BEE4 1A9B94 8038D344 */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x1BEE8, 0x4
  /* 1BEEC 1A9B9C 8038D34C */  .4byte func_ovl8_80383D4C
  .incbin "ovl8.raw.bin", 0x1BEF0, 0x4
  /* 1BEF4 1A9BA4 8038D354 */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x1BEF8, 0x4
  /* 1BEFC 1A9BAC 8038D35C */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x1BF00, 0x4
  /* 1BF04 1A9BB4 8038D364 */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x1BF08, 0x8

glabel D_ovl8_8038D370
  .incbin "ovl8.raw.bin", 0x1BF10, 0xC
  /* 1BF1C 1A9BCC 8038D37C */  .4byte func_ovl8_80384654
  .incbin "ovl8.raw.bin", 0x1BF20, 0x4
  /* 1BF24 1A9BD4 8038D384 */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x1BF28, 0x4
  /* 1BF2C 1A9BDC 8038D38C */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x1BF30, 0x10

glabel D_ovl8_8038D3A0
  .incbin "ovl8.raw.bin", 0x1BF40, 0xC
  /* 1BF4C 1A9BFC 8038D3AC */  .4byte func_ovl8_803848CC
  .incbin "ovl8.raw.bin", 0x1BF50, 0x4
  /* 1BF54 1A9C04 8038D3B4 */  .4byte func_ovl8_80384968
  .incbin "ovl8.raw.bin", 0x1BF58, 0x4
  /* 1BF5C 1A9C0C 8038D3BC */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x1BF60, 0x4
  /* 1BF64 1A9C14 8038D3C4 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1BF68, 0x4
  /* 1BF6C 1A9C1C 8038D3CC */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x1BF70, 0x4
  /* 1BF74 1A9C24 8038D3D4 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x1BF78, 0x4
  /* 1BF7C 1A9C2C 8038D3DC */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x1BF80, 0x4
  /* 1BF84 1A9C34 8038D3E4 */  .4byte func_ovl8_80373694
  .incbin "ovl8.raw.bin", 0x1BF88, 0x4
  /* 1BF8C 1A9C3C 8038D3EC */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x1BF90, 0x4
  /* 1BF94 1A9C44 8038D3F4 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x1BF98, 0x4
  /* 1BF9C 1A9C4C 8038D3FC */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x1BFA0, 0x4
  /* 1BFA4 1A9C54 8038D404 */  .4byte func_ovl8_80385024
  .incbin "ovl8.raw.bin", 0x1BFA8, 0x4
  /* 1BFAC 1A9C5C 8038D40C */  .4byte func_ovl8_8037383C
  .incbin "ovl8.raw.bin", 0x1BFB0, 0x4
  /* 1BFB4 1A9C64 8038D414 */  .4byte func_ovl8_80373930
  .incbin "ovl8.raw.bin", 0x1BFB8, 0x4
  /* 1BFBC 1A9C6C 8038D41C */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x1BFC0, 0x4
  /* 1BFC4 1A9C74 8038D424 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x1BFC8, 0x4
  /* 1BFCC 1A9C7C 8038D42C */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x1BFD0, 0x4
  /* 1BFD4 1A9C84 8038D434 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x1BFD8, 0x4
  /* 1BFDC 1A9C8C 8038D43C */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x1BFE0, 0x4
  /* 1BFE4 1A9C94 8038D444 */  .4byte func_ovl8_80384F90
  .incbin "ovl8.raw.bin", 0x1BFE8, 0x4
  /* 1BFEC 1A9C9C 8038D44C */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x1BFF0, 0x4
  /* 1BFF4 1A9CA4 8038D454 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x1BFF8, 0x4
  /* 1BFFC 1A9CAC 8038D45C */  .4byte func_ovl8_80373BC0
  .incbin "ovl8.raw.bin", 0x1C000, 0x4
  /* 1C004 1A9CB4 8038D464 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x1C008, 0x4
  /* 1C00C 1A9CBC 8038D46C */  .4byte func_ovl8_80384AE8
  .incbin "ovl8.raw.bin", 0x1C010, 0x4
  /* 1C014 1A9CC4 8038D474 */  .4byte func_ovl8_80384B90
  .incbin "ovl8.raw.bin", 0x1C018, 0x4
  /* 1C01C 1A9CCC 8038D47C */  .4byte func_ovl8_80384BD4
  .incbin "ovl8.raw.bin", 0x1C020, 0x4
  /* 1C024 1A9CD4 8038D484 */  .4byte func_ovl8_80384C0C
  .incbin "ovl8.raw.bin", 0x1C028, 0x4
  /* 1C02C 1A9CDC 8038D48C */  .4byte func_ovl8_80384C44
  .incbin "ovl8.raw.bin", 0x1C030, 0x4
  /* 1C034 1A9CE4 8038D494 */  .4byte func_ovl8_80384C4C
  .incbin "ovl8.raw.bin", 0x1C038, 0x4
  /* 1C03C 1A9CEC 8038D49C */  .4byte func_ovl8_80384D58
  .incbin "ovl8.raw.bin", 0x1C040, 0x4
  /* 1C044 1A9CF4 8038D4A4 */  .4byte func_ovl8_80384DC4
  .incbin "ovl8.raw.bin", 0x1C048, 0x4
  /* 1C04C 1A9CFC 8038D4AC */  .4byte func_ovl8_80384E30
  .incbin "ovl8.raw.bin", 0x1C050, 0x4
  /* 1C054 1A9D04 8038D4B4 */  .4byte func_ovl8_80384F3C
  .incbin "ovl8.raw.bin", 0x1C058, 0x8

glabel D_ovl8_8038D4C0
  .incbin "ovl8.raw.bin", 0x1C060, 0xC
  /* 1C06C 1A9D1C 8038D4CC */  .4byte func_ovl8_803848CC
  .incbin "ovl8.raw.bin", 0x1C070, 0x4
  /* 1C074 1A9D24 8038D4D4 */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x1C078, 0x4
  /* 1C07C 1A9D2C 8038D4DC */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x1C080, 0x4
  /* 1C084 1A9D34 8038D4E4 */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x1C088, 0x4
  /* 1C08C 1A9D3C 8038D4EC */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x1C090, 0x4
  /* 1C094 1A9D44 8038D4F4 */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x1C098, 0x4
  /* 1C09C 1A9D4C 8038D4FC */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x1C0A0, 0x4
  /* 1C0A4 1A9D54 8038D504 */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x1C0A8, 0x4
  /* 1C0AC 1A9D5C 8038D50C */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x1C0B0, 0x4
  /* 1C0B4 1A9D64 8038D514 */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x1C0B8, 0x4
  /* 1C0BC 1A9D6C 8038D51C */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x1C0C0, 0x4
  /* 1C0C4 1A9D74 8038D524 */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x1C0C8, 0x4
  /* 1C0CC 1A9D7C 8038D52C */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x1C0D0, 0x4
  /* 1C0D4 1A9D84 8038D534 */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x1C0D8, 0x4
  /* 1C0DC 1A9D8C 8038D53C */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x1C0E0, 0x4
  /* 1C0E4 1A9D94 8038D544 */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x1C0E8, 0x4
  /* 1C0EC 1A9D9C 8038D54C */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x1C0F0, 0x4
  /* 1C0F4 1A9DA4 8038D554 */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x1C0F8, 0x4
  /* 1C0FC 1A9DAC 8038D55C */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1C100, 0x4
  /* 1C104 1A9DB4 8038D564 */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x1C108, 0x4
  /* 1C10C 1A9DBC 8038D56C */  .4byte func_ovl8_80371C50
  .incbin "ovl8.raw.bin", 0x1C110, 0x4
  /* 1C114 1A9DC4 8038D574 */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x1C118, 0x4
  /* 1C11C 1A9DCC 8038D57C */  .4byte func_ovl8_80371CB8
  .incbin "ovl8.raw.bin", 0x1C120, 0x4
  /* 1C124 1A9DD4 8038D584 */  .4byte func_ovl8_80384968
  .incbin "ovl8.raw.bin", 0x1C128, 0x4
  /* 1C12C 1A9DDC 8038D58C */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x1C130, 0x4
  /* 1C134 1A9DE4 8038D594 */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x1C138, 0x4
  /* 1C13C 1A9DEC 8038D59C */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x1C140, 0x4
  /* 1C144 1A9DF4 8038D5A4 */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x1C148, 0x4
  /* 1C14C 1A9DFC 8038D5AC */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x1C150, 0x4
  /* 1C154 1A9E04 8038D5B4 */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x1C158, 0x4
  /* 1C15C 1A9E0C 8038D5BC */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x1C160, 0x4
  /* 1C164 1A9E14 8038D5C4 */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x1C168, 0x4
  /* 1C16C 1A9E1C 8038D5CC */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x1C170, 0x4
  /* 1C174 1A9E24 8038D5D4 */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x1C178, 0x4
  /* 1C17C 1A9E2C 8038D5DC */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x1C180, 0x4
  /* 1C184 1A9E34 8038D5E4 */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x1C188, 0x4
  /* 1C18C 1A9E3C 8038D5EC */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x1C190, 0x4
  /* 1C194 1A9E44 8038D5F4 */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x1C198, 0x4
  /* 1C19C 1A9E4C 8038D5FC */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x1C1A0, 0x4
  /* 1C1A4 1A9E54 8038D604 */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x1C1A8, 0x4
  /* 1C1AC 1A9E5C 8038D60C */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x1C1B0, 0x8

glabel D_ovl8_8038D618
  .incbin "ovl8.raw.bin", 0x1C1B8, 0xC
  /* 1C1C4 1A9E74 8038D624 */  .4byte func_ovl8_803848CC
  .incbin "ovl8.raw.bin", 0x1C1C8, 0x4
  /* 1C1CC 1A9E7C 8038D62C */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x1C1D0, 0x4
  /* 1C1D4 1A9E84 8038D634 */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x1C1D8, 0x8

glabel D_ovl8_8038D640
  .incbin "ovl8.raw.bin", 0x1C1E0, 0x10

glabel D_ovl8_8038D650
  .incbin "ovl8.raw.bin", 0x1C1F0, 0xC
  /* 1C1FC 1A9EAC 8038D65C */  .4byte func_ovl8_8038533C
  .incbin "ovl8.raw.bin", 0x1C200, 0x4
  /* 1C204 1A9EB4 8038D664 */  .4byte func_ovl8_80384968
  .incbin "ovl8.raw.bin", 0x1C208, 0x4
  /* 1C20C 1A9EBC 8038D66C */  .4byte func_ovl8_80385408
  .incbin "ovl8.raw.bin", 0x1C210, 0x4
  /* 1C214 1A9EC4 8038D674 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1C218, 0x4
  /* 1C21C 1A9ECC 8038D67C */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x1C220, 0x4
  /* 1C224 1A9ED4 8038D684 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x1C228, 0x4
  /* 1C22C 1A9EDC 8038D68C */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x1C230, 0x4
  /* 1C234 1A9EE4 8038D694 */  .4byte func_ovl8_80373694
  .incbin "ovl8.raw.bin", 0x1C238, 0x4
  /* 1C23C 1A9EEC 8038D69C */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x1C240, 0x4
  /* 1C244 1A9EF4 8038D6A4 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x1C248, 0x4
  /* 1C24C 1A9EFC 8038D6AC */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x1C250, 0x4
  /* 1C254 1A9F04 8038D6B4 */  .4byte func_ovl8_80385024
  .incbin "ovl8.raw.bin", 0x1C258, 0x4
  /* 1C25C 1A9F0C 8038D6BC */  .4byte func_ovl8_8037383C
  .incbin "ovl8.raw.bin", 0x1C260, 0x4
  /* 1C264 1A9F14 8038D6C4 */  .4byte func_ovl8_80373930
  .incbin "ovl8.raw.bin", 0x1C268, 0x4
  /* 1C26C 1A9F1C 8038D6CC */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x1C270, 0x4
  /* 1C274 1A9F24 8038D6D4 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x1C278, 0x4
  /* 1C27C 1A9F2C 8038D6DC */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x1C280, 0x4
  /* 1C284 1A9F34 8038D6E4 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x1C288, 0x4
  /* 1C28C 1A9F3C 8038D6EC */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x1C290, 0x4
  /* 1C294 1A9F44 8038D6F4 */  .4byte func_ovl8_80384F90
  .incbin "ovl8.raw.bin", 0x1C298, 0x4
  /* 1C29C 1A9F4C 8038D6FC */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x1C2A0, 0x4
  /* 1C2A4 1A9F54 8038D704 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x1C2A8, 0x4
  /* 1C2AC 1A9F5C 8038D70C */  .4byte func_ovl8_80373BC0
  .incbin "ovl8.raw.bin", 0x1C2B0, 0x4
  /* 1C2B4 1A9F64 8038D714 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x1C2B8, 0x4
  /* 1C2BC 1A9F6C 8038D71C */  .4byte func_ovl8_80384AE8
  .incbin "ovl8.raw.bin", 0x1C2C0, 0x4
  /* 1C2C4 1A9F74 8038D724 */  .4byte func_ovl8_80384B90
  .incbin "ovl8.raw.bin", 0x1C2C8, 0x4
  /* 1C2CC 1A9F7C 8038D72C */  .4byte func_ovl8_80384BD4
  .incbin "ovl8.raw.bin", 0x1C2D0, 0x4
  /* 1C2D4 1A9F84 8038D734 */  .4byte func_ovl8_80384C0C
  .incbin "ovl8.raw.bin", 0x1C2D8, 0x4
  /* 1C2DC 1A9F8C 8038D73C */  .4byte func_ovl8_80384C44
  .incbin "ovl8.raw.bin", 0x1C2E0, 0x4
  /* 1C2E4 1A9F94 8038D744 */  .4byte func_ovl8_80384C4C
  .incbin "ovl8.raw.bin", 0x1C2E8, 0x4
  /* 1C2EC 1A9F9C 8038D74C */  .4byte func_ovl8_80384D58
  .incbin "ovl8.raw.bin", 0x1C2F0, 0x4
  /* 1C2F4 1A9FA4 8038D754 */  .4byte func_ovl8_80384DC4
  .incbin "ovl8.raw.bin", 0x1C2F8, 0x4
  /* 1C2FC 1A9FAC 8038D75C */  .4byte func_ovl8_80384E30
  .incbin "ovl8.raw.bin", 0x1C300, 0x4
  /* 1C304 1A9FB4 8038D764 */  .4byte func_ovl8_80384F3C
  .incbin "ovl8.raw.bin", 0x1C308, 0x4
  /* 1C30C 1A9FBC 8038D76C */  .4byte func_ovl8_80385428
  .incbin "ovl8.raw.bin", 0x1C310, 0x8

glabel D_ovl8_8038D778
  .incbin "ovl8.raw.bin", 0x1C318, 0xC
  /* 1C324 1A9FD4 8038D784 */  .4byte func_ovl8_8038533C
  .incbin "ovl8.raw.bin", 0x1C328, 0x4
  /* 1C32C 1A9FDC 8038D78C */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x1C330, 0x4
  /* 1C334 1A9FE4 8038D794 */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x1C338, 0x4
  /* 1C33C 1A9FEC 8038D79C */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x1C340, 0x4
  /* 1C344 1A9FF4 8038D7A4 */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x1C348, 0x4
  /* 1C34C 1A9FFC 8038D7AC */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x1C350, 0x4
  /* 1C354 1AA004 8038D7B4 */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x1C358, 0x4
  /* 1C35C 1AA00C 8038D7BC */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x1C360, 0x4
  /* 1C364 1AA014 8038D7C4 */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x1C368, 0x4
  /* 1C36C 1AA01C 8038D7CC */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x1C370, 0x4
  /* 1C374 1AA024 8038D7D4 */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x1C378, 0x4
  /* 1C37C 1AA02C 8038D7DC */  .4byte func_ovl8_80385408
  .incbin "ovl8.raw.bin", 0x1C380, 0x4
  /* 1C384 1AA034 8038D7E4 */  .4byte func_ovl8_80385428
  .incbin "ovl8.raw.bin", 0x1C388, 0x4
  /* 1C38C 1AA03C 8038D7EC */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x1C390, 0x4
  /* 1C394 1AA044 8038D7F4 */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x1C398, 0x4
  /* 1C39C 1AA04C 8038D7FC */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x1C3A0, 0x4
  /* 1C3A4 1AA054 8038D804 */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x1C3A8, 0x4
  /* 1C3AC 1AA05C 8038D80C */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x1C3B0, 0x4
  /* 1C3B4 1AA064 8038D814 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1C3B8, 0x4
  /* 1C3BC 1AA06C 8038D81C */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x1C3C0, 0x4
  /* 1C3C4 1AA074 8038D824 */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x1C3C8, 0x4
  /* 1C3CC 1AA07C 8038D82C */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x1C3D0, 0x4
  /* 1C3D4 1AA084 8038D834 */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x1C3D8, 0x4
  /* 1C3DC 1AA08C 8038D83C */  .4byte func_ovl8_80384968
  .incbin "ovl8.raw.bin", 0x1C3E0, 0x4
  /* 1C3E4 1AA094 8038D844 */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x1C3E8, 0x4
  /* 1C3EC 1AA09C 8038D84C */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x1C3F0, 0x4
  /* 1C3F4 1AA0A4 8038D854 */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x1C3F8, 0x4
  /* 1C3FC 1AA0AC 8038D85C */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x1C400, 0x4
  /* 1C404 1AA0B4 8038D864 */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x1C408, 0x4
  /* 1C40C 1AA0BC 8038D86C */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x1C410, 0x4
  /* 1C414 1AA0C4 8038D874 */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x1C418, 0x4
  /* 1C41C 1AA0CC 8038D87C */  .4byte func_ovl8_803726CC
  .incbin "ovl8.raw.bin", 0x1C420, 0x4
  /* 1C424 1AA0D4 8038D884 */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x1C428, 0x4
  /* 1C42C 1AA0DC 8038D88C */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x1C430, 0x4
  /* 1C434 1AA0E4 8038D894 */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x1C438, 0x4
  /* 1C43C 1AA0EC 8038D89C */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x1C440, 0x4
  /* 1C444 1AA0F4 8038D8A4 */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x1C448, 0x4
  /* 1C44C 1AA0FC 8038D8AC */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x1C450, 0x4
  /* 1C454 1AA104 8038D8B4 */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x1C458, 0x4
  /* 1C45C 1AA10C 8038D8BC */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x1C460, 0x4
  /* 1C464 1AA114 8038D8C4 */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x1C468, 0x8

glabel D_ovl8_8038D8D0
  .incbin "ovl8.raw.bin", 0x1C470, 0xC
  /* 1C47C 1AA12C 8038D8DC */  .4byte func_ovl8_8038533C
  .incbin "ovl8.raw.bin", 0x1C480, 0x4
  /* 1C484 1AA134 8038D8E4 */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x1C488, 0x4
  /* 1C48C 1AA13C 8038D8EC */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x1C490, 0x8

glabel D_ovl8_8038D8F8
  .incbin "ovl8.raw.bin", 0x1C498, 0xC
  /* 1C4A4 1AA154 8038D904 */  .4byte func_ovl8_8038533C
  .incbin "ovl8.raw.bin", 0x1C4A8, 0x4
  /* 1C4AC 1AA15C 8038D90C */  .4byte func_ovl8_80385408
  .incbin "ovl8.raw.bin", 0x1C4B0, 0x4
  /* 1C4B4 1AA164 8038D914 */  .4byte func_ovl8_803721E8
  .incbin "ovl8.raw.bin", 0x1C4B8, 0x4
  /* 1C4BC 1AA16C 8038D91C */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x1C4C0, 0x4
  /* 1C4C4 1AA174 8038D924 */  .4byte func_ovl8_80372250
  .incbin "ovl8.raw.bin", 0x1C4C8, 0x4
  /* 1C4CC 1AA17C 8038D92C */  .4byte func_ovl8_803722A0
  .incbin "ovl8.raw.bin", 0x1C4D0, 0x4
  /* 1C4D4 1AA184 8038D934 */  .4byte func_ovl8_803722F0
  .incbin "ovl8.raw.bin", 0x1C4D8, 0x4
  /* 1C4DC 1AA18C 8038D93C */  .4byte func_ovl8_80372348
  .incbin "ovl8.raw.bin", 0x1C4E0, 0x4
  /* 1C4E4 1AA194 8038D944 */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x1C4E8, 0x4
  /* 1C4EC 1AA19C 8038D94C */  .4byte func_ovl8_80372360
  .incbin "ovl8.raw.bin", 0x1C4F0, 0x4
  /* 1C4F4 1AA1A4 8038D954 */  .4byte func_ovl8_803726CC
  .incbin "ovl8.raw.bin", 0x1C4F8, 0x8

glabel D_ovl8_8038D960
  .incbin "ovl8.raw.bin", 0x1C500, 0xC
  /* 1C50C 1AA1BC 8038D96C */  .4byte func_ovl8_80385598
  .incbin "ovl8.raw.bin", 0x1C510, 0x4
  /* 1C514 1AA1C4 8038D974 */  .4byte func_ovl8_80384968
  .incbin "ovl8.raw.bin", 0x1C518, 0x4
  /* 1C51C 1AA1CC 8038D97C */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x1C520, 0x4
  /* 1C524 1AA1D4 8038D984 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1C528, 0x4
  /* 1C52C 1AA1DC 8038D98C */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x1C530, 0x4
  /* 1C534 1AA1E4 8038D994 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x1C538, 0x4
  /* 1C53C 1AA1EC 8038D99C */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x1C540, 0x4
  /* 1C544 1AA1F4 8038D9A4 */  .4byte func_ovl8_80373694
  .incbin "ovl8.raw.bin", 0x1C548, 0x4
  /* 1C54C 1AA1FC 8038D9AC */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x1C550, 0x4
  /* 1C554 1AA204 8038D9B4 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x1C558, 0x4
  /* 1C55C 1AA20C 8038D9BC */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x1C560, 0x4
  /* 1C564 1AA214 8038D9C4 */  .4byte func_ovl8_80385024
  .incbin "ovl8.raw.bin", 0x1C568, 0x4
  /* 1C56C 1AA21C 8038D9CC */  .4byte func_ovl8_8037383C
  .incbin "ovl8.raw.bin", 0x1C570, 0x4
  /* 1C574 1AA224 8038D9D4 */  .4byte func_ovl8_80373930
  .incbin "ovl8.raw.bin", 0x1C578, 0x4
  /* 1C57C 1AA22C 8038D9DC */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x1C580, 0x4
  /* 1C584 1AA234 8038D9E4 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x1C588, 0x4
  /* 1C58C 1AA23C 8038D9EC */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x1C590, 0x4
  /* 1C594 1AA244 8038D9F4 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x1C598, 0x4
  /* 1C59C 1AA24C 8038D9FC */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x1C5A0, 0x4
  /* 1C5A4 1AA254 8038DA04 */  .4byte func_ovl8_80384F90
  .incbin "ovl8.raw.bin", 0x1C5A8, 0x4
  /* 1C5AC 1AA25C 8038DA0C */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x1C5B0, 0x4
  /* 1C5B4 1AA264 8038DA14 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x1C5B8, 0x4
  /* 1C5BC 1AA26C 8038DA1C */  .4byte func_ovl8_80373BC0
  .incbin "ovl8.raw.bin", 0x1C5C0, 0x4
  /* 1C5C4 1AA274 8038DA24 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x1C5C8, 0x4
  /* 1C5CC 1AA27C 8038DA2C */  .4byte func_ovl8_80384AE8
  .incbin "ovl8.raw.bin", 0x1C5D0, 0x4
  /* 1C5D4 1AA284 8038DA34 */  .4byte func_ovl8_80384B90
  .incbin "ovl8.raw.bin", 0x1C5D8, 0x4
  /* 1C5DC 1AA28C 8038DA3C */  .4byte func_ovl8_80384BD4
  .incbin "ovl8.raw.bin", 0x1C5E0, 0x4
  /* 1C5E4 1AA294 8038DA44 */  .4byte func_ovl8_80384C0C
  .incbin "ovl8.raw.bin", 0x1C5E8, 0x4
  /* 1C5EC 1AA29C 8038DA4C */  .4byte func_ovl8_80384C44
  .incbin "ovl8.raw.bin", 0x1C5F0, 0x4
  /* 1C5F4 1AA2A4 8038DA54 */  .4byte func_ovl8_80384C4C
  .incbin "ovl8.raw.bin", 0x1C5F8, 0x4
  /* 1C5FC 1AA2AC 8038DA5C */  .4byte func_ovl8_80384D58
  .incbin "ovl8.raw.bin", 0x1C600, 0x4
  /* 1C604 1AA2B4 8038DA64 */  .4byte func_ovl8_80384DC4
  .incbin "ovl8.raw.bin", 0x1C608, 0x4
  /* 1C60C 1AA2BC 8038DA6C */  .4byte func_ovl8_80384E30
  .incbin "ovl8.raw.bin", 0x1C610, 0x4
  /* 1C614 1AA2C4 8038DA74 */  .4byte func_ovl8_80384F3C
  .incbin "ovl8.raw.bin", 0x1C618, 0x8

glabel D_ovl8_8038DA80
  .incbin "ovl8.raw.bin", 0x1C620, 0xC
  /* 1C62C 1AA2DC 8038DA8C */  .4byte func_ovl8_80385598
  .incbin "ovl8.raw.bin", 0x1C630, 0x4
  /* 1C634 1AA2E4 8038DA94 */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x1C638, 0x4
  /* 1C63C 1AA2EC 8038DA9C */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x1C640, 0x4
  /* 1C644 1AA2F4 8038DAA4 */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x1C648, 0x4
  /* 1C64C 1AA2FC 8038DAAC */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x1C650, 0x4
  /* 1C654 1AA304 8038DAB4 */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x1C658, 0x4
  /* 1C65C 1AA30C 8038DABC */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x1C660, 0x4
  /* 1C664 1AA314 8038DAC4 */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x1C668, 0x4
  /* 1C66C 1AA31C 8038DACC */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x1C670, 0x4
  /* 1C674 1AA324 8038DAD4 */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x1C678, 0x4
  /* 1C67C 1AA32C 8038DADC */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x1C680, 0x4
  /* 1C684 1AA334 8038DAE4 */  .4byte func_ovl8_80373648
  .incbin "ovl8.raw.bin", 0x1C688, 0x4
  /* 1C68C 1AA33C 8038DAEC */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x1C690, 0x4
  /* 1C694 1AA344 8038DAF4 */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x1C698, 0x4
  /* 1C69C 1AA34C 8038DAFC */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x1C6A0, 0x4
  /* 1C6A4 1AA354 8038DB04 */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x1C6A8, 0x4
  /* 1C6AC 1AA35C 8038DB0C */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x1C6B0, 0x4
  /* 1C6B4 1AA364 8038DB14 */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x1C6B8, 0x4
  /* 1C6BC 1AA36C 8038DB1C */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1C6C0, 0x4
  /* 1C6C4 1AA374 8038DB24 */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x1C6C8, 0x4
  /* 1C6CC 1AA37C 8038DB2C */  .4byte func_ovl8_80371C50
  .incbin "ovl8.raw.bin", 0x1C6D0, 0x4
  /* 1C6D4 1AA384 8038DB34 */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x1C6D8, 0x4
  /* 1C6DC 1AA38C 8038DB3C */  .4byte func_ovl8_80371CB8
  .incbin "ovl8.raw.bin", 0x1C6E0, 0x4
  /* 1C6E4 1AA394 8038DB44 */  .4byte func_ovl8_80384968
  .incbin "ovl8.raw.bin", 0x1C6E8, 0x4
  /* 1C6EC 1AA39C 8038DB4C */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x1C6F0, 0x4
  /* 1C6F4 1AA3A4 8038DB54 */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x1C6F8, 0x4
  /* 1C6FC 1AA3AC 8038DB5C */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x1C700, 0x4
  /* 1C704 1AA3B4 8038DB64 */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x1C708, 0x4
  /* 1C70C 1AA3BC 8038DB6C */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x1C710, 0x4
  /* 1C714 1AA3C4 8038DB74 */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x1C718, 0x4
  /* 1C71C 1AA3CC 8038DB7C */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x1C720, 0x4
  /* 1C724 1AA3D4 8038DB84 */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x1C728, 0x4
  /* 1C72C 1AA3DC 8038DB8C */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x1C730, 0x4
  /* 1C734 1AA3E4 8038DB94 */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x1C738, 0x4
  /* 1C73C 1AA3EC 8038DB9C */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x1C740, 0x4
  /* 1C744 1AA3F4 8038DBA4 */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x1C748, 0x4
  /* 1C74C 1AA3FC 8038DBAC */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x1C750, 0x4
  /* 1C754 1AA404 8038DBB4 */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x1C758, 0x4
  /* 1C75C 1AA40C 8038DBBC */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x1C760, 0x4
  /* 1C764 1AA414 8038DBC4 */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x1C768, 0x4
  /* 1C76C 1AA41C 8038DBCC */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x1C770, 0x8

glabel D_ovl8_8038DBD8
  .incbin "ovl8.raw.bin", 0x1C778, 0xC
  /* 1C784 1AA434 8038DBE4 */  .4byte func_ovl8_80385598
  .incbin "ovl8.raw.bin", 0x1C788, 0x4
  /* 1C78C 1AA43C 8038DBEC */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x1C790, 0x4
  /* 1C794 1AA444 8038DBF4 */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x1C798, 0x8

glabel D_ovl8_8038DC00
  .incbin "ovl8.raw.bin", 0x1C7A0, 0xC
  /* 1C7AC 1AA45C 8038DC0C */  .4byte func_ovl8_803858B0
  .incbin "ovl8.raw.bin", 0x1C7B0, 0x4
  /* 1C7B4 1AA464 8038DC14 */  .4byte func_ovl8_8038599C
  .incbin "ovl8.raw.bin", 0x1C7B8, 0x4
  /* 1C7BC 1AA46C 8038DC1C */  .4byte func_ovl8_8038597C
  .incbin "ovl8.raw.bin", 0x1C7C0, 0x4
  /* 1C7C4 1AA474 8038DC24 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1C7C8, 0x4
  /* 1C7CC 1AA47C 8038DC2C */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x1C7D0, 0x4
  /* 1C7D4 1AA484 8038DC34 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x1C7D8, 0x4
  /* 1C7DC 1AA48C 8038DC3C */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x1C7E0, 0x4
  /* 1C7E4 1AA494 8038DC44 */  .4byte func_ovl8_80373694
  .incbin "ovl8.raw.bin", 0x1C7E8, 0x4
  /* 1C7EC 1AA49C 8038DC4C */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x1C7F0, 0x4
  /* 1C7F4 1AA4A4 8038DC54 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x1C7F8, 0x4
  /* 1C7FC 1AA4AC 8038DC5C */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x1C800, 0x4
  /* 1C804 1AA4B4 8038DC64 */  .4byte func_ovl8_80373828
  .incbin "ovl8.raw.bin", 0x1C808, 0x4
  /* 1C80C 1AA4BC 8038DC6C */  .4byte func_ovl8_8037383C
  .incbin "ovl8.raw.bin", 0x1C810, 0x4
  /* 1C814 1AA4C4 8038DC74 */  .4byte func_ovl8_803822D8
  .incbin "ovl8.raw.bin", 0x1C818, 0x4
  /* 1C81C 1AA4CC 8038DC7C */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x1C820, 0x4
  /* 1C824 1AA4D4 8038DC84 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x1C828, 0x4
  /* 1C82C 1AA4DC 8038DC8C */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x1C830, 0x4
  /* 1C834 1AA4E4 8038DC94 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x1C838, 0x4
  /* 1C83C 1AA4EC 8038DC9C */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x1C840, 0x4
  /* 1C844 1AA4F4 8038DCA4 */  .4byte func_ovl8_80373AC4
  .incbin "ovl8.raw.bin", 0x1C848, 0x4
  /* 1C84C 1AA4FC 8038DCAC */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x1C850, 0x4
  /* 1C854 1AA504 8038DCB4 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x1C858, 0x4
  /* 1C85C 1AA50C 8038DCBC */  .4byte func_ovl8_80373BC0
  .incbin "ovl8.raw.bin", 0x1C860, 0x4
  /* 1C864 1AA514 8038DCC4 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x1C868, 0x4
  /* 1C86C 1AA51C 8038DCCC */  .4byte func_ovl8_80385A1C
  .incbin "ovl8.raw.bin", 0x1C870, 0x8

glabel D_ovl8_8038DCD8
  .incbin "ovl8.raw.bin", 0x1C878, 0xC
  /* 1C884 1AA534 8038DCE4 */  .4byte func_ovl8_803858B0
  .incbin "ovl8.raw.bin", 0x1C888, 0x4
  /* 1C88C 1AA53C 8038DCEC */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x1C890, 0x4
  /* 1C894 1AA544 8038DCF4 */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x1C898, 0x4
  /* 1C89C 1AA54C 8038DCFC */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x1C8A0, 0x4
  /* 1C8A4 1AA554 8038DD04 */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x1C8A8, 0x4
  /* 1C8AC 1AA55C 8038DD0C */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x1C8B0, 0x4
  /* 1C8B4 1AA564 8038DD14 */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x1C8B8, 0x4
  /* 1C8BC 1AA56C 8038DD1C */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x1C8C0, 0x4
  /* 1C8C4 1AA574 8038DD24 */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x1C8C8, 0x4
  /* 1C8CC 1AA57C 8038DD2C */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x1C8D0, 0x4
  /* 1C8D4 1AA584 8038DD34 */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x1C8D8, 0x4
  /* 1C8DC 1AA58C 8038DD3C */  .4byte func_ovl8_8038597C
  .incbin "ovl8.raw.bin", 0x1C8E0, 0x4
  /* 1C8E4 1AA594 8038DD44 */  .4byte func_ovl8_80385A1C
  .incbin "ovl8.raw.bin", 0x1C8E8, 0x4
  /* 1C8EC 1AA59C 8038DD4C */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x1C8F0, 0x4
  /* 1C8F4 1AA5A4 8038DD54 */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x1C8F8, 0x4
  /* 1C8FC 1AA5AC 8038DD5C */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x1C900, 0x4
  /* 1C904 1AA5B4 8038DD64 */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x1C908, 0x4
  /* 1C90C 1AA5BC 8038DD6C */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x1C910, 0x4
  /* 1C914 1AA5C4 8038DD74 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1C918, 0x4
  /* 1C91C 1AA5CC 8038DD7C */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x1C920, 0x4
  /* 1C924 1AA5D4 8038DD84 */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x1C928, 0x4
  /* 1C92C 1AA5DC 8038DD8C */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x1C930, 0x4
  /* 1C934 1AA5E4 8038DD94 */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x1C938, 0x4
  /* 1C93C 1AA5EC 8038DD9C */  .4byte func_ovl8_8038599C
  .incbin "ovl8.raw.bin", 0x1C940, 0x4
  /* 1C944 1AA5F4 8038DDA4 */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x1C948, 0x4
  /* 1C94C 1AA5FC 8038DDAC */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x1C950, 0x4
  /* 1C954 1AA604 8038DDB4 */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x1C958, 0x4
  /* 1C95C 1AA60C 8038DDBC */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x1C960, 0x4
  /* 1C964 1AA614 8038DDC4 */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x1C968, 0x4
  /* 1C96C 1AA61C 8038DDCC */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x1C970, 0x4
  /* 1C974 1AA624 8038DDD4 */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x1C978, 0x4
  /* 1C97C 1AA62C 8038DDDC */  .4byte func_ovl8_803726CC
  .incbin "ovl8.raw.bin", 0x1C980, 0x4
  /* 1C984 1AA634 8038DDE4 */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x1C988, 0x4
  /* 1C98C 1AA63C 8038DDEC */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x1C990, 0x4
  /* 1C994 1AA644 8038DDF4 */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x1C998, 0x4
  /* 1C99C 1AA64C 8038DDFC */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x1C9A0, 0x4
  /* 1C9A4 1AA654 8038DE04 */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x1C9A8, 0x4
  /* 1C9AC 1AA65C 8038DE0C */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x1C9B0, 0x4
  /* 1C9B4 1AA664 8038DE14 */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x1C9B8, 0x4
  /* 1C9BC 1AA66C 8038DE1C */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x1C9C0, 0x4
  /* 1C9C4 1AA674 8038DE24 */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x1C9C8, 0x8

glabel D_ovl8_8038DE30
  .incbin "ovl8.raw.bin", 0x1C9D0, 0xC
  /* 1C9DC 1AA68C 8038DE3C */  .4byte func_ovl8_803858B0
  .incbin "ovl8.raw.bin", 0x1C9E0, 0x4
  /* 1C9E4 1AA694 8038DE44 */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x1C9E8, 0x4
  /* 1C9EC 1AA69C 8038DE4C */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x1C9F0, 0x8

glabel D_ovl8_8038DE58
  .incbin "ovl8.raw.bin", 0x1C9F8, 0xC
  /* 1CA04 1AA6B4 8038DE64 */  .4byte func_ovl8_803858B0
  .incbin "ovl8.raw.bin", 0x1CA08, 0x4
  /* 1CA0C 1AA6BC 8038DE6C */  .4byte func_ovl8_8038597C
  .incbin "ovl8.raw.bin", 0x1CA10, 0x4
  /* 1CA14 1AA6C4 8038DE74 */  .4byte func_ovl8_803721E8
  .incbin "ovl8.raw.bin", 0x1CA18, 0x4
  /* 1CA1C 1AA6CC 8038DE7C */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x1CA20, 0x4
  /* 1CA24 1AA6D4 8038DE84 */  .4byte func_ovl8_80372250
  .incbin "ovl8.raw.bin", 0x1CA28, 0x4
  /* 1CA2C 1AA6DC 8038DE8C */  .4byte func_ovl8_803722A0
  .incbin "ovl8.raw.bin", 0x1CA30, 0x4
  /* 1CA34 1AA6E4 8038DE94 */  .4byte func_ovl8_803722F0
  .incbin "ovl8.raw.bin", 0x1CA38, 0x4
  /* 1CA3C 1AA6EC 8038DE9C */  .4byte func_ovl8_80372348
  .incbin "ovl8.raw.bin", 0x1CA40, 0x4
  /* 1CA44 1AA6F4 8038DEA4 */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x1CA48, 0x4
  /* 1CA4C 1AA6FC 8038DEAC */  .4byte func_ovl8_80372360
  .incbin "ovl8.raw.bin", 0x1CA50, 0x4
  /* 1CA54 1AA704 8038DEB4 */  .4byte func_ovl8_803726CC
  .incbin "ovl8.raw.bin", 0x1CA58, 0x8

glabel D_ovl8_8038DEC0
  .incbin "ovl8.raw.bin", 0x1CA60, 0xC
  /* 1CA6C 1AA71C 8038DECC */  .4byte func_ovl8_80385C70
  .incbin "ovl8.raw.bin", 0x1CA70, 0x4
  /* 1CA74 1AA724 8038DED4 */  .4byte func_ovl8_80373640
  .incbin "ovl8.raw.bin", 0x1CA78, 0x4
  /* 1CA7C 1AA72C 8038DEDC */  .4byte func_ovl8_80385D88
  .incbin "ovl8.raw.bin", 0x1CA80, 0x4
  /* 1CA84 1AA734 8038DEE4 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1CA88, 0x4
  /* 1CA8C 1AA73C 8038DEEC */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x1CA90, 0x4
  /* 1CA94 1AA744 8038DEF4 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x1CA98, 0x4
  /* 1CA9C 1AA74C 8038DEFC */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x1CAA0, 0x4
  /* 1CAA4 1AA754 8038DF04 */  .4byte func_ovl8_80385D54
  .incbin "ovl8.raw.bin", 0x1CAA8, 0x4
  /* 1CAAC 1AA75C 8038DF0C */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x1CAB0, 0x4
  /* 1CAB4 1AA764 8038DF14 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x1CAB8, 0x4
  /* 1CABC 1AA76C 8038DF1C */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x1CAC0, 0x4
  /* 1CAC4 1AA774 8038DF24 */  .4byte func_ovl8_80385D34
  .incbin "ovl8.raw.bin", 0x1CAC8, 0x4
  /* 1CACC 1AA77C 8038DF2C */  .4byte func_ovl8_80373EA8
  .incbin "ovl8.raw.bin", 0x1CAD0, 0x4
  /* 1CAD4 1AA784 8038DF34 */  .4byte func_ovl8_80373930
  .incbin "ovl8.raw.bin", 0x1CAD8, 0x4
  /* 1CADC 1AA78C 8038DF3C */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x1CAE0, 0x4
  /* 1CAE4 1AA794 8038DF44 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x1CAE8, 0x4
  /* 1CAEC 1AA79C 8038DF4C */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x1CAF0, 0x4
  /* 1CAF4 1AA7A4 8038DF54 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x1CAF8, 0x4
  /* 1CAFC 1AA7AC 8038DF5C */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x1CB00, 0x4
  /* 1CB04 1AA7B4 8038DF64 */  .4byte func_ovl8_80373AC4
  .incbin "ovl8.raw.bin", 0x1CB08, 0x4
  /* 1CB0C 1AA7BC 8038DF6C */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x1CB10, 0x4
  /* 1CB14 1AA7C4 8038DF74 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x1CB18, 0x4
  /* 1CB1C 1AA7CC 8038DF7C */  .4byte func_ovl8_803743D8
  .incbin "ovl8.raw.bin", 0x1CB20, 0x4
  /* 1CB24 1AA7D4 8038DF84 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x1CB28, 0x4
  /* 1CB2C 1AA7DC 8038DF8C */  .4byte func_ovl8_803743C0
  .incbin "ovl8.raw.bin", 0x1CB30, 0x4
  /* 1CB34 1AA7E4 8038DF94 */  .4byte func_ovl8_8037CA48
  .incbin "ovl8.raw.bin", 0x1CB38, 0x8

glabel D_ovl8_8038DFA0
  .incbin "ovl8.raw.bin", 0x1CB40, 0xC
  /* 1CB4C 1AA7FC 8038DFAC */  .4byte func_ovl8_80385C70
  .incbin "ovl8.raw.bin", 0x1CB50, 0x4
  /* 1CB54 1AA804 8038DFB4 */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x1CB58, 0x4
  /* 1CB5C 1AA80C 8038DFBC */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x1CB60, 0x4
  /* 1CB64 1AA814 8038DFC4 */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x1CB68, 0x4
  /* 1CB6C 1AA81C 8038DFCC */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x1CB70, 0x4
  /* 1CB74 1AA824 8038DFD4 */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x1CB78, 0x4
  /* 1CB7C 1AA82C 8038DFDC */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x1CB80, 0x4
  /* 1CB84 1AA834 8038DFE4 */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x1CB88, 0x4
  /* 1CB8C 1AA83C 8038DFEC */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x1CB90, 0x4
  /* 1CB94 1AA844 8038DFF4 */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x1CB98, 0x4
  /* 1CB9C 1AA84C 8038DFFC */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x1CBA0, 0x4
  /* 1CBA4 1AA854 8038E004 */  .4byte func_ovl8_80385D88
  .incbin "ovl8.raw.bin", 0x1CBA8, 0x4
  /* 1CBAC 1AA85C 8038E00C */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x1CBB0, 0x4
  /* 1CBB4 1AA864 8038E014 */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x1CBB8, 0x4
  /* 1CBBC 1AA86C 8038E01C */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x1CBC0, 0x4
  /* 1CBC4 1AA874 8038E024 */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x1CBC8, 0x4
  /* 1CBCC 1AA87C 8038E02C */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x1CBD0, 0x4
  /* 1CBD4 1AA884 8038E034 */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x1CBD8, 0x4
  /* 1CBDC 1AA88C 8038E03C */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1CBE0, 0x4
  /* 1CBE4 1AA894 8038E044 */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x1CBE8, 0x4
  /* 1CBEC 1AA89C 8038E04C */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x1CBF0, 0x4
  /* 1CBF4 1AA8A4 8038E054 */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x1CBF8, 0x4
  /* 1CBFC 1AA8AC 8038E05C */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x1CC00, 0x4
  /* 1CC04 1AA8B4 8038E064 */  .4byte func_ovl8_80373640
  .incbin "ovl8.raw.bin", 0x1CC08, 0x4
  /* 1CC0C 1AA8BC 8038E06C */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x1CC10, 0x4
  /* 1CC14 1AA8C4 8038E074 */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x1CC18, 0x4
  /* 1CC1C 1AA8CC 8038E07C */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x1CC20, 0x4
  /* 1CC24 1AA8D4 8038E084 */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x1CC28, 0x4
  /* 1CC2C 1AA8DC 8038E08C */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x1CC30, 0x4
  /* 1CC34 1AA8E4 8038E094 */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x1CC38, 0x4
  /* 1CC3C 1AA8EC 8038E09C */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x1CC40, 0x4
  /* 1CC44 1AA8F4 8038E0A4 */  .4byte func_ovl8_803726CC
  .incbin "ovl8.raw.bin", 0x1CC48, 0x4
  /* 1CC4C 1AA8FC 8038E0AC */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x1CC50, 0x4
  /* 1CC54 1AA904 8038E0B4 */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x1CC58, 0x4
  /* 1CC5C 1AA90C 8038E0BC */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x1CC60, 0x4
  /* 1CC64 1AA914 8038E0C4 */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x1CC68, 0x4
  /* 1CC6C 1AA91C 8038E0CC */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x1CC70, 0x4
  /* 1CC74 1AA924 8038E0D4 */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x1CC78, 0x4
  /* 1CC7C 1AA92C 8038E0DC */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x1CC80, 0x4
  /* 1CC84 1AA934 8038E0E4 */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x1CC88, 0x4
  /* 1CC8C 1AA93C 8038E0EC */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x1CC90, 0x8

glabel D_ovl8_8038E0F8
  .incbin "ovl8.raw.bin", 0x1CC98, 0xC
  /* 1CCA4 1AA954 8038E104 */  .4byte func_ovl8_80385C70
  .incbin "ovl8.raw.bin", 0x1CCA8, 0x4
  /* 1CCAC 1AA95C 8038E10C */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x1CCB0, 0x4
  /* 1CCB4 1AA964 8038E114 */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x1CCB8, 0x8

glabel D_ovl8_8038E120
  .incbin "ovl8.raw.bin", 0x1CCC0, 0xC
  /* 1CCCC 1AA97C 8038E12C */  .4byte func_ovl8_80385C70
  .incbin "ovl8.raw.bin", 0x1CCD0, 0x4
  /* 1CCD4 1AA984 8038E134 */  .4byte func_ovl8_80385D88
  .incbin "ovl8.raw.bin", 0x1CCD8, 0x4
  /* 1CCDC 1AA98C 8038E13C */  .4byte func_ovl8_803721E8
  .incbin "ovl8.raw.bin", 0x1CCE0, 0x4
  /* 1CCE4 1AA994 8038E144 */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x1CCE8, 0x4
  /* 1CCEC 1AA99C 8038E14C */  .4byte func_ovl8_80372250
  .incbin "ovl8.raw.bin", 0x1CCF0, 0x4
  /* 1CCF4 1AA9A4 8038E154 */  .4byte func_ovl8_803722A0
  .incbin "ovl8.raw.bin", 0x1CCF8, 0x4
  /* 1CCFC 1AA9AC 8038E15C */  .4byte func_ovl8_803722F0
  .incbin "ovl8.raw.bin", 0x1CD00, 0x4
  /* 1CD04 1AA9B4 8038E164 */  .4byte func_ovl8_80372348
  .incbin "ovl8.raw.bin", 0x1CD08, 0x4
  /* 1CD0C 1AA9BC 8038E16C */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x1CD10, 0x4
  /* 1CD14 1AA9C4 8038E174 */  .4byte func_ovl8_80372360
  .incbin "ovl8.raw.bin", 0x1CD18, 0x4
  /* 1CD1C 1AA9CC 8038E17C */  .4byte func_ovl8_803726CC
  .incbin "ovl8.raw.bin", 0x1CD20, 0x8

glabel D_ovl8_8038E188
  .incbin "ovl8.raw.bin", 0x1CD28, 0xC
  /* 1CD34 1AA9E4 8038E194 */  .4byte func_ovl8_80385C70
  .incbin "ovl8.raw.bin", 0x1CD38, 0x4
  /* 1CD3C 1AA9EC 8038E19C */  .4byte func_ovl8_8038125C
  .incbin "ovl8.raw.bin", 0x1CD40, 0x4
  /* 1CD44 1AA9F4 8038E1A4 */  .4byte func_ovl8_80381274
  .incbin "ovl8.raw.bin", 0x1CD48, 0x4
  /* 1CD4C 1AA9FC 8038E1AC */  .4byte func_ovl8_803812BC
  .incbin "ovl8.raw.bin", 0x1CD50, 0x4
  /* 1CD54 1AAA04 8038E1B4 */  .4byte func_ovl8_80381308
  .incbin "ovl8.raw.bin", 0x1CD58, 0x4
  /* 1CD5C 1AAA0C 8038E1BC */  .4byte func_ovl8_80381710
  .incbin "ovl8.raw.bin", 0x1CD60, 0x4
  /* 1CD64 1AAA14 8038E1C4 */  .4byte func_ovl8_803817C0
  .incbin "ovl8.raw.bin", 0x1CD68, 0x4
  /* 1CD6C 1AAA1C 8038E1CC */  .4byte func_ovl8_8038185C
  .incbin "ovl8.raw.bin", 0x1CD70, 0x4
  /* 1CD74 1AAA24 8038E1D4 */  .4byte func_ovl8_80381908
  .incbin "ovl8.raw.bin", 0x1CD78, 0x8

glabel D_ovl8_8038E1E0
  .incbin "ovl8.raw.bin", 0x1CD80, 0x4

glabel D_ovl8_8038E1E4
  .incbin "ovl8.raw.bin", 0x1CD84, 0x2

glabel D_ovl8_8038E1E6
  .incbin "ovl8.raw.bin", 0x1CD86, 0x6

glabel D_ovl8_8038E1EC
  .incbin "ovl8.raw.bin", 0x1CD8C, 0x8
  /* 1CD94 1AAA44 8038E1F4 */
  .asciz "BFWN"
  .balign 4
  .incbin "ovl8.raw.bin", 0x1CD9C, 0xC

glabel D_ovl8_8038E208
  .incbin "ovl8.raw.bin", 0x1CDA8, 0x28

glabel D_ovl8_8038E230
  .incbin "ovl8.raw.bin", 0x1CDD0, 0xA0

glabel D_ovl8_8038E2D0
  /* 1CE70 1AAB20 8038E2D0 */
  .asciz "OK"
  .balign 4

glabel D_ovl8_8038E2D4
  .incbin "ovl8.raw.bin", 0x1CE74, 0x24
  /* 1CE98 1AAB48 8038E2F8 */  .4byte D_ovl8_8038E2D0
  .incbin "ovl8.raw.bin", 0x1CE9C, 0xC

glabel D_ovl8_8038E308
  .incbin "ovl8.raw.bin", 0x1CEA8, 0x200

glabel D_ovl8_8038E508
  .incbin "ovl8.raw.bin", 0x1D0A8, 0x8
  /* 1D0B0 1AAD60 8038E510 */  .4byte D_ovl8_8038E308
  .incbin "ovl8.raw.bin", 0x1D0B4, 0x4

glabel D_ovl8_8038E518
  .incbin "ovl8.raw.bin", 0x1D0B8, 0x34
  /* 1D0EC 1AAD9C 8038E54C */  .4byte D_ovl8_8038E508
  .incbin "ovl8.raw.bin", 0x1D0F0, 0xC

glabel D_ovl8_8038E55C
  /* 1D0FC 1AADAC 8038E55C */  .4byte D_ovl8_8038E518
  .incbin "ovl8.raw.bin", 0x1D100, 0x4

glabel D_ovl8_8038E564
  .incbin "ovl8.raw.bin", 0x1D104, 0x14
  /* 1D118 1AADC8 8038E578 */
  .asciz "BBTN"
  .balign 4
  .incbin "ovl8.raw.bin", 0x1D120, 0x8
  /* 1D128 1AADD8 8038E588 */  .4byte D_ovl8_8038E55C

glabel D_ovl8_8038E58C
  /* 1D12C 1AADDC 8038E58C */
  .asciz "OK"
  .balign 4

glabel D_ovl8_8038E590
  /* 1D130 1AADE0 8038E590 */
  .asciz "YES"
  .balign 4

glabel D_ovl8_8038E594
  /* 1D134 1AADE4 8038E594 */
  .asciz "N O"
  .balign 4
  .incbin "ovl8.raw.bin", 0x1D138, 0x8

glabel D_ovl8_8038E5A0
  .incbin "ovl8.raw.bin", 0x1D140, 0xC
  /* 1D14C 1AADFC 8038E5AC */  .4byte func_ovl8_803868EC
  .incbin "ovl8.raw.bin", 0x1D150, 0x4
  /* 1D154 1AAE04 8038E5B4 */  .4byte func_ovl8_803762B4
  .incbin "ovl8.raw.bin", 0x1D158, 0x4
  /* 1D15C 1AAE0C 8038E5BC */  .4byte func_ovl8_80375528
  .incbin "ovl8.raw.bin", 0x1D160, 0x4
  /* 1D164 1AAE14 8038E5C4 */  .4byte func_ovl8_803755C4
  .incbin "ovl8.raw.bin", 0x1D168, 0x4
  /* 1D16C 1AAE1C 8038E5CC */  .4byte func_ovl8_80375864
  .incbin "ovl8.raw.bin", 0x1D170, 0x4
  /* 1D174 1AAE24 8038E5D4 */  .4byte func_ovl8_803762AC
  .incbin "ovl8.raw.bin", 0x1D178, 0x4
  /* 1D17C 1AAE2C 8038E5DC */  .4byte func_ovl8_80372A48
  .incbin "ovl8.raw.bin", 0x1D180, 0x4
  /* 1D184 1AAE34 8038E5E4 */  .4byte func_ovl8_80372A94
  .incbin "ovl8.raw.bin", 0x1D188, 0x4
  /* 1D18C 1AAE3C 8038E5EC */  .4byte func_ovl8_803764C8
  .incbin "ovl8.raw.bin", 0x1D190, 0x4
  /* 1D194 1AAE44 8038E5F4 */  .4byte func_ovl8_80372D18
  .incbin "ovl8.raw.bin", 0x1D198, 0x4
  /* 1D19C 1AAE4C 8038E5FC */  .4byte func_ovl8_80372D70
  .incbin "ovl8.raw.bin", 0x1D1A0, 0x4
  /* 1D1A4 1AAE54 8038E604 */  .4byte func_ovl8_80372DC8
  .incbin "ovl8.raw.bin", 0x1D1A8, 0x4
  /* 1D1AC 1AAE5C 8038E60C */  .4byte func_ovl8_80372DD8
  .incbin "ovl8.raw.bin", 0x1D1B0, 0x4
  /* 1D1B4 1AAE64 8038E614 */  .4byte func_ovl8_80372DE8
  .incbin "ovl8.raw.bin", 0x1D1B8, 0x4
  /* 1D1BC 1AAE6C 8038E61C */  .4byte func_ovl8_80372E40
  .incbin "ovl8.raw.bin", 0x1D1C0, 0x4
  /* 1D1C4 1AAE74 8038E624 */  .4byte func_ovl8_80372FEC
  .incbin "ovl8.raw.bin", 0x1D1C8, 0x4
  /* 1D1CC 1AAE7C 8038E62C */  .4byte func_ovl8_80373044
  .incbin "ovl8.raw.bin", 0x1D1D0, 0x4
  /* 1D1D4 1AAE84 8038E634 */  .4byte func_ovl8_803866AC
  .incbin "ovl8.raw.bin", 0x1D1D8, 0x4
  /* 1D1DC 1AAE8C 8038E63C */  .4byte func_ovl8_80373118
  .incbin "ovl8.raw.bin", 0x1D1E0, 0x4
  /* 1D1E4 1AAE94 8038E644 */  .4byte func_ovl8_80373138
  .incbin "ovl8.raw.bin", 0x1D1E8, 0x4
  /* 1D1EC 1AAE9C 8038E64C */  .4byte func_ovl8_803732B0
  .incbin "ovl8.raw.bin", 0x1D1F0, 0x4
  /* 1D1F4 1AAEA4 8038E654 */  .4byte func_ovl8_803868C0
  .incbin "ovl8.raw.bin", 0x1D1F8, 0x8

glabel D_ovl8_8038E660
  .incbin "ovl8.raw.bin", 0x1D200, 0xC
  /* 1D20C 1AAEBC 8038E66C */  .4byte func_ovl8_803868EC
  .incbin "ovl8.raw.bin", 0x1D210, 0x4
  /* 1D214 1AAEC4 8038E674 */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x1D218, 0x4
  /* 1D21C 1AAECC 8038E67C */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x1D220, 0x4
  /* 1D224 1AAED4 8038E684 */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x1D228, 0x4
  /* 1D22C 1AAEDC 8038E68C */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x1D230, 0x4
  /* 1D234 1AAEE4 8038E694 */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x1D238, 0x4
  /* 1D23C 1AAEEC 8038E69C */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x1D240, 0x4
  /* 1D244 1AAEF4 8038E6A4 */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x1D248, 0x4
  /* 1D24C 1AAEFC 8038E6AC */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x1D250, 0x4
  /* 1D254 1AAF04 8038E6B4 */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x1D258, 0x4
  /* 1D25C 1AAF0C 8038E6BC */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x1D260, 0x4
  /* 1D264 1AAF14 8038E6C4 */  .4byte func_ovl8_803762B4
  .incbin "ovl8.raw.bin", 0x1D268, 0x4
  /* 1D26C 1AAF1C 8038E6CC */  .4byte func_ovl8_803868C0
  .incbin "ovl8.raw.bin", 0x1D270, 0x4
  /* 1D274 1AAF24 8038E6D4 */  .4byte func_ovl8_80372A94
  .incbin "ovl8.raw.bin", 0x1D278, 0x4
  /* 1D27C 1AAF2C 8038E6DC */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x1D280, 0x4
  /* 1D284 1AAF34 8038E6E4 */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x1D288, 0x4
  /* 1D28C 1AAF3C 8038E6EC */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x1D290, 0x4
  /* 1D294 1AAF44 8038E6F4 */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x1D298, 0x4
  /* 1D29C 1AAF4C 8038E6FC */  .4byte func_ovl8_803764C8
  .incbin "ovl8.raw.bin", 0x1D2A0, 0x4
  /* 1D2A4 1AAF54 8038E704 */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x1D2A8, 0x4
  /* 1D2AC 1AAF5C 8038E70C */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x1D2B0, 0x4
  /* 1D2B4 1AAF64 8038E714 */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x1D2B8, 0x4
  /* 1D2BC 1AAF6C 8038E71C */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x1D2C0, 0x4
  /* 1D2C4 1AAF74 8038E724 */  .4byte func_ovl8_80371D00
  .incbin "ovl8.raw.bin", 0x1D2C8, 0x4
  /* 1D2CC 1AAF7C 8038E72C */  .4byte func_ovl8_80372D70
  .incbin "ovl8.raw.bin", 0x1D2D0, 0x4
  /* 1D2D4 1AAF84 8038E734 */  .4byte func_ovl8_80372DC8
  .incbin "ovl8.raw.bin", 0x1D2D8, 0x4
  /* 1D2DC 1AAF8C 8038E73C */  .4byte func_ovl8_80372D18
  .incbin "ovl8.raw.bin", 0x1D2E0, 0x4
  /* 1D2E4 1AAF94 8038E744 */  .4byte func_ovl8_80372DD8
  .incbin "ovl8.raw.bin", 0x1D2E8, 0x4
  /* 1D2EC 1AAF9C 8038E74C */  .4byte func_ovl8_80373118
  .incbin "ovl8.raw.bin", 0x1D2F0, 0x4
  /* 1D2F4 1AAFA4 8038E754 */  .4byte func_ovl8_80373138
  .incbin "ovl8.raw.bin", 0x1D2F8, 0x4
  /* 1D2FC 1AAFAC 8038E75C */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x1D300, 0x4
  /* 1D304 1AAFB4 8038E764 */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x1D308, 0x4
  /* 1D30C 1AAFBC 8038E76C */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x1D310, 0x4
  /* 1D314 1AAFC4 8038E774 */  .4byte func_ovl8_80372DE8
  .incbin "ovl8.raw.bin", 0x1D318, 0x4
  /* 1D31C 1AAFCC 8038E77C */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x1D320, 0x4
  /* 1D324 1AAFD4 8038E784 */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x1D328, 0x4
  /* 1D32C 1AAFDC 8038E78C */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x1D330, 0x4
  /* 1D334 1AAFE4 8038E794 */  .4byte func_ovl8_803732B0
  .incbin "ovl8.raw.bin", 0x1D338, 0x4
  /* 1D33C 1AAFEC 8038E79C */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x1D340, 0x4
  /* 1D344 1AAFF4 8038E7A4 */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x1D348, 0x4
  /* 1D34C 1AAFFC 8038E7AC */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x1D350, 0x8

glabel D_ovl8_8038E7B8
  .incbin "ovl8.raw.bin", 0x1D358, 0xC
  /* 1D364 1AB014 8038E7C4 */  .4byte func_ovl8_803868EC
  .incbin "ovl8.raw.bin", 0x1D368, 0x4
  /* 1D36C 1AB01C 8038E7CC */  .4byte func_ovl8_803866AC
  .incbin "ovl8.raw.bin", 0x1D370, 0x4
  /* 1D374 1AB024 8038E7D4 */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x1D378, 0x8

glabel D_ovl8_8038E7E0
  .incbin "ovl8.raw.bin", 0x1D380, 0xC
  /* 1D38C 1AB03C 8038E7EC */  .4byte func_ovl8_803868EC
  .incbin "ovl8.raw.bin", 0x1D390, 0x4
  /* 1D394 1AB044 8038E7F4 */  .4byte func_ovl8_803762B4
  .incbin "ovl8.raw.bin", 0x1D398, 0x4
  /* 1D39C 1AB04C 8038E7FC */  .4byte func_ovl8_803721E8
  .incbin "ovl8.raw.bin", 0x1D3A0, 0x4
  /* 1D3A4 1AB054 8038E804 */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x1D3A8, 0x4
  /* 1D3AC 1AB05C 8038E80C */  .4byte func_ovl8_80372250
  .incbin "ovl8.raw.bin", 0x1D3B0, 0x4
  /* 1D3B4 1AB064 8038E814 */  .4byte func_ovl8_803722A0
  .incbin "ovl8.raw.bin", 0x1D3B8, 0x4
  /* 1D3BC 1AB06C 8038E81C */  .4byte func_ovl8_803722F0
  .incbin "ovl8.raw.bin", 0x1D3C0, 0x4
  /* 1D3C4 1AB074 8038E824 */  .4byte func_ovl8_80372348
  .incbin "ovl8.raw.bin", 0x1D3C8, 0x4
  /* 1D3CC 1AB07C 8038E82C */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x1D3D0, 0x4
  /* 1D3D4 1AB084 8038E834 */  .4byte func_ovl8_80372360
  .incbin "ovl8.raw.bin", 0x1D3D8, 0x8

glabel D_ovl8_8038E840
  .incbin "ovl8.raw.bin", 0x1D3E0, 0xC
  /* 1D3EC 1AB09C 8038E84C */  .4byte func_ovl8_80386AFC
  .incbin "ovl8.raw.bin", 0x1D3F0, 0x4
  /* 1D3F4 1AB0A4 8038E854 */  .4byte func_ovl8_803762B4
  .incbin "ovl8.raw.bin", 0x1D3F8, 0x4
  /* 1D3FC 1AB0AC 8038E85C */  .4byte func_ovl8_80375528
  .incbin "ovl8.raw.bin", 0x1D400, 0x4
  /* 1D404 1AB0B4 8038E864 */  .4byte func_ovl8_803755C4
  .incbin "ovl8.raw.bin", 0x1D408, 0x4
  /* 1D40C 1AB0BC 8038E86C */  .4byte func_ovl8_80375864
  .incbin "ovl8.raw.bin", 0x1D410, 0x4
  /* 1D414 1AB0C4 8038E874 */  .4byte func_ovl8_803762AC
  .incbin "ovl8.raw.bin", 0x1D418, 0x4
  /* 1D41C 1AB0CC 8038E87C */  .4byte func_ovl8_80372A48
  .incbin "ovl8.raw.bin", 0x1D420, 0x4
  /* 1D424 1AB0D4 8038E884 */  .4byte func_ovl8_80372A94
  .incbin "ovl8.raw.bin", 0x1D428, 0x4
  /* 1D42C 1AB0DC 8038E88C */  .4byte func_ovl8_803764C8
  .incbin "ovl8.raw.bin", 0x1D430, 0x4
  /* 1D434 1AB0E4 8038E894 */  .4byte func_ovl8_80372D18
  .incbin "ovl8.raw.bin", 0x1D438, 0x4
  /* 1D43C 1AB0EC 8038E89C */  .4byte func_ovl8_80372D70
  .incbin "ovl8.raw.bin", 0x1D440, 0x4
  /* 1D444 1AB0F4 8038E8A4 */  .4byte func_ovl8_80372DC8
  .incbin "ovl8.raw.bin", 0x1D448, 0x4
  /* 1D44C 1AB0FC 8038E8AC */  .4byte func_ovl8_80372DD8
  .incbin "ovl8.raw.bin", 0x1D450, 0x4
  /* 1D454 1AB104 8038E8B4 */  .4byte func_ovl8_80372DE8
  .incbin "ovl8.raw.bin", 0x1D458, 0x4
  /* 1D45C 1AB10C 8038E8BC */  .4byte func_ovl8_80372E40
  .incbin "ovl8.raw.bin", 0x1D460, 0x4
  /* 1D464 1AB114 8038E8C4 */  .4byte func_ovl8_80372FEC
  .incbin "ovl8.raw.bin", 0x1D468, 0x4
  /* 1D46C 1AB11C 8038E8CC */  .4byte func_ovl8_80373044
  .incbin "ovl8.raw.bin", 0x1D470, 0x4
  /* 1D474 1AB124 8038E8D4 */  .4byte func_ovl8_803866AC
  .incbin "ovl8.raw.bin", 0x1D478, 0x4
  /* 1D47C 1AB12C 8038E8DC */  .4byte func_ovl8_80373118
  .incbin "ovl8.raw.bin", 0x1D480, 0x4
  /* 1D484 1AB134 8038E8E4 */  .4byte func_ovl8_80373138
  .incbin "ovl8.raw.bin", 0x1D488, 0x4
  /* 1D48C 1AB13C 8038E8EC */  .4byte func_ovl8_803732B0
  .incbin "ovl8.raw.bin", 0x1D490, 0x4
  /* 1D494 1AB144 8038E8F4 */  .4byte func_ovl8_803868C0
  .incbin "ovl8.raw.bin", 0x1D498, 0x8

glabel D_ovl8_8038E900
  .incbin "ovl8.raw.bin", 0x1D4A0, 0xC
  /* 1D4AC 1AB15C 8038E90C */  .4byte func_ovl8_80386AFC
  .incbin "ovl8.raw.bin", 0x1D4B0, 0x4
  /* 1D4B4 1AB164 8038E914 */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x1D4B8, 0x4
  /* 1D4BC 1AB16C 8038E91C */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x1D4C0, 0x4
  /* 1D4C4 1AB174 8038E924 */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x1D4C8, 0x4
  /* 1D4CC 1AB17C 8038E92C */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x1D4D0, 0x4
  /* 1D4D4 1AB184 8038E934 */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x1D4D8, 0x4
  /* 1D4DC 1AB18C 8038E93C */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x1D4E0, 0x4
  /* 1D4E4 1AB194 8038E944 */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x1D4E8, 0x4
  /* 1D4EC 1AB19C 8038E94C */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x1D4F0, 0x4
  /* 1D4F4 1AB1A4 8038E954 */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x1D4F8, 0x4
  /* 1D4FC 1AB1AC 8038E95C */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x1D500, 0x4
  /* 1D504 1AB1B4 8038E964 */  .4byte func_ovl8_803762B4
  .incbin "ovl8.raw.bin", 0x1D508, 0x4
  /* 1D50C 1AB1BC 8038E96C */  .4byte func_ovl8_803868C0
  .incbin "ovl8.raw.bin", 0x1D510, 0x4
  /* 1D514 1AB1C4 8038E974 */  .4byte func_ovl8_80372A94
  .incbin "ovl8.raw.bin", 0x1D518, 0x4
  /* 1D51C 1AB1CC 8038E97C */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x1D520, 0x4
  /* 1D524 1AB1D4 8038E984 */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x1D528, 0x4
  /* 1D52C 1AB1DC 8038E98C */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x1D530, 0x4
  /* 1D534 1AB1E4 8038E994 */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x1D538, 0x4
  /* 1D53C 1AB1EC 8038E99C */  .4byte func_ovl8_803764C8
  .incbin "ovl8.raw.bin", 0x1D540, 0x4
  /* 1D544 1AB1F4 8038E9A4 */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x1D548, 0x4
  /* 1D54C 1AB1FC 8038E9AC */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x1D550, 0x4
  /* 1D554 1AB204 8038E9B4 */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x1D558, 0x4
  /* 1D55C 1AB20C 8038E9BC */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x1D560, 0x4
  /* 1D564 1AB214 8038E9C4 */  .4byte func_ovl8_80371D00
  .incbin "ovl8.raw.bin", 0x1D568, 0x4
  /* 1D56C 1AB21C 8038E9CC */  .4byte func_ovl8_80372D70
  .incbin "ovl8.raw.bin", 0x1D570, 0x4
  /* 1D574 1AB224 8038E9D4 */  .4byte func_ovl8_80372DC8
  .incbin "ovl8.raw.bin", 0x1D578, 0x4
  /* 1D57C 1AB22C 8038E9DC */  .4byte func_ovl8_80372D18
  .incbin "ovl8.raw.bin", 0x1D580, 0x4
  /* 1D584 1AB234 8038E9E4 */  .4byte func_ovl8_80372DD8
  .incbin "ovl8.raw.bin", 0x1D588, 0x4
  /* 1D58C 1AB23C 8038E9EC */  .4byte func_ovl8_80373118
  .incbin "ovl8.raw.bin", 0x1D590, 0x4
  /* 1D594 1AB244 8038E9F4 */  .4byte func_ovl8_80373138
  .incbin "ovl8.raw.bin", 0x1D598, 0x4
  /* 1D59C 1AB24C 8038E9FC */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x1D5A0, 0x4
  /* 1D5A4 1AB254 8038EA04 */  .4byte func_ovl8_80371DEC
  .incbin "ovl8.raw.bin", 0x1D5A8, 0x4
  /* 1D5AC 1AB25C 8038EA0C */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x1D5B0, 0x4
  /* 1D5B4 1AB264 8038EA14 */  .4byte func_ovl8_80372DE8
  .incbin "ovl8.raw.bin", 0x1D5B8, 0x4
  /* 1D5BC 1AB26C 8038EA1C */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x1D5C0, 0x4
  /* 1D5C4 1AB274 8038EA24 */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x1D5C8, 0x4
  /* 1D5CC 1AB27C 8038EA2C */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x1D5D0, 0x4
  /* 1D5D4 1AB284 8038EA34 */  .4byte func_ovl8_803732B0
  .incbin "ovl8.raw.bin", 0x1D5D8, 0x4
  /* 1D5DC 1AB28C 8038EA3C */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x1D5E0, 0x4
  /* 1D5E4 1AB294 8038EA44 */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x1D5E8, 0x4
  /* 1D5EC 1AB29C 8038EA4C */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x1D5F0, 0x8

glabel D_ovl8_8038EA58
  .incbin "ovl8.raw.bin", 0x1D5F8, 0xC
  /* 1D604 1AB2B4 8038EA64 */  .4byte func_ovl8_80386AFC
  .incbin "ovl8.raw.bin", 0x1D608, 0x4
  /* 1D60C 1AB2BC 8038EA6C */  .4byte func_ovl8_803866AC
  .incbin "ovl8.raw.bin", 0x1D610, 0x4
  /* 1D614 1AB2C4 8038EA74 */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x1D618, 0x8

glabel D_ovl8_8038EA80
  .incbin "ovl8.raw.bin", 0x1D620, 0xC
  /* 1D62C 1AB2DC 8038EA8C */  .4byte func_ovl8_80386AFC
  .incbin "ovl8.raw.bin", 0x1D630, 0x4
  /* 1D634 1AB2E4 8038EA94 */  .4byte func_ovl8_803762B4
  .incbin "ovl8.raw.bin", 0x1D638, 0x4
  /* 1D63C 1AB2EC 8038EA9C */  .4byte func_ovl8_803721E8
  .incbin "ovl8.raw.bin", 0x1D640, 0x4
  /* 1D644 1AB2F4 8038EAA4 */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x1D648, 0x4
  /* 1D64C 1AB2FC 8038EAAC */  .4byte func_ovl8_80372250
  .incbin "ovl8.raw.bin", 0x1D650, 0x4
  /* 1D654 1AB304 8038EAB4 */  .4byte func_ovl8_803722A0
  .incbin "ovl8.raw.bin", 0x1D658, 0x4
  /* 1D65C 1AB30C 8038EABC */  .4byte func_ovl8_803722F0
  .incbin "ovl8.raw.bin", 0x1D660, 0x4
  /* 1D664 1AB314 8038EAC4 */  .4byte func_ovl8_80372348
  .incbin "ovl8.raw.bin", 0x1D668, 0x4
  /* 1D66C 1AB31C 8038EACC */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x1D670, 0x4
  /* 1D674 1AB324 8038EAD4 */  .4byte func_ovl8_80372360
  .incbin "ovl8.raw.bin", 0x1D678, 0x8

glabel D_ovl8_8038EAE0
  .incbin "ovl8.raw.bin", 0x1D680, 0xC
  /* 1D68C 1AB33C 8038EAEC */  .4byte func_ovl8_80387AF8
  .incbin "ovl8.raw.bin", 0x1D690, 0x4
  /* 1D694 1AB344 8038EAF4 */  .4byte func_ovl8_80373640
  .incbin "ovl8.raw.bin", 0x1D698, 0x4
  /* 1D69C 1AB34C 8038EAFC */  .4byte func_ovl8_80387C24
  .incbin "ovl8.raw.bin", 0x1D6A0, 0x4
  /* 1D6A4 1AB354 8038EB04 */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1D6A8, 0x4
  /* 1D6AC 1AB35C 8038EB0C */  .4byte func_ovl8_8037367C
  .incbin "ovl8.raw.bin", 0x1D6B0, 0x4
  /* 1D6B4 1AB364 8038EB14 */  .4byte func_ovl8_80373684
  .incbin "ovl8.raw.bin", 0x1D6B8, 0x4
  /* 1D6BC 1AB36C 8038EB1C */  .4byte func_ovl8_8037368C
  .incbin "ovl8.raw.bin", 0x1D6C0, 0x4
  /* 1D6C4 1AB374 8038EB24 */  .4byte func_ovl8_80387BF0
  .incbin "ovl8.raw.bin", 0x1D6C8, 0x4
  /* 1D6CC 1AB37C 8038EB2C */  .4byte func_ovl8_80373750
  .incbin "ovl8.raw.bin", 0x1D6D0, 0x4
  /* 1D6D4 1AB384 8038EB34 */  .4byte func_ovl8_80373790
  .incbin "ovl8.raw.bin", 0x1D6D8, 0x4
  /* 1D6DC 1AB38C 8038EB3C */  .4byte func_ovl8_803737DC
  .incbin "ovl8.raw.bin", 0x1D6E0, 0x4
  /* 1D6E4 1AB394 8038EB44 */  .4byte func_ovl8_80387BD0
  .incbin "ovl8.raw.bin", 0x1D6E8, 0x4
  /* 1D6EC 1AB39C 8038EB4C */  .4byte func_ovl8_80373EA8
  .incbin "ovl8.raw.bin", 0x1D6F0, 0x4
  /* 1D6F4 1AB3A4 8038EB54 */  .4byte func_ovl8_80373930
  .incbin "ovl8.raw.bin", 0x1D6F8, 0x4
  /* 1D6FC 1AB3AC 8038EB5C */  .4byte func_ovl8_80373980
  .incbin "ovl8.raw.bin", 0x1D700, 0x4
  /* 1D704 1AB3B4 8038EB64 */  .4byte func_ovl8_80373988
  .incbin "ovl8.raw.bin", 0x1D708, 0x4
  /* 1D70C 1AB3BC 8038EB6C */  .4byte func_ovl8_80373990
  .incbin "ovl8.raw.bin", 0x1D710, 0x4
  /* 1D714 1AB3C4 8038EB74 */  .4byte func_ovl8_80373A28
  .incbin "ovl8.raw.bin", 0x1D718, 0x4
  /* 1D71C 1AB3CC 8038EB7C */  .4byte func_ovl8_80373ABC
  .incbin "ovl8.raw.bin", 0x1D720, 0x4
  /* 1D724 1AB3D4 8038EB84 */  .4byte func_ovl8_80373AC4
  .incbin "ovl8.raw.bin", 0x1D728, 0x4
  /* 1D72C 1AB3DC 8038EB8C */  .4byte func_ovl8_80373B28
  .incbin "ovl8.raw.bin", 0x1D730, 0x4
  /* 1D734 1AB3E4 8038EB94 */  .4byte func_ovl8_80373B84
  .incbin "ovl8.raw.bin", 0x1D738, 0x4
  /* 1D73C 1AB3EC 8038EB9C */  .4byte func_ovl8_803743D8
  .incbin "ovl8.raw.bin", 0x1D740, 0x4
  /* 1D744 1AB3F4 8038EBA4 */  .4byte func_ovl8_80373BD4
  .incbin "ovl8.raw.bin", 0x1D748, 0x4
  /* 1D74C 1AB3FC 8038EBAC */  .4byte func_ovl8_803743C0
  .incbin "ovl8.raw.bin", 0x1D750, 0x4
  /* 1D754 1AB404 8038EBB4 */  .4byte func_ovl8_8037CA48
  .incbin "ovl8.raw.bin", 0x1D758, 0x8

glabel D_ovl8_8038EBC0
  .incbin "ovl8.raw.bin", 0x1D760, 0xC
  /* 1D76C 1AB41C 8038EBCC */  .4byte func_ovl8_80387AF8
  .incbin "ovl8.raw.bin", 0x1D770, 0x4
  /* 1D774 1AB424 8038EBD4 */  .4byte func_ovl8_803718FC
  .incbin "ovl8.raw.bin", 0x1D778, 0x4
  /* 1D77C 1AB42C 8038EBDC */  .4byte func_ovl8_80371930
  .incbin "ovl8.raw.bin", 0x1D780, 0x4
  /* 1D784 1AB434 8038EBE4 */  .4byte func_ovl8_80371960
  .incbin "ovl8.raw.bin", 0x1D788, 0x4
  /* 1D78C 1AB43C 8038EBEC */  .4byte func_ovl8_80371968
  .incbin "ovl8.raw.bin", 0x1D790, 0x4
  /* 1D794 1AB444 8038EBF4 */  .4byte func_ovl8_80371970
  .incbin "ovl8.raw.bin", 0x1D798, 0x4
  /* 1D79C 1AB44C 8038EBFC */  .4byte func_ovl8_80371978
  .incbin "ovl8.raw.bin", 0x1D7A0, 0x4
  /* 1D7A4 1AB454 8038EC04 */  .4byte func_ovl8_80371980
  .incbin "ovl8.raw.bin", 0x1D7A8, 0x4
  /* 1D7AC 1AB45C 8038EC0C */  .4byte func_ovl8_803719A4
  .incbin "ovl8.raw.bin", 0x1D7B0, 0x4
  /* 1D7B4 1AB464 8038EC14 */  .4byte func_ovl8_803719C8
  .incbin "ovl8.raw.bin", 0x1D7B8, 0x4
  /* 1D7BC 1AB46C 8038EC1C */  .4byte func_ovl8_80371A2C
  .incbin "ovl8.raw.bin", 0x1D7C0, 0x4
  /* 1D7C4 1AB474 8038EC24 */  .4byte func_ovl8_80387C24
  .incbin "ovl8.raw.bin", 0x1D7C8, 0x4
  /* 1D7CC 1AB47C 8038EC2C */  .4byte func_ovl8_80371AC4
  .incbin "ovl8.raw.bin", 0x1D7D0, 0x4
  /* 1D7D4 1AB484 8038EC34 */  .4byte func_ovl8_80371ACC
  .incbin "ovl8.raw.bin", 0x1D7D8, 0x4
  /* 1D7DC 1AB48C 8038EC3C */  .4byte func_ovl8_80371AD8
  .incbin "ovl8.raw.bin", 0x1D7E0, 0x4
  /* 1D7E4 1AB494 8038EC44 */  .4byte func_ovl8_80371B34
  .incbin "ovl8.raw.bin", 0x1D7E8, 0x4
  /* 1D7EC 1AB49C 8038EC4C */  .4byte func_ovl8_80371B98
  .incbin "ovl8.raw.bin", 0x1D7F0, 0x4
  /* 1D7F4 1AB4A4 8038EC54 */  .4byte func_ovl8_80371BCC
  .incbin "ovl8.raw.bin", 0x1D7F8, 0x4
  /* 1D7FC 1AB4AC 8038EC5C */  .4byte func_ovl8_80373650
  .incbin "ovl8.raw.bin", 0x1D800, 0x4
  /* 1D804 1AB4B4 8038EC64 */  .4byte func_ovl8_80371C2C
  .incbin "ovl8.raw.bin", 0x1D808, 0x4
  /* 1D80C 1AB4BC 8038EC6C */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x1D810, 0x4
  /* 1D814 1AB4C4 8038EC74 */  .4byte func_ovl8_80371C8C
  .incbin "ovl8.raw.bin", 0x1D818, 0x4
  /* 1D81C 1AB4CC 8038EC7C */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x1D820, 0x4
  /* 1D824 1AB4D4 8038EC84 */  .4byte func_ovl8_80373640
  .incbin "ovl8.raw.bin", 0x1D828, 0x4
  /* 1D82C 1AB4DC 8038EC8C */  .4byte func_ovl8_80371D08
  .incbin "ovl8.raw.bin", 0x1D830, 0x4
  /* 1D834 1AB4E4 8038EC94 */  .4byte func_ovl8_80371D64
  .incbin "ovl8.raw.bin", 0x1D838, 0x4
  /* 1D83C 1AB4EC 8038EC9C */  .4byte func_ovl8_80371D74
  .incbin "ovl8.raw.bin", 0x1D840, 0x4
  /* 1D844 1AB4F4 8038ECA4 */  .4byte func_ovl8_80371DC0
  .incbin "ovl8.raw.bin", 0x1D848, 0x4
  /* 1D84C 1AB4FC 8038ECAC */  .4byte func_ovl8_80371DD0
  .incbin "ovl8.raw.bin", 0x1D850, 0x4
  /* 1D854 1AB504 8038ECB4 */  .4byte func_ovl8_80371DDC
  .incbin "ovl8.raw.bin", 0x1D858, 0x4
  /* 1D85C 1AB50C 8038ECBC */  .4byte func_ovl8_80371DE4
  .incbin "ovl8.raw.bin", 0x1D860, 0x4
  /* 1D864 1AB514 8038ECC4 */  .4byte func_ovl8_803726CC
  .incbin "ovl8.raw.bin", 0x1D868, 0x4
  /* 1D86C 1AB51C 8038ECCC */  .4byte func_ovl8_80371DF4
  .incbin "ovl8.raw.bin", 0x1D870, 0x4
  /* 1D874 1AB524 8038ECD4 */  .4byte func_ovl8_80371DFC
  .incbin "ovl8.raw.bin", 0x1D878, 0x4
  /* 1D87C 1AB52C 8038ECDC */  .4byte func_ovl8_80371E04
  .incbin "ovl8.raw.bin", 0x1D880, 0x4
  /* 1D884 1AB534 8038ECE4 */  .4byte func_ovl8_80371E0C
  .incbin "ovl8.raw.bin", 0x1D888, 0x4
  /* 1D88C 1AB53C 8038ECEC */  .4byte func_ovl8_80371E14
  .incbin "ovl8.raw.bin", 0x1D890, 0x4
  /* 1D894 1AB544 8038ECF4 */  .4byte func_ovl8_80371E1C
  .incbin "ovl8.raw.bin", 0x1D898, 0x4
  /* 1D89C 1AB54C 8038ECFC */  .4byte func_ovl8_80371E24
  .incbin "ovl8.raw.bin", 0x1D8A0, 0x4
  /* 1D8A4 1AB554 8038ED04 */  .4byte func_ovl8_80371E2C
  .incbin "ovl8.raw.bin", 0x1D8A8, 0x4
  /* 1D8AC 1AB55C 8038ED0C */  .4byte func_ovl8_80371E58
  .incbin "ovl8.raw.bin", 0x1D8B0, 0x8

glabel D_ovl8_8038ED18
  .incbin "ovl8.raw.bin", 0x1D8B8, 0xC
  /* 1D8C4 1AB574 8038ED24 */  .4byte func_ovl8_80387AF8
  .incbin "ovl8.raw.bin", 0x1D8C8, 0x4
  /* 1D8CC 1AB57C 8038ED2C */  .4byte func_ovl8_8037C344
  .incbin "ovl8.raw.bin", 0x1D8D0, 0x4
  /* 1D8D4 1AB584 8038ED34 */  .4byte func_ovl8_8037C358
  .incbin "ovl8.raw.bin", 0x1D8D8, 0x8

glabel D_ovl8_8038ED40
  .incbin "ovl8.raw.bin", 0x1D8E0, 0xC
  /* 1D8EC 1AB59C 8038ED4C */  .4byte func_ovl8_80387AF8
  .incbin "ovl8.raw.bin", 0x1D8F0, 0x4
  /* 1D8F4 1AB5A4 8038ED54 */  .4byte func_ovl8_80387C24
  .incbin "ovl8.raw.bin", 0x1D8F8, 0x4
  /* 1D8FC 1AB5AC 8038ED5C */  .4byte func_ovl8_803721E8
  .incbin "ovl8.raw.bin", 0x1D900, 0x4
  /* 1D904 1AB5B4 8038ED64 */  .4byte func_ovl8_80372224
  .incbin "ovl8.raw.bin", 0x1D908, 0x4
  /* 1D90C 1AB5BC 8038ED6C */  .4byte func_ovl8_80372250
  .incbin "ovl8.raw.bin", 0x1D910, 0x4
  /* 1D914 1AB5C4 8038ED74 */  .4byte func_ovl8_803722A0
  .incbin "ovl8.raw.bin", 0x1D918, 0x4
  /* 1D91C 1AB5CC 8038ED7C */  .4byte func_ovl8_803722F0
  .incbin "ovl8.raw.bin", 0x1D920, 0x4
  /* 1D924 1AB5D4 8038ED84 */  .4byte func_ovl8_80372348
  .incbin "ovl8.raw.bin", 0x1D928, 0x4
  /* 1D92C 1AB5DC 8038ED8C */  .4byte func_ovl8_80372358
  .incbin "ovl8.raw.bin", 0x1D930, 0x4
  /* 1D934 1AB5E4 8038ED94 */  .4byte func_ovl8_80372360
  .incbin "ovl8.raw.bin", 0x1D938, 0x4
  /* 1D93C 1AB5EC 8038ED9C */  .4byte func_ovl8_803726CC
  .incbin "ovl8.raw.bin", 0x1D940, 0x8

glabel D_ovl8_8038EDA8
  .incbin "ovl8.raw.bin", 0x1D948, 0xC
  /* 1D954 1AB604 8038EDB4 */  .4byte func_ovl8_80387AF8
  .incbin "ovl8.raw.bin", 0x1D958, 0x4
  /* 1D95C 1AB60C 8038EDBC */  .4byte func_ovl8_80381A58
  .incbin "ovl8.raw.bin", 0x1D960, 0x4
  /* 1D964 1AB614 8038EDC4 */  .4byte func_ovl8_803819F4
  .incbin "ovl8.raw.bin", 0x1D968, 0x4
  /* 1D96C 1AB61C 8038EDCC */  .4byte func_ovl8_80381A88
  .incbin "ovl8.raw.bin", 0x1D970, 0x4
  /* 1D974 1AB624 8038EDD4 */  .4byte func_ovl8_80381308
  .incbin "ovl8.raw.bin", 0x1D978, 0x4
  /* 1D97C 1AB62C 8038EDDC */  .4byte func_ovl8_80381AF0
  .incbin "ovl8.raw.bin", 0x1D980, 0x4
  /* 1D984 1AB634 8038EDE4 */  .4byte func_ovl8_80381B04
  .incbin "ovl8.raw.bin", 0x1D988, 0x4
  /* 1D98C 1AB63C 8038EDEC */  .4byte func_ovl8_8038185C
  .incbin "ovl8.raw.bin", 0x1D990, 0x4
  /* 1D994 1AB644 8038EDF4 */  .4byte func_ovl8_80381908
  .incbin "ovl8.raw.bin", 0x1D998, 0x8

glabel D_ovl8_8038EE00
  /* 1D9A0 1AB650 8038EE00 */
  .8byte 0x406fe00000000000 # .double 255.0

glabel jtbl_ovl8_8038EE08
  /* 1D9A8 1AB658 8038EE08 */  .4byte jtgt_ovl8_80377ACC
  /* 1D9AC 1AB65C 8038EE0C */  .4byte jtgt_ovl8_8037741C
  /* 1D9B0 1AB660 8038EE10 */  .4byte jtgt_ovl8_8037762C
  /* 1D9B4 1AB664 8038EE14 */  .4byte jtgt_ovl8_80377884

glabel D_ovl8_8038EE18
  /* 1D9B8 1AB668 8038EE18 */  .4byte jtgt_ovl8_803787B0
  /* 1D9BC 1AB66C 8038EE1C */  .4byte jtgt_ovl8_803781E0
  /* 1D9C0 1AB670 8038EE20 */  .4byte jtgt_ovl8_803783A0
  /* 1D9C4 1AB674 8038EE24 */  .4byte jtgt_ovl8_803785AC

glabel D_ovl8_8038EE28
  /* 1D9C8 1AB678 8038EE28 */  .4byte jtgt_ovl8_80379870
  /* 1D9CC 1AB67C 8038EE2C */  .4byte jtgt_ovl8_803790D4
  /* 1D9D0 1AB680 8038EE30 */  .4byte jtgt_ovl8_80379330
  /* 1D9D4 1AB684 8038EE34 */  .4byte jtgt_ovl8_803795D8

glabel D_ovl8_8038EE38
  /* 1D9D8 1AB688 8038EE38 */  .4byte jtgt_ovl8_8037A0F0
  /* 1D9DC 1AB68C 8038EE3C */  .4byte jtgt_ovl8_80379DB0
  /* 1D9E0 1AB690 8038EE40 */  .4byte jtgt_ovl8_80379EAC
  /* 1D9E4 1AB694 8038EE44 */  .4byte jtgt_ovl8_80379FD0
  .incbin "ovl8.raw.bin", 0x1D9E8, 0x8

glabel D_ovl8_8038EE50
  /* 1D9F0 1AB6A0 8038EE50 */
  .4byte 0x3dcccccd # .float 0.1
  .incbin "ovl8.raw.bin", 0x1D9F4, 0xC
