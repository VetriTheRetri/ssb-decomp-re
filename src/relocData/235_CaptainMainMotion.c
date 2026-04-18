/* ftMotionCommand script data for relocData file 235 (CaptainMainMotion) */
/* File size: 7600 bytes (0x1DB0) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>
#include <gm/gmsound.h>
#include <gm/gmdef.h>
u32 dCaptainMainMotion_0x0000[] = {
	0x001E0046,
};

u32 dCaptainMainMotion_0x0004[] = {
	0x00280028,
};

u32 dCaptainMainMotion_0x0008[] = {
	0x006400FA,
};

u32 dCaptainMainMotion_0x000C[] = {
	0x005000D2,
};

u32 dCaptainMainMotion_0x0010[] = {
	0x001E0046,
};

u32 dCaptainMainMotion_0x0014[] = {
	0x006400A0,
};

u32 dCaptainMainMotion_0x0018[] = {
	0x0000006E,
};

u32 dCaptainMainMotion_0x001C[] = {
	0x005000D2,
};

u32 dCaptainMainMotion_0x0020[] = {
	0x00140064,
};

u32 dCaptainMainMotion_0x0024[] = {
	0xFFF60050,
	0x00140064,
};

u32 dCaptainMainMotion_0x002C[] = {
	0x001E0046,
};

u32 dCaptainMainMotion_0x0030[] = {
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0034[] = {
	0x001E0046,
};

u32 dCaptainMainMotion_0x0038[] = {
	0x001E0046,
};

u32 dCaptainMainMotion_0x003C[] = {
	0x00280028,
};

u32 dCaptainMainMotion_0x0040[] = {
	0x00780104,
};

u32 dCaptainMainMotion_0x0044[] = {
	0x005000D2,
};

u32 dCaptainMainMotion_0x0048[] = {
	0x001E0046,
};

u32 dCaptainMainMotion_0x004C[] = {
	0x006400A0,
};

u32 dCaptainMainMotion_0x0050[] = {
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0054[] = {
	0x005000D2,
};

u32 dCaptainMainMotion_0x0058[] = {
	0x00140064,
};

u32 dCaptainMainMotion_0x005C[] = {
	0xFFF60050,
	0x00140064,
};

u32 dCaptainMainMotion_0x0064[] = {
	0x00320096,
};

u32 dCaptainMainMotion_0x0068[] = {
	0x006400FA,
};

u32 dCaptainMainMotion_0x006C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0074[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x007C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0084[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x008C[] = {
	ftMotionPlayFGM(nSYAudioFGMCaptainDash),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x00A4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(4),
	ftMotionPlayFGM(nSYAudioFGMCaptainFoot),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(10),
	ftMotionPlayFGM(nSYAudioFGMCaptainFoot),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dCaptainMainMotion_0x00A4),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(6),
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0104[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0114[] = {
	ftMotionCommandEffect(0, 16, 0, 0, 0, 100, 0, 0, 0),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0144[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0154[] = {
	ftMotionPlayFGM(nSYAudioFGMGroundGrind1),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(30),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0174[] = {
	ftMotionPlayFGM(nSYAudioFGMGroundGrind1),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandWait(30),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandSetModelPartID(10, 0),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x01A0[] = {
	ftMotionPlayVoice(nSYAudioVoiceCaptainJumpAerial),
	ftMotionPlayFGM(nSYAudioFGMUnkGrind3),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x01C8[] = {
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x01CC[] = {
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x01D0[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionPlayFGM(nSYAudioFGMCaptainLanding),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x01EC[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionPlayFGM(nSYAudioFGMCaptainLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0208[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip2),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0210[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip2),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0224[] = {
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0230[] = {
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x023C[] = {
	ftMotionPlayFGM(nSYAudioFGMCaptainLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0254[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandReturn(),
};

u32 dCaptainMainMotion_0x025C[] = {
	ftMotionCommandSubroutine(dCaptainMainMotion_0x0254),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0268[] = {
	ftMotionCommandSubroutine(dCaptainMainMotion_0x0254),
	ftMotionCommandSetDamageThrown(0x0758), /* extern */
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x027C[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0284[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x028C[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0294[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x02A0[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x02AC[] = {
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

u32 dCaptainMainMotion_0x02E8[] = {
	ftMotionCommandGoto(dCaptainMainMotion_0x02AC),
};

u32 dCaptainMainMotion_0x02F0[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

u32 dCaptainMainMotion_0x0310[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0328[] = {
	ftMotionCommandGoto(dCaptainMainMotion_0x0310),
};

u32 dCaptainMainMotion_0x0330[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandSubroutine(dCaptainMainMotion_0x02F0),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0340[] = {
	ftMotionCommandGoto(dCaptainMainMotion_0x0330),
	ftMotionCommandGoto(dCaptainMainMotion_0x0330),
	ftMotionCommandGoto(dCaptainMainMotion_0x0330),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 26, 6, 0, 0, 200, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 26, 6, 0, 0, 160, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandMakeAttackColl(0, 0, 26, 6, 0, 0, 200, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 26, 6, 0, 0, 160, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x03DC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 26, 6, 0, 0, 190, 160, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 26, 6, 0, 0, 160, 0, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 21, 6, 0, 0, 190, 160, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 21, 6, 0, 0, 160, 0, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0454[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceCaptainUnkQuick),
	ftMotionPlayFGM(nSYAudioFGMHeavySwing1),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0490[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceCaptainUnkQuick),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x04D0[] = {
	ftMotionCommandGoto(dCaptainMainMotion_0x0490),
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

u32 dCaptainMainMotion_0x0514[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 15, 0, -100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x054C[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x055C[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0570[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0578[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0580[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0588[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0590[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0598[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x05A0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x05A8[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(nSYAudioVoiceCaptainJumpAerial),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 28, 6, 0, 0, 270, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 26, 6, 0, 0, 240, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 6, 0, 0, 160, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0628[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0630[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(nSYAudioVoiceCaptainJumpAerial),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandMakeAttackColl(0, 0, 5, 4, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 4, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x069C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x06A4[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x06C8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x06D0[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x06F4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0704[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0714[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0724[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0740[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0760[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dCaptainMainMotion_0x0740),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0790[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x07B0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x07D4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dCaptainMainMotion_0x07B0),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0808[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x082C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0848[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dCaptainMainMotion_0x082C),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0870[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x088C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x08AC[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dCaptainMainMotion_0x088C),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x08D8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x08F8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0908[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dCaptainMainMotion_0x08F8),
};

u32 dCaptainMainMotion_0x0918[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0928[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dCaptainMainMotion_0x0918),
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

u32 dCaptainMainMotion_0x0964[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine(0x0064), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(6),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x09A0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSubroutine(0x00C8), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(11),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(45),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x09E0[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x012C), /* extern */
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(15),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0A10[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine(0x01A0), /* extern */
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0A2C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine(0x01F4), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0A58[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterBat, 40),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSubroutine(0x0248), /* extern */
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(45),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0A90[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x02B0), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0AB4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine(0x0324), /* extern */
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0AD0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine(0x0378), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0AFC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSubroutine(0x03CC), /* extern */
	ftMotionCommandWait(14),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(45),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0B28[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0430), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0B4C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 16),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine(0x0494), /* extern */
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0B6C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 13),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine(0x04F8), /* extern */
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0BA4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 36),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandSubroutine(0x055C), /* extern */
	ftMotionCommandWait(14),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(45),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0BDC[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 20),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x05C0), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0C04[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0C14[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0C24[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dCaptainMainMotion_0x0C24),
};

u32 dCaptainMainMotion_0x0C44[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 10, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dCaptainMainMotion_0x0C44),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceCaptainDamage),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dCaptainMainMotion_0x0C44),
	ftMotionCommandGoto(dCaptainMainMotion_0x0C44),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0CC8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0CD0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceCaptainFuraFura),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandLoopBegin(12),
	ftMotionCommandEffect(0, 40, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dCaptainMainMotion_0x0CD0),
};

u32 dCaptainMainMotion_0x0D00[] = {
	ftMotionPlayInterruptableVoice(nSYAudioVoiceCaptainFuraSleep),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 90, 0, 0, 150, 0, 240, 300, 240),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dCaptainMainMotion_0x0D00),
};

FTThrowHitDesc dCaptainMainMotion_0x0D28[] = {
	{ -1, 6, 361, 100, 0, 0, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

u32 dCaptainMainMotion_0x0D60[] = {
	ftMotionCommandSetThrow((u32)dCaptainMainMotion_0x0D28),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 29, 1, 1, 0, 300, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dCaptainMainMotion_0x0DA4[] = {
	{ 52, 12, 70, 50, 0, 100, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

u32 dCaptainMainMotion_0x0DDC[] = {
	ftMotionCommandSetThrow((u32)dCaptainMainMotion_0x0DA4),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(12),
	ftMotionPlayFGM(nSYAudioFGMDonkeySlap2),
	ftMotionCommandEffect(29, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 280, 0, 0, 0),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dCaptainMainMotion_0x0E50[] = {
	{ 52, 16, 361, 50, 0, 100, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

u32 dCaptainMainMotion_0x0E88[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandSetThrow((u32)dCaptainMainMotion_0x0E50),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 26, 10, 0, 0, 200, 200, 0, 0, 361, 80, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 0, 0, 140, 0, 0, 0, 361, 80, 0, 3, 0, 2, 1, 30),
	ftMotionPlayFGM(nSYAudioFGMKickL),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(26, 0, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0F18[] = {
	ftMotionCommandSubroutine(0x06AC), /* extern */
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0F24[] = {
	ftMotionCommandSubroutine(0x06C4), /* extern */
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0F30[] = {
	ftMotionCommandSubroutine(0x06CC), /* extern */
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0F3C[] = {
	ftMotionCommandSubroutine(dCaptainMainMotion_0x0254),
	ftMotionCommandSubroutine(0x06F0), /* extern */
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0F50[] = {
	ftMotionCommandSubroutine(dCaptainMainMotion_0x0254),
	ftMotionCommandSubroutine(0x070C), /* extern */
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0F64[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionPlayVoice(nSYAudioVoiceCaptainAppeal),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(50),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0F8C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackColl(0, 0, 9, 3, 1, 0, 180, 120, 0, 0, 361, 80, 0, 3, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 8, 3, 1, 0, 180, 60, 0, 0, 361, 80, 0, 3, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 8, 3, 1, 0, 180, -60, 0, 0, 361, 80, 0, 3, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x0FE8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 15, 3, 1, 0, 220, 120, 0, 0, 361, 80, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 3, 1, 0, 220, 30, 0, 0, 361, 80, 0, 3, 0, 2, 0, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 15, 3, 1, 0, 220, 120, 0, 0, 361, 80, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 3, 1, 0, 220, 30, 0, 0, 361, 80, 0, 3, 0, 1, 0, 0),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x1030[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(5),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 26, 4, 1, 0, 270, 120, 0, 0, 80, 30, 0, 3, 0, 2, 0, 40),
#else
	ftMotionCommandMakeAttackColl(0, 0, 26, 4, 1, 0, 270, 120, 0, 0, 80, 30, 0, 3, 0, 1, 1, 40),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x1064[] = {
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x1068[] = {
	ftMotionCommandMakeAttackColl(0, 0, 14, 1, 1, 0, 210, 0, 0, 0, 361, 70, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 1, 1, 0, 210, 220, 0, 0, 361, 70, 0, 3, 0, 1, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionPlayVoice(nSYAudioVoiceCaptainSmash2),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandReturn(),
};

u32 dCaptainMainMotion_0x10A4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(dCaptainMainMotion_0x1068),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSubroutine(dCaptainMainMotion_0x1068),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutine(dCaptainMainMotion_0x1068),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSubroutine(dCaptainMainMotion_0x1068),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(35),
	ftMotionCommandSubroutine(dCaptainMainMotion_0x1068),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dCaptainMainMotion_0x10A4),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x110C[] = {
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 14, 12, 1, 0, 220, 16, 0, 0, 361, 100, 0, 3, 1, 2, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandSetAttackCollDamage(0, 9),
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x1150[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(0, 0, 21, 15, 1, 0, 220, 200, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(1, 0, 21, 15, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(2, 0, 20, 15, 1, 0, 140, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x11A4[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(0, 0, 21, 14, 1, 0, 220, 200, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(1, 0, 21, 14, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(2, 0, 20, 14, 1, 0, 140, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x11F8[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(0, 0, 21, 13, 1, 0, 220, 200, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(1, 0, 21, 13, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(2, 0, 20, 13, 1, 0, 140, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x124C[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(0, 0, 21, 12, 1, 0, 220, 200, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(1, 0, 21, 12, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(2, 0, 20, 12, 1, 0, 140, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x12A0[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(0, 0, 21, 11, 1, 0, 220, 200, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(1, 0, 21, 11, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(2, 0, 20, 11, 1, 0, 140, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x12F4[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 26, 9, 1, 0, 240, -20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 26, 9, 1, 0, 240, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(10),
	ftMotionCommandMakeAttackColl(0, 1, 26, 14, 1, 0, 240, -20, 0, 0, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(1, 1, 26, 14, 1, 0, 240, 180, 0, 0, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x135C[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandMakeAttackColl(0, 0, 21, 11, 1, 0, 200, -40, 0, 0, 30, 80, 0, 3, 0, 1, 1, 25),
	ftMotionCommandMakeAttackColl(1, 0, 21, 11, 1, 0, 200, 180, 0, 0, 30, 80, 0, 3, 0, 1, 1, 25),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x13A8[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(8),
	ftMotionPlayVoice(nSYAudioVoiceCaptainAttackS4),
	ftMotionCommandEffect(26, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionPlayFGM(nSYAudioFGMFireShoot1),
	ftMotionCommandMakeAttackColl(0, 0, 26, 19, 1, 1, 360, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 26, 19, 1, 1, 360, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(2, 0, 5, 19, 1, 1, 260, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetColAnim(nGMColAnimFighterCaptainSpecialN, 8),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x1428[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(8),
	ftMotionPlayVoice(nSYAudioVoiceCaptainAttackS4),
	ftMotionCommandEffect(26, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionPlayFGM(nSYAudioFGMFireShoot1),
	ftMotionCommandMakeAttackColl(0, 0, 26, 18, 1, 1, 360, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 26, 18, 1, 1, 360, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(2, 0, 5, 18, 1, 1, 260, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetColAnim(nGMColAnimFighterCaptainSpecialN, 8),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x14A8[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(8),
	ftMotionPlayVoice(nSYAudioVoiceCaptainAttackS4),
	ftMotionCommandEffect(26, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionPlayFGM(nSYAudioFGMFireShoot1),
	ftMotionCommandMakeAttackColl(0, 0, 26, 17, 1, 1, 360, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 26, 17, 1, 1, 360, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(2, 0, 5, 17, 1, 1, 260, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetColAnim(nGMColAnimFighterCaptainSpecialN, 8),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x1528[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 17, 1, 0, 380, 160, 0, 0, 95, 40, 0, 3, 0, 2, 0, 90),
	ftMotionCommandMakeAttackColl(2, 0, 14, 17, 1, 0, 280, 0, 0, 0, 95, 40, 0, 3, 0, 2, 0, 90),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x158C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandMakeAttackColl(0, 0, 26, 16, 1, 0, 210, -130, 0, 0, 60, 100, 0, 3, 0, 2, 1, 25),
	ftMotionCommandMakeAttackColl(1, 0, 26, 16, 1, 0, 300, 300, 0, 0, 60, 100, 0, 3, 0, 2, 1, 25),
	ftMotionCommandEffect(26, 31, 0, 220, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(6),
	ftMotionCommandMakeAttackColl(0, 0, 26, 14, 1, 0, 210, -130, 0, 0, 60, 100, 0, 3, 0, 1, 1, 25),
	ftMotionCommandMakeAttackColl(1, 0, 26, 14, 1, 0, 300, 300, 0, 0, 60, 100, 0, 3, 0, 1, 1, 25),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(31),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x1634[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 20, 16, 1, 0, 240, -30, 0, 0, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 26, 16, 1, 0, 280, 50, 0, 0, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 20, 13, 1, 0, 240, -30, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 26, 13, 1, 0, 280, 50, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(20),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x16A4[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 26, 10, 1, 0, 210, -60, 0, 0, 361, 80, 0, 3, 0, 2, 1, 5),
	ftMotionCommandMakeAttackColl(1, 0, 26, 10, 1, 0, 240, 220, 0, 0, 361, 80, 0, 3, 0, 2, 1, 5),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandMakeAttackColl(0, 1, 21, 12, 1, 0, 210, -60, 0, 0, 361, 80, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(1, 1, 21, 12, 1, 0, 240, 220, 0, 0, 361, 80, 0, 3, 0, 2, 1, 20),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x1720[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(nSYAudioFGMCaptainLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x1744[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetFlag1(100),
	ftMotionCommandMakeAttackColl(0, 0, 8, 16, 1, 0, 280, 180, 0, 0, 361, 100, 0, 3, 0, 2, 0, 10),
	ftMotionCommandMakeAttackColl(1, 0, 8, 16, 1, 0, 240, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 8, 16, 1, 0, 250, 150, 0, 0, 361, 100, 0, 3, 0, 2, 0, 10),
	ftMotionCommandMakeAttackColl(1, 0, 8, 16, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 10),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(10),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x17B8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMCaptainLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x17D4[] = {
	ftMotionCommandSetFlag1(50),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandMakeAttackColl(0, 0, 21, 16, 1, 0, 220, -60, 0, 0, 80, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 21, 16, 1, 0, 260, 220, 0, 0, 80, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 21, 16, 1, 0, 220, -60, 0, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 21, 16, 1, 0, 260, 220, 0, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 21, 16, 1, 0, 220, -60, 0, 0, 20, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 21, 16, 1, 0, 260, 220, 0, 0, 20, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(5),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x1874[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetFlag1(40),
	ftMotionCommandMakeAttackColl(0, 0, 26, 14, 1, 0, 330, 0, 120, 0, -80, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 5, 14, 1, 0, 190, 0, 30, 0, -80, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(18),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x18B8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMCaptainLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x18D4[] = {
	ftMotionPlayFGM(nSYAudioFGMCaptainAppearCar1),
	ftMotionCommandWait(30),
	ftMotionCommandMakeRumble(50, 7),
	ftMotionCommandWait(20),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x18EC[] = {
	ftMotionCommandGoto(dCaptainMainMotion_0x18D4),
};

u32 dCaptainMainMotion_0x18F4[] = {
	ftMotionPlayFGM(nSYAudioFGMCaptainAppearCar2),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x18FC[] = {
	ftMotionCommandGoto(dCaptainMainMotion_0x18F4),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterCaptainSpecialN, 0),
	ftMotionPlayVoice(nSYAudioVoiceCaptainSpecialNFalcon),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(12),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandEffect(16, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(42),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 16, 24, 1, 0, 250, 100, 0, 0, 361, 120, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 14, 25, 1, 0, 200, 60, 0, 0, 361, 120, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(2, 0, 14, 26, 1, 0, 180, -60, 0, 0, 361, 120, 0, 3, 0, 2, 1, 30),
	ftMotionPlayFGM(nSYAudioFGMCaptainSpecialNPunch),
	ftMotionPlayVoice(nSYAudioVoiceCaptainSpecialNPunch),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandStopRumble(7),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x19D0[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetColAnim(nGMColAnimFighterCaptainSpecialN, 0),
	ftMotionPlayVoice(nSYAudioVoiceCaptainSpecialNFalcon),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandWait(12),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(16, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(42),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 16, 24, 1, 0, 320, 100, 0, 0, 361, 120, 0, 3, 4, 2, 1, 40),
	ftMotionCommandMakeAttackColl(1, 0, 14, 25, 1, 0, 270, 60, 0, 0, 361, 120, 0, 3, 4, 2, 1, 40),
	ftMotionCommandMakeAttackColl(2, 0, 14, 26, 1, 0, 240, -60, 0, 0, 361, 120, 0, 3, 4, 2, 1, 40),
	ftMotionPlayFGM(nSYAudioFGMCaptainSpecialNPunch),
	ftMotionPlayVoice(nSYAudioVoiceCaptainSpecialNPunch),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandStopRumble(7),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x1AB4[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetTexturePartID(6),
	ftMotionPlayVoice(nSYAudioVoiceCaptainSpecialLw),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMLightSwingL),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionPlayFGM(nSYAudioFGMCaptainSpecialNStart),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -140, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 21, 15, 1, 1, 220, 200, 0, 0, 361, 70, 0, 3, 4, 2, 1, 40),
	ftMotionCommandMakeAttackColl(1, 0, 21, 15, 1, 1, 200, 0, 0, 0, 361, 70, 0, 3, 4, 2, 1, 40),
	ftMotionCommandMakeAttackColl(2, 0, 20, 15, 1, 1, 140, 0, 0, 0, 361, 70, 0, 3, 4, 2, 1, 40),
	ftMotionCommandMakeRumble(20, 7),
	ftMotionCommandLoopBegin(5),
	ftMotionCommandEffect(0, 28, 0, 0, 200, 0, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetFlag1(2),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(4),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetFlag3(1),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -140, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x1BA0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCaptainDownBounce),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag3(1),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x1BC8[] = {
	ftMotionCommandMakeAttackColl(0, 0, 0, 12, 1, 0, 200, 0, 0, 140, 361, 20, 0, 3, 2, 2, 1, 60),
	ftMotionCommandMakeAttackColl(1, 0, 0, 12, 1, 0, 200, 0, 0, -140, 361, 20, 0, 3, 2, 2, 1, 60),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCaptainDownBounce),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x1C10[] = {
	ftMotionCommandGoto(dCaptainMainMotion_0x1AB4),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 29, 0, 0, 300, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCaptainDeadSlam),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dCaptainMainMotion_0x1C54[] = {
	{ -1, 20, 361, 82, 0, 30, 1 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

u32 dCaptainMainMotion_0x1C8C[] = {
	ftMotionCommandSetThrow((u32)dCaptainMainMotion_0x1C54),
	ftMotionCommandEffect(0, 71, 0, 0, 180, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandWaitAsync(13),
	ftMotionCommandSetFlag1(1),
	ftMotionPlayFGM(nSYAudioFGMCaptainSpecialHi),
	ftMotionCommandSetColAnim(nGMColAnimFighterCaptainSpecialHi, 0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 200, 0, 260, 180, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 300, 0, 260, 400, 361, 100, 0, 2, 0, 1, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollID(1),
	ftMotionCommandLoopBegin(10),
	ftMotionCommandEffect(28, 23, 0, 0, 0, 0, 180, 180, 180),
	ftMotionCommandWait(2),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWaitAsync(45),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEffect(0, 31, 0, 0, 260, 180, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x1D40[] = {
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandEffect(17, 38, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x1D64[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 29, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMExplodeL),
	ftMotionPlayVoice(nSYAudioVoiceCaptainSpecialHi),
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x1DA4[] = {
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x1DA8[] = {
	ftMotionCommandEnd(),
};

u32 dCaptainMainMotion_0x1DAC[] = {
	ftMotionCommandEnd(),
};

