/* ftMotionCommand script data for relocData file 224 (LinkMainMotion) */
/* File size: 7920 bytes (0x1EF0) */

#include "relocdata_types.h"
#include <ft/ftdef.h>

u32 dLinkMainMotion[1980] = {
	0xAC000002, /* word 0 (0x0000) ftMotionCommandSetTexturePartID(2) */
	0x04000006, /* word 1 (0x0004) ftMotionCommandWait(6) */
	0xAC000000, /* word 2 (0x0008) ftMotionCommandSetTexturePartID(0) */
	0x04000001, /* word 3 (0x000C) ftMotionCommandWait(1) */
	0x8C000000, /* word 4 (0x0010) ftMotionCommandReturn() */
	0xBC000003, /* word 5 (0x0014) ftMotionCommandSetSlopeContour(3) */
	0x88000000, /* word 6 (0x0018) Subroutine */
	0x000A0000, /* -> word 0 (0x0000) */
	0x0400001E, /* word 8 (0x0020) ftMotionCommandWait(30) */
	0x88000000, /* word 9 (0x0024) Subroutine */
	0x000D0000, /* -> word 0 (0x0000) */
	0x04000050, /* word 11 (0x002C) ftMotionCommandWait(80) */
	0x88000000, /* word 12 (0x0030) Subroutine */
	0x00100000, /* -> word 0 (0x0000) */
	0x04000032, /* word 14 (0x0038) ftMotionCommandWait(50) */
	0x90000000, /* word 15 (0x003C) Goto */
	0x002D0005, /* -> word 5 (0x0014) */
	0xBC000003, /* word 17 (0x0044) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 18 (0x0048) ftMotionCommandEnd() */
	0xBC000003, /* word 19 (0x004C) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 20 (0x0050) ftMotionCommandEnd() */
	0xBC000003, /* word 21 (0x0054) ftMotionCommandSetSlopeContour(3) */
	0x38000078, /* word 22 (0x0058) ftMotionPlayFGM(120) */
	0x80000002, /* word 23 (0x005C) ftMotionCommandLoopBegin(2) */
	0x98002C00, /* word 24 (0x0060) Effect(0, 11, 0, 0, 0, -120, 0, 60, 0) */
	0x00000000,
	0xFF880000,
	0x003C0000,
	0x04000006, /* word 28 (0x0070) ftMotionCommandWait(6) */
	0x84000000, /* word 29 (0x0074) ftMotionCommandLoopEnd() */
	0x00000000, /* word 30 (0x0078) ftMotionCommandEnd() */
	0x08000002, /* word 31 (0x007C) ftMotionCommandWaitAsync(2) */
	0x3800006D, /* word 32 (0x0080) ftMotionPlayFGM(109) */
	0x98002C00, /* word 33 (0x0084) Effect(0, 11, 0, 0, 0, 60, 0, 0, 0) */
	0x00000000,
	0x003C0000,
	0x00000000,
	0x0400000F, /* word 37 (0x0094) ftMotionCommandWait(15) */
	0x3800006D, /* word 38 (0x0098) ftMotionPlayFGM(109) */
	0x98002C00, /* word 39 (0x009C) Effect(0, 11, 0, 0, 0, 60, 0, 0, 0) */
	0x00000000,
	0x003C0000,
	0x00000000,
	0x94000000, /* word 43 (0x00AC) ftMotionCommandPauseScript() */
	0x90000000, /* word 44 (0x00B0) Goto */
	0x0077001F, /* -> word 31 (0x007C) */
	0xBC000003, /* word 46 (0x00B8) ftMotionCommandSetSlopeContour(3) */
	0x38000080, /* word 47 (0x00BC) ftMotionPlayFGM(128) */
	0x98002C00, /* word 48 (0x00C0) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 52 (0x00D0) ftMotionCommandEnd() */
	0xBC000003, /* word 53 (0x00D4) ftMotionCommandSetSlopeContour(3) */
	0x08000006, /* word 54 (0x00D8) ftMotionCommandWaitAsync(6) */
	0x58000001, /* word 55 (0x00DC) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 56 (0x00E0) ftMotionCommandEnd() */
	0xBC000003, /* word 57 (0x00E4) ftMotionCommandSetSlopeContour(3) */
	0x98004000, /* word 58 (0x00E8) Effect(0, 16, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x08000011, /* word 62 (0x00F8) ftMotionCommandWaitAsync(17) */
	0x58000001, /* word 63 (0x00FC) ftMotionCommandSetFlag1(1) */
	0x5C000001, /* word 64 (0x0100) ftMotionCommandSetFlag2(1) */
	0x98002C00, /* word 65 (0x0104) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 69 (0x0114) ftMotionCommandEnd() */
	0x74000003, /* word 70 (0x0118) ftMotionCommandSetHitStatusAll(3) */
	0x08000002, /* word 71 (0x011C) ftMotionCommandWaitAsync(2) */
	0x74000001, /* word 72 (0x0120) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 73 (0x0124) ftMotionCommandEnd() */
	0x38000062, /* word 74 (0x0128) ftMotionPlayFGM(98) */
	0x44000198, /* word 75 (0x012C) ftMotionPlayVoice(408) */
	0x98003400, /* word 76 (0x0130) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 80 (0x0140) ftMotionCommandEnd() */
	0x38000057, /* word 81 (0x0144) ftMotionPlayFGM(87) */
	0x44000199, /* word 82 (0x0148) ftMotionPlayVoice(409) */
	0x80000002, /* word 83 (0x014C) ftMotionCommandLoopBegin(2) */
	0x98002C00, /* word 84 (0x0150) Effect(0, 11, 0, 0, 0, 0, 100, 100, 100) */
	0x00000000,
	0x00000064,
	0x00640064,
	0x04000006, /* word 88 (0x0160) ftMotionCommandWait(6) */
	0x84000000, /* word 89 (0x0164) ftMotionCommandLoopEnd() */
	0x00000000, /* word 90 (0x0168) ftMotionCommandEnd() */
	0xBC000003, /* word 91 (0x016C) ftMotionCommandSetSlopeContour(3) */
	0x3800004C, /* word 92 (0x0170) ftMotionPlayFGM(76) */
	0x98002C00, /* word 93 (0x0174) Effect(0, 11, 0, 0, 0, -60, 0, 0, 0) */
	0x00000000,
	0xFFC40000,
	0x00000000,
	0x00000000, /* word 97 (0x0184) ftMotionCommandEnd() */
	0xBC000003, /* word 98 (0x0188) ftMotionCommandSetSlopeContour(3) */
	0x3800004C, /* word 99 (0x018C) ftMotionPlayFGM(76) */
	0x98003400, /* word 100 (0x0190) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 104 (0x01A0) ftMotionCommandEnd() */
	0x4400019C, /* word 105 (0x01A4) ftMotionPlayVoice(412) */
	0x00000000, /* word 106 (0x01A8) ftMotionCommandEnd() */
	0x3800027A, /* word 107 (0x01AC) ftMotionPlayFGM(634) */
	0x00000000, /* word 108 (0x01B0) ftMotionCommandEnd() */
	0x3800027A, /* word 109 (0x01B4) ftMotionPlayFGM(634) */
	0x74000003, /* word 110 (0x01B8) ftMotionCommandSetHitStatusAll(3) */
	0x08000002, /* word 111 (0x01BC) ftMotionCommandWaitAsync(2) */
	0x74000001, /* word 112 (0x01C0) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 113 (0x01C4) ftMotionCommandEnd() */
	0x00000000, /* word 114 (0x01C8) ftMotionCommandEnd() */
	0xAC000001, /* word 115 (0x01CC) ftMotionCommandSetTexturePartID(1) */
	0xAC100001, /* word 116 (0x01D0) ftMotionCommandSetTexturePartID(1048577) */
	0x8C000000, /* word 117 (0x01D4) ftMotionCommandReturn() */
	0x88000000, /* word 118 (0x01D8) Subroutine */
	0x007A0073, /* -> word 115 (0x01CC) */
	0x00000000, /* word 120 (0x01E0) ftMotionCommandEnd() */
	0x88000000, /* word 121 (0x01E4) Subroutine */
	0x00A30073, /* -> word 115 (0x01CC) */
	0x34000000, /* word 123 (0x01EC) SetDamageThrown */
	0x02A301D6, /* extern -> 0x758 */
	0x00000000, /* word 125 (0x01F4) ftMotionCommandEnd() */
	0xBC000003, /* word 126 (0x01F8) ftMotionCommandSetSlopeContour(3) */
	0x3800004C, /* word 127 (0x01FC) ftMotionPlayFGM(76) */
	0x98003400, /* word 128 (0x0200) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 132 (0x0210) ftMotionCommandEnd() */
	0xBC000003, /* word 133 (0x0214) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 134 (0x0218) ftMotionCommandEnd() */
	0xBC000003, /* word 135 (0x021C) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 136 (0x0220) ftMotionCommandEnd() */
	0xBC000003, /* word 137 (0x0224) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 138 (0x0228) ftMotionCommandEnd() */
	0x08000008, /* word 139 (0x022C) ftMotionCommandWaitAsync(8) */
	0x74000003, /* word 140 (0x0230) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 141 (0x0234) ftMotionCommandEnd() */
	0x08000018, /* word 142 (0x0238) ftMotionCommandWaitAsync(24) */
	0x74000001, /* word 143 (0x023C) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 144 (0x0240) ftMotionCommandEnd() */
	0xAC000001, /* word 145 (0x0244) ftMotionCommandSetTexturePartID(1) */
	0xAC100001, /* word 146 (0x0248) ftMotionCommandSetTexturePartID(1048577) */
	0xBC000004, /* word 147 (0x024C) ftMotionCommandSetSlopeContour(4) */
	0x98003400, /* word 148 (0x0250) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x9BF88400, /* word 152 (0x0260) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x04000002, /* word 156 (0x0270) ftMotionCommandWait(2) */
	0xBC000000, /* word 157 (0x0274) ftMotionCommandSetSlopeContour(0) */
	0x08000018, /* word 158 (0x0278) ftMotionCommandWaitAsync(24) */
	0xBC000004, /* word 159 (0x027C) ftMotionCommandSetSlopeContour(4) */
	0x04000001, /* word 160 (0x0280) ftMotionCommandWait(1) */
	0x00000000, /* word 161 (0x0284) ftMotionCommandEnd() */
	0x90000000, /* word 162 (0x0288) Goto */
	0x00B30091, /* -> word 145 (0x0244) */
	0x98002C00, /* word 164 (0x0290) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 168 (0x02A0) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 169 (0x02A4) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 170 (0x02A8) ftMotionCommandSetHitStatusAll(1) */
	0x8C000000, /* word 171 (0x02AC) ftMotionCommandReturn() */
	0x74000003, /* word 172 (0x02B0) ftMotionCommandSetHitStatusAll(3) */
	0x08000016, /* word 173 (0x02B4) ftMotionCommandWaitAsync(22) */
	0x74000001, /* word 174 (0x02B8) ftMotionCommandSetHitStatusAll(1) */
	0x08000002, /* word 175 (0x02BC) ftMotionCommandWaitAsync(2) */
	0x58000001, /* word 176 (0x02C0) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 177 (0x02C4) ftMotionCommandEnd() */
	0x90000000, /* word 178 (0x02C8) Goto */
	0x00B600AC, /* -> word 172 (0x02B0) */
	0x3800000B, /* word 180 (0x02D0) ftMotionPlayFGM(11) */
	0x88000000, /* word 181 (0x02D4) Subroutine */
	0x00B900A4, /* -> word 164 (0x0290) */
	0x00000000, /* word 183 (0x02DC) ftMotionCommandEnd() */
	0x90000000, /* word 184 (0x02E0) Goto */
	0x00BB00B4, /* -> word 180 (0x02D0) */
	0x90000000, /* word 186 (0x02E8) Goto */
	0x00BD00B4, /* -> word 180 (0x02D0) */
	0x90000000, /* word 188 (0x02F0) Goto */
	0x014600B4, /* -> word 180 (0x02D0) */
	0xBC000003, /* word 190 (0x02F8) ftMotionCommandSetSlopeContour(3) */
	0x74000003, /* word 191 (0x02FC) ftMotionCommandSetHitStatusAll(3) */
	0x0800000F, /* word 192 (0x0300) ftMotionCommandWaitAsync(15) */
	0xCC000000, /* word 193 (0x0304) ftMotionCommandSetAfterImage(0, 0) */
	0x08000010, /* word 194 (0x0308) ftMotionCommandWaitAsync(16) */
	0x98003400, /* word 195 (0x030C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4C000103, /* word 199 (0x031C) ftMotionCommandPlayFGMStoreInfo(259) */
	0x98587C00, /* word 200 (0x0320) Effect(11, 31, 0, 0, 0, 180, 0, 0, 0) */
	0x00000000,
	0x00B40000,
	0x00000000,
	0x0C016113, /* word 204 (0x0330) MakeAttackColl(0, 0, 11, 8, 1, 3, 220, 0, 0, 200, 361, 100, 110, 3, 0, 1, 5, 0) */
	0x00DC0000,
	0x000000C8,
	0x5A4641BB,
	0x002A0000,
	0x0C814113, /* word 209 (0x0344) MakeAttackColl(1, 0, 10, 8, 1, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 1, 5, 0) */
	0x00A00000,
	0x00000000,
	0x5A4641BB,
	0x002A0000,
	0x04000004, /* word 214 (0x0358) ftMotionCommandWait(4) */
	0x18000000, /* word 215 (0x035C) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 216 (0x0360) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 217 (0x0364) ftMotionCommandSetAfterImage(0, -1) */
	0x04000001, /* word 218 (0x0368) ftMotionCommandWait(1) */
	0xCC000000, /* word 219 (0x036C) ftMotionCommandSetAfterImage(0, 0) */
	0x04000001, /* word 220 (0x0370) ftMotionCommandWait(1) */
	0x4C000103, /* word 221 (0x0374) ftMotionCommandPlayFGMStoreInfo(259) */
	0x98587C00, /* word 222 (0x0378) Effect(11, 31, 0, 0, 0, 180, 0, 0, 0) */
	0x00000000,
	0x00B40000,
	0x00000000,
	0x0C0160D3, /* word 226 (0x0388) MakeAttackColl(0, 0, 11, 6, 1, 3, 220, 0, 0, 200, 361, 100, 110, 3, 0, 1, 5, 0) */
	0x00DC0000,
	0x000000C8,
	0x5A4641BB,
	0x002A0000,
	0x0C8140D3, /* word 231 (0x039C) MakeAttackColl(1, 0, 10, 6, 1, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 1, 5, 0) */
	0x00A00000,
	0x00000000,
	0x5A4641BB,
	0x002A0000,
	0x04000002, /* word 236 (0x03B0) ftMotionCommandWait(2) */
	0x74000001, /* word 237 (0x03B4) ftMotionCommandSetHitStatusAll(1) */
	0x04000003, /* word 238 (0x03B8) ftMotionCommandWait(3) */
	0x18000000, /* word 239 (0x03BC) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 240 (0x03C0) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 241 (0x03C4) ftMotionCommandSetAfterImage(0, -1) */
	0x00000000, /* word 242 (0x03C8) ftMotionCommandEnd() */
	0x74000003, /* word 243 (0x03CC) ftMotionCommandSetHitStatusAll(3) */
	0x08000012, /* word 244 (0x03D0) ftMotionCommandWaitAsync(18) */
	0xCC000000, /* word 245 (0x03D4) ftMotionCommandSetAfterImage(0, 0) */
	0x08000013, /* word 246 (0x03D8) ftMotionCommandWaitAsync(19) */
	0x98003400, /* word 247 (0x03DC) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4C000103, /* word 251 (0x03EC) ftMotionCommandPlayFGMStoreInfo(259) */
	0x98587C00, /* word 252 (0x03F0) Effect(11, 31, 0, 0, 0, 180, 0, 0, 0) */
	0x00000000,
	0x00B40000,
	0x00000000,
	0x0C016103, /* word 256 (0x0400) MakeAttackColl(0, 0, 11, 8, 0, 3, 220, 0, 0, 200, 361, 100, 110, 3, 0, 1, 5, 0) */
	0x00DC0000,
	0x000000C8,
	0x5A4641BB,
	0x002A0000,
	0x0C814103, /* word 261 (0x0414) MakeAttackColl(1, 0, 10, 8, 0, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 1, 5, 0) */
	0x00A00000,
	0x00000000,
	0x5A4641BB,
	0x002A0000,
	0x04000003, /* word 266 (0x0428) ftMotionCommandWait(3) */
	0x18000000, /* word 267 (0x042C) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 268 (0x0430) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 269 (0x0434) ftMotionCommandSetAfterImage(0, -1) */
	0x04000001, /* word 270 (0x0438) ftMotionCommandWait(1) */
	0xCC000000, /* word 271 (0x043C) ftMotionCommandSetAfterImage(0, 0) */
	0x04000001, /* word 272 (0x0440) ftMotionCommandWait(1) */
	0x4C000103, /* word 273 (0x0444) ftMotionCommandPlayFGMStoreInfo(259) */
	0x98587C00, /* word 274 (0x0448) Effect(11, 31, 0, 0, 0, 180, 0, 0, 0) */
	0x00000000,
	0x00B40000,
	0x00000000,
	0x0C0160C3, /* word 278 (0x0458) MakeAttackColl(0, 0, 11, 6, 0, 3, 220, 0, 0, 200, 361, 100, 110, 3, 0, 1, 5, 0) */
	0x00DC0000,
	0x000000C8,
	0x5A4641BB,
	0x002A0000,
	0x0C8140C3, /* word 283 (0x046C) MakeAttackColl(1, 0, 10, 6, 0, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 1, 5, 0) */
	0x00A00000,
	0x00000000,
	0x5A4641BB,
	0x002A0000,
	0x04000002, /* word 288 (0x0480) ftMotionCommandWait(2) */
	0x74000001, /* word 289 (0x0484) ftMotionCommandSetHitStatusAll(1) */
	0x04000003, /* word 290 (0x0488) ftMotionCommandWait(3) */
	0x18000000, /* word 291 (0x048C) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 292 (0x0490) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 293 (0x0494) ftMotionCommandSetAfterImage(0, -1) */
	0x00000000, /* word 294 (0x0498) ftMotionCommandEnd() */
	0xC4000009, /* word 295 (0x049C) ftMotionCommandMakeRumble(0, 9) */
	0x9800A800, /* word 296 (0x04A0) Effect(0, 42, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4400019F, /* word 300 (0x04B0) ftMotionPlayVoice(415) */
	0x38000011, /* word 301 (0x04B4) ftMotionPlayFGM(17) */
	0x98007C00, /* word 302 (0x04B8) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 306 (0x04C8) ftMotionCommandSetHitStatusAll(3) */
	0x08000018, /* word 307 (0x04CC) ftMotionCommandWaitAsync(24) */
	0x74000001, /* word 308 (0x04D0) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 309 (0x04D4) ftMotionCommandEnd() */
	0xC4000007, /* word 310 (0x04D8) ftMotionCommandMakeRumble(0, 7) */
	0x9800A800, /* word 311 (0x04DC) Effect(0, 42, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x3800000B, /* word 315 (0x04EC) ftMotionPlayFGM(11) */
	0x98007C00, /* word 316 (0x04F0) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 320 (0x0500) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 321 (0x0504) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 322 (0x0508) ftMotionCommandSetHitStatusAll(1) */
	0xC8000007, /* word 323 (0x050C) ftMotionCommandStopRumble(7) */
	0x00000000, /* word 324 (0x0510) ftMotionCommandEnd() */
	0x90000000, /* word 325 (0x0514) Goto */
	0x02040136, /* -> word 310 (0x04D8) */
	0x3800000B, /* word 327 (0x051C) ftMotionPlayFGM(11) */
	0x98007C00, /* word 328 (0x0520) Effect(0, 31, 0, 0, 120, 0, 0, 0, 0) */
	0x00000078,
	0x00000000,
	0x00000000,
	0x08000004, /* word 332 (0x0530) ftMotionCommandWaitAsync(4) */
	0x98004000, /* word 333 (0x0534) Effect(0, 16, 0, 100, 0, 0, 0, 0, 0) */
	0x00640000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 337 (0x0544) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 338 (0x0548) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 339 (0x054C) ftMotionCommandSetHitStatusAll(1) */
	0x58000001, /* word 340 (0x0550) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 341 (0x0554) ftMotionCommandEnd() */
	0x3800000B, /* word 342 (0x0558) ftMotionPlayFGM(11) */
	0x98007C00, /* word 343 (0x055C) Effect(0, 31, 0, 0, 120, 0, 0, 0, 0) */
	0x00000078,
	0x00000000,
	0x00000000,
	0x08000004, /* word 347 (0x056C) ftMotionCommandWaitAsync(4) */
	0x98003C00, /* word 348 (0x0570) Effect(0, 15, 0, -100, 0, 0, 0, 0, 0) */
	0xFF9C0000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 352 (0x0580) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 353 (0x0584) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 354 (0x0588) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 355 (0x058C) ftMotionCommandEnd() */
	0xAC000001, /* word 356 (0x0590) ftMotionCommandSetTexturePartID(1) */
	0xAC100001, /* word 357 (0x0594) ftMotionCommandSetTexturePartID(1048577) */
	0x74000003, /* word 358 (0x0598) ftMotionCommandSetHitStatusAll(3) */
	0x38000013, /* word 359 (0x059C) ftMotionPlayFGM(19) */
	0x00000000, /* word 360 (0x05A0) ftMotionCommandEnd() */
	0xAC000001, /* word 361 (0x05A4) ftMotionCommandSetTexturePartID(1) */
	0xAC100001, /* word 362 (0x05A8) ftMotionCommandSetTexturePartID(1048577) */
	0x74000003, /* word 363 (0x05AC) ftMotionCommandSetHitStatusAll(3) */
	0x0400003C, /* word 364 (0x05B0) ftMotionCommandWait(60) */
	0x74000001, /* word 365 (0x05B4) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 366 (0x05B8) ftMotionCommandEnd() */
	0x74000003, /* word 367 (0x05BC) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 368 (0x05C0) ftMotionCommandEnd() */
	0x74000003, /* word 369 (0x05C4) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 370 (0x05C8) ftMotionCommandEnd() */
	0x74000003, /* word 371 (0x05CC) ftMotionCommandSetHitStatusAll(3) */
	0x0400000C, /* word 372 (0x05D0) ftMotionCommandWait(12) */
	0x74000001, /* word 373 (0x05D4) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 374 (0x05D8) ftMotionCommandEnd() */
	0x74000003, /* word 375 (0x05DC) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 376 (0x05E0) ftMotionCommandEnd() */
	0x74000003, /* word 377 (0x05E4) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 378 (0x05E8) ftMotionCommandEnd() */
	0x74000003, /* word 379 (0x05EC) ftMotionCommandSetHitStatusAll(3) */
	0x0400000C, /* word 380 (0x05F0) ftMotionCommandWait(12) */
	0x74000001, /* word 381 (0x05F4) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 382 (0x05F8) ftMotionCommandEnd() */
	0x74000003, /* word 383 (0x05FC) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 384 (0x0600) ftMotionCommandEnd() */
	0x74000003, /* word 385 (0x0604) ftMotionCommandSetHitStatusAll(3) */
	0x98007C00, /* word 386 (0x0608) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x44000191, /* word 390 (0x0618) ftMotionPlayVoice(401) */
	0x08000006, /* word 391 (0x061C) ftMotionCommandWaitAsync(6) */
	0xCC000000, /* word 392 (0x0620) ftMotionCommandSetAfterImage(0, 0) */
	0x08000007, /* word 393 (0x0624) ftMotionCommandWaitAsync(7) */
	0x0C016093, /* word 394 (0x0628) MakeAttackColl(0, 0, 11, 4, 1, 3, 220, 0, 0, 200, 361, 100, 110, 3, 0, 2, 5, 0) */
	0x00DC0000,
	0x000000C8,
	0x5A4641BB,
	0x004A0000,
	0x0C814093, /* word 399 (0x063C) MakeAttackColl(1, 0, 10, 4, 1, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 2, 5, 0) */
	0x00A00000,
	0x00000000,
	0x5A4641BB,
	0x004A0000,
	0x4C000103, /* word 404 (0x0650) ftMotionCommandPlayFGMStoreInfo(259) */
	0x98004C00, /* word 405 (0x0654) Effect(0, 19, 0, 0, -80, -180, 0, 0, 0) */
	0x0000FFB0,
	0xFF4C0000,
	0x00000000,
	0x04000002, /* word 409 (0x0664) ftMotionCommandWait(2) */
	0x74000001, /* word 410 (0x0668) ftMotionCommandSetHitStatusAll(1) */
	0x04000003, /* word 411 (0x066C) ftMotionCommandWait(3) */
	0x18000000, /* word 412 (0x0670) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 413 (0x0674) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 414 (0x0678) ftMotionCommandSetAfterImage(0, -1) */
	0x00000000, /* word 415 (0x067C) ftMotionCommandEnd() */
	0x74000003, /* word 416 (0x0680) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 417 (0x0684) ftMotionCommandEnd() */
	0x98007C00, /* word 418 (0x0688) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 422 (0x0698) ftMotionCommandSetHitStatusAll(3) */
	0x44000191, /* word 423 (0x069C) ftMotionPlayVoice(401) */
	0x0800000B, /* word 424 (0x06A0) ftMotionCommandWaitAsync(11) */
	0xCC000000, /* word 425 (0x06A4) ftMotionCommandSetAfterImage(0, 0) */
	0x0800000C, /* word 426 (0x06A8) ftMotionCommandWaitAsync(12) */
	0x0C016093, /* word 427 (0x06AC) MakeAttackColl(0, 0, 11, 4, 1, 3, 220, 0, 0, 240, 361, 100, 110, 3, 0, 2, 5, 0) */
	0x00DC0000,
	0x000000F0,
	0x5A4641BB,
	0x004A0000,
	0x0C814093, /* word 432 (0x06C0) MakeAttackColl(1, 0, 10, 4, 1, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 2, 5, 0) */
	0x00A00000,
	0x00000000,
	0x5A4641BB,
	0x004A0000,
	0x4C000103, /* word 437 (0x06D4) ftMotionCommandPlayFGMStoreInfo(259) */
	0x98004C00, /* word 438 (0x06D8) Effect(0, 19, 0, 0, -80, -180, 0, 0, 0) */
	0x0000FFB0,
	0xFF4C0000,
	0x00000000,
	0x04000002, /* word 442 (0x06E8) ftMotionCommandWait(2) */
	0x74000001, /* word 443 (0x06EC) ftMotionCommandSetHitStatusAll(1) */
	0x04000004, /* word 444 (0x06F0) ftMotionCommandWait(4) */
	0x18000000, /* word 445 (0x06F4) ftMotionCommandClearAttackCollAll() */
	0x74000003, /* word 446 (0x06F8) ftMotionCommandSetHitStatusAll(3) */
	0x04000002, /* word 447 (0x06FC) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 448 (0x0700) ftMotionCommandSetAfterImage(0, -1) */
	0x00000000, /* word 449 (0x0704) ftMotionCommandEnd() */
	0x74000003, /* word 450 (0x0708) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 451 (0x070C) ftMotionCommandEnd() */
	0x3800000B, /* word 452 (0x0710) ftMotionPlayFGM(11) */
	0x98004000, /* word 453 (0x0714) Effect(0, 16, 0, 100, 0, 0, 0, 0, 0) */
	0x00640000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 457 (0x0724) ftMotionCommandSetHitStatusAll(3) */
	0x04000012, /* word 458 (0x0728) ftMotionCommandWait(18) */
	0x74000001, /* word 459 (0x072C) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 460 (0x0730) ftMotionCommandEnd() */
	0x74000003, /* word 461 (0x0734) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 462 (0x0738) ftMotionCommandEnd() */
	0x3800000B, /* word 463 (0x073C) ftMotionPlayFGM(11) */
	0x98004000, /* word 464 (0x0740) Effect(0, 16, 0, 100, 0, 0, 0, 0, 0) */
	0x00640000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 468 (0x0750) ftMotionCommandSetHitStatusAll(3) */
	0x04000024, /* word 469 (0x0754) ftMotionCommandWait(36) */
	0x74000001, /* word 470 (0x0758) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 471 (0x075C) ftMotionCommandEnd() */
	0xBC000003, /* word 472 (0x0760) ftMotionCommandSetSlopeContour(3) */
	0x08000002, /* word 473 (0x0764) ftMotionCommandWaitAsync(2) */
	0xA0A80000, /* word 474 (0x0768) ftMotionCommandSetModelPartID(21, 0) */
	0xA09FFFFF, /* word 475 (0x076C) ftMotionCommandSetModelPartID(19, -1) */
	0x08000004, /* word 476 (0x0770) ftMotionCommandWaitAsync(4) */
	0x58000001, /* word 477 (0x0774) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 478 (0x0778) ftMotionCommandEnd() */
	0xBC000003, /* word 479 (0x077C) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 480 (0x0780) ftMotionCommandWaitAsync(4) */
	0xA0A80000, /* word 481 (0x0784) ftMotionCommandSetModelPartID(21, 0) */
	0xA09FFFFF, /* word 482 (0x0788) ftMotionCommandSetModelPartID(19, -1) */
	0x58000001, /* word 483 (0x078C) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 484 (0x0790) ftMotionCommandEnd() */
	0xBC000003, /* word 485 (0x0794) ftMotionCommandSetSlopeContour(3) */
	0x08000009, /* word 486 (0x0798) ftMotionCommandWaitAsync(9) */
	0x54000001, /* word 487 (0x079C) ftMotionCommandSetFlag0(1) */
	0x08000014, /* word 488 (0x07A0) ftMotionCommandWaitAsync(20) */
	0xA0AFFFFF, /* word 489 (0x07A4) ftMotionCommandSetModelPartID(21, -1) */
	0xA0980000, /* word 490 (0x07A8) ftMotionCommandSetModelPartID(19, 0) */
	0x00000000, /* word 491 (0x07AC) ftMotionCommandEnd() */
	0x08000008, /* word 492 (0x07B0) ftMotionCommandWaitAsync(8) */
	0x98004C00, /* word 493 (0x07B4) Effect(0, 19, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 497 (0x07C4) ftMotionCommandSetFlag0(1) */
	0x0800001F, /* word 498 (0x07C8) ftMotionCommandWaitAsync(31) */
	0xA0AFFFFF, /* word 499 (0x07CC) ftMotionCommandSetModelPartID(21, -1) */
	0xA0980000, /* word 500 (0x07D0) ftMotionCommandSetModelPartID(19, 0) */
	0x00000000, /* word 501 (0x07D4) ftMotionCommandEnd() */
	0xBC000003, /* word 502 (0x07D8) ftMotionCommandSetSlopeContour(3) */
	0x08000008, /* word 503 (0x07DC) ftMotionCommandWaitAsync(8) */
	0x98002C00, /* word 504 (0x07E0) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 508 (0x07F0) ftMotionCommandSetFlag0(1) */
	0x08000014, /* word 509 (0x07F4) ftMotionCommandWaitAsync(20) */
	0xA0AFFFFF, /* word 510 (0x07F8) ftMotionCommandSetModelPartID(21, -1) */
	0xA0980000, /* word 511 (0x07FC) ftMotionCommandSetModelPartID(19, 0) */
	0x00000000, /* word 512 (0x0800) ftMotionCommandEnd() */
	0xBC000003, /* word 513 (0x0804) ftMotionCommandSetSlopeContour(3) */
	0x60000006, /* word 514 (0x0808) ftMotionCommandSetFlag3(6) */
	0x90000000, /* word 515 (0x080C) Goto */
	0x022A01F6, /* -> word 502 (0x07D8) */
	0xBC000003, /* word 517 (0x0814) ftMotionCommandSetSlopeContour(3) */
	0x08000009, /* word 518 (0x0818) ftMotionCommandWaitAsync(9) */
	0x98002C00, /* word 519 (0x081C) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 523 (0x082C) ftMotionCommandSetFlag0(1) */
	0x08000014, /* word 524 (0x0830) ftMotionCommandWaitAsync(20) */
	0xA0AFFFFF, /* word 525 (0x0834) ftMotionCommandSetModelPartID(21, -1) */
	0xA0980000, /* word 526 (0x0838) ftMotionCommandSetModelPartID(19, 0) */
	0x00000000, /* word 527 (0x083C) ftMotionCommandEnd() */
	0xBC000003, /* word 528 (0x0840) ftMotionCommandSetSlopeContour(3) */
	0x08000006, /* word 529 (0x0844) ftMotionCommandWaitAsync(6) */
	0x98002C00, /* word 530 (0x0848) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 534 (0x0858) ftMotionCommandSetFlag0(1) */
	0x08000010, /* word 535 (0x085C) ftMotionCommandWaitAsync(16) */
	0xA0AFFFFF, /* word 536 (0x0860) ftMotionCommandSetModelPartID(21, -1) */
	0xA0980000, /* word 537 (0x0864) ftMotionCommandSetModelPartID(19, 0) */
	0x00000000, /* word 538 (0x0868) ftMotionCommandEnd() */
	0xBC000003, /* word 539 (0x086C) ftMotionCommandSetSlopeContour(3) */
	0x08000008, /* word 540 (0x0870) ftMotionCommandWaitAsync(8) */
	0x50000000, /* word 541 (0x0874) ftMotionCommandPlaySmashVoice(0) */
	0x98004C00, /* word 542 (0x0878) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x54000001, /* word 546 (0x0888) ftMotionCommandSetFlag0(1) */
	0x08000014, /* word 547 (0x088C) ftMotionCommandWaitAsync(20) */
	0xA0AFFFFF, /* word 548 (0x0890) ftMotionCommandSetModelPartID(21, -1) */
	0xA0980000, /* word 549 (0x0894) ftMotionCommandSetModelPartID(19, 0) */
	0x00000000, /* word 550 (0x0898) ftMotionCommandEnd() */
	0xBC000003, /* word 551 (0x089C) ftMotionCommandSetSlopeContour(3) */
	0x60000006, /* word 552 (0x08A0) ftMotionCommandSetFlag3(6) */
	0x90000000, /* word 553 (0x08A4) Goto */
	0x024F021B, /* -> word 539 (0x086C) */
	0xBC000003, /* word 555 (0x08AC) ftMotionCommandSetSlopeContour(3) */
	0x08000009, /* word 556 (0x08B0) ftMotionCommandWaitAsync(9) */
	0x50000000, /* word 557 (0x08B4) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 558 (0x08B8) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 562 (0x08C8) ftMotionCommandSetFlag0(1) */
	0x08000014, /* word 563 (0x08CC) ftMotionCommandWaitAsync(20) */
	0xA0AFFFFF, /* word 564 (0x08D0) ftMotionCommandSetModelPartID(21, -1) */
	0xA0980000, /* word 565 (0x08D4) ftMotionCommandSetModelPartID(19, 0) */
	0x00000000, /* word 566 (0x08D8) ftMotionCommandEnd() */
	0xBC000003, /* word 567 (0x08DC) ftMotionCommandSetSlopeContour(3) */
	0x08000006, /* word 568 (0x08E0) ftMotionCommandWaitAsync(6) */
	0x50000000, /* word 569 (0x08E4) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 570 (0x08E8) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 574 (0x08F8) ftMotionCommandSetFlag0(1) */
	0x08000010, /* word 575 (0x08FC) ftMotionCommandWaitAsync(16) */
	0xA0AFFFFF, /* word 576 (0x0900) ftMotionCommandSetModelPartID(21, -1) */
	0xA0980000, /* word 577 (0x0904) ftMotionCommandSetModelPartID(19, 0) */
	0x00000000, /* word 578 (0x0908) ftMotionCommandEnd() */
	0x08000008, /* word 579 (0x090C) ftMotionCommandWaitAsync(8) */
	0x98002C00, /* word 580 (0x0910) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 584 (0x0920) ftMotionCommandSetFlag0(1) */
	0x0800001A, /* word 585 (0x0924) ftMotionCommandWaitAsync(26) */
	0xA0AFFFFF, /* word 586 (0x0928) ftMotionCommandSetModelPartID(21, -1) */
	0xA0980000, /* word 587 (0x092C) ftMotionCommandSetModelPartID(19, 0) */
	0x00000000, /* word 588 (0x0930) ftMotionCommandEnd() */
	0x60000004, /* word 589 (0x0934) ftMotionCommandSetFlag3(4) */
	0x90000000, /* word 590 (0x0938) Goto */
	0x02710243, /* -> word 579 (0x090C) */
	0x08000008, /* word 592 (0x0940) ftMotionCommandWaitAsync(8) */
	0x98002C00, /* word 593 (0x0944) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 597 (0x0954) ftMotionCommandSetFlag0(1) */
	0x08000014, /* word 598 (0x0958) ftMotionCommandWaitAsync(20) */
	0xA0AFFFFF, /* word 599 (0x095C) ftMotionCommandSetModelPartID(21, -1) */
	0xA0980000, /* word 600 (0x0960) ftMotionCommandSetModelPartID(19, 0) */
	0x00000000, /* word 601 (0x0964) ftMotionCommandEnd() */
	0x08000006, /* word 602 (0x0968) ftMotionCommandWaitAsync(6) */
	0x98002C00, /* word 603 (0x096C) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 607 (0x097C) ftMotionCommandSetFlag0(1) */
	0x08000014, /* word 608 (0x0980) ftMotionCommandWaitAsync(20) */
	0xA0AFFFFF, /* word 609 (0x0984) ftMotionCommandSetModelPartID(21, -1) */
	0xA0980000, /* word 610 (0x0988) ftMotionCommandSetModelPartID(19, 0) */
	0x00000000, /* word 611 (0x098C) ftMotionCommandEnd() */
	0x08000008, /* word 612 (0x0990) ftMotionCommandWaitAsync(8) */
	0x50000000, /* word 613 (0x0994) ftMotionCommandPlaySmashVoice(0) */
	0x98004000, /* word 614 (0x0998) Effect(0, 16, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 618 (0x09A8) ftMotionCommandSetFlag0(1) */
	0x0800001A, /* word 619 (0x09AC) ftMotionCommandWaitAsync(26) */
	0xA0AFFFFF, /* word 620 (0x09B0) ftMotionCommandSetModelPartID(21, -1) */
	0xA0980000, /* word 621 (0x09B4) ftMotionCommandSetModelPartID(19, 0) */
	0x00000000, /* word 622 (0x09B8) ftMotionCommandEnd() */
	0x60000004, /* word 623 (0x09BC) ftMotionCommandSetFlag3(4) */
	0x90000000, /* word 624 (0x09C0) Goto */
	0x02920264, /* -> word 612 (0x0990) */
	0x08000008, /* word 626 (0x09C8) ftMotionCommandWaitAsync(8) */
	0x50000000, /* word 627 (0x09CC) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 628 (0x09D0) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 632 (0x09E0) ftMotionCommandSetFlag0(1) */
	0x08000014, /* word 633 (0x09E4) ftMotionCommandWaitAsync(20) */
	0xA0AFFFFF, /* word 634 (0x09E8) ftMotionCommandSetModelPartID(21, -1) */
	0xA0980000, /* word 635 (0x09EC) ftMotionCommandSetModelPartID(19, 0) */
	0x00000000, /* word 636 (0x09F0) ftMotionCommandEnd() */
	0x08000006, /* word 637 (0x09F4) ftMotionCommandWaitAsync(6) */
	0x50000000, /* word 638 (0x09F8) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 639 (0x09FC) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 643 (0x0A0C) ftMotionCommandSetFlag0(1) */
	0x08000014, /* word 644 (0x0A10) ftMotionCommandWaitAsync(20) */
	0xA0AFFFFF, /* word 645 (0x0A14) ftMotionCommandSetModelPartID(21, -1) */
	0xA0980000, /* word 646 (0x0A18) ftMotionCommandSetModelPartID(19, 0) */
	0x00000000, /* word 647 (0x0A1C) ftMotionCommandEnd() */
	0xBC000003, /* word 648 (0x0A20) ftMotionCommandSetSlopeContour(3) */
	0x08000014, /* word 649 (0x0A24) ftMotionCommandWaitAsync(20) */
	0x54000001, /* word 650 (0x0A28) ftMotionCommandSetFlag0(1) */
	0x08000024, /* word 651 (0x0A2C) ftMotionCommandWaitAsync(36) */
	0xA0AFFFFF, /* word 652 (0x0A30) ftMotionCommandSetModelPartID(21, -1) */
	0xA0980000, /* word 653 (0x0A34) ftMotionCommandSetModelPartID(19, 0) */
	0x00000000, /* word 654 (0x0A38) ftMotionCommandEnd() */
	0xBC000003, /* word 655 (0x0A3C) ftMotionCommandSetSlopeContour(3) */
	0x6000000A, /* word 656 (0x0A40) ftMotionCommandSetFlag3(10) */
	0x90000000, /* word 657 (0x0A44) Goto */
	0x029D0288, /* -> word 648 (0x0A20) */
	0xBC000003, /* word 659 (0x0A4C) ftMotionCommandSetSlopeContour(3) */
	0x08000014, /* word 660 (0x0A50) ftMotionCommandWaitAsync(20) */
	0x54000001, /* word 661 (0x0A54) ftMotionCommandSetFlag0(1) */
	0x08000024, /* word 662 (0x0A58) ftMotionCommandWaitAsync(36) */
	0xA0AFFFFF, /* word 663 (0x0A5C) ftMotionCommandSetModelPartID(21, -1) */
	0xA0980000, /* word 664 (0x0A60) ftMotionCommandSetModelPartID(19, 0) */
	0x00000000, /* word 665 (0x0A64) ftMotionCommandEnd() */
	0xBC000003, /* word 666 (0x0A68) ftMotionCommandSetSlopeContour(3) */
	0x60000006, /* word 667 (0x0A6C) ftMotionCommandSetFlag3(6) */
	0x90000000, /* word 668 (0x0A70) Goto */
	0x03590293, /* -> word 659 (0x0A4C) */
	0xBC000003, /* word 670 (0x0A78) ftMotionCommandSetSlopeContour(3) */
	0x08000006, /* word 671 (0x0A7C) ftMotionCommandWaitAsync(6) */
	0xCC040000, /* word 672 (0x0A80) ftMotionCommandSetAfterImage(1, 0) */
	0x08000007, /* word 673 (0x0A84) ftMotionCommandWaitAsync(7) */
	0x88000000, /* word 674 (0x0A88) Subroutine */
	0x02AE0000, /* extern -> 0x0 */
	0x04000004, /* word 676 (0x0A90) ftMotionCommandWait(4) */
	0x18000000, /* word 677 (0x0A94) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 678 (0x0A98) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 679 (0x0A9C) ftMotionCommandSetAfterImage(0, -1) */
	0x00000000, /* word 680 (0x0AA0) ftMotionCommandEnd() */
	0xBC000003, /* word 681 (0x0AA4) ftMotionCommandSetSlopeContour(3) */
	0x0800000A, /* word 682 (0x0AA8) ftMotionCommandWaitAsync(10) */
	0xCC040000, /* word 683 (0x0AAC) ftMotionCommandSetAfterImage(1, 0) */
	0x0800000B, /* word 684 (0x0AB0) ftMotionCommandWaitAsync(11) */
	0x88000000, /* word 685 (0x0AB4) Subroutine */
	0x02BB0019, /* extern -> 0x64 */
	0x04000003, /* word 687 (0x0ABC) ftMotionCommandWait(3) */
	0x18000000, /* word 688 (0x0AC0) ftMotionCommandClearAttackCollAll() */
	0x04000005, /* word 689 (0x0AC4) ftMotionCommandWait(5) */
	0xCC03FFFF, /* word 690 (0x0AC8) ftMotionCommandSetAfterImage(0, -1) */
	0x00000000, /* word 691 (0x0ACC) ftMotionCommandEnd() */
	0xBC000003, /* word 692 (0x0AD0) ftMotionCommandSetSlopeContour(3) */
	0x50000000, /* word 693 (0x0AD4) ftMotionCommandPlaySmashVoice(0) */
	0x0800000F, /* word 694 (0x0AD8) ftMotionCommandWaitAsync(15) */
	0xCC040000, /* word 695 (0x0ADC) ftMotionCommandSetAfterImage(1, 0) */
	0x08000011, /* word 696 (0x0AE0) ftMotionCommandWaitAsync(17) */
	0xBC000004, /* word 697 (0x0AE4) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 698 (0x0AE8) Subroutine */
	0x02CA0032, /* extern -> 0xC8 */
	0x04000005, /* word 700 (0x0AF0) ftMotionCommandWait(5) */
	0xCC03FFFF, /* word 701 (0x0AF4) ftMotionCommandSetAfterImage(0, -1) */
	0x04000006, /* word 702 (0x0AF8) ftMotionCommandWait(6) */
	0x18000000, /* word 703 (0x0AFC) ftMotionCommandClearAttackCollAll() */
	0x0800002F, /* word 704 (0x0B00) ftMotionCommandWaitAsync(47) */
	0xBC000003, /* word 705 (0x0B04) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 706 (0x0B08) ftMotionCommandEnd() */
	0xBC000003, /* word 707 (0x0B0C) ftMotionCommandSetSlopeContour(3) */
	0x08000005, /* word 708 (0x0B10) ftMotionCommandWaitAsync(5) */
	0xCC040000, /* word 709 (0x0B14) ftMotionCommandSetAfterImage(1, 0) */
	0x08000006, /* word 710 (0x0B18) ftMotionCommandWaitAsync(6) */
	0xBC000004, /* word 711 (0x0B1C) ftMotionCommandSetSlopeContour(4) */
	0x08000008, /* word 712 (0x0B20) ftMotionCommandWaitAsync(8) */
	0x88000000, /* word 713 (0x0B24) Subroutine */
	0x02D5004B, /* extern -> 0x12C */
	0x04000002, /* word 715 (0x0B2C) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 716 (0x0B30) ftMotionCommandSetAfterImage(0, -1) */
	0x0400000F, /* word 717 (0x0B34) ftMotionCommandWait(15) */
	0x18000000, /* word 718 (0x0B38) ftMotionCommandClearAttackCollAll() */
	0x08000020, /* word 719 (0x0B3C) ftMotionCommandWaitAsync(32) */
	0xBC000003, /* word 720 (0x0B40) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 721 (0x0B44) ftMotionCommandEnd() */
	0xBC000003, /* word 722 (0x0B48) ftMotionCommandSetSlopeContour(3) */
	0x08000007, /* word 723 (0x0B4C) ftMotionCommandWaitAsync(7) */
	0x88000000, /* word 724 (0x0B50) Subroutine */
	0x02DC0068, /* extern -> 0x1A0 */
	0x04000004, /* word 726 (0x0B58) ftMotionCommandWait(4) */
	0x18000000, /* word 727 (0x0B5C) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 728 (0x0B60) ftMotionCommandEnd() */
	0xBC000003, /* word 729 (0x0B64) ftMotionCommandSetSlopeContour(3) */
	0x0800000B, /* word 730 (0x0B68) ftMotionCommandWaitAsync(11) */
	0x88000000, /* word 731 (0x0B6C) Subroutine */
	0x02E7007D, /* extern -> 0x1F4 */
	0x04000003, /* word 733 (0x0B74) ftMotionCommandWait(3) */
	0x18000000, /* word 734 (0x0B78) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 735 (0x0B7C) ftMotionCommandEnd() */
	0xC4000007, /* word 736 (0x0B80) ftMotionCommandMakeRumble(0, 7) */
	0xBC000003, /* word 737 (0x0B84) ftMotionCommandSetSlopeContour(3) */
	0x50000000, /* word 738 (0x0B88) ftMotionCommandPlaySmashVoice(0) */
	0xB1300028, /* word 739 (0x0B8C) ftMotionCommandSetColAnim(76, 40) */
	0x08000011, /* word 740 (0x0B90) ftMotionCommandWaitAsync(17) */
	0xBC000004, /* word 741 (0x0B94) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 742 (0x0B98) Subroutine */
	0x02F20092, /* extern -> 0x248 */
	0x04000008, /* word 744 (0x0BA0) ftMotionCommandWait(8) */
	0x18000000, /* word 745 (0x0BA4) ftMotionCommandClearAttackCollAll() */
	0x0800002F, /* word 746 (0x0BA8) ftMotionCommandWaitAsync(47) */
	0xBC000003, /* word 747 (0x0BAC) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 748 (0x0BB0) ftMotionCommandEnd() */
	0xBC000003, /* word 749 (0x0BB4) ftMotionCommandSetSlopeContour(3) */
	0x08000006, /* word 750 (0x0BB8) ftMotionCommandWaitAsync(6) */
	0xBC000004, /* word 751 (0x0BBC) ftMotionCommandSetSlopeContour(4) */
	0x08000008, /* word 752 (0x0BC0) ftMotionCommandWaitAsync(8) */
	0x88000000, /* word 753 (0x0BC4) Subroutine */
	0x02FB00AC, /* extern -> 0x2B0 */
	0x04000011, /* word 755 (0x0BCC) ftMotionCommandWait(17) */
	0x18000000, /* word 756 (0x0BD0) ftMotionCommandClearAttackCollAll() */
	0x08000020, /* word 757 (0x0BD4) ftMotionCommandWaitAsync(32) */
	0xBC000003, /* word 758 (0x0BD8) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 759 (0x0BDC) ftMotionCommandEnd() */
	0xBC000003, /* word 760 (0x0BE0) ftMotionCommandSetSlopeContour(3) */
	0x08000007, /* word 761 (0x0BE4) ftMotionCommandWaitAsync(7) */
	0x88000000, /* word 762 (0x0BE8) Subroutine */
	0x030200C9, /* extern -> 0x324 */
	0x04000004, /* word 764 (0x0BF0) ftMotionCommandWait(4) */
	0x18000000, /* word 765 (0x0BF4) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 766 (0x0BF8) ftMotionCommandEnd() */
	0xBC000003, /* word 767 (0x0BFC) ftMotionCommandSetSlopeContour(3) */
	0x0800000B, /* word 768 (0x0C00) ftMotionCommandWaitAsync(11) */
	0x88000000, /* word 769 (0x0C04) Subroutine */
	0x030C00DE, /* extern -> 0x378 */
	0x04000003, /* word 771 (0x0C0C) ftMotionCommandWait(3) */
	0x18000000, /* word 772 (0x0C10) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 773 (0x0C14) ftMotionCommandEnd() */
	0xBC000003, /* word 774 (0x0C18) ftMotionCommandSetSlopeContour(3) */
	0x08000006, /* word 775 (0x0C1C) ftMotionCommandWaitAsync(6) */
	0xBC000004, /* word 776 (0x0C20) ftMotionCommandSetSlopeContour(4) */
	0x08000011, /* word 777 (0x0C24) ftMotionCommandWaitAsync(17) */
	0xBC000004, /* word 778 (0x0C28) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 779 (0x0C2C) Subroutine */
	0x031400F3, /* extern -> 0x3CC */
	0x0400000C, /* word 781 (0x0C34) ftMotionCommandWait(12) */
	0x18000000, /* word 782 (0x0C38) ftMotionCommandClearAttackCollAll() */
	0x0800002F, /* word 783 (0x0C3C) ftMotionCommandWaitAsync(47) */
	0xBC000003, /* word 784 (0x0C40) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 785 (0x0C44) ftMotionCommandEnd() */
	0x08000008, /* word 786 (0x0C48) ftMotionCommandWaitAsync(8) */
	0x88000000, /* word 787 (0x0C4C) Subroutine */
	0x031E010C, /* extern -> 0x430 */
	0x04000011, /* word 789 (0x0C54) ftMotionCommandWait(17) */
	0x18000000, /* word 790 (0x0C58) ftMotionCommandClearAttackCollAll() */
	0x08000020, /* word 791 (0x0C5C) ftMotionCommandWaitAsync(32) */
	0xBC000003, /* word 792 (0x0C60) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 793 (0x0C64) ftMotionCommandEnd() */
	0xBC000003, /* word 794 (0x0C68) ftMotionCommandSetSlopeContour(3) */
	0xB12C000B, /* word 795 (0x0C6C) ftMotionCommandSetColAnim(75, 11) */
	0x08000007, /* word 796 (0x0C70) ftMotionCommandWaitAsync(7) */
	0x88000000, /* word 797 (0x0C74) Subroutine */
	0x03260125, /* extern -> 0x494 */
	0x04000004, /* word 799 (0x0C7C) ftMotionCommandWait(4) */
	0x18000000, /* word 800 (0x0C80) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 801 (0x0C84) ftMotionCommandEnd() */
	0xBC000003, /* word 802 (0x0C88) ftMotionCommandSetSlopeContour(3) */
	0xB12C000F, /* word 803 (0x0C8C) ftMotionCommandSetColAnim(75, 15) */
	0x0800000B, /* word 804 (0x0C90) ftMotionCommandWaitAsync(11) */
	0x88000000, /* word 805 (0x0C94) Subroutine */
	0x0332013E, /* extern -> 0x4F8 */
	0x0800000C, /* word 807 (0x0C9C) ftMotionCommandWaitAsync(12) */
	0x54000001, /* word 808 (0x0CA0) ftMotionCommandSetFlag0(1) */
	0x04000003, /* word 809 (0x0CA4) ftMotionCommandWait(3) */
	0x18000000, /* word 810 (0x0CA8) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 811 (0x0CAC) ftMotionCommandEnd() */
	0xBC000003, /* word 812 (0x0CB0) ftMotionCommandSetSlopeContour(3) */
	0xB12C001C, /* word 813 (0x0CB4) ftMotionCommandSetColAnim(75, 28) */
	0x50000000, /* word 814 (0x0CB8) ftMotionCommandPlaySmashVoice(0) */
	0x08000011, /* word 815 (0x0CBC) ftMotionCommandWaitAsync(17) */
	0xBC000004, /* word 816 (0x0CC0) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 817 (0x0CC4) Subroutine */
	0x03400157, /* extern -> 0x55C */
	0x08000012, /* word 819 (0x0CCC) ftMotionCommandWaitAsync(18) */
	0x54000002, /* word 820 (0x0CD0) ftMotionCommandSetFlag0(2) */
	0x0400000A, /* word 821 (0x0CD4) ftMotionCommandWait(10) */
	0x18000000, /* word 822 (0x0CD8) ftMotionCommandClearAttackCollAll() */
	0x0800002F, /* word 823 (0x0CDC) ftMotionCommandWaitAsync(47) */
	0xBC000003, /* word 824 (0x0CE0) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 825 (0x0CE4) ftMotionCommandEnd() */
	0xBC000003, /* word 826 (0x0CE8) ftMotionCommandSetSlopeContour(3) */
	0x08000006, /* word 827 (0x0CEC) ftMotionCommandWaitAsync(6) */
	0xBC000004, /* word 828 (0x0CF0) ftMotionCommandSetSlopeContour(4) */
	0xB12C0019, /* word 829 (0x0CF4) ftMotionCommandSetColAnim(75, 25) */
	0x08000008, /* word 830 (0x0CF8) ftMotionCommandWaitAsync(8) */
	0x88000000, /* word 831 (0x0CFC) Subroutine */
	0x03550170, /* extern -> 0x5C0 */
	0x04000011, /* word 833 (0x0D04) ftMotionCommandWait(17) */
	0x18000000, /* word 834 (0x0D08) ftMotionCommandClearAttackCollAll() */
	0x08000020, /* word 835 (0x0D0C) ftMotionCommandWaitAsync(32) */
	0xBC000003, /* word 836 (0x0D10) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 837 (0x0D14) ftMotionCommandEnd() */
	0xBC000003, /* word 838 (0x0D18) ftMotionCommandSetSlopeContour(3) */
	0x0800000E, /* word 839 (0x0D1C) ftMotionCommandWaitAsync(14) */
	0x54000001, /* word 840 (0x0D20) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 841 (0x0D24) ftMotionCommandEnd() */
	0xBC000003, /* word 842 (0x0D28) ftMotionCommandSetSlopeContour(3) */
	0x0800000E, /* word 843 (0x0D2C) ftMotionCommandWaitAsync(14) */
	0x54000001, /* word 844 (0x0D30) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 845 (0x0D34) ftMotionCommandEnd() */
	0xC4000007, /* word 846 (0x0D38) ftMotionCommandMakeRumble(0, 7) */
	0xBC000004, /* word 847 (0x0D3C) ftMotionCommandSetSlopeContour(4) */
	0xA0A00000, /* word 848 (0x0D40) ftMotionCommandSetModelPartID(20, 0) */
	0xA05FFFFF, /* word 849 (0x0D44) ftMotionCommandSetModelPartID(11, -1) */
	0xAC000001, /* word 850 (0x0D48) ftMotionCommandSetTexturePartID(1) */
	0xAC100001, /* word 851 (0x0D4C) ftMotionCommandSetTexturePartID(1048577) */
	0x88000000, /* word 852 (0x0D50) Subroutine */
	0x043D018D, /* extern -> 0x634 */
	0x04000010, /* word 854 (0x0D58) ftMotionCommandWait(16) */
	0x18000000, /* word 855 (0x0D5C) ftMotionCommandClearAttackCollAll() */
	0x90000000, /* word 856 (0x0D60) Goto */
	0x0366034E, /* -> word 846 (0x0D38) */
	0x98007C00, /* word 858 (0x0D68) Effect(0, 31, 0, 0, 0, 120, 200, 200, 200) */
	0x00000000,
	0x007800C8,
	0x00C800C8,
	0x80000003, /* word 862 (0x0D78) ftMotionCommandLoopBegin(3) */
	0x98002800, /* word 863 (0x0D7C) Effect(0, 10, 0, 0, 0, 120, 200, 200, 200) */
	0x00000000,
	0x007800C8,
	0x00C800C8,
	0x04000004, /* word 867 (0x0D8C) ftMotionCommandWait(4) */
	0x84000000, /* word 868 (0x0D90) ftMotionCommandLoopEnd() */
	0x90000000, /* word 869 (0x0D94) Goto */
	0x0371035A, /* -> word 858 (0x0D68) */
	0xAC000001, /* word 871 (0x0D9C) ftMotionCommandSetTexturePartID(1) */
	0xAC100001, /* word 872 (0x0DA0) ftMotionCommandSetTexturePartID(1048577) */
	0x9BF88800, /* word 873 (0x0DA4) Effect(-1, 34, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 877 (0x0DB4) ftMotionCommandSetHitStatusAll(3) */
	0xAC000001, /* word 878 (0x0DB8) ftMotionCommandSetTexturePartID(1) */
	0xAC100001, /* word 879 (0x0DBC) ftMotionCommandSetTexturePartID(1048577) */
	0x90000000, /* word 880 (0x0DC0) Goto */
	0x0373035A, /* -> word 858 (0x0D68) */
	0x90000000, /* word 882 (0x0DC8) Goto */
	0x038C035A, /* -> word 858 (0x0D68) */
	0x00000000, /* word 884 (0x0DD0) ftMotionCommandEnd() */
	0x9BF88000, /* word 885 (0x0DD4) Effect(-1, 32, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x98003400, /* word 889 (0x0DE4) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 893 (0x0DF4) ftMotionCommandEnd() */
	0xBC000003, /* word 894 (0x0DF8) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 895 (0x0DFC) ftMotionCommandEnd() */
	0xBC000003, /* word 896 (0x0E00) ftMotionCommandSetSlopeContour(3) */
	0x44000196, /* word 897 (0x0E04) ftMotionPlayVoice(406) */
	0xAC000001, /* word 898 (0x0E08) ftMotionCommandSetTexturePartID(1) */
	0xAC100001, /* word 899 (0x0E0C) ftMotionCommandSetTexturePartID(1048577) */
	0x80000005, /* word 900 (0x0E10) ftMotionCommandLoopBegin(5) */
	0x9800A000, /* word 901 (0x0E14) Effect(0, 40, 0, 0, 130, 0, 200, 260, 200) */
	0x00000082,
	0x000000C8,
	0x010400C8,
	0x0400000A, /* word 905 (0x0E24) ftMotionCommandWait(10) */
	0x84000000, /* word 906 (0x0E28) ftMotionCommandLoopEnd() */
	0x90000000, /* word 907 (0x0E2C) Goto */
	0x03960380, /* -> word 896 (0x0E00) */
	0x4800019E, /* word 909 (0x0E34) ftMotionPlayInterruptableVoice(414) */
	0xAC000002, /* word 910 (0x0E38) ftMotionCommandSetTexturePartID(2) */
	0xBC000003, /* word 911 (0x0E3C) ftMotionCommandSetSlopeContour(3) */
	0x98016800, /* word 912 (0x0E40) Effect(0, 90, 0, 0, 130, 0, 200, 260, 200) */
	0x00000082,
	0x000000C8,
	0x010400C8,
	0x0400000A, /* word 916 (0x0E50) ftMotionCommandWait(10) */
	0x90000000, /* word 917 (0x0E54) Goto */
	0x03A6038D, /* -> word 909 (0x0E34) */
	0xFFFFFFFF, /* word 919 (0x0E5C) data */
	0x00000006, /* word 920 (0x0E60) data */
	0x00000169, /* word 921 (0x0E64) data */
	0x00000064, /* word 922 (0x0E68) data */
	0x00000000, /* word 923 (0x0E6C) data */
	0x00000000, /* word 924 (0x0E70) data */
	0x00000000, /* word 925 (0x0E74) data */
	0xFFFFFFFF, /* word 926 (0x0E78) data */
	0x00000006, /* word 927 (0x0E7C) data */
	0x00000169, /* word 928 (0x0E80) data */
	0x00000064, /* word 929 (0x0E84) data */
	0x00000000, /* word 930 (0x0E88) data */
	0x00000000, /* word 931 (0x0E8C) data */
	0x00000000, /* word 932 (0x0E90) data */
	0x30000000, /* word 933 (0x0E94) SetThrow */
	0x03DC0397, /* -> word 919 (0x0E5C) */
	0xBC000003, /* word 935 (0x0E9C) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 936 (0x0EA0) ftMotionCommandWaitAsync(4) */
	0xA0A80000, /* word 937 (0x0EA4) ftMotionCommandSetModelPartID(21, 0) */
	0xA09FFFFF, /* word 938 (0x0EA8) ftMotionCommandSetModelPartID(19, -1) */
	0xA0800000, /* word 939 (0x0EAC) ftMotionCommandSetModelPartID(16, 0) */
	0xA0880000, /* word 940 (0x0EB0) ftMotionCommandSetModelPartID(17, 0) */
	0xA0900000, /* word 941 (0x0EB4) ftMotionCommandSetModelPartID(18, 0) */
	0x08000011, /* word 942 (0x0EB8) ftMotionCommandWaitAsync(17) */
	0xC4020009, /* word 943 (0x0EBC) ftMotionCommandMakeRumble(16, 9) */
	0x0C046030, /* word 944 (0x0EC0) MakeAttackColl(0, 0, 35, 1, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0) */
	0x00B40000,
	0x00000000,
	0x5A464003,
	0x00200000,
	0x98004C00, /* word 949 (0x0ED4) Effect(0, 19, 0, 0, 0, -100, 0, 0, 0) */
	0x00000000,
	0xFF9C0000,
	0x00000000,
	0x380000D2, /* word 953 (0x0EE4) ftMotionPlayFGM(210) */
	0x5800000C, /* word 954 (0x0EE8) ftMotionCommandSetFlag1(12) */
	0x5C000005, /* word 955 (0x0EEC) ftMotionCommandSetFlag2(5) */
	0x80000004, /* word 956 (0x0EF0) ftMotionCommandLoopBegin(4) */
	0x99187C00, /* word 957 (0x0EF4) Effect(35, 31, 0, 0, 0, 0, 90, 90, 90) */
	0x00000000,
	0x0000005A,
	0x005A005A,
	0x04000003, /* word 961 (0x0F04) ftMotionCommandWait(3) */
	0x84000000, /* word 962 (0x0F08) ftMotionCommandLoopEnd() */
	0x18000000, /* word 963 (0x0F0C) ftMotionCommandClearAttackCollAll() */
	0x0800003C, /* word 964 (0x0F10) ftMotionCommandWaitAsync(60) */
	0x00000000, /* word 965 (0x0F14) ftMotionCommandEnd() */
	0x38000013, /* word 966 (0x0F18) ftMotionPlayFGM(19) */
	0xA0A80000, /* word 967 (0x0F1C) ftMotionCommandSetModelPartID(21, 0) */
	0xA09FFFFF, /* word 968 (0x0F20) ftMotionCommandSetModelPartID(19, -1) */
	0xA0800000, /* word 969 (0x0F24) ftMotionCommandSetModelPartID(16, 0) */
	0xA0880000, /* word 970 (0x0F28) ftMotionCommandSetModelPartID(17, 0) */
	0xA0900000, /* word 971 (0x0F2C) ftMotionCommandSetModelPartID(18, 0) */
	0x00000000, /* word 972 (0x0F30) ftMotionCommandEnd() */
	0x00000034, /* word 973 (0x0F34) data */
	0x0000000E, /* word 974 (0x0F38) data */
	0x0000002D, /* word 975 (0x0F3C) data */
	0x00000046, /* word 976 (0x0F40) data */
	0x00000000, /* word 977 (0x0F44) data */
	0x00000050, /* word 978 (0x0F48) data */
	0x00000000, /* word 979 (0x0F4C) data */
	0xFFFFFFFF, /* word 980 (0x0F50) data */
	0x00000006, /* word 981 (0x0F54) data */
	0x00000169, /* word 982 (0x0F58) data */
	0x00000064, /* word 983 (0x0F5C) data */
	0x00000000, /* word 984 (0x0F60) data */
	0x00000000, /* word 985 (0x0F64) data */
	0x00000000, /* word 986 (0x0F68) data */
	0x30000000, /* word 987 (0x0F6C) SetThrow */
	0x041103CD, /* -> word 973 (0x0F34) */
	0xA0A80000, /* word 989 (0x0F74) ftMotionCommandSetModelPartID(21, 0) */
	0xA09FFFFF, /* word 990 (0x0F78) ftMotionCommandSetModelPartID(19, -1) */
	0x08000004, /* word 991 (0x0F7C) ftMotionCommandWaitAsync(4) */
	0x74000002, /* word 992 (0x0F80) ftMotionCommandSetHitStatusAll(2) */
	0x0800000C, /* word 993 (0x0F84) ftMotionCommandWaitAsync(12) */
	0x0C040100, /* word 994 (0x0F88) MakeAttackColl(0, 0, 32, 8, 0, 0, 240, 130, 0, 0, 361, 80, 0, 3, 0, 1, 1, 20) */
	0x00F00082,
	0x00000000,
	0x5A450003,
	0x00220A00,
	0x0C840100, /* word 999 (0x0F9C) MakeAttackColl(1, 0, 32, 8, 0, 0, 200, 0, 0, 0, 361, 80, 0, 3, 0, 1, 1, 20) */
	0x00C80000,
	0x00000000,
	0x5A450003,
	0x00220A00,
	0x50000000, /* word 1004 (0x0FB0) ftMotionCommandPlaySmashVoice(0) */
	0x3800001F, /* word 1005 (0x0FB4) ftMotionPlayFGM(31) */
	0x98787C00, /* word 1006 (0x0FB8) Effect(15, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x98004C00, /* word 1010 (0x0FC8) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x9BF88400, /* word 1014 (0x0FD8) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x04000008, /* word 1018 (0x0FE8) ftMotionCommandWait(8) */
	0x18000000, /* word 1019 (0x0FEC) ftMotionCommandClearAttackCollAll() */
	0x5C000001, /* word 1020 (0x0FF0) ftMotionCommandSetFlag2(1) */
	0x74000001, /* word 1021 (0x0FF4) ftMotionCommandSetHitStatusAll(1) */
	0x0800001E, /* word 1022 (0x0FF8) ftMotionCommandWaitAsync(30) */
	0xA0AFFFFF, /* word 1023 (0x0FFC) ftMotionCommandSetModelPartID(21, -1) */
	0xA0980000, /* word 1024 (0x1000) ftMotionCommandSetModelPartID(19, 0) */
	0x00000000, /* word 1025 (0x1004) ftMotionCommandEnd() */
	0x00000034, /* word 1026 (0x1008) data */
	0x00000010, /* word 1027 (0x100C) data */
	0x0000002D, /* word 1028 (0x1010) data */
	0x00000046, /* word 1029 (0x1014) data */
	0x00000000, /* word 1030 (0x1018) data */
	0x00000046, /* word 1031 (0x101C) data */
	0x00000000, /* word 1032 (0x1020) data */
	0xFFFFFFFF, /* word 1033 (0x1024) data */
	0x00000008, /* word 1034 (0x1028) data */
	0x00000169, /* word 1035 (0x102C) data */
	0x00000064, /* word 1036 (0x1030) data */
	0x00000000, /* word 1037 (0x1034) data */
	0x00000000, /* word 1038 (0x1038) data */
	0x00000000, /* word 1039 (0x103C) data */
	0x30000000, /* word 1040 (0x1040) SetThrow */
	0x04460402, /* -> word 1026 (0x1008) */
	0xA0A80000, /* word 1042 (0x1048) ftMotionCommandSetModelPartID(21, 0) */
	0xA09FFFFF, /* word 1043 (0x104C) ftMotionCommandSetModelPartID(19, -1) */
	0x38000012, /* word 1044 (0x1050) ftMotionPlayFGM(18) */
	0x08000004, /* word 1045 (0x1054) ftMotionCommandWaitAsync(4) */
	0x74000002, /* word 1046 (0x1058) ftMotionCommandSetHitStatusAll(2) */
	0x0800000C, /* word 1047 (0x105C) ftMotionCommandWaitAsync(12) */
	0x0C036100, /* word 1048 (0x1060) MakeAttackColl(0, 0, 27, 8, 0, 0, 240, 130, 0, 0, 361, 80, 0, 3, 0, 1, 1, 20) */
	0x00F00082,
	0x00000000,
	0x5A450003,
	0x00220A00,
	0x0C836100, /* word 1053 (0x1074) MakeAttackColl(1, 0, 27, 8, 0, 0, 200, 0, 0, 0, 361, 80, 0, 3, 0, 1, 1, 20) */
	0x00C80000,
	0x00000000,
	0x5A450003,
	0x00220A00,
	0x50000000, /* word 1058 (0x1088) ftMotionCommandPlaySmashVoice(0) */
	0x3800001F, /* word 1059 (0x108C) ftMotionPlayFGM(31) */
	0x99187C00, /* word 1060 (0x1090) Effect(35, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x98004C00, /* word 1064 (0x10A0) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x98003400, /* word 1068 (0x10B0) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x9BF88400, /* word 1072 (0x10C0) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x04000008, /* word 1076 (0x10D0) ftMotionCommandWait(8) */
	0x18000000, /* word 1077 (0x10D4) ftMotionCommandClearAttackCollAll() */
	0x5C000002, /* word 1078 (0x10D8) ftMotionCommandSetFlag2(2) */
	0x74000001, /* word 1079 (0x10DC) ftMotionCommandSetHitStatusAll(1) */
	0x0800001E, /* word 1080 (0x10E0) ftMotionCommandWaitAsync(30) */
	0xA0AFFFFF, /* word 1081 (0x10E4) ftMotionCommandSetModelPartID(21, -1) */
	0xA0980000, /* word 1082 (0x10E8) ftMotionCommandSetModelPartID(19, 0) */
	0x00000000, /* word 1083 (0x10EC) ftMotionCommandEnd() */
	0x88000000, /* word 1084 (0x10F0) Subroutine */
	0x044001AB, /* extern -> 0x6AC */
	0x00000000, /* word 1086 (0x10F8) ftMotionCommandEnd() */
	0x88000000, /* word 1087 (0x10FC) Subroutine */
	0x044301B1, /* extern -> 0x6C4 */
	0x00000000, /* word 1089 (0x1104) ftMotionCommandEnd() */
	0x88000000, /* word 1090 (0x1108) Subroutine */
	0x044801B3, /* extern -> 0x6CC */
	0x00000000, /* word 1092 (0x1110) ftMotionCommandEnd() */
	0x88000000, /* word 1093 (0x1114) Subroutine */
	0x044B0073, /* -> word 115 (0x01CC) */
	0x88000000, /* word 1095 (0x111C) Subroutine */
	0x044D01BC, /* extern -> 0x6F0 */
	0x00000000, /* word 1097 (0x1124) ftMotionCommandEnd() */
	0x88000000, /* word 1098 (0x1128) Subroutine */
	0x050E0073, /* -> word 115 (0x01CC) */
	0x88000000, /* word 1100 (0x1130) Subroutine */
	0xFFFF01C3, /* extern -> 0x70C */
	0x00000000, /* word 1102 (0x1138) ftMotionCommandEnd() */
	0xBC000003, /* word 1103 (0x113C) ftMotionCommandSetSlopeContour(3) */
	0x0800000C, /* word 1104 (0x1140) ftMotionCommandWaitAsync(12) */
	0xC4000006, /* word 1105 (0x1144) ftMotionCommandMakeRumble(0, 6) */
	0x98002C00, /* word 1106 (0x1148) Effect(0, 11, 0, 0, 0, 180, 0, 0, 0) */
	0x00000000,
	0x00B40000,
	0x00000000,
	0x0800001E, /* word 1110 (0x1158) ftMotionCommandWaitAsync(30) */
	0x98587C00, /* word 1111 (0x115C) Effect(11, 31, 0, 0, 0, 180, 90, 90, 90) */
	0x00000000,
	0x00B4005A,
	0x005A005A,
	0x44000191, /* word 1115 (0x116C) ftMotionPlayVoice(401) */
	0x00000000, /* word 1116 (0x1170) ftMotionCommandEnd() */
	0xBC000003, /* word 1117 (0x1174) ftMotionCommandSetSlopeContour(3) */
	0x08000005, /* word 1118 (0x1178) ftMotionCommandWaitAsync(5) */
	0xCC000000, /* word 1119 (0x117C) ftMotionCommandSetAfterImage(0, 0) */
	0x08000006, /* word 1120 (0x1180) ftMotionCommandWaitAsync(6) */
	0x0C0160B3, /* word 1121 (0x1184) MakeAttackColl(0, 0, 11, 5, 1, 3, 220, 0, 0, 250, 361, 50, 0, 3, 0, 0, 5, 8) */
	0x00DC0000,
	0x000000FA,
	0x5A432003,
	0x000A0400,
	0x0C8140B3, /* word 1126 (0x1198) MakeAttackColl(1, 0, 10, 5, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 5, 8) */
	0x00A00000,
	0x00000000,
	0x5A432003,
	0x000A0400,
	0x4C000104, /* word 1131 (0x11AC) ftMotionCommandPlayFGMStoreInfo(260) */
	0x04000004, /* word 1132 (0x11B0) ftMotionCommandWait(4) */
	0x18000000, /* word 1133 (0x11B4) ftMotionCommandClearAttackCollAll() */
	0x98587C00, /* word 1134 (0x11B8) Effect(11, 31, 0, 0, 0, 180, 90, 90, 90) */
	0x00000000,
	0x00B4005A,
	0x005A005A,
	0x0800000A, /* word 1138 (0x11C8) ftMotionCommandWaitAsync(10) */
	0x58000001, /* word 1139 (0x11CC) ftMotionCommandSetFlag1(1) */
	0x0800000C, /* word 1140 (0x11D0) ftMotionCommandWaitAsync(12) */
	0xCC03FFFF, /* word 1141 (0x11D4) ftMotionCommandSetAfterImage(0, -1) */
	0x00000000, /* word 1142 (0x11D8) ftMotionCommandEnd() */
	0xBC000003, /* word 1143 (0x11DC) ftMotionCommandSetSlopeContour(3) */
	0x08000005, /* word 1144 (0x11E0) ftMotionCommandWaitAsync(5) */
	0xCC000000, /* word 1145 (0x11E4) ftMotionCommandSetAfterImage(0, 0) */
	0x08000006, /* word 1146 (0x11E8) ftMotionCommandWaitAsync(6) */
	0x0C016073, /* word 1147 (0x11EC) MakeAttackColl(0, 0, 11, 3, 1, 3, 220, 0, 0, 250, 361, 50, 0, 3, 0, 0, 5, 8) */
	0x00DC0000,
	0x000000FA,
	0x5A432003,
	0x000A0400,
	0x0C814073, /* word 1152 (0x1200) MakeAttackColl(1, 0, 10, 3, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 5, 8) */
	0x00A00000,
	0x00000000,
	0x5A432003,
	0x000A0400,
	0x4C000104, /* word 1157 (0x1214) ftMotionCommandPlayFGMStoreInfo(260) */
	0x04000002, /* word 1158 (0x1218) ftMotionCommandWait(2) */
	0x18000000, /* word 1159 (0x121C) ftMotionCommandClearAttackCollAll() */
	0x98587C00, /* word 1160 (0x1220) Effect(11, 31, 0, 0, 0, 180, 90, 90, 90) */
	0x00000000,
	0x00B4005A,
	0x005A005A,
	0x04000002, /* word 1164 (0x1230) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 1165 (0x1234) ftMotionCommandSetAfterImage(0, -1) */
	0x0800000E, /* word 1166 (0x1238) ftMotionCommandWaitAsync(14) */
	0x58000001, /* word 1167 (0x123C) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 1168 (0x1240) ftMotionCommandEnd() */
	0xBC000003, /* word 1169 (0x1244) ftMotionCommandSetSlopeContour(3) */
	0x08000005, /* word 1170 (0x1248) ftMotionCommandWaitAsync(5) */
	0xCC000000, /* word 1171 (0x124C) ftMotionCommandSetAfterImage(0, 0) */
	0x08000006, /* word 1172 (0x1250) ftMotionCommandWaitAsync(6) */
	0x0C016093, /* word 1173 (0x1254) MakeAttackColl(0, 0, 11, 4, 1, 3, 220, 0, 0, 250, 361, 100, 0, 3, 0, 1, 5, 6) */
	0x00DC0000,
	0x000000FA,
	0x5A464003,
	0x002A0300,
	0x0C814093, /* word 1178 (0x1268) MakeAttackColl(1, 0, 10, 4, 1, 3, 160, 0, 0, 0, 361, 100, 0, 3, 0, 1, 5, 6) */
	0x00A00000,
	0x00000000,
	0x5A464003,
	0x002A0300,
	0x4C000102, /* word 1183 (0x127C) ftMotionCommandPlayFGMStoreInfo(258) */
	0x4C000199, /* word 1184 (0x1280) ftMotionCommandPlayFGMStoreInfo(409) */
	0x04000006, /* word 1185 (0x1284) ftMotionCommandWait(6) */
	0x18000000, /* word 1186 (0x1288) ftMotionCommandClearAttackCollAll() */
	0x98587C00, /* word 1187 (0x128C) Effect(11, 31, 0, 0, 0, 180, 90, 90, 90) */
	0x00000000,
	0x00B4005A,
	0x005A005A,
	0x04000002, /* word 1191 (0x129C) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 1192 (0x12A0) ftMotionCommandSetAfterImage(0, -1) */
	0x00000000, /* word 1193 (0x12A4) ftMotionCommandEnd() */
	0xBC000003, /* word 1194 (0x12A8) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 1195 (0x12AC) ftMotionCommandEnd() */
	0xBC000003, /* word 1196 (0x12B0) ftMotionCommandSetSlopeContour(3) */
	0x08000002, /* word 1197 (0x12B4) ftMotionCommandWaitAsync(2) */
	0xCC000000, /* word 1198 (0x12B8) ftMotionCommandSetAfterImage(0, 0) */
	0x08000003, /* word 1199 (0x12BC) ftMotionCommandWaitAsync(3) */
	0x0C016033, /* word 1200 (0x12C0) MakeAttackColl(0, 0, 11, 1, 1, 3, 220, 0, 0, 270, 361, 50, 0, 3, 0, 1, 5, 8) */
	0x00DC0000,
	0x0000010E,
	0x5A432003,
	0x002A0400,
	0x0C814033, /* word 1205 (0x12D4) MakeAttackColl(1, 0, 10, 1, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 1, 5, 8) */
	0x00A00000,
	0x00000000,
	0x5A432003,
	0x002A0400,
	0x4C000104, /* word 1210 (0x12E8) ftMotionCommandPlayFGMStoreInfo(260) */
	0x04000002, /* word 1211 (0x12EC) ftMotionCommandWait(2) */
	0x18000000, /* word 1212 (0x12F0) ftMotionCommandClearAttackCollAll() */
	0x58000001, /* word 1213 (0x12F4) ftMotionCommandSetFlag1(1) */
	0x04000002, /* word 1214 (0x12F8) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 1215 (0x12FC) ftMotionCommandSetAfterImage(0, -1) */
	0x08000009, /* word 1216 (0x1300) ftMotionCommandWaitAsync(9) */
	0xCC000000, /* word 1217 (0x1304) ftMotionCommandSetAfterImage(0, 0) */
	0x0800000A, /* word 1218 (0x1308) ftMotionCommandWaitAsync(10) */
	0x0C016033, /* word 1219 (0x130C) MakeAttackColl(0, 0, 11, 1, 1, 3, 220, 0, 0, 270, 361, 50, 0, 3, 0, 1, 5, 8) */
	0x00DC0000,
	0x0000010E,
	0x5A432003,
	0x002A0400,
	0x0C814033, /* word 1224 (0x1320) MakeAttackColl(1, 0, 10, 1, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 1, 5, 8) */
	0x00A00000,
	0x00000000,
	0x5A432003,
	0x002A0400,
	0x4C000104, /* word 1229 (0x1334) ftMotionCommandPlayFGMStoreInfo(260) */
	0x04000002, /* word 1230 (0x1338) ftMotionCommandWait(2) */
	0x18000000, /* word 1231 (0x133C) ftMotionCommandClearAttackCollAll() */
	0x58000001, /* word 1232 (0x1340) ftMotionCommandSetFlag1(1) */
	0x04000002, /* word 1233 (0x1344) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 1234 (0x1348) ftMotionCommandSetAfterImage(0, -1) */
	0x08000010, /* word 1235 (0x134C) ftMotionCommandWaitAsync(16) */
	0xCC000000, /* word 1236 (0x1350) ftMotionCommandSetAfterImage(0, 0) */
	0x08000011, /* word 1237 (0x1354) ftMotionCommandWaitAsync(17) */
	0x0C016033, /* word 1238 (0x1358) MakeAttackColl(0, 0, 11, 1, 1, 3, 220, 0, 0, 270, 361, 50, 0, 3, 0, 1, 5, 8) */
	0x00DC0000,
	0x0000010E,
	0x5A432003,
	0x002A0400,
	0x0C814033, /* word 1243 (0x136C) MakeAttackColl(1, 0, 10, 1, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 1, 5, 8) */
	0x00A00000,
	0x00000000,
	0x5A432003,
	0x002A0400,
	0x4C000104, /* word 1248 (0x1380) ftMotionCommandPlayFGMStoreInfo(260) */
	0x04000002, /* word 1249 (0x1384) ftMotionCommandWait(2) */
	0x18000000, /* word 1250 (0x1388) ftMotionCommandClearAttackCollAll() */
	0x58000001, /* word 1251 (0x138C) ftMotionCommandSetFlag1(1) */
	0x04000002, /* word 1252 (0x1390) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 1253 (0x1394) ftMotionCommandSetAfterImage(0, -1) */
	0x08000017, /* word 1254 (0x1398) ftMotionCommandWaitAsync(23) */
	0xCC000000, /* word 1255 (0x139C) ftMotionCommandSetAfterImage(0, 0) */
	0x08000018, /* word 1256 (0x13A0) ftMotionCommandWaitAsync(24) */
	0x0C016033, /* word 1257 (0x13A4) MakeAttackColl(0, 0, 11, 1, 1, 3, 220, 0, 0, 270, 361, 50, 0, 3, 0, 1, 5, 8) */
	0x00DC0000,
	0x0000010E,
	0x5A432003,
	0x002A0400,
	0x0C814033, /* word 1262 (0x13B8) MakeAttackColl(1, 0, 10, 1, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 1, 5, 8) */
	0x00A00000,
	0x00000000,
	0x5A432003,
	0x002A0400,
	0x4C000104, /* word 1267 (0x13CC) ftMotionCommandPlayFGMStoreInfo(260) */
	0x04000002, /* word 1268 (0x13D0) ftMotionCommandWait(2) */
	0x18000000, /* word 1269 (0x13D4) ftMotionCommandClearAttackCollAll() */
	0x58000001, /* word 1270 (0x13D8) ftMotionCommandSetFlag1(1) */
	0x04000002, /* word 1271 (0x13DC) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 1272 (0x13E0) ftMotionCommandSetAfterImage(0, -1) */
	0x0800001E, /* word 1273 (0x13E4) ftMotionCommandWaitAsync(30) */
	0xCC000000, /* word 1274 (0x13E8) ftMotionCommandSetAfterImage(0, 0) */
	0x0800001F, /* word 1275 (0x13EC) ftMotionCommandWaitAsync(31) */
	0x0C016033, /* word 1276 (0x13F0) MakeAttackColl(0, 0, 11, 1, 1, 3, 220, 0, 0, 270, 361, 50, 0, 3, 0, 1, 5, 8) */
	0x00DC0000,
	0x0000010E,
	0x5A432003,
	0x002A0400,
	0x0C814033, /* word 1281 (0x1404) MakeAttackColl(1, 0, 10, 1, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 1, 5, 8) */
	0x00A00000,
	0x00000000,
	0x5A432003,
	0x002A0400,
	0x4C000104, /* word 1286 (0x1418) ftMotionCommandPlayFGMStoreInfo(260) */
	0x04000002, /* word 1287 (0x141C) ftMotionCommandWait(2) */
	0x18000000, /* word 1288 (0x1420) ftMotionCommandClearAttackCollAll() */
	0x94000000, /* word 1289 (0x1424) ftMotionCommandPauseScript() */
	0x58000001, /* word 1290 (0x1428) ftMotionCommandSetFlag1(1) */
	0x04000002, /* word 1291 (0x142C) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 1292 (0x1430) ftMotionCommandSetAfterImage(0, -1) */
	0x90000000, /* word 1293 (0x1434) Goto */
	0x073C04AC, /* -> word 1196 (0x12B0) */
	0x00000000, /* word 1295 (0x143C) ftMotionCommandEnd() */
	0xBC000003, /* word 1296 (0x1440) ftMotionCommandSetSlopeContour(3) */
	0x98587C00, /* word 1297 (0x1444) Effect(11, 31, 0, 60, 0, 0, 0, 0, 0) */
	0x003C0000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 1301 (0x1454) ftMotionCommandEnd() */
	0xBC000003, /* word 1302 (0x1458) ftMotionCommandSetSlopeContour(3) */
	0x98587C00, /* word 1303 (0x145C) Effect(11, 31, 0, 0, 0, 180, 90, 90, 90) */
	0x00000000,
	0x00B4005A,
	0x005A005A,
	0x08000006, /* word 1307 (0x146C) ftMotionCommandWaitAsync(6) */
	0xBC000004, /* word 1308 (0x1470) ftMotionCommandSetSlopeContour(4) */
	0x08000007, /* word 1309 (0x1474) ftMotionCommandWaitAsync(7) */
	0xCC000000, /* word 1310 (0x1478) ftMotionCommandSetAfterImage(0, 0) */
	0x08000008, /* word 1311 (0x147C) ftMotionCommandWaitAsync(8) */
	0x0C0161D3, /* word 1312 (0x1480) MakeAttackColl(0, 0, 11, 14, 1, 3, 220, 0, 0, 190, 361, 100, 0, 3, 0, 2, 5, 0) */
	0x00DC0000,
	0x000000BE,
	0x5A464003,
	0x004A0000,
	0x0C814213, /* word 1317 (0x1494) MakeAttackColl(1, 0, 10, 16, 1, 3, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 10) */
	0x00B40000,
	0x00000000,
	0x5A464003,
	0x004A0500,
	0x98004C00, /* word 1322 (0x14A8) Effect(0, 19, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4C000102, /* word 1326 (0x14B8) ftMotionCommandPlayFGMStoreInfo(258) */
	0x04000004, /* word 1327 (0x14BC) ftMotionCommandWait(4) */
	0x0C016153, /* word 1328 (0x14C0) MakeAttackColl(0, 0, 11, 10, 1, 3, 220, 0, 0, 190, 361, 100, 0, 3, 0, 2, 5, 0) */
	0x00DC0000,
	0x000000BE,
	0x5A464003,
	0x004A0000,
	0x0C814173, /* word 1333 (0x14D4) MakeAttackColl(1, 0, 10, 11, 1, 3, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 5) */
	0x00B40000,
	0x00000000,
	0x5A464003,
	0x004A0280,
	0x04000016, /* word 1338 (0x14E8) ftMotionCommandWait(22) */
	0x18000000, /* word 1339 (0x14EC) ftMotionCommandClearAttackCollAll() */
	0xBC000003, /* word 1340 (0x14F0) ftMotionCommandSetSlopeContour(3) */
	0x04000002, /* word 1341 (0x14F4) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 1342 (0x14F8) ftMotionCommandSetAfterImage(0, -1) */
	0x00000000, /* word 1343 (0x14FC) ftMotionCommandEnd() */
	0xBC000003, /* word 1344 (0x1500) ftMotionCommandSetSlopeContour(3) */
	0x0800000E, /* word 1345 (0x1504) ftMotionCommandWaitAsync(14) */
	0xCC000000, /* word 1346 (0x1508) ftMotionCommandSetAfterImage(0, 0) */
	0x0800000F, /* word 1347 (0x150C) ftMotionCommandWaitAsync(15) */
	0x44000199, /* word 1348 (0x1510) ftMotionPlayVoice(409) */
	0x0C016253, /* word 1349 (0x1514) MakeAttackColl(0, 0, 11, 18, 1, 3, 260, 0, 0, 280, 361, 100, 0, 3, 0, 2, 5, 0) */
	0x01040000,
	0x00000118,
	0x5A464003,
	0x004A0000,
	0x0C814233, /* word 1354 (0x1528) MakeAttackColl(1, 0, 10, 17, 1, 3, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 0) */
	0x00B40000,
	0x00000000,
	0x5A464003,
	0x004A0000,
	0x98002C00, /* word 1359 (0x153C) Effect(0, 11, 0, 0, 0, -100, 0, 80, 100) */
	0x00000000,
	0xFF9C0000,
	0x00500064,
	0x4C000102, /* word 1363 (0x154C) ftMotionCommandPlayFGMStoreInfo(258) */
	0x04000002, /* word 1364 (0x1550) ftMotionCommandWait(2) */
	0x98007C00, /* word 1365 (0x1554) Effect(0, 31, 0, 0, 300, 400, 0, 0, 0) */
	0x0000012C,
	0x01900000,
	0x00000000,
	0x04000004, /* word 1369 (0x1564) ftMotionCommandWait(4) */
	0x18000000, /* word 1370 (0x1568) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 1371 (0x156C) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 1372 (0x1570) ftMotionCommandSetAfterImage(0, -1) */
	0x00000000, /* word 1373 (0x1574) ftMotionCommandEnd() */
	0xBC000003, /* word 1374 (0x1578) ftMotionCommandSetSlopeContour(3) */
	0x08000007, /* word 1375 (0x157C) ftMotionCommandWaitAsync(7) */
	0xCC000000, /* word 1376 (0x1580) ftMotionCommandSetAfterImage(0, 0) */
	0x08000008, /* word 1377 (0x1584) ftMotionCommandWaitAsync(8) */
	0x0C016153, /* word 1378 (0x1588) MakeAttackColl(0, 0, 11, 10, 1, 3, 200, 0, 0, 240, 79, 100, 0, 3, 0, 2, 5, 20) */
	0x00C80000,
	0x000000F0,
	0x13C64003,
	0x004A0A00,
	0x0C814153, /* word 1383 (0x159C) MakeAttackColl(1, 0, 10, 10, 1, 3, 160, 0, 0, 0, 79, 100, 0, 3, 0, 2, 5, 20) */
	0x00A00000,
	0x00000000,
	0x13C64003,
	0x004A0A00,
	0x4C000103, /* word 1388 (0x15B0) ftMotionCommandPlayFGMStoreInfo(259) */
	0x04000009, /* word 1389 (0x15B4) ftMotionCommandWait(9) */
	0x98007C00, /* word 1390 (0x15B8) Effect(0, 31, 0, 0, 60, -360, 0, 0, 0) */
	0x0000003C,
	0xFE980000,
	0x00000000,
	0x18000000, /* word 1394 (0x15C8) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 1395 (0x15CC) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 1396 (0x15D0) ftMotionCommandSetAfterImage(0, -1) */
	0x00000000, /* word 1397 (0x15D4) ftMotionCommandEnd() */
	0xBC000003, /* word 1398 (0x15D8) ftMotionCommandSetSlopeContour(3) */
	0x08000009, /* word 1399 (0x15DC) ftMotionCommandWaitAsync(9) */
	0x98587C00, /* word 1400 (0x15E0) Effect(11, 31, 0, 0, 0, 180, 0, 0, 0) */
	0x00000000,
	0x00B40000,
	0x00000000,
	0xBC000004, /* word 1404 (0x15F0) ftMotionCommandSetSlopeContour(4) */
	0x0800000B, /* word 1405 (0x15F4) ftMotionCommandWaitAsync(11) */
	0xCC000000, /* word 1406 (0x15F8) ftMotionCommandSetAfterImage(0, 0) */
	0x0800000C, /* word 1407 (0x15FC) ftMotionCommandWaitAsync(12) */
	0x0C016193, /* word 1408 (0x1600) MakeAttackColl(0, 0, 11, 12, 1, 3, 240, 0, 0, 250, 80, 85, 0, 3, 0, 1, 5, 30) */
	0x00F00000,
	0x000000FA,
	0x14055003,
	0x002A0F00,
	0x0C814193, /* word 1413 (0x1614) MakeAttackColl(1, 0, 10, 12, 1, 3, 180, 0, 0, 0, 80, 85, 0, 3, 0, 1, 5, 30) */
	0x00B40000,
	0x00000000,
	0x14055003,
	0x002A0F00,
	0x4C000103, /* word 1418 (0x1628) ftMotionCommandPlayFGMStoreInfo(259) */
	0x04000008, /* word 1419 (0x162C) ftMotionCommandWait(8) */
	0x18000000, /* word 1420 (0x1630) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 1421 (0x1634) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 1422 (0x1638) ftMotionCommandSetAfterImage(0, -1) */
	0x04000006, /* word 1423 (0x163C) ftMotionCommandWait(6) */
	0xBC000003, /* word 1424 (0x1640) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 1425 (0x1644) ftMotionCommandEnd() */
	0x50000000, /* word 1426 (0x1648) ftMotionCommandPlaySmashVoice(0) */
	0xBC000003, /* word 1427 (0x164C) ftMotionCommandSetSlopeContour(3) */
	0x08000005, /* word 1428 (0x1650) ftMotionCommandWaitAsync(5) */
	0x98587C00, /* word 1429 (0x1654) Effect(11, 31, 0, 0, 0, 180, 0, 0, 0) */
	0x00000000,
	0x00B40000,
	0x00000000,
	0x0800000F, /* word 1433 (0x1664) ftMotionCommandWaitAsync(15) */
	0xCC000000, /* word 1434 (0x1668) ftMotionCommandSetAfterImage(0, 0) */
	0x08000010, /* word 1435 (0x166C) ftMotionCommandWaitAsync(16) */
	0x0C016293, /* word 1436 (0x1670) MakeAttackColl(0, 0, 11, 20, 1, 3, 280, 0, 0, 270, 50, 100, 0, 3, 0, 1, 5, 30) */
	0x01180000,
	0x0000010E,
	0x0C864003,
	0x002A0F00,
	0x0C816293, /* word 1441 (0x1684) MakeAttackColl(1, 0, 11, 20, 1, 3, 280, 0, 0, 130, 50, 100, 0, 3, 0, 1, 5, 30) */
	0x01180000,
	0x00000082,
	0x0C864003,
	0x002A0F00,
	0x0D014293, /* word 1446 (0x1698) MakeAttackColl(2, 0, 10, 20, 1, 3, 200, 0, 0, 0, 50, 100, 0, 3, 0, 1, 5, 30) */
	0x00C80000,
	0x00000000,
	0x0C864003,
	0x002A0F00,
	0x4C000102, /* word 1451 (0x16AC) ftMotionCommandPlayFGMStoreInfo(258) */
	0x08000011, /* word 1452 (0x16B0) ftMotionCommandWaitAsync(17) */
	0xBC000004, /* word 1453 (0x16B4) ftMotionCommandSetSlopeContour(4) */
	0x04000003, /* word 1454 (0x16B8) ftMotionCommandWait(3) */
	0x98004C00, /* word 1455 (0x16BC) Effect(0, 19, 0, 0, 0, -100, 0, 0, 0) */
	0x00000000,
	0xFF9C0000,
	0x00000000,
	0x0C016193, /* word 1459 (0x16CC) MakeAttackColl(0, 0, 11, 12, 1, 3, 240, 0, 0, 270, 361, 100, 0, 3, 0, 1, 5, 20) */
	0x00F00000,
	0x0000010E,
	0x5A464003,
	0x002A0A00,
	0x0C816193, /* word 1464 (0x16E0) MakeAttackColl(1, 0, 11, 12, 1, 3, 240, 0, 0, 130, 361, 100, 0, 3, 0, 1, 5, 20) */
	0x00F00000,
	0x00000082,
	0x5A464003,
	0x002A0A00,
	0x0D014193, /* word 1469 (0x16F4) MakeAttackColl(2, 0, 10, 12, 1, 3, 180, 0, 0, 0, 361, 100, 0, 3, 0, 1, 5, 20) */
	0x00B40000,
	0x00000000,
	0x5A464003,
	0x002A0A00,
	0x04000006, /* word 1474 (0x1708) ftMotionCommandWait(6) */
	0x18000000, /* word 1475 (0x170C) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 1476 (0x1710) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 1477 (0x1714) ftMotionCommandSetAfterImage(0, -1) */
	0x08000025, /* word 1478 (0x1718) ftMotionCommandWaitAsync(37) */
	0xBC000003, /* word 1479 (0x171C) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 1480 (0x1720) ftMotionCommandEnd() */
	0xBC000003, /* word 1481 (0x1724) ftMotionCommandSetSlopeContour(3) */
	0x0800000A, /* word 1482 (0x1728) ftMotionCommandWaitAsync(10) */
	0x98587C00, /* word 1483 (0x172C) Effect(11, 31, 0, 0, 0, 180, 0, 0, 0) */
	0x00000000,
	0x00B40000,
	0x00000000,
	0xCC000000, /* word 1487 (0x173C) ftMotionCommandSetAfterImage(0, 0) */
	0x0800000B, /* word 1488 (0x1740) ftMotionCommandWaitAsync(11) */
	0x44000191, /* word 1489 (0x1744) ftMotionPlayVoice(401) */
	0x4C000102, /* word 1490 (0x1748) ftMotionCommandPlayFGMStoreInfo(258) */
	0x98003400, /* word 1491 (0x174C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x0C0160F3, /* word 1495 (0x175C) MakeAttackColl(0, 0, 11, 7, 1, 3, 240, 0, 0, 180, 120, 100, 80, 3, 0, 0, 5, 0) */
	0x00F00000,
	0x000000B4,
	0x1E064143,
	0x000A0000,
	0x0C8140F3, /* word 1500 (0x1770) MakeAttackColl(1, 0, 10, 7, 1, 3, 240, 0, 0, 0, 100, 100, 80, 3, 0, 0, 5, 0) */
	0x00F00000,
	0x00000000,
	0x19064143,
	0x000A0000,
	0x04000002, /* word 1505 (0x1784) ftMotionCommandWait(2) */
	0x0C0160F3, /* word 1506 (0x1788) MakeAttackColl(0, 0, 11, 7, 1, 3, 220, 0, 0, 180, 80, 100, 30, 3, 0, 0, 5, 0) */
	0x00DC0000,
	0x000000B4,
	0x1406407B,
	0x000A0000,
	0x0C8140F3, /* word 1511 (0x179C) MakeAttackColl(1, 0, 10, 7, 1, 3, 160, 0, 0, 0, 80, 100, 30, 3, 0, 0, 5, 0) */
	0x00A00000,
	0x00000000,
	0x1406407B,
	0x000A0000,
	0x04000004, /* word 1516 (0x17B0) ftMotionCommandWait(4) */
	0x18000000, /* word 1517 (0x17B4) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 1518 (0x17B8) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 1519 (0x17BC) ftMotionCommandSetAfterImage(0, -1) */
	0x04000001, /* word 1520 (0x17C0) ftMotionCommandWait(1) */
	0xCC000000, /* word 1521 (0x17C4) ftMotionCommandSetAfterImage(0, 0) */
	0x04000001, /* word 1522 (0x17C8) ftMotionCommandWait(1) */
	0x4C000102, /* word 1523 (0x17CC) ftMotionCommandPlayFGMStoreInfo(258) */
	0x98003400, /* word 1524 (0x17D0) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x98587C00, /* word 1528 (0x17E0) Effect(11, 31, 0, 0, 0, 180, 90, 90, 90) */
	0x00000000,
	0x00B4005A,
	0x005A005A,
	0x0C016073, /* word 1532 (0x17F0) MakeAttackColl(0, 0, 11, 3, 1, 3, 380, 0, 0, 180, 80, 100, 25, 3, 0, 0, 5, 0) */
	0x017C0000,
	0x000000B4,
	0x14064067,
	0x000A0000,
	0x0C814073, /* word 1537 (0x1804) MakeAttackColl(1, 0, 10, 3, 1, 3, 200, 0, 0, 0, 80, 100, 25, 3, 0, 0, 5, 0) */
	0x00C80000,
	0x00000000,
	0x14064067,
	0x000A0000,
	0x04000005, /* word 1542 (0x1818) ftMotionCommandWait(5) */
	0x18000000, /* word 1543 (0x181C) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 1544 (0x1820) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 1545 (0x1824) ftMotionCommandSetAfterImage(0, -1) */
	0x04000002, /* word 1546 (0x1828) ftMotionCommandWait(2) */
	0xCC000000, /* word 1547 (0x182C) ftMotionCommandSetAfterImage(0, 0) */
	0x04000001, /* word 1548 (0x1830) ftMotionCommandWait(1) */
	0x50000000, /* word 1549 (0x1834) ftMotionCommandPlaySmashVoice(0) */
	0x4C000102, /* word 1550 (0x1838) ftMotionCommandPlayFGMStoreInfo(258) */
	0x98003400, /* word 1551 (0x183C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x98587C00, /* word 1555 (0x184C) Effect(11, 31, 0, 0, 0, 180, 90, 90, 90) */
	0x00000000,
	0x00B4005A,
	0x005A005A,
	0x0C016193, /* word 1559 (0x185C) MakeAttackColl(0, 0, 11, 12, 1, 3, 380, 0, 0, 180, 90, 90, 0, 3, 0, 2, 5, 30) */
	0x017C0000,
	0x000000B4,
	0x1685A003,
	0x004A0F00,
	0x0C814193, /* word 1564 (0x1870) MakeAttackColl(1, 0, 10, 12, 1, 3, 200, 0, 0, 0, 90, 90, 0, 3, 0, 2, 5, 30) */
	0x00C80000,
	0x00000000,
	0x1685A003,
	0x004A0F00,
	0x04000005, /* word 1569 (0x1884) ftMotionCommandWait(5) */
	0x18000000, /* word 1570 (0x1888) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 1571 (0x188C) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 1572 (0x1890) ftMotionCommandSetAfterImage(0, -1) */
	0x00000000, /* word 1573 (0x1894) ftMotionCommandEnd() */
	0xBC000003, /* word 1574 (0x1898) ftMotionCommandSetSlopeContour(3) */
	0x08000006, /* word 1575 (0x189C) ftMotionCommandWaitAsync(6) */
	0xBC000004, /* word 1576 (0x18A0) ftMotionCommandSetSlopeContour(4) */
	0x08000008, /* word 1577 (0x18A4) ftMotionCommandWaitAsync(8) */
	0xCC000000, /* word 1578 (0x18A8) ftMotionCommandSetAfterImage(0, 0) */
	0x08000009, /* word 1579 (0x18AC) ftMotionCommandWaitAsync(9) */
	0x98587C00, /* word 1580 (0x18B0) Effect(11, 31, 0, 0, 0, 180, 90, 90, 90) */
	0x00000000,
	0x00B4005A,
	0x005A005A,
	0x98003C00, /* word 1584 (0x18C0) Effect(0, 15, 0, 0, 0, 150, 0, 0, 0) */
	0x00000000,
	0x00960000,
	0x00000000,
	0x50000000, /* word 1588 (0x18D0) ftMotionCommandPlaySmashVoice(0) */
	0x4C000102, /* word 1589 (0x18D4) ftMotionCommandPlayFGMStoreInfo(258) */
	0x0C016213, /* word 1590 (0x18D8) MakeAttackColl(0, 0, 11, 16, 1, 3, 220, 0, 0, 260, 40, 100, 0, 3, 0, 2, 5, 35) */
	0x00DC0000,
	0x00000104,
	0x0A064003,
	0x004A1180,
	0x0C814213, /* word 1595 (0x18EC) MakeAttackColl(1, 0, 10, 16, 1, 3, 150, 0, 0, 0, 75, 100, 0, 3, 0, 2, 5, 35) */
	0x00960000,
	0x00000000,
	0x12C64003,
	0x004A1180,
	0x04000005, /* word 1600 (0x1900) ftMotionCommandWait(5) */
	0x18000000, /* word 1601 (0x1904) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 1602 (0x1908) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 1603 (0x190C) ftMotionCommandSetAfterImage(0, -1) */
	0x08000014, /* word 1604 (0x1910) ftMotionCommandWaitAsync(20) */
	0xCC000000, /* word 1605 (0x1914) ftMotionCommandSetAfterImage(0, 0) */
	0x08000015, /* word 1606 (0x1918) ftMotionCommandWaitAsync(21) */
	0x98004000, /* word 1607 (0x191C) Effect(0, 16, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x98587C00, /* word 1611 (0x192C) Effect(11, 31, 0, 0, 0, 180, 90, 90, 90) */
	0x00000000,
	0x00B4005A,
	0x005A005A,
	0x4C000102, /* word 1615 (0x193C) ftMotionCommandPlayFGMStoreInfo(258) */
	0x0C016213, /* word 1616 (0x1940) MakeAttackColl(0, 0, 11, 16, 1, 3, 220, 0, 0, 260, 40, 100, 0, 3, 0, 2, 5, 35) */
	0x00DC0000,
	0x00000104,
	0x0A064003,
	0x004A1180,
	0x0C814213, /* word 1621 (0x1954) MakeAttackColl(1, 0, 10, 16, 1, 3, 150, 0, 0, 0, 75, 100, 0, 3, 0, 2, 5, 35) */
	0x00960000,
	0x00000000,
	0x12C64003,
	0x004A1180,
	0x04000003, /* word 1626 (0x1968) ftMotionCommandWait(3) */
	0x18000000, /* word 1627 (0x196C) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 1628 (0x1970) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 1629 (0x1974) ftMotionCommandSetAfterImage(0, -1) */
	0x0800002A, /* word 1630 (0x1978) ftMotionCommandWaitAsync(42) */
	0xBC000003, /* word 1631 (0x197C) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 1632 (0x1980) ftMotionCommandEnd() */
	0x08000004, /* word 1633 (0x1984) ftMotionCommandWaitAsync(4) */
	0x58000032, /* word 1634 (0x1988) ftMotionCommandSetFlag1(50) */
	0x0C040150, /* word 1635 (0x198C) MakeAttackColl(0, 0, 32, 10, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 1, 1, 15) */
	0x00F0000A,
	0x00000000,
	0x5A464003,
	0x00220780,
	0x0C836150, /* word 1640 (0x19A0) MakeAttackColl(1, 0, 27, 10, 1, 0, 240, 60, 0, 0, 361, 100, 0, 3, 0, 1, 1, 15) */
	0x00F0003C,
	0x00000000,
	0x5A464003,
	0x00220780,
	0x0D00A150, /* word 1645 (0x19B4) MakeAttackColl(2, 0, 5, 10, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 15) */
	0x01040000,
	0x00000000,
	0x5A464003,
	0x00220780,
	0x4C00002B, /* word 1650 (0x19C8) ftMotionCommandPlayFGMStoreInfo(43) */
	0x04000002, /* word 1651 (0x19CC) ftMotionCommandWait(2) */
	0x0C040110, /* word 1652 (0x19D0) MakeAttackColl(0, 0, 32, 8, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 0, 1, 10) */
	0x00F0000A,
	0x00000000,
	0x5A464003,
	0x00020500,
	0x0C836110, /* word 1657 (0x19E4) MakeAttackColl(1, 0, 27, 8, 1, 0, 240, 60, 0, 0, 361, 100, 0, 3, 0, 0, 1, 10) */
	0x00F0003C,
	0x00000000,
	0x5A464003,
	0x00020500,
	0x0D00A110, /* word 1662 (0x19F8) MakeAttackColl(2, 0, 5, 8, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 0, 1, 10) */
	0x01040000,
	0x00000000,
	0x5A464003,
	0x00020500,
	0x04000018, /* word 1667 (0x1A0C) ftMotionCommandWait(24) */
	0x58000000, /* word 1668 (0x1A10) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1669 (0x1A14) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1670 (0x1A18) ftMotionCommandEnd() */
	0x58000032, /* word 1671 (0x1A1C) ftMotionCommandSetFlag1(50) */
	0x0800000E, /* word 1672 (0x1A20) ftMotionCommandWaitAsync(14) */
	0xCC000000, /* word 1673 (0x1A24) ftMotionCommandSetAfterImage(0, 0) */
	0x0800000F, /* word 1674 (0x1A28) ftMotionCommandWaitAsync(15) */
	0x98587C00, /* word 1675 (0x1A2C) Effect(11, 31, 0, 0, 0, 180, 90, 90, 90) */
	0x00000000,
	0x00B4005A,
	0x005A005A,
	0x0C016293, /* word 1679 (0x1A3C) MakeAttackColl(0, 0, 11, 20, 1, 3, 280, 0, 0, 250, 361, 100, 0, 3, 0, 2, 5, 5) */
	0x01180000,
	0x000000FA,
	0x5A464003,
	0x004A0280,
	0x0C814293, /* word 1684 (0x1A50) MakeAttackColl(1, 0, 10, 20, 1, 3, 220, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 5) */
	0x00DC0000,
	0x00000000,
	0x5A464003,
	0x004A0280,
	0x4C000102, /* word 1689 (0x1A64) ftMotionCommandPlayFGMStoreInfo(258) */
	0x04000003, /* word 1690 (0x1A68) ftMotionCommandWait(3) */
	0x0C016193, /* word 1691 (0x1A6C) MakeAttackColl(0, 0, 11, 12, 1, 3, 180, 0, 0, 250, 361, 100, 0, 3, 0, 2, 5, 0) */
	0x00B40000,
	0x000000FA,
	0x5A464003,
	0x004A0000,
	0x0C814193, /* word 1696 (0x1A80) MakeAttackColl(1, 0, 10, 12, 1, 3, 150, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 0) */
	0x00960000,
	0x00000000,
	0x5A464003,
	0x004A0000,
	0x4C000102, /* word 1701 (0x1A94) ftMotionCommandPlayFGMStoreInfo(258) */
	0x04000011, /* word 1702 (0x1A98) ftMotionCommandWait(17) */
	0x58000000, /* word 1703 (0x1A9C) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1704 (0x1AA0) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 1705 (0x1AA4) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 1706 (0x1AA8) ftMotionCommandSetAfterImage(0, -1) */
	0x00000000, /* word 1707 (0x1AAC) ftMotionCommandEnd() */
	0x3800004C, /* word 1708 (0x1AB0) ftMotionPlayFGM(76) */
	0x00000000, /* word 1709 (0x1AB4) ftMotionCommandEnd() */
	0x58000032, /* word 1710 (0x1AB8) ftMotionCommandSetFlag1(50) */
	0x08000006, /* word 1711 (0x1ABC) ftMotionCommandWaitAsync(6) */
	0x98587C00, /* word 1712 (0x1AC0) Effect(11, 31, 0, 0, 0, 180, 90, 90, 90) */
	0x00000000,
	0x00B4005A,
	0x005A005A,
	0x0C036150, /* word 1716 (0x1AD0) MakeAttackColl(0, 0, 27, 10, 1, 0, 280, 10, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x0118000A,
	0x00000000,
	0x5A464003,
	0x00220000,
	0x0C836150, /* word 1721 (0x1AE4) MakeAttackColl(1, 0, 27, 10, 1, 0, 280, 90, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x0118005A,
	0x00000000,
	0x5A464003,
	0x00220000,
	0x0D00A150, /* word 1726 (0x1AF8) MakeAttackColl(2, 0, 5, 10, 1, 0, 310, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x01360000,
	0x00000000,
	0x5A464003,
	0x00220000,
	0x4C00002A, /* word 1731 (0x1B0C) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000008, /* word 1732 (0x1B10) ftMotionCommandWait(8) */
	0x18000000, /* word 1733 (0x1B14) ftMotionCommandClearAttackCollAll() */
	0x04000004, /* word 1734 (0x1B18) ftMotionCommandWait(4) */
	0x0C040150, /* word 1735 (0x1B1C) MakeAttackColl(0, 0, 32, 10, 1, 0, 280, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15) */
	0x0118000A,
	0x00000000,
	0x5A464003,
	0x00420780,
	0x0C840150, /* word 1740 (0x1B30) MakeAttackColl(1, 0, 32, 10, 1, 0, 280, 90, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15) */
	0x0118005A,
	0x00000000,
	0x5A464003,
	0x00420780,
	0x0D00A150, /* word 1745 (0x1B44) MakeAttackColl(2, 0, 5, 10, 1, 0, 310, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15) */
	0x01360000,
	0x00000000,
	0x5A464003,
	0x00420780,
	0x4C00002A, /* word 1750 (0x1B58) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000009, /* word 1751 (0x1B5C) ftMotionCommandWait(9) */
	0x58000000, /* word 1752 (0x1B60) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1753 (0x1B64) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1754 (0x1B68) ftMotionCommandEnd() */
	0x08000004, /* word 1755 (0x1B6C) ftMotionCommandWaitAsync(4) */
	0xCC000000, /* word 1756 (0x1B70) ftMotionCommandSetAfterImage(0, 0) */
	0x08000005, /* word 1757 (0x1B74) ftMotionCommandWaitAsync(5) */
	0x58000014, /* word 1758 (0x1B78) ftMotionCommandSetFlag1(20) */
	0x98587C00, /* word 1759 (0x1B7C) Effect(11, 31, 0, 0, 0, 180, 90, 90, 90) */
	0x00000000,
	0x00B4005A,
	0x005A005A,
	0x0C016213, /* word 1763 (0x1B8C) MakeAttackColl(0, 0, 11, 16, 1, 3, 300, 0, 0, 100, 70, 100, 0, 3, 0, 2, 5, 5) */
	0x012C0000,
	0x00000064,
	0x11864003,
	0x004A0280,
	0x0C814213, /* word 1768 (0x1BA0) MakeAttackColl(1, 0, 10, 16, 1, 3, 200, 0, 0, 0, 70, 100, 0, 3, 0, 2, 5, 5) */
	0x00C80000,
	0x00000000,
	0x11864003,
	0x004A0280,
	0x4C000102, /* word 1773 (0x1BB4) ftMotionCommandPlayFGMStoreInfo(258) */
	0x0400002C, /* word 1774 (0x1BB8) ftMotionCommandWait(44) */
	0x18000000, /* word 1775 (0x1BBC) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 1776 (0x1BC0) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 1777 (0x1BC4) ftMotionCommandSetAfterImage(0, -1) */
	0x04000008, /* word 1778 (0x1BC8) ftMotionCommandWait(8) */
	0x58000000, /* word 1779 (0x1BCC) ftMotionCommandSetFlag1(0) */
	0x00000000, /* word 1780 (0x1BD0) ftMotionCommandEnd() */
	0x08000004, /* word 1781 (0x1BD4) ftMotionCommandWaitAsync(4) */
	0xCC000000, /* word 1782 (0x1BD8) ftMotionCommandSetAfterImage(0, 0) */
	0x08000005, /* word 1783 (0x1BDC) ftMotionCommandWaitAsync(5) */
	0x5800001E, /* word 1784 (0x1BE0) ftMotionCommandSetFlag1(30) */
	0x98587C00, /* word 1785 (0x1BE4) Effect(11, 31, 0, 0, 0, 180, 90, 90, 90) */
	0x00000000,
	0x00B4005A,
	0x005A005A,
	0x0C016213, /* word 1789 (0x1BF4) MakeAttackColl(0, 0, 11, 16, 1, 3, 300, 0, 0, 100, 361, 100, 0, 3, 0, 2, 5, 25) */
	0x012C0000,
	0x00000064,
	0x5A464003,
	0x004A0C80,
	0x0C814213, /* word 1794 (0x1C08) MakeAttackColl(1, 0, 10, 16, 1, 3, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 25) */
	0x00C80000,
	0x00000000,
	0x5A464003,
	0x004A0C80,
	0x4C000102, /* word 1799 (0x1C1C) ftMotionCommandPlayFGMStoreInfo(258) */
	0x08000007, /* word 1800 (0x1C20) ftMotionCommandWaitAsync(7) */
	0xA0A80000, /* word 1801 (0x1C24) ftMotionCommandSetModelPartID(21, 0) */
	0xA09FFFFF, /* word 1802 (0x1C28) ftMotionCommandSetModelPartID(19, -1) */
	0xC0000000, /* word 1803 (0x1C2C) ftMotionCommandHideItem(0) */
	0x08000041, /* word 1804 (0x1C30) ftMotionCommandWaitAsync(65) */
	0x18000000, /* word 1805 (0x1C34) ftMotionCommandClearAttackCollAll() */
	0x58000000, /* word 1806 (0x1C38) ftMotionCommandSetFlag1(0) */
	0x04000002, /* word 1807 (0x1C3C) ftMotionCommandWait(2) */
	0xCC03FFFF, /* word 1808 (0x1C40) ftMotionCommandSetAfterImage(0, -1) */
	0x0400000C, /* word 1809 (0x1C44) ftMotionCommandWait(12) */
	0xA4000000, /* word 1810 (0x1C48) ftMotionCommandResetModelPartAll() */
	0xC0000001, /* word 1811 (0x1C4C) ftMotionCommandHideItem(1) */
	0x00000000, /* word 1812 (0x1C50) ftMotionCommandEnd() */
	0xC0000000, /* word 1813 (0x1C54) ftMotionCommandHideItem(0) */
	0xC4000009, /* word 1814 (0x1C58) ftMotionCommandMakeRumble(0, 9) */
	0xA0A80000, /* word 1815 (0x1C5C) ftMotionCommandSetModelPartID(21, 0) */
	0xA09FFFFF, /* word 1816 (0x1C60) ftMotionCommandSetModelPartID(19, -1) */
	0x38000123, /* word 1817 (0x1C64) ftMotionPlayFGM(291) */
	0x9BF88400, /* word 1818 (0x1C68) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x98007C00, /* word 1822 (0x1C78) Effect(0, 31, 0, 60, 0, 0, 0, 0, 0) */
	0x003C0000,
	0x00000000,
	0x00000000,
	0x98005800, /* word 1826 (0x1C88) Effect(0, 22, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x08000028, /* word 1830 (0x1C98) ftMotionCommandWaitAsync(40) */
	0xA4000000, /* word 1831 (0x1C9C) ftMotionCommandResetModelPartAll() */
	0xC0000001, /* word 1832 (0x1CA0) ftMotionCommandHideItem(1) */
	0x00000000, /* word 1833 (0x1CA4) ftMotionCommandEnd() */
	0x3800004C, /* word 1834 (0x1CA8) ftMotionPlayFGM(76) */
	0x98003400, /* word 1835 (0x1CAC) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 1839 (0x1CBC) ftMotionCommandEnd() */
	0x0800001E, /* word 1840 (0x1CC0) ftMotionCommandWaitAsync(30) */
	0xC4078007, /* word 1841 (0x1CC4) ftMotionCommandMakeRumble(60, 7) */
	0x380000D3, /* word 1842 (0x1CC8) ftMotionPlayFGM(211) */
	0xA0A00000, /* word 1843 (0x1CCC) ftMotionCommandSetModelPartID(20, 0) */
	0xA05FFFFF, /* word 1844 (0x1CD0) ftMotionCommandSetModelPartID(11, -1) */
	0x5C000001, /* word 1845 (0x1CD4) ftMotionCommandSetFlag2(1) */
	0x08000057, /* word 1846 (0x1CD8) ftMotionCommandWaitAsync(87) */
	0xA0A7FFFF, /* word 1847 (0x1CDC) ftMotionCommandSetModelPartID(20, -1) */
	0xA0580000, /* word 1848 (0x1CE0) ftMotionCommandSetModelPartID(11, 0) */
	0x38000108, /* word 1849 (0x1CE4) ftMotionPlayFGM(264) */
	0x00000000, /* word 1850 (0x1CE8) ftMotionCommandEnd() */
	0x90000000, /* word 1851 (0x1CEC) Goto */
	0xFFFF0730, /* -> word 1840 (0x1CC0) */
	0x00000000, /* word 1853 (0x1CF4) ftMotionCommandEnd() */
	0x0800001C, /* word 1854 (0x1CF8) ftMotionCommandWaitAsync(28) */
	0xA0A80000, /* word 1855 (0x1CFC) ftMotionCommandSetModelPartID(21, 0) */
	0xA09FFFFF, /* word 1856 (0x1D00) ftMotionCommandSetModelPartID(19, -1) */
	0x0800001D, /* word 1857 (0x1D04) ftMotionCommandWaitAsync(29) */
	0xC4000006, /* word 1858 (0x1D08) ftMotionCommandMakeRumble(0, 6) */
	0x380000CD, /* word 1859 (0x1D0C) ftMotionPlayFGM(205) */
	0x54000001, /* word 1860 (0x1D10) ftMotionCommandSetFlag0(1) */
	0x08000008, /* word 1861 (0x1D14) ftMotionCommandWaitAsync(8) */
	0x98987C00, /* word 1862 (0x1D18) Effect(19, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 1866 (0x1D28) ftMotionCommandEnd() */
	0xBC000003, /* word 1867 (0x1D2C) ftMotionCommandSetSlopeContour(3) */
	0x08000009, /* word 1868 (0x1D30) ftMotionCommandWaitAsync(9) */
	0xA05FFFFF, /* word 1869 (0x1D34) ftMotionCommandSetModelPartID(11, -1) */
	0xA0A00000, /* word 1870 (0x1D38) ftMotionCommandSetModelPartID(20, 0) */
	0x0800000A, /* word 1871 (0x1D3C) ftMotionCommandWaitAsync(10) */
	0xA0580001, /* word 1872 (0x1D40) ftMotionCommandSetModelPartID(11, 1) */
	0x0800001A, /* word 1873 (0x1D44) ftMotionCommandWaitAsync(26) */
	0xA05FFFFF, /* word 1874 (0x1D48) ftMotionCommandSetModelPartID(11, -1) */
	0x44000191, /* word 1875 (0x1D4C) ftMotionPlayVoice(401) */
	0xC4000006, /* word 1876 (0x1D50) ftMotionCommandMakeRumble(0, 6) */
	0x98003400, /* word 1877 (0x1D54) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x98507C00, /* word 1881 (0x1D64) Effect(10, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 1885 (0x1D74) ftMotionCommandSetFlag0(1) */
	0x08000026, /* word 1886 (0x1D78) ftMotionCommandWaitAsync(38) */
	0xA0A7FFFF, /* word 1887 (0x1D7C) ftMotionCommandSetModelPartID(20, -1) */
	0xA0580000, /* word 1888 (0x1D80) ftMotionCommandSetModelPartID(11, 0) */
	0x00000000, /* word 1889 (0x1D84) ftMotionCommandEnd() */
	0x08000009, /* word 1890 (0x1D88) ftMotionCommandWaitAsync(9) */
	0xA05FFFFF, /* word 1891 (0x1D8C) ftMotionCommandSetModelPartID(11, -1) */
	0xA0A00000, /* word 1892 (0x1D90) ftMotionCommandSetModelPartID(20, 0) */
	0x08000026, /* word 1893 (0x1D94) ftMotionCommandWaitAsync(38) */
	0xA0A7FFFF, /* word 1894 (0x1D98) ftMotionCommandSetModelPartID(20, -1) */
	0xA0580000, /* word 1895 (0x1D9C) ftMotionCommandSetModelPartID(11, 0) */
	0x00000000, /* word 1896 (0x1DA0) ftMotionCommandEnd() */
	0xC4000009, /* word 1897 (0x1DA4) ftMotionCommandMakeRumble(0, 9) */
	0x380000D0, /* word 1898 (0x1DA8) ftMotionPlayFGM(208) */
	0xA05FFFFF, /* word 1899 (0x1DAC) ftMotionCommandSetModelPartID(11, -1) */
	0xA0A00000, /* word 1900 (0x1DB0) ftMotionCommandSetModelPartID(20, 0) */
	0xA0580001, /* word 1901 (0x1DB4) ftMotionCommandSetModelPartID(11, 1) */
	0x0800000C, /* word 1902 (0x1DB8) ftMotionCommandWaitAsync(12) */
	0xA0A7FFFF, /* word 1903 (0x1DBC) ftMotionCommandSetModelPartID(20, -1) */
	0xA05FFFFF, /* word 1904 (0x1DC0) ftMotionCommandSetModelPartID(11, -1) */
	0xA0580000, /* word 1905 (0x1DC4) ftMotionCommandSetModelPartID(11, 0) */
	0x00000000, /* word 1906 (0x1DC8) ftMotionCommandEnd() */
	0x98003400, /* word 1907 (0x1DCC) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x380000D1, /* word 1911 (0x1DDC) ftMotionPlayFGM(209) */
	0x44000194, /* word 1912 (0x1DE0) ftMotionPlayVoice(404) */
	0xB0B00032, /* word 1913 (0x1DE4) ftMotionCommandSetColAnim(44, 50) */
	0x54000001, /* word 1914 (0x1DE8) ftMotionCommandSetFlag0(1) */
	0xC403C007, /* word 1915 (0x1DEC) ftMotionCommandMakeRumble(30, 7) */
	0x5C00000D, /* word 1916 (0x1DF0) ftMotionCommandSetFlag2(13) */
	0x08000003, /* word 1917 (0x1DF4) ftMotionCommandWaitAsync(3) */
	0x98587C00, /* word 1918 (0x1DF8) Effect(11, 31, 0, 0, 0, 100, 0, 0, 0) */
	0x00000000,
	0x00640000,
	0x00000000,
	0x08000004, /* word 1922 (0x1E08) ftMotionCommandWaitAsync(4) */
	0x98587C00, /* word 1923 (0x1E0C) Effect(11, 31, 0, 0, 0, 150, 0, 0, 0) */
	0x00000000,
	0x00960000,
	0x00000000,
	0x08000005, /* word 1927 (0x1E1C) ftMotionCommandWaitAsync(5) */
	0x98587C00, /* word 1928 (0x1E20) Effect(11, 31, 0, 0, 0, 200, 0, 0, 0) */
	0x00000000,
	0x00C80000,
	0x00000000,
	0x08000006, /* word 1932 (0x1E30) ftMotionCommandWaitAsync(6) */
	0x98587C00, /* word 1933 (0x1E34) Effect(11, 31, 0, 0, 0, 250, 0, 0, 0) */
	0x00000000,
	0x00FA0000,
	0x00000000,
	0x08000007, /* word 1937 (0x1E44) ftMotionCommandWaitAsync(7) */
	0x98587C00, /* word 1938 (0x1E48) Effect(11, 31, 0, 0, 0, 300, 0, 0, 0) */
	0x00000000,
	0x012C0000,
	0x00000000,
	0x08000008, /* word 1942 (0x1E58) ftMotionCommandWaitAsync(8) */
	0x0C016213, /* word 1943 (0x1E5C) MakeAttackColl(0, 0, 11, 16, 1, 3, 300, 0, 0, 300, 361, 100, 0, 3, 0, 2, 5, 30) */
	0x012C0000,
	0x0000012C,
	0x5A464003,
	0x004A0F00,
	0x0C814213, /* word 1948 (0x1E70) MakeAttackColl(1, 0, 10, 16, 1, 3, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 30) */
	0x00C80000,
	0x00000000,
	0x5A464003,
	0x004A0F00,
	0x0800000C, /* word 1953 (0x1E84) ftMotionCommandWaitAsync(12) */
	0x0C016113, /* word 1954 (0x1E88) MakeAttackColl(0, 0, 11, 8, 1, 3, 180, 0, 0, 300, 361, 100, 0, 3, 0, 1, 5, 10) */
	0x00B40000,
	0x0000012C,
	0x5A464003,
	0x002A0500,
	0x0C814113, /* word 1959 (0x1E9C) MakeAttackColl(1, 0, 10, 8, 1, 3, 140, 0, 0, 0, 361, 100, 0, 3, 0, 1, 5, 10) */
	0x008C0000,
	0x00000000,
	0x5A464003,
	0x002A0500,
	0x5C000002, /* word 1964 (0x1EB0) ftMotionCommandSetFlag2(2) */
	0x58000001, /* word 1965 (0x1EB4) ftMotionCommandSetFlag1(1) */
	0x98007C00, /* word 1966 (0x1EB8) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x08000014, /* word 1970 (0x1EC8) ftMotionCommandWaitAsync(20) */
	0x5C000003, /* word 1971 (0x1ECC) ftMotionCommandSetFlag2(3) */
	0x0800001A, /* word 1972 (0x1ED0) ftMotionCommandWaitAsync(26) */
	0x5C000004, /* word 1973 (0x1ED4) ftMotionCommandSetFlag2(4) */
	0x0800001E, /* word 1974 (0x1ED8) ftMotionCommandWaitAsync(30) */
	0x5C00000D, /* word 1975 (0x1EDC) ftMotionCommandSetFlag2(13) */
	0x08000028, /* word 1976 (0x1EE0) ftMotionCommandWaitAsync(40) */
	0x18000000, /* word 1977 (0x1EE4) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1978 (0x1EE8) ftMotionCommandEnd() */
	0x00000000, /* word 1979 (0x1EEC) ftMotionCommandEnd() */
};
