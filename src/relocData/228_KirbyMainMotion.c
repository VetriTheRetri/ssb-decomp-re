/* ftMotionCommand script data for relocData file 228 (KirbyMainMotion) */
/* File size: US 9648 bytes (0x25B0) / JP 9632 bytes (0x25A0) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>
#include <ft/ftchar/ftkirby/ftkirby.h>
#include <gm/gmsound.h>
#include <gm/gmdef.h>
extern u32 dKirbyMainMotion_0x0F64[];
extern u32 dKirbyMainMotion_0x1000[];
extern u32 dKirbyMainMotion_0x1088[];
extern u32 dKirbyMainMotion_0x1094[];
extern u32 dKirbyMainMotion_0x10A0[];
extern u32 dKirbyMainMotion_0x10B4[];
extern u32 dKirbyMainMotion_0x10C8[];
extern u32 dKirbyMainMotion_0x10E4[];
extern u32 dKirbyMainMotion_0x1128[];
extern u32 dKirbyMainMotion_0x116C[];
extern u32 dKirbyMainMotion_0x1170[];
extern u32 dKirbyMainMotion_0x11A8[];
extern u32 dKirbyMainMotion_0x1230[];
extern u32 dKirbyMainMotion_0x12B4[];
extern u32 dKirbyMainMotion_0x1324[];
extern u32 dKirbyMainMotion_0x1360[];
extern u32 dKirbyMainMotion_0x139C[];
extern u32 dKirbyMainMotion_0x13D8[];
extern u32 dKirbyMainMotion_0x1440[];
extern u32 dKirbyMainMotion_0x1480[];
extern u32 dKirbyMainMotion_0x151C[];
extern u32 dKirbyMainMotion_0x15BC[];
extern u32 dKirbyMainMotion_0x1668[];
extern u32 dKirbyMainMotion_0x16DC[];
extern u32 dKirbyMainMotion_0x1770[];
extern u32 dKirbyMainMotion_0x17B8[];
extern u32 dKirbyMainMotion_0x1828[];
extern u32 dKirbyMainMotion_0x1840[];
extern u32 dKirbyMainMotion_0x188C[];
extern u32 dKirbyMainMotion_0x18F4[];
extern u32 dKirbyMainMotion_0x193C[];
extern u32 dKirbyMainMotion_0x1970[];
extern u32 dKirbyMainMotion_0x1978[];
extern u32 dKirbyMainMotion_0x19D4[];
extern u32 dKirbyMainMotion_0x1AD8[];
extern u32 dKirbyMainMotion_0x1ADC[];
extern u32 dKirbyMainMotion_0x1B30[];
extern u32 dKirbyMainMotion_0x1B84[];
extern u32 dKirbyMainMotion_0x1BB4[];
extern u32 dKirbyMainMotion_0x1BEC[];
extern u32 dKirbyMainMotion_0x1C04[];
extern u32 dKirbyMainMotion_0x1C40[];
extern u32 dKirbyMainMotion_0x1C80[];
extern u32 dKirbyMainMotion_0x1CCC[];
extern u32 dKirbyMainMotion_0x1D08[];
extern u32 dKirbyMainMotion_0x1D3C[];
extern u32 dKirbyMainMotion_0x1D44[];
extern u32 dKirbyMainMotion_0x1D78[];
extern u32 dKirbyMainMotion_0x1D88[];
extern u32 dKirbyMainMotion_0x1DB0[];
extern u32 dKirbyMainMotion_0x1DD8[];
extern u32 dKirbyMainMotion_0x1E00[];
extern u32 dKirbyMainMotion_0x1E60[];
extern u32 dKirbyMainMotion_0x1EA4[];
extern u32 dKirbyMainMotion_0x1EBC[];
extern u32 dKirbyMainMotion_0x1ED0[];
extern u32 dKirbyMainMotion_0x1F04[];
extern u32 dKirbyMainMotion_0x1F24[];
extern u32 dKirbyMainMotion_0x1F84[];
extern u32 dKirbyMainMotion_0x1F8C[];
extern u32 dKirbyMainMotion_0x203C[];
extern u32 dKirbyMainMotion_0x2070[];
extern u32 dKirbyMainMotion_0x2088[];
extern u32 dKirbyMainMotion_0x20A0[];
extern u32 dKirbyMainMotion_0x20F4[];
extern u32 dKirbyMainMotion_0x2124[];
extern u32 dKirbyMainMotion_0x2174[];
extern u32 dKirbyMainMotion_0x218C[];
extern u32 dKirbyMainMotion_0x21D8[];
extern u32 dKirbyMainMotion_0x2218[];
extern u32 dKirbyMainMotion_0x222C[];
extern u32 dKirbyMainMotion_0x2268[];
extern u32 dKirbyMainMotion_0x228C[];
extern u32 dKirbyMainMotion_0x2348[];
extern u32 dKirbyMainMotion_0x241C[];
extern u32 dKirbyMainMotion_0x245C[];
extern u32 dKirbyMainMotion_0x2490[];
extern u32 dKirbyMainMotion_0x24E8[];
extern u32 dKirbyMainMotion_0x253C[];
/* FTThrowHitDesc forward-decls — referenced by SetThrow / SetDamageThrown
 * earlier in the file than their definitions. The US-only block guards
 * the three throw-data entries that only exist in the `#else` branch. */
extern FTThrowHitDesc dKirbyMainMotion_0x0E4C[2];
extern FTThrowHitDesc dKirbyMainMotion_0x0ED8[2];
#if !defined(REGION_JP)
extern FTThrowHitDesc dKirbyMainMotion_0x0FC8[2];
extern FTThrowHitDesc dKirbyMainMotion_0x1C94[2];
extern FTThrowHitDesc dKirbyMainMotion_0x21A0[2];
#endif

/* @ 0x0000, 324 bytes — FTKirbyCopy[27] table loaded by Kirby's SpecialN
 * (inhale) via lbRelocGetFileData(... &llKirbyMainMotionSpecialNFTKirbyCopy).
 * Each entry binds an enemy fighter to the model-part Kirby visually
 * acquires (and the post-spit-out star projectile damage). */
FTKirbyCopy dKirbyMainMotion_0x0000[27] = {
	{ nFTKindMario, 12, 1.5f, 17 },
	{ nFTKindFox, 7, 1.5f, 17 },
	{ nFTKindDonkey, 4, 2.0f, 30 },
	{ nFTKindSamus, 8, 1.6f, 17 },
	{ nFTKindLuigi, 11, 1.6f, 17 },
	{ nFTKindLink, 10, 1.5f, 17 },
	{ nFTKindYoshi, 5, 1.7f, 25 },
	{ nFTKindCaptain, 9, 1.7f, 17 },
	{ nFTKindKirby, 0, 1.6f, 17 },
	{ nFTKindPikachu, 6, 1.5f, 17 },
	{ nFTKindPurin, 3, 1.6f, 17 },
	{ nFTKindNess, 13, 1.6f, 17 },
	{ nFTKindKirby, 0, 1.0f, 17 },
	{ nFTKindKirby, 0, 1.5f, 17 },
	{ nFTKindKirby, 0, 1.5f, 17 },
	{ nFTKindKirby, 0, 1.5f, 17 },
	{ nFTKindKirby, 0, 2.0f, 30 },
	{ nFTKindKirby, 0, 1.6f, 17 },
	{ nFTKindKirby, 0, 1.6f, 17 },
	{ nFTKindKirby, 0, 1.5f, 17 },
	{ nFTKindKirby, 0, 1.7f, 17 },
	{ nFTKindKirby, 0, 1.7f, 17 },
	{ nFTKindKirby, 0, 1.6f, 17 },
	{ nFTKindKirby, 0, 1.5f, 17 },
	{ nFTKindKirby, 0, 1.6f, 17 },
	{ nFTKindKirby, 0, 1.6f, 17 },
	{ nFTKindDonkey, 4, 2.0f, 50 },
};

/* @ 0x0144, 16 bytes — small motion subroutine called from `dKirbyMainMotion_0x0154` */
u32 dKirbyMainMotion_0x0144[] = {
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandWait(3),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandReturn(),
};

u32 dKirbyMainMotion_0x0154[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x0144),
	ftMotionCommandWait(80),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x0144),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x0144),
	ftMotionCommandWait(140),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWait(80),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWait(70),
	ftMotionCommandGoto(dKirbyMainMotion_0x0154),
	ftMotionPlayFGM(nSYAudioFGMKirbyDash),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x01B8[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMKirbyFoot),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(10),
	ftMotionPlayFGM(nSYAudioFGMKirbyFoot),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dKirbyMainMotion_0x01B8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x021C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0228[] = {
	ftMotionCommandEffect(0, 16, 0, 0, 0, 120, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0258[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0268[] = {
	ftMotionPlayFGM(nSYAudioFGMInflateJump5),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0280[] = {
	ftMotionCommandSetTexturePartID(10),
	ftMotionPlayFGM(nSYAudioFGMInflateJump1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x02A4[] = {
	ftMotionCommandSetTexturePartID(10),
	ftMotionPlayFGM(nSYAudioFGMInflateJump1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x02C8[] = {
	ftMotionCommandSetTexturePartID(10),
	ftMotionPlayFGM(nSYAudioFGMInflateJump1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x02EC[] = {
	ftMotionCommandSetTexturePartID(10),
	ftMotionPlayFGM(nSYAudioFGMInflateJump1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0310[] = {
	ftMotionCommandSetTexturePartID(10),
	ftMotionPlayFGM(nSYAudioFGMInflateJump1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0330[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(nSYAudioFGMKirbyLanding),
	ftMotionCommandWait(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0344[] = {
	ftMotionPlayFGM(nSYAudioFGMMarioLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x035C[] = {
	ftMotionPlayVoice(nSYAudioVoiceKirbyOttotto),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0364[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip4),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x036C[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0380[] = {
	ftMotionCommandSetTexturePartID(9),
	ftMotionCommandReturn(),
};

u32 dKirbyMainMotion_0x0388[] = {
	ftMotionCommandSubroutine(dKirbyMainMotion_0x036C + 5),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0394[] = {
	ftMotionCommandSubroutine(dKirbyMainMotion_0x036C + 5),
	ftMotionCommandSetDamageThrown(0x0758) /* extern */,
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x03A8[] = {
	ftMotionPlayFGM(nSYAudioFGMKirbyLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x03C0[] = {
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x03C4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x03CC[] = {
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x03D0[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x03DC[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x03E8[] = {
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWait(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0428[] = {
	ftMotionCommandGoto(dKirbyMainMotion_0x03E8),
};

u32 dKirbyMainMotion_0x0430[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

u32 dKirbyMainMotion_0x0450[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0468[] = {
	ftMotionCommandGoto(dKirbyMainMotion_0x0450),
};

u32 dKirbyMainMotion_0x0470[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x0428 + 2),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0480[] = {
	ftMotionCommandGoto(dKirbyMainMotion_0x0470),
	ftMotionCommandGoto(dKirbyMainMotion_0x0470),
	ftMotionCommandGoto(dKirbyMainMotion_0x0470),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 24, 6, 0, 0, 300, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 24, 6, 0, 0, 300, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x04F4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 29, 6, 1, 0, 190, 160, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 29, 6, 1, 0, 80, 0, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 29, 6, 1, 0, 190, 160, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 29, 6, 1, 0, 80, 0, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0578[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceKirbySmash3),
	ftMotionPlayFGM(nSYAudioFGMHeavySwing1),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x05B4[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceKirbySmash3),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x05F4[] = {
	ftMotionCommandGoto(dKirbyMainMotion_0x05B4),
	ftMotionCommandSetTexturePartID(5),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x063C[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 15, 0, -100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0678[] = {
	ftMotionCommandSetTexturePartID(9),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0688[] = {
	ftMotionCommandSetTexturePartID(9),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x069C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x06A4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x06AC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(10),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x06BC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x06C4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x06CC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x06D4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x06E4[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 29, 4, 0, 0, 180, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 29, 4, 0, 0, 150, 200, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0748[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0758[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 0, 4, 0, 0, 300, 0, 180, 300, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x07B0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x07B8[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(40),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x07DC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x07E4[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(40),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0808[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0814[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(35),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0828[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0834[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0850[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x086C[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dKirbyMainMotion_0x0850),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0894[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x08B0[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x08D4[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dKirbyMainMotion_0x08B0),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0908[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x092C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0948[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dKirbyMainMotion_0x092C),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0970[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x098C[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x09B0[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dKirbyMainMotion_0x098C),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x09E4[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0A08[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0A1C[] = {
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dKirbyMainMotion_0x0A08),
};

u32 dKirbyMainMotion_0x0A28[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0A40[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dKirbyMainMotion_0x0A28),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0000) /* extern */,
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, 262143),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0A84[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0064) /* extern */,
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandSetAfterImage(0, 262143),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0AB8[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSubroutine(0x00C8) /* extern */,
	ftMotionCommandWait(5),
	ftMotionCommandSetAfterImage(0, 262143),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0AF4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(1),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x012C) /* extern */,
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, 262143),
	ftMotionCommandWait(21),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0B28[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x01A0) /* extern */,
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0B4C[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x01F4) /* extern */,
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0B70[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetColAnim(nGMColAnimFighterBat, 40),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSubroutine(0x0248) /* extern */,
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0BA4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x02B0) /* extern */,
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0BC8[] = {
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0324) /* extern */,
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0BF0[] = {
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0378) /* extern */,
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0C18[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSubroutine(0x03CC) /* extern */,
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0C40[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0430) /* extern */,
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0C64[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 13),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0494) /* extern */,
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0C8C[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 17),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x04F8) /* extern */,
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0CC0[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 32),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSubroutine(0x055C) /* extern */,
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0CF8[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 26),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x05C0) /* extern */,
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0D24[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0D34[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0D44[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSubroutine(0x0634) /* extern */,
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dKirbyMainMotion_0x0D44),
};

u32 dKirbyMainMotion_0x0D68[] = {
	ftMotionCommandSetTexturePartID(7),
};

u32 dKirbyMainMotion_0x0D6C[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 10, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dKirbyMainMotion_0x0D6C),
	ftMotionCommandEffect(127, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceKirbyDeadUp),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dKirbyMainMotion_0x0D44 + 9),
	ftMotionCommandGoto(dKirbyMainMotion_0x0D44 + 9),
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0DEC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0DF4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceKirbyFuraFura),
	ftMotionCommandSetTexturePartID(7),
	ftMotionCommandLoopBegin(12),
	ftMotionCommandEffect(0, 40, 0, 0, 130, 0, 240, 240, 240),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dKirbyMainMotion_0x0DF4),
};

u32 dKirbyMainMotion_0x0E24[] = {
	ftMotionPlayInterruptableVoice(nSYAudioVoiceKirbyFuraSleep),
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 90, 0, 0, 130, 0, 240, 240, 240),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dKirbyMainMotion_0x0E24),
};

FTThrowHitDesc dKirbyMainMotion_0x0E4C[2] = {
	{ -1, 6, 361, 100, 0, 0, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

u32 dKirbyMainMotion_0x0E84[] = {
	ftMotionCommandSetThrow((u32)dKirbyMainMotion_0x0ED8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 30, 1, 1, 0, 260, 0, 0, -20, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 30, 1, 1, 0, 160, 0, 0, -160, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dKirbyMainMotion_0x0ED8[2] = {
	{
#if defined(REGION_JP)
		52, 13, 45,  70, 0,  80, 0,
#else
		55, 13, 70,  70, 0, 100, 0,
#endif
	},
	{ -1,  6, 361, 100, 0,   0, 0 },
};

u32 dKirbyMainMotion_0x0F10[] = {
	ftMotionCommandSetThrow((u32)dKirbyMainMotion_0x0ED8),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMSamusJump1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopBegin(10),
	ftMotionCommandWait(2),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 200, 0, 400),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0F60[] = {
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x0F64[] = {
	ftMotionPlayFGM(nSYAudioFGMExplodeL),
	ftMotionCommandEffect(0, 29, 0, 0, 200, 280, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAirJumpAdd(0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x0FB0[] = {
	0x00000036,
	0x00000010,
	0x00000073,
	0x00000046,
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x0FC4[] = {
	0x00000046,
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x0FCC[] = {
	0xFFFFFFFF,  /* opc=63 unrecognised */
	0x00000008,
	0x00000169,
	0x00000064,
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x0FE0[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x0FE4[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x0FE8[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetThrow(0x042303EC),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingLw1),
	ftMotionCommandWaitAsync(4),
};
#else
u32 dKirbyMainMotion_0x0F64[] = {
	ftMotionCommandMakeAttackColl(0, 0, 0, 7, 1, 0, 200, 0, 0, 0, 361, 80, 0, 3, 0, 2, 0, 10),
	ftMotionPlayFGM(nSYAudioFGMExplodeL),
	ftMotionCommandEffect(0, 29, 0, 0, 200, 280, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(127, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetAirJumpAdd(0),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dKirbyMainMotion_0x0FC8[2] = {
	{ 54, 16, 115, 70, 0, 70, 0 },
	{ -1,  8, 361, 100, 0,  0, 0 },
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1000[] = {
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(19),
	ftMotionPlayFGM(nSYAudioFGMDonkeySlap2),
	ftMotionCommandEffect(30, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 15, 0, 0, 0, 150, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, -280, 0, 0, 0),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1064[] = {
	ftMotionCommandSubroutine(0x041D01AB),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1070[] = {
	ftMotionCommandSubroutine(0x042001B1),
	ftMotionCommandEnd(),
};
#else
u32 dKirbyMainMotion_0x1000[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetThrow((u32)dKirbyMainMotion_0x0FC8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingLw1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(19),
	ftMotionPlayFGM(nSYAudioFGMDonkeySlap2),
	ftMotionCommandEffect(30, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 15, 0, 0, 0, 150, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, -280, 0, 0, 0),
	ftMotionCommandEffect(127, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};
#endif

u32 dKirbyMainMotion_0x107C[] = {
	ftMotionCommandSubroutine(0x06AC) /* extern */,
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1088[] = {
	ftMotionCommandSubroutine(0x042800E0),
	0x88000000,  /* opc=34 truncated */
};
#else
u32 dKirbyMainMotion_0x1088[] = {
	ftMotionCommandSubroutine(0x06C4) /* extern */,
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1094[] = {
	ftMotionCommandWait(2752956),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x109C[] = {
	0x88000000,  /* opc=34 truncated */
};
#else
u32 dKirbyMainMotion_0x1094[] = {
	ftMotionCommandSubroutine(0x06CC) /* extern */,
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x10A0[] = {
	ftMotionCommandWait(6750432),
	ftMotionCommandSubroutine(0xFFFF01C3),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x10B0[] = {
	ftMotionCommandWaitAsync(12),
};
#else
u32 dKirbyMainMotion_0x10A0[] = {
	ftMotionCommandSubroutine(dKirbyMainMotion_0x036C + 5),
	ftMotionCommandSubroutine(0x06F0) /* extern */,
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x10B4[] = {
	ftMotionCommandMakeRumble(0, 6),
	ftMotionPlayVoice(nSYAudioVoiceKirbyAppeal),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
};
#else
u32 dKirbyMainMotion_0x10B4[] = {
	ftMotionCommandSubroutine(dKirbyMainMotion_0x036C + 5),
	ftMotionCommandSubroutine(0x070C) /* extern */,
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x10C8[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x10CC[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 11, 3, 1, 0, 210, -50, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
};
#else
u32 dKirbyMainMotion_0x10C8[] = {
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionPlayVoice(nSYAudioVoiceKirbyAppeal),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x10E4[] = {
	ftMotionCommandMakeAttackColl(1, 0, 11, 3, 1, 0, 210, 70, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1110[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 16, 4, 1, 0, 210, -50, 0, 0, 70, 50, 0, 3, 0, 1, 0, 8),
};
#else
u32 dKirbyMainMotion_0x10E4[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 11, 3, 1, 0, 210, -50, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 11, 3, 1, 0, 210, 70, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1128[] = {
	ftMotionCommandMakeAttackColl(1, 0, 16, 4, 1, 0, 210, 70, 0, 0, 70, 50, 0, 3, 0, 1, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1154[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1158[] = {
	ftMotionCommandMakeAttackColl(0, 0, 16, 1, 1, 0, 180, -60, 0, 0, 70, 50, 0, 3, 0, 1, 0, 8),
};
#else
u32 dKirbyMainMotion_0x1128[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 16, 4, 1, 0, 210, -50, 0, 0, 70, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 16, 4, 1, 0, 210, 70, 0, 0, 70, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x116C[] = {
	0x0C820030,  /* opc=3 truncated */
};
#else
u32 dKirbyMainMotion_0x116C[] = {
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1170[] = {
	0x00B400C8,
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1178[] = {
	ftMotionCommandMakeAttackCollScaled(3, 0, 25, 0, 0, 3, 32, 1024, 19456, 39, 16, 0, 0, 2, 24, 0, 0, 0),
	ftMotionCommandReturn(),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSubroutine(0x046B0456),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag2(2),
};
#else
u32 dKirbyMainMotion_0x1170[] = {
	ftMotionCommandMakeAttackColl(0, 0, 16, 1, 1, 0, 100, -60, 0, 0, 65, 50, 0, 3, 0, 1, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 16, 1, 1, 0, 100, 165, 0, 0, 65, 50, 0, 3, 0, 1, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandReturn(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x11A8[] = {
	ftMotionCommandSubroutine(0x04700456),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag2(3),
	ftMotionCommandSubroutine(0x04750456),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag2(4),
	ftMotionCommandSubroutine(0x047A0456),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag2(5),
	ftMotionCommandSubroutine(0x047E0456),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandPauseScript(),
	ftMotionCommandSubroutine(0x04810456),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandGoto(0x06570464),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandStopLoopSFX(55050240),
	ftMotionCommandStopLoopSFX(60162048),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1218[] = {
	ftMotionCommandStopLoopSFX(53739520),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandStopLoopSFX(57671680),
	ftMotionCommandStopLoopSFX(59179008),
	ftMotionCommandStopLoopSFX(26738688),
};
#else
u32 dKirbyMainMotion_0x11A8[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x1170),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x1170),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag2(3),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x1170),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag2(4),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x1170),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag2(5),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x1170),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandPauseScript(),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x1170),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandGoto(dKirbyMainMotion_0x11A8),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandStopLoopSFX(55050240),
	ftMotionCommandStopLoopSFX(60162048),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1230[] = {
	ftMotionCommandStopLoopSFX(53739520),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandStopLoopSFX(52428800),
	ftMotionCommandStopLoopSFX(60162048),
	ftMotionCommandHideItem(22020096),
	ftMotionCommandStopLoopSFX(53739520),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandStopLoopSFX(57671680),
	ftMotionCommandStopLoopSFX(60162048),
	ftMotionCommandStopLoopSFX(18874368),
	ftMotionCommandStopLoopSFX(53739520),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandStopLoopSFX(52428800),
	ftMotionCommandStopLoopSFX(59179008),
	ftMotionCommandHideItem(18874368),
	ftMotionCommandStopLoopSFX(53739520),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandStopLoopSFX(55050240),
	ftMotionCommandStopLoopSFX(60162048),
	ftMotionCommandStopLoopSFX(10485760),
	ftMotionCommandStopLoopSFX(53739520),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x129C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionPlayVoice(nSYAudioVoiceKirbySmash1),
	0x0C000150,  /* opc=3 truncated */
	0x01040000,
	0x009600C8,
	ftMotionCommandSetFlag1(38158339),
};
#else
u32 dKirbyMainMotion_0x1230[] = {
	ftMotionCommandStopLoopSFX(53739520),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandStopLoopSFX(57671680),
	ftMotionCommandStopLoopSFX(59179008),
	ftMotionCommandStopLoopSFX(26738688),
	ftMotionCommandStopLoopSFX(53739520),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandStopLoopSFX(52428800),
	ftMotionCommandStopLoopSFX(60162048),
	ftMotionCommandHideItem(22020096),
	ftMotionCommandStopLoopSFX(53739520),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandStopLoopSFX(57671680),
	ftMotionCommandStopLoopSFX(60162048),
	ftMotionCommandStopLoopSFX(18874368),
	ftMotionCommandStopLoopSFX(53739520),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandStopLoopSFX(52428800),
	ftMotionCommandStopLoopSFX(59179008),
	ftMotionCommandHideItem(18874368),
	ftMotionCommandStopLoopSFX(53739520),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandStopLoopSFX(55050240),
	ftMotionCommandStopLoopSFX(60162048),
	ftMotionCommandStopLoopSFX(10485760),
	ftMotionCommandStopLoopSFX(53739520),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x12B4[] = {
	0x01420500,
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 0, 8, 1, 0, 260, 0, 150, 200, 361, 100, 0, 3, 1, 2, 1, 10),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(16),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x130C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 24, 11, 1, 0, 250, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
};
#else
u32 dKirbyMainMotion_0x12B4[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionPlayVoice(nSYAudioVoiceKirbySmash1),
	ftMotionCommandMakeAttackColl(0, 0, 0, 10, 1, 0, 260, 0, 150, 200, 361, 100, 0, 3, 1, 2, 1, 10),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 0, 8, 1, 0, 260, 0, 150, 200, 361, 100, 0, 3, 1, 2, 1, 10),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(16),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1324[] = {
	ftMotionCommandMakeAttackColl(1, 0, 24, 11, 1, 0, 250, 160, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1348[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 24, 10, 1, 0, 250, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
};
#else
u32 dKirbyMainMotion_0x1324[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 24, 11, 1, 0, 250, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
	ftMotionCommandMakeAttackColl(1, 0, 24, 11, 1, 0, 250, 160, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1360[] = {
	ftMotionCommandMakeAttackColl(1, 0, 24, 10, 1, 0, 250, 160, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1384[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 24, 9, 1, 0, 250, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
};
#else
u32 dKirbyMainMotion_0x1360[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 24, 10, 1, 0, 250, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
	ftMotionCommandMakeAttackColl(1, 0, 24, 10, 1, 0, 250, 160, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x139C[] = {
	ftMotionCommandMakeAttackColl(1, 0, 24, 9, 1, 0, 250, 160, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x13C0[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	0x0C03A1D0,  /* opc=3 truncated */
	0x01180000,
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x13D4[] = {
	0x18064003,
};
#else
u32 dKirbyMainMotion_0x139C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 24, 9, 1, 0, 250, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
	ftMotionCommandMakeAttackColl(1, 0, 24, 9, 1, 0, 250, 160, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x13D8[] = {
	0x00420F00,
	ftMotionCommandMakeAttackColl(1, 0, 29, 14, 1, 0, 320, 200, 0, 0, 96, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 29, 10, 1, 0, 280, 0, 0, 0, 88, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 29, 10, 1, 0, 320, 200, 0, 0, 88, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1428[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	0x0C030130,  /* opc=3 truncated */
	0x00FA0000,
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x143C[] = {
	ftMotionCommandWait(17227779),
};
#else
u32 dKirbyMainMotion_0x13D8[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(0, 0, 29, 14, 1, 0, 280, 0, 0, 0, 96, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 29, 14, 1, 0, 320, 200, 0, 0, 96, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 29, 10, 1, 0, 280, 0, 0, 0, 88, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 29, 10, 1, 0, 320, 200, 0, 0, 88, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1440[] = {
	0x00220000,
	ftMotionCommandMakeAttackColl(1, 0, 24, 9, 1, 0, 350, 150, 0, 0, 20, 110, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1468[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandWaitAsync(10),
	0x0C030230,  /* opc=3 truncated */
	0x0118FFEC,
	ftMotionCommandEnd(),
};
#else
u32 dKirbyMainMotion_0x1440[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 24, 9, 1, 0, 250, 0, 0, 0, 20, 110, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 24, 9, 1, 0, 350, 150, 0, 0, 20, 110, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1480[] = {
	ftMotionCommandSetFlag1(38240259),
	0x01420A00,
	ftMotionCommandMakeAttackColl(1, 0, 24, 17, 1, 0, 280, 140, 0, 0, 361, 120, 0, 3, 1, 2, 1, 20),
	ftMotionCommandEffect(22, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 24, 12, 1, 0, 250, -20, 0, 0, 361, 120, 0, 3, 1, 2, 1, 12),
	ftMotionCommandMakeAttackColl(1, 0, 24, 12, 1, 0, 250, 140, 0, 0, 361, 120, 0, 3, 1, 2, 1, 12),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1504[] = {
	ftMotionCommandWaitAsync(14),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	0x0C03A250,  /* opc=3 truncated */
	0x0140008C,
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1518[] = {
	ftMotionCommandClearAttackCollID(42434563),
};
#else
u32 dKirbyMainMotion_0x1480[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandMakeAttackColl(0, 0, 24, 17, 1, 0, 280, -20, 0, 0, 361, 120, 0, 3, 1, 2, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 24, 17, 1, 0, 280, 140, 0, 0, 361, 120, 0, 3, 1, 2, 1, 20),
	ftMotionCommandEffect(22, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 24, 12, 1, 0, 250, -20, 0, 0, 361, 120, 0, 3, 1, 2, 1, 12),
	ftMotionCommandMakeAttackColl(1, 0, 24, 12, 1, 0, 250, 140, 0, 0, 361, 120, 0, 3, 1, 2, 1, 12),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x151C[] = {
	0x00420C00,
	ftMotionCommandMakeAttackColl(1, 0, 27, 18, 1, 0, 280, 0, 0, 0, 90, 120, 0, 3, 0, 2, 1, 24),
	ftMotionCommandEffect(27, 31, 0, 110, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 29, 12, 1, 0, 200, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 27, 12, 1, 0, 230, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x15A4[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetHitStatusPartID(29, 3),
	ftMotionCommandSetHitStatusPartID(24, 3),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	0x0C03A290,  /* opc=3 truncated */
};
#else
u32 dKirbyMainMotion_0x151C[] = {
	ftMotionCommandWaitAsync(14),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 29, 16, 1, 0, 320, 140, 0, 0, 90, 120, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 27, 16, 1, 0, 280, 0, 0, 0, 90, 120, 0, 3, 0, 2, 1, 20),
	ftMotionCommandEffect(27, 31, 0, 110, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 29, 12, 1, 0, 200, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 27, 12, 1, 0, 230, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x15BC[] = {
	0x012C00B4,
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x15C4[] = {
	ftMotionCommandWaitAsync(8695811),
	0x00421400,
	ftMotionCommandMakeAttackColl(1, 0, 24, 20, 1, 0, 300, 180, 0, 0, 34, 75, 0, 3, 0, 2, 1, 40),
	ftMotionCommandMakeAttackColl(2, 0, 5, 20, 1, 0, 180, 0, 0, 0, 35, 75, 0, 3, 0, 2, 1, 40),
	ftMotionCommandEffect(27, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(22, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandSetAttackCollDamage(0, 10),
	ftMotionCommandSetAttackCollDamage(1, 10),
	ftMotionCommandSetAttackCollDamage(2, 10),
	ftMotionCommandWait(16),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(34),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1650[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetFlag1(50),
	0x0C00A1F0,  /* opc=3 truncated */
	0x00DC0000,
	ftMotionCommandEnd(),
};
#else
u32 dKirbyMainMotion_0x15BC[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetHitStatusPartID(29, 3),
	ftMotionCommandSetHitStatusPartID(24, 3),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 29, 18, 1, 0, 300, 180, 0, 0, 34, 75, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 24, 18, 1, 0, 300, 180, 0, 0, 34, 75, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(2, 0, 5, 18, 1, 0, 180, 0, 0, 0, 35, 75, 0, 3, 0, 2, 1, 30),
	ftMotionCommandEffect(27, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(22, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandSetAttackCollDamage(0, 10),
	ftMotionCommandSetAttackCollDamage(1, 10),
	ftMotionCommandSetAttackCollDamage(2, 10),
	ftMotionCommandWait(16),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(34),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1668[] = {
	ftMotionCommandSetFlag1(38158339),
	0x00420F00,
	ftMotionCommandMakeAttackColl(1, 0, 24, 15, 1, 0, 260, 120, 0, 0, 361, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 5, 10, 1, 0, 210, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 24, 10, 1, 0, 260, 120, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(24),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x16C4[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(30),
	0x0C000050,  /* opc=3 truncated */
	0x017C0000,
	0x009600DC,
	0xE986407B,  /* opc=58 unrecognised */
};
#else
u32 dKirbyMainMotion_0x1668[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 5, 15, 1, 0, 220, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 24, 15, 1, 0, 260, 120, 0, 0, 361, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 5, 10, 1, 0, 210, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 24, 10, 1, 0, 260, 120, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(24),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x16DC[] = {
	0x00220000,
	ftMotionCommandMakeAttackColl(1, 0, 0, 2, 1, 0, 360, 0, 150, 100, -90, 100, 30, 3, 0, 1, 1, 0),
	ftMotionCommandLoopBegin(6),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMMarioUnkSwing2),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMMarioUnkSwing2),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 0, 6, 1, 0, 380, 0, 150, 220, 361, 120, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 0, 6, 1, 0, 360, 0, 150, 100, 361, 120, 0, 3, 0, 2, 1, 10),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1758[] = {
	ftMotionPlayFGM(nSYAudioFGMKirbyLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	0x0C000070,  /* opc=3 truncated */
};
#else
u32 dKirbyMainMotion_0x16DC[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(30),
	ftMotionCommandMakeAttackColl(0, 0, 0, 2, 1, 0, 380, 0, 150, 220, 934, 100, 30, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 2, 1, 0, 360, 0, 150, 100, 934, 100, 30, 3, 0, 1, 1, 0),
	ftMotionCommandLoopBegin(6),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMMarioUnkSwing2),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMMarioUnkSwing2),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 0, 6, 1, 0, 380, 0, 150, 220, 361, 120, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 0, 6, 1, 0, 360, 0, 150, 100, 361, 120, 0, 3, 0, 2, 1, 10),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1770[] = {
	0x012C0000,
	0x009600DC,
	ftMotionCommandSetFlag1(38158659),
	0x00220000,
	ftMotionCommandMakeAttackColl(1, 0, 0, 3, 1, 0, 270, 0, 150, 100, 361, 100, 80, 3, 0, 1, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x17A0[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	0x0C000210,  /* opc=3 truncated */
	0x017C0000,
	0x0096FF10,
	ftMotionCommandSetFlag1(38158339),
};
#else
u32 dKirbyMainMotion_0x1770[] = {
	ftMotionPlayFGM(nSYAudioFGMKirbyLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 3, 1, 0, 300, 0, 150, 220, 361, 100, 80, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 3, 1, 0, 270, 0, 150, 100, 361, 100, 80, 3, 0, 1, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x17B8[] = {
	0x00420500,
	ftMotionCommandMakeAttackColl(1, 0, 0, 16, 1, 0, 360, 0, 150, -100, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 0, 12, 1, 0, 380, 0, 150, -240, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 12, 1, 0, 360, 0, 150, -100, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(16),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1810[] = {
	ftMotionPlayFGM(nSYAudioFGMKirbyLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#else
u32 dKirbyMainMotion_0x17B8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 0, 16, 1, 0, 380, 0, 150, -240, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 0, 16, 1, 0, 360, 0, 150, -100, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 0, 12, 1, 0, 380, 0, 150, -240, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 12, 1, 0, 360, 0, 150, -100, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(16),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1828[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetTexturePartID(5),
	ftMotionPlayFGM(nSYAudioFGMKirbyAttackAirHi),
	ftMotionCommandSetFlag1(40),
	0x0C00A210,  /* opc=3 truncated */
	0x012C0000,
};
#else
u32 dKirbyMainMotion_0x1828[] = {
	ftMotionPlayFGM(nSYAudioFGMKirbyLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1840[] = {
	0x003C0000,
	ftMotionCommandSetFlag1(38158739),
	0x00200500,
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetAttackCollDamage(0, 12),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetAttackCollDamage(0, 9),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetAttackCollDamage(0, 6),
	ftMotionCommandWait(16),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1874[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(22),
	0x0C000070,  /* opc=3 truncated */
	0x017C0000,
	0xFF880064,  /* opc=63 unrecognised */
	0xE9864003,  /* opc=58 unrecognised */
};
#else
u32 dKirbyMainMotion_0x1840[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetTexturePartID(5),
	ftMotionPlayFGM(nSYAudioFGMKirbyAttackAirHi),
	ftMotionCommandSetFlag1(40),
	ftMotionCommandMakeAttackColl(0, 0, 5, 12, 1, 0, 210, 0, 60, 0, 361, 100, 100, 3, 0, 1, 0, 10),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetAttackCollDamage(0, 10),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetAttackCollDamage(0, 8),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetAttackCollDamage(0, 6),
	ftMotionCommandWait(16),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x188C[] = {
	0x00200F00,
	ftMotionCommandMakeAttackColl(1, 0, 0, 3, 1, 0, 360, 0, 0, 60, -90, 100, 0, 3, 0, 1, 0, 30),
	ftMotionCommandLoopBegin(9),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMMarioUnkSwing2),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMMarioUnkSwing2),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x18DC[] = {
	ftMotionPlayFGM(nSYAudioFGMKirbyLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	0x0C000070,  /* opc=3 truncated */
};
#else
u32 dKirbyMainMotion_0x188C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(22),
	ftMotionCommandMakeAttackColl(0, 0, 0, 3, 1, 0, 380, 0, -120, 100, 934, 100, 0, 3, 0, 1, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 0, 3, 1, 0, 360, 0, 0, 60, 934, 100, 0, 3, 0, 1, 0, 30),
	ftMotionCommandLoopBegin(9),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMMarioUnkSwing2),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMMarioUnkSwing2),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x18F4[] = {
	0x012C0000,
	0x00000096,
	ftMotionCommandSetFlag1(38158659),
	0x00420000,
	ftMotionCommandMakeAttackColl(1, 0, 0, 3, 1, 0, 300, 0, 0, -150, 361, 100, 80, 3, 0, 2, 1, 0),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1924[] = {
	ftMotionCommandWaitAsync(30),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionPlayFGM(nSYAudioFGMKirbyStarPing2),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionPlayFGM(nSYAudioFGMKirbyDeadSlam),
};
#else
u32 dKirbyMainMotion_0x18F4[] = {
	ftMotionPlayFGM(nSYAudioFGMKirbyLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 3, 1, 0, 300, 0, 0, 150, 361, 100, 80, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 3, 1, 0, 300, 0, 0, -150, 361, 100, 80, 3, 0, 2, 1, 0),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x193C[] = {
	ftMotionCommandEffect(0, 29, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1958[] = {
	ftMotionCommandGoto(0x06700649),
	ftMotionCommandHideItem(0),
	ftMotionCommandMakeRumble(20, 7),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag2(2),
};
#else
u32 dKirbyMainMotion_0x193C[] = {
	ftMotionCommandWaitAsync(30),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionPlayFGM(nSYAudioFGMKirbyStarPing2),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionPlayFGM(nSYAudioFGMKirbyDeadSlam),
	ftMotionCommandEffect(0, 29, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1970[] = {
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag1(1),
};
#else
u32 dKirbyMainMotion_0x1970[] = {
	ftMotionCommandGoto(dKirbyMainMotion_0x193C),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1978[] = {
	ftMotionCommandSetFlag2(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(4),
	ftMotionCommandWaitAsync(50),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandWaitAsync(52),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(5),
	ftMotionCommandWaitAsync(58),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x19BC[] = {
	ftMotionCommandSetParallelScript(0x071D0658),
	ftMotionPlayVoice(nSYAudioVoiceKirbySpecialHi),
	ftMotionCommandWaitAsync(4),
	0x98007C00,  /* opc=38 truncated */
	0x00000154,
};
#else
u32 dKirbyMainMotion_0x1978[] = {
	ftMotionCommandHideItem(0),
	ftMotionCommandMakeRumble(20, 7),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(4),
	ftMotionCommandWaitAsync(50),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandWaitAsync(52),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(5),
	ftMotionCommandWaitAsync(58),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x19D4[] = {
	0xFF9C0000,  /* opc=63 unrecognised */
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x19DC[] = {
	ftMotionCommandEffect(0, 16, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandWaitAsync(23),
	ftMotionCommandSetAirJumpMax(0),
	ftMotionPlayFGM(nSYAudioFGMUnkMechanical4),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -120, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 8, 1, 3, 150, 0, 100, 200, 88, 100, 121, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 8, 1, 3, 150, 0, 100, 530, 96, 100, 121, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(2, 0, 0, 8, 1, 3, 150, 0, 400, 200, 88, 100, 105, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(3, 0, 0, 8, 1, 3, 150, 0, 400, 530, 96, 100, 105, 3, 0, 2, 5, 0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopBegin(8),
	ftMotionCommandEffect(0, 74, 0, 0, 0, 0, 120, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandEffect(0, 31, 0, 0, 280, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 2, 1, 3, 330, 0, 300, 400, -85, 100, 200, 3, 0, 2, 5, 0),
	ftMotionCommandWait(4),
	ftMotionCommandSetAttackCollSize(0, 0),
	ftMotionCommandWaitAsync(54),
	ftMotionCommandSetAttackCollSize(0, 450),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1AC0[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1AC4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayVoice(nSYAudioVoiceKirbySmash1),
	ftMotionCommandSetFlag2(2),
	0x98004C00,  /* opc=38 truncated */
	ftMotionCommandEnd(),
};
#else
u32 dKirbyMainMotion_0x19D4[] = {
	ftMotionCommandSetParallelScript(dKirbyMainMotion_0x1978),
	ftMotionPlayVoice(nSYAudioVoiceKirbySpecialHi),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 31, 0, 0, 340, -100, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandWaitAsync(23),
	ftMotionCommandSetAirJumpMax(0),
	ftMotionPlayFGM(nSYAudioFGMUnkMechanical4),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -120, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 8, 1, 3, 150, 0, 100, 200, 88, 100, 121, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 8, 1, 3, 150, 0, 100, 530, 96, 100, 121, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(2, 0, 0, 8, 1, 3, 150, 0, 400, 200, 88, 100, 105, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(3, 0, 0, 8, 1, 3, 150, 0, 400, 530, 96, 100, 105, 3, 0, 2, 5, 0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopBegin(8),
	ftMotionCommandEffect(0, 74, 0, 0, 0, 0, 120, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandEffect(0, 31, 0, 0, 280, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 2, 1, 3, 330, 0, 300, 400, 939, 100, 200, 3, 0, 2, 5, 0),
	ftMotionCommandWait(4),
	ftMotionCommandSetAttackCollSize(0, 0),
	ftMotionCommandWaitAsync(54),
	ftMotionCommandSetAttackCollSize(0, 450),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1AD8[] = {
	0xFF2E0000,  /* opc=63 unrecognised */
};
#else
u32 dKirbyMainMotion_0x1AD8[] = {
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1ADC[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1AE0[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMUnkLongWind),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1B18[] = {
	ftMotionCommandMakeRumble(10, 9),
	ftMotionCommandEffect(0, 76, 0, 0, 120, 0, 0, 0, 0),
	0x98007C00,  /* opc=38 truncated */
};
#else
u32 dKirbyMainMotion_0x1ADC[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayVoice(nSYAudioVoiceKirbySmash1),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMUnkLongWind),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1B30[] = {
	0x00000078,
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1B38[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1B3C[] = {
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetColAnim(54, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionPlayFGM(nSYAudioFGMKirbySpecialLwStart),
	ftMotionCommandHideModelPartAll(),
	ftMotionPlayFGM(nSYAudioFGMKirbySpecialLwLanding),
	ftMotionCommandSetModelPartID(6, 2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1B6C[] = {
	ftMotionPlayFGM(nSYAudioFGMKirbySpecialLwStart),
	ftMotionCommandEffect(0, 76, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandSetColAnim(54, 0),
};
#else
u32 dKirbyMainMotion_0x1B30[] = {
	ftMotionCommandMakeRumble(10, 9),
	ftMotionCommandEffect(0, 76, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetColAnim(nGMColAnimFighterKirbySpecialLwStart, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionPlayFGM(nSYAudioFGMKirbySpecialLwStart),
	ftMotionCommandHideModelPartAll(),
	ftMotionPlayFGM(nSYAudioFGMKirbySpecialLwLanding),
	ftMotionCommandSetModelPartID(6, 2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1B84[] = {
	ftMotionCommandWaitAsync(18),
	ftMotionCommandMakeRumble(10, 9),
	ftMotionCommandHideModelPartAll(),
	ftMotionCommandSetModelPartID(6, 2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1B9C[] = {
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandHideModelPartAll(),
	ftMotionCommandSetModelPartID(6, 2),
};
#else
u32 dKirbyMainMotion_0x1B84[] = {
	ftMotionPlayFGM(nSYAudioFGMKirbySpecialLwStart),
	ftMotionCommandEffect(0, 76, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandSetColAnim(nGMColAnimFighterKirbySpecialLwStart, 0),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandMakeRumble(10, 9),
	ftMotionCommandHideModelPartAll(),
	ftMotionCommandSetModelPartID(6, 2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1BB4[] = {
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 0, 22, 1, 0, 400, 0, 0, 0, 50, 78, 0, 3, 0, 2, 1, 70),
	ftMotionCommandPauseScript(),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1BD4[] = {
	ftMotionCommandMakeAttackColl(0, 0, 0, 22, 1, 0, 400, 0, 0, 0, 50, 78, 0, 3, 0, 2, 1, 70),
	ftMotionCommandEnd(),
};
#else
u32 dKirbyMainMotion_0x1BB4[] = {
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandHideModelPartAll(),
	ftMotionCommandSetModelPartID(6, 2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 0, 20, 1, 0, 400, 0, 0, 0, 50, 70, 0, 3, 0, 2, 1, 70),
	ftMotionCommandPauseScript(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1BEC[] = {
	ftMotionCommandMakeRumble(0, 10),
	ftMotionPlayFGM(nSYAudioFGMKirbySpecialLwLanding),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
};
#else
u32 dKirbyMainMotion_0x1BEC[] = {
	ftMotionCommandMakeAttackColl(0, 0, 0, 20, 1, 0, 400, 0, 0, 0, 50, 70, 0, 3, 0, 2, 1, 70),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1C04[] = {
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1C28[] = {
	ftMotionCommandResetModelPartAll(),
	ftMotionPlayVoice(nSYAudioVoiceKirbySpecialLw),
	ftMotionCommandSetColAnim(55, 0),
	0x98013400,  /* opc=38 truncated */
	0x00000078,
	ftMotionCommandEnd(),
};
#else
u32 dKirbyMainMotion_0x1C04[] = {
	ftMotionCommandMakeRumble(0, 10),
	ftMotionPlayFGM(nSYAudioFGMKirbySpecialLwLanding),
	ftMotionCommandEffect(127, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1C40[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1C44[] = {
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1C58[] = {
	ftMotionCommandSetModelPartID(6, 1),
	ftMotionCommandSetModelPartID(7, 0),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandReturn(),
	ftMotionCommandPlayLoopSFXStoreInfo(nSYAudioFGMKirbySpecialNStart),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSubroutine(0x072E0716),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1C7C[] = {
	0xFFFFFFFF,  /* opc=63 unrecognised */
};
#else
u32 dKirbyMainMotion_0x1C40[] = {
	ftMotionCommandResetModelPartAll(),
	ftMotionPlayVoice(nSYAudioVoiceKirbySpecialLw),
	ftMotionCommandSetColAnim(nGMColAnimFighterKirbySpecialLwEnd, 0),
	ftMotionCommandEffect(0, 77, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
	ftMotionCommandSetModelPartID(6, 1),
	ftMotionCommandSetModelPartID(7, 0),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandReturn(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1C80[] = {
	0x00000006,
	0x00000169,
	0x00000064,
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1C90[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1C94[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1C98[] = {
	0xFFFFFFFF,  /* opc=63 unrecognised */
	0x00000006,
	0x00000169,
	0x00000064,
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1CAC[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1CB0[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1CB4[] = {
	ftMotionCommandSetThrow(0x073E071F),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 7),
	0x0C000030,  /* opc=3 truncated */
	0x01220000,
};
#else
u32 dKirbyMainMotion_0x1C80[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(nSYAudioFGMKirbySpecialNStart),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x1C40 + 12),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dKirbyMainMotion_0x1C94[2] = {
	{ -1, 6, 361, 100, 0, 0, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1CCC[] = {
	0x00F000C8,
	ftMotionCommandSetFlag1(38158339),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1CD8[] = {
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 360, 0, 240, 360, 361, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1CF0[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine(0x076B0716),
	0x9BF88000,  /* opc=38 truncated */
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1D04[] = {
	ftMotionCommandEnd(),
};
#else
u32 dKirbyMainMotion_0x1CCC[] = {
	ftMotionCommandSetThrow((u32)dKirbyMainMotion_0x1C94),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 290, 0, 240, 200, 361, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 360, 0, 240, 410, 361, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1D08[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1D0C[] = {
	ftMotionPlayFGM(nSYAudioFGMKirbySpecialNThrow),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1D24[] = {
	ftMotionCommandSetTexturePartID(10),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1D2C[] = {
	ftMotionCommandMakeRumble(20, 7),
	ftMotionCommandSetTexturePartID(10),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
};
#else
u32 dKirbyMainMotion_0x1D08[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x1C40 + 12),
	ftMotionCommandEffect(127, 32, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMKirbySpecialNThrow),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1D3C[] = {
	0x98005800,  /* opc=38 truncated */
	ftMotionCommandEnd(),
};
#else
u32 dKirbyMainMotion_0x1D3C[] = {
	ftMotionCommandSetTexturePartID(10),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1D44[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1D48[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1D4C[] = {
	ftMotionPlayFGM(nSYAudioFGMStarGet),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1D60[] = {
	ftMotionCommandEffect(0, 19, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag0(1),
};
#else
u32 dKirbyMainMotion_0x1D44[] = {
	ftMotionCommandMakeRumble(20, 7),
	ftMotionCommandSetTexturePartID(10),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMStarGet),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1D78[] = {
	ftMotionCommandSetColAnim(39, 0),
	0x98887C00,  /* opc=38 truncated */
	0x003C0000,
	ftMotionCommandEnd(),
};
#else
u32 dKirbyMainMotion_0x1D78[] = {
	ftMotionCommandEffect(0, 19, 0, 0, 0, -210, 0, 0, 0),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1D88[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1D8C[] = {
	ftMotionPlayFGM(nSYAudioFGMMarioSpecialN),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1D98[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 0, -200, 0, 0, 0),
	ftMotionCommandGoto(0x077F075C),
};
#else
u32 dKirbyMainMotion_0x1D88[] = {
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetColAnim(nGMColAnimFighterMarioSpecialN, 0),
	ftMotionCommandEffect(17, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMMarioSpecialN),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1DB0[] = {
	ftMotionCommandEffect(0, 19, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetColAnim(39, 0),
	0x98887C00,  /* opc=38 truncated */
	0x003C0000,
	ftMotionCommandEnd(),
};
#else
u32 dKirbyMainMotion_0x1DB0[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 0, -200, 0, 0, 0),
	ftMotionCommandGoto(dKirbyMainMotion_0x1D88),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -210, 0, 0, 0),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1DD8[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1DDC[] = {
	ftMotionPlayFGM(nSYAudioFGMMarioSpecialN),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1DE8[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 0, -200, 0, 0, 0),
	ftMotionCommandGoto(0x07BA0770),
};
#else
u32 dKirbyMainMotion_0x1DD8[] = {
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetColAnim(nGMColAnimFighterMarioSpecialN, 0),
	ftMotionCommandEffect(17, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMMarioSpecialN),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1E00[] = {
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSetColAnim(47, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialN),
	ftMotionCommandEffect(17, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -220, 0, 0, 0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1E48[] = {
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSetColAnim(47, 0),
};
#else
u32 dKirbyMainMotion_0x1E00[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 0, -200, 0, 0, 0),
	ftMotionCommandGoto(dKirbyMainMotion_0x1DD8),
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSetColAnim(nGMColAnimFighterFoxSpecialHiStart, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialN),
	ftMotionCommandEffect(17, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -220, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1E60[] = {
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialN),
	ftMotionCommandEffect(17, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1E8C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandEnd(),
};
#else
u32 dKirbyMainMotion_0x1E60[] = {
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSetColAnim(nGMColAnimFighterFoxSpecialHiStart, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialN),
	ftMotionCommandEffect(17, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1EA4[] = {
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1EB8[] = {
	ftMotionCommandMakeRumble(0, 7),
};
#else
u32 dKirbyMainMotion_0x1EA4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1EBC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(48, 0),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMDonkeyCharge),
};
#else
u32 dKirbyMainMotion_0x1EBC[] = {
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1ED0[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 90, -180, 0, 90, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(0x07C207AE),
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetColAnim(48, 0),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMDonkeyCharge),
	ftMotionCommandPauseScript(),
};
#else
u32 dKirbyMainMotion_0x1ED0[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterFoxSpecialHi, 0),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMDonkeyCharge),
	ftMotionCommandEffect(0, 11, 0, 0, 90, -180, 0, 90, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dKirbyMainMotion_0x1ED0),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1F04[] = {
	ftMotionCommandGoto(0x07DC07BB),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandWait(2),
	ftMotionCommandSetColAnim(49, 4),
	ftMotionCommandWait(7),
	0x98004C00,  /* opc=38 truncated */
	ftMotionCommandEnd(),
};
#else
u32 dKirbyMainMotion_0x1F04[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetColAnim(nGMColAnimFighterFoxSpecialHi, 0),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMDonkeyCharge),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dKirbyMainMotion_0x1F04),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1F24[] = {
	0xFF9C0000,  /* opc=63 unrecognised */
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1F2C[] = {
	ftMotionCommandMakeAttackColl(0, 0, 15, 14, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 2, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 14, 1, 0, 340, 300, 0, 0, 361, 100, 0, 3, 2, 2, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMBossUnk2),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyDonkeySpecialN),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1F6C[] = {
	ftMotionCommandGoto(0x080A07C3),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetColAnim(49, 16),
	ftMotionCommandWait(9),
	ftMotionCommandSetHitStatusAll(3),
};
#else
u32 dKirbyMainMotion_0x1F24[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandWait(2),
	ftMotionCommandSetColAnim(nGMColAnimFighterLinkSpecialHi, 4),
	ftMotionCommandWait(7),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 15, 14, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 2, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 14, 1, 0, 340, 300, 0, 0, 361, 100, 0, 3, 2, 2, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMBossUnk2),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyDonkeySpecialN),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1F84[] = {
	0x0C01E490,  /* opc=3 truncated */
	0x01180000,
};
#else
u32 dKirbyMainMotion_0x1F84[] = {
	ftMotionCommandGoto(dKirbyMainMotion_0x1F24),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x1F8C[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x1F90[] = {
	ftMotionCommandSetFlag1(38158339),
	/* MakeAttackColl w5's low 2 bits (0x03) aren't covered by the macro's
	 * bit layout (sd|fl|fk|kbb) — emit raw hex to preserve them in JP. */
	0x0C420000, 0x0C81E490, 0x01540140, 0x00000000, 0x5A464003,
	0x0C420000, 0x0D00A490, 0x00320000, 0x00000000, 0x5A464003,
	ftMotionCommandMakeAttackColl(0, 4, 16, 0, 0, 0, 39928, -31744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 20, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandEffect(17, 31, 0, 0, 0, 0, 200, 200, 0),
	ftMotionPlayFGM(nSYAudioFGMBossUnk1),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyDonkeySpecialN),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandEffect(17, 31, 0, 0, 0, 0, 200, 200, 0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2024[] = {
	ftMotionCommandGoto(0x082907DD),
	ftMotionCommandSetSlopeContour(3),
	0x98004C00,  /* opc=38 truncated */
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2038[] = {
	0xFF100000,  /* opc=63 unrecognised */
};
#else
u32 dKirbyMainMotion_0x1F8C[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetColAnim(nGMColAnimFighterLinkSpecialHi, 16),
	ftMotionCommandWait(9),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandMakeAttackColl(0, 0, 15, 36, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 12, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 36, 1, 0, 340, 320, 0, 0, 361, 100, 0, 3, 12, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 36, 1, 0, 50, 0, 0, 0, 361, 100, 0, 3, 12, 2, 1, 0),
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 20, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandEffect(17, 31, 0, 0, 0, 0, 200, 200, 0),
	ftMotionPlayFGM(nSYAudioFGMBossUnk1),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyDonkeySpecialN),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandEffect(17, 31, 0, 0, 0, 0, 200, 200, 0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x203C[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2040[] = {
	ftMotionCommandWait(13),
	ftMotionCommandEffect(17, 31, 0, 150, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2058[] = {
	ftMotionCommandWait(13),
	ftMotionCommandEffect(17, 31, 0, 150, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#else
u32 dKirbyMainMotion_0x203C[] = {
	ftMotionCommandGoto(dKirbyMainMotion_0x1F8C),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -240, 0, 0, 0),
	ftMotionCommandWait(13),
	ftMotionCommandEffect(17, 31, 0, 150, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x2070[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(17, 31, 0, 150, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(0, 7),
};
#else
u32 dKirbyMainMotion_0x2070[] = {
	ftMotionCommandWait(13),
	ftMotionCommandEffect(17, 31, 0, 150, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x2088[] = {
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandPauseScript(),
};
#else
u32 dKirbyMainMotion_0x2088[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(17, 31, 0, 150, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(0, 7),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x20A0[] = {
	ftMotionCommandGoto(0x08710822),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(47, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(17, 18, 0, 200, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -240, 0, 0, 0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x20DC[] = {
	ftMotionCommandSetColAnim(47, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 9),
	0x98884800,  /* opc=38 truncated */
	0x00C80000,
	ftMotionCommandEnd(),
};
#else
u32 dKirbyMainMotion_0x20A0[] = {
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dKirbyMainMotion_0x20A0),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterFoxSpecialHiStart, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(17, 18, 0, 200, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -240, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x20F4[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x20F8[] = {
	ftMotionCommandEffect(0, 16, 0, 0, 0, -200, 0, 0, 0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x210C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetModelPartID(12, -1),
};
#else
u32 dKirbyMainMotion_0x20F4[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterFoxSpecialHiStart, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(17, 18, 0, 200, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -200, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x2124[] = {
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyLinkSpecialN),
	ftMotionPlayFGM(nSYAudioFGMLinkSpecialNShoot),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 210, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2158[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x215C[] = {
	ftMotionPlayFGM(nSYAudioFGMLinkSpecialNGet),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetModelPartID(12, -1),
};
#else
u32 dKirbyMainMotion_0x2124[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetModelPartID(12, 524287),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyLinkSpecialN),
	ftMotionPlayFGM(nSYAudioFGMLinkSpecialNShoot),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 210, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};
#endif

u32 dKirbyMainMotion_0x2170[] = {
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x2174[] = {
	ftMotionCommandSetModelPartID(18, 0),
	ftMotionCommandSetModelPartID(6, 14),
	ftMotionCommandSetModelPartID(7, 0),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandReturn(),
	0xFFFFFFFF,  /* opc=63 unrecognised */
};
#else
u32 dKirbyMainMotion_0x2174[] = {
	ftMotionPlayFGM(nSYAudioFGMLinkSpecialNGet),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetModelPartID(12, 524287),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x218C[] = {
	0x00000014,
	0x00000169,
	0x00000064,
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x219C[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x21A0[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x21A4[] = {
	0xFFFFFFFF,  /* opc=63 unrecognised */
	0x00000005,
	0x00000169,
	0x00000064,
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x21B8[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x21BC[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x21C0[] = {
	ftMotionCommandSetThrow(0x08740862),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSubroutine(0x089E085D),
	0x0C03C030,  /* opc=3 truncated */
};
#else
u32 dKirbyMainMotion_0x218C[] = {
	ftMotionCommandSetModelPartID(18, 0),
	ftMotionCommandSetModelPartID(6, 14),
	ftMotionCommandSetModelPartID(7, 0),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandReturn(),
};

FTThrowHitDesc dKirbyMainMotion_0x21A0[2] = {
	{ -1, 20, 361, 100, 0, 0, 0 },
	{ -1,  5, 361, 100, 0, 0, 0 },
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x21D8[] = {
	0x012C0000,
	0x00640000,
	ftMotionCommandSetFlag1(38158339),
	0x00200000,
	ftMotionPlayFGM(nSYAudioFGMYoshiSpecialNTongue),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2200[] = {
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2214[] = {
	ftMotionCommandWaitAsync(6),
};
#else
u32 dKirbyMainMotion_0x21D8[] = {
	ftMotionCommandSetThrow((u32)dKirbyMainMotion_0x21A0),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x218C),
	ftMotionCommandMakeAttackColl(0, 0, 30, 1, 1, 0, 300, 0, 100, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMYoshiSpecialNTongue),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x2218[] = {
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetTexturePartID(10),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(20),
};
#else
u32 dKirbyMainMotion_0x2218[] = {
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x222C[] = {
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 7, 0, 0, 100, 200, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMShellHit),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2250[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandSetTexturePartID(9),
	ftMotionCommandWaitAsync(42),
};
#else
u32 dKirbyMainMotion_0x222C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetTexturePartID(10),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 7, 0, 0, 100, 200, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMShellHit),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x2268[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWait(60),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2274[] = {
	ftMotionCommandSetParallelScript(0x08CD0894),
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(50, 0),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyCaptainSpecialNFalcon),
};
#else
u32 dKirbyMainMotion_0x2268[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandSetTexturePartID(9),
	ftMotionCommandWaitAsync(42),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWait(60),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x228C[] = {
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(12),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandEffect(13, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(42),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -220, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 15, 24, 1, 0, 250, 400, 0, 0, 361, 120, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 26, 1, 0, 200, 0, 0, 0, 361, 120, 0, 3, 0, 2, 1, 30),
	ftMotionPlayFGM(nSYAudioFGMCaptainSpecialNPunch),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyCaptainSpecialNPunch),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandStopRumble(7),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2330[] = {
	ftMotionCommandSetParallelScript(0xFFFF0894),
	ftMotionCommandSetColAnim(50, 0),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyCaptainSpecialNFalcon),
	0x98005800,  /* opc=38 truncated */
	ftMotionCommandEnd(),
};
#else
u32 dKirbyMainMotion_0x228C[] = {
	ftMotionCommandSetParallelScript(dKirbyMainMotion_0x2268),
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterCaptainSpecialN, 0),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyCaptainSpecialNFalcon),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(12),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandEffect(13, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(42),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -220, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 15, 24, 1, 0, 250, 400, 0, 0, 361, 120, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 26, 1, 0, 200, 0, 0, 0, 361, 120, 0, 3, 0, 2, 1, 30),
	ftMotionPlayFGM(nSYAudioFGMCaptainSpecialNPunch),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyCaptainSpecialNPunch),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandStopRumble(7),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x2348[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x234C[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2350[] = {
	ftMotionCommandLoopBegin(3),
	ftMotionCommandWait(12),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(13, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(42),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -220, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 15, 24, 1, 0, 250, 400, 0, 0, 361, 120, 0, 3, 0, 2, 1, 40),
	ftMotionCommandMakeAttackColl(1, 0, 15, 26, 1, 0, 200, 0, 0, 0, 361, 120, 0, 3, 0, 2, 1, 40),
	ftMotionPlayFGM(nSYAudioFGMCaptainSpecialNPunch),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyCaptainSpecialNPunch),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandStopRumble(7),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2404[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(6),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyPikachuSpecialN),
	ftMotionPlayFGM(nSYAudioFGMPikachuElectric5),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetSlopeContour(4),
};
#else
u32 dKirbyMainMotion_0x2348[] = {
	ftMotionCommandSetParallelScript(dKirbyMainMotion_0x2268),
	ftMotionCommandSetColAnim(nGMColAnimFighterCaptainSpecialN, 0),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyCaptainSpecialNFalcon),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandWait(12),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(13, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(42),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -220, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 15, 24, 1, 0, 250, 400, 0, 0, 361, 120, 0, 3, 0, 2, 1, 40),
	ftMotionCommandMakeAttackColl(1, 0, 15, 26, 1, 0, 200, 0, 0, 0, 361, 120, 0, 3, 0, 2, 1, 40),
	ftMotionPlayFGM(nSYAudioFGMCaptainSpecialNPunch),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyCaptainSpecialNPunch),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandStopRumble(7),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x241C[] = {
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2444[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyPikachuSpecialN),
	ftMotionPlayFGM(nSYAudioFGMPikachuElectric5),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 9),
};
#else
u32 dKirbyMainMotion_0x241C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(6),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyPikachuSpecialN),
	ftMotionPlayFGM(nSYAudioFGMPikachuElectric5),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x245C[] = {
	ftMotionCommandEffect(0, 16, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2478[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(6),
	ftMotionPlayFGM(nSYAudioFGMNessPSI),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyNessSpecialN),
	0x9800A400,  /* opc=38 truncated */
	0x00000096,
};
#else
u32 dKirbyMainMotion_0x245C[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyPikachuSpecialN),
	ftMotionPlayFGM(nSYAudioFGMPikachuElectric5),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x2490[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2494[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2498[] = {
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, 31, 0, 0, 150, 130, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x24D0[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionPlayFGM(nSYAudioFGMNessPSI),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyNessSpecialN),
	0x9800A400,  /* opc=38 truncated */
	0x00000096,
	ftMotionCommandEnd(),
};
#else
u32 dKirbyMainMotion_0x2490[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(6),
	ftMotionPlayFGM(nSYAudioFGMNessPSI),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyNessSpecialN),
	ftMotionCommandEffect(0, 41, 0, 0, 150, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, 31, 0, 0, 150, 130, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x24E8[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x24EC[] = {
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 130, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2524[] = {
	ftMotionCommandWaitAsync(12),
	ftMotionPlayFGM(nSYAudioFGMBossUnk2),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyPurinSpecialN),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	0x98807C00,  /* opc=38 truncated */
};
#else
u32 dKirbyMainMotion_0x24E8[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionPlayFGM(nSYAudioFGMNessPSI),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyNessSpecialN),
	ftMotionCommandEffect(0, 41, 0, 0, 150, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 130, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dKirbyMainMotion_0x253C[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2540[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2544[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2548[] = {
	ftMotionCommandEffect(0, 16, 0, 0, 0, -120, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 16, 13, 1, 0, 310, -50, 0, 0, 120, 75, 0, 3, 20, 2, 6, 20),
	ftMotionCommandMakeAttackColl(1, 0, 16, 13, 1, 0, 310, 70, 0, 0, 120, 75, 0, 3, 20, 2, 6, 20),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x2598[] = {
	ftMotionCommandEnd(),
};
u32 dKirbyMainMotion_0x259C[] = {
	ftMotionCommandEnd(),
};
#else
u32 dKirbyMainMotion_0x253C[] = {
	ftMotionCommandWaitAsync(12),
	ftMotionPlayFGM(nSYAudioFGMBossUnk2),
	ftMotionPlayVoice(nSYAudioVoiceKirbyCopyPurinSpecialN),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(16, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -120, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 16, 13, 1, 0, 310, -50, 0, 0, 120, 75, 0, 3, 20, 2, 6, 20),
	ftMotionCommandMakeAttackColl(1, 0, 16, 13, 1, 0, 310, 70, 0, 0, 120, 75, 0, 3, 20, 2, 6, 20),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandEnd(),
};
#endif

