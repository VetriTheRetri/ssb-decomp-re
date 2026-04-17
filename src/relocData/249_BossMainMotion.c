/* ftMotionCommand script data for relocData file 249 (BossMainMotion) */
/* File size: 2480 bytes (0x9B0) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>
#include <gm/gmdef.h>
#if defined(REGION_JP)

u8 dBossMainMotion[2480] = {
	#include <BossMainMotion/jp_raw.data.inc.c>
};

#else  /* REGION_US */

u32 dBossMainMotion_0x0000[] = {
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x0004[] = {
	ftMotionCommandWait(30),
	ftMotionCommandMakeAttackColl(0, 0, 20, 16, 1, 0, 750, 0, 0, -280, 361, 90, 0, 3, 1, 2, 6, 70),
	ftMotionPlayFGM(nSYAudioFGMBladeSwing4),
	ftMotionCommandWait(11),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x002C[] = {
	ftMotionCommandWait(30),
	ftMotionCommandMakeAttackColl(0, 0, 20, 12, 1, 0, 500, 0, 0, 0, 361, 100, 0, 3, 1, 2, 1, 16),
	ftMotionCommandMakeAttackColl(1, 0, 20, 12, 1, 0, 500, 0, -500, 0, 361, 100, 0, 3, 1, 2, 1, 16),
	ftMotionPlayFGM(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(11),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x0068[] = {
	ftMotionCommandWaitAsync(26),
	ftMotionCommandWaitAsync(50),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialHiStart),
	ftMotionCommandMakeAttackColl(0, 0, 7, 16, 1, 1, 600, 0, 500, 0, -80, 100, 0, 3, 1, 2, 3, 30),
	ftMotionCommandLoopBegin(49),
	ftMotionCommandEffect(7, 28, 0, 0, 500, 0, 250, 250, 250),
	ftMotionCommandWait(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWaitAsync(100),
	ftMotionCommandMakeAttackColl(0, 0, 20, 12, 1, 0, 750, 0, 300, -105, 361, 100, 0, 3, 10, 2, 1, 16),
	ftMotionCommandMakeAttackColl(1, 0, 20, 12, 1, 0, 750, 0, -100, -105, 361, 100, 0, 3, 10, 2, 1, 16),
	ftMotionCommandSetColAnim(nGMColAnimFighterBossOkuhikouki,, 0)),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialHiFly),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x00EC[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterBossOkupunch,, 0)),
	ftMotionPlayFGM(nSYAudioFGMSectorAmbient1),
	ftMotionCommandMakeAttackColl(0, 0, 20, 16, 1, 0, 800, 0, 0, 0, 90, 100, 0, 3, 20, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 11, 16, 1, 0, 300, 0, 0, 0, 90, 100, 0, 3, 20, 2, 1, 30),
	ftMotionCommandMakeAttackColl(2, 0, 28, 16, 1, 0, 300, 0, 0, 0, 90, 100, 0, 3, 20, 2, 1, 30),
	ftMotionCommandWaitAsync(120),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x0148[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterBossOkuhikouki,, 30)),
	ftMotionPlayFGM(nSYAudioFGMSectorAmbient2),
	ftMotionCommandMakeAttackColl(0, 0, 20, 12, 1, 0, 700, 0, 300, -105, 361, 100, 0, 3, 10, 2, 1, 16),
	ftMotionCommandMakeAttackColl(1, 0, 20, 12, 1, 0, 700, 0, -100, -105, 361, 100, 0, 3, 10, 2, 1, 16),
	ftMotionCommandMakeAttackColl(2, 0, 19, 12, 1, 0, 230, 100, 0, 0, 361, 100, 0, 3, 10, 2, 1, 16),
	ftMotionCommandWait(60),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x0198[] = {
	ftMotionCommandWaitAsync(13),
	ftMotionPlayFGM(nSYAudioFGMSamusSpecialHi),
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x01A4[] = {
	ftMotionCommandWaitAsync(13),
	ftMotionCommandEffect(19, 19, 0, 300, 0, 0, 0, 0, 0),
};

u32 dBossMainMotion_0x01B8[] = {
	ftMotionCommandMakeAttackColl(0, 0, 19, 8, 1, 0, 350, 170, 0, 0, -60, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 8, 1, 0, 350, 170, 0, 0, -60, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 20, 6, 1, 0, 500, 0, 300, -105, -40, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 20, 6, 1, 0, 500, 0, -100, -105, -40, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandEffect(19, 19, 0, 300, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMSamusSpecialNShootS),
	ftMotionCommandWait(19),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandMakeAttackColl(0, 0, 15, 8, 1, 0, 350, 170, 0, 0, -60, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 19, 8, 1, 0, 350, 170, 0, 0, -60, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 20, 6, 1, 0, 500, 0, 300, -105, -40, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 20, 6, 1, 0, 500, 0, -100, -105, -40, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandEffect(15, 19, 0, 300, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMSamusSpecialNShootS),
	ftMotionCommandWait(19),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandGoto(dBossMainMotion_0x01B8),
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x02A4[] = {
	ftMotionCommandMakeAttackColl(0, 0, 15, 6, 1, 0, 350, 170, 0, 0, -60, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 19, 6, 1, 0, 350, 170, 0, 0, -60, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 20, 6, 1, 0, 500, 0, 300, -105, -40, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 20, 6, 1, 0, 500, 0, -100, -105, -40, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandEffect(15, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(13),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(14),
	ftMotionCommandEffect(15, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialHiFly),
	ftMotionCommandMakeAttackColl(0, 0, 15, 18, 1, 1, 500, 170, 0, 0, 361, 80, 0, 3, 18, 2, 3, 60),
	ftMotionCommandLoopBegin(6),
	ftMotionCommandEffect(15, 31, 0, 180, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandLoopEnd(),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x035C[] = {
	ftMotionCommandEffect(12, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMPikachuElectric4),
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x0374[] = {
	ftMotionPlayFGM(nSYAudioFGMPikachuElectric4),
};

u32 dBossMainMotion_0x0378[] = {
	ftMotionCommandEffect(20, 17, 0, 0, 0, 0, 500, 500, 500),
	ftMotionCommandWait(2),
	ftMotionCommandWait(2),
	ftMotionCommandGoto(dBossMainMotion_0x0378),
	ftMotionCommandEffect(0, 34, 0, 0, 0, 0, 300, 300, 300),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMDonkeySlap1),
	ftMotionCommandMakeAttackColl(0, 0, 20, 16, 1, 2, 700, 0, 0, 0, 10, 100, 100, 3, 20, 2, 4, 0),
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(96),
	ftMotionPlayFGM(nSYAudioFGMBladeSwing1),
	ftMotionCommandWait(21),
	ftMotionPlayFGM(nSYAudioFGMBladeSwing1),
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x03EC[] = {
	ftMotionCommandMakeAttackColl(0, 0, 20, 8, 1, 0, 400, 0, 0, 0, -90, 100, 200, 3, 1, 2, 1, 0),
	ftMotionCommandEffect(12, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMBladeSwing4),
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x0418[] = {
	ftMotionPlayFGM(nSYAudioFGMBombHeiWalkStart),
	ftMotionCommandLoopBegin(22),
	ftMotionCommandEffect(15, 31, 0, 180, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x043C[] = {
	ftMotionCommandWaitAsync(26),
	ftMotionCommandMakeAttackColl(0, 0, 15, 8, 1, 0, 600, 200, 0, 0, 100, 100, 60, 3, 26, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 6, 1, 0, 500, 0, 0, 0, -40, 100, 80, 3, 1, 1, 1, 0),
	ftMotionPlayFGM(nSYAudioFGMBladeSwing3),
	ftMotionCommandWait(6),
	ftMotionCommandEffect(15, 31, 0, 180, 0, 0, 0, 0, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(14),
	ftMotionCommandMakeAttackColl(0, 0, 15, 18, 1, 0, 600, 200, 0, 0, 361, 90, 0, 3, 26, 2, 1, 60),
	ftMotionCommandMakeAttackColl(1, 0, 20, 6, 1, 0, 500, 0, 0, 0, -40, 90, 0, 3, 1, 1, 1, 0),
	ftMotionPlayFGM(nSYAudioFGMBladeSwing3),
	ftMotionCommandWait(6),
	ftMotionCommandEffect(15, 31, 0, 180, 0, 0, 0, 0, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x04D0[] = {
	ftMotionCommandEffect(15, 41, 0, 220, 0, 0, 0, 0, 0),
	ftMotionCommandWait(16),
	ftMotionCommandGoto(dBossMainMotion_0x04D0),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandMakeAttackColl(2, 0, 20, 4, 1, 0, 500, 0, 300, -105, -95, 100, 200, 3, 1, 2, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 20, 4, 1, 0, 500, 0, -100, -105, -95, 100, 200, 3, 1, 2, 1, 0),
	ftMotionPlayFGM(nSYAudioFGMUnkSwoosh1),
	ftMotionCommandWaitAsync(90),
	ftMotionPlayFGM(nSYAudioFGMUnkSwoosh1),
	ftMotionCommandWaitAsync(100),
	ftMotionCommandLoopBegin(20),
	ftMotionCommandMakeAttackColl(0, 1, 0, 1, 1, 3, 320, 0, 0, 180, 180, 100, 5, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 1, 0, 1, 1, 3, 320, 0, 0, -180, 180, 100, 5, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(2, 1, 20, 1, 1, 0, 500, 0, 300, -105, -100, 100, 200, 3, 1, 2, 1, 0),
	ftMotionCommandMakeAttackColl(3, 1, 20, 1, 1, 0, 500, 0, -100, -105, -100, 100, 200, 3, 1, 2, 1, 0),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandEffect(0, 17, 0, 0, 0, 0, 300, 300, 300),
	ftMotionCommandLoopEnd(),
	ftMotionCommandMakeAttackColl(0, 0, 0, 5, 1, 0, 300, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 80),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(173),
	ftMotionCommandEffect(15, 31, 0, 180, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMLightSwingS),
	ftMotionCommandWaitAsync(192),
	ftMotionCommandEffect(15, 13, 0, 180, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMLightSwingM),
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x05EC[] = {
	ftMotionCommandWaitAsync(29),
	ftMotionCommandEffect(0, 22, 0, 0, 0, -180, 0, 0, 0),
	ftMotionPlayFGM(19),
	ftMotionCommandWaitAsync(62),
	ftMotionCommandMakeAttackColl(0, 1, 20, 20, 1, 0, 600, 0, 300, -105, 361, 100, 0, 3, 20, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 1, 20, 20, 1, 0, 600, 0, -100, -105, 361, 100, 0, 3, 20, 2, 1, 0),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMBladeSwing4),
	ftMotionCommandLoopBegin(17),
	ftMotionCommandEffect(7, 28, 0, 0, 500, 0, 210, 210, 210),
	ftMotionCommandWait(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWaitAsync(80),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(107),
	ftMotionPlayFGM(nSYAudioFGMKirbySpecialLwLanding),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -400, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x0694[] = {
	ftMotionCommandWaitAsync(25),
	ftMotionCommandEffect(15, 31, 0, 220, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(19, 31, 0, 220, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMBladeDraw),
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x06C0[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterBossYubideppou3,, 0)),
	ftMotionCommandEffect(15, 28, 0, 220, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(19, 28, 0, 220, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMBossBullet),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandEffect(15, 17, 0, 380, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(19, 17, 0, 380, 0, 0, 0, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x0728[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterBossYubideppou2,, 0)),
};

u32 dBossMainMotion_0x072C[] = {
	ftMotionCommandEffect(-1, 32, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopBegin(8),
	ftMotionCommandEffect(15, 31, 0, 380, 0, 0, 220, 220, 220),
	ftMotionCommandWait(1),
	ftMotionCommandEffect(19, 31, 0, 380, 0, 0, 220, 220, 220),
	ftMotionCommandWait(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dBossMainMotion_0x072C),
	0x01EA0B2E,
};

u32 dBossMainMotion_0x0778[] = {
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x077C[] = {
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x0780[] = {
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x0784[] = {
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x0788[] = {
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x078C[] = {
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x0790[] = {
	0x000A0000,
};

u32 dBossMainMotion_0x0794[] = {
	0xFFF6000A,
	0x00285A40,
};

u32 dBossMainMotion_0x079C[] = {
	0x1901400A,
	0x0140093C,
};

u32 dBossMainMotion_0x07A4[] = {
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x07A8[] = {
	0xFFFF0B2E,
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x07B0[] = {
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x07B4[] = {
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x07B8[] = {
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x07BC[] = {
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x07C0[] = {
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x07C4[] = {
	0x000A0000,
};

u32 dBossMainMotion_0x07C8[] = {
	0xFFF6000A,
	0x00285A40,
};

u32 dBossMainMotion_0x07D0[] = {
	0x1901400A,
	0x0140093C,
};

u32 dBossMainMotion_0x07D8[] = {
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x07DC[] = {
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x07E0[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterBossOkupunch,, 0)),
	ftMotionPlayFGM(nSYAudioFGMSectorAmbient1),
	ftMotionCommandMakeAttackColl(0, 1, 20, 16, 1, 0, 800, 0, 300, -105, 100, 100, 0, 3, 20, 2, 1, 40),
	ftMotionCommandMakeAttackColl(1, 1, 20, 16, 1, 0, 800, 0, -100, -105, 100, 100, 0, 3, 20, 2, 1, 40),
	ftMotionCommandWaitAsync(70),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x0828[] = {
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -400, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x0860[] = {
	ftMotionPlayFGM(nSYAudioFGMKirbySpecialLwLanding),
	ftMotionPlayFGM(nSYAudioFGMSectorAmbient1),
	ftMotionCommandMakeAttackColl(0, 0, 20, 1, 1, 0, 800, 0, 300, -105, -90, 100, 220, 3, 1, 1, 6, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 800, 0, -100, -105, -90, 100, 220, 3, 1, 1, 6, 0),
	ftMotionCommandWaitAsync(58),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandMakeAttackColl(0, 0, 20, 16, 1, 0, 800, 0, 300, -105, 90, 70, 0, 3, 25, 2, 6, 120),
	ftMotionCommandMakeAttackColl(1, 0, 20, 16, 1, 0, 800, 0, -100, -105, 90, 70, 0, 3, 25, 2, 6, 120),
	ftMotionCommandEffect(0, 22, 0, 0, 0, -400, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 400, 0, 0, 0),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMExplodeL),
	ftMotionCommandWaitAsync(70),
	ftMotionCommandEffect(0, 22, 0, -500, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 500, 0, 0, 0, 0, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dBossMainMotion_0x0924[] = {
	ftMotionCommandEffect(20, 31, 0, 0, 0, 0, 400, 400, 400),
	ftMotionCommandEffect(20, 31, 0, 0, 0, 0, 400, 400, 400),
	ftMotionCommandWait(1),
	ftMotionCommandGoto(dBossMainMotion_0x0924),
};

u32 dBossMainMotion_0x0950[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterDonkeySpecialNEnd,, 0)),
	ftMotionCommandEffect(20, 29, 0, 0, 0, 0, 300, 300, 300),
	ftMotionCommandWait(1),
	ftMotionCommandGoto(dBossMainMotion_0x0950),
	ftMotionCommandWaitAsync(120),
	ftMotionPlayFGM(493),
	ftMotionCommandWaitAsync(410),
	ftMotionCommandWait(118),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, -100, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMUnkGate1),
	ftMotionPlayFGM(nSYAudioFGMKirbySpecialLwLanding),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

#endif  /* REGION_US */
