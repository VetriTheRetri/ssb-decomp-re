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

extern mnCharSelPanelVS gPanelVS[GMMATCH_PLAYERS_MAX]; // D_ovl26_8013BA88[GMMATCH_PLAYERS_MAX];

extern sb32 gIsTeamBattle; // D_ovl26_8013BDA8

extern u16 gMenuUnlockedMask; // D_ovl26_8013BDBC; // flag indicating which bonus chars are available

extern s32 gFile011; // D_ovl26_8013C4A0; // file 0x011 pointer
extern s32 gFile013; // D_ovl26_8013C4B4; // file 0x013 pointer

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

    if ((func_ovl26_80137148() != 0) || (gPanelVS[held_port_id].panel_state == 1))
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
        next_sobj = main_sobj->next_sobj;

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
void mnDestroyTeamButtons(void)
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

// 0x8013295C

// 0x80132A14

// 0x80132BF4

// 0x80132C6C

// 0x80132D1C

// 0x80132DBC

// 0x80132E5C

// 0x80132EFC

// 0x80132F9C

// 0x8013303C

// 0x801330DC

// 0x8013317C

// 0x801331C8

// 0x80133214

// 0x80133260

// 0x801332AC

// 0x80133378

// 0x801334A8

// 0x8013365C

// 0x80133A1C
// # Maybe start of new file
// # Maybe start of new file
// # Maybe start of new file

// 0x80133ABC

// 0x80133B04

// 0x80133BB0

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