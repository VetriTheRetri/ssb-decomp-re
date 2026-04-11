/* ftMotionCommand script data for relocData file 246 (YoshiMainMotion) */
/* File size: 6080 bytes (0x17C0) */

#include "relocdata_types.h"
#include <ft/ftdef.h>

u32 dYoshiMainMotion[1520] = {
	0xAC000004, /* word 0 (0x0000) ftMotionCommandSetTexturePartID(4) */
	0xAC100004, /* word 1 (0x0004) ftMotionCommandSetTexturePartID(1048580) */
	0x04000002, /* word 2 (0x0008) ftMotionCommandWait(2) */
	0xAC000005, /* word 3 (0x000C) ftMotionCommandSetTexturePartID(5) */
	0xAC100005, /* word 4 (0x0010) ftMotionCommandSetTexturePartID(1048581) */
	0x04000004, /* word 5 (0x0014) ftMotionCommandWait(4) */
	0xAC000004, /* word 6 (0x0018) ftMotionCommandSetTexturePartID(4) */
	0xAC100004, /* word 7 (0x001C) ftMotionCommandSetTexturePartID(1048580) */
	0x04000003, /* word 8 (0x0020) ftMotionCommandWait(3) */
	0xAC000000, /* word 9 (0x0024) ftMotionCommandSetTexturePartID(0) */
	0xAC100000, /* word 10 (0x0028) ftMotionCommandSetTexturePartID(1048576) */
	0x04000001, /* word 11 (0x002C) ftMotionCommandWait(1) */
	0x8C000000, /* word 12 (0x0030) ftMotionCommandReturn() */
	0x88000000, /* word 13 (0x0034) Subroutine */
	0x00110000, /* -> word 0 (0x0000) */
	0x04000050, /* word 15 (0x003C) ftMotionCommandWait(80) */
	0x88000000, /* word 16 (0x0040) Subroutine */
	0x00140000, /* -> word 0 (0x0000) */
	0x04000014, /* word 18 (0x0048) ftMotionCommandWait(20) */
	0x88000000, /* word 19 (0x004C) Subroutine */
	0x00170000, /* -> word 0 (0x0000) */
	0x04000050, /* word 21 (0x0054) ftMotionCommandWait(80) */
	0x90000000, /* word 22 (0x0058) Goto */
	0x0030000D, /* -> word 13 (0x0034) */
	0x38000082, /* word 24 (0x0060) ftMotionPlayFGM(130) */
	0x80000002, /* word 25 (0x0064) ftMotionCommandLoopBegin(2) */
	0x98002C00, /* word 26 (0x0068) Effect(0, 11, 0, 0, 0, -120, 0, 60, 0) */
	0x00000000,
	0xFF880000,
	0x003C0000,
	0x04000006, /* word 30 (0x0078) ftMotionCommandWait(6) */
	0x84000000, /* word 31 (0x007C) ftMotionCommandLoopEnd() */
	0x00000000, /* word 32 (0x0080) ftMotionCommandEnd() */
	0xBC000004, /* word 33 (0x0084) ftMotionCommandSetSlopeContour(4) */
	0x08000002, /* word 34 (0x0088) ftMotionCommandWaitAsync(2) */
	0x38000073, /* word 35 (0x008C) ftMotionPlayFGM(115) */
	0x98002C00, /* word 36 (0x0090) Effect(0, 11, 0, 0, 0, 60, 0, 0, 0) */
	0x00000000,
	0x003C0000,
	0x00000000,
	0x0400000F, /* word 40 (0x00A0) ftMotionCommandWait(15) */
	0x38000073, /* word 41 (0x00A4) ftMotionPlayFGM(115) */
	0x98002C00, /* word 42 (0x00A8) Effect(0, 11, 0, 0, 0, 60, 0, 0, 0) */
	0x00000000,
	0x003C0000,
	0x00000000,
	0x94000000, /* word 46 (0x00B8) ftMotionCommandPauseScript() */
	0x90000000, /* word 47 (0x00BC) Goto */
	0x007C0021, /* -> word 33 (0x0084) */
	0x38000080, /* word 49 (0x00C4) ftMotionPlayFGM(128) */
	0x98002C00, /* word 50 (0x00C8) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 54 (0x00D8) ftMotionCommandEnd() */
	0x08000006, /* word 55 (0x00DC) ftMotionCommandWaitAsync(6) */
	0x58000001, /* word 56 (0x00E0) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 57 (0x00E4) ftMotionCommandEnd() */
	0xAC00000B, /* word 58 (0x00E8) ftMotionCommandSetTexturePartID(11) */
	0xAC10000B, /* word 59 (0x00EC) ftMotionCommandSetTexturePartID(1048587) */
	0x98004000, /* word 60 (0x00F0) Effect(0, 16, 0, 0, 0, 120, 0, 0, 0) */
	0x00000000,
	0x00780000,
	0x00000000,
	0x0800000F, /* word 64 (0x0100) ftMotionCommandWaitAsync(15) */
	0x58000001, /* word 65 (0x0104) ftMotionCommandSetFlag1(1) */
	0x5C000001, /* word 66 (0x0108) ftMotionCommandSetFlag2(1) */
	0x98002C00, /* word 67 (0x010C) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x08000014, /* word 71 (0x011C) ftMotionCommandWaitAsync(20) */
	0xAC000000, /* word 72 (0x0120) ftMotionCommandSetTexturePartID(0) */
	0xAC100000, /* word 73 (0x0124) ftMotionCommandSetTexturePartID(1048576) */
	0x00000000, /* word 74 (0x0128) ftMotionCommandEnd() */
	0x74000003, /* word 75 (0x012C) ftMotionCommandSetHitStatusAll(3) */
	0x08000002, /* word 76 (0x0130) ftMotionCommandWaitAsync(2) */
	0x74000001, /* word 77 (0x0134) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 78 (0x0138) ftMotionCommandEnd() */
	0x4400024F, /* word 79 (0x013C) ftMotionPlayVoice(591) */
	0x98003400, /* word 80 (0x0140) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 84 (0x0150) ftMotionCommandEnd() */
	0xAC000006, /* word 85 (0x0154) ftMotionCommandSetTexturePartID(6) */
	0xAC100006, /* word 86 (0x0158) ftMotionCommandSetTexturePartID(1048582) */
	0x44000251, /* word 87 (0x015C) ftMotionPlayVoice(593) */
	0x80000002, /* word 88 (0x0160) ftMotionCommandLoopBegin(2) */
	0x98002C00, /* word 89 (0x0164) Effect(0, 11, 0, 0, 0, 0, 100, 100, 100) */
	0x00000000,
	0x00000064,
	0x00640064,
	0x04000006, /* word 93 (0x0174) ftMotionCommandWait(6) */
	0x84000000, /* word 94 (0x0178) ftMotionCommandLoopEnd() */
	0x00000000, /* word 95 (0x017C) ftMotionCommandEnd() */
	0xBC000004, /* word 96 (0x0180) ftMotionCommandSetSlopeContour(4) */
	0x00000000, /* word 97 (0x0184) ftMotionCommandEnd() */
	0x38000052, /* word 98 (0x0188) ftMotionPlayFGM(82) */
	0x98002C00, /* word 99 (0x018C) Effect(0, 11, 0, 0, 0, -60, 0, 0, 0) */
	0x00000000,
	0xFFC40000,
	0x00000000,
	0x00000000, /* word 103 (0x019C) ftMotionCommandEnd() */
	0xBC000003, /* word 104 (0x01A0) ftMotionCommandSetSlopeContour(3) */
	0x38000052, /* word 105 (0x01A4) ftMotionPlayFGM(82) */
	0x98003400, /* word 106 (0x01A8) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 110 (0x01B8) ftMotionCommandEnd() */
	0x44000252, /* word 111 (0x01BC) ftMotionPlayVoice(594) */
	0x00000000, /* word 112 (0x01C0) ftMotionCommandEnd() */
	0x38000280, /* word 113 (0x01C4) ftMotionPlayFGM(640) */
	0x00000000, /* word 114 (0x01C8) ftMotionCommandEnd() */
	0x38000280, /* word 115 (0x01CC) ftMotionPlayFGM(640) */
	0x74000003, /* word 116 (0x01D0) ftMotionCommandSetHitStatusAll(3) */
	0x08000002, /* word 117 (0x01D4) ftMotionCommandWaitAsync(2) */
	0x74000001, /* word 118 (0x01D8) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 119 (0x01DC) ftMotionCommandEnd() */
	0xAC000007, /* word 120 (0x01E0) ftMotionCommandSetTexturePartID(7) */
	0xAC100007, /* word 121 (0x01E4) ftMotionCommandSetTexturePartID(1048583) */
	0x8C000000, /* word 122 (0x01E8) ftMotionCommandReturn() */
	0x88000000, /* word 123 (0x01EC) Subroutine */
	0x007F0078, /* -> word 120 (0x01E0) */
	0x00000000, /* word 125 (0x01F4) ftMotionCommandEnd() */
	0x88000000, /* word 126 (0x01F8) Subroutine */
	0x00A20078, /* -> word 120 (0x01E0) */
	0x34000000, /* word 128 (0x0200) SetDamageThrown */
	0x023D01D6, /* extern -> 0x758 */
	0x00000000, /* word 130 (0x0208) ftMotionCommandEnd() */
	0xBC000003, /* word 131 (0x020C) ftMotionCommandSetSlopeContour(3) */
	0x38000052, /* word 132 (0x0210) ftMotionPlayFGM(82) */
	0x98003400, /* word 133 (0x0214) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 137 (0x0224) ftMotionCommandEnd() */
	0x08000008, /* word 138 (0x0228) ftMotionCommandWaitAsync(8) */
	0x74000003, /* word 139 (0x022C) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 140 (0x0230) ftMotionCommandEnd() */
	0x08000018, /* word 141 (0x0234) ftMotionCommandWaitAsync(24) */
	0x74000001, /* word 142 (0x0238) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 143 (0x023C) ftMotionCommandEnd() */
	0xAC000008, /* word 144 (0x0240) ftMotionCommandSetTexturePartID(8) */
	0xAC100008, /* word 145 (0x0244) ftMotionCommandSetTexturePartID(1048584) */
	0xBC000004, /* word 146 (0x0248) ftMotionCommandSetSlopeContour(4) */
	0x98003400, /* word 147 (0x024C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x9BF88400, /* word 151 (0x025C) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x04000002, /* word 155 (0x026C) ftMotionCommandWait(2) */
	0xBC000000, /* word 156 (0x0270) ftMotionCommandSetSlopeContour(0) */
	0x08000018, /* word 157 (0x0274) ftMotionCommandWaitAsync(24) */
	0xBC000004, /* word 158 (0x0278) ftMotionCommandSetSlopeContour(4) */
	0x04000001, /* word 159 (0x027C) ftMotionCommandWait(1) */
	0x00000000, /* word 160 (0x0280) ftMotionCommandEnd() */
	0x90000000, /* word 161 (0x0284) Goto */
	0x00B20090, /* -> word 144 (0x0240) */
	0x98002C00, /* word 163 (0x028C) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 167 (0x029C) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 168 (0x02A0) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 169 (0x02A4) ftMotionCommandSetHitStatusAll(1) */
	0x8C000000, /* word 170 (0x02A8) ftMotionCommandReturn() */
	0x74000003, /* word 171 (0x02AC) ftMotionCommandSetHitStatusAll(3) */
	0x08000016, /* word 172 (0x02B0) ftMotionCommandWaitAsync(22) */
	0x74000001, /* word 173 (0x02B4) ftMotionCommandSetHitStatusAll(1) */
	0x08000002, /* word 174 (0x02B8) ftMotionCommandWaitAsync(2) */
	0x58000001, /* word 175 (0x02BC) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 176 (0x02C0) ftMotionCommandEnd() */
	0x90000000, /* word 177 (0x02C4) Goto */
	0x00B500AB, /* -> word 171 (0x02AC) */
	0x3800000B, /* word 179 (0x02CC) ftMotionPlayFGM(11) */
	0x88000000, /* word 180 (0x02D0) Subroutine */
	0x00B800A3, /* -> word 163 (0x028C) */
	0x00000000, /* word 182 (0x02D8) ftMotionCommandEnd() */
	0x90000000, /* word 183 (0x02DC) Goto */
	0x00BA00B3, /* -> word 179 (0x02CC) */
	0x90000000, /* word 185 (0x02E4) Goto */
	0x00BC00B3, /* -> word 179 (0x02CC) */
	0x90000000, /* word 187 (0x02EC) Goto */
	0x011C00B3, /* -> word 179 (0x02CC) */
	0x74000003, /* word 189 (0x02F4) ftMotionCommandSetHitStatusAll(3) */
	0x0800000E, /* word 190 (0x02F8) ftMotionCommandWaitAsync(14) */
	0x98003400, /* word 191 (0x02FC) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x0C0000C0, /* word 195 (0x030C) MakeAttackColl(0, 0, 0, 6, 0, 0, 220, 0, 150, 180, 361, 100, 90, 3, 1, 1, 1, 0) */
	0x00DC0000,
	0x009600B4,
	0x5A46416B,
	0x01220000,
	0x0C8000C0, /* word 200 (0x0320) MakeAttackColl(1, 0, 0, 6, 0, 0, 220, 0, 150, 360, 361, 100, 90, 3, 1, 1, 1, 0) */
	0x00DC0000,
	0x00960168,
	0x5A46416B,
	0x01220000,
	0x04000002, /* word 205 (0x0334) ftMotionCommandWait(2) */
	0x18000000, /* word 206 (0x0338) ftMotionCommandClearAttackCollAll() */
	0x08000013, /* word 207 (0x033C) ftMotionCommandWaitAsync(19) */
	0x0C0000C0, /* word 208 (0x0340) MakeAttackColl(0, 0, 0, 6, 0, 0, 220, 0, 150, -180, 361, 100, 90, 3, 1, 1, 1, 0) */
	0x00DC0000,
	0x0096FF4C,
	0x5A46416B,
	0x01220000,
	0x0C8000C0, /* word 213 (0x0354) MakeAttackColl(1, 0, 0, 6, 0, 0, 220, 0, 150, -380, 361, 100, 90, 3, 1, 1, 1, 0) */
	0x00DC0000,
	0x0096FE84,
	0x5A46416B,
	0x01220000,
	0x74000001, /* word 218 (0x0368) ftMotionCommandSetHitStatusAll(1) */
	0x04000002, /* word 219 (0x036C) ftMotionCommandWait(2) */
	0x18000000, /* word 220 (0x0370) ftMotionCommandClearAttackCollAll() */
	0x0400000E, /* word 221 (0x0374) ftMotionCommandWait(14) */
	0x00000000, /* word 222 (0x0378) ftMotionCommandEnd() */
	0xBC000004, /* word 223 (0x037C) ftMotionCommandSetSlopeContour(4) */
	0x74000003, /* word 224 (0x0380) ftMotionCommandSetHitStatusAll(3) */
	0x0800000E, /* word 225 (0x0384) ftMotionCommandWaitAsync(14) */
	0x98003400, /* word 226 (0x0388) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x0C0380C0, /* word 230 (0x0398) MakeAttackColl(0, 0, 28, 6, 0, 0, 280, 130, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0) */
	0x01180082,
	0x00000000,
	0x5A46416B,
	0x01220000,
	0x04000002, /* word 235 (0x03AC) ftMotionCommandWait(2) */
	0x18000000, /* word 236 (0x03B0) ftMotionCommandClearAttackCollAll() */
	0x08000012, /* word 237 (0x03B4) ftMotionCommandWaitAsync(18) */
	0x0C02E0C0, /* word 238 (0x03B8) MakeAttackColl(0, 0, 23, 6, 0, 0, 280, 130, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0) */
	0x01180082,
	0x00000000,
	0x5A46416B,
	0x01220000,
	0x74000001, /* word 243 (0x03CC) ftMotionCommandSetHitStatusAll(1) */
	0x04000002, /* word 244 (0x03D0) ftMotionCommandWait(2) */
	0x18000000, /* word 245 (0x03D4) ftMotionCommandClearAttackCollAll() */
	0xBC000003, /* word 246 (0x03D8) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 247 (0x03DC) ftMotionCommandEnd() */
	0xC4000009, /* word 248 (0x03E0) ftMotionCommandMakeRumble(0, 9) */
	0xAC000006, /* word 249 (0x03E4) ftMotionCommandSetTexturePartID(6) */
	0xAC100006, /* word 250 (0x03E8) ftMotionCommandSetTexturePartID(1048582) */
	0x9800AC00, /* word 251 (0x03EC) Effect(0, 43, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4400024F, /* word 255 (0x03FC) ftMotionPlayVoice(591) */
	0x38000011, /* word 256 (0x0400) ftMotionPlayFGM(17) */
	0x98007C00, /* word 257 (0x0404) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 261 (0x0414) ftMotionCommandSetHitStatusAll(3) */
	0x08000018, /* word 262 (0x0418) ftMotionCommandWaitAsync(24) */
	0x74000001, /* word 263 (0x041C) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 264 (0x0420) ftMotionCommandEnd() */
	0xC4000007, /* word 265 (0x0424) ftMotionCommandMakeRumble(0, 7) */
	0xAC000006, /* word 266 (0x0428) ftMotionCommandSetTexturePartID(6) */
	0xAC100006, /* word 267 (0x042C) ftMotionCommandSetTexturePartID(1048582) */
	0x9800AC00, /* word 268 (0x0430) Effect(0, 43, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4400024F, /* word 272 (0x0440) ftMotionPlayVoice(591) */
	0x3800000B, /* word 273 (0x0444) ftMotionPlayFGM(11) */
	0x98007C00, /* word 274 (0x0448) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 278 (0x0458) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 279 (0x045C) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 280 (0x0460) ftMotionCommandSetHitStatusAll(1) */
	0xC8000007, /* word 281 (0x0464) ftMotionCommandStopRumble(7) */
	0x00000000, /* word 282 (0x0468) ftMotionCommandEnd() */
	0x90000000, /* word 283 (0x046C) Goto */
	0x01C30109, /* -> word 265 (0x0424) */
	0x3800000B, /* word 285 (0x0474) ftMotionPlayFGM(11) */
	0x9BF95C00, /* word 286 (0x0478) Effect(-1, 87, 0, 0, 120, 0, 0, 0, 0) */
	0x00000078,
	0x00000000,
	0x00000000,
	0x98007C00, /* word 290 (0x0488) Effect(0, 31, 0, 0, 120, 0, 0, 0, 0) */
	0x00000078,
	0x00000000,
	0x00000000,
	0x08000004, /* word 294 (0x0498) ftMotionCommandWaitAsync(4) */
	0x98004000, /* word 295 (0x049C) Effect(0, 16, 0, 100, 0, 0, 0, 0, 0) */
	0x00640000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 299 (0x04AC) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 300 (0x04B0) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 301 (0x04B4) ftMotionCommandSetHitStatusAll(1) */
	0x58000001, /* word 302 (0x04B8) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 303 (0x04BC) ftMotionCommandEnd() */
	0x3800000B, /* word 304 (0x04C0) ftMotionPlayFGM(11) */
	0x9BF95C00, /* word 305 (0x04C4) Effect(-1, 87, 0, 0, 120, 0, 0, 0, 0) */
	0x00000078,
	0x00000000,
	0x00000000,
	0x98007C00, /* word 309 (0x04D4) Effect(0, 31, 0, 0, 120, 0, 0, 0, 0) */
	0x00000078,
	0x00000000,
	0x00000000,
	0x08000004, /* word 313 (0x04E4) ftMotionCommandWaitAsync(4) */
	0x98003C00, /* word 314 (0x04E8) Effect(0, 15, 0, -100, 0, 0, 0, 0, 0) */
	0xFF9C0000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 318 (0x04F8) ftMotionCommandSetHitStatusAll(3) */
	0x08000014, /* word 319 (0x04FC) ftMotionCommandWaitAsync(20) */
	0x74000001, /* word 320 (0x0500) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 321 (0x0504) ftMotionCommandEnd() */
	0xAC000008, /* word 322 (0x0508) ftMotionCommandSetTexturePartID(8) */
	0xAC100008, /* word 323 (0x050C) ftMotionCommandSetTexturePartID(1048584) */
	0x74000003, /* word 324 (0x0510) ftMotionCommandSetHitStatusAll(3) */
	0x38000013, /* word 325 (0x0514) ftMotionPlayFGM(19) */
	0x00000000, /* word 326 (0x0518) ftMotionCommandEnd() */
	0xAC000008, /* word 327 (0x051C) ftMotionCommandSetTexturePartID(8) */
	0xAC100008, /* word 328 (0x0520) ftMotionCommandSetTexturePartID(1048584) */
	0x74000003, /* word 329 (0x0524) ftMotionCommandSetHitStatusAll(3) */
	0x0400003C, /* word 330 (0x0528) ftMotionCommandWait(60) */
	0x74000001, /* word 331 (0x052C) ftMotionCommandSetHitStatusAll(1) */
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
	0x74000003, /* word 345 (0x0564) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 346 (0x0568) ftMotionCommandEnd() */
	0x74000003, /* word 347 (0x056C) ftMotionCommandSetHitStatusAll(3) */
	0x98007C00, /* word 348 (0x0570) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x44000248, /* word 352 (0x0580) ftMotionPlayVoice(584) */
	0x74000001, /* word 353 (0x0584) ftMotionCommandSetHitStatusAll(1) */
	0x0C0260D0, /* word 354 (0x0588) MakeAttackColl(0, 0, 19, 6, 1, 0, 220, 0, 0, -50, 361, 100, 100, 3, 0, 2, 0, 0) */
	0x00DC0000,
	0x0000FFCE,
	0x5A464193,
	0x00400000,
	0x0C8280D0, /* word 359 (0x059C) MakeAttackColl(1, 0, 20, 6, 1, 0, 180, 0, 0, -80, 361, 100, 100, 3, 0, 2, 0, 0) */
	0x00B40000,
	0x0000FFB0,
	0x5A464193,
	0x00400000,
	0x4C00002A, /* word 364 (0x05B0) ftMotionCommandPlayFGMStoreInfo(42) */
	0x98004C00, /* word 365 (0x05B4) Effect(0, 19, 0, 0, -80, -180, 0, 0, 0) */
	0x0000FFB0,
	0xFF4C0000,
	0x00000000,
	0x04000002, /* word 369 (0x05C4) ftMotionCommandWait(2) */
	0x74000001, /* word 370 (0x05C8) ftMotionCommandSetHitStatusAll(1) */
	0x04000001, /* word 371 (0x05CC) ftMotionCommandWait(1) */
	0x18000000, /* word 372 (0x05D0) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 373 (0x05D4) ftMotionCommandEnd() */
	0x74000003, /* word 374 (0x05D8) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 375 (0x05DC) ftMotionCommandEnd() */
	0x98007C00, /* word 376 (0x05E0) Effect(0, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 380 (0x05F0) ftMotionCommandSetHitStatusAll(3) */
	0x08000010, /* word 381 (0x05F4) ftMotionCommandWaitAsync(16) */
	0x44000248, /* word 382 (0x05F8) ftMotionPlayVoice(584) */
	0x0C0000D0, /* word 383 (0x05FC) MakeAttackColl(0, 0, 0, 6, 1, 0, 350, 0, 180, 280, 361, 100, 100, 3, 0, 2, 0, 0) */
	0x015E0000,
	0x00B40118,
	0x5A464193,
	0x00400000,
	0x0C8000D0, /* word 388 (0x0610) MakeAttackColl(1, 0, 0, 6, 1, 0, 240, 0, 180, 60, 361, 100, 100, 3, 0, 2, 0, 0) */
	0x00F00000,
	0x00B4003C,
	0x5A464193,
	0x00400000,
	0x4C00002A, /* word 393 (0x0624) ftMotionCommandPlayFGMStoreInfo(42) */
	0x98004C00, /* word 394 (0x0628) Effect(0, 19, 0, 0, -80, -180, 0, 0, 0) */
	0x0000FFB0,
	0xFF4C0000,
	0x00000000,
	0x04000002, /* word 398 (0x0638) ftMotionCommandWait(2) */
	0x74000001, /* word 399 (0x063C) ftMotionCommandSetHitStatusAll(1) */
	0x04000002, /* word 400 (0x0640) ftMotionCommandWait(2) */
	0x74000001, /* word 401 (0x0644) ftMotionCommandSetHitStatusAll(1) */
	0x18000000, /* word 402 (0x0648) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 403 (0x064C) ftMotionCommandEnd() */
	0x74000003, /* word 404 (0x0650) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 405 (0x0654) ftMotionCommandEnd() */
	0x3800000B, /* word 406 (0x0658) ftMotionPlayFGM(11) */
	0x98004000, /* word 407 (0x065C) Effect(0, 16, 0, 100, 0, 0, 0, 0, 0) */
	0x00640000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 411 (0x066C) ftMotionCommandSetHitStatusAll(3) */
	0x04000014, /* word 412 (0x0670) ftMotionCommandWait(20) */
	0x74000001, /* word 413 (0x0674) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 414 (0x0678) ftMotionCommandEnd() */
	0x74000003, /* word 415 (0x067C) ftMotionCommandSetHitStatusAll(3) */
	0x00000000, /* word 416 (0x0680) ftMotionCommandEnd() */
	0x3800000B, /* word 417 (0x0684) ftMotionPlayFGM(11) */
	0x98004000, /* word 418 (0x0688) Effect(0, 16, 0, 100, 0, 0, 0, 0, 0) */
	0x00640000,
	0x00000000,
	0x00000000,
	0x74000003, /* word 422 (0x0698) ftMotionCommandSetHitStatusAll(3) */
	0x04000023, /* word 423 (0x069C) ftMotionCommandWait(35) */
	0x74000001, /* word 424 (0x06A0) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 425 (0x06A4) ftMotionCommandEnd() */
	0x08000002, /* word 426 (0x06A8) ftMotionCommandWaitAsync(2) */
	0x58000001, /* word 427 (0x06AC) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 428 (0x06B0) ftMotionCommandEnd() */
	0x08000004, /* word 429 (0x06B4) ftMotionCommandWaitAsync(4) */
	0x58000001, /* word 430 (0x06B8) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 431 (0x06BC) ftMotionCommandEnd() */
	0x0800000C, /* word 432 (0x06C0) ftMotionCommandWaitAsync(12) */
	0x54000001, /* word 433 (0x06C4) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 434 (0x06C8) ftMotionCommandEnd() */
	0x08000006, /* word 435 (0x06CC) ftMotionCommandWaitAsync(6) */
	0x98004C00, /* word 436 (0x06D0) Effect(0, 19, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 440 (0x06E0) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 441 (0x06E4) ftMotionCommandEnd() */
	0x0800000C, /* word 442 (0x06E8) ftMotionCommandWaitAsync(12) */
	0x98002C00, /* word 443 (0x06EC) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 447 (0x06FC) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 448 (0x0700) ftMotionCommandEnd() */
	0x60000006, /* word 449 (0x0704) ftMotionCommandSetFlag3(6) */
	0x90000000, /* word 450 (0x0708) Goto */
	0x01DC01BA, /* -> word 442 (0x06E8) */
	0x0800000B, /* word 452 (0x0710) ftMotionCommandWaitAsync(11) */
	0x98002C00, /* word 453 (0x0714) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 457 (0x0724) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 458 (0x0728) ftMotionCommandEnd() */
	0x0800000A, /* word 459 (0x072C) ftMotionCommandWaitAsync(10) */
	0x98002C00, /* word 460 (0x0730) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 464 (0x0740) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 465 (0x0744) ftMotionCommandEnd() */
	0x0800000C, /* word 466 (0x0748) ftMotionCommandWaitAsync(12) */
	0x50000000, /* word 467 (0x074C) ftMotionCommandPlaySmashVoice(0) */
	0x98004C00, /* word 468 (0x0750) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x54000001, /* word 472 (0x0760) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 473 (0x0764) ftMotionCommandEnd() */
	0x60000006, /* word 474 (0x0768) ftMotionCommandSetFlag3(6) */
	0x90000000, /* word 475 (0x076C) Goto */
	0x01F601D2, /* -> word 466 (0x0748) */
	0x0800000B, /* word 477 (0x0774) ftMotionCommandWaitAsync(11) */
	0x50000000, /* word 478 (0x0778) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 479 (0x077C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 483 (0x078C) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 484 (0x0790) ftMotionCommandEnd() */
	0x0800000A, /* word 485 (0x0794) ftMotionCommandWaitAsync(10) */
	0x50000000, /* word 486 (0x0798) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 487 (0x079C) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 491 (0x07AC) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 492 (0x07B0) ftMotionCommandEnd() */
	0x0800000C, /* word 493 (0x07B4) ftMotionCommandWaitAsync(12) */
	0x98002C00, /* word 494 (0x07B8) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 498 (0x07C8) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 499 (0x07CC) ftMotionCommandEnd() */
	0x60000004, /* word 500 (0x07D0) ftMotionCommandSetFlag3(4) */
	0x90000000, /* word 501 (0x07D4) Goto */
	0x021301ED, /* -> word 493 (0x07B4) */
	0x0800000C, /* word 503 (0x07DC) ftMotionCommandWaitAsync(12) */
	0x98002C00, /* word 504 (0x07E0) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 508 (0x07F0) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 509 (0x07F4) ftMotionCommandEnd() */
	0x0800000B, /* word 510 (0x07F8) ftMotionCommandWaitAsync(11) */
	0x98002C00, /* word 511 (0x07FC) Effect(0, 11, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 515 (0x080C) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 516 (0x0810) ftMotionCommandEnd() */
	0xAC000006, /* word 517 (0x0814) ftMotionCommandSetTexturePartID(6) */
	0xAC100006, /* word 518 (0x0818) ftMotionCommandSetTexturePartID(1048582) */
	0x0800000C, /* word 519 (0x081C) ftMotionCommandWaitAsync(12) */
	0x50000000, /* word 520 (0x0820) ftMotionCommandPlaySmashVoice(0) */
	0x98004000, /* word 521 (0x0824) Effect(0, 16, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 525 (0x0834) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 526 (0x0838) ftMotionCommandEnd() */
	0xAC000006, /* word 527 (0x083C) ftMotionCommandSetTexturePartID(6) */
	0xAC100006, /* word 528 (0x0840) ftMotionCommandSetTexturePartID(1048582) */
	0x60000004, /* word 529 (0x0844) ftMotionCommandSetFlag3(4) */
	0x90000000, /* word 530 (0x0848) Goto */
	0x022D0205, /* -> word 517 (0x0814) */
	0xAC000006, /* word 532 (0x0850) ftMotionCommandSetTexturePartID(6) */
	0xAC100006, /* word 533 (0x0854) ftMotionCommandSetTexturePartID(1048582) */
	0x0800000C, /* word 534 (0x0858) ftMotionCommandWaitAsync(12) */
	0x50000000, /* word 535 (0x085C) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 536 (0x0860) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 540 (0x0870) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 541 (0x0874) ftMotionCommandEnd() */
	0xAC000006, /* word 542 (0x0878) ftMotionCommandSetTexturePartID(6) */
	0xAC100006, /* word 543 (0x087C) ftMotionCommandSetTexturePartID(1048582) */
	0x0800000B, /* word 544 (0x0880) ftMotionCommandWaitAsync(11) */
	0x50000000, /* word 545 (0x0884) ftMotionCommandPlaySmashVoice(0) */
	0x98003400, /* word 546 (0x0888) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x54000001, /* word 550 (0x0898) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 551 (0x089C) ftMotionCommandEnd() */
	0x08000014, /* word 552 (0x08A0) ftMotionCommandWaitAsync(20) */
	0x54000001, /* word 553 (0x08A4) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 554 (0x08A8) ftMotionCommandEnd() */
	0x6000000A, /* word 555 (0x08AC) ftMotionCommandSetFlag3(10) */
	0x90000000, /* word 556 (0x08B0) Goto */
	0x02370228, /* -> word 552 (0x08A0) */
	0xAC000006, /* word 558 (0x08B8) ftMotionCommandSetTexturePartID(6) */
	0xAC100006, /* word 559 (0x08BC) ftMotionCommandSetTexturePartID(1048582) */
	0x08000014, /* word 560 (0x08C0) ftMotionCommandWaitAsync(20) */
	0x54000001, /* word 561 (0x08C4) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 562 (0x08C8) ftMotionCommandEnd() */
	0xAC000006, /* word 563 (0x08CC) ftMotionCommandSetTexturePartID(6) */
	0xAC100006, /* word 564 (0x08D0) ftMotionCommandSetTexturePartID(1048582) */
	0x60000006, /* word 565 (0x08D4) ftMotionCommandSetFlag3(6) */
	0x90000000, /* word 566 (0x08D8) Goto */
	0x0302022E, /* -> word 558 (0x08B8) */
	0x08000005, /* word 568 (0x08E0) ftMotionCommandWaitAsync(5) */
	0xCC040000, /* word 569 (0x08E4) ftMotionCommandSetAfterImage(1, 0) */
	0x08000006, /* word 570 (0x08E8) ftMotionCommandWaitAsync(6) */
	0xBC000004, /* word 571 (0x08EC) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 572 (0x08F0) Subroutine */
	0x024A0000, /* extern -> 0x0 */
	0x04000004, /* word 574 (0x08F8) ftMotionCommandWait(4) */
	0xCC03FFFF, /* word 575 (0x08FC) ftMotionCommandSetAfterImage(0, -1) */
	0x04000001, /* word 576 (0x0900) ftMotionCommandWait(1) */
	0x18000000, /* word 577 (0x0904) ftMotionCommandClearAttackCollAll() */
	0x0800000F, /* word 578 (0x0908) ftMotionCommandWaitAsync(15) */
	0xBC000000, /* word 579 (0x090C) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 580 (0x0910) ftMotionCommandEnd() */
	0x0800000A, /* word 581 (0x0914) ftMotionCommandWaitAsync(10) */
	0xCC040000, /* word 582 (0x0918) ftMotionCommandSetAfterImage(1, 0) */
	0x0800000C, /* word 583 (0x091C) ftMotionCommandWaitAsync(12) */
	0xBC000004, /* word 584 (0x0920) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 585 (0x0924) Subroutine */
	0x025A0019, /* extern -> 0x64 */
	0x04000004, /* word 587 (0x092C) ftMotionCommandWait(4) */
	0x18000000, /* word 588 (0x0930) ftMotionCommandClearAttackCollAll() */
	0x04000004, /* word 589 (0x0934) ftMotionCommandWait(4) */
	0xCC03FFFF, /* word 590 (0x0938) ftMotionCommandSetAfterImage(0, -1) */
	0x08000020, /* word 591 (0x093C) ftMotionCommandWaitAsync(32) */
	0xBC000000, /* word 592 (0x0940) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 593 (0x0944) ftMotionCommandEnd() */
	0xAC000006, /* word 594 (0x0948) ftMotionCommandSetTexturePartID(6) */
	0xAC100006, /* word 595 (0x094C) ftMotionCommandSetTexturePartID(1048582) */
	0x50000000, /* word 596 (0x0950) ftMotionCommandPlaySmashVoice(0) */
	0x08000012, /* word 597 (0x0954) ftMotionCommandWaitAsync(18) */
	0xCC040000, /* word 598 (0x0958) ftMotionCommandSetAfterImage(1, 0) */
	0x08000014, /* word 599 (0x095C) ftMotionCommandWaitAsync(20) */
	0xBC000004, /* word 600 (0x0960) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 601 (0x0964) Subroutine */
	0x02670032, /* extern -> 0xC8 */
	0x04000005, /* word 603 (0x096C) ftMotionCommandWait(5) */
	0x18000000, /* word 604 (0x0970) ftMotionCommandClearAttackCollAll() */
	0x0800001A, /* word 605 (0x0974) ftMotionCommandWaitAsync(26) */
	0xBC000000, /* word 606 (0x0978) ftMotionCommandSetSlopeContour(0) */
	0x04000001, /* word 607 (0x097C) ftMotionCommandWait(1) */
	0xCC03FFFF, /* word 608 (0x0980) ftMotionCommandSetAfterImage(0, -1) */
	0x00000000, /* word 609 (0x0984) ftMotionCommandEnd() */
	0xBC000004, /* word 610 (0x0988) ftMotionCommandSetSlopeContour(4) */
	0x08000007, /* word 611 (0x098C) ftMotionCommandWaitAsync(7) */
	0xCC040000, /* word 612 (0x0990) ftMotionCommandSetAfterImage(1, 0) */
	0x08000008, /* word 613 (0x0994) ftMotionCommandWaitAsync(8) */
	0x88000000, /* word 614 (0x0998) Subroutine */
	0x0272004B, /* extern -> 0x12C */
	0x04000001, /* word 616 (0x09A0) ftMotionCommandWait(1) */
	0xCC03FFFF, /* word 617 (0x09A4) ftMotionCommandSetAfterImage(0, -1) */
	0x04000011, /* word 618 (0x09A8) ftMotionCommandWait(17) */
	0x18000000, /* word 619 (0x09AC) ftMotionCommandClearAttackCollAll() */
	0x0800001E, /* word 620 (0x09B0) ftMotionCommandWaitAsync(30) */
	0xBC000000, /* word 621 (0x09B4) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 622 (0x09B8) ftMotionCommandEnd() */
	0x08000006, /* word 623 (0x09BC) ftMotionCommandWaitAsync(6) */
	0xBC000004, /* word 624 (0x09C0) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 625 (0x09C4) Subroutine */
	0x027B0068, /* extern -> 0x1A0 */
	0x04000005, /* word 627 (0x09CC) ftMotionCommandWait(5) */
	0x18000000, /* word 628 (0x09D0) ftMotionCommandClearAttackCollAll() */
	0x0800000F, /* word 629 (0x09D4) ftMotionCommandWaitAsync(15) */
	0xBC000000, /* word 630 (0x09D8) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 631 (0x09DC) ftMotionCommandEnd() */
	0x0800000C, /* word 632 (0x09E0) ftMotionCommandWaitAsync(12) */
	0xBC000004, /* word 633 (0x09E4) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 634 (0x09E8) Subroutine */
	0x0289007D, /* extern -> 0x1F4 */
	0x04000004, /* word 636 (0x09F0) ftMotionCommandWait(4) */
	0x18000000, /* word 637 (0x09F4) ftMotionCommandClearAttackCollAll() */
	0x08000020, /* word 638 (0x09F8) ftMotionCommandWaitAsync(32) */
	0xBC000000, /* word 639 (0x09FC) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 640 (0x0A00) ftMotionCommandEnd() */
	0xC4000007, /* word 641 (0x0A04) ftMotionCommandMakeRumble(0, 7) */
	0xAC000006, /* word 642 (0x0A08) ftMotionCommandSetTexturePartID(6) */
	0xAC100006, /* word 643 (0x0A0C) ftMotionCommandSetTexturePartID(1048582) */
	0x50000000, /* word 644 (0x0A10) ftMotionCommandPlaySmashVoice(0) */
	0xB1300028, /* word 645 (0x0A14) ftMotionCommandSetColAnim(76, 40) */
	0x08000013, /* word 646 (0x0A18) ftMotionCommandWaitAsync(19) */
	0xBC000004, /* word 647 (0x0A1C) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 648 (0x0A20) Subroutine */
	0x02920092, /* extern -> 0x248 */
	0x04000005, /* word 650 (0x0A28) ftMotionCommandWait(5) */
	0x18000000, /* word 651 (0x0A2C) ftMotionCommandClearAttackCollAll() */
	0x0800001A, /* word 652 (0x0A30) ftMotionCommandWaitAsync(26) */
	0xBC000000, /* word 653 (0x0A34) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 654 (0x0A38) ftMotionCommandEnd() */
	0xBC000004, /* word 655 (0x0A3C) ftMotionCommandSetSlopeContour(4) */
	0x08000008, /* word 656 (0x0A40) ftMotionCommandWaitAsync(8) */
	0x88000000, /* word 657 (0x0A44) Subroutine */
	0x029B00AC, /* extern -> 0x2B0 */
	0x04000012, /* word 659 (0x0A4C) ftMotionCommandWait(18) */
	0x18000000, /* word 660 (0x0A50) ftMotionCommandClearAttackCollAll() */
	0x0800001E, /* word 661 (0x0A54) ftMotionCommandWaitAsync(30) */
	0xBC000000, /* word 662 (0x0A58) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 663 (0x0A5C) ftMotionCommandEnd() */
	0x08000006, /* word 664 (0x0A60) ftMotionCommandWaitAsync(6) */
	0xBC000004, /* word 665 (0x0A64) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 666 (0x0A68) Subroutine */
	0x02A400C9, /* extern -> 0x324 */
	0x04000005, /* word 668 (0x0A70) ftMotionCommandWait(5) */
	0x18000000, /* word 669 (0x0A74) ftMotionCommandClearAttackCollAll() */
	0x0800000F, /* word 670 (0x0A78) ftMotionCommandWaitAsync(15) */
	0xBC000000, /* word 671 (0x0A7C) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 672 (0x0A80) ftMotionCommandEnd() */
	0x0800000C, /* word 673 (0x0A84) ftMotionCommandWaitAsync(12) */
	0xBC000004, /* word 674 (0x0A88) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 675 (0x0A8C) Subroutine */
	0x02AF00DE, /* extern -> 0x378 */
	0x04000004, /* word 677 (0x0A94) ftMotionCommandWait(4) */
	0x18000000, /* word 678 (0x0A98) ftMotionCommandClearAttackCollAll() */
	0x08000020, /* word 679 (0x0A9C) ftMotionCommandWaitAsync(32) */
	0xBC000000, /* word 680 (0x0AA0) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 681 (0x0AA4) ftMotionCommandEnd() */
	0xAC000006, /* word 682 (0x0AA8) ftMotionCommandSetTexturePartID(6) */
	0xAC100006, /* word 683 (0x0AAC) ftMotionCommandSetTexturePartID(1048582) */
	0x08000014, /* word 684 (0x0AB0) ftMotionCommandWaitAsync(20) */
	0xBC000004, /* word 685 (0x0AB4) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 686 (0x0AB8) Subroutine */
	0x02B800F3, /* extern -> 0x3CC */
	0x04000005, /* word 688 (0x0AC0) ftMotionCommandWait(5) */
	0x18000000, /* word 689 (0x0AC4) ftMotionCommandClearAttackCollAll() */
	0x0800001A, /* word 690 (0x0AC8) ftMotionCommandWaitAsync(26) */
	0xBC000000, /* word 691 (0x0ACC) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 692 (0x0AD0) ftMotionCommandEnd() */
	0xBC000004, /* word 693 (0x0AD4) ftMotionCommandSetSlopeContour(4) */
	0x08000008, /* word 694 (0x0AD8) ftMotionCommandWaitAsync(8) */
	0x88000000, /* word 695 (0x0ADC) Subroutine */
	0x02C2010C, /* extern -> 0x430 */
	0x04000012, /* word 697 (0x0AE4) ftMotionCommandWait(18) */
	0x18000000, /* word 698 (0x0AE8) ftMotionCommandClearAttackCollAll() */
	0x0800001E, /* word 699 (0x0AEC) ftMotionCommandWaitAsync(30) */
	0xBC000000, /* word 700 (0x0AF0) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 701 (0x0AF4) ftMotionCommandEnd() */
	0xB12C000B, /* word 702 (0x0AF8) ftMotionCommandSetColAnim(75, 11) */
	0x08000006, /* word 703 (0x0AFC) ftMotionCommandWaitAsync(6) */
	0xBC000004, /* word 704 (0x0B00) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 705 (0x0B04) Subroutine */
	0x02CC0125, /* extern -> 0x494 */
	0x04000005, /* word 707 (0x0B0C) ftMotionCommandWait(5) */
	0x18000000, /* word 708 (0x0B10) ftMotionCommandClearAttackCollAll() */
	0x0800000F, /* word 709 (0x0B14) ftMotionCommandWaitAsync(15) */
	0xBC000000, /* word 710 (0x0B18) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 711 (0x0B1C) ftMotionCommandEnd() */
	0xB12C0012, /* word 712 (0x0B20) ftMotionCommandSetColAnim(75, 18) */
	0x0800000C, /* word 713 (0x0B24) ftMotionCommandWaitAsync(12) */
	0xBC000004, /* word 714 (0x0B28) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 715 (0x0B2C) Subroutine */
	0x02DB013E, /* extern -> 0x4F8 */
	0x0800000E, /* word 717 (0x0B34) ftMotionCommandWaitAsync(14) */
	0x54000001, /* word 718 (0x0B38) ftMotionCommandSetFlag0(1) */
	0x04000004, /* word 719 (0x0B3C) ftMotionCommandWait(4) */
	0x18000000, /* word 720 (0x0B40) ftMotionCommandClearAttackCollAll() */
	0x08000020, /* word 721 (0x0B44) ftMotionCommandWaitAsync(32) */
	0xBC000000, /* word 722 (0x0B48) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 723 (0x0B4C) ftMotionCommandEnd() */
	0xAC000006, /* word 724 (0x0B50) ftMotionCommandSetTexturePartID(6) */
	0xAC100006, /* word 725 (0x0B54) ftMotionCommandSetTexturePartID(1048582) */
	0xB12C001A, /* word 726 (0x0B58) ftMotionCommandSetColAnim(75, 26) */
	0x50000000, /* word 727 (0x0B5C) ftMotionCommandPlaySmashVoice(0) */
	0x08000014, /* word 728 (0x0B60) ftMotionCommandWaitAsync(20) */
	0xBC000004, /* word 729 (0x0B64) ftMotionCommandSetSlopeContour(4) */
	0x88000000, /* word 730 (0x0B68) Subroutine */
	0x02E70157, /* extern -> 0x55C */
	0x08000015, /* word 732 (0x0B70) ftMotionCommandWaitAsync(21) */
	0x54000002, /* word 733 (0x0B74) ftMotionCommandSetFlag0(2) */
	0x04000005, /* word 734 (0x0B78) ftMotionCommandWait(5) */
	0x18000000, /* word 735 (0x0B7C) ftMotionCommandClearAttackCollAll() */
	0x0800001A, /* word 736 (0x0B80) ftMotionCommandWaitAsync(26) */
	0xBC000000, /* word 737 (0x0B84) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 738 (0x0B88) ftMotionCommandEnd() */
	0xB12C001A, /* word 739 (0x0B8C) ftMotionCommandSetColAnim(75, 26) */
	0xBC000004, /* word 740 (0x0B90) ftMotionCommandSetSlopeContour(4) */
	0x08000008, /* word 741 (0x0B94) ftMotionCommandWaitAsync(8) */
	0x88000000, /* word 742 (0x0B98) Subroutine */
	0x02FE0170, /* extern -> 0x5C0 */
	0x04000012, /* word 744 (0x0BA0) ftMotionCommandWait(18) */
	0x18000000, /* word 745 (0x0BA4) ftMotionCommandClearAttackCollAll() */
	0x0800001E, /* word 746 (0x0BA8) ftMotionCommandWaitAsync(30) */
	0xBC000000, /* word 747 (0x0BAC) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 748 (0x0BB0) ftMotionCommandEnd() */
	0xBC000003, /* word 749 (0x0BB4) ftMotionCommandSetSlopeContour(3) */
	0xAC000006, /* word 750 (0x0BB8) ftMotionCommandSetTexturePartID(6) */
	0xAC100006, /* word 751 (0x0BBC) ftMotionCommandSetTexturePartID(1048582) */
	0x08000008, /* word 752 (0x0BC0) ftMotionCommandWaitAsync(8) */
	0x54000001, /* word 753 (0x0BC4) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 754 (0x0BC8) ftMotionCommandEnd() */
	0xBC000003, /* word 755 (0x0BCC) ftMotionCommandSetSlopeContour(3) */
	0xAC000006, /* word 756 (0x0BD0) ftMotionCommandSetTexturePartID(6) */
	0xAC100006, /* word 757 (0x0BD4) ftMotionCommandSetTexturePartID(1048582) */
	0x08000008, /* word 758 (0x0BD8) ftMotionCommandWaitAsync(8) */
	0x54000001, /* word 759 (0x0BDC) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 760 (0x0BE0) ftMotionCommandEnd() */
	0xC4000007, /* word 761 (0x0BE4) ftMotionCommandMakeRumble(0, 7) */
	0xBC000004, /* word 762 (0x0BE8) ftMotionCommandSetSlopeContour(4) */
	0xAC000007, /* word 763 (0x0BEC) ftMotionCommandSetTexturePartID(7) */
	0xAC100007, /* word 764 (0x0BF0) ftMotionCommandSetTexturePartID(1048583) */
	0x88000000, /* word 765 (0x0BF4) Subroutine */
	0x03B3018D, /* extern -> 0x634 */
	0x04000010, /* word 767 (0x0BFC) ftMotionCommandWait(16) */
	0x18000000, /* word 768 (0x0C00) ftMotionCommandClearAttackCollAll() */
	0x90000000, /* word 769 (0x0C04) Goto */
	0x030F02F9, /* -> word 761 (0x0BE4) */
	0x98007C00, /* word 771 (0x0C0C) Effect(0, 31, 0, 0, 0, 120, 200, 200, 200) */
	0x00000000,
	0x007800C8,
	0x00C800C8,
	0x80000003, /* word 775 (0x0C1C) ftMotionCommandLoopBegin(3) */
	0x98002800, /* word 776 (0x0C20) Effect(0, 10, 0, 0, 0, 120, 200, 200, 200) */
	0x00000000,
	0x007800C8,
	0x00C800C8,
	0x04000004, /* word 780 (0x0C30) ftMotionCommandWait(4) */
	0x84000000, /* word 781 (0x0C34) ftMotionCommandLoopEnd() */
	0x90000000, /* word 782 (0x0C38) Goto */
	0x03190303, /* -> word 771 (0x0C0C) */
	0x9BF88800, /* word 784 (0x0C40) Effect(-1, 34, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x4400024E, /* word 788 (0x0C50) ftMotionPlayVoice(590) */
	0xAC000007, /* word 789 (0x0C54) ftMotionCommandSetTexturePartID(7) */
	0xAC100007, /* word 790 (0x0C58) ftMotionCommandSetTexturePartID(1048583) */
	0x74000003, /* word 791 (0x0C5C) ftMotionCommandSetHitStatusAll(3) */
	0x90000000, /* word 792 (0x0C60) Goto */
	0x031B0303, /* -> word 771 (0x0C0C) */
	0x90000000, /* word 794 (0x0C68) Goto */
	0x03330303, /* -> word 771 (0x0C0C) */
	0x9BF88400, /* word 796 (0x0C70) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x98003400, /* word 800 (0x0C80) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 804 (0x0C90) ftMotionCommandEnd() */
	0xBC000003, /* word 805 (0x0C94) ftMotionCommandSetSlopeContour(3) */
	0x00000000, /* word 806 (0x0C98) ftMotionCommandEnd() */
	0xAC000008, /* word 807 (0x0C9C) ftMotionCommandSetTexturePartID(8) */
	0xAC100008, /* word 808 (0x0CA0) ftMotionCommandSetTexturePartID(1048584) */
	0xBC000003, /* word 809 (0x0CA4) ftMotionCommandSetSlopeContour(3) */
	0x4400024D, /* word 810 (0x0CA8) ftMotionPlayVoice(589) */
	0x80000006, /* word 811 (0x0CAC) ftMotionCommandLoopBegin(6) */
	0x9800A000, /* word 812 (0x0CB0) Effect(0, 40, 0, 0, 130, 0, 260, 260, 200) */
	0x00000082,
	0x00000104,
	0x010400C8,
	0x0400000A, /* word 816 (0x0CC0) ftMotionCommandWait(10) */
	0x84000000, /* word 817 (0x0CC4) ftMotionCommandLoopEnd() */
	0x90000000, /* word 818 (0x0CC8) Goto */
	0x033E0327, /* -> word 807 (0x0C9C) */
	0x48000254, /* word 820 (0x0CD0) ftMotionPlayInterruptableVoice(596) */
	0xAC000005, /* word 821 (0x0CD4) ftMotionCommandSetTexturePartID(5) */
	0xAC100005, /* word 822 (0x0CD8) ftMotionCommandSetTexturePartID(1048581) */
	0xBC000003, /* word 823 (0x0CDC) ftMotionCommandSetSlopeContour(3) */
	0x98016800, /* word 824 (0x0CE0) Effect(0, 90, 0, 0, 140, 0, 280, 280, 230) */
	0x0000008C,
	0x00000118,
	0x011800E6,
	0x0400000A, /* word 828 (0x0CF0) ftMotionCommandWait(10) */
	0x90000000, /* word 829 (0x0CF4) Goto */
	0x034E0334, /* -> word 820 (0x0CD0) */
	0xFFFFFFFF, /* word 831 (0x0CFC) data */
	0x00000006, /* word 832 (0x0D00) data */
	0x00000169, /* word 833 (0x0D04) data */
	0x00000064, /* word 834 (0x0D08) data */
	0x00000000, /* word 835 (0x0D0C) data */
	0x00000000, /* word 836 (0x0D10) data */
	0x00000000, /* word 837 (0x0D14) data */
	0xFFFFFFFF, /* word 838 (0x0D18) data */
	0x00000006, /* word 839 (0x0D1C) data */
	0x00000169, /* word 840 (0x0D20) data */
	0x00000064, /* word 841 (0x0D24) data */
	0x00000000, /* word 842 (0x0D28) data */
	0x00000000, /* word 843 (0x0D2C) data */
	0x00000000, /* word 844 (0x0D30) data */
	0x30000000, /* word 845 (0x0D34) SetThrow */
	0x0373033F, /* -> word 831 (0x0CFC) */
	0x0800000F, /* word 847 (0x0D3C) ftMotionCommandWaitAsync(15) */
	0xC4000006, /* word 848 (0x0D40) ftMotionCommandMakeRumble(0, 6) */
	0xBC000004, /* word 849 (0x0D44) ftMotionCommandSetSlopeContour(4) */
	0x0C03E030, /* word 850 (0x0D48) MakeAttackColl(0, 0, 31, 1, 1, 0, 220, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0) */
	0x00DC0000,
	0x00000000,
	0x5A464003,
	0x00200000,
	0x98004000, /* word 855 (0x0D5C) Effect(0, 16, 0, 0, 0, -100, 0, 0, 0) */
	0x00000000,
	0xFF9C0000,
	0x00000000,
	0x4400024B, /* word 859 (0x0D6C) ftMotionPlayVoice(587) */
	0x58000006, /* word 860 (0x0D70) ftMotionCommandSetFlag1(6) */
	0x5C000002, /* word 861 (0x0D74) ftMotionCommandSetFlag2(2) */
	0x04000006, /* word 862 (0x0D78) ftMotionCommandWait(6) */
	0x18000000, /* word 863 (0x0D7C) ftMotionCommandClearAttackCollAll() */
	0x0800002C, /* word 864 (0x0D80) ftMotionCommandWaitAsync(44) */
	0xBC000000, /* word 865 (0x0D84) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 866 (0x0D88) ftMotionCommandEnd() */
	0x00000000, /* word 867 (0x0D8C) ftMotionCommandEnd() */
	0x00000034, /* word 868 (0x0D90) data */
	0x0000000C, /* word 869 (0x0D94) data */
	0x0000002D, /* word 870 (0x0D98) data */
	0x00000046, /* word 871 (0x0D9C) data */
	0x00000000, /* word 872 (0x0DA0) data */
	0x00000050, /* word 873 (0x0DA4) data */
	0x00000000, /* word 874 (0x0DA8) data */
	0xFFFFFFFF, /* word 875 (0x0DAC) data */
	0x00000006, /* word 876 (0x0DB0) data */
	0x00000169, /* word 877 (0x0DB4) data */
	0x00000064, /* word 878 (0x0DB8) data */
	0x00000000, /* word 879 (0x0DBC) data */
	0x00000000, /* word 880 (0x0DC0) data */
	0x00000000, /* word 881 (0x0DC4) data */
	0x30000000, /* word 882 (0x0DC8) SetThrow */
	0x039A0364, /* -> word 868 (0x0D90) */
	0xA0380001, /* word 884 (0x0DD0) ftMotionCommandSetModelPartID(7, 1) */
	0x08000004, /* word 885 (0x0DD4) ftMotionCommandWaitAsync(4) */
	0x74000002, /* word 886 (0x0DD8) ftMotionCommandSetHitStatusAll(2) */
	0x08000013, /* word 887 (0x0DDC) ftMotionCommandWaitAsync(19) */
	0x44000259, /* word 888 (0x0DE0) ftMotionPlayVoice(601) */
	0x38000002, /* word 889 (0x0DE4) ftMotionPlayFGM(2) */
	0x98887C00, /* word 890 (0x0DE8) Effect(17, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x98004C00, /* word 894 (0x0DF8) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x9BF88400, /* word 898 (0x0E08) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x5C000001, /* word 902 (0x0E18) ftMotionCommandSetFlag2(1) */
	0xA0380000, /* word 903 (0x0E1C) ftMotionCommandSetModelPartID(7, 0) */
	0x0800000C, /* word 904 (0x0E20) ftMotionCommandWaitAsync(12) */
	0x74000001, /* word 905 (0x0E24) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 906 (0x0E28) ftMotionCommandEnd() */
	0x00000034, /* word 907 (0x0E2C) data */
	0x00000010, /* word 908 (0x0E30) data */
	0x0000002D, /* word 909 (0x0E34) data */
	0x00000046, /* word 910 (0x0E38) data */
	0x00000000, /* word 911 (0x0E3C) data */
	0x00000046, /* word 912 (0x0E40) data */
	0x00000000, /* word 913 (0x0E44) data */
	0xFFFFFFFF, /* word 914 (0x0E48) data */
	0x00000008, /* word 915 (0x0E4C) data */
	0x00000169, /* word 916 (0x0E50) data */
	0x00000064, /* word 917 (0x0E54) data */
	0x00000000, /* word 918 (0x0E58) data */
	0x00000000, /* word 919 (0x0E5C) data */
	0x00000000, /* word 920 (0x0E60) data */
	0x30000000, /* word 921 (0x0E64) SetThrow */
	0x03BC038B, /* -> word 907 (0x0E2C) */
	0xA0380001, /* word 923 (0x0E6C) ftMotionCommandSetModelPartID(7, 1) */
	0x08000004, /* word 924 (0x0E70) ftMotionCommandWaitAsync(4) */
	0x74000002, /* word 925 (0x0E74) ftMotionCommandSetHitStatusAll(2) */
	0x08000013, /* word 926 (0x0E78) ftMotionCommandWaitAsync(19) */
	0x44000259, /* word 927 (0x0E7C) ftMotionPlayVoice(601) */
	0x38000002, /* word 928 (0x0E80) ftMotionPlayFGM(2) */
	0x98F87C00, /* word 929 (0x0E84) Effect(31, 31, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x98004C00, /* word 933 (0x0E94) Effect(0, 19, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x9BF88400, /* word 937 (0x0EA4) Effect(-1, 33, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x5C000002, /* word 941 (0x0EB4) ftMotionCommandSetFlag2(2) */
	0xA0380000, /* word 942 (0x0EB8) ftMotionCommandSetModelPartID(7, 0) */
	0x0800000C, /* word 943 (0x0EBC) ftMotionCommandWaitAsync(12) */
	0x74000001, /* word 944 (0x0EC0) ftMotionCommandSetHitStatusAll(1) */
	0x00000000, /* word 945 (0x0EC4) ftMotionCommandEnd() */
	0x88000000, /* word 946 (0x0EC8) Subroutine */
	0x03B601AB, /* extern -> 0x6AC */
	0x00000000, /* word 948 (0x0ED0) ftMotionCommandEnd() */
	0x88000000, /* word 949 (0x0ED4) Subroutine */
	0x03B901B1, /* extern -> 0x6C4 */
	0x00000000, /* word 951 (0x0EDC) ftMotionCommandEnd() */
	0x88000000, /* word 952 (0x0EE0) Subroutine */
	0x03BE01B3, /* extern -> 0x6CC */
	0x00000000, /* word 954 (0x0EE8) ftMotionCommandEnd() */
	0x88000000, /* word 955 (0x0EEC) Subroutine */
	0x03C10078, /* -> word 120 (0x01E0) */
	0x88000000, /* word 957 (0x0EF4) Subroutine */
	0x03C301BC, /* extern -> 0x6F0 */
	0x00000000, /* word 959 (0x0EFC) ftMotionCommandEnd() */
	0x88000000, /* word 960 (0x0F00) Subroutine */
	0x04730078, /* -> word 120 (0x01E0) */
	0x88000000, /* word 962 (0x0F08) Subroutine */
	0xFFFF01C3, /* extern -> 0x70C */
	0x00000000, /* word 964 (0x0F10) ftMotionCommandEnd() */
	0x44000247, /* word 965 (0x0F14) ftMotionPlayVoice(583) */
	0xC4000006, /* word 966 (0x0F18) ftMotionCommandMakeRumble(0, 6) */
	0x0800003C, /* word 967 (0x0F1C) ftMotionCommandWaitAsync(60) */
	0x58000001, /* word 968 (0x0F20) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 969 (0x0F24) ftMotionCommandEnd() */
	0x08000003, /* word 970 (0x0F28) ftMotionCommandWaitAsync(3) */
	0x0C02E070, /* word 971 (0x0F2C) MakeAttackColl(0, 0, 23, 3, 1, 0, 280, 0, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8) */
	0x01180000,
	0x00000000,
	0x5A432003,
	0x00000400,
	0x0C832070, /* word 976 (0x0F40) MakeAttackColl(1, 0, 25, 3, 1, 0, 280, 0, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8) */
	0x01180000,
	0x00000000,
	0x5A432003,
	0x00000400,
	0x4C00002B, /* word 981 (0x0F54) ftMotionCommandPlayFGMStoreInfo(43) */
	0x04000003, /* word 982 (0x0F58) ftMotionCommandWait(3) */
	0x18000000, /* word 983 (0x0F5C) ftMotionCommandClearAttackCollAll() */
	0x0800000A, /* word 984 (0x0F60) ftMotionCommandWaitAsync(10) */
	0x58000001, /* word 985 (0x0F64) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 986 (0x0F68) ftMotionCommandEnd() */
	0x08000001, /* word 987 (0x0F6C) ftMotionCommandWaitAsync(1) */
	0x0C0380B0, /* word 988 (0x0F70) MakeAttackColl(0, 0, 28, 5, 1, 0, 300, 0, 0, 0, 361, 120, 0, 3, 0, 1, 0, 8) */
	0x012C0000,
	0x00000000,
	0x5A478003,
	0x00200400,
	0x0C83C0B0, /* word 993 (0x0F84) MakeAttackColl(1, 0, 30, 5, 1, 0, 300, 0, 0, 0, 361, 120, 0, 3, 0, 1, 0, 8) */
	0x012C0000,
	0x00000000,
	0x5A478003,
	0x00200400,
	0x4C00002B, /* word 998 (0x0F98) ftMotionCommandPlayFGMStoreInfo(43) */
	0x04000003, /* word 999 (0x0F9C) ftMotionCommandWait(3) */
	0x18000000, /* word 1000 (0x0FA0) ftMotionCommandClearAttackCollAll() */
	0x08000008, /* word 1001 (0x0FA4) ftMotionCommandWaitAsync(8) */
	0x00000000, /* word 1002 (0x0FA8) ftMotionCommandEnd() */
	0xBC000004, /* word 1003 (0x0FAC) ftMotionCommandSetSlopeContour(4) */
	0x70380003, /* word 1004 (0x0FB0) ftMotionCommandSetHitStatusPartID(7, 3) */
	0x04000008, /* word 1005 (0x0FB4) ftMotionCommandWait(8) */
	0x44000249, /* word 1006 (0x0FB8) ftMotionPlayVoice(585) */
	0x0C000190, /* word 1007 (0x0FBC) MakeAttackColl(0, 0, 0, 12, 1, 0, 280, 0, 180, 280, 361, 100, 0, 3, 0, 2, 1, 10) */
	0x01180000,
	0x00B40118,
	0x5A464003,
	0x00420500,
	0x0C800190, /* word 1012 (0x0FD0) MakeAttackColl(1, 0, 0, 12, 1, 0, 200, 0, 180, 30, 361, 100, 0, 3, 0, 2, 1, 10) */
	0x00C80000,
	0x00B4001E,
	0x5A464003,
	0x00420500,
	0x4C00002A, /* word 1017 (0x0FE4) ftMotionCommandPlayFGMStoreInfo(42) */
	0x98004C00, /* word 1018 (0x0FE8) Effect(0, 19, 0, 0, -80, -180, 0, 0, 0) */
	0x0000FFB0,
	0xFF4C0000,
	0x00000000,
	0x04000004, /* word 1022 (0x0FF8) ftMotionCommandWait(4) */
	0x6C000001, /* word 1023 (0x0FFC) ftMotionCommandSetHitStatusPartAll(1) */
	0x20040000, /* word 1024 (0x1000) ftMotionCommandSetAttackCollDamage(0, 8) */
	0x20840000, /* word 1025 (0x1004) ftMotionCommandSetAttackCollDamage(1, 8) */
	0x0400000A, /* word 1026 (0x1008) ftMotionCommandWait(10) */
	0x18000000, /* word 1027 (0x100C) ftMotionCommandClearAttackCollAll() */
	0x0800001B, /* word 1028 (0x1010) ftMotionCommandWaitAsync(27) */
	0xBC000000, /* word 1029 (0x1014) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 1030 (0x1018) ftMotionCommandEnd() */
	0x08000008, /* word 1031 (0x101C) ftMotionCommandWaitAsync(8) */
	0x0C0381B0, /* word 1032 (0x1020) MakeAttackColl(0, 0, 28, 13, 1, 0, 300, 0, 0, 0, 70, 100, 0, 3, 0, 1, 0, 8) */
	0x012C0000,
	0x00000000,
	0x11864003,
	0x00200400,
	0x0C83C1B0, /* word 1037 (0x1034) MakeAttackColl(1, 0, 30, 13, 1, 0, 300, 90, 0, 0, 70, 100, 0, 3, 0, 1, 0, 8) */
	0x012C005A,
	0x00000000,
	0x11864003,
	0x00200400,
	0x4C00002A, /* word 1042 (0x1048) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000003, /* word 1043 (0x104C) ftMotionCommandWait(3) */
	0x18000000, /* word 1044 (0x1050) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1045 (0x1054) ftMotionCommandEnd() */
	0x08000008, /* word 1046 (0x1058) ftMotionCommandWaitAsync(8) */
	0x0C0381B0, /* word 1047 (0x105C) MakeAttackColl(0, 0, 28, 13, 1, 0, 300, 0, 0, 0, 70, 100, 0, 3, 0, 1, 0, 8) */
	0x012C0000,
	0x00000000,
	0x11864003,
	0x00200400,
	0x0C83C1B0, /* word 1052 (0x1070) MakeAttackColl(1, 0, 30, 13, 1, 0, 300, 90, 0, 0, 70, 100, 0, 3, 0, 1, 0, 8) */
	0x012C005A,
	0x00000000,
	0x11864003,
	0x00200400,
	0x4C00002A, /* word 1057 (0x1084) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000003, /* word 1058 (0x1088) ftMotionCommandWait(3) */
	0x18000000, /* word 1059 (0x108C) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1060 (0x1090) ftMotionCommandEnd() */
	0x08000008, /* word 1061 (0x1094) ftMotionCommandWaitAsync(8) */
	0x0C0381B0, /* word 1062 (0x1098) MakeAttackColl(0, 0, 28, 13, 1, 0, 300, 0, 0, 0, 70, 100, 0, 3, 0, 1, 0, 8) */
	0x012C0000,
	0x00000000,
	0x11864003,
	0x00200400,
	0x0C83C1B0, /* word 1067 (0x10AC) MakeAttackColl(1, 0, 30, 13, 1, 0, 300, 90, 0, 0, 70, 100, 0, 3, 0, 1, 0, 8) */
	0x012C005A,
	0x00000000,
	0x11864003,
	0x00200400,
	0x4C00002A, /* word 1072 (0x10C0) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000003, /* word 1073 (0x10C4) ftMotionCommandWait(3) */
	0x18000000, /* word 1074 (0x10C8) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1075 (0x10CC) ftMotionCommandEnd() */
	0x04000007, /* word 1076 (0x10D0) ftMotionCommandWait(7) */
	0x70380003, /* word 1077 (0x10D4) ftMotionCommandSetHitStatusPartID(7, 3) */
	0x0C00E190, /* word 1078 (0x10D8) MakeAttackColl(0, 0, 7, 12, 1, 0, 390, 0, 40, 40, 100, 100, 130, 3, 0, 1, 1, 0) */
	0x01860000,
	0x00280028,
	0x1906420B,
	0x00220000,
	0x0C80C190, /* word 1083 (0x10EC) MakeAttackColl(1, 0, 6, 12, 1, 0, 240, 0, 0, 0, 100, 100, 130, 3, 0, 1, 1, 0) */
	0x00F00000,
	0x00000000,
	0x1906420B,
	0x00220000,
	0x4C00002A, /* word 1088 (0x1100) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000004, /* word 1089 (0x1104) ftMotionCommandWait(4) */
	0x6C000001, /* word 1090 (0x1108) ftMotionCommandSetHitStatusPartAll(1) */
	0x18000000, /* word 1091 (0x110C) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1092 (0x1110) ftMotionCommandEnd() */
	0xBC000004, /* word 1093 (0x1114) ftMotionCommandSetSlopeContour(4) */
	0x04000008, /* word 1094 (0x1118) ftMotionCommandWait(8) */
	0x0C026150, /* word 1095 (0x111C) MakeAttackColl(0, 0, 19, 10, 1, 0, 260, 0, -20, 0, 30, 100, 110, 3, 0, 1, 0, 0) */
	0x01040000,
	0xFFEC0000,
	0x078641BB,
	0x00200000,
	0x0C828150, /* word 1100 (0x1130) MakeAttackColl(1, 0, 20, 10, 1, 0, 210, 0, 0, 0, 30, 100, 110, 3, 0, 1, 0, 0) */
	0x00D20000,
	0x00000000,
	0x078641BB,
	0x00200000,
	0x4C00002A, /* word 1105 (0x1144) ftMotionCommandPlayFGMStoreInfo(42) */
	0x98004000, /* word 1106 (0x1148) Effect(0, 16, 0, 0, -80, -180, 0, 0, 0) */
	0x0000FFB0,
	0xFF4C0000,
	0x00000000,
	0x04000003, /* word 1110 (0x1158) ftMotionCommandWait(3) */
	0x18000000, /* word 1111 (0x115C) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1112 (0x1160) ftMotionCommandEnd() */
	0x08000006, /* word 1113 (0x1164) ftMotionCommandWaitAsync(6) */
	0xAC000006, /* word 1114 (0x1168) ftMotionCommandSetTexturePartID(6) */
	0xAC100006, /* word 1115 (0x116C) ftMotionCommandSetTexturePartID(1048582) */
	0x98387C00, /* word 1116 (0x1170) Effect(7, 31, 0, 0, 0, 0, 100, 100, 100) */
	0x00000000,
	0x00000064,
	0x00640064,
	0x70380003, /* word 1120 (0x1180) ftMotionCommandSetHitStatusPartID(7, 3) */
	0x08000012, /* word 1121 (0x1184) ftMotionCommandWaitAsync(18) */
	0x50000000, /* word 1122 (0x1188) ftMotionCommandPlaySmashVoice(0) */
	0x0C00E250, /* word 1123 (0x118C) MakeAttackColl(0, 0, 7, 18, 1, 0, 380, 0, 40, 40, 361, 100, 0, 3, 0, 2, 1, 20) */
	0x017C0000,
	0x00280028,
	0x5A464003,
	0x00420A00,
	0x0C80C250, /* word 1128 (0x11A0) MakeAttackColl(1, 0, 6, 18, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 20) */
	0x00C80000,
	0x00000000,
	0x5A464003,
	0x00420A00,
	0x4C000029, /* word 1133 (0x11B4) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000007, /* word 1134 (0x11B8) ftMotionCommandWait(7) */
	0x6C000001, /* word 1135 (0x11BC) ftMotionCommandSetHitStatusPartAll(1) */
	0x18000000, /* word 1136 (0x11C0) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1137 (0x11C4) ftMotionCommandEnd() */
	0x90000000, /* word 1138 (0x11C8) Goto */
	0x04750459, /* -> word 1113 (0x1164) */
	0x90000000, /* word 1140 (0x11D0) Goto */
	0x04770459, /* -> word 1113 (0x1164) */
	0x90000000, /* word 1142 (0x11D8) Goto */
	0x05720459, /* -> word 1113 (0x1164) */
	0x08000006, /* word 1144 (0x11E0) ftMotionCommandWaitAsync(6) */
	0x98387C00, /* word 1145 (0x11E4) Effect(7, 31, 0, 0, 0, 0, 100, 100, 100) */
	0x00000000,
	0x00000064,
	0x00640064,
	0x70380003, /* word 1149 (0x11F4) ftMotionCommandSetHitStatusPartID(7, 3) */
	0x08000009, /* word 1150 (0x11F8) ftMotionCommandWaitAsync(9) */
	0x50000000, /* word 1151 (0x11FC) ftMotionCommandPlaySmashVoice(0) */
	0x4C000029, /* word 1152 (0x1200) ftMotionCommandPlayFGMStoreInfo(41) */
	0x0C00E250, /* word 1153 (0x1204) MakeAttackColl(0, 0, 7, 18, 1, 0, 320, 0, 40, 40, 361, 118, 0, 3, 0, 2, 1, 20) */
	0x01400000,
	0x00280028,
	0x5A476003,
	0x00420A00,
	0x0C80C250, /* word 1158 (0x1218) MakeAttackColl(1, 0, 6, 18, 1, 0, 210, 0, 0, 0, 361, 118, 0, 3, 0, 2, 1, 20) */
	0x00D20000,
	0x00000000,
	0x5A476003,
	0x00420A00,
	0x04000001, /* word 1163 (0x122C) ftMotionCommandWait(1) */
	0x2400B900, /* word 1164 (0x1230) ftMotionCommandSetAttackCollSize(0, 370) */
	0x24807800, /* word 1165 (0x1234) ftMotionCommandSetAttackCollSize(1, 240) */
	0x04000002, /* word 1166 (0x1238) ftMotionCommandWait(2) */
	0x0C00E250, /* word 1167 (0x123C) MakeAttackColl(0, 0, 7, 18, 1, 0, 320, 0, 40, 40, 80, 110, 0, 3, 0, 2, 1, 20) */
	0x01400000,
	0x00280028,
	0x1406E003,
	0x00420A00,
	0x0C80C250, /* word 1172 (0x1250) MakeAttackColl(1, 0, 6, 18, 1, 0, 210, 0, 0, 0, 80, 110, 0, 3, 0, 2, 1, 20) */
	0x00D20000,
	0x00000000,
	0x1406E003,
	0x00420A00,
	0x04000004, /* word 1177 (0x1264) ftMotionCommandWait(4) */
	0x6C000001, /* word 1178 (0x1268) ftMotionCommandSetHitStatusPartAll(1) */
	0x18000000, /* word 1179 (0x126C) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1180 (0x1270) ftMotionCommandEnd() */
	0x50000000, /* word 1181 (0x1274) ftMotionCommandPlaySmashVoice(0) */
	0x04000006, /* word 1182 (0x1278) ftMotionCommandWait(6) */
	0xBC000004, /* word 1183 (0x127C) ftMotionCommandSetSlopeContour(4) */
	0x0C0261D0, /* word 1184 (0x1280) MakeAttackColl(0, 0, 19, 14, 1, 0, 300, 0, 0, 0, 30, 105, 0, 3, 0, 2, 0, 20) */
	0x012C0000,
	0x00000000,
	0x07869003,
	0x00400A00,
	0x0C8281D0, /* word 1189 (0x1294) MakeAttackColl(1, 0, 20, 14, 1, 0, 260, 0, 0, 0, 30, 105, 0, 3, 0, 2, 0, 20) */
	0x01040000,
	0x00000000,
	0x07869003,
	0x00400A00,
	0x4C00002A, /* word 1194 (0x12A8) ftMotionCommandPlayFGMStoreInfo(42) */
	0x98A07C00, /* word 1195 (0x12AC) Effect(20, 31, 0, 100, 0, 0, 60, 60, 60) */
	0x00640000,
	0x0000003C,
	0x003C003C,
	0x98003C00, /* word 1199 (0x12BC) Effect(0, 15, 0, 0, 0, 150, 0, 0, 0) */
	0x00000000,
	0x00960000,
	0x00000000,
	0x04000002, /* word 1203 (0x12CC) ftMotionCommandWait(2) */
	0x18000000, /* word 1204 (0x12D0) ftMotionCommandClearAttackCollAll() */
	0x0400000D, /* word 1205 (0x12D4) ftMotionCommandWait(13) */
	0x0C0261D0, /* word 1206 (0x12D8) MakeAttackColl(0, 0, 19, 14, 1, 0, 300, 0, 0, 0, 30, 105, 0, 3, 0, 2, 0, 20) */
	0x012C0000,
	0x00000000,
	0x07869003,
	0x00400A00,
	0x0C8281D0, /* word 1211 (0x12EC) MakeAttackColl(1, 0, 20, 14, 1, 0, 260, 0, 0, 0, 30, 105, 0, 3, 0, 2, 0, 20) */
	0x01040000,
	0x00000000,
	0x07869003,
	0x00400A00,
	0x4C00002A, /* word 1216 (0x1300) ftMotionCommandPlayFGMStoreInfo(42) */
	0x98A07C00, /* word 1217 (0x1304) Effect(20, 31, 0, 100, 0, 0, 60, 60, 60) */
	0x00640000,
	0x0000003C,
	0x003C003C,
	0x98004000, /* word 1221 (0x1314) Effect(0, 16, 0, 0, 0, -150, 0, 0, 0) */
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x04000002, /* word 1225 (0x1324) ftMotionCommandWait(2) */
	0x18000000, /* word 1226 (0x1328) ftMotionCommandClearAttackCollAll() */
	0xBC000000, /* word 1227 (0x132C) ftMotionCommandSetSlopeContour(0) */
	0x00000000, /* word 1228 (0x1330) ftMotionCommandEnd() */
	0x08000005, /* word 1229 (0x1334) ftMotionCommandWaitAsync(5) */
	0x58000032, /* word 1230 (0x1338) ftMotionCommandSetFlag1(50) */
	0x0C0381D0, /* word 1231 (0x133C) MakeAttackColl(0, 0, 28, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15) */
	0x00F0000A,
	0x00000000,
	0x5A464003,
	0x00420780,
	0x0C82E1D0, /* word 1236 (0x1350) MakeAttackColl(1, 0, 23, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15) */
	0x00F0000A,
	0x00000000,
	0x5A464003,
	0x00420780,
	0x0D00A1D0, /* word 1241 (0x1364) MakeAttackColl(2, 0, 5, 14, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15) */
	0x01040000,
	0x00000000,
	0x5A464003,
	0x00420780,
	0x4C00002A, /* word 1246 (0x1378) ftMotionCommandPlayFGMStoreInfo(42) */
	0x04000004, /* word 1247 (0x137C) ftMotionCommandWait(4) */
	0x0C038170, /* word 1248 (0x1380) MakeAttackColl(0, 0, 28, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0) */
	0x00F0000A,
	0x00000000,
	0x5A464003,
	0x00420000,
	0x0C82E170, /* word 1253 (0x1394) MakeAttackColl(1, 0, 23, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0) */
	0x00F0000A,
	0x00000000,
	0x5A464003,
	0x00420000,
	0x0D00A170, /* word 1258 (0x13A8) MakeAttackColl(2, 0, 5, 11, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0) */
	0x01040000,
	0x00000000,
	0x5A464003,
	0x00420000,
	0x0400001E, /* word 1263 (0x13BC) ftMotionCommandWait(30) */
	0x58000000, /* word 1264 (0x13C0) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1265 (0x13C4) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1266 (0x13C8) ftMotionCommandEnd() */
	0x0800000B, /* word 1267 (0x13CC) ftMotionCommandWaitAsync(11) */
	0x58000028, /* word 1268 (0x13D0) ftMotionCommandSetFlag1(40) */
	0x50000000, /* word 1269 (0x13D4) ftMotionCommandPlaySmashVoice(0) */
	0x4C000029, /* word 1270 (0x13D8) ftMotionCommandPlayFGMStoreInfo(41) */
	0x0C00E250, /* word 1271 (0x13DC) MakeAttackColl(0, 0, 7, 18, 1, 0, 300, 0, 40, 40, -85, 100, 0, 3, 0, 2, 1, 0) */
	0x012C0000,
	0x00280028,
	0xEAC64003,
	0x00420000,
	0x0C80C250, /* word 1276 (0x13F0) MakeAttackColl(1, 0, 6, 18, 1, 0, 200, 0, 0, 0, -85, 100, 0, 3, 0, 2, 1, 0) */
	0x00C80000,
	0x00000000,
	0xEAC64003,
	0x00420000,
	0x04000002, /* word 1281 (0x1404) ftMotionCommandWait(2) */
	0x0C00E250, /* word 1282 (0x1408) MakeAttackColl(0, 0, 7, 18, 1, 0, 300, 0, 40, 40, -100, 100, 0, 3, 0, 2, 1, 0) */
	0x012C0000,
	0x00280028,
	0xE7064003,
	0x00420000,
	0x0C80C250, /* word 1287 (0x141C) MakeAttackColl(1, 0, 6, 18, 1, 0, 200, 0, 0, 0, -100, 100, 0, 3, 0, 2, 1, 0) */
	0x00C80000,
	0x00000000,
	0xE7064003,
	0x00420000,
	0x04000003, /* word 1292 (0x1430) ftMotionCommandWait(3) */
	0x18000000, /* word 1293 (0x1434) ftMotionCommandClearAttackCollAll() */
	0x0400000F, /* word 1294 (0x1438) ftMotionCommandWait(15) */
	0x58000000, /* word 1295 (0x143C) ftMotionCommandSetFlag1(0) */
	0x00000000, /* word 1296 (0x1440) ftMotionCommandEnd() */
	0x38000052, /* word 1297 (0x1444) ftMotionPlayFGM(82) */
	0x98003400, /* word 1298 (0x1448) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 1302 (0x1458) ftMotionCommandEnd() */
	0x0800000A, /* word 1303 (0x145C) ftMotionCommandWaitAsync(10) */
	0x58000001, /* word 1304 (0x1460) ftMotionCommandSetFlag1(1) */
	0x0C038210, /* word 1305 (0x1464) MakeAttackColl(0, 0, 28, 16, 1, 0, 270, -30, 45, 0, 361, 100, 0, 3, 0, 2, 1, 10) */
	0x010EFFE2,
	0x002D0000,
	0x5A464003,
	0x00420500,
	0x0C838210, /* word 1310 (0x1478) MakeAttackColl(1, 0, 28, 16, 1, 0, 340, 110, 40, 0, 361, 100, 0, 3, 0, 2, 1, 10) */
	0x0154006E,
	0x00280000,
	0x5A464003,
	0x00420500,
	0x4C000029, /* word 1315 (0x148C) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000004, /* word 1316 (0x1490) ftMotionCommandWait(4) */
	0x0C038150, /* word 1317 (0x1494) MakeAttackColl(0, 0, 28, 10, 1, 0, 240, -30, 45, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x00F0FFE2,
	0x002D0000,
	0x5A464003,
	0x00220000,
	0x0C838150, /* word 1322 (0x14A8) MakeAttackColl(1, 0, 28, 10, 1, 0, 300, 80, 30, 0, 361, 100, 0, 3, 0, 1, 1, 0) */
	0x012C0050,
	0x001E0000,
	0x5A464003,
	0x00220000,
	0x04000006, /* word 1327 (0x14BC) ftMotionCommandWait(6) */
	0x58000000, /* word 1328 (0x14C0) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1329 (0x14C4) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1330 (0x14C8) ftMotionCommandEnd() */
	0x38000052, /* word 1331 (0x14CC) ftMotionPlayFGM(82) */
	0x98003400, /* word 1332 (0x14D0) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 1336 (0x14E0) ftMotionCommandEnd() */
	0x08000009, /* word 1337 (0x14E4) ftMotionCommandWaitAsync(9) */
	0x58000032, /* word 1338 (0x14E8) ftMotionCommandSetFlag1(50) */
	0x0C0261F0, /* word 1339 (0x14EC) MakeAttackColl(0, 0, 19, 15, 1, 0, 340, 0, 0, 0, 90, 100, 0, 3, 0, 2, 1, 20) */
	0x01540000,
	0x00000000,
	0x16864003,
	0x00420A00,
	0x0C8281F0, /* word 1344 (0x1500) MakeAttackColl(1, 0, 20, 15, 1, 0, 340, 0, 120, 0, 90, 100, 0, 3, 0, 2, 1, 20) */
	0x01540000,
	0x00780000,
	0x16864003,
	0x00420A00,
	0x4C000029, /* word 1349 (0x1514) ftMotionCommandPlayFGMStoreInfo(41) */
	0x04000002, /* word 1350 (0x1518) ftMotionCommandWait(2) */
	0x58000000, /* word 1351 (0x151C) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1352 (0x1520) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1353 (0x1524) ftMotionCommandEnd() */
	0x08000004, /* word 1354 (0x1528) ftMotionCommandWaitAsync(4) */
	0x58000032, /* word 1355 (0x152C) ftMotionCommandSetFlag1(50) */
	0x0C038090, /* word 1356 (0x1530) MakeAttackColl(0, 0, 28, 4, 1, 0, 300, 0, 0, 0, -90, 90, 0, 3, 0, 2, 1, 5) */
	0x012C0000,
	0x00000000,
	0xE985A003,
	0x00420280,
	0x0C82E090, /* word 1361 (0x1544) MakeAttackColl(1, 0, 23, 4, 1, 0, 300, 0, 0, 0, -90, 90, 0, 3, 0, 2, 1, 5) */
	0x012C0000,
	0x00000000,
	0xE985A003,
	0x00420280,
	0x8000000E, /* word 1366 (0x1558) ftMotionCommandLoopBegin(14) */
	0x4C0000DB, /* word 1367 (0x155C) ftMotionCommandPlayFGMStoreInfo(219) */
	0x04000001, /* word 1368 (0x1560) ftMotionCommandWait(1) */
	0x18000000, /* word 1369 (0x1564) ftMotionCommandClearAttackCollAll() */
	0x04000001, /* word 1370 (0x1568) ftMotionCommandWait(1) */
	0x2C000000, /* word 1371 (0x156C) ftMotionCommandRefreshAttackCollID(0) */
	0x2C000001, /* word 1372 (0x1570) ftMotionCommandRefreshAttackCollID(1) */
	0x84000000, /* word 1373 (0x1574) ftMotionCommandLoopEnd() */
	0x58000000, /* word 1374 (0x1578) ftMotionCommandSetFlag1(0) */
	0x18000000, /* word 1375 (0x157C) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1376 (0x1580) ftMotionCommandEnd() */
	0x38000052, /* word 1377 (0x1584) ftMotionPlayFGM(82) */
	0x98003400, /* word 1378 (0x1588) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000, /* word 1382 (0x1598) ftMotionCommandEnd() */
	0x0800003C, /* word 1383 (0x159C) ftMotionCommandWaitAsync(60) */
	0x98016C00, /* word 1384 (0x15A0) Effect(0, 91, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x38000101, /* word 1388 (0x15B0) ftMotionPlayFGM(257) */
	0xC4000009, /* word 1389 (0x15B4) ftMotionCommandMakeRumble(0, 9) */
	0x04000001, /* word 1390 (0x15B8) ftMotionCommandWait(1) */
	0x5C000001, /* word 1391 (0x15BC) ftMotionCommandSetFlag2(1) */
	0x00000000, /* word 1392 (0x15C0) ftMotionCommandEnd() */
	0x90000000, /* word 1393 (0x15C4) Goto */
	0x05CD0567, /* -> word 1383 (0x159C) */
	0x08000004, /* word 1395 (0x15CC) ftMotionCommandWaitAsync(4) */
	0x98691C00, /* word 1396 (0x15D0) Effect(13, 71, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x5C000001, /* word 1400 (0x15E0) ftMotionCommandSetFlag2(1) */
	0x08000017, /* word 1401 (0x15E4) ftMotionCommandWaitAsync(23) */
	0x98003400, /* word 1402 (0x15E8) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x38000100, /* word 1406 (0x15F8) ftMotionPlayFGM(256) */
	0x50000000, /* word 1407 (0x15FC) ftMotionCommandPlaySmashVoice(0) */
	0x5C000002, /* word 1408 (0x1600) ftMotionCommandSetFlag2(2) */
	0xC4000006, /* word 1409 (0x1604) ftMotionCommandMakeRumble(0, 6) */
	0x00000000, /* word 1410 (0x1608) ftMotionCommandEnd() */
	0x08000005, /* word 1411 (0x160C) ftMotionCommandWaitAsync(5) */
	0x98004C00, /* word 1412 (0x1610) Effect(0, 19, 0, 0, 0, -160, 0, 0, 0) */
	0x00000000,
	0xFF600000,
	0x00000000,
	0x44000256, /* word 1416 (0x1620) ftMotionPlayVoice(598) */
	0x08000013, /* word 1417 (0x1624) ftMotionCommandWaitAsync(19) */
	0x98011C00, /* word 1418 (0x1628) Effect(0, 71, 0, 0, 140, 0, 0, 0, 0) */
	0x0000008C,
	0x00000000,
	0x00000000,
	0x0800001E, /* word 1422 (0x1638) ftMotionCommandWaitAsync(30) */
	0x58000001, /* word 1423 (0x163C) ftMotionCommandSetFlag1(1) */
	0x44000257, /* word 1424 (0x1640) ftMotionPlayVoice(599) */
	0x0C000250, /* word 1425 (0x1644) MakeAttackColl(0, 0, 0, 18, 1, 0, 460, 0, 160, 0, 60, 100, 0, 3, 0, 2, 1, 50) */
	0x01CC0000,
	0x00A00000,
	0x0F064003,
	0x00421900,
	0x04000064, /* word 1430 (0x1658) ftMotionCommandWait(100) */
	0x00000000, /* word 1431 (0x165C) ftMotionCommandEnd() */
	0x08000005, /* word 1432 (0x1660) ftMotionCommandWaitAsync(5) */
	0x98003400, /* word 1433 (0x1664) Effect(0, 13, 0, 0, 0, -160, 0, 0, 0) */
	0x00000000,
	0xFF600000,
	0x00000000,
	0x44000256, /* word 1437 (0x1674) ftMotionPlayVoice(598) */
	0x58000001, /* word 1438 (0x1678) ftMotionCommandSetFlag1(1) */
	0x0800000A, /* word 1439 (0x167C) ftMotionCommandWaitAsync(10) */
	0x98011C00, /* word 1440 (0x1680) Effect(0, 71, 0, 0, 140, 0, 0, 0, 0) */
	0x0000008C,
	0x00000000,
	0x00000000,
	0x08000018, /* word 1444 (0x1690) ftMotionCommandWaitAsync(24) */
	0x44000257, /* word 1445 (0x1694) ftMotionPlayVoice(599) */
	0x0C000250, /* word 1446 (0x1698) MakeAttackColl(0, 0, 0, 18, 1, 0, 460, 0, 160, 0, 60, 100, 0, 3, 0, 2, 1, 50) */
	0x01CC0000,
	0x00A00000,
	0x0F064003,
	0x00421900,
	0x04000064, /* word 1451 (0x16AC) ftMotionCommandWait(100) */
	0x00000000, /* word 1452 (0x16B0) ftMotionCommandEnd() */
	0xC400000A, /* word 1453 (0x16B4) ftMotionCommandMakeRumble(0, 10) */
	0x3800000A, /* word 1454 (0x16B8) ftMotionPlayFGM(10) */
	0x98003400, /* word 1455 (0x16BC) Effect(0, 13, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x98005800, /* word 1459 (0x16CC) Effect(0, 22, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x9BF88800, /* word 1463 (0x16DC) Effect(-1, 34, 0, 0, 0, 0, 0, 0, 0) */
	0x00000000,
	0x00000000,
	0x00000000,
	0x04000003, /* word 1467 (0x16EC) ftMotionCommandWait(3) */
	0x54000001, /* word 1468 (0x16F0) ftMotionCommandSetFlag0(1) */
	0x00000000, /* word 1469 (0x16F4) ftMotionCommandEnd() */
	0xFFFFFFFF, /* word 1470 (0x16F8) data */
	0x00000014, /* word 1471 (0x16FC) data */
	0x00000169, /* word 1472 (0x1700) data */
	0x00000064, /* word 1473 (0x1704) data */
	0x00000000, /* word 1474 (0x1708) data */
	0x00000000, /* word 1475 (0x170C) data */
	0x00000000, /* word 1476 (0x1710) data */
	0xFFFFFFFF, /* word 1477 (0x1714) data */
	0x00000005, /* word 1478 (0x1718) data */
	0x00000169, /* word 1479 (0x171C) data */
	0x00000064, /* word 1480 (0x1720) data */
	0x00000000, /* word 1481 (0x1724) data */
	0x00000000, /* word 1482 (0x1728) data */
	0x00000000, /* word 1483 (0x172C) data */
	0x30000000, /* word 1484 (0x1730) SetThrow */
	0xFFFF05BE, /* -> word 1470 (0x16F8) */
	0x08000012, /* word 1486 (0x1738) ftMotionCommandWaitAsync(18) */
	0x0C03E030, /* word 1487 (0x173C) MakeAttackColl(0, 0, 31, 1, 1, 0, 300, 0, 100, 0, 361, 100, 0, 3, 0, 1, 0, 0) */
	0x012C0000,
	0x00640000,
	0x5A464003,
	0x00200000,
	0x380000FE, /* word 1492 (0x1750) ftMotionPlayFGM(254) */
	0x04000006, /* word 1493 (0x1754) ftMotionCommandWait(6) */
	0x18000000, /* word 1494 (0x1758) ftMotionCommandClearAttackCollAll() */
	0x00000000, /* word 1495 (0x175C) ftMotionCommandEnd() */
	0x38000013, /* word 1496 (0x1760) ftMotionPlayFGM(19) */
	0xC4000006, /* word 1497 (0x1764) ftMotionCommandMakeRumble(0, 6) */
	0x08000019, /* word 1498 (0x1768) ftMotionCommandWaitAsync(25) */
	0x58000001, /* word 1499 (0x176C) ftMotionCommandSetFlag1(1) */
	0x00000000, /* word 1500 (0x1770) ftMotionCommandEnd() */
	0xAC000008, /* word 1501 (0x1774) ftMotionCommandSetTexturePartID(8) */
	0xAC100008, /* word 1502 (0x1778) ftMotionCommandSetTexturePartID(1048584) */
	0x08000006, /* word 1503 (0x177C) ftMotionCommandWaitAsync(6) */
	0x5C000001, /* word 1504 (0x1780) ftMotionCommandSetFlag2(1) */
	0x74000002, /* word 1505 (0x1784) ftMotionCommandSetHitStatusAll(2) */
	0x08000014, /* word 1506 (0x1788) ftMotionCommandWaitAsync(20) */
	0x58000001, /* word 1507 (0x178C) ftMotionCommandSetFlag1(1) */
	0xC4000009, /* word 1508 (0x1790) ftMotionCommandMakeRumble(0, 9) */
	0x98001C00, /* word 1509 (0x1794) Effect(0, 7, 0, 0, 100, 200, 0, 0, 0) */
	0x00000064,
	0x00C80000,
	0x00000000,
	0x38000038, /* word 1513 (0x17A4) ftMotionPlayFGM(56) */
	0xAC000007, /* word 1514 (0x17A8) ftMotionCommandSetTexturePartID(7) */
	0xAC100007, /* word 1515 (0x17AC) ftMotionCommandSetTexturePartID(1048583) */
	0x04000008, /* word 1516 (0x17B0) ftMotionCommandWait(8) */
	0xAC000000, /* word 1517 (0x17B4) ftMotionCommandSetTexturePartID(0) */
	0xAC100000, /* word 1518 (0x17B8) ftMotionCommandSetTexturePartID(1048576) */
	0x00000000, /* word 1519 (0x17BC) ftMotionCommandEnd() */
};
