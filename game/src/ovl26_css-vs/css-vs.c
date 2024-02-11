#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <css-vs.h>

// ovl1 stuff
extern f32 menu_zoom[12]; // D_ovl1_80390D90

// ovl26 stuff

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
extern intptr_t gMnTitleOffsets[2]; // D_ovl26_8013B75C[2]; // title offsets
extern GfxColor gMnTitleColors[2]; // D_ovl26_8013B764[2]; // title colors
extern GfxColorPair gMnCursorTypeColors[4]; // D_ovl26_8013B76C[4]; // cursor type texture colors
extern intptr_t gMnCursorTypeOffsets[4]; // D_ovl26_8013B784[4]; // cursor type texture offsets
extern intptr_t gMnCursorOffsets[4]; // D_ovl26_8013B794[3]; // cursor offsets
extern Vec2i gMnCursorTypeCoords[4]; // D_ovl26_8013B7A0[3]; // x,y offset pairs for cursor type texture

extern f32 gMnFighterYOffset; // D_ovl26_8013BA74;
extern f32 gMnFighterViewportTiltZ; // D_ovl26_8013BA78;

extern mnCharSelPanelVS gPanelVS[GMMATCH_PLAYERS_MAX]; // D_ovl26_8013BA88[GMMATCH_PLAYERS_MAX];
extern s32 mnNumberColorsTime[6]; // D_ovl26_8013B72C[6];
extern s32 mnNumberColorsStock[6]; // D_ovl26_8013B744[6];
extern GObj* mnPickerGObj; // D_ovl26_8013BD78; // stock/time picker
extern s32 mnTimerValue; // D_ovl26_8013BD7C;
extern s32 mnStockValue; // D_ovl26_8013BD80;

extern sb32 gIsTeamBattle; // D_ovl26_8013BDA8
extern sb32 gMnRule; // D_ovl26_8013BDAC
extern GObj* gMnTitleGObj; // D_ovl26_8013BDB0; // title gobj

extern u16 gMenuUnlockedMask; // D_ovl26_8013BDBC; // flag indicating which bonus chars are available

extern s32 gFile011; // D_ovl26_8013C4A0; // file 0x011 pointer
extern s32 gFile000; // D_ovl26_8013C4A4; // file 0x000 pointer
extern s32 gFile014; // D_ovl26_8013C4A8; // file 0x014 pointer
extern s32 gFile015; // D_ovl26_8013C4AC; // file 0x015 pointer
extern s32 gFile012; // D_ovl26_8013C4B0; // file 0x012 pointer
extern s32 gFile013; // D_ovl26_8013C4B4; // file 0x013 pointer
extern s32 gFile016; // D_ovl26_8013C4B8; // file 0x016 pointer

// Offsets
extern intptr_t FILE_011_TYPE_CP_IMAGE_OFFSET = 0xFF8; // file 0x011 image offset for CP type image
extern intptr_t FILE_011_INFINITY_IMAGE_OFFSET = 0x3EF0; // file 0x011 image offset for infinity symbol
extern intptr_t FILE_011_PICKER_TIME_IMAGE_OFFSET = 0x48B0; // file 0x011 image offset for Time picker texture
extern intptr_t FILE_011_PICKER_STOCK_IMAGE_OFFSET = 0x5270; // file 0x011 image offset for Stock picker texture
extern intptr_t FILE_011_PANEL_DOOR_L_IMAGE_OFFSET = 0xCDB0;
extern intptr_t FILE_011_PANEL_DOOR_R_IMAGE_OFFSET = 0xDFA0;
extern intptr_t FILE_011_PANEL_IMAGE_OFFSET = 0x104B0;
extern intptr_t FILE_011_BACK_IMAGE_OFFSET = 0x115C8; // file 0x01? image offset for

extern s32 FILE_013_XBOX_IMAGE_OFFSET = 0x2B8; // file 0x013 image offset
extern s32 FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET = 0xF68; // file 0x013 image offset for portrait question mark image
extern s32 FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET = 0x24D0; // file 0x013 image offset for portrait bg (fire) image

extern intptr_t FILE_015_BACKGROUND_IMAGE_OFFSET = 0x440; // file 0x015 image offset for background tile

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
void mnDrawTimerValue(s32 num)
{
    s32 colors[6] = mnNumberColorsTime;
    SObj* infinity_sobj;

    while (SObjGetStruct(mnPickerGObj)->next != NULL)
    {
        func_800096EC(SObjGetStruct(mnPickerGObj)->next);
    }

    if (num == 100)
    {
        infinity_sobj = func_ovl0_800CCFDC(mnPickerGObj, GetAddressFromOffset(gFile011, &FILE_011_INFINITY_IMAGE_OFFSET));
        infinity_sobj->pos.x = 194.0f;
        infinity_sobj->pos.y = 24.0f;
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

    if (num < 10) mnCreateNumber(mnPickerGObj, num, 208.0f, 23.0f, colors, 2, 0);
    else mnCreateNumber(mnPickerGObj, num, 212.0f, 23.0f, colors, 2, 0);
}

// 0x80133FAC
void mnDrawTimerPicker(s32 num)
{
    GObj* picker_gobj;

    if (mnPickerGObj != NULL) omEjectGObjCommon(mnPickerGObj);

    picker_gobj = func_ovl0_800CD050(0, NULL, 0x19, 0x80000000, func_ovl0_800CCF00, 0x1A, 0x80000000, -1, GetAddressFromOffset(gFile011, &FILE_011_PICKER_TIME_IMAGE_OFFSET), 1, NULL, 1);
    mnPickerGObj = picker_gobj;

    SObjGetStruct(picker_gobj)->pos.x = 140.0f;
    SObjGetStruct(picker_gobj)->pos.y = 22.0f;
    SObjGetStruct(picker_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(picker_gobj)->sprite.attr |= SP_TRANSPARENT;

    mnDrawTimerValue(mnTimerValue);
}

// 0x80134094
void mnDrawStockValue(s32 num)
{
    s32 colors[6] = mnNumberColorsStock;

    while (SObjGetStruct(mnPickerGObj)->next != NULL)
    {
        func_800096EC(SObjGetStruct(mnPickerGObj)->next);
    }

    if (num < 10) mnCreateNumber(mnPickerGObj, num, 210.0f, 23.0f, colors, 2, 0);
    else mnCreateNumber(mnPickerGObj, num, 214.0f, 23.0f, colors, 2, 0);
}

// 0x80134198
void mnDrawStockPicker(s32 num)
{
    GObj* picker_gobj;

    if (mnPickerGObj != NULL) omEjectGObjCommon(mnPickerGObj);

    picker_gobj = func_ovl0_800CD050(0, NULL, 0x19, 0x80000000, func_ovl0_800CCF00, 0x1A, 0x80000000, -1, GetAddressFromOffset(gFile011, &FILE_011_PICKER_STOCK_IMAGE_OFFSET), 1, NULL, 1);
    mnPickerGObj = picker_gobj;

    SObjGetStruct(picker_gobj)->pos.x = 140.0f;
    SObjGetStruct(picker_gobj)->pos.y = 22.0f;
    SObjGetStruct(picker_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(picker_gobj)->sprite.attr |= SP_TRANSPARENT;

    mnDrawStockValue(mnStockValue + 1);
}

// 0x80134284
void mnCreateBackground()
{
    GObj* background_gobj;
    SObj* background_sobj;

    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x04000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0f, 10.0f, 310.0f, 230.0f);

    background_gobj = omMakeGObjCommon(0U, NULL, 0x11U, 0x80000000U);
    omAddGObjRenderProc(background_gobj, func_ovl0_800CCF00, 0x1AU, 0x80000000U, -1);
    background_sobj = func_ovl0_800CCFDC(background_gobj, GetAddressFromOffset(gFile015, &FILE_015_BACKGROUND_IMAGE_OFFSET));
    background_sobj->cmt = G_TX_WRAP;
    background_sobj->cms = G_TX_WRAP;
    background_sobj->maskt = 6;
    background_sobj->masks = 5;
    background_sobj->lrs = 300;
    background_sobj->lrt = 220;
    background_sobj->pos.x = 10.0f;
    background_sobj->pos.y = 10.0f;
}

// 0x801343B0
void mnDrawTitleAndBack()
{
    GObj* back_gobj;
    GObj* title_gobj;
    void* unused;
    intptr_t title_offsets[2] = gMnTitleOffsets;
    GfxColor title_colors[2] = gMnTitleColors;

    title_gobj = func_ovl0_800CD050(0, NULL, 0x19, 0x80000000, func_ovl0_800CCF00, 0x1A, 0x80000000, -1, GetAddressFromOffset(gFile012, title_offsets[gIsTeamBattle]), 1, NULL, 1);
    SObjGetStruct(title_gobj)->pos.x = 27.0f;
    SObjGetStruct(title_gobj)->pos.y = 24.0f;
    SObjGetStruct(title_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(title_gobj)->sprite.attr |= SP_TRANSPARENT;
    SObjGetStruct(title_gobj)->sprite.red = title_colors[gIsTeamBattle].r;
    SObjGetStruct(title_gobj)->sprite.green = title_colors[gIsTeamBattle].g;
    SObjGetStruct(title_gobj)->sprite.blue = title_colors[gIsTeamBattle].b;
    gMnTitleGObj = title_gobj;

    (gMnRule == gmMatch_GameRule_Time) ? mnDrawTimerPicker(mnTimerValue) : mnDrawStockPicker(mnStockValue);

    back_gobj = func_ovl0_800CD050(0, NULL, 0x19, 0x80000000, func_ovl0_800CCF00, 0x1A, 0x80000000, -1, GetAddressFromOffset(gFile011, &FILE_011_BACK_IMAGE_OFFSET), 1, NULL, 1);
    SObjGetStruct(back_gobj)->pos.x = 244.0f;
    SObjGetStruct(back_gobj)->pos.y = 23.0f;
    SObjGetStruct(back_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(back_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 0x801345F0
void nop2(void) { /* */ }

// 0x801345F8
void nop3(void) { /* */ }

// 0x80134600
void nop4(void) { /* */ }

// 0x80134608
// Not really, though - it returns [0, 0, 1, 2, 3] for [0, 1, 2, 3, 4] counts
s32 mnGetSelectedCount(s32 ftKind)
{
    s32 count = 0, i;

    for (i = 0; i < GMMATCH_PLAYERS_MAX; i++)
    {
        if (ftKind == gPanelVS[i].char_id) count += 1;
    }

    return (count != 0) ? count - 1 : count;
}

// 0x80134674
sb32 mnIsCostumeInUse(s32 ftKind, s32 port_id, s32 costume_id) {
    s32 i;

    for (i = 0; i < GMMATCH_PLAYERS_MAX; i++)
    {
        if ((port_id != i) && (ftKind == gPanelVS[i].char_id) && (costume_id == gPanelVS[i].costume_id))
        {
            return TRUE;
        }
    }
    return FALSE;
}

// 0x8013473C
// Gets the first costume not in use by another port
u32 mnGetAvailableCostumeFFA(s32 ftKind, s32 port_id)
{
    mnCharSelPanelVS* panel_info;
    s32 i, j, k;
    sb32 some_array[4];

    for (i = 0; i < 4; i++)
    {
        some_array[i] = FALSE;
    }

    for (i = 0; i < 4; i++)
    {
        if (i != port_id)
        {
            panel_info = &gPanelVS[i];

            if (ftKind == panel_info->char_id)
            {
                for (j = 0; j < 4; j++)
                {
                    if (ftCostume_GetIndexFFA(ftKind, j) == panel_info->costume_id)
                    {
                        some_array[j] = TRUE;
                    }
                }
            }
        }
    }

    for (k = 0; k < 4; k++)
    {
        if (some_array[k] == FALSE) return k;
    }
}

// 0x8013487C
s32 mnGetAvailableCostume(s32 ktKind, s32 port_id)
{
    if (gIsTeamBattle == FALSE)
    {
        return ftCostume_GetIndexFFA(ktKind, mnGetAvailableCostumeFFA(ktKind, port_id));
    }
    else if (gIsTeamBattle == TRUE)
    {
        return ftCostume_GetIndexTeam(ktKind, gPanelVS[port_id].team);
    }
}

// 0x801348EC
s32 mnGetSelectedAnimation(u32 ftKind)
{
    switch (ftKind)
    {
        case Ft_Kind_Fox:
        case Ft_Kind_Samus:
            return 0x10004;
        case Ft_Kind_Donkey:
        case Ft_Kind_Luigi:
        case Ft_Kind_Link:
        case Ft_Kind_Captain:
            return 0x10001;
        case Ft_Kind_Yoshi:
        case Ft_Kind_Purin:
        case Ft_Kind_Ness:
            return 0x10002;
        case Ft_Kind_Mario:
        case Ft_Kind_Kirby:
            return 0x10003;
        default:
            return 0x10001;
    }
}

// 0x8013494C
void mnRotateFighter(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);
    s32 port_id = fp->player;
    mnCharSelPanelVS* panel_info = &gPanelVS[port_id];

    if (panel_info->unk_0x88 == 1)
    {
        if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y < F_DEG_TO_RAD(0.1F))
        {
            if (panel_info->unk_0x8C == 0)
            {
                func_ovl1_803905CC(panel_info->player, mnGetSelectedAnimation(panel_info->char_id));

                panel_info->unk_0x8C = 1;
            }
        }
        else
        {
            DObjGetStruct(fighter_gobj)->rotate.vec.f.y += F_DEG_TO_RAD(20.0F);

            if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > F_DEG_TO_RAD(360.0F))
            {
                DObjGetStruct(fighter_gobj)->rotate.vec.f.y = 0.0f;

                func_ovl1_803905CC(panel_info->player, mnGetSelectedAnimation(panel_info->char_id));

                panel_info->unk_0x8C = 1;
            }
        }
    } else {
        DObjGetStruct(fighter_gobj)->rotate.vec.f.y += F_DEG_TO_RAD(2.0F);

        if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > F_DEG_TO_RAD(360.0F))
        {
            DObjGetStruct(fighter_gobj)->rotate.vec.f.y -= F_DEG_TO_RAD(360.0F);
        }
    }
}

// 0x80134A8C
void func_ovl26_80134A8C(GObj* fighter_gobj, s32 port_id, s32 ftKind, s32 costume_id)
{
    f32 initial_y_rotation;
    ftSpawnInfo spawn_info = ftGlobal_SpawnInfo_MainData;

    if (ftKind != 0x1C)
    {
        if (fighter_gobj != NULL)
        {
            initial_y_rotation = DObjGetStruct(fighter_gobj)->rotate.vec.f.y;
            func_ovl2_800D78E8(fighter_gobj);
        }
        else
        {
            initial_y_rotation = 0.0f;
        }

        spawn_info.ft_kind = ftKind;
        gPanelVS[port_id].costume_id = spawn_info.costume = costume_id;
        spawn_info.shade = gPanelVS[port_id].shade;
        spawn_info.anim_heap = gPanelVS[port_id].unk_0x34;
        spawn_info.player = port_id;
        fighter_gobj = ftManager_MakeFighter(&spawn_info);

        gPanelVS[port_id].player = fighter_gobj;

        omAddGObjCommonProc(fighter_gobj, mnRotateFighter, 1, 1);

        DObjGetStruct(fighter_gobj)->translate.vec.f.x = (f32) ((port_id * 0x348) - 0x4E2);
        DObjGetStruct(fighter_gobj)->translate.vec.f.y = (f32) gMnFighterYOffset;

        DObjGetStruct(fighter_gobj)->rotate.vec.f.y = initial_y_rotation;

        DObjGetStruct(fighter_gobj)->scale.vec.f.x = menu_zoom[ftKind];
        DObjGetStruct(fighter_gobj)->scale.vec.f.y = menu_zoom[ftKind];
        DObjGetStruct(fighter_gobj)->scale.vec.f.z = menu_zoom[ftKind];

        if (gPanelVS[port_id].player_type == 1)
        {
            ftColor_CheckSetColAnimIndex(fighter_gobj, 1, 0);
        }
    }
}

// 0x80134C64
void mnCreateFighterViewport()
{
    OMCamera *cam = OMCameraGetStruct((GObj*)func_8000B93C(0x401U, NULL, 0x10, 0x80000000U, func_80017EC0, 0x1E, 0x48600, -1, 1, 1, 0, 1, 0));
    func_80007080(&cam->viewport, 10.0f, 10.0f, 310.0f, 230.0f);
    cam->view.tilt.x = 0.0f;
    cam->view.tilt.y = 0.0f;
    cam->view.tilt.z = (f32) gMnFighterViewportTiltZ;
    cam->flags = 4;
    cam->view.pan.x = 0.0f;
    cam->view.pan.y = 0.0f;
    cam->view.pan.z = 0.0f;
    cam->view.unk.x = 0.0f;
    cam->view.unk.z = 0.0f;
    cam->view.unk.y = 1.0f;
}

// 0x80134D54
void mnRedrawCursor(GObj* cursor_gobj, s32 state, s32 port_id)
{
    SObj* cursor_sobj;
    f32 current_x, current_y;
    GfxColorPair type_colors[4] = gMnCursorTypeColors;
    intptr_t type_offsets[4] = gMnCursorTypeOffsets;
    intptr_t cursor_offsets[3] = gMnCursorOffsets;
    Vec2i type_positions[3] = gMnCursorTypeCoords;

    current_x = SObjGetStruct(cursor_gobj)->pos.x;
    current_y = SObjGetStruct(cursor_gobj)->pos.y;

    func_8000B760(cursor_gobj);

    cursor_sobj = func_ovl0_800CCFDC(cursor_gobj, GetAddressFromOffset(gFile011, cursor_offsets[port_id]));
    cursor_sobj->pos.x = current_x;
    cursor_sobj->pos.y = current_y;
    cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
    cursor_sobj->sprite.attr |= SP_TRANSPARENT;

    cursor_sobj = func_ovl0_800CCFDC(cursor_gobj, GetAddressFromOffset(gFile011, type_offsets[state]));
    cursor_sobj->pos.x = (f32) SObjGetPrev(cursor_sobj)->pos.x + type_positions[port_id].x;
    cursor_sobj->pos.y = (f32) SObjGetPrev(cursor_sobj)->pos.y + type_positions[port_id].y;
    cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
    cursor_sobj->sprite.attr |= SP_TRANSPARENT;
    cursor_sobj->sprite.red = type_colors[state].prim.r;
    cursor_sobj->sprite.green = type_colors[state].prim.g;
    cursor_sobj->sprite.blue = type_colors[state].prim.b;
    cursor_sobj->shadow_color.r = type_colors[state].env.r;
    cursor_sobj->shadow_color.g = type_colors[state].env.g;
    cursor_sobj->shadow_color.b = type_colors[state].env.b;
}

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