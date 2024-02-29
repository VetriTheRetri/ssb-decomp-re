#include <gm/gmsound.h>
#include <gm/battle.h>
#include <sys/obj_renderer.h>
#include <PR/gbi.h>
#include <PR/os.h>
#include <ovl0/reloc_data_mgr.h>

// EXTERN

extern intptr_t D_NF_000001E8;
extern intptr_t D_NF_00000330;
extern intptr_t D_NF_00000568;

// GLOBALS

// 0x801338B0
void *gMnOptionSpriteFiles[2];

// DATA

// 0x80133628
Lights1 dMnOptionLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x80133640
Gfx dMnOptionDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMnOptionLights1),
    gsSPEndDisplayList()
};

// 0x80133668
GfxColorPair dMnOptionSelectedColors = { 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF };

// 0x80133670
GfxColorPair dMnOptionHighlightColors = { 0x82, 0x00, 0x28, 0xFF, 0x00, 0x28 };

// 0x80133678
GfxColorPair dMnOptionNotColors = { 0x00, 0x00, 0x00, 0x82, 0x82, 0xAA };

// 0x80131B00
void mnOptionAddLightsDisplayList(Gfx **display_list)
{
    gSPDisplayList(display_list[0]++, dMnOptionDisplayList);
}

// 0x80131B24
void mnOptionUpdateOptionTabSObjs(GObj *gobj, s32 status)
{
    GfxColorPair selcolors = dMnOptionSelectedColors;
    GfxColorPair hicolors  = dMnOptionHighlightColors;
    GfxColorPair notcolors = dMnOptionNotColors;
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

    for (i = 0; i < mnOptionTab_Status_EnumMax; i++)
    {
        sobj->shadow_color.r = colors->prim.r;
        sobj->shadow_color.g = colors->prim.g;
        sobj->shadow_color.b = colors->prim.b;

        sobj->sprite.red   = colors->env.r;
        sobj->sprite.green = colors->env.g;
        sobj->sprite.blue  = colors->env.b;

        sobj = sobj->next;
    }
}

// 0x80131BFC
void mnOptionMakeOptionTabSObjs(GObj *gobj, f32 posx, f32 posy, s32 lrs)
{
    SObj *sobj = gcAppendSObjWithSprite(gobj, (Sprite*) ((uintptr_t)gMnOptionSpriteFiles[0] + (intptr_t)&D_NF_000001E8));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = posx;
    sobj->pos.y = posy;

    sobj = gcAppendSObjWithSprite(gobj, (Sprite*) ((uintptr_t)gMnOptionSpriteFiles[0] + (intptr_t)&D_NF_00000330));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = posx + 16.0F;
    sobj->pos.y = posy;

    sobj->cmt = 0;
    sobj->cms = 0;

    sobj->maskt = 4;
    sobj->masks = 0;

    sobj->lrs = lrs * 8;
    sobj->lrt = 29;

    sobj = gcAppendSObjWithSprite(gobj, (Sprite*) ((uintptr_t)gMnOptionSpriteFiles[0] + (intptr_t)&D_NF_00000568));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = posx + 16.0F + (lrs * 8);
    sobj->pos.y = posy;
}

// 0x80131D2C
void mnOptionUpdateSoundSObjs(GObj *gobj, sb32 stereo_or_mono)
{
    SObj *sobj = SObjGetStruct(gobj);

    if (stereo_or_mono != 0)
    {
        sobj->sprite.red   = 0xFF;
        sobj->sprite.green = 0xFF;
        sobj->sprite.blue  = 0xFF;

        sobj->next->sprite.red   = 0x32;
        sobj->next->sprite.green = 0x32;
        sobj->next->sprite.blue  = 0x32;
    }
    else
    {
        sobj->sprite.red   = 0x32;
        sobj->sprite.green = 0x32;
        sobj->sprite.blue  = 0x32;

        sobj->next->sprite.red   = 0xFF;
        sobj->next->sprite.green = 0xFF;
        sobj->next->sprite.blue  = 0xFF;
    }
}
