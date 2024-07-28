#ifndef _GMDATA_H_
#define _GMDATA_H_

// Massive file containing data from various files

#include <ssb_types.h>
#include <sys/obj.h>
#include <gm/gmmisc.h>

// 0x8012B930
extern Vec2f D_ovl2_8012B930[2][4];

extern Gfx D_ovl2_8012C490;
extern Gfx D_ovl2_8012C4B0;

extern gsColorRGBA D_ovl2_8012C4C8;
extern gsColorRGBA D_ovl2_8012C4CC;
extern gsColorRGBA D_ovl2_8012C4D0;
extern gsColorRGBA D_ovl2_8012C4D4;

// 0x8012C128
extern Gfx dGMHitCollisionEdgeGfx[/* */];

// 0x8012C160
extern Gfx dGMHitCollisionBlendGfx[/* */];

extern Gfx dGMHitCollisionCubeGfx[/* */];
extern Gfx dGMHurtCollisionCuboidGfx[/* */];
extern Gfx dGMMapCollisionBottomGfx[/* */];
extern Gfx dGMMapCollisionTopGfx[/* */];

// 0x8012C830
extern f32 dFTParamHandicapTable[/* */][2];

// 0x8012DBD0
extern gmColDesc dFTParamColAnimDescs[/* */]; // 0x8012DBD0

#ifdef GMDATA_COMPILE

Gfx dGMHitCollisionEdgeGfx[/* */] =
{
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK),
    gsSPVertex(&D_ovl2_8012BCF8, 24, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_LIGHTING | G_SHADING_SMOOTH),
    gsSPEndDisplayList()
};

Gfx dGMHitCollisionBlendGfx[/* */] = 
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

f32 dFTParamHandicapTable[/* */][2] = 
{
    { 0.55F,               1.8181818F },
    {  0.6F,             15.0F / 9.0F },
    {  0.7F,               1.4285715F },
    { 0.75F,             12.0F / 9.0F },
    {  0.8F,            11.25F / 9.0F },
    {  0.9F,             10.0F / 9.0F },
    { 0.95F,               1.0526316F },
    {  1.0F,              9.0F / 9.0F },
    { 1.09F,               0.9174312F },
    {  0.5F,             45.0F / 9.0F },
    { 0.55F,             36.0F / 9.0F },
    {  0.6F,             30.0F / 9.0F },
    { 0.65F,         2.857143F / 9.0F },
    {  0.7F,             22.5F / 9.0F },
    { 0.75F,               1.8181818F },
    {  0.8F,               1.6949153F },
    { 0.85F,               1.5873016F },
    {  0.9F,               13.432836F },
    { 0.95F,               12.676057F },
    { 0.65F,             30.0F / 9.0F },
    {  0.7F,               25.714287F },
    { 0.74F,             22.5F / 9.0F },
    { 0.77F,             20.0F / 9.0F },
    {  0.8F,             18.0F / 9.0F },
    {  1.0F,               5.1428576F },
    { 1.05F,                 4.83871F },
    {  1.1F,                4.615384F },
    { 1.15F,               4.2857146F },
    { 1.23F,               4.0540543F },
    { 1.05F,               3.9130435F },
    {  1.1F,              3.6F / 9.0F },
    { 1.15F,   3.333333333333F / 9.0F },
    {  1.2F,               3.2142859F },
    { 1.25F,              3.0F / 9.0F },
    {  0.9F,              9.0F / 9.0F },
    {  1.0F,              9.0F / 9.0F },
    {  1.1F,              9.0F / 9.0F },
    { 1.22F,              9.0F / 9.0F },
    {  1.5F,              9.0F / 9.0F },
    { 1.08F,   8.333333333333F / 9.0F }
};

#endif

#endif
