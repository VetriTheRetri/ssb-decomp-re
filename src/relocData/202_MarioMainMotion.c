/* ftMotionCommand script data for relocData file 202 (MarioMainMotion) */
/* File size: 6560 bytes (0x19A0) */

#include "relocdata_types.h"
#include <ft/ftdef.h>

u32 dMarioMainMotion[1640] = {
	0xAC000002, /* word 0 (0x0000) ftMotionCommandSetTexturePartID(2) */
	0x04000002, /* word 1 (0x0004) ftMotionCommandWait(2) */
	0xAC000003, /* word 2 (0x0008) ftMotionCommandSetTexturePartID(3) */
	0x04000003, /* word 3 (0x000C) ftMotionCommandWait(3) */
	0xAC000002, /* word 4 (0x0010) ftMotionCommandSetTexturePartID(2) */
	0x04000002, /* word 5 (0x0014) ftMotionCommandWait(2) */
	0xAC000000, /* word 6 (0x0018) ftMotionCommandSetTexturePartID(0) */
	0x04000001, /* word 7 (0x001C) ftMotionCommandWait(1) */
	0x8C000000, /* word 8 (0x0020) ftMotionCommandReturn() */
	0xBC000003, /* word 9 (0x0024) ftMotionCommandSetSlopeContour(3) */
	0x88000000, /* word 10 (0x0028) Subroutine */
	0x000E0000, /* -> word 0 (0x0000) */
	0x0400005A, /* word 12 (0x0030) ftMotionCommandWait(90) */
	0x88000000, /* word 13 (0x0034) Subroutine */
	0x00110000, /* -> word 0 (0x0000) */
	0x0400000A, /* word 15 (0x003C) ftMotionCommandWait(10) */
	0x88000000, /* word 16 (0x0040) Subroutine */
	0x00140000, /* -> word 0 (0x0000) */
	0x04000050, /* word 18 (0x0048) ftMotionCommandWait(80) */
	0x90000000, /* word 19 (0x004C) Goto */
	0x002D0009, /* -> word 9 (0x0024) */
	0xBC000003, /* word 21 (0x0054) ftMotionCommandSetSlopeContour(3) */
	0x38000079, /* word 22 (0x0058) ftMotionPlayFGM(121) */
	0x80000002, /* word 23 (0x005C) ftMotionCommandLoopBegin(2) */
	0x98002C00, /* word 24 (0x0060) Effect(0, 11, 0, 0, 0, -120, 0, 60, 0) */
	0x00000000,
	0xFF880000,
	0x003C0000,
	0x04000004, /* word 28 (0x0070) ftMotionCommandWait(4) */
	0x84000000, /* word 29 (0x0074) ftMotionCommandLoopEnd() */
	0x00000000, /* word 30 (0x0078) ftMotionCommandEnd() */
	0x08000002, /* word 31 (0x007C) ftMotionCommandWaitAsync(2) */
	0x3800006E, /* word 32 (0x0080) ftMotionPlayFGM(110) */
	0x98002C00, /* word 33 (0x0084) Effect(0, 11, 0, 0, 0, 60, 0, 0, 0) */
	0x00000000,
	0x003C0000,
	0x00000000,
	0x0400000F, /* word 37 (0x0094) ftMotionCommandWait(15) */
	0x3800006E, /* word 38 (0x0098) ftMotionPlayFGM(110) */
	0x98002C00, /* word 39 (0x009C) Effect(0, 11, 0, 0, 0, 60, 0, 0, 0) */
	0x00000000,
	0x003C0000,
	0x00000000,
	0x94000000, /* word 43 (0x00AC) ftMotionCommandPauseScript() */
	0x90000000, /* word 44 (0x00B0) Goto */
	0x006F001F, /* -> word 31 (0x007C) */
	0x38000080, /* word 46 (0x00B8) ftMotionPlayFGM(128) */
	0x98002C00, /* word 47 (0x00BC) Effect(0, 11, 0, 0, 0, 60, 0, 0, 0) */
	0x00000000,
	0x003C0000,
	0x00000000,
	0x00000000, /* word 51 (0x00CC) ftMotionCommandEnd() */
	0xBC000003, /* word 52 (0x00D0) ftMotionCommandSetSlopeContour(3) */
	0x08000006, /* word 53 (0x00D4) ftMotionCommandWaitAsync(6) */
	0x58000001, /* word 54 (0x00D8) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 55 (0x00DC) ftMotionCommandEnd() */
	0x98004000, /* word 56 (0x00E0) Effect(0, 16, 0, 0, 0, 120, 0, 0, 0) */
	0x00000000,
	0x00780000,
	0x00000000,
	0x08000010, /* word 60 (0x00F0) ftMotionCommandWaitAsync(16) */
	0x58000001, /* word 61 (0x00F4) ftMotionCommandSetFlag1(1) */
	0x5C000001, /* word 62 (0x00F8) ftMotionCommandSetFlag2(1) */
	0x98002C00, /* word 63 (0x00FC) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 67 (0x010C) ftMotionCommandEnd() */
	0x74000003, /* word 68 (0x0110) ftMotionCommandSetHitStatusAll(3) */
	0x08000002, /* word 69 (0x0114) ftMotionCommandWaitAsync(2) */
	0x74000001, /* word 70 (0x0118) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 71 (0x011C) ftMotionCommandEnd() */
	0x440001B3, /* word 72 (0x0120) ftMotionPlayVoice(435) */
	0x98003400, /* word 73 (0x0124) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 77 (0x0134) ftMotionCommandEnd() */
	0x440001B4, /* word 78 (0x0138) ftMotionPlayVoice(436) */
	0x80000002, /* word 79 (0x013C) ftMotionCommandLoopBegin(2) */
	0x98002C00, /* word 80 (0x0140) Effect(0, 11, 0, 0, 0, 0, 100, 100, 100) */
	0x00000000,
	0x00000064,
	0x00640064,
	0x04000006, /* word 84 (0x0150) ftMotionCommandWait(6) */
	0x84000000, /* word 85 (0x0154) ftMotionCommandLoopEnd() */
	0x00000000, /* word 86 (0x0158) ftMotionCommandEnd() */
	0xBC000003, /* word 87 (0x015C) ftMotionCommandSetSlopeContour(3) */
	0x3800004D, /* word 88 (0x0160) ftMotionPlayFGM(77) */
	0x98002C00, /* word 89 (0x0164) Effect(0, 11, 0, 0, 0, -60, 0, 0, 0) */
	0x00000000,
	0xFFC40000,
	0x00000000,
	0x00000000, /* word 93 (0x0174) ftMotionCommandEnd() */
	0xBC000003, /* word 94 (0x0178) ftMotionCommandSetSlopeContour(3) */
	0x3800004D, /* word 95 (0x017C) ftMotionPlayFGM(77) */
	0x98003400, /* word 96 (0x0180) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 100 (0x0190) ftMotionCommandEnd() */
	0x3800027B, /* word 101 (0x0194) ftMotionPlayFGM(635) */
	0x00000000, /* word 102 (0x0198) ftMotionCommandEnd() */
	0x3800027B, /* word 103 (0x019C) ftMotionPlayFGM(635) */
	0x74000003, /* word 104 (0x01A0) ftMotionCommandSetHitStatusAll(3) */
	0x08000002, /* word 105 (0x01A4) ftMotionCommandWaitAsync(2) */
	0x74000001, /* word 106 (0x01A8) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 107 (0x01AC) ftMotionCommandEnd() */
	0xAC000001, /* word 108 (0x01B0) ftMotionCommandSetTexturePartID(1) */
	0x8C000000, /* word 109 (0x01B4) ftMotionCommandReturn() */
	0x88000000, /* word 110 (0x01B8) Subroutine */
	0x0072006C, /* -> word 108 (0x01B0) */
	0x00000000, /* word 112 (0x01C0) ftMotionCommandEnd() */
	0x88000000, /* word 113 (0x01C4) Subroutine */
	0x0094006C, /* -> word 108 (0x01B0) */
	0x34000000, /* word 115 (0x01CC) SetDamageThrown */
	0x020B01D6, /* extern -> 0x758 */
	0x00000000, /* word 117 (0x01D4) ftMotionCommandEnd() */
	0xBC000003, /* word 118 (0x01D8) ftMotionCommandSetSlopeContour(3) */
	0x3800004D, /* word 119 (0x01DC) ftMotionPlayFGM(77) */
	0x98003400, /* word 120 (0x01E0) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 124 (0x01F0) ftMotionCommandEnd() */
	0x08000008, /* word 125 (0x01F4) ftMotionCommandWaitAsync(8) */
	0x74000003, /* word 126 (0x01F8) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 127 (0x01FC) ftMotionCommandEnd() */
	0x08000018, /* word 128 (0x0200) ftMotionCommandWaitAsync(24) */
	0x74000001, /* word 129 (0x0204) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 130 (0x0208) ftMotionCommandEnd() */
	0xAC000001, /* word 131 (0x020C) ftMotionCommandSetTexturePartID(1) */
	0xBC000004, /* word 132 (0x0210) ftMotionCommandSetSlopeContour(4) */
	0x98003400, /* word 133 (0x0214) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x9BF88400, /* word 137 (0x0224) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x04000002, /* word 141 (0x0234) ftMotionCommandWait(2) */
	0xBC000000, /* word 142 (0x0238) ftMotionCommandSetSlopeContour(0) */
	0x08000018, /* word 143 (0x023C) ftMotionCommandWaitAsync(24) */
	0xBC000004, /* word 144 (0x0240) ftMotionCommandSetSlopeContour(4) */
	0x04000001, /* word 145 (0x0244) ftMotionCommandWait(1) */
	0x00000000, /* word 146 (0x0248) ftMotionCommandEnd() */
	0x90000000, /* word 147 (0x024C) Goto */
	0x00A40083, /* -> word 131 (0x020C) */
	0x98002C00, /* word 149 (0x0254) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 153 (0x0264) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 154 (0x0268) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 155 (0x026C) ftMotionCommandSetHitStatusAll(1) */
	0x8C000000, /* word 156 (0x0270) ftMotionCommandReturn() */
	0x74000003, /* word 157 (0x0274) ftMotionCommandSetHitStatusAll(3) */
	0x08000016, /* word 158 (0x0278) ftMotionCommandWaitAsync(22) */
	0x74000001, /* word 159 (0x027C) ftMotionCommandSetHitStatusAll(1) */
	0x08000002, /* word 160 (0x0280) ftMotionCommandWaitAsync(2) */
	0x58000001, /* word 161 (0x0284) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 162 (0x0288) ftMotionCommandEnd() */
	0x90000000, /* word 163 (0x028C) Goto */
	0x00A7009D, /* -> word 157 (0x0274) */
	0x3800000B, /* word 165 (0x0294) ftMotionPlayFGM(11) */
	0x88000000, /* word 166 (0x0298) Subroutine */
	0x00AA0095, /* -> word 149 (0x0254) */
	0x00000000, /* word 168 (0x02A0) ftMotionCommandEnd() */
	0x90000000, /* word 169 (0x02A4) Goto */
	0x00AC00A5, /* -> word 165 (0x0294) */
	0x90000000, /* word 171 (0x02AC) Goto */
	0x00AE00A5, /* -> word 165 (0x0294) */
	0x90000000, /* word 173 (0x02B4) Goto */
	0x010000A5, /* -> word 165 (0x0294) */
	0x74000003, /* word 175 (0x02BC) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 176 (0x02C0) ftMotionCommandWaitAsync(20) */
	0xAC000001, /* word 177 (0x02C4) ftMotionCommandSetTexturePartID(1) */
	0x98003400, /* word 178 (0x02C8) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x0C0180C0, /* word 182 (0x02D8) MakeAttackColl(0, 0, 12, 6, 0, 0, 200, 0, 100, 0, 361, 100, 90, 3, 1, 1, 1, 0) */
	0x00C80000,
	0x00640000,
	0x5A46416B,
	0x01220000,
	0x04000002, /* word 187 (0x02EC) ftMotionCommandWait(2) */
	0x18000000, /* word 188 (0x02F0) ftMotionCommandClearAttackCollAll() */
	0x04000003, /* word 189 (0x02F4) ftMotionCommandWait(3) */
	0x0C0180C0, /* word 190 (0x02F8) MakeAttackColl(0, 0, 12, 6, 0, 0, 200, 0, 100, 0, 361, 100, 90, 3, 1, 1, 1, 0) */
	0x00C80000,
	0x00640000,
	0x5A46416B,
	0x01220000,
	0x74000001, /* word 195 (0x030C) ftMotionCommandSetHitStatusAll(1) */
	0x04000002, /* word 196 (0x0310) ftMotionCommandWait(2) */
	0x18000000, /* word 197 (0x0314) ftMotionCommandClearAttackCollAll() */
	0x0400000E, /* word 198 (0x0318) ftMotionCommandWait(14) */
	0xAC000000, /* word 199 (0x031C) ftMotionCommandSetTexturePartID(0) */
	0x00000000, /* word 200 (0x0320) ftMotionCommandEnd() */
	0x74000003, /* word 201 (0x0324) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 202 (0x0328) ftMotionCommandWaitAsync(20) */
	0x98003400, /* word 203 (0x032C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x0C0320C0, /* word 207 (0x033C) MakeAttackColl(0, 0, 25, 6, 0, 0, 180, 70, -50, 60, 361, 100, 90, 3, 1, 1, 1, 0) */
	0x00B40046,
	0xFFCE003C,
	0x5A46416B,
	0x01220000,
	0x04000002, /* word 212 (0x0350) ftMotionCommandWait(2) */
	0x18000000, /* word 213 (0x0354) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 214 (0x0358) ftMotionCommandWait(2) */
	0x0C0320C0, /* word 215 (0x035C) MakeAttackColl(0, 0, 25, 6, 0, 0, 180, 70, -50, 60, 361, 100, 90, 3, 1, 1, 1, 0) */
	0x00B40046,
	0xFFCE003C,
	0x5A46416B,
	0x01220000,
	0x74000001, /* word 220 (0x0370) ftMotionCommandSetHitStatusAll(1) */
	0x04000002, /* word 221 (0x0374) ftMotionCommandWait(2) */
	0x18000000, /* word 222 (0x0378) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 223 (0x037C) ftMotionCommandEnd() */
	0xC4000009, /* word 224 (0x0380) ftMotionCommandMakeRumble(0, 9) */
	0x9800AC00, /* word 225 (0x0384) Effect(0, 43, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x440001B3, /* word 229 (0x0394) ftMotionPlayVoice(435) */
	0x38000011, /* word 230 (0x0398) ftMotionPlayFGM(17) */
	0x98007C00, /* word 231 (0x039C) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 235 (0x03AC) ftMotionCommandSetHitStatusAll(3) */
	0x08000018, /* word 236 (0x03B0) ftMotionCommandWaitAsync(24) */
	0x74000001, /* word 237 (0x03B4) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 238 (0x03B8) ftMotionCommandEnd() */
	0xC4000007, /* word 239 (0x03BC) ftMotionCommandMakeRumble(0, 7) */
	0x9800AC00, /* word 240 (0x03C0) Effect(0, 43, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x440001B3, /* word 244 (0x03D0) ftMotionPlayVoice(435) */
	0x3800000B, /* word 245 (0x03D4) ftMotionPlayFGM(11) */
	0x98007C00, /* word 246 (0x03D8) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 250 (0x03E8) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 251 (0x03EC) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 252 (0x03F0) ftMotionCommandSetHitStatusAll(1) */
	0xC8000007, /* word 253 (0x03F4) ftMotionCommandStopRumble(7) */
	0x00000000, /* word 254 (0x03F8) ftMotionCommandEnd() */
	0x90000000, /* word 255 (0x03FC) Goto */
	0x019E00EF, /* -> word 239 (0x03BC) */
	0x3800000B, /* word 257 (0x0404) ftMotionPlayFGM(11) */
	0x98007C00, /* word 258 (0x0408) Effect(0, 31, 0, 0, 120, 0, 0, 0, 0) */
	0x00000078,
	0x00000000,
	0x00000000,
	0x08000004, /* word 262 (0x0418) ftMotionCommandWaitAsync(4) */
	0x98004000, /* word 263 (0x041C) Effect(0, 16, 0, 100, 0, 0, 0, 0, 0) */
	0x00640000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 267 (0x042C) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 268 (0x0430) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 269 (0x0434) ftMotionCommandSetHitStatusAll(1) */
	0x58000001, /* word 270 (0x0438) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 271 (0x043C) ftMotionCommandEnd() */
	0x3800000B, /* word 272 (0x0440) ftMotionPlayFGM(11) */
	0x98007C00, /* word 273 (0x0444) Effect(0, 31, 0, 0, 120, 0, 0, 0, 0) */
	0x00000078,
	0x00000000,
	0x00000000,
	0x08000004, /* word 277 (0x0454) ftMotionCommandWaitAsync(4) */
	0x98003C00, /* word 278 (0x0458) Effect(0, 15, 0, -100, 0, 0, 0, 0, 0) */
	0xFF9C0000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 282 (0x0468) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 283 (0x046C) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 284 (0x0470) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 285 (0x0474) ftMotionCommandEnd() */
	0xAC000001, /* word 286 (0x0478) ftMotionCommandSetTexturePartID(1) */
	0x74000003, /* word 287 (0x047C) ftMotionCommandSetHitStatusAll(3) */
	0x38000013, /* word 288 (0x0480) ftMotionPlayFGM(19) */
	0x00000000, /* word 289 (0x0484) ftMotionCommandEnd() */
	0xAC000001, /* word 290 (0x0488) ftMotionCommandSetTexturePartID(1) */
	0x74000003, /* word 291 (0x048C) ftMotionCommandSetHitStatusAll(3) */
	0x0400003C, /* word 292 (0x0490) ftMotionCommandWait(60) */
	0x74000001, /* word 293 (0x0494) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 294 (0x0498) ftMotionCommandEnd() */
	0x74000003, /* word 295 (0x049C) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 296 (0x04A0) ftMotionCommandEnd() */
	0x74000003, /* word 297 (0x04A4) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 298 (0x04A8) ftMotionCommandEnd() */
	0x74000003, /* word 299 (0x04AC) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 300 (0x04B0) ftMotionCommandEnd() */
	0x74000003, /* word 301 (0x04B4) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 302 (0x04B8) ftMotionCommandEnd() */
	0x74000003, /* word 303 (0x04BC) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 304 (0x04C0) ftMotionCommandEnd() */
	0x74000003, /* word 305 (0x04C4) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 306 (0x04C8) ftMotionCommandEnd() */
	0x74000003, /* word 307 (0x04CC) ftMotionCommandSetHitStatusAll(3) */
	0x08000024, /* word 308 (0x04D0) ftMotionCommandWaitAsync(36) */
	0x74000001, /* word 309 (0x04D4) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 310 (0x04D8) ftMotionCommandEnd() */
	0x98007C00, /* word 311 (0x04DC) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 315 (0x04EC) ftMotionCommandSetHitStatusAll(3) */
	0x440001AD, /* word 316 (0x04F0) ftMotionPlayVoice(429) */
	0x08000004, /* word 317 (0x04F4) ftMotionCommandWaitAsync(4) */
	0x0C0360C0, /* word 318 (0x04F8) MakeAttackColl(0, 0, 27, 6, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0) */
	0x01180000,
	0x00000000,
	0x5A464193,
	0x00220000,
	0x0C80A0C0, /* word 323 (0x050C) MakeAttackColl(1, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0) */
	0x00960000,
	0x00000000,
	0x5A464193,
	0x00220000,
	0x4C00002A, /* word 328 (0x0520) ftMotionCommandPlayFGMStoreInfo(42) */
	0x98004C00, /* word 329 (0x0524) Effect(0, 19, 0, 0, -80, -180, 0, 0, 0) */
	0x0000FFB0,
	0xFF4C0000,
	0x00000000,
	0x04000002, /* word 333 (0x0534) ftMotionCommandWait(2) */
	0x74000001, /* word 334 (0x0538) ftMotionCommandSetHitStatusAll(1) */
	0x04000004, /* word 335 (0x053C) ftMotionCommandWait(4) */
	0x18000000, /* word 336 (0x0540) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 337 (0x0544) ftMotionCommandEnd() */
	0x74000003, /* word 338 (0x0548) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 339 (0x054C) ftMotionCommandEnd() */
	0x98007C00, /* word 340 (0x0550) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 344 (0x0560) ftMotionCommandSetHitStatusAll(3) */
	0x440001AD, /* word 345 (0x0564) ftMotionPlayVoice(429) */
	0x08000003, /* word 346 (0x0568) ftMotionCommandWaitAsync(3) */
	0x0C00A0C0, /* word 347 (0x056C) MakeAttackColl(0, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0) */
	0x00960000,
	0x00000000,
	0x5A464193,
	0x00220000,
	0x0C8360C0, /* word 352 (0x0580) MakeAttackColl(1, 0, 27, 6, 0, 0, 280, 80, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0) */
	0x01180050,
	0x00000000,
	0x5A464193,
	0x00220000,
	0x98004C00, /* word 357 (0x0594) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x4C00002A, /* word 361 (0x05A4) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000002, /* word 362 (0x05A8) ftMotionCommandWait(2) */
	0x74000001, /* word 363 (0x05AC) ftMotionCommandSetHitStatusAll(1) */
	0x04000004, /* word 364 (0x05B0) ftMotionCommandWait(4) */
	0x18000000, /* word 365 (0x05B4) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 366 (0x05B8) ftMotionCommandEnd() */
	0x74000003, /* word 367 (0x05BC) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 368 (0x05C0) ftMotionCommandEnd() */
	0x3800000B, /* word 369 (0x05C4) ftMotionPlayFGM(11) */
	0x98004000, /* word 370 (0x05C8) Effect(0, 16, 0, 100, 0, 0, 0, 0, 0) */
	0x00640000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 374 (0x05D8) ftMotionCommandSetHitStatusAll(3) */
	0x0400000F, /* word 375 (0x05DC) ftMotionCommandWait(15) */
	0x74000001, /* word 376 (0x05E0) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 377 (0x05E4) ftMotionCommandEnd() */
	0x74000003, /* word 378 (0x05E8) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 379 (0x05EC) ftMotionCommandEnd() */
	0x3800000B, /* word 380 (0x05F0) ftMotionPlayFGM(11) */
	0x98004000, /* word 381 (0x05F4) Effect(0, 16, 0, 100, 0, 0, 0, 0, 0) */
	0x00640000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 385 (0x0604) ftMotionCommandSetHitStatusAll(3) */
	0x0400000F, /* word 386 (0x0608) ftMotionCommandWait(15) */
	0x74000001, /* word 387 (0x060C) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 388 (0x0610) ftMotionCommandEnd() */
	0x08000002, /* word 389 (0x0614) ftMotionCommandWaitAsync(2) */
	0x58000001, /* word 390 (0x0618) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 391 (0x061C) ftMotionCommandEnd() */
	0x08000004, /* word 392 (0x0620) ftMotionCommandWaitAsync(4) */
	0x58000001, /* word 393 (0x0624) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 394 (0x0628) ftMotionCommandEnd() */
	0x08000008, /* word 395 (0x062C) ftMotionCommandWaitAsync(8) */
	0x54000001, /* word 396 (0x0630) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 397 (0x0634) ftMotionCommandEnd() */
	0x08000004, /* word 398 (0x0638) ftMotionCommandWaitAsync(4) */
	0x98004C00, /* word 399 (0x063C) Effect(0, 19, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 403 (0x064C) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 404 (0x0650) ftMotionCommandEnd() */
	0x08000008, /* word 405 (0x0654) ftMotionCommandWaitAsync(8) */
	0x98002C00, /* word 406 (0x0658) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 410 (0x0668) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 411 (0x066C) ftMotionCommandEnd() */
	0x60000006, /* word 412 (0x0670) ftMotionCommandSetFlag3(6) */
	0x90000000, /* word 413 (0x0674) Goto */
	0x01B70195, /* -> word 405 (0x0654) */
	0x08000008, /* word 415 (0x067C) ftMotionCommandWaitAsync(8) */
	0x98002C00, /* word 416 (0x0680) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 420 (0x0690) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 421 (0x0694) ftMotionCommandEnd() */
	0x08000006, /* word 422 (0x0698) ftMotionCommandWaitAsync(6) */
	0x98002C00, /* word 423 (0x069C) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 427 (0x06AC) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 428 (0x06B0) ftMotionCommandEnd() */
	0x08000008, /* word 429 (0x06B4) ftMotionCommandWaitAsync(8) */
	0x50000000, /* word 430 (0x06B8) ftMotionCommandPlaySmashVoice(0) */
	0x98004C00, /* word 431 (0x06BC) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x54000001, /* word 435 (0x06CC) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 436 (0x06D0) ftMotionCommandEnd() */
	0x60000006, /* word 437 (0x06D4) ftMotionCommandSetFlag3(6) */
	0x90000000, /* word 438 (0x06D8) Goto */
	0x01D101AD, /* -> word 429 (0x06B4) */
	0x08000008, /* word 440 (0x06E0) ftMotionCommandWaitAsync(8) */
	0x50000000, /* word 441 (0x06E4) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 442 (0x06E8) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 446 (0x06F8) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 447 (0x06FC) ftMotionCommandEnd() */
	0x08000006, /* word 448 (0x0700) ftMotionCommandWaitAsync(6) */
	0x50000000, /* word 449 (0x0704) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 450 (0x0708) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 454 (0x0718) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 455 (0x071C) ftMotionCommandEnd() */
	0x08000006, /* word 456 (0x0720) ftMotionCommandWaitAsync(6) */
	0x98002C00, /* word 457 (0x0724) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 461 (0x0734) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 462 (0x0738) ftMotionCommandEnd() */
	0x60000004, /* word 463 (0x073C) ftMotionCommandSetFlag3(4) */
	0x90000000, /* word 464 (0x0740) Goto */
	0x01EA01C8, /* -> word 456 (0x0720) */
	0x08000006, /* word 466 (0x0748) ftMotionCommandWaitAsync(6) */
	0x98002C00, /* word 467 (0x074C) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 471 (0x075C) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 472 (0x0760) ftMotionCommandEnd() */
	0x08000006, /* word 473 (0x0764) ftMotionCommandWaitAsync(6) */
	0x98002C00, /* word 474 (0x0768) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 478 (0x0778) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 479 (0x077C) ftMotionCommandEnd() */
	0x08000006, /* word 480 (0x0780) ftMotionCommandWaitAsync(6) */
	0x50000000, /* word 481 (0x0784) ftMotionCommandPlaySmashVoice(0) */
	0x98004000, /* word 482 (0x0788) Effect(0, 16, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 486 (0x0798) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 487 (0x079C) ftMotionCommandEnd() */
	0x60000004, /* word 488 (0x07A0) ftMotionCommandSetFlag3(4) */
	0x90000000, /* word 489 (0x07A4) Goto */
	0x020001E0, /* -> word 480 (0x0780) */
	0x08000006, /* word 491 (0x07AC) ftMotionCommandWaitAsync(6) */
	0x50000000, /* word 492 (0x07B0) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 493 (0x07B4) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 497 (0x07C4) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 498 (0x07C8) ftMotionCommandEnd() */
	0x08000006, /* word 499 (0x07CC) ftMotionCommandWaitAsync(6) */
	0x50000000, /* word 500 (0x07D0) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 501 (0x07D4) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 505 (0x07E4) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 506 (0x07E8) ftMotionCommandEnd() */
	0x08000012, /* word 507 (0x07EC) ftMotionCommandWaitAsync(18) */
	0x54000001, /* word 508 (0x07F0) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 509 (0x07F4) ftMotionCommandEnd() */
	0x60000009, /* word 510 (0x07F8) ftMotionCommandSetFlag3(9) */
	0x90000000, /* word 511 (0x07FC) Goto */
	0x020601FB, /* -> word 507 (0x07EC) */
	0x08000012, /* word 513 (0x0804) ftMotionCommandWaitAsync(18) */
	0x54000001, /* word 514 (0x0808) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 515 (0x080C) ftMotionCommandEnd() */
	0x60000009, /* word 516 (0x0810) ftMotionCommandSetFlag3(9) */
	0x90000000, /* word 517 (0x0814) Goto */
	0x02B30201, /* -> word 513 (0x0804) */
	0x08000002, /* word 519 (0x081C) ftMotionCommandWaitAsync(2) */
	0xCC040000, /* word 520 (0x0820) ftMotionCommandSetAfterImage(1, 0) */
	0x08000004, /* word 521 (0x0824) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 522 (0x0828) Subroutine */
	0x02160000, /* extern -> 0x0 */
	0x04000005, /* word 524 (0x0830) ftMotionCommandWait(5) */
	0xCC03FFFF, /* word 525 (0x0834) ftMotionCommandSetAfterImage(0, -1) */
	0x04000003, /* word 526 (0x0838) ftMotionCommandWait(3) */
	0x18000000, /* word 527 (0x083C) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 528 (0x0840) ftMotionCommandEnd() */
	0x08000007, /* word 529 (0x0844) ftMotionCommandWaitAsync(7) */
	0xCC040000, /* word 530 (0x0848) ftMotionCommandSetAfterImage(1, 0) */
	0x08000009, /* word 531 (0x084C) ftMotionCommandWaitAsync(9) */
	0xBC000004, /* word 532 (0x0850) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 533 (0x0854) Subroutine */
	0x02240019, /* extern -> 0x64 */
	0x04000003, /* word 535 (0x085C) ftMotionCommandWait(3) */
	0xCC03FFFF, /* word 536 (0x0860) ftMotionCommandSetAfterImage(0, -1) */
	0x04000006, /* word 537 (0x0864) ftMotionCommandWait(6) */
	0x18000000, /* word 538 (0x0868) ftMotionCommandClearAttackCollAll() */
	0x08000024, /* word 539 (0x086C) ftMotionCommandWaitAsync(36) */
	0xBC000003, /* word 540 (0x0870) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 541 (0x0874) ftMotionCommandEnd() */
	0x50000000, /* word 542 (0x0878) ftMotionCommandPlaySmashVoice(0) */
	0x08000014, /* word 543 (0x087C) ftMotionCommandWaitAsync(20) */
	0xBC000004, /* word 544 (0x0880) ftMotionCommandSetSlopeContour(4) */
	0xCC040000, /* word 545 (0x0884) ftMotionCommandSetAfterImage(1, 0) */
	0x08000016, /* word 546 (0x0888) ftMotionCommandWaitAsync(22) */
	0x88000000, /* word 547 (0x088C) Subroutine */
	0x02310032, /* extern -> 0xC8 */
	0x04000003, /* word 549 (0x0894) ftMotionCommandWait(3) */
	0xBC000003, /* word 550 (0x0898) ftMotionCommandSetSlopeContour(3) */
	0x04000003, /* word 551 (0x089C) ftMotionCommandWait(3) */
	0x18000000, /* word 552 (0x08A0) ftMotionCommandClearAttackCollAll() */
	0x04000001, /* word 553 (0x08A4) ftMotionCommandWait(1) */
	0xCC03FFFF, /* word 554 (0x08A8) ftMotionCommandSetAfterImage(0, -1) */
	0x00000000, /* word 555 (0x08AC) ftMotionCommandEnd() */
	0xBC000004, /* word 556 (0x08B0) ftMotionCommandSetSlopeContour(4) */
	0x08000002, /* word 557 (0x08B4) ftMotionCommandWaitAsync(2) */
	0xCC040000, /* word 558 (0x08B8) ftMotionCommandSetAfterImage(1, 0) */
	0x08000004, /* word 559 (0x08BC) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 560 (0x08C0) Subroutine */
	0x0239004B, /* extern -> 0x12C */
	0x04000004, /* word 562 (0x08C8) ftMotionCommandWait(4) */
	0xCC03FFFF, /* word 563 (0x08CC) ftMotionCommandSetAfterImage(0, -1) */
	0x04000016, /* word 564 (0x08D0) ftMotionCommandWait(22) */
	0x18000000, /* word 565 (0x08D4) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 566 (0x08D8) ftMotionCommandEnd() */
	0x08000004, /* word 567 (0x08DC) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 568 (0x08E0) Subroutine */
	0x02400068, /* extern -> 0x1A0 */
	0x04000008, /* word 570 (0x08E8) ftMotionCommandWait(8) */
	0x18000000, /* word 571 (0x08EC) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 572 (0x08F0) ftMotionCommandEnd() */
	0x08000009, /* word 573 (0x08F4) ftMotionCommandWaitAsync(9) */
	0xBC000004, /* word 574 (0x08F8) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 575 (0x08FC) Subroutine */
	0x024E007D, /* extern -> 0x1F4 */
	0x04000009, /* word 577 (0x0904) ftMotionCommandWait(9) */
	0x18000000, /* word 578 (0x0908) ftMotionCommandClearAttackCollAll() */
	0x08000024, /* word 579 (0x090C) ftMotionCommandWaitAsync(36) */
	0xBC000003, /* word 580 (0x0910) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 581 (0x0914) ftMotionCommandEnd() */
	0xC4000007, /* word 582 (0x0918) ftMotionCommandMakeRumble(0, 7) */
	0x50000000, /* word 583 (0x091C) ftMotionCommandPlaySmashVoice(0) */
	0xB1300028, /* word 584 (0x0920) ftMotionCommandSetColAnim(76, 40) */
	0xAC000001, /* word 585 (0x0924) ftMotionCommandSetTexturePartID(1) */
	0x08000014, /* word 586 (0x0928) ftMotionCommandWaitAsync(20) */
	0xBC000004, /* word 587 (0x092C) ftMotionCommandSetSlopeContour(4) */
	0x08000016, /* word 588 (0x0930) ftMotionCommandWaitAsync(22) */
	0x88000000, /* word 589 (0x0934) Subroutine */
	0x02570092, /* extern -> 0x248 */
	0x04000003, /* word 591 (0x093C) ftMotionCommandWait(3) */
	0xBC000003, /* word 592 (0x0940) ftMotionCommandSetSlopeContour(3) */
	0x04000003, /* word 593 (0x0944) ftMotionCommandWait(3) */
	0x18000000, /* word 594 (0x0948) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 595 (0x094C) ftMotionCommandEnd() */
	0xBC000004, /* word 596 (0x0950) ftMotionCommandSetSlopeContour(4) */
	0x08000004, /* word 597 (0x0954) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 598 (0x0958) Subroutine */
	0x025D00AC, /* extern -> 0x2B0 */
	0x0400001B, /* word 600 (0x0960) ftMotionCommandWait(27) */
	0x18000000, /* word 601 (0x0964) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 602 (0x0968) ftMotionCommandEnd() */
	0x08000004, /* word 603 (0x096C) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 604 (0x0970) Subroutine */
	0x026400C9, /* extern -> 0x324 */
	0x04000008, /* word 606 (0x0978) ftMotionCommandWait(8) */
	0x18000000, /* word 607 (0x097C) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 608 (0x0980) ftMotionCommandEnd() */
	0x08000009, /* word 609 (0x0984) ftMotionCommandWaitAsync(9) */
	0xBC000004, /* word 610 (0x0988) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 611 (0x098C) Subroutine */
	0x026E00DE, /* extern -> 0x378 */
	0x04000009, /* word 613 (0x0994) ftMotionCommandWait(9) */
	0x18000000, /* word 614 (0x0998) ftMotionCommandClearAttackCollAll() */
	0x08000024, /* word 615 (0x099C) ftMotionCommandWaitAsync(36) */
	0xBC000003, /* word 616 (0x09A0) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 617 (0x09A4) ftMotionCommandEnd() */
	0x08000014, /* word 618 (0x09A8) ftMotionCommandWaitAsync(20) */
	0xBC000004, /* word 619 (0x09AC) ftMotionCommandSetSlopeContour(4) */
	0x08000016, /* word 620 (0x09B0) ftMotionCommandWaitAsync(22) */
	0x88000000, /* word 621 (0x09B4) Subroutine */
	0x027700F3, /* extern -> 0x3CC */
	0x04000003, /* word 623 (0x09BC) ftMotionCommandWait(3) */
	0xBC000003, /* word 624 (0x09C0) ftMotionCommandSetSlopeContour(3) */
	0x04000003, /* word 625 (0x09C4) ftMotionCommandWait(3) */
	0x18000000, /* word 626 (0x09C8) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 627 (0x09CC) ftMotionCommandEnd() */
	0xBC000004, /* word 628 (0x09D0) ftMotionCommandSetSlopeContour(4) */
	0x08000004, /* word 629 (0x09D4) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 630 (0x09D8) Subroutine */
	0x027E010C, /* extern -> 0x430 */
	0x0400001B, /* word 632 (0x09E0) ftMotionCommandWait(27) */
	0x18000000, /* word 633 (0x09E4) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 634 (0x09E8) ftMotionCommandEnd() */
	0xB12C0008, /* word 635 (0x09EC) ftMotionCommandSetColAnim(75, 8) */
	0x08000004, /* word 636 (0x09F0) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 637 (0x09F4) Subroutine */
	0x02860125, /* extern -> 0x494 */
	0x04000008, /* word 639 (0x09FC) ftMotionCommandWait(8) */
	0x18000000, /* word 640 (0x0A00) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 641 (0x0A04) ftMotionCommandEnd() */
	0xB12C0010, /* word 642 (0x0A08) ftMotionCommandSetColAnim(75, 16) */
	0x08000009, /* word 643 (0x0A0C) ftMotionCommandWaitAsync(9) */
	0xBC000004, /* word 644 (0x0A10) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 645 (0x0A14) Subroutine */
	0x0294013E, /* extern -> 0x4F8 */
	0x0800000B, /* word 647 (0x0A1C) ftMotionCommandWaitAsync(11) */
	0x54000001, /* word 648 (0x0A20) ftMotionCommandSetFlag0(1) */
	0x04000009, /* word 649 (0x0A24) ftMotionCommandWait(9) */
	0x18000000, /* word 650 (0x0A28) ftMotionCommandClearAttackCollAll() */
	0x08000024, /* word 651 (0x0A2C) ftMotionCommandWaitAsync(36) */
	0xBC000003, /* word 652 (0x0A30) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 653 (0x0A34) ftMotionCommandEnd() */
	0xB12C001C, /* word 654 (0x0A38) ftMotionCommandSetColAnim(75, 28) */
	0x50000000, /* word 655 (0x0A3C) ftMotionCommandPlaySmashVoice(0) */
	0x08000014, /* word 656 (0x0A40) ftMotionCommandWaitAsync(20) */
	0xBC000004, /* word 657 (0x0A44) ftMotionCommandSetSlopeContour(4) */
	0x08000017, /* word 658 (0x0A48) ftMotionCommandWaitAsync(23) */
	0x88000000, /* word 659 (0x0A4C) Subroutine */
	0x029F0157, /* extern -> 0x55C */
	0x54000002, /* word 661 (0x0A54) ftMotionCommandSetFlag0(2) */
	0x04000002, /* word 662 (0x0A58) ftMotionCommandWait(2) */
	0xBC000003, /* word 663 (0x0A5C) ftMotionCommandSetSlopeContour(3) */
	0x04000003, /* word 664 (0x0A60) ftMotionCommandWait(3) */
	0x18000000, /* word 665 (0x0A64) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 666 (0x0A68) ftMotionCommandEnd() */
	0xBC000004, /* word 667 (0x0A6C) ftMotionCommandSetSlopeContour(4) */
	0xB12C000A, /* word 668 (0x0A70) ftMotionCommandSetColAnim(75, 10) */
	0x08000004, /* word 669 (0x0A74) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 670 (0x0A78) Subroutine */
	0x02AF0170, /* extern -> 0x5C0 */
	0x0400001B, /* word 672 (0x0A80) ftMotionCommandWait(27) */
	0x18000000, /* word 673 (0x0A84) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 674 (0x0A88) ftMotionCommandEnd() */
	0xBC000003, /* word 675 (0x0A8C) ftMotionCommandSetSlopeContour(3) */
	0x08000008, /* word 676 (0x0A90) ftMotionCommandWaitAsync(8) */
	0x54000001, /* word 677 (0x0A94) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 678 (0x0A98) ftMotionCommandEnd() */
	0xBC000003, /* word 679 (0x0A9C) ftMotionCommandSetSlopeContour(3) */
	0x08000008, /* word 680 (0x0AA0) ftMotionCommandWaitAsync(8) */
	0x54000001, /* word 681 (0x0AA4) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 682 (0x0AA8) ftMotionCommandEnd() */
	0xC4000007, /* word 683 (0x0AAC) ftMotionCommandMakeRumble(0, 7) */
	0xBC000004, /* word 684 (0x0AB0) ftMotionCommandSetSlopeContour(4) */
	0xAC000001, /* word 685 (0x0AB4) ftMotionCommandSetTexturePartID(1) */
	0x88000000, /* word 686 (0x0AB8) Subroutine */
	0x036D018D, /* extern -> 0x634 */
	0x04000010, /* word 688 (0x0AC0) ftMotionCommandWait(16) */
	0x18000000, /* word 689 (0x0AC4) ftMotionCommandClearAttackCollAll() */
	0x90000000, /* word 690 (0x0AC8) Goto */
	0x02C002AB, /* -> word 683 (0x0AAC) */
	0x98007C00, /* word 692 (0x0AD0) Effect(0, 31, 0, 0, 0, 120, 200, 200, 200) */
	0x00000000,
	0x007800C8,
	0x00C800C8,
	0x80000003, /* word 696 (0x0AE0) ftMotionCommandLoopBegin(3) */
	0x98002800, /* word 697 (0x0AE4) Effect(0, 10, 0, 0, 0, 120, 200, 200, 200) */
	0x00000000,
	0x007800C8,
	0x00C800C8,
	0x04000004, /* word 701 (0x0AF4) ftMotionCommandWait(4) */
	0x84000000, /* word 702 (0x0AF8) ftMotionCommandLoopEnd() */
	0x90000000, /* word 703 (0x0AFC) Goto */
	0x02C902B4, /* -> word 692 (0x0AD0) */
	0x9BF88800, /* word 705 (0x0B04) Effect(-1, 34, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x440001B8, /* word 709 (0x0B14) ftMotionPlayVoice(440) */
	0xAC000001, /* word 710 (0x0B18) ftMotionCommandSetTexturePartID(1) */
	0x74000003, /* word 711 (0x0B1C) ftMotionCommandSetHitStatusAll(3) */
	0x90000000, /* word 712 (0x0B20) Goto */
	0x02CB02B4, /* -> word 692 (0x0AD0) */
	0x90000000, /* word 714 (0x0B28) Goto */
	0x02E202B4, /* -> word 692 (0x0AD0) */
	0x9BF88400, /* word 716 (0x0B30) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x98003400, /* word 720 (0x0B40) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 724 (0x0B50) ftMotionCommandEnd() */
	0xBC000003, /* word 725 (0x0B54) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 726 (0x0B58) ftMotionCommandEnd() */
	0xBC000003, /* word 727 (0x0B5C) ftMotionCommandSetSlopeContour(3) */
	0x440001B2, /* word 728 (0x0B60) ftMotionPlayVoice(434) */
	0xAC000001, /* word 729 (0x0B64) ftMotionCommandSetTexturePartID(1) */
	0x80000006, /* word 730 (0x0B68) ftMotionCommandLoopBegin(6) */
	0x9800A000, /* word 731 (0x0B6C) Effect(0, 40, 0, 0, 130, 0, 200, 260, 200) */
	0x00000082,
	0x000000C8,
	0x010400C8,
	0x04000014, /* word 735 (0x0B7C) ftMotionCommandWait(20) */
	0x84000000, /* word 736 (0x0B80) ftMotionCommandLoopEnd() */
	0x90000000, /* word 737 (0x0B84) Goto */
	0x02EC02D7, /* -> word 727 (0x0B5C) */
	0x48000144, /* word 739 (0x0B8C) ftMotionPlayInterruptableVoice(324) */
	0xAC000003, /* word 740 (0x0B90) ftMotionCommandSetTexturePartID(3) */
	0xBC000003, /* word 741 (0x0B94) ftMotionCommandSetSlopeContour(3) */
	0x98016800, /* word 742 (0x0B98) Effect(0, 90, 0, 0, 130, 0, 200, 260, 200) */
	0x00000082,
	0x000000C8,
	0x010400C8,
	0x0400000A, /* word 746 (0x0BA8) ftMotionCommandWait(10) */
	0x90000000, /* word 747 (0x0BAC) Goto */
	0x02FC02E3, /* -> word 739 (0x0B8C) */
	0xFFFFFFFF, /* word 749 (0x0BB4) data */
	0x00000006, /* word 750 (0x0BB8) data */
	0x00000169, /* word 751 (0x0BBC) data */
	0x00000064, /* word 752 (0x0BC0) data */
	0x00000000, /* word 753 (0x0BC4) data */
	0x00000000, /* word 754 (0x0BC8) data */
	0x00000000, /* word 755 (0x0BCC) data */
	0xFFFFFFFF, /* word 756 (0x0BD0) data */
	0x00000006, /* word 757 (0x0BD4) data */
	0x00000169, /* word 758 (0x0BD8) data */
	0x00000064, /* word 759 (0x0BDC) data */
	0x00000000, /* word 760 (0x0BE0) data */
	0x00000000, /* word 761 (0x0BE4) data */
	0x00000000, /* word 762 (0x0BE8) data */
	0x30000000, /* word 763 (0x0BEC) SetThrow */
	0x031B02ED, /* -> word 749 (0x0BB4) */
	0xBC000003, /* word 765 (0x0BF4) ftMotionCommandSetSlopeContour(3) */
	0x98002C00, /* word 766 (0x0BF8) Effect(0, 11, 0, 0, 0, -120, 0, 60, 0) */
	0x00000000,
	0xFF880000,
	0x003C0000,
	0x08000006, /* word 770 (0x0C08) ftMotionCommandWaitAsync(6) */
	0x0C038030, /* word 771 (0x0C0C) MakeAttackColl(0, 0, 28, 1, 1, 0, 290, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0) */
	0x01220000,
	0x00000000,
	0x5A464003,
	0x00200000,
	0x38000013, /* word 776 (0x0C20) ftMotionPlayFGM(19) */
	0x04000001, /* word 777 (0x0C24) ftMotionCommandWait(1) */
	0x18000000, /* word 778 (0x0C28) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 779 (0x0C2C) ftMotionCommandEnd() */
	0x00000034, /* word 780 (0x0C30) data */
	0x0000000C, /* word 781 (0x0C34) data */
	0x0000002D, /* word 782 (0x0C38) data */
	0x00000046, /* word 783 (0x0C3C) data */
	0x00000000, /* word 784 (0x0C40) data */
	0x00000050, /* word 785 (0x0C44) data */
	0x00000000, /* word 786 (0x0C48) data */
	0xFFFFFFFF, /* word 787 (0x0C4C) data */
	0x00000006, /* word 788 (0x0C50) data */
	0x00000169, /* word 789 (0x0C54) data */
	0x00000064, /* word 790 (0x0C58) data */
	0x00000000, /* word 791 (0x0C5C) data */
	0x00000000, /* word 792 (0x0C60) data */
	0x00000000, /* word 793 (0x0C64) data */
	0x30000000, /* word 794 (0x0C68) SetThrow */
	0x0340030C, /* -> word 780 (0x0C30) */
	0x4C00002B, /* word 796 (0x0C70) ftMotionCommandPlayFGMStoreInfo(43) */
	0x04000004, /* word 797 (0x0C74) ftMotionCommandWait(4) */
	0x74000002, /* word 798 (0x0C78) ftMotionCommandSetHitStatusAll(2) */
	0x0800000E, /* word 799 (0x0C7C) ftMotionCommandWaitAsync(14) */
	0x440001AD, /* word 800 (0x0C80) ftMotionPlayVoice(429) */
	0x38000012, /* word 801 (0x0C84) ftMotionPlayFGM(18) */
	0x98007C00, /* word 802 (0x0C88) Effect(0, 31, 0, 0, 200, 280, 0, 0, 0) */
	0x000000C8,
	0x01180000,
	0x00000000,
	0x98004C00, /* word 806 (0x0C98) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x9BF88400, /* word 810 (0x0CA8) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x5C000001, /* word 814 (0x0CB8) ftMotionCommandSetFlag2(1) */
	0x74000001, /* word 815 (0x0CBC) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 816 (0x0CC0) ftMotionCommandEnd() */
	0x00000037, /* word 817 (0x0CC4) data */
	0x00000010, /* word 818 (0x0CC8) data */
	0x0000002D, /* word 819 (0x0CCC) data */
	0x00000046, /* word 820 (0x0CD0) data */
	0x00000000, /* word 821 (0x0CD4) data */
	0x00000046, /* word 822 (0x0CD8) data */
	0x00000000, /* word 823 (0x0CDC) data */
	0xFFFFFFFF, /* word 824 (0x0CE0) data */
	0x00000008, /* word 825 (0x0CE4) data */
	0x00000169, /* word 826 (0x0CE8) data */
	0x00000064, /* word 827 (0x0CEC) data */
	0x00000000, /* word 828 (0x0CF0) data */
	0x00000000, /* word 829 (0x0CF4) data */
	0x00000000, /* word 830 (0x0CF8) data */
	0x30000000, /* word 831 (0x0CFC) SetThrow */
	0x03760331, /* -> word 817 (0x0CC4) */
	0x440001B0, /* word 833 (0x0D04) ftMotionPlayVoice(432) */
	0x04000004, /* word 834 (0x0D08) ftMotionCommandWait(4) */
	0x74000002, /* word 835 (0x0D0C) ftMotionCommandSetHitStatusAll(2) */
	0x0800000A, /* word 836 (0x0D10) ftMotionCommandWaitAsync(10) */
	0x9BF88400, /* word 837 (0x0D14) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x98003400, /* word 841 (0x0D24) Effect(0, 13, 0, 0, 0, 260, 0, 0, 0) */
	0x00000000,
	0x01040000,
	0x00000000,
	0x3800012F, /* word 845 (0x0D34) ftMotionPlayFGM(303) */
	0x04000008, /* word 846 (0x0D38) ftMotionCommandWait(8) */
	0xAC000001, /* word 847 (0x0D3C) ftMotionCommandSetTexturePartID(1) */
	0x0C014140, /* word 848 (0x0D40) MakeAttackColl(0, 0, 10, 10, 0, 0, 300, 120, 0, 0, 361, 80, 0, 3, 1, 2, 0, 30) */
	0x012C0078,
	0x00000000,
	0x5A450003,
	0x01400F00,
	0x74000001, /* word 853 (0x0D54) ftMotionCommandSetHitStatusAll(1) */
	0x80000002, /* word 854 (0x0D58) ftMotionCommandLoopBegin(2) */
	0x3800002B, /* word 855 (0x0D5C) ftMotionPlayFGM(43) */
	0x0400000E, /* word 856 (0x0D60) ftMotionCommandWait(14) */
	0x84000000, /* word 857 (0x0D64) ftMotionCommandLoopEnd() */
	0x58000001, /* word 858 (0x0D68) ftMotionCommandSetFlag1(1) */
	0x0800002D, /* word 859 (0x0D6C) ftMotionCommandWaitAsync(45) */
	0x98007C00, /* word 860 (0x0D70) Effect(0, 31, 0, 0, 200, -280, 0, 0, 0) */
	0x000000C8,
	0xFEE80000,
	0x00000000,
	0x98004C00, /* word 864 (0x0D80) Effect(0, 19, 0, 0, 0, 150, 0, 0, 0) */
	0x00000000,
	0x00960000,
	0x00000000,
	0x9BF88400, /* word 868 (0x0D90) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x38000012, /* word 872 (0x0DA0) ftMotionPlayFGM(18) */
	0x5C000001, /* word 873 (0x0DA4) ftMotionCommandSetFlag2(1) */
	0x18000000, /* word 874 (0x0DA8) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 875 (0x0DAC) ftMotionCommandEnd() */
	0x88000000, /* word 876 (0x0DB0) Subroutine */
	0x037001AB, /* extern -> 0x6AC */
	0x00000000, /* word 878 (0x0DB8) ftMotionCommandEnd() */
	0x88000000, /* word 879 (0x0DBC) Subroutine */
	0x037301B1, /* extern -> 0x6C4 */
	0x00000000, /* word 881 (0x0DC4) ftMotionCommandEnd() */
	0x88000000, /* word 882 (0x0DC8) Subroutine */
	0x037801B3, /* extern -> 0x6CC */
	0x00000000, /* word 884 (0x0DD0) ftMotionCommandEnd() */
	0x88000000, /* word 885 (0x0DD4) Subroutine */
	0x037B006C, /* -> word 108 (0x01B0) */
	0x88000000, /* word 887 (0x0DDC) Subroutine */
	0x037D01BC, /* extern -> 0x6F0 */
	0x00000000, /* word 889 (0x0DE4) ftMotionCommandEnd() */
	0x88000000, /* word 890 (0x0DE8) Subroutine */
	0x059C006C, /* -> word 108 (0x01B0) */
	0x88000000, /* word 892 (0x0DF0) Subroutine */
	0xFFFF01C3, /* extern -> 0x70C */
	0x00000000, /* word 894 (0x0DF8) ftMotionCommandEnd() */
	0xBC000003, /* word 895 (0x0DFC) ftMotionCommandSetSlopeContour(3) */
	0xC4078007, /* word 896 (0x0E00) ftMotionCommandMakeRumble(60, 7) */
	0xB0A0003C, /* word 897 (0x0E04) ftMotionCommandSetColAnim(40, 60) */
	0x380000D4, /* word 898 (0x0E08) ftMotionPlayFGM(212) */
	0x08000078, /* word 899 (0x0E0C) ftMotionCommandWaitAsync(120) */
	0xC4078007, /* word 900 (0x0E10) ftMotionCommandMakeRumble(60, 7) */
	0x380000D5, /* word 901 (0x0E14) ftMotionPlayFGM(213) */
	0x04000008, /* word 902 (0x0E18) ftMotionCommandWait(8) */
	0x58000001, /* word 903 (0x0E1C) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 904 (0x0E20) ftMotionCommandEnd() */
	0x08000002, /* word 905 (0x0E24) ftMotionCommandWaitAsync(2) */
	0x0C014050, /* word 906 (0x0E28) MakeAttackColl(0, 0, 10, 2, 1, 0, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8) */
	0x00A00000,
	0x00000000,
	0x5A432003,
	0x00000400,
	0x0C812050, /* word 911 (0x0E3C) MakeAttackColl(1, 0, 9, 2, 1, 0, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8) */
	0x00A00000,
	0x00000000,
	0x5A432003,
	0x00000400,
	0x4C00002B, /* word 916 (0x0E50) ftMotionCommandPlayFGMStoreInfo(43) */
	0x04000002, /* word 917 (0x0E54) ftMotionCommandWait(2) */
	0x18000000, /* word 918 (0x0E58) ftMotionCommandClearAttackCollAll() */
	0x0800000A, /* word 919 (0x0E5C) ftMotionCommandWaitAsync(10) */
	0x58000001, /* word 920 (0x0E60) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 921 (0x0E64) ftMotionCommandEnd() */
	0x08000003, /* word 922 (0x0E68) ftMotionCommandWaitAsync(3) */
	0x0C020050, /* word 923 (0x0E6C) MakeAttackColl(0, 0, 16, 2, 1, 0, 180, 16, 0, 0, 70, 50, 0, 3, 0, 0, 0, 8) */
	0x00B40010,
	0x00000000,
	0x11832003,
	0x00000400,
	0x0C81E050, /* word 928 (0x0E80) MakeAttackColl(1, 0, 15, 2, 1, 0, 180, 0, 0, 0, 70, 50, 0, 3, 0, 0, 0, 8) */
	0x00B40000,
	0x00000000,
	0x11832003,
	0x00000400,
	0x4C00002B, /* word 933 (0x0E94) ftMotionCommandPlayFGMStoreInfo(43) */
	0x04000003, /* word 934 (0x0E98) ftMotionCommandWait(3) */
	0x18000000, /* word 935 (0x0E9C) ftMotionCommandClearAttackCollAll() */
	0x08000008, /* word 936 (0x0EA0) ftMotionCommandWaitAsync(8) */
	0x58000001, /* word 937 (0x0EA4) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 938 (0x0EA8) ftMotionCommandEnd() */
	0x440001AD, /* word 939 (0x0EAC) ftMotionPlayVoice(429) */
	0x08000003, /* word 940 (0x0EB0) ftMotionCommandWaitAsync(3) */
	0x0C032080, /* word 941 (0x0EB4) MakeAttackColl(0, 0, 25, 4, 0, 0, 150, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00960000,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x0C836080, /* word 946 (0x0EC8) MakeAttackColl(1, 0, 27, 4, 0, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x01180000,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x4C00002A, /* word 951 (0x0EDC) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000002, /* word 952 (0x0EE0) ftMotionCommandWait(2) */
	0x20020000, /* word 953 (0x0EE4) ftMotionCommandSetAttackCollDamage(0, 4) */
	0x20820000, /* word 954 (0x0EE8) ftMotionCommandSetAttackCollDamage(1, 4) */
	0x24005A00, /* word 955 (0x0EEC) ftMotionCommandSetAttackCollSize(0, 180) */
	0x24808C00, /* word 956 (0x0EF0) ftMotionCommandSetAttackCollSize(1, 280) */
	0x04000003, /* word 957 (0x0EF4) ftMotionCommandWait(3) */
	0x18000000, /* word 958 (0x0EF8) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 959 (0x0EFC) ftMotionCommandEnd() */
	0xBC000004, /* word 960 (0x0F00) ftMotionCommandSetSlopeContour(4) */
	0x50000000, /* word 961 (0x0F04) ftMotionCommandPlaySmashVoice(0) */
	0x08000007, /* word 962 (0x0F08) ftMotionCommandWaitAsync(7) */
	0x0C00A190, /* word 963 (0x0F0C) MakeAttackColl(0, 0, 5, 12, 1, 0, 250, 40, 0, 0, 361, 100, 0, 3, 1, 2, 1, 16) */
	0x00FA0028,
	0x00000000,
	0x5A464003,
	0x01420800,
	0x98004C00, /* word 968 (0x0F20) Effect(0, 19, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4C000029, /* word 972 (0x0F30) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000004, /* word 973 (0x0F34) ftMotionCommandWait(4) */
	0x0C00A150, /* word 974 (0x0F38) MakeAttackColl(0, 0, 5, 10, 1, 0, 250, 40, 0, 0, 361, 100, 0, 3, 1, 2, 1, 10) */
	0x00FA0028,
	0x00000000,
	0x5A464003,
	0x01420500,
	0x04000011, /* word 979 (0x0F4C) ftMotionCommandWait(17) */
	0x18000000, /* word 980 (0x0F50) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 981 (0x0F54) ftMotionCommandEnd() */
	0x08000008, /* word 982 (0x0F58) ftMotionCommandWaitAsync(8) */
	0x0C0301D0, /* word 983 (0x0F5C) MakeAttackColl(0, 0, 24, 14, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00B40014,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x0C8321D0, /* word 988 (0x0F70) MakeAttackColl(1, 0, 25, 14, 1, 0, 230, 90, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00E6005A,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x4C00002A, /* word 993 (0x0F84) ftMotionCommandPlayFGMStoreInfo(42) */
	0x0400000A, /* word 994 (0x0F88) ftMotionCommandWait(10) */
	0x18000000, /* word 995 (0x0F8C) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 996 (0x0F90) ftMotionCommandEnd() */
	0x08000008, /* word 997 (0x0F94) ftMotionCommandWaitAsync(8) */
	0x0C0301B0, /* word 998 (0x0F98) MakeAttackColl(0, 0, 24, 13, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00B40014,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x0C8321B0, /* word 1003 (0x0FAC) MakeAttackColl(1, 0, 25, 13, 1, 0, 230, 90, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00E6005A,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x4C00002A, /* word 1008 (0x0FC0) ftMotionCommandPlayFGMStoreInfo(42) */
	0x0400000A, /* word 1009 (0x0FC4) ftMotionCommandWait(10) */
	0x18000000, /* word 1010 (0x0FC8) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1011 (0x0FCC) ftMotionCommandEnd() */
	0x08000008, /* word 1012 (0x0FD0) ftMotionCommandWaitAsync(8) */
	0x0C030190, /* word 1013 (0x0FD4) MakeAttackColl(0, 0, 24, 12, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00B40014,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x0C832190, /* word 1018 (0x0FE8) MakeAttackColl(1, 0, 25, 12, 1, 0, 230, 90, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00E6005A,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x4C00002A, /* word 1023 (0x0FFC) ftMotionCommandPlayFGMStoreInfo(42) */
	0x0400000A, /* word 1024 (0x1000) ftMotionCommandWait(10) */
	0x18000000, /* word 1025 (0x1004) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1026 (0x1008) ftMotionCommandEnd() */
	0xBC000003, /* word 1027 (0x100C) ftMotionCommandSetSlopeContour(3) */
	0x08000005, /* word 1028 (0x1010) ftMotionCommandWaitAsync(5) */
	0x0C01C150, /* word 1029 (0x1014) MakeAttackColl(0, 0, 14, 10, 1, 0, 180, 0, 0, 0, 86, 150, 0, 3, 0, 1, 0, 0) */
	0x00B40000,
	0x00000000,
	0x15896003,
	0x00200000,
	0x0C81E150, /* word 1034 (0x1028) MakeAttackColl(1, 0, 15, 10, 1, 0, 290, 60, 0, 0, 86, 150, 0, 3, 0, 1, 0, 0) */
	0x0122003C,
	0x00000000,
	0x15896003,
	0x00200000,
	0x4C00002A, /* word 1039 (0x103C) ftMotionCommandPlayFGMStoreInfo(42) */
	0x0400000C, /* word 1040 (0x1040) ftMotionCommandWait(12) */
	0x18000000, /* word 1041 (0x1044) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1042 (0x1048) ftMotionCommandEnd() */
	0xBC000002, /* word 1043 (0x104C) ftMotionCommandSetSlopeContour(2) */
	0x08000005, /* word 1044 (0x1050) ftMotionCommandWaitAsync(5) */
	0x98002C00, /* word 1045 (0x1054) Effect(0, 11, 0, 0, 0, -140, 0, 0, 0) */
	0x00000000,
	0xFF740000,
	0x00000000,
	0x0C030190, /* word 1049 (0x1064) MakeAttackColl(0, 0, 24, 12, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x00B40014,
	0x00000000,
	0x5A464003,
	0x00220000,
	0x0C832190, /* word 1054 (0x1078) MakeAttackColl(1, 0, 25, 12, 1, 0, 260, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x0104008C,
	0x00000000,
	0x5A464003,
	0x00220000,
	0x4C00002A, /* word 1059 (0x108C) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000007, /* word 1060 (0x1090) ftMotionCommandWait(7) */
	0x18000000, /* word 1061 (0x1094) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1062 (0x1098) ftMotionCommandEnd() */
	0xBC000003, /* word 1063 (0x109C) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 1064 (0x10A0) ftMotionCommandWaitAsync(4) */
	0x98787C00, /* word 1065 (0x10A4) Effect(15, 31, 0, 60, 0, 0, 0, 0, 0) */
	0x003C0000,
	0x00000000,
	0x00000000,
	0x08000010, /* word 1069 (0x10B4) ftMotionCommandWaitAsync(16) */
	0x50000000, /* word 1070 (0x10B8) ftMotionCommandPlaySmashVoice(0) */
	0x0C01C250, /* word 1071 (0x10BC) MakeAttackColl(0, 0, 14, 18, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30) */
	0x00B40000,
	0x00000000,
	0x5A464003,
	0x00400F00,
	0x0C81E250, /* word 1076 (0x10D0) MakeAttackColl(1, 0, 15, 18, 1, 0, 240, 60, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30) */
	0x00F0003C,
	0x00000000,
	0x5A464003,
	0x00400F00,
	0x98004C00, /* word 1081 (0x10E4) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x4C000029, /* word 1085 (0x10F4) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000005, /* word 1086 (0x10F8) ftMotionCommandWait(5) */
	0x18000000, /* word 1087 (0x10FC) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1088 (0x1100) ftMotionCommandEnd() */
	0xBC000003, /* word 1089 (0x1104) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 1090 (0x1108) ftMotionCommandWaitAsync(4) */
	0x98787C00, /* word 1091 (0x110C) Effect(15, 31, 0, 60, 0, 0, 0, 0, 0) */
	0x003C0000,
	0x00000000,
	0x00000000,
	0x08000010, /* word 1095 (0x111C) ftMotionCommandWaitAsync(16) */
	0x50000000, /* word 1096 (0x1120) ftMotionCommandPlaySmashVoice(0) */
	0x0C01C250, /* word 1097 (0x1124) MakeAttackColl(0, 0, 14, 18, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30) */
	0x00B40000,
	0x00000000,
	0x5A464003,
	0x00400F00,
	0x0C81E250, /* word 1102 (0x1138) MakeAttackColl(1, 0, 15, 18, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30) */
	0x00F00032,
	0x00000000,
	0x5A464003,
	0x00400F00,
	0x98004C00, /* word 1107 (0x114C) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x4C000029, /* word 1111 (0x115C) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000005, /* word 1112 (0x1160) ftMotionCommandWait(5) */
	0x18000000, /* word 1113 (0x1164) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1114 (0x1168) ftMotionCommandEnd() */
	0xBC000003, /* word 1115 (0x116C) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 1116 (0x1170) ftMotionCommandWaitAsync(4) */
	0x98787C00, /* word 1117 (0x1174) Effect(15, 31, 0, 60, 0, 0, 0, 0, 0) */
	0x003C0000,
	0x00000000,
	0x00000000,
	0x08000010, /* word 1121 (0x1184) ftMotionCommandWaitAsync(16) */
	0x50000000, /* word 1122 (0x1188) ftMotionCommandPlaySmashVoice(0) */
	0x0C01C230, /* word 1123 (0x118C) MakeAttackColl(0, 0, 14, 17, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30) */
	0x00B40000,
	0x00000000,
	0x5A464003,
	0x00400F00,
	0x0C81E230, /* word 1128 (0x11A0) MakeAttackColl(1, 0, 15, 17, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30) */
	0x00F00032,
	0x00000000,
	0x5A464003,
	0x00400F00,
	0x98004C00, /* word 1133 (0x11B4) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x4C000029, /* word 1137 (0x11C4) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000005, /* word 1138 (0x11C8) ftMotionCommandWait(5) */
	0x18000000, /* word 1139 (0x11CC) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1140 (0x11D0) ftMotionCommandEnd() */
	0xBC000003, /* word 1141 (0x11D4) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 1142 (0x11D8) ftMotionCommandWaitAsync(4) */
	0x98787C00, /* word 1143 (0x11DC) Effect(15, 31, 0, 60, 0, 0, 0, 0, 0) */
	0x003C0000,
	0x00000000,
	0x00000000,
	0x08000010, /* word 1147 (0x11EC) ftMotionCommandWaitAsync(16) */
	0x50000000, /* word 1148 (0x11F0) ftMotionCommandPlaySmashVoice(0) */
	0x0C01C210, /* word 1149 (0x11F4) MakeAttackColl(0, 0, 14, 16, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30) */
	0x00B40000,
	0x00000000,
	0x5A464003,
	0x00400F00,
	0x0C81E210, /* word 1154 (0x1208) MakeAttackColl(1, 0, 15, 16, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30) */
	0x00F00032,
	0x00000000,
	0x5A464003,
	0x00400F00,
	0x98004C00, /* word 1159 (0x121C) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x4C000029, /* word 1163 (0x122C) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000005, /* word 1164 (0x1230) ftMotionCommandWait(5) */
	0x18000000, /* word 1165 (0x1234) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1166 (0x1238) ftMotionCommandEnd() */
	0xBC000003, /* word 1167 (0x123C) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 1168 (0x1240) ftMotionCommandWaitAsync(4) */
	0x98787C00, /* word 1169 (0x1244) Effect(15, 31, 0, 60, 0, 0, 0, 0, 0) */
	0x003C0000,
	0x00000000,
	0x00000000,
	0x08000010, /* word 1173 (0x1254) ftMotionCommandWaitAsync(16) */
	0x50000000, /* word 1174 (0x1258) ftMotionCommandPlaySmashVoice(0) */
	0x0C01C210, /* word 1175 (0x125C) MakeAttackColl(0, 0, 14, 16, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30) */
	0x00B40000,
	0x00000000,
	0x5A464003,
	0x00400F00,
	0x0C81E210, /* word 1180 (0x1270) MakeAttackColl(1, 0, 15, 16, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30) */
	0x00F00032,
	0x00000000,
	0x5A464003,
	0x00400F00,
	0x98004C00, /* word 1185 (0x1284) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x4C000029, /* word 1189 (0x1294) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000005, /* word 1190 (0x1298) ftMotionCommandWait(5) */
	0x18000000, /* word 1191 (0x129C) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1192 (0x12A0) ftMotionCommandEnd() */
	0x08000007, /* word 1193 (0x12A4) ftMotionCommandWaitAsync(7) */
	0x98007C00, /* word 1194 (0x12A8) Effect(0, 31, 0, 0, 300, -100, 0, 0, 0) */
	0x0000012C,
	0xFF9C0000,
	0x00000000,
	0x50000000, /* word 1198 (0x12B8) ftMotionCommandPlaySmashVoice(0) */
	0x70600003, /* word 1199 (0x12BC) ftMotionCommandSetHitStatusPartID(12, 3) */
	0x0C018270, /* word 1200 (0x12C0) MakeAttackColl(0, 0, 12, 19, 1, 0, 380, 0, 100, 0, 85, 120, 0, 3, 0, 2, 0, 26) */
	0x017C0000,
	0x00640000,
	0x15478003,
	0x00400D00,
	0x98003400, /* word 1205 (0x12D4) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4C000029, /* word 1209 (0x12E4) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000004, /* word 1210 (0x12E8) ftMotionCommandWait(4) */
	0x6C000001, /* word 1211 (0x12EC) ftMotionCommandSetHitStatusPartAll(1) */
	0x04000005, /* word 1212 (0x12F0) ftMotionCommandWait(5) */
	0x18000000, /* word 1213 (0x12F4) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1214 (0x12F8) ftMotionCommandEnd() */
	0xBC000004, /* word 1215 (0x12FC) ftMotionCommandSetSlopeContour(4) */
	0x08000004, /* word 1216 (0x1300) ftMotionCommandWaitAsync(4) */
	0x98C87C00, /* word 1217 (0x1304) Effect(25, 31, 0, 120, 0, 0, 0, 0, 0) */
	0x00780000,
	0x00000000,
	0x00000000,
	0x08000008, /* word 1221 (0x1314) ftMotionCommandWaitAsync(8) */
	0x50000000, /* word 1222 (0x1318) ftMotionCommandPlaySmashVoice(0) */
	0x0C032230, /* word 1223 (0x131C) MakeAttackColl(0, 0, 25, 17, 1, 0, 170, 0, 0, 20, 361, 100, 0, 3, 0, 2, 1, 20) */
	0x00AA0000,
	0x00000014,
	0x5A464003,
	0x00420A00,
	0x0C832230, /* word 1228 (0x1330) MakeAttackColl(1, 0, 25, 17, 1, 0, 210, 120, 0, 50, 361, 100, 0, 3, 0, 2, 1, 20) */
	0x00D20078,
	0x00000032,
	0x5A464003,
	0x00420A00,
	0x0D028230, /* word 1233 (0x1344) MakeAttackColl(2, 0, 20, 17, 1, 0, 170, 0, 0, 20, 361, 100, 0, 3, 0, 2, 1, 20) */
	0x00AA0000,
	0x00000014,
	0x5A464003,
	0x00420A00,
	0x0D828230, /* word 1238 (0x1358) MakeAttackColl(3, 0, 20, 17, 1, 0, 210, 120, 0, 50, 361, 100, 0, 3, 0, 2, 1, 20) */
	0x00D20078,
	0x00000032,
	0x5A464003,
	0x00420A00,
	0x98004000, /* word 1243 (0x136C) Effect(0, 16, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4C00002A, /* word 1247 (0x137C) ftMotionCommandPlayFGMStoreInfo(42) */
	0x0400000F, /* word 1248 (0x1380) ftMotionCommandWait(15) */
	0x98003C00, /* word 1249 (0x1384) Effect(0, 15, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4C00002A, /* word 1253 (0x1394) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000007, /* word 1254 (0x1398) ftMotionCommandWait(7) */
	0xBC000000, /* word 1255 (0x139C) ftMotionCommandSetSlopeContour(0) */
	0x18000000, /* word 1256 (0x13A0) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1257 (0x13A4) ftMotionCommandEnd() */
	0x08000003, /* word 1258 (0x13A8) ftMotionCommandWaitAsync(3) */
	0x58000032, /* word 1259 (0x13AC) ftMotionCommandSetFlag1(50) */
	0x0C0321D0, /* word 1260 (0x13B0) MakeAttackColl(0, 0, 25, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15) */
	0x00F0000A,
	0x00000000,
	0x5A464003,
	0x00420780,
	0x0C8281D0, /* word 1265 (0x13C4) MakeAttackColl(1, 0, 20, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15) */
	0x00F0000A,
	0x00000000,
	0x5A464003,
	0x00420780,
	0x0D00A1D0, /* word 1270 (0x13D8) MakeAttackColl(2, 0, 5, 14, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15) */
	0x01040000,
	0x00000000,
	0x5A464003,
	0x00420780,
	0x4C00002A, /* word 1275 (0x13EC) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000008, /* word 1276 (0x13F0) ftMotionCommandWait(8) */
	0x0C032170, /* word 1277 (0x13F4) MakeAttackColl(0, 0, 25, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x00F0000A,
	0x00000000,
	0x5A464003,
	0x00220000,
	0x0C828170, /* word 1282 (0x1408) MakeAttackColl(1, 0, 20, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x00F0000A,
	0x00000000,
	0x5A464003,
	0x00220000,
	0x0D00A170, /* word 1287 (0x141C) MakeAttackColl(2, 0, 5, 11, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x01040000,
	0x00000000,
	0x5A464003,
	0x00220000,
	0x0400001A, /* word 1292 (0x1430) ftMotionCommandWait(26) */
	0x58000000, /* word 1293 (0x1434) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1294 (0x1438) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1295 (0x143C) ftMotionCommandEnd() */
	0x0800000B, /* word 1296 (0x1440) ftMotionCommandWaitAsync(11) */
	0x58000001, /* word 1297 (0x1444) ftMotionCommandSetFlag1(1) */
	0x0C032210, /* word 1298 (0x1448) MakeAttackColl(0, 0, 25, 16, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 2, 1, 10) */
	0x00DCFFE2,
	0x002D0000,
	0x5A464003,
	0x00420500,
	0x0C832210, /* word 1303 (0x145C) MakeAttackColl(1, 0, 25, 16, 1, 0, 270, 80, 30, 0, 361, 100, 0, 3, 0, 2, 1, 10) */
	0x010E0050,
	0x001E0000,
	0x5A464003,
	0x00420500,
	0x4C000029, /* word 1308 (0x1470) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000004, /* word 1309 (0x1474) ftMotionCommandWait(4) */
	0x0C032150, /* word 1310 (0x1478) MakeAttackColl(0, 0, 25, 10, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x00DCFFE2,
	0x002D0000,
	0x5A464003,
	0x00220000,
	0x0C832150, /* word 1315 (0x148C) MakeAttackColl(1, 0, 25, 10, 1, 0, 270, 80, 30, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x010E0050,
	0x001E0000,
	0x5A464003,
	0x00220000,
	0x0400000C, /* word 1320 (0x14A0) ftMotionCommandWait(12) */
	0x58000000, /* word 1321 (0x14A4) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1322 (0x14A8) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1323 (0x14AC) ftMotionCommandEnd() */
	0x3800004D, /* word 1324 (0x14B0) ftMotionPlayFGM(77) */
	0x98003400, /* word 1325 (0x14B4) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 1329 (0x14C4) ftMotionCommandEnd() */
	0x0800000A, /* word 1330 (0x14C8) ftMotionCommandWaitAsync(10) */
	0x58000001, /* word 1331 (0x14CC) ftMotionCommandSetFlag1(1) */
	0x0C032210, /* word 1332 (0x14D0) MakeAttackColl(0, 0, 25, 16, 1, 0, 240, -30, 45, 0, 361, 100, 0, 3, 0, 2, 1, 10) */
	0x00F0FFE2,
	0x002D0000,
	0x5A464003,
	0x00420500,
	0x0C832210, /* word 1337 (0x14E4) MakeAttackColl(1, 0, 25, 16, 1, 0, 290, 80, 30, 0, 361, 100, 0, 3, 0, 2, 1, 10) */
	0x01220050,
	0x001E0000,
	0x5A464003,
	0x00420500,
	0x4C000029, /* word 1342 (0x14F8) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000004, /* word 1343 (0x14FC) ftMotionCommandWait(4) */
	0x0C032150, /* word 1344 (0x1500) MakeAttackColl(0, 0, 25, 10, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x00DCFFE2,
	0x002D0000,
	0x5A464003,
	0x00220000,
	0x0C832150, /* word 1349 (0x1514) MakeAttackColl(1, 0, 25, 10, 1, 0, 270, 80, 30, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x010E0050,
	0x001E0000,
	0x5A464003,
	0x00220000,
	0x04000006, /* word 1354 (0x1528) ftMotionCommandWait(6) */
	0x58000000, /* word 1355 (0x152C) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1356 (0x1530) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1357 (0x1534) ftMotionCommandEnd() */
	0x3800004D, /* word 1358 (0x1538) ftMotionPlayFGM(77) */
	0x98003400, /* word 1359 (0x153C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 1363 (0x154C) ftMotionCommandEnd() */
	0x08000002, /* word 1364 (0x1550) ftMotionCommandWaitAsync(2) */
	0x58000014, /* word 1365 (0x1554) ftMotionCommandSetFlag1(20) */
	0x0C032190, /* word 1366 (0x1558) MakeAttackColl(0, 0, 25, 12, 1, 0, 220, 0, 0, 0, 80, 120, 0, 3, 0, 2, 1, 0) */
	0x00DC0000,
	0x00000000,
	0x14078003,
	0x00420000,
	0x0C836190, /* word 1371 (0x156C) MakeAttackColl(1, 0, 27, 12, 1, 0, 250, 0, 0, 0, 80, 120, 0, 3, 0, 2, 1, 0) */
	0x00FA0000,
	0x00000000,
	0x14078003,
	0x00420000,
	0x4C000029, /* word 1376 (0x1580) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000003, /* word 1377 (0x1584) ftMotionCommandWait(3) */
	0x0C032130, /* word 1378 (0x1588) MakeAttackColl(0, 0, 25, 9, 1, 0, 220, 0, 0, 0, 70, 120, 0, 3, 0, 1, 1, 0) */
	0x00DC0000,
	0x00000000,
	0x11878003,
	0x00220000,
	0x0C836130, /* word 1383 (0x159C) MakeAttackColl(1, 0, 27, 9, 1, 0, 250, 0, 0, 0, 70, 120, 0, 3, 0, 1, 1, 0) */
	0x00FA0000,
	0x00000000,
	0x11878003,
	0x00220000,
	0x04000007, /* word 1388 (0x15B0) ftMotionCommandWait(7) */
	0x58000000, /* word 1389 (0x15B4) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1390 (0x15B8) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1391 (0x15BC) ftMotionCommandEnd() */
	0x3800004D, /* word 1392 (0x15C0) ftMotionPlayFGM(77) */
	0x98003400, /* word 1393 (0x15C4) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 1397 (0x15D4) ftMotionCommandEnd() */
	0x0800000A, /* word 1398 (0x15D8) ftMotionCommandWaitAsync(10) */
	0x58000014, /* word 1399 (0x15DC) ftMotionCommandSetFlag1(20) */
	0x0C032070, /* word 1400 (0x15E0) MakeAttackColl(0, 0, 25, 3, 1, 0, 350, -30, 45, 0, -70, 100, 30, 3, 0, 1, 0, 0) */
	0x015EFFE2,
	0x002D0000,
	0xEE86407B,
	0x00200000,
	0x0C832070, /* word 1405 (0x15F4) MakeAttackColl(1, 0, 25, 3, 1, 0, 350, 50, 30, 0, -70, 100, 30, 3, 0, 1, 0, 0) */
	0x015E0032,
	0x001E0000,
	0xEE86407B,
	0x00200000,
	0x80000007, /* word 1410 (0x1608) ftMotionCommandLoopBegin(7) */
	0x4C0000DB, /* word 1411 (0x160C) ftMotionCommandPlayFGMStoreInfo(219) */
	0x04000002, /* word 1412 (0x1610) ftMotionCommandWait(2) */
	0x18000000, /* word 1413 (0x1614) ftMotionCommandClearAttackCollAll() */
	0x04000001, /* word 1414 (0x1618) ftMotionCommandWait(1) */
	0x2C000000, /* word 1415 (0x161C) ftMotionCommandRefreshAttackCollID(0) */
	0x2C000001, /* word 1416 (0x1620) ftMotionCommandRefreshAttackCollID(1) */
	0x84000000, /* word 1417 (0x1624) ftMotionCommandLoopEnd() */
	0x4C0000DB, /* word 1418 (0x1628) ftMotionCommandPlayFGMStoreInfo(219) */
	0x04000002, /* word 1419 (0x162C) ftMotionCommandWait(2) */
	0x18000000, /* word 1420 (0x1630) ftMotionCommandClearAttackCollAll() */
	0x58000000, /* word 1421 (0x1634) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1422 (0x1638) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1423 (0x163C) ftMotionCommandEnd() */
	0x3800004D, /* word 1424 (0x1640) ftMotionPlayFGM(77) */
	0x98003400, /* word 1425 (0x1644) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 1429 (0x1654) ftMotionCommandEnd() */
	0x0800001E, /* word 1430 (0x1658) ftMotionCommandWaitAsync(30) */
	0xC403C007, /* word 1431 (0x165C) ftMotionCommandMakeRumble(30, 7) */
	0x380000D6, /* word 1432 (0x1660) ftMotionPlayFGM(214) */
	0x5C000001, /* word 1433 (0x1664) ftMotionCommandSetFlag2(1) */
	0x00000000, /* word 1434 (0x1668) ftMotionCommandEnd() */
	0x90000000, /* word 1435 (0x166C) Goto */
	0x05B20596, /* -> word 1430 (0x1658) */
	0x98004C00, /* word 1437 (0x1674) Effect(0, 19, 0, 0, 0, -180, 0, 0, 0) */
	0x00000000,
	0xFF4C0000,
	0x00000000,
	0xBC000003, /* word 1441 (0x1684) ftMotionCommandSetSlopeContour(3) */
	0xAC000001, /* word 1442 (0x1688) ftMotionCommandSetTexturePartID(1) */
	0x08000010, /* word 1443 (0x168C) ftMotionCommandWaitAsync(16) */
	0x54000001, /* word 1444 (0x1690) ftMotionCommandSetFlag0(1) */
	0xB09C0000, /* word 1445 (0x1694) ftMotionCommandSetColAnim(39, 0) */
	0x98807C00, /* word 1446 (0x1698) Effect(16, 31, 0, 60, 0, 0, 0, 0, 0) */
	0x003C0000,
	0x00000000,
	0x00000000,
	0x380000D7, /* word 1450 (0x16A8) ftMotionPlayFGM(215) */
	0xC4000006, /* word 1451 (0x16AC) ftMotionCommandMakeRumble(0, 6) */
	0x00000000, /* word 1452 (0x16B0) ftMotionCommandEnd() */
	0x98004000, /* word 1453 (0x16B4) Effect(0, 16, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x90000000, /* word 1457 (0x16C4) Goto */
	0x05EB05A2, /* -> word 1442 (0x1688) */
	0xC4000009, /* word 1459 (0x16CC) ftMotionCommandMakeRumble(0, 9) */
	0x08000002, /* word 1460 (0x16D0) ftMotionCommandWaitAsync(2) */
	0x74000003, /* word 1461 (0x16D4) ftMotionCommandSetHitStatusAll(3) */
	0x0C0180B4, /* word 1462 (0x16D8) MakeAttackColl(0, 0, 12, 5, 1, 4, 380, 0, 0, 0, 70, 100, 110, 3, 0, 1, 2, 0) */
	0x017C0000,
	0x00000000,
	0x118641BB,
	0x00240000,
	0x0C81E0B4, /* word 1467 (0x16EC) MakeAttackColl(1, 0, 15, 5, 1, 4, 260, 160, 0, 0, 90, 100, 110, 3, 0, 1, 2, 0) */
	0x010400A0,
	0x00000000,
	0x168641BB,
	0x00240000,
	0x98004C00, /* word 1472 (0x1700) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x04000001, /* word 1476 (0x1710) ftMotionCommandWait(1) */
	0x98787C00, /* word 1477 (0x1714) Effect(15, 31, 0, 80, 0, 0, 0, 0, 0) */
	0x00500000,
	0x00000000,
	0x00000000,
	0x380000D9, /* word 1481 (0x1724) ftMotionPlayFGM(217) */
	0x08000006, /* word 1482 (0x1728) ftMotionCommandWaitAsync(6) */
	0x74000001, /* word 1483 (0x172C) ftMotionCommandSetHitStatusAll(1) */
	0x68000000, /* word 1484 (0x1730) ftMotionCommandSetAirJumpMax(0) */
	0x58000001, /* word 1485 (0x1734) ftMotionCommandSetFlag1(1) */
	0x5C000001, /* word 1486 (0x1738) ftMotionCommandSetFlag2(1) */
	0x80000008, /* word 1487 (0x173C) ftMotionCommandLoopBegin(8) */
	0x0C018034, /* word 1488 (0x1740) MakeAttackColl(0, 0, 12, 1, 1, 4, 310, 0, 0, 60, 75, 100, 100, 3, 0, 1, 2, 0) */
	0x01360000,
	0x0000003C,
	0x12C64193,
	0x00240000,
	0x0C81E034, /* word 1493 (0x1754) MakeAttackColl(1, 0, 15, 1, 1, 4, 260, 150, 0, 60, 80, 100, 100, 3, 0, 1, 2, 0) */
	0x01040096,
	0x0000003C,
	0x14064193,
	0x00240000,
	0x04000002, /* word 1498 (0x1768) ftMotionCommandWait(2) */
	0x18000000, /* word 1499 (0x176C) ftMotionCommandClearAttackCollAll() */
	0x84000000, /* word 1500 (0x1770) ftMotionCommandLoopEnd() */
	0x0C018074, /* word 1501 (0x1774) MakeAttackColl(0, 0, 12, 3, 1, 4, 450, 0, 0, 0, 50, 170, 0, 3, 0, 2, 2, 0) */
	0x01C20000,
	0x00000000,
	0x0C8AA003,
	0x00440000,
	0x0C81E074, /* word 1506 (0x1788) MakeAttackColl(1, 0, 15, 3, 1, 4, 200, 150, 0, 0, 50, 170, 0, 3, 0, 2, 2, 0) */
	0x00C80096,
	0x00000000,
	0x0C8AA003,
	0x00440000,
	0x04000002, /* word 1511 (0x179C) ftMotionCommandWait(2) */
	0x18000000, /* word 1512 (0x17A0) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1513 (0x17A4) ftMotionCommandEnd() */
	0x90000000, /* word 1514 (0x17A8) Goto */
	0xFFFF05B3, /* -> word 1459 (0x16CC) */
	0x00000000, /* word 1516 (0x17B0) ftMotionCommandEnd() */
	0xC403C007, /* word 1517 (0x17B4) ftMotionCommandMakeRumble(30, 7) */
	0xBC000004, /* word 1518 (0x17B8) ftMotionCommandSetSlopeContour(4) */
	0x60000001, /* word 1519 (0x17BC) ftMotionCommandSetFlag3(1) */
	0x440001B0, /* word 1520 (0x17C0) ftMotionPlayVoice(432) */
	0x0C000030, /* word 1521 (0x17C4) MakeAttackColl(0, 0, 0, 1, 1, 0, 140, 0, 300, 150, 180, 0, 1, 3, 0, 1, 1, 70) */
	0x008C0000,
	0x012C0096,
	0x2D000007,
	0x00222300,
	0x0C800030, /* word 1526 (0x17D8) MakeAttackColl(1, 0, 0, 1, 1, 0, 140, 0, 300, -150, 180, 0, 1, 3, 0, 1, 1, 70) */
	0x008C0000,
	0x012CFF6A,
	0x2D000007,
	0x00222300,
	0x0D000030, /* word 1531 (0x17EC) MakeAttackColl(2, 0, 0, 1, 1, 0, 220, 0, 0, 0, 90, 0, 1, 3, 0, 1, 1, 10) */
	0x00DC0000,
	0x00000000,
	0x16800007,
	0x00220500,
	0x04000004, /* word 1536 (0x1800) ftMotionCommandWait(4) */
	0x8000000D, /* word 1537 (0x1804) ftMotionCommandLoopBegin(13) */
	0x4C0000DA, /* word 1538 (0x1808) ftMotionCommandPlayFGMStoreInfo(218) */
	0x0C000030, /* word 1539 (0x180C) MakeAttackColl(0, 0, 0, 1, 1, 0, 160, 0, 280, 150, 180, 0, 1, 3, 0, 1, 1, 70) */
	0x00A00000,
	0x01180096,
	0x2D000007,
	0x00222300,
	0x0C800030, /* word 1544 (0x1820) MakeAttackColl(1, 0, 0, 1, 1, 0, 160, 0, 280, -150, 180, 0, 1, 3, 0, 1, 1, 70) */
	0x00A00000,
	0x0118FF6A,
	0x2D000007,
	0x00222300,
	0x04000001, /* word 1549 (0x1834) ftMotionCommandWait(1) */
	0x18000000, /* word 1550 (0x1838) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 1551 (0x183C) ftMotionCommandWait(2) */
	0x84000000, /* word 1552 (0x1840) ftMotionCommandLoopEnd() */
	0xBC000003, /* word 1553 (0x1844) ftMotionCommandSetSlopeContour(3) */
	0x0C000030, /* word 1554 (0x1848) MakeAttackColl(0, 0, 0, 1, 1, 0, 200, 0, 300, 150, 90, 0, 1, 3, 0, 2, 1, 120) */
	0x00C80000,
	0x012C0096,
	0x16800007,
	0x00423C00,
	0x0C800030, /* word 1559 (0x185C) MakeAttackColl(1, 0, 0, 1, 1, 0, 200, 0, 300, -150, 90, 0, 1, 3, 0, 2, 1, 120) */
	0x00C80000,
	0x012CFF6A,
	0x16800007,
	0x00423C00,
	0x58000001, /* word 1564 (0x1870) ftMotionCommandSetFlag1(1) */
	0x60000000, /* word 1565 (0x1874) ftMotionCommandSetFlag3(0) */
	0x04000002, /* word 1566 (0x1878) ftMotionCommandWait(2) */
	0x18000000, /* word 1567 (0x187C) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1568 (0x1880) ftMotionCommandEnd() */
	0xC403C007, /* word 1569 (0x1884) ftMotionCommandMakeRumble(30, 7) */
	0x60000001, /* word 1570 (0x1888) ftMotionCommandSetFlag3(1) */
	0x440001B0, /* word 1571 (0x188C) ftMotionPlayVoice(432) */
	0x0C000030, /* word 1572 (0x1890) MakeAttackColl(0, 0, 0, 1, 1, 0, 140, 0, 300, 150, 180, 0, 1, 3, 0, 1, 1, 70) */
	0x008C0000,
	0x012C0096,
	0x2D000007,
	0x00222300,
	0x0C800030, /* word 1577 (0x18A4) MakeAttackColl(1, 0, 0, 1, 1, 0, 140, 0, 300, -150, 180, 0, 1, 3, 0, 1, 1, 70) */
	0x008C0000,
	0x012CFF6A,
	0x2D000007,
	0x00222300,
	0x0D000030, /* word 1582 (0x18B8) MakeAttackColl(2, 0, 0, 1, 1, 0, 180, 0, 0, 0, 90, 0, 1, 3, 0, 1, 1, 10) */
	0x00B40000,
	0x00000000,
	0x16800007,
	0x00220500,
	0x04000004, /* word 1587 (0x18CC) ftMotionCommandWait(4) */
	0x8000000D, /* word 1588 (0x18D0) ftMotionCommandLoopBegin(13) */
	0x4C0000DA, /* word 1589 (0x18D4) ftMotionCommandPlayFGMStoreInfo(218) */
	0x0C000030, /* word 1590 (0x18D8) MakeAttackColl(0, 0, 0, 1, 1, 0, 140, 0, 260, 150, 180, 0, 1, 3, 0, 1, 1, 70) */
	0x008C0000,
	0x01040096,
	0x2D000007,
	0x00222300,
	0x0C800030, /* word 1595 (0x18EC) MakeAttackColl(1, 0, 0, 1, 1, 0, 140, 0, 260, -150, 180, 0, 1, 3, 0, 1, 1, 70) */
	0x008C0000,
	0x0104FF6A,
	0x2D000007,
	0x00222300,
	0x0D000030, /* word 1600 (0x1900) MakeAttackColl(2, 0, 0, 1, 1, 0, 160, 0, 80, 0, -90, 0, 1, 3, 0, 1, 1, 10) */
	0x00A00000,
	0x00500000,
	0xE9800007,
	0x00220500,
	0x0D800030, /* word 1605 (0x1914) MakeAttackColl(3, 0, 0, 1, 1, 0, 100, 0, 420, 0, -90, 0, 1, 3, 0, 1, 1, 70) */
	0x00640000,
	0x01A40000,
	0xE9800007,
	0x00222300,
	0x04000001, /* word 1610 (0x1928) ftMotionCommandWait(1) */
	0x18000000, /* word 1611 (0x192C) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 1612 (0x1930) ftMotionCommandWait(2) */
	0x84000000, /* word 1613 (0x1934) ftMotionCommandLoopEnd() */
	0x0C000030, /* word 1614 (0x1938) MakeAttackColl(0, 0, 0, 1, 1, 0, 200, 0, 300, 150, 90, 0, 1, 3, 0, 2, 1, 120) */
	0x00C80000,
	0x012C0096,
	0x16800007,
	0x00423C00,
	0x0C800030, /* word 1619 (0x194C) MakeAttackColl(1, 0, 0, 1, 1, 0, 200, 0, 300, -150, 90, 0, 1, 3, 0, 2, 1, 120) */
	0x00C80000,
	0x012CFF6A,
	0x16800007,
	0x00423C00,
	0x0D000030, /* word 1624 (0x1960) MakeAttackColl(2, 0, 0, 1, 1, 0, 220, 0, 80, 0, -90, 0, 1, 3, 0, 2, 1, 120) */
	0x00DC0000,
	0x00500000,
	0xE9800007,
	0x00423C00,
	0x0D800030, /* word 1629 (0x1974) MakeAttackColl(3, 0, 0, 1, 1, 0, 90, 0, 420, 0, -90, 0, 1, 3, 0, 2, 1, 120) */
	0x005A0000,
	0x01A40000,
	0xE9800007,
	0x00423C00,
	0x58000001, /* word 1634 (0x1988) ftMotionCommandSetFlag1(1) */
	0x60000000, /* word 1635 (0x198C) ftMotionCommandSetFlag3(0) */
	0x5C000001, /* word 1636 (0x1990) ftMotionCommandSetFlag2(1) */
	0x04000004, /* word 1637 (0x1994) ftMotionCommandWait(4) */
	0x18000000, /* word 1638 (0x1998) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1639 (0x199C) ftMotionCommandEnd() */
};
