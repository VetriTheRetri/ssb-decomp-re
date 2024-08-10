#include <wp/weapon.h>
#include <ft/fighter.h>
#include <sys/develop.h>
#include <sys/hal_gu.h>
#include <sys/ml.h>

extern mlRegion gGraphicsHeap;

extern void func_ovl0_800CB4B0(GObj*);

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80188E10
syColorRGB dWPRenderPKThunderPrimColors[/* */] = { { 0x5E, 0xA3, 0xFF }, { 0x98, 0xBD, 0xFF }, { 0xC2, 0xD9, 0xFF }, { 0xB3, 0xF1, 0xFF } };

// 0x80188E1C
syColorRGB dWPRenderPKThunderEnvColors[/* */] = { { 0x3A, 0x00, 0x83 }, { 0x5B, 0x00, 0xB2 }, { 0x86, 0x33, 0xD9 }, { 0xA7, 0x74, 0xF8 } };

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
        if ((weapon_hit->update_state != nGMHitUpdateDisable) && (weapon_hit->update_state != nGMHitUpdateNew))
        {
            gDPPipeSync(gDisplayListHead[0]++);

            if (wp->display_mode == nDBDisplayModeHitAttackOutline)
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
            if (weapon_hit->update_state == nGMHitUpdateInterpolate)
            {
                syMatrixStoreGbi(mtx_store, gGraphicsHeap);

                syMatrixTranslate(mtx_store.gbi, weapon_hit->hit_positions[i].pos_prev.x, weapon_hit->hit_positions[i].pos_prev.y, weapon_hit->hit_positions[i].pos_prev.z);

                gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

                syMatrixStoreGbi(mtx_store, gGraphicsHeap);

                syMatrixScale(mtx_store.gbi, weapon_hit->size / 15.0F, weapon_hit->size / 15.0F, weapon_hit->size / 15.0F);

                gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

                gSPDisplayList(gDisplayListHead[0]++, dFTRenderMainHitCollisionEdgeDL);

                gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
            }
            syMatrixStoreGbi(mtx_store, gGraphicsHeap);

            syMatrixTranslate(mtx_store.gbi, weapon_hit->hit_positions[i].pos.x, weapon_hit->hit_positions[i].pos.y, weapon_hit->hit_positions[i].pos.z);

            gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            syMatrixStoreGbi(mtx_store, gGraphicsHeap);

            syMatrixScale(mtx_store.gbi, weapon_hit->size / 15.0F, weapon_hit->size / 15.0F, weapon_hit->size / 15.0F);

            gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            if (weapon_hit->update_state == nGMHitUpdateInterpolate)
            {
                gSPDisplayList(gDisplayListHead[0]++, dFTRenderMainHitCollisionBlendDL);
            }
            gSPDisplayList(gDisplayListHead[0]++, dFTRenderMainHitCollisionCubeDL);

            gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
        }
    }
}

// 0x801671F0
void wpRenderMapCollisions(GObj *weapon_gobj) // Render weapon ECB?
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f *translate = &DObjGetStruct(weapon_gobj)->translate.vec.f;
    mpObjectColl *objcoll = &wp->coll_data.objcoll;
    gsMtxStore mtx_store;

    gDPPipeSync(gDisplayListHead[1]++);

    syMatrixStoreGbi(mtx_store, gGraphicsHeap);

    syMatrixTranslate(mtx_store.gbi, translate->x, translate->y + objcoll->bottom, translate->z);

    gSPMatrix(gDisplayListHead[1]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    syMatrixStoreGbi(mtx_store, gGraphicsHeap);

    syMatrixScale(mtx_store.gbi, objcoll->width / 30.0F, (objcoll->center - objcoll->bottom) / 30.0F, 1.0F);

    gSPMatrix(gDisplayListHead[1]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    gSPDisplayList(gDisplayListHead[1]++, dFTRenderMainMapCollisionBottomDL);

    gSPPopMatrix(gDisplayListHead[1]++, G_MTX_MODELVIEW);

    syMatrixStoreGbi(mtx_store, gGraphicsHeap);

    syMatrixTranslate(mtx_store.gbi, translate->x, translate->y + objcoll->center, translate->z);

    gSPMatrix(gDisplayListHead[1]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    syMatrixStoreGbi(mtx_store, gGraphicsHeap);

    syMatrixScale(mtx_store.gbi, objcoll->width / 30.0F, (objcoll->top - objcoll->center) / 30.0F, 1.0F);

    gSPMatrix(gDisplayListHead[1]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    gSPDisplayList(gDisplayListHead[1]++, dFTRenderMainMapCollisionTopDL);

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

    if (wp->display_mode == nDBDisplayModeMapCollision)
    {
        wpRenderDrawNormal();

        proc_render(weapon_gobj);

        wpRenderDrawZBuffer();

        wpRenderMapCollisions(weapon_gobj);
    }
    else if ((wp->display_mode == nDBDisplayModeMaster) || (wp->weapon_hit.update_state == nGMHitUpdateDisable))
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
    wpRenderMain(weapon_gobj, gcDrawDObjDLHead1);
}

// 0x801675F4
void wpRenderDObjDLLinks(GObj *weapon_gobj)
{
    wpRenderMain(weapon_gobj, gcDrawDObjDLLinksForGObj);
}

// 0x80167618
void func_ovl3_80167618(GObj *weapon_gobj)
{
    wpRenderMain(weapon_gobj, func_ovl0_800CB4B0); // Unused?
}

// 0x8016763C
void wpRenderDObjTreeDLLinks(GObj *weapon_gobj)
{
    wpRenderMain(weapon_gobj, gcDrawDObjTreeDLLinksForGObj);
}

// 0x80167660
void wpRenderPKThunder(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    s32 index = wp->weapon_vars.pkthunder_trail.trail_index;

    if (wp->display_mode == nDBDisplayModeMapCollision)
    {
        wpRenderDrawNormal();

        gDPPipeSync(gDisplayListHead[1]++);

        gDPSetPrimColor(gDisplayListHead[1]++, 0, 0, dWPRenderPKThunderPrimColors[index].r, dWPRenderPKThunderPrimColors[index].g, dWPRenderPKThunderPrimColors[index].b, 0xFF);

        gDPSetEnvColor(gDisplayListHead[1]++, dWPRenderPKThunderEnvColors[index].r, dWPRenderPKThunderEnvColors[index].g, dWPRenderPKThunderEnvColors[index].b, 0xFF);

        gcDrawDObjDLLinksForGObj(weapon_gobj);

        wpRenderDrawZBuffer();

        wpRenderMapCollisions(weapon_gobj);
    }
    else if ((wp->display_mode == nDBDisplayModeMaster) || (wp->weapon_hit.update_state == nGMHitUpdateDisable))
    {
        wpRenderDrawNormal();

        gDPPipeSync(gDisplayListHead[1]++);

        gDPSetPrimColor(gDisplayListHead[1]++, 0, 0, dWPRenderPKThunderPrimColors[index].r, dWPRenderPKThunderPrimColors[index].g, dWPRenderPKThunderPrimColors[index].b, 0xFF);

        gDPSetEnvColor(gDisplayListHead[1]++, dWPRenderPKThunderEnvColors[index].r, dWPRenderPKThunderEnvColors[index].g, dWPRenderPKThunderEnvColors[index].b, 0xFF);

        gcDrawDObjDLLinksForGObj(weapon_gobj);

        wpRenderDrawZBuffer();
    }
    else wpRenderHitCollisions(weapon_gobj);
}
