/* ftMotionCommand script data for relocData file 232 (PurinMainMotion) */
/* File size: 6016 bytes (0x1780) */

#include "relocdata_types.h"
#include <ft/ftdef.h>

u32 dPurinMainMotion[1504] = {
	0xAC000004, /* word 0 (0x0000) ftMotionCommandSetTexturePartID(4) */
	0xAC100004, /* word 1 (0x0004) ftMotionCommandSetTexturePartID(1048580) */
	0x04000002, /* word 2 (0x0008) ftMotionCommandWait(2) */
	0xAC000005, /* word 3 (0x000C) ftMotionCommandSetTexturePartID(5) */
	0xAC100005, /* word 4 (0x0010) ftMotionCommandSetTexturePartID(1048581) */
	0x04000003, /* word 5 (0x0014) ftMotionCommandWait(3) */
	0xAC000004, /* word 6 (0x0018) ftMotionCommandSetTexturePartID(4) */
	0xAC100004, /* word 7 (0x001C) ftMotionCommandSetTexturePartID(1048580) */
	0x04000002, /* word 8 (0x0020) ftMotionCommandWait(2) */
	0xAC000000, /* word 9 (0x0024) ftMotionCommandSetTexturePartID(0) */
	0xAC100000, /* word 10 (0x0028) ftMotionCommandSetTexturePartID(1048576) */
	0x04000001, /* word 11 (0x002C) ftMotionCommandWait(1) */
	0x8C000000, /* word 12 (0x0030) ftMotionCommandReturn() */
	0xBC000003, /* word 13 (0x0034) ftMotionCommandSetSlopeContour(3) */
	0x88000000, /* word 14 (0x0038) Subroutine */
	0x00120000, /* -> word 0 (0x0000) */
	0x0400005A, /* word 16 (0x0040) ftMotionCommandWait(90) */
	0x88000000, /* word 17 (0x0044) Subroutine */
	0x00150000, /* -> word 0 (0x0000) */
	0x0400000A, /* word 19 (0x004C) ftMotionCommandWait(10) */
	0x88000000, /* word 20 (0x0050) Subroutine */
	0x00180000, /* -> word 0 (0x0000) */
	0x04000050, /* word 22 (0x0058) ftMotionCommandWait(80) */
	0x90000000, /* word 23 (0x005C) Goto */
	0x0031000D, /* -> word 13 (0x0034) */
	0x3800007E, /* word 25 (0x0064) ftMotionPlayFGM(126) */
	0x80000002, /* word 26 (0x0068) ftMotionCommandLoopBegin(2) */
	0x98002C00, /* word 27 (0x006C) Effect(0, 11, 0, 0, 0, -120, 0, 60, 0) */
	0x00000000,
	0xFF880000,
	0x003C0000,
	0x04000006, /* word 31 (0x007C) ftMotionCommandWait(6) */
	0x84000000, /* word 32 (0x0080) ftMotionCommandLoopEnd() */
	0x00000000, /* word 33 (0x0084) ftMotionCommandEnd() */
	0xBC000004, /* word 34 (0x0088) ftMotionCommandSetSlopeContour(4) */
	0x08000002, /* word 35 (0x008C) ftMotionCommandWaitAsync(2) */
	0x38000071, /* word 36 (0x0090) ftMotionPlayFGM(113) */
	0x98002C00, /* word 37 (0x0094) Effect(0, 11, 0, 0, 0, 60, 0, 0, 0) */
	0x00000000,
	0x003C0000,
	0x00000000,
	0x0400000F, /* word 41 (0x00A4) ftMotionCommandWait(15) */
	0x38000071, /* word 42 (0x00A8) ftMotionPlayFGM(113) */
	0x98002C00, /* word 43 (0x00AC) Effect(0, 11, 0, 0, 0, 60, 0, 0, 0) */
	0x00000000,
	0x003C0000,
	0x00000000,
	0x94000000, /* word 47 (0x00BC) ftMotionCommandPauseScript() */
	0x90000000, /* word 48 (0x00C0) Goto */
	0x008F0022, /* -> word 34 (0x0088) */
	0x38000080, /* word 50 (0x00C8) ftMotionPlayFGM(128) */
	0x98002C00, /* word 51 (0x00CC) Effect(0, 11, 0, 0, 0, 60, 0, 0, 0) */
	0x00000000,
	0x003C0000,
	0x00000000,
	0x00000000, /* word 55 (0x00DC) ftMotionCommandEnd() */
	0x08000006, /* word 56 (0x00E0) ftMotionCommandWaitAsync(6) */
	0x58000001, /* word 57 (0x00E4) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 58 (0x00E8) ftMotionCommandEnd() */
	0x98004000, /* word 59 (0x00EC) Effect(0, 16, 0, 0, 0, 120, 0, 0, 0) */
	0x00000000,
	0x00780000,
	0x00000000,
	0x08000011, /* word 63 (0x00FC) ftMotionCommandWaitAsync(17) */
	0x58000001, /* word 64 (0x0100) ftMotionCommandSetFlag1(1) */
	0x5C000001, /* word 65 (0x0104) ftMotionCommandSetFlag2(1) */
	0x98002C00, /* word 66 (0x0108) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 70 (0x0118) ftMotionCommandEnd() */
	0x74000003, /* word 71 (0x011C) ftMotionCommandSetHitStatusAll(3) */
	0x08000002, /* word 72 (0x0120) ftMotionCommandWaitAsync(2) */
	0x74000001, /* word 73 (0x0124) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 74 (0x0128) ftMotionCommandEnd() */
	0x38000066, /* word 75 (0x012C) ftMotionPlayFGM(102) */
	0x98003400, /* word 76 (0x0130) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 80 (0x0140) ftMotionCommandEnd() */
	0x3800005B, /* word 81 (0x0144) ftMotionPlayFGM(91) */
	0x98002C00, /* word 82 (0x0148) Effect(0, 11, 0, 0, 0, 0, 100, 100, 100) */
	0x00000000,
	0x00000064,
	0x00640064,
	0x08000019, /* word 86 (0x0158) ftMotionCommandWaitAsync(25) */
	0x58000001, /* word 87 (0x015C) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 88 (0x0160) ftMotionCommandEnd() */
	0x3800005B, /* word 89 (0x0164) ftMotionPlayFGM(91) */
	0x98002C00, /* word 90 (0x0168) Effect(0, 11, 0, 0, 0, 0, 100, 100, 100) */
	0x00000000,
	0x00000064,
	0x00640064,
	0x08000019, /* word 94 (0x0178) ftMotionCommandWaitAsync(25) */
	0x58000001, /* word 95 (0x017C) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 96 (0x0180) ftMotionCommandEnd() */
	0x3800005B, /* word 97 (0x0184) ftMotionPlayFGM(91) */
	0x98002C00, /* word 98 (0x0188) Effect(0, 11, 0, 0, 0, 0, 100, 100, 100) */
	0x00000000,
	0x00000064,
	0x00640064,
	0x08000019, /* word 102 (0x0198) ftMotionCommandWaitAsync(25) */
	0x58000001, /* word 103 (0x019C) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 104 (0x01A0) ftMotionCommandEnd() */
	0x3800005B, /* word 105 (0x01A4) ftMotionPlayFGM(91) */
	0x98002C00, /* word 106 (0x01A8) Effect(0, 11, 0, 0, 0, 0, 100, 100, 100) */
	0x00000000,
	0x00000064,
	0x00640064,
	0x08000019, /* word 110 (0x01B8) ftMotionCommandWaitAsync(25) */
	0x58000001, /* word 111 (0x01BC) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 112 (0x01C0) ftMotionCommandEnd() */
	0x3800005B, /* word 113 (0x01C4) ftMotionPlayFGM(91) */
	0x98002C00, /* word 114 (0x01C8) Effect(0, 11, 0, 0, 0, 0, 100, 100, 100) */
	0x00000000,
	0x00000064,
	0x00640064,
	0x00000000, /* word 118 (0x01D8) ftMotionCommandEnd() */
	0x38000050, /* word 119 (0x01DC) ftMotionPlayFGM(80) */
	0x98002C00, /* word 120 (0x01E0) Effect(0, 11, 0, 0, 0, -60, 0, 0, 0) */
	0x00000000,
	0xFFC40000,
	0x00000000,
	0x00000000, /* word 124 (0x01F0) ftMotionCommandEnd() */
	0x38000050, /* word 125 (0x01F4) ftMotionPlayFGM(80) */
	0x98003400, /* word 126 (0x01F8) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 130 (0x0208) ftMotionCommandEnd() */
	0x00000000, /* word 131 (0x020C) ftMotionCommandEnd() */
	0x3800027E, /* word 132 (0x0210) ftMotionPlayFGM(638) */
	0x00000000, /* word 133 (0x0214) ftMotionCommandEnd() */
	0x3800027E, /* word 134 (0x0218) ftMotionPlayFGM(638) */
	0x74000003, /* word 135 (0x021C) ftMotionCommandSetHitStatusAll(3) */
	0x08000002, /* word 136 (0x0220) ftMotionCommandWaitAsync(2) */
	0x74000001, /* word 137 (0x0224) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 138 (0x0228) ftMotionCommandEnd() */
	0xAC000006, /* word 139 (0x022C) ftMotionCommandSetTexturePartID(6) */
	0xAC100006, /* word 140 (0x0230) ftMotionCommandSetTexturePartID(1048582) */
	0x8C000000, /* word 141 (0x0234) ftMotionCommandReturn() */
	0x88000000, /* word 142 (0x0238) Subroutine */
	0x0092008B, /* -> word 139 (0x022C) */
	0x00000000, /* word 144 (0x0240) ftMotionCommandEnd() */
	0x88000000, /* word 145 (0x0244) Subroutine */
	0x00BA008B, /* -> word 139 (0x022C) */
	0x34000000, /* word 147 (0x024C) SetDamageThrown */
	0x022D01D6, /* extern -> 0x758 */
	0x00000000, /* word 149 (0x0254) ftMotionCommandEnd() */
	0x38000050, /* word 150 (0x0258) ftMotionPlayFGM(80) */
	0x98003400, /* word 151 (0x025C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 155 (0x026C) ftMotionCommandEnd() */
	0x00000000, /* word 156 (0x0270) ftMotionCommandEnd() */
	0xBC000004, /* word 157 (0x0274) ftMotionCommandSetSlopeContour(4) */
	0x00000000, /* word 158 (0x0278) ftMotionCommandEnd() */
	0x00000000, /* word 159 (0x027C) ftMotionCommandEnd() */
	0x08000008, /* word 160 (0x0280) ftMotionCommandWaitAsync(8) */
	0x74000003, /* word 161 (0x0284) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 162 (0x0288) ftMotionCommandEnd() */
	0x08000018, /* word 163 (0x028C) ftMotionCommandWaitAsync(24) */
	0x74000001, /* word 164 (0x0290) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 165 (0x0294) ftMotionCommandEnd() */
	0xAC000006, /* word 166 (0x0298) ftMotionCommandSetTexturePartID(6) */
	0xAC100006, /* word 167 (0x029C) ftMotionCommandSetTexturePartID(1048582) */
	0xBC000004, /* word 168 (0x02A0) ftMotionCommandSetSlopeContour(4) */
	0x98003400, /* word 169 (0x02A4) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x9BF88400, /* word 173 (0x02B4) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x04000002, /* word 177 (0x02C4) ftMotionCommandWait(2) */
	0xBC000000, /* word 178 (0x02C8) ftMotionCommandSetSlopeContour(0) */
	0x08000018, /* word 179 (0x02CC) ftMotionCommandWaitAsync(24) */
	0xBC000004, /* word 180 (0x02D0) ftMotionCommandSetSlopeContour(4) */
	0xAC000005, /* word 181 (0x02D4) ftMotionCommandSetTexturePartID(5) */
	0xAC100005, /* word 182 (0x02D8) ftMotionCommandSetTexturePartID(1048581) */
	0x04000001, /* word 183 (0x02DC) ftMotionCommandWait(1) */
	0x00000000, /* word 184 (0x02E0) ftMotionCommandEnd() */
	0x90000000, /* word 185 (0x02E4) Goto */
	0x00CA00A6, /* -> word 166 (0x0298) */
	0x98002C00, /* word 187 (0x02EC) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 191 (0x02FC) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 192 (0x0300) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 193 (0x0304) ftMotionCommandSetHitStatusAll(1) */
	0x8C000000, /* word 194 (0x0308) ftMotionCommandReturn() */
	0x74000003, /* word 195 (0x030C) ftMotionCommandSetHitStatusAll(3) */
	0x08000018, /* word 196 (0x0310) ftMotionCommandWaitAsync(24) */
	0x74000001, /* word 197 (0x0314) ftMotionCommandSetHitStatusAll(1) */
	0x04000002, /* word 198 (0x0318) ftMotionCommandWait(2) */
	0x58000001, /* word 199 (0x031C) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 200 (0x0320) ftMotionCommandEnd() */
	0x90000000, /* word 201 (0x0324) Goto */
	0x00CD00C3, /* -> word 195 (0x030C) */
	0x3800000B, /* word 203 (0x032C) ftMotionPlayFGM(11) */
	0x88000000, /* word 204 (0x0330) Subroutine */
	0x00D000BB, /* -> word 187 (0x02EC) */
	0x00000000, /* word 206 (0x0338) ftMotionCommandEnd() */
	0x90000000, /* word 207 (0x033C) Goto */
	0x00D200CB, /* -> word 203 (0x032C) */
	0x90000000, /* word 209 (0x0344) Goto */
	0x00D400CB, /* -> word 203 (0x032C) */
	0x90000000, /* word 211 (0x034C) Goto */
	0x012300CB, /* -> word 203 (0x032C) */
	0x74000003, /* word 213 (0x0354) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 214 (0x0358) ftMotionCommandWaitAsync(20) */
	0x98003400, /* word 215 (0x035C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x0C02E0C0, /* word 219 (0x036C) MakeAttackColl(0, 0, 23, 6, 0, 0, 300, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0) */
	0x012C0096,
	0x00000000,
	0x5A46416B,
	0x01220000,
	0x04000002, /* word 224 (0x0380) ftMotionCommandWait(2) */
	0x18000000, /* word 225 (0x0384) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 226 (0x0388) ftMotionCommandWait(2) */
	0x0C02E0C0, /* word 227 (0x038C) MakeAttackColl(0, 0, 23, 6, 0, 0, 300, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0) */
	0x012C0096,
	0x00000000,
	0x5A46416B,
	0x01220000,
	0x74000001, /* word 232 (0x03A0) ftMotionCommandSetHitStatusAll(1) */
	0x04000002, /* word 233 (0x03A4) ftMotionCommandWait(2) */
	0x18000000, /* word 234 (0x03A8) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 235 (0x03AC) ftMotionCommandEnd() */
	0x74000003, /* word 236 (0x03B0) ftMotionCommandSetHitStatusAll(3) */
	0x08000012, /* word 237 (0x03B4) ftMotionCommandWaitAsync(18) */
	0x98003400, /* word 238 (0x03B8) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x0C0140D0, /* word 242 (0x03C8) MakeAttackColl(0, 0, 10, 6, 1, 0, 260, 100, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0) */
	0x01040064,
	0x00000000,
	0x5A464143,
	0x01220000,
	0x04000003, /* word 247 (0x03DC) ftMotionCommandWait(3) */
	0x18000000, /* word 248 (0x03E0) ftMotionCommandClearAttackCollAll() */
	0x04000003, /* word 249 (0x03E4) ftMotionCommandWait(3) */
	0x0D0380D0, /* word 250 (0x03E8) MakeAttackColl(2, 0, 28, 6, 1, 0, 190, 160, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0) */
	0x00BE00A0,
	0x00000000,
	0x5A464143,
	0x01220000,
	0x74000001, /* word 255 (0x03FC) ftMotionCommandSetHitStatusAll(1) */
	0x04000003, /* word 256 (0x0400) ftMotionCommandWait(3) */
	0x18000000, /* word 257 (0x0404) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 258 (0x0408) ftMotionCommandEnd() */
	0xC4000009, /* word 259 (0x040C) ftMotionCommandMakeRumble(0, 9) */
	0x9800AC00, /* word 260 (0x0410) Effect(0, 43, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4400022F, /* word 264 (0x0420) ftMotionPlayVoice(559) */
	0x38000011, /* word 265 (0x0424) ftMotionPlayFGM(17) */
	0x98007C00, /* word 266 (0x0428) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 270 (0x0438) ftMotionCommandSetHitStatusAll(3) */
	0x08000018, /* word 271 (0x043C) ftMotionCommandWaitAsync(24) */
	0x74000001, /* word 272 (0x0440) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 273 (0x0444) ftMotionCommandEnd() */
	0xC4000007, /* word 274 (0x0448) ftMotionCommandMakeRumble(0, 7) */
	0x9800AC00, /* word 275 (0x044C) Effect(0, 43, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4400022F, /* word 279 (0x045C) ftMotionPlayVoice(559) */
	0x3800000B, /* word 280 (0x0460) ftMotionPlayFGM(11) */
	0x98007C00, /* word 281 (0x0464) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 285 (0x0474) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 286 (0x0478) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 287 (0x047C) ftMotionCommandSetHitStatusAll(1) */
	0xC8000007, /* word 288 (0x0480) ftMotionCommandStopRumble(7) */
	0x00000000, /* word 289 (0x0484) ftMotionCommandEnd() */
	0x90000000, /* word 290 (0x0488) Goto */
	0x01BB0112, /* -> word 274 (0x0448) */
	0x3800000B, /* word 292 (0x0490) ftMotionPlayFGM(11) */
	0x98007C00, /* word 293 (0x0494) Effect(0, 31, 0, 0, 120, 0, 0, 0, 0) */
	0x00000078,
	0x00000000,
	0x00000000,
	0x08000004, /* word 297 (0x04A4) ftMotionCommandWaitAsync(4) */
	0x98004000, /* word 298 (0x04A8) Effect(0, 16, 0, 100, 0, 0, 0, 0, 0) */
	0x00640000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 302 (0x04B8) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 303 (0x04BC) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 304 (0x04C0) ftMotionCommandSetHitStatusAll(1) */
	0x58000001, /* word 305 (0x04C4) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 306 (0x04C8) ftMotionCommandEnd() */
	0x3800000B, /* word 307 (0x04CC) ftMotionPlayFGM(11) */
	0x98007C00, /* word 308 (0x04D0) Effect(0, 31, 0, 0, 120, 0, 0, 0, 0) */
	0x00000078,
	0x00000000,
	0x00000000,
	0x08000004, /* word 312 (0x04E0) ftMotionCommandWaitAsync(4) */
	0x98003C00, /* word 313 (0x04E4) Effect(0, 15, 0, -100, 0, 0, 0, 0, 0) */
	0xFF9C0000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 317 (0x04F4) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 318 (0x04F8) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 319 (0x04FC) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 320 (0x0500) ftMotionCommandEnd() */
	0x74000003, /* word 321 (0x0504) ftMotionCommandSetHitStatusAll(3) */
	0x38000013, /* word 322 (0x0508) ftMotionPlayFGM(19) */
	0x00000000, /* word 323 (0x050C) ftMotionCommandEnd() */
	0x74000003, /* word 324 (0x0510) ftMotionCommandSetHitStatusAll(3) */
	0x0400003C, /* word 325 (0x0514) ftMotionCommandWait(60) */
	0x74000001, /* word 326 (0x0518) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 327 (0x051C) ftMotionCommandEnd() */
	0x74000003, /* word 328 (0x0520) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 329 (0x0524) ftMotionCommandEnd() */
	0x74000003, /* word 330 (0x0528) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 331 (0x052C) ftMotionCommandEnd() */
	0x74000003, /* word 332 (0x0530) ftMotionCommandSetHitStatusAll(3) */
	0x0400000A, /* word 333 (0x0534) ftMotionCommandWait(10) */
	0x74000001, /* word 334 (0x0538) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 335 (0x053C) ftMotionCommandEnd() */
	0x74000003, /* word 336 (0x0540) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 337 (0x0544) ftMotionCommandEnd() */
	0x74000003, /* word 338 (0x0548) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 339 (0x054C) ftMotionCommandEnd() */
	0x74000003, /* word 340 (0x0550) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 341 (0x0554) ftMotionCommandEnd() */
	0x74000003, /* word 342 (0x0558) ftMotionCommandSetHitStatusAll(3) */
	0x08000024, /* word 343 (0x055C) ftMotionCommandWaitAsync(36) */
	0x74000001, /* word 344 (0x0560) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 345 (0x0564) ftMotionCommandEnd() */
	0x98007C00, /* word 346 (0x0568) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x50000000, /* word 350 (0x0578) ftMotionCommandPlaySmashVoice(0) */
	0x0C038080, /* word 351 (0x057C) MakeAttackColl(0, 0, 28, 4, 0, 0, 180, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0) */
	0x00B40000,
	0x00000000,
	0x5A464193,
	0x00220000,
	0x0C838080, /* word 356 (0x0590) MakeAttackColl(1, 0, 28, 4, 0, 0, 150, 200, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0) */
	0x009600C8,
	0x00000000,
	0x5A464193,
	0x00220000,
	0x4C00002A, /* word 361 (0x05A4) ftMotionCommandPlayFGMStoreInfo(42) */
	0x98004C00, /* word 362 (0x05A8) Effect(0, 19, 0, 0, -80, -180, 0, 0, 0) */
	0x0000FFB0,
	0xFF4C0000,
	0x00000000,
	0x0400000A, /* word 366 (0x05B8) ftMotionCommandWait(10) */
	0x18000000, /* word 367 (0x05BC) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 368 (0x05C0) ftMotionCommandEnd() */
	0x74000003, /* word 369 (0x05C4) ftMotionCommandSetHitStatusAll(3) */
	0x0800003C, /* word 370 (0x05C8) ftMotionCommandWaitAsync(60) */
	0x74000001, /* word 371 (0x05CC) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 372 (0x05D0) ftMotionCommandEnd() */
	0x74000003, /* word 373 (0x05D4) ftMotionCommandSetHitStatusAll(3) */
	0x08000020, /* word 374 (0x05D8) ftMotionCommandWaitAsync(32) */
	0x74000001, /* word 375 (0x05DC) ftMotionCommandSetHitStatusAll(1) */
	0x50000000, /* word 376 (0x05E0) ftMotionCommandPlaySmashVoice(0) */
	0x0C000080, /* word 377 (0x05E4) MakeAttackColl(0, 0, 0, 4, 0, 0, 300, 0, 180, 300, 361, 100, 100, 3, 0, 1, 1, 0) */
	0x012C0000,
	0x00B4012C,
	0x5A464193,
	0x00220000,
	0x98004C00, /* word 382 (0x05F8) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x98007C00, /* word 386 (0x0608) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4C00002A, /* word 390 (0x0618) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000008, /* word 391 (0x061C) ftMotionCommandWait(8) */
	0x18000000, /* word 392 (0x0620) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 393 (0x0624) ftMotionCommandEnd() */
	0x74000003, /* word 394 (0x0628) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 395 (0x062C) ftMotionCommandEnd() */
	0x3800000B, /* word 396 (0x0630) ftMotionPlayFGM(11) */
	0x98004000, /* word 397 (0x0634) Effect(0, 16, 0, 100, 0, 0, 0, 0, 0) */
	0x00640000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 401 (0x0644) ftMotionCommandSetHitStatusAll(3) */
	0x04000028, /* word 402 (0x0648) ftMotionCommandWait(40) */
	0x74000001, /* word 403 (0x064C) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 404 (0x0650) ftMotionCommandEnd() */
	0x74000003, /* word 405 (0x0654) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 406 (0x0658) ftMotionCommandEnd() */
	0x3800000B, /* word 407 (0x065C) ftMotionPlayFGM(11) */
	0x98004000, /* word 408 (0x0660) Effect(0, 16, 0, 100, 0, 0, 0, 0, 0) */
	0x00640000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 412 (0x0670) ftMotionCommandSetHitStatusAll(3) */
	0x04000028, /* word 413 (0x0674) ftMotionCommandWait(40) */
	0x74000001, /* word 414 (0x0678) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 415 (0x067C) ftMotionCommandEnd() */
	0x08000002, /* word 416 (0x0680) ftMotionCommandWaitAsync(2) */
	0x58000001, /* word 417 (0x0684) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 418 (0x0688) ftMotionCommandEnd() */
	0x08000004, /* word 419 (0x068C) ftMotionCommandWaitAsync(4) */
	0x58000001, /* word 420 (0x0690) ftMotionCommandSetFlag1(1) */
	0x08000029, /* word 421 (0x0694) ftMotionCommandWaitAsync(41) */
	0xBC000004, /* word 422 (0x0698) ftMotionCommandSetSlopeContour(4) */
	0x00000000, /* word 423 (0x069C) ftMotionCommandEnd() */
	0x08000007, /* word 424 (0x06A0) ftMotionCommandWaitAsync(7) */
	0x54000001, /* word 425 (0x06A4) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 426 (0x06A8) ftMotionCommandEnd() */
	0x08000004, /* word 427 (0x06AC) ftMotionCommandWaitAsync(4) */
	0x98004C00, /* word 428 (0x06B0) Effect(0, 19, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 432 (0x06C0) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 433 (0x06C4) ftMotionCommandEnd() */
	0x0800000E, /* word 434 (0x06C8) ftMotionCommandWaitAsync(14) */
	0x98002C00, /* word 435 (0x06CC) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 439 (0x06DC) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 440 (0x06E0) ftMotionCommandEnd() */
	0x60000006, /* word 441 (0x06E4) ftMotionCommandSetFlag3(6) */
	0x90000000, /* word 442 (0x06E8) Goto */
	0x01D401B2, /* -> word 434 (0x06C8) */
	0x0800000A, /* word 444 (0x06F0) ftMotionCommandWaitAsync(10) */
	0x98002C00, /* word 445 (0x06F4) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 449 (0x0704) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 450 (0x0708) ftMotionCommandEnd() */
	0x08000006, /* word 451 (0x070C) ftMotionCommandWaitAsync(6) */
	0x98002C00, /* word 452 (0x0710) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 456 (0x0720) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 457 (0x0724) ftMotionCommandEnd() */
	0x0800000E, /* word 458 (0x0728) ftMotionCommandWaitAsync(14) */
	0x50000000, /* word 459 (0x072C) ftMotionCommandPlaySmashVoice(0) */
	0x98004C00, /* word 460 (0x0730) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x54000001, /* word 464 (0x0740) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 465 (0x0744) ftMotionCommandEnd() */
	0x60000006, /* word 466 (0x0748) ftMotionCommandSetFlag3(6) */
	0x90000000, /* word 467 (0x074C) Goto */
	0x01EE01CA, /* -> word 458 (0x0728) */
	0x0800000A, /* word 469 (0x0754) ftMotionCommandWaitAsync(10) */
	0x50000000, /* word 470 (0x0758) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 471 (0x075C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 475 (0x076C) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 476 (0x0770) ftMotionCommandEnd() */
	0x08000006, /* word 477 (0x0774) ftMotionCommandWaitAsync(6) */
	0x50000000, /* word 478 (0x0778) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 479 (0x077C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 483 (0x078C) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 484 (0x0790) ftMotionCommandEnd() */
	0x08000006, /* word 485 (0x0794) ftMotionCommandWaitAsync(6) */
	0x98002C00, /* word 486 (0x0798) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 490 (0x07A8) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 491 (0x07AC) ftMotionCommandEnd() */
	0x60000004, /* word 492 (0x07B0) ftMotionCommandSetFlag3(4) */
	0x90000000, /* word 493 (0x07B4) Goto */
	0x020701E5, /* -> word 485 (0x0794) */
	0x08000006, /* word 495 (0x07BC) ftMotionCommandWaitAsync(6) */
	0x98002C00, /* word 496 (0x07C0) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 500 (0x07D0) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 501 (0x07D4) ftMotionCommandEnd() */
	0x08000006, /* word 502 (0x07D8) ftMotionCommandWaitAsync(6) */
	0x98002C00, /* word 503 (0x07DC) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 507 (0x07EC) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 508 (0x07F0) ftMotionCommandEnd() */
	0x08000006, /* word 509 (0x07F4) ftMotionCommandWaitAsync(6) */
	0x50000000, /* word 510 (0x07F8) ftMotionCommandPlaySmashVoice(0) */
	0x98004000, /* word 511 (0x07FC) Effect(0, 16, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 515 (0x080C) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 516 (0x0810) ftMotionCommandEnd() */
	0x60000004, /* word 517 (0x0814) ftMotionCommandSetFlag3(4) */
	0x90000000, /* word 518 (0x0818) Goto */
	0x021F01FD, /* -> word 509 (0x07F4) */
	0x08000006, /* word 520 (0x0820) ftMotionCommandWaitAsync(6) */
	0x50000000, /* word 521 (0x0824) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 522 (0x0828) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 526 (0x0838) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 527 (0x083C) ftMotionCommandEnd() */
	0x08000006, /* word 528 (0x0840) ftMotionCommandWaitAsync(6) */
	0x50000000, /* word 529 (0x0844) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 530 (0x0848) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 534 (0x0858) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 535 (0x085C) ftMotionCommandEnd() */
	0xBC000004, /* word 536 (0x0860) ftMotionCommandSetSlopeContour(4) */
	0x08000014, /* word 537 (0x0864) ftMotionCommandWaitAsync(20) */
	0x54000001, /* word 538 (0x0868) ftMotionCommandSetFlag0(1) */
	0xBC000000, /* word 539 (0x086C) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 540 (0x0870) ftMotionCommandEnd() */
	0x6000000A, /* word 541 (0x0874) ftMotionCommandSetFlag3(10) */
	0x90000000, /* word 542 (0x0878) Goto */
	0x02270218, /* -> word 536 (0x0860) */
	0xBC000004, /* word 544 (0x0880) ftMotionCommandSetSlopeContour(4) */
	0x08000014, /* word 545 (0x0884) ftMotionCommandWaitAsync(20) */
	0x54000001, /* word 546 (0x0888) ftMotionCommandSetFlag0(1) */
	0xBC000000, /* word 547 (0x088C) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 548 (0x0890) ftMotionCommandEnd() */
	0x60000006, /* word 549 (0x0894) ftMotionCommandSetFlag3(6) */
	0x90000000, /* word 550 (0x0898) Goto */
	0x02F80220, /* -> word 544 (0x0880) */
	0x08000004, /* word 552 (0x08A0) ftMotionCommandWaitAsync(4) */
	0xCC040000, /* word 553 (0x08A4) ftMotionCommandSetAfterImage(1, 0) */
	0x08000005, /* word 554 (0x08A8) ftMotionCommandWaitAsync(5) */
	0xBC000004, /* word 555 (0x08AC) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 556 (0x08B0) Subroutine */
	0x023A0000, /* extern -> 0x0 */
	0x04000004, /* word 558 (0x08B8) ftMotionCommandWait(4) */
	0xCC03FFFF, /* word 559 (0x08BC) ftMotionCommandSetAfterImage(0, -1) */
	0x04000004, /* word 560 (0x08C0) ftMotionCommandWait(4) */
	0x18000000, /* word 561 (0x08C4) ftMotionCommandClearAttackCollAll() */
	0x08000012, /* word 562 (0x08C8) ftMotionCommandWaitAsync(18) */
	0xBC000000, /* word 563 (0x08CC) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 564 (0x08D0) ftMotionCommandEnd() */
	0x08000007, /* word 565 (0x08D4) ftMotionCommandWaitAsync(7) */
	0xCC040000, /* word 566 (0x08D8) ftMotionCommandSetAfterImage(1, 0) */
	0x08000009, /* word 567 (0x08DC) ftMotionCommandWaitAsync(9) */
	0xBC000004, /* word 568 (0x08E0) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 569 (0x08E4) Subroutine */
	0x02480019, /* extern -> 0x64 */
	0x04000007, /* word 571 (0x08EC) ftMotionCommandWait(7) */
	0x18000000, /* word 572 (0x08F0) ftMotionCommandClearAttackCollAll() */
	0x04000003, /* word 573 (0x08F4) ftMotionCommandWait(3) */
	0xCC03FFFF, /* word 574 (0x08F8) ftMotionCommandSetAfterImage(0, -1) */
	0x0800001A, /* word 575 (0x08FC) ftMotionCommandWaitAsync(26) */
	0xBC000000, /* word 576 (0x0900) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 577 (0x0904) ftMotionCommandEnd() */
	0xBC000004, /* word 578 (0x0908) ftMotionCommandSetSlopeContour(4) */
	0x50000000, /* word 579 (0x090C) ftMotionCommandPlaySmashVoice(0) */
	0x0800000F, /* word 580 (0x0910) ftMotionCommandWaitAsync(15) */
	0xCC040000, /* word 581 (0x0914) ftMotionCommandSetAfterImage(1, 0) */
	0x08000013, /* word 582 (0x0918) ftMotionCommandWaitAsync(19) */
	0x88000000, /* word 583 (0x091C) Subroutine */
	0x02550032, /* extern -> 0xC8 */
	0x04000005, /* word 585 (0x0924) ftMotionCommandWait(5) */
	0xCC03FFFF, /* word 586 (0x0928) ftMotionCommandSetAfterImage(0, -1) */
	0x04000007, /* word 587 (0x092C) ftMotionCommandWait(7) */
	0x18000000, /* word 588 (0x0930) ftMotionCommandClearAttackCollAll() */
	0x08000026, /* word 589 (0x0934) ftMotionCommandWaitAsync(38) */
	0xBC000000, /* word 590 (0x0938) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 591 (0x093C) ftMotionCommandEnd() */
	0xBC000004, /* word 592 (0x0940) ftMotionCommandSetSlopeContour(4) */
	0x08000001, /* word 593 (0x0944) ftMotionCommandWaitAsync(1) */
	0xCC040000, /* word 594 (0x0948) ftMotionCommandSetAfterImage(1, 0) */
	0x08000004, /* word 595 (0x094C) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 596 (0x0950) Subroutine */
	0x0260004B, /* extern -> 0x12C */
	0x04000001, /* word 598 (0x0958) ftMotionCommandWait(1) */
	0xCC03FFFF, /* word 599 (0x095C) ftMotionCommandSetAfterImage(0, -1) */
	0x04000015, /* word 600 (0x0960) ftMotionCommandWait(21) */
	0x18000000, /* word 601 (0x0964) ftMotionCommandClearAttackCollAll() */
	0x08000026, /* word 602 (0x0968) ftMotionCommandWaitAsync(38) */
	0xBC000000, /* word 603 (0x096C) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 604 (0x0970) ftMotionCommandEnd() */
	0x08000005, /* word 605 (0x0974) ftMotionCommandWaitAsync(5) */
	0xBC000004, /* word 606 (0x0978) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 607 (0x097C) Subroutine */
	0x02690068, /* extern -> 0x1A0 */
	0x04000008, /* word 609 (0x0984) ftMotionCommandWait(8) */
	0x18000000, /* word 610 (0x0988) ftMotionCommandClearAttackCollAll() */
	0x08000012, /* word 611 (0x098C) ftMotionCommandWaitAsync(18) */
	0xBC000000, /* word 612 (0x0990) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 613 (0x0994) ftMotionCommandEnd() */
	0x08000009, /* word 614 (0x0998) ftMotionCommandWaitAsync(9) */
	0xBC000004, /* word 615 (0x099C) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 616 (0x09A0) Subroutine */
	0x0277007D, /* extern -> 0x1F4 */
	0x04000007, /* word 618 (0x09A8) ftMotionCommandWait(7) */
	0x18000000, /* word 619 (0x09AC) ftMotionCommandClearAttackCollAll() */
	0x0800001A, /* word 620 (0x09B0) ftMotionCommandWaitAsync(26) */
	0xBC000000, /* word 621 (0x09B4) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 622 (0x09B8) ftMotionCommandEnd() */
	0xC4000007, /* word 623 (0x09BC) ftMotionCommandMakeRumble(0, 7) */
	0xAC000004, /* word 624 (0x09C0) ftMotionCommandSetTexturePartID(4) */
	0xAC100004, /* word 625 (0x09C4) ftMotionCommandSetTexturePartID(1048580) */
	0xBC000004, /* word 626 (0x09C8) ftMotionCommandSetSlopeContour(4) */
	0x50000000, /* word 627 (0x09CC) ftMotionCommandPlaySmashVoice(0) */
	0xB1300028, /* word 628 (0x09D0) ftMotionCommandSetColAnim(76, 40) */
	0x08000013, /* word 629 (0x09D4) ftMotionCommandWaitAsync(19) */
	0x88000000, /* word 630 (0x09D8) Subroutine */
	0x02800092, /* extern -> 0x248 */
	0x04000008, /* word 632 (0x09E0) ftMotionCommandWait(8) */
	0x18000000, /* word 633 (0x09E4) ftMotionCommandClearAttackCollAll() */
	0x08000026, /* word 634 (0x09E8) ftMotionCommandWaitAsync(38) */
	0xBC000000, /* word 635 (0x09EC) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 636 (0x09F0) ftMotionCommandEnd() */
	0xBC000004, /* word 637 (0x09F4) ftMotionCommandSetSlopeContour(4) */
	0x08000004, /* word 638 (0x09F8) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 639 (0x09FC) Subroutine */
	0x028B00AC, /* extern -> 0x2B0 */
	0x04000016, /* word 641 (0x0A04) ftMotionCommandWait(22) */
	0x18000000, /* word 642 (0x0A08) ftMotionCommandClearAttackCollAll() */
	0x08000026, /* word 643 (0x0A0C) ftMotionCommandWaitAsync(38) */
	0xBC000000, /* word 644 (0x0A10) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 645 (0x0A14) ftMotionCommandEnd() */
	0xAC000004, /* word 646 (0x0A18) ftMotionCommandSetTexturePartID(4) */
	0xAC100004, /* word 647 (0x0A1C) ftMotionCommandSetTexturePartID(1048580) */
	0x08000005, /* word 648 (0x0A20) ftMotionCommandWaitAsync(5) */
	0xBC000004, /* word 649 (0x0A24) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 650 (0x0A28) Subroutine */
	0x029600C9, /* extern -> 0x324 */
	0x04000008, /* word 652 (0x0A30) ftMotionCommandWait(8) */
	0x18000000, /* word 653 (0x0A34) ftMotionCommandClearAttackCollAll() */
	0x08000012, /* word 654 (0x0A38) ftMotionCommandWaitAsync(18) */
	0xBC000000, /* word 655 (0x0A3C) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 656 (0x0A40) ftMotionCommandEnd() */
	0xAC000004, /* word 657 (0x0A44) ftMotionCommandSetTexturePartID(4) */
	0xAC100004, /* word 658 (0x0A48) ftMotionCommandSetTexturePartID(1048580) */
	0x08000009, /* word 659 (0x0A4C) ftMotionCommandWaitAsync(9) */
	0xBC000004, /* word 660 (0x0A50) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 661 (0x0A54) Subroutine */
	0x02A100DE, /* extern -> 0x378 */
	0x04000007, /* word 663 (0x0A5C) ftMotionCommandWait(7) */
	0x18000000, /* word 664 (0x0A60) ftMotionCommandClearAttackCollAll() */
	0x0800001A, /* word 665 (0x0A64) ftMotionCommandWaitAsync(26) */
	0xBC000000, /* word 666 (0x0A68) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 667 (0x0A6C) ftMotionCommandEnd() */
	0xAC000004, /* word 668 (0x0A70) ftMotionCommandSetTexturePartID(4) */
	0xAC100004, /* word 669 (0x0A74) ftMotionCommandSetTexturePartID(1048580) */
	0xBC000004, /* word 670 (0x0A78) ftMotionCommandSetSlopeContour(4) */
	0x08000013, /* word 671 (0x0A7C) ftMotionCommandWaitAsync(19) */
	0x88000000, /* word 672 (0x0A80) Subroutine */
	0x02AC00F3, /* extern -> 0x3CC */
	0x0400000C, /* word 674 (0x0A88) ftMotionCommandWait(12) */
	0x18000000, /* word 675 (0x0A8C) ftMotionCommandClearAttackCollAll() */
	0x08000026, /* word 676 (0x0A90) ftMotionCommandWaitAsync(38) */
	0xBC000000, /* word 677 (0x0A94) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 678 (0x0A98) ftMotionCommandEnd() */
	0xAC000004, /* word 679 (0x0A9C) ftMotionCommandSetTexturePartID(4) */
	0xAC100004, /* word 680 (0x0AA0) ftMotionCommandSetTexturePartID(1048580) */
	0xBC000004, /* word 681 (0x0AA4) ftMotionCommandSetSlopeContour(4) */
	0x08000004, /* word 682 (0x0AA8) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 683 (0x0AAC) Subroutine */
	0x02B6010C, /* extern -> 0x430 */
	0x04000016, /* word 685 (0x0AB4) ftMotionCommandWait(22) */
	0x18000000, /* word 686 (0x0AB8) ftMotionCommandClearAttackCollAll() */
	0x08000026, /* word 687 (0x0ABC) ftMotionCommandWaitAsync(38) */
	0xBC000000, /* word 688 (0x0AC0) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 689 (0x0AC4) ftMotionCommandEnd() */
	0xB12C000D, /* word 690 (0x0AC8) ftMotionCommandSetColAnim(75, 13) */
	0x08000005, /* word 691 (0x0ACC) ftMotionCommandWaitAsync(5) */
	0xBC000004, /* word 692 (0x0AD0) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 693 (0x0AD4) Subroutine */
	0x02C00125, /* extern -> 0x494 */
	0x04000008, /* word 695 (0x0ADC) ftMotionCommandWait(8) */
	0x18000000, /* word 696 (0x0AE0) ftMotionCommandClearAttackCollAll() */
	0x08000012, /* word 697 (0x0AE4) ftMotionCommandWaitAsync(18) */
	0xBC000000, /* word 698 (0x0AE8) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 699 (0x0AEC) ftMotionCommandEnd() */
	0xB12C0011, /* word 700 (0x0AF0) ftMotionCommandSetColAnim(75, 17) */
	0x08000009, /* word 701 (0x0AF4) ftMotionCommandWaitAsync(9) */
	0xBC000004, /* word 702 (0x0AF8) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 703 (0x0AFC) Subroutine */
	0x02CD013E, /* extern -> 0x4F8 */
	0x0800000A, /* word 705 (0x0B04) ftMotionCommandWaitAsync(10) */
	0x54000001, /* word 706 (0x0B08) ftMotionCommandSetFlag0(1) */
	0x04000007, /* word 707 (0x0B0C) ftMotionCommandWait(7) */
	0x18000000, /* word 708 (0x0B10) ftMotionCommandClearAttackCollAll() */
	0x08000026, /* word 709 (0x0B14) ftMotionCommandWaitAsync(38) */
	0xBC000000, /* word 710 (0x0B18) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 711 (0x0B1C) ftMotionCommandEnd() */
	0xBC000004, /* word 712 (0x0B20) ftMotionCommandSetSlopeContour(4) */
	0xB12C0020, /* word 713 (0x0B24) ftMotionCommandSetColAnim(75, 32) */
	0x50000000, /* word 714 (0x0B28) ftMotionCommandPlaySmashVoice(0) */
	0x08000013, /* word 715 (0x0B2C) ftMotionCommandWaitAsync(19) */
	0x88000000, /* word 716 (0x0B30) Subroutine */
	0x02D90157, /* extern -> 0x55C */
	0x08000015, /* word 718 (0x0B38) ftMotionCommandWaitAsync(21) */
	0x54000002, /* word 719 (0x0B3C) ftMotionCommandSetFlag0(2) */
	0x0400000C, /* word 720 (0x0B40) ftMotionCommandWait(12) */
	0x18000000, /* word 721 (0x0B44) ftMotionCommandClearAttackCollAll() */
	0x08000026, /* word 722 (0x0B48) ftMotionCommandWaitAsync(38) */
	0xBC000000, /* word 723 (0x0B4C) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 724 (0x0B50) ftMotionCommandEnd() */
	0xBC000004, /* word 725 (0x0B54) ftMotionCommandSetSlopeContour(4) */
	0xB12C001A, /* word 726 (0x0B58) ftMotionCommandSetColAnim(75, 26) */
	0x08000004, /* word 727 (0x0B5C) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 728 (0x0B60) Subroutine */
	0x02F40170, /* extern -> 0x5C0 */
	0x04000016, /* word 730 (0x0B68) ftMotionCommandWait(22) */
	0x18000000, /* word 731 (0x0B6C) ftMotionCommandClearAttackCollAll() */
	0x08000026, /* word 732 (0x0B70) ftMotionCommandWaitAsync(38) */
	0xBC000000, /* word 733 (0x0B74) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 734 (0x0B78) ftMotionCommandEnd() */
	0xAC000005, /* word 735 (0x0B7C) ftMotionCommandSetTexturePartID(5) */
	0xAC100004, /* word 736 (0x0B80) ftMotionCommandSetTexturePartID(1048580) */
	0x0800000A, /* word 737 (0x0B84) ftMotionCommandWaitAsync(10) */
	0x54000001, /* word 738 (0x0B88) ftMotionCommandSetFlag0(1) */
	0x04000001, /* word 739 (0x0B8C) ftMotionCommandWait(1) */
	0xAC000000, /* word 740 (0x0B90) ftMotionCommandSetTexturePartID(0) */
	0xAC100000, /* word 741 (0x0B94) ftMotionCommandSetTexturePartID(1048576) */
	0x00000000, /* word 742 (0x0B98) ftMotionCommandEnd() */
	0xAC000004, /* word 743 (0x0B9C) ftMotionCommandSetTexturePartID(4) */
	0xAC100004, /* word 744 (0x0BA0) ftMotionCommandSetTexturePartID(1048580) */
	0x0800000A, /* word 745 (0x0BA4) ftMotionCommandWaitAsync(10) */
	0x54000001, /* word 746 (0x0BA8) ftMotionCommandSetFlag0(1) */
	0x04000001, /* word 747 (0x0BAC) ftMotionCommandWait(1) */
	0xAC000000, /* word 748 (0x0BB0) ftMotionCommandSetTexturePartID(0) */
	0xAC100000, /* word 749 (0x0BB4) ftMotionCommandSetTexturePartID(1048576) */
	0x00000000, /* word 750 (0x0BB8) ftMotionCommandEnd() */
	0xC4000007, /* word 751 (0x0BBC) ftMotionCommandMakeRumble(0, 7) */
	0xBC000004, /* word 752 (0x0BC0) ftMotionCommandSetSlopeContour(4) */
	0xAC000004, /* word 753 (0x0BC4) ftMotionCommandSetTexturePartID(4) */
	0xAC100004, /* word 754 (0x0BC8) ftMotionCommandSetTexturePartID(1048580) */
	0x88000000, /* word 755 (0x0BCC) Subroutine */
	0x03C1018D, /* extern -> 0x634 */
	0x04000010, /* word 757 (0x0BD4) ftMotionCommandWait(16) */
	0x18000000, /* word 758 (0x0BD8) ftMotionCommandClearAttackCollAll() */
	0x90000000, /* word 759 (0x0BDC) Goto */
	0x030602EF, /* -> word 751 (0x0BBC) */
	0xB0AC0000, /* word 761 (0x0BE4) ftMotionCommandSetColAnim(43, 0) */
	0x98007C00, /* word 762 (0x0BE8) Effect(0, 31, 0, 0, 0, 120, 200, 200, 200) */
	0x00000000,
	0x007800C8,
	0x00C800C8,
	0x8000000A, /* word 766 (0x0BF8) ftMotionCommandLoopBegin(10) */
	0x98002800, /* word 767 (0x0BFC) Effect(0, 10, 0, 0, 0, 120, 200, 200, 200) */
	0x00000000,
	0x007800C8,
	0x00C800C8,
	0x04000004, /* word 771 (0x0C0C) ftMotionCommandWait(4) */
	0x84000000, /* word 772 (0x0C10) ftMotionCommandLoopEnd() */
	0x90000000, /* word 773 (0x0C14) Goto */
	0x030E02F9, /* -> word 761 (0x0BE4) */
	0x9BF88800, /* word 775 (0x0C1C) Effect(-1, 34, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x44000232, /* word 779 (0x0C2C) ftMotionPlayVoice(562) */
	0x74000003, /* word 780 (0x0C30) ftMotionCommandSetHitStatusAll(3) */
	0x90000000, /* word 781 (0x0C34) Goto */
	0x031002F9, /* -> word 761 (0x0BE4) */
	0x90000000, /* word 783 (0x0C3C) Goto */
	0x032802F9, /* -> word 761 (0x0BE4) */
	0x9BF88400, /* word 785 (0x0C44) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x98003400, /* word 789 (0x0C54) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 793 (0x0C64) ftMotionCommandEnd() */
	0xBC000003, /* word 794 (0x0C68) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 795 (0x0C6C) ftMotionCommandEnd() */
	0xAC000004, /* word 796 (0x0C70) ftMotionCommandSetTexturePartID(4) */
	0xAC100004, /* word 797 (0x0C74) ftMotionCommandSetTexturePartID(1048580) */
	0xBC000003, /* word 798 (0x0C78) ftMotionCommandSetSlopeContour(3) */
	0x44000233, /* word 799 (0x0C7C) ftMotionPlayVoice(563) */
	0x80000078, /* word 800 (0x0C80) ftMotionCommandLoopBegin(120) */
	0x9800A000, /* word 801 (0x0C84) Effect(0, 40, 0, 0, 130, 0, 240, 240, 240) */
	0x00000082,
	0x000000F0,
	0x00F000F0,
	0x0400000A, /* word 805 (0x0C94) ftMotionCommandWait(10) */
	0x84000000, /* word 806 (0x0C98) ftMotionCommandLoopEnd() */
	0x90000000, /* word 807 (0x0C9C) Goto */
	0x0333031C, /* -> word 796 (0x0C70) */
	0x48000239, /* word 809 (0x0CA4) ftMotionPlayInterruptableVoice(569) */
	0xAC000005, /* word 810 (0x0CA8) ftMotionCommandSetTexturePartID(5) */
	0xAC100005, /* word 811 (0x0CAC) ftMotionCommandSetTexturePartID(1048581) */
	0xBC000003, /* word 812 (0x0CB0) ftMotionCommandSetSlopeContour(3) */
	0x98016800, /* word 813 (0x0CB4) Effect(0, 90, 0, 0, 130, 0, 240, 240, 240) */
	0x00000082,
	0x000000F0,
	0x00F000F0,
	0x0400000A, /* word 817 (0x0CC4) ftMotionCommandWait(10) */
	0x90000000, /* word 818 (0x0CC8) Goto */
	0x03450329, /* -> word 809 (0x0CA4) */
	0xFFFFFFFF, /* word 820 (0x0CD0) data */
	0x00000006, /* word 821 (0x0CD4) data */
	0x00000169, /* word 822 (0x0CD8) data */
	0x00000064, /* word 823 (0x0CDC) data */
	0x00000000, /* word 824 (0x0CE0) data */
	0x00000000, /* word 825 (0x0CE4) data */
	0x00000000, /* word 826 (0x0CE8) data */
	0xFFFFFFFF, /* word 827 (0x0CEC) data */
	0x00000006, /* word 828 (0x0CF0) data */
	0x00000169, /* word 829 (0x0CF4) data */
	0x00000064, /* word 830 (0x0CF8) data */
	0x00000000, /* word 831 (0x0CFC) data */
	0x00000000, /* word 832 (0x0D00) data */
	0x00000000, /* word 833 (0x0D04) data */
	0xAC000004, /* word 834 (0x0D08) ftMotionCommandSetTexturePartID(4) */
	0xAC100004, /* word 835 (0x0D0C) ftMotionCommandSetTexturePartID(1048580) */
	0x30000000, /* word 836 (0x0D10) SetThrow */
	0x03680334, /* -> word 820 (0x0CD0) */
	0x98002C00, /* word 838 (0x0D18) Effect(0, 11, 0, 0, 0, -120, 0, 60, 0) */
	0x00000000,
	0xFF880000,
	0x003C0000,
	0x08000006, /* word 842 (0x0D28) ftMotionCommandWaitAsync(6) */
	0x0C03A030, /* word 843 (0x0D2C) MakeAttackColl(0, 0, 29, 1, 1, 0, 240, 0, 0, -30, 361, 100, 0, 3, 0, 1, 0, 0) */
	0x00F00000,
	0x0000FFE2,
	0x5A464003,
	0x00200000,
	0x0C83A030, /* word 848 (0x0D40) MakeAttackColl(1, 0, 29, 1, 1, 0, 160, 0, 0, -160, 361, 100, 0, 3, 0, 1, 0, 0) */
	0x00A00000,
	0x0000FF60,
	0x5A464003,
	0x00200000,
	0x38000013, /* word 853 (0x0D54) ftMotionPlayFGM(19) */
	0x04000001, /* word 854 (0x0D58) ftMotionCommandWait(1) */
	0x18000000, /* word 855 (0x0D5C) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 856 (0x0D60) ftMotionCommandEnd() */
	0x00000037, /* word 857 (0x0D64) data */
	0x0000000E, /* word 858 (0x0D68) data */
	0x0000005A, /* word 859 (0x0D6C) data */
	0x00000032, /* word 860 (0x0D70) data */
	0x00000000, /* word 861 (0x0D74) data */
	0x0000005A, /* word 862 (0x0D78) data */
	0x00000000, /* word 863 (0x0D7C) data */
	0xFFFFFFFF, /* word 864 (0x0D80) data */
	0x00000006, /* word 865 (0x0D84) data */
	0x00000169, /* word 866 (0x0D88) data */
	0x00000064, /* word 867 (0x0D8C) data */
	0x00000000, /* word 868 (0x0D90) data */
	0x00000000, /* word 869 (0x0D94) data */
	0x00000000, /* word 870 (0x0D98) data */
	0x30000000, /* word 871 (0x0D9C) SetThrow */
	0x03A40359, /* -> word 857 (0x0D64) */
	0x50000000, /* word 873 (0x0DA4) ftMotionCommandPlaySmashVoice(0) */
	0x04000004, /* word 874 (0x0DA8) ftMotionCommandWait(4) */
	0x74000002, /* word 875 (0x0DAC) ftMotionCommandSetHitStatusAll(2) */
	0x08000008, /* word 876 (0x0DB0) ftMotionCommandWaitAsync(8) */
	0x38000012, /* word 877 (0x0DB4) ftMotionPlayFGM(18) */
	0x9800A400, /* word 878 (0x0DB8) Effect(0, 41, 0, 0, 200, 280, 0, 0, 0) */
	0x000000C8,
	0x01180000,
	0x00000000,
	0x98004C00, /* word 882 (0x0DC8) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x9BF88400, /* word 886 (0x0DD8) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x5C000001, /* word 890 (0x0DE8) ftMotionCommandSetFlag2(1) */
	0x9800A400, /* word 891 (0x0DEC) Effect(0, 41, 0, 0, 0, 0, 200, 0, 200) */
	0x00000000,
	0x000000C8,
	0x000000C8,
	0x04000002, /* word 895 (0x0DFC) ftMotionCommandWait(2) */
	0x9800A400, /* word 896 (0x0E00) Effect(0, 41, 0, 0, 300, 0, 200, 0, 200) */
	0x0000012C,
	0x000000C8,
	0x000000C8,
	0x04000002, /* word 900 (0x0E10) ftMotionCommandWait(2) */
	0x9800A400, /* word 901 (0x0E14) Effect(0, 41, 0, 0, 600, 0, 200, 0, 200) */
	0x00000258,
	0x000000C8,
	0x000000C8,
	0x04000002, /* word 905 (0x0E24) ftMotionCommandWait(2) */
	0x9800A400, /* word 906 (0x0E28) Effect(0, 41, 0, 0, 900, 0, 200, 0, 200) */
	0x00000384,
	0x000000C8,
	0x000000C8,
	0x04000002, /* word 910 (0x0E38) ftMotionCommandWait(2) */
	0x9800A400, /* word 911 (0x0E3C) Effect(0, 41, 0, 0, 1200, 0, 200, 0, 200) */
	0x000004B0,
	0x000000C8,
	0x000000C8,
	0x74000001, /* word 915 (0x0E4C) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 916 (0x0E50) ftMotionCommandEnd() */
	0x00000034, /* word 917 (0x0E54) data */
	0x00000010, /* word 918 (0x0E58) data */
	0x0000002D, /* word 919 (0x0E5C) data */
	0x00000046, /* word 920 (0x0E60) data */
	0x00000000, /* word 921 (0x0E64) data */
	0x00000050, /* word 922 (0x0E68) data */
	0x00000000, /* word 923 (0x0E6C) data */
	0xFFFFFFFF, /* word 924 (0x0E70) data */
	0x00000008, /* word 925 (0x0E74) data */
	0x00000169, /* word 926 (0x0E78) data */
	0x00000064, /* word 927 (0x0E7C) data */
	0x00000000, /* word 928 (0x0E80) data */
	0x00000000, /* word 929 (0x0E84) data */
	0x00000000, /* word 930 (0x0E88) data */
	0x30000000, /* word 931 (0x0E8C) SetThrow */
	0x03CA0395, /* -> word 917 (0x0E54) */
	0x50000000, /* word 933 (0x0E94) ftMotionCommandPlaySmashVoice(0) */
	0x4C000012, /* word 934 (0x0E98) ftMotionCommandPlayFGMStoreInfo(18) */
	0x08000004, /* word 935 (0x0E9C) ftMotionCommandWaitAsync(4) */
	0x74000002, /* word 936 (0x0EA0) ftMotionCommandSetHitStatusAll(2) */
	0x08000013, /* word 937 (0x0EA4) ftMotionCommandWaitAsync(19) */
	0x3800000A, /* word 938 (0x0EA8) ftMotionPlayFGM(10) */
	0x98E87C00, /* word 939 (0x0EAC) Effect(29, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x98003C00, /* word 943 (0x0EBC) Effect(0, 15, 0, 0, 0, 150, 0, 0, 0) */
	0x00000000,
	0x00960000,
	0x00000000,
	0x98005800, /* word 947 (0x0ECC) Effect(0, 22, 0, 0, 0, -280, 0, 0, 0) */
	0x00000000,
	0xFEE80000,
	0x00000000,
	0x9BF88400, /* word 951 (0x0EDC) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x08000018, /* word 955 (0x0EEC) ftMotionCommandWaitAsync(24) */
	0x5C000002, /* word 956 (0x0EF0) ftMotionCommandSetFlag2(2) */
	0x08000018, /* word 957 (0x0EF4) ftMotionCommandWaitAsync(24) */
	0x74000001, /* word 958 (0x0EF8) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 959 (0x0EFC) ftMotionCommandEnd() */
	0x88000000, /* word 960 (0x0F00) Subroutine */
	0x03C401AB, /* extern -> 0x6AC */
	0x00000000, /* word 962 (0x0F08) ftMotionCommandEnd() */
	0x88000000, /* word 963 (0x0F0C) Subroutine */
	0x03C701B1, /* extern -> 0x6C4 */
	0x00000000, /* word 965 (0x0F14) ftMotionCommandEnd() */
	0x88000000, /* word 966 (0x0F18) Subroutine */
	0x03CC01B3, /* extern -> 0x6CC */
	0x00000000, /* word 968 (0x0F20) ftMotionCommandEnd() */
	0x88000000, /* word 969 (0x0F24) Subroutine */
	0x03CF008B, /* -> word 139 (0x022C) */
	0x88000000, /* word 971 (0x0F2C) Subroutine */
	0x03D101BC, /* extern -> 0x6F0 */
	0x00000000, /* word 973 (0x0F34) ftMotionCommandEnd() */
	0x88000000, /* word 974 (0x0F38) Subroutine */
	0x03D7008B, /* -> word 139 (0x022C) */
	0x88000000, /* word 976 (0x0F40) Subroutine */
	0xFFFF01C3, /* extern -> 0x70C */
	0x00000000, /* word 978 (0x0F48) ftMotionCommandEnd() */
	0x4400022D, /* word 979 (0x0F4C) ftMotionPlayVoice(557) */
	0xC4000006, /* word 980 (0x0F50) ftMotionCommandMakeRumble(0, 6) */
	0x0400000A, /* word 981 (0x0F54) ftMotionCommandWait(10) */
	0x88000000, /* word 982 (0x0F58) Subroutine */
	0x03DA0000, /* -> word 0 (0x0000) */
	0x04000014, /* word 984 (0x0F60) ftMotionCommandWait(20) */
	0x88000000, /* word 985 (0x0F64) Subroutine */
	0x04010000, /* -> word 0 (0x0000) */
	0x0800003C, /* word 987 (0x0F6C) ftMotionCommandWaitAsync(60) */
	0x58000001, /* word 988 (0x0F70) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 989 (0x0F74) ftMotionCommandEnd() */
	0x08000005, /* word 990 (0x0F78) ftMotionCommandWaitAsync(5) */
	0x0C016070, /* word 991 (0x0F7C) MakeAttackColl(0, 0, 11, 3, 1, 0, 210, -50, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8) */
	0x00D2FFCE,
	0x00000000,
	0x5A432003,
	0x00000400,
	0x0C816070, /* word 996 (0x0F90) MakeAttackColl(1, 0, 11, 3, 1, 0, 210, 70, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8) */
	0x00D20046,
	0x00000000,
	0x5A432003,
	0x00000400,
	0x4C00002B, /* word 1001 (0x0FA4) ftMotionCommandPlayFGMStoreInfo(43) */
	0x04000002, /* word 1002 (0x0FA8) ftMotionCommandWait(2) */
	0x18000000, /* word 1003 (0x0FAC) ftMotionCommandClearAttackCollAll() */
	0x0800000A, /* word 1004 (0x0FB0) ftMotionCommandWaitAsync(10) */
	0x58000001, /* word 1005 (0x0FB4) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 1006 (0x0FB8) ftMotionCommandEnd() */
	0x08000005, /* word 1007 (0x0FBC) ftMotionCommandWaitAsync(5) */
	0x0C01E090, /* word 1008 (0x0FC0) MakeAttackColl(0, 0, 15, 4, 1, 0, 210, -50, 0, 0, 70, 50, 0, 3, 0, 1, 0, 8) */
	0x00D2FFCE,
	0x00000000,
	0x11832003,
	0x00200400,
	0x0C81E090, /* word 1013 (0x0FD4) MakeAttackColl(1, 0, 15, 4, 1, 0, 210, 70, 0, 0, 70, 50, 0, 3, 0, 1, 0, 8) */
	0x00D20046,
	0x00000000,
	0x11832003,
	0x00200400,
	0x4C00002A, /* word 1018 (0x0FE8) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000003, /* word 1019 (0x0FEC) ftMotionCommandWait(3) */
	0x18000000, /* word 1020 (0x0FF0) ftMotionCommandClearAttackCollAll() */
	0x08000008, /* word 1021 (0x0FF4) ftMotionCommandWaitAsync(8) */
	0x00000000, /* word 1022 (0x0FF8) ftMotionCommandEnd() */
	0x00000000, /* word 1023 (0x0FFC) ftMotionCommandEnd() */
	0x90000000, /* word 1024 (0x1000) Goto */
	0x057F0400, /* -> word 1024 (0x1000) */
	0x00000000, /* word 1026 (0x1008) ftMotionCommandEnd() */
	0x08000004, /* word 1027 (0x100C) ftMotionCommandWaitAsync(4) */
	0x4400022E, /* word 1028 (0x1010) ftMotionPlayVoice(558) */
	0x0C000150, /* word 1029 (0x1014) MakeAttackColl(0, 0, 0, 10, 1, 0, 260, 0, 150, 200, 361, 100, 0, 3, 1, 2, 1, 10) */
	0x01040000,
	0x009600C8,
	0x5A464003,
	0x01420500,
	0x98004C00, /* word 1034 (0x1028) Effect(0, 19, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4C000029, /* word 1038 (0x1038) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000004, /* word 1039 (0x103C) ftMotionCommandWait(4) */
	0x20040000, /* word 1040 (0x1040) ftMotionCommandSetAttackCollDamage(0, 8) */
	0x08000012, /* word 1041 (0x1044) ftMotionCommandWaitAsync(18) */
	0x18000000, /* word 1042 (0x1048) ftMotionCommandClearAttackCollAll() */
	0xBC000004, /* word 1043 (0x104C) ftMotionCommandSetSlopeContour(4) */
	0x98004000, /* word 1044 (0x1050) Effect(0, 16, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x80000002, /* word 1048 (0x1060) ftMotionCommandLoopBegin(2) */
	0x04000008, /* word 1049 (0x1064) ftMotionCommandWait(8) */
	0x98002C00, /* word 1050 (0x1068) Effect(0, 11, 0, 0, 0, -120, 0, 60, 0) */
	0x00000000,
	0xFF880000,
	0x003C0000,
	0x84000000, /* word 1054 (0x1078) ftMotionCommandLoopEnd() */
	0xBC000000, /* word 1055 (0x107C) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 1056 (0x1080) ftMotionCommandEnd() */
	0x08000007, /* word 1057 (0x1084) ftMotionCommandWaitAsync(7) */
	0x0C02E110, /* word 1058 (0x1088) MakeAttackColl(0, 0, 23, 8, 1, 0, 250, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 5) */
	0x00FA0000,
	0x00000000,
	0x5A464003,
	0x00220280,
	0x0C82E110, /* word 1063 (0x109C) MakeAttackColl(1, 0, 23, 8, 1, 0, 250, 150, 0, 0, 361, 100, 0, 3, 0, 1, 1, 5) */
	0x00FA0096,
	0x00000000,
	0x5A464003,
	0x00220280,
	0x4C00002A, /* word 1068 (0x10B0) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000004, /* word 1069 (0x10B4) ftMotionCommandWait(4) */
	0x18000000, /* word 1070 (0x10B8) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1071 (0x10BC) ftMotionCommandEnd() */
	0x08000007, /* word 1072 (0x10C0) ftMotionCommandWaitAsync(7) */
	0x0C02E110, /* word 1073 (0x10C4) MakeAttackColl(0, 0, 23, 8, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 5) */
	0x00C80000,
	0x00000000,
	0x5A464003,
	0x00220280,
	0x0C82E110, /* word 1078 (0x10D8) MakeAttackColl(1, 0, 23, 8, 1, 0, 200, 150, 0, 0, 361, 100, 0, 3, 0, 1, 1, 5) */
	0x00C80096,
	0x00000000,
	0x5A464003,
	0x00220280,
	0x4C00002A, /* word 1083 (0x10EC) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000004, /* word 1084 (0x10F0) ftMotionCommandWait(4) */
	0x18000000, /* word 1085 (0x10F4) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1086 (0x10F8) ftMotionCommandEnd() */
	0x08000007, /* word 1087 (0x10FC) ftMotionCommandWaitAsync(7) */
	0x0C02E110, /* word 1088 (0x1100) MakeAttackColl(0, 0, 23, 8, 1, 0, 250, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 5) */
	0x00FA0000,
	0x00000000,
	0x5A464003,
	0x00220280,
	0x0C82E110, /* word 1093 (0x1114) MakeAttackColl(1, 0, 23, 8, 1, 0, 250, 150, 0, 0, 361, 100, 0, 3, 0, 1, 1, 5) */
	0x00FA0096,
	0x00000000,
	0x5A464003,
	0x00220280,
	0x4C00002A, /* word 1098 (0x1128) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000004, /* word 1099 (0x112C) ftMotionCommandWait(4) */
	0x18000000, /* word 1100 (0x1130) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1101 (0x1134) ftMotionCommandEnd() */
	0x08000007, /* word 1102 (0x1138) ftMotionCommandWaitAsync(7) */
	0x0C038150, /* word 1103 (0x113C) MakeAttackColl(0, 0, 28, 10, 1, 0, 280, 0, 0, 0, 85, 100, 0, 3, 0, 1, 1, 10) */
	0x01180000,
	0x00000000,
	0x15464003,
	0x00220500,
	0x0C838150, /* word 1108 (0x1150) MakeAttackColl(1, 0, 28, 10, 1, 0, 320, 140, 0, 0, 85, 100, 0, 3, 0, 1, 1, 10) */
	0x0140008C,
	0x00000000,
	0x15464003,
	0x00220500,
	0x4C00002A, /* word 1113 (0x1164) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000008, /* word 1114 (0x1168) ftMotionCommandWait(8) */
	0x18000000, /* word 1115 (0x116C) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1116 (0x1170) ftMotionCommandEnd() */
	0xBC000004, /* word 1117 (0x1174) ftMotionCommandSetSlopeContour(4) */
	0x0800000B, /* word 1118 (0x1178) ftMotionCommandWaitAsync(11) */
	0x0C02E150, /* word 1119 (0x117C) MakeAttackColl(0, 0, 23, 10, 1, 0, 200, 0, 0, 0, 70, 120, 0, 3, 0, 1, 1, 0) */
	0x00C80000,
	0x00000000,
	0x11878003,
	0x00220000,
	0x0C82E150, /* word 1124 (0x1190) MakeAttackColl(1, 0, 23, 10, 1, 0, 200, 140, 0, 0, 70, 120, 0, 3, 0, 1, 1, 0) */
	0x00C8008C,
	0x00000000,
	0x11878003,
	0x00220000,
	0x4C00002A, /* word 1129 (0x11A4) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000005, /* word 1130 (0x11A8) ftMotionCommandWait(5) */
	0x18000000, /* word 1131 (0x11AC) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1132 (0x11B0) ftMotionCommandEnd() */
	0xBC000003, /* word 1133 (0x11B4) ftMotionCommandSetSlopeContour(3) */
	0x0800000C, /* word 1134 (0x11B8) ftMotionCommandWaitAsync(12) */
	0x0C02E210, /* word 1135 (0x11BC) MakeAttackColl(0, 0, 23, 16, 1, 0, 280, 0, 0, 0, 361, 120, 0, 3, 1, 2, 1, 10) */
	0x01180000,
	0x00000000,
	0x5A478003,
	0x01420500,
	0x0C82E210, /* word 1140 (0x11D0) MakeAttackColl(1, 0, 23, 16, 1, 0, 280, 140, 0, 0, 361, 120, 0, 3, 1, 2, 1, 10) */
	0x0118008C,
	0x00000000,
	0x5A478003,
	0x01420500,
	0x98A87C00, /* word 1145 (0x11E4) Effect(21, 31, 0, 120, 0, 0, 0, 0, 0) */
	0x00780000,
	0x00000000,
	0x00000000,
	0x98004C00, /* word 1149 (0x11F4) Effect(0, 19, 0, 0, 0, -180, 0, 0, 0) */
	0x00000000,
	0xFF4C0000,
	0x00000000,
	0x4C000029, /* word 1153 (0x1204) ftMotionCommandPlayFGMStoreInfo(41) */
	0x50000000, /* word 1154 (0x1208) ftMotionCommandPlaySmashVoice(0) */
	0x04000003, /* word 1155 (0x120C) ftMotionCommandWait(3) */
	0x20050000, /* word 1156 (0x1210) ftMotionCommandSetAttackCollDamage(0, 10) */
	0x20850000, /* word 1157 (0x1214) ftMotionCommandSetAttackCollDamage(1, 10) */
	0x04000005, /* word 1158 (0x1218) ftMotionCommandWait(5) */
	0x18000000, /* word 1159 (0x121C) ftMotionCommandClearAttackCollAll() */
	0x0800001E, /* word 1160 (0x1220) ftMotionCommandWaitAsync(30) */
	0xBC000003, /* word 1161 (0x1224) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 1162 (0x1228) ftMotionCommandEnd() */
	0x08000008, /* word 1163 (0x122C) ftMotionCommandWaitAsync(8) */
	0x50000000, /* word 1164 (0x1230) ftMotionCommandPlaySmashVoice(0) */
	0x0C00A250, /* word 1165 (0x1234) MakeAttackColl(0, 0, 5, 18, 1, 0, 380, 0, 180, 0, 80, 130, 0, 3, 0, 2, 1, 22) */
	0x017C0000,
	0x00B40000,
	0x14082003,
	0x00420B00,
	0x0C80A250, /* word 1170 (0x1248) MakeAttackColl(1, 0, 5, 18, 1, 0, 280, 0, 0, 0, 80, 130, 0, 3, 0, 2, 1, 22) */
	0x01180000,
	0x00000000,
	0x14082003,
	0x00420B00,
	0x98D07C00, /* word 1175 (0x125C) Effect(26, 31, 0, 110, 0, 0, 0, 0, 0) */
	0x006E0000,
	0x00000000,
	0x00000000,
	0x98004C00, /* word 1179 (0x126C) Effect(0, 19, 0, 0, 0, -180, 0, 0, 0) */
	0x00000000,
	0xFF4C0000,
	0x00000000,
	0x4C000029, /* word 1183 (0x127C) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000004, /* word 1184 (0x1280) ftMotionCommandWait(4) */
	0x0C00A150, /* word 1185 (0x1284) MakeAttackColl(0, 0, 5, 10, 1, 0, 380, 0, 180, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x017C0000,
	0x00B40000,
	0x5A464003,
	0x00220500,
	0x0C80A150, /* word 1190 (0x1298) MakeAttackColl(1, 0, 5, 10, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x01040000,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x04000003, /* word 1195 (0x12AC) ftMotionCommandWait(3) */
	0x18000000, /* word 1196 (0x12B0) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1197 (0x12B4) ftMotionCommandEnd() */
	0x08000007, /* word 1198 (0x12B8) ftMotionCommandWaitAsync(7) */
	0xBC000004, /* word 1199 (0x12BC) ftMotionCommandSetSlopeContour(4) */
	0x70E00003, /* word 1200 (0x12C0) ftMotionCommandSetHitStatusPartID(28, 3) */
	0x70B80003, /* word 1201 (0x12C4) ftMotionCommandSetHitStatusPartID(23, 3) */
	0x50000000, /* word 1202 (0x12C8) ftMotionCommandPlaySmashVoice(0) */
	0x0C038210, /* word 1203 (0x12CC) MakeAttackColl(0, 0, 28, 16, 1, 0, 260, 200, 0, 0, 40, 100, 0, 3, 0, 2, 1, 20) */
	0x010400C8,
	0x00000000,
	0x0A064003,
	0x00420A00,
	0x0C82E210, /* word 1208 (0x12E0) MakeAttackColl(1, 0, 23, 16, 1, 0, 260, 200, 0, 0, 40, 100, 0, 3, 0, 2, 1, 20) */
	0x010400C8,
	0x00000000,
	0x0A064003,
	0x00420A00,
	0x0D00A210, /* word 1213 (0x12F4) MakeAttackColl(2, 0, 5, 16, 1, 0, 160, 100, 0, 0, 40, 100, 0, 3, 0, 2, 1, 20) */
	0x00A00064,
	0x00000000,
	0x0A064003,
	0x00420A00,
	0x98D07C00, /* word 1218 (0x1308) Effect(26, 31, 0, 90, 0, 0, 0, 0, 0) */
	0x005A0000,
	0x00000000,
	0x00000000,
	0x98A87C00, /* word 1222 (0x1318) Effect(21, 31, 0, 90, 0, 0, 0, 0, 0) */
	0x005A0000,
	0x00000000,
	0x00000000,
	0x98003400, /* word 1226 (0x1328) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4C000029, /* word 1230 (0x1338) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000004, /* word 1231 (0x133C) ftMotionCommandWait(4) */
	0x20050000, /* word 1232 (0x1340) ftMotionCommandSetAttackCollDamage(0, 10) */
	0x20850000, /* word 1233 (0x1344) ftMotionCommandSetAttackCollDamage(1, 10) */
	0x21050000, /* word 1234 (0x1348) ftMotionCommandSetAttackCollDamage(2, 10) */
	0x04000010, /* word 1235 (0x134C) ftMotionCommandWait(16) */
	0x6C000001, /* word 1236 (0x1350) ftMotionCommandSetHitStatusPartAll(1) */
	0x18000000, /* word 1237 (0x1354) ftMotionCommandClearAttackCollAll() */
	0x08000022, /* word 1238 (0x1358) ftMotionCommandWaitAsync(34) */
	0xBC000000, /* word 1239 (0x135C) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 1240 (0x1360) ftMotionCommandEnd() */
	0x08000006, /* word 1241 (0x1364) ftMotionCommandWaitAsync(6) */
	0x58000032, /* word 1242 (0x1368) ftMotionCommandSetFlag1(50) */
	0x0C00A1D0, /* word 1243 (0x136C) MakeAttackColl(0, 0, 5, 14, 1, 0, 220, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 30) */
	0x00DC0000,
	0x00000000,
	0x5A464003,
	0x00420F00,
	0x0C82E1D0, /* word 1248 (0x1380) MakeAttackColl(1, 0, 23, 14, 1, 0, 260, 120, 0, 0, 361, 100, 0, 3, 0, 2, 1, 30) */
	0x01040078,
	0x00000000,
	0x5A464003,
	0x00420F00,
	0x4C00002A, /* word 1253 (0x1394) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000004, /* word 1254 (0x1398) ftMotionCommandWait(4) */
	0x0C00A130, /* word 1255 (0x139C) MakeAttackColl(0, 0, 5, 9, 1, 0, 210, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00D20000,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x0C82E130, /* word 1260 (0x13B0) MakeAttackColl(1, 0, 23, 9, 1, 0, 260, 120, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x01040078,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x04000018, /* word 1265 (0x13C4) ftMotionCommandWait(24) */
	0x58000000, /* word 1266 (0x13C8) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1267 (0x13CC) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1268 (0x13D0) ftMotionCommandEnd() */
	0x08000008, /* word 1269 (0x13D4) ftMotionCommandWaitAsync(8) */
	0x58000032, /* word 1270 (0x13D8) ftMotionCommandSetFlag1(50) */
	0x0C0001B0, /* word 1271 (0x13DC) MakeAttackColl(0, 0, 0, 13, 1, 0, 220, 0, 150, 220, 361, 100, 0, 3, 0, 2, 1, 10) */
	0x00DC0000,
	0x009600DC,
	0x5A464003,
	0x00420500,
	0x0C8001B0, /* word 1276 (0x13F0) MakeAttackColl(1, 0, 0, 13, 1, 0, 270, 0, 150, 100, 361, 100, 0, 3, 0, 2, 1, 10) */
	0x010E0000,
	0x00960064,
	0x5A464003,
	0x00420500,
	0x4C000029, /* word 1281 (0x1404) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000004, /* word 1282 (0x1408) ftMotionCommandWait(4) */
	0x0C000130, /* word 1283 (0x140C) MakeAttackColl(0, 0, 0, 9, 1, 0, 220, 0, 150, 220, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x00DC0000,
	0x009600DC,
	0x5A464003,
	0x00220000,
	0x0C800130, /* word 1288 (0x1420) MakeAttackColl(1, 0, 0, 9, 1, 0, 270, 0, 150, 100, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x010E0000,
	0x00960064,
	0x5A464003,
	0x00220000,
	0x0400000C, /* word 1293 (0x1434) ftMotionCommandWait(12) */
	0x18000000, /* word 1294 (0x1438) ftMotionCommandClearAttackCollAll() */
	0x58000000, /* word 1295 (0x143C) ftMotionCommandSetFlag1(0) */
	0x00000000, /* word 1296 (0x1440) ftMotionCommandEnd() */
	0x38000050, /* word 1297 (0x1444) ftMotionPlayFGM(80) */
	0x98003400, /* word 1298 (0x1448) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 1302 (0x1458) ftMotionCommandEnd() */
	0x08000008, /* word 1303 (0x145C) ftMotionCommandWaitAsync(8) */
	0x58000001, /* word 1304 (0x1460) ftMotionCommandSetFlag1(1) */
	0x0C0341B0, /* word 1305 (0x1464) MakeAttackColl(0, 0, 26, 13, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 2, 1, 10) */
	0x00DCFFE2,
	0x002D0000,
	0x5A464003,
	0x00420500,
	0x0C8341B0, /* word 1310 (0x1478) MakeAttackColl(1, 0, 26, 13, 1, 0, 270, 150, 30, 0, 361, 100, 0, 3, 0, 2, 1, 10) */
	0x010E0096,
	0x001E0000,
	0x5A464003,
	0x00420500,
	0x4C000029, /* word 1315 (0x148C) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000004, /* word 1316 (0x1490) ftMotionCommandWait(4) */
	0x0C034130, /* word 1317 (0x1494) MakeAttackColl(0, 0, 26, 9, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x00DCFFE2,
	0x002D0000,
	0x5A464003,
	0x00220000,
	0x0C834130, /* word 1322 (0x14A8) MakeAttackColl(1, 0, 26, 9, 1, 0, 270, 150, 30, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x010E0096,
	0x001E0000,
	0x5A464003,
	0x00220000,
	0x0400000A, /* word 1327 (0x14BC) ftMotionCommandWait(10) */
	0x18000000, /* word 1328 (0x14C0) ftMotionCommandClearAttackCollAll() */
	0x04000006, /* word 1329 (0x14C4) ftMotionCommandWait(6) */
	0x58000000, /* word 1330 (0x14C8) ftMotionCommandSetFlag1(0) */
	0x00000000, /* word 1331 (0x14CC) ftMotionCommandEnd() */
	0x38000050, /* word 1332 (0x14D0) ftMotionPlayFGM(80) */
	0x98003400, /* word 1333 (0x14D4) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 1337 (0x14E4) ftMotionCommandEnd() */
	0x08000008, /* word 1338 (0x14E8) ftMotionCommandWaitAsync(8) */
	0x58000028, /* word 1339 (0x14EC) ftMotionCommandSetFlag1(40) */
	0x0C016210, /* word 1340 (0x14F0) MakeAttackColl(0, 0, 11, 16, 1, 0, 230, 0, 0, 0, 70, 120, 0, 3, 0, 2, 0, 0) */
	0x00E60000,
	0x00000000,
	0x11878003,
	0x00400000,
	0x4C000029, /* word 1345 (0x1504) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000009, /* word 1346 (0x1508) ftMotionCommandWait(9) */
	0x58000000, /* word 1347 (0x150C) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1348 (0x1510) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1349 (0x1514) ftMotionCommandEnd() */
	0x08000004, /* word 1350 (0x1518) ftMotionCommandWaitAsync(4) */
	0x58000032, /* word 1351 (0x151C) ftMotionCommandSetFlag1(50) */
	0x0C000070, /* word 1352 (0x1520) MakeAttackColl(0, 0, 0, 3, 1, 0, 360, 0, -120, 100, -90, 100, 30, 3, 0, 1, 0, 0) */
	0x01680000,
	0xFF880064,
	0xE986407B,
	0x00200000,
	0x0C800070, /* word 1357 (0x1534) MakeAttackColl(1, 0, 0, 3, 1, 0, 360, 0, 0, 60, -90, 100, 30, 3, 0, 1, 0, 0) */
	0x01680000,
	0x0000003C,
	0xE986407B,
	0x00200000,
	0x80000009, /* word 1362 (0x1548) ftMotionCommandLoopBegin(9) */
	0x4C0000DB, /* word 1363 (0x154C) ftMotionCommandPlayFGMStoreInfo(219) */
	0x04000002, /* word 1364 (0x1550) ftMotionCommandWait(2) */
	0x18000000, /* word 1365 (0x1554) ftMotionCommandClearAttackCollAll() */
	0x04000001, /* word 1366 (0x1558) ftMotionCommandWait(1) */
	0x2C000000, /* word 1367 (0x155C) ftMotionCommandRefreshAttackCollID(0) */
	0x2C000001, /* word 1368 (0x1560) ftMotionCommandRefreshAttackCollID(1) */
	0x84000000, /* word 1369 (0x1564) ftMotionCommandLoopEnd() */
	0x4C0000DB, /* word 1370 (0x1568) ftMotionCommandPlayFGMStoreInfo(219) */
	0x04000002, /* word 1371 (0x156C) ftMotionCommandWait(2) */
	0x18000000, /* word 1372 (0x1570) ftMotionCommandClearAttackCollAll() */
	0x58000000, /* word 1373 (0x1574) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1374 (0x1578) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1375 (0x157C) ftMotionCommandEnd() */
	0xBC000004, /* word 1376 (0x1580) ftMotionCommandSetSlopeContour(4) */
	0x38000050, /* word 1377 (0x1584) ftMotionPlayFGM(80) */
	0x98003400, /* word 1378 (0x1588) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x0C000070, /* word 1382 (0x1598) MakeAttackColl(0, 0, 0, 3, 1, 0, 360, 0, 0, 0, 80, 40, 0, 3, 0, 2, 1, 30) */
	0x01680000,
	0x00000000,
	0x14028003,
	0x00420F00,
	0x04000001, /* word 1387 (0x15AC) ftMotionCommandWait(1) */
	0x18000000, /* word 1388 (0x15B0) ftMotionCommandClearAttackCollAll() */
	0x0400000A, /* word 1389 (0x15B4) ftMotionCommandWait(10) */
	0xBC000000, /* word 1390 (0x15B8) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 1391 (0x15BC) ftMotionCommandEnd() */
	0x38000050, /* word 1392 (0x15C0) ftMotionPlayFGM(80) */
	0x98003400, /* word 1393 (0x15C4) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x04000001, /* word 1397 (0x15D4) ftMotionCommandWait(1) */
	0x18000000, /* word 1398 (0x15D8) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1399 (0x15DC) ftMotionCommandEnd() */
	0x08000028, /* word 1400 (0x15E0) ftMotionCommandWaitAsync(40) */
	0x58000001, /* word 1401 (0x15E4) ftMotionCommandSetFlag1(1) */
	0x3800008B, /* word 1402 (0x15E8) ftMotionPlayFGM(139) */
	0xC403C007, /* word 1403 (0x15EC) ftMotionCommandMakeRumble(30, 7) */
	0x5C000001, /* word 1404 (0x15F0) ftMotionCommandSetFlag2(1) */
	0x00000000, /* word 1405 (0x15F4) ftMotionCommandEnd() */
	0x90000000, /* word 1406 (0x15F8) Goto */
	0x05D90578, /* -> word 1400 (0x15E0) */
	0x0800000C, /* word 1408 (0x1600) ftMotionCommandWaitAsync(12) */
	0x380000B1, /* word 1409 (0x1604) ftMotionPlayFGM(177) */
	0x44000231, /* word 1410 (0x1608) ftMotionPlayVoice(561) */
	0x58000001, /* word 1411 (0x160C) ftMotionCommandSetFlag1(1) */
	0x5C000001, /* word 1412 (0x1610) ftMotionCommandSetFlag2(1) */
	0x98787C00, /* word 1413 (0x1614) Effect(15, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x98004000, /* word 1417 (0x1624) Effect(0, 16, 0, 0, 0, -120, 0, 0, 0) */
	0x00000000,
	0xFF880000,
	0x00000000,
	0x0C01E1B0, /* word 1421 (0x1634) MakeAttackColl(0, 0, 15, 13, 1, 0, 310, -50, 0, 0, 120, 75, 0, 3, 20, 2, 6, 20) */
	0x0136FFCE,
	0x00000000,
	0x1E04B003,
	0x144C0A00,
	0x0C81E1B0, /* word 1426 (0x1648) MakeAttackColl(1, 0, 15, 13, 1, 0, 310, 70, 0, 0, 120, 75, 0, 3, 20, 2, 6, 20) */
	0x01360046,
	0x00000000,
	0x1E04B003,
	0x144C0A00,
	0xC4000006, /* word 1431 (0x165C) ftMotionCommandMakeRumble(0, 6) */
	0x0800001C, /* word 1432 (0x1660) ftMotionCommandWaitAsync(28) */
	0x18000000, /* word 1433 (0x1664) ftMotionCommandClearAttackCollAll() */
	0x0800001E, /* word 1434 (0x1668) ftMotionCommandWaitAsync(30) */
	0x5C000002, /* word 1435 (0x166C) ftMotionCommandSetFlag2(2) */
	0x00000000, /* word 1436 (0x1670) ftMotionCommandEnd() */
	0x380000EA, /* word 1437 (0x1674) ftMotionPlayFGM(234) */
	0x4400023C, /* word 1438 (0x1678) ftMotionPlayVoice(572) */
	0xAC000004, /* word 1439 (0x167C) ftMotionCommandSetTexturePartID(4) */
	0xAC100004, /* word 1440 (0x1680) ftMotionCommandSetTexturePartID(1048580) */
	0x58000001, /* word 1441 (0x1684) ftMotionCommandSetFlag1(1) */
	0x0800001C, /* word 1442 (0x1688) ftMotionCommandWaitAsync(28) */
	0x0C00C006, /* word 1443 (0x168C) MakeAttackColl(0, 0, 6, 0, 0, 6, 600, 0, 70, 0, 361, 100, 0, 2, 0, 0, 0, 0) */
	0x02580000,
	0x00460000,
	0x5A464002,
	0x00000000,
	0xC4014007, /* word 1448 (0x16A0) ftMotionCommandMakeRumble(10, 7) */
	0xAC000005, /* word 1449 (0x16A4) ftMotionCommandSetTexturePartID(5) */
	0xAC100005, /* word 1450 (0x16A8) ftMotionCommandSetTexturePartID(1048581) */
	0x04000008, /* word 1451 (0x16AC) ftMotionCommandWait(8) */
	0x24001E00, /* word 1452 (0x16B0) ftMotionCommandSetAttackCollSize(0, 60) */
	0x08000045, /* word 1453 (0x16B4) ftMotionCommandWaitAsync(69) */
	0x24012C00, /* word 1454 (0x16B8) ftMotionCommandSetAttackCollSize(0, 600) */
	0xC4014007, /* word 1455 (0x16BC) ftMotionCommandMakeRumble(10, 7) */
	0x04000008, /* word 1456 (0x16C0) ftMotionCommandWait(8) */
	0x24001E00, /* word 1457 (0x16C4) ftMotionCommandSetAttackCollSize(0, 60) */
	0x08000071, /* word 1458 (0x16C8) ftMotionCommandWaitAsync(113) */
	0x24017C00, /* word 1459 (0x16CC) ftMotionCommandSetAttackCollSize(0, 760) */
	0xC4014007, /* word 1460 (0x16D0) ftMotionCommandMakeRumble(10, 7) */
	0xAC000004, /* word 1461 (0x16D4) ftMotionCommandSetTexturePartID(4) */
	0xAC100004, /* word 1462 (0x16D8) ftMotionCommandSetTexturePartID(1048580) */
	0x04000005, /* word 1463 (0x16DC) ftMotionCommandWait(5) */
	0xAC000000, /* word 1464 (0x16E0) ftMotionCommandSetTexturePartID(0) */
	0xAC100000, /* word 1465 (0x16E4) ftMotionCommandSetTexturePartID(1048576) */
	0x04000008, /* word 1466 (0x16E8) ftMotionCommandWait(8) */
	0x18000000, /* word 1467 (0x16EC) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1468 (0x16F0) ftMotionCommandEnd() */
	0xC403C007, /* word 1469 (0x16F4) ftMotionCommandMakeRumble(30, 7) */
	0x380000E9, /* word 1470 (0x16F8) ftMotionPlayFGM(233) */
	0x4400023A, /* word 1471 (0x16FC) ftMotionPlayVoice(570) */
	0x74000003, /* word 1472 (0x1700) ftMotionCommandSetHitStatusAll(3) */
	0x04000001, /* word 1473 (0x1704) ftMotionCommandWait(1) */
	0x0C000280, /* word 1474 (0x1708) MakeAttackColl(0, 0, 0, 20, 0, 0, 260, 0, 150, 0, 361, 120, 0, 3, 0, 2, 7, 60) */
	0x01040000,
	0x00960000,
	0x5A478003,
	0x004E1E00,
	0x04000001, /* word 1479 (0x171C) ftMotionCommandWait(1) */
	0x18000000, /* word 1480 (0x1720) ftMotionCommandClearAttackCollAll() */
	0xAC000004, /* word 1481 (0x1724) ftMotionCommandSetTexturePartID(4) */
	0xAC100004, /* word 1482 (0x1728) ftMotionCommandSetTexturePartID(1048580) */
	0x0800001B, /* word 1483 (0x172C) ftMotionCommandWaitAsync(27) */
	0xAC000005, /* word 1484 (0x1730) ftMotionCommandSetTexturePartID(5) */
	0xAC100005, /* word 1485 (0x1734) ftMotionCommandSetTexturePartID(1048581) */
	0x0800001E, /* word 1486 (0x1738) ftMotionCommandWaitAsync(30) */
	0x74000001, /* word 1487 (0x173C) ftMotionCommandSetHitStatusAll(1) */
	0x080000B4, /* word 1488 (0x1740) ftMotionCommandWaitAsync(180) */
	0xAC000004, /* word 1489 (0x1744) ftMotionCommandSetTexturePartID(4) */
	0xAC100004, /* word 1490 (0x1748) ftMotionCommandSetTexturePartID(1048580) */
	0x080000D2, /* word 1491 (0x174C) ftMotionCommandWaitAsync(210) */
	0xAC000000, /* word 1492 (0x1750) ftMotionCommandSetTexturePartID(0) */
	0xAC100000, /* word 1493 (0x1754) ftMotionCommandSetTexturePartID(1048576) */
	0x4400023B, /* word 1494 (0x1758) ftMotionPlayVoice(571) */
	0x04000014, /* word 1495 (0x175C) ftMotionCommandWait(20) */
	0x88000000, /* word 1496 (0x1760) Subroutine */
	0x05DC0000, /* -> word 0 (0x0000) */
	0x04000014, /* word 1498 (0x1768) ftMotionCommandWait(20) */
	0x88000000, /* word 1499 (0x176C) Subroutine */
	0xFFFF0000, /* -> word 0 (0x0000) */
	0x00000000, /* word 1501 (0x1774) ftMotionCommandEnd() */
	0x00000000, /* word 1502 (0x1778) ftMotionCommandEnd() */
	0x00000000, /* word 1503 (0x177C) ftMotionCommandEnd() */
};
