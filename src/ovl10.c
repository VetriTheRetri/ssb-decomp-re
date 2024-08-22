#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <ovl0/reloc_data_mgr.h>
#include <sys/system_00.h>
#include <sys/gtl.h>

#include "ovl10.h"

// Externs
extern uintptr_t lTitleScreenParticleBankHeaderLo; // B22C30
extern uintptr_t lTitleScreenParticleBankHeaderHi; // B22D40
extern uintptr_t lTitleScreenParticleBankTextureLo; // B22D40
extern uintptr_t lTitleScreenParticleBankTextureHi; // B277B0
extern uintptr_t lOverlay10ArenaLo; // 801345B0
extern uintptr_t lOverlay10ArenaHi; // 80369240
extern uintptr_t D_NF_00026020;
extern uintptr_t D_NF_000251D0;
extern uintptr_t D_NF_00026130;
extern uintptr_t D_NF_00025350;
extern uintptr_t D_NF_000262C0;
extern uintptr_t D_NF_000258D0;
extern uintptr_t D_NF_00028DA8;
extern uintptr_t D_NF_000287D8;
extern uintptr_t D_NF_00025E70;
extern uintptr_t D_NF_00025F60;
extern uintptr_t D_NF_00028EB0;
extern uintptr_t D_NF_00029010;
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern func_ovl0_800CCF00(GObj*);
extern GObj* func_ovl0_800CD050(s32, void*, s32, u32, void*, s32, u32, s32, void*, u32, void*, u32);
extern void func_ovl0_800CD2CC();
extern void mnDebugMenuUpdateMenuInputs();
extern void gcAddGObjDisplay(GObj *gobj, void (*proc_render)(GObj*), u8 dl_link, u32 order, s32 arg4);
extern void func_80007080(void*, f32, f32, f32, f32);
extern GObj* func_8000B93C(u32, void*, s32, u32, void*, s32, s64, s32, s32, s32, s32, s32, s32);

// Forward declarations
void func_ovl10_80132320();
void mnTitleEnableAllInGroup(s32 link_id);
void func_ovl10_80132764(DObj* dobj, SObj* sobj, s32 index);
void func_ovl10_8013282C(SObj* sobj, s32 index);
void func_ovl10_80132A58(GObj* fire_gobj);
void mnTitleLoadFiles();

// DATA
// 801341E0
intptr_t D_ovl10_801341E0[3] = { 0x8fc8, 0x97e8, 0x9b48 };

// 801341EC
s32 D_ovl10_801341EC = 0xbbb0;

// 801341F0
intptr_t D_ovl10_801341F0[30] = {

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
	0x80134430,
	0, 0, 0, 0, 0, 0,
	0x800a41c0, 0, 0, 0, 0
};

// 80134318
u8 D_ovl10_80134318[8] = { 0xff, 0xff, 0xff, 0xff, 0xe6, 0xff, 0xff, 0x00 };

// 80134320
u8 D_ovl10_80134320[8] = { 0xff, 0xf0, 0xff, 0xd1, 0xff, 0xe2, 0xd2, 0x00 };

// 80134328
u8 D_ovl10_80134328[8] = { 0xff, 0x9b, 0x64, 0xd1, 0xe6, 0xb8, 0x94, 0x00 };

// 80134330
Lights1 D_ovl10_80134330 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x0A, 0x32, 0x32);

// 80134348
Gfx D_ovl10_80134348[] =
{
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPSetLights1(D_ovl10_80134330),
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
GObj* D_ovl10_80134448;

// 8013444C
uintptr_t D_ovl10_8013444C;

// 80134450
s32 D_ovl10_80134450;

// 80134454
uintptr_t D_ovl10_80134454;

// 80134458
uintptr_t D_ovl10_80134458;

// 8013445C
s32 D_ovl10_8013445C;

// 80134460
s32 D_ovl10_80134460;

// 80134464
s32 D_ovl10_80134464; // fire prim color

// 80134468
s32 D_ovl10_80134468;

// 8013446C
s32 D_ovl10_8013446C;

// 80134470
s32 D_ovl10_80134470;

// 80134474
s32 D_ovl10_80134474;

// 80134478
s32 D_ovl10_80134478;

// 8013447C
f32 D_ovl10_8013447C;

// 80134480
f32 D_ovl10_80134480;

// 80134484
f32 D_ovl10_80134484;

// 80134488
f32 D_ovl10_80134488;

// 8013448C
f32 D_ovl10_8013448C;

// 80134490
f32 D_ovl10_80134490;

// 80134494
s32 D_ovl10_80134494;

// 80134498
u32 D_ovl10_80134498;

// 801344A0
uintptr_t D_ovl10_801344A0[64];

// 801345A0
uintptr_t D_ovl10_801345A0;

// 801345A4
uintptr_t D_ovl10_801345A4;


// 80131B00
s32 mnTitleGetUnlockedCharsCountForMask(u16 mask)
{
	char* lal = "English";
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

	unlocked_mask = gSaveData.character_mask | SCBACKUP_CHARACTER_MASK_STARTER;

	if (~unlocked_mask & gSceneData.recently_demoed_mask)
		gSceneData.recently_demoed_mask = 0;

	unlocked_count = mnTitleGetUnlockedCharsCountForMask(unlocked_mask);

	if (unlocked_count <= mnTitleGetUnlockedCharsCountForMask(gSceneData.recently_demoed_mask))
		gSceneData.recently_demoed_mask = 0;

	unlocked_count = mnTitleGetUnlockedCharsCountForMask(unlocked_mask);

	gSceneData.demo_ft_kind[0] = mnTitleGetMissingFtKind(unlocked_mask, gSceneData.recently_demoed_mask, mtTrigGetRandomIntRange(unlocked_count - mnTitleGetUnlockedCharsCountForMask(gSceneData.recently_demoed_mask)));

	if (!(gSceneData.recently_demoed_mask))
	{
		gSceneData.first_demo_ft_kind = gSceneData.demo_ft_kind[0];
	}
	gSceneData.recently_demoed_mask |= gmSaveChrMask(gSceneData.demo_ft_kind[0]);

	unlocked_count = mnTitleGetUnlockedCharsCountForMask(unlocked_mask);

	non_recently_demoed_count = unlocked_count - mnTitleGetUnlockedCharsCountForMask(gSceneData.recently_demoed_mask);

	if (non_recently_demoed_count == 0)
	{
		gSceneData.demo_ft_kind[1] = gSceneData.first_demo_ft_kind;
	}
	else
	{
		gSceneData.demo_ft_kind[1] = mnTitleGetMissingFtKind(unlocked_mask, gSceneData.recently_demoed_mask, mtTrigGetRandomIntRange(non_recently_demoed_count));
		gSceneData.recently_demoed_mask |= gmSaveChrMask(gSceneData.demo_ft_kind[1]);
	}
}

// 80131CF4
void func_ovl10_80131CF4()
{
	s32 index;

	if (gSceneData.scene_previous == 0x2E)
	{
		D_ovl10_80134450 = 0;
		D_ovl10_8013445C = 0;
		D_ovl10_80134484 = 0.0f;
		D_ovl10_80134480 = D_ovl10_80134484;
		D_ovl10_8013447C = D_ovl10_80134480;
	}
	else
	{
		auStopBGM();
		func_800266A0_272A0();

		D_ovl10_80134450 = 1;
		D_ovl10_8013445C = 0xA9;

		index = mtTrigGetRandomTimeUCharRange(7);
		D_ovl10_80134494 = index;
		D_ovl10_8013447C = D_ovl10_80134318[index];
		D_ovl10_80134480 = D_ovl10_80134320[index];
		D_ovl10_80134484 = D_ovl10_80134328[index];
	}

	D_ovl10_80134478 = 0;
	D_ovl10_80134470 = 0;
	D_ovl10_80134474 = 3;
	D_ovl10_80134460 = 0;
	D_ovl10_80134488 = 0.0f;
	D_ovl10_8013448C = 0.0f;
	D_ovl10_80134490 = 0.0f;
}

// 80131E68
void func_ovl10_80131E68()
{
	GObj* smash_logo_gobj;
	SObj* smash_logo_sobj;

	smash_logo_gobj = gOMObjCommonLinks[10];

	if (gSceneData.scene_previous == 0x2E)
	{
		func_8000B39C(smash_logo_gobj);
	}

	smash_logo_sobj = SObjGetStruct(smash_logo_gobj);

	func_ovl10_80132764(NULL, smash_logo_sobj, 8);

	smash_logo_sobj->user_data.s = 0xFF;
	D_ovl10_8013446C = 0x4C;

	smash_logo_sobj->sprite.scalex = 1.0f;
	smash_logo_sobj->sprite.scaley = 1.0f;
}

// func_ovl10_80131EE4
void func_ovl10_80131EE4()
{
	s32 i;
	GObj* sp28;
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
			sp28 = gobj;

		gobj = gobj->link_next;
	}

	// UB: sp28 may not be defined!
	func_8000B39C(sp28);

	i = 0;
	sobj = SObjGetStruct(sp28);
	sp28->flags = 0;

	while (sobj != NULL)
	{
		func_ovl10_80132764(NULL, sobj, i);
		func_ovl10_8013282C(sobj, i);

		sobj->sprite.scaley = 1.0f;
		sobj->sprite.scalex = 1.0f;
		sobj = sobj->next;
		i += 1;
	}
}

// 80131FD0
void func_ovl10_80131FD0()
{
	u8 scene_previous = gSceneData.scene_previous;

	func_8000B9FC(2, 0x80000000, 0, 2, 0xFF);
	mnTitleSetDemoFtKinds();
	func_800266A0_272A0();

	gSceneData.scene_previous = gSceneData.scene_current;

	switch (scene_previous)
	{
		case nSCKindExplain:
			gSceneData.scene_current = nSCKindCharacters;

			auPlaySong(0, 0x22);

			break;
		case 0x7:
		case 0x3D:
			gSceneData.scene_current = nSCKindN64;
			break;
		default:
			gSceneData.scene_current = nSCKindExplain;
			break;
	}

	gSceneData.unk3F = 1;
	D_ovl10_80134470 = 1;
}

// 80132090
void func_ovl10_80132090()
{
	func_8000B9FC(2, 0x80000000, 0, 2, 0xFF);

	gSceneData.scene_previous = gSceneData.scene_current;
	gSceneData.scene_current = 7;

	func_800266A0_272A0();
	func_800269C0_275C0(0x9D);

	D_ovl10_80134470 = 1;
}

// 801320F0
void func_ovl10_801320F0(s32 arg0)
{
	s32 i;
	u16 buttonPressed;

	if (D_ovl10_80134460 == 0)
	{
		D_ovl10_80134460++;
		return;
	}

	if (D_ovl10_80134470 != 0)
	{
		D_ovl10_80134474--;

		if (D_ovl10_80134474 == 0)
			leoInitUnit_atten();
	}
	else
	{
		for (i = 0; i < ARRAY_COUNT(gPlayerControllers); i++)
		{
			buttonPressed = gPlayerControllers[i].button_tap;

			if (gPlayerControllers[i].button_tap & (A_BUTTON | B_BUTTON | START_BUTTON))
			{
				if (D_ovl10_80134450 != 0)
				{
					if (((gSceneData.unk44 != 0) || (osResetType != 0)) && !(buttonPressed & B_BUTTON))
					{
						func_ovl10_80132090();
						break;
					}
				}
				else
				{
					D_ovl10_8013445C = 0xA9;
					D_ovl10_80134450 = 1;

					func_ovl10_80132320();
					auStopBGM();
					func_800266A0_272A0();
					break;
				}
			}

		}
	}
}

// 80132210
void func_ovl10_80132210()
{
	s32 temp_v0 = mtTrigGetRandomTimeUCharRange(7);

	D_ovl10_80134494 = temp_v0;

	D_ovl10_8013447C = D_ovl10_80134480 = D_ovl10_80134484 = 0.0f;

	D_ovl10_80134488 = (D_ovl10_80134318[temp_v0] - D_ovl10_8013447C) / 80.0f;
	D_ovl10_8013448C = (D_ovl10_80134320[temp_v0] - D_ovl10_80134480) / 80.0f;
	D_ovl10_80134490 = (D_ovl10_80134328[temp_v0] - D_ovl10_80134484) / 80.0f;
}

// 80132320
void func_ovl10_80132320()
{
	GObj* var_v0;
	GObj* temp_v1;

	var_v0 = gOMObjCommonLinks[7];

	if (var_v0 != NULL)
	{
		do
		{
			temp_v1 = var_v0->link_next;

			if (var_v0->gobj_id == 6)
				var_v0->flags = 1;

			var_v0 = temp_v1;
		}
		while (temp_v1 != NULL);
	}

	if (gOMObjCommonLinks[4] != NULL)
		gcEjectGObj(gOMObjCommonLinks[4]);

	if (gOMObjCommonLinks[14] != NULL)
		gcEjectGObj(gOMObjCommonLinks[14]);

	mnTitleEnableAllInGroup(6);
	func_ovl10_80132210();
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
void func_ovl10_801323DC()
{
	if ((D_ovl10_80134450 == 0) && (gSceneData.scene_previous == 0x2E))
		gSceneData.unk3F = 0;

	D_ovl10_80134450++;
}

// 80132414
void func_ovl10_80132414()
{
	if (D_ovl10_80134450 == 2)
		D_ovl10_80134498 = 0x118;
	else
		D_ovl10_80134498 = 0x16C;
}

// 80132448
void func_ovl10_80132448(s32 arg0)
{
	D_ovl10_8013445C++;

	if (D_ovl10_8013445C == D_ovl10_80134498)
	{
		gSceneData.unk44 = 1;
	}

	switch (D_ovl10_8013445C)
	{
		case 111:
			func_ovl10_80132320();
			break;
		case 170:
			func_ovl10_80131E68();
			mnTitleEnableAllInGroup(8);
			func_ovl10_801323DC();
			func_ovl10_80132414();
			break;
		case 220:
			func_ovl10_80131EE4();
			break;
		case 280:
			mnTitleEnableAllInGroup(9);
			break;
		case 35:
		case 65:
			func_800269C0_275C0(0x98);
			break;
		case 200:
			if (D_ovl10_80134450 == 1)
				func_800269C0_275C0(0x96);
			break;
		case 214:
		case 240:
			// Maybe a FGM call in J version?
			break;
		case 650:
			if (gSceneData.unk3F == 0)
				func_ovl10_80131FD0();
			break;
		case 1190:
			if (gSceneData.unk3F != 0)
				func_ovl10_80131FD0();
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
void func_ovl10_80132704(GObj* header_footer_gobj)
{
	SObj* header_footer_sobj = SObjGetStruct(header_footer_gobj);

	if ((D_ovl10_80134450 != 0) || (gSceneData.scene_previous != 0x2E))
	{
		func_ovl10_80132764(NULL, header_footer_sobj, 5);
		func_ovl10_80132764(NULL, header_footer_sobj->next, 6);
	}
}

// 80132764
void func_ovl10_80132764(DObj* dobj, SObj* sobj, s32 index)
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
void func_ovl10_8013282C(SObj* sobj, s32 index)
{
	if (index < 5)
	{
		if ((index == 0) || (index == 4))
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
			sobj->shadow_color.r = 0;
			sobj->shadow_color.g = 0;
			sobj->shadow_color.b = 0;
		}
	}
	else switch (index) { /* irregular */
		case 5:
			sobj->sprite.red = 0xB7;
			sobj->sprite.green = 0xAE;
			sobj->sprite.blue = 0x7C;
			sobj->shadow_color.r = 0x14;
			sobj->shadow_color.g = 0x12;
			sobj->shadow_color.b = 6;
			break;
		case 6:
			sobj->sprite.red = 0x14;
			sobj->sprite.green = 0x12;
			sobj->sprite.blue = 6;
			break;
		case 7:
			sobj->sprite.red = 0xFF;
			sobj->sprite.green = 0xFF;
			sobj->sprite.blue = 0xFF;
			sobj->shadow_color.r = 0x17;
			sobj->shadow_color.g = 0x10;
			sobj->shadow_color.b = 0xA4;
			break;
		case 9:
			sobj->sprite.red = 0x15;
			sobj->sprite.green = 0x13;
			sobj->sprite.blue = 6;
			break;
	}
}

// 80132940
void func_ovl10_80132940(GObj* fire_gobj)
{
	s32 i;
	SObj* fire_sobj = SObjGetStruct(fire_gobj);

	for (i = 0; i < 2; i++)
	{
		func_ovl0_800CC118(gDisplayListHead, fire_sobj);

		gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0, 0, 0, D_ovl10_80134464);
		gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, TEXEL0,  TEXEL0, 0, PRIMITIVE, 0,  0, 0, 0, TEXEL0,  TEXEL0, 0, PRIMITIVE, 0);

		func_ovl0_800CC818(gDisplayListHead, fire_sobj);
		func_ovl0_800CCEAC();

		fire_sobj = fire_sobj->next;
	}
}

// 80132A20
void func_ovl10_80132A20(GObj* fire_gobj)
{
	if (fire_gobj->flags != 1)
	{
		D_ovl10_80134464 += 0xD;

		if (D_ovl10_80134464 >= 0x100)
			D_ovl10_80134464 = 0xFF;
	}
}

// 80132A58
void func_ovl10_80132A58(GObj* fire_gobj)
{
	D_ovl10_80134464 = 0xFF;
	fire_gobj->flags = 0;
}

// 80132A6C
void func_ovl10_80132A6C(SObj* fire_sobj, s32 arg1)
{
	Sprite *offset = GetAddressFromOffset(D_ovl10_801345A4, D_ovl10_801341F0[fire_sobj->user_data.s]);

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
	s32 var_s1;
	GObj* fire_gobj;
	SObj* fire_sobj;

	fire_gobj = gcMakeGObjSPAfter(5, func_ovl10_80132A20, 6, 0x80000000);

	if (fire_gobj != NULL)
	{
		gcAddGObjDisplay(fire_gobj, func_ovl10_80132940, 0, 0x80000000, -1);
		gcAddGObjProcess(fire_gobj, func_ovl10_80132B38, 1, 1);

		for (i = 0; i < 2; i++)
		{
			if (i != 0)
				var_s1 = 0;
			else
				var_s1 = 12;

			fire_sobj = gcAppendSObjWithSprite(fire_gobj, GetAddressFromOffset((&D_ovl10_801345A0)[1], D_ovl10_801341F0[var_s1]));

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

			fire_sobj->user_data.s = var_s1;
		}

		D_ovl10_80134464 = D_ovl10_80134468 = 0;
		fire_gobj->flags = 1;

		if (gSceneData.scene_previous != 0x2E)
			func_ovl10_80132A58(fire_gobj);
	}
}

// 80132D5C
void func_ovl10_80132D5C(GObj* arg0)
{
	GObj *effect_gobj = arg0->user_data.p;
	SObj *temp_v1 = SObjGetStruct(arg0);
	DObj *temp_a1 = DObjGetStruct(effect_gobj)->child->sib_next->sib_next->sib_next;

	temp_v1->sprite.scalex = temp_a1->scale.vec.f.x;
	temp_v1->sprite.scaley = temp_a1->scale.vec.f.y;
	temp_v1->pos.x = ((temp_a1->translate.vec.f.x + 160.0f) - (temp_v1->sprite.width * temp_v1->sprite.scalex * 0.5f));
	temp_v1->pos.y = ((120.0f - temp_a1->translate.vec.f.y) - (temp_v1->sprite.height * temp_v1->sprite.scaley * 0.5f));
}

// 80132DFC
void mnTitleRenderLogoNoIntro(GObj* logo_gobj)
{
	SObj* logo_sobj = SObjGetStruct(logo_gobj);

	if (!(logo_sobj->sprite.scalex < 0.0001f) && !(logo_sobj->sprite.scaley < 0.0001f))
	{
		func_ovl0_800CC118(gDisplayListHead, logo_sobj);

		gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, logo_sobj->sprite.red, logo_sobj->sprite.green, logo_sobj->sprite.blue, D_ovl10_8013446C);
		gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  TEXEL0, 0, PRIMITIVE, 0,  0, 0, 0, PRIMITIVE,  TEXEL0, 0, PRIMITIVE, 0);

		func_ovl0_800CCF74(logo_gobj, logo_sobj);
	}
}

// 80132EDC
void func_ovl10_80132EDC(GObj* logo_gobj)
{
	SObj* logo_sobj = SObjGetStruct(logo_gobj);

	if (!(logo_sobj->sprite.scalex < 0.0001f) && !(logo_sobj->sprite.scaley < 0.0001f))
	{
		D_ovl10_8013446C -= 4;

		if (D_ovl10_8013446C < 0x4D)
			D_ovl10_8013446C = 0x4C;
	}
}

// 80132F3C
void mnTitleCreateLogoNoIntro()
{
	GObj *logo_gobj = func_ovl0_800CD050(0xB, 0, 0xA, 0x80000000, mnTitleRenderLogoNoIntro, 0, 0x80000000, -1, D_ovl10_801342D0 + D_ovl10_801345A0, 1, 0, 1);
	SObj *logo_sobj = SObjGetStruct(logo_gobj);

	logo_sobj->sprite.attr = SP_TRANSPARENT;
	logo_sobj->sprite.red = 0xFF;
	logo_sobj->sprite.green = 0;
	logo_sobj->sprite.blue = 0;

	func_ovl10_80132764(0, logo_sobj, 8);
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

	if (gSceneData.scene_previous != 0x2E)
		mnTitleCreateLogoNoIntro();
	else
	{
		animated_logo_gobj = gcMakeGObjSPAfter(7, 0, 7, 0x80000000);
		gcSetupCommonDObjs(animated_logo_gobj, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_00026020), 0);
		gcAddAnimJointAll(animated_logo_gobj, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_000251D0), 0);
		gcPlayAnimAll(animated_logo_gobj);

		fire_logo_gobj = gcMakeGObjSPAfter(6, 0, 7, 0x80000000);
		gcAddGObjDisplay(fire_logo_gobj, func_ovl0_800CCF00, 0, 0x80000000, -1);
		gcAddGObjProcess(fire_logo_gobj, mnTitleAnimateGObj, 1, 1);

		fire_logo_gobj->user_data.p = animated_logo_gobj;
		fire_logo_dobj = DObjGetStruct(animated_logo_gobj)->child;

		for (i = 0; i < ARRAY_COUNT(D_ovl10_801341E0); i++)
		{
			fire_logo_sobj = gcAppendSObjWithSprite(fire_logo_gobj, GetAddressFromOffset(D_ovl10_801345A0, D_ovl10_801341E0[i]));
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

		logo_gobj = func_ovl0_800CD050(0xB, func_ovl10_80132EDC, 0xA, 0x80000000, mnTitleRenderLogoNoIntro, 0, 0x80000000, -1, D_ovl10_801341EC + D_ovl10_801345A0, 1, func_ovl10_80132D5C, 1);

		logo_sobj = SObjGetStruct(logo_gobj);
		logo_sobj->sprite.attr = SP_TRANSPARENT;
		logo_sobj->sprite.red = 0xFF;
		logo_sobj->sprite.green = 0;
		logo_sobj->sprite.blue = 0;

		fire_logo_dobj->translate.vec.f.x = 0;
		fire_logo_dobj->translate.vec.f.y = 0;

		logo_gobj->user_data.p = animated_logo_gobj;

		D_ovl10_8013446C = 0xFF;
	}
}

// 801331FC - Unused?
void func_ovl10_801331FC()
{
	GObj* gobj;
	SObj* sobj;
	s32 i;

	gobj = gcMakeGObjSPAfter(8, 0, 8, 0x80000000);
	gcAddGObjDisplay(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);

	for (i = 0; i < 7; i++)
	{
		sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(D_ovl10_801345A0, dMNTitleTextureConfigs[i].offset));
		sobj->sprite.attr = SP_TRANSPARENT;

		func_ovl10_80132764(0, sobj, i);
		func_ovl10_8013282C(sobj, i);
	}
}

// 801332E4
void func_ovl10_801332E4()
{
	s32 i;
	GObj* temp_v0;
	GObj* temp_v0_2;
	SObj* temp_v0_3;
	DObj* var_s3;

	temp_v0 = gcMakeGObjSPAfter(0xA, 0, 8, 0x80000000);
	gcSetupCommonDObjs(temp_v0, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_00026130), 0);
	gcAddAnimJointAll(temp_v0, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_00025350), 0);
	gcPlayAnimAll(temp_v0);

	temp_v0_2 = gcMakeGObjSPAfter(8, 0, 8, 0x80000000);
	gcAddGObjDisplay(temp_v0_2, func_ovl0_800CCF00, 1, 0x80000000, -1);
	gcAddGObjProcess(temp_v0_2, mnTitleAnimateTitle, 1, 1);

	temp_v0_2->user_data.p = temp_v0;

	var_s3 = DObjGetStruct(temp_v0)->child;
	for (i = 0; i < 5; i++)
	{
		temp_v0_3 = gcAppendSObjWithSprite(temp_v0_2, GetAddressFromOffset(D_ovl10_801345A0, dMNTitleTextureConfigs[i].offset));
		temp_v0_3->sprite.attr = SP_TRANSPARENT;

		func_ovl10_80132764(var_s3, temp_v0_3, i);
		func_ovl10_8013282C(temp_v0_3, i);

		var_s3 = var_s3->sib_next;
	}

	temp_v0_2->flags = 1;

	temp_v0_2 = gcMakeGObjSPAfter(9, 0, 8, 0x80000000);
	gcAddGObjDisplay(temp_v0_2, func_ovl0_800CCF00, 1, 0x80000000, -1);
	gcAddGObjProcess(temp_v0_2, func_ovl10_80132704, 1, 1);

	temp_v0_2->user_data.p = temp_v0;

	for (i = 5; i < 7; i++)
	{
		temp_v0_3 = gcAppendSObjWithSprite(temp_v0_2, GetAddressFromOffset(D_ovl10_801345A0, dMNTitleTextureConfigs[i].offset));
		temp_v0_3->sprite.attr = SP_TRANSPARENT;

		func_ovl10_80132764(var_s3, temp_v0_3, i);
		func_ovl10_8013282C(temp_v0_3, i);

		var_s3 = var_s3->sib_next;
	}

	temp_v0_2->flags = 1;
}

// 80133504
void func_ovl10_80133504()
{
	GObj* press_start_anim_gobj;
	GObj* press_start_gobj;
	DObj* press_start_anim_dobj;
	SObj* press_start_sobj;

	press_start_anim_gobj = gcMakeGObjSPAfter(0xA, 0, 8, 0x80000000);
	gcSetupCommonDObjs(press_start_anim_gobj, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_000262C0), 0);
	gcAddAnimJointAll(press_start_anim_gobj, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_000258D0), 0);
	gcPlayAnimAll(press_start_anim_gobj);

	press_start_anim_dobj = DObjGetStruct(press_start_anim_gobj)->child;

	press_start_gobj = gcMakeGObjSPAfter(8, 0, 9, 0x80000000);
	gcAddGObjDisplay(press_start_gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
	gcAddGObjProcess(press_start_gobj, mnTitleAnimatePressStart, 1, 1);

	press_start_gobj->user_data.p = press_start_anim_gobj;

	press_start_sobj = gcAppendSObjWithSprite(press_start_gobj, GetAddressFromOffset(D_ovl10_801342C4, D_ovl10_801345A0));
	press_start_sobj->sprite.attr = SP_TRANSPARENT;

	func_ovl10_80132764(press_start_anim_dobj, press_start_sobj, 7);
	func_ovl10_8013282C(press_start_sobj, 7);

	press_start_gobj->flags = 1;
}

// 80133634
void func_ovl10_80133634() {}

// 8013363C - Unused?
void func_ovl10_8013363C(GObj* arg0)
{
	if (arg0->flags != 1)
		gcPlayAnimAll(arg0);
}

// 8013366C
void func_ovl10_8013366C()
{
	GObj* temp_v0;

	if (gSceneData.scene_previous == 0x2E)
	{
		temp_v0 = gcMakeGObjSPAfter(0xC, 0, 0xE, 0x80000000);
		gcAddGObjDisplay(temp_v0, gcDrawDObjTreeDLLinksForGObj, 2, 0x80000000, -1);
		gcSetupCustomDObjsWithMObj(temp_v0, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_00028DA8), GetAddressFromOffset(D_ovl10_801345A0, &D_NF_000287D8), 0, 0x1C, 0, 0);
		gcAddAnimJointAll(temp_v0, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_00025E70), 0.0f);
		gcAddMatAnimJointAll(temp_v0, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_00025F60), 0.0f);
		gcPlayAnimAll(temp_v0);
		gcAddGObjProcess(temp_v0, gcPlayAnimAll, 1, 1);
	}
}

// 80133770
void func_ovl10_80133770(GObj* arg0)
{
	Camera* cam = CameraGetStruct(D_ovl10_80134448);

	if (D_ovl10_8013445C >= 0x28)
	{
		if (D_ovl10_8013445C < 0x6F)
		{
			D_ovl10_8013447C += 4.0f;

			TAKE_MIN(D_ovl10_8013447C, 255);
		}
		else
		{
			if (D_ovl10_80134478 == 0)
			{
				s32 var_v1;

				D_ovl10_80134478 = 0x104;

				var_v1 = mtTrigGetRandomTimeUCharRange(7);

				if (var_v1 == D_ovl10_80134494)
				{
					var_v1++;

					if (var_v1 >= 7)
						var_v1 = 0;
				}

				D_ovl10_80134494 = var_v1;

				D_ovl10_80134488 = (D_ovl10_80134318[var_v1] - D_ovl10_8013447C) / 80.0f;
				D_ovl10_8013448C = (D_ovl10_80134320[var_v1] - D_ovl10_80134480) / 80.0f;
				D_ovl10_80134490 = (D_ovl10_80134328[var_v1] - D_ovl10_80134484) / 80.0f;
			}

			if (D_ovl10_80134478 >= 0x50)
			{
				D_ovl10_8013447C += D_ovl10_80134488;
				D_ovl10_80134480 += D_ovl10_8013448C;
				D_ovl10_80134484 += D_ovl10_80134490;
			}

			D_ovl10_80134478--;
		}

		TAKE_MIN(D_ovl10_8013447C, 255.0f);
		TAKE_MIN(D_ovl10_80134480, 255.0f);
		TAKE_MIN(D_ovl10_80134484, 255.0f);

		TAKE_MAX(D_ovl10_8013447C, 0.0f);
		TAKE_MAX(D_ovl10_80134480, 0.0f);
		TAKE_MAX(D_ovl10_80134484, 0.0f);

		cam->color = (((s32) D_ovl10_8013447C << 0x18) | ((s32) D_ovl10_80134480 << 0x10) | ((s32) D_ovl10_80134484 << 8) | 0xFF);
	}
}

// 80133A94
s32 func_ovl10_80133A94()
{
	s32 unused[2];
	GObj *camera_gobj;
	Camera *cam;

	D_ovl10_80134448 = func_8000B9FC(2, 0x80000000, 0x64, 3, 0xFF);
	gcAddGObjProcess(D_ovl10_80134448, func_ovl10_80133770, 1, 1);

	camera_gobj = func_8000B93C(2, 0, 3, 0x80000000, func_ovl0_800CD2CC, 0x3C, 0x00000003, -1, 0, 1, 0, 1, 0);
	cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	camera_gobj = func_8000B93C(3, 0, 3, 0x80000000, func_80017EC0, 0x28, 0x00000004, -1, 0, 1, 0, 1, 0);
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

	camera_gobj = func_8000B93C(3, 0, 3, 0x80000000, func_80017EC0, 0x50, 0x00000008, -1, 1, 1, 0, 1, 0);
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
void func_ovl10_80133CFC()
{
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

	func_ovl0_800D0D34();

	gDPSetTexturePersp(gDisplayListHead[0]++, G_TP_PERSP);
	gDPSetDepthSource(gDisplayListHead[0]++, G_ZS_PIXEL);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 80133DDC
void func_ovl10_80133DDC()
{
	GObj* temp_v0;

	temp_v0 = gcMakeGObjSPAfter(0xF, 0, 4, 0x80000000);
	gcAddGObjDisplay(temp_v0, func_ovl10_80133CFC, 3, 0x80000000, -1);

	temp_v0->unk_gobj_0x30 = 0x00000001;

	D_ovl10_8013444C = efAllocGetAddParticleBankID(&lTitleScreenParticleBankHeaderLo, &lTitleScreenParticleBankHeaderHi, &lTitleScreenParticleBankTextureLo, &lTitleScreenParticleBankTextureHi);
}

// 80133E68
void func_ovl10_80133E68()
{
	GObj* temp_v0;
	efGenerator *efgen;

	if (gSceneData.scene_previous == 0x2E)
	{
		temp_v0 = gcMakeGObjSPAfter(0xE, 0, 5, 0x80000000);
		gcSetupCommonDObjs(temp_v0, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_00028EB0), 0);
		gcAddAnimJointAll(temp_v0, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_00029010), 0);
		gcPlayAnimAll(temp_v0);
		gcAddGObjProcess(temp_v0, gcPlayAnimAll, 1, 1);

		efgen = func_ovl0_800D35DC(D_ovl10_8013444C, 0);
		if (efgen != NULL)
			efgen->dobj = DObjGetStruct(temp_v0)->child->sib_next->child;
	}
}

// 80133F3C
void func_ovl10_80133F3C()
{
	D_ovl10_80134458 = gcMakeGObjSPAfter(0, func_ovl10_801320F0, 1, 0x80000000);
	D_ovl10_80134454 = gcMakeGObjSPAfter(0, func_ovl10_80132448, 0xF, 0x80000000);
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
	func_ovl10_80133F3C();
	efAllocInitParticleBank();
	func_ovl10_80133DDC();
	func_ovl10_80133A94();
	func_ovl10_80131CF4();
	mnTitleCreateFire();
	mnTitleCreateLogo();
	func_ovl10_801332E4();
	func_ovl10_80133634();
	func_ovl10_80133504();
	func_ovl10_8013366C();
	func_ovl10_80133E68();

	if (gSceneData.scene_previous == 0x2E)
		while (func_8000092C() < 0x1077U);
}

// 80134074
void mnTitleSetupDisplayList(Gfx **display_list)
{
	gSPDisplayList(display_list[0]++, D_ovl10_80134348);
}

// 80134098
void func_ovl10_80134098()
{
	func_8000A5E4();
}

// 801340B8
void mnTitleStartScene()
{

	D_ovl10_80134370.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl10_80134370);

	if ((gSceneData.unk44 == 0) && (gSaveData.unk5E3 < 0x100))
	{
		gSaveData.unk5E3++;
		scBackupWrite();
	}

	D_ovl10_8013438C.arena_size = (u32) ((uintptr_t)&lOverlay10ArenaHi - (uintptr_t)&lOverlay10ArenaLo);
	gsGTLSceneInit(&D_ovl10_8013438C);
}

// 80134140
void mnTitleLoadFiles()
{
	rdSetup rldmSetup;

	rldmSetup.table_addr = &D_NF_001AC870;
	rldmSetup.table_files_num = &D_NF_00000854;
	rldmSetup.file_heap = 0;
	rldmSetup.file_heap_size = 0;
	rldmSetup.status_buf = (rdFileNode*) D_ovl10_801344A0;
	rldmSetup.status_buf_size = 0x20;
	rldmSetup.force_buf = 0;
	rldmSetup.force_buf_size = 0;
	rdManagerInitSetup(&rldmSetup);
	rdManagerLoadFiles(D_ovl10_80134420, ARRAY_COUNT(D_ovl10_80134420), &D_ovl10_801345A0, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl10_80134420, ARRAY_COUNT(D_ovl10_80134420)), 0x10));
}