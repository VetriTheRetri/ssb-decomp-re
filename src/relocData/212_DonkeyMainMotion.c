/* ftMotionCommand script data for relocData file 212 (DonkeyMainMotion) */
/* File size: 7376 bytes (0x1CD0) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>
#include <gm/gmdef.h>

#include <ef/efdef.h>
u32 dDonkeyMainMotion_0x0000[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0008[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0010[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0018[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0020[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionPlayFGM(nSYAudioFGMDonkeyDash),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0048[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMDonkeyFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 50, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0048),
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0084[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(2),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0094[] = {
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 100, 0, 0, 0),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x00C4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x00D4[] = {
	ftMotionPlayFGM(nSYAudioFGMKirbyPurinJump),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x00EC[] = {
	ftMotionPlayFGM(nSYAudioFGMUnkGrind2),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0110[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMDonkeyLanding),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x012C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMDonkeyLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0148[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0150[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip1),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0164[] = {
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandReturn(),
};

u32 dDonkeyMainMotion_0x016C[] = {
	ftMotionCommandSubroutine(dDonkeyMainMotion_0x0164),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0178[] = {
	ftMotionCommandSubroutine(dDonkeyMainMotion_0x0164),
	ftMotionCommandSetDamageThrown(0x0758), /* extern */
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x018C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMDonkeyLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x01A8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x01B8[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x01C0[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x01D0[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x01DC[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x01E8[] = {
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWait(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0228[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_0x01E8),
};

u32 dDonkeyMainMotion_0x0230[] = {
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

u32 dDonkeyMainMotion_0x0250[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0268[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_0x0250),
};

u32 dDonkeyMainMotion_0x0270[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandSubroutine(dDonkeyMainMotion_0x0230),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0280[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_0x0270),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0270),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0270),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 16, 6, 0, 0, 220, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 6, 0, 0, 220, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 16, 6, 0, 0, 220, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 6, 0, 0, 220, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0320[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 21, 6, 0, 0, 210, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 21, 6, 0, 0, 210, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(6),
	ftMotionCommandMakeAttackColl(0, 0, 21, 6, 0, 0, 210, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 21, 6, 0, 0, 210, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x03A4[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandEffect(0, nEFKindFlashLarge, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceDonkeySmash2),
	ftMotionPlayFGM(nSYAudioFGMHeavySwing1),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x03E4[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandEffect(0, nEFKindFlashLarge, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceDonkeySmash2),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0428[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_0x03E4),
	ftMotionCommandWaitAsync(4),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0460[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavy, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x048C[] = {
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x049C[] = {
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x04B0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x04B8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x04C0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x04C8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x04D0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x04D8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x04E0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x04E8[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(nSYAudioVoiceDonkeySmash1),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(0, 0, 5, 6, 0, 0, 330, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0548[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionPlayVoice(nSYAudioVoiceDonkeySmash1),
	ftMotionCommandWait(9),
	ftMotionCommandMakeAttackColl(0, 0, 10, 6, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(12),
	ftMotionCommandSetModelPartID(10, 0),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x05B4[] = {
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x05B8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x05C0[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(15),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x05E4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x05EC[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(15),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0610[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0620[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0630[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0640[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0660[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0680[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0660),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x06B0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x06D0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x06F8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dDonkeyMainMotion_0x06D0),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0734[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x075C[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0778[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dDonkeyMainMotion_0x075C),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x07A0[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x07BC[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x07E0[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dDonkeyMainMotion_0x07BC),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0814[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0838[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0848[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0838),
};

u32 dDonkeyMainMotion_0x0858[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0878[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0858),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine(0x0000), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x08B4[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine(0x0064), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(5),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x08DC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutine(0x00C8), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0910[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x012C), /* extern */
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(20),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0944[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine(0x01A0), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0960[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine(0x01F4), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0978[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetColAnim(nGMColAnimFighterBat, 40),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutine(0x0248), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x09A4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x02B0), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x09C8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine(0x0324), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x09E4[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine(0x0378), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x09FC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutine(0x03CC), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0A1C[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0430), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0A40[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 8),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine(0x0494), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0A60[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 13),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine(0x04F8), /* extern */
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0A84[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 24),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutine(0x055C), /* extern */
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0AB4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 22),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x05C0), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0ADC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0AEC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0B00[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandSubroutine(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0B00),
};

u32 dDonkeyMainMotion_0x0B24[] = {
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 200, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, nEFKindShockSmall, 0, 0, 0, 200, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0B24),
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0B24),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0B24),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0BB4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0BBC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceDonkeyFuraFura),
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandLoopBegin(9),
	ftMotionCommandEffect(0, nEFKindFuraSparkle, 0, 0, 180, 0, 380, 380, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0BBC),
};

u32 dDonkeyMainMotion_0x0BEC[] = {
	ftMotionPlayInterruptableVoice(nSYAudioVoiceDonkeyFuraSleep),
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindMusicNote, 0, 0, 150, 0, 300, 300, 300),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0BEC),
};

FTThrowHitDesc dDonkeyMainMotion_0x0C14[] = {
	{ -1, 2, 361, 100, 0, 0, 0 },
	{ -1, 2, 361, 100, 0, 0, 0 },
};

u32 dDonkeyMainMotion_0x0C4C[] = {
	ftMotionCommandSetThrow((u32)dDonkeyMainMotion_0x0C14),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 29, 1, 1, 0, 330, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 180, 0, 200, 250, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0C94[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandEffect(29, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMDonkeySlap1),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dDonkeyMainMotion_0x0CF0[] = {
	{ 52, 8, 45, 80, 0, 70, 0 },
	{ -1, 2, 361, 100, 0, 0, 0 },
};

u32 dDonkeyMainMotion_0x0D28[] = {
	ftMotionCommandSetThrow((u32)dDonkeyMainMotion_0x0CF0),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandEffect(29, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dDonkeyMainMotion_0x0D88[] = {
	{ 52, 18, 45, 70, 0, 80, 0 },
	{ -1, 9, 361, 100, 0, 0, 0 },
};

u32 dDonkeyMainMotion_0x0DC0[] = {
	ftMotionCommandSetThrow((u32)dDonkeyMainMotion_0x0D88),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(29, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0E1C[] = {
	ftMotionCommandSubroutine(0x06AC), /* extern */
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0E28[] = {
	ftMotionCommandSubroutine(0x06C4), /* extern */
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0E34[] = {
	ftMotionCommandSubroutine(0x06CC), /* extern */
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0E40[] = {
	ftMotionCommandSubroutine(dDonkeyMainMotion_0x0164),
	ftMotionCommandSubroutine(0x06F0), /* extern */
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0E54[] = {
	ftMotionCommandSubroutine(dDonkeyMainMotion_0x0164),
	ftMotionCommandSubroutine(0x070C), /* extern */
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0E68[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionPlayVoice(nSYAudioVoiceDonkeyAppeal),
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandWaitAsync(50),
	ftMotionCommandHideItem(1),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0EA0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackColl(0, 0, 9, 4, 1, 0, 280, 140, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 9, 4, 1, 0, 210, -40, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0EE8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 15, 4, 1, 0, 280, 140, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 4, 1, 0, 210, -40, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0F28[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandMakeAttackColl(0, 0, 21, 12, 1, 0, 290, 90, 0, 0, 100, 100, 120, 3, 1, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 21, 12, 1, 0, 290, 90, 0, 0, 100, 100, 120, 3, 1, 2, 1, 0),
	ftMotionCommandWait(20),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0F7C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 14, 13, 1, 0, 240, 80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 13, 1, 0, 280, 150, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 14, 13, 1, 0, 180, -30, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0FD0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 14, 12, 1, 0, 240, 80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 12, 1, 0, 280, 150, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 14, 12, 1, 0, 180, -30, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1024[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 14, 11, 1, 0, 240, 80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 11, 1, 0, 280, 150, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 14, 11, 1, 0, 180, -30, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1078[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 8, 13, 1, 0, 240, 80, 0, 0, 100, 130, 0, 3, 0, 2, 0, 10),
	ftMotionCommandMakeAttackColl(1, 0, 9, 13, 1, 0, 250, 190, 0, 0, 100, 130, 0, 3, 0, 2, 0, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(20),
	ftMotionCommandSetModelPartID(10, 0),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x10C8[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWait(5),
	ftMotionCommandMakeAttackColl(0, 0, 14, 8, 1, 0, 220, 80, 0, 0, 40, 80, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 8, 1, 0, 240, 180, 0, 0, 40, 80, 0, 3, 0, 2, 0, 30),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1110[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 14, 21, 1, 0, 280, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(1, 0, 15, 21, 1, 0, 320, 240, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(2, 0, 14, 21, 1, 0, 200, -30, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1194[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 14, 21, 1, 0, 280, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(1, 0, 15, 21, 1, 0, 320, 240, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(2, 0, 14, 21, 1, 0, 200, -30, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1218[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 14, 20, 1, 0, 280, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(1, 0, 15, 20, 1, 0, 320, 240, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(2, 0, 14, 20, 1, 0, 200, -30, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x129C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 14, 19, 1, 0, 280, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(1, 0, 15, 19, 1, 0, 320, 240, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(2, 0, 14, 19, 1, 0, 200, -30, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1320[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 14, 19, 1, 0, 280, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(1, 0, 15, 19, 1, 0, 320, 240, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(2, 0, 14, 19, 1, 0, 200, -30, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x13A4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWait(4),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 180, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(9, nEFKindSparkleWhiteScale, 0, 180, 0, 0, 0, 0, 0),
	ftMotionCommandWait(10),
	ftMotionCommandSetHitStatusPartID(12, 3),
	ftMotionCommandSetHitStatusPartID(15, 3),
	ftMotionCommandSetHitStatusPartID(9, 3),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 15, 21, 1, 0, 480, 180, 0, 0, 90, 100, 0, 3, 4, 2, 0, 40),
	ftMotionCommandMakeAttackColl(1, 0, 9, 21, 1, 0, 480, 180, 0, 0, 90, 100, 0, 3, 4, 2, 0, 40),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMFireShoot1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandWait(20),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1458[] = {
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandMakeAttackColl(0, 0, 26, 19, 1, 0, 210, 0, 0, 0, 60, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 21, 19, 1, 0, 210, 0, 0, 0, 60, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(2, 0, 26, 19, 1, 0, 270, 180, 0, 0, 60, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(3, 0, 21, 19, 1, 0, 270, 180, 0, 0, 60, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(26, nEFKindSparkleWhiteScale, 0, 180, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(21, nEFKindSparkleWhiteScale, 0, 180, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(20),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(54),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandSetModelPartID(10, 0),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x150C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 15, 15, 1, 0, 200, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 9, 15, 1, 0, 200, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 15, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 15, 12, 1, 0, 200, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 9, 12, 1, 0, 200, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 12, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandWait(22),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x15A4[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 15, 16, 1, 0, 240, 220, 0, 0, -70, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 16, 1, 0, 160, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(2, 0, 8, 16, 1, 0, 160, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(16),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1604[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(nSYAudioFGMDonkeyLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1620[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 0, 15, 1, 0, 340, 0, 200, -370, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 15, 1, 0, 280, 0, 140, -170, 361, 100, 0, 3, 0, 2, 1, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 0, 15, 1, 0, 340, 0, 200, -370, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 0, 15, 1, 0, 280, 0, 140, -170, 361, 100, 0, 3, 0, 2, 1, 10),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandMakeAttackColl(0, 0, 0, 10, 1, 0, 340, 0, 200, -370, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 10, 1, 0, 280, 0, 140, -170, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(22),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1690[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(nSYAudioFGMDonkeyLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x16AC[] = {
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 8, 12, 1, 0, 260, 10, 0, 0, 110, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 9, 12, 1, 0, 300, 150, 0, 0, 110, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(18),
	ftMotionCommandSetModelPartID(10, 0),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x16F8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(20),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 26, 13, 1, 0, 330, 80, 0, 0, -90, 80, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 21, 13, 1, 0, 330, 80, 0, 0, -90, 80, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(2, 0, 26, 13, 1, 0, 280, -80, 0, 0, -90, 80, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(3, 0, 21, 13, 1, 0, 280, -80, 0, 0, -90, 80, 0, 3, 0, 2, 1, 10),
#else
	ftMotionCommandMakeAttackColl(0, 0, 26, 13, 1, 0, 330, 80, 0, 0, -90, 90, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(1, 0, 21, 13, 1, 0, 330, 80, 0, 0, -90, 90, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(2, 0, 26, 13, 1, 0, 280, -80, 0, 0, -90, 90, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(3, 0, 21, 13, 1, 0, 280, -80, 0, 0, -90, 90, 0, 3, 0, 2, 1, 15),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandSetAttackCollDamage(0, 10),
	ftMotionCommandSetAttackCollDamage(1, 10),
	ftMotionCommandSetAttackCollDamage(2, 10),
	ftMotionCommandSetAttackCollDamage(3, 10),
	ftMotionCommandSetAttackCollSize(0, 300),
	ftMotionCommandSetAttackCollSize(1, 300),
	ftMotionCommandSetAttackCollSize(2, 260),
	ftMotionCommandSetAttackCollSize(3, 260),
	ftMotionCommandWait(18),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1788[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMDonkeyLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x17A4[] = {
	ftMotionCommandWaitAsync(56),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteMultiExplode, 0, 0, 250, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindBoxSmash, 0, 0, 250, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMContainerSmash),
	ftMotionCommandWait(4),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x17DC[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_0x17A4),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x17FC[] = {
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1810[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterFoxSpecialHi, 0),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMDonkeyCharge),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 90, -180, 0, 90, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x1810),
};

u32 dDonkeyMainMotion_0x1844[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetColAnim(nGMColAnimFighterFoxSpecialHi, 0),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMDonkeyCharge),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x1844),
};

u32 dDonkeyMainMotion_0x1864[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(2),
	ftMotionCommandSetColAnim(nGMColAnimFighterLinkSpecialHi, 4),
	ftMotionCommandWait(7),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 14, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 2, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 14, 1, 0, 340, 290, 0, 0, 361, 100, 0, 3, 2, 2, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMBossUnk2),
	ftMotionPlayVoice(nSYAudioVoiceDonkeySpecialN),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x18C4[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_0x1864),
};

u32 dDonkeyMainMotion_0x18CC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterLinkSpecialHi, 16),
	ftMotionCommandWait(9),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandMakeAttackColl(0, 0, 14, 36, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 12, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 36, 1, 0, 340, 290, 0, 0, 361, 100, 0, 3, 12, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 36, 1, 0, 50, 0, 0, 0, 361, 100, 0, 3, 12, 2, 1, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandEffect(0, nEFKindDustDashLarge, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 200, 200, 0),
	ftMotionPlayFGM(nSYAudioFGMBossUnk1),
	ftMotionPlayVoice(nSYAudioVoiceDonkeySpecialN),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 200, 200, 0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x197C[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_0x18CC),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(3),
	ftMotionPlayFGM(nSYAudioFGMDonkeySpin),
	ftMotionCommandMakeAttackColl(0, 0, 8, 12, 1, 0, 200, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 12, 1, 0, 200, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(3),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandLoopBegin(5),
	ftMotionPlayFGM(nSYAudioFGMDonkeySpin),
	ftMotionCommandMakeAttackColl(0, 0, 8, 8, 1, 0, 200, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 8, 1, 0, 200, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 21, 8, 1, 0, 160, 100, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetHitStatusPartAll(1),
};

u32 dDonkeyMainMotion_0x1A34[] = {
	ftMotionCommandLoopBegin(3),
	ftMotionPlayFGM(nSYAudioFGMDonkeySpin),
	ftMotionCommandMakeAttackColl(0, 1, 8, 3, 1, 0, 140, 200, 0, 0, 361, 100, 0, 3, 1, 0, 0, 0),
	ftMotionCommandMakeAttackColl(1, 1, 14, 3, 1, 0, 140, 200, 0, 0, 361, 100, 0, 3, 1, 0, 0, 0),
	ftMotionCommandMakeAttackColl(2, 1, 21, 3, 1, 0, 80, 100, 0, 0, 361, 100, 0, 3, 1, 0, 0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1A8C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(3),
	ftMotionPlayFGM(nSYAudioFGMDonkeySpin),
	ftMotionCommandMakeAttackColl(0, 0, 8, 12, 1, 0, 220, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 12, 1, 0, 220, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(3),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandSetHitStatusPartID(15, 2),
	ftMotionCommandSetHitStatusPartID(9, 2),
	ftMotionCommandLoopBegin(5),
	ftMotionPlayFGM(nSYAudioFGMDonkeySpin),
	ftMotionCommandMakeAttackColl(0, 0, 8, 8, 1, 0, 200, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 8, 1, 0, 200, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 21, 8, 1, 0, 160, 100, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandGoto(dDonkeyMainMotion_0x1A34),
	ftMotionCommandHideItem(0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandWait(2),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1B64[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandHideItem(0),
	ftMotionCommandWaitAsync(16),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 0, 10, 0, 0, 400, 0, 0, -500, 90, 100, 150, 2, 252, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 10, 0, 0, 400, 0, 0, -100, 90, 100, 150, 2, 252, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 0, 10, 0, 0, 400, 0, 0, 300, 90, 100, 150, 2, 252, 2, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 0, 10, 0, 0, 400, 0, 0, 700, 90, 100, 150, 2, 252, 2, 1, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 0, 10, 0, 0, 400, 0, 0, -500, 90, 100, 150, 2, -4, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 10, 0, 0, 400, 0, 0, -100, 90, 100, 150, 2, -4, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 0, 10, 0, 0, 400, 0, 0, 300, 90, 100, 150, 2, -4, 2, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 0, 10, 0, 0, 400, 0, 0, 700, 90, 100, 150, 2, -4, 2, 1, 0),
#endif
	ftMotionPlayFGM(nSYAudioFGMBossSlam),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 0, 10, 0, 0, 400, 0, 0, -500, 90, 100, 150, 2, 252, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 10, 0, 0, 400, 0, 0, -100, 90, 100, 150, 2, 252, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 0, 10, 0, 0, 400, 0, 0, 300, 90, 100, 150, 2, 252, 2, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 0, 10, 0, 0, 400, 0, 0, 700, 90, 100, 150, 2, 252, 2, 1, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 0, 10, 0, 0, 400, 0, 0, -500, 90, 100, 150, 2, -4, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 10, 0, 0, 400, 0, 0, -100, 90, 100, 150, 2, -4, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 0, 10, 0, 0, 400, 0, 0, 300, 90, 100, 150, 2, -4, 2, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 0, 10, 0, 0, 400, 0, 0, 700, 90, 100, 150, 2, -4, 2, 1, 0),
#endif
	ftMotionPlayFGM(nSYAudioFGMBossSlam),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x1B64),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1CA8[] = {
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1CB8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1CC4[] = {
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1CC8[] = {
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1CCC[] = {
	ftMotionCommandEnd(),
};
