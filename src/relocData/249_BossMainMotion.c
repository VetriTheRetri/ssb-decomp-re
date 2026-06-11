/* ftMotionCommand script data for relocData file 249 (BossMainMotion) */
/* File size: 2480 bytes (0x9B0) */

#include "relocdata_types.h"
extern u8 dBossModel_DObjDescs_0x2CB8[];
#include <ft/ftdef.h>
#include <ft/fttypes.h>
#include <gm/gmdef.h>
#include <gm/gmsound.h>
#include <ef/efdef.h>
#include <wp/wptypes.h>
ftMotionCommand dBossMainMotion_Default[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_Slap[] = {
	ftMotionCommandWait(30),
	ftMotionCommandMakeAttackColl(0, 0, 20, 16, 1, 0, 750, 0, 0, -280, 361, 90, 0, 3, 1, 2, 6, 70),
	ftMotionPlayFGM(nSYAudioFGMBladeSwing4),
	ftMotionCommandWait(11),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_Shoo[] = {
	ftMotionCommandWait(30),
	ftMotionCommandMakeAttackColl(0, 0, 20, 12, 1, 0, 500, 0, 0, 0, 361, 100, 0, 3, 1, 2, 1, 16),
	ftMotionCommandMakeAttackColl(1, 0, 20, 12, 1, 0, 500, 0, -500, 0, 361, 100, 0, 3, 1, 2, 1, 16),
	ftMotionPlayFGM(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(11),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_Launch[] = {
	ftMotionCommandWaitAsync(26),
	ftMotionCommandWaitAsync(50),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialHiStart),
	ftMotionCommandMakeAttackColl(0, 0, 7, 16, 1, 1, 600, 0, 500, 0, -80, 100, 0, 3, 1, 2, 3, 30),
	ftMotionCommandLoopBegin(49),
	ftMotionCommandEffect(7, nEFKindSparkleWhite, 0, 0, 500, 0, 250, 250, 250),
	ftMotionCommandWait(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWaitAsync(100),
	ftMotionCommandMakeAttackColl(0, 0, 20, 12, 1, 0, 750, 0, 300, -105, 361, 100, 0, 3, 10, 2, 1, 16),
	ftMotionCommandMakeAttackColl(1, 0, 20, 12, 1, 0, 750, 0, -100, -105, 361, 100, 0, 3, 10, 2, 1, 16),
	ftMotionCommandSetColAnim(nGMColAnimFighterBossOkuhikouki, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialHiFly),
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_Fly[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterBossOkupunch, 0),
	ftMotionPlayFGM(nSYAudioFGMSectorAmbient1),
	ftMotionCommandMakeAttackColl(0, 0, 20, 16, 1, 0, 800, 0, 0, 0, 90, 100, 0, 3, 20, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 11, 16, 1, 0, 300, 0, 0, 0, 90, 100, 0, 3, 20, 2, 1, 30),
	ftMotionCommandMakeAttackColl(2, 0, 28, 16, 1, 0, 300, 0, 0, 0, 90, 100, 0, 3, 20, 2, 1, 30),
	ftMotionCommandWaitAsync(120),
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_Landing[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterBossOkuhikouki, 30),
	ftMotionPlayFGM(nSYAudioFGMSectorAmbient2),
	ftMotionCommandMakeAttackColl(0, 0, 20, 12, 1, 0, 700, 0, 300, -105, 361, 100, 0, 3, 10, 2, 1, 16),
	ftMotionCommandMakeAttackColl(1, 0, 20, 12, 1, 0, 700, 0, -100, -105, 361, 100, 0, 3, 10, 2, 1, 16),
	ftMotionCommandMakeAttackColl(2, 0, 19, 12, 1, 0, 230, 100, 0, 0, 361, 100, 0, 3, 10, 2, 1, 16),
	ftMotionCommandWait(60),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_WalkStart[] = {
	ftMotionCommandWaitAsync(13),
	ftMotionPlayFGM(nSYAudioFGMSamusSpecialHi),
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_Walk[] = {
	ftMotionCommandWaitAsync(13),
	ftMotionCommandEffect(19, nEFKindDustDashSmall, 0, 300, 0, 0, 0, 0, 0),
};

ftMotionCommand dBossMainMotion_0x01B8[] = {
	ftMotionCommandMakeAttackColl(0, 0, 19, 8, 1, 0, 350, 170, 0, 0, -60, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 8, 1, 0, 350, 170, 0, 0, -60, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 20, 6, 1, 0, 500, 0, 300, -105, -40, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 20, 6, 1, 0, 500, 0, -100, -105, -40, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandEffect(19, nEFKindDustDashSmall, 0, 300, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMSamusSpecialNShootS),
	ftMotionCommandWait(19),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandMakeAttackColl(0, 0, 15, 8, 1, 0, 350, 170, 0, 0, -60, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 19, 8, 1, 0, 350, 170, 0, 0, -60, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 20, 6, 1, 0, 500, 0, 300, -105, -40, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 20, 6, 1, 0, 500, 0, -100, -105, -40, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandEffect(15, nEFKindDustDashSmall, 0, 300, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMSamusSpecialNShootS),
	ftMotionCommandWait(19),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandGoto(dBossMainMotion_0x01B8),
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_Flick[] = {
	ftMotionCommandMakeAttackColl(0, 0, 15, 6, 1, 0, 350, 170, 0, 0, -60, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 19, 6, 1, 0, 350, 170, 0, 0, -60, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 20, 6, 1, 0, 500, 0, 300, -105, -40, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 20, 6, 1, 0, 500, 0, -100, -105, -40, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(13),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(14),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialHiFly),
	ftMotionCommandMakeAttackColl(0, 0, 15, 18, 1, 1, 500, 170, 0, 0, 361, 80, 0, 3, 18, 2, 3, 60),
	ftMotionCommandLoopBegin(6),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 180, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandLoopEnd(),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_ChargeStart1[] = {
	ftMotionCommandEffect(12, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMPikachuElectric4),
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_ChargeStart2[] = {
	ftMotionPlayFGM(nSYAudioFGMPikachuElectric4),
};

ftMotionCommand dBossMainMotion_0x0378[] = {
	ftMotionCommandEffect(20, nEFKindDustExpandLarge, 0, 0, 0, 0, 500, 500, 500),
	ftMotionCommandWait(2),
	ftMotionCommandWait(2),
	ftMotionCommandGoto(dBossMainMotion_0x0378),
};

ftMotionCommand dBossMainMotion_0x0398[] = {
	ftMotionCommandEffect(0, nEFKindQuakeMag2, 0, 0, 0, 0, 300, 300, 300),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
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

ftMotionCommand dBossMainMotion_Punch1[] = {
	ftMotionCommandMakeAttackColl(0, 0, 20, 8, 1, 0, 400, 0, 0, 0, -90, 100, 200, 3, 1, 2, 1, 0),
	ftMotionCommandEffect(12, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMBladeSwing4),
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_PointStart[] = {
	ftMotionPlayFGM(nSYAudioFGMBombHeiWalkStart),
	ftMotionCommandLoopBegin(22),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 180, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_Poke[] = {
	ftMotionCommandWaitAsync(26),
	ftMotionCommandMakeAttackColl(0, 0, 15, 8, 1, 0, 600, 200, 0, 0, 100, 100, 60, 3, 26, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 6, 1, 0, 500, 0, 0, 0, -40, 100, 80, 3, 1, 1, 1, 0),
	ftMotionPlayFGM(nSYAudioFGMBladeSwing3),
	ftMotionCommandWait(6),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 180, 0, 0, 0, 0, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(14),
	ftMotionCommandMakeAttackColl(0, 0, 15, 18, 1, 0, 600, 200, 0, 0, 361, 90, 0, 3, 26, 2, 1, 60),
	ftMotionCommandMakeAttackColl(1, 0, 20, 6, 1, 0, 500, 0, 0, 0, -40, 90, 0, 3, 1, 1, 1, 0),
	ftMotionPlayFGM(nSYAudioFGMBladeSwing3),
	ftMotionCommandWait(6),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 180, 0, 0, 0, 0, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_Point[] = {
	ftMotionCommandEffect(15, nEFKindPsionic, 0, 220, 0, 0, 0, 0, 0),
	ftMotionCommandWait(16),
	ftMotionCommandGoto(dBossMainMotion_Point),
};

ftMotionCommand dBossMainMotion_0x04EC[] = {
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
	ftMotionCommandEffect(0, nEFKindDustExpandLarge, 0, 0, 0, 0, 300, 300, 300),
	ftMotionCommandLoopEnd(),
	ftMotionCommandMakeAttackColl(0, 0, 0, 5, 1, 0, 300, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 80),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(173),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 180, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMLightSwingS),
	ftMotionCommandWaitAsync(192),
	ftMotionCommandEffect(15, nEFKindDustHeavyDouble, 0, 180, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMLightSwingM),
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_Punch2[] = {
	ftMotionCommandWaitAsync(29),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, -180, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandWaitAsync(62),
	ftMotionCommandMakeAttackColl(0, 1, 20, 20, 1, 0, 600, 0, 300, -105, 361, 100, 0, 3, 20, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 1, 20, 20, 1, 0, 600, 0, -100, -105, 361, 100, 0, 3, 20, 2, 1, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMBladeSwing4),
	ftMotionCommandLoopBegin(17),
	ftMotionCommandEffect(7, nEFKindSparkleWhite, 0, 0, 500, 0, 210, 210, 210),
	ftMotionCommandWait(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWaitAsync(80),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(107),
	ftMotionPlayFGM(nSYAudioFGMKirbySpecialLwLanding),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -400, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_GunDraw[] = {
	ftMotionCommandWaitAsync(25),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 220, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(19, nEFKindSparkleWhiteScale, 0, 220, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMBladeDraw),
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_GunShoot[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterBossYubideppou3, 0),
	ftMotionCommandEffect(15, nEFKindSparkleWhite, 0, 220, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(19, nEFKindSparkleWhite, 0, 220, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMBossBullet),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandEffect(15, nEFKindDustExpandLarge, 0, 380, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(19, nEFKindDustExpandLarge, 0, 380, 0, 0, 0, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_GunAim[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterBossYubideppou2, 0),
};

ftMotionCommand dBossMainMotion_0x072C[] = {
	ftMotionCommandEffect(-1, nEFKindQuakeMag0, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopBegin(8),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 380, 0, 0, 220, 220, 220),
	ftMotionCommandWait(1),
	ftMotionCommandEffect(19, nEFKindSparkleWhiteScale, 0, 380, 0, 0, 220, 220, 220),
	ftMotionCommandWait(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dBossMainMotion_0x072C),
};

/* llBossMainMotionBulletNormalWeaponAttributes (52 bytes at offset 0x774) */
WPAttributes dBossMainMotion_0x0774 = {
	(void *)dBossModel_DObjDescs_0x2CB8,  /* data */
	NULL,                /* p_mobjsubs */
	NULL,                /* anim_joints */
	NULL,                /* p_matanim_joints */
	{ { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
	10, 0, -10, 10,      /* map_coll top/center/bottom/width */
	40,                  /* size              : 16 */
	361,                 /* angle             : 10 */
	100,                 /* knockback_scale   : 10 */
	5,                   /* damage            :  8 */
	0,                   /* element           :  4 */
	10,                  /* knockback_weight  : 10 */
	1,                   /* shield_damage     :  8 */
	1,                   /* attack_count      :  2 */
	0,                   /* can_setoff        :  1 */
	1,                   /* sfx               : 10 */
	1,                   /* priority          :  3 */
	0,                   /* can_rehit_item    :  1 */
	0,                   /* can_rehit_fighter :  1 */
	1,                   /* can_hop           :  1 */
	1,                   /* can_reflect       :  1 */
	1,                   /* can_absorb        :  1 */
	1,                   /* can_shield        :  1 */
	0,                   /* unused_0x2F_b6    :  1 */
	0,                   /* unused_0x2F_b7    :  1 */
	0,                   /* knockback_base    : 10 */
};

/* llBossMainMotionBulletHardWeaponAttributes (52 bytes at offset 0x7A8) */
WPAttributes dBossMainMotion_0x07A8 = {
	(void *)dBossModel_DObjDescs_0x2CB8,  /* data */
	NULL,                /* p_mobjsubs */
	NULL,                /* anim_joints */
	NULL,                /* p_matanim_joints */
	{ { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
	10, 0, -10, 10,      /* map_coll top/center/bottom/width */
	40,                  /* size              : 16 */
	361,                 /* angle             : 10 */
	100,                 /* knockback_scale   : 10 */
	5,                   /* damage            :  8 */
	0,                   /* element           :  4 */
	10,                  /* knockback_weight  : 10 */
	1,                   /* shield_damage     :  8 */
	1,                   /* attack_count      :  2 */
	0,                   /* can_setoff        :  1 */
	1,                   /* sfx               : 10 */
	1,                   /* priority          :  3 */
	0,                   /* can_rehit_item    :  1 */
	0,                   /* can_rehit_fighter :  1 */
	1,                   /* can_hop           :  1 */
	1,                   /* can_reflect       :  1 */
	1,                   /* can_absorb        :  1 */
	1,                   /* can_shield        :  1 */
	0,                   /* unused_0x2F_b6    :  1 */
	0,                   /* unused_0x2F_b7    :  1 */
	0,                   /* knockback_base    : 10 */
};

ftMotionCommand dBossMainMotion_SlamStart[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_Punch3[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterBossOkupunch, 0),
	ftMotionPlayFGM(nSYAudioFGMSectorAmbient1),
	ftMotionCommandMakeAttackColl(0, 1, 20, 16, 1, 0, 800, 0, 300, -105, 100, 100, 0, 3, 20, 2, 1, 40),
	ftMotionCommandMakeAttackColl(1, 1, 20, 16, 1, 0, 800, 0, -100, -105, 100, 100, 0, 3, 20, 2, 1, 40),
	ftMotionCommandWaitAsync(70),
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_PunchEnd[] = {
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -400, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_0x0860[] = {
	ftMotionPlayFGM(nSYAudioFGMKirbySpecialLwLanding),
	ftMotionPlayFGM(nSYAudioFGMSectorAmbient1),
	ftMotionCommandMakeAttackColl(0, 0, 20, 1, 1, 0, 800, 0, 300, -105, -90, 100, 220, 3, 1, 1, 6, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 800, 0, -100, -105, -90, 100, 220, 3, 1, 1, 6, 0),
	ftMotionCommandWaitAsync(58),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandMakeAttackColl(0, 0, 20, 16, 1, 0, 800, 0, 300, -105, 90, 70, 0, 3, 25, 2, 6, 120),
	ftMotionCommandMakeAttackColl(1, 0, 20, 16, 1, 0, 800, 0, -100, -105, 90, 70, 0, 3, 25, 2, 6, 120),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, -400, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 400, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMExplodeL),
	ftMotionCommandWaitAsync(70),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, -500, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 500, 0, 0, 0, 0, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dBossMainMotion_DyingStart[] = {
	ftMotionCommandEffect(20, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 400, 400, 400),
	ftMotionCommandEffect(20, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 400, 400, 400),
	ftMotionCommandWait(1),
	ftMotionCommandGoto(dBossMainMotion_DyingStart),
};

ftMotionCommand dBossMainMotion_Dying[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterDonkeySpecialNEnd, 0),
	ftMotionCommandEffect(20, nEFKindSparkleWhiteMultiExplode, 0, 0, 0, 0, 300, 300, 300),
	ftMotionCommandWait(1),
	ftMotionCommandGoto(dBossMainMotion_Dying),
};

ftMotionCommand dBossMainMotion_0x0970[] = {
	ftMotionCommandWaitAsync(120),
	ftMotionPlayFGM(nSYAudioVoiceBossAppear),
	ftMotionCommandWaitAsync(410),
	ftMotionCommandWait(118),
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, -100, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMUnkGate1),
	ftMotionPlayFGM(nSYAudioFGMKirbySpecialLwLanding),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

