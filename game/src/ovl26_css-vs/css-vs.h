#ifndef _CSSVS_H_
#define _CSSVS_H_

#include <ssb_types.h>
#include <sys/obj_renderer.h>

typedef struct mnCharSelPanelVS
{
    DObj *cursor;
    DObj *token;
    DObj *player;
    DObj *type_button;
    DObj *name_logo;
    DObj *panel_doors;
    DObj *panel;
    DObj *team_color_button;
    DObj *handicap_cpu_level;
    DObj *arrows;
    DObj *handicap_cpu_level_value;
    DObj *white_square;
    DObj *type;
    void* unk_0x34;
    u32 cpu_level;
    u32 handicap;
    u32 team;
    u32 unk_0x44;
    u32 char_id;
    u32 costume_id;
    u32 shade;
    u32 cursor_state;
    u32 is_selected;
    u32 unk_0x5C;
    u32 unk_0x60;
    f32 unk_0x64;
    f32 unk_0x68;
    f32 unk_0x6C;
    f32 unk_0x70;
    f32 unk_0x74;
    u32 unk_0x78;
    u32 unk_0x7C;
    u32 held_port_id;
    u32 panel_state;
    u32 unk_0x88;
    u32 unk_0x8C;
    u32 unk_0x90;
    u32 unk_0x94;
    u32 unk_0x98;
    u32 unk_0x9C;
    u32 unk_0xA0;
    u32 unk_0xA4;
    u32 unk_0xA8;
    u32 unk_0xAC;
    u32 unk_0xB0;
    u32 unk_0xB4;
    u32 unk_0xB8;

} mnCharSelPanelVS;

typedef enum mnSelectButton
{
    mnSelect_CU,                // C-Up
    mnSelect_CR,                // C-Right
    mnSelect_CD,                // C-Down
    mnSelect_CL,                // C-Left
    mnSelect_A                  // A

} gmSaveUnlock;

#endif