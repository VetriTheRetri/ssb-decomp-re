#include <sys/rldm.h>
#include <sys/develop.h>
#include <sys/om.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>

#include "ovl26.h"

// 80131B20
void mnBattleSetupDisplayList(Gfx** display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
	return;
}

// 80131B78
s32 mnBattleGetShade(s32 port_id)
{
	sb32 used_shade[GMMATCH_PLAYERS_MAX];
	s32 i;

	if (gMnBattleIsTeamBattle == FALSE)
		return 0;

	for (i = 0; i < ARRAY_COUNT(used_shade); i++)
		used_shade[i] = 0;

	if (gMnBattleIsTeamBattle == TRUE)
	{
		for (i = 0; i < ARRAY_COUNT(gMnBattlePanels); i++)
		{
			if (port_id != i)
			{
				if (gMnBattlePanels[port_id].char_id == gMnBattlePanels[i].char_id
					&& gMnBattlePanels[port_id].team == gMnBattlePanels[i].team)
				{
					used_shade[gMnBattlePanels[i].shade] = TRUE;
				}
			}
		}
		for (i = 0; i < ARRAY_COUNT(used_shade); i++)
		{
			if (used_shade[i] == FALSE)
				return i;
		}
	}
	// WARNING: Undefined behavior. If gMnBattleIsTeamBattle is FALSE, returned
	// value is indeterminate.
}

// 80131C74
void mnBattleSelectCharWithToken(s32 port_id, s32 select_button)
{
	s32 held_port_id = gMnBattlePanels[port_id].held_port_id, costume_id;

	if (select_button != mnSelect_A)
	{
		costume_id = ftCostume_GetIndexFFA(gMnBattlePanels[held_port_id].char_id, select_button);

		if (mnBattleIsCostumeInUse(gMnBattlePanels[held_port_id].char_id, held_port_id, costume_id) != FALSE)
		{
			func_800269C0_275C0(0xA5U);
			return;
		}

		gMnBattlePanels[held_port_id].shade = mnBattleGetShade(held_port_id);
		gMnBattlePanels[held_port_id].costume_id = costume_id;
		func_ovl2_800E9248(gMnBattlePanels[held_port_id].player, costume_id, gMnBattlePanels[held_port_id].shade);
	}

	gMnBattlePanels[held_port_id].is_selected = TRUE;

	mnBattleReorderCursorsOnPlacement(port_id, held_port_id);

	gMnBattlePanels[held_port_id].holder_port_id = 4;
	gMnBattlePanels[port_id].cursor_state = mnCursorStateNotHoldingToken;

	mnBattleRedrawCursor(gMnBattlePanels[port_id].cursor, port_id, 2);

	gMnBattlePanels[port_id].held_port_id = -1;
	gMnBattlePanels[held_port_id].unk_0x88 = TRUE;

	mnBattleAnnounceFighter(port_id, held_port_id);

	if ((mnIsHandicap() != FALSE) || (gMnBattlePanels[held_port_id].player_type == 1))
		mnReplaceFighterNameWithHandicapCPULevel(held_port_id);

	mnBattleCreateWhiteSquare(held_port_id);
}

// 80131DC4
f32 mnBattleGetNextPortraitX(s32 portrait_id, f32 current_x_position)
{
	f32 portrait_x_position[12] = dMnBattlePortraitPositionsX;
	f32 portrait_velocity[12] = dMnBattlePortraitVelocities;

	if (current_x_position == portrait_x_position[portrait_id])
		return -1.0F;
	else if (portrait_x_position[portrait_id] < current_x_position)
	{
		return (current_x_position + portrait_velocity[portrait_id]) <= portrait_x_position[portrait_id]
				   ? portrait_x_position[portrait_id]
				   : current_x_position + portrait_velocity[portrait_id];
	}
	else
	{
		return (current_x_position + portrait_velocity[portrait_id]) >= portrait_x_position[portrait_id]
				   ? portrait_x_position[portrait_id]
				   : current_x_position + portrait_velocity[portrait_id];
	}
}

// 80131ED8
sb32 mnBattleCheckFighterIsXBoxed(s32 ft_kind) { return FALSE; }

// 80131EE4
void mnBattleSetPortraitX(GObj* portrait_gobj)
{
	SObj* next_sobj;
	SObj* main_sobj = SObjGetStruct(portrait_gobj);
	f32 new_portrait_x = mnBattleGetNextPortraitX(portrait_gobj->user_data.s, main_sobj->pos.x);

	if (new_portrait_x != -1.0F)
	{
		main_sobj->pos.x = new_portrait_x;
		next_sobj = main_sobj->next;

		if (next_sobj != NULL)
			next_sobj->pos.x = SObjGetStruct(portrait_gobj)->pos.x;
	}
}

// 80131F54
void mnBattleInitializePortraitBackgroundPosition(SObj* portrait_bg_sobj, s32 portrait_id)
{
	Vec2f coordinates[12] = dMnBattlePortraitPositionsXY;

	portrait_bg_sobj->pos.x = coordinates[portrait_id].x;
	portrait_bg_sobj->pos.y = coordinates[portrait_id].y;
}

// 80131FB0
void mnBattleAddRedXBoxToPortrait(GObj* portrait_gobj, s32 portrait_id)
{
	SObj* portrait_sobj = SObjGetStruct(portrait_gobj);
	f32 x = portrait_sobj->pos.x, y = portrait_sobj->pos.y;
	s32 xbox_image_offset = &(FILE_013_XBOX_IMAGE_OFFSET);

	portrait_sobj = gcAppendSObjWithSprite(portrait_gobj, (gFile013 + xbox_image_offset)); // AppendTexture

	portrait_sobj->pos.x = x + 4.0F;
	portrait_sobj->pos.y = y + 12.0F;
	portrait_sobj->sprite.attr = portrait_sobj->sprite.attr & ~SP_FASTCOPY;
	portrait_sobj->sprite.attr = portrait_sobj->sprite.attr | SP_TRANSPARENT;
	portrait_sobj->sprite.red = 0xFF;
	portrait_sobj->sprite.green = 0;
	portrait_sobj->sprite.blue = 0;
}

// 80132044
sb32 mnBattleGetIsLocked(s32 char_id)
{
	switch (char_id)
	{
	case Ft_Kind_Ness: return (gMnBattleCharacterUnlockedMask & (1 << Ft_Kind_Ness)) ? FALSE : TRUE;
	case Ft_Kind_Purin: return (gMnBattleCharacterUnlockedMask & (1 << Ft_Kind_Purin)) ? FALSE : TRUE;
	case Ft_Kind_Captain: return (gMnBattleCharacterUnlockedMask & (1 << Ft_Kind_Captain)) ? FALSE : TRUE;
	case Ft_Kind_Luigi: return (gMnBattleCharacterUnlockedMask & (1 << Ft_Kind_Luigi)) ? FALSE : TRUE;
	}
	return FALSE;
}

// 80132110 - Unused?
void func_ovl26_80132110() {}

// 80132118
s32 mnBattleGetFtKind(s32 portrait_id)
{
	s32 ftKind_order[12] = dMnBattleFtKindOrder;
	return ftKind_order[portrait_id];
}

// 80132168
s32 mnBattleGetPortraitId(s32 ft_kind)
{
	s32 portrait_id_order[DAIRANTOU_CHR_PLAYABLE_MAX] = dMnBattlePortraitOrder;
	return portrait_id_order[ft_kind];
}

// 801321B8
void mnBattleRenderPortraitWithNoise(GObj* portrait_gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x30, 0x30, 0x30, 0xFF);
	gDPSetCombineLERP(gDisplayListHead[0]++, NOISE, TEXEL0, PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0, NOISE, TEXEL0,
					  PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	func_ovl0_800CCF74(portrait_gobj);
}

// 80132278
void mnBattleCreateLockedPortrait(s32 portrait_id)
{
	GObj* texture_gobj;
	SObj* texture_sobj;
	s32 locked_portrait_offsets[12] = dMnBattleLockedPortraitOffsets;

	// portrait bg (fire)
	texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
	omAddGObjRenderProc(texture_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
	omAddGObjCommonProc(texture_gobj, mnBattleSetPortraitX, 1, 1);

	texture_sobj = gcAppendSObjWithSprite(texture_gobj, gFile013 + (intptr_t)&FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET);
	texture_sobj->pos.x = (f32)(((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 0x2D) + 0x19);
	texture_sobj->pos.y = (f32)(((portrait_id >= 6 ? 1 : 0) * 0x2B) + 0x24);

	mnBattleInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
	texture_gobj->user_data.p = portrait_id;

	// portrait
	texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
	omAddGObjRenderProc(texture_gobj, mnBattleRenderPortraitWithNoise, 0x1BU, 0x80000000U, -1);
	omAddGObjCommonProc(texture_gobj, mnBattleSetPortraitX, 1, 1);

	texture_sobj
		= gcAppendSObjWithSprite(texture_gobj, (gFile013 + locked_portrait_offsets[mnBattleGetFtKind(portrait_id)]));
	texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
	texture_sobj->sprite.attr = texture_sobj->sprite.attr | SP_TRANSPARENT;

	texture_gobj->user_data.p = portrait_id;
	mnBattleInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

	// question mark
	texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
	omAddGObjRenderProc(texture_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
	omAddGObjCommonProc(texture_gobj, mnBattleSetPortraitX, 1, 1);

	texture_sobj
		= gcAppendSObjWithSprite(texture_gobj, gFile013 + (intptr_t)&FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET);
	texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
	texture_sobj->sprite.attr = texture_sobj->sprite.attr | SP_TRANSPARENT;
	texture_sobj->shadow_color.r = 0x5B;
	texture_sobj->shadow_color.g = 0x41;
	texture_sobj->shadow_color.b = 0x33;
	texture_sobj->sprite.red = 0xC4;
	texture_sobj->sprite.green = 0xB9;
	texture_sobj->sprite.blue = 0xA9;

	texture_gobj->user_data.p = portrait_id;
	mnBattleInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
}

// 80132520
void mnBattleCreatePortrait(s32 portrait_id)
{
	GObj *portrait_gobj, *portrait_bg_gobj;
	SObj* texture_sobj;
	s32 portrait_offsets[12] = dMnBattlePortraitOffsets;

	// if locked, render locked portrait instead
	if (mnBattleGetIsLocked(mnBattleGetFtKind(portrait_id)))
		mnBattleCreateLockedPortrait(portrait_id);
	else
	{
		// portrait bg (fire)
		portrait_bg_gobj = omMakeGObjCommon(0U, NULL, 0x1DU, 0x80000000U);
		omAddGObjRenderProc(portrait_bg_gobj, func_ovl0_800CCF00, 0x24U, 0x80000000U, -1);
		portrait_bg_gobj->user_data.p = portrait_id;
		omAddGObjCommonProc(portrait_bg_gobj, mnBattleSetPortraitX, 1, 1);

		texture_sobj
			= gcAppendSObjWithSprite(portrait_bg_gobj, gFile013 + (intptr_t)&FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET);
		mnBattleInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

		// portrait
		portrait_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
		omAddGObjRenderProc(portrait_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
		omAddGObjCommonProc(portrait_gobj, mnBattleSetPortraitX, 1, 1);

		texture_sobj
			= gcAppendSObjWithSprite(portrait_gobj, (gFile013 + portrait_offsets[mnBattleGetFtKind(portrait_id)]));
		texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
		texture_sobj->sprite.attr = texture_sobj->sprite.attr | SP_TRANSPARENT;
		portrait_gobj->user_data.p = portrait_id;

		// this conditionally draws a big red box with an X in it, but this
		// check always fails
		if (mnBattleCheckFighterIsXBoxed(mnBattleGetFtKind(portrait_id)) != FALSE)
			mnBattleAddRedXBoxToPortrait(portrait_gobj, portrait_id);
		mnBattleInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
	}
}

// 801326DC
void mnBattleCreatePortraits()
{
	s32 portrait_id;

	for (portrait_id = 0; portrait_id < 12; portrait_id++)
		mnBattleCreatePortrait(portrait_id);
}

// 8013271C
void mnCreateTeamButton(s32 team_id, s32 port_id)
{
	GObj* team_button_gobj;
	SObj* team_button_sobj;
	s32 team_color_button_offsets[3] = dMnBattleTeamButtonOffsets;

	team_button_gobj = gMnBattlePanels[port_id].team_color_button = omMakeGObjCommon(0U, NULL, 0x1BU, 0x80000000U);
	omAddGObjRenderProc(team_button_gobj, func_ovl0_800CCF00, 0x22U, 0x80000000U, -1);

	team_button_sobj = gcAppendSObjWithSprite(team_button_gobj, gFile011 + team_color_button_offsets[team_id]);
	team_button_sobj->pos.x = (f32)((port_id * 0x45) + 0x22);
	team_button_sobj->pos.y = 131.0F;
	team_button_sobj->sprite.attr = team_button_sobj->sprite.attr & ~SP_FASTCOPY;
	team_button_sobj->sprite.attr = team_button_sobj->sprite.attr | SP_TRANSPARENT;
}

// 80132824
void mnDestroyTeamButton(s32 port_id)
{
	if (gMnBattlePanels[port_id].team_color_button != NULL)
	{
		omEjectGObjCommon(gMnBattlePanels[port_id].team_color_button);
		gMnBattlePanels[port_id].team_color_button = NULL;
	}
}

// 80132878
void mnCreateOrReplaceTeamButton(s32 team_id, s32 port_id)
{
	mnDestroyTeamButton(port_id);
	mnCreateTeamButton(team_id, port_id);
}

// 801328AC
void mnDestroyTeamButtons()
{
	s32 port_id;

	for (port_id = 0; port_id < ARRAY_COUNT(gMnBattlePanels); port_id++)
	{
		if (gMnBattlePanels[port_id].team_color_button != NULL)
		{
			omEjectGObjCommon(gMnBattlePanels[port_id].team_color_button);
			gMnBattlePanels[port_id].team_color_button = NULL;
		}
	}
}

// 80132904
void mnCreateTeamButtons()
{
	s32 panel_id;

	mnDestroyTeamButtons();

	for (panel_id = 0; panel_id < ARRAY_COUNT(gMnBattlePanels); panel_id++)
		mnCreateTeamButton(gMnBattlePanels[panel_id].team, panel_id);
}

// 8013295C
void mnRecreateTypeButton(GObj* type_gobj, s32 port_id, s32 type_id)
{
	SObj* type_sobj;
	f32 x = (f32)((port_id * 0x45) + 0x40), y = 131.0F;
	s32 type_button_offsets[3] = dMnBattleTypeButtonOffsets;

	func_8000B760(type_gobj);
	type_sobj = gcAppendSObjWithSprite(type_gobj, gFile011 + type_button_offsets[type_id]);
	type_sobj->pos.x = x;
	type_sobj->pos.y = y;
	type_sobj->sprite.attr = type_sobj->sprite.attr & ~SP_FASTCOPY;
	type_sobj->sprite.attr = type_sobj->sprite.attr | SP_TRANSPARENT;
}

// 80132A14
void mnBattleSetNameAndLogo(GObj* name_logo_gobj, s32 port_id, s32 ft_kind)
{
	SObj* sobj;
	Vec2f coords[12] = dMnBattleUnusedPositions;
	s32 logo_offsets[12] = dMnBattleLogoOffsets;
	s32 name_offsets[12] = dMnBattleNameOffsets;

	if (ft_kind != Ft_Kind_Null)
	{
		func_8000B760(name_logo_gobj);

		// logo
		sobj = gcAppendSObjWithSprite(name_logo_gobj, gFile014 + logo_offsets[ft_kind]);
		sobj->pos.x = (port_id * 0x45) + 0x18;
		sobj->pos.y = 143.0F;
		sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
		sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;

		if (gMnBattlePanels[port_id].player_type == mnPanelTypeHuman)
		{
			sobj->sprite.red = 0x1E;
			sobj->sprite.green = 0x1E;
			sobj->sprite.blue = 0x1E;
		}
		else
		{
			sobj->sprite.red = 0x44;
			sobj->sprite.green = 0x44;
			sobj->sprite.blue = 0x44;
		}

		// name
		sobj = gcAppendSObjWithSprite(name_logo_gobj, gFile011 + name_offsets[ft_kind]);
		sobj->pos.x = (port_id * 0x45) + 0x16;
		sobj->pos.y = 201.0F;
		sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
		sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;
	}
}

// 80132BF4
void mnAnimatePanelDoors(s32 port_id)
{
	// left door
	SObjGetStruct(gMnBattlePanels[port_id].panel_doors)->pos.x
		= (f32)((s32)gMnBattlePanels[port_id].door_offset + port_id * 0x45 - 0x13);

	// right door
	SObjGetStruct(gMnBattlePanels[port_id].panel_doors)->next->pos.x
		= (f32)(port_id * 0x45 + 0x58 - (s32)gMnBattlePanels[port_id].door_offset);
}

// 80132C6C
void mnUpdatePanelDoors(GObj* panel_doors)
{
	s32 port_id = panel_doors->user_data.p;
	s32 delta = 2, max = 0x29, min = 0;

	if (gMnBattlePanels[port_id].player_type == mnPanelTypeNA)
	{
		if (gMnBattlePanels[port_id].door_offset == delta)
		{
			// left over check
		}

		if (gMnBattlePanels[port_id].door_offset < max)
		{
			gMnBattlePanels[port_id].door_offset += delta;

			if (gMnBattlePanels[port_id].door_offset >= max)
			{
				gMnBattlePanels[port_id].door_offset = max;
				func_800269C0_275C0(0xA6U);
			}
			mnAnimatePanelDoors(port_id);
		}
	}
	else
	{
		if (gMnBattlePanels[port_id].door_offset == min)
		{
			// left over check
		}

		if (gMnBattlePanels[port_id].door_offset > min)
		{
			gMnBattlePanels[port_id].door_offset -= delta;

			if (gMnBattlePanels[port_id].door_offset < min)
				gMnBattlePanels[port_id].door_offset = min;
			mnAnimatePanelDoors(port_id);
		}
	}
}

// 80132D1C
void mnBattleCreatePortraitViewport()
{
	GObj* camera_gobj
		= func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x46, 0x08000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80132DBC
void mnBattleCreatePortraitBackgroundViewport()
{
	GObj* camera_gobj
		= func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x4B, 0x1000000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80132E5C
void mnBattleCreatePortraitWhiteBackgroundViewport()
{
	GObj* camera_gobj
		= func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x49, 0x2000000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80132EFC
void mnBattleCreatePanelDoorsViewport()
{
	GObj* camera_gobj
		= func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x28, 0x20000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80132F9C
void mnBattleCreateTypeButtonViewport()
{
	GObj* camera_gobj
		= func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x23, 0x40000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 8013303C
void mnBattleCreatePanelViewport()
{
	GObj* camera_gobj
		= func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x32, 0x10000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 801330DC
void mnBattleCreateTeamButtonViewPort()
{
	GObj* camera_gobj
		= func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x2D, 0x400000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 8013317C
void mnRenderPanelDoorsP1(GObj* panel_doors_gobj)
{
	func_ovl0_800CD1F0(0x16, 0x58, 0x7E, 0xD9);
	func_ovl0_800CCF00(panel_doors_gobj);
	func_ovl0_800CD1F0(0xA, 0x136, 0xA, 0xE6);
}

// 801331C8
void mnRenderPanelDoorsP2(GObj* panel_doors_gobj)
{
	func_ovl0_800CD1F0(0x5B, 0x9D, 0x7E, 0xD9);
	func_ovl0_800CCF00(panel_doors_gobj);
	func_ovl0_800CD1F0(0xA, 0x136, 0xA, 0xE6);
}

// 80133214
void mnRenderPanelDoorsP3(GObj* panel_doors_gobj)
{
	func_ovl0_800CD1F0(0xA0, 0xE2, 0x7E, 0xD9);
	func_ovl0_800CCF00(panel_doors_gobj);
	func_ovl0_800CD1F0(0xA, 0x136, 0xA, 0xE6);
}

// 80133260
void mnRenderPanelDoorsP4(GObj* panel_doors_gobj)
{
	func_ovl0_800CD1F0(0xE5, 0x127, 0x7E, 0xD9);
	func_ovl0_800CCF00(panel_doors_gobj);
	func_ovl0_800CD1F0(0xA, 0x136, 0xA, 0xE6);
}

// 801332AC
void mnUpdatePanel(GObj* panel_gobj, s32 color_id, s32 player_type)
{
	SObj* panel_sobj;
	intptr_t panel_offsets[4] = dMnBattlePanelOffsets;
	intptr_t panel_offsets_cpu[4] = dMnBattlePanelCPUOffsets;
	ColorRGB colors[4] = dMnBattleUnusedColors;

	panel_sobj = SObjGetStruct(panel_gobj);

	if (player_type == mnPanelTypeHuman)
		SObjGetSprite(panel_sobj)->LUT = GetAddressFromOffset(gFile011, panel_offsets[color_id]);
	else
		SObjGetSprite(panel_sobj)->LUT = GetAddressFromOffset(gFile011, panel_offsets_cpu[color_id]);
}

// 80133378
void mnCreateTypeButton(s32 port_id)
{
	GObj* type_button_gobj;
	intptr_t offsets[3] = dMnBattleTypeButtonOffsetsDuplicate;

	type_button_gobj
		= func_ovl0_800CD050(0, NULL, 0x18, 0x80000000, func_ovl0_800CCF00, 0x1E, 0x80000000, -1,
							 GetAddressFromOffset(gFile011, offsets[gMnBattlePanels[port_id].player_type]), 1, NULL, 1);

	gMnBattlePanels[port_id].type_button = type_button_gobj;
	SObjGetStruct(type_button_gobj)->pos.x = (f32)((port_id * 0x45) + 0x40);
	SObjGetStruct(type_button_gobj)->pos.y = 131.0F;
	SObjGetStruct(type_button_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(type_button_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 801334A8
void mnBattleCreateTypeImage(s32 port_id)
{
	GObj* type_gobj;
	SObj* type_sobj;
	intptr_t offsets[4] = dMnBattleTypeOffsets;
	f32 floats[4] = dMnBattleTypeOffsetsX;

	gMnBattlePanels[port_id].type = type_gobj = omMakeGObjCommon(0U, NULL, 0x16U, 0x80000000U);
	omAddGObjRenderProc(type_gobj, func_ovl0_800CCF00, 0x1CU, 0x80000000U, -1);

	if (gMnBattlePanels[port_id].player_type == mnPanelTypeCPU)
	{
		type_sobj = gcAppendSObjWithSprite(type_gobj, GetAddressFromOffset(gFile011, &FILE_011_TYPE_CP_IMAGE_OFFSET));
		type_sobj->pos.x = (f32)((port_id * 0x45) + 0x1A);
	}
	else
	{
		type_sobj = gcAppendSObjWithSprite(type_gobj, GetAddressFromOffset(gFile011, offsets[port_id]));
		type_sobj->pos.x = floats[port_id] + (f32)((port_id * 0x45) + 0x16);
	}
	type_sobj->sprite.attr &= ~SP_FASTCOPY;
	type_sobj->sprite.attr |= SP_TRANSPARENT;
	type_sobj->sprite.red = 0;
	type_sobj->sprite.green = 0;
	type_sobj->sprite.blue = 0;
	type_sobj->pos.y = 131.0F;
}

// 8013365C
void mnBattleCreatePanel(s32 port_id)
{
	GObj* temp_gobj;
	SObj* right_door_sobj;

	intptr_t type_offsets[4] = dMnBattleTypeOffsetsDuplicate; // unused
	f32 type_x_offsets[4] = dMnBattleTypeOffsetsXDuplicate;	  // unused
	intptr_t panelRenderRoutines[4] = dMnBattlePanelProcRenderList;
	s32 palette_ids[4] = dMnBattlePaletteIndexes;

	s32 start_x;

	// create panel
	temp_gobj = func_ovl0_800CD050(0, NULL, 0x16, 0x80000000, func_ovl0_800CCF00, 0x1C, 0x80000000, -1,
								   GetAddressFromOffset(gFile011, &FILE_011_PANEL_IMAGE_OFFSET), 1, NULL, 1);
	gMnBattlePanels[port_id].panel = temp_gobj;
	start_x = port_id * 0x45;
	SObjGetStruct(temp_gobj)->pos.x = (f32)(start_x + 0x16);
	SObjGetStruct(temp_gobj)->pos.y = 126.0F;
	SObjGetStruct(temp_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(temp_gobj)->sprite.attr |= SP_TRANSPARENT;

	if (gMnBattleIsTeamBattle == FALSE)
		mnUpdatePanel(temp_gobj, palette_ids[port_id], gMnBattlePanels[port_id].player_type);
	else
	{
		// TODO: team enum - 2 is GREEN here
		mnUpdatePanel(temp_gobj, ((gMnBattlePanels[port_id].team == 2) ? 3 : gMnBattlePanels[port_id].team),
					  gMnBattlePanels[port_id].player_type);
	}

	mnBattleCreateTypeImage(port_id);

	// create panel doors
	temp_gobj = func_ovl0_800CD050(0, NULL, 0x17, 0x80000000, panelRenderRoutines[port_id], 0x1D, 0x80000000, -1,
								   GetAddressFromOffset(gFile011, &FILE_011_PANEL_DOOR_L_IMAGE_OFFSET), 1,
								   mnUpdatePanelDoors, 1);
	temp_gobj->user_data.p = port_id;
	SObjGetStruct(temp_gobj)->pos.x = (f32)(start_x - 0x13);
	SObjGetStruct(temp_gobj)->pos.y = 126.0F;
	SObjGetStruct(temp_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(temp_gobj)->sprite.attr |= SP_TRANSPARENT;
	gMnBattlePanels[port_id].panel_doors = temp_gobj;

	right_door_sobj
		= gcAppendSObjWithSprite(temp_gobj, GetAddressFromOffset(gFile011, &FILE_011_PANEL_DOOR_R_IMAGE_OFFSET));
	right_door_sobj->pos.x = (f32)(start_x + 0x58);
	right_door_sobj->pos.y = 126.0F;
	right_door_sobj->sprite.attr &= ~SP_FASTCOPY;
	right_door_sobj->sprite.attr |= SP_TRANSPARENT;
	gMnBattlePanels[port_id].door_offset = 0x29;

	mnAnimatePanelDoors(port_id);
	mnCreateTypeButton(port_id);

	// name/logo
	temp_gobj = omMakeGObjCommon(0U, NULL, 0x16U, 0x80000000U);
	gMnBattlePanels[port_id].name_logo = temp_gobj;
	omAddGObjRenderProc(temp_gobj, func_ovl0_800CCF00, 0x1CU, 0x80000000U, -1);

	mnBattleSyncNameAndLogo(port_id);

	if ((mnIsHandicap() != FALSE) || (gMnBattlePanels[port_id].player_type == mnPanelTypeCPU))
		mnReplaceFighterNameWithHandicapCPULevel(port_id);
	if (gMnBattleIsTeamBattle == TRUE)
		mnCreateTeamButton(gMnBattlePanels[port_id].team, port_id);
}

// 80133A1C
s32 mnPow(s32 num, s32 pow)
{
	if (pow == 0)
		return 1;
	else
	{
		s32 result = num, i = pow;

		if (pow >= 2)
		{
			do
				result *= num;
			while (--i != 1);
		}

		return result;
	}
}

// 80133ABC
void mnSetTextureColors(SObj* sobj, u32 colors[])
{
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->shadow_color.r = (u8)colors[0];
	sobj->shadow_color.g = (u8)colors[1];
	sobj->shadow_color.b = (u8)colors[2];
	sobj->sprite.red = (u8)colors[3];
	sobj->sprite.green = (u8)colors[4];
	sobj->sprite.blue = (u8)colors[5];
}

// 80133B04
s32 mnGetNumberOfDigits(s32 num, s32 maxDigits)
{
	s32 numDigits;

	for (numDigits = maxDigits; numDigits > 0; numDigits--)
	{
		if (mnPow(10, numDigits - 1) != 0 ? num / mnPow(10, numDigits - 1) : 0 != 0)
			return numDigits;
	}

	return 0;
}

// 80133BB0
void mnCreateNumber(GObj* number_gobj, s32 num, f32 x, f32 y, s32 colors[], s32 maxDigits, sb32 pad)
{
	intptr_t number_offsets[10] = dMnBattleNumberOffsets;
	SObj* number_sobj;
	f32 left_x = x;
	s32 place;
	s32 numDigits;
	s32 digit;

	if (num < 0)
		num = 0;

	number_sobj = gcAppendSObjWithSprite(number_gobj, GetAddressFromOffset(gFile011, number_offsets[num % 10]));
	mnSetTextureColors(number_sobj, colors);
	left_x -= number_sobj->sprite.width;
	number_sobj->pos.x = left_x;
	number_sobj->pos.y = y;

	for (place = 1, numDigits = (pad != FALSE) ? maxDigits : mnGetNumberOfDigits(num, maxDigits); place < numDigits;
		 place++, numDigits = (pad != FALSE) ? maxDigits : mnGetNumberOfDigits(num, maxDigits))
	{
		digit = (mnPow(10, place) != 0) ? num / mnPow(10, place) : 0;

		number_sobj = gcAppendSObjWithSprite(number_gobj, GetAddressFromOffset(gFile011, number_offsets[digit % 10]));
		mnSetTextureColors(number_sobj, colors);
		left_x -= (f32)number_sobj->sprite.width;
		number_sobj->pos.x = left_x;
		number_sobj->pos.y = y;
	}
}

// 80133E28
void mnDrawTimerValue(s32 num)
{
	s32 colors[6] = dMnBattleNumberColorsTime;
	SObj* infinity_sobj;

	while (SObjGetStruct(gMnBattlePickerGObj)->next != NULL)
		omEjectSObj(SObjGetStruct(gMnBattlePickerGObj)->next);

	if (num == 100)
	{
		infinity_sobj = gcAppendSObjWithSprite(gMnBattlePickerGObj,
											   GetAddressFromOffset(gFile011, &FILE_011_INFINITY_IMAGE_OFFSET));
		infinity_sobj->pos.x = 194.0F;
		infinity_sobj->pos.y = 24.0F;
		infinity_sobj->shadow_color.r = colors[0];
		infinity_sobj->shadow_color.g = colors[1];
		infinity_sobj->shadow_color.b = colors[2];
		infinity_sobj->sprite.red = colors[3];
		infinity_sobj->sprite.green = colors[4];
		infinity_sobj->sprite.blue = colors[5];
		infinity_sobj->sprite.attr &= ~SP_FASTCOPY;
		infinity_sobj->sprite.attr |= SP_TRANSPARENT;
		return;
	}

	if (num < 10)
		mnCreateNumber(gMnBattlePickerGObj, num, 208.0F, 23.0F, colors, 2, 0);
	else
		mnCreateNumber(gMnBattlePickerGObj, num, 212.0F, 23.0F, colors, 2, 0);
}

// 80133FAC
void mnDrawTimerPicker(s32 num)
{
	GObj* picker_gobj;

	if (gMnBattlePickerGObj != NULL)
		omEjectGObjCommon(gMnBattlePickerGObj);

	picker_gobj = func_ovl0_800CD050(0, NULL, 0x19, 0x80000000, func_ovl0_800CCF00, 0x1A, 0x80000000, -1,
									 GetAddressFromOffset(gFile011, &FILE_011_PICKER_TIME_IMAGE_OFFSET), 1, NULL, 1);
	gMnBattlePickerGObj = picker_gobj;

	SObjGetStruct(picker_gobj)->pos.x = 140.0F;
	SObjGetStruct(picker_gobj)->pos.y = 22.0F;
	SObjGetStruct(picker_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(picker_gobj)->sprite.attr |= SP_TRANSPARENT;

	mnDrawTimerValue(gMnBattleTimerValue);
}

// 80134094
void mnDrawStockValue(s32 num)
{
	s32 colors[6] = dMnBattleNumberColorsStock;

	while (SObjGetStruct(gMnBattlePickerGObj)->next != NULL)
		omEjectSObj(SObjGetStruct(gMnBattlePickerGObj)->next);

	if (num < 10)
		mnCreateNumber(gMnBattlePickerGObj, num, 210.0F, 23.0F, colors, 2, 0);
	else
		mnCreateNumber(gMnBattlePickerGObj, num, 214.0F, 23.0F, colors, 2, 0);
}

// 80134198
void mnDrawStockPicker(s32 num)
{
	GObj* picker_gobj;

	if (gMnBattlePickerGObj != NULL)
		omEjectGObjCommon(gMnBattlePickerGObj);

	picker_gobj = func_ovl0_800CD050(0, NULL, 0x19, 0x80000000, func_ovl0_800CCF00, 0x1A, 0x80000000, -1,
									 GetAddressFromOffset(gFile011, &FILE_011_PICKER_STOCK_IMAGE_OFFSET), 1, NULL, 1);
	gMnBattlePickerGObj = picker_gobj;

	SObjGetStruct(picker_gobj)->pos.x = 140.0F;
	SObjGetStruct(picker_gobj)->pos.y = 22.0F;
	SObjGetStruct(picker_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(picker_gobj)->sprite.attr |= SP_TRANSPARENT;

	mnDrawStockValue(gMnBattleStockValue + 1);
}

// 80134284
void mnBattleCreateBackground()
{
	GObj* background_gobj;
	SObj* background_sobj;

	GObj* camera_gobj
		= func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x04000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	background_gobj = omMakeGObjCommon(0U, NULL, 0x11U, 0x80000000U);
	omAddGObjRenderProc(background_gobj, func_ovl0_800CCF00, 0x1AU, 0x80000000U, -1);
	background_sobj
		= gcAppendSObjWithSprite(background_gobj, GetAddressFromOffset(gFile015, &FILE_015_BACKGROUND_IMAGE_OFFSET));
	background_sobj->cmt = G_TX_WRAP;
	background_sobj->cms = G_TX_WRAP;
	background_sobj->maskt = 6;
	background_sobj->masks = 5;
	background_sobj->lrs = 300;
	background_sobj->lrt = 220;
	background_sobj->pos.x = 10.0F;
	background_sobj->pos.y = 10.0F;
}

// 801343B0
void mnBattleDrawTitleAndBack()
{
	GObj* back_gobj;
	GObj* title_gobj;
	void* unused;
	intptr_t title_offsets[2] = dMnBattleTitleOffsets;
	ColorRGB title_colors[2] = dMnBattleTitleColors;

	title_gobj = func_ovl0_800CD050(0, NULL, 0x19, 0x80000000, func_ovl0_800CCF00, 0x1A, 0x80000000, -1,
									GetAddressFromOffset(gFile012, title_offsets[gMnBattleIsTeamBattle]), 1, NULL, 1);
	SObjGetStruct(title_gobj)->pos.x = 27.0F;
	SObjGetStruct(title_gobj)->pos.y = 24.0F;
	SObjGetStruct(title_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(title_gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(title_gobj)->sprite.red = title_colors[gMnBattleIsTeamBattle].r;
	SObjGetStruct(title_gobj)->sprite.green = title_colors[gMnBattleIsTeamBattle].g;
	SObjGetStruct(title_gobj)->sprite.blue = title_colors[gMnBattleIsTeamBattle].b;
	gMnBattleTitleGObj = title_gobj;

	(gMnBattleRule == GMMATCH_GAMERULE_TIME) ? mnDrawTimerPicker(gMnBattleTimerValue)
											 : mnDrawStockPicker(gMnBattleStockValue);

	back_gobj = func_ovl0_800CD050(0, NULL, 0x19, 0x80000000, func_ovl0_800CCF00, 0x1A, 0x80000000, -1,
								   GetAddressFromOffset(gFile011, &FILE_011_BACK_IMAGE_OFFSET), 1, NULL, 1);
	SObjGetStruct(back_gobj)->pos.x = 244.0F;
	SObjGetStruct(back_gobj)->pos.y = 23.0F;
	SObjGetStruct(back_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(back_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 801345F0 - Unused?
void func_ovl26_801345F0() { return; }

// 801345F8 - Unused?
void func_ovl26_801345F8() { return; }

// 80134600 - Unused?
void func_ovl26_80134600() { return; }

// 80134608
s32 mnBattleGetAdditionalSelectedCount(s32 ft_kind)
{
	s32 count = 0, i;

	for (i = 0; i < GMMATCH_PLAYERS_MAX; i++)
	{
		if (ft_kind == gMnBattlePanels[i].char_id)
			count += 1;
	}

	return (count != 0) ? count - 1 : count;
}

// 80134674
sb32 mnBattleIsCostumeInUse(s32 ft_kind, s32 port_id, s32 costume_id)
{
	s32 i;

	for (i = 0; i < GMMATCH_PLAYERS_MAX; i++)
	{
		if ((port_id != i) && (ft_kind == gMnBattlePanels[i].char_id) && (costume_id == gMnBattlePanels[i].costume_id))
			return TRUE;
	}
	return FALSE;
}

// 8013473C
// Gets the first costume not in use by another port
s32 mnBattleGetAvailableCostumeFFA(s32 ft_kind, s32 port_id)
{
	mnCharPanelBattle* panel_info;
	s32 i, j, k;
	sb32 some_array[4];

	for (i = 0; i < 4; i++)
		some_array[i] = FALSE;

	for (i = 0; i < 4; i++)
	{
		if (i != port_id)
		{
			panel_info = &gMnBattlePanels[i];

			if (ft_kind == panel_info->char_id)
			{
				for (j = 0; j < 4; j++)
				{
					if (ftCostume_GetIndexFFA(ft_kind, j) == panel_info->costume_id)
						some_array[j] = TRUE;
				}
			}
		}
	}

	for (k = 0; k < 4; k++)
	{
		if (some_array[k] == FALSE)
			return k;
	}
}

// 8013487C
s32 mnBattleGetAvailableCostume(s32 ft_kind, s32 port_id)
{
	if (gMnBattleIsTeamBattle == FALSE)
		return ftCostume_GetIndexFFA(ft_kind, mnBattleGetAvailableCostumeFFA(ft_kind, port_id));
	else if (gMnBattleIsTeamBattle == TRUE)
		return ftCostume_GetIndexTeam(ft_kind, gMnBattlePanels[port_id].team);
}

// 801348EC
s32 mnBattleGetSelectedAnimation(s32 ft_kind)
{
	switch (ft_kind)
	{
	case Ft_Kind_Fox:
	case Ft_Kind_Samus: return 0x10004;
	case Ft_Kind_Donkey:
	case Ft_Kind_Luigi:
	case Ft_Kind_Link:
	case Ft_Kind_Captain: return 0x10001;
	case Ft_Kind_Yoshi:
	case Ft_Kind_Purin:
	case Ft_Kind_Ness: return 0x10002;
	case Ft_Kind_Mario:
	case Ft_Kind_Kirby: return 0x10003;
	default: return 0x10001;
	}
}

// 8013494C
void mnBattleRotateFighter(GObj* fighter_gobj)
{
	ftStruct* fp = ftGetStruct(fighter_gobj);
	s32 port_id = fp->player;
	mnCharPanelBattle* panel_info = &gMnBattlePanels[port_id];

	if (panel_info->unk_0x88 == 1)
	{
		if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y < (PI32 / 1800))
		{
			if (panel_info->selected_animation_started == FALSE)
			{
				func_ovl1_803905CC(panel_info->player, mnBattleGetSelectedAnimation(panel_info->char_id));
				panel_info->selected_animation_started = TRUE;
			}
		}
		else
		{
			DObjGetStruct(fighter_gobj)->rotate.vec.f.y += M_DTOR_F(20.0F);

			if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > M_DTOR_F(360.0F))
			{
				DObjGetStruct(fighter_gobj)->rotate.vec.f.y = 0.0F;
				func_ovl1_803905CC(panel_info->player, mnBattleGetSelectedAnimation(panel_info->char_id));
				panel_info->selected_animation_started = TRUE;
			}
		}
	}
	else
	{
		DObjGetStruct(fighter_gobj)->rotate.vec.f.y += M_DTOR_F(2.0F);
		if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > M_DTOR_F(360.0F))
			DObjGetStruct(fighter_gobj)->rotate.vec.f.y -= M_DTOR_F(360.0F);
	}
}

// 80134A8C
void mnBattleSpawnFighter(GObj* fighter_gobj, s32 port_id, s32 ft_kind, s32 costume_id)
{
	f32 initial_y_rotation;
	ftCreateDesc spawn_info = ftGlobal_SpawnInfo_MainData;

	if (ft_kind != Ft_Kind_Null)
	{
		if (fighter_gobj != NULL)
		{
			initial_y_rotation = DObjGetStruct(fighter_gobj)->rotate.vec.f.y;
			func_ovl2_800D78E8(fighter_gobj);
		}
		else
			initial_y_rotation = 0.0F;

		spawn_info.ft_kind = ft_kind;
		gMnBattlePanels[port_id].costume_id = spawn_info.costume = costume_id;
		spawn_info.shade = gMnBattlePanels[port_id].shade;
		spawn_info.anim_heap = gMnBattlePanels[port_id].anim_heap;
		spawn_info.player = port_id;
		fighter_gobj = ftManager_MakeFighter(&spawn_info);

		gMnBattlePanels[port_id].player = fighter_gobj;

		omAddGObjCommonProc(fighter_gobj, mnBattleRotateFighter, 1, 1);

		DObjGetStruct(fighter_gobj)->translate.vec.f.x = (port_id * 840) - 1250;
		DObjGetStruct(fighter_gobj)->translate.vec.f.y = -850.0F;

		DObjGetStruct(fighter_gobj)->rotate.vec.f.y = initial_y_rotation;

		DObjGetStruct(fighter_gobj)->scale.vec.f.x = menu_zoom[ft_kind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.y = menu_zoom[ft_kind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.z = menu_zoom[ft_kind];

		if (gMnBattlePanels[port_id].player_type == mnPanelTypeCPU)
			ftColor_CheckSetColAnimIndex(fighter_gobj, 1, 0);
	}
}

// 80134C64
void mnBattleCreateFighterViewport()
{
	Camera* cam = CameraGetStruct(
		(GObj*)func_8000B93C(0x401U, NULL, 0x10, 0x80000000U, func_80017EC0, 0x1E, 0x48600, -1, 1, 1, 0, 1, 0));
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	cam->vec.eye.x = 0.0F;
	cam->vec.eye.y = 0.0F;
	cam->vec.eye.z = 5000.0F;
	cam->flags = 4;
	cam->vec.at.x = 0.0F;
	cam->vec.at.y = 0.0F;
	cam->vec.at.z = 0.0F;
	cam->vec.up.x = 0.0F;
	cam->vec.up.z = 0.0F;
	cam->vec.up.y = 1.0F;
}

// 80134D54
void mnBattleRedrawCursor(GObj* cursor_gobj, s32 port_id, s32 cursor_state)
{
	SObj* cursor_sobj;
	f32 current_x, current_y;
	ColorRGBPair type_colors[4] = dMnBattleCursorTypeColors;
	intptr_t type_offsets[4] = dMnBattleCursorTypeOffsets;
	intptr_t cursor_offsets[3] = dMnBattleCursorOffsets;
	Vec2i type_positions[3] = dMnBattleCursorTypePositions;

	current_x = SObjGetStruct(cursor_gobj)->pos.x;
	current_y = SObjGetStruct(cursor_gobj)->pos.y;

	func_8000B760(cursor_gobj);

	cursor_sobj = gcAppendSObjWithSprite(cursor_gobj, GetAddressFromOffset(gFile011, cursor_offsets[cursor_state]));
	cursor_sobj->pos.x = current_x;
	cursor_sobj->pos.y = current_y;
	cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
	cursor_sobj->sprite.attr |= SP_TRANSPARENT;

	cursor_sobj = gcAppendSObjWithSprite(cursor_gobj, GetAddressFromOffset(gFile011, type_offsets[port_id]));
	cursor_sobj->pos.x = SObjGetPrev(cursor_sobj)->pos.x + type_positions[cursor_state].x;
	cursor_sobj->pos.y = SObjGetPrev(cursor_sobj)->pos.y + type_positions[cursor_state].y;
	cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
	cursor_sobj->sprite.attr |= SP_TRANSPARENT;
	cursor_sobj->sprite.red = type_colors[port_id].prim.r;
	cursor_sobj->sprite.green = type_colors[port_id].prim.g;
	cursor_sobj->sprite.blue = type_colors[port_id].prim.b;
	cursor_sobj->shadow_color.r = type_colors[port_id].env.r;
	cursor_sobj->shadow_color.g = type_colors[port_id].env.g;
	cursor_sobj->shadow_color.b = type_colors[port_id].env.b;
}

// 80134F64
sb32 mnCheckPickerRightArrowPress(GObj* cursor_gobj)
{
	f32 current_y;
	f32 current_x;
	s32 var_v1;
	SObj* temp_v0;

	temp_v0 = SObjGetStruct(cursor_gobj);
	current_y = temp_v0->pos.y + 3.0f;

	if ((current_y < 12.0f) || ((current_y > 35.0f)))
		var_v1 = 1;
	else
		var_v1 = 0;

	if (var_v1 != 0)
		return 0;
	current_x = temp_v0->pos.x + 20.0f;
	if ((current_x >= 210.0f) && (current_x <= 230.0f))
		var_v1 = 1;
	else
		var_v1 = 0;
	if (var_v1 != 0)
		return 1;
	return 0;
}

// 8013502C
s32 mnCheckPickerLeftArrowPress(GObj* cursor_gobj)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_y = cursor_sobj->pos.y + 3.0F;

	range_check = (current_y < 12.0F) || (current_y > 35.0F) ? TRUE : FALSE;
	if (range_check)
		return FALSE;

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= 140.0F) && (current_x <= 160.0F) ? TRUE : FALSE;
	if (range_check)
		return TRUE;

	return FALSE;
}

// 801350F4 - Unused?
void func_ovl26_801350F4() { return; }

// 801350FC
void mnBattleUpdatePanelsAndFighterCostumes()
{
	s32 i;
	s32 color_indexes[4] = dMnBattlePanelColorIndexes;

	if (gMnBattleIsTeamBattle == FALSE)
	{
		for (i = 0; i < 4; i++)
		{
			mnUpdatePanel(gMnBattlePanels[i].panel, color_indexes[i], gMnBattlePanels[i].player_type);
			if (gMnBattlePanels[i].char_id != Ft_Kind_Null)
			{
				gMnBattlePanels[i].costume_id = ftCostume_GetIndexFFA(
					gMnBattlePanels[i].char_id, mnBattleGetAvailableCostumeFFA(gMnBattlePanels[i].char_id, i));
				gMnBattlePanels[i].shade = mnBattleGetShade(i);
				func_ovl2_800E9248(gMnBattlePanels[i].player, gMnBattlePanels[i].costume_id, gMnBattlePanels[i].shade);
			}
		}
	}
	if (gMnBattleIsTeamBattle == TRUE)
	{
		for (i = 0; i < 4; i++)
		{
			mnUpdatePanel(gMnBattlePanels[i].panel, gMnBattlePanels[i].team == 2 ? 3 : gMnBattlePanels[i].team,
						  gMnBattlePanels[i].player_type);
			if (gMnBattlePanels[i].char_id != Ft_Kind_Null)
			{
				gMnBattlePanels[i].costume_id
					= ftCostume_GetIndexTeam(gMnBattlePanels[i].char_id, gMnBattlePanels[i].team);
				gMnBattlePanels[i].shade = mnBattleGetShade(i);
				func_ovl2_800E9248(gMnBattlePanels[i].player, gMnBattlePanels[i].costume_id, gMnBattlePanels[i].shade);
			}
		}
	}
}

// 80135270
s32 mnCheckFFATeamBattleTogglePress(GObj* cursor_gobj)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= 27.0F) && (current_x <= 137.0F) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= 14.0F) && (current_y <= 35.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 80135334
void mnHandleFFATeamBattleTogglePress()
{
	GObj* title_gobj;
	SObj* title_sobj;
	int i;
	intptr_t offsets[2] = dMnBattleTitleOffsetsDuplicate;
	ColorRGB colors[2] = dMnBattleTitleColorsDuplicate;

	title_gobj = gMnBattleTitleGObj;

	if (gMnBattleIsTeamBattle == 1)
		gMnBattleIsTeamBattle = 0;
	else
		gMnBattleIsTeamBattle = 1;
	func_800266A0_272A0();

	func_800269C0_275C0(0xA4U);

	if (gMnBattleIsTeamBattle == 0)
		func_800269C0_275C0(0x200U);
	else
		func_800269C0_275C0(0x20EU);

	func_8000B760(title_gobj);

	title_sobj = gcAppendSObjWithSprite(title_gobj, GetAddressFromOffset(gFile012, offsets[gMnBattleIsTeamBattle]));
	title_sobj->sprite.attr &= ~SP_FASTCOPY;
	title_sobj->sprite.attr |= SP_TRANSPARENT;
	title_sobj->pos.x = 27.0F;
	title_sobj->pos.y = 24.0F;
	title_sobj->sprite.red = colors[gMnBattleIsTeamBattle].r;
	title_sobj->sprite.green = colors[gMnBattleIsTeamBattle].g;
	title_sobj->sprite.blue = colors[gMnBattleIsTeamBattle].b;

	if (gMnBattleIsTeamBattle == 1)
	{
		for (i = 0; i < 4; i++)
		{
			if (gMnBattlePanels[i].char_id != Ft_Kind_Null)
				gMnBattlePanels[i].shade = 4;
		}
	}

	mnBattleUpdatePanelsAndFighterCostumes();

	if (gMnBattleIsTeamBattle == 0)
		mnDestroyTeamButtons();
	else
		mnCreateTeamButtons();
}

// 80135554
s32 mnCheckTeamButtonPress(GObj* cursor_gobj, s32 port_id)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= port_id * 69 + 34) && (current_x <= port_id * 69 + 58) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= 131.0F) && (current_y <= 141.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 80135634
sb32 mnCheckAnyTeamButtonPress(GObj* cursor_gobj, s32 cursor_port_id)
{
	s32 port_id;
	s32 color_indexes[3] = dMnBattleTeamPaletteIndexes;
	s32 unknown_unused[3] = D_ovl26_8013B7E4;
	u32 shade;

	if (gMnBattleIsTeamBattle != TRUE)
		return FALSE;

	for (port_id = 0; port_id < 4; port_id++)
	{
		if ((gMnBattlePanels[port_id].player_type != 2) && (mnCheckTeamButtonPress(cursor_gobj, port_id) != 0))
		{
			gMnBattlePanels[port_id].team = gMnBattlePanels[port_id].team == 2 ? 0 : gMnBattlePanels[port_id].team + 1;

			mnUpdatePanel(gMnBattlePanels[port_id].panel, color_indexes[gMnBattlePanels[port_id].team],
						  gMnBattlePanels[port_id].player_type);
			mnCreateOrReplaceTeamButton(gMnBattlePanels[port_id].team, port_id);

			if (gMnBattlePanels[port_id].char_id != Ft_Kind_Null)
			{
				gMnBattlePanels[port_id].costume_id
					= ftCostume_GetIndexTeam(gMnBattlePanels[port_id].char_id, gMnBattlePanels[port_id].team);

				gMnBattlePanels[port_id].shade = shade = mnBattleGetShade(port_id);
				func_ovl2_800E9248(gMnBattlePanels[port_id].player, gMnBattlePanels[port_id].costume_id, shade);
			}

			func_800269C0_275C0(0x9DU);

			return TRUE;
		}
	}
	return FALSE;
}

// 801357A4
sb32 mnCheckAnyCPUHandicapArrowPress(GObj* cursor_gobj, s32 cursor_port_id)
{
	s32 port_id;
	u32* target;

	for (port_id = 0; port_id < 4; port_id++)
	{
		target = (gMnBattlePanels[port_id].player_type == 0) ? &gMnBattlePanels[port_id].handicap
															 : &gMnBattlePanels[port_id].cpu_level;

		if (((gMnBattlePanels[port_id].player_type == 1)
			 || ((mnIsHandicapOn() != FALSE) && (gMnBattlePanels[port_id].player_type == 0)
				 && (port_id == cursor_port_id)))
			&& (gMnBattlePanels[port_id].unk_0x88 != 0))
		{
			if (mnCheckCPUHandicapRightArrowPress(cursor_gobj, port_id) != 0)
			{
				if ((s32)*target < 9)
				{
					func_800269C0_275C0(0xA4U);
					*target += 1;
					mnDrawHandicapCPULevelValue(port_id);
				}
				return 1;
			}
			if (mnCheckCPUHandicapLeftArrowPress(cursor_gobj, port_id) != 0)
			{
				if ((s32)*target >= 2)
				{
					func_800269C0_275C0(0xA4U);
					*target -= 1;
					mnDrawHandicapCPULevelValue(port_id);
				}
				return 1;
			}
		}
	}
	return 0;
}

// 801358F8
s32 mnCheckCPUHandicapRightArrowPress(GObj* cursor_gobj, s32 port_id)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= port_id * 69 + 68) && (current_x <= port_id * 69 + 90) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= 197.0F) && (current_y <= 216.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 801359D8
s32 mnCheckCPUHandicapLeftArrowPress(GObj* cursor_gobj, s32 port_id)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= port_id * 69 + 21) && (current_x <= port_id * 69 + 43) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= 197.0F) && (current_y <= 216.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 80135AB8
s32 mnCheckPlayerTypeButtonPress(GObj* cursor_gobj, s32 port_id)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= port_id * 69 + 60) && (current_x <= port_id * 69 + 88) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= 127.0F) && (current_y <= 145.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 80135B98
sb32 mnBattleCheckTokenPickup(GObj* cursor_gobj, s32 cursor_port_id, s32 port_id)
{
	f32 current_x, current_y, token_x, token_y;
	s32 range_check;
	SObj* cursor_sobj = SObjGetStruct(cursor_gobj);
	SObj* token_sobj = SObjGetStruct(gMnBattlePanels[port_id].token);

	current_x = cursor_sobj->pos.x + 25.0F;
	token_x = token_sobj->pos.x;

	range_check = (token_x <= current_x) && (current_x <= token_x + 26.0F) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;
		token_y = token_sobj->pos.y;

		range_check = (token_y <= current_y) && (current_y <= token_y + 24.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 80135C84
void mnHandlePlayerTypeButtonPress(s32 port_id)
{
	GObj* cursor_gobj;

	switch (gMnBattlePanels[port_id].player_type)
	{
	case mnPanelTypeHuman:
		if (gMnBattlePanels[port_id].held_port_id != -1)
		{
			gMnBattlePanels[gMnBattlePanels[port_id].held_port_id].holder_port_id = 4;
			gMnBattlePanels[gMnBattlePanels[port_id].held_port_id].is_selected = TRUE;
			gMnBattlePanels[gMnBattlePanels[port_id].held_port_id].unk_0x88 = TRUE;

			mnBattleReorderCursorsOnPlacement(port_id, gMnBattlePanels[port_id].held_port_id);
			mnReplaceFighterNameWithHandicapCPULevel(gMnBattlePanels[port_id].held_port_id);
			mnBattleCreateWhiteSquare(gMnBattlePanels[port_id].held_port_id);
		}

		gMnBattlePanels[port_id].is_selected = FALSE;
		gMnBattlePanels[port_id].char_id = Ft_Kind_Null;
		gMnBattlePanels[port_id].unk_0x88 = FALSE;
		gMnBattlePanels[port_id].holder_port_id = port_id;
		gMnBattlePanels[port_id].held_port_id = port_id;

		mnBattleReorderCursorsOnPickup(port_id, port_id);

		gMnBattlePanels[port_id].unk_0xA0 = FALSE;

		if (gMnBattlePanels[port_id].type != NULL)
		{
			omEjectGObjCommon(gMnBattlePanels[port_id].type);
			mnBattleCreateTypeImage(port_id);
		}

		if (gMnBattleIsTeamBattle == 0)
		{
			mnUpdatePanel(gMnBattlePanels[port_id].panel, port_id, gMnBattlePanels[port_id].player_type);
			return;
		}

		mnUpdatePanel(gMnBattlePanels[port_id].panel,
					  gMnBattlePanels[port_id].team == 2 ? 3 : gMnBattlePanels[port_id].team,
					  gMnBattlePanels[port_id].player_type);
		return;
	case mnPanelTypeCPU:
		if (gMnBattlePanels[port_id].held_port_id != -1)
		{
			gMnBattlePanels[gMnBattlePanels[port_id].held_port_id].holder_port_id = 4;
			gMnBattlePanels[gMnBattlePanels[port_id].held_port_id].is_selected = TRUE;
			gMnBattlePanels[gMnBattlePanels[port_id].held_port_id].unk_0x88 = TRUE;

			mnBattleReorderCursorsOnPlacement(port_id, gMnBattlePanels[port_id].held_port_id);
			mnReplaceFighterNameWithHandicapCPULevel(gMnBattlePanels[port_id].held_port_id);
			mnBattleCreateWhiteSquare(gMnBattlePanels[port_id].held_port_id);
		}

		gMnBattlePanels[port_id].is_selected = TRUE;
		gMnBattlePanels[port_id].holder_port_id = 4;
		gMnBattlePanels[port_id].held_port_id = -1;

		mnBattleReorderCursorsOnPlacement(4U, port_id);

		gMnBattlePanels[port_id].unk_0x88 = TRUE;

		if (gMnBattlePanels[port_id].char_id == Ft_Kind_Null)
			gMnBattlePanels[port_id].char_id = mnSelectRandomFighter(gMnBattlePanels[port_id].token);

		gMnBattlePanels[port_id].unk_0xA0 = FALSE;
		if (gMnBattlePanels[port_id].type != NULL)
		{
			omEjectGObjCommon(gMnBattlePanels[port_id].type);
			mnBattleCreateTypeImage(port_id);
		}

		if (gMnBattleIsTeamBattle == 0)
		{
			mnUpdatePanel(gMnBattlePanels[port_id].panel, port_id, gMnBattlePanels[port_id].player_type);
			return;
		}

		mnUpdatePanel(gMnBattlePanels[port_id].panel,
					  gMnBattlePanels[port_id].team == 2 ? 3 : gMnBattlePanels[port_id].team,
					  gMnBattlePanels[port_id].player_type);
		return;
	case mnPanelTypeNA:
		if (gMnBattlePanels[port_id].holder_port_id != 4)
		{
			gMnBattlePanels[gMnBattlePanels[port_id].holder_port_id].held_port_id = -1;
			gMnBattlePanels[gMnBattlePanels[port_id].holder_port_id].is_selected = TRUE;
			gMnBattlePanels[gMnBattlePanels[port_id].holder_port_id].cursor_state = mnCursorStateNotHoldingToken;

			cursor_gobj = gMnBattlePanels[gMnBattlePanels[port_id].holder_port_id].cursor;
			if (cursor_gobj != NULL)
			{
				mnBattleRedrawCursor(cursor_gobj, gMnBattlePanels[port_id].holder_port_id,
									 gMnBattlePanels[gMnBattlePanels[port_id].holder_port_id].cursor_state);
			}
		}

		if (gMnBattlePanels[port_id].held_port_id != -1)
		{
			gMnBattlePanels[gMnBattlePanels[port_id].held_port_id].holder_port_id = 4;
			gMnBattlePanels[gMnBattlePanels[port_id].held_port_id].is_selected = TRUE;
			gMnBattlePanels[gMnBattlePanels[port_id].held_port_id].unk_0x88 = TRUE;
			mnBattleReorderCursorsOnPlacement(port_id, gMnBattlePanels[port_id].held_port_id);
			mnReplaceFighterNameWithHandicapCPULevel(gMnBattlePanels[port_id].held_port_id);
			mnBattleCreateWhiteSquare(gMnBattlePanels[port_id].held_port_id);
		}

		gMnBattlePanels[port_id].is_selected = FALSE;
		gMnBattlePanels[port_id].held_port_id = -1;
		gMnBattlePanels[port_id].char_id = Ft_Kind_Null;
		gMnBattlePanels[port_id].unk_0x88 = FALSE;
		gMnBattlePanels[port_id].unk_0xA0 = FALSE;

		if (gMnBattleControllerOrderArray[port_id] != -1)
			gMnBattlePanels[port_id].holder_port_id = port_id;
		return;
	}
}

// 80136038
void mnSyncTokenDisplay(GObj* token_gobj, s32 port_id)
{
	s32 token_ids[4] = dMnBattleTokenIndexes;

	if ((gMnBattlePanels[port_id].cursor_state == mnCursorStatePointer)
		&& (gMnBattlePanels[port_id].is_selected == FALSE))
	{
		token_gobj->flags = 1;
	}
	else
		token_gobj->flags = 0;

	switch (gMnBattlePanels[port_id].player_type)
	{
	case mnPanelTypeHuman:
		gMnBattlePanels[port_id].is_selected = FALSE;
		mnBattleRedrawToken(token_gobj, token_ids[port_id]);
		break;
	case mnPanelTypeCPU:
		mnBattleRedrawToken(token_gobj, 4);
		gMnBattlePanels[port_id].is_selected = TRUE;
		break;
	case mnPanelTypeNA:
		if (FALSE)
			; // grr!

		token_gobj->flags = 1;
		break;
	}
	return;
}

// 80136128
void mnBattleSyncFighterDisplay(s32 port_id)
{
	GObj* player_gobj;
	s32 var_v0 = 0;

	player_gobj = gMnBattlePanels[port_id].player;

	if (player_gobj != NULL)
	{
		if (gMnBattlePanels[port_id].player_type == mnPanelTypeNA)
		{
			player_gobj->flags = 1;
			var_v0 = 1;
		}
		else if ((gMnBattlePanels[port_id].char_id == Ft_Kind_Null) && (gMnBattlePanels[port_id].is_selected == 0))
		{
			player_gobj->flags = 1;
			var_v0 = 1;
		}
	}
	if (var_v0 == 0)
	{
		gMnBattlePanels[port_id].shade = mnBattleGetShade(port_id);
		mnBattleSpawnFighter(gMnBattlePanels[port_id].player, port_id, gMnBattlePanels[port_id].char_id,
							 mnBattleGetAvailableCostume(gMnBattlePanels[port_id].char_id, port_id));
		gMnBattlePanels[port_id].selected_animation_started = FALSE;
	}
}

// 801361F8
void mnUpdateCursor(GObj* cursor_gobj, s32 port_id)
{
	if (cursor_gobj != NULL)
	{
		if ((SObjGetStruct(cursor_gobj)->pos.y > 122.0F) || (SObjGetStruct(cursor_gobj)->pos.y < 36.0F))
		{
			if (gMnBattlePanels[port_id].cursor_state != mnCursorStatePointer)
			{
				mnBattleRedrawCursor(cursor_gobj, port_id, mnCursorStatePointer);
				gMnBattlePanels[port_id].cursor_state = mnCursorStatePointer;
			}
		}
		else
		{
			if ((gMnBattlePanels[port_id].is_selected == 1) || (gMnBattlePanels[port_id].player_type == 2))
			{
				mnBattleRedrawCursor(cursor_gobj, port_id, mnCursorStateNotHoldingToken);
				gMnBattlePanels[port_id].cursor_state = mnCursorStateNotHoldingToken;
			}
			else if (gMnBattlePanels[port_id].cursor_state != mnCursorStateHoldingToken)
			{
				mnBattleRedrawCursor(cursor_gobj, port_id, mnCursorStateHoldingToken);
				gMnBattlePanels[port_id].cursor_state = mnCursorStateHoldingToken;
			}
		}
	}
}

// 80136300
void mnBattleSyncNameAndLogo(s32 port_id)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[port_id];

	if ((panel_info->player_type == mnPanelTypeNA)
		|| ((panel_info->char_id == Ft_Kind_Null) && (panel_info->is_selected == FALSE)))
	{
		panel_info->name_logo->flags = 1;
	}
	else
	{
		panel_info->name_logo->flags = 0;
		mnBattleSetNameAndLogo(panel_info->name_logo, port_id, panel_info->char_id);
	}
}

// 80136388
void mnBattleRemoveWhiteSquare(s32 port_id)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[port_id];

	if (panel_info->white_square != NULL)
	{
		omEjectGObjCommon(panel_info->white_square);
		panel_info->white_square = NULL;
	}
}

// 801363DC
void mnBattleFlashWhiteSquare(GObj* white_square_gobj)
{
	s32 duration = 16;
	s32 frames_to_wait = 1;

	while (TRUE)
	{
		duration--, frames_to_wait--;

		if (duration == 0)
			mnBattleRemoveWhiteSquare(white_square_gobj->user_data.p);

		if (frames_to_wait == 0)
		{
			frames_to_wait = 1;
			white_square_gobj->flags = (white_square_gobj->flags == 1) ? 0 : 1;
		}

		stop_current_process(1);
	}
}

// 8013647C
void mnBattleCreateWhiteSquare(s32 port_id)
{
	GObj* white_square_gobj;
	SObj* white_square_sobj;
	s32 portrait_id = mnBattleGetPortraitId(gMnBattlePanels[port_id].char_id);

	mnBattleRemoveWhiteSquare(port_id);

	white_square_gobj = omMakeGObjCommon(0U, NULL, 0x1EU, 0x80000000U);
	gMnBattlePanels[port_id].white_square = white_square_gobj;
	omAddGObjRenderProc(white_square_gobj, func_ovl0_800CCF00, 0x25U, 0x80000000U, -1);
	white_square_gobj->user_data.p = port_id;
	omAddGObjCommonProc(white_square_gobj, mnBattleFlashWhiteSquare, 0, 1);

	white_square_sobj
		= gcAppendSObjWithSprite(white_square_gobj, GetAddressFromOffset(gFile013, &FILE_013_WHITE_SQUARE));
	white_square_sobj->pos.x = (f32)(((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 45) + 26);
	white_square_sobj->pos.y = (f32)(((portrait_id >= 6 ? 1 : 0) * 43) + 37);
}

// 801365D0
sb32 mnCheckAndHandlePlayerTypeButtonPress(GObj* cursor_gobj, s32 port_id, u32 panel_id)
{
	s32 player_type;

	if (mnCheckPlayerTypeButtonPress(cursor_gobj, panel_id) != FALSE)
	{
		if (gMnBattleControllerOrderArray[panel_id] == -1)
		{
			player_type = gMnBattlePanels[panel_id].player_type + 1;

			gMnBattlePanels[panel_id].player_type = (player_type >= 3) ? mnPanelTypeCPU : player_type;
		}
		else
		{
			player_type = gMnBattlePanels[panel_id].player_type + 1;

			gMnBattlePanels[panel_id].player_type = (player_type >= 3) ? mnPanelTypeHuman : player_type;
		}

		mnHandlePlayerTypeButtonPress(panel_id);
		mnRecreateTypeButton(gMnBattlePanels[panel_id].type_button, panel_id, gMnBattlePanels[panel_id].player_type);
		mnSyncTokenDisplay(gMnBattlePanels[panel_id].token, panel_id);
		mnUpdateCursor(gMnBattlePanels[panel_id].cursor, panel_id);
		mnBattleSyncFighterDisplay(panel_id);
		mnBattleSyncNameAndLogo(panel_id);

		switch (gMnBattlePanels[panel_id].player_type)
		{
		case mnPanelTypeHuman:
			gMnBattlePanels[panel_id].holder_port_id = panel_id;
			func_800269C0_275C0(0xA7U);
			break;
		case mnPanelTypeCPU:
			gMnBattlePanels[panel_id].holder_port_id = 4;
			mnBattleAnnounceFighter(port_id, panel_id);
			mnReplaceFighterNameWithHandicapCPULevel(panel_id);
			mnBattleCreateWhiteSquare(panel_id);
			break;
		case mnPanelTypeNA: func_800269C0_275C0(0xA7U); break;
		}

		func_800269C0_275C0(0x9DU);
		return TRUE;
	}
	return FALSE;
}

// 8013676C
sb32 mnCheckAndHandleAnyPlayerTypeButtonPress(GObj* cursor_gobj, s32 port_id)
{
	sb32 was_pressed = FALSE;

	if (mnCheckAndHandlePlayerTypeButtonPress(cursor_gobj, port_id, 0) != FALSE)
		was_pressed = TRUE;
	if (mnCheckAndHandlePlayerTypeButtonPress(cursor_gobj, port_id, 1) != FALSE)
		was_pressed = TRUE;
	if (mnCheckAndHandlePlayerTypeButtonPress(cursor_gobj, port_id, 2) != FALSE)
		was_pressed = TRUE;
	if (mnCheckAndHandlePlayerTypeButtonPress(cursor_gobj, port_id, 3) != FALSE)
		was_pressed = TRUE;

	return was_pressed;
}

// 801367F0
void mnBattleAnnounceFighter(s32 port_id, s32 panel_id)
{
	u16 announcer_fgms[12] = dMnBattleAnnouncerNames;

	func_80026738_27338(gMnBattlePanels[port_id].p_sfx);

	func_800269C0_275C0(0x79U);

	gMnBattlePanels[port_id].p_sfx = func_800269C0_275C0(announcer_fgms[gMnBattlePanels[panel_id].char_id]);

	if (gMnBattlePanels[port_id].p_sfx != 0)
		gMnBattlePanels[port_id].sfx_id = gMnBattlePanels[port_id].p_sfx->sfx_id;
}

// 801368C4
void mnHideFighterName(s32 port_id)
{
	SObj* name_logo_sobj;
	SObj* name_sobj;

	name_logo_sobj = SObjGetStruct(gMnBattlePanels[port_id].name_logo);

	if (name_logo_sobj != NULL)
	{
		name_sobj = SObjGetNext(name_logo_sobj);

		if (name_sobj != NULL)
			name_sobj->sprite.attr |= SP_HIDDEN;
	}
}

// 80136910
void mnBattleRemoveHandicapCPULevel(s32 port_id)
{
	if (gMnBattlePanels[port_id].handicap_cpu_level != NULL)
		omEjectGObjCommon(gMnBattlePanels[port_id].handicap_cpu_level);
	if (gMnBattlePanels[port_id].arrows != NULL)
		omEjectGObjCommon(gMnBattlePanels[port_id].arrows);
	if (gMnBattlePanels[port_id].handicap_cpu_level_value != NULL)
		omEjectGObjCommon(gMnBattlePanels[port_id].handicap_cpu_level_value);

	gMnBattlePanels[port_id].handicap_cpu_level = NULL;
	gMnBattlePanels[port_id].arrows = NULL;
	gMnBattlePanels[port_id].handicap_cpu_level_value = NULL;
}

// 80136998
SObj* mnBattleGetArrowSObj(GObj* arrow_gobj, s32 direction)
{
	SObj* second_arrow_sobj;
	SObj* first_arrow_sobj;

	first_arrow_sobj = SObjGetStruct(arrow_gobj);
	if (first_arrow_sobj != NULL)
	{
		if (direction == first_arrow_sobj->user_data.s)
			return first_arrow_sobj;

		second_arrow_sobj = SObjGetNext(first_arrow_sobj);
		if ((second_arrow_sobj != NULL) && (direction == second_arrow_sobj->user_data.s))
			return second_arrow_sobj;
	}
	return NULL;
}

// 801369E4
void mnBattleSyncAndBlinkArrows(GObj* arrow_gobj)
{
	SObj* arrow_sobj;
	s32 port_id = arrow_gobj->user_data.s;
	s32 blink_duration = 10;
	s32 value;

	while (TRUE)
	{
		blink_duration--;

		if (blink_duration == 0)
		{
			blink_duration = 10;
			arrow_gobj->flags = arrow_gobj->flags == GOBJ_FLAG_NORENDER ? GOBJ_FLAG_NONE : GOBJ_FLAG_NORENDER;
		}

		value = (gMnBattlePanels[port_id].player_type == 0) ? gMnBattlePanels[port_id].handicap
															: gMnBattlePanels[port_id].cpu_level;

		if (value == 1)
		{
			arrow_sobj = mnBattleGetArrowSObj(arrow_gobj, 0);

			if (arrow_sobj != NULL)
				omEjectSObj(arrow_sobj);
		}
		else if (mnBattleGetArrowSObj(arrow_gobj, 0) == NULL)
		{
			arrow_sobj
				= gcAppendSObjWithSprite(arrow_gobj, GetAddressFromOffset(gFile011, &FILE_011_ARROW_L_IMAGE_OFFSET));
			arrow_sobj->pos.x = (port_id * 0x45) + 0x19;
			arrow_sobj->pos.y = 201.0F;
			arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
			arrow_sobj->sprite.attr |= SP_TRANSPARENT;
			arrow_sobj->user_data.s = 0;
		}

		if (value == 9)
		{
			arrow_sobj = mnBattleGetArrowSObj(arrow_gobj, 1);

			if (arrow_sobj != NULL)
				omEjectSObj(arrow_sobj);
		}
		else if (mnBattleGetArrowSObj(arrow_gobj, 1) == NULL)
		{
			arrow_sobj
				= gcAppendSObjWithSprite(arrow_gobj, GetAddressFromOffset(gFile011, &FILE_011_ARROW_R_IMAGE_OFFSET));
			arrow_sobj->pos.x = (port_id * 0x45) + 0x4F;
			arrow_sobj->pos.y = 201.0F;
			arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
			arrow_sobj->sprite.attr |= SP_TRANSPARENT;
			arrow_sobj->user_data.s = 1;
		}
		stop_current_process(1);
	}
}

// 80136C18
void mnBattleSyncHandicapCPULevelDisplay(GObj* handicap_cpu_level_gobj)
{
	s32 port_id = handicap_cpu_level_gobj->user_data.p;

	if (gMnBattlePanels[port_id].unk_0x88 == 0)
		mnBattleRemoveHandicapCPULevel(port_id);
	else if (SObjGetStruct(handicap_cpu_level_gobj)->user_data.s != gMnBattlePanels[port_id].player_type)
		mnBattleDrawHandicapCPULevel(port_id);
}

// 80136C8C
void mnBattleDrawHandicapCPULevel(s32 port_id)
{
	GObj* handicap_cpu_level_gobj;
	SObj* handicap_cpu_level_sobj;

	if (gMnBattlePanels[port_id].handicap_cpu_level != NULL)
	{
		omEjectGObjCommon(gMnBattlePanels[port_id].handicap_cpu_level);
		gMnBattlePanels[port_id].handicap_cpu_level = NULL;
	}

	handicap_cpu_level_gobj = omMakeGObjCommon(0U, NULL, 0x1CU, 0x80000000U);
	gMnBattlePanels[port_id].handicap_cpu_level = handicap_cpu_level_gobj;
	omAddGObjRenderProc(handicap_cpu_level_gobj, func_ovl0_800CCF00, 0x23U, 0x80000000U, -1);
	handicap_cpu_level_gobj->user_data.p = port_id;
	omAddGObjCommonProc(handicap_cpu_level_gobj, mnBattleSyncHandicapCPULevelDisplay, 1, 1);

	if (gMnBattlePanels[port_id].player_type == 0)
	{
		handicap_cpu_level_sobj = gcAppendSObjWithSprite(
			handicap_cpu_level_gobj, GetAddressFromOffset(gMnBattleFilesArray[0], &FILE_011_HANDICAP_IMAGE_OFFSET));
		handicap_cpu_level_sobj->pos.x = (port_id * 0x45) + 0x23;
		handicap_cpu_level_sobj->user_data.p = NULL;
	}
	else
	{
		handicap_cpu_level_sobj = gcAppendSObjWithSprite(
			handicap_cpu_level_gobj, GetAddressFromOffset(gMnBattleFilesArray[0], &FILE_011_CPU_LEVEL_IMAGE_OFFSET));
		handicap_cpu_level_sobj->pos.x = (port_id * 0x45) + 0x22;
		handicap_cpu_level_sobj->user_data.p = 1;
	}

	handicap_cpu_level_sobj->sprite.red = 0xC2;
	handicap_cpu_level_sobj->sprite.green = 0xBD;
	handicap_cpu_level_sobj->sprite.blue = 0xAD;
	handicap_cpu_level_sobj->sprite.attr &= ~SP_FASTCOPY;
	handicap_cpu_level_sobj->sprite.attr |= SP_TRANSPARENT;
	handicap_cpu_level_sobj->pos.y = 201.0F;

	handicap_cpu_level_sobj = gcAppendSObjWithSprite(
		handicap_cpu_level_gobj, GetAddressFromOffset(gMnBattleFilesArray[1], &FILE_000_COLON_IMAGE_OFFSET));
	handicap_cpu_level_sobj->sprite.red = 0xFF;
	handicap_cpu_level_sobj->sprite.green = 0xFF;
	handicap_cpu_level_sobj->pos.x = (port_id * 0x45) + 0x3D;
	handicap_cpu_level_sobj->sprite.blue = 0xFF;
	handicap_cpu_level_sobj->sprite.attr &= ~SP_FASTCOPY;
	handicap_cpu_level_sobj->sprite.attr |= SP_TRANSPARENT;
	handicap_cpu_level_sobj->pos.y = 202.0F;
}

// 80136E90
void mnDrawHandicapCPULevelValue(s32 port_id)
{
	intptr_t offsets[10] = dMnBattleHandicapCPULevelNumberOffsets;
	GObj* handicap_cpu_level_gobj;
	SObj* handicap_cpu_level_sobj;
	u32 value = (gMnBattlePanels[port_id].player_type == 0) ? gMnBattlePanels[port_id].handicap
															: gMnBattlePanels[port_id].cpu_level;

	if (gMnBattlePanels[port_id].handicap_cpu_level_value != NULL)
	{
		omEjectGObjCommon(gMnBattlePanels[port_id].handicap_cpu_level_value);
		gMnBattlePanels[port_id].handicap_cpu_level_value = NULL;
	}

	handicap_cpu_level_gobj = omMakeGObjCommon(0U, NULL, 0x1CU, 0x80000000U);
	gMnBattlePanels[port_id].handicap_cpu_level_value = handicap_cpu_level_gobj;
	omAddGObjRenderProc(handicap_cpu_level_gobj, func_ovl0_800CCF00, 0x23U, 0x80000000U, -1);

	handicap_cpu_level_sobj
		= gcAppendSObjWithSprite(handicap_cpu_level_gobj, GetAddressFromOffset(gFile000, offsets[value]));
	handicap_cpu_level_sobj->pos.x = (port_id * 0x45) + 0x43;
	handicap_cpu_level_sobj->sprite.red = 0xFF;
	handicap_cpu_level_sobj->sprite.green = 0xFF;
	handicap_cpu_level_sobj->sprite.blue = 0xFF;
	handicap_cpu_level_sobj->sprite.attr &= ~SP_FASTCOPY;
	handicap_cpu_level_sobj->sprite.attr |= SP_TRANSPARENT;
	handicap_cpu_level_sobj->pos.y = 200.0F;
}

// 80137004
void mnReplaceFighterNameWithHandicapCPULevel(s32 port_id)
{
	GObj* arrow_gobj;

	mnHideFighterName(port_id);
	mnBattleRemoveHandicapCPULevel(port_id);
	mnBattleDrawHandicapCPULevel(port_id);

	if ((mnIsHandicapAuto() == FALSE) || (gMnBattlePanels[port_id].player_type == 1))
	{
		arrow_gobj = omMakeGObjCommon(0U, NULL, 0x1CU, 0x80000000U);
		gMnBattlePanels[port_id].arrows = arrow_gobj;
		omAddGObjRenderProc(arrow_gobj, func_ovl0_800CCF00, 0x23U, 0x80000000U, -1);
		arrow_gobj->user_data.s = port_id;
		omAddGObjCommonProc(arrow_gobj, mnBattleSyncAndBlinkArrows, 0, 1);
	}
	mnDrawHandicapCPULevelValue(port_id);
}

// 801370F8
sb32 mnIsHandicapOn() { return (D_800A4D08.handicap_setting == 1) ? TRUE : FALSE; }

// 80137120
sb32 mnIsHandicapAuto() { return (D_800A4D08.handicap_setting == 2) ? TRUE : FALSE; }

// 80137148
sb32 mnIsHandicap()
{
	if ((mnIsHandicapOn() != FALSE) || (mnIsHandicapAuto() != FALSE))
		return TRUE;
	else
		return FALSE;
}

// 8013718C
sb32 mnBattleSelectChar(GObj* cursor_gobj, s32 port_id, s32 arg2, s32 select_button)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[port_id];

	if (panel_info->cursor_state != mnCursorStateHoldingToken)
		return FALSE;

	if (gMnBattlePanels[panel_info->held_port_id].char_id != Ft_Kind_Null)
	{
		mnBattleSelectCharWithToken(port_id, select_button);
		panel_info->min_frames_elapsed_until_recall = gMnBattleFramesElapsed + 0x1E;
		return TRUE;
	}

	func_800269C0_275C0(0xA5U);
	return FALSE;
}

// 80137234
void mnBattleReorderCursorsOnPickup(s32 port_id, s32 token_id)
{
	s32 diplay_orders[4] = dMnBattleTokenPickupDisplayOrders;
	s32 i, order_id;

	omMoveGObjDL(gMnBattlePanels[port_id].cursor, 0x20U, diplay_orders[3]);
	omMoveGObjDL(gMnBattlePanels[token_id].token, 0x20U, diplay_orders[3] + 1);

	for (i = 0, order_id = 3; i < 4; i++, order_id--)
	{
		if (i != port_id)
		{
			if (gMnBattlePanels[i].cursor != NULL)
				omMoveGObjDL(gMnBattlePanels[i].cursor, 0x20U, diplay_orders[order_id]);
			if (gMnBattlePanels[i].held_port_id != -1U)
			{
				omMoveGObjDL(gMnBattlePanels[gMnBattlePanels[i].held_port_id].token, 0x20U,
							 diplay_orders[order_id] + 1);
			}
		}
	}
}

// 80137390
s32 mnBattleReorderCursorsOnPlacement(s32 port_id, s32 held_token_id)
{
	s32 held_orders[4] = dMnBattleTokenPlaceHeldDisplayOrders,
		unheld_orders[4] = dMnBattleTokenPlaceUnheldDisplayOrders;
	s32* order;
	s32 unused;
	sb32 token_held[4];
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if (gMnBattlePanels[i].held_port_id == -1)
			token_held[i] = FALSE;
		else
			token_held[i] = TRUE;
	}

	for (i = 0, order = &unheld_orders[3]; (s32)i < 4; i++)
	{
		if ((i != port_id) && (token_held[i] != FALSE))
		{
			if (gMnBattlePanels[i].cursor != NULL)
				omMoveGObjDL(gMnBattlePanels[i].cursor, 0x20, *order);
			omMoveGObjDL(gMnBattlePanels[gMnBattlePanels[i].held_port_id].token, 0x20, *order + 1);
			order--;
		}
	}

	if (port_id != 4)
		omMoveGObjDL(gMnBattlePanels[port_id].cursor, 0x20, *order);

	omMoveGObjDL(gMnBattlePanels[held_token_id].token, 0x21, *order + 1);

	order--;
	for (i = 0; i < 4; i++)
	{
		if ((i != port_id) && (token_held[i] == FALSE))
		{
			if (gMnBattlePanels[i].cursor != NULL)
				omMoveGObjDL(gMnBattlePanels[i].cursor, 0x20, *order);
			order--;
		}
	}
}

// 801375A8
void mnBattleSetCursorCoordinatesFromToken(s32 port_id)
{
	mnCharPanelBattle* panel_info;
	mnCharPanelBattle* held_token_panel_info;

	panel_info = &gMnBattlePanels[port_id];
	held_token_panel_info = &gMnBattlePanels[panel_info->held_port_id];

	panel_info->cursor_pickup_x = SObjGetStruct(held_token_panel_info->token)->pos.x - 11.0F;
	panel_info->cursor_pickup_y = SObjGetStruct(held_token_panel_info->token)->pos.y - -14.0F;
}

// 8013760C
void mnBattleHandleCursorPickup(s32 port_id, s32 held_port_id)
{
	mnCharPanelBattle* panel_info;
	mnCharPanelBattle* held_token_panel_info;

	held_token_panel_info = &gMnBattlePanels[held_port_id];
	held_token_panel_info->holder_port_id = port_id;
	held_token_panel_info->is_selected = FALSE;

	panel_info = &gMnBattlePanels[port_id];
	panel_info->cursor_state = mnCursorStateHoldingToken;
	panel_info->held_port_id = held_port_id;

	held_token_panel_info->unk_0x88 = FALSE;

	mnBattleSyncFighterDisplay(held_port_id);
	mnBattleReorderCursorsOnPickup(port_id, held_port_id);
	mnBattleSetCursorCoordinatesFromToken(port_id);
	mnBattleRedrawCursor(panel_info->cursor, port_id, panel_info->cursor_state);

	panel_info->unk_0xA0 = TRUE;

	func_800269C0_275C0(0x7FU);

	mnBattleRemoveHandicapCPULevel(held_port_id);
	mnBattleRemoveWhiteSquare(held_port_id);
	mnBattleSyncNameAndLogo(held_port_id);
}

// 801376D0
sb32 mnBattleCheckAndHandleTokenPickup(GObj* cursor_gobj, s32 port_id)
{
	s32 i;

	if ((gMnBattleFramesElapsed < gMnBattlePanels[port_id].min_frames_elapsed_until_recall)
		|| (gMnBattlePanels[port_id].is_recalling != FALSE))
	{
		return FALSE;
	}
	else if (gMnBattlePanels[port_id].cursor_state != mnCursorStateNotHoldingToken)
		return FALSE;

	for (i = 3; i >= 0; i--)
	{
		if (port_id == i)
		{
			if ((gMnBattlePanels[i].holder_port_id == 4) && (gMnBattlePanels[i].player_type != 2)
				&& (mnBattleCheckTokenPickup(cursor_gobj, port_id, i) != 0))
			{
				mnBattleHandleCursorPickup(port_id, i);

				return TRUE;
			}
		}
		else if ((gMnBattlePanels[i].holder_port_id == 4) && (gMnBattlePanels[i].player_type == 1)
				 && (mnBattleCheckTokenPickup(cursor_gobj, port_id, i) != 0))
		{
			mnBattleHandleCursorPickup(port_id, i);

			return TRUE;
		}
	}

	return FALSE;
}

// 8013782C
s32 mnBattleGetFtKindFromTokenPosition(s32 port_id)
{
	SObj* token_sobj = SObjGetStruct(gMnBattlePanels[port_id].token);
	s32 current_y = (s32)token_sobj->pos.x + 13;
	s32 current_x = (s32)token_sobj->pos.y + 12;
	s32 char_id;
	sb32 is_within_bounds;

	is_within_bounds = (current_x >= 36) && (current_x < 79) ? TRUE : FALSE;

	if (is_within_bounds != FALSE)
	{
		is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

		if (is_within_bounds != FALSE)
		{
			char_id = mnBattleGetFtKind((s32)(current_y - 25) / 45);

			if ((mnBattleCheckFighterIsXBoxed(char_id) != FALSE) || (mnBattleGetIsLocked(char_id) != FALSE))
				return Ft_Kind_Null;

			return char_id;
		}
	}

	is_within_bounds = (current_x >= 79) && (current_x < 122) ? TRUE : FALSE;

	if (is_within_bounds != FALSE)
	{
		is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

		if (is_within_bounds != FALSE)
		{
			char_id = mnBattleGetFtKind(((s32)(current_y - 25) / 45) + 6);

			if ((mnBattleCheckFighterIsXBoxed(char_id) != FALSE) || (mnBattleGetIsLocked(char_id) != FALSE))
				return Ft_Kind_Null;

			return char_id;
		}
	}
	return Ft_Kind_Null;
}

// 801379B8
void mnBattleAutoPositionCursor(GObj* cursor_gobj, s32 port_id)
{
	gmController* controller;
	Vec2i coords[3] = dMnBattleCursorTypePositions2;
	f32 delta;
	sb32 is_within_bounds;

	if (gMnBattlePanels[port_id].unk_0xA0 != FALSE)
	{
		delta
			= (gMnBattlePanels[port_id].cursor_pickup_x - SObjGetStruct(gMnBattlePanels[port_id].cursor)->pos.x) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(gMnBattlePanels[port_id].cursor)->pos.x = gMnBattlePanels[port_id].cursor_pickup_x;
		else
			SObjGetStruct(gMnBattlePanels[port_id].cursor)->pos.x += delta;

		delta
			= (gMnBattlePanels[port_id].cursor_pickup_y - SObjGetStruct(gMnBattlePanels[port_id].cursor)->pos.y) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(gMnBattlePanels[port_id].cursor)->pos.y = gMnBattlePanels[port_id].cursor_pickup_y;
		else
			SObjGetStruct(gMnBattlePanels[port_id].cursor)->pos.y += delta;

		if ((SObjGetStruct(gMnBattlePanels[port_id].cursor)->pos.x == gMnBattlePanels[port_id].cursor_pickup_x)
			&& (SObjGetStruct(gMnBattlePanels[port_id].cursor)->pos.y == gMnBattlePanels[port_id].cursor_pickup_y))
		{
			gMnBattlePanels[port_id].unk_0xA0 = FALSE;
		}

		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x
			= (f32)((f32)coords[gMnBattlePanels[port_id].cursor_state].x + SObjGetStruct(cursor_gobj)->pos.x);
		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y
			= (f32)((f32)coords[gMnBattlePanels[port_id].cursor_state].y + SObjGetStruct(cursor_gobj)->pos.y);
	}
	else if (gMnBattlePanels[port_id].is_recalling == FALSE)
	{
		controller = &gPlayerControllers[port_id];

		is_within_bounds = (controller->stick_range.x < -8) || (controller->stick_range.x >= 9) ? TRUE : FALSE;

		if (is_within_bounds != 0)
		{
			delta = ((f32)controller->stick_range.x / 20.0F) + SObjGetStruct(cursor_gobj)->pos.x;

			is_within_bounds = (delta >= 0.0F) && (delta <= 280.0F) ? TRUE : FALSE;

			if (is_within_bounds != 0)
			{
				SObjGetStruct(cursor_gobj)->pos.x = delta;
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x
					= SObjGetStruct(cursor_gobj)->pos.x + coords[gMnBattlePanels[port_id].cursor_state].x;
			}
		}

		is_within_bounds = (controller->stick_range.y < -8) || (controller->stick_range.y >= 9) ? TRUE : FALSE;

		if (is_within_bounds != 0)
		{
			delta = ((f32)controller->stick_range.y / -20.0F) + SObjGetStruct(cursor_gobj)->pos.y;

			is_within_bounds = (delta >= 10.0F) && (delta <= 205.0F) ? TRUE : FALSE;

			if (is_within_bounds != 0)
			{
				SObjGetStruct(cursor_gobj)->pos.y = delta;
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y
					= SObjGetStruct(cursor_gobj)->pos.y + coords[gMnBattlePanels[port_id].cursor_state].y;
			}
		}
	}
}

// 80137D4C
void mnBattleSyncCursorDisplay(GObj* cursor_gobj, s32 port_id)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[port_id];
	s32 i;

	if ((SObjGetStruct(cursor_gobj)->pos.y > 124.0F) || (SObjGetStruct(cursor_gobj)->pos.y < 38.0F))
	{
		if (panel_info->cursor_state != mnCursorStatePointer)
		{
			mnBattleRedrawCursor(cursor_gobj, port_id, mnCursorStatePointer);
			panel_info->cursor_state = mnCursorStatePointer;
		}
	}
	else
	{
		if (panel_info->held_port_id == -1)
		{
			if (panel_info->cursor_state != mnCursorStateNotHoldingToken)
			{
				mnBattleRedrawCursor(cursor_gobj, port_id, mnCursorStateNotHoldingToken);
				panel_info->cursor_state = mnCursorStateNotHoldingToken;
			}
		}
		else
		{
			if (panel_info->cursor_state != mnCursorStateHoldingToken)
			{
				mnBattleRedrawCursor(cursor_gobj, port_id, mnCursorStateHoldingToken);
				panel_info->cursor_state = mnCursorStateHoldingToken;
			}
		}
	}

	if ((panel_info->cursor_state == mnCursorStatePointer) && (panel_info->is_selected != 0))
	{
		for (i = 0; i < 4; i++)
		{
			if ((gMnBattlePanels[i].is_selected == 1) && (mnBattleCheckTokenPickup(cursor_gobj, port_id, i) != 0))
			{
				mnBattleRedrawCursor(cursor_gobj, port_id, mnCursorStateNotHoldingToken);
				panel_info->cursor_state = mnCursorStateNotHoldingToken;
				return;
			}
		}
	}
}

// 80137EFC
void mnTryCostumeChange(s32 port_id, s32 select_button)
{
	u32 costume_id = ftCostume_GetIndexFFA(gMnBattlePanels[port_id].char_id, select_button);

	if (mnBattleIsCostumeInUse(gMnBattlePanels[port_id].char_id, port_id, costume_id) != FALSE)
	{
		func_800269C0_275C0(0xA5U);
		return;
	}

	gMnBattlePanels[port_id].costume_id = costume_id;
	gMnBattlePanels[port_id].shade = mnBattleGetShade(port_id);

	func_ovl2_800E9248(gMnBattlePanels[port_id].player, costume_id, gMnBattlePanels[port_id].shade);

	func_800269C0_275C0(0xA4U);
}

// 80137F9C
sb32 mnIsHumanWithCharacterSelected(s32 port_id)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[port_id];

	if ((panel_info->is_selected != FALSE) && (panel_info->held_port_id == -1)
		&& (panel_info->player_type == mnPanelTypeHuman))
	{
		return TRUE;
	}
	else
		return FALSE;
}

// 80137FF8
void mnRecallToken(s32 port_id)
{
	gMnBattlePanels[port_id].unk_0x88 = FALSE;
	gMnBattlePanels[port_id].is_selected = FALSE;
	gMnBattlePanels[port_id].is_recalling = TRUE;
	gMnBattlePanels[port_id].recall_frame_counter = 0;
	gMnBattlePanels[port_id].recall_start_x = SObjGetStruct(gMnBattlePanels[port_id].token)->pos.x;
	gMnBattlePanels[port_id].recall_start_y = SObjGetStruct(gMnBattlePanels[port_id].token)->pos.y;

	gMnBattlePanels[port_id].recall_end_x = SObjGetStruct(gMnBattlePanels[port_id].cursor)->pos.x + 20.0F;

	if (gMnBattlePanels[port_id].recall_end_x > 280.0F)
		gMnBattlePanels[port_id].recall_end_x = 280.0F;

	gMnBattlePanels[port_id].recall_end_y = SObjGetStruct(gMnBattlePanels[port_id].cursor)->pos.y + -15.0F;

	if (gMnBattlePanels[port_id].recall_end_y < 10.0F)
		gMnBattlePanels[port_id].recall_end_y = 10.0F;

	if (gMnBattlePanels[port_id].recall_end_y < gMnBattlePanels[port_id].recall_start_y)
		gMnBattlePanels[port_id].recall_mid_y = gMnBattlePanels[port_id].recall_end_y - 20.0F;
	else
		gMnBattlePanels[port_id].recall_mid_y = gMnBattlePanels[port_id].recall_start_y - 20.0F;
}

// 801380F4
void mnGoBackToVSMenu()
{
	gSceneData.scene_previous = gSceneData.scene_current;
	gSceneData.scene_current = 9;

	mnBattleSaveMatchInfo();
	mnBattleDestroyCursorAndTokenProcesses();
	func_80020A74();
	leoInitUnit_atten();
}

// 80138140
void mnExitIfBButtonHeld(s32 port_id)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[port_id];
	gmController* controller = &gPlayerControllers[port_id];

	if (panel_info->is_b_held != FALSE)
	{
		if ((panel_info->b_held_frame_count != 0))
		{
			panel_info->b_held_frame_count++;

			if ((panel_info->b_held_frame_count < 41))
			{
				if (controller->button_press & B_BUTTON)
				{
					if (panel_info->b_held_frame_count == 40)
						mnGoBackToVSMenu();
				}
				else
				{
					panel_info->is_b_held = FALSE;
					panel_info->b_held_frame_count = 0;
				}
			}
		}
	}
	else
	{
		if (controller->button_new & B_BUTTON)
			panel_info->is_b_held = TRUE;
		panel_info->b_held_frame_count = 1;
	}
}

// 80138218
s32 mnCheckBackButtonPress(GObj* cursor_gobj)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_y = cursor_sobj->pos.y + 3.0F;

	range_check = (current_y < 13.0F) || (current_y > 34.0F) ? TRUE : FALSE;
	if (range_check)
		return FALSE;

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= 244.0F) && (current_x <= 292.0F) ? TRUE : FALSE;
	if (range_check)
		return TRUE;

	return FALSE;
}

// 801382E0
void mnBattleHandleButtonPresses(GObj* cursor_gobj)
{
	gmController* controller;
	mnCharPanelBattle* panel_info;
	s32 foo, bar, baz;
	s32 port_id = cursor_gobj->user_data.s;

	mnBattleAutoPositionCursor(cursor_gobj, port_id);
	controller = &gPlayerControllers[port_id];

	if ((controller->button_new & A_BUTTON) && (mnCheckAndHandleAnyPlayerTypeButtonPress(cursor_gobj, port_id) == FALSE)
		&& (mnBattleSelectChar(cursor_gobj, port_id, gMnBattlePanels[port_id].held_port_id, 4) == FALSE)
		&& (mnBattleCheckAndHandleTokenPickup(cursor_gobj, port_id) == FALSE))
	{
		if (mnCheckPickerRightArrowPress(cursor_gobj) != FALSE)
		{
			if (gMnBattleRule == GMMATCH_GAMERULE_TIME)
			{
				gMnBattleTimerValue = mnBattleGetNextTimerValue(gMnBattleTimerValue);
				mnDrawTimerPicker(gMnBattleTimerValue);
			}
			else
			{
				if (gMnBattleStockValue + 1 >= 0x63)
					gMnBattleStockValue = 0;
				else
					gMnBattleStockValue = gMnBattleStockValue + 1;
				mnDrawStockPicker(gMnBattleStockValue);
			}
			func_800269C0_275C0(0xA4U);
		}
		else if (mnCheckPickerLeftArrowPress(cursor_gobj) != FALSE)
		{
			if (gMnBattleRule == GMMATCH_GAMERULE_TIME)
			{
				gMnBattleTimerValue = mnBattleGetPrevTimerValue(gMnBattleTimerValue);
				mnDrawTimerPicker(gMnBattleTimerValue);
			}
			else
			{
				if (gMnBattleStockValue - 1 < 0)
					gMnBattleStockValue = 0x62;
				else
					gMnBattleStockValue = gMnBattleStockValue - 1;
				mnDrawStockPicker(gMnBattleStockValue);
			}
			func_800269C0_275C0(0xA4U);
		}
		else if (mnCheckFFATeamBattleTogglePress(cursor_gobj) != FALSE)
			mnHandleFFATeamBattleTogglePress();
		else if (mnCheckBackButtonPress(cursor_gobj) != FALSE)
		{
			mnGoBackToVSMenu();
			func_800269C0_275C0(0xA4U);
		}
		else if (mnCheckAnyTeamButtonPress(cursor_gobj, port_id) == FALSE)
			mnCheckAnyCPUHandicapArrowPress(cursor_gobj, port_id);
	}

	panel_info = &gMnBattlePanels[port_id];

	if (gMnBattleIsTeamBattle == FALSE)
	{
		if ((controller->button_new & U_CBUTTONS)
			&& (mnBattleSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 0) == FALSE)
			&& (panel_info->unk_0x88 != FALSE))
		{
			mnTryCostumeChange(port_id, 0);
		}
		if ((controller->button_new & R_CBUTTONS)
			&& (mnBattleSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 1) == FALSE)
			&& (panel_info->unk_0x88 != FALSE))
		{
			mnTryCostumeChange(port_id, 1);
		}
		if ((controller->button_new & D_CBUTTONS)
			&& (mnBattleSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 2) == FALSE)
			&& (panel_info->unk_0x88 != FALSE))
		{
			mnTryCostumeChange(port_id, 2);
		}
		if ((controller->button_new & L_CBUTTONS)
			&& (mnBattleSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 3) == FALSE)
			&& (panel_info->unk_0x88 != FALSE))
		{
			mnTryCostumeChange(port_id, 3);
		}
	}
	else if (controller->button_new & (U_CBUTTONS | R_CBUTTONS | D_CBUTTONS | L_CBUTTONS))
		mnBattleSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 4);
	if ((controller->button_new & B_BUTTON) && (mnIsHumanWithCharacterSelected(port_id) != FALSE))
		mnRecallToken(port_id);
	if (panel_info->is_recalling == FALSE)
		mnExitIfBButtonHeld(port_id);
	if (panel_info->is_recalling == FALSE)
		mnBattleSyncCursorDisplay(cursor_gobj, port_id);
}

// 801386E4
void mnBattleRedrawToken(GObj* token_gobj, s32 token_index)
{
	SObj* token_sobj;
	f32 current_x, current_y;
	intptr_t token_offsets[5] = dMnBattleTokenOffsets;

	current_x = SObjGetStruct(token_gobj)->pos.x;
	current_y = SObjGetStruct(token_gobj)->pos.y;

	func_8000B760(token_gobj);

	token_sobj = gcAppendSObjWithSprite(token_gobj, GetAddressFromOffset(gFile011, token_offsets[token_index]));
	token_sobj->pos.x = current_x;
	token_sobj->pos.y = current_y;
	token_sobj->sprite.attr &= ~SP_FASTCOPY;
	token_sobj->sprite.attr |= SP_TRANSPARENT;
}

// 80138798
void mnBattleCenterTokenInPortrait(GObj* token_gobj, s32 ft_kind)
{
	s32 portrait_id = mnBattleGetPortraitId(ft_kind);

	if (portrait_id >= 6)
	{
		SObjGetStruct(token_gobj)->pos.x = (portrait_id * 45) - (6 * 45) + 36;
		SObjGetStruct(token_gobj)->pos.y = 89.0F;
	}
	else
	{
		SObjGetStruct(token_gobj)->pos.x = (portrait_id * 45) + 36;
		SObjGetStruct(token_gobj)->pos.y = 46.0F;
	}
}

// 80138848
s32 mnSelectRandomFighter(GObj* token_gobj)
{
	s32 ft_kind;

	do
	{
		do
			ft_kind = lbRandom_GetTimeByteRange(12);
		while (mnBattleCheckFighterIsXBoxed(ft_kind) != 0);
	} while (mnBattleGetIsLocked(ft_kind) != 0);

	mnBattleCenterTokenInPortrait(token_gobj, ft_kind);
	return ft_kind;
}

// 801388A4
void mnMoveToken(s32 port_id)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[port_id];

	SObjGetStruct(panel_info->token)->pos.x += panel_info->token_x_velocity;
	SObjGetStruct(panel_info->token)->pos.y += panel_info->token_y_velocity;
}

// 801388F8
void mnBattleSyncTokenAndFighter(GObj* token_gobj)
{
	s32 ft_kind;
	s32 port_id = token_gobj->user_data.s;

	if (gMnBattleFramesElapsed < 0x1E)
		token_gobj->flags = 1;
	else
	{
		if ((gMnBattlePanels[port_id].player_type == mnPanelTypeCPU)
			|| ((gMnBattlePanels[port_id].player_type == mnPanelTypeHuman)
				&& ((gMnBattlePanels[port_id].cursor_state != mnCursorStatePointer)
					|| (gMnBattlePanels[port_id].is_selected == TRUE)
					|| (gMnBattlePanels[port_id].is_recalling == TRUE))))
		{
			token_gobj->flags = 0;
		}
		else
			token_gobj->flags = 1;
	}

	if ((gMnBattlePanels[port_id].is_selected == FALSE) && (gMnBattlePanels[port_id].holder_port_id != 4))
	{
		if (gMnBattlePanels[gMnBattlePanels[port_id].holder_port_id].unk_0xA0 == FALSE)
		{
			if (gMnBattlePanels[gMnBattlePanels[port_id].holder_port_id].cursor != NULL)
			{
				SObjGetStruct(token_gobj)->pos.x
					= (f32)(SObjGetStruct(gMnBattlePanels[gMnBattlePanels[port_id].holder_port_id].cursor)->pos.x
							+ 11.0F);
				SObjGetStruct(token_gobj)->pos.y
					= (f32)(SObjGetStruct(gMnBattlePanels[gMnBattlePanels[port_id].holder_port_id].cursor)->pos.y
							+ -14.0F);
			}
		}
	}
	else
		mnMoveToken(port_id);

	ft_kind = mnBattleGetFtKindFromTokenPosition(port_id);

	switch (gMnBattlePanels[port_id].player_type)
	{
	case mnPanelTypeNA:
		if ((gMnBattleControllerOrderArray[port_id] != -1) && (ft_kind != Ft_Kind_Null))
		{
			gMnBattlePanels[port_id].player_type = mnPanelTypeHuman;

			mnHandlePlayerTypeButtonPress(port_id);
			mnRecreateTypeButton(gMnBattlePanels[port_id].type_button, port_id, gMnBattlePanels[port_id].player_type);
			mnSyncTokenDisplay(gMnBattlePanels[port_id].token, port_id);
		}
		else
			break;
	default:
		if ((gMnBattlePanels[port_id].player_type == mnPanelTypeCPU) && (ft_kind != gMnBattlePanels[port_id].char_id)
			&& (ft_kind == Ft_Kind_Null))
		{
			if (gMnBattlePanels[port_id].holder_port_id != 4)
				mnBattleSelectCharWithToken(gMnBattlePanels[port_id].holder_port_id, 4);
		}
		if ((gMnBattlePanels[port_id].is_selected == FALSE) && (ft_kind != gMnBattlePanels[port_id].char_id))
		{
			gMnBattlePanels[port_id].char_id = ft_kind;

			mnBattleSyncFighterDisplay(port_id);
			mnBattleSyncNameAndLogo(port_id);
		}
	}
}

// 80138B6C
void mnBattleCreateCursorViewport()
{
	GObj* camera_gobj
		= func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x14, 0x100000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80138C0C
void mnBattleCreateDroppedTokenViewport()
{
	GObj* camera_gobj
		= func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x19, 0x200000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80138CAC
void mnBattleCreateHandicapCPULevelViewport()
{
	GObj* camera_gobj
		= func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x2B, 0x800000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80138D4C
void mnBattleCreateReadyToFightViewport()
{
	GObj* camera_gobj
		= func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0xA, 0x4000000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80138DEC
void mnBattleCreateCursor(s32 port_id)
{
	GObj* cursor_gobj;
	s32 unused;
	s32 unk1[4] = dMnBattleCursorTypeOffsetsUnused;
	Vec2f unk2[4] = dMnBattleCursorStartingPositions;
	s32 unk3[4] = dMnBattleCursorStartingDisplayOrders;

	cursor_gobj = func_ovl0_800CD050(0, NULL, 0x13, 0x80000000, func_ovl0_800CCF00, 0x20, unk3[port_id], -1,
									 GetAddressFromOffset(gFile011, &FILE_011_CURSOR_POINTER_IMAGE_OFFSET), 1,
									 mnBattleHandleButtonPresses, 2);

	gMnBattlePanels[port_id].cursor = cursor_gobj;
	cursor_gobj->user_data.s = port_id;
	SObjGetStruct(cursor_gobj)->pos.x = (f32)unk2[port_id].x;
	SObjGetStruct(cursor_gobj)->pos.y = (f32)unk2[port_id].y;
	SObjGetStruct(cursor_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(cursor_gobj)->sprite.attr |= SP_TRANSPARENT;

	mnBattleRedrawCursor(cursor_gobj, port_id, 0);
}

// 80138FA0
void mnBattleRenderToken(GObj* token_gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
	gDPSetEnvColor(gDisplayListHead[0]++, gMnBattleTokenShinePulseColor & 0xFF, gMnBattleTokenShinePulseColor & 0xFF,
				   gMnBattleTokenShinePulseColor & 0xFF, gMnBattleTokenShinePulseColor & 0xFF);
	gDPSetCombineLERP(gDisplayListHead[0]++, TEXEL0, PRIMITIVE, ENVIRONMENT, PRIMITIVE, 0, 0, 0, TEXEL0, TEXEL0,
					  PRIMITIVE, ENVIRONMENT, PRIMITIVE, 0, 0, 0, TEXEL0);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

	func_ovl0_800CCF74(token_gobj);
}

// 80139098
void mnBattleCreateToken(s32 port_id)
{
	GObj* token_gobj;
	mnCharPanelBattle* panel_info;
	intptr_t offsets[4] = dMnBattleTokenOffsetsNoCPU;
	s32 orders1[4] = dMnBattleTokenStartingDisplayOrders;
	s32 orders2[4] = dMnBattleTokenHoldingDisplayOrders;

	gMnBattlePanels[port_id].token = token_gobj
		= func_ovl0_800CD050(0, NULL, 0x14, 0x80000000, mnBattleRenderToken, 0x21, orders1[port_id], -1,
							 GetAddressFromOffset(gFile011, offsets[port_id]), 1, mnBattleSyncTokenAndFighter, 1);

	panel_info = &gMnBattlePanels[port_id];

	token_gobj->user_data.s = port_id;

	if (panel_info->player_type == mnPanelTypeCPU)
		mnBattleRedrawToken(token_gobj, 4);

	if ((panel_info->player_type == mnPanelTypeHuman) && (panel_info->held_port_id != -1))
		omMoveGObjDL(panel_info->token, 0x20U, orders2[port_id] + 1);

	if (panel_info->char_id == Ft_Kind_Null)
	{
		SObjGetStruct(token_gobj)->pos.x = 51.0F;
		SObjGetStruct(token_gobj)->pos.y = 161.0F;
	}
	else
		mnBattleCenterTokenInPortrait(token_gobj, panel_info->char_id);

	SObjGetStruct(token_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(token_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 801392A8
f32 getBattleTokenDistance(s32 port_id_1, s32 port_id_2)
{
	f32 delta_x, delta_y;
	SObj* token_sobj_2 = SObjGetStruct(gMnBattlePanels[port_id_2].token);
	SObj* token_sobj_1 = SObjGetStruct(gMnBattlePanels[port_id_1].token);

	delta_y = token_sobj_2->pos.y - token_sobj_1->pos.y;
	delta_x = token_sobj_2->pos.x - token_sobj_1->pos.x;

	return guSqrtf((delta_y * delta_y) + (delta_x * delta_x));
}

// 80139320
void mnBattleAutopositionOverlappedTokens(s32 port_id_1, s32 port_id_2, f32 unused)
{
	int unused_2;

	if (SObjGetStruct(gMnBattlePanels[port_id_1].token)->pos.x
		== SObjGetStruct(gMnBattlePanels[port_id_2].token)->pos.x)
		gMnBattlePanels[port_id_1].token_x_velocity += lbRandom_GetIntRange(2) - 1;
	else
	{
		gMnBattlePanels[port_id_1].token_x_velocity += (-1.0F
														* (SObjGetStruct(gMnBattlePanels[port_id_2].token)->pos.x
														   - SObjGetStruct(gMnBattlePanels[port_id_1].token)->pos.x))
													   / 10.0F;
	}

	if (SObjGetStruct(gMnBattlePanels[port_id_1].token)->pos.y
		== SObjGetStruct(gMnBattlePanels[port_id_2].token)->pos.y)
		gMnBattlePanels[port_id_1].token_y_velocity += lbRandom_GetIntRange(2) - 1;
	else
		gMnBattlePanels[port_id_1].token_y_velocity += (-1.0F
														* (SObjGetStruct(gMnBattlePanels[port_id_2].token)->pos.y
														   - SObjGetStruct(gMnBattlePanels[port_id_1].token)->pos.y))
													   / 10.0F;
}

// 80139460
void mnBattleAutopositionTokenFromPortraitEdges(s32 port_id)
{
	s32 portrait_id = mnBattleGetPortraitId(gMnBattlePanels[port_id].char_id);
	f32 portrait_edge_x = ((portrait_id >= 6) ? portrait_id - 6 : portrait_id) * 45 + 25;
	f32 portrait_edge_y = ((portrait_id >= 6) ? 1 : 0) * 43 + 36;
	f32 new_pos_x
		= SObjGetStruct(gMnBattlePanels[port_id].token)->pos.x + gMnBattlePanels[port_id].token_x_velocity + 13.0F;
	f32 new_pos_y
		= SObjGetStruct(gMnBattlePanels[port_id].token)->pos.y + gMnBattlePanels[port_id].token_y_velocity + 12.0F;

	if (new_pos_x < (portrait_edge_x + 5.0F))
		gMnBattlePanels[port_id].token_x_velocity = ((portrait_edge_x + 5.0F) - new_pos_x) / 10.0F;
	if (((portrait_edge_x + 45.0F) - 5.0F) < new_pos_x)
		gMnBattlePanels[port_id].token_x_velocity = ((new_pos_x - ((portrait_edge_x + 45.0F) - 5.0F)) * -1.0F) / 10.0F;
	if (new_pos_y < (portrait_edge_y + 5.0F))
		gMnBattlePanels[port_id].token_y_velocity = ((portrait_edge_y + 5.0F) - new_pos_y) / 10.0F;
	if (((portrait_edge_y + 43.0F) - 5.0F) < new_pos_y)
		gMnBattlePanels[port_id].token_y_velocity = ((new_pos_y - ((portrait_edge_y + 43.0F) - 5.0F)) * -1.0F) / 10.0F;
}

// 8013961C
void mnBattleAutopositionPlacedToken(s32 port_id)
{
	s32 i;
	f32 distances[4];
	sb32 is_within_bounds;

	for (i = 0; i < 4; i++)
	{
		if (port_id != i)
		{
			if (gMnBattlePanels[port_id].is_selected != FALSE)
				distances[i] = getBattleTokenDistance(port_id, i);
		}
		else
			distances[i] = -1.0F;
	}

	gMnBattlePanels[port_id].token_x_velocity = 0.0F;
	gMnBattlePanels[port_id].token_y_velocity = 0.0F;

	for (i = 0; i < 4; i++)
	{
		is_within_bounds = ((distances[i] >= 0.0F) && (distances[i] <= 15.0F)) ? TRUE : FALSE;

		if (is_within_bounds != FALSE)
		{
			if ((gMnBattlePanels[port_id].char_id == gMnBattlePanels[i].char_id)
				&& (gMnBattlePanels[port_id].char_id != Ft_Kind_Null) && (gMnBattlePanels[i].is_selected == 1))
			{
				mnBattleAutopositionOverlappedTokens(port_id, i, (15.0F - distances[i]) / 15.0F);
			}
		}
	}

	mnBattleAutopositionTokenFromPortraitEdges(port_id);
}

// 801397CC
void mnBattleAutopositionRecalledToken(s32 port_id)
{
	f32 new_y_velocity, new_x_velocity;

	gMnBattlePanels[port_id].recall_frame_counter += 1;

	if (gMnBattlePanels[port_id].recall_frame_counter < 11)
	{
		new_x_velocity = (gMnBattlePanels[port_id].recall_end_x - gMnBattlePanels[port_id].recall_start_x) / 10.0F;

		if (gMnBattlePanels[port_id].recall_frame_counter < 6)
			new_y_velocity = (gMnBattlePanels[port_id].recall_mid_y - gMnBattlePanels[port_id].recall_start_y) / 5.0F;
		else
			new_y_velocity = (gMnBattlePanels[port_id].recall_end_y - gMnBattlePanels[port_id].recall_mid_y) / 5.0F;

		gMnBattlePanels[port_id].token_x_velocity = new_x_velocity;
		gMnBattlePanels[port_id].token_y_velocity = new_y_velocity;
	}
	else if (gMnBattlePanels[port_id].recall_frame_counter == 11)
	{
		mnBattleHandleCursorPickup(port_id, port_id);
		gMnBattlePanels[port_id].token_x_velocity = 0.0F;
		gMnBattlePanels[port_id].token_y_velocity = 0.0F;
	}
	if (gMnBattlePanels[port_id].recall_frame_counter == 30)
		gMnBattlePanels[port_id].is_recalling = FALSE;
}

// 801398B8
void mnBattleAutopositionToken(s32 port_id)
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if (gMnBattlePanels[i].is_recalling != FALSE)
			mnBattleAutopositionRecalledToken(i);
		if (gMnBattlePanels[i].is_selected != FALSE)
			mnBattleAutopositionPlacedToken(i);
	}
}

// 8013992C
void mnBattleCreateTokenAutopositionRoutine()
{
	omAddGObjCommonProc(omMakeGObjCommon(0U, NULL, 0x1AU, 0x80000000U), mnBattleAutopositionToken, 1, 1);
}

// 80139970
void mnBattleUpdateTokenShinePulseColor(GObj* unused)
{
	if (gMnBattleIsTokenShineIncreasing == FALSE)
	{
		gMnBattleTokenShinePulseColor += 9;

		if (gMnBattleTokenShinePulseColor >= 0x100)
		{
			gMnBattleTokenShinePulseColor = 0xFF;
			gMnBattleIsTokenShineIncreasing = TRUE;
		}
	}
	if (gMnBattleIsTokenShineIncreasing == TRUE)
	{
		gMnBattleTokenShinePulseColor -= 9;

		if (gMnBattleTokenShinePulseColor < 0x80)
		{
			gMnBattleTokenShinePulseColor = 0x80;
			gMnBattleIsTokenShineIncreasing = FALSE;
		}
	}
}

// 801399E8
void mnBattleCreateTokenShinePulseRoutine()
{
	omAddGObjCommonProc(omMakeGObjCommon(0U, NULL, 0x1AU, 0x80000000U), mnBattleUpdateTokenShinePulseColor, 1, 1);
}

// 80139A2C
void mnBattleSyncShadeAndCostume(s32 unused)
{
	s32 i;
	s32 shade;
	s32 costume_id;

	if (gMnBattleIsTeamBattle == 1)
	{
		for (i = 0; i < 4; i++)
		{
			if (gMnBattlePanels[i].char_id != Ft_Kind_Null)
			{
				shade = mnBattleGetShade(i);
				gMnBattlePanels[i].shade = shade;
				func_ovl2_800E9248(gMnBattlePanels[i].player, gMnBattlePanels[i].costume_id, shade);
			}
		}
	}
	else
	{
		for (i = 0; i < 4; i++)
		{
			if ((gMnBattlePanels[i].char_id != Ft_Kind_Null)
				&& (mnBattleGetAdditionalSelectedCount(gMnBattlePanels[i].char_id) == 0))
			{
				costume_id = ftCostume_GetIndexFFA(gMnBattlePanels[i].char_id, 0);

				if ((costume_id != gMnBattlePanels[i].costume_id) && (gMnBattlePanels[i].unk_0x88 == 0))
				{
					shade = mnBattleGetShade(i);
					gMnBattlePanels[i].shade = shade;
					func_ovl2_800E9248(gMnBattlePanels[i].player, costume_id, shade);
					gMnBattlePanels[i].costume_id = costume_id;
				}
			}
		}
	}
}

// 80139B4C
void mnBattleCreateSyncShadeAndCostumeRoutine()
{
	omAddGObjCommonProc(omMakeGObjCommon(0U, NULL, 0x1FU, 0x80000000U), mnBattleSyncShadeAndCostume, 1, 1);
}

// 80139B90
void mnBattleSyncWhiteCircleSizeAndDisplay(GObj* white_circle_gobj)
{
	s32 portrait_id = white_circle_gobj->user_data.s;
	f32 sizes[12] = dMnBattleWhiteCircleSizes;

	if ((gMnBattlePanels[portrait_id].unk_0x88 == 0) && (gMnBattlePanels[portrait_id].char_id != Ft_Kind_Null))
	{
		white_circle_gobj->flags = (white_circle_gobj->flags == 1) ? 0 : 1;

		DObjGetStruct(white_circle_gobj)->scale.vec.f.x = sizes[gMnBattlePanels[portrait_id].char_id];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[gMnBattlePanels[portrait_id].char_id];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[gMnBattlePanels[portrait_id].char_id];
	}
	else
		white_circle_gobj->flags = 1;
}

// 80139C84
void mnBattleCreateWhiteCircles()
{
	GObj* white_circle_gobj;
	f32 y;
	s32 i, x;

	for (i = 0, x = -1250, y = -850.0F; i < 4; i++, x += 840)
	{
		white_circle_gobj = omMakeGObjCommon(0U, NULL, 0x15U, 0x80000000U);

		func_8000F120_FD20(white_circle_gobj, GetAddressFromOffset(gMnBattleFilesArray[6], &FILE_016_WHITE_CIRCLE_OFFSET_2),
					  0);

		omAddGObjRenderProc(white_circle_gobj, func_80014768, 9U, 0x80000000U, -1);

		white_circle_gobj->user_data.s = i;

		func_8000F8F4(white_circle_gobj, GetAddressFromOffset(gMnBattleFilesArray[6], &FILE_016_WHITE_CIRCLE_OFFSET_1));

		omAddGObjCommonProc(white_circle_gobj, mnBattleSyncWhiteCircleSizeAndDisplay, 1, 1);

		func_8000DF34_EB34(white_circle_gobj);

		DObjGetStruct(white_circle_gobj)->translate.vec.f.x = x;
		DObjGetStruct(white_circle_gobj)->translate.vec.f.y = y;
		DObjGetStruct(white_circle_gobj)->translate.vec.f.z = 0.0f;
	}
}

// 80139DD8 - Unused?
void func_ovl26_80139DD8() { return; }

// 80139DE0
void mnBattleBlinkIfReadyToFight(GObj* gobj)
{
	if (mnBattleIsReadyToFight() != FALSE)
	{
		gMnBattlePressStartFlashTimer += 1;

		if (gMnBattlePressStartFlashTimer == 0x28)
			gMnBattlePressStartFlashTimer = 0;

		gobj->flags = (gMnBattlePressStartFlashTimer < 0x1E) ? 0 : 1;
	}
	else
	{
		gobj->flags = 1;
		gMnBattlePressStartFlashTimer = 0;
	}
}

// 80139E60
void mnBattleCreateReadyToFightObjects()
{
	GObj* gobj;
	SObj* sobj;

	// Ready to Fight banner
	gobj = omMakeGObjCommon(0U, NULL, 0x20U, 0x80000000U);
	omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0x26U, 0x80000000U, -1);
	omAddGObjCommonProc(gobj, mnBattleBlinkIfReadyToFight, 1, 1);

	// Ready to Fight banner bg
	sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gFile011, &FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->shadow_color.r = 0;
	sobj->shadow_color.g = 0;
	sobj->shadow_color.b = 0;
	sobj->sprite.red = 0xF4;
	sobj->sprite.green = 0x56;
	sobj->sprite.blue = 0x7F;
	sobj->cmt = 0;
	sobj->cms = 0;
	sobj->maskt = 3;
	sobj->masks = 0;
	sobj->lrs = 0x140;
	sobj->lrt = 0x11;
	sobj->pos.x = 0.0f;
	sobj->pos.y = 71.0f;

	// Ready to Fight banner text
	sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gFile011, &FILE_011_READY_TO_FIGHT_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->shadow_color.r = 0xFF;
	sobj->shadow_color.g = 0xCA;
	sobj->shadow_color.b = 0x13;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0xFF;
	sobj->sprite.blue = 0x9D;
	sobj->pos.x = 50.0f;
	sobj->pos.y = 76.0f;

	// Press Start indicator
	gobj = omMakeGObjCommon(0U, NULL, 0x16U, 0x80000000U);
	omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0x1CU, 0x80000000U, -1);
	omAddGObjCommonProc(gobj, mnBattleBlinkIfReadyToFight, 1, 1);

	// "Press"
	sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gFile011, &FILE_011_PRESS_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xD6;
	sobj->sprite.green = 0xDD;
	sobj->sprite.blue = 0xC6;
	sobj->pos.x = 133.0f;
	sobj->pos.y = 219.0f;

	// "Start"
	sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gFile011, &FILE_011_START_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0x56;
	sobj->sprite.blue = 0x92;
	sobj->pos.x = 162.0f;
	sobj->pos.y = 219.0f;
}

// 8013A0DC
void mnSyncPanelDisplay(s32 port_id)
{
	s32 held_port_id;

	if (gMnBattleControllerOrderArray[port_id] != -1)
	{
		if (gMnBattlePanels[port_id].cursor == NULL)
		{
			mnBattleCreateCursor(port_id);

			if (gMnBattlePanels[port_id].player_type != mnPanelTypeCPU)
			{
				gMnBattlePanels[port_id].player_type = mnPanelTypeHuman;
				mnHandlePlayerTypeButtonPress(port_id);
				mnRecreateTypeButton(gMnBattlePanels[port_id].type_button, port_id,
									 gMnBattlePanels[port_id].player_type);
				mnSyncTokenDisplay(gMnBattlePanels[port_id].token, port_id);
				mnUpdateCursor(gMnBattlePanels[port_id].cursor, port_id);
				mnBattleSyncFighterDisplay(port_id);
				mnBattleSyncNameAndLogo(port_id);
			}
		}
	}
	else
	{
		if (gMnBattlePanels[port_id].cursor != NULL)
		{
			if ((gMnBattlePanels[port_id].held_port_id != -1)
				&& ((port_id != gMnBattlePanels[port_id].held_port_id) || (gMnBattlePanels[port_id].player_type == 1))
				&& (mnBattleSelectChar(gMnBattlePanels[port_id].cursor, port_id, gMnBattlePanels[port_id].held_port_id,
									   4)
					== 0))
			{
				held_port_id = gMnBattlePanels[port_id].held_port_id;
				gMnBattlePanels[held_port_id].char_id = mnSelectRandomFighter(gMnBattlePanels[held_port_id].token);
			}

			omEjectGObjCommon(gMnBattlePanels[port_id].cursor);
			gMnBattlePanels[port_id].cursor = NULL;

			if (gMnBattlePanels[port_id].player_type != 1)
			{
				gMnBattlePanels[port_id].player_type = 2;
				mnHandlePlayerTypeButtonPress(port_id);
				mnRecreateTypeButton(gMnBattlePanels[port_id].type_button, port_id,
									 gMnBattlePanels[port_id].player_type);
				mnSyncTokenDisplay(gMnBattlePanels[port_id].token, port_id);
				mnUpdateCursor(gMnBattlePanels[port_id].cursor, port_id);
				mnBattleSyncFighterDisplay(port_id);
				mnBattleSyncNameAndLogo(port_id);
			}
		}
	}
}

// 8013A2A4
void mnSyncControllerOrderArray()
{
	s32 port_id, order;

	for (port_id = 0; port_id < 4; port_id++)
	{
		gMnBattleControllerOrderArray[port_id] = -1;

		for (order = 0; D_800451A4_40784[order] != -1; order++) // Array can go out of bounds!!! AND DOES!!!
		{
			if (port_id == D_800451A4_40784[order])
				gMnBattleControllerOrderArray[port_id] = order;
		}
	};
}

// 8013A30C
s32 mnGetNumSelectedChars()
{
	s32 i, select_char_count = 0;

	for (i = 0; i < 4; i++)
	{
		if ((gMnBattlePanels[i].player_type != mnPanelTypeNA) && (gMnBattlePanels[i].unk_0x88 == TRUE))
			select_char_count += 1;
	}

	return select_char_count;
}

// 8013A3AC
void mnSetTypeToNA(s32 port_id)
{
	gMnBattlePanels[port_id].player_type = mnPanelTypeNA;
	gMnBattlePanels[port_id].char_id = Ft_Kind_Null;
	gMnBattlePanels[port_id].holder_port_id = 4;

	mnRecreateTypeButton(gMnBattlePanels[port_id].type_button, port_id, mnPanelTypeNA);
}

// 8013A40C
void mnSetUnselectedPanelsToNA()
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if (gMnBattlePanels[i].unk_0x88 == FALSE)
			mnSetTypeToNA(i);
	};
}

// 8013A468 - Unused?
void func_ovl26_8013A468() { return; }

// 8013A470
sb32 mnIsOnlyOneTeamWithSelectedCharacters()
{
	s32 i, team = -1;

	for (i = 0; i < 4; i++)
	{
		if (gMnBattlePanels[i].unk_0x88 != FALSE)
		{
			if (team == -1)
				team = gMnBattlePanels[i].team;
			else if (team != gMnBattlePanels[i].team)
				return FALSE;
		}
	}

	return TRUE;
}

// 8013A534
sb32 mnAreNoTokensHeldAbovePortraits()
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if ((gMnBattlePanels[i].cursor != NULL) && (gMnBattlePanels[i].cursor_state == mnCursorStateHoldingToken))
			return FALSE;
	}

	return TRUE;
}

// 8013A5E4
sb32 mnBattleIsReadyToFight()
{
	sb32 unused, is_ready_to_fight = TRUE;

	if (mnGetNumSelectedChars() < 2)
		is_ready_to_fight = FALSE;
	if ((is_ready_to_fight != FALSE) && (gMnBattleIsTeamBattle == TRUE))
	{
		if (mnIsOnlyOneTeamWithSelectedCharacters() != FALSE)
			is_ready_to_fight = FALSE;
	}
	if (is_ready_to_fight != FALSE)
	{
		if (mnAreNoTokensHeldAbovePortraits() == FALSE)
			is_ready_to_fight = FALSE;
	}

	return is_ready_to_fight;
}

// 8013A664
void mnBattleSaveMatchInfo()
{
	s32 i;

	D_800A4D08.time_limit = gMnBattleTimerValue;
	D_800A4D08.stock_setting = gMnBattleStockValue;
	D_800A4D08.is_team_battle = gMnBattleIsTeamBattle;
	D_800A4D08.match_rules = gMnBattleRule;

	for (i = 0; i < 4; i++)
	{
		if (gMnBattleIsTeamBattle == FALSE)
			D_800A4D08.player_block[i].player = i;
		else
		{
			D_800A4D08.player_block[i].player = gMnBattlePanels[i].team;
			D_800A4D08.player_block[i].team_index = gMnBattlePanels[i].team;
		}

		D_800A4D08.player_block[i].character_kind = gMnBattlePanels[i].char_id;
		D_800A4D08.player_block[i].player_kind = gMnBattlePanels[i].player_type;
		D_800A4D08.player_block[i].costume_index = gMnBattlePanels[i].costume_id;
		D_800A4D08.player_block[i].shade_index = gMnBattlePanels[i].shade;

		if (D_800A4D08.player_block[i].player_kind == Pl_Kind_Man)
		{
			D_800A4D08.player_block[i].player_color_index
				= (D_800A4D08.is_team_battle == FALSE) ? i : D_ovl2_8012EF40[D_800A4D08.player_block[i].team_index];
		}
		else if (D_800A4D08.is_team_battle == FALSE)
			D_800A4D08.player_block[i].player_color_index = 4;
		else
			D_800A4D08.player_block[i].player_color_index = D_ovl2_8012EF40[D_800A4D08.player_block[i].team_index];

		D_800A4D08.player_block[i].tag_index = (D_800A4D08.player_block[i].player_kind == Pl_Kind_Man) ? i : 4;

		D_800A4D08.player_block[i].is_permanent_stock = (D_800A4D08.match_rules & 1) ? TRUE : FALSE;

		if (D_800A4D08.player_block[i].player_kind == Pl_Kind_Com)
			D_800A4D08.player_block[i].level = gMnBattlePanels[i].cpu_level;
		else
			D_800A4D08.player_block[i].handicap = gMnBattlePanels[i].handicap;
	}

	D_800A4D08.pl_count = D_800A4D08.cp_count = 0;

	for (i = 0; i < 4; i++)
	{
		switch (D_800A4D08.player_block[i].player_kind)
		{
		case Pl_Kind_Man: D_800A4D08.pl_count++; break;
		case Pl_Kind_Com: D_800A4D08.cp_count++; break;
		}
	}
}

// 8013A8B8
void mnBattleDestroyCursorAndTokenProcesses()
{
	GObj *cursor_gobj, *token_gobj;
	s32 i;

	for (i = 0; i < 4; i++)
	{
		cursor_gobj = gMnBattlePanels[i].cursor;

		if (cursor_gobj != NULL)
			func_8000B2EC(cursor_gobj->gobjproc_next);

		token_gobj = gMnBattlePanels[i].token;

		if (token_gobj != NULL)
			func_8000B2EC(token_gobj->gobjproc_next);
	};
}

// 8013A920
void mnBattleMain(s32 arg0)
{
	s32 max_stage_id;
	s32 i;
	u32 stage_id;

	gMnBattleFramesElapsed += 1;
	mnSyncControllerOrderArray();

	if (gMnBattleFramesElapsed == gMnBattleMaxFramesElapsed)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 1;

		mnBattleSaveMatchInfo();
		leoInitUnit_atten();

		return;
	}

	if (func_ovl1_80390B7C() == 0)
		gMnBattleMaxFramesElapsed = gMnBattleFramesElapsed + 0x4650;

	if (gMnBattleIsStartTriggered != FALSE)
	{
		gMnBattleStartDelayTimer--;

		if (gMnBattleStartDelayTimer == 0)
		{
			gSceneData.scene_previous = gSceneData.scene_current;

			if (D_800A4D08.is_stage_select != 0)
				gSceneData.scene_current = 0x15;
			else
			{
				gSceneData.scene_current = 0x16;
				max_stage_id = (gSaveData.unlock_mask & 0x10) ? 9 : 8;

				do
					stage_id = lbRandom_GetTimeByteRange(max_stage_id);
				while (stage_id == gSceneData.gr_kind);

				gSceneData.gr_kind = stage_id;
			}

			mnBattleSaveMatchInfo();
			leoInitUnit_atten();
		}
	}
	else
	{
		if ((func_ovl1_8039076C(START_BUTTON) != FALSE) && (gMnBattleFramesElapsed >= 0x3D))
		{
			if (mnBattleIsReadyToFight() != FALSE)
			{
				func_800269C0_275C0(0x26AU);
				mnSetUnselectedPanelsToNA();
				gMnBattleStartDelayTimer = 0x1E;
				gMnBattleIsStartTriggered = TRUE;
				mnBattleDestroyCursorAndTokenProcesses();
			}
			else
				func_800269C0_275C0(0xA5U);
		}

		for (i = 0; i < 4; i++)
		{
			mnSyncPanelDisplay(i);
		}; // needs semicolon to match
	}
}

// 8013AAF8
s32 mnBattleGetNextTimerValue(s32 current_value)
{
	s32 i;
	s32 timer_values[8] = dMnBattleTimerValues;

	if (current_value == timer_values[7])
		return timer_values[0];

	for (i = 0; i < 8; i++)
	{
		if (current_value < timer_values[i])
			return timer_values[i];
	}

	return timer_values[7];
}

// 8013ABDC
s32 mnBattleGetPrevTimerValue(s32 current_value)
{
	s32 i;
	s32 timer_values[8] = dMnBattleTimerValuesDuplicate;

	if (current_value == timer_values[0])
		return timer_values[7];

	for (i = 7; i >= 0; i--)
	{
		if (timer_values[i] < current_value)
			return timer_values[i];
	}

	return timer_values[7];
}

// 8013AC7C
void mnBattleInitPort(s32 port_id)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[port_id];
	s32 controller_order;
	int unplugged = -1;

	panel_info->team_color_button = NULL;
	panel_info->handicap_cpu_level = NULL;
	panel_info->arrows = NULL;
	panel_info->handicap_cpu_level_value = NULL;
	panel_info->white_square = NULL;
	panel_info->p_sfx = NULL;
	panel_info->sfx_id = 0;
	panel_info->player = NULL;
	panel_info->char_id = D_800A4D08.player_block[port_id].character_kind;

	if ((D_800A4D08.player_block[port_id].player_kind == Pl_Kind_Man)
		&& (controller_order = gMnBattleControllerOrderArray[port_id], (controller_order == unplugged)))
	{
		panel_info->player_type = mnPanelTypeNA;
		panel_info->char_id = Ft_Kind_Null;
	}
	else
	{
		panel_info->player_type = D_800A4D08.player_block[port_id].player_kind;
		controller_order = gMnBattleControllerOrderArray[port_id];
	}

	panel_info->cpu_level = D_800A4D08.player_block[port_id].level;
	panel_info->handicap = D_800A4D08.player_block[port_id].handicap;
	panel_info->team = D_800A4D08.player_block[port_id].team_index;

	if ((panel_info->player_type == mnPanelTypeHuman) && (panel_info->char_id == Ft_Kind_Null))
	{
		panel_info->holder_port_id = port_id;
		panel_info->held_port_id = port_id;
	}
	else
	{
		panel_info->holder_port_id = 4;
		panel_info->held_port_id = -1;
	}

	if (panel_info->char_id == Ft_Kind_Null)
	{
		panel_info->unk_0x88 = FALSE;
		panel_info->is_selected = FALSE;
		panel_info->is_recalling = FALSE;
		panel_info->selected_animation_started = FALSE;
	}
	else
	{
		panel_info->unk_0x88 = TRUE;
		panel_info->is_selected = TRUE;
		panel_info->is_recalling = FALSE;
		panel_info->selected_animation_started = FALSE;
	}

	panel_info->costume_id = D_800A4D08.player_block[port_id].costume_index;
	panel_info->shade = D_800A4D08.player_block[port_id].shade_index;

	if ((controller_order != unplugged) && (panel_info->player_type == mnPanelTypeNA))
		panel_info->holder_port_id = port_id;
}

// 8013ADE0
void mnBattleResetPort(s32 port_id)
{
	u8 default_team[4] = dMnBattleDefaultTeam;

	gMnBattlePanels[port_id].team_color_button = NULL;
	gMnBattlePanels[port_id].handicap_cpu_level = NULL;
	gMnBattlePanels[port_id].arrows = NULL;
	gMnBattlePanels[port_id].handicap_cpu_level_value = NULL;
	gMnBattlePanels[port_id].white_square = NULL;
	gMnBattlePanels[port_id].player = NULL;
	gMnBattlePanels[port_id].p_sfx = NULL;
	gMnBattlePanels[port_id].sfx_id = 0;
	gMnBattlePanels[port_id].is_selected = FALSE;
	gMnBattlePanels[port_id].cpu_level = D_800A4D08.player_block[port_id].level;
	gMnBattlePanels[port_id].handicap = D_800A4D08.player_block[port_id].handicap;
	gMnBattlePanels[port_id].char_id = Ft_Kind_Null;
	gMnBattlePanels[port_id].is_recalling = FALSE;
	gMnBattlePanels[port_id].team = default_team[port_id];

	if (gMnBattleControllerOrderArray[port_id] == -1)
	{
		gMnBattlePanels[port_id].player_type = mnPanelTypeNA;
		gMnBattlePanels[port_id].holder_port_id = 4;
		gMnBattlePanels[port_id].held_port_id = -1;
	}
	else
	{
		gMnBattlePanels[port_id].player_type = mnPanelTypeHuman;
		gMnBattlePanels[port_id].holder_port_id = port_id;
		gMnBattlePanels[port_id].held_port_id = port_id;
	}
}

// 8013AEC8
void mnBattleLoadMatchInfo()
{
	s32 i;

	gMnBattleFramesElapsed = 0;
	gMnBattleMaxFramesElapsed = gMnBattleFramesElapsed + 0x4650;
	gMnBattleTimerValue = D_800A4D08.time_limit;
	gMnBattleStockValue = D_800A4D08.stock_setting;
	gMnBattleIsStartTriggered = FALSE;
	gMnBattleIsTeamBattle = D_800A4D08.is_team_battle;
	gMnBattleRule = D_800A4D08.match_rules;
	D_ovl26_8013BDC8 = D_800A4D08.unk_0x10;

	for (i = 0; i < 4; i++)
	{
		if (D_ovl26_8013BDC8 != 0)
		{
			mnBattleResetPort(i);
			D_800A4D08.unk_0x10 = 0;
		}
		else
			mnBattleInitPort(i);

		gMnBattlePanels[i].min_frames_elapsed_until_recall = 0;
	};

	gMnBattleCharacterUnlockedMask = gSaveData.character_mask;
}

// 8013AFC0
void mnBattleInitPanel(s32 port_id)
{
	s32 char_id;

	if (gMnBattleControllerOrderArray[port_id] != -1)
		mnBattleCreateCursor(port_id);
	else
		gMnBattlePanels[port_id].cursor = NULL;

	mnBattleCreateToken(port_id);
	mnBattleCreatePanel(port_id);

	if (gMnBattlePanels[port_id].is_selected != FALSE)
	{
		char_id = gMnBattlePanels[port_id].char_id;
		if (char_id != Ft_Kind_Null)
			mnBattleSpawnFighter(gMnBattlePanels[port_id].player, port_id, char_id,
								 gMnBattlePanels[port_id].costume_id);
	}
}

// 8013B090
void mnBattleInitPanels()
{
	mnBattleInitPanel(0);
	mnBattleInitPanel(1);
	mnBattleInitPanel(2);
	mnBattleInitPanel(3);
}

// 8013B0C8
void mnBattleInitCSS()
{
	s32 bar, baz;
	RldmSetup rldmSetup;
	f32 foo;
	s32 i;
	s32 j;

	rldmSetup.tableRomAddr = &D_NF_001AC870;
	rldmSetup.tableFileCount = &D_NF_00000854;
	rldmSetup.fileHeap = 0;
	rldmSetup.fileHeapSize = 0;
	rldmSetup.statusBuf = (RldmFileNode*)&D_ovl26_8013C0E0;
	rldmSetup.statusBufSize = 0x78;
	rldmSetup.forceBuf = (RldmFileNode*)&D_ovl26_8013C0A8;
	rldmSetup.forceBufSize = 7;
	rldm_initialize(&rldmSetup);
	rldm_load_files_into(D_ovl26_8013B3A0, 7U, gMnBattleFilesArray,
						 hal_alloc(rldm_bytes_need_to_load(D_ovl26_8013B3A0, 7U), 0x10U));

	omMakeGObjCommon(0x400U, mnBattleMain, 0xFU, 0x80000000U);

	func_8000B9FC(0x10, 0x80000000U, 0x64, 1, 0);

	func_ovl2_80115890();
	efManager_AllocUserData();
	mnSyncControllerOrderArray();
	mnBattleLoadMatchInfo();
	ftManager_AllocFighterData(1U, 4);

	for (i = 0; i < 12; i++)
		ftManager_SetFileDataKind(i);

	for (i = 0; i < 4; i++)
		gMnBattlePanels[i].anim_heap = hal_alloc(D_ovl2_80130D9C, 0x10U);

	mnBattleCreatePortraitViewport();
	mnBattleCreateCursorViewport();
	mnBattleCreateDroppedTokenViewport();
	mnBattleCreatePanelViewport();
	mnBattleCreatePanelDoorsViewport();
	mnBattleCreateTypeButtonViewport();
	mnBattleCreateFighterViewport();
	mnBattleCreateTeamButtonViewPort();
	mnBattleCreateHandicapCPULevelViewport();
	mnBattleCreatePortraitBackgroundViewport();
	mnBattleCreatePortraitWhiteBackgroundViewport();
	mnBattleCreateReadyToFightViewport();

	mnBattleCreateBackground();
	mnBattleCreatePortraits();
	mnBattleInitPanels();
	mnBattleDrawTitleAndBack();
	mnBattleCreateTokenAutopositionRoutine();
	mnBattleCreateTokenShinePulseRoutine();
	mnBattleCreateSyncShadeAndCostumeRoutine();
	mnBattleCreateWhiteCircles();
	mnBattleCreateReadyToFightObjects();

	func_ovl1_803904E0(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

	if (gSceneData.scene_previous != 0x15)
		func_80020AB4(0, 0xA);

	if (D_800A4D08.is_team_battle == 0)
		func_800269C0_275C0(0x200U);
	else
		func_800269C0_275C0(0x20EU);
}

// 8013B33C
void vs_css_entry()
{
	D_ovl26_8013B980.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
	func_80007024(&D_ovl26_8013B980);
	D_ovl26_8013B99C.arena_size = (u32)((uintptr_t)&lOverlay26ArenaHi - (uintptr_t)&lOverlay26ArenaLo);
	func_800A2698(&D_ovl26_8013B99C);
}
