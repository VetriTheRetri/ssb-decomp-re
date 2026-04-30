/* ftMotionCommand script data for relocData file 208 (FoxMainMotion) */
/* File size: US 6816 bytes (0x1AA0) / JP 6848 bytes (0x1AC0) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>
#include <gm/gmsound.h>
#include <gm/gmdef.h>
#include <ef/efdef.h>
extern u32 dFoxMainMotion_0x18BC[];
extern u32 dFoxMainMotion_0x1908[];
extern u32 dFoxMainMotion_0x1980[];
extern u32 dFoxMainMotion_0x19D4[];
extern u32 dFoxMainMotion_0x1A34[];
extern u32 dFoxMainMotion_0x1A78[];
u32 dFoxMainMotion_0x0000[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0008[] = {
	ftMotionPlayFGM(nSYAudioFGMFoxDash),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x002C[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMFoxFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(10),
	ftMotionPlayFGM(nSYAudioFGMFoxFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dFoxMainMotion_0x002C),
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0080[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x008C[] = {
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 120, 0, 0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x00BC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x00CC[] = {
	ftMotionPlayFGM(nSYAudioFGMGroundGrind2),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x00E4[] = {
	ftMotionPlayFGM(nSYAudioFGMUnkGrind4),
	ftMotionPlayVoice(nSYAudioVoiceFoxJumpAerial),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x010C[] = {
	ftMotionPlayFGM(nSYAudioFGMFoxLanding),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0124[] = {
	ftMotionPlayFGM(nSYAudioFGMFoxLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x013C[] = {
	ftMotionPlayVoice(nSYAudioVoiceFoxOttotto),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0144[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x014C[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip3),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandReturn(),
};

u32 dFoxMainMotion_0x016C[] = {
	ftMotionCommandSubroutine(dFoxMainMotion_0x014C + 5),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0178[] = {
	ftMotionCommandSubroutine(dFoxMainMotion_0x014C + 5),
	ftMotionCommandSetDamageThrown(0x0758) /* extern */,
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x018C[] = {
	ftMotionPlayFGM(nSYAudioFGMFoxLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x01A4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x01AC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x01B4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x01BC[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x01C8[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x01D4[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(127, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWait(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0218[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x01D4),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

u32 dFoxMainMotion_0x0240[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x025C[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x0240),
};

u32 dFoxMainMotion_0x0264[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandSubroutine(dFoxMainMotion_0x0218 + 2),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0274[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x0264),
	ftMotionCommandGoto(dFoxMainMotion_0x0264),
	ftMotionCommandGoto(dFoxMainMotion_0x0264),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 25, 6, 1, 0, 180, 120, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 6, 1, 0, 150, 0, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 25, 6, 1, 0, 180, 120, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 6, 1, 0, 150, 0, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0310[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 6, 1, 0, 180, 150, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 6, 1, 0, 150, 0, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 20, 6, 1, 0, 180, 150, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 6, 1, 0, 150, 0, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0394[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, nEFKindFlashMiddle, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceFoxOttotto),
	ftMotionPlayFGM(nSYAudioFGMHeavySwing1),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x03D0[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, nEFKindFlashMiddle, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceFoxOttotto),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0410[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x03D0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionPlayVoice(nSYAudioVoiceFoxEscape),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0448[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustHeavy, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionPlayVoice(nSYAudioVoiceFoxEscape),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0474[] = {
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0484[] = {
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0498[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04A0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04A8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04B0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04B8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04C0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04C8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04D8[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(1),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 27, 4, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 5, 4, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(14),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0540[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0550[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 5, 4, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 27, 4, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x05B0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x05B8[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(16),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x05DC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x05E4[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(14),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0608[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMTitlePressStart),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x061C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x062C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x063C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMItemThrow),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x065C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x067C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dFoxMainMotion_0x065C),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x06AC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x06CC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x06F0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dFoxMainMotion_0x06CC),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0724[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0748[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0764[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dFoxMainMotion_0x0748),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x078C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x07A8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x07C8[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dFoxMainMotion_0x07A8),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x07F4[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0814[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0824[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dFoxMainMotion_0x0814),
};

u32 dFoxMainMotion_0x0834[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0848[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dFoxMainMotion_0x0834),
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandSubroutine(0x0000) /* extern */,
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandSetAfterImage(0, 262143),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0880[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0064) /* extern */,
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, 262143),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x08B8[] = {
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x00C8) /* extern */,
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, 262143),
	ftMotionCommandWaitAsync(56),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x08F0[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x012C) /* extern */,
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, 262143),
	ftMotionCommandWait(28),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0924[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine(0x01A0) /* extern */,
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0940[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x01F4) /* extern */,
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0968[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetColAnim(nGMColAnimFighterBat, 40),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0248) /* extern */,
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(56),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0998[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x02B0) /* extern */,
	ftMotionCommandWait(30),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x09BC[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine(0x0324) /* extern */,
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x09D8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0378) /* extern */,
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0A00[] = {
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x03CC) /* extern */,
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(56),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0A24[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0430) /* extern */,
	ftMotionCommandWait(30),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0A48[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 9),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine(0x0494) /* extern */,
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0A68[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 15),
	ftMotionCommandSubroutine(0x04F8) /* extern */,
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0A9C[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 25),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x055C) /* extern */,
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(56),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0ACC[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 34),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x05C0) /* extern */,
	ftMotionCommandWait(30),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0AF4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0B04[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0B14[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0634) /* extern */,
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dFoxMainMotion_0x0B14),
};

u32 dFoxMainMotion_0x0B34[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, nEFKindShockSmall, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dFoxMainMotion_0x0B34),
	ftMotionPlayVoice(nSYAudioVoiceFoxDamage),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandEffect(127, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dFoxMainMotion_0x0B34),
	ftMotionCommandGoto(dFoxMainMotion_0x0B34),
	ftMotionCommandEffect(127, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0BBC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0BC4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceFoxFuraFura),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandLoopBegin(9),
	ftMotionCommandEffect(0, nEFKindFuraSparkle, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dFoxMainMotion_0x0BC4),
};

u32 dFoxMainMotion_0x0BF8[] = {
	ftMotionPlayInterruptableVoice(nSYAudioVoiceFoxFuraSleep),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindMusicNote, 0, 0, 130, 0, 240, 240, 240),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dFoxMainMotion_0x0BF8),
	0xFFFFFFFF,
	0x00000002,
	0x00000169,
	0x00000064,
	0x00000000,
	0x00000000,
	0x00000000,
	0xFFFFFFFF,
	0x00000002,
	0x00000169,
	0x00000064,
	0x00000000,
	0x00000000,
	0x00000000,
};

u32 dFoxMainMotion_0x0C58[] = {
	ftMotionCommandSetThrow(dFoxMainMotion_0x0BF8 + 10),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 30, 1, 1, 0, 260, 50, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
	0x00000034,
	0x0000000C,
	0x0000002D,
	0x0000003C,
	0x00000000,
	0x00000050,
	0x00000000,
	0xFFFFFFFF,
	0x00000002,
	0x00000169,
	0x00000064,
	0x00000000,
	0x00000000,
	0x00000000,
};

u32 dFoxMainMotion_0x0CC4[] = {
	ftMotionCommandSetThrow(dFoxMainMotion_0x0C58 + 13),
	ftMotionPlayVoice(nSYAudioVoiceFoxSmash3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 380, 320, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(127, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
	0x00000034,
	0x0000000F,
	0x0000002D,
	0x0000003C,
	0x00000000,
	0x00000050,
	0x00000000,
	0xFFFFFFFF,
	0x00000009,
	0x00000169,
	0x00000064,
	0x00000000,
	0x00000000,
	0x00000000,
};

u32 dFoxMainMotion_0x0D58[] = {
	ftMotionCommandSetThrow(dFoxMainMotion_0x0CC4 + 23),
	ftMotionPlayVoice(nSYAudioVoiceFoxSmash3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandMakeAttackColl(0, 0, 20, 10, 0, 0, 230, 140, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 10, 0, 0, 230, 0, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 320, -340, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(127, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(13),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(6),
	ftMotionCommandSetFlag2(2),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0DE4[] = {
	ftMotionCommandSubroutine(0x06AC) /* extern */,
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0DF0[] = {
	ftMotionCommandSubroutine(0x06C4) /* extern */,
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0DFC[] = {
	ftMotionCommandSubroutine(0x06CC) /* extern */,
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0E08[] = {
	ftMotionCommandSubroutine(dFoxMainMotion_0x014C + 5),
	ftMotionCommandSubroutine(0x06F0) /* extern */,
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0E1C[] = {
	ftMotionCommandSubroutine(dFoxMainMotion_0x014C + 5),
	ftMotionCommandSubroutine(0x070C) /* extern */,
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0E30[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionPlayVoice(nSYAudioVoiceFoxSelected),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0E4C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 8, 4, 1, 0, 200, 140, 0, 0, 70, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 8, 4, 1, 0, 200, 0, 0, 0, 70, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0E94[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 14, 4, 1, 0, 200, 140, 0, 0, 70, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 4, 1, 0, 200, 0, 0, 0, 70, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0EDC[] = {
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0EE0[] = {
	ftMotionCommandWaitAsync(2),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
#else
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 80, 80, 0, 3, 0, 0, 1, 10),
#endif
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
#else
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 80, 80, 0, 3, 0, 0, 1, 10),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandClearAttackCollAll(),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
#else
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 80, 80, 0, 3, 0, 0, 1, 10),
#endif
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
#else
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 80, 80, 0, 3, 0, 0, 1, 10),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(23),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 60, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 60, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandPauseScript(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandGoto(dFoxMainMotion_0x0EE0),
	0x00000000,
};

u32 dFoxMainMotion_0x102C[] = {
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1030[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 20, 10, 1, 0, 230, 140, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 10, 1, 0, 230, 0, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 20, 7, 1, 0, 230, 140, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 7, 1, 0, 230, 0, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x10B0[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 11, 1, 0, 200, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 11, 1, 0, 200, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x10F0[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 10, 1, 0, 200, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 200, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1130[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 9, 1, 0, 200, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 9, 1, 0, 200, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1170[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 8, 1, 0, 200, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 8, 1, 0, 200, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x11B0[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 8, 1, 0, 200, 20, 0, 0, 361, 100, 10, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 8, 1, 0, 200, 140, 0, 0, 361, 100, 10, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x11F0[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 9, 1, 0, 220, 20, 0, 0, 80, 150, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 9, 1, 0, 350, 80, 0, 0, 80, 150, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1230[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(6),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 29, 10, 1, 0, 230, 0, 0, -60, 70, 125, 0, 3, 0, 1, 0, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 29, 12, 1, 0, 230, 0, 0, -60, 70, 125, 0, 3, 0, 1, 0, 25),
#endif
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(1, 0, 29, 10, 1, 0, 230, 0, 0, -200, 90, 125, 0, 3, 0, 1, 0, 0),
#else
	ftMotionCommandMakeAttackColl(1, 0, 29, 12, 1, 0, 230, 0, 0, -200, 90, 125, 0, 3, 0, 1, 0, 25),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1280[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 20, 17, 1, 0, 280, 60, 0, 0, 361, 120, 0, 3, 0, 2, 1, 0),
	ftMotionCommandEffect(20, nEFKindSparkleWhiteScale, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWait(5),
	ftMotionCommandMakeAttackColl(0, 0, 20, 13, 1, 0, 280, 60, 0, 0, 361, 120, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandWaitAsync(45),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1308[] = {
	ftMotionCommandSetHitStatusPartID(12, 3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 25, 16, 1, 0, 200, 0, 0, 0, 80, 140, 0, 3, 0, 2, 1, 25),
	ftMotionCommandMakeAttackColl(1, 0, 25, 16, 1, 0, 280, 70, 0, 0, 80, 140, 0, 3, 0, 2, 1, 25),
	ftMotionCommandEffect(25, nEFKindSparkleWhiteScale, 0, 110, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandMakeAttackColl(0, 0, 25, 8, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 8, 1, 0, 230, 70, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x13B0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusPartID(25, 3),
	ftMotionCommandSetHitStatusPartID(20, 3),
	ftMotionCommandSetHitStatusPartID(24, 3),
	ftMotionCommandSetHitStatusPartID(19, 3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(6),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 25, 14, 1, 0, 260, 90, 0, 0, 70, 100, 0, 3, 0, 2, 1, 30),
#else
	ftMotionCommandMakeAttackColl(0, 0, 25, 14, 1, 0, 260, 90, 0, 0, 25, 80, 0, 3, 0, 2, 1, 35),
#endif
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(1, 0, 20, 14, 1, 0, 260, 90, 0, 0, 70, 100, 0, 3, 0, 2, 1, 30),
#else
	ftMotionCommandMakeAttackColl(1, 0, 20, 14, 1, 0, 260, 90, 0, 0, 25, 80, 0, 3, 0, 2, 1, 35),
#endif
	ftMotionCommandEffect(25, nEFKindSparkleWhiteScale, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(20, nEFKindSparkleWhiteScale, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWait(1),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x144C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 5, 14, 1, 0, 210, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 14, 1, 0, 210, 70, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 25, 14, 1, 0, 180, 70, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 5, 9, 1, 0, 210, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 9, 1, 0, 210, 70, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 25, 9, 1, 0, 180, 70, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(24),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x14E4[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 25, 12, 1, 0, 310, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 12, 1, 0, 310, 120, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 25, 8, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 8, 1, 0, 280, 120, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(14),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1554[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(nSYAudioFGMFoxLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1578[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 5, 12, 1, 0, 220, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 12, 1, 0, 300, 120, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 20, 8, 1, 0, 200, 60, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 5, 8, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 8, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 20, 8, 1, 0, 200, 60, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(20),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1610[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(nSYAudioFGMFoxLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1634[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 5, 2, 1, 0, 320, 0, 0, 0, 90, 100, 100, 3, 0, 0, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 2, 1, 0, 340, 110, 0, 0, 90, 100, 100, 3, 0, 0, 1, 0),
	ftMotionCommandWait(6),
	ftMotionCommandMakeAttackColl(0, 1, 5, 13, 1, 0, 340, 0, 0, 0, 90, 135, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 1, 25, 13, 1, 0, 370, 110, 0, 0, 90, 135, 0, 3, 0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x16A4[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 20, 2, 1, 0, 310, -40, 45, 0, 954, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 2, 1, 0, 360, 30, 30, 0, 954, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFoxAttackAirLw),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFoxAttackAirLw),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFoxAttackAirLw),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFoxAttackAirLw),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFoxAttackAirLw),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFoxAttackAirLw),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFoxAttackAirLw),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x177C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMFoxLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1798[] = {
	ftMotionCommandWaitAsync(30),
	ftMotionPlayFGM(nSYAudioFGMFoxAppearArwing),
	ftMotionCommandWait(32),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x17AC[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x1798),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSetColAnim(nGMColAnimFighterFoxSpecialHiStart, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialN),
	ftMotionCommandEffect(17, nEFKindSparkleWhiteScale, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -220, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1800[] = {
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetColAnim(nGMColAnimFighterFoxSpecialHiStart, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialN),
	ftMotionCommandEffect(17, nEFKindSparkleWhiteScale, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1840[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 180, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1868[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x1840),
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(12, nEFKindSparkleWhiteScale, 0, 0, 60, 0, 0, 0, 0),
	ftMotionCommandSetColAnim(nGMColAnimFighterDonkeySpecialNEnd, 36),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialHiStart),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1894[] = {
	ftMotionCommandSetParallelScript(dFoxMainMotion_0x1868 + 2),
#if defined(REGION_JP)
	ftMotionCommandLoopBegin(2),
#else
	ftMotionCommandLoopBegin(4),
#endif
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(11),
	ftMotionCommandLoopEnd(),
#if defined(REGION_JP)
	ftMotionCommandSetHitStatusAll(2),
#else
	ftMotionCommandEnd(),
#endif
};

#if defined(REGION_JP)
u32 dFoxMainMotion_0x18BC[] = {
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(11),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
	ftMotionCommandGoto(0x06530625),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionPlayVoice(nSYAudioVoiceFoxSpecialHi),
	ftMotionCommandSetColAnim(nGMColAnimFighterUnknown1, 0),
	ftMotionCommandMakeAttackColl(0, 0, 12, 13, 1, 1, 180, 0, 0, 0, 361, 50, 0, 3, 5, 2, 1, 65),
	0x98008000,
};
#else
u32 dFoxMainMotion_0x18BC[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x1894),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionPlayVoice(nSYAudioVoiceFoxSpecialHi),
	ftMotionCommandSetColAnim(nGMColAnimFighterUnknown1, 0),
	ftMotionCommandMakeAttackColl(0, 0, 12, 16, 1, 1, 180, 0, 0, 0, 80, 60, 0, 3, 5, 2, 1, 60),
	ftMotionCommandEffect(0, nEFKindQuakeMag0, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteMultiExplode, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialHiFly),
};
#endif

#if defined(REGION_JP)
u32 dFoxMainMotion_0x1908[] = {
	ftMotionCommandEnd(),
	0x00000000,
	0x00000000,
	0x98007400,
	0x00000000,
	0x00000000,
	0x00000000,
	0x380000B1,
	0x80000002,
	0x04000004,
	0x98307000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x84000000,
	0x94000000,
	0x90000000,
	0x0665064A,
	0x44000160,
	0xB0AC0000,
	0x0C0181B1,
	0x00B40000,
	0x00000000,
	0x5A432003,
	0x05422080,
	0x98008000,
	0x00000000,
	0x00000000,
	0x00000000,
};
#else
u32 dFoxMainMotion_0x1908[] = {
	ftMotionCommandLoopBegin(2),
	ftMotionCommandWait(4),
	ftMotionCommandEffect(6, nEFKindSparkleWhite, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopEnd(),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dFoxMainMotion_0x1908),
	ftMotionPlayVoice(nSYAudioVoiceFoxSpecialHi),
	ftMotionCommandSetColAnim(nGMColAnimFighterUnknown1, 0),
	ftMotionCommandMakeAttackColl(0, 0, 12, 16, 1, 1, 180, 0, 0, 0, 80, 60, 0, 3, 5, 2, 1, 60),
	ftMotionCommandEffect(0, nEFKindQuakeMag0, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteMultiExplode, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialHiFly),
	ftMotionCommandGoto(dFoxMainMotion_0x1908),
	0x00000000,
};
#endif

u32 dFoxMainMotion_0x197C[] = {
#if defined(REGION_JP)
	0x98007400,
#else
	ftMotionCommandEnd(),
#endif
};

#if defined(REGION_JP)
u32 dFoxMainMotion_0x1980[] = {
	ftMotionCommandEnd(),
	0x00000000,
	0x00000000,
	0x380000B1,
	0x90000000,
	0x06A7064A,
	0x00000000,
	0x00000000,
	0x98005800,
	0x00000000,
	0x00000000,
	0x00000000,
	0x98008000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x64000000,
	0x08000014,
	0x58000001,
	0x00000000,
	0x00000000,
};
#else
u32 dFoxMainMotion_0x1980[] = {
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindQuakeMag0, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetAirJumpAdd(0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
	0x00000000,
	0x00000004,
	0x00000000,
	0x42700000,
	0x00000000,
	0x43AF0000,
	0x43AF0000,
	0x43AF0000,
	0x00000032,
};
#endif

#if defined(REGION_JP)
u32 dFoxMainMotion_0x19D4[] = {
	0x00000004,
	ftMotionCommandEnd(),
};
u32 dFoxMainMotion_0x19DC[] = {
	ftMotionCommandStopLoopSFX(40894464),
	ftMotionCommandEnd(),
};
u32 dFoxMainMotion_0x19E4[] = {
	ftMotionCommandStopLoopSFX(61800448),
	ftMotionCommandStopLoopSFX(61800448),
	ftMotionCommandStopLoopSFX(61800448),
	0x00000032,
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 240, 200, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialLwStart),
	0x0C0000A2,  /* opc=3 truncated */
};
#else
u32 dFoxMainMotion_0x19D4[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 240, 200, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialLwStart),
	ftMotionCommandMakeAttackColl(0, 0, 0, 5, 0, 2, 360, 0, 240, 0, 0, 100, 80, 3, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

u32 dFoxMainMotion_0x1A28[] = {
#if defined(REGION_JP)
	0x01680000,
#else
	ftMotionCommandSetSlopeContour(3),
#endif
#if defined(REGION_JP)
	0x00F00000,
#else
	ftMotionCommandSetColAnim(nGMColAnimFighterDonkeySpecialNLoop, 0),
#endif
#if defined(REGION_JP)
	0x00064143,
#else
	ftMotionCommandEnd(),
#endif
};

#if defined(REGION_JP)
u32 dFoxMainMotion_0x1A34[] = {
	ftMotionCommandEnd(),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterDonkeySpecialNLoop, 0),
	ftMotionCommandEnd(),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag2(2),
	0x98005800,
	ftMotionCommandEnd(),
};
#else
u32 dFoxMainMotion_0x1A34[] = {
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(8, nEFKindDamageFlyMDustReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialLwHit),
	ftMotionCommandEnd(),
};
#endif

u32 dFoxMainMotion_0x1A68[] = {
#if defined(REGION_JP)
	ftMotionCommandEnd(),
#else
	ftMotionCommandSetSlopeContour(3),
#endif
#if defined(REGION_JP)
	0x00000000,
#else
	ftMotionCommandSetFlag2(3),
#endif
#if defined(REGION_JP)
	0x98406C00,
#else
	ftMotionCommandResetColAnim(),
#endif
#if defined(REGION_JP)
	0x00000000,
#else
	ftMotionCommandEnd(),
#endif
};

#if defined(REGION_JP)
u32 dFoxMainMotion_0x1A78[] = {
	ftMotionCommandEnd(),
	0x00000000,
	0x380000B2,
	0x00000000,
	0xBC000003,
	0x5C000003,
	0xB4000000,
	0x00000000,
	0x90000000,
	0x06A9067D,
	0x90000000,
	0x06AB0692,
	0x90000000,
	0x06AD0695,
	0x90000000,
	0xFFFF06A2,
	0x00000000,
	0x00000000,
};
#else
u32 dFoxMainMotion_0x1A78[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x19D4),
	ftMotionCommandGoto(dFoxMainMotion_0x1A28),
	ftMotionCommandGoto(dFoxMainMotion_0x1A34),
	ftMotionCommandGoto(dFoxMainMotion_0x1A68),
	0x00000000,
	0x00000000,
};
#endif

