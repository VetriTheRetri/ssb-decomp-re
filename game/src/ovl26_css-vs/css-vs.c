#include <sys/develop.h>
#include <ft/ftdef.h>
#include <gm/battle.h>
#include <css-vs.h>

extern f32 gPortraitXCoords[12]; // D_ovl26_8013B3F0
extern f32 gPortraitVelocities[12]; // D_ovl26_8013B420
extern Vec2f gPortraitBackgroundXYCoords[12]; // D_ovl26_8013B450[12];

extern s32 gMnFtKindOrder[12]; // D_ovl26_8013B4D4[12];
extern s32 gMnPortraitOrder[12]; // D_ovl26_8013B4D4[12];
extern s32 gMnLockedPortraitOffsets[12]; // D_ovl26_8013B534[12];
extern s32 gMnPortraitOffsets[12]; // D_ovl26_8013B564[12];
extern s32 gMnTeamButtonOffsets[3]; // D_ovl26_8013B594[3];
extern s32 gMnTypeButtonOffsets[3]; // D_ovl26_8013B5A0[3];
extern Vec2f gMnUnusedCoords[12]; // D_ovl26_8013B5AC[12];
extern s32 gMnLogoOffsets[12]; // D_ovl26_8013B60C[12];
extern s32 gMnNameOffsets[12]; // D_ovl26_8013B63C[12];
extern intptr_t gMnPanelOffsets[4]; // D_ovl26_8013B66C[4];
extern intptr_t gMnPanelCPUOffsets[4]; // D_ovl26_8013B67C[4];
extern GfxColor gMnUnusedColors[4]; // D_ovl26_8013B68C[4]
extern intptr_t gMnTypeButtonOffsetsDuplicate[3]; // D_ovl26_8013B698[3];
extern intptr_t gMnTypeOffsets[4]; // D_ovl26_8013B6A4[4];
extern f32 gMnTypeXOffsets[4]; // D_ovl26_8013B6B4[4];
extern intptr_t gMnTypeOffsetsDuplicate[4]; // D_ovl26_8013B6C4[4];
extern f32 gMnTypeXOffsetsDuplicate[4]; // D_ovl26_8013B6D4[4];
extern intptr_t gMnPanelRenderRoutines[4]; // jtbl_ovl26_8013B6E4[4];
extern s32 gMnPaletteIndexes[4]; // D_ovl26_8013B6F4[4];
extern intptr_t gMnNumberOffsets[10]; // D_ovl26_8013B704[10];

extern mnCharSelPanelVS gPanelVS[GMMATCH_PLAYERS_MAX]; // D_ovl26_8013BA88[GMMATCH_PLAYERS_MAX];

extern sb32 gIsTeamBattle; // D_ovl26_8013BDA8

extern u16 gMenuUnlockedMask; // D_ovl26_8013BDBC; // flag indicating which bonus chars are available

extern s32 gFile011; // D_ovl26_8013C4A0; // file 0x011 pointer
extern s32 gFile014; // D_ovl26_8013C4A8; // file 0x014 pointer
extern s32 gFile013; // D_ovl26_8013C4B4; // file 0x013 pointer

extern intptr_t FILE_011_TYPE_CP_IMAGE_OFFSET = 0xFF8; // file 0x011 image offset for CP type image
extern intptr_t FILE_011_PANEL_DOOR_L_IMAGE_OFFSET = 0xCDB0;
extern intptr_t FILE_011_PANEL_DOOR_R_IMAGE_OFFSET = 0xDFA0;
extern intptr_t FILE_011_PANEL_IMAGE_OFFSET = 0x104B0;

extern s32 FILE_013_XBOX_IMAGE_OFFSET = 0x2B8; // file 0x013 image offset
extern s32 FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET = 0xF68; // file 0x013 image offset for portrait question mark image
extern s32 FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET = 0x24D0; // file 0x013 image offset for portrait bg (fire) image


// 0x80131B20
void func_ovl26_80131B20(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
    return;
}

// 0x80131B78
s32 mnVS_GetShade(s32 arg0)
{
    sb32 used_shade[GMMATCH_PLAYERS_MAX];
    s32 i;

    if (gIsTeamBattle == FALSE)
    {
        return 0;
    }

    for (i = 0; i < ARRAY_COUNT(used_shade); i++)
    {
        used_shade[i] = 0;
    }

    if (gIsTeamBattle == TRUE)
    {
        for (i = 0; i < ARRAY_COUNT(gPanelVS); i++)
        {
            if (arg0 != i)
            {
                if
                (
                    gPanelVS[arg0].char_id == gPanelVS[i].char_id &&
                    gPanelVS[arg0].team == gPanelVS[i].team
                )
                {
                    used_shade[gPanelVS[i].shade] = TRUE;
                }
            }
        }
        for(i = 0; i < ARRAY_COUNT(used_shade); i++)
        {
            if(used_shade[i] == FALSE)
            {
                return i;
            }
        }
    }
    // WARNING: Undefined behavior. If D_ovl26_8013BDA8 is FALSE, returned value is indeterminate.
}

// 0x80131C74
void mnVS_SelectCharWithToken(s32 port_id, s32 select_button)
{
    s32 held_port_id = gPanelVS[port_id].held_port_id, costume_id;

    if (select_button != mnSelect_A)
    {
        costume_id = ftCostume_GetIndexFFA(gPanelVS[held_port_id].char_id);

        if (func_ovl26_80134674(gPanelVS[held_port_id].char_id, held_port_id, costume_id) != 0)
        {
            func_800269C0(0xA5U);
            return;
        }

        gPanelVS[held_port_id].shade = mnVS_GetShade(held_port_id);
        gPanelVS[held_port_id].costume_id = costume_id;
        func_ovl2_800E9248(gPanelVS[held_port_id].player, costume_id, gPanelVS[held_port_id].shade);
    }

    gPanelVS[held_port_id].is_selected = 1;

    func_ovl26_80137390(port_id, held_port_id);

    gPanelVS[held_port_id].unk_0x7C = 4;
    gPanelVS[port_id].cursor_state = 2;

    func_ovl26_80134D54(gPanelVS[port_id].cursor, port_id, 2);

    gPanelVS[port_id].held_port_id = -1;
    gPanelVS[held_port_id].unk_0x88 = 1;

    func_ovl26_801367F0(port_id, held_port_id);

    if ((func_ovl26_80137148() != 0) || (gPanelVS[held_port_id].player_type == 1))
    {
        func_ovl26_80137004(held_port_id);
    }

    func_ovl26_8013647C(held_port_id);
}

// 0x80131DC4
f32 mnGetNextPortraitX(s32 portrait_id, f32 current_x_position) {
    f32 portrait_x_position[12] = gPortraitXCoords,
        portrait_velocity[12] = gPortraitVelocities;

    if (current_x_position == portrait_x_position[portrait_id])
    {
        return -1.0f;
    }
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

// 0x80131ED8
sb32 mnCheckFighterIsXBoxed(s32 ftKind)
{
    return FALSE;
}

// 0x80131EE4
void mnSetPortraitX(GObj *portrait_gobj)
{
    SObj *next_sobj;
    SObj *main_sobj = SObjGetStruct(portrait_gobj);
    f32 new_portrait_x = mnGetNextPortraitX((u32) portrait_gobj->user_data, main_sobj->pos.x);

    if (new_portrait_x != -1.0f)
    {
        main_sobj->pos.x = new_portrait_x;
        next_sobj = main_sobj->next;

        if (next_sobj != NULL)
        {
            next_sobj->pos.x = SObjGetStruct(portrait_gobj)->pos.x;
        }
    }
}

// 0x80131F54
void mnInitializePortraitBackgroundPosition(SObj *portrait_bg_sobj, s32 portrait_id)
{
    Vec2f coordinates[12] = gPortraitBackgroundXYCoords;

    portrait_bg_sobj->pos.x = coordinates[portrait_id].x;
    portrait_bg_sobj->pos.y = coordinates[portrait_id].y;
}

// 0x80131FB0
void mnAddRedXBoxToPortrait(GObj* portrait_gobj, s32 portrait_id)
{
    SObj* portrait_sobj = SObjGetStruct(portrait_gobj);
    f32 x = portrait_sobj->pos.x,
        y = portrait_sobj->pos.y;
    s32 xbox_image_offset = &(FILE_013_XBOX_IMAGE_OFFSET);

    portrait_sobj = func_ovl0_800CCFDC(portrait_gobj, (gFile013 + xbox_image_offset)); // AppendTexture

    portrait_sobj->pos.x = x + 4.0f;
    portrait_sobj->pos.y = y + 12.0f;
    portrait_sobj->sprite.attr = portrait_sobj->sprite.attr & ~SP_FASTCOPY;
    portrait_sobj->sprite.attr = portrait_sobj->sprite.attr| SP_TRANSPARENT;
    portrait_sobj->sprite.red = 0xFF;
    portrait_sobj->sprite.green = 0;
}

// 0x80132044
sb32 mgGetIsLocked(s32 char_id)
{
    switch (char_id)
    {
        case Ft_Kind_Ness:
            return ((gMenuUnlockedMask & (1 << Ft_Kind_Ness)) ? FALSE : TRUE);
        case Ft_Kind_Purin:
            return ((gMenuUnlockedMask & (1 << Ft_Kind_Purin)) ? FALSE : TRUE);
        case Ft_Kind_Captain:
            return ((gMenuUnlockedMask & (1 << Ft_Kind_Captain)) ? FALSE : TRUE);
        case Ft_Kind_Luigi:
            return ((gMenuUnlockedMask & (1 << Ft_Kind_Luigi)) ? FALSE : TRUE) ;
    }
    return FALSE;
}

// 0x80132110
void nop(void) { /* */ }

// 0x80132118
s32 mnGetFtKind(s32 portrait_id)
{
    s32 ftKind_order[12] = gMnFtKindOrder;
    return ftKind_order[portrait_id];
}

// 0x80132168
s32 mnGetPortraitId(s32 ftKind)
{
    s32 portrait_id_order[12] = gMnPortraitOrder;
    return portrait_id_order[ftKind];
}

// 0x801321B8
void mnRenderPortraitWithNoise(GObj *arg0)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x30, 0x30, 0x30, 0xFF);
    gDPSetCombineLERP(gDisplayListHead[0]++, NOISE, TEXEL0, PRIMITIVE, TEXEL0,  0, 0, 0, TEXEL0,  NOISE, TEXEL0, PRIMITIVE, TEXEL0,  0, 0, 0, TEXEL0);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    func_ovl0_800CCF74(arg0);
}

// 0x80132278
void mnCreateLockedPortrait(s32 portrait_id)
{
    GObj* texture_gobj;
    SObj* texture_sobj;
    s32 locked_portrait_offsets[12] = gMnLockedPortraitOffsets;

    // portrait bg (fire)
    texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
    omAddGObjRenderProc(texture_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
    omAddGObjCommonProc(texture_gobj, mnSetPortraitX, 1, 1);

    texture_sobj = func_ovl0_800CCFDC(texture_gobj, gFile013 + (intptr_t)&FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET);
    texture_sobj->pos.x = (f32) (((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 0x2D) + 0x19);
    texture_sobj->pos.y = (f32) (((portrait_id >= 6 ? 1 : 0) * 0x2B) + 0x24);

    mnInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
    texture_gobj->user_data = portrait_id;

    // portrait
    texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
    omAddGObjRenderProc(texture_gobj, mnRenderPortraitWithNoise, 0x1BU, 0x80000000U, -1);
    omAddGObjCommonProc(texture_gobj, mnSetPortraitX, 1, 1);

    texture_sobj = func_ovl0_800CCFDC(texture_gobj, (gFile013 + locked_portrait_offsets[func_ovl26_80132118(portrait_id)]));
    texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
    texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;

    texture_gobj->user_data = portrait_id;
    mnInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

    // question mark
    texture_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
    omAddGObjRenderProc(texture_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
    omAddGObjCommonProc(texture_gobj, mnSetPortraitX, 1, 1);

    texture_sobj = func_ovl0_800CCFDC(texture_gobj, gFile013 + (intptr_t)&FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET);
    texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
    texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;
    texture_sobj->shadow_color.r = 0x5B;
    texture_sobj->shadow_color.g = 0x41;
    texture_sobj->shadow_color.b = 0x33;
    texture_sobj->sprite.red = 0xC4;
    texture_sobj->sprite.green = 0xB9;
    texture_sobj->sprite.blue = 0xA9;

    texture_gobj->user_data = portrait_id;
    mnInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
}

// 0x80132520
void mnCreatePortrait(s32 portrait_id)
{
    GObj *portrait_gobj, *portrait_bg_gobj;
    SObj *texture_sobj;
    s32 portrait_offsets[12] = gMnPortraitOffsets;

    // if locked, render locked portrait instead
    if (mgGetIsLocked(mnGetFtKind(portrait_id)))
    {
        mnCreateLockedPortrait(portrait_id);
    }
    else
    {
        // portrait bg (fire)
        portrait_bg_gobj = omMakeGObjCommon(0U, NULL, 0x1DU, 0x80000000U);
        omAddGObjRenderProc(portrait_bg_gobj, func_ovl0_800CCF00, 0x24U, 0x80000000U, -1);
        portrait_bg_gobj->user_data = portrait_id;
        omAddGObjCommonProc(portrait_bg_gobj, mnSetPortraitX, 1, 1);

        texture_sobj = func_ovl0_800CCFDC(portrait_bg_gobj, gFile013 + (intptr_t)&FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET);
        mnInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

        // portrait
        portrait_gobj = omMakeGObjCommon(0U, NULL, 0x12U, 0x80000000U);
        omAddGObjRenderProc(portrait_gobj, func_ovl0_800CCF00, 0x1BU, 0x80000000U, -1);
        omAddGObjCommonProc(portrait_gobj, mnSetPortraitX, 1, 1);

        texture_sobj = func_ovl0_800CCFDC(portrait_gobj, (gFile013 + portrait_offsets[mnGetFtKind(portrait_id)]));
        texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
        texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;
        portrait_gobj->user_data = portrait_id;

        // this conditionally draws a big red box with an X in it, but this check always fails
        if (mnCheckFighterIsXBoxed(mnGetFtKind(portrait_id)) != FALSE)
        {
            mnAddRedXBoxToPortrait(portrait_gobj, portrait_id);
        }
        mnInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
    }
}

// 0x801326DC
void mnCreatePortraits() {
    s32 portrait_id;

    for (portrait_id = 0; portrait_id < 0xC; portrait_id++)
    {
        mnCreatePortrait(portrait_id);
    }
}

// 0x8013271C
void mnCreateTeamButton(s32 team_id, s32 port_id)
{
    GObj *team_button_gobj;
    SObj *team_button_sobj;
    s32 team_color_button_offsets[3] = gMnTeamButtonOffsets;

    team_button_gobj = gPanelVS[port_id].team_color_button = omMakeGObjCommon(0U, NULL, 0x1BU, 0x80000000U);
    omAddGObjRenderProc(team_button_gobj, func_ovl0_800CCF00, 0x22U, 0x80000000U, -1);

    team_button_sobj = func_ovl0_800CCFDC(team_button_gobj, gFile011 + team_color_button_offsets[team_id]);
    team_button_sobj->pos.x = (f32) ((port_id * 0x45) + 0x22);
    team_button_sobj->pos.y = 131.0f;
    team_button_sobj->sprite.attr = team_button_sobj->sprite.attr & ~SP_FASTCOPY;
    team_button_sobj->sprite.attr = team_button_sobj->sprite.attr| SP_TRANSPARENT;
}

// 0x80132824
void mnDestroyTeamButton(s32 port_id)
{
    if (gPanelVS[port_id].team_color_button != NULL)
    {
        omEjectGObjCommon(gPanelVS[port_id].team_color_button);
        gPanelVS[port_id].team_color_button = NULL;
    }
}

// 0x80132878
void mnCreateOrReplaceTeamButton(s32 team_id, s32 port_id)
{
    mnDestroyTeamButton(port_id);
    mnCreateTeamButton(team_id, port_id);
}

// 0x801328AC
void mnDestroyTeamButtons()
{
    s32 port_id;
    for (port_id = 0; port_id < 4; port_id++)
    {
        if (gPanelVS[port_id].team_color_button != NULL)
        {
            omEjectGObjCommon(gPanelVS[port_id].team_color_button);
            gPanelVS[port_id].team_color_button = NULL;
        }
    }
}

// 0x80132904
void mnCreateTeamButtons()
{
    s32 panel_id;

    mnDestroyTeamButtons();
    for (panel_id = 0; panel_id < 4; panel_id++)
    {
        mnCreateTeamButton(gPanelVS[panel_id].team, panel_id);
    }
}

// 0x8013295C
void mnRecreateTypeButton(GObj* type_gobj, s32 port_id, s32 type_id)
{
    SObj* type_sobj;
    f32 x = (f32) ((port_id * 0x45) + 0x40),
        y = 131.0f;
    s32 type_button_offsets[3] = gMnTypeButtonOffsets;

    func_8000B760(type_gobj);
    type_sobj = func_ovl0_800CCFDC(type_gobj, gFile011 + type_button_offsets[type_id]);
    type_sobj->pos.x = x;
    type_sobj->pos.y = y;
    type_sobj->sprite.attr = type_sobj->sprite.attr & ~SP_FASTCOPY;
    type_sobj->sprite.attr = type_sobj->sprite.attr | SP_TRANSPARENT;
}

// 0x80132A14
void setNameAndLogo(GObj* name_logo_gobj, s32 port_id, s32 ftKind)
{
    SObj* sobj;
    Vec2f coords[12] = gMnUnusedCoords;
    s32 logo_offsets[12] = gMnLogoOffsets;
    s32 name_offsets[12] = gMnNameOffsets;

    if (ftKind != 0x1C)
    {
        func_8000B760(name_logo_gobj);

        // logo
        sobj = func_ovl0_800CCFDC(name_logo_gobj, gFile014 + logo_offsets[ftKind]);
        sobj->pos.x = (f32) ((port_id * 0x45) + 0x18);
        sobj->pos.y = 143.0f;
        sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
        sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;

        if (gPanelVS[port_id].player_type == mnPanelTypeHuman)
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
        sobj = func_ovl0_800CCFDC(name_logo_gobj, gFile011 + name_offsets[ftKind]);
        sobj->pos.x = (f32) ((port_id * 0x45) + 0x16);
        sobj->pos.y = 201.0f;
        sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
        sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;
    }
}

// 0x80132BF4
void mnAnimatePanelDoors(s32 port_id)
{
    // left door
    SObjGetStruct(gPanelVS[port_id].panel_doors)->pos.x = (f32) ((s32)gPanelVS[port_id].door_offset + port_id * 0x45 - 0x13);

    // right door
    SObjGetStruct(gPanelVS[port_id].panel_doors)->next->pos.x = (f32) (port_id * 0x45 + 0x58 - (s32)gPanelVS[port_id].door_offset);
}

// 0x80132C6C
void mnUpdatePanelDoors(GObj* panel_doors)
{
    s32 port_id = panel_doors->user_data;
    s32 delta = 2,
        max = 0x29,
        min = 0;

    if (gPanelVS[port_id].player_type == mnPanelTypeNA)
    {
        if (gPanelVS[port_id].door_offset == delta)
        {
            // left over check
        }

        if (gPanelVS[port_id].door_offset < max)
        {
            gPanelVS[port_id].door_offset += delta;

            if (gPanelVS[port_id].door_offset >= max)
            {
                gPanelVS[port_id].door_offset = max;
                func_800269C0(0xA6U);
            }
            mnAnimatePanelDoors(port_id);
        }
    }
    else
    {
        if (gPanelVS[port_id].door_offset == min)
        {
            // left over check
        }

        if (gPanelVS[port_id].door_offset > min)
        {
            gPanelVS[port_id].door_offset -= delta;

            if (gPanelVS[port_id].door_offset < min)
            {
                gPanelVS[port_id].door_offset = min;
            }
            mnAnimatePanelDoors(port_id);
        }
    }
}

// 0x80132D1C
void mnCreatePortraitViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x46, 0x08000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0f, 10.0f, 310.0f, 230.0f);
}

// 0x80132DBC
void mnCreatePortraitBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x4B, 0x1000000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0f, 10.0f, 310.0f, 230.0f);
}

// 0x80132E5C
void mnCreatePortraitWhiteBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x49, 0x2000000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0f, 10.0f, 310.0f, 230.0f);
}

// 0x80132EFC
void mnCreatePanelDoorsViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x28, 0x20000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0f, 10.0f, 310.0f, 230.0f);
}

// 0x80132F9C
void mnCreateTypeButtonViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x23, 0x40000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0f, 10.0f, 310.0f, 230.0f);
}

// 0x8013303C
void mnCreatePanelViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x32, 0x10000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0f, 10.0f, 310.0f, 230.0f);
}

// 0x801330DC
void mnCreateTeamButtonViewPort()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x2D, 0x400000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0f, 10.0f, 310.0f, 230.0f);
}

// 0x8013317C
void mnRenderPanelDoorsP1(GObj panel_doors_gobj)
{
    func_ovl0_800CD1F0(0x16, 0x58, 0x7E, 0xD9);
    func_ovl0_800CCF00(panel_doors_gobj);
    func_ovl0_800CD1F0(0xA, 0x136, 0xA, 0xE6);
}

// 0x801331C8
void mnRenderPanelDoorsP2(GObj* panel_doors_gobj)
{
    func_ovl0_800CD1F0(0x5B, 0x9D, 0x7E, 0xD9);
    func_ovl0_800CCF00(panel_doors_gobj);
    func_ovl0_800CD1F0(0xA, 0x136, 0xA, 0xE6);
}

// 0x80133214
void mnRenderPanelDoorsP3(GObj* panel_doors_gobj)
{
    func_ovl0_800CD1F0(0xA0, 0xE2, 0x7E, 0xD9);
    func_ovl0_800CCF00(panel_doors_gobj);
    func_ovl0_800CD1F0(0xA, 0x136, 0xA, 0xE6);
}

// 0x80133260
void mnRenderPanelDoorsP4(GObj* panel_doors_gobj)
{
    func_ovl0_800CD1F0(0xE5, 0x127, 0x7E, 0xD9);
    func_ovl0_800CCF00(panel_doors_gobj);
    func_ovl0_800CD1F0(0xA, 0x136, 0xA, 0xE6);
}

// 0x801332AC
void mnUpdatePanel(GObj* panel_gobj, s32 color_id, s32 player_type)
{
    SObj* panel_sobj;
    intptr_t panel_offsets[4] = gMnPanelOffsets;
    intptr_t panel_offsets_cpu[4] = gMnPanelCPUOffsets;
    GfxColor colors[4] = gMnUnusedColors;

    panel_sobj = SObjGetStruct(panel_gobj);

    if (player_type == mnPanelTypeHuman)
    {
        SObjGetSprite(panel_sobj)->LUT = GetAddressFromOffset(gFile011, panel_offsets[color_id]);
    }
    else SObjGetSprite(panel_sobj)->LUT = GetAddressFromOffset(gFile011, panel_offsets_cpu[color_id]);
}

// 0x80133378
void mnCreateTypeButton(s32 port_id)
{
    GObj* type_button_gobj;
    intptr_t offsets[3] = gMnTypeButtonOffsetsDuplicate;

    type_button_gobj = func_ovl0_800CD050(0, NULL, 0x18, 0x80000000, func_ovl0_800CCF00, 0x1E, 0x80000000, -1, GetAddressFromOffset(gFile011, offsets[gPanelVS[port_id].player_type]), 1, NULL, 1);

    gPanelVS[port_id].type_button = type_button_gobj;
    SObjGetStruct(type_button_gobj)->pos.x = (f32) ((port_id * 0x45) + 0x40);
    SObjGetStruct(type_button_gobj)->pos.y = 131.0f;
    SObjGetStruct(type_button_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(type_button_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 0x801334A8
void mnCreateTypeImage(s32 port_id)
{
    GObj* type_gobj;
    SObj* type_sobj;
    intptr_t offsets[4] = gMnTypeOffsets;
    f32 floats[4] = gMnTypeXOffsets;

    gPanelVS[port_id].type = type_gobj = omMakeGObjCommon(0U, NULL, 0x16U, 0x80000000U);
    omAddGObjRenderProc(type_gobj, func_ovl0_800CCF00, 0x1CU, 0x80000000U, -1);

    if (gPanelVS[port_id].player_type == mnPanelTypeCPU)
    {
        type_sobj = func_ovl0_800CCFDC(type_gobj, GetAddressFromOffset(gFile011, &FILE_011_TYPE_CP_IMAGE_OFFSET));
        type_sobj->pos.x = (f32) ((port_id * 0x45) + 0x1A);
    }
    else
    {
        type_sobj = func_ovl0_800CCFDC(type_gobj, GetAddressFromOffset(gFile011, offsets[port_id]));
        type_sobj->pos.x = floats[port_id] + (f32) ((port_id * 0x45) + 0x16);
    }
    type_sobj->sprite.attr &= ~SP_FASTCOPY;
    type_sobj->sprite.attr |= SP_TRANSPARENT;
    type_sobj->sprite.red = 0;
    type_sobj->sprite.green = 0;
    type_sobj->sprite.blue = 0;
    type_sobj->pos.y = 131.0f;
}

// 0x8013365C
void func_ovl26_8013365C(s32 port_id)
{
    GObj* temp_gobj;
    SObj* right_door_sobj;

    intptr_t type_offsets[4] = gMnTypeOffsetsDuplicate; // unused
    f32 type_x_offsets[4] = gMnTypeXOffsetsDuplicate; // unused
    intptr_t panelRenderRoutines[4] = gMnPanelRenderRoutines;
    s32 palette_ids[4] = gMnPaletteIndexes;

    s32 start_x;

    // create panel
    temp_gobj = func_ovl0_800CD050(0, NULL, 0x16, 0x80000000, func_ovl0_800CCF00, 0x1C, 0x80000000, -1, GetAddressFromOffset(gFile011, &FILE_011_PANEL_IMAGE_OFFSET), 1, NULL, 1);
    gPanelVS[port_id].panel = temp_gobj;
    start_x = port_id * 0x45;
    SObjGetStruct(temp_gobj)->pos.x = (f32) (start_x + 0x16);
    SObjGetStruct(temp_gobj)->pos.y = 126.0f;
    SObjGetStruct(temp_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(temp_gobj)->sprite.attr |= SP_TRANSPARENT;

    if (gIsTeamBattle == FALSE)
    {
        mnUpdatePanel(temp_gobj, palette_ids[port_id], gPanelVS[port_id].player_type);
    }
    else
    {
        // TODO: team enum - 2 is GREEN here
        mnUpdatePanel(temp_gobj, ((gPanelVS[port_id].team == 2) ? 3 : gPanelVS[port_id].team), gPanelVS[port_id].player_type);
    }

    mnCreateTypeImage(port_id);

    // create panel doors
    temp_gobj = func_ovl0_800CD050(0, NULL, 0x17, 0x80000000, panelRenderRoutines[port_id], 0x1D, 0x80000000, -1, GetAddressFromOffset(gFile011, &FILE_011_PANEL_DOOR_L_IMAGE_OFFSET), 1, mnUpdatePanelDoors, 1);
    temp_gobj->user_data = port_id;
    SObjGetStruct(temp_gobj)->pos.x = (f32) (start_x - 0x13);
    SObjGetStruct(temp_gobj)->pos.y = 126.0f;
    SObjGetStruct(temp_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(temp_gobj)->sprite.attr |= SP_TRANSPARENT;
    gPanelVS[port_id].panel_doors = temp_gobj;

    right_door_sobj = func_ovl0_800CCFDC(temp_gobj, GetAddressFromOffset(gFile011, &FILE_011_PANEL_DOOR_R_IMAGE_OFFSET));
    right_door_sobj->pos.x = (f32) (start_x + 0x58);
    right_door_sobj->pos.y = 126.0f;
    right_door_sobj->sprite.attr &= ~SP_FASTCOPY;
    right_door_sobj->sprite.attr |= SP_TRANSPARENT;
    gPanelVS[port_id].door_offset = 0x29;

    mnAnimatePanelDoors(port_id);
    mnCreateTypeButton(port_id);

    // name/logo
    temp_gobj = omMakeGObjCommon(0U, NULL, 0x16U, 0x80000000U);
    gPanelVS[port_id].name_logo = temp_gobj;
    omAddGObjRenderProc(temp_gobj, func_ovl0_800CCF00, 0x1CU, 0x80000000U, -1);

    func_ovl26_80136300(port_id);

    if ((func_ovl26_80137148() != 0) || (gPanelVS[port_id].player_type == mnPanelTypeCPU)) {
        func_ovl26_80137004(port_id);
    }
    if (gIsTeamBattle == TRUE) {
        mnCreateTeamButton(gPanelVS[port_id].team, port_id);
    }
}

// 0x80133A1C
s32 mnPow(s32 num, s32 pow)
{
    if (pow == 0) return 1;
    else
    {
        s32 result = num, i = pow;

        if (pow >= 2)
        {
            do result *= num;
            while (--i != 1);
        }

        return result;
    }
}


// 0x80133ABC
void mnSetTextureColors(SObj* sobj, u32 colors[])
{
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    sobj->shadow_color.r = (u8) colors[0];
    sobj->shadow_color.g = (u8) colors[1];
    sobj->shadow_color.b = (u8) colors[2];
    sobj->sprite.red = (u8) colors[3];
    sobj->sprite.green = (u8) colors[4];
    sobj->sprite.blue = (u8) colors[5];
}

// 0x80133B04
s32 mnGetNumberOfDigits(s32 num, s32 maxDigits)
{
    s32 numDigits;

    for (numDigits = maxDigits; numDigits > 0; numDigits--)
    {
        if (mnPow(10, numDigits - 1) != 0 ? num / mnPow(10, numDigits - 1) : 0 != 0) return numDigits;
    }

    return 0;
}

// 0x80133BB0
void mnCreateNumber(GObj* number_gobj, s32 num, f32 x, f32 y, s32 colors[], s32 maxDigits, sb32 pad)
{
    intptr_t number_offsets[10] = gMnNumberOffsets;
    SObj* number_sobj;
    f32 left_x = x;
    s32 place;
    s32 numDigits;
    s32 digit;

    if (num < 0) num = 0;

    number_sobj = func_ovl0_800CCFDC(number_gobj, GetAddressFromOffset(gFile011, number_offsets[num % 10]));
    mnSetTextureColors(number_sobj, colors);
    left_x -= number_sobj->sprite.width;
    number_sobj->pos.x = left_x;
    number_sobj->pos.y = y;

    for
    (
        place = 1, numDigits = (pad != FALSE) ? maxDigits : mnGetNumberOfDigits(num, maxDigits);
        place < numDigits;
        place++, numDigits = (pad != FALSE) ? maxDigits : mnGetNumberOfDigits(num, maxDigits)
    )
    {
        digit = (mnPow(10, place) != 0) ? num / mnPow(10, place) : 0;

        number_sobj = func_ovl0_800CCFDC(number_gobj, GetAddressFromOffset(gFile011, number_offsets[digit % 10]));
        mnSetTextureColors(number_sobj, colors);
        left_x -= (f32) number_sobj->sprite.width;
        number_sobj->pos.x = left_x;
        number_sobj->pos.y = y;
    }
}

// 0x80133E28

// 0x80133FAC

// 0x80134094

// 0x80134198

// 0x80134284

// 0x801343B0

// 0x80134608

// 0x80134674

// 0x8013473C

// 0x8013487C

// 0x801348EC
// 0x8013490C

// 0x80134918

// 0x80134924

// 0x80134930

// 0x8013493C

// 0x8013494C

// 0x80134A8C

// 0x80134C64

// 0x80134D54

// 0x80134F64

// 0x8013502C

// 0x801350FC

// 0x80135270

// 0x80135334

// 0x80135554

// 0x80135634

// 0x801357A4

// 0x801358F8

// 0x801359D8

// 0x80135AB8

// 0x80135B98

// 0x80135C84

// 0x80136038

// 0x80136128

// 0x801361F8

// 0x80136300

// 0x80136388

// 0x801363DC
// # Maybe start of new file

// 0x8013647C

// 0x801365D0

// 0x8013676C

// 0x801367F0

// 0x801368C4

// 0x80136910

// 0x80136998

// 0x801369E4
// # Maybe start of new file

// 0x80136C18

// 0x80136C8C

// 0x80136E90

// 0x80137004

// 0x801370F8

// 0x80137120

// 0x80137148

// 0x8013718C

// 0x80137234

// 0x80137390

// 0x801375A8

// 0x8013760C

// 0x801376D0

// 0x8013782C

// 0x801379B8

// 0x80137D4C

// 0x80137EFC

// 0x80137F9C

// 0x80137FF8

// 0x801380F4

// 0x80138140

// 0x80138218

// 0x801382E0

// 0x801386E4

// 0x80138798

// 0x80138848

// 0x801388A4

// 0x801388F8

// 0x80138B6C

// 0x80138C0C

// 0x80138CAC

// 0x80138D4C

// 0x80138DEC

// 0x80138FA0

// 0x80139098

// 0x801392A8

// 0x80139320

// 0x80139460

// 0x8013961C

// 0x801397CC

// 0x801398B8

// 0x8013992C

// 0x80139970

// 0x801399E8

// 0x80139A2C

// 0x80139B4C

// 0x80139B90

// 0x80139C84

// 0x80139DE0

// 0x80139E60

// 0x8013A0DC

// 0x8013A2A4

// 0x8013A30C

// 0x8013A3AC

// 0x8013A40C

// 0x8013A470

// 0x8013A534

// 0x8013A5E4

// 0x8013A664

// 0x8013A8B8

// 0x8013A920

// 0x8013AAF8

// 0x8013ABDC

// 0x8013AC7C

// 0x8013ADE0

// 0x8013AEC8

// 0x8013AFC0

// 0x8013B090

// 0x8013B0C8

// vs_css_entry