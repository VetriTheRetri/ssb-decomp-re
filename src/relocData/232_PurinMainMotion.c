/* ftMotionCommand script data for relocData file 232 (PurinMainMotion) */
/* File size: 6016 bytes (0x1780) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>
#include <gm/gmdef.h>

u32 dPurinMainMotion_0x0000[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandWait(2),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandWait(3),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandWait(2),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandWait(1),
	ftMotionCommandReturn(),
};

u32 dPurinMainMotion_0x0034[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSubroutine(dPurinMainMotion_0x0000),
	ftMotionCommandWait(90),
	ftMotionCommandSubroutine(dPurinMainMotion_0x0000),
	ftMotionCommandWait(10),
	ftMotionCommandSubroutine(dPurinMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandGoto(dPurinMainMotion_0x0034),
	ftMotionPlayFGM(nSYAudioFGMPurinDash),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0088[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMPurinFoot),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(nSYAudioFGMPurinFoot),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dPurinMainMotion_0x0088),
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x00E0[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x00EC[] = {
	ftMotionCommandEffect(0, 16, 0, 0, 0, 120, 0, 0, 0),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x011C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x012C[] = {
	ftMotionPlayFGM(nSYAudioFGMInflateJump8),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0144[] = {
	ftMotionPlayFGM(nSYAudioFGMInflateJump3),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0164[] = {
	ftMotionPlayFGM(nSYAudioFGMInflateJump3),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0184[] = {
	ftMotionPlayFGM(nSYAudioFGMInflateJump3),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x01A4[] = {
	ftMotionPlayFGM(nSYAudioFGMInflateJump3),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x01C4[] = {
	ftMotionPlayFGM(nSYAudioFGMInflateJump3),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x01DC[] = {
	ftMotionPlayFGM(nSYAudioFGMPurinLanding),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x01F4[] = {
	ftMotionPlayFGM(nSYAudioFGMPurinLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x020C[] = {
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0210[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip9),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0218[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip9),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x022C[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandReturn(),
};

u32 dPurinMainMotion_0x0238[] = {
	ftMotionCommandSubroutine(dPurinMainMotion_0x022C),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0244[] = {
	ftMotionCommandSubroutine(dPurinMainMotion_0x022C),
	ftMotionCommandSetDamageThrown(0x0758), /* extern */
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0258[] = {
	ftMotionPlayFGM(nSYAudioFGMPurinLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0270[] = {
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0274[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x027C[] = {
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0280[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x028C[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0298[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandWait(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x02E4[] = {
	ftMotionCommandGoto(dPurinMainMotion_0x0298),
};

u32 dPurinMainMotion_0x02EC[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

u32 dPurinMainMotion_0x030C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0324[] = {
	ftMotionCommandGoto(dPurinMainMotion_0x030C),
};

u32 dPurinMainMotion_0x032C[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandSubroutine(dPurinMainMotion_0x02EC),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x033C[] = {
	ftMotionCommandGoto(dPurinMainMotion_0x032C),
	ftMotionCommandGoto(dPurinMainMotion_0x032C),
	ftMotionCommandGoto(dPurinMainMotion_0x032C),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 23, 6, 0, 0, 300, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 23, 6, 0, 0, 300, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x03B0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 10, 6, 1, 0, 260, 100, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(2, 0, 28, 6, 1, 0, 190, 160, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x040C[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoicePurinSmash2),
	ftMotionPlayFGM(nSYAudioFGMHeavySwing1),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0448[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoicePurinSmash2),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0488[] = {
	ftMotionCommandGoto(dPurinMainMotion_0x0448),
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

u32 dPurinMainMotion_0x04CC[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 15, 0, -100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0504[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0510[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0520[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0528[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0530[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(10),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0540[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0548[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0550[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0558[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0568[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 28, 4, 0, 0, 180, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 28, 4, 0, 0, 150, 200, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x05C4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x05D4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 0, 4, 0, 0, 300, 0, 180, 300, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0628[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0630[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(40),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0654[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x065C[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(40),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0680[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x068C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(41),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x06A0[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x06AC[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x06C8[] = {
	ftMotionCommandWaitAsync(14),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x06E4[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dPurinMainMotion_0x06C8),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x070C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0728[] = {
	ftMotionCommandWaitAsync(14),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0748[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dPurinMainMotion_0x0728),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0774[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0794[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x07B0[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dPurinMainMotion_0x0794),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x07D8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x07F4[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0814[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dPurinMainMotion_0x07F4),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0840[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0860[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0874[] = {
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dPurinMainMotion_0x0860),
};

u32 dPurinMainMotion_0x0880[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0894[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dPurinMainMotion_0x0880),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0000), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x08D4[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0064), /* extern */
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0908[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSubroutine(0x00C8), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0940[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(1),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x012C), /* extern */
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(21),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0974[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x01A0), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0998[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x01F4), /* extern */
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x09BC[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetColAnim(nGMColAnimFighterBat, 40),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSubroutine(0x0248), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x09F4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x02B0), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0A18[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0324), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0A44[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0378), /* extern */
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0A70[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSubroutine(0x03CC), /* extern */
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0A9C[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0430), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0AC8[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 13),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0494), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0AF0[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 17),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x04F8), /* extern */
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0B20[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 32),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSubroutine(0x055C), /* extern */
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0B54[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 26),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x05C0), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0B7C[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(1),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0B9C[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(1),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0BBC[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandSubroutine(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dPurinMainMotion_0x0BBC),
};

u32 dPurinMainMotion_0x0BE4[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterUnknown1, 0),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(10),
	ftMotionCommandEffect(0, 10, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dPurinMainMotion_0x0BE4),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, 34, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionPlayVoice(nSYAudioVoicePurinDeadUp),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dPurinMainMotion_0x0BE4),
	ftMotionCommandGoto(dPurinMainMotion_0x0BE4),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0C68[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0C70[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoicePurinFuraFura),
	ftMotionCommandLoopBegin(120),
	ftMotionCommandEffect(0, 40, 0, 0, 130, 0, 240, 240, 240),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dPurinMainMotion_0x0C70),
};

u32 dPurinMainMotion_0x0CA4[] = {
	ftMotionPlayInterruptableVoice(nSYAudioVoicePurinFuraSleep),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 90, 0, 0, 130, 0, 240, 240, 240),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dPurinMainMotion_0x0CA4),
};

FTThrowHitDesc dPurinMainMotion_0x0CD0[] = {
	{ -1, 6, 361, 100, 0, 0, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

u32 dPurinMainMotion_0x0D08[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandSetThrow((u32)dPurinMainMotion_0x0CD0),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 29, 1, 1, 0, 240, 0, 0, -30, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 29, 1, 1, 0, 160, 0, 0, -160, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
FTThrowHitDesc dPurinMainMotion_0x0D64[] = {
	{ 0x00000036, 0x0000000E, 0x0000005A, 0x00000032, 0x00000000, 0x0000005A, 0x00000000 },
	{ 0xFFFFFFFF, 0x00000006, 0x00000169, 0x00000064, 0x00000000, 0x00000000, 0x00000000 },
};
#else
FTThrowHitDesc dPurinMainMotion_0x0D64[] = {
	{ 55, 14, 90, 50, 0, 90, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};
#endif

u32 dPurinMainMotion_0x0D9C[] = {
	ftMotionCommandSetThrow((u32)dPurinMainMotion_0x0D64),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(8),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandEffect(0, 41, 0, 0, 200, 280, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, 41, 0, 0, 0, 0, 200, 0, 200),
	ftMotionCommandWait(2),
	ftMotionCommandEffect(0, 41, 0, 0, 300, 0, 200, 0, 200),
	ftMotionCommandWait(2),
	ftMotionCommandEffect(0, 41, 0, 0, 600, 0, 200, 0, 200),
	ftMotionCommandWait(2),
	ftMotionCommandEffect(0, 41, 0, 0, 900, 0, 200, 0, 200),
	ftMotionCommandWait(2),
	ftMotionCommandEffect(0, 41, 0, 0, 1200, 0, 200, 0, 200),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dPurinMainMotion_0x0E54[] = {
	{ 52, 16, 45, 70, 0, 80, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

u32 dPurinMainMotion_0x0E8C[] = {
	ftMotionCommandSetThrow((u32)dPurinMainMotion_0x0E54),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingLw1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(19),
	ftMotionPlayFGM(nSYAudioFGMDonkeySlap2),
	ftMotionCommandEffect(29, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 15, 0, 0, 0, 150, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, -280, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0F00[] = {
	ftMotionCommandSubroutine(0x06AC), /* extern */
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0F0C[] = {
	ftMotionCommandSubroutine(0x06C4), /* extern */
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0F18[] = {
	ftMotionCommandSubroutine(0x06CC), /* extern */
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0F24[] = {
	ftMotionCommandSubroutine(dPurinMainMotion_0x022C),
	ftMotionCommandSubroutine(0x06F0), /* extern */
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0F38[] = {
	ftMotionCommandSubroutine(dPurinMainMotion_0x022C),
	ftMotionCommandSubroutine(0x070C), /* extern */
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0F4C[] = {
	ftMotionPlayVoice(nSYAudioVoicePurinAppeal),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWait(10),
	ftMotionCommandSubroutine(dPurinMainMotion_0x0000),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(dPurinMainMotion_0x0000),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0F78[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackColl(0, 0, 11, 3, 1, 0, 210, -50, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 11, 3, 1, 0, 210, 70, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0FBC[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackColl(0, 0, 15, 4, 1, 0, 210, -50, 0, 0, 70, 50, 0, 3, 0, 1, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 15, 4, 1, 0, 210, 70, 0, 0, 70, 50, 0, 3, 0, 1, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0FFC[] = {
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x1000[] = {
	ftMotionCommandGoto(dPurinMainMotion_0x1000),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x100C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionPlayVoice(nSYAudioVoicePurinSmash1),
	ftMotionCommandMakeAttackColl(0, 0, 0, 10, 1, 0, 260, 0, 150, 200, 361, 100, 0, 3, 1, 2, 1, 10),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandSetAttackCollDamage(0, 8),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandWait(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x1084[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 23, 8, 1, 0, 250, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 5),
	ftMotionCommandMakeAttackColl(1, 0, 23, 8, 1, 0, 250, 150, 0, 0, 361, 100, 0, 3, 0, 1, 1, 5),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x10C0[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 23, 8, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 5),
	ftMotionCommandMakeAttackColl(1, 0, 23, 8, 1, 0, 200, 150, 0, 0, 361, 100, 0, 3, 0, 1, 1, 5),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x10FC[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 23, 8, 1, 0, 250, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 5),
	ftMotionCommandMakeAttackColl(1, 0, 23, 8, 1, 0, 250, 150, 0, 0, 361, 100, 0, 3, 0, 1, 1, 5),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x1138[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 28, 10, 1, 0, 280, 0, 0, 0, 85, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 28, 10, 1, 0, 320, 140, 0, 0, 85, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x1174[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandMakeAttackColl(0, 0, 23, 10, 1, 0, 200, 0, 0, 0, 70, 120, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 23, 10, 1, 0, 200, 140, 0, 0, 70, 120, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x11B4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 23, 16, 1, 0, 280, 0, 0, 0, 361, 120, 0, 3, 1, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 23, 16, 1, 0, 280, 140, 0, 0, 361, 120, 0, 3, 1, 2, 1, 10),
	ftMotionCommandEffect(21, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWait(3),
	ftMotionCommandSetAttackCollDamage(0, 10),
	ftMotionCommandSetAttackCollDamage(1, 10),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x122C[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 5, 18, 1, 0, 380, 0, 180, 0, 80, 130, 0, 3, 0, 2, 1, 22),
	ftMotionCommandMakeAttackColl(1, 0, 5, 18, 1, 0, 280, 0, 0, 0, 80, 130, 0, 3, 0, 2, 1, 22),
	ftMotionCommandEffect(26, 31, 0, 110, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 5, 10, 1, 0, 380, 0, 180, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 5, 10, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x12B8[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetHitStatusPartID(28, 3),
	ftMotionCommandSetHitStatusPartID(23, 3),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 28, 16, 1, 0, 260, 100, 0, 0, 40, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 23, 16, 1, 0, 260, 100, 0, 0, 40, 100, 0, 3, 0, 2, 1, 20),
#else
	ftMotionCommandMakeAttackColl(0, 0, 28, 16, 1, 0, 260, 200, 0, 0, 40, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 23, 16, 1, 0, 260, 200, 0, 0, 40, 100, 0, 3, 0, 2, 1, 20),
#endif
	ftMotionCommandMakeAttackColl(2, 0, 5, 16, 1, 0, 160, 100, 0, 0, 40, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandEffect(26, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(21, 31, 0, 90, 0, 0, 0, 0, 0),
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

u32 dPurinMainMotion_0x1364[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 5, 14, 1, 0, 220, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 23, 14, 1, 0, 260, 120, 0, 0, 361, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 5, 9, 1, 0, 210, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 23, 9, 1, 0, 260, 120, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(24),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x13D4[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 0, 13, 1, 0, 220, 0, 150, 220, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 0, 13, 1, 0, 270, 0, 150, 100, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 0, 9, 1, 0, 220, 0, 150, 220, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 9, 1, 0, 270, 0, 150, 100, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x1444[] = {
	ftMotionPlayFGM(nSYAudioFGMPurinLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x145C[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 26, 13, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 26, 13, 1, 0, 270, 150, 30, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 26, 9, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 26, 9, 1, 0, 270, 150, 30, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(6),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x14D0[] = {
	ftMotionPlayFGM(nSYAudioFGMPurinLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x14E8[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(40),
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 0, 230, 0, 0, 0, 70, 120, 0, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(9),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x1518[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 0, 3, 1, 0, 360, 0, -120, 100, -90, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 3, 1, 0, 360, 0, 0, 60, -90, 100, 30, 3, 0, 1, 0, 0),
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

u32 dPurinMainMotion_0x1580[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(nSYAudioFGMPurinLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 3, 1, 0, 360, 0, 0, 0, 80, 40, 0, 3, 0, 2, 1, 30),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(10),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x15C0[] = {
	ftMotionPlayFGM(nSYAudioFGMPurinLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x15E0[] = {
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetFlag1(1),
	ftMotionPlayFGM(nSYAudioFGMMBallOpen),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x15F8[] = {
	ftMotionCommandGoto(dPurinMainMotion_0x15E0),
	ftMotionCommandWaitAsync(12),
	ftMotionPlayFGM(nSYAudioFGMBossUnk2),
	ftMotionPlayVoice(nSYAudioVoicePurinSpecialN),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(15, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -120, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 15, 13, 1, 0, 310, -50, 0, 0, 120, 75, 0, 3, 20, 2, 6, 20),
	ftMotionCommandMakeAttackColl(1, 0, 15, 13, 1, 0, 310, 70, 0, 0, 120, 75, 0, 3, 20, 2, 6, 20),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x1674[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnk3),
	ftMotionPlayVoice(nSYAudioVoicePurinSpecialHi),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandMakeAttackColl(0, 0, 6, 0, 0, 6, 600, 0, 70, 0, 361, 100, 0, 2, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(10, 7),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandWait(8),
	ftMotionCommandSetAttackCollSize(0, 60),
	ftMotionCommandWaitAsync(69),
	ftMotionCommandSetAttackCollSize(0, 600),
	ftMotionCommandMakeRumble(10, 7),
	ftMotionCommandWait(8),
	ftMotionCommandSetAttackCollSize(0, 60),
	ftMotionCommandWaitAsync(113),
	ftMotionCommandSetAttackCollSize(0, 760),
	ftMotionCommandMakeRumble(10, 7),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandWait(5),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x16F4[] = {
	ftMotionCommandMakeRumble(30, 7),
	ftMotionPlayFGM(nSYAudioFGMCharacterUnk2),
	ftMotionPlayVoice(nSYAudioVoicePurinSpecialLwSleep),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(1),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 0, 14, 0, 0, 260, 0, 150, 0, 361, 140, 0, 3, 0, 2, 1, 20),
#else
	ftMotionCommandMakeAttackColl(0, 0, 0, 20, 0, 0, 260, 0, 150, 0, 361, 120, 0, 3, 0, 2, 7, 60),
#endif
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(180),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandWaitAsync(210),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionPlayVoice(nSYAudioVoicePurinSpecialLwWake),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(dPurinMainMotion_0x0000),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(dPurinMainMotion_0x0000),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x1778[] = {
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x177C[] = {
	ftMotionCommandEnd(),
};
