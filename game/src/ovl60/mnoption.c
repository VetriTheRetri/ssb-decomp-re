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
extern intptr_t lMnOptionMonoTextSprite;        // 0x000071F8
extern intptr_t lMnOptionStereoTextSprite;      // 0x000073A8
extern intptr_t lMnOptionSoundTextSprite;       // 0x00007628
extern intptr_t lMnOptionScreenAdjustTextSprite;// 0x00008138
extern intptr_t lMnOptionBackupClearTextSprite; // 0x00008780
extern intptr_t lMnOptionSoundSlashSprite;      // 0x0000BA28

// GLOBALS

// 0x801337A0
GObj *gMnOptionSoundGObj;

// 0x801337A4
GObj *gMnOptionScreenAdjustGObj;

// 0x801337A8
GObj *gMnOptionBackupClearGObj;

// 0x801337B8
s32 gMnOptionOption;

// 0x801337BC - 0 = mono, 1 = stereo
sb32 gMnOptionSoundIsMonoOrStereo;

// 0x801337C8
GObj *gMnOptionSoundOptionGObj;

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
void mnOptionUpdateSoundOptionSObjs(GObj *gobj, sb32 mono_or_stereo)
{
    SObj *sobj = SObjGetStruct(gobj);

    if (mono_or_stereo != 0)
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

// 0x80131D98
void mnOptionMakeSoundOptionSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    gMnOptionSoundOptionGObj = gobj = omMakeGObjCommon(0, NULL, 4, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 2, 0x80000000, -1);

    sobj = gcAppendSObjWithSprite(gobj, (Sprite*) ((uintptr_t)gMnOptionSpriteFiles[1] + (intptr_t)&lMnOptionMonoTextSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = 179.0F;
    sobj->pos.y = 48.0F;

    sobj = gcAppendSObjWithSprite(gobj, (Sprite*) ((uintptr_t)gMnOptionSpriteFiles[1] + (intptr_t)&lMnOptionStereoTextSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = 236.0F;
    sobj->pos.y = 48.0F;

    sobj = gcAppendSObjWithSprite(gobj, (Sprite*) ((uintptr_t)gMnOptionSpriteFiles[0] + (intptr_t)&lMnOptionSoundSlashSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x32;
    sobj->sprite.green = 0x32;
    sobj->sprite.blue  = 0x32;

    sobj->pos.x = 229.0F;
    sobj->pos.y = 48.0F;

    mnOptionUpdateSoundOptionSObjs(gobj, gMnOptionSoundIsMonoOrStereo);
}

// 0x80131EF0
void mnOptionMakeSoundTextSObj(void)
{
    GObj *gobj;
    SObj *sobj;

    gMnOptionSoundGObj = gobj = omMakeGObjCommon(0, NULL, 4, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 2, 0x80000000, -1);

    mnOptionMakeOptionTabSObjs(gobj, 113.0F, 42.0F, 17);

    mnOptionUpdateOptionTabSObjs(gobj, gMnOptionOption == mnOption_Option_Sound);

    sobj = gcAppendSObjWithSprite(gobj, (Sprite*) ((uintptr_t)gMnOptionSpriteFiles[1] + (intptr_t)&lMnOptionSoundTextSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue  = 0x00;

    sobj->pos.x = 116.0F;
    sobj->pos.y = 46.0F;
}

// 0x80131FC4
void mnOptionMakeScreenAdjustSObj(void)
{
    GObj *gobj;
    SObj *sobj;

    gMnOptionScreenAdjustGObj = gobj = omMakeGObjCommon(0, NULL, 4, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 2, 0x80000000, -1);

    mnOptionMakeOptionTabSObjs(gobj, 91.0F, 89.0F, 17);

    mnOptionUpdateOptionTabSObjs(gobj, gMnOptionOption == mnOption_Option_ScreenAdjust);

    sobj = gcAppendSObjWithSprite(gobj, (Sprite*) ((uintptr_t)gMnOptionSpriteFiles[1] + (intptr_t)&lMnOptionScreenAdjustTextSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue  = 0x00;

    sobj->pos.x = 103.0F;
    sobj->pos.y = 92.0F;
}

// 0x8013209C
void mnOptionMakeBackupClearSObj(void)
{
    GObj *gobj;
    SObj *sobj;

    gMnOptionBackupClearGObj = gobj = omMakeGObjCommon(0, NULL, 4, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 2, 0x80000000, -1);
    mnOptionMakeOptionTabSObjs(gobj, 69.0F, 136.0F, 17);
    mnOptionUpdateOptionTabSObjs(gobj, gMnOptionOption == mnOption_Option_BackupClear);

    sobj = gcAppendSObjWithSprite(gobj, (Sprite*) ((uintptr_t)gMnOptionSpriteFiles[1] + (intptr_t)&lMnOptionBackupClearTextSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red   = 0x00;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue  = 0x00;

    sobj->pos.x = 86.0F;
    sobj->pos.y = 140.0F;
}

// 0x80132174 - Unused?
void func_ovl60_80132174(SObj *sobj)
{
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->shadow_color.r = 0x00;
    sobj->shadow_color.g = 0x00;
    sobj->shadow_color.b = 0x00;

    sobj->sprite.red   = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue  = 0xFF;
}