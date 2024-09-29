#include <debug.h>
#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <lb/library.h>
#include <sys/system_00.h>
#include <sys/gtl.h>

#include "ovl10.h"

// Externs
extern uintptr_t lTitleScreenParticleBankGenLo; // B22C30
extern uintptr_t lTitleScreenParticleBankGenHi; // B22D40
extern uintptr_t lTitleScreenParticleBankTextureLo; // B22D40
extern uintptr_t lTitleScreenParticleBankTextureHi; // B277B0
extern uintptr_t lOverlay10ArenaLo; // 801345B0
extern uintptr_t lOverlay10ArenaHi; // 80369240

extern intptr_t FILE_0A7_ANIMATED_LOGO_OFFSET_1; // 251D0 file 0x0A7 offset for Animated Logo (anim?)
extern intptr_t FILE_0A7_ANIMATED_LOGO_OFFSET_2; // 26020 file 0x0A7 offset for Animated Logo (anim?)
extern intptr_t FILE_0A7_ANIMATED_TITLE_HEADER_FOOTER_OFFSET_1; // 25350 file 0x0A7 offset for Title, Header & Footer (anim?)
extern intptr_t FILE_0A7_ANIMATED_TITLE_HEADER_FOOTER_OFFSET_2; // 26130 file 0x0A7 offset for Title, Header & Footer (anim?)
extern intptr_t FILE_0A7_ANIMATED_PRESS_START_OFFSET_1; // 258D0 file 0x0A7 offset for Press Start (anim?)
extern intptr_t FILE_0A7_ANIMATED_PRESS_START_OFFSET_2; // 262C0 file 0x0A7 offset for Press Start (anim?)
extern intptr_t FILE_0A7_SLASH_EFFECT_GFX_OFFSET_1; // 287D8 file 0x0A7 offset for Slash Effect GFX
extern intptr_t FILE_0A7_SLASH_EFFECT_GFX_OFFSET_2; // 28DA8 file 0x0A7 offset for Slash Effect GFX
extern intptr_t FILE_0A7_SLASH_EFFECT_GFX_OFFSET_3; // 25E70 file 0x0A7 offset for Slash Effect GFX
extern intptr_t FILE_0A7_SLASH_EFFECT_GFX_OFFSET_4; // 25F60 file 0x0A7 offset for Slash Effect GFX
extern intptr_t FILE_0A7_LOGO_FIRE_EFFECT_OFFSET_1; // 28EB0 file 0x0A7 offset for Slash Effect GFX
extern intptr_t FILE_0A7_LOGO_FIRE_EFFECT_OFFSET_2; // 29010 file 0x0A7 offset for Slash Effect GFX

extern void mnDebugMenuUpdateMenuInputs();
extern void func_80007080(void*, f32, f32, f32, f32);


// Forward declarations
void mnTitleTransitionFromFireLogo();
void mnTitleEnableAllInGroup(s32 link_id);
void mnTitleSetPosition(DObj* dobj, SObj* sobj, s32 index);
void mnTitleSetColors(SObj* sobj, s32 index);
void func_ovl10_80132A58(GObj* fire_gobj);
void mnTitleLoadFiles();

// DATA
// 801341E0
intptr_t dMNTitleAnimatedLogoOffsets[3] = {

	0x00008FC8, // Full circle cutout
	0x000097E8, // Vertical rectangle
	0x00009B48 // Horizontal rectangle
};

// 801341EC
s32 dMNTitleLogoOffset = 0xbbb0;

// 801341F0
intptr_t dMNTitleFireTextureOffsets[30] = {

	0x00001018, 0x00002078, 0x000030d8, 0x00004138,
	0x00005198, 0x000061f8, 0x00007258, 0x000082b8,
	0x00009318, 0x0000a378, 0x0000b3d8, 0x0000c438,
	0x0000d498, 0x0000e4f8, 0x0000f558, 0x000105b8,
	0x00011618, 0x00012678, 0x000136d8, 0x00014738,
	0x00015798, 0x000167f8, 0x00017858, 0x000188b8,
	0x00019918, 0x0001a978, 0x0001b9d8, 0x0001ca38,
	0x0001da98, 0x0001eaf8
};

// 80134268
mnTitleTextureConfig dMNTitleTextureConfigs[5] = {

	0x0000009d, 0x0000005e, 0x00011988,
	0x000000a1,	0x00000058, 0x000245c8,
	0x00000037, 0x00000060, 0x00016728,
	0x0000010c, 0x00000060, 0x00025188,
	0x0000010e, 0x00000084, 0x00011aa8	
};

// 801342A4
s32 D_ovl10_801342A4[8] = {

	0x000000a0, 0x000000d0, 0x00015320, 0x000000a0,
	0x0000000f, 0x0000c208, 0x000000a2, 0x000000b1
};

// 801342C4
s32 D_ovl10_801342C4 = 0x00015a48;

// 801342C8
s32 D_ovl10_801342C8 = 0x00000104;

// 801342CC
s32 D_ovl10_801342CC = 0x0000003c;

// 801342D0
s32 D_ovl10_801342D0 = 0x0000bbb0;

// 801342D4
s32 D_ovl10_801342D4[] = {

	0x0115,
	0x009d,
	0xf398,
	0, 0,
	(s32)"English",
	0, 0, 0, 0, 0, 0,
	0x800a41c0, 0, 0, 0, 0
};

// 80134318
u8 dMNTitleFireBGOverlayColorArrayRed[7] = { 0xff, 0xff, 0xff, 0xff, 0xe6, 0xff, 0xff };

// 80134320
u8 dMNTitleFireBGOverlayColorArrayGreen[7] = { 0xff, 0xf0, 0xff, 0xd1, 0xff, 0xe2, 0xd2 };

// 80134328
u8 dMNTitleFireBGOverlayColorArrayBlue[7] = { 0xff, 0x9b, 0x64, 0xd1, 0xe6, 0xb8, 0x94 };

// 80134330
Lights1 dMNTitleLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x0A, 0x32, 0x32);

// 80134348
Gfx dMNTitleDisplayList[] =
{
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPSetLights1(dMNTitleLights1),
	gsSPEndDisplayList()
};

// 80134370
syDisplaySetup D_ovl10_80134370 = {

	0x80392a00, 0x803b6900, 0x803da800, 0,
	0x0140, 0x00f0, 0x15a99
};

// 8013438C
scRuntimeInfo D_ovl10_8013438C = {

	0x00000000,
	0x80134098, 0x8000a340, 0x801345b0, 0x00000000,
	0x00000001, 0x00000002, 0x00007000, 0x00002800,
	0x00000000, 0x00000000, 0x00001000, 0x00020000,
	0x00001000, 0x80134074, 0x80004310, 0x00000000,
	0x00000600, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000088, 0x00000000, 0x0000006c, 0x00000000,
	0x00000090, 0x80133f90
};

// 80134418
s32 D_ovl10_80134418 = 0;

// 8013441C
s32 D_ovl10_8013441C = 0;

// 80134420
s32 D_ovl10_80134420[2] = { 0xa7, 0xa8 };


// BSS
// 80134440
s32 D_ovl10_80134440[2];

// 80134448
GObj* gMNTitleFireBGOverlayCameraGObj;

// 8013444C
uintptr_t gMNTitleParticleBankId;

// 80134450
mnTitleLayout gMNTitleLayout;

// 80134454
uintptr_t gMNTitleTransitionsGObj;

// 80134458
uintptr_t gMNTitleMainGObj;

// 8013445C
s32 gMNTitleTransitionFramesElapsed;

// 80134460
sb32 gMNTitleEnableMain;

// 80134464
s32 gMNTitleFireAlpha;

// 80134468
s32 gMNTitleFireAlphaUnused;

// 8013446C
s32 gMNTitleLogoAlpha;

// 80134470
sb32 gMNTitleChangeSceneInterrupt;

// 80134474
s32 gMNTitleChangeSceneTimer;

// 80134478
s32 gMNTitleFireBGOverlayTimer;

// 8013447C
f32 gMNTitleFireBGOverlayRed;

// 80134480
f32 gMNTitleFireBGOverlayGreen;

// 80134484
f32 gMNTitleFireBGOverlayBlue;

// 80134488
f32 gMNTitleFireBGOverlayDeltaRed;

// 8013448C
f32 gMNTitleFireBGOverlayDeltaGreen;

// 80134490
f32 gMNTitleFireBGOverlayDeltaBlue;

// 80134494
s32 gMNTitleFireBGOverlayIndex;

// 80134498
u32 gMNTitleMainMenuFramesToWait;

// 801344A0
lbFileNode D_ovl10_801344A0[32];

// 801345A0
uintptr_t gMNTitleFile0;

// 801345A4
uintptr_t gMNTitleFile1;


// 80131B00
s32 mnTitleGetUnlockedCharsCountForMask(u16 mask)
{
	s32 i;
	s32 unlocked_chars;

	for(i = 0, unlocked_chars = 0; i < 16; i++, mask = mask >> 1)
	{
		if(mask & 1)
			unlocked_chars++;
	}
	return unlocked_chars;
}

// 80131B78
s32 mnTitleGetMissingFtKind(u16 mask_1, u16 mask_2, s32 missing_index)
{
	s32 ft_kind = -1;

	missing_index = missing_index + 1;

	do
	{
		ft_kind += 1;

		if ((mask_1 & gmSaveChrMask(ft_kind)) && !(mask_2 & gmSaveChrMask(ft_kind)))
			missing_index -= 1;
	}
	while (missing_index != 0);

	return ft_kind;
}

// 80131BC4
s32 mnTitleSetDemoFtKinds()
{
	u16 unlocked_mask;
	s32 unlocked_count;
	s32 non_recently_demoed_count;

	unlocked_mask = gSaveData.fighter_mask | LBBACKUP_CHARACTER_MASK_STARTER;

	if (~unlocked_mask & gSceneData.demo_mask_prev)
		gSceneData.demo_mask_prev = 0;

	unlocked_count = mnTitleGetUnlockedCharsCountForMask(unlocked_mask);

	if (unlocked_count <= mnTitleGetUnlockedCharsCountForMask(gSceneData.demo_mask_prev))
		gSceneData.demo_mask_prev = 0;

	unlocked_count = mnTitleGetUnlockedCharsCountForMask(unlocked_mask);

	gSceneData.demo_ft_kind[0] = mnTitleGetMissingFtKind(unlocked_mask, gSceneData.demo_mask_prev, mtTrigGetRandomIntRange(unlocked_count - mnTitleGetUnlockedCharsCountForMask(gSceneData.demo_mask_prev)));

	if (!(gSceneData.demo_mask_prev))
	{
		gSceneData.demo_first_ft_kind = gSceneData.demo_ft_kind[0];
	}
	gSceneData.demo_mask_prev |= gmSaveChrMask(gSceneData.demo_ft_kind[0]);

	unlocked_count = mnTitleGetUnlockedCharsCountForMask(unlocked_mask);

	non_recently_demoed_count = unlocked_count - mnTitleGetUnlockedCharsCountForMask(gSceneData.demo_mask_prev);

	if (non_recently_demoed_count == 0)
	{
		gSceneData.demo_ft_kind[1] = gSceneData.demo_first_ft_kind;
	}
	else
	{
		gSceneData.demo_ft_kind[1] = mnTitleGetMissingFtKind(unlocked_mask, gSceneData.demo_mask_prev, mtTrigGetRandomIntRange(non_recently_demoed_count));
		gSceneData.demo_mask_prev |= gmSaveChrMask(gSceneData.demo_ft_kind[1]);
	}
}

// 80131CF4
void mnTitleInitVars()
{
	s32 index;

	if (gSceneData.scene_previous == nSCKindOpeningNewcomers)
	{
		gMNTitleLayout = nMNTitleLayoutIntro;
		gMNTitleTransitionFramesElapsed = 0;
		gMNTitleFireBGOverlayBlue = 0.0f;
		gMNTitleFireBGOverlayGreen = gMNTitleFireBGOverlayBlue;
		gMNTitleFireBGOverlayRed = gMNTitleFireBGOverlayGreen;
	}
	else
	{
		auStopBGM();
		func_800266A0_272A0();

		gMNTitleLayout = nMNTitleLayoutAnimate;
		gMNTitleTransitionFramesElapsed = 169;

		index = mtTrigGetRandomTimeUCharRange(7);
		gMNTitleFireBGOverlayIndex = index;
		gMNTitleFireBGOverlayRed = dMNTitleFireBGOverlayColorArrayRed[index];
		gMNTitleFireBGOverlayGreen = dMNTitleFireBGOverlayColorArrayGreen[index];
		gMNTitleFireBGOverlayBlue = dMNTitleFireBGOverlayColorArrayBlue[index];
	}

	gMNTitleFireBGOverlayTimer = 0;
	gMNTitleChangeSceneInterrupt = FALSE;
	gMNTitleChangeSceneTimer = 3;
	gMNTitleEnableMain = FALSE;
	gMNTitleFireBGOverlayDeltaRed = 0.0f;
	gMNTitleFireBGOverlayDeltaGreen = 0.0f;
	gMNTitleFireBGOverlayDeltaBlue = 0.0f;
}

// 80131E68
void mnTitleSetFinalLogoPosition()
{
	GObj* smash_logo_gobj;
	SObj* smash_logo_sobj;

	smash_logo_gobj = gOMObjCommonLinks[10];

	if (gSceneData.scene_previous == nSCKindOpeningNewcomers)
	{
		gcEndProcessAll(smash_logo_gobj);
	}

	smash_logo_sobj = SObjGetStruct(smash_logo_gobj);

	mnTitleSetPosition(NULL, smash_logo_sobj, nMNTitleTextureIndexLogo);

	smash_logo_sobj->user_data.s = 0xFF;
	gMNTitleLogoAlpha = 0x4C;

	smash_logo_sobj->sprite.scalex = 1.0f;
	smash_logo_sobj->sprite.scaley = 1.0f;
}

// 80131EE4
void mnTitleSetFinalLayout()
{
	s32 i;
	GObj* texture_sobj;
	GObj* gobj;
	SObj* sobj;

	gobj = gOMObjCommonLinks[6];

	while (gobj != NULL)
	{
		if (gobj->gobj_id == 5)
			func_ovl10_80132A58(gobj);

		gobj = gobj->link_next;
	}

	gobj = gOMObjCommonLinks[8];

	while (gobj != NULL)
	{
		if (gobj->gobj_id == 8)
			texture_sobj = gobj;

		gobj = gobj->link_next;
	}

	// UB: texture_sobj may not be defined!
	gcEndProcessAll(texture_sobj);

	i = 0;
	sobj = SObjGetStruct(texture_sobj);
	texture_sobj->flags = 0;

	while (sobj != NULL)
	{
		mnTitleSetPosition(NULL, sobj, i);
		mnTitleSetColors(sobj, i);

		sobj->sprite.scaley = 1.0f;
		sobj->sprite.scalex = 1.0f;
		sobj = sobj->next;
		i += 1;
	}
}

// 80131FD0
void mnTitleGoToNextDemo()
{
	u8 scene_previous = gSceneData.scene_previous;

	gcMakeDefaultCameraGObj(2, 0x80000000, 0, 2, 0xFF);
	mnTitleSetDemoFtKinds();
	func_800266A0_272A0();

	gSceneData.scene_previous = gSceneData.scene_current;

	switch (scene_previous)
	{
		case nSCKindExplain:
			gSceneData.scene_current = nSCKindCharacters;

			auPlaySong(0, 0x22);

			break;
		case nSCKindModeSelect:
		case nSCKindDemo:
			gSceneData.scene_current = nSCKindN64;
			break;
		default:
			gSceneData.scene_current = nSCKindExplain;
			break;
	}

	gSceneData.wait_longer_to_show_demo = TRUE;
	gMNTitleChangeSceneInterrupt = TRUE;
}

// 80132090
void mnTitleGoToMainMenu()
{
	gcMakeDefaultCameraGObj(2, 0x80000000, 0, 2, 0xFF);

	gSceneData.scene_previous = gSceneData.scene_current;
	gSceneData.scene_current = 7;

	func_800266A0_272A0();
	func_800269C0_275C0(0x9D);

	gMNTitleChangeSceneInterrupt = TRUE;
}

// 801320F0
void mnTitleMain(s32 arg0)
{
	s32 i;
	u16 buttonPressed;

	if (!gMNTitleEnableMain)
	{
		gMNTitleEnableMain++;
		return;
	}

	if (gMNTitleChangeSceneInterrupt)
	{
		gMNTitleChangeSceneTimer--;

		if (gMNTitleChangeSceneTimer == 0)
			leoInitUnit_atten();
	}
	else
	{
		for (i = 0; i < ARRAY_COUNT(gPlayerControllers); i++)
		{
			buttonPressed = gPlayerControllers[i].button_tap;

			if (gPlayerControllers[i].button_tap & (A_BUTTON | B_BUTTON | START_BUTTON))
			{
				if (gMNTitleLayout != 0)
				{
					if (((gSceneData.main_title_animation_viewed) || (osResetType != 0 /* if not cold reset */)) && !(buttonPressed & B_BUTTON))
					{
						mnTitleGoToMainMenu();
						break;
					}
				}
				else
				{
					gMNTitleTransitionFramesElapsed = 169;
					gMNTitleLayout = nMNTitleLayoutAnimate;

					mnTitleTransitionFromFireLogo();
					auStopBGM();
					func_800266A0_272A0();
					break;
				}
			}

		}
	}
}

// 80132210
void mnTitleUpdateFireBGOverlayVars()
{
	s32 index = mtTrigGetRandomTimeUCharRange(7);

	gMNTitleFireBGOverlayIndex = index;

	gMNTitleFireBGOverlayRed = gMNTitleFireBGOverlayGreen = gMNTitleFireBGOverlayBlue = 0.0f;

	gMNTitleFireBGOverlayDeltaRed = (dMNTitleFireBGOverlayColorArrayRed[index] - gMNTitleFireBGOverlayRed) / 80.0f;
	gMNTitleFireBGOverlayDeltaGreen = (dMNTitleFireBGOverlayColorArrayGreen[index] - gMNTitleFireBGOverlayGreen) / 80.0f;
	gMNTitleFireBGOverlayDeltaBlue = (dMNTitleFireBGOverlayColorArrayBlue[index] - gMNTitleFireBGOverlayBlue) / 80.0f;
}

// 80132320
void mnTitleTransitionFromFireLogo()
{
	GObj* current_gobj;
	GObj* next_gobj;

	current_gobj = gOMObjCommonLinks[7];

	if (current_gobj != NULL)
	{
		do
		{
			next_gobj = current_gobj->link_next;

			if (current_gobj->gobj_id == 6)
				current_gobj->flags = 1;

			current_gobj = next_gobj;
		}
		while (next_gobj != NULL);
	}

	if (gOMObjCommonLinks[4] != NULL)
		gcEjectGObj(gOMObjCommonLinks[4]);

	if (gOMObjCommonLinks[14] != NULL)
		gcEjectGObj(gOMObjCommonLinks[14]);

	mnTitleEnableAllInGroup(6);
	mnTitleUpdateFireBGOverlayVars();
}

// 801323AC
void mnTitleEnableAllInGroup(s32 link_id)
{
	GObj* gobj = gOMObjCommonLinks[link_id];

	while (gobj != NULL)
	{
		gobj->flags = 0;

		gobj = gobj->link_next;
	}
}

// 801323DC
void mnTitleNextLayout()
{
	if ((gMNTitleLayout == nMNTitleLayoutIntro) && (gSceneData.scene_previous == nSCKindOpeningNewcomers))
		gSceneData.wait_longer_to_show_demo = FALSE;

	gMNTitleLayout++;
}

// 80132414
void mnTitleSetMainMenuFramesToWait()
{
	if (gMNTitleLayout == nMNTitleLayoutFinal)
		gMNTitleMainMenuFramesToWait = 280;
	else
		gMNTitleMainMenuFramesToWait = 364;
}

// 80132448
void mnTitleHandleTransitions(s32 arg0)
{
	gMNTitleTransitionFramesElapsed++;

	if (gMNTitleTransitionFramesElapsed == gMNTitleMainMenuFramesToWait)
	{
		gSceneData.main_title_animation_viewed = TRUE;
	}

	switch (gMNTitleTransitionFramesElapsed)
	{
		case 111:
			mnTitleTransitionFromFireLogo();
			break;
		case 170:
			mnTitleSetFinalLogoPosition();
			mnTitleEnableAllInGroup(8);
			mnTitleNextLayout();
			mnTitleSetMainMenuFramesToWait();
			break;
		case 220:
			mnTitleSetFinalLayout();
			break;
		case 280:
			mnTitleEnableAllInGroup(9);
			break;
		case 35:
		case 65:
			func_800269C0_275C0(0x98);
			break;
		case 200:
			if (gMNTitleLayout == nMNTitleLayoutAnimate)
				func_800269C0_275C0(0x96);
			break;
		case 214:
		case 240:
			// Maybe a FGM call in J version?
			break;
		case 650:
			if (!gSceneData.wait_longer_to_show_demo)
				mnTitleGoToNextDemo();
			break;
		case 1190:
			if (gSceneData.wait_longer_to_show_demo)
				mnTitleGoToNextDemo();
			break;
	}
}

// 801325D4
void mnTitleAnimateGObj(GObj* gobj)
{
	GObj* effect_gobj;
	SObj* sobj;
	DObj* dobj;

	effect_gobj = gobj->user_data.p;
	sobj = SObjGetStruct(gobj);
	dobj = DObjGetStruct(effect_gobj);

	gcPlayAnimAll(effect_gobj);

	dobj = dobj->child;

	while (sobj != NULL)
	{
		sobj->sprite.scalex = dobj->scale.vec.f.x;
		sobj->sprite.scaley = dobj->scale.vec.f.y;
		sobj->pos.x = ((dobj->translate.vec.f.x + 160.0f) - (sobj->sprite.width * sobj->sprite.scalex * 0.5f));
		sobj->pos.y = ((120.0f - dobj->translate.vec.f.y) - (sobj->sprite.height * sobj->sprite.scaley * 0.5f));

		sobj = sobj->next;
		dobj = dobj->sib_next;
	}
}

// 801326A4
void mnTitleAnimatePressStart(GObj* press_start_gobj)
{
	if (press_start_gobj->flags != 1)
		mnTitleAnimateGObj(press_start_gobj);
}

// 801326D4
void mnTitleAnimateTitle(GObj* title_gobj)
{
	if (title_gobj->flags != 1)
		mnTitleAnimateGObj(title_gobj);
}

// 80132704
void mnTitleUpdateHeaderAndFooterPosition(GObj* header_footer_gobj)
{
	SObj* header_footer_sobj = SObjGetStruct(header_footer_gobj);

	if ((gMNTitleLayout != nMNTitleLayoutIntro) || (gSceneData.scene_previous != nSCKindOpeningNewcomers))
	{
		mnTitleSetPosition(NULL, header_footer_sobj, nMNTitleTextureIndexFooter);
		mnTitleSetPosition(NULL, header_footer_sobj->next, nMNTitleTextureIndexHeader);
	}
}

// 80132764
void mnTitleSetPosition(DObj* dobj, SObj* sobj, s32 index)
{
	mnTitleTextureConfig* texture_config;

	if (dobj != NULL)
	{
		texture_config = &dMNTitleTextureConfigs[index];
		dobj->translate.vec.f.x = texture_config->x - 160.0f;
		dobj->translate.vec.f.y = -(texture_config->y - 120.0f);
	}

	texture_config = &dMNTitleTextureConfigs[index];
	sobj->pos.x = (texture_config->x - (sobj->sprite.width * 0.5f));
	sobj->pos.y = (texture_config->y - (sobj->sprite.height * 0.5f));
}

// 8013282C
void mnTitleSetColors(SObj* sobj, s32 index)
{
	if (index < nMNTitleTextureIndexFooter)
	{
		if ((index == nMNTitleTextureIndexDropShadow) || (index == nMNTitleTextureIndexTM))
		{
			sobj->sprite.red = 0;
			sobj->sprite.green = 0;
			sobj->sprite.blue = 0;
		}
		else
		{
			sobj->sprite.red = 0xFF;
			sobj->sprite.green = 0xFE;
			sobj->sprite.blue = 0x2A;
			sobj->env_color.r = 0;
			sobj->env_color.g = 0;
			sobj->env_color.b = 0;
		}
	}
	else switch (index) { /* irregular */
		case nMNTitleTextureIndexFooter:
			sobj->sprite.red = 0xB7;
			sobj->sprite.green = 0xAE;
			sobj->sprite.blue = 0x7C;
			sobj->env_color.r = 0x14;
			sobj->env_color.g = 0x12;
			sobj->env_color.b = 6;
			break;
		case nMNTitleTextureIndexHeader:
			sobj->sprite.red = 0x14;
			sobj->sprite.green = 0x12;
			sobj->sprite.blue = 6;
			break;
		case nMNTitleTextureIndexPressStart:
			sobj->sprite.red = 0xFF;
			sobj->sprite.green = 0xFF;
			sobj->sprite.blue = 0xFF;
			sobj->env_color.r = 0x17;
			sobj->env_color.g = 0x10;
			sobj->env_color.b = 0xA4;
			break;
		case nMNTitleTextureIndexTM2:
			sobj->sprite.red = 0x15;
			sobj->sprite.green = 0x13;
			sobj->sprite.blue = 6;
			break;
	}
}

// 80132940
void mnTitleRenderFire(GObj* fire_gobj)
{
	s32 i;
	SObj* fire_sobj = SObjGetStruct(fire_gobj);

	for (i = 0; i < 2; i++)
	{
		lbCommonPrepSObjSpriteAttrs(gDisplayListHead, fire_sobj);

		gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0, 0, 0, gMNTitleFireAlpha);
		gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, TEXEL0,  TEXEL0, 0, PRIMITIVE, 0,  0, 0, 0, TEXEL0,  TEXEL0, 0, PRIMITIVE, 0);

		lbCommonPrepSObjDraw(gDisplayListHead, fire_sobj);
		lbCommonClearExternSpriteParams();

		fire_sobj = fire_sobj->next;
	}
}

// 80132A20
void func_ovl10_80132A20(GObj* fire_gobj)
{
	if (fire_gobj->flags != 1)
	{
		gMNTitleFireAlpha += 0xD;

		if (gMNTitleFireAlpha >= 0x100)
			gMNTitleFireAlpha = 0xFF;
	}
}

// 80132A58
void func_ovl10_80132A58(GObj* fire_gobj)
{
	gMNTitleFireAlpha = 0xFF;
	fire_gobj->flags = 0;
}

// 80132A6C
void func_ovl10_80132A6C(SObj* fire_sobj, s32 arg1)
{
	Sprite *offset = GetAddressFromOffset(gMNTitleFile1, dMNTitleFireTextureOffsets[fire_sobj->user_data.s]);

	fire_sobj->sprite = *offset;
	fire_sobj->sprite.attr = SP_TRANSPARENT;

	if (arg1 != 0)
		fire_sobj->sprite.scalex = 9.5f;
	else
		fire_sobj->sprite.scalex = 12.0f;

	if (arg1 != 0)
		fire_sobj->sprite.scaley = 7.0f;
	else
		fire_sobj->sprite.scaley = 8.5f;

	fire_sobj->user_data.s += 1;

	if (fire_sobj->user_data.s >= 0x1E)
		fire_sobj->user_data.s = 0;
}

// 80132B38
void func_ovl10_80132B38(GObj* fire_gobj)
{
	SObj *fire_sobj_1 = SObjGetStruct(fire_gobj), *fire_sobj_2 = fire_sobj_1->next;

	func_ovl10_80132A6C(fire_sobj_1, 0);
	func_ovl10_80132A6C(fire_sobj_2, 1);
}

// 80132B70
void mnTitleCreateFire()
{
	s32 i;
	s32 target_texture;
	GObj* fire_gobj;
	SObj* fire_sobj;

	fire_gobj = gcMakeGObjSPAfter(5, func_ovl10_80132A20, 6, 0x80000000);

	if (fire_gobj != NULL)
	{
		gcAddGObjDisplay(fire_gobj, mnTitleRenderFire, 0, 0x80000000, -1);
		gcAddGObjProcess(fire_gobj, func_ovl10_80132B38, 1, 1);

		for (i = 0; i < 2; i++)
		{
			if (i != 0)
				target_texture = 0;
			else
				target_texture = 12;

			fire_sobj = lbCommonMakeSObjForGObj(fire_gobj, GetAddressFromOffset((&gMNTitleFile0)[1], dMNTitleFireTextureOffsets[target_texture]));

			fire_sobj->sprite.attr = SP_TRANSPARENT;

			if (i != 0)
				fire_sobj->pos.x = 8.0f;
			else
				fire_sobj->pos.x = -32.0f;

			if (i != 0)
				fire_sobj->pos.y = 8.0f;
			else
				fire_sobj->pos.y = -16.0f;

			if (i != 0)
				fire_sobj->sprite.scalex = 9.5f;
			else
				fire_sobj->sprite.scalex = 12.0f;

			if (i != 0)
				fire_sobj->sprite.scaley = 7.0f;
			else
				fire_sobj->sprite.scaley = 8.5f;

			fire_sobj->user_data.s = target_texture;
		}

		gMNTitleFireAlpha = gMNTitleFireAlphaUnused = 0;
		fire_gobj->flags = 1;

		if (gSceneData.scene_previous != nSCKindOpeningNewcomers)
			func_ovl10_80132A58(fire_gobj);
	}
}

// 80132D5C
void mnTitleAnimateLogo(GObj* logo_gobj)
{
	GObj *effect_gobj = logo_gobj->user_data.p;
	SObj *logo_sobj = SObjGetStruct(logo_gobj);
	DObj *logo_animation_dobj = DObjGetStruct(effect_gobj)->child->sib_next->sib_next->sib_next;

	logo_sobj->sprite.scalex = logo_animation_dobj->scale.vec.f.x;
	logo_sobj->sprite.scaley = logo_animation_dobj->scale.vec.f.y;
	logo_sobj->pos.x = ((logo_animation_dobj->translate.vec.f.x + 160.0f) - (logo_sobj->sprite.width * logo_sobj->sprite.scalex * 0.5f));
	logo_sobj->pos.y = ((120.0f - logo_animation_dobj->translate.vec.f.y) - (logo_sobj->sprite.height * logo_sobj->sprite.scaley * 0.5f));
}

// 80132DFC
void mnTitleRenderLogoNoIntro(GObj* logo_gobj)
{
	SObj* logo_sobj = SObjGetStruct(logo_gobj);

	if ((logo_sobj->sprite.scalex < 0.0001F) || (logo_sobj->sprite.scaley < 0.0001F))
	{
		return;
	}
	else
	{
		lbCommonPrepSObjSpriteAttrs(gDisplayListHead, logo_sobj);

		gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, logo_sobj->sprite.red, logo_sobj->sprite.green, logo_sobj->sprite.blue, gMNTitleLogoAlpha);
		gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  TEXEL0, 0, PRIMITIVE, 0,  0, 0, 0, PRIMITIVE,  TEXEL0, 0, PRIMITIVE, 0);

		lbCommonDrawSObjNoAttr(logo_gobj);
	}
}

// 80132EDC
void mnTitleFadeOutLogo(GObj* logo_gobj)
{
	SObj* logo_sobj = SObjGetStruct(logo_gobj);

	if (!(logo_sobj->sprite.scalex < 0.0001f) && !(logo_sobj->sprite.scaley < 0.0001f))
	{
		gMNTitleLogoAlpha -= 4;

		if (gMNTitleLogoAlpha < 0x4D)
			gMNTitleLogoAlpha = 0x4C;
	}
}

// 80132F3C
void mnTitleCreateLogoNoIntro()
{
	GObj *logo_gobj = lbCommonMakeSpriteGObj(0xB, 0, 0xA, 0x80000000, mnTitleRenderLogoNoIntro, 0, 0x80000000, -1, D_ovl10_801342D0 + gMNTitleFile0, 1, 0, 1);
	SObj *logo_sobj = SObjGetStruct(logo_gobj);

	logo_sobj->sprite.attr = SP_TRANSPARENT;
	logo_sobj->sprite.red = 0xFF;
	logo_sobj->sprite.green = 0;
	logo_sobj->sprite.blue = 0;

	mnTitleSetPosition(0, logo_sobj, nMNTitleTextureIndexLogo);
}

// 80132FD8
void mnTitleCreateLogo()
{
	s32 i;
	GObj* animated_logo_gobj;
	GObj* fire_logo_gobj;
	SObj* fire_logo_sobj;
	GObj* logo_gobj;
	SObj* logo_sobj;
	DObj* fire_logo_dobj;

	if (gSceneData.scene_previous != nSCKindOpeningNewcomers)
		mnTitleCreateLogoNoIntro();
	else
	{
		animated_logo_gobj = gcMakeGObjSPAfter(7, 0, 7, 0x80000000);
		gcSetupCommonDObjs(animated_logo_gobj, GetAddressFromOffset(gMNTitleFile0, &FILE_0A7_ANIMATED_LOGO_OFFSET_2), 0);
		gcAddAnimJointAll(animated_logo_gobj, GetAddressFromOffset(gMNTitleFile0, &FILE_0A7_ANIMATED_LOGO_OFFSET_1), 0);
		gcPlayAnimAll(animated_logo_gobj);

		fire_logo_gobj = gcMakeGObjSPAfter(6, 0, 7, 0x80000000);
		gcAddGObjDisplay(fire_logo_gobj, lbCommonDrawSObjAttr, 0, 0x80000000, -1);
		gcAddGObjProcess(fire_logo_gobj, mnTitleAnimateGObj, 1, 1);

		fire_logo_gobj->user_data.p = animated_logo_gobj;
		fire_logo_dobj = DObjGetStruct(animated_logo_gobj)->child;

		for (i = 0; i < ARRAY_COUNT(dMNTitleAnimatedLogoOffsets); i++)
		{
			fire_logo_sobj = lbCommonMakeSObjForGObj(fire_logo_gobj, GetAddressFromOffset(gMNTitleFile0, dMNTitleAnimatedLogoOffsets[i]));
			fire_logo_sobj->sprite.attr = SP_TRANSPARENT;
			fire_logo_sobj->pos.x = 0.0f;
			fire_logo_sobj->pos.y = 0.0f;
			fire_logo_sobj->sprite.red = 0;
			fire_logo_sobj->sprite.green = 0;
			fire_logo_sobj->sprite.blue = 0;

			fire_logo_dobj->translate.vec.f.x = 0;
			fire_logo_dobj->translate.vec.f.y = 0;
			fire_logo_dobj = fire_logo_dobj->sib_next;
		};

		logo_gobj = lbCommonMakeSpriteGObj(0xB, mnTitleFadeOutLogo, 0xA, 0x80000000, mnTitleRenderLogoNoIntro, 0, 0x80000000, -1, dMNTitleLogoOffset + gMNTitleFile0, 1, mnTitleAnimateLogo, 1);

		logo_sobj = SObjGetStruct(logo_gobj);
		logo_sobj->sprite.attr = SP_TRANSPARENT;
		logo_sobj->sprite.red = 0xFF;
		logo_sobj->sprite.green = 0;
		logo_sobj->sprite.blue = 0;

		fire_logo_dobj->translate.vec.f.x = 0;
		fire_logo_dobj->translate.vec.f.y = 0;

		logo_gobj->user_data.p = animated_logo_gobj;

		gMNTitleLogoAlpha = 0xFF;
	}
}

// 801331FC - Unused?
void mnTitleCreateTextures()
{
	GObj* gobj;
	SObj* sobj;
	s32 i;

	gobj = gcMakeGObjSPAfter(8, 0, 8, 0x80000000);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, 0x80000000, -1);

	for (i = 0; i < 7; i++)
	{
		sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMNTitleFile0, dMNTitleTextureConfigs[i].offset));
		sobj->sprite.attr = SP_TRANSPARENT;

		mnTitleSetPosition(0, sobj, i);
		mnTitleSetColors(sobj, i);
	}
}

// 801332E4
void mnTitleCreateTitleHeaderAndFooter()
{
	s32 i;
	GObj* animation_gobj;
	GObj* gobj;
	SObj* texture_sobj;
	DObj* animation_dobj;

	animation_gobj = gcMakeGObjSPAfter(0xA, 0, 8, 0x80000000);
	gcSetupCommonDObjs(animation_gobj, GetAddressFromOffset(gMNTitleFile0, &FILE_0A7_ANIMATED_TITLE_HEADER_FOOTER_OFFSET_2), 0);
	gcAddAnimJointAll(animation_gobj, GetAddressFromOffset(gMNTitleFile0, &FILE_0A7_ANIMATED_TITLE_HEADER_FOOTER_OFFSET_1), 0);
	gcPlayAnimAll(animation_gobj);

	gobj = gcMakeGObjSPAfter(8, 0, 8, 0x80000000);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, 0x80000000, -1);
	gcAddGObjProcess(gobj, mnTitleAnimateTitle, 1, 1);

	gobj->user_data.p = animation_gobj;

	animation_dobj = DObjGetStruct(animation_gobj)->child;
	for (i = 0; i < 5; i++)
	{
		texture_sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMNTitleFile0, dMNTitleTextureConfigs[i].offset));
		texture_sobj->sprite.attr = SP_TRANSPARENT;

		mnTitleSetPosition(animation_dobj, texture_sobj, i);
		mnTitleSetColors(texture_sobj, i);

		animation_dobj = animation_dobj->sib_next;
	}

	gobj->flags = 1;

	gobj = gcMakeGObjSPAfter(9, 0, 8, 0x80000000);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, 0x80000000, -1);
	gcAddGObjProcess(gobj, mnTitleUpdateHeaderAndFooterPosition, 1, 1);

	gobj->user_data.p = animation_gobj;

	for (i = 5; i < 7; i++)
	{
		texture_sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMNTitleFile0, dMNTitleTextureConfigs[i].offset));
		texture_sobj->sprite.attr = SP_TRANSPARENT;

		mnTitleSetPosition(animation_dobj, texture_sobj, i);
		mnTitleSetColors(texture_sobj, i);

		animation_dobj = animation_dobj->sib_next;
	}

	gobj->flags = 1;
}

// 80133504
void mnTitleCreatePressStart()
{
	GObj* press_start_anim_gobj;
	GObj* press_start_gobj;
	DObj* press_start_anim_dobj;
	SObj* press_start_sobj;

	press_start_anim_gobj = gcMakeGObjSPAfter(0xA, 0, 8, 0x80000000);
	gcSetupCommonDObjs(press_start_anim_gobj, GetAddressFromOffset(gMNTitleFile0, &FILE_0A7_ANIMATED_PRESS_START_OFFSET_2), 0);
	gcAddAnimJointAll(press_start_anim_gobj, GetAddressFromOffset(gMNTitleFile0, &FILE_0A7_ANIMATED_PRESS_START_OFFSET_1), 0);
	gcPlayAnimAll(press_start_anim_gobj);

	press_start_anim_dobj = DObjGetStruct(press_start_anim_gobj)->child;

	press_start_gobj = gcMakeGObjSPAfter(8, 0, 9, 0x80000000);
	gcAddGObjDisplay(press_start_gobj, lbCommonDrawSObjAttr, 1, 0x80000000, -1);
	gcAddGObjProcess(press_start_gobj, mnTitleAnimatePressStart, 1, 1);

	press_start_gobj->user_data.p = press_start_anim_gobj;

	press_start_sobj = lbCommonMakeSObjForGObj(press_start_gobj, GetAddressFromOffset(D_ovl10_801342C4, gMNTitleFile0));
	press_start_sobj->sprite.attr = SP_TRANSPARENT;

	mnTitleSetPosition(press_start_anim_dobj, press_start_sobj, nMNTitleTextureIndexPressStart);
	mnTitleSetColors(press_start_sobj, nMNTitleTextureIndexPressStart);

	press_start_gobj->flags = 1;
}

// 80133634 - discarded language selection?
void func_ovl10_80133634() {}

// 8013363C - Unused?
void mnTitleAnimateSlashEffectGFX(GObj* gobj)
{
	if (gobj->flags != 1)
		gcPlayAnimAll(gobj);
}

// 8013366C
void mnTitleCreateSlashEffectGFX()
{
	GObj* slash_gfx_gobj;

	if (gSceneData.scene_previous == nSCKindOpeningNewcomers)
	{
		slash_gfx_gobj = gcMakeGObjSPAfter(0xC, 0, 0xE, 0x80000000);
		gcAddGObjDisplay(slash_gfx_gobj, gcDrawDObjTreeDLLinksForGObj, 2, 0x80000000, -1);
		gcSetupCustomDObjsWithMObj(slash_gfx_gobj, GetAddressFromOffset(gMNTitleFile0, &FILE_0A7_SLASH_EFFECT_GFX_OFFSET_2), GetAddressFromOffset(gMNTitleFile0, &FILE_0A7_SLASH_EFFECT_GFX_OFFSET_1), 0, 0x1C, 0, 0);
		gcAddAnimJointAll(slash_gfx_gobj, GetAddressFromOffset(gMNTitleFile0, &FILE_0A7_SLASH_EFFECT_GFX_OFFSET_3), 0.0f);
		gcAddMatAnimJointAll(slash_gfx_gobj, GetAddressFromOffset(gMNTitleFile0, &FILE_0A7_SLASH_EFFECT_GFX_OFFSET_4), 0.0f);
		gcPlayAnimAll(slash_gfx_gobj);
		gcAddGObjProcess(slash_gfx_gobj, gcPlayAnimAll, 1, 1);
	}
}

// 80133770
void mnTitleUpdateFireBGOverlayColor(GObj* arg0)
{
	Camera* cam = CameraGetStruct(gMNTitleFireBGOverlayCameraGObj);

	if (gMNTitleTransitionFramesElapsed >= 40)
	{
		if (gMNTitleTransitionFramesElapsed < 111)
		{
			gMNTitleFireBGOverlayRed += 4.0f;

			TAKE_MIN(gMNTitleFireBGOverlayRed, 255);
		}
		else
		{
			if (gMNTitleFireBGOverlayTimer == 0)
			{
				s32 var_v1;

				gMNTitleFireBGOverlayTimer = 260;

				var_v1 = mtTrigGetRandomTimeUCharRange(7);

				if (var_v1 == gMNTitleFireBGOverlayIndex)
				{
					var_v1++;

					if (var_v1 >= 7)
						var_v1 = 0;
				}

				gMNTitleFireBGOverlayIndex = var_v1;

				gMNTitleFireBGOverlayDeltaRed = (dMNTitleFireBGOverlayColorArrayRed[var_v1] - gMNTitleFireBGOverlayRed) / 80.0f;
				gMNTitleFireBGOverlayDeltaGreen = (dMNTitleFireBGOverlayColorArrayGreen[var_v1] - gMNTitleFireBGOverlayGreen) / 80.0f;
				gMNTitleFireBGOverlayDeltaBlue = (dMNTitleFireBGOverlayColorArrayBlue[var_v1] - gMNTitleFireBGOverlayBlue) / 80.0f;
			}

			if (gMNTitleFireBGOverlayTimer >= 80)
			{
				gMNTitleFireBGOverlayRed += gMNTitleFireBGOverlayDeltaRed;
				gMNTitleFireBGOverlayGreen += gMNTitleFireBGOverlayDeltaGreen;
				gMNTitleFireBGOverlayBlue += gMNTitleFireBGOverlayDeltaBlue;
			}

			gMNTitleFireBGOverlayTimer--;
		}

		TAKE_MIN(gMNTitleFireBGOverlayRed, 255.0f);
		TAKE_MIN(gMNTitleFireBGOverlayGreen, 255.0f);
		TAKE_MIN(gMNTitleFireBGOverlayBlue, 255.0f);

		TAKE_MAX(gMNTitleFireBGOverlayRed, 0.0f);
		TAKE_MAX(gMNTitleFireBGOverlayGreen, 0.0f);
		TAKE_MAX(gMNTitleFireBGOverlayBlue, 0.0f);

		cam->color = (((s32) gMNTitleFireBGOverlayRed << 0x18) | ((s32) gMNTitleFireBGOverlayGreen << 0x10) | ((s32) gMNTitleFireBGOverlayBlue << 8) | 0xFF);
	}
}

// 80133A94
s32 mnTitleCreateViewports()
{
	s32 unused[2];
	GObj *camera_gobj;
	Camera *cam;

	gMNTitleFireBGOverlayCameraGObj = gcMakeDefaultCameraGObj(2, 0x80000000, 0x64, 3, 0xFF);
	gcAddGObjProcess(gMNTitleFireBGOverlayCameraGObj, mnTitleUpdateFireBGOverlayColor, 1, 1);

	camera_gobj = gcMakeCameraGObj(2, 0, 3, 0x80000000, lbCommonScissorSpriteCamera, 0x3C, 0x00000003, -1, 0, 1, 0, 1, 0);
	cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	camera_gobj = gcMakeCameraGObj(3, 0, 3, 0x80000000, func_80017EC0, 0x28, 0x00000004, -1, 0, 1, 0, 1, 0);
	cam = CameraGetStruct(camera_gobj);
	gcAddOMMtxForCamera(cam, 5, 0);
	gcAddOMMtxForCamera(cam, 6, 0);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	cam->vec.at.z = 0.0F;
	cam->vec.at.y = 0.0F;
	cam->vec.at.x = 0.0F;
	cam->vec.eye.z = 2000.0F;
	cam->vec.eye.y = 0.0F;
	cam->vec.eye.x = 0.0F;

	camera_gobj = gcMakeCameraGObj(3, 0, 3, 0x80000000, func_80017EC0, 0x50, 0x00000008, -1, 1, 1, 0, 1, 0);
	cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	cam->vec.at.z = 0.0F;
	cam->vec.at.y = 0.0F;
	cam->vec.at.x = 0.0F;
	cam->vec.eye.z = 1000.0F;
	cam->vec.eye.y = 0.0F;
	cam->vec.eye.x = 0.0F;
	cam->projection.persp.fovy = 30.0F;

	return unused[0];
}

// 80133CFC
void mnTitleRenderLogoFireEffect(GObj *gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

	lbParticleDrawTextures(gobj);

	gDPSetTexturePersp(gDisplayListHead[0]++, G_TP_PERSP);
	gDPSetDepthSource(gDisplayListHead[0]++, G_ZS_PIXEL);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 80133DDC
void mnTitleCreateLogoFire()
{
	GObj* logo_fire_gobj;

	logo_fire_gobj = gcMakeGObjSPAfter(0xF, 0, 4, 0x80000000);
	gcAddGObjDisplay(logo_fire_gobj, mnTitleRenderLogoFireEffect, 3, 0x80000000, -1);

	logo_fire_gobj->cam_mask = 0x00000001;

	gMNTitleParticleBankId = efAllocGetAddParticleBankID(&lTitleScreenParticleBankGenLo, &lTitleScreenParticleBankGenHi, &lTitleScreenParticleBankTextureLo, &lTitleScreenParticleBankTextureHi);
}

// 80133E68
void mnTitleLogoFireMakeEffect()
{
	GObj* logo_fire_effect_gobj;
	lbGenerator *gtor;

	if (gSceneData.scene_previous == nSCKindOpeningNewcomers)
	{
		logo_fire_effect_gobj = gcMakeGObjSPAfter(0xE, 0, 5, 0x80000000);
		gcSetupCommonDObjs(logo_fire_effect_gobj, GetAddressFromOffset(gMNTitleFile0, &FILE_0A7_LOGO_FIRE_EFFECT_OFFSET_1), 0);
		gcAddAnimJointAll(logo_fire_effect_gobj, GetAddressFromOffset(gMNTitleFile0, &FILE_0A7_LOGO_FIRE_EFFECT_OFFSET_2), 0);
		gcPlayAnimAll(logo_fire_effect_gobj);
		gcAddGObjProcess(logo_fire_effect_gobj, gcPlayAnimAll, 1, 1);

		gtor = lbParticleMakeGenerator(gMNTitleParticleBankId, 0);
		if (gtor != NULL)
			gtor->dobj = DObjGetStruct(logo_fire_effect_gobj)->child->sib_next->child;
	}
}

// 80133F3C
void mnTitleCreateMainRoutines()
{
	gMNTitleMainGObj = gcMakeGObjSPAfter(0, mnTitleMain, 1, 0x80000000);
	gMNTitleTransitionsGObj = gcMakeGObjSPAfter(0, mnTitleHandleTransitions, 0xF, 0x80000000);
}

// 80133F90
void mnTitleInit()
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		func_80004494(i);
	}

	mnTitleLoadFiles();
	mnTitleCreateMainRoutines();
	efAllocInitParticleBank();
	mnTitleCreateLogoFire();
	mnTitleCreateViewports();
	mnTitleInitVars();
	mnTitleCreateFire();
	mnTitleCreateLogo();
	mnTitleCreateTitleHeaderAndFooter();
	func_ovl10_80133634();
	mnTitleCreatePressStart();
	mnTitleCreateSlashEffectGFX();
	mnTitleLogoFireMakeEffect();

	if (gSceneData.scene_previous == nSCKindOpeningNewcomers)
		while (func_8000092C() < 0x1077U);
}

// 80134074
void mnTitleSetupDisplayList(Gfx **display_list)
{
	gSPDisplayList(display_list[0]++, dMNTitleDisplayList);
}

// 80134098
void mnTitleAdvanceFrame()
{
	func_8000A5E4();
}

// 801340B8
void mnTitleStartScene()
{
	D_ovl10_80134370.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl10_80134370);

	if ((!gSceneData.main_title_animation_viewed) && (gSaveData.unk5E3 < 0x100))
	{
		gSaveData.unk5E3++;
		lbBackupWrite();
	}

	D_ovl10_8013438C.arena_size = (u32) ((uintptr_t)&lOverlay10ArenaHi - (uintptr_t)&lOverlay10ArenaLo);
	gsGTLSceneInit(&D_ovl10_8013438C);
}

// 80134140
void mnTitleLoadFiles()
{
	lbRelocSetup rldmSetup;

	rldmSetup.table_addr = &lLBRelocTableAddr;
	rldmSetup.table_files_num = &lLBRelocTableFilesNum;
	rldmSetup.file_heap = NULL;
	rldmSetup.file_heap_size = 0;
	rldmSetup.status_buf = (lbFileNode*) D_ovl10_801344A0;
	rldmSetup.status_buf_size = 0x20;
	rldmSetup.force_buf = 0;
	rldmSetup.force_buf_size = 0;
	lbRelocInitSetup(&rldmSetup);
	lbRelocLoadFilesExtern(D_ovl10_80134420, ARRAY_COUNT(D_ovl10_80134420), &gMNTitleFile0, gsMemoryAlloc(lbRelocGetAllocSize(D_ovl10_80134420, ARRAY_COUNT(D_ovl10_80134420)), 0x10));
}
