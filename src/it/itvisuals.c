#include <it/item.h>

// 0x801713B0
void itManagerUpdateColAnim(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ftMainUpdateColAnim(&ip->colanim, item_gobj, FALSE, FALSE) != FALSE)
    {
        itMainClearColAnim(item_gobj);
    }
}

// 0x801713F4
void itManagerUpdateSpin(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->rotate.vec.f.z += ip->rotate_step;
}
