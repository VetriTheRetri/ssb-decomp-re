#include <mn/menu.h>
#include <it/item.h>
#include <sys/system_00.h>

extern intptr_t lMNVSItemSwitchLabelVSOptionsSprite;    // 0x000009A8
extern intptr_t lMNVSItemSwitchLabelItemSwitchSprite;   // 0x00000B20
extern intptr_t lMNVSItemSwitchToggleOnSprite;          // 0x00001488
extern intptr_t lMNVSItemSwitchToggleOffSprite;         // 0x00001568
extern intptr_t lMNVSItemSwitchToggleSlashSprite;       // 0x00001608

// 0x80133530
void *sMNVSItemSwitchFiles[/* */];

// 0x80133258
Lights1 dMNVSItemSwitchLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x80133270
Gfx dMNVSItemSwitchDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMNVSItemSwitchLights1),
    gsSPEndDisplayList()
};

// 0x80131B00
void mnVSItemSwitchProcLights(Gfx **dls)
{
    gSPDisplayList(dls[0]++, dMNVSItemSwitchDisplayList);
}

// 0x80131B24
void mnVSItemSwitchSetToggleSpriteColors(GObj *gobj, s32 status)
{
    SObj *sobj = SObjGetStruct(gobj);
    
    if (status != nMNOptionTabStatusNot)
    {
        sobj->sprite.red = 0xFF;
        sobj->sprite.green = 0x00;
        sobj->sprite.blue = 0x28;
        
        sobj->next->sprite.red = 0x32;
        sobj->next->sprite.green = 0x32;
        sobj->next->sprite.blue = 0x32;
    }
    else
    {
        sobj->sprite.red = 0x32;
        sobj->sprite.green = 0x32;
        sobj->sprite.blue = 0x32;
        
        sobj->next->sprite.red = 0xFF;
        sobj->next->sprite.green = 0x00;
        sobj->next->sprite.blue = 0x28;
    }
}

// 0x80131B98
void mnVSItemSwitchMakeToggle(GObj *gobj, f32 pos_x, f32 pos_y)
{
    SObj *sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSItemSwitchFiles[0], &lMNVSItemSwitchToggleOnSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = pos_x;
    sobj->pos.y = pos_y;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSItemSwitchFiles[0], &lMNVSItemSwitchToggleOffSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = pos_x + 21.0F + 5.0F;
    sobj->pos.y = pos_y;

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSItemSwitchFiles[0], &lMNVSItemSwitchToggleSlashSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->pos.x = pos_x + 21.0F;
    sobj->pos.y = pos_y;

    sobj->sprite.red = 0x32;
    sobj->sprite.green = 0x32;
    sobj->sprite.blue = 0x32;
}

// 0x80131CA4
void mnVSItemSwitchLabelsProcDisplay(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x80, 0x80, 0x80, 0xFF);
    gDPFillRectangle(gDisplayListHead[0]++, 79, 34, 310, 39);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    
    lbCommonClearExternSpriteParams();
    lbCommonDrawSObjAttr(gobj);
}

// 0x80131DE8
void mnVSItemSwitchMakeLabels(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, mnVSItemSwitchLabelsProcDisplay, 1, GOBJ_DLLINKORDER_DEFAULT, -1);
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSItemSwitchFiles[0], &lMNVSItemSwitchLabelVSOptionsSprite));
    
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->envcolor.r = 0x00;
    sobj->envcolor.g = 0x00;
    sobj->envcolor.b = 0x00;
    
    sobj->sprite.red = 0xF2;
    sobj->sprite.green = 0xC7;
    sobj->sprite.blue = 0x0D;
    
    sobj->pos.x = 84.0F;
    sobj->pos.y = 24.0F;
    
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sMNVSItemSwitchFiles[0], &lMNVSItemSwitchLabelItemSwitchSprite));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    
    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue = 0xFF;
    
    sobj->pos.x = 222.0F;
    sobj->pos.y = 30.0F;
}
