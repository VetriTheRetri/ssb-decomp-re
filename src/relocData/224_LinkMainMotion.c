/* ftMotionCommand script data for relocData file 224 (LinkMainMotion) */
/* File size: 7920 bytes (0x1EF0) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>
#include <gm/gmdef.h>

u32 dLinkMainMotion_0x0000[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandWait(6),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWait(1),
	ftMotionCommandReturn(),
};

u32 dLinkMainMotion_0x0014[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSubroutine(dLinkMainMotion_0x0000),
	ftMotionCommandWait(30),
	ftMotionCommandSubroutine(dLinkMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandSubroutine(dLinkMainMotion_0x0000),
	ftMotionCommandWait(50),
	ftMotionCommandGoto(dLinkMainMotion_0x0014),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x004C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0054[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMLinkDash),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x007C[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMLinkFoot),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(nSYAudioFGMLinkFoot),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dLinkMainMotion_0x007C),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x00D4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x00E4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0118[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0128[] = {
	ftMotionPlayFGM(nSYAudioFGMGroundGrind3),
	ftMotionPlayVoice(nSYAudioVoiceLinkJump),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0144[] = {
	ftMotionPlayFGM(nSYAudioFGMUnkGrind5),
	ftMotionPlayVoice(nSYAudioVoiceLinkJumpAerial),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x016C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMLinkLanding),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0188[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMLinkLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x01A4[] = {
	ftMotionPlayVoice(nSYAudioVoiceLinkOttotto),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x01AC[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip5),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x01B4[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip5),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x01C8[] = {
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x01CC[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandReturn(),
};

u32 dLinkMainMotion_0x01D8[] = {
	ftMotionCommandSubroutine(dLinkMainMotion_0x01CC),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x01E4[] = {
	ftMotionCommandSubroutine(dLinkMainMotion_0x01CC),
	ftMotionCommandSetDamageThrown(0x0758), /* extern */
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x01F8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMLinkLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0214[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x021C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0224[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x022C[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0238[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0244[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWait(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0288[] = {
	ftMotionCommandGoto(dLinkMainMotion_0x0244),
};

u32 dLinkMainMotion_0x0290[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

u32 dLinkMainMotion_0x02B0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x02C8[] = {
	ftMotionCommandGoto(dLinkMainMotion_0x02B0),
};

u32 dLinkMainMotion_0x02D0[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandSubroutine(dLinkMainMotion_0x0290),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x02E0[] = {
	ftMotionCommandGoto(dLinkMainMotion_0x02D0),
	ftMotionCommandGoto(dLinkMainMotion_0x02D0),
	ftMotionCommandGoto(dLinkMainMotion_0x02D0),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing3),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 11, 8, 1, 3, 220, 0, 0, 200, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 8, 1, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing3),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 11, 6, 1, 3, 220, 0, 0, 200, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 6, 1, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x03CC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing3),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 11, 8, 0, 3, 220, 0, 0, 200, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 8, 0, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing3),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 11, 6, 0, 3, 220, 0, 0, 200, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 6, 0, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x049C[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 42, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceLinkGrunt2),
	ftMotionPlayFGM(nSYAudioFGMHeavySwing1),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x04D8[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, 42, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0514[] = {
	ftMotionCommandGoto(dLinkMainMotion_0x04D8),
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

u32 dLinkMainMotion_0x0558[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 15, 0, -100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0590[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x05A4[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x05BC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x05C4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x05CC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(12),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x05DC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x05E4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x05EC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(12),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x05FC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0604[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceLinkSmash1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 11, 4, 1, 3, 220, 0, 0, 200, 361, 100, 110, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 4, 1, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 2, 5, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing3),
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0680[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0688[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(nSYAudioVoiceLinkSmash1),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 11, 4, 1, 3, 220, 0, 0, 240, 361, 100, 110, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 4, 1, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 2, 5, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing3),
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0708[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0710[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(18),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0734[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x073C[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(36),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0760[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x077C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0794[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x07B0[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(31),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x07D8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0804[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dLinkMainMotion_0x07D8),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0840[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x086C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x089C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dLinkMainMotion_0x086C),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x08DC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x090C[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0934[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dLinkMainMotion_0x090C),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0968[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0990[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x09BC[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dLinkMainMotion_0x0990),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x09F4[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0A20[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0A3C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dLinkMainMotion_0x0A20),
};

u32 dLinkMainMotion_0x0A4C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0A68[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dLinkMainMotion_0x0A4C),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine(0x0000), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0AA4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSubroutine(0x0064), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(5),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0AD0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x00C8), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(47),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0B0C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine(0x012C), /* extern */
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(15),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0B48[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine(0x01A0), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0B64[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSubroutine(0x01F4), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0B80[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetColAnim(nGMColAnimFighterBat, 40),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0248), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(47),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0BB4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine(0x02B0), /* extern */
	ftMotionCommandWait(17),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0BE0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine(0x0324), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0BFC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSubroutine(0x0378), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0C18[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x03CC), /* extern */
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(47),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0C48[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine(0x0430), /* extern */
	ftMotionCommandWait(17),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0C68[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 11),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine(0x0494), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0C88[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 15),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSubroutine(0x04F8), /* extern */
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0CB0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 28),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x055C), /* extern */
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(47),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0CE8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 25),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine(0x05C0), /* extern */
	ftMotionCommandWait(17),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0D18[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(14),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0D28[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(14),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0D38[] = {
#if defined(REGION_JP)
	0xC4000007,
	0xBC000004,
	0xA0A00000,
	0xA05FFFFF,
	0x88000000,
	0x043B018D,
	0x04000010,
	0x18000000,
	0x90000000,
	0x0364034E,
	0x98007C00,
	0x00000000,
#else
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetModelPartID(20, 0),
	ftMotionCommandSetModelPartID(11, -1),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandSubroutine(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dLinkMainMotion_0x0D38),
#endif
};

u32 dLinkMainMotion_0x0D68[] = {
#if defined(REGION_JP)
	0x007800C8,
	0x00C800C8,
	0x80000003,
	0x98002800,
	0x00000000,
	0x007800C8,
	0x00C800C8,
	0x04000004,
	0x84000000,
	0x90000000,
	0x036F0358,
	0xAC000001,
	0xAC100001,
	0x9BF88800,
	0x00000000,
	0x00000000,
	0x00000000,
	0x74000003,
	0xAC000001,
	0xAC100001,
	0x90000000,
	0x03710358,
	0x90000000,
	0x038A0358,
	0x00000000,
	0x9BF88000,
	0x00000000,
#else
	ftMotionCommandEffect(0, 31, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 10, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dLinkMainMotion_0x0D68),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandGoto(dLinkMainMotion_0x0D68),
	ftMotionCommandGoto(dLinkMainMotion_0x0D68),
	ftMotionCommandEnd(),
#endif
};

u32 dLinkMainMotion_0x0DD4[] = {
#if defined(REGION_JP)
	ftMotionCommandEnd(),
	ftMotionCommandEnd(),
#else
	ftMotionCommandEffect(-1, 32, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
#else
#endif
};

u32 dLinkMainMotion_0x0DF8[] = {
	ftMotionCommandSetSlopeContour(3),
#if defined(REGION_JP)
	ftMotionPlayVoice(nSYAudioVoiceLinkFuraFura),
#else
	ftMotionCommandEnd(),
#endif
};

u32 dLinkMainMotion_0x0E00[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceLinkFuraFura),
#endif
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandLoopBegin(5),
	ftMotionCommandEffect(0, 40, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
#if defined(REGION_JP)
	ftMotionCommandGoto((void*)0x0394037E),
	ftMotionPlayInterruptableVoice(nSYAudioVoiceLinkFuraSleep),
	ftMotionCommandSetTexturePartID(2),
#else
	ftMotionCommandGoto(dLinkMainMotion_0x0E00),
#endif
};

u32 dLinkMainMotion_0x0E34[] = {
#if defined(REGION_JP)
	0xBC000003,
	0x98016800,
	0x00000082,
	0x000000C8,
	0x010400C8,
	0x0400000A,
	0x90000000,
	0x03A4038B,
	0xFFFFFFFF,
	0x00000006,
#else
	ftMotionPlayInterruptableVoice(nSYAudioVoiceLinkFuraSleep),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 90, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dLinkMainMotion_0x0E34),
#endif
};

#if defined(REGION_JP)
FTThrowHitDesc dLinkMainMotion_0x0E5C[] = {
	{ 0x00000169, 0x00000064, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000006 },
	{ 0x00000169, 0x00000064, 0x00000000, 0x00000000, 0x00000000, 0x30000000, 0x03DA0395 },
};
#else
FTThrowHitDesc dLinkMainMotion_0x0E5C[] = {
	{ -1, 6, 361, 100, 0, 0, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};
#endif

u32 dLinkMainMotion_0x0E94[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandSetThrow((u32)dLinkMainMotion_0x0E5C),
#endif
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetModelPartID(21, 0),
#if defined(REGION_JP)
	ftMotionCommandSetModelPartID(19, 524287),
#else
	ftMotionCommandSetModelPartID(19, -1),
#endif
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandSetModelPartID(18, 0),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandMakeRumble(16, 9),
	ftMotionCommandMakeAttackColl(0, 0, 35, 1, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -100, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMLinkCatchHookshot),
	ftMotionCommandSetFlag1(12),
	ftMotionCommandSetFlag2(5),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandEffect(35, 31, 0, 0, 0, 0, 90, 90, 90),
	ftMotionCommandWait(3),
	ftMotionCommandLoopEnd(),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandSetModelPartID(21, 0),
#else
#endif
};

u32 dLinkMainMotion_0x0F18[] = {
#if defined(REGION_JP)
	0xA09FFFFF,
	0xA0800000,
	0xA0880000,
	0xA0900000,
	0x00000000,
	0x00000034,
	0x0000000E,
#else
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandSetModelPartID(18, 0),
	ftMotionCommandEnd(),
#endif
};

#if defined(REGION_JP)
FTThrowHitDesc dLinkMainMotion_0x0F34[] = {
	{ 0x0000002D, 0x00000046, 0x00000000, 0x00000050, 0x00000000, 0xFFFFFFFF, 0x00000006 },
	{ 0x00000169, 0x00000064, 0x00000000, 0x00000000, 0x00000000, 0x30000000, 0x040F03CB },
};
#else
FTThrowHitDesc dLinkMainMotion_0x0F34[] = {
	{ 52, 14, 45, 70, 0, 80, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};
#endif

u32 dLinkMainMotion_0x0F6C[] = {
#if defined(REGION_JP)
	0xA0A80000,
	0xA09FFFFF,
	0x08000004,
	0x74000002,
	0x0800000C,
	0x0C040100,
	0x00F00082,
	0x00000000,
	0x5A450003,
	0x00220A00,
	0x0C840100,
	0x00C80000,
	0x00000000,
	0x5A450003,
	0x00220A00,
	0x50000000,
	0x3800001E,
	0x98787C00,
	0x00000000,
	0x00000000,
	0x00000000,
	0x98004C00,
	0x00000000,
	0xFF6A0000,
	0x00000000,
	0x9BF88400,
	0x00000000,
	0x00000000,
	0x00000000,
	0x04000008,
	0x18000000,
	0x5C000001,
	0x74000001,
	0x0800001E,
	0xA0AFFFFF,
	0xA0980000,
	0x00000000,
	0x00000034,
	0x00000010,
#else
	ftMotionCommandSetThrow((u32)dLinkMainMotion_0x0F34),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 32, 8, 0, 0, 240, 130, 0, 0, 361, 80, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 32, 8, 0, 0, 200, 0, 0, 0, 361, 80, 0, 3, 0, 1, 1, 20),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionPlayFGM(nSYAudioFGMKickL),
	ftMotionCommandEffect(15, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
#endif
};

#if defined(REGION_JP)
FTThrowHitDesc dLinkMainMotion_0x1008[] = {
	{ 0x0000002D, 0x00000046, 0x00000000, 0x00000046, 0x00000000, 0xFFFFFFFF, 0x00000008 },
	{ 0x00000169, 0x00000064, 0x00000000, 0x00000000, 0x00000000, 0x30000000, 0x04440400 },
};
#else
FTThrowHitDesc dLinkMainMotion_0x1008[] = {
	{ 52, 16, 45, 70, 0, 70, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};
#endif

u32 dLinkMainMotion_0x1040[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandSetThrow((u32)dLinkMainMotion_0x1008),
#endif
	ftMotionCommandSetModelPartID(21, 0),
#if defined(REGION_JP)
	ftMotionCommandSetModelPartID(19, 524287),
#else
	ftMotionCommandSetModelPartID(19, -1),
#endif
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 27, 8, 0, 0, 240, 130, 0, 0, 361, 80, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 27, 8, 0, 0, 200, 0, 0, 0, 361, 80, 0, 3, 0, 1, 1, 20),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionPlayFGM(nSYAudioFGMKickL),
	ftMotionCommandEffect(35, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(30),
#if defined(REGION_JP)
	ftMotionCommandSetModelPartID(21, 524287),
#else
	ftMotionCommandSetModelPartID(21, -1),
#endif
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandSubroutine((void*)0x043E01AB),
#else
#endif
};

u32 dLinkMainMotion_0x10F0[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandSubroutine(0x06AC), /* extern */
#endif
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandSubroutine((void*)0x044101B1),
#else
#endif
};

u32 dLinkMainMotion_0x10FC[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandSubroutine(0x06C4), /* extern */
#endif
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandSubroutine((void*)0x044601B3),
#else
#endif
};

u32 dLinkMainMotion_0x1108[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandSubroutine(0x06CC), /* extern */
#endif
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandSubroutine((void*)0x04490073),
#else
#endif
};

u32 dLinkMainMotion_0x1114[] = {
	ftMotionCommandSubroutine(dLinkMainMotion_0x01CC),
#if defined(REGION_JP)
#else
	ftMotionCommandSubroutine(0x06F0), /* extern */
#endif
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandSubroutine((void*)0x050C0073),
#else
#endif
};

u32 dLinkMainMotion_0x1128[] = {
	ftMotionCommandSubroutine(dLinkMainMotion_0x01CC),
#if defined(REGION_JP)
#else
	ftMotionCommandSubroutine(0x070C), /* extern */
#endif
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(12),
#else
#endif
};

u32 dLinkMainMotion_0x113C[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(12),
#endif
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionPlayVoice(nSYAudioVoiceLinkSmash1),
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
#else
#endif
};

u32 dLinkMainMotion_0x1174[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
#endif
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 11, 5, 1, 3, 220, 0, 0, 250, 361, 50, 0, 3, 0, 0, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 5, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(12),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
#else
#endif
};

u32 dLinkMainMotion_0x11DC[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
#endif
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 11, 3, 1, 3, 220, 0, 0, 250, 361, 50, 0, 3, 0, 0, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 3, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandWaitAsync(14),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
#else
#endif
};

u32 dLinkMainMotion_0x1244[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
#endif
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 11, 4, 1, 3, 220, 0, 0, 250, 361, 100, 0, 3, 0, 1, 5, 6),
	ftMotionCommandMakeAttackColl(1, 0, 10, 4, 1, 3, 160, 0, 0, 0, 361, 100, 0, 3, 0, 1, 5, 6),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioVoiceLinkJumpAerial),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
#else
#endif
};

u32 dLinkMainMotion_0x12A8[] = {
	ftMotionCommandSetSlopeContour(3),
#if defined(REGION_JP)
	ftMotionCommandWaitAsync(2),
#else
	ftMotionCommandEnd(),
#endif
};

u32 dLinkMainMotion_0x12B0[] = {
#if defined(REGION_JP)
	0xCC000000,
	0x08000003,
	0x0C016033,
	0x00DC0000,
	0x0000010E,
	0x5A432003,
	0x002A0400,
	0x0C814033,
	0x00A00000,
	0x00000000,
	0x5A432003,
	0x002A0400,
	0x4C0000FA,
	0x04000002,
	0x18000000,
	0x58000001,
	0x04000002,
	0xCC03FFFF,
	0x08000009,
	0xCC000000,
	0x0800000A,
	0x0C016033,
	0x00DC0000,
	0x0000010E,
	0x5A432003,
	0x002A0400,
	0x0C814033,
	0x00A00000,
	0x00000000,
	0x5A432003,
	0x002A0400,
	0x4C0000FA,
	0x04000002,
	0x18000000,
	0x58000001,
	0x04000002,
	0xCC03FFFF,
	0x08000010,
	0xCC000000,
	0x08000011,
	0x0C016033,
	0x00DC0000,
	0x0000010E,
	0x5A432003,
	0x002A0400,
	0x0C814033,
	0x00A00000,
	0x00000000,
	0x5A432003,
	0x002A0400,
	0x4C0000FA,
	0x04000002,
	0x18000000,
	0x58000001,
	0x04000002,
	0xCC03FFFF,
	0x08000017,
	0xCC000000,
	0x08000018,
	0x0C016033,
	0x00DC0000,
	0x0000010E,
	0x5A432003,
	0x002A0400,
	0x0C814033,
	0x00A00000,
	0x00000000,
	0x5A432003,
	0x002A0400,
	0x4C0000FA,
	0x04000002,
	0x18000000,
	0x58000001,
	0x04000002,
	0xCC03FFFF,
	0x0800001E,
	0xCC000000,
	0x0800001F,
	0x0C016033,
	0x00DC0000,
	0x0000010E,
	0x5A432003,
	0x002A0400,
	0x0C814033,
	0x00A00000,
	0x00000000,
	0x5A432003,
	0x002A0400,
	0x4C0000FA,
	0x04000002,
	0x18000000,
	0x94000000,
	0x58000001,
	0x04000002,
	0xCC03FFFF,
	0x90000000,
	0x073A04AA,
	0x00000000,
	0xBC000003,
	0x98587C00,
#else
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 11, 1, 1, 3, 220, 0, 0, 270, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 1, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandMakeAttackColl(0, 0, 11, 1, 1, 3, 220, 0, 0, 270, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 1, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandMakeAttackColl(0, 0, 11, 1, 1, 3, 220, 0, 0, 270, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 1, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(23),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandMakeAttackColl(0, 0, 11, 1, 1, 3, 220, 0, 0, 270, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 1, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(31),
	ftMotionCommandMakeAttackColl(0, 0, 11, 1, 1, 3, 220, 0, 0, 270, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 1, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandPauseScript(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandGoto(dLinkMainMotion_0x12B0),
	ftMotionCommandEnd(),
#endif
};

u32 dLinkMainMotion_0x1440[] = {
#if defined(REGION_JP)
	0x003C0000,
	0x00000000,
	0x00000000,
	0x00000000,
	0xBC000003,
	0x98587C00,
#else
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(11, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
#endif
};

u32 dLinkMainMotion_0x1458[] = {
#if defined(REGION_JP)
	0x00000000,
	0x00B4005A,
	0x005A005A,
	0x08000006,
	0xBC000004,
	0x08000007,
	0xCC000000,
	0x08000008,
	0x0C0161D3,
	0x00DC0000,
	0x000000BE,
	0x5A464003,
	0x004A0000,
	0x0C814213,
	0x00B40000,
	0x00000000,
	0x5A464003,
	0x004A0500,
	0x98004C00,
	0x00000000,
	0x00000000,
	0x00000000,
	0x4C0000F8,
	0x04000004,
	0x0C016153,
	0x00DC0000,
	0x000000BE,
	0x5A464003,
	0x004A0000,
	0x0C814173,
	0x00B40000,
	0x00000000,
	0x5A464003,
	0x004A0280,
	0x04000016,
	0x18000000,
	0xBC000003,
	0x04000002,
	0xCC03FFFF,
	0x00000000,
	0xBC000003,
	0x0800000E,
#else
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 11, 14, 1, 3, 220, 0, 0, 190, 361, 100, 0, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 16, 1, 3, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 10),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 11, 10, 1, 3, 220, 0, 0, 190, 361, 100, 0, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 11, 1, 3, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 5),
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
#endif
};

u32 dLinkMainMotion_0x1500[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(14),
#endif
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionPlayVoice(nSYAudioVoiceLinkJumpAerial),
	ftMotionCommandMakeAttackColl(0, 0, 11, 18, 1, 3, 260, 0, 0, 280, 361, 100, 0, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 17, 1, 3, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 0),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -100, 0, 80, 100),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandWait(2),
	ftMotionCommandEffect(0, 31, 0, 0, 300, 400, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(7),
#else
#endif
};

u32 dLinkMainMotion_0x1578[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(7),
#endif
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(8),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 11, 15, 1, 3, 240, 0, 0, 260, 90, 100, 0, 3, 0, 2, 5, 20),
	ftMotionCommandMakeAttackColl(1, 0, 10, 15, 1, 3, 180, 0, 0, 0, 90, 100, 0, 3, 0, 2, 5, 20),
#else
	ftMotionCommandMakeAttackColl(0, 0, 11, 10, 1, 3, 200, 0, 0, 240, 79, 100, 0, 3, 0, 2, 5, 20),
	ftMotionCommandMakeAttackColl(1, 0, 10, 10, 1, 3, 160, 0, 0, 0, 79, 100, 0, 3, 0, 2, 5, 20),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing3),
	ftMotionCommandWait(9),
	ftMotionCommandEffect(0, 31, 0, 0, 60, -360, 0, 0, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
#else
#endif
};

u32 dLinkMainMotion_0x15D8[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
#endif
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 11, 12, 1, 3, 240, 0, 0, 250, 80, 85, 0, 3, 0, 1, 5, 30),
	ftMotionCommandMakeAttackColl(1, 0, 10, 12, 1, 3, 180, 0, 0, 0, 80, 85, 0, 3, 0, 1, 5, 30),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing3),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandWait(6),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetSlopeContour(3),
#else
#endif
};

u32 dLinkMainMotion_0x1648[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetSlopeContour(3),
#endif
	ftMotionCommandWaitAsync(5),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandMakeAttackColl(0, 0, 11, 20, 1, 3, 280, 0, 0, 270, 50, 100, 0, 3, 0, 1, 5, 30),
	ftMotionCommandMakeAttackColl(1, 0, 11, 20, 1, 3, 280, 0, 0, 130, 50, 100, 0, 3, 0, 1, 5, 30),
	ftMotionCommandMakeAttackColl(2, 0, 10, 20, 1, 3, 200, 0, 0, 0, 50, 100, 0, 3, 0, 1, 5, 30),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWait(3),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 11, 12, 1, 3, 240, 0, 0, 270, 361, 100, 0, 3, 0, 1, 5, 20),
	ftMotionCommandMakeAttackColl(1, 0, 11, 12, 1, 3, 240, 0, 0, 130, 361, 100, 0, 3, 0, 1, 5, 20),
	ftMotionCommandMakeAttackColl(2, 0, 10, 12, 1, 3, 180, 0, 0, 0, 361, 100, 0, 3, 0, 1, 5, 20),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandWaitAsync(37),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
#else
#endif
};

u32 dLinkMainMotion_0x1724[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
#endif
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(11),
	ftMotionPlayVoice(nSYAudioVoiceLinkSmash1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 11, 8, 1, 3, 240, 0, 0, 180, 120, 100, 80, 3, 0, 0, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 8, 1, 3, 240, 0, 0, 0, 100, 100, 80, 3, 0, 0, 5, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 11, 7, 1, 3, 240, 0, 0, 180, 120, 100, 80, 3, 0, 0, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 7, 1, 3, 240, 0, 0, 0, 100, 100, 80, 3, 0, 0, 5, 0),
#endif
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 11, 8, 1, 3, 220, 0, 0, 180, 80, 100, 30, 3, 0, 0, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 8, 1, 3, 160, 0, 0, 0, 80, 100, 30, 3, 0, 0, 5, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 11, 7, 1, 3, 220, 0, 0, 180, 80, 100, 30, 3, 0, 0, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 7, 1, 3, 160, 0, 0, 0, 80, 100, 30, 3, 0, 0, 5, 0),
#endif
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 11, 4, 1, 3, 380, 0, 0, 180, 80, 100, 25, 3, 0, 0, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 4, 1, 3, 200, 0, 0, 0, 80, 100, 25, 3, 0, 0, 5, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 11, 3, 1, 3, 380, 0, 0, 180, 80, 100, 25, 3, 0, 0, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 3, 1, 3, 200, 0, 0, 0, 80, 100, 25, 3, 0, 0, 5, 0),
#endif
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandMakeAttackColl(0, 0, 11, 12, 1, 3, 380, 0, 0, 180, 90, 90, 0, 3, 0, 2, 5, 30),
	ftMotionCommandMakeAttackColl(1, 0, 10, 12, 1, 3, 200, 0, 0, 0, 90, 90, 0, 3, 0, 2, 5, 30),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
#else
#endif
};

u32 dLinkMainMotion_0x1898[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
#endif
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandEffect(0, 15, 0, 0, 0, 150, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 220, 0, 0, 240, 40, 100, 0, 3, 0, 2, 5, 35),
#else
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 220, 0, 0, 260, 40, 100, 0, 3, 0, 2, 5, 35),
#endif
	ftMotionCommandMakeAttackColl(1, 0, 10, 16, 1, 3, 150, 0, 0, 0, 75, 100, 0, 3, 0, 2, 5, 35),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 220, 0, 0, 240, 40, 100, 0, 3, 0, 2, 5, 35),
#else
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 220, 0, 0, 260, 40, 100, 0, 3, 0, 2, 5, 35),
#endif
	ftMotionCommandMakeAttackColl(1, 0, 10, 16, 1, 3, 150, 0, 0, 0, 75, 100, 0, 3, 0, 2, 5, 35),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandWaitAsync(42),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
#else
#endif
};

u32 dLinkMainMotion_0x1984[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
#endif
	ftMotionCommandMakeAttackColl(0, 0, 32, 10, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 1, 1, 15),
	ftMotionCommandMakeAttackColl(1, 0, 27, 10, 1, 0, 240, 60, 0, 0, 361, 100, 0, 3, 0, 1, 1, 15),
	ftMotionCommandMakeAttackColl(2, 0, 5, 10, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 15),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 32, 8, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 0, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 27, 8, 1, 0, 240, 60, 0, 0, 361, 100, 0, 3, 0, 0, 1, 10),
	ftMotionCommandMakeAttackColl(2, 0, 5, 8, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 0, 1, 10),
	ftMotionCommandWait(24),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandSetFlag1(50),
	ftMotionCommandWaitAsync(14),
#else
#endif
};

u32 dLinkMainMotion_0x1A1C[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandSetFlag1(50),
	ftMotionCommandWaitAsync(14),
#endif
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandMakeAttackColl(0, 0, 11, 20, 1, 3, 280, 0, 0, 250, 361, 100, 0, 3, 0, 2, 5, 5),
	ftMotionCommandMakeAttackColl(1, 0, 10, 20, 1, 3, 220, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 5),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 11, 12, 1, 3, 180, 0, 0, 250, 361, 100, 0, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 12, 1, 3, 150, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandWait(17),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionPlayFGM(nSYAudioFGMLinkLanding),
	ftMotionCommandEnd(),
#else
#endif
};

u32 dLinkMainMotion_0x1AB0[] = {
#if defined(REGION_JP)
	ftMotionCommandSetFlag1(50),
	ftMotionCommandWaitAsync(6),
#else
	ftMotionPlayFGM(nSYAudioFGMLinkLanding),
	ftMotionCommandEnd(),
#endif
};

u32 dLinkMainMotion_0x1AB8[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandSetFlag1(50),
	ftMotionCommandWaitAsync(6),
#endif
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandMakeAttackColl(0, 0, 27, 10, 1, 0, 280, 10, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 27, 10, 1, 0, 280, 90, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 10, 1, 0, 310, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 32, 10, 1, 0, 280, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(1, 0, 32, 10, 1, 0, 280, 90, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(2, 0, 5, 10, 1, 0, 310, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(9),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAfterImage(0, 0),
#else
#endif
};

u32 dLinkMainMotion_0x1B6C[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAfterImage(0, 0),
#endif
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 360, 0, 0, 100, 70, 100, 0, 3, 0, 2, 5, 5),
#else
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 300, 0, 0, 100, 70, 100, 0, 3, 0, 2, 5, 5),
#endif
	ftMotionCommandMakeAttackColl(1, 0, 10, 16, 1, 3, 200, 0, 0, 0, 70, 100, 0, 3, 0, 2, 5, 5),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandWait(44),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAfterImage(0, 0),
#else
#endif
};

u32 dLinkMainMotion_0x1BD4[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAfterImage(0, 0),
#endif
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetFlag1(30),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 11, 18, 1, 3, 360, 0, 0, 100, 361, 100, 0, 3, 0, 2, 5, 30),
	ftMotionCommandMakeAttackColl(1, 0, 10, 18, 1, 3, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 30),
#else
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 300, 0, 0, 100, 361, 100, 0, 3, 0, 2, 5, 25),
	ftMotionCommandMakeAttackColl(1, 0, 10, 16, 1, 3, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 25),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetModelPartID(21, 0),
#if defined(REGION_JP)
	ftMotionCommandSetModelPartID(19, 524287),
#else
	ftMotionCommandSetModelPartID(19, -1),
#endif
	ftMotionCommandHideItem(0),
	ftMotionCommandWaitAsync(65),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandSetAfterImage(0, 262143),
#else
	ftMotionCommandSetAfterImage(0, -1),
#endif
	ftMotionCommandWait(12),
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandHideItem(1),
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandHideItem(0),
	ftMotionCommandMakeRumble(0, 9),
#else
#endif
};

u32 dLinkMainMotion_0x1C54[] = {
#if defined(REGION_JP)
	0xA0A80000,
	0xA09FFFFF,
	0x38000119,
	0x9BF88400,
	0x00000000,
	0x00000000,
	0x00000000,
	0x98007C00,
	0x003C0000,
	0x00000000,
	0x00000000,
	0x98005800,
	0x00000000,
	0x00000000,
	0x00000000,
	0x08000028,
	0xA4000000,
	0xC0000001,
	0x00000000,
	0x38000048,
	0x98003400,
#else
	ftMotionCommandHideItem(0),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionPlayFGM(nSYAudioFGMLinkDeadSlam),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandHideItem(1),
	ftMotionCommandEnd(),
#endif
};

u32 dLinkMainMotion_0x1CA8[] = {
#if defined(REGION_JP)
#else
	ftMotionPlayFGM(nSYAudioFGMLinkLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandEnd(),
	ftMotionCommandEnd(),
	ftMotionCommandEnd(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandMakeRumble(60, 7),
#else
#endif
};

u32 dLinkMainMotion_0x1CC0[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandWaitAsync(30),
	ftMotionCommandMakeRumble(60, 7),
#endif
	ftMotionPlayFGM(nSYAudioFGMLinkAppear),
	ftMotionCommandSetModelPartID(20, 0),
#if defined(REGION_JP)
	ftMotionCommandSetModelPartID(11, 524287),
#else
	ftMotionCommandSetModelPartID(11, -1),
#endif
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWaitAsync(87),
#if defined(REGION_JP)
	ftMotionCommandSetModelPartID(20, 524287),
#else
	ftMotionCommandSetModelPartID(20, -1),
#endif
	ftMotionCommandSetModelPartID(11, 0),
	ftMotionPlayFGM(nSYAudioFGMBladeDraw),
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandGoto((void*)0xFFFF072E),
#else
#endif
};

u32 dLinkMainMotion_0x1CEC[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandGoto(dLinkMainMotion_0x1CC0),
#endif
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSetModelPartID(21, 0),
#else
#endif
};

u32 dLinkMainMotion_0x1CF8[] = {
#if defined(REGION_JP)
	ftMotionCommandSetModelPartID(19, 524287),
#else
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
#endif
	ftMotionCommandWaitAsync(29),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionPlayFGM(nSYAudioFGMLinkSpecialLwGet),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(19, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
#else
#endif
};

u32 dLinkMainMotion_0x1D2C[] = {
#if defined(REGION_JP)
	ftMotionCommandSetModelPartID(11, 524287),
#else
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetModelPartID(11, -1),
#endif
	ftMotionCommandSetModelPartID(20, 0),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetModelPartID(11, 1),
	ftMotionCommandWaitAsync(26),
#if defined(REGION_JP)
	ftMotionCommandSetModelPartID(11, 524287),
#else
	ftMotionCommandSetModelPartID(11, -1),
#endif
	ftMotionPlayVoice(nSYAudioVoiceLinkSmash1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(10, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(38),
#if defined(REGION_JP)
	ftMotionCommandSetModelPartID(20, 524287),
#else
	ftMotionCommandSetModelPartID(20, -1),
#endif
	ftMotionCommandSetModelPartID(11, 0),
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetModelPartID(11, 524287),
#else
#endif
};

u32 dLinkMainMotion_0x1D88[] = {
#if defined(REGION_JP)
#else
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetModelPartID(11, -1),
#endif
	ftMotionCommandSetModelPartID(20, 0),
	ftMotionCommandWaitAsync(38),
#if defined(REGION_JP)
	ftMotionCommandSetModelPartID(20, 524287),
#else
	ftMotionCommandSetModelPartID(20, -1),
#endif
	ftMotionCommandSetModelPartID(11, 0),
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandMakeRumble(0, 9),
	ftMotionPlayFGM(nSYAudioFGMLinkSpecialNGet),
#else
#endif
};

u32 dLinkMainMotion_0x1DA4[] = {
#if defined(REGION_JP)
	0xA05FFFFF,
	0xA0A00000,
	0xA0580001,
	0x0800000C,
	0xA0A7FFFF,
	0xA05FFFFF,
	0xA0580000,
	0x00000000,
	0x98003400,
	0x00000000,
#else
	ftMotionCommandMakeRumble(0, 9),
	ftMotionPlayFGM(nSYAudioFGMLinkSpecialNGet),
	ftMotionCommandSetModelPartID(11, -1),
	ftMotionCommandSetModelPartID(20, 0),
	ftMotionCommandSetModelPartID(11, 1),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetModelPartID(20, -1),
	ftMotionCommandSetModelPartID(11, -1),
	ftMotionCommandSetModelPartID(11, 0),
	ftMotionCommandEnd(),
#endif
};

u32 dLinkMainMotion_0x1DCC[] = {
#if defined(REGION_JP)
	ftMotionCommandEnd(),
	ftMotionCommandEnd(),
#else
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionPlayFGM(nSYAudioFGMLinkSpecialHi),
	ftMotionPlayVoice(nSYAudioVoiceLinkSpecialHi),
	ftMotionCommandSetColAnim(nGMColAnimFighterSamusSpecialNEnd, 50),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetFlag2(13),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 100, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 150, 0, 0, 0),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 200, 0, 0, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 250, 0, 0, 0),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 300, 0, 0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 300, 0, 0, 300, 361, 100, 0, 3, 0, 2, 5, 30),
	ftMotionCommandMakeAttackColl(1, 0, 10, 16, 1, 3, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 30),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 11, 8, 1, 3, 180, 0, 0, 300, 361, 100, 0, 3, 0, 1, 5, 10),
	ftMotionCommandMakeAttackColl(1, 0, 10, 8, 1, 3, 140, 0, 0, 0, 361, 100, 0, 3, 0, 1, 5, 10),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag2(3),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetFlag2(4),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetFlag2(13),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandEnd(),
	ftMotionCommandEnd(),
#else
#endif
};

u32 dLinkMainMotion_0x1EEC[] = {
	ftMotionCommandEnd(),
};
