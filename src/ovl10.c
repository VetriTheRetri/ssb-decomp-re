#include <debug.h>
#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <lb/library.h>
#include <sys/video.h>
#include <sys/taskman.h>

#include "ovl10.h"

// Externs
extern uintptr_t lTitleScreenParticleBankGenLo; // B22C30
extern uintptr_t lTitleScreenParticleBankGenHi; // B22D40
extern uintptr_t lTitleScreenParticleBankTextureLo; // B22D40
extern uintptr_t lTitleScreenParticleBankTextureHi; // B277B0
extern uintptr_t lOverlay10ArenaLo; // 0x801345B0
extern uintptr_t lOverlay10ArenaHi; // 0x80369240

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

extern void dbMenuUpdateMenuInputs();
extern void syRdpSetViewport(void*, f32, f32, f32, f32);

// Forward declarations
void mnTitleTransitionFromFireLogo();
void mnTitleShowGObjLinkID(s32 link_id);
void mnTitleSetPosition(DObj* dobj, SObj *sobj, s32 index);
void mnTitleSetColors(SObj *sobj, s32 index);
void mnTitleShowFire(GObj *fire_gobj);
void mnTitleLoadFiles();
void mnTitleFuncUpdate(void);
void mnTitleFuncStart(void);
void mnTitleFuncLights(Gfx**);

extern char dSCManagerBuildDate[/* */];

extern u32 func_8000092C();

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80134430 (.rodata)
const char dMNTitleGameLang[/* */] = { "English" };

// 0x801341E0
intptr_t dMNTitleAnimatedLogoOffsets[/* */] =
{
	0x00008FC8, // Full circle cutout
	0x000097E8, // Vertical rectangle
	0x00009B48, // Horizontal rectangle
	0x0000BBB0
};

// 0x801341F0
intptr_t dMNTitleFireSpriteOffsets[/* */] =
{
	0x00001018, 0x00002078, 0x000030d8, 0x00004138,
	0x00005198, 0x000061f8, 0x00007258, 0x000082b8,
	0x00009318, 0x0000a378, 0x0000b3d8, 0x0000c438,
	0x0000d498, 0x0000e4f8, 0x0000f558, 0x000105b8,
	0x00011618, 0x00012678, 0x000136d8, 0x00014738,
	0x00015798, 0x000167f8, 0x00017858, 0x000188b8,
	0x00019918, 0x0001a978, 0x0001b9d8, 0x0001ca38,
	0x0001da98, 0x0001eaf8
};

// 0x80134268
mnTitleTextureConfig dMNTitleTextureConfigs[/* */] =
{
	0x0000009d, 0x0000005e, 0x00011988,
	0x000000a1,	0x00000058, 0x000245c8,
	0x00000037, 0x00000060, 0x00016728,
	0x0000010c, 0x00000060, 0x00025188,
	0x0000010e, 0x00000084, 0x00011aa8,
	0x000000a0, 0x000000d0, 0x00015320,
	0x000000a0, 0x0000000f, 0x0000c208,
	0x000000a2, 0x000000b1, 0x00015a48,
	0x00000104, 0x0000003c, 0x0000bbb0,
	0x00000115, 0x0000009d, 0x0000f398
};

// 0x801342E0
void *dMNTitleUnknown0x801342E0[/* */] = { NULL, NULL, dMNTitleGameLang, NULL, NULL, NULL, NULL, NULL, NULL, dSCManagerBuildDate, NULL, NULL, NULL, NULL };

// 0x80134318
u8 dMNTitleFireColorsR[/* */] = { 0xFF, 0xFF, 0xFF, 0xFF, 0xE6, 0xFF, 0xFF };

// 0x80134320
u8 dMNTitleFireColorsG[/* */] = { 0xFF, 0xF0, 0xFF, 0xD1, 0xFF, 0xE2, 0xD2 };

// 0x80134328
u8 dMNTitleFireColorsB[/* */] = { 0xFF, 0x9B, 0x64, 0xD1, 0xE6, 0xB8, 0x94 };

// 0x80134330
Lights1 dMNTitleLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x0A, 0x32, 0x32);

// 0x80134348
Gfx dMNTitleDisplayList[/* */] =
{
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPSetLights1(dMNTitleLights1),
	gsSPEndDisplayList()
};

// 0x80134370
syVideoSetup dMNTitleDisplaySetup =
{
	&gSCSubsysFramebuffer0,
	&gSCSubsysFramebuffer1,
	&gSCSubsysFramebuffer2,
	NULL,
	320,
	240,
	SYVIDEO_FLAG_DIVOT        | SYVIDEO_FLAG_DITHERFILTER | SYVIDEO_FLAG_GAMMADITHER |
	0x800                     | SYVIDEO_FLAG_NOBLACKOUT   | SYVIDEO_FLAG_NOGAMMA     |
    SYVIDEO_FLAG_COLORDEPTH16 | SYVIDEO_FLAG_NOSERRATE    | 0x1
};

// 0x8013438C
syTaskmanSetup dMNTitleTaskmanSetup =
{
    // Task Logic Buffer Setup
    {
        0,                          // ???
        mnTitleFuncUpdate,          // Update function
        func_8000A340,              // Frame draw function
        &ovl10_BSS_END,             // Allocatable memory pool start
        0,                          // Allocatable memory pool size
        1,                          // ???
        2,                          // Number of contexts?
        sizeof(Gfx) * 3584,         // Display List Buffer 0 Size
        sizeof(Gfx) * 1280,         // Display List Buffer 1 Size
        0,                          // Display List Buffer 2 Size
        0,                          // Display List Buffer 3 Size
        0x1000,                     // Graphics Heap Size
        2,                          // ???
        0x1000,                     // RDP Output Buffer Size
        mnTitleFuncLights,         	// Pre-render function
        update_contdata,            // Controller I/O function
    },

    0,                              // Number of GObjThreads
    sizeof(u64) * 192,              // Thread stack size
    0,                              // Number of thread stacks
    0,                              // ???
    0,                              // Number of GObjProcesses
    0,                              // Number of GObjs
    sizeof(GObj),                   // GObj size
    0,                              // Number of Object Manager Matrices
    NULL,                           // Matrix function list
    NULL,                           // Function for ejecting DObjDynamicStore?
    0,                              // Number of AObjs
    0,                              // Number of MObjs
    0,                              // Number of DObjs
    sizeof(DObj),                   // DObj size
    0,                              // Number of SObjs
    sizeof(SObj),                   // SObj size
    0,                              // Number of Cameras
    sizeof(Camera),                 // Camera size
    
    mnTitleFuncStart               	// Task start function
};

// 0x80134418
s32 D_ovl10_80134418 = 0;

// 0x8013441C
s32 D_ovl10_8013441C = 0;

// 0x80134420
u32 dMNTitleFileIDs[/* */] = { 0xA7, 0xA8 };

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80134440
s32 D_ovl10_80134440[2];

// 0x80134448
GObj *sMNTitleFireCameraGObj;

// 0x8013444C
s32 sMNTitleParticleBankID;

// 0x80134450
mnTitleLayout sMNTitleLayout;

// 0x80134454
GObj *sMNTitleTransitionsGObj;

// 0x80134458
GObj *sMNTitleMainGObj;

// 0x8013445C
s32 sMNTitleTransitionTotalTimeTics;

// 0x80134460
sb32 sMNTitleIsStartActorProcess;

// 0x80134464
s32 sMNTitleFireAlpha;

// 0x80134468
s32 sMNTitleFireAlphaUnused;

// 0x8013446C
s32 sMNTitleLogoAlpha;

// 0x80134470
sb32 sMNTitleIsProceedScene;

// 0x80134474
s32 sMNTitleProceedSceneWait;

// 0x80134478
s32 sMNTitleFireTimer;

// 0x8013447C
f32 sMNTitleFireColorR;

// 0x80134480
f32 sMNTitleFireColorG;

// 0x80134484
f32 sMNTitleFireColorB;

// 0x80134488
f32 sMNTitleFireDeltaRed;

// 0x8013448C
f32 sMNTitleFireDeltaGreen;

// 0x80134490
f32 sMNTitleFireDeltaBlue;

// 0x80134494
s32 sMNTitleFireColorID;

// 0x80134498
u32 sMNTitleAllowProceedWait;

// 0x801344A0
lbFileNode sMNTitleStatusBuffer[32];

// 0x801345A0
void *sMNTitleFiles[2];

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
s32 mnTitleGetFighterKindsNum(u16 mask)
{
	s32 i, j;

	for (i = 0, j = 0; i < sizeof(u16) * 8; i++, mask = mask >> 1)
	{
		if (mask & 1)
		{
			j++;
		}
	}
	return j;
}

// 0x80131B78
s32 mnTitleGetShuffledFighterKind(u16 this_mask, u16 prev_mask, s32 random)
{
	s32 ft_kind = -1;

	random++;

	do
	{
		ft_kind++;

		if ((this_mask & LBBACKUP_FIGHTER_MASK_DEFINE(ft_kind)) && !(prev_mask & LBBACKUP_FIGHTER_MASK_DEFINE(ft_kind)))
		{
			random--;
		}
	}
	while (random != 0);

	return ft_kind;
}

// 0x80131BC4
s32 mnTitleSetDemoFighterKinds(void)
{
	u16 unlocked_mask;
	s32 unlocked_count;
	s32 non_recently_demoed_count;

	unlocked_mask = gSaveData.fighter_mask | LBBACKUP_CHARACTER_MASK_STARTER;

	if (~unlocked_mask & gSceneData.demo_mask_prev)
	{
		gSceneData.demo_mask_prev = 0;
	}
	unlocked_count = mnTitleGetFighterKindsNum(unlocked_mask);

	if (unlocked_count <= mnTitleGetFighterKindsNum(gSceneData.demo_mask_prev))
	{
		gSceneData.demo_mask_prev = 0;
	}
	unlocked_count = mnTitleGetFighterKindsNum(unlocked_mask);

	gSceneData.demo_ft_kind[0] = mnTitleGetShuffledFighterKind(unlocked_mask, gSceneData.demo_mask_prev, mtTrigGetRandomIntRange(unlocked_count - mnTitleGetFighterKindsNum(gSceneData.demo_mask_prev)));

	if (!(gSceneData.demo_mask_prev))
	{
		gSceneData.demo_first_ft_kind = gSceneData.demo_ft_kind[0];
	}
	gSceneData.demo_mask_prev |= gmSaveChrMask(gSceneData.demo_ft_kind[0]);

	unlocked_count = mnTitleGetFighterKindsNum(unlocked_mask);

	non_recently_demoed_count = unlocked_count - mnTitleGetFighterKindsNum(gSceneData.demo_mask_prev);

	if (non_recently_demoed_count == 0)
	{
		gSceneData.demo_ft_kind[1] = gSceneData.demo_first_ft_kind;
	}
	else
	{
		gSceneData.demo_ft_kind[1] = mnTitleGetShuffledFighterKind(unlocked_mask, gSceneData.demo_mask_prev, mtTrigGetRandomIntRange(non_recently_demoed_count));
		gSceneData.demo_mask_prev |= gmSaveChrMask(gSceneData.demo_ft_kind[1]);
	}
}

// 0x80131CF4
void mnTitleInitVars(void)
{
	s32 color_id;

	if (gSceneData.scene_previous == nSCKindOpeningNewcomers)
	{
		sMNTitleLayout = nMNTitleLayoutOpening;
		sMNTitleTransitionTotalTimeTics = 0;
		sMNTitleFireColorR = sMNTitleFireColorG = sMNTitleFireColorB = 0.0F;
	}
	else
	{
		auStopBGM();
		func_800266A0_272A0();

		sMNTitleLayout = nMNTitleLayoutAnimate;
		sMNTitleTransitionTotalTimeTics = 169;

		color_id = mtTrigGetRandomTimeUCharRange(7);
		sMNTitleFireColorID = color_id;
		sMNTitleFireColorR = dMNTitleFireColorsR[color_id];
		sMNTitleFireColorG = dMNTitleFireColorsG[color_id];
		sMNTitleFireColorB = dMNTitleFireColorsB[color_id];
	}
	sMNTitleFireTimer = 0;
	sMNTitleIsProceedScene = FALSE;
	sMNTitleProceedSceneWait = 3;
	sMNTitleIsStartActorProcess = FALSE;
	sMNTitleFireDeltaRed = 0.0F;
	sMNTitleFireDeltaGreen = 0.0F;
	sMNTitleFireDeltaBlue = 0.0F;
}

// 0x80131E68
void mnTitleSetEndLogoPosition(void)
{
	GObj *smash_logo_gobj;
	SObj *smash_logo_sobj;

	smash_logo_gobj = gOMObjCommonLinks[10];

	if (gSceneData.scene_previous == nSCKindOpeningNewcomers)
	{
		gcEndProcessAll(smash_logo_gobj);
	}
	smash_logo_sobj = SObjGetStruct(smash_logo_gobj);

	mnTitleSetPosition(NULL, smash_logo_sobj, nMNTitleTextureIndexLogo);

	smash_logo_sobj->user_data.s = 0xFF;
	sMNTitleLogoAlpha = 0x4C;

	smash_logo_sobj->sprite.scalex = 1.0F;
	smash_logo_sobj->sprite.scaley = 1.0F;
}

// 0x80131EE4
void mnTitleSetEndLayout(void)
{
	s32 i;
	GObj *texture_gobj;
	GObj *gobj;
	SObj *sobj;

	gobj = gOMObjCommonLinks[6];

#ifdef AVOID_UB
	texture_gobj = NULL;
#endif

	while (gobj != NULL)
	{
		if (gobj->gobj_id == 5)
		{
			mnTitleShowFire(gobj);
		}
		gobj = gobj->link_next;
	}

	gobj = gOMObjCommonLinks[8];

	while (gobj != NULL)
	{
		if (gobj->gobj_id == 8)
		{
			texture_gobj = gobj;
		}
		gobj = gobj->link_next;
	}

#ifdef AVOID_UB
	if (texture_gobj != NULL)
	{
#endif
		// UB: texture_gobj may not be defined!
		gcEndProcessAll(texture_gobj);

		sobj = SObjGetStruct(texture_gobj);
		texture_gobj->flags = GOBJ_FLAG_NONE;

		for (i = 0; sobj != NULL; i++, sobj = sobj->next)
		{
			mnTitleSetPosition(NULL, sobj, i);
			mnTitleSetColors(sobj, i);

			sobj->sprite.scalex = sobj->sprite.scaley = 1.0F;
		}
#ifdef AVOID_UB
	}
#endif
}

// 0x80131FD0
void mnTitleProceedDemoNext(void)
{
	u8 scene_previous = gSceneData.scene_previous;

	gcMakeDefaultCameraGObj(2, GOBJ_LINKORDER_DEFAULT, 0, CAMERA_FLAG_FILLCOLOR, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
	mnTitleSetDemoFighterKinds();
	func_800266A0_272A0();

	gSceneData.scene_previous = gSceneData.scene_current;

	switch (scene_previous)
	{
	case nSCKindExplain:
		gSceneData.scene_current = nSCKindCharacters;
		auPlaySong(0, nSYAudioBGMExplain);
		break;

	case nSCKindModeSelect:
	case nSCKindAutoDemo:
		gSceneData.scene_current = nSCKindN64;
		break;

	default:
		gSceneData.scene_current = nSCKindExplain;
		break;
	}
	gSceneData.is_extend_demo_wait = TRUE;
	sMNTitleIsProceedScene = TRUE;
}

// 0x80132090
void mnTitleProceedModeSelect(void)
{
	gcMakeDefaultCameraGObj(2, GOBJ_LINKORDER_DEFAULT, 0, CAMERA_FLAG_FILLCOLOR, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));

	gSceneData.scene_previous = gSceneData.scene_current;
	gSceneData.scene_current = nSCKindModeSelect;

	func_800266A0_272A0();
	func_800269C0_275C0(nSYAudioFGMTitlePressStart);

	sMNTitleIsProceedScene = TRUE;
}

// 0x801320F0
void mnTitleFuncRun(GObj *gobj)
{
	s32 i;
	u16 buttons;

	if (sMNTitleIsStartActorProcess == 0)
	{
		sMNTitleIsStartActorProcess++;
	}
	else if (sMNTitleIsProceedScene != FALSE)
	{
		sMNTitleProceedSceneWait--;

		if (sMNTitleProceedSceneWait == 0)
		{
			syTaskmanSetLoadScene();
		}
	}
	else for (i = 0; i < ARRAY_COUNT(gPlayerControllers); i++)
	{
		buttons = gPlayerControllers[i].button_tap;

		if (gPlayerControllers[i].button_tap & (A_BUTTON | B_BUTTON | START_BUTTON))
		{
			if (sMNTitleLayout != 0)
			{
				if ((gSceneData.is_title_anim_viewed) || (osResetType != 0))
				{
					if (!(buttons & B_BUTTON))
					{
						mnTitleProceedModeSelect();
						break;
					}
				}
			}
			else
			{
				sMNTitleTransitionTotalTimeTics = 169;
				sMNTitleLayout = nMNTitleLayoutAnimate;

				mnTitleTransitionFromFireLogo();
				auStopBGM();
				func_800266A0_272A0();
				break;
			}
		}
	}
}

// 0x80132210
void mnTitleUpdateFireVars(void)
{
	s32 index = mtTrigGetRandomTimeUCharRange(7);

	sMNTitleFireColorID = index;

	sMNTitleFireColorR = sMNTitleFireColorG = sMNTitleFireColorB = 0.0F;

	sMNTitleFireDeltaRed = (dMNTitleFireColorsR[index] - sMNTitleFireColorR) / 80.0F;
	sMNTitleFireDeltaGreen = (dMNTitleFireColorsG[index] - sMNTitleFireColorG) / 80.0F;
	sMNTitleFireDeltaBlue = (dMNTitleFireColorsB[index] - sMNTitleFireColorB) / 80.0F;
}

// 0x80132320
void mnTitleTransitionFromFireLogo(void)
{
	GObj *current_gobj;
	GObj *next_gobj;

	current_gobj = gOMObjCommonLinks[7];

	while (current_gobj != NULL)
	{
		next_gobj = current_gobj->link_next;

		if (current_gobj->gobj_id == 6)
		{
			current_gobj->flags = GOBJ_FLAG_HIDDEN;
		}
		current_gobj = next_gobj;
	}
	if (gOMObjCommonLinks[4] != NULL)
	{
		gcEjectGObj(gOMObjCommonLinks[4]);
	}
	if (gOMObjCommonLinks[14] != NULL)
	{
		gcEjectGObj(gOMObjCommonLinks[14]);
	}
	mnTitleShowGObjLinkID(6);
	mnTitleUpdateFireVars();
}

// 0x801323AC
void mnTitleShowGObjLinkID(s32 link_id)
{
	GObj *gobj = gOMObjCommonLinks[link_id];

	while (gobj != NULL)
	{
		gobj->flags = GOBJ_FLAG_NONE;

		gobj = gobj->link_next;
	}
}

// 0x801323DC
void mnTitleNextLayout(void)
{
	if ((sMNTitleLayout == nMNTitleLayoutOpening) && (gSceneData.scene_previous == nSCKindOpeningNewcomers))
	{
		gSceneData.is_extend_demo_wait = FALSE;
	}
	sMNTitleLayout++;
}

// 0x80132414
void mnTitleSetMainMenuFramesToWait(void)
{
	if (sMNTitleLayout == nMNTitleLayoutFinal)
	{
		sMNTitleAllowProceedWait = 280;
	}
	else sMNTitleAllowProceedWait = 364;
}

// 0x80132448
void mnTitleTransitionsFuncRun(GObj *gobj)
{
	sMNTitleTransitionTotalTimeTics++;

	if (sMNTitleTransitionTotalTimeTics == sMNTitleAllowProceedWait)
	{
		gSceneData.is_title_anim_viewed = TRUE;
	}
	switch (sMNTitleTransitionTotalTimeTics)
	{
	case 111:
		mnTitleTransitionFromFireLogo();
		break;

	case 170:
		mnTitleSetEndLogoPosition();
		mnTitleShowGObjLinkID(8);
		mnTitleNextLayout();
		mnTitleSetMainMenuFramesToWait();
		break;

	case 220:
		mnTitleSetEndLayout();
		break;

	case 280:
		mnTitleShowGObjLinkID(9);
		break;

	case 35:
	case 65:
		func_800269C0_275C0(nSYAudioFGMOpeningBatM);
		break;

	case 200:
		if (sMNTitleLayout == nMNTitleLayoutAnimate)
		{
			func_800269C0_275C0(nSYAudioFGMPublicityPrologue);
		}
		break;

	case 214:
	case 240:
		// Maybe a FGM call in J version?
		break;

	case 650:
		if (gSceneData.is_extend_demo_wait == FALSE)
		{
			mnTitleProceedDemoNext();
		}
		break;

	case 1190:
		if (gSceneData.is_extend_demo_wait != FALSE)
		{
			mnTitleProceedDemoNext();
		}
		break;
	}
}

// 0x801325D4
void mnTitlePlayAnim(GObj *gobj)
{
	GObj *effect_gobj;
	SObj *sobj;
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
		sobj->pos.x = ((dobj->translate.vec.f.x + 160.0F) - (sobj->sprite.width * sobj->sprite.scalex * 0.5F));
		sobj->pos.y = ((120.0F - dobj->translate.vec.f.y) - (sobj->sprite.height * sobj->sprite.scaley * 0.5F));

		sobj = sobj->next;
		dobj = dobj->sib_next;
	}
}

// 0x801326A4
void mnTitlePressStartProcUpdate(GObj *press_start_gobj)
{
	if (press_start_gobj->flags != GOBJ_FLAG_HIDDEN)
	{
		mnTitlePlayAnim(press_start_gobj);
	}
}

// 0x801326D4
void mnTitleTitleProcUpdate(GObj *title_gobj)
{
	if (title_gobj->flags != GOBJ_FLAG_HIDDEN)
	{
		mnTitlePlayAnim(title_gobj);
	}
}

// 0x80132704
void mnTitleUpdateHeaderAndFooterPosition(GObj *header_footer_gobj)
{
	SObj *header_footer_sobj = SObjGetStruct(header_footer_gobj);

	if ((sMNTitleLayout != nMNTitleLayoutOpening) || (gSceneData.scene_previous != nSCKindOpeningNewcomers))
	{
		mnTitleSetPosition(NULL, header_footer_sobj, nMNTitleTextureIndexFooter);
		mnTitleSetPosition(NULL, header_footer_sobj->next, nMNTitleTextureIndexHeader);
	}
}

// 0x80132764
void mnTitleSetPosition(DObj* dobj, SObj *sobj, s32 index)
{
	mnTitleTextureConfig* texture_config;

	if (dobj != NULL)
	{
		texture_config = &dMNTitleTextureConfigs[index];
		dobj->translate.vec.f.x = texture_config->x - 160.0F;
		dobj->translate.vec.f.y = -(texture_config->y - 120.0F);
	}

	texture_config = &dMNTitleTextureConfigs[index];
	sobj->pos.x = (texture_config->x - (sobj->sprite.width * 0.5F));
	sobj->pos.y = (texture_config->y - (sobj->sprite.height * 0.5F));
}

// 0x8013282C
void mnTitleSetColors(SObj *sobj, s32 index)
{
	if (index < nMNTitleTextureIndexFooter)
	{
		if ((index == nMNTitleTextureIndexDropShadow) || (index == nMNTitleTextureIndexTM))
		{
			sobj->sprite.red = 0x00;
			sobj->sprite.green = 0x00;
			sobj->sprite.blue = 0x00;
		}
		else
		{
			sobj->sprite.red = 0xFF;
			sobj->sprite.green = 0xFE;
			sobj->sprite.blue = 0x2A;
			sobj->envcolor.r = 0x00;
			sobj->envcolor.g = 0x00;
			sobj->envcolor.b = 0x00;
		}
	}
	else switch (index)
	{
	case nMNTitleTextureIndexFooter:
		sobj->sprite.red = 0xB7;
		sobj->sprite.green = 0xAE;
		sobj->sprite.blue = 0x7C;
		sobj->envcolor.r = 0x14;
		sobj->envcolor.g = 0x12;
		sobj->envcolor.b = 0x06;
		break;
			
	case nMNTitleTextureIndexHeader:
		sobj->sprite.red = 0x14;
		sobj->sprite.green = 0x12;
		sobj->sprite.blue = 0x06;
		break;

	case nMNTitleTextureIndexPressStart:
		sobj->sprite.red = 0xFF;
		sobj->sprite.green = 0xFF;
		sobj->sprite.blue = 0xFF;
		sobj->envcolor.r = 0x17;
		sobj->envcolor.g = 0x10;
		sobj->envcolor.b = 0xA4;
		break;

	case nMNTitleTextureIndexTM2:
		sobj->sprite.red = 0x15;
		sobj->sprite.green = 0x13;
		sobj->sprite.blue = 0x06;
		break;
	}
}

// 0x80132940
void mnTitleFireFuncDisplay(GObj *fire_gobj)
{
	s32 i;
	SObj *fire_sobj = SObjGetStruct(fire_gobj);

	for (i = 0; i < 2; i++)
	{
		lbCommonPrepSObjSpriteAttrs(gSYTaskmanDLHeads, fire_sobj);

		gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0, 0, 0, sMNTitleFireAlpha);
		gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, TEXEL0,  TEXEL0, 0, PRIMITIVE, 0,  0, 0, 0, TEXEL0,  TEXEL0, 0, PRIMITIVE, 0);

		lbCommonPrepSObjDraw(gSYTaskmanDLHeads, fire_sobj);
		lbCommonClearExternSpriteParams();

		fire_sobj = fire_sobj->next;
	}
}

// 0x80132A20
void mnTitleFireFuncRun(GObj *fire_gobj)
{
	if (fire_gobj->flags != GOBJ_FLAG_HIDDEN)
	{
		sMNTitleFireAlpha += 0x0D;

		if (sMNTitleFireAlpha > 0xFF)
		{
			sMNTitleFireAlpha = 0xFF;
		}
	}
}

// 0x80132A58
void mnTitleShowFire(GObj *fire_gobj)
{
	sMNTitleFireAlpha = 0xFF;

	fire_gobj->flags = GOBJ_FLAG_NONE;
}

// 0x80132A6C
void mnTitleUpdateFireSprite(SObj *sobj, sb32 is_next)
{
	Sprite *sprite = lbRelocGetDataFromFile(Sprite*, sMNTitleFiles[1], dMNTitleFireSpriteOffsets[sobj->user_data.s]);

	sobj->sprite = *sprite;
	sobj->sprite.attr = SP_TRANSPARENT;

	sobj->sprite.scalex = (is_next != FALSE) ? 9.5F : 12.0F;
	sobj->sprite.scaley = (is_next != FALSE) ? 7.0F : 8.5F;

	sobj->user_data.s++;

	if (sobj->user_data.s >= 30)
	{
		sobj->user_data.s = 0;
	}
}

// 0x80132B38
void mnTitleFireProcUpdate(GObj *fire_gobj)
{
	SObj *fire_sobj_1 = SObjGetStruct(fire_gobj), *fire_sobj_2 = fire_sobj_1->next;

	mnTitleUpdateFireSprite(fire_sobj_1, FALSE);
	mnTitleUpdateFireSprite(fire_sobj_2, TRUE);
}

// 0x80132B70
void mnTitleMakeFire(void)
{
	s32 i;
	s32 target_texture;
	GObj *fire_gobj;
	SObj *fire_sobj;

	fire_gobj = gcMakeGObjSPAfter(5, mnTitleFireFuncRun, 6, GOBJ_LINKORDER_DEFAULT);

	if (fire_gobj != NULL)
	{
		gcAddGObjDisplay(fire_gobj, mnTitleFireFuncDisplay, 0, GOBJ_DLLINKORDER_DEFAULT, -1);
		gcAddGObjProcess(fire_gobj, mnTitleFireProcUpdate, nOMObjProcessKindProc, 1);

		for (i = 0; i < 2; i++)
		{
			if (i != 0)
			{
				target_texture = 0;
			}
			else target_texture = 12;

			fire_sobj = lbCommonMakeSObjForGObj(fire_gobj, lbRelocGetDataFromFile(Sprite*, sMNTitleFiles[1], dMNTitleFireSpriteOffsets[target_texture]));

			fire_sobj->sprite.attr = SP_TRANSPARENT;

			if (i != 0)
			{
				fire_sobj->pos.x = 8.0F;
			}
			else fire_sobj->pos.x = -32.0F;

			if (i != 0)
			{
				fire_sobj->pos.y = 8.0F;
			}
			else fire_sobj->pos.y = -16.0F;

			if (i != 0)
			{
				fire_sobj->sprite.scalex = 9.5F;
			}
			else fire_sobj->sprite.scalex = 12.0F;

			if (i != 0)
			{
				fire_sobj->sprite.scaley = 7.0F;
			}
			else fire_sobj->sprite.scaley = 8.5F;

			fire_sobj->user_data.s = target_texture;
		}

		sMNTitleFireAlpha = sMNTitleFireAlphaUnused = 0;
		fire_gobj->flags = GOBJ_FLAG_HIDDEN;

		if (gSceneData.scene_previous != nSCKindOpeningNewcomers)
		{
			mnTitleShowFire(fire_gobj);
		}
	}
}

// 0x80132D5C
void mnTitleLogoProcUpdate(GObj *logo_gobj)
{
	GObj *effect_gobj = logo_gobj->user_data.p;
	SObj *logo_sobj = SObjGetStruct(logo_gobj);
	DObj *logo_animation_dobj = DObjGetStruct(effect_gobj)->child->sib_next->sib_next->sib_next;

	logo_sobj->sprite.scalex = logo_animation_dobj->scale.vec.f.x;
	logo_sobj->sprite.scaley = logo_animation_dobj->scale.vec.f.y;
	logo_sobj->pos.x = ((logo_animation_dobj->translate.vec.f.x + 160.0F) - (logo_sobj->sprite.width * logo_sobj->sprite.scalex * 0.5F));
	logo_sobj->pos.y = ((120.0F - logo_animation_dobj->translate.vec.f.y) - (logo_sobj->sprite.height * logo_sobj->sprite.scaley * 0.5F));
}

// 0x80132DFC
void mnTitleLogoFuncDisplay(GObj *logo_gobj)
{
	SObj *logo_sobj = SObjGetStruct(logo_gobj);

	if ((logo_sobj->sprite.scalex < 0.0001F) || (logo_sobj->sprite.scaley < 0.0001F))
	{
		return;
	}
	else
	{
		lbCommonPrepSObjSpriteAttrs(gSYTaskmanDLHeads, logo_sobj);

		gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, logo_sobj->sprite.red, logo_sobj->sprite.green, logo_sobj->sprite.blue, sMNTitleLogoAlpha);
		gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  TEXEL0, 0, PRIMITIVE, 0,  0, 0, 0, PRIMITIVE,  TEXEL0, 0, PRIMITIVE, 0);

		lbCommonDrawSObjNoAttr(logo_gobj);
	}
}

// 0x80132EDC
void mnTitleFadeOutLogoFuncRun(GObj *logo_gobj)
{
	SObj *logo_sobj = SObjGetStruct(logo_gobj);

	if ((logo_sobj->sprite.scalex < 0.0001F) || (logo_sobj->sprite.scaley < 0.0001F))
	{
		return;
	}
	else
	{
		sMNTitleLogoAlpha -= 0x04;

		if (sMNTitleLogoAlpha <= 0x4C)
		{
			sMNTitleLogoAlpha = 0x4C;
		}
	}
}

// 0x80132F3C
void mnTitleMakeLogoNoOpening(void)
{
	GObj *logo_gobj = lbCommonMakeSpriteGObj
	(
		11,
		NULL,
		10,
		GOBJ_LINKORDER_DEFAULT,
		mnTitleLogoFuncDisplay,
		0,
		GOBJ_DLLINKORDER_DEFAULT,
		-1,
		lbRelocGetDataFromFile(Sprite*, sMNTitleFiles[0], dMNTitleTextureConfigs[8].offset),
		nOMObjProcessKindProc,
		NULL,
		1
	);
	SObj *logo_sobj = SObjGetStruct(logo_gobj);

	logo_sobj->sprite.attr = SP_TRANSPARENT;

	logo_sobj->sprite.red = 0xFF;
	logo_sobj->sprite.green = 0x00;
	logo_sobj->sprite.blue = 0x00;

	mnTitleSetPosition(NULL, logo_sobj, nMNTitleTextureIndexLogo);
}

// 0x80132FD8
void mnTitleMakeLogo(void)
{
	s32 i;
	GObj *animated_logo_gobj;
	GObj *fire_logo_gobj;
	SObj *fire_logo_sobj;
	GObj *logo_gobj;
	SObj *logo_sobj;
	DObj *fire_logo_dobj;

	if (gSceneData.scene_previous != nSCKindOpeningNewcomers)
	{
		mnTitleMakeLogoNoOpening();
	}
	else
	{
		animated_logo_gobj = gcMakeGObjSPAfter(7, NULL, 7, GOBJ_LINKORDER_DEFAULT);
		gcSetupCommonDObjs(animated_logo_gobj, lbRelocGetDataFromFile(DObjDesc*, sMNTitleFiles[0], &FILE_0A7_ANIMATED_LOGO_OFFSET_2), 0);
		gcAddAnimJointAll(animated_logo_gobj, lbRelocGetDataFromFile(AObjEvent32**, sMNTitleFiles[0], &FILE_0A7_ANIMATED_LOGO_OFFSET_1), 0);
		gcPlayAnimAll(animated_logo_gobj);

		fire_logo_gobj = gcMakeGObjSPAfter(6, NULL, 7, GOBJ_LINKORDER_DEFAULT);
		gcAddGObjDisplay(fire_logo_gobj, lbCommonDrawSObjAttr, 0, GOBJ_DLLINKORDER_DEFAULT, -1);
		gcAddGObjProcess(fire_logo_gobj, mnTitlePlayAnim, nOMObjProcessKindProc, 1);

		fire_logo_gobj->user_data.p = animated_logo_gobj;
		fire_logo_dobj = DObjGetStruct(animated_logo_gobj)->child;

		for (i = 0; i < ARRAY_COUNT(dMNTitleAnimatedLogoOffsets) - 1; i++)
		{
			fire_logo_sobj = lbCommonMakeSObjForGObj(fire_logo_gobj, lbRelocGetDataFromFile(Sprite*, sMNTitleFiles[0], dMNTitleAnimatedLogoOffsets[i]));

			fire_logo_sobj->sprite.attr = SP_TRANSPARENT;

			fire_logo_sobj->pos.x = 0.0F;
			fire_logo_sobj->pos.y = 0.0F;

			fire_logo_sobj->sprite.red = 0x00;
			fire_logo_sobj->sprite.green = 0x00;
			fire_logo_sobj->sprite.blue = 0x00;

			fire_logo_dobj->translate.vec.f.x = 0;
			fire_logo_dobj->translate.vec.f.y = 0;

			fire_logo_dobj = fire_logo_dobj->sib_next;
		};

		logo_gobj = lbCommonMakeSpriteGObj
		(
			11,
			mnTitleFadeOutLogoFuncRun,
			10,
			GOBJ_LINKORDER_DEFAULT,
			mnTitleLogoFuncDisplay,
			0,
			GOBJ_DLLINKORDER_DEFAULT,
			-1,
			lbRelocGetDataFromFile(Sprite*, sMNTitleFiles[0], dMNTitleAnimatedLogoOffsets[3]),
			nOMObjProcessKindProc,
			mnTitleLogoProcUpdate,
			1
		);
		logo_sobj = SObjGetStruct(logo_gobj);

		logo_sobj->sprite.attr = SP_TRANSPARENT;

		logo_sobj->sprite.red = 0xFF;
		logo_sobj->sprite.green = 0x00;
		logo_sobj->sprite.blue = 0x00;

		fire_logo_dobj->translate.vec.f.x = 0;
		fire_logo_dobj->translate.vec.f.y = 0;

		logo_gobj->user_data.p = animated_logo_gobj;

		sMNTitleLogoAlpha = 0xFF;
	}
}

// 0x801331FC - Unused?
void mnTitleMakeSprites(void)
{
	GObj *gobj;
	SObj *sobj;
	s32 i;

	gobj = gcMakeGObjSPAfter(8, NULL, 8, GOBJ_LINKORDER_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, GOBJ_DLLINKORDER_DEFAULT, -1);

	for (i = 0; i < 7; i++)
	{
		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNTitleFiles[0], dMNTitleTextureConfigs[i].offset));
		sobj->sprite.attr = SP_TRANSPARENT;

		mnTitleSetPosition(NULL, sobj, i);
		mnTitleSetColors(sobj, i);
	}
}

// 0x801332E4
void mnTitleMakeLabels(void)
{
	s32 i;
	GObj *animation_gobj;
	GObj *gobj;
	SObj *texture_sobj;
	DObj* animation_dobj;

	animation_gobj = gcMakeGObjSPAfter(10, NULL, 8, GOBJ_LINKORDER_DEFAULT);
	gcSetupCommonDObjs(animation_gobj, lbRelocGetDataFromFile(DObjDesc*, sMNTitleFiles[0], &FILE_0A7_ANIMATED_TITLE_HEADER_FOOTER_OFFSET_2), 0);
	gcAddAnimJointAll(animation_gobj, lbRelocGetDataFromFile(AObjEvent32**, sMNTitleFiles[0], &FILE_0A7_ANIMATED_TITLE_HEADER_FOOTER_OFFSET_1), 0);
	gcPlayAnimAll(animation_gobj);

	gobj = gcMakeGObjSPAfter(8, NULL, 8, GOBJ_LINKORDER_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
	gcAddGObjProcess(gobj, mnTitleTitleProcUpdate, nOMObjProcessKindProc, 1);

	gobj->user_data.p = animation_gobj;
	animation_dobj = DObjGetStruct(animation_gobj)->child;

	for (i = 0; i < 5; i++)
	{
		texture_sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNTitleFiles[0], dMNTitleTextureConfigs[i].offset));
		texture_sobj->sprite.attr = SP_TRANSPARENT;

		mnTitleSetPosition(animation_dobj, texture_sobj, i);
		mnTitleSetColors(texture_sobj, i);

		animation_dobj = animation_dobj->sib_next;
	}
	gobj->flags = GOBJ_FLAG_HIDDEN;

	gobj = gcMakeGObjSPAfter(9, NULL, 8, GOBJ_LINKORDER_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
	gcAddGObjProcess(gobj, mnTitleUpdateHeaderAndFooterPosition, nOMObjProcessKindProc, 1);

	gobj->user_data.p = animation_gobj;

	for (i = 5; i < 7; i++)
	{
		texture_sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMNTitleFiles[0], dMNTitleTextureConfigs[i].offset));
		texture_sobj->sprite.attr = SP_TRANSPARENT;

		mnTitleSetPosition(animation_dobj, texture_sobj, i);
		mnTitleSetColors(texture_sobj, i);

		animation_dobj = animation_dobj->sib_next;
	}
	gobj->flags = GOBJ_FLAG_HIDDEN;
}

// 0x80133504
void mnTitleMakePressStart(void)
{
	GObj *press_start_anim_gobj;
	GObj *press_start_gobj;
	DObj *press_start_anim_dobj;
	SObj *press_start_sobj;

	press_start_anim_gobj = gcMakeGObjSPAfter(10, NULL, 8, GOBJ_LINKORDER_DEFAULT);
	gcSetupCommonDObjs(press_start_anim_gobj, lbRelocGetDataFromFile(DObjDesc*, sMNTitleFiles[0], &FILE_0A7_ANIMATED_PRESS_START_OFFSET_2), 0);
	gcAddAnimJointAll(press_start_anim_gobj, lbRelocGetDataFromFile(AObjEvent32**, sMNTitleFiles[0], &FILE_0A7_ANIMATED_PRESS_START_OFFSET_1), 0);
	gcPlayAnimAll(press_start_anim_gobj);

	press_start_anim_dobj = DObjGetStruct(press_start_anim_gobj)->child;

	press_start_gobj = gcMakeGObjSPAfter(8, NULL, 9, GOBJ_LINKORDER_DEFAULT);
	gcAddGObjDisplay(press_start_gobj, lbCommonDrawSObjAttr, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
	gcAddGObjProcess(press_start_gobj, mnTitlePressStartProcUpdate, nOMObjProcessKindProc, 1);

	press_start_gobj->user_data.p = press_start_anim_gobj;

	press_start_sobj = lbCommonMakeSObjForGObj(press_start_gobj, lbRelocGetDataFromFile(Sprite*, sMNTitleFiles[0], dMNTitleTextureConfigs[7].offset));
	press_start_sobj->sprite.attr = SP_TRANSPARENT;

	mnTitleSetPosition(press_start_anim_dobj, press_start_sobj, nMNTitleTextureIndexPressStart);
	mnTitleSetColors(press_start_sobj, nMNTitleTextureIndexPressStart);

	press_start_gobj->flags = GOBJ_FLAG_HIDDEN;
}

// 0x80133634 - discarded language selection?
void func_ovl10_80133634(void)
{
	return;
}

// 0x8013363C - Unused?
void mnTitleSlashProcUpdate(GObj *gobj)
{
	if (gobj->flags != GOBJ_FLAG_HIDDEN)
	{
		gcPlayAnimAll(gobj);
	}
}

// 0x8013366C
void mnTitleMakeSlash(void)
{
	GObj *gobj;

	if (gSceneData.scene_previous == nSCKindOpeningNewcomers)
	{
		gobj = gcMakeGObjSPAfter(12, NULL, 14, GOBJ_LINKORDER_DEFAULT);
		gcAddGObjDisplay(gobj, gcDrawDObjTreeDLLinksForGObj, 2, GOBJ_DLLINKORDER_DEFAULT, -1);
		gcSetupCustomDObjsWithMObj
		(
			gobj,
			lbRelocGetDataFromFile(DObjDesc*, sMNTitleFiles[0], &FILE_0A7_SLASH_EFFECT_GFX_OFFSET_2),
			lbRelocGetDataFromFile(MObjSub***, sMNTitleFiles[0], &FILE_0A7_SLASH_EFFECT_GFX_OFFSET_1),
			NULL,
			nOMTransformTraRotRpyRSca,
			nOMTransformNull,
			nOMTransformNull
		);
		gcAddAnimJointAll(gobj, lbRelocGetDataFromFile(AObjEvent32**, sMNTitleFiles[0], &FILE_0A7_SLASH_EFFECT_GFX_OFFSET_3), 0.0F);
		gcAddMatAnimJointAll(gobj, lbRelocGetDataFromFile(AObjEvent32***, sMNTitleFiles[0], &FILE_0A7_SLASH_EFFECT_GFX_OFFSET_4), 0.0F);
		gcPlayAnimAll(gobj);
		gcAddGObjProcess(gobj, gcPlayAnimAll, nOMObjProcessKindProc, 1);
	}
}

// 0x80133770
void mnTitleFireCameraProcUpdate(GObj *gobj)
{
	Camera *cam = CameraGetStruct(sMNTitleFireCameraGObj);

	if (sMNTitleTransitionTotalTimeTics >= 40)
	{
		if (sMNTitleTransitionTotalTimeTics <= 110)
		{
			sMNTitleFireColorR += 4.0F;

			TAKE_MIN(sMNTitleFireColorR, 255);
		}
		else
		{
			if (sMNTitleFireTimer == 0)
			{
				s32 color_id;

				sMNTitleFireTimer = 260;

				color_id = mtTrigGetRandomTimeUCharRange(7);

				if (color_id == sMNTitleFireColorID)
				{
					color_id++;

					if (color_id >= 7)
					{
						color_id = 0;
					}
				}
				sMNTitleFireColorID = color_id;

				sMNTitleFireDeltaRed = (dMNTitleFireColorsR[color_id] - sMNTitleFireColorR) / 80.0F;
				sMNTitleFireDeltaGreen = (dMNTitleFireColorsG[color_id] - sMNTitleFireColorG) / 80.0F;
				sMNTitleFireDeltaBlue = (dMNTitleFireColorsB[color_id] - sMNTitleFireColorB) / 80.0F;
			}
			if (sMNTitleFireTimer >= 80)
			{
				sMNTitleFireColorR += sMNTitleFireDeltaRed;
				sMNTitleFireColorG += sMNTitleFireDeltaGreen;
				sMNTitleFireColorB += sMNTitleFireDeltaBlue;
			}
			sMNTitleFireTimer--;
		}
		TAKE_MIN(sMNTitleFireColorR, 255.0F);
		TAKE_MIN(sMNTitleFireColorG, 255.0F);
		TAKE_MIN(sMNTitleFireColorB, 255.0F);

		TAKE_MAX(sMNTitleFireColorR, 0.0F);
		TAKE_MAX(sMNTitleFireColorG, 0.0F);
		TAKE_MAX(sMNTitleFireColorB, 0.0F);

		cam->color = GPACK_RGBA8888((s32) sMNTitleFireColorR, (s32) sMNTitleFireColorG, (s32) sMNTitleFireColorB, 0xFF);
	}
}

// 0x80133A94
s32 mnTitleMakeCameras(void)
{
	GObj *camera_gobj;
	s32 unused;
	Camera *cam;

	sMNTitleFireCameraGObj = gcMakeDefaultCameraGObj(2, GOBJ_LINKORDER_DEFAULT, 100, CAMERA_FLAG_FILLCOLOR | CAMERA_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
	gcAddGObjProcess(sMNTitleFireCameraGObj, mnTitleFireCameraProcUpdate, nOMObjProcessKindProc, 1);

	camera_gobj = gcMakeCameraGObj
	(
		2,
		NULL,
		3,
		GOBJ_LINKORDER_DEFAULT,
		lbCommonScissorSpriteCamera,
		60,
		CAMERA_MASK_DLLINK(1) | CAMERA_MASK_DLLINK(0),
		-1,
		FALSE,
		nOMObjProcessKindProc,
		NULL,
		1,
		FALSE
	);
	cam = CameraGetStruct(camera_gobj);
	syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	camera_gobj = gcMakeCameraGObj(3, NULL, 3, GOBJ_LINKORDER_DEFAULT, func_80017EC0, 40, CAMERA_MASK_DLLINK(2), -1, FALSE, nOMObjProcessKindProc, NULL, 1, FALSE);
	cam = CameraGetStruct(camera_gobj);

	gcAddOMMtxForCamera(cam, nOMTransformOrtho, 0);
	gcAddOMMtxForCamera(cam, nOMTransformLookAt, 0);

	syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	
	cam->vec.at.x = cam->vec.at.y = cam->vec.at.z = 0.0F;
	
	cam->vec.eye.x = cam->vec.eye.y = 0.0F;
	cam->vec.eye.z = 2000.0F;

	camera_gobj = gcMakeCameraGObj(3, NULL, 3, GOBJ_LINKORDER_DEFAULT, func_80017EC0, 80, CAMERA_MASK_DLLINK(3), -1, TRUE, nOMObjProcessKindProc, NULL, 1, FALSE);
	cam = CameraGetStruct(camera_gobj);

	syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	
	cam->vec.at.x = cam->vec.at.y = cam->vec.at.z = 0.0F;
	
	cam->vec.eye.x = cam->vec.eye.y = 0.0F;
	cam->vec.eye.z = 1000.0F;

	cam->projection.persp.fovy = 30.0F;

#ifdef AVOID_UB
	return 0;
#else
	return unused;
#endif
}

// 0x80133CFC
void mnTitleLogoFireFuncDisplay(GObj *gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

	lbParticleDrawTextures(gobj);

	gDPSetTexturePersp(gSYTaskmanDLHeads[0]++, G_TP_PERSP);
	gDPSetDepthSource(gSYTaskmanDLHeads[0]++, G_ZS_PIXEL);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80133DDC
void mnTitleMakeLogoFire(void)
{
	GObj *gobj = gcMakeGObjSPAfter(15, NULL, 4, GOBJ_LINKORDER_DEFAULT);
	gcAddGObjDisplay(gobj, mnTitleLogoFireFuncDisplay, 3, GOBJ_DLLINKORDER_DEFAULT, -1);

	gobj->cam_mask = CAMERA_MASK_DLLINK(0);

	sMNTitleParticleBankID = efAllocGetAddParticleBankID(&lTitleScreenParticleBankGenLo, &lTitleScreenParticleBankGenHi, &lTitleScreenParticleBankTextureLo, &lTitleScreenParticleBankTextureHi);
}

// 0x80133E68
void mnTitleMakeLogoFireParticles(void)
{
	GObj *logo_fire_effect_gobj;
	lbGenerator *gtor;

	if (gSceneData.scene_previous == nSCKindOpeningNewcomers)
	{
		logo_fire_effect_gobj = gcMakeGObjSPAfter(14, NULL, 5, GOBJ_LINKORDER_DEFAULT);

		gcSetupCommonDObjs(logo_fire_effect_gobj, lbRelocGetDataFromFile(DObjDesc*, sMNTitleFiles[0], &FILE_0A7_LOGO_FIRE_EFFECT_OFFSET_1), NULL);
		gcAddAnimJointAll(logo_fire_effect_gobj, lbRelocGetDataFromFile(AObjEvent32**, sMNTitleFiles[0], &FILE_0A7_LOGO_FIRE_EFFECT_OFFSET_2), 0.0F);
		gcPlayAnimAll(logo_fire_effect_gobj);
		gcAddGObjProcess(logo_fire_effect_gobj, gcPlayAnimAll, nOMObjProcessKindProc, 1);

		gtor = lbParticleMakeGenerator(sMNTitleParticleBankID, 0);

		if (gtor != NULL)
		{
			gtor->dobj = DObjGetStruct(logo_fire_effect_gobj)->child->sib_next->child;
		}
	}
}

// 0x80133F3C
void mnTitleMakeActors(void)
{
	sMNTitleMainGObj = gcMakeGObjSPAfter(0, mnTitleFuncRun, 1, GOBJ_LINKORDER_DEFAULT);
	sMNTitleTransitionsGObj = gcMakeGObjSPAfter(0, mnTitleTransitionsFuncRun, 15, GOBJ_LINKORDER_DEFAULT);
}

// 0x80133F90
void mnTitleFuncStart(void)
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(gPlayerControllers); i++)
	{
		func_80004494(i);
	}
	mnTitleLoadFiles();
	mnTitleMakeActors();
	efAllocInitParticleBank();
	mnTitleMakeLogoFire();
	mnTitleMakeCameras();
	mnTitleInitVars();
	mnTitleMakeFire();
	mnTitleMakeLogo();
	mnTitleMakeLabels();
	func_ovl10_80133634();
	mnTitleMakePressStart();
	mnTitleMakeSlash();
	mnTitleMakeLogoFireParticles();

	if (gSceneData.scene_previous == nSCKindOpeningNewcomers)
	{
		while (func_8000092C() < 4215)
		{
			continue;
		};
	}
}

// 0x80134074
void mnTitleFuncLights(Gfx **dls)
{
	gSPDisplayList(dls[0]++, dMNTitleDisplayList);
}

// 0x80134098
void mnTitleFuncUpdate(void)
{
	func_8000A5E4();
}

// 0x801340B8
void mnTitleStartScene(void)
{
	dMNTitleDisplaySetup.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&dMNTitleDisplaySetup);

	if ((!gSceneData.is_title_anim_viewed) && (gSaveData.unk5E3 <= U8_MAX))
	{
		gSaveData.unk5E3++;
		lbBackupWrite();
	}
	dMNTitleTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl9_VRAM - (uintptr_t)&ovl10_BSS_END);
	syTaskmanInit(&dMNTitleTaskmanSetup);
}

// 0x80134140
void mnTitleLoadFiles(void)
{
	lbRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = sMNTitleStatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(sMNTitleStatusBuffer);
	rl_setup.force_status_buffer = NULL;
	rl_setup.force_status_buffer_size = 0;

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern
	(
		dMNTitleFileIDs,
		ARRAY_COUNT(dMNTitleFileIDs),
		sMNTitleFiles,
		syTaskmanMalloc
		(
			lbRelocGetAllocSize
			(
				dMNTitleFileIDs,
				ARRAY_COUNT(dMNTitleFileIDs)
			),
			0x10
		)
	);
}
