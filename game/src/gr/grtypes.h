#ifndef _GRTYPES_H_
#define _GRTYPES_H_

#include <PR/ultratypes.h>
#include <sys/obj.h>
#include <mp/mpcoll.h>
#include <gm/battle.h>
#include <gm/gmmisc.h>

#include "grdef.h"
#include "groundvars.h"

struct grCreateDesc
{
    void *dobj_desc;
    void *anim_joint;
    void *aobj;
    void *matanim_joint;
};

struct grRenderDesc
{
    void *unk_grrender_0x0;
    void *unk_grrender_0x4;
    u8 unk_grrender_0x8;
    void *gobjproc;
};

struct grHitbox
{
    s32 env_kind; // Not actually UpdateState, no idea what this is; something to do with sound effects?
    s32 damage;
    s32 angle;
    s32 knockback_scale;
    s32 knockback_weight;
    s32 knockback_base;
    s32 element;
};

struct grMapObject
{
    GObj *ogobj;
    sb32(*proc_update)(GObj *, GObj *, s32 *);
};

struct grMapEnvironment
{
    GObj *egobj;
    sb32(*proc_update)(GObj *, GObj *, grHitbox *, s32 *);

};

struct gmGroundUnkBytes
{
    u8 byte[1]; // Size currently unknown
};

struct grFileInfo
{
    intptr_t size, offset;
};

struct gmGroundInfo
{
    grCreateDesc gr_desc[4];
    mpGeometryInfo *map_geometry;
    u8 unk_0x44;
    void *unk_0x48; // Background image?
    GfxColorAlpha fog_color;
    GfxColor emblem_colors[GMMATCH_PLAYERS_MAX]; // What's this doing here?
    s32 unk_0x5C;
    Vec3f light_angle;
    s16 cam_bound_top;
    s16 cam_bound_bottom;
    s16 cam_bound_right;
    s16 cam_bound_left;
    s16 blastzone_top;
    s16 blastzone_bottom;
    s16 blastzone_right;
    s16 blastzone_left;
    u32 music_id;
    void *map_nodes;
    gmGroundUnkBytes *unk_0x84;
    s16 unk_groundinfo_0x88;
    s16 unk_groundinfo_0x8A;
    s16 unk_groundinfo_0x8C;
    s16 unk_groundinfo_0x8E;
    s16 unk_groundinfo_0x90;
    s16 unk_bound_top;
    s16 unk_bound_bottom;
    s16 unk_bound_right;
    s16 unk_bound_left;
    Vec3h unk_groundinfo_0x9A;
    Vec3h unk_groundinfo_0xA0;
};

union grStruct
{
    // Common stages
    grCommon_GroundVars_Pupupu   pupupu;
    grCommon_GroundVars_Sector   sector;
    grCommon_GroundVars_Zebes    zebes;
    grCommon_GroundVars_Yoster   yoster;
    grCommon_GroundVars_Inishie  inishie;
    grCommon_GroundVars_Jungle   jungle;
    grCommon_GroundVars_Hyrule   hyrule;
    grCommon_GroundVars_Yamabuki yamabuki;
    grCommon_GroundVars_Castle   castle;

    // Bonus Stages
    grBonus_GroundVars_Bonus3    bonus3;
};

#endif