/* ftMotionCommand script data for relocData file 220 (LuigiMainMotion) */
/* File size: 6704 bytes (0x1A30) */

#include "relocdata_types.h"
#include <ft/ftdef.h>

u32 dLuigiMainMotion[1676] = {
	0xAC000003, /* word 0 (0x0000) ftMotionCommandSetTexturePartID(3) */
	0x04000002, /* word 1 (0x0004) ftMotionCommandWait(2) */
	0xAC000004, /* word 2 (0x0008) ftMotionCommandSetTexturePartID(4) */
	0x04000005, /* word 3 (0x000C) ftMotionCommandWait(5) */
	0xAC000003, /* word 4 (0x0010) ftMotionCommandSetTexturePartID(3) */
	0x04000002, /* word 5 (0x0014) ftMotionCommandWait(2) */
	0xAC000000, /* word 6 (0x0018) ftMotionCommandSetTexturePartID(0) */
	0x04000001, /* word 7 (0x001C) ftMotionCommandWait(1) */
	0x8C000000, /* word 8 (0x0020) ftMotionCommandReturn() */
	0xBC000003, /* word 9 (0x0024) ftMotionCommandSetSlopeContour(3) */
	0x88000000, /* word 10 (0x0028) Subroutine */
	0x000E0000, /* -> word 0 (0x0000) */
	0x04000050, /* word 12 (0x0030) ftMotionCommandWait(80) */
	0x88000000, /* word 13 (0x0034) Subroutine */
	0x00110000, /* -> word 0 (0x0000) */
	0x04000050, /* word 15 (0x003C) ftMotionCommandWait(80) */
	0x88000000, /* word 16 (0x0040) Subroutine */
	0x00140000, /* -> word 0 (0x0000) */
	0x04000014, /* word 18 (0x0048) ftMotionCommandWait(20) */
	0x90000000, /* word 19 (0x004C) Goto */
	0x002F0009, /* -> word 9 (0x0024) */
	0xAC000003, /* word 21 (0x0054) ftMotionCommandSetTexturePartID(3) */
	0x00000000, /* word 22 (0x0058) ftMotionCommandEnd() */
	0xBC000003, /* word 23 (0x005C) ftMotionCommandSetSlopeContour(3) */
	0x38000079, /* word 24 (0x0060) ftMotionPlayFGM(121) */
	0x80000002, /* word 25 (0x0064) ftMotionCommandLoopBegin(2) */
	0x98002C00, /* word 26 (0x0068) Effect(0, 11, 0, 0, 0, -120, 0, 60, 0) */
	0x00000000,
	0xFF880000,
	0x003C0000,
	0x04000006, /* word 30 (0x0078) ftMotionCommandWait(6) */
	0x84000000, /* word 31 (0x007C) ftMotionCommandLoopEnd() */
	0x00000000, /* word 32 (0x0080) ftMotionCommandEnd() */
	0x08000002, /* word 33 (0x0084) ftMotionCommandWaitAsync(2) */
	0x3800006E, /* word 34 (0x0088) ftMotionPlayFGM(110) */
	0x98002C00, /* word 35 (0x008C) Effect(0, 11, 0, 0, 0, 60, 0, 0, 0) */
	0x00000000,
	0x003C0000,
	0x00000000,
	0x0400000F, /* word 39 (0x009C) ftMotionCommandWait(15) */
	0x3800006E, /* word 40 (0x00A0) ftMotionPlayFGM(110) */
	0x98002C00, /* word 41 (0x00A4) Effect(0, 11, 0, 0, 0, 60, 0, 0, 0) */
	0x00000000,
	0x003C0000,
	0x00000000,
	0x94000000, /* word 45 (0x00B4) ftMotionCommandPauseScript() */
	0x90000000, /* word 46 (0x00B8) Goto */
	0x00710021, /* -> word 33 (0x0084) */
	0x38000080, /* word 48 (0x00C0) ftMotionPlayFGM(128) */
	0x98002C00, /* word 49 (0x00C4) Effect(0, 11, 0, 0, 0, 60, 0, 0, 0) */
	0x00000000,
	0x003C0000,
	0x00000000,
	0x00000000, /* word 53 (0x00D4) ftMotionCommandEnd() */
	0xBC000003, /* word 54 (0x00D8) ftMotionCommandSetSlopeContour(3) */
	0x08000006, /* word 55 (0x00DC) ftMotionCommandWaitAsync(6) */
	0x58000001, /* word 56 (0x00E0) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 57 (0x00E4) ftMotionCommandEnd() */
	0x98004000, /* word 58 (0x00E8) Effect(0, 16, 0, 0, 0, 120, 0, 0, 0) */
	0x00000000,
	0x00780000,
	0x00000000,
	0x08000015, /* word 62 (0x00F8) ftMotionCommandWaitAsync(21) */
	0x58000001, /* word 63 (0x00FC) ftMotionCommandSetFlag1(1) */
	0x98002C00, /* word 64 (0x0100) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x5C000001, /* word 68 (0x0110) ftMotionCommandSetFlag2(1) */
	0x00000000, /* word 69 (0x0114) ftMotionCommandEnd() */
	0x74000003, /* word 70 (0x0118) ftMotionCommandSetHitStatusAll(3) */
	0x08000002, /* word 71 (0x011C) ftMotionCommandWaitAsync(2) */
	0x74000001, /* word 72 (0x0120) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 73 (0x0124) ftMotionCommandEnd() */
	0x440001A7, /* word 74 (0x0128) ftMotionPlayVoice(423) */
	0x98003400, /* word 75 (0x012C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 79 (0x013C) ftMotionCommandEnd() */
	0x440001A8, /* word 80 (0x0140) ftMotionPlayVoice(424) */
	0x80000002, /* word 81 (0x0144) ftMotionCommandLoopBegin(2) */
	0x98002C00, /* word 82 (0x0148) Effect(0, 11, 0, 0, 0, 0, 100, 100, 100) */
	0x00000000,
	0x00000064,
	0x00640064,
	0x04000006, /* word 86 (0x0158) ftMotionCommandWait(6) */
	0x84000000, /* word 87 (0x015C) ftMotionCommandLoopEnd() */
	0x00000000, /* word 88 (0x0160) ftMotionCommandEnd() */
	0xBC000003, /* word 89 (0x0164) ftMotionCommandSetSlopeContour(3) */
	0x3800004D, /* word 90 (0x0168) ftMotionPlayFGM(77) */
	0x98002C00, /* word 91 (0x016C) Effect(0, 11, 0, 0, 0, -60, 0, 0, 0) */
	0x00000000,
	0xFFC40000,
	0x00000000,
	0x00000000, /* word 95 (0x017C) ftMotionCommandEnd() */
	0xBC000003, /* word 96 (0x0180) ftMotionCommandSetSlopeContour(3) */
	0x3800004D, /* word 97 (0x0184) ftMotionPlayFGM(77) */
	0x98003400, /* word 98 (0x0188) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 102 (0x0198) ftMotionCommandEnd() */
	0x3800027B, /* word 103 (0x019C) ftMotionPlayFGM(635) */
	0x00000000, /* word 104 (0x01A0) ftMotionCommandEnd() */
	0x3800027B, /* word 105 (0x01A4) ftMotionPlayFGM(635) */
	0x74000003, /* word 106 (0x01A8) ftMotionCommandSetHitStatusAll(3) */
	0x08000002, /* word 107 (0x01AC) ftMotionCommandWaitAsync(2) */
	0x74000001, /* word 108 (0x01B0) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 109 (0x01B4) ftMotionCommandEnd() */
	0xAC000002, /* word 110 (0x01B8) ftMotionCommandSetTexturePartID(2) */
	0x8C000000, /* word 111 (0x01BC) ftMotionCommandReturn() */
	0x88000000, /* word 112 (0x01C0) Subroutine */
	0x0074006E, /* -> word 110 (0x01B8) */
	0x00000000, /* word 114 (0x01C8) ftMotionCommandEnd() */
	0x88000000, /* word 115 (0x01CC) Subroutine */
	0x0097006E, /* -> word 110 (0x01B8) */
	0x34000000, /* word 117 (0x01D4) SetDamageThrown */
	0x021501D6, /* extern -> 0x758 */
	0x00000000, /* word 119 (0x01DC) ftMotionCommandEnd() */
	0xBC000003, /* word 120 (0x01E0) ftMotionCommandSetSlopeContour(3) */
	0x3800004D, /* word 121 (0x01E4) ftMotionPlayFGM(77) */
	0x98003400, /* word 122 (0x01E8) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 126 (0x01F8) ftMotionCommandEnd() */
	0xAC000003, /* word 127 (0x01FC) ftMotionCommandSetTexturePartID(3) */
	0x08000008, /* word 128 (0x0200) ftMotionCommandWaitAsync(8) */
	0x74000003, /* word 129 (0x0204) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 130 (0x0208) ftMotionCommandEnd() */
	0x08000018, /* word 131 (0x020C) ftMotionCommandWaitAsync(24) */
	0x74000001, /* word 132 (0x0210) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 133 (0x0214) ftMotionCommandEnd() */
	0xAC000002, /* word 134 (0x0218) ftMotionCommandSetTexturePartID(2) */
	0xBC000004, /* word 135 (0x021C) ftMotionCommandSetSlopeContour(4) */
	0x98003400, /* word 136 (0x0220) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x9BF88400, /* word 140 (0x0230) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x04000002, /* word 144 (0x0240) ftMotionCommandWait(2) */
	0xBC000000, /* word 145 (0x0244) ftMotionCommandSetSlopeContour(0) */
	0x08000018, /* word 146 (0x0248) ftMotionCommandWaitAsync(24) */
	0xBC000004, /* word 147 (0x024C) ftMotionCommandSetSlopeContour(4) */
	0x04000001, /* word 148 (0x0250) ftMotionCommandWait(1) */
	0x00000000, /* word 149 (0x0254) ftMotionCommandEnd() */
	0x90000000, /* word 150 (0x0258) Goto */
	0x00A70086, /* -> word 134 (0x0218) */
	0x98002C00, /* word 152 (0x0260) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 156 (0x0270) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 157 (0x0274) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 158 (0x0278) ftMotionCommandSetHitStatusAll(1) */
	0x8C000000, /* word 159 (0x027C) ftMotionCommandReturn() */
	0x74000003, /* word 160 (0x0280) ftMotionCommandSetHitStatusAll(3) */
	0x08000016, /* word 161 (0x0284) ftMotionCommandWaitAsync(22) */
	0x74000001, /* word 162 (0x0288) ftMotionCommandSetHitStatusAll(1) */
	0x08000002, /* word 163 (0x028C) ftMotionCommandWaitAsync(2) */
	0x58000001, /* word 164 (0x0290) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 165 (0x0294) ftMotionCommandEnd() */
	0x90000000, /* word 166 (0x0298) Goto */
	0x00AA00A0, /* -> word 160 (0x0280) */
	0x3800000B, /* word 168 (0x02A0) ftMotionPlayFGM(11) */
	0x88000000, /* word 169 (0x02A4) Subroutine */
	0x00AD0098, /* -> word 152 (0x0260) */
	0x00000000, /* word 171 (0x02AC) ftMotionCommandEnd() */
	0x90000000, /* word 172 (0x02B0) Goto */
	0x00AF00A8, /* -> word 168 (0x02A0) */
	0x90000000, /* word 174 (0x02B8) Goto */
	0x00B100A8, /* -> word 168 (0x02A0) */
	0x90000000, /* word 176 (0x02C0) Goto */
	0x010400A8, /* -> word 168 (0x02A0) */
	0x74000003, /* word 178 (0x02C8) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 179 (0x02CC) ftMotionCommandWaitAsync(20) */
	0xAC000002, /* word 180 (0x02D0) ftMotionCommandSetTexturePartID(2) */
	0x98003400, /* word 181 (0x02D4) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x0C0180C0, /* word 185 (0x02E4) MakeAttackColl(0, 0, 12, 6, 0, 0, 200, 0, 100, 0, 361, 100, 90, 3, 1, 1, 1, 0) */
	0x00C80000,
	0x00640000,
	0x5A46416B,
	0x01220000,
	0x04000002, /* word 190 (0x02F8) ftMotionCommandWait(2) */
	0x18000000, /* word 191 (0x02FC) ftMotionCommandClearAttackCollAll() */
	0x04000003, /* word 192 (0x0300) ftMotionCommandWait(3) */
	0x0C0180C0, /* word 193 (0x0304) MakeAttackColl(0, 0, 12, 6, 0, 0, 200, 0, 100, 0, 361, 100, 90, 3, 1, 1, 1, 0) */
	0x00C80000,
	0x00640000,
	0x5A46416B,
	0x01220000,
	0x74000001, /* word 198 (0x0318) ftMotionCommandSetHitStatusAll(1) */
	0x04000002, /* word 199 (0x031C) ftMotionCommandWait(2) */
	0x18000000, /* word 200 (0x0320) ftMotionCommandClearAttackCollAll() */
	0x0400000E, /* word 201 (0x0324) ftMotionCommandWait(14) */
	0xAC000000, /* word 202 (0x0328) ftMotionCommandSetTexturePartID(0) */
	0x00000000, /* word 203 (0x032C) ftMotionCommandEnd() */
	0x74000003, /* word 204 (0x0330) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 205 (0x0334) ftMotionCommandWaitAsync(20) */
	0x98003400, /* word 206 (0x0338) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x0C0320C0, /* word 210 (0x0348) MakeAttackColl(0, 0, 25, 6, 0, 0, 180, 70, -50, 60, 361, 100, 90, 3, 1, 1, 1, 0) */
	0x00B40046,
	0xFFCE003C,
	0x5A46416B,
	0x01220000,
	0x04000002, /* word 215 (0x035C) ftMotionCommandWait(2) */
	0x18000000, /* word 216 (0x0360) ftMotionCommandClearAttackCollAll() */
	0x04000002, /* word 217 (0x0364) ftMotionCommandWait(2) */
	0x0C0320C0, /* word 218 (0x0368) MakeAttackColl(0, 0, 25, 6, 0, 0, 180, 70, -50, 60, 361, 100, 90, 3, 1, 1, 1, 0) */
	0x00B40046,
	0xFFCE003C,
	0x5A46416B,
	0x01220000,
	0x74000001, /* word 223 (0x037C) ftMotionCommandSetHitStatusAll(1) */
	0x04000002, /* word 224 (0x0380) ftMotionCommandWait(2) */
	0x18000000, /* word 225 (0x0384) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 226 (0x0388) ftMotionCommandEnd() */
	0xC4000009, /* word 227 (0x038C) ftMotionCommandMakeRumble(0, 9) */
	0xAC000002, /* word 228 (0x0390) ftMotionCommandSetTexturePartID(2) */
	0x9800AC00, /* word 229 (0x0394) Effect(0, 43, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x440001A7, /* word 233 (0x03A4) ftMotionPlayVoice(423) */
	0x38000011, /* word 234 (0x03A8) ftMotionPlayFGM(17) */
	0x98007C00, /* word 235 (0x03AC) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 239 (0x03BC) ftMotionCommandSetHitStatusAll(3) */
	0x08000018, /* word 240 (0x03C0) ftMotionCommandWaitAsync(24) */
	0x74000001, /* word 241 (0x03C4) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 242 (0x03C8) ftMotionCommandEnd() */
	0xC4000007, /* word 243 (0x03CC) ftMotionCommandMakeRumble(0, 7) */
	0x9800AC00, /* word 244 (0x03D0) Effect(0, 43, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x440001A7, /* word 248 (0x03E0) ftMotionPlayVoice(423) */
	0x3800000B, /* word 249 (0x03E4) ftMotionPlayFGM(11) */
	0x98007C00, /* word 250 (0x03E8) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 254 (0x03F8) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 255 (0x03FC) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 256 (0x0400) ftMotionCommandSetHitStatusAll(1) */
	0xC8000007, /* word 257 (0x0404) ftMotionCommandStopRumble(7) */
	0x00000000, /* word 258 (0x0408) ftMotionCommandEnd() */
	0x90000000, /* word 259 (0x040C) Goto */
	0x01A300F3, /* -> word 243 (0x03CC) */
	0x3800000B, /* word 261 (0x0414) ftMotionPlayFGM(11) */
	0x98007C00, /* word 262 (0x0418) Effect(0, 31, 0, 0, 120, 0, 0, 0, 0) */
	0x00000078,
	0x00000000,
	0x00000000,
	0x08000004, /* word 266 (0x0428) ftMotionCommandWaitAsync(4) */
	0x98004000, /* word 267 (0x042C) Effect(0, 16, 0, 100, 0, 0, 0, 0, 0) */
	0x00640000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 271 (0x043C) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 272 (0x0440) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 273 (0x0444) ftMotionCommandSetHitStatusAll(1) */
	0x58000001, /* word 274 (0x0448) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 275 (0x044C) ftMotionCommandEnd() */
	0x3800000B, /* word 276 (0x0450) ftMotionPlayFGM(11) */
	0x98007C00, /* word 277 (0x0454) Effect(0, 31, 0, 0, 120, 0, 0, 0, 0) */
	0x00000078,
	0x00000000,
	0x00000000,
	0x08000004, /* word 281 (0x0464) ftMotionCommandWaitAsync(4) */
	0x98003C00, /* word 282 (0x0468) Effect(0, 15, 0, -100, 0, 0, 0, 0, 0) */
	0xFF9C0000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 286 (0x0478) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 287 (0x047C) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 288 (0x0480) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 289 (0x0484) ftMotionCommandEnd() */
	0xAC000002, /* word 290 (0x0488) ftMotionCommandSetTexturePartID(2) */
	0x74000003, /* word 291 (0x048C) ftMotionCommandSetHitStatusAll(3) */
	0x38000013, /* word 292 (0x0490) ftMotionPlayFGM(19) */
	0x00000000, /* word 293 (0x0494) ftMotionCommandEnd() */
	0xAC000002, /* word 294 (0x0498) ftMotionCommandSetTexturePartID(2) */
	0x74000003, /* word 295 (0x049C) ftMotionCommandSetHitStatusAll(3) */
	0x0400003C, /* word 296 (0x04A0) ftMotionCommandWait(60) */
	0x74000001, /* word 297 (0x04A4) ftMotionCommandSetHitStatusAll(1) */
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
	0x00000000, /* word 308 (0x04D0) ftMotionCommandEnd() */
	0x74000003, /* word 309 (0x04D4) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 310 (0x04D8) ftMotionCommandEnd() */
	0x74000003, /* word 311 (0x04DC) ftMotionCommandSetHitStatusAll(3) */
	0x08000024, /* word 312 (0x04E0) ftMotionCommandWaitAsync(36) */
	0x74000001, /* word 313 (0x04E4) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 314 (0x04E8) ftMotionCommandEnd() */
	0x98007C00, /* word 315 (0x04EC) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 319 (0x04FC) ftMotionCommandSetHitStatusAll(3) */
	0x440001A0, /* word 320 (0x0500) ftMotionPlayVoice(416) */
	0x08000004, /* word 321 (0x0504) ftMotionCommandWaitAsync(4) */
	0x0C0360C0, /* word 322 (0x0508) MakeAttackColl(0, 0, 27, 6, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0) */
	0x01180000,
	0x00000000,
	0x5A464193,
	0x00220000,
	0x0C80A0C0, /* word 327 (0x051C) MakeAttackColl(1, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0) */
	0x00960000,
	0x00000000,
	0x5A464193,
	0x00220000,
	0x4C00002A, /* word 332 (0x0530) ftMotionCommandPlayFGMStoreInfo(42) */
	0x98004C00, /* word 333 (0x0534) Effect(0, 19, 0, 0, -80, -180, 0, 0, 0) */
	0x0000FFB0,
	0xFF4C0000,
	0x00000000,
	0x04000002, /* word 337 (0x0544) ftMotionCommandWait(2) */
	0x74000001, /* word 338 (0x0548) ftMotionCommandSetHitStatusAll(1) */
	0x04000004, /* word 339 (0x054C) ftMotionCommandWait(4) */
	0x18000000, /* word 340 (0x0550) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 341 (0x0554) ftMotionCommandEnd() */
	0x74000003, /* word 342 (0x0558) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 343 (0x055C) ftMotionCommandEnd() */
	0x98007C00, /* word 344 (0x0560) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 348 (0x0570) ftMotionCommandSetHitStatusAll(3) */
	0x440001A0, /* word 349 (0x0574) ftMotionPlayVoice(416) */
	0x08000003, /* word 350 (0x0578) ftMotionCommandWaitAsync(3) */
	0x0C00A0C0, /* word 351 (0x057C) MakeAttackColl(0, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0) */
	0x00960000,
	0x00000000,
	0x5A464193,
	0x00220000,
	0x0C8360C0, /* word 356 (0x0590) MakeAttackColl(1, 0, 27, 6, 0, 0, 280, 80, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0) */
	0x01180050,
	0x00000000,
	0x5A464193,
	0x00220000,
	0x98004C00, /* word 361 (0x05A4) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x4C00002A, /* word 365 (0x05B4) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000002, /* word 366 (0x05B8) ftMotionCommandWait(2) */
	0x74000001, /* word 367 (0x05BC) ftMotionCommandSetHitStatusAll(1) */
	0x04000004, /* word 368 (0x05C0) ftMotionCommandWait(4) */
	0x18000000, /* word 369 (0x05C4) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 370 (0x05C8) ftMotionCommandEnd() */
	0x74000003, /* word 371 (0x05CC) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 372 (0x05D0) ftMotionCommandEnd() */
	0x3800000B, /* word 373 (0x05D4) ftMotionPlayFGM(11) */
	0x98004000, /* word 374 (0x05D8) Effect(0, 16, 0, 100, 0, 0, 0, 0, 0) */
	0x00640000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 378 (0x05E8) ftMotionCommandSetHitStatusAll(3) */
	0x0400000F, /* word 379 (0x05EC) ftMotionCommandWait(15) */
	0x74000001, /* word 380 (0x05F0) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 381 (0x05F4) ftMotionCommandEnd() */
	0x74000003, /* word 382 (0x05F8) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 383 (0x05FC) ftMotionCommandEnd() */
	0x3800000B, /* word 384 (0x0600) ftMotionPlayFGM(11) */
	0x98004000, /* word 385 (0x0604) Effect(0, 16, 0, 100, 0, 0, 0, 0, 0) */
	0x00640000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 389 (0x0614) ftMotionCommandSetHitStatusAll(3) */
	0x0400000F, /* word 390 (0x0618) ftMotionCommandWait(15) */
	0x74000001, /* word 391 (0x061C) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 392 (0x0620) ftMotionCommandEnd() */
	0x08000002, /* word 393 (0x0624) ftMotionCommandWaitAsync(2) */
	0x58000001, /* word 394 (0x0628) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 395 (0x062C) ftMotionCommandEnd() */
	0xAC000002, /* word 396 (0x0630) ftMotionCommandSetTexturePartID(2) */
	0x08000004, /* word 397 (0x0634) ftMotionCommandWaitAsync(4) */
	0x58000001, /* word 398 (0x0638) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 399 (0x063C) ftMotionCommandEnd() */
	0x08000008, /* word 400 (0x0640) ftMotionCommandWaitAsync(8) */
	0x54000001, /* word 401 (0x0644) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 402 (0x0648) ftMotionCommandEnd() */
	0x08000004, /* word 403 (0x064C) ftMotionCommandWaitAsync(4) */
	0x98004C00, /* word 404 (0x0650) Effect(0, 19, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 408 (0x0660) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 409 (0x0664) ftMotionCommandEnd() */
	0x08000008, /* word 410 (0x0668) ftMotionCommandWaitAsync(8) */
	0x98002C00, /* word 411 (0x066C) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 415 (0x067C) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 416 (0x0680) ftMotionCommandEnd() */
	0x60000006, /* word 417 (0x0684) ftMotionCommandSetFlag3(6) */
	0x90000000, /* word 418 (0x0688) Goto */
	0x01BC019A, /* -> word 410 (0x0668) */
	0x08000008, /* word 420 (0x0690) ftMotionCommandWaitAsync(8) */
	0x98002C00, /* word 421 (0x0694) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 425 (0x06A4) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 426 (0x06A8) ftMotionCommandEnd() */
	0x08000006, /* word 427 (0x06AC) ftMotionCommandWaitAsync(6) */
	0x98002C00, /* word 428 (0x06B0) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 432 (0x06C0) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 433 (0x06C4) ftMotionCommandEnd() */
	0x08000008, /* word 434 (0x06C8) ftMotionCommandWaitAsync(8) */
	0x50000000, /* word 435 (0x06CC) ftMotionCommandPlaySmashVoice(0) */
	0x98004C00, /* word 436 (0x06D0) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x54000001, /* word 440 (0x06E0) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 441 (0x06E4) ftMotionCommandEnd() */
	0x60000006, /* word 442 (0x06E8) ftMotionCommandSetFlag3(6) */
	0x90000000, /* word 443 (0x06EC) Goto */
	0x01D601B2, /* -> word 434 (0x06C8) */
	0x08000008, /* word 445 (0x06F4) ftMotionCommandWaitAsync(8) */
	0x50000000, /* word 446 (0x06F8) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 447 (0x06FC) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 451 (0x070C) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 452 (0x0710) ftMotionCommandEnd() */
	0x08000006, /* word 453 (0x0714) ftMotionCommandWaitAsync(6) */
	0x50000000, /* word 454 (0x0718) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 455 (0x071C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 459 (0x072C) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 460 (0x0730) ftMotionCommandEnd() */
	0x08000006, /* word 461 (0x0734) ftMotionCommandWaitAsync(6) */
	0x98002C00, /* word 462 (0x0738) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 466 (0x0748) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 467 (0x074C) ftMotionCommandEnd() */
	0x60000004, /* word 468 (0x0750) ftMotionCommandSetFlag3(4) */
	0x90000000, /* word 469 (0x0754) Goto */
	0x01EF01CD, /* -> word 461 (0x0734) */
	0x08000006, /* word 471 (0x075C) ftMotionCommandWaitAsync(6) */
	0x98002C00, /* word 472 (0x0760) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 476 (0x0770) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 477 (0x0774) ftMotionCommandEnd() */
	0x08000006, /* word 478 (0x0778) ftMotionCommandWaitAsync(6) */
	0x98002C00, /* word 479 (0x077C) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 483 (0x078C) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 484 (0x0790) ftMotionCommandEnd() */
	0x08000006, /* word 485 (0x0794) ftMotionCommandWaitAsync(6) */
	0x50000000, /* word 486 (0x0798) ftMotionCommandPlaySmashVoice(0) */
	0x98004000, /* word 487 (0x079C) Effect(0, 16, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 491 (0x07AC) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 492 (0x07B0) ftMotionCommandEnd() */
	0x60000004, /* word 493 (0x07B4) ftMotionCommandSetFlag3(4) */
	0x90000000, /* word 494 (0x07B8) Goto */
	0x020701E5, /* -> word 485 (0x0794) */
	0x08000006, /* word 496 (0x07C0) ftMotionCommandWaitAsync(6) */
	0x50000000, /* word 497 (0x07C4) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 498 (0x07C8) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 502 (0x07D8) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 503 (0x07DC) ftMotionCommandEnd() */
	0x08000006, /* word 504 (0x07E0) ftMotionCommandWaitAsync(6) */
	0x50000000, /* word 505 (0x07E4) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 506 (0x07E8) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 510 (0x07F8) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 511 (0x07FC) ftMotionCommandEnd() */
	0xAC000002, /* word 512 (0x0800) ftMotionCommandSetTexturePartID(2) */
	0x08000012, /* word 513 (0x0804) ftMotionCommandWaitAsync(18) */
	0x54000001, /* word 514 (0x0808) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 515 (0x080C) ftMotionCommandEnd() */
	0xAC000002, /* word 516 (0x0810) ftMotionCommandSetTexturePartID(2) */
	0x60000009, /* word 517 (0x0814) ftMotionCommandSetFlag3(9) */
	0x90000000, /* word 518 (0x0818) Goto */
	0x02100200, /* -> word 512 (0x0800) */
	0xAC000002, /* word 520 (0x0820) ftMotionCommandSetTexturePartID(2) */
	0x08000012, /* word 521 (0x0824) ftMotionCommandWaitAsync(18) */
	0x50000000, /* word 522 (0x0828) ftMotionCommandPlaySmashVoice(0) */
	0x54000001, /* word 523 (0x082C) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 524 (0x0830) ftMotionCommandEnd() */
	0xAC000002, /* word 525 (0x0834) ftMotionCommandSetTexturePartID(2) */
	0x60000009, /* word 526 (0x0838) ftMotionCommandSetFlag3(9) */
	0x90000000, /* word 527 (0x083C) Goto */
	0x02C20208, /* -> word 520 (0x0820) */
	0x08000002, /* word 529 (0x0844) ftMotionCommandWaitAsync(2) */
	0xCC040000, /* word 530 (0x0848) ftMotionCommandSetAfterImage(1, 0) */
	0x08000004, /* word 531 (0x084C) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 532 (0x0850) Subroutine */
	0x02200000, /* extern -> 0x0 */
	0x04000005, /* word 534 (0x0858) ftMotionCommandWait(5) */
	0xCC03FFFF, /* word 535 (0x085C) ftMotionCommandSetAfterImage(0, -1) */
	0x04000003, /* word 536 (0x0860) ftMotionCommandWait(3) */
	0x18000000, /* word 537 (0x0864) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 538 (0x0868) ftMotionCommandEnd() */
	0x08000007, /* word 539 (0x086C) ftMotionCommandWaitAsync(7) */
	0xCC040000, /* word 540 (0x0870) ftMotionCommandSetAfterImage(1, 0) */
	0x08000009, /* word 541 (0x0874) ftMotionCommandWaitAsync(9) */
	0xBC000004, /* word 542 (0x0878) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 543 (0x087C) Subroutine */
	0x022F0019, /* extern -> 0x64 */
	0x04000003, /* word 545 (0x0884) ftMotionCommandWait(3) */
	0xCC03FFFF, /* word 546 (0x0888) ftMotionCommandSetAfterImage(0, -1) */
	0x04000006, /* word 547 (0x088C) ftMotionCommandWait(6) */
	0x18000000, /* word 548 (0x0890) ftMotionCommandClearAttackCollAll() */
	0x08000024, /* word 549 (0x0894) ftMotionCommandWaitAsync(36) */
	0xBC000003, /* word 550 (0x0898) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 551 (0x089C) ftMotionCommandEnd() */
	0xAC000002, /* word 552 (0x08A0) ftMotionCommandSetTexturePartID(2) */
	0x50000000, /* word 553 (0x08A4) ftMotionCommandPlaySmashVoice(0) */
	0x08000014, /* word 554 (0x08A8) ftMotionCommandWaitAsync(20) */
	0xBC000004, /* word 555 (0x08AC) ftMotionCommandSetSlopeContour(4) */
	0xCC040000, /* word 556 (0x08B0) ftMotionCommandSetAfterImage(1, 0) */
	0x08000016, /* word 557 (0x08B4) ftMotionCommandWaitAsync(22) */
	0x88000000, /* word 558 (0x08B8) Subroutine */
	0x023C0032, /* extern -> 0xC8 */
	0x04000003, /* word 560 (0x08C0) ftMotionCommandWait(3) */
	0xBC000003, /* word 561 (0x08C4) ftMotionCommandSetSlopeContour(3) */
	0x04000003, /* word 562 (0x08C8) ftMotionCommandWait(3) */
	0x18000000, /* word 563 (0x08CC) ftMotionCommandClearAttackCollAll() */
	0x04000001, /* word 564 (0x08D0) ftMotionCommandWait(1) */
	0xCC03FFFF, /* word 565 (0x08D4) ftMotionCommandSetAfterImage(0, -1) */
	0x00000000, /* word 566 (0x08D8) ftMotionCommandEnd() */
	0xBC000004, /* word 567 (0x08DC) ftMotionCommandSetSlopeContour(4) */
	0x08000002, /* word 568 (0x08E0) ftMotionCommandWaitAsync(2) */
	0xCC040000, /* word 569 (0x08E4) ftMotionCommandSetAfterImage(1, 0) */
	0x08000004, /* word 570 (0x08E8) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 571 (0x08EC) Subroutine */
	0x0244004B, /* extern -> 0x12C */
	0x04000004, /* word 573 (0x08F4) ftMotionCommandWait(4) */
	0xCC03FFFF, /* word 574 (0x08F8) ftMotionCommandSetAfterImage(0, -1) */
	0x04000016, /* word 575 (0x08FC) ftMotionCommandWait(22) */
	0x18000000, /* word 576 (0x0900) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 577 (0x0904) ftMotionCommandEnd() */
	0x08000004, /* word 578 (0x0908) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 579 (0x090C) Subroutine */
	0x024B0068, /* extern -> 0x1A0 */
	0x04000008, /* word 581 (0x0914) ftMotionCommandWait(8) */
	0x18000000, /* word 582 (0x0918) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 583 (0x091C) ftMotionCommandEnd() */
	0x08000009, /* word 584 (0x0920) ftMotionCommandWaitAsync(9) */
	0xBC000004, /* word 585 (0x0924) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 586 (0x0928) Subroutine */
	0x025A007D, /* extern -> 0x1F4 */
	0x04000009, /* word 588 (0x0930) ftMotionCommandWait(9) */
	0x18000000, /* word 589 (0x0934) ftMotionCommandClearAttackCollAll() */
	0x08000024, /* word 590 (0x0938) ftMotionCommandWaitAsync(36) */
	0xBC000003, /* word 591 (0x093C) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 592 (0x0940) ftMotionCommandEnd() */
	0xC4000007, /* word 593 (0x0944) ftMotionCommandMakeRumble(0, 7) */
	0xAC000002, /* word 594 (0x0948) ftMotionCommandSetTexturePartID(2) */
	0x50000000, /* word 595 (0x094C) ftMotionCommandPlaySmashVoice(0) */
	0xB1300028, /* word 596 (0x0950) ftMotionCommandSetColAnim(76, 40) */
	0xAC000002, /* word 597 (0x0954) ftMotionCommandSetTexturePartID(2) */
	0x08000014, /* word 598 (0x0958) ftMotionCommandWaitAsync(20) */
	0xBC000004, /* word 599 (0x095C) ftMotionCommandSetSlopeContour(4) */
	0x08000016, /* word 600 (0x0960) ftMotionCommandWaitAsync(22) */
	0x88000000, /* word 601 (0x0964) Subroutine */
	0x02630092, /* extern -> 0x248 */
	0x04000003, /* word 603 (0x096C) ftMotionCommandWait(3) */
	0xBC000003, /* word 604 (0x0970) ftMotionCommandSetSlopeContour(3) */
	0x04000003, /* word 605 (0x0974) ftMotionCommandWait(3) */
	0x18000000, /* word 606 (0x0978) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 607 (0x097C) ftMotionCommandEnd() */
	0xBC000004, /* word 608 (0x0980) ftMotionCommandSetSlopeContour(4) */
	0x08000004, /* word 609 (0x0984) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 610 (0x0988) Subroutine */
	0x026900AC, /* extern -> 0x2B0 */
	0x0400001B, /* word 612 (0x0990) ftMotionCommandWait(27) */
	0x18000000, /* word 613 (0x0994) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 614 (0x0998) ftMotionCommandEnd() */
	0x08000004, /* word 615 (0x099C) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 616 (0x09A0) Subroutine */
	0x027000C9, /* extern -> 0x324 */
	0x04000008, /* word 618 (0x09A8) ftMotionCommandWait(8) */
	0x18000000, /* word 619 (0x09AC) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 620 (0x09B0) ftMotionCommandEnd() */
	0x08000009, /* word 621 (0x09B4) ftMotionCommandWaitAsync(9) */
	0xBC000004, /* word 622 (0x09B8) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 623 (0x09BC) Subroutine */
	0x027A00DE, /* extern -> 0x378 */
	0x04000009, /* word 625 (0x09C4) ftMotionCommandWait(9) */
	0x18000000, /* word 626 (0x09C8) ftMotionCommandClearAttackCollAll() */
	0x08000024, /* word 627 (0x09CC) ftMotionCommandWaitAsync(36) */
	0xBC000003, /* word 628 (0x09D0) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 629 (0x09D4) ftMotionCommandEnd() */
	0x08000014, /* word 630 (0x09D8) ftMotionCommandWaitAsync(20) */
	0xBC000004, /* word 631 (0x09DC) ftMotionCommandSetSlopeContour(4) */
	0x08000016, /* word 632 (0x09E0) ftMotionCommandWaitAsync(22) */
	0x88000000, /* word 633 (0x09E4) Subroutine */
	0x028300F3, /* extern -> 0x3CC */
	0x04000003, /* word 635 (0x09EC) ftMotionCommandWait(3) */
	0xBC000003, /* word 636 (0x09F0) ftMotionCommandSetSlopeContour(3) */
	0x04000003, /* word 637 (0x09F4) ftMotionCommandWait(3) */
	0x18000000, /* word 638 (0x09F8) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 639 (0x09FC) ftMotionCommandEnd() */
	0xBC000004, /* word 640 (0x0A00) ftMotionCommandSetSlopeContour(4) */
	0x08000004, /* word 641 (0x0A04) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 642 (0x0A08) Subroutine */
	0x028A010C, /* extern -> 0x430 */
	0x0400001B, /* word 644 (0x0A10) ftMotionCommandWait(27) */
	0x18000000, /* word 645 (0x0A14) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 646 (0x0A18) ftMotionCommandEnd() */
	0xB12C0008, /* word 647 (0x0A1C) ftMotionCommandSetColAnim(75, 8) */
	0x08000004, /* word 648 (0x0A20) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 649 (0x0A24) Subroutine */
	0x02920125, /* extern -> 0x494 */
	0x04000008, /* word 651 (0x0A2C) ftMotionCommandWait(8) */
	0x18000000, /* word 652 (0x0A30) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 653 (0x0A34) ftMotionCommandEnd() */
	0xB12C0010, /* word 654 (0x0A38) ftMotionCommandSetColAnim(75, 16) */
	0x08000009, /* word 655 (0x0A3C) ftMotionCommandWaitAsync(9) */
	0xBC000004, /* word 656 (0x0A40) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 657 (0x0A44) Subroutine */
	0x02A1013E, /* extern -> 0x4F8 */
	0x0800000B, /* word 659 (0x0A4C) ftMotionCommandWaitAsync(11) */
	0x54000001, /* word 660 (0x0A50) ftMotionCommandSetFlag0(1) */
	0x04000009, /* word 661 (0x0A54) ftMotionCommandWait(9) */
	0x18000000, /* word 662 (0x0A58) ftMotionCommandClearAttackCollAll() */
	0x08000024, /* word 663 (0x0A5C) ftMotionCommandWaitAsync(36) */
	0xBC000003, /* word 664 (0x0A60) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 665 (0x0A64) ftMotionCommandEnd() */
	0xAC000002, /* word 666 (0x0A68) ftMotionCommandSetTexturePartID(2) */
	0xB12C001C, /* word 667 (0x0A6C) ftMotionCommandSetColAnim(75, 28) */
	0x50000000, /* word 668 (0x0A70) ftMotionCommandPlaySmashVoice(0) */
	0x08000014, /* word 669 (0x0A74) ftMotionCommandWaitAsync(20) */
	0xBC000004, /* word 670 (0x0A78) ftMotionCommandSetSlopeContour(4) */
	0x08000017, /* word 671 (0x0A7C) ftMotionCommandWaitAsync(23) */
	0x88000000, /* word 672 (0x0A80) Subroutine */
	0x02AC0157, /* extern -> 0x55C */
	0x54000002, /* word 674 (0x0A88) ftMotionCommandSetFlag0(2) */
	0x04000002, /* word 675 (0x0A8C) ftMotionCommandWait(2) */
	0xBC000003, /* word 676 (0x0A90) ftMotionCommandSetSlopeContour(3) */
	0x04000003, /* word 677 (0x0A94) ftMotionCommandWait(3) */
	0x18000000, /* word 678 (0x0A98) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 679 (0x0A9C) ftMotionCommandEnd() */
	0xBC000004, /* word 680 (0x0AA0) ftMotionCommandSetSlopeContour(4) */
	0xB12C000A, /* word 681 (0x0AA4) ftMotionCommandSetColAnim(75, 10) */
	0x08000004, /* word 682 (0x0AA8) ftMotionCommandWaitAsync(4) */
	0x88000000, /* word 683 (0x0AAC) Subroutine */
	0x02BE0170, /* extern -> 0x5C0 */
	0x0400001B, /* word 685 (0x0AB4) ftMotionCommandWait(27) */
	0x18000000, /* word 686 (0x0AB8) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 687 (0x0ABC) ftMotionCommandEnd() */
	0xBC000003, /* word 688 (0x0AC0) ftMotionCommandSetSlopeContour(3) */
	0xAC000003, /* word 689 (0x0AC4) ftMotionCommandSetTexturePartID(3) */
	0x08000008, /* word 690 (0x0AC8) ftMotionCommandWaitAsync(8) */
	0x54000001, /* word 691 (0x0ACC) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 692 (0x0AD0) ftMotionCommandEnd() */
	0xBC000003, /* word 693 (0x0AD4) ftMotionCommandSetSlopeContour(3) */
	0xAC000003, /* word 694 (0x0AD8) ftMotionCommandSetTexturePartID(3) */
	0x08000008, /* word 695 (0x0ADC) ftMotionCommandWaitAsync(8) */
	0x54000001, /* word 696 (0x0AE0) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 697 (0x0AE4) ftMotionCommandEnd() */
	0xC4000007, /* word 698 (0x0AE8) ftMotionCommandMakeRumble(0, 7) */
	0xBC000004, /* word 699 (0x0AEC) ftMotionCommandSetSlopeContour(4) */
	0xAC000002, /* word 700 (0x0AF0) ftMotionCommandSetTexturePartID(2) */
	0x88000000, /* word 701 (0x0AF4) Subroutine */
	0x037D018D, /* extern -> 0x634 */
	0x04000010, /* word 703 (0x0AFC) ftMotionCommandWait(16) */
	0x18000000, /* word 704 (0x0B00) ftMotionCommandClearAttackCollAll() */
	0x90000000, /* word 705 (0x0B04) Goto */
	0x02CF02BA, /* -> word 698 (0x0AE8) */
	0x98007C00, /* word 707 (0x0B0C) Effect(0, 31, 0, 0, 0, 120, 200, 200, 200) */
	0x00000000,
	0x007800C8,
	0x00C800C8,
	0x80000003, /* word 711 (0x0B1C) ftMotionCommandLoopBegin(3) */
	0x98002800, /* word 712 (0x0B20) Effect(0, 10, 0, 0, 0, 120, 200, 200, 200) */
	0x00000000,
	0x007800C8,
	0x00C800C8,
	0x04000004, /* word 716 (0x0B30) ftMotionCommandWait(4) */
	0x84000000, /* word 717 (0x0B34) ftMotionCommandLoopEnd() */
	0x90000000, /* word 718 (0x0B38) Goto */
	0x02D802C3, /* -> word 707 (0x0B0C) */
	0x9BF88800, /* word 720 (0x0B40) Effect(-1, 34, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x440001B8, /* word 724 (0x0B50) ftMotionPlayVoice(440) */
	0xAC000002, /* word 725 (0x0B54) ftMotionCommandSetTexturePartID(2) */
	0x74000003, /* word 726 (0x0B58) ftMotionCommandSetHitStatusAll(3) */
	0x90000000, /* word 727 (0x0B5C) Goto */
	0x02DA02C3, /* -> word 707 (0x0B0C) */
	0x90000000, /* word 729 (0x0B64) Goto */
	0x02F102C3, /* -> word 707 (0x0B0C) */
	0x9BF88000, /* word 731 (0x0B6C) Effect(-1, 32, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x98003400, /* word 735 (0x0B7C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 739 (0x0B8C) ftMotionCommandEnd() */
	0xBC000003, /* word 740 (0x0B90) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 741 (0x0B94) ftMotionCommandEnd() */
	0xBC000003, /* word 742 (0x0B98) ftMotionCommandSetSlopeContour(3) */
	0x440001A5, /* word 743 (0x0B9C) ftMotionPlayVoice(421) */
	0xAC000002, /* word 744 (0x0BA0) ftMotionCommandSetTexturePartID(2) */
	0x80000006, /* word 745 (0x0BA4) ftMotionCommandLoopBegin(6) */
	0x9800A000, /* word 746 (0x0BA8) Effect(0, 40, 0, 0, 130, 0, 200, 260, 200) */
	0x00000082,
	0x000000C8,
	0x010400C8,
	0x04000014, /* word 750 (0x0BB8) ftMotionCommandWait(20) */
	0x84000000, /* word 751 (0x0BBC) ftMotionCommandLoopEnd() */
	0x90000000, /* word 752 (0x0BC0) Goto */
	0x02FB02E6, /* -> word 742 (0x0B98) */
	0x48000144, /* word 754 (0x0BC8) ftMotionPlayInterruptableVoice(324) */
	0xAC000004, /* word 755 (0x0BCC) ftMotionCommandSetTexturePartID(4) */
	0xBC000003, /* word 756 (0x0BD0) ftMotionCommandSetSlopeContour(3) */
	0x98016800, /* word 757 (0x0BD4) Effect(0, 90, 0, 0, 130, 0, 200, 260, 200) */
	0x00000082,
	0x000000C8,
	0x010400C8,
	0x0400000A, /* word 761 (0x0BE4) ftMotionCommandWait(10) */
	0x90000000, /* word 762 (0x0BE8) Goto */
	0x030B02F2, /* -> word 754 (0x0BC8) */
	0xFFFFFFFF, /* word 764 (0x0BF0) data */
	0x00000006, /* word 765 (0x0BF4) data */
	0x00000169, /* word 766 (0x0BF8) data */
	0x00000064, /* word 767 (0x0BFC) data */
	0x00000000, /* word 768 (0x0C00) data */
	0x00000000, /* word 769 (0x0C04) data */
	0x00000000, /* word 770 (0x0C08) data */
	0xFFFFFFFF, /* word 771 (0x0C0C) data */
	0x00000006, /* word 772 (0x0C10) data */
	0x00000169, /* word 773 (0x0C14) data */
	0x00000064, /* word 774 (0x0C18) data */
	0x00000000, /* word 775 (0x0C1C) data */
	0x00000000, /* word 776 (0x0C20) data */
	0x00000000, /* word 777 (0x0C24) data */
	0x30000000, /* word 778 (0x0C28) SetThrow */
	0x032A02FC, /* -> word 764 (0x0BF0) */
	0xBC000003, /* word 780 (0x0C30) ftMotionCommandSetSlopeContour(3) */
	0x98002C00, /* word 781 (0x0C34) Effect(0, 11, 0, 0, 0, -120, 0, 60, 0) */
	0x00000000,
	0xFF880000,
	0x003C0000,
	0x08000006, /* word 785 (0x0C44) ftMotionCommandWaitAsync(6) */
	0x0C038030, /* word 786 (0x0C48) MakeAttackColl(0, 0, 28, 1, 1, 0, 290, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0) */
	0x01220000,
	0x00000000,
	0x5A464003,
	0x00200000,
	0x38000013, /* word 791 (0x0C5C) ftMotionPlayFGM(19) */
	0x04000001, /* word 792 (0x0C60) ftMotionCommandWait(1) */
	0x18000000, /* word 793 (0x0C64) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 794 (0x0C68) ftMotionCommandEnd() */
	0x00000037, /* word 795 (0x0C6C) data */
	0x00000010, /* word 796 (0x0C70) data */
	0x0000002D, /* word 797 (0x0C74) data */
	0x00000046, /* word 798 (0x0C78) data */
	0x00000000, /* word 799 (0x0C7C) data */
	0x00000046, /* word 800 (0x0C80) data */
	0x00000000, /* word 801 (0x0C84) data */
	0xFFFFFFFF, /* word 802 (0x0C88) data */
	0x00000006, /* word 803 (0x0C8C) data */
	0x00000169, /* word 804 (0x0C90) data */
	0x00000064, /* word 805 (0x0C94) data */
	0x00000000, /* word 806 (0x0C98) data */
	0x00000000, /* word 807 (0x0C9C) data */
	0x00000000, /* word 808 (0x0CA0) data */
	0x30000000, /* word 809 (0x0CA4) SetThrow */
	0x0350031B, /* -> word 795 (0x0C6C) */
	0x4C00002B, /* word 811 (0x0CAC) ftMotionCommandPlayFGMStoreInfo(43) */
	0x04000004, /* word 812 (0x0CB0) ftMotionCommandWait(4) */
	0x74000002, /* word 813 (0x0CB4) ftMotionCommandSetHitStatusAll(2) */
	0x0800000E, /* word 814 (0x0CB8) ftMotionCommandWaitAsync(14) */
	0x440001A0, /* word 815 (0x0CBC) ftMotionPlayVoice(416) */
	0x38000012, /* word 816 (0x0CC0) ftMotionPlayFGM(18) */
	0x98007C00, /* word 817 (0x0CC4) Effect(0, 31, 0, 0, 200, 280, 0, 0, 0) */
	0x000000C8,
	0x01180000,
	0x00000000,
	0x98004C00, /* word 821 (0x0CD4) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x9BF88400, /* word 825 (0x0CE4) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x5C000001, /* word 829 (0x0CF4) ftMotionCommandSetFlag2(1) */
	0x74000001, /* word 830 (0x0CF8) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 831 (0x0CFC) ftMotionCommandEnd() */
	0x00000034, /* word 832 (0x0D00) data */
	0x0000000C, /* word 833 (0x0D04) data */
	0x0000002D, /* word 834 (0x0D08) data */
	0x00000046, /* word 835 (0x0D0C) data */
	0x00000000, /* word 836 (0x0D10) data */
	0x00000050, /* word 837 (0x0D14) data */
	0x00000000, /* word 838 (0x0D18) data */
	0xFFFFFFFF, /* word 839 (0x0D1C) data */
	0x00000008, /* word 840 (0x0D20) data */
	0x00000169, /* word 841 (0x0D24) data */
	0x00000064, /* word 842 (0x0D28) data */
	0x00000000, /* word 843 (0x0D2C) data */
	0x00000000, /* word 844 (0x0D30) data */
	0x00000000, /* word 845 (0x0D34) data */
	0xAC000003, /* word 846 (0x0D38) ftMotionCommandSetTexturePartID(3) */
	0x30000000, /* word 847 (0x0D3C) SetThrow */
	0x03860340, /* -> word 832 (0x0D00) */
	0x440001A3, /* word 849 (0x0D44) ftMotionPlayVoice(419) */
	0x04000004, /* word 850 (0x0D48) ftMotionCommandWait(4) */
	0x74000002, /* word 851 (0x0D4C) ftMotionCommandSetHitStatusAll(2) */
	0x0800000A, /* word 852 (0x0D50) ftMotionCommandWaitAsync(10) */
	0x9BF88400, /* word 853 (0x0D54) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x98003400, /* word 857 (0x0D64) Effect(0, 13, 0, 0, 0, 260, 0, 0, 0) */
	0x00000000,
	0x01040000,
	0x00000000,
	0x3800012F, /* word 861 (0x0D74) ftMotionPlayFGM(303) */
	0x04000008, /* word 862 (0x0D78) ftMotionCommandWait(8) */
	0xAC000002, /* word 863 (0x0D7C) ftMotionCommandSetTexturePartID(2) */
	0x0C014140, /* word 864 (0x0D80) MakeAttackColl(0, 0, 10, 10, 0, 0, 300, 120, 0, 0, 361, 80, 0, 3, 1, 2, 0, 20) */
	0x012C0078,
	0x00000000,
	0x5A450003,
	0x01400A00,
	0x74000001, /* word 869 (0x0D94) ftMotionCommandSetHitStatusAll(1) */
	0x80000002, /* word 870 (0x0D98) ftMotionCommandLoopBegin(2) */
	0x3800002B, /* word 871 (0x0D9C) ftMotionPlayFGM(43) */
	0x0400000E, /* word 872 (0x0DA0) ftMotionCommandWait(14) */
	0x84000000, /* word 873 (0x0DA4) ftMotionCommandLoopEnd() */
	0x58000001, /* word 874 (0x0DA8) ftMotionCommandSetFlag1(1) */
	0x0800002D, /* word 875 (0x0DAC) ftMotionCommandWaitAsync(45) */
	0x98007C00, /* word 876 (0x0DB0) Effect(0, 31, 0, 0, 200, -280, 0, 0, 0) */
	0x000000C8,
	0xFEE80000,
	0x00000000,
	0x98004C00, /* word 880 (0x0DC0) Effect(0, 19, 0, 0, 0, 150, 0, 0, 0) */
	0x00000000,
	0x00960000,
	0x00000000,
	0x9BF88400, /* word 884 (0x0DD0) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x38000012, /* word 888 (0x0DE0) ftMotionPlayFGM(18) */
	0x5C000001, /* word 889 (0x0DE4) ftMotionCommandSetFlag2(1) */
	0x18000000, /* word 890 (0x0DE8) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 891 (0x0DEC) ftMotionCommandEnd() */
	0x88000000, /* word 892 (0x0DF0) Subroutine */
	0x038001AB, /* extern -> 0x6AC */
	0x00000000, /* word 894 (0x0DF8) ftMotionCommandEnd() */
	0x88000000, /* word 895 (0x0DFC) Subroutine */
	0x038301B1, /* extern -> 0x6C4 */
	0x00000000, /* word 897 (0x0E04) ftMotionCommandEnd() */
	0x88000000, /* word 898 (0x0E08) Subroutine */
	0x038801B3, /* extern -> 0x6CC */
	0x00000000, /* word 900 (0x0E10) ftMotionCommandEnd() */
	0x88000000, /* word 901 (0x0E14) Subroutine */
	0x038B006E, /* -> word 110 (0x01B8) */
	0x88000000, /* word 903 (0x0E1C) Subroutine */
	0x038D01BC, /* extern -> 0x6F0 */
	0x00000000, /* word 905 (0x0E24) ftMotionCommandEnd() */
	0x88000000, /* word 906 (0x0E28) Subroutine */
	0x05CF006E, /* -> word 110 (0x01B8) */
	0x88000000, /* word 908 (0x0E30) Subroutine */
	0xFFFF01C3, /* extern -> 0x70C */
	0x00000000, /* word 910 (0x0E38) ftMotionCommandEnd() */
	0xC4000006, /* word 911 (0x0E3C) ftMotionCommandMakeRumble(0, 6) */
	0xAC000003, /* word 912 (0x0E40) ftMotionCommandSetTexturePartID(3) */
	0x0800002F, /* word 913 (0x0E44) ftMotionCommandWaitAsync(47) */
	0x0C02C020, /* word 914 (0x0E48) MakeAttackColl(0, 0, 22, 1, 0, 0, 100, 0, 0, 0, 361, 100, 60, 3, 0, 0, 1, 0) */
	0x00640000,
	0x00000000,
	0x5A4640F3,
	0x00020000,
	0x04000003, /* word 919 (0x0E5C) ftMotionCommandWait(3) */
	0x18000000, /* word 920 (0x0E60) ftMotionCommandClearAttackCollAll() */
	0x0800003C, /* word 921 (0x0E64) ftMotionCommandWaitAsync(60) */
	0x58000001, /* word 922 (0x0E68) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 923 (0x0E6C) ftMotionCommandEnd() */
	0x08000002, /* word 924 (0x0E70) ftMotionCommandWaitAsync(2) */
	0x0C014050, /* word 925 (0x0E74) MakeAttackColl(0, 0, 10, 2, 1, 0, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8) */
	0x00A00000,
	0x00000000,
	0x5A432003,
	0x00000400,
	0x0C812050, /* word 930 (0x0E88) MakeAttackColl(1, 0, 9, 2, 1, 0, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8) */
	0x00A00000,
	0x00000000,
	0x5A432003,
	0x00000400,
	0x4C00002B, /* word 935 (0x0E9C) ftMotionCommandPlayFGMStoreInfo(43) */
	0x04000002, /* word 936 (0x0EA0) ftMotionCommandWait(2) */
	0x18000000, /* word 937 (0x0EA4) ftMotionCommandClearAttackCollAll() */
	0x0800000A, /* word 938 (0x0EA8) ftMotionCommandWaitAsync(10) */
	0x58000001, /* word 939 (0x0EAC) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 940 (0x0EB0) ftMotionCommandEnd() */
	0x08000003, /* word 941 (0x0EB4) ftMotionCommandWaitAsync(3) */
	0x0C020050, /* word 942 (0x0EB8) MakeAttackColl(0, 0, 16, 2, 1, 0, 180, 16, 0, 0, 70, 50, 0, 3, 0, 0, 0, 8) */
	0x00B40010,
	0x00000000,
	0x11832003,
	0x00000400,
	0x0C81E050, /* word 947 (0x0ECC) MakeAttackColl(1, 0, 15, 2, 1, 0, 180, 0, 0, 0, 70, 50, 0, 3, 0, 0, 0, 8) */
	0x00B40000,
	0x00000000,
	0x11832003,
	0x00000400,
	0x4C00002B, /* word 952 (0x0EE0) ftMotionCommandPlayFGMStoreInfo(43) */
	0x04000003, /* word 953 (0x0EE4) ftMotionCommandWait(3) */
	0x18000000, /* word 954 (0x0EE8) ftMotionCommandClearAttackCollAll() */
	0x08000008, /* word 955 (0x0EEC) ftMotionCommandWaitAsync(8) */
	0x58000001, /* word 956 (0x0EF0) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 957 (0x0EF4) ftMotionCommandEnd() */
	0x440001A0, /* word 958 (0x0EF8) ftMotionPlayVoice(416) */
	0x08000003, /* word 959 (0x0EFC) ftMotionCommandWaitAsync(3) */
	0x0C032080, /* word 960 (0x0F00) MakeAttackColl(0, 0, 25, 4, 0, 0, 150, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00960000,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x0C836080, /* word 965 (0x0F14) MakeAttackColl(1, 0, 27, 4, 0, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x01180000,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x4C00002A, /* word 970 (0x0F28) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000002, /* word 971 (0x0F2C) ftMotionCommandWait(2) */
	0x20020000, /* word 972 (0x0F30) ftMotionCommandSetAttackCollDamage(0, 4) */
	0x20820000, /* word 973 (0x0F34) ftMotionCommandSetAttackCollDamage(1, 4) */
	0x24005A00, /* word 974 (0x0F38) ftMotionCommandSetAttackCollSize(0, 180) */
	0x24808C00, /* word 975 (0x0F3C) ftMotionCommandSetAttackCollSize(1, 280) */
	0x04000004, /* word 976 (0x0F40) ftMotionCommandWait(4) */
	0x18000000, /* word 977 (0x0F44) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 978 (0x0F48) ftMotionCommandEnd() */
	0xAC000002, /* word 979 (0x0F4C) ftMotionCommandSetTexturePartID(2) */
	0xBC000004, /* word 980 (0x0F50) ftMotionCommandSetSlopeContour(4) */
	0x50000000, /* word 981 (0x0F54) ftMotionCommandPlaySmashVoice(0) */
	0x98004C00, /* word 982 (0x0F58) Effect(0, 19, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4C000029, /* word 986 (0x0F68) ftMotionCommandPlayFGMStoreInfo(41) */
	0x08000002, /* word 987 (0x0F6C) ftMotionCommandWaitAsync(2) */
	0x0C020050, /* word 988 (0x0F70) MakeAttackColl(0, 0, 16, 2, 1, 0, 180, 0, 0, 0, 30, 100, 40, 3, 0, 0, 0, 0) */
	0x00B40000,
	0x00000000,
	0x078640A3,
	0x00000000,
	0x04000004, /* word 993 (0x0F84) ftMotionCommandWait(4) */
	0x18000000, /* word 994 (0x0F88) ftMotionCommandClearAttackCollAll() */
	0x0C014050, /* word 995 (0x0F8C) MakeAttackColl(0, 0, 10, 2, 1, 0, 180, 0, 0, 0, 30, 100, 40, 3, 0, 0, 0, 0) */
	0x00B40000,
	0x00000000,
	0x078640A3,
	0x00000000,
	0x04000004, /* word 1000 (0x0FA0) ftMotionCommandWait(4) */
	0x18000000, /* word 1001 (0x0FA4) ftMotionCommandClearAttackCollAll() */
	0x80000002, /* word 1002 (0x0FA8) ftMotionCommandLoopBegin(2) */
	0x0C020050, /* word 1003 (0x0FAC) MakeAttackColl(0, 0, 16, 2, 1, 0, 180, 0, 0, 0, 30, 100, 40, 3, 0, 0, 0, 0) */
	0x00B40000,
	0x00000000,
	0x078640A3,
	0x00000000,
	0x04000007, /* word 1008 (0x0FC0) ftMotionCommandWait(7) */
	0x18000000, /* word 1009 (0x0FC4) ftMotionCommandClearAttackCollAll() */
	0x0C014050, /* word 1010 (0x0FC8) MakeAttackColl(0, 0, 10, 2, 1, 0, 180, 0, 0, 0, 30, 100, 40, 3, 0, 0, 0, 0) */
	0x00B40000,
	0x00000000,
	0x078640A3,
	0x00000000,
	0x04000007, /* word 1015 (0x0FDC) ftMotionCommandWait(7) */
	0x18000000, /* word 1016 (0x0FE0) ftMotionCommandClearAttackCollAll() */
	0x84000000, /* word 1017 (0x0FE4) ftMotionCommandLoopEnd() */
	0x04000006, /* word 1018 (0x0FE8) ftMotionCommandWait(6) */
	0xAC000000, /* word 1019 (0x0FEC) ftMotionCommandSetTexturePartID(0) */
	0x0C018050, /* word 1020 (0x0FF0) MakeAttackColl(0, 0, 12, 2, 1, 0, 280, 0, 100, 0, 361, 100, 0, 3, 0, 1, 0, 50) */
	0x01180000,
	0x00640000,
	0x5A464003,
	0x00201900,
	0x08000004, /* word 1025 (0x1004) ftMotionCommandWaitAsync(4) */
	0x18000000, /* word 1026 (0x1008) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1027 (0x100C) ftMotionCommandEnd() */
	0x08000008, /* word 1028 (0x1010) ftMotionCommandWaitAsync(8) */
	0x0C030150, /* word 1029 (0x1014) MakeAttackColl(0, 0, 24, 10, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00B40014,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x0C832150, /* word 1034 (0x1028) MakeAttackColl(1, 0, 25, 10, 1, 0, 220, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00DC0050,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x4C00002A, /* word 1039 (0x103C) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000005, /* word 1040 (0x1040) ftMotionCommandWait(5) */
	0x18000000, /* word 1041 (0x1044) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1042 (0x1048) ftMotionCommandEnd() */
	0x08000008, /* word 1043 (0x104C) ftMotionCommandWaitAsync(8) */
	0x0C030150, /* word 1044 (0x1050) MakeAttackColl(0, 0, 24, 10, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00B40014,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x0C832150, /* word 1049 (0x1064) MakeAttackColl(1, 0, 25, 10, 1, 0, 220, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00DC0050,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x4C00002A, /* word 1054 (0x1078) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000005, /* word 1055 (0x107C) ftMotionCommandWait(5) */
	0x18000000, /* word 1056 (0x1080) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1057 (0x1084) ftMotionCommandEnd() */
	0x08000008, /* word 1058 (0x1088) ftMotionCommandWaitAsync(8) */
	0x0C030150, /* word 1059 (0x108C) MakeAttackColl(0, 0, 24, 10, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00B40014,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x0C832150, /* word 1064 (0x10A0) MakeAttackColl(1, 0, 25, 10, 1, 0, 220, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10) */
	0x00DC0050,
	0x00000000,
	0x5A464003,
	0x00220500,
	0x4C00002A, /* word 1069 (0x10B4) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000005, /* word 1070 (0x10B8) ftMotionCommandWait(5) */
	0x18000000, /* word 1071 (0x10BC) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1072 (0x10C0) ftMotionCommandEnd() */
	0xBC000003, /* word 1073 (0x10C4) ftMotionCommandSetSlopeContour(3) */
	0x08000005, /* word 1074 (0x10C8) ftMotionCommandWaitAsync(5) */
	0x0C01C150, /* word 1075 (0x10CC) MakeAttackColl(0, 0, 14, 10, 1, 0, 180, 0, 0, 0, 80, 150, 0, 3, 0, 1, 0, 0) */
	0x00B40000,
	0x00000000,
	0x14096003,
	0x00200000,
	0x0C81E150, /* word 1080 (0x10E0) MakeAttackColl(1, 0, 15, 10, 1, 0, 290, 60, 0, 0, 80, 150, 0, 3, 0, 1, 0, 0) */
	0x0122003C,
	0x00000000,
	0x14096003,
	0x00200000,
	0x4C00002A, /* word 1085 (0x10F4) ftMotionCommandPlayFGMStoreInfo(42) */
	0x0400000C, /* word 1086 (0x10F8) ftMotionCommandWait(12) */
	0x18000000, /* word 1087 (0x10FC) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1088 (0x1100) ftMotionCommandEnd() */
	0xBC000002, /* word 1089 (0x1104) ftMotionCommandSetSlopeContour(2) */
	0x08000003, /* word 1090 (0x1108) ftMotionCommandWaitAsync(3) */
	0x0C0260F0, /* word 1091 (0x110C) MakeAttackColl(0, 0, 19, 7, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x00B40014,
	0x00000000,
	0x5A464003,
	0x00220000,
	0x0C8280F0, /* word 1096 (0x1120) MakeAttackColl(1, 0, 20, 7, 1, 0, 260, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x0104008C,
	0x00000000,
	0x5A464003,
	0x00220000,
	0x4C00002A, /* word 1101 (0x1134) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000004, /* word 1102 (0x1138) ftMotionCommandWait(4) */
	0x18000000, /* word 1103 (0x113C) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1104 (0x1140) ftMotionCommandEnd() */
	0xBC000003, /* word 1105 (0x1144) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 1106 (0x1148) ftMotionCommandWaitAsync(4) */
	0x98787C00, /* word 1107 (0x114C) Effect(15, 31, 0, 60, 0, 0, 0, 0, 0) */
	0x003C0000,
	0x00000000,
	0x00000000,
	0x08000010, /* word 1111 (0x115C) ftMotionCommandWaitAsync(16) */
	0x50000000, /* word 1112 (0x1160) ftMotionCommandPlaySmashVoice(0) */
	0x0C01C210, /* word 1113 (0x1164) MakeAttackColl(0, 0, 14, 16, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30) */
	0x00B40000,
	0x00000000,
	0x5A464003,
	0x00400F00,
	0x0C81E210, /* word 1118 (0x1178) MakeAttackColl(1, 0, 15, 16, 1, 0, 240, 60, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30) */
	0x00F0003C,
	0x00000000,
	0x5A464003,
	0x00400F00,
	0x98004C00, /* word 1123 (0x118C) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x4C000029, /* word 1127 (0x119C) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000005, /* word 1128 (0x11A0) ftMotionCommandWait(5) */
	0x18000000, /* word 1129 (0x11A4) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1130 (0x11A8) ftMotionCommandEnd() */
	0xBC000003, /* word 1131 (0x11AC) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 1132 (0x11B0) ftMotionCommandWaitAsync(4) */
	0x98787C00, /* word 1133 (0x11B4) Effect(15, 31, 0, 60, 0, 0, 0, 0, 0) */
	0x003C0000,
	0x00000000,
	0x00000000,
	0x08000010, /* word 1137 (0x11C4) ftMotionCommandWaitAsync(16) */
	0x50000000, /* word 1138 (0x11C8) ftMotionCommandPlaySmashVoice(0) */
	0x0C01C210, /* word 1139 (0x11CC) MakeAttackColl(0, 0, 14, 16, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30) */
	0x00B40000,
	0x00000000,
	0x5A464003,
	0x00400F00,
	0x0C81E210, /* word 1144 (0x11E0) MakeAttackColl(1, 0, 15, 16, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30) */
	0x00F00032,
	0x00000000,
	0x5A464003,
	0x00400F00,
	0x98004C00, /* word 1149 (0x11F4) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x4C000029, /* word 1153 (0x1204) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000005, /* word 1154 (0x1208) ftMotionCommandWait(5) */
	0x18000000, /* word 1155 (0x120C) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1156 (0x1210) ftMotionCommandEnd() */
	0xBC000003, /* word 1157 (0x1214) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 1158 (0x1218) ftMotionCommandWaitAsync(4) */
	0x98787C00, /* word 1159 (0x121C) Effect(15, 31, 0, 60, 0, 0, 0, 0, 0) */
	0x003C0000,
	0x00000000,
	0x00000000,
	0x08000010, /* word 1163 (0x122C) ftMotionCommandWaitAsync(16) */
	0x50000000, /* word 1164 (0x1230) ftMotionCommandPlaySmashVoice(0) */
	0x0C01C1F0, /* word 1165 (0x1234) MakeAttackColl(0, 0, 14, 15, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30) */
	0x00B40000,
	0x00000000,
	0x5A464003,
	0x00400F00,
	0x0C81E1F0, /* word 1170 (0x1248) MakeAttackColl(1, 0, 15, 15, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30) */
	0x00F00032,
	0x00000000,
	0x5A464003,
	0x00400F00,
	0x98004C00, /* word 1175 (0x125C) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x4C000029, /* word 1179 (0x126C) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000005, /* word 1180 (0x1270) ftMotionCommandWait(5) */
	0x18000000, /* word 1181 (0x1274) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1182 (0x1278) ftMotionCommandEnd() */
	0xBC000003, /* word 1183 (0x127C) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 1184 (0x1280) ftMotionCommandWaitAsync(4) */
	0x98787C00, /* word 1185 (0x1284) Effect(15, 31, 0, 60, 0, 0, 0, 0, 0) */
	0x003C0000,
	0x00000000,
	0x00000000,
	0x08000010, /* word 1189 (0x1294) ftMotionCommandWaitAsync(16) */
	0x50000000, /* word 1190 (0x1298) ftMotionCommandPlaySmashVoice(0) */
	0x0C01C1D0, /* word 1191 (0x129C) MakeAttackColl(0, 0, 14, 14, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30) */
	0x00B40000,
	0x00000000,
	0x5A464003,
	0x00400F00,
	0x0C81E1D0, /* word 1196 (0x12B0) MakeAttackColl(1, 0, 15, 14, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30) */
	0x00F00032,
	0x00000000,
	0x5A464003,
	0x00400F00,
	0x98004C00, /* word 1201 (0x12C4) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x4C000029, /* word 1205 (0x12D4) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000005, /* word 1206 (0x12D8) ftMotionCommandWait(5) */
	0x18000000, /* word 1207 (0x12DC) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1208 (0x12E0) ftMotionCommandEnd() */
	0xBC000003, /* word 1209 (0x12E4) ftMotionCommandSetSlopeContour(3) */
	0x08000004, /* word 1210 (0x12E8) ftMotionCommandWaitAsync(4) */
	0x98787C00, /* word 1211 (0x12EC) Effect(15, 31, 0, 60, 0, 0, 0, 0, 0) */
	0x003C0000,
	0x00000000,
	0x00000000,
	0x08000010, /* word 1215 (0x12FC) ftMotionCommandWaitAsync(16) */
	0x50000000, /* word 1216 (0x1300) ftMotionCommandPlaySmashVoice(0) */
	0x0C01C1D0, /* word 1217 (0x1304) MakeAttackColl(0, 0, 14, 14, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30) */
	0x00B40000,
	0x00000000,
	0x5A464003,
	0x00400F00,
	0x0C81E1D0, /* word 1222 (0x1318) MakeAttackColl(1, 0, 15, 14, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30) */
	0x00F00032,
	0x00000000,
	0x5A464003,
	0x00400F00,
	0x98004C00, /* word 1227 (0x132C) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x4C000029, /* word 1231 (0x133C) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000005, /* word 1232 (0x1340) ftMotionCommandWait(5) */
	0x18000000, /* word 1233 (0x1344) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1234 (0x1348) ftMotionCommandEnd() */
	0x08000007, /* word 1235 (0x134C) ftMotionCommandWaitAsync(7) */
	0x98007C00, /* word 1236 (0x1350) Effect(0, 31, 0, 0, 300, -100, 0, 0, 0) */
	0x0000012C,
	0xFF9C0000,
	0x00000000,
	0x50000000, /* word 1240 (0x1360) ftMotionCommandPlaySmashVoice(0) */
	0x70600003, /* word 1241 (0x1364) ftMotionCommandSetHitStatusPartID(12, 3) */
	0x0C018270, /* word 1242 (0x1368) MakeAttackColl(0, 0, 12, 19, 1, 0, 400, 0, 100, 0, 85, 120, 0, 3, 0, 2, 0, 26) */
	0x01900000,
	0x00640000,
	0x15478003,
	0x00400D00,
	0x98003400, /* word 1247 (0x137C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4C000029, /* word 1251 (0x138C) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000004, /* word 1252 (0x1390) ftMotionCommandWait(4) */
	0x6C000001, /* word 1253 (0x1394) ftMotionCommandSetHitStatusPartAll(1) */
	0x04000005, /* word 1254 (0x1398) ftMotionCommandWait(5) */
	0x18000000, /* word 1255 (0x139C) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1256 (0x13A0) ftMotionCommandEnd() */
	0xBC000004, /* word 1257 (0x13A4) ftMotionCommandSetSlopeContour(4) */
	0x08000004, /* word 1258 (0x13A8) ftMotionCommandWaitAsync(4) */
	0x98C87C00, /* word 1259 (0x13AC) Effect(25, 31, 0, 120, 0, 0, 0, 0, 0) */
	0x00780000,
	0x00000000,
	0x00000000,
	0x08000008, /* word 1263 (0x13BC) ftMotionCommandWaitAsync(8) */
	0x50000000, /* word 1264 (0x13C0) ftMotionCommandPlaySmashVoice(0) */
	0x0C032230, /* word 1265 (0x13C4) MakeAttackColl(0, 0, 25, 17, 1, 0, 170, 0, 0, 20, 361, 100, 0, 3, 0, 2, 1, 20) */
	0x00AA0000,
	0x00000014,
	0x5A464003,
	0x00420A00,
	0x0C832230, /* word 1270 (0x13D8) MakeAttackColl(1, 0, 25, 17, 1, 0, 210, 120, 0, 50, 361, 100, 0, 3, 0, 2, 1, 20) */
	0x00D20078,
	0x00000032,
	0x5A464003,
	0x00420A00,
	0x0D028230, /* word 1275 (0x13EC) MakeAttackColl(2, 0, 20, 17, 1, 0, 170, 0, 0, 20, 361, 100, 0, 3, 0, 2, 1, 20) */
	0x00AA0000,
	0x00000014,
	0x5A464003,
	0x00420A00,
	0x0D828230, /* word 1280 (0x1400) MakeAttackColl(3, 0, 20, 17, 1, 0, 210, 120, 0, 50, 361, 100, 0, 3, 0, 2, 1, 20) */
	0x00D20078,
	0x00000032,
	0x5A464003,
	0x00420A00,
	0x98004000, /* word 1285 (0x1414) Effect(0, 16, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4C00002A, /* word 1289 (0x1424) ftMotionCommandPlayFGMStoreInfo(42) */
	0x0400000F, /* word 1290 (0x1428) ftMotionCommandWait(15) */
	0x98003C00, /* word 1291 (0x142C) Effect(0, 15, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4C00002A, /* word 1295 (0x143C) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000007, /* word 1296 (0x1440) ftMotionCommandWait(7) */
	0xBC000000, /* word 1297 (0x1444) ftMotionCommandSetSlopeContour(0) */
	0x18000000, /* word 1298 (0x1448) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1299 (0x144C) ftMotionCommandEnd() */
	0x08000003, /* word 1300 (0x1450) ftMotionCommandWaitAsync(3) */
	0x58000032, /* word 1301 (0x1454) ftMotionCommandSetFlag1(50) */
	0x0C0321D0, /* word 1302 (0x1458) MakeAttackColl(0, 0, 25, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15) */
	0x00F0000A,
	0x00000000,
	0x5A464003,
	0x00420780,
	0x0C8281D0, /* word 1307 (0x146C) MakeAttackColl(1, 0, 20, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15) */
	0x00F0000A,
	0x00000000,
	0x5A464003,
	0x00420780,
	0x0D00A1D0, /* word 1312 (0x1480) MakeAttackColl(2, 0, 5, 14, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15) */
	0x01040000,
	0x00000000,
	0x5A464003,
	0x00420780,
	0x4C00002A, /* word 1317 (0x1494) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000008, /* word 1318 (0x1498) ftMotionCommandWait(8) */
	0x0C032170, /* word 1319 (0x149C) MakeAttackColl(0, 0, 25, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0) */
	0x00F0000A,
	0x00000000,
	0x5A464003,
	0x00420000,
	0x0C828170, /* word 1324 (0x14B0) MakeAttackColl(1, 0, 20, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0) */
	0x00F0000A,
	0x00000000,
	0x5A464003,
	0x00420000,
	0x0D00A170, /* word 1329 (0x14C4) MakeAttackColl(2, 0, 5, 11, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0) */
	0x01040000,
	0x00000000,
	0x5A464003,
	0x00420000,
	0x0400001A, /* word 1334 (0x14D8) ftMotionCommandWait(26) */
	0x58000000, /* word 1335 (0x14DC) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1336 (0x14E0) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1337 (0x14E4) ftMotionCommandEnd() */
	0x0800000B, /* word 1338 (0x14E8) ftMotionCommandWaitAsync(11) */
	0x58000001, /* word 1339 (0x14EC) ftMotionCommandSetFlag1(1) */
	0x0C032210, /* word 1340 (0x14F0) MakeAttackColl(0, 0, 25, 16, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 2, 1, 10) */
	0x00DCFFE2,
	0x002D0000,
	0x5A464003,
	0x00420500,
	0x0C832210, /* word 1345 (0x1504) MakeAttackColl(1, 0, 25, 16, 1, 0, 270, 80, 30, 0, 361, 100, 0, 3, 0, 2, 1, 10) */
	0x010E0050,
	0x001E0000,
	0x5A464003,
	0x00420500,
	0x4C000029, /* word 1350 (0x1518) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000004, /* word 1351 (0x151C) ftMotionCommandWait(4) */
	0x0C032150, /* word 1352 (0x1520) MakeAttackColl(0, 0, 25, 10, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x00DCFFE2,
	0x002D0000,
	0x5A464003,
	0x00220000,
	0x0C832150, /* word 1357 (0x1534) MakeAttackColl(1, 0, 25, 10, 1, 0, 270, 80, 30, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x010E0050,
	0x001E0000,
	0x5A464003,
	0x00220000,
	0x0400000C, /* word 1362 (0x1548) ftMotionCommandWait(12) */
	0x58000000, /* word 1363 (0x154C) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1364 (0x1550) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1365 (0x1554) ftMotionCommandEnd() */
	0x3800004D, /* word 1366 (0x1558) ftMotionPlayFGM(77) */
	0x98003400, /* word 1367 (0x155C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 1371 (0x156C) ftMotionCommandEnd() */
	0x0800000A, /* word 1372 (0x1570) ftMotionCommandWaitAsync(10) */
	0x58000001, /* word 1373 (0x1574) ftMotionCommandSetFlag1(1) */
	0x0C032210, /* word 1374 (0x1578) MakeAttackColl(0, 0, 25, 16, 1, 0, 240, -30, 45, 0, 361, 100, 0, 3, 0, 2, 1, 10) */
	0x00F0FFE2,
	0x002D0000,
	0x5A464003,
	0x00420500,
	0x0C832210, /* word 1379 (0x158C) MakeAttackColl(1, 0, 25, 16, 1, 0, 290, 80, 30, 0, 361, 100, 0, 3, 0, 2, 1, 10) */
	0x01220050,
	0x001E0000,
	0x5A464003,
	0x00420500,
	0x4C000029, /* word 1384 (0x15A0) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000004, /* word 1385 (0x15A4) ftMotionCommandWait(4) */
	0x0C032150, /* word 1386 (0x15A8) MakeAttackColl(0, 0, 25, 10, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x00DCFFE2,
	0x002D0000,
	0x5A464003,
	0x00220000,
	0x0C832150, /* word 1391 (0x15BC) MakeAttackColl(1, 0, 25, 10, 1, 0, 270, 80, 30, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x010E0050,
	0x001E0000,
	0x5A464003,
	0x00220000,
	0x04000006, /* word 1396 (0x15D0) ftMotionCommandWait(6) */
	0x58000000, /* word 1397 (0x15D4) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1398 (0x15D8) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1399 (0x15DC) ftMotionCommandEnd() */
	0x3800004D, /* word 1400 (0x15E0) ftMotionPlayFGM(77) */
	0x98003400, /* word 1401 (0x15E4) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 1405 (0x15F4) ftMotionCommandEnd() */
	0x08000002, /* word 1406 (0x15F8) ftMotionCommandWaitAsync(2) */
	0x58000014, /* word 1407 (0x15FC) ftMotionCommandSetFlag1(20) */
	0x0C032190, /* word 1408 (0x1600) MakeAttackColl(0, 0, 25, 12, 1, 0, 220, 0, 0, 0, 80, 120, 0, 3, 0, 2, 1, 0) */
	0x00DC0000,
	0x00000000,
	0x14078003,
	0x00420000,
	0x0C836190, /* word 1413 (0x1614) MakeAttackColl(1, 0, 27, 12, 1, 0, 250, 0, 0, 0, 80, 120, 0, 3, 0, 2, 1, 0) */
	0x00FA0000,
	0x00000000,
	0x14078003,
	0x00420000,
	0x4C000029, /* word 1418 (0x1628) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000003, /* word 1419 (0x162C) ftMotionCommandWait(3) */
	0x0C032130, /* word 1420 (0x1630) MakeAttackColl(0, 0, 25, 9, 1, 0, 220, 0, 0, 0, 70, 120, 0, 3, 0, 1, 1, 0) */
	0x00DC0000,
	0x00000000,
	0x11878003,
	0x00220000,
	0x0C836130, /* word 1425 (0x1644) MakeAttackColl(1, 0, 27, 9, 1, 0, 250, 0, 0, 0, 70, 120, 0, 3, 0, 1, 1, 0) */
	0x00FA0000,
	0x00000000,
	0x11878003,
	0x00220000,
	0x04000007, /* word 1430 (0x1658) ftMotionCommandWait(7) */
	0x58000000, /* word 1431 (0x165C) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1432 (0x1660) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1433 (0x1664) ftMotionCommandEnd() */
	0x3800004D, /* word 1434 (0x1668) ftMotionPlayFGM(77) */
	0x98003400, /* word 1435 (0x166C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 1439 (0x167C) ftMotionCommandEnd() */
	0x0800000A, /* word 1440 (0x1680) ftMotionCommandWaitAsync(10) */
	0x58000014, /* word 1441 (0x1684) ftMotionCommandSetFlag1(20) */
	0x0C032070, /* word 1442 (0x1688) MakeAttackColl(0, 0, 25, 3, 1, 0, 350, -30, 45, 0, -70, 100, 30, 3, 0, 1, 0, 0) */
	0x015EFFE2,
	0x002D0000,
	0xEE86407B,
	0x00200000,
	0x0C832070, /* word 1447 (0x169C) MakeAttackColl(1, 0, 25, 3, 1, 0, 350, 50, 30, 0, -70, 100, 30, 3, 0, 1, 0, 0) */
	0x015E0032,
	0x001E0000,
	0xEE86407B,
	0x00200000,
	0x80000007, /* word 1452 (0x16B0) ftMotionCommandLoopBegin(7) */
	0x4C0000DB, /* word 1453 (0x16B4) ftMotionCommandPlayFGMStoreInfo(219) */
	0x04000002, /* word 1454 (0x16B8) ftMotionCommandWait(2) */
	0x18000000, /* word 1455 (0x16BC) ftMotionCommandClearAttackCollAll() */
	0x04000001, /* word 1456 (0x16C0) ftMotionCommandWait(1) */
	0x2C000000, /* word 1457 (0x16C4) ftMotionCommandRefreshAttackCollID(0) */
	0x2C000001, /* word 1458 (0x16C8) ftMotionCommandRefreshAttackCollID(1) */
	0x84000000, /* word 1459 (0x16CC) ftMotionCommandLoopEnd() */
	0x4C0000DB, /* word 1460 (0x16D0) ftMotionCommandPlayFGMStoreInfo(219) */
	0x04000002, /* word 1461 (0x16D4) ftMotionCommandWait(2) */
	0x18000000, /* word 1462 (0x16D8) ftMotionCommandClearAttackCollAll() */
	0x58000000, /* word 1463 (0x16DC) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1464 (0x16E0) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1465 (0x16E4) ftMotionCommandEnd() */
	0x3800004D, /* word 1466 (0x16E8) ftMotionPlayFGM(77) */
	0x98003400, /* word 1467 (0x16EC) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 1471 (0x16FC) ftMotionCommandEnd() */
	0xAC000004, /* word 1472 (0x1700) ftMotionCommandSetTexturePartID(4) */
	0x0800001E, /* word 1473 (0x1704) ftMotionCommandWaitAsync(30) */
	0xC403C007, /* word 1474 (0x1708) ftMotionCommandMakeRumble(30, 7) */
	0x380000D6, /* word 1475 (0x170C) ftMotionPlayFGM(214) */
	0x5C000001, /* word 1476 (0x1710) ftMotionCommandSetFlag2(1) */
	0x08000032, /* word 1477 (0x1714) ftMotionCommandWaitAsync(50) */
	0xAC000003, /* word 1478 (0x1718) ftMotionCommandSetTexturePartID(3) */
	0x04000014, /* word 1479 (0x171C) ftMotionCommandWait(20) */
	0xAC000000, /* word 1480 (0x1720) ftMotionCommandSetTexturePartID(0) */
	0x04000014, /* word 1481 (0x1724) ftMotionCommandWait(20) */
	0xAC000003, /* word 1482 (0x1728) ftMotionCommandSetTexturePartID(3) */
	0x0400000A, /* word 1483 (0x172C) ftMotionCommandWait(10) */
	0xAC000000, /* word 1484 (0x1730) ftMotionCommandSetTexturePartID(0) */
	0x00000000, /* word 1485 (0x1734) ftMotionCommandEnd() */
	0x90000000, /* word 1486 (0x1738) Goto */
	0x05E605C0, /* -> word 1472 (0x1700) */
	0x00000000, /* word 1488 (0x1740) ftMotionCommandEnd() */
	0x98004C00, /* word 1489 (0x1744) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0xBC000003, /* word 1493 (0x1754) ftMotionCommandSetSlopeContour(3) */
	0xAC000002, /* word 1494 (0x1758) ftMotionCommandSetTexturePartID(2) */
	0x08000010, /* word 1495 (0x175C) ftMotionCommandWaitAsync(16) */
	0x54000001, /* word 1496 (0x1760) ftMotionCommandSetFlag0(1) */
	0xB09C0000, /* word 1497 (0x1764) ftMotionCommandSetColAnim(39, 0) */
	0x98807C00, /* word 1498 (0x1768) Effect(16, 31, 0, 60, 0, 0, 0, 0, 0) */
	0x003C0000,
	0x00000000,
	0x00000000,
	0x380000D7, /* word 1502 (0x1778) ftMotionPlayFGM(215) */
	0xC4000006, /* word 1503 (0x177C) ftMotionCommandMakeRumble(0, 6) */
	0x00000000, /* word 1504 (0x1780) ftMotionCommandEnd() */
	0x98004000, /* word 1505 (0x1784) Effect(0, 16, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x90000000, /* word 1509 (0x1794) Goto */
	0x062A05D6, /* -> word 1494 (0x1758) */
	0xC4000009, /* word 1511 (0x179C) ftMotionCommandMakeRumble(0, 9) */
	0x08000002, /* word 1512 (0x17A0) ftMotionCommandWaitAsync(2) */
	0x0C018331, /* word 1513 (0x17A4) MakeAttackColl(0, 0, 12, 25, 1, 1, 280, 0, 0, 0, 90, 80, 0, 3, 0, 2, 7, 90) */
	0x01180000,
	0x00000000,
	0x16850003,
	0x004E2D00,
	0x0C81E331, /* word 1518 (0x17B8) MakeAttackColl(1, 0, 15, 25, 1, 1, 120, 160, 0, 0, 90, 80, 0, 3, 0, 2, 7, 90) */
	0x007800A0,
	0x00000000,
	0x16850003,
	0x004E2D00,
	0x74000003, /* word 1523 (0x17CC) ftMotionCommandSetHitStatusAll(3) */
	0x98004C00, /* word 1524 (0x17D0) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x98787C00, /* word 1528 (0x17E0) Effect(15, 31, 0, 80, 0, 0, 0, 0, 0) */
	0x00500000,
	0x00000000,
	0x00000000,
	0x380000D9, /* word 1532 (0x17F0) ftMotionPlayFGM(217) */
	0xB0140001, /* word 1533 (0x17F4) ftMotionCommandSetColAnim(5, 1) */
	0x04000001, /* word 1534 (0x17F8) ftMotionCommandWait(1) */
	0x0C018034, /* word 1535 (0x17FC) MakeAttackColl(0, 0, 12, 1, 1, 4, 310, 0, 0, 60, 361, 100, 10, 3, 0, 1, 2, 0) */
	0x01360000,
	0x0000003C,
	0x5A46402B,
	0x00240000,
	0x0C81E034, /* word 1540 (0x1810) MakeAttackColl(1, 0, 15, 1, 1, 4, 260, 150, 0, 60, 361, 100, 10, 3, 0, 1, 2, 0) */
	0x01040096,
	0x0000003C,
	0x5A46402B,
	0x00240000,
	0x74000001, /* word 1545 (0x1824) ftMotionCommandSetHitStatusAll(1) */
	0x04000004, /* word 1546 (0x1828) ftMotionCommandWait(4) */
	0x68000000, /* word 1547 (0x182C) ftMotionCommandSetAirJumpMax(0) */
	0x58000001, /* word 1548 (0x1830) ftMotionCommandSetFlag1(1) */
	0x5C000001, /* word 1549 (0x1834) ftMotionCommandSetFlag2(1) */
	0x04000012, /* word 1550 (0x1838) ftMotionCommandWait(18) */
	0x18000000, /* word 1551 (0x183C) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1552 (0x1840) ftMotionCommandEnd() */
	0xC4000009, /* word 1553 (0x1844) ftMotionCommandMakeRumble(0, 9) */
	0x08000002, /* word 1554 (0x1848) ftMotionCommandWaitAsync(2) */
	0x0C018331, /* word 1555 (0x184C) MakeAttackColl(0, 0, 12, 25, 1, 1, 280, 0, 0, 0, 80, 80, 0, 3, 0, 2, 7, 80) */
	0x01180000,
	0x00000000,
	0x14050003,
	0x004E2800,
	0x0C81E331, /* word 1560 (0x1860) MakeAttackColl(1, 0, 15, 25, 1, 1, 120, 160, 0, 0, 80, 80, 0, 3, 0, 2, 7, 80) */
	0x007800A0,
	0x00000000,
	0x14050003,
	0x004E2800,
	0x74000003, /* word 1565 (0x1874) ftMotionCommandSetHitStatusAll(3) */
	0x98004C00, /* word 1566 (0x1878) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x98787C00, /* word 1570 (0x1888) Effect(15, 31, 0, 80, 0, 0, 0, 0, 0) */
	0x00500000,
	0x00000000,
	0x00000000,
	0x380000D9, /* word 1574 (0x1898) ftMotionPlayFGM(217) */
	0xB0140001, /* word 1575 (0x189C) ftMotionCommandSetColAnim(5, 1) */
	0x04000001, /* word 1576 (0x18A0) ftMotionCommandWait(1) */
	0x90000000, /* word 1577 (0x18A4) Goto */
	0xFFFF05FF, /* -> word 1535 (0x17FC) */
	0xAC000002, /* word 1579 (0x18AC) ftMotionCommandSetTexturePartID(2) */
	0xC403C007, /* word 1580 (0x18B0) ftMotionCommandMakeRumble(30, 7) */
	0xBC000004, /* word 1581 (0x18B4) ftMotionCommandSetSlopeContour(4) */
	0x60000001, /* word 1582 (0x18B8) ftMotionCommandSetFlag3(1) */
	0x440001A3, /* word 1583 (0x18BC) ftMotionPlayVoice(419) */
	0x0C000210, /* word 1584 (0x18C0) MakeAttackColl(0, 0, 0, 16, 1, 0, 140, 0, 300, 150, 65, 90, 0, 3, 0, 1, 1, 65) */
	0x008C0000,
	0x012C0096,
	0x1045A003,
	0x00222080,
	0x0C800210, /* word 1589 (0x18D4) MakeAttackColl(1, 0, 0, 16, 1, 0, 140, 0, 300, -150, 65, 90, 0, 3, 0, 1, 1, 65) */
	0x008C0000,
	0x012CFF6A,
	0x1045A003,
	0x00222080,
	0x0D000210, /* word 1594 (0x18E8) MakeAttackColl(2, 0, 0, 16, 1, 0, 180, 0, 0, 0, 90, 90, 0, 3, 0, 1, 1, 65) */
	0x00B40000,
	0x00000000,
	0x1685A003,
	0x00222080,
	0x04000004, /* word 1599 (0x18FC) ftMotionCommandWait(4) */
	0x8000000D, /* word 1600 (0x1900) ftMotionCommandLoopBegin(13) */
	0x4C0000DA, /* word 1601 (0x1904) ftMotionCommandPlayFGMStoreInfo(218) */
	0x04000003, /* word 1602 (0x1908) ftMotionCommandWait(3) */
	0x84000000, /* word 1603 (0x190C) ftMotionCommandLoopEnd() */
	0xBC000003, /* word 1604 (0x1910) ftMotionCommandSetSlopeContour(3) */
	0x0C000250, /* word 1605 (0x1914) MakeAttackColl(0, 0, 0, 18, 1, 0, 200, 0, 300, 150, 70, 100, 0, 3, 0, 2, 1, 80) */
	0x00C80000,
	0x012C0096,
	0x11864003,
	0x00422800,
	0x0C800250, /* word 1610 (0x1928) MakeAttackColl(1, 0, 0, 18, 1, 0, 200, 0, 300, -150, 70, 100, 0, 3, 0, 2, 1, 80) */
	0x00C80000,
	0x012CFF6A,
	0x11864003,
	0x00422800,
	0x58000001, /* word 1615 (0x193C) ftMotionCommandSetFlag1(1) */
	0x60000000, /* word 1616 (0x1940) ftMotionCommandSetFlag3(0) */
	0x04000002, /* word 1617 (0x1944) ftMotionCommandWait(2) */
	0x18000000, /* word 1618 (0x1948) ftMotionCommandClearAttackCollAll() */
	0x04000014, /* word 1619 (0x194C) ftMotionCommandWait(20) */
	0xAC000003, /* word 1620 (0x1950) ftMotionCommandSetTexturePartID(3) */
	0x00000000, /* word 1621 (0x1954) ftMotionCommandEnd() */
	0xAC000002, /* word 1622 (0x1958) ftMotionCommandSetTexturePartID(2) */
	0xC403C007, /* word 1623 (0x195C) ftMotionCommandMakeRumble(30, 7) */
	0x60000001, /* word 1624 (0x1960) ftMotionCommandSetFlag3(1) */
	0x440001A3, /* word 1625 (0x1964) ftMotionPlayVoice(419) */
	0x0C0001F0, /* word 1626 (0x1968) MakeAttackColl(0, 0, 0, 15, 1, 0, 140, 0, 300, 150, 65, 90, 0, 3, 0, 1, 1, 65) */
	0x008C0000,
	0x012C0096,
	0x1045A003,
	0x00222080,
	0x0C8001F0, /* word 1631 (0x197C) MakeAttackColl(1, 0, 0, 15, 1, 0, 140, 0, 300, -150, 65, 90, 0, 3, 0, 1, 1, 65) */
	0x008C0000,
	0x012CFF6A,
	0x1045A003,
	0x00222080,
	0x0D0001F0, /* word 1636 (0x1990) MakeAttackColl(2, 0, 0, 15, 1, 0, 180, 0, 120, 0, 90, 90, 0, 3, 0, 1, 1, 65) */
	0x00B40000,
	0x00780000,
	0x1685A003,
	0x00222080,
	0x04000004, /* word 1641 (0x19A4) ftMotionCommandWait(4) */
	0x8000000D, /* word 1642 (0x19A8) ftMotionCommandLoopBegin(13) */
	0x4C0000DA, /* word 1643 (0x19AC) ftMotionCommandPlayFGMStoreInfo(218) */
	0x04000003, /* word 1644 (0x19B0) ftMotionCommandWait(3) */
	0x84000000, /* word 1645 (0x19B4) ftMotionCommandLoopEnd() */
	0x0C000250, /* word 1646 (0x19B8) MakeAttackColl(0, 0, 0, 18, 1, 0, 200, 0, 300, 150, 70, 100, 0, 3, 0, 2, 1, 80) */
	0x00C80000,
	0x012C0096,
	0x11864003,
	0x00422800,
	0x0C800250, /* word 1651 (0x19CC) MakeAttackColl(1, 0, 0, 18, 1, 0, 200, 0, 300, -150, 70, 100, 0, 3, 0, 2, 1, 80) */
	0x00C80000,
	0x012CFF6A,
	0x11864003,
	0x00422800,
	0x0D000250, /* word 1656 (0x19E0) MakeAttackColl(2, 0, 0, 18, 1, 0, 220, 0, 120, 0, 70, 100, 0, 3, 0, 2, 1, 80) */
	0x00DC0000,
	0x00780000,
	0x11864003,
	0x00422800,
	0x0D800250, /* word 1661 (0x19F4) MakeAttackColl(3, 0, 0, 18, 1, 0, 90, 0, 420, 0, 70, 100, 0, 3, 0, 2, 1, 80) */
	0x005A0000,
	0x01A40000,
	0x11864003,
	0x00422800,
	0x58000001, /* word 1666 (0x1A08) ftMotionCommandSetFlag1(1) */
	0x60000000, /* word 1667 (0x1A0C) ftMotionCommandSetFlag3(0) */
	0x5C000001, /* word 1668 (0x1A10) ftMotionCommandSetFlag2(1) */
	0x04000004, /* word 1669 (0x1A14) ftMotionCommandWait(4) */
	0x18000000, /* word 1670 (0x1A18) ftMotionCommandClearAttackCollAll() */
	0x04000014, /* word 1671 (0x1A1C) ftMotionCommandWait(20) */
	0xAC000003, /* word 1672 (0x1A20) ftMotionCommandSetTexturePartID(3) */
	0x00000000, /* word 1673 (0x1A24) ftMotionCommandEnd() */
	0x00000000, /* word 1674 (0x1A28) ftMotionCommandEnd() */
	0x00000000, /* word 1675 (0x1A2C) ftMotionCommandEnd() */
};
