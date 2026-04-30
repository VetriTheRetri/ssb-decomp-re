/* ftMotionCommand script data for relocData file 216 (SamusMainMotion) */
/* File size: 7872 bytes (0x1EC0) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>
#include <gm/gmdef.h>

#include <ef/efdef.h>
u32 dSamusMainMotion_0x0000[] = {
	ftMotionCommandHideModelPartAll(),
	ftMotionCommandSetModelPartID(6, 1),
	ftMotionCommandSetDamageCollPartIDS1(6),
	ftMotionCommandSetDamageCollPartIDS2(0, 25),
	ftMotionCommandSetDamageCollPartIDS3(-8, 200),
	ftMotionCommandSetDamageCollPartIDS4(260, 150),
	ftMotionCommandSetHitStatusPartID(5, 3),
	ftMotionCommandSetHitStatusPartID(13, 3),
	ftMotionCommandSetHitStatusPartID(15, 3),
	ftMotionCommandSetHitStatusPartID(8, 3),
	ftMotionCommandSetHitStatusPartID(16, 3),
	ftMotionCommandSetHitStatusPartID(9, 3),
	ftMotionCommandSetHitStatusPartID(32, 3),
	ftMotionCommandSetHitStatusPartID(27, 3),
	ftMotionCommandSetHitStatusPartID(33, 3),
	ftMotionCommandSetHitStatusPartID(28, 3),
	ftMotionCommandReturn(),
};

u32 dSamusMainMotion_0x0044[] = {
	ftMotionCommandSetModelPartID(6, 2),
	ftMotionCommandSetDamageCollPartIDS1(6),
	ftMotionCommandSetDamageCollPartIDS2(0, 25),
	ftMotionCommandSetDamageCollPartIDS3(-8, 130),
	ftMotionCommandSetDamageCollPartIDS4(130, 130),
	ftMotionCommandReturn(),
};

u32 dSamusMainMotion_0x005C[] = {
	ftMotionCommandSetModelPartID(6, 1),
	ftMotionCommandSetDamageCollPartIDS1(6),
	ftMotionCommandSetDamageCollPartIDS2(0, 25),
	ftMotionCommandSetDamageCollPartIDS3(-8, 200),
	ftMotionCommandSetDamageCollPartIDS4(260, 150),
	ftMotionCommandReturn(),
};

u32 dSamusMainMotion_0x0074[] = {
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandResetDamageCollPartAll(),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandReturn(),
};

u32 dSamusMainMotion_0x0084[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x008C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0094[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x009C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x00A4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMSamusDash),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x00CC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMSamusFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(12),
	ftMotionPlayFGM(nSYAudioFGMSamusFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dSamusMainMotion_0x00CC),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0124[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0134[] = {
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 100, 0, 0, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0164[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0174[] = {
	ftMotionPlayFGM(nSYAudioFGMGroundGrind4),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x018C[] = {
	ftMotionPlayFGM(nSYAudioFGMSamusJumpAerial),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x01B0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMSamusLanding),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x01CC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMSamusLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x01E8[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip10),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x01F0[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip10),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0204[] = {
	ftMotionCommandSetDamageThrown(0x0758), /* extern */
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0210[] = {
	ftMotionPlayFGM(nSYAudioFGMSamusLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0228[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0230[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0238[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0240[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x024C[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0258[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWait(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0294[] = {
	ftMotionCommandGoto(dSamusMainMotion_0x0258),
};

u32 dSamusMainMotion_0x029C[] = {
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

u32 dSamusMainMotion_0x02BC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x02D4[] = {
	ftMotionCommandGoto(dSamusMainMotion_0x02BC),
};

u32 dSamusMainMotion_0x02DC[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandSubroutine(dSamusMainMotion_0x029C),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x02EC[] = {
	ftMotionCommandGoto(dSamusMainMotion_0x02DC),
	ftMotionCommandGoto(dSamusMainMotion_0x02DC),
	ftMotionCommandGoto(dSamusMainMotion_0x02DC),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 33, 6, 0, 0, 200, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 33, 6, 0, 0, 160, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandMakeAttackColl(0, 0, 33, 6, 0, 0, 200, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 33, 6, 0, 0, 160, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0388[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 33, 6, 0, 0, 190, 160, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 33, 6, 0, 0, 160, 0, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 28, 6, 0, 0, 190, 160, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 28, 6, 0, 0, 160, 0, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0400[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, nEFKindFlashMiddle, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceSamusAppeal),
	ftMotionPlayFGM(nSYAudioFGMHeavySwing1),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x043C[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, nEFKindFlashMiddle, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceSamusAppeal),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x047C[] = {
	ftMotionCommandGoto(dSamusMainMotion_0x043C),
};

u32 dSamusMainMotion_0x0484[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0000),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0044),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(31),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSubroutine(dSamusMainMotion_0x005C),
	ftMotionCommandWaitAsync(35),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0074),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x04D0[] = {
	ftMotionCommandSetParallelScript(dSamusMainMotion_0x0484),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x04F4[] = {
	ftMotionCommandSetParallelScript(dSamusMainMotion_0x0484),
	ftMotionCommandEffect(0, nEFKindDustHeavy, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0510[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x051C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x052C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0534[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x053C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0544[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x054C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0554[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x055C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0564[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(nSYAudioVoiceSamusSmash1),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackColl(0, 0, 35, 6, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x05D0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x05E0[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceSamusSmash1),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(13),
	ftMotionCommandMakeAttackColl(0, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 6, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x064C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0654[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0000),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0044),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(29),
	ftMotionCommandSubroutine(dSamusMainMotion_0x005C),
	ftMotionCommandWaitAsync(31),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0074),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x06A8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x06B0[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0000),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0044),
	ftMotionCommandWait(28),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(37),
	ftMotionCommandSubroutine(dSamusMainMotion_0x005C),
	ftMotionCommandWaitAsync(41),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0074),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0704[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0714[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0724[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0734[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0750[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0770[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dSamusMainMotion_0x0750),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x07A0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x07C0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x07E4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dSamusMainMotion_0x07C0),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0818[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x083C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0858[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dSamusMainMotion_0x083C),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0880[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x089C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x08BC[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dSamusMainMotion_0x089C),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x08E8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0908[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0918[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dSamusMainMotion_0x0908),
};

u32 dSamusMainMotion_0x0928[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x093C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(10),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandGoto(dSamusMainMotion_0x0928),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine(0x0000), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x097C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine(0x0064), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x09B0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x00C8), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(51),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x09E8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x012C), /* extern */
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0A20[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine(0x01A0), /* extern */
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0A38[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine(0x01F4), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0A5C[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetColAnim(nGMColAnimFighterBat, 40),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0248), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(51),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0A8C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x02B0), /* extern */
	ftMotionCommandWait(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0AB4[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine(0x0324), /* extern */
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0ACC[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine(0x0378), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0AF0[] = {
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x03CC), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(51),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0B14[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0430), /* extern */
	ftMotionCommandWait(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0B3C[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 10),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine(0x0494), /* extern */
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0B58[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 17),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine(0x04F8), /* extern */
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0B88[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 25),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x055C), /* extern */
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(51),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0BBC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 22),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x05C0), /* extern */
	ftMotionCommandWait(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0BEC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0BFC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0C0C[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dSamusMainMotion_0x0C0C),
};

u32 dSamusMainMotion_0x0C2C[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, nEFKindShockSmall, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dSamusMainMotion_0x0C2C),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionPlayVoice(nSYAudioVoiceSamusDamage),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dSamusMainMotion_0x0C2C),
	ftMotionCommandGoto(dSamusMainMotion_0x0C2C),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0CAC[] = {
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0CB0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceSamusFura),
};

u32 dSamusMainMotion_0x0CB8[] = {
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, nEFKindShockSmall, 0, 0, 0, 200, 200, 200, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 100, 0, 0),
	ftMotionCommandGoto(dSamusMainMotion_0x0CB8),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceSamusFura),
};

u32 dSamusMainMotion_0x0CF4[] = {
	ftMotionCommandEffect(0, nEFKindMusicNote, 0, 0, 150, 0, 200, 300, 200),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dSamusMainMotion_0x0CF4),
};

u32 dSamusMainMotion_0x0D10[] = {
	ftMotionCommandSetModelPartID(24, 1),
	ftMotionCommandSetModelPartID(25, -1),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandSetModelPartID(18, 0),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandSetModelPartID(20, 0),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(22, 0),
	ftMotionCommandReturn(),
};

FTThrowHitDesc dSamusMainMotion_0x0D34[] = {
	{ -1, 8, 361, 100, 0, 0, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

u32 dSamusMainMotion_0x0D6C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetThrow((u32)dSamusMainMotion_0x0D34),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0D10),
	ftMotionCommandLoopBegin(5),
	ftMotionCommandWait(4),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 150, 0, 0, 100, 100, 100),
	ftMotionCommandLoopEnd(),
	ftMotionCommandMakeRumble(16, 9),
	ftMotionCommandMakeAttackColl(0, 0, 36, 1, 1, 0, 210, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 36, 1, 1, 0, 160, 0, 0, 200, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, -100, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMSamusCatchGrappleBeam),
	ftMotionCommandSetFlag1(17),
	ftMotionCommandSetFlag2(9),
	ftMotionCommandLoopBegin(5),
	ftMotionCommandWait(3),
	ftMotionCommandEffect(36, nEFKindSparkleWhiteScale, 0, 150, 0, 0, 100, 100, 100),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0E0C[] = {
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0D10),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dSamusMainMotion_0x0E20[] = {
	{ 52, 16, 40, 60, 0, 90, 2 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

u32 dSamusMainMotion_0x0E58[] = {
	ftMotionCommandSetThrow((u32)dSamusMainMotion_0x0E20),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0D10),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(9),
	ftMotionPlayVoice(nSYAudioVoiceSamusSmash1),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 200, 280, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dSamusMainMotion_0x0EB8[] = {
	{ 52, 18, 40, 60, 0, 90, 2 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

u32 dSamusMainMotion_0x0EF0[] = {
	ftMotionCommandSetThrow((u32)dSamusMainMotion_0x0EB8),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0D10),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(9),
	ftMotionPlayVoice(nSYAudioVoiceSamusSmash1),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 200, 280, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandSetFlag2(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0F50[] = {
	ftMotionCommandSubroutine(0x06AC), /* extern */
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0F5C[] = {
	ftMotionCommandSubroutine(0x06C4), /* extern */
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0F68[] = {
	ftMotionCommandSubroutine(0x06CC), /* extern */
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0F74[] = {
	ftMotionCommandSubroutine(0x06F0), /* extern */
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0F80[] = {
	ftMotionCommandSubroutine(0x070C), /* extern */
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0F8C[] = {
	ftMotionCommandWait(24),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionPlayVoice(nSYAudioVoiceSamusAppeal),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0FA4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 9, 3, 1, 0, 180, 120, 0, 0, 361, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 8, 3, 1, 0, 180, 60, 0, 0, 361, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 8, 3, 1, 0, 180, -60, 0, 0, 361, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1000[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(7),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 16, 7, 1, 0, 220, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 10),
	ftMotionCommandMakeAttackColl(1, 0, 15, 7, 1, 0, 220, 30, 0, 0, 361, 100, 0, 3, 0, 2, 0, 10),
#else
	ftMotionCommandMakeAttackColl(0, 0, 16, 7, 1, 0, 220, 120, 0, 0, 361, 100, 0, 3, 0, 1, 0, 10),
	ftMotionCommandMakeAttackColl(1, 0, 15, 7, 1, 0, 220, 30, 0, 0, 361, 100, 0, 3, 0, 1, 0, 10),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1040[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 15, 12, 1, 0, 220, 16, 0, 0, 361, 100, 0, 3, 1, 2, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 15, 10, 1, 0, 220, 16, 0, 0, 361, 100, 0, 3, 1, 2, 0, 0),
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1094[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(2, 0, 32, 12, 1, 0, 110, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 12, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(0, 0, 33, 12, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x10E4[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(2, 0, 32, 11, 1, 0, 110, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 11, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(0, 0, 33, 11, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1134[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(2, 0, 32, 10, 1, 0, 110, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 10, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(0, 0, 33, 10, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1184[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(2, 0, 32, 9, 1, 0, 110, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 9, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(0, 0, 33, 9, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x11D4[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(2, 0, 32, 9, 1, 0, 110, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 9, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(0, 0, 33, 9, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1224[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 33, 8, 1, 0, 200, -20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 33, 8, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(17),
	ftMotionCommandMakeAttackColl(0, 0, 33, 13, 1, 0, 300, -20, 0, 0, 361, 100, 0, 3, 0, 2, 1, 5),
	ftMotionCommandMakeAttackColl(1, 0, 33, 13, 1, 0, 300, 180, 0, 0, 361, 100, 0, 3, 0, 2, 1, 5),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandEffect(33, nEFKindSparkleWhiteScale, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x12A0[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 33, 13, 1, 0, 200, -40, 0, 0, 40, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 13, 1, 0, 200, 180, 0, 0, 40, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x12EC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 16, 20, 1, 0, 210, -80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(1, 0, 16, 20, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(2, 0, 8, 20, 1, 0, 150, 0, 0, 0, 40, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1368[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 16, 19, 1, 0, 210, -80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(1, 0, 16, 19, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(2, 0, 8, 19, 1, 0, 150, 0, 0, 0, 40, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x13E4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 16, 18, 1, 0, 210, -80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(1, 0, 16, 18, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(2, 0, 8, 18, 1, 0, 150, 0, 0, 0, 40, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1460[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 16, 17, 1, 0, 210, -80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(1, 0, 16, 17, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(2, 0, 8, 17, 1, 0, 150, 0, 0, 0, 40, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x14DC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 16, 16, 1, 0, 210, -80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(1, 0, 16, 16, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(2, 0, 8, 16, 1, 0, 150, 0, 0, 0, 40, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1558[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceSamusAttackHi4),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(17),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 16, 10, 1, 1, 190, -80, 0, 0, 80, 100, 0, 3, 1, 2, 3, 10),
	ftMotionCommandMakeAttackColl(1, 0, 16, 10, 1, 1, 370, 200, 0, 0, 80, 100, 0, 3, 1, 2, 3, 10),
#else
	ftMotionCommandMakeAttackColl(0, 0, 16, 10, 1, 1, 190, -80, 0, 0, 80, 100, 0, 3, 1, 2, 3, 22),
	ftMotionCommandMakeAttackColl(1, 0, 16, 10, 1, 1, 400, 200, 0, 0, 80, 100, 0, 3, 1, 2, 3, 22),
#endif
	ftMotionCommandEffect(16, nEFKindSparkleWhite, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandMakeRumble(6, 7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFireShoot1),
#if defined(REGION_JP)
	ftMotionCommandWait(2),
#else
	ftMotionCommandWait(3),
#endif
	ftMotionCommandClearAttackCollAll(),
#if defined(REGION_JP)
	ftMotionCommandWait(2),
#else
	ftMotionCommandWait(1),
#endif
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, nEFKindSparkleWhite, 0, 300, 0, 0, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandMakeRumble(6, 7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFireShoot1),
#if defined(REGION_JP)
	ftMotionCommandWait(2),
#else
	ftMotionCommandWait(3),
#endif
	ftMotionCommandClearAttackCollAll(),
#if defined(REGION_JP)
	ftMotionCommandWait(2),
#else
	ftMotionCommandWait(1),
#endif
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, nEFKindSparkleWhite, 0, 300, 0, 0, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandMakeRumble(6, 7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFireShoot1),
#if defined(REGION_JP)
	ftMotionCommandWait(2),
#else
	ftMotionCommandWait(3),
#endif
	ftMotionCommandClearAttackCollAll(),
#if defined(REGION_JP)
	ftMotionCommandWait(2),
#else
	ftMotionCommandWait(1),
#endif
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, nEFKindSparkleWhite, 0, 300, 0, 0, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandMakeRumble(6, 7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFireShoot1),
#if defined(REGION_JP)
	ftMotionCommandWait(2),
#else
	ftMotionCommandWait(3),
#endif
	ftMotionCommandClearAttackCollAll(),
#if defined(REGION_JP)
	ftMotionCommandWait(2),
#else
	ftMotionCommandWait(1),
#endif
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, nEFKindSparkleWhite, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandMakeRumble(6, 7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFireShoot1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x16E4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandMakeAttackColl(0, 0, 33, 16, 1, 0, 210, -60, 0, 0, 60, 80, 0, 3, 0, 2, 1, 35),
	ftMotionCommandMakeAttackColl(1, 0, 33, 16, 1, 0, 240, 220, 0, 0, 60, 80, 0, 3, 0, 2, 1, 35),
	ftMotionCommandEffect(33, nEFKindSparkleWhiteScale, 0, 220, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(6),
	ftMotionCommandMakeAttackColl(0, 0, 33, 14, 1, 0, 210, -60, 0, 0, 60, 80, 0, 3, 0, 1, 1, 35),
	ftMotionCommandMakeAttackColl(1, 0, 33, 14, 1, 0, 240, 220, 0, 0, 60, 80, 0, 3, 0, 1, 1, 35),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(31),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x178C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 27, 16, 1, 0, 240, -30, 0, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 16, 1, 0, 280, 50, 0, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 27, 13, 1, 0, 240, -30, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 13, 1, 0, 280, 50, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(20),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x17FC[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 16, 5, 1, 1, 230, -110, 0, 0, 361, 100, 0, 3, 0, 2, 3, 0),
	ftMotionCommandMakeAttackColl(1, 0, 16, 5, 1, 1, 350, 200, 0, 0, 361, 100, 0, 3, 0, 2, 3, 0),
	ftMotionCommandEffect(16, nEFKindSparkleWhite, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 80, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(7, 7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFireShoot1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(5),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, nEFKindSparkleWhite, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(7, 7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFireShoot1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(5),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, nEFKindSparkleWhite, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 80, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(7, 7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFireShoot1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(5),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, nEFKindSparkleWhite, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(7, 7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFireShoot1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1938[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 33, 14, 1, 0, 240, -30, 0, 0, 361, 145, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 33, 14, 1, 0, 260, 110, 0, 0, 361, 145, 0, 3, 0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 33, 10, 1, 0, 240, -30, 0, 0, 361, 145, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 33, 10, 1, 0, 260, 110, 0, 0, 361, 145, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x19AC[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(nSYAudioFGMSamusLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x19CC[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionPlayVoice(nSYAudioVoiceSamusUnkSlash),
	ftMotionCommandMakeAttackColl(0, 0, 28, 2, 1, 0, 320, -50, 45, 0, 80, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 28, 2, 1, 0, 360, 100, 30, 0, 80, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 28, 4, 1, 0, 290, -50, 45, 0, 80, 150, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 28, 4, 1, 0, 320, 60, 30, 0, 80, 150, 0, 3, 0, 1, 0, 0),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1A58[] = {
	ftMotionPlayFGM(nSYAudioFGMSamusLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1A70[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 16, 14, 1, 0, 250, -60, 0, 0, -90, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 16, 14, 1, 0, 280, 120, 0, 0, -90, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(9),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1AB4[] = {
	ftMotionPlayFGM(nSYAudioFGMSamusLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1ACC[] = {
	ftMotionCommandWaitAsync(1),
	ftMotionPlayFGM(nSYAudioFGMSamusUnkCharge),
	ftMotionCommandWait(80),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1AE0[] = {
	ftMotionCommandGoto(dSamusMainMotion_0x1ACC),
	ftMotionCommandSetColAnim(nGMColAnimFighterSamusSpecialHi, 0),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAirJumpMax(0),
	ftMotionCommandSetFlag1(1),
	ftMotionPlayFGM(nSYAudioFGMSamusSpecialHi),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(5, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 200, 200, 0),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 0, 2, 1, 0, 200, 0, -30, 140, 100, 0, 1, 3, 3, 1, 1, 120),
	ftMotionCommandMakeAttackColl(1, 0, 0, 2, 1, 0, 200, 0, -30, -140, 100, 0, 1, 3, 3, 1, 1, 120),
	ftMotionCommandMakeAttackColl(2, 0, 0, 2, 1, 0, 200, 0, 330, 140, 100, 0, 1, 3, 3, 1, 1, 110),
	ftMotionCommandMakeAttackColl(3, 0, 0, 2, 1, 0, 200, 0, 330, -140, 100, 0, 1, 3, 3, 1, 1, 110),
#else
	ftMotionCommandMakeAttackColl(0, 0, 0, 2, 1, 0, 200, 0, -30, 140, 100, 0, 1, 3, 3, 0, 1, 120),
	ftMotionCommandMakeAttackColl(1, 0, 0, 2, 1, 0, 200, 0, -30, -140, 100, 0, 1, 3, 3, 0, 1, 120),
	ftMotionCommandMakeAttackColl(2, 0, 0, 2, 1, 0, 200, 0, 330, 140, 100, 0, 1, 3, 3, 0, 1, 110),
	ftMotionCommandMakeAttackColl(3, 0, 0, 2, 1, 0, 200, 0, 330, -140, 100, 0, 1, 3, 3, 0, 1, 110),
#endif
	ftMotionCommandWait(2),
#if defined(REGION_JP)
#else
	ftMotionCommandSetHitStatusAll(1),
#endif
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(5, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 200, 200, 0),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 180, 0, -80, 110, 105, 0, 1, 3, 3, 1, 1, 110),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 180, 0, -80, -110, 105, 0, 1, 3, 3, 1, 1, 110),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 180, 0, 310, 110, 100, 0, 1, 3, 3, 1, 1, 70),
	ftMotionCommandMakeAttackColl(3, 0, 0, 1, 1, 0, 180, 0, 310, -110, 100, 0, 1, 3, 3, 1, 1, 70),
#else
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 180, 0, -80, 110, 105, 0, 1, 3, 3, 0, 1, 110),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 180, 0, -80, -110, 105, 0, 1, 3, 3, 0, 1, 110),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 180, 0, 310, 110, 100, 0, 1, 3, 3, 0, 1, 70),
	ftMotionCommandMakeAttackColl(3, 0, 0, 1, 1, 0, 180, 0, 310, -110, 100, 0, 1, 3, 3, 0, 1, 70),
#endif
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopEnd(),
#if defined(REGION_JP)
	ftMotionCommandSetHitStatusAll(1),
#else
#endif
	ftMotionCommandLoopBegin(10),
	ftMotionCommandEffect(5, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 200, 200, 200),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 140, 0, 290, 100, 200, 0, 1, 3, 3, 1, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 140, 0, 290, -100, 200, 0, 1, 3, 3, 1, 1, 20),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 140, 0, 10, 100, 110, 0, 1, 3, 3, 1, 1, 50),
	ftMotionCommandMakeAttackColl(3, 0, 0, 1, 1, 0, 140, 0, 10, -100, 110, 0, 1, 3, 3, 1, 1, 50),
#else
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 140, 0, 290, 100, 200, 0, 1, 3, 3, 0, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 140, 0, 290, -100, 200, 0, 1, 3, 3, 0, 1, 20),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 140, 0, 10, 100, 110, 0, 1, 3, 3, 0, 1, 50),
	ftMotionCommandMakeAttackColl(3, 0, 0, 1, 1, 0, 140, 0, 10, -100, 110, 0, 1, 3, 3, 0, 1, 50),
#endif
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopEnd(),
};

u32 dSamusMainMotion_0x1C68[] = {
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 2, 400, 0, 100, 0, 361, 100, 80, 3, 3, 2, 1, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 2, 400, 0, 100, 0, 361, 100, 80, 3, 3, 1, 1, 0),
#endif
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandResetColAnim(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1C8C[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterSamusSpecialHi, 0),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionPlayFGM(nSYAudioFGMSamusSpecialHi),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandLoopBegin(13),
	ftMotionCommandEffect(5, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 200, 200, 200),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 160, 0, 290, 150, 200, 0, 1, 3, 3, 1, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 160, 0, 290, -150, 200, 0, 1, 3, 3, 1, 1, 20),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 160, 0, 10, 150, 110, 0, 1, 3, 3, 1, 1, 50),
	ftMotionCommandMakeAttackColl(3, 0, 0, 1, 1, 0, 160, 0, 10, -150, 110, 0, 1, 3, 3, 1, 1, 50),
#else
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 160, 0, 290, 150, 200, 0, 1, 3, 3, 0, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 160, 0, 290, -150, 200, 0, 1, 3, 3, 0, 1, 20),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 160, 0, 10, 150, 110, 0, 1, 3, 3, 0, 1, 50),
	ftMotionCommandMakeAttackColl(3, 0, 0, 1, 1, 0, 160, 0, 10, -150, 110, 0, 1, 3, 3, 0, 1, 50),
#endif
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dSamusMainMotion_0x1C68),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1D2C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandWait(13),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 150, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1D58[] = {
	ftMotionCommandWait(13),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 150, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1D70[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 150, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(0, 7),
};

u32 dSamusMainMotion_0x1D88[] = {
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dSamusMainMotion_0x1D88),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetColAnim(nGMColAnimFighterFoxSpecialHiStart, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEffect(16, nEFKindDustExpandSmall, 0, 200, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1DE0[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterFoxSpecialHiStart, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEffect(16, nEFKindDustExpandSmall, 0, 200, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1E10[] = {
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0000),
	ftMotionCommandSetAirJumpMax(0),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionPlayFGM(nSYAudioFGMSamusSpecialLw),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSetFlag3(1),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0044),
	ftMotionCommandWaitAsync(43),
	ftMotionCommandSetFlag3(0),
	ftMotionCommandSubroutine(dSamusMainMotion_0x005C),
	ftMotionCommandWaitAsync(49),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0074),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1E6C[] = {
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0000),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionPlayFGM(nSYAudioFGMSamusSpecialLw),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0044),
	ftMotionCommandWaitAsync(43),
	ftMotionCommandSubroutine(dSamusMainMotion_0x005C),
	ftMotionCommandWaitAsync(49),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0074),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1EBC[] = {
	ftMotionCommandEnd(),
};
