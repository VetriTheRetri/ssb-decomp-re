#include <wp/weapon.h>

#include <sys/develop.h>
#include <sys/hal_gu.h>
#include <sys/obj_renderer.h>
#include <sys/obj.h>
#include <sys/ml.h>

#include <PR/gu.h>
#include <PR/mbi.h>
#include <PR/sp.h>
#include <PR/ultratypes.h>

extern Gfx *gDisplayListHead[4];

extern mlBumpAllocRegion gGraphicsHeap;

extern Vtx D_ovl2_8012BCF8;
extern Vtx D_ovl2_8012BE78;
extern Vtx D_ovl2_8012BEB8;
extern Vtx D_ovl2_8012BEF8;
extern Vtx D_ovl2_8012BF38;
extern Vtx D_ovl2_8012BF78;
extern Vtx D_ovl2_8012BFB8;

// 0x8012C128
extern Gfx dGmHitCollisionEdgeGfx[/* */] =
{
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK),
    gsSPVertex(&D_ovl2_8012BCF8, 24, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_LIGHTING | G_SHADING_SMOOTH),
    gsSPEndDisplayList()
};  

// 0x8012C160
extern Gfx dGmHitCollisionBlendGfx[/* */] = 
{
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK),
    gsDPSetCombineMode(G_CC_BLENDPEDECALA, G_CC_BLENDPEDECALA),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetAlphaCompare(G_AC_THRESHOLD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, 0x8012B978),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, 4, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, 4, G_TX_NOLOD),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 255, 512),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 4, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_CLAMP, 4, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_CLAMP, 4, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 20, 22, 0),
    gsSPVertex(&D_ovl2_8012BE78, 4, 24),
    gsSP2Triangles(0, 24, 27, 0, 3, 0, 27, 0),
    gsSP2Triangles(1, 25, 26, 0, 2, 1, 26, 0),
    gsSP2Triangles(27, 24, 0, 0, 27, 0, 3, 0),
    gsSP2Triangles(26, 25, 1, 0, 26, 1, 2, 0),
    gsSPVertex(&D_ovl2_8012BEB8, 4, 24),
    gsSP2Triangles(5, 25, 24, 0, 4, 5, 24, 0),
    gsSP2Triangles(6, 26, 27, 0, 7, 6, 27, 0),
    gsSP2Triangles(24, 25, 5, 0, 24, 5, 4, 0),
    gsSP2Triangles(27, 26, 6, 0, 27, 6, 7, 0),
    gsSPVertex(&D_ovl2_8012BEF8, 4, 24),
    gsSP2Triangles(8, 24, 27, 0, 11, 8, 27, 0),
    gsSP2Triangles(9, 25, 26, 0, 10, 9, 26, 0),
    gsSP2Triangles(27, 24, 8, 0, 27, 8, 11, 0),
    gsSP2Triangles(26, 25, 9, 0, 26, 9, 10, 0),
    gsSPVertex(&D_ovl2_8012BF38, 4, 24),
    gsSP2Triangles(13, 25, 24, 0, 12, 13, 24, 0),
    gsSP2Triangles(14, 26, 27, 0, 15, 14, 27, 0),
    gsSP2Triangles(24, 25, 13, 0, 24, 13, 12, 0),
    gsSP2Triangles(27, 26, 14, 0, 27, 14, 15, 0),
    gsSPVertex(&D_ovl2_8012BF78, 4, 24),
    gsSP2Triangles(17, 25, 24, 0, 16, 17, 24, 0),
    gsSP2Triangles(18, 26, 27, 0, 19, 18, 27, 0),
    gsSP2Triangles(24, 25, 17, 0, 24, 17, 16, 0),
    gsSP2Triangles(27, 26, 18, 0, 27, 18, 19, 0),
    gsSPVertex(&D_ovl2_8012BFB8, 4, 24),
    gsSP2Triangles(21, 25, 24, 0, 20, 21, 24, 0),
    gsSP2Triangles(22, 26, 27, 0, 23, 22, 27, 0),
    gsSP2Triangles(24, 25, 21, 0, 24, 21, 20, 0),
    gsSP2Triangles(27, 26, 22, 0, 27, 22, 23, 0),
    gsDPPipeSync(),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_LIGHTING | G_SHADING_SMOOTH),
    gsSPEndDisplayList()
}; 
extern Gfx dGmHitCollisionCubeGfx;  // 0x8012C310
extern Gfx dGmMapCollisionBottomGfx;
extern Gfx dGmMapCollisionTopGfx;

gsColorRGB dWpRenderPKThunderPrimColor[/* */] = { { 94, 163, 255 }, { 152, 189, 255 }, { 194, 217, 255 }, { 179, 241, 255 } };
gsColorRGB dWpRenderPKThunderEnvColor[/* */] = { { 58,   0, 131 }, {  91,   0, 178 }, { 134,  51, 217 }, { 167, 116, 248 } };

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

                gSPDisplayList(gDisplayListHead[0]++, dGmHitCollisionEdgeGfx);

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
                gSPDisplayList(gDisplayListHead[0]++, dGmHitCollisionBlendGfx);
            }
            gSPDisplayList(gDisplayListHead[0]++, dGmHitCollisionCubeGfx);

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

    gSPDisplayList(gDisplayListHead[1]++, dGmMapCollisionBottomGfx);

    gSPPopMatrix(gDisplayListHead[1]++, G_MTX_MODELVIEW);

    hlMtxStoreGbi(mtx_store, gGraphicsHeap);

    hlMtxTranslate(mtx_store.gbi, translate->x, translate->y + object_coll->center, translate->z);

    gSPMatrix(gDisplayListHead[1]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    hlMtxStoreGbi(mtx_store, gGraphicsHeap);

    hlMtxScale(mtx_store.gbi, object_coll->width / 30.0F, (object_coll->top - object_coll->center) / 30.0F, 1.0F);

    gSPMatrix(gDisplayListHead[1]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    gSPDisplayList(gDisplayListHead[1]++, dGmMapCollisionTopGfx);

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
        wpRenderDrawNormal(weapon_gobj);

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

        gDPSetPrimColor(gDisplayListHead[1]++, 0, 0, dWpRenderPKThunderPrimColor[index].r, dWpRenderPKThunderPrimColor[index].g, dWpRenderPKThunderPrimColor[index].b, 0xFF);

        gDPSetEnvColor(gDisplayListHead[1]++, dWpRenderPKThunderEnvColor[index].r, dWpRenderPKThunderEnvColor[index].g, dWpRenderPKThunderEnvColor[index].b, 0xFF);

        odRenderDObjDLLinksForGObj(weapon_gobj);

        wpRenderDrawZBuffer();

        wpRenderMapCollisions(weapon_gobj);
    }
    else if ((wp->display_mode == dbObject_DisplayMode_Master) || (wp->weapon_hit.update_state == gmHitCollision_UpdateState_Disable))
    {
        wpRenderDrawNormal();

        gDPPipeSync(gDisplayListHead[1]++);

        gDPSetPrimColor(gDisplayListHead[1]++, 0, 0, dWpRenderPKThunderPrimColor[index].r, dWpRenderPKThunderPrimColor[index].g, dWpRenderPKThunderPrimColor[index].b, 0xFF);

        gDPSetEnvColor(gDisplayListHead[1]++, dWpRenderPKThunderEnvColor[index].r, dWpRenderPKThunderEnvColor[index].g, dWpRenderPKThunderEnvColor[index].b, 0xFF);

        odRenderDObjDLLinksForGObj(weapon_gobj);

        wpRenderDrawZBuffer();
    }
    else wpRenderHitCollisions(weapon_gobj);
}
