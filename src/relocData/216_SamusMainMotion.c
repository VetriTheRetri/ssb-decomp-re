/* ftMotionCommand script data for relocData file 216 (SamusMainMotion) */
/* File size: 7872 bytes (0x1EC0) */

#include "relocdata_types.h"
#include <ft/ftdef.h>

u32 dSamusMainMotion[1968] = {
	0xA8000000, /* word 0 (0x0000) ftMotionCommandHideModelPartAll() */
	0xA0300001, /* word 1 (0x0004) ftMotionCommandSetModelPartID(6, 1) */
	0x7C300000, /* word 2 (0x0008) SetDamageCollPartID(6, 0, 25, -8, 200, 260, 150) */
	0x00000019,
	0xFFF800C8,
	0x01040096,
	0x70280003, /* word 6 (0x0018) ftMotionCommandSetHitStatusPartID(5, 3) */
	0x70680003, /* word 7 (0x001C) ftMotionCommandSetHitStatusPartID(13, 3) */
	0x70780003, /* word 8 (0x0020) ftMotionCommandSetHitStatusPartID(15, 3) */
	0x70400003, /* word 9 (0x0024) ftMotionCommandSetHitStatusPartID(8, 3) */
	0x70800003, /* word 10 (0x0028) ftMotionCommandSetHitStatusPartID(16, 3) */
	0x70480003, /* word 11 (0x002C) ftMotionCommandSetHitStatusPartID(9, 3) */
	0x71000003, /* word 12 (0x0030) ftMotionCommandSetHitStatusPartID(32, 3) */
	0x70D80003, /* word 13 (0x0034) ftMotionCommandSetHitStatusPartID(27, 3) */
	0x71080003, /* word 14 (0x0038) ftMotionCommandSetHitStatusPartID(33, 3) */
	0x70E00003, /* word 15 (0x003C) ftMotionCommandSetHitStatusPartID(28, 3) */
	0x8C000000, /* word 16 (0x0040) ftMotionCommandReturn() */
	0xA0300002, /* word 17 (0x0044) ftMotionCommandSetModelPartID(6, 2) */
	0x7C300000, /* word 18 (0x0048) SetDamageCollPartID(6, 0, 25, -8, 130, 130, 130) */
	0x00000019,
	0xFFF80082,
	0x00820082,
	0x8C000000, /* word 22 (0x0058) ftMotionCommandReturn() */
	0xA0300001, /* word 23 (0x005C) ftMotionCommandSetModelPartID(6, 1) */
	0x7C300000, /* word 24 (0x0060) SetDamageCollPartID(6, 0, 25, -8, 200, 260, 150) */
	0x00000019,
	0xFFF800C8,
	0x01040096,
	0x8C000000, /* word 28 (0x0070) ftMotionCommandReturn() */
	0xA4000000, /* word 29 (0x0074) ftMotionCommandResetModelPartAll() */
	0x78000000, /* word 30 (0x0078) ftMotionCommandResetDamageCollPartAll() */
	0x6C000001, /* word 31 (0x007C) ftMotionCommandSetHitStatusPartAll(1) */
	0x8C000000, /* word 32 (0x0080) ftMotionCommandReturn() */
	0xBC000003, /* word 33 (0x0084) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 34 (0x0088) ftMotionCommandEnd() */
	0xBC000003, /* word 35 (0x008C) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 36 (0x0090) ftMotionCommandEnd() */
	0xBC000003, /* word 37 (0x0094) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 38 (0x0098) ftMotionCommandEnd() */
	0xBC000003, /* word 39 (0x009C) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 40 (0x00A0) ftMotionCommandEnd() */
	0xBC000003, /* word 41 (0x00A4) ftMotionCommandSetSlopeContour(3) */
	0x3800007F, /* word 42 (0x00A8) ftMotionPlayFGM(127) */
	0x80000002, /* word 43 (0x00AC) ftMotionCommandLoopBegin(2) */
	0x98002C00, /* word 44 (0x00B0) Effect(0, 11, 0, 0, 0, -120, 0, 60, 0) */
	0x00000000,
	0xFF880000,
	0x003C0000,
	0x04000006, /* word 48 (0x00C0) ftMotionCommandWait(6) */
	0x84000000, /* word 49 (0x00C4) ftMotionCommandLoopEnd() */
	0x00000000, /* word 50 (0x00C8) ftMotionCommandEnd() */
	0xBC000003, /* word 51 (0x00CC) ftMotionCommandSetSlopeContour(3) */
	0x38000072, /* word 52 (0x00D0) ftMotionPlayFGM(114) */
	0x98002C00, /* word 53 (0x00D4) Effect(0, 11, 0, 0, 0, 60, 0, 0, 0) */
	0x00000000,
	0x003C0000,
	0x00000000,
	0x0400000C, /* word 57 (0x00E4) ftMotionCommandWait(12) */
	0x38000072, /* word 58 (0x00E8) ftMotionPlayFGM(114) */
	0x98002C00, /* word 59 (0x00EC) Effect(0, 11, 0, 0, 0, 60, 0, 0, 0) */
	0x00000000,
	0x003C0000,
	0x00000000,
	0x94000000, /* word 63 (0x00FC) ftMotionCommandPauseScript() */
	0x90000000, /* word 64 (0x0100) Goto */
	0x00A60033, /* -> word 51 (0x00CC) */
	0xBC000003, /* word 66 (0x0108) ftMotionCommandSetSlopeContour(3) */
	0x38000080, /* word 67 (0x010C) ftMotionPlayFGM(128) */
	0x98002C00, /* word 68 (0x0110) Effect(0, 11, 0, 0, 0, 60, 0, 0, 0) */
	0x00000000,
	0x003C0000,
	0x00000000,
	0x00000000, /* word 72 (0x0120) ftMotionCommandEnd() */
	0xBC000003, /* word 73 (0x0124) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 74 (0x0128) ftMotionCommandWaitAsync(4) */
	0x58000001, /* word 75 (0x012C) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 76 (0x0130) ftMotionCommandEnd() */
	0x98004000, /* word 77 (0x0134) Effect(0, 16, 0, 0, 0, 100, 0, 0, 0) */
	0x00000000,
	0x00640000,
	0x00000000,
	0x0800000F, /* word 81 (0x0144) ftMotionCommandWaitAsync(15) */
	0x58000001, /* word 82 (0x0148) ftMotionCommandSetFlag1(1) */
	0x5C000001, /* word 83 (0x014C) ftMotionCommandSetFlag2(1) */
	0x98002C00, /* word 84 (0x0150) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 88 (0x0160) ftMotionCommandEnd() */
	0x74000003, /* word 89 (0x0164) ftMotionCommandSetHitStatusAll(3) */
	0x08000002, /* word 90 (0x0168) ftMotionCommandWaitAsync(2) */
	0x74000001, /* word 91 (0x016C) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 92 (0x0170) ftMotionCommandEnd() */
	0x38000067, /* word 93 (0x0174) ftMotionPlayFGM(103) */
	0x98003400, /* word 94 (0x0178) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 98 (0x0188) ftMotionCommandEnd() */
	0x3800005C, /* word 99 (0x018C) ftMotionPlayFGM(92) */
	0x80000002, /* word 100 (0x0190) ftMotionCommandLoopBegin(2) */
	0x98002C00, /* word 101 (0x0194) Effect(0, 11, 0, 0, 0, 0, 100, 100, 100) */
	0x00000000,
	0x00000064,
	0x00640064,
	0x04000006, /* word 105 (0x01A4) ftMotionCommandWait(6) */
	0x84000000, /* word 106 (0x01A8) ftMotionCommandLoopEnd() */
	0x00000000, /* word 107 (0x01AC) ftMotionCommandEnd() */
	0xBC000003, /* word 108 (0x01B0) ftMotionCommandSetSlopeContour(3) */
	0x38000051, /* word 109 (0x01B4) ftMotionPlayFGM(81) */
	0x98002C00, /* word 110 (0x01B8) Effect(0, 11, 0, 0, 0, -60, 0, 0, 0) */
	0x00000000,
	0xFFC40000,
	0x00000000,
	0x00000000, /* word 114 (0x01C8) ftMotionCommandEnd() */
	0xBC000003, /* word 115 (0x01CC) ftMotionCommandSetSlopeContour(3) */
	0x38000051, /* word 116 (0x01D0) ftMotionPlayFGM(81) */
	0x98003400, /* word 117 (0x01D4) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 121 (0x01E4) ftMotionCommandEnd() */
	0x3800027F, /* word 122 (0x01E8) ftMotionPlayFGM(639) */
	0x00000000, /* word 123 (0x01EC) ftMotionCommandEnd() */
	0x3800027F, /* word 124 (0x01F0) ftMotionPlayFGM(639) */
	0x74000003, /* word 125 (0x01F4) ftMotionCommandSetHitStatusAll(3) */
	0x08000002, /* word 126 (0x01F8) ftMotionCommandWaitAsync(2) */
	0x74000001, /* word 127 (0x01FC) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 128 (0x0200) ftMotionCommandEnd() */
	0x34000000, /* word 129 (0x0204) SetDamageThrown */
	0x025901D6, /* extern -> 0x758 */
	0x00000000, /* word 131 (0x020C) ftMotionCommandEnd() */
	0x38000051, /* word 132 (0x0210) ftMotionPlayFGM(81) */
	0x98003400, /* word 133 (0x0214) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 137 (0x0224) ftMotionCommandEnd() */
	0xBC000001, /* word 138 (0x0228) ftMotionCommandSetSlopeContour(1) */
	0x00000000, /* word 139 (0x022C) ftMotionCommandEnd() */
	0xBC000001, /* word 140 (0x0230) ftMotionCommandSetSlopeContour(1) */
	0x00000000, /* word 141 (0x0234) ftMotionCommandEnd() */
	0xBC000001, /* word 142 (0x0238) ftMotionCommandSetSlopeContour(1) */
	0x00000000, /* word 143 (0x023C) ftMotionCommandEnd() */
	0x08000008, /* word 144 (0x0240) ftMotionCommandWaitAsync(8) */
	0x74000003, /* word 145 (0x0244) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 146 (0x0248) ftMotionCommandEnd() */
	0x08000018, /* word 147 (0x024C) ftMotionCommandWaitAsync(24) */
	0x74000001, /* word 148 (0x0250) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 149 (0x0254) ftMotionCommandEnd() */
	0xBC000004, /* word 150 (0x0258) ftMotionCommandSetSlopeContour(4) */
	0x98003400, /* word 151 (0x025C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x9BF88400, /* word 155 (0x026C) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x04000002, /* word 159 (0x027C) ftMotionCommandWait(2) */
	0xBC000000, /* word 160 (0x0280) ftMotionCommandSetSlopeContour(0) */
	0x08000018, /* word 161 (0x0284) ftMotionCommandWaitAsync(24) */
	0xBC000004, /* word 162 (0x0288) ftMotionCommandSetSlopeContour(4) */
	0x04000001, /* word 163 (0x028C) ftMotionCommandWait(1) */
	0x00000000, /* word 164 (0x0290) ftMotionCommandEnd() */
	0x90000000, /* word 165 (0x0294) Goto */
	0x00B60096, /* -> word 150 (0x0258) */
	0x98002C00, /* word 167 (0x029C) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 171 (0x02AC) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 172 (0x02B0) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 173 (0x02B4) ftMotionCommandSetHitStatusAll(1) */
	0x8C000000, /* word 174 (0x02B8) ftMotionCommandReturn() */
	0x74000003, /* word 175 (0x02BC) ftMotionCommandSetHitStatusAll(3) */
	0x08000018, /* word 176 (0x02C0) ftMotionCommandWaitAsync(24) */
	0x74000001, /* word 177 (0x02C4) ftMotionCommandSetHitStatusAll(1) */
	0x04000002, /* word 178 (0x02C8) ftMotionCommandWait(2) */
	0x58000001, /* word 179 (0x02CC) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 180 (0x02D0) ftMotionCommandEnd() */
	0x90000000, /* word 181 (0x02D4) Goto */
	0x00B900AF, /* -> word 175 (0x02BC) */
	0x3800000B, /* word 183 (0x02DC) ftMotionPlayFGM(11) */
	0x88000000, /* word 184 (0x02E0) Subroutine */
	0x00BC00A7, /* -> word 167 (0x029C) */
	0x00000000, /* word 186 (0x02E8) ftMotionCommandEnd() */
	0x90000000, /* word 187 (0x02EC) Goto */
	0x00BE00B7, /* -> word 183 (0x02DC) */
	0x90000000, /* word 189 (0x02F4) Goto */
	0x00C000B7, /* -> word 183 (0x02DC) */
	0x90000000, /* word 191 (0x02FC) Goto */
	0x012000B7, /* -> word 183 (0x02DC) */
	0x74000003, /* word 193 (0x0304) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 194 (0x0308) ftMotionCommandWaitAsync(20) */
	0x98003400, /* word 195 (0x030C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x0C0420C0, /* word 199 (0x031C) MakeAttackColl(0, 0, 33, 6, 0, 0, 200, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0) */
	0x00C80096,
	0x00000000,
	0x5A46416B,
	0x01220000,
	0x0C8420C0, /* word 204 (0x0330) MakeAttackColl(1, 0, 33, 6, 0, 0, 160, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0) */
	0x00A00000,
	0x00000000,
	0x5A46416B,
	0x01220000,
	0x04000002, /* word 209 (0x0344) ftMotionCommandWait(2) */
	0x18000000, /* word 210 (0x0348) ftMotionCommandClearAttackCollAll() */
	0x04000001, /* word 211 (0x034C) ftMotionCommandWait(1) */
	0x0C0420C0, /* word 212 (0x0350) MakeAttackColl(0, 0, 33, 6, 0, 0, 200, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0) */
	0x00C80096,
	0x00000000,
	0x5A46416B,
	0x01220000,
	0x0C8420C0, /* word 217 (0x0364) MakeAttackColl(1, 0, 33, 6, 0, 0, 160, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0) */
	0x00A00000,
	0x00000000,
	0x5A46416B,
	0x01220000,
	0x74000001, /* word 222 (0x0378) ftMotionCommandSetHitStatusAll(1) */
	0x04000002, /* word 223 (0x037C) ftMotionCommandWait(2) */
	0x18000000, /* word 224 (0x0380) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 225 (0x0384) ftMotionCommandEnd() */
	0x74000003, /* word 226 (0x0388) ftMotionCommandSetHitStatusAll(3) */
	0x08000012, /* word 227 (0x038C) ftMotionCommandWaitAsync(18) */
	0x98003400, /* word 228 (0x0390) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x0C0420C0, /* word 232 (0x03A0) MakeAttackColl(0, 0, 33, 6, 0, 0, 190, 160, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0) */
	0x00BE00A0,
	0x00000000,
	0x5A464143,
	0x01220000,
	0x0C8420C0, /* word 237 (0x03B4) MakeAttackColl(1, 0, 33, 6, 0, 0, 160, 0, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0) */
	0x00A00000,
	0x00000000,
	0x5A464143,
	0x01220000,
	0x0D0380C0, /* word 242 (0x03C8) MakeAttackColl(2, 0, 28, 6, 0, 0, 190, 160, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0) */
	0x00BE00A0,
	0x00000000,
	0x5A464143,
	0x01220000,
	0x0D8380C0, /* word 247 (0x03DC) MakeAttackColl(3, 0, 28, 6, 0, 0, 160, 0, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0) */
	0x00A00000,
	0x00000000,
	0x5A464143,
	0x01220000,
	0x04000002, /* word 252 (0x03F0) ftMotionCommandWait(2) */
	0x74000001, /* word 253 (0x03F4) ftMotionCommandSetHitStatusAll(1) */
	0x18000000, /* word 254 (0x03F8) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 255 (0x03FC) ftMotionCommandEnd() */
	0xC4000009, /* word 256 (0x0400) ftMotionCommandMakeRumble(0, 9) */
	0x9800AC00, /* word 257 (0x0404) Effect(0, 43, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x44000244, /* word 261 (0x0414) ftMotionPlayVoice(580) */
	0x38000011, /* word 262 (0x0418) ftMotionPlayFGM(17) */
	0x98007C00, /* word 263 (0x041C) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 267 (0x042C) ftMotionCommandSetHitStatusAll(3) */
	0x08000018, /* word 268 (0x0430) ftMotionCommandWaitAsync(24) */
	0x74000001, /* word 269 (0x0434) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 270 (0x0438) ftMotionCommandEnd() */
	0xC4000007, /* word 271 (0x043C) ftMotionCommandMakeRumble(0, 7) */
	0x9800AC00, /* word 272 (0x0440) Effect(0, 43, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x44000244, /* word 276 (0x0450) ftMotionPlayVoice(580) */
	0x3800000B, /* word 277 (0x0454) ftMotionPlayFGM(11) */
	0x98007C00, /* word 278 (0x0458) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 282 (0x0468) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 283 (0x046C) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 284 (0x0470) ftMotionCommandSetHitStatusAll(1) */
	0xC8000007, /* word 285 (0x0474) ftMotionCommandStopRumble(7) */
	0x00000000, /* word 286 (0x0478) ftMotionCommandEnd() */
	0x90000000, /* word 287 (0x047C) Goto */
	0x0123010F, /* -> word 271 (0x043C) */
	0x08000002, /* word 289 (0x0484) ftMotionCommandWaitAsync(2) */
	0x88000000, /* word 290 (0x0488) Subroutine */
	0x01270000, /* -> word 0 (0x0000) */
	0x3800000B, /* word 292 (0x0490) ftMotionPlayFGM(11) */
	0x08000004, /* word 293 (0x0494) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 294 (0x0498) Subroutine */
	0x012F0011, /* -> word 17 (0x0044) */
	0x08000004, /* word 296 (0x04A0) ftMotionCommandWaitAsync(4) */
	0x74000003, /* word 297 (0x04A4) ftMotionCommandSetHitStatusAll(3) */
	0x08000018, /* word 298 (0x04A8) ftMotionCommandWaitAsync(24) */
	0x74000001, /* word 299 (0x04AC) ftMotionCommandSetHitStatusAll(1) */
	0x0800001F, /* word 300 (0x04B0) ftMotionCommandWaitAsync(31) */
	0x74000001, /* word 301 (0x04B4) ftMotionCommandSetHitStatusAll(1) */
	0x88000000, /* word 302 (0x04B8) Subroutine */
	0x01320017, /* -> word 23 (0x005C) */
	0x08000023, /* word 304 (0x04C0) ftMotionCommandWaitAsync(35) */
	0x88000000, /* word 305 (0x04C4) Subroutine */
	0x0135001D, /* -> word 29 (0x0074) */
	0x00000000, /* word 307 (0x04CC) ftMotionCommandEnd() */
	0xB8000000, /* word 308 (0x04D0) SetParallelScript */
	0x013E0121, /* -> word 289 (0x0484) */
	0x98004000, /* word 310 (0x04D8) Effect(0, 16, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x0800001E, /* word 314 (0x04E8) ftMotionCommandWaitAsync(30) */
	0x58000001, /* word 315 (0x04EC) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 316 (0x04F0) ftMotionCommandEnd() */
	0xB8000000, /* word 317 (0x04F4) SetParallelScript */
	0x019D0121, /* -> word 289 (0x0484) */
	0x98003C00, /* word 319 (0x04FC) Effect(0, 15, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 323 (0x050C) ftMotionCommandEnd() */
	0x74000003, /* word 324 (0x0510) ftMotionCommandSetHitStatusAll(3) */
	0x38000013, /* word 325 (0x0514) ftMotionPlayFGM(19) */
	0x00000000, /* word 326 (0x0518) ftMotionCommandEnd() */
	0x74000003, /* word 327 (0x051C) ftMotionCommandSetHitStatusAll(3) */
	0x0400003C, /* word 328 (0x0520) ftMotionCommandWait(60) */
	0x74000001, /* word 329 (0x0524) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 330 (0x0528) ftMotionCommandEnd() */
	0x74000003, /* word 331 (0x052C) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 332 (0x0530) ftMotionCommandEnd() */
	0x74000003, /* word 333 (0x0534) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 334 (0x0538) ftMotionCommandEnd() */
	0x74000003, /* word 335 (0x053C) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 336 (0x0540) ftMotionCommandEnd() */
	0x74000003, /* word 337 (0x0544) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 338 (0x0548) ftMotionCommandEnd() */
	0x74000003, /* word 339 (0x054C) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 340 (0x0550) ftMotionCommandEnd() */
	0x74000003, /* word 341 (0x0554) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 342 (0x0558) ftMotionCommandEnd() */
	0x74000003, /* word 343 (0x055C) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 344 (0x0560) ftMotionCommandEnd() */
	0x98007C00, /* word 345 (0x0564) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 349 (0x0574) ftMotionCommandSetHitStatusAll(3) */
	0x4400023D, /* word 350 (0x0578) ftMotionPlayVoice(573) */
	0x08000005, /* word 351 (0x057C) ftMotionCommandWaitAsync(5) */
	0x0C0460C0, /* word 352 (0x0580) MakeAttackColl(0, 0, 35, 6, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0) */
	0x01180000,
	0x00000000,
	0x5A464193,
	0x00220000,
	0x0C80A0C0, /* word 357 (0x0594) MakeAttackColl(1, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0) */
	0x00960000,
	0x00000000,
	0x5A464193,
	0x00220000,
	0x4C00002A, /* word 362 (0x05A8) ftMotionCommandPlayFGMStoreInfo(42) */
	0x98004C00, /* word 363 (0x05AC) Effect(0, 19, 0, 0, -80, -180, 0, 0, 0) */
	0x0000FFB0,
	0xFF4C0000,
	0x00000000,
	0x04000002, /* word 367 (0x05BC) ftMotionCommandWait(2) */
	0x74000001, /* word 368 (0x05C0) ftMotionCommandSetHitStatusAll(1) */
	0x04000004, /* word 369 (0x05C4) ftMotionCommandWait(4) */
	0x18000000, /* word 370 (0x05C8) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 371 (0x05CC) ftMotionCommandEnd() */
	0x74000003, /* word 372 (0x05D0) ftMotionCommandSetHitStatusAll(3) */
	0x0800003C, /* word 373 (0x05D4) ftMotionCommandWaitAsync(60) */
	0x74000001, /* word 374 (0x05D8) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 375 (0x05DC) ftMotionCommandEnd() */
	0x98007C00, /* word 376 (0x05E0) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4400023D, /* word 380 (0x05F0) ftMotionPlayVoice(573) */
	0x74000003, /* word 381 (0x05F4) ftMotionCommandSetHitStatusAll(3) */
	0x0800000D, /* word 382 (0x05F8) ftMotionCommandWaitAsync(13) */
	0x0C00A0C0, /* word 383 (0x05FC) MakeAttackColl(0, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0) */
	0x00960000,
	0x00000000,
	0x5A464193,
	0x00220000,
	0x0C8140C0, /* word 388 (0x0610) MakeAttackColl(1, 0, 10, 6, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0) */
	0x01180000,
	0x00000000,
	0x5A464193,
	0x00220000,
	0x98004C00, /* word 393 (0x0624) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x4C00002A, /* word 397 (0x0634) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000002, /* word 398 (0x0638) ftMotionCommandWait(2) */
	0x74000001, /* word 399 (0x063C) ftMotionCommandSetHitStatusAll(1) */
	0x04000003, /* word 400 (0x0640) ftMotionCommandWait(3) */
	0x18000000, /* word 401 (0x0644) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 402 (0x0648) ftMotionCommandEnd() */
	0x74000003, /* word 403 (0x064C) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 404 (0x0650) ftMotionCommandEnd() */
	0x3800000B, /* word 405 (0x0654) ftMotionPlayFGM(11) */
	0x98004000, /* word 406 (0x0658) Effect(0, 16, 0, 100, 0, 0, 0, 0, 0) */
	0x00640000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 410 (0x0668) ftMotionCommandSetHitStatusAll(3) */
	0x08000003, /* word 411 (0x066C) ftMotionCommandWaitAsync(3) */
	0x88000000, /* word 412 (0x0670) Subroutine */
	0x01A00000, /* -> word 0 (0x0000) */
	0x08000006, /* word 414 (0x0678) ftMotionCommandWaitAsync(6) */
	0x88000000, /* word 415 (0x067C) Subroutine */
	0x01A50011, /* -> word 17 (0x0044) */
	0x08000019, /* word 417 (0x0684) ftMotionCommandWaitAsync(25) */
	0x74000001, /* word 418 (0x0688) ftMotionCommandSetHitStatusAll(1) */
	0x0800001D, /* word 419 (0x068C) ftMotionCommandWaitAsync(29) */
	0x88000000, /* word 420 (0x0690) Subroutine */
	0x01A80017, /* -> word 23 (0x005C) */
	0x0800001F, /* word 422 (0x0698) ftMotionCommandWaitAsync(31) */
	0x88000000, /* word 423 (0x069C) Subroutine */
	0x01B4001D, /* -> word 29 (0x0074) */
	0x00000000, /* word 425 (0x06A4) ftMotionCommandEnd() */
	0x74000003, /* word 426 (0x06A8) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 427 (0x06AC) ftMotionCommandEnd() */
	0x3800000B, /* word 428 (0x06B0) ftMotionPlayFGM(11) */
	0x98004000, /* word 429 (0x06B4) Effect(0, 16, 0, 100, 0, 0, 0, 0, 0) */
	0x00640000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 433 (0x06C4) ftMotionCommandSetHitStatusAll(3) */
	0x08000005, /* word 434 (0x06C8) ftMotionCommandWaitAsync(5) */
	0x88000000, /* word 435 (0x06CC) Subroutine */
	0x01B70000, /* -> word 0 (0x0000) */
	0x0800000A, /* word 437 (0x06D4) ftMotionCommandWaitAsync(10) */
	0x88000000, /* word 438 (0x06D8) Subroutine */
	0x01BC0011, /* -> word 17 (0x0044) */
	0x0400001C, /* word 440 (0x06E0) ftMotionCommandWait(28) */
	0x74000001, /* word 441 (0x06E4) ftMotionCommandSetHitStatusAll(1) */
	0x08000025, /* word 442 (0x06E8) ftMotionCommandWaitAsync(37) */
	0x88000000, /* word 443 (0x06EC) Subroutine */
	0x01BF0017, /* -> word 23 (0x005C) */
	0x08000029, /* word 445 (0x06F4) ftMotionCommandWaitAsync(41) */
	0x88000000, /* word 446 (0x06F8) Subroutine */
	0x01DF001D, /* -> word 29 (0x0074) */
	0x00000000, /* word 448 (0x0700) ftMotionCommandEnd() */
	0xBC000003, /* word 449 (0x0704) ftMotionCommandSetSlopeContour(3) */
	0x08000002, /* word 450 (0x0708) ftMotionCommandWaitAsync(2) */
	0x58000001, /* word 451 (0x070C) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 452 (0x0710) ftMotionCommandEnd() */
	0xBC000003, /* word 453 (0x0714) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 454 (0x0718) ftMotionCommandWaitAsync(4) */
	0x58000001, /* word 455 (0x071C) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 456 (0x0720) ftMotionCommandEnd() */
	0xBC000003, /* word 457 (0x0724) ftMotionCommandSetSlopeContour(3) */
	0x08000008, /* word 458 (0x0728) ftMotionCommandWaitAsync(8) */
	0x54000001, /* word 459 (0x072C) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 460 (0x0730) ftMotionCommandEnd() */
	0x08000004, /* word 461 (0x0734) ftMotionCommandWaitAsync(4) */
	0x98004C00, /* word 462 (0x0738) Effect(0, 19, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 466 (0x0748) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 467 (0x074C) ftMotionCommandEnd() */
	0xBC000003, /* word 468 (0x0750) ftMotionCommandSetSlopeContour(3) */
	0x08000008, /* word 469 (0x0754) ftMotionCommandWaitAsync(8) */
	0x98002C00, /* word 470 (0x0758) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 474 (0x0768) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 475 (0x076C) ftMotionCommandEnd() */
	0xBC000003, /* word 476 (0x0770) ftMotionCommandSetSlopeContour(3) */
	0x60000006, /* word 477 (0x0774) ftMotionCommandSetFlag3(6) */
	0x90000000, /* word 478 (0x0778) Goto */
	0x01FC01D4, /* -> word 468 (0x0750) */
	0xBC000003, /* word 480 (0x0780) ftMotionCommandSetSlopeContour(3) */
	0x08000008, /* word 481 (0x0784) ftMotionCommandWaitAsync(8) */
	0x98002C00, /* word 482 (0x0788) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 486 (0x0798) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 487 (0x079C) ftMotionCommandEnd() */
	0xBC000003, /* word 488 (0x07A0) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 489 (0x07A4) ftMotionCommandWaitAsync(4) */
	0x98002C00, /* word 490 (0x07A8) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 494 (0x07B8) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 495 (0x07BC) ftMotionCommandEnd() */
	0xBC000003, /* word 496 (0x07C0) ftMotionCommandSetSlopeContour(3) */
	0x08000008, /* word 497 (0x07C4) ftMotionCommandWaitAsync(8) */
	0x50000000, /* word 498 (0x07C8) ftMotionCommandPlaySmashVoice(0) */
	0x98004C00, /* word 499 (0x07CC) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x54000001, /* word 503 (0x07DC) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 504 (0x07E0) ftMotionCommandEnd() */
	0xBC000003, /* word 505 (0x07E4) ftMotionCommandSetSlopeContour(3) */
	0x60000006, /* word 506 (0x07E8) ftMotionCommandSetFlag3(6) */
	0x90000000, /* word 507 (0x07EC) Goto */
	0x021801F0, /* -> word 496 (0x07C0) */
	0xBC000003, /* word 509 (0x07F4) ftMotionCommandSetSlopeContour(3) */
	0x08000008, /* word 510 (0x07F8) ftMotionCommandWaitAsync(8) */
	0x50000000, /* word 511 (0x07FC) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 512 (0x0800) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 516 (0x0810) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 517 (0x0814) ftMotionCommandEnd() */
	0xBC000003, /* word 518 (0x0818) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 519 (0x081C) ftMotionCommandWaitAsync(4) */
	0x50000000, /* word 520 (0x0820) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 521 (0x0824) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 525 (0x0834) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 526 (0x0838) ftMotionCommandEnd() */
	0x08000006, /* word 527 (0x083C) ftMotionCommandWaitAsync(6) */
	0x98002C00, /* word 528 (0x0840) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 532 (0x0850) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 533 (0x0854) ftMotionCommandEnd() */
	0x60000004, /* word 534 (0x0858) ftMotionCommandSetFlag3(4) */
	0x90000000, /* word 535 (0x085C) Goto */
	0x0231020F, /* -> word 527 (0x083C) */
	0x08000006, /* word 537 (0x0864) ftMotionCommandWaitAsync(6) */
	0x98002C00, /* word 538 (0x0868) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 542 (0x0878) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 543 (0x087C) ftMotionCommandEnd() */
	0x08000006, /* word 544 (0x0880) ftMotionCommandWaitAsync(6) */
	0x98002C00, /* word 545 (0x0884) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 549 (0x0894) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 550 (0x0898) ftMotionCommandEnd() */
	0x08000006, /* word 551 (0x089C) ftMotionCommandWaitAsync(6) */
	0x50000000, /* word 552 (0x08A0) ftMotionCommandPlaySmashVoice(0) */
	0x98004000, /* word 553 (0x08A4) Effect(0, 16, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 557 (0x08B4) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 558 (0x08B8) ftMotionCommandEnd() */
	0x60000004, /* word 559 (0x08BC) ftMotionCommandSetFlag3(4) */
	0x90000000, /* word 560 (0x08C0) Goto */
	0x02490227, /* -> word 551 (0x089C) */
	0x08000006, /* word 562 (0x08C8) ftMotionCommandWaitAsync(6) */
	0x50000000, /* word 563 (0x08CC) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 564 (0x08D0) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 568 (0x08E0) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 569 (0x08E4) ftMotionCommandEnd() */
	0x08000006, /* word 570 (0x08E8) ftMotionCommandWaitAsync(6) */
	0x50000000, /* word 571 (0x08EC) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 572 (0x08F0) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 576 (0x0900) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 577 (0x0904) ftMotionCommandEnd() */
	0xBC000003, /* word 578 (0x0908) ftMotionCommandSetSlopeContour(3) */
	0x08000018, /* word 579 (0x090C) ftMotionCommandWaitAsync(24) */
	0x54000001, /* word 580 (0x0910) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 581 (0x0914) ftMotionCommandEnd() */
	0xBC000003, /* word 582 (0x0918) ftMotionCommandSetSlopeContour(3) */
	0x6000000A, /* word 583 (0x091C) ftMotionCommandSetFlag3(10) */
	0x90000000, /* word 584 (0x0920) Goto */
	0x02530242, /* -> word 578 (0x0908) */
	0xBC000003, /* word 586 (0x0928) ftMotionCommandSetSlopeContour(3) */
	0x08000018, /* word 587 (0x092C) ftMotionCommandWaitAsync(24) */
	0x50000000, /* word 588 (0x0930) ftMotionCommandPlaySmashVoice(0) */
	0x54000001, /* word 589 (0x0934) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 590 (0x0938) ftMotionCommandEnd() */
	0xBC000003, /* word 591 (0x093C) ftMotionCommandSetSlopeContour(3) */
	0x6000000A, /* word 592 (0x0940) ftMotionCommandSetFlag3(10) */
	0x50000000, /* word 593 (0x0944) ftMotionCommandPlaySmashVoice(0) */
	0x90000000, /* word 594 (0x0948) Goto */
	0x030A024A, /* -> word 586 (0x0928) */
	0xBC000003, /* word 596 (0x0950) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 597 (0x0954) ftMotionCommandWaitAsync(4) */
	0xCC040000, /* word 598 (0x0958) ftMotionCommandSetAfterImage(1, 0) */
	0x08000006, /* word 599 (0x095C) ftMotionCommandWaitAsync(6) */
	0x88000000, /* word 600 (0x0960) Subroutine */
	0x02650000, /* extern -> 0x0 */
	0x04000003, /* word 602 (0x0968) ftMotionCommandWait(3) */
	0xCC03FFFF, /* word 603 (0x096C) ftMotionCommandSetAfterImage(0, -1) */
	0x04000007, /* word 604 (0x0970) ftMotionCommandWait(7) */
	0x18000000, /* word 605 (0x0974) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 606 (0x0978) ftMotionCommandEnd() */
	0xBC000003, /* word 607 (0x097C) ftMotionCommandSetSlopeContour(3) */
	0x08000008, /* word 608 (0x0980) ftMotionCommandWaitAsync(8) */
	0xBC000004, /* word 609 (0x0984) ftMotionCommandSetSlopeContour(4) */
	0xCC040000, /* word 610 (0x0988) ftMotionCommandSetAfterImage(1, 0) */
	0x08000009, /* word 611 (0x098C) ftMotionCommandWaitAsync(9) */
	0x88000000, /* word 612 (0x0990) Subroutine */
	0x02730019, /* extern -> 0x64 */
	0x04000006, /* word 614 (0x0998) ftMotionCommandWait(6) */
	0x18000000, /* word 615 (0x099C) ftMotionCommandClearAttackCollAll() */
	0xBC000003, /* word 616 (0x09A0) ftMotionCommandSetSlopeContour(3) */
	0x04000003, /* word 617 (0x09A4) ftMotionCommandWait(3) */
	0xCC03FFFF, /* word 618 (0x09A8) ftMotionCommandSetAfterImage(0, -1) */
	0x00000000, /* word 619 (0x09AC) ftMotionCommandEnd() */
	0xBC000003, /* word 620 (0x09B0) ftMotionCommandSetSlopeContour(3) */
	0x50000000, /* word 621 (0x09B4) ftMotionCommandPlaySmashVoice(0) */
	0x08000010, /* word 622 (0x09B8) ftMotionCommandWaitAsync(16) */
	0xCC040000, /* word 623 (0x09BC) ftMotionCommandSetAfterImage(1, 0) */
	0x08000013, /* word 624 (0x09C0) ftMotionCommandWaitAsync(19) */
	0xBC000004, /* word 625 (0x09C4) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 626 (0x09C8) Subroutine */
	0x02800032, /* extern -> 0xC8 */
	0x04000006, /* word 628 (0x09D0) ftMotionCommandWait(6) */
	0xCC03FFFF, /* word 629 (0x09D4) ftMotionCommandSetAfterImage(0, -1) */
	0x18000000, /* word 630 (0x09D8) ftMotionCommandClearAttackCollAll() */
	0x08000033, /* word 631 (0x09DC) ftMotionCommandWaitAsync(51) */
	0xBC000003, /* word 632 (0x09E0) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 633 (0x09E4) ftMotionCommandEnd() */
	0xBC000003, /* word 634 (0x09E8) ftMotionCommandSetSlopeContour(3) */
	0x08000003, /* word 635 (0x09EC) ftMotionCommandWaitAsync(3) */
	0xCC040000, /* word 636 (0x09F0) ftMotionCommandSetAfterImage(1, 0) */
	0x08000004, /* word 637 (0x09F4) ftMotionCommandWaitAsync(4) */
	0xBC000004, /* word 638 (0x09F8) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 639 (0x09FC) Subroutine */
	0x028A004B, /* extern -> 0x12C */
	0x04000002, /* word 641 (0x0A04) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 642 (0x0A08) ftMotionCommandSetAfterImage(0, -1) */
	0x04000010, /* word 643 (0x0A0C) ftMotionCommandWait(16) */
	0x18000000, /* word 644 (0x0A10) ftMotionCommandClearAttackCollAll() */
	0x08000028, /* word 645 (0x0A14) ftMotionCommandWaitAsync(40) */
	0xBC000003, /* word 646 (0x0A18) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 647 (0x0A1C) ftMotionCommandEnd() */
	0x08000006, /* word 648 (0x0A20) ftMotionCommandWaitAsync(6) */
	0x88000000, /* word 649 (0x0A24) Subroutine */
	0x02920068, /* extern -> 0x1A0 */
	0x0400000A, /* word 651 (0x0A2C) ftMotionCommandWait(10) */
	0x18000000, /* word 652 (0x0A30) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 653 (0x0A34) ftMotionCommandEnd() */
	0x08000008, /* word 654 (0x0A38) ftMotionCommandWaitAsync(8) */
	0xBC000004, /* word 655 (0x0A3C) ftMotionCommandSetSlopeContour(4) */
	0x08000009, /* word 656 (0x0A40) ftMotionCommandWaitAsync(9) */
	0x88000000, /* word 657 (0x0A44) Subroutine */
	0x029D007D, /* extern -> 0x1F4 */
	0x04000006, /* word 659 (0x0A4C) ftMotionCommandWait(6) */
	0x18000000, /* word 660 (0x0A50) ftMotionCommandClearAttackCollAll() */
	0xBC000003, /* word 661 (0x0A54) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 662 (0x0A58) ftMotionCommandEnd() */
	0xC4000007, /* word 663 (0x0A5C) ftMotionCommandMakeRumble(0, 7) */
	0x50000000, /* word 664 (0x0A60) ftMotionCommandPlaySmashVoice(0) */
	0xB1300028, /* word 665 (0x0A64) ftMotionCommandSetColAnim(76, 40) */
	0x08000013, /* word 666 (0x0A68) ftMotionCommandWaitAsync(19) */
	0xBC000004, /* word 667 (0x0A6C) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 668 (0x0A70) Subroutine */
	0x02A70092, /* extern -> 0x248 */
	0x04000006, /* word 670 (0x0A78) ftMotionCommandWait(6) */
	0x18000000, /* word 671 (0x0A7C) ftMotionCommandClearAttackCollAll() */
	0x08000033, /* word 672 (0x0A80) ftMotionCommandWaitAsync(51) */
	0xBC000003, /* word 673 (0x0A84) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 674 (0x0A88) ftMotionCommandEnd() */
	0xBC000003, /* word 675 (0x0A8C) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 676 (0x0A90) ftMotionCommandWaitAsync(4) */
	0xBC000004, /* word 677 (0x0A94) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 678 (0x0A98) Subroutine */
	0x02AF00AC, /* extern -> 0x2B0 */
	0x04000012, /* word 680 (0x0AA0) ftMotionCommandWait(18) */
	0x18000000, /* word 681 (0x0AA4) ftMotionCommandClearAttackCollAll() */
	0x08000028, /* word 682 (0x0AA8) ftMotionCommandWaitAsync(40) */
	0xBC000003, /* word 683 (0x0AAC) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 684 (0x0AB0) ftMotionCommandEnd() */
	0x08000006, /* word 685 (0x0AB4) ftMotionCommandWaitAsync(6) */
	0x88000000, /* word 686 (0x0AB8) Subroutine */
	0x02B700C9, /* extern -> 0x324 */
	0x0400000A, /* word 688 (0x0AC0) ftMotionCommandWait(10) */
	0x18000000, /* word 689 (0x0AC4) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 690 (0x0AC8) ftMotionCommandEnd() */
	0x08000008, /* word 691 (0x0ACC) ftMotionCommandWaitAsync(8) */
	0xBC000004, /* word 692 (0x0AD0) ftMotionCommandSetSlopeContour(4) */
	0x08000009, /* word 693 (0x0AD4) ftMotionCommandWaitAsync(9) */
	0x88000000, /* word 694 (0x0AD8) Subroutine */
	0x02BF00DE, /* extern -> 0x378 */
	0x04000006, /* word 696 (0x0AE0) ftMotionCommandWait(6) */
	0x18000000, /* word 697 (0x0AE4) ftMotionCommandClearAttackCollAll() */
	0xBC000003, /* word 698 (0x0AE8) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 699 (0x0AEC) ftMotionCommandEnd() */
	0x08000013, /* word 700 (0x0AF0) ftMotionCommandWaitAsync(19) */
	0xBC000004, /* word 701 (0x0AF4) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 702 (0x0AF8) Subroutine */
	0x02C900F3, /* extern -> 0x3CC */
	0x04000006, /* word 704 (0x0B00) ftMotionCommandWait(6) */
	0x18000000, /* word 705 (0x0B04) ftMotionCommandClearAttackCollAll() */
	0x08000033, /* word 706 (0x0B08) ftMotionCommandWaitAsync(51) */
	0xBC000003, /* word 707 (0x0B0C) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 708 (0x0B10) ftMotionCommandEnd() */
	0xBC000003, /* word 709 (0x0B14) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 710 (0x0B18) ftMotionCommandWaitAsync(4) */
	0xBC000004, /* word 711 (0x0B1C) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 712 (0x0B20) Subroutine */
	0x02D2010C, /* extern -> 0x430 */
	0x04000012, /* word 714 (0x0B28) ftMotionCommandWait(18) */
	0x18000000, /* word 715 (0x0B2C) ftMotionCommandClearAttackCollAll() */
	0x08000028, /* word 716 (0x0B30) ftMotionCommandWaitAsync(40) */
	0xBC000003, /* word 717 (0x0B34) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 718 (0x0B38) ftMotionCommandEnd() */
	0xB12C000A, /* word 719 (0x0B3C) ftMotionCommandSetColAnim(75, 10) */
	0x08000006, /* word 720 (0x0B40) ftMotionCommandWaitAsync(6) */
	0x88000000, /* word 721 (0x0B44) Subroutine */
	0x02DB0125, /* extern -> 0x494 */
	0x0400000A, /* word 723 (0x0B4C) ftMotionCommandWait(10) */
	0x18000000, /* word 724 (0x0B50) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 725 (0x0B54) ftMotionCommandEnd() */
	0xB12C0011, /* word 726 (0x0B58) ftMotionCommandSetColAnim(75, 17) */
	0x08000008, /* word 727 (0x0B5C) ftMotionCommandWaitAsync(8) */
	0xBC000004, /* word 728 (0x0B60) ftMotionCommandSetSlopeContour(4) */
	0x08000009, /* word 729 (0x0B64) ftMotionCommandWaitAsync(9) */
	0x88000000, /* word 730 (0x0B68) Subroutine */
	0x02E7013E, /* extern -> 0x4F8 */
	0x0800000B, /* word 732 (0x0B70) ftMotionCommandWaitAsync(11) */
	0x54000001, /* word 733 (0x0B74) ftMotionCommandSetFlag0(1) */
	0x04000006, /* word 734 (0x0B78) ftMotionCommandWait(6) */
	0x18000000, /* word 735 (0x0B7C) ftMotionCommandClearAttackCollAll() */
	0xBC000003, /* word 736 (0x0B80) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 737 (0x0B84) ftMotionCommandEnd() */
	0xB12C0019, /* word 738 (0x0B88) ftMotionCommandSetColAnim(75, 25) */
	0x50000000, /* word 739 (0x0B8C) ftMotionCommandPlaySmashVoice(0) */
	0x08000013, /* word 740 (0x0B90) ftMotionCommandWaitAsync(19) */
	0xBC000004, /* word 741 (0x0B94) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 742 (0x0B98) Subroutine */
	0x02F50157, /* extern -> 0x55C */
	0x08000015, /* word 744 (0x0BA0) ftMotionCommandWaitAsync(21) */
	0x54000002, /* word 745 (0x0BA4) ftMotionCommandSetFlag0(2) */
	0x04000004, /* word 746 (0x0BA8) ftMotionCommandWait(4) */
	0x18000000, /* word 747 (0x0BAC) ftMotionCommandClearAttackCollAll() */
	0x08000033, /* word 748 (0x0BB0) ftMotionCommandWaitAsync(51) */
	0xBC000003, /* word 749 (0x0BB4) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 750 (0x0BB8) ftMotionCommandEnd() */
	0xBC000003, /* word 751 (0x0BBC) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 752 (0x0BC0) ftMotionCommandWaitAsync(4) */
	0xBC000004, /* word 753 (0x0BC4) ftMotionCommandSetSlopeContour(4) */
	0xB12C0016, /* word 754 (0x0BC8) ftMotionCommandSetColAnim(75, 22) */
	0x08000004, /* word 755 (0x0BCC) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 756 (0x0BD0) Subroutine */
	0x03060170, /* extern -> 0x5C0 */
	0x04000012, /* word 758 (0x0BD8) ftMotionCommandWait(18) */
	0x18000000, /* word 759 (0x0BDC) ftMotionCommandClearAttackCollAll() */
	0x08000028, /* word 760 (0x0BE0) ftMotionCommandWaitAsync(40) */
	0xBC000003, /* word 761 (0x0BE4) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 762 (0x0BE8) ftMotionCommandEnd() */
	0xBC000003, /* word 763 (0x0BEC) ftMotionCommandSetSlopeContour(3) */
	0x08000009, /* word 764 (0x0BF0) ftMotionCommandWaitAsync(9) */
	0x54000001, /* word 765 (0x0BF4) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 766 (0x0BF8) ftMotionCommandEnd() */
	0xBC000003, /* word 767 (0x0BFC) ftMotionCommandSetSlopeContour(3) */
	0x08000009, /* word 768 (0x0C00) ftMotionCommandWaitAsync(9) */
	0x54000001, /* word 769 (0x0C04) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 770 (0x0C08) ftMotionCommandEnd() */
	0xC4000007, /* word 771 (0x0C0C) ftMotionCommandMakeRumble(0, 7) */
	0xBC000004, /* word 772 (0x0C10) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 773 (0x0C14) Subroutine */
	0x03D5018D, /* extern -> 0x634 */
	0x04000010, /* word 775 (0x0C1C) ftMotionCommandWait(16) */
	0x18000000, /* word 776 (0x0C20) ftMotionCommandClearAttackCollAll() */
	0x90000000, /* word 777 (0x0C24) Goto */
	0x03170303, /* -> word 771 (0x0C0C) */
	0x98007C00, /* word 779 (0x0C2C) Effect(0, 31, 0, 0, 0, 120, 200, 200, 200) */
	0x00000000,
	0x007800C8,
	0x00C800C8,
	0x80000003, /* word 783 (0x0C3C) ftMotionCommandLoopBegin(3) */
	0x98002800, /* word 784 (0x0C40) Effect(0, 10, 0, 0, 0, 120, 200, 200, 200) */
	0x00000000,
	0x007800C8,
	0x00C800C8,
	0x04000004, /* word 788 (0x0C50) ftMotionCommandWait(4) */
	0x84000000, /* word 789 (0x0C54) ftMotionCommandLoopEnd() */
	0x90000000, /* word 790 (0x0C58) Goto */
	0x031F030B, /* -> word 779 (0x0C2C) */
	0x9BF88800, /* word 792 (0x0C60) Effect(-1, 34, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x44000245, /* word 796 (0x0C70) ftMotionPlayVoice(581) */
	0x74000003, /* word 797 (0x0C74) ftMotionCommandSetHitStatusAll(3) */
	0x90000000, /* word 798 (0x0C78) Goto */
	0x0321030B, /* -> word 779 (0x0C2C) */
	0x90000000, /* word 800 (0x0C80) Goto */
	0x033A030B, /* -> word 779 (0x0C2C) */
	0x9BF88800, /* word 802 (0x0C88) Effect(-1, 34, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x98003400, /* word 806 (0x0C98) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 810 (0x0CA8) ftMotionCommandEnd() */
	0x00000000, /* word 811 (0x0CAC) ftMotionCommandEnd() */
	0xBC000003, /* word 812 (0x0CB0) ftMotionCommandSetSlopeContour(3) */
	0x44000241, /* word 813 (0x0CB4) ftMotionPlayVoice(577) */
	0x80000003, /* word 814 (0x0CB8) ftMotionCommandLoopBegin(3) */
	0x98002800, /* word 815 (0x0CBC) Effect(0, 10, 0, 0, 0, 200, 200, 200, 200) */
	0x00000000,
	0x00C800C8,
	0x00C800C8,
	0x0400000A, /* word 819 (0x0CCC) ftMotionCommandWait(10) */
	0x84000000, /* word 820 (0x0CD0) ftMotionCommandLoopEnd() */
	0x98003400, /* word 821 (0x0CD4) Effect(0, 13, 0, 0, 0, 0, 100, 0, 0) */
	0x00000000,
	0x00000064,
	0x00000000,
	0x90000000, /* word 825 (0x0CE4) Goto */
	0x0343032E, /* -> word 814 (0x0CB8) */
	0xBC000003, /* word 827 (0x0CEC) ftMotionCommandSetSlopeContour(3) */
	0x44000241, /* word 828 (0x0CF0) ftMotionPlayVoice(577) */
	0x98016800, /* word 829 (0x0CF4) Effect(0, 90, 0, 0, 150, 0, 200, 300, 200) */
	0x00000096,
	0x000000C8,
	0x012C00C8,
	0x0400000A, /* word 833 (0x0D04) ftMotionCommandWait(10) */
	0x90000000, /* word 834 (0x0D08) Goto */
	0x035D033D, /* -> word 829 (0x0CF4) */
	0xA0C00001, /* word 836 (0x0D10) ftMotionCommandSetModelPartID(24, 1) */
	0xA0CFFFFF, /* word 837 (0x0D14) ftMotionCommandSetModelPartID(25, -1) */
	0xA0880000, /* word 838 (0x0D18) ftMotionCommandSetModelPartID(17, 0) */
	0xA0900000, /* word 839 (0x0D1C) ftMotionCommandSetModelPartID(18, 0) */
	0xA0980000, /* word 840 (0x0D20) ftMotionCommandSetModelPartID(19, 0) */
	0xA0A00000, /* word 841 (0x0D24) ftMotionCommandSetModelPartID(20, 0) */
	0xA0A80000, /* word 842 (0x0D28) ftMotionCommandSetModelPartID(21, 0) */
	0xA0B00000, /* word 843 (0x0D2C) ftMotionCommandSetModelPartID(22, 0) */
	0x8C000000, /* word 844 (0x0D30) ftMotionCommandReturn() */
	0xFFFFFFFF, /* word 845 (0x0D34) data */
	0x00000008, /* word 846 (0x0D38) data */
	0x00000169, /* word 847 (0x0D3C) data */
	0x00000064, /* word 848 (0x0D40) data */
	0x00000000, /* word 849 (0x0D44) data */
	0x00000000, /* word 850 (0x0D48) data */
	0x00000000, /* word 851 (0x0D4C) data */
	0xFFFFFFFF, /* word 852 (0x0D50) data */
	0x00000008, /* word 853 (0x0D54) data */
	0x00000169, /* word 854 (0x0D58) data */
	0x00000064, /* word 855 (0x0D5C) data */
	0x00000000, /* word 856 (0x0D60) data */
	0x00000000, /* word 857 (0x0D64) data */
	0x00000000, /* word 858 (0x0D68) data */
	0xBC000003, /* word 859 (0x0D6C) ftMotionCommandSetSlopeContour(3) */
	0x30000000, /* word 860 (0x0D70) SetThrow */
	0x035F034D, /* -> word 845 (0x0D34) */
	0x88000000, /* word 862 (0x0D78) Subroutine */
	0x03860344, /* -> word 836 (0x0D10) */
	0x80000005, /* word 864 (0x0D80) ftMotionCommandLoopBegin(5) */
	0x04000004, /* word 865 (0x0D84) ftMotionCommandWait(4) */
	0x98807C00, /* word 866 (0x0D88) Effect(16, 31, 0, 150, 0, 0, 100, 100, 100) */
	0x00960000,
	0x00000064,
	0x00640064,
	0x84000000, /* word 870 (0x0D98) ftMotionCommandLoopEnd() */
	0xC4020009, /* word 871 (0x0D9C) ftMotionCommandMakeRumble(16, 9) */
	0x0C048030, /* word 872 (0x0DA0) MakeAttackColl(0, 0, 36, 1, 1, 0, 210, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0) */
	0x00D20000,
	0x00000000,
	0x5A464003,
	0x00200000,
	0x0C848030, /* word 877 (0x0DB4) MakeAttackColl(1, 0, 36, 1, 1, 0, 160, 0, 0, 200, 361, 100, 0, 3, 0, 1, 0, 0) */
	0x00A00000,
	0x000000C8,
	0x5A464003,
	0x00200000,
	0x98004000, /* word 882 (0x0DC8) Effect(0, 16, 0, 0, 0, -100, 0, 0, 0) */
	0x00000000,
	0xFF9C0000,
	0x00000000,
	0x380000F8, /* word 886 (0x0DD8) ftMotionPlayFGM(248) */
	0x58000011, /* word 887 (0x0DDC) ftMotionCommandSetFlag1(17) */
	0x5C000009, /* word 888 (0x0DE0) ftMotionCommandSetFlag2(9) */
	0x80000005, /* word 889 (0x0DE4) ftMotionCommandLoopBegin(5) */
	0x04000003, /* word 890 (0x0DE8) ftMotionCommandWait(3) */
	0x99207C00, /* word 891 (0x0DEC) Effect(36, 31, 0, 150, 0, 0, 100, 100, 100) */
	0x00960000,
	0x00000064,
	0x00640064,
	0x84000000, /* word 895 (0x0DFC) ftMotionCommandLoopEnd() */
	0x04000004, /* word 896 (0x0E00) ftMotionCommandWait(4) */
	0x18000000, /* word 897 (0x0E04) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 898 (0x0E08) ftMotionCommandEnd() */
	0x38000013, /* word 899 (0x0E0C) ftMotionPlayFGM(19) */
	0xBC000003, /* word 900 (0x0E10) ftMotionCommandSetSlopeContour(3) */
	0x88000000, /* word 901 (0x0E14) Subroutine */
	0x03970344, /* -> word 836 (0x0D10) */
	0x00000000, /* word 903 (0x0E1C) ftMotionCommandEnd() */
	0x00000034, /* word 904 (0x0E20) data */
	0x00000010, /* word 905 (0x0E24) data */
	0x00000028, /* word 906 (0x0E28) data */
	0x0000003C, /* word 907 (0x0E2C) data */
	0x00000000, /* word 908 (0x0E30) data */
	0x0000005A, /* word 909 (0x0E34) data */
	0x00000002, /* word 910 (0x0E38) data */
	0xFFFFFFFF, /* word 911 (0x0E3C) data */
	0x00000008, /* word 912 (0x0E40) data */
	0x00000169, /* word 913 (0x0E44) data */
	0x00000064, /* word 914 (0x0E48) data */
	0x00000000, /* word 915 (0x0E4C) data */
	0x00000000, /* word 916 (0x0E50) data */
	0x00000000, /* word 917 (0x0E54) data */
	0x30000000, /* word 918 (0x0E58) SetThrow */
	0x03990388, /* -> word 904 (0x0E20) */
	0x88000000, /* word 920 (0x0E60) Subroutine */
	0x03BD0344, /* -> word 836 (0x0D10) */
	0x04000004, /* word 922 (0x0E68) ftMotionCommandWait(4) */
	0x74000002, /* word 923 (0x0E6C) ftMotionCommandSetHitStatusAll(2) */
	0x08000009, /* word 924 (0x0E70) ftMotionCommandWaitAsync(9) */
	0x4400023D, /* word 925 (0x0E74) ftMotionPlayVoice(573) */
	0x38000012, /* word 926 (0x0E78) ftMotionPlayFGM(18) */
	0x98007C00, /* word 927 (0x0E7C) Effect(0, 31, 0, 0, 200, 280, 0, 0, 0) */
	0x000000C8,
	0x01180000,
	0x00000000,
	0x98004C00, /* word 931 (0x0E8C) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x9BF88400, /* word 935 (0x0E9C) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x5C000001, /* word 939 (0x0EAC) ftMotionCommandSetFlag2(1) */
	0x74000001, /* word 940 (0x0EB0) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 941 (0x0EB4) ftMotionCommandEnd() */
	0x00000034, /* word 942 (0x0EB8) data */
	0x00000012, /* word 943 (0x0EBC) data */
	0x00000028, /* word 944 (0x0EC0) data */
	0x0000003C, /* word 945 (0x0EC4) data */
	0x00000000, /* word 946 (0x0EC8) data */
	0x0000005A, /* word 947 (0x0ECC) data */
	0x00000002, /* word 948 (0x0ED0) data */
	0xFFFFFFFF, /* word 949 (0x0ED4) data */
	0x00000008, /* word 950 (0x0ED8) data */
	0x00000169, /* word 951 (0x0EDC) data */
	0x00000064, /* word 952 (0x0EE0) data */
	0x00000000, /* word 953 (0x0EE4) data */
	0x00000000, /* word 954 (0x0EE8) data */
	0x00000000, /* word 955 (0x0EEC) data */
	0x30000000, /* word 956 (0x0EF0) SetThrow */
	0x03BF03AE, /* -> word 942 (0x0EB8) */
	0x88000000, /* word 958 (0x0EF8) Subroutine */
	0x06B90344, /* -> word 836 (0x0D10) */
	0x04000004, /* word 960 (0x0F00) ftMotionCommandWait(4) */
	0x74000002, /* word 961 (0x0F04) ftMotionCommandSetHitStatusAll(2) */
	0x08000009, /* word 962 (0x0F08) ftMotionCommandWaitAsync(9) */
	0x4400023D, /* word 963 (0x0F0C) ftMotionPlayVoice(573) */
	0x38000012, /* word 964 (0x0F10) ftMotionPlayFGM(18) */
	0x98007C00, /* word 965 (0x0F14) Effect(0, 31, 0, 0, 200, 280, 0, 0, 0) */
	0x000000C8,
	0x01180000,
	0x00000000,
	0x98004C00, /* word 969 (0x0F24) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x9BF88400, /* word 973 (0x0F34) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x5C000002, /* word 977 (0x0F44) ftMotionCommandSetFlag2(2) */
	0x74000001, /* word 978 (0x0F48) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 979 (0x0F4C) ftMotionCommandEnd() */
	0x88000000, /* word 980 (0x0F50) Subroutine */
	0x03D801AB, /* extern -> 0x6AC */
	0x00000000, /* word 982 (0x0F58) ftMotionCommandEnd() */
	0x88000000, /* word 983 (0x0F5C) Subroutine */
	0x03DB01B1, /* extern -> 0x6C4 */
	0x00000000, /* word 985 (0x0F64) ftMotionCommandEnd() */
	0x88000000, /* word 986 (0x0F68) Subroutine */
	0x03DE01B3, /* extern -> 0x6CC */
	0x00000000, /* word 988 (0x0F70) ftMotionCommandEnd() */
	0x88000000, /* word 989 (0x0F74) Subroutine */
	0x03E101BC, /* extern -> 0x6F0 */
	0x00000000, /* word 991 (0x0F7C) ftMotionCommandEnd() */
	0x88000000, /* word 992 (0x0F80) Subroutine */
	0xFFFF01C3, /* extern -> 0x70C */
	0x00000000, /* word 994 (0x0F88) ftMotionCommandEnd() */
	0x04000018, /* word 995 (0x0F8C) ftMotionCommandWait(24) */
	0xC4000006, /* word 996 (0x0F90) ftMotionCommandMakeRumble(0, 6) */
	0x44000244, /* word 997 (0x0F94) ftMotionPlayVoice(580) */
	0x0800003C, /* word 998 (0x0F98) ftMotionCommandWaitAsync(60) */
	0x58000001, /* word 999 (0x0F9C) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 1000 (0x0FA0) ftMotionCommandEnd() */
	0xBC000003, /* word 1001 (0x0FA4) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 1002 (0x0FA8) ftMotionCommandWaitAsync(4) */
	0x0C012070, /* word 1003 (0x0FAC) MakeAttackColl(0, 0, 9, 3, 1, 0, 180, 120, 0, 0, 361, 100, 0, 3, 0, 0, 0, 0) */
	0x00B40078,
	0x00000000,
	0x5A464003,
	0x00000000,
	0x0C810070, /* word 1008 (0x0FC0) MakeAttackColl(1, 0, 8, 3, 1, 0, 180, 60, 0, 0, 361, 100, 0, 3, 0, 0, 0, 0) */
	0x00B4003C,
	0x00000000,
	0x5A464003,
	0x00000000,
	0x0D010070, /* word 1013 (0x0FD4) MakeAttackColl(2, 0, 8, 3, 1, 0, 180, -60, 0, 0, 361, 100, 0, 3, 0, 0, 0, 0) */
	0x00B4FFC4,
	0x00000000,
	0x5A464003,
	0x00000000,
	0x4C00002B, /* word 1018 (0x0FE8) ftMotionCommandPlayFGMStoreInfo(43) */
	0x04000002, /* word 1019 (0x0FEC) ftMotionCommandWait(2) */
	0x18000000, /* word 1020 (0x0FF0) ftMotionCommandClearAttackCollAll() */
	0x0800000C, /* word 1021 (0x0FF4) ftMotionCommandWaitAsync(12) */
	0x58000001, /* word 1022 (0x0FF8) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 1023 (0x0FFC) ftMotionCommandEnd() */
	0xBC000003, /* word 1024 (0x1000) ftMotionCommandSetSlopeContour(3) */
	0x08000007, /* word 1025 (0x1004) ftMotionCommandWaitAsync(7) */
	0x0C0200F0, /* word 1026 (0x1008) MakeAttackColl(0, 0, 16, 7, 1, 0, 220, 120, 0, 0, 361, 100, 0, 3, 0, 1, 0, 10) */
	0x00DC0078,
	0x00000000,
	0x5A464003,
	0x00200500,
	0x0C81E0F0, /* word 1031 (0x101C) MakeAttackColl(1, 0, 15, 7, 1, 0, 220, 30, 0, 0, 361, 100, 0, 3, 0, 1, 0, 10) */
	0x00DC001E,
	0x00000000,
	0x5A464003,
	0x00200500,
	0x4C00002A, /* word 1036 (0x1030) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000005, /* word 1037 (0x1034) ftMotionCommandWait(5) */
	0x18000000, /* word 1038 (0x1038) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1039 (0x103C) ftMotionCommandEnd() */
	0x08000006, /* word 1040 (0x1040) ftMotionCommandWaitAsync(6) */
	0x0C01E190, /* word 1041 (0x1044) MakeAttackColl(0, 0, 15, 12, 1, 0, 220, 16, 0, 0, 361, 100, 0, 3, 1, 2, 0, 0) */
	0x00DC0010,
	0x00000000,
	0x5A464003,
	0x01400000,
	0x98004C00, /* word 1046 (0x1058) Effect(0, 19, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4C000029, /* word 1050 (0x1068) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000004, /* word 1051 (0x106C) ftMotionCommandWait(4) */
	0x0C01E150, /* word 1052 (0x1070) MakeAttackColl(0, 0, 15, 10, 1, 0, 220, 16, 0, 0, 361, 100, 0, 3, 1, 2, 0, 0) */
	0x00DC0010,
	0x00000000,
	0x5A464003,
	0x01400000,
	0x04000010, /* word 1057 (0x1084) ftMotionCommandWait(16) */
	0x18000000, /* word 1058 (0x1088) ftMotionCommandClearAttackCollAll() */
	0xBC000003, /* word 1059 (0x108C) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 1060 (0x1090) ftMotionCommandEnd() */
	0x08000007, /* word 1061 (0x1094) ftMotionCommandWaitAsync(7) */
	0x4C00002A, /* word 1062 (0x1098) ftMotionCommandPlayFGMStoreInfo(42) */
	0x0D040190, /* word 1063 (0x109C) MakeAttackColl(2, 0, 32, 12, 1, 0, 110, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x006E0000,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x0C842190, /* word 1068 (0x10B0) MakeAttackColl(1, 0, 33, 12, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00C80000,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x0C042190, /* word 1073 (0x10C4) MakeAttackColl(0, 0, 33, 12, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00C800B4,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x04000005, /* word 1078 (0x10D8) ftMotionCommandWait(5) */
	0x18000000, /* word 1079 (0x10DC) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1080 (0x10E0) ftMotionCommandEnd() */
	0x08000007, /* word 1081 (0x10E4) ftMotionCommandWaitAsync(7) */
	0x4C00002A, /* word 1082 (0x10E8) ftMotionCommandPlayFGMStoreInfo(42) */
	0x0D040170, /* word 1083 (0x10EC) MakeAttackColl(2, 0, 32, 11, 1, 0, 110, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x006E0000,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x0C842170, /* word 1088 (0x1100) MakeAttackColl(1, 0, 33, 11, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00C80000,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x0C042170, /* word 1093 (0x1114) MakeAttackColl(0, 0, 33, 11, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00C800B4,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x04000005, /* word 1098 (0x1128) ftMotionCommandWait(5) */
	0x18000000, /* word 1099 (0x112C) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1100 (0x1130) ftMotionCommandEnd() */
	0x08000007, /* word 1101 (0x1134) ftMotionCommandWaitAsync(7) */
	0x4C00002A, /* word 1102 (0x1138) ftMotionCommandPlayFGMStoreInfo(42) */
	0x0D040150, /* word 1103 (0x113C) MakeAttackColl(2, 0, 32, 10, 1, 0, 110, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x006E0000,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x0C842150, /* word 1108 (0x1150) MakeAttackColl(1, 0, 33, 10, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00C80000,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x0C042150, /* word 1113 (0x1164) MakeAttackColl(0, 0, 33, 10, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00C800B4,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x04000005, /* word 1118 (0x1178) ftMotionCommandWait(5) */
	0x18000000, /* word 1119 (0x117C) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1120 (0x1180) ftMotionCommandEnd() */
	0x08000007, /* word 1121 (0x1184) ftMotionCommandWaitAsync(7) */
	0x4C00002A, /* word 1122 (0x1188) ftMotionCommandPlayFGMStoreInfo(42) */
	0x0D040130, /* word 1123 (0x118C) MakeAttackColl(2, 0, 32, 9, 1, 0, 110, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x006E0000,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x0C842130, /* word 1128 (0x11A0) MakeAttackColl(1, 0, 33, 9, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00C80000,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x0C042130, /* word 1133 (0x11B4) MakeAttackColl(0, 0, 33, 9, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00C800B4,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x04000005, /* word 1138 (0x11C8) ftMotionCommandWait(5) */
	0x18000000, /* word 1139 (0x11CC) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1140 (0x11D0) ftMotionCommandEnd() */
	0x08000007, /* word 1141 (0x11D4) ftMotionCommandWaitAsync(7) */
	0x4C00002A, /* word 1142 (0x11D8) ftMotionCommandPlayFGMStoreInfo(42) */
	0x0D040130, /* word 1143 (0x11DC) MakeAttackColl(2, 0, 32, 9, 1, 0, 110, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x006E0000,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x0C842130, /* word 1148 (0x11F0) MakeAttackColl(1, 0, 33, 9, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00C80000,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x0C042130, /* word 1153 (0x1204) MakeAttackColl(0, 0, 33, 9, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00C800B4,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x04000005, /* word 1158 (0x1218) ftMotionCommandWait(5) */
	0x18000000, /* word 1159 (0x121C) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1160 (0x1220) ftMotionCommandEnd() */
	0x08000008, /* word 1161 (0x1224) ftMotionCommandWaitAsync(8) */
	0x0C042110, /* word 1162 (0x1228) MakeAttackColl(0, 0, 33, 8, 1, 0, 200, -20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x00C8FFEC,
	0x00000000,
	0x5A464003,
	0x00220000,
	0x0C842110, /* word 1167 (0x123C) MakeAttackColl(1, 0, 33, 8, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x00C800B4,
	0x00000000,
	0x5A464003,
	0x00220000,
	0x4C00002A, /* word 1172 (0x1250) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000011, /* word 1173 (0x1254) ftMotionCommandWait(17) */
	0x0C0421B0, /* word 1174 (0x1258) MakeAttackColl(0, 0, 33, 13, 1, 0, 300, -20, 0, 0, 361, 100, 0, 3, 0, 2, 1, 5) */
	0x012CFFEC,
	0x00000000,
	0x5A464003,
	0x00420280,
	0x0C8421B0, /* word 1179 (0x126C) MakeAttackColl(1, 0, 33, 13, 1, 0, 300, 180, 0, 0, 361, 100, 0, 3, 0, 2, 1, 5) */
	0x012C00B4,
	0x00000000,
	0x5A464003,
	0x00420280,
	0x4C000029, /* word 1184 (0x1280) ftMotionCommandPlayFGMStoreInfo(41) */
	0x99087C00, /* word 1185 (0x1284) Effect(33, 31, 0, 100, 0, 0, 0, 0, 0) */
	0x00640000,
	0x00000000,
	0x00000000,
	0x04000005, /* word 1189 (0x1294) ftMotionCommandWait(5) */
	0x18000000, /* word 1190 (0x1298) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1191 (0x129C) ftMotionCommandEnd() */
	0xBC000004, /* word 1192 (0x12A0) ftMotionCommandSetSlopeContour(4) */
	0xA0500001, /* word 1193 (0x12A4) ftMotionCommandSetModelPartID(10, 1) */
	0x08000008, /* word 1194 (0x12A8) ftMotionCommandWaitAsync(8) */
	0x0C0421B0, /* word 1195 (0x12AC) MakeAttackColl(0, 0, 33, 13, 1, 0, 200, -40, 0, 0, 40, 100, 0, 3, 0, 1, 1, 10) */
	0x00C8FFD8,
	0x00000000,
	0x0A064003,
	0x00220500,
	0x0C8421B0, /* word 1200 (0x12C0) MakeAttackColl(1, 0, 33, 13, 1, 0, 200, 180, 0, 0, 40, 100, 0, 3, 0, 1, 1, 10) */
	0x00C800B4,
	0x00000000,
	0x0A064003,
	0x00220500,
	0x4C00002A, /* word 1205 (0x12D4) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000005, /* word 1206 (0x12D8) ftMotionCommandWait(5) */
	0x18000000, /* word 1207 (0x12DC) ftMotionCommandClearAttackCollAll() */
	0x0800001E, /* word 1208 (0x12E0) ftMotionCommandWaitAsync(30) */
	0xBC000001, /* word 1209 (0x12E4) ftMotionCommandSetSlopeContour(1) */
	0x00000000, /* word 1210 (0x12E8) ftMotionCommandEnd() */
	0xBC000003, /* word 1211 (0x12EC) ftMotionCommandSetSlopeContour(3) */
	0x08000008, /* word 1212 (0x12F0) ftMotionCommandWaitAsync(8) */
	0x98807C00, /* word 1213 (0x12F4) Effect(16, 31, 0, 120, 0, 0, 0, 0, 0) */
	0x00780000,
	0x00000000,
	0x00000000,
	0x0800000C, /* word 1217 (0x1304) ftMotionCommandWaitAsync(12) */
	0x0C020290, /* word 1218 (0x1308) MakeAttackColl(0, 0, 16, 20, 1, 0, 210, -80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15) */
	0x00D2FFB0,
	0x00000000,
	0x5A464003,
	0x00400780,
	0x0C820290, /* word 1223 (0x131C) MakeAttackColl(1, 0, 16, 20, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15) */
	0x00F00078,
	0x00000000,
	0x5A464003,
	0x00400780,
	0x0D010290, /* word 1228 (0x1330) MakeAttackColl(2, 0, 8, 20, 1, 0, 150, 0, 0, 0, 40, 100, 0, 3, 0, 2, 0, 15) */
	0x00960000,
	0x00000000,
	0x0A064003,
	0x00400780,
	0x98004C00, /* word 1233 (0x1344) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x50000000, /* word 1237 (0x1354) ftMotionCommandPlaySmashVoice(0) */
	0x4C000029, /* word 1238 (0x1358) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000004, /* word 1239 (0x135C) ftMotionCommandWait(4) */
	0x18000000, /* word 1240 (0x1360) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1241 (0x1364) ftMotionCommandEnd() */
	0xBC000003, /* word 1242 (0x1368) ftMotionCommandSetSlopeContour(3) */
	0x08000008, /* word 1243 (0x136C) ftMotionCommandWaitAsync(8) */
	0x98807C00, /* word 1244 (0x1370) Effect(16, 31, 0, 120, 0, 0, 0, 0, 0) */
	0x00780000,
	0x00000000,
	0x00000000,
	0x0800000C, /* word 1248 (0x1380) ftMotionCommandWaitAsync(12) */
	0x0C020270, /* word 1249 (0x1384) MakeAttackColl(0, 0, 16, 19, 1, 0, 210, -80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15) */
	0x00D2FFB0,
	0x00000000,
	0x5A464003,
	0x00400780,
	0x0C820270, /* word 1254 (0x1398) MakeAttackColl(1, 0, 16, 19, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15) */
	0x00F00078,
	0x00000000,
	0x5A464003,
	0x00400780,
	0x0D010270, /* word 1259 (0x13AC) MakeAttackColl(2, 0, 8, 19, 1, 0, 150, 0, 0, 0, 40, 100, 0, 3, 0, 2, 0, 15) */
	0x00960000,
	0x00000000,
	0x0A064003,
	0x00400780,
	0x98004C00, /* word 1264 (0x13C0) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x50000000, /* word 1268 (0x13D0) ftMotionCommandPlaySmashVoice(0) */
	0x4C000029, /* word 1269 (0x13D4) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000004, /* word 1270 (0x13D8) ftMotionCommandWait(4) */
	0x18000000, /* word 1271 (0x13DC) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1272 (0x13E0) ftMotionCommandEnd() */
	0xBC000003, /* word 1273 (0x13E4) ftMotionCommandSetSlopeContour(3) */
	0x08000008, /* word 1274 (0x13E8) ftMotionCommandWaitAsync(8) */
	0x98807C00, /* word 1275 (0x13EC) Effect(16, 31, 0, 120, 0, 0, 0, 0, 0) */
	0x00780000,
	0x00000000,
	0x00000000,
	0x0800000C, /* word 1279 (0x13FC) ftMotionCommandWaitAsync(12) */
	0x0C020250, /* word 1280 (0x1400) MakeAttackColl(0, 0, 16, 18, 1, 0, 210, -80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15) */
	0x00D2FFB0,
	0x00000000,
	0x5A464003,
	0x00400780,
	0x0C820250, /* word 1285 (0x1414) MakeAttackColl(1, 0, 16, 18, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15) */
	0x00F00078,
	0x00000000,
	0x5A464003,
	0x00400780,
	0x0D010250, /* word 1290 (0x1428) MakeAttackColl(2, 0, 8, 18, 1, 0, 150, 0, 0, 0, 40, 100, 0, 3, 0, 2, 0, 15) */
	0x00960000,
	0x00000000,
	0x0A064003,
	0x00400780,
	0x98004C00, /* word 1295 (0x143C) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x4C000029, /* word 1299 (0x144C) ftMotionCommandPlayFGMStoreInfo(41) */
	0x50000000, /* word 1300 (0x1450) ftMotionCommandPlaySmashVoice(0) */
	0x04000004, /* word 1301 (0x1454) ftMotionCommandWait(4) */
	0x18000000, /* word 1302 (0x1458) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1303 (0x145C) ftMotionCommandEnd() */
	0xBC000003, /* word 1304 (0x1460) ftMotionCommandSetSlopeContour(3) */
	0x08000008, /* word 1305 (0x1464) ftMotionCommandWaitAsync(8) */
	0x98807C00, /* word 1306 (0x1468) Effect(16, 31, 0, 120, 0, 0, 0, 0, 0) */
	0x00780000,
	0x00000000,
	0x00000000,
	0x0800000C, /* word 1310 (0x1478) ftMotionCommandWaitAsync(12) */
	0x0C020230, /* word 1311 (0x147C) MakeAttackColl(0, 0, 16, 17, 1, 0, 210, -80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15) */
	0x00D2FFB0,
	0x00000000,
	0x5A464003,
	0x00400780,
	0x0C820230, /* word 1316 (0x1490) MakeAttackColl(1, 0, 16, 17, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15) */
	0x00F00078,
	0x00000000,
	0x5A464003,
	0x00400780,
	0x0D010230, /* word 1321 (0x14A4) MakeAttackColl(2, 0, 8, 17, 1, 0, 150, 0, 0, 0, 40, 100, 0, 3, 0, 2, 0, 15) */
	0x00960000,
	0x00000000,
	0x0A064003,
	0x00400780,
	0x98004C00, /* word 1326 (0x14B8) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x4C000029, /* word 1330 (0x14C8) ftMotionCommandPlayFGMStoreInfo(41) */
	0x50000000, /* word 1331 (0x14CC) ftMotionCommandPlaySmashVoice(0) */
	0x04000004, /* word 1332 (0x14D0) ftMotionCommandWait(4) */
	0x18000000, /* word 1333 (0x14D4) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1334 (0x14D8) ftMotionCommandEnd() */
	0xBC000003, /* word 1335 (0x14DC) ftMotionCommandSetSlopeContour(3) */
	0x08000008, /* word 1336 (0x14E0) ftMotionCommandWaitAsync(8) */
	0x98807C00, /* word 1337 (0x14E4) Effect(16, 31, 0, 120, 0, 0, 0, 0, 0) */
	0x00780000,
	0x00000000,
	0x00000000,
	0x0800000C, /* word 1341 (0x14F4) ftMotionCommandWaitAsync(12) */
	0x0C020210, /* word 1342 (0x14F8) MakeAttackColl(0, 0, 16, 16, 1, 0, 210, -80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15) */
	0x00D2FFB0,
	0x00000000,
	0x5A464003,
	0x00400780,
	0x0C820210, /* word 1347 (0x150C) MakeAttackColl(1, 0, 16, 16, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15) */
	0x00F00078,
	0x00000000,
	0x5A464003,
	0x00400780,
	0x0D010210, /* word 1352 (0x1520) MakeAttackColl(2, 0, 8, 16, 1, 0, 150, 0, 0, 0, 40, 100, 0, 3, 0, 2, 0, 15) */
	0x00960000,
	0x00000000,
	0x0A064003,
	0x00400780,
	0x98004C00, /* word 1357 (0x1534) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x4C000029, /* word 1361 (0x1544) ftMotionCommandPlayFGMStoreInfo(41) */
	0x50000000, /* word 1362 (0x1548) ftMotionCommandPlaySmashVoice(0) */
	0x04000004, /* word 1363 (0x154C) ftMotionCommandWait(4) */
	0x18000000, /* word 1364 (0x1550) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1365 (0x1554) ftMotionCommandEnd() */
	0xBC000003, /* word 1366 (0x1558) ftMotionCommandSetSlopeContour(3) */
	0x44000242, /* word 1367 (0x155C) ftMotionPlayVoice(578) */
	0x08000008, /* word 1368 (0x1560) ftMotionCommandWaitAsync(8) */
	0x98807C00, /* word 1369 (0x1564) Effect(16, 31, 0, 60, 0, 0, 0, 0, 0) */
	0x003C0000,
	0x00000000,
	0x00000000,
	0x08000011, /* word 1373 (0x1574) ftMotionCommandWaitAsync(17) */
	0x0C020151, /* word 1374 (0x1578) MakeAttackColl(0, 0, 16, 10, 1, 1, 190, -80, 0, 0, 80, 100, 0, 3, 1, 2, 3, 22) */
	0x00BEFFB0,
	0x00000000,
	0x14064003,
	0x01460B00,
	0x0C820151, /* word 1379 (0x158C) MakeAttackColl(1, 0, 16, 10, 1, 1, 400, 200, 0, 0, 80, 100, 0, 3, 1, 2, 3, 22) */
	0x019000C8,
	0x00000000,
	0x14064003,
	0x01460B00,
	0x98807000, /* word 1384 (0x15A0) Effect(16, 28, 0, 300, 0, 0, 0, 0, 0) */
	0x012C0000,
	0x00000000,
	0x00000000,
	0x98004C00, /* word 1388 (0x15B0) Effect(0, 19, 0, 0, 0, -180, 0, 0, 0) */
	0x00000000,
	0xFF4C0000,
	0x00000000,
	0x9BF89400, /* word 1392 (0x15C0) Effect(-1, 37, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0xC400C007, /* word 1396 (0x15D0) ftMotionCommandMakeRumble(6, 7) */
	0x4C000002, /* word 1397 (0x15D4) ftMotionCommandPlayFGMStoreInfo(2) */
	0x04000003, /* word 1398 (0x15D8) ftMotionCommandWait(3) */
	0x18000000, /* word 1399 (0x15DC) ftMotionCommandClearAttackCollAll() */
	0x04000001, /* word 1400 (0x15E0) ftMotionCommandWait(1) */
	0x2C000000, /* word 1401 (0x15E4) ftMotionCommandRefreshAttackCollID(0) */
	0x2C000001, /* word 1402 (0x15E8) ftMotionCommandRefreshAttackCollID(1) */
	0x98807000, /* word 1403 (0x15EC) Effect(16, 28, 0, 300, 0, 0, 0, 0, 0) */
	0x012C0000,
	0x00000000,
	0x00000000,
	0x9BF89400, /* word 1407 (0x15FC) Effect(-1, 37, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0xC400C007, /* word 1411 (0x160C) ftMotionCommandMakeRumble(6, 7) */
	0x4C000002, /* word 1412 (0x1610) ftMotionCommandPlayFGMStoreInfo(2) */
	0x04000003, /* word 1413 (0x1614) ftMotionCommandWait(3) */
	0x18000000, /* word 1414 (0x1618) ftMotionCommandClearAttackCollAll() */
	0x04000001, /* word 1415 (0x161C) ftMotionCommandWait(1) */
	0x2C000000, /* word 1416 (0x1620) ftMotionCommandRefreshAttackCollID(0) */
	0x2C000001, /* word 1417 (0x1624) ftMotionCommandRefreshAttackCollID(1) */
	0x98807000, /* word 1418 (0x1628) Effect(16, 28, 0, 300, 0, 0, 0, 0, 0) */
	0x012C0000,
	0x00000000,
	0x00000000,
	0x9BF89400, /* word 1422 (0x1638) Effect(-1, 37, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0xC400C007, /* word 1426 (0x1648) ftMotionCommandMakeRumble(6, 7) */
	0x4C000002, /* word 1427 (0x164C) ftMotionCommandPlayFGMStoreInfo(2) */
	0x04000003, /* word 1428 (0x1650) ftMotionCommandWait(3) */
	0x18000000, /* word 1429 (0x1654) ftMotionCommandClearAttackCollAll() */
	0x04000001, /* word 1430 (0x1658) ftMotionCommandWait(1) */
	0x2C000000, /* word 1431 (0x165C) ftMotionCommandRefreshAttackCollID(0) */
	0x2C000001, /* word 1432 (0x1660) ftMotionCommandRefreshAttackCollID(1) */
	0x98807000, /* word 1433 (0x1664) Effect(16, 28, 0, 300, 0, 0, 0, 0, 0) */
	0x012C0000,
	0x00000000,
	0x00000000,
	0x9BF89400, /* word 1437 (0x1674) Effect(-1, 37, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0xC400C007, /* word 1441 (0x1684) ftMotionCommandMakeRumble(6, 7) */
	0x4C000002, /* word 1442 (0x1688) ftMotionCommandPlayFGMStoreInfo(2) */
	0x04000003, /* word 1443 (0x168C) ftMotionCommandWait(3) */
	0x18000000, /* word 1444 (0x1690) ftMotionCommandClearAttackCollAll() */
	0x04000001, /* word 1445 (0x1694) ftMotionCommandWait(1) */
	0x2C000000, /* word 1446 (0x1698) ftMotionCommandRefreshAttackCollID(0) */
	0x2C000001, /* word 1447 (0x169C) ftMotionCommandRefreshAttackCollID(1) */
	0x98807000, /* word 1448 (0x16A0) Effect(16, 28, 0, 300, 0, 0, 0, 0, 0) */
	0x012C0000,
	0x00000000,
	0x00000000,
	0x98004C00, /* word 1452 (0x16B0) Effect(0, 19, 0, 0, 0, -180, 0, 0, 0) */
	0x00000000,
	0xFF4C0000,
	0x00000000,
	0x9BF89400, /* word 1456 (0x16C0) Effect(-1, 37, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0xC400C007, /* word 1460 (0x16D0) ftMotionCommandMakeRumble(6, 7) */
	0x4C000002, /* word 1461 (0x16D4) ftMotionCommandPlayFGMStoreInfo(2) */
	0x04000002, /* word 1462 (0x16D8) ftMotionCommandWait(2) */
	0x18000000, /* word 1463 (0x16DC) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1464 (0x16E0) ftMotionCommandEnd() */
	0xBC000003, /* word 1465 (0x16E4) ftMotionCommandSetSlopeContour(3) */
	0x50000000, /* word 1466 (0x16E8) ftMotionCommandPlaySmashVoice(0) */
	0x08000008, /* word 1467 (0x16EC) ftMotionCommandWaitAsync(8) */
	0xBC000004, /* word 1468 (0x16F0) ftMotionCommandSetSlopeContour(4) */
	0x0C042210, /* word 1469 (0x16F4) MakeAttackColl(0, 0, 33, 16, 1, 0, 210, -60, 0, 0, 60, 80, 0, 3, 0, 2, 1, 35) */
	0x00D2FFC4,
	0x00000000,
	0x0F050003,
	0x00421180,
	0x0C842210, /* word 1474 (0x1708) MakeAttackColl(1, 0, 33, 16, 1, 0, 240, 220, 0, 0, 60, 80, 0, 3, 0, 2, 1, 35) */
	0x00F000DC,
	0x00000000,
	0x0F050003,
	0x00421180,
	0x99087C00, /* word 1479 (0x171C) Effect(33, 31, 0, 220, 0, 0, 0, 0, 0) */
	0x00DC0000,
	0x00000000,
	0x00000000,
	0x98003400, /* word 1483 (0x172C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4C000029, /* word 1487 (0x173C) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000005, /* word 1488 (0x1740) ftMotionCommandWait(5) */
	0x18000000, /* word 1489 (0x1744) ftMotionCommandClearAttackCollAll() */
	0x04000006, /* word 1490 (0x1748) ftMotionCommandWait(6) */
	0x0C0421D0, /* word 1491 (0x174C) MakeAttackColl(0, 0, 33, 14, 1, 0, 210, -60, 0, 0, 60, 80, 0, 3, 0, 1, 1, 35) */
	0x00D2FFC4,
	0x00000000,
	0x0F050003,
	0x00221180,
	0x0C8421D0, /* word 1496 (0x1760) MakeAttackColl(1, 0, 33, 14, 1, 0, 240, 220, 0, 0, 60, 80, 0, 3, 0, 1, 1, 35) */
	0x00F000DC,
	0x00000000,
	0x0F050003,
	0x00221180,
	0x4C00002A, /* word 1501 (0x1774) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000004, /* word 1502 (0x1778) ftMotionCommandWait(4) */
	0x18000000, /* word 1503 (0x177C) ftMotionCommandClearAttackCollAll() */
	0x0800001F, /* word 1504 (0x1780) ftMotionCommandWaitAsync(31) */
	0xBC000003, /* word 1505 (0x1784) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 1506 (0x1788) ftMotionCommandEnd() */
	0x08000004, /* word 1507 (0x178C) ftMotionCommandWaitAsync(4) */
	0x58000032, /* word 1508 (0x1790) ftMotionCommandSetFlag1(50) */
	0x0C036210, /* word 1509 (0x1794) MakeAttackColl(0, 0, 27, 16, 1, 0, 240, -30, 0, 0, 361, 100, 0, 3, 0, 2, 1, 10) */
	0x00F0FFE2,
	0x00000000,
	0x5A464003,
	0x00420500,
	0x0C842210, /* word 1514 (0x17A8) MakeAttackColl(1, 0, 33, 16, 1, 0, 280, 50, 0, 0, 361, 100, 0, 3, 0, 2, 1, 10) */
	0x01180032,
	0x00000000,
	0x5A464003,
	0x00420500,
	0x4C00002A, /* word 1519 (0x17BC) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000004, /* word 1520 (0x17C0) ftMotionCommandWait(4) */
	0x0C0361B0, /* word 1521 (0x17C4) MakeAttackColl(0, 0, 27, 13, 1, 0, 240, -30, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00F0FFE2,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x0C8421B0, /* word 1526 (0x17D8) MakeAttackColl(1, 0, 33, 13, 1, 0, 280, 50, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x01180032,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x04000014, /* word 1531 (0x17EC) ftMotionCommandWait(20) */
	0x58000000, /* word 1532 (0x17F0) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1533 (0x17F4) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1534 (0x17F8) ftMotionCommandEnd() */
	0x08000005, /* word 1535 (0x17FC) ftMotionCommandWaitAsync(5) */
	0x58000014, /* word 1536 (0x1800) ftMotionCommandSetFlag1(20) */
	0x0C0200B1, /* word 1537 (0x1804) MakeAttackColl(0, 0, 16, 5, 1, 1, 230, -110, 0, 0, 361, 100, 0, 3, 0, 2, 3, 0) */
	0x00E6FF92,
	0x00000000,
	0x5A464003,
	0x00460000,
	0x0C8200B1, /* word 1542 (0x1818) MakeAttackColl(1, 0, 16, 5, 1, 1, 350, 200, 0, 0, 361, 100, 0, 3, 0, 2, 3, 0) */
	0x015E00C8,
	0x00000000,
	0x5A464003,
	0x00460000,
	0x98807000, /* word 1547 (0x182C) Effect(16, 28, 0, 300, 0, 0, 0, 0, 0) */
	0x012C0000,
	0x00000000,
	0x00000000,
	0x98004000, /* word 1551 (0x183C) Effect(0, 16, 0, 80, 0, 0, 0, 0, 0) */
	0x00500000,
	0x00000000,
	0x00000000,
	0x9BF89400, /* word 1555 (0x184C) Effect(-1, 37, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0xC400E007, /* word 1559 (0x185C) ftMotionCommandMakeRumble(7, 7) */
	0x4C000002, /* word 1560 (0x1860) ftMotionCommandPlayFGMStoreInfo(2) */
	0x04000002, /* word 1561 (0x1864) ftMotionCommandWait(2) */
	0x18000000, /* word 1562 (0x1868) ftMotionCommandClearAttackCollAll() */
	0x04000005, /* word 1563 (0x186C) ftMotionCommandWait(5) */
	0x2C000000, /* word 1564 (0x1870) ftMotionCommandRefreshAttackCollID(0) */
	0x2C000001, /* word 1565 (0x1874) ftMotionCommandRefreshAttackCollID(1) */
	0x98807000, /* word 1566 (0x1878) Effect(16, 28, 0, 300, 0, 0, 0, 0, 0) */
	0x012C0000,
	0x00000000,
	0x00000000,
	0x9BF89400, /* word 1570 (0x1888) Effect(-1, 37, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0xC400E007, /* word 1574 (0x1898) ftMotionCommandMakeRumble(7, 7) */
	0x4C000002, /* word 1575 (0x189C) ftMotionCommandPlayFGMStoreInfo(2) */
	0x04000002, /* word 1576 (0x18A0) ftMotionCommandWait(2) */
	0x18000000, /* word 1577 (0x18A4) ftMotionCommandClearAttackCollAll() */
	0x04000005, /* word 1578 (0x18A8) ftMotionCommandWait(5) */
	0x2C000000, /* word 1579 (0x18AC) ftMotionCommandRefreshAttackCollID(0) */
	0x2C000001, /* word 1580 (0x18B0) ftMotionCommandRefreshAttackCollID(1) */
	0x98807000, /* word 1581 (0x18B4) Effect(16, 28, 0, 300, 0, 0, 0, 0, 0) */
	0x012C0000,
	0x00000000,
	0x00000000,
	0x98004000, /* word 1585 (0x18C4) Effect(0, 16, 0, 80, 0, 0, 0, 0, 0) */
	0x00500000,
	0x00000000,
	0x00000000,
	0x9BF89400, /* word 1589 (0x18D4) Effect(-1, 37, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0xC400E007, /* word 1593 (0x18E4) ftMotionCommandMakeRumble(7, 7) */
	0x4C000002, /* word 1594 (0x18E8) ftMotionCommandPlayFGMStoreInfo(2) */
	0x04000002, /* word 1595 (0x18EC) ftMotionCommandWait(2) */
	0x18000000, /* word 1596 (0x18F0) ftMotionCommandClearAttackCollAll() */
	0x04000005, /* word 1597 (0x18F4) ftMotionCommandWait(5) */
	0x2C000000, /* word 1598 (0x18F8) ftMotionCommandRefreshAttackCollID(0) */
	0x2C000001, /* word 1599 (0x18FC) ftMotionCommandRefreshAttackCollID(1) */
	0x98807000, /* word 1600 (0x1900) Effect(16, 28, 0, 300, 0, 0, 0, 0, 0) */
	0x012C0000,
	0x00000000,
	0x00000000,
	0x9BF89400, /* word 1604 (0x1910) Effect(-1, 37, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0xC400E007, /* word 1608 (0x1920) ftMotionCommandMakeRumble(7, 7) */
	0x4C000002, /* word 1609 (0x1924) ftMotionCommandPlayFGMStoreInfo(2) */
	0x04000002, /* word 1610 (0x1928) ftMotionCommandWait(2) */
	0x18000000, /* word 1611 (0x192C) ftMotionCommandClearAttackCollAll() */
	0x58000000, /* word 1612 (0x1930) ftMotionCommandSetFlag1(0) */
	0x00000000, /* word 1613 (0x1934) ftMotionCommandEnd() */
	0x08000005, /* word 1614 (0x1938) ftMotionCommandWaitAsync(5) */
	0x58000001, /* word 1615 (0x193C) ftMotionCommandSetFlag1(1) */
	0x0C0421D0, /* word 1616 (0x1940) MakeAttackColl(0, 0, 33, 14, 1, 0, 240, -30, 0, 0, 361, 145, 0, 3, 0, 2, 1, 0) */
	0x00F0FFE2,
	0x00000000,
	0x5A491003,
	0x00420000,
	0x0C8421D0, /* word 1621 (0x1954) MakeAttackColl(1, 0, 33, 14, 1, 0, 260, 110, 0, 0, 361, 145, 0, 3, 0, 2, 1, 0) */
	0x0104006E,
	0x00000000,
	0x5A491003,
	0x00420000,
	0x4C000029, /* word 1626 (0x1968) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000004, /* word 1627 (0x196C) ftMotionCommandWait(4) */
	0x0C042150, /* word 1628 (0x1970) MakeAttackColl(0, 0, 33, 10, 1, 0, 240, -30, 0, 0, 361, 145, 0, 3, 0, 1, 1, 0) */
	0x00F0FFE2,
	0x00000000,
	0x5A491003,
	0x00220000,
	0x0C842150, /* word 1633 (0x1984) MakeAttackColl(1, 0, 33, 10, 1, 0, 260, 110, 0, 0, 361, 145, 0, 3, 0, 1, 1, 0) */
	0x0104006E,
	0x00000000,
	0x5A491003,
	0x00220000,
	0x4C00002A, /* word 1638 (0x1998) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000008, /* word 1639 (0x199C) ftMotionCommandWait(8) */
	0x58000000, /* word 1640 (0x19A0) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1641 (0x19A4) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1642 (0x19A8) ftMotionCommandEnd() */
	0xBC000004, /* word 1643 (0x19AC) ftMotionCommandSetSlopeContour(4) */
	0x38000051, /* word 1644 (0x19B0) ftMotionPlayFGM(81) */
	0x98003400, /* word 1645 (0x19B4) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x0800000F, /* word 1649 (0x19C4) ftMotionCommandWaitAsync(15) */
	0x00000000, /* word 1650 (0x19C8) ftMotionCommandEnd() */
	0x08000006, /* word 1651 (0x19CC) ftMotionCommandWaitAsync(6) */
	0x58000001, /* word 1652 (0x19D0) ftMotionCommandSetFlag1(1) */
	0x44000243, /* word 1653 (0x19D4) ftMotionPlayVoice(579) */
	0x0C038050, /* word 1654 (0x19D8) MakeAttackColl(0, 0, 28, 2, 1, 0, 320, -50, 45, 0, 80, 100, 30, 3, 0, 1, 0, 0) */
	0x0140FFCE,
	0x002D0000,
	0x1406407B,
	0x00200000,
	0x0C838050, /* word 1659 (0x19EC) MakeAttackColl(1, 0, 28, 2, 1, 0, 360, 100, 30, 0, 80, 100, 30, 3, 0, 1, 0, 0) */
	0x01680064,
	0x001E0000,
	0x1406407B,
	0x00200000,
	0x80000004, /* word 1664 (0x1A00) ftMotionCommandLoopBegin(4) */
	0x04000002, /* word 1665 (0x1A04) ftMotionCommandWait(2) */
	0x18000000, /* word 1666 (0x1A08) ftMotionCommandClearAttackCollAll() */
	0x04000001, /* word 1667 (0x1A0C) ftMotionCommandWait(1) */
	0x2C000000, /* word 1668 (0x1A10) ftMotionCommandRefreshAttackCollID(0) */
	0x2C000001, /* word 1669 (0x1A14) ftMotionCommandRefreshAttackCollID(1) */
	0x84000000, /* word 1670 (0x1A18) ftMotionCommandLoopEnd() */
	0x04000002, /* word 1671 (0x1A1C) ftMotionCommandWait(2) */
	0x18000000, /* word 1672 (0x1A20) ftMotionCommandClearAttackCollAll() */
	0x0C038090, /* word 1673 (0x1A24) MakeAttackColl(0, 0, 28, 4, 1, 0, 290, -50, 45, 0, 80, 150, 0, 3, 0, 1, 0, 0) */
	0x0122FFCE,
	0x002D0000,
	0x14096003,
	0x00200000,
	0x0C838090, /* word 1678 (0x1A38) MakeAttackColl(1, 0, 28, 4, 1, 0, 320, 60, 30, 0, 80, 150, 0, 3, 0, 1, 0, 0) */
	0x0140003C,
	0x001E0000,
	0x14096003,
	0x00200000,
	0x58000000, /* word 1683 (0x1A4C) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1684 (0x1A50) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1685 (0x1A54) ftMotionCommandEnd() */
	0x38000051, /* word 1686 (0x1A58) ftMotionPlayFGM(81) */
	0x98003400, /* word 1687 (0x1A5C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 1691 (0x1A6C) ftMotionCommandEnd() */
	0x08000004, /* word 1692 (0x1A70) ftMotionCommandWaitAsync(4) */
	0x58000014, /* word 1693 (0x1A74) ftMotionCommandSetFlag1(20) */
	0x0C0201D0, /* word 1694 (0x1A78) MakeAttackColl(0, 0, 16, 14, 1, 0, 250, -60, 0, 0, -90, 100, 0, 3, 0, 2, 0, 0) */
	0x00FAFFC4,
	0x00000000,
	0xE9864003,
	0x00400000,
	0x0C8201D0, /* word 1699 (0x1A8C) MakeAttackColl(1, 0, 16, 14, 1, 0, 280, 120, 0, 0, -90, 100, 0, 3, 0, 2, 0, 0) */
	0x01180078,
	0x00000000,
	0xE9864003,
	0x00400000,
	0x4C000029, /* word 1704 (0x1AA0) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000009, /* word 1705 (0x1AA4) ftMotionCommandWait(9) */
	0x58000000, /* word 1706 (0x1AA8) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1707 (0x1AAC) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1708 (0x1AB0) ftMotionCommandEnd() */
	0x38000051, /* word 1709 (0x1AB4) ftMotionPlayFGM(81) */
	0x98003400, /* word 1710 (0x1AB8) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 1714 (0x1AC8) ftMotionCommandEnd() */
	0x08000001, /* word 1715 (0x1ACC) ftMotionCommandWaitAsync(1) */
	0x380000FB, /* word 1716 (0x1AD0) ftMotionPlayFGM(251) */
	0x04000050, /* word 1717 (0x1AD4) ftMotionCommandWait(80) */
	0x5C000001, /* word 1718 (0x1AD8) ftMotionCommandSetFlag2(1) */
	0x00000000, /* word 1719 (0x1ADC) ftMotionCommandEnd() */
	0x90000000, /* word 1720 (0x1AE0) Goto */
	0x074906B3, /* -> word 1715 (0x1ACC) */
	0xB0B40000, /* word 1722 (0x1AE8) ftMotionCommandSetColAnim(45, 0) */
	0x74000002, /* word 1723 (0x1AEC) ftMotionCommandSetHitStatusAll(2) */
	0x98004C00, /* word 1724 (0x1AF0) Effect(0, 19, 0, 0, 0, -180, 0, 0, 0) */
	0x00000000,
	0xFF4C0000,
	0x00000000,
	0x08000004, /* word 1728 (0x1B00) ftMotionCommandWaitAsync(4) */
	0x68000000, /* word 1729 (0x1B04) ftMotionCommandSetAirJumpMax(0) */
	0x58000001, /* word 1730 (0x1B08) ftMotionCommandSetFlag1(1) */
	0x380000F9, /* word 1731 (0x1B0C) ftMotionPlayFGM(249) */
	0x98005800, /* word 1732 (0x1B10) Effect(0, 22, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x98287C00, /* word 1736 (0x1B20) Effect(5, 31, 0, 0, 0, 0, 200, 200, 0) */
	0x00000000,
	0x000000C8,
	0x00C80000,
	0x0C000050, /* word 1740 (0x1B30) MakeAttackColl(0, 0, 0, 2, 1, 0, 200, 0, -30, 140, 100, 0, 1, 3, 3, 0, 1, 120) */
	0x00C80000,
	0xFFE2008C,
	0x19000007,
	0x03023C00,
	0x0C800050, /* word 1745 (0x1B44) MakeAttackColl(1, 0, 0, 2, 1, 0, 200, 0, -30, -140, 100, 0, 1, 3, 3, 0, 1, 120) */
	0x00C80000,
	0xFFE2FF74,
	0x19000007,
	0x03023C00,
	0x0D000050, /* word 1750 (0x1B58) MakeAttackColl(2, 0, 0, 2, 1, 0, 200, 0, 330, 140, 100, 0, 1, 3, 3, 0, 1, 110) */
	0x00C80000,
	0x014A008C,
	0x19000007,
	0x03023700,
	0x0D800050, /* word 1755 (0x1B6C) MakeAttackColl(3, 0, 0, 2, 1, 0, 200, 0, 330, -140, 100, 0, 1, 3, 3, 0, 1, 110) */
	0x00C80000,
	0x014AFF74,
	0x19000007,
	0x03023700,
	0x04000002, /* word 1760 (0x1B80) ftMotionCommandWait(2) */
	0x74000001, /* word 1761 (0x1B84) ftMotionCommandSetHitStatusAll(1) */
	0x80000003, /* word 1762 (0x1B88) ftMotionCommandLoopBegin(3) */
	0x98287C00, /* word 1763 (0x1B8C) Effect(5, 31, 0, 0, 0, 0, 200, 200, 0) */
	0x00000000,
	0x000000C8,
	0x00C80000,
	0x0C000030, /* word 1767 (0x1B9C) MakeAttackColl(0, 0, 0, 1, 1, 0, 180, 0, -80, 110, 105, 0, 1, 3, 3, 0, 1, 110) */
	0x00B40000,
	0xFFB0006E,
	0x1A400007,
	0x03023700,
	0x0C800030, /* word 1772 (0x1BB0) MakeAttackColl(1, 0, 0, 1, 1, 0, 180, 0, -80, -110, 105, 0, 1, 3, 3, 0, 1, 110) */
	0x00B40000,
	0xFFB0FF92,
	0x1A400007,
	0x03023700,
	0x0D000030, /* word 1777 (0x1BC4) MakeAttackColl(2, 0, 0, 1, 1, 0, 180, 0, 310, 110, 100, 0, 1, 3, 3, 0, 1, 70) */
	0x00B40000,
	0x0136006E,
	0x19000007,
	0x03022300,
	0x0D800030, /* word 1782 (0x1BD8) MakeAttackColl(3, 0, 0, 1, 1, 0, 180, 0, 310, -110, 100, 0, 1, 3, 3, 0, 1, 70) */
	0x00B40000,
	0x0136FF92,
	0x19000007,
	0x03022300,
	0x04000002, /* word 1787 (0x1BEC) ftMotionCommandWait(2) */
	0x18000000, /* word 1788 (0x1BF0) ftMotionCommandClearAttackCollAll() */
	0x84000000, /* word 1789 (0x1BF4) ftMotionCommandLoopEnd() */
	0x8000000A, /* word 1790 (0x1BF8) ftMotionCommandLoopBegin(10) */
	0x98287C00, /* word 1791 (0x1BFC) Effect(5, 31, 0, 0, 0, 0, 200, 200, 200) */
	0x00000000,
	0x000000C8,
	0x00C800C8,
	0x0C000030, /* word 1795 (0x1C0C) MakeAttackColl(0, 0, 0, 1, 1, 0, 140, 0, 290, 100, 200, 0, 1, 3, 3, 0, 1, 20) */
	0x008C0000,
	0x01220064,
	0x32000007,
	0x03020A00,
	0x0C800030, /* word 1800 (0x1C20) MakeAttackColl(1, 0, 0, 1, 1, 0, 140, 0, 290, -100, 200, 0, 1, 3, 3, 0, 1, 20) */
	0x008C0000,
	0x0122FF9C,
	0x32000007,
	0x03020A00,
	0x0D000030, /* word 1805 (0x1C34) MakeAttackColl(2, 0, 0, 1, 1, 0, 140, 0, 10, 100, 110, 0, 1, 3, 3, 0, 1, 50) */
	0x008C0000,
	0x000A0064,
	0x1B800007,
	0x03021900,
	0x0D800030, /* word 1810 (0x1C48) MakeAttackColl(3, 0, 0, 1, 1, 0, 140, 0, 10, -100, 110, 0, 1, 3, 3, 0, 1, 50) */
	0x008C0000,
	0x000AFF9C,
	0x1B800007,
	0x03021900,
	0x04000002, /* word 1815 (0x1C5C) ftMotionCommandWait(2) */
	0x18000000, /* word 1816 (0x1C60) ftMotionCommandClearAttackCollAll() */
	0x84000000, /* word 1817 (0x1C64) ftMotionCommandLoopEnd() */
	0x0C000032, /* word 1818 (0x1C68) MakeAttackColl(0, 0, 0, 1, 1, 2, 400, 0, 100, 0, 361, 100, 80, 3, 3, 1, 1, 0) */
	0x01900000,
	0x00640000,
	0x5A464143,
	0x03220000,
	0x04000002, /* word 1823 (0x1C7C) ftMotionCommandWait(2) */
	0x18000000, /* word 1824 (0x1C80) ftMotionCommandClearAttackCollAll() */
	0xB4000000, /* word 1825 (0x1C84) ftMotionCommandResetColAnim() */
	0x00000000, /* word 1826 (0x1C88) ftMotionCommandEnd() */
	0xB0B40000, /* word 1827 (0x1C8C) ftMotionCommandSetColAnim(45, 0) */
	0x74000002, /* word 1828 (0x1C90) ftMotionCommandSetHitStatusAll(2) */
	0x98003400, /* word 1829 (0x1C94) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x08000004, /* word 1833 (0x1CA4) ftMotionCommandWaitAsync(4) */
	0x380000F9, /* word 1834 (0x1CA8) ftMotionPlayFGM(249) */
	0x74000001, /* word 1835 (0x1CAC) ftMotionCommandSetHitStatusAll(1) */
	0x8000000D, /* word 1836 (0x1CB0) ftMotionCommandLoopBegin(13) */
	0x98287C00, /* word 1837 (0x1CB4) Effect(5, 31, 0, 0, 0, 0, 200, 200, 200) */
	0x00000000,
	0x000000C8,
	0x00C800C8,
	0x0C000030, /* word 1841 (0x1CC4) MakeAttackColl(0, 0, 0, 1, 1, 0, 160, 0, 290, 150, 200, 0, 1, 3, 3, 0, 1, 20) */
	0x00A00000,
	0x01220096,
	0x32000007,
	0x03020A00,
	0x0C800030, /* word 1846 (0x1CD8) MakeAttackColl(1, 0, 0, 1, 1, 0, 160, 0, 290, -150, 200, 0, 1, 3, 3, 0, 1, 20) */
	0x00A00000,
	0x0122FF6A,
	0x32000007,
	0x03020A00,
	0x0D000030, /* word 1851 (0x1CEC) MakeAttackColl(2, 0, 0, 1, 1, 0, 160, 0, 10, 150, 110, 0, 1, 3, 3, 0, 1, 50) */
	0x00A00000,
	0x000A0096,
	0x1B800007,
	0x03021900,
	0x0D800030, /* word 1856 (0x1D00) MakeAttackColl(3, 0, 0, 1, 1, 0, 160, 0, 10, -150, 110, 0, 1, 3, 3, 0, 1, 50) */
	0x00A00000,
	0x000AFF6A,
	0x1B800007,
	0x03021900,
	0x04000002, /* word 1861 (0x1D14) ftMotionCommandWait(2) */
	0x18000000, /* word 1862 (0x1D18) ftMotionCommandClearAttackCollAll() */
	0x84000000, /* word 1863 (0x1D1C) ftMotionCommandLoopEnd() */
	0x90000000, /* word 1864 (0x1D20) Goto */
	0x0769071A, /* -> word 1818 (0x1C68) */
	0x00000000, /* word 1866 (0x1D28) ftMotionCommandEnd() */
	0xBC000003, /* word 1867 (0x1D2C) ftMotionCommandSetSlopeContour(3) */
	0x98004C00, /* word 1868 (0x1D30) Effect(0, 19, 0, 0, 0, -180, 0, 0, 0) */
	0x00000000,
	0xFF4C0000,
	0x00000000,
	0x0400000D, /* word 1872 (0x1D40) ftMotionCommandWait(13) */
	0x98807C00, /* word 1873 (0x1D44) Effect(16, 31, 0, 150, 0, 0, 0, 0, 0) */
	0x00960000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 1877 (0x1D54) ftMotionCommandEnd() */
	0x0400000D, /* word 1878 (0x1D58) ftMotionCommandWait(13) */
	0x98807C00, /* word 1879 (0x1D5C) Effect(16, 31, 0, 150, 0, 0, 0, 0, 0) */
	0x00960000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 1883 (0x1D6C) ftMotionCommandEnd() */
	0xBC000003, /* word 1884 (0x1D70) ftMotionCommandSetSlopeContour(3) */
	0x98807C00, /* word 1885 (0x1D74) Effect(16, 31, 0, 150, 0, 0, 0, 0, 0) */
	0x00960000,
	0x00000000,
	0x00000000,
	0xC4000007, /* word 1889 (0x1D84) ftMotionCommandMakeRumble(0, 7) */
	0x98005800, /* word 1890 (0x1D88) Effect(0, 22, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x04000001, /* word 1894 (0x1D98) ftMotionCommandWait(1) */
	0x94000000, /* word 1895 (0x1D9C) ftMotionCommandPauseScript() */
	0x90000000, /* word 1896 (0x1DA0) Goto */
	0x078A0762, /* -> word 1890 (0x1D88) */
	0xBC000003, /* word 1898 (0x1DA8) ftMotionCommandSetSlopeContour(3) */
	0xC4000007, /* word 1899 (0x1DAC) ftMotionCommandMakeRumble(0, 7) */
	0xB0BC0000, /* word 1900 (0x1DB0) ftMotionCommandSetColAnim(47, 0) */
	0x54000001, /* word 1901 (0x1DB4) ftMotionCommandSetFlag0(1) */
	0x98804800, /* word 1902 (0x1DB8) Effect(16, 18, 0, 200, 0, 0, 0, 0, 0) */
	0x00C80000,
	0x00000000,
	0x00000000,
	0x98004C00, /* word 1906 (0x1DC8) Effect(0, 19, 0, 0, 0, -180, 0, 0, 0) */
	0x00000000,
	0xFF4C0000,
	0x00000000,
	0xC4000009, /* word 1910 (0x1DD8) ftMotionCommandMakeRumble(0, 9) */
	0x00000000, /* word 1911 (0x1DDC) ftMotionCommandEnd() */
	0xB0BC0000, /* word 1912 (0x1DE0) ftMotionCommandSetColAnim(47, 0) */
	0x54000001, /* word 1913 (0x1DE4) ftMotionCommandSetFlag0(1) */
	0x98804800, /* word 1914 (0x1DE8) Effect(16, 18, 0, 200, 0, 0, 0, 0, 0) */
	0x00C80000,
	0x00000000,
	0x00000000,
	0x98004000, /* word 1918 (0x1DF8) Effect(0, 16, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0xC4000009, /* word 1922 (0x1E08) ftMotionCommandMakeRumble(0, 9) */
	0x00000000, /* word 1923 (0x1E0C) ftMotionCommandEnd() */
	0x98003400, /* word 1924 (0x1E10) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x08000003, /* word 1928 (0x1E20) ftMotionCommandWaitAsync(3) */
	0x88000000, /* word 1929 (0x1E24) Subroutine */
	0x07920000, /* -> word 0 (0x0000) */
	0x68000000, /* word 1931 (0x1E2C) ftMotionCommandSetAirJumpMax(0) */
	0x0800000A, /* word 1932 (0x1E30) ftMotionCommandWaitAsync(10) */
	0x54000001, /* word 1933 (0x1E34) ftMotionCommandSetFlag0(1) */
	0x380000F7, /* word 1934 (0x1E38) ftMotionPlayFGM(247) */
	0xC4000006, /* word 1935 (0x1E3C) ftMotionCommandMakeRumble(0, 6) */
	0x60000001, /* word 1936 (0x1E40) ftMotionCommandSetFlag3(1) */
	0x88000000, /* word 1937 (0x1E44) Subroutine */
	0x07960011, /* -> word 17 (0x0044) */
	0x0800002B, /* word 1939 (0x1E4C) ftMotionCommandWaitAsync(43) */
	0x60000000, /* word 1940 (0x1E50) ftMotionCommandSetFlag3(0) */
	0x88000000, /* word 1941 (0x1E54) Subroutine */
	0x07990017, /* -> word 23 (0x005C) */
	0x08000031, /* word 1943 (0x1E5C) ftMotionCommandWaitAsync(49) */
	0x88000000, /* word 1944 (0x1E60) Subroutine */
	0x07A1001D, /* -> word 29 (0x0074) */
	0x00000000, /* word 1946 (0x1E68) ftMotionCommandEnd() */
	0x98002C00, /* word 1947 (0x1E6C) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x08000003, /* word 1951 (0x1E7C) ftMotionCommandWaitAsync(3) */
	0x88000000, /* word 1952 (0x1E80) Subroutine */
	0x07A70000, /* -> word 0 (0x0000) */
	0x0800000A, /* word 1954 (0x1E88) ftMotionCommandWaitAsync(10) */
	0x54000001, /* word 1955 (0x1E8C) ftMotionCommandSetFlag0(1) */
	0x380000F7, /* word 1956 (0x1E90) ftMotionPlayFGM(247) */
	0xC4000006, /* word 1957 (0x1E94) ftMotionCommandMakeRumble(0, 6) */
	0x88000000, /* word 1958 (0x1E98) Subroutine */
	0x07AA0011, /* -> word 17 (0x0044) */
	0x0800002B, /* word 1960 (0x1EA0) ftMotionCommandWaitAsync(43) */
	0x88000000, /* word 1961 (0x1EA4) Subroutine */
	0x07AD0017, /* -> word 23 (0x005C) */
	0x08000031, /* word 1963 (0x1EAC) ftMotionCommandWaitAsync(49) */
	0x88000000, /* word 1964 (0x1EB0) Subroutine */
	0xFFFF001D, /* -> word 29 (0x0074) */
	0x00000000, /* word 1966 (0x1EB8) ftMotionCommandEnd() */
	0x00000000, /* word 1967 (0x1EBC) ftMotionCommandEnd() */
};
