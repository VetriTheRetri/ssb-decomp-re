/* relocData file 254: SC1PTrainingMode — Training-mode menu/HUD layout
 * tables. Maps screen-positioned text labels and glyph streams to
 * sprites in IFCommonItemNames (file 29), the shared font/atlas.
 *
 *   SC1PTrainingModeSprites (8 bytes): { Vec2h pos; Sprite *sprite; }
 *   Sprite *                (4 bytes): cross-file pointer to a Sprite
 *
 * Loaded by sc1PTrainingModeLoadSprites() in src/sc/sc1pmode/
 * sc1ptrainingmode.c. The Sprite* slots are resolved at link time
 * via fixRelocChain.py from the .reloc / .jp.reloc metadata.
 * MenuLabel positions diverge between US and JP — the JP layout
 * shifts a few labels to fit the wider Japanese glyphs.
 */

#include "relocdata_types.h"
#include <sc/sctypes.h>  /* SC1PTrainingModeSprites */

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Sprite dIFCommonItemNames_ArrowL;
extern Sprite dIFCommonItemNames_ArrowR;
extern Sprite dIFCommonItemNames_AttackText;
extern Sprite dIFCommonItemNames_AttackText2;
extern Sprite dIFCommonItemNames_AttackTextJap;
extern Sprite dIFCommonItemNames_BeamSwordText;
extern Sprite dIFCommonItemNames_BeamSwordText2;
extern Sprite dIFCommonItemNames_BeamSwordTextJap;
extern Sprite dIFCommonItemNames_BobOmbText;
extern Sprite dIFCommonItemNames_BobOmbText2;
extern Sprite dIFCommonItemNames_BobOmbTextJap;
extern Sprite dIFCommonItemNames_BoxBottom;
extern Sprite dIFCommonItemNames_BoxLeft;
extern Sprite dIFCommonItemNames_BoxRight;
extern Sprite dIFCommonItemNames_BoxTop;
extern Sprite dIFCommonItemNames_BumperText;
extern Sprite dIFCommonItemNames_BumperText2;
extern Sprite dIFCommonItemNames_BumperTextJap;
extern Sprite dIFCommonItemNames_CPColonText;
extern Sprite dIFCommonItemNames_CameraTextJap;
extern Sprite dIFCommonItemNames_CloseUpText;
extern Sprite dIFCommonItemNames_ClosingBracket;
extern Sprite dIFCommonItemNames_ComboColonText;
extern Sprite dIFCommonItemNames_DamageColonText;
extern Sprite dIFCommonItemNames_Digit0;
extern Sprite dIFCommonItemNames_Digit1;
extern Sprite dIFCommonItemNames_Digit2;
extern Sprite dIFCommonItemNames_Digit3;
extern Sprite dIFCommonItemNames_Digit4;
extern Sprite dIFCommonItemNames_Digit5;
extern Sprite dIFCommonItemNames_Digit6;
extern Sprite dIFCommonItemNames_Digit7;
extern Sprite dIFCommonItemNames_Digit8;
extern Sprite dIFCommonItemNames_Digit9;
extern Sprite dIFCommonItemNames_EnemyColonText;
extern Sprite dIFCommonItemNames_EnemyStatusTextJap;
extern Sprite dIFCommonItemNames_EvadeText;
extern Sprite dIFCommonItemNames_EvadeText2;
extern Sprite dIFCommonItemNames_EvadeTextJap;
extern Sprite dIFCommonItemNames_ExitText;
extern Sprite dIFCommonItemNames_FanText;
extern Sprite dIFCommonItemNames_FanText2;
extern Sprite dIFCommonItemNames_FanTextJap;
extern Sprite dIFCommonItemNames_FireFlowerText;
extern Sprite dIFCommonItemNames_FireFlowerText2;
extern Sprite dIFCommonItemNames_FireFlowerTextJap;
extern Sprite dIFCommonItemNames_GreenShellText;
extern Sprite dIFCommonItemNames_GreenShellText2;
extern Sprite dIFCommonItemNames_GreenShellTextJap;
extern Sprite dIFCommonItemNames_HammerText;
extern Sprite dIFCommonItemNames_HammerText2;
extern Sprite dIFCommonItemNames_HammerTextJap;
extern Sprite dIFCommonItemNames_HeartText;
extern Sprite dIFCommonItemNames_HeartText2;
extern Sprite dIFCommonItemNames_HeartTextJap;
extern Sprite dIFCommonItemNames_HomerunBatText;
extern Sprite dIFCommonItemNames_HomerunBatText2;
extern Sprite dIFCommonItemNames_HomerunBatTextJap;
extern Sprite dIFCommonItemNames_ItemColonText;
extern Sprite dIFCommonItemNames_ItemTextJap;
extern Sprite dIFCommonItemNames_JumpText;
extern Sprite dIFCommonItemNames_JumpText2;
extern Sprite dIFCommonItemNames_JumpTextJap;
extern Sprite dIFCommonItemNames_MaximTomatoText;
extern Sprite dIFCommonItemNames_MaximTomatoText2;
extern Sprite dIFCommonItemNames_MaximTomatoTextJap;
extern Sprite dIFCommonItemNames_MotionSensorBomb;
extern Sprite dIFCommonItemNames_MotionSensorBomb2;
extern Sprite dIFCommonItemNames_MotionSensorBombJap;
extern Sprite dIFCommonItemNames_NearTextJap;
extern Sprite dIFCommonItemNames_NoneText;
extern Sprite dIFCommonItemNames_NoneText2;
extern Sprite dIFCommonItemNames_NoneTextJap;
extern Sprite dIFCommonItemNames_NormalText;
extern Sprite dIFCommonItemNames_NormalTextJap;
extern Sprite dIFCommonItemNames_OneSlashFourText;
extern Sprite dIFCommonItemNames_OneSlashFourText2;
extern Sprite dIFCommonItemNames_OneSlashFourTextJap;
extern Sprite dIFCommonItemNames_OneSlashOneText;
extern Sprite dIFCommonItemNames_OneSlashOneText2;
extern Sprite dIFCommonItemNames_OneSlashOneTextJap;
extern Sprite dIFCommonItemNames_OneSlashTwoText;
extern Sprite dIFCommonItemNames_OneSlashTwoText2;
extern Sprite dIFCommonItemNames_OneSlashTwoTextJap;
extern Sprite dIFCommonItemNames_OpeningBracket;
extern Sprite dIFCommonItemNames_PercentageSign;
extern Sprite dIFCommonItemNames_PokeballText;
extern Sprite dIFCommonItemNames_PokeballText2;
extern Sprite dIFCommonItemNames_PokeballTextJap;
extern Sprite dIFCommonItemNames_QuitTextJap;
extern Sprite dIFCommonItemNames_RayGunText;
extern Sprite dIFCommonItemNames_RayGunText2;
extern Sprite dIFCommonItemNames_RayGunTextJap;
extern Sprite dIFCommonItemNames_RedShellText;
extern Sprite dIFCommonItemNames_RedShellText2;
extern Sprite dIFCommonItemNames_RedShellTextJap;
extern Sprite dIFCommonItemNames_RedSphere;
extern Sprite dIFCommonItemNames_ResetText;
extern Sprite dIFCommonItemNames_ResetTextJap;
extern Sprite dIFCommonItemNames_SlowTextJap;
extern Sprite dIFCommonItemNames_SpeedColonText;
extern Sprite dIFCommonItemNames_SpeedText;
extern Sprite dIFCommonItemNames_StandText;
extern Sprite dIFCommonItemNames_StandText2;
extern Sprite dIFCommonItemNames_StandTextJap;
extern Sprite dIFCommonItemNames_StarRodText;
extern Sprite dIFCommonItemNames_StarRodText2;
extern Sprite dIFCommonItemNames_StarRodTextJap;
extern Sprite dIFCommonItemNames_StarText;
extern Sprite dIFCommonItemNames_StarText2;
extern Sprite dIFCommonItemNames_StarTextJap;
extern Sprite dIFCommonItemNames_TwoSlashThreeText;
extern Sprite dIFCommonItemNames_TwoSlashThreeText2;
extern Sprite dIFCommonItemNames_TwoSlashThreeTextJap;
extern Sprite dIFCommonItemNames_ViewColonText;
extern Sprite dIFCommonItemNames_WalkText;
extern Sprite dIFCommonItemNames_WalkText2;
extern Sprite dIFCommonItemNames_WalkTextJap;

/* @ 0x0000 — section labels at the top of the Training screen */
SC1PTrainingModeSprites dSC1PTrainingMode_DisplayLabel_PosSpriteArray[4] = {
	{ { 20, 20 }, &dIFCommonItemNames_DamageColonText },
	{ { 20, 36 }, &dIFCommonItemNames_ComboColonText },
	{ 
#if defined(REGION_JP)
		{ 150, 20 }
#else
		{ 148, 20 }
#endif
	, &dIFCommonItemNames_EnemyColonText },
	{ 
#if defined(REGION_JP)
		{ 238, 20 }
#else
		{ 236, 20 }
#endif
	, &dIFCommonItemNames_SpeedColonText },
};

/* @ 0x0020 — option-text glyph stream below the section labels */
Sprite * dSC1PTrainingMode_DisplayOption_SpriteArray[39] = {
	&dIFCommonItemNames_Digit0,
	&dIFCommonItemNames_Digit1,
	&dIFCommonItemNames_Digit2,
	&dIFCommonItemNames_Digit3,
	&dIFCommonItemNames_Digit4,
	&dIFCommonItemNames_Digit5,
	&dIFCommonItemNames_Digit6,
	&dIFCommonItemNames_Digit7,
	&dIFCommonItemNames_Digit8,
	&dIFCommonItemNames_Digit9,
	&dIFCommonItemNames_NoneText,
	&dIFCommonItemNames_MaximTomatoText,
	&dIFCommonItemNames_HeartText,
	&dIFCommonItemNames_StarText,
	&dIFCommonItemNames_BeamSwordText,
	&dIFCommonItemNames_HomerunBatText,
	&dIFCommonItemNames_FanText,
	&dIFCommonItemNames_StarRodText,
	&dIFCommonItemNames_RayGunText,
	&dIFCommonItemNames_FireFlowerText,
	&dIFCommonItemNames_HammerText,
	&dIFCommonItemNames_MotionSensorBomb,
	&dIFCommonItemNames_BobOmbText,
	&dIFCommonItemNames_BumperText,
	&dIFCommonItemNames_GreenShellText,
	&dIFCommonItemNames_RedShellText,
	&dIFCommonItemNames_PokeballText,
	&dIFCommonItemNames_OneSlashOneText,
	&dIFCommonItemNames_TwoSlashThreeText,
	&dIFCommonItemNames_OneSlashTwoText,
	&dIFCommonItemNames_OneSlashFourText,
	&dIFCommonItemNames_StandText,
	&dIFCommonItemNames_WalkText,
	&dIFCommonItemNames_EvadeText,
	&dIFCommonItemNames_JumpText,
	&dIFCommonItemNames_AttackText,
	&dIFCommonItemNames_OpeningBracket,
	&dIFCommonItemNames_ClosingBracket,
	&dIFCommonItemNames_PercentageSign,
};

/* @ 0x00BC — left-column menu labels */
SC1PTrainingModeSprites dSC1PTrainingMode_MenuLabel_PosSpriteArray[10] = {
	{ 
#if defined(REGION_JP)
		{ 104, 63 }
#else
		{ 86, 65 }
#endif
	, &dIFCommonItemNames_CPColonText },
	{ 
#if defined(REGION_JP)
		{ 91, 84 }
#else
		{ 86, 85 }
#endif
	, &dIFCommonItemNames_ItemColonText },
	{ 
#if defined(REGION_JP)
		{ 88, 104 }
#else
		{ 86, 105 }
#endif
	, &dIFCommonItemNames_SpeedText },
	{ 
#if defined(REGION_JP)
		{ 88, 124 }
#else
		{ 86, 125 }
#endif
	, &dIFCommonItemNames_ViewColonText },
	{ 
#if defined(REGION_JP)
		{ 86, 144 }
#else
		{ 86, 143 }
#endif
	, &dIFCommonItemNames_ResetText },
	{ 
#if defined(REGION_JP)
		{ 93, 164 }
#else
		{ 86, 165 }
#endif
	, &dIFCommonItemNames_ExitText },
	{ { 64, 43 }, &dIFCommonItemNames_BoxTop },
	{ { 64, 47 }, &dIFCommonItemNames_BoxLeft },
	{ { 253, 47 }, &dIFCommonItemNames_BoxRight },
	{ { 64, 198 }, &dIFCommonItemNames_BoxBottom },
};

/* @ 0x010C — JP variants of the menu labels (Item / CP-stand-in / Speed
 * / Camera-stand-in / Reset / Exit). Only used by the JP locale path. */
SC1PTrainingModeSprites dSC1PTrainingMode_0x10C_PosSpriteArray[6] = {
	{ { 106, 0 }, &dIFCommonItemNames_EnemyStatusTextJap },
	{ { 105, 0 }, &dIFCommonItemNames_ItemTextJap },
	{ { 109, 0 }, &dIFCommonItemNames_SlowTextJap },
	{ { 108, 0 }, &dIFCommonItemNames_CameraTextJap },
	{ { 138, 0 }, &dIFCommonItemNames_ResetTextJap },
	{ { 109, 0 }, &dIFCommonItemNames_QuitTextJap },
};

/* @ 0x013C — option-text glyph stream for the right column */
Sprite * dSC1PTrainingMode_MenuOption_SpriteArray[31] = {
	&dIFCommonItemNames_NoneText2,
	&dIFCommonItemNames_MaximTomatoText2,
	&dIFCommonItemNames_HeartText2,
	&dIFCommonItemNames_StarText2,
	&dIFCommonItemNames_BeamSwordText2,
	&dIFCommonItemNames_HomerunBatText2,
	&dIFCommonItemNames_FanText2,
	&dIFCommonItemNames_StarRodText2,
	&dIFCommonItemNames_RayGunText2,
	&dIFCommonItemNames_FireFlowerText2,
	&dIFCommonItemNames_HammerText2,
	&dIFCommonItemNames_MotionSensorBomb2,
	&dIFCommonItemNames_BobOmbText2,
	&dIFCommonItemNames_BumperText2,
	&dIFCommonItemNames_GreenShellText2,
	&dIFCommonItemNames_RedShellText2,
	&dIFCommonItemNames_PokeballText2,
	&dIFCommonItemNames_OneSlashOneText2,
	&dIFCommonItemNames_TwoSlashThreeText2,
	&dIFCommonItemNames_OneSlashTwoText2,
	&dIFCommonItemNames_OneSlashFourText2,
	&dIFCommonItemNames_StandText2,
	&dIFCommonItemNames_WalkText2,
	&dIFCommonItemNames_EvadeText2,
	&dIFCommonItemNames_JumpText2,
	&dIFCommonItemNames_AttackText2,
	&dIFCommonItemNames_CloseUpText,
	&dIFCommonItemNames_NormalText,
	&dIFCommonItemNames_ArrowL,
	&dIFCommonItemNames_ArrowR,
	&dIFCommonItemNames_RedSphere,
};

/* @ 0x01B8 — JP-variant glyph stream mirroring DisplayOption + a
 * trailing Near / Normal slot, terminated by a NULL entry. */
SC1PTrainingModeSprites dSC1PTrainingMode_0x1B8_PosSpriteArray[29] = {
	{ { 156, 0 }, &dIFCommonItemNames_NoneTextJap },
	{ { 157, 0 }, &dIFCommonItemNames_MaximTomatoTextJap },
	{ { 156, 0 }, &dIFCommonItemNames_HeartTextJap },
	{ { 156, 0 }, &dIFCommonItemNames_StarTextJap },
	{ { 158, 0 }, &dIFCommonItemNames_BeamSwordTextJap },
	{ { 156, 0 }, &dIFCommonItemNames_HomerunBatTextJap },
	{ { 157, 0 }, &dIFCommonItemNames_FanTextJap },
	{ { 157, 0 }, &dIFCommonItemNames_StarRodTextJap },
	{ { 158, 0 }, &dIFCommonItemNames_RayGunTextJap },
	{ { 157, 0 }, &dIFCommonItemNames_FireFlowerTextJap },
	{ { 157, 0 }, &dIFCommonItemNames_HammerTextJap },
	{ { 156, 0 }, &dIFCommonItemNames_MotionSensorBombJap },
	{ { 157, 0 }, &dIFCommonItemNames_BobOmbTextJap },
	{ { 157, 0 }, &dIFCommonItemNames_BumperTextJap },
	{ { 156, 0 }, &dIFCommonItemNames_GreenShellTextJap },
	{ { 155, 0 }, &dIFCommonItemNames_RedShellTextJap },
	{ { 157, 0 }, &dIFCommonItemNames_PokeballTextJap },
	{ { 159, 0 }, &dIFCommonItemNames_OneSlashOneTextJap },
	{ { 157, 0 }, &dIFCommonItemNames_TwoSlashThreeTextJap },
	{ { 159, 0 }, &dIFCommonItemNames_OneSlashTwoTextJap },
	{ { 159, 0 }, &dIFCommonItemNames_OneSlashFourTextJap },
	{ { 171, 0 }, &dIFCommonItemNames_StandTextJap },
	{ { 171, 0 }, &dIFCommonItemNames_WalkTextJap },
	{ { 171, 0 }, &dIFCommonItemNames_EvadeTextJap },
	{ { 171, 0 }, &dIFCommonItemNames_JumpTextJap },
	{ { 171, 0 }, &dIFCommonItemNames_AttackTextJap },
	{ { 161, 0 }, &dIFCommonItemNames_NearTextJap },
	{ { 157, 0 }, &dIFCommonItemNames_NormalTextJap },
	{ { 0, 0 }, NULL },
};

