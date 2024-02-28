#include <gm/gmsound.h>
#include <gm/battle.h>
#include <sys/obj_renderer.h>
#include <PR/gbi.h>
#include <PR/os.h>
#include <ovl0/reloc_data_mgr.h>

// 0x80132F28
Lights1 D_ovl61_80132F28 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x80132F40
Gfx D_ovl61_80132F40[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights0(D_ovl61_80132F28),
    gsSPEndDisplayList()
};

// 0x80132F68
GfxColorPair dMnDataSelectedColors = { 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF };

// 0x80132F70
GfxColorPair dMnDataHighlightColors = { 0x82, 0x00 ,0x28, 0xFF, 0x00, 0x28 };

// 0x80132F78
GfxColorPair dMnDataNotColors = { 0x00, 0x00, 0x00, 0x82, 0x82, 0xAA };

// 0x80131B00
void func_ovl61_80131B00(Gfx **display_list)
{
    gSPDisplayList(display_list[0]++, D_ovl61_80132F40);
}

// 0x80131B24
sb32 mnDataCheckSoundTestUnlocked(void)
{
    if (gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_SOUNDTEST)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80131B4C
void mnDataUpdateOptionTabSObjs(GObj *gobj, s32 status)
{
    GfxColorPair selcolors = dMnDataSelectedColors;
    GfxColorPair hicolors = dMnDataHighlightColors;
    GfxColorPair notcolors = dMnDataNotColors;
    GfxColorPair *colors;
    SObj *sobj;
    s32 i;

    switch (status)
    {
    case mnOptionTab_Status_Highlight:
        colors = &hicolors;
        break;

    case mnOptionTab_Status_Not:
        colors = &notcolors;
        break;

    case mnOptionTab_Status_Selected:
        colors = &selcolors;
        break;

    default:
        break; // WARNING: Undefined behavior. This will assign sp 0xC to colors which is uninitialized.
    }
    sobj = SObjGetStruct(gobj);

    for (i = 0; i < mnOptionTab_Status_EnumMax; i++, sobj = sobj->next)
    {
        sobj->shadow_color.r = colors->prim.r;
        sobj->shadow_color.g = colors->prim.g;
        sobj->shadow_color.b = colors->prim.b;

        sobj->sprite.red   = colors->env.r;
        sobj->sprite.green = colors->env.g;
        sobj->sprite.blue  = colors->env.b;
    }
}