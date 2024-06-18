#include <wp/weapon.h>

#include <sys/develop.h>
#include <sys/hal_gu.h>
#include <sys/obj.h>
#include <sys/ml.h>

extern mlBumpAllocRegion gGraphicsHeap;

extern Gfx dGMHitCollisionEdgeGfx[/* */];
extern Gfx dGMHitCollisionBlendGfx[/* */];
extern Gfx dGMHitCollisionCubeGfx[/* */];
extern Gfx dGMMapCollisionBottomGfx[/* */];
extern Gfx dGMMapCollisionTopGfx[/* */];

extern void func_ovl0_800CB4B0(GObj*);

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80188E10
gsColorRGB dWPRenderPKThunderPrimColor[/* */] = { { 0x5E, 0xA3, 0xFF }, { 0x98, 0xBD, 0xFF }, { 0xC2, 0xD9, 0xFF }, { 0xB3, 0xF1, 0xFF } };

// 0x80188E1C
gsColorRGB dWPRenderPKThunderEnvColor[/* */] = { { 0x3A, 0x00, 0x83 }, { 0x5B, 0x00, 0xB2 }, { 0x86, 0x33, 0xD9 }, { 0xA7, 0x74, 0xF8 } };

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80166E80
void wpRenderHitCollisions(GObj *weapon_gobj) // Render weapon hitboxes
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    wpHitbox *weapon_hit = &wp->weapon_hit;
    gsMtxStore mtx_store;
    s32 i;

    for (i = 0; i < weapon_hit->hitbox_count; i++)
    {
        if ((weapon_hit->update_state != gmHitCollision_UpdateState_Disable) && (weapon_hit->update_state != gmHitCollision_UpdateState_New))
        {
            gDPPipeSync(gDisplayListHead[0]++);

            if (wp->display_mode == dbObject_DisplayMode_HitAttackOutline)
            {
                gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xB0, 0x00, 0x00, 0xFF);
                gDPSetEnvColor(gDisplayListHead[0]++, 0xB0, 0x00, 0x00, 0xFF);
                gDPSetBlendColor(gDisplayListHead[0]++, 0x00, 0x00, 0x00, 0xE0);
            }
            else
            {
                gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
                gDPSetEnvColor(gDisplayListHead[0]++, 0xB0, 0x00, 0x00, 0xFF);
                gDPSetBlendColor(gDisplayListHead[0]++, 0x00, 0x00, 0x00, 0x00);
            }
            if (weapon_hit->update_state == gmHitCollision_UpdateState_Interpolate)
            {
                hlMtxStoreGbi(mtx_store, gGraphicsHeap);

                hlMtxTranslate(mtx_store.gbi, weapon_hit->hit_positions[i].pos_prev.x, weapon_hit->hit_positions[i].pos_prev.y, weapon_hit->hit_positions[i].pos_prev.z);

                gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

                hlMtxStoreGbi(mtx_store, gGraphicsHeap);

                hlMtxScale(mtx_store.gbi, weapon_hit->size / 15.0F, weapon_hit->size / 15.0F, weapon_hit->size / 15.0F);

                gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

                gSPDisplayList(gDisplayListHead[0]++, dGMHitCollisionEdgeGfx);

                gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
            }
            hlMtxStoreGbi(mtx_store, gGraphicsHeap);

            hlMtxTranslate(mtx_store.gbi, weapon_hit->hit_positions[i].pos.x, weapon_hit->hit_positions[i].pos.y, weapon_hit->hit_positions[i].pos.z);

            gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            hlMtxStoreGbi(mtx_store, gGraphicsHeap);

            hlMtxScale(mtx_store.gbi, weapon_hit->size / 15.0F, weapon_hit->size / 15.0F, weapon_hit->size / 15.0F);

            gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            if (weapon_hit->update_state == gmHitCollision_UpdateState_Interpolate)
            {
                gSPDisplayList(gDisplayListHead[0]++, dGMHitCollisionBlendGfx);
            }
            gSPDisplayList(gDisplayListHead[0]++, dGMHitCollisionCubeGfx);

            gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
        }
    }
}

// 0x801671F0
void wpRenderMapCollisions(GObj *weapon_gobj) // Render item ECB?
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f *translate = &DObjGetStruct(weapon_gobj)->translate.vec.f;
    mpObjectColl *object_coll = &wp->coll_data.object_coll;
    gsMtxStore mtx_store;

    gDPPipeSync(gDisplayListHead[1]++);

    hlMtxStoreGbi(mtx_store, gGraphicsHeap);

    hlMtxTranslate(mtx_store.gbi, translate->x, translate->y + object_coll->bottom, translate->z);

    gSPMatrix(gDisplayListHead[1]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    hlMtxStoreGbi(mtx_store, gGraphicsHeap);

    hlMtxScale(mtx_store.gbi, object_coll->width / 30.0F, (object_coll->center - object_coll->bottom) / 30.0F, 1.0F);

    gSPMatrix(gDisplayListHead[1]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    gSPDisplayList(gDisplayListHead[1]++, dGMMapCollisionBottomGfx);

    gSPPopMatrix(gDisplayListHead[1]++, G_MTX_MODELVIEW);

    hlMtxStoreGbi(mtx_store, gGraphicsHeap);

    hlMtxTranslate(mtx_store.gbi, translate->x, translate->y + object_coll->center, translate->z);

    gSPMatrix(gDisplayListHead[1]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    hlMtxStoreGbi(mtx_store, gGraphicsHeap);

    hlMtxScale(mtx_store.gbi, object_coll->width / 30.0F, (object_coll->top - object_coll->center) / 30.0F, 1.0F);

    gSPMatrix(gDisplayListHead[1]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    gSPDisplayList(gDisplayListHead[1]++, dGMMapCollisionTopGfx);

    gSPPopMatrix(gDisplayListHead[1]++, G_MTX_MODELVIEW);
}

// 0x80167454
void wpRenderDrawNormal(void)
{
    gDPPipeSync(gDisplayListHead[1]++);

    gSPClearGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
}

// 0x801674B8
void wpRenderDrawZBuffer(void)
{
    gDPPipeSync(gDisplayListHead[1]++);

    gSPSetGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
}

// 0x80167520
void wpRenderMain(GObj *weapon_gobj, void(*proc_render)(GObj*))
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wp->display_mode == dbObject_DisplayMode_MapCollision)
    {
        wpRenderDrawNormal();

        proc_render(weapon_gobj);

        wpRenderDrawZBuffer();

        wpRenderMapCollisions(weapon_gobj);
    }
    else if ((wp->display_mode == dbObject_DisplayMode_Master) || (wp->weapon_hit.update_state == gmHitCollision_UpdateState_Disable))
    {
        wpRenderDrawNormal();

        proc_render(weapon_gobj);

        wpRenderDrawZBuffer();
    }
    else wpRenderHitCollisions(weapon_gobj);
}

// 0x801675D0
void wpRenderDLHead1(GObj *weapon_gobj)
{
    wpRenderMain(weapon_gobj, odRenderDObjDLHead1);
}

// 0x801675F4
void wpRenderDObjDLLinks(GObj *weapon_gobj)
{
    wpRenderMain(weapon_gobj, odRenderDObjDLLinksForGObj);
}

// 0x80167618
void func_ovl3_80167618(GObj *weapon_gobj)
{
    wpRenderMain(weapon_gobj, func_ovl0_800CB4B0); // Unused?
}

// 0x8016763C
void wpRenderDObjTreeDLLinks(GObj *weapon_gobj)
{
    wpRenderMain(weapon_gobj, odRenderDObjTreeDLLinksForGObj);
}

// 0x80167660
void wpRenderPKThunder(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    s32 index = wp->weapon_vars.pkthunder_trail.trail_index;

    if (wp->display_mode == dbObject_DisplayMode_MapCollision)
    {
        wpRenderDrawNormal();

        gDPPipeSync(gDisplayListHead[1]++);

        gDPSetPrimColor(gDisplayListHead[1]++, 0, 0, dWPRenderPKThunderPrimColor[index].r, dWPRenderPKThunderPrimColor[index].g, dWPRenderPKThunderPrimColor[index].b, 0xFF);

        gDPSetEnvColor(gDisplayListHead[1]++, dWPRenderPKThunderEnvColor[index].r, dWPRenderPKThunderEnvColor[index].g, dWPRenderPKThunderEnvColor[index].b, 0xFF);

        odRenderDObjDLLinksForGObj(weapon_gobj);

        wpRenderDrawZBuffer();

        wpRenderMapCollisions(weapon_gobj);
    }
    else if ((wp->display_mode == dbObject_DisplayMode_Master) || (wp->weapon_hit.update_state == gmHitCollision_UpdateState_Disable))
    {
        wpRenderDrawNormal();

        gDPPipeSync(gDisplayListHead[1]++);

        gDPSetPrimColor(gDisplayListHead[1]++, 0, 0, dWPRenderPKThunderPrimColor[index].r, dWPRenderPKThunderPrimColor[index].g, dWPRenderPKThunderPrimColor[index].b, 0xFF);

        gDPSetEnvColor(gDisplayListHead[1]++, dWPRenderPKThunderEnvColor[index].r, dWPRenderPKThunderEnvColor[index].g, dWPRenderPKThunderEnvColor[index].b, 0xFF);

        odRenderDObjDLLinksForGObj(weapon_gobj);

        wpRenderDrawZBuffer();
    }
    else wpRenderHitCollisions(weapon_gobj);
}