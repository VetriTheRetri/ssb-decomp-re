#ifndef _CSSVS_H_
#define _CSSVS_H_

#include <ssb_types.h>
#include <sys/obj_renderer.h>

typedef struct mnCharSelPanelVS
{
    GObj *cursor;
    GObj *token;
    GObj *player;
    GObj *type_button;
    GObj *name_logo;
    GObj *panel_doors;
    GObj *panel;
    GObj *team_color_button;
    GObj *handicap_cpu_level;
    GObj *arrows;
    GObj *handicap_cpu_level_value;
    GObj *white_square;
    GObj *type;
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
    sb32 unk_0x5C;
    u32 unk_0x60;
    f32 unk_0x64;
    f32 unk_0x68;
    f32 unk_0x6C;
    f32 unk_0x70;
    f32 unk_0x74;
    u32 unk_0x78;
    u32 unk_0x7C;
    u32 held_port_id;
    s32 player_type;
    u32 unk_0x88;
    u32 unk_0x8C;
    u32 unk_0x90;
    u32 unk_0x94;
    f32 cursor_pickup_x;
    f32 cursor_pickup_y;
    sb32 unk_0xA0;
    s32 door_offset;
    u32 unk_0xA8;
    u16 unk_0xAC;
    u16 unk_0xAE;
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

typedef enum mnPanelType
{
    mnPanelTypeHuman,           // HMN
    mnPanelTypeCPU,             // CPU
    mnPanelTypeNA               // NA

} mnPanelType;

#define GetAddressFromOffset(file_ptr, offset) \
((int*)((intptr_t)(file_ptr) + (intptr_t)(offset))) \

#endif