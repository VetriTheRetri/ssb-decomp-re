#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>
#include <css-training.h>

// ovl28 stuff
extern f32 dMnTrainingPortraitPositionsX[12]; // 0x80137FB0[12];
extern f32 dMnTrainingPortraitVelocities[12]; // 0x80137FE0[12];

extern mnCharPanelTraining gMnTrainingPanels[2]; // 0x80138558[2];

// 0x80131B00
void mnSetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B58
void mnTR_SelectCharWithToken(s32 port_id, s32 select_button)
{
    s32 held_port_id = gMnTrainingPanels[port_id].held_port_id, costume_id;

    if (select_button != mnSelect_A)
    {
        costume_id = ftCostume_GetIndexFFA(gMnTrainingPanels[held_port_id].char_id, select_button);

        if (func_ovl28_80133350(gMnTrainingPanels[held_port_id].char_id, held_port_id, costume_id) != FALSE)
        {
            func_800269C0(0xA5U);
            return;
        }

        func_ovl2_800E9248(gMnTrainingPanels[held_port_id].player, costume_id, 0);
        gMnTrainingPanels[held_port_id].costume_id = costume_id;
    }

    gMnTrainingPanels[held_port_id].is_selected = TRUE;

    func_ovl28_80134A4C(port_id, held_port_id);

    gMnTrainingPanels[held_port_id].holder_port_id = 4;
    gMnTrainingPanels[port_id].cursor_state = mnCursorStateNotHoldingToken;

    func_ovl28_80133A90(gMnTrainingPanels[port_id].cursor, port_id, 2);

    gMnTrainingPanels[port_id].held_port_id = -1;
    gMnTrainingPanels[held_port_id].unk_0x88 = TRUE;

    func_ovl28_801341B0(port_id, held_port_id);

    func_ovl28_8013405C(held_port_id);
}

// 0x80131C70
f32 func_ovl28_80131C70(s32 portrait_id, f32 current_x_position)
{
    f32 portrait_x_position[12] = dMnTrainingPortraitPositionsX,
        portrait_velocity[12] = dMnTrainingPortraitVelocities;

    if (current_x_position == portrait_x_position[portrait_id])
    {
        return -1.0F;
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

// 0x80131D84
sb32 mnCheckFighterIsXBoxed(s32 ft_kind)
{
    return FALSE;
}

// 0x80131D90
void mnSetPortraitX(GObj *portrait_gobj)
{
    f32 new_portrait_x = func_ovl28_80131C70(portrait_gobj->user_data.s, SObjGetStruct(portrait_gobj)->pos.x);

    if (new_portrait_x != -1.0F)
    {
        SObjGetStruct(portrait_gobj)->pos.x = new_portrait_x;

        if (SObjGetStruct(portrait_gobj)->next != NULL)
        {
            SObjGetStruct(portrait_gobj)->next->pos.x = SObjGetStruct(portrait_gobj)->pos.x + 4.0F;
        }
    }
}

// 0x80131E0C

// 0x80131E68

// 0x80131EFC

// 0x80131FD0

// 0x80132020

// 0x80132070

// 0x80132130

// 0x801323D8

// 0x80132594

// 0x801325D4

// 0x801327C4

// 0x80132864

// 0x80132904

// 0x801329A4

// 0x80132A44

// 0x80132AE4

// 0x80132B84

// 0x80132C24

// 0x80132CA4

// 0x80132E24

// 0x80133014

// 0x80133140

// 0x801332DC

// 0x80133350

// 0x80133408

// 0x801335F0

// 0x8013361C

// 0x8013367C

// 0x801337BC

// 0x801339A0

// 0x80133A90

// 0x80133CA8

// 0x80133D44

// 0x80133E30

// 0x80133EE0

// 0x80133F68

// 0x80133FB4
//# Maybe start of new file
//# Maybe start of new file

// 0x8013405C

// 0x801341B0

// 0x801342B8

// 0x80134340
//# Maybe start of new file

// 0x801345B8

// 0x8013462C

// 0x80134848

// 0x801348F0

// 0x80134A4C

// 0x80134C64

// 0x80134CC8

// 0x80134D8C

// 0x80134EE8

// 0x80135074

// 0x80135430

// 0x801355E0

// 0x80135674

// 0x801356D0

// 0x801357CC

// 0x80135818

// 0x8013586C

// 0x80135934

// 0x80135C18

// 0x80135CCC

// 0x80135D84

// 0x80135DD8

// 0x80135FE8

// 0x80136088

// 0x80136128

// 0x801361C8

// 0x80136268

// 0x801363C8

// 0x801364C0

// 0x801366D0

// 0x80136748

// 0x80136888

// 0x80136A44

// 0x80136BE0

// 0x80136CCC

// 0x80136DD8

// 0x80136E1C

// 0x80136E94

// 0x80136ED8

// 0x80136F84

// 0x80136FC8

// 0x801370BC

// 0x80137254

// 0x80137274

// 0x801372D4

// 0x80137354

// 0x801375D8

// 0x80137638

// 0x80137700

// 0x8013784C

// 0x80137900

// 0x80137960

// 0x801379CC

// 0x80137BB0

// 0x80137C74

// 0x80137CAC

// training_css_entry
