#include <it/item.h>
#include <gr/ground.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITPorygonItemAttributes;   // 0x0000016C
extern intptr_t lITPorygonHitParties;       // 0x000001B4

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

ITCreateDesc dITPorygonItemDesc = 
{
    nITKindPorygon,                         // Item Kind
    &gGRCommonStruct.yamabuki.item_head,    // Pointer to item file data?
    &lITPorygonItemAttributes,              // Offset of item attributes in file?

    // DObj transformation struct
    {
        nGCTransformTraRotRpyR,             // Main matrix transformations
        nGCTransformNull,                   // Secondary matrix transformations?
        0                                   // ???
    },

    nGMAttackStateNew,                      // Hitbox Update State
    itPorygonCommonProcUpdate,              // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80183B10
void itPorygonCommonUpdateMonsterEvent(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);
    ITMonsterEvent *hit_party = itGetMonsterEvent(dITPorygonItemDesc, lITPorygonHitParties); // (ITMonsterEvent*) ((uintptr_t)*dITPorygonItemDesc.p_file + (intptr_t)&Porygon_Event); // Linker thing

    if (ip->multi == hit_party[ip->item_event_id].timer)
    {
        ip->atk_coll.angle            = hit_party[ip->item_event_id].angle;
        ip->atk_coll.damage           = hit_party[ip->item_event_id].damage;
        ip->atk_coll.size             = hit_party[ip->item_event_id].size;
        ip->atk_coll.knockback_scale  = hit_party[ip->item_event_id].knockback_scale;
        ip->atk_coll.knockback_weight = hit_party[ip->item_event_id].knockback_weight;
        ip->atk_coll.knockback_base   = hit_party[ip->item_event_id].knockback_base;
        ip->atk_coll.element          = hit_party[ip->item_event_id].element;
        ip->atk_coll.can_setoff       = hit_party[ip->item_event_id].can_setoff;
        ip->atk_coll.shield_damage    = hit_party[ip->item_event_id].shield_damage;
        ip->atk_coll.hit_sfx          = hit_party[ip->item_event_id].hit_sfx;

        ip->item_event_id++;

        if (ip->item_event_id == 2)
        {
            ip->item_event_id = 1;
        }
    }
    ip->multi++;

    if (ip->multi == ITPORYGON_SHAKE_STOP_WAIT)
    {
        Vec3f pos = DObjGetStruct(item_gobj)->translate.vec.f;

        pos.y = 0.0F;

        efManagerDustLightMakeEffect(&pos, -1, 1.0F);
    }
}

// 0x80183C84
sb32 itPorygonCommonProcUpdate(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->translate.vec.f.x += ip->item_vars.porygon.offset.x;
    dobj->translate.vec.f.y += ip->item_vars.porygon.offset.y;

    itPorygonCommonUpdateMonsterEvent(item_gobj);

    if (dobj->anim_wait == AOBJ_ANIM_NULL)
    {
        grYamabukiGateSetClosedWait();

        return TRUE;
    }
    else return FALSE;
}

// 0x80183D00
GObj* itPorygonMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(parent_gobj, &dITPorygonItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        ITStruct *ip = itGetStruct(item_gobj);

        ip->item_vars.porygon.offset = *pos;

        ip->is_allow_knockback = TRUE;

        ip->multi = 0;

        ip->item_event_id = 0;

        func_800269C0_275C0(nSYAudioVoiceYamabukiPorygon);
    }
    return item_gobj;
}
